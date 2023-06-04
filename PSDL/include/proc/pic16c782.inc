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

#ifndef _PIC16C782_INC_
#define _PIC16C782_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16C782
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
STATUS_RP_POSN                           equ 0005h
STATUS_RP_POSITION                       equ 0005h
STATUS_RP_SIZE                           equ 0002h
STATUS_RP_LENGTH                         equ 0002h
STATUS_RP_MASK                           equ 0060h
STATUS_IRP_POSN                          equ 0007h
STATUS_IRP_POSITION                      equ 0007h
STATUS_IRP_SIZE                          equ 0001h
STATUS_IRP_LENGTH                        equ 0001h
STATUS_IRP_MASK                          equ 0080h
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
PORTA_RA4_POSN                           equ 0004h
PORTA_RA4_POSITION                       equ 0004h
PORTA_RA4_SIZE                           equ 0001h
PORTA_RA4_LENGTH                         equ 0001h
PORTA_RA4_MASK                           equ 0010h
PORTA_RA5_POSN                           equ 0005h
PORTA_RA5_POSITION                       equ 0005h
PORTA_RA5_SIZE                           equ 0001h
PORTA_RA5_LENGTH                         equ 0001h
PORTA_RA5_MASK                           equ 0020h
PORTA_RA6_POSN                           equ 0006h
PORTA_RA6_POSITION                       equ 0006h
PORTA_RA6_SIZE                           equ 0001h
PORTA_RA6_LENGTH                         equ 0001h
PORTA_RA6_MASK                           equ 0040h
PORTA_RA7_POSN                           equ 0007h
PORTA_RA7_POSITION                       equ 0007h
PORTA_RA7_SIZE                           equ 0001h
PORTA_RA7_LENGTH                         equ 0001h
PORTA_RA7_MASK                           equ 0080h

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 0006h
// bitfield definitions
PORTB_RB0_POSN                           equ 0000h
PORTB_RB0_POSITION                       equ 0000h
PORTB_RB0_SIZE                           equ 0001h
PORTB_RB0_LENGTH                         equ 0001h
PORTB_RB0_MASK                           equ 0001h
PORTB_RB1_POSN                           equ 0001h
PORTB_RB1_POSITION                       equ 0001h
PORTB_RB1_SIZE                           equ 0001h
PORTB_RB1_LENGTH                         equ 0001h
PORTB_RB1_MASK                           equ 0002h
PORTB_RB2_POSN                           equ 0002h
PORTB_RB2_POSITION                       equ 0002h
PORTB_RB2_SIZE                           equ 0001h
PORTB_RB2_LENGTH                         equ 0001h
PORTB_RB2_MASK                           equ 0004h
PORTB_RB3_POSN                           equ 0003h
PORTB_RB3_POSITION                       equ 0003h
PORTB_RB3_SIZE                           equ 0001h
PORTB_RB3_LENGTH                         equ 0001h
PORTB_RB3_MASK                           equ 0008h
PORTB_RB4_POSN                           equ 0004h
PORTB_RB4_POSITION                       equ 0004h
PORTB_RB4_SIZE                           equ 0001h
PORTB_RB4_LENGTH                         equ 0001h
PORTB_RB4_MASK                           equ 0010h
PORTB_RB5_POSN                           equ 0005h
PORTB_RB5_POSITION                       equ 0005h
PORTB_RB5_SIZE                           equ 0001h
PORTB_RB5_LENGTH                         equ 0001h
PORTB_RB5_MASK                           equ 0020h
PORTB_RB6_POSN                           equ 0006h
PORTB_RB6_POSITION                       equ 0006h
PORTB_RB6_SIZE                           equ 0001h
PORTB_RB6_LENGTH                         equ 0001h
PORTB_RB6_MASK                           equ 0040h
PORTB_RB7_POSN                           equ 0007h
PORTB_RB7_POSITION                       equ 0007h
PORTB_RB7_SIZE                           equ 0001h
PORTB_RB7_LENGTH                         equ 0001h
PORTB_RB7_MASK                           equ 0080h

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 000Bh
// bitfield definitions
INTCON_RBIF_POSN                         equ 0000h
INTCON_RBIF_POSITION                     equ 0000h
INTCON_RBIF_SIZE                         equ 0001h
INTCON_RBIF_LENGTH                       equ 0001h
INTCON_RBIF_MASK                         equ 0001h
INTCON_INTF_POSN                         equ 0001h
INTCON_INTF_POSITION                     equ 0001h
INTCON_INTF_SIZE                         equ 0001h
INTCON_INTF_LENGTH                       equ 0001h
INTCON_INTF_MASK                         equ 0002h
INTCON_T0IF_POSN                         equ 0002h
INTCON_T0IF_POSITION                     equ 0002h
INTCON_T0IF_SIZE                         equ 0001h
INTCON_T0IF_LENGTH                       equ 0001h
INTCON_T0IF_MASK                         equ 0004h
INTCON_RBIE_POSN                         equ 0003h
INTCON_RBIE_POSITION                     equ 0003h
INTCON_RBIE_SIZE                         equ 0001h
INTCON_RBIE_LENGTH                       equ 0001h
INTCON_RBIE_MASK                         equ 0008h
INTCON_INTE_POSN                         equ 0004h
INTCON_INTE_POSITION                     equ 0004h
INTCON_INTE_SIZE                         equ 0001h
INTCON_INTE_LENGTH                       equ 0001h
INTCON_INTE_MASK                         equ 0010h
INTCON_T0IE_POSN                         equ 0005h
INTCON_T0IE_POSITION                     equ 0005h
INTCON_T0IE_SIZE                         equ 0001h
INTCON_T0IE_LENGTH                       equ 0001h
INTCON_T0IE_MASK                         equ 0020h
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
PIR1_TMR1IF_POSN                         equ 0000h
PIR1_TMR1IF_POSITION                     equ 0000h
PIR1_TMR1IF_SIZE                         equ 0001h
PIR1_TMR1IF_LENGTH                       equ 0001h
PIR1_TMR1IF_MASK                         equ 0001h
PIR1_C1IF_POSN                           equ 0004h
PIR1_C1IF_POSITION                       equ 0004h
PIR1_C1IF_SIZE                           equ 0001h
PIR1_C1IF_LENGTH                         equ 0001h
PIR1_C1IF_MASK                           equ 0010h
PIR1_C2IF_POSN                           equ 0005h
PIR1_C2IF_POSITION                       equ 0005h
PIR1_C2IF_SIZE                           equ 0001h
PIR1_C2IF_LENGTH                         equ 0001h
PIR1_C2IF_MASK                           equ 0020h
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h
PIR1_LVDIF_POSN                          equ 0007h
PIR1_LVDIF_POSITION                      equ 0007h
PIR1_LVDIF_SIZE                          equ 0001h
PIR1_LVDIF_LENGTH                        equ 0001h
PIR1_LVDIF_MASK                          equ 0080h

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 000Eh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 000Fh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0010h
// bitfield definitions
T1CON_TMR1ON_POSN                        equ 0000h
T1CON_TMR1ON_POSITION                    equ 0000h
T1CON_TMR1ON_SIZE                        equ 0001h
T1CON_TMR1ON_LENGTH                      equ 0001h
T1CON_TMR1ON_MASK                        equ 0001h
T1CON_TMR1CS_POSN                        equ 0001h
T1CON_TMR1CS_POSITION                    equ 0001h
T1CON_TMR1CS_SIZE                        equ 0001h
T1CON_TMR1CS_LENGTH                      equ 0001h
T1CON_TMR1CS_MASK                        equ 0002h
T1CON_nT1SYNC_POSN                       equ 0002h
T1CON_nT1SYNC_POSITION                   equ 0002h
T1CON_nT1SYNC_SIZE                       equ 0001h
T1CON_nT1SYNC_LENGTH                     equ 0001h
T1CON_nT1SYNC_MASK                       equ 0004h
T1CON_T1OSCEN_POSN                       equ 0003h
T1CON_T1OSCEN_POSITION                   equ 0003h
T1CON_T1OSCEN_SIZE                       equ 0001h
T1CON_T1OSCEN_LENGTH                     equ 0001h
T1CON_T1OSCEN_MASK                       equ 0008h
T1CON_T1CKPS_POSN                        equ 0004h
T1CON_T1CKPS_POSITION                    equ 0004h
T1CON_T1CKPS_SIZE                        equ 0002h
T1CON_T1CKPS_LENGTH                      equ 0002h
T1CON_T1CKPS_MASK                        equ 0030h
T1CON_TMR1GE_POSN                        equ 0006h
T1CON_TMR1GE_POSITION                    equ 0006h
T1CON_TMR1GE_SIZE                        equ 0001h
T1CON_TMR1GE_LENGTH                      equ 0001h
T1CON_TMR1GE_MASK                        equ 0040h
T1CON_T1INSYNC_POSN                      equ 0002h
T1CON_T1INSYNC_POSITION                  equ 0002h
T1CON_T1INSYNC_SIZE                      equ 0001h
T1CON_T1INSYNC_LENGTH                    equ 0001h
T1CON_T1INSYNC_MASK                      equ 0004h
T1CON_T1CKPS0_POSN                       equ 0004h
T1CON_T1CKPS0_POSITION                   equ 0004h
T1CON_T1CKPS0_SIZE                       equ 0001h
T1CON_T1CKPS0_LENGTH                     equ 0001h
T1CON_T1CKPS0_MASK                       equ 0010h
T1CON_T1CKPS1_POSN                       equ 0005h
T1CON_T1CKPS1_POSITION                   equ 0005h
T1CON_T1CKPS1_SIZE                       equ 0001h
T1CON_T1CKPS1_LENGTH                     equ 0001h
T1CON_T1CKPS1_MASK                       equ 0020h

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 001Eh

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 001Fh
// bitfield definitions
ADCON0_ADON_POSN                         equ 0000h
ADCON0_ADON_POSITION                     equ 0000h
ADCON0_ADON_SIZE                         equ 0001h
ADCON0_ADON_LENGTH                       equ 0001h
ADCON0_ADON_MASK                         equ 0001h
ADCON0_CHS3_POSN                         equ 0001h
ADCON0_CHS3_POSITION                     equ 0001h
ADCON0_CHS3_SIZE                         equ 0001h
ADCON0_CHS3_LENGTH                       equ 0001h
ADCON0_CHS3_MASK                         equ 0002h
ADCON0_GO_nDONE_POSN                     equ 0002h
ADCON0_GO_nDONE_POSITION                 equ 0002h
ADCON0_GO_nDONE_SIZE                     equ 0001h
ADCON0_GO_nDONE_LENGTH                   equ 0001h
ADCON0_GO_nDONE_MASK                     equ 0004h
ADCON0_CHS_POSN                          equ 0003h
ADCON0_CHS_POSITION                      equ 0003h
ADCON0_CHS_SIZE                          equ 0003h
ADCON0_CHS_LENGTH                        equ 0003h
ADCON0_CHS_MASK                          equ 0038h
ADCON0_ADCS_POSN                         equ 0006h
ADCON0_ADCS_POSITION                     equ 0006h
ADCON0_ADCS_SIZE                         equ 0002h
ADCON0_ADCS_LENGTH                       equ 0002h
ADCON0_ADCS_MASK                         equ 00C0h
ADCON0_GO_POSN                           equ 0002h
ADCON0_GO_POSITION                       equ 0002h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0004h
ADCON0_CHS0_POSN                         equ 0003h
ADCON0_CHS0_POSITION                     equ 0003h
ADCON0_CHS0_SIZE                         equ 0001h
ADCON0_CHS0_LENGTH                       equ 0001h
ADCON0_CHS0_MASK                         equ 0008h
ADCON0_CHS1_POSN                         equ 0004h
ADCON0_CHS1_POSITION                     equ 0004h
ADCON0_CHS1_SIZE                         equ 0001h
ADCON0_CHS1_LENGTH                       equ 0001h
ADCON0_CHS1_MASK                         equ 0010h
ADCON0_CHS2_POSN                         equ 0005h
ADCON0_CHS2_POSITION                     equ 0005h
ADCON0_CHS2_SIZE                         equ 0001h
ADCON0_CHS2_LENGTH                       equ 0001h
ADCON0_CHS2_MASK                         equ 0020h
ADCON0_ADCS0_POSN                        equ 0006h
ADCON0_ADCS0_POSITION                    equ 0006h
ADCON0_ADCS0_SIZE                        equ 0001h
ADCON0_ADCS0_LENGTH                      equ 0001h
ADCON0_ADCS0_MASK                        equ 0040h
ADCON0_ADCS1_POSN                        equ 0007h
ADCON0_ADCS1_POSITION                    equ 0007h
ADCON0_ADCS1_SIZE                        equ 0001h
ADCON0_ADCS1_LENGTH                      equ 0001h
ADCON0_ADCS1_MASK                        equ 0080h
ADCON0_nDONE_POSN                        equ 0002h
ADCON0_nDONE_POSITION                    equ 0002h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0004h
ADCON0_GO_DONE_POSN                      equ 0002h
ADCON0_GO_DONE_POSITION                  equ 0002h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0004h

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
OPTION_REG                               equ 0081h
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
OPTION_REG_nRBPU_POSN                    equ 0007h
OPTION_REG_nRBPU_POSITION                equ 0007h
OPTION_REG_nRBPU_SIZE                    equ 0001h
OPTION_REG_nRBPU_LENGTH                  equ 0001h
OPTION_REG_nRBPU_MASK                    equ 0080h
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

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0085h
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
TRISA_TRISA3_POSN                        equ 0003h
TRISA_TRISA3_POSITION                    equ 0003h
TRISA_TRISA3_SIZE                        equ 0001h
TRISA_TRISA3_LENGTH                      equ 0001h
TRISA_TRISA3_MASK                        equ 0008h
TRISA_TRISA4_POSN                        equ 0004h
TRISA_TRISA4_POSITION                    equ 0004h
TRISA_TRISA4_SIZE                        equ 0001h
TRISA_TRISA4_LENGTH                      equ 0001h
TRISA_TRISA4_MASK                        equ 0010h
TRISA_TRISA5_POSN                        equ 0005h
TRISA_TRISA5_POSITION                    equ 0005h
TRISA_TRISA5_SIZE                        equ 0001h
TRISA_TRISA5_LENGTH                      equ 0001h
TRISA_TRISA5_MASK                        equ 0020h
TRISA_TRISA6_POSN                        equ 0006h
TRISA_TRISA6_POSITION                    equ 0006h
TRISA_TRISA6_SIZE                        equ 0001h
TRISA_TRISA6_LENGTH                      equ 0001h
TRISA_TRISA6_MASK                        equ 0040h
TRISA_TRISA7_POSN                        equ 0007h
TRISA_TRISA7_POSITION                    equ 0007h
TRISA_TRISA7_SIZE                        equ 0001h
TRISA_TRISA7_LENGTH                      equ 0001h
TRISA_TRISA7_MASK                        equ 0080h

