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

#ifndef _PIC12LF1552_INC_
#define _PIC12LF1552_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC12LF1552
 */

/*
 * Device Registers
 */

// Register: INDF0
#define INDF0 INDF0
INDF0                                    equ 0000h
// bitfield definitions
INDF0_INDF0_POSN                         equ 0000h
INDF0_INDF0_POSITION                     equ 0000h
INDF0_INDF0_SIZE                         equ 0008h
INDF0_INDF0_LENGTH                       equ 0008h
INDF0_INDF0_MASK                         equ 00FFh

// Register: INDF1
#define INDF1 INDF1
INDF1                                    equ 0001h
// bitfield definitions
INDF1_INDF1_POSN                         equ 0000h
INDF1_INDF1_POSITION                     equ 0000h
INDF1_INDF1_SIZE                         equ 0008h
INDF1_INDF1_LENGTH                       equ 0008h
INDF1_INDF1_MASK                         equ 00FFh

// Register: PCL
#define PCL PCL
PCL                                      equ 0002h
// bitfield definitions
PCL_PCL_POSN                             equ 0000h
PCL_PCL_POSITION                         equ 0000h
PCL_PCL_SIZE                             equ 0008h
PCL_PCL_LENGTH                           equ 0008h
PCL_PCL_MASK                             equ 00FFh

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

// Register: FSR0L
#define FSR0L FSR0L
FSR0L                                    equ 0004h
// bitfield definitions
FSR0L_FSR0L_POSN                         equ 0000h
FSR0L_FSR0L_POSITION                     equ 0000h
FSR0L_FSR0L_SIZE                         equ 0008h
FSR0L_FSR0L_LENGTH                       equ 0008h
FSR0L_FSR0L_MASK                         equ 00FFh

// Register: FSR0H
#define FSR0H FSR0H
FSR0H                                    equ 0005h
// bitfield definitions
FSR0H_FSR0H_POSN                         equ 0000h
FSR0H_FSR0H_POSITION                     equ 0000h
FSR0H_FSR0H_SIZE                         equ 0008h
FSR0H_FSR0H_LENGTH                       equ 0008h
FSR0H_FSR0H_MASK                         equ 00FFh

// Register: FSR1L
#define FSR1L FSR1L
FSR1L                                    equ 0006h
// bitfield definitions
FSR1L_FSR1L_POSN                         equ 0000h
FSR1L_FSR1L_POSITION                     equ 0000h
FSR1L_FSR1L_SIZE                         equ 0008h
FSR1L_FSR1L_LENGTH                       equ 0008h
FSR1L_FSR1L_MASK                         equ 00FFh

// Register: FSR1H
#define FSR1H FSR1H
FSR1H                                    equ 0007h
// bitfield definitions
FSR1H_FSR1H_POSN                         equ 0000h
FSR1H_FSR1H_POSITION                     equ 0000h
FSR1H_FSR1H_SIZE                         equ 0008h
FSR1H_FSR1H_LENGTH                       equ 0008h
FSR1H_FSR1H_MASK                         equ 00FFh

// Register: BSR
#define BSR BSR
BSR                                      equ 0008h
// bitfield definitions
BSR_BSR_POSN                             equ 0000h
BSR_BSR_POSITION                         equ 0000h
BSR_BSR_SIZE                             equ 0005h
BSR_BSR_LENGTH                           equ 0005h
BSR_BSR_MASK                             equ 001Fh
BSR_BSR0_POSN                            equ 0000h
BSR_BSR0_POSITION                        equ 0000h
BSR_BSR0_SIZE                            equ 0001h
BSR_BSR0_LENGTH                          equ 0001h
BSR_BSR0_MASK                            equ 0001h
BSR_BSR1_POSN                            equ 0001h
BSR_BSR1_POSITION                        equ 0001h
BSR_BSR1_SIZE                            equ 0001h
BSR_BSR1_LENGTH                          equ 0001h
BSR_BSR1_MASK                            equ 0002h
BSR_BSR2_POSN                            equ 0002h
BSR_BSR2_POSITION                        equ 0002h
BSR_BSR2_SIZE                            equ 0001h
BSR_BSR2_LENGTH                          equ 0001h
BSR_BSR2_MASK                            equ 0004h
BSR_BSR3_POSN                            equ 0003h
BSR_BSR3_POSITION                        equ 0003h
BSR_BSR3_SIZE                            equ 0001h
BSR_BSR3_LENGTH                          equ 0001h
BSR_BSR3_MASK                            equ 0008h
BSR_BSR4_POSN                            equ 0004h
BSR_BSR4_POSITION                        equ 0004h
BSR_BSR4_SIZE                            equ 0001h
BSR_BSR4_LENGTH                          equ 0001h
BSR_BSR4_MASK                            equ 0010h

// Register: WREG
#define WREG WREG
WREG                                     equ 0009h
// bitfield definitions
WREG_WREG0_POSN                          equ 0000h
WREG_WREG0_POSITION                      equ 0000h
WREG_WREG0_SIZE                          equ 0008h
WREG_WREG0_LENGTH                        equ 0008h
WREG_WREG0_MASK                          equ 00FFh

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah
// bitfield definitions
PCLATH_PCLATH_POSN                       equ 0000h
PCLATH_PCLATH_POSITION                   equ 0000h
PCLATH_PCLATH_SIZE                       equ 0007h
PCLATH_PCLATH_LENGTH                     equ 0007h
PCLATH_PCLATH_MASK                       equ 007Fh

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
INTCON_T0IF_POSN                         equ 0002h
INTCON_T0IF_POSITION                     equ 0002h
INTCON_T0IF_SIZE                         equ 0001h
INTCON_T0IF_LENGTH                       equ 0001h
INTCON_T0IF_MASK                         equ 0004h
INTCON_T0IE_POSN                         equ 0005h
INTCON_T0IE_POSITION                     equ 0005h
INTCON_T0IE_SIZE                         equ 0001h
INTCON_T0IE_LENGTH                       equ 0001h
INTCON_T0IE_MASK                         equ 0020h

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 000Ch
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

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 0011h
// bitfield definitions
PIR1_SSP1IF_POSN                         equ 0003h
PIR1_SSP1IF_POSITION                     equ 0003h
PIR1_SSP1IF_SIZE                         equ 0001h
PIR1_SSP1IF_LENGTH                       equ 0001h
PIR1_SSP1IF_MASK                         equ 0008h
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0012h
// bitfield definitions
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0015h
// bitfield definitions
TMR0_TMR0_POSN                           equ 0000h
TMR0_TMR0_POSITION                       equ 0000h
TMR0_TMR0_SIZE                           equ 0008h
TMR0_TMR0_LENGTH                         equ 0008h
TMR0_TMR0_MASK                           equ 00FFh

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 008Ch
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

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0091h
// bitfield definitions
PIE1_SSP1IE_POSN                         equ 0003h
PIE1_SSP1IE_POSITION                     equ 0003h
PIE1_SSP1IE_SIZE                         equ 0001h
PIE1_SSP1IE_LENGTH                       equ 0001h
PIE1_SSP1IE_MASK                         equ 0008h
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0092h
// bitfield definitions
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
OPTION_REG                               equ 0095h
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
OPTION_REG_TMR0SE_POSN                   equ 0004h
OPTION_REG_TMR0SE_POSITION               equ 0004h
OPTION_REG_TMR0SE_SIZE                   equ 0001h
OPTION_REG_TMR0SE_LENGTH                 equ 0001h
OPTION_REG_TMR0SE_MASK                   equ 0010h
OPTION_REG_TMR0CS_POSN                   equ 0005h
OPTION_REG_TMR0CS_POSITION               equ 0005h
OPTION_REG_TMR0CS_SIZE                   equ 0001h
OPTION_REG_TMR0CS_LENGTH                 equ 0001h
OPTION_REG_TMR0CS_MASK                   equ 0020h
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

