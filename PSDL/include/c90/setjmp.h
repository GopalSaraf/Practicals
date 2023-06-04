#ifndef	__SETJMP_H
#define	__SETJMP_H

#if defined(__STACK) && __STACK !=  __STACK_COMPILED
#define __JMPBUF_EXTRA	2
#else
#define __JMPBUF_EXTRA	0
#endif

#if	defined(_PIC18) || defined(__18CXX)
typedef	char jmp_buf[5 + __JMPBUF_EXTRA];
#elif	defined(_PIC14E) || defined(_PIC14EX)
typedef char jmp_buf[4 + __JMPBUF_EXTRA];
#else
#ifndef _LIB_BUILD_
#error	setjmp.h: Processor type not supported, or not defined.
#endif
#endif

#ifdef __STACK
extern __nonreentrant int	setjmp(jmp_buf);
extern __nonreentrant void	longjmp(jmp_buf, int);
#else
extern int	setjmp(jmp_buf);
extern void	longjmp(jmp_buf, int);
#endif

#undef __JMPBUF_EXTRA 

#endif	/* __SETJMP_H */
