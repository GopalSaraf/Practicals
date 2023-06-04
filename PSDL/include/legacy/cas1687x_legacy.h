#ifndef _CAS1687X_H_
#define _CAS1687X_H_

#if defined(_16F874)	|| defined(_16F877) || defined(_16F871)
#endif
INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
#ifdef __PINS_40
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
#if !defined(_16F870) && !defined(_16F871)
SSPBUF                                 equ 0013h
SSPCON                                 equ 0014h
#endif
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
#ifndef _16F872
RCSTA                                  equ 0018h
TXREG                                  equ 0019h
RCREG                                  equ 001Ah
#if !defined(_16F870) && !defined(_16F871)
CCPR2L                                 equ 001Bh
CCPR2H                                 equ 001Ch
CCP2CON                                equ 001Dh
#endif
#endif
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
#ifdef	__PINS_40
TRISD                                  equ 0088h
TRISE                                  equ 0089h
#endif
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
#if !defined(_16F870) && !defined(_16F871)
SSPCON2                                equ 0091h
#endif
PR2                                    equ 0092h
#if !defined(_16F870) && !defined(_16F871)
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
#endif
#ifndef _16F872
TXSTA                                  equ 0098h
SPBRG                                  equ 0099h
#endif
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
EEDATA                                 equ 010Ch
EEADR                                  equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
EECON1                                 equ 018Ch
EECON2                                 equ 018Dh
#define IRP_bit                        STATUS, 7
#define RP1_bit                        STATUS, 6
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#define RA5_bit                        PORTA, 5
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
#define RC7_bit                        PORTC, 7
#define RC6_bit                        PORTC, 6
#define RC5_bit                        PORTC, 5
#define RC4_bit                        PORTC, 4
#define RC3_bit                        PORTC, 3
#define RC2_bit                        PORTC, 2
#define RC1_bit                        PORTC, 1
#define RC0_bit                        PORTC, 0
#ifdef	__PINS_40
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
#define TMR0IE_bit                     INTCON, 5
#define TMR0IF_bit                     INTCON, 2
#ifdef	__PINS_40
#define PSPIF_bit                      PIR1, 7
#endif
#define ADIF_bit                       PIR1, 6
#ifndef _16F872
#define RCIF_bit                       PIR1, 5
#define TXIF_bit                       PIR1, 4
#endif
#if !defined(_16F870) && !defined(_16F871)
#define SSPIF_bit                      PIR1, 3
#endif
#define CCP1IF_bit                     PIR1, 2
#define TMR2IF_bit                     PIR1, 1
#define TMR1IF_bit                     PIR1, 0
#define EEIF_bit                       PIR2, 4
#if !defined(_16F870) && !defined(_16F871)
#define BCLIF_bit                      PIR2, 3
#ifndef _16F872
#define CCP2IF_bit                     PIR2, 0
#endif
#endif
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
#if !defined(_16F870) && !defined(_16F871)
#define WCOL_bit                       SSPCON, 7
#define SSPOV_bit                      SSPCON, 6
#define SSPEN_bit                      SSPCON, 5
#define CKP_bit                        SSPCON, 4
#define SSPM3_bit                      SSPCON, 3
#define SSPM2_bit                      SSPCON, 2
#define SSPM1_bit                      SSPCON, 1
#define SSPM0_bit                      SSPCON, 0
#endif
#define CCP1X_bit                      CCP1CON, 5
#define CCP1Y_bit                      CCP1CON, 4
#define CCP1M3_bit                     CCP1CON, 3
#define CCP1M2_bit                     CCP1CON, 2
#define CCP1M1_bit                     CCP1CON, 1
#define CCP1M0_bit                     CCP1CON, 0
#ifndef _16F872
#define SPEN_bit                       RCSTA, 7
#define RX9_bit                        RCSTA, 6
#define SREN_bit                       RCSTA, 5
#define CREN_bit                       RCSTA, 4
#define ADDEN_bit                      RCSTA, 3
#define FERR_bit                       RCSTA, 2
#define OERR_bit                       RCSTA, 1
#define RX9D_bit                       RCSTA, 0
#endif
#if !defined(_16F870) && !defined(_16F871) && !defined(_16F872)
#define CCP2X_bit                      CCP2CON, 5
#define CCP2Y_bit                      CCP2CON, 4
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
#define ADON_bit                       ADCON0, 0
#define RBPU_bit                       OPTION, 7
#define INTEDG_bit                     OPTION, 6
#define T0CS_bit                       OPTION, 5
#define T0SE_bit                       OPTION, 4
#define PSA_bit                        OPTION, 3
#define PS2_bit                        OPTION, 2
#define PS1_bit                        OPTION, 1
#define PS0_bit                        OPTION, 0
#define TRISA5_bit                     TRISA, 5
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
#define TRISC7_bit                     TRISC, 7
#define TRISC6_bit                     TRISC, 6
#define TRISC5_bit                     TRISC, 5
#define TRISC4_bit                     TRISC, 4
#define TRISC3_bit                     TRISC, 3
#define TRISC2_bit                     TRISC, 2
#define TRISC1_bit                     TRISC, 1
#define TRISC0_bit                     TRISC, 0
#ifdef	__PINS_40
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
#ifdef	__PINS_40
#define PSPIE_bit                      PIE1, 7
#endif
#define ADIE_bit                       PIE1, 6
#ifndef _16F872
#define RCIE_bit                       PIE1, 5
#define TXIE_bit                       PIE1, 4
#endif
#define SSPIE_bit                      PIE1, 3
#define CCP1IE_bit                     PIE1, 2
#define TMR2IE_bit                     PIE1, 1
#define TMR1IE_bit                     PIE1, 0
#define EEIE_bit                       PIE2, 4
#define BCLIE_bit                      PIE2, 3
#ifndef _16F872
#define CCP2IE_bit                     PIE2, 0
#endif
#define POR_bit                        PCON, 1
#define BOR_bit                        PCON, 0
#if !defined(_16F870) && !defined(_16F871)
#define GCEN_bit                       SSPCON2, 7
#define ACKSTAT_bit                    SSPCON2, 6
#define ACKDT_bit                      SSPCON2, 5
#define ACKEN_bit                      SSPCON2, 4
#define RCEN_bit                       SSPCON2, 3
#define PEN_bit                        SSPCON2, 2
#define RSEN_bit                       SSPCON2, 1
#define SEN_bit                        SSPCON2, 0
#endif
#if !defined(_16F870) && !defined(_16F871)
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
#ifndef _16F872
#define CSRC_bit                       TXSTA, 7
#define TX9_bit                        TXSTA, 6
#define TXEN_bit                       TXSTA, 5
#define SYNC_bit                       TXSTA, 4
#define BRGH_bit                       TXSTA, 2
#define TRMT_bit                       TXSTA, 1
#define TX9D_bit                       TXSTA, 0
#endif
#define ADFM_bit                       ADCON1, 7
#define PCFG3_bit                      ADCON1, 3
#define PCFG2_bit                      ADCON1, 2
#define PCFG1_bit                      ADCON1, 1
#define PCFG0_bit                      ADCON1, 0
#define EEPGD_bit                      EECON1, 7
#define WRERR_bit                      EECON1, 3
#define WREN_bit                       EECON1, 2
#define WR_bit                         EECON1, 1
#define RD_bit                         EECON1, 0
#if !defined(_16F870) && !defined(_16F871)
#endif

#endif