// Register: PCON
#define PCON PCON
PCON                                     equ 0096h
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
PCON_nRI_POSN                            equ 0002h
PCON_nRI_POSITION                        equ 0002h
PCON_nRI_SIZE                            equ 0001h
PCON_nRI_LENGTH                          equ 0001h
PCON_nRI_MASK                            equ 0004h
PCON_nRMCLR_POSN                         equ 0003h
PCON_nRMCLR_POSITION                     equ 0003h
PCON_nRMCLR_SIZE                         equ 0001h
PCON_nRMCLR_LENGTH                       equ 0001h
PCON_nRMCLR_MASK                         equ 0008h
PCON_nRWDT_POSN                          equ 0004h
PCON_nRWDT_POSITION                      equ 0004h
PCON_nRWDT_SIZE                          equ 0001h
PCON_nRWDT_LENGTH                        equ 0001h
PCON_nRWDT_MASK                          equ 0010h
PCON_STKUNF_POSN                         equ 0006h
PCON_STKUNF_POSITION                     equ 0006h
PCON_STKUNF_SIZE                         equ 0001h
PCON_STKUNF_LENGTH                       equ 0001h
PCON_STKUNF_MASK                         equ 0040h
PCON_STKOVF_POSN                         equ 0007h
PCON_STKOVF_POSITION                     equ 0007h
PCON_STKOVF_SIZE                         equ 0001h
PCON_STKOVF_LENGTH                       equ 0001h
PCON_STKOVF_MASK                         equ 0080h

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0097h
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

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0099h
// bitfield definitions
OSCCON_SCS_POSN                          equ 0000h
OSCCON_SCS_POSITION                      equ 0000h
OSCCON_SCS_SIZE                          equ 0002h
OSCCON_SCS_LENGTH                        equ 0002h
OSCCON_SCS_MASK                          equ 0003h
OSCCON_IRCF_POSN                         equ 0003h
OSCCON_IRCF_POSITION                     equ 0003h
OSCCON_IRCF_SIZE                         equ 0004h
OSCCON_IRCF_LENGTH                       equ 0004h
OSCCON_IRCF_MASK                         equ 0078h
OSCCON_SPLLEN_POSN                       equ 0007h
OSCCON_SPLLEN_POSITION                   equ 0007h
OSCCON_SPLLEN_SIZE                       equ 0001h
OSCCON_SPLLEN_LENGTH                     equ 0001h
OSCCON_SPLLEN_MASK                       equ 0080h
OSCCON_SCS0_POSN                         equ 0000h
OSCCON_SCS0_POSITION                     equ 0000h
OSCCON_SCS0_SIZE                         equ 0001h
OSCCON_SCS0_LENGTH                       equ 0001h
OSCCON_SCS0_MASK                         equ 0001h
OSCCON_SCS1_POSN                         equ 0001h
OSCCON_SCS1_POSITION                     equ 0001h
OSCCON_SCS1_SIZE                         equ 0001h
OSCCON_SCS1_LENGTH                       equ 0001h
OSCCON_SCS1_MASK                         equ 0002h
OSCCON_IRCF0_POSN                        equ 0003h
OSCCON_IRCF0_POSITION                    equ 0003h
OSCCON_IRCF0_SIZE                        equ 0001h
OSCCON_IRCF0_LENGTH                      equ 0001h
OSCCON_IRCF0_MASK                        equ 0008h
OSCCON_IRCF1_POSN                        equ 0004h
OSCCON_IRCF1_POSITION                    equ 0004h
OSCCON_IRCF1_SIZE                        equ 0001h
OSCCON_IRCF1_LENGTH                      equ 0001h
OSCCON_IRCF1_MASK                        equ 0010h
OSCCON_IRCF2_POSN                        equ 0005h
OSCCON_IRCF2_POSITION                    equ 0005h
OSCCON_IRCF2_SIZE                        equ 0001h
OSCCON_IRCF2_LENGTH                      equ 0001h
OSCCON_IRCF2_MASK                        equ 0020h
OSCCON_IRCF3_POSN                        equ 0006h
OSCCON_IRCF3_POSITION                    equ 0006h
OSCCON_IRCF3_SIZE                        equ 0001h
OSCCON_IRCF3_LENGTH                      equ 0001h
OSCCON_IRCF3_MASK                        equ 0040h

// Register: OSCSTAT
#define OSCSTAT OSCSTAT
OSCSTAT                                  equ 009Ah
// bitfield definitions
OSCSTAT_HFIOFS_POSN                      equ 0000h
OSCSTAT_HFIOFS_POSITION                  equ 0000h
OSCSTAT_HFIOFS_SIZE                      equ 0001h
OSCSTAT_HFIOFS_LENGTH                    equ 0001h
OSCSTAT_HFIOFS_MASK                      equ 0001h
OSCSTAT_LFIOFR_POSN                      equ 0001h
OSCSTAT_LFIOFR_POSITION                  equ 0001h
OSCSTAT_LFIOFR_SIZE                      equ 0001h
OSCSTAT_LFIOFR_LENGTH                    equ 0001h
OSCSTAT_LFIOFR_MASK                      equ 0002h
OSCSTAT_HFIOFR_POSN                      equ 0004h
OSCSTAT_HFIOFR_POSITION                  equ 0004h
OSCSTAT_HFIOFR_SIZE                      equ 0001h
OSCSTAT_HFIOFR_LENGTH                    equ 0001h
OSCSTAT_HFIOFR_MASK                      equ 0010h
OSCSTAT_OSTS_POSN                        equ 0005h
OSCSTAT_OSTS_POSITION                    equ 0005h
OSCSTAT_OSTS_SIZE                        equ 0001h
OSCSTAT_OSTS_LENGTH                      equ 0001h
OSCSTAT_OSTS_MASK                        equ 0020h
OSCSTAT_PLLR_POSN                        equ 0006h
OSCSTAT_PLLR_POSITION                    equ 0006h
OSCSTAT_PLLR_SIZE                        equ 0001h
OSCSTAT_PLLR_LENGTH                      equ 0001h
OSCSTAT_PLLR_MASK                        equ 0040h

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 009Bh
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 009Ch
// bitfield definitions
ADRESH_ADRESH_POSN                       equ 0000h
ADRESH_ADRESH_POSITION                   equ 0000h
ADRESH_ADRESH_SIZE                       equ 0008h
ADRESH_ADRESH_LENGTH                     equ 0008h
ADRESH_ADRESH_MASK                       equ 00FFh

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 009Dh
// bitfield definitions
ADCON0_ADON_POSN                         equ 0000h
ADCON0_ADON_POSITION                     equ 0000h
ADCON0_ADON_SIZE                         equ 0001h
ADCON0_ADON_LENGTH                       equ 0001h
ADCON0_ADON_MASK                         equ 0001h
ADCON0_GO_nDONE_POSN                     equ 0001h
ADCON0_GO_nDONE_POSITION                 equ 0001h
ADCON0_GO_nDONE_SIZE                     equ 0001h
ADCON0_GO_nDONE_LENGTH                   equ 0001h
ADCON0_GO_nDONE_MASK                     equ 0002h
ADCON0_CHS_POSN                          equ 0002h
ADCON0_CHS_POSITION                      equ 0002h
ADCON0_CHS_SIZE                          equ 0005h
ADCON0_CHS_LENGTH                        equ 0005h
ADCON0_CHS_MASK                          equ 007Ch
ADCON0_ADGO_POSN                         equ 0001h
ADCON0_ADGO_POSITION                     equ 0001h
ADCON0_ADGO_SIZE                         equ 0001h
ADCON0_ADGO_LENGTH                       equ 0001h
ADCON0_ADGO_MASK                         equ 0002h
ADCON0_CHS0_POSN                         equ 0002h
ADCON0_CHS0_POSITION                     equ 0002h
ADCON0_CHS0_SIZE                         equ 0001h
ADCON0_CHS0_LENGTH                       equ 0001h
ADCON0_CHS0_MASK                         equ 0004h
ADCON0_CHS1_POSN                         equ 0003h
ADCON0_CHS1_POSITION                     equ 0003h
ADCON0_CHS1_SIZE                         equ 0001h
ADCON0_CHS1_LENGTH                       equ 0001h
ADCON0_CHS1_MASK                         equ 0008h
ADCON0_CHS2_POSN                         equ 0004h
ADCON0_CHS2_POSITION                     equ 0004h
ADCON0_CHS2_SIZE                         equ 0001h
ADCON0_CHS2_LENGTH                       equ 0001h
ADCON0_CHS2_MASK                         equ 0010h
ADCON0_CHS3_POSN                         equ 0005h
ADCON0_CHS3_POSITION                     equ 0005h
ADCON0_CHS3_SIZE                         equ 0001h
ADCON0_CHS3_LENGTH                       equ 0001h
ADCON0_CHS3_MASK                         equ 0020h
ADCON0_CHS4_POSN                         equ 0006h
ADCON0_CHS4_POSITION                     equ 0006h
ADCON0_CHS4_SIZE                         equ 0001h
ADCON0_CHS4_LENGTH                       equ 0001h
ADCON0_CHS4_MASK                         equ 0040h
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Eh
// bitfield definitions
ADCON1_ADPREF_POSN                       equ 0000h
ADCON1_ADPREF_POSITION                   equ 0000h
ADCON1_ADPREF_SIZE                       equ 0002h
ADCON1_ADPREF_LENGTH                     equ 0002h
ADCON1_ADPREF_MASK                       equ 0003h
ADCON1_ADCS_POSN                         equ 0004h
ADCON1_ADCS_POSITION                     equ 0004h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0070h
ADCON1_ADFM_POSN                         equ 0007h
ADCON1_ADFM_POSITION                     equ 0007h
ADCON1_ADFM_SIZE                         equ 0001h
ADCON1_ADFM_LENGTH                       equ 0001h
ADCON1_ADFM_MASK                         equ 0080h
ADCON1_ADPREF0_POSN                      equ 0000h
ADCON1_ADPREF0_POSITION                  equ 0000h
ADCON1_ADPREF0_SIZE                      equ 0001h
ADCON1_ADPREF0_LENGTH                    equ 0001h
ADCON1_ADPREF0_MASK                      equ 0001h
ADCON1_ADPREF1_POSN                      equ 0001h
ADCON1_ADPREF1_POSITION                  equ 0001h
ADCON1_ADPREF1_SIZE                      equ 0001h
ADCON1_ADPREF1_LENGTH                    equ 0001h
ADCON1_ADPREF1_MASK                      equ 0002h
ADCON1_ADCS0_POSN                        equ 0004h
ADCON1_ADCS0_POSITION                    equ 0004h
ADCON1_ADCS0_SIZE                        equ 0001h
ADCON1_ADCS0_LENGTH                      equ 0001h
ADCON1_ADCS0_MASK                        equ 0010h
ADCON1_ADCS1_POSN                        equ 0005h
ADCON1_ADCS1_POSITION                    equ 0005h
ADCON1_ADCS1_SIZE                        equ 0001h
ADCON1_ADCS1_LENGTH                      equ 0001h
ADCON1_ADCS1_MASK                        equ 0020h
ADCON1_ADCS2_POSN                        equ 0006h
ADCON1_ADCS2_POSITION                    equ 0006h
ADCON1_ADCS2_SIZE                        equ 0001h
ADCON1_ADCS2_LENGTH                      equ 0001h
ADCON1_ADCS2_MASK                        equ 0040h

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 009Fh
// bitfield definitions
ADCON2_TRIGSEL0_POSN                     equ 0004h
ADCON2_TRIGSEL0_POSITION                 equ 0004h
ADCON2_TRIGSEL0_SIZE                     equ 0001h
ADCON2_TRIGSEL0_LENGTH                   equ 0001h
ADCON2_TRIGSEL0_MASK                     equ 0010h
ADCON2_TRIGSEL1_POSN                     equ 0005h
ADCON2_TRIGSEL1_POSITION                 equ 0005h
ADCON2_TRIGSEL1_SIZE                     equ 0001h
ADCON2_TRIGSEL1_LENGTH                   equ 0001h
ADCON2_TRIGSEL1_MASK                     equ 0020h
ADCON2_TRIGSEL2_POSN                     equ 0006h
ADCON2_TRIGSEL2_POSITION                 equ 0006h
ADCON2_TRIGSEL2_SIZE                     equ 0001h
ADCON2_TRIGSEL2_LENGTH                   equ 0001h
ADCON2_TRIGSEL2_MASK                     equ 0040h
ADCON2_TRIGSEL_POSN                      equ 0004h
ADCON2_TRIGSEL_POSITION                  equ 0004h
ADCON2_TRIGSEL_SIZE                      equ 0003h
ADCON2_TRIGSEL_LENGTH                    equ 0003h
ADCON2_TRIGSEL_MASK                      equ 0070h

