#ifndef _AS16F506_LEGACY_H_
#define _AS16F506_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
CM1CON0                                equ 0008h
ADCON0                                 equ 0009h
ADRES                                  equ 000Ah
CM2CON0                                equ 000Bh
VRCON                                  equ 000Ch
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define PD                             STATUS, 3
#define TO                             STATUS, 4
#define PA0                            STATUS, 5
#define CWUF                           STATUS, 6
#define RBWUF                          STATUS, 7
#define CAL0                           OSCCAL, 1
#define CAL1                           OSCCAL, 2
#define CAL2                           OSCCAL, 3
#define CAL3                           OSCCAL, 4
#define CAL4                           OSCCAL, 5
#define CAL5                           OSCCAL, 6
#define CAL6                           OSCCAL, 7
#define RB0                            PORTB, 0
#define RB1                            PORTB, 1
#define RB2                            PORTB, 2
#define RB3                            PORTB, 3
#define RB4                            PORTB, 4
#define RB5                            PORTB, 5
#define RC0                            PORTC, 0
#define RC1                            PORTC, 1
#define RC2                            PORTC, 2
#define RC3                            PORTC, 3
#define RC4                            PORTC, 4
#define RC5                            PORTC, 5
#define C1WU                           CM1CON0, 0
#define C1PREF                         CM1CON0, 1
#define C1NREF                         CM1CON0, 2
#define C1ON                           CM1CON0, 3
#define C1T0CS                         CM1CON0, 4
#define C1POL                          CM1CON0, 5
#define C1OUTEN                        CM1CON0, 6
#define C1OUT                          CM1CON0, 7
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define ADCS0                          ADCON0, 4
#define ADCS1                          ADCON0, 5
#define ANS0                           ADCON0, 6
#define ANS1                           ADCON0, 7
#define C2WU                           CM2CON0, 0
#define C2PREF1                        CM2CON0, 1
#define C2NREF                         CM2CON0, 2
#define C2ON                           CM2CON0, 3
#define C2PREF2                        CM2CON0, 4
#define C2POL                          CM2CON0, 5
#define C2OUTEN                        CM2CON0, 6
#define C2OUT                          CM2CON0, 7
#define VR0                            VRCON, 0
#define VR1                            VRCON, 1
#define VR2                            VRCON, 2
#define VR3                            VRCON, 3
#define VRR                            VRCON, 5
#define VROE                           VRCON, 6
#define VREN                           VRCON, 7

#endif
