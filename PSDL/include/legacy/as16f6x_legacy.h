#ifndef _AS16F6X_LEGACY_H_
#define _AS16F6X_LEGACY_H_

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
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
TMR2                                   equ 0011h
T2CON                                  equ 0012h
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
RCSTA                                  equ 0018h
TXREG                                  equ 0019h
RCREG                                  equ 001Ah
CMCON                                  equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
PR2                                    equ 0092h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
VRCON                                  equ 009Fh
#define IRP                            STATUS, 7
#define RP1                            STATUS, 6
#define RP0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#define RA7                            PORTA, 7
#define RA6                            PORTA, 6
#define RA5                            PORTA, 5
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
#define EEIF                           PIR1, 7
#define CMIF                           PIR1, 6
#define RCIF                           PIR1, 5
#define TXIF                           PIR1, 4
#define CCP1IF                         PIR1, 2
#define TMR2IF                         PIR1, 1
#define TMR1IF                         PIR1, 0
#define T1CKPS1                        T1CON, 5
#define T1CKPS0                        T1CON, 4
#define T1OSCEN                        T1CON, 3
#define T1SYNC                         T1CON, 2
#define TMR1CS                         T1CON, 1
#define TMR1ON                         T1CON, 0
#define TOUTPS3                        T2CON, 6
#define TOUTPS2                        T2CON, 5
#define TOUTPS1                        T2CON, 4
#define TOUTPS0                        T2CON, 3
#define TMR2ON                         T2CON, 2
#define T2CKPS1                        T2CON, 1
#define T2CKPS0                        T2CON, 0
#define CCP1X                          CCP1CON, 5
#define CCP1Y                          CCP1CON, 4
#define CCP1M3                         CCP1CON, 3
#define CCP1M2                         CCP1CON, 2
#define CCP1M1                         CCP1CON, 1
#define CCP1M0                         CCP1CON, 0
#define SPEN                           RCSTA, 7
#define RX9                            RCSTA, 6
#define SREN                           RCSTA, 5
#define CREN                           RCSTA, 4
#define ADEN                           RCSTA, 3
#define FERR                           RCSTA, 2
#define OERR                           RCSTA, 1
#define RX9D                           RCSTA, 0
#define C2OUT                          CMCON, 7
#define C1OUT                          CMCON, 6
#define C2INV                          CMCON, 5
#define C1INV                          CMCON, 4
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
#define TRISA7                         TRISA, 7
#define TRISA6                         TRISA, 6
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
#define EEIE                           PIE1, 7
#define CMIE                           PIE1, 6
#define RCIE                           PIE1, 5
#define TXIE                           PIE1, 4
#define CCP1IE                         PIE1, 2
#define TMR2IE                         PIE1, 1
#define TMR1IE                         PIE1, 0
#define OSCF                           PCON, 3
#define POR                            PCON, 1
#define BOR                            PCON, 0
#define CSRC                           TXSTA, 7
#define TX9                            TXSTA, 6
#define TXEN                           TXSTA, 5
#define SYNC                           TXSTA, 4
#define BRGH                           TXSTA, 2
#define TRMT                           TXSTA, 1
#define TX9D                           TXSTA, 0
#define WRERR                          EECON1, 3
#define WREN                           EECON1, 2
#define WR                             EECON1, 1
#define RD                             EECON1, 0
#define VREN                           VRCON, 7
#define VROE                           VRCON, 6
#define VRR                            VRCON, 5
#define VR3                            VRCON, 3
#define VR2                            VRCON, 2
#define VR1                            VRCON, 1
#define VR0                            VRCON, 0
#ifdef _16F628		
#endif 

#endif
