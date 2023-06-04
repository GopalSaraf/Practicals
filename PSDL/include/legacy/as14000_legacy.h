#ifndef _AS14000_LEGACY_H_
#define _AS14000_LEGACY_H_

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
#define RP0                            STATUS, 5
#define TO                             STATUS, 4
#define PD                             STATUS, 3
#define ZERO                           STATUS, 2
#define DC                             STATUS, 1
#define CARRY                          STATUS, 0
#define RA7                            PORTA, 7
#define RA6                            PORTA, 6
#define RA5                            PORTA, 5
#define RA4                            PORTA, 4
#define RA3                            PORTA, 3
#define RA2                            PORTA, 2
#define RA1                            PORTA, 1
#define RA0                            PORTA, 0
#define RC7                            PORTC, 7
#define RC6                            PORTC, 6
#define RC5                            PORTC, 5
#define RC4                            PORTC, 4
#define RC3                            PORTC, 3
#define RC2                            PORTC, 2
#define RC1                            PORTC, 1
#define RC0                            PORTC, 0
#define RD7                            PORTD, 7
#define RD6                            PORTD, 6
#define RD5                            PORTD, 5
#define RD4                            PORTD, 4
#define RD3                            PORTD, 3
#define RD2                            PORTD, 2
#define RD1                            PORTD, 1
#define RD0                            PORTD, 0
#define GIE                            INTCON, 7
#define PEIE                           INTCON, 6
#define T0IE                           INTCON, 5
#define T0IF                           INTCON, 2
#define CMIF                           PIR1, 7
#define PBIF                           PIR1, 4
#define I2CIF                          PIR1, 3
#define RCIF                           PIR1, 2
#define ADCIF                          PIR1, 1
#define OVFIF                          PIR1, 0
#define WCOL                           I2CCON, 7
#define I2COV                          I2CCON, 6
#define I2CEN                          I2CCON, 5
#define CKP                            I2CCON, 4
#define I2CM3                          I2CCON, 3
#define I2CM2                          I2CCON, 2
#define I2CM1                          I2CCON, 1
#define I2CM0                          I2CCON, 0
#define ADCS3                          ADCON0, 7
#define ADCS2                          ADCON0, 6
#define ADCS1                          ADCON0, 5
#define ADCS0                          ADCON0, 4
#define AMUXOE                         ADCON0, 2
#define ADRST                          ADCON0, 1
#define ADZERO                         ADCON0, 0
#define RCPU                           OPTION, 7
#define T0CS                           OPTION, 5
#define T0SE                           OPTION, 4
#define PSA                            OPTION, 3
#define PS2                            OPTION, 2
#define PS1                            OPTION, 1
#define PS0                            OPTION, 0
#define TRISA7                         TRISA, 7
#define TRISA6                         TRISA, 6
#define TRISA5                         TRISA, 5
#define TRISA4                         TRISA, 4
#define TRISA3                         TRISA, 3
#define TRISA2                         TRISA, 2
#define TRISA1                         TRISA, 1
#define TRISA0                         TRISA, 0
#define TRISC7                         TRISC, 7
#define TRISC6                         TRISC, 6
#define TRISC5                         TRISC, 5
#define TRISC4                         TRISC, 4
#define TRISC3                         TRISC, 3
#define TRISC2                         TRISC, 2
#define TRISC1                         TRISC, 1
#define TRISC0                         TRISC, 0
#define TRISD7                         TRISD, 7
#define TRISD6                         TRISD, 6
#define TRISD5                         TRISD, 5
#define TRISD4                         TRISD, 4
#define TRISD3                         TRISD, 3
#define TRISD2                         TRISD, 2
#define TRISD1                         TRISD, 1
#define TRISD0                         TRISD, 0
#define CMIE                           PIE1, 7
#define PBIE                           PIE1, 4
#define I2CIE                          PIE1, 3
#define RCIE                           PIE1, 2
#define ADCIE                          PIE1, 1
#define OVFIE                          PIE1, 0
#define POR                            PCON, 1
#define LVD                            PCON, 0
#define HIBEN                          SLPCON, 7
#define REFOFF                         SLPCON, 5
#define LSOFF                          SLPCON, 4
#define OSCOFF                         SLPCON, 3
#define CMOFF                          SLPCON, 2
#define TEMPOFF                        SLPCON, 1
#define ADOFF                          SLPCON, 0
#define DA                             I2CSTAT, 5
#define STOP                           I2CSTAT, 4
#define START                          I2CSTAT, 3
#define RW                             I2CSTAT, 2
#define UA                             I2CSTAT, 1
#define BF                             I2CSTAT, 0
#ifdef __STAT_BACKWARD_COMPATIBILITY
#endif
#define PRA7                           PREFA, 7
#define PRA6                           PREFA, 6
#define PRA5                           PREFA, 5
#define PRA4                           PREFA, 4
#define PRA3                           PREFA, 3
#define PRA2                           PREFA, 2
#define PRA1                           PREFA, 1
#define PRA0                           PREFA, 0
#define PRB7                           PREFB, 7
#define PRB6                           PREFB, 6
#define PRB5                           PREFB, 5
#define PRB4                           PREFB, 4
#define PRB3                           PREFB, 3
#define PRB2                           PREFB, 2
#define PRB1                           PREFB, 1
#define PRB0                           PREFB, 0
#define CMBOUT                         CMCON, 6
#define CMBOE                          CMCON, 5
#define CPOLB                          CMCON, 4
#define CMAOUT                         CMCON, 2
#define CMAOE                          CMCON, 1
#define CPOLA                          CMCON, 0
#define SMHOG                          MISC, 7
#define SPGNDB                         MISC, 6
#define SPGNDA                         MISC, 5
#define I2CSEL                         MISC, 4
#define SMBUS                          MISC, 3
#define INCLKEN                        MISC, 2
#define OSC2                           MISC, 1
#define OSC1                           MISC, 0
#define ADDAC3                         ADCON1, 7
#define ADDAC2                         ADCON1, 6
#define ADDAC1                         ADCON1, 5
#define ADDAC0                         ADCON1, 4
#define PCFG3                          ADCON1, 3
#define PCFG2                          ADCON1, 2
#define PCFG1                          ADCON1, 1
#define PCFG0                          ADCON1, 0
KREF                                   equ 0FC0h
KBG                                    equ 0FC4h
VTHERM                                 equ 0FC8h
KTC                                    equ 0FCCh
OSCM                                   equ 0FD0h
TWDT                                   equ 0FD2h

#endif
