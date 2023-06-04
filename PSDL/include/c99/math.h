#ifndef _MATH_H
#define _MATH_H

#include <musl_xc8.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <features.h>

#define __NEED_float_t
#define __NEED_double_t
#include <bits/alltypes.h>

#if 100*__GNUC__+__GNUC_MINOR__ >= 303
#define NAN       __builtin_nanf("")
#define INFINITY  __builtin_inff()
#else
#define NAN		nanf("")
#define INFINITY  1e5000f
#endif

#define HUGE_VALF INFINITY
#define HUGE_VAL  ((double)INFINITY)
#define HUGE_VALL ((long double)INFINITY)

#define MATH_ERRNO  1
#define MATH_ERREXCEPT 2
#define math_errhandling 1

#define FP_ILOGBNAN (-1-(int)(((unsigned)-1)>>1))
#define FP_ILOGB0 FP_ILOGBNAN

#define FP_NAN       0
#define FP_INFINITE  1
#define FP_ZERO      2
#define FP_SUBNORMAL 3
#define FP_NORMAL    4

int __fpclassifyf(float);
#define fpclassify(x)	__fpclassifyf(x)
#define isinf(x)		( fpclassify(x) == FP_INFINITE )
#define isnan(x)		( fpclassify(x) == FP_NAN )
#define isnormal(x)		( fpclassify(x) == FP_NORMAL )
#define isfinite(x)		( fpclassify(x) > FP_INFINITE )


int __signbitf(float);
#define signbit(x)				__signbitf(x)
#define isless(x, y)            (!isnan(x) && !isnan(y) && ((x) < (y)))
#define islessequal(x, y)       (!isnan(x) && !isnan(y) && ((x) <= (y)))
#define islessgreater(x, y)     (!isnan(x) && !isnan(y) && ((x) < (y) || (x) > (y)))
#define isgreater(x, y)         (!isnan(x) && !isnan(y) && ((x) > (y)))
#define isgreaterequal(x, y)    (!isnan(x) && !isnan(y) && ((x) >= (y)))
#define isunordered(x,y) 		(isnan((x)) ? ((void)(y),1) : isnan((y)))

double      acos(double);
float       acosf(float);
long double acosl(long double);
#define		acos(x)		acosf(x)
#define		acosl(x)	acosf(x)

double      acosh(double);
float       acoshf(float);
long double acoshl(long double);
#define		acosh(x)	acoshf(x)
#define		acoshl(x)	acoshf(x)

double      asin(double);
float       asinf(float);
long double asinl(long double);
#define		asin(x)		asinf(x)
#define		asinl(x)	asinf(x)

double      asinh(double);
float       asinhf(float);
long double asinhl(long double);
#define		asinh(x)	asinhf(x)
#define		asinhl(x)	asinhf(x)

double      atan(double);
float       atanf(float);
long double atanl(long double);
#define		atan(x)		atanf(x)
#define		atanl(x)	atanf(x)

double      atan2(double, double);
float       atan2f(float, float);
long double atan2l(long double, long double);
#define		atan2(x,y)	atan2f(x,y)
#define		atan2l(x,y)	atan2f(x,y)

double      atanh(double);
float       atanhf(float);
long double atanhl(long double);
#define		atanh(x)	atanhf(x)
#define		atanhl(x)	atanhf(x)

double      cbrt(double);
float       cbrtf(float);
long double cbrtl(long double);
#define		cbrt(x)		cbrtf(x)
#define		cbrtl(x)	cbrtf(x)

double      ceil(double);
float       ceilf(float);
long double ceill(long double);
#define		ceil(x)		ceilf(x)
#define		ceill(x)	ceilf(x)

double      copysign(double, double);
float       copysignf(float, float);
long double copysignl(long double, long double);
#define		copysign(x,y)	copysignf(x,y)
#define		copysignl(x,y)	copysignf(x,y)

double      cos(double);
float       cosf(float);
long double cosl(long double);
#define		cos(x)		cosf(x)
#define		cosl(x)		cosf(x)

double      cosh(double);
float       coshf(float);
long double coshl(long double);
#define		cosh(x)		coshf(x)
#define		coshl(x)	coshf(x)

double      erf(double);
float       erff(float);
long double erfl(long double);
#define		erf(x)		erff(x)
#define		erfl(x)		erff(x)

double      erfc(double);
float       erfcf(float);
long double erfcl(long double);
#define		erfc(x)		erfcf(x)
#define		erfcl(x)	erfcf(x)

double      exp(double);
float       expf(float);
long double expl(long double);
#define		exp(x)		expf(x)
#define		expl(x)		expf(x)

double      exp2(double);
float       exp2f(float);
long double exp2l(long double);
#define		exp2(x)		exp2f(x)
#define		exp2l(x)	exp2f(x)

double      expm1(double);
float       expm1f(float);
long double expm1l(long double);
#define		expm1(x)	expm1f(x)
#define		expm1l(x)	expm1f(x)

