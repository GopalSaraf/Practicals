#ifndef _CAS12F617_H_
#define _CAS12F617_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define nPD_bit                        STATUS, 3
#define nTO_bit                        STATUS, 4
#define IRP_bit                        STATUS, 7
#define RP0_bit                        STATUS, 5
#define RP1_bit                        STATUS, 6
#ifndef _LIB_BUILD
#endif
FSR                                    equ 0004h
GPIO                                   equ 0005h
PORTA                                  equ 0005h
#define GP0_bit                        GPIO, 0
#define GP1_bit                        GPIO, 1
#define GP2_bit                        GPIO, 2
#define GP3_bit                        GPIO, 3
#define GP4_bit                        GPIO, 4
#define GP5_bit                        GPIO, 5
#define GPIO0_bit                      GPIO, 0
#define GPIO1_bit                      GPIO, 1
#define GPIO2_bit                      GPIO, 2
#define GPIO3_bit                      GPIO, 3
#define GPIO4_bit                      GPIO, 4
#define GPIO5_bit                      GPIO, 5
#define RA0_bit                        GPIO, 0
#define RA1_bit                        GPIO, 1
#define RA2_bit                        GPIO, 2
#define RA3_bit                        GPIO, 3
#define RA4_bit                        GPIO, 4
#define RA5_bit                        GPIO, 5
#ifndef _LIB_BUILD
#endif
PCLATH                                 equ 000Ah
#ifndef _LIB_BUILD
#endif
INTCON                                 equ 000Bh
#define GPIF_bit                       INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define GPIE_bit                       INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR0IF_bit                     INTCON, 2
#define TMR0IE_bit                     INTCON, 5
#ifndef _LIB_BUILD
#endif
PIR1                                   equ 000Ch
#define TMR1IF_bit                     PIR1, 0
#define TMR2IF_bit                     PIR1, 1
#define CMIF_bit                       PIR1, 3
#define CCP1IF_bit                     PIR1, 5
#define ADIF_bit                       PIR1, 6
#define C1IF_bit                       PIR1, 3
#define CCPIF_bit                      PIR1, 5
#define ECCPIF_bit                     PIR1, 5
#ifndef _LIB_BUILD
#endif
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define nT1SYNC_bit                    T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define TMR1GE_bit                     T1CON, 6
#define T1GINV_bit                     T1CON, 7
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#ifndef _LIB_BUILD
#endif
TMR2                                   equ 0011h
T2CON                                  equ 0012h
#define TMR2ON_bit                     T2CON, 2
#define T2CKPS0_bit                    T2CON, 0
#define T2CKPS1_bit                    T2CON, 1
#define TOUTPS0_bit                    T2CON, 3
#define TOUTPS1_bit                    T2CON, 4
#define TOUTPS2_bit                    T2CON, 5
#define TOUTPS3_bit                    T2CON, 6
#ifndef _LIB_BUILD
#endif
CCPR1L                                 equ 0013h
CCPR1H                                 equ 0014h
CCP1CON                                equ 0015h
#define P1M_bit                        CCP1CON, 7
#define CCP1M0_bit                     CCP1CON, 0
#define CCP1M1_bit                     CCP1CON, 1
#define CCP1M2_bit                     CCP1CON, 2
#define CCP1M3_bit                     CCP1CON, 3
#define DCB0_bit                       CCP1CON, 4
#define DCB1_bit                       CCP1CON, 5
#ifndef _LIB_BUILD
#endif
PWM1CON                                equ 0016h
#define PRSEN_bit                      PWM1CON, 7
#define PDC0_bit                       PWM1CON, 0
#define PDC1_bit                       PWM1CON, 1
#define PDC2_bit                       PWM1CON, 2
#define PDC3_bit                       PWM1CON, 3
#define PDC4_bit                       PWM1CON, 4
#define PDC5_bit                       PWM1CON, 5
#define PDC6_bit                       PWM1CON, 6
#ifndef _LIB_BUILD
#endif
ECCPAS                                 equ 0017h
#define ECCPASE_bit                    ECCPAS, 7
#define PSSBD0_bit                     ECCPAS, 0
#define PSSBD1_bit                     ECCPAS, 1
#define PSSAC0_bit                     ECCPAS, 2
#define PSSAC1_bit                     ECCPAS, 3
#define ECCPAS0_bit                    ECCPAS, 4
#define ECCPAS1_bit                    ECCPAS, 5
#define ECCPAS2_bit                    ECCPAS, 6
#ifndef _LIB_BUILD
#endif
VRCON                                  equ 0019h
#define FVREN_bit                      VRCON, 4
#define VRR_bit                        VRCON, 5
#define CMVREN_bit                     VRCON, 7
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define C1VREN_bit                     VRCON, 7
#ifndef _LIB_BUILD
#endif
CMCON0                                 equ 001Ah
#define CMCH_bit                       CMCON0, 0
#define CMR_bit                        CMCON0, 2
#define CMPOL_bit                      CMCON0, 4
#define CMOE_bit                       CMCON0, 5
#define COUT_bit                       CMCON0, 6
#define CMON_bit                       CMCON0, 7
#define C1CH_bit                       CMCON0, 0
#define C1R_bit                        CMCON0, 2
#define C1POL_bit                      CMCON0, 4
#define C1OE_bit                       CMCON0, 5
#define C1OUT_bit                      CMCON0, 6
#define C1ON_bit                       CMCON0, 7
#ifndef _LIB_BUILD
#endif
CMCON1                                 equ 001Ch
#define CMSYNC_bit                     CMCON1, 0
#define T1GSS_bit                      CMCON1, 1
#define CMHYS_bit                      CMCON1, 3
#define T1ACS_bit                      CMCON1, 4
#define C1SYNC_bit                     CMCON1, 0
#define C1HYS_bit                      CMCON1, 3
#ifndef _LIB_BUILD
#endif
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
#define ADON_bit                       ADCON0, 0
#define GO_nDONE_bit                   ADCON0, 1
#define VCFG_bit                       ADCON0, 6
#define ADFM_bit                       ADCON0, 7
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#ifndef _LIB_BUILD
#endif
OPTION_REG                             equ 0081h
#define PSA_bit                        OPTION_REG, 3
#define T0SE_bit                       OPTION_REG, 4
#define T0CS_bit                       OPTION_REG, 5
#define INTEDG_bit                     OPTION_REG, 6
#define nGPPU_bit                      OPTION_REG, 7
#define PS0_bit                        OPTION_REG, 0
#define PS1_bit                        OPTION_REG, 1
#define PS2_bit                        OPTION_REG, 2
#ifndef _LIB_BUILD
#endif
TRISIO                                 equ 0085h
TRISA                                  equ 0085h
#define TRISIO0_bit                    TRISIO, 0
#define TRISIO1_bit                    TRISIO, 1
#define TRISIO2_bit                    TRISIO, 2
#define TRISIO3_bit                    TRISIO, 3
#define TRISIO4_bit                    TRISIO, 4
#define TRISIO5_bit                    TRISIO, 5
#define TRISA0_bit                     TRISIO, 0
#define TRISA1_bit                     TRISIO, 1
#define TRISA2_bit                     TRISIO, 2
#define TRISA3_bit                     TRISIO, 3
#define TRISA4_bit                     TRISIO, 4
#define TRISA5_bit                     TRISIO, 5
#ifndef _LIB_BUILD
#endif
PIE1                                   equ 008Ch
#define TMR1IE_bit                     PIE1, 0
#define TMR2IE_bit                     PIE1, 1
#define CMIE_bit                       PIE1, 3
#define CCP1IE_bit                     PIE1, 5
#define ADIE_bit                       PIE1, 6
#define C1IE_bit                       PIE1, 3
#define CCPIE_bit                      PIE1, 5
#define ECCPIE_bit                     PIE1, 5
#ifndef _LIB_BUILD
#endif
PCON                                   equ 008Eh
#define nBOR_bit                       PCON, 0
#define nPOR_bit                       PCON, 1
#ifndef _LIB_BUILD
#endif
OSCTUNE                                equ 0090h
#define TUN0_bit                       OSCTUNE, 0
#define TUN1_bit                       OSCTUNE, 1
#define TUN2_bit                       OSCTUNE, 2
#define TUN3_bit                       OSCTUNE, 3
#define TUN4_bit                       OSCTUNE, 4
#ifndef _LIB_BUILD
#endif
PR2                                    equ 0092h
APFCON                                 equ 0093h
#define P1ASEL_bit                     APFCON, 0
#define P1BSEL_bit                     APFCON, 1
#define T1GSEL_bit                     APFCON, 4
#ifndef _LIB_BUILD
#endif
WPU                                    equ 0095h
WPUA                                   equ 0095h
#define WPU0_bit                       WPU, 0
#define WPU1_bit                       WPU, 1
#define WPU2_bit                       WPU, 2
#define WPU4_bit                       WPU, 4
#define WPU5_bit                       WPU, 5
#define WPUA0_bit                      WPU, 0
#define WPUA1_bit                      WPU, 1
#define WPUA2_bit                      WPU, 2
#define WPUA4_bit                      WPU, 4
#define WPUA5_bit                      WPU, 5
#ifndef _LIB_BUILD
#endif
IOC                                    equ 0096h
IOCA                                   equ 0096h
#define IOC0_bit                       IOC, 0
#define IOC1_bit                       IOC, 1
#define IOC2_bit                       IOC, 2
#define IOC3_bit                       IOC, 3
#define IOC4_bit                       IOC, 4
#define IOC5_bit                       IOC, 5
#define IOCA0_bit                      IOC, 0
#define IOCA1_bit                      IOC, 1
#define IOCA2_bit                      IOC, 2
#define IOCA3_bit                      IOC, 3
#define IOCA4_bit                      IOC, 4
#define IOCA5_bit                      IOC, 5
#ifndef _LIB_BUILD
#endif
PMCON1                                 equ 0098h
#define RD_bit                         PMCON1, 0
#define WR_bit                         PMCON1, 1
#define WREN_bit                       PMCON1, 2
#ifndef _LIB_BUILD
#endif
PMCON2                                 equ 0099h
PMADRL                                 equ 009Ah
#define PMADRL0_bit                    PMADRL, 0
#define PMADRL1_bit                    PMADRL, 1
#define PMADRL2_bit                    PMADRL, 2
#define PMADRL3_bit                    PMADRL, 3
#define PMADRL4_bit                    PMADRL, 4
#define PMADRL5_bit                    PMADRL, 5
#define PMADRL6_bit                    PMADRL, 6
#define PMADRL7_bit                    PMADRL, 7
#ifndef _LIB_BUILD
#endif
PMADRH                                 equ 009Bh
#define PMADRH0_bit                    PMADRH, 0
#define PMADRH1_bit                    PMADRH, 1
#define PMADRH2_bit                    PMADRH, 2
#ifndef _LIB_BUILD
#endif
PMDATL                                 equ 009Ch
#define PMDATL0_bit                    PMDATL, 0
#define PMDATL1_bit                    PMDATL, 1
#define PMDATL2_bit                    PMDATL, 2
#define PMDATL3_bit                    PMDATL, 3
#define PMDATL4_bit                    PMDATL, 4
#define PMDATL5_bit                    PMDATL, 5
#define PMDATL6_bit                    PMDATL, 6
#define PMDATL7_bit                    PMDATL, 7
#ifndef _LIB_BUILD
#endif
PMDATH                                 equ 009Dh
#ifndef _LIB_BUILD
#endif
ADRESL                                 equ 009Eh
ANSEL                                  equ 009Fh
#define ANS0_bit                       ANSEL, 0
#define ANS1_bit                       ANSEL, 1
#define ANS2_bit                       ANSEL, 2
#define ANS3_bit                       ANSEL, 3
#define ADCS0_bit                      ANSEL, 4
#define ADCS1_bit                      ANSEL, 5
#define ADCS2_bit                      ANSEL, 6
#ifndef _LIB_BUILD
#endif

#endif
