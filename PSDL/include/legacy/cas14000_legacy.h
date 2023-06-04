#ifndef _CAS14000_H_
#define _CAS14000_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTC                                  equ 0007h
PORTD                                  equ 0008h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
ADTMRL                                 equ 000Eh
ADTMRH                                 equ 000Fh
I2CBUF                                 equ 0013h
I2CCON                                 equ 0014h
ADCAPL                                 equ 0015h
ADCAPH                                 equ 0016h
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISC                                  equ 0087h
TRISD                                  equ 0088h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
SLPCON                                 equ 008Fh
I2CADD                                 equ 0093h
I2CSTAT                                equ 0094h
PREFA                                  equ 009Bh
PREFB                                  equ 009Ch
CMCON                                  equ 009Dh
MISC                                   equ 009Eh
ADCON1                                 equ 009Fh
#define RP0_bit                        STATUS, 5
#define TO_bit                         STATUS, 4
#define PD_bit                         STATUS, 3
#define ZERO_bit                       STATUS, 2
#define DC_bit                         STATUS, 1
#define CARRY_bit                      STATUS, 0
#define RA7_bit                        PORTA, 7
#define RA6_bit                        PORTA, 6
#define RA5_bit                        PORTA, 5
#define RA4_bit                        PORTA, 4
#define RA3_bit                        PORTA, 3
#define RA2_bit                        PORTA, 2
#define RA1_bit                        PORTA, 1
#define RA0_bit                        PORTA, 0
#define RC7_bit                        PORTC, 7
#define RC6_bit                        PORTC, 6
#define RC5_bit                        PORTC, 5
#define RC4_bit                        PORTC, 4
#define RC3_bit                        PORTC, 3
#define RC2_bit                        PORTC, 2
#define RC1_bit                        PORTC, 1
#define RC0_bit                        PORTC, 0
#define RD7_bit                        PORTD, 7
#define RD6_bit                        PORTD, 6
#define RD5_bit                        PORTD, 5
#define RD4_bit                        PORTD, 4
#define RD3_bit                        PORTD, 3
#define RD2_bit                        PORTD, 2
#define RD1_bit                        PORTD, 1
#define RD0_bit                        PORTD, 0
#define GIE_bit                        INTCON, 7
#define PEIE_bit                       INTCON, 6
#define T0IE_bit                       INTCON, 5
#define T0IF_bit                       INTCON, 2
#define CMIF_bit                       PIR1, 7
#define PBIF_bit                       PIR1, 4
#define I2CIF_bit                      PIR1, 3
#define RCIF_bit                       PIR1, 2
#define ADCIF_bit                      PIR1, 1
#define OVFIF_bit                      PIR1, 0
#define WCOL_bit                       I2CCON, 7
#define I2COV_bit                      I2CCON, 6
#define I2CEN_bit                      I2CCON, 5
#define CKP_bit                        I2CCON, 4
#define I2CM3_bit                      I2CCON, 3
#define I2CM2_bit                      I2CCON, 2
#define I2CM1_bit                      I2CCON, 1
#define I2CM0_bit                      I2CCON, 0
#define ADCS3_bit                      ADCON0, 7
#define ADCS2_bit                      ADCON0, 6
#define ADCS1_bit                      ADCON0, 5
#define ADCS0_bit                      ADCON0, 4
#define AMUXOE_bit                     ADCON0, 2
#define ADRST_bit                      ADCON0, 1
#define ADZERO_bit                     ADCON0, 0
#define RCPU_bit                       OPTION, 7
#define T0CS_bit                       OPTION, 5
#define T0SE_bit                       OPTION, 4
#define PSA_bit                        OPTION, 3
#define PS2_bit                        OPTION, 2
#define PS1_bit                        OPTION, 1
#define PS0_bit                        OPTION, 0
#define TRISA7_bit                     TRISA, 7
#define TRISA6_bit                     TRISA, 6
#define TRISA5_bit                     TRISA, 5
#define TRISA4_bit                     TRISA, 4
#define TRISA3_bit                     TRISA, 3
#define TRISA2_bit                     TRISA, 2
#define TRISA1_bit                     TRISA, 1
#define TRISA0_bit                     TRISA, 0
#define TRISC7_bit                     TRISC, 7
#define TRISC6_bit                     TRISC, 6
#define TRISC5_bit                     TRISC, 5
#define TRISC4_bit                     TRISC, 4
#define TRISC3_bit                     TRISC, 3
#define TRISC2_bit                     TRISC, 2
#define TRISC1_bit                     TRISC, 1
#define TRISC0_bit                     TRISC, 0
#define TRISD7_bit                     TRISD, 7
#define TRISD6_bit                     TRISD, 6
#define TRISD5_bit                     TRISD, 5
#define TRISD4_bit                     TRISD, 4
#define TRISD3_bit                     TRISD, 3
#define TRISD2_bit                     TRISD, 2
#define TRISD1_bit                     TRISD, 1
#define TRISD0_bit                     TRISD, 0
#define CMIE_bit                       PIE1, 7
#define PBIE_bit                       PIE1, 4
#define I2CIE_bit                      PIE1, 3
#define RCIE_bit                       PIE1, 2
#define ADCIE_bit                      PIE1, 1
#define OVFIE_bit                      PIE1, 0
#define POR_bit                        PCON, 1
#define LVD_bit                        PCON, 0
#define HIBEN_bit                      SLPCON, 7
#define REFOFF_bit                     SLPCON, 5
#define LSOFF_bit                      SLPCON, 4
#define OSCOFF_bit                     SLPCON, 3
#define CMOFF_bit                      SLPCON, 2
#define TEMPOFF_bit                    SLPCON, 1
#define ADOFF_bit                      SLPCON, 0
#define DA_bit                         I2CSTAT, 5
#define STOP_bit                       I2CSTAT, 4
#define START_bit                      I2CSTAT, 3
#define RW_bit                         I2CSTAT, 2
#define UA_bit                         I2CSTAT, 1
#define BF_bit                         I2CSTAT, 0
#ifdef __STAT_BACKWARD_COMPATIBILITY
#endif
#define PRA7_bit                       PREFA, 7
#define PRA6_bit                       PREFA, 6
#define PRA5_bit                       PREFA, 5
#define PRA4_bit                       PREFA, 4
#define PRA3_bit                       PREFA, 3
#define PRA2_bit                       PREFA, 2
#define PRA1_bit                       PREFA, 1
#define PRA0_bit                       PREFA, 0
#define PRB7_bit                       PREFB, 7
#define PRB6_bit                       PREFB, 6
#define PRB5_bit                       PREFB, 5
#define PRB4_bit                       PREFB, 4
#define PRB3_bit                       PREFB, 3
#define PRB2_bit                       PREFB, 2
#define PRB1_bit                       PREFB, 1
#define PRB0_bit                       PREFB, 0
#define CMBOUT_bit                     CMCON, 6
#define CMBOE_bit                      CMCON, 5
#define CPOLB_bit                      CMCON, 4
#define CMAOUT_bit                     CMCON, 2
#define CMAOE_bit                      CMCON, 1
#define CPOLA_bit                      CMCON, 0
#define SMHOG_bit                      MISC, 7
#define SPGNDB_bit                     MISC, 6
#define SPGNDA_bit                     MISC, 5
#define I2CSEL_bit                     MISC, 4
#define SMBUS_bit                      MISC, 3
#define INCLKEN_bit                    MISC, 2
#define OSC2_bit                       MISC, 1
#define OSC1_bit                       MISC, 0
#define ADDAC3_bit                     ADCON1, 7
#define ADDAC2_bit                     ADCON1, 6
#define ADDAC1_bit                     ADCON1, 5
#define ADDAC0_bit                     ADCON1, 4
#define PCFG3_bit                      ADCON1, 3
#define PCFG2_bit                      ADCON1, 2
#define PCFG1_bit                      ADCON1, 1
#define PCFG0_bit                      ADCON1, 0
KREF                                   equ 0FC0h
KBG                                    equ 0FC4h
VTHERM                                 equ 0FC8h
KTC                                    equ 0FCCh
OSCM                                   equ 0FD0h
TWDT                                   equ 0FD2h

#endif
