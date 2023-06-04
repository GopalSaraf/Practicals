#ifndef _CAS16F716_H_
#define _CAS16F716_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
TMR2                                   equ 0011h
T2CON                                  equ 0012h
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
PWM1CON                                equ 0018h
ECCPAS                                 equ 0019h
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
PR2                                    equ 0092h
ADCON1                                 equ 009Fh
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
#define RB0_bit                        PORTB, 0
#define RB1_bit                        PORTB, 1
#define RB2_bit                        PORTB, 2
#define RB3_bit                        PORTB, 3
#define RB4_bit                        PORTB, 4
#define RB5_bit                        PORTB, 5
#define RB6_bit                        PORTB, 6
#define RB7_bit                        PORTB, 7
#define RBIF_bit                       INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define RBIE_bit                       INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#define TMR2IF_bit                     PIR1, 1
#define CCP1IF_bit                     PIR1, 2
#define ADIF_bit                       PIR1, 6
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
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
#define ECCPAS2_bit                    ECCPAS, 6
#define ECCPASE_bit                    ECCPAS, 7
#define ADON_bit                       ADCON0, 0
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
#define TRISB0_bit                     TRISB, 0
#define TRISB1_bit                     TRISB, 1
#define TRISB2_bit                     TRISB, 2
#define TRISB3_bit                     TRISB, 3
#define TRISB4_bit                     TRISB, 4
#define TRISB5_bit                     TRISB, 5
#define TRISB6_bit                     TRISB, 6
#define TRISB7_bit                     TRISB, 7
#define TMR1IE_bit                     PIE1, 0
#define TMR2IE_bit                     PIE1, 1
#define CCP1IE_bit                     PIE1, 2
#define ADIE_bit                       PIE1, 6
#define BOR_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define PCFG0_bit                      ADCON1, 0
#define PCFG1_bit                      ADCON1, 1
#define PCFG2_bit                      ADCON1, 2

#endif