// Register: LATA
#define LATA LATA
LATA                                     equ 010Ch
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
LATA_LATA4_POSN                          equ 0004h
LATA_LATA4_POSITION                      equ 0004h
LATA_LATA4_SIZE                          equ 0001h
LATA_LATA4_LENGTH                        equ 0001h
LATA_LATA4_MASK                          equ 0010h
LATA_LATA5_POSN                          equ 0005h
LATA_LATA5_POSITION                      equ 0005h
LATA_LATA5_SIZE                          equ 0001h
LATA_LATA5_LENGTH                        equ 0001h
LATA_LATA5_MASK                          equ 0020h

// Register: BORCON
#define BORCON BORCON
BORCON                                   equ 0116h
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

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 0117h
// bitfield definitions
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
FVRCON_ADFVR_POSN                        equ 0000h
FVRCON_ADFVR_POSITION                    equ 0000h
FVRCON_ADFVR_SIZE                        equ 0002h
FVRCON_ADFVR_LENGTH                      equ 0002h
FVRCON_ADFVR_MASK                        equ 0003h

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 011Dh
// bitfield definitions
APFCON_SDSEL_POSN                        equ 0004h
APFCON_SDSEL_POSITION                    equ 0004h
APFCON_SDSEL_SIZE                        equ 0001h
APFCON_SDSEL_LENGTH                      equ 0001h
APFCON_SDSEL_MASK                        equ 0010h
APFCON_SSSEL_POSN                        equ 0005h
APFCON_SSSEL_POSITION                    equ 0005h
APFCON_SSSEL_SIZE                        equ 0001h
APFCON_SSSEL_LENGTH                      equ 0001h
APFCON_SSSEL_MASK                        equ 0020h
APFCON_SDOSEL_POSN                       equ 0006h
APFCON_SDOSEL_POSITION                   equ 0006h
APFCON_SDOSEL_SIZE                       equ 0001h
APFCON_SDOSEL_LENGTH                     equ 0001h
APFCON_SDOSEL_MASK                       equ 0040h
APFCON_SS1SEL_POSN                       equ 0005h
APFCON_SS1SEL_POSITION                   equ 0005h
APFCON_SS1SEL_SIZE                       equ 0001h
APFCON_SS1SEL_LENGTH                     equ 0001h
APFCON_SS1SEL_MASK                       equ 0020h
APFCON_SDO1SEL_POSN                      equ 0006h
APFCON_SDO1SEL_POSITION                  equ 0006h
APFCON_SDO1SEL_SIZE                      equ 0001h
APFCON_SDO1SEL_LENGTH                    equ 0001h
APFCON_SDO1SEL_MASK                      equ 0040h

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 018Ch
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
ANSELA_ANSA4_POSN                        equ 0004h
ANSELA_ANSA4_POSITION                    equ 0004h
ANSELA_ANSA4_SIZE                        equ 0001h
ANSELA_ANSA4_LENGTH                      equ 0001h
ANSELA_ANSA4_MASK                        equ 0010h
ANSELA_ANSA5_POSN                        equ 0005h
ANSELA_ANSA5_POSITION                    equ 0005h
ANSELA_ANSA5_SIZE                        equ 0001h
ANSELA_ANSA5_LENGTH                      equ 0001h
ANSELA_ANSA5_MASK                        equ 0020h
ANSELA_ANSELA_POSN                       equ 0000h
ANSELA_ANSELA_POSITION                   equ 0000h
ANSELA_ANSELA_SIZE                       equ 0005h
ANSELA_ANSELA_LENGTH                     equ 0005h
ANSELA_ANSELA_MASK                       equ 001Fh

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 0191h
// bitfield definitions
PMADRL_PMADRL_POSN                       equ 0000h
PMADRL_PMADRL_POSITION                   equ 0000h
PMADRL_PMADRL_SIZE                       equ 0008h
PMADRL_PMADRL_LENGTH                     equ 0008h
PMADRL_PMADRL_MASK                       equ 00FFh

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 0192h
// bitfield definitions
PMADRH_PMADRH_POSN                       equ 0000h
PMADRH_PMADRH_POSITION                   equ 0000h
PMADRH_PMADRH_SIZE                       equ 0007h
PMADRH_PMADRH_LENGTH                     equ 0007h
PMADRH_PMADRH_MASK                       equ 007Fh

// Register: PMDATL
#define PMDATL PMDATL
PMDATL                                   equ 0193h
// bitfield definitions
PMDATL_PMDATL_POSN                       equ 0000h
PMDATL_PMDATL_POSITION                   equ 0000h
PMDATL_PMDATL_SIZE                       equ 0008h
PMDATL_PMDATL_LENGTH                     equ 0008h
PMDATL_PMDATL_MASK                       equ 00FFh

// Register: PMDATH
#define PMDATH PMDATH
PMDATH                                   equ 0194h
// bitfield definitions
PMDATH_PMDATH_POSN                       equ 0000h
PMDATH_PMDATH_POSITION                   equ 0000h
PMDATH_PMDATH_SIZE                       equ 0006h
PMDATH_PMDATH_LENGTH                     equ 0006h
PMDATH_PMDATH_MASK                       equ 003Fh

