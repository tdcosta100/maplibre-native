# Standard FIND_PACKAGE module for OSMesa, sets the following variables:
#   - OSMesa_FOUND
#   - OSMesa_INCLUDE_DIRS (only if OSMesa_FOUND)
#   - OSMesa_LIBRARIES (only if OSMesa_FOUND)

# Try to find the header
FIND_PATH(OSMesa_INCLUDE_DIR NAMES GL/osmesa.h)

# Try to find the library
FIND_LIBRARY(OSMesa_osmesa_LIBRARY NAMES osmesa)
FIND_LIBRARY(OSMesa_libGLESv2_LIBRARY NAMES libGLESv2)

# Handle the QUIETLY/REQUIRED arguments, set OSMesa_FOUND if all variables are
# found
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(OSMesa
                                  REQUIRED_VARS
                                  OSMesa_osmesa_LIBRARY
                                  OSMesa_libGLESv2_LIBRARY
                                  OSMesa_INCLUDE_DIR)

# Hide internal variables
MARK_AS_ADVANCED(OSMesa_INCLUDE_DIR OSMesa_osmesa_LIBRARY OSMesa_libGLESv2_LIBRARY)

# Set standard variables
IF(OSMesa_FOUND)
    SET(OSMesa_INCLUDE_DIRS "${OSMesa_INCLUDE_DIR}")
    SET(OSMesa_LIBRARIES
        "${OSMesa_osmesa_LIBRARY}"
        "${OSMesa_libGLESv2_LIBRARY}"
    )
ENDIF()