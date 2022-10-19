# Standard FIND_PACKAGE module for EGL, sets the following variables:
#   - EGL_FOUND
#   - EGL_INCLUDE_DIRS (only if EGL_FOUND)
#   - EGL_LIBRARIES (only if EGL_FOUND)

# Try to find the header
FIND_PATH(EGL_INCLUDE_DIR NAMES EGL/egl.h)

# Try to find the library
FIND_LIBRARY(EGL_EGL_LIBRARY NAMES libEGL libEGL.dll)
FIND_LIBRARY(EGL_GLES_LIBRARY NAMES libGLESv2 libGLESv2.dll)

# Handle the QUIETLY/REQUIRED arguments, set EGL_FOUND if all variables are
# found
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(EGL
                                  REQUIRED_VARS
                                  EGL_EGL_LIBRARY
                                  EGL_GLES_LIBRARY
                                  EGL_INCLUDE_DIR)

# Hide internal variables
MARK_AS_ADVANCED(EGL_INCLUDE_DIR EGL_EGL_LIBRARY EGL_GLES_LIBRARY)

# Set standard variables
IF(EGL_FOUND)
    SET(EGL_INCLUDE_DIRS "${EGL_INCLUDE_DIR}")
    SET(EGL_LIBRARIES
        "${EGL_EGL_LIBRARY}"
        "${EGL_GLES_LIBRARY}"
    )
ENDIF()