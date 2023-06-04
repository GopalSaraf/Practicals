#ifndef _CAS16505_H_
#define _CAS16505_H_

INDF                                   equ 0000h
RTCC                                   equ 0001h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#define RBWUF_bit                      STATUS, 7
#define PA0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#ifdef _16C505
#define CAL5_bit                       OSCCAL, 7
#define CAL4_bit                       OSCCAL, 6
#define CAL3_bit                       OSCCAL, 5
#define CAL2_bit                       OSCCAL, 4
#define CAL1_bit                       OSCCAL, 3
#define CAL0_bit                       OSCCAL, 2
#define CAL6_bit                       OSCCAL, 7
#endif
#define RB5_bit                        PORTB, 5
#define RB4_bit                        PORTB, 4
#define RB3_bit                        PORTB, 3
#define RB2_bit                        PORTB, 2
#define RB1_bit                        PORTB, 1
#define RB0_bit                        PORTB, 0
#define RC5_bit                        PORTC, 5
#define RC4_bit                        PORTC, 4
#define RC3_bit                        PORTC, 3
#define RC2_bit                        PORTC, 2
#define RC1_bit                        PORTC, 1
#define RC0_bit                        PORTC, 0

#endif
