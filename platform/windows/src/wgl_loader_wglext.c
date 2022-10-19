#include "wgl_loader_wglext.h"

#ifdef __cplusplus
extern "C" {
#endif

PFNWGLCREATEBUFFERREGIONARBPROC wgl_wglCreateBufferRegionARB = NULL;
PFNWGLDELETEBUFFERREGIONARBPROC wgl_wglDeleteBufferRegionARB = NULL;
PFNWGLSAVEBUFFERREGIONARBPROC wgl_wglSaveBufferRegionARB = NULL;
PFNWGLRESTOREBUFFERREGIONARBPROC wgl_wglRestoreBufferRegionARB = NULL;
PFNWGLCREATECONTEXTATTRIBSARBPROC wgl_wglCreateContextAttribsARB = NULL;
PFNWGLGETEXTENSIONSSTRINGARBPROC wgl_wglGetExtensionsStringARB = NULL;
PFNWGLMAKECONTEXTCURRENTARBPROC wgl_wglMakeContextCurrentARB = NULL;
PFNWGLGETCURRENTREADDCARBPROC wgl_wglGetCurrentReadDCARB = NULL;
PFNWGLCREATEPBUFFERARBPROC wgl_wglCreatePbufferARB = NULL;
PFNWGLGETPBUFFERDCARBPROC wgl_wglGetPbufferDCARB = NULL;
PFNWGLRELEASEPBUFFERDCARBPROC wgl_wglReleasePbufferDCARB = NULL;
PFNWGLDESTROYPBUFFERARBPROC wgl_wglDestroyPbufferARB = NULL;
PFNWGLQUERYPBUFFERARBPROC wgl_wglQueryPbufferARB = NULL;
PFNWGLGETPIXELFORMATATTRIBIVARBPROC wgl_wglGetPixelFormatAttribivARB = NULL;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC wgl_wglGetPixelFormatAttribfvARB = NULL;
PFNWGLCHOOSEPIXELFORMATARBPROC wgl_wglChoosePixelFormatARB = NULL;
PFNWGLBINDTEXIMAGEARBPROC wgl_wglBindTexImageARB = NULL;
PFNWGLRELEASETEXIMAGEARBPROC wgl_wglReleaseTexImageARB = NULL;
PFNWGLSETPBUFFERATTRIBARBPROC wgl_wglSetPbufferAttribARB = NULL;
PFNWGLSETSTEREOEMITTERSTATE3DLPROC wgl_wglSetStereoEmitterState3DL = NULL;
PFNWGLGETGPUIDSAMDPROC wgl_wglGetGPUIDsAMD = NULL;
PFNWGLGETGPUINFOAMDPROC wgl_wglGetGPUInfoAMD = NULL;
PFNWGLGETCONTEXTGPUIDAMDPROC wgl_wglGetContextGPUIDAMD = NULL;
PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC wgl_wglCreateAssociatedContextAMD = NULL;
PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC wgl_wglCreateAssociatedContextAttribsAMD = NULL;
PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC wgl_wglDeleteAssociatedContextAMD = NULL;
PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC wgl_wglMakeAssociatedContextCurrentAMD = NULL;
PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC wgl_wglGetCurrentAssociatedContextAMD = NULL;
PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC wgl_wglBlitContextFramebufferAMD = NULL;
PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC wgl_wglCreateDisplayColorTableEXT = NULL;
PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wgl_wglLoadDisplayColorTableEXT = NULL;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wgl_wglBindDisplayColorTableEXT = NULL;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wgl_wglDestroyDisplayColorTableEXT = NULL;
PFNWGLGETEXTENSIONSSTRINGEXTPROC wgl_wglGetExtensionsStringEXT = NULL;
PFNWGLMAKECONTEXTCURRENTEXTPROC wgl_wglMakeContextCurrentEXT = NULL;
PFNWGLGETCURRENTREADDCEXTPROC wgl_wglGetCurrentReadDCEXT = NULL;
PFNWGLCREATEPBUFFEREXTPROC wgl_wglCreatePbufferEXT = NULL;
PFNWGLGETPBUFFERDCEXTPROC wgl_wglGetPbufferDCEXT = NULL;
PFNWGLRELEASEPBUFFERDCEXTPROC wgl_wglReleasePbufferDCEXT = NULL;
PFNWGLDESTROYPBUFFEREXTPROC wgl_wglDestroyPbufferEXT = NULL;
PFNWGLQUERYPBUFFEREXTPROC wgl_wglQueryPbufferEXT = NULL;
PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wgl_wglGetPixelFormatAttribivEXT = NULL;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wgl_wglGetPixelFormatAttribfvEXT = NULL;
PFNWGLCHOOSEPIXELFORMATEXTPROC wgl_wglChoosePixelFormatEXT = NULL;
PFNWGLSWAPINTERVALEXTPROC wgl_wglSwapIntervalEXT = NULL;
PFNWGLGETSWAPINTERVALEXTPROC wgl_wglGetSwapIntervalEXT = NULL;
PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC wgl_wglGetDigitalVideoParametersI3D = NULL;
PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC wgl_wglSetDigitalVideoParametersI3D = NULL;
PFNWGLGETGAMMATABLEPARAMETERSI3DPROC wgl_wglGetGammaTableParametersI3D = NULL;
PFNWGLSETGAMMATABLEPARAMETERSI3DPROC wgl_wglSetGammaTableParametersI3D = NULL;
PFNWGLGETGAMMATABLEI3DPROC wgl_wglGetGammaTableI3D = NULL;
PFNWGLSETGAMMATABLEI3DPROC wgl_wglSetGammaTableI3D = NULL;
PFNWGLENABLEGENLOCKI3DPROC wgl_wglEnableGenlockI3D = NULL;
PFNWGLDISABLEGENLOCKI3DPROC wgl_wglDisableGenlockI3D = NULL;
PFNWGLISENABLEDGENLOCKI3DPROC wgl_wglIsEnabledGenlockI3D = NULL;
PFNWGLGENLOCKSOURCEI3DPROC wgl_wglGenlockSourceI3D = NULL;
PFNWGLGETGENLOCKSOURCEI3DPROC wgl_wglGetGenlockSourceI3D = NULL;
PFNWGLGENLOCKSOURCEEDGEI3DPROC wgl_wglGenlockSourceEdgeI3D = NULL;
PFNWGLGETGENLOCKSOURCEEDGEI3DPROC wgl_wglGetGenlockSourceEdgeI3D = NULL;
PFNWGLGENLOCKSAMPLERATEI3DPROC wgl_wglGenlockSampleRateI3D = NULL;
PFNWGLGETGENLOCKSAMPLERATEI3DPROC wgl_wglGetGenlockSampleRateI3D = NULL;
PFNWGLGENLOCKSOURCEDELAYI3DPROC wgl_wglGenlockSourceDelayI3D = NULL;
PFNWGLGETGENLOCKSOURCEDELAYI3DPROC wgl_wglGetGenlockSourceDelayI3D = NULL;
PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC wgl_wglQueryGenlockMaxSourceDelayI3D = NULL;
PFNWGLCREATEIMAGEBUFFERI3DPROC wgl_wglCreateImageBufferI3D = NULL;
PFNWGLDESTROYIMAGEBUFFERI3DPROC wgl_wglDestroyImageBufferI3D = NULL;
PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC wgl_wglAssociateImageBufferEventsI3D = NULL;
PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC wgl_wglReleaseImageBufferEventsI3D = NULL;
PFNWGLENABLEFRAMELOCKI3DPROC wgl_wglEnableFrameLockI3D = NULL;
PFNWGLDISABLEFRAMELOCKI3DPROC wgl_wglDisableFrameLockI3D = NULL;
PFNWGLISENABLEDFRAMELOCKI3DPROC wgl_wglIsEnabledFrameLockI3D = NULL;
PFNWGLQUERYFRAMELOCKMASTERI3DPROC wgl_wglQueryFrameLockMasterI3D = NULL;
PFNWGLGETFRAMEUSAGEI3DPROC wgl_wglGetFrameUsageI3D = NULL;
PFNWGLBEGINFRAMETRACKINGI3DPROC wgl_wglBeginFrameTrackingI3D = NULL;
PFNWGLENDFRAMETRACKINGI3DPROC wgl_wglEndFrameTrackingI3D = NULL;
PFNWGLQUERYFRAMETRACKINGI3DPROC wgl_wglQueryFrameTrackingI3D = NULL;
PFNWGLDXSETRESOURCESHAREHANDLENVPROC wgl_wglDXSetResourceShareHandleNV = NULL;
PFNWGLDXOPENDEVICENVPROC wgl_wglDXOpenDeviceNV = NULL;
PFNWGLDXCLOSEDEVICENVPROC wgl_wglDXCloseDeviceNV = NULL;
PFNWGLDXREGISTEROBJECTNVPROC wgl_wglDXRegisterObjectNV = NULL;
PFNWGLDXUNREGISTEROBJECTNVPROC wgl_wglDXUnregisterObjectNV = NULL;
PFNWGLDXOBJECTACCESSNVPROC wgl_wglDXObjectAccessNV = NULL;
PFNWGLDXLOCKOBJECTSNVPROC wgl_wglDXLockObjectsNV = NULL;
PFNWGLDXUNLOCKOBJECTSNVPROC wgl_wglDXUnlockObjectsNV = NULL;
PFNWGLCOPYIMAGESUBDATANVPROC wgl_wglCopyImageSubDataNV = NULL;
PFNWGLDELAYBEFORESWAPNVPROC wgl_wglDelayBeforeSwapNV = NULL;
PFNWGLENUMGPUSNVPROC wgl_wglEnumGpusNV = NULL;
PFNWGLENUMGPUDEVICESNVPROC wgl_wglEnumGpuDevicesNV = NULL;
PFNWGLCREATEAFFINITYDCNVPROC wgl_wglCreateAffinityDCNV = NULL;
PFNWGLENUMGPUSFROMAFFINITYDCNVPROC wgl_wglEnumGpusFromAffinityDCNV = NULL;
PFNWGLDELETEDCNVPROC wgl_wglDeleteDCNV = NULL;
PFNWGLENUMERATEVIDEODEVICESNVPROC wgl_wglEnumerateVideoDevicesNV = NULL;
PFNWGLBINDVIDEODEVICENVPROC wgl_wglBindVideoDeviceNV = NULL;
PFNWGLQUERYCURRENTCONTEXTNVPROC wgl_wglQueryCurrentContextNV = NULL;
PFNWGLJOINSWAPGROUPNVPROC wgl_wglJoinSwapGroupNV = NULL;
PFNWGLBINDSWAPBARRIERNVPROC wgl_wglBindSwapBarrierNV = NULL;
PFNWGLQUERYSWAPGROUPNVPROC wgl_wglQuerySwapGroupNV = NULL;
PFNWGLQUERYMAXSWAPGROUPSNVPROC wgl_wglQueryMaxSwapGroupsNV = NULL;
PFNWGLQUERYFRAMECOUNTNVPROC wgl_wglQueryFrameCountNV = NULL;
PFNWGLRESETFRAMECOUNTNVPROC wgl_wglResetFrameCountNV = NULL;
PFNWGLALLOCATEMEMORYNVPROC wgl_wglAllocateMemoryNV = NULL;
PFNWGLFREEMEMORYNVPROC wgl_wglFreeMemoryNV = NULL;
PFNWGLBINDVIDEOCAPTUREDEVICENVPROC wgl_wglBindVideoCaptureDeviceNV = NULL;
PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC wgl_wglEnumerateVideoCaptureDevicesNV = NULL;
PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC wgl_wglLockVideoCaptureDeviceNV = NULL;
PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC wgl_wglQueryVideoCaptureDeviceNV = NULL;
PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC wgl_wglReleaseVideoCaptureDeviceNV = NULL;
PFNWGLGETVIDEODEVICENVPROC wgl_wglGetVideoDeviceNV = NULL;
PFNWGLRELEASEVIDEODEVICENVPROC wgl_wglReleaseVideoDeviceNV = NULL;
PFNWGLBINDVIDEOIMAGENVPROC wgl_wglBindVideoImageNV = NULL;
PFNWGLRELEASEVIDEOIMAGENVPROC wgl_wglReleaseVideoImageNV = NULL;
PFNWGLSENDPBUFFERTOVIDEONVPROC wgl_wglSendPbufferToVideoNV = NULL;
PFNWGLGETVIDEOINFONVPROC wgl_wglGetVideoInfoNV = NULL;
PFNWGLGETSYNCVALUESOMLPROC wgl_wglGetSyncValuesOML = NULL;
PFNWGLGETMSCRATEOMLPROC wgl_wglGetMscRateOML = NULL;
PFNWGLSWAPBUFFERSMSCOMLPROC wgl_wglSwapBuffersMscOML = NULL;
PFNWGLSWAPLAYERBUFFERSMSCOMLPROC wgl_wglSwapLayerBuffersMscOML = NULL;
PFNWGLWAITFORMSCOMLPROC wgl_wglWaitForMscOML = NULL;
PFNWGLWAITFORSBCOMLPROC wgl_wglWaitForSbcOML = NULL;

HANDLE WINAPI wglCreateBufferRegionARB (HDC hDC, int iLayerPlane, UINT uType) { return wgl_wglCreateBufferRegionARB(hDC, iLayerPlane, uType); }
VOID WINAPI wglDeleteBufferRegionARB (HANDLE hRegion) { wgl_wglDeleteBufferRegionARB(hRegion); }
BOOL WINAPI wglSaveBufferRegionARB (HANDLE hRegion, int x, int y, int width, int height) { return wgl_wglSaveBufferRegionARB(hRegion, x, y, width, height); }
BOOL WINAPI wglRestoreBufferRegionARB (HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc) { return wgl_wglRestoreBufferRegionARB(hRegion, x, y, width, height, xSrc, ySrc); }
HGLRC WINAPI wglCreateContextAttribsARB (HDC hDC, HGLRC hShareContext, const int *attribList) { return wgl_wglCreateContextAttribsARB(hDC, hShareContext, attribList); }
const char * WINAPI wglGetExtensionsStringARB (HDC hdc) { return wgl_wglGetExtensionsStringARB(hdc); }
BOOL WINAPI wglMakeContextCurrentARB (HDC hDrawDC, HDC hReadDC, HGLRC hglrc) { return wgl_wglMakeContextCurrentARB(hDrawDC, hReadDC, hglrc); }
HDC WINAPI wglGetCurrentReadDCARB (void) { return wgl_wglGetCurrentReadDCARB(); }
HPBUFFERARB WINAPI wglCreatePbufferARB (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList) { return wgl_wglCreatePbufferARB(hDC, iPixelFormat, iWidth, iHeight, piAttribList); }
HDC WINAPI wglGetPbufferDCARB (HPBUFFERARB hPbuffer) { return wgl_wglGetPbufferDCARB(hPbuffer); }
int WINAPI wglReleasePbufferDCARB (HPBUFFERARB hPbuffer, HDC hDC) { return wgl_wglReleasePbufferDCARB(hPbuffer, hDC); }
BOOL WINAPI wglDestroyPbufferARB (HPBUFFERARB hPbuffer) { return wgl_wglDestroyPbufferARB(hPbuffer); }
BOOL WINAPI wglQueryPbufferARB (HPBUFFERARB hPbuffer, int iAttribute, int *piValue) { return wgl_wglQueryPbufferARB(hPbuffer, iAttribute, piValue); }
BOOL WINAPI wglGetPixelFormatAttribivARB (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues) { return wgl_wglGetPixelFormatAttribivARB(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues); }
BOOL WINAPI wglGetPixelFormatAttribfvARB (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues) { return wgl_wglGetPixelFormatAttribfvARB(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues); }
BOOL WINAPI wglChoosePixelFormatARB (HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats) { return wgl_wglChoosePixelFormatARB(hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats); }
BOOL WINAPI wglBindTexImageARB (HPBUFFERARB hPbuffer, int iBuffer) { return wgl_wglBindTexImageARB(hPbuffer, iBuffer); }
BOOL WINAPI wglReleaseTexImageARB (HPBUFFERARB hPbuffer, int iBuffer) { return wgl_wglReleaseTexImageARB(hPbuffer, iBuffer); }
BOOL WINAPI wglSetPbufferAttribARB (HPBUFFERARB hPbuffer, const int *piAttribList) { return wgl_wglSetPbufferAttribARB(hPbuffer, piAttribList); }
BOOL WINAPI wglSetStereoEmitterState3DL (HDC hDC, UINT uState) { return wgl_wglSetStereoEmitterState3DL(hDC, uState); }
UINT WINAPI wglGetGPUIDsAMD (UINT maxCount, UINT *ids) { return wgl_wglGetGPUIDsAMD(maxCount, ids); }
INT WINAPI wglGetGPUInfoAMD (UINT id, INT property, GLenum dataType, UINT size, void *data) { return wgl_wglGetGPUInfoAMD(id, property, dataType, size, data); }
UINT WINAPI wglGetContextGPUIDAMD (HGLRC hglrc) { return wgl_wglGetContextGPUIDAMD(hglrc); }
HGLRC WINAPI wglCreateAssociatedContextAMD (UINT id) { return wgl_wglCreateAssociatedContextAMD(id); }
HGLRC WINAPI wglCreateAssociatedContextAttribsAMD (UINT id, HGLRC hShareContext, const int *attribList) { return wgl_wglCreateAssociatedContextAttribsAMD(id, hShareContext, attribList); }
BOOL WINAPI wglDeleteAssociatedContextAMD (HGLRC hglrc) { return wgl_wglDeleteAssociatedContextAMD(hglrc); }
BOOL WINAPI wglMakeAssociatedContextCurrentAMD (HGLRC hglrc) { return wgl_wglMakeAssociatedContextCurrentAMD(hglrc); }
HGLRC WINAPI wglGetCurrentAssociatedContextAMD (void) { return wgl_wglGetCurrentAssociatedContextAMD(); }
VOID WINAPI wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) { wgl_wglBlitContextFramebufferAMD(dstCtx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter); }
GLboolean WINAPI wglCreateDisplayColorTableEXT (GLushort id) { return wgl_wglCreateDisplayColorTableEXT(id); }
GLboolean WINAPI wglLoadDisplayColorTableEXT (const GLushort *table, GLuint length) { return wgl_wglLoadDisplayColorTableEXT(table, length); }
GLboolean WINAPI wglBindDisplayColorTableEXT (GLushort id) { return wgl_wglBindDisplayColorTableEXT(id); }
VOID WINAPI wglDestroyDisplayColorTableEXT (GLushort id) { wgl_wglDestroyDisplayColorTableEXT(id); }
const char * WINAPI wglGetExtensionsStringEXT (void) { return wgl_wglGetExtensionsStringEXT(); }
BOOL WINAPI wglMakeContextCurrentEXT (HDC hDrawDC, HDC hReadDC, HGLRC hglrc) { return wgl_wglMakeContextCurrentEXT(hDrawDC, hReadDC, hglrc); }
HDC WINAPI wglGetCurrentReadDCEXT (void) { return wgl_wglGetCurrentReadDCEXT(); }
HPBUFFEREXT WINAPI wglCreatePbufferEXT (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList) { return wgl_wglCreatePbufferEXT(hDC, iPixelFormat, iWidth, iHeight, piAttribList); }
HDC WINAPI wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer) { return wgl_wglGetPbufferDCEXT(hPbuffer); }
int WINAPI wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer, HDC hDC) { return wgl_wglReleasePbufferDCEXT(hPbuffer, hDC); }
BOOL WINAPI wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer) { return wgl_wglDestroyPbufferEXT(hPbuffer); }
BOOL WINAPI wglQueryPbufferEXT (HPBUFFEREXT hPbuffer, int iAttribute, int *piValue) { return wgl_wglQueryPbufferEXT(hPbuffer, iAttribute, piValue); }
BOOL WINAPI wglGetPixelFormatAttribivEXT (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues) { return wgl_wglGetPixelFormatAttribivEXT(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues); }
BOOL WINAPI wglGetPixelFormatAttribfvEXT (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues) { return wgl_wglGetPixelFormatAttribfvEXT(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues); }
BOOL WINAPI wglChoosePixelFormatEXT (HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats) { return wgl_wglChoosePixelFormatEXT(hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats); }
BOOL WINAPI wglSwapIntervalEXT (int interval) { return wgl_wglSwapIntervalEXT(interval); }
int WINAPI wglGetSwapIntervalEXT (void) { return wgl_wglGetSwapIntervalEXT(); }
BOOL WINAPI wglGetDigitalVideoParametersI3D (HDC hDC, int iAttribute, int *piValue) { return wgl_wglGetDigitalVideoParametersI3D(hDC, iAttribute, piValue); }
BOOL WINAPI wglSetDigitalVideoParametersI3D (HDC hDC, int iAttribute, const int *piValue) { return wgl_wglSetDigitalVideoParametersI3D(hDC, iAttribute, piValue); }
BOOL WINAPI wglGetGammaTableParametersI3D (HDC hDC, int iAttribute, int *piValue) { return wgl_wglGetGammaTableParametersI3D(hDC, iAttribute, piValue); }
BOOL WINAPI wglSetGammaTableParametersI3D (HDC hDC, int iAttribute, const int *piValue) { return wgl_wglSetGammaTableParametersI3D(hDC, iAttribute, piValue); }
BOOL WINAPI wglGetGammaTableI3D (HDC hDC, int iEntries, USHORT *puRed, USHORT *puGreen, USHORT *puBlue) { return wgl_wglGetGammaTableI3D(hDC, iEntries, puRed, puGreen, puBlue); }
BOOL WINAPI wglSetGammaTableI3D (HDC hDC, int iEntries, const USHORT *puRed, const USHORT *puGreen, const USHORT *puBlue) { return wgl_wglSetGammaTableI3D(hDC, iEntries, puRed, puGreen, puBlue); }
BOOL WINAPI wglEnableGenlockI3D (HDC hDC) { return wgl_wglEnableGenlockI3D(hDC); }
BOOL WINAPI wglDisableGenlockI3D (HDC hDC) { return wgl_wglDisableGenlockI3D(hDC); }
BOOL WINAPI wglIsEnabledGenlockI3D (HDC hDC, BOOL *pFlag) { return wgl_wglIsEnabledGenlockI3D(hDC, pFlag); }
BOOL WINAPI wglGenlockSourceI3D (HDC hDC, UINT uSource) { return wgl_wglGenlockSourceI3D(hDC, uSource); }
BOOL WINAPI wglGetGenlockSourceI3D (HDC hDC, UINT *uSource) { return wgl_wglGetGenlockSourceI3D(hDC, uSource); }
BOOL WINAPI wglGenlockSourceEdgeI3D (HDC hDC, UINT uEdge) { return wgl_wglGenlockSourceEdgeI3D(hDC, uEdge); }
BOOL WINAPI wglGetGenlockSourceEdgeI3D (HDC hDC, UINT *uEdge) { return wgl_wglGetGenlockSourceEdgeI3D(hDC, uEdge); }
BOOL WINAPI wglGenlockSampleRateI3D (HDC hDC, UINT uRate) { return wgl_wglGenlockSampleRateI3D(hDC, uRate); }
BOOL WINAPI wglGetGenlockSampleRateI3D (HDC hDC, UINT *uRate) { return wgl_wglGetGenlockSampleRateI3D(hDC, uRate); }
BOOL WINAPI wglGenlockSourceDelayI3D (HDC hDC, UINT uDelay) { return wgl_wglGenlockSourceDelayI3D(hDC, uDelay); }
BOOL WINAPI wglGetGenlockSourceDelayI3D (HDC hDC, UINT *uDelay) { return wgl_wglGetGenlockSourceDelayI3D(hDC, uDelay); }
BOOL WINAPI wglQueryGenlockMaxSourceDelayI3D (HDC hDC, UINT *uMaxLineDelay, UINT *uMaxPixelDelay) { return wgl_wglQueryGenlockMaxSourceDelayI3D(hDC, uMaxLineDelay, uMaxPixelDelay); }
LPVOID WINAPI wglCreateImageBufferI3D (HDC hDC, DWORD dwSize, UINT uFlags) { return wgl_wglCreateImageBufferI3D(hDC, dwSize, uFlags); }
BOOL WINAPI wglDestroyImageBufferI3D (HDC hDC, LPVOID pAddress) { return wgl_wglDestroyImageBufferI3D(hDC, pAddress); }
BOOL WINAPI wglAssociateImageBufferEventsI3D (HDC hDC, const HANDLE *pEvent, const LPVOID *pAddress, const DWORD *pSize, UINT count) { return wgl_wglAssociateImageBufferEventsI3D(hDC, pEvent, pAddress, pSize, count); }
BOOL WINAPI wglReleaseImageBufferEventsI3D (HDC hDC, const LPVOID *pAddress, UINT count) { return wgl_wglReleaseImageBufferEventsI3D(hDC, pAddress, count); }
BOOL WINAPI wglEnableFrameLockI3D (void) { return wgl_wglEnableFrameLockI3D(); }
BOOL WINAPI wglDisableFrameLockI3D (void) { return wgl_wglDisableFrameLockI3D(); }
BOOL WINAPI wglIsEnabledFrameLockI3D (BOOL *pFlag) { return wgl_wglIsEnabledFrameLockI3D(pFlag); }
BOOL WINAPI wglQueryFrameLockMasterI3D (BOOL *pFlag) { return wgl_wglQueryFrameLockMasterI3D(pFlag); }
BOOL WINAPI wglGetFrameUsageI3D (float *pUsage) { return wgl_wglGetFrameUsageI3D(pUsage); }
BOOL WINAPI wglBeginFrameTrackingI3D (void) { return wgl_wglBeginFrameTrackingI3D(); }
BOOL WINAPI wglEndFrameTrackingI3D (void) { return wgl_wglEndFrameTrackingI3D(); }
BOOL WINAPI wglQueryFrameTrackingI3D (DWORD *pFrameCount, DWORD *pMissedFrames, float *pLastMissedUsage) { return wgl_wglQueryFrameTrackingI3D(pFrameCount, pMissedFrames, pLastMissedUsage); }
BOOL WINAPI wglDXSetResourceShareHandleNV (void *dxObject, HANDLE shareHandle) { return wgl_wglDXSetResourceShareHandleNV(dxObject, shareHandle); }
HANDLE WINAPI wglDXOpenDeviceNV (void *dxDevice) { return wgl_wglDXOpenDeviceNV(dxDevice); }
BOOL WINAPI wglDXCloseDeviceNV (HANDLE hDevice) { return wgl_wglDXCloseDeviceNV(hDevice); }
HANDLE WINAPI wglDXRegisterObjectNV (HANDLE hDevice, void *dxObject, GLuint name, GLenum type, GLenum access) { return wgl_wglDXRegisterObjectNV(hDevice, dxObject, name, type, access); }
BOOL WINAPI wglDXUnregisterObjectNV (HANDLE hDevice, HANDLE hObject) { return wgl_wglDXUnregisterObjectNV(hDevice, hObject); }
BOOL WINAPI wglDXObjectAccessNV (HANDLE hObject, GLenum access) { return wgl_wglDXObjectAccessNV(hObject, access); }
BOOL WINAPI wglDXLockObjectsNV (HANDLE hDevice, GLint count, HANDLE *hObjects) { return wgl_wglDXLockObjectsNV(hDevice, count, hObjects); }
BOOL WINAPI wglDXUnlockObjectsNV (HANDLE hDevice, GLint count, HANDLE *hObjects) { return wgl_wglDXUnlockObjectsNV(hDevice, count, hObjects); }
BOOL WINAPI wglCopyImageSubDataNV (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth) { return wgl_wglCopyImageSubDataNV(hSrcRC, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, hDstRC, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth); }
BOOL WINAPI wglDelayBeforeSwapNV (HDC hDC, GLfloat seconds) { return wgl_wglDelayBeforeSwapNV(hDC, seconds); }
BOOL WINAPI wglEnumGpusNV (UINT iGpuIndex, HGPUNV *phGpu) { return wgl_wglEnumGpusNV(iGpuIndex, phGpu); }
BOOL WINAPI wglEnumGpuDevicesNV (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice) { return wgl_wglEnumGpuDevicesNV(hGpu, iDeviceIndex, lpGpuDevice); }
HDC WINAPI wglCreateAffinityDCNV (const HGPUNV *phGpuList) { return wgl_wglCreateAffinityDCNV(phGpuList); }
BOOL WINAPI wglEnumGpusFromAffinityDCNV (HDC hAffinityDC, UINT iGpuIndex, HGPUNV *hGpu) { return wgl_wglEnumGpusFromAffinityDCNV(hAffinityDC, iGpuIndex, hGpu); }
BOOL WINAPI wglDeleteDCNV (HDC hdc) { return wgl_wglDeleteDCNV(hdc); }
int WINAPI wglEnumerateVideoDevicesNV (HDC hDc, HVIDEOOUTPUTDEVICENV *phDeviceList) { return wgl_wglEnumerateVideoDevicesNV(hDc, phDeviceList); }
BOOL WINAPI wglBindVideoDeviceNV (HDC hDc, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int *piAttribList) { return wgl_wglBindVideoDeviceNV(hDc, uVideoSlot, hVideoDevice, piAttribList); }
BOOL WINAPI wglQueryCurrentContextNV (int iAttribute, int *piValue) { return wgl_wglQueryCurrentContextNV(iAttribute, piValue); }
BOOL WINAPI wglJoinSwapGroupNV (HDC hDC, GLuint group) { return wgl_wglJoinSwapGroupNV(hDC, group); }
BOOL WINAPI wglBindSwapBarrierNV (GLuint group, GLuint barrier) { return wgl_wglBindSwapBarrierNV(group, barrier); }
BOOL WINAPI wglQuerySwapGroupNV (HDC hDC, GLuint *group, GLuint *barrier) { return wgl_wglQuerySwapGroupNV(hDC, group, barrier); }
BOOL WINAPI wglQueryMaxSwapGroupsNV (HDC hDC, GLuint *maxGroups, GLuint *maxBarriers) { return wgl_wglQueryMaxSwapGroupsNV(hDC, maxGroups, maxBarriers); }
BOOL WINAPI wglQueryFrameCountNV (HDC hDC, GLuint *count) { return wgl_wglQueryFrameCountNV(hDC, count); }
BOOL WINAPI wglResetFrameCountNV (HDC hDC) { return wgl_wglResetFrameCountNV(hDC); }
void * WINAPI wglAllocateMemoryNV (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority) { return wgl_wglAllocateMemoryNV(size, readfreq, writefreq, priority); }
void WINAPI wglFreeMemoryNV (void *pointer) { wgl_wglFreeMemoryNV(pointer); }
BOOL WINAPI wglBindVideoCaptureDeviceNV (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice) { return wgl_wglBindVideoCaptureDeviceNV(uVideoSlot, hDevice); }
UINT WINAPI wglEnumerateVideoCaptureDevicesNV (HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList) { return wgl_wglEnumerateVideoCaptureDevicesNV(hDc, phDeviceList); }
BOOL WINAPI wglLockVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice) { return wgl_wglLockVideoCaptureDeviceNV(hDc, hDevice); }
BOOL WINAPI wglQueryVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int *piValue) { return wgl_wglQueryVideoCaptureDeviceNV(hDc, hDevice, iAttribute, piValue); }
BOOL WINAPI wglReleaseVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice) { return wgl_wglReleaseVideoCaptureDeviceNV(hDc, hDevice); }
BOOL WINAPI wglGetVideoDeviceNV (HDC hDC, int numDevices, HPVIDEODEV *hVideoDevice) { return wgl_wglGetVideoDeviceNV(hDC, numDevices, hVideoDevice); }
BOOL WINAPI wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice) { return wgl_wglReleaseVideoDeviceNV(hVideoDevice); }
BOOL WINAPI wglBindVideoImageNV (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer) { return wgl_wglBindVideoImageNV(hVideoDevice, hPbuffer, iVideoBuffer); }
BOOL WINAPI wglReleaseVideoImageNV (HPBUFFERARB hPbuffer, int iVideoBuffer) { return wgl_wglReleaseVideoImageNV(hPbuffer, iVideoBuffer); }
BOOL WINAPI wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer, int iBufferType, unsigned long *pulCounterPbuffer, BOOL bBlock) { return wgl_wglSendPbufferToVideoNV(hPbuffer, iBufferType, pulCounterPbuffer, bBlock); }
BOOL WINAPI wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo) { return wgl_wglGetVideoInfoNV(hpVideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo); }
BOOL WINAPI wglGetSyncValuesOML (HDC hdc, INT64 *ust, INT64 *msc, INT64 *sbc) { return wgl_wglGetSyncValuesOML(hdc, ust, msc, sbc); }
BOOL WINAPI wglGetMscRateOML (HDC hdc, INT32 *numerator, INT32 *denominator) { return wgl_wglGetMscRateOML(hdc, numerator, denominator); }
INT64 WINAPI wglSwapBuffersMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder) { return wgl_wglSwapBuffersMscOML(hdc, target_msc, divisor, remainder); }
INT64 WINAPI wglSwapLayerBuffersMscOML (HDC hdc, INT fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder) { return wgl_wglSwapLayerBuffersMscOML(hdc, fuPlanes, target_msc, divisor, remainder); }
BOOL WINAPI wglWaitForMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 *ust, INT64 *msc, INT64 *sbc) { return wgl_wglWaitForMscOML(hdc, target_msc, divisor, remainder, ust, msc, sbc); }
BOOL WINAPI wglWaitForSbcOML (HDC hdc, INT64 target_sbc, INT64 *ust, INT64 *msc, INT64 *sbc) { return wgl_wglWaitForSbcOML(hdc, target_sbc, ust, msc, sbc); }

