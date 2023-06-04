/*
 *	Assertion - use liberally for debugging. Defining NDEBUG
 *	turns assertions off.
 *	assert(exp) where exp is non-zero does nothing, while
 *	assert(exp) where exp evaluates to zero aborts the program
 *	with a message like
 *
 *	Assertion failed: prog.c line 123: "exp"
 *
 */

#ifdef assert
#undef assert
#endif

#ifndef	NDEBUG
#ifndef	__mkstr__
#define	__mkstr__(exp)	#exp
#endif
extern void	_fassert(int, const char *, const char *);
#define assert(exp) ((void)((exp) || (_fassert(__LINE__, __FILE__, __mkstr__(exp)),0)))
#else
#define	assert(exp)
#endif

#pragma intrinsic(__builtin_software_breakpoint)
extern void __builtin_software_breakpoint(void);

#ifdef __conditional_software_breakpoint
#undef __conditional_software_breakpoint
#endif

#if defined(NDEBUG) || !defined(__DEBUG)
#define __conditional_software_breakpoint(exp)	((void)0)
#else
#define __conditional_software_breakpoint(exp)	\
	((exp) ? ((void)0) : __builtin_software_breakpoint())
#endif

