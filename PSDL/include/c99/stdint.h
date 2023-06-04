#ifndef _STDINT_H
#define _STDINT_H

#include <musl_xc8.h>

#define __NEED_int8_t
#define __NEED_int16_t
#define __NEED_int32_t
#define __NEED_int64_t

#define __NEED_uint8_t
#define __NEED_uint16_t
#define __NEED_uint32_t
#define __NEED_uint64_t

#define __NEED_intptr_t
#define __NEED_uintptr_t

#define __NEED_intmax_t
#define __NEED_uintmax_t

#include <bits/alltypes.h>

typedef int8_t int_fast8_t;
#if __SIZEOF_LONG_LONG__ == 8
typedef int64_t int_fast64_t;
#endif

typedef int8_t  int_least8_t;
typedef int16_t int_least16_t;
#ifdef __DEFINED_int24_t
typedef int24_t int_least24_t;
typedef int24_t int_fast24_t;
#endif
typedef int32_t int_least32_t;
#if __SIZEOF_LONG_LONG__ == 8
typedef int64_t int_least64_t;
#endif

typedef uint8_t uint_fast8_t;
#if __SIZEOF_LONG_LONG__ == 8
typedef uint64_t uint_fast64_t;
#endif

typedef uint8_t  uint_least8_t;
typedef uint16_t uint_least16_t;
#ifdef __DEFINED_uint24_t
typedef uint24_t uint_least24_t;
typedef uint24_t uint_fast24_t;
#endif
typedef uint32_t uint_least32_t;
#if __SIZEOF_LONG_LONG__ == 8
typedef uint64_t uint_least64_t;
#endif

#define INT8_MIN   (-1-0x7f)
#define INT16_MIN  (-1-0x7fff)
#if	defined(__DEFINED_int24_t)
#define INT24_MIN (-8388608L)
#endif
#define INT32_MIN  (-1-0x7fffffff)
#if __SIZEOF_LONG_LONG__ == 8
#define INT64_MIN  (-1-0x7fffffffffffffff)
#endif

#define INT8_MAX   (0x7f)
#define INT16_MAX  (0x7fff)
#if	defined(__DEFINED_int24_t)
#define INT24_MAX (8388607L)
#endif
#define INT32_MAX  (0x7fffffff)
#if __SIZEOF_LONG_LONG__ == 8
#define INT64_MAX  (0x7fffffffffffffff)
#endif

#define UINT8_MAX  (0xff)
#define UINT16_MAX (0xffff)
#if	defined(__DEFINED_uint24_t)
#define UINT24_MAX (16777215UL)
#endif
#define UINT32_MAX (0xffffffffu)
#if __SIZEOF_LONG_LONG__ == 8
#define UINT64_MAX (0xffffffffffffffffu)
#endif

#define INT_FAST8_MIN   INT8_MIN
#if __SIZEOF_LONG_LONG__ == 8
#define INT_FAST64_MIN  INT64_MIN
#endif

#define INT_LEAST8_MIN   INT8_MIN
#define INT_LEAST16_MIN  INT16_MIN
#if	defined(__DEFINED_int24_t)
#define INT_LEAST24_MIN (-8388608L)
#define INT_FAST24_MIN (-8388608L)
#endif
#define INT_LEAST32_MIN  INT32_MIN
#if __SIZEOF_LONG_LONG__ == 8
#define INT_LEAST64_MIN  INT64_MIN
#endif

#define INT_FAST8_MAX   INT8_MAX
#if __SIZEOF_LONG_LONG__ == 8
#define INT_FAST64_MAX  INT64_MAX
#endif

#define INT_LEAST8_MAX   INT8_MAX
#define INT_LEAST16_MAX  INT16_MAX
#if	defined(__DEFINED_int24_t)
#define INT_LEAST24_MAX (8388607L)
#define INT_FAST24_MAX (8388607L)
#endif
#define INT_LEAST32_MAX  INT32_MAX
#if __SIZEOF_LONG_LONG__ == 8
#define INT_LEAST64_MAX  INT64_MAX
#endif

#define UINT_FAST8_MAX  UINT8_MAX
#if __SIZEOF_LONG_LONG__ == 8
#define UINT_FAST64_MAX UINT64_MAX
#endif

#define UINT_LEAST8_MAX  UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#if	defined(__DEFINED_uint24_t)
#define UINT_LEAST24_MAX (16777215UL)
#define UINT_FAST24_MAX (16777215UL)
#endif
#define UINT_LEAST32_MAX UINT32_MAX
#if __SIZEOF_LONG_LONG__ == 8
#define UINT_LEAST64_MAX UINT64_MAX
#endif

#if __SIZEOF_LONG_LONG__ == 8
#define INTMAX_MIN  INT64_MIN
#define INTMAX_MAX  INT64_MAX
#define UINTMAX_MAX UINT64_MAX
#else
#define INTMAX_MIN  INT32_MIN
#define INTMAX_MAX  INT32_MAX
#define UINTMAX_MAX UINT32_MAX
#endif

#include <bits/stdint.h>

#define INT8_C(c)  c
#define INT16_C(c) c
#if	defined(__DEFINED_int24_t)
#define INT24_C(v)	(v ## L)
#endif
#define INT32_C(c) c ## L

#define UINT8_C(c)  c
#define UINT16_C(c) c
#if	defined(__DEFINED_uint24_t)
#define UINT24_C(v)	(v ## UL)
#endif
#define UINT32_C(c) c ## UL

#if __SIZEOF_LONG_LONG__ == 8
#define INT64_C(c) c ## LL
#define UINT64_C(c) c ## ULL
#define INTMAX_C(c)  c ## LL
#define UINTMAX_C(c) c ## ULL
#else
#define INTMAX_C(c)  c ## L
#define UINTMAX_C(c) c ## UL
#endif

#endif
