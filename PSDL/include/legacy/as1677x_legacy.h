#ifndef _AS1677X_LEGACY_H_
#define _AS1677X_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
PORTC                                  equ 0007h
#endif
#if defined(_16C774) || defined(_16C765)
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
#if !defined(_16C745) && !defined(_16C765)
SSPBUF                                 equ 0013h
SSPCON                                 equ 0014h
#endif
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
RCSTA                                  equ 0018h
TXREG                                  equ 0019h
RCREG                                  equ 001Ah
CCPR2L                                 equ 001Bh
CCPR2H                                 equ 001Ch
CCP2CON                                equ 001Dh
#endif
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
TRISC                                  equ 0087h
#endif
#if defined(_16C774) || defined(_16C765)
TRISD                                  equ 0088h
TRISE                                  equ 0089h
#endif
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
#if !defined(_16C745) && !defined(_16C765)
SSPCON2                                equ 0091h
#endif
PR2                                    equ 0092h
#if !defined(_16C745) && !defined(_16C765)
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
WPUB                                   equ 0095h
IOCB                                   equ 0096h
P1DEL                                  equ 0097h
#endif
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
#endif
#if !defined(_16C745) && !defined(_16C765)
REFCON                                 equ 009Bh
LVDCON                                 equ 009Ch
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
ANSEL                                  equ 009Dh
#endif
ADRESL                                 equ 009Eh
#endif
ADCON1                                 equ 009Fh
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
PMDATL                                 equ 010Ch
PMADRL                                 equ 010Dh
PMDATH                                 equ 010Eh
PMADRH                                 equ 010Fh
#endif
#if defined(_16C770)
PMCON1                                 equ 018Ch
#define RD                             PMCON1, 0
#endif
#if defined(_16C745) || defined(_16C765)
UIR                                    equ 0190h
UIE                                    equ 0191h
UEIR                                   equ 0192h
UEIE                                   equ 0193h
USTAT                                  equ 0194h
UCTRL                                  equ 0195h
UADDR                                  equ 0196h
USWSTAT                                equ 0197h
UEP0                                   equ 0198h
UEP1                                   equ 0199h
UEP2                                   equ 019Ah
BD0OST                                 equ 01A0h
BD1OST                                 equ 01A8h
BD2OST                                 equ 01B0h
BD0IST                                 equ 01A4h
BD1IST                                 equ 01ACh
BD2IST                                 equ 01B4h
BD0OBC                                 equ 01A1h
BD1OBC                                 equ 01A9h
BD2OBC                                 equ 01B1h
BD0IBC                                 equ 01A5h
BD1IBC                                 equ 01ADh
BD2IBC                                 equ 01B5h
USBMEM                                 equ 01B8h
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
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define RA7                            PORTA, 7
#define RA6                            PORTA, 6
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define RA5                            PORTA, 5
#endif
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
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define RC7                            PORTC, 7
#define RC6                            PORTC, 6
#if !defined(_16C745) && !defined(_16C765)
#define RC5                            PORTC, 5
#define RC4                            PORTC, 4
#define RC3                            PORTC, 3
#endif
#define RC2                            PORTC, 2
#define RC1                            PORTC, 1
#define RC0                            PORTC, 0
#endif
#if defined(_16C774) || defined(_16C765)
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
#if defined(_16C774) || defined(_16C765)
#define PSPIF                          PIR1, 7
#endif
#define ADIF                           PIR1, 6
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define RCIF                           PIR1, 5
#define TXIF                           PIR1, 4
#endif
#if defined(_16C745) || defined(_16C765)
#define USBIF                          PIR1, 3
#endif
#if !defined(_16C745) && !defined(_16C765)
#define SSPIF                          PIR1, 3
#endif
#define CCP1IF                         PIR1, 2
#define TMR2IF                         PIR1, 1
#define TMR1IF                         PIR1, 0
#if !defined(_16C745) && !defined(_16C765)
#define LVDIF                          PIR2, 7
#define BCLIF                          PIR2, 3
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define CCP2IF                         PIR2, 0
#endif
#define TMR1L7                         TMR1L, 7
#define TMR1L6                         TMR1L, 6
#define TMR1L5                         TMR1L, 5
#define TMR1L4                         TMR1L, 4
#define TMR1L3                         TMR1L, 3
#define TMR1L2                         TMR1L, 2
#define TMR1L1                         TMR1L, 1
#define TMR1L0                         TMR1L, 0
#define TMR1H7                         TMR1H, 7
#define TMR1H6                         TMR1H, 6
#define TMR1H5                         TMR1H, 5
#define TMR1H4                         TMR1H, 4
#define TMR1H3                         TMR1H, 3
#define TMR1H2                         TMR1H, 2
#define TMR1H1                         TMR1H, 1
#define TMR1H0                         TMR1H, 0
#define TMR27                          TMR2, 7
#define TMR26                          TMR2, 6
#define TMR25                          TMR2, 5
#define TMR24                          TMR2, 4
#define TMR23                          TMR2, 3
#define TMR22                          TMR2, 2
#define TMR21                          TMR2, 1
#define TMR20                          TMR2, 0
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
#if !defined(_16C745) && !defined(_16C765)
#define SSPBUF7                        SSPBUF, 7
#define SSPBUF6                        SSPBUF, 6
#define SSPBUF5                        SSPBUF, 5
#define SSPBUF4                        SSPBUF, 4
#define SSPBUF3                        SSPBUF, 3
#define SSPBUF2                        SSPBUF, 2
#define SSPBUF1                        SSPBUF, 1
#define SSPBUF0                        SSPBUF, 0
#define WCOL                           SSPCON, 7
#define SSPOV                          SSPCON, 6
#define SSPEN                          SSPCON, 5
#define CKP                            SSPCON, 4
#define SSPM3                          SSPCON, 3
#define SSPM2                          SSPCON, 2
#define SSPM1                          SSPCON, 1
#define SSPM0                          SSPCON, 0
#endif
#define CCPR1L7                        CCPR1L, 7
#define CCPR1L6                        CCPR1L, 6
#define CCPR1L5                        CCPR1L, 5
#define CCPR1L4                        CCPR1L, 4
#define CCPR1L3                        CCPR1L, 3
#define CCPR1L2                        CCPR1L, 2
#define CCPR1L1                        CCPR1L, 1
#define CCPR1L0                        CCPR1L, 0
#define CCPR1H7                        CCPR1H, 7
#define CCPR1H6                        CCPR1H, 6
#define CCPR1H5                        CCPR1H, 5
#define CCPR1H4                        CCPR1H, 4
#define CCPR1H3                        CCPR1H, 3
#define CCPR1H2                        CCPR1H, 2
#define CCPR1H1                        CCPR1H, 1
#define CCPR1H0                        CCPR1H, 0
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C745) || defined(_16C765)
#if !defined(_16C745) && !defined(_16C765)
#define PWM1M1                         CCP1CON, 7
#define PWM1M0                         CCP1CON, 6
#endif
#define DC1B1                          CCP1CON, 5
#define DC1B0                          CCP1CON, 4
#endif
#if defined(_16C773) || defined(_16C774)
#define CCP1X                          CCP1CON, 5
#define CCP1Y                          CCP1CON, 4
#endif
#define CCP1M3                         CCP1CON, 3
#define CCP1M2                         CCP1CON, 2
#define CCP1M1                         CCP1CON, 1
#define CCP1M0                         CCP1CON, 0
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define SPEN                           RCSTA, 7
#define RX9                            RCSTA, 6
#define SREN                           RCSTA, 5
#define CREN                           RCSTA, 4
#if !defined(_16C745) && !defined(_16C765)
#define ADDEN                          RCSTA, 3
#endif
#define FERR                           RCSTA, 2
#define OERR                           RCSTA, 1
#define RX9D                           RCSTA, 0
#if !defined(_16C745) && !defined(_16C765)
#define CCP2X                          CCP2CON, 5
#define CCP2Y                          CCP2CON, 4
#endif
#if defined(_16C745) || defined(_16C765)
#define DC2B1                          CCP2CON, 5
#define DC2B0                          CCP2CON, 4
#endif
#define CCP2M3                         CCP2CON, 3
#define CCP2M2                         CCP2CON, 2
#define CCP2M1                         CCP2CON, 1
#define CCP2M0                         CCP2CON, 0
#endif
#define ADCS1                          ADCON0, 7
#define ADCS0                          ADCON0, 6
#define CHS2                           ADCON0, 5
#define CHS1                           ADCON0, 4
#define CHS0                           ADCON0, 3
#define ADGO                           ADCON0, 2
#define GODONE                         ADCON0, 2
#if !defined(_16C745) && !defined(_16C765)
#define CHS3                           ADCON0, 1
#endif
#define ADON                           ADCON0, 0
#define ADRESH7                        ADRESH, 7
#define ADRESH6                        ADRESH, 6
#define ADRESH5                        ADRESH, 5
#define ADRESH4                        ADRESH, 4
#define ADRESH3                        ADRESH, 3
#define ADRESH2                        ADRESH, 2
#define ADRESH1                        ADRESH, 1
#define ADRESH0                        ADRESH, 0
#define RBPU                           OPTION, 7
#define INTEDG                         OPTION, 6
#define T0CS                           OPTION, 5
#define T0SE                           OPTION, 4
#define PSA                            OPTION, 3
#define PS2                            OPTION, 2
#define PS1                            OPTION, 1
#define PS0                            OPTION, 0
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define TRISA7                         TRISA, 7
#define TRISA6                         TRISA, 6
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define TRISA5                         TRISA, 5
#endif
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
#if defined(_16C773) || defined(_16C774)
#define TRISC7                         TRISC, 7
#define TRISC6                         TRISC, 6
#if !defined(_16C745) && !defined(_16C765)
#define TRISC5                         TRISC, 5
#define TRISC4                         TRISC, 4
#define TRISC3                         TRISC, 3
#endif
#define TRISC2                         TRISC, 2
#define TRISC1                         TRISC, 1
#define TRISC0                         TRISC, 0
#endif
#if defined(_16C774) || defined(_16C765)
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
#if defined(_16C774) || defined(_16C765)
#define PSPIE                          PIE1, 7
#endif
#define ADIE                           PIE1, 6
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define RCIE                           PIE1, 5
#define TXIE                           PIE1, 4
#endif
#if defined(_16C745) || defined(_16C765)
#define USBIE                          PIE1, 3
#endif
#if !defined(_16C745) && !defined(_16C765)
#define SSPIE                          PIE1, 3
#endif
#define CCP1IE                         PIE1, 2
#define TMR2IE                         PIE1, 1
#define TMR1IE                         PIE1, 0
#if !defined(_16C774) && !defined(_16C765)
#define LVDIE                          PIE2, 7
#define BCLIE                          PIE2, 3
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define CCP2IE                         PIE2, 0
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define OSCF                           PCON, 3
#endif
#define POR                            PCON, 1
#define BOR                            PCON, 0
#if !defined(_16C745) && !defined(_16C765)
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
#endif
#define PR27                           PR2, 7
#define PR26                           PR2, 6
#define PR25                           PR2, 5
#define PR24                           PR2, 4
#define PR23                           PR2, 3
#define PR22                           PR2, 2
#define PR21                           PR2, 1
#define PR20                           PR2, 0
#if !defined(_16C745) && !defined(_16C765)
#define SSPADD7                        SSPADD, 7
#define SSPADD6                        SSPADD, 6
#define SSPADD5                        SSPADD, 5
#define SSPADD4                        SSPADD, 4
#define SSPADD3                        SSPADD, 3
#define SSPADD2                        SSPADD, 2
#define SSPADD1                        SSPADD, 1
#define SSPADD0                        SSPADD, 0
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define WPUB7                          WPUB, 7
#define WPUB6                          WPUB, 6
#define WPUB5                          WPUB, 5
#define WPUB4                          WPUB, 4
#define WPUB3                          WPUB, 3
#define WPUB2                          WPUB, 2
#define WPUB1                          WPUB, 1
#define WPUB0                          WPUB, 0
#define IOCB7                          IOCB, 7
#define IOCB6                          IOCB, 6
#define IOCB5                          IOCB, 5
#define IOCB4                          IOCB, 4
#define IOCB3                          IOCB, 3
#define IOCB2                          IOCB, 2
#define IOCB1                          IOCB, 1
#define IOCB0                          IOCB, 0
#define P1DEL7                         P1DEL, 7
#define P1DEL6                         P1DEL, 6
#define P1DEL5                         P1DEL, 5
#define P1DEL4                         P1DEL, 4
#define P1DEL3                         P1DEL, 3
#define P1DEL2                         P1DEL, 2
#define P1DEL1                         P1DEL, 1
#define P1DEL0                         P1DEL, 0
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define CSRC                           TXSTA, 7
#define TX9                            TXSTA, 6
#define TXEN                           TXSTA, 5
#define SYNC                           TXSTA, 4
#define BRGH                           TXSTA, 2
#define TRMT                           TXSTA, 1
#define TX9D                           TXSTA, 0
#endif
#if !defined(_16C745) && !defined(_16C765)
#define VRHEN                          REFCON, 7
#define VRLEN                          REFCON, 6
#define VRHOEN                         REFCON, 5
#define VRLOEN                         REFCON, 4
#define BGST                           LVDCON, 5
#define LVDEN                          LVDCON, 4
#define LV3                            LVDCON, 3
#define LV2                            LVDCON, 2
#define LV1                            LVDCON, 1
#define LV0                            LVDCON, 0
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define ANSEL5                         ANSEL, 5
#define ANSEL4                         ANSEL, 4
#define ANSEL3                         ANSEL, 3
#define ANSEL2                         ANSEL, 2
#define ANSEL1                         ANSEL, 1
#define ANSEL0                         ANSEL, 0
#endif
#if !defined(_16C745) && !defined(_16C765)
#define ADRESL7                        ADRESL, 7
#define ADRESL6                        ADRESL, 6
#define ADRESL5                        ADRESL, 5
#define ADRESL4                        ADRESL, 4
#define ADRESL3                        ADRESL, 3
#define ADRESL2                        ADRESL, 2
#define ADRESL1                        ADRESL, 1
#define ADRESL0                        ADRESL, 0
#endif
#if !defined(_16C745) && !defined(_16C765)
#define ADFM                           ADCON1, 7
#define VCFG2                          ADCON1, 6
#define VCFG1                          ADCON1, 5
#define VCFG0                          ADCON1, 4
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#if !defined(_16C774) && !defined(_16C765)
#define PCFG3                          ADCON1, 3
#endif
#define PCFG2                          ADCON1, 2
#define PCFG1                          ADCON1, 1
#define PCFG0                          ADCON1, 0
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define PMDATL7                        PMDATL, 7
#define PMDATL6                        PMDATL, 6
#define PMDATL5                        PMDATL, 5
#define PMDATL4                        PMDATL, 4
#define PMDATL3                        PMDATL, 3
#define PMDATL2                        PMDATL, 2
#define PMDATL1                        PMDATL, 1
#define PMDATL0                        PMDATL, 0
#define PMADRL7                        PMADRL, 7
#define PMADRL6                        PMADRL, 6
#define PMADRL5                        PMADRL, 5
#define PMADRL4                        PMADRL, 4
#define PMADRL3                        PMADRL, 3
#define PMADRL2                        PMADRL, 2
#define PMADRL1                        PMADRL, 1
#define PMADRL0                        PMADRL, 0
#define PMDATH5                        PMDATH, 5
#define PMDATH4                        PMDATH, 4
#define PMDATH3                        PMDATH, 3
#define PMDATH2                        PMDATH, 2
#define PMDATH1                        PMDATH, 1
#define PMDATH0                        PMDATH, 0
#define PMADRH3                        PMADRH, 3
#define PMADRH2                        PMADRH, 2
#define PMADRH1                        PMADRH, 1
#define PMADRH0                        PMADRH, 0
#endif
#if defined(_16C745) || defined(_16C765)
#define STALL                          UIR, 5
#define UIDLE                          UIR, 4
#define TOK_DONE                       UIR, 3
#define ACTIVITY                       UIR, 2
#define UERR                           UIR, 1
#define USB_RST                        UIR, 0
#define STALL_E                        UIE, 5
#define UIDLE_E                        UIE, 4
#define TOK_DONE_E                     UIE, 3
#define ACTIVITY_E                     UIE, 2
#define UERR_E                         UIE, 1
#define USB_RST_E                      UIE, 0
#define BTS_ERR                        UEIR, 7
#define OWN_ERR                        UEIR, 6
#define WRT_ERR                        UEIR, 5
#define BTO_ERR                        UEIR, 4
#define DFN8                           UEIR, 3
#define CRC16                          UEIR, 2
#define CRC5                           UEIR, 1
#define PID_ERR                        UEIR, 0
#define BTS_ERR_E                      UEIE, 7
#define OWN_ERR_E                      UEIE, 6
#define WRT_ERR_E                      UEIE, 5
#define BTO_ERR_E                      UEIE, 4
#define DFN8_E                         UEIE, 3
#define CRC16_E                        UEIE, 2
#define CRC5_E                         UEIE, 1
#define PID_ERR_E                      UEIE, 0
#define ENDP1                          USTAT, 4
#define ENDP0                          USTAT, 3
#define IN                             USTAT, 2
#define SEO                            UCTRL, 5
#define PKT_DIS                        UCTRL, 4
#define DEV_ATT                        UCTRL, 3
#define RESUME                         UCTRL, 2
#define SUSPND                         UCTRL, 1
#define ADDR6                          UADDR, 6
#define ADDR5                          UADDR, 5
#define ADDR4                          UADDR, 4
#define ADDR3                          UADDR, 3
#define ADDR2                          UADDR, 2
#define ADDR1                          UADDR, 1
#define ADDR0                          UADDR, 0
#define SWSTAT7                        USWSTAT, 7
#define SWSTAT6                        USWSTAT, 6
#define SWSTAT5                        USWSTAT, 5
#define SWSTAT4                        USWSTAT, 4
#define SWSTAT3                        USWSTAT, 3
#define SWSTAT2                        USWSTAT, 2
#define SWSTAT1                        USWSTAT, 1
#define SWSTAT0                        USWSTAT, 0
#define EP_CTL_DIS0                    UEP0, 3
#define EP_OUT_EN0                     UEP0, 2
#define EP_IN_EN0                      UEP0, 1
#define EP_STALL0                      UEP0, 0
#define EP_CTL_DIS1                    UEP1, 3
#define EP_OUT_EN1                     UEP1, 2
#define EP_IN_EN1                      UEP1, 1
#define EP_STALL1                      UEP1, 0
#define EP_CTL_DIS2                    UEP2, 3
#define EP_OUT_EN2                     UEP2, 2
#define EP_IN_EN2                      UEP2, 1
#define EP_STALL2                      UEP2, 0
#define UOWN_0O                        BD0OST, 7
#define DATA_0O                        BD0OST, 6
#define PID3_0O                        BD0OST, 5
#define PID2_0O                        BD0OST, 4
#define PID1_0O                        BD0OST, 3
#define PID0_0O                        BD0OST, 2
#define UOWN_0I                        BD0IST, 7
#define DATA_0I                        BD0IST, 6
#define PID3_0I                        BD0IST, 5
#define PID2_0I                        BD0IST, 4
#define PID1_0I                        BD0IST, 3
#define PID0_0I                        BD0IST, 2
#define UOWN_1O                        BD1OST, 7
#define DATA_1O                        BD1OST, 6
#define PID3_1O                        BD1OST, 5
#define PID2_1O                        BD1OST, 4
#define PID1_1O                        BD1OST, 3
#define PID0_1O                        BD1OST, 2
#define UOWN_1I                        BD1IST, 7
#define DATA_1I                        BD1IST, 6
#define PID3_1I                        BD1IST, 5
#define PID2_1I                        BD1IST, 4
#define PID1_1I                        BD1IST, 3
#define PID0_1I                        BD1IST, 2
#define UOWN_2O                        BD2OST, 7
#define DATA_2O                        BD2OST, 6
#define PID3_2O                        BD2OST, 5
#define PID2_2O                        BD2OST, 4
#define PID1_2O                        BD2OST, 3
#define PID0_2O                        BD2OST, 2
#define UOWN_2I                        BD2IST, 7
#define DATA_2I                        BD2IST, 6
#define PID3_2I                        BD2IST, 5
#define PID2_2I                        BD2IST, 4
#define PID1_2I                        BD2IST, 3
#define PID0_2I                        BD2IST, 2
#endif
#if !defined(_16C745) || !defined(_16C765)
#endif
#if defined(_16C717)
#elif defined (_16C770) || defined (_16C771)
#elif defined(_16C773) || defined (_16C774)
#elif defined(_16C745) || defined (_16C765)
#endif
#if defined(_16C717)
#endif
#if defined(_16C717)
#endif
#if defined(_16C773) || defined (_16C774) || defined (_16C770) || defined (_16C771)
#endif
#if defined(_16C745) || defined (_16C765)
#endif

#endif