// Register: PMCON1
#define PMCON1 PMCON1
PMCON1                                   equ 0195h
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
PMCON2                                   equ 0196h
// bitfield definitions
PMCON2_PMCON2_POSN                       equ 0000h
PMCON2_PMCON2_POSITION                   equ 0000h
PMCON2_PMCON2_SIZE                       equ 0008h
PMCON2_PMCON2_LENGTH                     equ 0008h
PMCON2_PMCON2_MASK                       equ 00FFh

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 020Ch
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
WPUA_WPUA4_POSN                          equ 0004h
WPUA_WPUA4_POSITION                      equ 0004h
WPUA_WPUA4_SIZE                          equ 0001h
WPUA_WPUA4_LENGTH                        equ 0001h
WPUA_WPUA4_MASK                          equ 0010h
WPUA_WPUA5_POSN                          equ 0005h
WPUA_WPUA5_POSITION                      equ 0005h
WPUA_WPUA5_SIZE                          equ 0001h
WPUA_WPUA5_LENGTH                        equ 0001h
WPUA_WPUA5_MASK                          equ 0020h
WPUA_WPUA_POSN                           equ 0000h
WPUA_WPUA_POSITION                       equ 0000h
WPUA_WPUA_SIZE                           equ 0006h
WPUA_WPUA_LENGTH                         equ 0006h
WPUA_WPUA_MASK                           equ 003Fh

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
SSP1BUF                                  equ 0211h
// bitfield definitions
SSP1BUF_SSPBUF_POSN                      equ 0000h
SSP1BUF_SSPBUF_POSITION                  equ 0000h
SSP1BUF_SSPBUF_SIZE                      equ 0008h
SSP1BUF_SSPBUF_LENGTH                    equ 0008h
SSP1BUF_SSPBUF_MASK                      equ 00FFh

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
SSP1ADD                                  equ 0212h
// bitfield definitions
SSP1ADD_SSPADD_POSN                      equ 0000h
SSP1ADD_SSPADD_POSITION                  equ 0000h
SSP1ADD_SSPADD_SIZE                      equ 0008h
SSP1ADD_SSPADD_LENGTH                    equ 0008h
SSP1ADD_SSPADD_MASK                      equ 00FFh

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
SSP1MSK                                  equ 0213h
// bitfield definitions
SSP1MSK_SSPMSK_POSN                      equ 0000h
SSP1MSK_SSPMSK_POSITION                  equ 0000h
SSP1MSK_SSPMSK_SIZE                      equ 0008h
SSP1MSK_SSPMSK_LENGTH                    equ 0008h
SSP1MSK_SSPMSK_MASK                      equ 00FFh

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
SSP1STAT                                 equ 0214h
// bitfield definitions
SSP1STAT_BF_POSN                         equ 0000h
SSP1STAT_BF_POSITION                     equ 0000h
SSP1STAT_BF_SIZE                         equ 0001h
SSP1STAT_BF_LENGTH                       equ 0001h
SSP1STAT_BF_MASK                         equ 0001h
SSP1STAT_UA_POSN                         equ 0001h
SSP1STAT_UA_POSITION                     equ 0001h
SSP1STAT_UA_SIZE                         equ 0001h
SSP1STAT_UA_LENGTH                       equ 0001h
SSP1STAT_UA_MASK                         equ 0002h
SSP1STAT_R_nW_POSN                       equ 0002h
SSP1STAT_R_nW_POSITION                   equ 0002h
SSP1STAT_R_nW_SIZE                       equ 0001h
SSP1STAT_R_nW_LENGTH                     equ 0001h
SSP1STAT_R_nW_MASK                       equ 0004h
SSP1STAT_S_POSN                          equ 0003h
SSP1STAT_S_POSITION                      equ 0003h
SSP1STAT_S_SIZE                          equ 0001h
SSP1STAT_S_LENGTH                        equ 0001h
SSP1STAT_S_MASK                          equ 0008h
SSP1STAT_P_POSN                          equ 0004h
SSP1STAT_P_POSITION                      equ 0004h
SSP1STAT_P_SIZE                          equ 0001h
SSP1STAT_P_LENGTH                        equ 0001h
SSP1STAT_P_MASK                          equ 0010h
SSP1STAT_D_nA_POSN                       equ 0005h
SSP1STAT_D_nA_POSITION                   equ 0005h
SSP1STAT_D_nA_SIZE                       equ 0001h
SSP1STAT_D_nA_LENGTH                     equ 0001h
SSP1STAT_D_nA_MASK                       equ 0020h
SSP1STAT_CKE_POSN                        equ 0006h
SSP1STAT_CKE_POSITION                    equ 0006h
SSP1STAT_CKE_SIZE                        equ 0001h
SSP1STAT_CKE_LENGTH                      equ 0001h
SSP1STAT_CKE_MASK                        equ 0040h
SSP1STAT_SMP_POSN                        equ 0007h
SSP1STAT_SMP_POSITION                    equ 0007h
SSP1STAT_SMP_SIZE                        equ 0001h
SSP1STAT_SMP_LENGTH                      equ 0001h
SSP1STAT_SMP_MASK                        equ 0080h

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
SSP1CON1                                 equ 0215h
// bitfield definitions
SSP1CON1_SSPM_POSN                       equ 0000h
SSP1CON1_SSPM_POSITION                   equ 0000h
SSP1CON1_SSPM_SIZE                       equ 0004h
SSP1CON1_SSPM_LENGTH                     equ 0004h
SSP1CON1_SSPM_MASK                       equ 000Fh
SSP1CON1_CKP_POSN                        equ 0004h
SSP1CON1_CKP_POSITION                    equ 0004h
SSP1CON1_CKP_SIZE                        equ 0001h
SSP1CON1_CKP_LENGTH                      equ 0001h
SSP1CON1_CKP_MASK                        equ 0010h
SSP1CON1_SSPEN_POSN                      equ 0005h
SSP1CON1_SSPEN_POSITION                  equ 0005h
SSP1CON1_SSPEN_SIZE                      equ 0001h
SSP1CON1_SSPEN_LENGTH                    equ 0001h
SSP1CON1_SSPEN_MASK                      equ 0020h
SSP1CON1_SSPOV_POSN                      equ 0006h
SSP1CON1_SSPOV_POSITION                  equ 0006h
SSP1CON1_SSPOV_SIZE                      equ 0001h
SSP1CON1_SSPOV_LENGTH                    equ 0001h
SSP1CON1_SSPOV_MASK                      equ 0040h
SSP1CON1_WCOL_POSN                       equ 0007h
SSP1CON1_WCOL_POSITION                   equ 0007h
SSP1CON1_WCOL_SIZE                       equ 0001h
SSP1CON1_WCOL_LENGTH                     equ 0001h
SSP1CON1_WCOL_MASK                       equ 0080h
SSP1CON1_SSPM0_POSN                      equ 0000h
SSP1CON1_SSPM0_POSITION                  equ 0000h
SSP1CON1_SSPM0_SIZE                      equ 0001h
SSP1CON1_SSPM0_LENGTH                    equ 0001h
SSP1CON1_SSPM0_MASK                      equ 0001h
SSP1CON1_SSPM1_POSN                      equ 0001h
SSP1CON1_SSPM1_POSITION                  equ 0001h
SSP1CON1_SSPM1_SIZE                      equ 0001h
SSP1CON1_SSPM1_LENGTH                    equ 0001h
SSP1CON1_SSPM1_MASK                      equ 0002h
SSP1CON1_SSPM2_POSN                      equ 0002h
SSP1CON1_SSPM2_POSITION                  equ 0002h
SSP1CON1_SSPM2_SIZE                      equ 0001h
SSP1CON1_SSPM2_LENGTH                    equ 0001h
SSP1CON1_SSPM2_MASK                      equ 0004h
SSP1CON1_SSPM3_POSN                      equ 0003h
SSP1CON1_SSPM3_POSITION                  equ 0003h
SSP1CON1_SSPM3_SIZE                      equ 0001h
SSP1CON1_SSPM3_LENGTH                    equ 0001h
SSP1CON1_SSPM3_MASK                      equ 0008h

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
SSP1CON2                                 equ 0216h
// bitfield definitions
SSP1CON2_SEN_POSN                        equ 0000h
SSP1CON2_SEN_POSITION                    equ 0000h
SSP1CON2_SEN_SIZE                        equ 0001h
SSP1CON2_SEN_LENGTH                      equ 0001h
SSP1CON2_SEN_MASK                        equ 0001h
SSP1CON2_RSEN_POSN                       equ 0001h
SSP1CON2_RSEN_POSITION                   equ 0001h
SSP1CON2_RSEN_SIZE                       equ 0001h
SSP1CON2_RSEN_LENGTH                     equ 0001h
SSP1CON2_RSEN_MASK                       equ 0002h
SSP1CON2_PEN_POSN                        equ 0002h
SSP1CON2_PEN_POSITION                    equ 0002h
SSP1CON2_PEN_SIZE                        equ 0001h
SSP1CON2_PEN_LENGTH                      equ 0001h
SSP1CON2_PEN_MASK                        equ 0004h
SSP1CON2_RCEN_POSN                       equ 0003h
SSP1CON2_RCEN_POSITION                   equ 0003h
SSP1CON2_RCEN_SIZE                       equ 0001h
SSP1CON2_RCEN_LENGTH                     equ 0001h
SSP1CON2_RCEN_MASK                       equ 0008h
SSP1CON2_ACKEN_POSN                      equ 0004h
SSP1CON2_ACKEN_POSITION                  equ 0004h
SSP1CON2_ACKEN_SIZE                      equ 0001h
SSP1CON2_ACKEN_LENGTH                    equ 0001h
SSP1CON2_ACKEN_MASK                      equ 0010h
SSP1CON2_ACKDT_POSN                      equ 0005h
SSP1CON2_ACKDT_POSITION                  equ 0005h
SSP1CON2_ACKDT_SIZE                      equ 0001h
SSP1CON2_ACKDT_LENGTH                    equ 0001h
SSP1CON2_ACKDT_MASK                      equ 0020h
SSP1CON2_ACKSTAT_POSN                    equ 0006h
SSP1CON2_ACKSTAT_POSITION                equ 0006h
SSP1CON2_ACKSTAT_SIZE                    equ 0001h
SSP1CON2_ACKSTAT_LENGTH                  equ 0001h
SSP1CON2_ACKSTAT_MASK                    equ 0040h
SSP1CON2_GCEN_POSN                       equ 0007h
SSP1CON2_GCEN_POSITION                   equ 0007h
SSP1CON2_GCEN_SIZE                       equ 0001h
SSP1CON2_GCEN_LENGTH                     equ 0001h
SSP1CON2_GCEN_MASK                       equ 0080h

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
SSP1CON3                                 equ 0217h
// bitfield definitions
SSP1CON3_DHEN_POSN                       equ 0000h
SSP1CON3_DHEN_POSITION                   equ 0000h
SSP1CON3_DHEN_SIZE                       equ 0001h
SSP1CON3_DHEN_LENGTH                     equ 0001h
SSP1CON3_DHEN_MASK                       equ 0001h
SSP1CON3_AHEN_POSN                       equ 0001h
SSP1CON3_AHEN_POSITION                   equ 0001h
SSP1CON3_AHEN_SIZE                       equ 0001h
SSP1CON3_AHEN_LENGTH                     equ 0001h
SSP1CON3_AHEN_MASK                       equ 0002h
SSP1CON3_SBCDE_POSN                      equ 0002h
SSP1CON3_SBCDE_POSITION                  equ 0002h
SSP1CON3_SBCDE_SIZE                      equ 0001h
SSP1CON3_SBCDE_LENGTH                    equ 0001h
SSP1CON3_SBCDE_MASK                      equ 0004h
SSP1CON3_SDAHT_POSN                      equ 0003h
SSP1CON3_SDAHT_POSITION                  equ 0003h
SSP1CON3_SDAHT_SIZE                      equ 0001h
SSP1CON3_SDAHT_LENGTH                    equ 0001h
SSP1CON3_SDAHT_MASK                      equ 0008h
SSP1CON3_BOEN_POSN                       equ 0004h
SSP1CON3_BOEN_POSITION                   equ 0004h
SSP1CON3_BOEN_SIZE                       equ 0001h
SSP1CON3_BOEN_LENGTH                     equ 0001h
SSP1CON3_BOEN_MASK                       equ 0010h
SSP1CON3_SCIE_POSN                       equ 0005h
SSP1CON3_SCIE_POSITION                   equ 0005h
SSP1CON3_SCIE_SIZE                       equ 0001h
SSP1CON3_SCIE_LENGTH                     equ 0001h
SSP1CON3_SCIE_MASK                       equ 0020h
SSP1CON3_PCIE_POSN                       equ 0006h
SSP1CON3_PCIE_POSITION                   equ 0006h
SSP1CON3_PCIE_SIZE                       equ 0001h
SSP1CON3_PCIE_LENGTH                     equ 0001h
SSP1CON3_PCIE_MASK                       equ 0040h
SSP1CON3_ACKTIM_POSN                     equ 0007h
SSP1CON3_ACKTIM_POSITION                 equ 0007h
SSP1CON3_ACKTIM_SIZE                     equ 0001h
SSP1CON3_ACKTIM_LENGTH                   equ 0001h
SSP1CON3_ACKTIM_MASK                     equ 0080h