// Register: TRISB
#define TRISB TRISB
TRISB                                    equ 0086h
// bitfield definitions
TRISB_TRISB0_POSN                        equ 0000h
TRISB_TRISB0_POSITION                    equ 0000h
TRISB_TRISB0_SIZE                        equ 0001h
TRISB_TRISB0_LENGTH                      equ 0001h
TRISB_TRISB0_MASK                        equ 0001h
TRISB_TRISB1_POSN                        equ 0001h
TRISB_TRISB1_POSITION                    equ 0001h
TRISB_TRISB1_SIZE                        equ 0001h
TRISB_TRISB1_LENGTH                      equ 0001h
TRISB_TRISB1_MASK                        equ 0002h
TRISB_TRISB2_POSN                        equ 0002h
TRISB_TRISB2_POSITION                    equ 0002h
TRISB_TRISB2_SIZE                        equ 0001h
TRISB_TRISB2_LENGTH                      equ 0001h
TRISB_TRISB2_MASK                        equ 0004h
TRISB_TRISB3_POSN                        equ 0003h
TRISB_TRISB3_POSITION                    equ 0003h
TRISB_TRISB3_SIZE                        equ 0001h
TRISB_TRISB3_LENGTH                      equ 0001h
TRISB_TRISB3_MASK                        equ 0008h
TRISB_TRISB4_POSN                        equ 0004h
TRISB_TRISB4_POSITION                    equ 0004h
TRISB_TRISB4_SIZE                        equ 0001h
TRISB_TRISB4_LENGTH                      equ 0001h
TRISB_TRISB4_MASK                        equ 0010h
TRISB_TRISB5_POSN                        equ 0005h
TRISB_TRISB5_POSITION                    equ 0005h
TRISB_TRISB5_SIZE                        equ 0001h
TRISB_TRISB5_LENGTH                      equ 0001h
TRISB_TRISB5_MASK                        equ 0020h
TRISB_TRISB6_POSN                        equ 0006h
TRISB_TRISB6_POSITION                    equ 0006h
TRISB_TRISB6_SIZE                        equ 0001h
TRISB_TRISB6_LENGTH                      equ 0001h
TRISB_TRISB6_MASK                        equ 0040h
TRISB_TRISB7_POSN                        equ 0007h
TRISB_TRISB7_POSITION                    equ 0007h
TRISB_TRISB7_SIZE                        equ 0001h
TRISB_TRISB7_LENGTH                      equ 0001h
TRISB_TRISB7_MASK                        equ 0080h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 008Ch
// bitfield definitions
PIE1_TMR1IE_POSN                         equ 0000h
PIE1_TMR1IE_POSITION                     equ 0000h
PIE1_TMR1IE_SIZE                         equ 0001h
PIE1_TMR1IE_LENGTH                       equ 0001h
PIE1_TMR1IE_MASK                         equ 0001h
PIE1_C1IE_POSN                           equ 0004h
PIE1_C1IE_POSITION                       equ 0004h
PIE1_C1IE_SIZE                           equ 0001h
PIE1_C1IE_LENGTH                         equ 0001h
PIE1_C1IE_MASK                           equ 0010h
PIE1_C2IE_POSN                           equ 0005h
PIE1_C2IE_POSITION                       equ 0005h
PIE1_C2IE_SIZE                           equ 0001h
PIE1_C2IE_LENGTH                         equ 0001h
PIE1_C2IE_MASK                           equ 0020h
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h
PIE1_LVDIE_POSN                          equ 0007h
PIE1_LVDIE_POSITION                      equ 0007h
PIE1_LVDIE_SIZE                          equ 0001h
PIE1_LVDIE_LENGTH                        equ 0001h
PIE1_LVDIE_MASK                          equ 0080h

