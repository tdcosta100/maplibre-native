#include "wgl_loader_gl2.h"

#ifdef __cplusplus
extern "C" {
#endif

PFNGLACTIVETEXTUREPROC wgl_glActiveTexture = NULL;
PFNGLATTACHSHADERPROC wgl_glAttachShader = NULL;
PFNGLBINDATTRIBLOCATIONPROC wgl_glBindAttribLocation = NULL;
PFNGLBINDBUFFERPROC wgl_glBindBuffer = NULL;
PFNGLBINDFRAMEBUFFERPROC wgl_glBindFramebuffer = NULL;
PFNGLBINDRENDERBUFFERPROC wgl_glBindRenderbuffer = NULL;
PFNGLBLENDCOLORPROC wgl_glBlendColor = NULL;
PFNGLBLENDEQUATIONPROC wgl_glBlendEquation = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC wgl_glBlendEquationSeparate = NULL;
PFNGLBLENDFUNCSEPARATEPROC wgl_glBlendFuncSeparate = NULL;
PFNGLBUFFERDATAPROC wgl_glBufferData = NULL;
PFNGLBUFFERSUBDATAPROC wgl_glBufferSubData = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC wgl_glCheckFramebufferStatus = NULL;
PFNGLCLEARDEPTHFPROC wgl_glClearDepthf = NULL;
PFNGLCOMPILESHADERPROC wgl_glCompileShader = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC wgl_glCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC wgl_glCompressedTexSubImage2D = NULL;
PFNGLCREATEPROGRAMPROC wgl_glCreateProgram = NULL;
PFNGLCREATESHADERPROC wgl_glCreateShader = NULL;
PFNGLDELETEBUFFERSPROC wgl_glDeleteBuffers = NULL;
PFNGLDELETEFRAMEBUFFERSPROC wgl_glDeleteFramebuffers = NULL;
PFNGLDELETEPROGRAMPROC wgl_glDeleteProgram = NULL;
PFNGLDELETERENDERBUFFERSPROC wgl_glDeleteRenderbuffers = NULL;
PFNGLDELETESHADERPROC wgl_glDeleteShader = NULL;
PFNGLDEPTHRANGEFPROC wgl_glDepthRangef = NULL;
PFNGLDETACHSHADERPROC wgl_glDetachShader = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC wgl_glDisableVertexAttribArray = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC wgl_glEnableVertexAttribArray = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC wgl_glFramebufferRenderbuffer = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC wgl_glFramebufferTexture2D = NULL;
PFNGLGENBUFFERSPROC wgl_glGenBuffers = NULL;
PFNGLGENERATEMIPMAPPROC wgl_glGenerateMipmap = NULL;
PFNGLGENFRAMEBUFFERSPROC wgl_glGenFramebuffers = NULL;
PFNGLGENRENDERBUFFERSPROC wgl_glGenRenderbuffers = NULL;
PFNGLGETACTIVEATTRIBPROC wgl_glGetActiveAttrib = NULL;
PFNGLGETACTIVEUNIFORMPROC wgl_glGetActiveUniform = NULL;
PFNGLGETATTACHEDSHADERSPROC wgl_glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC wgl_glGetAttribLocation = NULL;
PFNGLGETBUFFERPARAMETERIVPROC wgl_glGetBufferParameteriv = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC wgl_glGetFramebufferAttachmentParameteriv = NULL;
PFNGLGETPROGRAMIVPROC wgl_glGetProgramiv = NULL;
PFNGLGETPROGRAMINFOLOGPROC wgl_glGetProgramInfoLog = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC wgl_glGetRenderbufferParameteriv = NULL;
PFNGLGETSHADERIVPROC wgl_glGetShaderiv = NULL;
PFNGLGETSHADERINFOLOGPROC wgl_glGetShaderInfoLog = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC wgl_glGetShaderPrecisionFormat = NULL;
PFNGLGETSHADERSOURCEPROC wgl_glGetShaderSource = NULL;
PFNGLGETUNIFORMFVPROC wgl_glGetUniformfv = NULL;
PFNGLGETUNIFORMIVPROC wgl_glGetUniformiv = NULL;
PFNGLGETUNIFORMLOCATIONPROC wgl_glGetUniformLocation = NULL;
PFNGLGETVERTEXATTRIBFVPROC wgl_glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBIVPROC wgl_glGetVertexAttribiv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC wgl_glGetVertexAttribPointerv = NULL;
PFNGLISBUFFERPROC wgl_glIsBuffer = NULL;
PFNGLISFRAMEBUFFERPROC wgl_glIsFramebuffer = NULL;
PFNGLISPROGRAMPROC wgl_glIsProgram = NULL;
PFNGLISRENDERBUFFERPROC wgl_glIsRenderbuffer = NULL;
PFNGLISSHADERPROC wgl_glIsShader = NULL;
PFNGLLINKPROGRAMPROC wgl_glLinkProgram = NULL;
PFNGLRELEASESHADERCOMPILERPROC wgl_glReleaseShaderCompiler = NULL;
PFNGLRENDERBUFFERSTORAGEPROC wgl_glRenderbufferStorage = NULL;
PFNGLSAMPLECOVERAGEPROC wgl_glSampleCoverage = NULL;
PFNGLSHADERBINARYPROC wgl_glShaderBinary = NULL;
PFNGLSHADERSOURCEPROC wgl_glShaderSource = NULL;
PFNGLSTENCILFUNCSEPARATEPROC wgl_glStencilFuncSeparate = NULL;
PFNGLSTENCILMASKSEPARATEPROC wgl_glStencilMaskSeparate = NULL;
PFNGLSTENCILOPSEPARATEPROC wgl_glStencilOpSeparate = NULL;
PFNGLUNIFORM1FPROC wgl_glUniform1f = NULL;
PFNGLUNIFORM1FVPROC wgl_glUniform1fv = NULL;
PFNGLUNIFORM1IPROC wgl_glUniform1i = NULL;
PFNGLUNIFORM1IVPROC wgl_glUniform1iv = NULL;
PFNGLUNIFORM2FPROC wgl_glUniform2f = NULL;
PFNGLUNIFORM2FVPROC wgl_glUniform2fv = NULL;
PFNGLUNIFORM2IPROC wgl_glUniform2i = NULL;
PFNGLUNIFORM2IVPROC wgl_glUniform2iv = NULL;
PFNGLUNIFORM3FPROC wgl_glUniform3f = NULL;
PFNGLUNIFORM3FVPROC wgl_glUniform3fv = NULL;
PFNGLUNIFORM3IPROC wgl_glUniform3i = NULL;
PFNGLUNIFORM3IVPROC wgl_glUniform3iv = NULL;
PFNGLUNIFORM4FPROC wgl_glUniform4f = NULL;
PFNGLUNIFORM4FVPROC wgl_glUniform4fv = NULL;
PFNGLUNIFORM4IPROC wgl_glUniform4i = NULL;
PFNGLUNIFORM4IVPROC wgl_glUniform4iv = NULL;
PFNGLUNIFORMMATRIX2FVPROC wgl_glUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX3FVPROC wgl_glUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX4FVPROC wgl_glUniformMatrix4fv = NULL;
PFNGLUSEPROGRAMPROC wgl_glUseProgram = NULL;
PFNGLVALIDATEPROGRAMPROC wgl_glValidateProgram = NULL;
PFNGLVERTEXATTRIB1FPROC wgl_glVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FVPROC wgl_glVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB2FPROC wgl_glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FVPROC wgl_glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB3FPROC wgl_glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FVPROC wgl_glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB4FPROC wgl_glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FVPROC wgl_glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIBPOINTERPROC wgl_glVertexAttribPointer = NULL;
#if !(defined(WIN32) && defined(__GL_H__))
PFNGLBINDTEXTUREPROC wgl_glBindTexture = NULL;
PFNGLBLENDFUNCPROC wgl_glBlendFunc = NULL;
PFNGLCLEARPROC wgl_glClear = NULL;
PFNGLCLEARCOLORPROC wgl_glClearColor = NULL;
PFNGLCLEARSTENCILPROC wgl_glClearStencil = NULL;
PFNGLCOLORMASKPROC wgl_glColorMask = NULL;
PFNGLCOPYTEXIMAGE2DPROC wgl_glCopyTexImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC wgl_glCopyTexSubImage2D = NULL;
PFNGLCULLFACEPROC wgl_glCullFace = NULL;
PFNGLDELETETEXTURESPROC wgl_glDeleteTextures = NULL;
PFNGLDEPTHFUNCPROC wgl_glDepthFunc = NULL;
PFNGLDEPTHMASKPROC wgl_glDepthMask = NULL;
PFNGLDISABLEPROC wgl_glDisable = NULL;
PFNGLDRAWARRAYSPROC wgl_glDrawArrays = NULL;
PFNGLDRAWELEMENTSPROC wgl_glDrawElements = NULL;
PFNGLENABLEPROC wgl_glEnable = NULL;
PFNGLFINISHPROC wgl_glFinish = NULL;
PFNGLFLUSHPROC wgl_glFlush = NULL;
PFNGLFRONTFACEPROC wgl_glFrontFace = NULL;
PFNGLGENTEXTURESPROC wgl_glGenTextures = NULL;
PFNGLGETBOOLEANVPROC wgl_glGetBooleanv = NULL;
PFNGLGETERRORPROC wgl_glGetError = NULL;
PFNGLGETFLOATVPROC wgl_glGetFloatv = NULL;
PFNGLGETINTEGERVPROC wgl_glGetIntegerv = NULL;
PFNGLGETSTRINGPROC wgl_glGetString = NULL;
PFNGLGETTEXPARAMETERFVPROC wgl_glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC wgl_glGetTexParameteriv = NULL;
PFNGLHINTPROC wgl_glHint = NULL;
PFNGLISENABLEDPROC wgl_glIsEnabled = NULL;
PFNGLISTEXTUREPROC wgl_glIsTexture = NULL;
PFNGLLINEWIDTHPROC wgl_glLineWidth = NULL;
PFNGLPIXELSTOREIPROC wgl_glPixelStorei = NULL;
PFNGLPOLYGONOFFSETPROC wgl_glPolygonOffset = NULL;
PFNGLREADPIXELSPROC wgl_glReadPixels = NULL;
PFNGLSCISSORPROC wgl_glScissor = NULL;
PFNGLSTENCILFUNCPROC wgl_glStencilFunc = NULL;
PFNGLSTENCILMASKPROC wgl_glStencilMask = NULL;
PFNGLSTENCILOPPROC wgl_glStencilOp = NULL;
PFNGLTEXIMAGE2DPROC wgl_glTexImage2D = NULL;
PFNGLTEXPARAMETERFPROC wgl_glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC wgl_glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC wgl_glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC wgl_glTexParameteriv = NULL;
PFNGLTEXSUBIMAGE2DPROC wgl_glTexSubImage2D = NULL;
PFNGLVIEWPORTPROC wgl_glViewport = NULL;
#endif

GL_APICALL void GL_APIENTRY glActiveTexture (GLenum texture) { wgl_glActiveTexture(texture); }
GL_APICALL void GL_APIENTRY glAttachShader (GLuint program, GLuint shader) { wgl_glAttachShader(program, shader); }
GL_APICALL void GL_APIENTRY glBindAttribLocation (GLuint program, GLuint index, const GLchar *name) { wgl_glBindAttribLocation(program, index, name); }
GL_APICALL void GL_APIENTRY glBindBuffer (GLenum target, GLuint buffer) { wgl_glBindBuffer(target, buffer); }
GL_APICALL void GL_APIENTRY glBindFramebuffer (GLenum target, GLuint framebuffer) { wgl_glBindFramebuffer(target, framebuffer); }
GL_APICALL void GL_APIENTRY glBindRenderbuffer (GLenum target, GLuint renderbuffer) { wgl_glBindRenderbuffer(target, renderbuffer); }
GL_APICALL void GL_APIENTRY glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { wgl_glBlendColor(red, green, blue, alpha); }
GL_APICALL void GL_APIENTRY glBlendEquation (GLenum mode) { wgl_glBlendEquation(mode); }
GL_APICALL void GL_APIENTRY glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha) { wgl_glBlendEquationSeparate(modeRGB, modeAlpha); }
GL_APICALL void GL_APIENTRY glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) { wgl_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha); }
GL_APICALL void GL_APIENTRY glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage) { wgl_glBufferData(target, size, data, usage); }
GL_APICALL void GL_APIENTRY glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data) { wgl_glBufferSubData(target, offset, size, data); }
GL_APICALL GLenum GL_APIENTRY glCheckFramebufferStatus (GLenum target) { return wgl_glCheckFramebufferStatus(target); }
GL_APICALL void GL_APIENTRY glClearDepthf (GLfloat d) { wgl_glClearDepthf(d); }
GL_APICALL void GL_APIENTRY glCompileShader (GLuint shader) { wgl_glCompileShader(shader); }
GL_APICALL void GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) { wgl_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data); }
GL_APICALL void GL_APIENTRY glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) { wgl_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data); }
GL_APICALL GLuint GL_APIENTRY glCreateProgram (void) { return wgl_glCreateProgram(); }
GL_APICALL GLuint GL_APIENTRY glCreateShader (GLenum type) { return wgl_glCreateShader(type); }
GL_APICALL void GL_APIENTRY glDeleteBuffers (GLsizei n, const GLuint *buffers) { wgl_glDeleteBuffers(n, buffers); }
GL_APICALL void GL_APIENTRY glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers) { wgl_glDeleteFramebuffers(n, framebuffers); }
GL_APICALL void GL_APIENTRY glDeleteProgram (GLuint program) { wgl_glDeleteProgram(program); }
GL_APICALL void GL_APIENTRY glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers) { wgl_glDeleteRenderbuffers(n, renderbuffers); }
GL_APICALL void GL_APIENTRY glDeleteShader (GLuint shader) { wgl_glDeleteShader(shader); }
GL_APICALL void GL_APIENTRY glDepthRangef (GLfloat n, GLfloat f) { wgl_glDepthRangef(n, f); }
GL_APICALL void GL_APIENTRY glDetachShader (GLuint program, GLuint shader) { wgl_glDetachShader(program, shader); }
GL_APICALL void GL_APIENTRY glDisableVertexAttribArray (GLuint index) { wgl_glDisableVertexAttribArray(index); }
GL_APICALL void GL_APIENTRY glEnableVertexAttribArray (GLuint index) { wgl_glEnableVertexAttribArray(index); }
GL_APICALL void GL_APIENTRY glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { wgl_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer); }
GL_APICALL void GL_APIENTRY glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { wgl_glFramebufferTexture2D(target, attachment, textarget, texture, level); }
GL_APICALL void GL_APIENTRY glGenBuffers (GLsizei n, GLuint *buffers) { wgl_glGenBuffers(n, buffers); }
GL_APICALL void GL_APIENTRY glGenerateMipmap (GLenum target) { wgl_glGenerateMipmap(target); }
GL_APICALL void GL_APIENTRY glGenFramebuffers (GLsizei n, GLuint *framebuffers) { wgl_glGenFramebuffers(n, framebuffers); }
GL_APICALL void GL_APIENTRY glGenRenderbuffers (GLsizei n, GLuint *renderbuffers) { wgl_glGenRenderbuffers(n, renderbuffers); }
GL_APICALL void GL_APIENTRY glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) { wgl_glGetActiveAttrib(program, index, bufSize, length, size, type, name); }
GL_APICALL void GL_APIENTRY glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) { wgl_glGetActiveUniform(program, index, bufSize, length, size, type, name); }
GL_APICALL void GL_APIENTRY glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) { wgl_glGetAttachedShaders(program, maxCount, count, shaders); }
GL_APICALL GLint GL_APIENTRY glGetAttribLocation (GLuint program, const GLchar *name) { return wgl_glGetAttribLocation(program, name); }
GL_APICALL void GL_APIENTRY glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params) { wgl_glGetBufferParameteriv(target, pname, params); }
GL_APICALL void GL_APIENTRY glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params) { wgl_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params); }
GL_APICALL void GL_APIENTRY glGetProgramiv (GLuint program, GLenum pname, GLint *params) { wgl_glGetProgramiv(program, pname, params); }
GL_APICALL void GL_APIENTRY glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) { wgl_glGetProgramInfoLog(program, bufSize, length, infoLog); }
GL_APICALL void GL_APIENTRY glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params) { wgl_glGetRenderbufferParameteriv(target, pname, params); }
GL_APICALL void GL_APIENTRY glGetShaderiv (GLuint shader, GLenum pname, GLint *params) { wgl_glGetShaderiv(shader, pname, params); }
GL_APICALL void GL_APIENTRY glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) { wgl_glGetShaderInfoLog(shader, bufSize, length, infoLog); }
GL_APICALL void GL_APIENTRY glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) { wgl_glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision); }
GL_APICALL void GL_APIENTRY glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) { wgl_glGetShaderSource(shader, bufSize, length, source); }
GL_APICALL void GL_APIENTRY glGetUniformfv (GLuint program, GLint location, GLfloat *params) { wgl_glGetUniformfv(program, location, params); }
GL_APICALL void GL_APIENTRY glGetUniformiv (GLuint program, GLint location, GLint *params) { wgl_glGetUniformiv(program, location, params); }
GL_APICALL GLint GL_APIENTRY glGetUniformLocation (GLuint program, const GLchar *name) { return wgl_glGetUniformLocation(program, name); }
GL_APICALL void GL_APIENTRY glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params) { wgl_glGetVertexAttribfv(index, pname, params); }
GL_APICALL void GL_APIENTRY glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params) { wgl_glGetVertexAttribiv(index, pname, params); }
GL_APICALL void GL_APIENTRY glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer) { wgl_glGetVertexAttribPointerv(index, pname, pointer); }
GL_APICALL GLboolean GL_APIENTRY glIsBuffer (GLuint buffer) { return wgl_glIsBuffer(buffer); }
GL_APICALL GLboolean GL_APIENTRY glIsFramebuffer (GLuint framebuffer) { return wgl_glIsFramebuffer(framebuffer); }
GL_APICALL GLboolean GL_APIENTRY glIsProgram (GLuint program) { return wgl_glIsProgram(program); }
GL_APICALL GLboolean GL_APIENTRY glIsRenderbuffer (GLuint renderbuffer) { return wgl_glIsRenderbuffer(renderbuffer); }
GL_APICALL GLboolean GL_APIENTRY glIsShader (GLuint shader) { return wgl_glIsShader(shader); }
GL_APICALL void GL_APIENTRY glLinkProgram (GLuint program) { wgl_glLinkProgram(program); }
GL_APICALL void GL_APIENTRY glReleaseShaderCompiler (void) { wgl_glReleaseShaderCompiler(); }
GL_APICALL void GL_APIENTRY glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height) { wgl_glRenderbufferStorage(target, internalformat, width, height); }
GL_APICALL void GL_APIENTRY glSampleCoverage (GLfloat value, GLboolean invert) { wgl_glSampleCoverage(value, invert); }
GL_APICALL void GL_APIENTRY glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length) { wgl_glShaderBinary(count, shaders, binaryFormat, binary, length); }
GL_APICALL void GL_APIENTRY glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) { wgl_glShaderSource(shader, count, string, length); }
GL_APICALL void GL_APIENTRY glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask) { wgl_glStencilFuncSeparate(face, func, ref, mask); }
GL_APICALL void GL_APIENTRY glStencilMaskSeparate (GLenum face, GLuint mask) { wgl_glStencilMaskSeparate(face, mask); }
GL_APICALL void GL_APIENTRY glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) { wgl_glStencilOpSeparate(face, sfail, dpfail, dppass); }
GL_APICALL void GL_APIENTRY glUniform1f (GLint location, GLfloat v0) { wgl_glUniform1f(location, v0); }
GL_APICALL void GL_APIENTRY glUniform1fv (GLint location, GLsizei count, const GLfloat *value) { wgl_glUniform1fv(location, count, value); }
GL_APICALL void GL_APIENTRY glUniform1i (GLint location, GLint v0) { wgl_glUniform1i(location, v0); }
GL_APICALL void GL_APIENTRY glUniform1iv (GLint location, GLsizei count, const GLint *value) { wgl_glUniform1iv(location, count, value); }
GL_APICALL void GL_APIENTRY glUniform2f (GLint location, GLfloat v0, GLfloat v1) { wgl_glUniform2f(location, v0, v1); }
GL_APICALL void GL_APIENTRY glUniform2fv (GLint location, GLsizei count, const GLfloat *value) { wgl_glUniform2fv(location, count, value); }
GL_APICALL void GL_APIENTRY glUniform2i (GLint location, GLint v0, GLint v1) { wgl_glUniform2i(location, v0, v1); }
GL_APICALL void GL_APIENTRY glUniform2iv (GLint location, GLsizei count, const GLint *value) { wgl_glUniform2iv(location, count, value); }
GL_APICALL void GL_APIENTRY glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2) { wgl_glUniform3f(location, v0, v1, v2); }
GL_APICALL void GL_APIENTRY glUniform3fv (GLint location, GLsizei count, const GLfloat *value) { wgl_glUniform3fv(location, count, value); }
GL_APICALL void GL_APIENTRY glUniform3i (GLint location, GLint v0, GLint v1, GLint v2) { wgl_glUniform3i(location, v0, v1, v2); }
GL_APICALL void GL_APIENTRY glUniform3iv (GLint location, GLsizei count, const GLint *value) { wgl_glUniform3iv(location, count, value); }
GL_APICALL void GL_APIENTRY glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) { wgl_glUniform4f(location, v0, v1, v2, v3); }
GL_APICALL void GL_APIENTRY glUniform4fv (GLint location, GLsizei count, const GLfloat *value) { wgl_glUniform4fv(location, count, value); }
GL_APICALL void GL_APIENTRY glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3) { wgl_glUniform4i(location, v0, v1, v2, v3); }
GL_APICALL void GL_APIENTRY glUniform4iv (GLint location, GLsizei count, const GLint *value) { wgl_glUniform4iv(location, count, value); }
GL_APICALL void GL_APIENTRY glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { wgl_glUniformMatrix2fv(location, count, transpose, value); }
GL_APICALL void GL_APIENTRY glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { wgl_glUniformMatrix3fv(location, count, transpose, value); }
GL_APICALL void GL_APIENTRY glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { wgl_glUniformMatrix4fv(location, count, transpose, value); }
GL_APICALL void GL_APIENTRY glUseProgram (GLuint program) { wgl_glUseProgram(program); }
GL_APICALL void GL_APIENTRY glValidateProgram (GLuint program) { wgl_glValidateProgram(program); }
GL_APICALL void GL_APIENTRY glVertexAttrib1f (GLuint index, GLfloat x) { wgl_glVertexAttrib1f(index, x); }
GL_APICALL void GL_APIENTRY glVertexAttrib1fv (GLuint index, const GLfloat *v) { wgl_glVertexAttrib1fv(index, v); }
GL_APICALL void GL_APIENTRY glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y) { wgl_glVertexAttrib2f(index, x, y); }
GL_APICALL void GL_APIENTRY glVertexAttrib2fv (GLuint index, const GLfloat *v) { wgl_glVertexAttrib2fv(index, v); }
GL_APICALL void GL_APIENTRY glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z) { wgl_glVertexAttrib3f(index, x, y, z); }
GL_APICALL void GL_APIENTRY glVertexAttrib3fv (GLuint index, const GLfloat *v) { wgl_glVertexAttrib3fv(index, v); }
GL_APICALL void GL_APIENTRY glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { wgl_glVertexAttrib4f(index, x, y, z, w); }
GL_APICALL void GL_APIENTRY glVertexAttrib4fv (GLuint index, const GLfloat *v) { wgl_glVertexAttrib4fv(index, v); }
GL_APICALL void GL_APIENTRY glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) { wgl_glVertexAttribPointer(index, size, type, normalized, stride, pointer); }
#ifdef OPENGL32_PROTOTYPES
GL_APICALL void GL_APIENTRY glBindTexture (GLenum target, GLuint texture) { wgl_glBindTexture(target, texture); }
GL_APICALL void GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor) { wgl_glBlendFunc(sfactor, dfactor); }
GL_APICALL void GL_APIENTRY glClear (GLbitfield mask) { wgl_glClear(mask); }
GL_APICALL void GL_APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { wgl_glClearColor(red, green, blue, alpha); }
GL_APICALL void GL_APIENTRY glClearStencil (GLint s) { wgl_glClearStencil(s); }
GL_APICALL void GL_APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { wgl_glColorMask(red, green, blue, alpha); }
GL_APICALL void GL_APIENTRY glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { wgl_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border); }
GL_APICALL void GL_APIENTRY glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { wgl_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); }
GL_APICALL void GL_APIENTRY glCullFace (GLenum mode) { wgl_glCullFace(mode); }
GL_APICALL void GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint *textures) { wgl_glDeleteTextures(n, textures); }
GL_APICALL void GL_APIENTRY glDepthFunc (GLenum func) { wgl_glDepthFunc(func); }
GL_APICALL void GL_APIENTRY glDepthMask (GLboolean flag) { wgl_glDepthMask(flag); }
GL_APICALL void GL_APIENTRY glDisable (GLenum cap) { wgl_glDisable(cap); }
GL_APICALL void GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count) { wgl_glDrawArrays(mode, first, count); }
GL_APICALL void GL_APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices) { wgl_glDrawElements(mode, count, type, indices); }
GL_APICALL void GL_APIENTRY glEnable (GLenum cap) { wgl_glEnable(cap); }
GL_APICALL void GL_APIENTRY glFinish (void) { wgl_glFinish(); }
GL_APICALL void GL_APIENTRY glFlush (void) { wgl_glFlush(); }
GL_APICALL void GL_APIENTRY glFrontFace (GLenum mode) { wgl_glFrontFace(mode); }
GL_APICALL void GL_APIENTRY glGenTextures (GLsizei n, GLuint *textures) { wgl_glGenTextures(n, textures); }
GL_APICALL void GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean *data) { wgl_glGetBooleanv(pname, data); }
GL_APICALL GLenum GL_APIENTRY glGetError (void) { return wgl_glGetError(); }
GL_APICALL void GL_APIENTRY glGetFloatv (GLenum pname, GLfloat *data) { wgl_glGetFloatv(pname, data); }
GL_APICALL void GL_APIENTRY glGetIntegerv (GLenum pname, GLint *data) { wgl_glGetIntegerv(pname, data); }
GL_APICALL const GLubyte * GL_APIENTRY glGetString (GLenum name) { return wgl_glGetString(name); }
GL_APICALL void GL_APIENTRY glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params) { wgl_glGetTexParameterfv(target, pname, params); }
GL_APICALL void GL_APIENTRY glGetTexParameteriv (GLenum target, GLenum pname, GLint *params) { wgl_glGetTexParameteriv(target, pname, params); }
GL_APICALL void GL_APIENTRY glHint (GLenum target, GLenum mode) { wgl_glHint(target, mode); }
GL_APICALL GLboolean GL_APIENTRY glIsEnabled (GLenum cap) { return wgl_glIsEnabled(cap); }
GL_APICALL GLboolean GL_APIENTRY glIsTexture (GLuint texture) { return wgl_glIsTexture(texture); }
GL_APICALL void GL_APIENTRY glLineWidth (GLfloat width) { wgl_glLineWidth(width); }
GL_APICALL void GL_APIENTRY glPixelStorei (GLenum pname, GLint param) { wgl_glPixelStorei(pname, param); }
GL_APICALL void GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units) { wgl_glPolygonOffset(factor, units); }
GL_APICALL void GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels) { wgl_glReadPixels(x, y, width, height, format, type, pixels); }
GL_APICALL void GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height) { wgl_glScissor(x, y, width, height); }
GL_APICALL void GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask) { wgl_glStencilFunc(func, ref, mask); }
GL_APICALL void GL_APIENTRY glStencilMask (GLuint mask) { wgl_glStencilMask(mask); }
GL_APICALL void GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass) { wgl_glStencilOp(fail, zfail, zpass); }
GL_APICALL void GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) { wgl_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels); }
GL_APICALL void GL_APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param) { wgl_glTexParameterf(target, pname, param); }
GL_APICALL void GL_APIENTRY glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params) { wgl_glTexParameterfv(target, pname, params); }
GL_APICALL void GL_APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint param) { wgl_glTexParameteri(target, pname, param); }
GL_APICALL void GL_APIENTRY glTexParameteriv (GLenum target, GLenum pname, const GLint *params) { wgl_glTexParameteriv(target, pname, params); }
GL_APICALL void GL_APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) { wgl_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels); }
GL_APICALL void GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height) { wgl_glViewport(x, y, width, height); }
#endif