// Register: IOCAP
#define IOCAP IOCAP
IOCAP                                    equ 0391h
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
IOCAP_IOCAP4_POSN                        equ 0004h
IOCAP_IOCAP4_POSITION                    equ 0004h
IOCAP_IOCAP4_SIZE                        equ 0001h
IOCAP_IOCAP4_LENGTH                      equ 0001h
IOCAP_IOCAP4_MASK                        equ 0010h
IOCAP_IOCAP5_POSN                        equ 0005h
IOCAP_IOCAP5_POSITION                    equ 0005h
IOCAP_IOCAP5_SIZE                        equ 0001h
IOCAP_IOCAP5_LENGTH                      equ 0001h
IOCAP_IOCAP5_MASK                        equ 0020h
IOCAP_IOCAP_POSN                         equ 0000h
IOCAP_IOCAP_POSITION                     equ 0000h
IOCAP_IOCAP_SIZE                         equ 0006h
IOCAP_IOCAP_LENGTH                       equ 0006h
IOCAP_IOCAP_MASK                         equ 003Fh

// Register: IOCAN
#define IOCAN IOCAN
IOCAN                                    equ 0392h
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
IOCAN_IOCAN4_POSN                        equ 0004h
IOCAN_IOCAN4_POSITION                    equ 0004h
IOCAN_IOCAN4_SIZE                        equ 0001h
IOCAN_IOCAN4_LENGTH                      equ 0001h
IOCAN_IOCAN4_MASK                        equ 0010h
IOCAN_IOCAN5_POSN                        equ 0005h
IOCAN_IOCAN5_POSITION                    equ 0005h
IOCAN_IOCAN5_SIZE                        equ 0001h
IOCAN_IOCAN5_LENGTH                      equ 0001h
IOCAN_IOCAN5_MASK                        equ 0020h
IOCAN_IOCAN_POSN                         equ 0000h
IOCAN_IOCAN_POSITION                     equ 0000h
IOCAN_IOCAN_SIZE                         equ 0006h
IOCAN_IOCAN_LENGTH                       equ 0006h
IOCAN_IOCAN_MASK                         equ 003Fh

// Register: IOCAF
#define IOCAF IOCAF
IOCAF                                    equ 0393h
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
IOCAF_IOCAF4_POSN                        equ 0004h
IOCAF_IOCAF4_POSITION                    equ 0004h
IOCAF_IOCAF4_SIZE                        equ 0001h
IOCAF_IOCAF4_LENGTH                      equ 0001h
IOCAF_IOCAF4_MASK                        equ 0010h
IOCAF_IOCAF5_POSN                        equ 0005h
IOCAF_IOCAF5_POSITION                    equ 0005h
IOCAF_IOCAF5_SIZE                        equ 0001h
IOCAF_IOCAF5_LENGTH                      equ 0001h
IOCAF_IOCAF5_MASK                        equ 0020h
IOCAF_IOCAF_POSN                         equ 0000h
IOCAF_IOCAF_POSITION                     equ 0000h
IOCAF_IOCAF_SIZE                         equ 0006h
IOCAF_IOCAF_LENGTH                       equ 0006h
IOCAF_IOCAF_MASK                         equ 003Fh

// Register: STATUS_SHAD
#define STATUS_SHAD STATUS_SHAD
STATUS_SHAD                              equ 0FE4h
// bitfield definitions
STATUS_SHAD_C_SHAD_POSN                  equ 0000h
STATUS_SHAD_C_SHAD_POSITION              equ 0000h
STATUS_SHAD_C_SHAD_SIZE                  equ 0001h
STATUS_SHAD_C_SHAD_LENGTH                equ 0001h
STATUS_SHAD_C_SHAD_MASK                  equ 0001h
STATUS_SHAD_DC_SHAD_POSN                 equ 0001h
STATUS_SHAD_DC_SHAD_POSITION             equ 0001h
STATUS_SHAD_DC_SHAD_SIZE                 equ 0001h
STATUS_SHAD_DC_SHAD_LENGTH               equ 0001h
STATUS_SHAD_DC_SHAD_MASK                 equ 0002h
STATUS_SHAD_Z_SHAD_POSN                  equ 0002h
STATUS_SHAD_Z_SHAD_POSITION              equ 0002h
STATUS_SHAD_Z_SHAD_SIZE                  equ 0001h
STATUS_SHAD_Z_SHAD_LENGTH                equ 0001h
STATUS_SHAD_Z_SHAD_MASK                  equ 0004h

// Register: WREG_SHAD
#define WREG_SHAD WREG_SHAD
WREG_SHAD                                equ 0FE5h
// bitfield definitions
WREG_SHAD_WREG_SHAD_POSN                 equ 0000h
WREG_SHAD_WREG_SHAD_POSITION             equ 0000h
WREG_SHAD_WREG_SHAD_SIZE                 equ 0008h
WREG_SHAD_WREG_SHAD_LENGTH               equ 0008h
WREG_SHAD_WREG_SHAD_MASK                 equ 00FFh

// Register: BSR_SHAD
#define BSR_SHAD BSR_SHAD
BSR_SHAD                                 equ 0FE6h
// bitfield definitions
BSR_SHAD_BSR_SHAD_POSN                   equ 0000h
BSR_SHAD_BSR_SHAD_POSITION               equ 0000h
BSR_SHAD_BSR_SHAD_SIZE                   equ 0005h
BSR_SHAD_BSR_SHAD_LENGTH                 equ 0005h
BSR_SHAD_BSR_SHAD_MASK                   equ 001Fh

// Register: PCLATH_SHAD
#define PCLATH_SHAD PCLATH_SHAD
PCLATH_SHAD                              equ 0FE7h
// bitfield definitions
PCLATH_SHAD_PCLATH_SHAD_POSN             equ 0000h
PCLATH_SHAD_PCLATH_SHAD_POSITION         equ 0000h
PCLATH_SHAD_PCLATH_SHAD_SIZE             equ 0007h
PCLATH_SHAD_PCLATH_SHAD_LENGTH           equ 0007h
PCLATH_SHAD_PCLATH_SHAD_MASK             equ 007Fh

// Register: FSR0L_SHAD
#define FSR0L_SHAD FSR0L_SHAD
FSR0L_SHAD                               equ 0FE8h
// bitfield definitions
FSR0L_SHAD_FSR0L_SHAD_POSN               equ 0000h
FSR0L_SHAD_FSR0L_SHAD_POSITION           equ 0000h
FSR0L_SHAD_FSR0L_SHAD_SIZE               equ 0008h
FSR0L_SHAD_FSR0L_SHAD_LENGTH             equ 0008h
FSR0L_SHAD_FSR0L_SHAD_MASK               equ 00FFh

// Register: FSR0H_SHAD
#define FSR0H_SHAD FSR0H_SHAD
FSR0H_SHAD                               equ 0FE9h
// bitfield definitions
FSR0H_SHAD_FSR0H_SHAD_POSN               equ 0000h
FSR0H_SHAD_FSR0H_SHAD_POSITION           equ 0000h
FSR0H_SHAD_FSR0H_SHAD_SIZE               equ 0008h
FSR0H_SHAD_FSR0H_SHAD_LENGTH             equ 0008h
FSR0H_SHAD_FSR0H_SHAD_MASK               equ 00FFh

// Register: FSR1L_SHAD
#define FSR1L_SHAD FSR1L_SHAD
FSR1L_SHAD                               equ 0FEAh
// bitfield definitions
FSR1L_SHAD_FSR1L_SHAD_POSN               equ 0000h
FSR1L_SHAD_FSR1L_SHAD_POSITION           equ 0000h
FSR1L_SHAD_FSR1L_SHAD_SIZE               equ 0008h
FSR1L_SHAD_FSR1L_SHAD_LENGTH             equ 0008h
FSR1L_SHAD_FSR1L_SHAD_MASK               equ 00FFh

// Register: FSR1H_SHAD
#define FSR1H_SHAD FSR1H_SHAD
FSR1H_SHAD                               equ 0FEBh
// bitfield definitions
FSR1H_SHAD_FSR1H_SHAD_POSN               equ 0000h
FSR1H_SHAD_FSR1H_SHAD_POSITION           equ 0000h
FSR1H_SHAD_FSR1H_SHAD_SIZE               equ 0008h
FSR1H_SHAD_FSR1H_SHAD_LENGTH             equ 0008h
FSR1H_SHAD_FSR1H_SHAD_MASK               equ 00FFh

// Register: STKPTR
#define STKPTR STKPTR
STKPTR                                   equ 0FEDh
// bitfield definitions
STKPTR_STKPTR_POSN                       equ 0000h
STKPTR_STKPTR_POSITION                   equ 0000h
STKPTR_STKPTR_SIZE                       equ 0005h
STKPTR_STKPTR_LENGTH                     equ 0005h
STKPTR_STKPTR_MASK                       equ 001Fh