// Register: PCON
#define PCON PCON
PCON                                     equ 008Eh
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
PCON_OSCF_POSN                           equ 0003h
PCON_OSCF_POSITION                       equ 0003h
PCON_OSCF_SIZE                           equ 0001h
PCON_OSCF_LENGTH                         equ 0001h
PCON_OSCF_MASK                           equ 0008h
PCON_WDTON_POSN                          equ 0004h
PCON_WDTON_POSITION                      equ 0004h
PCON_WDTON_SIZE                          equ 0001h
PCON_WDTON_LENGTH                        equ 0001h
PCON_WDTON_MASK                          equ 0010h
PCON_nBO_POSN                            equ 0000h
PCON_nBO_POSITION                        equ 0000h
PCON_nBO_SIZE                            equ 0001h
PCON_nBO_LENGTH                          equ 0001h
PCON_nBO_MASK                            equ 0001h

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 0095h
// bitfield definitions
WPUB_WPUB0_POSN                          equ 0000h
WPUB_WPUB0_POSITION                      equ 0000h
WPUB_WPUB0_SIZE                          equ 0001h
WPUB_WPUB0_LENGTH                        equ 0001h
WPUB_WPUB0_MASK                          equ 0001h
WPUB_WPUB1_POSN                          equ 0001h
WPUB_WPUB1_POSITION                      equ 0001h
WPUB_WPUB1_SIZE                          equ 0001h
WPUB_WPUB1_LENGTH                        equ 0001h
WPUB_WPUB1_MASK                          equ 0002h
WPUB_WPUB2_POSN                          equ 0002h
WPUB_WPUB2_POSITION                      equ 0002h
WPUB_WPUB2_SIZE                          equ 0001h
WPUB_WPUB2_LENGTH                        equ 0001h
WPUB_WPUB2_MASK                          equ 0004h
WPUB_WPUB3_POSN                          equ 0003h
WPUB_WPUB3_POSITION                      equ 0003h
WPUB_WPUB3_SIZE                          equ 0001h
WPUB_WPUB3_LENGTH                        equ 0001h
WPUB_WPUB3_MASK                          equ 0008h
WPUB_WPUB4_POSN                          equ 0004h
WPUB_WPUB4_POSITION                      equ 0004h
WPUB_WPUB4_SIZE                          equ 0001h
WPUB_WPUB4_LENGTH                        equ 0001h
WPUB_WPUB4_MASK                          equ 0010h
WPUB_WPUB5_POSN                          equ 0005h
WPUB_WPUB5_POSITION                      equ 0005h
WPUB_WPUB5_SIZE                          equ 0001h
WPUB_WPUB5_LENGTH                        equ 0001h
WPUB_WPUB5_MASK                          equ 0020h
WPUB_WPUB6_POSN                          equ 0006h
WPUB_WPUB6_POSITION                      equ 0006h
WPUB_WPUB6_SIZE                          equ 0001h
WPUB_WPUB6_LENGTH                        equ 0001h
WPUB_WPUB6_MASK                          equ 0040h
WPUB_WPUB7_POSN                          equ 0007h
WPUB_WPUB7_POSITION                      equ 0007h
WPUB_WPUB7_SIZE                          equ 0001h
WPUB_WPUB7_LENGTH                        equ 0001h
WPUB_WPUB7_MASK                          equ 0080h

