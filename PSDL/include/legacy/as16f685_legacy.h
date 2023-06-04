#ifndef _AS16F685_LEGACY_H_
#define _AS16F685_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
PIR2                                   equ 000Dh
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
#if defined(_16F685) || defined(_16F690)
TMR2                                   equ 0011h
T2CON                                  equ 0012h
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
SSPBUF                                 equ 0013h
SSPCON                                 equ 0014h
#endif
#if defined(_16F685) || defined(_16F690)
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
RCSTA                                  equ 0018h
TXREG                                  equ 0019h
RCREG                                  equ 001Ah
#endif
#if defined(_16F685) || defined(_16F690)
PWM1CON                                equ 001Ch
ECCPAS                                 equ 001Dh
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
#endif
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
#if defined(_16F685) || defined(_16F690)
PR2                                    equ 0092h
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
SSPADD                                 equ 0093h
SSPMSK                                 equ 0093h
SSPSTAT                                equ 0094h
#endif
WPUA                                   equ 0095h
IOCA                                   equ 0096h
WDTCON                                 equ 0097h
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
SPBRGH                                 equ 009Ah
BAUDCTL                                equ 009Bh
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
#endif
EEDAT                                  equ 010Ch
EEDATA                                 equ 010Ch
EEDATL                                 equ 010Ch
EEADR                                  equ 010Dh
EEADRL                                 equ 010Dh
#if defined(_16F685) || defined(_16F689) || defined(_16F690)
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
#endif
WPUB                                   equ 0115h
IOCB                                   equ 0116h
VRCON                                  equ 0118h
CM1CON0                                equ 0119h
CM2CON0                                equ 011Ah
CM2CON1                                equ 011Bh
ANSEL                                  equ 011Eh
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
ANSELH                                 equ 011Fh
#endif
EECON1                                 equ 018Ch
EECON2                                 equ 018Dh
#if defined(_16F685) || defined(_16F690)
PSTRCON                                equ 019Dh
#endif
SRCON                                  equ 019Eh
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define PD                             STATUS, 3
#define TO                             STATUS, 4
#define RP0                            STATUS, 5
#define RP1                            STATUS, 6
#define IRP                            STATUS, 7
#define RA0                            PORTA, 0
#define RA1                            PORTA, 1
#define RA2                            PORTA, 2
#define RA3                            PORTA, 3
#define RA4                            PORTA, 4
#define RA5                            PORTA, 5
#define RB4                            PORTB, 4
#define RB5                            PORTB, 5
#define RB6                            PORTB, 6
#define RB7                            PORTB, 7
#define RC0                            PORTC, 0
#define RC1                            PORTC, 1
#define RC2                            PORTC, 2
#define RC3                            PORTC, 3
#define RC4                            PORTC, 4
#define RC5                            PORTC, 5
#define RC6                            PORTC, 6
#define RC7                            PORTC, 7
#define RABIF                          INTCON, 0
#define RBIF                           INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define RABIE                          INTCON, 3
#define RBIE                           INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#if defined(_16F685) || defined(_16F690)
#define TMR2IF                         PIR1, 1
#define CCP1IF                         PIR1, 2
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define SSPIF                          PIR1, 3
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
#define TXIF                           PIR1, 4
#define RCIF                           PIR1, 5
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define ADIF                           PIR1, 6
#endif
#define EEIF                           PIR2, 4
#define C1IF                           PIR2, 5
#define C2IF                           PIR2, 6
#define OSFIF                          PIR2, 7
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define TMR1GE                         T1CON, 6
#define T1GINV                         T1CON, 7
#if defined(_16F685) || defined(_16F690)
#define T2CKPS0                        T2CON, 0
#define T2CKPS1                        T2CON, 1
#define TMR2ON                         T2CON, 2
#define TOUTPS0                        T2CON, 3
#define TOUTPS1                        T2CON, 4
#define TOUTPS2                        T2CON, 5
#define TOUTPS3                        T2CON, 6
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define SSPM0                          SSPCON, 0
#define SSPM1                          SSPCON, 1
#define SSPM2                          SSPCON, 2
#define SSPM3                          SSPCON, 3
#define CKP                            SSPCON, 4
#define SSPEN                          SSPCON, 5
#define SSPOV                          SSPCON, 6
#define WCOL                           SSPCON, 7
#endif
#if defined(_16F685) || defined(_16F690)
#define CCP1M0                         CCP1CON, 0
#define CCP1M1                         CCP1CON, 1
#define CCP1M2                         CCP1CON, 2
#define CCP1M3                         CCP1CON, 3
#define DC1B0                          CCP1CON, 4
#define DC1B1                          CCP1CON, 5
#define P1M0                           CCP1CON, 6
#define P1M1                           CCP1CON, 7
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
#define RX9D                           RCSTA, 0
#define OERR                           RCSTA, 1
#define FERR                           RCSTA, 2
#define ADDEN                          RCSTA, 3
#define CREN                           RCSTA, 4
#define SREN                           RCSTA, 5
#define RX9                            RCSTA, 6
#define SPEN                           RCSTA, 7
#endif
#if defined(_16F685) || defined(_16F690)
#define PDC0                           PWM1CON, 0
#define PDC1                           PWM1CON, 1
#define PDC2                           PWM1CON, 2
#define PDC3                           PWM1CON, 3
#define PDC4                           PWM1CON, 4
#define PDC5                           PWM1CON, 5
#define PDC6                           PWM1CON, 6
#define PRSEN                          PWM1CON, 7
#define PSSBD0                         ECCPAS, 0
#define PSSBD1                         ECCPAS, 1
#define PSSAC0                         ECCPAS, 2
#define PSSAC1                         ECCPAS, 3
#define ECCPAS0                        ECCPAS, 4
#define ECCPAS1                        ECCPAS, 5
#define ECCPAS2                        ECCPAS, 6
#define ECCPASE                        ECCPAS, 7
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define CHS2                           ADCON0, 4
#define CHS3                           ADCON0, 5
#define VCFG                           ADCON0, 6
#define ADFM                           ADCON0, 7
#endif
#define PS0                            OPTION, 0
#define PS1                            OPTION, 1
#define PS2                            OPTION, 2
#define PSA                            OPTION, 3
#define T0SE                           OPTION, 4
#define T0CS                           OPTION, 5
#define INTEDG                         OPTION, 6
#define RABPU                          OPTION, 7
#define RBPU                           OPTION, 7
#define TRISA0                         TRISA, 0
#define TRISA1                         TRISA, 1
#define TRISA2                         TRISA, 2
#define TRISA3                         TRISA, 3
#define TRISA4                         TRISA, 4
#define TRISA5                         TRISA, 5
#define TRISB4                         TRISB, 4
#define TRISB5                         TRISB, 5
#define TRISB6                         TRISB, 6
#define TRISB7                         TRISB, 7
#define TRISC0                         TRISC, 0
#define TRISC1                         TRISC, 1
#define TRISC2                         TRISC, 2
#define TRISC3                         TRISC, 3
#define TRISC4                         TRISC, 4
#define TRISC5                         TRISC, 5
#define TRISC6                         TRISC, 6
#define TRISC7                         TRISC, 7
#define TMR1IE                         PIE1, 0
#if defined(_16F685) || defined(_16F690)
#define TMR2IE                         PIE1, 1
#define CCP1IE                         PIE1, 2
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define SSPIE                          PIE1, 3
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
#define TXIE                           PIE1, 4
#define RCIE                           PIE1, 5
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define ADIE                           PIE1, 6
#endif
#define EEIE                           PIE2, 4
#define C1IE                           PIE2, 5
#define C2IE                           PIE2, 6
#define OSFIE                          PIE2, 7
#define BOR                            PCON, 0
#define POR                            PCON, 1
#define SBOREN                         PCON, 4
#define ULPWUE                         PCON, 5
#define SCS                            OSCCON, 0
#define LTS                            OSCCON, 1
#define HTS                            OSCCON, 2
#define OSTS                           OSCCON, 3
#define IRCF0                          OSCCON, 4
#define IRCF1                          OSCCON, 5
#define IRCF2                          OSCCON, 6
#define TUN0                           OSCTUNE, 0
#define TUN1                           OSCTUNE, 1
#define TUN2                           OSCTUNE, 2
#define TUN3                           OSCTUNE, 3
#define TUN4                           OSCTUNE, 4
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define BF                             SSPSTAT, 0
#define UA                             SSPSTAT, 1
#define RW                             SSPSTAT, 2
#define START                          SSPSTAT, 3
#define STOP                           SSPSTAT, 4
#define DA                             SSPSTAT, 5
#define CKE                            SSPSTAT, 6
#define SMP                            SSPSTAT, 7
#endif
#define WPUA0                          WPUA, 0
#define WPUA1                          WPUA, 1
#define WPUA2                          WPUA, 2
#define WPUA4                          WPUA, 4
#define WPUA5                          WPUA, 5
#define IOCA0                          IOCA, 0
#define IOCA1                          IOCA, 1
#define IOCA2                          IOCA, 2
#define IOCA3                          IOCA, 3
#define IOCA4                          IOCA, 4
#define IOCA5                          IOCA, 5
#define SWDTEN                         WDTCON, 0
#define WDTPS0                         WDTCON, 1
#define WDTPS1                         WDTCON, 2
#define WDTPS2                         WDTCON, 3
#define WDTPS3                         WDTCON, 4
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
#define TX9D                           TXSTA, 0
#define TRMT                           TXSTA, 1
#define BRGH                           TXSTA, 2
#define SENDB                          TXSTA, 3
#define SYNC                           TXSTA, 4
#define TXEN                           TXSTA, 5
#define TX9                            TXSTA, 6
#define CSRC                           TXSTA, 7
#define BRG0                           SPBRG, 0
#define BRG1                           SPBRG, 1
#define BRG2                           SPBRG, 2
#define BRG3                           SPBRG, 3
#define BRG4                           SPBRG, 4
#define BRG5                           SPBRG, 5
#define BRG6                           SPBRG, 6
#define BRG7                           SPBRG, 7
#define BRG8                           SPBRGH, 0
#define BRG9                           SPBRGH, 1
#define BRG10                          SPBRGH, 2
#define BRG11                          SPBRGH, 3
#define BRG12                          SPBRGH, 4
#define BRG13                          SPBRGH, 5
#define BRG14                          SPBRGH, 6
#define BRG15                          SPBRGH, 7
#define ABDEN                          BAUDCTL, 0
#define WUE                            BAUDCTL, 1
#define BRG16                          BAUDCTL, 3
#define SCKP                           BAUDCTL, 4
#define RCIDL                          BAUDCTL, 6
#define ABDOVF                         BAUDCTL, 7
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define ADCS0                          ADCON1, 4
#define ADCS1                          ADCON1, 5
#define ADCS2                          ADCON1, 6
#endif
#define WPUB4                          WPUB, 4
#define WPUB5                          WPUB, 5
#define WPUB6                          WPUB, 6
#define WPUB7                          WPUB, 7
#define IOCB4                          IOCB, 4
#define IOCB5                          IOCB, 5
#define IOCB6                          IOCB, 6
#define IOCB7                          IOCB, 7
#define VR0                            VRCON, 0
#define VR1                            VRCON, 1
#define VR2                            VRCON, 2
#define VR3                            VRCON, 3
#define VP6EN                          VRCON, 4
#define VRR                            VRCON, 5
#define C2VREN                         VRCON, 6
#define C1VREN                         VRCON, 7
#define C1CH0                          CM1CON0, 0
#define C1CH1                          CM1CON0, 1
#define C1R                            CM1CON0, 2
#define C1POL                          CM1CON0, 4
#define C1OE                           CM1CON0, 5
#define C1OUT                          CM1CON0, 6
#define C1ON                           CM1CON0, 7
#define C2CH0                          CM2CON0, 0
#define C2CH1                          CM2CON0, 1
#define C2R                            CM2CON0, 2
#define C2POL                          CM2CON0, 4
#define C2OE                           CM2CON0, 5
#define C2OUT                          CM2CON0, 6
#define C2ON                           CM2CON0, 7
#define C2SYNC                         CM2CON1, 0
#define T1GSS                          CM2CON1, 1
#define MC2OUT                         CM2CON1, 6
#define MC1OUT                         CM2CON1, 7
#define ANS0                           ANSEL, 0
#define ANS1                           ANSEL, 1
#define ANS2                           ANSEL, 2
#define ANS3                           ANSEL, 3
#define ANS4                           ANSEL, 4
#define ANS5                           ANSEL, 5
#define ANS6                           ANSEL, 6
#define ANS7                           ANSEL, 7
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
#define ANS8                           ANSELH, 0
#define ANS9                           ANSELH, 1
#define ANS10                          ANSELH, 2
#define ANS11                          ANSELH, 3
#endif
#define RD                             EECON1, 0
#define WR                             EECON1, 1
#define WREN                           EECON1, 2
#define WRERR                          EECON1, 3
#if defined(_16F685) || defined(_16F690)
#define EEPGD                          EECON1, 7
#define STRA                           PSTRCON, 0
#define STRB                           PSTRCON, 1
#define STRC                           PSTRCON, 2
#define STRD                           PSTRCON, 3
#define STRSYNC                        PSTRCON, 4
#endif
#define PULSR                          SRCON, 2
#define PULSS                          SRCON, 3
#define C2REN                          SRCON, 4
#define C1SEN                          SRCON, 5
#define SR0                            SRCON, 6
#define SR1                            SRCON, 7

#endif
