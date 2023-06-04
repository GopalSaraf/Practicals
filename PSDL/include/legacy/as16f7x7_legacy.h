#ifndef _AS16F7X7_LEGACY_H_
#define _AS16F7X7_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#if defined(_16F747) || defined(_16F777)
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
#if defined(_16F747) || defined(_16F777)
TRISD                                  equ 0088h
TRISE                                  equ 0089h
#endif
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
SSPCON2                                equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
CCPR3L                                 equ 0095h
CCPR3H                                 equ 0096h
CCP3CON                                equ 0097h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
ADCON2                                 equ 009Bh
CMCON                                  equ 009Ch
CVRCON                                 equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
WDTCON                                 equ 0105h
LVDCON                                 equ 0109h
EEDATL                                 equ 010Ch
EEDATA                                 equ 010Ch
EEADRL                                 equ 010Dh
EEADR                                  equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
EECON1                                 equ 018Ch
PMDATA                                 equ 010Ch
PMDATL                                 equ 010Ch
PMADRL                                 equ 010Dh
PMDATH                                 equ 010Eh
PMADRH                                 equ 010Fh
PMCON1                                 equ 018Ch
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
#if defined(_16F747) || defined(_16F777)
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
#define INT0IF                         INTCON, 1
#define TMR0IF                         INTCON, 2
#define RBIE                           INTCON, 3
#define INT0IE                         INTCON, 4
#define TMR0IE                         INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#define TMR2IF                         PIR1, 1
#define CCP1IF                         PIR1, 2
#define SSPIF                          PIR1, 3
#define TXIF                           PIR1, 4
#define RCIF                           PIR1, 5
#define ADIF                           PIR1, 6
#if defined(_16F747) || defined(_16F777)
#define PSPIF                          PIR1, 7
#endif
#define CCP2IF                         PIR2, 0
#define CCP3IF                         PIR2, 1
#define BCLIF                          PIR2, 3
#define LVDIF                          PIR2, 5
#define CMIF                           PIR2, 6
#define OSFIF                          PIR2, 7
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define T1RUN                          T1CON, 6
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
#define CCP1Y                          CCP1CON, 4
#define CCP1X                          CCP1CON, 5
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
#define CHS3                           ADCON0, 1
#define GODONE                         ADCON0, 2
#define CHS0                           ADCON0, 3
#define CHS1                           ADCON0, 4
#define CHS2                           ADCON0, 5
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
#if defined(_16F747) || defined(_16F777)
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
#define PSPMODE                        TRISE, 4
#define IBOV                           TRISE, 5
#define OBF                            TRISE, 6
#define IBF                            TRISE, 7
#endif
#define TMR1IE                         PIE1, 0
#define TMR2IE                         PIE1, 1
#define CCP1IE                         PIE1, 2
#define SSPIE                          PIE1, 3
#define TXIE                           PIE1, 4
#define RCIE                           PIE1, 5
#define ADIE                           PIE1, 6
#if defined(_16F747) || defined(_16F777)
#define PSPIE                          PIE1, 7
#endif
#define CCP2IE                         PIE2, 0
#define CCP3IE                         PIE2, 1
#define BCLIE                          PIE2, 3
#define LVDIE                          PIE2, 5
#define CMIE                           PIE2, 6
#define OSFIE                          PIE2, 7
#define BOR                            PCON, 0
#define POR                            PCON, 1
#define SBOREN                         PCON, 2
#define SCS0                           OSCCON, 0
#define SCS1                           OSCCON, 1
#define IOFS                           OSCCON, 2
#define OSTS                           OSCCON, 3
#define IRCF0                          OSCCON, 4
#define IRCF1                          OSCCON, 5
#define IRCF2                          OSCCON, 6
#define TUN0                           OSCTUNE, 0
#define TUN1                           OSCTUNE, 1
#define TUN2                           OSCTUNE, 2
#define TUN3                           OSCTUNE, 3
#define TUN4                           OSCTUNE, 4
#define TUN5                           OSCTUNE, 5
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
#define CCP3M0                         CCP3CON, 0
#define CCP3M1                         CCP3CON, 1
#define CCP3M2                         CCP3CON, 2
#define CCP3M3                         CCP3CON, 3
#define CCP3Y                          CCP3CON, 4
#define CCP3X                          CCP3CON, 5
#define TX9D                           TXSTA, 0
#define TRMT                           TXSTA, 1
#define BRGH                           TXSTA, 2
#define SYNC                           TXSTA, 4
#define TXEN                           TXSTA, 5
#define TX9                            TXSTA, 6
#define CSRC                           TXSTA, 7
#define ACQT0                          ADCON2, 3
#define ACQT1                          ADCON2, 4
#define ACQT2                          ADCON2, 5
#define CM0                            CMCON, 0
#define CM1                            CMCON, 1
#define CM2                            CMCON, 2
#define CIS                            CMCON, 3
#define C1INV                          CMCON, 4
#define C2INV                          CMCON, 5
#define C1OUT                          CMCON, 6
#define C2OUT                          CMCON, 7
#define CVR0                           CVRCON, 0
#define CVR1                           CVRCON, 1
#define CVR2                           CVRCON, 2
#define CVR3                           CVRCON, 3
#define CVRR                           CVRCON, 5
#define CVROE                          CVRCON, 6
#define CVREN                          CVRCON, 7
#define PCFG0                          ADCON1, 0
#define PCFG1                          ADCON1, 1
#define PCFG2                          ADCON1, 2
#define PCFG3                          ADCON1, 3
#define VCFG0                          ADCON1, 4
#define VCFG1                          ADCON1, 5
#define ADCS2                          ADCON1, 6
#define ADFM                           ADCON1, 7
#define SWDTEN                         WDTCON, 0
#define WDTPS0                         WDTCON, 1
#define WDTPS1                         WDTCON, 2
#define WDTPS2                         WDTCON, 3
#define WDTPS3                         WDTCON, 4
#define LVDL0                          LVDCON, 0
#define LVDL1                          LVDCON, 1
#define LVDL2                          LVDCON, 2
#define LVDL3                          LVDCON, 3
#define LVDEN                          LVDCON, 4
#define IRVST                          LVDCON, 5
#define RD                             EECON1, 0

#endif