// Register: IOCB
#define IOCB IOCB
IOCB                                     equ 0096h
// bitfield definitions
IOCB_IOCB0_POSN                          equ 0000h
IOCB_IOCB0_POSITION                      equ 0000h
IOCB_IOCB0_SIZE                          equ 0001h
IOCB_IOCB0_LENGTH                        equ 0001h
IOCB_IOCB0_MASK                          equ 0001h
IOCB_IOCB1_POSN                          equ 0001h
IOCB_IOCB1_POSITION                      equ 0001h
IOCB_IOCB1_SIZE                          equ 0001h
IOCB_IOCB1_LENGTH                        equ 0001h
IOCB_IOCB1_MASK                          equ 0002h
IOCB_IOCB2_POSN                          equ 0002h
IOCB_IOCB2_POSITION                      equ 0002h
IOCB_IOCB2_SIZE                          equ 0001h
IOCB_IOCB2_LENGTH                        equ 0001h
IOCB_IOCB2_MASK                          equ 0004h
IOCB_IOCB3_POSN                          equ 0003h
IOCB_IOCB3_POSITION                      equ 0003h
IOCB_IOCB3_SIZE                          equ 0001h
IOCB_IOCB3_LENGTH                        equ 0001h
IOCB_IOCB3_MASK                          equ 0008h
IOCB_IOCB4_POSN                          equ 0004h
IOCB_IOCB4_POSITION                      equ 0004h
IOCB_IOCB4_SIZE                          equ 0001h
IOCB_IOCB4_LENGTH                        equ 0001h
IOCB_IOCB4_MASK                          equ 0010h
IOCB_IOCB5_POSN                          equ 0005h
IOCB_IOCB5_POSITION                      equ 0005h
IOCB_IOCB5_SIZE                          equ 0001h
IOCB_IOCB5_LENGTH                        equ 0001h
IOCB_IOCB5_MASK                          equ 0020h
IOCB_IOCB6_POSN                          equ 0006h
IOCB_IOCB6_POSITION                      equ 0006h
IOCB_IOCB6_SIZE                          equ 0001h
IOCB_IOCB6_LENGTH                        equ 0001h
IOCB_IOCB6_MASK                          equ 0040h
IOCB_IOCB7_POSN                          equ 0007h
IOCB_IOCB7_POSITION                      equ 0007h
IOCB_IOCB7_SIZE                          equ 0001h
IOCB_IOCB7_LENGTH                        equ 0001h
IOCB_IOCB7_MASK                          equ 0080h

// Register: REFCON
#define REFCON REFCON
REFCON                                   equ 009Bh
// bitfield definitions
REFCON_VROE_POSN                         equ 0002h
REFCON_VROE_POSITION                     equ 0002h
REFCON_VROE_SIZE                         equ 0001h
REFCON_VROE_LENGTH                       equ 0001h
REFCON_VROE_MASK                         equ 0004h
REFCON_VREN_POSN                         equ 0003h
REFCON_VREN_POSITION                     equ 0003h
REFCON_VREN_SIZE                         equ 0001h
REFCON_VREN_LENGTH                       equ 0001h
REFCON_VREN_MASK                         equ 0008h
REFCON_VREFOE_POSN                       equ 0002h
REFCON_VREFOE_POSITION                   equ 0002h
REFCON_VREFOE_SIZE                       equ 0001h
REFCON_VREFOE_LENGTH                     equ 0001h
REFCON_VREFOE_MASK                       equ 0004h
REFCON_VREFEN_POSN                       equ 0003h
REFCON_VREFEN_POSITION                   equ 0003h
REFCON_VREFEN_SIZE                       equ 0001h
REFCON_VREFEN_LENGTH                     equ 0001h
REFCON_VREFEN_MASK                       equ 0008h

// Register: LVDCON
#define LVDCON LVDCON
LVDCON                                   equ 009Ch
// bitfield definitions
LVDCON_LV_POSN                           equ 0000h
LVDCON_LV_POSITION                       equ 0000h
LVDCON_LV_SIZE                           equ 0004h
LVDCON_LV_LENGTH                         equ 0004h
LVDCON_LV_MASK                           equ 000Fh
LVDCON_LVDEN_POSN                        equ 0004h
LVDCON_LVDEN_POSITION                    equ 0004h
LVDCON_LVDEN_SIZE                        equ 0001h
LVDCON_LVDEN_LENGTH                      equ 0001h
LVDCON_LVDEN_MASK                        equ 0010h
LVDCON_BGST_POSN                         equ 0005h
LVDCON_BGST_POSITION                     equ 0005h
LVDCON_BGST_SIZE                         equ 0001h
LVDCON_BGST_LENGTH                       equ 0001h
LVDCON_BGST_MASK                         equ 0020h
LVDCON_LV0_POSN                          equ 0000h
LVDCON_LV0_POSITION                      equ 0000h
LVDCON_LV0_SIZE                          equ 0001h
LVDCON_LV0_LENGTH                        equ 0001h
LVDCON_LV0_MASK                          equ 0001h
LVDCON_LV1_POSN                          equ 0001h
LVDCON_LV1_POSITION                      equ 0001h
LVDCON_LV1_SIZE                          equ 0001h
LVDCON_LV1_LENGTH                        equ 0001h
LVDCON_LV1_MASK                          equ 0002h
LVDCON_LV2_POSN                          equ 0002h
LVDCON_LV2_POSITION                      equ 0002h
LVDCON_LV2_SIZE                          equ 0001h
LVDCON_LV2_LENGTH                        equ 0001h
LVDCON_LV2_MASK                          equ 0004h
LVDCON_LV3_POSN                          equ 0003h
LVDCON_LV3_POSITION                      equ 0003h
LVDCON_LV3_SIZE                          equ 0001h
LVDCON_LV3_LENGTH                        equ 0001h
LVDCON_LV3_MASK                          equ 0008h

// Register: ANSEL
#define ANSEL ANSEL
ANSEL                                    equ 009Dh
// bitfield definitions
ANSEL_ANS0_POSN                          equ 0000h
ANSEL_ANS0_POSITION                      equ 0000h
ANSEL_ANS0_SIZE                          equ 0001h
ANSEL_ANS0_LENGTH                        equ 0001h
ANSEL_ANS0_MASK                          equ 0001h
ANSEL_ANS1_POSN                          equ 0001h
ANSEL_ANS1_POSITION                      equ 0001h
ANSEL_ANS1_SIZE                          equ 0001h
ANSEL_ANS1_LENGTH                        equ 0001h
ANSEL_ANS1_MASK                          equ 0002h
ANSEL_ANS2_POSN                          equ 0002h
ANSEL_ANS2_POSITION                      equ 0002h
ANSEL_ANS2_SIZE                          equ 0001h
ANSEL_ANS2_LENGTH                        equ 0001h
ANSEL_ANS2_MASK                          equ 0004h
ANSEL_ANS3_POSN                          equ 0003h
ANSEL_ANS3_POSITION                      equ 0003h
ANSEL_ANS3_SIZE                          equ 0001h
ANSEL_ANS3_LENGTH                        equ 0001h
ANSEL_ANS3_MASK                          equ 0008h
ANSEL_ANS4_POSN                          equ 0004h
ANSEL_ANS4_POSITION                      equ 0004h
ANSEL_ANS4_SIZE                          equ 0001h
ANSEL_ANS4_LENGTH                        equ 0001h
ANSEL_ANS4_MASK                          equ 0010h
ANSEL_ANS5_POSN                          equ 0005h
ANSEL_ANS5_POSITION                      equ 0005h
ANSEL_ANS5_SIZE                          equ 0001h
ANSEL_ANS5_LENGTH                        equ 0001h
ANSEL_ANS5_MASK                          equ 0020h
ANSEL_ANS6_POSN                          equ 0006h
ANSEL_ANS6_POSITION                      equ 0006h
ANSEL_ANS6_SIZE                          equ 0001h
ANSEL_ANS6_LENGTH                        equ 0001h
ANSEL_ANS6_MASK                          equ 0040h
ANSEL_ANS7_POSN                          equ 0007h
ANSEL_ANS7_POSITION                      equ 0007h
ANSEL_ANS7_SIZE                          equ 0001h
ANSEL_ANS7_LENGTH                        equ 0001h
ANSEL_ANS7_MASK                          equ 0080h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Fh
// bitfield definitions
ADCON1_VCFG_POSN                         equ 0004h
ADCON1_VCFG_POSITION                     equ 0004h
ADCON1_VCFG_SIZE                         equ 0002h
ADCON1_VCFG_LENGTH                       equ 0002h
ADCON1_VCFG_MASK                         equ 0030h
ADCON1_VCFG0_POSN                        equ 0004h
ADCON1_VCFG0_POSITION                    equ 0004h
ADCON1_VCFG0_SIZE                        equ 0001h
ADCON1_VCFG0_LENGTH                      equ 0001h
ADCON1_VCFG0_MASK                        equ 0010h
ADCON1_VCFG1_POSN                        equ 0005h
ADCON1_VCFG1_POSITION                    equ 0005h
ADCON1_VCFG1_SIZE                        equ 0001h
ADCON1_VCFG1_LENGTH                      equ 0001h
ADCON1_VCFG1_MASK                        equ 0020h

