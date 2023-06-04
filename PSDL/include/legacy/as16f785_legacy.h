#ifndef _AS16F785_LEGACY_H_
#define _AS16F785_LEGACY_H_

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
CCPR1L                                 equ 0013h
CCPR1H                                 equ 0014h
CCP1CON                                equ 0015h
WDTCON                                 equ 0018h
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
TRISC                                  equ 0087h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
ANSEL0                                 equ 0091h
PR2                                    equ 0092h
ANSEL1                                 equ 0093h
WPUA                                   equ 0095h
IOCA                                   equ 0096h
REFCON                                 equ 0098h
VRCON                                  equ 0099h
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EEADRL                                 equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
ADRESL                                 equ 009Eh
ADCON1                                 equ 009Fh
PWMCON1                                equ 0110h
PWMCON0                                equ 0111h
PWMCLK                                 equ 0112h
PWMPH1                                 equ 0113h
PWMPH2                                 equ 0114h
CM1CON0                                equ 0119h
CM2CON0                                equ 011Ah
CM2CON1                                equ 011Bh
OPA1CON                                equ 011Ch
OPA2CON                                equ 011Dh
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
#define RB4                            PORTB, 4
#define RB5                            PORTB, 5
#define RB6                            PORTB, 6
#define RB7                            PORTB, 7
#define RC0                            PORTC, 0
#define RC1                            PORTC, 1
#define RC2                            PORTC, 2
#define RC3                            PORTC, 3
#define RC4                            PORTC, 4
#define RC5                            PORTC, 5
#define RC6                            PORTC, 6
#define RC7                            PORTC, 7
#define RAIF                           INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define RAIE                           INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#define TMR2IF                         PIR1, 1
#define OSFIF                          PIR1, 2
#define C1IF                           PIR1, 3
#define C2IF                           PIR1, 4
#define CCP1IF                         PIR1, 5
#define ADIF                           PIR1, 6
#define EEIF                           PIR1, 7
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define TMR1GE                         T1CON, 6
#define T1GINV                         T1CON, 7
#define T2CKPS0                        T2CON, 0
#define T2CKPS1                        T2CON, 1
#define TMR2ON                         T2CON, 2
#define TOUTPS0                        T2CON, 3
#define TOUTPS1                        T2CON, 4
#define TOUTPS2                        T2CON, 5
#define TOUTPS3                        T2CON, 6
#define CCP1M0                         CCP1CON, 0
#define CCP1M1                         CCP1CON, 1
#define CCP1M2                         CCP1CON, 2
#define CCP1M3                         CCP1CON, 3
#define DC1B0                          CCP1CON, 4
#define DC1B1                          CCP1CON, 5
#define SWDTEN                         WDTCON, 0
#define WDTPS0                         WDTCON, 1
#define WDTPS1                         WDTCON, 2
#define WDTPS2                         WDTCON, 3
#define WDTPS3                         WDTCON, 4
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define CHS2                           ADCON0, 4
#define CHS3                           ADCON0, 5
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
#define TRISB4                         TRISB, 4
#define TRISB5                         TRISB, 5
#define TRISB6                         TRISB, 6
#define TRISB7                         TRISB, 7
#define TRISC0                         TRISC, 0
#define TRISC1                         TRISC, 1
#define TRISC2                         TRISC, 2
#define TRISC3                         TRISC, 3
#define TRISC4                         TRISC, 4
#define TRISC5                         TRISC, 5
#define TRISC6                         TRISC, 6
#define TRISC7                         TRISC, 7
#define TMR1IE                         PIE1, 0
#define TMR2IE                         PIE1, 1
#define OSFIE                          PIE1, 2
#define C1IE                           PIE1, 3
#define C2IE                           PIE1, 4
#define CCP1IE                         PIE1, 5
#define ADIE                           PIE1, 6
#define EEIE                           PIE1, 7
#define BOR                            PCON, 0
#define POR                            PCON, 1
#define SBOREN                         PCON, 4
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
#define ANS0                           ANSEL0, 0
#define ANS1                           ANSEL0, 1
#define ANS2                           ANSEL0, 2
#define ANS3                           ANSEL0, 3
#define ANS4                           ANSEL0, 4
#define ANS5                           ANSEL0, 5
#define ANS6                           ANSEL0, 6
#define ANS7                           ANSEL0, 7
#define ANS8                           ANSEL1, 0
#define ANS9                           ANSEL1, 1
#define ANS10                          ANSEL1, 2
#define ANS11                          ANSEL1, 3
#define WPUA0                          WPUA, 0
#define WPUA1                          WPUA, 1
#define WPUA2                          WPUA, 2
#define WPUA3                          WPUA, 3
#define WPUA4                          WPUA, 4
#define WPUA5                          WPUA, 5
#define IOCA0                          IOCA, 0
#define IOCA1                          IOCA, 1
#define IOCA2                          IOCA, 2
#define IOCA3                          IOCA, 3
#define IOCA4                          IOCA, 4
#define IOCA5                          IOCA, 5
#define CVROE                          REFCON, 1
#define VROE                           REFCON, 2
#define VREN                           REFCON, 3
#define VRBB                           REFCON, 4
#define BGST                           REFCON, 5
#define VR0                            VRCON, 0
#define VR1                            VRCON, 1
#define VR2                            VRCON, 2
#define VR3                            VRCON, 3
#define VRR                            VRCON, 5
#define C2VREN                         VRCON, 6
#define C1VREN                         VRCON, 7
#define RD                             EECON1, 0
#define WR                             EECON1, 1
#define WREN                           EECON1, 2
#define WRERR                          EECON1, 3
#define ADCS0                          ADCON1, 4
#define ADCS1                          ADCON1, 5
#define ADCS2                          ADCON1, 6
#define CMDLY0                         PWMCON1, 0
#define CMDLY1                         PWMCON1, 1
#define CMDLY2                         PWMCON1, 2
#define CMDLY3                         PWMCON1, 3
#define CMDLY4                         PWMCON1, 4
#define COMOD0                         PWMCON1, 5
#define COMOD1                         PWMCON1, 6
#define OVRLP                          PWMCON1, 7
#define PH1EN                          PWMCON0, 0
#define PH2EN                          PWMCON0, 1
#define SYNC0                          PWMCON0, 2
#define SYNC1                          PWMCON0, 3
#define BLANK1                         PWMCON0, 4
#define BLANK2                         PWMCON0, 5
#define PASEN                          PWMCON0, 6
#define PRSEN                          PWMCON0, 7
#define PER0                           PWMCLK, 0
#define PER1                           PWMCLK, 1
#define PER2                           PWMCLK, 2
#define PER3                           PWMCLK, 3
#define PER4                           PWMCLK, 4
#define PWMP0                          PWMCLK, 5
#define PWMP1                          PWMCLK, 6
#define PWMASE                         PWMCLK, 7
#define PH01                           PWMPH1, 0
#define PH11                           PWMPH1, 1
#define PH21                           PWMPH1, 2
#define PH31                           PWMPH1, 3
#define PH41                           PWMPH1, 4
#define C1EN1                          PWMPH1, 5
#define C2EN1                          PWMPH1, 6
#define POL1                           PWMPH1, 7
#define PH02                           PWMPH2, 0
#define PH12                           PWMPH2, 1
#define PH22                           PWMPH2, 2
#define PH32                           PWMPH2, 3
#define PH42                           PWMPH2, 4
#define C1EN2                          PWMPH2, 5
#define C2EN2                          PWMPH2, 6
#define POL2                           PWMPH2, 7
#define C1CH0                          CM1CON0, 0
#define C1CH1                          CM1CON0, 1
#define C1R                            CM1CON0, 2
#define C1SP                           CM1CON0, 3
#define C1POL                          CM1CON0, 4
#define C1OE                           CM1CON0, 5
#define C1OUT                          CM1CON0, 6
#define C1ON                           CM1CON0, 7
#define C2CH0                          CM2CON0, 0
#define C2CH1                          CM2CON0, 1
#define C2R                            CM2CON0, 2
#define C2SP                           CM2CON0, 3
#define C2POL                          CM2CON0, 4
#define C2OE                           CM2CON0, 5
#define C2OUT                          CM2CON0, 6
#define C2ON                           CM2CON0, 7
#define C2SYNC                         CM2CON1, 0
#define T1GSS                          CM2CON1, 1
#define MC2OUT                         CM2CON1, 6
#define MC1OUT                         CM2CON1, 7
#define OPA1ON                         OPA1CON, 7
#define OPA2ON                         OPA2CON, 7

#endif
