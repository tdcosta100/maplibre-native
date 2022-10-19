# Standard FIND_PACKAGE module for pthreads-win32, sets the following variables:
#   - PTHREADS_FOUND
#   - PTHREADS_INCLUDE_DIR (only if PTHREADS_FOUND)
#   - PTHREADS_LIBRARY (only if PTHREADS_FOUND)

# Try to find the header
FIND_PATH(PTHREADS_INCLUDE_DIR NAMES pthread.h)

# Try to find the library
FIND_LIBRARY(PTHREADS_LIBRARY NAMES pthread)

# Handle the QUIETLY/REQUIRED arguments, set PTHREADS_FOUND if all variables are
# found
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(PTHREADS
                                  REQUIRED_VARS
                                  PTHREADS_LIBRARY
                                  PTHREADS_INCLUDE_DIR)
