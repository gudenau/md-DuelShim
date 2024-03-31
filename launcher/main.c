#include <windows.h>
#include <stdio.h>

static LPTSTR convertAnsi(const char* input) {
#ifdef UNICODE
    /*
     *  if( str.empty() ) return std::wstring();
    int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
    std::wstring wstrTo( size_needed, 0 );
    MultiByteToWideChar                  (CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
    return wstrTo;
     */
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

typedef struct {
    TCHAR dll[4096];
    LPVOID hookyArgs;
} InjectedArguments;

typedef DWORD (* HookyType)(LPVOID rawArgs);

DWORD WINAPI injectedFunction(LPVOID rawArgs) {
    InjectedArguments* args = (InjectedArguments*) rawArgs;

    HANDLE dllHandle = LoadLibrary(args->dll);
    if(dllHandle == NULL) {
        return 1;
    }

    HookyType hooky = (HookyType) GetProcAddress(dllHandle, "hooky");
    if(hooky == NULL) {
        CloseHandle(dllHandle);
        return 2;
    }

    return hooky(args->hookyArgs);
}

void WINAPI injectedFunctionEnd(void) {}

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

static void getDllPath(LPTSTR buffer, size_t bufferLength) {
    int size = GetCurrentDirectory(0, NULL);
    size += 1 + 16;
    if(bufferLength < size) {
        printf("Buffer was too small\n");
        abort();
    }

    GetCurrentDirectory(size, buffer);
    lstrcat(buffer, TEXT("\\libDuelShim.dll"));
}

int main(int argc, char** argv) {
    if(argc < 2) {
        return 1;
    }

    Sleep(30 * 1000);
    if(1) {
        return 0;
    }

    LPTSTR target = convertAnsi(argv[1]);
    LPTSTR args = convertArgs(argc - 2, &argv[2]);

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
        0/*CREATE_SUSPENDED*/,
        NULL,
        NULL,
        &startupInfo,
        &processInfo
    );
    free(target);

    if(!result) die(NULL);

    printf("Injecting dll...\n");
    LPTSTR dllPath = TEXT("C:\\Users\\gudenau\\CLionProjects\\DuelShim\\cmake-build-debug\\libDuelShim.dll");
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

    //VirtualFreeEx(processInfo.hProcess, argBuffer, (dllPathLength + 0x2000) & ~0x1FFF, MEM_RELEASE);

    Sleep(20);

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