// Register: PMDATL
#define PMDATL PMDATL
PMDATL                                   equ 010Ch

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 010Dh

// Register: PMDATH
#define PMDATH PMDATH
PMDATH                                   equ 010Eh

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 010Fh

// Register: CALCON
#define CALCON CALCON
CALCON                                   equ 0110h
// bitfield definitions
CALCON_CALREF_POSN                       equ 0005h
CALCON_CALREF_POSITION                   equ 0005h
CALCON_CALREF_SIZE                       equ 0001h
CALCON_CALREF_LENGTH                     equ 0001h
CALCON_CALREF_MASK                       equ 0020h
CALCON_CALERR_POSN                       equ 0006h
CALCON_CALERR_POSITION                   equ 0006h
CALCON_CALERR_SIZE                       equ 0001h
CALCON_CALERR_LENGTH                     equ 0001h
CALCON_CALERR_MASK                       equ 0040h
CALCON_CAL_POSN                          equ 0007h
CALCON_CAL_POSITION                      equ 0007h
CALCON_CAL_SIZE                          equ 0001h
CALCON_CAL_LENGTH                        equ 0001h
CALCON_CAL_MASK                          equ 0080h

// Register: PSMCCON0
#define PSMCCON0 PSMCCON0
PSMCCON0                                 equ 0111h
// bitfield definitions
PSMCCON0_DC_POSN                         equ 0000h
PSMCCON0_DC_POSITION                     equ 0000h
PSMCCON0_DC_SIZE                         equ 0002h
PSMCCON0_DC_LENGTH                       equ 0002h
PSMCCON0_DC_MASK                         equ 0003h
PSMCCON0_MAXDC_POSN                      equ 0002h
PSMCCON0_MAXDC_POSITION                  equ 0002h
PSMCCON0_MAXDC_SIZE                      equ 0002h
PSMCCON0_MAXDC_LENGTH                    equ 0002h
PSMCCON0_MAXDC_MASK                      equ 000Ch
PSMCCON0_MINDC_POSN                      equ 0004h
PSMCCON0_MINDC_POSITION                  equ 0004h
PSMCCON0_MINDC_SIZE                      equ 0002h
PSMCCON0_MINDC_LENGTH                    equ 0002h
PSMCCON0_MINDC_MASK                      equ 0030h
PSMCCON0_SMCCL_POSN                      equ 0006h
PSMCCON0_SMCCL_POSITION                  equ 0006h
PSMCCON0_SMCCL_SIZE                      equ 0002h
PSMCCON0_SMCCL_LENGTH                    equ 0002h
PSMCCON0_SMCCL_MASK                      equ 00C0h
PSMCCON0_DC0_POSN                        equ 0000h
PSMCCON0_DC0_POSITION                    equ 0000h
PSMCCON0_DC0_SIZE                        equ 0001h
PSMCCON0_DC0_LENGTH                      equ 0001h
PSMCCON0_DC0_MASK                        equ 0001h
PSMCCON0_DC1_POSN                        equ 0001h
PSMCCON0_DC1_POSITION                    equ 0001h
PSMCCON0_DC1_SIZE                        equ 0001h
PSMCCON0_DC1_LENGTH                      equ 0001h
PSMCCON0_DC1_MASK                        equ 0002h
PSMCCON0_MAXDC0_POSN                     equ 0002h
PSMCCON0_MAXDC0_POSITION                 equ 0002h
PSMCCON0_MAXDC0_SIZE                     equ 0001h
PSMCCON0_MAXDC0_LENGTH                   equ 0001h
PSMCCON0_MAXDC0_MASK                     equ 0004h
PSMCCON0_MAXDC1_POSN                     equ 0003h
PSMCCON0_MAXDC1_POSITION                 equ 0003h
PSMCCON0_MAXDC1_SIZE                     equ 0001h
PSMCCON0_MAXDC1_LENGTH                   equ 0001h
PSMCCON0_MAXDC1_MASK                     equ 0008h
PSMCCON0_MINDC0_POSN                     equ 0004h
PSMCCON0_MINDC0_POSITION                 equ 0004h
PSMCCON0_MINDC0_SIZE                     equ 0001h
PSMCCON0_MINDC0_LENGTH                   equ 0001h
PSMCCON0_MINDC0_MASK                     equ 0010h
PSMCCON0_MINDC1_POSN                     equ 0005h
PSMCCON0_MINDC1_POSITION                 equ 0005h
PSMCCON0_MINDC1_SIZE                     equ 0001h
PSMCCON0_MINDC1_LENGTH                   equ 0001h
PSMCCON0_MINDC1_MASK                     equ 0020h
PSMCCON0_SMCCL0_POSN                     equ 0006h
PSMCCON0_SMCCL0_POSITION                 equ 0006h
PSMCCON0_SMCCL0_SIZE                     equ 0001h
PSMCCON0_SMCCL0_LENGTH                   equ 0001h
PSMCCON0_SMCCL0_MASK                     equ 0040h
PSMCCON0_SMCCL1_POSN                     equ 0007h
PSMCCON0_SMCCL1_POSITION                 equ 0007h
PSMCCON0_SMCCL1_SIZE                     equ 0001h
PSMCCON0_SMCCL1_LENGTH                   equ 0001h
PSMCCON0_SMCCL1_MASK                     equ 0080h