void load_WGL_GL2() {
    wgl_glActiveTexture = (PFNGLACTIVETEXTUREPROC)wgl_loader_GetProcAddress("glActiveTexture");
    wgl_glAttachShader = (PFNGLATTACHSHADERPROC)wgl_loader_GetProcAddress("glAttachShader");
    wgl_glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)wgl_loader_GetProcAddress("glBindAttribLocation");
    wgl_glBindBuffer = (PFNGLBINDBUFFERPROC)wgl_loader_GetProcAddress("glBindBuffer");
    wgl_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)wgl_loader_GetProcAddress("glBindFramebuffer");
    wgl_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)wgl_loader_GetProcAddress("glBindRenderbuffer");
    wgl_glBlendColor = (PFNGLBLENDCOLORPROC)wgl_loader_GetProcAddress("glBlendColor");
    wgl_glBlendEquation = (PFNGLBLENDEQUATIONPROC)wgl_loader_GetProcAddress("glBlendEquation");
    wgl_glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)wgl_loader_GetProcAddress("glBlendEquationSeparate");
    wgl_glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)wgl_loader_GetProcAddress("glBlendFuncSeparate");
    wgl_glBufferData = (PFNGLBUFFERDATAPROC)wgl_loader_GetProcAddress("glBufferData");
    wgl_glBufferSubData = (PFNGLBUFFERSUBDATAPROC)wgl_loader_GetProcAddress("glBufferSubData");
    wgl_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)wgl_loader_GetProcAddress("glCheckFramebufferStatus");
    wgl_glClearDepthf = (PFNGLCLEARDEPTHFPROC)wgl_loader_GetProcAddress("glClearDepthf");
    wgl_glCompileShader = (PFNGLCOMPILESHADERPROC)wgl_loader_GetProcAddress("glCompileShader");
    wgl_glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)wgl_loader_GetProcAddress("glCompressedTexImage2D");
    wgl_glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)wgl_loader_GetProcAddress("glCompressedTexSubImage2D");
    wgl_glCreateProgram = (PFNGLCREATEPROGRAMPROC)wgl_loader_GetProcAddress("glCreateProgram");
    wgl_glCreateShader = (PFNGLCREATESHADERPROC)wgl_loader_GetProcAddress("glCreateShader");
    wgl_glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)wgl_loader_GetProcAddress("glDeleteBuffers");
    wgl_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)wgl_loader_GetProcAddress("glDeleteFramebuffers");
    wgl_glDeleteProgram = (PFNGLDELETEPROGRAMPROC)wgl_loader_GetProcAddress("glDeleteProgram");
    wgl_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)wgl_loader_GetProcAddress("glDeleteRenderbuffers");
    wgl_glDeleteShader = (PFNGLDELETESHADERPROC)wgl_loader_GetProcAddress("glDeleteShader");
    wgl_glDepthRangef = (PFNGLDEPTHRANGEFPROC)wgl_loader_GetProcAddress("glDepthRangef");
    wgl_glDetachShader = (PFNGLDETACHSHADERPROC)wgl_loader_GetProcAddress("glDetachShader");
    wgl_glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)wgl_loader_GetProcAddress("glDisableVertexAttribArray");
    wgl_glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)wgl_loader_GetProcAddress("glEnableVertexAttribArray");
    wgl_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)wgl_loader_GetProcAddress("glFramebufferRenderbuffer");
    wgl_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)wgl_loader_GetProcAddress("glFramebufferTexture2D");
    wgl_glGenBuffers = (PFNGLGENBUFFERSPROC)wgl_loader_GetProcAddress("glGenBuffers");
    wgl_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)wgl_loader_GetProcAddress("glGenerateMipmap");
    wgl_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)wgl_loader_GetProcAddress("glGenFramebuffers");
    wgl_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)wgl_loader_GetProcAddress("glGenRenderbuffers");
    wgl_glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)wgl_loader_GetProcAddress("glGetActiveAttrib");
    wgl_glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)wgl_loader_GetProcAddress("glGetActiveUniform");
    wgl_glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)wgl_loader_GetProcAddress("glGetAttachedShaders");
    wgl_glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)wgl_loader_GetProcAddress("glGetAttribLocation");
    wgl_glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)wgl_loader_GetProcAddress("glGetBufferParameteriv");
    wgl_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)wgl_loader_GetProcAddress("glGetFramebufferAttachmentParameteriv");
    wgl_glGetProgramiv = (PFNGLGETPROGRAMIVPROC)wgl_loader_GetProcAddress("glGetProgramiv");
    wgl_glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)wgl_loader_GetProcAddress("glGetProgramInfoLog");
    wgl_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)wgl_loader_GetProcAddress("glGetRenderbufferParameteriv");
    wgl_glGetShaderiv = (PFNGLGETSHADERIVPROC)wgl_loader_GetProcAddress("glGetShaderiv");
    wgl_glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)wgl_loader_GetProcAddress("glGetShaderInfoLog");
    wgl_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)wgl_loader_GetProcAddress("glGetShaderPrecisionFormat");
    wgl_glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)wgl_loader_GetProcAddress("glGetShaderSource");
    wgl_glGetUniformfv = (PFNGLGETUNIFORMFVPROC)wgl_loader_GetProcAddress("glGetUniformfv");
    wgl_glGetUniformiv = (PFNGLGETUNIFORMIVPROC)wgl_loader_GetProcAddress("glGetUniformiv");
    wgl_glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)wgl_loader_GetProcAddress("glGetUniformLocation");
    wgl_glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)wgl_loader_GetProcAddress("glGetVertexAttribfv");
    wgl_glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)wgl_loader_GetProcAddress("glGetVertexAttribiv");
    wgl_glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)wgl_loader_GetProcAddress("glGetVertexAttribPointerv");
    wgl_glIsBuffer = (PFNGLISBUFFERPROC)wgl_loader_GetProcAddress("glIsBuffer");
    wgl_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)wgl_loader_GetProcAddress("glIsFramebuffer");
    wgl_glIsProgram = (PFNGLISPROGRAMPROC)wgl_loader_GetProcAddress("glIsProgram");
    wgl_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)wgl_loader_GetProcAddress("glIsRenderbuffer");
    wgl_glIsShader = (PFNGLISSHADERPROC)wgl_loader_GetProcAddress("glIsShader");
    wgl_glLinkProgram = (PFNGLLINKPROGRAMPROC)wgl_loader_GetProcAddress("glLinkProgram");
    wgl_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)wgl_loader_GetProcAddress("glReleaseShaderCompiler");
    wgl_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)wgl_loader_GetProcAddress("glRenderbufferStorage");
    wgl_glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)wgl_loader_GetProcAddress("glSampleCoverage");
    wgl_glShaderBinary = (PFNGLSHADERBINARYPROC)wgl_loader_GetProcAddress("glShaderBinary");
    wgl_glShaderSource = (PFNGLSHADERSOURCEPROC)wgl_loader_GetProcAddress("glShaderSource");
    wgl_glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)wgl_loader_GetProcAddress("glStencilFuncSeparate");
    wgl_glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)wgl_loader_GetProcAddress("glStencilMaskSeparate");
    wgl_glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)wgl_loader_GetProcAddress("glStencilOpSeparate");
    wgl_glUniform1f = (PFNGLUNIFORM1FPROC)wgl_loader_GetProcAddress("glUniform1f");
    wgl_glUniform1fv = (PFNGLUNIFORM1FVPROC)wgl_loader_GetProcAddress("glUniform1fv");
    wgl_glUniform1i = (PFNGLUNIFORM1IPROC)wgl_loader_GetProcAddress("glUniform1i");
    wgl_glUniform1iv = (PFNGLUNIFORM1IVPROC)wgl_loader_GetProcAddress("glUniform1iv");
    wgl_glUniform2f = (PFNGLUNIFORM2FPROC)wgl_loader_GetProcAddress("glUniform2f");
    wgl_glUniform2fv = (PFNGLUNIFORM2FVPROC)wgl_loader_GetProcAddress("glUniform2fv");
    wgl_glUniform2i = (PFNGLUNIFORM2IPROC)wgl_loader_GetProcAddress("glUniform2i");
    wgl_glUniform2iv = (PFNGLUNIFORM2IVPROC)wgl_loader_GetProcAddress("glUniform2iv");
    wgl_glUniform3f = (PFNGLUNIFORM3FPROC)wgl_loader_GetProcAddress("glUniform3f");
    wgl_glUniform3fv = (PFNGLUNIFORM3FVPROC)wgl_loader_GetProcAddress("glUniform3fv");
    wgl_glUniform3i = (PFNGLUNIFORM3IPROC)wgl_loader_GetProcAddress("glUniform3i");
    wgl_glUniform3iv = (PFNGLUNIFORM3IVPROC)wgl_loader_GetProcAddress("glUniform3iv");
    wgl_glUniform4f = (PFNGLUNIFORM4FPROC)wgl_loader_GetProcAddress("glUniform4f");
    wgl_glUniform4fv = (PFNGLUNIFORM4FVPROC)wgl_loader_GetProcAddress("glUniform4fv");
    wgl_glUniform4i = (PFNGLUNIFORM4IPROC)wgl_loader_GetProcAddress("glUniform4i");
    wgl_glUniform4iv = (PFNGLUNIFORM4IVPROC)wgl_loader_GetProcAddress("glUniform4iv");
    wgl_glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)wgl_loader_GetProcAddress("glUniformMatrix2fv");
    wgl_glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)wgl_loader_GetProcAddress("glUniformMatrix3fv");
    wgl_glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)wgl_loader_GetProcAddress("glUniformMatrix4fv");
    wgl_glUseProgram = (PFNGLUSEPROGRAMPROC)wgl_loader_GetProcAddress("glUseProgram");
    wgl_glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)wgl_loader_GetProcAddress("glValidateProgram");
    wgl_glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)wgl_loader_GetProcAddress("glVertexAttrib1f");
    wgl_glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)wgl_loader_GetProcAddress("glVertexAttrib1fv");
    wgl_glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)wgl_loader_GetProcAddress("glVertexAttrib2f");
    wgl_glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)wgl_loader_GetProcAddress("glVertexAttrib2fv");
    wgl_glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)wgl_loader_GetProcAddress("glVertexAttrib3f");
    wgl_glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)wgl_loader_GetProcAddress("glVertexAttrib3fv");
    wgl_glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)wgl_loader_GetProcAddress("glVertexAttrib4f");
    wgl_glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)wgl_loader_GetProcAddress("glVertexAttrib4fv");
    wgl_glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)wgl_loader_GetProcAddress("glVertexAttribPointer");
    wgl_glBindTexture = (PFNGLBINDTEXTUREPROC)wgl_loader_GetProcAddress("glBindTexture");
    wgl_glBlendFunc = (PFNGLBLENDFUNCPROC)wgl_loader_GetProcAddress("glBlendFunc");
    wgl_glClear = (PFNGLCLEARPROC)wgl_loader_GetProcAddress("glClear");
    wgl_glClearColor = (PFNGLCLEARCOLORPROC)wgl_loader_GetProcAddress("glClearColor");
    wgl_glClearStencil = (PFNGLCLEARSTENCILPROC)wgl_loader_GetProcAddress("glClearStencil");
    wgl_glColorMask = (PFNGLCOLORMASKPROC)wgl_loader_GetProcAddress("glColorMask");
    wgl_glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC)wgl_loader_GetProcAddress("glCopyTexImage2D");
    wgl_glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC)wgl_loader_GetProcAddress("glCopyTexSubImage2D");
    wgl_glCullFace = (PFNGLCULLFACEPROC)wgl_loader_GetProcAddress("glCullFace");
    wgl_glDeleteTextures = (PFNGLDELETETEXTURESPROC)wgl_loader_GetProcAddress("glDeleteTextures");
    wgl_glDepthFunc = (PFNGLDEPTHFUNCPROC)wgl_loader_GetProcAddress("glDepthFunc");
    wgl_glDepthMask = (PFNGLDEPTHMASKPROC)wgl_loader_GetProcAddress("glDepthMask");
    wgl_glDisable = (PFNGLDISABLEPROC)wgl_loader_GetProcAddress("glDisable");
    wgl_glDrawArrays = (PFNGLDRAWARRAYSPROC)wgl_loader_GetProcAddress("glDrawArrays");
    wgl_glDrawElements = (PFNGLDRAWELEMENTSPROC)wgl_loader_GetProcAddress("glDrawElements");
    wgl_glEnable = (PFNGLENABLEPROC)wgl_loader_GetProcAddress("glEnable");
    wgl_glFinish = (PFNGLFINISHPROC)wgl_loader_GetProcAddress("glFinish");
    wgl_glFlush = (PFNGLFLUSHPROC)wgl_loader_GetProcAddress("glFlush");
    wgl_glFrontFace = (PFNGLFRONTFACEPROC)wgl_loader_GetProcAddress("glFrontFace");
    wgl_glGenTextures = (PFNGLGENTEXTURESPROC)wgl_loader_GetProcAddress("glGenTextures");
    wgl_glGetBooleanv = (PFNGLGETBOOLEANVPROC)wgl_loader_GetProcAddress("glGetBooleanv");
    wgl_glGetError = (PFNGLGETERRORPROC)wgl_loader_GetProcAddress("glGetError");
    wgl_glGetFloatv = (PFNGLGETFLOATVPROC)wgl_loader_GetProcAddress("glGetFloatv");
    wgl_glGetIntegerv = (PFNGLGETINTEGERVPROC)wgl_loader_GetProcAddress("glGetIntegerv");
    wgl_glGetString = (PFNGLGETSTRINGPROC)wgl_loader_GetProcAddress("glGetString");
    wgl_glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC)wgl_loader_GetProcAddress("glGetTexParameterfv");
    wgl_glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC)wgl_loader_GetProcAddress("glGetTexParameteriv");
    wgl_glHint = (PFNGLHINTPROC)wgl_loader_GetProcAddress("glHint");
    wgl_glIsEnabled = (PFNGLISENABLEDPROC)wgl_loader_GetProcAddress("glIsEnabled");
    wgl_glIsTexture = (PFNGLISTEXTUREPROC)wgl_loader_GetProcAddress("glIsTexture");
    wgl_glLineWidth = (PFNGLLINEWIDTHPROC)wgl_loader_GetProcAddress("glLineWidth");
    wgl_glPixelStorei = (PFNGLPIXELSTOREIPROC)wgl_loader_GetProcAddress("glPixelStorei");
    wgl_glPolygonOffset = (PFNGLPOLYGONOFFSETPROC)wgl_loader_GetProcAddress("glPolygonOffset");
    wgl_glReadPixels = (PFNGLREADPIXELSPROC)wgl_loader_GetProcAddress("glReadPixels");
    wgl_glScissor = (PFNGLSCISSORPROC)wgl_loader_GetProcAddress("glScissor");
    wgl_glStencilFunc = (PFNGLSTENCILFUNCPROC)wgl_loader_GetProcAddress("glStencilFunc");
    wgl_glStencilMask = (PFNGLSTENCILMASKPROC)wgl_loader_GetProcAddress("glStencilMask");
    wgl_glStencilOp = (PFNGLSTENCILOPPROC)wgl_loader_GetProcAddress("glStencilOp");
    wgl_glTexImage2D = (PFNGLTEXIMAGE2DPROC)wgl_loader_GetProcAddress("glTexImage2D");
    wgl_glTexParameterf = (PFNGLTEXPARAMETERFPROC)wgl_loader_GetProcAddress("glTexParameterf");
    wgl_glTexParameterfv = (PFNGLTEXPARAMETERFVPROC)wgl_loader_GetProcAddress("glTexParameterfv");
    wgl_glTexParameteri = (PFNGLTEXPARAMETERIPROC)wgl_loader_GetProcAddress("glTexParameteri");
    wgl_glTexParameteriv = (PFNGLTEXPARAMETERIVPROC)wgl_loader_GetProcAddress("glTexParameteriv");
    wgl_glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC)wgl_loader_GetProcAddress("glTexSubImage2D");
    wgl_glViewport = (PFNGLVIEWPORTPROC)wgl_loader_GetProcAddress("glViewport");
}

#ifdef __cplusplus
}
#endif
