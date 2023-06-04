#ifndef _CASMCV28A_H_
#define _CASMCV28A_H_

TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
#if defined(_MCV28A)
PORTC                                  equ 0007h
#endif
#if defined(_MCV28A)
#endif
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define PA0_bit                        STATUS, 5
#define PA1_bit                        STATUS, 6
#define RA0_bit                        PORTA, 0
#define RA1_bit                        PORTA, 1
#define RA2_bit                        PORTA, 2
#define RA3_bit                        PORTA, 3
#define RB0_bit                        PORTB, 0
#define RB1_bit                        PORTB, 1
#define RB2_bit                        PORTB, 2
#define RB3_bit                        PORTB, 3
#define RB4_bit                        PORTB, 4
#define RB5_bit                        PORTB, 5
#define RB6_bit                        PORTB, 6
#define RB7_bit                        PORTB, 7
#if defined(_MCV28A)
#define RC0_bit                        PORTC, 0
#define RC1_bit                        PORTC, 1
#define RC2_bit                        PORTC, 2
#define RC3_bit                        PORTC, 3
#define RC4_bit                        PORTC, 4
#define RC5_bit                        PORTC, 5
#define RC6_bit                        PORTC, 6
#define RC7_bit                        PORTC, 7
#endif

#endif
