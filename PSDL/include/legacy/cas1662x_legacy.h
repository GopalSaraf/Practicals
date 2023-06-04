#ifndef _CAS1662X_H_
#define _CAS1662X_H_

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
CMCON                                  equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
VRCON                                  equ 009Fh
#if defined(_16CE623) || defined(_16CE624) || defined(_16CE625)
EEINTF                                 equ 0090h
#endif
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#define RA4_bit                        PORTA, 4
#define RA3_bit                        PORTA, 3
#define RA2_bit                        PORTA, 2
#define RA1_bit                        PORTA, 1
#define RA0_bit                        PORTA, 0
#define RB7_bit                        PORTB, 7
#define RB6_bit                        PORTB, 6
#define RB5_bit                        PORTB, 5
#define RB4_bit                        PORTB, 4
#define RB3_bit                        PORTB, 3
#define RB2_bit                        PORTB, 2
#define RB1_bit                        PORTB, 1
#define RB0_bit                        PORTB, 0
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define INTE_bit                       INTCON, 4
#define RBIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define INTF_bit                       INTCON, 1
#define RBIF_bit                       INTCON, 0
#define CMIF_bit                       PIR1, 6
#define C2OUT_bit                      CMCON, 7
#define C1OUT_bit                      CMCON, 6
#define CIS_bit                        CMCON, 3
#define CM2_bit                        CMCON, 2
#define CM1_bit                        CMCON, 1
#define CM0_bit                        CMCON, 0
#define RBPU_bit                       OPTION, 7
#define INTEDG_bit                     OPTION, 6
#define T0CS_bit                       OPTION, 5
#define T0SE_bit                       OPTION, 4
#define PSA_bit                        OPTION, 3
#define PS2_bit                        OPTION, 2
#define PS1_bit                        OPTION, 1
#define PS0_bit                        OPTION, 0
#define TRISA4_bit                     TRISA, 4
#define TRISA3_bit                     TRISA, 3
#define TRISA2_bit                     TRISA, 2
#define TRISA1_bit                     TRISA, 1
#define TRISA0_bit                     TRISA, 0
#define TRISB7_bit                     TRISB, 7
#define TRISB6_bit                     TRISB, 6
#define TRISB5_bit                     TRISB, 5
#define TRISB4_bit                     TRISB, 4
#define TRISB3_bit                     TRISB, 3
#define TRISB2_bit                     TRISB, 2
#define TRISB1_bit                     TRISB, 1
#define TRISB0_bit                     TRISB, 0
#define CMIE_bit                       PIE1, 6
#define POR_bit                        PCON, 1
#define BOR_bit                        PCON, 0
#if defined(_16CE623) || defined(_16CE624) || defined(_16CE625)
#define EESCL_bit                      EEINTF, 2
#define EESDA_bit                      EEINTF, 1
#define EEVDD_bit                      EEINTF, 0
#endif
#define VREN_bit                       VRCON, 7
#define VROE_bit                       VRCON, 6
#define VRR_bit                        VRCON, 5
#define VR3_bit                        VRCON, 3
#define VR2_bit                        VRCON, 2
#define VR1_bit                        VRCON, 1
#define VR0_bit                        VRCON, 0

#endif
