#ifndef _CAS1662_H_
#define _CAS1662_H_

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
SSPBUF                                 equ 0013h
SSPCON                                 equ 0014h
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
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
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define INTE_bit                       INTCON, 4
#define RBIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define INTF_bit                       INTCON, 1
#define RBIF_bit                       INTCON, 0
#define SSPIF_bit                      PIR1, 3
#define CCP1IF_bit                     PIR1, 2
#define TMR2IF_bit                     PIR1, 1
#define TMR1IF_bit                     PIR1, 0
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
#define WCOL_bit                       SSPCON, 7
#define SSPOV_bit                      SSPCON, 6
#define SSPEN_bit                      SSPCON, 5
#define CKP_bit                        SSPCON, 4
#define SSPM3_bit                      SSPCON, 3
#define SSPM2_bit                      SSPCON, 2
#define SSPM1_bit                      SSPCON, 1
#define SSPM0_bit                      SSPCON, 0
#define CCP1X_bit                      CCP1CON, 5
#define CCP1Y_bit                      CCP1CON, 4
#define CCP1M3_bit                     CCP1CON, 3
#define CCP1M2_bit                     CCP1CON, 2
#define CCP1M1_bit                     CCP1CON, 1
#define CCP1M0_bit                     CCP1CON, 0
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
#define SSPIE_bit                      PIE1, 3
#define CCP1IE_bit                     PIE1, 2
#define TMR2IE_bit                     PIE1, 1
#define TMR1IE_bit                     PIE1, 0
#define POR_bit                        PCON, 1
#ifndef _16C62
#define BOR_bit                        PCON, 0
#endif
#define DA_bit                         SSPSTAT, 5
#define STOP_bit                       SSPSTAT, 4
#define START_bit                      SSPSTAT, 3
#define RW_bit                         SSPSTAT, 2
#define UA_bit                         SSPSTAT, 1
#define BF_bit                         SSPSTAT, 0
#ifdef __STAT_BACKWARD_COMPATIBILITY
#endif
#if defined(_16C62A) || defined(_16C62B) || defined(_16CR62)
#endif
#if defined(_16C62A) || defined(_16C62B) || defined(_16CR62)
#endif

#endif
