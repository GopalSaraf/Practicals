#ifndef _AS10F20X_LEGACY_H_
#define _AS10F20X_LEGACY_H_

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
#define GPWUF                          STATUS, 7
#if defined(_10F204) || defined(_10F206)
#define CWUF                           STATUS, 6
#endif
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#if defined(_10F204) || defined(_10F206)
#define CWU                            CMCON, 0
#define CPREF                          CMCON, 1
#define CNREF                          CMCON, 2
#define CMPON                          CMCON, 3
#define CMPT0CS                        CMCON, 4
#define POL                            CMCON, 5
#define COUTEN                         CMCON, 6
#define CMPOUT                         CMCON, 7
#endif
#define CAL6                           OSCCAL, 7
#define CAL5                           OSCCAL, 6
#define CAL4                           OSCCAL, 5
#define CAL3                           OSCCAL, 4
#define CAL2                           OSCCAL, 3
#define CAL1                           OSCCAL, 2
#define CAL0                           OSCCAL, 1
#define FOSC4                          OSCCAL, 0
#define GP3                            GPIO, 3
#define GP2                            GPIO, 2
#define GP1                            GPIO, 1
#define GP0                            GPIO, 0
#if defined(_10F204) || defined(_10F206)
#endif

#endif
