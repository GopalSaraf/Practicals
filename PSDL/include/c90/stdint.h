/*
 * Copyright 2010 Microchip Technology Inc, all rights reserved
 *
 * This file defines the standard integer types per ISO/IEC 9899:1999
 *
 */

 /* should these types already be #defined, do not redefine them */
  
 /* fixed width types */

#ifndef int8_t
typedef signed char int8_t;
#define int8_t int8_t
#define INT8_MIN (-128)
#define INT8_MAX (127)
#endif

#ifndef int16_t
typedef signed int int16_t;
#define int16_t int16_t
#define INT16_MIN (-32768)
#define INT16_MAX (32767)
#endif

#ifndef __CCI__
#ifndef int24_t
typedef __int24 int24_t;
#define int24_t int24_t
#define INT24_MIN (-8388608L)
#define INT24_MAX (8388607L)
#endif
#endif

#ifndef int32_t
typedef signed long int int32_t;
#define int32_t int32_t
#define INT32_MIN (-2147483648L)
#define INT32_MAX (2147483647L)
#endif

#if __SIZEOF_LONG_LONG__ == 8
#ifndef int64_t
typedef signed long long int int64_t;
#define int64_t int64_t
#define INT64_MIN (-9223372036854775808LL)
#define INT64_MAX (9223372036854775807LL)
#endif
#endif

#ifndef uint8_t
typedef unsigned char uint8_t;
#define uint8_t uint8_t
#define UINT8_MAX (255)
#endif

#ifndef uint16_t
typedef unsigned int uint16_t;
#define uint16_t uint16_t
#define UINT16_MAX (65535U)
#endif

#ifndef __CCI__
#ifndef uint24_t
typedef __uint24 uint24_t;
#define uint24_t uint24_t
#define UINT24_MAX (16777215UL)
#endif
#endif

#ifndef uint32_t
typedef unsigned long int uint32_t;
#define uint32_t uint32_t
#define UINT32_MAX (4294967295UL)
#endif

#if __SIZEOF_LONG_LONG__ == 8
#ifndef uint64_t
typedef unsigned long long int uint64_t;
#define uint64_t uint64_t
#define UINT64_MAX (18446744073709551615ULL)
#endif
#endif

  /* types that are at least as wide */

#ifndef int_least8_t
typedef signed char int_least8_t;
#define int_least8_t int_least8_t
#define INT_LEAST8_MIN (-128)
#define INT_LEAST8_MAX (127)
#define INT8_C(v)	(v)
#endif

#ifndef int_least16_t
typedef signed int int_least16_t;
#define int_least16_t int_least16_t
#define INT_LEAST16_MIN (-32768)
#define INT_LEAST16_MAX (32767)
#define INT16_C(v)	(v)
#endif

#ifndef int_least24_t
#ifdef __CCI__
typedef signed long int int_least24_t;
#define INT_LEAST24_MIN (-2147483648L)
#define INT_LEAST24_MAX (2147483647L)
#else
typedef __int24 int_least24_t;
#define INT_LEAST24_MIN (-8388608L)
#define INT_LEAST24_MAX (8388607L)
#endif
#define int_least24_t int_least24_t
#define INT24_C(v)	(v ## L)
#endif

#ifndef int_least32_t
typedef signed long int int_least32_t;
#define int_least32_t int_least32_t
#define INT_LEAST32_MIN (-2147483648L)
#define INT_LEAST32_MAX (2147483647L)
#define INT32_C(v)	(v ## L)
#endif

#if __SIZEOF_LONG_LONG__ == 8
#ifndef int_least64_t
typedef signed long long int int_least64_t;
#define int_least64_t int_least64_t
#define INT_LEAST64_MIN (-9223372036854775808LL)
#define INT_LEAST64_MAX (9223372036854775807LL)
#define INT64_C(v)	(v ## LL)
#endif
#endif

#ifndef uint_least8_t
typedef unsigned char uint_least8_t;
#define uint_least8_t uint_least8_t
#define UINT_LEAST8_MAX (255)
#define UINT8_C(v)	(v ## U)
#endif

#ifndef uint_least16_t
typedef unsigned int uint_least16_t;
#define uint_least16_t uint_least16_t
#define UINT_LEAST16_MAX (65535UL)
#define UINT16_C(v)	(v ## U)
#endif

#ifndef uint_least24_t
#ifdef __CCI__
typedef unsigned long int uint_least24_t;
#define UINT_LEAST24_MAX (4294967295UL)
#else
typedef __uint24 uint_least24_t;
#define UINT_LEAST24_MAX (16777215UL)
#endif
#define uint_least24_t uint_least24_t
#define UINT24_C(v)	(v ## UL)
#endif

