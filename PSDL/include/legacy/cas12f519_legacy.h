#ifndef _CAS12F519_H_
#define _CAS12F519_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
PORTB                                  equ 0006h
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
#define RD_bit                         EECON, 0
#define WR_bit                         EECON, 1
#define WREN_bit                       EECON, 2
#define WRERR_bit                      EECON, 3
#define FREE_bit                       EECON, 4

#endif
