#ifndef _AS12F617_LEGACY_H_
#define _AS12F617_LEGACY_H_

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
#define RP0                            STATUS, 5
#define RP1                            STATUS, 6
#ifndef _LIB_BUILD
#endif
FSR                                    equ 0004h
GPIO                                   equ 0005h
PORTA                                  equ 0005h
#define GP0                            GPIO, 0
#define GP1                            GPIO, 1
#define GP2                            GPIO, 2
#define GP3                            GPIO, 3
#define GP4                            GPIO, 4
#define GP5                            GPIO, 5
#define GPIO0                          GPIO, 0
#define GPIO1                          GPIO, 1
#define GPIO2                          GPIO, 2
#define GPIO3                          GPIO, 3
#define GPIO4                          GPIO, 4
#define GPIO5                          GPIO, 5
#define RA0                            GPIO, 0
#define RA1                            GPIO, 1
#define RA2                            GPIO, 2
#define RA3                            GPIO, 3
#define RA4                            GPIO, 4
#define RA5                            GPIO, 5
#ifndef _LIB_BUILD
#endif
PCLATH                                 equ 000Ah
#ifndef _LIB_BUILD
#endif
INTCON                                 equ 000Bh
#define GPIF                           INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define GPIE                           INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR0IF                         INTCON, 2
#define TMR0IE                         INTCON, 5
#ifndef _LIB_BUILD
#endif
PIR1                                   equ 000Ch
#define TMR1IF                         PIR1, 0
#define TMR2IF                         PIR1, 1
#define CMIF                           PIR1, 3
#define CCP1IF                         PIR1, 5
#define ADIF                           PIR1, 6
#define C1IF                           PIR1, 3
#define CCPIF                          PIR1, 5
#define ECCPIF                         PIR1, 5
#ifndef _LIB_BUILD
#endif
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define nT1SYNC                        T1CON, 2
#define T1OSCEN                        T1CON, 3
#define TMR1GE                         T1CON, 6
#define T1GINV                         T1CON, 7
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#ifndef _LIB_BUILD
#endif
TMR2                                   equ 0011h
T2CON                                  equ 0012h
#define TMR2ON                         T2CON, 2
#define T2CKPS0                        T2CON, 0
#define T2CKPS1                        T2CON, 1
#define TOUTPS0                        T2CON, 3
#define TOUTPS1                        T2CON, 4
#define TOUTPS2                        T2CON, 5
#define TOUTPS3                        T2CON, 6
#ifndef _LIB_BUILD
#endif
CCPR1L                                 equ 0013h
CCPR1H                                 equ 0014h
CCP1CON                                equ 0015h
#define P1M                            CCP1CON, 7
#define CCP1M0                         CCP1CON, 0
#define CCP1M1                         CCP1CON, 1
#define CCP1M2                         CCP1CON, 2
#define CCP1M3                         CCP1CON, 3
#define DCB0                           CCP1CON, 4
#define DCB1                           CCP1CON, 5
#ifndef _LIB_BUILD
#endif
PWM1CON                                equ 0016h
#define PRSEN                          PWM1CON, 7
#define PDC0                           PWM1CON, 0
#define PDC1                           PWM1CON, 1
#define PDC2                           PWM1CON, 2
#define PDC3                           PWM1CON, 3
#define PDC4                           PWM1CON, 4
#define PDC5                           PWM1CON, 5
#define PDC6                           PWM1CON, 6
#ifndef _LIB_BUILD
#endif
ECCPAS                                 equ 0017h
#define ECCPASE                        ECCPAS, 7
#define PSSBD0                         ECCPAS, 0
#define PSSBD1                         ECCPAS, 1
#define PSSAC0                         ECCPAS, 2
#define PSSAC1                         ECCPAS, 3
#define ECCPAS0                        ECCPAS, 4
#define ECCPAS1                        ECCPAS, 5
#define ECCPAS2                        ECCPAS, 6
#ifndef _LIB_BUILD
#endif
VRCON                                  equ 0019h
#define FVREN                          VRCON, 4
#define VRR                            VRCON, 5
#define CMVREN                         VRCON, 7
#define VR0                            VRCON, 0
#define VR1                            VRCON, 1
#define VR2                            VRCON, 2
#define VR3                            VRCON, 3
#define C1VREN                         VRCON, 7
#ifndef _LIB_BUILD
#endif
CMCON0                                 equ 001Ah
#define CMCH                           CMCON0, 0
#define CMR                            CMCON0, 2
#define CMPOL                          CMCON0, 4
#define CMOE                           CMCON0, 5
#define COUT                           CMCON0, 6
#define CMON                           CMCON0, 7
#define C1CH                           CMCON0, 0
#define C1R                            CMCON0, 2
#define C1POL                          CMCON0, 4
#define C1OE                           CMCON0, 5
#define C1OUT                          CMCON0, 6
#define C1ON                           CMCON0, 7
#ifndef _LIB_BUILD
#endif
CMCON1                                 equ 001Ch
#define CMSYNC                         CMCON1, 0
#define T1GSS                          CMCON1, 1
#define CMHYS                          CMCON1, 3
#define T1ACS                          CMCON1, 4
#define C1SYNC                         CMCON1, 0
#define C1HYS                          CMCON1, 3
#ifndef _LIB_BUILD
#endif
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
#define ADON                           ADCON0, 0
#define GO_nDONE                       ADCON0, 1
#define VCFG                           ADCON0, 6
#define ADFM                           ADCON0, 7
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define CHS2                           ADCON0, 4
#ifndef _LIB_BUILD
#endif
OPTION_REG                             equ 0081h
#define PSA                            OPTION_REG, 3
#define T0SE                           OPTION_REG, 4
#define T0CS                           OPTION_REG, 5
#define INTEDG                         OPTION_REG, 6
#define nGPPU                          OPTION_REG, 7
#define PS0                            OPTION_REG, 0
#define PS1                            OPTION_REG, 1
#define PS2                            OPTION_REG, 2
#ifndef _LIB_BUILD
#endif
TRISIO                                 equ 0085h
TRISA                                  equ 0085h
#define TRISIO0                        TRISIO, 0
#define TRISIO1                        TRISIO, 1
#define TRISIO2                        TRISIO, 2
#define TRISIO3                        TRISIO, 3
#define TRISIO4                        TRISIO, 4
#define TRISIO5                        TRISIO, 5
#define TRISA0                         TRISIO, 0
#define TRISA1                         TRISIO, 1
#define TRISA2                         TRISIO, 2
#define TRISA3                         TRISIO, 3
#define TRISA4                         TRISIO, 4
#define TRISA5                         TRISIO, 5
#ifndef _LIB_BUILD
#endif
PIE1                                   equ 008Ch
#define TMR1IE                         PIE1, 0
#define TMR2IE                         PIE1, 1
#define CMIE                           PIE1, 3
#define CCP1IE                         PIE1, 5
#define ADIE                           PIE1, 6
#define C1IE                           PIE1, 3
#define CCPIE                          PIE1, 5
#define ECCPIE                         PIE1, 5
#ifndef _LIB_BUILD
#endif
PCON                                   equ 008Eh
#define nBOR                           PCON, 0
#define nPOR                           PCON, 1
#ifndef _LIB_BUILD
#endif
OSCTUNE                                equ 0090h
#define TUN0                           OSCTUNE, 0
#define TUN1                           OSCTUNE, 1
#define TUN2                           OSCTUNE, 2
#define TUN3                           OSCTUNE, 3
#define TUN4                           OSCTUNE, 4
#ifndef _LIB_BUILD
#endif
PR2                                    equ 0092h
APFCON                                 equ 0093h
#define P1ASEL                         APFCON, 0
#define P1BSEL                         APFCON, 1
#define T1GSEL                         APFCON, 4
#ifndef _LIB_BUILD
#endif
WPU                                    equ 0095h
WPUA                                   equ 0095h
#define WPU0                           WPU, 0
#define WPU1                           WPU, 1
#define WPU2                           WPU, 2
#define WPU4                           WPU, 4
#define WPU5                           WPU, 5
#define WPUA0                          WPU, 0
#define WPUA1                          WPU, 1
#define WPUA2                          WPU, 2
#define WPUA4                          WPU, 4
#define WPUA5                          WPU, 5
#ifndef _LIB_BUILD
#endif
IOC                                    equ 0096h
IOCA                                   equ 0096h
#define IOC0                           IOC, 0
#define IOC1                           IOC, 1
#define IOC2                           IOC, 2
#define IOC3                           IOC, 3
#define IOC4                           IOC, 4
#define IOC5                           IOC, 5
#define IOCA0                          IOC, 0
#define IOCA1                          IOC, 1
#define IOCA2                          IOC, 2
#define IOCA3                          IOC, 3
#define IOCA4                          IOC, 4
#define IOCA5                          IOC, 5
#ifndef _LIB_BUILD
#endif
PMCON1                                 equ 0098h
#define RD                             PMCON1, 0
#define WR                             PMCON1, 1
#define WREN                           PMCON1, 2
#ifndef _LIB_BUILD
#endif
PMCON2                                 equ 0099h
PMADRL                                 equ 009Ah
#define PMADRL0                        PMADRL, 0
#define PMADRL1                        PMADRL, 1
#define PMADRL2                        PMADRL, 2
#define PMADRL3                        PMADRL, 3
#define PMADRL4                        PMADRL, 4
#define PMADRL5                        PMADRL, 5
#define PMADRL6                        PMADRL, 6
#define PMADRL7                        PMADRL, 7
#ifndef _LIB_BUILD
#endif
PMADRH                                 equ 009Bh
#define PMADRH0                        PMADRH, 0
#define PMADRH1                        PMADRH, 1
#define PMADRH2                        PMADRH, 2
#ifndef _LIB_BUILD
#endif
PMDATL                                 equ 009Ch
#define PMDATL0                        PMDATL, 0
#define PMDATL1                        PMDATL, 1
#define PMDATL2                        PMDATL, 2
#define PMDATL3                        PMDATL, 3
#define PMDATL4                        PMDATL, 4
#define PMDATL5                        PMDATL, 5
#define PMDATL6                        PMDATL, 6
#define PMDATL7                        PMDATL, 7
#ifndef _LIB_BUILD
#endif
PMDATH                                 equ 009Dh
#ifndef _LIB_BUILD
#endif
ADRESL                                 equ 009Eh
ANSEL                                  equ 009Fh
#define ANS0                           ANSEL, 0
#define ANS1                           ANSEL, 1
#define ANS2                           ANSEL, 2
#define ANS3                           ANSEL, 3
#define ADCS0                          ANSEL, 4
#define ADCS1                          ANSEL, 5
#define ADCS2                          ANSEL, 6
#ifndef _LIB_BUILD
#endif

#endif
