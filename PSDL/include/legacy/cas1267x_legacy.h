#ifndef _CAS1267X_H_
#define _CAS1267X_H_

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
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#if defined(_12CE673) || defined(_12CE674)
#define SCL_bit                        GPIO, 7
#define SDA_bit                        GPIO, 6
#endif
#define GP5_bit                        GPIO, 5
#define GP4_bit                        GPIO, 4
#define GP3_bit                        GPIO, 3
#define GP2_bit                        GPIO, 2
#define GP1_bit                        GPIO, 1
#define GP0_bit                        GPIO, 0
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define INTE_bit                       INTCON, 4
#define GPIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define INTF_bit                       INTCON, 1
#define GPIF_bit                       INTCON, 0
#define ADIF_bit                       PIR1, 6
#define ADCS1_bit                      ADCON0, 7
#define ADCS0_bit                      ADCON0, 6
#define CHS1_bit                       ADCON0, 4
#define CHS0_bit                       ADCON0, 3
#define GODONE_bit                     ADCON0, 2
#define ADON_bit                       ADCON0, 0
#define GPPU_bit                       OPTION, 7
#define INTEDG_bit                     OPTION, 6
#define T0CS_bit                       OPTION, 5
#define T0SE_bit                       OPTION, 4
#define PSA_bit                        OPTION, 3
#define PS2_bit                        OPTION, 2
#define PS1_bit                        OPTION, 1
#define PS0_bit                        OPTION, 0
#define TRIS5_bit                      TRIS, 5
#define TRIS4_bit                      TRIS, 4
#define TRIS3_bit                      TRIS, 3
#define TRIS2_bit                      TRIS, 2
#define TRIS1_bit                      TRIS, 1
#define TRIS0_bit                      TRIS, 0
#define ADIE_bit                       PIE1, 6
#define POR_bit                        PCON, 1
#if defined(_12C671) || defined(_12C672)
#define CAL3_bit                       OSCCAL, 7
#define CAL2_bit                       OSCCAL, 6
#define CAL1_bit                       OSCCAL, 5
#define CAL0_bit                       OSCCAL, 4
#define CALFST_bit                     OSCCAL, 3
#define CALSLW_bit                     OSCCAL, 2
#elif defined(_12CE673) || defined(_12CE674)
#define CAL5_bit                       OSCCAL, 7
#define CAL4_bit                       OSCCAL, 6
#endif
#define PCFG2_bit                      ADCON1, 2
#define PCFG1_bit                      ADCON1, 1
#define PCFG0_bit                      ADCON1, 0
#if defined(_12C671) || defined(_12CE673) || defined(_12C672) || defined(_12CE674)
#endif
#if !defined(_12C671) && !defined(_12CE673)
#endif

#endif
