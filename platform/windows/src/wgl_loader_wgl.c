#include "wgl_loader_wgl.h"

#ifdef __cplusplus
extern "C" {
#endif

PFNCHOOSEPIXELFORMATPROC wgl_ChoosePixelFormat = NULL;
PFNDESCRIBEPIXELFORMATPROC wgl_DescribePixelFormat = NULL;
PFNGETENHMETAFILEPIXELFORMATPROC wgl_GetEnhMetaFilePixelFormat = NULL;
PFNGETPIXELFORMATPROC wgl_GetPixelFormat = NULL;
PFNSETPIXELFORMATPROC wgl_SetPixelFormat = NULL;
PFNSWAPBUFFERSPROC wgl_SwapBuffers = NULL;
PFNWGLCOPYCONTEXTPROC wgl_wglCopyContext = NULL;
PFNWGLCREATECONTEXTPROC wgl_wglCreateContext = NULL;
PFNWGLCREATELAYERCONTEXTPROC wgl_wglCreateLayerContext = NULL;
PFNWGLDELETECONTEXTPROC wgl_wglDeleteContext = NULL;
PFNWGLDESCRIBELAYERPLANEPROC wgl_wglDescribeLayerPlane = NULL;
PFNWGLGETCURRENTCONTEXTPROC wgl_wglGetCurrentContext = NULL;
PFNWGLGETCURRENTDCPROC wgl_wglGetCurrentDC = NULL;
PFNWGLGETLAYERPALETTEENTRIESPROC wgl_wglGetLayerPaletteEntries = NULL;
PFNWGLGETPROCADDRESSPROC wgl_wglGetProcAddress = NULL;
PFNWGLMAKECURRENTPROC wgl_wglMakeCurrent = NULL;
PFNWGLREALIZELAYERPALETTEPROC wgl_wglRealizeLayerPalette = NULL;
PFNWGLSETLAYERPALETTEENTRIESPROC wgl_wglSetLayerPaletteEntries = NULL;
PFNWGLSHARELISTSPROC wgl_wglShareLists = NULL;
PFNWGLSWAPLAYERBUFFERSPROC wgl_wglSwapLayerBuffers = NULL;
PFNWGLUSEFONTBITMAPSPROC wgl_wglUseFontBitmaps = NULL;
PFNWGLUSEFONTBITMAPSAPROC wgl_wglUseFontBitmapsA = NULL;
PFNWGLUSEFONTBITMAPSWPROC wgl_wglUseFontBitmapsW = NULL;
PFNWGLUSEFONTOUTLINESPROC wgl_wglUseFontOutlines = NULL;
PFNWGLUSEFONTOUTLINESAPROC wgl_wglUseFontOutlinesA = NULL;
PFNWGLUSEFONTOUTLINESWPROC wgl_wglUseFontOutlinesW = NULL;

#ifndef _WINGDI_
int WINAPI ChoosePixelFormat (HDC hDc, const PIXELFORMATDESCRIPTOR *pPfd) { return wgl_ChoosePixelFormat(hDc, pPfd); }
int WINAPI DescribePixelFormat (HDC hdc, int ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR *ppfd) { return wgl_DescribePixelFormat(hdc, ipfd, cjpfd, ppfd); }
UINT WINAPI GetEnhMetaFilePixelFormat (HENHMETAFILE hemf, const PIXELFORMATDESCRIPTOR *ppfd) { return wgl_GetEnhMetaFilePixelFormat(hemf, ppfd); }
int WINAPI GetPixelFormat (HDC hdc) { return wgl_GetPixelFormat(hdc); }
BOOL WINAPI SetPixelFormat (HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR *ppfd) { return wgl_SetPixelFormat(hdc, ipfd, ppfd); }
BOOL WINAPI SwapBuffers (HDC hdc) { return wgl_SwapBuffers(hdc); }
BOOL WINAPI wglCopyContext (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask) { return wgl_wglCopyContext(hglrcSrc, hglrcDst, mask); }
HGLRC WINAPI wglCreateContext (HDC hDc) { return wgl_wglCreateContext(hDc); }
HGLRC WINAPI wglCreateLayerContext (HDC hDc, int level) { return wgl_wglCreateLayerContext(hDc, level); }
BOOL WINAPI wglDeleteContext (HGLRC oldContext) { return wgl_wglDeleteContext(oldContext); }
BOOL WINAPI wglDescribeLayerPlane (HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR *plpd) { return wgl_wglDescribeLayerPlane(hDc, pixelFormat, layerPlane, nBytes, plpd); }
HGLRC WINAPI wglGetCurrentContext (void) { return wgl_wglGetCurrentContext(); }
HDC WINAPI wglGetCurrentDC (void) { return wgl_wglGetCurrentDC(); }
int WINAPI wglGetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr) { return wgl_wglGetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr); }
PROC WINAPI wglGetProcAddress (LPCSTR lpszProc) { return wgl_wglGetProcAddress(lpszProc); }
BOOL WINAPI wglMakeCurrent (HDC hDc, HGLRC newContext) { return wgl_wglMakeCurrent(hDc, newContext); }
BOOL WINAPI wglRealizeLayerPalette (HDC hdc, int iLayerPlane, BOOL bRealize) { return wgl_wglRealizeLayerPalette(hdc, iLayerPlane, bRealize); }
int WINAPI wglSetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr) { return wgl_wglSetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr); }
BOOL WINAPI wglShareLists (HGLRC hrcSrvShare, HGLRC hrcSrvSource) { return wgl_wglShareLists(hrcSrvShare, hrcSrvSource); }
BOOL WINAPI wglSwapLayerBuffers (HDC hdc, UINT fuFlags) { return wgl_wglSwapLayerBuffers(hdc, fuFlags); }
BOOL WINAPI wglUseFontBitmaps (HDC hDC, DWORD first, DWORD count, DWORD listBase) { return wgl_wglUseFontBitmaps(hDC, first, count, listBase); }
BOOL WINAPI wglUseFontBitmapsA (HDC hDC, DWORD first, DWORD count, DWORD listBase) { return wgl_wglUseFontBitmapsA(hDC, first, count, listBase); }
BOOL WINAPI wglUseFontBitmapsW (HDC hDC, DWORD first, DWORD count, DWORD listBase) { return wgl_wglUseFontBitmapsW(hDC, first, count, listBase); }
BOOL WINAPI wglUseFontOutlines (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf) { return wgl_wglUseFontOutlines(hDC, first, count, listBase, deviation, extrusion, format, lpgmf); }
BOOL WINAPI wglUseFontOutlinesA (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf) { return wgl_wglUseFontOutlinesA(hDC, first, count, listBase, deviation, extrusion, format, lpgmf); }
BOOL WINAPI wglUseFontOutlinesW (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf) { return wgl_wglUseFontOutlinesW(hDC, first, count, listBase, deviation, extrusion, format, lpgmf); }
#endif

