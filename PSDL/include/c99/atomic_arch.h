#ifndef _ATOMIC_ARCH_H
#define _ATOMIC_ARCH_H

#define a_cas __a_cas
__inline int __a_cas(volatile int *p, int t, int s);

#define a_swap __a_swap
__inline int __a_swap(volatile int *p, int v);

#define a_fetch_add __a_fetch_add
__inline int __a_fetch_add(volatile int *p, int v);

#define a_and __a_and
__inline void __a_and(volatile int *p, int v);

#define a_or __a_or
__inline void __a_or(volatile int *p, int v);

#define a_inc __a_inc
__inline void __a_inc(volatile int *p);

#define a_dec __a_dec
__inline void __a_dec(volatile int *p);

#define a_store __a_store
__inline void __a_store(volatile int *p, int x);

#define a_barrier()	(void)0 

#define a_spin()	(void)0

#define a_crash()	(void)0

#define a_ctz_64 a_ctz_64

#define a_cas_p a_cas_p

#define a_fetch_and a_fetch_and

#define a_fetch_or a_fetch_or

#define a_and_64 a_and_64

#define a_or_64 a_or_64

#define a_or_l a_or_l

#define a_clz_64 a_clz_64

#define a_ctz_l __a_ctz_l
__inline int __a_ctz_l(unsigned long x);

#endif
