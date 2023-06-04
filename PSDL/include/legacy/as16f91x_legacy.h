#ifndef _AS16F91X_LEGACY_H_
#define _AS16F91X_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#if defined(_16F914) || defined(_16F917)
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
#if defined(_16F914) || defined(_16F917)
CCPR2L                                 equ 001Bh
CCPR2H                                 equ 001Ch
CCP2CON                                equ 001Dh
#endif
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
#if defined(_16F914) || defined(_16F917)
TRISD                                  equ 0088h
#endif
TRISE                                  equ 0089h
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
ANSEL                                  equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
WPUB                                   equ 0095h
IOCB                                   equ 0096h
CMCON1                                 equ 0097h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
CMCON0                                 equ 009Ch
VRCON                                  equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
WDTCON                                 equ 0105h
LCDCON                                 equ 0107h
LCDPS                                  equ 0108h
LVDCON                                 equ 0109h
EEDATL                                 equ 010Ch
EEDATA                                 equ 010Ch
EEADRL                                 equ 010Dh
EEADR                                  equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
LCDDATA0                               equ 0110h
LCDDATA1                               equ 0111h
#if defined(_16F914) || defined(_16F917)
LCDDATA2                               equ 0112h
#endif
LCDDATA3                               equ 0113h
LCDDATA4                               equ 0114h
#if defined(_16F914) || defined(_16F917)
LCDDATA5                               equ 0115h
#endif
LCDDATA6                               equ 0116h
LCDDATA7                               equ 0117h
#if defined(_16F914) || defined(_16F917)
LCDDATA8                               equ 0118h
#endif
LCDDATA9                               equ 0119h
LCDDATA10                              equ 011Ah
#if defined(_16F914) || defined(_16F917)
LCDDATA11                              equ 011Bh
#endif
LCDSE0                                 equ 011Ch
LCDSE1                                 equ 011Dh
LCDSE2                                 equ 011Eh
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
#if defined(_16F914) || defined(_16F917)
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
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define RBIE                           INTCON, 3
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
#define EEIF                           PIR1, 7
#define CCP2IF                         PIR2, 0
#define LVDIF                          PIR2, 2
#define LCDIF                          PIR2, 4
#define C1IF                           PIR2, 5
#define C2IF                           PIR2, 6
#define OSFIF                          PIR2, 7
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define T1GE                           T1CON, 6
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
#if defined(_16F914) || defined(_16F917)
#define CCP2M0                         CCP2CON, 0
#define CCP2M1                         CCP2CON, 1
#define CCP2M2                         CCP2CON, 2
#define CCP2M3                         CCP2CON, 3
#define CCP2Y                          CCP2CON, 4
#define CCP2X                          CCP2CON, 5
#endif
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define CHS2                           ADCON0, 4
#define VCFG0                          ADCON0, 5
#define VCFG1                          ADCON0, 6
#define ADFM                           ADCON0, 7
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
#if defined(_16F914) || defined(_16F917)
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
#define EEIE                           PIE1, 7
#define CCP2IE                         PIE2, 0
#define LVDIE                          PIE2, 2
#define LCDIE                          PIE2, 4
#define C1IE                           PIE2, 5
#define C2IE                           PIE2, 6
#define OSFIE                          PIE2, 7
#define BOR                            PCON, 0
#define POR                            PCON, 1
#define SBOREN                         PCON, 4
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
#define ANS0                           ANSEL, 0
#define ANS1                           ANSEL, 1
#define ANS2                           ANSEL, 2
#define ANS3                           ANSEL, 3
#define ANS4                           ANSEL, 4
#define ANS5                           ANSEL, 5
#define ANS6                           ANSEL, 6
#define ANS7                           ANSEL, 7
#define BF                             SSPSTAT, 0
#define UA                             SSPSTAT, 1
#define RW                             SSPSTAT, 2
#define START                          SSPSTAT, 3
#define STOP                           SSPSTAT, 4
#define DA                             SSPSTAT, 5
#define CKE                            SSPSTAT, 6
#define SMP                            SSPSTAT, 7
#define IOCB4                          IOCB, 4
#define IOCB5                          IOCB, 5
#define IOCB6                          IOCB, 6
#define IOCB7                          IOCB, 7
#define C2SYNC                         CMCON1, 0
#define T1GSS                          CMCON1, 1
#define TX9D                           TXSTA, 0
#define TRMT                           TXSTA, 1
#define BRGH                           TXSTA, 2
#define SYNC                           TXSTA, 4
#define TXEN                           TXSTA, 5
#define TX9                            TXSTA, 6
#define CSRC                           TXSTA, 7
#define CM0                            CMCON0, 0
#define CM1                            CMCON0, 1
#define CM2                            CMCON0, 2
#define CIS                            CMCON0, 3
#define C1INV                          CMCON0, 4
#define C2INV                          CMCON0, 5
#define C1OUT                          CMCON0, 6
#define C2OUT                          CMCON0, 7
#define VR0                            VRCON, 0
#define VR1                            VRCON, 1
#define VR2                            VRCON, 2
#define VR3                            VRCON, 3
#define VRR                            VRCON, 5
#define VREN                           VRCON, 7
#define ADCS0                          ADCON1, 4
#define ADCS1                          ADCON1, 5
#define ADCS2                          ADCON1, 6
#define SWDTEN                         WDTCON, 0
#define WDTPS0                         WDTCON, 1
#define WDTPS1                         WDTCON, 2
#define WDTPS2                         WDTCON, 3
#define WDTPS3                         WDTCON, 4
#define LMUX0                          LCDCON, 0
#define LMUX1                          LCDCON, 1
#define CS0                            LCDCON, 2
#define CS1                            LCDCON, 3
#define VLCDEN                         LCDCON, 4
#define WERR                           LCDCON, 5
#define SLPEN                          LCDCON, 6
#define LCDEN                          LCDCON, 7
#define LP0                            LCDPS, 0
#define LP1                            LCDPS, 1
#define LP2                            LCDPS, 2
#define LP3                            LCDPS, 3
#define WA                             LCDPS, 4
#define LCDA                           LCDPS, 5
#define BIASMD                         LCDPS, 6
#define WFT                            LCDPS, 7
#define LVDL0                          LVDCON, 0
#define LVDL1                          LVDCON, 1
#define LVDL2                          LVDCON, 2
#define LVDEN                          LVDCON, 4
#define IRVST                          LVDCON, 5
#define SEG0COM0                       LCDDATA0, 0
#define SEG1COM0                       LCDDATA0, 1
#define SEG2COM0                       LCDDATA0, 2
#define SEG3COM0                       LCDDATA0, 3
#define SEG4COM0                       LCDDATA0, 4
#define SEG5COM0                       LCDDATA0, 5
#define SEG6COM0                       LCDDATA0, 6
#define SEG7COM0                       LCDDATA0, 7
#define SEG8COM0                       LCDDATA1, 0
#define SEG9COM0                       LCDDATA1, 1
#define SEG10COM0                      LCDDATA1, 2
#define SEG11COM0                      LCDDATA1, 3
#define SEG12COM0                      LCDDATA1, 4
#define SEG13COM0                      LCDDATA1, 5
#define SEG14COM0                      LCDDATA1, 6
#define SEG15COM0                      LCDDATA1, 7
#if defined(_16F914) || defined(_16F917)
#define SEG16COM0                      LCDDATA2, 0
#define SEG17COM0                      LCDDATA2, 1
#define SEG18COM0                      LCDDATA2, 2
#define SEG19COM0                      LCDDATA2, 3
#define SEG20COM0                      LCDDATA2, 4
#define SEG21COM0                      LCDDATA2, 5
#define SEG22COM0                      LCDDATA2, 6
#define SEG23COM0                      LCDDATA2, 7
#endif
#define SEG0COM1                       LCDDATA3, 0
#define SEG1COM1                       LCDDATA3, 1
#define SEG2COM1                       LCDDATA3, 2
#define SEG3COM1                       LCDDATA3, 3
#define SEG4COM1                       LCDDATA3, 4
#define SEG5COM1                       LCDDATA3, 5
#define SEG6COM1                       LCDDATA3, 6
#define SEG7COM1                       LCDDATA3, 7
#define SEG8COM1                       LCDDATA4, 0
#define SEG9COM1                       LCDDATA4, 1
#define SEG10COM1                      LCDDATA4, 2
#define SEG11COM1                      LCDDATA4, 3
#define SEG12COM1                      LCDDATA4, 4
#define SEG13COM1                      LCDDATA4, 5
#define SEG14COM1                      LCDDATA4, 6
#define SEG15COM1                      LCDDATA4, 7
#if defined(_16F914) || defined(_16F917)
#define SEG16COM1                      LCDDATA5, 0
#define SEG17COM1                      LCDDATA5, 1
#define SEG18COM1                      LCDDATA5, 2
#define SEG19COM1                      LCDDATA5, 3
#define SEG20COM1                      LCDDATA5, 4
#define SEG21COM1                      LCDDATA5, 5
#define SEG22COM1                      LCDDATA5, 6
#define SEG23COM1                      LCDDATA5, 7
#endif
#define SEG0COM2                       LCDDATA6, 0
#define SEG1COM2                       LCDDATA6, 1
#define SEG2COM2                       LCDDATA6, 2
#define SEG3COM2                       LCDDATA6, 3
#define SEG4COM2                       LCDDATA6, 4
#define SEG5COM2                       LCDDATA6, 5
#define SEG6COM2                       LCDDATA6, 6
#define SEG7COM2                       LCDDATA6, 7
#define SEG8COM2                       LCDDATA7, 0
#define SEG9COM2                       LCDDATA7, 1
#define SEG10COM2                      LCDDATA7, 2
#define SEG11COM2                      LCDDATA7, 3
#define SEG12COM2                      LCDDATA7, 4
#define SEG13COM2                      LCDDATA7, 5
#define SEG14COM2                      LCDDATA7, 6
#define SEG15COM2                      LCDDATA7, 7
#if defined(_16F914) || defined(_16F917)
#define SEG16COM2                      LCDDATA8, 0
#define SEG17COM2                      LCDDATA8, 1
#define SEG18COM2                      LCDDATA8, 2
#define SEG19COM2                      LCDDATA8, 3
#define SEG20COM2                      LCDDATA8, 4
#define SEG21COM2                      LCDDATA8, 5
#define SEG22COM2                      LCDDATA8, 6
#define SEG23COM2                      LCDDATA8, 7
#endif
#define SEG0COM3                       LCDDATA9, 0
#define SEG1COM3                       LCDDATA9, 1
#define SEG2COM3                       LCDDATA9, 2
#define SEG3COM3                       LCDDATA9, 3
#define SEG4COM3                       LCDDATA9, 4
#define SEG5COM3                       LCDDATA9, 5
#define SEG6COM3                       LCDDATA9, 6
#define SEG7COM3                       LCDDATA9, 7
#define SEG8COM3                       LCDDATA10, 0
#define SEG9COM3                       LCDDATA10, 1
#define SEG10COM3                      LCDDATA10, 2
#define SEG11COM3                      LCDDATA10, 3
#define SEG12COM3                      LCDDATA10, 4
#define SEG13COM3                      LCDDATA10, 5
#define SEG14COM3                      LCDDATA10, 6
#define SEG15COM3                      LCDDATA10, 7
#if defined(_16F914) || defined(_16F917)
#define SEG16COM3                      LCDDATA11, 0
#define SEG17COM3                      LCDDATA11, 1
#define SEG18COM3                      LCDDATA11, 2
#define SEG19COM3                      LCDDATA11, 3
#define SEG20COM3                      LCDDATA11, 4
#define SEG21COM3                      LCDDATA11, 5
#define SEG22COM3                      LCDDATA11, 6
#define SEG23COM3                      LCDDATA11, 7
#endif
#define SE0                            LCDSE0, 0
#define SE1                            LCDSE0, 1
#define SE2                            LCDSE0, 2
#define SE3                            LCDSE0, 3
#define SE4                            LCDSE0, 4
#define SE5                            LCDSE0, 5
#define SE6                            LCDSE0, 6
#define SE7                            LCDSE0, 7
#define SE8                            LCDSE1, 0
#define SE9                            LCDSE1, 1
#define SE10                           LCDSE1, 2
#define SE11                           LCDSE1, 3
#define SE12                           LCDSE1, 4
#define SE13                           LCDSE1, 5
#define SE14                           LCDSE1, 6
#define SE15                           LCDSE1, 7
#define SE16                           LCDSE2, 0
#define SE17                           LCDSE2, 1
#define SE18                           LCDSE2, 2
#define SE19                           LCDSE2, 3
#define SE20                           LCDSE2, 4
#define SE21                           LCDSE2, 5
#define SE22                           LCDSE2, 6
#define SE23                           LCDSE2, 7
#define RD                             EECON1, 0
#define WR                             EECON1, 1
#define WREN                           EECON1, 2
#define WRERR                          EECON1, 3
#define EEPGD                          EECON1, 7

#endif
