#ifndef _AS1662X_LEGACY_H_
#define _AS1662X_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
CMCON                                  equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
VRCON                                  equ 009Fh
#if defined(_16CE623) || defined(_16CE624) || defined(_16CE625)
EEINTF                                 equ 0090h
#endif
#define RP0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#define RA4                            PORTA, 4
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
#define GIE                            INTCON, 7
#define PEIE                           INTCON, 6
#define T0IE                           INTCON, 5
#define INTE                           INTCON, 4
#define RBIE                           INTCON, 3
#define T0IF                           INTCON, 2
#define INTF                           INTCON, 1
#define RBIF                           INTCON, 0
#define CMIF                           PIR1, 6
#define C2OUT                          CMCON, 7
#define C1OUT                          CMCON, 6
#define CIS                            CMCON, 3
#define CM2                            CMCON, 2
#define CM1                            CMCON, 1
#define CM0                            CMCON, 0
#define RBPU                           OPTION, 7
#define INTEDG                         OPTION, 6
#define T0CS                           OPTION, 5
#define T0SE                           OPTION, 4
#define PSA                            OPTION, 3
#define PS2                            OPTION, 2
#define PS1                            OPTION, 1
#define PS0                            OPTION, 0
#define TRISA4                         TRISA, 4
#define TRISA3                         TRISA, 3
#define TRISA2                         TRISA, 2
#define TRISA1                         TRISA, 1
#define TRISA0                         TRISA, 0
#define TRISB7                         TRISB, 7
#define TRISB6                         TRISB, 6
#define TRISB5                         TRISB, 5
#define TRISB4                         TRISB, 4
#define TRISB3                         TRISB, 3
#define TRISB2                         TRISB, 2
#define TRISB1                         TRISB, 1
#define TRISB0                         TRISB, 0
#define CMIE                           PIE1, 6
#define POR                            PCON, 1
#define BOR                            PCON, 0
#if defined(_16CE623) || defined(_16CE624) || defined(_16CE625)
#define EESCL                          EEINTF, 2
#define EESDA                          EEINTF, 1
#define EEVDD                          EEINTF, 0
#endif
#define VREN                           VRCON, 7
#define VROE                           VRCON, 6
#define VRR                            VRCON, 5
#define VR3                            VRCON, 3
#define VR2                            VRCON, 2
#define VR1                            VRCON, 1
#define VR0                            VRCON, 0

#endif
