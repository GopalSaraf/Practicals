#ifndef _LANGUAGE_SUPPORT_H_
#define _LANGUAGE_SUPPORT_H_

#ifdef __CLANG__

#define __at(x) __attribute__((address(x)))
#define __macroexpand(...) (#__VA_ARGS__)
#define __interrupt(...) __attribute__((picinterrupt(__macroexpand(__VA_ARGS__))))
#define __section(name) __attribute__((section(name)))
#define __nonreentrant __attribute__((nonreentrant))
#define __reentrant __attribute__((reentrant))
#define __compiled __attribute__((nonreentrant))
#define __software __attribute__((reentrant))
#define inline __attribute__((inline))
#define __minocg __attribute__((minocg))
#define __fastcall __attribute__((fastcall))
#define asm(arg)	__asm(arg)

#else

#if defined(__CCI__) && !defined(_LEGACY_HEADERS)
#define __at(x) __attribute__((address(x)))
#endif

#endif	

#define __bank(arg)	__bank##arg

#ifndef __CLANG__
#define __asm(arg)	asm(arg)
#endif
#define	__deprecate	__attribute__((deprecated))
#define __cp0(arg)	__attribute__((unsupported("the __cp0() construct is not supported by this architecture")))
#ifndef __CLANG__
#define __cp0()		__attribute__((unsupported("the __cp0() construct is not supported by this architecture")))
#endif
#define __abi(arg)	__attribute__((unsupported("the __abi() construct is not supported by this architecture")))
#ifndef __CLANG__
#define __abi()		__attribute__((unsupported("the __abi() construct is not supported by this architecture")))
#endif
#define __align(arg)	__attribute__((unsupported("the __align() attribute is not used by this compiler")))
#ifndef __CLANG__
#define __align()	__attribute__((unsupported("the __align() attribute is not used by this compiler")))
#endif
#define	__xdata		__attribute__((unsupported("__xdata is not defined on this architecture")))
#define	__ydata		__attribute__((unsupported("__ydata in not defined on this architecture")))

#define __invariant	__attribute__((unsupported("invariant mode optimizations are no longer available; specifier will be ignored")))
#define __stable	__attribute__((unsupported("stable mode optimizations are no longer available; specifier will be ignored")))

// set _HTC_EDITION_ and _XC8_MODE_ macros for backwards compatibility
#if     (!defined(_HTC_EDITION_) || !defined(_XC8_MODE_)) && defined(__OPTIM_LEVEL)
#undef _HTC_EDITION_
#undef _XC8_MODE_
#if     __OPTIM_LEVEL < 2
#define _HTC_EDITION_   0
#define _XC8_MODE_      0
#elif   __OPTIM_LEVEL > 2
#define _HTC_EDITION_   2
#define _XC8_MODE_      2
#else
#define _HTC_EDITION_   1
#define _XC8_MODE_      1
#endif
#endif

#endif	//_LANGUAGE_SUPPORT_H_