double      fabs(double);
float       fabsf(float);
long double fabsl(long double);
#define		fabs(x)		fabsf(x)
#define		fabsl(x)	fabsf(x)

double      fdim(double, double);
float       fdimf(float, float);
long double fdiml(long double, long double);
#define		fdim(x,y)	fdimf(x,y)
#define		fdiml(x,y)	fdimf(x,y)

double      floor(double);
float       floorf(float);
long double floorl(long double);
#define		floor(x)	floorf(x)
#define		floorl(x)	floorf(x)

double      fma(double, double, double);
float       fmaf(float, float, float);
long double fmal(long double, long double, long double);
#define		fma(x,y,z)	fmaf(x,y,z)
#define		fmal(x,y,z)	fmaf(x,y,z)

double      fmax(double, double);
float       fmaxf(float, float);
long double fmaxl(long double, long double);
#define		fmax(x,y)	fmaxf(x,y)
#define		fmaxl(x,y)	fmaxf(x,y)

double      fmin(double, double);
float       fminf(float, float);
long double fminl(long double, long double);
#define		fmin(x,y)	fminf(x,y)
#define		fminl(x,y)	fminf(x,y)

double      fmod(double, double);
float       fmodf(float, float);
long double fmodl(long double, long double);
#define		fmod(x,y)	fmodf(x,y)
#define		fmodl(x,y)	fmodf(x,y)

double      frexp(double, int *);
float       frexpf(float, int *);
long double frexpl(long double, int *);
#define		frexp(x,y)	frexpf(x,y)
#define		frexpl(x,y)	frexpf(x,y)

double      hypot(double, double);
float       hypotf(float, float);
long double hypotl(long double, long double);
#define		hypot(x,y)	hypotf(x,y)
#define		hypotl(x,y)	hypotf(x,y)

int         ilogb(double);
int         ilogbf(float);
int         ilogbl(long double);
#define		ilogb(x)	ilogbf(x)
#define		ilogbl(x)	ilogbf(x)

double      ldexp(double, int);
float       ldexpf(float, int);
long double ldexpl(long double, int);
#define		ldexp(x,y)	ldexpf(x,y)
#define		ldexpl(x,y)	ldexpf(x,y)

double      lgamma(double);
float       lgammaf(float);
long double lgammal(long double);
#define		lgamma(x)	lgammaf(x)
#define		lgammal(x)	lgammaf(x)

long long   llrint(double);
long long   llrintf(float);
long long   llrintl(long double);
#define		llrint(x)	llrintf(x)
#define		llrintl(x)	llrintf(x)

long long   llround(double);
long long   llroundf(float);
long long   llroundl(long double);
#define		llround(x)	llroundf(x)
#define		llroundl(x)	llroundf(x)

double      log(double);
float       logf(float);
long double logl(long double);
#define		log(x)		logf(x)
#define		logl(x)		logf(x)

double      log10(double);
float       log10f(float);
long double log10l(long double);
#define		log10(x)	log10f(x)
#define		log10l(x)	log10f(x)

double      log1p(double);
float       log1pf(float);
long double log1pl(long double);
#define		log1p(x)	log1pf(x)
#define		log1pl(x)	log1pf(x)

double      log2(double);
float       log2f(float);
long double log2l(long double);
#define		log2(x)		log2f(x)
#define		log2l(x)	log2f(x)

double      logb(double);
float       logbf(float);
long double logbl(long double);
#define		logb(x)		logbf(x)
#define		logbl(x)	logbf(x)

long        lrint(double);
long        lrintf(float);
long        lrintl(long double);
#define		lrint(x)	lrintf(x)
#define		lrintl(x)	lrintf(x)

long        lround(double);
long        lroundf(float);
long        lroundl(long double);
#define		lround(x)	lroundf(x)
#define		lroundl(x)	lroundf(x)

double      modf(double, double *);
float       modff(float, float *);
long double modfl(long double, long double *);
#define		modf(x,y)	modff(x,y)
#define		modfl(x,y)	modff(x,y)

double      nan(const char *);
float       nanf(const char *);
long double nanl(const char *);
#define		nan(x)		nanf(x)
#define		nanl(x)		nanf(x)

double      nearbyint(double);
float       nearbyintf(float);
long double nearbyintl(long double);
#define		nearbyint(x)	nearbyintf(x)
#define		nearbyintl(x)	nearbyintf(x)

double      nextafter(double, double);
float       nextafterf(float, float);
long double nextafterl(long double, long double);
#define		nextafter(x,y)	nextafterf(x,y)
#define		nextafterl(x,y)	nextafterf(x,y)

double      nexttoward(double, long double);
float       nexttowardf(float, long double);
long double nexttowardl(long double, long double);
#define		nexttoward(x,y)		nexttowardf(x,y)
#define		nexttowardl(x,y)	nexttowardf(x,y)

