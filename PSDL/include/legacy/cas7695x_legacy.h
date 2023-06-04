#ifndef _CAS7695X_H_
#define _CAS7695X_H_

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
#define IRP_bit                        STATUS, 7
#define RP1_bit                        STATUS, 6
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define TMR0IE_bit                     INTCON, 5
#define INTE_bit                       INTCON, 4
#define RBIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define TMR0IF_bit                     INTCON, 2
#define INTF_bit                       INTCON, 1
#define RBIF_bit                       INTCON, 0
#define RB7_bit                        PORTB, 7
#define RB6_bit                        PORTB, 6
#define RB5_bit                        PORTB, 5
#define RB4_bit                        PORTB, 4
#define RB3_bit                        PORTB, 3
#define RB2_bit                        PORTB, 2
#define RB1_bit                        PORTB, 1
#define RB0_bit                        PORTB, 0
#define TRISB7_bit                     TRISB, 7
#define TRISB6_bit                     TRISB, 6
#define TRISB5_bit                     TRISB, 5
#define TRISB4_bit                     TRISB, 4
#define TRISB3_bit                     TRISB, 3
#define TRISB2_bit                     TRISB, 2
#define TRISB1_bit                     TRISB, 1
#define TRISB0_bit                     TRISB, 0

#endif
