#ifndef _CAS12F615_H_
#define _CAS12F615_H_

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
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define RP0_bit                        STATUS, 5
#define RP1_bit                        STATUS, 6
#define IRP_bit                        STATUS, 7
#define GP0_bit                        GPIO, 0
#define GP1_bit                        GPIO, 1
#define GP2_bit                        GPIO, 2
#define GP3_bit                        GPIO, 3
#define GP4_bit                        GPIO, 4
#define GP5_bit                        GPIO, 5
#define GPIF_bit                       INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define GPIE_bit                       INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#if defined(_12F615) || defined(_12HV615)
#define TMR2IF_bit                     PIR1, 1
#endif
#define CMIF_bit                       PIR1, 3
#if defined(_12F615) || defined(_12HV615)
#define CCP1IF_bit                     PIR1, 5
#define ADIF_bit                       PIR1, 6
#endif
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define TMR1GE_bit                     T1CON, 6
#define T1GINV_bit                     T1CON, 7
#if defined(_12F615) || defined(_12HV615)
#define T2CKPS0_bit                    T2CON, 0
#define T2CKPS1_bit                    T2CON, 1
#define TMR2ON_bit                     T2CON, 2
#define TOUTPS0_bit                    T2CON, 3
#define TOUTPS1_bit                    T2CON, 4
#define TOUTPS2_bit                    T2CON, 5
#define TOUTPS3_bit                    T2CON, 6
#define CCP1M0_bit                     CCP1CON, 0
#define CCP1M1_bit                     CCP1CON, 1
#define CCP1M2_bit                     CCP1CON, 2
#define CCP1M3_bit                     CCP1CON, 3
#define DC1B0_bit                      CCP1CON, 4
#define DC1B1_bit                      CCP1CON, 5
#define P1M_bit                        CCP1CON, 7
#define PDC0_bit                       PWM1CON, 0
#define PDC1_bit                       PWM1CON, 1
#define PDC2_bit                       PWM1CON, 2
#define PDC3_bit                       PWM1CON, 3
#define PDC4_bit                       PWM1CON, 4
#define PDC5_bit                       PWM1CON, 5
#define PDC6_bit                       PWM1CON, 6
#define PRSEN_bit                      PWM1CON, 7
#define PSSBD0_bit                     ECCPAS, 0
#define PSSBD1_bit                     ECCPAS, 1
#define PSSAC0_bit                     ECCPAS, 2
#define PSSAC1_bit                     ECCPAS, 3
#define ECCPAS0_bit                    ECCPAS, 4
#define ECCPAS1_bit                    ECCPAS, 5
#define ECCPAS2_bit                    ECCPAS, 6
#define ECCPASE_bit                    ECCPAS, 7
#endif
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define FVREN_bit                      VRCON, 4
#define VRR_bit                        VRCON, 5
#define CMVREN_bit                     VRCON, 7
#define CMCH_bit                       CMCON0, 0
#define CMR_bit                        CMCON0, 2
#define CMPOL_bit                      CMCON0, 4
#define CMOE_bit                       CMCON0, 5
#define COUT_bit                       CMCON0, 6
#define CMON_bit                       CMCON0, 7
#define CMSYNC_bit                     CMCON1, 0
#define T1GSS_bit                      CMCON1, 1
#define CMHYS_bit                      CMCON1, 3
#define T1ACS_bit                      CMCON1, 4
#if defined(_12F615) || defined(_12HV615)
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#define VCFG_bit                       ADCON0, 6
#define ADFM_bit                       ADCON0, 7
#endif
#define PS0_bit                        OPTION, 0
#define PS1_bit                        OPTION, 1
#define PS2_bit                        OPTION, 2
#define PSA_bit                        OPTION, 3
#define T0SE_bit                       OPTION, 4
#define T0CS_bit                       OPTION, 5
#define INTEDG_bit                     OPTION, 6
#define GPPU_bit                       OPTION, 7
#define TRISIO0_bit                    TRISIO, 0
#define TRISIO1_bit                    TRISIO, 1
#define TRISIO2_bit                    TRISIO, 2
#define TRISIO3_bit                    TRISIO, 3
#define TRISIO4_bit                    TRISIO, 4
#define TRISIO5_bit                    TRISIO, 5
#define TMR1IE_bit                     PIE1, 0
#if defined(_12F615) || defined(_12HV615)
#define TMR2IE_bit                     PIE1, 1
#endif
#define CMIE_bit                       PIE1, 3
#if defined(_12F615) || defined(_12HV615)
#define CCP1IE_bit                     PIE1, 5
#define ADIE_bit                       PIE1, 6
#endif
#define BOR_bit                        PCON, 0
#define POR_bit                        PCON, 1
#if defined(_12F615) || defined(_12HV615)
#define P1ASEL_bit                     APFCON, 0
#define P1BSEL_bit                     APFCON, 1
#define T1GSEL_bit                     APFCON, 4
#endif
#define WPU0_bit                       WPU, 0
#define WPU1_bit                       WPU, 1
#define WPU2_bit                       WPU, 2
#define WPU4_bit                       WPU, 4
#define WPU5_bit                       WPU, 5
#define IOC0_bit                       IOC, 0
#define IOC1_bit                       IOC, 1
#define IOC2_bit                       IOC, 2
#define IOC3_bit                       IOC, 3
#define IOC4_bit                       IOC, 4
#define IOC5_bit                       IOC, 5
#define ANS0_bit                       ANSEL, 0
#define ANS1_bit                       ANSEL, 1
#if defined(_12F615) || defined(_12HV615)
#define ANS2_bit                       ANSEL, 2
#endif
#define ANS3_bit                       ANSEL, 3
#if defined(_12F615) || defined(_12HV615)
#define ADCS0_bit                      ANSEL, 4
#define ADCS1_bit                      ANSEL, 5
#define ADCS2_bit                      ANSEL, 6
#endif

#endif
