#ifndef _AS16F72X_LEGACY_H_
#define _AS16F72X_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
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
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
TRISD                                  equ 0088h
#endif
TRISE                                  equ 0089h
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
T1GCON                                 equ 008Fh
OSCCON                                 equ 0090h
OSCTUNE                                equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPMSK                                 equ 0093h
SSPSTAT                                equ 0094h
WPUB                                   equ 0095h
IOCB                                   equ 0096h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
APFCON                                 equ 009Ch
FVRCON                                 equ 009Dh
ADCON1                                 equ 009Fh
CPSCON0                                equ 0108h
CPSCON1                                equ 0109h
PMDATL                                 equ 010Ch
EEDATA                                 equ 010Ch
PMADRL                                 equ 010Dh
EEADR                                  equ 010Dh
PMDATH                                 equ 010Eh
EEDATH                                 equ 010Eh
PMADRH                                 equ 010Fh
EEADRH                                 equ 010Fh
ANSELA                                 equ 0185h
ANSELB                                 equ 0186h
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
ANSELD                                 equ 0188h
ANSELE                                 equ 0189h
#endif
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
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
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
#define TMR1GIF                        PIR1, 7
#define CCP2IF                         PIR2, 0
#define TMR1ON                         T1CON, 0
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define TMR1CS0                        T1CON, 6
#define TMR1CS1                        T1CON, 7
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
#define DC2B0                          CCP2CON, 4
#define DC2B1                          CCP2CON, 5
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define ADGO                           ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define CHS2                           ADCON0, 4
#define CHS3                           ADCON0, 5
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
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
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
#define TMR1GIE                        PIE1, 7
#define CCP2IE                         PIE2, 0
#define BOR                            PCON, 0
#define POR                            PCON, 1
#define T1GSS0                         T1GCON, 0
#define T1GSS1                         T1GCON, 1
#define T1GVAL                         T1GCON, 2
#define T1GGO                          T1GCON, 3
#define T1GSPM                         T1GCON, 4
#define T1GTM                          T1GCON, 5
#define T1GPOL                         T1GCON, 6
#define TMR1GE                         T1GCON, 7
#define ICSS                           OSCCON, 2
#define ICSL                           OSCCON, 3
#define IRCF0                          OSCCON, 4
#define IRCF1                          OSCCON, 5
#define TUN0                           OSCTUNE, 0
#define TUN1                           OSCTUNE, 1
#define TUN2                           OSCTUNE, 2
#define TUN3                           OSCTUNE, 3
#define TUN4                           OSCTUNE, 4
#define TUN5                           OSCTUNE, 5
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
#define TX9D                           TXSTA, 0
#define TRMT                           TXSTA, 1
#define BRGH                           TXSTA, 2
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
#define CCP2SEL                        APFCON, 0
#define SSSEL                          APFCON, 1
#define ADFVR0                         FVRCON, 0
#define ADFVR1                         FVRCON, 1
#define FVREN                          FVRCON, 6
#define FVRRDY                         FVRCON, 7
#define ADREF0                         ADCON1, 0
#define ADREF1                         ADCON1, 1
#define ADCS0                          ADCON1, 4
#define ADCS1                          ADCON1, 5
#define ADCS2                          ADCON1, 6
#define T0XCS                          CPSCON0, 0
#define CPSOUT                         CPSCON0, 1
#define CPSRNG0                        CPSCON0, 2
#define CPSRNG1                        CPSCON0, 3
#define CPSON                          CPSCON0, 7
#define CPSCH0                         CPSCON1, 0
#define CPSCH1                         CPSCON1, 1
#define CPSCH2                         CPSCON1, 2
#define CPSCH3                         CPSCON1, 3
#define ANSA0                          ANSELA, 0
#define ANSA1                          ANSELA, 1
#define ANSA2                          ANSELA, 2
#define ANSA3                          ANSELA, 3
#define ANSA4                          ANSELA, 4
#define ANSA5                          ANSELA, 5
#define ANSB0                          ANSELB, 0
#define ANSB1                          ANSELB, 1
#define ANSB2                          ANSELB, 2
#define ANSB3                          ANSELB, 3
#define ANSB4                          ANSELB, 4
#define ANSB5                          ANSELB, 5
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
#define ANSD0                          ANSELD, 0
#define ANSD1                          ANSELD, 1
#define ANSD2                          ANSELD, 2
#define ANSD3                          ANSELD, 3
#define ANSD4                          ANSELD, 4
#define ANSD5                          ANSELD, 5
#define ANSD6                          ANSELD, 6
#define ANSD7                          ANSELD, 7
#define ANSE0                          ANSELE, 0
#define ANSE1                          ANSELE, 1
#define ANSE2                          ANSELE, 2
#endif
#define RD                             PMCON1, 0

#endif