// Register: TOSL
#define TOSL TOSL
TOSL                                     equ 0FEEh
// bitfield definitions
TOSL_TOSL_POSN                           equ 0000h
TOSL_TOSL_POSITION                       equ 0000h
TOSL_TOSL_SIZE                           equ 0008h
TOSL_TOSL_LENGTH                         equ 0008h
TOSL_TOSL_MASK                           equ 00FFh

// Register: TOSH
#define TOSH TOSH
TOSH                                     equ 0FEFh
// bitfield definitions
TOSH_TOSH_POSN                           equ 0000h
TOSH_TOSH_POSITION                       equ 0000h
TOSH_TOSH_SIZE                           equ 0007h
TOSH_TOSH_LENGTH                         equ 0007h
TOSH_TOSH_MASK                           equ 007Fh

// Register: AADCON0
#define AADCON0 AADCON0
AADCON0                                  equ 0711h
// bitfield definitions
AADCON0_ADON_POSN                        equ 0000h
AADCON0_ADON_POSITION                    equ 0000h
AADCON0_ADON_SIZE                        equ 0001h
AADCON0_ADON_LENGTH                      equ 0001h
AADCON0_ADON_MASK                        equ 0001h
AADCON0_GO_nDONE_POSN                    equ 0001h
AADCON0_GO_nDONE_POSITION                equ 0001h
AADCON0_GO_nDONE_SIZE                    equ 0001h
AADCON0_GO_nDONE_LENGTH                  equ 0001h
AADCON0_GO_nDONE_MASK                    equ 0002h
AADCON0_CHS_POSN                         equ 0002h
AADCON0_CHS_POSITION                     equ 0002h
AADCON0_CHS_SIZE                         equ 0005h
AADCON0_CHS_LENGTH                       equ 0005h
AADCON0_CHS_MASK                         equ 007Ch
AADCON0_CHS0_POSN                        equ 0002h
AADCON0_CHS0_POSITION                    equ 0002h
AADCON0_CHS0_SIZE                        equ 0001h
AADCON0_CHS0_LENGTH                      equ 0001h
AADCON0_CHS0_MASK                        equ 0004h
AADCON0_CHS1_POSN                        equ 0003h
AADCON0_CHS1_POSITION                    equ 0003h
AADCON0_CHS1_SIZE                        equ 0001h
AADCON0_CHS1_LENGTH                      equ 0001h
AADCON0_CHS1_MASK                        equ 0008h
AADCON0_CHS2_POSN                        equ 0004h
AADCON0_CHS2_POSITION                    equ 0004h
AADCON0_CHS2_SIZE                        equ 0001h
AADCON0_CHS2_LENGTH                      equ 0001h
AADCON0_CHS2_MASK                        equ 0010h
AADCON0_CHS3_POSN                        equ 0005h
AADCON0_CHS3_POSITION                    equ 0005h
AADCON0_CHS3_SIZE                        equ 0001h
AADCON0_CHS3_LENGTH                      equ 0001h
AADCON0_CHS3_MASK                        equ 0020h
AADCON0_CHS4_POSN                        equ 0006h
AADCON0_CHS4_POSITION                    equ 0006h
AADCON0_CHS4_SIZE                        equ 0001h
AADCON0_CHS4_LENGTH                      equ 0001h
AADCON0_CHS4_MASK                        equ 0040h

// Register: AADCON1
#define AADCON1 AADCON1
AADCON1                                  equ 0712h
// bitfield definitions
AADCON1_ADPREF_POSN                      equ 0000h
AADCON1_ADPREF_POSITION                  equ 0000h
AADCON1_ADPREF_SIZE                      equ 0002h
AADCON1_ADPREF_LENGTH                    equ 0002h
AADCON1_ADPREF_MASK                      equ 0003h
AADCON1_ADCS_POSN                        equ 0004h
AADCON1_ADCS_POSITION                    equ 0004h
AADCON1_ADCS_SIZE                        equ 0003h
AADCON1_ADCS_LENGTH                      equ 0003h
AADCON1_ADCS_MASK                        equ 0070h
AADCON1_ADFM_POSN                        equ 0007h
AADCON1_ADFM_POSITION                    equ 0007h
AADCON1_ADFM_SIZE                        equ 0001h
AADCON1_ADFM_LENGTH                      equ 0001h
AADCON1_ADFM_MASK                        equ 0080h
AADCON1_ADPREF0_POSN                     equ 0000h
AADCON1_ADPREF0_POSITION                 equ 0000h
AADCON1_ADPREF0_SIZE                     equ 0001h
AADCON1_ADPREF0_LENGTH                   equ 0001h
AADCON1_ADPREF0_MASK                     equ 0001h
AADCON1_ADPREF1_POSN                     equ 0001h
AADCON1_ADPREF1_POSITION                 equ 0001h
AADCON1_ADPREF1_SIZE                     equ 0001h
AADCON1_ADPREF1_LENGTH                   equ 0001h
AADCON1_ADPREF1_MASK                     equ 0002h
AADCON1_ADCS0_POSN                       equ 0004h
AADCON1_ADCS0_POSITION                   equ 0004h
AADCON1_ADCS0_SIZE                       equ 0001h
AADCON1_ADCS0_LENGTH                     equ 0001h
AADCON1_ADCS0_MASK                       equ 0010h
AADCON1_ADCS1_POSN                       equ 0005h
AADCON1_ADCS1_POSITION                   equ 0005h
AADCON1_ADCS1_SIZE                       equ 0001h
AADCON1_ADCS1_LENGTH                     equ 0001h
AADCON1_ADCS1_MASK                       equ 0020h
AADCON1_ADCS2_POSN                       equ 0006h
AADCON1_ADCS2_POSITION                   equ 0006h
AADCON1_ADCS2_SIZE                       equ 0001h
AADCON1_ADCS2_LENGTH                     equ 0001h
AADCON1_ADCS2_MASK                       equ 0040h

// Register: AADCON2
#define AADCON2 AADCON2
AADCON2                                  equ 0713h
// bitfield definitions
AADCON2_TRIGSEL_POSN                     equ 0004h
AADCON2_TRIGSEL_POSITION                 equ 0004h
AADCON2_TRIGSEL_SIZE                     equ 0003h
AADCON2_TRIGSEL_LENGTH                   equ 0003h
AADCON2_TRIGSEL_MASK                     equ 0070h
AADCON2_TRIGSEL0_POSN                    equ 0004h
AADCON2_TRIGSEL0_POSITION                equ 0004h
AADCON2_TRIGSEL0_SIZE                    equ 0001h
AADCON2_TRIGSEL0_LENGTH                  equ 0001h
AADCON2_TRIGSEL0_MASK                    equ 0010h
AADCON2_TRIGSEL1_POSN                    equ 0005h
AADCON2_TRIGSEL1_POSITION                equ 0005h
AADCON2_TRIGSEL1_SIZE                    equ 0001h
AADCON2_TRIGSEL1_LENGTH                  equ 0001h
AADCON2_TRIGSEL1_MASK                    equ 0020h
AADCON2_TRIGSEL2_POSN                    equ 0006h
AADCON2_TRIGSEL2_POSITION                equ 0006h
AADCON2_TRIGSEL2_SIZE                    equ 0001h
AADCON2_TRIGSEL2_LENGTH                  equ 0001h
AADCON2_TRIGSEL2_MASK                    equ 0040h

// Register: AADCON3
#define AADCON3 AADCON3
AADCON3                                  equ 0714h
// bitfield definitions
AADCON3_ADDSEN_POSN                      equ 0000h
AADCON3_ADDSEN_POSITION                  equ 0000h
AADCON3_ADDSEN_SIZE                      equ 0001h
AADCON3_ADDSEN_LENGTH                    equ 0001h
AADCON3_ADDSEN_MASK                      equ 0001h
AADCON3_ADIPEN_POSN                      equ 0001h
AADCON3_ADIPEN_POSITION                  equ 0001h
AADCON3_ADIPEN_SIZE                      equ 0001h
AADCON3_ADIPEN_LENGTH                    equ 0001h
AADCON3_ADIPEN_MASK                      equ 0002h
AADCON3_ADOOEN_POSN                      equ 0003h
AADCON3_ADOOEN_POSITION                  equ 0003h
AADCON3_ADOOEN_SIZE                      equ 0001h
AADCON3_ADOOEN_LENGTH                    equ 0001h
AADCON3_ADOOEN_MASK                      equ 0008h
AADCON3_ADOEN_POSN                       equ 0004h
AADCON3_ADOEN_POSITION                   equ 0004h
AADCON3_ADOEN_SIZE                       equ 0001h
AADCON3_ADOEN_LENGTH                     equ 0001h
AADCON3_ADOEN_MASK                       equ 0010h
AADCON3_ADIPPOL_POSN                     equ 0006h
AADCON3_ADIPPOL_POSITION                 equ 0006h
AADCON3_ADIPPOL_SIZE                     equ 0001h
AADCON3_ADIPPOL_LENGTH                   equ 0001h
AADCON3_ADIPPOL_MASK                     equ 0040h
AADCON3_ADEPPOL_POSN                     equ 0007h
AADCON3_ADEPPOL_POSITION                 equ 0007h
AADCON3_ADEPPOL_SIZE                     equ 0001h
AADCON3_ADEPPOL_LENGTH                   equ 0001h
AADCON3_ADEPPOL_MASK                     equ 0080h

