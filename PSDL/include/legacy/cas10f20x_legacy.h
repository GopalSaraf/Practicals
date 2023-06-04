#ifndef _CAS10F20X_H_
#define _CAS10F20X_H_

INDF                                   equ 0000h
RTCC                                   equ 0001h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
OSCCAL                                 equ 0005h
GPIO                                   equ 0006h
#if defined(_10F204) || defined(_10F206)
CMCON                                  equ 0007h
CMCON0                                 equ 0007h
#endif
#define GPWUF_bit                      STATUS, 7
#if defined(_10F204) || defined(_10F206)
#define CWUF_bit                       STATUS, 6
#endif
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#if defined(_10F204) || defined(_10F206)
#define CWU_bit                        CMCON, 0
#define CPREF_bit                      CMCON, 1
#define CNREF_bit                      CMCON, 2
#define CMPON_bit                      CMCON, 3
#define CMPT0CS_bit                    CMCON, 4
#define POL_bit                        CMCON, 5
#define COUTEN_bit                     CMCON, 6
#define CMPOUT_bit                     CMCON, 7
#endif
#define CAL6_bit                       OSCCAL, 7
#define CAL5_bit                       OSCCAL, 6
#define CAL4_bit                       OSCCAL, 5
#define CAL3_bit                       OSCCAL, 4
#define CAL2_bit                       OSCCAL, 3
#define CAL1_bit                       OSCCAL, 2
#define CAL0_bit                       OSCCAL, 1
#define FOSC4_bit                      OSCCAL, 0
#define GP3_bit                        GPIO, 3
#define GP2_bit                        GPIO, 2
#define GP1_bit                        GPIO, 1
#define GP0_bit                        GPIO, 0
#if defined(_10F204) || defined(_10F206)
#endif

#endif
