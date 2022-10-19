#include "wgl_loader.h"

PFNWGLLOADERWGLGETPROCADDRESSPROC wgl_loader_wglGetProcAddress = NULL;

HMODULE opengl32 = NULL;

PROC WINAPI wgl_loader_GetProcAddress(LPCSTR procName) {
    if (!opengl32) {
        opengl32 = LoadLibraryA("opengl32.dll");

        if (opengl32) {
            wgl_loader_wglGetProcAddress = (PFNWGLLOADERWGLGETPROCADDRESSPROC)GetProcAddress(opengl32, "wglGetProcAddress");
        }
    }

    PROC proc = NULL;
    if (wgl_loader_wglGetProcAddress) {
        proc = wgl_loader_wglGetProcAddress(procName);
    }

    if (!proc && opengl32) {
        proc = GetProcAddress(opengl32, procName);
    }
    
    return proc;
}
