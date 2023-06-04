/*	Characteristics of floating types */

#define	FLT_RADIX	2		/* radix of float exponent */
#define	FLT_ROUNDS	1		/* rounding mode for floating-point addition (to nearest) */

// 16-bit mantissa
#define	__16_MANT_DIG		(16)
#define	__16_EPSILON		(3.05176e-05)
#define	__16_DIG		(5)
#define	__16_MIN_EXP		(-125)
#define	__16_MIN		(1.17549435e-38)
#define	__16_MIN_10_EXP		(-37)
#define	__16_MAX_EXP		(128)
#define __16_MAX		(3.40277e+38)
#define	__16_MAX_10_EXP		(38)
// 24-bit mantissa
#define	__24_MANT_DIG		(24)
#define	__24_EPSILON		(1.19209290e-07)
#define	__24_DIG		(6)
#define	__24_MIN_EXP		(-125)
#define	__24_MIN		(1.17549435e-38)
#define	__24_MIN_10_EXP		(-37)
#define	__24_MAX_EXP		(128)
#define __24_MAX		(3.40282347e+38)
#define	__24_MAX_10_EXP		(38)

#ifndef	__SIZEOF_FLOAT__
#error __SIZEOF_FLOAT__ macro is undefined
#endif

#if	__SIZEOF_FLOAT__ == 4
#define	FLT_MANT_DIG	__24_MANT_DIG
#define	FLT_EPSILON	__24_EPSILON
#define	FLT_DIG		__24_DIG
#define	FLT_MIN_EXP	__24_MIN_EXP
#define	FLT_MIN		__24_MIN
#define	FLT_MIN_10_EXP	__24_MIN_10_EXP
#define	FLT_MAX_EXP	__24_MAX_EXP
#define FLT_MAX         __24_MAX
#define	FLT_MAX_10_EXP	__24_MAX_10_EXP
#else
#define	FLT_MANT_DIG	__16_MANT_DIG
#define	FLT_EPSILON	__16_EPSILON
#define	FLT_DIG		__16_DIG
#define	FLT_MIN_EXP	__16_MIN_EXP
#define	FLT_MIN		__16_MIN
#define	FLT_MIN_10_EXP	__16_MIN_10_EXP
#define	FLT_MAX_EXP	__16_MAX_EXP
#define FLT_MAX         __16_MAX
#define	FLT_MAX_10_EXP	__16_MAX_10_EXP
#endif

#ifndef	__SIZEOF_DOUBLE__
#error __SIZEOF_DOUBLE__ macro is undefined
#endif

#if	__SIZEOF_DOUBLE__ == 4
#define	DBL_MANT_DIG	__24_MANT_DIG
#define	DBL_EPSILON	__24_EPSILON
#define	DBL_DIG		__24_DIG
#define	DBL_MIN_EXP	__24_MIN_EXP
#define	DBL_MIN		__24_MIN
#define	DBL_MIN_10_EXP	__24_MIN_10_EXP
#define	DBL_MAX_EXP	__24_MAX_EXP
#define DBL_MAX         __24_MAX
#define	DBL_MAX_10_EXP	__24_MAX_10_EXP
#else
#define	DBL_MANT_DIG	__16_MANT_DIG
#define	DBL_EPSILON	__16_EPSILON
#define	DBL_DIG		__16_DIG
#define	DBL_MIN_EXP	__16_MIN_EXP
#define	DBL_MIN		__16_MIN
#define	DBL_MIN_10_EXP	__16_MIN_10_EXP
#define	DBL_MAX_EXP	__16_MAX_EXP
#define DBL_MAX         __16_MAX
#define	DBL_MAX_10_EXP	__16_MAX_10_EXP
#endif

#ifndef	__SIZEOF_LONG_DOUBLE__
#error __SIZEOF_LONG_DOUBLE__ macro is undefined
#endif

#if	__SIZEOF_LONG_DOUBLE__ == 4
/*	long double equates to double */
#define	LDBL_MANT_DIG	DBL_MANT_DIG
#define	LDBL_EPSILON	DBL_EPSILON
#define	LDBL_DIG	DBL_DIG
#define	LDBL_MIN_EXP	DBL_MIN_EXP
#define	LDBL_MIN	DBL_MIN
#define	LDBL_MIN_10_EXP	DBL_MIN_10_EXP
#define	LDBL_MAX_EXP	DBL_MAX_EXP
#define	LDBL_MAX	DBL_MAX
#define	LDBL_MAX_10_EXP	DBL_MAX_10_EXP
#endif

#if !__STDC__
#if defined(_PIC18)

/* Floating-point overflow and underflow */
#define _FPOVER
#define _FPUNDER

/*
  These flags must be cleared by the user before any floating-point
  add, subtract, multiply, or divide operation if they are to be
  tested after that operation or sequence of operations.

  They will be set upon arithmetic overflow or underflow,
  respectively.

  The result of an overflowing or underflowing operation may not be a
  valid floating-point value.
*/
extern volatile __bit _fpover;
extern volatile __bit _fpunder;

/* Floating-point divide by zero */
#define _FPDIV0

/*
  This flag must be cleared by the user before any floating-point
  divide operation if it is to be tested after that operation or
  sequence of operations.

  It will be set if the divisor is zero.

  The result of an attempt to divide by zero may not be a valid
  floating-point value.
*/
extern volatile __bit _fpdiv0;

#endif /* _PIC18 */
#endif /* !__STDC__ */
