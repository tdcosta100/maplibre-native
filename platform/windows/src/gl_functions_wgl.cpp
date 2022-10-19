#include <mbgl/platform/gl_functions.hpp>

#ifndef MBGL_USE_GLES2
#include <Windows.h>
#include <gl/GL.h>
#else
#include "wgl_loader_gl2.h"
#endif

namespace mbgl {
namespace platform {

void (* const glActiveTexture)(GLenum) = [](GLenum texture) { ::wgl_glActiveTexture(texture); };
void (* const glAttachShader)(GLuint, GLuint) = [](GLuint program, GLuint shader) { ::wgl_glAttachShader(program, shader); };
void (* const glBindAttribLocation)(GLuint, GLuint, const GLchar*) = [](GLuint program, GLuint index, const GLchar* name) { ::wgl_glBindAttribLocation(program, index, name); };
void (* const glBindBuffer)(GLenum, GLuint) = [](GLenum target, GLuint buffer) { ::wgl_glBindBuffer(target, buffer); };
void (* const glBindFramebuffer)(GLenum, GLuint) = [](GLenum target, GLuint framebuffer) { ::wgl_glBindFramebuffer(target, framebuffer); };
void (* const glBindRenderbuffer)(GLenum, GLuint) = [](GLenum target, GLuint renderbuffer) { ::wgl_glBindRenderbuffer(target, renderbuffer); };
void (* const glBindTexture)(GLenum, GLuint) = [](GLenum target, GLuint texture) { ::wgl_glBindTexture(target, texture); };
void (* const glBlendColor)(GLfloat, GLfloat, GLfloat, GLfloat) = [](GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { ::wgl_glBlendColor(red, green, blue, alpha); };
void (* const glBlendEquation)(GLenum) = [](GLenum mode) { ::wgl_glBlendEquation(mode); };
void (* const glBlendEquationSeparate)(GLenum, GLenum) = [](GLenum modeRGB, GLenum modeAlpha) { ::wgl_glBlendEquationSeparate(modeRGB, modeAlpha); };
void (* const glBlendFunc)(GLenum, GLenum) = [](GLenum sfactor, GLenum dfactor) { ::wgl_glBlendFunc(sfactor, dfactor); };
void (* const glBlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum) = [](GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) { ::wgl_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha); };
void (* const glBufferData)(GLenum, GLsizeiptr, const void*, GLenum) = [](GLenum target, GLsizeiptr size, const void* data, GLenum usage) { ::wgl_glBufferData(target, size, data, usage); };
void (* const glBufferSubData)(GLenum, GLintptr, GLsizeiptr, const void*) = [](GLenum target, GLintptr offset, GLsizeiptr size, const void* data) { ::wgl_glBufferSubData(target, offset, size, data); };
GLenum(* const glCheckFramebufferStatus)(GLenum) = [](GLenum target) { return ::wgl_glCheckFramebufferStatus(target); };
void (* const glClear)(GLbitfield) = [](GLbitfield mask) { ::wgl_glClear(mask); };
void (* const glClearColor)(GLfloat, GLfloat, GLfloat, GLfloat) = [](GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { ::wgl_glClearColor(red, green, blue, alpha); };
void (* const glClearDepthf)(GLfloat) = [](GLfloat d) { ::wgl_glClearDepthf(d); };
void (* const glClearStencil)(GLint) = [](GLint s) { ::wgl_glClearStencil(s); };
void (* const glColorMask)(GLboolean, GLboolean, GLboolean, GLboolean) = [](GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { ::wgl_glColorMask(red, green, blue, alpha); };
void (* const glCompileShader)(GLuint) = [](GLuint shader) { ::wgl_glCompileShader(shader); };
void (* const glCompressedTexImage2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void*) = [](GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data) { ::wgl_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data); };
void (* const glCompressedTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void*) = [](GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data) { ::wgl_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data); };
void (* const glCopyTexImage2D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = [](GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { ::wgl_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border); };
void (* const glCopyTexSubImage2D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = [](GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { ::wgl_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); };
GLuint(* const glCreateProgram)() = [](void) { return ::wgl_glCreateProgram(); };
GLuint(* const glCreateShader)(GLenum) = [](GLenum type) { return ::wgl_glCreateShader(type); };
void (* const glCullFace)(GLenum) = [](GLenum mode) { ::wgl_glCullFace(mode); };
void (* const glDeleteBuffers)(GLsizei, const GLuint*) = [](GLsizei n, const GLuint* buffers) { ::wgl_glDeleteBuffers(n, buffers); };
void (* const glDeleteFramebuffers)(GLsizei, const GLuint*) = [](GLsizei n, const GLuint* framebuffers) { ::wgl_glDeleteFramebuffers(n, framebuffers); };
void (* const glDeleteProgram)(GLuint) = [](GLuint program) { ::wgl_glDeleteProgram(program); };
void (* const glDeleteRenderbuffers)(GLsizei, const GLuint*) = [](GLsizei n, const GLuint* renderbuffers) { ::wgl_glDeleteRenderbuffers(n, renderbuffers); };
void (* const glDeleteShader)(GLuint) = [](GLuint shader) { ::wgl_glDeleteShader(shader); };
void (* const glDeleteTextures)(GLsizei, const GLuint*) = [](GLsizei n, const GLuint* textures) { ::wgl_glDeleteTextures(n, textures); };
void (* const glDepthFunc)(GLenum) = [](GLenum func) { ::wgl_glDepthFunc(func); };
void (* const glDepthMask)(GLboolean) = [](GLboolean flag) { ::wgl_glDepthMask(flag); };
void (* const glDepthRangef)(GLfloat, GLfloat) = [](GLfloat n, GLfloat f) { ::wgl_glDepthRangef(n, f); };
void (* const glDetachShader)(GLuint, GLuint) = [](GLuint program, GLuint shader) { ::wgl_glDetachShader(program, shader); };
void (* const glDisable)(GLenum) = [](GLenum cap) { ::wgl_glDisable(cap); };
void (* const glDisableVertexAttribArray)(GLuint) = [](GLuint index) { ::wgl_glDisableVertexAttribArray(index); };
void (* const glDrawArrays)(GLenum, GLint, GLsizei) = [](GLenum mode, GLint first, GLsizei count) { ::wgl_glDrawArrays(mode, first, count); };
void (* const glDrawElements)(GLenum, GLsizei, GLenum, const void*) = [](GLenum mode, GLsizei count, GLenum type, const void* indices) { ::wgl_glDrawElements(mode, count, type, indices); };
void (* const glEnable)(GLenum) = [](GLenum cap) { ::wgl_glEnable(cap); };
void (* const glEnableVertexAttribArray)(GLuint) = [](GLuint index) { ::wgl_glEnableVertexAttribArray(index); };
void (* const glFinish)() = [](void) { ::wgl_glFinish(); };
void (* const glFlush)() = [](void) { ::wgl_glFlush(); };
void (* const glFramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint) = [](GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { ::wgl_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer); };
void (* const glFramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint) = [](GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { ::wgl_glFramebufferTexture2D(target, attachment, textarget, texture, level); };
void (* const glFrontFace)(GLenum) = [](GLenum mode) { ::wgl_glFrontFace(mode); };
void (* const glGenBuffers)(GLsizei, GLuint*) = [](GLsizei n, GLuint* buffers) { ::wgl_glGenBuffers(n, buffers); };
void (* const glGenerateMipmap)(GLenum) = [](GLenum target) { ::wgl_glGenerateMipmap(target); };
void (* const glGenFramebuffers)(GLsizei, GLuint*) = [](GLsizei n, GLuint* framebuffers) { ::wgl_glGenFramebuffers(n, framebuffers); };
void (* const glGenRenderbuffers)(GLsizei, GLuint*) = [](GLsizei n, GLuint* renderbuffers) { ::wgl_glGenRenderbuffers(n, renderbuffers); };
void (* const glGenTextures)(GLsizei, GLuint*) = [](GLsizei n, GLuint* textures) { ::wgl_glGenTextures(n, textures); };
void (* const glGetActiveAttrib)(GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*) = [](GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) { ::wgl_glGetActiveAttrib(program, index, bufSize, length, size, type, name); };
void (* const glGetActiveUniform)(GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*) = [](GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) { ::wgl_glGetActiveUniform(program, index, bufSize, length, size, type, name); };
void (* const glGetAttachedShaders)(GLuint, GLsizei, GLsizei*, GLuint*) = [](GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders) { ::wgl_glGetAttachedShaders(program, maxCount, count, shaders); };
GLint(* const glGetAttribLocation)(GLuint, const GLchar*) = [](GLuint program, const GLchar* name) { return ::wgl_glGetAttribLocation(program, name); };
void (* const glGetBooleanv)(GLenum, GLboolean*) = [](GLenum pname, GLboolean* data) { ::wgl_glGetBooleanv(pname, data); };
void (* const glGetBufferParameteriv)(GLenum, GLenum, GLint*) = [](GLenum target, GLenum pname, GLint* params) { ::wgl_glGetBufferParameteriv(target, pname, params); };
GLenum(* const glGetError)() = [](void) { return ::wgl_glGetError(); };
void (* const glGetFloatv)(GLenum, GLfloat*) = [](GLenum pname, GLfloat* data) { ::wgl_glGetFloatv(pname, data); };
void (* const glGetFramebufferAttachmentParameteriv)(GLenum, GLenum, GLenum, GLint*) = [](GLenum target, GLenum attachment, GLenum pname, GLint* params) { ::wgl_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params); };
void (* const glGetIntegerv)(GLenum, GLint*) = [](GLenum pname, GLint* data) { ::wgl_glGetIntegerv(pname, data); };
void (* const glGetProgramInfoLog)(GLuint, GLsizei, GLsizei*, GLchar*) = [](GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog) { ::wgl_glGetProgramInfoLog(program, bufSize, length, infoLog); };
void (* const glGetProgramiv)(GLuint, GLenum, GLint*) = [](GLuint program, GLenum pname, GLint* params) { ::wgl_glGetProgramiv(program, pname, params); };
void (* const glGetRenderbufferParameteriv)(GLenum, GLenum, GLint*) = [](GLenum target, GLenum pname, GLint* params) { ::wgl_glGetRenderbufferParameteriv(target, pname, params); };
void (* const glGetShaderInfoLog)(GLuint, GLsizei, GLsizei*, GLchar*) = [](GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog) { ::wgl_glGetShaderInfoLog(shader, bufSize, length, infoLog); };
void (* const glGetShaderiv)(GLuint, GLenum, GLint*) = [](GLuint shader, GLenum pname, GLint* params) { ::wgl_glGetShaderiv(shader, pname, params); };
void (* const glGetShaderSource)(GLuint, GLsizei, GLsizei*, GLchar*) = [](GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source) { ::wgl_glGetShaderSource(shader, bufSize, length, source); };
const GLubyte* (* const glGetString)(GLenum) = [](GLenum name) { return ::wgl_glGetString(name); };
void (* const glGetTexParameterfv)(GLenum, GLenum, GLfloat*) = [](GLenum target, GLenum pname, GLfloat* params) { ::wgl_glGetTexParameterfv(target, pname, params); };
void (* const glGetTexParameteriv)(GLenum, GLenum, GLint*) = [](GLenum target, GLenum pname, GLint* params) { ::wgl_glGetTexParameteriv(target, pname, params); };
void (* const glGetUniformfv)(GLuint, GLint, GLfloat*) = [](GLuint program, GLint location, GLfloat* params) { ::wgl_glGetUniformfv(program, location, params); };
void (* const glGetUniformiv)(GLuint, GLint, GLint*) = [](GLuint program, GLint location, GLint* params) { ::wgl_glGetUniformiv(program, location, params); };
GLint(* const glGetUniformLocation)(GLuint, const GLchar*) = [](GLuint program, const GLchar* name) { return ::wgl_glGetUniformLocation(program, name); };
void (* const glGetVertexAttribfv)(GLuint, GLenum, GLfloat*) = [](GLuint index, GLenum pname, GLfloat* params) { ::wgl_glGetVertexAttribfv(index, pname, params); };
void (* const glGetVertexAttribiv)(GLuint, GLenum, GLint*) = [](GLuint index, GLenum pname, GLint* params) { ::wgl_glGetVertexAttribiv(index, pname, params); };
void (* const glGetVertexAttribPointerv)(GLuint, GLenum, void**) = [](GLuint index, GLenum pname, void** pointer) { ::wgl_glGetVertexAttribPointerv(index, pname, pointer); };
void (* const glHint)(GLenum, GLenum) = [](GLenum target, GLenum mode) { ::wgl_glHint(target, mode); };
GLboolean(* const glIsBuffer)(GLuint) = [](GLuint buffer) { return ::wgl_glIsBuffer(buffer); };
GLboolean(* const glIsEnabled)(GLenum) = [](GLenum cap) { return ::wgl_glIsEnabled(cap); };
GLboolean(* const glIsFramebuffer)(GLuint) = [](GLuint framebuffer) { return ::wgl_glIsFramebuffer(framebuffer); };
GLboolean(* const glIsProgram)(GLuint) = [](GLuint program) { return ::wgl_glIsProgram(program); };
GLboolean(* const glIsRenderbuffer)(GLuint) = [](GLuint renderbuffer) { return ::wgl_glIsRenderbuffer(renderbuffer); };
GLboolean(* const glIsShader)(GLuint) = [](GLuint shader) { return ::wgl_glIsShader(shader); };
GLboolean(* const glIsTexture)(GLuint) = [](GLuint texture) { return ::wgl_glIsTexture(texture); };
void (* const glLineWidth)(GLfloat) = [](GLfloat width) { ::wgl_glLineWidth(width); };
void (* const glLinkProgram)(GLuint) = [](GLuint program) { ::wgl_glLinkProgram(program); };
void (* const glPixelStorei)(GLenum, GLint) = [](GLenum pname, GLint param) { ::wgl_glPixelStorei(pname, param); };
void (* const glPolygonOffset)(GLfloat, GLfloat) = [](GLfloat factor, GLfloat units) { ::wgl_glPolygonOffset(factor, units); };
void (* const glReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void*) = [](GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels) { ::wgl_glReadPixels(x, y, width, height, format, type, pixels); };
void (* const glRenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei) = [](GLenum target, GLenum internalformat, GLsizei width, GLsizei height) { ::wgl_glRenderbufferStorage(target, internalformat, width, height); };
void (* const glSampleCoverage)(GLfloat, GLboolean) = [](GLfloat value, GLboolean invert) { ::wgl_glSampleCoverage(value, invert); };
void (* const glScissor)(GLint, GLint, GLsizei, GLsizei) = [](GLint x, GLint y, GLsizei width, GLsizei height) { ::wgl_glScissor(x, y, width, height); };
void (* const glShaderSource)(GLuint, GLsizei, const GLchar* const*, const GLint*) = [](GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length) { ::wgl_glShaderSource(shader, count, string, length); };
void (* const glStencilFunc)(GLenum, GLint, GLuint) = [](GLenum func, GLint ref, GLuint mask) { ::wgl_glStencilFunc(func, ref, mask); };
void (* const glStencilFuncSeparate)(GLenum, GLenum, GLint, GLuint) = [](GLenum face, GLenum func, GLint ref, GLuint mask) { ::wgl_glStencilFuncSeparate(face, func, ref, mask); };
void (* const glStencilMask)(GLuint) = [](GLuint mask) { ::wgl_glStencilMask(mask); };
void (* const glStencilMaskSeparate)(GLenum, GLuint) = [](GLenum face, GLuint mask) { ::wgl_glStencilMaskSeparate(face, mask); };
void (* const glStencilOp)(GLenum, GLenum, GLenum) = [](GLenum fail, GLenum zfail, GLenum zpass) { ::wgl_glStencilOp(fail, zfail, zpass); };
void (* const glStencilOpSeparate)(GLenum, GLenum, GLenum, GLenum) = [](GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) { ::wgl_glStencilOpSeparate(face, sfail, dpfail, dppass); };
void (* const glTexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void*) = [](GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels) { ::wgl_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels); };
void (* const glTexParameterf)(GLenum, GLenum, GLfloat) = [](GLenum target, GLenum pname, GLfloat param) { ::wgl_glTexParameterf(target, pname, param); };
void (* const glTexParameterfv)(GLenum, GLenum, const GLfloat*) = [](GLenum target, GLenum pname, const GLfloat* params) { ::wgl_glTexParameterfv(target, pname, params); };
void (* const glTexParameteri)(GLenum, GLenum, GLint) = [](GLenum target, GLenum pname, GLint param) { ::wgl_glTexParameteri(target, pname, param); };
void (* const glTexParameteriv)(GLenum, GLenum, const GLint*) = [](GLenum target, GLenum pname, const GLint* params) { ::wgl_glTexParameteriv(target, pname, params); };
void (* const glTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void*) = [](GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels) { ::wgl_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels); };
void (* const glUniform1f)(GLint, GLfloat) = [](GLint location, GLfloat v0) { ::wgl_glUniform1f(location, v0); };
void (* const glUniform1fv)(GLint, GLsizei, const GLfloat*) = [](GLint location, GLsizei count, const GLfloat* value) { ::wgl_glUniform1fv(location, count, value); };
void (* const glUniform1i)(GLint, GLint) = [](GLint location, GLint v0) { ::wgl_glUniform1i(location, v0); };
void (* const glUniform1iv)(GLint, GLsizei, const GLint*) = [](GLint location, GLsizei count, const GLint* value) { ::wgl_glUniform1iv(location, count, value); };
void (* const glUniform2f)(GLint, GLfloat, GLfloat) = [](GLint location, GLfloat v0, GLfloat v1) { ::wgl_glUniform2f(location, v0, v1); };
void (* const glUniform2fv)(GLint, GLsizei, const GLfloat*) = [](GLint location, GLsizei count, const GLfloat* value) { ::wgl_glUniform2fv(location, count, value); };
void (* const glUniform2i)(GLint, GLint, GLint) = [](GLint location, GLint v0, GLint v1) { ::wgl_glUniform2i(location, v0, v1); };
void (* const glUniform2iv)(GLint, GLsizei, const GLint*) = [](GLint location, GLsizei count, const GLint* value) { ::wgl_glUniform2iv(location, count, value); };
void (* const glUniform3f)(GLint, GLfloat, GLfloat, GLfloat) = [](GLint location, GLfloat v0, GLfloat v1, GLfloat v2) { ::wgl_glUniform3f(location, v0, v1, v2); };
void (* const glUniform3fv)(GLint, GLsizei, const GLfloat*) = [](GLint location, GLsizei count, const GLfloat* value) { ::wgl_glUniform3fv(location, count, value); };
void (* const glUniform3i)(GLint, GLint, GLint, GLint) = [](GLint location, GLint v0, GLint v1, GLint v2) { ::wgl_glUniform3i(location, v0, v1, v2); };
void (* const glUniform3iv)(GLint, GLsizei, const GLint*) = [](GLint location, GLsizei count, const GLint* value) { ::wgl_glUniform3iv(location, count, value); };
void (* const glUniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat) = [](GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) { ::wgl_glUniform4f(location, v0, v1, v2, v3); };
void (* const glUniform4fv)(GLint, GLsizei, const GLfloat*) = [](GLint location, GLsizei count, const GLfloat* value) { ::wgl_glUniform4fv(location, count, value); };
void (* const glUniform4i)(GLint, GLint, GLint, GLint, GLint) = [](GLint location, GLint v0, GLint v1, GLint v2, GLint v3) { ::wgl_glUniform4i(location, v0, v1, v2, v3); };
void (* const glUniform4iv)(GLint, GLsizei, const GLint*) = [](GLint location, GLsizei count, const GLint* value) { ::wgl_glUniform4iv(location, count, value); };
void (* const glUniformMatrix2fv)(GLint, GLsizei, GLboolean, const GLfloat*) = [](GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { ::wgl_glUniformMatrix2fv(location, count, transpose, value); };
void (* const glUniformMatrix3fv)(GLint, GLsizei, GLboolean, const GLfloat*) = [](GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { ::wgl_glUniformMatrix3fv(location, count, transpose, value); };
void (* const glUniformMatrix4fv)(GLint, GLsizei, GLboolean, const GLfloat*) = [](GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { ::wgl_glUniformMatrix4fv(location, count, transpose, value); };
void (* const glUseProgram)(GLuint) = [](GLuint program) { ::wgl_glUseProgram(program); };
void (* const glValidateProgram)(GLuint) = [](GLuint program) { ::wgl_glValidateProgram(program); };
void (* const glVertexAttrib1f)(GLuint, GLfloat) = [](GLuint index, GLfloat x) { ::wgl_glVertexAttrib1f(index, x); };
void (* const glVertexAttrib1fv)(GLuint, const GLfloat*) = [](GLuint index, const GLfloat* v) { ::wgl_glVertexAttrib1fv(index, v); };
void (* const glVertexAttrib2f)(GLuint, GLfloat, GLfloat) = [](GLuint index, GLfloat x, GLfloat y) { ::wgl_glVertexAttrib2f(index, x, y); };
void (* const glVertexAttrib2fv)(GLuint, const GLfloat*) = [](GLuint index, const GLfloat* v) { ::wgl_glVertexAttrib2fv(index, v); };
void (* const glVertexAttrib3f)(GLuint, GLfloat, GLfloat, GLfloat) = [](GLuint index, GLfloat x, GLfloat y, GLfloat z) { ::wgl_glVertexAttrib3f(index, x, y, z); };
void (* const glVertexAttrib3fv)(GLuint, const GLfloat*) = [](GLuint index, const GLfloat* v) { ::wgl_glVertexAttrib3fv(index, v); };
void (* const glVertexAttrib4f)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = [](GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { ::wgl_glVertexAttrib4f(index, x, y, z, w); };
void (* const glVertexAttrib4fv)(GLuint, const GLfloat*) = [](GLuint index, const GLfloat* v) { ::wgl_glVertexAttrib4fv(index, v); };
void (* const glVertexAttribPointer)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void*) = [](GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer) { ::wgl_glVertexAttribPointer(index, size, type, normalized, stride, pointer); };
void (* const glViewport)(GLint, GLint, GLsizei, GLsizei) = [](GLint x, GLint y, GLsizei width, GLsizei height) { ::wgl_glViewport(x, y, width, height); };

#ifndef MBGL_USE_GLES2
void (* const glDrawPixels)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = ::glDrawPixels;
void (* const glGetDoublev)(GLenum, GLdouble *) = ::glGetDoublev;
void (* const glPixelTransferf)(GLenum, GLfloat) = ::glPixelTransferf;
void (* const glPixelZoom)(GLfloat, GLfloat) = ::glPixelZoom;
void (* const glPointSize)(GLfloat) = ::glPointSize;
void (* const glRasterPos4d)(GLdouble, GLdouble, GLdouble, GLdouble) = ::glRasterPos4d;
#endif

}  // namespace platform
}  // namespace mbgl
