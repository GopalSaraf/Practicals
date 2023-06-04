#ifndef _AS12F615_LEGACY_H_
#define _AS12F615_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
GPIO                                   equ 0005h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
#if defined(_12F615) || defined(_12HV615)
TMR2                                   equ 0011h
T2CON                                  equ 0012h
CCPR1L                                 equ 0013h
CCPR1H                                 equ 0014h
CCP1CON                                equ 0015h
PWM1CON                                equ 0016h
ECCPAS                                 equ 0017h
#endif
VRCON                                  equ 0019h
CMCON0                                 equ 001Ah
CMCON1                                 equ 001Ch
#if defined(_12F615) || defined(_12HV615)
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
#endif
OPTION_REG                             equ 0081h
TRISIO                                 equ 0085h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCTUNE                                equ 0090h
#if defined(_12F615) || defined(_12HV615)
PR2                                    equ 0092h
APFCON                                 equ 0093h
#endif
WPU                                    equ 0095h
IOC                                    equ 0096h
#if defined(_12F615) || defined(_12HV615)
ADRESL                                 equ 009Eh
#endif
ANSEL                                  equ 009Fh
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define PD                             STATUS, 3
#define TO                             STATUS, 4
#define RP0                            STATUS, 5
#define RP1                            STATUS, 6
#define IRP                            STATUS, 7
#define GP0                            GPIO, 0
#define GP1                            GPIO, 1
#define GP2                            GPIO, 2
#define GP3                            GPIO, 3
#define GP4                            GPIO, 4
#define GP5                            GPIO, 5
#define GPIF                           INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define GPIE                           INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#if defined(_12F615) || defined(_12HV615)
#define TMR2IF                         PIR1, 1
#endif
#define CMIF                           PIR1, 3
#if defined(_12F615) || defined(_12HV615)
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
#if defined(_12F615) || defined(_12HV615)
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
#define P1M                            CCP1CON, 7
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
#define FVREN                          VRCON, 4
#define VRR                            VRCON, 5
#define CMVREN                         VRCON, 7
#define CMCH                           CMCON0, 0
#define CMR                            CMCON0, 2
#define CMPOL                          CMCON0, 4
#define CMOE                           CMCON0, 5
#define COUT                           CMCON0, 6
#define CMON                           CMCON0, 7
#define CMSYNC                         CMCON1, 0
#define T1GSS                          CMCON1, 1
#define CMHYS                          CMCON1, 3
#define T1ACS                          CMCON1, 4
#if defined(_12F615) || defined(_12HV615)
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define CHS2                           ADCON0, 4
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
#define GPPU                           OPTION, 7
#define TRISIO0                        TRISIO, 0
#define TRISIO1                        TRISIO, 1
#define TRISIO2                        TRISIO, 2
#define TRISIO3                        TRISIO, 3
#define TRISIO4                        TRISIO, 4
#define TRISIO5                        TRISIO, 5
#define TMR1IE                         PIE1, 0
#if defined(_12F615) || defined(_12HV615)
#define TMR2IE                         PIE1, 1
#endif
#define CMIE                           PIE1, 3
#if defined(_12F615) || defined(_12HV615)
#define CCP1IE                         PIE1, 5
#define ADIE                           PIE1, 6
#endif
#define BOR                            PCON, 0
#define POR                            PCON, 1
#if defined(_12F615) || defined(_12HV615)
#define P1ASEL                         APFCON, 0
#define P1BSEL                         APFCON, 1
#define T1GSEL                         APFCON, 4
#endif
#define WPU0                           WPU, 0
#define WPU1                           WPU, 1
#define WPU2                           WPU, 2
#define WPU4                           WPU, 4
#define WPU5                           WPU, 5
#define IOC0                           IOC, 0
#define IOC1                           IOC, 1
#define IOC2                           IOC, 2
#define IOC3                           IOC, 3
#define IOC4                           IOC, 4
#define IOC5                           IOC, 5
#define ANS0                           ANSEL, 0
#define ANS1                           ANSEL, 1
#if defined(_12F615) || defined(_12HV615)
#define ANS2                           ANSEL, 2
#endif
#define ANS3                           ANSEL, 3
#if defined(_12F615) || defined(_12HV615)
#define ADCS0                          ANSEL, 4
#define ADCS1                          ANSEL, 5
#define ADCS2                          ANSEL, 6
#endif

#endif
