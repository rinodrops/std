// include all the headers of standard c library
//-----------------------------------------------------------------------------
// FOR LIBRARY DEVELOPERS, including this header file is strongly unrecommended.
//=============================================================================

//-----------------------------------------------------------------------------
#ifndef STDC_ALL_HEADER
#define STDC_ALL_HEADER
//-----------------------------------------------------------------------------
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>
// C99 ------------------------------------------------------------------------
#if __STDC_VERSION__ >= 199901L
	#include <complex.h>
	#include <fenv.h>
	#include <inttypes.h>
	#include <stdbool.h>
	#include <stdint.h>
	#include <tgmath.h>
#endif
// C11 ------------------------------------------------------------------------
#if __STDC_VERSION__ >= 201112L
	#include <stdalign.h>
	#include <stdatomic.h>
	#include <stdnoreturn.h>
	#if !(__clang__ || __GNUC__)
		#include <threads.h>
		#include <uchar.h>
	#endif
#endif
//-----------------------------------------------------------------------------
#endif // end of include guard. vim:ts=4 syntax=cpp:
