// Generated 09/02/2023 GMT

/*
 * Copyright © 2023, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 * 
 *     1. Redistributions of source code must retain the above copyright notice, this list of
 *        conditions and the following disclaimer.
 * 
 *     2. Redistributions in binary form must reproduce the above copyright notice, this list
 *        of conditions and the following disclaimer in the documentation and/or other
 *        materials provided with the distribution. Publication is not required when
 *        this file is used in an embedded application.
 * 
 *     3. Microchip's name may not be used to endorse or promote products derived from this
 *        software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PIC10LF320_INC_
#define _PIC10LF320_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC10LF320
 */

/*
 * Device Registers
 */

// Register: INDF
#define INDF INDF
INDF                                     equ 0000h

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0001h

// Register: PCL
#define PCL PCL
PCL                                      equ 0002h

// Register: STATUS
#define STATUS STATUS
STATUS                                   equ 0003h
// bitfield definitions
STATUS_C_POSN                            equ 0000h
STATUS_C_POSITION                        equ 0000h
STATUS_C_SIZE                            equ 0001h
STATUS_C_LENGTH                          equ 0001h
STATUS_C_MASK                            equ 0001h
STATUS_DC_POSN                           equ 0001h
STATUS_DC_POSITION                       equ 0001h
STATUS_DC_SIZE                           equ 0001h
STATUS_DC_LENGTH                         equ 0001h
STATUS_DC_MASK                           equ 0002h
STATUS_Z_POSN                            equ 0002h
STATUS_Z_POSITION                        equ 0002h
STATUS_Z_SIZE                            equ 0001h
STATUS_Z_LENGTH                          equ 0001h
STATUS_Z_MASK                            equ 0004h
STATUS_nPD_POSN                          equ 0003h
STATUS_nPD_POSITION                      equ 0003h
STATUS_nPD_SIZE                          equ 0001h
STATUS_nPD_LENGTH                        equ 0001h
STATUS_nPD_MASK                          equ 0008h
STATUS_nTO_POSN                          equ 0004h
STATUS_nTO_POSITION                      equ 0004h
STATUS_nTO_SIZE                          equ 0001h
STATUS_nTO_LENGTH                        equ 0001h
STATUS_nTO_MASK                          equ 0010h
STATUS_RP0_POSN                          equ 0005h
STATUS_RP0_POSITION                      equ 0005h
STATUS_RP0_SIZE                          equ 0001h
STATUS_RP0_LENGTH                        equ 0001h
STATUS_RP0_MASK                          equ 0020h
STATUS_RP1_POSN                          equ 0006h
STATUS_RP1_POSITION                      equ 0006h
STATUS_RP1_SIZE                          equ 0001h
STATUS_RP1_LENGTH                        equ 0001h
STATUS_RP1_MASK                          equ 0040h
STATUS_IRP_POSN                          equ 0007h
STATUS_IRP_POSITION                      equ 0007h
STATUS_IRP_SIZE                          equ 0001h
STATUS_IRP_LENGTH                        equ 0001h
STATUS_IRP_MASK                          equ 0080h
STATUS_CARRY_POSN                        equ 0000h
STATUS_CARRY_POSITION                    equ 0000h
STATUS_CARRY_SIZE                        equ 0001h
STATUS_CARRY_LENGTH                      equ 0001h
STATUS_CARRY_MASK                        equ 0001h
STATUS_ZERO_POSN                         equ 0002h
STATUS_ZERO_POSITION                     equ 0002h
STATUS_ZERO_SIZE                         equ 0001h
STATUS_ZERO_LENGTH                       equ 0001h
STATUS_ZERO_MASK                         equ 0004h

// Register: FSR
#define FSR FSR
FSR                                      equ 0004h

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 0005h
// bitfield definitions
PORTA_RA0_POSN                           equ 0000h
PORTA_RA0_POSITION                       equ 0000h
PORTA_RA0_SIZE                           equ 0001h
PORTA_RA0_LENGTH                         equ 0001h
PORTA_RA0_MASK                           equ 0001h
PORTA_RA1_POSN                           equ 0001h
PORTA_RA1_POSITION                       equ 0001h
PORTA_RA1_SIZE                           equ 0001h
PORTA_RA1_LENGTH                         equ 0001h
PORTA_RA1_MASK                           equ 0002h
PORTA_RA2_POSN                           equ 0002h
PORTA_RA2_POSITION                       equ 0002h
PORTA_RA2_SIZE                           equ 0001h
PORTA_RA2_LENGTH                         equ 0001h
PORTA_RA2_MASK                           equ 0004h
PORTA_RA3_POSN                           equ 0003h
PORTA_RA3_POSITION                       equ 0003h
PORTA_RA3_SIZE                           equ 0001h
PORTA_RA3_LENGTH                         equ 0001h
PORTA_RA3_MASK                           equ 0008h

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0006h
// bitfield definitions
TRISA_TRISA0_POSN                        equ 0000h
TRISA_TRISA0_POSITION                    equ 0000h
TRISA_TRISA0_SIZE                        equ 0001h
TRISA_TRISA0_LENGTH                      equ 0001h
TRISA_TRISA0_MASK                        equ 0001h
TRISA_TRISA1_POSN                        equ 0001h
TRISA_TRISA1_POSITION                    equ 0001h
TRISA_TRISA1_SIZE                        equ 0001h
TRISA_TRISA1_LENGTH                      equ 0001h
TRISA_TRISA1_MASK                        equ 0002h
TRISA_TRISA2_POSN                        equ 0002h
TRISA_TRISA2_POSITION                    equ 0002h
TRISA_TRISA2_SIZE                        equ 0001h
TRISA_TRISA2_LENGTH                      equ 0001h
TRISA_TRISA2_MASK                        equ 0004h

// Register: LATA
#define LATA LATA
LATA                                     equ 0007h
// bitfield definitions
LATA_LATA0_POSN                          equ 0000h
LATA_LATA0_POSITION                      equ 0000h
LATA_LATA0_SIZE                          equ 0001h
LATA_LATA0_LENGTH                        equ 0001h
LATA_LATA0_MASK                          equ 0001h
LATA_LATA1_POSN                          equ 0001h
LATA_LATA1_POSITION                      equ 0001h
LATA_LATA1_SIZE                          equ 0001h
LATA_LATA1_LENGTH                        equ 0001h
LATA_LATA1_MASK                          equ 0002h
LATA_LATA2_POSN                          equ 0002h
LATA_LATA2_POSITION                      equ 0002h
LATA_LATA2_SIZE                          equ 0001h
LATA_LATA2_LENGTH                        equ 0001h
LATA_LATA2_MASK                          equ 0004h

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 0008h
// bitfield definitions
ANSELA_ANSA0_POSN                        equ 0000h
ANSELA_ANSA0_POSITION                    equ 0000h
ANSELA_ANSA0_SIZE                        equ 0001h
ANSELA_ANSA0_LENGTH                      equ 0001h
ANSELA_ANSA0_MASK                        equ 0001h
ANSELA_ANSA1_POSN                        equ 0001h
ANSELA_ANSA1_POSITION                    equ 0001h
ANSELA_ANSA1_SIZE                        equ 0001h
ANSELA_ANSA1_LENGTH                      equ 0001h
ANSELA_ANSA1_MASK                        equ 0002h
ANSELA_ANSA2_POSN                        equ 0002h
ANSELA_ANSA2_POSITION                    equ 0002h
ANSELA_ANSA2_SIZE                        equ 0001h
ANSELA_ANSA2_LENGTH                      equ 0001h
ANSELA_ANSA2_MASK                        equ 0004h

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 0009h
// bitfield definitions
WPUA_WPUA0_POSN                          equ 0000h
WPUA_WPUA0_POSITION                      equ 0000h
WPUA_WPUA0_SIZE                          equ 0001h
WPUA_WPUA0_LENGTH                        equ 0001h
WPUA_WPUA0_MASK                          equ 0001h
WPUA_WPUA1_POSN                          equ 0001h
WPUA_WPUA1_POSITION                      equ 0001h
WPUA_WPUA1_SIZE                          equ 0001h
WPUA_WPUA1_LENGTH                        equ 0001h
WPUA_WPUA1_MASK                          equ 0002h
WPUA_WPUA2_POSN                          equ 0002h
WPUA_WPUA2_POSITION                      equ 0002h
WPUA_WPUA2_SIZE                          equ 0001h
WPUA_WPUA2_LENGTH                        equ 0001h
WPUA_WPUA2_MASK                          equ 0004h
WPUA_WPUA3_POSN                          equ 0003h
WPUA_WPUA3_POSITION                      equ 0003h
WPUA_WPUA3_SIZE                          equ 0001h
WPUA_WPUA3_LENGTH                        equ 0001h
WPUA_WPUA3_MASK                          equ 0008h

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah
// bitfield definitions
PCLATH_PCLH0_POSN                        equ 0000h
PCLATH_PCLH0_POSITION                    equ 0000h
PCLATH_PCLH0_SIZE                        equ 0001h
PCLATH_PCLH0_LENGTH                      equ 0001h
PCLATH_PCLH0_MASK                        equ 0001h

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 000Bh
// bitfield definitions
INTCON_IOCIF_POSN                        equ 0000h
INTCON_IOCIF_POSITION                    equ 0000h
INTCON_IOCIF_SIZE                        equ 0001h
INTCON_IOCIF_LENGTH                      equ 0001h
INTCON_IOCIF_MASK                        equ 0001h
INTCON_INTF_POSN                         equ 0001h
INTCON_INTF_POSITION                     equ 0001h
INTCON_INTF_SIZE                         equ 0001h
INTCON_INTF_LENGTH                       equ 0001h
INTCON_INTF_MASK                         equ 0002h
INTCON_TMR0IF_POSN                       equ 0002h
INTCON_TMR0IF_POSITION                   equ 0002h
INTCON_TMR0IF_SIZE                       equ 0001h
INTCON_TMR0IF_LENGTH                     equ 0001h
INTCON_TMR0IF_MASK                       equ 0004h
INTCON_IOCIE_POSN                        equ 0003h
INTCON_IOCIE_POSITION                    equ 0003h
INTCON_IOCIE_SIZE                        equ 0001h
INTCON_IOCIE_LENGTH                      equ 0001h
INTCON_IOCIE_MASK                        equ 0008h
INTCON_INTE_POSN                         equ 0004h
INTCON_INTE_POSITION                     equ 0004h
INTCON_INTE_SIZE                         equ 0001h
INTCON_INTE_LENGTH                       equ 0001h
INTCON_INTE_MASK                         equ 0010h
INTCON_TMR0IE_POSN                       equ 0005h
INTCON_TMR0IE_POSITION                   equ 0005h
INTCON_TMR0IE_SIZE                       equ 0001h
INTCON_TMR0IE_LENGTH                     equ 0001h
INTCON_TMR0IE_MASK                       equ 0020h
INTCON_PEIE_POSN                         equ 0006h
INTCON_PEIE_POSITION                     equ 0006h
INTCON_PEIE_SIZE                         equ 0001h
INTCON_PEIE_LENGTH                       equ 0001h
INTCON_PEIE_MASK                         equ 0040h
INTCON_GIE_POSN                          equ 0007h
INTCON_GIE_POSITION                      equ 0007h
INTCON_GIE_SIZE                          equ 0001h
INTCON_GIE_LENGTH                        equ 0001h
INTCON_GIE_MASK                          equ 0080h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 000Ch
// bitfield definitions
PIR1_TMR2IF_POSN                         equ 0001h
PIR1_TMR2IF_POSITION                     equ 0001h
PIR1_TMR2IF_SIZE                         equ 0001h
PIR1_TMR2IF_LENGTH                       equ 0001h
PIR1_TMR2IF_MASK                         equ 0002h
PIR1_CLC1IF_POSN                         equ 0003h
PIR1_CLC1IF_POSITION                     equ 0003h
PIR1_CLC1IF_SIZE                         equ 0001h
PIR1_CLC1IF_LENGTH                       equ 0001h
PIR1_CLC1IF_MASK                         equ 0008h
PIR1_NCO1IF_POSN                         equ 0004h
PIR1_NCO1IF_POSITION                     equ 0004h
PIR1_NCO1IF_SIZE                         equ 0001h
PIR1_NCO1IF_LENGTH                       equ 0001h
PIR1_NCO1IF_MASK                         equ 0010h
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 000Dh
// bitfield definitions
PIE1_TMR2IE_POSN                         equ 0001h
PIE1_TMR2IE_POSITION                     equ 0001h
PIE1_TMR2IE_SIZE                         equ 0001h
PIE1_TMR2IE_LENGTH                       equ 0001h
PIE1_TMR2IE_MASK                         equ 0002h
PIE1_CLC1IE_POSN                         equ 0003h
PIE1_CLC1IE_POSITION                     equ 0003h
PIE1_CLC1IE_SIZE                         equ 0001h
PIE1_CLC1IE_LENGTH                       equ 0001h
PIE1_CLC1IE_MASK                         equ 0008h
PIE1_NCO1IE_POSN                         equ 0004h
PIE1_NCO1IE_POSITION                     equ 0004h
PIE1_NCO1IE_SIZE                         equ 0001h
PIE1_NCO1IE_LENGTH                       equ 0001h
PIE1_NCO1IE_MASK                         equ 0010h
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
OPTION_REG                               equ 000Eh
// bitfield definitions
OPTION_REG_PS_POSN                       equ 0000h
OPTION_REG_PS_POSITION                   equ 0000h
OPTION_REG_PS_SIZE                       equ 0003h
OPTION_REG_PS_LENGTH                     equ 0003h
OPTION_REG_PS_MASK                       equ 0007h
OPTION_REG_PSA_POSN                      equ 0003h
OPTION_REG_PSA_POSITION                  equ 0003h
OPTION_REG_PSA_SIZE                      equ 0001h
OPTION_REG_PSA_LENGTH                    equ 0001h
OPTION_REG_PSA_MASK                      equ 0008h
OPTION_REG_T0SE_POSN                     equ 0004h
OPTION_REG_T0SE_POSITION                 equ 0004h
OPTION_REG_T0SE_SIZE                     equ 0001h
OPTION_REG_T0SE_LENGTH                   equ 0001h
OPTION_REG_T0SE_MASK                     equ 0010h
OPTION_REG_T0CS_POSN                     equ 0005h
OPTION_REG_T0CS_POSITION                 equ 0005h
OPTION_REG_T0CS_SIZE                     equ 0001h
OPTION_REG_T0CS_LENGTH                   equ 0001h
OPTION_REG_T0CS_MASK                     equ 0020h
OPTION_REG_INTEDG_POSN                   equ 0006h
OPTION_REG_INTEDG_POSITION               equ 0006h
OPTION_REG_INTEDG_SIZE                   equ 0001h
OPTION_REG_INTEDG_LENGTH                 equ 0001h
OPTION_REG_INTEDG_MASK                   equ 0040h
OPTION_REG_nWPUEN_POSN                   equ 0007h
OPTION_REG_nWPUEN_POSITION               equ 0007h
OPTION_REG_nWPUEN_SIZE                   equ 0001h
OPTION_REG_nWPUEN_LENGTH                 equ 0001h
OPTION_REG_nWPUEN_MASK                   equ 0080h
OPTION_REG_PS0_POSN                      equ 0000h
OPTION_REG_PS0_POSITION                  equ 0000h
OPTION_REG_PS0_SIZE                      equ 0001h
OPTION_REG_PS0_LENGTH                    equ 0001h
OPTION_REG_PS0_MASK                      equ 0001h
OPTION_REG_PS1_POSN                      equ 0001h
OPTION_REG_PS1_POSITION                  equ 0001h
OPTION_REG_PS1_SIZE                      equ 0001h
OPTION_REG_PS1_LENGTH                    equ 0001h
OPTION_REG_PS1_MASK                      equ 0002h
OPTION_REG_PS2_POSN                      equ 0002h
OPTION_REG_PS2_POSITION                  equ 0002h
OPTION_REG_PS2_SIZE                      equ 0001h
OPTION_REG_PS2_LENGTH                    equ 0001h
OPTION_REG_PS2_MASK                      equ 0004h

