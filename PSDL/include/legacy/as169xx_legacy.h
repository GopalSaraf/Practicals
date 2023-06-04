#ifndef _AS169XX_LEGACY_H_
#define _AS169XX_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
PORTD                                  equ 0008h
PORTE                                  equ 0009h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
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
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
TRISD                                  equ 0088h
TRISE                                  equ 0089h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
PORTF                                  equ 0107h
PORTG                                  equ 0108h
LCDSE                                  equ 010Dh
LCDPS                                  equ 010Eh
LCDCON                                 equ 010Fh
LCDD00                                 equ 0110h
LCDD01                                 equ 0111h
LCDD02                                 equ 0112h
LCDD03                                 equ 0113h
LCDD04                                 equ 0114h
LCDD05                                 equ 0115h
LCDD06                                 equ 0116h
LCDD07                                 equ 0117h
LCDD08                                 equ 0118h
LCDD09                                 equ 0119h
LCDD10                                 equ 011Ah
LCDD11                                 equ 011Bh
LCDD12                                 equ 011Ch
LCDD13                                 equ 011Dh
LCDD14                                 equ 011Eh
LCDD15                                 equ 011Fh
TRISF                                  equ 0187h
TRISG                                  equ 0188h
#ifdef _16C924
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
ADCON1                                 equ 009Fh
#define ADCS1                          ADCON0, 7
#define ADCS0                          ADCON0, 6
#define CHS2                           ADCON0, 5
#define CHS1                           ADCON0, 4
#define CHS0                           ADCON0, 3
#define ADGO                           ADCON0, 2
#define GODONE                         ADCON0, 2
#define ADON                           ADCON0, 0
#define PCFG2                          ADCON1, 2
#define PCFG1                          ADCON1, 1
#define PCFG0                          ADCON1, 0
#endif
#if defined(_16C925) || defined(_16C926) || defined(_16CR926)
ADRESH                                 equ 001Eh
ADRESL                                 equ 009Eh
PMCON1                                 equ 010Ch
PMDATA                                 equ 018Ch
PMDATH                                 equ 018Dh
PMADR                                  equ 018Eh
PMADRH                                 equ 018Fh
#define ADRESH7                        ADRESH, 7
#define ADRESH6                        ADRESH, 6
#define ADRESH5                        ADRESH, 5
#define ADRESH4                        ADRESH, 4
#define ADRESH3                        ADRESH, 4
#define ADRESH2                        ADRESH, 2
#define ADRESH1                        ADRESH, 1
#define ADRESH0                        ADRESH, 0
#define ADRESL7                        ADRESL, 7
#define ADRESL6                        ADRESL, 6
#define ADRESL5                        ADRESL, 5
#define ADRESL4                        ADRESL, 4
#define ADRESL3                        ADRESL, 4
#define ADRESL2                        ADRESL, 2
#define ADRESL1                        ADRESL, 1
#define ADRESL0                        ADRESL, 0
#define ADFM                           ADCON1, 7
#define PCFG3                          ADCON0, 3
#define RD                             PMCON1, 0
#define PMDATA7                        PMDATA, 7
#define PMDATA6                        PMDATA, 6
#define PMDATA5                        PMDATA, 5
#define PMDATA4                        PMDATA, 4
#define PMDATA3                        PMDATA, 3
#define PMDATA2                        PMDATA, 2
#define PMDATA1                        PMDATA, 1
#define PMDATA0                        PMDATA, 0
#define PMADR7                         PMADR, 7
#define PMADR6                         PMADR, 6
#define PMADR5                         PMADR, 5
#define PMADR4                         PMADR, 4
#define PMADR3                         PMADR, 3
#define PMADR2                         PMADR, 2
#define PMADR1                         PMADR, 1
#define PMADR0                         PMADR, 0
#define PMDATH5                        PMDATH, 5
#define PMDATH4                        PMDATH, 4
#define PMDATH3                        PMDATH, 3
#define PMDATH2                        PMDATH, 2
#define PMDATH1                        PMDATH, 1
#define PMDATH0                        PMDATH, 0
#define PMADRH4                        PMADRH, 4
#define PMADRH3                        PMADRH, 3
#define PMADRH2                        PMADRH, 2
#define PMADRH1                        PMADRH, 1
#define PMADRH0                        PMADRH, 0
#endif
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
#define RC5                            PORTC, 5
#define RC4                            PORTC, 4
#define RC3                            PORTC, 3
#define RC2                            PORTC, 2
#define RC1                            PORTC, 1
#define RC0                            PORTC, 0
#define RD7                            PORTD, 7
#define RD6                            PORTD, 6
#define RD5                            PORTD, 5
#define RD4                            PORTD, 4
#define RD3                            PORTD, 3
#define RD2                            PORTD, 2
#define RD1                            PORTD, 1
#define RD0                            PORTD, 0
#define RE7                            PORTE, 7
#define RE6                            PORTE, 6
#define RE5                            PORTE, 5
#define RE4                            PORTE, 4
#define RE3                            PORTE, 3
#define RE2                            PORTE, 2
#define RE1                            PORTE, 1
#define RE0                            PORTE, 0
#define GIE                            INTCON, 7
#define PEIE                           INTCON, 6
#define T0IE                           INTCON, 5
#define INTE                           INTCON, 4
#define RBIE                           INTCON, 3
#define T0IF                           INTCON, 2
#define INTF                           INTCON, 1
#define RBIF                           INTCON, 0
#define LCDIF                          PIR1, 7
#ifndef _16C923
#define ADIF                           PIR1, 6
#endif
#define SSPIF                          PIR1, 3
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
#define WCOL                           SSPCON, 7
#define SSPOV                          SSPCON, 6
#define SSPEN                          SSPCON, 5
#define CKP                            SSPCON, 4
#define SSPM3                          SSPCON, 3
#define SSPM2                          SSPCON, 2
#define SSPM1                          SSPCON, 1
#define SSPM0                          SSPCON, 0
#define CCP1X                          CCP1CON, 5
#define CCPIY                          CCP1CON, 4
#define CCP1M3                         CCP1CON, 3
#define CCP1M2                         CCP1CON, 2
#define CCP1M1                         CCP1CON, 1
#define CCP1M0                         CCP1CON, 0
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
#define TRISC5                         TRISC, 5
#define TRISC4                         TRISC, 4
#define TRISC3                         TRISC, 3
#define TRISC2                         TRISC, 2
#define TRISC1                         TRISC, 1
#define TRISC0                         TRISC, 0
#define TRISD7                         TRISD, 7
#define TRISD6                         TRISD, 6
#define TRISD5                         TRISD, 5
#define TRISD4                         TRISD, 4
#define TRISD3                         TRISD, 3
#define TRISD2                         TRISD, 2
#define TRISD1                         TRISD, 1
#define TRISD0                         TRISD, 0
#define TRISE7                         TRISE, 7
#define TRISE6                         TRISE, 6
#define TRISE5                         TRISE, 5
#define TRISE4                         TRISE, 4
#define TRISE3                         TRISE, 3
#define TRISE2                         TRISE, 2
#define TRISE1                         TRISE, 1
#define TRISE0                         TRISE, 0
#define LCDIE                          PIE1, 7
#ifndef _16C923
#define ADIE                           PIE1, 6
#endif
#define SSPIE                          PIE1, 3
#define CCP1IE                         PIE1, 2
#define TMR2IE                         PIE1, 1
#define TMR1IE                         PIE1, 0
#define POR                            PCON, 1
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
#define RF7                            PORTF, 7
#define RF6                            PORTF, 6
#define RF5                            PORTF, 5
#define RF4                            PORTF, 4
#define RF3                            PORTF, 3
#define RF2                            PORTF, 2
#define RF1                            PORTF, 1
#define RF0                            PORTF, 0
#define RG7                            PORTG, 7
#define RG6                            PORTG, 6
#define RG5                            PORTG, 5
#define RG4                            PORTG, 4
#define RG3                            PORTG, 3
#define RG2                            PORTG, 2
#define RG1                            PORTG, 1
#define RG0                            PORTG, 0
#define SE29                           LCDSE, 7
#define SE27                           LCDSE, 6
#define SE20                           LCDSE, 5
#define SE16                           LCDSE, 4
#define SE12                           LCDSE, 3
#define SE9                            LCDSE, 2
#define SE5                            LCDSE, 1
#define SE0                            LCDSE, 0
#define LP3                            LCDPS, 3
#define LP2                            LCDPS, 2
#define LP1                            LCDPS, 1
#define LP0                            LCDPS, 0
#define LCDEN                          LCDCON, 7
#define SLPEN                          LCDCON, 6
#define VGEN                           LCDCON, 4
#define CS1                            LCDCON, 3
#define CS0                            LCDCON, 2
#define LMUX1                          LCDCON, 1
#define LMUX0                          LCDCON, 0
#define COM0SEG07                      LCDD00, 7
#define COM0SEG06                      LCDD00, 6
#define COM0SEG05                      LCDD00, 5
#define COM0SEG04                      LCDD00, 4
#define COM0SEG03                      LCDD00, 3
#define COM0SEG02                      LCDD00, 2
#define COM0SEG01                      LCDD00, 1
#define COM0SEG00                      LCDD00, 0
#define COM0SEG15                      LCDD01, 7
#define COM0SEG14                      LCDD01, 6
#define COM0SEG13                      LCDD01, 5
#define COM0SEG12                      LCDD01, 4
#define COM0SEG11                      LCDD01, 3
#define COM0SEG10                      LCDD01, 2
#define COM0SEG09                      LCDD01, 1
#define COM0SEG08                      LCDD01, 0
#define COM0SEG23                      LCDD02, 7
#define COM0SEG22                      LCDD02, 6
#define COM0SEG21                      LCDD02, 5
#define COM0SEG20                      LCDD02, 4
#define COM0SEG19                      LCDD02, 3
#define COM0SEG18                      LCDD02, 2
#define COM0SEG17                      LCDD02, 1
#define COM0SEG16                      LCDD02, 0
#define COM0SEG31                      LCDD03, 7
#define COM0SEG30                      LCDD03, 6
#define COM0SEG29                      LCDD03, 5
#define COM0SEG28                      LCDD03, 4
#define COM0SEG27                      LCDD03, 3
#define COM0SEG26                      LCDD03, 2
#define COM0SEG25                      LCDD03, 1
#define COM0SEG24                      LCDD03, 0
#define COM1SEG07                      LCDD04, 7
#define COM1SEG06                      LCDD04, 6
#define COM1SEG05                      LCDD04, 5
#define COM1SEG04                      LCDD04, 4
#define COM1SEG03                      LCDD04, 3
#define COM1SEG02                      LCDD04, 2
#define COM1SEG01                      LCDD04, 1
#define COM1SEG00                      LCDD04, 0
#define COM1SEG15                      LCDD05, 7
#define COM1SEG14                      LCDD05, 6
#define COM1SEG13                      LCDD05, 5
#define COM1SEG12                      LCDD05, 4
#define COM1SEG11                      LCDD05, 3
#define COM1SEG10                      LCDD05, 2
#define COM1SEG09                      LCDD05, 1
#define COM1SEG08                      LCDD05, 0
#define COM1SEG23                      LCDD06, 7
#define COM1SEG22                      LCDD06, 6
#define COM1SEG21                      LCDD06, 5
#define COM1SEG20                      LCDD06, 4
#define COM1SEG19                      LCDD06, 3
#define COM1SEG18                      LCDD06, 2
#define COM1SEG17                      LCDD06, 1
#define COM1SEG16                      LCDD06, 0
#define COM1SEG31                      LCDD07, 7
#define COM1SEG30                      LCDD07, 6
#define COM1SEG29                      LCDD07, 5
#define COM1SEG28                      LCDD07, 4
#define COM1SEG27                      LCDD07, 3
#define COM1SEG26                      LCDD07, 2
#define COM1SEG25                      LCDD07, 1
#define COM1SEG24                      LCDD07, 0
#define COM2SEG07                      LCDD08, 7
#define COM2SEG06                      LCDD08, 6
#define COM2SEG05                      LCDD08, 5
#define COM2SEG04                      LCDD08, 4
#define COM2SEG03                      LCDD08, 3
#define COM2SEG02                      LCDD08, 2
#define COM2SEG01                      LCDD08, 1
#define COM2SEG00                      LCDD08, 0
#define COM2SEG15                      LCDD09, 7
#define COM2SEG14                      LCDD09, 6
#define COM2SEG13                      LCDD09, 5
#define COM2SEG12                      LCDD09, 4
#define COM2SEG11                      LCDD09, 3
#define COM2SEG10                      LCDD09, 2
#define COM2SEG09                      LCDD09, 1
#define COM2SEG08                      LCDD09, 0
#define COM2SEG23                      LCDD10, 7
#define COM2SEG22                      LCDD10, 6
#define COM2SEG21                      LCDD10, 5
#define COM2SEG20                      LCDD10, 4
#define COM2SEG19                      LCDD10, 3
#define COM2SEG18                      LCDD10, 2
#define COM2SEG17                      LCDD10, 1
#define COM2SEG16                      LCDD10, 0
#define COM2SEG31                      LCDD11, 7
#define COM2SEG30                      LCDD11, 6
#define COM2SEG29                      LCDD11, 5
#define COM2SEG28                      LCDD11, 4
#define COM2SEG27                      LCDD11, 3
#define COM2SEG26                      LCDD11, 2
#define COM2SEG25                      LCDD11, 1
#define COM2SEG24                      LCDD11, 0
#define COM3SEG07                      LCDD12, 7
#define COM3SEG06                      LCDD12, 6
#define COM3SEG05                      LCDD12, 5
#define COM3SEG04                      LCDD12, 4
#define COM3SEG03                      LCDD12, 3
#define COM3SEG02                      LCDD12, 2
#define COM3SEG01                      LCDD12, 1
#define COM3SEG00                      LCDD12, 0
#define COM3SEG15                      LCDD13, 7
#define COM3SEG14                      LCDD13, 6
#define COM3SEG13                      LCDD13, 5
#define COM3SEG12                      LCDD13, 4
#define COM3SEG11                      LCDD13, 3
#define COM3SEG10                      LCDD13, 2
#define COM3SEG09                      LCDD13, 1
#define COM3SEG08                      LCDD13, 0
#define COM3SEG23                      LCDD14, 7
#define COM3SEG22                      LCDD14, 6
#define COM3SEG21                      LCDD14, 5
#define COM3SEG20                      LCDD14, 4
#define COM3SEG19                      LCDD14, 3
#define COM3SEG18                      LCDD14, 2
#define COM3SEG17                      LCDD14, 1
#define COM3SEG16                      LCDD14, 0
#define COM3SEG31                      LCDD15, 7
#define COM3SEG30                      LCDD15, 6
#define COM3SEG29                      LCDD15, 5
#define COM3SEG28                      LCDD15, 4
#define COM3SEG27                      LCDD15, 3
#define COM3SEG26                      LCDD15, 2
#define COM3SEG25                      LCDD15, 1
#define COM3SEG24                      LCDD15, 0
#define TRISF7                         TRISF, 7
#define TRISF6                         TRISF, 6
#define TRISF5                         TRISF, 5
#define TRISF4                         TRISF, 4
#define TRISF3                         TRISF, 3
#define TRISF2                         TRISF, 2
#define TRISF1                         TRISF, 1
#define TRISF0                         TRISF, 0
#define TRISG7                         TRISG, 7
#define TRISG6                         TRISG, 6
#define TRISG5                         TRISG, 5
#define TRISG4                         TRISG, 4
#define TRISG3                         TRISG, 3
#define TRISG2                         TRISG, 2
#define TRISG1                         TRISG, 1
#define TRISG0                         TRISG, 0
#ifdef _16C924
#endif

#endif