// Register: AADSTAT
#define AADSTAT AADSTAT
AADSTAT                                  equ 0715h
// bitfield definitions
AADSTAT_ADSTG_POSN                       equ 0000h
AADSTAT_ADSTG_POSITION                   equ 0000h
AADSTAT_ADSTG_SIZE                       equ 0002h
AADSTAT_ADSTG_LENGTH                     equ 0002h
AADSTAT_ADSTG_MASK                       equ 0003h
AADSTAT_ADCONV_POSN                      equ 0002h
AADSTAT_ADCONV_POSITION                  equ 0002h
AADSTAT_ADCONV_SIZE                      equ 0001h
AADSTAT_ADCONV_LENGTH                    equ 0001h
AADSTAT_ADCONV_MASK                      equ 0004h
AADSTAT_ADSTG0_POSN                      equ 0000h
AADSTAT_ADSTG0_POSITION                  equ 0000h
AADSTAT_ADSTG0_SIZE                      equ 0001h
AADSTAT_ADSTG0_LENGTH                    equ 0001h
AADSTAT_ADSTG0_MASK                      equ 0001h
AADSTAT_ADSTG1_POSN                      equ 0001h
AADSTAT_ADSTG1_POSITION                  equ 0001h
AADSTAT_ADSTG1_SIZE                      equ 0001h
AADSTAT_ADSTG1_LENGTH                    equ 0001h
AADSTAT_ADSTG1_MASK                      equ 0002h

// Register: AADPRE
#define AADPRE AADPRE
AADPRE                                   equ 0716h
// bitfield definitions
AADPRE_ADPRE_POSN                        equ 0000h
AADPRE_ADPRE_POSITION                    equ 0000h
AADPRE_ADPRE_SIZE                        equ 0007h
AADPRE_ADPRE_LENGTH                      equ 0007h
AADPRE_ADPRE_MASK                        equ 007Fh
AADPRE_ADPRE0_POSN                       equ 0000h
AADPRE_ADPRE0_POSITION                   equ 0000h
AADPRE_ADPRE0_SIZE                       equ 0001h
AADPRE_ADPRE0_LENGTH                     equ 0001h
AADPRE_ADPRE0_MASK                       equ 0001h
AADPRE_ADPRE1_POSN                       equ 0001h
AADPRE_ADPRE1_POSITION                   equ 0001h
AADPRE_ADPRE1_SIZE                       equ 0001h
AADPRE_ADPRE1_LENGTH                     equ 0001h
AADPRE_ADPRE1_MASK                       equ 0002h
AADPRE_ADPRE2_POSN                       equ 0002h
AADPRE_ADPRE2_POSITION                   equ 0002h
AADPRE_ADPRE2_SIZE                       equ 0001h
AADPRE_ADPRE2_LENGTH                     equ 0001h
AADPRE_ADPRE2_MASK                       equ 0004h
AADPRE_ADPRE3_POSN                       equ 0003h
AADPRE_ADPRE3_POSITION                   equ 0003h
AADPRE_ADPRE3_SIZE                       equ 0001h
AADPRE_ADPRE3_LENGTH                     equ 0001h
AADPRE_ADPRE3_MASK                       equ 0008h
AADPRE_ADPRE4_POSN                       equ 0004h
AADPRE_ADPRE4_POSITION                   equ 0004h
AADPRE_ADPRE4_SIZE                       equ 0001h
AADPRE_ADPRE4_LENGTH                     equ 0001h
AADPRE_ADPRE4_MASK                       equ 0010h
AADPRE_ADPRE5_POSN                       equ 0005h
AADPRE_ADPRE5_POSITION                   equ 0005h
AADPRE_ADPRE5_SIZE                       equ 0001h
AADPRE_ADPRE5_LENGTH                     equ 0001h
AADPRE_ADPRE5_MASK                       equ 0020h
AADPRE_ADPRE6_POSN                       equ 0006h
AADPRE_ADPRE6_POSITION                   equ 0006h
AADPRE_ADPRE6_SIZE                       equ 0001h
AADPRE_ADPRE6_LENGTH                     equ 0001h
AADPRE_ADPRE6_MASK                       equ 0040h

// Register: AADACQ
#define AADACQ AADACQ
AADACQ                                   equ 0717h
// bitfield definitions
AADACQ_ADACQ_POSN                        equ 0000h
AADACQ_ADACQ_POSITION                    equ 0000h
AADACQ_ADACQ_SIZE                        equ 0007h
AADACQ_ADACQ_LENGTH                      equ 0007h
AADACQ_ADACQ_MASK                        equ 007Fh
AADACQ_ADACQ0_POSN                       equ 0000h
AADACQ_ADACQ0_POSITION                   equ 0000h
AADACQ_ADACQ0_SIZE                       equ 0001h
AADACQ_ADACQ0_LENGTH                     equ 0001h
AADACQ_ADACQ0_MASK                       equ 0001h
AADACQ_ADACQ1_POSN                       equ 0001h
AADACQ_ADACQ1_POSITION                   equ 0001h
AADACQ_ADACQ1_SIZE                       equ 0001h
AADACQ_ADACQ1_LENGTH                     equ 0001h
AADACQ_ADACQ1_MASK                       equ 0002h
AADACQ_ADACQ2_POSN                       equ 0002h
AADACQ_ADACQ2_POSITION                   equ 0002h
AADACQ_ADACQ2_SIZE                       equ 0001h
AADACQ_ADACQ2_LENGTH                     equ 0001h
AADACQ_ADACQ2_MASK                       equ 0004h
AADACQ_ADACQ3_POSN                       equ 0003h
AADACQ_ADACQ3_POSITION                   equ 0003h
AADACQ_ADACQ3_SIZE                       equ 0001h
AADACQ_ADACQ3_LENGTH                     equ 0001h
AADACQ_ADACQ3_MASK                       equ 0008h
AADACQ_ADACQ4_POSN                       equ 0004h
AADACQ_ADACQ4_POSITION                   equ 0004h
AADACQ_ADACQ4_SIZE                       equ 0001h
AADACQ_ADACQ4_LENGTH                     equ 0001h
AADACQ_ADACQ4_MASK                       equ 0010h
AADACQ_ADACQ5_POSN                       equ 0005h
AADACQ_ADACQ5_POSITION                   equ 0005h
AADACQ_ADACQ5_SIZE                       equ 0001h
AADACQ_ADACQ5_LENGTH                     equ 0001h
AADACQ_ADACQ5_MASK                       equ 0020h
AADACQ_ADACQ6_POSN                       equ 0006h
AADACQ_ADACQ6_POSITION                   equ 0006h
AADACQ_ADACQ6_SIZE                       equ 0001h
AADACQ_ADACQ6_LENGTH                     equ 0001h
AADACQ_ADACQ6_MASK                       equ 0040h

// Register: AADGRD
#define AADGRD AADGRD
AADGRD                                   equ 0718h
// bitfield definitions
AADGRD_GRDPOL_POSN                       equ 0005h
AADGRD_GRDPOL_POSITION                   equ 0005h
AADGRD_GRDPOL_SIZE                       equ 0001h
AADGRD_GRDPOL_LENGTH                     equ 0001h
AADGRD_GRDPOL_MASK                       equ 0020h
AADGRD_GRDAOE_POSN                       equ 0006h
AADGRD_GRDAOE_POSITION                   equ 0006h
AADGRD_GRDAOE_SIZE                       equ 0001h
AADGRD_GRDAOE_LENGTH                     equ 0001h
AADGRD_GRDAOE_MASK                       equ 0040h
AADGRD_GRDBOE_POSN                       equ 0007h
AADGRD_GRDBOE_POSITION                   equ 0007h
AADGRD_GRDBOE_SIZE                       equ 0001h
AADGRD_GRDBOE_LENGTH                     equ 0001h
AADGRD_GRDBOE_MASK                       equ 0080h

// Register: AADCAP
#define AADCAP AADCAP
AADCAP                                   equ 0719h
// bitfield definitions
AADCAP_ADDCAP_POSN                       equ 0000h
AADCAP_ADDCAP_POSITION                   equ 0000h
AADCAP_ADDCAP_SIZE                       equ 0003h
AADCAP_ADDCAP_LENGTH                     equ 0003h
AADCAP_ADDCAP_MASK                       equ 0007h
AADCAP_ADDCAP0_POSN                      equ 0000h
AADCAP_ADDCAP0_POSITION                  equ 0000h
AADCAP_ADDCAP0_SIZE                      equ 0001h
AADCAP_ADDCAP0_LENGTH                    equ 0001h
AADCAP_ADDCAP0_MASK                      equ 0001h
AADCAP_ADDCAP1_POSN                      equ 0001h
AADCAP_ADDCAP1_POSITION                  equ 0001h
AADCAP_ADDCAP1_SIZE                      equ 0001h
AADCAP_ADDCAP1_LENGTH                    equ 0001h
AADCAP_ADDCAP1_MASK                      equ 0002h
AADCAP_ADDCAP2_POSN                      equ 0002h
AADCAP_ADDCAP2_POSITION                  equ 0002h
AADCAP_ADDCAP2_SIZE                      equ 0001h
AADCAP_ADDCAP2_LENGTH                    equ 0001h
AADCAP_ADDCAP2_MASK                      equ 0004h

// Register: AADRES0L
#define AADRES0L AADRES0L
AADRES0L                                 equ 071Ah
// bitfield definitions
AADRES0L_ADRES0L_POSN                    equ 0000h
AADRES0L_ADRES0L_POSITION                equ 0000h
AADRES0L_ADRES0L_SIZE                    equ 0008h
AADRES0L_ADRES0L_LENGTH                  equ 0008h
AADRES0L_ADRES0L_MASK                    equ 00FFh