// Register: PCON
#define PCON PCON
PCON                                     equ 000Fh
// bitfield definitions
PCON_nBOR_POSN                           equ 0000h
PCON_nBOR_POSITION                       equ 0000h
PCON_nBOR_SIZE                           equ 0001h
PCON_nBOR_LENGTH                         equ 0001h
PCON_nBOR_MASK                           equ 0001h
PCON_nPOR_POSN                           equ 0001h
PCON_nPOR_POSITION                       equ 0001h
PCON_nPOR_SIZE                           equ 0001h
PCON_nPOR_LENGTH                         equ 0001h
PCON_nPOR_MASK                           equ 0002h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0010h
// bitfield definitions
OSCCON_HFIOFS_POSN                       equ 0000h
OSCCON_HFIOFS_POSITION                   equ 0000h
OSCCON_HFIOFS_SIZE                       equ 0001h
OSCCON_HFIOFS_LENGTH                     equ 0001h
OSCCON_HFIOFS_MASK                       equ 0001h
OSCCON_LFIOFR_POSN                       equ 0001h
OSCCON_LFIOFR_POSITION                   equ 0001h
OSCCON_LFIOFR_SIZE                       equ 0001h
OSCCON_LFIOFR_LENGTH                     equ 0001h
OSCCON_LFIOFR_MASK                       equ 0002h
OSCCON_HFIOFR_POSN                       equ 0003h
OSCCON_HFIOFR_POSITION                   equ 0003h
OSCCON_HFIOFR_SIZE                       equ 0001h
OSCCON_HFIOFR_LENGTH                     equ 0001h
OSCCON_HFIOFR_MASK                       equ 0008h
OSCCON_IRCF_POSN                         equ 0004h
OSCCON_IRCF_POSITION                     equ 0004h
OSCCON_IRCF_SIZE                         equ 0003h
OSCCON_IRCF_LENGTH                       equ 0003h
OSCCON_IRCF_MASK                         equ 0070h
OSCCON_IRCF0_POSN                        equ 0004h
OSCCON_IRCF0_POSITION                    equ 0004h
OSCCON_IRCF0_SIZE                        equ 0001h
OSCCON_IRCF0_LENGTH                      equ 0001h
OSCCON_IRCF0_MASK                        equ 0010h
OSCCON_IRCF1_POSN                        equ 0005h
OSCCON_IRCF1_POSITION                    equ 0005h
OSCCON_IRCF1_SIZE                        equ 0001h
OSCCON_IRCF1_LENGTH                      equ 0001h
OSCCON_IRCF1_MASK                        equ 0020h
OSCCON_IRCF2_POSN                        equ 0006h
OSCCON_IRCF2_POSITION                    equ 0006h
OSCCON_IRCF2_SIZE                        equ 0001h
OSCCON_IRCF2_LENGTH                      equ 0001h
OSCCON_IRCF2_MASK                        equ 0040h

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 0011h

// Register: PR2
#define PR2 PR2
PR2                                      equ 0012h

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0013h
// bitfield definitions
T2CON_T2CKPS_POSN                        equ 0000h
T2CON_T2CKPS_POSITION                    equ 0000h
T2CON_T2CKPS_SIZE                        equ 0002h
T2CON_T2CKPS_LENGTH                      equ 0002h
T2CON_T2CKPS_MASK                        equ 0003h
T2CON_TMR2ON_POSN                        equ 0002h
T2CON_TMR2ON_POSITION                    equ 0002h
T2CON_TMR2ON_SIZE                        equ 0001h
T2CON_TMR2ON_LENGTH                      equ 0001h
T2CON_TMR2ON_MASK                        equ 0004h
T2CON_TOUTPS_POSN                        equ 0003h
T2CON_TOUTPS_POSITION                    equ 0003h
T2CON_TOUTPS_SIZE                        equ 0004h
T2CON_TOUTPS_LENGTH                      equ 0004h
T2CON_TOUTPS_MASK                        equ 0078h
T2CON_T2CKPS0_POSN                       equ 0000h
T2CON_T2CKPS0_POSITION                   equ 0000h
T2CON_T2CKPS0_SIZE                       equ 0001h
T2CON_T2CKPS0_LENGTH                     equ 0001h
T2CON_T2CKPS0_MASK                       equ 0001h
T2CON_T2CKPS1_POSN                       equ 0001h
T2CON_T2CKPS1_POSITION                   equ 0001h
T2CON_T2CKPS1_SIZE                       equ 0001h
T2CON_T2CKPS1_LENGTH                     equ 0001h
T2CON_T2CKPS1_MASK                       equ 0002h
T2CON_TOUTPS0_POSN                       equ 0003h
T2CON_TOUTPS0_POSITION                   equ 0003h
T2CON_TOUTPS0_SIZE                       equ 0001h
T2CON_TOUTPS0_LENGTH                     equ 0001h
T2CON_TOUTPS0_MASK                       equ 0008h
T2CON_TOUTPS1_POSN                       equ 0004h
T2CON_TOUTPS1_POSITION                   equ 0004h
T2CON_TOUTPS1_SIZE                       equ 0001h
T2CON_TOUTPS1_LENGTH                     equ 0001h
T2CON_TOUTPS1_MASK                       equ 0010h
T2CON_TOUTPS2_POSN                       equ 0005h
T2CON_TOUTPS2_POSITION                   equ 0005h
T2CON_TOUTPS2_SIZE                       equ 0001h
T2CON_TOUTPS2_LENGTH                     equ 0001h
T2CON_TOUTPS2_MASK                       equ 0020h
T2CON_TOUTPS3_POSN                       equ 0006h
T2CON_TOUTPS3_POSITION                   equ 0006h
T2CON_TOUTPS3_SIZE                       equ 0001h
T2CON_TOUTPS3_LENGTH                     equ 0001h
T2CON_TOUTPS3_MASK                       equ 0040h

// Register: PWM1DCL
#define PWM1DCL PWM1DCL
PWM1DCL                                  equ 0014h
// bitfield definitions
PWM1DCL_PWM1DCL_POSN                     equ 0006h
PWM1DCL_PWM1DCL_POSITION                 equ 0006h
PWM1DCL_PWM1DCL_SIZE                     equ 0002h
PWM1DCL_PWM1DCL_LENGTH                   equ 0002h
PWM1DCL_PWM1DCL_MASK                     equ 00C0h
PWM1DCL_PWM1DCL0_POSN                    equ 0006h
PWM1DCL_PWM1DCL0_POSITION                equ 0006h
PWM1DCL_PWM1DCL0_SIZE                    equ 0001h
PWM1DCL_PWM1DCL0_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL0_MASK                    equ 0040h
PWM1DCL_PWM1DCL1_POSN                    equ 0007h
PWM1DCL_PWM1DCL1_POSITION                equ 0007h
PWM1DCL_PWM1DCL1_SIZE                    equ 0001h
PWM1DCL_PWM1DCL1_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL1_MASK                    equ 0080h

// Register: PWM1DCH
#define PWM1DCH PWM1DCH
PWM1DCH                                  equ 0015h
// bitfield definitions
PWM1DCH_PWM1DCH_POSN                     equ 0000h
PWM1DCH_PWM1DCH_POSITION                 equ 0000h
PWM1DCH_PWM1DCH_SIZE                     equ 0008h
PWM1DCH_PWM1DCH_LENGTH                   equ 0008h
PWM1DCH_PWM1DCH_MASK                     equ 00FFh
PWM1DCH_PWM1DCH0_POSN                    equ 0000h
PWM1DCH_PWM1DCH0_POSITION                equ 0000h
PWM1DCH_PWM1DCH0_SIZE                    equ 0001h
PWM1DCH_PWM1DCH0_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH0_MASK                    equ 0001h
PWM1DCH_PWM1DCH1_POSN                    equ 0001h
PWM1DCH_PWM1DCH1_POSITION                equ 0001h
PWM1DCH_PWM1DCH1_SIZE                    equ 0001h
PWM1DCH_PWM1DCH1_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH1_MASK                    equ 0002h
PWM1DCH_PWM1DCH2_POSN                    equ 0002h
PWM1DCH_PWM1DCH2_POSITION                equ 0002h
PWM1DCH_PWM1DCH2_SIZE                    equ 0001h
PWM1DCH_PWM1DCH2_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH2_MASK                    equ 0004h
PWM1DCH_PWM1DCH3_POSN                    equ 0003h
PWM1DCH_PWM1DCH3_POSITION                equ 0003h
PWM1DCH_PWM1DCH3_SIZE                    equ 0001h
PWM1DCH_PWM1DCH3_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH3_MASK                    equ 0008h
PWM1DCH_PWM1DCH4_POSN                    equ 0004h
PWM1DCH_PWM1DCH4_POSITION                equ 0004h
PWM1DCH_PWM1DCH4_SIZE                    equ 0001h
PWM1DCH_PWM1DCH4_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH4_MASK                    equ 0010h
PWM1DCH_PWM1DCH5_POSN                    equ 0005h
PWM1DCH_PWM1DCH5_POSITION                equ 0005h
PWM1DCH_PWM1DCH5_SIZE                    equ 0001h
PWM1DCH_PWM1DCH5_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH5_MASK                    equ 0020h
PWM1DCH_PWM1DCH6_POSN                    equ 0006h
PWM1DCH_PWM1DCH6_POSITION                equ 0006h
PWM1DCH_PWM1DCH6_SIZE                    equ 0001h
PWM1DCH_PWM1DCH6_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH6_MASK                    equ 0040h
PWM1DCH_PWM1DCH7_POSN                    equ 0007h
PWM1DCH_PWM1DCH7_POSITION                equ 0007h
PWM1DCH_PWM1DCH7_SIZE                    equ 0001h
PWM1DCH_PWM1DCH7_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH7_MASK                    equ 0080h

// Register: PWM1CON
#define PWM1CON PWM1CON
PWM1CON                                  equ 0016h
// bitfield definitions
PWM1CON_PWM1POL_POSN                     equ 0004h
PWM1CON_PWM1POL_POSITION                 equ 0004h
PWM1CON_PWM1POL_SIZE                     equ 0001h
PWM1CON_PWM1POL_LENGTH                   equ 0001h
PWM1CON_PWM1POL_MASK                     equ 0010h
PWM1CON_PWM1OUT_POSN                     equ 0005h
PWM1CON_PWM1OUT_POSITION                 equ 0005h
PWM1CON_PWM1OUT_SIZE                     equ 0001h
PWM1CON_PWM1OUT_LENGTH                   equ 0001h
PWM1CON_PWM1OUT_MASK                     equ 0020h
PWM1CON_PWM1OE_POSN                      equ 0006h
PWM1CON_PWM1OE_POSITION                  equ 0006h
PWM1CON_PWM1OE_SIZE                      equ 0001h
PWM1CON_PWM1OE_LENGTH                    equ 0001h
PWM1CON_PWM1OE_MASK                      equ 0040h
PWM1CON_PWM1EN_POSN                      equ 0007h
PWM1CON_PWM1EN_POSITION                  equ 0007h
PWM1CON_PWM1EN_SIZE                      equ 0001h
PWM1CON_PWM1EN_LENGTH                    equ 0001h
PWM1CON_PWM1EN_MASK                      equ 0080h

// Register: PWM2DCL
#define PWM2DCL PWM2DCL
PWM2DCL                                  equ 0017h
// bitfield definitions
PWM2DCL_PWM2DCL_POSN                     equ 0006h
PWM2DCL_PWM2DCL_POSITION                 equ 0006h
PWM2DCL_PWM2DCL_SIZE                     equ 0002h
PWM2DCL_PWM2DCL_LENGTH                   equ 0002h
PWM2DCL_PWM2DCL_MASK                     equ 00C0h
PWM2DCL_PWM2DCL0_POSN                    equ 0006h
PWM2DCL_PWM2DCL0_POSITION                equ 0006h
PWM2DCL_PWM2DCL0_SIZE                    equ 0001h
PWM2DCL_PWM2DCL0_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL0_MASK                    equ 0040h
PWM2DCL_PWM2DCL1_POSN                    equ 0007h
PWM2DCL_PWM2DCL1_POSITION                equ 0007h
PWM2DCL_PWM2DCL1_SIZE                    equ 0001h
PWM2DCL_PWM2DCL1_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL1_MASK                    equ 0080h

// Register: PWM2DCH
#define PWM2DCH PWM2DCH
PWM2DCH                                  equ 0018h
// bitfield definitions
PWM2DCH_PWM2DCH_POSN                     equ 0000h
PWM2DCH_PWM2DCH_POSITION                 equ 0000h
PWM2DCH_PWM2DCH_SIZE                     equ 0008h
PWM2DCH_PWM2DCH_LENGTH                   equ 0008h
PWM2DCH_PWM2DCH_MASK                     equ 00FFh
PWM2DCH_PWM2DCH0_POSN                    equ 0000h
PWM2DCH_PWM2DCH0_POSITION                equ 0000h
PWM2DCH_PWM2DCH0_SIZE                    equ 0001h
PWM2DCH_PWM2DCH0_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH0_MASK                    equ 0001h
PWM2DCH_PWM2DCH1_POSN                    equ 0001h
PWM2DCH_PWM2DCH1_POSITION                equ 0001h
PWM2DCH_PWM2DCH1_SIZE                    equ 0001h
PWM2DCH_PWM2DCH1_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH1_MASK                    equ 0002h
PWM2DCH_PWM2DCH2_POSN                    equ 0002h
PWM2DCH_PWM2DCH2_POSITION                equ 0002h
PWM2DCH_PWM2DCH2_SIZE                    equ 0001h
PWM2DCH_PWM2DCH2_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH2_MASK                    equ 0004h
PWM2DCH_PWM2DCH3_POSN                    equ 0003h
PWM2DCH_PWM2DCH3_POSITION                equ 0003h
PWM2DCH_PWM2DCH3_SIZE                    equ 0001h
PWM2DCH_PWM2DCH3_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH3_MASK                    equ 0008h
PWM2DCH_PWM2DCH4_POSN                    equ 0004h
PWM2DCH_PWM2DCH4_POSITION                equ 0004h
PWM2DCH_PWM2DCH4_SIZE                    equ 0001h
PWM2DCH_PWM2DCH4_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH4_MASK                    equ 0010h
PWM2DCH_PWM2DCH5_POSN                    equ 0005h
PWM2DCH_PWM2DCH5_POSITION                equ 0005h
PWM2DCH_PWM2DCH5_SIZE                    equ 0001h
PWM2DCH_PWM2DCH5_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH5_MASK                    equ 0020h
PWM2DCH_PWM2DCH6_POSN                    equ 0006h
PWM2DCH_PWM2DCH6_POSITION                equ 0006h
PWM2DCH_PWM2DCH6_SIZE                    equ 0001h
PWM2DCH_PWM2DCH6_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH6_MASK                    equ 0040h
PWM2DCH_PWM2DCH7_POSN                    equ 0007h
PWM2DCH_PWM2DCH7_POSITION                equ 0007h
PWM2DCH_PWM2DCH7_SIZE                    equ 0001h
PWM2DCH_PWM2DCH7_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH7_MASK                    equ 0080h

// Register: PWM2CON
#define PWM2CON PWM2CON
PWM2CON                                  equ 0019h
// bitfield definitions
PWM2CON_PWM2POL_POSN                     equ 0004h
PWM2CON_PWM2POL_POSITION                 equ 0004h
PWM2CON_PWM2POL_SIZE                     equ 0001h
PWM2CON_PWM2POL_LENGTH                   equ 0001h
PWM2CON_PWM2POL_MASK                     equ 0010h
PWM2CON_PWM2OUT_POSN                     equ 0005h
PWM2CON_PWM2OUT_POSITION                 equ 0005h
PWM2CON_PWM2OUT_SIZE                     equ 0001h
PWM2CON_PWM2OUT_LENGTH                   equ 0001h
PWM2CON_PWM2OUT_MASK                     equ 0020h
PWM2CON_PWM2OE_POSN                      equ 0006h
PWM2CON_PWM2OE_POSITION                  equ 0006h
PWM2CON_PWM2OE_SIZE                      equ 0001h
PWM2CON_PWM2OE_LENGTH                    equ 0001h
PWM2CON_PWM2OE_MASK                      equ 0040h
PWM2CON_PWM2EN_POSN                      equ 0007h
PWM2CON_PWM2EN_POSITION                  equ 0007h
PWM2CON_PWM2EN_SIZE                      equ 0001h
PWM2CON_PWM2EN_LENGTH                    equ 0001h
PWM2CON_PWM2EN_MASK                      equ 0080h

// Register: IOCAP
#define IOCAP IOCAP
IOCAP                                    equ 001Ah
// bitfield definitions
IOCAP_IOCAP0_POSN                        equ 0000h
IOCAP_IOCAP0_POSITION                    equ 0000h
IOCAP_IOCAP0_SIZE                        equ 0001h
IOCAP_IOCAP0_LENGTH                      equ 0001h
IOCAP_IOCAP0_MASK                        equ 0001h
IOCAP_IOCAP1_POSN                        equ 0001h
IOCAP_IOCAP1_POSITION                    equ 0001h
IOCAP_IOCAP1_SIZE                        equ 0001h
IOCAP_IOCAP1_LENGTH                      equ 0001h
IOCAP_IOCAP1_MASK                        equ 0002h
IOCAP_IOCAP2_POSN                        equ 0002h
IOCAP_IOCAP2_POSITION                    equ 0002h
IOCAP_IOCAP2_SIZE                        equ 0001h
IOCAP_IOCAP2_LENGTH                      equ 0001h
IOCAP_IOCAP2_MASK                        equ 0004h
IOCAP_IOCAP3_POSN                        equ 0003h
IOCAP_IOCAP3_POSITION                    equ 0003h
IOCAP_IOCAP3_SIZE                        equ 0001h
IOCAP_IOCAP3_LENGTH                      equ 0001h
IOCAP_IOCAP3_MASK                        equ 0008h

// Register: IOCAN
#define IOCAN IOCAN
IOCAN                                    equ 001Bh
// bitfield definitions
IOCAN_IOCAN0_POSN                        equ 0000h
IOCAN_IOCAN0_POSITION                    equ 0000h
IOCAN_IOCAN0_SIZE                        equ 0001h
IOCAN_IOCAN0_LENGTH                      equ 0001h
IOCAN_IOCAN0_MASK                        equ 0001h
IOCAN_IOCAN1_POSN                        equ 0001h
IOCAN_IOCAN1_POSITION                    equ 0001h
IOCAN_IOCAN1_SIZE                        equ 0001h
IOCAN_IOCAN1_LENGTH                      equ 0001h
IOCAN_IOCAN1_MASK                        equ 0002h
IOCAN_IOCAN2_POSN                        equ 0002h
IOCAN_IOCAN2_POSITION                    equ 0002h
IOCAN_IOCAN2_SIZE                        equ 0001h
IOCAN_IOCAN2_LENGTH                      equ 0001h
IOCAN_IOCAN2_MASK                        equ 0004h
IOCAN_IOCAN3_POSN                        equ 0003h
IOCAN_IOCAN3_POSITION                    equ 0003h
IOCAN_IOCAN3_SIZE                        equ 0001h
IOCAN_IOCAN3_LENGTH                      equ 0001h
IOCAN_IOCAN3_MASK                        equ 0008h

// Register: IOCAF
#define IOCAF IOCAF
IOCAF                                    equ 001Ch
// bitfield definitions
IOCAF_IOCAF0_POSN                        equ 0000h
IOCAF_IOCAF0_POSITION                    equ 0000h
IOCAF_IOCAF0_SIZE                        equ 0001h
IOCAF_IOCAF0_LENGTH                      equ 0001h
IOCAF_IOCAF0_MASK                        equ 0001h
IOCAF_IOCAF1_POSN                        equ 0001h
IOCAF_IOCAF1_POSITION                    equ 0001h
IOCAF_IOCAF1_SIZE                        equ 0001h
IOCAF_IOCAF1_LENGTH                      equ 0001h
IOCAF_IOCAF1_MASK                        equ 0002h
IOCAF_IOCAF2_POSN                        equ 0002h
IOCAF_IOCAF2_POSITION                    equ 0002h
IOCAF_IOCAF2_SIZE                        equ 0001h
IOCAF_IOCAF2_LENGTH                      equ 0001h
IOCAF_IOCAF2_MASK                        equ 0004h
IOCAF_IOCAF3_POSN                        equ 0003h
IOCAF_IOCAF3_POSITION                    equ 0003h
IOCAF_IOCAF3_SIZE                        equ 0001h
IOCAF_IOCAF3_LENGTH                      equ 0001h
IOCAF_IOCAF3_MASK                        equ 0008h

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 001Dh
// bitfield definitions
FVRCON_ADFVR_POSN                        equ 0000h
FVRCON_ADFVR_POSITION                    equ 0000h
FVRCON_ADFVR_SIZE                        equ 0002h
FVRCON_ADFVR_LENGTH                      equ 0002h
FVRCON_ADFVR_MASK                        equ 0003h
FVRCON_TSRNG_POSN                        equ 0004h
FVRCON_TSRNG_POSITION                    equ 0004h
FVRCON_TSRNG_SIZE                        equ 0001h
FVRCON_TSRNG_LENGTH                      equ 0001h
FVRCON_TSRNG_MASK                        equ 0010h
FVRCON_TSEN_POSN                         equ 0005h
FVRCON_TSEN_POSITION                     equ 0005h
FVRCON_TSEN_SIZE                         equ 0001h
FVRCON_TSEN_LENGTH                       equ 0001h
FVRCON_TSEN_MASK                         equ 0020h
FVRCON_FVRRDY_POSN                       equ 0006h
FVRCON_FVRRDY_POSITION                   equ 0006h
FVRCON_FVRRDY_SIZE                       equ 0001h
FVRCON_FVRRDY_LENGTH                     equ 0001h
FVRCON_FVRRDY_MASK                       equ 0040h
FVRCON_FVREN_POSN                        equ 0007h
FVRCON_FVREN_POSITION                    equ 0007h
FVRCON_FVREN_SIZE                        equ 0001h
FVRCON_FVREN_LENGTH                      equ 0001h
FVRCON_FVREN_MASK                        equ 0080h
FVRCON_ADFVR0_POSN                       equ 0000h
FVRCON_ADFVR0_POSITION                   equ 0000h
FVRCON_ADFVR0_SIZE                       equ 0001h
FVRCON_ADFVR0_LENGTH                     equ 0001h
FVRCON_ADFVR0_MASK                       equ 0001h
FVRCON_ADFVR1_POSN                       equ 0001h
FVRCON_ADFVR1_POSITION                   equ 0001h
FVRCON_ADFVR1_SIZE                       equ 0001h
FVRCON_ADFVR1_LENGTH                     equ 0001h
FVRCON_ADFVR1_MASK                       equ 0002h

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 001Eh

// Register: ADCON
#define ADCON ADCON
ADCON                                    equ 001Fh
// bitfield definitions
ADCON_ADON_POSN                          equ 0000h
ADCON_ADON_POSITION                      equ 0000h
ADCON_ADON_SIZE                          equ 0001h
ADCON_ADON_LENGTH                        equ 0001h
ADCON_ADON_MASK                          equ 0001h
ADCON_GO_nDONE_POSN                      equ 0001h
ADCON_GO_nDONE_POSITION                  equ 0001h
ADCON_GO_nDONE_SIZE                      equ 0001h
ADCON_GO_nDONE_LENGTH                    equ 0001h
ADCON_GO_nDONE_MASK                      equ 0002h
ADCON_CHS_POSN                           equ 0002h
ADCON_CHS_POSITION                       equ 0002h
ADCON_CHS_SIZE                           equ 0003h
ADCON_CHS_LENGTH                         equ 0003h
ADCON_CHS_MASK                           equ 001Ch
ADCON_ADCS_POSN                          equ 0005h
ADCON_ADCS_POSITION                      equ 0005h
ADCON_ADCS_SIZE                          equ 0003h
ADCON_ADCS_LENGTH                        equ 0003h
ADCON_ADCS_MASK                          equ 00E0h
ADCON_CHS0_POSN                          equ 0002h
ADCON_CHS0_POSITION                      equ 0002h
ADCON_CHS0_SIZE                          equ 0001h
ADCON_CHS0_LENGTH                        equ 0001h
ADCON_CHS0_MASK                          equ 0004h
ADCON_CHS1_POSN                          equ 0003h
ADCON_CHS1_POSITION                      equ 0003h
ADCON_CHS1_SIZE                          equ 0001h
ADCON_CHS1_LENGTH                        equ 0001h
ADCON_CHS1_MASK                          equ 0008h
ADCON_CHS2_POSN                          equ 0004h
ADCON_CHS2_POSITION                      equ 0004h
ADCON_CHS2_SIZE                          equ 0001h
ADCON_CHS2_LENGTH                        equ 0001h
ADCON_CHS2_MASK                          equ 0010h
ADCON_ADCS0_POSN                         equ 0005h
ADCON_ADCS0_POSITION                     equ 0005h
ADCON_ADCS0_SIZE                         equ 0001h
ADCON_ADCS0_LENGTH                       equ 0001h
ADCON_ADCS0_MASK                         equ 0020h
ADCON_ADCS1_POSN                         equ 0006h
ADCON_ADCS1_POSITION                     equ 0006h
ADCON_ADCS1_SIZE                         equ 0001h
ADCON_ADCS1_LENGTH                       equ 0001h
ADCON_ADCS1_MASK                         equ 0040h
ADCON_ADCS2_POSN                         equ 0007h
ADCON_ADCS2_POSITION                     equ 0007h
ADCON_ADCS2_SIZE                         equ 0001h
ADCON_ADCS2_LENGTH                       equ 0001h
ADCON_ADCS2_MASK                         equ 0080h

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 0020h
// bitfield definitions
PMADRL_PMADR_POSN                        equ 0000h
PMADRL_PMADR_POSITION                    equ 0000h
PMADRL_PMADR_SIZE                        equ 0008h
PMADRL_PMADR_LENGTH                      equ 0008h
PMADRL_PMADR_MASK                        equ 00FFh

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 0021h
// bitfield definitions
PMADRH_PMADR8_POSN                       equ 0000h
PMADRH_PMADR8_POSITION                   equ 0000h
PMADRH_PMADR8_SIZE                       equ 0001h
PMADRH_PMADR8_LENGTH                     equ 0001h
PMADRH_PMADR8_MASK                       equ 0001h

// Register: PMDATL
#define PMDATL PMDATL
PMDATL                                   equ 0022h
// bitfield definitions
PMDATL_PMDATL_POSN                       equ 0000h
PMDATL_PMDATL_POSITION                   equ 0000h
PMDATL_PMDATL_SIZE                       equ 0008h
PMDATL_PMDATL_LENGTH                     equ 0008h
PMDATL_PMDATL_MASK                       equ 00FFh

// Register: PMDATH
#define PMDATH PMDATH
PMDATH                                   equ 0023h
// bitfield definitions
PMDATH_PMDATH_POSN                       equ 0000h
PMDATH_PMDATH_POSITION                   equ 0000h
PMDATH_PMDATH_SIZE                       equ 0006h
PMDATH_PMDATH_LENGTH                     equ 0006h
PMDATH_PMDATH_MASK                       equ 003Fh

// Register: PMCON1
#define PMCON1 PMCON1
PMCON1                                   equ 0024h
// bitfield definitions
PMCON1_RD_POSN                           equ 0000h
PMCON1_RD_POSITION                       equ 0000h
PMCON1_RD_SIZE                           equ 0001h
PMCON1_RD_LENGTH                         equ 0001h
PMCON1_RD_MASK                           equ 0001h
PMCON1_WR_POSN                           equ 0001h
PMCON1_WR_POSITION                       equ 0001h
PMCON1_WR_SIZE                           equ 0001h
PMCON1_WR_LENGTH                         equ 0001h
PMCON1_WR_MASK                           equ 0002h
PMCON1_WREN_POSN                         equ 0002h
PMCON1_WREN_POSITION                     equ 0002h
PMCON1_WREN_SIZE                         equ 0001h
PMCON1_WREN_LENGTH                       equ 0001h
PMCON1_WREN_MASK                         equ 0004h
PMCON1_WRERR_POSN                        equ 0003h
PMCON1_WRERR_POSITION                    equ 0003h
PMCON1_WRERR_SIZE                        equ 0001h
PMCON1_WRERR_LENGTH                      equ 0001h
PMCON1_WRERR_MASK                        equ 0008h
PMCON1_FREE_POSN                         equ 0004h
PMCON1_FREE_POSITION                     equ 0004h
PMCON1_FREE_SIZE                         equ 0001h
PMCON1_FREE_LENGTH                       equ 0001h
PMCON1_FREE_MASK                         equ 0010h
PMCON1_LWLO_POSN                         equ 0005h
PMCON1_LWLO_POSITION                     equ 0005h
PMCON1_LWLO_SIZE                         equ 0001h
PMCON1_LWLO_LENGTH                       equ 0001h
PMCON1_LWLO_MASK                         equ 0020h
PMCON1_CFGS_POSN                         equ 0006h
PMCON1_CFGS_POSITION                     equ 0006h
PMCON1_CFGS_SIZE                         equ 0001h
PMCON1_CFGS_LENGTH                       equ 0001h
PMCON1_CFGS_MASK                         equ 0040h

// Register: PMCON2
#define PMCON2 PMCON2
PMCON2                                   equ 0025h
// bitfield definitions
PMCON2_PMCON2_POSN                       equ 0000h
PMCON2_PMCON2_POSITION                   equ 0000h
PMCON2_PMCON2_SIZE                       equ 0008h
PMCON2_PMCON2_LENGTH                     equ 0008h
PMCON2_PMCON2_MASK                       equ 00FFh

// Register: CLKRCON
#define CLKRCON CLKRCON
CLKRCON                                  equ 0026h
// bitfield definitions
CLKRCON_CLKROE_POSN                      equ 0006h
CLKRCON_CLKROE_POSITION                  equ 0006h
CLKRCON_CLKROE_SIZE                      equ 0001h
CLKRCON_CLKROE_LENGTH                    equ 0001h
CLKRCON_CLKROE_MASK                      equ 0040h

// Register: NCO1ACCL
#define NCO1ACCL NCO1ACCL
NCO1ACCL                                 equ 0027h
// bitfield definitions
NCO1ACCL_NCO1ACC0_POSN                   equ 0000h
NCO1ACCL_NCO1ACC0_POSITION               equ 0000h
NCO1ACCL_NCO1ACC0_SIZE                   equ 0001h
NCO1ACCL_NCO1ACC0_LENGTH                 equ 0001h
NCO1ACCL_NCO1ACC0_MASK                   equ 0001h
NCO1ACCL_NCO1ACC1_POSN                   equ 0001h
NCO1ACCL_NCO1ACC1_POSITION               equ 0001h
NCO1ACCL_NCO1ACC1_SIZE                   equ 0001h
NCO1ACCL_NCO1ACC1_LENGTH                 equ 0001h
NCO1ACCL_NCO1ACC1_MASK                   equ 0002h
NCO1ACCL_NCO1ACC2_POSN                   equ 0002h
NCO1ACCL_NCO1ACC2_POSITION               equ 0002h
NCO1ACCL_NCO1ACC2_SIZE                   equ 0001h
NCO1ACCL_NCO1ACC2_LENGTH                 equ 0001h
NCO1ACCL_NCO1ACC2_MASK                   equ 0004h
NCO1ACCL_NCO1ACC3_POSN                   equ 0003h
NCO1ACCL_NCO1ACC3_POSITION               equ 0003h
NCO1ACCL_NCO1ACC3_SIZE                   equ 0001h
NCO1ACCL_NCO1ACC3_LENGTH                 equ 0001h
NCO1ACCL_NCO1ACC3_MASK                   equ 0008h
NCO1ACCL_NCO1ACC4_POSN                   equ 0004h
NCO1ACCL_NCO1ACC4_POSITION               equ 0004h
NCO1ACCL_NCO1ACC4_SIZE                   equ 0001h
NCO1ACCL_NCO1ACC4_LENGTH                 equ 0001h
NCO1ACCL_NCO1ACC4_MASK                   equ 0010h
NCO1ACCL_NCO1ACC5_POSN                   equ 0005h
NCO1ACCL_NCO1ACC5_POSITION               equ 0005h
NCO1ACCL_NCO1ACC5_SIZE                   equ 0001h
NCO1ACCL_NCO1ACC5_LENGTH                 equ 0001h
NCO1ACCL_NCO1ACC5_MASK                   equ 0020h
NCO1ACCL_NCO1ACC6_POSN                   equ 0006h
NCO1ACCL_NCO1ACC6_POSITION               equ 0006h
NCO1ACCL_NCO1ACC6_SIZE                   equ 0001h
NCO1ACCL_NCO1ACC6_LENGTH                 equ 0001h
NCO1ACCL_NCO1ACC6_MASK                   equ 0040h
NCO1ACCL_NCO1ACC7_POSN                   equ 0007h
NCO1ACCL_NCO1ACC7_POSITION               equ 0007h
NCO1ACCL_NCO1ACC7_SIZE                   equ 0001h
NCO1ACCL_NCO1ACC7_LENGTH                 equ 0001h
NCO1ACCL_NCO1ACC7_MASK                   equ 0080h

// Register: NCO1ACCH
#define NCO1ACCH NCO1ACCH
NCO1ACCH                                 equ 0028h
// bitfield definitions
NCO1ACCH_NCO1ACC8_POSN                   equ 0000h
NCO1ACCH_NCO1ACC8_POSITION               equ 0000h
NCO1ACCH_NCO1ACC8_SIZE                   equ 0001h
NCO1ACCH_NCO1ACC8_LENGTH                 equ 0001h
NCO1ACCH_NCO1ACC8_MASK                   equ 0001h
NCO1ACCH_NCO1ACC9_POSN                   equ 0001h
NCO1ACCH_NCO1ACC9_POSITION               equ 0001h
NCO1ACCH_NCO1ACC9_SIZE                   equ 0001h
NCO1ACCH_NCO1ACC9_LENGTH                 equ 0001h
NCO1ACCH_NCO1ACC9_MASK                   equ 0002h
NCO1ACCH_NCO1ACC10_POSN                  equ 0002h
NCO1ACCH_NCO1ACC10_POSITION              equ 0002h
NCO1ACCH_NCO1ACC10_SIZE                  equ 0001h
NCO1ACCH_NCO1ACC10_LENGTH                equ 0001h
NCO1ACCH_NCO1ACC10_MASK                  equ 0004h
NCO1ACCH_NCO1ACC11_POSN                  equ 0003h
NCO1ACCH_NCO1ACC11_POSITION              equ 0003h
NCO1ACCH_NCO1ACC11_SIZE                  equ 0001h
NCO1ACCH_NCO1ACC11_LENGTH                equ 0001h
NCO1ACCH_NCO1ACC11_MASK                  equ 0008h
NCO1ACCH_NCO1ACC12_POSN                  equ 0004h
NCO1ACCH_NCO1ACC12_POSITION              equ 0004h
NCO1ACCH_NCO1ACC12_SIZE                  equ 0001h
NCO1ACCH_NCO1ACC12_LENGTH                equ 0001h
NCO1ACCH_NCO1ACC12_MASK                  equ 0010h
NCO1ACCH_NCO1ACC13_POSN                  equ 0005h
NCO1ACCH_NCO1ACC13_POSITION              equ 0005h
NCO1ACCH_NCO1ACC13_SIZE                  equ 0001h
NCO1ACCH_NCO1ACC13_LENGTH                equ 0001h
NCO1ACCH_NCO1ACC13_MASK                  equ 0020h
NCO1ACCH_NCO1ACC14_POSN                  equ 0006h
NCO1ACCH_NCO1ACC14_POSITION              equ 0006h
NCO1ACCH_NCO1ACC14_SIZE                  equ 0001h
NCO1ACCH_NCO1ACC14_LENGTH                equ 0001h
NCO1ACCH_NCO1ACC14_MASK                  equ 0040h
NCO1ACCH_NCO1ACC15_POSN                  equ 0007h
NCO1ACCH_NCO1ACC15_POSITION              equ 0007h
NCO1ACCH_NCO1ACC15_SIZE                  equ 0001h
NCO1ACCH_NCO1ACC15_LENGTH                equ 0001h
NCO1ACCH_NCO1ACC15_MASK                  equ 0080h

