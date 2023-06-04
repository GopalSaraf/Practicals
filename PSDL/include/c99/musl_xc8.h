#ifndef _MUSL_XC8_H
#define _MUSL_XC8_H

#ifndef __CCI__
#define __NEED_int24_t
#define __NEED_uint24_t
#endif

#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif
#ifndef SMALLARG
#define SMALLARG
#endif
#ifndef NOCOMPLEX
#define NOCOMPLEX
#endif

#ifdef _MPC_
#define __simple_malloc		malloc
#define __simple_calloc		calloc
#define __simple_realloc	realloc
#define __simple_free		free

#undef weak_alias
#define	weak_alias(old, new)
#endif // _MPC_

#endif