#ifndef uint_least32_t
typedef unsigned long int uint_least32_t;
#define uint_least32_t uint_least32_t
#define UINT_LEAST32_MAX (4294967295UL)
#define UINT32_C(v)	(v ## UL)
#endif

#if __SIZEOF_LONG_LONG__ == 8
#ifndef uint_least64_t
typedef unsigned long long int uint_least64_t;
#define uint_least64_t uint_least64_t
#define UINT_LEAST64_MAX (18446744073709551615ULL)
#define UINT64_C(v)	(v ## ULL)
#endif
#endif


  /* types that are at least as wide and are usually the fastest */

#ifndef int_fast8_t
typedef signed char int_fast8_t;
#define int_fast8_t int_fast8_t
#define INT_FAST8_MIN (-128)
#define INT_FAST8_MAX (127)
#endif

#ifndef int_fast16_t
typedef signed int int_fast16_t;
#define int_fast16_t int_fast16_t
#define INT_FAST16_MIN (-32768)
#define INT_FAST16_MAX (32767)
#endif

#ifndef int_fast24_t
#ifdef __CCI__
typedef signed long int int_fast24_t;
#define INT_FAST24_MIN (-2147483648L)
#define INT_FAST24_MAX (2147483647L)
#else
typedef __int24 int_fast24_t;
#define INT_FAST24_MIN (-8388608L)
#define INT_FAST24_MAX (8388607L)
#endif
#define int_fast24_t int_fast24_t
#endif

#ifndef int_fast32_t
typedef signed long int int_fast32_t;
#define int_fast32_t int_fast32_t
#define INT_FAST32_MIN (-2147483648L)
#define INT_FAST32_MAX (2147483647L)
#endif

#if __SIZEOF_LONG_LONG__ == 8
#ifndef int_fast64_t
typedef signed long long int int_fast64_t;
#define int_fast64_t int_fast64_t
#define INT_FAST64_MIN (-9223372036854775808LL)
#define INT_FAST64_MAX (9223372036854775807LL)
#endif
#endif

#ifndef uint_fast8_t
typedef unsigned char uint_fast8_t;
#define uint_fast8_t uint_fast8_t
#define UINT_FAST8_MAX (255)
#endif

#ifndef uint_fast16_t
typedef unsigned int uint_fast16_t;
#define uint_fast16_t uint_fast16_t
#define UINT_FAST16_MAX (65535UL)
#endif

#ifndef uint_fast24_t
#ifdef __CCI__
typedef unsigned long int uint_fast24_t;
#define UINT_FAST24_MAX (4294967295UL)
#else
typedef __uint24 uint_fast24_t;
#define UINT_FAST24_MAX (16777215UL)
#endif
#define uint_fast24_t uint_fast24_t
#endif

#ifndef uint_fast32_t
typedef unsigned long int uint_fast32_t;
#define uint_fast32_t uint_fast32_t
#define UINT_FAST32_MAX (4294967295UL)
#endif

#if __SIZEOF_LONG_LONG__ == 8
#ifndef uint_fast64_t
typedef unsigned long long int uint_fast64_t;
#define uint_fast64_t uint_fast64_t
#define UINT_FAST64_MAX (18446744073709551615ULL)
#endif
#endif

#ifndef intmax_t
#define intmax_t intmax_t
#if __SIZEOF_LONG_LONG__ == 8
typedef int64_t intmax_t;
#define INTMAX_MIN	INT64_MIN
#define INTMAX_MAX	INT64_MAX
#define INTMAX_C(v) INT64_C(v)
#else // __SIZEOF_LONG_LONG__ == 4
typedef int32_t intmax_t;
#define INTMAX_MIN	INT32_MIN
#define INTMAX_MAX	INT32_MAX
#define INTMAX_C(v) INT32_C(v)
#endif
#endif

#ifndef uintmax_t
#define uintmax_t uintmax_t
#if __SIZEOF_LONG_LONG__ == 8
typedef uint64_t uintmax_t;
#define UINTMAX_MAX	UINT64_MAX
#define UINTMAX_C(v) UINT64_C(v)
#else // __SIZEOF_LONG_LONG__ == 4
typedef uint32_t uintmax_t;
#define UINTMAX_MAX	UINT32_MAX
#define UINTMAX_C(v) UINT32_C(v)
#endif
#endif

#ifndef intptr_t
typedef int16_t	intptr_t;
#define intptr_t intptr_t
#endif

#ifndef uintptr_t
typedef uint16_t uintptr_t;
#define uintptr_t uintptr_t
#endif

