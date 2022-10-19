#pragma once

#ifndef _WGL_LOADER_WGL_H_
#define _WGL_LOADER_WGL_H_

#include "GL/glcorearb.h"
#include "GL/wgl.h"
#include "wgl_loader.h"

#ifdef __cplusplus
extern "C" {
#endif

extern PFNCHOOSEPIXELFORMATPROC wgl_ChoosePixelFormat;
extern PFNDESCRIBEPIXELFORMATPROC wgl_DescribePixelFormat;
extern PFNGETENHMETAFILEPIXELFORMATPROC wgl_GetEnhMetaFilePixelFormat;
extern PFNGETPIXELFORMATPROC wgl_GetPixelFormat;
extern PFNSETPIXELFORMATPROC wgl_SetPixelFormat;
extern PFNSWAPBUFFERSPROC wgl_SwapBuffers;
extern PFNWGLCOPYCONTEXTPROC wgl_wglCopyContext;
extern PFNWGLCREATECONTEXTPROC wgl_wglCreateContext;
extern PFNWGLCREATELAYERCONTEXTPROC wgl_wglCreateLayerContext;
extern PFNWGLDELETECONTEXTPROC wgl_wglDeleteContext;
extern PFNWGLDESCRIBELAYERPLANEPROC wgl_wglDescribeLayerPlane;
extern PFNWGLGETCURRENTCONTEXTPROC wgl_wglGetCurrentContext;
extern PFNWGLGETCURRENTDCPROC wgl_wglGetCurrentDC;
extern PFNWGLGETLAYERPALETTEENTRIESPROC wgl_wglGetLayerPaletteEntries;
extern PFNWGLGETPROCADDRESSPROC wgl_wglGetProcAddress;
extern PFNWGLMAKECURRENTPROC wgl_wglMakeCurrent;
extern PFNWGLREALIZELAYERPALETTEPROC wgl_wglRealizeLayerPalette;
extern PFNWGLSETLAYERPALETTEENTRIESPROC wgl_wglSetLayerPaletteEntries;
extern PFNWGLSHARELISTSPROC wgl_wglShareLists;
extern PFNWGLSWAPLAYERBUFFERSPROC wgl_wglSwapLayerBuffers;
extern PFNWGLUSEFONTBITMAPSPROC wgl_wglUseFontBitmaps;
extern PFNWGLUSEFONTBITMAPSAPROC wgl_wglUseFontBitmapsA;
extern PFNWGLUSEFONTBITMAPSWPROC wgl_wglUseFontBitmapsW;
extern PFNWGLUSEFONTOUTLINESPROC wgl_wglUseFontOutlines;
extern PFNWGLUSEFONTOUTLINESAPROC wgl_wglUseFontOutlinesA;
extern PFNWGLUSEFONTOUTLINESWPROC wgl_wglUseFontOutlinesW;

#ifndef _WINGDI_
int WINAPI ChoosePixelFormat(HDC hDc, const PIXELFORMATDESCRIPTOR* pPfd);
int WINAPI DescribePixelFormat(HDC hdc, int ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR* ppfd);
UINT WINAPI GetEnhMetaFilePixelFormat(HENHMETAFILE hemf, const PIXELFORMATDESCRIPTOR* ppfd);
int WINAPI GetPixelFormat(HDC hdc);
BOOL WINAPI SetPixelFormat(HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR* ppfd);
BOOL WINAPI SwapBuffers(HDC hdc);
BOOL WINAPI wglCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
HGLRC WINAPI wglCreateContext(HDC hDc);
HGLRC WINAPI wglCreateLayerContext(HDC hDc, int level);
BOOL WINAPI wglDeleteContext(HGLRC oldContext);
BOOL WINAPI wglDescribeLayerPlane(HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR* plpd);
HGLRC WINAPI wglGetCurrentContext(void);
HDC WINAPI wglGetCurrentDC(void);
int WINAPI wglGetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF* pcr);
PROC WINAPI wglGetProcAddress(LPCSTR lpszProc);
BOOL WINAPI wglMakeCurrent(HDC hDc, HGLRC newContext);
BOOL WINAPI wglRealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize);
int WINAPI wglSetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF* pcr);
BOOL WINAPI wglShareLists(HGLRC hrcSrvShare, HGLRC hrcSrvSource);
BOOL WINAPI wglSwapLayerBuffers(HDC hdc, UINT fuFlags);
BOOL WINAPI wglUseFontBitmaps(HDC hDC, DWORD first, DWORD count, DWORD listBase);
BOOL WINAPI wglUseFontBitmapsA(HDC hDC, DWORD first, DWORD count, DWORD listBase);
BOOL WINAPI wglUseFontBitmapsW(HDC hDC, DWORD first, DWORD count, DWORD listBase);
BOOL WINAPI wglUseFontOutlines(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
BOOL WINAPI wglUseFontOutlinesA(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
BOOL WINAPI wglUseFontOutlinesW(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
#endif

void load_WGL_WGL();

#ifdef __cplusplus
}
#endif
#endif