void load_WGL_WGLEXT() {
    wgl_wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC)wgl_loader_GetProcAddress("wglCreateBufferRegionARB");
    wgl_wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC)wgl_loader_GetProcAddress("wglDeleteBufferRegionARB");
    wgl_wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC)wgl_loader_GetProcAddress("wglSaveBufferRegionARB");
    wgl_wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC)wgl_loader_GetProcAddress("wglRestoreBufferRegionARB");
    wgl_wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)wgl_loader_GetProcAddress("wglCreateContextAttribsARB");
    wgl_wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)wgl_loader_GetProcAddress("wglGetExtensionsStringARB");
    wgl_wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC)wgl_loader_GetProcAddress("wglMakeContextCurrentARB");
    wgl_wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC)wgl_loader_GetProcAddress("wglGetCurrentReadDCARB");
    wgl_wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC)wgl_loader_GetProcAddress("wglCreatePbufferARB");
    wgl_wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC)wgl_loader_GetProcAddress("wglGetPbufferDCARB");
    wgl_wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC)wgl_loader_GetProcAddress("wglReleasePbufferDCARB");
    wgl_wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC)wgl_loader_GetProcAddress("wglDestroyPbufferARB");
    wgl_wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC)wgl_loader_GetProcAddress("wglQueryPbufferARB");
    wgl_wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)wgl_loader_GetProcAddress("wglGetPixelFormatAttribivARB");
    wgl_wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC)wgl_loader_GetProcAddress("wglGetPixelFormatAttribfvARB");
    wgl_wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)wgl_loader_GetProcAddress("wglChoosePixelFormatARB");
    wgl_wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC)wgl_loader_GetProcAddress("wglBindTexImageARB");
    wgl_wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC)wgl_loader_GetProcAddress("wglReleaseTexImageARB");
    wgl_wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC)wgl_loader_GetProcAddress("wglSetPbufferAttribARB");
    wgl_wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC)wgl_loader_GetProcAddress("wglSetStereoEmitterState3DL");
    wgl_wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC)wgl_loader_GetProcAddress("wglGetGPUIDsAMD");
    wgl_wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC)wgl_loader_GetProcAddress("wglGetGPUInfoAMD");
    wgl_wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC)wgl_loader_GetProcAddress("wglGetContextGPUIDAMD");
    wgl_wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC)wgl_loader_GetProcAddress("wglCreateAssociatedContextAMD");
    wgl_wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)wgl_loader_GetProcAddress("wglCreateAssociatedContextAttribsAMD");
    wgl_wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC)wgl_loader_GetProcAddress("wglDeleteAssociatedContextAMD");
    wgl_wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)wgl_loader_GetProcAddress("wglMakeAssociatedContextCurrentAMD");
    wgl_wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC)wgl_loader_GetProcAddress("wglGetCurrentAssociatedContextAMD");
    wgl_wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC)wgl_loader_GetProcAddress("wglBlitContextFramebufferAMD");
    wgl_wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)wgl_loader_GetProcAddress("wglCreateDisplayColorTableEXT");
    wgl_wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)wgl_loader_GetProcAddress("wglLoadDisplayColorTableEXT");
    wgl_wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)wgl_loader_GetProcAddress("wglBindDisplayColorTableEXT");
    wgl_wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)wgl_loader_GetProcAddress("wglDestroyDisplayColorTableEXT");
    wgl_wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)wgl_loader_GetProcAddress("wglGetExtensionsStringEXT");
    wgl_wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC)wgl_loader_GetProcAddress("wglMakeContextCurrentEXT");
    wgl_wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC)wgl_loader_GetProcAddress("wglGetCurrentReadDCEXT");
    wgl_wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC)wgl_loader_GetProcAddress("wglCreatePbufferEXT");
    wgl_wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC)wgl_loader_GetProcAddress("wglGetPbufferDCEXT");
    wgl_wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC)wgl_loader_GetProcAddress("wglReleasePbufferDCEXT");
    wgl_wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC)wgl_loader_GetProcAddress("wglDestroyPbufferEXT");
    wgl_wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC)wgl_loader_GetProcAddress("wglQueryPbufferEXT");
    wgl_wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)wgl_loader_GetProcAddress("wglGetPixelFormatAttribivEXT");
    wgl_wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)wgl_loader_GetProcAddress("wglGetPixelFormatAttribfvEXT");
    wgl_wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC)wgl_loader_GetProcAddress("wglChoosePixelFormatEXT");
    wgl_wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)wgl_loader_GetProcAddress("wglSwapIntervalEXT");
    wgl_wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC)wgl_loader_GetProcAddress("wglGetSwapIntervalEXT");
    wgl_wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC)wgl_loader_GetProcAddress("wglGetDigitalVideoParametersI3D");
    wgl_wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC)wgl_loader_GetProcAddress("wglSetDigitalVideoParametersI3D");
    wgl_wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)wgl_loader_GetProcAddress("wglGetGammaTableParametersI3D");
    wgl_wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)wgl_loader_GetProcAddress("wglSetGammaTableParametersI3D");
    wgl_wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC)wgl_loader_GetProcAddress("wglGetGammaTableI3D");
    wgl_wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC)wgl_loader_GetProcAddress("wglSetGammaTableI3D");
    wgl_wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC)wgl_loader_GetProcAddress("wglEnableGenlockI3D");
    wgl_wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC)wgl_loader_GetProcAddress("wglDisableGenlockI3D");
    wgl_wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC)wgl_loader_GetProcAddress("wglIsEnabledGenlockI3D");
    wgl_wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC)wgl_loader_GetProcAddress("wglGenlockSourceI3D");
    wgl_wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC)wgl_loader_GetProcAddress("wglGetGenlockSourceI3D");
    wgl_wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC)wgl_loader_GetProcAddress("wglGenlockSourceEdgeI3D");
    wgl_wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)wgl_loader_GetProcAddress("wglGetGenlockSourceEdgeI3D");
    wgl_wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC)wgl_loader_GetProcAddress("wglGenlockSampleRateI3D");
    wgl_wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC)wgl_loader_GetProcAddress("wglGetGenlockSampleRateI3D");
    wgl_wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC)wgl_loader_GetProcAddress("wglGenlockSourceDelayI3D");
    wgl_wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)wgl_loader_GetProcAddress("wglGetGenlockSourceDelayI3D");
    wgl_wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)wgl_loader_GetProcAddress("wglQueryGenlockMaxSourceDelayI3D");
    wgl_wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC)wgl_loader_GetProcAddress("wglCreateImageBufferI3D");
    wgl_wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC)wgl_loader_GetProcAddress("wglDestroyImageBufferI3D");
    wgl_wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)wgl_loader_GetProcAddress("wglAssociateImageBufferEventsI3D");
    wgl_wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)wgl_loader_GetProcAddress("wglReleaseImageBufferEventsI3D");
    wgl_wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC)wgl_loader_GetProcAddress("wglEnableFrameLockI3D");
    wgl_wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC)wgl_loader_GetProcAddress("wglDisableFrameLockI3D");
    wgl_wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC)wgl_loader_GetProcAddress("wglIsEnabledFrameLockI3D");
    wgl_wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC)wgl_loader_GetProcAddress("wglQueryFrameLockMasterI3D");
    wgl_wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC)wgl_loader_GetProcAddress("wglGetFrameUsageI3D");
    wgl_wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC)wgl_loader_GetProcAddress("wglBeginFrameTrackingI3D");
    wgl_wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC)wgl_loader_GetProcAddress("wglEndFrameTrackingI3D");
    wgl_wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC)wgl_loader_GetProcAddress("wglQueryFrameTrackingI3D");
    wgl_wglDXSetResourceShareHandleNV = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC)wgl_loader_GetProcAddress("wglDXSetResourceShareHandleNV");
    wgl_wglDXOpenDeviceNV = (PFNWGLDXOPENDEVICENVPROC)wgl_loader_GetProcAddress("wglDXOpenDeviceNV");
    wgl_wglDXCloseDeviceNV = (PFNWGLDXCLOSEDEVICENVPROC)wgl_loader_GetProcAddress("wglDXCloseDeviceNV");
    wgl_wglDXRegisterObjectNV = (PFNWGLDXREGISTEROBJECTNVPROC)wgl_loader_GetProcAddress("wglDXRegisterObjectNV");
    wgl_wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC)wgl_loader_GetProcAddress("wglDXUnregisterObjectNV");
    wgl_wglDXObjectAccessNV = (PFNWGLDXOBJECTACCESSNVPROC)wgl_loader_GetProcAddress("wglDXObjectAccessNV");
    wgl_wglDXLockObjectsNV = (PFNWGLDXLOCKOBJECTSNVPROC)wgl_loader_GetProcAddress("wglDXLockObjectsNV");
    wgl_wglDXUnlockObjectsNV = (PFNWGLDXUNLOCKOBJECTSNVPROC)wgl_loader_GetProcAddress("wglDXUnlockObjectsNV");
    wgl_wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC)wgl_loader_GetProcAddress("wglCopyImageSubDataNV");
    wgl_wglDelayBeforeSwapNV = (PFNWGLDELAYBEFORESWAPNVPROC)wgl_loader_GetProcAddress("wglDelayBeforeSwapNV");
    wgl_wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC)wgl_loader_GetProcAddress("wglEnumGpusNV");
    wgl_wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC)wgl_loader_GetProcAddress("wglEnumGpuDevicesNV");
    wgl_wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC)wgl_loader_GetProcAddress("wglCreateAffinityDCNV");
    wgl_wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC)wgl_loader_GetProcAddress("wglEnumGpusFromAffinityDCNV");
    wgl_wglDeleteDCNV = (PFNWGLDELETEDCNVPROC)wgl_loader_GetProcAddress("wglDeleteDCNV");
    wgl_wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC)wgl_loader_GetProcAddress("wglEnumerateVideoDevicesNV");
    wgl_wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC)wgl_loader_GetProcAddress("wglBindVideoDeviceNV");
    wgl_wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC)wgl_loader_GetProcAddress("wglQueryCurrentContextNV");
    wgl_wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC)wgl_loader_GetProcAddress("wglJoinSwapGroupNV");
    wgl_wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC)wgl_loader_GetProcAddress("wglBindSwapBarrierNV");
    wgl_wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC)wgl_loader_GetProcAddress("wglQuerySwapGroupNV");
    wgl_wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC)wgl_loader_GetProcAddress("wglQueryMaxSwapGroupsNV");
    wgl_wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC)wgl_loader_GetProcAddress("wglQueryFrameCountNV");
    wgl_wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC)wgl_loader_GetProcAddress("wglResetFrameCountNV");
    wgl_wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC)wgl_loader_GetProcAddress("wglAllocateMemoryNV");
    wgl_wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC)wgl_loader_GetProcAddress("wglFreeMemoryNV");
    wgl_wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC)wgl_loader_GetProcAddress("wglBindVideoCaptureDeviceNV");
    wgl_wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC)wgl_loader_GetProcAddress("wglEnumerateVideoCaptureDevicesNV");
    wgl_wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC)wgl_loader_GetProcAddress("wglLockVideoCaptureDeviceNV");
    wgl_wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC)wgl_loader_GetProcAddress("wglQueryVideoCaptureDeviceNV");
    wgl_wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC)wgl_loader_GetProcAddress("wglReleaseVideoCaptureDeviceNV");
    wgl_wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC)wgl_loader_GetProcAddress("wglGetVideoDeviceNV");
    wgl_wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC)wgl_loader_GetProcAddress("wglReleaseVideoDeviceNV");
    wgl_wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC)wgl_loader_GetProcAddress("wglBindVideoImageNV");
    wgl_wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC)wgl_loader_GetProcAddress("wglReleaseVideoImageNV");
    wgl_wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC)wgl_loader_GetProcAddress("wglSendPbufferToVideoNV");
    wgl_wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC)wgl_loader_GetProcAddress("wglGetVideoInfoNV");
    wgl_wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC)wgl_loader_GetProcAddress("wglGetSyncValuesOML");
    wgl_wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC)wgl_loader_GetProcAddress("wglGetMscRateOML");
    wgl_wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC)wgl_loader_GetProcAddress("wglSwapBuffersMscOML");
    wgl_wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)wgl_loader_GetProcAddress("wglSwapLayerBuffersMscOML");
    wgl_wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC)wgl_loader_GetProcAddress("wglWaitForMscOML");
    wgl_wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC)wgl_loader_GetProcAddress("wglWaitForSbcOML");
}

#ifdef __cplusplus
}
#endif
