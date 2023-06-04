#ifndef _XC_H_
#define _XC_H_

#ifdef __XC8

/* Definitions for license modes */
#define __LITE__ 0
#define __STD__ 1
#define __PRO__ 2

/* common definitions */

#define	___mkstr1(x)	#x
#define	___mkstr(x)	___mkstr1(x)

#define _OMNITARGET	((void *)0xFFFFFFFF)

extern const char __xc8_OPTIM_SPEED;

extern double __fpnormalize(double);

#include <language_support.h>
#include <xc8debug.h>
#include <builtins.h>

/* HI-TECH PICC / PICC-Lite compiler */
#if	defined(__PICC__) || defined(__PICCLITE__)
#include <pic.h>
#endif

/* HI-TECH PICC-18 compiler */
#if	defined(__PICC18__)
#include <pic18.h>
#endif

/* MPLAB C18 Compatibility Header */
#ifdef __18CXX
#include <pic18.h>
#endif

#endif		//__XC8
#endif		//_XC_H

