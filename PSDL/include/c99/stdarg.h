/* Macros for accessing variable argument lists */
#ifndef	_STDARG
#define _STDARG

#include <musl_xc8.h>

#define __NEED_va_list
#include <bits/alltypes.h>

#pragma intrinsic(__va_start)
#pragma intrinsic(__va_arg)

extern void * __va_start(void);
extern void * __va_arg(void *, ...);

#define va_start(ap, parmn) *ap = __va_start()
#define va_arg(ap, type) (*(type *)__va_arg(*(type **)ap, (type)0))
#define va_copy(dst, src) do { dst[0] = src[0]; } while (0)
#define va_end(ap)	((void)0)

#endif	/* _STDARG */