// Register: NCO1ACCU
#define NCO1ACCU NCO1ACCU
NCO1ACCU                                 equ 0029h
// bitfield definitions
NCO1ACCU_NCO1ACC16_POSN                  equ 0000h
NCO1ACCU_NCO1ACC16_POSITION              equ 0000h
NCO1ACCU_NCO1ACC16_SIZE                  equ 0001h
NCO1ACCU_NCO1ACC16_LENGTH                equ 0001h
NCO1ACCU_NCO1ACC16_MASK                  equ 0001h
NCO1ACCU_NCO1ACC17_POSN                  equ 0001h
NCO1ACCU_NCO1ACC17_POSITION              equ 0001h
NCO1ACCU_NCO1ACC17_SIZE                  equ 0001h
NCO1ACCU_NCO1ACC17_LENGTH                equ 0001h
NCO1ACCU_NCO1ACC17_MASK                  equ 0002h
NCO1ACCU_NCO1ACC18_POSN                  equ 0002h
NCO1ACCU_NCO1ACC18_POSITION              equ 0002h
NCO1ACCU_NCO1ACC18_SIZE                  equ 0001h
NCO1ACCU_NCO1ACC18_LENGTH                equ 0001h
NCO1ACCU_NCO1ACC18_MASK                  equ 0004h
NCO1ACCU_NCO1ACC19_POSN                  equ 0003h
NCO1ACCU_NCO1ACC19_POSITION              equ 0003h
NCO1ACCU_NCO1ACC19_SIZE                  equ 0001h
NCO1ACCU_NCO1ACC19_LENGTH                equ 0001h
NCO1ACCU_NCO1ACC19_MASK                  equ 0008h

// Register: NCO1INCL
#define NCO1INCL NCO1INCL
NCO1INCL                                 equ 002Ah
// bitfield definitions
NCO1INCL_NCO1INC0_POSN                   equ 0000h
NCO1INCL_NCO1INC0_POSITION               equ 0000h
NCO1INCL_NCO1INC0_SIZE                   equ 0001h
NCO1INCL_NCO1INC0_LENGTH                 equ 0001h
NCO1INCL_NCO1INC0_MASK                   equ 0001h
NCO1INCL_NCO1INC1_POSN                   equ 0001h
NCO1INCL_NCO1INC1_POSITION               equ 0001h
NCO1INCL_NCO1INC1_SIZE                   equ 0001h
NCO1INCL_NCO1INC1_LENGTH                 equ 0001h
NCO1INCL_NCO1INC1_MASK                   equ 0002h
NCO1INCL_NCO1INC2_POSN                   equ 0002h
NCO1INCL_NCO1INC2_POSITION               equ 0002h
NCO1INCL_NCO1INC2_SIZE                   equ 0001h
NCO1INCL_NCO1INC2_LENGTH                 equ 0001h
NCO1INCL_NCO1INC2_MASK                   equ 0004h
NCO1INCL_NCO1INC3_POSN                   equ 0003h
NCO1INCL_NCO1INC3_POSITION               equ 0003h
NCO1INCL_NCO1INC3_SIZE                   equ 0001h
NCO1INCL_NCO1INC3_LENGTH                 equ 0001h
NCO1INCL_NCO1INC3_MASK                   equ 0008h
NCO1INCL_NCO1INC4_POSN                   equ 0004h
NCO1INCL_NCO1INC4_POSITION               equ 0004h
NCO1INCL_NCO1INC4_SIZE                   equ 0001h
NCO1INCL_NCO1INC4_LENGTH                 equ 0001h
NCO1INCL_NCO1INC4_MASK                   equ 0010h
NCO1INCL_NCO1INC5_POSN                   equ 0005h
NCO1INCL_NCO1INC5_POSITION               equ 0005h
NCO1INCL_NCO1INC5_SIZE                   equ 0001h
NCO1INCL_NCO1INC5_LENGTH                 equ 0001h
NCO1INCL_NCO1INC5_MASK                   equ 0020h
NCO1INCL_NCO1INC6_POSN                   equ 0006h
NCO1INCL_NCO1INC6_POSITION               equ 0006h
NCO1INCL_NCO1INC6_SIZE                   equ 0001h
NCO1INCL_NCO1INC6_LENGTH                 equ 0001h
NCO1INCL_NCO1INC6_MASK                   equ 0040h
NCO1INCL_NCO1INC7_POSN                   equ 0007h
NCO1INCL_NCO1INC7_POSITION               equ 0007h
NCO1INCL_NCO1INC7_SIZE                   equ 0001h
NCO1INCL_NCO1INC7_LENGTH                 equ 0001h
NCO1INCL_NCO1INC7_MASK                   equ 0080h

// Register: NCO1INCH
#define NCO1INCH NCO1INCH
NCO1INCH                                 equ 002Bh
// bitfield definitions
NCO1INCH_NCO1INC8_POSN                   equ 0000h
NCO1INCH_NCO1INC8_POSITION               equ 0000h
NCO1INCH_NCO1INC8_SIZE                   equ 0001h
NCO1INCH_NCO1INC8_LENGTH                 equ 0001h
NCO1INCH_NCO1INC8_MASK                   equ 0001h
NCO1INCH_NCO1INC9_POSN                   equ 0001h
NCO1INCH_NCO1INC9_POSITION               equ 0001h
NCO1INCH_NCO1INC9_SIZE                   equ 0001h
NCO1INCH_NCO1INC9_LENGTH                 equ 0001h
NCO1INCH_NCO1INC9_MASK                   equ 0002h
NCO1INCH_NCO1INC10_POSN                  equ 0002h
NCO1INCH_NCO1INC10_POSITION              equ 0002h
NCO1INCH_NCO1INC10_SIZE                  equ 0001h
NCO1INCH_NCO1INC10_LENGTH                equ 0001h
NCO1INCH_NCO1INC10_MASK                  equ 0004h
NCO1INCH_NCO1INC11_POSN                  equ 0003h
NCO1INCH_NCO1INC11_POSITION              equ 0003h
NCO1INCH_NCO1INC11_SIZE                  equ 0001h
NCO1INCH_NCO1INC11_LENGTH                equ 0001h
NCO1INCH_NCO1INC11_MASK                  equ 0008h
NCO1INCH_NCO1INC12_POSN                  equ 0004h
NCO1INCH_NCO1INC12_POSITION              equ 0004h
NCO1INCH_NCO1INC12_SIZE                  equ 0001h
NCO1INCH_NCO1INC12_LENGTH                equ 0001h
NCO1INCH_NCO1INC12_MASK                  equ 0010h
NCO1INCH_NCO1INC13_POSN                  equ 0005h
NCO1INCH_NCO1INC13_POSITION              equ 0005h
NCO1INCH_NCO1INC13_SIZE                  equ 0001h
NCO1INCH_NCO1INC13_LENGTH                equ 0001h
NCO1INCH_NCO1INC13_MASK                  equ 0020h
NCO1INCH_NCO1INC14_POSN                  equ 0006h
NCO1INCH_NCO1INC14_POSITION              equ 0006h
NCO1INCH_NCO1INC14_SIZE                  equ 0001h
NCO1INCH_NCO1INC14_LENGTH                equ 0001h
NCO1INCH_NCO1INC14_MASK                  equ 0040h
NCO1INCH_NCO1INC15_POSN                  equ 0007h
NCO1INCH_NCO1INC15_POSITION              equ 0007h
NCO1INCH_NCO1INC15_SIZE                  equ 0001h
NCO1INCH_NCO1INC15_LENGTH                equ 0001h
NCO1INCH_NCO1INC15_MASK                  equ 0080h

// Register: NCO1INCU
#define NCO1INCU NCO1INCU
NCO1INCU                                 equ 002Ch

// Register: NCO1CON
#define NCO1CON NCO1CON
NCO1CON                                  equ 002Dh
// bitfield definitions
NCO1CON_N1PFM_POSN                       equ 0000h
NCO1CON_N1PFM_POSITION                   equ 0000h
NCO1CON_N1PFM_SIZE                       equ 0001h
NCO1CON_N1PFM_LENGTH                     equ 0001h
NCO1CON_N1PFM_MASK                       equ 0001h
NCO1CON_N1POL_POSN                       equ 0004h
NCO1CON_N1POL_POSITION                   equ 0004h
NCO1CON_N1POL_SIZE                       equ 0001h
NCO1CON_N1POL_LENGTH                     equ 0001h
NCO1CON_N1POL_MASK                       equ 0010h
NCO1CON_N1OUT_POSN                       equ 0005h
NCO1CON_N1OUT_POSITION                   equ 0005h
NCO1CON_N1OUT_SIZE                       equ 0001h
NCO1CON_N1OUT_LENGTH                     equ 0001h
NCO1CON_N1OUT_MASK                       equ 0020h
NCO1CON_N1OE_POSN                        equ 0006h
NCO1CON_N1OE_POSITION                    equ 0006h
NCO1CON_N1OE_SIZE                        equ 0001h
NCO1CON_N1OE_LENGTH                      equ 0001h
NCO1CON_N1OE_MASK                        equ 0040h
NCO1CON_N1EN_POSN                        equ 0007h
NCO1CON_N1EN_POSITION                    equ 0007h
NCO1CON_N1EN_SIZE                        equ 0001h
NCO1CON_N1EN_LENGTH                      equ 0001h
NCO1CON_N1EN_MASK                        equ 0080h

// Register: NCO1CLK
#define NCO1CLK NCO1CLK
NCO1CLK                                  equ 002Eh
// bitfield definitions
NCO1CLK_N1CKS_POSN                       equ 0000h
NCO1CLK_N1CKS_POSITION                   equ 0000h
NCO1CLK_N1CKS_SIZE                       equ 0004h
NCO1CLK_N1CKS_LENGTH                     equ 0004h
NCO1CLK_N1CKS_MASK                       equ 000Fh
NCO1CLK_N1PWS_POSN                       equ 0005h
NCO1CLK_N1PWS_POSITION                   equ 0005h
NCO1CLK_N1PWS_SIZE                       equ 0003h
NCO1CLK_N1PWS_LENGTH                     equ 0003h
NCO1CLK_N1PWS_MASK                       equ 00E0h
NCO1CLK_N1CKS0_POSN                      equ 0000h
NCO1CLK_N1CKS0_POSITION                  equ 0000h
NCO1CLK_N1CKS0_SIZE                      equ 0001h
NCO1CLK_N1CKS0_LENGTH                    equ 0001h
NCO1CLK_N1CKS0_MASK                      equ 0001h
NCO1CLK_N1CKS1_POSN                      equ 0001h
NCO1CLK_N1CKS1_POSITION                  equ 0001h
NCO1CLK_N1CKS1_SIZE                      equ 0001h
NCO1CLK_N1CKS1_LENGTH                    equ 0001h
NCO1CLK_N1CKS1_MASK                      equ 0002h
NCO1CLK_N1PWS0_POSN                      equ 0005h
NCO1CLK_N1PWS0_POSITION                  equ 0005h
NCO1CLK_N1PWS0_SIZE                      equ 0001h
NCO1CLK_N1PWS0_LENGTH                    equ 0001h
NCO1CLK_N1PWS0_MASK                      equ 0020h
NCO1CLK_N1PWS1_POSN                      equ 0006h
NCO1CLK_N1PWS1_POSITION                  equ 0006h
NCO1CLK_N1PWS1_SIZE                      equ 0001h
NCO1CLK_N1PWS1_LENGTH                    equ 0001h
NCO1CLK_N1PWS1_MASK                      equ 0040h
NCO1CLK_N1PWS2_POSN                      equ 0007h
NCO1CLK_N1PWS2_POSITION                  equ 0007h
NCO1CLK_N1PWS2_SIZE                      equ 0001h
NCO1CLK_N1PWS2_LENGTH                    equ 0001h
NCO1CLK_N1PWS2_MASK                      equ 0080h

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0030h
// bitfield definitions
WDTCON_SWDTEN_POSN                       equ 0000h
WDTCON_SWDTEN_POSITION                   equ 0000h
WDTCON_SWDTEN_SIZE                       equ 0001h
WDTCON_SWDTEN_LENGTH                     equ 0001h
WDTCON_SWDTEN_MASK                       equ 0001h
WDTCON_WDTPS_POSN                        equ 0001h
WDTCON_WDTPS_POSITION                    equ 0001h
WDTCON_WDTPS_SIZE                        equ 0005h
WDTCON_WDTPS_LENGTH                      equ 0005h
WDTCON_WDTPS_MASK                        equ 003Eh
WDTCON_WDTPS0_POSN                       equ 0001h
WDTCON_WDTPS0_POSITION                   equ 0001h
WDTCON_WDTPS0_SIZE                       equ 0001h
WDTCON_WDTPS0_LENGTH                     equ 0001h
WDTCON_WDTPS0_MASK                       equ 0002h
WDTCON_WDTPS1_POSN                       equ 0002h
WDTCON_WDTPS1_POSITION                   equ 0002h
WDTCON_WDTPS1_SIZE                       equ 0001h
WDTCON_WDTPS1_LENGTH                     equ 0001h
WDTCON_WDTPS1_MASK                       equ 0004h
WDTCON_WDTPS2_POSN                       equ 0003h
WDTCON_WDTPS2_POSITION                   equ 0003h
WDTCON_WDTPS2_SIZE                       equ 0001h
WDTCON_WDTPS2_LENGTH                     equ 0001h
WDTCON_WDTPS2_MASK                       equ 0008h
WDTCON_WDTPS3_POSN                       equ 0004h
WDTCON_WDTPS3_POSITION                   equ 0004h
WDTCON_WDTPS3_SIZE                       equ 0001h
WDTCON_WDTPS3_LENGTH                     equ 0001h
WDTCON_WDTPS3_MASK                       equ 0010h
WDTCON_WDTPS4_POSN                       equ 0005h
WDTCON_WDTPS4_POSITION                   equ 0005h
WDTCON_WDTPS4_SIZE                       equ 0001h
WDTCON_WDTPS4_LENGTH                     equ 0001h
WDTCON_WDTPS4_MASK                       equ 0020h

