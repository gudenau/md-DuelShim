#include <stdint.h>
#include <stdio.h>

#include <windows.h>

#define T(quote) TEXT(quote)

#define UNUSED(var) (void)(var)

#include "detours.h"

static WINAPI DWORD injectedThread(LPVOID rawArgs);

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    UNUSED(hinstDLL);
    UNUSED(fdwReason);
    UNUSED(lpvReserved);

    //asm("int3");

    switch(fdwReason) {
        case DLL_PROCESS_ATTACH: {
            CreateThread(NULL, 0, injectedThread, NULL, 0, NULL);
        } break;
    }

    return TRUE;
}

static HANDLE HookLog = NULL;

void hookLog(const char* format, ...) {
    if(HookLog == NULL) {
        HookLog = CreateFile(
            TEXT("hook.log"),
            GENERIC_WRITE,
            0,
            NULL,
            CREATE_ALWAYS,
            FILE_ATTRIBUTE_NORMAL,
            NULL
        );
        if(HookLog == NULL) {
            MessageBox(NULL, TEXT("Failed to open log file"), NULL, 0);
            abort();
        }
    }

    va_list args;
    va_start(args, format);
    char buffer[4096 + 1] = {0};
    ssize_t bytes = vsnprintf(buffer, sizeof(buffer) - sizeof(*buffer), format, args);
    va_end(args);
    if(bytes < 0) {
        MessageBox(NULL, TEXT("Failed to print log"), NULL, 0);
        abort();
    }

    intptr_t pointer = (intptr_t) buffer;

    //(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
    while(bytes > 0) {
        DWORD transferred;
        if(WriteFile(
            HookLog,
            (void*) pointer,
            bytes,
            &transferred,
            NULL
        ) == 0) {
            MessageBox(NULL, TEXT("Failed to write log"), NULL, 0);
            abort();
        }

        pointer += transferred;
        bytes -= transferred;
    }
}

int bind(void);
int hook(void);

static WINAPI DWORD injectedThread(LPVOID rawArgs) {
    hookLog("Binding duel.dll\n");
    if(bind() != 0) {
        MessageBox(NULL, TEXT("Failed to bind"), NULL, 0);
        abort();
    }
    hookLog("Hooking duel.dll\n");
    if(hook() != 0) {
        MessageBox(NULL, TEXT("Failed to hook"), NULL, 0);
        abort();
    }

    return 0;
}
