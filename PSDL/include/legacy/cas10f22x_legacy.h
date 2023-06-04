#ifndef _CAS10F22X_H_
#define _CAS10F22X_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
GPIO                                   equ 0006h
ADCON0                                 equ 0007h
ADRES                                  equ 0008h
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define GPWUF_bit                      STATUS, 7
#define FOSC4_bit                      OSCCAL, 0
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
#define ADON_bit                       ADCON0, 0
#define GODONE_bit                     ADCON0, 1
#define CHS0_bit                       ADCON0, 2
#define CHS1_bit                       ADCON0, 3
#define ANS0_bit                       ADCON0, 6
#define ANS1_bit                       ADCON0, 7

#endif
