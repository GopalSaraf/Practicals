#ifndef _AS1678X_LEGACY_H_
#define _AS1678X_LEGACY_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
PORTA                                  equ 0005h
PORTB                                  equ 0006h
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
ADRES                                  equ 001Eh
ADCON0                                 equ 001Fh
OPTION_REG                             equ 0081h
TRISA                                  equ 0085h
TRISB                                  equ 0086h
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
WPUB                                   equ 0095h
IOCB                                   equ 0096h
REFCON                                 equ 009Bh
LVDCON                                 equ 009Ch
ANSEL                                  equ 009Dh
ADCON1                                 equ 009Fh
PMDATL                                 equ 010Ch
PMADRL                                 equ 010Dh
PMDATH                                 equ 010Eh
PMADRH                                 equ 010Fh
CALCON                                 equ 0110h
PSMCCON0                               equ 0111h
PSMCCON1                               equ 0112h
CM1CON0                                equ 0119h
CM2CON0                                equ 011Ah
CM2CON1                                equ 011Bh
OPACON                                 equ 011Ch
DAC                                    equ 011Eh
DACON0                                 equ 011Fh
PMCON1                                 equ 018Ch
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
#define INTE                           INTCON, 4
#define RBIE                           INTCON, 3
#define T0IF                           INTCON, 2
#define INTF                           INTCON, 1
#define RBIF                           INTCON, 0
#define RA7                            PORTA, 7
#define RA6                            PORTA, 6
#define RA5                            PORTA, 5
#define RA4                            PORTA, 4
#define RA3                            PORTA, 3
#define RA2                            PORTA, 2
#define RA1                            PORTA, 1
#define RA0                            PORTA, 0
#define RB7                            PORTB, 7
#define RB6                            PORTB, 6
#define RB5                            PORTB, 5
#define RB4                            PORTB, 4
#define RB3                            PORTB, 3
#define RB2                            PORTB, 2
#define RB1                            PORTB, 1
#define RB0                            PORTB, 0
#define LVDIF                          PIR1, 7
#define ADIF                           PIR1, 6
#define C2IF                           PIR1, 5
#define C1IF                           PIR1, 4
#define TMR1IF                         PIR1, 0
#define TMR1GE                         T1CON, 6
#define T1CKPS1                        T1CON, 5
#define T1CKPS0                        T1CON, 4
#define T1OSCEN                        T1CON, 3
#define T1SYNC                         T1CON, 2
#define TMR1CS                         T1CON, 1
#define TMR1ON                         T1CON, 0
#define ADCS1                          ADCON0, 7
#define ADCS0                          ADCON0, 6
#define CHS2                           ADCON0, 5
#define CHS1                           ADCON0, 4
#define CHS0                           ADCON0, 3
#define GODONE                         ADCON0, 2
#define CHS3                           ADCON0, 1
#define ADON                           ADCON0, 0
#define RBPU                           OPTION, 7
#define INTEDG                         OPTION, 6
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
#define TRISB7                         TRISB, 7
#define TRISB6                         TRISB, 6
#define TRISB5                         TRISB, 5
#define TRISB4                         TRISB, 4
#define TRISB3                         TRISB, 3
#define TRISB2                         TRISB, 2
#define TRISB1                         TRISB, 1
#define TRISB0                         TRISB, 0
#define LVDIE                          PIE1, 7
#define ADIE                           PIE1, 6
#define C2IE                           PIE1, 5
#define C1IE                           PIE1, 4
#define TMR1IE                         PIE1, 0
#define WDTCON                         PCON, 4
#define OSCF                           PCON, 3
#define POR                            PCON, 1
#define BOR                            PCON, 0
#define VREN                           REFCON, 3
#define VROE                           REFCON, 2
#define BGST                           LVDCON, 5
#define LVDEN                          LVDCON, 4
#define LV3                            LVDCON, 3
#define LV2                            LVDCON, 2
#define LV1                            LVDCON, 1
#define LV0                            LVDCON, 0
#define VCFG1                          ADCON1, 5
#define VCFG0                          ADCON1, 4
#define PMD7                           PMDATL, 7
#define PMD6                           PMDATL, 6
#define PMD5                           PMDATL, 5
#define PMD4                           PMDATL, 4
#define PMD3                           PMDATL, 3
#define PMD2                           PMDATL, 2
#define PMD1                           PMDATL, 1
#define PMD0                           PMDATL, 0
#define PMA7                           PMADRL, 7
#define PMA6                           PMADRL, 6
#define PMA5                           PMADRL, 5
#define PMA4                           PMADRL, 4
#define PMA3                           PMADRL, 3
#define PMA2                           PMADRL, 2
#define PMA1                           PMADRL, 1
#define PMA0                           PMADRL, 0
#define PMD13                          PMDATH, 5
#define PMD12                          PMDATH, 4
#define PMD11                          PMDATH, 3
#define PMD10                          PMDATH, 2
#define PMD9                           PMDATH, 1
#define PMD8                           PMDATH, 0
#define PMA10                          PMADRH, 2
#define PMA9                           PMADRH, 1
#define PMA8                           PMADRH, 0
#define CAL                            CALCON, 7
#define CALERR                         CALCON, 6
#define CALREF                         CALCON, 5
#define SMCCL1                         PSMCCON0, 7
#define SMCCL0                         PSMCCON0, 6
#define MINDC1                         PSMCCON0, 5
#define MINDC0                         PSMCCON0, 4
#define MAXDC1                         PSMCCON0, 3
#define MAXDC0                         PSMCCON0, 2
#define DC1                            PSMCCON0, 1
#define DC0                            PSMCCON0, 0
#define SMCON                          PSMCCON1, 7
#define S1APOL                         PSMCCON1, 6
#define S1BPOL                         PSMCCON1, 5
#define SCEN                           PSMCCON1, 3
#define SMCOM                          PSMCCON1, 2
#define PWMPSM                         PSMCCON1, 1
#define SMCCS                          PSMCCON1, 0
#define C1ON                           CM1CON0, 7
#define C1OUT                          CM1CON0, 6
#define C1OE                           CM1CON0, 5
#define C1POL                          CM1CON0, 4
#define C1SP                           CM1CON0, 3
#define C1R                            CM1CON0, 2
#define C1CH1                          CM1CON0, 1
#define C1CH0                          CM1CON0, 0
#define C2ON                           CM2CON0, 7
#define C2OUT                          CM2CON0, 6
#define C2OE                           CM2CON0, 5
#define C2POL                          CM2CON0, 4
#define C2SP                           CM2CON0, 3
#define C2R                            CM2CON0, 2
#define C2CH1                          CM2CON0, 1
#define C2CH0                          CM2CON0, 0
#define MC1OUT                         CM2CON1, 7
#define MC2OUT                         CM2CON1, 6
#define C2SYNC                         CM2CON1, 0
#define OPAON                          OPACON, 7
#define CMPEN                          OPACON, 6
#define GBWP                           OPACON, 0
#define DA7                            DAC, 7
#define DA6                            DAC, 6
#define DA5                            DAC, 5
#define DA4                            DAC, 4
#define DA3                            DAC, 3
#define DA2                            DAC, 2
#define DA1                            DAC, 1
#define DA0                            DAC, 0
#define DAON                           DACON0, 7
#define DAOE                           DACON0, 6
#define DARS1                          DACON0, 1
#define DARS0                          DACON0, 0
#define RD                             PMCON1, 0

#endif
