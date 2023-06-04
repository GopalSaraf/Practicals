#ifndef _CAS16F946_H_
#define _CAS16F946_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
PORTD                                  equ 0008h
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
TRISD                                  equ 0088h
TRISE                                  equ 0089h
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
ANSEL                                  equ 0091h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
WPUB                                   equ 0095h
IOCB                                   equ 0096h
CMCON1                                 equ 0097h
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
CMCON0                                 equ 009Ch
VRCON                                  equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
WDTCON                                 equ 0105h
LCDCON                                 equ 0107h
LCDPS                                  equ 0108h
LVDCON                                 equ 0109h
EEDATL                                 equ 010Ch
EEDATA                                 equ 010Ch
EEADRL                                 equ 010Dh
EEADR                                  equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
LCDDATA0                               equ 0110h
LCDDATA1                               equ 0111h
LCDDATA2                               equ 0112h
LCDDATA3                               equ 0113h
LCDDATA4                               equ 0114h
LCDDATA5                               equ 0115h
LCDDATA6                               equ 0116h
LCDDATA7                               equ 0117h
LCDDATA8                               equ 0118h
LCDDATA9                               equ 0119h
LCDDATA10                              equ 011Ah
LCDDATA11                              equ 011Bh
LCDSE0                                 equ 011Ch
LCDSE1                                 equ 011Dh
LCDSE2                                 equ 011Eh
TRISF                                  equ 0185h
TRISG                                  equ 0187h
PORTF                                  equ 0188h
PORTG                                  equ 0189h
EECON1                                 equ 018Ch
EECON2                                 equ 018Dh
LCDDATA12                              equ 0190h
LCDDATA13                              equ 0191h
LCDDATA14                              equ 0192h
LCDDATA15                              equ 0193h
LCDDATA16                              equ 0194h
LCDDATA17                              equ 0195h
LCDDATA18                              equ 0196h
LCDDATA19                              equ 0197h
LCDDATA20                              equ 0198h
LCDDATA21                              equ 0199h
LCDDATA22                              equ 019Ah
LCDDATA23                              equ 019Bh
LCDSE3                                 equ 019Ch
LCDSE4                                 equ 019Dh
LCDSE5                                 equ 019Eh
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
#define RE3_bit                        PORTE, 3
#define RE4_bit                        PORTE, 4
#define RE5_bit                        PORTE, 5
#define RE6_bit                        PORTE, 6
#define RE7_bit                        PORTE, 7
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
#define EEIF_bit                       PIR1, 7
#define CCP2IF_bit                     PIR2, 0
#define LVDIF_bit                      PIR2, 2
#define LCDIF_bit                      PIR2, 4
#define C1IF_bit                       PIR2, 5
#define C2IF_bit                       PIR2, 6
#define OSFIF_bit                      PIR2, 7
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define T1GE_bit                       T1CON, 6
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
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#define VCFG0_bit                      ADCON0, 5
#define VCFG1_bit                      ADCON0, 6
#define ADFM_bit                       ADCON0, 7
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
#define TRISE3_bit                     TRISE, 3
#define TRISE4_bit                     TRISE, 4
#define TRISE5_bit                     TRISE, 5
#define TRISE6_bit                     TRISE, 6
#define TRISE7_bit                     TRISE, 7
#define TMR1IE_bit                     PIE1, 0
#define TMR2IE_bit                     PIE1, 1
#define CCP1IE_bit                     PIE1, 2
#define SSPIE_bit                      PIE1, 3
#define TXIE_bit                       PIE1, 4
#define RCIE_bit                       PIE1, 5
#define ADIE_bit                       PIE1, 6
#define EEIE_bit                       PIE1, 7
#define CCP2IE_bit                     PIE2, 0
#define LVDIE_bit                      PIE2, 2
#define LCDIE_bit                      PIE2, 4
#define C1IE_bit                       PIE2, 5
#define C2IE_bit                       PIE2, 6
#define OSFIE_bit                      PIE2, 7
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
#define ANS0_bit                       ANSEL, 0
#define ANS1_bit                       ANSEL, 1
#define ANS2_bit                       ANSEL, 2
#define ANS3_bit                       ANSEL, 3
#define ANS4_bit                       ANSEL, 4
#define ANS5_bit                       ANSEL, 5
#define ANS6_bit                       ANSEL, 6
#define ANS7_bit                       ANSEL, 7
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
#define IOCB4_bit                      IOCB, 4
#define IOCB5_bit                      IOCB, 5
#define IOCB6_bit                      IOCB, 6
#define IOCB7_bit                      IOCB, 7
#define C2SYNC_bit                     CMCON1, 0
#define T1GSS_bit                      CMCON1, 1
#define TX9D_bit                       TXSTA, 0
#define TRMT_bit                       TXSTA, 1
#define BRGH_bit                       TXSTA, 2
#define SYNC_bit                       TXSTA, 4
#define TXEN_bit                       TXSTA, 5
#define TX9_bit                        TXSTA, 6
#define CSRC_bit                       TXSTA, 7
#define SPBRG0_bit                     SPBRG, 0
#define SPBRG1_bit                     SPBRG, 1
#define SPBRG2_bit                     SPBRG, 2
#define SPBRG3_bit                     SPBRG, 3
#define SPBRG4_bit                     SPBRG, 4
#define SPBRG5_bit                     SPBRG, 5
#define SPBRG6_bit                     SPBRG, 6
#define SPBRG7_bit                     SPBRG, 7
#define CM0_bit                        CMCON0, 0
#define CM1_bit                        CMCON0, 1
#define CM2_bit                        CMCON0, 2
#define CIS_bit                        CMCON0, 3
#define C1INV_bit                      CMCON0, 4
#define C2INV_bit                      CMCON0, 5
#define C1OUT_bit                      CMCON0, 6
#define C2OUT_bit                      CMCON0, 7
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define VRR_bit                        VRCON, 5
#define VREN_bit                       VRCON, 7
#define ADCS0_bit                      ADCON1, 4
#define ADCS1_bit                      ADCON1, 5
#define ADCS2_bit                      ADCON1, 6
#define SWDTEN_bit                     WDTCON, 0
#define WDTPS0_bit                     WDTCON, 1
#define WDTPS1_bit                     WDTCON, 2
#define WDTPS2_bit                     WDTCON, 3
#define WDTPS3_bit                     WDTCON, 4
#define LMUX0_bit                      LCDCON, 0
#define LMUX1_bit                      LCDCON, 1
#define CS0_bit                        LCDCON, 2
#define CS1_bit                        LCDCON, 3
#define VLCDEN_bit                     LCDCON, 4
#define WERR_bit                       LCDCON, 5
#define SLPEN_bit                      LCDCON, 6
#define LCDEN_bit                      LCDCON, 7
#define LP0_bit                        LCDPS, 0
#define LP1_bit                        LCDPS, 1
#define LP2_bit                        LCDPS, 2
#define LP3_bit                        LCDPS, 3
#define WA_bit                         LCDPS, 4
#define LCDA_bit                       LCDPS, 5
#define BIASMD_bit                     LCDPS, 6
#define WFT_bit                        LCDPS, 7
#define LVDL0_bit                      LVDCON, 0
#define LVDL1_bit                      LVDCON, 1
#define LVDL2_bit                      LVDCON, 2
#define LVDEN_bit                      LVDCON, 4
#define IRVST_bit                      LVDCON, 5
#define SEG0COM0_bit                   LCDDATA0, 0
#define SEG1COM0_bit                   LCDDATA0, 1
#define SEG2COM0_bit                   LCDDATA0, 2
#define SEG3COM0_bit                   LCDDATA0, 3
#define SEG4COM0_bit                   LCDDATA0, 4
#define SEG5COM0_bit                   LCDDATA0, 5
#define SEG6COM0_bit                   LCDDATA0, 6
#define SEG7COM0_bit                   LCDDATA0, 7
#define SEG8COM0_bit                   LCDDATA1, 0
#define SEG9COM0_bit                   LCDDATA1, 1
#define SEG10COM0_bit                  LCDDATA1, 2
#define SEG11COM0_bit                  LCDDATA1, 3
#define SEG12COM0_bit                  LCDDATA1, 4
#define SEG13COM0_bit                  LCDDATA1, 5
#define SEG14COM0_bit                  LCDDATA1, 6
#define SEG15COM0_bit                  LCDDATA1, 7
#define SEG16COM0_bit                  LCDDATA2, 0
#define SEG17COM0_bit                  LCDDATA2, 1
#define SEG18COM0_bit                  LCDDATA2, 2
#define SEG19COM0_bit                  LCDDATA2, 3
#define SEG20COM0_bit                  LCDDATA2, 4
#define SEG21COM0_bit                  LCDDATA2, 5
#define SEG22COM0_bit                  LCDDATA2, 6
#define SEG23COM0_bit                  LCDDATA2, 7
#define SEG0COM1_bit                   LCDDATA3, 0
#define SEG1COM1_bit                   LCDDATA3, 1
#define SEG2COM1_bit                   LCDDATA3, 2
#define SEG3COM1_bit                   LCDDATA3, 3
#define SEG4COM1_bit                   LCDDATA3, 4
#define SEG5COM1_bit                   LCDDATA3, 5
#define SEG6COM1_bit                   LCDDATA3, 6
#define SEG7COM1_bit                   LCDDATA3, 7
#define SEG8COM1_bit                   LCDDATA4, 0
#define SEG9COM1_bit                   LCDDATA4, 1
#define SEG10COM1_bit                  LCDDATA4, 2
#define SEG11COM1_bit                  LCDDATA4, 3
#define SEG12COM1_bit                  LCDDATA4, 4
#define SEG13COM1_bit                  LCDDATA4, 5
#define SEG14COM1_bit                  LCDDATA4, 6
#define SEG15COM1_bit                  LCDDATA4, 7
#define SEG16COM1_bit                  LCDDATA5, 0
#define SEG17COM1_bit                  LCDDATA5, 1
#define SEG18COM1_bit                  LCDDATA5, 2
#define SEG19COM1_bit                  LCDDATA5, 3
#define SEG20COM1_bit                  LCDDATA5, 4
#define SEG21COM1_bit                  LCDDATA5, 5
#define SEG22COM1_bit                  LCDDATA5, 6
#define SEG23COM1_bit                  LCDDATA5, 7
#define SEG0COM2_bit                   LCDDATA6, 0
#define SEG1COM2_bit                   LCDDATA6, 1
#define SEG2COM2_bit                   LCDDATA6, 2
#define SEG3COM2_bit                   LCDDATA6, 3
#define SEG4COM2_bit                   LCDDATA6, 4
#define SEG5COM2_bit                   LCDDATA6, 5
#define SEG6COM2_bit                   LCDDATA6, 6
#define SEG7COM2_bit                   LCDDATA6, 7
#define SEG8COM2_bit                   LCDDATA7, 0
#define SEG9COM2_bit                   LCDDATA7, 1
#define SEG10COM2_bit                  LCDDATA7, 2
#define SEG11COM2_bit                  LCDDATA7, 3
#define SEG12COM2_bit                  LCDDATA7, 4
#define SEG13COM2_bit                  LCDDATA7, 5
#define SEG14COM2_bit                  LCDDATA7, 6
#define SEG15COM2_bit                  LCDDATA7, 7
#define SEG16COM2_bit                  LCDDATA8, 0
#define SEG17COM2_bit                  LCDDATA8, 1
#define SEG18COM2_bit                  LCDDATA8, 2
#define SEG19COM2_bit                  LCDDATA8, 3
#define SEG20COM2_bit                  LCDDATA8, 4
#define SEG21COM2_bit                  LCDDATA8, 5
#define SEG22COM2_bit                  LCDDATA8, 6
#define SEG23COM2_bit                  LCDDATA8, 7
#define SEG0COM3_bit                   LCDDATA9, 0
#define SEG1COM3_bit                   LCDDATA9, 1
#define SEG2COM3_bit                   LCDDATA9, 2
#define SEG3COM3_bit                   LCDDATA9, 3
#define SEG4COM3_bit                   LCDDATA9, 4
#define SEG5COM3_bit                   LCDDATA9, 5
#define SEG6COM3_bit                   LCDDATA9, 6
#define SEG7COM3_bit                   LCDDATA9, 7
#define SEG8COM3_bit                   LCDDATA10, 0
#define SEG9COM3_bit                   LCDDATA10, 1
#define SEG10COM3_bit                  LCDDATA10, 2
#define SEG11COM3_bit                  LCDDATA10, 3
#define SEG12COM3_bit                  LCDDATA10, 4
#define SEG13COM3_bit                  LCDDATA10, 5
#define SEG14COM3_bit                  LCDDATA10, 6
#define SEG15COM3_bit                  LCDDATA10, 7
#define SEG16COM3_bit                  LCDDATA11, 0
#define SEG17COM3_bit                  LCDDATA11, 1
#define SEG18COM3_bit                  LCDDATA11, 2
#define SEG19COM3_bit                  LCDDATA11, 3
#define SEG20COM3_bit                  LCDDATA11, 4
#define SEG21COM3_bit                  LCDDATA11, 5
#define SEG22COM3_bit                  LCDDATA11, 6
#define SEG23COM3_bit                  LCDDATA11, 7
#define SE0_bit                        LCDSE0, 0
#define SE1_bit                        LCDSE0, 1
#define SE2_bit                        LCDSE0, 2
#define SE3_bit                        LCDSE0, 3
#define SE4_bit                        LCDSE0, 4
#define SE5_bit                        LCDSE0, 5
#define SE6_bit                        LCDSE0, 6
#define SE7_bit                        LCDSE0, 7
#define SE8_bit                        LCDSE1, 0
#define SE9_bit                        LCDSE1, 1
#define SE10_bit                       LCDSE1, 2
#define SE11_bit                       LCDSE1, 3
#define SE12_bit                       LCDSE1, 4
#define SE13_bit                       LCDSE1, 5
#define SE14_bit                       LCDSE1, 6
#define SE15_bit                       LCDSE1, 7
#define SE16_bit                       LCDSE2, 0
#define SE17_bit                       LCDSE2, 1
#define SE18_bit                       LCDSE2, 2
#define SE19_bit                       LCDSE2, 3
#define SE20_bit                       LCDSE2, 4
#define SE21_bit                       LCDSE2, 5
#define SE22_bit                       LCDSE2, 6
#define SE23_bit                       LCDSE2, 7
#define TRISF0_bit                     TRISF, 0
#define TRISF1_bit                     TRISF, 1
#define TRISF2_bit                     TRISF, 2
#define TRISF3_bit                     TRISF, 3
#define TRISF4_bit                     TRISF, 4
#define TRISF5_bit                     TRISF, 5
#define TRISF6_bit                     TRISF, 6
#define TRISF7_bit                     TRISF, 7
#define TRISG0_bit                     TRISG, 0
#define TRISG1_bit                     TRISG, 1
#define TRISG2_bit                     TRISG, 2
#define TRISG3_bit                     TRISG, 3
#define TRISG4_bit                     TRISG, 4
#define TRISG5_bit                     TRISG, 5
#define RF0_bit                        PORTF, 0
#define RF1_bit                        PORTF, 1
#define RF2_bit                        PORTF, 2
#define RF3_bit                        PORTF, 3
#define RF4_bit                        PORTF, 4
#define RF5_bit                        PORTF, 5
#define RF6_bit                        PORTF, 6
#define RF7_bit                        PORTF, 7
#define RG0_bit                        PORTG, 0
#define RG1_bit                        PORTG, 1
#define RG2_bit                        PORTG, 2
#define RG3_bit                        PORTG, 3
#define RG4_bit                        PORTG, 4
#define RG5_bit                        PORTG, 5
#define RD_bit                         EECON1, 0
#define WR_bit                         EECON1, 1
#define WREN_bit                       EECON1, 2
#define WRERR_bit                      EECON1, 3
#define EEPGD_bit                      EECON1, 7
#define SEG24COM0_bit                  LCDDATA12, 0
#define SEG25COM0_bit                  LCDDATA12, 1
#define SEG26COM0_bit                  LCDDATA12, 2
#define SEG27COM0_bit                  LCDDATA12, 3
#define SEG28COM0_bit                  LCDDATA12, 4
#define SEG29COM0_bit                  LCDDATA12, 5
#define SEG30COM0_bit                  LCDDATA12, 6
#define SEG31COM0_bit                  LCDDATA12, 7
#define SEG32COM0_bit                  LCDDATA13, 0
#define SEG33COM0_bit                  LCDDATA13, 1
#define SEG34COM0_bit                  LCDDATA13, 2
#define SEG35COM0_bit                  LCDDATA13, 3
#define SEG36COM0_bit                  LCDDATA13, 4
#define SEG37COM0_bit                  LCDDATA13, 5
#define SEG38COM0_bit                  LCDDATA13, 6
#define SEG39COM0_bit                  LCDDATA13, 7
#define SEG40COM0_bit                  LCDDATA14, 0
#define SEG41COM0_bit                  LCDDATA14, 1
#define SEG24COM1_bit                  LCDDATA15, 0
#define SEG25COM1_bit                  LCDDATA15, 1
#define SEG26COM1_bit                  LCDDATA15, 2
#define SEG27COM1_bit                  LCDDATA15, 3
#define SEG28COM1_bit                  LCDDATA15, 4
#define SEG29COM1_bit                  LCDDATA15, 5
#define SEG30COM1_bit                  LCDDATA15, 6
#define SEG31COM1_bit                  LCDDATA15, 7
#define SEG32COM1_bit                  LCDDATA16, 0
#define SEG33COM1_bit                  LCDDATA16, 1
#define SEG34COM1_bit                  LCDDATA16, 2
#define SEG35COM1_bit                  LCDDATA16, 3
#define SEG36COM1_bit                  LCDDATA16, 4
#define SEG37COM1_bit                  LCDDATA16, 5
#define SEG38COM1_bit                  LCDDATA16, 6
#define SEG39COM1_bit                  LCDDATA16, 7
#define SEG40COM1_bit                  LCDDATA17, 0
#define SEG41COM1_bit                  LCDDATA17, 1
#define SEG24COM2_bit                  LCDDATA18, 0
#define SEG25COM2_bit                  LCDDATA18, 1
#define SEG26COM2_bit                  LCDDATA18, 2
#define SEG27COM2_bit                  LCDDATA18, 3
#define SEG28COM2_bit                  LCDDATA18, 4
#define SEG29COM2_bit                  LCDDATA18, 5
#define SEG30COM2_bit                  LCDDATA18, 6
#define SEG31COM2_bit                  LCDDATA18, 7
#define SEG32COM2_bit                  LCDDATA19, 0
#define SEG33COM2_bit                  LCDDATA19, 1
#define SEG34COM2_bit                  LCDDATA19, 2
#define SEG35COM2_bit                  LCDDATA19, 3
#define SEG36COM2_bit                  LCDDATA19, 4
#define SEG37COM2_bit                  LCDDATA19, 5
#define SEG38COM2_bit                  LCDDATA19, 6
#define SEG39COM2_bit                  LCDDATA19, 7
#define SEG40COM2_bit                  LCDDATA20, 0
#define SEG41COM2_bit                  LCDDATA20, 1
#define SEG24COM3_bit                  LCDDATA21, 0
#define SEG25COM3_bit                  LCDDATA21, 1
#define SEG26COM3_bit                  LCDDATA21, 2
#define SEG27COM3_bit                  LCDDATA21, 3
#define SEG28COM3_bit                  LCDDATA21, 4
#define SEG29COM3_bit                  LCDDATA21, 5
#define SEG30COM3_bit                  LCDDATA21, 6
#define SEG31COM3_bit                  LCDDATA21, 7
#define SEG32COM3_bit                  LCDDATA22, 0
#define SEG33COM3_bit                  LCDDATA22, 1
#define SEG34COM3_bit                  LCDDATA22, 2
#define SEG35COM3_bit                  LCDDATA22, 3
#define SEG36COM3_bit                  LCDDATA22, 4
#define SEG37COM3_bit                  LCDDATA22, 5
#define SEG38COM3_bit                  LCDDATA22, 6
#define SEG39COM3_bit                  LCDDATA22, 7
#define SEG40COM3_bit                  LCDDATA23, 0
#define SEG41COM3_bit                  LCDDATA23, 1
#define SE24_bit                       LCDSE3, 0
#define SE25_bit                       LCDSE3, 1
#define SE26_bit                       LCDSE3, 2
#define SE27_bit                       LCDSE3, 3
#define SE28_bit                       LCDSE3, 4
#define SE29_bit                       LCDSE3, 5
#define SE30_bit                       LCDSE3, 6
#define SE31_bit                       LCDSE3, 7
#define SE32_bit                       LCDSE4, 0
#define SE33_bit                       LCDSE4, 1
#define SE34_bit                       LCDSE4, 2
#define SE35_bit                       LCDSE4, 3
#define SE36_bit                       LCDSE4, 4
#define SE37_bit                       LCDSE4, 5
#define SE38_bit                       LCDSE4, 6
#define SE39_bit                       LCDSE4, 7
#define SE40_bit                       LCDSE5, 0
#define SE41_bit                       LCDSE5, 1

#endif
