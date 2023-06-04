#ifndef _AS16LF721_LEGACY_H_
#define _AS16LF721_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define nPD                            STATUS, 3
#define nTO                            STATUS, 4
#define IRP                            STATUS, 7
#ifndef _LIB_BUILD
#endif
FSR                                    equ 0004h
PORTA                                  equ 0005h
#define RA0                            PORTA, 0
#define RA1                            PORTA, 1
#define RA2                            PORTA, 2
#define RA3                            PORTA, 3
#define RA4                            PORTA, 4
#define RA5                            PORTA, 5
#ifndef _LIB_BUILD
#endif
PORTB                                  equ 0006h
#define RB4                            PORTB, 4
#define RB5                            PORTB, 5
#define RB6                            PORTB, 6
#define RB7                            PORTB, 7
#ifndef _LIB_BUILD
#endif
PORTC                                  equ 0007h
#define RC0                            PORTC, 0
#define RC1                            PORTC, 1
#define RC2                            PORTC, 2
#define RC3                            PORTC, 3
#define RC4                            PORTC, 4
#define RC5                            PORTC, 5
#define RC6                            PORTC, 6
#define RC7                            PORTC, 7
#ifndef _LIB_BUILD
#endif
PCLATH                                 equ 000Ah
#ifndef _LIB_BUILD
#endif
INTCON                                 equ 000Bh
#define RABIF                          INTCON, 0
#define INTF                           INTCON, 1
#define TMR0IF                         INTCON, 2
#define RABIE                          INTCON, 3
#define INTE                           INTCON, 4
#define TMR0IE                         INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#ifndef _LIB_BUILD
#endif
PIR1                                   equ 000Ch
#define TXIF                           PIR1, 4
#define RCIF                           PIR1, 5
#define TMR1GIF                        PIR1, 7
#define PSPIF                          PIR1, 7
#ifndef _LIB_BUILD
#endif
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
#define TMR1ON                         T1CON, 0
#define T1SYNC                         T1CON, 2
#ifndef _LIB_BUILD
#endif
TMR2                                   equ 0011h
T2CON                                  equ 0012h
#define TMR2ON                         T2CON, 2
#ifndef _LIB_BUILD
#endif
SSPBUF                                 equ 0013h
SSPCON                                 equ 0014h
#define CKP                            SSPCON, 4
#define SSPEN                          SSPCON, 5
#define SSPOV                          SSPCON, 6
#define WCOL                           SSPCON, 7
#ifndef _LIB_BUILD
#endif
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
#ifndef _LIB_BUILD
#endif
RCSTA                                  equ 0018h
#define RX9D                           RCSTA, 0
#define OERR                           RCSTA, 1
#define FERR                           RCSTA, 2
#define ADDEN                          RCSTA, 3
#define CREN                           RCSTA, 4
#define SREN                           RCSTA, 5
#define RX9                            RCSTA, 6
#define SPEN                           RCSTA, 7
#ifndef _LIB_BUILD
#endif
TXREG                                  equ 0019h
RCREG                                  equ 001Ah
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
#ifndef _LIB_BUILD
#endif
OPTION_REG                             equ 0081h
#define PSA                            OPTION_REG, 3
#define T0SE                           OPTION_REG, 4
#define T0CS                           OPTION_REG, 5
#define INTEDG                         OPTION_REG, 6
#define nRABPU                         OPTION_REG, 7
#ifndef _LIB_BUILD
#endif
TRISA                                  equ 0085h
#define TRISA0                         TRISA, 0
#define TRISA1                         TRISA, 1
#define TRISA2                         TRISA, 2
#define TRISA4                         TRISA, 4
#define TRISA5                         TRISA, 5
#ifndef _LIB_BUILD
#endif
TRISB                                  equ 0086h
#define TRISB4                         TRISB, 4
#define TRISB5                         TRISB, 5
#define TRISB6                         TRISB, 6
#define TRISB7                         TRISB, 7
#ifndef _LIB_BUILD
#endif
TRISC                                  equ 0087h
#define TRISC0                         TRISC, 0
#define TRISC1                         TRISC, 1
#define TRISC2                         TRISC, 2
#define TRISC3                         TRISC, 3
#define TRISC4                         TRISC, 4
#define TRISC5                         TRISC, 5
#define TRISC6                         TRISC, 6
#define TRISC7                         TRISC, 7
#ifndef _LIB_BUILD
#endif
PIE1                                   equ 008Ch
#define TMR1IE                         PIE1, 0
#define TMR2IE                         PIE1, 1
#define CCP1IE                         PIE1, 2
#define SSPIE                          PIE1, 3
#define TXIE                           PIE1, 4
#define RCIE                           PIE1, 5
#define ADIE                           PIE1, 6
#define TMR1GIE                        PIE1, 7
#ifndef _LIB_BUILD
#endif
PCON                                   equ 008Eh
#define nBOR                           PCON, 0
#define nPOR                           PCON, 1
#ifndef _LIB_BUILD
#endif
T1GCON                                 equ 008Fh
#define T1GVAL                         T1GCON, 2
#define T1GGO_DONE                     T1GCON, 3
#define T1GSPM                         T1GCON, 4
#define T1GTM                          T1GCON, 5
#define T1GPOL                         T1GCON, 6
#define TMR1GE                         T1GCON, 7
#ifndef _LIB_BUILD
#endif
OSCCON                                 equ 0090h
#define ICSS                           OSCCON, 2
#define ICSL                           OSCCON, 3
#ifndef _LIB_BUILD
#endif
OSCTUNE                                equ 0091h
#ifndef _LIB_BUILD
#endif
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPMSK                                 equ 0093h
#define MSK0                           SSPMSK, 0
#define MSK1                           SSPMSK, 1
#define MSK2                           SSPMSK, 2
#define MSK3                           SSPMSK, 3
#define MSK4                           SSPMSK, 4
#define MSK5                           SSPMSK, 5
#define MSK6                           SSPMSK, 6
#define MSK7                           SSPMSK, 7
#ifndef _LIB_BUILD
#endif
SSPSTAT                                equ 0094h
#ifndef _LIB_BUILD
#endif
WPUA                                   equ 0095h
#define WPUA0                          WPUA, 0
#define WPUA1                          WPUA, 1
#define WPUA2                          WPUA, 2
#define WPUA3                          WPUA, 3
#define WPUA4                          WPUA, 4
#define WPUA5                          WPUA, 5
#ifndef _LIB_BUILD
#endif
IOCA                                   equ 0096h
#define IOCA0                          IOCA, 0
#define IOCA1                          IOCA, 1
#define IOCA2                          IOCA, 2
#define IOCA3                          IOCA, 3
#define IOCA4                          IOCA, 4
#define IOCA5                          IOCA, 5
#ifndef _LIB_BUILD
#endif
TXSTA                                  equ 0098h
#define TX9D                           TXSTA, 0
#define TRMT                           TXSTA, 1
#define BRGH                           TXSTA, 2
#define SYNC                           TXSTA, 4
#define TXEN                           TXSTA, 5
#define TX9                            TXSTA, 6
#define CSRC                           TXSTA, 7
#ifndef _LIB_BUILD
#endif
SPBRG                                  equ 0099h
FVRCON                                 equ 009Dh
#define ADFVR0                         FVRCON, 0
#define ADFVR1                         FVRCON, 1
#define TSRNG                          FVRCON, 4
#define TSEN                           FVRCON, 5
#define FVREN                          FVRCON, 6
#define FVRST                          FVRCON, 7
#ifndef _LIB_BUILD
#endif
ADCON1                                 equ 009Fh
#define ADCS0                          ADCON1, 4
#define ADCS1                          ADCON1, 5
#define ADCS2                          ADCON1, 6
#define ADFM                           ADCON1, 7
#ifndef _LIB_BUILD
#endif
PMDATL                                 equ 010Ch
PMADRL                                 equ 010Dh
PMDATH                                 equ 010Eh
#ifndef _LIB_BUILD
#endif
PMADRH                                 equ 010Fh
#ifndef _LIB_BUILD
#endif
WPUB                                   equ 0115h
IOCB                                   equ 0116h
ANSELA                                 equ 0185h
#define ANSA0                          ANSELA, 0
#define ANSA1                          ANSELA, 1
#define ANSA2                          ANSELA, 2
#define ANSA4                          ANSELA, 4
#define ANSA5                          ANSELA, 5
#ifndef _LIB_BUILD
#endif
ANSELB                                 equ 0186h
#define ANSB4                          ANSELB, 4
#define ANSB5                          ANSELB, 5
#ifndef _LIB_BUILD
#endif
ANSELC                                 equ 0187h
#define ANSC0                          ANSELC, 0
#define ANSC1                          ANSELC, 1
#define ANSC2                          ANSELC, 2
#define ANSC3                          ANSELC, 3
#define ANSC6                          ANSELC, 6
#define ANSC7                          ANSELC, 7
#ifndef _LIB_BUILD
#endif
ICDIO                                  equ 0189h
PMCON1                                 equ 018Ch
#define RD                             PMCON1, 0
#define WR                             PMCON1, 1
#define WREN                           PMCON1, 2
#define WRERR                          PMCON1, 3
#define FREE                           PMCON1, 4
#define LWLO                           PMCON1, 5
#define CFGS                           PMCON1, 6
#define EEPGD                          PMCON1, 7
#ifndef _LIB_BUILD
#endif
PMCON2                                 equ 018Dh
ICKBUG                                 equ 018Eh
BIGBUG                                 equ 018Fh

#endif
