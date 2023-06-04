#ifndef ___AT_H_
#define ___AT_H_

#ifdef __CLANG__
#define __at(x) __attribute__((address(x)))
#endif

#endif
