#ifndef _CAS1643X_H_
#define _CAS1643X_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
#if	defined(_16C432)
PORTA                                  equ 0005h
PORTB                                  equ 0006h
#endif
#if 	defined(_16C433)
GPIO                                   equ 0005h
#endif
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
#if	defined(_16C433)
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
#endif
#if	defined(_16C432)
CMCON                                  equ 001Fh
#endif
OPTION_REG                             equ 0081h
#if 	defined(_16C432)
TRISA                                  equ 0085h
TRISB                                  equ 0086h
#endif
#if	defined(_16C433)
TRIS_REG                               equ 0085h
#endif
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
#if	defined(_16C433)
OSCCAL                                 equ 008Fh
ADCON1                                 equ 009Fh
#endif
#if	defined(_16C432)
LININTF                                equ 0090h
VRCON                                  equ 009Fh
#endif
#define TMR07_bit                      TMR0, 7
#define TMR06_bit                      TMR0, 6
#define TMR05_bit                      TMR0, 5
#define TMR04_bit                      TMR0, 4
#define TMR03_bit                      TMR0, 3
#define TMR02_bit                      TMR0, 2
#define TMR01_bit                      TMR0, 1
#define TMR00_bit                      TMR0, 0
#define PCL7_bit                       PCL, 7
#define PCL6_bit                       PCL, 6
#define PCL5_bit                       PCL, 5
#define PCL4_bit                       PCL, 4
#define PCL3_bit                       PCL, 3
#define PCL2_bit                       PCL, 2
#define PCL1_bit                       PCL, 1
#define PCL0_bit                       PCL, 0
#define IRP_bit                        STATUS, 7
#define RP1_bit                        STATUS, 6
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#if	defined(_16C432)
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
#endif
#if	defined(_16C433)
#define LINTX_bit                      GPIO, 7
#define LINRX_bit                      GPIO, 6
#define GP5_bit                        GPIO, 5
#define GP4_bit                        GPIO, 4
#define GP3_bit                        GPIO, 3
#define GP2_bit                        GPIO, 2
#define GP1_bit                        GPIO, 1
#define GP0_bit                        GPIO, 0
#endif
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define INTE_bit                       INTCON, 4
#define RBIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define INTF_bit                       INTCON, 1
#define RBIF_bit                       INTCON, 0
#if 	defined(_16C432)
#define CMIF_bit                       PIR1, 6
#endif
#if	defined(_16C433)
#define ADIF_bit                       PIR1, 6
#endif
#if	defined(_16C433)
#define ADRES7_bit                     ADRES, 7
#define ADRES6_bit                     ADRES, 6
#define ADRES5_bit                     ADRES, 5
#define ADRES4_bit                     ADRES, 4
#define ADRES3_bit                     ADRES, 3
#define ADRES2_bit                     ADRES, 2
#define ADRES1_bit                     ADRES, 1
#define ADRES0_bit                     ADRES, 0
#define ADCS1_bit                      ADCON0, 7
#define ADCS0_bit                      ADCON0, 6
#define CHS1_bit                       ADCON0, 4
#define CHS0_bit                       ADCON0, 3
#define GO_DONE_bit                    ADCON0, 2
#define ADON_bit                       ADCON0, 0
#endif
#if	defined(_16C432)
#define C2OUT_bit                      CMCON, 7
#define C1OUT_bit                      CMCON, 6
#define CIS_bit                        CMCON, 3
#define CM2_bit                        CMCON, 2
#define CM1_bit                        CMCON, 1
#define CM0_bit                        CMCON, 0
#endif
#if	defined(_16C432)
#define RBPU_bit                       OPTION, 7
#endif
#if	defined(_16C433)
#define GPPU_bit                       OPTION, 7
#endif
#define INTEDG_bit                     OPTION, 6
#define T0CS_bit                       OPTION, 5
#define T0SE_bit                       OPTION, 4
#define PSA_bit                        OPTION, 3
#define PS2_bit                        OPTION, 2
#define PS1_bit                        OPTION, 1
#define PS0_bit                        OPTION, 0
#if	defined(_16C432)
#define TRISA4_bit                     TRISA, 4
#define TRISA3_bit                     TRISA, 3
#define TRISA2_bit                     TRISA, 2
#define TLINRX_bit                     TRISA, 1
#define TRISA0_bit                     TRISA, 0
#define TRISB7_bit                     TRISB, 4
#define TRISB6_bit                     TRISB, 4
#define TRISB5_bit                     TRISB, 4
#define TRISB4_bit                     TRISB, 4
#define TRISB3_bit                     TRISB, 4
#define TRISB2_bit                     TRISB, 4
#define TRISB1_bit                     TRISB, 4
#define TRISB0_bit                     TRISB, 4
#endif
#if	defined(_16C433)
#define TRIS5_bit                      TRIS, 5
#define TRIS4_bit                      TRIS, 4
#define TRIS3_bit                      TRIS, 3
#define TRIS2_bit                      TRIS, 2
#define TRIS1_bit                      TRIS, 1
#define TRIS0_bit                      TRIS, 0
#endif
#if	defined(_16C432)
#define CMIE_bit                       PIE1, 6
#endif
#if	defined(_16C433)
#define ADIE_bit                       PIE1, 6
#endif
#define POR_bit                        PCON, 1
#if	defined(_16C432)
#define BOD_bit                        PCON, 0
#endif
#if	defined(_16C432)
#define LINV_bit                       LININTF, 0
#define VREN_bit                       VRCON, 7
#define VROE_bit                       VRCON, 6
#define VRR_bit                        VRCON, 5
#define VR3_bit                        VRCON, 3
#define VR2_bit                        VRCON, 2
#define VR1_bit                        VRCON, 1
#define VR0_bit                        VRCON, 0
#endif
#if 	defined(_16C433)
#define CAL3_bit                       OSCCAL, 7
#define CAL2_bit                       OSCCAL, 6
#define CAL1_bit                       OSCCAL, 5
#define CAL0_bit                       OSCCAL, 4
#define CALFST_bit                     OSCCAL, 3
#define CALSLW_bit                     OSCCAL, 2
#define PCFG2_bit                      ADCON1, 2
#define PCFG1_bit                      ADCON1, 1
#define PCFG0_bit                      ADCON1, 0
#endif
#if	defined(_16C432)
#endif
#if 	defined(_16C433)
#endif
#if	defined(_16C433)
#endif
#if	defined(_16C432)
#endif
#if	defined(_16C432)
#endif
#if	defined(_16C433)
#endif

#endif
