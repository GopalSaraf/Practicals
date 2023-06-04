/*	Characteristics of integral types */

#define	CHAR_BIT	8			/* bits per char */
#define	SCHAR_MAX	127			/* max value of a signed char */
#define	SCHAR_MIN	-128		/* min value of a signed char */
#define	UCHAR_MAX	255			/* max value of an unsigned char */
#define	CHAR_MAX	UCHAR_MAX	/* chars are unsigned */
#define	CHAR_MIN	0
#define	SHRT_MAX	32767			/* max value of a short */
#define	SHRT_MIN	(int)-32768		/* min value of a short */
#define	USHRT_MAX	65535			/* max value of an unsigned short */
#define	INT_MAX		32767			/* max value of an int */
#define	INT_MIN		(int)-32768		/* min value of an int */
#define	UINT_MAX	65535			/* max value of an unsigned int */
#define	SHRTLONG_MAX	8388607			/* max value of short long/__int24 (non-Standard) */
#ifdef __CCI__
#define	SHRTLONG_MIN	(long)-8388608	/* min value of a short long/__int24 (non-Standard) */
#else
#define	SHRTLONG_MIN	(__int24)-8388608	/* min value of a short long/__int24 (non-Standard) */
#endif
#define	USHRTLONG_MAX	16777215		/* max value of an unsigned short long/__int24 (non-Standard) */
#define	LONG_MAX	2147483647		/* max value of long */
#define	LONG_MIN	(long)-2147483648	/* min value of a long */
#define	ULONG_MAX	4294967295		/* max value of an unsigned long */
#if __SIZEOF_LONG_LONG__ == 8
#define	LLONG_MAX	9223372036854775807LL		/* max value of long long (C99 Standard) */
#define	LLONG_MIN	-9223372036854775808LL	/* min value of a long long (C99 Standard) */
#define	ULLONG_MAX	18446744073709551615ULL	/* max value of an unsigned long long (C99 Standard) */
#else // __SIZEOF_LONG_LONG__ == 4
#define	LLONG_MAX	LONG_MAX
#define	LLONG_MIN	LONG_MIN
#define	ULLONG_MAX	ULONG_MAX
#endif
#define MB_LEN_MAX	1 /* maximum number of bytes in a multibyte character, for any supported locale */