// Register: CLC1CON
#define CLC1CON CLC1CON
CLC1CON                                  equ 0031h
// bitfield definitions
CLC1CON_LC1MODE0_POSN                    equ 0000h
CLC1CON_LC1MODE0_POSITION                equ 0000h
CLC1CON_LC1MODE0_SIZE                    equ 0001h
CLC1CON_LC1MODE0_LENGTH                  equ 0001h
CLC1CON_LC1MODE0_MASK                    equ 0001h
CLC1CON_LC1MODE1_POSN                    equ 0001h
CLC1CON_LC1MODE1_POSITION                equ 0001h
CLC1CON_LC1MODE1_SIZE                    equ 0001h
CLC1CON_LC1MODE1_LENGTH                  equ 0001h
CLC1CON_LC1MODE1_MASK                    equ 0002h
CLC1CON_LC1MODE2_POSN                    equ 0002h
CLC1CON_LC1MODE2_POSITION                equ 0002h
CLC1CON_LC1MODE2_SIZE                    equ 0001h
CLC1CON_LC1MODE2_LENGTH                  equ 0001h
CLC1CON_LC1MODE2_MASK                    equ 0004h
CLC1CON_LC1INTN_POSN                     equ 0003h
CLC1CON_LC1INTN_POSITION                 equ 0003h
CLC1CON_LC1INTN_SIZE                     equ 0001h
CLC1CON_LC1INTN_LENGTH                   equ 0001h
CLC1CON_LC1INTN_MASK                     equ 0008h
CLC1CON_LC1INTP_POSN                     equ 0004h
CLC1CON_LC1INTP_POSITION                 equ 0004h
CLC1CON_LC1INTP_SIZE                     equ 0001h
CLC1CON_LC1INTP_LENGTH                   equ 0001h
CLC1CON_LC1INTP_MASK                     equ 0010h
CLC1CON_LC1OUT_POSN                      equ 0005h
CLC1CON_LC1OUT_POSITION                  equ 0005h
CLC1CON_LC1OUT_SIZE                      equ 0001h
CLC1CON_LC1OUT_LENGTH                    equ 0001h
CLC1CON_LC1OUT_MASK                      equ 0020h
CLC1CON_LC1OE_POSN                       equ 0006h
CLC1CON_LC1OE_POSITION                   equ 0006h
CLC1CON_LC1OE_SIZE                       equ 0001h
CLC1CON_LC1OE_LENGTH                     equ 0001h
CLC1CON_LC1OE_MASK                       equ 0040h
CLC1CON_LC1EN_POSN                       equ 0007h
CLC1CON_LC1EN_POSITION                   equ 0007h
CLC1CON_LC1EN_SIZE                       equ 0001h
CLC1CON_LC1EN_LENGTH                     equ 0001h
CLC1CON_LC1EN_MASK                       equ 0080h
CLC1CON_LCMODE0_POSN                     equ 0000h
CLC1CON_LCMODE0_POSITION                 equ 0000h
CLC1CON_LCMODE0_SIZE                     equ 0001h
CLC1CON_LCMODE0_LENGTH                   equ 0001h
CLC1CON_LCMODE0_MASK                     equ 0001h
CLC1CON_LCMODE1_POSN                     equ 0001h
CLC1CON_LCMODE1_POSITION                 equ 0001h
CLC1CON_LCMODE1_SIZE                     equ 0001h
CLC1CON_LCMODE1_LENGTH                   equ 0001h
CLC1CON_LCMODE1_MASK                     equ 0002h
CLC1CON_LCMODE2_POSN                     equ 0002h
CLC1CON_LCMODE2_POSITION                 equ 0002h
CLC1CON_LCMODE2_SIZE                     equ 0001h
CLC1CON_LCMODE2_LENGTH                   equ 0001h
CLC1CON_LCMODE2_MASK                     equ 0004h
CLC1CON_LCINTN_POSN                      equ 0003h
CLC1CON_LCINTN_POSITION                  equ 0003h
CLC1CON_LCINTN_SIZE                      equ 0001h
CLC1CON_LCINTN_LENGTH                    equ 0001h
CLC1CON_LCINTN_MASK                      equ 0008h
CLC1CON_LCINTP_POSN                      equ 0004h
CLC1CON_LCINTP_POSITION                  equ 0004h
CLC1CON_LCINTP_SIZE                      equ 0001h
CLC1CON_LCINTP_LENGTH                    equ 0001h
CLC1CON_LCINTP_MASK                      equ 0010h
CLC1CON_LCOUT_POSN                       equ 0005h
CLC1CON_LCOUT_POSITION                   equ 0005h
CLC1CON_LCOUT_SIZE                       equ 0001h
CLC1CON_LCOUT_LENGTH                     equ 0001h
CLC1CON_LCOUT_MASK                       equ 0020h
CLC1CON_LCOE_POSN                        equ 0006h
CLC1CON_LCOE_POSITION                    equ 0006h
CLC1CON_LCOE_SIZE                        equ 0001h
CLC1CON_LCOE_LENGTH                      equ 0001h
CLC1CON_LCOE_MASK                        equ 0040h
CLC1CON_LCEN_POSN                        equ 0007h
CLC1CON_LCEN_POSITION                    equ 0007h
CLC1CON_LCEN_SIZE                        equ 0001h
CLC1CON_LCEN_LENGTH                      equ 0001h
CLC1CON_LCEN_MASK                        equ 0080h
CLC1CON_LC1MODE_POSN                     equ 0000h
CLC1CON_LC1MODE_POSITION                 equ 0000h
CLC1CON_LC1MODE_SIZE                     equ 0003h
CLC1CON_LC1MODE_LENGTH                   equ 0003h
CLC1CON_LC1MODE_MASK                     equ 0007h

// Register: CLC1SEL0
#define CLC1SEL0 CLC1SEL0
CLC1SEL0                                 equ 0032h
// bitfield definitions
CLC1SEL0_LC1D1S0_POSN                    equ 0000h
CLC1SEL0_LC1D1S0_POSITION                equ 0000h
CLC1SEL0_LC1D1S0_SIZE                    equ 0001h
CLC1SEL0_LC1D1S0_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S0_MASK                    equ 0001h
CLC1SEL0_LC1D1S1_POSN                    equ 0001h
CLC1SEL0_LC1D1S1_POSITION                equ 0001h
CLC1SEL0_LC1D1S1_SIZE                    equ 0001h
CLC1SEL0_LC1D1S1_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S1_MASK                    equ 0002h
CLC1SEL0_LC1D1S2_POSN                    equ 0002h
CLC1SEL0_LC1D1S2_POSITION                equ 0002h
CLC1SEL0_LC1D1S2_SIZE                    equ 0001h
CLC1SEL0_LC1D1S2_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S2_MASK                    equ 0004h
CLC1SEL0_LC1D2S0_POSN                    equ 0004h
CLC1SEL0_LC1D2S0_POSITION                equ 0004h
CLC1SEL0_LC1D2S0_SIZE                    equ 0001h
CLC1SEL0_LC1D2S0_LENGTH                  equ 0001h
CLC1SEL0_LC1D2S0_MASK                    equ 0010h
CLC1SEL0_LC1D2S1_POSN                    equ 0005h
CLC1SEL0_LC1D2S1_POSITION                equ 0005h
CLC1SEL0_LC1D2S1_SIZE                    equ 0001h
CLC1SEL0_LC1D2S1_LENGTH                  equ 0001h
CLC1SEL0_LC1D2S1_MASK                    equ 0020h
CLC1SEL0_LC1D2S2_POSN                    equ 0006h
CLC1SEL0_LC1D2S2_POSITION                equ 0006h
CLC1SEL0_LC1D2S2_SIZE                    equ 0001h
CLC1SEL0_LC1D2S2_LENGTH                  equ 0001h
CLC1SEL0_LC1D2S2_MASK                    equ 0040h
CLC1SEL0_D1S0_POSN                       equ 0000h
CLC1SEL0_D1S0_POSITION                   equ 0000h
CLC1SEL0_D1S0_SIZE                       equ 0001h
CLC1SEL0_D1S0_LENGTH                     equ 0001h
CLC1SEL0_D1S0_MASK                       equ 0001h
CLC1SEL0_D1S1_POSN                       equ 0001h
CLC1SEL0_D1S1_POSITION                   equ 0001h
CLC1SEL0_D1S1_SIZE                       equ 0001h
CLC1SEL0_D1S1_LENGTH                     equ 0001h
CLC1SEL0_D1S1_MASK                       equ 0002h
CLC1SEL0_D1S2_POSN                       equ 0002h
CLC1SEL0_D1S2_POSITION                   equ 0002h
CLC1SEL0_D1S2_SIZE                       equ 0001h
CLC1SEL0_D1S2_LENGTH                     equ 0001h
CLC1SEL0_D1S2_MASK                       equ 0004h
CLC1SEL0_D2S0_POSN                       equ 0004h
CLC1SEL0_D2S0_POSITION                   equ 0004h
CLC1SEL0_D2S0_SIZE                       equ 0001h
CLC1SEL0_D2S0_LENGTH                     equ 0001h
CLC1SEL0_D2S0_MASK                       equ 0010h
CLC1SEL0_D2S1_POSN                       equ 0005h
CLC1SEL0_D2S1_POSITION                   equ 0005h
CLC1SEL0_D2S1_SIZE                       equ 0001h
CLC1SEL0_D2S1_LENGTH                     equ 0001h
CLC1SEL0_D2S1_MASK                       equ 0020h
CLC1SEL0_D2S2_POSN                       equ 0006h
CLC1SEL0_D2S2_POSITION                   equ 0006h
CLC1SEL0_D2S2_SIZE                       equ 0001h
CLC1SEL0_D2S2_LENGTH                     equ 0001h
CLC1SEL0_D2S2_MASK                       equ 0040h
CLC1SEL0_LC1D1S_POSN                     equ 0000h
CLC1SEL0_LC1D1S_POSITION                 equ 0000h
CLC1SEL0_LC1D1S_SIZE                     equ 0003h
CLC1SEL0_LC1D1S_LENGTH                   equ 0003h
CLC1SEL0_LC1D1S_MASK                     equ 0007h
CLC1SEL0_LC1D2S_POSN                     equ 0004h
CLC1SEL0_LC1D2S_POSITION                 equ 0004h
CLC1SEL0_LC1D2S_SIZE                     equ 0003h
CLC1SEL0_LC1D2S_LENGTH                   equ 0003h
CLC1SEL0_LC1D2S_MASK                     equ 0070h

// Register: CLC1SEL1
#define CLC1SEL1 CLC1SEL1
CLC1SEL1                                 equ 0033h
// bitfield definitions
CLC1SEL1_LC1D3S0_POSN                    equ 0000h
CLC1SEL1_LC1D3S0_POSITION                equ 0000h
CLC1SEL1_LC1D3S0_SIZE                    equ 0001h
CLC1SEL1_LC1D3S0_LENGTH                  equ 0001h
CLC1SEL1_LC1D3S0_MASK                    equ 0001h
CLC1SEL1_LC1D3S1_POSN                    equ 0001h
CLC1SEL1_LC1D3S1_POSITION                equ 0001h
CLC1SEL1_LC1D3S1_SIZE                    equ 0001h
CLC1SEL1_LC1D3S1_LENGTH                  equ 0001h
CLC1SEL1_LC1D3S1_MASK                    equ 0002h
CLC1SEL1_LC1D3S2_POSN                    equ 0002h
CLC1SEL1_LC1D3S2_POSITION                equ 0002h
CLC1SEL1_LC1D3S2_SIZE                    equ 0001h
CLC1SEL1_LC1D3S2_LENGTH                  equ 0001h
CLC1SEL1_LC1D3S2_MASK                    equ 0004h
CLC1SEL1_LC1D4S0_POSN                    equ 0004h
CLC1SEL1_LC1D4S0_POSITION                equ 0004h
CLC1SEL1_LC1D4S0_SIZE                    equ 0001h
CLC1SEL1_LC1D4S0_LENGTH                  equ 0001h
CLC1SEL1_LC1D4S0_MASK                    equ 0010h
CLC1SEL1_LC1D4S1_POSN                    equ 0005h
CLC1SEL1_LC1D4S1_POSITION                equ 0005h
CLC1SEL1_LC1D4S1_SIZE                    equ 0001h
CLC1SEL1_LC1D4S1_LENGTH                  equ 0001h
CLC1SEL1_LC1D4S1_MASK                    equ 0020h
CLC1SEL1_LC1D4S2_POSN                    equ 0006h
CLC1SEL1_LC1D4S2_POSITION                equ 0006h
CLC1SEL1_LC1D4S2_SIZE                    equ 0001h
CLC1SEL1_LC1D4S2_LENGTH                  equ 0001h
CLC1SEL1_LC1D4S2_MASK                    equ 0040h
CLC1SEL1_D3S0_POSN                       equ 0000h
CLC1SEL1_D3S0_POSITION                   equ 0000h
CLC1SEL1_D3S0_SIZE                       equ 0001h
CLC1SEL1_D3S0_LENGTH                     equ 0001h
CLC1SEL1_D3S0_MASK                       equ 0001h
CLC1SEL1_D3S1_POSN                       equ 0001h
CLC1SEL1_D3S1_POSITION                   equ 0001h
CLC1SEL1_D3S1_SIZE                       equ 0001h
CLC1SEL1_D3S1_LENGTH                     equ 0001h
CLC1SEL1_D3S1_MASK                       equ 0002h
CLC1SEL1_D3S2_POSN                       equ 0002h
CLC1SEL1_D3S2_POSITION                   equ 0002h
CLC1SEL1_D3S2_SIZE                       equ 0001h
CLC1SEL1_D3S2_LENGTH                     equ 0001h
CLC1SEL1_D3S2_MASK                       equ 0004h
CLC1SEL1_D4S0_POSN                       equ 0004h
CLC1SEL1_D4S0_POSITION                   equ 0004h
CLC1SEL1_D4S0_SIZE                       equ 0001h
CLC1SEL1_D4S0_LENGTH                     equ 0001h
CLC1SEL1_D4S0_MASK                       equ 0010h
CLC1SEL1_D4S1_POSN                       equ 0005h
CLC1SEL1_D4S1_POSITION                   equ 0005h
CLC1SEL1_D4S1_SIZE                       equ 0001h
CLC1SEL1_D4S1_LENGTH                     equ 0001h
CLC1SEL1_D4S1_MASK                       equ 0020h
CLC1SEL1_D4S2_POSN                       equ 0006h
CLC1SEL1_D4S2_POSITION                   equ 0006h
CLC1SEL1_D4S2_SIZE                       equ 0001h
CLC1SEL1_D4S2_LENGTH                     equ 0001h
CLC1SEL1_D4S2_MASK                       equ 0040h
CLC1SEL1_LC1D3S_POSN                     equ 0000h
CLC1SEL1_LC1D3S_POSITION                 equ 0000h
CLC1SEL1_LC1D3S_SIZE                     equ 0003h
CLC1SEL1_LC1D3S_LENGTH                   equ 0003h
CLC1SEL1_LC1D3S_MASK                     equ 0007h
CLC1SEL1_LC1D4S_POSN                     equ 0004h
CLC1SEL1_LC1D4S_POSITION                 equ 0004h
CLC1SEL1_LC1D4S_SIZE                     equ 0003h
CLC1SEL1_LC1D4S_LENGTH                   equ 0003h
CLC1SEL1_LC1D4S_MASK                     equ 0070h

// Register: CLC1POL
#define CLC1POL CLC1POL
CLC1POL                                  equ 0034h
// bitfield definitions
CLC1POL_LC1G1POL_POSN                    equ 0000h
CLC1POL_LC1G1POL_POSITION                equ 0000h
CLC1POL_LC1G1POL_SIZE                    equ 0001h
CLC1POL_LC1G1POL_LENGTH                  equ 0001h
CLC1POL_LC1G1POL_MASK                    equ 0001h
CLC1POL_LC1G2POL_POSN                    equ 0001h
CLC1POL_LC1G2POL_POSITION                equ 0001h
CLC1POL_LC1G2POL_SIZE                    equ 0001h
CLC1POL_LC1G2POL_LENGTH                  equ 0001h
CLC1POL_LC1G2POL_MASK                    equ 0002h
CLC1POL_LC1G3POL_POSN                    equ 0002h
CLC1POL_LC1G3POL_POSITION                equ 0002h
CLC1POL_LC1G3POL_SIZE                    equ 0001h
CLC1POL_LC1G3POL_LENGTH                  equ 0001h
CLC1POL_LC1G3POL_MASK                    equ 0004h
CLC1POL_LC1G4POL_POSN                    equ 0003h
CLC1POL_LC1G4POL_POSITION                equ 0003h
CLC1POL_LC1G4POL_SIZE                    equ 0001h
CLC1POL_LC1G4POL_LENGTH                  equ 0001h
CLC1POL_LC1G4POL_MASK                    equ 0008h
CLC1POL_LC1POL_POSN                      equ 0007h
CLC1POL_LC1POL_POSITION                  equ 0007h
CLC1POL_LC1POL_SIZE                      equ 0001h
CLC1POL_LC1POL_LENGTH                    equ 0001h
CLC1POL_LC1POL_MASK                      equ 0080h
CLC1POL_G1POL_POSN                       equ 0000h
CLC1POL_G1POL_POSITION                   equ 0000h
CLC1POL_G1POL_SIZE                       equ 0001h
CLC1POL_G1POL_LENGTH                     equ 0001h
CLC1POL_G1POL_MASK                       equ 0001h
CLC1POL_G2POL_POSN                       equ 0001h
CLC1POL_G2POL_POSITION                   equ 0001h
CLC1POL_G2POL_SIZE                       equ 0001h
CLC1POL_G2POL_LENGTH                     equ 0001h
CLC1POL_G2POL_MASK                       equ 0002h
CLC1POL_G3POL_POSN                       equ 0002h
CLC1POL_G3POL_POSITION                   equ 0002h
CLC1POL_G3POL_SIZE                       equ 0001h
CLC1POL_G3POL_LENGTH                     equ 0001h
CLC1POL_G3POL_MASK                       equ 0004h
CLC1POL_G4POL_POSN                       equ 0003h
CLC1POL_G4POL_POSITION                   equ 0003h
CLC1POL_G4POL_SIZE                       equ 0001h
CLC1POL_G4POL_LENGTH                     equ 0001h
CLC1POL_G4POL_MASK                       equ 0008h
CLC1POL_POL_POSN                         equ 0007h
CLC1POL_POL_POSITION                     equ 0007h
CLC1POL_POL_SIZE                         equ 0001h
CLC1POL_POL_LENGTH                       equ 0001h
CLC1POL_POL_MASK                         equ 0080h

