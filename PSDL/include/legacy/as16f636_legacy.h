#ifndef _AS16F636_LEGACY_H_
#define _AS16F636_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
#if defined(_16F636) || defined(_16F639)
PORTA                                  equ 0005h
PORTC                                  equ 0007h
GPIO                                   equ 0005h
#endif
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
WDTCON                                 equ 0018h
CMCON0                                 equ 0019h
CMCON1                                 equ 001Ah
OPTION_REG                             equ 0081h
#if defined(_16F636) || defined(_16F639)
TRISA                                  equ 0085h
TRISC                                  equ 0087h
TRISIO                                 equ 0085h
#endif
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
LVDCON                                 equ 0094h
WPUDA                                  equ 0095h
IOCA                                   equ 0096h
WDA                                    equ 0097h
VRCON                                  equ 0099h
EEDAT                                  equ 009Ah
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EEADRL                                 equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
CRCON                                  equ 0110h
CRDAT0                                 equ 0111h
CRDAT1                                 equ 0112h
CRDAT2                                 equ 0113h
CRDAT3                                 equ 0114h
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define PD                             STATUS, 3
#define TO                             STATUS, 4
#define RP0                            STATUS, 5
#define RP1                            STATUS, 6
#define IRP                            STATUS, 7
#if defined(_16F636) || defined(_16F639)
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
#define GP0                            GPIO, 0
#define GP1                            GPIO, 1
#define GP2                            GPIO, 2
#define GP3                            GPIO, 3
#define GP4                            GPIO, 4
#define GP5                            GPIO, 5
#endif
#define RAIF                           INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define RAIE                           INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#define OSFIF                          PIR1, 2
#define C1IF                           PIR1, 3
#if defined(_16F636) || defined(_16F639)
#define C2IF                           PIR1, 4
#endif
#define CRIF                           PIR1, 5
#define LVDIF                          PIR1, 6
#define EEIF                           PIR1, 7
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define TMR1GE                         T1CON, 6
#define T1GINV                         T1CON, 7
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
#if defined(_16F636) || defined(_16F639)
#define C2INV                          CMCON0, 5
#endif
#define C1OUT                          CMCON0, 6
#if defined(_16F636) || defined(_16F639)
#define C2OUT                          CMCON0, 7
#endif
#define C2SYNC                         CMCON1, 0
#define T1GSS                          CMCON1, 1
#define PS0                            OPTION, 0
#define PS1                            OPTION, 1
#define PS2                            OPTION, 2
#define PSA                            OPTION, 3
#define T0SE                           OPTION, 4
#define T0CS                           OPTION, 5
#define INTEDG                         OPTION, 6
#define RAPU                           OPTION, 7
#if defined(_16F636) || defined(_16F639)
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
#define TRISIO0                        TRISIO, 0
#define TRISIO1                        TRISIO, 1
#define TRISIO2                        TRISIO, 2
#define TRISIO3                        TRISIO, 3
#define TRISIO4                        TRISIO, 4
#define TRISIO5                        TRISIO, 5
#endif
#define TMR1IE                         PIE1, 0
#define OSFIE                          PIE1, 2
#define C1IE                           PIE1, 3
#if defined(_16F636) || defined(_16F639)
#define C2IE                           PIE1, 4
#endif
#define CRIE                           PIE1, 5
#define LVDIE                          PIE1, 6
#define EEIE                           PIE1, 7
#define BOD                            PCON, 0
#define POR                            PCON, 1
#define WUR                            PCON, 3
#define SBODEN                         PCON, 4
#define ULPWUE                         PCON, 5
#define SCS                            OSCCON, 0
#define LTS                            OSCCON, 1
#define HTS                            OSCCON, 2
#define OSTS                           OSCCON, 3
#define IRCF0                          OSCCON, 4
#define IRCF1                          OSCCON, 5
#define IRCF2                          OSCCON, 6
#define TUN0                           OSCTUNE, 0
#define TUN1                           OSCTUNE, 1
#define TUN2                           OSCTUNE, 2
#define TUN3                           OSCTUNE, 3
#define TUN4                           OSCTUNE, 4
#define LVDL0                          LVDCON, 0
#define LVDL1                          LVDCON, 1
#define LVDL2                          LVDCON, 2
#define LVDEN                          LVDCON, 4
#define IRVST                          LVDCON, 5
#define WPUDA0                         WPUDA, 0
#define WPUDA1                         WPUDA, 1
#define WPUDA2                         WPUDA, 2
#define WPUDA4                         WPUDA, 4
#define WPUDA5                         WPUDA, 5
#define IOCA0                          IOCA, 0
#define IOCA1                          IOCA, 1
#define IOCA2                          IOCA, 2
#define IOCA3                          IOCA, 3
#define IOCA4                          IOCA, 4
#define IOCA5                          IOCA, 5
#define WDA0                           WDA, 0
#define WDA1                           WDA, 1
#define WDA2                           WDA, 2
#define WDA4                           WDA, 4
#define WDA5                           WDA, 5
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
#define CRREG0                         CRCON, 0
#define CRREG1                         CRCON, 1
#define ENCDEC                         CRCON, 6
#define GODONE                         CRCON, 7

#endif
