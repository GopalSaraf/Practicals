#ifndef _AS16F81X_LEGACY_H_
#define _AS16F81X_LEGACY_H_

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
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
PIE1                                   equ 008Ch
PIE2                                   equ 008Dh
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
PR2                                    equ 0092h
SSPADD                                 equ 0093h
SSPSTAT                                equ 0094h
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
EEDATA                                 equ 010Ch
EEADR                                  equ 010Dh
EEDATH                                 equ 010Eh
EEADRH                                 equ 010Fh
EECON1                                 equ 018Ch
EECON2                                 equ 018Dh
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define PD                             STATUS, 3
#define TO                             STATUS, 4
#define RP0                            STATUS, 5
#define RP1                            STATUS, 6
#define IRP                            STATUS, 7
#define RA0                            PORTA, 0
#define RA1                            PORTA, 1
#define RA2                            PORTA, 2
#define RA3                            PORTA, 3
#define RA4                            PORTA, 4
#define RA5                            PORTA, 5
#define RA6                            PORTA, 6
#define RA7                            PORTA, 7
#define RB0                            PORTB, 0
#define RB1                            PORTB, 1
#define RB2                            PORTB, 2
#define RB3                            PORTB, 3
#define RB4                            PORTB, 4
#define RB5                            PORTB, 5
#define RB6                            PORTB, 6
#define RB7                            PORTB, 7
#define RBIF                           INTCON, 0
#define INTF                           INTCON, 1
#define TMR0IF                         INTCON, 2
#define RBIE                           INTCON, 3
#define INTE                           INTCON, 4
#define TMR0IE                         INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#define TMR2IF                         PIR1, 1
#define CCP1IF                         PIR1, 2
#define SSPIF                          PIR1, 3
#define ADIF                           PIR1, 6
#define EEIF                           PIR2, 4
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define T2CKPS0                        T2CON, 0
#define T2CKPS1                        T2CON, 1
#define TMR2ON                         T2CON, 2
#define TOUTPS0                        T2CON, 3
#define TOUTPS1                        T2CON, 4
#define TOUTPS2                        T2CON, 5
#define TOUTPS3                        T2CON, 6
#define SSPM0                          SSPCON, 0
#define SSPM1                          SSPCON, 1
#define SSPM2                          SSPCON, 2
#define SSPM3                          SSPCON, 3
#define CKP                            SSPCON, 4
#define SSPEN                          SSPCON, 5
#define SSPOV                          SSPCON, 6
#define WCOL                           SSPCON, 7
#define CCP1M0                         CCP1CON, 0
#define CCP1M1                         CCP1CON, 1
#define CCP1M2                         CCP1CON, 2
#define CCP1M3                         CCP1CON, 3
#define CCP1Y                          CCP1CON, 4
#define CCP1X                          CCP1CON, 5
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 2
#define CHS0                           ADCON0, 3
#define CHS1                           ADCON0, 4
#define CHS2                           ADCON0, 5
#define ADCS0                          ADCON0, 6
#define ADCS1                          ADCON0, 7
#define PS0                            OPTION, 0
#define PS1                            OPTION, 1
#define PS2                            OPTION, 2
#define PSA                            OPTION, 3
#define T0SE                           OPTION, 4
#define T0CS                           OPTION, 5
#define INTEDG                         OPTION, 6
#define RBPU                           OPTION, 7
#define TRISA0                         TRISA, 0
#define TRISA1                         TRISA, 1
#define TRISA2                         TRISA, 2
#define TRISA3                         TRISA, 3
#define TRISA4                         TRISA, 4
#define TRISA5                         TRISA, 5
#define TRISA6                         TRISA, 6
#define TRISA7                         TRISA, 7
#define TRISB0                         TRISB, 0
#define TRISB1                         TRISB, 1
#define TRISB2                         TRISB, 2
#define TRISB3                         TRISB, 3
#define TRISB4                         TRISB, 4
#define TRISB5                         TRISB, 5
#define TRISB6                         TRISB, 6
#define TRISB7                         TRISB, 7
#define TMR1IE                         PIE1, 0
#define TMR2IE                         PIE1, 1
#define CCP1IE                         PIE1, 2
#define SSPIE                          PIE1, 3
#define ADIE                           PIE1, 6
#define EEIE                           PIE2, 4
#define BOR                            PCON, 0
#define POR                            PCON, 1
#define FLTS                           OSCCON, 2
#define IOFS                           OSCCON, 2
#define IRCF0                          OSCCON, 4
#define IRCF1                          OSCCON, 5
#define IRCF2                          OSCCON, 6
#define TUN0                           OSCTUNE, 0
#define TUN1                           OSCTUNE, 1
#define TUN2                           OSCTUNE, 2
#define TUN3                           OSCTUNE, 3
#define TUN4                           OSCTUNE, 4
#define TUN5                           OSCTUNE, 5
#define BF                             SSPSTAT, 0
#define UA                             SSPSTAT, 1
#define RW                             SSPSTAT, 2
#define START                          SSPSTAT, 3
#define STOP                           SSPSTAT, 4
#define DA                             SSPSTAT, 5
#define CKE                            SSPSTAT, 6
#define SMP                            SSPSTAT, 7
#define PCFG0                          ADCON1, 0
#define PCFG1                          ADCON1, 1
#define PCFG2                          ADCON1, 2
#define PCFG3                          ADCON1, 3
#define ADCS2                          ADCON1, 6
#define ADFM                           ADCON1, 7
#define RD                             EECON1, 0
#define WR                             EECON1, 1
#define WREN                           EECON1, 2
#define WRERR                          EECON1, 3
#define FREE                           EECON1, 4
#define EEPGD                          EECON1, 7

#endif
