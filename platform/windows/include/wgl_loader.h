#pragma once

#ifndef _WGL_LOADER_H_
#define _WGL_LOADER_H_

#ifndef WINAPI
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#include <Windows.h>
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef PROC (WINAPI * PFNWGLLOADERWGLGETPROCADDRESSPROC) (LPCSTR lpszProc);
extern PFNWGLLOADERWGLGETPROCADDRESSPROC wgl_loader_wglGetProcAddress;

extern PROC WINAPI wgl_loader_GetProcAddress(LPCSTR procName);

#ifdef __cplusplus
}
#endif
#endif