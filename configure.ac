#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([libsrslog], [0.0.1], [van.fisted@googlemail.com])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([src/logtest.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AM_PROG_AR

# Checks for programs.
AM_PROG_CC_C_O
AC_PROG_CC_C99
AC_PROG_INSTALL
AC_PROG_MAKE_SET
AC_PROG_RANLIB

AC_CHECK_HEADERS([limits.h stddef.h stdlib.h string.h syslog.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_STRERROR_R
AC_CHECK_FUNCS([strchr strdup strtol])


# Checks for header files (1).
AC_CONFIG_FILES([Makefile
		 include/Makefile
		 include/libsrslog/Makefile
		 libsrslog/Makefile
                 src/Makefile])
AC_OUTPUT
echo \
"-------------------------------------------------

 ${PACKAGE_NAME} Version ${PACKAGE_VERSION}

 Prefix: '${prefix}'.
 Compiler: '${CC} ${CFLAGS} ${CPPFLAGS}'
 Libraries: '${LIBS}'

--------------------------------------------------"
