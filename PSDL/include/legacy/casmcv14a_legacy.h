#ifndef _CASMCV14A_H_
#define _CASMCV14A_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
PORTB                                  equ 0006h
PORTC                                  equ 0007h
CM1CON0                                equ 0008h
ADCON0                                 equ 0009h
ADRES                                  equ 000Ah
CM2CON0                                equ 000Bh
VRCON                                  equ 000Ch
EECON                                  equ 0021h
EEDATA                                 equ 0025h
EEDATL                                 equ 0025h
EEADR                                  equ 0026h
EEADRL                                 equ 0026h
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define PA0_bit                        STATUS, 5
#define CWUF_bit                       STATUS, 6
#define RBWUF_bit                      STATUS, 7
#define CAL0_bit                       OSCCAL, 1
#define CAL1_bit                       OSCCAL, 2
#define CAL2_bit                       OSCCAL, 3
#define CAL3_bit                       OSCCAL, 4
#define CAL4_bit                       OSCCAL, 5
#define CAL5_bit                       OSCCAL, 6
#define CAL6_bit                       OSCCAL, 7
#define RB0_bit                        PORTB, 0
#define RB1_bit                        PORTB, 1
#define RB2_bit                        PORTB, 2
#define RB3_bit                        PORTB, 3
#define RB4_bit                        PORTB, 4
#define RB5_bit                        PORTB, 5
#define RC0_bit                        PORTC, 0
#define RC1_bit                        PORTC, 1
#define RC2_bit                        PORTC, 2
#define RC3_bit                        PORTC, 3
#define RC4_bit                        PORTC, 4
#define RC5_bit                        PORTC, 5
#define C1WU_bit                       CM1CON0, 0
#define C1PREF_bit                     CM1CON0, 1
#define C1NREF_bit                     CM1CON0, 2
#define C1ON_bit                       CM1CON0, 3
#define C1T0CS_bit                     CM1CON0, 4
#define C1POL_bit                      CM1CON0, 5
#define C1OUTEN_bit                    CM1CON0, 6
#define C1OUT_bit                      CM1CON0, 7
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define ADCS0_bit                      ADCON0, 4
#define ADCS1_bit                      ADCON0, 5
#define ANS0_bit                       ADCON0, 6
#define ANS1_bit                       ADCON0, 7
#define C2WU_bit                       CM2CON0, 0
#define C2PREF1_bit                    CM2CON0, 1
#define C2NREF_bit                     CM2CON0, 2
#define C2ON_bit                       CM2CON0, 3
#define C2PREF2_bit                    CM2CON0, 4
#define C2POL_bit                      CM2CON0, 5
#define C2OUTEN_bit                    CM2CON0, 6
#define C2OUT_bit                      CM2CON0, 7
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define VRR_bit                        VRCON, 5
#define VROE_bit                       VRCON, 6
#define VREN_bit                       VRCON, 7
#define RD_bit                         EECON, 0
#define WR_bit                         EECON, 1
#define WREN_bit                       EECON, 2
#define WRERR_bit                      EECON, 3
#define FREE_bit                       EECON, 4

#endif
