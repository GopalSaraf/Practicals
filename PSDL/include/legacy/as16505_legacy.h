#ifndef _AS16505_LEGACY_H_
#define _AS16505_LEGACY_H_

INDF                                   equ 0000h
RTCC                                   equ 0001h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#define RBWUF                          STATUS, 7
#define PA0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#ifdef _16C505
#define CAL5                           OSCCAL, 7
#define CAL4                           OSCCAL, 6
#define CAL3                           OSCCAL, 5
#define CAL2                           OSCCAL, 4
#define CAL1                           OSCCAL, 3
#define CAL0                           OSCCAL, 2
#define CAL6                           OSCCAL, 7
#endif
#define RB5                            PORTB, 5
#define RB4                            PORTB, 4
#define RB3                            PORTB, 3
#define RB2                            PORTB, 2
#define RB1                            PORTB, 1
#define RB0                            PORTB, 0
#define RC5                            PORTC, 5
#define RC4                            PORTC, 4
#define RC3                            PORTC, 3
#define RC2                            PORTC, 2
#define RC1                            PORTC, 1
#define RC0                            PORTC, 0

#endif