// Register: CLC1GLS0
#define CLC1GLS0 CLC1GLS0
CLC1GLS0                                 equ 0035h
// bitfield definitions
CLC1GLS0_LC1G1D1N_POSN                   equ 0000h
CLC1GLS0_LC1G1D1N_POSITION               equ 0000h
CLC1GLS0_LC1G1D1N_SIZE                   equ 0001h
CLC1GLS0_LC1G1D1N_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D1N_MASK                   equ 0001h
CLC1GLS0_LC1G1D1T_POSN                   equ 0001h
CLC1GLS0_LC1G1D1T_POSITION               equ 0001h
CLC1GLS0_LC1G1D1T_SIZE                   equ 0001h
CLC1GLS0_LC1G1D1T_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D1T_MASK                   equ 0002h
CLC1GLS0_LC1G1D2N_POSN                   equ 0002h
CLC1GLS0_LC1G1D2N_POSITION               equ 0002h
CLC1GLS0_LC1G1D2N_SIZE                   equ 0001h
CLC1GLS0_LC1G1D2N_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D2N_MASK                   equ 0004h
CLC1GLS0_LC1G1D2T_POSN                   equ 0003h
CLC1GLS0_LC1G1D2T_POSITION               equ 0003h
CLC1GLS0_LC1G1D2T_SIZE                   equ 0001h
CLC1GLS0_LC1G1D2T_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D2T_MASK                   equ 0008h
CLC1GLS0_LC1G1D3N_POSN                   equ 0004h
CLC1GLS0_LC1G1D3N_POSITION               equ 0004h
CLC1GLS0_LC1G1D3N_SIZE                   equ 0001h
CLC1GLS0_LC1G1D3N_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D3N_MASK                   equ 0010h
CLC1GLS0_LC1G1D3T_POSN                   equ 0005h
CLC1GLS0_LC1G1D3T_POSITION               equ 0005h
CLC1GLS0_LC1G1D3T_SIZE                   equ 0001h
CLC1GLS0_LC1G1D3T_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D3T_MASK                   equ 0020h
CLC1GLS0_LC1G1D4N_POSN                   equ 0006h
CLC1GLS0_LC1G1D4N_POSITION               equ 0006h
CLC1GLS0_LC1G1D4N_SIZE                   equ 0001h
CLC1GLS0_LC1G1D4N_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D4N_MASK                   equ 0040h
CLC1GLS0_LC1G1D4T_POSN                   equ 0007h
CLC1GLS0_LC1G1D4T_POSITION               equ 0007h
CLC1GLS0_LC1G1D4T_SIZE                   equ 0001h
CLC1GLS0_LC1G1D4T_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D4T_MASK                   equ 0080h
CLC1GLS0_D1N_POSN                        equ 0000h
CLC1GLS0_D1N_POSITION                    equ 0000h
CLC1GLS0_D1N_SIZE                        equ 0001h
CLC1GLS0_D1N_LENGTH                      equ 0001h
CLC1GLS0_D1N_MASK                        equ 0001h
CLC1GLS0_D1T_POSN                        equ 0001h
CLC1GLS0_D1T_POSITION                    equ 0001h
CLC1GLS0_D1T_SIZE                        equ 0001h
CLC1GLS0_D1T_LENGTH                      equ 0001h
CLC1GLS0_D1T_MASK                        equ 0002h
CLC1GLS0_D2N_POSN                        equ 0002h
CLC1GLS0_D2N_POSITION                    equ 0002h
CLC1GLS0_D2N_SIZE                        equ 0001h
CLC1GLS0_D2N_LENGTH                      equ 0001h
CLC1GLS0_D2N_MASK                        equ 0004h
CLC1GLS0_D2T_POSN                        equ 0003h
CLC1GLS0_D2T_POSITION                    equ 0003h
CLC1GLS0_D2T_SIZE                        equ 0001h
CLC1GLS0_D2T_LENGTH                      equ 0001h
CLC1GLS0_D2T_MASK                        equ 0008h
CLC1GLS0_D3N_POSN                        equ 0004h
CLC1GLS0_D3N_POSITION                    equ 0004h
CLC1GLS0_D3N_SIZE                        equ 0001h
CLC1GLS0_D3N_LENGTH                      equ 0001h
CLC1GLS0_D3N_MASK                        equ 0010h
CLC1GLS0_D3T_POSN                        equ 0005h
CLC1GLS0_D3T_POSITION                    equ 0005h
CLC1GLS0_D3T_SIZE                        equ 0001h
CLC1GLS0_D3T_LENGTH                      equ 0001h
CLC1GLS0_D3T_MASK                        equ 0020h
CLC1GLS0_D4N_POSN                        equ 0006h
CLC1GLS0_D4N_POSITION                    equ 0006h
CLC1GLS0_D4N_SIZE                        equ 0001h
CLC1GLS0_D4N_LENGTH                      equ 0001h
CLC1GLS0_D4N_MASK                        equ 0040h
CLC1GLS0_D4T_POSN                        equ 0007h
CLC1GLS0_D4T_POSITION                    equ 0007h
CLC1GLS0_D4T_SIZE                        equ 0001h
CLC1GLS0_D4T_LENGTH                      equ 0001h
CLC1GLS0_D4T_MASK                        equ 0080h

// Register: CLC1GLS1
#define CLC1GLS1 CLC1GLS1
CLC1GLS1                                 equ 0036h
// bitfield definitions
CLC1GLS1_LC1G2D1N_POSN                   equ 0000h
CLC1GLS1_LC1G2D1N_POSITION               equ 0000h
CLC1GLS1_LC1G2D1N_SIZE                   equ 0001h
CLC1GLS1_LC1G2D1N_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D1N_MASK                   equ 0001h
CLC1GLS1_LC1G2D1T_POSN                   equ 0001h
CLC1GLS1_LC1G2D1T_POSITION               equ 0001h
CLC1GLS1_LC1G2D1T_SIZE                   equ 0001h
CLC1GLS1_LC1G2D1T_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D1T_MASK                   equ 0002h
CLC1GLS1_LC1G2D2N_POSN                   equ 0002h
CLC1GLS1_LC1G2D2N_POSITION               equ 0002h
CLC1GLS1_LC1G2D2N_SIZE                   equ 0001h
CLC1GLS1_LC1G2D2N_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D2N_MASK                   equ 0004h
CLC1GLS1_LC1G2D2T_POSN                   equ 0003h
CLC1GLS1_LC1G2D2T_POSITION               equ 0003h
CLC1GLS1_LC1G2D2T_SIZE                   equ 0001h
CLC1GLS1_LC1G2D2T_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D2T_MASK                   equ 0008h
CLC1GLS1_LC1G2D3N_POSN                   equ 0004h
CLC1GLS1_LC1G2D3N_POSITION               equ 0004h
CLC1GLS1_LC1G2D3N_SIZE                   equ 0001h
CLC1GLS1_LC1G2D3N_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D3N_MASK                   equ 0010h
CLC1GLS1_LC1G2D3T_POSN                   equ 0005h
CLC1GLS1_LC1G2D3T_POSITION               equ 0005h
CLC1GLS1_LC1G2D3T_SIZE                   equ 0001h
CLC1GLS1_LC1G2D3T_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D3T_MASK                   equ 0020h
CLC1GLS1_LC1G2D4N_POSN                   equ 0006h
CLC1GLS1_LC1G2D4N_POSITION               equ 0006h
CLC1GLS1_LC1G2D4N_SIZE                   equ 0001h
CLC1GLS1_LC1G2D4N_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D4N_MASK                   equ 0040h
CLC1GLS1_LC1G2D4T_POSN                   equ 0007h
CLC1GLS1_LC1G2D4T_POSITION               equ 0007h
CLC1GLS1_LC1G2D4T_SIZE                   equ 0001h
CLC1GLS1_LC1G2D4T_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D4T_MASK                   equ 0080h
CLC1GLS1_D1N_POSN                        equ 0000h
CLC1GLS1_D1N_POSITION                    equ 0000h
CLC1GLS1_D1N_SIZE                        equ 0001h
CLC1GLS1_D1N_LENGTH                      equ 0001h
CLC1GLS1_D1N_MASK                        equ 0001h
CLC1GLS1_D1T_POSN                        equ 0001h
CLC1GLS1_D1T_POSITION                    equ 0001h
CLC1GLS1_D1T_SIZE                        equ 0001h
CLC1GLS1_D1T_LENGTH                      equ 0001h
CLC1GLS1_D1T_MASK                        equ 0002h
CLC1GLS1_D2N_POSN                        equ 0002h
CLC1GLS1_D2N_POSITION                    equ 0002h
CLC1GLS1_D2N_SIZE                        equ 0001h
CLC1GLS1_D2N_LENGTH                      equ 0001h
CLC1GLS1_D2N_MASK                        equ 0004h
CLC1GLS1_D2T_POSN                        equ 0003h
CLC1GLS1_D2T_POSITION                    equ 0003h
CLC1GLS1_D2T_SIZE                        equ 0001h
CLC1GLS1_D2T_LENGTH                      equ 0001h
CLC1GLS1_D2T_MASK                        equ 0008h
CLC1GLS1_D3N_POSN                        equ 0004h
CLC1GLS1_D3N_POSITION                    equ 0004h
CLC1GLS1_D3N_SIZE                        equ 0001h
CLC1GLS1_D3N_LENGTH                      equ 0001h
CLC1GLS1_D3N_MASK                        equ 0010h
CLC1GLS1_D3T_POSN                        equ 0005h
CLC1GLS1_D3T_POSITION                    equ 0005h
CLC1GLS1_D3T_SIZE                        equ 0001h
CLC1GLS1_D3T_LENGTH                      equ 0001h
CLC1GLS1_D3T_MASK                        equ 0020h
CLC1GLS1_D4N_POSN                        equ 0006h
CLC1GLS1_D4N_POSITION                    equ 0006h
CLC1GLS1_D4N_SIZE                        equ 0001h
CLC1GLS1_D4N_LENGTH                      equ 0001h
CLC1GLS1_D4N_MASK                        equ 0040h
CLC1GLS1_D4T_POSN                        equ 0007h
CLC1GLS1_D4T_POSITION                    equ 0007h
CLC1GLS1_D4T_SIZE                        equ 0001h
CLC1GLS1_D4T_LENGTH                      equ 0001h
CLC1GLS1_D4T_MASK                        equ 0080h

// Register: CLC1GLS2
#define CLC1GLS2 CLC1GLS2
CLC1GLS2                                 equ 0037h
// bitfield definitions
CLC1GLS2_LC1G3D1N_POSN                   equ 0000h
CLC1GLS2_LC1G3D1N_POSITION               equ 0000h
CLC1GLS2_LC1G3D1N_SIZE                   equ 0001h
CLC1GLS2_LC1G3D1N_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D1N_MASK                   equ 0001h
CLC1GLS2_LC1G3D1T_POSN                   equ 0001h
CLC1GLS2_LC1G3D1T_POSITION               equ 0001h
CLC1GLS2_LC1G3D1T_SIZE                   equ 0001h
CLC1GLS2_LC1G3D1T_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D1T_MASK                   equ 0002h
CLC1GLS2_LC1G3D2N_POSN                   equ 0002h
CLC1GLS2_LC1G3D2N_POSITION               equ 0002h
CLC1GLS2_LC1G3D2N_SIZE                   equ 0001h
CLC1GLS2_LC1G3D2N_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D2N_MASK                   equ 0004h
CLC1GLS2_LC1G3D2T_POSN                   equ 0003h
CLC1GLS2_LC1G3D2T_POSITION               equ 0003h
CLC1GLS2_LC1G3D2T_SIZE                   equ 0001h
CLC1GLS2_LC1G3D2T_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D2T_MASK                   equ 0008h
CLC1GLS2_LC1G3D3N_POSN                   equ 0004h
CLC1GLS2_LC1G3D3N_POSITION               equ 0004h
CLC1GLS2_LC1G3D3N_SIZE                   equ 0001h
CLC1GLS2_LC1G3D3N_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D3N_MASK                   equ 0010h
CLC1GLS2_LC1G3D3T_POSN                   equ 0005h
CLC1GLS2_LC1G3D3T_POSITION               equ 0005h
CLC1GLS2_LC1G3D3T_SIZE                   equ 0001h
CLC1GLS2_LC1G3D3T_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D3T_MASK                   equ 0020h
CLC1GLS2_LC1G3D4N_POSN                   equ 0006h
CLC1GLS2_LC1G3D4N_POSITION               equ 0006h
CLC1GLS2_LC1G3D4N_SIZE                   equ 0001h
CLC1GLS2_LC1G3D4N_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D4N_MASK                   equ 0040h
CLC1GLS2_LC1G3D4T_POSN                   equ 0007h
CLC1GLS2_LC1G3D4T_POSITION               equ 0007h
CLC1GLS2_LC1G3D4T_SIZE                   equ 0001h
CLC1GLS2_LC1G3D4T_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D4T_MASK                   equ 0080h
CLC1GLS2_D1N_POSN                        equ 0000h
CLC1GLS2_D1N_POSITION                    equ 0000h
CLC1GLS2_D1N_SIZE                        equ 0001h
CLC1GLS2_D1N_LENGTH                      equ 0001h
CLC1GLS2_D1N_MASK                        equ 0001h
CLC1GLS2_D1T_POSN                        equ 0001h
CLC1GLS2_D1T_POSITION                    equ 0001h
CLC1GLS2_D1T_SIZE                        equ 0001h
CLC1GLS2_D1T_LENGTH                      equ 0001h
CLC1GLS2_D1T_MASK                        equ 0002h
CLC1GLS2_D2N_POSN                        equ 0002h
CLC1GLS2_D2N_POSITION                    equ 0002h
CLC1GLS2_D2N_SIZE                        equ 0001h
CLC1GLS2_D2N_LENGTH                      equ 0001h
CLC1GLS2_D2N_MASK                        equ 0004h
CLC1GLS2_D2T_POSN                        equ 0003h
CLC1GLS2_D2T_POSITION                    equ 0003h
CLC1GLS2_D2T_SIZE                        equ 0001h
CLC1GLS2_D2T_LENGTH                      equ 0001h
CLC1GLS2_D2T_MASK                        equ 0008h
CLC1GLS2_D3N_POSN                        equ 0004h
CLC1GLS2_D3N_POSITION                    equ 0004h
CLC1GLS2_D3N_SIZE                        equ 0001h
CLC1GLS2_D3N_LENGTH                      equ 0001h
CLC1GLS2_D3N_MASK                        equ 0010h
CLC1GLS2_D3T_POSN                        equ 0005h
CLC1GLS2_D3T_POSITION                    equ 0005h
CLC1GLS2_D3T_SIZE                        equ 0001h
CLC1GLS2_D3T_LENGTH                      equ 0001h
CLC1GLS2_D3T_MASK                        equ 0020h
CLC1GLS2_D4N_POSN                        equ 0006h
CLC1GLS2_D4N_POSITION                    equ 0006h
CLC1GLS2_D4N_SIZE                        equ 0001h
CLC1GLS2_D4N_LENGTH                      equ 0001h
CLC1GLS2_D4N_MASK                        equ 0040h
CLC1GLS2_D4T_POSN                        equ 0007h
CLC1GLS2_D4T_POSITION                    equ 0007h
CLC1GLS2_D4T_SIZE                        equ 0001h
CLC1GLS2_D4T_LENGTH                      equ 0001h
CLC1GLS2_D4T_MASK                        equ 0080h

