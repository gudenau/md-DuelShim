#include <windows.h>
#include <stdio.h>

static LPTSTR convertAnsi(const char* input) {
#ifdef UNICODE
    int size = MultiByteToWideChar(CP_UTF8, 0, input, -1, NULL, 0);
    LPTSTR output = calloc(size, sizeof(*output));
    MultiByteToWideChar(CP_UTF8, 0, input, -1, output, size);
    return output;
#else
    return strdup(input);
#endif
}

static LPTSTR convertArgs(int count, char** values) {
    if(count == 0) {
        return convertAnsi("");
    }

    size_t length = 0;
    for(int i = 0; i < count; i++) {
        length += strlen(values[i]) + 1;
    }

    char* buffer;
    if(count < 4096) {
        buffer = alloca(length * sizeof(*buffer));
        memset(buffer, 0, length * sizeof(*buffer));
    } else {
        buffer = calloc(length, sizeof(*buffer));
    }

    for(int i = 0; i < count - 1; i++) {
        strcat(buffer, values[i]);
        strcat(buffer, " ");
    }
    strcat(buffer, values[count - 1]);

    LPTSTR converted = convertAnsi(buffer);
    if(count >= 4096) {
        free(buffer);
    }
    return converted;
}

static void die(HANDLE handle) {
    if(handle != NULL) {
        TerminateProcess(handle, 1);
        CloseHandle(handle);
    }

    printf("Failed!\n");
    fflush(stdout);
    Sleep(1000 * 60);
    abort();
}

static LPVOID injectMemory(HANDLE process, const void* buffer, size_t size, int permissions) {
    size_t paddedSize = (size + 0x2000) & ~0x1FFF;

    LPVOID remoteBuffer = VirtualAllocEx(process, NULL, paddedSize, MEM_COMMIT, PAGE_READWRITE);
    if(remoteBuffer == NULL) {
        printf("Failed to allocate remote memory: 0x%08lX\n", GetLastError());
        return NULL;
    }

    if(WriteProcessMemory(process, remoteBuffer, buffer, size, NULL) == 0) {
        printf("Failed to write remote memory: 0x%08lX\n", GetLastError());
        VirtualFreeEx(process, remoteBuffer, paddedSize, MEM_RELEASE);
        return NULL;
    }

    if(permissions != PAGE_READWRITE) {
        DWORD oldPerms;
        if (VirtualProtectEx(process, remoteBuffer, paddedSize, permissions, &oldPerms) == 0) {
            printf("Failed to protect remote memory: 0x%08lX\n", GetLastError());
            VirtualFreeEx(process, remoteBuffer, paddedSize, MEM_RELEASE);
            return NULL;
        }
    }

    return remoteBuffer;
}

int main(int argc, char** argv) {
    if(argc < 3) {
        printf("Usage: %s (dll) (game) [args...]\n", argc == 0 ? "DuelShimLauncher.exe" : argv[0]);
        return 1;
    }

    LPTSTR target = convertAnsi(argv[2]);
    LPTSTR args = convertArgs(argc - 3, &argv[3]);

    STARTUPINFO startupInfo = {0};
    startupInfo.cb = sizeof(startupInfo);

    PROCESS_INFORMATION processInfo = {0};

    printf("Creating process...\n");
    BOOL result = CreateProcess(
        target,
        args,
        NULL,
        NULL,
        FALSE,
        CREATE_SUSPENDED,
        NULL,
        NULL,
        &startupInfo,
        &processInfo
    );
    free(target);

    if(!result) die(NULL);

    printf("Injecting dll...\n");
    LPTSTR dllPath = convertAnsi(argv[1]);
    size_t dllPathLength = (lstrlen(dllPath) + 1) * sizeof(*dllPath);
    LPVOID argBuffer = injectMemory(processInfo.hProcess, dllPath, dllPathLength, PAGE_READONLY);
#ifdef UNICODE
    LPVOID codeBuffer = GetProcAddress(GetModuleHandleW(L"KERNEL32.DLL"), "LoadLibraryW");
#else
    LPVOID codeBuffer = GetProcAddress(GetModuleHandleA("KERNEL32.DLL"), "LoadLibraryA");
#endif

    printf("Creating remote thread...\n");
    HANDLE remoteThread = CreateRemoteThread(
        processInfo.hProcess,
        NULL,
        0,
        codeBuffer,
        argBuffer,
        0,
        NULL
    );
    if(remoteThread == NULL) {
        die(processInfo.hProcess);
    }

    WaitForSingleObject(remoteThread, INFINITE);

    VirtualFreeEx(processInfo.hProcess, argBuffer, (dllPathLength + 0x2000) & ~0x1FFF, MEM_RELEASE);

    DWORD exitCode;
    GetExitCodeThread(remoteThread, &exitCode);
    if(exitCode == 0) {
        printf("Failed to load DLL\n");
        die(processInfo.hProcess);
    }

    ResumeThread(processInfo.hThread);

    WaitForSingleObject(processInfo.hProcess, INFINITE);

    printf("Done!\n");

    return 0;
}