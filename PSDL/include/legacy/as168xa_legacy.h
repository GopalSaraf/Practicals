#ifndef _AS168XA_LEGACY_H_
#define _AS168XA_LEGACY_H_

#if defined(_16F874A)	|| defined(_16F877A)
#endif
INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#ifdef __PINS_40
PORTD                                  equ 0008h
PORTE                                  equ 0009h
#endif
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
#ifdef	__PINS_40
TRISD                                  equ 0088h
TRISE                                  equ 0089h
#endif
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
SSPCON2                                equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
CMCON                                  equ 009Ch
CVRCON                                 equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
EEDATA                                 equ 010Ch
EEADR                                  equ 010Dh
EEADRL                                 equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
EECON1                                 equ 018Ch
EECON2                                 equ 018Dh
#define IRP                            STATUS, 7
#define RP1                            STATUS, 6
#define RP0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
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
#define RC7                            PORTC, 7
#define RC6                            PORTC, 6
#define RC5                            PORTC, 5
#define RC4                            PORTC, 4
#define RC3                            PORTC, 3
#define RC2                            PORTC, 2
#define RC1                            PORTC, 1
#define RC0                            PORTC, 0
#ifdef	__PINS_40
#define RD7                            PORTD, 7
#define RD6                            PORTD, 6
#define RD5                            PORTD, 5
#define RD4                            PORTD, 4
#define RD3                            PORTD, 3
#define RD2                            PORTD, 2
#define RD1                            PORTD, 1
#define RD0                            PORTD, 0
#define RE2                            PORTE, 2
#define RE1                            PORTE, 1
#define RE0                            PORTE, 0
#endif
#define GIE                            INTCON, 7
#define PEIE                           INTCON, 6
#define T0IE                           INTCON, 5
#define INTE                           INTCON, 4
#define RBIE                           INTCON, 3
#define T0IF                           INTCON, 2
#define INTF                           INTCON, 1
#define RBIF                           INTCON, 0
#define TMR0IE                         INTCON, 5
#define TMR0IF                         INTCON, 2
#ifdef	__PINS_40
#define PSPIF                          PIR1, 7
#endif
#define ADIF                           PIR1, 6
#define RCIF                           PIR1, 5
#define TXIF                           PIR1, 4
#define SSPIF                          PIR1, 3
#define CCP1IF                         PIR1, 2
#define TMR2IF                         PIR1, 1
#define TMR1IF                         PIR1, 0
#define CMIF                           PIR2, 6
#define EEIF                           PIR2, 4
#define BCLIF                          PIR2, 3
#define CCP2IF                         PIR2, 0
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
#define WCOL                           SSPCON, 7
#define SSPOV                          SSPCON, 6
#define SSPEN                          SSPCON, 5
#define CKP                            SSPCON, 4
#define SSPM3                          SSPCON, 3
#define SSPM2                          SSPCON, 2
#define SSPM1                          SSPCON, 1
#define SSPM0                          SSPCON, 0
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
#define ADDEN                          RCSTA, 3
#define FERR                           RCSTA, 2
#define OERR                           RCSTA, 1
#define RX9D                           RCSTA, 0
#define CCP2X                          CCP2CON, 5
#define CCP2Y                          CCP2CON, 4
#define CCP2M3                         CCP2CON, 3
#define CCP2M2                         CCP2CON, 2
#define CCP2M1                         CCP2CON, 1
#define CCP2M0                         CCP2CON, 0
#define ADCS1                          ADCON0, 7
#define ADCS0                          ADCON0, 6
#define CHS2                           ADCON0, 5
#define CHS1                           ADCON0, 4
#define CHS0                           ADCON0, 3
#define ADGO                           ADCON0, 2
#define GODONE                         ADCON0, 2
#define ADON                           ADCON0, 0
#define RBPU                           OPTION, 7
#define INTEDG                         OPTION, 6
#define T0CS                           OPTION, 5
#define T0SE                           OPTION, 4
#define PSA                            OPTION, 3
#define PS2                            OPTION, 2
#define PS1                            OPTION, 1
#define PS0                            OPTION, 0
#define TRISA5                         TRISA, 5
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
#define TRISC7                         TRISC, 7
#define TRISC6                         TRISC, 6
#define TRISC5                         TRISC, 5
#define TRISC4                         TRISC, 4
#define TRISC3                         TRISC, 3
#define TRISC2                         TRISC, 2
#define TRISC1                         TRISC, 1
#define TRISC0                         TRISC, 0
#ifdef	__PINS_40
#define TRISD7                         TRISD, 7
#define TRISD6                         TRISD, 6
#define TRISD5                         TRISD, 5
#define TRISD4                         TRISD, 4
#define TRISD3                         TRISD, 3
#define TRISD2                         TRISD, 2
#define TRISD1                         TRISD, 1
#define TRISD0                         TRISD, 0
#define IBF                            TRISE, 7
#define OBF                            TRISE, 6
#define IBOV                           TRISE, 5
#define PSPMODE                        TRISE, 4
#define TRISE2                         TRISE, 2
#define TRISE1                         TRISE, 1
#define TRISE0                         TRISE, 0
#endif
#ifdef	__PINS_40
#define PSPIE                          PIE1, 7
#endif
#define ADIE                           PIE1, 6
#define RCIE                           PIE1, 5
#define TXIE                           PIE1, 4
#define SSPIE                          PIE1, 3
#define CCP1IE                         PIE1, 2
#define TMR2IE                         PIE1, 1
#define TMR1IE                         PIE1, 0
#define CMIE                           PIE2, 6
#define EEIE                           PIE2, 4
#define BCLIE                          PIE2, 3
#define CCP2IE                         PIE2, 0
#define POR                            PCON, 1
#define BOR                            PCON, 0
#define GCEN                           SSPCON2, 7
#define ACKSTAT                        SSPCON2, 6
#define ACKDT                          SSPCON2, 5
#define ACKEN                          SSPCON2, 4
#define RCEN                           SSPCON2, 3
#define PEN                            SSPCON2, 2
#define RSEN                           SSPCON2, 1
#define SEN                            SSPCON2, 0
#define SMP                            SSPSTAT, 7
#define CKE                            SSPSTAT, 6
#define DA                             SSPSTAT, 5
#define STOP                           SSPSTAT, 4
#define START                          SSPSTAT, 3
#define RW                             SSPSTAT, 2
#define UA                             SSPSTAT, 1
#define BF                             SSPSTAT, 0
#ifdef __STAT_BACKWARD_COMPATIBILITY
#endif
#define CSRC                           TXSTA, 7
#define TX9                            TXSTA, 6
#define TXEN                           TXSTA, 5
#define SYNC                           TXSTA, 4
#define BRGH                           TXSTA, 2
#define TRMT                           TXSTA, 1
#define TX9D                           TXSTA, 0
#define C2OUT                          CMCON, 7
#define C1OUT                          CMCON, 6
#define C2INV                          CMCON, 5
#define C1INV                          CMCON, 4
#define CIS                            CMCON, 3
#define CM2                            CMCON, 2
#define CM1                            CMCON, 1
#define CM0                            CMCON, 0
#define CVREN                          CVRCON, 7
#define CVROE                          CVRCON, 6
#define CVRR                           CVRCON, 5
#define CVR3                           CVRCON, 3
#define CVR2                           CVRCON, 2
#define CVR1                           CVRCON, 1
#define CVR0                           CVRCON, 0
#define ADFM                           ADCON1, 7
#define ADCS2                          ADCON1, 6
#define PCFG3                          ADCON1, 3
#define PCFG2                          ADCON1, 2
#define PCFG1                          ADCON1, 1
#define PCFG0                          ADCON1, 0
#define EEPGD                          EECON1, 7
#define WRERR                          EECON1, 3
#define WREN                           EECON1, 2
#define WR                             EECON1, 1
#define RD                             EECON1, 0

#endif