// Register: CLC1GLS3
#define CLC1GLS3 CLC1GLS3
CLC1GLS3                                 equ 0038h
// bitfield definitions
CLC1GLS3_LC1G4D1N_POSN                   equ 0000h
CLC1GLS3_LC1G4D1N_POSITION               equ 0000h
CLC1GLS3_LC1G4D1N_SIZE                   equ 0001h
CLC1GLS3_LC1G4D1N_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D1N_MASK                   equ 0001h
CLC1GLS3_LC1G4D1T_POSN                   equ 0001h
CLC1GLS3_LC1G4D1T_POSITION               equ 0001h
CLC1GLS3_LC1G4D1T_SIZE                   equ 0001h
CLC1GLS3_LC1G4D1T_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D1T_MASK                   equ 0002h
CLC1GLS3_LC1G4D2N_POSN                   equ 0002h
CLC1GLS3_LC1G4D2N_POSITION               equ 0002h
CLC1GLS3_LC1G4D2N_SIZE                   equ 0001h
CLC1GLS3_LC1G4D2N_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D2N_MASK                   equ 0004h
CLC1GLS3_LC1G4D2T_POSN                   equ 0003h
CLC1GLS3_LC1G4D2T_POSITION               equ 0003h
CLC1GLS3_LC1G4D2T_SIZE                   equ 0001h
CLC1GLS3_LC1G4D2T_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D2T_MASK                   equ 0008h
CLC1GLS3_LC1G4D3N_POSN                   equ 0004h
CLC1GLS3_LC1G4D3N_POSITION               equ 0004h
CLC1GLS3_LC1G4D3N_SIZE                   equ 0001h
CLC1GLS3_LC1G4D3N_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D3N_MASK                   equ 0010h
CLC1GLS3_LC1G4D3T_POSN                   equ 0005h
CLC1GLS3_LC1G4D3T_POSITION               equ 0005h
CLC1GLS3_LC1G4D3T_SIZE                   equ 0001h
CLC1GLS3_LC1G4D3T_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D3T_MASK                   equ 0020h
CLC1GLS3_LC1G4D4N_POSN                   equ 0006h
CLC1GLS3_LC1G4D4N_POSITION               equ 0006h
CLC1GLS3_LC1G4D4N_SIZE                   equ 0001h
CLC1GLS3_LC1G4D4N_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D4N_MASK                   equ 0040h
CLC1GLS3_LC1G4D4T_POSN                   equ 0007h
CLC1GLS3_LC1G4D4T_POSITION               equ 0007h
CLC1GLS3_LC1G4D4T_SIZE                   equ 0001h
CLC1GLS3_LC1G4D4T_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D4T_MASK                   equ 0080h
CLC1GLS3_G4D1N_POSN                      equ 0000h
CLC1GLS3_G4D1N_POSITION                  equ 0000h
CLC1GLS3_G4D1N_SIZE                      equ 0001h
CLC1GLS3_G4D1N_LENGTH                    equ 0001h
CLC1GLS3_G4D1N_MASK                      equ 0001h
CLC1GLS3_G4D1T_POSN                      equ 0001h
CLC1GLS3_G4D1T_POSITION                  equ 0001h
CLC1GLS3_G4D1T_SIZE                      equ 0001h
CLC1GLS3_G4D1T_LENGTH                    equ 0001h
CLC1GLS3_G4D1T_MASK                      equ 0002h
CLC1GLS3_G4D2N_POSN                      equ 0002h
CLC1GLS3_G4D2N_POSITION                  equ 0002h
CLC1GLS3_G4D2N_SIZE                      equ 0001h
CLC1GLS3_G4D2N_LENGTH                    equ 0001h
CLC1GLS3_G4D2N_MASK                      equ 0004h
CLC1GLS3_G4D2T_POSN                      equ 0003h
CLC1GLS3_G4D2T_POSITION                  equ 0003h
CLC1GLS3_G4D2T_SIZE                      equ 0001h
CLC1GLS3_G4D2T_LENGTH                    equ 0001h
CLC1GLS3_G4D2T_MASK                      equ 0008h
CLC1GLS3_G4D3N_POSN                      equ 0004h
CLC1GLS3_G4D3N_POSITION                  equ 0004h
CLC1GLS3_G4D3N_SIZE                      equ 0001h
CLC1GLS3_G4D3N_LENGTH                    equ 0001h
CLC1GLS3_G4D3N_MASK                      equ 0010h
CLC1GLS3_G4D3T_POSN                      equ 0005h
CLC1GLS3_G4D3T_POSITION                  equ 0005h
CLC1GLS3_G4D3T_SIZE                      equ 0001h
CLC1GLS3_G4D3T_LENGTH                    equ 0001h
CLC1GLS3_G4D3T_MASK                      equ 0020h
CLC1GLS3_G4D4N_POSN                      equ 0006h
CLC1GLS3_G4D4N_POSITION                  equ 0006h
CLC1GLS3_G4D4N_SIZE                      equ 0001h
CLC1GLS3_G4D4N_LENGTH                    equ 0001h
CLC1GLS3_G4D4N_MASK                      equ 0040h
CLC1GLS3_G4D4T_POSN                      equ 0007h
CLC1GLS3_G4D4T_POSITION                  equ 0007h
CLC1GLS3_G4D4T_SIZE                      equ 0001h
CLC1GLS3_G4D4T_LENGTH                    equ 0001h
CLC1GLS3_G4D4T_MASK                      equ 0080h

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
CWG1CON0                                 equ 0039h
// bitfield definitions
CWG1CON0_G1CS0_POSN                      equ 0000h
CWG1CON0_G1CS0_POSITION                  equ 0000h
CWG1CON0_G1CS0_SIZE                      equ 0001h
CWG1CON0_G1CS0_LENGTH                    equ 0001h
CWG1CON0_G1CS0_MASK                      equ 0001h
CWG1CON0_G1POLA_POSN                     equ 0003h
CWG1CON0_G1POLA_POSITION                 equ 0003h
CWG1CON0_G1POLA_SIZE                     equ 0001h
CWG1CON0_G1POLA_LENGTH                   equ 0001h
CWG1CON0_G1POLA_MASK                     equ 0008h
CWG1CON0_G1POLB_POSN                     equ 0004h
CWG1CON0_G1POLB_POSITION                 equ 0004h
CWG1CON0_G1POLB_SIZE                     equ 0001h
CWG1CON0_G1POLB_LENGTH                   equ 0001h
CWG1CON0_G1POLB_MASK                     equ 0010h
CWG1CON0_G1OEA_POSN                      equ 0005h
CWG1CON0_G1OEA_POSITION                  equ 0005h
CWG1CON0_G1OEA_SIZE                      equ 0001h
CWG1CON0_G1OEA_LENGTH                    equ 0001h
CWG1CON0_G1OEA_MASK                      equ 0020h
CWG1CON0_G1OEB_POSN                      equ 0006h
CWG1CON0_G1OEB_POSITION                  equ 0006h
CWG1CON0_G1OEB_SIZE                      equ 0001h
CWG1CON0_G1OEB_LENGTH                    equ 0001h
CWG1CON0_G1OEB_MASK                      equ 0040h
CWG1CON0_G1EN_POSN                       equ 0007h
CWG1CON0_G1EN_POSITION                   equ 0007h
CWG1CON0_G1EN_SIZE                       equ 0001h
CWG1CON0_G1EN_LENGTH                     equ 0001h
CWG1CON0_G1EN_MASK                       equ 0080h
CWG1CON0_G1CS_POSN                       equ 0000h
CWG1CON0_G1CS_POSITION                   equ 0000h
CWG1CON0_G1CS_SIZE                       equ 0002h
CWG1CON0_G1CS_LENGTH                     equ 0002h
CWG1CON0_G1CS_MASK                       equ 0003h

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
CWG1CON1                                 equ 003Ah
// bitfield definitions
CWG1CON1_G1IS0_POSN                      equ 0000h
CWG1CON1_G1IS0_POSITION                  equ 0000h
CWG1CON1_G1IS0_SIZE                      equ 0001h
CWG1CON1_G1IS0_LENGTH                    equ 0001h
CWG1CON1_G1IS0_MASK                      equ 0001h
CWG1CON1_G1IS1_POSN                      equ 0001h
CWG1CON1_G1IS1_POSITION                  equ 0001h
CWG1CON1_G1IS1_SIZE                      equ 0001h
CWG1CON1_G1IS1_LENGTH                    equ 0001h
CWG1CON1_G1IS1_MASK                      equ 0002h
CWG1CON1_G1ASDLA_POSN                    equ 0004h
CWG1CON1_G1ASDLA_POSITION                equ 0004h
CWG1CON1_G1ASDLA_SIZE                    equ 0002h
CWG1CON1_G1ASDLA_LENGTH                  equ 0002h
CWG1CON1_G1ASDLA_MASK                    equ 0030h
CWG1CON1_G1ASDLB_POSN                    equ 0006h
CWG1CON1_G1ASDLB_POSITION                equ 0006h
CWG1CON1_G1ASDLB_SIZE                    equ 0002h
CWG1CON1_G1ASDLB_LENGTH                  equ 0002h
CWG1CON1_G1ASDLB_MASK                    equ 00C0h
CWG1CON1_G1IS_POSN                       equ 0000h
CWG1CON1_G1IS_POSITION                   equ 0000h
CWG1CON1_G1IS_SIZE                       equ 0004h
CWG1CON1_G1IS_LENGTH                     equ 0004h
CWG1CON1_G1IS_MASK                       equ 000Fh
CWG1CON1_G1ASDLA0_POSN                   equ 0004h
CWG1CON1_G1ASDLA0_POSITION               equ 0004h
CWG1CON1_G1ASDLA0_SIZE                   equ 0001h
CWG1CON1_G1ASDLA0_LENGTH                 equ 0001h
CWG1CON1_G1ASDLA0_MASK                   equ 0010h
CWG1CON1_G1ASDLA1_POSN                   equ 0005h
CWG1CON1_G1ASDLA1_POSITION               equ 0005h
CWG1CON1_G1ASDLA1_SIZE                   equ 0001h
CWG1CON1_G1ASDLA1_LENGTH                 equ 0001h
CWG1CON1_G1ASDLA1_MASK                   equ 0020h
CWG1CON1_G1ASDLB0_POSN                   equ 0006h
CWG1CON1_G1ASDLB0_POSITION               equ 0006h
CWG1CON1_G1ASDLB0_SIZE                   equ 0001h
CWG1CON1_G1ASDLB0_LENGTH                 equ 0001h
CWG1CON1_G1ASDLB0_MASK                   equ 0040h
CWG1CON1_G1ASDLB1_POSN                   equ 0007h
CWG1CON1_G1ASDLB1_POSITION               equ 0007h
CWG1CON1_G1ASDLB1_SIZE                   equ 0001h
CWG1CON1_G1ASDLB1_LENGTH                 equ 0001h
CWG1CON1_G1ASDLB1_MASK                   equ 0080h

// Register: CWG1CON2
#define CWG1CON2 CWG1CON2
CWG1CON2                                 equ 003Bh
// bitfield definitions
CWG1CON2_G1ASDSFLT_POSN                  equ 0000h
CWG1CON2_G1ASDSFLT_POSITION              equ 0000h
CWG1CON2_G1ASDSFLT_SIZE                  equ 0001h
CWG1CON2_G1ASDSFLT_LENGTH                equ 0001h
CWG1CON2_G1ASDSFLT_MASK                  equ 0001h
CWG1CON2_G1ASDSCLC1_POSN                 equ 0001h
CWG1CON2_G1ASDSCLC1_POSITION             equ 0001h
CWG1CON2_G1ASDSCLC1_SIZE                 equ 0001h
CWG1CON2_G1ASDSCLC1_LENGTH               equ 0001h
CWG1CON2_G1ASDSCLC1_MASK                 equ 0002h
CWG1CON2_G1ARSEN_POSN                    equ 0006h
CWG1CON2_G1ARSEN_POSITION                equ 0006h
CWG1CON2_G1ARSEN_SIZE                    equ 0001h
CWG1CON2_G1ARSEN_LENGTH                  equ 0001h
CWG1CON2_G1ARSEN_MASK                    equ 0040h
CWG1CON2_G1ASE_POSN                      equ 0007h
CWG1CON2_G1ASE_POSITION                  equ 0007h
CWG1CON2_G1ASE_SIZE                      equ 0001h
CWG1CON2_G1ASE_LENGTH                    equ 0001h
CWG1CON2_G1ASE_MASK                      equ 0080h

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
CWG1DBR                                  equ 003Ch
// bitfield definitions
CWG1DBR_CWG1DBR_POSN                     equ 0000h
CWG1DBR_CWG1DBR_POSITION                 equ 0000h
CWG1DBR_CWG1DBR_SIZE                     equ 0006h
CWG1DBR_CWG1DBR_LENGTH                   equ 0006h
CWG1DBR_CWG1DBR_MASK                     equ 003Fh
CWG1DBR_CWG1DBR0_POSN                    equ 0000h
CWG1DBR_CWG1DBR0_POSITION                equ 0000h
CWG1DBR_CWG1DBR0_SIZE                    equ 0001h
CWG1DBR_CWG1DBR0_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR0_MASK                    equ 0001h
CWG1DBR_CWG1DBR1_POSN                    equ 0001h
CWG1DBR_CWG1DBR1_POSITION                equ 0001h
CWG1DBR_CWG1DBR1_SIZE                    equ 0001h
CWG1DBR_CWG1DBR1_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR1_MASK                    equ 0002h
CWG1DBR_CWG1DBR2_POSN                    equ 0002h
CWG1DBR_CWG1DBR2_POSITION                equ 0002h
CWG1DBR_CWG1DBR2_SIZE                    equ 0001h
CWG1DBR_CWG1DBR2_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR2_MASK                    equ 0004h
CWG1DBR_CWG1DBR3_POSN                    equ 0003h
CWG1DBR_CWG1DBR3_POSITION                equ 0003h
CWG1DBR_CWG1DBR3_SIZE                    equ 0001h
CWG1DBR_CWG1DBR3_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR3_MASK                    equ 0008h
CWG1DBR_CWG1DBR4_POSN                    equ 0004h
CWG1DBR_CWG1DBR4_POSITION                equ 0004h
CWG1DBR_CWG1DBR4_SIZE                    equ 0001h
CWG1DBR_CWG1DBR4_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR4_MASK                    equ 0010h
CWG1DBR_CWG1DBR5_POSN                    equ 0005h
CWG1DBR_CWG1DBR5_POSITION                equ 0005h
CWG1DBR_CWG1DBR5_SIZE                    equ 0001h
CWG1DBR_CWG1DBR5_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR5_MASK                    equ 0020h

// Register: CWG1DBF
#define CWG1DBF CWG1DBF
CWG1DBF                                  equ 003Dh
// bitfield definitions
CWG1DBF_CWG1DBF_POSN                     equ 0000h
CWG1DBF_CWG1DBF_POSITION                 equ 0000h
CWG1DBF_CWG1DBF_SIZE                     equ 0006h
CWG1DBF_CWG1DBF_LENGTH                   equ 0006h
CWG1DBF_CWG1DBF_MASK                     equ 003Fh
CWG1DBF_CWG1DBF0_POSN                    equ 0000h
CWG1DBF_CWG1DBF0_POSITION                equ 0000h
CWG1DBF_CWG1DBF0_SIZE                    equ 0001h
CWG1DBF_CWG1DBF0_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF0_MASK                    equ 0001h
CWG1DBF_CWG1DBF1_POSN                    equ 0001h
CWG1DBF_CWG1DBF1_POSITION                equ 0001h
CWG1DBF_CWG1DBF1_SIZE                    equ 0001h
CWG1DBF_CWG1DBF1_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF1_MASK                    equ 0002h
CWG1DBF_CWG1DBF2_POSN                    equ 0002h
CWG1DBF_CWG1DBF2_POSITION                equ 0002h
CWG1DBF_CWG1DBF2_SIZE                    equ 0001h
CWG1DBF_CWG1DBF2_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF2_MASK                    equ 0004h
CWG1DBF_CWG1DBF3_POSN                    equ 0003h
CWG1DBF_CWG1DBF3_POSITION                equ 0003h
CWG1DBF_CWG1DBF3_SIZE                    equ 0001h
CWG1DBF_CWG1DBF3_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF3_MASK                    equ 0008h
CWG1DBF_CWG1DBF4_POSN                    equ 0004h
CWG1DBF_CWG1DBF4_POSITION                equ 0004h
CWG1DBF_CWG1DBF4_SIZE                    equ 0001h
CWG1DBF_CWG1DBF4_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF4_MASK                    equ 0010h
CWG1DBF_CWG1DBF5_POSN                    equ 0005h
CWG1DBF_CWG1DBF5_POSITION                equ 0005h
CWG1DBF_CWG1DBF5_SIZE                    equ 0001h
CWG1DBF_CWG1DBF5_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF5_MASK                    equ 0020h

// Register: VREGCON
#define VREGCON VREGCON
VREGCON                                  equ 003Eh
// bitfield definitions
VREGCON_VREGPM_POSN                      equ 0000h
VREGCON_VREGPM_POSITION                  equ 0000h
VREGCON_VREGPM_SIZE                      equ 0002h
VREGCON_VREGPM_LENGTH                    equ 0002h
VREGCON_VREGPM_MASK                      equ 0003h
VREGCON_VREGPM0_POSN                     equ 0000h
VREGCON_VREGPM0_POSITION                 equ 0000h
VREGCON_VREGPM0_SIZE                     equ 0001h
VREGCON_VREGPM0_LENGTH                   equ 0001h
VREGCON_VREGPM0_MASK                     equ 0001h
VREGCON_VREGPM1_POSN                     equ 0001h
VREGCON_VREGPM1_POSITION                 equ 0001h
VREGCON_VREGPM1_SIZE                     equ 0001h
VREGCON_VREGPM1_LENGTH                   equ 0001h
VREGCON_VREGPM1_MASK                     equ 0002h

