#ifndef _CAS16F7X7_H_
#define _CAS16F7X7_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#if defined(_16F747) || defined(_16F777)
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
#if defined(_16F747) || defined(_16F777)
TRISD                                  equ 0088h
TRISE                                  equ 0089h
#endif
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
SSPCON2                                equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
CCPR3L                                 equ 0095h
CCPR3H                                 equ 0096h
CCP3CON                                equ 0097h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
ADCON2                                 equ 009Bh
CMCON                                  equ 009Ch
CVRCON                                 equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
WDTCON                                 equ 0105h
LVDCON                                 equ 0109h
EEDATL                                 equ 010Ch
EEDATA                                 equ 010Ch
EEADRL                                 equ 010Dh
EEADR                                  equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
EECON1                                 equ 018Ch
PMDATA                                 equ 010Ch
PMDATL                                 equ 010Ch
PMADRL                                 equ 010Dh
PMDATH                                 equ 010Eh
PMADRH                                 equ 010Fh
PMCON1                                 equ 018Ch
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
#if defined(_16F747) || defined(_16F777)
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
#define INT0IF_bit                     INTCON, 1
#define TMR0IF_bit                     INTCON, 2
#define RBIE_bit                       INTCON, 3
#define INT0IE_bit                     INTCON, 4
#define TMR0IE_bit                     INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#define TMR2IF_bit                     PIR1, 1
#define CCP1IF_bit                     PIR1, 2
#define SSPIF_bit                      PIR1, 3
#define TXIF_bit                       PIR1, 4
#define RCIF_bit                       PIR1, 5
#define ADIF_bit                       PIR1, 6
#if defined(_16F747) || defined(_16F777)
#define PSPIF_bit                      PIR1, 7
#endif
#define CCP2IF_bit                     PIR2, 0
#define CCP3IF_bit                     PIR2, 1
#define BCLIF_bit                      PIR2, 3
#define LVDIF_bit                      PIR2, 5
#define CMIF_bit                       PIR2, 6
#define OSFIF_bit                      PIR2, 7
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define T1RUN_bit                      T1CON, 6
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
#define CCP1Y_bit                      CCP1CON, 4
#define CCP1X_bit                      CCP1CON, 5
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
#define CHS3_bit                       ADCON0, 1
#define GODONE_bit                     ADCON0, 2
#define CHS0_bit                       ADCON0, 3
#define CHS1_bit                       ADCON0, 4
#define CHS2_bit                       ADCON0, 5
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
#if defined(_16F747) || defined(_16F777)
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
#define PSPMODE_bit                    TRISE, 4
#define IBOV_bit                       TRISE, 5
#define OBF_bit                        TRISE, 6
#define IBF_bit                        TRISE, 7
#endif
#define TMR1IE_bit                     PIE1, 0
#define TMR2IE_bit                     PIE1, 1
#define CCP1IE_bit                     PIE1, 2
#define SSPIE_bit                      PIE1, 3
#define TXIE_bit                       PIE1, 4
#define RCIE_bit                       PIE1, 5
#define ADIE_bit                       PIE1, 6
#if defined(_16F747) || defined(_16F777)
#define PSPIE_bit                      PIE1, 7
#endif
#define CCP2IE_bit                     PIE2, 0
#define CCP3IE_bit                     PIE2, 1
#define BCLIE_bit                      PIE2, 3
#define LVDIE_bit                      PIE2, 5
#define CMIE_bit                       PIE2, 6
#define OSFIE_bit                      PIE2, 7
#define BOR_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define SBOREN_bit                     PCON, 2
#define SCS0_bit                       OSCCON, 0
#define SCS1_bit                       OSCCON, 1
#define IOFS_bit                       OSCCON, 2
#define OSTS_bit                       OSCCON, 3
#define IRCF0_bit                      OSCCON, 4
#define IRCF1_bit                      OSCCON, 5
#define IRCF2_bit                      OSCCON, 6
#define TUN0_bit                       OSCTUNE, 0
#define TUN1_bit                       OSCTUNE, 1
#define TUN2_bit                       OSCTUNE, 2
#define TUN3_bit                       OSCTUNE, 3
#define TUN4_bit                       OSCTUNE, 4
#define TUN5_bit                       OSCTUNE, 5
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
#define CCP3M0_bit                     CCP3CON, 0
#define CCP3M1_bit                     CCP3CON, 1
#define CCP3M2_bit                     CCP3CON, 2
#define CCP3M3_bit                     CCP3CON, 3
#define CCP3Y_bit                      CCP3CON, 4
#define CCP3X_bit                      CCP3CON, 5
#define TX9D_bit                       TXSTA, 0
#define TRMT_bit                       TXSTA, 1
#define BRGH_bit                       TXSTA, 2
#define SYNC_bit                       TXSTA, 4
#define TXEN_bit                       TXSTA, 5
#define TX9_bit                        TXSTA, 6
#define CSRC_bit                       TXSTA, 7
#define ACQT0_bit                      ADCON2, 3
#define ACQT1_bit                      ADCON2, 4
#define ACQT2_bit                      ADCON2, 5
#define CM0_bit                        CMCON, 0
#define CM1_bit                        CMCON, 1
#define CM2_bit                        CMCON, 2
#define CIS_bit                        CMCON, 3
#define C1INV_bit                      CMCON, 4
#define C2INV_bit                      CMCON, 5
#define C1OUT_bit                      CMCON, 6
#define C2OUT_bit                      CMCON, 7
#define CVR0_bit                       CVRCON, 0
#define CVR1_bit                       CVRCON, 1
#define CVR2_bit                       CVRCON, 2
#define CVR3_bit                       CVRCON, 3
#define CVRR_bit                       CVRCON, 5
#define CVROE_bit                      CVRCON, 6
#define CVREN_bit                      CVRCON, 7
#define PCFG0_bit                      ADCON1, 0
#define PCFG1_bit                      ADCON1, 1
#define PCFG2_bit                      ADCON1, 2
#define PCFG3_bit                      ADCON1, 3
#define VCFG0_bit                      ADCON1, 4
#define VCFG1_bit                      ADCON1, 5
#define ADCS2_bit                      ADCON1, 6
#define ADFM_bit                       ADCON1, 7
#define SWDTEN_bit                     WDTCON, 0
#define WDTPS0_bit                     WDTCON, 1
#define WDTPS1_bit                     WDTCON, 2
#define WDTPS2_bit                     WDTCON, 3
#define WDTPS3_bit                     WDTCON, 4
#define LVDL0_bit                      LVDCON, 0
#define LVDL1_bit                      LVDCON, 1
#define LVDL2_bit                      LVDCON, 2
#define LVDL3_bit                      LVDCON, 3
#define LVDEN_bit                      LVDCON, 4
#define IRVST_bit                      LVDCON, 5
#define RD_bit                         EECON1, 0

#endif
