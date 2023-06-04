#ifndef _CAS169XX_H_
#define _CAS169XX_H_

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
#define ADCS1_bit                      ADCON0, 7
#define ADCS0_bit                      ADCON0, 6
#define CHS2_bit                       ADCON0, 5
#define CHS1_bit                       ADCON0, 4
#define CHS0_bit                       ADCON0, 3
#define ADGO_bit                       ADCON0, 2
#define GODONE_bit                     ADCON0, 2
#define ADON_bit                       ADCON0, 0
#define PCFG2_bit                      ADCON1, 2
#define PCFG1_bit                      ADCON1, 1
#define PCFG0_bit                      ADCON1, 0
#endif
#if defined(_16C925) || defined(_16C926) || defined(_16CR926)
ADRESH                                 equ 001Eh
ADRESL                                 equ 009Eh
PMCON1                                 equ 010Ch
PMDATA                                 equ 018Ch
PMDATH                                 equ 018Dh
PMADR                                  equ 018Eh
PMADRH                                 equ 018Fh
#define ADRESH7_bit                    ADRESH, 7
#define ADRESH6_bit                    ADRESH, 6
#define ADRESH5_bit                    ADRESH, 5
#define ADRESH4_bit                    ADRESH, 4
#define ADRESH3_bit                    ADRESH, 4
#define ADRESH2_bit                    ADRESH, 2
#define ADRESH1_bit                    ADRESH, 1
#define ADRESH0_bit                    ADRESH, 0
#define ADRESL7_bit                    ADRESL, 7
#define ADRESL6_bit                    ADRESL, 6
#define ADRESL5_bit                    ADRESL, 5
#define ADRESL4_bit                    ADRESL, 4
#define ADRESL3_bit                    ADRESL, 4
#define ADRESL2_bit                    ADRESL, 2
#define ADRESL1_bit                    ADRESL, 1
#define ADRESL0_bit                    ADRESL, 0
#define ADFM_bit                       ADCON1, 7
#define PCFG3_bit                      ADCON0, 3
#define RD_bit                         PMCON1, 0
#define PMDATA7_bit                    PMDATA, 7
#define PMDATA6_bit                    PMDATA, 6
#define PMDATA5_bit                    PMDATA, 5
#define PMDATA4_bit                    PMDATA, 4
#define PMDATA3_bit                    PMDATA, 3
#define PMDATA2_bit                    PMDATA, 2
#define PMDATA1_bit                    PMDATA, 1
#define PMDATA0_bit                    PMDATA, 0
#define PMADR7_bit                     PMADR, 7
#define PMADR6_bit                     PMADR, 6
#define PMADR5_bit                     PMADR, 5
#define PMADR4_bit                     PMADR, 4
#define PMADR3_bit                     PMADR, 3
#define PMADR2_bit                     PMADR, 2
#define PMADR1_bit                     PMADR, 1
#define PMADR0_bit                     PMADR, 0
#define PMDATH5_bit                    PMDATH, 5
#define PMDATH4_bit                    PMDATH, 4
#define PMDATH3_bit                    PMDATH, 3
#define PMDATH2_bit                    PMDATH, 2
#define PMDATH1_bit                    PMDATH, 1
#define PMDATH0_bit                    PMDATH, 0
#define PMADRH4_bit                    PMADRH, 4
#define PMADRH3_bit                    PMADRH, 3
#define PMADRH2_bit                    PMADRH, 2
#define PMADRH1_bit                    PMADRH, 1
#define PMADRH0_bit                    PMADRH, 0
#endif
#define IRP_bit                        STATUS, 7
#define RP1_bit                        STATUS, 6
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#define RA5_bit                        PORTA, 5
#define RA4_bit                        PORTA, 4
#define RA3_bit                        PORTA, 3
#define RA2_bit                        PORTA, 2
#define RA1_bit                        PORTA, 1
#define RA0_bit                        PORTA, 0
#define RB7_bit                        PORTB, 7
#define RB6_bit                        PORTB, 6
#define RB5_bit                        PORTB, 5
#define RB4_bit                        PORTB, 4
#define RB3_bit                        PORTB, 3
#define RB2_bit                        PORTB, 2
#define RB1_bit                        PORTB, 1
#define RB0_bit                        PORTB, 0
#define RC5_bit                        PORTC, 5
#define RC4_bit                        PORTC, 4
#define RC3_bit                        PORTC, 3
#define RC2_bit                        PORTC, 2
#define RC1_bit                        PORTC, 1
#define RC0_bit                        PORTC, 0
#define RD7_bit                        PORTD, 7
#define RD6_bit                        PORTD, 6
#define RD5_bit                        PORTD, 5
#define RD4_bit                        PORTD, 4
#define RD3_bit                        PORTD, 3
#define RD2_bit                        PORTD, 2
#define RD1_bit                        PORTD, 1
#define RD0_bit                        PORTD, 0
#define RE7_bit                        PORTE, 7
#define RE6_bit                        PORTE, 6
#define RE5_bit                        PORTE, 5
#define RE4_bit                        PORTE, 4
#define RE3_bit                        PORTE, 3
#define RE2_bit                        PORTE, 2
#define RE1_bit                        PORTE, 1
#define RE0_bit                        PORTE, 0
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define INTE_bit                       INTCON, 4
#define RBIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define INTF_bit                       INTCON, 1
#define RBIF_bit                       INTCON, 0
#define LCDIF_bit                      PIR1, 7
#ifndef _16C923
#define ADIF_bit                       PIR1, 6
#endif
#define SSPIF_bit                      PIR1, 3
#define CCP1IF_bit                     PIR1, 2
#define TMR2IF_bit                     PIR1, 1
#define TMR1IF_bit                     PIR1, 0
#define T1CKPS1_bit                    T1CON, 5
#define T1CKPS0_bit                    T1CON, 4
#define T1OSCEN_bit                    T1CON, 3
#define T1SYNC_bit                     T1CON, 2
#define TMR1CS_bit                     T1CON, 1
#define TMR1ON_bit                     T1CON, 0
#define TOUTPS3_bit                    T2CON, 6
#define TOUTPS2_bit                    T2CON, 5
#define TOUTPS1_bit                    T2CON, 4
#define TOUTPS0_bit                    T2CON, 3
#define TMR2ON_bit                     T2CON, 2
#define T2CKPS1_bit                    T2CON, 1
#define T2CKPS0_bit                    T2CON, 0
#define WCOL_bit                       SSPCON, 7
#define SSPOV_bit                      SSPCON, 6
#define SSPEN_bit                      SSPCON, 5
#define CKP_bit                        SSPCON, 4
#define SSPM3_bit                      SSPCON, 3
#define SSPM2_bit                      SSPCON, 2
#define SSPM1_bit                      SSPCON, 1
#define SSPM0_bit                      SSPCON, 0
#define CCP1X_bit                      CCP1CON, 5
#define CCPIY_bit                      CCP1CON, 4
#define CCP1M3_bit                     CCP1CON, 3
#define CCP1M2_bit                     CCP1CON, 2
#define CCP1M1_bit                     CCP1CON, 1
#define CCP1M0_bit                     CCP1CON, 0
#define RBPU_bit                       OPTION, 7
#define INTEDG_bit                     OPTION, 6
#define T0CS_bit                       OPTION, 5
#define T0SE_bit                       OPTION, 4
#define PSA_bit                        OPTION, 3
#define PS2_bit                        OPTION, 2
#define PS1_bit                        OPTION, 1
#define PS0_bit                        OPTION, 0
#define TRISA5_bit                     TRISA, 5
#define TRISA4_bit                     TRISA, 4
#define TRISA3_bit                     TRISA, 3
#define TRISA2_bit                     TRISA, 2
#define TRISA1_bit                     TRISA, 1
#define TRISA0_bit                     TRISA, 0
#define TRISB7_bit                     TRISB, 7
#define TRISB6_bit                     TRISB, 6
#define TRISB5_bit                     TRISB, 5
#define TRISB4_bit                     TRISB, 4
#define TRISB3_bit                     TRISB, 3
#define TRISB2_bit                     TRISB, 2
#define TRISB1_bit                     TRISB, 1
#define TRISB0_bit                     TRISB, 0
#define TRISC5_bit                     TRISC, 5
#define TRISC4_bit                     TRISC, 4
#define TRISC3_bit                     TRISC, 3
#define TRISC2_bit                     TRISC, 2
#define TRISC1_bit                     TRISC, 1
#define TRISC0_bit                     TRISC, 0
#define TRISD7_bit                     TRISD, 7
#define TRISD6_bit                     TRISD, 6
#define TRISD5_bit                     TRISD, 5
#define TRISD4_bit                     TRISD, 4
#define TRISD3_bit                     TRISD, 3
#define TRISD2_bit                     TRISD, 2
#define TRISD1_bit                     TRISD, 1
#define TRISD0_bit                     TRISD, 0
#define TRISE7_bit                     TRISE, 7
#define TRISE6_bit                     TRISE, 6
#define TRISE5_bit                     TRISE, 5
#define TRISE4_bit                     TRISE, 4
#define TRISE3_bit                     TRISE, 3
#define TRISE2_bit                     TRISE, 2
#define TRISE1_bit                     TRISE, 1
#define TRISE0_bit                     TRISE, 0
#define LCDIE_bit                      PIE1, 7
#ifndef _16C923
#define ADIE_bit                       PIE1, 6
#endif
#define SSPIE_bit                      PIE1, 3
#define CCP1IE_bit                     PIE1, 2
#define TMR2IE_bit                     PIE1, 1
#define TMR1IE_bit                     PIE1, 0
#define POR_bit                        PCON, 1
#define SMP_bit                        SSPSTAT, 7
#define CKE_bit                        SSPSTAT, 6
#define DA_bit                         SSPSTAT, 5
#define STOP_bit                       SSPSTAT, 4
#define START_bit                      SSPSTAT, 3
#define RW_bit                         SSPSTAT, 2
#define UA_bit                         SSPSTAT, 1
#define BF_bit                         SSPSTAT, 0
#ifdef __STAT_BACKWARD_COMPATIBILITY
#endif
#define RF7_bit                        PORTF, 7
#define RF6_bit                        PORTF, 6
#define RF5_bit                        PORTF, 5
#define RF4_bit                        PORTF, 4
#define RF3_bit                        PORTF, 3
#define RF2_bit                        PORTF, 2
#define RF1_bit                        PORTF, 1
#define RF0_bit                        PORTF, 0
#define RG7_bit                        PORTG, 7
#define RG6_bit                        PORTG, 6
#define RG5_bit                        PORTG, 5
#define RG4_bit                        PORTG, 4
#define RG3_bit                        PORTG, 3
#define RG2_bit                        PORTG, 2
#define RG1_bit                        PORTG, 1
#define RG0_bit                        PORTG, 0
#define SE29_bit                       LCDSE, 7
#define SE27_bit                       LCDSE, 6
#define SE20_bit                       LCDSE, 5
#define SE16_bit                       LCDSE, 4
#define SE12_bit                       LCDSE, 3
#define SE9_bit                        LCDSE, 2
#define SE5_bit                        LCDSE, 1
#define SE0_bit                        LCDSE, 0
#define LP3_bit                        LCDPS, 3
#define LP2_bit                        LCDPS, 2
#define LP1_bit                        LCDPS, 1
#define LP0_bit                        LCDPS, 0
#define LCDEN_bit                      LCDCON, 7
#define SLPEN_bit                      LCDCON, 6
#define VGEN_bit                       LCDCON, 4
#define CS1_bit                        LCDCON, 3
#define CS0_bit                        LCDCON, 2
#define LMUX1_bit                      LCDCON, 1
#define LMUX0_bit                      LCDCON, 0
#define COM0SEG07_bit                  LCDD00, 7
#define COM0SEG06_bit                  LCDD00, 6
#define COM0SEG05_bit                  LCDD00, 5
#define COM0SEG04_bit                  LCDD00, 4
#define COM0SEG03_bit                  LCDD00, 3
#define COM0SEG02_bit                  LCDD00, 2
#define COM0SEG01_bit                  LCDD00, 1
#define COM0SEG00_bit                  LCDD00, 0
#define COM0SEG15_bit                  LCDD01, 7
#define COM0SEG14_bit                  LCDD01, 6
#define COM0SEG13_bit                  LCDD01, 5
#define COM0SEG12_bit                  LCDD01, 4
#define COM0SEG11_bit                  LCDD01, 3
#define COM0SEG10_bit                  LCDD01, 2
#define COM0SEG09_bit                  LCDD01, 1
#define COM0SEG08_bit                  LCDD01, 0
#define COM0SEG23_bit                  LCDD02, 7
#define COM0SEG22_bit                  LCDD02, 6
#define COM0SEG21_bit                  LCDD02, 5
#define COM0SEG20_bit                  LCDD02, 4
#define COM0SEG19_bit                  LCDD02, 3
#define COM0SEG18_bit                  LCDD02, 2
#define COM0SEG17_bit                  LCDD02, 1
#define COM0SEG16_bit                  LCDD02, 0
#define COM0SEG31_bit                  LCDD03, 7
#define COM0SEG30_bit                  LCDD03, 6
#define COM0SEG29_bit                  LCDD03, 5
#define COM0SEG28_bit                  LCDD03, 4
#define COM0SEG27_bit                  LCDD03, 3
#define COM0SEG26_bit                  LCDD03, 2
#define COM0SEG25_bit                  LCDD03, 1
#define COM0SEG24_bit                  LCDD03, 0
#define COM1SEG07_bit                  LCDD04, 7
#define COM1SEG06_bit                  LCDD04, 6
#define COM1SEG05_bit                  LCDD04, 5
#define COM1SEG04_bit                  LCDD04, 4
#define COM1SEG03_bit                  LCDD04, 3
#define COM1SEG02_bit                  LCDD04, 2
#define COM1SEG01_bit                  LCDD04, 1
#define COM1SEG00_bit                  LCDD04, 0
#define COM1SEG15_bit                  LCDD05, 7
#define COM1SEG14_bit                  LCDD05, 6
#define COM1SEG13_bit                  LCDD05, 5
#define COM1SEG12_bit                  LCDD05, 4
#define COM1SEG11_bit                  LCDD05, 3
#define COM1SEG10_bit                  LCDD05, 2
#define COM1SEG09_bit                  LCDD05, 1
#define COM1SEG08_bit                  LCDD05, 0
#define COM1SEG23_bit                  LCDD06, 7
#define COM1SEG22_bit                  LCDD06, 6
#define COM1SEG21_bit                  LCDD06, 5
#define COM1SEG20_bit                  LCDD06, 4
#define COM1SEG19_bit                  LCDD06, 3
#define COM1SEG18_bit                  LCDD06, 2
#define COM1SEG17_bit                  LCDD06, 1
#define COM1SEG16_bit                  LCDD06, 0
#define COM1SEG31_bit                  LCDD07, 7
#define COM1SEG30_bit                  LCDD07, 6
#define COM1SEG29_bit                  LCDD07, 5
#define COM1SEG28_bit                  LCDD07, 4
#define COM1SEG27_bit                  LCDD07, 3
#define COM1SEG26_bit                  LCDD07, 2
#define COM1SEG25_bit                  LCDD07, 1
#define COM1SEG24_bit                  LCDD07, 0
#define COM2SEG07_bit                  LCDD08, 7
#define COM2SEG06_bit                  LCDD08, 6
#define COM2SEG05_bit                  LCDD08, 5
#define COM2SEG04_bit                  LCDD08, 4
#define COM2SEG03_bit                  LCDD08, 3
#define COM2SEG02_bit                  LCDD08, 2
#define COM2SEG01_bit                  LCDD08, 1
#define COM2SEG00_bit                  LCDD08, 0
#define COM2SEG15_bit                  LCDD09, 7
#define COM2SEG14_bit                  LCDD09, 6
#define COM2SEG13_bit                  LCDD09, 5
#define COM2SEG12_bit                  LCDD09, 4
#define COM2SEG11_bit                  LCDD09, 3
#define COM2SEG10_bit                  LCDD09, 2
#define COM2SEG09_bit                  LCDD09, 1
#define COM2SEG08_bit                  LCDD09, 0
#define COM2SEG23_bit                  LCDD10, 7
#define COM2SEG22_bit                  LCDD10, 6
#define COM2SEG21_bit                  LCDD10, 5
#define COM2SEG20_bit                  LCDD10, 4
#define COM2SEG19_bit                  LCDD10, 3
#define COM2SEG18_bit                  LCDD10, 2
#define COM2SEG17_bit                  LCDD10, 1
#define COM2SEG16_bit                  LCDD10, 0
#define COM2SEG31_bit                  LCDD11, 7
#define COM2SEG30_bit                  LCDD11, 6
#define COM2SEG29_bit                  LCDD11, 5
#define COM2SEG28_bit                  LCDD11, 4
#define COM2SEG27_bit                  LCDD11, 3
#define COM2SEG26_bit                  LCDD11, 2
#define COM2SEG25_bit                  LCDD11, 1
#define COM2SEG24_bit                  LCDD11, 0
#define COM3SEG07_bit                  LCDD12, 7
#define COM3SEG06_bit                  LCDD12, 6
#define COM3SEG05_bit                  LCDD12, 5
#define COM3SEG04_bit                  LCDD12, 4
#define COM3SEG03_bit                  LCDD12, 3
#define COM3SEG02_bit                  LCDD12, 2
#define COM3SEG01_bit                  LCDD12, 1
#define COM3SEG00_bit                  LCDD12, 0
#define COM3SEG15_bit                  LCDD13, 7
#define COM3SEG14_bit                  LCDD13, 6
#define COM3SEG13_bit                  LCDD13, 5
#define COM3SEG12_bit                  LCDD13, 4
#define COM3SEG11_bit                  LCDD13, 3
#define COM3SEG10_bit                  LCDD13, 2
#define COM3SEG09_bit                  LCDD13, 1
#define COM3SEG08_bit                  LCDD13, 0
#define COM3SEG23_bit                  LCDD14, 7
#define COM3SEG22_bit                  LCDD14, 6
#define COM3SEG21_bit                  LCDD14, 5
#define COM3SEG20_bit                  LCDD14, 4
#define COM3SEG19_bit                  LCDD14, 3
#define COM3SEG18_bit                  LCDD14, 2
#define COM3SEG17_bit                  LCDD14, 1
#define COM3SEG16_bit                  LCDD14, 0
#define COM3SEG31_bit                  LCDD15, 7
#define COM3SEG30_bit                  LCDD15, 6
#define COM3SEG29_bit                  LCDD15, 5
#define COM3SEG28_bit                  LCDD15, 4
#define COM3SEG27_bit                  LCDD15, 3
#define COM3SEG26_bit                  LCDD15, 2
#define COM3SEG25_bit                  LCDD15, 1
#define COM3SEG24_bit                  LCDD15, 0
#define TRISF7_bit                     TRISF, 7
#define TRISF6_bit                     TRISF, 6
#define TRISF5_bit                     TRISF, 5
#define TRISF4_bit                     TRISF, 4
#define TRISF3_bit                     TRISF, 3
#define TRISF2_bit                     TRISF, 2
#define TRISF1_bit                     TRISF, 1
#define TRISF0_bit                     TRISF, 0
#define TRISG7_bit                     TRISG, 7
#define TRISG6_bit                     TRISG, 6
#define TRISG5_bit                     TRISG, 5
#define TRISG4_bit                     TRISG, 4
#define TRISG3_bit                     TRISG, 3
#define TRISG2_bit                     TRISG, 2
#define TRISG1_bit                     TRISG, 1
#define TRISG0_bit                     TRISG, 0
#ifdef _16C924
#endif

#endif
