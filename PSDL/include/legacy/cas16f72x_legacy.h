#ifndef _CAS16F72X_H_
#define _CAS16F72X_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
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
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
TRISD                                  equ 0088h
#endif
TRISE                                  equ 0089h
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
T1GCON                                 equ 008Fh
OSCCON                                 equ 0090h
OSCTUNE                                equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPMSK                                 equ 0093h
SSPSTAT                                equ 0094h
WPUB                                   equ 0095h
IOCB                                   equ 0096h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
APFCON                                 equ 009Ch
FVRCON                                 equ 009Dh
ADCON1                                 equ 009Fh
CPSCON0                                equ 0108h
CPSCON1                                equ 0109h
PMDATL                                 equ 010Ch
EEDATA                                 equ 010Ch
PMADRL                                 equ 010Dh
EEADR                                  equ 010Dh
PMDATH                                 equ 010Eh
EEDATH                                 equ 010Eh
PMADRH                                 equ 010Fh
EEADRH                                 equ 010Fh
ANSELA                                 equ 0185h
ANSELB                                 equ 0186h
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
ANSELD                                 equ 0188h
ANSELE                                 equ 0189h
#endif
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
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
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
#define TMR1GIF_bit                    PIR1, 7
#define CCP2IF_bit                     PIR2, 0
#define TMR1ON_bit                     T1CON, 0
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define TMR1CS0_bit                    T1CON, 6
#define TMR1CS1_bit                    T1CON, 7
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
#define DC2B0_bit                      CCP2CON, 4
#define DC2B1_bit                      CCP2CON, 5
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define ADGO_bit                       ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#define CHS3_bit                       ADCON0, 5
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
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
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
#define TMR1GIE_bit                    PIE1, 7
#define CCP2IE_bit                     PIE2, 0
#define BOR_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define T1GSS0_bit                     T1GCON, 0
#define T1GSS1_bit                     T1GCON, 1
#define T1GVAL_bit                     T1GCON, 2
#define T1GGO_bit                      T1GCON, 3
#define T1GSPM_bit                     T1GCON, 4
#define T1GTM_bit                      T1GCON, 5
#define T1GPOL_bit                     T1GCON, 6
#define TMR1GE_bit                     T1GCON, 7
#define ICSS_bit                       OSCCON, 2
#define ICSL_bit                       OSCCON, 3
#define IRCF0_bit                      OSCCON, 4
#define IRCF1_bit                      OSCCON, 5
#define TUN0_bit                       OSCTUNE, 0
#define TUN1_bit                       OSCTUNE, 1
#define TUN2_bit                       OSCTUNE, 2
#define TUN3_bit                       OSCTUNE, 3
#define TUN4_bit                       OSCTUNE, 4
#define TUN5_bit                       OSCTUNE, 5
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
#define TX9D_bit                       TXSTA, 0
#define TRMT_bit                       TXSTA, 1
#define BRGH_bit                       TXSTA, 2
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
#define CCP2SEL_bit                    APFCON, 0
#define SSSEL_bit                      APFCON, 1
#define ADFVR0_bit                     FVRCON, 0
#define ADFVR1_bit                     FVRCON, 1
#define FVREN_bit                      FVRCON, 6
#define FVRRDY_bit                     FVRCON, 7
#define ADREF0_bit                     ADCON1, 0
#define ADREF1_bit                     ADCON1, 1
#define ADCS0_bit                      ADCON1, 4
#define ADCS1_bit                      ADCON1, 5
#define ADCS2_bit                      ADCON1, 6
#define T0XCS_bit                      CPSCON0, 0
#define CPSOUT_bit                     CPSCON0, 1
#define CPSRNG0_bit                    CPSCON0, 2
#define CPSRNG1_bit                    CPSCON0, 3
#define CPSON_bit                      CPSCON0, 7
#define CPSCH0_bit                     CPSCON1, 0
#define CPSCH1_bit                     CPSCON1, 1
#define CPSCH2_bit                     CPSCON1, 2
#define CPSCH3_bit                     CPSCON1, 3
#define ANSA0_bit                      ANSELA, 0
#define ANSA1_bit                      ANSELA, 1
#define ANSA2_bit                      ANSELA, 2
#define ANSA3_bit                      ANSELA, 3
#define ANSA4_bit                      ANSELA, 4
#define ANSA5_bit                      ANSELA, 5
#define ANSB0_bit                      ANSELB, 0
#define ANSB1_bit                      ANSELB, 1
#define ANSB2_bit                      ANSELB, 2
#define ANSB3_bit                      ANSELB, 3
#define ANSB4_bit                      ANSELB, 4
#define ANSB5_bit                      ANSELB, 5
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
#define ANSD0_bit                      ANSELD, 0
#define ANSD1_bit                      ANSELD, 1
#define ANSD2_bit                      ANSELD, 2
#define ANSD3_bit                      ANSELD, 3
#define ANSD4_bit                      ANSELD, 4
#define ANSD5_bit                      ANSELD, 5
#define ANSD6_bit                      ANSELD, 6
#define ANSD7_bit                      ANSELD, 7
#define ANSE0_bit                      ANSELE, 0
#define ANSE1_bit                      ANSELE, 1
#define ANSE2_bit                      ANSELE, 2
#endif
#define RD_bit                         PMCON1, 0

#endif
