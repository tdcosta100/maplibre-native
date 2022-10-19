add_compile_definitions(_USE_MATH_DEFINES)
add_compile_definitions(NOMINMAX)
add_compile_definitions(CURL_STATICLIB)

set(CMAKE_FIND_LIBRARY_SUFFIXES ".lib" ".dll")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

find_package(CURL REQUIRED)
find_package(ICU OPTIONAL_COMPONENTS i18n)
find_package(ICU OPTIONAL_COMPONENTS uc)
find_package(JPEG REQUIRED)
find_package(PNG REQUIRED)
find_package(LIBUV REQUIRED)
find_package(DLFCN REQUIRED)
find_package(GETOPT REQUIRED)
find_package(PTHREADS REQUIRED)

find_library(LIBCRYPTO libcrypto)
find_library(LIBSSL libssl)
find_library(LIBSSH2 libssh2)
find_library(NGHTTP2 nghttp2)

set(
    CURL_LIBRARIES
    ${CURL_LIBRARIES}
    ${LIBCRYPTO}
    ${LIBSSL}
    ${LIBSSH2}
    ${NGHTTP2}
    crypt32.lib
    normaliz.lib
    wldap32.lib
    ws2_32.lib
)

target_sources(
    mbgl-core
    PRIVATE
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/gfx/headless_backend.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/gfx/headless_frontend.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/gl/headless_backend.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/i18n/collator.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/i18n/number_format.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/layermanager/layer_manager.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/platform/time.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/asset_file_source.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/database_file_source.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/file_source_manager.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/file_source_request.cpp
        $<$<BOOL:${MBGL_PUBLIC_BUILD}>:${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/http_file_source.cpp>
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/local_file_request.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/local_file_source.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/mbtiles_file_source.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/main_resource_loader.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/offline.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/offline_database.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/offline_download.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/online_file_source.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/storage/sqlite3.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/text/bidi.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/text/local_glyph_rasterizer.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/async_task.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/compression.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/image.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/jpeg_reader.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/logging_stderr.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/monotonic_timer.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/png_reader.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/png_writer.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/run_loop.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/string_stdlib.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/thread.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/thread_local.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/timer.cpp
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/util/utf.cpp
)

target_compile_definitions(
    mbgl-core
    PUBLIC MBGL_USE_GLES2
)


if(MBGL_WITH_EGL)
    find_package(EGL)
    target_sources(
        mbgl-core
        PRIVATE
            ${PROJECT_SOURCE_DIR}/platform/windows/src/headless_backend_egl.cpp
            ${PROJECT_SOURCE_DIR}/platform/windows/src/gl_functions.cpp
    )
    target_link_libraries(mbgl-core PRIVATE ${EGL_LIBRARIES})
    target_include_directories(mbgl-core PRIVATE ${EGL_INCLUDE_DIR})
elseif(MBGL_WITH_OSMESA)
    find_package(OSMesa)
    target_sources(
        mbgl-core
        PRIVATE
            ${PROJECT_SOURCE_DIR}/platform/windows/src/headless_backend_osmesa.cpp
            ${PROJECT_SOURCE_DIR}/platform/windows/src/gl_functions.cpp
    )
    target_link_libraries(mbgl-core PRIVATE ${OSMesa_LIBRARIES})
    target_include_directories(mbgl-core PRIVATE ${OSMesa_INCLUDE_DIR})
else()
    target_sources(
        mbgl-core
        PUBLIC
            ${PROJECT_SOURCE_DIR}/platform/windows/src/wgl_loader.c
            ${PROJECT_SOURCE_DIR}/platform/windows/src/wgl_loader_wgl.c
            ${PROJECT_SOURCE_DIR}/platform/windows/src/wgl_loader_wglext.c
            ${PROJECT_SOURCE_DIR}/platform/windows/src/wgl_loader_gl2.c
        PRIVATE
            ${PROJECT_SOURCE_DIR}/platform/windows/src/headless_backend_wgl.cpp
            ${PROJECT_SOURCE_DIR}/platform/windows/src/gl_functions_wgl.cpp
    )
    target_link_libraries(mbgl-core PRIVATE opengl32.lib)
endif()

# FIXME: Should not be needed, but now needed by node because of the headless frontend.
target_include_directories(
    mbgl-core
    PUBLIC
        ${PROJECT_SOURCE_DIR}/platform/default/include
        ${PROJECT_SOURCE_DIR}/platform/windows/include
    PRIVATE
        ${CURL_INCLUDE_DIRS}
        ${DLFCN_INCLUDE_DIR}
        ${GETOPT_INCLUDE_DIR}
        ${JPEG_INCLUDE_DIRS}
        ${LIBUV_INCLUDE_DIRS}
        ${PTHREADS_INCLUDE_DIR}
)

include(${PROJECT_SOURCE_DIR}/vendor/nunicode.cmake)
include(${PROJECT_SOURCE_DIR}/vendor/sqlite.cmake)

if(NOT ${ICU_FOUND} OR "${ICU_VERSION}" VERSION_LESS 62.0)
    message(STATUS "ICU not found or too old, using builtin.")

    set(MBGL_USE_BUILTIN_ICU TRUE)
    include(${PROJECT_SOURCE_DIR}/vendor/icu.cmake)

    set_source_files_properties(
        ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/i18n/number_format.cpp
        PROPERTIES
        COMPILE_DEFINITIONS
        MBGL_USE_BUILTIN_ICU
    )
endif()

target_link_libraries(
    mbgl-core
    PRIVATE
        ${CURL_LIBRARIES}
        ${DLFCN_LIBRARY}
        ${GETOPT_LIBRARY}
        ${JPEG_LIBRARIES}
        ${LIBUV_LIBRARIES}
        ${PTHREADS_LIBRARY}
        $<$<NOT:$<BOOL:${MBGL_USE_BUILTIN_ICU}>>:ICU::i18n>
        $<$<NOT:$<BOOL:${MBGL_USE_BUILTIN_ICU}>>:ICU::uc>
        $<$<BOOL:${MBGL_USE_BUILTIN_ICU}>:mbgl-vendor-icu>
        PNG::PNG
        mbgl-vendor-nunicode
        mbgl-vendor-sqlite
)

add_subdirectory(${PROJECT_SOURCE_DIR}/bin)
add_subdirectory(${PROJECT_SOURCE_DIR}/expression-test)
add_subdirectory(${PROJECT_SOURCE_DIR}/platform/glfw)
add_subdirectory(${PROJECT_SOURCE_DIR}/platform/node)

add_executable(
    mbgl-test-runner
    ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/test/main.cpp
)

target_compile_definitions(
    mbgl-test-runner
    PRIVATE WORK_DIRECTORY=${PROJECT_SOURCE_DIR}
)

target_link_libraries(
    mbgl-test-runner
    PRIVATE
        mbgl-compiler-options
        -Wl,--whole-archive
        mbgl-test
        -Wl,--no-whole-archive
)

add_executable(
    mbgl-benchmark-runner
    ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/benchmark/main.cpp
)

target_link_libraries(
    mbgl-benchmark-runner
    PRIVATE
        mbgl-compiler-options
        -Wl,--whole-archive
        mbgl-benchmark
        -Wl,--no-whole-archive
)

add_executable(
    mbgl-render-test-runner
    ${PROJECT_SOURCE_DIR}/platform/default/src/mbgl/render-test/main.cpp
)

target_link_libraries(
    mbgl-render-test-runner
    PRIVATE mbgl-compiler-options mbgl-render-test
)

# Disable benchmarks in CI as they run in VM environment
if(NOT DEFINED ENV{CI})
    add_test(NAME mbgl-benchmark-runner COMMAND mbgl-benchmark-runner WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
endif()
add_test(NAME mbgl-test-runner COMMAND mbgl-test-runner WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})

install(TARGETS mbgl-render-test-runner RUNTIME DESTINATION bin)
