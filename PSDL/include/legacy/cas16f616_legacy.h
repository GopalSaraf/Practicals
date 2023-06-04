#ifndef _CAS16F616_H_
#define _CAS16F616_H_

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
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define RP0_bit                        STATUS, 5
#define RP1_bit                        STATUS, 6
#define IRP_bit                        STATUS, 7
#define RA0_bit                        PORTA, 0
#define RA1_bit                        PORTA, 1
#define RA2_bit                        PORTA, 2
#define RA3_bit                        PORTA, 3
#define RA4_bit                        PORTA, 4
#define RA5_bit                        PORTA, 5
#define RC0_bit                        PORTC, 0
#define RC1_bit                        PORTC, 1
#define RC2_bit                        PORTC, 2
#define RC3_bit                        PORTC, 3
#define RC4_bit                        PORTC, 4
#define RC5_bit                        PORTC, 5
#define RAIF_bit                       INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define RAIE_bit                       INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#if defined(_16F616) || defined(_16HV616)
#define TMR2IF_bit                     PIR1, 1
#endif
#define C1IF_bit                       PIR1, 3
#define C2IF_bit                       PIR1, 4
#if defined(_16F616) || defined(_16HV616)
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
#if defined(_16F616) || defined(_16HV616)
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
#define P1M0_bit                       CCP1CON, 6
#define P1M1_bit                       CCP1CON, 7
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
#define VP6EN_bit                      VRCON, 4
#define VRR_bit                        VRCON, 5
#define C2VREN_bit                     VRCON, 6
#define C1VREN_bit                     VRCON, 7
#define C1CH0_bit                      CM1CON0, 0
#define C1CH1_bit                      CM1CON0, 1
#define C1R_bit                        CM1CON0, 2
#define C1POL_bit                      CM1CON0, 4
#define C1OE_bit                       CM1CON0, 5
#define C1OUT_bit                      CM1CON0, 6
#define C1ON_bit                       CM1CON0, 7
#define C2CH0_bit                      CM2CON0, 0
#define C2CH1_bit                      CM2CON0, 1
#define C2R_bit                        CM2CON0, 2
#define C2POL_bit                      CM2CON0, 4
#define C2OE_bit                       CM2CON0, 5
#define C2OUT_bit                      CM2CON0, 6
#define C2ON_bit                       CM2CON0, 7
#define C2SYNC_bit                     CM2CON1, 0
#define T1GSS_bit                      CM2CON1, 1
#define C2HYS_bit                      CM2CON1, 2
#define C1HYS_bit                      CM2CON1, 3
#define T1ACS_bit                      CM2CON1, 4
#define MC2OUT_bit                     CM2CON1, 6
#define MC1OUT_bit                     CM2CON1, 7
#if defined(_16F616) || defined(_16HV616)
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#define CHS3_bit                       ADCON0, 5
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
#define RAPU_bit                       OPTION, 7
#define TRISA0_bit                     TRISA, 0
#define TRISA1_bit                     TRISA, 1
#define TRISA2_bit                     TRISA, 2
#define TRISA3_bit                     TRISA, 3
#define TRISA4_bit                     TRISA, 4
#define TRISA5_bit                     TRISA, 5
#define TRISC0_bit                     TRISC, 0
#define TRISC1_bit                     TRISC, 1
#define TRISC2_bit                     TRISC, 2
#define TRISC3_bit                     TRISC, 3
#define TRISC4_bit                     TRISC, 4
#define TRISC5_bit                     TRISC, 5
#define TMR1IE_bit                     PIE1, 0
#if defined(_16F616) || defined(_16HV616)
#define TMR2IE_bit                     PIE1, 1
#endif
#define C1IE_bit                       PIE1, 3
#define C2IE_bit                       PIE1, 4
#if defined(_16F616) || defined(_16HV616)
#define CCP1IE_bit                     PIE1, 5
#define ADIE_bit                       PIE1, 6
#endif
#define BOR_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define TUN0_bit                       OSCTUNE, 0
#define TUN1_bit                       OSCTUNE, 1
#define TUN2_bit                       OSCTUNE, 2
#define TUN3_bit                       OSCTUNE, 3
#define TUN4_bit                       OSCTUNE, 4
#define ANS0_bit                       ANSEL, 0
#define ANS1_bit                       ANSEL, 1
#define ANS2_bit                       ANSEL, 2
#define ANS3_bit                       ANSEL, 3
#define ANS4_bit                       ANSEL, 4
#define ANS5_bit                       ANSEL, 5
#define ANS6_bit                       ANSEL, 6
#define ANS7_bit                       ANSEL, 7
#define WPUA0_bit                      WPUA, 0
#define WPUA1_bit                      WPUA, 1
#define WPUA2_bit                      WPUA, 2
#define WPUA4_bit                      WPUA, 4
#define WPUA5_bit                      WPUA, 5
#define IOCA0_bit                      IOCA, 0
#define IOCA1_bit                      IOCA, 1
#define IOCA2_bit                      IOCA, 2
#define IOCA3_bit                      IOCA, 3
#define IOCA4_bit                      IOCA, 4
#define IOCA5_bit                      IOCA, 5
#define SRCLKEN_bit                    SRCON0, 0
#define PULSR_bit                      SRCON0, 2
#define PULSS_bit                      SRCON0, 3
#define C2REN_bit                      SRCON0, 4
#define C1SEN_bit                      SRCON0, 5
#define SR0_bit                        SRCON0, 6
#define SR1_bit                        SRCON0, 7
#define SRCS2_bit                      SRCON1, 6
#define SRCS1_bit                      SRCON1, 7
#if defined(_16F616) || defined(_16HV616)
#define ADCS0_bit                      ADCON1, 4
#define ADCS1_bit                      ADCON1, 5
#define ADCS2_bit                      ADCON1, 6
#endif

#endif