// Register: PSMCCON1
#define PSMCCON1 PSMCCON1
PSMCCON1                                 equ 0112h
// bitfield definitions
PSMCCON1_SMCCS_POSN                      equ 0000h
PSMCCON1_SMCCS_POSITION                  equ 0000h
PSMCCON1_SMCCS_SIZE                      equ 0001h
PSMCCON1_SMCCS_LENGTH                    equ 0001h
PSMCCON1_SMCCS_MASK                      equ 0001h
PSMCCON1_PWM_nPSM_POSN                   equ 0001h
PSMCCON1_PWM_nPSM_POSITION               equ 0001h
PSMCCON1_PWM_nPSM_SIZE                   equ 0001h
PSMCCON1_PWM_nPSM_LENGTH                 equ 0001h
PSMCCON1_PWM_nPSM_MASK                   equ 0002h
PSMCCON1_SMCOM_POSN                      equ 0002h
PSMCCON1_SMCOM_POSITION                  equ 0002h
PSMCCON1_SMCOM_SIZE                      equ 0001h
PSMCCON1_SMCOM_LENGTH                    equ 0001h
PSMCCON1_SMCOM_MASK                      equ 0004h
PSMCCON1_SCEN_POSN                       equ 0003h
PSMCCON1_SCEN_POSITION                   equ 0003h
PSMCCON1_SCEN_SIZE                       equ 0001h
PSMCCON1_SCEN_LENGTH                     equ 0001h
PSMCCON1_SCEN_MASK                       equ 0008h
PSMCCON1_S1BPOL_POSN                     equ 0005h
PSMCCON1_S1BPOL_POSITION                 equ 0005h
PSMCCON1_S1BPOL_SIZE                     equ 0001h
PSMCCON1_S1BPOL_LENGTH                   equ 0001h
PSMCCON1_S1BPOL_MASK                     equ 0020h
PSMCCON1_S1APOL_POSN                     equ 0006h
PSMCCON1_S1APOL_POSITION                 equ 0006h
PSMCCON1_S1APOL_SIZE                     equ 0001h
PSMCCON1_S1APOL_LENGTH                   equ 0001h
PSMCCON1_S1APOL_MASK                     equ 0040h
PSMCCON1_SMCON_POSN                      equ 0007h
PSMCCON1_SMCON_POSITION                  equ 0007h
PSMCCON1_SMCON_SIZE                      equ 0001h
PSMCCON1_SMCON_LENGTH                    equ 0001h
PSMCCON1_SMCON_MASK                      equ 0080h
PSMCCON1_PWM_POSN                        equ 0001h
PSMCCON1_PWM_POSITION                    equ 0001h
PSMCCON1_PWM_SIZE                        equ 0001h
PSMCCON1_PWM_LENGTH                      equ 0001h
PSMCCON1_PWM_MASK                        equ 0002h
PSMCCON1_PSM_POSN                        equ 0001h
PSMCCON1_PSM_POSITION                    equ 0001h
PSMCCON1_PSM_SIZE                        equ 0001h
PSMCCON1_PSM_LENGTH                      equ 0001h
PSMCCON1_PSM_MASK                        equ 0002h
PSMCCON1_nPSM_POSN                       equ 0001h
PSMCCON1_nPSM_POSITION                   equ 0001h
PSMCCON1_nPSM_SIZE                       equ 0001h
PSMCCON1_nPSM_LENGTH                     equ 0001h
PSMCCON1_nPSM_MASK                       equ 0002h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0119h
// bitfield definitions
CM1CON0_C1CH_POSN                        equ 0000h
CM1CON0_C1CH_POSITION                    equ 0000h
CM1CON0_C1CH_SIZE                        equ 0002h
CM1CON0_C1CH_LENGTH                      equ 0002h
CM1CON0_C1CH_MASK                        equ 0003h
CM1CON0_C1R_POSN                         equ 0002h
CM1CON0_C1R_POSITION                     equ 0002h
CM1CON0_C1R_SIZE                         equ 0001h
CM1CON0_C1R_LENGTH                       equ 0001h
CM1CON0_C1R_MASK                         equ 0004h
CM1CON0_C1SP_POSN                        equ 0003h
CM1CON0_C1SP_POSITION                    equ 0003h
CM1CON0_C1SP_SIZE                        equ 0001h
CM1CON0_C1SP_LENGTH                      equ 0001h
CM1CON0_C1SP_MASK                        equ 0008h
CM1CON0_C1POL_POSN                       equ 0004h
CM1CON0_C1POL_POSITION                   equ 0004h
CM1CON0_C1POL_SIZE                       equ 0001h
CM1CON0_C1POL_LENGTH                     equ 0001h
CM1CON0_C1POL_MASK                       equ 0010h
CM1CON0_C1OE_POSN                        equ 0005h
CM1CON0_C1OE_POSITION                    equ 0005h
CM1CON0_C1OE_SIZE                        equ 0001h
CM1CON0_C1OE_LENGTH                      equ 0001h
CM1CON0_C1OE_MASK                        equ 0020h
CM1CON0_C1OUT_POSN                       equ 0006h
CM1CON0_C1OUT_POSITION                   equ 0006h
CM1CON0_C1OUT_SIZE                       equ 0001h
CM1CON0_C1OUT_LENGTH                     equ 0001h
CM1CON0_C1OUT_MASK                       equ 0040h
CM1CON0_C1ON_POSN                        equ 0007h
CM1CON0_C1ON_POSITION                    equ 0007h
CM1CON0_C1ON_SIZE                        equ 0001h
CM1CON0_C1ON_LENGTH                      equ 0001h
CM1CON0_C1ON_MASK                        equ 0080h
CM1CON0_C1CH0_POSN                       equ 0000h
CM1CON0_C1CH0_POSITION                   equ 0000h
CM1CON0_C1CH0_SIZE                       equ 0001h
CM1CON0_C1CH0_LENGTH                     equ 0001h
CM1CON0_C1CH0_MASK                       equ 0001h
CM1CON0_C1CH1_POSN                       equ 0001h
CM1CON0_C1CH1_POSITION                   equ 0001h
CM1CON0_C1CH1_SIZE                       equ 0001h
CM1CON0_C1CH1_LENGTH                     equ 0001h
CM1CON0_C1CH1_MASK                       equ 0002h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 011Ah
// bitfield definitions
CM2CON0_C2CH_POSN                        equ 0000h
CM2CON0_C2CH_POSITION                    equ 0000h
CM2CON0_C2CH_SIZE                        equ 0002h
CM2CON0_C2CH_LENGTH                      equ 0002h
CM2CON0_C2CH_MASK                        equ 0003h
CM2CON0_C2R_POSN                         equ 0002h
CM2CON0_C2R_POSITION                     equ 0002h
CM2CON0_C2R_SIZE                         equ 0001h
CM2CON0_C2R_LENGTH                       equ 0001h
CM2CON0_C2R_MASK                         equ 0004h
CM2CON0_C2SP_POSN                        equ 0003h
CM2CON0_C2SP_POSITION                    equ 0003h
CM2CON0_C2SP_SIZE                        equ 0001h
CM2CON0_C2SP_LENGTH                      equ 0001h
CM2CON0_C2SP_MASK                        equ 0008h
CM2CON0_C2POL_POSN                       equ 0004h
CM2CON0_C2POL_POSITION                   equ 0004h
CM2CON0_C2POL_SIZE                       equ 0001h
CM2CON0_C2POL_LENGTH                     equ 0001h
CM2CON0_C2POL_MASK                       equ 0010h
CM2CON0_C2OE_POSN                        equ 0005h
CM2CON0_C2OE_POSITION                    equ 0005h
CM2CON0_C2OE_SIZE                        equ 0001h
CM2CON0_C2OE_LENGTH                      equ 0001h
CM2CON0_C2OE_MASK                        equ 0020h
CM2CON0_C2OUT_POSN                       equ 0006h
CM2CON0_C2OUT_POSITION                   equ 0006h
CM2CON0_C2OUT_SIZE                       equ 0001h
CM2CON0_C2OUT_LENGTH                     equ 0001h
CM2CON0_C2OUT_MASK                       equ 0040h
CM2CON0_C2ON_POSN                        equ 0007h
CM2CON0_C2ON_POSITION                    equ 0007h
CM2CON0_C2ON_SIZE                        equ 0001h
CM2CON0_C2ON_LENGTH                      equ 0001h
CM2CON0_C2ON_MASK                        equ 0080h
CM2CON0_C2CH0_POSN                       equ 0000h
CM2CON0_C2CH0_POSITION                   equ 0000h
CM2CON0_C2CH0_SIZE                       equ 0001h
CM2CON0_C2CH0_LENGTH                     equ 0001h
CM2CON0_C2CH0_MASK                       equ 0001h
CM2CON0_C2CH1_POSN                       equ 0001h
CM2CON0_C2CH1_POSITION                   equ 0001h
CM2CON0_C2CH1_SIZE                       equ 0001h
CM2CON0_C2CH1_LENGTH                     equ 0001h
CM2CON0_C2CH1_MASK                       equ 0002h

