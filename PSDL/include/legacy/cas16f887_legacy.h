#ifndef _CAS16F887_H_
#define _CAS16F887_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#if defined(_16F884) || defined(_16F887)
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
CCPR2L                                 equ 001Bh
CCPR2H                                 equ 001Ch
CCP2CON                                equ 001Dh
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
#if defined(_16F884) || defined(_16F887)
TRISD                                  equ 0088h
#endif
TRISE                                  equ 0089h
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
SSPCON2                                equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPMSK                                 equ 0093h
SSPSTAT                                equ 0094h
WPUB                                   equ 0095h
IOCB                                   equ 0096h
VRCON                                  equ 0097h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
SPBRGH                                 equ 009Ah
PWM1CON                                equ 009Bh
ECCPAS                                 equ 009Ch
PSTRCON                                equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
WDTCON                                 equ 0105h
CM1CON0                                equ 0107h
CM2CON0                                equ 0108h
CM2CON1                                equ 0109h
EEDAT                                  equ 010Ch
EEDATA                                 equ 010Ch
EEADR                                  equ 010Dh
EEADRL                                 equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
SRCON                                  equ 0185h
BAUDCTL                                equ 0187h
ANSEL                                  equ 0188h
ANSELH                                 equ 0189h
EECON1                                 equ 018Ch
EECON2                                 equ 018Dh
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
#define RA6_bit                        PORTA, 6
#define RA7_bit                        PORTA, 7
#define RB0_bit                        PORTB, 0
#define RB1_bit                        PORTB, 1
#define RB2_bit                        PORTB, 2
#define RB3_bit                        PORTB, 3
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
#if defined(_16F884) || defined(_16F887)
#define RD0_bit                        PORTD, 0
#define RD1_bit                        PORTD, 1
#define RD2_bit                        PORTD, 2
#define RD3_bit                        PORTD, 3
#define RD4_bit                        PORTD, 4
#define RD5_bit                        PORTD, 5
#define RD6_bit                        PORTD, 6
#define RD7_bit                        PORTD, 7
#define RE0_bit                        PORTE, 0
#define RE1_bit                        PORTE, 1
#define RE2_bit                        PORTE, 2
#endif
#define RE3_bit                        PORTE, 3
#define RBIF_bit                       INTCON, 0
#define RABIF_bit                      INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define RBIE_bit                       INTCON, 3
#define RABIE_bit                      INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#define TMR2IF_bit                     PIR1, 1
#define CCP1IF_bit                     PIR1, 2
#define SSPIF_bit                      PIR1, 3
#define TXIF_bit                       PIR1, 4
#define RCIF_bit                       PIR1, 5
#define ADIF_bit                       PIR1, 6
#define CCP2IF_bit                     PIR2, 0
#define ULPWUIF_bit                    PIR2, 2
#define BCLIF_bit                      PIR2, 3
#define EEIF_bit                       PIR2, 4
#define C1IF_bit                       PIR2, 5
#define C2IF_bit                       PIR2, 6
#define OSFIF_bit                      PIR2, 7
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
#define SSPM0_bit                      SSPCON, 0
#define SSPM1_bit                      SSPCON, 1
#define SSPM2_bit                      SSPCON, 2
#define SSPM3_bit                      SSPCON, 3
#define CKP_bit                        SSPCON, 4
#define SSPEN_bit                      SSPCON, 5
#define SSPOV_bit                      SSPCON, 6
#define WCOL_bit                       SSPCON, 7
#define CCP1M0_bit                     CCP1CON, 0
#define CCP1M1_bit                     CCP1CON, 1
#define CCP1M2_bit                     CCP1CON, 2
#define CCP1M3_bit                     CCP1CON, 3
#define DC1B0_bit                      CCP1CON, 4
#define DC1B1_bit                      CCP1CON, 5
#define P1M0_bit                       CCP1CON, 6
#define P1M1_bit                       CCP1CON, 7
#define RX9D_bit                       RCSTA, 0
#define OERR_bit                       RCSTA, 1
#define FERR_bit                       RCSTA, 2
#define ADDEN_bit                      RCSTA, 3
#define CREN_bit                       RCSTA, 4
#define SREN_bit                       RCSTA, 5
#define RX9_bit                        RCSTA, 6
#define SPEN_bit                       RCSTA, 7
#define CCP2M0_bit                     CCP2CON, 0
#define CCP2M1_bit                     CCP2CON, 1
#define CCP2M2_bit                     CCP2CON, 2
#define CCP2M3_bit                     CCP2CON, 3
#define CCP2Y_bit                      CCP2CON, 4
#define CCP2X_bit                      CCP2CON, 5
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#define CHS3_bit                       ADCON0, 5
#define ADCS0_bit                      ADCON0, 6
#define ADCS1_bit                      ADCON0, 7
#define PS0_bit                        OPTION, 0
#define PS1_bit                        OPTION, 1
#define PS2_bit                        OPTION, 2
#define PSA_bit                        OPTION, 3
#define T0SE_bit                       OPTION, 4
#define T0CS_bit                       OPTION, 5
#define INTEDG_bit                     OPTION, 6
#define RBPU_bit                       OPTION, 7
#define RABPU_bit                      OPTION, 7
#define TRISA0_bit                     TRISA, 0
#define TRISA1_bit                     TRISA, 1
#define TRISA2_bit                     TRISA, 2
#define TRISA3_bit                     TRISA, 3
#define TRISA4_bit                     TRISA, 4
#define TRISA5_bit                     TRISA, 5
#define TRISA6_bit                     TRISA, 6
#define TRISA7_bit                     TRISA, 7
#define TRISB0_bit                     TRISB, 0
#define TRISB1_bit                     TRISB, 1
#define TRISB2_bit                     TRISB, 2
#define TRISB3_bit                     TRISB, 3
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
#if defined(_16F884) || defined(_16F887)
#define TRISD0_bit                     TRISD, 0
#define TRISD1_bit                     TRISD, 1
#define TRISD2_bit                     TRISD, 2
#define TRISD3_bit                     TRISD, 3
#define TRISD4_bit                     TRISD, 4
#define TRISD5_bit                     TRISD, 5
#define TRISD6_bit                     TRISD, 6
#define TRISD7_bit                     TRISD, 7
#define TRISE0_bit                     TRISE, 0
#define TRISE1_bit                     TRISE, 1
#define TRISE2_bit                     TRISE, 2
#endif
#define TRISE3_bit                     TRISE, 3
#define TMR1IE_bit                     PIE1, 0
#define TMR2IE_bit                     PIE1, 1
#define CCP1IE_bit                     PIE1, 2
#define SSPIE_bit                      PIE1, 3
#define TXIE_bit                       PIE1, 4
#define RCIE_bit                       PIE1, 5
#define ADIE_bit                       PIE1, 6
#define CCP2IE_bit                     PIE2, 0
#define ULPWUIE_bit                    PIE2, 2
#define BCLIE_bit                      PIE2, 3
#define EEIE_bit                       PIE2, 4
#define C1IE_bit                       PIE2, 5
#define C2IE_bit                       PIE2, 6
#define OSFIE_bit                      PIE2, 7
#define BOR_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define SBOREN_bit                     PCON, 4
#define ULPWUE_bit                     PCON, 5
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
#define SEN_bit                        SSPCON2, 0
#define RSEN_bit                       SSPCON2, 1
#define PEN_bit                        SSPCON2, 2
#define RCEN_bit                       SSPCON2, 3
#define ACKEN_bit                      SSPCON2, 4
#define ACKDT_bit                      SSPCON2, 5
#define ACKSTAT_bit                    SSPCON2, 6
#define GCEN_bit                       SSPCON2, 7
#define BF_bit                         SSPSTAT, 0
#define UA_bit                         SSPSTAT, 1
#define RW_bit                         SSPSTAT, 2
#define START_bit                      SSPSTAT, 3
#define STOP_bit                       SSPSTAT, 4
#define DA_bit                         SSPSTAT, 5
#define CKE_bit                        SSPSTAT, 6
#define SMP_bit                        SSPSTAT, 7
#define WPUB0_bit                      WPUB, 0
#define WPUB1_bit                      WPUB, 1
#define WPUB2_bit                      WPUB, 2
#define WPUB3_bit                      WPUB, 3
#define WPUB4_bit                      WPUB, 4
#define WPUB5_bit                      WPUB, 5
#define WPUB6_bit                      WPUB, 6
#define WPUB7_bit                      WPUB, 7
#define IOCB0_bit                      IOCB, 0
#define IOCB1_bit                      IOCB, 1
#define IOCB2_bit                      IOCB, 2
#define IOCB3_bit                      IOCB, 3
#define IOCB4_bit                      IOCB, 4
#define IOCB5_bit                      IOCB, 5
#define IOCB6_bit                      IOCB, 6
#define IOCB7_bit                      IOCB, 7
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define VRSS_bit                       VRCON, 4
#define VRR_bit                        VRCON, 5
#define VROE_bit                       VRCON, 6
#define VREN_bit                       VRCON, 7
#define TX9D_bit                       TXSTA, 0
#define TRMT_bit                       TXSTA, 1
#define BRGH_bit                       TXSTA, 2
#define SENDB_bit                      TXSTA, 3
#define SYNC_bit                       TXSTA, 4
#define TXEN_bit                       TXSTA, 5
#define TX9_bit                        TXSTA, 6
#define CSRC_bit                       TXSTA, 7
#define BRG0_bit                       SPBRG, 0
#define BRG1_bit                       SPBRG, 1
#define BRG2_bit                       SPBRG, 2
#define BRG3_bit                       SPBRG, 3
#define BRG4_bit                       SPBRG, 4
#define BRG5_bit                       SPBRG, 5
#define BRG6_bit                       SPBRG, 6
#define BRG7_bit                       SPBRG, 7
#define BRG8_bit                       SPBRGH, 0
#define BRG9_bit                       SPBRGH, 1
#define BRG10_bit                      SPBRGH, 2
#define BRG11_bit                      SPBRGH, 3
#define BRG12_bit                      SPBRGH, 4
#define BRG13_bit                      SPBRGH, 5
#define BRG14_bit                      SPBRGH, 6
#define BRG15_bit                      SPBRGH, 7
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
#define STRA_bit                       PSTRCON, 0
#define STRB_bit                       PSTRCON, 1
#define STRC_bit                       PSTRCON, 2
#define STRD_bit                       PSTRCON, 3
#define STRSYNC_bit                    PSTRCON, 4
#define VCFG0_bit                      ADCON1, 4
#define VCFG1_bit                      ADCON1, 5
#define ADFM_bit                       ADCON1, 7
#define SWDTEN_bit                     WDTCON, 0
#define WDTPS0_bit                     WDTCON, 1
#define WDTPS1_bit                     WDTCON, 2
#define WDTPS2_bit                     WDTCON, 3
#define WDTPS3_bit                     WDTCON, 4
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
#define C2RSEL_bit                     CM2CON1, 4
#define C1RSEL_bit                     CM2CON1, 5
#define MC2OUT_bit                     CM2CON1, 6
#define MC1OUT_bit                     CM2CON1, 7
#define FVREN_bit                      SRCON, 0
#define PULSR_bit                      SRCON, 2
#define PULSS_bit                      SRCON, 3
#define C2REN_bit                      SRCON, 4
#define C1SEN_bit                      SRCON, 5
#define SR0_bit                        SRCON, 6
#define SR1_bit                        SRCON, 7
#define ABDEN_bit                      BAUDCTL, 0
#define WUE_bit                        BAUDCTL, 1
#define BRG16_bit                      BAUDCTL, 3
#define SCKP_bit                       BAUDCTL, 4
#define RCIDL_bit                      BAUDCTL, 6
#define ABDOVF_bit                     BAUDCTL, 7
#define ANS0_bit                       ANSEL, 0
#define ANS1_bit                       ANSEL, 1
#define ANS2_bit                       ANSEL, 2
#define ANS3_bit                       ANSEL, 3
#define ANS4_bit                       ANSEL, 4
#if defined(_16F884) || defined(_16F887)
#define ANS5_bit                       ANSEL, 5
#define ANS6_bit                       ANSEL, 6
#define ANS7_bit                       ANSEL, 7
#endif
#define ANS8_bit                       ANSELH, 0
#define ANS9_bit                       ANSELH, 1
#define ANS10_bit                      ANSELH, 2
#define ANS11_bit                      ANSELH, 3
#define ANS12_bit                      ANSELH, 4
#define ANS13_bit                      ANSELH, 5
#define RD_bit                         EECON1, 0
#define WR_bit                         EECON1, 1
#define WREN_bit                       EECON1, 2
#define WRERR_bit                      EECON1, 3
#define EEPGD_bit                      EECON1, 7
#if defined(_16F882)
#endif

#endif
