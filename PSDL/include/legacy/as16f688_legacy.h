#ifndef _AS16F688_LEGACY_H_
#define _AS16F688_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTC                                  equ 0007h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
BAUDCTL                                equ 0011h
SPBRGH                                 equ 0012h
SPBRG                                  equ 0013h
RCREG                                  equ 0014h
TXREG                                  equ 0015h
TXSTA                                  equ 0016h
RCSTA                                  equ 0017h
WDTCON                                 equ 0018h
CMCON0                                 equ 0019h
CMCON1                                 equ 001Ah
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISC                                  equ 0087h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
ANSEL                                  equ 0091h
WPUA                                   equ 0095h
IOCA                                   equ 0096h
EEDATH                                 equ 0097h
EEADRH                                 equ 0098h
VRCON                                  equ 0099h
EEDAT                                  equ 009Ah
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EEADRL                                 equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
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
#define RC0                            PORTC, 0
#define RC1                            PORTC, 1
#define RC2                            PORTC, 2
#define RC3                            PORTC, 3
#define RC4                            PORTC, 4
#define RC5                            PORTC, 5
#define RAIF                           INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define RAIE                           INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#define TXIF                           PIR1, 1
#define OSFIF                          PIR1, 2
#define C1IF                           PIR1, 3
#define C2IF                           PIR1, 4
#define RCIF                           PIR1, 5
#define ADIF                           PIR1, 6
#define EEIF                           PIR1, 7
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define T1GE                           T1CON, 6
#define T1GINV                         T1CON, 7
#define ABDEN                          BAUDCTL, 0
#define WUE                            BAUDCTL, 1
#define BRG16                          BAUDCTL, 3
#define SCKP                           BAUDCTL, 4
#define RCIDL                          BAUDCTL, 6
#define ABDOVF                         BAUDCTL, 7
#define TX9D                           TXSTA, 0
#define TRMT                           TXSTA, 1
#define BRGH                           TXSTA, 2
#define SENDB                          TXSTA, 3
#define SYNC                           TXSTA, 4
#define TXEN                           TXSTA, 5
#define TX9                            TXSTA, 6
#define CSRC                           TXSTA, 7
#define RX9D                           RCSTA, 0
#define OERR                           RCSTA, 1
#define FERR                           RCSTA, 2
#define ADDEN                          RCSTA, 3
#define CREN                           RCSTA, 4
#define SREN                           RCSTA, 5
#define RX9                            RCSTA, 6
#define SPEN                           RCSTA, 7
#define SWDTEN                         WDTCON, 0
#define WDTPS0                         WDTCON, 1
#define WDTPS1                         WDTCON, 2
#define WDTPS2                         WDTCON, 3
#define WDTPS3                         WDTCON, 4
#define CM0                            CMCON0, 0
#define CM1                            CMCON0, 1
#define CM2                            CMCON0, 2
#define CIS                            CMCON0, 3
#define C1INV                          CMCON0, 4
#define C2INV                          CMCON0, 5
#define C1OUT                          CMCON0, 6
#define C2OUT                          CMCON0, 7
#define C2SYNC                         CMCON1, 0
#define T1GSS                          CMCON1, 1
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define CHS2                           ADCON0, 4
#define VCFG                           ADCON0, 6
#define ADFM                           ADCON0, 7
#define PS0                            OPTION, 0
#define PS1                            OPTION, 1
#define PS2                            OPTION, 2
#define PSA                            OPTION, 3
#define T0SE                           OPTION, 4
#define T0CS                           OPTION, 5
#define INTEDG                         OPTION, 6
#define RAPU                           OPTION, 7
#define TRISA0                         TRISA, 0
#define TRISA1                         TRISA, 1
#define TRISA2                         TRISA, 2
#define TRISA3                         TRISA, 3
#define TRISA4                         TRISA, 4
#define TRISA5                         TRISA, 5
#define TRISC0                         TRISC, 0
#define TRISC1                         TRISC, 1
#define TRISC2                         TRISC, 2
#define TRISC3                         TRISC, 3
#define TRISC4                         TRISC, 4
#define TRISC5                         TRISC, 5
#define TMR1IE                         PIE1, 0
#define TXIE                           PIE1, 1
#define OSFIE                          PIE1, 2
#define C1IE                           PIE1, 3
#define C2IE                           PIE1, 4
#define RCIE                           PIE1, 5
#define ADIE                           PIE1, 6
#define EEIE                           PIE1, 7
#define BOD                            PCON, 0
#define POR                            PCON, 1
#define SBODEN                         PCON, 4
#define ULPWUE                         PCON, 5
#define SCS                            OSCCON, 0
#define LTS                            OSCCON, 1
#define HTS                            OSCCON, 2
#define OSTS                           OSCCON, 3
#define IOSCF0                         OSCCON, 4
#define IOSCF1                         OSCCON, 5
#define IOSCF2                         OSCCON, 6
#define IRCF0                          OSCCON, 4
#define IRCF1                          OSCCON, 5
#define IRCF2                          OSCCON, 6
#define TUN0                           OSCTUNE, 0
#define TUN1                           OSCTUNE, 1
#define TUN2                           OSCTUNE, 2
#define TUN3                           OSCTUNE, 3
#define TUN4                           OSCTUNE, 4
#define ANS0                           ANSEL, 0
#define ANS1                           ANSEL, 1
#define ANS2                           ANSEL, 2
#define ANS3                           ANSEL, 3
#define ANS4                           ANSEL, 4
#define ANS5                           ANSEL, 5
#define ANS6                           ANSEL, 6
#define ANS7                           ANSEL, 7
#define WPUA0                          WPUA, 0
#define WPUA1                          WPUA, 1
#define WPUA2                          WPUA, 2
#define WPUA4                          WPUA, 4
#define WPUA5                          WPUA, 5
#define IOCA0                          IOCA, 0
#define IOCA1                          IOCA, 1
#define IOCA2                          IOCA, 2
#define IOCA3                          IOCA, 3
#define IOCA4                          IOCA, 4
#define IOCA5                          IOCA, 5
#define VR0                            VRCON, 0
#define VR1                            VRCON, 1
#define VR2                            VRCON, 2
#define VR3                            VRCON, 3
#define VRR                            VRCON, 5
#define VREN                           VRCON, 7
#define RD                             EECON1, 0
#define WR                             EECON1, 1
#define WREN                           EECON1, 2
#define WRERR                          EECON1, 3
#define EEPGD                          EECON1, 7
#define ADCS0                          ADCON1, 4
#define ADCS1                          ADCON1, 5
#define ADCS2                          ADCON1, 6

#endif
