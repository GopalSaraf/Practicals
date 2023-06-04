#ifndef _AS12F6X_LEGACY_H_
#define _AS12F6X_LEGACY_H_

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
CMCON                                  equ 0019h
#if defined(_12F675)
ADRESH                                 equ 001Eh
ADCON0                                 equ 001Fh
#endif
OPTION_REG                             equ 0081h
TRISIO                                 equ 0085h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCAL                                 equ 0090h
WPU                                    equ 0095h
IOCB                                   equ 0096h
IOC                                    equ 0096h
VRCON                                  equ 0099h
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
#if defined(_12F675)
ADRESL                                 equ 009Eh
ANSEL                                  equ 009Fh
#endif
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define PD                             STATUS, 3
#define TO                             STATUS, 4
#define RP0                            STATUS, 5
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
#define CMIF                           PIR1, 3
#define ADIF                           PIR1, 6
#define EEIF                           PIR1, 7
#define TMR1ON                         T1CON, 0
#define TMR1CS                         T1CON, 1
#define T1SYNC                         T1CON, 2
#define T1OSCEN                        T1CON, 3
#define T1CKPS0                        T1CON, 4
#define T1CKPS1                        T1CON, 5
#define TMR1GE                         T1CON, 6
#define CM0                            CMCON, 0
#define CM1                            CMCON, 1
#define CM2                            CMCON, 2
#define CIS                            CMCON, 3
#define CINV                           CMCON, 4
#define COUT                           CMCON, 6
#if defined(_12F675)
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define VCFG                           ADCON0, 6
#define ADFM                           ADCON0, 7
#endif
#define PS0                            OPTION, 0
#define PS1                            OPTION, 1
#define PS2                            OPTION, 2
#define PSA                            OPTION, 3
#define T0SE                           OPTION, 4
#define T0CS                           OPTION, 5
#define INTEDG                         OPTION, 6
#define GPPU                           OPTION, 7
#define TRIS0                          TRISIO, 0
#define TRIS1                          TRISIO, 1
#define TRIS2                          TRISIO, 2
#define TRIS3                          TRISIO, 3
#define TRIS4                          TRISIO, 4
#define TRIS5                          TRISIO, 5
#define TMR1IE                         PIE1, 0
#define CMIE                           PIE1, 3
#define ADIE                           PIE1, 6
#define EEIE                           PIE1, 7
#define BOD                            PCON, 0
#define POR                            PCON, 1
#define CAL0                           OSCCAL, 2
#define CAL1                           OSCCAL, 3
#define CAL2                           OSCCAL, 4
#define CAL3                           OSCCAL, 5
#define CAL4                           OSCCAL, 6
#define CAL5                           OSCCAL, 7
#define WPU0                           WPU, 0
#define WPU1                           WPU, 1
#define WPU2                           WPU, 2
#define WPU4                           WPU, 4
#define WPU5                           WPU, 5
#define IOCB0                          IOCB, 0
#define IOCB1                          IOCB, 1
#define IOCB2                          IOCB, 2
#define IOCB3                          IOCB, 3
#define IOCB4                          IOCB, 4
#define IOCB5                          IOCB, 5
#define IOC0                           IOCB, 0
#define IOC1                           IOCB, 1
#define IOC2                           IOCB, 2
#define IOC3                           IOCB, 3
#define IOC4                           IOCB, 4
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
#if defined(_12F675)
#define ANS0                           ANSEL, 0
#define ANS1                           ANSEL, 1
#define ANS2                           ANSEL, 2
#define ANS3                           ANSEL, 3
#define ADCS0                          ANSEL, 4
#define ADCS1                          ANSEL, 5
#define ADCS2                          ANSEL, 6
#endif

#endif
