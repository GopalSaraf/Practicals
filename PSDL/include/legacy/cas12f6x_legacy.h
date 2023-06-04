#ifndef _CAS12F6X_H_
#define _CAS12F6X_H_

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
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define RP0_bit                        STATUS, 5
#define GPIO0_bit                      GPIO, 0
#define GPIO1_bit                      GPIO, 1
#define GPIO2_bit                      GPIO, 2
#define GPIO3_bit                      GPIO, 3
#define GPIO4_bit                      GPIO, 4
#define GPIO5_bit                      GPIO, 5
#define GPIF_bit                       INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define GPIE_bit                       INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#define CMIF_bit                       PIR1, 3
#define ADIF_bit                       PIR1, 6
#define EEIF_bit                       PIR1, 7
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define TMR1GE_bit                     T1CON, 6
#define CM0_bit                        CMCON, 0
#define CM1_bit                        CMCON, 1
#define CM2_bit                        CMCON, 2
#define CIS_bit                        CMCON, 3
#define CINV_bit                       CMCON, 4
#define COUT_bit                       CMCON, 6
#if defined(_12F675)
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define VCFG_bit                       ADCON0, 6
#define ADFM_bit                       ADCON0, 7
#endif
#define PS0_bit                        OPTION, 0
#define PS1_bit                        OPTION, 1
#define PS2_bit                        OPTION, 2
#define PSA_bit                        OPTION, 3
#define T0SE_bit                       OPTION, 4
#define T0CS_bit                       OPTION, 5
#define INTEDG_bit                     OPTION, 6
#define GPPU_bit                       OPTION, 7
#define TRIS0_bit                      TRISIO, 0
#define TRIS1_bit                      TRISIO, 1
#define TRIS2_bit                      TRISIO, 2
#define TRIS3_bit                      TRISIO, 3
#define TRIS4_bit                      TRISIO, 4
#define TRIS5_bit                      TRISIO, 5
#define TMR1IE_bit                     PIE1, 0
#define CMIE_bit                       PIE1, 3
#define ADIE_bit                       PIE1, 6
#define EEIE_bit                       PIE1, 7
#define BOD_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define CAL0_bit                       OSCCAL, 2
#define CAL1_bit                       OSCCAL, 3
#define CAL2_bit                       OSCCAL, 4
#define CAL3_bit                       OSCCAL, 5
#define CAL4_bit                       OSCCAL, 6
#define CAL5_bit                       OSCCAL, 7
#define WPU0_bit                       WPU, 0
#define WPU1_bit                       WPU, 1
#define WPU2_bit                       WPU, 2
#define WPU4_bit                       WPU, 4
#define WPU5_bit                       WPU, 5
#define IOCB0_bit                      IOCB, 0
#define IOCB1_bit                      IOCB, 1
#define IOCB2_bit                      IOCB, 2
#define IOCB3_bit                      IOCB, 3
#define IOCB4_bit                      IOCB, 4
#define IOCB5_bit                      IOCB, 5
#define IOC0_bit                       IOCB, 0
#define IOC1_bit                       IOCB, 1
#define IOC2_bit                       IOCB, 2
#define IOC3_bit                       IOCB, 3
#define IOC4_bit                       IOCB, 4
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define VRR_bit                        VRCON, 5
#define VREN_bit                       VRCON, 7
#define RD_bit                         EECON1, 0
#define WR_bit                         EECON1, 1
#define WREN_bit                       EECON1, 2
#define WRERR_bit                      EECON1, 3
#if defined(_12F675)
#define ANS0_bit                       ANSEL, 0
#define ANS1_bit                       ANSEL, 1
#define ANS2_bit                       ANSEL, 2
#define ANS3_bit                       ANSEL, 3
#define ADCS0_bit                      ANSEL, 4
#define ADCS1_bit                      ANSEL, 5
#define ADCS2_bit                      ANSEL, 6
#endif

#endif
