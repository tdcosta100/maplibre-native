# Standard FIND_PACKAGE module for dlfcn-win32, sets the following variables:
#   - DLFCN_FOUND
#   - DLFCN_INCLUDE_DIR (only if DLFCN_FOUND)
#   - DLFCN_LIBRARY (only if DLFCN_FOUND)

# Try to find the header
FIND_PATH(DLFCN_INCLUDE_DIR NAMES dlfcn.h)

# Try to find the library
FIND_LIBRARY(DLFCN_LIBRARY NAMES dl)

# Handle the QUIETLY/REQUIRED arguments, set DLFCN_FOUND if all variables are
# found
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(DLFCN
                                  REQUIRED_VARS
                                  DLFCN_LIBRARY
                                  DLFCN_INCLUDE_DIR)
