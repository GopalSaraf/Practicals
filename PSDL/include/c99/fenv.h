#ifndef _FENV_H
#define _FENV_H

#include <musl_xc8.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <bits/fenv.h>

#ifdef MINIMAL_FENV
#define fetestexcept(x)		0
#define feclearexcept(x)	0
#define fegetround(x)		FE_TONEAREST
#define feraiseexcept(x)	0
#define fesetround(x)		0
#else
int feclearexcept(int);
int fegetexceptflag(fexcept_t *, int);
int feraiseexcept(int);
int fesetexceptflag(const fexcept_t *, int);
int fetestexcept(int);

int fegetround(void);
int fesetround(int);

int fegetenv(fenv_t *);
int feholdexcept(fenv_t *);
int fesetenv(const fenv_t *);
int feupdateenv(const fenv_t *);
#endif

#ifdef __cplusplus
}
#endif
#endif

