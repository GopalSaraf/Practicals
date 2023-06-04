#ifndef _CAS12F510_H_
#define _CAS12F510_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
GPIO                                   equ 0006h
CM1CON0                                equ 0007h
ADCON0                                 equ 0008h
ADRES                                  equ 0009h
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define PA0_bit                        STATUS, 5
#define CWUF_bit                       STATUS, 6
#define GPWUF_bit                      STATUS, 7
#define CAL0_bit                       OSCCAL, 1
#define CAL1_bit                       OSCCAL, 2
#define CAL2_bit                       OSCCAL, 3
#define CAL3_bit                       OSCCAL, 4
#define CAL4_bit                       OSCCAL, 5
#define CAL5_bit                       OSCCAL, 6
#define CAL6_bit                       OSCCAL, 7
#define GP0_bit                        GPIO, 0
#define GP1_bit                        GPIO, 1
#define GP2_bit                        GPIO, 2
#define GP3_bit                        GPIO, 3
#define GP4_bit                        GPIO, 4
#define GP5_bit                        GPIO, 5
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

#endif
