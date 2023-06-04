#ifndef _CAS12F683_H_
#define _CAS12F683_H_

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
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define RP0_bit                        STATUS, 5
#define RP1_bit                        STATUS, 6
#define IRP_bit                        STATUS, 7
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
#define TMR2IF_bit                     PIR1, 1
#define OSFIF_bit                      PIR1, 2
#define CMIF_bit                       PIR1, 3
#define CCP1IF_bit                     PIR1, 5
#define ADIF_bit                       PIR1, 6
#define EEIF_bit                       PIR1, 7
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define T1GE_bit                       T1CON, 6
#define T1GINV_bit                     T1CON, 7
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
#define SWDTEN_bit                     WDTCON, 0
#define WDTPS0_bit                     WDTCON, 1
#define WDTPS1_bit                     WDTCON, 2
#define WDTPS2_bit                     WDTCON, 3
#define WDTPS3_bit                     WDTCON, 4
#define CM0_bit                        CMCON0, 0
#define CM1_bit                        CMCON0, 1
#define CM2_bit                        CMCON0, 2
#define CIS_bit                        CMCON0, 3
#define CINV_bit                       CMCON0, 4
#define COUT_bit                       CMCON0, 6
#define CMSYNC_bit                     CMCON1, 0
#define T1GSS_bit                      CMCON1, 1
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define CHS2_bit                       ADCON0, 4
#define VCFG_bit                       ADCON0, 6
#define ADFM_bit                       ADCON0, 7
#define PS0_bit                        OPTION, 0
#define PS1_bit                        OPTION, 1
#define PS2_bit                        OPTION, 2
#define PSA_bit                        OPTION, 3
#define T0SE_bit                       OPTION, 4
#define T0CS_bit                       OPTION, 5
#define INTEDG_bit                     OPTION, 6
#define GPPU_bit                       OPTION, 7
#define TRISIO0_bit                    TRISIO, 0
#define TRISIO1_bit                    TRISIO, 1
#define TRISIO2_bit                    TRISIO, 2
#define TRISIO3_bit                    TRISIO, 3
#define TRISIO4_bit                    TRISIO, 4
#define TRISIO5_bit                    TRISIO, 5
#define TMR1IE_bit                     PIE1, 0
#define TMR2IE_bit                     PIE1, 1
#define OSFIE_bit                      PIE1, 2
#define CMIE_bit                       PIE1, 3
#define CCP1IE_bit                     PIE1, 5
#define ADIE_bit                       PIE1, 6
#define EEIE_bit                       PIE1, 7
#define BOD_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define SBODEN_bit                     PCON, 4
#define ULPWUE_bit                     PCON, 5
#define SCS_bit                        OSCCON, 0
#define LTS_bit                        OSCCON, 1
#define HTS_bit                        OSCCON, 2
#define OSTS_bit                       OSCCON, 3
#define IRCF0_bit                      OSCCON, 4
#define IRCF1_bit                      OSCCON, 5
#define IRCF2_bit                      OSCCON, 6
#define TUN0_bit                       OSCTUNE, 0
#define TUN1_bit                       OSCTUNE, 1
#define TUN2_bit                       OSCTUNE, 2
#define TUN3_bit                       OSCTUNE, 3
#define TUN4_bit                       OSCTUNE, 4
#define WPU0_bit                       WPU, 0
#define WPU1_bit                       WPU, 1
#define WPU2_bit                       WPU, 2
#define WPU3_bit                       WPU, 3
#define WPU4_bit                       WPU, 4
#define WPU5_bit                       WPU, 5
#define IOC0_bit                       IOC, 0
#define IOC1_bit                       IOC, 1
#define IOC2_bit                       IOC, 2
#define IOC3_bit                       IOC, 3
#define IOC4_bit                       IOC, 4
#define IOC5_bit                       IOC, 5
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
#define ANS0_bit                       ANSEL, 0
#define ANS1_bit                       ANSEL, 1
#define ANS2_bit                       ANSEL, 2
#define ANS3_bit                       ANSEL, 3
#define ADCS0_bit                      ANSEL, 4
#define ADCS1_bit                      ANSEL, 5
#define ADCS2_bit                      ANSEL, 6

#endif