void load_WGL_WGL() {
    wgl_ChoosePixelFormat = (PFNCHOOSEPIXELFORMATPROC)wgl_loader_GetProcAddress("ChoosePixelFormat");
    wgl_DescribePixelFormat = (PFNDESCRIBEPIXELFORMATPROC)wgl_loader_GetProcAddress("DescribePixelFormat");
    wgl_GetEnhMetaFilePixelFormat = (PFNGETENHMETAFILEPIXELFORMATPROC)wgl_loader_GetProcAddress("GetEnhMetaFilePixelFormat");
    wgl_GetPixelFormat = (PFNGETPIXELFORMATPROC)wgl_loader_GetProcAddress("GetPixelFormat");
    wgl_SetPixelFormat = (PFNSETPIXELFORMATPROC)wgl_loader_GetProcAddress("SetPixelFormat");
    wgl_SwapBuffers = (PFNSWAPBUFFERSPROC)wgl_loader_GetProcAddress("SwapBuffers");
    wgl_wglCopyContext = (PFNWGLCOPYCONTEXTPROC)wgl_loader_GetProcAddress("wglCopyContext");
    wgl_wglCreateContext = (PFNWGLCREATECONTEXTPROC)wgl_loader_GetProcAddress("wglCreateContext");
    wgl_wglCreateLayerContext = (PFNWGLCREATELAYERCONTEXTPROC)wgl_loader_GetProcAddress("wglCreateLayerContext");
    wgl_wglDeleteContext = (PFNWGLDELETECONTEXTPROC)wgl_loader_GetProcAddress("wglDeleteContext");
    wgl_wglDescribeLayerPlane = (PFNWGLDESCRIBELAYERPLANEPROC)wgl_loader_GetProcAddress("wglDescribeLayerPlane");
    wgl_wglGetCurrentContext = (PFNWGLGETCURRENTCONTEXTPROC)wgl_loader_GetProcAddress("wglGetCurrentContext");
    wgl_wglGetCurrentDC = (PFNWGLGETCURRENTDCPROC)wgl_loader_GetProcAddress("wglGetCurrentDC");
    wgl_wglGetLayerPaletteEntries = (PFNWGLGETLAYERPALETTEENTRIESPROC)wgl_loader_GetProcAddress("wglGetLayerPaletteEntries");
    wgl_wglGetProcAddress = (PFNWGLGETPROCADDRESSPROC)wgl_loader_GetProcAddress("wglGetProcAddress");
    wgl_wglMakeCurrent = (PFNWGLMAKECURRENTPROC)wgl_loader_GetProcAddress("wglMakeCurrent");
    wgl_wglRealizeLayerPalette = (PFNWGLREALIZELAYERPALETTEPROC)wgl_loader_GetProcAddress("wglRealizeLayerPalette");
    wgl_wglSetLayerPaletteEntries = (PFNWGLSETLAYERPALETTEENTRIESPROC)wgl_loader_GetProcAddress("wglSetLayerPaletteEntries");
    wgl_wglShareLists = (PFNWGLSHARELISTSPROC)wgl_loader_GetProcAddress("wglShareLists");
    wgl_wglSwapLayerBuffers = (PFNWGLSWAPLAYERBUFFERSPROC)wgl_loader_GetProcAddress("wglSwapLayerBuffers");
    wgl_wglUseFontBitmaps = (PFNWGLUSEFONTBITMAPSPROC)wgl_loader_GetProcAddress("wglUseFontBitmaps");
    wgl_wglUseFontBitmapsA = (PFNWGLUSEFONTBITMAPSAPROC)wgl_loader_GetProcAddress("wglUseFontBitmapsA");
    wgl_wglUseFontBitmapsW = (PFNWGLUSEFONTBITMAPSWPROC)wgl_loader_GetProcAddress("wglUseFontBitmapsW");
    wgl_wglUseFontOutlines = (PFNWGLUSEFONTOUTLINESPROC)wgl_loader_GetProcAddress("wglUseFontOutlines");
    wgl_wglUseFontOutlinesA = (PFNWGLUSEFONTOUTLINESAPROC)wgl_loader_GetProcAddress("wglUseFontOutlinesA");
    wgl_wglUseFontOutlinesW = (PFNWGLUSEFONTOUTLINESWPROC)wgl_loader_GetProcAddress("wglUseFontOutlinesW");
}

#ifdef __cplusplus
}
#endif
