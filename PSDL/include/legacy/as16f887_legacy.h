#ifndef _AS16F887_LEGACY_H_
#define _AS16F887_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#if defined(_16F884) || defined(_16F887)
PORTD                                  equ 0008h
#endif
PORTE                                  equ 0009h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
PIR2                                   equ 000Dh
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
TMR2                                   equ 0011h
T2CON                                  equ 0012h
SSPBUF                                 equ 0013h
SSPCON                                 equ 0014h
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
RCSTA                                  equ 0018h
TXREG                                  equ 0019h
RCREG                                  equ 001Ah
CCPR2L                                 equ 001Bh
CCPR2H                                 equ 001Ch
CCP2CON                                equ 001Dh
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
#if defined(_16F884) || defined(_16F887)
TRISD                                  equ 0088h
#endif
TRISE                                  equ 0089h
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
SSPCON2                                equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPMSK                                 equ 0093h
SSPSTAT                                equ 0094h
WPUB                                   equ 0095h
IOCB                                   equ 0096h
VRCON                                  equ 0097h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
SPBRGH                                 equ 009Ah
PWM1CON                                equ 009Bh
ECCPAS                                 equ 009Ch
PSTRCON                                equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
WDTCON                                 equ 0105h
CM1CON0                                equ 0107h
CM2CON0                                equ 0108h
CM2CON1                                equ 0109h
EEDAT                                  equ 010Ch
EEDATA                                 equ 010Ch
EEADR                                  equ 010Dh
EEADRL                                 equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
SRCON                                  equ 0185h
BAUDCTL                                equ 0187h
ANSEL                                  equ 0188h
ANSELH                                 equ 0189h
EECON1                                 equ 018Ch
EECON2                                 equ 018Dh
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
#define RA6                            PORTA, 6
#define RA7                            PORTA, 7
#define RB0                            PORTB, 0
#define RB1                            PORTB, 1
#define RB2                            PORTB, 2
#define RB3                            PORTB, 3
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
#if defined(_16F884) || defined(_16F887)
#define RD0                            PORTD, 0
#define RD1                            PORTD, 1
#define RD2                            PORTD, 2
#define RD3                            PORTD, 3
#define RD4                            PORTD, 4
#define RD5                            PORTD, 5
#define RD6                            PORTD, 6
#define RD7                            PORTD, 7
#define RE0                            PORTE, 0
#define RE1                            PORTE, 1
#define RE2                            PORTE, 2
#endif
#define RE3                            PORTE, 3
#define RBIF                           INTCON, 0
#define RABIF                          INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define RBIE                           INTCON, 3
#define RABIE                          INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#define TMR2IF                         PIR1, 1
#define CCP1IF                         PIR1, 2
#define SSPIF                          PIR1, 3
#define TXIF                           PIR1, 4
#define RCIF                           PIR1, 5
#define ADIF                           PIR1, 6
#define CCP2IF                         PIR2, 0
#define ULPWUIF                        PIR2, 2
#define BCLIF                          PIR2, 3
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
#define T2CKPS0                        T2CON, 0
#define T2CKPS1                        T2CON, 1
#define TMR2ON                         T2CON, 2
#define TOUTPS0                        T2CON, 3
#define TOUTPS1                        T2CON, 4
#define TOUTPS2                        T2CON, 5
#define TOUTPS3                        T2CON, 6
#define SSPM0                          SSPCON, 0
#define SSPM1                          SSPCON, 1
#define SSPM2                          SSPCON, 2
#define SSPM3                          SSPCON, 3
#define CKP                            SSPCON, 4
#define SSPEN                          SSPCON, 5
#define SSPOV                          SSPCON, 6
#define WCOL                           SSPCON, 7
#define CCP1M0                         CCP1CON, 0
#define CCP1M1                         CCP1CON, 1
#define CCP1M2                         CCP1CON, 2
#define CCP1M3                         CCP1CON, 3
#define DC1B0                          CCP1CON, 4
#define DC1B1                          CCP1CON, 5
#define P1M0                           CCP1CON, 6
#define P1M1                           CCP1CON, 7
#define RX9D                           RCSTA, 0
#define OERR                           RCSTA, 1
#define FERR                           RCSTA, 2
#define ADDEN                          RCSTA, 3
#define CREN                           RCSTA, 4
#define SREN                           RCSTA, 5
#define RX9                            RCSTA, 6
#define SPEN                           RCSTA, 7
#define CCP2M0                         CCP2CON, 0
#define CCP2M1                         CCP2CON, 1
#define CCP2M2                         CCP2CON, 2
#define CCP2M3                         CCP2CON, 3
#define CCP2Y                          CCP2CON, 4
#define CCP2X                          CCP2CON, 5
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define CHS2                           ADCON0, 4
#define CHS3                           ADCON0, 5
#define ADCS0                          ADCON0, 6
#define ADCS1                          ADCON0, 7
#define PS0                            OPTION, 0
#define PS1                            OPTION, 1
#define PS2                            OPTION, 2
#define PSA                            OPTION, 3
#define T0SE                           OPTION, 4
#define T0CS                           OPTION, 5
#define INTEDG                         OPTION, 6
#define RBPU                           OPTION, 7
#define RABPU                          OPTION, 7
#define TRISA0                         TRISA, 0
#define TRISA1                         TRISA, 1
#define TRISA2                         TRISA, 2
#define TRISA3                         TRISA, 3
#define TRISA4                         TRISA, 4
#define TRISA5                         TRISA, 5
#define TRISA6                         TRISA, 6
#define TRISA7                         TRISA, 7
#define TRISB0                         TRISB, 0
#define TRISB1                         TRISB, 1
#define TRISB2                         TRISB, 2
#define TRISB3                         TRISB, 3
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
#if defined(_16F884) || defined(_16F887)
#define TRISD0                         TRISD, 0
#define TRISD1                         TRISD, 1
#define TRISD2                         TRISD, 2
#define TRISD3                         TRISD, 3
#define TRISD4                         TRISD, 4
#define TRISD5                         TRISD, 5
#define TRISD6                         TRISD, 6
#define TRISD7                         TRISD, 7
#define TRISE0                         TRISE, 0
#define TRISE1                         TRISE, 1
#define TRISE2                         TRISE, 2
#endif
#define TRISE3                         TRISE, 3
#define TMR1IE                         PIE1, 0
#define TMR2IE                         PIE1, 1
#define CCP1IE                         PIE1, 2
#define SSPIE                          PIE1, 3
#define TXIE                           PIE1, 4
#define RCIE                           PIE1, 5
#define ADIE                           PIE1, 6
#define CCP2IE                         PIE2, 0
#define ULPWUIE                        PIE2, 2
#define BCLIE                          PIE2, 3
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
#define SEN                            SSPCON2, 0
#define RSEN                           SSPCON2, 1
#define PEN                            SSPCON2, 2
#define RCEN                           SSPCON2, 3
#define ACKEN                          SSPCON2, 4
#define ACKDT                          SSPCON2, 5
#define ACKSTAT                        SSPCON2, 6
#define GCEN                           SSPCON2, 7
#define BF                             SSPSTAT, 0
#define UA                             SSPSTAT, 1
#define RW                             SSPSTAT, 2
#define START                          SSPSTAT, 3
#define STOP                           SSPSTAT, 4
#define DA                             SSPSTAT, 5
#define CKE                            SSPSTAT, 6
#define SMP                            SSPSTAT, 7
#define WPUB0                          WPUB, 0
#define WPUB1                          WPUB, 1
#define WPUB2                          WPUB, 2
#define WPUB3                          WPUB, 3
#define WPUB4                          WPUB, 4
#define WPUB5                          WPUB, 5
#define WPUB6                          WPUB, 6
#define WPUB7                          WPUB, 7
#define IOCB0                          IOCB, 0
#define IOCB1                          IOCB, 1
#define IOCB2                          IOCB, 2
#define IOCB3                          IOCB, 3
#define IOCB4                          IOCB, 4
#define IOCB5                          IOCB, 5
#define IOCB6                          IOCB, 6
#define IOCB7                          IOCB, 7
#define VR0                            VRCON, 0
#define VR1                            VRCON, 1
#define VR2                            VRCON, 2
#define VR3                            VRCON, 3
#define VRSS                           VRCON, 4
#define VRR                            VRCON, 5
#define VROE                           VRCON, 6
#define VREN                           VRCON, 7
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
#define STRA                           PSTRCON, 0
#define STRB                           PSTRCON, 1
#define STRC                           PSTRCON, 2
#define STRD                           PSTRCON, 3
#define STRSYNC                        PSTRCON, 4
#define VCFG0                          ADCON1, 4
#define VCFG1                          ADCON1, 5
#define ADFM                           ADCON1, 7
#define SWDTEN                         WDTCON, 0
#define WDTPS0                         WDTCON, 1
#define WDTPS1                         WDTCON, 2
#define WDTPS2                         WDTCON, 3
#define WDTPS3                         WDTCON, 4
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
#define C2RSEL                         CM2CON1, 4
#define C1RSEL                         CM2CON1, 5
#define MC2OUT                         CM2CON1, 6
#define MC1OUT                         CM2CON1, 7
#define FVREN                          SRCON, 0
#define PULSR                          SRCON, 2
#define PULSS                          SRCON, 3
#define C2REN                          SRCON, 4
#define C1SEN                          SRCON, 5
#define SR0                            SRCON, 6
#define SR1                            SRCON, 7
#define ABDEN                          BAUDCTL, 0
#define WUE                            BAUDCTL, 1
#define BRG16                          BAUDCTL, 3
#define SCKP                           BAUDCTL, 4
#define RCIDL                          BAUDCTL, 6
#define ABDOVF                         BAUDCTL, 7
#define ANS0                           ANSEL, 0
#define ANS1                           ANSEL, 1
#define ANS2                           ANSEL, 2
#define ANS3                           ANSEL, 3
#define ANS4                           ANSEL, 4
#if defined(_16F884) || defined(_16F887)
#define ANS5                           ANSEL, 5
#define ANS6                           ANSEL, 6
#define ANS7                           ANSEL, 7
#endif
#define ANS8                           ANSELH, 0
#define ANS9                           ANSELH, 1
#define ANS10                          ANSELH, 2
#define ANS11                          ANSELH, 3
#define ANS12                          ANSELH, 4
#define ANS13                          ANSELH, 5
#define RD                             EECON1, 0
#define WR                             EECON1, 1
#define WREN                           EECON1, 2
#define WRERR                          EECON1, 3
#define EEPGD                          EECON1, 7
#if defined(_16F882)
#endif

#endif
