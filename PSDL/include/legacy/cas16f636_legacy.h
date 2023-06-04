#ifndef _CAS16F636_H_
#define _CAS16F636_H_

INDF                                   equ 0000h
TMR0                                   equ 0001h
PCL                                    equ 0002h
STATUS                                 equ 0003h
FSR                                    equ 0004h
#if defined(_16F636) || defined(_16F639)
PORTA                                  equ 0005h
PORTC                                  equ 0007h
GPIO                                   equ 0005h
#endif
PCLATH                                 equ 000Ah
INTCON                                 equ 000Bh
PIR1                                   equ 000Ch
TMR1L                                  equ 000Eh
TMR1H                                  equ 000Fh
T1CON                                  equ 0010h
WDTCON                                 equ 0018h
CMCON0                                 equ 0019h
CMCON1                                 equ 001Ah
OPTION_REG                             equ 0081h
#if defined(_16F636) || defined(_16F639)
TRISA                                  equ 0085h
TRISC                                  equ 0087h
TRISIO                                 equ 0085h
#endif
PIE1                                   equ 008Ch
PCON                                   equ 008Eh
OSCCON                                 equ 008Fh
OSCTUNE                                equ 0090h
LVDCON                                 equ 0094h
WPUDA                                  equ 0095h
IOCA                                   equ 0096h
WDA                                    equ 0097h
VRCON                                  equ 0099h
EEDAT                                  equ 009Ah
EEDATA                                 equ 009Ah
EEADR                                  equ 009Bh
EEADRL                                 equ 009Bh
EECON1                                 equ 009Ch
EECON2                                 equ 009Dh
CRCON                                  equ 0110h
CRDAT0                                 equ 0111h
CRDAT1                                 equ 0112h
CRDAT2                                 equ 0113h
CRDAT3                                 equ 0114h
#define CARRY_bit                      STATUS, 0
#define DC_bit                         STATUS, 1
#define ZERO_bit                       STATUS, 2
#define PD_bit                         STATUS, 3
#define TO_bit                         STATUS, 4
#define RP0_bit                        STATUS, 5
#define RP1_bit                        STATUS, 6
#define IRP_bit                        STATUS, 7
#if defined(_16F636) || defined(_16F639)
#define RA0_bit                        PORTA, 0
#define RA1_bit                        PORTA, 1
#define RA2_bit                        PORTA, 2
#define RA3_bit                        PORTA, 3
#define RA4_bit                        PORTA, 4
#define RA5_bit                        PORTA, 5
#define RC0_bit                        PORTC, 0
#define RC1_bit                        PORTC, 1
#define RC2_bit                        PORTC, 2
#define RC3_bit                        PORTC, 3
#define RC4_bit                        PORTC, 4
#define RC5_bit                        PORTC, 5
#define GP0_bit                        GPIO, 0
#define GP1_bit                        GPIO, 1
#define GP2_bit                        GPIO, 2
#define GP3_bit                        GPIO, 3
#define GP4_bit                        GPIO, 4
#define GP5_bit                        GPIO, 5
#endif
#define RAIF_bit                       INTCON, 0
#define INTF_bit                       INTCON, 1
#define T0IF_bit                       INTCON, 2
#define RAIE_bit                       INTCON, 3
#define INTE_bit                       INTCON, 4
#define T0IE_bit                       INTCON, 5
#define PEIE_bit                       INTCON, 6
#define GIE_bit                        INTCON, 7
#define TMR1IF_bit                     PIR1, 0
#define OSFIF_bit                      PIR1, 2
#define C1IF_bit                       PIR1, 3
#if defined(_16F636) || defined(_16F639)
#define C2IF_bit                       PIR1, 4
#endif
#define CRIF_bit                       PIR1, 5
#define LVDIF_bit                      PIR1, 6
#define EEIF_bit                       PIR1, 7
#define TMR1ON_bit                     T1CON, 0
#define TMR1CS_bit                     T1CON, 1
#define T1SYNC_bit                     T1CON, 2
#define T1OSCEN_bit                    T1CON, 3
#define T1CKPS0_bit                    T1CON, 4
#define T1CKPS1_bit                    T1CON, 5
#define TMR1GE_bit                     T1CON, 6
#define T1GINV_bit                     T1CON, 7
#define SWDTEN_bit                     WDTCON, 0
#define WDTPS0_bit                     WDTCON, 1
#define WDTPS1_bit                     WDTCON, 2
#define WDTPS2_bit                     WDTCON, 3
#define WDTPS3_bit                     WDTCON, 4
#define CM0_bit                        CMCON0, 0
#define CM1_bit                        CMCON0, 1
#define CM2_bit                        CMCON0, 2
#define CIS_bit                        CMCON0, 3
#define C1INV_bit                      CMCON0, 4
#if defined(_16F636) || defined(_16F639)
#define C2INV_bit                      CMCON0, 5
#endif
#define C1OUT_bit                      CMCON0, 6
#if defined(_16F636) || defined(_16F639)
#define C2OUT_bit                      CMCON0, 7
#endif
#define C2SYNC_bit                     CMCON1, 0
#define T1GSS_bit                      CMCON1, 1
#define PS0_bit                        OPTION, 0
#define PS1_bit                        OPTION, 1
#define PS2_bit                        OPTION, 2
#define PSA_bit                        OPTION, 3
#define T0SE_bit                       OPTION, 4
#define T0CS_bit                       OPTION, 5
#define INTEDG_bit                     OPTION, 6
#define RAPU_bit                       OPTION, 7
#if defined(_16F636) || defined(_16F639)
#define TRISA0_bit                     TRISA, 0
#define TRISA1_bit                     TRISA, 1
#define TRISA2_bit                     TRISA, 2
#define TRISA3_bit                     TRISA, 3
#define TRISA4_bit                     TRISA, 4
#define TRISA5_bit                     TRISA, 5
#define TRISC0_bit                     TRISC, 0
#define TRISC1_bit                     TRISC, 1
#define TRISC2_bit                     TRISC, 2
#define TRISC3_bit                     TRISC, 3
#define TRISC4_bit                     TRISC, 4
#define TRISC5_bit                     TRISC, 5
#define TRISIO0_bit                    TRISIO, 0
#define TRISIO1_bit                    TRISIO, 1
#define TRISIO2_bit                    TRISIO, 2
#define TRISIO3_bit                    TRISIO, 3
#define TRISIO4_bit                    TRISIO, 4
#define TRISIO5_bit                    TRISIO, 5
#endif
#define TMR1IE_bit                     PIE1, 0
#define OSFIE_bit                      PIE1, 2
#define C1IE_bit                       PIE1, 3
#if defined(_16F636) || defined(_16F639)
#define C2IE_bit                       PIE1, 4
#endif
#define CRIE_bit                       PIE1, 5
#define LVDIE_bit                      PIE1, 6
#define EEIE_bit                       PIE1, 7
#define BOD_bit                        PCON, 0
#define POR_bit                        PCON, 1
#define WUR_bit                        PCON, 3
#define SBODEN_bit                     PCON, 4
#define ULPWUE_bit                     PCON, 5
#define SCS_bit                        OSCCON, 0
#define LTS_bit                        OSCCON, 1
#define HTS_bit                        OSCCON, 2
#define OSTS_bit                       OSCCON, 3
#define IRCF0_bit                      OSCCON, 4
#define IRCF1_bit                      OSCCON, 5
#define IRCF2_bit                      OSCCON, 6
#define TUN0_bit                       OSCTUNE, 0
#define TUN1_bit                       OSCTUNE, 1
#define TUN2_bit                       OSCTUNE, 2
#define TUN3_bit                       OSCTUNE, 3
#define TUN4_bit                       OSCTUNE, 4
#define LVDL0_bit                      LVDCON, 0
#define LVDL1_bit                      LVDCON, 1
#define LVDL2_bit                      LVDCON, 2
#define LVDEN_bit                      LVDCON, 4
#define IRVST_bit                      LVDCON, 5
#define WPUDA0_bit                     WPUDA, 0
#define WPUDA1_bit                     WPUDA, 1
#define WPUDA2_bit                     WPUDA, 2
#define WPUDA4_bit                     WPUDA, 4
#define WPUDA5_bit                     WPUDA, 5
#define IOCA0_bit                      IOCA, 0
#define IOCA1_bit                      IOCA, 1
#define IOCA2_bit                      IOCA, 2
#define IOCA3_bit                      IOCA, 3
#define IOCA4_bit                      IOCA, 4
#define IOCA5_bit                      IOCA, 5
#define WDA0_bit                       WDA, 0
#define WDA1_bit                       WDA, 1
#define WDA2_bit                       WDA, 2
#define WDA4_bit                       WDA, 4
#define WDA5_bit                       WDA, 5
#define VR0_bit                        VRCON, 0
#define VR1_bit                        VRCON, 1
#define VR2_bit                        VRCON, 2
#define VR3_bit                        VRCON, 3
#define VRR_bit                        VRCON, 5
#define VREN_bit                       VRCON, 7
#define RD_bit                         EECON1, 0
#define WR_bit                         EECON1, 1
#define WREN_bit                       EECON1, 2
#define WRERR_bit                      EECON1, 3
#define CRREG0_bit                     CRCON, 0
#define CRREG1_bit                     CRCON, 1
#define ENCDEC_bit                     CRCON, 6
#define GODONE_bit                     CRCON, 7

#endif
