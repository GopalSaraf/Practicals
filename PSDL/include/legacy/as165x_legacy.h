#ifndef _AS165X_LEGACY_H_
#define _AS165X_LEGACY_H_

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
#define PA1                            STATUS, 6
#define PA0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#ifdef _16HV540
#endif
#define RA3                            PORTA, 3
#define RA2                            PORTA, 2
#define RA1                            PORTA, 1
#define RA0                            PORTA, 0
#define RB7                            PORTB, 7
#define RB6                            PORTB, 6
#define RB5                            PORTB, 5
#define RB4                            PORTB, 4
#define RB3                            PORTB, 3
#define RB2                            PORTB, 2
#define RB1                            PORTB, 1
#define RB0                            PORTB, 0
#if defined(_16C55) 	|| defined(_16C55A)	|| defined(_16C57) 	||\
    defined(_16C57C)	|| defined(_16CR57B)	|| defined(_16CR57C)
PORTC                                  equ 0007h
#define RC7                            PORTC, 7
#define RC6                            PORTC, 6
#define RC5                            PORTC, 5
#define RC4                            PORTC, 4
#define RC3                            PORTC, 3
#define RC2                            PORTC, 2
#define RC1                            PORTC, 1
#define RC0                            PORTC, 0
#endif
#if defined(_16C52) || defined(_16C54) || defined(_16C54A) 	||\
    defined(_16C55) || defined(_16C56) || defined(_16C57)	||\
    defined(_16C58A)
#endif

#endif