// Register: BORCON
#define BORCON BORCON
BORCON                                   equ 003Fh
// bitfield definitions
BORCON_BORRDY_POSN                       equ 0000h
BORCON_BORRDY_POSITION                   equ 0000h
BORCON_BORRDY_SIZE                       equ 0001h
BORCON_BORRDY_LENGTH                     equ 0001h
BORCON_BORRDY_MASK                       equ 0001h
BORCON_BORFS_POSN                        equ 0006h
BORCON_BORFS_POSITION                    equ 0006h
BORCON_BORFS_SIZE                        equ 0001h
BORCON_BORFS_LENGTH                      equ 0001h
BORCON_BORFS_MASK                        equ 0040h
BORCON_SBOREN_POSN                       equ 0007h
BORCON_SBOREN_POSITION                   equ 0007h
BORCON_SBOREN_SIZE                       equ 0001h
BORCON_SBOREN_LENGTH                     equ 0001h
BORCON_SBOREN_MASK                       equ 0080h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ADCS0                            BANKMASK(ADCON), 5
#define ADCS1                            BANKMASK(ADCON), 6
#define ADCS2                            BANKMASK(ADCON), 7
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON), 0
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define CARRY                            BANKMASK(STATUS), 0
#define CFGS                             BANKMASK(PMCON1), 6
#define CHS0                             BANKMASK(ADCON), 2
#define CHS1                             BANKMASK(ADCON), 3
#define CHS2                             BANKMASK(ADCON), 4
#define CLC1IE                           BANKMASK(PIE1), 3
#define CLC1IF                           BANKMASK(PIR1), 3
#define CLKROE                           BANKMASK(CLKRCON), 6
#define CWG1DBF0                         BANKMASK(CWG1DBF), 0
#define CWG1DBF1                         BANKMASK(CWG1DBF), 1
#define CWG1DBF2                         BANKMASK(CWG1DBF), 2
#define CWG1DBF3                         BANKMASK(CWG1DBF), 3
#define CWG1DBF4                         BANKMASK(CWG1DBF), 4
#define CWG1DBF5                         BANKMASK(CWG1DBF), 5
#define CWG1DBR0                         BANKMASK(CWG1DBR), 0
#define CWG1DBR1                         BANKMASK(CWG1DBR), 1
#define CWG1DBR2                         BANKMASK(CWG1DBR), 2
#define CWG1DBR3                         BANKMASK(CWG1DBR), 3
#define CWG1DBR4                         BANKMASK(CWG1DBR), 4
#define CWG1DBR5                         BANKMASK(CWG1DBR), 5
#define D1S0                             BANKMASK(CLC1SEL0), 0
#define D1S1                             BANKMASK(CLC1SEL0), 1
#define D1S2                             BANKMASK(CLC1SEL0), 2
#define D2S0                             BANKMASK(CLC1SEL0), 4
#define D2S1                             BANKMASK(CLC1SEL0), 5
#define D2S2                             BANKMASK(CLC1SEL0), 6
#define D3S0                             BANKMASK(CLC1SEL1), 0
#define D3S1                             BANKMASK(CLC1SEL1), 1
#define D3S2                             BANKMASK(CLC1SEL1), 2
#define D4S0                             BANKMASK(CLC1SEL1), 4
#define D4S1                             BANKMASK(CLC1SEL1), 5
#define D4S2                             BANKMASK(CLC1SEL1), 6
#define DC                               BANKMASK(STATUS), 1
#define FREE                             BANKMASK(PMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define G1ARSEN                          BANKMASK(CWG1CON2), 6
#define G1ASDLA0                         BANKMASK(CWG1CON1), 4
#define G1ASDLA1                         BANKMASK(CWG1CON1), 5
#define G1ASDLB0                         BANKMASK(CWG1CON1), 6
#define G1ASDLB1                         BANKMASK(CWG1CON1), 7
#define G1ASDSCLC1                       BANKMASK(CWG1CON2), 1
#define G1ASDSFLT                        BANKMASK(CWG1CON2), 0
#define G1ASE                            BANKMASK(CWG1CON2), 7
#define G1CS0                            BANKMASK(CWG1CON0), 0
#define G1EN                             BANKMASK(CWG1CON0), 7
#define G1IS0                            BANKMASK(CWG1CON1), 0
#define G1IS1                            BANKMASK(CWG1CON1), 1
#define G1OEA                            BANKMASK(CWG1CON0), 5
#define G1OEB                            BANKMASK(CWG1CON0), 6
#define G1POL                            BANKMASK(CLC1POL), 0
#define G1POLA                           BANKMASK(CWG1CON0), 3
#define G1POLB                           BANKMASK(CWG1CON0), 4
#define G2POL                            BANKMASK(CLC1POL), 1
#define G3POL                            BANKMASK(CLC1POL), 2
#define G4D1N                            BANKMASK(CLC1GLS3), 0
#define G4D1T                            BANKMASK(CLC1GLS3), 1
#define G4D2N                            BANKMASK(CLC1GLS3), 2
#define G4D2T                            BANKMASK(CLC1GLS3), 3
#define G4D3N                            BANKMASK(CLC1GLS3), 4
#define G4D3T                            BANKMASK(CLC1GLS3), 5
#define G4D4N                            BANKMASK(CLC1GLS3), 6
#define G4D4T                            BANKMASK(CLC1GLS3), 7
#define G4POL                            BANKMASK(CLC1POL), 3
#define GIE                              BANKMASK(INTCON), 7
#define GO_nDONE                         BANKMASK(ADCON), 1
#define HFIOFR                           BANKMASK(OSCCON), 3
#define HFIOFS                           BANKMASK(OSCCON), 0
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCAF0                           BANKMASK(IOCAF), 0
#define IOCAF1                           BANKMASK(IOCAF), 1
#define IOCAF2                           BANKMASK(IOCAF), 2
#define IOCAF3                           BANKMASK(IOCAF), 3
#define IOCAN0                           BANKMASK(IOCAN), 0
#define IOCAN1                           BANKMASK(IOCAN), 1
#define IOCAN2                           BANKMASK(IOCAN), 2
#define IOCAN3                           BANKMASK(IOCAN), 3
#define IOCAP0                           BANKMASK(IOCAP), 0
#define IOCAP1                           BANKMASK(IOCAP), 1
#define IOCAP2                           BANKMASK(IOCAP), 2
#define IOCAP3                           BANKMASK(IOCAP), 3
#define IOCIE                            BANKMASK(INTCON), 3
#define IOCIF                            BANKMASK(INTCON), 0
#define IRCF0                            BANKMASK(OSCCON), 4
#define IRCF1                            BANKMASK(OSCCON), 5
#define IRCF2                            BANKMASK(OSCCON), 6
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LC1D1S0                          BANKMASK(CLC1SEL0), 0
#define LC1D1S1                          BANKMASK(CLC1SEL0), 1
#define LC1D1S2                          BANKMASK(CLC1SEL0), 2
#define LC1D2S0                          BANKMASK(CLC1SEL0), 4
#define LC1D2S1                          BANKMASK(CLC1SEL0), 5
#define LC1D2S2                          BANKMASK(CLC1SEL0), 6
#define LC1D3S0                          BANKMASK(CLC1SEL1), 0
#define LC1D3S1                          BANKMASK(CLC1SEL1), 1
#define LC1D3S2                          BANKMASK(CLC1SEL1), 2
#define LC1D4S0                          BANKMASK(CLC1SEL1), 4
#define LC1D4S1                          BANKMASK(CLC1SEL1), 5
#define LC1D4S2                          BANKMASK(CLC1SEL1), 6
#define LC1EN                            BANKMASK(CLC1CON), 7
#define LC1G1D1N                         BANKMASK(CLC1GLS0), 0
#define LC1G1D1T                         BANKMASK(CLC1GLS0), 1
#define LC1G1D2N                         BANKMASK(CLC1GLS0), 2
#define LC1G1D2T                         BANKMASK(CLC1GLS0), 3
#define LC1G1D3N                         BANKMASK(CLC1GLS0), 4
#define LC1G1D3T                         BANKMASK(CLC1GLS0), 5
#define LC1G1D4N                         BANKMASK(CLC1GLS0), 6
#define LC1G1D4T                         BANKMASK(CLC1GLS0), 7
#define LC1G1POL                         BANKMASK(CLC1POL), 0
#define LC1G2D1N                         BANKMASK(CLC1GLS1), 0
#define LC1G2D1T                         BANKMASK(CLC1GLS1), 1
#define LC1G2D2N                         BANKMASK(CLC1GLS1), 2
#define LC1G2D2T                         BANKMASK(CLC1GLS1), 3
#define LC1G2D3N                         BANKMASK(CLC1GLS1), 4
#define LC1G2D3T                         BANKMASK(CLC1GLS1), 5
#define LC1G2D4N                         BANKMASK(CLC1GLS1), 6
#define LC1G2D4T                         BANKMASK(CLC1GLS1), 7
#define LC1G2POL                         BANKMASK(CLC1POL), 1
#define LC1G3D1N                         BANKMASK(CLC1GLS2), 0
#define LC1G3D1T                         BANKMASK(CLC1GLS2), 1
#define LC1G3D2N                         BANKMASK(CLC1GLS2), 2
#define LC1G3D2T                         BANKMASK(CLC1GLS2), 3
#define LC1G3D3N                         BANKMASK(CLC1GLS2), 4
#define LC1G3D3T                         BANKMASK(CLC1GLS2), 5
#define LC1G3D4N                         BANKMASK(CLC1GLS2), 6
#define LC1G3D4T                         BANKMASK(CLC1GLS2), 7
#define LC1G3POL                         BANKMASK(CLC1POL), 2
#define LC1G4D1N                         BANKMASK(CLC1GLS3), 0
#define LC1G4D1T                         BANKMASK(CLC1GLS3), 1
#define LC1G4D2N                         BANKMASK(CLC1GLS3), 2
#define LC1G4D2T                         BANKMASK(CLC1GLS3), 3
#define LC1G4D3N                         BANKMASK(CLC1GLS3), 4
#define LC1G4D3T                         BANKMASK(CLC1GLS3), 5
#define LC1G4D4N                         BANKMASK(CLC1GLS3), 6
#define LC1G4D4T                         BANKMASK(CLC1GLS3), 7
#define LC1G4POL                         BANKMASK(CLC1POL), 3
#define LC1INTN                          BANKMASK(CLC1CON), 3
#define LC1INTP                          BANKMASK(CLC1CON), 4
#define LC1MODE0                         BANKMASK(CLC1CON), 0
#define LC1MODE1                         BANKMASK(CLC1CON), 1
#define LC1MODE2                         BANKMASK(CLC1CON), 2
#define LC1OE                            BANKMASK(CLC1CON), 6
#define LC1OUT                           BANKMASK(CLC1CON), 5
#define LC1POL                           BANKMASK(CLC1POL), 7
#define LCEN                             BANKMASK(CLC1CON), 7
#define LCINTN                           BANKMASK(CLC1CON), 3
#define LCINTP                           BANKMASK(CLC1CON), 4
#define LCMODE0                          BANKMASK(CLC1CON), 0
#define LCMODE1                          BANKMASK(CLC1CON), 1
#define LCMODE2                          BANKMASK(CLC1CON), 2
#define LCOE                             BANKMASK(CLC1CON), 6
#define LCOUT                            BANKMASK(CLC1CON), 5
#define LFIOFR                           BANKMASK(OSCCON), 1
#define LWLO                             BANKMASK(PMCON1), 5
#define N1CKS0                           BANKMASK(NCO1CLK), 0
#define N1CKS1                           BANKMASK(NCO1CLK), 1
#define N1EN                             BANKMASK(NCO1CON), 7
#define N1OE                             BANKMASK(NCO1CON), 6
#define N1OUT                            BANKMASK(NCO1CON), 5
#define N1PFM                            BANKMASK(NCO1CON), 0
#define N1POL                            BANKMASK(NCO1CON), 4
#define N1PWS0                           BANKMASK(NCO1CLK), 5
#define N1PWS1                           BANKMASK(NCO1CLK), 6
#define N1PWS2                           BANKMASK(NCO1CLK), 7
#define NCO1ACC0                         BANKMASK(NCO1ACCL), 0
#define NCO1ACC1                         BANKMASK(NCO1ACCL), 1
#define NCO1ACC10                        BANKMASK(NCO1ACCH), 2
#define NCO1ACC11                        BANKMASK(NCO1ACCH), 3
#define NCO1ACC12                        BANKMASK(NCO1ACCH), 4
#define NCO1ACC13                        BANKMASK(NCO1ACCH), 5
#define NCO1ACC14                        BANKMASK(NCO1ACCH), 6
#define NCO1ACC15                        BANKMASK(NCO1ACCH), 7
#define NCO1ACC16                        BANKMASK(NCO1ACCU), 0
#define NCO1ACC17                        BANKMASK(NCO1ACCU), 1
#define NCO1ACC18                        BANKMASK(NCO1ACCU), 2
#define NCO1ACC19                        BANKMASK(NCO1ACCU), 3
#define NCO1ACC2                         BANKMASK(NCO1ACCL), 2
#define NCO1ACC3                         BANKMASK(NCO1ACCL), 3
#define NCO1ACC4                         BANKMASK(NCO1ACCL), 4
#define NCO1ACC5                         BANKMASK(NCO1ACCL), 5
#define NCO1ACC6                         BANKMASK(NCO1ACCL), 6
#define NCO1ACC7                         BANKMASK(NCO1ACCL), 7
#define NCO1ACC8                         BANKMASK(NCO1ACCH), 0
#define NCO1ACC9                         BANKMASK(NCO1ACCH), 1
#define NCO1IE                           BANKMASK(PIE1), 4
#define NCO1IF                           BANKMASK(PIR1), 4
#define NCO1INC0                         BANKMASK(NCO1INCL), 0
#define NCO1INC1                         BANKMASK(NCO1INCL), 1
#define NCO1INC10                        BANKMASK(NCO1INCH), 2
#define NCO1INC11                        BANKMASK(NCO1INCH), 3
#define NCO1INC12                        BANKMASK(NCO1INCH), 4
#define NCO1INC13                        BANKMASK(NCO1INCH), 5
#define NCO1INC14                        BANKMASK(NCO1INCH), 6
#define NCO1INC15                        BANKMASK(NCO1INCH), 7
#define NCO1INC2                         BANKMASK(NCO1INCL), 2
#define NCO1INC3                         BANKMASK(NCO1INCL), 3
#define NCO1INC4                         BANKMASK(NCO1INCL), 4
#define NCO1INC5                         BANKMASK(NCO1INCL), 5
#define NCO1INC6                         BANKMASK(NCO1INCL), 6
#define NCO1INC7                         BANKMASK(NCO1INCL), 7
#define NCO1INC8                         BANKMASK(NCO1INCH), 0
#define NCO1INC9                         BANKMASK(NCO1INCH), 1
#define PCLH0                            BANKMASK(PCLATH), 0
#define PEIE                             BANKMASK(INTCON), 6
#define PMADR8                           BANKMASK(PMADRH), 0
#define POL                              BANKMASK(CLC1POL), 7
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PWM1DCH0                         BANKMASK(PWM1DCH), 0
#define PWM1DCH1                         BANKMASK(PWM1DCH), 1
#define PWM1DCH2                         BANKMASK(PWM1DCH), 2
#define PWM1DCH3                         BANKMASK(PWM1DCH), 3
#define PWM1DCH4                         BANKMASK(PWM1DCH), 4
#define PWM1DCH5                         BANKMASK(PWM1DCH), 5
#define PWM1DCH6                         BANKMASK(PWM1DCH), 6
#define PWM1DCH7                         BANKMASK(PWM1DCH), 7
#define PWM1DCL0                         BANKMASK(PWM1DCL), 6
#define PWM1DCL1                         BANKMASK(PWM1DCL), 7
#define PWM1EN                           BANKMASK(PWM1CON), 7
#define PWM1OE                           BANKMASK(PWM1CON), 6
#define PWM1OUT                          BANKMASK(PWM1CON), 5
#define PWM1POL                          BANKMASK(PWM1CON), 4
#define PWM2DCH0                         BANKMASK(PWM2DCH), 0
#define PWM2DCH1                         BANKMASK(PWM2DCH), 1
#define PWM2DCH2                         BANKMASK(PWM2DCH), 2
#define PWM2DCH3                         BANKMASK(PWM2DCH), 3
#define PWM2DCH4                         BANKMASK(PWM2DCH), 4
#define PWM2DCH5                         BANKMASK(PWM2DCH), 5
#define PWM2DCH6                         BANKMASK(PWM2DCH), 6
#define PWM2DCH7                         BANKMASK(PWM2DCH), 7
#define PWM2DCL0                         BANKMASK(PWM2DCL), 6
#define PWM2DCL1                         BANKMASK(PWM2DCL), 7
#define PWM2EN                           BANKMASK(PWM2CON), 7
#define PWM2OE                           BANKMASK(PWM2CON), 6
#define PWM2OUT                          BANKMASK(PWM2CON), 5
#define PWM2POL                          BANKMASK(PWM2CON), 4
#define RA0                              BANKMASK(PORTA), 0
#define RA1                              BANKMASK(PORTA), 1
#define RA2                              BANKMASK(PORTA), 2
#define RA3                              BANKMASK(PORTA), 3
#define RD                               BANKMASK(PMCON1), 0
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define SBOREN                           BANKMASK(BORCON), 7
#define SWDTEN                           BANKMASK(WDTCON), 0
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(T2CON), 2
#define TOUTPS0                          BANKMASK(T2CON), 3
#define TOUTPS1                          BANKMASK(T2CON), 4
#define TOUTPS2                          BANKMASK(T2CON), 5
#define TOUTPS3                          BANKMASK(T2CON), 6
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define VREGPM0                          BANKMASK(VREGCON), 0
#define VREGPM1                          BANKMASK(VREGCON), 1
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WDTPS4                           BANKMASK(WDTCON), 5
#define WPUA0                            BANKMASK(WPUA), 0
#define WPUA1                            BANKMASK(WPUA), 1
#define WPUA2                            BANKMASK(WPUA), 2
#define WPUA3                            BANKMASK(WPUA), 3
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define WRERR                            BANKMASK(PMCON1), 3
#define ZERO                             BANKMASK(STATUS), 2
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nTO                              BANKMASK(STATUS), 4
#define nWPUEN                           BANKMASK(OPTION_REG), 7

/*
 * Device Psects
 */

#ifdef _XC_INC_

// Memory Spaces
#define SPACE_CODE   0
#define SPACE_DATA   1
#define SPACE_EEPROM 3

psect udata,class=RAM,space=SPACE_DATA,noexec
psect udata_bank0,class=BANK0,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC10LF320_INC_