// Register: CM2CON1
#define CM2CON1 CM2CON1
CM2CON1                                  equ 011Bh
// bitfield definitions
CM2CON1_C2SYNC_POSN                      equ 0000h
CM2CON1_C2SYNC_POSITION                  equ 0000h
CM2CON1_C2SYNC_SIZE                      equ 0001h
CM2CON1_C2SYNC_LENGTH                    equ 0001h
CM2CON1_C2SYNC_MASK                      equ 0001h
CM2CON1_MC2OUT_POSN                      equ 0006h
CM2CON1_MC2OUT_POSITION                  equ 0006h
CM2CON1_MC2OUT_SIZE                      equ 0001h
CM2CON1_MC2OUT_LENGTH                    equ 0001h
CM2CON1_MC2OUT_MASK                      equ 0040h
CM2CON1_MC1OUT_POSN                      equ 0007h
CM2CON1_MC1OUT_POSITION                  equ 0007h
CM2CON1_MC1OUT_SIZE                      equ 0001h
CM2CON1_MC1OUT_LENGTH                    equ 0001h
CM2CON1_MC1OUT_MASK                      equ 0080h

// Register: OPACON
#define OPACON OPACON
OPACON                                   equ 011Ch
// bitfield definitions
OPACON_GBWP_POSN                         equ 0000h
OPACON_GBWP_POSITION                     equ 0000h
OPACON_GBWP_SIZE                         equ 0001h
OPACON_GBWP_LENGTH                       equ 0001h
OPACON_GBWP_MASK                         equ 0001h
OPACON_CMPEN_POSN                        equ 0006h
OPACON_CMPEN_POSITION                    equ 0006h
OPACON_CMPEN_SIZE                        equ 0001h
OPACON_CMPEN_LENGTH                      equ 0001h
OPACON_CMPEN_MASK                        equ 0040h
OPACON_OPAON_POSN                        equ 0007h
OPACON_OPAON_POSITION                    equ 0007h
OPACON_OPAON_SIZE                        equ 0001h
OPACON_OPAON_LENGTH                      equ 0001h
OPACON_OPAON_MASK                        equ 0080h

// Register: DAC
#define DAC DAC
DAC                                      equ 011Eh
// bitfield definitions
DAC_DA0_POSN                             equ 0000h
DAC_DA0_POSITION                         equ 0000h
DAC_DA0_SIZE                             equ 0001h
DAC_DA0_LENGTH                           equ 0001h
DAC_DA0_MASK                             equ 0001h
DAC_DA1_POSN                             equ 0001h
DAC_DA1_POSITION                         equ 0001h
DAC_DA1_SIZE                             equ 0001h
DAC_DA1_LENGTH                           equ 0001h
DAC_DA1_MASK                             equ 0002h
DAC_DA2_POSN                             equ 0002h
DAC_DA2_POSITION                         equ 0002h
DAC_DA2_SIZE                             equ 0001h
DAC_DA2_LENGTH                           equ 0001h
DAC_DA2_MASK                             equ 0004h
DAC_DA3_POSN                             equ 0003h
DAC_DA3_POSITION                         equ 0003h
DAC_DA3_SIZE                             equ 0001h
DAC_DA3_LENGTH                           equ 0001h
DAC_DA3_MASK                             equ 0008h
DAC_DA4_POSN                             equ 0004h
DAC_DA4_POSITION                         equ 0004h
DAC_DA4_SIZE                             equ 0001h
DAC_DA4_LENGTH                           equ 0001h
DAC_DA4_MASK                             equ 0010h
DAC_DA5_POSN                             equ 0005h
DAC_DA5_POSITION                         equ 0005h
DAC_DA5_SIZE                             equ 0001h
DAC_DA5_LENGTH                           equ 0001h
DAC_DA5_MASK                             equ 0020h
DAC_DA6_POSN                             equ 0006h
DAC_DA6_POSITION                         equ 0006h
DAC_DA6_SIZE                             equ 0001h
DAC_DA6_LENGTH                           equ 0001h
DAC_DA6_MASK                             equ 0040h
DAC_DA7_POSN                             equ 0007h
DAC_DA7_POSITION                         equ 0007h
DAC_DA7_SIZE                             equ 0001h
DAC_DA7_LENGTH                           equ 0001h
DAC_DA7_MASK                             equ 0080h

// Register: DACON0
#define DACON0 DACON0
DACON0                                   equ 011Fh
// bitfield definitions
DACON0_DARS_POSN                         equ 0000h
DACON0_DARS_POSITION                     equ 0000h
DACON0_DARS_SIZE                         equ 0002h
DACON0_DARS_LENGTH                       equ 0002h
DACON0_DARS_MASK                         equ 0003h
DACON0_DAOE_POSN                         equ 0006h
DACON0_DAOE_POSITION                     equ 0006h
DACON0_DAOE_SIZE                         equ 0001h
DACON0_DAOE_LENGTH                       equ 0001h
DACON0_DAOE_MASK                         equ 0040h
DACON0_DAON_POSN                         equ 0007h
DACON0_DAON_POSITION                     equ 0007h
DACON0_DAON_SIZE                         equ 0001h
DACON0_DAON_LENGTH                       equ 0001h
DACON0_DAON_MASK                         equ 0080h
DACON0_DARS0_POSN                        equ 0000h
DACON0_DARS0_POSITION                    equ 0000h
DACON0_DARS0_SIZE                        equ 0001h
DACON0_DARS0_LENGTH                      equ 0001h
DACON0_DARS0_MASK                        equ 0001h
DACON0_DARS1_POSN                        equ 0001h
DACON0_DARS1_POSITION                    equ 0001h
DACON0_DARS1_SIZE                        equ 0001h
DACON0_DARS1_LENGTH                      equ 0001h
DACON0_DARS1_MASK                        equ 0002h

