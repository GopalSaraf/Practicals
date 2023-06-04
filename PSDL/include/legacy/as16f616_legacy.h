#ifndef _AS16F616_LEGACY_H_
#define _AS16F616_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTC                                  equ 0007h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
#if defined(_16F616) || defined(_16HV616)
TMR2                                   equ 0011h
T2CON                                  equ 0012h
CCPR1L                                 equ 0013h
CCPR1H                                 equ 0014h
CCP1CON                                equ 0015h
PWM1CON                                equ 0016h
ECCPAS                                 equ 0017h
#endif
VRCON                                  equ 0019h
CM1CON0                                equ 001Ah
CM2CON0                                equ 001Bh
CM2CON1                                equ 001Ch
#if defined(_16F616) || defined(_16HV616)
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
#endif
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISC                                  equ 0087h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCTUNE                                equ 0090h
ANSEL                                  equ 0091h
#if defined(_16F616) || defined(_16HV616)
PR2                                    equ 0092h
#endif
WPUA                                   equ 0095h
IOCA                                   equ 0096h
SRCON0                                 equ 0099h
SRCON1                                 equ 009Ah
#if defined(_16F616) || defined(_16HV616)
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
#endif
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
#define RC0                            PORTC, 0
#define RC1                            PORTC, 1
#define RC2                            PORTC, 2
#define RC3                            PORTC, 3
#define RC4                            PORTC, 4
#define RC5                            PORTC, 5
#define RAIF                           INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define RAIE                           INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#if defined(_16F616) || defined(_16HV616)
#define TMR2IF                         PIR1, 1
#endif
#define C1IF                           PIR1, 3
#define C2IF                           PIR1, 4
#if defined(_16F616) || defined(_16HV616)
#define CCP1IF                         PIR1, 5
#define ADIF                           PIR1, 6
#endif
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define TMR1GE                         T1CON, 6
#define T1GINV                         T1CON, 7
#if defined(_16F616) || defined(_16HV616)
#define T2CKPS0                        T2CON, 0
#define T2CKPS1                        T2CON, 1
#define TMR2ON                         T2CON, 2
#define TOUTPS0                        T2CON, 3
#define TOUTPS1                        T2CON, 4
#define TOUTPS2                        T2CON, 5
#define TOUTPS3                        T2CON, 6
#define CCP1M0                         CCP1CON, 0
#define CCP1M1                         CCP1CON, 1
#define CCP1M2                         CCP1CON, 2
#define CCP1M3                         CCP1CON, 3
#define DC1B0                          CCP1CON, 4
#define DC1B1                          CCP1CON, 5
#define P1M0                           CCP1CON, 6
#define P1M1                           CCP1CON, 7
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
#define C2HYS                          CM2CON1, 2
#define C1HYS                          CM2CON1, 3
#define T1ACS                          CM2CON1, 4
#define MC2OUT                         CM2CON1, 6
#define MC1OUT                         CM2CON1, 7
#if defined(_16F616) || defined(_16HV616)
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
#define RAPU                           OPTION, 7
#define TRISA0                         TRISA, 0
#define TRISA1                         TRISA, 1
#define TRISA2                         TRISA, 2
#define TRISA3                         TRISA, 3
#define TRISA4                         TRISA, 4
#define TRISA5                         TRISA, 5
#define TRISC0                         TRISC, 0
#define TRISC1                         TRISC, 1
#define TRISC2                         TRISC, 2
#define TRISC3                         TRISC, 3
#define TRISC4                         TRISC, 4
#define TRISC5                         TRISC, 5
#define TMR1IE                         PIE1, 0
#if defined(_16F616) || defined(_16HV616)
#define TMR2IE                         PIE1, 1
#endif
#define C1IE                           PIE1, 3
#define C2IE                           PIE1, 4
#if defined(_16F616) || defined(_16HV616)
#define CCP1IE                         PIE1, 5
#define ADIE                           PIE1, 6
#endif
#define BOR                            PCON, 0
#define POR                            PCON, 1
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
#define SRCLKEN                        SRCON0, 0
#define PULSR                          SRCON0, 2
#define PULSS                          SRCON0, 3
#define C2REN                          SRCON0, 4
#define C1SEN                          SRCON0, 5
#define SR0                            SRCON0, 6
#define SR1                            SRCON0, 7
#define SRCS2                          SRCON1, 6
#define SRCS1                          SRCON1, 7
#if defined(_16F616) || defined(_16HV616)
#define ADCS0                          ADCON1, 4
#define ADCS1                          ADCON1, 5
#define ADCS2                          ADCON1, 6
#endif

#endif
