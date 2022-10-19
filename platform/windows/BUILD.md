```cmd
set DEPS_PATH=path/to/dependencies

cmake . ^
-B build ^
-DCMAKE_PREFIX_PATH=%DEPS_PATH%/angle;%DEPS_PATH%/dlfcn-win32;%DEPS_PATH%/getopt-win32;%DEPS_PATH%/glfw3;%DEPS_PATH%/libcurl;%DEPS_PATH%/libicu;%DEPS_PATH%/libjpeg-turbo;%DEPS_PATH%/libpng;%DEPS_PATH%/libssh;%DEPS_PATH%/libuv;%DEPS_PATH%/mesa3d;%DEPS_PATH%/mesa3d/lib/x64;%DEPS_PATH%/nghttp2;%DEPS_PATH%/openssl;%DEPS_PATH%/openssl;%DEPS_PATH%/pthread-win32;%DEPS_PATH%/zlib ^
-DCURL_LIBRARY=%DEPS_PATH%/libcurl/lib/libcurl_a.lib ^
-DZLIB_LIBRARY=%DEPS_PATH%/zlib/lib/libz.lib ^
-DMBGL_WITH_OSMESA=ON
```