#ifdef _MPC_
#define _POWF_QUAL	__nonreentrant
#else
#define _POWF_QUAL
#endif

double      pow(double, double);
_POWF_QUAL	float powf(float, float);
long double powl(long double, long double);
#define		pow(x,y)	powf(x,y)
#define		powl(x,y)	powf(x,y)

double      remainder(double, double);
float       remainderf(float, float);
long double remainderl(long double, long double);
#define		remainder(x,y)	remainderf(x,y)
#define		remainderl(x,y)	remainderf(x,y)

double      remquo(double, double, int *);
float       remquof(float, float, int *);
long double remquol(long double, long double, int *);
#define		remquo(x,y,z)	remquof(x,y,z)
#define		remquol(x,y,z)	remquof(x,y,z)

double      rint(double);
float       rintf(float);
long double rintl(long double);
#define		rint(x)		rintf(x)
#define		rintl(x)	rintf(x)

double      round(double);
float       roundf(float);
long double roundl(long double);
#define		round(x)	roundf(x)
#define		roundl(x)	roundf(x)

double      scalbln(double, long);
float       scalblnf(float, long);
long double scalblnl(long double, long);
#define		scalbin(x,y)	scalbinf(x,y)
#define		scalbinl(x,y)	scalbinf(x,y)

double      scalbn(double, int);
float       scalbnf(float, int);
long double scalbnl(long double, int);
#define		scalbn(x,y)		scalbnf(x,y)
#define		scalbnl(x,y)	scalbnf(x,y)

double      sin(double);
float       sinf(float);
long double sinl(long double);
#define		sin(x)		sinf(x)
#define		sinl(x)		sinf(x)

double      sinh(double);
float       sinhf(float);
long double sinhl(long double);
#define		sinh(x)		sinhf(x)
#define		sinhl(x)	sinhf(x)

double      sqrt(double);
float       sqrtf(float);
long double sqrtl(long double);
#define		sqrt(x)		sqrtf(x)
#define		sqrtl(x)	sqrtf(x)

double      tan(double);
float       tanf(float);
long double tanl(long double);
#define		tan(x)		tanf(x)
#define		tanl(x)		tanf(x)

double      tanh(double);
float       tanhf(float);
long double tanhl(long double);
#define		tanh(x)		tanhf(x)
#define		tanhl(x)	tanhf(x)

double      tgamma(double);
float       tgammaf(float);
long double tgammal(long double);
#define		tgamma(x)	tgammaf(x)
#define		tgammal(x)	tgammaf(x)

double      trunc(double);
float       truncf(float);
long double truncl(long double);
#define		trunc(x)	truncf(x)
#define		truncl(x)	truncf(x)


#if defined(_XOPEN_SOURCE) || defined(_BSD_SOURCE)
#undef  MAXFLOAT
#define MAXFLOAT        3.40282346638528859812e+38F
#endif

#if defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define M_E             2.7182818284590452354   /* e */
#define M_LOG2E         1.4426950408889634074   /* log_2 e */
#define M_LOG10E        0.43429448190325182765  /* log_10 e */
#define M_LN2           0.69314718055994530942  /* log_e 2 */
#define M_LN10          2.30258509299404568402  /* log_e 10 */
#define M_PI            3.14159265358979323846  /* pi */
#define M_PI_2          1.57079632679489661923  /* pi/2 */
#define M_PI_4          0.78539816339744830962  /* pi/4 */
#define M_1_PI          0.31830988618379067154  /* 1/pi */
#define M_2_PI          0.63661977236758134308  /* 2/pi */
#define M_2_SQRTPI      1.12837916709551257390  /* 2/sqrt(pi) */
#define M_SQRT2         1.41421356237309504880  /* sqrt(2) */
#define M_SQRT1_2       0.70710678118654752440  /* 1/sqrt(2) */

extern int signgam;

double      j0(double);
double      j1(double);
double      jn(int, double);

double      y0(double);
double      y1(double);
double      yn(int, double);
#endif

#if defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define HUGE            3.40282346638528859812e+38F

double      drem(double, double);
float       dremf(float, float);

double      scalb(double, double);
float       scalbf(float, float);

double      significand(double);
float       significandf(float);

double      lgamma_r(double, int*);
float       lgammaf_r(float, int*);

float       j0f(float);
float       j1f(float);
float       jnf(int, float);

float       y0f(float);
float       y1f(float);
float       ynf(int, float);
#endif

#ifdef _GNU_SOURCE
long double lgammal_r(long double, int*);

void        sincos(double, double*, double*);
void        sincosf(float, float*, float*);
void        sincosl(long double, long double*, long double*);

double      exp10(double);
float       exp10f(float);
long double exp10l(long double);

double      pow10(double);
float       pow10f(float);
long double pow10l(long double);
#endif

#ifdef __cplusplus
}
#endif

#endif
