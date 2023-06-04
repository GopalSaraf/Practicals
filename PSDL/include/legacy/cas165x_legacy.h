#ifndef _CAS165X_H_
#define _CAS165X_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
RTCC                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
#ifdef _16HV540
#endif
#define PA1_bit                        STATUS, 6
#define PA0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#ifdef _16HV540
#endif
#define RA3_bit                        PORTA, 3
#define RA2_bit                        PORTA, 2
#define RA1_bit                        PORTA, 1
#define RA0_bit                        PORTA, 0
#define RB7_bit                        PORTB, 7
#define RB6_bit                        PORTB, 6
#define RB5_bit                        PORTB, 5
#define RB4_bit                        PORTB, 4
#define RB3_bit                        PORTB, 3
#define RB2_bit                        PORTB, 2
#define RB1_bit                        PORTB, 1
#define RB0_bit                        PORTB, 0
#if defined(_16C55) 	|| defined(_16C55A)	|| defined(_16C57) 	||\
    defined(_16C57C)	|| defined(_16CR57B)	|| defined(_16CR57C)
PORTC                                  equ 0007h
#define RC7_bit                        PORTC, 7
#define RC6_bit                        PORTC, 6
#define RC5_bit                        PORTC, 5
#define RC4_bit                        PORTC, 4
#define RC3_bit                        PORTC, 3
#define RC2_bit                        PORTC, 2
#define RC1_bit                        PORTC, 1
#define RC0_bit                        PORTC, 0
#endif
#if defined(_16C52) || defined(_16C54) || defined(_16C54A) 	||\
    defined(_16C55) || defined(_16C56) || defined(_16C57)	||\
    defined(_16C58A)
#endif

#endif
