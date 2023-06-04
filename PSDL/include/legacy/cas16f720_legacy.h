#ifndef _CAS16F720_H_
#define _CAS16F720_H_

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
#ifndef _LIB_BUILD
#endif
FSR                                    equ 0004h
PORTA                                  equ 0005h
#define RA0_bit                        PORTA, 0
#define RA1_bit                        PORTA, 1
#define RA2_bit                        PORTA, 2
#define RA3_bit                        PORTA, 3
#define RA4_bit                        PORTA, 4
#define RA5_bit                        PORTA, 5
#ifndef _LIB_BUILD
#endif
PORTB                                  equ 0006h
#define RB4_bit                        PORTB, 4
#define RB5_bit                        PORTB, 5
#define RB6_bit                        PORTB, 6
#define RB7_bit                        PORTB, 7
#ifndef _LIB_BUILD
#endif
PORTC                                  equ 0007h
#define RC0_bit                        PORTC, 0
#define RC1_bit                        PORTC, 1
#define RC2_bit                        PORTC, 2
#define RC3_bit                        PORTC, 3
#define RC4_bit                        PORTC, 4
#define RC5_bit                        PORTC, 5
#define RC6_bit                        PORTC, 6
#define RC7_bit                        PORTC, 7
#ifndef _LIB_BUILD
#endif
PCLATH                                 equ 000Ah
#ifndef _LIB_BUILD
#endif
INTCON                                 equ 000Bh
#define RABIF_bit                      INTCON, 0
#define INTF_bit                       INTCON, 1
#define TMR0IF_bit                     INTCON, 2
#define RABIE_bit                      INTCON, 3
#define INTE_bit                       INTCON, 4
#define TMR0IE_bit                     INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#ifndef _LIB_BUILD
#endif
PIR1                                   equ 000Ch
#define TXIF_bit                       PIR1, 4
#define RCIF_bit                       PIR1, 5
#define TMR1GIF_bit                    PIR1, 7
#define PSPIF_bit                      PIR1, 7
#ifndef _LIB_BUILD
#endif
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
#define TMR1ON_bit                     T1CON, 0
#define T1SYNC_bit                     T1CON, 2
#ifndef _LIB_BUILD
#endif
TMR2                                   equ 0011h
T2CON                                  equ 0012h
#define TMR2ON_bit                     T2CON, 2
#ifndef _LIB_BUILD
#endif
SSPBUF                                 equ 0013h
SSPCON                                 equ 0014h
#define CKP_bit                        SSPCON, 4
#define SSPEN_bit                      SSPCON, 5
#define SSPOV_bit                      SSPCON, 6
#define WCOL_bit                       SSPCON, 7
#ifndef _LIB_BUILD
#endif
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
#ifndef _LIB_BUILD
#endif
RCSTA                                  equ 0018h
#define RX9D_bit                       RCSTA, 0
#define OERR_bit                       RCSTA, 1
#define FERR_bit                       RCSTA, 2
#define ADDEN_bit                      RCSTA, 3
#define CREN_bit                       RCSTA, 4
#define SREN_bit                       RCSTA, 5
#define RX9_bit                        RCSTA, 6
#define SPEN_bit                       RCSTA, 7
#ifndef _LIB_BUILD
#endif
TXREG                                  equ 0019h
RCREG                                  equ 001Ah
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
#ifndef _LIB_BUILD
#endif
OPTION_REG                             equ 0081h
#define PSA_bit                        OPTION_REG, 3
#define T0SE_bit                       OPTION_REG, 4
#define T0CS_bit                       OPTION_REG, 5
#define INTEDG_bit                     OPTION_REG, 6
#define nRABPU_bit                     OPTION_REG, 7
#ifndef _LIB_BUILD
#endif
TRISA                                  equ 0085h
#define TRISA0_bit                     TRISA, 0
#define TRISA1_bit                     TRISA, 1
#define TRISA2_bit                     TRISA, 2
#define TRISA4_bit                     TRISA, 4
#define TRISA5_bit                     TRISA, 5
#ifndef _LIB_BUILD
#endif
TRISB                                  equ 0086h
#define TRISB4_bit                     TRISB, 4
#define TRISB5_bit                     TRISB, 5
#define TRISB6_bit                     TRISB, 6
#define TRISB7_bit                     TRISB, 7
#ifndef _LIB_BUILD
#endif
TRISC                                  equ 0087h
#define TRISC0_bit                     TRISC, 0
#define TRISC1_bit                     TRISC, 1
#define TRISC2_bit                     TRISC, 2
#define TRISC3_bit                     TRISC, 3
#define TRISC4_bit                     TRISC, 4
#define TRISC5_bit                     TRISC, 5
#define TRISC6_bit                     TRISC, 6
#define TRISC7_bit                     TRISC, 7
#ifndef _LIB_BUILD
#endif
PIE1                                   equ 008Ch
#define TMR1IE_bit                     PIE1, 0
#define TMR2IE_bit                     PIE1, 1
#define CCP1IE_bit                     PIE1, 2
#define SSPIE_bit                      PIE1, 3
#define TXIE_bit                       PIE1, 4
#define RCIE_bit                       PIE1, 5
#define ADIE_bit                       PIE1, 6
#define TMR1GIE_bit                    PIE1, 7
#ifndef _LIB_BUILD
#endif
PCON                                   equ 008Eh
#define nBOR_bit                       PCON, 0
#define nPOR_bit                       PCON, 1
#ifndef _LIB_BUILD
#endif
T1GCON                                 equ 008Fh
#define T1GVAL_bit                     T1GCON, 2
#define T1GGO_DONE_bit                 T1GCON, 3
#define T1GSPM_bit                     T1GCON, 4
#define T1GTM_bit                      T1GCON, 5
#define T1GPOL_bit                     T1GCON, 6
#define TMR1GE_bit                     T1GCON, 7
#ifndef _LIB_BUILD
#endif
OSCCON                                 equ 0090h
#define ICSS_bit                       OSCCON, 2
#define ICSL_bit                       OSCCON, 3
#ifndef _LIB_BUILD
#endif
OSCTUNE                                equ 0091h
#ifndef _LIB_BUILD
#endif
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPMSK                                 equ 0093h
#define MSK0_bit                       SSPMSK, 0
#define MSK1_bit                       SSPMSK, 1
#define MSK2_bit                       SSPMSK, 2
#define MSK3_bit                       SSPMSK, 3
#define MSK4_bit                       SSPMSK, 4
#define MSK5_bit                       SSPMSK, 5
#define MSK6_bit                       SSPMSK, 6
#define MSK7_bit                       SSPMSK, 7
#ifndef _LIB_BUILD
#endif
SSPSTAT                                equ 0094h
#ifndef _LIB_BUILD
#endif
WPUA                                   equ 0095h
#define WPUA0_bit                      WPUA, 0
#define WPUA1_bit                      WPUA, 1
#define WPUA2_bit                      WPUA, 2
#define WPUA3_bit                      WPUA, 3
#define WPUA4_bit                      WPUA, 4
#define WPUA5_bit                      WPUA, 5
#ifndef _LIB_BUILD
#endif
IOCA                                   equ 0096h
#define IOCA0_bit                      IOCA, 0
#define IOCA1_bit                      IOCA, 1
#define IOCA2_bit                      IOCA, 2
#define IOCA3_bit                      IOCA, 3
#define IOCA4_bit                      IOCA, 4
#define IOCA5_bit                      IOCA, 5
#ifndef _LIB_BUILD
#endif
TXSTA                                  equ 0098h
#define TX9D_bit                       TXSTA, 0
#define TRMT_bit                       TXSTA, 1
#define BRGH_bit                       TXSTA, 2
#define SYNC_bit                       TXSTA, 4
#define TXEN_bit                       TXSTA, 5
#define TX9_bit                        TXSTA, 6
#define CSRC_bit                       TXSTA, 7
#ifndef _LIB_BUILD
#endif
SPBRG                                  equ 0099h
FVRCON                                 equ 009Dh
#define ADFVR0_bit                     FVRCON, 0
#define ADFVR1_bit                     FVRCON, 1
#define TSRNG_bit                      FVRCON, 4
#define TSEN_bit                       FVRCON, 5
#define FVREN_bit                      FVRCON, 6
#define FVRST_bit                      FVRCON, 7
#ifndef _LIB_BUILD
#endif
ADCON1                                 equ 009Fh
#define ADCS0_bit                      ADCON1, 4
#define ADCS1_bit                      ADCON1, 5
#define ADCS2_bit                      ADCON1, 6
#define ADFM_bit                       ADCON1, 7
#ifndef _LIB_BUILD
#endif
PMDATL                                 equ 010Ch
PMADRL                                 equ 010Dh
PMDATH                                 equ 010Eh
#ifndef _LIB_BUILD
#endif
PMADRH                                 equ 010Fh
#ifndef _LIB_BUILD
#endif
WPUB                                   equ 0115h
IOCB                                   equ 0116h
ANSELA                                 equ 0185h
#define ANSA0_bit                      ANSELA, 0
#define ANSA1_bit                      ANSELA, 1
#define ANSA2_bit                      ANSELA, 2
#define ANSA4_bit                      ANSELA, 4
#define ANSA5_bit                      ANSELA, 5
#ifndef _LIB_BUILD
#endif
ANSELB                                 equ 0186h
#define ANSB4_bit                      ANSELB, 4
#define ANSB5_bit                      ANSELB, 5
#ifndef _LIB_BUILD
#endif
ANSELC                                 equ 0187h
#define ANSC0_bit                      ANSELC, 0
#define ANSC1_bit                      ANSELC, 1
#define ANSC2_bit                      ANSELC, 2
#define ANSC3_bit                      ANSELC, 3
#define ANSC6_bit                      ANSELC, 6
#define ANSC7_bit                      ANSELC, 7
#ifndef _LIB_BUILD
#endif
ICDIO                                  equ 0189h
PMCON1                                 equ 018Ch
#define RD_bit                         PMCON1, 0
#define WR_bit                         PMCON1, 1
#define WREN_bit                       PMCON1, 2
#define WRERR_bit                      PMCON1, 3
#define FREE_bit                       PMCON1, 4
#define LWLO_bit                       PMCON1, 5
#define CFGS_bit                       PMCON1, 6
#define EEPGD_bit                      PMCON1, 7
#ifndef _LIB_BUILD
#endif
PMCON2                                 equ 018Dh
ICKBUG                                 equ 018Eh
BIGBUG                                 equ 018Fh

#endif
