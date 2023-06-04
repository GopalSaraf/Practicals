#ifndef _AS1267X_LEGACY_H_
#define _AS1267X_LEGACY_H_

INDF                                   equ 0000h
RTCC                                   equ 0001h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
GPIO                                   equ 0005h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRIS_REG                               equ 0085h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCAL                                 equ 008Fh
ADCON1                                 equ 009Fh
#define RP0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#if defined(_12CE673) || defined(_12CE674)
#define SCL                            GPIO, 7
#define SDA                            GPIO, 6
#endif
#define GP5                            GPIO, 5
#define GP4                            GPIO, 4
#define GP3                            GPIO, 3
#define GP2                            GPIO, 2
#define GP1                            GPIO, 1
#define GP0                            GPIO, 0
#define GIE                            INTCON, 7
#define PEIE                           INTCON, 6
#define T0IE                           INTCON, 5
#define INTE                           INTCON, 4
#define GPIE                           INTCON, 3
#define T0IF                           INTCON, 2
#define INTF                           INTCON, 1
#define GPIF                           INTCON, 0
#define ADIF                           PIR1, 6
#define ADCS1                          ADCON0, 7
#define ADCS0                          ADCON0, 6
#define CHS1                           ADCON0, 4
#define CHS0                           ADCON0, 3
#define GODONE                         ADCON0, 2
#define ADON                           ADCON0, 0
#define GPPU                           OPTION, 7
#define INTEDG                         OPTION, 6
#define T0CS                           OPTION, 5
#define T0SE                           OPTION, 4
#define PSA                            OPTION, 3
#define PS2                            OPTION, 2
#define PS1                            OPTION, 1
#define PS0                            OPTION, 0
#define TRIS5                          TRIS, 5
#define TRIS4                          TRIS, 4
#define TRIS3                          TRIS, 3
#define TRIS2                          TRIS, 2
#define TRIS1                          TRIS, 1
#define TRIS0                          TRIS, 0
#define ADIE                           PIE1, 6
#define POR                            PCON, 1
#if defined(_12C671) || defined(_12C672)
#define CAL3                           OSCCAL, 7
#define CAL2                           OSCCAL, 6
#define CAL1                           OSCCAL, 5
#define CAL0                           OSCCAL, 4
#define CALFST                         OSCCAL, 3
#define CALSLW                         OSCCAL, 2
#elif defined(_12CE673) || defined(_12CE674)
#define CAL5                           OSCCAL, 7
#define CAL4                           OSCCAL, 6
#endif
#define PCFG2                          ADCON1, 2
#define PCFG1                          ADCON1, 1
#define PCFG0                          ADCON1, 0
#if defined(_12C671) || defined(_12CE673) || defined(_12C672) || defined(_12CE674)
#endif
#if !defined(_12C671) && !defined(_12CE673)
#endif

#endif
