#ifndef _AS7695X_LEGACY_H_
#define _AS7695X_LEGACY_H_

INDF                                   equ 0000h
PCL                                    equ 0002h
STATUS                                 equ 0003h
STAT                                   equ 0003h
FSR                                    equ 0004h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PORTB                                  equ 0006h
TRISB                                  equ 0086h
ICKBUG                                 equ 000Eh
BIGBUG                                 equ 000Fh
EXTDATA1                               equ 0010h
EXTDATA2                               equ 0011h
EXTADDR1L                              equ 0012h
EXTADDR1H                              equ 0013h
EXTADDR2L                              equ 0014h
EXTADDR2H                              equ 0015h
DIAG                                   equ 007Fh
#define IRP                            STATUS, 7
#define RP1                            STATUS, 6
#define RP0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#define GIE                            INTCON, 7
#define PEIE                           INTCON, 6
#define T0IE                           INTCON, 5
#define TMR0IE                         INTCON, 5
#define INTE                           INTCON, 4
#define RBIE                           INTCON, 3
#define T0IF                           INTCON, 2
#define TMR0IF                         INTCON, 2
#define INTF                           INTCON, 1
#define RBIF                           INTCON, 0
#define RB7                            PORTB, 7
#define RB6                            PORTB, 6
#define RB5                            PORTB, 5
#define RB4                            PORTB, 4
#define RB3                            PORTB, 3
#define RB2                            PORTB, 2
#define RB1                            PORTB, 1
#define RB0                            PORTB, 0
#define TRISB7                         TRISB, 7
#define TRISB6                         TRISB, 6
#define TRISB5                         TRISB, 5
#define TRISB4                         TRISB, 4
#define TRISB3                         TRISB, 3
#define TRISB2                         TRISB, 2
#define TRISB1                         TRISB, 1
#define TRISB0                         TRISB, 0

#endif
