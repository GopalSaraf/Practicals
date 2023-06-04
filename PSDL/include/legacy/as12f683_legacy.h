#ifndef _AS12F683_LEGACY_H_
#define _AS12F683_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
GPIO                                   equ 0005h
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
CMCON0                                 equ 0019h
CMCON1                                 equ 001Ah
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISIO                                 equ 0085h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
PR2                                    equ 0092h
WPU                                    equ 0095h
IOC                                    equ 0096h
VRCON                                  equ 0099h
EEDAT                                  equ 009Ah
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EEADRL                                 equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
ADRESL                                 equ 009Eh
ANSEL                                  equ 009Fh
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define PD                             STATUS, 3
#define TO                             STATUS, 4
#define RP0                            STATUS, 5
#define RP1                            STATUS, 6
#define IRP                            STATUS, 7
#define GPIO0                          GPIO, 0
#define GPIO1                          GPIO, 1
#define GPIO2                          GPIO, 2
#define GPIO3                          GPIO, 3
#define GPIO4                          GPIO, 4
#define GPIO5                          GPIO, 5
#define GPIF                           INTCON, 0
#define INTF                           INTCON, 1
#define T0IF                           INTCON, 2
#define GPIE                           INTCON, 3
#define INTE                           INTCON, 4
#define T0IE                           INTCON, 5
#define PEIE                           INTCON, 6
#define GIE                            INTCON, 7
#define TMR1IF                         PIR1, 0
#define TMR2IF                         PIR1, 1
#define OSFIF                          PIR1, 2
#define CMIF                           PIR1, 3
#define CCP1IF                         PIR1, 5
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
#define CM0                            CMCON0, 0
#define CM1                            CMCON0, 1
#define CM2                            CMCON0, 2
#define CIS                            CMCON0, 3
#define CINV                           CMCON0, 4
#define COUT                           CMCON0, 6
#define CMSYNC                         CMCON1, 0
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
#define GPPU                           OPTION, 7
#define TRISIO0                        TRISIO, 0
#define TRISIO1                        TRISIO, 1
#define TRISIO2                        TRISIO, 2
#define TRISIO3                        TRISIO, 3
#define TRISIO4                        TRISIO, 4
#define TRISIO5                        TRISIO, 5
#define TMR1IE                         PIE1, 0
#define TMR2IE                         PIE1, 1
#define OSFIE                          PIE1, 2
#define CMIE                           PIE1, 3
#define CCP1IE                         PIE1, 5
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
#define IRCF0                          OSCCON, 4
#define IRCF1                          OSCCON, 5
#define IRCF2                          OSCCON, 6
#define TUN0                           OSCTUNE, 0
#define TUN1                           OSCTUNE, 1
#define TUN2                           OSCTUNE, 2
#define TUN3                           OSCTUNE, 3
#define TUN4                           OSCTUNE, 4
#define WPU0                           WPU, 0
#define WPU1                           WPU, 1
#define WPU2                           WPU, 2
#define WPU3                           WPU, 3
#define WPU4                           WPU, 4
#define WPU5                           WPU, 5
#define IOC0                           IOC, 0
#define IOC1                           IOC, 1
#define IOC2                           IOC, 2
#define IOC3                           IOC, 3
#define IOC4                           IOC, 4
#define IOC5                           IOC, 5
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
#define ANS0                           ANSEL, 0
#define ANS1                           ANSEL, 1
#define ANS2                           ANSEL, 2
#define ANS3                           ANSEL, 3
#define ADCS0                          ANSEL, 4
#define ADCS1                          ANSEL, 5
#define ADCS2                          ANSEL, 6

#endif
