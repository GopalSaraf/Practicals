#ifndef _CAS16F785_H_
#define _CAS16F785_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
TMR2                                   equ 0011h
T2CON                                  equ 0012h
CCPR1L                                 equ 0013h
CCPR1H                                 equ 0014h
CCP1CON                                equ 0015h
WDTCON                                 equ 0018h
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
ANSEL0                                 equ 0091h
PR2                                    equ 0092h
ANSEL1                                 equ 0093h
WPUA                                   equ 0095h
IOCA                                   equ 0096h
REFCON                                 equ 0098h
VRCON                                  equ 0099h
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EEADRL                                 equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
PWMCON1                                equ 0110h
PWMCON0                                equ 0111h
PWMCLK                                 equ 0112h
PWMPH1                                 equ 0113h
PWMPH2                                 equ 0114h
CM1CON0                                equ 0119h
CM2CON0                                equ 011Ah
CM2CON1                                equ 011Bh
OPA1CON                                equ 011Ch
OPA2CON                                equ 011Dh
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
#define RB4_bit                        PORTB, 4
#define RB5_bit                        PORTB, 5
#define RB6_bit                        PORTB, 6
#define RB7_bit                        PORTB, 7
#define RC0_bit                        PORTC, 0
#define RC1_bit                        PORTC, 1
#define RC2_bit                        PORTC, 2
#define RC3_bit                        PORTC, 3
#define RC4_bit                        PORTC, 4
#define RC5_bit                        PORTC, 5
#define RC6_bit                        PORTC, 6
#define RC7_bit                        PORTC, 7
#define RAIF_bit                       INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define RAIE_bit                       INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#define TMR2IF_bit                     PIR1, 1
#define OSFIF_bit                      PIR1, 2
#define C1IF_bit                       PIR1, 3
#define C2IF_bit                       PIR1, 4
#define CCP1IF_bit                     PIR1, 5
#define ADIF_bit                       PIR1, 6
#define EEIF_bit                       PIR1, 7
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define TMR1GE_bit                     T1CON, 6
#define T1GINV_bit                     T1CON, 7
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
#define SWDTEN_bit                     WDTCON, 0
#define WDTPS0_bit                     WDTCON, 1
#define WDTPS1_bit                     WDTCON, 2
#define WDTPS2_bit                     WDTCON, 3
#define WDTPS3_bit                     WDTCON, 4
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#define CHS3_bit                       ADCON0, 5
#define VCFG_bit                       ADCON0, 6
#define ADFM_bit                       ADCON0, 7
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
#define TRISB4_bit                     TRISB, 4
#define TRISB5_bit                     TRISB, 5
#define TRISB6_bit                     TRISB, 6
#define TRISB7_bit                     TRISB, 7
#define TRISC0_bit                     TRISC, 0
#define TRISC1_bit                     TRISC, 1
#define TRISC2_bit                     TRISC, 2
#define TRISC3_bit                     TRISC, 3
#define TRISC4_bit                     TRISC, 4
#define TRISC5_bit                     TRISC, 5
#define TRISC6_bit                     TRISC, 6
#define TRISC7_bit                     TRISC, 7
#define TMR1IE_bit                     PIE1, 0
#define TMR2IE_bit                     PIE1, 1
#define OSFIE_bit                      PIE1, 2
#define C1IE_bit                       PIE1, 3
#define C2IE_bit                       PIE1, 4
#define CCP1IE_bit                     PIE1, 5
#define ADIE_bit                       PIE1, 6
#define EEIE_bit                       PIE1, 7
#define BOR_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define SBOREN_bit                     PCON, 4
#define SCS_bit                        OSCCON, 0
#define LTS_bit                        OSCCON, 1
#define HTS_bit                        OSCCON, 2
#define OSTS_bit                       OSCCON, 3
#define IRCF0_bit                      OSCCON, 4
#define IRCF1_bit                      OSCCON, 5
#define IRCF2_bit                      OSCCON, 6
#define TUN0_bit                       OSCTUNE, 0
#define TUN1_bit                       OSCTUNE, 1
#define TUN2_bit                       OSCTUNE, 2
#define TUN3_bit                       OSCTUNE, 3
#define TUN4_bit                       OSCTUNE, 4
#define ANS0_bit                       ANSEL0, 0
#define ANS1_bit                       ANSEL0, 1
#define ANS2_bit                       ANSEL0, 2
#define ANS3_bit                       ANSEL0, 3
#define ANS4_bit                       ANSEL0, 4
#define ANS5_bit                       ANSEL0, 5
#define ANS6_bit                       ANSEL0, 6
#define ANS7_bit                       ANSEL0, 7
#define ANS8_bit                       ANSEL1, 0
#define ANS9_bit                       ANSEL1, 1
#define ANS10_bit                      ANSEL1, 2
#define ANS11_bit                      ANSEL1, 3
#define WPUA0_bit                      WPUA, 0
#define WPUA1_bit                      WPUA, 1
#define WPUA2_bit                      WPUA, 2
#define WPUA3_bit                      WPUA, 3
#define WPUA4_bit                      WPUA, 4
#define WPUA5_bit                      WPUA, 5
#define IOCA0_bit                      IOCA, 0
#define IOCA1_bit                      IOCA, 1
#define IOCA2_bit                      IOCA, 2
#define IOCA3_bit                      IOCA, 3
#define IOCA4_bit                      IOCA, 4
#define IOCA5_bit                      IOCA, 5
#define CVROE_bit                      REFCON, 1
#define VROE_bit                       REFCON, 2
#define VREN_bit                       REFCON, 3
#define VRBB_bit                       REFCON, 4
#define BGST_bit                       REFCON, 5
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define VRR_bit                        VRCON, 5
#define C2VREN_bit                     VRCON, 6
#define C1VREN_bit                     VRCON, 7
#define RD_bit                         EECON1, 0
#define WR_bit                         EECON1, 1
#define WREN_bit                       EECON1, 2
#define WRERR_bit                      EECON1, 3
#define ADCS0_bit                      ADCON1, 4
#define ADCS1_bit                      ADCON1, 5
#define ADCS2_bit                      ADCON1, 6
#define CMDLY0_bit                     PWMCON1, 0
#define CMDLY1_bit                     PWMCON1, 1
#define CMDLY2_bit                     PWMCON1, 2
#define CMDLY3_bit                     PWMCON1, 3
#define CMDLY4_bit                     PWMCON1, 4
#define COMOD0_bit                     PWMCON1, 5
#define COMOD1_bit                     PWMCON1, 6
#define OVRLP_bit                      PWMCON1, 7
#define PH1EN_bit                      PWMCON0, 0
#define PH2EN_bit                      PWMCON0, 1
#define SYNC0_bit                      PWMCON0, 2
#define SYNC1_bit                      PWMCON0, 3
#define BLANK1_bit                     PWMCON0, 4
#define BLANK2_bit                     PWMCON0, 5
#define PASEN_bit                      PWMCON0, 6
#define PRSEN_bit                      PWMCON0, 7
#define PER0_bit                       PWMCLK, 0
#define PER1_bit                       PWMCLK, 1
#define PER2_bit                       PWMCLK, 2
#define PER3_bit                       PWMCLK, 3
#define PER4_bit                       PWMCLK, 4
#define PWMP0_bit                      PWMCLK, 5
#define PWMP1_bit                      PWMCLK, 6
#define PWMASE_bit                     PWMCLK, 7
#define PH01_bit                       PWMPH1, 0
#define PH11_bit                       PWMPH1, 1
#define PH21_bit                       PWMPH1, 2
#define PH31_bit                       PWMPH1, 3
#define PH41_bit                       PWMPH1, 4
#define C1EN1_bit                      PWMPH1, 5
#define C2EN1_bit                      PWMPH1, 6
#define POL1_bit                       PWMPH1, 7
#define PH02_bit                       PWMPH2, 0
#define PH12_bit                       PWMPH2, 1
#define PH22_bit                       PWMPH2, 2
#define PH32_bit                       PWMPH2, 3
#define PH42_bit                       PWMPH2, 4
#define C1EN2_bit                      PWMPH2, 5
#define C2EN2_bit                      PWMPH2, 6
#define POL2_bit                       PWMPH2, 7
#define C1CH0_bit                      CM1CON0, 0
#define C1CH1_bit                      CM1CON0, 1
#define C1R_bit                        CM1CON0, 2
#define C1SP_bit                       CM1CON0, 3
#define C1POL_bit                      CM1CON0, 4
#define C1OE_bit                       CM1CON0, 5
#define C1OUT_bit                      CM1CON0, 6
#define C1ON_bit                       CM1CON0, 7
#define C2CH0_bit                      CM2CON0, 0
#define C2CH1_bit                      CM2CON0, 1
#define C2R_bit                        CM2CON0, 2
#define C2SP_bit                       CM2CON0, 3
#define C2POL_bit                      CM2CON0, 4
#define C2OE_bit                       CM2CON0, 5
#define C2OUT_bit                      CM2CON0, 6
#define C2ON_bit                       CM2CON0, 7
#define C2SYNC_bit                     CM2CON1, 0
#define T1GSS_bit                      CM2CON1, 1
#define MC2OUT_bit                     CM2CON1, 6
#define MC1OUT_bit                     CM2CON1, 7
#define OPA1ON_bit                     OPA1CON, 7
#define OPA2ON_bit                     OPA2CON, 7

#endif
