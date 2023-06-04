/*
 * Copyright 2010 Microchip Technology Inc, all rights reserved
 *
 * This file defines the standard boolean types per ISO/IEC 9899:1999
 *
 */


#ifndef __bool_true_and_false_are_defined
#define __bool_true_false_are_defined 1

#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#define bool _Bool
#else // STD < C99
typedef unsigned char bool;
#endif

#define true 1
#define false 0
#endif
