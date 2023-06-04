#ifndef _CAS1678X_H_
#define _CAS1678X_H_

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
#define INTE_bit                       INTCON, 4
#define RBIE_bit                       INTCON, 3
#define T0IF_bit                       INTCON, 2
#define INTF_bit                       INTCON, 1
#define RBIF_bit                       INTCON, 0
#define RA7_bit                        PORTA, 7
#define RA6_bit                        PORTA, 6
#define RA5_bit                        PORTA, 5
#define RA4_bit                        PORTA, 4
#define RA3_bit                        PORTA, 3
#define RA2_bit                        PORTA, 2
#define RA1_bit                        PORTA, 1
#define RA0_bit                        PORTA, 0
#define RB7_bit                        PORTB, 7
#define RB6_bit                        PORTB, 6
#define RB5_bit                        PORTB, 5
#define RB4_bit                        PORTB, 4
#define RB3_bit                        PORTB, 3
#define RB2_bit                        PORTB, 2
#define RB1_bit                        PORTB, 1
#define RB0_bit                        PORTB, 0
#define LVDIF_bit                      PIR1, 7
#define ADIF_bit                       PIR1, 6
#define C2IF_bit                       PIR1, 5
#define C1IF_bit                       PIR1, 4
#define TMR1IF_bit                     PIR1, 0
#define TMR1GE_bit                     T1CON, 6
#define T1CKPS1_bit                    T1CON, 5
#define T1CKPS0_bit                    T1CON, 4
#define T1OSCEN_bit                    T1CON, 3
#define T1SYNC_bit                     T1CON, 2
#define TMR1CS_bit                     T1CON, 1
#define TMR1ON_bit                     T1CON, 0
#define ADCS1_bit                      ADCON0, 7
#define ADCS0_bit                      ADCON0, 6
#define CHS2_bit                       ADCON0, 5
#define CHS1_bit                       ADCON0, 4
#define CHS0_bit                       ADCON0, 3
#define GODONE_bit                     ADCON0, 2
#define CHS3_bit                       ADCON0, 1
#define ADON_bit                       ADCON0, 0
#define RBPU_bit                       OPTION, 7
#define INTEDG_bit                     OPTION, 6
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
#define TRISB7_bit                     TRISB, 7
#define TRISB6_bit                     TRISB, 6
#define TRISB5_bit                     TRISB, 5
#define TRISB4_bit                     TRISB, 4
#define TRISB3_bit                     TRISB, 3
#define TRISB2_bit                     TRISB, 2
#define TRISB1_bit                     TRISB, 1
#define TRISB0_bit                     TRISB, 0
#define LVDIE_bit                      PIE1, 7
#define ADIE_bit                       PIE1, 6
#define C2IE_bit                       PIE1, 5
#define C1IE_bit                       PIE1, 4
#define TMR1IE_bit                     PIE1, 0
#define WDTCON_bit                     PCON, 4
#define OSCF_bit                       PCON, 3
#define POR_bit                        PCON, 1
#define BOR_bit                        PCON, 0
#define VREN_bit                       REFCON, 3
#define VROE_bit                       REFCON, 2
#define BGST_bit                       LVDCON, 5
#define LVDEN_bit                      LVDCON, 4
#define LV3_bit                        LVDCON, 3
#define LV2_bit                        LVDCON, 2
#define LV1_bit                        LVDCON, 1
#define LV0_bit                        LVDCON, 0
#define VCFG1_bit                      ADCON1, 5
#define VCFG0_bit                      ADCON1, 4
#define PMD7_bit                       PMDATL, 7
#define PMD6_bit                       PMDATL, 6
#define PMD5_bit                       PMDATL, 5
#define PMD4_bit                       PMDATL, 4
#define PMD3_bit                       PMDATL, 3
#define PMD2_bit                       PMDATL, 2
#define PMD1_bit                       PMDATL, 1
#define PMD0_bit                       PMDATL, 0
#define PMA7_bit                       PMADRL, 7
#define PMA6_bit                       PMADRL, 6
#define PMA5_bit                       PMADRL, 5
#define PMA4_bit                       PMADRL, 4
#define PMA3_bit                       PMADRL, 3
#define PMA2_bit                       PMADRL, 2
#define PMA1_bit                       PMADRL, 1
#define PMA0_bit                       PMADRL, 0
#define PMD13_bit                      PMDATH, 5
#define PMD12_bit                      PMDATH, 4
#define PMD11_bit                      PMDATH, 3
#define PMD10_bit                      PMDATH, 2
#define PMD9_bit                       PMDATH, 1
#define PMD8_bit                       PMDATH, 0
#define PMA10_bit                      PMADRH, 2
#define PMA9_bit                       PMADRH, 1
#define PMA8_bit                       PMADRH, 0
#define CAL_bit                        CALCON, 7
#define CALERR_bit                     CALCON, 6
#define CALREF_bit                     CALCON, 5
#define SMCCL1_bit                     PSMCCON0, 7
#define SMCCL0_bit                     PSMCCON0, 6
#define MINDC1_bit                     PSMCCON0, 5
#define MINDC0_bit                     PSMCCON0, 4
#define MAXDC1_bit                     PSMCCON0, 3
#define MAXDC0_bit                     PSMCCON0, 2
#define DC1_bit                        PSMCCON0, 1
#define DC0_bit                        PSMCCON0, 0
#define SMCON_bit                      PSMCCON1, 7
#define S1APOL_bit                     PSMCCON1, 6
#define S1BPOL_bit                     PSMCCON1, 5
#define SCEN_bit                       PSMCCON1, 3
#define SMCOM_bit                      PSMCCON1, 2
#define PWMPSM_bit                     PSMCCON1, 1
#define SMCCS_bit                      PSMCCON1, 0
#define C1ON_bit                       CM1CON0, 7
#define C1OUT_bit                      CM1CON0, 6
#define C1OE_bit                       CM1CON0, 5
#define C1POL_bit                      CM1CON0, 4
#define C1SP_bit                       CM1CON0, 3
#define C1R_bit                        CM1CON0, 2
#define C1CH1_bit                      CM1CON0, 1
#define C1CH0_bit                      CM1CON0, 0
#define C2ON_bit                       CM2CON0, 7
#define C2OUT_bit                      CM2CON0, 6
#define C2OE_bit                       CM2CON0, 5
#define C2POL_bit                      CM2CON0, 4
#define C2SP_bit                       CM2CON0, 3
#define C2R_bit                        CM2CON0, 2
#define C2CH1_bit                      CM2CON0, 1
#define C2CH0_bit                      CM2CON0, 0
#define MC1OUT_bit                     CM2CON1, 7
#define MC2OUT_bit                     CM2CON1, 6
#define C2SYNC_bit                     CM2CON1, 0
#define OPAON_bit                      OPACON, 7
#define CMPEN_bit                      OPACON, 6
#define GBWP_bit                       OPACON, 0
#define DA7_bit                        DAC, 7
#define DA6_bit                        DAC, 6
#define DA5_bit                        DAC, 5
#define DA4_bit                        DAC, 4
#define DA3_bit                        DAC, 3
#define DA2_bit                        DAC, 2
#define DA1_bit                        DAC, 1
#define DA0_bit                        DAC, 0
#define DAON_bit                       DACON0, 7
#define DAOE_bit                       DACON0, 6
#define DARS1_bit                      DACON0, 1
#define DARS0_bit                      DACON0, 0
#define RD_bit                         PMCON1, 0

#endif