// Register: AADRES0H
#define AADRES0H AADRES0H
AADRES0H                                 equ 071Bh
// bitfield definitions
AADRES0H_ADRES0H_POSN                    equ 0000h
AADRES0H_ADRES0H_POSITION                equ 0000h
AADRES0H_ADRES0H_SIZE                    equ 0008h
AADRES0H_ADRES0H_LENGTH                  equ 0008h
AADRES0H_ADRES0H_MASK                    equ 00FFh

// Register: AADRES1L
#define AADRES1L AADRES1L
AADRES1L                                 equ 071Ch
// bitfield definitions
AADRES1L_ADRES1L_POSN                    equ 0000h
AADRES1L_ADRES1L_POSITION                equ 0000h
AADRES1L_ADRES1L_SIZE                    equ 0008h
AADRES1L_ADRES1L_LENGTH                  equ 0008h
AADRES1L_ADRES1L_MASK                    equ 00FFh

// Register: AADRES1H
#define AADRES1H AADRES1H
AADRES1H                                 equ 071Dh
// bitfield definitions
AADRES1H_ADRES1H_POSN                    equ 0000h
AADRES1H_ADRES1H_POSITION                equ 0000h
AADRES1H_ADRES1H_SIZE                    equ 0008h
AADRES1H_ADRES1H_LENGTH                  equ 0008h
AADRES1H_ADRES1H_MASK                    equ 00FFh

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ACKDT                            BANKMASK(SSP1CON2), 5
#define ACKEN                            BANKMASK(SSP1CON2), 4
#define ACKSTAT                          BANKMASK(SSP1CON2), 6
#define ACKTIM                           BANKMASK(SSP1CON3), 7
#define ADACQ0                           BANKMASK(AADACQ), 0
#define ADACQ1                           BANKMASK(AADACQ), 1
#define ADACQ2                           BANKMASK(AADACQ), 2
#define ADACQ3                           BANKMASK(AADACQ), 3
#define ADACQ4                           BANKMASK(AADACQ), 4
#define ADACQ5                           BANKMASK(AADACQ), 5
#define ADACQ6                           BANKMASK(AADACQ), 6
#define ADCONV                           BANKMASK(AADSTAT), 2
#define ADDCAP0                          BANKMASK(AADCAP), 0
#define ADDCAP1                          BANKMASK(AADCAP), 1
#define ADDCAP2                          BANKMASK(AADCAP), 2
#define ADDSEN                           BANKMASK(AADCON3), 0
#define ADEPPOL                          BANKMASK(AADCON3), 7
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADGO                             BANKMASK(ADCON0), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADIPEN                           BANKMASK(AADCON3), 1
#define ADIPPOL                          BANKMASK(AADCON3), 6
#define ADOEN                            BANKMASK(AADCON3), 4
#define ADOOEN                           BANKMASK(AADCON3), 3
#define ADPRE0                           BANKMASK(AADPRE), 0
#define ADPRE1                           BANKMASK(AADPRE), 1
#define ADPRE2                           BANKMASK(AADPRE), 2
#define ADPRE3                           BANKMASK(AADPRE), 3
#define ADPRE4                           BANKMASK(AADPRE), 4
#define ADPRE5                           BANKMASK(AADPRE), 5
#define ADPRE6                           BANKMASK(AADPRE), 6
#define ADSTG0                           BANKMASK(AADSTAT), 0
#define ADSTG1                           BANKMASK(AADSTAT), 1
#define AHEN                             BANKMASK(SSP1CON3), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
#define BCL1IE                           BANKMASK(PIE2), 3
#define BCL1IF                           BANKMASK(PIR2), 3
#define BF                               BANKMASK(SSP1STAT), 0
#define BOEN                             BANKMASK(SSP1CON3), 4
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define CARRY                            BANKMASK(STATUS), 0
#define CFGS                             BANKMASK(PMCON1), 6
#define CKE                              BANKMASK(SSP1STAT), 6
#define CKP                              BANKMASK(SSP1CON1), 4
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DC                               BANKMASK(STATUS), 1
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define DHEN                             BANKMASK(SSP1CON3), 0
#define D_nA                             BANKMASK(SSP1STAT), 5
#define FREE                             BANKMASK(PMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define GCEN                             BANKMASK(SSP1CON2), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GRDAOE                           BANKMASK(AADGRD), 6
#define GRDBOE                           BANKMASK(AADGRD), 7
#define GRDPOL                           BANKMASK(AADGRD), 5
#define HFIOFR                           BANKMASK(OSCSTAT), 4
#define HFIOFS                           BANKMASK(OSCSTAT), 0
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCAF0                           BANKMASK(IOCAF), 0
#define IOCAF1                           BANKMASK(IOCAF), 1
#define IOCAF2                           BANKMASK(IOCAF), 2
#define IOCAF3                           BANKMASK(IOCAF), 3
#define IOCAF4                           BANKMASK(IOCAF), 4
#define IOCAF5                           BANKMASK(IOCAF), 5
#define IOCAN0                           BANKMASK(IOCAN), 0
#define IOCAN1                           BANKMASK(IOCAN), 1
#define IOCAN2                           BANKMASK(IOCAN), 2
#define IOCAN3                           BANKMASK(IOCAN), 3
#define IOCAN4                           BANKMASK(IOCAN), 4
#define IOCAN5                           BANKMASK(IOCAN), 5
#define IOCAP0                           BANKMASK(IOCAP), 0
#define IOCAP1                           BANKMASK(IOCAP), 1
#define IOCAP2                           BANKMASK(IOCAP), 2
#define IOCAP3                           BANKMASK(IOCAP), 3
#define IOCAP4                           BANKMASK(IOCAP), 4
#define IOCAP5                           BANKMASK(IOCAP), 5
#define IOCIE                            BANKMASK(INTCON), 3
#define IOCIF                            BANKMASK(INTCON), 0
#define IRCF0                            BANKMASK(OSCCON), 3
#define IRCF1                            BANKMASK(OSCCON), 4
#define IRCF2                            BANKMASK(OSCCON), 5
#define IRCF3                            BANKMASK(OSCCON), 6
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LWLO                             BANKMASK(PMCON1), 5
#define OSTS                             BANKMASK(OSCSTAT), 5
#define PCIE                             BANKMASK(SSP1CON3), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSP1CON2), 2
#define PLLR                             BANKMASK(OSCSTAT), 6
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define RA0                              BANKMASK(PORTA), 0
#define RA1                              BANKMASK(PORTA), 1
#define RA2                              BANKMASK(PORTA), 2
#define RA3                              BANKMASK(PORTA), 3
#define RA4                              BANKMASK(PORTA), 4
#define RA5                              BANKMASK(PORTA), 5
#define RCEN                             BANKMASK(SSP1CON2), 3
#define RD                               BANKMASK(PMCON1), 0
#define RSEN                             BANKMASK(SSP1CON2), 1
#define R_nW                             BANKMASK(SSP1STAT), 2
#define SBCDE                            BANKMASK(SSP1CON3), 2
#define SBOREN                           BANKMASK(BORCON), 7
#define SCIE                             BANKMASK(SSP1CON3), 5
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SDAHT                            BANKMASK(SSP1CON3), 3
#define SDO1SEL                          BANKMASK(APFCON), 6
#define SDOSEL                           BANKMASK(APFCON), 6
#define SDSEL                            BANKMASK(APFCON), 4
#define SEN                              BANKMASK(SSP1CON2), 0
#define SMP                              BANKMASK(SSP1STAT), 7
#define SPLLEN                           BANKMASK(OSCCON), 7
#define SS1SEL                           BANKMASK(APFCON), 5
#define SSP1IE                           BANKMASK(PIE1), 3
#define SSP1IF                           BANKMASK(PIR1), 3
#define SSPEN                            BANKMASK(SSP1CON1), 5
#define SSPM0                            BANKMASK(SSP1CON1), 0
#define SSPM1                            BANKMASK(SSP1CON1), 1
#define SSPM2                            BANKMASK(SSP1CON1), 2
#define SSPM3                            BANKMASK(SSP1CON1), 3
#define SSPOV                            BANKMASK(SSP1CON1), 6
#define SSSEL                            BANKMASK(APFCON), 5
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define SWDTEN                           BANKMASK(WDTCON), 0
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define TMR0CS                           BANKMASK(OPTION_REG), 5
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR0SE                           BANKMASK(OPTION_REG), 4
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TRISA3                           BANKMASK(TRISA), 3
#define TRISA4                           BANKMASK(TRISA), 4
#define TRISA5                           BANKMASK(TRISA), 5
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define UA                               BANKMASK(SSP1STAT), 1
#define WCOL                             BANKMASK(SSP1CON1), 7
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WDTPS4                           BANKMASK(WDTCON), 5
#define WPUA0                            BANKMASK(WPUA), 0
#define WPUA1                            BANKMASK(WPUA), 1
#define WPUA2                            BANKMASK(WPUA), 2
#define WPUA3                            BANKMASK(WPUA), 3
#define WPUA4                            BANKMASK(WPUA), 4
#define WPUA5                            BANKMASK(WPUA), 5
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define WRERR                            BANKMASK(PMCON1), 3
#define ZERO                             BANKMASK(STATUS), 2
#define Z_SHAD                           BANKMASK(STATUS_SHAD), 2
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRI                              BANKMASK(PCON), 2
#define nRMCLR                           BANKMASK(PCON), 3
#define nRWDT                            BANKMASK(PCON), 4
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

psect udata_shr,class=COMMON,space=SPACE_DATA,noexec
psect udata,class=RAM,space=SPACE_DATA,noexec
psect udata_bank0,class=BANK0,space=SPACE_DATA,noexec
psect udata_bank1,class=BANK1,space=SPACE_DATA,noexec
psect udata_bank2,class=BANK2,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC12LF1552_INC_
