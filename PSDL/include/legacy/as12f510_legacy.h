#ifndef _AS12F510_LEGACY_H_
#define _AS12F510_LEGACY_H_

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
#define CARRY                          STATUS, 0
#define DC                             STATUS, 1
#define ZERO                           STATUS, 2
#define PD                             STATUS, 3
#define TO                             STATUS, 4
#define PA0                            STATUS, 5
#define CWUF                           STATUS, 6
#define GPWUF                          STATUS, 7
#define CAL0                           OSCCAL, 1
#define CAL1                           OSCCAL, 2
#define CAL2                           OSCCAL, 3
#define CAL3                           OSCCAL, 4
#define CAL4                           OSCCAL, 5
#define CAL5                           OSCCAL, 6
#define CAL6                           OSCCAL, 7
#define GP0                            GPIO, 0
#define GP1                            GPIO, 1
#define GP2                            GPIO, 2
#define GP3                            GPIO, 3
#define GP4                            GPIO, 4
#define GP5                            GPIO, 5
#define C1WU                           CM1CON0, 0
#define C1PREF                         CM1CON0, 1
#define C1NREF                         CM1CON0, 2
#define C1ON                           CM1CON0, 3
#define C1T0CS                         CM1CON0, 4
#define C1POL                          CM1CON0, 5
#define C1OUTEN                        CM1CON0, 6
#define C1OUT                          CM1CON0, 7
#define ADON                           ADCON0, 0
#define GODONE                         ADCON0, 1
#define CHS0                           ADCON0, 2
#define CHS1                           ADCON0, 3
#define ADCS0                          ADCON0, 4
#define ADCS1                          ADCON0, 5
#define ANS0                           ADCON0, 6
#define ANS1                           ADCON0, 7

#endif
