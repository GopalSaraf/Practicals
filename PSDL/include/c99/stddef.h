#ifndef _STDDEF_H
#define _STDDEF_H

#include <musl_xc8.h>

#ifdef __cplusplus
#define NULL 0L
#else
#define NULL ((void*)0)
#endif

#define __NEED_ptrdiff_t
#define __NEED_size_t
#define __NEED_wchar_t
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#define __NEED_max_align_t
#endif

#include <bits/alltypes.h>

/* find the offset of a structure member without using a NULL pointer */
#define	offsetof(type, member) ((size_t)(((char*)&((type *)1)->member)-1))

#endif
