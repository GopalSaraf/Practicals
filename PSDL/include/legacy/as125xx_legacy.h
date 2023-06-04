#ifndef _AS125XX_LEGACY_H_
#define _AS125XX_LEGACY_H_

INDF                                   equ 0000h
RTCC                                   equ 0001h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
GPIO                                   equ 0006h
#define GPWUF                          STATUS, 7
#define PA0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#if defined(_12C508) || defined(_12C509)
#define CAL3                           OSCCAL, 7
#define CAL2                           OSCCAL, 6
#define CAL1                           OSCCAL, 5
#define CAL0                           OSCCAL, 4
#elif	defined(_12C508A) || defined(_12C509A) ||\
	defined(_12CE518) || defined(_12CE519) ||\
	defined(_12C509AG) || defined(_12C509AF) ||\
	defined(_12CR509A)
#define CAL5                           OSCCAL, 7
#define CAL4                           OSCCAL, 6
#elif defined(_12F508) || defined(_12F509)
#define CAL6                           OSCCAL, 7
#endif
#if defined(_12CE518) || defined(_12CE519)
#define SCL                            GPIO, 7
#define SDA                            GPIO, 6
#endif
#define GP5                            GPIO, 5
#define GP4                            GPIO, 4
#define GP3                            GPIO, 3
#define GP2                            GPIO, 2
#define GP1                            GPIO, 1
#define GP0                            GPIO, 0

#endif
