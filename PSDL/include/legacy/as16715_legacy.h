#ifndef _AS16715_LEGACY_H_
#define _AS16715_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
#ifndef _16C715
DATACCP                                equ 0007h
#endif
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
#ifndef _16C715
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
TMR2                                   equ 0011h
T2CON                                  equ 0012h
CCPR1L                                 equ 0015h
CCPR1H                                 equ 0016h
CCP1CON                                equ 0017h
#endif
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
#ifndef _16C715
TRISCCP                                equ 0087h
#endif
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
#ifndef _16C715
PR2                                    equ 0092h
#endif
ADCON1                                 equ 009Fh
#define RP0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#define RA4                            PORTA, 4
#define RA3                            PORTA, 3
#define RA2                            PORTA, 2
#define RA1                            PORTA, 1
#define RA0                            PORTA, 0
#define RB7                            PORTB, 7
#define RB6                            PORTB, 6
#define RB5                            PORTB, 5
#define RB4                            PORTB, 4
#define RB3                            PORTB, 3
#define RB2                            PORTB, 2
#define RB1                            PORTB, 1
#define RB0                            PORTB, 0
#ifndef _16C715
#define DCCP                           DATACCP, 2
#define DT1CK                          DATACCP, 0
#endif
#define GIE                            INTCON, 7
#define PEIE                           INTCON, 6
#define T0IE                           INTCON, 5
#define INTE                           INTCON, 4
#define RBIE                           INTCON, 3
#define T0IF                           INTCON, 2
#define INTF                           INTCON, 1
#define RBIF                           INTCON, 0
#define ADIF                           PIR1, 6
#if defined(_16C712) || defined(_16C716)
#define CCP1IF                         PIR1, 2
#define TMR2IF                         PIR1, 1
#define TMR1IF                         PIR1, 0
#endif
#ifndef _16C715
#define T1CKPS1                        T1CON, 5
#define T1CKPS0                        T1CON, 4
#define T1OSCEN                        T1CON, 3
#define T1SYNC                         T1CON, 2
#define TMR1CS                         T1CON, 1
#define TMR1ON                         T1CON, 0
#define TOUTPS3                        T2CON, 6
#define TOUTPS2                        T2CON, 5
#define TOUTPS1                        T2CON, 4
#define TOUTPS0                        T2CON, 3
#define TMR2ON                         T2CON, 2
#define T2CKPS1                        T2CON, 1
#define T2CKPS0                        T2CON, 0
#define DC1B1                          CCP1CON, 5
#define DC1B0                          CCP1CON, 4
#define CCP1M3                         CCP1CON, 3
#define CCP1M2                         CCP1CON, 2
#define CCP1M1                         CCP1CON, 1
#define CCP1M0                         CCP1CON, 0
#endif
#define ADCS1                          ADCON0, 7
#define ADCS0                          ADCON0, 6
#define CHS2                           ADCON0, 5
#define CHS1                           ADCON0, 4
#define CHS0                           ADCON0, 3
#define ADGO                           ADCON0, 2
#define GODONE                         ADCON0, 2
#define ADON                           ADCON0, 0
#define RBPU                           OPTION, 7
#define INTEDG                         OPTION, 6
#define T0CS                           OPTION, 5
#define T0SE                           OPTION, 4
#define PSA                            OPTION, 3
#define PS2                            OPTION, 2
#define PS1                            OPTION, 1
#define PS0                            OPTION, 0
#define TRISA5                         TRISA, 5
#define TRISA4                         TRISA, 4
#define TRISA3                         TRISA, 3
#define TRISA2                         TRISA, 2
#define TRISA1                         TRISA, 1
#define TRISA0                         TRISA, 0
#define TRISB7                         TRISB, 7
#define TRISB6                         TRISB, 6
#define TRISB5                         TRISB, 5
#define TRISB4                         TRISB, 4
#define TRISB3                         TRISB, 3
#define TRISB2                         TRISB, 2
#define TRISB1                         TRISB, 1
#define TRISB0                         TRISB, 0
#ifndef _16C715
#define TCCP                           TRISCCP, 2
#define TT1CK                          TRISCCP, 0
#endif
#define ADIE                           PIE1, 6
#if defined(_16C712) || defined(_16C716)
#define CCP1IE                         PIE1, 2
#define TMR2IE                         PIE1, 1
#define TMR1IE                         PIE1, 0
#endif
#ifdef _16C715
#define MPECS                          PCON, 7
#define PER                            PCON, 2
#endif
#define POR                            PCON, 1
#define BOR                            PCON, 0
#define PCFG1                          ADCON1, 1
#define PCFG0                          ADCON1, 0
#ifdef _16C715
#endif

#endif
