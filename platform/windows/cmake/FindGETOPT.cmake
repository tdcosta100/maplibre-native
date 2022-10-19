# Standard FIND_PACKAGE module for getopt-win32, sets the following variables:
#   - GETOPT_FOUND
#   - GETOPT_INCLUDE_DIR (only if GETOPT_FOUND)
#   - GETOPT_LIBRARY (only if GETOPT_FOUND)

# Try to find the header
FIND_PATH(GETOPT_INCLUDE_DIR NAMES getopt.h)

# Try to find the library
FIND_LIBRARY(GETOPT_LIBRARY NAMES getopt)

# Handle the QUIETLY/REQUIRED arguments, set GETOPT_FOUND if all variables are
# found
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GETOPT
                                  REQUIRED_VARS
                                  GETOPT_LIBRARY
                                  GETOPT_INCLUDE_DIR)
