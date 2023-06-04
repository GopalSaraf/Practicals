#ifndef _CAS125XX_H_
#define _CAS125XX_H_

INDF                                   equ 0000h
RTCC                                   equ 0001h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
GPIO                                   equ 0006h
#define GPWUF_bit                      STATUS, 7
#define PA0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#if defined(_12C508) || defined(_12C509)
#define CAL3_bit                       OSCCAL, 7
#define CAL2_bit                       OSCCAL, 6
#define CAL1_bit                       OSCCAL, 5
#define CAL0_bit                       OSCCAL, 4
#elif	defined(_12C508A) || defined(_12C509A) ||\
	defined(_12CE518) || defined(_12CE519) ||\
	defined(_12C509AG) || defined(_12C509AF) ||\
	defined(_12CR509A)
#define CAL5_bit                       OSCCAL, 7
#define CAL4_bit                       OSCCAL, 6
#elif defined(_12F508) || defined(_12F509)
#define CAL6_bit                       OSCCAL, 7
#endif
#if defined(_12CE518) || defined(_12CE519)
#define SCL_bit                        GPIO, 7
#define SDA_bit                        GPIO, 6
#endif
#define GP5_bit                        GPIO, 5
#define GP4_bit                        GPIO, 4
#define GP3_bit                        GPIO, 3
#define GP2_bit                        GPIO, 2
#define GP1_bit                        GPIO, 1
#define GP0_bit                        GPIO, 0

#endif
