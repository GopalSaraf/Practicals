#ifndef _AS1643X_LEGACY_H_
#define _AS1643X_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
#if	defined(_16C432)
PORTA                                  equ 0005h
PORTB                                  equ 0006h
#endif
#if 	defined(_16C433)
GPIO                                   equ 0005h
#endif
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
#if	defined(_16C433)
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
#endif
#if	defined(_16C432)
CMCON                                  equ 001Fh
#endif
OPTION_REG                             equ 0081h
#if 	defined(_16C432)
TRISA                                  equ 0085h
TRISB                                  equ 0086h
#endif
#if	defined(_16C433)
TRIS_REG                               equ 0085h
#endif
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
#if	defined(_16C433)
OSCCAL                                 equ 008Fh
ADCON1                                 equ 009Fh
#endif
#if	defined(_16C432)
LININTF                                equ 0090h
VRCON                                  equ 009Fh
#endif
#define TMR07                          TMR0, 7
#define TMR06                          TMR0, 6
#define TMR05                          TMR0, 5
#define TMR04                          TMR0, 4
#define TMR03                          TMR0, 3
#define TMR02                          TMR0, 2
#define TMR01                          TMR0, 1
#define TMR00                          TMR0, 0
#define PCL7                           PCL, 7
#define PCL6                           PCL, 6
#define PCL5                           PCL, 5
#define PCL4                           PCL, 4
#define PCL3                           PCL, 3
#define PCL2                           PCL, 2
#define PCL1                           PCL, 1
#define PCL0                           PCL, 0
#define IRP                            STATUS, 7
#define RP1                            STATUS, 6
#define RP0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#if	defined(_16C432)
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
#endif
#if	defined(_16C433)
#define LINTX                          GPIO, 7
#define LINRX                          GPIO, 6
#define GP5                            GPIO, 5
#define GP4                            GPIO, 4
#define GP3                            GPIO, 3
#define GP2                            GPIO, 2
#define GP1                            GPIO, 1
#define GP0                            GPIO, 0
#endif
#define GIE                            INTCON, 7
#define PEIE                           INTCON, 6
#define T0IE                           INTCON, 5
#define INTE                           INTCON, 4
#define RBIE                           INTCON, 3
#define T0IF                           INTCON, 2
#define INTF                           INTCON, 1
#define RBIF                           INTCON, 0
#if 	defined(_16C432)
#define CMIF                           PIR1, 6
#endif
#if	defined(_16C433)
#define ADIF                           PIR1, 6
#endif
#if	defined(_16C433)
#define ADRES7                         ADRES, 7
#define ADRES6                         ADRES, 6
#define ADRES5                         ADRES, 5
#define ADRES4                         ADRES, 4
#define ADRES3                         ADRES, 3
#define ADRES2                         ADRES, 2
#define ADRES1                         ADRES, 1
#define ADRES0                         ADRES, 0
#define ADCS1                          ADCON0, 7
#define ADCS0                          ADCON0, 6
#define CHS1                           ADCON0, 4
#define CHS0                           ADCON0, 3
#define GO_DONE                        ADCON0, 2
#define ADON                           ADCON0, 0
#endif
#if	defined(_16C432)
#define C2OUT                          CMCON, 7
#define C1OUT                          CMCON, 6
#define CIS                            CMCON, 3
#define CM2                            CMCON, 2
#define CM1                            CMCON, 1
#define CM0                            CMCON, 0
#endif
#if	defined(_16C432)
#define RBPU                           OPTION, 7
#endif
#if	defined(_16C433)
#define GPPU                           OPTION, 7
#endif
#define INTEDG                         OPTION, 6
#define T0CS                           OPTION, 5
#define T0SE                           OPTION, 4
#define PSA                            OPTION, 3
#define PS2                            OPTION, 2
#define PS1                            OPTION, 1
#define PS0                            OPTION, 0
#if	defined(_16C432)
#define TRISA4                         TRISA, 4
#define TRISA3                         TRISA, 3
#define TRISA2                         TRISA, 2
#define TLINRX                         TRISA, 1
#define TRISA0                         TRISA, 0
#define TRISB7                         TRISB, 4
#define TRISB6                         TRISB, 4
#define TRISB5                         TRISB, 4
#define TRISB4                         TRISB, 4
#define TRISB3                         TRISB, 4
#define TRISB2                         TRISB, 4
#define TRISB1                         TRISB, 4
#define TRISB0                         TRISB, 4
#endif
#if	defined(_16C433)
#define TRIS5                          TRIS, 5
#define TRIS4                          TRIS, 4
#define TRIS3                          TRIS, 3
#define TRIS2                          TRIS, 2
#define TRIS1                          TRIS, 1
#define TRIS0                          TRIS, 0
#endif
#if	defined(_16C432)
#define CMIE                           PIE1, 6
#endif
#if	defined(_16C433)
#define ADIE                           PIE1, 6
#endif
#define POR                            PCON, 1
#if	defined(_16C432)
#define BOD                            PCON, 0
#endif
#if	defined(_16C432)
#define LINV                           LININTF, 0
#define VREN                           VRCON, 7
#define VROE                           VRCON, 6
#define VRR                            VRCON, 5
#define VR3                            VRCON, 3
#define VR2                            VRCON, 2
#define VR1                            VRCON, 1
#define VR0                            VRCON, 0
#endif
#if 	defined(_16C433)
#define CAL3                           OSCCAL, 7
#define CAL2                           OSCCAL, 6
#define CAL1                           OSCCAL, 5
#define CAL0                           OSCCAL, 4
#define CALFST                         OSCCAL, 3
#define CALSLW                         OSCCAL, 2
#define PCFG2                          ADCON1, 2
#define PCFG1                          ADCON1, 1
#define PCFG0                          ADCON1, 0
#endif
#if	defined(_16C432)
#endif
#if 	defined(_16C433)
#endif
#if	defined(_16C433)
#endif
#if	defined(_16C432)
#endif
#if	defined(_16C432)
#endif
#if	defined(_16C433)
#endif

#endif
