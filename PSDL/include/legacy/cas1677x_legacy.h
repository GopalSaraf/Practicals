#ifndef _CAS1677X_H_
#define _CAS1677X_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
PORTC                                  equ 0007h
#endif
#if defined(_16C774) || defined(_16C765)
PORTD                                  equ 0008h
PORTE                                  equ 0009h
#endif
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
PIR2                                   equ 000Dh
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
TMR2                                   equ 0011h
T2CON                                  equ 0012h
#if !defined(_16C745) && !defined(_16C765)
SSPBUF                                 equ 0013h
SSPCON                                 equ 0014h
#endif
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
RCSTA                                  equ 0018h
TXREG                                  equ 0019h
RCREG                                  equ 001Ah
CCPR2L                                 equ 001Bh
CCPR2H                                 equ 001Ch
CCP2CON                                equ 001Dh
#endif
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
TRISC                                  equ 0087h
#endif
#if defined(_16C774) || defined(_16C765)
TRISD                                  equ 0088h
TRISE                                  equ 0089h
#endif
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
#if !defined(_16C745) && !defined(_16C765)
SSPCON2                                equ 0091h
#endif
PR2                                    equ 0092h
#if !defined(_16C745) && !defined(_16C765)
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
WPUB                                   equ 0095h
IOCB                                   equ 0096h
P1DEL                                  equ 0097h
#endif
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
#endif
#if !defined(_16C745) && !defined(_16C765)
REFCON                                 equ 009Bh
LVDCON                                 equ 009Ch
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
ANSEL                                  equ 009Dh
#endif
ADRESL                                 equ 009Eh
#endif
ADCON1                                 equ 009Fh
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
PMDATL                                 equ 010Ch
PMADRL                                 equ 010Dh
PMDATH                                 equ 010Eh
PMADRH                                 equ 010Fh
#endif
#if defined(_16C770)
PMCON1                                 equ 018Ch
#define RD_bit                         PMCON1, 0
#endif
#if defined(_16C745) || defined(_16C765)
UIR                                    equ 0190h
UIE                                    equ 0191h
UEIR                                   equ 0192h
UEIE                                   equ 0193h
USTAT                                  equ 0194h
UCTRL                                  equ 0195h
UADDR                                  equ 0196h
USWSTAT                                equ 0197h
UEP0                                   equ 0198h
UEP1                                   equ 0199h
UEP2                                   equ 019Ah
BD0OST                                 equ 01A0h
BD1OST                                 equ 01A8h
BD2OST                                 equ 01B0h
BD0IST                                 equ 01A4h
BD1IST                                 equ 01ACh
BD2IST                                 equ 01B4h
BD0OBC                                 equ 01A1h
BD1OBC                                 equ 01A9h
BD2OBC                                 equ 01B1h
BD0IBC                                 equ 01A5h
BD1IBC                                 equ 01ADh
BD2IBC                                 equ 01B5h
USBMEM                                 equ 01B8h
#endif
#define TMR07_bit                      TMR0, 7
#define TMR06_bit                      TMR0, 6
#define TMR05_bit                      TMR0, 5
#define TMR04_bit                      TMR0, 4
#define TMR03_bit                      TMR0, 3
#define TMR02_bit                      TMR0, 2
#define TMR01_bit                      TMR0, 1
#define TMR00_bit                      TMR0, 0
#define PCL7_bit                       PCL, 7
#define PCL6_bit                       PCL, 6
#define PCL5_bit                       PCL, 5
#define PCL4_bit                       PCL, 4
#define PCL3_bit                       PCL, 3
#define PCL2_bit                       PCL, 2
#define PCL1_bit                       PCL, 1
#define PCL0_bit                       PCL, 0
#define IRP_bit                        STATUS, 7
#define RP1_bit                        STATUS, 6
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define RA7_bit                        PORTA, 7
#define RA6_bit                        PORTA, 6
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define RA5_bit                        PORTA, 5
#endif
#define RA4_bit                        PORTA, 4
#define RA3_bit                        PORTA, 3
#define RA2_bit                        PORTA, 2
#define RA1_bit                        PORTA, 1
#define RA0_bit                        PORTA, 0
#define RB7_bit                        PORTB, 7
#define RB6_bit                        PORTB, 6
#define RB5_bit                        PORTB, 5
#define RB4_bit                        PORTB, 4
#define RB3_bit                        PORTB, 3
#define RB2_bit                        PORTB, 2
#define RB1_bit                        PORTB, 1
#define RB0_bit                        PORTB, 0
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define RC7_bit                        PORTC, 7
#define RC6_bit                        PORTC, 6
#if !defined(_16C745) && !defined(_16C765)
#define RC5_bit                        PORTC, 5
#define RC4_bit                        PORTC, 4
#define RC3_bit                        PORTC, 3
#endif
#define RC2_bit                        PORTC, 2
#define RC1_bit                        PORTC, 1
#define RC0_bit                        PORTC, 0
#endif
#if defined(_16C774) || defined(_16C765)
#define RD7_bit                        PORTD, 7
#define RD6_bit                        PORTD, 6
#define RD5_bit                        PORTD, 5
#define RD4_bit                        PORTD, 4
#define RD3_bit                        PORTD, 3
#define RD2_bit                        PORTD, 2
#define RD1_bit                        PORTD, 1
#define RD0_bit                        PORTD, 0
#define RE2_bit                        PORTE, 2
#define RE1_bit                        PORTE, 1
#define RE0_bit                        PORTE, 0
#endif
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define INTE_bit                       INTCON, 4
#define RBIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define INTF_bit                       INTCON, 1
#define RBIF_bit                       INTCON, 0
#if defined(_16C774) || defined(_16C765)
#define PSPIF_bit                      PIR1, 7
#endif
#define ADIF_bit                       PIR1, 6
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define RCIF_bit                       PIR1, 5
#define TXIF_bit                       PIR1, 4
#endif
#if defined(_16C745) || defined(_16C765)
#define USBIF_bit                      PIR1, 3
#endif
#if !defined(_16C745) && !defined(_16C765)
#define SSPIF_bit                      PIR1, 3
#endif
#define CCP1IF_bit                     PIR1, 2
#define TMR2IF_bit                     PIR1, 1
#define TMR1IF_bit                     PIR1, 0
#if !defined(_16C745) && !defined(_16C765)
#define LVDIF_bit                      PIR2, 7
#define BCLIF_bit                      PIR2, 3
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define CCP2IF_bit                     PIR2, 0
#endif
#define TMR1L7_bit                     TMR1L, 7
#define TMR1L6_bit                     TMR1L, 6
#define TMR1L5_bit                     TMR1L, 5
#define TMR1L4_bit                     TMR1L, 4
#define TMR1L3_bit                     TMR1L, 3
#define TMR1L2_bit                     TMR1L, 2
#define TMR1L1_bit                     TMR1L, 1
#define TMR1L0_bit                     TMR1L, 0
#define TMR1H7_bit                     TMR1H, 7
#define TMR1H6_bit                     TMR1H, 6
#define TMR1H5_bit                     TMR1H, 5
#define TMR1H4_bit                     TMR1H, 4
#define TMR1H3_bit                     TMR1H, 3
#define TMR1H2_bit                     TMR1H, 2
#define TMR1H1_bit                     TMR1H, 1
#define TMR1H0_bit                     TMR1H, 0
#define TMR27_bit                      TMR2, 7
#define TMR26_bit                      TMR2, 6
#define TMR25_bit                      TMR2, 5
#define TMR24_bit                      TMR2, 4
#define TMR23_bit                      TMR2, 3
#define TMR22_bit                      TMR2, 2
#define TMR21_bit                      TMR2, 1
#define TMR20_bit                      TMR2, 0
#define T1CKPS1_bit                    T1CON, 5
#define T1CKPS0_bit                    T1CON, 4
#define T1OSCEN_bit                    T1CON, 3
#define T1SYNC_bit                     T1CON, 2
#define TMR1CS_bit                     T1CON, 1
#define TMR1ON_bit                     T1CON, 0
#define TOUTPS3_bit                    T2CON, 6
#define TOUTPS2_bit                    T2CON, 5
#define TOUTPS1_bit                    T2CON, 4
#define TOUTPS0_bit                    T2CON, 3
#define TMR2ON_bit                     T2CON, 2
#define T2CKPS1_bit                    T2CON, 1
#define T2CKPS0_bit                    T2CON, 0
#if !defined(_16C745) && !defined(_16C765)
#define SSPBUF7_bit                    SSPBUF, 7
#define SSPBUF6_bit                    SSPBUF, 6
#define SSPBUF5_bit                    SSPBUF, 5
#define SSPBUF4_bit                    SSPBUF, 4
#define SSPBUF3_bit                    SSPBUF, 3
#define SSPBUF2_bit                    SSPBUF, 2
#define SSPBUF1_bit                    SSPBUF, 1
#define SSPBUF0_bit                    SSPBUF, 0
#define WCOL_bit                       SSPCON, 7
#define SSPOV_bit                      SSPCON, 6
#define SSPEN_bit                      SSPCON, 5
#define CKP_bit                        SSPCON, 4
#define SSPM3_bit                      SSPCON, 3
#define SSPM2_bit                      SSPCON, 2
#define SSPM1_bit                      SSPCON, 1
#define SSPM0_bit                      SSPCON, 0
#endif
#define CCPR1L7_bit                    CCPR1L, 7
#define CCPR1L6_bit                    CCPR1L, 6
#define CCPR1L5_bit                    CCPR1L, 5
#define CCPR1L4_bit                    CCPR1L, 4
#define CCPR1L3_bit                    CCPR1L, 3
#define CCPR1L2_bit                    CCPR1L, 2
#define CCPR1L1_bit                    CCPR1L, 1
#define CCPR1L0_bit                    CCPR1L, 0
#define CCPR1H7_bit                    CCPR1H, 7
#define CCPR1H6_bit                    CCPR1H, 6
#define CCPR1H5_bit                    CCPR1H, 5
#define CCPR1H4_bit                    CCPR1H, 4
#define CCPR1H3_bit                    CCPR1H, 3
#define CCPR1H2_bit                    CCPR1H, 2
#define CCPR1H1_bit                    CCPR1H, 1
#define CCPR1H0_bit                    CCPR1H, 0
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C745) || defined(_16C765)
#if !defined(_16C745) && !defined(_16C765)
#define PWM1M1_bit                     CCP1CON, 7
#define PWM1M0_bit                     CCP1CON, 6
#endif
#define DC1B1_bit                      CCP1CON, 5
#define DC1B0_bit                      CCP1CON, 4
#endif
#if defined(_16C773) || defined(_16C774)
#define CCP1X_bit                      CCP1CON, 5
#define CCP1Y_bit                      CCP1CON, 4
#endif
#define CCP1M3_bit                     CCP1CON, 3
#define CCP1M2_bit                     CCP1CON, 2
#define CCP1M1_bit                     CCP1CON, 1
#define CCP1M0_bit                     CCP1CON, 0
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define SPEN_bit                       RCSTA, 7
#define RX9_bit                        RCSTA, 6
#define SREN_bit                       RCSTA, 5
#define CREN_bit                       RCSTA, 4
#if !defined(_16C745) && !defined(_16C765)
#define ADDEN_bit                      RCSTA, 3
#endif
#define FERR_bit                       RCSTA, 2
#define OERR_bit                       RCSTA, 1
#define RX9D_bit                       RCSTA, 0
#if !defined(_16C745) && !defined(_16C765)
#define CCP2X_bit                      CCP2CON, 5
#define CCP2Y_bit                      CCP2CON, 4
#endif
#if defined(_16C745) || defined(_16C765)
#define DC2B1_bit                      CCP2CON, 5
#define DC2B0_bit                      CCP2CON, 4
#endif
#define CCP2M3_bit                     CCP2CON, 3
#define CCP2M2_bit                     CCP2CON, 2
#define CCP2M1_bit                     CCP2CON, 1
#define CCP2M0_bit                     CCP2CON, 0
#endif
#define ADCS1_bit                      ADCON0, 7
#define ADCS0_bit                      ADCON0, 6
#define CHS2_bit                       ADCON0, 5
#define CHS1_bit                       ADCON0, 4
#define CHS0_bit                       ADCON0, 3
#define ADGO_bit                       ADCON0, 2
#define GODONE_bit                     ADCON0, 2
#if !defined(_16C745) && !defined(_16C765)
#define CHS3_bit                       ADCON0, 1
#endif
#define ADON_bit                       ADCON0, 0
#define ADRESH7_bit                    ADRESH, 7
#define ADRESH6_bit                    ADRESH, 6
#define ADRESH5_bit                    ADRESH, 5
#define ADRESH4_bit                    ADRESH, 4
#define ADRESH3_bit                    ADRESH, 3
#define ADRESH2_bit                    ADRESH, 2
#define ADRESH1_bit                    ADRESH, 1
#define ADRESH0_bit                    ADRESH, 0
#define RBPU_bit                       OPTION, 7
#define INTEDG_bit                     OPTION, 6
#define T0CS_bit                       OPTION, 5
#define T0SE_bit                       OPTION, 4
#define PSA_bit                        OPTION, 3
#define PS2_bit                        OPTION, 2
#define PS1_bit                        OPTION, 1
#define PS0_bit                        OPTION, 0
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define TRISA7_bit                     TRISA, 7
#define TRISA6_bit                     TRISA, 6
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define TRISA5_bit                     TRISA, 5
#endif
#define TRISA4_bit                     TRISA, 4
#define TRISA3_bit                     TRISA, 3
#define TRISA2_bit                     TRISA, 2
#define TRISA1_bit                     TRISA, 1
#define TRISA0_bit                     TRISA, 0
#define TRISB7_bit                     TRISB, 7
#define TRISB6_bit                     TRISB, 6
#define TRISB5_bit                     TRISB, 5
#define TRISB4_bit                     TRISB, 4
#define TRISB3_bit                     TRISB, 3
#define TRISB2_bit                     TRISB, 2
#define TRISB1_bit                     TRISB, 1
#define TRISB0_bit                     TRISB, 0
#if defined(_16C773) || defined(_16C774)
#define TRISC7_bit                     TRISC, 7
#define TRISC6_bit                     TRISC, 6
#if !defined(_16C745) && !defined(_16C765)
#define TRISC5_bit                     TRISC, 5
#define TRISC4_bit                     TRISC, 4
#define TRISC3_bit                     TRISC, 3
#endif
#define TRISC2_bit                     TRISC, 2
#define TRISC1_bit                     TRISC, 1
#define TRISC0_bit                     TRISC, 0
#endif
#if defined(_16C774) || defined(_16C765)
#define TRISD7_bit                     TRISD, 7
#define TRISD6_bit                     TRISD, 6
#define TRISD5_bit                     TRISD, 5
#define TRISD4_bit                     TRISD, 4
#define TRISD3_bit                     TRISD, 3
#define TRISD2_bit                     TRISD, 2
#define TRISD1_bit                     TRISD, 1
#define TRISD0_bit                     TRISD, 0
#define IBF_bit                        TRISE, 7
#define OBF_bit                        TRISE, 6
#define IBOV_bit                       TRISE, 5
#define PSPMODE_bit                    TRISE, 4
#define TRISE2_bit                     TRISE, 2
#define TRISE1_bit                     TRISE, 1
#define TRISE0_bit                     TRISE, 0
#endif
#if defined(_16C774) || defined(_16C765)
#define PSPIE_bit                      PIE1, 7
#endif
#define ADIE_bit                       PIE1, 6
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define RCIE_bit                       PIE1, 5
#define TXIE_bit                       PIE1, 4
#endif
#if defined(_16C745) || defined(_16C765)
#define USBIE_bit                      PIE1, 3
#endif
#if !defined(_16C745) && !defined(_16C765)
#define SSPIE_bit                      PIE1, 3
#endif
#define CCP1IE_bit                     PIE1, 2
#define TMR2IE_bit                     PIE1, 1
#define TMR1IE_bit                     PIE1, 0
#if !defined(_16C774) && !defined(_16C765)
#define LVDIE_bit                      PIE2, 7
#define BCLIE_bit                      PIE2, 3
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define CCP2IE_bit                     PIE2, 0
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define OSCF_bit                       PCON, 3
#endif
#define POR_bit                        PCON, 1
#define BOR_bit                        PCON, 0
#if !defined(_16C745) && !defined(_16C765)
#define GCEN_bit                       SSPCON2, 7
#define ACKSTAT_bit                    SSPCON2, 6
#define ACKDT_bit                      SSPCON2, 5
#define ACKEN_bit                      SSPCON2, 4
#define RCEN_bit                       SSPCON2, 3
#define PEN_bit                        SSPCON2, 2
#define RSEN_bit                       SSPCON2, 1
#define SEN_bit                        SSPCON2, 0
#define SMP_bit                        SSPSTAT, 7
#define CKE_bit                        SSPSTAT, 6
#define DA_bit                         SSPSTAT, 5
#define STOP_bit                       SSPSTAT, 4
#define START_bit                      SSPSTAT, 3
#define RW_bit                         SSPSTAT, 2
#define UA_bit                         SSPSTAT, 1
#define BF_bit                         SSPSTAT, 0
#ifdef __STAT_BACKWARD_COMPATIBILITY
#endif
#endif
#define PR27_bit                       PR2, 7
#define PR26_bit                       PR2, 6
#define PR25_bit                       PR2, 5
#define PR24_bit                       PR2, 4
#define PR23_bit                       PR2, 3
#define PR22_bit                       PR2, 2
#define PR21_bit                       PR2, 1
#define PR20_bit                       PR2, 0
#if !defined(_16C745) && !defined(_16C765)
#define SSPADD7_bit                    SSPADD, 7
#define SSPADD6_bit                    SSPADD, 6
#define SSPADD5_bit                    SSPADD, 5
#define SSPADD4_bit                    SSPADD, 4
#define SSPADD3_bit                    SSPADD, 3
#define SSPADD2_bit                    SSPADD, 2
#define SSPADD1_bit                    SSPADD, 1
#define SSPADD0_bit                    SSPADD, 0
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define WPUB7_bit                      WPUB, 7
#define WPUB6_bit                      WPUB, 6
#define WPUB5_bit                      WPUB, 5
#define WPUB4_bit                      WPUB, 4
#define WPUB3_bit                      WPUB, 3
#define WPUB2_bit                      WPUB, 2
#define WPUB1_bit                      WPUB, 1
#define WPUB0_bit                      WPUB, 0
#define IOCB7_bit                      IOCB, 7
#define IOCB6_bit                      IOCB, 6
#define IOCB5_bit                      IOCB, 5
#define IOCB4_bit                      IOCB, 4
#define IOCB3_bit                      IOCB, 3
#define IOCB2_bit                      IOCB, 2
#define IOCB1_bit                      IOCB, 1
#define IOCB0_bit                      IOCB, 0
#define P1DEL7_bit                     P1DEL, 7
#define P1DEL6_bit                     P1DEL, 6
#define P1DEL5_bit                     P1DEL, 5
#define P1DEL4_bit                     P1DEL, 4
#define P1DEL3_bit                     P1DEL, 3
#define P1DEL2_bit                     P1DEL, 2
#define P1DEL1_bit                     P1DEL, 1
#define P1DEL0_bit                     P1DEL, 0
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#define CSRC_bit                       TXSTA, 7
#define TX9_bit                        TXSTA, 6
#define TXEN_bit                       TXSTA, 5
#define SYNC_bit                       TXSTA, 4
#define BRGH_bit                       TXSTA, 2
#define TRMT_bit                       TXSTA, 1
#define TX9D_bit                       TXSTA, 0
#endif
#if !defined(_16C745) && !defined(_16C765)
#define VRHEN_bit                      REFCON, 7
#define VRLEN_bit                      REFCON, 6
#define VRHOEN_bit                     REFCON, 5
#define VRLOEN_bit                     REFCON, 4
#define BGST_bit                       LVDCON, 5
#define LVDEN_bit                      LVDCON, 4
#define LV3_bit                        LVDCON, 3
#define LV2_bit                        LVDCON, 2
#define LV1_bit                        LVDCON, 1
#define LV0_bit                        LVDCON, 0
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define ANSEL5_bit                     ANSEL, 5
#define ANSEL4_bit                     ANSEL, 4
#define ANSEL3_bit                     ANSEL, 3
#define ANSEL2_bit                     ANSEL, 2
#define ANSEL1_bit                     ANSEL, 1
#define ANSEL0_bit                     ANSEL, 0
#endif
#if !defined(_16C745) && !defined(_16C765)
#define ADRESL7_bit                    ADRESL, 7
#define ADRESL6_bit                    ADRESL, 6
#define ADRESL5_bit                    ADRESL, 5
#define ADRESL4_bit                    ADRESL, 4
#define ADRESL3_bit                    ADRESL, 3
#define ADRESL2_bit                    ADRESL, 2
#define ADRESL1_bit                    ADRESL, 1
#define ADRESL0_bit                    ADRESL, 0
#endif
#if !defined(_16C745) && !defined(_16C765)
#define ADFM_bit                       ADCON1, 7
#define VCFG2_bit                      ADCON1, 6
#define VCFG1_bit                      ADCON1, 5
#define VCFG0_bit                      ADCON1, 4
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#if !defined(_16C774) && !defined(_16C765)
#define PCFG3_bit                      ADCON1, 3
#endif
#define PCFG2_bit                      ADCON1, 2
#define PCFG1_bit                      ADCON1, 1
#define PCFG0_bit                      ADCON1, 0
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
#define PMDATL7_bit                    PMDATL, 7
#define PMDATL6_bit                    PMDATL, 6
#define PMDATL5_bit                    PMDATL, 5
#define PMDATL4_bit                    PMDATL, 4
#define PMDATL3_bit                    PMDATL, 3
#define PMDATL2_bit                    PMDATL, 2
#define PMDATL1_bit                    PMDATL, 1
#define PMDATL0_bit                    PMDATL, 0
#define PMADRL7_bit                    PMADRL, 7
#define PMADRL6_bit                    PMADRL, 6
#define PMADRL5_bit                    PMADRL, 5
#define PMADRL4_bit                    PMADRL, 4
#define PMADRL3_bit                    PMADRL, 3
#define PMADRL2_bit                    PMADRL, 2
#define PMADRL1_bit                    PMADRL, 1
#define PMADRL0_bit                    PMADRL, 0
#define PMDATH5_bit                    PMDATH, 5
#define PMDATH4_bit                    PMDATH, 4
#define PMDATH3_bit                    PMDATH, 3
#define PMDATH2_bit                    PMDATH, 2
#define PMDATH1_bit                    PMDATH, 1
#define PMDATH0_bit                    PMDATH, 0
#define PMADRH3_bit                    PMADRH, 3
#define PMADRH2_bit                    PMADRH, 2
#define PMADRH1_bit                    PMADRH, 1
#define PMADRH0_bit                    PMADRH, 0
#endif
#if defined(_16C745) || defined(_16C765)
#define STALL_bit                      UIR, 5
#define UIDLE_bit                      UIR, 4
#define TOK_DONE_bit                   UIR, 3
#define ACTIVITY_bit                   UIR, 2
#define UERR_bit                       UIR, 1
#define USB_RST_bit                    UIR, 0
#define STALL_E_bit                    UIE, 5
#define UIDLE_E_bit                    UIE, 4
#define TOK_DONE_E_bit                 UIE, 3
#define ACTIVITY_E_bit                 UIE, 2
#define UERR_E_bit                     UIE, 1
#define USB_RST_E_bit                  UIE, 0
#define BTS_ERR_bit                    UEIR, 7
#define OWN_ERR_bit                    UEIR, 6
#define WRT_ERR_bit                    UEIR, 5
#define BTO_ERR_bit                    UEIR, 4
#define DFN8_bit                       UEIR, 3
#define CRC16_bit                      UEIR, 2
#define CRC5_bit                       UEIR, 1
#define PID_ERR_bit                    UEIR, 0
#define BTS_ERR_E_bit                  UEIE, 7
#define OWN_ERR_E_bit                  UEIE, 6
#define WRT_ERR_E_bit                  UEIE, 5
#define BTO_ERR_E_bit                  UEIE, 4
#define DFN8_E_bit                     UEIE, 3
#define CRC16_E_bit                    UEIE, 2
#define CRC5_E_bit                     UEIE, 1
#define PID_ERR_E_bit                  UEIE, 0
#define ENDP1_bit                      USTAT, 4
#define ENDP0_bit                      USTAT, 3
#define IN_bit                         USTAT, 2
#define SEO_bit                        UCTRL, 5
#define PKT_DIS_bit                    UCTRL, 4
#define DEV_ATT_bit                    UCTRL, 3
#define RESUME_bit                     UCTRL, 2
#define SUSPND_bit                     UCTRL, 1
#define ADDR6_bit                      UADDR, 6
#define ADDR5_bit                      UADDR, 5
#define ADDR4_bit                      UADDR, 4
#define ADDR3_bit                      UADDR, 3
#define ADDR2_bit                      UADDR, 2
#define ADDR1_bit                      UADDR, 1
#define ADDR0_bit                      UADDR, 0
#define SWSTAT7_bit                    USWSTAT, 7
#define SWSTAT6_bit                    USWSTAT, 6
#define SWSTAT5_bit                    USWSTAT, 5
#define SWSTAT4_bit                    USWSTAT, 4
#define SWSTAT3_bit                    USWSTAT, 3
#define SWSTAT2_bit                    USWSTAT, 2
#define SWSTAT1_bit                    USWSTAT, 1
#define SWSTAT0_bit                    USWSTAT, 0
#define EP_CTL_DIS0_bit                UEP0, 3
#define EP_OUT_EN0_bit                 UEP0, 2
#define EP_IN_EN0_bit                  UEP0, 1
#define EP_STALL0_bit                  UEP0, 0
#define EP_CTL_DIS1_bit                UEP1, 3
#define EP_OUT_EN1_bit                 UEP1, 2
#define EP_IN_EN1_bit                  UEP1, 1
#define EP_STALL1_bit                  UEP1, 0
#define EP_CTL_DIS2_bit                UEP2, 3
#define EP_OUT_EN2_bit                 UEP2, 2
#define EP_IN_EN2_bit                  UEP2, 1
#define EP_STALL2_bit                  UEP2, 0
#define UOWN_0O_bit                    BD0OST, 7
#define DATA_0O_bit                    BD0OST, 6
#define PID3_0O_bit                    BD0OST, 5
#define PID2_0O_bit                    BD0OST, 4
#define PID1_0O_bit                    BD0OST, 3
#define PID0_0O_bit                    BD0OST, 2
#define UOWN_0I_bit                    BD0IST, 7
#define DATA_0I_bit                    BD0IST, 6
#define PID3_0I_bit                    BD0IST, 5
#define PID2_0I_bit                    BD0IST, 4
#define PID1_0I_bit                    BD0IST, 3
#define PID0_0I_bit                    BD0IST, 2
#define UOWN_1O_bit                    BD1OST, 7
#define DATA_1O_bit                    BD1OST, 6
#define PID3_1O_bit                    BD1OST, 5
#define PID2_1O_bit                    BD1OST, 4
#define PID1_1O_bit                    BD1OST, 3
#define PID0_1O_bit                    BD1OST, 2
#define UOWN_1I_bit                    BD1IST, 7
#define DATA_1I_bit                    BD1IST, 6
#define PID3_1I_bit                    BD1IST, 5
#define PID2_1I_bit                    BD1IST, 4
#define PID1_1I_bit                    BD1IST, 3
#define PID0_1I_bit                    BD1IST, 2
#define UOWN_2O_bit                    BD2OST, 7
#define DATA_2O_bit                    BD2OST, 6
#define PID3_2O_bit                    BD2OST, 5
#define PID2_2O_bit                    BD2OST, 4
#define PID1_2O_bit                    BD2OST, 3
#define PID0_2O_bit                    BD2OST, 2
#define UOWN_2I_bit                    BD2IST, 7
#define DATA_2I_bit                    BD2IST, 6
#define PID3_2I_bit                    BD2IST, 5
#define PID2_2I_bit                    BD2IST, 4
#define PID1_2I_bit                    BD2IST, 3
#define PID0_2I_bit                    BD2IST, 2
#endif
#if !defined(_16C745) || !defined(_16C765)
#endif
#if defined(_16C717)
#elif defined (_16C770) || defined (_16C771)
#elif defined(_16C773) || defined (_16C774)
#elif defined(_16C745) || defined (_16C765)
#endif
#if defined(_16C717)
#endif
#if defined(_16C717)
#endif
#if defined(_16C773) || defined (_16C774) || defined (_16C770) || defined (_16C771)
#endif
#if defined(_16C745) || defined (_16C765)
#endif

#endif