// Register: PMCON1
#define PMCON1 PMCON1
PMCON1                                   equ 018Ch
// bitfield definitions
PMCON1_RD_POSN                           equ 0000h
PMCON1_RD_POSITION                       equ 0000h
PMCON1_RD_SIZE                           equ 0001h
PMCON1_RD_LENGTH                         equ 0001h
PMCON1_RD_MASK                           equ 0001h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ADCS0                            BANKMASK(ADCON0), 6
#define ADCS1                            BANKMASK(ADCON0), 7
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ANS0                             BANKMASK(ANSEL), 0
#define ANS1                             BANKMASK(ANSEL), 1
#define ANS2                             BANKMASK(ANSEL), 2
#define ANS3                             BANKMASK(ANSEL), 3
#define ANS4                             BANKMASK(ANSEL), 4
#define ANS5                             BANKMASK(ANSEL), 5
#define ANS6                             BANKMASK(ANSEL), 6
#define ANS7                             BANKMASK(ANSEL), 7
#define BGST                             BANKMASK(LVDCON), 5
#define C1CH0                            BANKMASK(CM1CON0), 0
#define C1CH1                            BANKMASK(CM1CON0), 1
#define C1IE                             BANKMASK(PIE1), 4
#define C1IF                             BANKMASK(PIR1), 4
#define C1OE                             BANKMASK(CM1CON0), 5
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1R                              BANKMASK(CM1CON0), 2
#define C1SP                             BANKMASK(CM1CON0), 3
#define C2CH0                            BANKMASK(CM2CON0), 0
#define C2CH1                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE1), 5
#define C2IF                             BANKMASK(PIR1), 5
#define C2OE                             BANKMASK(CM2CON0), 5
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2R                              BANKMASK(CM2CON0), 2
#define C2SP                             BANKMASK(CM2CON0), 3
#define C2SYNC                           BANKMASK(CM2CON1), 0
#define CAL                              BANKMASK(CALCON), 7
#define CALERR                           BANKMASK(CALCON), 6
#define CALREF                           BANKMASK(CALCON), 5
#define CARRY                            BANKMASK(STATUS), 0
#define CHS0                             BANKMASK(ADCON0), 3
#define CHS1                             BANKMASK(ADCON0), 4
#define CHS2                             BANKMASK(ADCON0), 5
#define CHS3                             BANKMASK(ADCON0), 1
#define CMPEN                            BANKMASK(OPACON), 6
#define DA0                              BANKMASK(DAC), 0
#define DA1                              BANKMASK(DAC), 1
#define DA2                              BANKMASK(DAC), 2
#define DA3                              BANKMASK(DAC), 3
#define DA4                              BANKMASK(DAC), 4
#define DA5                              BANKMASK(DAC), 5
#define DA6                              BANKMASK(DAC), 6
#define DA7                              BANKMASK(DAC), 7
#define DAOE                             BANKMASK(DACON0), 6
#define DAON                             BANKMASK(DACON0), 7
#define DARS0                            BANKMASK(DACON0), 0
#define DARS1                            BANKMASK(DACON0), 1
#define DC                               BANKMASK(STATUS), 1
#define DC0                              BANKMASK(PSMCCON0), 0
#define DC1                              BANKMASK(PSMCCON0), 1
#define GBWP                             BANKMASK(OPACON), 0
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 2
#define GO_DONE                          BANKMASK(ADCON0), 2
#define GO_nDONE                         BANKMASK(ADCON0), 2
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCB0                            BANKMASK(IOCB), 0
#define IOCB1                            BANKMASK(IOCB), 1
#define IOCB2                            BANKMASK(IOCB), 2
#define IOCB3                            BANKMASK(IOCB), 3
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCB6                            BANKMASK(IOCB), 6
#define IOCB7                            BANKMASK(IOCB), 7
#define LV0                              BANKMASK(LVDCON), 0
#define LV1                              BANKMASK(LVDCON), 1
#define LV2                              BANKMASK(LVDCON), 2
#define LV3                              BANKMASK(LVDCON), 3
#define LVDEN                            BANKMASK(LVDCON), 4
#define LVDIE                            BANKMASK(PIE1), 7
#define LVDIF                            BANKMASK(PIR1), 7
#define MAXDC0                           BANKMASK(PSMCCON0), 2
#define MAXDC1                           BANKMASK(PSMCCON0), 3
#define MC1OUT                           BANKMASK(CM2CON1), 7
#define MC2OUT                           BANKMASK(CM2CON1), 6
#define MINDC0                           BANKMASK(PSMCCON0), 4
#define MINDC1                           BANKMASK(PSMCCON0), 5
#define OPAON                            BANKMASK(OPACON), 7
#define OSCF                             BANKMASK(PCON), 3
#define PEIE                             BANKMASK(INTCON), 6
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PSM                              BANKMASK(PSMCCON1), 1
#define PWM                              BANKMASK(PSMCCON1), 1
#define PWM_nPSM                         BANKMASK(PSMCCON1), 1
#define RA0                              BANKMASK(PORTA), 0
#define RA1                              BANKMASK(PORTA), 1
#define RA2                              BANKMASK(PORTA), 2
#define RA3                              BANKMASK(PORTA), 3
#define RA4                              BANKMASK(PORTA), 4
#define RA5                              BANKMASK(PORTA), 5
#define RA6                              BANKMASK(PORTA), 6
#define RA7                              BANKMASK(PORTA), 7
#define RB0                              BANKMASK(PORTB), 0
#define RB1                              BANKMASK(PORTB), 1
#define RB2                              BANKMASK(PORTB), 2
#define RB3                              BANKMASK(PORTB), 3
#define RB4                              BANKMASK(PORTB), 4
#define RB5                              BANKMASK(PORTB), 5
#define RB6                              BANKMASK(PORTB), 6
#define RB7                              BANKMASK(PORTB), 7
#define RBIE                             BANKMASK(INTCON), 3
#define RBIF                             BANKMASK(INTCON), 0
#define RD                               BANKMASK(PMCON1), 0
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define S1APOL                           BANKMASK(PSMCCON1), 6
#define S1BPOL                           BANKMASK(PSMCCON1), 5
#define SCEN                             BANKMASK(PSMCCON1), 3
#define SMCCL0                           BANKMASK(PSMCCON0), 6
#define SMCCL1                           BANKMASK(PSMCCON0), 7
#define SMCCS                            BANKMASK(PSMCCON1), 0
#define SMCOM                            BANKMASK(PSMCCON1), 2
#define SMCON                            BANKMASK(PSMCCON1), 7
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1INSYNC                         BANKMASK(T1CON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define TMR1CS                           BANKMASK(T1CON), 1
#define TMR1GE                           BANKMASK(T1CON), 6
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(T1CON), 0
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TRISA3                           BANKMASK(TRISA), 3
#define TRISA4                           BANKMASK(TRISA), 4
#define TRISA5                           BANKMASK(TRISA), 5
#define TRISA6                           BANKMASK(TRISA), 6
#define TRISA7                           BANKMASK(TRISA), 7
#define TRISB0                           BANKMASK(TRISB), 0
#define TRISB1                           BANKMASK(TRISB), 1
#define TRISB2                           BANKMASK(TRISB), 2
#define TRISB3                           BANKMASK(TRISB), 3
#define TRISB4                           BANKMASK(TRISB), 4
#define TRISB5                           BANKMASK(TRISB), 5
#define TRISB6                           BANKMASK(TRISB), 6
#define TRISB7                           BANKMASK(TRISB), 7
#define VCFG0                            BANKMASK(ADCON1), 4
#define VCFG1                            BANKMASK(ADCON1), 5
#define VREFEN                           BANKMASK(REFCON), 3
#define VREFOE                           BANKMASK(REFCON), 2
#define VREN                             BANKMASK(REFCON), 3
#define VROE                             BANKMASK(REFCON), 2
#define WDTON                            BANKMASK(PCON), 4
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define ZERO                             BANKMASK(STATUS), 2
#define nBO                              BANKMASK(PCON), 0
#define nBOR                             BANKMASK(PCON), 0
#define nDONE                            BANKMASK(ADCON0), 2
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nPSM                             BANKMASK(PSMCCON1), 1
#define nRBPU                            BANKMASK(OPTION_REG), 7
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nTO                              BANKMASK(STATUS), 4

/*
 * Device Psects
 */

#ifdef _XC_INC_

// Memory Spaces
#define SPACE_CODE   0
#define SPACE_DATA   1
#define SPACE_EEPROM 3

psect udata_shr,class=COMMON,space=SPACE_DATA,noexec
psect udata,class=RAM,space=SPACE_DATA,noexec
psect udata_bank0,class=BANK0,space=SPACE_DATA,noexec
psect udata_bank1,class=BANK1,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16C782_INC_
