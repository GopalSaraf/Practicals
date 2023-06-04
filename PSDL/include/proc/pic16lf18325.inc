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

#ifndef _PIC16LF18325_INC_
#define _PIC16LF18325_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF18325
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
INTCON_INTEDG_POSN                       equ 0000h
INTCON_INTEDG_POSITION                   equ 0000h
INTCON_INTEDG_SIZE                       equ 0001h
INTCON_INTEDG_LENGTH                     equ 0001h
INTCON_INTEDG_MASK                       equ 0001h
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

// Register: PORTC
#define PORTC PORTC
PORTC                                    equ 000Eh
// bitfield definitions
PORTC_RC0_POSN                           equ 0000h
PORTC_RC0_POSITION                       equ 0000h
PORTC_RC0_SIZE                           equ 0001h
PORTC_RC0_LENGTH                         equ 0001h
PORTC_RC0_MASK                           equ 0001h
PORTC_RC1_POSN                           equ 0001h
PORTC_RC1_POSITION                       equ 0001h
PORTC_RC1_SIZE                           equ 0001h
PORTC_RC1_LENGTH                         equ 0001h
PORTC_RC1_MASK                           equ 0002h
PORTC_RC2_POSN                           equ 0002h
PORTC_RC2_POSITION                       equ 0002h
PORTC_RC2_SIZE                           equ 0001h
PORTC_RC2_LENGTH                         equ 0001h
PORTC_RC2_MASK                           equ 0004h
PORTC_RC3_POSN                           equ 0003h
PORTC_RC3_POSITION                       equ 0003h
PORTC_RC3_SIZE                           equ 0001h
PORTC_RC3_LENGTH                         equ 0001h
PORTC_RC3_MASK                           equ 0008h
PORTC_RC4_POSN                           equ 0004h
PORTC_RC4_POSITION                       equ 0004h
PORTC_RC4_SIZE                           equ 0001h
PORTC_RC4_LENGTH                         equ 0001h
PORTC_RC4_MASK                           equ 0010h
PORTC_RC5_POSN                           equ 0005h
PORTC_RC5_POSITION                       equ 0005h
PORTC_RC5_SIZE                           equ 0001h
PORTC_RC5_LENGTH                         equ 0001h
PORTC_RC5_MASK                           equ 0020h

// Register: PIR0
#define PIR0 PIR0
PIR0                                     equ 0010h
// bitfield definitions
PIR0_INTF_POSN                           equ 0000h
PIR0_INTF_POSITION                       equ 0000h
PIR0_INTF_SIZE                           equ 0001h
PIR0_INTF_LENGTH                         equ 0001h
PIR0_INTF_MASK                           equ 0001h
PIR0_IOCIF_POSN                          equ 0004h
PIR0_IOCIF_POSITION                      equ 0004h
PIR0_IOCIF_SIZE                          equ 0001h
PIR0_IOCIF_LENGTH                        equ 0001h
PIR0_IOCIF_MASK                          equ 0010h
PIR0_TMR0IF_POSN                         equ 0005h
PIR0_TMR0IF_POSITION                     equ 0005h
PIR0_TMR0IF_SIZE                         equ 0001h
PIR0_TMR0IF_LENGTH                       equ 0001h
PIR0_TMR0IF_MASK                         equ 0020h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 0011h
// bitfield definitions
PIR1_TMR1IF_POSN                         equ 0000h
PIR1_TMR1IF_POSITION                     equ 0000h
PIR1_TMR1IF_SIZE                         equ 0001h
PIR1_TMR1IF_LENGTH                       equ 0001h
PIR1_TMR1IF_MASK                         equ 0001h
PIR1_TMR2IF_POSN                         equ 0001h
PIR1_TMR2IF_POSITION                     equ 0001h
PIR1_TMR2IF_SIZE                         equ 0001h
PIR1_TMR2IF_LENGTH                       equ 0001h
PIR1_TMR2IF_MASK                         equ 0002h
PIR1_BCL1IF_POSN                         equ 0002h
PIR1_BCL1IF_POSITION                     equ 0002h
PIR1_BCL1IF_SIZE                         equ 0001h
PIR1_BCL1IF_LENGTH                       equ 0001h
PIR1_BCL1IF_MASK                         equ 0004h
PIR1_SSP1IF_POSN                         equ 0003h
PIR1_SSP1IF_POSITION                     equ 0003h
PIR1_SSP1IF_SIZE                         equ 0001h
PIR1_SSP1IF_LENGTH                       equ 0001h
PIR1_SSP1IF_MASK                         equ 0008h
PIR1_TXIF_POSN                           equ 0004h
PIR1_TXIF_POSITION                       equ 0004h
PIR1_TXIF_SIZE                           equ 0001h
PIR1_TXIF_LENGTH                         equ 0001h
PIR1_TXIF_MASK                           equ 0010h
PIR1_RCIF_POSN                           equ 0005h
PIR1_RCIF_POSITION                       equ 0005h
PIR1_RCIF_SIZE                           equ 0001h
PIR1_RCIF_LENGTH                         equ 0001h
PIR1_RCIF_MASK                           equ 0020h
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h
PIR1_TMR1GIF_POSN                        equ 0007h
PIR1_TMR1GIF_POSITION                    equ 0007h
PIR1_TMR1GIF_SIZE                        equ 0001h
PIR1_TMR1GIF_LENGTH                      equ 0001h
PIR1_TMR1GIF_MASK                        equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0012h
// bitfield definitions
PIR2_NCO1IF_POSN                         equ 0000h
PIR2_NCO1IF_POSITION                     equ 0000h
PIR2_NCO1IF_SIZE                         equ 0001h
PIR2_NCO1IF_LENGTH                       equ 0001h
PIR2_NCO1IF_MASK                         equ 0001h
PIR2_TMR4IF_POSN                         equ 0001h
PIR2_TMR4IF_POSITION                     equ 0001h
PIR2_TMR4IF_SIZE                         equ 0001h
PIR2_TMR4IF_LENGTH                       equ 0001h
PIR2_TMR4IF_MASK                         equ 0002h
PIR2_BCL2IF_POSN                         equ 0002h
PIR2_BCL2IF_POSITION                     equ 0002h
PIR2_BCL2IF_SIZE                         equ 0001h
PIR2_BCL2IF_LENGTH                       equ 0001h
PIR2_BCL2IF_MASK                         equ 0004h
PIR2_SSP2IF_POSN                         equ 0003h
PIR2_SSP2IF_POSITION                     equ 0003h
PIR2_SSP2IF_SIZE                         equ 0001h
PIR2_SSP2IF_LENGTH                       equ 0001h
PIR2_SSP2IF_MASK                         equ 0008h
PIR2_NVMIF_POSN                          equ 0004h
PIR2_NVMIF_POSITION                      equ 0004h
PIR2_NVMIF_SIZE                          equ 0001h
PIR2_NVMIF_LENGTH                        equ 0001h
PIR2_NVMIF_MASK                          equ 0010h
PIR2_C1IF_POSN                           equ 0005h
PIR2_C1IF_POSITION                       equ 0005h
PIR2_C1IF_SIZE                           equ 0001h
PIR2_C1IF_LENGTH                         equ 0001h
PIR2_C1IF_MASK                           equ 0020h
PIR2_C2IF_POSN                           equ 0006h
PIR2_C2IF_POSITION                       equ 0006h
PIR2_C2IF_SIZE                           equ 0001h
PIR2_C2IF_LENGTH                         equ 0001h
PIR2_C2IF_MASK                           equ 0040h
PIR2_TMR6IF_POSN                         equ 0007h
PIR2_TMR6IF_POSITION                     equ 0007h
PIR2_TMR6IF_SIZE                         equ 0001h
PIR2_TMR6IF_LENGTH                       equ 0001h
PIR2_TMR6IF_MASK                         equ 0080h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0013h
// bitfield definitions
PIR3_CLC1IF_POSN                         equ 0000h
PIR3_CLC1IF_POSITION                     equ 0000h
PIR3_CLC1IF_SIZE                         equ 0001h
PIR3_CLC1IF_LENGTH                       equ 0001h
PIR3_CLC1IF_MASK                         equ 0001h
PIR3_CLC2IF_POSN                         equ 0001h
PIR3_CLC2IF_POSITION                     equ 0001h
PIR3_CLC2IF_SIZE                         equ 0001h
PIR3_CLC2IF_LENGTH                       equ 0001h
PIR3_CLC2IF_MASK                         equ 0002h
PIR3_CLC3IF_POSN                         equ 0002h
PIR3_CLC3IF_POSITION                     equ 0002h
PIR3_CLC3IF_SIZE                         equ 0001h
PIR3_CLC3IF_LENGTH                       equ 0001h
PIR3_CLC3IF_MASK                         equ 0004h
PIR3_CLC4IF_POSN                         equ 0003h
PIR3_CLC4IF_POSITION                     equ 0003h
PIR3_CLC4IF_SIZE                         equ 0001h
PIR3_CLC4IF_LENGTH                       equ 0001h
PIR3_CLC4IF_MASK                         equ 0008h
PIR3_TMR3IF_POSN                         equ 0004h
PIR3_TMR3IF_POSITION                     equ 0004h
PIR3_TMR3IF_SIZE                         equ 0001h
PIR3_TMR3IF_LENGTH                       equ 0001h
PIR3_TMR3IF_MASK                         equ 0010h
PIR3_TMR3GIF_POSN                        equ 0005h
PIR3_TMR3GIF_POSITION                    equ 0005h
PIR3_TMR3GIF_SIZE                        equ 0001h
PIR3_TMR3GIF_LENGTH                      equ 0001h
PIR3_TMR3GIF_MASK                        equ 0020h
PIR3_CSWIF_POSN                          equ 0006h
PIR3_CSWIF_POSITION                      equ 0006h
PIR3_CSWIF_SIZE                          equ 0001h
PIR3_CSWIF_LENGTH                        equ 0001h
PIR3_CSWIF_MASK                          equ 0040h
PIR3_OSFIF_POSN                          equ 0007h
PIR3_OSFIF_POSITION                      equ 0007h
PIR3_OSFIF_SIZE                          equ 0001h
PIR3_OSFIF_LENGTH                        equ 0001h
PIR3_OSFIF_MASK                          equ 0080h

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0014h
// bitfield definitions
PIR4_CCP1IF_POSN                         equ 0000h
PIR4_CCP1IF_POSITION                     equ 0000h
PIR4_CCP1IF_SIZE                         equ 0001h
PIR4_CCP1IF_LENGTH                       equ 0001h
PIR4_CCP1IF_MASK                         equ 0001h
PIR4_CCP2IF_POSN                         equ 0001h
PIR4_CCP2IF_POSITION                     equ 0001h
PIR4_CCP2IF_SIZE                         equ 0001h
PIR4_CCP2IF_LENGTH                       equ 0001h
PIR4_CCP2IF_MASK                         equ 0002h
PIR4_CCP3IF_POSN                         equ 0002h
PIR4_CCP3IF_POSITION                     equ 0002h
PIR4_CCP3IF_SIZE                         equ 0001h
PIR4_CCP3IF_LENGTH                       equ 0001h
PIR4_CCP3IF_MASK                         equ 0004h
PIR4_CCP4IF_POSN                         equ 0003h
PIR4_CCP4IF_POSITION                     equ 0003h
PIR4_CCP4IF_SIZE                         equ 0001h
PIR4_CCP4IF_LENGTH                       equ 0001h
PIR4_CCP4IF_MASK                         equ 0008h
PIR4_TMR5IF_POSN                         equ 0004h
PIR4_TMR5IF_POSITION                     equ 0004h
PIR4_TMR5IF_SIZE                         equ 0001h
PIR4_TMR5IF_LENGTH                       equ 0001h
PIR4_TMR5IF_MASK                         equ 0010h
PIR4_TMR5GIF_POSN                        equ 0005h
PIR4_TMR5GIF_POSITION                    equ 0005h
PIR4_TMR5GIF_SIZE                        equ 0001h
PIR4_TMR5GIF_LENGTH                      equ 0001h
PIR4_TMR5GIF_MASK                        equ 0020h
PIR4_CWG1IF_POSN                         equ 0006h
PIR4_CWG1IF_POSITION                     equ 0006h
PIR4_CWG1IF_SIZE                         equ 0001h
PIR4_CWG1IF_LENGTH                       equ 0001h
PIR4_CWG1IF_MASK                         equ 0040h
PIR4_CWG2IF_POSN                         equ 0007h
PIR4_CWG2IF_POSITION                     equ 0007h
PIR4_CWG2IF_SIZE                         equ 0001h
PIR4_CWG2IF_LENGTH                       equ 0001h
PIR4_CWG2IF_MASK                         equ 0080h

// Register: TMR0L
#define TMR0L TMR0L
TMR0L                                    equ 0015h
// bitfield definitions
TMR0L_TMR0L_POSN                         equ 0000h
TMR0L_TMR0L_POSITION                     equ 0000h
TMR0L_TMR0L_SIZE                         equ 0008h
TMR0L_TMR0L_LENGTH                       equ 0008h
TMR0L_TMR0L_MASK                         equ 00FFh
TMR0L_TMR00_POSN                         equ 0000h
TMR0L_TMR00_POSITION                     equ 0000h
TMR0L_TMR00_SIZE                         equ 0001h
TMR0L_TMR00_LENGTH                       equ 0001h
TMR0L_TMR00_MASK                         equ 0001h
TMR0L_TMR01_POSN                         equ 0001h
TMR0L_TMR01_POSITION                     equ 0001h
TMR0L_TMR01_SIZE                         equ 0001h
TMR0L_TMR01_LENGTH                       equ 0001h
TMR0L_TMR01_MASK                         equ 0002h
TMR0L_TMR02_POSN                         equ 0002h
TMR0L_TMR02_POSITION                     equ 0002h
TMR0L_TMR02_SIZE                         equ 0001h
TMR0L_TMR02_LENGTH                       equ 0001h
TMR0L_TMR02_MASK                         equ 0004h
TMR0L_TMR03_POSN                         equ 0003h
TMR0L_TMR03_POSITION                     equ 0003h
TMR0L_TMR03_SIZE                         equ 0001h
TMR0L_TMR03_LENGTH                       equ 0001h
TMR0L_TMR03_MASK                         equ 0008h
TMR0L_TMR04_POSN                         equ 0004h
TMR0L_TMR04_POSITION                     equ 0004h
TMR0L_TMR04_SIZE                         equ 0001h
TMR0L_TMR04_LENGTH                       equ 0001h
TMR0L_TMR04_MASK                         equ 0010h
TMR0L_TMR05_POSN                         equ 0005h
TMR0L_TMR05_POSITION                     equ 0005h
TMR0L_TMR05_SIZE                         equ 0001h
TMR0L_TMR05_LENGTH                       equ 0001h
TMR0L_TMR05_MASK                         equ 0020h
TMR0L_TMR06_POSN                         equ 0006h
TMR0L_TMR06_POSITION                     equ 0006h
TMR0L_TMR06_SIZE                         equ 0001h
TMR0L_TMR06_LENGTH                       equ 0001h
TMR0L_TMR06_MASK                         equ 0040h
TMR0L_TMR07_POSN                         equ 0007h
TMR0L_TMR07_POSITION                     equ 0007h
TMR0L_TMR07_SIZE                         equ 0001h
TMR0L_TMR07_LENGTH                       equ 0001h
TMR0L_TMR07_MASK                         equ 0080h

// Register: TMR0H
#define TMR0H TMR0H
TMR0H                                    equ 0016h
// bitfield definitions
TMR0H_TMR0H_POSN                         equ 0000h
TMR0H_TMR0H_POSITION                     equ 0000h
TMR0H_TMR0H_SIZE                         equ 0008h
TMR0H_TMR0H_LENGTH                       equ 0008h
TMR0H_TMR0H_MASK                         equ 00FFh
TMR0H_TMR08_POSN                         equ 0000h
TMR0H_TMR08_POSITION                     equ 0000h
TMR0H_TMR08_SIZE                         equ 0001h
TMR0H_TMR08_LENGTH                       equ 0001h
TMR0H_TMR08_MASK                         equ 0001h
TMR0H_TMR09_POSN                         equ 0001h
TMR0H_TMR09_POSITION                     equ 0001h
TMR0H_TMR09_SIZE                         equ 0001h
TMR0H_TMR09_LENGTH                       equ 0001h
TMR0H_TMR09_MASK                         equ 0002h
TMR0H_TMR010_POSN                        equ 0002h
TMR0H_TMR010_POSITION                    equ 0002h
TMR0H_TMR010_SIZE                        equ 0001h
TMR0H_TMR010_LENGTH                      equ 0001h
TMR0H_TMR010_MASK                        equ 0004h
TMR0H_TMR011_POSN                        equ 0003h
TMR0H_TMR011_POSITION                    equ 0003h
TMR0H_TMR011_SIZE                        equ 0001h
TMR0H_TMR011_LENGTH                      equ 0001h
TMR0H_TMR011_MASK                        equ 0008h
TMR0H_TMR012_POSN                        equ 0004h
TMR0H_TMR012_POSITION                    equ 0004h
TMR0H_TMR012_SIZE                        equ 0001h
TMR0H_TMR012_LENGTH                      equ 0001h
TMR0H_TMR012_MASK                        equ 0010h
TMR0H_TMR013_POSN                        equ 0005h
TMR0H_TMR013_POSITION                    equ 0005h
TMR0H_TMR013_SIZE                        equ 0001h
TMR0H_TMR013_LENGTH                      equ 0001h
TMR0H_TMR013_MASK                        equ 0020h
TMR0H_TMR014_POSN                        equ 0006h
TMR0H_TMR014_POSITION                    equ 0006h
TMR0H_TMR014_SIZE                        equ 0001h
TMR0H_TMR014_LENGTH                      equ 0001h
TMR0H_TMR014_MASK                        equ 0040h
TMR0H_TMR015_POSN                        equ 0007h
TMR0H_TMR015_POSITION                    equ 0007h
TMR0H_TMR015_SIZE                        equ 0001h
TMR0H_TMR015_LENGTH                      equ 0001h
TMR0H_TMR015_MASK                        equ 0080h
TMR0H_PR0_POSN                           equ 0000h
TMR0H_PR0_POSITION                       equ 0000h
TMR0H_PR0_SIZE                           equ 0008h
TMR0H_PR0_LENGTH                         equ 0008h
TMR0H_PR0_MASK                           equ 00FFh

// Register: T0CON0
#define T0CON0 T0CON0
T0CON0                                   equ 0017h
// bitfield definitions
T0CON0_T0OUTPS_POSN                      equ 0000h
T0CON0_T0OUTPS_POSITION                  equ 0000h
T0CON0_T0OUTPS_SIZE                      equ 0004h
T0CON0_T0OUTPS_LENGTH                    equ 0004h
T0CON0_T0OUTPS_MASK                      equ 000Fh
T0CON0_T016BIT_POSN                      equ 0004h
T0CON0_T016BIT_POSITION                  equ 0004h
T0CON0_T016BIT_SIZE                      equ 0001h
T0CON0_T016BIT_LENGTH                    equ 0001h
T0CON0_T016BIT_MASK                      equ 0010h
T0CON0_T0OUT_POSN                        equ 0005h
T0CON0_T0OUT_POSITION                    equ 0005h
T0CON0_T0OUT_SIZE                        equ 0001h
T0CON0_T0OUT_LENGTH                      equ 0001h
T0CON0_T0OUT_MASK                        equ 0020h
T0CON0_T0EN_POSN                         equ 0007h
T0CON0_T0EN_POSITION                     equ 0007h
T0CON0_T0EN_SIZE                         equ 0001h
T0CON0_T0EN_LENGTH                       equ 0001h
T0CON0_T0EN_MASK                         equ 0080h
T0CON0_T0OUTPS0_POSN                     equ 0000h
T0CON0_T0OUTPS0_POSITION                 equ 0000h
T0CON0_T0OUTPS0_SIZE                     equ 0001h
T0CON0_T0OUTPS0_LENGTH                   equ 0001h
T0CON0_T0OUTPS0_MASK                     equ 0001h
T0CON0_T0OUTPS1_POSN                     equ 0001h
T0CON0_T0OUTPS1_POSITION                 equ 0001h
T0CON0_T0OUTPS1_SIZE                     equ 0001h
T0CON0_T0OUTPS1_LENGTH                   equ 0001h
T0CON0_T0OUTPS1_MASK                     equ 0002h
T0CON0_T0OUTPS2_POSN                     equ 0002h
T0CON0_T0OUTPS2_POSITION                 equ 0002h
T0CON0_T0OUTPS2_SIZE                     equ 0001h
T0CON0_T0OUTPS2_LENGTH                   equ 0001h
T0CON0_T0OUTPS2_MASK                     equ 0004h
T0CON0_T0OUTPS3_POSN                     equ 0003h
T0CON0_T0OUTPS3_POSITION                 equ 0003h
T0CON0_T0OUTPS3_SIZE                     equ 0001h
T0CON0_T0OUTPS3_LENGTH                   equ 0001h
T0CON0_T0OUTPS3_MASK                     equ 0008h

// Register: T0CON1
#define T0CON1 T0CON1
T0CON1                                   equ 0018h
// bitfield definitions
T0CON1_T0CKPS_POSN                       equ 0000h
T0CON1_T0CKPS_POSITION                   equ 0000h
T0CON1_T0CKPS_SIZE                       equ 0004h
T0CON1_T0CKPS_LENGTH                     equ 0004h
T0CON1_T0CKPS_MASK                       equ 000Fh
T0CON1_T0ASYNC_POSN                      equ 0004h
T0CON1_T0ASYNC_POSITION                  equ 0004h
T0CON1_T0ASYNC_SIZE                      equ 0001h
T0CON1_T0ASYNC_LENGTH                    equ 0001h
T0CON1_T0ASYNC_MASK                      equ 0010h
T0CON1_T0CS_POSN                         equ 0005h
T0CON1_T0CS_POSITION                     equ 0005h
T0CON1_T0CS_SIZE                         equ 0003h
T0CON1_T0CS_LENGTH                       equ 0003h
T0CON1_T0CS_MASK                         equ 00E0h
T0CON1_T0CKPS0_POSN                      equ 0000h
T0CON1_T0CKPS0_POSITION                  equ 0000h
T0CON1_T0CKPS0_SIZE                      equ 0001h
T0CON1_T0CKPS0_LENGTH                    equ 0001h
T0CON1_T0CKPS0_MASK                      equ 0001h
T0CON1_T0CKPS1_POSN                      equ 0001h
T0CON1_T0CKPS1_POSITION                  equ 0001h
T0CON1_T0CKPS1_SIZE                      equ 0001h
T0CON1_T0CKPS1_LENGTH                    equ 0001h
T0CON1_T0CKPS1_MASK                      equ 0002h
T0CON1_T0CKPS2_POSN                      equ 0002h
T0CON1_T0CKPS2_POSITION                  equ 0002h
T0CON1_T0CKPS2_SIZE                      equ 0001h
T0CON1_T0CKPS2_LENGTH                    equ 0001h
T0CON1_T0CKPS2_MASK                      equ 0004h
T0CON1_T0CKPS3_POSN                      equ 0003h
T0CON1_T0CKPS3_POSITION                  equ 0003h
T0CON1_T0CKPS3_SIZE                      equ 0001h
T0CON1_T0CKPS3_LENGTH                    equ 0001h
T0CON1_T0CKPS3_MASK                      equ 0008h
T0CON1_T0CS0_POSN                        equ 0005h
T0CON1_T0CS0_POSITION                    equ 0005h
T0CON1_T0CS0_SIZE                        equ 0001h
T0CON1_T0CS0_LENGTH                      equ 0001h
T0CON1_T0CS0_MASK                        equ 0020h
T0CON1_T0CS1_POSN                        equ 0006h
T0CON1_T0CS1_POSITION                    equ 0006h
T0CON1_T0CS1_SIZE                        equ 0001h
T0CON1_T0CS1_LENGTH                      equ 0001h
T0CON1_T0CS1_MASK                        equ 0040h
T0CON1_T0CS2_POSN                        equ 0007h
T0CON1_T0CS2_POSITION                    equ 0007h
T0CON1_T0CS2_SIZE                        equ 0001h
T0CON1_T0CS2_LENGTH                      equ 0001h
T0CON1_T0CS2_MASK                        equ 0080h

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 0019h
// bitfield definitions
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 001Ah
// bitfield definitions
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 001Bh
// bitfield definitions
T1CON_TMR1ON_POSN                        equ 0000h
T1CON_TMR1ON_POSITION                    equ 0000h
T1CON_TMR1ON_SIZE                        equ 0001h
T1CON_TMR1ON_LENGTH                      equ 0001h
T1CON_TMR1ON_MASK                        equ 0001h
T1CON_T1SYNC_POSN                        equ 0002h
T1CON_T1SYNC_POSITION                    equ 0002h
T1CON_T1SYNC_SIZE                        equ 0001h
T1CON_T1SYNC_LENGTH                      equ 0001h
T1CON_T1SYNC_MASK                        equ 0004h
T1CON_T1SOSC_POSN                        equ 0003h
T1CON_T1SOSC_POSITION                    equ 0003h
T1CON_T1SOSC_SIZE                        equ 0001h
T1CON_T1SOSC_LENGTH                      equ 0001h
T1CON_T1SOSC_MASK                        equ 0008h
T1CON_T1CKPS_POSN                        equ 0004h
T1CON_T1CKPS_POSITION                    equ 0004h
T1CON_T1CKPS_SIZE                        equ 0002h
T1CON_T1CKPS_LENGTH                      equ 0002h
T1CON_T1CKPS_MASK                        equ 0030h
T1CON_TMR1CS_POSN                        equ 0006h
T1CON_TMR1CS_POSITION                    equ 0006h
T1CON_TMR1CS_SIZE                        equ 0002h
T1CON_TMR1CS_LENGTH                      equ 0002h
T1CON_TMR1CS_MASK                        equ 00C0h
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
T1CON_TMR1CS0_POSN                       equ 0006h
T1CON_TMR1CS0_POSITION                   equ 0006h
T1CON_TMR1CS0_SIZE                       equ 0001h
T1CON_TMR1CS0_LENGTH                     equ 0001h
T1CON_TMR1CS0_MASK                       equ 0040h
T1CON_TMR1CS1_POSN                       equ 0007h
T1CON_TMR1CS1_POSITION                   equ 0007h
T1CON_TMR1CS1_SIZE                       equ 0001h
T1CON_TMR1CS1_LENGTH                     equ 0001h
T1CON_TMR1CS1_MASK                       equ 0080h

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 001Ch
// bitfield definitions
T1GCON_T1GSS_POSN                        equ 0000h
T1GCON_T1GSS_POSITION                    equ 0000h
T1GCON_T1GSS_SIZE                        equ 0002h
T1GCON_T1GSS_LENGTH                      equ 0002h
T1GCON_T1GSS_MASK                        equ 0003h
T1GCON_T1GVAL_POSN                       equ 0002h
T1GCON_T1GVAL_POSITION                   equ 0002h
T1GCON_T1GVAL_SIZE                       equ 0001h
T1GCON_T1GVAL_LENGTH                     equ 0001h
T1GCON_T1GVAL_MASK                       equ 0004h
T1GCON_T1GGO_nDONE_POSN                  equ 0003h
T1GCON_T1GGO_nDONE_POSITION              equ 0003h
T1GCON_T1GGO_nDONE_SIZE                  equ 0001h
T1GCON_T1GGO_nDONE_LENGTH                equ 0001h
T1GCON_T1GGO_nDONE_MASK                  equ 0008h
T1GCON_T1GSPM_POSN                       equ 0004h
T1GCON_T1GSPM_POSITION                   equ 0004h
T1GCON_T1GSPM_SIZE                       equ 0001h
T1GCON_T1GSPM_LENGTH                     equ 0001h
T1GCON_T1GSPM_MASK                       equ 0010h
T1GCON_T1GTM_POSN                        equ 0005h
T1GCON_T1GTM_POSITION                    equ 0005h
T1GCON_T1GTM_SIZE                        equ 0001h
T1GCON_T1GTM_LENGTH                      equ 0001h
T1GCON_T1GTM_MASK                        equ 0020h
T1GCON_T1GPOL_POSN                       equ 0006h
T1GCON_T1GPOL_POSITION                   equ 0006h
T1GCON_T1GPOL_SIZE                       equ 0001h
T1GCON_T1GPOL_LENGTH                     equ 0001h
T1GCON_T1GPOL_MASK                       equ 0040h
T1GCON_TMR1GE_POSN                       equ 0007h
T1GCON_TMR1GE_POSITION                   equ 0007h
T1GCON_TMR1GE_SIZE                       equ 0001h
T1GCON_TMR1GE_LENGTH                     equ 0001h
T1GCON_TMR1GE_MASK                       equ 0080h
T1GCON_T1GSS0_POSN                       equ 0000h
T1GCON_T1GSS0_POSITION                   equ 0000h
T1GCON_T1GSS0_SIZE                       equ 0001h
T1GCON_T1GSS0_LENGTH                     equ 0001h
T1GCON_T1GSS0_MASK                       equ 0001h
T1GCON_T1GSS1_POSN                       equ 0001h
T1GCON_T1GSS1_POSITION                   equ 0001h
T1GCON_T1GSS1_SIZE                       equ 0001h
T1GCON_T1GSS1_LENGTH                     equ 0001h
T1GCON_T1GSS1_MASK                       equ 0002h

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 001Dh
// bitfield definitions
TMR2_TMR2_POSN                           equ 0000h
TMR2_TMR2_POSITION                       equ 0000h
TMR2_TMR2_SIZE                           equ 0008h
TMR2_TMR2_LENGTH                         equ 0008h
TMR2_TMR2_MASK                           equ 00FFh

// Register: PR2
#define PR2 PR2
PR2                                      equ 001Eh
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 001Fh
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
T2CON_T2OUTPS_POSN                       equ 0003h
T2CON_T2OUTPS_POSITION                   equ 0003h
T2CON_T2OUTPS_SIZE                       equ 0004h
T2CON_T2OUTPS_LENGTH                     equ 0004h
T2CON_T2OUTPS_MASK                       equ 0078h
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
T2CON_T2OUTPS0_POSN                      equ 0003h
T2CON_T2OUTPS0_POSITION                  equ 0003h
T2CON_T2OUTPS0_SIZE                      equ 0001h
T2CON_T2OUTPS0_LENGTH                    equ 0001h
T2CON_T2OUTPS0_MASK                      equ 0008h
T2CON_T2OUTPS1_POSN                      equ 0004h
T2CON_T2OUTPS1_POSITION                  equ 0004h
T2CON_T2OUTPS1_SIZE                      equ 0001h
T2CON_T2OUTPS1_LENGTH                    equ 0001h
T2CON_T2OUTPS1_MASK                      equ 0010h
T2CON_T2OUTPS2_POSN                      equ 0005h
T2CON_T2OUTPS2_POSITION                  equ 0005h
T2CON_T2OUTPS2_SIZE                      equ 0001h
T2CON_T2OUTPS2_LENGTH                    equ 0001h
T2CON_T2OUTPS2_MASK                      equ 0020h
T2CON_T2OUTPS3_POSN                      equ 0006h
T2CON_T2OUTPS3_POSITION                  equ 0006h
T2CON_T2OUTPS3_SIZE                      equ 0001h
T2CON_T2OUTPS3_LENGTH                    equ 0001h
T2CON_T2OUTPS3_MASK                      equ 0040h

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

// Register: TRISC
#define TRISC TRISC
TRISC                                    equ 008Eh
// bitfield definitions
TRISC_TRISC0_POSN                        equ 0000h
TRISC_TRISC0_POSITION                    equ 0000h
TRISC_TRISC0_SIZE                        equ 0001h
TRISC_TRISC0_LENGTH                      equ 0001h
TRISC_TRISC0_MASK                        equ 0001h
TRISC_TRISC1_POSN                        equ 0001h
TRISC_TRISC1_POSITION                    equ 0001h
TRISC_TRISC1_SIZE                        equ 0001h
TRISC_TRISC1_LENGTH                      equ 0001h
TRISC_TRISC1_MASK                        equ 0002h
TRISC_TRISC2_POSN                        equ 0002h
TRISC_TRISC2_POSITION                    equ 0002h
TRISC_TRISC2_SIZE                        equ 0001h
TRISC_TRISC2_LENGTH                      equ 0001h
TRISC_TRISC2_MASK                        equ 0004h
TRISC_TRISC3_POSN                        equ 0003h
TRISC_TRISC3_POSITION                    equ 0003h
TRISC_TRISC3_SIZE                        equ 0001h
TRISC_TRISC3_LENGTH                      equ 0001h
TRISC_TRISC3_MASK                        equ 0008h
TRISC_TRISC4_POSN                        equ 0004h
TRISC_TRISC4_POSITION                    equ 0004h
TRISC_TRISC4_SIZE                        equ 0001h
TRISC_TRISC4_LENGTH                      equ 0001h
TRISC_TRISC4_MASK                        equ 0010h
TRISC_TRISC5_POSN                        equ 0005h
TRISC_TRISC5_POSITION                    equ 0005h
TRISC_TRISC5_SIZE                        equ 0001h
TRISC_TRISC5_LENGTH                      equ 0001h
TRISC_TRISC5_MASK                        equ 0020h

// Register: PIE0
#define PIE0 PIE0
PIE0                                     equ 0090h
// bitfield definitions
PIE0_INTE_POSN                           equ 0000h
PIE0_INTE_POSITION                       equ 0000h
PIE0_INTE_SIZE                           equ 0001h
PIE0_INTE_LENGTH                         equ 0001h
PIE0_INTE_MASK                           equ 0001h
PIE0_IOCIE_POSN                          equ 0004h
PIE0_IOCIE_POSITION                      equ 0004h
PIE0_IOCIE_SIZE                          equ 0001h
PIE0_IOCIE_LENGTH                        equ 0001h
PIE0_IOCIE_MASK                          equ 0010h
PIE0_TMR0IE_POSN                         equ 0005h
PIE0_TMR0IE_POSITION                     equ 0005h
PIE0_TMR0IE_SIZE                         equ 0001h
PIE0_TMR0IE_LENGTH                       equ 0001h
PIE0_TMR0IE_MASK                         equ 0020h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0091h
// bitfield definitions
PIE1_TMR1IE_POSN                         equ 0000h
PIE1_TMR1IE_POSITION                     equ 0000h
PIE1_TMR1IE_SIZE                         equ 0001h
PIE1_TMR1IE_LENGTH                       equ 0001h
PIE1_TMR1IE_MASK                         equ 0001h
PIE1_TMR2IE_POSN                         equ 0001h
PIE1_TMR2IE_POSITION                     equ 0001h
PIE1_TMR2IE_SIZE                         equ 0001h
PIE1_TMR2IE_LENGTH                       equ 0001h
PIE1_TMR2IE_MASK                         equ 0002h
PIE1_BCL1IE_POSN                         equ 0002h
PIE1_BCL1IE_POSITION                     equ 0002h
PIE1_BCL1IE_SIZE                         equ 0001h
PIE1_BCL1IE_LENGTH                       equ 0001h
PIE1_BCL1IE_MASK                         equ 0004h
PIE1_SSP1IE_POSN                         equ 0003h
PIE1_SSP1IE_POSITION                     equ 0003h
PIE1_SSP1IE_SIZE                         equ 0001h
PIE1_SSP1IE_LENGTH                       equ 0001h
PIE1_SSP1IE_MASK                         equ 0008h
PIE1_TXIE_POSN                           equ 0004h
PIE1_TXIE_POSITION                       equ 0004h
PIE1_TXIE_SIZE                           equ 0001h
PIE1_TXIE_LENGTH                         equ 0001h
PIE1_TXIE_MASK                           equ 0010h
PIE1_RCIE_POSN                           equ 0005h
PIE1_RCIE_POSITION                       equ 0005h
PIE1_RCIE_SIZE                           equ 0001h
PIE1_RCIE_LENGTH                         equ 0001h
PIE1_RCIE_MASK                           equ 0020h
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h
PIE1_TMR1GIE_POSN                        equ 0007h
PIE1_TMR1GIE_POSITION                    equ 0007h
PIE1_TMR1GIE_SIZE                        equ 0001h
PIE1_TMR1GIE_LENGTH                      equ 0001h
PIE1_TMR1GIE_MASK                        equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0092h
// bitfield definitions
PIE2_NCO1IE_POSN                         equ 0000h
PIE2_NCO1IE_POSITION                     equ 0000h
PIE2_NCO1IE_SIZE                         equ 0001h
PIE2_NCO1IE_LENGTH                       equ 0001h
PIE2_NCO1IE_MASK                         equ 0001h
PIE2_TMR4IE_POSN                         equ 0001h
PIE2_TMR4IE_POSITION                     equ 0001h
PIE2_TMR4IE_SIZE                         equ 0001h
PIE2_TMR4IE_LENGTH                       equ 0001h
PIE2_TMR4IE_MASK                         equ 0002h
PIE2_BCL2IE_POSN                         equ 0002h
PIE2_BCL2IE_POSITION                     equ 0002h
PIE2_BCL2IE_SIZE                         equ 0001h
PIE2_BCL2IE_LENGTH                       equ 0001h
PIE2_BCL2IE_MASK                         equ 0004h
PIE2_SSP2IE_POSN                         equ 0003h
PIE2_SSP2IE_POSITION                     equ 0003h
PIE2_SSP2IE_SIZE                         equ 0001h
PIE2_SSP2IE_LENGTH                       equ 0001h
PIE2_SSP2IE_MASK                         equ 0008h
PIE2_NVMIE_POSN                          equ 0004h
PIE2_NVMIE_POSITION                      equ 0004h
PIE2_NVMIE_SIZE                          equ 0001h
PIE2_NVMIE_LENGTH                        equ 0001h
PIE2_NVMIE_MASK                          equ 0010h
PIE2_C1IE_POSN                           equ 0005h
PIE2_C1IE_POSITION                       equ 0005h
PIE2_C1IE_SIZE                           equ 0001h
PIE2_C1IE_LENGTH                         equ 0001h
PIE2_C1IE_MASK                           equ 0020h
PIE2_C2IE_POSN                           equ 0006h
PIE2_C2IE_POSITION                       equ 0006h
PIE2_C2IE_SIZE                           equ 0001h
PIE2_C2IE_LENGTH                         equ 0001h
PIE2_C2IE_MASK                           equ 0040h
PIE2_TMR6IE_POSN                         equ 0007h
PIE2_TMR6IE_POSITION                     equ 0007h
PIE2_TMR6IE_SIZE                         equ 0001h
PIE2_TMR6IE_LENGTH                       equ 0001h
PIE2_TMR6IE_MASK                         equ 0080h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0093h
// bitfield definitions
PIE3_CLC1IE_POSN                         equ 0000h
PIE3_CLC1IE_POSITION                     equ 0000h
PIE3_CLC1IE_SIZE                         equ 0001h
PIE3_CLC1IE_LENGTH                       equ 0001h
PIE3_CLC1IE_MASK                         equ 0001h
PIE3_CLC2IE_POSN                         equ 0001h
PIE3_CLC2IE_POSITION                     equ 0001h
PIE3_CLC2IE_SIZE                         equ 0001h
PIE3_CLC2IE_LENGTH                       equ 0001h
PIE3_CLC2IE_MASK                         equ 0002h
PIE3_CLC3IE_POSN                         equ 0002h
PIE3_CLC3IE_POSITION                     equ 0002h
PIE3_CLC3IE_SIZE                         equ 0001h
PIE3_CLC3IE_LENGTH                       equ 0001h
PIE3_CLC3IE_MASK                         equ 0004h
PIE3_CLC4IE_POSN                         equ 0003h
PIE3_CLC4IE_POSITION                     equ 0003h
PIE3_CLC4IE_SIZE                         equ 0001h
PIE3_CLC4IE_LENGTH                       equ 0001h
PIE3_CLC4IE_MASK                         equ 0008h
PIE3_TMR3IE_POSN                         equ 0004h
PIE3_TMR3IE_POSITION                     equ 0004h
PIE3_TMR3IE_SIZE                         equ 0001h
PIE3_TMR3IE_LENGTH                       equ 0001h
PIE3_TMR3IE_MASK                         equ 0010h
PIE3_TMR3GIE_POSN                        equ 0005h
PIE3_TMR3GIE_POSITION                    equ 0005h
PIE3_TMR3GIE_SIZE                        equ 0001h
PIE3_TMR3GIE_LENGTH                      equ 0001h
PIE3_TMR3GIE_MASK                        equ 0020h
PIE3_CSWIE_POSN                          equ 0006h
PIE3_CSWIE_POSITION                      equ 0006h
PIE3_CSWIE_SIZE                          equ 0001h
PIE3_CSWIE_LENGTH                        equ 0001h
PIE3_CSWIE_MASK                          equ 0040h
PIE3_OSFIE_POSN                          equ 0007h
PIE3_OSFIE_POSITION                      equ 0007h
PIE3_OSFIE_SIZE                          equ 0001h
PIE3_OSFIE_LENGTH                        equ 0001h
PIE3_OSFIE_MASK                          equ 0080h

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 0094h
// bitfield definitions
PIE4_CCP1IE_POSN                         equ 0000h
PIE4_CCP1IE_POSITION                     equ 0000h
PIE4_CCP1IE_SIZE                         equ 0001h
PIE4_CCP1IE_LENGTH                       equ 0001h
PIE4_CCP1IE_MASK                         equ 0001h
PIE4_CCP2IE_POSN                         equ 0001h
PIE4_CCP2IE_POSITION                     equ 0001h
PIE4_CCP2IE_SIZE                         equ 0001h
PIE4_CCP2IE_LENGTH                       equ 0001h
PIE4_CCP2IE_MASK                         equ 0002h
PIE4_CCP3IE_POSN                         equ 0002h
PIE4_CCP3IE_POSITION                     equ 0002h
PIE4_CCP3IE_SIZE                         equ 0001h
PIE4_CCP3IE_LENGTH                       equ 0001h
PIE4_CCP3IE_MASK                         equ 0004h
PIE4_CCP4IE_POSN                         equ 0003h
PIE4_CCP4IE_POSITION                     equ 0003h
PIE4_CCP4IE_SIZE                         equ 0001h
PIE4_CCP4IE_LENGTH                       equ 0001h
PIE4_CCP4IE_MASK                         equ 0008h
PIE4_TMR5IE_POSN                         equ 0004h
PIE4_TMR5IE_POSITION                     equ 0004h
PIE4_TMR5IE_SIZE                         equ 0001h
PIE4_TMR5IE_LENGTH                       equ 0001h
PIE4_TMR5IE_MASK                         equ 0010h
PIE4_TMR5GIE_POSN                        equ 0005h
PIE4_TMR5GIE_POSITION                    equ 0005h
PIE4_TMR5GIE_SIZE                        equ 0001h
PIE4_TMR5GIE_LENGTH                      equ 0001h
PIE4_TMR5GIE_MASK                        equ 0020h
PIE4_CWG1IE_POSN                         equ 0006h
PIE4_CWG1IE_POSITION                     equ 0006h
PIE4_CWG1IE_SIZE                         equ 0001h
PIE4_CWG1IE_LENGTH                       equ 0001h
PIE4_CWG1IE_MASK                         equ 0040h
PIE4_CWG2IE_POSN                         equ 0007h
PIE4_CWG2IE_POSITION                     equ 0007h
PIE4_CWG2IE_SIZE                         equ 0001h
PIE4_CWG2IE_LENGTH                       equ 0001h
PIE4_CWG2IE_MASK                         equ 0080h

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
ADCON0_CHS_SIZE                          equ 0006h
ADCON0_CHS_LENGTH                        equ 0006h
ADCON0_CHS_MASK                          equ 00FCh
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
ADCON0_CHS5_POSN                         equ 0007h
ADCON0_CHS5_POSITION                     equ 0007h
ADCON0_CHS5_SIZE                         equ 0001h
ADCON0_CHS5_LENGTH                       equ 0001h
ADCON0_CHS5_MASK                         equ 0080h
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
ADCON1_ADNREF_POSN                       equ 0002h
ADCON1_ADNREF_POSITION                   equ 0002h
ADCON1_ADNREF_SIZE                       equ 0001h
ADCON1_ADNREF_LENGTH                     equ 0001h
ADCON1_ADNREF_MASK                       equ 0004h
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

// Register: ADACT
#define ADACT ADACT
ADACT                                    equ 009Fh
// bitfield definitions
ADACT_ADACT_POSN                         equ 0000h
ADACT_ADACT_POSITION                     equ 0000h
ADACT_ADACT_SIZE                         equ 0005h
ADACT_ADACT_LENGTH                       equ 0005h
ADACT_ADACT_MASK                         equ 001Fh
ADACT_ADACT0_POSN                        equ 0000h
ADACT_ADACT0_POSITION                    equ 0000h
ADACT_ADACT0_SIZE                        equ 0001h
ADACT_ADACT0_LENGTH                      equ 0001h
ADACT_ADACT0_MASK                        equ 0001h
ADACT_ADACT1_POSN                        equ 0001h
ADACT_ADACT1_POSITION                    equ 0001h
ADACT_ADACT1_SIZE                        equ 0001h
ADACT_ADACT1_LENGTH                      equ 0001h
ADACT_ADACT1_MASK                        equ 0002h
ADACT_ADACT2_POSN                        equ 0002h
ADACT_ADACT2_POSITION                    equ 0002h
ADACT_ADACT2_SIZE                        equ 0001h
ADACT_ADACT2_LENGTH                      equ 0001h
ADACT_ADACT2_MASK                        equ 0004h
ADACT_ADACT3_POSN                        equ 0003h
ADACT_ADACT3_POSITION                    equ 0003h
ADACT_ADACT3_SIZE                        equ 0001h
ADACT_ADACT3_LENGTH                      equ 0001h
ADACT_ADACT3_MASK                        equ 0008h
ADACT_ADACT4_POSN                        equ 0004h
ADACT_ADACT4_POSITION                    equ 0004h
ADACT_ADACT4_SIZE                        equ 0001h
ADACT_ADACT4_LENGTH                      equ 0001h
ADACT_ADACT4_MASK                        equ 0010h

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

// Register: LATC
#define LATC LATC
LATC                                     equ 010Eh
// bitfield definitions
LATC_LATC0_POSN                          equ 0000h
LATC_LATC0_POSITION                      equ 0000h
LATC_LATC0_SIZE                          equ 0001h
LATC_LATC0_LENGTH                        equ 0001h
LATC_LATC0_MASK                          equ 0001h
LATC_LATC1_POSN                          equ 0001h
LATC_LATC1_POSITION                      equ 0001h
LATC_LATC1_SIZE                          equ 0001h
LATC_LATC1_LENGTH                        equ 0001h
LATC_LATC1_MASK                          equ 0002h
LATC_LATC2_POSN                          equ 0002h
LATC_LATC2_POSITION                      equ 0002h
LATC_LATC2_SIZE                          equ 0001h
LATC_LATC2_LENGTH                        equ 0001h
LATC_LATC2_MASK                          equ 0004h
LATC_LATC3_POSN                          equ 0003h
LATC_LATC3_POSITION                      equ 0003h
LATC_LATC3_SIZE                          equ 0001h
LATC_LATC3_LENGTH                        equ 0001h
LATC_LATC3_MASK                          equ 0008h
LATC_LATC4_POSN                          equ 0004h
LATC_LATC4_POSITION                      equ 0004h
LATC_LATC4_SIZE                          equ 0001h
LATC_LATC4_LENGTH                        equ 0001h
LATC_LATC4_MASK                          equ 0010h
LATC_LATC5_POSN                          equ 0005h
LATC_LATC5_POSITION                      equ 0005h
LATC_LATC5_SIZE                          equ 0001h
LATC_LATC5_LENGTH                        equ 0001h
LATC_LATC5_MASK                          equ 0020h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0111h
// bitfield definitions
CM1CON0_C1SYNC_POSN                      equ 0000h
CM1CON0_C1SYNC_POSITION                  equ 0000h
CM1CON0_C1SYNC_SIZE                      equ 0001h
CM1CON0_C1SYNC_LENGTH                    equ 0001h
CM1CON0_C1SYNC_MASK                      equ 0001h
CM1CON0_C1HYS_POSN                       equ 0001h
CM1CON0_C1HYS_POSITION                   equ 0001h
CM1CON0_C1HYS_SIZE                       equ 0001h
CM1CON0_C1HYS_LENGTH                     equ 0001h
CM1CON0_C1HYS_MASK                       equ 0002h
CM1CON0_C1SP_POSN                        equ 0002h
CM1CON0_C1SP_POSITION                    equ 0002h
CM1CON0_C1SP_SIZE                        equ 0001h
CM1CON0_C1SP_LENGTH                      equ 0001h
CM1CON0_C1SP_MASK                        equ 0004h
CM1CON0_C1POL_POSN                       equ 0004h
CM1CON0_C1POL_POSITION                   equ 0004h
CM1CON0_C1POL_SIZE                       equ 0001h
CM1CON0_C1POL_LENGTH                     equ 0001h
CM1CON0_C1POL_MASK                       equ 0010h
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

// Register: CM1CON1
#define CM1CON1 CM1CON1
CM1CON1                                  equ 0112h
// bitfield definitions
CM1CON1_C1NCH_POSN                       equ 0000h
CM1CON1_C1NCH_POSITION                   equ 0000h
CM1CON1_C1NCH_SIZE                       equ 0003h
CM1CON1_C1NCH_LENGTH                     equ 0003h
CM1CON1_C1NCH_MASK                       equ 0007h
CM1CON1_C1PCH_POSN                       equ 0003h
CM1CON1_C1PCH_POSITION                   equ 0003h
CM1CON1_C1PCH_SIZE                       equ 0003h
CM1CON1_C1PCH_LENGTH                     equ 0003h
CM1CON1_C1PCH_MASK                       equ 0038h
CM1CON1_C1INTN_POSN                      equ 0006h
CM1CON1_C1INTN_POSITION                  equ 0006h
CM1CON1_C1INTN_SIZE                      equ 0001h
CM1CON1_C1INTN_LENGTH                    equ 0001h
CM1CON1_C1INTN_MASK                      equ 0040h
CM1CON1_C1INTP_POSN                      equ 0007h
CM1CON1_C1INTP_POSITION                  equ 0007h
CM1CON1_C1INTP_SIZE                      equ 0001h
CM1CON1_C1INTP_LENGTH                    equ 0001h
CM1CON1_C1INTP_MASK                      equ 0080h
CM1CON1_C1NCH0_POSN                      equ 0000h
CM1CON1_C1NCH0_POSITION                  equ 0000h
CM1CON1_C1NCH0_SIZE                      equ 0001h
CM1CON1_C1NCH0_LENGTH                    equ 0001h
CM1CON1_C1NCH0_MASK                      equ 0001h
CM1CON1_C1NCH1_POSN                      equ 0001h
CM1CON1_C1NCH1_POSITION                  equ 0001h
CM1CON1_C1NCH1_SIZE                      equ 0001h
CM1CON1_C1NCH1_LENGTH                    equ 0001h
CM1CON1_C1NCH1_MASK                      equ 0002h
CM1CON1_C1NCH2_POSN                      equ 0002h
CM1CON1_C1NCH2_POSITION                  equ 0002h
CM1CON1_C1NCH2_SIZE                      equ 0001h
CM1CON1_C1NCH2_LENGTH                    equ 0001h
CM1CON1_C1NCH2_MASK                      equ 0004h
CM1CON1_C1PCH0_POSN                      equ 0003h
CM1CON1_C1PCH0_POSITION                  equ 0003h
CM1CON1_C1PCH0_SIZE                      equ 0001h
CM1CON1_C1PCH0_LENGTH                    equ 0001h
CM1CON1_C1PCH0_MASK                      equ 0008h
CM1CON1_C1PCH1_POSN                      equ 0004h
CM1CON1_C1PCH1_POSITION                  equ 0004h
CM1CON1_C1PCH1_SIZE                      equ 0001h
CM1CON1_C1PCH1_LENGTH                    equ 0001h
CM1CON1_C1PCH1_MASK                      equ 0010h
CM1CON1_C1PCH2_POSN                      equ 0005h
CM1CON1_C1PCH2_POSITION                  equ 0005h
CM1CON1_C1PCH2_SIZE                      equ 0001h
CM1CON1_C1PCH2_LENGTH                    equ 0001h
CM1CON1_C1PCH2_MASK                      equ 0020h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0113h
// bitfield definitions
CM2CON0_C2SYNC_POSN                      equ 0000h
CM2CON0_C2SYNC_POSITION                  equ 0000h
CM2CON0_C2SYNC_SIZE                      equ 0001h
CM2CON0_C2SYNC_LENGTH                    equ 0001h
CM2CON0_C2SYNC_MASK                      equ 0001h
CM2CON0_C2HYS_POSN                       equ 0001h
CM2CON0_C2HYS_POSITION                   equ 0001h
CM2CON0_C2HYS_SIZE                       equ 0001h
CM2CON0_C2HYS_LENGTH                     equ 0001h
CM2CON0_C2HYS_MASK                       equ 0002h
CM2CON0_C2SP_POSN                        equ 0002h
CM2CON0_C2SP_POSITION                    equ 0002h
CM2CON0_C2SP_SIZE                        equ 0001h
CM2CON0_C2SP_LENGTH                      equ 0001h
CM2CON0_C2SP_MASK                        equ 0004h
CM2CON0_C2POL_POSN                       equ 0004h
CM2CON0_C2POL_POSITION                   equ 0004h
CM2CON0_C2POL_SIZE                       equ 0001h
CM2CON0_C2POL_LENGTH                     equ 0001h
CM2CON0_C2POL_MASK                       equ 0010h
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

// Register: CM2CON1
#define CM2CON1 CM2CON1
CM2CON1                                  equ 0114h
// bitfield definitions
CM2CON1_C2NCH_POSN                       equ 0000h
CM2CON1_C2NCH_POSITION                   equ 0000h
CM2CON1_C2NCH_SIZE                       equ 0003h
CM2CON1_C2NCH_LENGTH                     equ 0003h
CM2CON1_C2NCH_MASK                       equ 0007h
CM2CON1_C2PCH_POSN                       equ 0003h
CM2CON1_C2PCH_POSITION                   equ 0003h
CM2CON1_C2PCH_SIZE                       equ 0003h
CM2CON1_C2PCH_LENGTH                     equ 0003h
CM2CON1_C2PCH_MASK                       equ 0038h
CM2CON1_C2INTN_POSN                      equ 0006h
CM2CON1_C2INTN_POSITION                  equ 0006h
CM2CON1_C2INTN_SIZE                      equ 0001h
CM2CON1_C2INTN_LENGTH                    equ 0001h
CM2CON1_C2INTN_MASK                      equ 0040h
CM2CON1_C2INTP_POSN                      equ 0007h
CM2CON1_C2INTP_POSITION                  equ 0007h
CM2CON1_C2INTP_SIZE                      equ 0001h
CM2CON1_C2INTP_LENGTH                    equ 0001h
CM2CON1_C2INTP_MASK                      equ 0080h
CM2CON1_C2NCH0_POSN                      equ 0000h
CM2CON1_C2NCH0_POSITION                  equ 0000h
CM2CON1_C2NCH0_SIZE                      equ 0001h
CM2CON1_C2NCH0_LENGTH                    equ 0001h
CM2CON1_C2NCH0_MASK                      equ 0001h
CM2CON1_C2NCH1_POSN                      equ 0001h
CM2CON1_C2NCH1_POSITION                  equ 0001h
CM2CON1_C2NCH1_SIZE                      equ 0001h
CM2CON1_C2NCH1_LENGTH                    equ 0001h
CM2CON1_C2NCH1_MASK                      equ 0002h
CM2CON1_C2NCH2_POSN                      equ 0002h
CM2CON1_C2NCH2_POSITION                  equ 0002h
CM2CON1_C2NCH2_SIZE                      equ 0001h
CM2CON1_C2NCH2_LENGTH                    equ 0001h
CM2CON1_C2NCH2_MASK                      equ 0004h
CM2CON1_C2PCH0_POSN                      equ 0003h
CM2CON1_C2PCH0_POSITION                  equ 0003h
CM2CON1_C2PCH0_SIZE                      equ 0001h
CM2CON1_C2PCH0_LENGTH                    equ 0001h
CM2CON1_C2PCH0_MASK                      equ 0008h
CM2CON1_C2PCH1_POSN                      equ 0004h
CM2CON1_C2PCH1_POSITION                  equ 0004h
CM2CON1_C2PCH1_SIZE                      equ 0001h
CM2CON1_C2PCH1_LENGTH                    equ 0001h
CM2CON1_C2PCH1_MASK                      equ 0010h
CM2CON1_C2PCH2_POSN                      equ 0005h
CM2CON1_C2PCH2_POSITION                  equ 0005h
CM2CON1_C2PCH2_SIZE                      equ 0001h
CM2CON1_C2PCH2_LENGTH                    equ 0001h
CM2CON1_C2PCH2_MASK                      equ 0020h

// Register: CMOUT
#define CMOUT CMOUT
CMOUT                                    equ 0115h
// bitfield definitions
CMOUT_MC1OUT_POSN                        equ 0000h
CMOUT_MC1OUT_POSITION                    equ 0000h
CMOUT_MC1OUT_SIZE                        equ 0001h
CMOUT_MC1OUT_LENGTH                      equ 0001h
CMOUT_MC1OUT_MASK                        equ 0001h
CMOUT_MC2OUT_POSN                        equ 0001h
CMOUT_MC2OUT_POSITION                    equ 0001h
CMOUT_MC2OUT_SIZE                        equ 0001h
CMOUT_MC2OUT_LENGTH                      equ 0001h
CMOUT_MC2OUT_MASK                        equ 0002h

// Register: BORCON
#define BORCON BORCON
BORCON                                   equ 0116h
// bitfield definitions
BORCON_BORRDY_POSN                       equ 0000h
BORCON_BORRDY_POSITION                   equ 0000h
BORCON_BORRDY_SIZE                       equ 0001h
BORCON_BORRDY_LENGTH                     equ 0001h
BORCON_BORRDY_MASK                       equ 0001h
BORCON_SBOREN_POSN                       equ 0007h
BORCON_SBOREN_POSITION                   equ 0007h
BORCON_SBOREN_SIZE                       equ 0001h
BORCON_SBOREN_LENGTH                     equ 0001h
BORCON_SBOREN_MASK                       equ 0080h

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 0117h
// bitfield definitions
FVRCON_ADFVR_POSN                        equ 0000h
FVRCON_ADFVR_POSITION                    equ 0000h
FVRCON_ADFVR_SIZE                        equ 0002h
FVRCON_ADFVR_LENGTH                      equ 0002h
FVRCON_ADFVR_MASK                        equ 0003h
FVRCON_CDAFVR_POSN                       equ 0002h
FVRCON_CDAFVR_POSITION                   equ 0002h
FVRCON_CDAFVR_SIZE                       equ 0002h
FVRCON_CDAFVR_LENGTH                     equ 0002h
FVRCON_CDAFVR_MASK                       equ 000Ch
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
FVRCON_CDAFVR0_POSN                      equ 0002h
FVRCON_CDAFVR0_POSITION                  equ 0002h
FVRCON_CDAFVR0_SIZE                      equ 0001h
FVRCON_CDAFVR0_LENGTH                    equ 0001h
FVRCON_CDAFVR0_MASK                      equ 0004h
FVRCON_CDAFVR1_POSN                      equ 0003h
FVRCON_CDAFVR1_POSITION                  equ 0003h
FVRCON_CDAFVR1_SIZE                      equ 0001h
FVRCON_CDAFVR1_LENGTH                    equ 0001h
FVRCON_CDAFVR1_MASK                      equ 0008h

// Register: DACCON0
#define DACCON0 DACCON0
DACCON0                                  equ 0118h
// bitfield definitions
DACCON0_DAC1NSS_POSN                     equ 0000h
DACCON0_DAC1NSS_POSITION                 equ 0000h
DACCON0_DAC1NSS_SIZE                     equ 0001h
DACCON0_DAC1NSS_LENGTH                   equ 0001h
DACCON0_DAC1NSS_MASK                     equ 0001h
DACCON0_DAC1PSS_POSN                     equ 0002h
DACCON0_DAC1PSS_POSITION                 equ 0002h
DACCON0_DAC1PSS_SIZE                     equ 0002h
DACCON0_DAC1PSS_LENGTH                   equ 0002h
DACCON0_DAC1PSS_MASK                     equ 000Ch
DACCON0_DAC1OE_POSN                      equ 0005h
DACCON0_DAC1OE_POSITION                  equ 0005h
DACCON0_DAC1OE_SIZE                      equ 0001h
DACCON0_DAC1OE_LENGTH                    equ 0001h
DACCON0_DAC1OE_MASK                      equ 0020h
DACCON0_DAC1EN_POSN                      equ 0007h
DACCON0_DAC1EN_POSITION                  equ 0007h
DACCON0_DAC1EN_SIZE                      equ 0001h
DACCON0_DAC1EN_LENGTH                    equ 0001h
DACCON0_DAC1EN_MASK                      equ 0080h
DACCON0_DAC1PSS0_POSN                    equ 0002h
DACCON0_DAC1PSS0_POSITION                equ 0002h
DACCON0_DAC1PSS0_SIZE                    equ 0001h
DACCON0_DAC1PSS0_LENGTH                  equ 0001h
DACCON0_DAC1PSS0_MASK                    equ 0004h
DACCON0_DAC1PSS1_POSN                    equ 0003h
DACCON0_DAC1PSS1_POSITION                equ 0003h
DACCON0_DAC1PSS1_SIZE                    equ 0001h
DACCON0_DAC1PSS1_LENGTH                  equ 0001h
DACCON0_DAC1PSS1_MASK                    equ 0008h

// Register: DACCON1
#define DACCON1 DACCON1
DACCON1                                  equ 0119h
// bitfield definitions
DACCON1_DAC1R_POSN                       equ 0000h
DACCON1_DAC1R_POSITION                   equ 0000h
DACCON1_DAC1R_SIZE                       equ 0005h
DACCON1_DAC1R_LENGTH                     equ 0005h
DACCON1_DAC1R_MASK                       equ 001Fh
DACCON1_DAC1R0_POSN                      equ 0000h
DACCON1_DAC1R0_POSITION                  equ 0000h
DACCON1_DAC1R0_SIZE                      equ 0001h
DACCON1_DAC1R0_LENGTH                    equ 0001h
DACCON1_DAC1R0_MASK                      equ 0001h
DACCON1_DAC1R1_POSN                      equ 0001h
DACCON1_DAC1R1_POSITION                  equ 0001h
DACCON1_DAC1R1_SIZE                      equ 0001h
DACCON1_DAC1R1_LENGTH                    equ 0001h
DACCON1_DAC1R1_MASK                      equ 0002h
DACCON1_DAC1R2_POSN                      equ 0002h
DACCON1_DAC1R2_POSITION                  equ 0002h
DACCON1_DAC1R2_SIZE                      equ 0001h
DACCON1_DAC1R2_LENGTH                    equ 0001h
DACCON1_DAC1R2_MASK                      equ 0004h
DACCON1_DAC1R3_POSN                      equ 0003h
DACCON1_DAC1R3_POSITION                  equ 0003h
DACCON1_DAC1R3_SIZE                      equ 0001h
DACCON1_DAC1R3_LENGTH                    equ 0001h
DACCON1_DAC1R3_MASK                      equ 0008h
DACCON1_DAC1R4_POSN                      equ 0004h
DACCON1_DAC1R4_POSITION                  equ 0004h
DACCON1_DAC1R4_SIZE                      equ 0001h
DACCON1_DAC1R4_LENGTH                    equ 0001h
DACCON1_DAC1R4_MASK                      equ 0010h

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

// Register: ANSELC
#define ANSELC ANSELC
ANSELC                                   equ 018Eh
// bitfield definitions
ANSELC_ANSC0_POSN                        equ 0000h
ANSELC_ANSC0_POSITION                    equ 0000h
ANSELC_ANSC0_SIZE                        equ 0001h
ANSELC_ANSC0_LENGTH                      equ 0001h
ANSELC_ANSC0_MASK                        equ 0001h
ANSELC_ANSC1_POSN                        equ 0001h
ANSELC_ANSC1_POSITION                    equ 0001h
ANSELC_ANSC1_SIZE                        equ 0001h
ANSELC_ANSC1_LENGTH                      equ 0001h
ANSELC_ANSC1_MASK                        equ 0002h
ANSELC_ANSC2_POSN                        equ 0002h
ANSELC_ANSC2_POSITION                    equ 0002h
ANSELC_ANSC2_SIZE                        equ 0001h
ANSELC_ANSC2_LENGTH                      equ 0001h
ANSELC_ANSC2_MASK                        equ 0004h
ANSELC_ANSC3_POSN                        equ 0003h
ANSELC_ANSC3_POSITION                    equ 0003h
ANSELC_ANSC3_SIZE                        equ 0001h
ANSELC_ANSC3_LENGTH                      equ 0001h
ANSELC_ANSC3_MASK                        equ 0008h
ANSELC_ANSC4_POSN                        equ 0004h
ANSELC_ANSC4_POSITION                    equ 0004h
ANSELC_ANSC4_SIZE                        equ 0001h
ANSELC_ANSC4_LENGTH                      equ 0001h
ANSELC_ANSC4_MASK                        equ 0010h
ANSELC_ANSC5_POSN                        equ 0005h
ANSELC_ANSC5_POSITION                    equ 0005h
ANSELC_ANSC5_SIZE                        equ 0001h
ANSELC_ANSC5_LENGTH                      equ 0001h
ANSELC_ANSC5_MASK                        equ 0020h

// Register: RC1REG
#define RC1REG RC1REG
RC1REG                                   equ 0199h
// bitfield definitions
RC1REG_RC1REG_POSN                       equ 0000h
RC1REG_RC1REG_POSITION                   equ 0000h
RC1REG_RC1REG_SIZE                       equ 0008h
RC1REG_RC1REG_LENGTH                     equ 0008h
RC1REG_RC1REG_MASK                       equ 00FFh

// Register: TX1REG
#define TX1REG TX1REG
TX1REG                                   equ 019Ah
// bitfield definitions
TX1REG_TX1REG_POSN                       equ 0000h
TX1REG_TX1REG_POSITION                   equ 0000h
TX1REG_TX1REG_SIZE                       equ 0008h
TX1REG_TX1REG_LENGTH                     equ 0008h
TX1REG_TX1REG_MASK                       equ 00FFh

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
SP1BRGL                                  equ 019Bh
// bitfield definitions
SP1BRGL_SP1BRGL_POSN                     equ 0000h
SP1BRGL_SP1BRGL_POSITION                 equ 0000h
SP1BRGL_SP1BRGL_SIZE                     equ 0008h
SP1BRGL_SP1BRGL_LENGTH                   equ 0008h
SP1BRGL_SP1BRGL_MASK                     equ 00FFh

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
SP1BRGH                                  equ 019Ch
// bitfield definitions
SP1BRGH_SP1BRGH_POSN                     equ 0000h
SP1BRGH_SP1BRGH_POSITION                 equ 0000h
SP1BRGH_SP1BRGH_SIZE                     equ 0008h
SP1BRGH_SP1BRGH_LENGTH                   equ 0008h
SP1BRGH_SP1BRGH_MASK                     equ 00FFh

// Register: RC1STA
#define RC1STA RC1STA
RC1STA                                   equ 019Dh
// bitfield definitions
RC1STA_RX9D_POSN                         equ 0000h
RC1STA_RX9D_POSITION                     equ 0000h
RC1STA_RX9D_SIZE                         equ 0001h
RC1STA_RX9D_LENGTH                       equ 0001h
RC1STA_RX9D_MASK                         equ 0001h
RC1STA_OERR_POSN                         equ 0001h
RC1STA_OERR_POSITION                     equ 0001h
RC1STA_OERR_SIZE                         equ 0001h
RC1STA_OERR_LENGTH                       equ 0001h
RC1STA_OERR_MASK                         equ 0002h
RC1STA_FERR_POSN                         equ 0002h
RC1STA_FERR_POSITION                     equ 0002h
RC1STA_FERR_SIZE                         equ 0001h
RC1STA_FERR_LENGTH                       equ 0001h
RC1STA_FERR_MASK                         equ 0004h
RC1STA_ADDEN_POSN                        equ 0003h
RC1STA_ADDEN_POSITION                    equ 0003h
RC1STA_ADDEN_SIZE                        equ 0001h
RC1STA_ADDEN_LENGTH                      equ 0001h
RC1STA_ADDEN_MASK                        equ 0008h
RC1STA_CREN_POSN                         equ 0004h
RC1STA_CREN_POSITION                     equ 0004h
RC1STA_CREN_SIZE                         equ 0001h
RC1STA_CREN_LENGTH                       equ 0001h
RC1STA_CREN_MASK                         equ 0010h
RC1STA_SREN_POSN                         equ 0005h
RC1STA_SREN_POSITION                     equ 0005h
RC1STA_SREN_SIZE                         equ 0001h
RC1STA_SREN_LENGTH                       equ 0001h
RC1STA_SREN_MASK                         equ 0020h
RC1STA_RX9_POSN                          equ 0006h
RC1STA_RX9_POSITION                      equ 0006h
RC1STA_RX9_SIZE                          equ 0001h
RC1STA_RX9_LENGTH                        equ 0001h
RC1STA_RX9_MASK                          equ 0040h
RC1STA_SPEN_POSN                         equ 0007h
RC1STA_SPEN_POSITION                     equ 0007h
RC1STA_SPEN_SIZE                         equ 0001h
RC1STA_SPEN_LENGTH                       equ 0001h
RC1STA_SPEN_MASK                         equ 0080h

// Register: TX1STA
#define TX1STA TX1STA
TX1STA                                   equ 019Eh
// bitfield definitions
TX1STA_TX9D_POSN                         equ 0000h
TX1STA_TX9D_POSITION                     equ 0000h
TX1STA_TX9D_SIZE                         equ 0001h
TX1STA_TX9D_LENGTH                       equ 0001h
TX1STA_TX9D_MASK                         equ 0001h
TX1STA_TRMT_POSN                         equ 0001h
TX1STA_TRMT_POSITION                     equ 0001h
TX1STA_TRMT_SIZE                         equ 0001h
TX1STA_TRMT_LENGTH                       equ 0001h
TX1STA_TRMT_MASK                         equ 0002h
TX1STA_BRGH_POSN                         equ 0002h
TX1STA_BRGH_POSITION                     equ 0002h
TX1STA_BRGH_SIZE                         equ 0001h
TX1STA_BRGH_LENGTH                       equ 0001h
TX1STA_BRGH_MASK                         equ 0004h
TX1STA_SENDB_POSN                        equ 0003h
TX1STA_SENDB_POSITION                    equ 0003h
TX1STA_SENDB_SIZE                        equ 0001h
TX1STA_SENDB_LENGTH                      equ 0001h
TX1STA_SENDB_MASK                        equ 0008h
TX1STA_SYNC_POSN                         equ 0004h
TX1STA_SYNC_POSITION                     equ 0004h
TX1STA_SYNC_SIZE                         equ 0001h
TX1STA_SYNC_LENGTH                       equ 0001h
TX1STA_SYNC_MASK                         equ 0010h
TX1STA_TXEN_POSN                         equ 0005h
TX1STA_TXEN_POSITION                     equ 0005h
TX1STA_TXEN_SIZE                         equ 0001h
TX1STA_TXEN_LENGTH                       equ 0001h
TX1STA_TXEN_MASK                         equ 0020h
TX1STA_TX9_POSN                          equ 0006h
TX1STA_TX9_POSITION                      equ 0006h
TX1STA_TX9_SIZE                          equ 0001h
TX1STA_TX9_LENGTH                        equ 0001h
TX1STA_TX9_MASK                          equ 0040h
TX1STA_CSRC_POSN                         equ 0007h
TX1STA_CSRC_POSITION                     equ 0007h
TX1STA_CSRC_SIZE                         equ 0001h
TX1STA_CSRC_LENGTH                       equ 0001h
TX1STA_CSRC_MASK                         equ 0080h

// Register: BAUD1CON
#define BAUD1CON BAUD1CON
BAUD1CON                                 equ 019Fh
// bitfield definitions
BAUD1CON_ABDEN_POSN                      equ 0000h
BAUD1CON_ABDEN_POSITION                  equ 0000h
BAUD1CON_ABDEN_SIZE                      equ 0001h
BAUD1CON_ABDEN_LENGTH                    equ 0001h
BAUD1CON_ABDEN_MASK                      equ 0001h
BAUD1CON_WUE_POSN                        equ 0001h
BAUD1CON_WUE_POSITION                    equ 0001h
BAUD1CON_WUE_SIZE                        equ 0001h
BAUD1CON_WUE_LENGTH                      equ 0001h
BAUD1CON_WUE_MASK                        equ 0002h
BAUD1CON_BRG16_POSN                      equ 0003h
BAUD1CON_BRG16_POSITION                  equ 0003h
BAUD1CON_BRG16_SIZE                      equ 0001h
BAUD1CON_BRG16_LENGTH                    equ 0001h
BAUD1CON_BRG16_MASK                      equ 0008h
BAUD1CON_SCKP_POSN                       equ 0004h
BAUD1CON_SCKP_POSITION                   equ 0004h
BAUD1CON_SCKP_SIZE                       equ 0001h
BAUD1CON_SCKP_LENGTH                     equ 0001h
BAUD1CON_SCKP_MASK                       equ 0010h
BAUD1CON_RCIDL_POSN                      equ 0006h
BAUD1CON_RCIDL_POSITION                  equ 0006h
BAUD1CON_RCIDL_SIZE                      equ 0001h
BAUD1CON_RCIDL_LENGTH                    equ 0001h
BAUD1CON_RCIDL_MASK                      equ 0040h
BAUD1CON_ABDOVF_POSN                     equ 0007h
BAUD1CON_ABDOVF_POSITION                 equ 0007h
BAUD1CON_ABDOVF_SIZE                     equ 0001h
BAUD1CON_ABDOVF_LENGTH                   equ 0001h
BAUD1CON_ABDOVF_MASK                     equ 0080h

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

// Register: WPUC
#define WPUC WPUC
WPUC                                     equ 020Eh
// bitfield definitions
WPUC_WPUC0_POSN                          equ 0000h
WPUC_WPUC0_POSITION                      equ 0000h
WPUC_WPUC0_SIZE                          equ 0001h
WPUC_WPUC0_LENGTH                        equ 0001h
WPUC_WPUC0_MASK                          equ 0001h
WPUC_WPUC1_POSN                          equ 0001h
WPUC_WPUC1_POSITION                      equ 0001h
WPUC_WPUC1_SIZE                          equ 0001h
WPUC_WPUC1_LENGTH                        equ 0001h
WPUC_WPUC1_MASK                          equ 0002h
WPUC_WPUC2_POSN                          equ 0002h
WPUC_WPUC2_POSITION                      equ 0002h
WPUC_WPUC2_SIZE                          equ 0001h
WPUC_WPUC2_LENGTH                        equ 0001h
WPUC_WPUC2_MASK                          equ 0004h
WPUC_WPUC3_POSN                          equ 0003h
WPUC_WPUC3_POSITION                      equ 0003h
WPUC_WPUC3_SIZE                          equ 0001h
WPUC_WPUC3_LENGTH                        equ 0001h
WPUC_WPUC3_MASK                          equ 0008h
WPUC_WPUC4_POSN                          equ 0004h
WPUC_WPUC4_POSITION                      equ 0004h
WPUC_WPUC4_SIZE                          equ 0001h
WPUC_WPUC4_LENGTH                        equ 0001h
WPUC_WPUC4_MASK                          equ 0010h
WPUC_WPUC5_POSN                          equ 0005h
WPUC_WPUC5_POSITION                      equ 0005h
WPUC_WPUC5_SIZE                          equ 0001h
WPUC_WPUC5_LENGTH                        equ 0001h
WPUC_WPUC5_MASK                          equ 0020h

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
SSP1BUF                                  equ 0211h
// bitfield definitions
SSP1BUF_SSP1BUF0_POSN                    equ 0000h
SSP1BUF_SSP1BUF0_POSITION                equ 0000h
SSP1BUF_SSP1BUF0_SIZE                    equ 0001h
SSP1BUF_SSP1BUF0_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF0_MASK                    equ 0001h
SSP1BUF_SSP1BUF1_POSN                    equ 0001h
SSP1BUF_SSP1BUF1_POSITION                equ 0001h
SSP1BUF_SSP1BUF1_SIZE                    equ 0001h
SSP1BUF_SSP1BUF1_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF1_MASK                    equ 0002h
SSP1BUF_SSP1BUF2_POSN                    equ 0002h
SSP1BUF_SSP1BUF2_POSITION                equ 0002h
SSP1BUF_SSP1BUF2_SIZE                    equ 0001h
SSP1BUF_SSP1BUF2_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF2_MASK                    equ 0004h
SSP1BUF_SSP1BUF3_POSN                    equ 0003h
SSP1BUF_SSP1BUF3_POSITION                equ 0003h
SSP1BUF_SSP1BUF3_SIZE                    equ 0001h
SSP1BUF_SSP1BUF3_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF3_MASK                    equ 0008h
SSP1BUF_SSP1BUF4_POSN                    equ 0004h
SSP1BUF_SSP1BUF4_POSITION                equ 0004h
SSP1BUF_SSP1BUF4_SIZE                    equ 0001h
SSP1BUF_SSP1BUF4_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF4_MASK                    equ 0010h
SSP1BUF_SSP1BUF5_POSN                    equ 0005h
SSP1BUF_SSP1BUF5_POSITION                equ 0005h
SSP1BUF_SSP1BUF5_SIZE                    equ 0001h
SSP1BUF_SSP1BUF5_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF5_MASK                    equ 0020h
SSP1BUF_SSP1BUF6_POSN                    equ 0006h
SSP1BUF_SSP1BUF6_POSITION                equ 0006h
SSP1BUF_SSP1BUF6_SIZE                    equ 0001h
SSP1BUF_SSP1BUF6_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF6_MASK                    equ 0040h
SSP1BUF_SSP1BUF7_POSN                    equ 0007h
SSP1BUF_SSP1BUF7_POSITION                equ 0007h
SSP1BUF_SSP1BUF7_SIZE                    equ 0001h
SSP1BUF_SSP1BUF7_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF7_MASK                    equ 0080h
SSP1BUF_BUF_POSN                         equ 0000h
SSP1BUF_BUF_POSITION                     equ 0000h
SSP1BUF_BUF_SIZE                         equ 0008h
SSP1BUF_BUF_LENGTH                       equ 0008h
SSP1BUF_BUF_MASK                         equ 00FFh
SSP1BUF_BUF0_POSN                        equ 0000h
SSP1BUF_BUF0_POSITION                    equ 0000h
SSP1BUF_BUF0_SIZE                        equ 0001h
SSP1BUF_BUF0_LENGTH                      equ 0001h
SSP1BUF_BUF0_MASK                        equ 0001h
SSP1BUF_BUF1_POSN                        equ 0001h
SSP1BUF_BUF1_POSITION                    equ 0001h
SSP1BUF_BUF1_SIZE                        equ 0001h
SSP1BUF_BUF1_LENGTH                      equ 0001h
SSP1BUF_BUF1_MASK                        equ 0002h
SSP1BUF_BUF2_POSN                        equ 0002h
SSP1BUF_BUF2_POSITION                    equ 0002h
SSP1BUF_BUF2_SIZE                        equ 0001h
SSP1BUF_BUF2_LENGTH                      equ 0001h
SSP1BUF_BUF2_MASK                        equ 0004h
SSP1BUF_BUF3_POSN                        equ 0003h
SSP1BUF_BUF3_POSITION                    equ 0003h
SSP1BUF_BUF3_SIZE                        equ 0001h
SSP1BUF_BUF3_LENGTH                      equ 0001h
SSP1BUF_BUF3_MASK                        equ 0008h
SSP1BUF_BUF4_POSN                        equ 0004h
SSP1BUF_BUF4_POSITION                    equ 0004h
SSP1BUF_BUF4_SIZE                        equ 0001h
SSP1BUF_BUF4_LENGTH                      equ 0001h
SSP1BUF_BUF4_MASK                        equ 0010h
SSP1BUF_BUF5_POSN                        equ 0005h
SSP1BUF_BUF5_POSITION                    equ 0005h
SSP1BUF_BUF5_SIZE                        equ 0001h
SSP1BUF_BUF5_LENGTH                      equ 0001h
SSP1BUF_BUF5_MASK                        equ 0020h
SSP1BUF_BUF6_POSN                        equ 0006h
SSP1BUF_BUF6_POSITION                    equ 0006h
SSP1BUF_BUF6_SIZE                        equ 0001h
SSP1BUF_BUF6_LENGTH                      equ 0001h
SSP1BUF_BUF6_MASK                        equ 0040h
SSP1BUF_BUF7_POSN                        equ 0007h
SSP1BUF_BUF7_POSITION                    equ 0007h
SSP1BUF_BUF7_SIZE                        equ 0001h
SSP1BUF_BUF7_LENGTH                      equ 0001h
SSP1BUF_BUF7_MASK                        equ 0080h
SSP1BUF_SSP1BUF_POSN                     equ 0000h
SSP1BUF_SSP1BUF_POSITION                 equ 0000h
SSP1BUF_SSP1BUF_SIZE                     equ 0008h
SSP1BUF_SSP1BUF_LENGTH                   equ 0008h
SSP1BUF_SSP1BUF_MASK                     equ 00FFh

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
SSP1ADD                                  equ 0212h
// bitfield definitions
SSP1ADD_SSP1ADD0_POSN                    equ 0000h
SSP1ADD_SSP1ADD0_POSITION                equ 0000h
SSP1ADD_SSP1ADD0_SIZE                    equ 0001h
SSP1ADD_SSP1ADD0_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD0_MASK                    equ 0001h
SSP1ADD_SSP1ADD1_POSN                    equ 0001h
SSP1ADD_SSP1ADD1_POSITION                equ 0001h
SSP1ADD_SSP1ADD1_SIZE                    equ 0001h
SSP1ADD_SSP1ADD1_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD1_MASK                    equ 0002h
SSP1ADD_SSP1ADD2_POSN                    equ 0002h
SSP1ADD_SSP1ADD2_POSITION                equ 0002h
SSP1ADD_SSP1ADD2_SIZE                    equ 0001h
SSP1ADD_SSP1ADD2_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD2_MASK                    equ 0004h
SSP1ADD_SSP1ADD3_POSN                    equ 0003h
SSP1ADD_SSP1ADD3_POSITION                equ 0003h
SSP1ADD_SSP1ADD3_SIZE                    equ 0001h
SSP1ADD_SSP1ADD3_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD3_MASK                    equ 0008h
SSP1ADD_SSP1ADD4_POSN                    equ 0004h
SSP1ADD_SSP1ADD4_POSITION                equ 0004h
SSP1ADD_SSP1ADD4_SIZE                    equ 0001h
SSP1ADD_SSP1ADD4_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD4_MASK                    equ 0010h
SSP1ADD_SSP1ADD5_POSN                    equ 0005h
SSP1ADD_SSP1ADD5_POSITION                equ 0005h
SSP1ADD_SSP1ADD5_SIZE                    equ 0001h
SSP1ADD_SSP1ADD5_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD5_MASK                    equ 0020h
SSP1ADD_SSP1ADD6_POSN                    equ 0006h
SSP1ADD_SSP1ADD6_POSITION                equ 0006h
SSP1ADD_SSP1ADD6_SIZE                    equ 0001h
SSP1ADD_SSP1ADD6_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD6_MASK                    equ 0040h
SSP1ADD_SSP1ADD7_POSN                    equ 0007h
SSP1ADD_SSP1ADD7_POSITION                equ 0007h
SSP1ADD_SSP1ADD7_SIZE                    equ 0001h
SSP1ADD_SSP1ADD7_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD7_MASK                    equ 0080h
SSP1ADD_ADD_POSN                         equ 0000h
SSP1ADD_ADD_POSITION                     equ 0000h
SSP1ADD_ADD_SIZE                         equ 0008h
SSP1ADD_ADD_LENGTH                       equ 0008h
SSP1ADD_ADD_MASK                         equ 00FFh
SSP1ADD_ADD0_POSN                        equ 0000h
SSP1ADD_ADD0_POSITION                    equ 0000h
SSP1ADD_ADD0_SIZE                        equ 0001h
SSP1ADD_ADD0_LENGTH                      equ 0001h
SSP1ADD_ADD0_MASK                        equ 0001h
SSP1ADD_ADD1_POSN                        equ 0001h
SSP1ADD_ADD1_POSITION                    equ 0001h
SSP1ADD_ADD1_SIZE                        equ 0001h
SSP1ADD_ADD1_LENGTH                      equ 0001h
SSP1ADD_ADD1_MASK                        equ 0002h
SSP1ADD_ADD2_POSN                        equ 0002h
SSP1ADD_ADD2_POSITION                    equ 0002h
SSP1ADD_ADD2_SIZE                        equ 0001h
SSP1ADD_ADD2_LENGTH                      equ 0001h
SSP1ADD_ADD2_MASK                        equ 0004h
SSP1ADD_ADD3_POSN                        equ 0003h
SSP1ADD_ADD3_POSITION                    equ 0003h
SSP1ADD_ADD3_SIZE                        equ 0001h
SSP1ADD_ADD3_LENGTH                      equ 0001h
SSP1ADD_ADD3_MASK                        equ 0008h
SSP1ADD_ADD4_POSN                        equ 0004h
SSP1ADD_ADD4_POSITION                    equ 0004h
SSP1ADD_ADD4_SIZE                        equ 0001h
SSP1ADD_ADD4_LENGTH                      equ 0001h
SSP1ADD_ADD4_MASK                        equ 0010h
SSP1ADD_ADD5_POSN                        equ 0005h
SSP1ADD_ADD5_POSITION                    equ 0005h
SSP1ADD_ADD5_SIZE                        equ 0001h
SSP1ADD_ADD5_LENGTH                      equ 0001h
SSP1ADD_ADD5_MASK                        equ 0020h
SSP1ADD_ADD6_POSN                        equ 0006h
SSP1ADD_ADD6_POSITION                    equ 0006h
SSP1ADD_ADD6_SIZE                        equ 0001h
SSP1ADD_ADD6_LENGTH                      equ 0001h
SSP1ADD_ADD6_MASK                        equ 0040h
SSP1ADD_ADD7_POSN                        equ 0007h
SSP1ADD_ADD7_POSITION                    equ 0007h
SSP1ADD_ADD7_SIZE                        equ 0001h
SSP1ADD_ADD7_LENGTH                      equ 0001h
SSP1ADD_ADD7_MASK                        equ 0080h
SSP1ADD_SSP1ADD_POSN                     equ 0000h
SSP1ADD_SSP1ADD_POSITION                 equ 0000h
SSP1ADD_SSP1ADD_SIZE                     equ 0008h
SSP1ADD_SSP1ADD_LENGTH                   equ 0008h
SSP1ADD_SSP1ADD_MASK                     equ 00FFh

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
SSP1MSK                                  equ 0213h
// bitfield definitions
SSP1MSK_SSP1MSK0_POSN                    equ 0000h
SSP1MSK_SSP1MSK0_POSITION                equ 0000h
SSP1MSK_SSP1MSK0_SIZE                    equ 0001h
SSP1MSK_SSP1MSK0_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK0_MASK                    equ 0001h
SSP1MSK_SSP1MSK1_POSN                    equ 0001h
SSP1MSK_SSP1MSK1_POSITION                equ 0001h
SSP1MSK_SSP1MSK1_SIZE                    equ 0001h
SSP1MSK_SSP1MSK1_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK1_MASK                    equ 0002h
SSP1MSK_SSP1MSK2_POSN                    equ 0002h
SSP1MSK_SSP1MSK2_POSITION                equ 0002h
SSP1MSK_SSP1MSK2_SIZE                    equ 0001h
SSP1MSK_SSP1MSK2_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK2_MASK                    equ 0004h
SSP1MSK_SSP1MSK3_POSN                    equ 0003h
SSP1MSK_SSP1MSK3_POSITION                equ 0003h
SSP1MSK_SSP1MSK3_SIZE                    equ 0001h
SSP1MSK_SSP1MSK3_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK3_MASK                    equ 0008h
SSP1MSK_SSP1MSK4_POSN                    equ 0004h
SSP1MSK_SSP1MSK4_POSITION                equ 0004h
SSP1MSK_SSP1MSK4_SIZE                    equ 0001h
SSP1MSK_SSP1MSK4_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK4_MASK                    equ 0010h
SSP1MSK_SSP1MSK5_POSN                    equ 0005h
SSP1MSK_SSP1MSK5_POSITION                equ 0005h
SSP1MSK_SSP1MSK5_SIZE                    equ 0001h
SSP1MSK_SSP1MSK5_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK5_MASK                    equ 0020h
SSP1MSK_SSP1MSK6_POSN                    equ 0006h
SSP1MSK_SSP1MSK6_POSITION                equ 0006h
SSP1MSK_SSP1MSK6_SIZE                    equ 0001h
SSP1MSK_SSP1MSK6_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK6_MASK                    equ 0040h
SSP1MSK_SSP1MSK7_POSN                    equ 0007h
SSP1MSK_SSP1MSK7_POSITION                equ 0007h
SSP1MSK_SSP1MSK7_SIZE                    equ 0001h
SSP1MSK_SSP1MSK7_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK7_MASK                    equ 0080h
SSP1MSK_MSK_POSN                         equ 0000h
SSP1MSK_MSK_POSITION                     equ 0000h
SSP1MSK_MSK_SIZE                         equ 0008h
SSP1MSK_MSK_LENGTH                       equ 0008h
SSP1MSK_MSK_MASK                         equ 00FFh
SSP1MSK_MSK0_POSN                        equ 0000h
SSP1MSK_MSK0_POSITION                    equ 0000h
SSP1MSK_MSK0_SIZE                        equ 0001h
SSP1MSK_MSK0_LENGTH                      equ 0001h
SSP1MSK_MSK0_MASK                        equ 0001h
SSP1MSK_MSK1_POSN                        equ 0001h
SSP1MSK_MSK1_POSITION                    equ 0001h
SSP1MSK_MSK1_SIZE                        equ 0001h
SSP1MSK_MSK1_LENGTH                      equ 0001h
SSP1MSK_MSK1_MASK                        equ 0002h
SSP1MSK_MSK2_POSN                        equ 0002h
SSP1MSK_MSK2_POSITION                    equ 0002h
SSP1MSK_MSK2_SIZE                        equ 0001h
SSP1MSK_MSK2_LENGTH                      equ 0001h
SSP1MSK_MSK2_MASK                        equ 0004h
SSP1MSK_MSK3_POSN                        equ 0003h
SSP1MSK_MSK3_POSITION                    equ 0003h
SSP1MSK_MSK3_SIZE                        equ 0001h
SSP1MSK_MSK3_LENGTH                      equ 0001h
SSP1MSK_MSK3_MASK                        equ 0008h
SSP1MSK_MSK4_POSN                        equ 0004h
SSP1MSK_MSK4_POSITION                    equ 0004h
SSP1MSK_MSK4_SIZE                        equ 0001h
SSP1MSK_MSK4_LENGTH                      equ 0001h
SSP1MSK_MSK4_MASK                        equ 0010h
SSP1MSK_MSK5_POSN                        equ 0005h
SSP1MSK_MSK5_POSITION                    equ 0005h
SSP1MSK_MSK5_SIZE                        equ 0001h
SSP1MSK_MSK5_LENGTH                      equ 0001h
SSP1MSK_MSK5_MASK                        equ 0020h
SSP1MSK_MSK6_POSN                        equ 0006h
SSP1MSK_MSK6_POSITION                    equ 0006h
SSP1MSK_MSK6_SIZE                        equ 0001h
SSP1MSK_MSK6_LENGTH                      equ 0001h
SSP1MSK_MSK6_MASK                        equ 0040h
SSP1MSK_MSK7_POSN                        equ 0007h
SSP1MSK_MSK7_POSITION                    equ 0007h
SSP1MSK_MSK7_SIZE                        equ 0001h
SSP1MSK_MSK7_LENGTH                      equ 0001h
SSP1MSK_MSK7_MASK                        equ 0080h
SSP1MSK_SSP1MSK_POSN                     equ 0000h
SSP1MSK_SSP1MSK_POSITION                 equ 0000h
SSP1MSK_SSP1MSK_SIZE                     equ 0008h
SSP1MSK_SSP1MSK_LENGTH                   equ 0008h
SSP1MSK_SSP1MSK_MASK                     equ 00FFh

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

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
SSP2BUF                                  equ 0219h
// bitfield definitions
SSP2BUF_SSP2BUF0_POSN                    equ 0000h
SSP2BUF_SSP2BUF0_POSITION                equ 0000h
SSP2BUF_SSP2BUF0_SIZE                    equ 0001h
SSP2BUF_SSP2BUF0_LENGTH                  equ 0001h
SSP2BUF_SSP2BUF0_MASK                    equ 0001h
SSP2BUF_SSP2BUF1_POSN                    equ 0001h
SSP2BUF_SSP2BUF1_POSITION                equ 0001h
SSP2BUF_SSP2BUF1_SIZE                    equ 0001h
SSP2BUF_SSP2BUF1_LENGTH                  equ 0001h
SSP2BUF_SSP2BUF1_MASK                    equ 0002h
SSP2BUF_SSP2BUF2_POSN                    equ 0002h
SSP2BUF_SSP2BUF2_POSITION                equ 0002h
SSP2BUF_SSP2BUF2_SIZE                    equ 0001h
SSP2BUF_SSP2BUF2_LENGTH                  equ 0001h
SSP2BUF_SSP2BUF2_MASK                    equ 0004h
SSP2BUF_SSP2BUF3_POSN                    equ 0003h
SSP2BUF_SSP2BUF3_POSITION                equ 0003h
SSP2BUF_SSP2BUF3_SIZE                    equ 0001h
SSP2BUF_SSP2BUF3_LENGTH                  equ 0001h
SSP2BUF_SSP2BUF3_MASK                    equ 0008h
SSP2BUF_SSP2BUF4_POSN                    equ 0004h
SSP2BUF_SSP2BUF4_POSITION                equ 0004h
SSP2BUF_SSP2BUF4_SIZE                    equ 0001h
SSP2BUF_SSP2BUF4_LENGTH                  equ 0001h
SSP2BUF_SSP2BUF4_MASK                    equ 0010h
SSP2BUF_SSP2BUF5_POSN                    equ 0005h
SSP2BUF_SSP2BUF5_POSITION                equ 0005h
SSP2BUF_SSP2BUF5_SIZE                    equ 0001h
SSP2BUF_SSP2BUF5_LENGTH                  equ 0001h
SSP2BUF_SSP2BUF5_MASK                    equ 0020h
SSP2BUF_SSP2BUF6_POSN                    equ 0006h
SSP2BUF_SSP2BUF6_POSITION                equ 0006h
SSP2BUF_SSP2BUF6_SIZE                    equ 0001h
SSP2BUF_SSP2BUF6_LENGTH                  equ 0001h
SSP2BUF_SSP2BUF6_MASK                    equ 0040h
SSP2BUF_SSP2BUF7_POSN                    equ 0007h
SSP2BUF_SSP2BUF7_POSITION                equ 0007h
SSP2BUF_SSP2BUF7_SIZE                    equ 0001h
SSP2BUF_SSP2BUF7_LENGTH                  equ 0001h
SSP2BUF_SSP2BUF7_MASK                    equ 0080h
SSP2BUF_BUF_POSN                         equ 0000h
SSP2BUF_BUF_POSITION                     equ 0000h
SSP2BUF_BUF_SIZE                         equ 0008h
SSP2BUF_BUF_LENGTH                       equ 0008h
SSP2BUF_BUF_MASK                         equ 00FFh
SSP2BUF_BUF0_POSN                        equ 0000h
SSP2BUF_BUF0_POSITION                    equ 0000h
SSP2BUF_BUF0_SIZE                        equ 0001h
SSP2BUF_BUF0_LENGTH                      equ 0001h
SSP2BUF_BUF0_MASK                        equ 0001h
SSP2BUF_BUF1_POSN                        equ 0001h
SSP2BUF_BUF1_POSITION                    equ 0001h
SSP2BUF_BUF1_SIZE                        equ 0001h
SSP2BUF_BUF1_LENGTH                      equ 0001h
SSP2BUF_BUF1_MASK                        equ 0002h
SSP2BUF_BUF2_POSN                        equ 0002h
SSP2BUF_BUF2_POSITION                    equ 0002h
SSP2BUF_BUF2_SIZE                        equ 0001h
SSP2BUF_BUF2_LENGTH                      equ 0001h
SSP2BUF_BUF2_MASK                        equ 0004h
SSP2BUF_BUF3_POSN                        equ 0003h
SSP2BUF_BUF3_POSITION                    equ 0003h
SSP2BUF_BUF3_SIZE                        equ 0001h
SSP2BUF_BUF3_LENGTH                      equ 0001h
SSP2BUF_BUF3_MASK                        equ 0008h
SSP2BUF_BUF4_POSN                        equ 0004h
SSP2BUF_BUF4_POSITION                    equ 0004h
SSP2BUF_BUF4_SIZE                        equ 0001h
SSP2BUF_BUF4_LENGTH                      equ 0001h
SSP2BUF_BUF4_MASK                        equ 0010h
SSP2BUF_BUF5_POSN                        equ 0005h
SSP2BUF_BUF5_POSITION                    equ 0005h
SSP2BUF_BUF5_SIZE                        equ 0001h
SSP2BUF_BUF5_LENGTH                      equ 0001h
SSP2BUF_BUF5_MASK                        equ 0020h
SSP2BUF_BUF6_POSN                        equ 0006h
SSP2BUF_BUF6_POSITION                    equ 0006h
SSP2BUF_BUF6_SIZE                        equ 0001h
SSP2BUF_BUF6_LENGTH                      equ 0001h
SSP2BUF_BUF6_MASK                        equ 0040h
SSP2BUF_BUF7_POSN                        equ 0007h
SSP2BUF_BUF7_POSITION                    equ 0007h
SSP2BUF_BUF7_SIZE                        equ 0001h
SSP2BUF_BUF7_LENGTH                      equ 0001h
SSP2BUF_BUF7_MASK                        equ 0080h
SSP2BUF_SSP2BUF_POSN                     equ 0000h
SSP2BUF_SSP2BUF_POSITION                 equ 0000h
SSP2BUF_SSP2BUF_SIZE                     equ 0008h
SSP2BUF_SSP2BUF_LENGTH                   equ 0008h
SSP2BUF_SSP2BUF_MASK                     equ 00FFh

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
SSP2ADD                                  equ 021Ah
// bitfield definitions
SSP2ADD_SSP2ADD0_POSN                    equ 0000h
SSP2ADD_SSP2ADD0_POSITION                equ 0000h
SSP2ADD_SSP2ADD0_SIZE                    equ 0001h
SSP2ADD_SSP2ADD0_LENGTH                  equ 0001h
SSP2ADD_SSP2ADD0_MASK                    equ 0001h
SSP2ADD_SSP2ADD1_POSN                    equ 0001h
SSP2ADD_SSP2ADD1_POSITION                equ 0001h
SSP2ADD_SSP2ADD1_SIZE                    equ 0001h
SSP2ADD_SSP2ADD1_LENGTH                  equ 0001h
SSP2ADD_SSP2ADD1_MASK                    equ 0002h
SSP2ADD_SSP2ADD2_POSN                    equ 0002h
SSP2ADD_SSP2ADD2_POSITION                equ 0002h
SSP2ADD_SSP2ADD2_SIZE                    equ 0001h
SSP2ADD_SSP2ADD2_LENGTH                  equ 0001h
SSP2ADD_SSP2ADD2_MASK                    equ 0004h
SSP2ADD_SSP2ADD3_POSN                    equ 0003h
SSP2ADD_SSP2ADD3_POSITION                equ 0003h
SSP2ADD_SSP2ADD3_SIZE                    equ 0001h
SSP2ADD_SSP2ADD3_LENGTH                  equ 0001h
SSP2ADD_SSP2ADD3_MASK                    equ 0008h
SSP2ADD_SSP2ADD4_POSN                    equ 0004h
SSP2ADD_SSP2ADD4_POSITION                equ 0004h
SSP2ADD_SSP2ADD4_SIZE                    equ 0001h
SSP2ADD_SSP2ADD4_LENGTH                  equ 0001h
SSP2ADD_SSP2ADD4_MASK                    equ 0010h
SSP2ADD_SSP2ADD5_POSN                    equ 0005h
SSP2ADD_SSP2ADD5_POSITION                equ 0005h
SSP2ADD_SSP2ADD5_SIZE                    equ 0001h
SSP2ADD_SSP2ADD5_LENGTH                  equ 0001h
SSP2ADD_SSP2ADD5_MASK                    equ 0020h
SSP2ADD_SSP2ADD6_POSN                    equ 0006h
SSP2ADD_SSP2ADD6_POSITION                equ 0006h
SSP2ADD_SSP2ADD6_SIZE                    equ 0001h
SSP2ADD_SSP2ADD6_LENGTH                  equ 0001h
SSP2ADD_SSP2ADD6_MASK                    equ 0040h
SSP2ADD_SSP2ADD7_POSN                    equ 0007h
SSP2ADD_SSP2ADD7_POSITION                equ 0007h
SSP2ADD_SSP2ADD7_SIZE                    equ 0001h
SSP2ADD_SSP2ADD7_LENGTH                  equ 0001h
SSP2ADD_SSP2ADD7_MASK                    equ 0080h
SSP2ADD_ADD_POSN                         equ 0000h
SSP2ADD_ADD_POSITION                     equ 0000h
SSP2ADD_ADD_SIZE                         equ 0008h
SSP2ADD_ADD_LENGTH                       equ 0008h
SSP2ADD_ADD_MASK                         equ 00FFh
SSP2ADD_ADD0_POSN                        equ 0000h
SSP2ADD_ADD0_POSITION                    equ 0000h
SSP2ADD_ADD0_SIZE                        equ 0001h
SSP2ADD_ADD0_LENGTH                      equ 0001h
SSP2ADD_ADD0_MASK                        equ 0001h
SSP2ADD_ADD1_POSN                        equ 0001h
SSP2ADD_ADD1_POSITION                    equ 0001h
SSP2ADD_ADD1_SIZE                        equ 0001h
SSP2ADD_ADD1_LENGTH                      equ 0001h
SSP2ADD_ADD1_MASK                        equ 0002h
SSP2ADD_ADD2_POSN                        equ 0002h
SSP2ADD_ADD2_POSITION                    equ 0002h
SSP2ADD_ADD2_SIZE                        equ 0001h
SSP2ADD_ADD2_LENGTH                      equ 0001h
SSP2ADD_ADD2_MASK                        equ 0004h
SSP2ADD_ADD3_POSN                        equ 0003h
SSP2ADD_ADD3_POSITION                    equ 0003h
SSP2ADD_ADD3_SIZE                        equ 0001h
SSP2ADD_ADD3_LENGTH                      equ 0001h
SSP2ADD_ADD3_MASK                        equ 0008h
SSP2ADD_ADD4_POSN                        equ 0004h
SSP2ADD_ADD4_POSITION                    equ 0004h
SSP2ADD_ADD4_SIZE                        equ 0001h
SSP2ADD_ADD4_LENGTH                      equ 0001h
SSP2ADD_ADD4_MASK                        equ 0010h
SSP2ADD_ADD5_POSN                        equ 0005h
SSP2ADD_ADD5_POSITION                    equ 0005h
SSP2ADD_ADD5_SIZE                        equ 0001h
SSP2ADD_ADD5_LENGTH                      equ 0001h
SSP2ADD_ADD5_MASK                        equ 0020h
SSP2ADD_ADD6_POSN                        equ 0006h
SSP2ADD_ADD6_POSITION                    equ 0006h
SSP2ADD_ADD6_SIZE                        equ 0001h
SSP2ADD_ADD6_LENGTH                      equ 0001h
SSP2ADD_ADD6_MASK                        equ 0040h
SSP2ADD_ADD7_POSN                        equ 0007h
SSP2ADD_ADD7_POSITION                    equ 0007h
SSP2ADD_ADD7_SIZE                        equ 0001h
SSP2ADD_ADD7_LENGTH                      equ 0001h
SSP2ADD_ADD7_MASK                        equ 0080h
SSP2ADD_SSP2ADD_POSN                     equ 0000h
SSP2ADD_SSP2ADD_POSITION                 equ 0000h
SSP2ADD_SSP2ADD_SIZE                     equ 0008h
SSP2ADD_SSP2ADD_LENGTH                   equ 0008h
SSP2ADD_SSP2ADD_MASK                     equ 00FFh

// Register: SSP2MSK
#define SSP2MSK SSP2MSK
SSP2MSK                                  equ 021Bh
// bitfield definitions
SSP2MSK_SSP2MSK0_POSN                    equ 0000h
SSP2MSK_SSP2MSK0_POSITION                equ 0000h
SSP2MSK_SSP2MSK0_SIZE                    equ 0001h
SSP2MSK_SSP2MSK0_LENGTH                  equ 0001h
SSP2MSK_SSP2MSK0_MASK                    equ 0001h
SSP2MSK_SSP2MSK1_POSN                    equ 0001h
SSP2MSK_SSP2MSK1_POSITION                equ 0001h
SSP2MSK_SSP2MSK1_SIZE                    equ 0001h
SSP2MSK_SSP2MSK1_LENGTH                  equ 0001h
SSP2MSK_SSP2MSK1_MASK                    equ 0002h
SSP2MSK_SSP2MSK2_POSN                    equ 0002h
SSP2MSK_SSP2MSK2_POSITION                equ 0002h
SSP2MSK_SSP2MSK2_SIZE                    equ 0001h
SSP2MSK_SSP2MSK2_LENGTH                  equ 0001h
SSP2MSK_SSP2MSK2_MASK                    equ 0004h
SSP2MSK_SSP2MSK3_POSN                    equ 0003h
SSP2MSK_SSP2MSK3_POSITION                equ 0003h
SSP2MSK_SSP2MSK3_SIZE                    equ 0001h
SSP2MSK_SSP2MSK3_LENGTH                  equ 0001h
SSP2MSK_SSP2MSK3_MASK                    equ 0008h
SSP2MSK_SSP2MSK4_POSN                    equ 0004h
SSP2MSK_SSP2MSK4_POSITION                equ 0004h
SSP2MSK_SSP2MSK4_SIZE                    equ 0001h
SSP2MSK_SSP2MSK4_LENGTH                  equ 0001h
SSP2MSK_SSP2MSK4_MASK                    equ 0010h
SSP2MSK_SSP2MSK5_POSN                    equ 0005h
SSP2MSK_SSP2MSK5_POSITION                equ 0005h
SSP2MSK_SSP2MSK5_SIZE                    equ 0001h
SSP2MSK_SSP2MSK5_LENGTH                  equ 0001h
SSP2MSK_SSP2MSK5_MASK                    equ 0020h
SSP2MSK_SSP2MSK6_POSN                    equ 0006h
SSP2MSK_SSP2MSK6_POSITION                equ 0006h
SSP2MSK_SSP2MSK6_SIZE                    equ 0001h
SSP2MSK_SSP2MSK6_LENGTH                  equ 0001h
SSP2MSK_SSP2MSK6_MASK                    equ 0040h
SSP2MSK_SSP2MSK7_POSN                    equ 0007h
SSP2MSK_SSP2MSK7_POSITION                equ 0007h
SSP2MSK_SSP2MSK7_SIZE                    equ 0001h
SSP2MSK_SSP2MSK7_LENGTH                  equ 0001h
SSP2MSK_SSP2MSK7_MASK                    equ 0080h
SSP2MSK_MSK_POSN                         equ 0000h
SSP2MSK_MSK_POSITION                     equ 0000h
SSP2MSK_MSK_SIZE                         equ 0008h
SSP2MSK_MSK_LENGTH                       equ 0008h
SSP2MSK_MSK_MASK                         equ 00FFh
SSP2MSK_MSK0_POSN                        equ 0000h
SSP2MSK_MSK0_POSITION                    equ 0000h
SSP2MSK_MSK0_SIZE                        equ 0001h
SSP2MSK_MSK0_LENGTH                      equ 0001h
SSP2MSK_MSK0_MASK                        equ 0001h
SSP2MSK_MSK1_POSN                        equ 0001h
SSP2MSK_MSK1_POSITION                    equ 0001h
SSP2MSK_MSK1_SIZE                        equ 0001h
SSP2MSK_MSK1_LENGTH                      equ 0001h
SSP2MSK_MSK1_MASK                        equ 0002h
SSP2MSK_MSK2_POSN                        equ 0002h
SSP2MSK_MSK2_POSITION                    equ 0002h
SSP2MSK_MSK2_SIZE                        equ 0001h
SSP2MSK_MSK2_LENGTH                      equ 0001h
SSP2MSK_MSK2_MASK                        equ 0004h
SSP2MSK_MSK3_POSN                        equ 0003h
SSP2MSK_MSK3_POSITION                    equ 0003h
SSP2MSK_MSK3_SIZE                        equ 0001h
SSP2MSK_MSK3_LENGTH                      equ 0001h
SSP2MSK_MSK3_MASK                        equ 0008h
SSP2MSK_MSK4_POSN                        equ 0004h
SSP2MSK_MSK4_POSITION                    equ 0004h
SSP2MSK_MSK4_SIZE                        equ 0001h
SSP2MSK_MSK4_LENGTH                      equ 0001h
SSP2MSK_MSK4_MASK                        equ 0010h
SSP2MSK_MSK5_POSN                        equ 0005h
SSP2MSK_MSK5_POSITION                    equ 0005h
SSP2MSK_MSK5_SIZE                        equ 0001h
SSP2MSK_MSK5_LENGTH                      equ 0001h
SSP2MSK_MSK5_MASK                        equ 0020h
SSP2MSK_MSK6_POSN                        equ 0006h
SSP2MSK_MSK6_POSITION                    equ 0006h
SSP2MSK_MSK6_SIZE                        equ 0001h
SSP2MSK_MSK6_LENGTH                      equ 0001h
SSP2MSK_MSK6_MASK                        equ 0040h
SSP2MSK_MSK7_POSN                        equ 0007h
SSP2MSK_MSK7_POSITION                    equ 0007h
SSP2MSK_MSK7_SIZE                        equ 0001h
SSP2MSK_MSK7_LENGTH                      equ 0001h
SSP2MSK_MSK7_MASK                        equ 0080h
SSP2MSK_SSP2MSK_POSN                     equ 0000h
SSP2MSK_SSP2MSK_POSITION                 equ 0000h
SSP2MSK_SSP2MSK_SIZE                     equ 0008h
SSP2MSK_SSP2MSK_LENGTH                   equ 0008h
SSP2MSK_SSP2MSK_MASK                     equ 00FFh

// Register: SSP2STAT
#define SSP2STAT SSP2STAT
SSP2STAT                                 equ 021Ch
// bitfield definitions
SSP2STAT_BF_POSN                         equ 0000h
SSP2STAT_BF_POSITION                     equ 0000h
SSP2STAT_BF_SIZE                         equ 0001h
SSP2STAT_BF_LENGTH                       equ 0001h
SSP2STAT_BF_MASK                         equ 0001h
SSP2STAT_UA_POSN                         equ 0001h
SSP2STAT_UA_POSITION                     equ 0001h
SSP2STAT_UA_SIZE                         equ 0001h
SSP2STAT_UA_LENGTH                       equ 0001h
SSP2STAT_UA_MASK                         equ 0002h
SSP2STAT_R_nW_POSN                       equ 0002h
SSP2STAT_R_nW_POSITION                   equ 0002h
SSP2STAT_R_nW_SIZE                       equ 0001h
SSP2STAT_R_nW_LENGTH                     equ 0001h
SSP2STAT_R_nW_MASK                       equ 0004h
SSP2STAT_S_POSN                          equ 0003h
SSP2STAT_S_POSITION                      equ 0003h
SSP2STAT_S_SIZE                          equ 0001h
SSP2STAT_S_LENGTH                        equ 0001h
SSP2STAT_S_MASK                          equ 0008h
SSP2STAT_P_POSN                          equ 0004h
SSP2STAT_P_POSITION                      equ 0004h
SSP2STAT_P_SIZE                          equ 0001h
SSP2STAT_P_LENGTH                        equ 0001h
SSP2STAT_P_MASK                          equ 0010h
SSP2STAT_D_nA_POSN                       equ 0005h
SSP2STAT_D_nA_POSITION                   equ 0005h
SSP2STAT_D_nA_SIZE                       equ 0001h
SSP2STAT_D_nA_LENGTH                     equ 0001h
SSP2STAT_D_nA_MASK                       equ 0020h
SSP2STAT_CKE_POSN                        equ 0006h
SSP2STAT_CKE_POSITION                    equ 0006h
SSP2STAT_CKE_SIZE                        equ 0001h
SSP2STAT_CKE_LENGTH                      equ 0001h
SSP2STAT_CKE_MASK                        equ 0040h
SSP2STAT_SMP_POSN                        equ 0007h
SSP2STAT_SMP_POSITION                    equ 0007h
SSP2STAT_SMP_SIZE                        equ 0001h
SSP2STAT_SMP_LENGTH                      equ 0001h
SSP2STAT_SMP_MASK                        equ 0080h

// Register: SSP2CON1
#define SSP2CON1 SSP2CON1
SSP2CON1                                 equ 021Dh
// bitfield definitions
SSP2CON1_SSPM_POSN                       equ 0000h
SSP2CON1_SSPM_POSITION                   equ 0000h
SSP2CON1_SSPM_SIZE                       equ 0004h
SSP2CON1_SSPM_LENGTH                     equ 0004h
SSP2CON1_SSPM_MASK                       equ 000Fh
SSP2CON1_CKP_POSN                        equ 0004h
SSP2CON1_CKP_POSITION                    equ 0004h
SSP2CON1_CKP_SIZE                        equ 0001h
SSP2CON1_CKP_LENGTH                      equ 0001h
SSP2CON1_CKP_MASK                        equ 0010h
SSP2CON1_SSPEN_POSN                      equ 0005h
SSP2CON1_SSPEN_POSITION                  equ 0005h
SSP2CON1_SSPEN_SIZE                      equ 0001h
SSP2CON1_SSPEN_LENGTH                    equ 0001h
SSP2CON1_SSPEN_MASK                      equ 0020h
SSP2CON1_SSPOV_POSN                      equ 0006h
SSP2CON1_SSPOV_POSITION                  equ 0006h
SSP2CON1_SSPOV_SIZE                      equ 0001h
SSP2CON1_SSPOV_LENGTH                    equ 0001h
SSP2CON1_SSPOV_MASK                      equ 0040h
SSP2CON1_WCOL_POSN                       equ 0007h
SSP2CON1_WCOL_POSITION                   equ 0007h
SSP2CON1_WCOL_SIZE                       equ 0001h
SSP2CON1_WCOL_LENGTH                     equ 0001h
SSP2CON1_WCOL_MASK                       equ 0080h
SSP2CON1_SSPM0_POSN                      equ 0000h
SSP2CON1_SSPM0_POSITION                  equ 0000h
SSP2CON1_SSPM0_SIZE                      equ 0001h
SSP2CON1_SSPM0_LENGTH                    equ 0001h
SSP2CON1_SSPM0_MASK                      equ 0001h
SSP2CON1_SSPM1_POSN                      equ 0001h
SSP2CON1_SSPM1_POSITION                  equ 0001h
SSP2CON1_SSPM1_SIZE                      equ 0001h
SSP2CON1_SSPM1_LENGTH                    equ 0001h
SSP2CON1_SSPM1_MASK                      equ 0002h
SSP2CON1_SSPM2_POSN                      equ 0002h
SSP2CON1_SSPM2_POSITION                  equ 0002h
SSP2CON1_SSPM2_SIZE                      equ 0001h
SSP2CON1_SSPM2_LENGTH                    equ 0001h
SSP2CON1_SSPM2_MASK                      equ 0004h
SSP2CON1_SSPM3_POSN                      equ 0003h
SSP2CON1_SSPM3_POSITION                  equ 0003h
SSP2CON1_SSPM3_SIZE                      equ 0001h
SSP2CON1_SSPM3_LENGTH                    equ 0001h
SSP2CON1_SSPM3_MASK                      equ 0008h

// Register: SSP2CON2
#define SSP2CON2 SSP2CON2
SSP2CON2                                 equ 021Eh
// bitfield definitions
SSP2CON2_SEN_POSN                        equ 0000h
SSP2CON2_SEN_POSITION                    equ 0000h
SSP2CON2_SEN_SIZE                        equ 0001h
SSP2CON2_SEN_LENGTH                      equ 0001h
SSP2CON2_SEN_MASK                        equ 0001h
SSP2CON2_RSEN_POSN                       equ 0001h
SSP2CON2_RSEN_POSITION                   equ 0001h
SSP2CON2_RSEN_SIZE                       equ 0001h
SSP2CON2_RSEN_LENGTH                     equ 0001h
SSP2CON2_RSEN_MASK                       equ 0002h
SSP2CON2_PEN_POSN                        equ 0002h
SSP2CON2_PEN_POSITION                    equ 0002h
SSP2CON2_PEN_SIZE                        equ 0001h
SSP2CON2_PEN_LENGTH                      equ 0001h
SSP2CON2_PEN_MASK                        equ 0004h
SSP2CON2_RCEN_POSN                       equ 0003h
SSP2CON2_RCEN_POSITION                   equ 0003h
SSP2CON2_RCEN_SIZE                       equ 0001h
SSP2CON2_RCEN_LENGTH                     equ 0001h
SSP2CON2_RCEN_MASK                       equ 0008h
SSP2CON2_ACKEN_POSN                      equ 0004h
SSP2CON2_ACKEN_POSITION                  equ 0004h
SSP2CON2_ACKEN_SIZE                      equ 0001h
SSP2CON2_ACKEN_LENGTH                    equ 0001h
SSP2CON2_ACKEN_MASK                      equ 0010h
SSP2CON2_ACKDT_POSN                      equ 0005h
SSP2CON2_ACKDT_POSITION                  equ 0005h
SSP2CON2_ACKDT_SIZE                      equ 0001h
SSP2CON2_ACKDT_LENGTH                    equ 0001h
SSP2CON2_ACKDT_MASK                      equ 0020h
SSP2CON2_ACKSTAT_POSN                    equ 0006h
SSP2CON2_ACKSTAT_POSITION                equ 0006h
SSP2CON2_ACKSTAT_SIZE                    equ 0001h
SSP2CON2_ACKSTAT_LENGTH                  equ 0001h
SSP2CON2_ACKSTAT_MASK                    equ 0040h
SSP2CON2_GCEN_POSN                       equ 0007h
SSP2CON2_GCEN_POSITION                   equ 0007h
SSP2CON2_GCEN_SIZE                       equ 0001h
SSP2CON2_GCEN_LENGTH                     equ 0001h
SSP2CON2_GCEN_MASK                       equ 0080h

// Register: SSP2CON3
#define SSP2CON3 SSP2CON3
SSP2CON3                                 equ 021Fh
// bitfield definitions
SSP2CON3_DHEN_POSN                       equ 0000h
SSP2CON3_DHEN_POSITION                   equ 0000h
SSP2CON3_DHEN_SIZE                       equ 0001h
SSP2CON3_DHEN_LENGTH                     equ 0001h
SSP2CON3_DHEN_MASK                       equ 0001h
SSP2CON3_AHEN_POSN                       equ 0001h
SSP2CON3_AHEN_POSITION                   equ 0001h
SSP2CON3_AHEN_SIZE                       equ 0001h
SSP2CON3_AHEN_LENGTH                     equ 0001h
SSP2CON3_AHEN_MASK                       equ 0002h
SSP2CON3_SBCDE_POSN                      equ 0002h
SSP2CON3_SBCDE_POSITION                  equ 0002h
SSP2CON3_SBCDE_SIZE                      equ 0001h
SSP2CON3_SBCDE_LENGTH                    equ 0001h
SSP2CON3_SBCDE_MASK                      equ 0004h
SSP2CON3_SDAHT_POSN                      equ 0003h
SSP2CON3_SDAHT_POSITION                  equ 0003h
SSP2CON3_SDAHT_SIZE                      equ 0001h
SSP2CON3_SDAHT_LENGTH                    equ 0001h
SSP2CON3_SDAHT_MASK                      equ 0008h
SSP2CON3_BOEN_POSN                       equ 0004h
SSP2CON3_BOEN_POSITION                   equ 0004h
SSP2CON3_BOEN_SIZE                       equ 0001h
SSP2CON3_BOEN_LENGTH                     equ 0001h
SSP2CON3_BOEN_MASK                       equ 0010h
SSP2CON3_SCIE_POSN                       equ 0005h
SSP2CON3_SCIE_POSITION                   equ 0005h
SSP2CON3_SCIE_SIZE                       equ 0001h
SSP2CON3_SCIE_LENGTH                     equ 0001h
SSP2CON3_SCIE_MASK                       equ 0020h
SSP2CON3_PCIE_POSN                       equ 0006h
SSP2CON3_PCIE_POSITION                   equ 0006h
SSP2CON3_PCIE_SIZE                       equ 0001h
SSP2CON3_PCIE_LENGTH                     equ 0001h
SSP2CON3_PCIE_MASK                       equ 0040h
SSP2CON3_ACKTIM_POSN                     equ 0007h
SSP2CON3_ACKTIM_POSITION                 equ 0007h
SSP2CON3_ACKTIM_SIZE                     equ 0001h
SSP2CON3_ACKTIM_LENGTH                   equ 0001h
SSP2CON3_ACKTIM_MASK                     equ 0080h

// Register: ODCONA
#define ODCONA ODCONA
ODCONA                                   equ 028Ch
// bitfield definitions
ODCONA_ODCA0_POSN                        equ 0000h
ODCONA_ODCA0_POSITION                    equ 0000h
ODCONA_ODCA0_SIZE                        equ 0001h
ODCONA_ODCA0_LENGTH                      equ 0001h
ODCONA_ODCA0_MASK                        equ 0001h
ODCONA_ODCA1_POSN                        equ 0001h
ODCONA_ODCA1_POSITION                    equ 0001h
ODCONA_ODCA1_SIZE                        equ 0001h
ODCONA_ODCA1_LENGTH                      equ 0001h
ODCONA_ODCA1_MASK                        equ 0002h
ODCONA_ODCA2_POSN                        equ 0002h
ODCONA_ODCA2_POSITION                    equ 0002h
ODCONA_ODCA2_SIZE                        equ 0001h
ODCONA_ODCA2_LENGTH                      equ 0001h
ODCONA_ODCA2_MASK                        equ 0004h
ODCONA_ODCA4_POSN                        equ 0004h
ODCONA_ODCA4_POSITION                    equ 0004h
ODCONA_ODCA4_SIZE                        equ 0001h
ODCONA_ODCA4_LENGTH                      equ 0001h
ODCONA_ODCA4_MASK                        equ 0010h
ODCONA_ODCA5_POSN                        equ 0005h
ODCONA_ODCA5_POSITION                    equ 0005h
ODCONA_ODCA5_SIZE                        equ 0001h
ODCONA_ODCA5_LENGTH                      equ 0001h
ODCONA_ODCA5_MASK                        equ 0020h

// Register: ODCONC
#define ODCONC ODCONC
ODCONC                                   equ 028Eh
// bitfield definitions
ODCONC_ODCC0_POSN                        equ 0000h
ODCONC_ODCC0_POSITION                    equ 0000h
ODCONC_ODCC0_SIZE                        equ 0001h
ODCONC_ODCC0_LENGTH                      equ 0001h
ODCONC_ODCC0_MASK                        equ 0001h
ODCONC_ODCC1_POSN                        equ 0001h
ODCONC_ODCC1_POSITION                    equ 0001h
ODCONC_ODCC1_SIZE                        equ 0001h
ODCONC_ODCC1_LENGTH                      equ 0001h
ODCONC_ODCC1_MASK                        equ 0002h
ODCONC_ODCC2_POSN                        equ 0002h
ODCONC_ODCC2_POSITION                    equ 0002h
ODCONC_ODCC2_SIZE                        equ 0001h
ODCONC_ODCC2_LENGTH                      equ 0001h
ODCONC_ODCC2_MASK                        equ 0004h
ODCONC_ODCC3_POSN                        equ 0003h
ODCONC_ODCC3_POSITION                    equ 0003h
ODCONC_ODCC3_SIZE                        equ 0001h
ODCONC_ODCC3_LENGTH                      equ 0001h
ODCONC_ODCC3_MASK                        equ 0008h
ODCONC_ODCC4_POSN                        equ 0004h
ODCONC_ODCC4_POSITION                    equ 0004h
ODCONC_ODCC4_SIZE                        equ 0001h
ODCONC_ODCC4_LENGTH                      equ 0001h
ODCONC_ODCC4_MASK                        equ 0010h
ODCONC_ODCC5_POSN                        equ 0005h
ODCONC_ODCC5_POSITION                    equ 0005h
ODCONC_ODCC5_SIZE                        equ 0001h
ODCONC_ODCC5_LENGTH                      equ 0001h
ODCONC_ODCC5_MASK                        equ 0020h

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0291h
// bitfield definitions
CCPR1L_CCPR1L_POSN                       equ 0000h
CCPR1L_CCPR1L_POSITION                   equ 0000h
CCPR1L_CCPR1L_SIZE                       equ 0008h
CCPR1L_CCPR1L_LENGTH                     equ 0008h
CCPR1L_CCPR1L_MASK                       equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0292h
// bitfield definitions
CCPR1H_CCPR1H_POSN                       equ 0000h
CCPR1H_CCPR1H_POSITION                   equ 0000h
CCPR1H_CCPR1H_SIZE                       equ 0008h
CCPR1H_CCPR1H_LENGTH                     equ 0008h
CCPR1H_CCPR1H_MASK                       equ 00FFh

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0293h
// bitfield definitions
CCP1CON_CCP1MODE_POSN                    equ 0000h
CCP1CON_CCP1MODE_POSITION                equ 0000h
CCP1CON_CCP1MODE_SIZE                    equ 0004h
CCP1CON_CCP1MODE_LENGTH                  equ 0004h
CCP1CON_CCP1MODE_MASK                    equ 000Fh
CCP1CON_CCP1FMT_POSN                     equ 0004h
CCP1CON_CCP1FMT_POSITION                 equ 0004h
CCP1CON_CCP1FMT_SIZE                     equ 0001h
CCP1CON_CCP1FMT_LENGTH                   equ 0001h
CCP1CON_CCP1FMT_MASK                     equ 0010h
CCP1CON_CCP1OUT_POSN                     equ 0005h
CCP1CON_CCP1OUT_POSITION                 equ 0005h
CCP1CON_CCP1OUT_SIZE                     equ 0001h
CCP1CON_CCP1OUT_LENGTH                   equ 0001h
CCP1CON_CCP1OUT_MASK                     equ 0020h
CCP1CON_CCP1EN_POSN                      equ 0007h
CCP1CON_CCP1EN_POSITION                  equ 0007h
CCP1CON_CCP1EN_SIZE                      equ 0001h
CCP1CON_CCP1EN_LENGTH                    equ 0001h
CCP1CON_CCP1EN_MASK                      equ 0080h
CCP1CON_CCP1MODE0_POSN                   equ 0000h
CCP1CON_CCP1MODE0_POSITION               equ 0000h
CCP1CON_CCP1MODE0_SIZE                   equ 0001h
CCP1CON_CCP1MODE0_LENGTH                 equ 0001h
CCP1CON_CCP1MODE0_MASK                   equ 0001h
CCP1CON_CCP1MODE1_POSN                   equ 0001h
CCP1CON_CCP1MODE1_POSITION               equ 0001h
CCP1CON_CCP1MODE1_SIZE                   equ 0001h
CCP1CON_CCP1MODE1_LENGTH                 equ 0001h
CCP1CON_CCP1MODE1_MASK                   equ 0002h
CCP1CON_CCP1MODE2_POSN                   equ 0002h
CCP1CON_CCP1MODE2_POSITION               equ 0002h
CCP1CON_CCP1MODE2_SIZE                   equ 0001h
CCP1CON_CCP1MODE2_LENGTH                 equ 0001h
CCP1CON_CCP1MODE2_MASK                   equ 0004h
CCP1CON_CCP1MODE3_POSN                   equ 0003h
CCP1CON_CCP1MODE3_POSITION               equ 0003h
CCP1CON_CCP1MODE3_SIZE                   equ 0001h
CCP1CON_CCP1MODE3_LENGTH                 equ 0001h
CCP1CON_CCP1MODE3_MASK                   equ 0008h

// Register: CCP1CAP
#define CCP1CAP CCP1CAP
CCP1CAP                                  equ 0294h
// bitfield definitions
CCP1CAP_CCP1CTS_POSN                     equ 0000h
CCP1CAP_CCP1CTS_POSITION                 equ 0000h
CCP1CAP_CCP1CTS_SIZE                     equ 0004h
CCP1CAP_CCP1CTS_LENGTH                   equ 0004h
CCP1CAP_CCP1CTS_MASK                     equ 000Fh
CCP1CAP_CCP1CTS0_POSN                    equ 0000h
CCP1CAP_CCP1CTS0_POSITION                equ 0000h
CCP1CAP_CCP1CTS0_SIZE                    equ 0001h
CCP1CAP_CCP1CTS0_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS0_MASK                    equ 0001h
CCP1CAP_CCP1CTS1_POSN                    equ 0001h
CCP1CAP_CCP1CTS1_POSITION                equ 0001h
CCP1CAP_CCP1CTS1_SIZE                    equ 0001h
CCP1CAP_CCP1CTS1_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS1_MASK                    equ 0002h
CCP1CAP_CCP1CTS2_POSN                    equ 0002h
CCP1CAP_CCP1CTS2_POSITION                equ 0002h
CCP1CAP_CCP1CTS2_SIZE                    equ 0001h
CCP1CAP_CCP1CTS2_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS2_MASK                    equ 0004h
CCP1CAP_CCP1CTS3_POSN                    equ 0003h
CCP1CAP_CCP1CTS3_POSITION                equ 0003h
CCP1CAP_CCP1CTS3_SIZE                    equ 0001h
CCP1CAP_CCP1CTS3_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS3_MASK                    equ 0008h

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0295h
// bitfield definitions
CCPR2L_CCPR2L_POSN                       equ 0000h
CCPR2L_CCPR2L_POSITION                   equ 0000h
CCPR2L_CCPR2L_SIZE                       equ 0008h
CCPR2L_CCPR2L_LENGTH                     equ 0008h
CCPR2L_CCPR2L_MASK                       equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0296h
// bitfield definitions
CCPR2H_CCPR2H_POSN                       equ 0000h
CCPR2H_CCPR2H_POSITION                   equ 0000h
CCPR2H_CCPR2H_SIZE                       equ 0008h
CCPR2H_CCPR2H_LENGTH                     equ 0008h
CCPR2H_CCPR2H_MASK                       equ 00FFh

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0297h
// bitfield definitions
CCP2CON_CCP2MODE_POSN                    equ 0000h
CCP2CON_CCP2MODE_POSITION                equ 0000h
CCP2CON_CCP2MODE_SIZE                    equ 0004h
CCP2CON_CCP2MODE_LENGTH                  equ 0004h
CCP2CON_CCP2MODE_MASK                    equ 000Fh
CCP2CON_CCP2FMT_POSN                     equ 0004h
CCP2CON_CCP2FMT_POSITION                 equ 0004h
CCP2CON_CCP2FMT_SIZE                     equ 0001h
CCP2CON_CCP2FMT_LENGTH                   equ 0001h
CCP2CON_CCP2FMT_MASK                     equ 0010h
CCP2CON_CCP2OUT_POSN                     equ 0005h
CCP2CON_CCP2OUT_POSITION                 equ 0005h
CCP2CON_CCP2OUT_SIZE                     equ 0001h
CCP2CON_CCP2OUT_LENGTH                   equ 0001h
CCP2CON_CCP2OUT_MASK                     equ 0020h
CCP2CON_CCP2EN_POSN                      equ 0007h
CCP2CON_CCP2EN_POSITION                  equ 0007h
CCP2CON_CCP2EN_SIZE                      equ 0001h
CCP2CON_CCP2EN_LENGTH                    equ 0001h
CCP2CON_CCP2EN_MASK                      equ 0080h
CCP2CON_CCP2MODE0_POSN                   equ 0000h
CCP2CON_CCP2MODE0_POSITION               equ 0000h
CCP2CON_CCP2MODE0_SIZE                   equ 0001h
CCP2CON_CCP2MODE0_LENGTH                 equ 0001h
CCP2CON_CCP2MODE0_MASK                   equ 0001h
CCP2CON_CCP2MODE1_POSN                   equ 0001h
CCP2CON_CCP2MODE1_POSITION               equ 0001h
CCP2CON_CCP2MODE1_SIZE                   equ 0001h
CCP2CON_CCP2MODE1_LENGTH                 equ 0001h
CCP2CON_CCP2MODE1_MASK                   equ 0002h
CCP2CON_CCP2MODE2_POSN                   equ 0002h
CCP2CON_CCP2MODE2_POSITION               equ 0002h
CCP2CON_CCP2MODE2_SIZE                   equ 0001h
CCP2CON_CCP2MODE2_LENGTH                 equ 0001h
CCP2CON_CCP2MODE2_MASK                   equ 0004h
CCP2CON_CCP2MODE3_POSN                   equ 0003h
CCP2CON_CCP2MODE3_POSITION               equ 0003h
CCP2CON_CCP2MODE3_SIZE                   equ 0001h
CCP2CON_CCP2MODE3_LENGTH                 equ 0001h
CCP2CON_CCP2MODE3_MASK                   equ 0008h

// Register: CCP2CAP
#define CCP2CAP CCP2CAP
CCP2CAP                                  equ 0298h
// bitfield definitions
CCP2CAP_CCP1CTS_POSN                     equ 0000h
CCP2CAP_CCP1CTS_POSITION                 equ 0000h
CCP2CAP_CCP1CTS_SIZE                     equ 0004h
CCP2CAP_CCP1CTS_LENGTH                   equ 0004h
CCP2CAP_CCP1CTS_MASK                     equ 000Fh
CCP2CAP_CCP2CTS0_POSN                    equ 0000h
CCP2CAP_CCP2CTS0_POSITION                equ 0000h
CCP2CAP_CCP2CTS0_SIZE                    equ 0001h
CCP2CAP_CCP2CTS0_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS0_MASK                    equ 0001h
CCP2CAP_CCP2CTS1_POSN                    equ 0001h
CCP2CAP_CCP2CTS1_POSITION                equ 0001h
CCP2CAP_CCP2CTS1_SIZE                    equ 0001h
CCP2CAP_CCP2CTS1_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS1_MASK                    equ 0002h
CCP2CAP_CCP2CTS2_POSN                    equ 0002h
CCP2CAP_CCP2CTS2_POSITION                equ 0002h
CCP2CAP_CCP2CTS2_SIZE                    equ 0001h
CCP2CAP_CCP2CTS2_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS2_MASK                    equ 0004h
CCP2CAP_CCP2CTS3_POSN                    equ 0003h
CCP2CAP_CCP2CTS3_POSITION                equ 0003h
CCP2CAP_CCP2CTS3_SIZE                    equ 0001h
CCP2CAP_CCP2CTS3_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS3_MASK                    equ 0008h

// Register: CCPTMRS
#define CCPTMRS CCPTMRS
CCPTMRS                                  equ 029Fh
// bitfield definitions
CCPTMRS_C1TSEL_POSN                      equ 0000h
CCPTMRS_C1TSEL_POSITION                  equ 0000h
CCPTMRS_C1TSEL_SIZE                      equ 0002h
CCPTMRS_C1TSEL_LENGTH                    equ 0002h
CCPTMRS_C1TSEL_MASK                      equ 0003h
CCPTMRS_C2TSEL_POSN                      equ 0002h
CCPTMRS_C2TSEL_POSITION                  equ 0002h
CCPTMRS_C2TSEL_SIZE                      equ 0002h
CCPTMRS_C2TSEL_LENGTH                    equ 0002h
CCPTMRS_C2TSEL_MASK                      equ 000Ch
CCPTMRS_C3TSEL_POSN                      equ 0004h
CCPTMRS_C3TSEL_POSITION                  equ 0004h
CCPTMRS_C3TSEL_SIZE                      equ 0002h
CCPTMRS_C3TSEL_LENGTH                    equ 0002h
CCPTMRS_C3TSEL_MASK                      equ 0030h
CCPTMRS_C4TSEL_POSN                      equ 0006h
CCPTMRS_C4TSEL_POSITION                  equ 0006h
CCPTMRS_C4TSEL_SIZE                      equ 0002h
CCPTMRS_C4TSEL_LENGTH                    equ 0002h
CCPTMRS_C4TSEL_MASK                      equ 00C0h
CCPTMRS_C1TSEL0_POSN                     equ 0000h
CCPTMRS_C1TSEL0_POSITION                 equ 0000h
CCPTMRS_C1TSEL0_SIZE                     equ 0001h
CCPTMRS_C1TSEL0_LENGTH                   equ 0001h
CCPTMRS_C1TSEL0_MASK                     equ 0001h
CCPTMRS_C1TSEL1_POSN                     equ 0001h
CCPTMRS_C1TSEL1_POSITION                 equ 0001h
CCPTMRS_C1TSEL1_SIZE                     equ 0001h
CCPTMRS_C1TSEL1_LENGTH                   equ 0001h
CCPTMRS_C1TSEL1_MASK                     equ 0002h
CCPTMRS_C2TSEL0_POSN                     equ 0002h
CCPTMRS_C2TSEL0_POSITION                 equ 0002h
CCPTMRS_C2TSEL0_SIZE                     equ 0001h
CCPTMRS_C2TSEL0_LENGTH                   equ 0001h
CCPTMRS_C2TSEL0_MASK                     equ 0004h
CCPTMRS_C2TSEL1_POSN                     equ 0003h
CCPTMRS_C2TSEL1_POSITION                 equ 0003h
CCPTMRS_C2TSEL1_SIZE                     equ 0001h
CCPTMRS_C2TSEL1_LENGTH                   equ 0001h
CCPTMRS_C2TSEL1_MASK                     equ 0008h
CCPTMRS_C3TSEL0_POSN                     equ 0004h
CCPTMRS_C3TSEL0_POSITION                 equ 0004h
CCPTMRS_C3TSEL0_SIZE                     equ 0001h
CCPTMRS_C3TSEL0_LENGTH                   equ 0001h
CCPTMRS_C3TSEL0_MASK                     equ 0010h
CCPTMRS_C3TSEL1_POSN                     equ 0005h
CCPTMRS_C3TSEL1_POSITION                 equ 0005h
CCPTMRS_C3TSEL1_SIZE                     equ 0001h
CCPTMRS_C3TSEL1_LENGTH                   equ 0001h
CCPTMRS_C3TSEL1_MASK                     equ 0020h
CCPTMRS_C4TSEL0_POSN                     equ 0006h
CCPTMRS_C4TSEL0_POSITION                 equ 0006h
CCPTMRS_C4TSEL0_SIZE                     equ 0001h
CCPTMRS_C4TSEL0_LENGTH                   equ 0001h
CCPTMRS_C4TSEL0_MASK                     equ 0040h
CCPTMRS_C4TSEL1_POSN                     equ 0007h
CCPTMRS_C4TSEL1_POSITION                 equ 0007h
CCPTMRS_C4TSEL1_SIZE                     equ 0001h
CCPTMRS_C4TSEL1_LENGTH                   equ 0001h
CCPTMRS_C4TSEL1_MASK                     equ 0080h

// Register: SLRCONA
#define SLRCONA SLRCONA
SLRCONA                                  equ 030Ch
// bitfield definitions
SLRCONA_SLRA0_POSN                       equ 0000h
SLRCONA_SLRA0_POSITION                   equ 0000h
SLRCONA_SLRA0_SIZE                       equ 0001h
SLRCONA_SLRA0_LENGTH                     equ 0001h
SLRCONA_SLRA0_MASK                       equ 0001h
SLRCONA_SLRA1_POSN                       equ 0001h
SLRCONA_SLRA1_POSITION                   equ 0001h
SLRCONA_SLRA1_SIZE                       equ 0001h
SLRCONA_SLRA1_LENGTH                     equ 0001h
SLRCONA_SLRA1_MASK                       equ 0002h
SLRCONA_SLRA2_POSN                       equ 0002h
SLRCONA_SLRA2_POSITION                   equ 0002h
SLRCONA_SLRA2_SIZE                       equ 0001h
SLRCONA_SLRA2_LENGTH                     equ 0001h
SLRCONA_SLRA2_MASK                       equ 0004h
SLRCONA_SLRA4_POSN                       equ 0004h
SLRCONA_SLRA4_POSITION                   equ 0004h
SLRCONA_SLRA4_SIZE                       equ 0001h
SLRCONA_SLRA4_LENGTH                     equ 0001h
SLRCONA_SLRA4_MASK                       equ 0010h
SLRCONA_SLRA5_POSN                       equ 0005h
SLRCONA_SLRA5_POSITION                   equ 0005h
SLRCONA_SLRA5_SIZE                       equ 0001h
SLRCONA_SLRA5_LENGTH                     equ 0001h
SLRCONA_SLRA5_MASK                       equ 0020h

// Register: SLRCONC
#define SLRCONC SLRCONC
SLRCONC                                  equ 030Eh
// bitfield definitions
SLRCONC_SLRC0_POSN                       equ 0000h
SLRCONC_SLRC0_POSITION                   equ 0000h
SLRCONC_SLRC0_SIZE                       equ 0001h
SLRCONC_SLRC0_LENGTH                     equ 0001h
SLRCONC_SLRC0_MASK                       equ 0001h
SLRCONC_SLRC1_POSN                       equ 0001h
SLRCONC_SLRC1_POSITION                   equ 0001h
SLRCONC_SLRC1_SIZE                       equ 0001h
SLRCONC_SLRC1_LENGTH                     equ 0001h
SLRCONC_SLRC1_MASK                       equ 0002h
SLRCONC_SLRC2_POSN                       equ 0002h
SLRCONC_SLRC2_POSITION                   equ 0002h
SLRCONC_SLRC2_SIZE                       equ 0001h
SLRCONC_SLRC2_LENGTH                     equ 0001h
SLRCONC_SLRC2_MASK                       equ 0004h
SLRCONC_SLRC3_POSN                       equ 0003h
SLRCONC_SLRC3_POSITION                   equ 0003h
SLRCONC_SLRC3_SIZE                       equ 0001h
SLRCONC_SLRC3_LENGTH                     equ 0001h
SLRCONC_SLRC3_MASK                       equ 0008h
SLRCONC_SLRC4_POSN                       equ 0004h
SLRCONC_SLRC4_POSITION                   equ 0004h
SLRCONC_SLRC4_SIZE                       equ 0001h
SLRCONC_SLRC4_LENGTH                     equ 0001h
SLRCONC_SLRC4_MASK                       equ 0010h
SLRCONC_SLRC5_POSN                       equ 0005h
SLRCONC_SLRC5_POSITION                   equ 0005h
SLRCONC_SLRC5_SIZE                       equ 0001h
SLRCONC_SLRC5_LENGTH                     equ 0001h
SLRCONC_SLRC5_MASK                       equ 0020h

// Register: CCPR3L
#define CCPR3L CCPR3L
CCPR3L                                   equ 0311h
// bitfield definitions
CCPR3L_CCPR3L_POSN                       equ 0000h
CCPR3L_CCPR3L_POSITION                   equ 0000h
CCPR3L_CCPR3L_SIZE                       equ 0008h
CCPR3L_CCPR3L_LENGTH                     equ 0008h
CCPR3L_CCPR3L_MASK                       equ 00FFh

// Register: CCPR3H
#define CCPR3H CCPR3H
CCPR3H                                   equ 0312h
// bitfield definitions
CCPR3H_CCPR3H_POSN                       equ 0000h
CCPR3H_CCPR3H_POSITION                   equ 0000h
CCPR3H_CCPR3H_SIZE                       equ 0008h
CCPR3H_CCPR3H_LENGTH                     equ 0008h
CCPR3H_CCPR3H_MASK                       equ 00FFh

// Register: CCP3CON
#define CCP3CON CCP3CON
CCP3CON                                  equ 0313h
// bitfield definitions
CCP3CON_CCP3MODE_POSN                    equ 0000h
CCP3CON_CCP3MODE_POSITION                equ 0000h
CCP3CON_CCP3MODE_SIZE                    equ 0004h
CCP3CON_CCP3MODE_LENGTH                  equ 0004h
CCP3CON_CCP3MODE_MASK                    equ 000Fh
CCP3CON_CCP3FMT_POSN                     equ 0004h
CCP3CON_CCP3FMT_POSITION                 equ 0004h
CCP3CON_CCP3FMT_SIZE                     equ 0001h
CCP3CON_CCP3FMT_LENGTH                   equ 0001h
CCP3CON_CCP3FMT_MASK                     equ 0010h
CCP3CON_CCP3OUT_POSN                     equ 0005h
CCP3CON_CCP3OUT_POSITION                 equ 0005h
CCP3CON_CCP3OUT_SIZE                     equ 0001h
CCP3CON_CCP3OUT_LENGTH                   equ 0001h
CCP3CON_CCP3OUT_MASK                     equ 0020h
CCP3CON_CCP3EN_POSN                      equ 0007h
CCP3CON_CCP3EN_POSITION                  equ 0007h
CCP3CON_CCP3EN_SIZE                      equ 0001h
CCP3CON_CCP3EN_LENGTH                    equ 0001h
CCP3CON_CCP3EN_MASK                      equ 0080h
CCP3CON_CCP3MODE0_POSN                   equ 0000h
CCP3CON_CCP3MODE0_POSITION               equ 0000h
CCP3CON_CCP3MODE0_SIZE                   equ 0001h
CCP3CON_CCP3MODE0_LENGTH                 equ 0001h
CCP3CON_CCP3MODE0_MASK                   equ 0001h
CCP3CON_CCP3MODE1_POSN                   equ 0001h
CCP3CON_CCP3MODE1_POSITION               equ 0001h
CCP3CON_CCP3MODE1_SIZE                   equ 0001h
CCP3CON_CCP3MODE1_LENGTH                 equ 0001h
CCP3CON_CCP3MODE1_MASK                   equ 0002h
CCP3CON_CCP3MODE2_POSN                   equ 0002h
CCP3CON_CCP3MODE2_POSITION               equ 0002h
CCP3CON_CCP3MODE2_SIZE                   equ 0001h
CCP3CON_CCP3MODE2_LENGTH                 equ 0001h
CCP3CON_CCP3MODE2_MASK                   equ 0004h
CCP3CON_CCP3MODE3_POSN                   equ 0003h
CCP3CON_CCP3MODE3_POSITION               equ 0003h
CCP3CON_CCP3MODE3_SIZE                   equ 0001h
CCP3CON_CCP3MODE3_LENGTH                 equ 0001h
CCP3CON_CCP3MODE3_MASK                   equ 0008h

// Register: CCP3CAP
#define CCP3CAP CCP3CAP
CCP3CAP                                  equ 0314h
// bitfield definitions
CCP3CAP_CCP3CTS_POSN                     equ 0000h
CCP3CAP_CCP3CTS_POSITION                 equ 0000h
CCP3CAP_CCP3CTS_SIZE                     equ 0004h
CCP3CAP_CCP3CTS_LENGTH                   equ 0004h
CCP3CAP_CCP3CTS_MASK                     equ 000Fh
CCP3CAP_CCAP0_POSN                       equ 0000h
CCP3CAP_CCAP0_POSITION                   equ 0000h
CCP3CAP_CCAP0_SIZE                       equ 0001h
CCP3CAP_CCAP0_LENGTH                     equ 0001h
CCP3CAP_CCAP0_MASK                       equ 0001h
CCP3CAP_CCAP1_POSN                       equ 0001h
CCP3CAP_CCAP1_POSITION                   equ 0001h
CCP3CAP_CCAP1_SIZE                       equ 0001h
CCP3CAP_CCAP1_LENGTH                     equ 0001h
CCP3CAP_CCAP1_MASK                       equ 0002h
CCP3CAP_CCAP2_POSN                       equ 0002h
CCP3CAP_CCAP2_POSITION                   equ 0002h
CCP3CAP_CCAP2_SIZE                       equ 0001h
CCP3CAP_CCAP2_LENGTH                     equ 0001h
CCP3CAP_CCAP2_MASK                       equ 0004h
CCP3CAP_CCAP3_POSN                       equ 0003h
CCP3CAP_CCAP3_POSITION                   equ 0003h
CCP3CAP_CCAP3_SIZE                       equ 0001h
CCP3CAP_CCAP3_LENGTH                     equ 0001h
CCP3CAP_CCAP3_MASK                       equ 0008h

// Register: CCPR4L
#define CCPR4L CCPR4L
CCPR4L                                   equ 0315h
// bitfield definitions
CCPR4L_CCPR4L_POSN                       equ 0000h
CCPR4L_CCPR4L_POSITION                   equ 0000h
CCPR4L_CCPR4L_SIZE                       equ 0008h
CCPR4L_CCPR4L_LENGTH                     equ 0008h
CCPR4L_CCPR4L_MASK                       equ 00FFh

// Register: CCPR4H
#define CCPR4H CCPR4H
CCPR4H                                   equ 0316h
// bitfield definitions
CCPR4H_CCPR4H_POSN                       equ 0000h
CCPR4H_CCPR4H_POSITION                   equ 0000h
CCPR4H_CCPR4H_SIZE                       equ 0008h
CCPR4H_CCPR4H_LENGTH                     equ 0008h
CCPR4H_CCPR4H_MASK                       equ 00FFh

// Register: CCP4CON
#define CCP4CON CCP4CON
CCP4CON                                  equ 0317h
// bitfield definitions
CCP4CON_CCP4MODE_POSN                    equ 0000h
CCP4CON_CCP4MODE_POSITION                equ 0000h
CCP4CON_CCP4MODE_SIZE                    equ 0004h
CCP4CON_CCP4MODE_LENGTH                  equ 0004h
CCP4CON_CCP4MODE_MASK                    equ 000Fh
CCP4CON_CCP4FMT_POSN                     equ 0004h
CCP4CON_CCP4FMT_POSITION                 equ 0004h
CCP4CON_CCP4FMT_SIZE                     equ 0001h
CCP4CON_CCP4FMT_LENGTH                   equ 0001h
CCP4CON_CCP4FMT_MASK                     equ 0010h
CCP4CON_CCP4OUT_POSN                     equ 0005h
CCP4CON_CCP4OUT_POSITION                 equ 0005h
CCP4CON_CCP4OUT_SIZE                     equ 0001h
CCP4CON_CCP4OUT_LENGTH                   equ 0001h
CCP4CON_CCP4OUT_MASK                     equ 0020h
CCP4CON_CCP4EN_POSN                      equ 0007h
CCP4CON_CCP4EN_POSITION                  equ 0007h
CCP4CON_CCP4EN_SIZE                      equ 0001h
CCP4CON_CCP4EN_LENGTH                    equ 0001h
CCP4CON_CCP4EN_MASK                      equ 0080h
CCP4CON_CCP4MODE0_POSN                   equ 0000h
CCP4CON_CCP4MODE0_POSITION               equ 0000h
CCP4CON_CCP4MODE0_SIZE                   equ 0001h
CCP4CON_CCP4MODE0_LENGTH                 equ 0001h
CCP4CON_CCP4MODE0_MASK                   equ 0001h
CCP4CON_CCP4MODE1_POSN                   equ 0001h
CCP4CON_CCP4MODE1_POSITION               equ 0001h
CCP4CON_CCP4MODE1_SIZE                   equ 0001h
CCP4CON_CCP4MODE1_LENGTH                 equ 0001h
CCP4CON_CCP4MODE1_MASK                   equ 0002h
CCP4CON_CCP4MODE2_POSN                   equ 0002h
CCP4CON_CCP4MODE2_POSITION               equ 0002h
CCP4CON_CCP4MODE2_SIZE                   equ 0001h
CCP4CON_CCP4MODE2_LENGTH                 equ 0001h
CCP4CON_CCP4MODE2_MASK                   equ 0004h
CCP4CON_CCP4MODE3_POSN                   equ 0003h
CCP4CON_CCP4MODE3_POSITION               equ 0003h
CCP4CON_CCP4MODE3_SIZE                   equ 0001h
CCP4CON_CCP4MODE3_LENGTH                 equ 0001h
CCP4CON_CCP4MODE3_MASK                   equ 0008h

// Register: CCP4CAP
#define CCP4CAP CCP4CAP
CCP4CAP                                  equ 0318h
// bitfield definitions
CCP4CAP_CCP4CTS_POSN                     equ 0000h
CCP4CAP_CCP4CTS_POSITION                 equ 0000h
CCP4CAP_CCP4CTS_SIZE                     equ 0004h
CCP4CAP_CCP4CTS_LENGTH                   equ 0004h
CCP4CAP_CCP4CTS_MASK                     equ 000Fh
CCP4CAP_CCP4CTS0_POSN                    equ 0000h
CCP4CAP_CCP4CTS0_POSITION                equ 0000h
CCP4CAP_CCP4CTS0_SIZE                    equ 0001h
CCP4CAP_CCP4CTS0_LENGTH                  equ 0001h
CCP4CAP_CCP4CTS0_MASK                    equ 0001h
CCP4CAP_CCP4CTS1_POSN                    equ 0001h
CCP4CAP_CCP4CTS1_POSITION                equ 0001h
CCP4CAP_CCP4CTS1_SIZE                    equ 0001h
CCP4CAP_CCP4CTS1_LENGTH                  equ 0001h
CCP4CAP_CCP4CTS1_MASK                    equ 0002h
CCP4CAP_CCP4CTS2_POSN                    equ 0002h
CCP4CAP_CCP4CTS2_POSITION                equ 0002h
CCP4CAP_CCP4CTS2_SIZE                    equ 0001h
CCP4CAP_CCP4CTS2_LENGTH                  equ 0001h
CCP4CAP_CCP4CTS2_MASK                    equ 0004h
CCP4CAP_CCP4CTS3_POSN                    equ 0003h
CCP4CAP_CCP4CTS3_POSITION                equ 0003h
CCP4CAP_CCP4CTS3_SIZE                    equ 0001h
CCP4CAP_CCP4CTS3_LENGTH                  equ 0001h
CCP4CAP_CCP4CTS3_MASK                    equ 0008h

// Register: INLVLA
#define INLVLA INLVLA
INLVLA                                   equ 038Ch
// bitfield definitions
INLVLA_INLVLA0_POSN                      equ 0000h
INLVLA_INLVLA0_POSITION                  equ 0000h
INLVLA_INLVLA0_SIZE                      equ 0001h
INLVLA_INLVLA0_LENGTH                    equ 0001h
INLVLA_INLVLA0_MASK                      equ 0001h
INLVLA_INLVLA1_POSN                      equ 0001h
INLVLA_INLVLA1_POSITION                  equ 0001h
INLVLA_INLVLA1_SIZE                      equ 0001h
INLVLA_INLVLA1_LENGTH                    equ 0001h
INLVLA_INLVLA1_MASK                      equ 0002h
INLVLA_INLVLA2_POSN                      equ 0002h
INLVLA_INLVLA2_POSITION                  equ 0002h
INLVLA_INLVLA2_SIZE                      equ 0001h
INLVLA_INLVLA2_LENGTH                    equ 0001h
INLVLA_INLVLA2_MASK                      equ 0004h
INLVLA_INLVLA3_POSN                      equ 0003h
INLVLA_INLVLA3_POSITION                  equ 0003h
INLVLA_INLVLA3_SIZE                      equ 0001h
INLVLA_INLVLA3_LENGTH                    equ 0001h
INLVLA_INLVLA3_MASK                      equ 0008h
INLVLA_INLVLA4_POSN                      equ 0004h
INLVLA_INLVLA4_POSITION                  equ 0004h
INLVLA_INLVLA4_SIZE                      equ 0001h
INLVLA_INLVLA4_LENGTH                    equ 0001h
INLVLA_INLVLA4_MASK                      equ 0010h
INLVLA_INLVLA5_POSN                      equ 0005h
INLVLA_INLVLA5_POSITION                  equ 0005h
INLVLA_INLVLA5_SIZE                      equ 0001h
INLVLA_INLVLA5_LENGTH                    equ 0001h
INLVLA_INLVLA5_MASK                      equ 0020h

// Register: INLVLC
#define INLVLC INLVLC
INLVLC                                   equ 038Eh
// bitfield definitions
INLVLC_INLVLC0_POSN                      equ 0000h
INLVLC_INLVLC0_POSITION                  equ 0000h
INLVLC_INLVLC0_SIZE                      equ 0001h
INLVLC_INLVLC0_LENGTH                    equ 0001h
INLVLC_INLVLC0_MASK                      equ 0001h
INLVLC_INLVLC1_POSN                      equ 0001h
INLVLC_INLVLC1_POSITION                  equ 0001h
INLVLC_INLVLC1_SIZE                      equ 0001h
INLVLC_INLVLC1_LENGTH                    equ 0001h
INLVLC_INLVLC1_MASK                      equ 0002h
INLVLC_INLVLC2_POSN                      equ 0002h
INLVLC_INLVLC2_POSITION                  equ 0002h
INLVLC_INLVLC2_SIZE                      equ 0001h
INLVLC_INLVLC2_LENGTH                    equ 0001h
INLVLC_INLVLC2_MASK                      equ 0004h
INLVLC_INLVLC3_POSN                      equ 0003h
INLVLC_INLVLC3_POSITION                  equ 0003h
INLVLC_INLVLC3_SIZE                      equ 0001h
INLVLC_INLVLC3_LENGTH                    equ 0001h
INLVLC_INLVLC3_MASK                      equ 0008h
INLVLC_INLVLC4_POSN                      equ 0004h
INLVLC_INLVLC4_POSITION                  equ 0004h
INLVLC_INLVLC4_SIZE                      equ 0001h
INLVLC_INLVLC4_LENGTH                    equ 0001h
INLVLC_INLVLC4_MASK                      equ 0010h
INLVLC_INLVLC5_POSN                      equ 0005h
INLVLC_INLVLC5_POSITION                  equ 0005h
INLVLC_INLVLC5_SIZE                      equ 0001h
INLVLC_INLVLC5_LENGTH                    equ 0001h
INLVLC_INLVLC5_MASK                      equ 0020h

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

// Register: IOCCP
#define IOCCP IOCCP
IOCCP                                    equ 0397h
// bitfield definitions
IOCCP_IOCCP0_POSN                        equ 0000h
IOCCP_IOCCP0_POSITION                    equ 0000h
IOCCP_IOCCP0_SIZE                        equ 0001h
IOCCP_IOCCP0_LENGTH                      equ 0001h
IOCCP_IOCCP0_MASK                        equ 0001h
IOCCP_IOCCP1_POSN                        equ 0001h
IOCCP_IOCCP1_POSITION                    equ 0001h
IOCCP_IOCCP1_SIZE                        equ 0001h
IOCCP_IOCCP1_LENGTH                      equ 0001h
IOCCP_IOCCP1_MASK                        equ 0002h
IOCCP_IOCCP2_POSN                        equ 0002h
IOCCP_IOCCP2_POSITION                    equ 0002h
IOCCP_IOCCP2_SIZE                        equ 0001h
IOCCP_IOCCP2_LENGTH                      equ 0001h
IOCCP_IOCCP2_MASK                        equ 0004h
IOCCP_IOCCP3_POSN                        equ 0003h
IOCCP_IOCCP3_POSITION                    equ 0003h
IOCCP_IOCCP3_SIZE                        equ 0001h
IOCCP_IOCCP3_LENGTH                      equ 0001h
IOCCP_IOCCP3_MASK                        equ 0008h
IOCCP_IOCCP4_POSN                        equ 0004h
IOCCP_IOCCP4_POSITION                    equ 0004h
IOCCP_IOCCP4_SIZE                        equ 0001h
IOCCP_IOCCP4_LENGTH                      equ 0001h
IOCCP_IOCCP4_MASK                        equ 0010h
IOCCP_IOCCP5_POSN                        equ 0005h
IOCCP_IOCCP5_POSITION                    equ 0005h
IOCCP_IOCCP5_SIZE                        equ 0001h
IOCCP_IOCCP5_LENGTH                      equ 0001h
IOCCP_IOCCP5_MASK                        equ 0020h

// Register: IOCCN
#define IOCCN IOCCN
IOCCN                                    equ 0398h
// bitfield definitions
IOCCN_IOCCN0_POSN                        equ 0000h
IOCCN_IOCCN0_POSITION                    equ 0000h
IOCCN_IOCCN0_SIZE                        equ 0001h
IOCCN_IOCCN0_LENGTH                      equ 0001h
IOCCN_IOCCN0_MASK                        equ 0001h
IOCCN_IOCCN1_POSN                        equ 0001h
IOCCN_IOCCN1_POSITION                    equ 0001h
IOCCN_IOCCN1_SIZE                        equ 0001h
IOCCN_IOCCN1_LENGTH                      equ 0001h
IOCCN_IOCCN1_MASK                        equ 0002h
IOCCN_IOCCN2_POSN                        equ 0002h
IOCCN_IOCCN2_POSITION                    equ 0002h
IOCCN_IOCCN2_SIZE                        equ 0001h
IOCCN_IOCCN2_LENGTH                      equ 0001h
IOCCN_IOCCN2_MASK                        equ 0004h
IOCCN_IOCCN3_POSN                        equ 0003h
IOCCN_IOCCN3_POSITION                    equ 0003h
IOCCN_IOCCN3_SIZE                        equ 0001h
IOCCN_IOCCN3_LENGTH                      equ 0001h
IOCCN_IOCCN3_MASK                        equ 0008h
IOCCN_IOCCN4_POSN                        equ 0004h
IOCCN_IOCCN4_POSITION                    equ 0004h
IOCCN_IOCCN4_SIZE                        equ 0001h
IOCCN_IOCCN4_LENGTH                      equ 0001h
IOCCN_IOCCN4_MASK                        equ 0010h
IOCCN_IOCCN5_POSN                        equ 0005h
IOCCN_IOCCN5_POSITION                    equ 0005h
IOCCN_IOCCN5_SIZE                        equ 0001h
IOCCN_IOCCN5_LENGTH                      equ 0001h
IOCCN_IOCCN5_MASK                        equ 0020h

// Register: IOCCF
#define IOCCF IOCCF
IOCCF                                    equ 0399h
// bitfield definitions
IOCCF_IOCCF0_POSN                        equ 0000h
IOCCF_IOCCF0_POSITION                    equ 0000h
IOCCF_IOCCF0_SIZE                        equ 0001h
IOCCF_IOCCF0_LENGTH                      equ 0001h
IOCCF_IOCCF0_MASK                        equ 0001h
IOCCF_IOCCF1_POSN                        equ 0001h
IOCCF_IOCCF1_POSITION                    equ 0001h
IOCCF_IOCCF1_SIZE                        equ 0001h
IOCCF_IOCCF1_LENGTH                      equ 0001h
IOCCF_IOCCF1_MASK                        equ 0002h
IOCCF_IOCCF2_POSN                        equ 0002h
IOCCF_IOCCF2_POSITION                    equ 0002h
IOCCF_IOCCF2_SIZE                        equ 0001h
IOCCF_IOCCF2_LENGTH                      equ 0001h
IOCCF_IOCCF2_MASK                        equ 0004h
IOCCF_IOCCF3_POSN                        equ 0003h
IOCCF_IOCCF3_POSITION                    equ 0003h
IOCCF_IOCCF3_SIZE                        equ 0001h
IOCCF_IOCCF3_LENGTH                      equ 0001h
IOCCF_IOCCF3_MASK                        equ 0008h
IOCCF_IOCCF4_POSN                        equ 0004h
IOCCF_IOCCF4_POSITION                    equ 0004h
IOCCF_IOCCF4_SIZE                        equ 0001h
IOCCF_IOCCF4_LENGTH                      equ 0001h
IOCCF_IOCCF4_MASK                        equ 0010h
IOCCF_IOCCF5_POSN                        equ 0005h
IOCCF_IOCCF5_POSITION                    equ 0005h
IOCCF_IOCCF5_SIZE                        equ 0001h
IOCCF_IOCCF5_LENGTH                      equ 0001h
IOCCF_IOCCF5_MASK                        equ 0020h

// Register: CLKRCON
#define CLKRCON CLKRCON
CLKRCON                                  equ 039Ah
// bitfield definitions
CLKRCON_CLKRDIV_POSN                     equ 0000h
CLKRCON_CLKRDIV_POSITION                 equ 0000h
CLKRCON_CLKRDIV_SIZE                     equ 0003h
CLKRCON_CLKRDIV_LENGTH                   equ 0003h
CLKRCON_CLKRDIV_MASK                     equ 0007h
CLKRCON_CLKRDC_POSN                      equ 0003h
CLKRCON_CLKRDC_POSITION                  equ 0003h
CLKRCON_CLKRDC_SIZE                      equ 0002h
CLKRCON_CLKRDC_LENGTH                    equ 0002h
CLKRCON_CLKRDC_MASK                      equ 0018h
CLKRCON_CLKREN_POSN                      equ 0007h
CLKRCON_CLKREN_POSITION                  equ 0007h
CLKRCON_CLKREN_SIZE                      equ 0001h
CLKRCON_CLKREN_LENGTH                    equ 0001h
CLKRCON_CLKREN_MASK                      equ 0080h
CLKRCON_CLKRDIV0_POSN                    equ 0000h
CLKRCON_CLKRDIV0_POSITION                equ 0000h
CLKRCON_CLKRDIV0_SIZE                    equ 0001h
CLKRCON_CLKRDIV0_LENGTH                  equ 0001h
CLKRCON_CLKRDIV0_MASK                    equ 0001h
CLKRCON_CLKRDIV1_POSN                    equ 0001h
CLKRCON_CLKRDIV1_POSITION                equ 0001h
CLKRCON_CLKRDIV1_SIZE                    equ 0001h
CLKRCON_CLKRDIV1_LENGTH                  equ 0001h
CLKRCON_CLKRDIV1_MASK                    equ 0002h
CLKRCON_CLKRDIV2_POSN                    equ 0002h
CLKRCON_CLKRDIV2_POSITION                equ 0002h
CLKRCON_CLKRDIV2_SIZE                    equ 0001h
CLKRCON_CLKRDIV2_LENGTH                  equ 0001h
CLKRCON_CLKRDIV2_MASK                    equ 0004h
CLKRCON_CLKRDC0_POSN                     equ 0003h
CLKRCON_CLKRDC0_POSITION                 equ 0003h
CLKRCON_CLKRDC0_SIZE                     equ 0001h
CLKRCON_CLKRDC0_LENGTH                   equ 0001h
CLKRCON_CLKRDC0_MASK                     equ 0008h
CLKRCON_CLKRDC1_POSN                     equ 0004h
CLKRCON_CLKRDC1_POSITION                 equ 0004h
CLKRCON_CLKRDC1_SIZE                     equ 0001h
CLKRCON_CLKRDC1_LENGTH                   equ 0001h
CLKRCON_CLKRDC1_MASK                     equ 0010h

// Register: MDCON
#define MDCON MDCON
MDCON                                    equ 039Ch
// bitfield definitions
MDCON_MDBIT_POSN                         equ 0000h
MDCON_MDBIT_POSITION                     equ 0000h
MDCON_MDBIT_SIZE                         equ 0001h
MDCON_MDBIT_LENGTH                       equ 0001h
MDCON_MDBIT_MASK                         equ 0001h
MDCON_MDOUT_POSN                         equ 0003h
MDCON_MDOUT_POSITION                     equ 0003h
MDCON_MDOUT_SIZE                         equ 0001h
MDCON_MDOUT_LENGTH                       equ 0001h
MDCON_MDOUT_MASK                         equ 0008h
MDCON_MDOPOL_POSN                        equ 0004h
MDCON_MDOPOL_POSITION                    equ 0004h
MDCON_MDOPOL_SIZE                        equ 0001h
MDCON_MDOPOL_LENGTH                      equ 0001h
MDCON_MDOPOL_MASK                        equ 0010h
MDCON_MDEN_POSN                          equ 0007h
MDCON_MDEN_POSITION                      equ 0007h
MDCON_MDEN_SIZE                          equ 0001h
MDCON_MDEN_LENGTH                        equ 0001h
MDCON_MDEN_MASK                          equ 0080h

// Register: MDSRC
#define MDSRC MDSRC
MDSRC                                    equ 039Dh
// bitfield definitions
MDSRC_MDMS_POSN                          equ 0000h
MDSRC_MDMS_POSITION                      equ 0000h
MDSRC_MDMS_SIZE                          equ 0004h
MDSRC_MDMS_LENGTH                        equ 0004h
MDSRC_MDMS_MASK                          equ 000Fh
MDSRC_MDMS0_POSN                         equ 0000h
MDSRC_MDMS0_POSITION                     equ 0000h
MDSRC_MDMS0_SIZE                         equ 0001h
MDSRC_MDMS0_LENGTH                       equ 0001h
MDSRC_MDMS0_MASK                         equ 0001h
MDSRC_MDMS1_POSN                         equ 0001h
MDSRC_MDMS1_POSITION                     equ 0001h
MDSRC_MDMS1_SIZE                         equ 0001h
MDSRC_MDMS1_LENGTH                       equ 0001h
MDSRC_MDMS1_MASK                         equ 0002h
MDSRC_MDMS2_POSN                         equ 0002h
MDSRC_MDMS2_POSITION                     equ 0002h
MDSRC_MDMS2_SIZE                         equ 0001h
MDSRC_MDMS2_LENGTH                       equ 0001h
MDSRC_MDMS2_MASK                         equ 0004h
MDSRC_MDMS3_POSN                         equ 0003h
MDSRC_MDMS3_POSITION                     equ 0003h
MDSRC_MDMS3_SIZE                         equ 0001h
MDSRC_MDMS3_LENGTH                       equ 0001h
MDSRC_MDMS3_MASK                         equ 0008h

// Register: MDCARH
#define MDCARH MDCARH
MDCARH                                   equ 039Eh
// bitfield definitions
MDCARH_MDCH_POSN                         equ 0000h
MDCARH_MDCH_POSITION                     equ 0000h
MDCARH_MDCH_SIZE                         equ 0004h
MDCARH_MDCH_LENGTH                       equ 0004h
MDCARH_MDCH_MASK                         equ 000Fh
MDCARH_MDCHSYNC_POSN                     equ 0005h
MDCARH_MDCHSYNC_POSITION                 equ 0005h
MDCARH_MDCHSYNC_SIZE                     equ 0001h
MDCARH_MDCHSYNC_LENGTH                   equ 0001h
MDCARH_MDCHSYNC_MASK                     equ 0020h
MDCARH_MDCHPOL_POSN                      equ 0006h
MDCARH_MDCHPOL_POSITION                  equ 0006h
MDCARH_MDCHPOL_SIZE                      equ 0001h
MDCARH_MDCHPOL_LENGTH                    equ 0001h
MDCARH_MDCHPOL_MASK                      equ 0040h
MDCARH_MDCH0_POSN                        equ 0000h
MDCARH_MDCH0_POSITION                    equ 0000h
MDCARH_MDCH0_SIZE                        equ 0001h
MDCARH_MDCH0_LENGTH                      equ 0001h
MDCARH_MDCH0_MASK                        equ 0001h
MDCARH_MDCH1_POSN                        equ 0001h
MDCARH_MDCH1_POSITION                    equ 0001h
MDCARH_MDCH1_SIZE                        equ 0001h
MDCARH_MDCH1_LENGTH                      equ 0001h
MDCARH_MDCH1_MASK                        equ 0002h
MDCARH_MDCH2_POSN                        equ 0002h
MDCARH_MDCH2_POSITION                    equ 0002h
MDCARH_MDCH2_SIZE                        equ 0001h
MDCARH_MDCH2_LENGTH                      equ 0001h
MDCARH_MDCH2_MASK                        equ 0004h
MDCARH_MDCH3_POSN                        equ 0003h
MDCARH_MDCH3_POSITION                    equ 0003h
MDCARH_MDCH3_SIZE                        equ 0001h
MDCARH_MDCH3_LENGTH                      equ 0001h
MDCARH_MDCH3_MASK                        equ 0008h

// Register: MDCARL
#define MDCARL MDCARL
MDCARL                                   equ 039Fh
// bitfield definitions
MDCARL_MDCL_POSN                         equ 0000h
MDCARL_MDCL_POSITION                     equ 0000h
MDCARL_MDCL_SIZE                         equ 0004h
MDCARL_MDCL_LENGTH                       equ 0004h
MDCARL_MDCL_MASK                         equ 000Fh
MDCARL_MDCLSYNC_POSN                     equ 0005h
MDCARL_MDCLSYNC_POSITION                 equ 0005h
MDCARL_MDCLSYNC_SIZE                     equ 0001h
MDCARL_MDCLSYNC_LENGTH                   equ 0001h
MDCARL_MDCLSYNC_MASK                     equ 0020h
MDCARL_MDCLPOL_POSN                      equ 0006h
MDCARL_MDCLPOL_POSITION                  equ 0006h
MDCARL_MDCLPOL_SIZE                      equ 0001h
MDCARL_MDCLPOL_LENGTH                    equ 0001h
MDCARL_MDCLPOL_MASK                      equ 0040h
MDCARL_MDCL0_POSN                        equ 0000h
MDCARL_MDCL0_POSITION                    equ 0000h
MDCARL_MDCL0_SIZE                        equ 0001h
MDCARL_MDCL0_LENGTH                      equ 0001h
MDCARL_MDCL0_MASK                        equ 0001h
MDCARL_MDCL1_POSN                        equ 0001h
MDCARL_MDCL1_POSITION                    equ 0001h
MDCARL_MDCL1_SIZE                        equ 0001h
MDCARL_MDCL1_LENGTH                      equ 0001h
MDCARL_MDCL1_MASK                        equ 0002h
MDCARL_MDCL2_POSN                        equ 0002h
MDCARL_MDCL2_POSITION                    equ 0002h
MDCARL_MDCL2_SIZE                        equ 0001h
MDCARL_MDCL2_LENGTH                      equ 0001h
MDCARL_MDCL2_MASK                        equ 0004h
MDCARL_MDCL3_POSN                        equ 0003h
MDCARL_MDCL3_POSITION                    equ 0003h
MDCARL_MDCL3_SIZE                        equ 0001h
MDCARL_MDCL3_LENGTH                      equ 0001h
MDCARL_MDCL3_MASK                        equ 0008h

// Register: TMR3L
#define TMR3L TMR3L
TMR3L                                    equ 0411h
// bitfield definitions
TMR3L_TMR3L_POSN                         equ 0000h
TMR3L_TMR3L_POSITION                     equ 0000h
TMR3L_TMR3L_SIZE                         equ 0008h
TMR3L_TMR3L_LENGTH                       equ 0008h
TMR3L_TMR3L_MASK                         equ 00FFh

// Register: TMR3H
#define TMR3H TMR3H
TMR3H                                    equ 0412h
// bitfield definitions
TMR3H_TMR3H_POSN                         equ 0000h
TMR3H_TMR3H_POSITION                     equ 0000h
TMR3H_TMR3H_SIZE                         equ 0008h
TMR3H_TMR3H_LENGTH                       equ 0008h
TMR3H_TMR3H_MASK                         equ 00FFh

// Register: T3CON
#define T3CON T3CON
T3CON                                    equ 0413h
// bitfield definitions
T3CON_TMR3ON_POSN                        equ 0000h
T3CON_TMR3ON_POSITION                    equ 0000h
T3CON_TMR3ON_SIZE                        equ 0001h
T3CON_TMR3ON_LENGTH                      equ 0001h
T3CON_TMR3ON_MASK                        equ 0001h
T3CON_T3SYNC_POSN                        equ 0002h
T3CON_T3SYNC_POSITION                    equ 0002h
T3CON_T3SYNC_SIZE                        equ 0001h
T3CON_T3SYNC_LENGTH                      equ 0001h
T3CON_T3SYNC_MASK                        equ 0004h
T3CON_T3SOSC_POSN                        equ 0003h
T3CON_T3SOSC_POSITION                    equ 0003h
T3CON_T3SOSC_SIZE                        equ 0001h
T3CON_T3SOSC_LENGTH                      equ 0001h
T3CON_T3SOSC_MASK                        equ 0008h
T3CON_T3CKPS_POSN                        equ 0004h
T3CON_T3CKPS_POSITION                    equ 0004h
T3CON_T3CKPS_SIZE                        equ 0002h
T3CON_T3CKPS_LENGTH                      equ 0002h
T3CON_T3CKPS_MASK                        equ 0030h
T3CON_TMR3CS_POSN                        equ 0006h
T3CON_TMR3CS_POSITION                    equ 0006h
T3CON_TMR3CS_SIZE                        equ 0002h
T3CON_TMR3CS_LENGTH                      equ 0002h
T3CON_TMR3CS_MASK                        equ 00C0h
T3CON_T3CKPS0_POSN                       equ 0004h
T3CON_T3CKPS0_POSITION                   equ 0004h
T3CON_T3CKPS0_SIZE                       equ 0001h
T3CON_T3CKPS0_LENGTH                     equ 0001h
T3CON_T3CKPS0_MASK                       equ 0010h
T3CON_T3CKPS1_POSN                       equ 0005h
T3CON_T3CKPS1_POSITION                   equ 0005h
T3CON_T3CKPS1_SIZE                       equ 0001h
T3CON_T3CKPS1_LENGTH                     equ 0001h
T3CON_T3CKPS1_MASK                       equ 0020h
T3CON_TMR3CS0_POSN                       equ 0006h
T3CON_TMR3CS0_POSITION                   equ 0006h
T3CON_TMR3CS0_SIZE                       equ 0001h
T3CON_TMR3CS0_LENGTH                     equ 0001h
T3CON_TMR3CS0_MASK                       equ 0040h
T3CON_TMR3CS1_POSN                       equ 0007h
T3CON_TMR3CS1_POSITION                   equ 0007h
T3CON_TMR3CS1_SIZE                       equ 0001h
T3CON_TMR3CS1_LENGTH                     equ 0001h
T3CON_TMR3CS1_MASK                       equ 0080h

// Register: T3GCON
#define T3GCON T3GCON
T3GCON                                   equ 0414h
// bitfield definitions
T3GCON_T3GSS_POSN                        equ 0000h
T3GCON_T3GSS_POSITION                    equ 0000h
T3GCON_T3GSS_SIZE                        equ 0002h
T3GCON_T3GSS_LENGTH                      equ 0002h
T3GCON_T3GSS_MASK                        equ 0003h
T3GCON_T3GVAL_POSN                       equ 0002h
T3GCON_T3GVAL_POSITION                   equ 0002h
T3GCON_T3GVAL_SIZE                       equ 0001h
T3GCON_T3GVAL_LENGTH                     equ 0001h
T3GCON_T3GVAL_MASK                       equ 0004h
T3GCON_T3GGO_nDONE_POSN                  equ 0003h
T3GCON_T3GGO_nDONE_POSITION              equ 0003h
T3GCON_T3GGO_nDONE_SIZE                  equ 0001h
T3GCON_T3GGO_nDONE_LENGTH                equ 0001h
T3GCON_T3GGO_nDONE_MASK                  equ 0008h
T3GCON_T3GSPM_POSN                       equ 0004h
T3GCON_T3GSPM_POSITION                   equ 0004h
T3GCON_T3GSPM_SIZE                       equ 0001h
T3GCON_T3GSPM_LENGTH                     equ 0001h
T3GCON_T3GSPM_MASK                       equ 0010h
T3GCON_T3GTM_POSN                        equ 0005h
T3GCON_T3GTM_POSITION                    equ 0005h
T3GCON_T3GTM_SIZE                        equ 0001h
T3GCON_T3GTM_LENGTH                      equ 0001h
T3GCON_T3GTM_MASK                        equ 0020h
T3GCON_T3GPOL_POSN                       equ 0006h
T3GCON_T3GPOL_POSITION                   equ 0006h
T3GCON_T3GPOL_SIZE                       equ 0001h
T3GCON_T3GPOL_LENGTH                     equ 0001h
T3GCON_T3GPOL_MASK                       equ 0040h
T3GCON_TMR3GE_POSN                       equ 0007h
T3GCON_TMR3GE_POSITION                   equ 0007h
T3GCON_TMR3GE_SIZE                       equ 0001h
T3GCON_TMR3GE_LENGTH                     equ 0001h
T3GCON_TMR3GE_MASK                       equ 0080h
T3GCON_T3GSS0_POSN                       equ 0000h
T3GCON_T3GSS0_POSITION                   equ 0000h
T3GCON_T3GSS0_SIZE                       equ 0001h
T3GCON_T3GSS0_LENGTH                     equ 0001h
T3GCON_T3GSS0_MASK                       equ 0001h
T3GCON_T3GSS1_POSN                       equ 0001h
T3GCON_T3GSS1_POSITION                   equ 0001h
T3GCON_T3GSS1_SIZE                       equ 0001h
T3GCON_T3GSS1_LENGTH                     equ 0001h
T3GCON_T3GSS1_MASK                       equ 0002h

// Register: TMR4
#define TMR4 TMR4
TMR4                                     equ 0415h
// bitfield definitions
TMR4_TMR4_POSN                           equ 0000h
TMR4_TMR4_POSITION                       equ 0000h
TMR4_TMR4_SIZE                           equ 0008h
TMR4_TMR4_LENGTH                         equ 0008h
TMR4_TMR4_MASK                           equ 00FFh

// Register: PR4
#define PR4 PR4
PR4                                      equ 0416h
// bitfield definitions
PR4_PR4_POSN                             equ 0000h
PR4_PR4_POSITION                         equ 0000h
PR4_PR4_SIZE                             equ 0008h
PR4_PR4_LENGTH                           equ 0008h
PR4_PR4_MASK                             equ 00FFh

// Register: T4CON
#define T4CON T4CON
T4CON                                    equ 0417h
// bitfield definitions
T4CON_T4CKPS_POSN                        equ 0000h
T4CON_T4CKPS_POSITION                    equ 0000h
T4CON_T4CKPS_SIZE                        equ 0002h
T4CON_T4CKPS_LENGTH                      equ 0002h
T4CON_T4CKPS_MASK                        equ 0003h
T4CON_TMR4ON_POSN                        equ 0002h
T4CON_TMR4ON_POSITION                    equ 0002h
T4CON_TMR4ON_SIZE                        equ 0001h
T4CON_TMR4ON_LENGTH                      equ 0001h
T4CON_TMR4ON_MASK                        equ 0004h
T4CON_T4OUTPS_POSN                       equ 0003h
T4CON_T4OUTPS_POSITION                   equ 0003h
T4CON_T4OUTPS_SIZE                       equ 0004h
T4CON_T4OUTPS_LENGTH                     equ 0004h
T4CON_T4OUTPS_MASK                       equ 0078h
T4CON_T4CKPS0_POSN                       equ 0000h
T4CON_T4CKPS0_POSITION                   equ 0000h
T4CON_T4CKPS0_SIZE                       equ 0001h
T4CON_T4CKPS0_LENGTH                     equ 0001h
T4CON_T4CKPS0_MASK                       equ 0001h
T4CON_T4CKPS1_POSN                       equ 0001h
T4CON_T4CKPS1_POSITION                   equ 0001h
T4CON_T4CKPS1_SIZE                       equ 0001h
T4CON_T4CKPS1_LENGTH                     equ 0001h
T4CON_T4CKPS1_MASK                       equ 0002h
T4CON_T4OUTPS0_POSN                      equ 0003h
T4CON_T4OUTPS0_POSITION                  equ 0003h
T4CON_T4OUTPS0_SIZE                      equ 0001h
T4CON_T4OUTPS0_LENGTH                    equ 0001h
T4CON_T4OUTPS0_MASK                      equ 0008h
T4CON_T4OUTPS1_POSN                      equ 0004h
T4CON_T4OUTPS1_POSITION                  equ 0004h
T4CON_T4OUTPS1_SIZE                      equ 0001h
T4CON_T4OUTPS1_LENGTH                    equ 0001h
T4CON_T4OUTPS1_MASK                      equ 0010h
T4CON_T4OUTPS2_POSN                      equ 0005h
T4CON_T4OUTPS2_POSITION                  equ 0005h
T4CON_T4OUTPS2_SIZE                      equ 0001h
T4CON_T4OUTPS2_LENGTH                    equ 0001h
T4CON_T4OUTPS2_MASK                      equ 0020h
T4CON_T4OUTPS3_POSN                      equ 0006h
T4CON_T4OUTPS3_POSITION                  equ 0006h
T4CON_T4OUTPS3_SIZE                      equ 0001h
T4CON_T4OUTPS3_LENGTH                    equ 0001h
T4CON_T4OUTPS3_MASK                      equ 0040h

// Register: TMR5L
#define TMR5L TMR5L
TMR5L                                    equ 0418h
// bitfield definitions
TMR5L_TMR5L_POSN                         equ 0000h
TMR5L_TMR5L_POSITION                     equ 0000h
TMR5L_TMR5L_SIZE                         equ 0008h
TMR5L_TMR5L_LENGTH                       equ 0008h
TMR5L_TMR5L_MASK                         equ 00FFh

// Register: TMR5H
#define TMR5H TMR5H
TMR5H                                    equ 0419h
// bitfield definitions
TMR5H_TMR5H_POSN                         equ 0000h
TMR5H_TMR5H_POSITION                     equ 0000h
TMR5H_TMR5H_SIZE                         equ 0008h
TMR5H_TMR5H_LENGTH                       equ 0008h
TMR5H_TMR5H_MASK                         equ 00FFh

// Register: T5CON
#define T5CON T5CON
T5CON                                    equ 041Ah
// bitfield definitions
T5CON_TMR5ON_POSN                        equ 0000h
T5CON_TMR5ON_POSITION                    equ 0000h
T5CON_TMR5ON_SIZE                        equ 0001h
T5CON_TMR5ON_LENGTH                      equ 0001h
T5CON_TMR5ON_MASK                        equ 0001h
T5CON_T5SYNC_POSN                        equ 0002h
T5CON_T5SYNC_POSITION                    equ 0002h
T5CON_T5SYNC_SIZE                        equ 0001h
T5CON_T5SYNC_LENGTH                      equ 0001h
T5CON_T5SYNC_MASK                        equ 0004h
T5CON_T5SOSC_POSN                        equ 0003h
T5CON_T5SOSC_POSITION                    equ 0003h
T5CON_T5SOSC_SIZE                        equ 0001h
T5CON_T5SOSC_LENGTH                      equ 0001h
T5CON_T5SOSC_MASK                        equ 0008h
T5CON_T5CKPS_POSN                        equ 0004h
T5CON_T5CKPS_POSITION                    equ 0004h
T5CON_T5CKPS_SIZE                        equ 0002h
T5CON_T5CKPS_LENGTH                      equ 0002h
T5CON_T5CKPS_MASK                        equ 0030h
T5CON_TMR5CS_POSN                        equ 0006h
T5CON_TMR5CS_POSITION                    equ 0006h
T5CON_TMR5CS_SIZE                        equ 0002h
T5CON_TMR5CS_LENGTH                      equ 0002h
T5CON_TMR5CS_MASK                        equ 00C0h
T5CON_T5CKPS0_POSN                       equ 0004h
T5CON_T5CKPS0_POSITION                   equ 0004h
T5CON_T5CKPS0_SIZE                       equ 0001h
T5CON_T5CKPS0_LENGTH                     equ 0001h
T5CON_T5CKPS0_MASK                       equ 0010h
T5CON_T5CKPS1_POSN                       equ 0005h
T5CON_T5CKPS1_POSITION                   equ 0005h
T5CON_T5CKPS1_SIZE                       equ 0001h
T5CON_T5CKPS1_LENGTH                     equ 0001h
T5CON_T5CKPS1_MASK                       equ 0020h
T5CON_TMR5CS0_POSN                       equ 0006h
T5CON_TMR5CS0_POSITION                   equ 0006h
T5CON_TMR5CS0_SIZE                       equ 0001h
T5CON_TMR5CS0_LENGTH                     equ 0001h
T5CON_TMR5CS0_MASK                       equ 0040h
T5CON_TMR5CS1_POSN                       equ 0007h
T5CON_TMR5CS1_POSITION                   equ 0007h
T5CON_TMR5CS1_SIZE                       equ 0001h
T5CON_TMR5CS1_LENGTH                     equ 0001h
T5CON_TMR5CS1_MASK                       equ 0080h

// Register: T5GCON
#define T5GCON T5GCON
T5GCON                                   equ 041Bh
// bitfield definitions
T5GCON_T5GSS_POSN                        equ 0000h
T5GCON_T5GSS_POSITION                    equ 0000h
T5GCON_T5GSS_SIZE                        equ 0002h
T5GCON_T5GSS_LENGTH                      equ 0002h
T5GCON_T5GSS_MASK                        equ 0003h
T5GCON_T5GVAL_POSN                       equ 0002h
T5GCON_T5GVAL_POSITION                   equ 0002h
T5GCON_T5GVAL_SIZE                       equ 0001h
T5GCON_T5GVAL_LENGTH                     equ 0001h
T5GCON_T5GVAL_MASK                       equ 0004h
T5GCON_T5GGO_nDONE_POSN                  equ 0003h
T5GCON_T5GGO_nDONE_POSITION              equ 0003h
T5GCON_T5GGO_nDONE_SIZE                  equ 0001h
T5GCON_T5GGO_nDONE_LENGTH                equ 0001h
T5GCON_T5GGO_nDONE_MASK                  equ 0008h
T5GCON_T5GSPM_POSN                       equ 0004h
T5GCON_T5GSPM_POSITION                   equ 0004h
T5GCON_T5GSPM_SIZE                       equ 0001h
T5GCON_T5GSPM_LENGTH                     equ 0001h
T5GCON_T5GSPM_MASK                       equ 0010h
T5GCON_T5GTM_POSN                        equ 0005h
T5GCON_T5GTM_POSITION                    equ 0005h
T5GCON_T5GTM_SIZE                        equ 0001h
T5GCON_T5GTM_LENGTH                      equ 0001h
T5GCON_T5GTM_MASK                        equ 0020h
T5GCON_T5GPOL_POSN                       equ 0006h
T5GCON_T5GPOL_POSITION                   equ 0006h
T5GCON_T5GPOL_SIZE                       equ 0001h
T5GCON_T5GPOL_LENGTH                     equ 0001h
T5GCON_T5GPOL_MASK                       equ 0040h
T5GCON_TMR5GE_POSN                       equ 0007h
T5GCON_TMR5GE_POSITION                   equ 0007h
T5GCON_TMR5GE_SIZE                       equ 0001h
T5GCON_TMR5GE_LENGTH                     equ 0001h
T5GCON_TMR5GE_MASK                       equ 0080h
T5GCON_T5GSS0_POSN                       equ 0000h
T5GCON_T5GSS0_POSITION                   equ 0000h
T5GCON_T5GSS0_SIZE                       equ 0001h
T5GCON_T5GSS0_LENGTH                     equ 0001h
T5GCON_T5GSS0_MASK                       equ 0001h
T5GCON_T5GSS1_POSN                       equ 0001h
T5GCON_T5GSS1_POSITION                   equ 0001h
T5GCON_T5GSS1_SIZE                       equ 0001h
T5GCON_T5GSS1_LENGTH                     equ 0001h
T5GCON_T5GSS1_MASK                       equ 0002h

// Register: TMR6
#define TMR6 TMR6
TMR6                                     equ 041Ch
// bitfield definitions
TMR6_TMR6_POSN                           equ 0000h
TMR6_TMR6_POSITION                       equ 0000h
TMR6_TMR6_SIZE                           equ 0008h
TMR6_TMR6_LENGTH                         equ 0008h
TMR6_TMR6_MASK                           equ 00FFh

// Register: PR6
#define PR6 PR6
PR6                                      equ 041Dh
// bitfield definitions
PR6_PR6_POSN                             equ 0000h
PR6_PR6_POSITION                         equ 0000h
PR6_PR6_SIZE                             equ 0008h
PR6_PR6_LENGTH                           equ 0008h
PR6_PR6_MASK                             equ 00FFh

// Register: T6CON
#define T6CON T6CON
T6CON                                    equ 041Eh
// bitfield definitions
T6CON_T6CKPS_POSN                        equ 0000h
T6CON_T6CKPS_POSITION                    equ 0000h
T6CON_T6CKPS_SIZE                        equ 0002h
T6CON_T6CKPS_LENGTH                      equ 0002h
T6CON_T6CKPS_MASK                        equ 0003h
T6CON_TMR6ON_POSN                        equ 0002h
T6CON_TMR6ON_POSITION                    equ 0002h
T6CON_TMR6ON_SIZE                        equ 0001h
T6CON_TMR6ON_LENGTH                      equ 0001h
T6CON_TMR6ON_MASK                        equ 0004h
T6CON_T6OUTPS_POSN                       equ 0003h
T6CON_T6OUTPS_POSITION                   equ 0003h
T6CON_T6OUTPS_SIZE                       equ 0004h
T6CON_T6OUTPS_LENGTH                     equ 0004h
T6CON_T6OUTPS_MASK                       equ 0078h
T6CON_T6CKPS0_POSN                       equ 0000h
T6CON_T6CKPS0_POSITION                   equ 0000h
T6CON_T6CKPS0_SIZE                       equ 0001h
T6CON_T6CKPS0_LENGTH                     equ 0001h
T6CON_T6CKPS0_MASK                       equ 0001h
T6CON_T6CKPS1_POSN                       equ 0001h
T6CON_T6CKPS1_POSITION                   equ 0001h
T6CON_T6CKPS1_SIZE                       equ 0001h
T6CON_T6CKPS1_LENGTH                     equ 0001h
T6CON_T6CKPS1_MASK                       equ 0002h
T6CON_T6OUTPS0_POSN                      equ 0003h
T6CON_T6OUTPS0_POSITION                  equ 0003h
T6CON_T6OUTPS0_SIZE                      equ 0001h
T6CON_T6OUTPS0_LENGTH                    equ 0001h
T6CON_T6OUTPS0_MASK                      equ 0008h
T6CON_T6OUTPS1_POSN                      equ 0004h
T6CON_T6OUTPS1_POSITION                  equ 0004h
T6CON_T6OUTPS1_SIZE                      equ 0001h
T6CON_T6OUTPS1_LENGTH                    equ 0001h
T6CON_T6OUTPS1_MASK                      equ 0010h
T6CON_T6OUTPS2_POSN                      equ 0005h
T6CON_T6OUTPS2_POSITION                  equ 0005h
T6CON_T6OUTPS2_SIZE                      equ 0001h
T6CON_T6OUTPS2_LENGTH                    equ 0001h
T6CON_T6OUTPS2_MASK                      equ 0020h
T6CON_T6OUTPS3_POSN                      equ 0006h
T6CON_T6OUTPS3_POSITION                  equ 0006h
T6CON_T6OUTPS3_SIZE                      equ 0001h
T6CON_T6OUTPS3_LENGTH                    equ 0001h
T6CON_T6OUTPS3_MASK                      equ 0040h

// Register: CCDCON
#define CCDCON CCDCON
CCDCON                                   equ 041Fh
// bitfield definitions
CCDCON_CCDS_POSN                         equ 0000h
CCDCON_CCDS_POSITION                     equ 0000h
CCDCON_CCDS_SIZE                         equ 0002h
CCDCON_CCDS_LENGTH                       equ 0002h
CCDCON_CCDS_MASK                         equ 0003h
CCDCON_CCDEN_POSN                        equ 0007h
CCDCON_CCDEN_POSITION                    equ 0007h
CCDCON_CCDEN_SIZE                        equ 0001h
CCDCON_CCDEN_LENGTH                      equ 0001h
CCDCON_CCDEN_MASK                        equ 0080h
CCDCON_CCDS0_POSN                        equ 0000h
CCDCON_CCDS0_POSITION                    equ 0000h
CCDCON_CCDS0_SIZE                        equ 0001h
CCDCON_CCDS0_LENGTH                      equ 0001h
CCDCON_CCDS0_MASK                        equ 0001h
CCDCON_CCDS1_POSN                        equ 0001h
CCDCON_CCDS1_POSITION                    equ 0001h
CCDCON_CCDS1_SIZE                        equ 0001h
CCDCON_CCDS1_LENGTH                      equ 0001h
CCDCON_CCDS1_MASK                        equ 0002h

// Register: NCO1ACCL
#define NCO1ACCL NCO1ACCL
NCO1ACCL                                 equ 0498h
// bitfield definitions
NCO1ACCL_NCO1ACC_POSN                    equ 0000h
NCO1ACCL_NCO1ACC_POSITION                equ 0000h
NCO1ACCL_NCO1ACC_SIZE                    equ 0008h
NCO1ACCL_NCO1ACC_LENGTH                  equ 0008h
NCO1ACCL_NCO1ACC_MASK                    equ 00FFh

// Register: NCO1ACCH
#define NCO1ACCH NCO1ACCH
NCO1ACCH                                 equ 0499h
// bitfield definitions
NCO1ACCH_NCO1ACC_POSN                    equ 0000h
NCO1ACCH_NCO1ACC_POSITION                equ 0000h
NCO1ACCH_NCO1ACC_SIZE                    equ 0008h
NCO1ACCH_NCO1ACC_LENGTH                  equ 0008h
NCO1ACCH_NCO1ACC_MASK                    equ 00FFh

// Register: NCO1ACCU
#define NCO1ACCU NCO1ACCU
NCO1ACCU                                 equ 049Ah
// bitfield definitions
NCO1ACCU_NCO1ACC_POSN                    equ 0000h
NCO1ACCU_NCO1ACC_POSITION                equ 0000h
NCO1ACCU_NCO1ACC_SIZE                    equ 0004h
NCO1ACCU_NCO1ACC_LENGTH                  equ 0004h
NCO1ACCU_NCO1ACC_MASK                    equ 000Fh

// Register: NCO1INCL
#define NCO1INCL NCO1INCL
NCO1INCL                                 equ 049Bh
// bitfield definitions
NCO1INCL_NCO1INC_POSN                    equ 0000h
NCO1INCL_NCO1INC_POSITION                equ 0000h
NCO1INCL_NCO1INC_SIZE                    equ 0008h
NCO1INCL_NCO1INC_LENGTH                  equ 0008h
NCO1INCL_NCO1INC_MASK                    equ 00FFh

// Register: NCO1INCH
#define NCO1INCH NCO1INCH
NCO1INCH                                 equ 049Ch
// bitfield definitions
NCO1INCH_NCO1INC_POSN                    equ 0000h
NCO1INCH_NCO1INC_POSITION                equ 0000h
NCO1INCH_NCO1INC_SIZE                    equ 0008h
NCO1INCH_NCO1INC_LENGTH                  equ 0008h
NCO1INCH_NCO1INC_MASK                    equ 00FFh

// Register: NCO1INCU
#define NCO1INCU NCO1INCU
NCO1INCU                                 equ 049Dh
// bitfield definitions
NCO1INCU_NCO1INC_POSN                    equ 0000h
NCO1INCU_NCO1INC_POSITION                equ 0000h
NCO1INCU_NCO1INC_SIZE                    equ 0004h
NCO1INCU_NCO1INC_LENGTH                  equ 0004h
NCO1INCU_NCO1INC_MASK                    equ 000Fh

// Register: NCO1CON
#define NCO1CON NCO1CON
NCO1CON                                  equ 049Eh
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
NCO1CON_N1EN_POSN                        equ 0007h
NCO1CON_N1EN_POSITION                    equ 0007h
NCO1CON_N1EN_SIZE                        equ 0001h
NCO1CON_N1EN_LENGTH                      equ 0001h
NCO1CON_N1EN_MASK                        equ 0080h

// Register: NCO1CLK
#define NCO1CLK NCO1CLK
NCO1CLK                                  equ 049Fh
// bitfield definitions
NCO1CLK_N1CKS_POSN                       equ 0000h
NCO1CLK_N1CKS_POSITION                   equ 0000h
NCO1CLK_N1CKS_SIZE                       equ 0002h
NCO1CLK_N1CKS_LENGTH                     equ 0002h
NCO1CLK_N1CKS_MASK                       equ 0003h
NCO1CLK_N1PWS_POSN                       equ 0005h
NCO1CLK_N1PWS_POSITION                   equ 0005h
NCO1CLK_N1PWS_SIZE                       equ 0003h
NCO1CLK_N1PWS_LENGTH                     equ 0003h
NCO1CLK_N1PWS_MASK                       equ 00E0h

// Register: PWM5DCL
#define PWM5DCL PWM5DCL
PWM5DCL                                  equ 0617h
// bitfield definitions
PWM5DCL_PWM5DCL_POSN                     equ 0006h
PWM5DCL_PWM5DCL_POSITION                 equ 0006h
PWM5DCL_PWM5DCL_SIZE                     equ 0002h
PWM5DCL_PWM5DCL_LENGTH                   equ 0002h
PWM5DCL_PWM5DCL_MASK                     equ 00C0h
PWM5DCL_PWM5DCL0_POSN                    equ 0006h
PWM5DCL_PWM5DCL0_POSITION                equ 0006h
PWM5DCL_PWM5DCL0_SIZE                    equ 0001h
PWM5DCL_PWM5DCL0_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL0_MASK                    equ 0040h
PWM5DCL_PWM5DCL1_POSN                    equ 0007h
PWM5DCL_PWM5DCL1_POSITION                equ 0007h
PWM5DCL_PWM5DCL1_SIZE                    equ 0001h
PWM5DCL_PWM5DCL1_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL1_MASK                    equ 0080h

// Register: PWM5DCH
#define PWM5DCH PWM5DCH
PWM5DCH                                  equ 0618h
// bitfield definitions
PWM5DCH_PWM5DCH_POSN                     equ 0000h
PWM5DCH_PWM5DCH_POSITION                 equ 0000h
PWM5DCH_PWM5DCH_SIZE                     equ 0008h
PWM5DCH_PWM5DCH_LENGTH                   equ 0008h
PWM5DCH_PWM5DCH_MASK                     equ 00FFh
PWM5DCH_PWM5DCH0_POSN                    equ 0000h
PWM5DCH_PWM5DCH0_POSITION                equ 0000h
PWM5DCH_PWM5DCH0_SIZE                    equ 0001h
PWM5DCH_PWM5DCH0_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH0_MASK                    equ 0001h
PWM5DCH_PWM5DCH1_POSN                    equ 0001h
PWM5DCH_PWM5DCH1_POSITION                equ 0001h
PWM5DCH_PWM5DCH1_SIZE                    equ 0001h
PWM5DCH_PWM5DCH1_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH1_MASK                    equ 0002h
PWM5DCH_PWM5DCH2_POSN                    equ 0002h
PWM5DCH_PWM5DCH2_POSITION                equ 0002h
PWM5DCH_PWM5DCH2_SIZE                    equ 0001h
PWM5DCH_PWM5DCH2_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH2_MASK                    equ 0004h
PWM5DCH_PWM5DCH3_POSN                    equ 0003h
PWM5DCH_PWM5DCH3_POSITION                equ 0003h
PWM5DCH_PWM5DCH3_SIZE                    equ 0001h
PWM5DCH_PWM5DCH3_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH3_MASK                    equ 0008h
PWM5DCH_PWM5DCH4_POSN                    equ 0004h
PWM5DCH_PWM5DCH4_POSITION                equ 0004h
PWM5DCH_PWM5DCH4_SIZE                    equ 0001h
PWM5DCH_PWM5DCH4_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH4_MASK                    equ 0010h
PWM5DCH_PWM5DCH5_POSN                    equ 0005h
PWM5DCH_PWM5DCH5_POSITION                equ 0005h
PWM5DCH_PWM5DCH5_SIZE                    equ 0001h
PWM5DCH_PWM5DCH5_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH5_MASK                    equ 0020h
PWM5DCH_PWM5DCH6_POSN                    equ 0006h
PWM5DCH_PWM5DCH6_POSITION                equ 0006h
PWM5DCH_PWM5DCH6_SIZE                    equ 0001h
PWM5DCH_PWM5DCH6_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH6_MASK                    equ 0040h
PWM5DCH_PWM5DCH7_POSN                    equ 0007h
PWM5DCH_PWM5DCH7_POSITION                equ 0007h
PWM5DCH_PWM5DCH7_SIZE                    equ 0001h
PWM5DCH_PWM5DCH7_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH7_MASK                    equ 0080h

// Register: PWM5CON
#define PWM5CON PWM5CON
PWM5CON                                  equ 0619h
// bitfield definitions
PWM5CON_PWM5POL_POSN                     equ 0004h
PWM5CON_PWM5POL_POSITION                 equ 0004h
PWM5CON_PWM5POL_SIZE                     equ 0001h
PWM5CON_PWM5POL_LENGTH                   equ 0001h
PWM5CON_PWM5POL_MASK                     equ 0010h
PWM5CON_PWM5OUT_POSN                     equ 0005h
PWM5CON_PWM5OUT_POSITION                 equ 0005h
PWM5CON_PWM5OUT_SIZE                     equ 0001h
PWM5CON_PWM5OUT_LENGTH                   equ 0001h
PWM5CON_PWM5OUT_MASK                     equ 0020h
PWM5CON_PWM5EN_POSN                      equ 0007h
PWM5CON_PWM5EN_POSITION                  equ 0007h
PWM5CON_PWM5EN_SIZE                      equ 0001h
PWM5CON_PWM5EN_LENGTH                    equ 0001h
PWM5CON_PWM5EN_MASK                      equ 0080h

// Register: PWM6DCL
#define PWM6DCL PWM6DCL
PWM6DCL                                  equ 061Ah
// bitfield definitions
PWM6DCL_PWM6DCL_POSN                     equ 0006h
PWM6DCL_PWM6DCL_POSITION                 equ 0006h
PWM6DCL_PWM6DCL_SIZE                     equ 0002h
PWM6DCL_PWM6DCL_LENGTH                   equ 0002h
PWM6DCL_PWM6DCL_MASK                     equ 00C0h
PWM6DCL_PWM6DCL0_POSN                    equ 0006h
PWM6DCL_PWM6DCL0_POSITION                equ 0006h
PWM6DCL_PWM6DCL0_SIZE                    equ 0001h
PWM6DCL_PWM6DCL0_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL0_MASK                    equ 0040h
PWM6DCL_PWM6DCL1_POSN                    equ 0007h
PWM6DCL_PWM6DCL1_POSITION                equ 0007h
PWM6DCL_PWM6DCL1_SIZE                    equ 0001h
PWM6DCL_PWM6DCL1_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL1_MASK                    equ 0080h

// Register: PWM6DCH
#define PWM6DCH PWM6DCH
PWM6DCH                                  equ 061Bh
// bitfield definitions
PWM6DCH_PWM6DCH_POSN                     equ 0000h
PWM6DCH_PWM6DCH_POSITION                 equ 0000h
PWM6DCH_PWM6DCH_SIZE                     equ 0008h
PWM6DCH_PWM6DCH_LENGTH                   equ 0008h
PWM6DCH_PWM6DCH_MASK                     equ 00FFh
PWM6DCH_PWM6DCH0_POSN                    equ 0000h
PWM6DCH_PWM6DCH0_POSITION                equ 0000h
PWM6DCH_PWM6DCH0_SIZE                    equ 0001h
PWM6DCH_PWM6DCH0_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH0_MASK                    equ 0001h
PWM6DCH_PWM6DCH1_POSN                    equ 0001h
PWM6DCH_PWM6DCH1_POSITION                equ 0001h
PWM6DCH_PWM6DCH1_SIZE                    equ 0001h
PWM6DCH_PWM6DCH1_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH1_MASK                    equ 0002h
PWM6DCH_PWM6DCH2_POSN                    equ 0002h
PWM6DCH_PWM6DCH2_POSITION                equ 0002h
PWM6DCH_PWM6DCH2_SIZE                    equ 0001h
PWM6DCH_PWM6DCH2_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH2_MASK                    equ 0004h
PWM6DCH_PWM6DCH3_POSN                    equ 0003h
PWM6DCH_PWM6DCH3_POSITION                equ 0003h
PWM6DCH_PWM6DCH3_SIZE                    equ 0001h
PWM6DCH_PWM6DCH3_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH3_MASK                    equ 0008h
PWM6DCH_PWM6DCH4_POSN                    equ 0004h
PWM6DCH_PWM6DCH4_POSITION                equ 0004h
PWM6DCH_PWM6DCH4_SIZE                    equ 0001h
PWM6DCH_PWM6DCH4_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH4_MASK                    equ 0010h
PWM6DCH_PWM6DCH5_POSN                    equ 0005h
PWM6DCH_PWM6DCH5_POSITION                equ 0005h
PWM6DCH_PWM6DCH5_SIZE                    equ 0001h
PWM6DCH_PWM6DCH5_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH5_MASK                    equ 0020h
PWM6DCH_PWM6DCH6_POSN                    equ 0006h
PWM6DCH_PWM6DCH6_POSITION                equ 0006h
PWM6DCH_PWM6DCH6_SIZE                    equ 0001h
PWM6DCH_PWM6DCH6_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH6_MASK                    equ 0040h
PWM6DCH_PWM6DCH7_POSN                    equ 0007h
PWM6DCH_PWM6DCH7_POSITION                equ 0007h
PWM6DCH_PWM6DCH7_SIZE                    equ 0001h
PWM6DCH_PWM6DCH7_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH7_MASK                    equ 0080h

// Register: PWM6CON
#define PWM6CON PWM6CON
PWM6CON                                  equ 061Ch
// bitfield definitions
PWM6CON_PWM6POL_POSN                     equ 0004h
PWM6CON_PWM6POL_POSITION                 equ 0004h
PWM6CON_PWM6POL_SIZE                     equ 0001h
PWM6CON_PWM6POL_LENGTH                   equ 0001h
PWM6CON_PWM6POL_MASK                     equ 0010h
PWM6CON_PWM6OUT_POSN                     equ 0005h
PWM6CON_PWM6OUT_POSITION                 equ 0005h
PWM6CON_PWM6OUT_SIZE                     equ 0001h
PWM6CON_PWM6OUT_LENGTH                   equ 0001h
PWM6CON_PWM6OUT_MASK                     equ 0020h
PWM6CON_PWM6EN_POSN                      equ 0007h
PWM6CON_PWM6EN_POSITION                  equ 0007h
PWM6CON_PWM6EN_SIZE                      equ 0001h
PWM6CON_PWM6EN_LENGTH                    equ 0001h
PWM6CON_PWM6EN_MASK                      equ 0080h

// Register: PWMTMRS
#define PWMTMRS PWMTMRS
PWMTMRS                                  equ 061Fh
// bitfield definitions
PWMTMRS_P5TSEL_POSN                      equ 0000h
PWMTMRS_P5TSEL_POSITION                  equ 0000h
PWMTMRS_P5TSEL_SIZE                      equ 0002h
PWMTMRS_P5TSEL_LENGTH                    equ 0002h
PWMTMRS_P5TSEL_MASK                      equ 0003h
PWMTMRS_P6TSEL_POSN                      equ 0002h
PWMTMRS_P6TSEL_POSITION                  equ 0002h
PWMTMRS_P6TSEL_SIZE                      equ 0002h
PWMTMRS_P6TSEL_LENGTH                    equ 0002h
PWMTMRS_P6TSEL_MASK                      equ 000Ch
PWMTMRS_P5TSEL0_POSN                     equ 0000h
PWMTMRS_P5TSEL0_POSITION                 equ 0000h
PWMTMRS_P5TSEL0_SIZE                     equ 0001h
PWMTMRS_P5TSEL0_LENGTH                   equ 0001h
PWMTMRS_P5TSEL0_MASK                     equ 0001h
PWMTMRS_P5TSEL1_POSN                     equ 0001h
PWMTMRS_P5TSEL1_POSITION                 equ 0001h
PWMTMRS_P5TSEL1_SIZE                     equ 0001h
PWMTMRS_P5TSEL1_LENGTH                   equ 0001h
PWMTMRS_P5TSEL1_MASK                     equ 0002h
PWMTMRS_P6TSEL0_POSN                     equ 0002h
PWMTMRS_P6TSEL0_POSITION                 equ 0002h
PWMTMRS_P6TSEL0_SIZE                     equ 0001h
PWMTMRS_P6TSEL0_LENGTH                   equ 0001h
PWMTMRS_P6TSEL0_MASK                     equ 0004h
PWMTMRS_P6TSEL1_POSN                     equ 0003h
PWMTMRS_P6TSEL1_POSITION                 equ 0003h
PWMTMRS_P6TSEL1_SIZE                     equ 0001h
PWMTMRS_P6TSEL1_LENGTH                   equ 0001h
PWMTMRS_P6TSEL1_MASK                     equ 0008h

// Register: CWG1CLKCON
#define CWG1CLKCON CWG1CLKCON
CWG1CLKCON                               equ 0691h
// bitfield definitions
CWG1CLKCON_CS_POSN                       equ 0000h
CWG1CLKCON_CS_POSITION                   equ 0000h
CWG1CLKCON_CS_SIZE                       equ 0001h
CWG1CLKCON_CS_LENGTH                     equ 0001h
CWG1CLKCON_CS_MASK                       equ 0001h
CWG1CLKCON_CWG1CS_POSN                   equ 0000h
CWG1CLKCON_CWG1CS_POSITION               equ 0000h
CWG1CLKCON_CWG1CS_SIZE                   equ 0001h
CWG1CLKCON_CWG1CS_LENGTH                 equ 0001h
CWG1CLKCON_CWG1CS_MASK                   equ 0001h

// Register: CWG1DAT
#define CWG1DAT CWG1DAT
CWG1DAT                                  equ 0692h
// bitfield definitions
CWG1DAT_DAT_POSN                         equ 0000h
CWG1DAT_DAT_POSITION                     equ 0000h
CWG1DAT_DAT_SIZE                         equ 0004h
CWG1DAT_DAT_LENGTH                       equ 0004h
CWG1DAT_DAT_MASK                         equ 000Fh
CWG1DAT_CWG1DAT0_POSN                    equ 0000h
CWG1DAT_CWG1DAT0_POSITION                equ 0000h
CWG1DAT_CWG1DAT0_SIZE                    equ 0001h
CWG1DAT_CWG1DAT0_LENGTH                  equ 0001h
CWG1DAT_CWG1DAT0_MASK                    equ 0001h
CWG1DAT_CWG1DAT1_POSN                    equ 0001h
CWG1DAT_CWG1DAT1_POSITION                equ 0001h
CWG1DAT_CWG1DAT1_SIZE                    equ 0001h
CWG1DAT_CWG1DAT1_LENGTH                  equ 0001h
CWG1DAT_CWG1DAT1_MASK                    equ 0002h
CWG1DAT_CWG1DAT2_POSN                    equ 0002h
CWG1DAT_CWG1DAT2_POSITION                equ 0002h
CWG1DAT_CWG1DAT2_SIZE                    equ 0001h
CWG1DAT_CWG1DAT2_LENGTH                  equ 0001h
CWG1DAT_CWG1DAT2_MASK                    equ 0004h
CWG1DAT_CWG1DAT3_POSN                    equ 0003h
CWG1DAT_CWG1DAT3_POSITION                equ 0003h
CWG1DAT_CWG1DAT3_SIZE                    equ 0001h
CWG1DAT_CWG1DAT3_LENGTH                  equ 0001h
CWG1DAT_CWG1DAT3_MASK                    equ 0008h

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
CWG1DBR                                  equ 0693h
// bitfield definitions
CWG1DBR_DBR_POSN                         equ 0000h
CWG1DBR_DBR_POSITION                     equ 0000h
CWG1DBR_DBR_SIZE                         equ 0006h
CWG1DBR_DBR_LENGTH                       equ 0006h
CWG1DBR_DBR_MASK                         equ 003Fh
CWG1DBR_DBR0_POSN                        equ 0000h
CWG1DBR_DBR0_POSITION                    equ 0000h
CWG1DBR_DBR0_SIZE                        equ 0001h
CWG1DBR_DBR0_LENGTH                      equ 0001h
CWG1DBR_DBR0_MASK                        equ 0001h
CWG1DBR_DBR1_POSN                        equ 0001h
CWG1DBR_DBR1_POSITION                    equ 0001h
CWG1DBR_DBR1_SIZE                        equ 0001h
CWG1DBR_DBR1_LENGTH                      equ 0001h
CWG1DBR_DBR1_MASK                        equ 0002h
CWG1DBR_DBR2_POSN                        equ 0002h
CWG1DBR_DBR2_POSITION                    equ 0002h
CWG1DBR_DBR2_SIZE                        equ 0001h
CWG1DBR_DBR2_LENGTH                      equ 0001h
CWG1DBR_DBR2_MASK                        equ 0004h
CWG1DBR_DBR3_POSN                        equ 0003h
CWG1DBR_DBR3_POSITION                    equ 0003h
CWG1DBR_DBR3_SIZE                        equ 0001h
CWG1DBR_DBR3_LENGTH                      equ 0001h
CWG1DBR_DBR3_MASK                        equ 0008h
CWG1DBR_DBR4_POSN                        equ 0004h
CWG1DBR_DBR4_POSITION                    equ 0004h
CWG1DBR_DBR4_SIZE                        equ 0001h
CWG1DBR_DBR4_LENGTH                      equ 0001h
CWG1DBR_DBR4_MASK                        equ 0010h
CWG1DBR_DBR5_POSN                        equ 0005h
CWG1DBR_DBR5_POSITION                    equ 0005h
CWG1DBR_DBR5_SIZE                        equ 0001h
CWG1DBR_DBR5_LENGTH                      equ 0001h
CWG1DBR_DBR5_MASK                        equ 0020h
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
CWG1DBF                                  equ 0694h
// bitfield definitions
CWG1DBF_DBF_POSN                         equ 0000h
CWG1DBF_DBF_POSITION                     equ 0000h
CWG1DBF_DBF_SIZE                         equ 0006h
CWG1DBF_DBF_LENGTH                       equ 0006h
CWG1DBF_DBF_MASK                         equ 003Fh
CWG1DBF_DBF0_POSN                        equ 0000h
CWG1DBF_DBF0_POSITION                    equ 0000h
CWG1DBF_DBF0_SIZE                        equ 0001h
CWG1DBF_DBF0_LENGTH                      equ 0001h
CWG1DBF_DBF0_MASK                        equ 0001h
CWG1DBF_DBF1_POSN                        equ 0001h
CWG1DBF_DBF1_POSITION                    equ 0001h
CWG1DBF_DBF1_SIZE                        equ 0001h
CWG1DBF_DBF1_LENGTH                      equ 0001h
CWG1DBF_DBF1_MASK                        equ 0002h
CWG1DBF_DBF2_POSN                        equ 0002h
CWG1DBF_DBF2_POSITION                    equ 0002h
CWG1DBF_DBF2_SIZE                        equ 0001h
CWG1DBF_DBF2_LENGTH                      equ 0001h
CWG1DBF_DBF2_MASK                        equ 0004h
CWG1DBF_DBF3_POSN                        equ 0003h
CWG1DBF_DBF3_POSITION                    equ 0003h
CWG1DBF_DBF3_SIZE                        equ 0001h
CWG1DBF_DBF3_LENGTH                      equ 0001h
CWG1DBF_DBF3_MASK                        equ 0008h
CWG1DBF_DBF4_POSN                        equ 0004h
CWG1DBF_DBF4_POSITION                    equ 0004h
CWG1DBF_DBF4_SIZE                        equ 0001h
CWG1DBF_DBF4_LENGTH                      equ 0001h
CWG1DBF_DBF4_MASK                        equ 0010h
CWG1DBF_DBF5_POSN                        equ 0005h
CWG1DBF_DBF5_POSITION                    equ 0005h
CWG1DBF_DBF5_SIZE                        equ 0001h
CWG1DBF_DBF5_LENGTH                      equ 0001h
CWG1DBF_DBF5_MASK                        equ 0020h
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

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
CWG1CON0                                 equ 0695h
// bitfield definitions
CWG1CON0_MODE_POSN                       equ 0000h
CWG1CON0_MODE_POSITION                   equ 0000h
CWG1CON0_MODE_SIZE                       equ 0003h
CWG1CON0_MODE_LENGTH                     equ 0003h
CWG1CON0_MODE_MASK                       equ 0007h
CWG1CON0_LD_POSN                         equ 0006h
CWG1CON0_LD_POSITION                     equ 0006h
CWG1CON0_LD_SIZE                         equ 0001h
CWG1CON0_LD_LENGTH                       equ 0001h
CWG1CON0_LD_MASK                         equ 0040h
CWG1CON0_EN_POSN                         equ 0007h
CWG1CON0_EN_POSITION                     equ 0007h
CWG1CON0_EN_SIZE                         equ 0001h
CWG1CON0_EN_LENGTH                       equ 0001h
CWG1CON0_EN_MASK                         equ 0080h
CWG1CON0_MODE0_POSN                      equ 0000h
CWG1CON0_MODE0_POSITION                  equ 0000h
CWG1CON0_MODE0_SIZE                      equ 0001h
CWG1CON0_MODE0_LENGTH                    equ 0001h
CWG1CON0_MODE0_MASK                      equ 0001h
CWG1CON0_MODE1_POSN                      equ 0001h
CWG1CON0_MODE1_POSITION                  equ 0001h
CWG1CON0_MODE1_SIZE                      equ 0001h
CWG1CON0_MODE1_LENGTH                    equ 0001h
CWG1CON0_MODE1_MASK                      equ 0002h
CWG1CON0_MODE2_POSN                      equ 0002h
CWG1CON0_MODE2_POSITION                  equ 0002h
CWG1CON0_MODE2_SIZE                      equ 0001h
CWG1CON0_MODE2_LENGTH                    equ 0001h
CWG1CON0_MODE2_MASK                      equ 0004h
CWG1CON0_G1EN_POSN                       equ 0007h
CWG1CON0_G1EN_POSITION                   equ 0007h
CWG1CON0_G1EN_SIZE                       equ 0001h
CWG1CON0_G1EN_LENGTH                     equ 0001h
CWG1CON0_G1EN_MASK                       equ 0080h
CWG1CON0_CWG1MODE_POSN                   equ 0000h
CWG1CON0_CWG1MODE_POSITION               equ 0000h
CWG1CON0_CWG1MODE_SIZE                   equ 0003h
CWG1CON0_CWG1MODE_LENGTH                 equ 0003h
CWG1CON0_CWG1MODE_MASK                   equ 0007h
CWG1CON0_CWG1LD_POSN                     equ 0006h
CWG1CON0_CWG1LD_POSITION                 equ 0006h
CWG1CON0_CWG1LD_SIZE                     equ 0001h
CWG1CON0_CWG1LD_LENGTH                   equ 0001h
CWG1CON0_CWG1LD_MASK                     equ 0040h
CWG1CON0_CWG1EN_POSN                     equ 0007h
CWG1CON0_CWG1EN_POSITION                 equ 0007h
CWG1CON0_CWG1EN_SIZE                     equ 0001h
CWG1CON0_CWG1EN_LENGTH                   equ 0001h
CWG1CON0_CWG1EN_MASK                     equ 0080h
CWG1CON0_CWG1MODE0_POSN                  equ 0000h
CWG1CON0_CWG1MODE0_POSITION              equ 0000h
CWG1CON0_CWG1MODE0_SIZE                  equ 0001h
CWG1CON0_CWG1MODE0_LENGTH                equ 0001h
CWG1CON0_CWG1MODE0_MASK                  equ 0001h
CWG1CON0_CWG1MODE1_POSN                  equ 0001h
CWG1CON0_CWG1MODE1_POSITION              equ 0001h
CWG1CON0_CWG1MODE1_SIZE                  equ 0001h
CWG1CON0_CWG1MODE1_LENGTH                equ 0001h
CWG1CON0_CWG1MODE1_MASK                  equ 0002h
CWG1CON0_CWG1MODE2_POSN                  equ 0002h
CWG1CON0_CWG1MODE2_POSITION              equ 0002h
CWG1CON0_CWG1MODE2_SIZE                  equ 0001h
CWG1CON0_CWG1MODE2_LENGTH                equ 0001h
CWG1CON0_CWG1MODE2_MASK                  equ 0004h

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
CWG1CON1                                 equ 0696h
// bitfield definitions
CWG1CON1_POLA_POSN                       equ 0000h
CWG1CON1_POLA_POSITION                   equ 0000h
CWG1CON1_POLA_SIZE                       equ 0001h
CWG1CON1_POLA_LENGTH                     equ 0001h
CWG1CON1_POLA_MASK                       equ 0001h
CWG1CON1_POLB_POSN                       equ 0001h
CWG1CON1_POLB_POSITION                   equ 0001h
CWG1CON1_POLB_SIZE                       equ 0001h
CWG1CON1_POLB_LENGTH                     equ 0001h
CWG1CON1_POLB_MASK                       equ 0002h
CWG1CON1_POLC_POSN                       equ 0002h
CWG1CON1_POLC_POSITION                   equ 0002h
CWG1CON1_POLC_SIZE                       equ 0001h
CWG1CON1_POLC_LENGTH                     equ 0001h
CWG1CON1_POLC_MASK                       equ 0004h
CWG1CON1_POLD_POSN                       equ 0003h
CWG1CON1_POLD_POSITION                   equ 0003h
CWG1CON1_POLD_SIZE                       equ 0001h
CWG1CON1_POLD_LENGTH                     equ 0001h
CWG1CON1_POLD_MASK                       equ 0008h
CWG1CON1_IN_POSN                         equ 0005h
CWG1CON1_IN_POSITION                     equ 0005h
CWG1CON1_IN_SIZE                         equ 0001h
CWG1CON1_IN_LENGTH                       equ 0001h
CWG1CON1_IN_MASK                         equ 0020h
CWG1CON1_CWG1POLA_POSN                   equ 0000h
CWG1CON1_CWG1POLA_POSITION               equ 0000h
CWG1CON1_CWG1POLA_SIZE                   equ 0001h
CWG1CON1_CWG1POLA_LENGTH                 equ 0001h
CWG1CON1_CWG1POLA_MASK                   equ 0001h
CWG1CON1_CWG1POLB_POSN                   equ 0001h
CWG1CON1_CWG1POLB_POSITION               equ 0001h
CWG1CON1_CWG1POLB_SIZE                   equ 0001h
CWG1CON1_CWG1POLB_LENGTH                 equ 0001h
CWG1CON1_CWG1POLB_MASK                   equ 0002h
CWG1CON1_CWG1POLC_POSN                   equ 0002h
CWG1CON1_CWG1POLC_POSITION               equ 0002h
CWG1CON1_CWG1POLC_SIZE                   equ 0001h
CWG1CON1_CWG1POLC_LENGTH                 equ 0001h
CWG1CON1_CWG1POLC_MASK                   equ 0004h
CWG1CON1_CWG1POLD_POSN                   equ 0003h
CWG1CON1_CWG1POLD_POSITION               equ 0003h
CWG1CON1_CWG1POLD_SIZE                   equ 0001h
CWG1CON1_CWG1POLD_LENGTH                 equ 0001h
CWG1CON1_CWG1POLD_MASK                   equ 0008h
CWG1CON1_CWG1IN_POSN                     equ 0005h
CWG1CON1_CWG1IN_POSITION                 equ 0005h
CWG1CON1_CWG1IN_SIZE                     equ 0001h
CWG1CON1_CWG1IN_LENGTH                   equ 0001h
CWG1CON1_CWG1IN_MASK                     equ 0020h

// Register: CWG1AS0
#define CWG1AS0 CWG1AS0
CWG1AS0                                  equ 0697h
// bitfield definitions
CWG1AS0_LSAC_POSN                        equ 0002h
CWG1AS0_LSAC_POSITION                    equ 0002h
CWG1AS0_LSAC_SIZE                        equ 0002h
CWG1AS0_LSAC_LENGTH                      equ 0002h
CWG1AS0_LSAC_MASK                        equ 000Ch
CWG1AS0_LSBD_POSN                        equ 0004h
CWG1AS0_LSBD_POSITION                    equ 0004h
CWG1AS0_LSBD_SIZE                        equ 0002h
CWG1AS0_LSBD_LENGTH                      equ 0002h
CWG1AS0_LSBD_MASK                        equ 0030h
CWG1AS0_REN_POSN                         equ 0006h
CWG1AS0_REN_POSITION                     equ 0006h
CWG1AS0_REN_SIZE                         equ 0001h
CWG1AS0_REN_LENGTH                       equ 0001h
CWG1AS0_REN_MASK                         equ 0040h
CWG1AS0_SHUTDOWN_POSN                    equ 0007h
CWG1AS0_SHUTDOWN_POSITION                equ 0007h
CWG1AS0_SHUTDOWN_SIZE                    equ 0001h
CWG1AS0_SHUTDOWN_LENGTH                  equ 0001h
CWG1AS0_SHUTDOWN_MASK                    equ 0080h
CWG1AS0_LSAC0_POSN                       equ 0002h
CWG1AS0_LSAC0_POSITION                   equ 0002h
CWG1AS0_LSAC0_SIZE                       equ 0001h
CWG1AS0_LSAC0_LENGTH                     equ 0001h
CWG1AS0_LSAC0_MASK                       equ 0004h
CWG1AS0_LSAC1_POSN                       equ 0003h
CWG1AS0_LSAC1_POSITION                   equ 0003h
CWG1AS0_LSAC1_SIZE                       equ 0001h
CWG1AS0_LSAC1_LENGTH                     equ 0001h
CWG1AS0_LSAC1_MASK                       equ 0008h
CWG1AS0_LSBD0_POSN                       equ 0004h
CWG1AS0_LSBD0_POSITION                   equ 0004h
CWG1AS0_LSBD0_SIZE                       equ 0001h
CWG1AS0_LSBD0_LENGTH                     equ 0001h
CWG1AS0_LSBD0_MASK                       equ 0010h
CWG1AS0_LSBD1_POSN                       equ 0005h
CWG1AS0_LSBD1_POSITION                   equ 0005h
CWG1AS0_LSBD1_SIZE                       equ 0001h
CWG1AS0_LSBD1_LENGTH                     equ 0001h
CWG1AS0_LSBD1_MASK                       equ 0020h
CWG1AS0_CWG1LSAC_POSN                    equ 0002h
CWG1AS0_CWG1LSAC_POSITION                equ 0002h
CWG1AS0_CWG1LSAC_SIZE                    equ 0002h
CWG1AS0_CWG1LSAC_LENGTH                  equ 0002h
CWG1AS0_CWG1LSAC_MASK                    equ 000Ch
CWG1AS0_CWG1LSBD_POSN                    equ 0004h
CWG1AS0_CWG1LSBD_POSITION                equ 0004h
CWG1AS0_CWG1LSBD_SIZE                    equ 0002h
CWG1AS0_CWG1LSBD_LENGTH                  equ 0002h
CWG1AS0_CWG1LSBD_MASK                    equ 0030h
CWG1AS0_CWG1REN_POSN                     equ 0006h
CWG1AS0_CWG1REN_POSITION                 equ 0006h
CWG1AS0_CWG1REN_SIZE                     equ 0001h
CWG1AS0_CWG1REN_LENGTH                   equ 0001h
CWG1AS0_CWG1REN_MASK                     equ 0040h
CWG1AS0_CWG1SHUTDOWN_POSN                equ 0007h
CWG1AS0_CWG1SHUTDOWN_POSITION            equ 0007h
CWG1AS0_CWG1SHUTDOWN_SIZE                equ 0001h
CWG1AS0_CWG1SHUTDOWN_LENGTH              equ 0001h
CWG1AS0_CWG1SHUTDOWN_MASK                equ 0080h
CWG1AS0_CWG1LSAC0_POSN                   equ 0002h
CWG1AS0_CWG1LSAC0_POSITION               equ 0002h
CWG1AS0_CWG1LSAC0_SIZE                   equ 0001h
CWG1AS0_CWG1LSAC0_LENGTH                 equ 0001h
CWG1AS0_CWG1LSAC0_MASK                   equ 0004h
CWG1AS0_CWG1LSAC1_POSN                   equ 0003h
CWG1AS0_CWG1LSAC1_POSITION               equ 0003h
CWG1AS0_CWG1LSAC1_SIZE                   equ 0001h
CWG1AS0_CWG1LSAC1_LENGTH                 equ 0001h
CWG1AS0_CWG1LSAC1_MASK                   equ 0008h
CWG1AS0_CWG1LSBD0_POSN                   equ 0004h
CWG1AS0_CWG1LSBD0_POSITION               equ 0004h
CWG1AS0_CWG1LSBD0_SIZE                   equ 0001h
CWG1AS0_CWG1LSBD0_LENGTH                 equ 0001h
CWG1AS0_CWG1LSBD0_MASK                   equ 0010h
CWG1AS0_CWG1LSBD1_POSN                   equ 0005h
CWG1AS0_CWG1LSBD1_POSITION               equ 0005h
CWG1AS0_CWG1LSBD1_SIZE                   equ 0001h
CWG1AS0_CWG1LSBD1_LENGTH                 equ 0001h
CWG1AS0_CWG1LSBD1_MASK                   equ 0020h

// Register: CWG1AS1
#define CWG1AS1 CWG1AS1
CWG1AS1                                  equ 0698h
// bitfield definitions
CWG1AS1_AS0E_POSN                        equ 0000h
CWG1AS1_AS0E_POSITION                    equ 0000h
CWG1AS1_AS0E_SIZE                        equ 0001h
CWG1AS1_AS0E_LENGTH                      equ 0001h
CWG1AS1_AS0E_MASK                        equ 0001h
CWG1AS1_AS1E_POSN                        equ 0001h
CWG1AS1_AS1E_POSITION                    equ 0001h
CWG1AS1_AS1E_SIZE                        equ 0001h
CWG1AS1_AS1E_LENGTH                      equ 0001h
CWG1AS1_AS1E_MASK                        equ 0002h
CWG1AS1_AS2E_POSN                        equ 0002h
CWG1AS1_AS2E_POSITION                    equ 0002h
CWG1AS1_AS2E_SIZE                        equ 0001h
CWG1AS1_AS2E_LENGTH                      equ 0001h
CWG1AS1_AS2E_MASK                        equ 0004h
CWG1AS1_AS3E_POSN                        equ 0003h
CWG1AS1_AS3E_POSITION                    equ 0003h
CWG1AS1_AS3E_SIZE                        equ 0001h
CWG1AS1_AS3E_LENGTH                      equ 0001h
CWG1AS1_AS3E_MASK                        equ 0008h
CWG1AS1_AS4E_POSN                        equ 0004h
CWG1AS1_AS4E_POSITION                    equ 0004h
CWG1AS1_AS4E_SIZE                        equ 0001h
CWG1AS1_AS4E_LENGTH                      equ 0001h
CWG1AS1_AS4E_MASK                        equ 0010h

// Register: CWG1STR
#define CWG1STR CWG1STR
CWG1STR                                  equ 0699h
// bitfield definitions
CWG1STR_STRA_POSN                        equ 0000h
CWG1STR_STRA_POSITION                    equ 0000h
CWG1STR_STRA_SIZE                        equ 0001h
CWG1STR_STRA_LENGTH                      equ 0001h
CWG1STR_STRA_MASK                        equ 0001h
CWG1STR_STRB_POSN                        equ 0001h
CWG1STR_STRB_POSITION                    equ 0001h
CWG1STR_STRB_SIZE                        equ 0001h
CWG1STR_STRB_LENGTH                      equ 0001h
CWG1STR_STRB_MASK                        equ 0002h
CWG1STR_STRC_POSN                        equ 0002h
CWG1STR_STRC_POSITION                    equ 0002h
CWG1STR_STRC_SIZE                        equ 0001h
CWG1STR_STRC_LENGTH                      equ 0001h
CWG1STR_STRC_MASK                        equ 0004h
CWG1STR_STRD_POSN                        equ 0003h
CWG1STR_STRD_POSITION                    equ 0003h
CWG1STR_STRD_SIZE                        equ 0001h
CWG1STR_STRD_LENGTH                      equ 0001h
CWG1STR_STRD_MASK                        equ 0008h
CWG1STR_OVRA_POSN                        equ 0004h
CWG1STR_OVRA_POSITION                    equ 0004h
CWG1STR_OVRA_SIZE                        equ 0001h
CWG1STR_OVRA_LENGTH                      equ 0001h
CWG1STR_OVRA_MASK                        equ 0010h
CWG1STR_OVRB_POSN                        equ 0005h
CWG1STR_OVRB_POSITION                    equ 0005h
CWG1STR_OVRB_SIZE                        equ 0001h
CWG1STR_OVRB_LENGTH                      equ 0001h
CWG1STR_OVRB_MASK                        equ 0020h
CWG1STR_OVRC_POSN                        equ 0006h
CWG1STR_OVRC_POSITION                    equ 0006h
CWG1STR_OVRC_SIZE                        equ 0001h
CWG1STR_OVRC_LENGTH                      equ 0001h
CWG1STR_OVRC_MASK                        equ 0040h
CWG1STR_OVRD_POSN                        equ 0007h
CWG1STR_OVRD_POSITION                    equ 0007h
CWG1STR_OVRD_SIZE                        equ 0001h
CWG1STR_OVRD_LENGTH                      equ 0001h
CWG1STR_OVRD_MASK                        equ 0080h
CWG1STR_CWG1STRA_POSN                    equ 0000h
CWG1STR_CWG1STRA_POSITION                equ 0000h
CWG1STR_CWG1STRA_SIZE                    equ 0001h
CWG1STR_CWG1STRA_LENGTH                  equ 0001h
CWG1STR_CWG1STRA_MASK                    equ 0001h
CWG1STR_CWG1STRB_POSN                    equ 0001h
CWG1STR_CWG1STRB_POSITION                equ 0001h
CWG1STR_CWG1STRB_SIZE                    equ 0001h
CWG1STR_CWG1STRB_LENGTH                  equ 0001h
CWG1STR_CWG1STRB_MASK                    equ 0002h
CWG1STR_CWG1STRC_POSN                    equ 0002h
CWG1STR_CWG1STRC_POSITION                equ 0002h
CWG1STR_CWG1STRC_SIZE                    equ 0001h
CWG1STR_CWG1STRC_LENGTH                  equ 0001h
CWG1STR_CWG1STRC_MASK                    equ 0004h
CWG1STR_CWG1STRD_POSN                    equ 0003h
CWG1STR_CWG1STRD_POSITION                equ 0003h
CWG1STR_CWG1STRD_SIZE                    equ 0001h
CWG1STR_CWG1STRD_LENGTH                  equ 0001h
CWG1STR_CWG1STRD_MASK                    equ 0008h
CWG1STR_CWG1OVRA_POSN                    equ 0004h
CWG1STR_CWG1OVRA_POSITION                equ 0004h
CWG1STR_CWG1OVRA_SIZE                    equ 0001h
CWG1STR_CWG1OVRA_LENGTH                  equ 0001h
CWG1STR_CWG1OVRA_MASK                    equ 0010h
CWG1STR_CWG1OVRB_POSN                    equ 0005h
CWG1STR_CWG1OVRB_POSITION                equ 0005h
CWG1STR_CWG1OVRB_SIZE                    equ 0001h
CWG1STR_CWG1OVRB_LENGTH                  equ 0001h
CWG1STR_CWG1OVRB_MASK                    equ 0020h
CWG1STR_CWG1OVRC_POSN                    equ 0006h
CWG1STR_CWG1OVRC_POSITION                equ 0006h
CWG1STR_CWG1OVRC_SIZE                    equ 0001h
CWG1STR_CWG1OVRC_LENGTH                  equ 0001h
CWG1STR_CWG1OVRC_MASK                    equ 0040h
CWG1STR_CWG1OVRD_POSN                    equ 0007h
CWG1STR_CWG1OVRD_POSITION                equ 0007h
CWG1STR_CWG1OVRD_SIZE                    equ 0001h
CWG1STR_CWG1OVRD_LENGTH                  equ 0001h
CWG1STR_CWG1OVRD_MASK                    equ 0080h

// Register: CWG2CLKCON
#define CWG2CLKCON CWG2CLKCON
CWG2CLKCON                               equ 0711h
// bitfield definitions
CWG2CLKCON_CS_POSN                       equ 0000h
CWG2CLKCON_CS_POSITION                   equ 0000h
CWG2CLKCON_CS_SIZE                       equ 0001h
CWG2CLKCON_CS_LENGTH                     equ 0001h
CWG2CLKCON_CS_MASK                       equ 0001h
CWG2CLKCON_CWG2CS_POSN                   equ 0000h
CWG2CLKCON_CWG2CS_POSITION               equ 0000h
CWG2CLKCON_CWG2CS_SIZE                   equ 0001h
CWG2CLKCON_CWG2CS_LENGTH                 equ 0001h
CWG2CLKCON_CWG2CS_MASK                   equ 0001h

// Register: CWG2DAT
#define CWG2DAT CWG2DAT
CWG2DAT                                  equ 0712h
// bitfield definitions
CWG2DAT_DAT_POSN                         equ 0000h
CWG2DAT_DAT_POSITION                     equ 0000h
CWG2DAT_DAT_SIZE                         equ 0004h
CWG2DAT_DAT_LENGTH                       equ 0004h
CWG2DAT_DAT_MASK                         equ 000Fh
CWG2DAT_CWG2DAT0_POSN                    equ 0000h
CWG2DAT_CWG2DAT0_POSITION                equ 0000h
CWG2DAT_CWG2DAT0_SIZE                    equ 0001h
CWG2DAT_CWG2DAT0_LENGTH                  equ 0001h
CWG2DAT_CWG2DAT0_MASK                    equ 0001h
CWG2DAT_CWG2DAT1_POSN                    equ 0001h
CWG2DAT_CWG2DAT1_POSITION                equ 0001h
CWG2DAT_CWG2DAT1_SIZE                    equ 0001h
CWG2DAT_CWG2DAT1_LENGTH                  equ 0001h
CWG2DAT_CWG2DAT1_MASK                    equ 0002h
CWG2DAT_CWG2DAT2_POSN                    equ 0002h
CWG2DAT_CWG2DAT2_POSITION                equ 0002h
CWG2DAT_CWG2DAT2_SIZE                    equ 0001h
CWG2DAT_CWG2DAT2_LENGTH                  equ 0001h
CWG2DAT_CWG2DAT2_MASK                    equ 0004h
CWG2DAT_CWG2DAT3_POSN                    equ 0003h
CWG2DAT_CWG2DAT3_POSITION                equ 0003h
CWG2DAT_CWG2DAT3_SIZE                    equ 0001h
CWG2DAT_CWG2DAT3_LENGTH                  equ 0001h
CWG2DAT_CWG2DAT3_MASK                    equ 0008h

// Register: CWG2DBR
#define CWG2DBR CWG2DBR
CWG2DBR                                  equ 0713h
// bitfield definitions
CWG2DBR_DBR_POSN                         equ 0000h
CWG2DBR_DBR_POSITION                     equ 0000h
CWG2DBR_DBR_SIZE                         equ 0006h
CWG2DBR_DBR_LENGTH                       equ 0006h
CWG2DBR_DBR_MASK                         equ 003Fh
CWG2DBR_DBR0_POSN                        equ 0000h
CWG2DBR_DBR0_POSITION                    equ 0000h
CWG2DBR_DBR0_SIZE                        equ 0001h
CWG2DBR_DBR0_LENGTH                      equ 0001h
CWG2DBR_DBR0_MASK                        equ 0001h
CWG2DBR_DBR1_POSN                        equ 0001h
CWG2DBR_DBR1_POSITION                    equ 0001h
CWG2DBR_DBR1_SIZE                        equ 0001h
CWG2DBR_DBR1_LENGTH                      equ 0001h
CWG2DBR_DBR1_MASK                        equ 0002h
CWG2DBR_DBR2_POSN                        equ 0002h
CWG2DBR_DBR2_POSITION                    equ 0002h
CWG2DBR_DBR2_SIZE                        equ 0001h
CWG2DBR_DBR2_LENGTH                      equ 0001h
CWG2DBR_DBR2_MASK                        equ 0004h
CWG2DBR_DBR3_POSN                        equ 0003h
CWG2DBR_DBR3_POSITION                    equ 0003h
CWG2DBR_DBR3_SIZE                        equ 0001h
CWG2DBR_DBR3_LENGTH                      equ 0001h
CWG2DBR_DBR3_MASK                        equ 0008h
CWG2DBR_DBR4_POSN                        equ 0004h
CWG2DBR_DBR4_POSITION                    equ 0004h
CWG2DBR_DBR4_SIZE                        equ 0001h
CWG2DBR_DBR4_LENGTH                      equ 0001h
CWG2DBR_DBR4_MASK                        equ 0010h
CWG2DBR_DBR5_POSN                        equ 0005h
CWG2DBR_DBR5_POSITION                    equ 0005h
CWG2DBR_DBR5_SIZE                        equ 0001h
CWG2DBR_DBR5_LENGTH                      equ 0001h
CWG2DBR_DBR5_MASK                        equ 0020h
CWG2DBR_CWG2DBR_POSN                     equ 0000h
CWG2DBR_CWG2DBR_POSITION                 equ 0000h
CWG2DBR_CWG2DBR_SIZE                     equ 0006h
CWG2DBR_CWG2DBR_LENGTH                   equ 0006h
CWG2DBR_CWG2DBR_MASK                     equ 003Fh
CWG2DBR_CWG2DBR0_POSN                    equ 0000h
CWG2DBR_CWG2DBR0_POSITION                equ 0000h
CWG2DBR_CWG2DBR0_SIZE                    equ 0001h
CWG2DBR_CWG2DBR0_LENGTH                  equ 0001h
CWG2DBR_CWG2DBR0_MASK                    equ 0001h
CWG2DBR_CWG2DBR1_POSN                    equ 0001h
CWG2DBR_CWG2DBR1_POSITION                equ 0001h
CWG2DBR_CWG2DBR1_SIZE                    equ 0001h
CWG2DBR_CWG2DBR1_LENGTH                  equ 0001h
CWG2DBR_CWG2DBR1_MASK                    equ 0002h
CWG2DBR_CWG2DBR2_POSN                    equ 0002h
CWG2DBR_CWG2DBR2_POSITION                equ 0002h
CWG2DBR_CWG2DBR2_SIZE                    equ 0001h
CWG2DBR_CWG2DBR2_LENGTH                  equ 0001h
CWG2DBR_CWG2DBR2_MASK                    equ 0004h
CWG2DBR_CWG2DBR3_POSN                    equ 0003h
CWG2DBR_CWG2DBR3_POSITION                equ 0003h
CWG2DBR_CWG2DBR3_SIZE                    equ 0001h
CWG2DBR_CWG2DBR3_LENGTH                  equ 0001h
CWG2DBR_CWG2DBR3_MASK                    equ 0008h
CWG2DBR_CWG2DBR4_POSN                    equ 0004h
CWG2DBR_CWG2DBR4_POSITION                equ 0004h
CWG2DBR_CWG2DBR4_SIZE                    equ 0001h
CWG2DBR_CWG2DBR4_LENGTH                  equ 0001h
CWG2DBR_CWG2DBR4_MASK                    equ 0010h
CWG2DBR_CWG2DBR5_POSN                    equ 0005h
CWG2DBR_CWG2DBR5_POSITION                equ 0005h
CWG2DBR_CWG2DBR5_SIZE                    equ 0001h
CWG2DBR_CWG2DBR5_LENGTH                  equ 0001h
CWG2DBR_CWG2DBR5_MASK                    equ 0020h

// Register: CWG2DBF
#define CWG2DBF CWG2DBF
CWG2DBF                                  equ 0714h
// bitfield definitions
CWG2DBF_DBF_POSN                         equ 0000h
CWG2DBF_DBF_POSITION                     equ 0000h
CWG2DBF_DBF_SIZE                         equ 0006h
CWG2DBF_DBF_LENGTH                       equ 0006h
CWG2DBF_DBF_MASK                         equ 003Fh
CWG2DBF_DBF0_POSN                        equ 0000h
CWG2DBF_DBF0_POSITION                    equ 0000h
CWG2DBF_DBF0_SIZE                        equ 0001h
CWG2DBF_DBF0_LENGTH                      equ 0001h
CWG2DBF_DBF0_MASK                        equ 0001h
CWG2DBF_DBF1_POSN                        equ 0001h
CWG2DBF_DBF1_POSITION                    equ 0001h
CWG2DBF_DBF1_SIZE                        equ 0001h
CWG2DBF_DBF1_LENGTH                      equ 0001h
CWG2DBF_DBF1_MASK                        equ 0002h
CWG2DBF_DBF2_POSN                        equ 0002h
CWG2DBF_DBF2_POSITION                    equ 0002h
CWG2DBF_DBF2_SIZE                        equ 0001h
CWG2DBF_DBF2_LENGTH                      equ 0001h
CWG2DBF_DBF2_MASK                        equ 0004h
CWG2DBF_DBF3_POSN                        equ 0003h
CWG2DBF_DBF3_POSITION                    equ 0003h
CWG2DBF_DBF3_SIZE                        equ 0001h
CWG2DBF_DBF3_LENGTH                      equ 0001h
CWG2DBF_DBF3_MASK                        equ 0008h
CWG2DBF_DBF4_POSN                        equ 0004h
CWG2DBF_DBF4_POSITION                    equ 0004h
CWG2DBF_DBF4_SIZE                        equ 0001h
CWG2DBF_DBF4_LENGTH                      equ 0001h
CWG2DBF_DBF4_MASK                        equ 0010h
CWG2DBF_DBF5_POSN                        equ 0005h
CWG2DBF_DBF5_POSITION                    equ 0005h
CWG2DBF_DBF5_SIZE                        equ 0001h
CWG2DBF_DBF5_LENGTH                      equ 0001h
CWG2DBF_DBF5_MASK                        equ 0020h
CWG2DBF_CWG2DBF_POSN                     equ 0000h
CWG2DBF_CWG2DBF_POSITION                 equ 0000h
CWG2DBF_CWG2DBF_SIZE                     equ 0006h
CWG2DBF_CWG2DBF_LENGTH                   equ 0006h
CWG2DBF_CWG2DBF_MASK                     equ 003Fh
CWG2DBF_CWG2DBF0_POSN                    equ 0000h
CWG2DBF_CWG2DBF0_POSITION                equ 0000h
CWG2DBF_CWG2DBF0_SIZE                    equ 0001h
CWG2DBF_CWG2DBF0_LENGTH                  equ 0001h
CWG2DBF_CWG2DBF0_MASK                    equ 0001h
CWG2DBF_CWG2DBF1_POSN                    equ 0001h
CWG2DBF_CWG2DBF1_POSITION                equ 0001h
CWG2DBF_CWG2DBF1_SIZE                    equ 0001h
CWG2DBF_CWG2DBF1_LENGTH                  equ 0001h
CWG2DBF_CWG2DBF1_MASK                    equ 0002h
CWG2DBF_CWG2DBF2_POSN                    equ 0002h
CWG2DBF_CWG2DBF2_POSITION                equ 0002h
CWG2DBF_CWG2DBF2_SIZE                    equ 0001h
CWG2DBF_CWG2DBF2_LENGTH                  equ 0001h
CWG2DBF_CWG2DBF2_MASK                    equ 0004h
CWG2DBF_CWG2DBF3_POSN                    equ 0003h
CWG2DBF_CWG2DBF3_POSITION                equ 0003h
CWG2DBF_CWG2DBF3_SIZE                    equ 0001h
CWG2DBF_CWG2DBF3_LENGTH                  equ 0001h
CWG2DBF_CWG2DBF3_MASK                    equ 0008h
CWG2DBF_CWG2DBF4_POSN                    equ 0004h
CWG2DBF_CWG2DBF4_POSITION                equ 0004h
CWG2DBF_CWG2DBF4_SIZE                    equ 0001h
CWG2DBF_CWG2DBF4_LENGTH                  equ 0001h
CWG2DBF_CWG2DBF4_MASK                    equ 0010h
CWG2DBF_CWG2DBF5_POSN                    equ 0005h
CWG2DBF_CWG2DBF5_POSITION                equ 0005h
CWG2DBF_CWG2DBF5_SIZE                    equ 0001h
CWG2DBF_CWG2DBF5_LENGTH                  equ 0001h
CWG2DBF_CWG2DBF5_MASK                    equ 0020h

// Register: CWG2CON0
#define CWG2CON0 CWG2CON0
CWG2CON0                                 equ 0715h
// bitfield definitions
CWG2CON0_MODE_POSN                       equ 0000h
CWG2CON0_MODE_POSITION                   equ 0000h
CWG2CON0_MODE_SIZE                       equ 0003h
CWG2CON0_MODE_LENGTH                     equ 0003h
CWG2CON0_MODE_MASK                       equ 0007h
CWG2CON0_LD_POSN                         equ 0006h
CWG2CON0_LD_POSITION                     equ 0006h
CWG2CON0_LD_SIZE                         equ 0001h
CWG2CON0_LD_LENGTH                       equ 0001h
CWG2CON0_LD_MASK                         equ 0040h
CWG2CON0_EN_POSN                         equ 0007h
CWG2CON0_EN_POSITION                     equ 0007h
CWG2CON0_EN_SIZE                         equ 0001h
CWG2CON0_EN_LENGTH                       equ 0001h
CWG2CON0_EN_MASK                         equ 0080h
CWG2CON0_MODE0_POSN                      equ 0000h
CWG2CON0_MODE0_POSITION                  equ 0000h
CWG2CON0_MODE0_SIZE                      equ 0001h
CWG2CON0_MODE0_LENGTH                    equ 0001h
CWG2CON0_MODE0_MASK                      equ 0001h
CWG2CON0_MODE1_POSN                      equ 0001h
CWG2CON0_MODE1_POSITION                  equ 0001h
CWG2CON0_MODE1_SIZE                      equ 0001h
CWG2CON0_MODE1_LENGTH                    equ 0001h
CWG2CON0_MODE1_MASK                      equ 0002h
CWG2CON0_MODE2_POSN                      equ 0002h
CWG2CON0_MODE2_POSITION                  equ 0002h
CWG2CON0_MODE2_SIZE                      equ 0001h
CWG2CON0_MODE2_LENGTH                    equ 0001h
CWG2CON0_MODE2_MASK                      equ 0004h
CWG2CON0_G2EN_POSN                       equ 0007h
CWG2CON0_G2EN_POSITION                   equ 0007h
CWG2CON0_G2EN_SIZE                       equ 0001h
CWG2CON0_G2EN_LENGTH                     equ 0001h
CWG2CON0_G2EN_MASK                       equ 0080h
CWG2CON0_CWG2MODE_POSN                   equ 0000h
CWG2CON0_CWG2MODE_POSITION               equ 0000h
CWG2CON0_CWG2MODE_SIZE                   equ 0003h
CWG2CON0_CWG2MODE_LENGTH                 equ 0003h
CWG2CON0_CWG2MODE_MASK                   equ 0007h
CWG2CON0_CWG2LD_POSN                     equ 0006h
CWG2CON0_CWG2LD_POSITION                 equ 0006h
CWG2CON0_CWG2LD_SIZE                     equ 0001h
CWG2CON0_CWG2LD_LENGTH                   equ 0001h
CWG2CON0_CWG2LD_MASK                     equ 0040h
CWG2CON0_CWG2EN_POSN                     equ 0007h
CWG2CON0_CWG2EN_POSITION                 equ 0007h
CWG2CON0_CWG2EN_SIZE                     equ 0001h
CWG2CON0_CWG2EN_LENGTH                   equ 0001h
CWG2CON0_CWG2EN_MASK                     equ 0080h
CWG2CON0_CWG2MODE0_POSN                  equ 0000h
CWG2CON0_CWG2MODE0_POSITION              equ 0000h
CWG2CON0_CWG2MODE0_SIZE                  equ 0001h
CWG2CON0_CWG2MODE0_LENGTH                equ 0001h
CWG2CON0_CWG2MODE0_MASK                  equ 0001h
CWG2CON0_CWG2MODE1_POSN                  equ 0001h
CWG2CON0_CWG2MODE1_POSITION              equ 0001h
CWG2CON0_CWG2MODE1_SIZE                  equ 0001h
CWG2CON0_CWG2MODE1_LENGTH                equ 0001h
CWG2CON0_CWG2MODE1_MASK                  equ 0002h
CWG2CON0_CWG2MODE2_POSN                  equ 0002h
CWG2CON0_CWG2MODE2_POSITION              equ 0002h
CWG2CON0_CWG2MODE2_SIZE                  equ 0001h
CWG2CON0_CWG2MODE2_LENGTH                equ 0001h
CWG2CON0_CWG2MODE2_MASK                  equ 0004h

// Register: CWG2CON1
#define CWG2CON1 CWG2CON1
CWG2CON1                                 equ 0716h
// bitfield definitions
CWG2CON1_POLA_POSN                       equ 0000h
CWG2CON1_POLA_POSITION                   equ 0000h
CWG2CON1_POLA_SIZE                       equ 0001h
CWG2CON1_POLA_LENGTH                     equ 0001h
CWG2CON1_POLA_MASK                       equ 0001h
CWG2CON1_POLB_POSN                       equ 0001h
CWG2CON1_POLB_POSITION                   equ 0001h
CWG2CON1_POLB_SIZE                       equ 0001h
CWG2CON1_POLB_LENGTH                     equ 0001h
CWG2CON1_POLB_MASK                       equ 0002h
CWG2CON1_POLC_POSN                       equ 0002h
CWG2CON1_POLC_POSITION                   equ 0002h
CWG2CON1_POLC_SIZE                       equ 0001h
CWG2CON1_POLC_LENGTH                     equ 0001h
CWG2CON1_POLC_MASK                       equ 0004h
CWG2CON1_POLD_POSN                       equ 0003h
CWG2CON1_POLD_POSITION                   equ 0003h
CWG2CON1_POLD_SIZE                       equ 0001h
CWG2CON1_POLD_LENGTH                     equ 0001h
CWG2CON1_POLD_MASK                       equ 0008h
CWG2CON1_IN_POSN                         equ 0005h
CWG2CON1_IN_POSITION                     equ 0005h
CWG2CON1_IN_SIZE                         equ 0001h
CWG2CON1_IN_LENGTH                       equ 0001h
CWG2CON1_IN_MASK                         equ 0020h
CWG2CON1_CWG2POLA_POSN                   equ 0000h
CWG2CON1_CWG2POLA_POSITION               equ 0000h
CWG2CON1_CWG2POLA_SIZE                   equ 0001h
CWG2CON1_CWG2POLA_LENGTH                 equ 0001h
CWG2CON1_CWG2POLA_MASK                   equ 0001h
CWG2CON1_CWG2POLB_POSN                   equ 0001h
CWG2CON1_CWG2POLB_POSITION               equ 0001h
CWG2CON1_CWG2POLB_SIZE                   equ 0001h
CWG2CON1_CWG2POLB_LENGTH                 equ 0001h
CWG2CON1_CWG2POLB_MASK                   equ 0002h
CWG2CON1_CWG2POLC_POSN                   equ 0002h
CWG2CON1_CWG2POLC_POSITION               equ 0002h
CWG2CON1_CWG2POLC_SIZE                   equ 0001h
CWG2CON1_CWG2POLC_LENGTH                 equ 0001h
CWG2CON1_CWG2POLC_MASK                   equ 0004h
CWG2CON1_CWG2POLD_POSN                   equ 0003h
CWG2CON1_CWG2POLD_POSITION               equ 0003h
CWG2CON1_CWG2POLD_SIZE                   equ 0001h
CWG2CON1_CWG2POLD_LENGTH                 equ 0001h
CWG2CON1_CWG2POLD_MASK                   equ 0008h
CWG2CON1_CWG2IN_POSN                     equ 0005h
CWG2CON1_CWG2IN_POSITION                 equ 0005h
CWG2CON1_CWG2IN_SIZE                     equ 0001h
CWG2CON1_CWG2IN_LENGTH                   equ 0001h
CWG2CON1_CWG2IN_MASK                     equ 0020h

// Register: CWG2AS0
#define CWG2AS0 CWG2AS0
CWG2AS0                                  equ 0717h
// bitfield definitions
CWG2AS0_LSAC_POSN                        equ 0002h
CWG2AS0_LSAC_POSITION                    equ 0002h
CWG2AS0_LSAC_SIZE                        equ 0002h
CWG2AS0_LSAC_LENGTH                      equ 0002h
CWG2AS0_LSAC_MASK                        equ 000Ch
CWG2AS0_LSBD_POSN                        equ 0004h
CWG2AS0_LSBD_POSITION                    equ 0004h
CWG2AS0_LSBD_SIZE                        equ 0002h
CWG2AS0_LSBD_LENGTH                      equ 0002h
CWG2AS0_LSBD_MASK                        equ 0030h
CWG2AS0_REN_POSN                         equ 0006h
CWG2AS0_REN_POSITION                     equ 0006h
CWG2AS0_REN_SIZE                         equ 0001h
CWG2AS0_REN_LENGTH                       equ 0001h
CWG2AS0_REN_MASK                         equ 0040h
CWG2AS0_SHUTDOWN_POSN                    equ 0007h
CWG2AS0_SHUTDOWN_POSITION                equ 0007h
CWG2AS0_SHUTDOWN_SIZE                    equ 0001h
CWG2AS0_SHUTDOWN_LENGTH                  equ 0001h
CWG2AS0_SHUTDOWN_MASK                    equ 0080h
CWG2AS0_LSAC0_POSN                       equ 0002h
CWG2AS0_LSAC0_POSITION                   equ 0002h
CWG2AS0_LSAC0_SIZE                       equ 0001h
CWG2AS0_LSAC0_LENGTH                     equ 0001h
CWG2AS0_LSAC0_MASK                       equ 0004h
CWG2AS0_LSAC1_POSN                       equ 0003h
CWG2AS0_LSAC1_POSITION                   equ 0003h
CWG2AS0_LSAC1_SIZE                       equ 0001h
CWG2AS0_LSAC1_LENGTH                     equ 0001h
CWG2AS0_LSAC1_MASK                       equ 0008h
CWG2AS0_LSBD0_POSN                       equ 0004h
CWG2AS0_LSBD0_POSITION                   equ 0004h
CWG2AS0_LSBD0_SIZE                       equ 0001h
CWG2AS0_LSBD0_LENGTH                     equ 0001h
CWG2AS0_LSBD0_MASK                       equ 0010h
CWG2AS0_LSBD1_POSN                       equ 0005h
CWG2AS0_LSBD1_POSITION                   equ 0005h
CWG2AS0_LSBD1_SIZE                       equ 0001h
CWG2AS0_LSBD1_LENGTH                     equ 0001h
CWG2AS0_LSBD1_MASK                       equ 0020h
CWG2AS0_CWG2LSAC_POSN                    equ 0002h
CWG2AS0_CWG2LSAC_POSITION                equ 0002h
CWG2AS0_CWG2LSAC_SIZE                    equ 0002h
CWG2AS0_CWG2LSAC_LENGTH                  equ 0002h
CWG2AS0_CWG2LSAC_MASK                    equ 000Ch
CWG2AS0_CWG2LSBD_POSN                    equ 0004h
CWG2AS0_CWG2LSBD_POSITION                equ 0004h
CWG2AS0_CWG2LSBD_SIZE                    equ 0002h
CWG2AS0_CWG2LSBD_LENGTH                  equ 0002h
CWG2AS0_CWG2LSBD_MASK                    equ 0030h
CWG2AS0_CWG2REN_POSN                     equ 0006h
CWG2AS0_CWG2REN_POSITION                 equ 0006h
CWG2AS0_CWG2REN_SIZE                     equ 0001h
CWG2AS0_CWG2REN_LENGTH                   equ 0001h
CWG2AS0_CWG2REN_MASK                     equ 0040h
CWG2AS0_CWG2SHUTDOWN_POSN                equ 0007h
CWG2AS0_CWG2SHUTDOWN_POSITION            equ 0007h
CWG2AS0_CWG2SHUTDOWN_SIZE                equ 0001h
CWG2AS0_CWG2SHUTDOWN_LENGTH              equ 0001h
CWG2AS0_CWG2SHUTDOWN_MASK                equ 0080h
CWG2AS0_CWG2LSAC0_POSN                   equ 0002h
CWG2AS0_CWG2LSAC0_POSITION               equ 0002h
CWG2AS0_CWG2LSAC0_SIZE                   equ 0001h
CWG2AS0_CWG2LSAC0_LENGTH                 equ 0001h
CWG2AS0_CWG2LSAC0_MASK                   equ 0004h
CWG2AS0_CWG2LSAC1_POSN                   equ 0003h
CWG2AS0_CWG2LSAC1_POSITION               equ 0003h
CWG2AS0_CWG2LSAC1_SIZE                   equ 0001h
CWG2AS0_CWG2LSAC1_LENGTH                 equ 0001h
CWG2AS0_CWG2LSAC1_MASK                   equ 0008h
CWG2AS0_CWG2LSBD0_POSN                   equ 0004h
CWG2AS0_CWG2LSBD0_POSITION               equ 0004h
CWG2AS0_CWG2LSBD0_SIZE                   equ 0001h
CWG2AS0_CWG2LSBD0_LENGTH                 equ 0001h
CWG2AS0_CWG2LSBD0_MASK                   equ 0010h
CWG2AS0_CWG2LSBD1_POSN                   equ 0005h
CWG2AS0_CWG2LSBD1_POSITION               equ 0005h
CWG2AS0_CWG2LSBD1_SIZE                   equ 0001h
CWG2AS0_CWG2LSBD1_LENGTH                 equ 0001h
CWG2AS0_CWG2LSBD1_MASK                   equ 0020h

// Register: CWG2AS1
#define CWG2AS1 CWG2AS1
CWG2AS1                                  equ 0718h
// bitfield definitions
CWG2AS1_AS0E_POSN                        equ 0000h
CWG2AS1_AS0E_POSITION                    equ 0000h
CWG2AS1_AS0E_SIZE                        equ 0001h
CWG2AS1_AS0E_LENGTH                      equ 0001h
CWG2AS1_AS0E_MASK                        equ 0001h
CWG2AS1_AS1E_POSN                        equ 0001h
CWG2AS1_AS1E_POSITION                    equ 0001h
CWG2AS1_AS1E_SIZE                        equ 0001h
CWG2AS1_AS1E_LENGTH                      equ 0001h
CWG2AS1_AS1E_MASK                        equ 0002h
CWG2AS1_AS2E_POSN                        equ 0002h
CWG2AS1_AS2E_POSITION                    equ 0002h
CWG2AS1_AS2E_SIZE                        equ 0001h
CWG2AS1_AS2E_LENGTH                      equ 0001h
CWG2AS1_AS2E_MASK                        equ 0004h
CWG2AS1_AS3E_POSN                        equ 0003h
CWG2AS1_AS3E_POSITION                    equ 0003h
CWG2AS1_AS3E_SIZE                        equ 0001h
CWG2AS1_AS3E_LENGTH                      equ 0001h
CWG2AS1_AS3E_MASK                        equ 0008h
CWG2AS1_AS4E_POSN                        equ 0004h
CWG2AS1_AS4E_POSITION                    equ 0004h
CWG2AS1_AS4E_SIZE                        equ 0001h
CWG2AS1_AS4E_LENGTH                      equ 0001h
CWG2AS1_AS4E_MASK                        equ 0010h

// Register: CWG2STR
#define CWG2STR CWG2STR
CWG2STR                                  equ 0719h
// bitfield definitions
CWG2STR_STRA_POSN                        equ 0000h
CWG2STR_STRA_POSITION                    equ 0000h
CWG2STR_STRA_SIZE                        equ 0001h
CWG2STR_STRA_LENGTH                      equ 0001h
CWG2STR_STRA_MASK                        equ 0001h
CWG2STR_STRB_POSN                        equ 0001h
CWG2STR_STRB_POSITION                    equ 0001h
CWG2STR_STRB_SIZE                        equ 0001h
CWG2STR_STRB_LENGTH                      equ 0001h
CWG2STR_STRB_MASK                        equ 0002h
CWG2STR_STRC_POSN                        equ 0002h
CWG2STR_STRC_POSITION                    equ 0002h
CWG2STR_STRC_SIZE                        equ 0001h
CWG2STR_STRC_LENGTH                      equ 0001h
CWG2STR_STRC_MASK                        equ 0004h
CWG2STR_STRD_POSN                        equ 0003h
CWG2STR_STRD_POSITION                    equ 0003h
CWG2STR_STRD_SIZE                        equ 0001h
CWG2STR_STRD_LENGTH                      equ 0001h
CWG2STR_STRD_MASK                        equ 0008h
CWG2STR_OVRA_POSN                        equ 0004h
CWG2STR_OVRA_POSITION                    equ 0004h
CWG2STR_OVRA_SIZE                        equ 0001h
CWG2STR_OVRA_LENGTH                      equ 0001h
CWG2STR_OVRA_MASK                        equ 0010h
CWG2STR_OVRB_POSN                        equ 0005h
CWG2STR_OVRB_POSITION                    equ 0005h
CWG2STR_OVRB_SIZE                        equ 0001h
CWG2STR_OVRB_LENGTH                      equ 0001h
CWG2STR_OVRB_MASK                        equ 0020h
CWG2STR_OVRC_POSN                        equ 0006h
CWG2STR_OVRC_POSITION                    equ 0006h
CWG2STR_OVRC_SIZE                        equ 0001h
CWG2STR_OVRC_LENGTH                      equ 0001h
CWG2STR_OVRC_MASK                        equ 0040h
CWG2STR_OVRD_POSN                        equ 0007h
CWG2STR_OVRD_POSITION                    equ 0007h
CWG2STR_OVRD_SIZE                        equ 0001h
CWG2STR_OVRD_LENGTH                      equ 0001h
CWG2STR_OVRD_MASK                        equ 0080h
CWG2STR_CWG2STRA_POSN                    equ 0000h
CWG2STR_CWG2STRA_POSITION                equ 0000h
CWG2STR_CWG2STRA_SIZE                    equ 0001h
CWG2STR_CWG2STRA_LENGTH                  equ 0001h
CWG2STR_CWG2STRA_MASK                    equ 0001h
CWG2STR_CWG2STRB_POSN                    equ 0001h
CWG2STR_CWG2STRB_POSITION                equ 0001h
CWG2STR_CWG2STRB_SIZE                    equ 0001h
CWG2STR_CWG2STRB_LENGTH                  equ 0001h
CWG2STR_CWG2STRB_MASK                    equ 0002h
CWG2STR_CWG2STRC_POSN                    equ 0002h
CWG2STR_CWG2STRC_POSITION                equ 0002h
CWG2STR_CWG2STRC_SIZE                    equ 0001h
CWG2STR_CWG2STRC_LENGTH                  equ 0001h
CWG2STR_CWG2STRC_MASK                    equ 0004h
CWG2STR_CWG2STRD_POSN                    equ 0003h
CWG2STR_CWG2STRD_POSITION                equ 0003h
CWG2STR_CWG2STRD_SIZE                    equ 0001h
CWG2STR_CWG2STRD_LENGTH                  equ 0001h
CWG2STR_CWG2STRD_MASK                    equ 0008h
CWG2STR_CWG2OVRA_POSN                    equ 0004h
CWG2STR_CWG2OVRA_POSITION                equ 0004h
CWG2STR_CWG2OVRA_SIZE                    equ 0001h
CWG2STR_CWG2OVRA_LENGTH                  equ 0001h
CWG2STR_CWG2OVRA_MASK                    equ 0010h
CWG2STR_CWG2OVRB_POSN                    equ 0005h
CWG2STR_CWG2OVRB_POSITION                equ 0005h
CWG2STR_CWG2OVRB_SIZE                    equ 0001h
CWG2STR_CWG2OVRB_LENGTH                  equ 0001h
CWG2STR_CWG2OVRB_MASK                    equ 0020h
CWG2STR_CWG2OVRC_POSN                    equ 0006h
CWG2STR_CWG2OVRC_POSITION                equ 0006h
CWG2STR_CWG2OVRC_SIZE                    equ 0001h
CWG2STR_CWG2OVRC_LENGTH                  equ 0001h
CWG2STR_CWG2OVRC_MASK                    equ 0040h
CWG2STR_CWG2OVRD_POSN                    equ 0007h
CWG2STR_CWG2OVRD_POSITION                equ 0007h
CWG2STR_CWG2OVRD_SIZE                    equ 0001h
CWG2STR_CWG2OVRD_LENGTH                  equ 0001h
CWG2STR_CWG2OVRD_MASK                    equ 0080h

// Register: NVMADRL
#define NVMADRL NVMADRL
NVMADRL                                  equ 0891h
// bitfield definitions
NVMADRL_NVMADRL_POSN                     equ 0000h
NVMADRL_NVMADRL_POSITION                 equ 0000h
NVMADRL_NVMADRL_SIZE                     equ 0008h
NVMADRL_NVMADRL_LENGTH                   equ 0008h
NVMADRL_NVMADRL_MASK                     equ 00FFh
NVMADRL_NVMADR0_POSN                     equ 0000h
NVMADRL_NVMADR0_POSITION                 equ 0000h
NVMADRL_NVMADR0_SIZE                     equ 0001h
NVMADRL_NVMADR0_LENGTH                   equ 0001h
NVMADRL_NVMADR0_MASK                     equ 0001h
NVMADRL_NVMADR1_POSN                     equ 0001h
NVMADRL_NVMADR1_POSITION                 equ 0001h
NVMADRL_NVMADR1_SIZE                     equ 0001h
NVMADRL_NVMADR1_LENGTH                   equ 0001h
NVMADRL_NVMADR1_MASK                     equ 0002h
NVMADRL_NVMADR2_POSN                     equ 0002h
NVMADRL_NVMADR2_POSITION                 equ 0002h
NVMADRL_NVMADR2_SIZE                     equ 0001h
NVMADRL_NVMADR2_LENGTH                   equ 0001h
NVMADRL_NVMADR2_MASK                     equ 0004h
NVMADRL_NVMADR3_POSN                     equ 0003h
NVMADRL_NVMADR3_POSITION                 equ 0003h
NVMADRL_NVMADR3_SIZE                     equ 0001h
NVMADRL_NVMADR3_LENGTH                   equ 0001h
NVMADRL_NVMADR3_MASK                     equ 0008h
NVMADRL_NVMADR4_POSN                     equ 0004h
NVMADRL_NVMADR4_POSITION                 equ 0004h
NVMADRL_NVMADR4_SIZE                     equ 0001h
NVMADRL_NVMADR4_LENGTH                   equ 0001h
NVMADRL_NVMADR4_MASK                     equ 0010h
NVMADRL_NVMADR5_POSN                     equ 0005h
NVMADRL_NVMADR5_POSITION                 equ 0005h
NVMADRL_NVMADR5_SIZE                     equ 0001h
NVMADRL_NVMADR5_LENGTH                   equ 0001h
NVMADRL_NVMADR5_MASK                     equ 0020h
NVMADRL_NVMADR6_POSN                     equ 0006h
NVMADRL_NVMADR6_POSITION                 equ 0006h
NVMADRL_NVMADR6_SIZE                     equ 0001h
NVMADRL_NVMADR6_LENGTH                   equ 0001h
NVMADRL_NVMADR6_MASK                     equ 0040h
NVMADRL_NVMADR7_POSN                     equ 0007h
NVMADRL_NVMADR7_POSITION                 equ 0007h
NVMADRL_NVMADR7_SIZE                     equ 0001h
NVMADRL_NVMADR7_LENGTH                   equ 0001h
NVMADRL_NVMADR7_MASK                     equ 0080h
NVMADRL_EEADRL_POSN                      equ 0000h
NVMADRL_EEADRL_POSITION                  equ 0000h
NVMADRL_EEADRL_SIZE                      equ 0008h
NVMADRL_EEADRL_LENGTH                    equ 0008h
NVMADRL_EEADRL_MASK                      equ 00FFh
NVMADRL_PMADRL_POSN                      equ 0000h
NVMADRL_PMADRL_POSITION                  equ 0000h
NVMADRL_PMADRL_SIZE                      equ 0008h
NVMADRL_PMADRL_LENGTH                    equ 0008h
NVMADRL_PMADRL_MASK                      equ 00FFh

// Register: NVMADRH
#define NVMADRH NVMADRH
NVMADRH                                  equ 0892h
// bitfield definitions
NVMADRH_NVMADRH_POSN                     equ 0000h
NVMADRH_NVMADRH_POSITION                 equ 0000h
NVMADRH_NVMADRH_SIZE                     equ 0007h
NVMADRH_NVMADRH_LENGTH                   equ 0007h
NVMADRH_NVMADRH_MASK                     equ 007Fh
NVMADRH_NVMADR8_POSN                     equ 0000h
NVMADRH_NVMADR8_POSITION                 equ 0000h
NVMADRH_NVMADR8_SIZE                     equ 0001h
NVMADRH_NVMADR8_LENGTH                   equ 0001h
NVMADRH_NVMADR8_MASK                     equ 0001h
NVMADRH_NVMADR9_POSN                     equ 0001h
NVMADRH_NVMADR9_POSITION                 equ 0001h
NVMADRH_NVMADR9_SIZE                     equ 0001h
NVMADRH_NVMADR9_LENGTH                   equ 0001h
NVMADRH_NVMADR9_MASK                     equ 0002h
NVMADRH_NVMADR10_POSN                    equ 0002h
NVMADRH_NVMADR10_POSITION                equ 0002h
NVMADRH_NVMADR10_SIZE                    equ 0001h
NVMADRH_NVMADR10_LENGTH                  equ 0001h
NVMADRH_NVMADR10_MASK                    equ 0004h
NVMADRH_NVMADR11_POSN                    equ 0003h
NVMADRH_NVMADR11_POSITION                equ 0003h
NVMADRH_NVMADR11_SIZE                    equ 0001h
NVMADRH_NVMADR11_LENGTH                  equ 0001h
NVMADRH_NVMADR11_MASK                    equ 0008h
NVMADRH_NVMADR12_POSN                    equ 0004h
NVMADRH_NVMADR12_POSITION                equ 0004h
NVMADRH_NVMADR12_SIZE                    equ 0001h
NVMADRH_NVMADR12_LENGTH                  equ 0001h
NVMADRH_NVMADR12_MASK                    equ 0010h
NVMADRH_NVMADR13_POSN                    equ 0005h
NVMADRH_NVMADR13_POSITION                equ 0005h
NVMADRH_NVMADR13_SIZE                    equ 0001h
NVMADRH_NVMADR13_LENGTH                  equ 0001h
NVMADRH_NVMADR13_MASK                    equ 0020h
NVMADRH_NVMADR14_POSN                    equ 0006h
NVMADRH_NVMADR14_POSITION                equ 0006h
NVMADRH_NVMADR14_SIZE                    equ 0001h
NVMADRH_NVMADR14_LENGTH                  equ 0001h
NVMADRH_NVMADR14_MASK                    equ 0040h
NVMADRH_EEADRH_POSN                      equ 0000h
NVMADRH_EEADRH_POSITION                  equ 0000h
NVMADRH_EEADRH_SIZE                      equ 0007h
NVMADRH_EEADRH_LENGTH                    equ 0007h
NVMADRH_EEADRH_MASK                      equ 007Fh
NVMADRH_PMADRH_POSN                      equ 0000h
NVMADRH_PMADRH_POSITION                  equ 0000h
NVMADRH_PMADRH_SIZE                      equ 0007h
NVMADRH_PMADRH_LENGTH                    equ 0007h
NVMADRH_PMADRH_MASK                      equ 007Fh

// Register: NVMDATL
#define NVMDATL NVMDATL
NVMDATL                                  equ 0893h
// bitfield definitions
NVMDATL_NVMDATL_POSN                     equ 0000h
NVMDATL_NVMDATL_POSITION                 equ 0000h
NVMDATL_NVMDATL_SIZE                     equ 0008h
NVMDATL_NVMDATL_LENGTH                   equ 0008h
NVMDATL_NVMDATL_MASK                     equ 00FFh
NVMDATL_NVMDAT0_POSN                     equ 0000h
NVMDATL_NVMDAT0_POSITION                 equ 0000h
NVMDATL_NVMDAT0_SIZE                     equ 0001h
NVMDATL_NVMDAT0_LENGTH                   equ 0001h
NVMDATL_NVMDAT0_MASK                     equ 0001h
NVMDATL_NVMDAT1_POSN                     equ 0001h
NVMDATL_NVMDAT1_POSITION                 equ 0001h
NVMDATL_NVMDAT1_SIZE                     equ 0001h
NVMDATL_NVMDAT1_LENGTH                   equ 0001h
NVMDATL_NVMDAT1_MASK                     equ 0002h
NVMDATL_NVMDAT2_POSN                     equ 0002h
NVMDATL_NVMDAT2_POSITION                 equ 0002h
NVMDATL_NVMDAT2_SIZE                     equ 0001h
NVMDATL_NVMDAT2_LENGTH                   equ 0001h
NVMDATL_NVMDAT2_MASK                     equ 0004h
NVMDATL_NVMDAT3_POSN                     equ 0003h
NVMDATL_NVMDAT3_POSITION                 equ 0003h
NVMDATL_NVMDAT3_SIZE                     equ 0001h
NVMDATL_NVMDAT3_LENGTH                   equ 0001h
NVMDATL_NVMDAT3_MASK                     equ 0008h
NVMDATL_NVMDAT4_POSN                     equ 0004h
NVMDATL_NVMDAT4_POSITION                 equ 0004h
NVMDATL_NVMDAT4_SIZE                     equ 0001h
NVMDATL_NVMDAT4_LENGTH                   equ 0001h
NVMDATL_NVMDAT4_MASK                     equ 0010h
NVMDATL_NVMDAT5_POSN                     equ 0005h
NVMDATL_NVMDAT5_POSITION                 equ 0005h
NVMDATL_NVMDAT5_SIZE                     equ 0001h
NVMDATL_NVMDAT5_LENGTH                   equ 0001h
NVMDATL_NVMDAT5_MASK                     equ 0020h
NVMDATL_NVMDAT6_POSN                     equ 0006h
NVMDATL_NVMDAT6_POSITION                 equ 0006h
NVMDATL_NVMDAT6_SIZE                     equ 0001h
NVMDATL_NVMDAT6_LENGTH                   equ 0001h
NVMDATL_NVMDAT6_MASK                     equ 0040h
NVMDATL_NVMDAT7_POSN                     equ 0007h
NVMDATL_NVMDAT7_POSITION                 equ 0007h
NVMDATL_NVMDAT7_SIZE                     equ 0001h
NVMDATL_NVMDAT7_LENGTH                   equ 0001h
NVMDATL_NVMDAT7_MASK                     equ 0080h
NVMDATL_EEDATL_POSN                      equ 0000h
NVMDATL_EEDATL_POSITION                  equ 0000h
NVMDATL_EEDATL_SIZE                      equ 0008h
NVMDATL_EEDATL_LENGTH                    equ 0008h
NVMDATL_EEDATL_MASK                      equ 00FFh
NVMDATL_PMDATL_POSN                      equ 0000h
NVMDATL_PMDATL_POSITION                  equ 0000h
NVMDATL_PMDATL_SIZE                      equ 0008h
NVMDATL_PMDATL_LENGTH                    equ 0008h
NVMDATL_PMDATL_MASK                      equ 00FFh

// Register: NVMDATH
#define NVMDATH NVMDATH
NVMDATH                                  equ 0894h
// bitfield definitions
NVMDATH_NVMDATH_POSN                     equ 0000h
NVMDATH_NVMDATH_POSITION                 equ 0000h
NVMDATH_NVMDATH_SIZE                     equ 0006h
NVMDATH_NVMDATH_LENGTH                   equ 0006h
NVMDATH_NVMDATH_MASK                     equ 003Fh
NVMDATH_NVMDAT8_POSN                     equ 0000h
NVMDATH_NVMDAT8_POSITION                 equ 0000h
NVMDATH_NVMDAT8_SIZE                     equ 0001h
NVMDATH_NVMDAT8_LENGTH                   equ 0001h
NVMDATH_NVMDAT8_MASK                     equ 0001h
NVMDATH_NVMDAT9_POSN                     equ 0001h
NVMDATH_NVMDAT9_POSITION                 equ 0001h
NVMDATH_NVMDAT9_SIZE                     equ 0001h
NVMDATH_NVMDAT9_LENGTH                   equ 0001h
NVMDATH_NVMDAT9_MASK                     equ 0002h
NVMDATH_NVMDAT10_POSN                    equ 0002h
NVMDATH_NVMDAT10_POSITION                equ 0002h
NVMDATH_NVMDAT10_SIZE                    equ 0001h
NVMDATH_NVMDAT10_LENGTH                  equ 0001h
NVMDATH_NVMDAT10_MASK                    equ 0004h
NVMDATH_NVMDAT11_POSN                    equ 0003h
NVMDATH_NVMDAT11_POSITION                equ 0003h
NVMDATH_NVMDAT11_SIZE                    equ 0001h
NVMDATH_NVMDAT11_LENGTH                  equ 0001h
NVMDATH_NVMDAT11_MASK                    equ 0008h
NVMDATH_NVMDAT12_POSN                    equ 0004h
NVMDATH_NVMDAT12_POSITION                equ 0004h
NVMDATH_NVMDAT12_SIZE                    equ 0001h
NVMDATH_NVMDAT12_LENGTH                  equ 0001h
NVMDATH_NVMDAT12_MASK                    equ 0010h
NVMDATH_NVMDAT13_POSN                    equ 0005h
NVMDATH_NVMDAT13_POSITION                equ 0005h
NVMDATH_NVMDAT13_SIZE                    equ 0001h
NVMDATH_NVMDAT13_LENGTH                  equ 0001h
NVMDATH_NVMDAT13_MASK                    equ 0020h
NVMDATH_EEDATH_POSN                      equ 0000h
NVMDATH_EEDATH_POSITION                  equ 0000h
NVMDATH_EEDATH_SIZE                      equ 0006h
NVMDATH_EEDATH_LENGTH                    equ 0006h
NVMDATH_EEDATH_MASK                      equ 003Fh
NVMDATH_PMDATH_POSN                      equ 0000h
NVMDATH_PMDATH_POSITION                  equ 0000h
NVMDATH_PMDATH_SIZE                      equ 0006h
NVMDATH_PMDATH_LENGTH                    equ 0006h
NVMDATH_PMDATH_MASK                      equ 003Fh

// Register: NVMCON1
#define NVMCON1 NVMCON1
NVMCON1                                  equ 0895h
// bitfield definitions
NVMCON1_RD_POSN                          equ 0000h
NVMCON1_RD_POSITION                      equ 0000h
NVMCON1_RD_SIZE                          equ 0001h
NVMCON1_RD_LENGTH                        equ 0001h
NVMCON1_RD_MASK                          equ 0001h
NVMCON1_WR_POSN                          equ 0001h
NVMCON1_WR_POSITION                      equ 0001h
NVMCON1_WR_SIZE                          equ 0001h
NVMCON1_WR_LENGTH                        equ 0001h
NVMCON1_WR_MASK                          equ 0002h
NVMCON1_WREN_POSN                        equ 0002h
NVMCON1_WREN_POSITION                    equ 0002h
NVMCON1_WREN_SIZE                        equ 0001h
NVMCON1_WREN_LENGTH                      equ 0001h
NVMCON1_WREN_MASK                        equ 0004h
NVMCON1_WRERR_POSN                       equ 0003h
NVMCON1_WRERR_POSITION                   equ 0003h
NVMCON1_WRERR_SIZE                       equ 0001h
NVMCON1_WRERR_LENGTH                     equ 0001h
NVMCON1_WRERR_MASK                       equ 0008h
NVMCON1_FREE_POSN                        equ 0004h
NVMCON1_FREE_POSITION                    equ 0004h
NVMCON1_FREE_SIZE                        equ 0001h
NVMCON1_FREE_LENGTH                      equ 0001h
NVMCON1_FREE_MASK                        equ 0010h
NVMCON1_LWLO_POSN                        equ 0005h
NVMCON1_LWLO_POSITION                    equ 0005h
NVMCON1_LWLO_SIZE                        equ 0001h
NVMCON1_LWLO_LENGTH                      equ 0001h
NVMCON1_LWLO_MASK                        equ 0020h
NVMCON1_NVMREGS_POSN                     equ 0006h
NVMCON1_NVMREGS_POSITION                 equ 0006h
NVMCON1_NVMREGS_SIZE                     equ 0001h
NVMCON1_NVMREGS_LENGTH                   equ 0001h
NVMCON1_NVMREGS_MASK                     equ 0040h
NVMCON1_CFGS_POSN                        equ 0006h
NVMCON1_CFGS_POSITION                    equ 0006h
NVMCON1_CFGS_SIZE                        equ 0001h
NVMCON1_CFGS_LENGTH                      equ 0001h
NVMCON1_CFGS_MASK                        equ 0040h

// Register: NVMCON2
#define NVMCON2 NVMCON2
NVMCON2                                  equ 0896h
// bitfield definitions
NVMCON2_NVMCON2_POSN                     equ 0000h
NVMCON2_NVMCON2_POSITION                 equ 0000h
NVMCON2_NVMCON2_SIZE                     equ 0008h
NVMCON2_NVMCON2_LENGTH                   equ 0008h
NVMCON2_NVMCON2_MASK                     equ 00FFh
NVMCON2_EECON2_POSN                      equ 0000h
NVMCON2_EECON2_POSITION                  equ 0000h
NVMCON2_EECON2_SIZE                      equ 0008h
NVMCON2_EECON2_LENGTH                    equ 0008h
NVMCON2_EECON2_MASK                      equ 00FFh
NVMCON2_PMCON2_POSN                      equ 0000h
NVMCON2_PMCON2_POSITION                  equ 0000h
NVMCON2_PMCON2_SIZE                      equ 0008h
NVMCON2_PMCON2_LENGTH                    equ 0008h
NVMCON2_PMCON2_MASK                      equ 00FFh

// Register: PCON0
#define PCON0 PCON0
PCON0                                    equ 089Bh
// bitfield definitions
PCON0_nBOR_POSN                          equ 0000h
PCON0_nBOR_POSITION                      equ 0000h
PCON0_nBOR_SIZE                          equ 0001h
PCON0_nBOR_LENGTH                        equ 0001h
PCON0_nBOR_MASK                          equ 0001h
PCON0_nPOR_POSN                          equ 0001h
PCON0_nPOR_POSITION                      equ 0001h
PCON0_nPOR_SIZE                          equ 0001h
PCON0_nPOR_LENGTH                        equ 0001h
PCON0_nPOR_MASK                          equ 0002h
PCON0_nRI_POSN                           equ 0002h
PCON0_nRI_POSITION                       equ 0002h
PCON0_nRI_SIZE                           equ 0001h
PCON0_nRI_LENGTH                         equ 0001h
PCON0_nRI_MASK                           equ 0004h
PCON0_nRMCLR_POSN                        equ 0003h
PCON0_nRMCLR_POSITION                    equ 0003h
PCON0_nRMCLR_SIZE                        equ 0001h
PCON0_nRMCLR_LENGTH                      equ 0001h
PCON0_nRMCLR_MASK                        equ 0008h
PCON0_nRWDT_POSN                         equ 0004h
PCON0_nRWDT_POSITION                     equ 0004h
PCON0_nRWDT_SIZE                         equ 0001h
PCON0_nRWDT_LENGTH                       equ 0001h
PCON0_nRWDT_MASK                         equ 0010h
PCON0_STKUNF_POSN                        equ 0006h
PCON0_STKUNF_POSITION                    equ 0006h
PCON0_STKUNF_SIZE                        equ 0001h
PCON0_STKUNF_LENGTH                      equ 0001h
PCON0_STKUNF_MASK                        equ 0040h
PCON0_STKOVF_POSN                        equ 0007h
PCON0_STKOVF_POSITION                    equ 0007h
PCON0_STKOVF_SIZE                        equ 0001h
PCON0_STKOVF_LENGTH                      equ 0001h
PCON0_STKOVF_MASK                        equ 0080h

// Register: PMD0
#define PMD0 PMD0
PMD0                                     equ 0911h
// bitfield definitions
PMD0_IOCMD_POSN                          equ 0000h
PMD0_IOCMD_POSITION                      equ 0000h
PMD0_IOCMD_SIZE                          equ 0001h
PMD0_IOCMD_LENGTH                        equ 0001h
PMD0_IOCMD_MASK                          equ 0001h
PMD0_CLKRMD_POSN                         equ 0001h
PMD0_CLKRMD_POSITION                     equ 0001h
PMD0_CLKRMD_SIZE                         equ 0001h
PMD0_CLKRMD_LENGTH                       equ 0001h
PMD0_CLKRMD_MASK                         equ 0002h
PMD0_NVMMD_POSN                          equ 0002h
PMD0_NVMMD_POSITION                      equ 0002h
PMD0_NVMMD_SIZE                          equ 0001h
PMD0_NVMMD_LENGTH                        equ 0001h
PMD0_NVMMD_MASK                          equ 0004h
PMD0_FVRMD_POSN                          equ 0006h
PMD0_FVRMD_POSITION                      equ 0006h
PMD0_FVRMD_SIZE                          equ 0001h
PMD0_FVRMD_LENGTH                        equ 0001h
PMD0_FVRMD_MASK                          equ 0040h
PMD0_SYSCMD_POSN                         equ 0007h
PMD0_SYSCMD_POSITION                     equ 0007h
PMD0_SYSCMD_SIZE                         equ 0001h
PMD0_SYSCMD_LENGTH                       equ 0001h
PMD0_SYSCMD_MASK                         equ 0080h

// Register: PMD1
#define PMD1 PMD1
PMD1                                     equ 0912h
// bitfield definitions
PMD1_TMR0MD_POSN                         equ 0000h
PMD1_TMR0MD_POSITION                     equ 0000h
PMD1_TMR0MD_SIZE                         equ 0001h
PMD1_TMR0MD_LENGTH                       equ 0001h
PMD1_TMR0MD_MASK                         equ 0001h
PMD1_TMR1MD_POSN                         equ 0001h
PMD1_TMR1MD_POSITION                     equ 0001h
PMD1_TMR1MD_SIZE                         equ 0001h
PMD1_TMR1MD_LENGTH                       equ 0001h
PMD1_TMR1MD_MASK                         equ 0002h
PMD1_TMR2MD_POSN                         equ 0002h
PMD1_TMR2MD_POSITION                     equ 0002h
PMD1_TMR2MD_SIZE                         equ 0001h
PMD1_TMR2MD_LENGTH                       equ 0001h
PMD1_TMR2MD_MASK                         equ 0004h
PMD1_TMR3MD_POSN                         equ 0003h
PMD1_TMR3MD_POSITION                     equ 0003h
PMD1_TMR3MD_SIZE                         equ 0001h
PMD1_TMR3MD_LENGTH                       equ 0001h
PMD1_TMR3MD_MASK                         equ 0008h
PMD1_TMR4MD_POSN                         equ 0004h
PMD1_TMR4MD_POSITION                     equ 0004h
PMD1_TMR4MD_SIZE                         equ 0001h
PMD1_TMR4MD_LENGTH                       equ 0001h
PMD1_TMR4MD_MASK                         equ 0010h
PMD1_TMR5MD_POSN                         equ 0005h
PMD1_TMR5MD_POSITION                     equ 0005h
PMD1_TMR5MD_SIZE                         equ 0001h
PMD1_TMR5MD_LENGTH                       equ 0001h
PMD1_TMR5MD_MASK                         equ 0020h
PMD1_TMR6MD_POSN                         equ 0006h
PMD1_TMR6MD_POSITION                     equ 0006h
PMD1_TMR6MD_SIZE                         equ 0001h
PMD1_TMR6MD_LENGTH                       equ 0001h
PMD1_TMR6MD_MASK                         equ 0040h
PMD1_NCOMD_POSN                          equ 0007h
PMD1_NCOMD_POSITION                      equ 0007h
PMD1_NCOMD_SIZE                          equ 0001h
PMD1_NCOMD_LENGTH                        equ 0001h
PMD1_NCOMD_MASK                          equ 0080h

// Register: PMD2
#define PMD2 PMD2
PMD2                                     equ 0913h
// bitfield definitions
PMD2_CMP1MD_POSN                         equ 0001h
PMD2_CMP1MD_POSITION                     equ 0001h
PMD2_CMP1MD_SIZE                         equ 0001h
PMD2_CMP1MD_LENGTH                       equ 0001h
PMD2_CMP1MD_MASK                         equ 0002h
PMD2_CMP2MD_POSN                         equ 0002h
PMD2_CMP2MD_POSITION                     equ 0002h
PMD2_CMP2MD_SIZE                         equ 0001h
PMD2_CMP2MD_LENGTH                       equ 0001h
PMD2_CMP2MD_MASK                         equ 0004h
PMD2_ADCMD_POSN                          equ 0005h
PMD2_ADCMD_POSITION                      equ 0005h
PMD2_ADCMD_SIZE                          equ 0001h
PMD2_ADCMD_LENGTH                        equ 0001h
PMD2_ADCMD_MASK                          equ 0020h
PMD2_DACMD_POSN                          equ 0006h
PMD2_DACMD_POSITION                      equ 0006h
PMD2_DACMD_SIZE                          equ 0001h
PMD2_DACMD_LENGTH                        equ 0001h
PMD2_DACMD_MASK                          equ 0040h

// Register: PMD3
#define PMD3 PMD3
PMD3                                     equ 0914h
// bitfield definitions
PMD3_CCP1MD_POSN                         equ 0000h
PMD3_CCP1MD_POSITION                     equ 0000h
PMD3_CCP1MD_SIZE                         equ 0001h
PMD3_CCP1MD_LENGTH                       equ 0001h
PMD3_CCP1MD_MASK                         equ 0001h
PMD3_CCP2MD_POSN                         equ 0001h
PMD3_CCP2MD_POSITION                     equ 0001h
PMD3_CCP2MD_SIZE                         equ 0001h
PMD3_CCP2MD_LENGTH                       equ 0001h
PMD3_CCP2MD_MASK                         equ 0002h
PMD3_CCP3MD_POSN                         equ 0002h
PMD3_CCP3MD_POSITION                     equ 0002h
PMD3_CCP3MD_SIZE                         equ 0001h
PMD3_CCP3MD_LENGTH                       equ 0001h
PMD3_CCP3MD_MASK                         equ 0004h
PMD3_CCP4MD_POSN                         equ 0003h
PMD3_CCP4MD_POSITION                     equ 0003h
PMD3_CCP4MD_SIZE                         equ 0001h
PMD3_CCP4MD_LENGTH                       equ 0001h
PMD3_CCP4MD_MASK                         equ 0008h
PMD3_PWM5MD_POSN                         equ 0004h
PMD3_PWM5MD_POSITION                     equ 0004h
PMD3_PWM5MD_SIZE                         equ 0001h
PMD3_PWM5MD_LENGTH                       equ 0001h
PMD3_PWM5MD_MASK                         equ 0010h
PMD3_PWM6MD_POSN                         equ 0005h
PMD3_PWM6MD_POSITION                     equ 0005h
PMD3_PWM6MD_SIZE                         equ 0001h
PMD3_PWM6MD_LENGTH                       equ 0001h
PMD3_PWM6MD_MASK                         equ 0020h
PMD3_CWG1MD_POSN                         equ 0006h
PMD3_CWG1MD_POSITION                     equ 0006h
PMD3_CWG1MD_SIZE                         equ 0001h
PMD3_CWG1MD_LENGTH                       equ 0001h
PMD3_CWG1MD_MASK                         equ 0040h
PMD3_CWG2MD_POSN                         equ 0007h
PMD3_CWG2MD_POSITION                     equ 0007h
PMD3_CWG2MD_SIZE                         equ 0001h
PMD3_CWG2MD_LENGTH                       equ 0001h
PMD3_CWG2MD_MASK                         equ 0080h

// Register: PMD4
#define PMD4 PMD4
PMD4                                     equ 0915h
// bitfield definitions
PMD4_MSSP1MD_POSN                        equ 0001h
PMD4_MSSP1MD_POSITION                    equ 0001h
PMD4_MSSP1MD_SIZE                        equ 0001h
PMD4_MSSP1MD_LENGTH                      equ 0001h
PMD4_MSSP1MD_MASK                        equ 0002h
PMD4_MSSP2MD_POSN                        equ 0002h
PMD4_MSSP2MD_POSITION                    equ 0002h
PMD4_MSSP2MD_SIZE                        equ 0001h
PMD4_MSSP2MD_LENGTH                      equ 0001h
PMD4_MSSP2MD_MASK                        equ 0004h
PMD4_UART1MD_POSN                        equ 0005h
PMD4_UART1MD_POSITION                    equ 0005h
PMD4_UART1MD_SIZE                        equ 0001h
PMD4_UART1MD_LENGTH                      equ 0001h
PMD4_UART1MD_MASK                        equ 0020h

// Register: PMD5
#define PMD5 PMD5
PMD5                                     equ 0916h
// bitfield definitions
PMD5_DSMMD_POSN                          equ 0000h
PMD5_DSMMD_POSITION                      equ 0000h
PMD5_DSMMD_SIZE                          equ 0001h
PMD5_DSMMD_LENGTH                        equ 0001h
PMD5_DSMMD_MASK                          equ 0001h
PMD5_CLC1MD_POSN                         equ 0001h
PMD5_CLC1MD_POSITION                     equ 0001h
PMD5_CLC1MD_SIZE                         equ 0001h
PMD5_CLC1MD_LENGTH                       equ 0001h
PMD5_CLC1MD_MASK                         equ 0002h
PMD5_CLC2MD_POSN                         equ 0002h
PMD5_CLC2MD_POSITION                     equ 0002h
PMD5_CLC2MD_SIZE                         equ 0001h
PMD5_CLC2MD_LENGTH                       equ 0001h
PMD5_CLC2MD_MASK                         equ 0004h
PMD5_CLC3MD_POSN                         equ 0003h
PMD5_CLC3MD_POSITION                     equ 0003h
PMD5_CLC3MD_SIZE                         equ 0001h
PMD5_CLC3MD_LENGTH                       equ 0001h
PMD5_CLC3MD_MASK                         equ 0008h
PMD5_CLC4MD_POSN                         equ 0004h
PMD5_CLC4MD_POSITION                     equ 0004h
PMD5_CLC4MD_SIZE                         equ 0001h
PMD5_CLC4MD_LENGTH                       equ 0001h
PMD5_CLC4MD_MASK                         equ 0010h

// Register: CPUDOZE
#define CPUDOZE CPUDOZE
CPUDOZE                                  equ 0918h
// bitfield definitions
CPUDOZE_DOZE_POSN                        equ 0000h
CPUDOZE_DOZE_POSITION                    equ 0000h
CPUDOZE_DOZE_SIZE                        equ 0003h
CPUDOZE_DOZE_LENGTH                      equ 0003h
CPUDOZE_DOZE_MASK                        equ 0007h
CPUDOZE_DOE_POSN                         equ 0004h
CPUDOZE_DOE_POSITION                     equ 0004h
CPUDOZE_DOE_SIZE                         equ 0001h
CPUDOZE_DOE_LENGTH                       equ 0001h
CPUDOZE_DOE_MASK                         equ 0010h
CPUDOZE_ROI_POSN                         equ 0005h
CPUDOZE_ROI_POSITION                     equ 0005h
CPUDOZE_ROI_SIZE                         equ 0001h
CPUDOZE_ROI_LENGTH                       equ 0001h
CPUDOZE_ROI_MASK                         equ 0020h
CPUDOZE_DOZEN_POSN                       equ 0006h
CPUDOZE_DOZEN_POSITION                   equ 0006h
CPUDOZE_DOZEN_SIZE                       equ 0001h
CPUDOZE_DOZEN_LENGTH                     equ 0001h
CPUDOZE_DOZEN_MASK                       equ 0040h
CPUDOZE_IDLEN_POSN                       equ 0007h
CPUDOZE_IDLEN_POSITION                   equ 0007h
CPUDOZE_IDLEN_SIZE                       equ 0001h
CPUDOZE_IDLEN_LENGTH                     equ 0001h
CPUDOZE_IDLEN_MASK                       equ 0080h
CPUDOZE_DOZE0_POSN                       equ 0000h
CPUDOZE_DOZE0_POSITION                   equ 0000h
CPUDOZE_DOZE0_SIZE                       equ 0001h
CPUDOZE_DOZE0_LENGTH                     equ 0001h
CPUDOZE_DOZE0_MASK                       equ 0001h
CPUDOZE_DOZE1_POSN                       equ 0001h
CPUDOZE_DOZE1_POSITION                   equ 0001h
CPUDOZE_DOZE1_SIZE                       equ 0001h
CPUDOZE_DOZE1_LENGTH                     equ 0001h
CPUDOZE_DOZE1_MASK                       equ 0002h
CPUDOZE_DOZE2_POSN                       equ 0002h
CPUDOZE_DOZE2_POSITION                   equ 0002h
CPUDOZE_DOZE2_SIZE                       equ 0001h
CPUDOZE_DOZE2_LENGTH                     equ 0001h
CPUDOZE_DOZE2_MASK                       equ 0004h

// Register: OSCCON1
#define OSCCON1 OSCCON1
OSCCON1                                  equ 0919h
// bitfield definitions
OSCCON1_NDIV_POSN                        equ 0000h
OSCCON1_NDIV_POSITION                    equ 0000h
OSCCON1_NDIV_SIZE                        equ 0004h
OSCCON1_NDIV_LENGTH                      equ 0004h
OSCCON1_NDIV_MASK                        equ 000Fh
OSCCON1_NOSC_POSN                        equ 0004h
OSCCON1_NOSC_POSITION                    equ 0004h
OSCCON1_NOSC_SIZE                        equ 0003h
OSCCON1_NOSC_LENGTH                      equ 0003h
OSCCON1_NOSC_MASK                        equ 0070h
OSCCON1_NDIV0_POSN                       equ 0000h
OSCCON1_NDIV0_POSITION                   equ 0000h
OSCCON1_NDIV0_SIZE                       equ 0001h
OSCCON1_NDIV0_LENGTH                     equ 0001h
OSCCON1_NDIV0_MASK                       equ 0001h
OSCCON1_NDIV1_POSN                       equ 0001h
OSCCON1_NDIV1_POSITION                   equ 0001h
OSCCON1_NDIV1_SIZE                       equ 0001h
OSCCON1_NDIV1_LENGTH                     equ 0001h
OSCCON1_NDIV1_MASK                       equ 0002h
OSCCON1_NDIV2_POSN                       equ 0002h
OSCCON1_NDIV2_POSITION                   equ 0002h
OSCCON1_NDIV2_SIZE                       equ 0001h
OSCCON1_NDIV2_LENGTH                     equ 0001h
OSCCON1_NDIV2_MASK                       equ 0004h
OSCCON1_NDIV3_POSN                       equ 0003h
OSCCON1_NDIV3_POSITION                   equ 0003h
OSCCON1_NDIV3_SIZE                       equ 0001h
OSCCON1_NDIV3_LENGTH                     equ 0001h
OSCCON1_NDIV3_MASK                       equ 0008h
OSCCON1_NOSC0_POSN                       equ 0004h
OSCCON1_NOSC0_POSITION                   equ 0004h
OSCCON1_NOSC0_SIZE                       equ 0001h
OSCCON1_NOSC0_LENGTH                     equ 0001h
OSCCON1_NOSC0_MASK                       equ 0010h
OSCCON1_NOSC1_POSN                       equ 0005h
OSCCON1_NOSC1_POSITION                   equ 0005h
OSCCON1_NOSC1_SIZE                       equ 0001h
OSCCON1_NOSC1_LENGTH                     equ 0001h
OSCCON1_NOSC1_MASK                       equ 0020h
OSCCON1_NOSC2_POSN                       equ 0006h
OSCCON1_NOSC2_POSITION                   equ 0006h
OSCCON1_NOSC2_SIZE                       equ 0001h
OSCCON1_NOSC2_LENGTH                     equ 0001h
OSCCON1_NOSC2_MASK                       equ 0040h

// Register: OSCCON2
#define OSCCON2 OSCCON2
OSCCON2                                  equ 091Ah
// bitfield definitions
OSCCON2_CDIV_POSN                        equ 0000h
OSCCON2_CDIV_POSITION                    equ 0000h
OSCCON2_CDIV_SIZE                        equ 0004h
OSCCON2_CDIV_LENGTH                      equ 0004h
OSCCON2_CDIV_MASK                        equ 000Fh
OSCCON2_COSC_POSN                        equ 0004h
OSCCON2_COSC_POSITION                    equ 0004h
OSCCON2_COSC_SIZE                        equ 0003h
OSCCON2_COSC_LENGTH                      equ 0003h
OSCCON2_COSC_MASK                        equ 0070h
OSCCON2_CDIV0_POSN                       equ 0000h
OSCCON2_CDIV0_POSITION                   equ 0000h
OSCCON2_CDIV0_SIZE                       equ 0001h
OSCCON2_CDIV0_LENGTH                     equ 0001h
OSCCON2_CDIV0_MASK                       equ 0001h
OSCCON2_CDIV1_POSN                       equ 0001h
OSCCON2_CDIV1_POSITION                   equ 0001h
OSCCON2_CDIV1_SIZE                       equ 0001h
OSCCON2_CDIV1_LENGTH                     equ 0001h
OSCCON2_CDIV1_MASK                       equ 0002h
OSCCON2_CDIV2_POSN                       equ 0002h
OSCCON2_CDIV2_POSITION                   equ 0002h
OSCCON2_CDIV2_SIZE                       equ 0001h
OSCCON2_CDIV2_LENGTH                     equ 0001h
OSCCON2_CDIV2_MASK                       equ 0004h
OSCCON2_CDIV3_POSN                       equ 0003h
OSCCON2_CDIV3_POSITION                   equ 0003h
OSCCON2_CDIV3_SIZE                       equ 0001h
OSCCON2_CDIV3_LENGTH                     equ 0001h
OSCCON2_CDIV3_MASK                       equ 0008h
OSCCON2_COSC0_POSN                       equ 0004h
OSCCON2_COSC0_POSITION                   equ 0004h
OSCCON2_COSC0_SIZE                       equ 0001h
OSCCON2_COSC0_LENGTH                     equ 0001h
OSCCON2_COSC0_MASK                       equ 0010h
OSCCON2_COSC1_POSN                       equ 0005h
OSCCON2_COSC1_POSITION                   equ 0005h
OSCCON2_COSC1_SIZE                       equ 0001h
OSCCON2_COSC1_LENGTH                     equ 0001h
OSCCON2_COSC1_MASK                       equ 0020h
OSCCON2_COSC2_POSN                       equ 0006h
OSCCON2_COSC2_POSITION                   equ 0006h
OSCCON2_COSC2_SIZE                       equ 0001h
OSCCON2_COSC2_LENGTH                     equ 0001h
OSCCON2_COSC2_MASK                       equ 0040h

// Register: OSCCON3
#define OSCCON3 OSCCON3
OSCCON3                                  equ 091Bh
// bitfield definitions
OSCCON3_NOSCR_POSN                       equ 0003h
OSCCON3_NOSCR_POSITION                   equ 0003h
OSCCON3_NOSCR_SIZE                       equ 0001h
OSCCON3_NOSCR_LENGTH                     equ 0001h
OSCCON3_NOSCR_MASK                       equ 0008h
OSCCON3_ORDY_POSN                        equ 0004h
OSCCON3_ORDY_POSITION                    equ 0004h
OSCCON3_ORDY_SIZE                        equ 0001h
OSCCON3_ORDY_LENGTH                      equ 0001h
OSCCON3_ORDY_MASK                        equ 0010h
OSCCON3_SOSCBE_POSN                      equ 0005h
OSCCON3_SOSCBE_POSITION                  equ 0005h
OSCCON3_SOSCBE_SIZE                      equ 0001h
OSCCON3_SOSCBE_LENGTH                    equ 0001h
OSCCON3_SOSCBE_MASK                      equ 0020h
OSCCON3_SOSCPWR_POSN                     equ 0006h
OSCCON3_SOSCPWR_POSITION                 equ 0006h
OSCCON3_SOSCPWR_SIZE                     equ 0001h
OSCCON3_SOSCPWR_LENGTH                   equ 0001h
OSCCON3_SOSCPWR_MASK                     equ 0040h
OSCCON3_CSWHOLD_POSN                     equ 0007h
OSCCON3_CSWHOLD_POSITION                 equ 0007h
OSCCON3_CSWHOLD_SIZE                     equ 0001h
OSCCON3_CSWHOLD_LENGTH                   equ 0001h
OSCCON3_CSWHOLD_MASK                     equ 0080h

// Register: OSCSTAT1
#define OSCSTAT1 OSCSTAT1
OSCSTAT1                                 equ 091Ch
// bitfield definitions
OSCSTAT1_PLLR_POSN                       equ 0000h
OSCSTAT1_PLLR_POSITION                   equ 0000h
OSCSTAT1_PLLR_SIZE                       equ 0001h
OSCSTAT1_PLLR_LENGTH                     equ 0001h
OSCSTAT1_PLLR_MASK                       equ 0001h
OSCSTAT1_ADOR_POSN                       equ 0002h
OSCSTAT1_ADOR_POSITION                   equ 0002h
OSCSTAT1_ADOR_SIZE                       equ 0001h
OSCSTAT1_ADOR_LENGTH                     equ 0001h
OSCSTAT1_ADOR_MASK                       equ 0004h
OSCSTAT1_SOR_POSN                        equ 0003h
OSCSTAT1_SOR_POSITION                    equ 0003h
OSCSTAT1_SOR_SIZE                        equ 0001h
OSCSTAT1_SOR_LENGTH                      equ 0001h
OSCSTAT1_SOR_MASK                        equ 0008h
OSCSTAT1_LFOR_POSN                       equ 0004h
OSCSTAT1_LFOR_POSITION                   equ 0004h
OSCSTAT1_LFOR_SIZE                       equ 0001h
OSCSTAT1_LFOR_LENGTH                     equ 0001h
OSCSTAT1_LFOR_MASK                       equ 0010h
OSCSTAT1_HFOR_POSN                       equ 0006h
OSCSTAT1_HFOR_POSITION                   equ 0006h
OSCSTAT1_HFOR_SIZE                       equ 0001h
OSCSTAT1_HFOR_LENGTH                     equ 0001h
OSCSTAT1_HFOR_MASK                       equ 0040h
OSCSTAT1_EXTOR_POSN                      equ 0007h
OSCSTAT1_EXTOR_POSITION                  equ 0007h
OSCSTAT1_EXTOR_SIZE                      equ 0001h
OSCSTAT1_EXTOR_LENGTH                    equ 0001h
OSCSTAT1_EXTOR_MASK                      equ 0080h

// Register: OSCEN
#define OSCEN OSCEN
OSCEN                                    equ 091Dh
// bitfield definitions
OSCEN_ADOEN_POSN                         equ 0002h
OSCEN_ADOEN_POSITION                     equ 0002h
OSCEN_ADOEN_SIZE                         equ 0001h
OSCEN_ADOEN_LENGTH                       equ 0001h
OSCEN_ADOEN_MASK                         equ 0004h
OSCEN_SOSCEN_POSN                        equ 0003h
OSCEN_SOSCEN_POSITION                    equ 0003h
OSCEN_SOSCEN_SIZE                        equ 0001h
OSCEN_SOSCEN_LENGTH                      equ 0001h
OSCEN_SOSCEN_MASK                        equ 0008h
OSCEN_LFOEN_POSN                         equ 0004h
OSCEN_LFOEN_POSITION                     equ 0004h
OSCEN_LFOEN_SIZE                         equ 0001h
OSCEN_LFOEN_LENGTH                       equ 0001h
OSCEN_LFOEN_MASK                         equ 0010h
OSCEN_HFOEN_POSN                         equ 0006h
OSCEN_HFOEN_POSITION                     equ 0006h
OSCEN_HFOEN_SIZE                         equ 0001h
OSCEN_HFOEN_LENGTH                       equ 0001h
OSCEN_HFOEN_MASK                         equ 0040h
OSCEN_EXTOEN_POSN                        equ 0007h
OSCEN_EXTOEN_POSITION                    equ 0007h
OSCEN_EXTOEN_SIZE                        equ 0001h
OSCEN_EXTOEN_LENGTH                      equ 0001h
OSCEN_EXTOEN_MASK                        equ 0080h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 091Eh
// bitfield definitions
OSCTUNE_HFTUN_POSN                       equ 0000h
OSCTUNE_HFTUN_POSITION                   equ 0000h
OSCTUNE_HFTUN_SIZE                       equ 0006h
OSCTUNE_HFTUN_LENGTH                     equ 0006h
OSCTUNE_HFTUN_MASK                       equ 003Fh
OSCTUNE_HFTUN0_POSN                      equ 0000h
OSCTUNE_HFTUN0_POSITION                  equ 0000h
OSCTUNE_HFTUN0_SIZE                      equ 0001h
OSCTUNE_HFTUN0_LENGTH                    equ 0001h
OSCTUNE_HFTUN0_MASK                      equ 0001h
OSCTUNE_HFTUN1_POSN                      equ 0001h
OSCTUNE_HFTUN1_POSITION                  equ 0001h
OSCTUNE_HFTUN1_SIZE                      equ 0001h
OSCTUNE_HFTUN1_LENGTH                    equ 0001h
OSCTUNE_HFTUN1_MASK                      equ 0002h
OSCTUNE_HFTUN2_POSN                      equ 0002h
OSCTUNE_HFTUN2_POSITION                  equ 0002h
OSCTUNE_HFTUN2_SIZE                      equ 0001h
OSCTUNE_HFTUN2_LENGTH                    equ 0001h
OSCTUNE_HFTUN2_MASK                      equ 0004h
OSCTUNE_HFTUN3_POSN                      equ 0003h
OSCTUNE_HFTUN3_POSITION                  equ 0003h
OSCTUNE_HFTUN3_SIZE                      equ 0001h
OSCTUNE_HFTUN3_LENGTH                    equ 0001h
OSCTUNE_HFTUN3_MASK                      equ 0008h
OSCTUNE_HFTUN4_POSN                      equ 0004h
OSCTUNE_HFTUN4_POSITION                  equ 0004h
OSCTUNE_HFTUN4_SIZE                      equ 0001h
OSCTUNE_HFTUN4_LENGTH                    equ 0001h
OSCTUNE_HFTUN4_MASK                      equ 0010h
OSCTUNE_HFTUN5_POSN                      equ 0005h
OSCTUNE_HFTUN5_POSITION                  equ 0005h
OSCTUNE_HFTUN5_SIZE                      equ 0001h
OSCTUNE_HFTUN5_LENGTH                    equ 0001h
OSCTUNE_HFTUN5_MASK                      equ 0020h

// Register: OSCFRQ
#define OSCFRQ OSCFRQ
OSCFRQ                                   equ 091Fh
// bitfield definitions
OSCFRQ_HFFRQ_POSN                        equ 0000h
OSCFRQ_HFFRQ_POSITION                    equ 0000h
OSCFRQ_HFFRQ_SIZE                        equ 0004h
OSCFRQ_HFFRQ_LENGTH                      equ 0004h
OSCFRQ_HFFRQ_MASK                        equ 000Fh
OSCFRQ_HFFRQ0_POSN                       equ 0000h
OSCFRQ_HFFRQ0_POSITION                   equ 0000h
OSCFRQ_HFFRQ0_SIZE                       equ 0001h
OSCFRQ_HFFRQ0_LENGTH                     equ 0001h
OSCFRQ_HFFRQ0_MASK                       equ 0001h
OSCFRQ_HFFRQ1_POSN                       equ 0001h
OSCFRQ_HFFRQ1_POSITION                   equ 0001h
OSCFRQ_HFFRQ1_SIZE                       equ 0001h
OSCFRQ_HFFRQ1_LENGTH                     equ 0001h
OSCFRQ_HFFRQ1_MASK                       equ 0002h
OSCFRQ_HFFRQ2_POSN                       equ 0002h
OSCFRQ_HFFRQ2_POSITION                   equ 0002h
OSCFRQ_HFFRQ2_SIZE                       equ 0001h
OSCFRQ_HFFRQ2_LENGTH                     equ 0001h
OSCFRQ_HFFRQ2_MASK                       equ 0004h
OSCFRQ_HFFRQ3_POSN                       equ 0003h
OSCFRQ_HFFRQ3_POSITION                   equ 0003h
OSCFRQ_HFFRQ3_SIZE                       equ 0001h
OSCFRQ_HFFRQ3_LENGTH                     equ 0001h
OSCFRQ_HFFRQ3_MASK                       equ 0008h

// Register: PPSLOCK
#define PPSLOCK PPSLOCK
PPSLOCK                                  equ 0E0Fh
// bitfield definitions
PPSLOCK_PPSLOCKED_POSN                   equ 0000h
PPSLOCK_PPSLOCKED_POSITION               equ 0000h
PPSLOCK_PPSLOCKED_SIZE                   equ 0001h
PPSLOCK_PPSLOCKED_LENGTH                 equ 0001h
PPSLOCK_PPSLOCKED_MASK                   equ 0001h

// Register: INTPPS
#define INTPPS INTPPS
INTPPS                                   equ 0E10h
// bitfield definitions
INTPPS_INTPPS_POSN                       equ 0000h
INTPPS_INTPPS_POSITION                   equ 0000h
INTPPS_INTPPS_SIZE                       equ 0005h
INTPPS_INTPPS_LENGTH                     equ 0005h
INTPPS_INTPPS_MASK                       equ 001Fh
INTPPS_INTPPS0_POSN                      equ 0000h
INTPPS_INTPPS0_POSITION                  equ 0000h
INTPPS_INTPPS0_SIZE                      equ 0001h
INTPPS_INTPPS0_LENGTH                    equ 0001h
INTPPS_INTPPS0_MASK                      equ 0001h
INTPPS_INTPPS1_POSN                      equ 0001h
INTPPS_INTPPS1_POSITION                  equ 0001h
INTPPS_INTPPS1_SIZE                      equ 0001h
INTPPS_INTPPS1_LENGTH                    equ 0001h
INTPPS_INTPPS1_MASK                      equ 0002h
INTPPS_INTPPS2_POSN                      equ 0002h
INTPPS_INTPPS2_POSITION                  equ 0002h
INTPPS_INTPPS2_SIZE                      equ 0001h
INTPPS_INTPPS2_LENGTH                    equ 0001h
INTPPS_INTPPS2_MASK                      equ 0004h
INTPPS_INTPPS3_POSN                      equ 0003h
INTPPS_INTPPS3_POSITION                  equ 0003h
INTPPS_INTPPS3_SIZE                      equ 0001h
INTPPS_INTPPS3_LENGTH                    equ 0001h
INTPPS_INTPPS3_MASK                      equ 0008h
INTPPS_INTPPS4_POSN                      equ 0004h
INTPPS_INTPPS4_POSITION                  equ 0004h
INTPPS_INTPPS4_SIZE                      equ 0001h
INTPPS_INTPPS4_LENGTH                    equ 0001h
INTPPS_INTPPS4_MASK                      equ 0010h

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
T0CKIPPS                                 equ 0E11h
// bitfield definitions
T0CKIPPS_T0CKIPPS_POSN                   equ 0000h
T0CKIPPS_T0CKIPPS_POSITION               equ 0000h
T0CKIPPS_T0CKIPPS_SIZE                   equ 0005h
T0CKIPPS_T0CKIPPS_LENGTH                 equ 0005h
T0CKIPPS_T0CKIPPS_MASK                   equ 001Fh
T0CKIPPS_T0CKIPPS0_POSN                  equ 0000h
T0CKIPPS_T0CKIPPS0_POSITION              equ 0000h
T0CKIPPS_T0CKIPPS0_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS0_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS0_MASK                  equ 0001h
T0CKIPPS_T0CKIPPS1_POSN                  equ 0001h
T0CKIPPS_T0CKIPPS1_POSITION              equ 0001h
T0CKIPPS_T0CKIPPS1_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS1_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS1_MASK                  equ 0002h
T0CKIPPS_T0CKIPPS2_POSN                  equ 0002h
T0CKIPPS_T0CKIPPS2_POSITION              equ 0002h
T0CKIPPS_T0CKIPPS2_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS2_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS2_MASK                  equ 0004h
T0CKIPPS_T0CKIPPS3_POSN                  equ 0003h
T0CKIPPS_T0CKIPPS3_POSITION              equ 0003h
T0CKIPPS_T0CKIPPS3_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS3_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS3_MASK                  equ 0008h
T0CKIPPS_T0CKIPPS4_POSN                  equ 0004h
T0CKIPPS_T0CKIPPS4_POSITION              equ 0004h
T0CKIPPS_T0CKIPPS4_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS4_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS4_MASK                  equ 0010h

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
T1CKIPPS                                 equ 0E12h
// bitfield definitions
T1CKIPPS_T1CKIPPS_POSN                   equ 0000h
T1CKIPPS_T1CKIPPS_POSITION               equ 0000h
T1CKIPPS_T1CKIPPS_SIZE                   equ 0005h
T1CKIPPS_T1CKIPPS_LENGTH                 equ 0005h
T1CKIPPS_T1CKIPPS_MASK                   equ 001Fh
T1CKIPPS_T1CKIPPS0_POSN                  equ 0000h
T1CKIPPS_T1CKIPPS0_POSITION              equ 0000h
T1CKIPPS_T1CKIPPS0_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS0_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS0_MASK                  equ 0001h
T1CKIPPS_T1CKIPPS1_POSN                  equ 0001h
T1CKIPPS_T1CKIPPS1_POSITION              equ 0001h
T1CKIPPS_T1CKIPPS1_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS1_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS1_MASK                  equ 0002h
T1CKIPPS_T1CKIPPS2_POSN                  equ 0002h
T1CKIPPS_T1CKIPPS2_POSITION              equ 0002h
T1CKIPPS_T1CKIPPS2_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS2_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS2_MASK                  equ 0004h
T1CKIPPS_T1CKIPPS3_POSN                  equ 0003h
T1CKIPPS_T1CKIPPS3_POSITION              equ 0003h
T1CKIPPS_T1CKIPPS3_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS3_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS3_MASK                  equ 0008h
T1CKIPPS_T1CKIPPS4_POSN                  equ 0004h
T1CKIPPS_T1CKIPPS4_POSITION              equ 0004h
T1CKIPPS_T1CKIPPS4_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS4_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS4_MASK                  equ 0010h

// Register: T1GPPS
#define T1GPPS T1GPPS
T1GPPS                                   equ 0E13h
// bitfield definitions
T1GPPS_T1GPPS_POSN                       equ 0000h
T1GPPS_T1GPPS_POSITION                   equ 0000h
T1GPPS_T1GPPS_SIZE                       equ 0005h
T1GPPS_T1GPPS_LENGTH                     equ 0005h
T1GPPS_T1GPPS_MASK                       equ 001Fh
T1GPPS_T1GPPS0_POSN                      equ 0000h
T1GPPS_T1GPPS0_POSITION                  equ 0000h
T1GPPS_T1GPPS0_SIZE                      equ 0001h
T1GPPS_T1GPPS0_LENGTH                    equ 0001h
T1GPPS_T1GPPS0_MASK                      equ 0001h
T1GPPS_T1GPPS1_POSN                      equ 0001h
T1GPPS_T1GPPS1_POSITION                  equ 0001h
T1GPPS_T1GPPS1_SIZE                      equ 0001h
T1GPPS_T1GPPS1_LENGTH                    equ 0001h
T1GPPS_T1GPPS1_MASK                      equ 0002h
T1GPPS_T1GPPS2_POSN                      equ 0002h
T1GPPS_T1GPPS2_POSITION                  equ 0002h
T1GPPS_T1GPPS2_SIZE                      equ 0001h
T1GPPS_T1GPPS2_LENGTH                    equ 0001h
T1GPPS_T1GPPS2_MASK                      equ 0004h
T1GPPS_T1GPPS3_POSN                      equ 0003h
T1GPPS_T1GPPS3_POSITION                  equ 0003h
T1GPPS_T1GPPS3_SIZE                      equ 0001h
T1GPPS_T1GPPS3_LENGTH                    equ 0001h
T1GPPS_T1GPPS3_MASK                      equ 0008h
T1GPPS_T1GPPS4_POSN                      equ 0004h
T1GPPS_T1GPPS4_POSITION                  equ 0004h
T1GPPS_T1GPPS4_SIZE                      equ 0001h
T1GPPS_T1GPPS4_LENGTH                    equ 0001h
T1GPPS_T1GPPS4_MASK                      equ 0010h

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
CCP1PPS                                  equ 0E14h
// bitfield definitions
CCP1PPS_CCP1PPS_POSN                     equ 0000h
CCP1PPS_CCP1PPS_POSITION                 equ 0000h
CCP1PPS_CCP1PPS_SIZE                     equ 0005h
CCP1PPS_CCP1PPS_LENGTH                   equ 0005h
CCP1PPS_CCP1PPS_MASK                     equ 001Fh
CCP1PPS_CCP1PPS0_POSN                    equ 0000h
CCP1PPS_CCP1PPS0_POSITION                equ 0000h
CCP1PPS_CCP1PPS0_SIZE                    equ 0001h
CCP1PPS_CCP1PPS0_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS0_MASK                    equ 0001h
CCP1PPS_CCP1PPS1_POSN                    equ 0001h
CCP1PPS_CCP1PPS1_POSITION                equ 0001h
CCP1PPS_CCP1PPS1_SIZE                    equ 0001h
CCP1PPS_CCP1PPS1_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS1_MASK                    equ 0002h
CCP1PPS_CCP1PPS2_POSN                    equ 0002h
CCP1PPS_CCP1PPS2_POSITION                equ 0002h
CCP1PPS_CCP1PPS2_SIZE                    equ 0001h
CCP1PPS_CCP1PPS2_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS2_MASK                    equ 0004h
CCP1PPS_CCP1PPS3_POSN                    equ 0003h
CCP1PPS_CCP1PPS3_POSITION                equ 0003h
CCP1PPS_CCP1PPS3_SIZE                    equ 0001h
CCP1PPS_CCP1PPS3_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS3_MASK                    equ 0008h
CCP1PPS_CCP1PPS4_POSN                    equ 0004h
CCP1PPS_CCP1PPS4_POSITION                equ 0004h
CCP1PPS_CCP1PPS4_SIZE                    equ 0001h
CCP1PPS_CCP1PPS4_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS4_MASK                    equ 0010h

// Register: CCP2PPS
#define CCP2PPS CCP2PPS
CCP2PPS                                  equ 0E15h
// bitfield definitions
CCP2PPS_CCP2PPS_POSN                     equ 0000h
CCP2PPS_CCP2PPS_POSITION                 equ 0000h
CCP2PPS_CCP2PPS_SIZE                     equ 0005h
CCP2PPS_CCP2PPS_LENGTH                   equ 0005h
CCP2PPS_CCP2PPS_MASK                     equ 001Fh
CCP2PPS_CCP2PPS0_POSN                    equ 0000h
CCP2PPS_CCP2PPS0_POSITION                equ 0000h
CCP2PPS_CCP2PPS0_SIZE                    equ 0001h
CCP2PPS_CCP2PPS0_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS0_MASK                    equ 0001h
CCP2PPS_CCP2PPS1_POSN                    equ 0001h
CCP2PPS_CCP2PPS1_POSITION                equ 0001h
CCP2PPS_CCP2PPS1_SIZE                    equ 0001h
CCP2PPS_CCP2PPS1_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS1_MASK                    equ 0002h
CCP2PPS_CCP2PPS2_POSN                    equ 0002h
CCP2PPS_CCP2PPS2_POSITION                equ 0002h
CCP2PPS_CCP2PPS2_SIZE                    equ 0001h
CCP2PPS_CCP2PPS2_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS2_MASK                    equ 0004h
CCP2PPS_CCP2PPS3_POSN                    equ 0003h
CCP2PPS_CCP2PPS3_POSITION                equ 0003h
CCP2PPS_CCP2PPS3_SIZE                    equ 0001h
CCP2PPS_CCP2PPS3_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS3_MASK                    equ 0008h
CCP2PPS_CCP2PPS4_POSN                    equ 0004h
CCP2PPS_CCP2PPS4_POSITION                equ 0004h
CCP2PPS_CCP2PPS4_SIZE                    equ 0001h
CCP2PPS_CCP2PPS4_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS4_MASK                    equ 0010h

// Register: CCP3PPS
#define CCP3PPS CCP3PPS
CCP3PPS                                  equ 0E16h
// bitfield definitions
CCP3PPS_CCP3PPS_POSN                     equ 0000h
CCP3PPS_CCP3PPS_POSITION                 equ 0000h
CCP3PPS_CCP3PPS_SIZE                     equ 0005h
CCP3PPS_CCP3PPS_LENGTH                   equ 0005h
CCP3PPS_CCP3PPS_MASK                     equ 001Fh
CCP3PPS_CCP3PPS0_POSN                    equ 0000h
CCP3PPS_CCP3PPS0_POSITION                equ 0000h
CCP3PPS_CCP3PPS0_SIZE                    equ 0001h
CCP3PPS_CCP3PPS0_LENGTH                  equ 0001h
CCP3PPS_CCP3PPS0_MASK                    equ 0001h
CCP3PPS_CCP3PPS1_POSN                    equ 0001h
CCP3PPS_CCP3PPS1_POSITION                equ 0001h
CCP3PPS_CCP3PPS1_SIZE                    equ 0001h
CCP3PPS_CCP3PPS1_LENGTH                  equ 0001h
CCP3PPS_CCP3PPS1_MASK                    equ 0002h
CCP3PPS_CCP3PPS2_POSN                    equ 0002h
CCP3PPS_CCP3PPS2_POSITION                equ 0002h
CCP3PPS_CCP3PPS2_SIZE                    equ 0001h
CCP3PPS_CCP3PPS2_LENGTH                  equ 0001h
CCP3PPS_CCP3PPS2_MASK                    equ 0004h
CCP3PPS_CCP3PPS3_POSN                    equ 0003h
CCP3PPS_CCP3PPS3_POSITION                equ 0003h
CCP3PPS_CCP3PPS3_SIZE                    equ 0001h
CCP3PPS_CCP3PPS3_LENGTH                  equ 0001h
CCP3PPS_CCP3PPS3_MASK                    equ 0008h
CCP3PPS_CCP3PPS4_POSN                    equ 0004h
CCP3PPS_CCP3PPS4_POSITION                equ 0004h
CCP3PPS_CCP3PPS4_SIZE                    equ 0001h
CCP3PPS_CCP3PPS4_LENGTH                  equ 0001h
CCP3PPS_CCP3PPS4_MASK                    equ 0010h

// Register: CCP4PPS
#define CCP4PPS CCP4PPS
CCP4PPS                                  equ 0E17h
// bitfield definitions
CCP4PPS_CCP4PPS_POSN                     equ 0000h
CCP4PPS_CCP4PPS_POSITION                 equ 0000h
CCP4PPS_CCP4PPS_SIZE                     equ 0005h
CCP4PPS_CCP4PPS_LENGTH                   equ 0005h
CCP4PPS_CCP4PPS_MASK                     equ 001Fh
CCP4PPS_CCP4PPS0_POSN                    equ 0000h
CCP4PPS_CCP4PPS0_POSITION                equ 0000h
CCP4PPS_CCP4PPS0_SIZE                    equ 0001h
CCP4PPS_CCP4PPS0_LENGTH                  equ 0001h
CCP4PPS_CCP4PPS0_MASK                    equ 0001h
CCP4PPS_CCP4PPS1_POSN                    equ 0001h
CCP4PPS_CCP4PPS1_POSITION                equ 0001h
CCP4PPS_CCP4PPS1_SIZE                    equ 0001h
CCP4PPS_CCP4PPS1_LENGTH                  equ 0001h
CCP4PPS_CCP4PPS1_MASK                    equ 0002h
CCP4PPS_CCP4PPS2_POSN                    equ 0002h
CCP4PPS_CCP4PPS2_POSITION                equ 0002h
CCP4PPS_CCP4PPS2_SIZE                    equ 0001h
CCP4PPS_CCP4PPS2_LENGTH                  equ 0001h
CCP4PPS_CCP4PPS2_MASK                    equ 0004h
CCP4PPS_CCP4PPS3_POSN                    equ 0003h
CCP4PPS_CCP4PPS3_POSITION                equ 0003h
CCP4PPS_CCP4PPS3_SIZE                    equ 0001h
CCP4PPS_CCP4PPS3_LENGTH                  equ 0001h
CCP4PPS_CCP4PPS3_MASK                    equ 0008h
CCP4PPS_CCP4PPS4_POSN                    equ 0004h
CCP4PPS_CCP4PPS4_POSITION                equ 0004h
CCP4PPS_CCP4PPS4_SIZE                    equ 0001h
CCP4PPS_CCP4PPS4_LENGTH                  equ 0001h
CCP4PPS_CCP4PPS4_MASK                    equ 0010h

// Register: CWG1PPS
#define CWG1PPS CWG1PPS
CWG1PPS                                  equ 0E18h
// bitfield definitions
CWG1PPS_CWG1PPS_POSN                     equ 0000h
CWG1PPS_CWG1PPS_POSITION                 equ 0000h
CWG1PPS_CWG1PPS_SIZE                     equ 0005h
CWG1PPS_CWG1PPS_LENGTH                   equ 0005h
CWG1PPS_CWG1PPS_MASK                     equ 001Fh
CWG1PPS_CWG1PPS0_POSN                    equ 0000h
CWG1PPS_CWG1PPS0_POSITION                equ 0000h
CWG1PPS_CWG1PPS0_SIZE                    equ 0001h
CWG1PPS_CWG1PPS0_LENGTH                  equ 0001h
CWG1PPS_CWG1PPS0_MASK                    equ 0001h
CWG1PPS_CWG1PPS1_POSN                    equ 0001h
CWG1PPS_CWG1PPS1_POSITION                equ 0001h
CWG1PPS_CWG1PPS1_SIZE                    equ 0001h
CWG1PPS_CWG1PPS1_LENGTH                  equ 0001h
CWG1PPS_CWG1PPS1_MASK                    equ 0002h
CWG1PPS_CWG1PPS2_POSN                    equ 0002h
CWG1PPS_CWG1PPS2_POSITION                equ 0002h
CWG1PPS_CWG1PPS2_SIZE                    equ 0001h
CWG1PPS_CWG1PPS2_LENGTH                  equ 0001h
CWG1PPS_CWG1PPS2_MASK                    equ 0004h
CWG1PPS_CWG1PPS3_POSN                    equ 0003h
CWG1PPS_CWG1PPS3_POSITION                equ 0003h
CWG1PPS_CWG1PPS3_SIZE                    equ 0001h
CWG1PPS_CWG1PPS3_LENGTH                  equ 0001h
CWG1PPS_CWG1PPS3_MASK                    equ 0008h
CWG1PPS_CWG1PPS4_POSN                    equ 0004h
CWG1PPS_CWG1PPS4_POSITION                equ 0004h
CWG1PPS_CWG1PPS4_SIZE                    equ 0001h
CWG1PPS_CWG1PPS4_LENGTH                  equ 0001h
CWG1PPS_CWG1PPS4_MASK                    equ 0010h

// Register: CWG2PPS
#define CWG2PPS CWG2PPS
CWG2PPS                                  equ 0E19h
// bitfield definitions
CWG2PPS_CWG2PPS_POSN                     equ 0000h
CWG2PPS_CWG2PPS_POSITION                 equ 0000h
CWG2PPS_CWG2PPS_SIZE                     equ 0005h
CWG2PPS_CWG2PPS_LENGTH                   equ 0005h
CWG2PPS_CWG2PPS_MASK                     equ 001Fh
CWG2PPS_CWG2PPS0_POSN                    equ 0000h
CWG2PPS_CWG2PPS0_POSITION                equ 0000h
CWG2PPS_CWG2PPS0_SIZE                    equ 0001h
CWG2PPS_CWG2PPS0_LENGTH                  equ 0001h
CWG2PPS_CWG2PPS0_MASK                    equ 0001h
CWG2PPS_CWG2PPS1_POSN                    equ 0001h
CWG2PPS_CWG2PPS1_POSITION                equ 0001h
CWG2PPS_CWG2PPS1_SIZE                    equ 0001h
CWG2PPS_CWG2PPS1_LENGTH                  equ 0001h
CWG2PPS_CWG2PPS1_MASK                    equ 0002h
CWG2PPS_CWG2PPS2_POSN                    equ 0002h
CWG2PPS_CWG2PPS2_POSITION                equ 0002h
CWG2PPS_CWG2PPS2_SIZE                    equ 0001h
CWG2PPS_CWG2PPS2_LENGTH                  equ 0001h
CWG2PPS_CWG2PPS2_MASK                    equ 0004h
CWG2PPS_CWG2PPS3_POSN                    equ 0003h
CWG2PPS_CWG2PPS3_POSITION                equ 0003h
CWG2PPS_CWG2PPS3_SIZE                    equ 0001h
CWG2PPS_CWG2PPS3_LENGTH                  equ 0001h
CWG2PPS_CWG2PPS3_MASK                    equ 0008h
CWG2PPS_CWG2PPS4_POSN                    equ 0004h
CWG2PPS_CWG2PPS4_POSITION                equ 0004h
CWG2PPS_CWG2PPS4_SIZE                    equ 0001h
CWG2PPS_CWG2PPS4_LENGTH                  equ 0001h
CWG2PPS_CWG2PPS4_MASK                    equ 0010h

// Register: MDCIN1PPS
#define MDCIN1PPS MDCIN1PPS
MDCIN1PPS                                equ 0E1Ah
// bitfield definitions
MDCIN1PPS_MDCIN1PPS_POSN                 equ 0000h
MDCIN1PPS_MDCIN1PPS_POSITION             equ 0000h
MDCIN1PPS_MDCIN1PPS_SIZE                 equ 0005h
MDCIN1PPS_MDCIN1PPS_LENGTH               equ 0005h
MDCIN1PPS_MDCIN1PPS_MASK                 equ 001Fh
MDCIN1PPS_MDCIN1PPS0_POSN                equ 0000h
MDCIN1PPS_MDCIN1PPS0_POSITION            equ 0000h
MDCIN1PPS_MDCIN1PPS0_SIZE                equ 0001h
MDCIN1PPS_MDCIN1PPS0_LENGTH              equ 0001h
MDCIN1PPS_MDCIN1PPS0_MASK                equ 0001h
MDCIN1PPS_MDCIN1PPS1_POSN                equ 0001h
MDCIN1PPS_MDCIN1PPS1_POSITION            equ 0001h
MDCIN1PPS_MDCIN1PPS1_SIZE                equ 0001h
MDCIN1PPS_MDCIN1PPS1_LENGTH              equ 0001h
MDCIN1PPS_MDCIN1PPS1_MASK                equ 0002h
MDCIN1PPS_MDCIN1PPS2_POSN                equ 0002h
MDCIN1PPS_MDCIN1PPS2_POSITION            equ 0002h
MDCIN1PPS_MDCIN1PPS2_SIZE                equ 0001h
MDCIN1PPS_MDCIN1PPS2_LENGTH              equ 0001h
MDCIN1PPS_MDCIN1PPS2_MASK                equ 0004h
MDCIN1PPS_MDCIN1PPS3_POSN                equ 0003h
MDCIN1PPS_MDCIN1PPS3_POSITION            equ 0003h
MDCIN1PPS_MDCIN1PPS3_SIZE                equ 0001h
MDCIN1PPS_MDCIN1PPS3_LENGTH              equ 0001h
MDCIN1PPS_MDCIN1PPS3_MASK                equ 0008h
MDCIN1PPS_MDCIN1PPS4_POSN                equ 0004h
MDCIN1PPS_MDCIN1PPS4_POSITION            equ 0004h
MDCIN1PPS_MDCIN1PPS4_SIZE                equ 0001h
MDCIN1PPS_MDCIN1PPS4_LENGTH              equ 0001h
MDCIN1PPS_MDCIN1PPS4_MASK                equ 0010h

// Register: MDCIN2PPS
#define MDCIN2PPS MDCIN2PPS
MDCIN2PPS                                equ 0E1Bh
// bitfield definitions
MDCIN2PPS_MDCIN2PPS_POSN                 equ 0000h
MDCIN2PPS_MDCIN2PPS_POSITION             equ 0000h
MDCIN2PPS_MDCIN2PPS_SIZE                 equ 0005h
MDCIN2PPS_MDCIN2PPS_LENGTH               equ 0005h
MDCIN2PPS_MDCIN2PPS_MASK                 equ 001Fh
MDCIN2PPS_MDCIN2PPS0_POSN                equ 0000h
MDCIN2PPS_MDCIN2PPS0_POSITION            equ 0000h
MDCIN2PPS_MDCIN2PPS0_SIZE                equ 0001h
MDCIN2PPS_MDCIN2PPS0_LENGTH              equ 0001h
MDCIN2PPS_MDCIN2PPS0_MASK                equ 0001h
MDCIN2PPS_MDCIN2PPS1_POSN                equ 0001h
MDCIN2PPS_MDCIN2PPS1_POSITION            equ 0001h
MDCIN2PPS_MDCIN2PPS1_SIZE                equ 0001h
MDCIN2PPS_MDCIN2PPS1_LENGTH              equ 0001h
MDCIN2PPS_MDCIN2PPS1_MASK                equ 0002h
MDCIN2PPS_MDCIN2PPS2_POSN                equ 0002h
MDCIN2PPS_MDCIN2PPS2_POSITION            equ 0002h
MDCIN2PPS_MDCIN2PPS2_SIZE                equ 0001h
MDCIN2PPS_MDCIN2PPS2_LENGTH              equ 0001h
MDCIN2PPS_MDCIN2PPS2_MASK                equ 0004h
MDCIN2PPS_MDCIN2PPS3_POSN                equ 0003h
MDCIN2PPS_MDCIN2PPS3_POSITION            equ 0003h
MDCIN2PPS_MDCIN2PPS3_SIZE                equ 0001h
MDCIN2PPS_MDCIN2PPS3_LENGTH              equ 0001h
MDCIN2PPS_MDCIN2PPS3_MASK                equ 0008h
MDCIN2PPS_MDCIN2PPS4_POSN                equ 0004h
MDCIN2PPS_MDCIN2PPS4_POSITION            equ 0004h
MDCIN2PPS_MDCIN2PPS4_SIZE                equ 0001h
MDCIN2PPS_MDCIN2PPS4_LENGTH              equ 0001h
MDCIN2PPS_MDCIN2PPS4_MASK                equ 0010h

// Register: MDMINPPS
#define MDMINPPS MDMINPPS
MDMINPPS                                 equ 0E1Ch
// bitfield definitions
MDMINPPS_MDMINPPS_POSN                   equ 0000h
MDMINPPS_MDMINPPS_POSITION               equ 0000h
MDMINPPS_MDMINPPS_SIZE                   equ 0005h
MDMINPPS_MDMINPPS_LENGTH                 equ 0005h
MDMINPPS_MDMINPPS_MASK                   equ 001Fh
MDMINPPS_MDMINPPS0_POSN                  equ 0000h
MDMINPPS_MDMINPPS0_POSITION              equ 0000h
MDMINPPS_MDMINPPS0_SIZE                  equ 0001h
MDMINPPS_MDMINPPS0_LENGTH                equ 0001h
MDMINPPS_MDMINPPS0_MASK                  equ 0001h
MDMINPPS_MDMINPPS1_POSN                  equ 0001h
MDMINPPS_MDMINPPS1_POSITION              equ 0001h
MDMINPPS_MDMINPPS1_SIZE                  equ 0001h
MDMINPPS_MDMINPPS1_LENGTH                equ 0001h
MDMINPPS_MDMINPPS1_MASK                  equ 0002h
MDMINPPS_MDMINPPS2_POSN                  equ 0002h
MDMINPPS_MDMINPPS2_POSITION              equ 0002h
MDMINPPS_MDMINPPS2_SIZE                  equ 0001h
MDMINPPS_MDMINPPS2_LENGTH                equ 0001h
MDMINPPS_MDMINPPS2_MASK                  equ 0004h
MDMINPPS_MDMINPPS3_POSN                  equ 0003h
MDMINPPS_MDMINPPS3_POSITION              equ 0003h
MDMINPPS_MDMINPPS3_SIZE                  equ 0001h
MDMINPPS_MDMINPPS3_LENGTH                equ 0001h
MDMINPPS_MDMINPPS3_MASK                  equ 0008h
MDMINPPS_MDMINPPS4_POSN                  equ 0004h
MDMINPPS_MDMINPPS4_POSITION              equ 0004h
MDMINPPS_MDMINPPS4_SIZE                  equ 0001h
MDMINPPS_MDMINPPS4_LENGTH                equ 0001h
MDMINPPS_MDMINPPS4_MASK                  equ 0010h

// Register: SSP2CLKPPS
#define SSP2CLKPPS SSP2CLKPPS
SSP2CLKPPS                               equ 0E1Dh
// bitfield definitions
SSP2CLKPPS_SSP2CLKPPS_POSN               equ 0000h
SSP2CLKPPS_SSP2CLKPPS_POSITION           equ 0000h
SSP2CLKPPS_SSP2CLKPPS_SIZE               equ 0005h
SSP2CLKPPS_SSP2CLKPPS_LENGTH             equ 0005h
SSP2CLKPPS_SSP2CLKPPS_MASK               equ 001Fh
SSP2CLKPPS_SSP2CLKPPS0_POSN              equ 0000h
SSP2CLKPPS_SSP2CLKPPS0_POSITION          equ 0000h
SSP2CLKPPS_SSP2CLKPPS0_SIZE              equ 0001h
SSP2CLKPPS_SSP2CLKPPS0_LENGTH            equ 0001h
SSP2CLKPPS_SSP2CLKPPS0_MASK              equ 0001h
SSP2CLKPPS_SSP2CLKPPS1_POSN              equ 0001h
SSP2CLKPPS_SSP2CLKPPS1_POSITION          equ 0001h
SSP2CLKPPS_SSP2CLKPPS1_SIZE              equ 0001h
SSP2CLKPPS_SSP2CLKPPS1_LENGTH            equ 0001h
SSP2CLKPPS_SSP2CLKPPS1_MASK              equ 0002h
SSP2CLKPPS_SSP2CLKPPS2_POSN              equ 0002h
SSP2CLKPPS_SSP2CLKPPS2_POSITION          equ 0002h
SSP2CLKPPS_SSP2CLKPPS2_SIZE              equ 0001h
SSP2CLKPPS_SSP2CLKPPS2_LENGTH            equ 0001h
SSP2CLKPPS_SSP2CLKPPS2_MASK              equ 0004h
SSP2CLKPPS_SSP2CLKPPS3_POSN              equ 0003h
SSP2CLKPPS_SSP2CLKPPS3_POSITION          equ 0003h
SSP2CLKPPS_SSP2CLKPPS3_SIZE              equ 0001h
SSP2CLKPPS_SSP2CLKPPS3_LENGTH            equ 0001h
SSP2CLKPPS_SSP2CLKPPS3_MASK              equ 0008h
SSP2CLKPPS_SSP2CLKPPS4_POSN              equ 0004h
SSP2CLKPPS_SSP2CLKPPS4_POSITION          equ 0004h
SSP2CLKPPS_SSP2CLKPPS4_SIZE              equ 0001h
SSP2CLKPPS_SSP2CLKPPS4_LENGTH            equ 0001h
SSP2CLKPPS_SSP2CLKPPS4_MASK              equ 0010h

// Register: SSP2DATPPS
#define SSP2DATPPS SSP2DATPPS
SSP2DATPPS                               equ 0E1Eh
// bitfield definitions
SSP2DATPPS_SSP2DATPPS_POSN               equ 0000h
SSP2DATPPS_SSP2DATPPS_POSITION           equ 0000h
SSP2DATPPS_SSP2DATPPS_SIZE               equ 0005h
SSP2DATPPS_SSP2DATPPS_LENGTH             equ 0005h
SSP2DATPPS_SSP2DATPPS_MASK               equ 001Fh
SSP2DATPPS_SSP2DATPPS0_POSN              equ 0000h
SSP2DATPPS_SSP2DATPPS0_POSITION          equ 0000h
SSP2DATPPS_SSP2DATPPS0_SIZE              equ 0001h
SSP2DATPPS_SSP2DATPPS0_LENGTH            equ 0001h
SSP2DATPPS_SSP2DATPPS0_MASK              equ 0001h
SSP2DATPPS_SSP2DATPPS1_POSN              equ 0001h
SSP2DATPPS_SSP2DATPPS1_POSITION          equ 0001h
SSP2DATPPS_SSP2DATPPS1_SIZE              equ 0001h
SSP2DATPPS_SSP2DATPPS1_LENGTH            equ 0001h
SSP2DATPPS_SSP2DATPPS1_MASK              equ 0002h
SSP2DATPPS_SSP2DATPPS2_POSN              equ 0002h
SSP2DATPPS_SSP2DATPPS2_POSITION          equ 0002h
SSP2DATPPS_SSP2DATPPS2_SIZE              equ 0001h
SSP2DATPPS_SSP2DATPPS2_LENGTH            equ 0001h
SSP2DATPPS_SSP2DATPPS2_MASK              equ 0004h
SSP2DATPPS_SSP2DATPPS3_POSN              equ 0003h
SSP2DATPPS_SSP2DATPPS3_POSITION          equ 0003h
SSP2DATPPS_SSP2DATPPS3_SIZE              equ 0001h
SSP2DATPPS_SSP2DATPPS3_LENGTH            equ 0001h
SSP2DATPPS_SSP2DATPPS3_MASK              equ 0008h
SSP2DATPPS_SSP2DATPPS4_POSN              equ 0004h
SSP2DATPPS_SSP2DATPPS4_POSITION          equ 0004h
SSP2DATPPS_SSP2DATPPS4_SIZE              equ 0001h
SSP2DATPPS_SSP2DATPPS4_LENGTH            equ 0001h
SSP2DATPPS_SSP2DATPPS4_MASK              equ 0010h

// Register: SSP2SSPPS
#define SSP2SSPPS SSP2SSPPS
SSP2SSPPS                                equ 0E1Fh
// bitfield definitions
SSP2SSPPS_SSP2SSPPS_POSN                 equ 0000h
SSP2SSPPS_SSP2SSPPS_POSITION             equ 0000h
SSP2SSPPS_SSP2SSPPS_SIZE                 equ 0005h
SSP2SSPPS_SSP2SSPPS_LENGTH               equ 0005h
SSP2SSPPS_SSP2SSPPS_MASK                 equ 001Fh
SSP2SSPPS_SSP2SSPPS0_POSN                equ 0000h
SSP2SSPPS_SSP2SSPPS0_POSITION            equ 0000h
SSP2SSPPS_SSP2SSPPS0_SIZE                equ 0001h
SSP2SSPPS_SSP2SSPPS0_LENGTH              equ 0001h
SSP2SSPPS_SSP2SSPPS0_MASK                equ 0001h
SSP2SSPPS_SSP2SSPPS1_POSN                equ 0001h
SSP2SSPPS_SSP2SSPPS1_POSITION            equ 0001h
SSP2SSPPS_SSP2SSPPS1_SIZE                equ 0001h
SSP2SSPPS_SSP2SSPPS1_LENGTH              equ 0001h
SSP2SSPPS_SSP2SSPPS1_MASK                equ 0002h
SSP2SSPPS_SSP2SSPPS2_POSN                equ 0002h
SSP2SSPPS_SSP2SSPPS2_POSITION            equ 0002h
SSP2SSPPS_SSP2SSPPS2_SIZE                equ 0001h
SSP2SSPPS_SSP2SSPPS2_LENGTH              equ 0001h
SSP2SSPPS_SSP2SSPPS2_MASK                equ 0004h
SSP2SSPPS_SSP2SSPPS3_POSN                equ 0003h
SSP2SSPPS_SSP2SSPPS3_POSITION            equ 0003h
SSP2SSPPS_SSP2SSPPS3_SIZE                equ 0001h
SSP2SSPPS_SSP2SSPPS3_LENGTH              equ 0001h
SSP2SSPPS_SSP2SSPPS3_MASK                equ 0008h
SSP2SSPPS_SSP2SSPPS4_POSN                equ 0004h
SSP2SSPPS_SSP2SSPPS4_POSITION            equ 0004h
SSP2SSPPS_SSP2SSPPS4_SIZE                equ 0001h
SSP2SSPPS_SSP2SSPPS4_LENGTH              equ 0001h
SSP2SSPPS_SSP2SSPPS4_MASK                equ 0010h

// Register: SSP1CLKPPS
#define SSP1CLKPPS SSP1CLKPPS
SSP1CLKPPS                               equ 0E20h
// bitfield definitions
SSP1CLKPPS_SSP1CLKPPS_POSN               equ 0000h
SSP1CLKPPS_SSP1CLKPPS_POSITION           equ 0000h
SSP1CLKPPS_SSP1CLKPPS_SIZE               equ 0005h
SSP1CLKPPS_SSP1CLKPPS_LENGTH             equ 0005h
SSP1CLKPPS_SSP1CLKPPS_MASK               equ 001Fh
SSP1CLKPPS_SSP1CLKPPS0_POSN              equ 0000h
SSP1CLKPPS_SSP1CLKPPS0_POSITION          equ 0000h
SSP1CLKPPS_SSP1CLKPPS0_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS0_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS0_MASK              equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_POSN              equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_POSITION          equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_MASK              equ 0002h
SSP1CLKPPS_SSP1CLKPPS2_POSN              equ 0002h
SSP1CLKPPS_SSP1CLKPPS2_POSITION          equ 0002h
SSP1CLKPPS_SSP1CLKPPS2_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS2_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS2_MASK              equ 0004h
SSP1CLKPPS_SSP1CLKPPS3_POSN              equ 0003h
SSP1CLKPPS_SSP1CLKPPS3_POSITION          equ 0003h
SSP1CLKPPS_SSP1CLKPPS3_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS3_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS3_MASK              equ 0008h
SSP1CLKPPS_SSP1CLKPPS4_POSN              equ 0004h
SSP1CLKPPS_SSP1CLKPPS4_POSITION          equ 0004h
SSP1CLKPPS_SSP1CLKPPS4_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS4_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS4_MASK              equ 0010h

// Register: SSP1DATPPS
#define SSP1DATPPS SSP1DATPPS
SSP1DATPPS                               equ 0E21h
// bitfield definitions
SSP1DATPPS_SSP1DATPPS_POSN               equ 0000h
SSP1DATPPS_SSP1DATPPS_POSITION           equ 0000h
SSP1DATPPS_SSP1DATPPS_SIZE               equ 0005h
SSP1DATPPS_SSP1DATPPS_LENGTH             equ 0005h
SSP1DATPPS_SSP1DATPPS_MASK               equ 001Fh
SSP1DATPPS_SSP1DATPPS0_POSN              equ 0000h
SSP1DATPPS_SSP1DATPPS0_POSITION          equ 0000h
SSP1DATPPS_SSP1DATPPS0_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS0_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS0_MASK              equ 0001h
SSP1DATPPS_SSP1DATPPS1_POSN              equ 0001h
SSP1DATPPS_SSP1DATPPS1_POSITION          equ 0001h
SSP1DATPPS_SSP1DATPPS1_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS1_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS1_MASK              equ 0002h
SSP1DATPPS_SSP1DATPPS2_POSN              equ 0002h
SSP1DATPPS_SSP1DATPPS2_POSITION          equ 0002h
SSP1DATPPS_SSP1DATPPS2_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS2_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS2_MASK              equ 0004h
SSP1DATPPS_SSP1DATPPS3_POSN              equ 0003h
SSP1DATPPS_SSP1DATPPS3_POSITION          equ 0003h
SSP1DATPPS_SSP1DATPPS3_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS3_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS3_MASK              equ 0008h
SSP1DATPPS_SSP1DATPPS4_POSN              equ 0004h
SSP1DATPPS_SSP1DATPPS4_POSITION          equ 0004h
SSP1DATPPS_SSP1DATPPS4_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS4_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS4_MASK              equ 0010h

// Register: SSP1SSPPS
#define SSP1SSPPS SSP1SSPPS
SSP1SSPPS                                equ 0E22h
// bitfield definitions
SSP1SSPPS_SSP1SSPPS_POSN                 equ 0000h
SSP1SSPPS_SSP1SSPPS_POSITION             equ 0000h
SSP1SSPPS_SSP1SSPPS_SIZE                 equ 0005h
SSP1SSPPS_SSP1SSPPS_LENGTH               equ 0005h
SSP1SSPPS_SSP1SSPPS_MASK                 equ 001Fh
SSP1SSPPS_SSP1SSPPS0_POSN                equ 0000h
SSP1SSPPS_SSP1SSPPS0_POSITION            equ 0000h
SSP1SSPPS_SSP1SSPPS0_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS0_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS0_MASK                equ 0001h
SSP1SSPPS_SSP1SSPPS1_POSN                equ 0001h
SSP1SSPPS_SSP1SSPPS1_POSITION            equ 0001h
SSP1SSPPS_SSP1SSPPS1_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS1_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS1_MASK                equ 0002h
SSP1SSPPS_SSP1SSPPS2_POSN                equ 0002h
SSP1SSPPS_SSP1SSPPS2_POSITION            equ 0002h
SSP1SSPPS_SSP1SSPPS2_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS2_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS2_MASK                equ 0004h
SSP1SSPPS_SSP1SSPPS3_POSN                equ 0003h
SSP1SSPPS_SSP1SSPPS3_POSITION            equ 0003h
SSP1SSPPS_SSP1SSPPS3_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS3_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS3_MASK                equ 0008h
SSP1SSPPS_SSP1SSPPS4_POSN                equ 0004h
SSP1SSPPS_SSP1SSPPS4_POSITION            equ 0004h
SSP1SSPPS_SSP1SSPPS4_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS4_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS4_MASK                equ 0010h

// Register: RXPPS
#define RXPPS RXPPS
RXPPS                                    equ 0E24h
// bitfield definitions
RXPPS_RXPPS_POSN                         equ 0000h
RXPPS_RXPPS_POSITION                     equ 0000h
RXPPS_RXPPS_SIZE                         equ 0005h
RXPPS_RXPPS_LENGTH                       equ 0005h
RXPPS_RXPPS_MASK                         equ 001Fh
RXPPS_RXDTPPS0_POSN                      equ 0000h
RXPPS_RXDTPPS0_POSITION                  equ 0000h
RXPPS_RXDTPPS0_SIZE                      equ 0001h
RXPPS_RXDTPPS0_LENGTH                    equ 0001h
RXPPS_RXDTPPS0_MASK                      equ 0001h
RXPPS_RXDTPPS1_POSN                      equ 0001h
RXPPS_RXDTPPS1_POSITION                  equ 0001h
RXPPS_RXDTPPS1_SIZE                      equ 0001h
RXPPS_RXDTPPS1_LENGTH                    equ 0001h
RXPPS_RXDTPPS1_MASK                      equ 0002h
RXPPS_RXDTPPS2_POSN                      equ 0002h
RXPPS_RXDTPPS2_POSITION                  equ 0002h
RXPPS_RXDTPPS2_SIZE                      equ 0001h
RXPPS_RXDTPPS2_LENGTH                    equ 0001h
RXPPS_RXDTPPS2_MASK                      equ 0004h
RXPPS_RXDTPPS3_POSN                      equ 0003h
RXPPS_RXDTPPS3_POSITION                  equ 0003h
RXPPS_RXDTPPS3_SIZE                      equ 0001h
RXPPS_RXDTPPS3_LENGTH                    equ 0001h
RXPPS_RXDTPPS3_MASK                      equ 0008h
RXPPS_RXDTPPS4_POSN                      equ 0004h
RXPPS_RXDTPPS4_POSITION                  equ 0004h
RXPPS_RXDTPPS4_SIZE                      equ 0001h
RXPPS_RXDTPPS4_LENGTH                    equ 0001h
RXPPS_RXDTPPS4_MASK                      equ 0010h

// Register: TXPPS
#define TXPPS TXPPS
TXPPS                                    equ 0E25h
// bitfield definitions
TXPPS_TXPPS_POSN                         equ 0000h
TXPPS_TXPPS_POSITION                     equ 0000h
TXPPS_TXPPS_SIZE                         equ 0005h
TXPPS_TXPPS_LENGTH                       equ 0005h
TXPPS_TXPPS_MASK                         equ 001Fh
TXPPS_TXCKPPS0_POSN                      equ 0000h
TXPPS_TXCKPPS0_POSITION                  equ 0000h
TXPPS_TXCKPPS0_SIZE                      equ 0001h
TXPPS_TXCKPPS0_LENGTH                    equ 0001h
TXPPS_TXCKPPS0_MASK                      equ 0001h
TXPPS_TXCKPPS1_POSN                      equ 0001h
TXPPS_TXCKPPS1_POSITION                  equ 0001h
TXPPS_TXCKPPS1_SIZE                      equ 0001h
TXPPS_TXCKPPS1_LENGTH                    equ 0001h
TXPPS_TXCKPPS1_MASK                      equ 0002h
TXPPS_TXCKPPS2_POSN                      equ 0002h
TXPPS_TXCKPPS2_POSITION                  equ 0002h
TXPPS_TXCKPPS2_SIZE                      equ 0001h
TXPPS_TXCKPPS2_LENGTH                    equ 0001h
TXPPS_TXCKPPS2_MASK                      equ 0004h
TXPPS_TXCKPPS3_POSN                      equ 0003h
TXPPS_TXCKPPS3_POSITION                  equ 0003h
TXPPS_TXCKPPS3_SIZE                      equ 0001h
TXPPS_TXCKPPS3_LENGTH                    equ 0001h
TXPPS_TXCKPPS3_MASK                      equ 0008h
TXPPS_TXCKPPS4_POSN                      equ 0004h
TXPPS_TXCKPPS4_POSITION                  equ 0004h
TXPPS_TXCKPPS4_SIZE                      equ 0001h
TXPPS_TXCKPPS4_LENGTH                    equ 0001h
TXPPS_TXCKPPS4_MASK                      equ 0010h

// Register: CLCIN0PPS
#define CLCIN0PPS CLCIN0PPS
CLCIN0PPS                                equ 0E28h
// bitfield definitions
CLCIN0PPS_CLCIN0PPS_POSN                 equ 0000h
CLCIN0PPS_CLCIN0PPS_POSITION             equ 0000h
CLCIN0PPS_CLCIN0PPS_SIZE                 equ 0005h
CLCIN0PPS_CLCIN0PPS_LENGTH               equ 0005h
CLCIN0PPS_CLCIN0PPS_MASK                 equ 001Fh
CLCIN0PPS_CLCIN0PPS0_POSN                equ 0000h
CLCIN0PPS_CLCIN0PPS0_POSITION            equ 0000h
CLCIN0PPS_CLCIN0PPS0_SIZE                equ 0001h
CLCIN0PPS_CLCIN0PPS0_LENGTH              equ 0001h
CLCIN0PPS_CLCIN0PPS0_MASK                equ 0001h
CLCIN0PPS_CLCIN0PPS1_POSN                equ 0001h
CLCIN0PPS_CLCIN0PPS1_POSITION            equ 0001h
CLCIN0PPS_CLCIN0PPS1_SIZE                equ 0001h
CLCIN0PPS_CLCIN0PPS1_LENGTH              equ 0001h
CLCIN0PPS_CLCIN0PPS1_MASK                equ 0002h
CLCIN0PPS_CLCIN0PPS2_POSN                equ 0002h
CLCIN0PPS_CLCIN0PPS2_POSITION            equ 0002h
CLCIN0PPS_CLCIN0PPS2_SIZE                equ 0001h
CLCIN0PPS_CLCIN0PPS2_LENGTH              equ 0001h
CLCIN0PPS_CLCIN0PPS2_MASK                equ 0004h
CLCIN0PPS_CLCIN0PPS3_POSN                equ 0003h
CLCIN0PPS_CLCIN0PPS3_POSITION            equ 0003h
CLCIN0PPS_CLCIN0PPS3_SIZE                equ 0001h
CLCIN0PPS_CLCIN0PPS3_LENGTH              equ 0001h
CLCIN0PPS_CLCIN0PPS3_MASK                equ 0008h
CLCIN0PPS_CLCIN0PPS4_POSN                equ 0004h
CLCIN0PPS_CLCIN0PPS4_POSITION            equ 0004h
CLCIN0PPS_CLCIN0PPS4_SIZE                equ 0001h
CLCIN0PPS_CLCIN0PPS4_LENGTH              equ 0001h
CLCIN0PPS_CLCIN0PPS4_MASK                equ 0010h

// Register: CLCIN1PPS
#define CLCIN1PPS CLCIN1PPS
CLCIN1PPS                                equ 0E29h
// bitfield definitions
CLCIN1PPS_CLCIN1PPS_POSN                 equ 0000h
CLCIN1PPS_CLCIN1PPS_POSITION             equ 0000h
CLCIN1PPS_CLCIN1PPS_SIZE                 equ 0005h
CLCIN1PPS_CLCIN1PPS_LENGTH               equ 0005h
CLCIN1PPS_CLCIN1PPS_MASK                 equ 001Fh
CLCIN1PPS_CLCIN1PPS0_POSN                equ 0000h
CLCIN1PPS_CLCIN1PPS0_POSITION            equ 0000h
CLCIN1PPS_CLCIN1PPS0_SIZE                equ 0001h
CLCIN1PPS_CLCIN1PPS0_LENGTH              equ 0001h
CLCIN1PPS_CLCIN1PPS0_MASK                equ 0001h
CLCIN1PPS_CLCIN1PPS1_POSN                equ 0001h
CLCIN1PPS_CLCIN1PPS1_POSITION            equ 0001h
CLCIN1PPS_CLCIN1PPS1_SIZE                equ 0001h
CLCIN1PPS_CLCIN1PPS1_LENGTH              equ 0001h
CLCIN1PPS_CLCIN1PPS1_MASK                equ 0002h
CLCIN1PPS_CLCIN1PPS2_POSN                equ 0002h
CLCIN1PPS_CLCIN1PPS2_POSITION            equ 0002h
CLCIN1PPS_CLCIN1PPS2_SIZE                equ 0001h
CLCIN1PPS_CLCIN1PPS2_LENGTH              equ 0001h
CLCIN1PPS_CLCIN1PPS2_MASK                equ 0004h
CLCIN1PPS_CLCIN1PPS3_POSN                equ 0003h
CLCIN1PPS_CLCIN1PPS3_POSITION            equ 0003h
CLCIN1PPS_CLCIN1PPS3_SIZE                equ 0001h
CLCIN1PPS_CLCIN1PPS3_LENGTH              equ 0001h
CLCIN1PPS_CLCIN1PPS3_MASK                equ 0008h
CLCIN1PPS_CLCIN1PPS4_POSN                equ 0004h
CLCIN1PPS_CLCIN1PPS4_POSITION            equ 0004h
CLCIN1PPS_CLCIN1PPS4_SIZE                equ 0001h
CLCIN1PPS_CLCIN1PPS4_LENGTH              equ 0001h
CLCIN1PPS_CLCIN1PPS4_MASK                equ 0010h

// Register: CLCIN2PPS
#define CLCIN2PPS CLCIN2PPS
CLCIN2PPS                                equ 0E2Ah
// bitfield definitions
CLCIN2PPS_CLCIN2PPS_POSN                 equ 0000h
CLCIN2PPS_CLCIN2PPS_POSITION             equ 0000h
CLCIN2PPS_CLCIN2PPS_SIZE                 equ 0005h
CLCIN2PPS_CLCIN2PPS_LENGTH               equ 0005h
CLCIN2PPS_CLCIN2PPS_MASK                 equ 001Fh
CLCIN2PPS_CLCIN2PPS0_POSN                equ 0000h
CLCIN2PPS_CLCIN2PPS0_POSITION            equ 0000h
CLCIN2PPS_CLCIN2PPS0_SIZE                equ 0001h
CLCIN2PPS_CLCIN2PPS0_LENGTH              equ 0001h
CLCIN2PPS_CLCIN2PPS0_MASK                equ 0001h
CLCIN2PPS_CLCIN2PPS1_POSN                equ 0001h
CLCIN2PPS_CLCIN2PPS1_POSITION            equ 0001h
CLCIN2PPS_CLCIN2PPS1_SIZE                equ 0001h
CLCIN2PPS_CLCIN2PPS1_LENGTH              equ 0001h
CLCIN2PPS_CLCIN2PPS1_MASK                equ 0002h
CLCIN2PPS_CLCIN2PPS2_POSN                equ 0002h
CLCIN2PPS_CLCIN2PPS2_POSITION            equ 0002h
CLCIN2PPS_CLCIN2PPS2_SIZE                equ 0001h
CLCIN2PPS_CLCIN2PPS2_LENGTH              equ 0001h
CLCIN2PPS_CLCIN2PPS2_MASK                equ 0004h
CLCIN2PPS_CLCIN2PPS3_POSN                equ 0003h
CLCIN2PPS_CLCIN2PPS3_POSITION            equ 0003h
CLCIN2PPS_CLCIN2PPS3_SIZE                equ 0001h
CLCIN2PPS_CLCIN2PPS3_LENGTH              equ 0001h
CLCIN2PPS_CLCIN2PPS3_MASK                equ 0008h
CLCIN2PPS_CLCIN2PPS4_POSN                equ 0004h
CLCIN2PPS_CLCIN2PPS4_POSITION            equ 0004h
CLCIN2PPS_CLCIN2PPS4_SIZE                equ 0001h
CLCIN2PPS_CLCIN2PPS4_LENGTH              equ 0001h
CLCIN2PPS_CLCIN2PPS4_MASK                equ 0010h

// Register: CLCIN3PPS
#define CLCIN3PPS CLCIN3PPS
CLCIN3PPS                                equ 0E2Bh
// bitfield definitions
CLCIN3PPS_CLCIN3PPS_POSN                 equ 0000h
CLCIN3PPS_CLCIN3PPS_POSITION             equ 0000h
CLCIN3PPS_CLCIN3PPS_SIZE                 equ 0005h
CLCIN3PPS_CLCIN3PPS_LENGTH               equ 0005h
CLCIN3PPS_CLCIN3PPS_MASK                 equ 001Fh
CLCIN3PPS_CLCIN3PPS0_POSN                equ 0000h
CLCIN3PPS_CLCIN3PPS0_POSITION            equ 0000h
CLCIN3PPS_CLCIN3PPS0_SIZE                equ 0001h
CLCIN3PPS_CLCIN3PPS0_LENGTH              equ 0001h
CLCIN3PPS_CLCIN3PPS0_MASK                equ 0001h
CLCIN3PPS_CLCIN3PPS1_POSN                equ 0001h
CLCIN3PPS_CLCIN3PPS1_POSITION            equ 0001h
CLCIN3PPS_CLCIN3PPS1_SIZE                equ 0001h
CLCIN3PPS_CLCIN3PPS1_LENGTH              equ 0001h
CLCIN3PPS_CLCIN3PPS1_MASK                equ 0002h
CLCIN3PPS_CLCIN3PPS2_POSN                equ 0002h
CLCIN3PPS_CLCIN3PPS2_POSITION            equ 0002h
CLCIN3PPS_CLCIN3PPS2_SIZE                equ 0001h
CLCIN3PPS_CLCIN3PPS2_LENGTH              equ 0001h
CLCIN3PPS_CLCIN3PPS2_MASK                equ 0004h
CLCIN3PPS_CLCIN3PPS3_POSN                equ 0003h
CLCIN3PPS_CLCIN3PPS3_POSITION            equ 0003h
CLCIN3PPS_CLCIN3PPS3_SIZE                equ 0001h
CLCIN3PPS_CLCIN3PPS3_LENGTH              equ 0001h
CLCIN3PPS_CLCIN3PPS3_MASK                equ 0008h
CLCIN3PPS_CLCIN3PPS4_POSN                equ 0004h
CLCIN3PPS_CLCIN3PPS4_POSITION            equ 0004h
CLCIN3PPS_CLCIN3PPS4_SIZE                equ 0001h
CLCIN3PPS_CLCIN3PPS4_LENGTH              equ 0001h
CLCIN3PPS_CLCIN3PPS4_MASK                equ 0010h

// Register: T3CKIPPS
#define T3CKIPPS T3CKIPPS
T3CKIPPS                                 equ 0E2Ch
// bitfield definitions
T3CKIPPS_T3CKIPPS_POSN                   equ 0000h
T3CKIPPS_T3CKIPPS_POSITION               equ 0000h
T3CKIPPS_T3CKIPPS_SIZE                   equ 0005h
T3CKIPPS_T3CKIPPS_LENGTH                 equ 0005h
T3CKIPPS_T3CKIPPS_MASK                   equ 001Fh

// Register: T3GPPS
#define T3GPPS T3GPPS
T3GPPS                                   equ 0E2Dh
// bitfield definitions
T3GPPS_T3GPPS_POSN                       equ 0000h
T3GPPS_T3GPPS_POSITION                   equ 0000h
T3GPPS_T3GPPS_SIZE                       equ 0005h
T3GPPS_T3GPPS_LENGTH                     equ 0005h
T3GPPS_T3GPPS_MASK                       equ 001Fh

// Register: T5CKIPPS
#define T5CKIPPS T5CKIPPS
T5CKIPPS                                 equ 0E2Eh
// bitfield definitions
T5CKIPPS_T5CKIPPS_POSN                   equ 0000h
T5CKIPPS_T5CKIPPS_POSITION               equ 0000h
T5CKIPPS_T5CKIPPS_SIZE                   equ 0005h
T5CKIPPS_T5CKIPPS_LENGTH                 equ 0005h
T5CKIPPS_T5CKIPPS_MASK                   equ 001Fh

// Register: T5GPPS
#define T5GPPS T5GPPS
T5GPPS                                   equ 0E2Fh
// bitfield definitions
T5GPPS_T5GPPS_POSN                       equ 0000h
T5GPPS_T5GPPS_POSITION                   equ 0000h
T5GPPS_T5GPPS_SIZE                       equ 0005h
T5GPPS_T5GPPS_LENGTH                     equ 0005h
T5GPPS_T5GPPS_MASK                       equ 001Fh

// Register: RA0PPS
#define RA0PPS RA0PPS
RA0PPS                                   equ 0E90h
// bitfield definitions
RA0PPS_RA0PPS_POSN                       equ 0000h
RA0PPS_RA0PPS_POSITION                   equ 0000h
RA0PPS_RA0PPS_SIZE                       equ 0005h
RA0PPS_RA0PPS_LENGTH                     equ 0005h
RA0PPS_RA0PPS_MASK                       equ 001Fh
RA0PPS_RA0PPS0_POSN                      equ 0000h
RA0PPS_RA0PPS0_POSITION                  equ 0000h
RA0PPS_RA0PPS0_SIZE                      equ 0001h
RA0PPS_RA0PPS0_LENGTH                    equ 0001h
RA0PPS_RA0PPS0_MASK                      equ 0001h
RA0PPS_RA0PPS1_POSN                      equ 0001h
RA0PPS_RA0PPS1_POSITION                  equ 0001h
RA0PPS_RA0PPS1_SIZE                      equ 0001h
RA0PPS_RA0PPS1_LENGTH                    equ 0001h
RA0PPS_RA0PPS1_MASK                      equ 0002h
RA0PPS_RA0PPS2_POSN                      equ 0002h
RA0PPS_RA0PPS2_POSITION                  equ 0002h
RA0PPS_RA0PPS2_SIZE                      equ 0001h
RA0PPS_RA0PPS2_LENGTH                    equ 0001h
RA0PPS_RA0PPS2_MASK                      equ 0004h
RA0PPS_RA0PPS3_POSN                      equ 0003h
RA0PPS_RA0PPS3_POSITION                  equ 0003h
RA0PPS_RA0PPS3_SIZE                      equ 0001h
RA0PPS_RA0PPS3_LENGTH                    equ 0001h
RA0PPS_RA0PPS3_MASK                      equ 0008h
RA0PPS_RA0PPS4_POSN                      equ 0004h
RA0PPS_RA0PPS4_POSITION                  equ 0004h
RA0PPS_RA0PPS4_SIZE                      equ 0001h
RA0PPS_RA0PPS4_LENGTH                    equ 0001h
RA0PPS_RA0PPS4_MASK                      equ 0010h

// Register: RA1PPS
#define RA1PPS RA1PPS
RA1PPS                                   equ 0E91h
// bitfield definitions
RA1PPS_RA1PPS_POSN                       equ 0000h
RA1PPS_RA1PPS_POSITION                   equ 0000h
RA1PPS_RA1PPS_SIZE                       equ 0005h
RA1PPS_RA1PPS_LENGTH                     equ 0005h
RA1PPS_RA1PPS_MASK                       equ 001Fh
RA1PPS_RA1PPS0_POSN                      equ 0000h
RA1PPS_RA1PPS0_POSITION                  equ 0000h
RA1PPS_RA1PPS0_SIZE                      equ 0001h
RA1PPS_RA1PPS0_LENGTH                    equ 0001h
RA1PPS_RA1PPS0_MASK                      equ 0001h
RA1PPS_RA1PPS1_POSN                      equ 0001h
RA1PPS_RA1PPS1_POSITION                  equ 0001h
RA1PPS_RA1PPS1_SIZE                      equ 0001h
RA1PPS_RA1PPS1_LENGTH                    equ 0001h
RA1PPS_RA1PPS1_MASK                      equ 0002h
RA1PPS_RA1PPS2_POSN                      equ 0002h
RA1PPS_RA1PPS2_POSITION                  equ 0002h
RA1PPS_RA1PPS2_SIZE                      equ 0001h
RA1PPS_RA1PPS2_LENGTH                    equ 0001h
RA1PPS_RA1PPS2_MASK                      equ 0004h
RA1PPS_RA1PPS3_POSN                      equ 0003h
RA1PPS_RA1PPS3_POSITION                  equ 0003h
RA1PPS_RA1PPS3_SIZE                      equ 0001h
RA1PPS_RA1PPS3_LENGTH                    equ 0001h
RA1PPS_RA1PPS3_MASK                      equ 0008h
RA1PPS_RA1PPS4_POSN                      equ 0004h
RA1PPS_RA1PPS4_POSITION                  equ 0004h
RA1PPS_RA1PPS4_SIZE                      equ 0001h
RA1PPS_RA1PPS4_LENGTH                    equ 0001h
RA1PPS_RA1PPS4_MASK                      equ 0010h

// Register: RA2PPS
#define RA2PPS RA2PPS
RA2PPS                                   equ 0E92h
// bitfield definitions
RA2PPS_RA2PPS_POSN                       equ 0000h
RA2PPS_RA2PPS_POSITION                   equ 0000h
RA2PPS_RA2PPS_SIZE                       equ 0005h
RA2PPS_RA2PPS_LENGTH                     equ 0005h
RA2PPS_RA2PPS_MASK                       equ 001Fh
RA2PPS_RA2PPS0_POSN                      equ 0000h
RA2PPS_RA2PPS0_POSITION                  equ 0000h
RA2PPS_RA2PPS0_SIZE                      equ 0001h
RA2PPS_RA2PPS0_LENGTH                    equ 0001h
RA2PPS_RA2PPS0_MASK                      equ 0001h
RA2PPS_RA2PPS1_POSN                      equ 0001h
RA2PPS_RA2PPS1_POSITION                  equ 0001h
RA2PPS_RA2PPS1_SIZE                      equ 0001h
RA2PPS_RA2PPS1_LENGTH                    equ 0001h
RA2PPS_RA2PPS1_MASK                      equ 0002h
RA2PPS_RA2PPS2_POSN                      equ 0002h
RA2PPS_RA2PPS2_POSITION                  equ 0002h
RA2PPS_RA2PPS2_SIZE                      equ 0001h
RA2PPS_RA2PPS2_LENGTH                    equ 0001h
RA2PPS_RA2PPS2_MASK                      equ 0004h
RA2PPS_RA2PPS3_POSN                      equ 0003h
RA2PPS_RA2PPS3_POSITION                  equ 0003h
RA2PPS_RA2PPS3_SIZE                      equ 0001h
RA2PPS_RA2PPS3_LENGTH                    equ 0001h
RA2PPS_RA2PPS3_MASK                      equ 0008h
RA2PPS_RA2PPS4_POSN                      equ 0004h
RA2PPS_RA2PPS4_POSITION                  equ 0004h
RA2PPS_RA2PPS4_SIZE                      equ 0001h
RA2PPS_RA2PPS4_LENGTH                    equ 0001h
RA2PPS_RA2PPS4_MASK                      equ 0010h

// Register: RA4PPS
#define RA4PPS RA4PPS
RA4PPS                                   equ 0E94h
// bitfield definitions
RA4PPS_RA4PPS_POSN                       equ 0000h
RA4PPS_RA4PPS_POSITION                   equ 0000h
RA4PPS_RA4PPS_SIZE                       equ 0005h
RA4PPS_RA4PPS_LENGTH                     equ 0005h
RA4PPS_RA4PPS_MASK                       equ 001Fh
RA4PPS_RA4PPS0_POSN                      equ 0000h
RA4PPS_RA4PPS0_POSITION                  equ 0000h
RA4PPS_RA4PPS0_SIZE                      equ 0001h
RA4PPS_RA4PPS0_LENGTH                    equ 0001h
RA4PPS_RA4PPS0_MASK                      equ 0001h
RA4PPS_RA4PPS1_POSN                      equ 0001h
RA4PPS_RA4PPS1_POSITION                  equ 0001h
RA4PPS_RA4PPS1_SIZE                      equ 0001h
RA4PPS_RA4PPS1_LENGTH                    equ 0001h
RA4PPS_RA4PPS1_MASK                      equ 0002h
RA4PPS_RA4PPS2_POSN                      equ 0002h
RA4PPS_RA4PPS2_POSITION                  equ 0002h
RA4PPS_RA4PPS2_SIZE                      equ 0001h
RA4PPS_RA4PPS2_LENGTH                    equ 0001h
RA4PPS_RA4PPS2_MASK                      equ 0004h
RA4PPS_RA4PPS3_POSN                      equ 0003h
RA4PPS_RA4PPS3_POSITION                  equ 0003h
RA4PPS_RA4PPS3_SIZE                      equ 0001h
RA4PPS_RA4PPS3_LENGTH                    equ 0001h
RA4PPS_RA4PPS3_MASK                      equ 0008h
RA4PPS_RA4PPS4_POSN                      equ 0004h
RA4PPS_RA4PPS4_POSITION                  equ 0004h
RA4PPS_RA4PPS4_SIZE                      equ 0001h
RA4PPS_RA4PPS4_LENGTH                    equ 0001h
RA4PPS_RA4PPS4_MASK                      equ 0010h

// Register: RA5PPS
#define RA5PPS RA5PPS
RA5PPS                                   equ 0E95h
// bitfield definitions
RA5PPS_RA5PPS_POSN                       equ 0000h
RA5PPS_RA5PPS_POSITION                   equ 0000h
RA5PPS_RA5PPS_SIZE                       equ 0005h
RA5PPS_RA5PPS_LENGTH                     equ 0005h
RA5PPS_RA5PPS_MASK                       equ 001Fh
RA5PPS_RA5PPS0_POSN                      equ 0000h
RA5PPS_RA5PPS0_POSITION                  equ 0000h
RA5PPS_RA5PPS0_SIZE                      equ 0001h
RA5PPS_RA5PPS0_LENGTH                    equ 0001h
RA5PPS_RA5PPS0_MASK                      equ 0001h
RA5PPS_RA5PPS1_POSN                      equ 0001h
RA5PPS_RA5PPS1_POSITION                  equ 0001h
RA5PPS_RA5PPS1_SIZE                      equ 0001h
RA5PPS_RA5PPS1_LENGTH                    equ 0001h
RA5PPS_RA5PPS1_MASK                      equ 0002h
RA5PPS_RA5PPS2_POSN                      equ 0002h
RA5PPS_RA5PPS2_POSITION                  equ 0002h
RA5PPS_RA5PPS2_SIZE                      equ 0001h
RA5PPS_RA5PPS2_LENGTH                    equ 0001h
RA5PPS_RA5PPS2_MASK                      equ 0004h
RA5PPS_RA5PPS3_POSN                      equ 0003h
RA5PPS_RA5PPS3_POSITION                  equ 0003h
RA5PPS_RA5PPS3_SIZE                      equ 0001h
RA5PPS_RA5PPS3_LENGTH                    equ 0001h
RA5PPS_RA5PPS3_MASK                      equ 0008h
RA5PPS_RA5PPS4_POSN                      equ 0004h
RA5PPS_RA5PPS4_POSITION                  equ 0004h
RA5PPS_RA5PPS4_SIZE                      equ 0001h
RA5PPS_RA5PPS4_LENGTH                    equ 0001h
RA5PPS_RA5PPS4_MASK                      equ 0010h

// Register: RC0PPS
#define RC0PPS RC0PPS
RC0PPS                                   equ 0EA0h
// bitfield definitions
RC0PPS_RC0PPS_POSN                       equ 0000h
RC0PPS_RC0PPS_POSITION                   equ 0000h
RC0PPS_RC0PPS_SIZE                       equ 0005h
RC0PPS_RC0PPS_LENGTH                     equ 0005h
RC0PPS_RC0PPS_MASK                       equ 001Fh
RC0PPS_RC0PPS0_POSN                      equ 0000h
RC0PPS_RC0PPS0_POSITION                  equ 0000h
RC0PPS_RC0PPS0_SIZE                      equ 0001h
RC0PPS_RC0PPS0_LENGTH                    equ 0001h
RC0PPS_RC0PPS0_MASK                      equ 0001h
RC0PPS_RC0PPS1_POSN                      equ 0001h
RC0PPS_RC0PPS1_POSITION                  equ 0001h
RC0PPS_RC0PPS1_SIZE                      equ 0001h
RC0PPS_RC0PPS1_LENGTH                    equ 0001h
RC0PPS_RC0PPS1_MASK                      equ 0002h
RC0PPS_RC0PPS2_POSN                      equ 0002h
RC0PPS_RC0PPS2_POSITION                  equ 0002h
RC0PPS_RC0PPS2_SIZE                      equ 0001h
RC0PPS_RC0PPS2_LENGTH                    equ 0001h
RC0PPS_RC0PPS2_MASK                      equ 0004h
RC0PPS_RC0PPS3_POSN                      equ 0003h
RC0PPS_RC0PPS3_POSITION                  equ 0003h
RC0PPS_RC0PPS3_SIZE                      equ 0001h
RC0PPS_RC0PPS3_LENGTH                    equ 0001h
RC0PPS_RC0PPS3_MASK                      equ 0008h
RC0PPS_RC0PPS4_POSN                      equ 0004h
RC0PPS_RC0PPS4_POSITION                  equ 0004h
RC0PPS_RC0PPS4_SIZE                      equ 0001h
RC0PPS_RC0PPS4_LENGTH                    equ 0001h
RC0PPS_RC0PPS4_MASK                      equ 0010h

// Register: RC1PPS
#define RC1PPS RC1PPS
RC1PPS                                   equ 0EA1h
// bitfield definitions
RC1PPS_RC1PPS_POSN                       equ 0000h
RC1PPS_RC1PPS_POSITION                   equ 0000h
RC1PPS_RC1PPS_SIZE                       equ 0005h
RC1PPS_RC1PPS_LENGTH                     equ 0005h
RC1PPS_RC1PPS_MASK                       equ 001Fh
RC1PPS_RC1PPS0_POSN                      equ 0000h
RC1PPS_RC1PPS0_POSITION                  equ 0000h
RC1PPS_RC1PPS0_SIZE                      equ 0001h
RC1PPS_RC1PPS0_LENGTH                    equ 0001h
RC1PPS_RC1PPS0_MASK                      equ 0001h
RC1PPS_RC1PPS1_POSN                      equ 0001h
RC1PPS_RC1PPS1_POSITION                  equ 0001h
RC1PPS_RC1PPS1_SIZE                      equ 0001h
RC1PPS_RC1PPS1_LENGTH                    equ 0001h
RC1PPS_RC1PPS1_MASK                      equ 0002h
RC1PPS_RC1PPS2_POSN                      equ 0002h
RC1PPS_RC1PPS2_POSITION                  equ 0002h
RC1PPS_RC1PPS2_SIZE                      equ 0001h
RC1PPS_RC1PPS2_LENGTH                    equ 0001h
RC1PPS_RC1PPS2_MASK                      equ 0004h
RC1PPS_RC1PPS3_POSN                      equ 0003h
RC1PPS_RC1PPS3_POSITION                  equ 0003h
RC1PPS_RC1PPS3_SIZE                      equ 0001h
RC1PPS_RC1PPS3_LENGTH                    equ 0001h
RC1PPS_RC1PPS3_MASK                      equ 0008h
RC1PPS_RC1PPS4_POSN                      equ 0004h
RC1PPS_RC1PPS4_POSITION                  equ 0004h
RC1PPS_RC1PPS4_SIZE                      equ 0001h
RC1PPS_RC1PPS4_LENGTH                    equ 0001h
RC1PPS_RC1PPS4_MASK                      equ 0010h

// Register: RC2PPS
#define RC2PPS RC2PPS
RC2PPS                                   equ 0EA2h
// bitfield definitions
RC2PPS_RC2PPS_POSN                       equ 0000h
RC2PPS_RC2PPS_POSITION                   equ 0000h
RC2PPS_RC2PPS_SIZE                       equ 0005h
RC2PPS_RC2PPS_LENGTH                     equ 0005h
RC2PPS_RC2PPS_MASK                       equ 001Fh
RC2PPS_RC2PPS0_POSN                      equ 0000h
RC2PPS_RC2PPS0_POSITION                  equ 0000h
RC2PPS_RC2PPS0_SIZE                      equ 0001h
RC2PPS_RC2PPS0_LENGTH                    equ 0001h
RC2PPS_RC2PPS0_MASK                      equ 0001h
RC2PPS_RC2PPS1_POSN                      equ 0001h
RC2PPS_RC2PPS1_POSITION                  equ 0001h
RC2PPS_RC2PPS1_SIZE                      equ 0001h
RC2PPS_RC2PPS1_LENGTH                    equ 0001h
RC2PPS_RC2PPS1_MASK                      equ 0002h
RC2PPS_RC2PPS2_POSN                      equ 0002h
RC2PPS_RC2PPS2_POSITION                  equ 0002h
RC2PPS_RC2PPS2_SIZE                      equ 0001h
RC2PPS_RC2PPS2_LENGTH                    equ 0001h
RC2PPS_RC2PPS2_MASK                      equ 0004h
RC2PPS_RC2PPS3_POSN                      equ 0003h
RC2PPS_RC2PPS3_POSITION                  equ 0003h
RC2PPS_RC2PPS3_SIZE                      equ 0001h
RC2PPS_RC2PPS3_LENGTH                    equ 0001h
RC2PPS_RC2PPS3_MASK                      equ 0008h
RC2PPS_RC2PPS4_POSN                      equ 0004h
RC2PPS_RC2PPS4_POSITION                  equ 0004h
RC2PPS_RC2PPS4_SIZE                      equ 0001h
RC2PPS_RC2PPS4_LENGTH                    equ 0001h
RC2PPS_RC2PPS4_MASK                      equ 0010h

// Register: RC3PPS
#define RC3PPS RC3PPS
RC3PPS                                   equ 0EA3h
// bitfield definitions
RC3PPS_RC3PPS_POSN                       equ 0000h
RC3PPS_RC3PPS_POSITION                   equ 0000h
RC3PPS_RC3PPS_SIZE                       equ 0005h
RC3PPS_RC3PPS_LENGTH                     equ 0005h
RC3PPS_RC3PPS_MASK                       equ 001Fh
RC3PPS_RC3PPS0_POSN                      equ 0000h
RC3PPS_RC3PPS0_POSITION                  equ 0000h
RC3PPS_RC3PPS0_SIZE                      equ 0001h
RC3PPS_RC3PPS0_LENGTH                    equ 0001h
RC3PPS_RC3PPS0_MASK                      equ 0001h
RC3PPS_RC3PPS1_POSN                      equ 0001h
RC3PPS_RC3PPS1_POSITION                  equ 0001h
RC3PPS_RC3PPS1_SIZE                      equ 0001h
RC3PPS_RC3PPS1_LENGTH                    equ 0001h
RC3PPS_RC3PPS1_MASK                      equ 0002h
RC3PPS_RC3PPS2_POSN                      equ 0002h
RC3PPS_RC3PPS2_POSITION                  equ 0002h
RC3PPS_RC3PPS2_SIZE                      equ 0001h
RC3PPS_RC3PPS2_LENGTH                    equ 0001h
RC3PPS_RC3PPS2_MASK                      equ 0004h
RC3PPS_RC3PPS3_POSN                      equ 0003h
RC3PPS_RC3PPS3_POSITION                  equ 0003h
RC3PPS_RC3PPS3_SIZE                      equ 0001h
RC3PPS_RC3PPS3_LENGTH                    equ 0001h
RC3PPS_RC3PPS3_MASK                      equ 0008h
RC3PPS_RC3PPS4_POSN                      equ 0004h
RC3PPS_RC3PPS4_POSITION                  equ 0004h
RC3PPS_RC3PPS4_SIZE                      equ 0001h
RC3PPS_RC3PPS4_LENGTH                    equ 0001h
RC3PPS_RC3PPS4_MASK                      equ 0010h

// Register: RC4PPS
#define RC4PPS RC4PPS
RC4PPS                                   equ 0EA4h
// bitfield definitions
RC4PPS_RC4PPS_POSN                       equ 0000h
RC4PPS_RC4PPS_POSITION                   equ 0000h
RC4PPS_RC4PPS_SIZE                       equ 0005h
RC4PPS_RC4PPS_LENGTH                     equ 0005h
RC4PPS_RC4PPS_MASK                       equ 001Fh
RC4PPS_RC4PPS0_POSN                      equ 0000h
RC4PPS_RC4PPS0_POSITION                  equ 0000h
RC4PPS_RC4PPS0_SIZE                      equ 0001h
RC4PPS_RC4PPS0_LENGTH                    equ 0001h
RC4PPS_RC4PPS0_MASK                      equ 0001h
RC4PPS_RC4PPS1_POSN                      equ 0001h
RC4PPS_RC4PPS1_POSITION                  equ 0001h
RC4PPS_RC4PPS1_SIZE                      equ 0001h
RC4PPS_RC4PPS1_LENGTH                    equ 0001h
RC4PPS_RC4PPS1_MASK                      equ 0002h
RC4PPS_RC4PPS2_POSN                      equ 0002h
RC4PPS_RC4PPS2_POSITION                  equ 0002h
RC4PPS_RC4PPS2_SIZE                      equ 0001h
RC4PPS_RC4PPS2_LENGTH                    equ 0001h
RC4PPS_RC4PPS2_MASK                      equ 0004h
RC4PPS_RC4PPS3_POSN                      equ 0003h
RC4PPS_RC4PPS3_POSITION                  equ 0003h
RC4PPS_RC4PPS3_SIZE                      equ 0001h
RC4PPS_RC4PPS3_LENGTH                    equ 0001h
RC4PPS_RC4PPS3_MASK                      equ 0008h
RC4PPS_RC4PPS4_POSN                      equ 0004h
RC4PPS_RC4PPS4_POSITION                  equ 0004h
RC4PPS_RC4PPS4_SIZE                      equ 0001h
RC4PPS_RC4PPS4_LENGTH                    equ 0001h
RC4PPS_RC4PPS4_MASK                      equ 0010h

// Register: RC5PPS
#define RC5PPS RC5PPS
RC5PPS                                   equ 0EA5h
// bitfield definitions
RC5PPS_RC5PPS_POSN                       equ 0000h
RC5PPS_RC5PPS_POSITION                   equ 0000h
RC5PPS_RC5PPS_SIZE                       equ 0005h
RC5PPS_RC5PPS_LENGTH                     equ 0005h
RC5PPS_RC5PPS_MASK                       equ 001Fh
RC5PPS_RC5PPS0_POSN                      equ 0000h
RC5PPS_RC5PPS0_POSITION                  equ 0000h
RC5PPS_RC5PPS0_SIZE                      equ 0001h
RC5PPS_RC5PPS0_LENGTH                    equ 0001h
RC5PPS_RC5PPS0_MASK                      equ 0001h
RC5PPS_RC5PPS1_POSN                      equ 0001h
RC5PPS_RC5PPS1_POSITION                  equ 0001h
RC5PPS_RC5PPS1_SIZE                      equ 0001h
RC5PPS_RC5PPS1_LENGTH                    equ 0001h
RC5PPS_RC5PPS1_MASK                      equ 0002h
RC5PPS_RC5PPS2_POSN                      equ 0002h
RC5PPS_RC5PPS2_POSITION                  equ 0002h
RC5PPS_RC5PPS2_SIZE                      equ 0001h
RC5PPS_RC5PPS2_LENGTH                    equ 0001h
RC5PPS_RC5PPS2_MASK                      equ 0004h
RC5PPS_RC5PPS3_POSN                      equ 0003h
RC5PPS_RC5PPS3_POSITION                  equ 0003h
RC5PPS_RC5PPS3_SIZE                      equ 0001h
RC5PPS_RC5PPS3_LENGTH                    equ 0001h
RC5PPS_RC5PPS3_MASK                      equ 0008h
RC5PPS_RC5PPS4_POSN                      equ 0004h
RC5PPS_RC5PPS4_POSITION                  equ 0004h
RC5PPS_RC5PPS4_SIZE                      equ 0001h
RC5PPS_RC5PPS4_LENGTH                    equ 0001h
RC5PPS_RC5PPS4_MASK                      equ 0010h

// Register: CLCDATA
#define CLCDATA CLCDATA
CLCDATA                                  equ 0F0Fh
// bitfield definitions
CLCDATA_MLC1OUT_POSN                     equ 0000h
CLCDATA_MLC1OUT_POSITION                 equ 0000h
CLCDATA_MLC1OUT_SIZE                     equ 0001h
CLCDATA_MLC1OUT_LENGTH                   equ 0001h
CLCDATA_MLC1OUT_MASK                     equ 0001h
CLCDATA_MLC2OUT_POSN                     equ 0001h
CLCDATA_MLC2OUT_POSITION                 equ 0001h
CLCDATA_MLC2OUT_SIZE                     equ 0001h
CLCDATA_MLC2OUT_LENGTH                   equ 0001h
CLCDATA_MLC2OUT_MASK                     equ 0002h
CLCDATA_MLC3OUT_POSN                     equ 0002h
CLCDATA_MLC3OUT_POSITION                 equ 0002h
CLCDATA_MLC3OUT_SIZE                     equ 0001h
CLCDATA_MLC3OUT_LENGTH                   equ 0001h
CLCDATA_MLC3OUT_MASK                     equ 0004h
CLCDATA_MLC4OUT_POSN                     equ 0003h
CLCDATA_MLC4OUT_POSITION                 equ 0003h
CLCDATA_MLC4OUT_SIZE                     equ 0001h
CLCDATA_MLC4OUT_LENGTH                   equ 0001h
CLCDATA_MLC4OUT_MASK                     equ 0008h

// Register: CLC1CON
#define CLC1CON CLC1CON
CLC1CON                                  equ 0F10h
// bitfield definitions
CLC1CON_LC1MODE_POSN                     equ 0000h
CLC1CON_LC1MODE_POSITION                 equ 0000h
CLC1CON_LC1MODE_SIZE                     equ 0003h
CLC1CON_LC1MODE_LENGTH                   equ 0003h
CLC1CON_LC1MODE_MASK                     equ 0007h
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
CLC1CON_LC1EN_POSN                       equ 0007h
CLC1CON_LC1EN_POSITION                   equ 0007h
CLC1CON_LC1EN_SIZE                       equ 0001h
CLC1CON_LC1EN_LENGTH                     equ 0001h
CLC1CON_LC1EN_MASK                       equ 0080h
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
CLC1CON_MODE_POSN                        equ 0000h
CLC1CON_MODE_POSITION                    equ 0000h
CLC1CON_MODE_SIZE                        equ 0003h
CLC1CON_MODE_LENGTH                      equ 0003h
CLC1CON_MODE_MASK                        equ 0007h
CLC1CON_INTN_POSN                        equ 0003h
CLC1CON_INTN_POSITION                    equ 0003h
CLC1CON_INTN_SIZE                        equ 0001h
CLC1CON_INTN_LENGTH                      equ 0001h
CLC1CON_INTN_MASK                        equ 0008h
CLC1CON_INTP_POSN                        equ 0004h
CLC1CON_INTP_POSITION                    equ 0004h
CLC1CON_INTP_SIZE                        equ 0001h
CLC1CON_INTP_LENGTH                      equ 0001h
CLC1CON_INTP_MASK                        equ 0010h
CLC1CON_OUT_POSN                         equ 0005h
CLC1CON_OUT_POSITION                     equ 0005h
CLC1CON_OUT_SIZE                         equ 0001h
CLC1CON_OUT_LENGTH                       equ 0001h
CLC1CON_OUT_MASK                         equ 0020h
CLC1CON_EN_POSN                          equ 0007h
CLC1CON_EN_POSITION                      equ 0007h
CLC1CON_EN_SIZE                          equ 0001h
CLC1CON_EN_LENGTH                        equ 0001h
CLC1CON_EN_MASK                          equ 0080h
CLC1CON_MODE0_POSN                       equ 0000h
CLC1CON_MODE0_POSITION                   equ 0000h
CLC1CON_MODE0_SIZE                       equ 0001h
CLC1CON_MODE0_LENGTH                     equ 0001h
CLC1CON_MODE0_MASK                       equ 0001h
CLC1CON_MODE1_POSN                       equ 0001h
CLC1CON_MODE1_POSITION                   equ 0001h
CLC1CON_MODE1_SIZE                       equ 0001h
CLC1CON_MODE1_LENGTH                     equ 0001h
CLC1CON_MODE1_MASK                       equ 0002h
CLC1CON_MODE2_POSN                       equ 0002h
CLC1CON_MODE2_POSITION                   equ 0002h
CLC1CON_MODE2_SIZE                       equ 0001h
CLC1CON_MODE2_LENGTH                     equ 0001h
CLC1CON_MODE2_MASK                       equ 0004h

// Register: CLC1POL
#define CLC1POL CLC1POL
CLC1POL                                  equ 0F11h
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

// Register: CLC1SEL0
#define CLC1SEL0 CLC1SEL0
CLC1SEL0                                 equ 0F12h
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
CLC1SEL0_LC1D1S3_POSN                    equ 0003h
CLC1SEL0_LC1D1S3_POSITION                equ 0003h
CLC1SEL0_LC1D1S3_SIZE                    equ 0001h
CLC1SEL0_LC1D1S3_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S3_MASK                    equ 0008h
CLC1SEL0_LC1D1S4_POSN                    equ 0004h
CLC1SEL0_LC1D1S4_POSITION                equ 0004h
CLC1SEL0_LC1D1S4_SIZE                    equ 0001h
CLC1SEL0_LC1D1S4_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S4_MASK                    equ 0010h
CLC1SEL0_LC1D1S5_POSN                    equ 0005h
CLC1SEL0_LC1D1S5_POSITION                equ 0005h
CLC1SEL0_LC1D1S5_SIZE                    equ 0001h
CLC1SEL0_LC1D1S5_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S5_MASK                    equ 0020h
CLC1SEL0_LC1D1S_POSN                     equ 0000h
CLC1SEL0_LC1D1S_POSITION                 equ 0000h
CLC1SEL0_LC1D1S_SIZE                     equ 0008h
CLC1SEL0_LC1D1S_LENGTH                   equ 0008h
CLC1SEL0_LC1D1S_MASK                     equ 00FFh
CLC1SEL0_D1S_POSN                        equ 0000h
CLC1SEL0_D1S_POSITION                    equ 0000h
CLC1SEL0_D1S_SIZE                        equ 0008h
CLC1SEL0_D1S_LENGTH                      equ 0008h
CLC1SEL0_D1S_MASK                        equ 00FFh
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
CLC1SEL0_D1S3_POSN                       equ 0003h
CLC1SEL0_D1S3_POSITION                   equ 0003h
CLC1SEL0_D1S3_SIZE                       equ 0001h
CLC1SEL0_D1S3_LENGTH                     equ 0001h
CLC1SEL0_D1S3_MASK                       equ 0008h
CLC1SEL0_D1S4_POSN                       equ 0004h
CLC1SEL0_D1S4_POSITION                   equ 0004h
CLC1SEL0_D1S4_SIZE                       equ 0001h
CLC1SEL0_D1S4_LENGTH                     equ 0001h
CLC1SEL0_D1S4_MASK                       equ 0010h
CLC1SEL0_D1S5_POSN                       equ 0005h
CLC1SEL0_D1S5_POSITION                   equ 0005h
CLC1SEL0_D1S5_SIZE                       equ 0001h
CLC1SEL0_D1S5_LENGTH                     equ 0001h
CLC1SEL0_D1S5_MASK                       equ 0020h

// Register: CLC1SEL1
#define CLC1SEL1 CLC1SEL1
CLC1SEL1                                 equ 0F13h
// bitfield definitions
CLC1SEL1_LC1D2S0_POSN                    equ 0000h
CLC1SEL1_LC1D2S0_POSITION                equ 0000h
CLC1SEL1_LC1D2S0_SIZE                    equ 0001h
CLC1SEL1_LC1D2S0_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S0_MASK                    equ 0001h
CLC1SEL1_LC1D2S1_POSN                    equ 0001h
CLC1SEL1_LC1D2S1_POSITION                equ 0001h
CLC1SEL1_LC1D2S1_SIZE                    equ 0001h
CLC1SEL1_LC1D2S1_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S1_MASK                    equ 0002h
CLC1SEL1_LC1D2S2_POSN                    equ 0002h
CLC1SEL1_LC1D2S2_POSITION                equ 0002h
CLC1SEL1_LC1D2S2_SIZE                    equ 0001h
CLC1SEL1_LC1D2S2_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S2_MASK                    equ 0004h
CLC1SEL1_LC1D2S3_POSN                    equ 0003h
CLC1SEL1_LC1D2S3_POSITION                equ 0003h
CLC1SEL1_LC1D2S3_SIZE                    equ 0001h
CLC1SEL1_LC1D2S3_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S3_MASK                    equ 0008h
CLC1SEL1_LC1D2S4_POSN                    equ 0004h
CLC1SEL1_LC1D2S4_POSITION                equ 0004h
CLC1SEL1_LC1D2S4_SIZE                    equ 0001h
CLC1SEL1_LC1D2S4_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S4_MASK                    equ 0010h
CLC1SEL1_LC1D2S5_POSN                    equ 0005h
CLC1SEL1_LC1D2S5_POSITION                equ 0005h
CLC1SEL1_LC1D2S5_SIZE                    equ 0001h
CLC1SEL1_LC1D2S5_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S5_MASK                    equ 0020h
CLC1SEL1_LC1D2S_POSN                     equ 0000h
CLC1SEL1_LC1D2S_POSITION                 equ 0000h
CLC1SEL1_LC1D2S_SIZE                     equ 0008h
CLC1SEL1_LC1D2S_LENGTH                   equ 0008h
CLC1SEL1_LC1D2S_MASK                     equ 00FFh
CLC1SEL1_D2S_POSN                        equ 0000h
CLC1SEL1_D2S_POSITION                    equ 0000h
CLC1SEL1_D2S_SIZE                        equ 0008h
CLC1SEL1_D2S_LENGTH                      equ 0008h
CLC1SEL1_D2S_MASK                        equ 00FFh
CLC1SEL1_D2S0_POSN                       equ 0000h
CLC1SEL1_D2S0_POSITION                   equ 0000h
CLC1SEL1_D2S0_SIZE                       equ 0001h
CLC1SEL1_D2S0_LENGTH                     equ 0001h
CLC1SEL1_D2S0_MASK                       equ 0001h
CLC1SEL1_D2S1_POSN                       equ 0001h
CLC1SEL1_D2S1_POSITION                   equ 0001h
CLC1SEL1_D2S1_SIZE                       equ 0001h
CLC1SEL1_D2S1_LENGTH                     equ 0001h
CLC1SEL1_D2S1_MASK                       equ 0002h
CLC1SEL1_D2S2_POSN                       equ 0002h
CLC1SEL1_D2S2_POSITION                   equ 0002h
CLC1SEL1_D2S2_SIZE                       equ 0001h
CLC1SEL1_D2S2_LENGTH                     equ 0001h
CLC1SEL1_D2S2_MASK                       equ 0004h
CLC1SEL1_D2S3_POSN                       equ 0003h
CLC1SEL1_D2S3_POSITION                   equ 0003h
CLC1SEL1_D2S3_SIZE                       equ 0001h
CLC1SEL1_D2S3_LENGTH                     equ 0001h
CLC1SEL1_D2S3_MASK                       equ 0008h
CLC1SEL1_D2S4_POSN                       equ 0004h
CLC1SEL1_D2S4_POSITION                   equ 0004h
CLC1SEL1_D2S4_SIZE                       equ 0001h
CLC1SEL1_D2S4_LENGTH                     equ 0001h
CLC1SEL1_D2S4_MASK                       equ 0010h
CLC1SEL1_D2S5_POSN                       equ 0005h
CLC1SEL1_D2S5_POSITION                   equ 0005h
CLC1SEL1_D2S5_SIZE                       equ 0001h
CLC1SEL1_D2S5_LENGTH                     equ 0001h
CLC1SEL1_D2S5_MASK                       equ 0020h

// Register: CLC1SEL2
#define CLC1SEL2 CLC1SEL2
CLC1SEL2                                 equ 0F14h
// bitfield definitions
CLC1SEL2_LC1D3S0_POSN                    equ 0000h
CLC1SEL2_LC1D3S0_POSITION                equ 0000h
CLC1SEL2_LC1D3S0_SIZE                    equ 0001h
CLC1SEL2_LC1D3S0_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S0_MASK                    equ 0001h
CLC1SEL2_LC1D3S1_POSN                    equ 0001h
CLC1SEL2_LC1D3S1_POSITION                equ 0001h
CLC1SEL2_LC1D3S1_SIZE                    equ 0001h
CLC1SEL2_LC1D3S1_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S1_MASK                    equ 0002h
CLC1SEL2_LC1D3S2_POSN                    equ 0002h
CLC1SEL2_LC1D3S2_POSITION                equ 0002h
CLC1SEL2_LC1D3S2_SIZE                    equ 0001h
CLC1SEL2_LC1D3S2_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S2_MASK                    equ 0004h
CLC1SEL2_LC1D3S3_POSN                    equ 0003h
CLC1SEL2_LC1D3S3_POSITION                equ 0003h
CLC1SEL2_LC1D3S3_SIZE                    equ 0001h
CLC1SEL2_LC1D3S3_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S3_MASK                    equ 0008h
CLC1SEL2_LC1D3S4_POSN                    equ 0004h
CLC1SEL2_LC1D3S4_POSITION                equ 0004h
CLC1SEL2_LC1D3S4_SIZE                    equ 0001h
CLC1SEL2_LC1D3S4_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S4_MASK                    equ 0010h
CLC1SEL2_LC1D3S5_POSN                    equ 0005h
CLC1SEL2_LC1D3S5_POSITION                equ 0005h
CLC1SEL2_LC1D3S5_SIZE                    equ 0001h
CLC1SEL2_LC1D3S5_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S5_MASK                    equ 0020h
CLC1SEL2_LC1D3S_POSN                     equ 0000h
CLC1SEL2_LC1D3S_POSITION                 equ 0000h
CLC1SEL2_LC1D3S_SIZE                     equ 0008h
CLC1SEL2_LC1D3S_LENGTH                   equ 0008h
CLC1SEL2_LC1D3S_MASK                     equ 00FFh
CLC1SEL2_D3S_POSN                        equ 0000h
CLC1SEL2_D3S_POSITION                    equ 0000h
CLC1SEL2_D3S_SIZE                        equ 0008h
CLC1SEL2_D3S_LENGTH                      equ 0008h
CLC1SEL2_D3S_MASK                        equ 00FFh
CLC1SEL2_D3S0_POSN                       equ 0000h
CLC1SEL2_D3S0_POSITION                   equ 0000h
CLC1SEL2_D3S0_SIZE                       equ 0001h
CLC1SEL2_D3S0_LENGTH                     equ 0001h
CLC1SEL2_D3S0_MASK                       equ 0001h
CLC1SEL2_D3S1_POSN                       equ 0001h
CLC1SEL2_D3S1_POSITION                   equ 0001h
CLC1SEL2_D3S1_SIZE                       equ 0001h
CLC1SEL2_D3S1_LENGTH                     equ 0001h
CLC1SEL2_D3S1_MASK                       equ 0002h
CLC1SEL2_D3S2_POSN                       equ 0002h
CLC1SEL2_D3S2_POSITION                   equ 0002h
CLC1SEL2_D3S2_SIZE                       equ 0001h
CLC1SEL2_D3S2_LENGTH                     equ 0001h
CLC1SEL2_D3S2_MASK                       equ 0004h
CLC1SEL2_D3S3_POSN                       equ 0003h
CLC1SEL2_D3S3_POSITION                   equ 0003h
CLC1SEL2_D3S3_SIZE                       equ 0001h
CLC1SEL2_D3S3_LENGTH                     equ 0001h
CLC1SEL2_D3S3_MASK                       equ 0008h
CLC1SEL2_D3S4_POSN                       equ 0004h
CLC1SEL2_D3S4_POSITION                   equ 0004h
CLC1SEL2_D3S4_SIZE                       equ 0001h
CLC1SEL2_D3S4_LENGTH                     equ 0001h
CLC1SEL2_D3S4_MASK                       equ 0010h
CLC1SEL2_D3S5_POSN                       equ 0005h
CLC1SEL2_D3S5_POSITION                   equ 0005h
CLC1SEL2_D3S5_SIZE                       equ 0001h
CLC1SEL2_D3S5_LENGTH                     equ 0001h
CLC1SEL2_D3S5_MASK                       equ 0020h

// Register: CLC1SEL3
#define CLC1SEL3 CLC1SEL3
CLC1SEL3                                 equ 0F15h
// bitfield definitions
CLC1SEL3_LC1D4S0_POSN                    equ 0000h
CLC1SEL3_LC1D4S0_POSITION                equ 0000h
CLC1SEL3_LC1D4S0_SIZE                    equ 0001h
CLC1SEL3_LC1D4S0_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S0_MASK                    equ 0001h
CLC1SEL3_LC1D4S1_POSN                    equ 0001h
CLC1SEL3_LC1D4S1_POSITION                equ 0001h
CLC1SEL3_LC1D4S1_SIZE                    equ 0001h
CLC1SEL3_LC1D4S1_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S1_MASK                    equ 0002h
CLC1SEL3_LC1D4S2_POSN                    equ 0002h
CLC1SEL3_LC1D4S2_POSITION                equ 0002h
CLC1SEL3_LC1D4S2_SIZE                    equ 0001h
CLC1SEL3_LC1D4S2_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S2_MASK                    equ 0004h
CLC1SEL3_LC1D4S3_POSN                    equ 0003h
CLC1SEL3_LC1D4S3_POSITION                equ 0003h
CLC1SEL3_LC1D4S3_SIZE                    equ 0001h
CLC1SEL3_LC1D4S3_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S3_MASK                    equ 0008h
CLC1SEL3_LC1D4S4_POSN                    equ 0004h
CLC1SEL3_LC1D4S4_POSITION                equ 0004h
CLC1SEL3_LC1D4S4_SIZE                    equ 0001h
CLC1SEL3_LC1D4S4_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S4_MASK                    equ 0010h
CLC1SEL3_LC1D4S5_POSN                    equ 0005h
CLC1SEL3_LC1D4S5_POSITION                equ 0005h
CLC1SEL3_LC1D4S5_SIZE                    equ 0001h
CLC1SEL3_LC1D4S5_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S5_MASK                    equ 0020h
CLC1SEL3_LC1D4S_POSN                     equ 0000h
CLC1SEL3_LC1D4S_POSITION                 equ 0000h
CLC1SEL3_LC1D4S_SIZE                     equ 0008h
CLC1SEL3_LC1D4S_LENGTH                   equ 0008h
CLC1SEL3_LC1D4S_MASK                     equ 00FFh
CLC1SEL3_D4S_POSN                        equ 0000h
CLC1SEL3_D4S_POSITION                    equ 0000h
CLC1SEL3_D4S_SIZE                        equ 0008h
CLC1SEL3_D4S_LENGTH                      equ 0008h
CLC1SEL3_D4S_MASK                        equ 00FFh
CLC1SEL3_D4S0_POSN                       equ 0000h
CLC1SEL3_D4S0_POSITION                   equ 0000h
CLC1SEL3_D4S0_SIZE                       equ 0001h
CLC1SEL3_D4S0_LENGTH                     equ 0001h
CLC1SEL3_D4S0_MASK                       equ 0001h
CLC1SEL3_D4S1_POSN                       equ 0001h
CLC1SEL3_D4S1_POSITION                   equ 0001h
CLC1SEL3_D4S1_SIZE                       equ 0001h
CLC1SEL3_D4S1_LENGTH                     equ 0001h
CLC1SEL3_D4S1_MASK                       equ 0002h
CLC1SEL3_D4S2_POSN                       equ 0002h
CLC1SEL3_D4S2_POSITION                   equ 0002h
CLC1SEL3_D4S2_SIZE                       equ 0001h
CLC1SEL3_D4S2_LENGTH                     equ 0001h
CLC1SEL3_D4S2_MASK                       equ 0004h
CLC1SEL3_D4S3_POSN                       equ 0003h
CLC1SEL3_D4S3_POSITION                   equ 0003h
CLC1SEL3_D4S3_SIZE                       equ 0001h
CLC1SEL3_D4S3_LENGTH                     equ 0001h
CLC1SEL3_D4S3_MASK                       equ 0008h
CLC1SEL3_D4S4_POSN                       equ 0004h
CLC1SEL3_D4S4_POSITION                   equ 0004h
CLC1SEL3_D4S4_SIZE                       equ 0001h
CLC1SEL3_D4S4_LENGTH                     equ 0001h
CLC1SEL3_D4S4_MASK                       equ 0010h
CLC1SEL3_D4S5_POSN                       equ 0005h
CLC1SEL3_D4S5_POSITION                   equ 0005h
CLC1SEL3_D4S5_SIZE                       equ 0001h
CLC1SEL3_D4S5_LENGTH                     equ 0001h
CLC1SEL3_D4S5_MASK                       equ 0020h

// Register: CLC1GLS0
#define CLC1GLS0 CLC1GLS0
CLC1GLS0                                 equ 0F16h
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
CLC1GLS1                                 equ 0F17h
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
CLC1GLS2                                 equ 0F18h
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
CLC1GLS3                                 equ 0F19h
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

// Register: CLC2CON
#define CLC2CON CLC2CON
CLC2CON                                  equ 0F1Ah
// bitfield definitions
CLC2CON_LC2MODE_POSN                     equ 0000h
CLC2CON_LC2MODE_POSITION                 equ 0000h
CLC2CON_LC2MODE_SIZE                     equ 0003h
CLC2CON_LC2MODE_LENGTH                   equ 0003h
CLC2CON_LC2MODE_MASK                     equ 0007h
CLC2CON_LC2INTN_POSN                     equ 0003h
CLC2CON_LC2INTN_POSITION                 equ 0003h
CLC2CON_LC2INTN_SIZE                     equ 0001h
CLC2CON_LC2INTN_LENGTH                   equ 0001h
CLC2CON_LC2INTN_MASK                     equ 0008h
CLC2CON_LC2INTP_POSN                     equ 0004h
CLC2CON_LC2INTP_POSITION                 equ 0004h
CLC2CON_LC2INTP_SIZE                     equ 0001h
CLC2CON_LC2INTP_LENGTH                   equ 0001h
CLC2CON_LC2INTP_MASK                     equ 0010h
CLC2CON_LC2OUT_POSN                      equ 0005h
CLC2CON_LC2OUT_POSITION                  equ 0005h
CLC2CON_LC2OUT_SIZE                      equ 0001h
CLC2CON_LC2OUT_LENGTH                    equ 0001h
CLC2CON_LC2OUT_MASK                      equ 0020h
CLC2CON_LC2EN_POSN                       equ 0007h
CLC2CON_LC2EN_POSITION                   equ 0007h
CLC2CON_LC2EN_SIZE                       equ 0001h
CLC2CON_LC2EN_LENGTH                     equ 0001h
CLC2CON_LC2EN_MASK                       equ 0080h
CLC2CON_LC2MODE0_POSN                    equ 0000h
CLC2CON_LC2MODE0_POSITION                equ 0000h
CLC2CON_LC2MODE0_SIZE                    equ 0001h
CLC2CON_LC2MODE0_LENGTH                  equ 0001h
CLC2CON_LC2MODE0_MASK                    equ 0001h
CLC2CON_LC2MODE1_POSN                    equ 0001h
CLC2CON_LC2MODE1_POSITION                equ 0001h
CLC2CON_LC2MODE1_SIZE                    equ 0001h
CLC2CON_LC2MODE1_LENGTH                  equ 0001h
CLC2CON_LC2MODE1_MASK                    equ 0002h
CLC2CON_LC2MODE2_POSN                    equ 0002h
CLC2CON_LC2MODE2_POSITION                equ 0002h
CLC2CON_LC2MODE2_SIZE                    equ 0001h
CLC2CON_LC2MODE2_LENGTH                  equ 0001h
CLC2CON_LC2MODE2_MASK                    equ 0004h
CLC2CON_MODE_POSN                        equ 0000h
CLC2CON_MODE_POSITION                    equ 0000h
CLC2CON_MODE_SIZE                        equ 0003h
CLC2CON_MODE_LENGTH                      equ 0003h
CLC2CON_MODE_MASK                        equ 0007h
CLC2CON_INTN_POSN                        equ 0003h
CLC2CON_INTN_POSITION                    equ 0003h
CLC2CON_INTN_SIZE                        equ 0001h
CLC2CON_INTN_LENGTH                      equ 0001h
CLC2CON_INTN_MASK                        equ 0008h
CLC2CON_INTP_POSN                        equ 0004h
CLC2CON_INTP_POSITION                    equ 0004h
CLC2CON_INTP_SIZE                        equ 0001h
CLC2CON_INTP_LENGTH                      equ 0001h
CLC2CON_INTP_MASK                        equ 0010h
CLC2CON_OUT_POSN                         equ 0005h
CLC2CON_OUT_POSITION                     equ 0005h
CLC2CON_OUT_SIZE                         equ 0001h
CLC2CON_OUT_LENGTH                       equ 0001h
CLC2CON_OUT_MASK                         equ 0020h
CLC2CON_EN_POSN                          equ 0007h
CLC2CON_EN_POSITION                      equ 0007h
CLC2CON_EN_SIZE                          equ 0001h
CLC2CON_EN_LENGTH                        equ 0001h
CLC2CON_EN_MASK                          equ 0080h
CLC2CON_MODE0_POSN                       equ 0000h
CLC2CON_MODE0_POSITION                   equ 0000h
CLC2CON_MODE0_SIZE                       equ 0001h
CLC2CON_MODE0_LENGTH                     equ 0001h
CLC2CON_MODE0_MASK                       equ 0001h
CLC2CON_MODE1_POSN                       equ 0001h
CLC2CON_MODE1_POSITION                   equ 0001h
CLC2CON_MODE1_SIZE                       equ 0001h
CLC2CON_MODE1_LENGTH                     equ 0001h
CLC2CON_MODE1_MASK                       equ 0002h
CLC2CON_MODE2_POSN                       equ 0002h
CLC2CON_MODE2_POSITION                   equ 0002h
CLC2CON_MODE2_SIZE                       equ 0001h
CLC2CON_MODE2_LENGTH                     equ 0001h
CLC2CON_MODE2_MASK                       equ 0004h

// Register: CLC2POL
#define CLC2POL CLC2POL
CLC2POL                                  equ 0F1Bh
// bitfield definitions
CLC2POL_LC2G1POL_POSN                    equ 0000h
CLC2POL_LC2G1POL_POSITION                equ 0000h
CLC2POL_LC2G1POL_SIZE                    equ 0001h
CLC2POL_LC2G1POL_LENGTH                  equ 0001h
CLC2POL_LC2G1POL_MASK                    equ 0001h
CLC2POL_LC2G2POL_POSN                    equ 0001h
CLC2POL_LC2G2POL_POSITION                equ 0001h
CLC2POL_LC2G2POL_SIZE                    equ 0001h
CLC2POL_LC2G2POL_LENGTH                  equ 0001h
CLC2POL_LC2G2POL_MASK                    equ 0002h
CLC2POL_LC2G3POL_POSN                    equ 0002h
CLC2POL_LC2G3POL_POSITION                equ 0002h
CLC2POL_LC2G3POL_SIZE                    equ 0001h
CLC2POL_LC2G3POL_LENGTH                  equ 0001h
CLC2POL_LC2G3POL_MASK                    equ 0004h
CLC2POL_LC2G4POL_POSN                    equ 0003h
CLC2POL_LC2G4POL_POSITION                equ 0003h
CLC2POL_LC2G4POL_SIZE                    equ 0001h
CLC2POL_LC2G4POL_LENGTH                  equ 0001h
CLC2POL_LC2G4POL_MASK                    equ 0008h
CLC2POL_LC2POL_POSN                      equ 0007h
CLC2POL_LC2POL_POSITION                  equ 0007h
CLC2POL_LC2POL_SIZE                      equ 0001h
CLC2POL_LC2POL_LENGTH                    equ 0001h
CLC2POL_LC2POL_MASK                      equ 0080h
CLC2POL_G1POL_POSN                       equ 0000h
CLC2POL_G1POL_POSITION                   equ 0000h
CLC2POL_G1POL_SIZE                       equ 0001h
CLC2POL_G1POL_LENGTH                     equ 0001h
CLC2POL_G1POL_MASK                       equ 0001h
CLC2POL_G2POL_POSN                       equ 0001h
CLC2POL_G2POL_POSITION                   equ 0001h
CLC2POL_G2POL_SIZE                       equ 0001h
CLC2POL_G2POL_LENGTH                     equ 0001h
CLC2POL_G2POL_MASK                       equ 0002h
CLC2POL_G3POL_POSN                       equ 0002h
CLC2POL_G3POL_POSITION                   equ 0002h
CLC2POL_G3POL_SIZE                       equ 0001h
CLC2POL_G3POL_LENGTH                     equ 0001h
CLC2POL_G3POL_MASK                       equ 0004h
CLC2POL_G4POL_POSN                       equ 0003h
CLC2POL_G4POL_POSITION                   equ 0003h
CLC2POL_G4POL_SIZE                       equ 0001h
CLC2POL_G4POL_LENGTH                     equ 0001h
CLC2POL_G4POL_MASK                       equ 0008h
CLC2POL_POL_POSN                         equ 0007h
CLC2POL_POL_POSITION                     equ 0007h
CLC2POL_POL_SIZE                         equ 0001h
CLC2POL_POL_LENGTH                       equ 0001h
CLC2POL_POL_MASK                         equ 0080h

// Register: CLC2SEL0
#define CLC2SEL0 CLC2SEL0
CLC2SEL0                                 equ 0F1Ch
// bitfield definitions
CLC2SEL0_LC2D1S0_POSN                    equ 0000h
CLC2SEL0_LC2D1S0_POSITION                equ 0000h
CLC2SEL0_LC2D1S0_SIZE                    equ 0001h
CLC2SEL0_LC2D1S0_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S0_MASK                    equ 0001h
CLC2SEL0_LC2D1S1_POSN                    equ 0001h
CLC2SEL0_LC2D1S1_POSITION                equ 0001h
CLC2SEL0_LC2D1S1_SIZE                    equ 0001h
CLC2SEL0_LC2D1S1_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S1_MASK                    equ 0002h
CLC2SEL0_LC2D1S2_POSN                    equ 0002h
CLC2SEL0_LC2D1S2_POSITION                equ 0002h
CLC2SEL0_LC2D1S2_SIZE                    equ 0001h
CLC2SEL0_LC2D1S2_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S2_MASK                    equ 0004h
CLC2SEL0_LC2D1S3_POSN                    equ 0003h
CLC2SEL0_LC2D1S3_POSITION                equ 0003h
CLC2SEL0_LC2D1S3_SIZE                    equ 0001h
CLC2SEL0_LC2D1S3_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S3_MASK                    equ 0008h
CLC2SEL0_LC2D1S4_POSN                    equ 0004h
CLC2SEL0_LC2D1S4_POSITION                equ 0004h
CLC2SEL0_LC2D1S4_SIZE                    equ 0001h
CLC2SEL0_LC2D1S4_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S4_MASK                    equ 0010h
CLC2SEL0_LC2D1S5_POSN                    equ 0005h
CLC2SEL0_LC2D1S5_POSITION                equ 0005h
CLC2SEL0_LC2D1S5_SIZE                    equ 0001h
CLC2SEL0_LC2D1S5_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S5_MASK                    equ 0020h
CLC2SEL0_LC2D1S_POSN                     equ 0000h
CLC2SEL0_LC2D1S_POSITION                 equ 0000h
CLC2SEL0_LC2D1S_SIZE                     equ 0008h
CLC2SEL0_LC2D1S_LENGTH                   equ 0008h
CLC2SEL0_LC2D1S_MASK                     equ 00FFh
CLC2SEL0_D1S_POSN                        equ 0000h
CLC2SEL0_D1S_POSITION                    equ 0000h
CLC2SEL0_D1S_SIZE                        equ 0008h
CLC2SEL0_D1S_LENGTH                      equ 0008h
CLC2SEL0_D1S_MASK                        equ 00FFh
CLC2SEL0_D1S0_POSN                       equ 0000h
CLC2SEL0_D1S0_POSITION                   equ 0000h
CLC2SEL0_D1S0_SIZE                       equ 0001h
CLC2SEL0_D1S0_LENGTH                     equ 0001h
CLC2SEL0_D1S0_MASK                       equ 0001h
CLC2SEL0_D1S1_POSN                       equ 0001h
CLC2SEL0_D1S1_POSITION                   equ 0001h
CLC2SEL0_D1S1_SIZE                       equ 0001h
CLC2SEL0_D1S1_LENGTH                     equ 0001h
CLC2SEL0_D1S1_MASK                       equ 0002h
CLC2SEL0_D1S2_POSN                       equ 0002h
CLC2SEL0_D1S2_POSITION                   equ 0002h
CLC2SEL0_D1S2_SIZE                       equ 0001h
CLC2SEL0_D1S2_LENGTH                     equ 0001h
CLC2SEL0_D1S2_MASK                       equ 0004h
CLC2SEL0_D1S3_POSN                       equ 0003h
CLC2SEL0_D1S3_POSITION                   equ 0003h
CLC2SEL0_D1S3_SIZE                       equ 0001h
CLC2SEL0_D1S3_LENGTH                     equ 0001h
CLC2SEL0_D1S3_MASK                       equ 0008h
CLC2SEL0_D1S4_POSN                       equ 0004h
CLC2SEL0_D1S4_POSITION                   equ 0004h
CLC2SEL0_D1S4_SIZE                       equ 0001h
CLC2SEL0_D1S4_LENGTH                     equ 0001h
CLC2SEL0_D1S4_MASK                       equ 0010h
CLC2SEL0_D1S5_POSN                       equ 0005h
CLC2SEL0_D1S5_POSITION                   equ 0005h
CLC2SEL0_D1S5_SIZE                       equ 0001h
CLC2SEL0_D1S5_LENGTH                     equ 0001h
CLC2SEL0_D1S5_MASK                       equ 0020h

// Register: CLC2SEL1
#define CLC2SEL1 CLC2SEL1
CLC2SEL1                                 equ 0F1Dh
// bitfield definitions
CLC2SEL1_LC2D2S0_POSN                    equ 0000h
CLC2SEL1_LC2D2S0_POSITION                equ 0000h
CLC2SEL1_LC2D2S0_SIZE                    equ 0001h
CLC2SEL1_LC2D2S0_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S0_MASK                    equ 0001h
CLC2SEL1_LC2D2S1_POSN                    equ 0001h
CLC2SEL1_LC2D2S1_POSITION                equ 0001h
CLC2SEL1_LC2D2S1_SIZE                    equ 0001h
CLC2SEL1_LC2D2S1_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S1_MASK                    equ 0002h
CLC2SEL1_LC2D2S2_POSN                    equ 0002h
CLC2SEL1_LC2D2S2_POSITION                equ 0002h
CLC2SEL1_LC2D2S2_SIZE                    equ 0001h
CLC2SEL1_LC2D2S2_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S2_MASK                    equ 0004h
CLC2SEL1_LC2D2S3_POSN                    equ 0003h
CLC2SEL1_LC2D2S3_POSITION                equ 0003h
CLC2SEL1_LC2D2S3_SIZE                    equ 0001h
CLC2SEL1_LC2D2S3_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S3_MASK                    equ 0008h
CLC2SEL1_LC2D2S4_POSN                    equ 0004h
CLC2SEL1_LC2D2S4_POSITION                equ 0004h
CLC2SEL1_LC2D2S4_SIZE                    equ 0001h
CLC2SEL1_LC2D2S4_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S4_MASK                    equ 0010h
CLC2SEL1_LC2D2S5_POSN                    equ 0005h
CLC2SEL1_LC2D2S5_POSITION                equ 0005h
CLC2SEL1_LC2D2S5_SIZE                    equ 0001h
CLC2SEL1_LC2D2S5_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S5_MASK                    equ 0020h
CLC2SEL1_LC2D2S_POSN                     equ 0000h
CLC2SEL1_LC2D2S_POSITION                 equ 0000h
CLC2SEL1_LC2D2S_SIZE                     equ 0008h
CLC2SEL1_LC2D2S_LENGTH                   equ 0008h
CLC2SEL1_LC2D2S_MASK                     equ 00FFh
CLC2SEL1_D2S_POSN                        equ 0000h
CLC2SEL1_D2S_POSITION                    equ 0000h
CLC2SEL1_D2S_SIZE                        equ 0008h
CLC2SEL1_D2S_LENGTH                      equ 0008h
CLC2SEL1_D2S_MASK                        equ 00FFh
CLC2SEL1_D2S0_POSN                       equ 0000h
CLC2SEL1_D2S0_POSITION                   equ 0000h
CLC2SEL1_D2S0_SIZE                       equ 0001h
CLC2SEL1_D2S0_LENGTH                     equ 0001h
CLC2SEL1_D2S0_MASK                       equ 0001h
CLC2SEL1_D2S1_POSN                       equ 0001h
CLC2SEL1_D2S1_POSITION                   equ 0001h
CLC2SEL1_D2S1_SIZE                       equ 0001h
CLC2SEL1_D2S1_LENGTH                     equ 0001h
CLC2SEL1_D2S1_MASK                       equ 0002h
CLC2SEL1_D2S2_POSN                       equ 0002h
CLC2SEL1_D2S2_POSITION                   equ 0002h
CLC2SEL1_D2S2_SIZE                       equ 0001h
CLC2SEL1_D2S2_LENGTH                     equ 0001h
CLC2SEL1_D2S2_MASK                       equ 0004h
CLC2SEL1_D2S3_POSN                       equ 0003h
CLC2SEL1_D2S3_POSITION                   equ 0003h
CLC2SEL1_D2S3_SIZE                       equ 0001h
CLC2SEL1_D2S3_LENGTH                     equ 0001h
CLC2SEL1_D2S3_MASK                       equ 0008h
CLC2SEL1_D2S4_POSN                       equ 0004h
CLC2SEL1_D2S4_POSITION                   equ 0004h
CLC2SEL1_D2S4_SIZE                       equ 0001h
CLC2SEL1_D2S4_LENGTH                     equ 0001h
CLC2SEL1_D2S4_MASK                       equ 0010h
CLC2SEL1_D2S5_POSN                       equ 0005h
CLC2SEL1_D2S5_POSITION                   equ 0005h
CLC2SEL1_D2S5_SIZE                       equ 0001h
CLC2SEL1_D2S5_LENGTH                     equ 0001h
CLC2SEL1_D2S5_MASK                       equ 0020h

// Register: CLC2SEL2
#define CLC2SEL2 CLC2SEL2
CLC2SEL2                                 equ 0F1Eh
// bitfield definitions
CLC2SEL2_LC2D3S0_POSN                    equ 0000h
CLC2SEL2_LC2D3S0_POSITION                equ 0000h
CLC2SEL2_LC2D3S0_SIZE                    equ 0001h
CLC2SEL2_LC2D3S0_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S0_MASK                    equ 0001h
CLC2SEL2_LC2D3S1_POSN                    equ 0001h
CLC2SEL2_LC2D3S1_POSITION                equ 0001h
CLC2SEL2_LC2D3S1_SIZE                    equ 0001h
CLC2SEL2_LC2D3S1_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S1_MASK                    equ 0002h
CLC2SEL2_LC2D3S2_POSN                    equ 0002h
CLC2SEL2_LC2D3S2_POSITION                equ 0002h
CLC2SEL2_LC2D3S2_SIZE                    equ 0001h
CLC2SEL2_LC2D3S2_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S2_MASK                    equ 0004h
CLC2SEL2_LC2D3S3_POSN                    equ 0003h
CLC2SEL2_LC2D3S3_POSITION                equ 0003h
CLC2SEL2_LC2D3S3_SIZE                    equ 0001h
CLC2SEL2_LC2D3S3_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S3_MASK                    equ 0008h
CLC2SEL2_LC2D3S4_POSN                    equ 0004h
CLC2SEL2_LC2D3S4_POSITION                equ 0004h
CLC2SEL2_LC2D3S4_SIZE                    equ 0001h
CLC2SEL2_LC2D3S4_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S4_MASK                    equ 0010h
CLC2SEL2_LC2D3S5_POSN                    equ 0005h
CLC2SEL2_LC2D3S5_POSITION                equ 0005h
CLC2SEL2_LC2D3S5_SIZE                    equ 0001h
CLC2SEL2_LC2D3S5_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S5_MASK                    equ 0020h
CLC2SEL2_LC2D3S_POSN                     equ 0000h
CLC2SEL2_LC2D3S_POSITION                 equ 0000h
CLC2SEL2_LC2D3S_SIZE                     equ 0008h
CLC2SEL2_LC2D3S_LENGTH                   equ 0008h
CLC2SEL2_LC2D3S_MASK                     equ 00FFh
CLC2SEL2_D3S_POSN                        equ 0000h
CLC2SEL2_D3S_POSITION                    equ 0000h
CLC2SEL2_D3S_SIZE                        equ 0008h
CLC2SEL2_D3S_LENGTH                      equ 0008h
CLC2SEL2_D3S_MASK                        equ 00FFh
CLC2SEL2_D3S0_POSN                       equ 0000h
CLC2SEL2_D3S0_POSITION                   equ 0000h
CLC2SEL2_D3S0_SIZE                       equ 0001h
CLC2SEL2_D3S0_LENGTH                     equ 0001h
CLC2SEL2_D3S0_MASK                       equ 0001h
CLC2SEL2_D3S1_POSN                       equ 0001h
CLC2SEL2_D3S1_POSITION                   equ 0001h
CLC2SEL2_D3S1_SIZE                       equ 0001h
CLC2SEL2_D3S1_LENGTH                     equ 0001h
CLC2SEL2_D3S1_MASK                       equ 0002h
CLC2SEL2_D3S2_POSN                       equ 0002h
CLC2SEL2_D3S2_POSITION                   equ 0002h
CLC2SEL2_D3S2_SIZE                       equ 0001h
CLC2SEL2_D3S2_LENGTH                     equ 0001h
CLC2SEL2_D3S2_MASK                       equ 0004h
CLC2SEL2_D3S3_POSN                       equ 0003h
CLC2SEL2_D3S3_POSITION                   equ 0003h
CLC2SEL2_D3S3_SIZE                       equ 0001h
CLC2SEL2_D3S3_LENGTH                     equ 0001h
CLC2SEL2_D3S3_MASK                       equ 0008h
CLC2SEL2_D3S4_POSN                       equ 0004h
CLC2SEL2_D3S4_POSITION                   equ 0004h
CLC2SEL2_D3S4_SIZE                       equ 0001h
CLC2SEL2_D3S4_LENGTH                     equ 0001h
CLC2SEL2_D3S4_MASK                       equ 0010h
CLC2SEL2_D3S5_POSN                       equ 0005h
CLC2SEL2_D3S5_POSITION                   equ 0005h
CLC2SEL2_D3S5_SIZE                       equ 0001h
CLC2SEL2_D3S5_LENGTH                     equ 0001h
CLC2SEL2_D3S5_MASK                       equ 0020h

// Register: CLC2SEL3
#define CLC2SEL3 CLC2SEL3
CLC2SEL3                                 equ 0F1Fh
// bitfield definitions
CLC2SEL3_LC2D4S0_POSN                    equ 0000h
CLC2SEL3_LC2D4S0_POSITION                equ 0000h
CLC2SEL3_LC2D4S0_SIZE                    equ 0001h
CLC2SEL3_LC2D4S0_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S0_MASK                    equ 0001h
CLC2SEL3_LC2D4S1_POSN                    equ 0001h
CLC2SEL3_LC2D4S1_POSITION                equ 0001h
CLC2SEL3_LC2D4S1_SIZE                    equ 0001h
CLC2SEL3_LC2D4S1_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S1_MASK                    equ 0002h
CLC2SEL3_LC2D4S2_POSN                    equ 0002h
CLC2SEL3_LC2D4S2_POSITION                equ 0002h
CLC2SEL3_LC2D4S2_SIZE                    equ 0001h
CLC2SEL3_LC2D4S2_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S2_MASK                    equ 0004h
CLC2SEL3_LC2D4S3_POSN                    equ 0003h
CLC2SEL3_LC2D4S3_POSITION                equ 0003h
CLC2SEL3_LC2D4S3_SIZE                    equ 0001h
CLC2SEL3_LC2D4S3_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S3_MASK                    equ 0008h
CLC2SEL3_LC2D4S4_POSN                    equ 0004h
CLC2SEL3_LC2D4S4_POSITION                equ 0004h
CLC2SEL3_LC2D4S4_SIZE                    equ 0001h
CLC2SEL3_LC2D4S4_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S4_MASK                    equ 0010h
CLC2SEL3_LC2D4S5_POSN                    equ 0005h
CLC2SEL3_LC2D4S5_POSITION                equ 0005h
CLC2SEL3_LC2D4S5_SIZE                    equ 0001h
CLC2SEL3_LC2D4S5_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S5_MASK                    equ 0020h
CLC2SEL3_LC2D4S_POSN                     equ 0000h
CLC2SEL3_LC2D4S_POSITION                 equ 0000h
CLC2SEL3_LC2D4S_SIZE                     equ 0008h
CLC2SEL3_LC2D4S_LENGTH                   equ 0008h
CLC2SEL3_LC2D4S_MASK                     equ 00FFh
CLC2SEL3_D4S_POSN                        equ 0000h
CLC2SEL3_D4S_POSITION                    equ 0000h
CLC2SEL3_D4S_SIZE                        equ 0008h
CLC2SEL3_D4S_LENGTH                      equ 0008h
CLC2SEL3_D4S_MASK                        equ 00FFh
CLC2SEL3_D4S0_POSN                       equ 0000h
CLC2SEL3_D4S0_POSITION                   equ 0000h
CLC2SEL3_D4S0_SIZE                       equ 0001h
CLC2SEL3_D4S0_LENGTH                     equ 0001h
CLC2SEL3_D4S0_MASK                       equ 0001h
CLC2SEL3_D4S1_POSN                       equ 0001h
CLC2SEL3_D4S1_POSITION                   equ 0001h
CLC2SEL3_D4S1_SIZE                       equ 0001h
CLC2SEL3_D4S1_LENGTH                     equ 0001h
CLC2SEL3_D4S1_MASK                       equ 0002h
CLC2SEL3_D4S2_POSN                       equ 0002h
CLC2SEL3_D4S2_POSITION                   equ 0002h
CLC2SEL3_D4S2_SIZE                       equ 0001h
CLC2SEL3_D4S2_LENGTH                     equ 0001h
CLC2SEL3_D4S2_MASK                       equ 0004h
CLC2SEL3_D4S3_POSN                       equ 0003h
CLC2SEL3_D4S3_POSITION                   equ 0003h
CLC2SEL3_D4S3_SIZE                       equ 0001h
CLC2SEL3_D4S3_LENGTH                     equ 0001h
CLC2SEL3_D4S3_MASK                       equ 0008h
CLC2SEL3_D4S4_POSN                       equ 0004h
CLC2SEL3_D4S4_POSITION                   equ 0004h
CLC2SEL3_D4S4_SIZE                       equ 0001h
CLC2SEL3_D4S4_LENGTH                     equ 0001h
CLC2SEL3_D4S4_MASK                       equ 0010h
CLC2SEL3_D4S5_POSN                       equ 0005h
CLC2SEL3_D4S5_POSITION                   equ 0005h
CLC2SEL3_D4S5_SIZE                       equ 0001h
CLC2SEL3_D4S5_LENGTH                     equ 0001h
CLC2SEL3_D4S5_MASK                       equ 0020h

// Register: CLC2GLS0
#define CLC2GLS0 CLC2GLS0
CLC2GLS0                                 equ 0F20h
// bitfield definitions
CLC2GLS0_LC2G1D1N_POSN                   equ 0000h
CLC2GLS0_LC2G1D1N_POSITION               equ 0000h
CLC2GLS0_LC2G1D1N_SIZE                   equ 0001h
CLC2GLS0_LC2G1D1N_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D1N_MASK                   equ 0001h
CLC2GLS0_LC2G1D1T_POSN                   equ 0001h
CLC2GLS0_LC2G1D1T_POSITION               equ 0001h
CLC2GLS0_LC2G1D1T_SIZE                   equ 0001h
CLC2GLS0_LC2G1D1T_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D1T_MASK                   equ 0002h
CLC2GLS0_LC2G1D2N_POSN                   equ 0002h
CLC2GLS0_LC2G1D2N_POSITION               equ 0002h
CLC2GLS0_LC2G1D2N_SIZE                   equ 0001h
CLC2GLS0_LC2G1D2N_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D2N_MASK                   equ 0004h
CLC2GLS0_LC2G1D2T_POSN                   equ 0003h
CLC2GLS0_LC2G1D2T_POSITION               equ 0003h
CLC2GLS0_LC2G1D2T_SIZE                   equ 0001h
CLC2GLS0_LC2G1D2T_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D2T_MASK                   equ 0008h
CLC2GLS0_LC2G1D3N_POSN                   equ 0004h
CLC2GLS0_LC2G1D3N_POSITION               equ 0004h
CLC2GLS0_LC2G1D3N_SIZE                   equ 0001h
CLC2GLS0_LC2G1D3N_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D3N_MASK                   equ 0010h
CLC2GLS0_LC2G1D3T_POSN                   equ 0005h
CLC2GLS0_LC2G1D3T_POSITION               equ 0005h
CLC2GLS0_LC2G1D3T_SIZE                   equ 0001h
CLC2GLS0_LC2G1D3T_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D3T_MASK                   equ 0020h
CLC2GLS0_LC2G1D4N_POSN                   equ 0006h
CLC2GLS0_LC2G1D4N_POSITION               equ 0006h
CLC2GLS0_LC2G1D4N_SIZE                   equ 0001h
CLC2GLS0_LC2G1D4N_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D4N_MASK                   equ 0040h
CLC2GLS0_LC2G1D4T_POSN                   equ 0007h
CLC2GLS0_LC2G1D4T_POSITION               equ 0007h
CLC2GLS0_LC2G1D4T_SIZE                   equ 0001h
CLC2GLS0_LC2G1D4T_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D4T_MASK                   equ 0080h
CLC2GLS0_D1N_POSN                        equ 0000h
CLC2GLS0_D1N_POSITION                    equ 0000h
CLC2GLS0_D1N_SIZE                        equ 0001h
CLC2GLS0_D1N_LENGTH                      equ 0001h
CLC2GLS0_D1N_MASK                        equ 0001h
CLC2GLS0_D1T_POSN                        equ 0001h
CLC2GLS0_D1T_POSITION                    equ 0001h
CLC2GLS0_D1T_SIZE                        equ 0001h
CLC2GLS0_D1T_LENGTH                      equ 0001h
CLC2GLS0_D1T_MASK                        equ 0002h
CLC2GLS0_D2N_POSN                        equ 0002h
CLC2GLS0_D2N_POSITION                    equ 0002h
CLC2GLS0_D2N_SIZE                        equ 0001h
CLC2GLS0_D2N_LENGTH                      equ 0001h
CLC2GLS0_D2N_MASK                        equ 0004h
CLC2GLS0_D2T_POSN                        equ 0003h
CLC2GLS0_D2T_POSITION                    equ 0003h
CLC2GLS0_D2T_SIZE                        equ 0001h
CLC2GLS0_D2T_LENGTH                      equ 0001h
CLC2GLS0_D2T_MASK                        equ 0008h
CLC2GLS0_D3N_POSN                        equ 0004h
CLC2GLS0_D3N_POSITION                    equ 0004h
CLC2GLS0_D3N_SIZE                        equ 0001h
CLC2GLS0_D3N_LENGTH                      equ 0001h
CLC2GLS0_D3N_MASK                        equ 0010h
CLC2GLS0_D3T_POSN                        equ 0005h
CLC2GLS0_D3T_POSITION                    equ 0005h
CLC2GLS0_D3T_SIZE                        equ 0001h
CLC2GLS0_D3T_LENGTH                      equ 0001h
CLC2GLS0_D3T_MASK                        equ 0020h
CLC2GLS0_D4N_POSN                        equ 0006h
CLC2GLS0_D4N_POSITION                    equ 0006h
CLC2GLS0_D4N_SIZE                        equ 0001h
CLC2GLS0_D4N_LENGTH                      equ 0001h
CLC2GLS0_D4N_MASK                        equ 0040h
CLC2GLS0_D4T_POSN                        equ 0007h
CLC2GLS0_D4T_POSITION                    equ 0007h
CLC2GLS0_D4T_SIZE                        equ 0001h
CLC2GLS0_D4T_LENGTH                      equ 0001h
CLC2GLS0_D4T_MASK                        equ 0080h

// Register: CLC2GLS1
#define CLC2GLS1 CLC2GLS1
CLC2GLS1                                 equ 0F21h
// bitfield definitions
CLC2GLS1_LC2G2D1N_POSN                   equ 0000h
CLC2GLS1_LC2G2D1N_POSITION               equ 0000h
CLC2GLS1_LC2G2D1N_SIZE                   equ 0001h
CLC2GLS1_LC2G2D1N_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D1N_MASK                   equ 0001h
CLC2GLS1_LC2G2D1T_POSN                   equ 0001h
CLC2GLS1_LC2G2D1T_POSITION               equ 0001h
CLC2GLS1_LC2G2D1T_SIZE                   equ 0001h
CLC2GLS1_LC2G2D1T_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D1T_MASK                   equ 0002h
CLC2GLS1_LC2G2D2N_POSN                   equ 0002h
CLC2GLS1_LC2G2D2N_POSITION               equ 0002h
CLC2GLS1_LC2G2D2N_SIZE                   equ 0001h
CLC2GLS1_LC2G2D2N_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D2N_MASK                   equ 0004h
CLC2GLS1_LC2G2D2T_POSN                   equ 0003h
CLC2GLS1_LC2G2D2T_POSITION               equ 0003h
CLC2GLS1_LC2G2D2T_SIZE                   equ 0001h
CLC2GLS1_LC2G2D2T_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D2T_MASK                   equ 0008h
CLC2GLS1_LC2G2D3N_POSN                   equ 0004h
CLC2GLS1_LC2G2D3N_POSITION               equ 0004h
CLC2GLS1_LC2G2D3N_SIZE                   equ 0001h
CLC2GLS1_LC2G2D3N_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D3N_MASK                   equ 0010h
CLC2GLS1_LC2G2D3T_POSN                   equ 0005h
CLC2GLS1_LC2G2D3T_POSITION               equ 0005h
CLC2GLS1_LC2G2D3T_SIZE                   equ 0001h
CLC2GLS1_LC2G2D3T_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D3T_MASK                   equ 0020h
CLC2GLS1_LC2G2D4N_POSN                   equ 0006h
CLC2GLS1_LC2G2D4N_POSITION               equ 0006h
CLC2GLS1_LC2G2D4N_SIZE                   equ 0001h
CLC2GLS1_LC2G2D4N_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D4N_MASK                   equ 0040h
CLC2GLS1_LC2G2D4T_POSN                   equ 0007h
CLC2GLS1_LC2G2D4T_POSITION               equ 0007h
CLC2GLS1_LC2G2D4T_SIZE                   equ 0001h
CLC2GLS1_LC2G2D4T_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D4T_MASK                   equ 0080h
CLC2GLS1_D1N_POSN                        equ 0000h
CLC2GLS1_D1N_POSITION                    equ 0000h
CLC2GLS1_D1N_SIZE                        equ 0001h
CLC2GLS1_D1N_LENGTH                      equ 0001h
CLC2GLS1_D1N_MASK                        equ 0001h
CLC2GLS1_D1T_POSN                        equ 0001h
CLC2GLS1_D1T_POSITION                    equ 0001h
CLC2GLS1_D1T_SIZE                        equ 0001h
CLC2GLS1_D1T_LENGTH                      equ 0001h
CLC2GLS1_D1T_MASK                        equ 0002h
CLC2GLS1_D2N_POSN                        equ 0002h
CLC2GLS1_D2N_POSITION                    equ 0002h
CLC2GLS1_D2N_SIZE                        equ 0001h
CLC2GLS1_D2N_LENGTH                      equ 0001h
CLC2GLS1_D2N_MASK                        equ 0004h
CLC2GLS1_D2T_POSN                        equ 0003h
CLC2GLS1_D2T_POSITION                    equ 0003h
CLC2GLS1_D2T_SIZE                        equ 0001h
CLC2GLS1_D2T_LENGTH                      equ 0001h
CLC2GLS1_D2T_MASK                        equ 0008h
CLC2GLS1_D3N_POSN                        equ 0004h
CLC2GLS1_D3N_POSITION                    equ 0004h
CLC2GLS1_D3N_SIZE                        equ 0001h
CLC2GLS1_D3N_LENGTH                      equ 0001h
CLC2GLS1_D3N_MASK                        equ 0010h
CLC2GLS1_D3T_POSN                        equ 0005h
CLC2GLS1_D3T_POSITION                    equ 0005h
CLC2GLS1_D3T_SIZE                        equ 0001h
CLC2GLS1_D3T_LENGTH                      equ 0001h
CLC2GLS1_D3T_MASK                        equ 0020h
CLC2GLS1_D4N_POSN                        equ 0006h
CLC2GLS1_D4N_POSITION                    equ 0006h
CLC2GLS1_D4N_SIZE                        equ 0001h
CLC2GLS1_D4N_LENGTH                      equ 0001h
CLC2GLS1_D4N_MASK                        equ 0040h
CLC2GLS1_D4T_POSN                        equ 0007h
CLC2GLS1_D4T_POSITION                    equ 0007h
CLC2GLS1_D4T_SIZE                        equ 0001h
CLC2GLS1_D4T_LENGTH                      equ 0001h
CLC2GLS1_D4T_MASK                        equ 0080h

// Register: CLC2GLS2
#define CLC2GLS2 CLC2GLS2
CLC2GLS2                                 equ 0F22h
// bitfield definitions
CLC2GLS2_LC2G3D1N_POSN                   equ 0000h
CLC2GLS2_LC2G3D1N_POSITION               equ 0000h
CLC2GLS2_LC2G3D1N_SIZE                   equ 0001h
CLC2GLS2_LC2G3D1N_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D1N_MASK                   equ 0001h
CLC2GLS2_LC2G3D1T_POSN                   equ 0001h
CLC2GLS2_LC2G3D1T_POSITION               equ 0001h
CLC2GLS2_LC2G3D1T_SIZE                   equ 0001h
CLC2GLS2_LC2G3D1T_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D1T_MASK                   equ 0002h
CLC2GLS2_LC2G3D2N_POSN                   equ 0002h
CLC2GLS2_LC2G3D2N_POSITION               equ 0002h
CLC2GLS2_LC2G3D2N_SIZE                   equ 0001h
CLC2GLS2_LC2G3D2N_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D2N_MASK                   equ 0004h
CLC2GLS2_LC2G3D2T_POSN                   equ 0003h
CLC2GLS2_LC2G3D2T_POSITION               equ 0003h
CLC2GLS2_LC2G3D2T_SIZE                   equ 0001h
CLC2GLS2_LC2G3D2T_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D2T_MASK                   equ 0008h
CLC2GLS2_LC2G3D3N_POSN                   equ 0004h
CLC2GLS2_LC2G3D3N_POSITION               equ 0004h
CLC2GLS2_LC2G3D3N_SIZE                   equ 0001h
CLC2GLS2_LC2G3D3N_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D3N_MASK                   equ 0010h
CLC2GLS2_LC2G3D3T_POSN                   equ 0005h
CLC2GLS2_LC2G3D3T_POSITION               equ 0005h
CLC2GLS2_LC2G3D3T_SIZE                   equ 0001h
CLC2GLS2_LC2G3D3T_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D3T_MASK                   equ 0020h
CLC2GLS2_LC2G3D4N_POSN                   equ 0006h
CLC2GLS2_LC2G3D4N_POSITION               equ 0006h
CLC2GLS2_LC2G3D4N_SIZE                   equ 0001h
CLC2GLS2_LC2G3D4N_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D4N_MASK                   equ 0040h
CLC2GLS2_LC2G3D4T_POSN                   equ 0007h
CLC2GLS2_LC2G3D4T_POSITION               equ 0007h
CLC2GLS2_LC2G3D4T_SIZE                   equ 0001h
CLC2GLS2_LC2G3D4T_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D4T_MASK                   equ 0080h
CLC2GLS2_D1N_POSN                        equ 0000h
CLC2GLS2_D1N_POSITION                    equ 0000h
CLC2GLS2_D1N_SIZE                        equ 0001h
CLC2GLS2_D1N_LENGTH                      equ 0001h
CLC2GLS2_D1N_MASK                        equ 0001h
CLC2GLS2_D1T_POSN                        equ 0001h
CLC2GLS2_D1T_POSITION                    equ 0001h
CLC2GLS2_D1T_SIZE                        equ 0001h
CLC2GLS2_D1T_LENGTH                      equ 0001h
CLC2GLS2_D1T_MASK                        equ 0002h
CLC2GLS2_D2N_POSN                        equ 0002h
CLC2GLS2_D2N_POSITION                    equ 0002h
CLC2GLS2_D2N_SIZE                        equ 0001h
CLC2GLS2_D2N_LENGTH                      equ 0001h
CLC2GLS2_D2N_MASK                        equ 0004h
CLC2GLS2_D2T_POSN                        equ 0003h
CLC2GLS2_D2T_POSITION                    equ 0003h
CLC2GLS2_D2T_SIZE                        equ 0001h
CLC2GLS2_D2T_LENGTH                      equ 0001h
CLC2GLS2_D2T_MASK                        equ 0008h
CLC2GLS2_D3N_POSN                        equ 0004h
CLC2GLS2_D3N_POSITION                    equ 0004h
CLC2GLS2_D3N_SIZE                        equ 0001h
CLC2GLS2_D3N_LENGTH                      equ 0001h
CLC2GLS2_D3N_MASK                        equ 0010h
CLC2GLS2_D3T_POSN                        equ 0005h
CLC2GLS2_D3T_POSITION                    equ 0005h
CLC2GLS2_D3T_SIZE                        equ 0001h
CLC2GLS2_D3T_LENGTH                      equ 0001h
CLC2GLS2_D3T_MASK                        equ 0020h
CLC2GLS2_D4N_POSN                        equ 0006h
CLC2GLS2_D4N_POSITION                    equ 0006h
CLC2GLS2_D4N_SIZE                        equ 0001h
CLC2GLS2_D4N_LENGTH                      equ 0001h
CLC2GLS2_D4N_MASK                        equ 0040h
CLC2GLS2_D4T_POSN                        equ 0007h
CLC2GLS2_D4T_POSITION                    equ 0007h
CLC2GLS2_D4T_SIZE                        equ 0001h
CLC2GLS2_D4T_LENGTH                      equ 0001h
CLC2GLS2_D4T_MASK                        equ 0080h

// Register: CLC2GLS3
#define CLC2GLS3 CLC2GLS3
CLC2GLS3                                 equ 0F23h
// bitfield definitions
CLC2GLS3_LC2G4D1N_POSN                   equ 0000h
CLC2GLS3_LC2G4D1N_POSITION               equ 0000h
CLC2GLS3_LC2G4D1N_SIZE                   equ 0001h
CLC2GLS3_LC2G4D1N_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D1N_MASK                   equ 0001h
CLC2GLS3_LC2G4D1T_POSN                   equ 0001h
CLC2GLS3_LC2G4D1T_POSITION               equ 0001h
CLC2GLS3_LC2G4D1T_SIZE                   equ 0001h
CLC2GLS3_LC2G4D1T_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D1T_MASK                   equ 0002h
CLC2GLS3_LC2G4D2N_POSN                   equ 0002h
CLC2GLS3_LC2G4D2N_POSITION               equ 0002h
CLC2GLS3_LC2G4D2N_SIZE                   equ 0001h
CLC2GLS3_LC2G4D2N_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D2N_MASK                   equ 0004h
CLC2GLS3_LC2G4D2T_POSN                   equ 0003h
CLC2GLS3_LC2G4D2T_POSITION               equ 0003h
CLC2GLS3_LC2G4D2T_SIZE                   equ 0001h
CLC2GLS3_LC2G4D2T_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D2T_MASK                   equ 0008h
CLC2GLS3_LC2G4D3N_POSN                   equ 0004h
CLC2GLS3_LC2G4D3N_POSITION               equ 0004h
CLC2GLS3_LC2G4D3N_SIZE                   equ 0001h
CLC2GLS3_LC2G4D3N_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D3N_MASK                   equ 0010h
CLC2GLS3_LC2G4D3T_POSN                   equ 0005h
CLC2GLS3_LC2G4D3T_POSITION               equ 0005h
CLC2GLS3_LC2G4D3T_SIZE                   equ 0001h
CLC2GLS3_LC2G4D3T_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D3T_MASK                   equ 0020h
CLC2GLS3_LC2G4D4N_POSN                   equ 0006h
CLC2GLS3_LC2G4D4N_POSITION               equ 0006h
CLC2GLS3_LC2G4D4N_SIZE                   equ 0001h
CLC2GLS3_LC2G4D4N_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D4N_MASK                   equ 0040h
CLC2GLS3_LC2G4D4T_POSN                   equ 0007h
CLC2GLS3_LC2G4D4T_POSITION               equ 0007h
CLC2GLS3_LC2G4D4T_SIZE                   equ 0001h
CLC2GLS3_LC2G4D4T_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D4T_MASK                   equ 0080h
CLC2GLS3_G4D1N_POSN                      equ 0000h
CLC2GLS3_G4D1N_POSITION                  equ 0000h
CLC2GLS3_G4D1N_SIZE                      equ 0001h
CLC2GLS3_G4D1N_LENGTH                    equ 0001h
CLC2GLS3_G4D1N_MASK                      equ 0001h
CLC2GLS3_G4D1T_POSN                      equ 0001h
CLC2GLS3_G4D1T_POSITION                  equ 0001h
CLC2GLS3_G4D1T_SIZE                      equ 0001h
CLC2GLS3_G4D1T_LENGTH                    equ 0001h
CLC2GLS3_G4D1T_MASK                      equ 0002h
CLC2GLS3_G4D2N_POSN                      equ 0002h
CLC2GLS3_G4D2N_POSITION                  equ 0002h
CLC2GLS3_G4D2N_SIZE                      equ 0001h
CLC2GLS3_G4D2N_LENGTH                    equ 0001h
CLC2GLS3_G4D2N_MASK                      equ 0004h
CLC2GLS3_G4D2T_POSN                      equ 0003h
CLC2GLS3_G4D2T_POSITION                  equ 0003h
CLC2GLS3_G4D2T_SIZE                      equ 0001h
CLC2GLS3_G4D2T_LENGTH                    equ 0001h
CLC2GLS3_G4D2T_MASK                      equ 0008h
CLC2GLS3_G4D3N_POSN                      equ 0004h
CLC2GLS3_G4D3N_POSITION                  equ 0004h
CLC2GLS3_G4D3N_SIZE                      equ 0001h
CLC2GLS3_G4D3N_LENGTH                    equ 0001h
CLC2GLS3_G4D3N_MASK                      equ 0010h
CLC2GLS3_G4D3T_POSN                      equ 0005h
CLC2GLS3_G4D3T_POSITION                  equ 0005h
CLC2GLS3_G4D3T_SIZE                      equ 0001h
CLC2GLS3_G4D3T_LENGTH                    equ 0001h
CLC2GLS3_G4D3T_MASK                      equ 0020h
CLC2GLS3_G4D4N_POSN                      equ 0006h
CLC2GLS3_G4D4N_POSITION                  equ 0006h
CLC2GLS3_G4D4N_SIZE                      equ 0001h
CLC2GLS3_G4D4N_LENGTH                    equ 0001h
CLC2GLS3_G4D4N_MASK                      equ 0040h
CLC2GLS3_G4D4T_POSN                      equ 0007h
CLC2GLS3_G4D4T_POSITION                  equ 0007h
CLC2GLS3_G4D4T_SIZE                      equ 0001h
CLC2GLS3_G4D4T_LENGTH                    equ 0001h
CLC2GLS3_G4D4T_MASK                      equ 0080h

// Register: CLC3CON
#define CLC3CON CLC3CON
CLC3CON                                  equ 0F24h
// bitfield definitions
CLC3CON_LC3MODE_POSN                     equ 0000h
CLC3CON_LC3MODE_POSITION                 equ 0000h
CLC3CON_LC3MODE_SIZE                     equ 0003h
CLC3CON_LC3MODE_LENGTH                   equ 0003h
CLC3CON_LC3MODE_MASK                     equ 0007h
CLC3CON_LC3INTN_POSN                     equ 0003h
CLC3CON_LC3INTN_POSITION                 equ 0003h
CLC3CON_LC3INTN_SIZE                     equ 0001h
CLC3CON_LC3INTN_LENGTH                   equ 0001h
CLC3CON_LC3INTN_MASK                     equ 0008h
CLC3CON_LC3INTP_POSN                     equ 0004h
CLC3CON_LC3INTP_POSITION                 equ 0004h
CLC3CON_LC3INTP_SIZE                     equ 0001h
CLC3CON_LC3INTP_LENGTH                   equ 0001h
CLC3CON_LC3INTP_MASK                     equ 0010h
CLC3CON_LC3OUT_POSN                      equ 0005h
CLC3CON_LC3OUT_POSITION                  equ 0005h
CLC3CON_LC3OUT_SIZE                      equ 0001h
CLC3CON_LC3OUT_LENGTH                    equ 0001h
CLC3CON_LC3OUT_MASK                      equ 0020h
CLC3CON_LC3EN_POSN                       equ 0007h
CLC3CON_LC3EN_POSITION                   equ 0007h
CLC3CON_LC3EN_SIZE                       equ 0001h
CLC3CON_LC3EN_LENGTH                     equ 0001h
CLC3CON_LC3EN_MASK                       equ 0080h
CLC3CON_LC3MODE0_POSN                    equ 0000h
CLC3CON_LC3MODE0_POSITION                equ 0000h
CLC3CON_LC3MODE0_SIZE                    equ 0001h
CLC3CON_LC3MODE0_LENGTH                  equ 0001h
CLC3CON_LC3MODE0_MASK                    equ 0001h
CLC3CON_LC3MODE1_POSN                    equ 0001h
CLC3CON_LC3MODE1_POSITION                equ 0001h
CLC3CON_LC3MODE1_SIZE                    equ 0001h
CLC3CON_LC3MODE1_LENGTH                  equ 0001h
CLC3CON_LC3MODE1_MASK                    equ 0002h
CLC3CON_LC3MODE2_POSN                    equ 0002h
CLC3CON_LC3MODE2_POSITION                equ 0002h
CLC3CON_LC3MODE2_SIZE                    equ 0001h
CLC3CON_LC3MODE2_LENGTH                  equ 0001h
CLC3CON_LC3MODE2_MASK                    equ 0004h
CLC3CON_MODE_POSN                        equ 0000h
CLC3CON_MODE_POSITION                    equ 0000h
CLC3CON_MODE_SIZE                        equ 0003h
CLC3CON_MODE_LENGTH                      equ 0003h
CLC3CON_MODE_MASK                        equ 0007h
CLC3CON_INTN_POSN                        equ 0003h
CLC3CON_INTN_POSITION                    equ 0003h
CLC3CON_INTN_SIZE                        equ 0001h
CLC3CON_INTN_LENGTH                      equ 0001h
CLC3CON_INTN_MASK                        equ 0008h
CLC3CON_INTP_POSN                        equ 0004h
CLC3CON_INTP_POSITION                    equ 0004h
CLC3CON_INTP_SIZE                        equ 0001h
CLC3CON_INTP_LENGTH                      equ 0001h
CLC3CON_INTP_MASK                        equ 0010h
CLC3CON_OUT_POSN                         equ 0005h
CLC3CON_OUT_POSITION                     equ 0005h
CLC3CON_OUT_SIZE                         equ 0001h
CLC3CON_OUT_LENGTH                       equ 0001h
CLC3CON_OUT_MASK                         equ 0020h
CLC3CON_EN_POSN                          equ 0007h
CLC3CON_EN_POSITION                      equ 0007h
CLC3CON_EN_SIZE                          equ 0001h
CLC3CON_EN_LENGTH                        equ 0001h
CLC3CON_EN_MASK                          equ 0080h
CLC3CON_MODE0_POSN                       equ 0000h
CLC3CON_MODE0_POSITION                   equ 0000h
CLC3CON_MODE0_SIZE                       equ 0001h
CLC3CON_MODE0_LENGTH                     equ 0001h
CLC3CON_MODE0_MASK                       equ 0001h
CLC3CON_MODE1_POSN                       equ 0001h
CLC3CON_MODE1_POSITION                   equ 0001h
CLC3CON_MODE1_SIZE                       equ 0001h
CLC3CON_MODE1_LENGTH                     equ 0001h
CLC3CON_MODE1_MASK                       equ 0002h
CLC3CON_MODE2_POSN                       equ 0002h
CLC3CON_MODE2_POSITION                   equ 0002h
CLC3CON_MODE2_SIZE                       equ 0001h
CLC3CON_MODE2_LENGTH                     equ 0001h
CLC3CON_MODE2_MASK                       equ 0004h

// Register: CLC3POL
#define CLC3POL CLC3POL
CLC3POL                                  equ 0F25h
// bitfield definitions
CLC3POL_LC3G1POL_POSN                    equ 0000h
CLC3POL_LC3G1POL_POSITION                equ 0000h
CLC3POL_LC3G1POL_SIZE                    equ 0001h
CLC3POL_LC3G1POL_LENGTH                  equ 0001h
CLC3POL_LC3G1POL_MASK                    equ 0001h
CLC3POL_LC3G2POL_POSN                    equ 0001h
CLC3POL_LC3G2POL_POSITION                equ 0001h
CLC3POL_LC3G2POL_SIZE                    equ 0001h
CLC3POL_LC3G2POL_LENGTH                  equ 0001h
CLC3POL_LC3G2POL_MASK                    equ 0002h
CLC3POL_LC3G3POL_POSN                    equ 0002h
CLC3POL_LC3G3POL_POSITION                equ 0002h
CLC3POL_LC3G3POL_SIZE                    equ 0001h
CLC3POL_LC3G3POL_LENGTH                  equ 0001h
CLC3POL_LC3G3POL_MASK                    equ 0004h
CLC3POL_LC3G4POL_POSN                    equ 0003h
CLC3POL_LC3G4POL_POSITION                equ 0003h
CLC3POL_LC3G4POL_SIZE                    equ 0001h
CLC3POL_LC3G4POL_LENGTH                  equ 0001h
CLC3POL_LC3G4POL_MASK                    equ 0008h
CLC3POL_LC3POL_POSN                      equ 0007h
CLC3POL_LC3POL_POSITION                  equ 0007h
CLC3POL_LC3POL_SIZE                      equ 0001h
CLC3POL_LC3POL_LENGTH                    equ 0001h
CLC3POL_LC3POL_MASK                      equ 0080h
CLC3POL_G1POL_POSN                       equ 0000h
CLC3POL_G1POL_POSITION                   equ 0000h
CLC3POL_G1POL_SIZE                       equ 0001h
CLC3POL_G1POL_LENGTH                     equ 0001h
CLC3POL_G1POL_MASK                       equ 0001h
CLC3POL_G2POL_POSN                       equ 0001h
CLC3POL_G2POL_POSITION                   equ 0001h
CLC3POL_G2POL_SIZE                       equ 0001h
CLC3POL_G2POL_LENGTH                     equ 0001h
CLC3POL_G2POL_MASK                       equ 0002h
CLC3POL_G3POL_POSN                       equ 0002h
CLC3POL_G3POL_POSITION                   equ 0002h
CLC3POL_G3POL_SIZE                       equ 0001h
CLC3POL_G3POL_LENGTH                     equ 0001h
CLC3POL_G3POL_MASK                       equ 0004h
CLC3POL_G4POL_POSN                       equ 0003h
CLC3POL_G4POL_POSITION                   equ 0003h
CLC3POL_G4POL_SIZE                       equ 0001h
CLC3POL_G4POL_LENGTH                     equ 0001h
CLC3POL_G4POL_MASK                       equ 0008h
CLC3POL_POL_POSN                         equ 0007h
CLC3POL_POL_POSITION                     equ 0007h
CLC3POL_POL_SIZE                         equ 0001h
CLC3POL_POL_LENGTH                       equ 0001h
CLC3POL_POL_MASK                         equ 0080h

// Register: CLC3SEL0
#define CLC3SEL0 CLC3SEL0
CLC3SEL0                                 equ 0F26h
// bitfield definitions
CLC3SEL0_LC3D1S0_POSN                    equ 0000h
CLC3SEL0_LC3D1S0_POSITION                equ 0000h
CLC3SEL0_LC3D1S0_SIZE                    equ 0001h
CLC3SEL0_LC3D1S0_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S0_MASK                    equ 0001h
CLC3SEL0_LC3D1S1_POSN                    equ 0001h
CLC3SEL0_LC3D1S1_POSITION                equ 0001h
CLC3SEL0_LC3D1S1_SIZE                    equ 0001h
CLC3SEL0_LC3D1S1_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S1_MASK                    equ 0002h
CLC3SEL0_LC3D1S2_POSN                    equ 0002h
CLC3SEL0_LC3D1S2_POSITION                equ 0002h
CLC3SEL0_LC3D1S2_SIZE                    equ 0001h
CLC3SEL0_LC3D1S2_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S2_MASK                    equ 0004h
CLC3SEL0_LC3D1S3_POSN                    equ 0003h
CLC3SEL0_LC3D1S3_POSITION                equ 0003h
CLC3SEL0_LC3D1S3_SIZE                    equ 0001h
CLC3SEL0_LC3D1S3_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S3_MASK                    equ 0008h
CLC3SEL0_LC3D1S4_POSN                    equ 0004h
CLC3SEL0_LC3D1S4_POSITION                equ 0004h
CLC3SEL0_LC3D1S4_SIZE                    equ 0001h
CLC3SEL0_LC3D1S4_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S4_MASK                    equ 0010h
CLC3SEL0_LC3D1S5_POSN                    equ 0005h
CLC3SEL0_LC3D1S5_POSITION                equ 0005h
CLC3SEL0_LC3D1S5_SIZE                    equ 0001h
CLC3SEL0_LC3D1S5_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S5_MASK                    equ 0020h
CLC3SEL0_LC3D1S_POSN                     equ 0000h
CLC3SEL0_LC3D1S_POSITION                 equ 0000h
CLC3SEL0_LC3D1S_SIZE                     equ 0008h
CLC3SEL0_LC3D1S_LENGTH                   equ 0008h
CLC3SEL0_LC3D1S_MASK                     equ 00FFh
CLC3SEL0_D1S_POSN                        equ 0000h
CLC3SEL0_D1S_POSITION                    equ 0000h
CLC3SEL0_D1S_SIZE                        equ 0008h
CLC3SEL0_D1S_LENGTH                      equ 0008h
CLC3SEL0_D1S_MASK                        equ 00FFh
CLC3SEL0_D1S0_POSN                       equ 0000h
CLC3SEL0_D1S0_POSITION                   equ 0000h
CLC3SEL0_D1S0_SIZE                       equ 0001h
CLC3SEL0_D1S0_LENGTH                     equ 0001h
CLC3SEL0_D1S0_MASK                       equ 0001h
CLC3SEL0_D1S1_POSN                       equ 0001h
CLC3SEL0_D1S1_POSITION                   equ 0001h
CLC3SEL0_D1S1_SIZE                       equ 0001h
CLC3SEL0_D1S1_LENGTH                     equ 0001h
CLC3SEL0_D1S1_MASK                       equ 0002h
CLC3SEL0_D1S2_POSN                       equ 0002h
CLC3SEL0_D1S2_POSITION                   equ 0002h
CLC3SEL0_D1S2_SIZE                       equ 0001h
CLC3SEL0_D1S2_LENGTH                     equ 0001h
CLC3SEL0_D1S2_MASK                       equ 0004h
CLC3SEL0_D1S3_POSN                       equ 0003h
CLC3SEL0_D1S3_POSITION                   equ 0003h
CLC3SEL0_D1S3_SIZE                       equ 0001h
CLC3SEL0_D1S3_LENGTH                     equ 0001h
CLC3SEL0_D1S3_MASK                       equ 0008h
CLC3SEL0_D1S4_POSN                       equ 0004h
CLC3SEL0_D1S4_POSITION                   equ 0004h
CLC3SEL0_D1S4_SIZE                       equ 0001h
CLC3SEL0_D1S4_LENGTH                     equ 0001h
CLC3SEL0_D1S4_MASK                       equ 0010h
CLC3SEL0_D1S5_POSN                       equ 0005h
CLC3SEL0_D1S5_POSITION                   equ 0005h
CLC3SEL0_D1S5_SIZE                       equ 0001h
CLC3SEL0_D1S5_LENGTH                     equ 0001h
CLC3SEL0_D1S5_MASK                       equ 0020h

// Register: CLC3SEL1
#define CLC3SEL1 CLC3SEL1
CLC3SEL1                                 equ 0F27h
// bitfield definitions
CLC3SEL1_LC3D2S0_POSN                    equ 0000h
CLC3SEL1_LC3D2S0_POSITION                equ 0000h
CLC3SEL1_LC3D2S0_SIZE                    equ 0001h
CLC3SEL1_LC3D2S0_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S0_MASK                    equ 0001h
CLC3SEL1_LC3D2S1_POSN                    equ 0001h
CLC3SEL1_LC3D2S1_POSITION                equ 0001h
CLC3SEL1_LC3D2S1_SIZE                    equ 0001h
CLC3SEL1_LC3D2S1_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S1_MASK                    equ 0002h
CLC3SEL1_LC3D2S2_POSN                    equ 0002h
CLC3SEL1_LC3D2S2_POSITION                equ 0002h
CLC3SEL1_LC3D2S2_SIZE                    equ 0001h
CLC3SEL1_LC3D2S2_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S2_MASK                    equ 0004h
CLC3SEL1_LC3D2S3_POSN                    equ 0003h
CLC3SEL1_LC3D2S3_POSITION                equ 0003h
CLC3SEL1_LC3D2S3_SIZE                    equ 0001h
CLC3SEL1_LC3D2S3_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S3_MASK                    equ 0008h
CLC3SEL1_LC3D2S4_POSN                    equ 0004h
CLC3SEL1_LC3D2S4_POSITION                equ 0004h
CLC3SEL1_LC3D2S4_SIZE                    equ 0001h
CLC3SEL1_LC3D2S4_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S4_MASK                    equ 0010h
CLC3SEL1_LC3D2S5_POSN                    equ 0005h
CLC3SEL1_LC3D2S5_POSITION                equ 0005h
CLC3SEL1_LC3D2S5_SIZE                    equ 0001h
CLC3SEL1_LC3D2S5_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S5_MASK                    equ 0020h
CLC3SEL1_LC3D2S_POSN                     equ 0000h
CLC3SEL1_LC3D2S_POSITION                 equ 0000h
CLC3SEL1_LC3D2S_SIZE                     equ 0008h
CLC3SEL1_LC3D2S_LENGTH                   equ 0008h
CLC3SEL1_LC3D2S_MASK                     equ 00FFh
CLC3SEL1_D2S_POSN                        equ 0000h
CLC3SEL1_D2S_POSITION                    equ 0000h
CLC3SEL1_D2S_SIZE                        equ 0008h
CLC3SEL1_D2S_LENGTH                      equ 0008h
CLC3SEL1_D2S_MASK                        equ 00FFh
CLC3SEL1_D2S0_POSN                       equ 0000h
CLC3SEL1_D2S0_POSITION                   equ 0000h
CLC3SEL1_D2S0_SIZE                       equ 0001h
CLC3SEL1_D2S0_LENGTH                     equ 0001h
CLC3SEL1_D2S0_MASK                       equ 0001h
CLC3SEL1_D2S1_POSN                       equ 0001h
CLC3SEL1_D2S1_POSITION                   equ 0001h
CLC3SEL1_D2S1_SIZE                       equ 0001h
CLC3SEL1_D2S1_LENGTH                     equ 0001h
CLC3SEL1_D2S1_MASK                       equ 0002h
CLC3SEL1_D2S2_POSN                       equ 0002h
CLC3SEL1_D2S2_POSITION                   equ 0002h
CLC3SEL1_D2S2_SIZE                       equ 0001h
CLC3SEL1_D2S2_LENGTH                     equ 0001h
CLC3SEL1_D2S2_MASK                       equ 0004h
CLC3SEL1_D2S3_POSN                       equ 0003h
CLC3SEL1_D2S3_POSITION                   equ 0003h
CLC3SEL1_D2S3_SIZE                       equ 0001h
CLC3SEL1_D2S3_LENGTH                     equ 0001h
CLC3SEL1_D2S3_MASK                       equ 0008h
CLC3SEL1_D2S4_POSN                       equ 0004h
CLC3SEL1_D2S4_POSITION                   equ 0004h
CLC3SEL1_D2S4_SIZE                       equ 0001h
CLC3SEL1_D2S4_LENGTH                     equ 0001h
CLC3SEL1_D2S4_MASK                       equ 0010h
CLC3SEL1_D2S5_POSN                       equ 0005h
CLC3SEL1_D2S5_POSITION                   equ 0005h
CLC3SEL1_D2S5_SIZE                       equ 0001h
CLC3SEL1_D2S5_LENGTH                     equ 0001h
CLC3SEL1_D2S5_MASK                       equ 0020h

// Register: CLC3SEL2
#define CLC3SEL2 CLC3SEL2
CLC3SEL2                                 equ 0F28h
// bitfield definitions
CLC3SEL2_LC3D3S0_POSN                    equ 0000h
CLC3SEL2_LC3D3S0_POSITION                equ 0000h
CLC3SEL2_LC3D3S0_SIZE                    equ 0001h
CLC3SEL2_LC3D3S0_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S0_MASK                    equ 0001h
CLC3SEL2_LC3D3S1_POSN                    equ 0001h
CLC3SEL2_LC3D3S1_POSITION                equ 0001h
CLC3SEL2_LC3D3S1_SIZE                    equ 0001h
CLC3SEL2_LC3D3S1_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S1_MASK                    equ 0002h
CLC3SEL2_LC3D3S2_POSN                    equ 0002h
CLC3SEL2_LC3D3S2_POSITION                equ 0002h
CLC3SEL2_LC3D3S2_SIZE                    equ 0001h
CLC3SEL2_LC3D3S2_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S2_MASK                    equ 0004h
CLC3SEL2_LC3D3S3_POSN                    equ 0003h
CLC3SEL2_LC3D3S3_POSITION                equ 0003h
CLC3SEL2_LC3D3S3_SIZE                    equ 0001h
CLC3SEL2_LC3D3S3_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S3_MASK                    equ 0008h
CLC3SEL2_LC3D3S4_POSN                    equ 0004h
CLC3SEL2_LC3D3S4_POSITION                equ 0004h
CLC3SEL2_LC3D3S4_SIZE                    equ 0001h
CLC3SEL2_LC3D3S4_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S4_MASK                    equ 0010h
CLC3SEL2_LC3D3S5_POSN                    equ 0005h
CLC3SEL2_LC3D3S5_POSITION                equ 0005h
CLC3SEL2_LC3D3S5_SIZE                    equ 0001h
CLC3SEL2_LC3D3S5_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S5_MASK                    equ 0020h
CLC3SEL2_LC3D3S_POSN                     equ 0000h
CLC3SEL2_LC3D3S_POSITION                 equ 0000h
CLC3SEL2_LC3D3S_SIZE                     equ 0008h
CLC3SEL2_LC3D3S_LENGTH                   equ 0008h
CLC3SEL2_LC3D3S_MASK                     equ 00FFh
CLC3SEL2_D3S_POSN                        equ 0000h
CLC3SEL2_D3S_POSITION                    equ 0000h
CLC3SEL2_D3S_SIZE                        equ 0008h
CLC3SEL2_D3S_LENGTH                      equ 0008h
CLC3SEL2_D3S_MASK                        equ 00FFh
CLC3SEL2_D3S0_POSN                       equ 0000h
CLC3SEL2_D3S0_POSITION                   equ 0000h
CLC3SEL2_D3S0_SIZE                       equ 0001h
CLC3SEL2_D3S0_LENGTH                     equ 0001h
CLC3SEL2_D3S0_MASK                       equ 0001h
CLC3SEL2_D3S1_POSN                       equ 0001h
CLC3SEL2_D3S1_POSITION                   equ 0001h
CLC3SEL2_D3S1_SIZE                       equ 0001h
CLC3SEL2_D3S1_LENGTH                     equ 0001h
CLC3SEL2_D3S1_MASK                       equ 0002h
CLC3SEL2_D3S2_POSN                       equ 0002h
CLC3SEL2_D3S2_POSITION                   equ 0002h
CLC3SEL2_D3S2_SIZE                       equ 0001h
CLC3SEL2_D3S2_LENGTH                     equ 0001h
CLC3SEL2_D3S2_MASK                       equ 0004h
CLC3SEL2_D3S3_POSN                       equ 0003h
CLC3SEL2_D3S3_POSITION                   equ 0003h
CLC3SEL2_D3S3_SIZE                       equ 0001h
CLC3SEL2_D3S3_LENGTH                     equ 0001h
CLC3SEL2_D3S3_MASK                       equ 0008h
CLC3SEL2_D3S4_POSN                       equ 0004h
CLC3SEL2_D3S4_POSITION                   equ 0004h
CLC3SEL2_D3S4_SIZE                       equ 0001h
CLC3SEL2_D3S4_LENGTH                     equ 0001h
CLC3SEL2_D3S4_MASK                       equ 0010h
CLC3SEL2_D3S5_POSN                       equ 0005h
CLC3SEL2_D3S5_POSITION                   equ 0005h
CLC3SEL2_D3S5_SIZE                       equ 0001h
CLC3SEL2_D3S5_LENGTH                     equ 0001h
CLC3SEL2_D3S5_MASK                       equ 0020h

// Register: CLC3SEL3
#define CLC3SEL3 CLC3SEL3
CLC3SEL3                                 equ 0F29h
// bitfield definitions
CLC3SEL3_LC3D4S0_POSN                    equ 0000h
CLC3SEL3_LC3D4S0_POSITION                equ 0000h
CLC3SEL3_LC3D4S0_SIZE                    equ 0001h
CLC3SEL3_LC3D4S0_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S0_MASK                    equ 0001h
CLC3SEL3_LC3D4S1_POSN                    equ 0001h
CLC3SEL3_LC3D4S1_POSITION                equ 0001h
CLC3SEL3_LC3D4S1_SIZE                    equ 0001h
CLC3SEL3_LC3D4S1_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S1_MASK                    equ 0002h
CLC3SEL3_LC3D4S2_POSN                    equ 0002h
CLC3SEL3_LC3D4S2_POSITION                equ 0002h
CLC3SEL3_LC3D4S2_SIZE                    equ 0001h
CLC3SEL3_LC3D4S2_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S2_MASK                    equ 0004h
CLC3SEL3_LC3D4S3_POSN                    equ 0003h
CLC3SEL3_LC3D4S3_POSITION                equ 0003h
CLC3SEL3_LC3D4S3_SIZE                    equ 0001h
CLC3SEL3_LC3D4S3_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S3_MASK                    equ 0008h
CLC3SEL3_LC3D4S4_POSN                    equ 0004h
CLC3SEL3_LC3D4S4_POSITION                equ 0004h
CLC3SEL3_LC3D4S4_SIZE                    equ 0001h
CLC3SEL3_LC3D4S4_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S4_MASK                    equ 0010h
CLC3SEL3_LC3D4S5_POSN                    equ 0005h
CLC3SEL3_LC3D4S5_POSITION                equ 0005h
CLC3SEL3_LC3D4S5_SIZE                    equ 0001h
CLC3SEL3_LC3D4S5_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S5_MASK                    equ 0020h
CLC3SEL3_LC3D4S_POSN                     equ 0000h
CLC3SEL3_LC3D4S_POSITION                 equ 0000h
CLC3SEL3_LC3D4S_SIZE                     equ 0008h
CLC3SEL3_LC3D4S_LENGTH                   equ 0008h
CLC3SEL3_LC3D4S_MASK                     equ 00FFh
CLC3SEL3_D4S_POSN                        equ 0000h
CLC3SEL3_D4S_POSITION                    equ 0000h
CLC3SEL3_D4S_SIZE                        equ 0008h
CLC3SEL3_D4S_LENGTH                      equ 0008h
CLC3SEL3_D4S_MASK                        equ 00FFh
CLC3SEL3_D4S0_POSN                       equ 0000h
CLC3SEL3_D4S0_POSITION                   equ 0000h
CLC3SEL3_D4S0_SIZE                       equ 0001h
CLC3SEL3_D4S0_LENGTH                     equ 0001h
CLC3SEL3_D4S0_MASK                       equ 0001h
CLC3SEL3_D4S1_POSN                       equ 0001h
CLC3SEL3_D4S1_POSITION                   equ 0001h
CLC3SEL3_D4S1_SIZE                       equ 0001h
CLC3SEL3_D4S1_LENGTH                     equ 0001h
CLC3SEL3_D4S1_MASK                       equ 0002h
CLC3SEL3_D4S2_POSN                       equ 0002h
CLC3SEL3_D4S2_POSITION                   equ 0002h
CLC3SEL3_D4S2_SIZE                       equ 0001h
CLC3SEL3_D4S2_LENGTH                     equ 0001h
CLC3SEL3_D4S2_MASK                       equ 0004h
CLC3SEL3_D4S3_POSN                       equ 0003h
CLC3SEL3_D4S3_POSITION                   equ 0003h
CLC3SEL3_D4S3_SIZE                       equ 0001h
CLC3SEL3_D4S3_LENGTH                     equ 0001h
CLC3SEL3_D4S3_MASK                       equ 0008h
CLC3SEL3_D4S4_POSN                       equ 0004h
CLC3SEL3_D4S4_POSITION                   equ 0004h
CLC3SEL3_D4S4_SIZE                       equ 0001h
CLC3SEL3_D4S4_LENGTH                     equ 0001h
CLC3SEL3_D4S4_MASK                       equ 0010h
CLC3SEL3_D4S5_POSN                       equ 0005h
CLC3SEL3_D4S5_POSITION                   equ 0005h
CLC3SEL3_D4S5_SIZE                       equ 0001h
CLC3SEL3_D4S5_LENGTH                     equ 0001h
CLC3SEL3_D4S5_MASK                       equ 0020h

// Register: CLC3GLS0
#define CLC3GLS0 CLC3GLS0
CLC3GLS0                                 equ 0F2Ah
// bitfield definitions
CLC3GLS0_LC3G1D1N_POSN                   equ 0000h
CLC3GLS0_LC3G1D1N_POSITION               equ 0000h
CLC3GLS0_LC3G1D1N_SIZE                   equ 0001h
CLC3GLS0_LC3G1D1N_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D1N_MASK                   equ 0001h
CLC3GLS0_LC3G1D1T_POSN                   equ 0001h
CLC3GLS0_LC3G1D1T_POSITION               equ 0001h
CLC3GLS0_LC3G1D1T_SIZE                   equ 0001h
CLC3GLS0_LC3G1D1T_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D1T_MASK                   equ 0002h
CLC3GLS0_LC3G1D2N_POSN                   equ 0002h
CLC3GLS0_LC3G1D2N_POSITION               equ 0002h
CLC3GLS0_LC3G1D2N_SIZE                   equ 0001h
CLC3GLS0_LC3G1D2N_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D2N_MASK                   equ 0004h
CLC3GLS0_LC3G1D2T_POSN                   equ 0003h
CLC3GLS0_LC3G1D2T_POSITION               equ 0003h
CLC3GLS0_LC3G1D2T_SIZE                   equ 0001h
CLC3GLS0_LC3G1D2T_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D2T_MASK                   equ 0008h
CLC3GLS0_LC3G1D3N_POSN                   equ 0004h
CLC3GLS0_LC3G1D3N_POSITION               equ 0004h
CLC3GLS0_LC3G1D3N_SIZE                   equ 0001h
CLC3GLS0_LC3G1D3N_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D3N_MASK                   equ 0010h
CLC3GLS0_LC3G1D3T_POSN                   equ 0005h
CLC3GLS0_LC3G1D3T_POSITION               equ 0005h
CLC3GLS0_LC3G1D3T_SIZE                   equ 0001h
CLC3GLS0_LC3G1D3T_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D3T_MASK                   equ 0020h
CLC3GLS0_LC3G1D4N_POSN                   equ 0006h
CLC3GLS0_LC3G1D4N_POSITION               equ 0006h
CLC3GLS0_LC3G1D4N_SIZE                   equ 0001h
CLC3GLS0_LC3G1D4N_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D4N_MASK                   equ 0040h
CLC3GLS0_LC3G1D4T_POSN                   equ 0007h
CLC3GLS0_LC3G1D4T_POSITION               equ 0007h
CLC3GLS0_LC3G1D4T_SIZE                   equ 0001h
CLC3GLS0_LC3G1D4T_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D4T_MASK                   equ 0080h
CLC3GLS0_D1N_POSN                        equ 0000h
CLC3GLS0_D1N_POSITION                    equ 0000h
CLC3GLS0_D1N_SIZE                        equ 0001h
CLC3GLS0_D1N_LENGTH                      equ 0001h
CLC3GLS0_D1N_MASK                        equ 0001h
CLC3GLS0_D1T_POSN                        equ 0001h
CLC3GLS0_D1T_POSITION                    equ 0001h
CLC3GLS0_D1T_SIZE                        equ 0001h
CLC3GLS0_D1T_LENGTH                      equ 0001h
CLC3GLS0_D1T_MASK                        equ 0002h
CLC3GLS0_D2N_POSN                        equ 0002h
CLC3GLS0_D2N_POSITION                    equ 0002h
CLC3GLS0_D2N_SIZE                        equ 0001h
CLC3GLS0_D2N_LENGTH                      equ 0001h
CLC3GLS0_D2N_MASK                        equ 0004h
CLC3GLS0_D2T_POSN                        equ 0003h
CLC3GLS0_D2T_POSITION                    equ 0003h
CLC3GLS0_D2T_SIZE                        equ 0001h
CLC3GLS0_D2T_LENGTH                      equ 0001h
CLC3GLS0_D2T_MASK                        equ 0008h
CLC3GLS0_D3N_POSN                        equ 0004h
CLC3GLS0_D3N_POSITION                    equ 0004h
CLC3GLS0_D3N_SIZE                        equ 0001h
CLC3GLS0_D3N_LENGTH                      equ 0001h
CLC3GLS0_D3N_MASK                        equ 0010h
CLC3GLS0_D3T_POSN                        equ 0005h
CLC3GLS0_D3T_POSITION                    equ 0005h
CLC3GLS0_D3T_SIZE                        equ 0001h
CLC3GLS0_D3T_LENGTH                      equ 0001h
CLC3GLS0_D3T_MASK                        equ 0020h
CLC3GLS0_D4N_POSN                        equ 0006h
CLC3GLS0_D4N_POSITION                    equ 0006h
CLC3GLS0_D4N_SIZE                        equ 0001h
CLC3GLS0_D4N_LENGTH                      equ 0001h
CLC3GLS0_D4N_MASK                        equ 0040h
CLC3GLS0_D4T_POSN                        equ 0007h
CLC3GLS0_D4T_POSITION                    equ 0007h
CLC3GLS0_D4T_SIZE                        equ 0001h
CLC3GLS0_D4T_LENGTH                      equ 0001h
CLC3GLS0_D4T_MASK                        equ 0080h

// Register: CLC3GLS1
#define CLC3GLS1 CLC3GLS1
CLC3GLS1                                 equ 0F2Bh
// bitfield definitions
CLC3GLS1_LC3G2D1N_POSN                   equ 0000h
CLC3GLS1_LC3G2D1N_POSITION               equ 0000h
CLC3GLS1_LC3G2D1N_SIZE                   equ 0001h
CLC3GLS1_LC3G2D1N_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D1N_MASK                   equ 0001h
CLC3GLS1_LC3G2D1T_POSN                   equ 0001h
CLC3GLS1_LC3G2D1T_POSITION               equ 0001h
CLC3GLS1_LC3G2D1T_SIZE                   equ 0001h
CLC3GLS1_LC3G2D1T_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D1T_MASK                   equ 0002h
CLC3GLS1_LC3G2D2N_POSN                   equ 0002h
CLC3GLS1_LC3G2D2N_POSITION               equ 0002h
CLC3GLS1_LC3G2D2N_SIZE                   equ 0001h
CLC3GLS1_LC3G2D2N_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D2N_MASK                   equ 0004h
CLC3GLS1_LC3G2D2T_POSN                   equ 0003h
CLC3GLS1_LC3G2D2T_POSITION               equ 0003h
CLC3GLS1_LC3G2D2T_SIZE                   equ 0001h
CLC3GLS1_LC3G2D2T_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D2T_MASK                   equ 0008h
CLC3GLS1_LC3G2D3N_POSN                   equ 0004h
CLC3GLS1_LC3G2D3N_POSITION               equ 0004h
CLC3GLS1_LC3G2D3N_SIZE                   equ 0001h
CLC3GLS1_LC3G2D3N_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D3N_MASK                   equ 0010h
CLC3GLS1_LC3G2D3T_POSN                   equ 0005h
CLC3GLS1_LC3G2D3T_POSITION               equ 0005h
CLC3GLS1_LC3G2D3T_SIZE                   equ 0001h
CLC3GLS1_LC3G2D3T_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D3T_MASK                   equ 0020h
CLC3GLS1_LC3G2D4N_POSN                   equ 0006h
CLC3GLS1_LC3G2D4N_POSITION               equ 0006h
CLC3GLS1_LC3G2D4N_SIZE                   equ 0001h
CLC3GLS1_LC3G2D4N_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D4N_MASK                   equ 0040h
CLC3GLS1_LC3G2D4T_POSN                   equ 0007h
CLC3GLS1_LC3G2D4T_POSITION               equ 0007h
CLC3GLS1_LC3G2D4T_SIZE                   equ 0001h
CLC3GLS1_LC3G2D4T_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D4T_MASK                   equ 0080h
CLC3GLS1_D1N_POSN                        equ 0000h
CLC3GLS1_D1N_POSITION                    equ 0000h
CLC3GLS1_D1N_SIZE                        equ 0001h
CLC3GLS1_D1N_LENGTH                      equ 0001h
CLC3GLS1_D1N_MASK                        equ 0001h
CLC3GLS1_D1T_POSN                        equ 0001h
CLC3GLS1_D1T_POSITION                    equ 0001h
CLC3GLS1_D1T_SIZE                        equ 0001h
CLC3GLS1_D1T_LENGTH                      equ 0001h
CLC3GLS1_D1T_MASK                        equ 0002h
CLC3GLS1_D2N_POSN                        equ 0002h
CLC3GLS1_D2N_POSITION                    equ 0002h
CLC3GLS1_D2N_SIZE                        equ 0001h
CLC3GLS1_D2N_LENGTH                      equ 0001h
CLC3GLS1_D2N_MASK                        equ 0004h
CLC3GLS1_D2T_POSN                        equ 0003h
CLC3GLS1_D2T_POSITION                    equ 0003h
CLC3GLS1_D2T_SIZE                        equ 0001h
CLC3GLS1_D2T_LENGTH                      equ 0001h
CLC3GLS1_D2T_MASK                        equ 0008h
CLC3GLS1_D3N_POSN                        equ 0004h
CLC3GLS1_D3N_POSITION                    equ 0004h
CLC3GLS1_D3N_SIZE                        equ 0001h
CLC3GLS1_D3N_LENGTH                      equ 0001h
CLC3GLS1_D3N_MASK                        equ 0010h
CLC3GLS1_D3T_POSN                        equ 0005h
CLC3GLS1_D3T_POSITION                    equ 0005h
CLC3GLS1_D3T_SIZE                        equ 0001h
CLC3GLS1_D3T_LENGTH                      equ 0001h
CLC3GLS1_D3T_MASK                        equ 0020h
CLC3GLS1_D4N_POSN                        equ 0006h
CLC3GLS1_D4N_POSITION                    equ 0006h
CLC3GLS1_D4N_SIZE                        equ 0001h
CLC3GLS1_D4N_LENGTH                      equ 0001h
CLC3GLS1_D4N_MASK                        equ 0040h
CLC3GLS1_D4T_POSN                        equ 0007h
CLC3GLS1_D4T_POSITION                    equ 0007h
CLC3GLS1_D4T_SIZE                        equ 0001h
CLC3GLS1_D4T_LENGTH                      equ 0001h
CLC3GLS1_D4T_MASK                        equ 0080h

// Register: CLC3GLS2
#define CLC3GLS2 CLC3GLS2
CLC3GLS2                                 equ 0F2Ch
// bitfield definitions
CLC3GLS2_LC3G3D1N_POSN                   equ 0000h
CLC3GLS2_LC3G3D1N_POSITION               equ 0000h
CLC3GLS2_LC3G3D1N_SIZE                   equ 0001h
CLC3GLS2_LC3G3D1N_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D1N_MASK                   equ 0001h
CLC3GLS2_LC3G3D1T_POSN                   equ 0001h
CLC3GLS2_LC3G3D1T_POSITION               equ 0001h
CLC3GLS2_LC3G3D1T_SIZE                   equ 0001h
CLC3GLS2_LC3G3D1T_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D1T_MASK                   equ 0002h
CLC3GLS2_LC3G3D2N_POSN                   equ 0002h
CLC3GLS2_LC3G3D2N_POSITION               equ 0002h
CLC3GLS2_LC3G3D2N_SIZE                   equ 0001h
CLC3GLS2_LC3G3D2N_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D2N_MASK                   equ 0004h
CLC3GLS2_LC3G3D2T_POSN                   equ 0003h
CLC3GLS2_LC3G3D2T_POSITION               equ 0003h
CLC3GLS2_LC3G3D2T_SIZE                   equ 0001h
CLC3GLS2_LC3G3D2T_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D2T_MASK                   equ 0008h
CLC3GLS2_LC3G3D3N_POSN                   equ 0004h
CLC3GLS2_LC3G3D3N_POSITION               equ 0004h
CLC3GLS2_LC3G3D3N_SIZE                   equ 0001h
CLC3GLS2_LC3G3D3N_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D3N_MASK                   equ 0010h
CLC3GLS2_LC3G3D3T_POSN                   equ 0005h
CLC3GLS2_LC3G3D3T_POSITION               equ 0005h
CLC3GLS2_LC3G3D3T_SIZE                   equ 0001h
CLC3GLS2_LC3G3D3T_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D3T_MASK                   equ 0020h
CLC3GLS2_LC3G3D4N_POSN                   equ 0006h
CLC3GLS2_LC3G3D4N_POSITION               equ 0006h
CLC3GLS2_LC3G3D4N_SIZE                   equ 0001h
CLC3GLS2_LC3G3D4N_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D4N_MASK                   equ 0040h
CLC3GLS2_LC3G3D4T_POSN                   equ 0007h
CLC3GLS2_LC3G3D4T_POSITION               equ 0007h
CLC3GLS2_LC3G3D4T_SIZE                   equ 0001h
CLC3GLS2_LC3G3D4T_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D4T_MASK                   equ 0080h
CLC3GLS2_D1N_POSN                        equ 0000h
CLC3GLS2_D1N_POSITION                    equ 0000h
CLC3GLS2_D1N_SIZE                        equ 0001h
CLC3GLS2_D1N_LENGTH                      equ 0001h
CLC3GLS2_D1N_MASK                        equ 0001h
CLC3GLS2_D1T_POSN                        equ 0001h
CLC3GLS2_D1T_POSITION                    equ 0001h
CLC3GLS2_D1T_SIZE                        equ 0001h
CLC3GLS2_D1T_LENGTH                      equ 0001h
CLC3GLS2_D1T_MASK                        equ 0002h
CLC3GLS2_D2N_POSN                        equ 0002h
CLC3GLS2_D2N_POSITION                    equ 0002h
CLC3GLS2_D2N_SIZE                        equ 0001h
CLC3GLS2_D2N_LENGTH                      equ 0001h
CLC3GLS2_D2N_MASK                        equ 0004h
CLC3GLS2_D2T_POSN                        equ 0003h
CLC3GLS2_D2T_POSITION                    equ 0003h
CLC3GLS2_D2T_SIZE                        equ 0001h
CLC3GLS2_D2T_LENGTH                      equ 0001h
CLC3GLS2_D2T_MASK                        equ 0008h
CLC3GLS2_D3N_POSN                        equ 0004h
CLC3GLS2_D3N_POSITION                    equ 0004h
CLC3GLS2_D3N_SIZE                        equ 0001h
CLC3GLS2_D3N_LENGTH                      equ 0001h
CLC3GLS2_D3N_MASK                        equ 0010h
CLC3GLS2_D3T_POSN                        equ 0005h
CLC3GLS2_D3T_POSITION                    equ 0005h
CLC3GLS2_D3T_SIZE                        equ 0001h
CLC3GLS2_D3T_LENGTH                      equ 0001h
CLC3GLS2_D3T_MASK                        equ 0020h
CLC3GLS2_D4N_POSN                        equ 0006h
CLC3GLS2_D4N_POSITION                    equ 0006h
CLC3GLS2_D4N_SIZE                        equ 0001h
CLC3GLS2_D4N_LENGTH                      equ 0001h
CLC3GLS2_D4N_MASK                        equ 0040h
CLC3GLS2_D4T_POSN                        equ 0007h
CLC3GLS2_D4T_POSITION                    equ 0007h
CLC3GLS2_D4T_SIZE                        equ 0001h
CLC3GLS2_D4T_LENGTH                      equ 0001h
CLC3GLS2_D4T_MASK                        equ 0080h

// Register: CLC3GLS3
#define CLC3GLS3 CLC3GLS3
CLC3GLS3                                 equ 0F2Dh
// bitfield definitions
CLC3GLS3_LC3G4D1N_POSN                   equ 0000h
CLC3GLS3_LC3G4D1N_POSITION               equ 0000h
CLC3GLS3_LC3G4D1N_SIZE                   equ 0001h
CLC3GLS3_LC3G4D1N_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D1N_MASK                   equ 0001h
CLC3GLS3_LC3G4D1T_POSN                   equ 0001h
CLC3GLS3_LC3G4D1T_POSITION               equ 0001h
CLC3GLS3_LC3G4D1T_SIZE                   equ 0001h
CLC3GLS3_LC3G4D1T_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D1T_MASK                   equ 0002h
CLC3GLS3_LC3G4D2N_POSN                   equ 0002h
CLC3GLS3_LC3G4D2N_POSITION               equ 0002h
CLC3GLS3_LC3G4D2N_SIZE                   equ 0001h
CLC3GLS3_LC3G4D2N_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D2N_MASK                   equ 0004h
CLC3GLS3_LC3G4D2T_POSN                   equ 0003h
CLC3GLS3_LC3G4D2T_POSITION               equ 0003h
CLC3GLS3_LC3G4D2T_SIZE                   equ 0001h
CLC3GLS3_LC3G4D2T_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D2T_MASK                   equ 0008h
CLC3GLS3_LC3G4D3N_POSN                   equ 0004h
CLC3GLS3_LC3G4D3N_POSITION               equ 0004h
CLC3GLS3_LC3G4D3N_SIZE                   equ 0001h
CLC3GLS3_LC3G4D3N_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D3N_MASK                   equ 0010h
CLC3GLS3_LC3G4D3T_POSN                   equ 0005h
CLC3GLS3_LC3G4D3T_POSITION               equ 0005h
CLC3GLS3_LC3G4D3T_SIZE                   equ 0001h
CLC3GLS3_LC3G4D3T_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D3T_MASK                   equ 0020h
CLC3GLS3_LC3G4D4N_POSN                   equ 0006h
CLC3GLS3_LC3G4D4N_POSITION               equ 0006h
CLC3GLS3_LC3G4D4N_SIZE                   equ 0001h
CLC3GLS3_LC3G4D4N_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D4N_MASK                   equ 0040h
CLC3GLS3_LC3G4D4T_POSN                   equ 0007h
CLC3GLS3_LC3G4D4T_POSITION               equ 0007h
CLC3GLS3_LC3G4D4T_SIZE                   equ 0001h
CLC3GLS3_LC3G4D4T_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D4T_MASK                   equ 0080h
CLC3GLS3_G4D1N_POSN                      equ 0000h
CLC3GLS3_G4D1N_POSITION                  equ 0000h
CLC3GLS3_G4D1N_SIZE                      equ 0001h
CLC3GLS3_G4D1N_LENGTH                    equ 0001h
CLC3GLS3_G4D1N_MASK                      equ 0001h
CLC3GLS3_G4D1T_POSN                      equ 0001h
CLC3GLS3_G4D1T_POSITION                  equ 0001h
CLC3GLS3_G4D1T_SIZE                      equ 0001h
CLC3GLS3_G4D1T_LENGTH                    equ 0001h
CLC3GLS3_G4D1T_MASK                      equ 0002h
CLC3GLS3_G4D2N_POSN                      equ 0002h
CLC3GLS3_G4D2N_POSITION                  equ 0002h
CLC3GLS3_G4D2N_SIZE                      equ 0001h
CLC3GLS3_G4D2N_LENGTH                    equ 0001h
CLC3GLS3_G4D2N_MASK                      equ 0004h
CLC3GLS3_G4D2T_POSN                      equ 0003h
CLC3GLS3_G4D2T_POSITION                  equ 0003h
CLC3GLS3_G4D2T_SIZE                      equ 0001h
CLC3GLS3_G4D2T_LENGTH                    equ 0001h
CLC3GLS3_G4D2T_MASK                      equ 0008h
CLC3GLS3_G4D3N_POSN                      equ 0004h
CLC3GLS3_G4D3N_POSITION                  equ 0004h
CLC3GLS3_G4D3N_SIZE                      equ 0001h
CLC3GLS3_G4D3N_LENGTH                    equ 0001h
CLC3GLS3_G4D3N_MASK                      equ 0010h
CLC3GLS3_G4D3T_POSN                      equ 0005h
CLC3GLS3_G4D3T_POSITION                  equ 0005h
CLC3GLS3_G4D3T_SIZE                      equ 0001h
CLC3GLS3_G4D3T_LENGTH                    equ 0001h
CLC3GLS3_G4D3T_MASK                      equ 0020h
CLC3GLS3_G4D4N_POSN                      equ 0006h
CLC3GLS3_G4D4N_POSITION                  equ 0006h
CLC3GLS3_G4D4N_SIZE                      equ 0001h
CLC3GLS3_G4D4N_LENGTH                    equ 0001h
CLC3GLS3_G4D4N_MASK                      equ 0040h
CLC3GLS3_G4D4T_POSN                      equ 0007h
CLC3GLS3_G4D4T_POSITION                  equ 0007h
CLC3GLS3_G4D4T_SIZE                      equ 0001h
CLC3GLS3_G4D4T_LENGTH                    equ 0001h
CLC3GLS3_G4D4T_MASK                      equ 0080h

// Register: CLC4CON
#define CLC4CON CLC4CON
CLC4CON                                  equ 0F2Eh
// bitfield definitions
CLC4CON_LC4MODE_POSN                     equ 0000h
CLC4CON_LC4MODE_POSITION                 equ 0000h
CLC4CON_LC4MODE_SIZE                     equ 0003h
CLC4CON_LC4MODE_LENGTH                   equ 0003h
CLC4CON_LC4MODE_MASK                     equ 0007h
CLC4CON_LC4INTN_POSN                     equ 0003h
CLC4CON_LC4INTN_POSITION                 equ 0003h
CLC4CON_LC4INTN_SIZE                     equ 0001h
CLC4CON_LC4INTN_LENGTH                   equ 0001h
CLC4CON_LC4INTN_MASK                     equ 0008h
CLC4CON_LC4INTP_POSN                     equ 0004h
CLC4CON_LC4INTP_POSITION                 equ 0004h
CLC4CON_LC4INTP_SIZE                     equ 0001h
CLC4CON_LC4INTP_LENGTH                   equ 0001h
CLC4CON_LC4INTP_MASK                     equ 0010h
CLC4CON_LC4OUT_POSN                      equ 0005h
CLC4CON_LC4OUT_POSITION                  equ 0005h
CLC4CON_LC4OUT_SIZE                      equ 0001h
CLC4CON_LC4OUT_LENGTH                    equ 0001h
CLC4CON_LC4OUT_MASK                      equ 0020h
CLC4CON_LC4EN_POSN                       equ 0007h
CLC4CON_LC4EN_POSITION                   equ 0007h
CLC4CON_LC4EN_SIZE                       equ 0001h
CLC4CON_LC4EN_LENGTH                     equ 0001h
CLC4CON_LC4EN_MASK                       equ 0080h
CLC4CON_LC4MODE0_POSN                    equ 0000h
CLC4CON_LC4MODE0_POSITION                equ 0000h
CLC4CON_LC4MODE0_SIZE                    equ 0001h
CLC4CON_LC4MODE0_LENGTH                  equ 0001h
CLC4CON_LC4MODE0_MASK                    equ 0001h
CLC4CON_LC4MODE1_POSN                    equ 0001h
CLC4CON_LC4MODE1_POSITION                equ 0001h
CLC4CON_LC4MODE1_SIZE                    equ 0001h
CLC4CON_LC4MODE1_LENGTH                  equ 0001h
CLC4CON_LC4MODE1_MASK                    equ 0002h
CLC4CON_LC4MODE2_POSN                    equ 0002h
CLC4CON_LC4MODE2_POSITION                equ 0002h
CLC4CON_LC4MODE2_SIZE                    equ 0001h
CLC4CON_LC4MODE2_LENGTH                  equ 0001h
CLC4CON_LC4MODE2_MASK                    equ 0004h
CLC4CON_MODE_POSN                        equ 0000h
CLC4CON_MODE_POSITION                    equ 0000h
CLC4CON_MODE_SIZE                        equ 0003h
CLC4CON_MODE_LENGTH                      equ 0003h
CLC4CON_MODE_MASK                        equ 0007h
CLC4CON_INTN_POSN                        equ 0003h
CLC4CON_INTN_POSITION                    equ 0003h
CLC4CON_INTN_SIZE                        equ 0001h
CLC4CON_INTN_LENGTH                      equ 0001h
CLC4CON_INTN_MASK                        equ 0008h
CLC4CON_INTP_POSN                        equ 0004h
CLC4CON_INTP_POSITION                    equ 0004h
CLC4CON_INTP_SIZE                        equ 0001h
CLC4CON_INTP_LENGTH                      equ 0001h
CLC4CON_INTP_MASK                        equ 0010h
CLC4CON_OUT_POSN                         equ 0005h
CLC4CON_OUT_POSITION                     equ 0005h
CLC4CON_OUT_SIZE                         equ 0001h
CLC4CON_OUT_LENGTH                       equ 0001h
CLC4CON_OUT_MASK                         equ 0020h
CLC4CON_EN_POSN                          equ 0007h
CLC4CON_EN_POSITION                      equ 0007h
CLC4CON_EN_SIZE                          equ 0001h
CLC4CON_EN_LENGTH                        equ 0001h
CLC4CON_EN_MASK                          equ 0080h
CLC4CON_MODE0_POSN                       equ 0000h
CLC4CON_MODE0_POSITION                   equ 0000h
CLC4CON_MODE0_SIZE                       equ 0001h
CLC4CON_MODE0_LENGTH                     equ 0001h
CLC4CON_MODE0_MASK                       equ 0001h
CLC4CON_MODE1_POSN                       equ 0001h
CLC4CON_MODE1_POSITION                   equ 0001h
CLC4CON_MODE1_SIZE                       equ 0001h
CLC4CON_MODE1_LENGTH                     equ 0001h
CLC4CON_MODE1_MASK                       equ 0002h
CLC4CON_MODE2_POSN                       equ 0002h
CLC4CON_MODE2_POSITION                   equ 0002h
CLC4CON_MODE2_SIZE                       equ 0001h
CLC4CON_MODE2_LENGTH                     equ 0001h
CLC4CON_MODE2_MASK                       equ 0004h

// Register: CLC4POL
#define CLC4POL CLC4POL
CLC4POL                                  equ 0F2Fh
// bitfield definitions
CLC4POL_LC4G1POL_POSN                    equ 0000h
CLC4POL_LC4G1POL_POSITION                equ 0000h
CLC4POL_LC4G1POL_SIZE                    equ 0001h
CLC4POL_LC4G1POL_LENGTH                  equ 0001h
CLC4POL_LC4G1POL_MASK                    equ 0001h
CLC4POL_LC4G2POL_POSN                    equ 0001h
CLC4POL_LC4G2POL_POSITION                equ 0001h
CLC4POL_LC4G2POL_SIZE                    equ 0001h
CLC4POL_LC4G2POL_LENGTH                  equ 0001h
CLC4POL_LC4G2POL_MASK                    equ 0002h
CLC4POL_LC4G3POL_POSN                    equ 0002h
CLC4POL_LC4G3POL_POSITION                equ 0002h
CLC4POL_LC4G3POL_SIZE                    equ 0001h
CLC4POL_LC4G3POL_LENGTH                  equ 0001h
CLC4POL_LC4G3POL_MASK                    equ 0004h
CLC4POL_LC4G4POL_POSN                    equ 0003h
CLC4POL_LC4G4POL_POSITION                equ 0003h
CLC4POL_LC4G4POL_SIZE                    equ 0001h
CLC4POL_LC4G4POL_LENGTH                  equ 0001h
CLC4POL_LC4G4POL_MASK                    equ 0008h
CLC4POL_LC4POL_POSN                      equ 0007h
CLC4POL_LC4POL_POSITION                  equ 0007h
CLC4POL_LC4POL_SIZE                      equ 0001h
CLC4POL_LC4POL_LENGTH                    equ 0001h
CLC4POL_LC4POL_MASK                      equ 0080h
CLC4POL_G1POL_POSN                       equ 0000h
CLC4POL_G1POL_POSITION                   equ 0000h
CLC4POL_G1POL_SIZE                       equ 0001h
CLC4POL_G1POL_LENGTH                     equ 0001h
CLC4POL_G1POL_MASK                       equ 0001h
CLC4POL_G2POL_POSN                       equ 0001h
CLC4POL_G2POL_POSITION                   equ 0001h
CLC4POL_G2POL_SIZE                       equ 0001h
CLC4POL_G2POL_LENGTH                     equ 0001h
CLC4POL_G2POL_MASK                       equ 0002h
CLC4POL_G3POL_POSN                       equ 0002h
CLC4POL_G3POL_POSITION                   equ 0002h
CLC4POL_G3POL_SIZE                       equ 0001h
CLC4POL_G3POL_LENGTH                     equ 0001h
CLC4POL_G3POL_MASK                       equ 0004h
CLC4POL_G4POL_POSN                       equ 0003h
CLC4POL_G4POL_POSITION                   equ 0003h
CLC4POL_G4POL_SIZE                       equ 0001h
CLC4POL_G4POL_LENGTH                     equ 0001h
CLC4POL_G4POL_MASK                       equ 0008h
CLC4POL_POL_POSN                         equ 0007h
CLC4POL_POL_POSITION                     equ 0007h
CLC4POL_POL_SIZE                         equ 0001h
CLC4POL_POL_LENGTH                       equ 0001h
CLC4POL_POL_MASK                         equ 0080h

// Register: CLC4SEL0
#define CLC4SEL0 CLC4SEL0
CLC4SEL0                                 equ 0F30h
// bitfield definitions
CLC4SEL0_LC4D1S0_POSN                    equ 0000h
CLC4SEL0_LC4D1S0_POSITION                equ 0000h
CLC4SEL0_LC4D1S0_SIZE                    equ 0001h
CLC4SEL0_LC4D1S0_LENGTH                  equ 0001h
CLC4SEL0_LC4D1S0_MASK                    equ 0001h
CLC4SEL0_LC4D1S1_POSN                    equ 0001h
CLC4SEL0_LC4D1S1_POSITION                equ 0001h
CLC4SEL0_LC4D1S1_SIZE                    equ 0001h
CLC4SEL0_LC4D1S1_LENGTH                  equ 0001h
CLC4SEL0_LC4D1S1_MASK                    equ 0002h
CLC4SEL0_LC4D1S2_POSN                    equ 0002h
CLC4SEL0_LC4D1S2_POSITION                equ 0002h
CLC4SEL0_LC4D1S2_SIZE                    equ 0001h
CLC4SEL0_LC4D1S2_LENGTH                  equ 0001h
CLC4SEL0_LC4D1S2_MASK                    equ 0004h
CLC4SEL0_LC4D1S3_POSN                    equ 0003h
CLC4SEL0_LC4D1S3_POSITION                equ 0003h
CLC4SEL0_LC4D1S3_SIZE                    equ 0001h
CLC4SEL0_LC4D1S3_LENGTH                  equ 0001h
CLC4SEL0_LC4D1S3_MASK                    equ 0008h
CLC4SEL0_LC4D1S4_POSN                    equ 0004h
CLC4SEL0_LC4D1S4_POSITION                equ 0004h
CLC4SEL0_LC4D1S4_SIZE                    equ 0001h
CLC4SEL0_LC4D1S4_LENGTH                  equ 0001h
CLC4SEL0_LC4D1S4_MASK                    equ 0010h
CLC4SEL0_LC4D1S5_POSN                    equ 0005h
CLC4SEL0_LC4D1S5_POSITION                equ 0005h
CLC4SEL0_LC4D1S5_SIZE                    equ 0001h
CLC4SEL0_LC4D1S5_LENGTH                  equ 0001h
CLC4SEL0_LC4D1S5_MASK                    equ 0020h
CLC4SEL0_LC4D1S_POSN                     equ 0000h
CLC4SEL0_LC4D1S_POSITION                 equ 0000h
CLC4SEL0_LC4D1S_SIZE                     equ 0008h
CLC4SEL0_LC4D1S_LENGTH                   equ 0008h
CLC4SEL0_LC4D1S_MASK                     equ 00FFh
CLC4SEL0_D1S_POSN                        equ 0000h
CLC4SEL0_D1S_POSITION                    equ 0000h
CLC4SEL0_D1S_SIZE                        equ 0008h
CLC4SEL0_D1S_LENGTH                      equ 0008h
CLC4SEL0_D1S_MASK                        equ 00FFh
CLC4SEL0_D1S0_POSN                       equ 0000h
CLC4SEL0_D1S0_POSITION                   equ 0000h
CLC4SEL0_D1S0_SIZE                       equ 0001h
CLC4SEL0_D1S0_LENGTH                     equ 0001h
CLC4SEL0_D1S0_MASK                       equ 0001h
CLC4SEL0_D1S1_POSN                       equ 0001h
CLC4SEL0_D1S1_POSITION                   equ 0001h
CLC4SEL0_D1S1_SIZE                       equ 0001h
CLC4SEL0_D1S1_LENGTH                     equ 0001h
CLC4SEL0_D1S1_MASK                       equ 0002h
CLC4SEL0_D1S2_POSN                       equ 0002h
CLC4SEL0_D1S2_POSITION                   equ 0002h
CLC4SEL0_D1S2_SIZE                       equ 0001h
CLC4SEL0_D1S2_LENGTH                     equ 0001h
CLC4SEL0_D1S2_MASK                       equ 0004h
CLC4SEL0_D1S3_POSN                       equ 0003h
CLC4SEL0_D1S3_POSITION                   equ 0003h
CLC4SEL0_D1S3_SIZE                       equ 0001h
CLC4SEL0_D1S3_LENGTH                     equ 0001h
CLC4SEL0_D1S3_MASK                       equ 0008h
CLC4SEL0_D1S4_POSN                       equ 0004h
CLC4SEL0_D1S4_POSITION                   equ 0004h
CLC4SEL0_D1S4_SIZE                       equ 0001h
CLC4SEL0_D1S4_LENGTH                     equ 0001h
CLC4SEL0_D1S4_MASK                       equ 0010h
CLC4SEL0_D1S5_POSN                       equ 0005h
CLC4SEL0_D1S5_POSITION                   equ 0005h
CLC4SEL0_D1S5_SIZE                       equ 0001h
CLC4SEL0_D1S5_LENGTH                     equ 0001h
CLC4SEL0_D1S5_MASK                       equ 0020h

// Register: CLC4SEL1
#define CLC4SEL1 CLC4SEL1
CLC4SEL1                                 equ 0F31h
// bitfield definitions
CLC4SEL1_LC4D2S0_POSN                    equ 0000h
CLC4SEL1_LC4D2S0_POSITION                equ 0000h
CLC4SEL1_LC4D2S0_SIZE                    equ 0001h
CLC4SEL1_LC4D2S0_LENGTH                  equ 0001h
CLC4SEL1_LC4D2S0_MASK                    equ 0001h
CLC4SEL1_LC4D2S1_POSN                    equ 0001h
CLC4SEL1_LC4D2S1_POSITION                equ 0001h
CLC4SEL1_LC4D2S1_SIZE                    equ 0001h
CLC4SEL1_LC4D2S1_LENGTH                  equ 0001h
CLC4SEL1_LC4D2S1_MASK                    equ 0002h
CLC4SEL1_LC4D2S2_POSN                    equ 0002h
CLC4SEL1_LC4D2S2_POSITION                equ 0002h
CLC4SEL1_LC4D2S2_SIZE                    equ 0001h
CLC4SEL1_LC4D2S2_LENGTH                  equ 0001h
CLC4SEL1_LC4D2S2_MASK                    equ 0004h
CLC4SEL1_LC4D2S3_POSN                    equ 0003h
CLC4SEL1_LC4D2S3_POSITION                equ 0003h
CLC4SEL1_LC4D2S3_SIZE                    equ 0001h
CLC4SEL1_LC4D2S3_LENGTH                  equ 0001h
CLC4SEL1_LC4D2S3_MASK                    equ 0008h
CLC4SEL1_LC4D2S4_POSN                    equ 0004h
CLC4SEL1_LC4D2S4_POSITION                equ 0004h
CLC4SEL1_LC4D2S4_SIZE                    equ 0001h
CLC4SEL1_LC4D2S4_LENGTH                  equ 0001h
CLC4SEL1_LC4D2S4_MASK                    equ 0010h
CLC4SEL1_LC4D2S5_POSN                    equ 0005h
CLC4SEL1_LC4D2S5_POSITION                equ 0005h
CLC4SEL1_LC4D2S5_SIZE                    equ 0001h
CLC4SEL1_LC4D2S5_LENGTH                  equ 0001h
CLC4SEL1_LC4D2S5_MASK                    equ 0020h
CLC4SEL1_LC4D2S_POSN                     equ 0000h
CLC4SEL1_LC4D2S_POSITION                 equ 0000h
CLC4SEL1_LC4D2S_SIZE                     equ 0008h
CLC4SEL1_LC4D2S_LENGTH                   equ 0008h
CLC4SEL1_LC4D2S_MASK                     equ 00FFh
CLC4SEL1_D2S_POSN                        equ 0000h
CLC4SEL1_D2S_POSITION                    equ 0000h
CLC4SEL1_D2S_SIZE                        equ 0008h
CLC4SEL1_D2S_LENGTH                      equ 0008h
CLC4SEL1_D2S_MASK                        equ 00FFh
CLC4SEL1_D2S0_POSN                       equ 0000h
CLC4SEL1_D2S0_POSITION                   equ 0000h
CLC4SEL1_D2S0_SIZE                       equ 0001h
CLC4SEL1_D2S0_LENGTH                     equ 0001h
CLC4SEL1_D2S0_MASK                       equ 0001h
CLC4SEL1_D2S1_POSN                       equ 0001h
CLC4SEL1_D2S1_POSITION                   equ 0001h
CLC4SEL1_D2S1_SIZE                       equ 0001h
CLC4SEL1_D2S1_LENGTH                     equ 0001h
CLC4SEL1_D2S1_MASK                       equ 0002h
CLC4SEL1_D2S2_POSN                       equ 0002h
CLC4SEL1_D2S2_POSITION                   equ 0002h
CLC4SEL1_D2S2_SIZE                       equ 0001h
CLC4SEL1_D2S2_LENGTH                     equ 0001h
CLC4SEL1_D2S2_MASK                       equ 0004h
CLC4SEL1_D2S3_POSN                       equ 0003h
CLC4SEL1_D2S3_POSITION                   equ 0003h
CLC4SEL1_D2S3_SIZE                       equ 0001h
CLC4SEL1_D2S3_LENGTH                     equ 0001h
CLC4SEL1_D2S3_MASK                       equ 0008h
CLC4SEL1_D2S4_POSN                       equ 0004h
CLC4SEL1_D2S4_POSITION                   equ 0004h
CLC4SEL1_D2S4_SIZE                       equ 0001h
CLC4SEL1_D2S4_LENGTH                     equ 0001h
CLC4SEL1_D2S4_MASK                       equ 0010h
CLC4SEL1_D2S5_POSN                       equ 0005h
CLC4SEL1_D2S5_POSITION                   equ 0005h
CLC4SEL1_D2S5_SIZE                       equ 0001h
CLC4SEL1_D2S5_LENGTH                     equ 0001h
CLC4SEL1_D2S5_MASK                       equ 0020h

// Register: CLC4SEL2
#define CLC4SEL2 CLC4SEL2
CLC4SEL2                                 equ 0F32h
// bitfield definitions
CLC4SEL2_LC4D3S0_POSN                    equ 0000h
CLC4SEL2_LC4D3S0_POSITION                equ 0000h
CLC4SEL2_LC4D3S0_SIZE                    equ 0001h
CLC4SEL2_LC4D3S0_LENGTH                  equ 0001h
CLC4SEL2_LC4D3S0_MASK                    equ 0001h
CLC4SEL2_LC4D3S1_POSN                    equ 0001h
CLC4SEL2_LC4D3S1_POSITION                equ 0001h
CLC4SEL2_LC4D3S1_SIZE                    equ 0001h
CLC4SEL2_LC4D3S1_LENGTH                  equ 0001h
CLC4SEL2_LC4D3S1_MASK                    equ 0002h
CLC4SEL2_LC4D3S2_POSN                    equ 0002h
CLC4SEL2_LC4D3S2_POSITION                equ 0002h
CLC4SEL2_LC4D3S2_SIZE                    equ 0001h
CLC4SEL2_LC4D3S2_LENGTH                  equ 0001h
CLC4SEL2_LC4D3S2_MASK                    equ 0004h
CLC4SEL2_LC4D3S3_POSN                    equ 0003h
CLC4SEL2_LC4D3S3_POSITION                equ 0003h
CLC4SEL2_LC4D3S3_SIZE                    equ 0001h
CLC4SEL2_LC4D3S3_LENGTH                  equ 0001h
CLC4SEL2_LC4D3S3_MASK                    equ 0008h
CLC4SEL2_LC4D3S4_POSN                    equ 0004h
CLC4SEL2_LC4D3S4_POSITION                equ 0004h
CLC4SEL2_LC4D3S4_SIZE                    equ 0001h
CLC4SEL2_LC4D3S4_LENGTH                  equ 0001h
CLC4SEL2_LC4D3S4_MASK                    equ 0010h
CLC4SEL2_LC4D3S5_POSN                    equ 0005h
CLC4SEL2_LC4D3S5_POSITION                equ 0005h
CLC4SEL2_LC4D3S5_SIZE                    equ 0001h
CLC4SEL2_LC4D3S5_LENGTH                  equ 0001h
CLC4SEL2_LC4D3S5_MASK                    equ 0020h
CLC4SEL2_LC4D3S_POSN                     equ 0000h
CLC4SEL2_LC4D3S_POSITION                 equ 0000h
CLC4SEL2_LC4D3S_SIZE                     equ 0008h
CLC4SEL2_LC4D3S_LENGTH                   equ 0008h
CLC4SEL2_LC4D3S_MASK                     equ 00FFh
CLC4SEL2_D3S_POSN                        equ 0000h
CLC4SEL2_D3S_POSITION                    equ 0000h
CLC4SEL2_D3S_SIZE                        equ 0008h
CLC4SEL2_D3S_LENGTH                      equ 0008h
CLC4SEL2_D3S_MASK                        equ 00FFh
CLC4SEL2_D3S0_POSN                       equ 0000h
CLC4SEL2_D3S0_POSITION                   equ 0000h
CLC4SEL2_D3S0_SIZE                       equ 0001h
CLC4SEL2_D3S0_LENGTH                     equ 0001h
CLC4SEL2_D3S0_MASK                       equ 0001h
CLC4SEL2_D3S1_POSN                       equ 0001h
CLC4SEL2_D3S1_POSITION                   equ 0001h
CLC4SEL2_D3S1_SIZE                       equ 0001h
CLC4SEL2_D3S1_LENGTH                     equ 0001h
CLC4SEL2_D3S1_MASK                       equ 0002h
CLC4SEL2_D3S2_POSN                       equ 0002h
CLC4SEL2_D3S2_POSITION                   equ 0002h
CLC4SEL2_D3S2_SIZE                       equ 0001h
CLC4SEL2_D3S2_LENGTH                     equ 0001h
CLC4SEL2_D3S2_MASK                       equ 0004h
CLC4SEL2_D3S3_POSN                       equ 0003h
CLC4SEL2_D3S3_POSITION                   equ 0003h
CLC4SEL2_D3S3_SIZE                       equ 0001h
CLC4SEL2_D3S3_LENGTH                     equ 0001h
CLC4SEL2_D3S3_MASK                       equ 0008h
CLC4SEL2_D3S4_POSN                       equ 0004h
CLC4SEL2_D3S4_POSITION                   equ 0004h
CLC4SEL2_D3S4_SIZE                       equ 0001h
CLC4SEL2_D3S4_LENGTH                     equ 0001h
CLC4SEL2_D3S4_MASK                       equ 0010h
CLC4SEL2_D3S5_POSN                       equ 0005h
CLC4SEL2_D3S5_POSITION                   equ 0005h
CLC4SEL2_D3S5_SIZE                       equ 0001h
CLC4SEL2_D3S5_LENGTH                     equ 0001h
CLC4SEL2_D3S5_MASK                       equ 0020h

// Register: CLC4SEL3
#define CLC4SEL3 CLC4SEL3
CLC4SEL3                                 equ 0F33h
// bitfield definitions
CLC4SEL3_LC4D4S0_POSN                    equ 0000h
CLC4SEL3_LC4D4S0_POSITION                equ 0000h
CLC4SEL3_LC4D4S0_SIZE                    equ 0001h
CLC4SEL3_LC4D4S0_LENGTH                  equ 0001h
CLC4SEL3_LC4D4S0_MASK                    equ 0001h
CLC4SEL3_LC4D4S1_POSN                    equ 0001h
CLC4SEL3_LC4D4S1_POSITION                equ 0001h
CLC4SEL3_LC4D4S1_SIZE                    equ 0001h
CLC4SEL3_LC4D4S1_LENGTH                  equ 0001h
CLC4SEL3_LC4D4S1_MASK                    equ 0002h
CLC4SEL3_LC4D4S2_POSN                    equ 0002h
CLC4SEL3_LC4D4S2_POSITION                equ 0002h
CLC4SEL3_LC4D4S2_SIZE                    equ 0001h
CLC4SEL3_LC4D4S2_LENGTH                  equ 0001h
CLC4SEL3_LC4D4S2_MASK                    equ 0004h
CLC4SEL3_LC4D4S3_POSN                    equ 0003h
CLC4SEL3_LC4D4S3_POSITION                equ 0003h
CLC4SEL3_LC4D4S3_SIZE                    equ 0001h
CLC4SEL3_LC4D4S3_LENGTH                  equ 0001h
CLC4SEL3_LC4D4S3_MASK                    equ 0008h
CLC4SEL3_LC4D4S4_POSN                    equ 0004h
CLC4SEL3_LC4D4S4_POSITION                equ 0004h
CLC4SEL3_LC4D4S4_SIZE                    equ 0001h
CLC4SEL3_LC4D4S4_LENGTH                  equ 0001h
CLC4SEL3_LC4D4S4_MASK                    equ 0010h
CLC4SEL3_LC4D4S5_POSN                    equ 0005h
CLC4SEL3_LC4D4S5_POSITION                equ 0005h
CLC4SEL3_LC4D4S5_SIZE                    equ 0001h
CLC4SEL3_LC4D4S5_LENGTH                  equ 0001h
CLC4SEL3_LC4D4S5_MASK                    equ 0020h
CLC4SEL3_LC4D4S_POSN                     equ 0000h
CLC4SEL3_LC4D4S_POSITION                 equ 0000h
CLC4SEL3_LC4D4S_SIZE                     equ 0008h
CLC4SEL3_LC4D4S_LENGTH                   equ 0008h
CLC4SEL3_LC4D4S_MASK                     equ 00FFh
CLC4SEL3_D4S_POSN                        equ 0000h
CLC4SEL3_D4S_POSITION                    equ 0000h
CLC4SEL3_D4S_SIZE                        equ 0008h
CLC4SEL3_D4S_LENGTH                      equ 0008h
CLC4SEL3_D4S_MASK                        equ 00FFh
CLC4SEL3_D4S0_POSN                       equ 0000h
CLC4SEL3_D4S0_POSITION                   equ 0000h
CLC4SEL3_D4S0_SIZE                       equ 0001h
CLC4SEL3_D4S0_LENGTH                     equ 0001h
CLC4SEL3_D4S0_MASK                       equ 0001h
CLC4SEL3_D4S1_POSN                       equ 0001h
CLC4SEL3_D4S1_POSITION                   equ 0001h
CLC4SEL3_D4S1_SIZE                       equ 0001h
CLC4SEL3_D4S1_LENGTH                     equ 0001h
CLC4SEL3_D4S1_MASK                       equ 0002h
CLC4SEL3_D4S2_POSN                       equ 0002h
CLC4SEL3_D4S2_POSITION                   equ 0002h
CLC4SEL3_D4S2_SIZE                       equ 0001h
CLC4SEL3_D4S2_LENGTH                     equ 0001h
CLC4SEL3_D4S2_MASK                       equ 0004h
CLC4SEL3_D4S3_POSN                       equ 0003h
CLC4SEL3_D4S3_POSITION                   equ 0003h
CLC4SEL3_D4S3_SIZE                       equ 0001h
CLC4SEL3_D4S3_LENGTH                     equ 0001h
CLC4SEL3_D4S3_MASK                       equ 0008h
CLC4SEL3_D4S4_POSN                       equ 0004h
CLC4SEL3_D4S4_POSITION                   equ 0004h
CLC4SEL3_D4S4_SIZE                       equ 0001h
CLC4SEL3_D4S4_LENGTH                     equ 0001h
CLC4SEL3_D4S4_MASK                       equ 0010h
CLC4SEL3_D4S5_POSN                       equ 0005h
CLC4SEL3_D4S5_POSITION                   equ 0005h
CLC4SEL3_D4S5_SIZE                       equ 0001h
CLC4SEL3_D4S5_LENGTH                     equ 0001h
CLC4SEL3_D4S5_MASK                       equ 0020h

// Register: CLC4GLS0
#define CLC4GLS0 CLC4GLS0
CLC4GLS0                                 equ 0F34h
// bitfield definitions
CLC4GLS0_LC4G1D1N_POSN                   equ 0000h
CLC4GLS0_LC4G1D1N_POSITION               equ 0000h
CLC4GLS0_LC4G1D1N_SIZE                   equ 0001h
CLC4GLS0_LC4G1D1N_LENGTH                 equ 0001h
CLC4GLS0_LC4G1D1N_MASK                   equ 0001h
CLC4GLS0_LC4G1D1T_POSN                   equ 0001h
CLC4GLS0_LC4G1D1T_POSITION               equ 0001h
CLC4GLS0_LC4G1D1T_SIZE                   equ 0001h
CLC4GLS0_LC4G1D1T_LENGTH                 equ 0001h
CLC4GLS0_LC4G1D1T_MASK                   equ 0002h
CLC4GLS0_LC4G1D2N_POSN                   equ 0002h
CLC4GLS0_LC4G1D2N_POSITION               equ 0002h
CLC4GLS0_LC4G1D2N_SIZE                   equ 0001h
CLC4GLS0_LC4G1D2N_LENGTH                 equ 0001h
CLC4GLS0_LC4G1D2N_MASK                   equ 0004h
CLC4GLS0_LC4G1D2T_POSN                   equ 0003h
CLC4GLS0_LC4G1D2T_POSITION               equ 0003h
CLC4GLS0_LC4G1D2T_SIZE                   equ 0001h
CLC4GLS0_LC4G1D2T_LENGTH                 equ 0001h
CLC4GLS0_LC4G1D2T_MASK                   equ 0008h
CLC4GLS0_LC4G1D3N_POSN                   equ 0004h
CLC4GLS0_LC4G1D3N_POSITION               equ 0004h
CLC4GLS0_LC4G1D3N_SIZE                   equ 0001h
CLC4GLS0_LC4G1D3N_LENGTH                 equ 0001h
CLC4GLS0_LC4G1D3N_MASK                   equ 0010h
CLC4GLS0_LC4G1D3T_POSN                   equ 0005h
CLC4GLS0_LC4G1D3T_POSITION               equ 0005h
CLC4GLS0_LC4G1D3T_SIZE                   equ 0001h
CLC4GLS0_LC4G1D3T_LENGTH                 equ 0001h
CLC4GLS0_LC4G1D3T_MASK                   equ 0020h
CLC4GLS0_LC4G1D4N_POSN                   equ 0006h
CLC4GLS0_LC4G1D4N_POSITION               equ 0006h
CLC4GLS0_LC4G1D4N_SIZE                   equ 0001h
CLC4GLS0_LC4G1D4N_LENGTH                 equ 0001h
CLC4GLS0_LC4G1D4N_MASK                   equ 0040h
CLC4GLS0_LC4G1D4T_POSN                   equ 0007h
CLC4GLS0_LC4G1D4T_POSITION               equ 0007h
CLC4GLS0_LC4G1D4T_SIZE                   equ 0001h
CLC4GLS0_LC4G1D4T_LENGTH                 equ 0001h
CLC4GLS0_LC4G1D4T_MASK                   equ 0080h
CLC4GLS0_D1N_POSN                        equ 0000h
CLC4GLS0_D1N_POSITION                    equ 0000h
CLC4GLS0_D1N_SIZE                        equ 0001h
CLC4GLS0_D1N_LENGTH                      equ 0001h
CLC4GLS0_D1N_MASK                        equ 0001h
CLC4GLS0_D1T_POSN                        equ 0001h
CLC4GLS0_D1T_POSITION                    equ 0001h
CLC4GLS0_D1T_SIZE                        equ 0001h
CLC4GLS0_D1T_LENGTH                      equ 0001h
CLC4GLS0_D1T_MASK                        equ 0002h
CLC4GLS0_D2N_POSN                        equ 0002h
CLC4GLS0_D2N_POSITION                    equ 0002h
CLC4GLS0_D2N_SIZE                        equ 0001h
CLC4GLS0_D2N_LENGTH                      equ 0001h
CLC4GLS0_D2N_MASK                        equ 0004h
CLC4GLS0_D2T_POSN                        equ 0003h
CLC4GLS0_D2T_POSITION                    equ 0003h
CLC4GLS0_D2T_SIZE                        equ 0001h
CLC4GLS0_D2T_LENGTH                      equ 0001h
CLC4GLS0_D2T_MASK                        equ 0008h
CLC4GLS0_D3N_POSN                        equ 0004h
CLC4GLS0_D3N_POSITION                    equ 0004h
CLC4GLS0_D3N_SIZE                        equ 0001h
CLC4GLS0_D3N_LENGTH                      equ 0001h
CLC4GLS0_D3N_MASK                        equ 0010h
CLC4GLS0_D3T_POSN                        equ 0005h
CLC4GLS0_D3T_POSITION                    equ 0005h
CLC4GLS0_D3T_SIZE                        equ 0001h
CLC4GLS0_D3T_LENGTH                      equ 0001h
CLC4GLS0_D3T_MASK                        equ 0020h
CLC4GLS0_D4N_POSN                        equ 0006h
CLC4GLS0_D4N_POSITION                    equ 0006h
CLC4GLS0_D4N_SIZE                        equ 0001h
CLC4GLS0_D4N_LENGTH                      equ 0001h
CLC4GLS0_D4N_MASK                        equ 0040h
CLC4GLS0_D4T_POSN                        equ 0007h
CLC4GLS0_D4T_POSITION                    equ 0007h
CLC4GLS0_D4T_SIZE                        equ 0001h
CLC4GLS0_D4T_LENGTH                      equ 0001h
CLC4GLS0_D4T_MASK                        equ 0080h

// Register: CLC4GLS1
#define CLC4GLS1 CLC4GLS1
CLC4GLS1                                 equ 0F35h
// bitfield definitions
CLC4GLS1_LC4G2D1N_POSN                   equ 0000h
CLC4GLS1_LC4G2D1N_POSITION               equ 0000h
CLC4GLS1_LC4G2D1N_SIZE                   equ 0001h
CLC4GLS1_LC4G2D1N_LENGTH                 equ 0001h
CLC4GLS1_LC4G2D1N_MASK                   equ 0001h
CLC4GLS1_LC4G2D1T_POSN                   equ 0001h
CLC4GLS1_LC4G2D1T_POSITION               equ 0001h
CLC4GLS1_LC4G2D1T_SIZE                   equ 0001h
CLC4GLS1_LC4G2D1T_LENGTH                 equ 0001h
CLC4GLS1_LC4G2D1T_MASK                   equ 0002h
CLC4GLS1_LC4G2D2N_POSN                   equ 0002h
CLC4GLS1_LC4G2D2N_POSITION               equ 0002h
CLC4GLS1_LC4G2D2N_SIZE                   equ 0001h
CLC4GLS1_LC4G2D2N_LENGTH                 equ 0001h
CLC4GLS1_LC4G2D2N_MASK                   equ 0004h
CLC4GLS1_LC4G2D2T_POSN                   equ 0003h
CLC4GLS1_LC4G2D2T_POSITION               equ 0003h
CLC4GLS1_LC4G2D2T_SIZE                   equ 0001h
CLC4GLS1_LC4G2D2T_LENGTH                 equ 0001h
CLC4GLS1_LC4G2D2T_MASK                   equ 0008h
CLC4GLS1_LC4G2D3N_POSN                   equ 0004h
CLC4GLS1_LC4G2D3N_POSITION               equ 0004h
CLC4GLS1_LC4G2D3N_SIZE                   equ 0001h
CLC4GLS1_LC4G2D3N_LENGTH                 equ 0001h
CLC4GLS1_LC4G2D3N_MASK                   equ 0010h
CLC4GLS1_LC4G2D3T_POSN                   equ 0005h
CLC4GLS1_LC4G2D3T_POSITION               equ 0005h
CLC4GLS1_LC4G2D3T_SIZE                   equ 0001h
CLC4GLS1_LC4G2D3T_LENGTH                 equ 0001h
CLC4GLS1_LC4G2D3T_MASK                   equ 0020h
CLC4GLS1_LC4G2D4N_POSN                   equ 0006h
CLC4GLS1_LC4G2D4N_POSITION               equ 0006h
CLC4GLS1_LC4G2D4N_SIZE                   equ 0001h
CLC4GLS1_LC4G2D4N_LENGTH                 equ 0001h
CLC4GLS1_LC4G2D4N_MASK                   equ 0040h
CLC4GLS1_LC4G2D4T_POSN                   equ 0007h
CLC4GLS1_LC4G2D4T_POSITION               equ 0007h
CLC4GLS1_LC4G2D4T_SIZE                   equ 0001h
CLC4GLS1_LC4G2D4T_LENGTH                 equ 0001h
CLC4GLS1_LC4G2D4T_MASK                   equ 0080h
CLC4GLS1_D1N_POSN                        equ 0000h
CLC4GLS1_D1N_POSITION                    equ 0000h
CLC4GLS1_D1N_SIZE                        equ 0001h
CLC4GLS1_D1N_LENGTH                      equ 0001h
CLC4GLS1_D1N_MASK                        equ 0001h
CLC4GLS1_D1T_POSN                        equ 0001h
CLC4GLS1_D1T_POSITION                    equ 0001h
CLC4GLS1_D1T_SIZE                        equ 0001h
CLC4GLS1_D1T_LENGTH                      equ 0001h
CLC4GLS1_D1T_MASK                        equ 0002h
CLC4GLS1_D2N_POSN                        equ 0002h
CLC4GLS1_D2N_POSITION                    equ 0002h
CLC4GLS1_D2N_SIZE                        equ 0001h
CLC4GLS1_D2N_LENGTH                      equ 0001h
CLC4GLS1_D2N_MASK                        equ 0004h
CLC4GLS1_D2T_POSN                        equ 0003h
CLC4GLS1_D2T_POSITION                    equ 0003h
CLC4GLS1_D2T_SIZE                        equ 0001h
CLC4GLS1_D2T_LENGTH                      equ 0001h
CLC4GLS1_D2T_MASK                        equ 0008h
CLC4GLS1_D3N_POSN                        equ 0004h
CLC4GLS1_D3N_POSITION                    equ 0004h
CLC4GLS1_D3N_SIZE                        equ 0001h
CLC4GLS1_D3N_LENGTH                      equ 0001h
CLC4GLS1_D3N_MASK                        equ 0010h
CLC4GLS1_D3T_POSN                        equ 0005h
CLC4GLS1_D3T_POSITION                    equ 0005h
CLC4GLS1_D3T_SIZE                        equ 0001h
CLC4GLS1_D3T_LENGTH                      equ 0001h
CLC4GLS1_D3T_MASK                        equ 0020h
CLC4GLS1_D4N_POSN                        equ 0006h
CLC4GLS1_D4N_POSITION                    equ 0006h
CLC4GLS1_D4N_SIZE                        equ 0001h
CLC4GLS1_D4N_LENGTH                      equ 0001h
CLC4GLS1_D4N_MASK                        equ 0040h
CLC4GLS1_D4T_POSN                        equ 0007h
CLC4GLS1_D4T_POSITION                    equ 0007h
CLC4GLS1_D4T_SIZE                        equ 0001h
CLC4GLS1_D4T_LENGTH                      equ 0001h
CLC4GLS1_D4T_MASK                        equ 0080h

// Register: CLC4GLS2
#define CLC4GLS2 CLC4GLS2
CLC4GLS2                                 equ 0F36h
// bitfield definitions
CLC4GLS2_LC4G3D1N_POSN                   equ 0000h
CLC4GLS2_LC4G3D1N_POSITION               equ 0000h
CLC4GLS2_LC4G3D1N_SIZE                   equ 0001h
CLC4GLS2_LC4G3D1N_LENGTH                 equ 0001h
CLC4GLS2_LC4G3D1N_MASK                   equ 0001h
CLC4GLS2_LC4G3D1T_POSN                   equ 0001h
CLC4GLS2_LC4G3D1T_POSITION               equ 0001h
CLC4GLS2_LC4G3D1T_SIZE                   equ 0001h
CLC4GLS2_LC4G3D1T_LENGTH                 equ 0001h
CLC4GLS2_LC4G3D1T_MASK                   equ 0002h
CLC4GLS2_LC4G3D2N_POSN                   equ 0002h
CLC4GLS2_LC4G3D2N_POSITION               equ 0002h
CLC4GLS2_LC4G3D2N_SIZE                   equ 0001h
CLC4GLS2_LC4G3D2N_LENGTH                 equ 0001h
CLC4GLS2_LC4G3D2N_MASK                   equ 0004h
CLC4GLS2_LC4G3D2T_POSN                   equ 0003h
CLC4GLS2_LC4G3D2T_POSITION               equ 0003h
CLC4GLS2_LC4G3D2T_SIZE                   equ 0001h
CLC4GLS2_LC4G3D2T_LENGTH                 equ 0001h
CLC4GLS2_LC4G3D2T_MASK                   equ 0008h
CLC4GLS2_LC4G3D3N_POSN                   equ 0004h
CLC4GLS2_LC4G3D3N_POSITION               equ 0004h
CLC4GLS2_LC4G3D3N_SIZE                   equ 0001h
CLC4GLS2_LC4G3D3N_LENGTH                 equ 0001h
CLC4GLS2_LC4G3D3N_MASK                   equ 0010h
CLC4GLS2_LC4G3D3T_POSN                   equ 0005h
CLC4GLS2_LC4G3D3T_POSITION               equ 0005h
CLC4GLS2_LC4G3D3T_SIZE                   equ 0001h
CLC4GLS2_LC4G3D3T_LENGTH                 equ 0001h
CLC4GLS2_LC4G3D3T_MASK                   equ 0020h
CLC4GLS2_LC4G3D4N_POSN                   equ 0006h
CLC4GLS2_LC4G3D4N_POSITION               equ 0006h
CLC4GLS2_LC4G3D4N_SIZE                   equ 0001h
CLC4GLS2_LC4G3D4N_LENGTH                 equ 0001h
CLC4GLS2_LC4G3D4N_MASK                   equ 0040h
CLC4GLS2_LC4G3D4T_POSN                   equ 0007h
CLC4GLS2_LC4G3D4T_POSITION               equ 0007h
CLC4GLS2_LC4G3D4T_SIZE                   equ 0001h
CLC4GLS2_LC4G3D4T_LENGTH                 equ 0001h
CLC4GLS2_LC4G3D4T_MASK                   equ 0080h
CLC4GLS2_D1N_POSN                        equ 0000h
CLC4GLS2_D1N_POSITION                    equ 0000h
CLC4GLS2_D1N_SIZE                        equ 0001h
CLC4GLS2_D1N_LENGTH                      equ 0001h
CLC4GLS2_D1N_MASK                        equ 0001h
CLC4GLS2_D1T_POSN                        equ 0001h
CLC4GLS2_D1T_POSITION                    equ 0001h
CLC4GLS2_D1T_SIZE                        equ 0001h
CLC4GLS2_D1T_LENGTH                      equ 0001h
CLC4GLS2_D1T_MASK                        equ 0002h
CLC4GLS2_D2N_POSN                        equ 0002h
CLC4GLS2_D2N_POSITION                    equ 0002h
CLC4GLS2_D2N_SIZE                        equ 0001h
CLC4GLS2_D2N_LENGTH                      equ 0001h
CLC4GLS2_D2N_MASK                        equ 0004h
CLC4GLS2_D2T_POSN                        equ 0003h
CLC4GLS2_D2T_POSITION                    equ 0003h
CLC4GLS2_D2T_SIZE                        equ 0001h
CLC4GLS2_D2T_LENGTH                      equ 0001h
CLC4GLS2_D2T_MASK                        equ 0008h
CLC4GLS2_D3N_POSN                        equ 0004h
CLC4GLS2_D3N_POSITION                    equ 0004h
CLC4GLS2_D3N_SIZE                        equ 0001h
CLC4GLS2_D3N_LENGTH                      equ 0001h
CLC4GLS2_D3N_MASK                        equ 0010h
CLC4GLS2_D3T_POSN                        equ 0005h
CLC4GLS2_D3T_POSITION                    equ 0005h
CLC4GLS2_D3T_SIZE                        equ 0001h
CLC4GLS2_D3T_LENGTH                      equ 0001h
CLC4GLS2_D3T_MASK                        equ 0020h
CLC4GLS2_D4N_POSN                        equ 0006h
CLC4GLS2_D4N_POSITION                    equ 0006h
CLC4GLS2_D4N_SIZE                        equ 0001h
CLC4GLS2_D4N_LENGTH                      equ 0001h
CLC4GLS2_D4N_MASK                        equ 0040h
CLC4GLS2_D4T_POSN                        equ 0007h
CLC4GLS2_D4T_POSITION                    equ 0007h
CLC4GLS2_D4T_SIZE                        equ 0001h
CLC4GLS2_D4T_LENGTH                      equ 0001h
CLC4GLS2_D4T_MASK                        equ 0080h

// Register: CLC4GLS3
#define CLC4GLS3 CLC4GLS3
CLC4GLS3                                 equ 0F37h
// bitfield definitions
CLC4GLS3_LC4G4D1N_POSN                   equ 0000h
CLC4GLS3_LC4G4D1N_POSITION               equ 0000h
CLC4GLS3_LC4G4D1N_SIZE                   equ 0001h
CLC4GLS3_LC4G4D1N_LENGTH                 equ 0001h
CLC4GLS3_LC4G4D1N_MASK                   equ 0001h
CLC4GLS3_LC4G4D1T_POSN                   equ 0001h
CLC4GLS3_LC4G4D1T_POSITION               equ 0001h
CLC4GLS3_LC4G4D1T_SIZE                   equ 0001h
CLC4GLS3_LC4G4D1T_LENGTH                 equ 0001h
CLC4GLS3_LC4G4D1T_MASK                   equ 0002h
CLC4GLS3_LC4G4D2N_POSN                   equ 0002h
CLC4GLS3_LC4G4D2N_POSITION               equ 0002h
CLC4GLS3_LC4G4D2N_SIZE                   equ 0001h
CLC4GLS3_LC4G4D2N_LENGTH                 equ 0001h
CLC4GLS3_LC4G4D2N_MASK                   equ 0004h
CLC4GLS3_LC4G4D2T_POSN                   equ 0003h
CLC4GLS3_LC4G4D2T_POSITION               equ 0003h
CLC4GLS3_LC4G4D2T_SIZE                   equ 0001h
CLC4GLS3_LC4G4D2T_LENGTH                 equ 0001h
CLC4GLS3_LC4G4D2T_MASK                   equ 0008h
CLC4GLS3_LC4G4D3N_POSN                   equ 0004h
CLC4GLS3_LC4G4D3N_POSITION               equ 0004h
CLC4GLS3_LC4G4D3N_SIZE                   equ 0001h
CLC4GLS3_LC4G4D3N_LENGTH                 equ 0001h
CLC4GLS3_LC4G4D3N_MASK                   equ 0010h
CLC4GLS3_LC4G4D3T_POSN                   equ 0005h
CLC4GLS3_LC4G4D3T_POSITION               equ 0005h
CLC4GLS3_LC4G4D3T_SIZE                   equ 0001h
CLC4GLS3_LC4G4D3T_LENGTH                 equ 0001h
CLC4GLS3_LC4G4D3T_MASK                   equ 0020h
CLC4GLS3_LC4G4D4N_POSN                   equ 0006h
CLC4GLS3_LC4G4D4N_POSITION               equ 0006h
CLC4GLS3_LC4G4D4N_SIZE                   equ 0001h
CLC4GLS3_LC4G4D4N_LENGTH                 equ 0001h
CLC4GLS3_LC4G4D4N_MASK                   equ 0040h
CLC4GLS3_LC4G4D4T_POSN                   equ 0007h
CLC4GLS3_LC4G4D4T_POSITION               equ 0007h
CLC4GLS3_LC4G4D4T_SIZE                   equ 0001h
CLC4GLS3_LC4G4D4T_LENGTH                 equ 0001h
CLC4GLS3_LC4G4D4T_MASK                   equ 0080h
CLC4GLS3_G4D1N_POSN                      equ 0000h
CLC4GLS3_G4D1N_POSITION                  equ 0000h
CLC4GLS3_G4D1N_SIZE                      equ 0001h
CLC4GLS3_G4D1N_LENGTH                    equ 0001h
CLC4GLS3_G4D1N_MASK                      equ 0001h
CLC4GLS3_G4D1T_POSN                      equ 0001h
CLC4GLS3_G4D1T_POSITION                  equ 0001h
CLC4GLS3_G4D1T_SIZE                      equ 0001h
CLC4GLS3_G4D1T_LENGTH                    equ 0001h
CLC4GLS3_G4D1T_MASK                      equ 0002h
CLC4GLS3_G4D2N_POSN                      equ 0002h
CLC4GLS3_G4D2N_POSITION                  equ 0002h
CLC4GLS3_G4D2N_SIZE                      equ 0001h
CLC4GLS3_G4D2N_LENGTH                    equ 0001h
CLC4GLS3_G4D2N_MASK                      equ 0004h
CLC4GLS3_G4D2T_POSN                      equ 0003h
CLC4GLS3_G4D2T_POSITION                  equ 0003h
CLC4GLS3_G4D2T_SIZE                      equ 0001h
CLC4GLS3_G4D2T_LENGTH                    equ 0001h
CLC4GLS3_G4D2T_MASK                      equ 0008h
CLC4GLS3_G4D3N_POSN                      equ 0004h
CLC4GLS3_G4D3N_POSITION                  equ 0004h
CLC4GLS3_G4D3N_SIZE                      equ 0001h
CLC4GLS3_G4D3N_LENGTH                    equ 0001h
CLC4GLS3_G4D3N_MASK                      equ 0010h
CLC4GLS3_G4D3T_POSN                      equ 0005h
CLC4GLS3_G4D3T_POSITION                  equ 0005h
CLC4GLS3_G4D3T_SIZE                      equ 0001h
CLC4GLS3_G4D3T_LENGTH                    equ 0001h
CLC4GLS3_G4D3T_MASK                      equ 0020h
CLC4GLS3_G4D4N_POSN                      equ 0006h
CLC4GLS3_G4D4N_POSITION                  equ 0006h
CLC4GLS3_G4D4N_SIZE                      equ 0001h
CLC4GLS3_G4D4N_LENGTH                    equ 0001h
CLC4GLS3_G4D4N_MASK                      equ 0040h
CLC4GLS3_G4D4T_POSN                      equ 0007h
CLC4GLS3_G4D4T_POSITION                  equ 0007h
CLC4GLS3_G4D4T_SIZE                      equ 0001h
CLC4GLS3_G4D4T_LENGTH                    equ 0001h
CLC4GLS3_G4D4T_MASK                      equ 0080h

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

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ABDEN                            BANKMASK(BAUD1CON), 0
#define ABDOVF                           BANKMASK(BAUD1CON), 7
#define ADACT0                           BANKMASK(ADACT), 0
#define ADACT1                           BANKMASK(ADACT), 1
#define ADACT2                           BANKMASK(ADACT), 2
#define ADACT3                           BANKMASK(ADACT), 3
#define ADACT4                           BANKMASK(ADACT), 4
#define ADCMD                            BANKMASK(PMD2), 5
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADDEN                            BANKMASK(RC1STA), 3
#define ADFM                             BANKMASK(ADCON1), 7
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADGO                             BANKMASK(ADCON0), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADNREF                           BANKMASK(ADCON1), 2
#define ADOEN                            BANKMASK(OSCEN), 2
#define ADON                             BANKMASK(ADCON0), 0
#define ADOR                             BANKMASK(OSCSTAT1), 2
#define ADPREF0                          BANKMASK(ADCON1), 0
#define ADPREF1                          BANKMASK(ADCON1), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
#define ANSC0                            BANKMASK(ANSELC), 0
#define ANSC1                            BANKMASK(ANSELC), 1
#define ANSC2                            BANKMASK(ANSELC), 2
#define ANSC3                            BANKMASK(ANSELC), 3
#define ANSC4                            BANKMASK(ANSELC), 4
#define ANSC5                            BANKMASK(ANSELC), 5
#define BCL1IE                           BANKMASK(PIE1), 2
#define BCL1IF                           BANKMASK(PIR1), 2
#define BCL2IE                           BANKMASK(PIE2), 2
#define BCL2IF                           BANKMASK(PIR2), 2
#define BORRDY                           BANKMASK(BORCON), 0
#define BRG16                            BANKMASK(BAUD1CON), 3
#define BRGH                             BANKMASK(TX1STA), 2
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define C1HYS                            BANKMASK(CM1CON0), 1
#define C1IE                             BANKMASK(PIE2), 5
#define C1IF                             BANKMASK(PIR2), 5
#define C1INTN                           BANKMASK(CM1CON1), 6
#define C1INTP                           BANKMASK(CM1CON1), 7
#define C1NCH0                           BANKMASK(CM1CON1), 0
#define C1NCH1                           BANKMASK(CM1CON1), 1
#define C1NCH2                           BANKMASK(CM1CON1), 2
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1PCH0                           BANKMASK(CM1CON1), 3
#define C1PCH1                           BANKMASK(CM1CON1), 4
#define C1PCH2                           BANKMASK(CM1CON1), 5
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1SP                             BANKMASK(CM1CON0), 2
#define C1SYNC                           BANKMASK(CM1CON0), 0
#define C1TSEL0                          BANKMASK(CCPTMRS), 0
#define C1TSEL1                          BANKMASK(CCPTMRS), 1
#define C2HYS                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE2), 6
#define C2IF                             BANKMASK(PIR2), 6
#define C2INTN                           BANKMASK(CM2CON1), 6
#define C2INTP                           BANKMASK(CM2CON1), 7
#define C2NCH0                           BANKMASK(CM2CON1), 0
#define C2NCH1                           BANKMASK(CM2CON1), 1
#define C2NCH2                           BANKMASK(CM2CON1), 2
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2PCH0                           BANKMASK(CM2CON1), 3
#define C2PCH1                           BANKMASK(CM2CON1), 4
#define C2PCH2                           BANKMASK(CM2CON1), 5
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2SP                             BANKMASK(CM2CON0), 2
#define C2SYNC                           BANKMASK(CM2CON0), 0
#define C2TSEL0                          BANKMASK(CCPTMRS), 2
#define C2TSEL1                          BANKMASK(CCPTMRS), 3
#define C3TSEL0                          BANKMASK(CCPTMRS), 4
#define C3TSEL1                          BANKMASK(CCPTMRS), 5
#define C4TSEL0                          BANKMASK(CCPTMRS), 6
#define C4TSEL1                          BANKMASK(CCPTMRS), 7
#define CARRY                            BANKMASK(STATUS), 0
#define CCAP0                            BANKMASK(CCP3CAP), 0
#define CCAP1                            BANKMASK(CCP3CAP), 1
#define CCAP2                            BANKMASK(CCP3CAP), 2
#define CCAP3                            BANKMASK(CCP3CAP), 3
#define CCDEN                            BANKMASK(CCDCON), 7
#define CCDS0                            BANKMASK(CCDCON), 0
#define CCDS1                            BANKMASK(CCDCON), 1
#define CCP1CTS0                         BANKMASK(CCP1CAP), 0
#define CCP1CTS1                         BANKMASK(CCP1CAP), 1
#define CCP1CTS2                         BANKMASK(CCP1CAP), 2
#define CCP1CTS3                         BANKMASK(CCP1CAP), 3
#define CCP1EN                           BANKMASK(CCP1CON), 7
#define CCP1FMT                          BANKMASK(CCP1CON), 4
#define CCP1IE                           BANKMASK(PIE4), 0
#define CCP1IF                           BANKMASK(PIR4), 0
#define CCP1MD                           BANKMASK(PMD3), 0
#define CCP1MODE0                        BANKMASK(CCP1CON), 0
#define CCP1MODE1                        BANKMASK(CCP1CON), 1
#define CCP1MODE2                        BANKMASK(CCP1CON), 2
#define CCP1MODE3                        BANKMASK(CCP1CON), 3
#define CCP1OUT                          BANKMASK(CCP1CON), 5
#define CCP1PPS0                         BANKMASK(CCP1PPS), 0
#define CCP1PPS1                         BANKMASK(CCP1PPS), 1
#define CCP1PPS2                         BANKMASK(CCP1PPS), 2
#define CCP1PPS3                         BANKMASK(CCP1PPS), 3
#define CCP1PPS4                         BANKMASK(CCP1PPS), 4
#define CCP2CTS0                         BANKMASK(CCP2CAP), 0
#define CCP2CTS1                         BANKMASK(CCP2CAP), 1
#define CCP2CTS2                         BANKMASK(CCP2CAP), 2
#define CCP2CTS3                         BANKMASK(CCP2CAP), 3
#define CCP2EN                           BANKMASK(CCP2CON), 7
#define CCP2FMT                          BANKMASK(CCP2CON), 4
#define CCP2IE                           BANKMASK(PIE4), 1
#define CCP2IF                           BANKMASK(PIR4), 1
#define CCP2MD                           BANKMASK(PMD3), 1
#define CCP2MODE0                        BANKMASK(CCP2CON), 0
#define CCP2MODE1                        BANKMASK(CCP2CON), 1
#define CCP2MODE2                        BANKMASK(CCP2CON), 2
#define CCP2MODE3                        BANKMASK(CCP2CON), 3
#define CCP2OUT                          BANKMASK(CCP2CON), 5
#define CCP2PPS0                         BANKMASK(CCP2PPS), 0
#define CCP2PPS1                         BANKMASK(CCP2PPS), 1
#define CCP2PPS2                         BANKMASK(CCP2PPS), 2
#define CCP2PPS3                         BANKMASK(CCP2PPS), 3
#define CCP2PPS4                         BANKMASK(CCP2PPS), 4
#define CCP3EN                           BANKMASK(CCP3CON), 7
#define CCP3FMT                          BANKMASK(CCP3CON), 4
#define CCP3IE                           BANKMASK(PIE4), 2
#define CCP3IF                           BANKMASK(PIR4), 2
#define CCP3MD                           BANKMASK(PMD3), 2
#define CCP3MODE0                        BANKMASK(CCP3CON), 0
#define CCP3MODE1                        BANKMASK(CCP3CON), 1
#define CCP3MODE2                        BANKMASK(CCP3CON), 2
#define CCP3MODE3                        BANKMASK(CCP3CON), 3
#define CCP3OUT                          BANKMASK(CCP3CON), 5
#define CCP3PPS0                         BANKMASK(CCP3PPS), 0
#define CCP3PPS1                         BANKMASK(CCP3PPS), 1
#define CCP3PPS2                         BANKMASK(CCP3PPS), 2
#define CCP3PPS3                         BANKMASK(CCP3PPS), 3
#define CCP3PPS4                         BANKMASK(CCP3PPS), 4
#define CCP4CTS0                         BANKMASK(CCP4CAP), 0
#define CCP4CTS1                         BANKMASK(CCP4CAP), 1
#define CCP4CTS2                         BANKMASK(CCP4CAP), 2
#define CCP4CTS3                         BANKMASK(CCP4CAP), 3
#define CCP4EN                           BANKMASK(CCP4CON), 7
#define CCP4FMT                          BANKMASK(CCP4CON), 4
#define CCP4IE                           BANKMASK(PIE4), 3
#define CCP4IF                           BANKMASK(PIR4), 3
#define CCP4MD                           BANKMASK(PMD3), 3
#define CCP4MODE0                        BANKMASK(CCP4CON), 0
#define CCP4MODE1                        BANKMASK(CCP4CON), 1
#define CCP4MODE2                        BANKMASK(CCP4CON), 2
#define CCP4MODE3                        BANKMASK(CCP4CON), 3
#define CCP4OUT                          BANKMASK(CCP4CON), 5
#define CCP4PPS0                         BANKMASK(CCP4PPS), 0
#define CCP4PPS1                         BANKMASK(CCP4PPS), 1
#define CCP4PPS2                         BANKMASK(CCP4PPS), 2
#define CCP4PPS3                         BANKMASK(CCP4PPS), 3
#define CCP4PPS4                         BANKMASK(CCP4PPS), 4
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CDIV0                            BANKMASK(OSCCON2), 0
#define CDIV1                            BANKMASK(OSCCON2), 1
#define CDIV2                            BANKMASK(OSCCON2), 2
#define CDIV3                            BANKMASK(OSCCON2), 3
#define CFGS                             BANKMASK(NVMCON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CHS5                             BANKMASK(ADCON0), 7
#define CLC1IE                           BANKMASK(PIE3), 0
#define CLC1IF                           BANKMASK(PIR3), 0
#define CLC1MD                           BANKMASK(PMD5), 1
#define CLC2IE                           BANKMASK(PIE3), 1
#define CLC2IF                           BANKMASK(PIR3), 1
#define CLC2MD                           BANKMASK(PMD5), 2
#define CLC3IE                           BANKMASK(PIE3), 2
#define CLC3IF                           BANKMASK(PIR3), 2
#define CLC3MD                           BANKMASK(PMD5), 3
#define CLC4IE                           BANKMASK(PIE3), 3
#define CLC4IF                           BANKMASK(PIR3), 3
#define CLC4MD                           BANKMASK(PMD5), 4
#define CLCIN0PPS0                       BANKMASK(CLCIN0PPS), 0
#define CLCIN0PPS1                       BANKMASK(CLCIN0PPS), 1
#define CLCIN0PPS2                       BANKMASK(CLCIN0PPS), 2
#define CLCIN0PPS3                       BANKMASK(CLCIN0PPS), 3
#define CLCIN0PPS4                       BANKMASK(CLCIN0PPS), 4
#define CLCIN1PPS0                       BANKMASK(CLCIN1PPS), 0
#define CLCIN1PPS1                       BANKMASK(CLCIN1PPS), 1
#define CLCIN1PPS2                       BANKMASK(CLCIN1PPS), 2
#define CLCIN1PPS3                       BANKMASK(CLCIN1PPS), 3
#define CLCIN1PPS4                       BANKMASK(CLCIN1PPS), 4
#define CLCIN2PPS0                       BANKMASK(CLCIN2PPS), 0
#define CLCIN2PPS1                       BANKMASK(CLCIN2PPS), 1
#define CLCIN2PPS2                       BANKMASK(CLCIN2PPS), 2
#define CLCIN2PPS3                       BANKMASK(CLCIN2PPS), 3
#define CLCIN2PPS4                       BANKMASK(CLCIN2PPS), 4
#define CLCIN3PPS0                       BANKMASK(CLCIN3PPS), 0
#define CLCIN3PPS1                       BANKMASK(CLCIN3PPS), 1
#define CLCIN3PPS2                       BANKMASK(CLCIN3PPS), 2
#define CLCIN3PPS3                       BANKMASK(CLCIN3PPS), 3
#define CLCIN3PPS4                       BANKMASK(CLCIN3PPS), 4
#define CLKRDC0                          BANKMASK(CLKRCON), 3
#define CLKRDC1                          BANKMASK(CLKRCON), 4
#define CLKRDIV0                         BANKMASK(CLKRCON), 0
#define CLKRDIV1                         BANKMASK(CLKRCON), 1
#define CLKRDIV2                         BANKMASK(CLKRCON), 2
#define CLKREN                           BANKMASK(CLKRCON), 7
#define CLKRMD                           BANKMASK(PMD0), 1
#define CMP1MD                           BANKMASK(PMD2), 1
#define CMP2MD                           BANKMASK(PMD2), 2
#define COSC0                            BANKMASK(OSCCON2), 4
#define COSC1                            BANKMASK(OSCCON2), 5
#define COSC2                            BANKMASK(OSCCON2), 6
#define CREN                             BANKMASK(RC1STA), 4
#define CSRC                             BANKMASK(TX1STA), 7
#define CSWHOLD                          BANKMASK(OSCCON3), 7
#define CSWIE                            BANKMASK(PIE3), 6
#define CSWIF                            BANKMASK(PIR3), 6
#define CWG1CS                           BANKMASK(CWG1CLKCON), 0
#define CWG1DAT0                         BANKMASK(CWG1DAT), 0
#define CWG1DAT1                         BANKMASK(CWG1DAT), 1
#define CWG1DAT2                         BANKMASK(CWG1DAT), 2
#define CWG1DAT3                         BANKMASK(CWG1DAT), 3
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
#define CWG1EN                           BANKMASK(CWG1CON0), 7
#define CWG1IE                           BANKMASK(PIE4), 6
#define CWG1IF                           BANKMASK(PIR4), 6
#define CWG1IN                           BANKMASK(CWG1CON1), 5
#define CWG1LD                           BANKMASK(CWG1CON0), 6
#define CWG1LSAC0                        BANKMASK(CWG1AS0), 2
#define CWG1LSAC1                        BANKMASK(CWG1AS0), 3
#define CWG1LSBD0                        BANKMASK(CWG1AS0), 4
#define CWG1LSBD1                        BANKMASK(CWG1AS0), 5
#define CWG1MD                           BANKMASK(PMD3), 6
#define CWG1MODE0                        BANKMASK(CWG1CON0), 0
#define CWG1MODE1                        BANKMASK(CWG1CON0), 1
#define CWG1MODE2                        BANKMASK(CWG1CON0), 2
#define CWG1OVRA                         BANKMASK(CWG1STR), 4
#define CWG1OVRB                         BANKMASK(CWG1STR), 5
#define CWG1OVRC                         BANKMASK(CWG1STR), 6
#define CWG1OVRD                         BANKMASK(CWG1STR), 7
#define CWG1POLA                         BANKMASK(CWG1CON1), 0
#define CWG1POLB                         BANKMASK(CWG1CON1), 1
#define CWG1POLC                         BANKMASK(CWG1CON1), 2
#define CWG1POLD                         BANKMASK(CWG1CON1), 3
#define CWG1PPS0                         BANKMASK(CWG1PPS), 0
#define CWG1PPS1                         BANKMASK(CWG1PPS), 1
#define CWG1PPS2                         BANKMASK(CWG1PPS), 2
#define CWG1PPS3                         BANKMASK(CWG1PPS), 3
#define CWG1PPS4                         BANKMASK(CWG1PPS), 4
#define CWG1REN                          BANKMASK(CWG1AS0), 6
#define CWG1SHUTDOWN                     BANKMASK(CWG1AS0), 7
#define CWG1STRA                         BANKMASK(CWG1STR), 0
#define CWG1STRB                         BANKMASK(CWG1STR), 1
#define CWG1STRC                         BANKMASK(CWG1STR), 2
#define CWG1STRD                         BANKMASK(CWG1STR), 3
#define CWG2CS                           BANKMASK(CWG2CLKCON), 0
#define CWG2DAT0                         BANKMASK(CWG2DAT), 0
#define CWG2DAT1                         BANKMASK(CWG2DAT), 1
#define CWG2DAT2                         BANKMASK(CWG2DAT), 2
#define CWG2DAT3                         BANKMASK(CWG2DAT), 3
#define CWG2DBF0                         BANKMASK(CWG2DBF), 0
#define CWG2DBF1                         BANKMASK(CWG2DBF), 1
#define CWG2DBF2                         BANKMASK(CWG2DBF), 2
#define CWG2DBF3                         BANKMASK(CWG2DBF), 3
#define CWG2DBF4                         BANKMASK(CWG2DBF), 4
#define CWG2DBF5                         BANKMASK(CWG2DBF), 5
#define CWG2DBR0                         BANKMASK(CWG2DBR), 0
#define CWG2DBR1                         BANKMASK(CWG2DBR), 1
#define CWG2DBR2                         BANKMASK(CWG2DBR), 2
#define CWG2DBR3                         BANKMASK(CWG2DBR), 3
#define CWG2DBR4                         BANKMASK(CWG2DBR), 4
#define CWG2DBR5                         BANKMASK(CWG2DBR), 5
#define CWG2EN                           BANKMASK(CWG2CON0), 7
#define CWG2IE                           BANKMASK(PIE4), 7
#define CWG2IF                           BANKMASK(PIR4), 7
#define CWG2IN                           BANKMASK(CWG2CON1), 5
#define CWG2LD                           BANKMASK(CWG2CON0), 6
#define CWG2LSAC0                        BANKMASK(CWG2AS0), 2
#define CWG2LSAC1                        BANKMASK(CWG2AS0), 3
#define CWG2LSBD0                        BANKMASK(CWG2AS0), 4
#define CWG2LSBD1                        BANKMASK(CWG2AS0), 5
#define CWG2MD                           BANKMASK(PMD3), 7
#define CWG2MODE0                        BANKMASK(CWG2CON0), 0
#define CWG2MODE1                        BANKMASK(CWG2CON0), 1
#define CWG2MODE2                        BANKMASK(CWG2CON0), 2
#define CWG2OVRA                         BANKMASK(CWG2STR), 4
#define CWG2OVRB                         BANKMASK(CWG2STR), 5
#define CWG2OVRC                         BANKMASK(CWG2STR), 6
#define CWG2OVRD                         BANKMASK(CWG2STR), 7
#define CWG2POLA                         BANKMASK(CWG2CON1), 0
#define CWG2POLB                         BANKMASK(CWG2CON1), 1
#define CWG2POLC                         BANKMASK(CWG2CON1), 2
#define CWG2POLD                         BANKMASK(CWG2CON1), 3
#define CWG2PPS0                         BANKMASK(CWG2PPS), 0
#define CWG2PPS1                         BANKMASK(CWG2PPS), 1
#define CWG2PPS2                         BANKMASK(CWG2PPS), 2
#define CWG2PPS3                         BANKMASK(CWG2PPS), 3
#define CWG2PPS4                         BANKMASK(CWG2PPS), 4
#define CWG2REN                          BANKMASK(CWG2AS0), 6
#define CWG2SHUTDOWN                     BANKMASK(CWG2AS0), 7
#define CWG2STRA                         BANKMASK(CWG2STR), 0
#define CWG2STRB                         BANKMASK(CWG2STR), 1
#define CWG2STRC                         BANKMASK(CWG2STR), 2
#define CWG2STRD                         BANKMASK(CWG2STR), 3
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DAC1EN                           BANKMASK(DACCON0), 7
#define DAC1NSS                          BANKMASK(DACCON0), 0
#define DAC1OE                           BANKMASK(DACCON0), 5
#define DAC1PSS0                         BANKMASK(DACCON0), 2
#define DAC1PSS1                         BANKMASK(DACCON0), 3
#define DAC1R0                           BANKMASK(DACCON1), 0
#define DAC1R1                           BANKMASK(DACCON1), 1
#define DAC1R2                           BANKMASK(DACCON1), 2
#define DAC1R3                           BANKMASK(DACCON1), 3
#define DAC1R4                           BANKMASK(DACCON1), 4
#define DACMD                            BANKMASK(PMD2), 6
#define DC                               BANKMASK(STATUS), 1
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define DOE                              BANKMASK(CPUDOZE), 4
#define DOZE0                            BANKMASK(CPUDOZE), 0
#define DOZE1                            BANKMASK(CPUDOZE), 1
#define DOZE2                            BANKMASK(CPUDOZE), 2
#define DOZEN                            BANKMASK(CPUDOZE), 6
#define DSMMD                            BANKMASK(PMD5), 0
#define EXTOEN                           BANKMASK(OSCEN), 7
#define EXTOR                            BANKMASK(OSCSTAT1), 7
#define FERR                             BANKMASK(RC1STA), 2
#define FREE                             BANKMASK(NVMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRMD                            BANKMASK(PMD0), 6
#define FVRRDY                           BANKMASK(FVRCON), 6
#define G1EN                             BANKMASK(CWG1CON0), 7
#define G2EN                             BANKMASK(CWG2CON0), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define HFFRQ0                           BANKMASK(OSCFRQ), 0
#define HFFRQ1                           BANKMASK(OSCFRQ), 1
#define HFFRQ2                           BANKMASK(OSCFRQ), 2
#define HFFRQ3                           BANKMASK(OSCFRQ), 3
#define HFOEN                            BANKMASK(OSCEN), 6
#define HFOR                             BANKMASK(OSCSTAT1), 6
#define HFTUN0                           BANKMASK(OSCTUNE), 0
#define HFTUN1                           BANKMASK(OSCTUNE), 1
#define HFTUN2                           BANKMASK(OSCTUNE), 2
#define HFTUN3                           BANKMASK(OSCTUNE), 3
#define HFTUN4                           BANKMASK(OSCTUNE), 4
#define HFTUN5                           BANKMASK(OSCTUNE), 5
#define IDLEN                            BANKMASK(CPUDOZE), 7
#define INLVLA0                          BANKMASK(INLVLA), 0
#define INLVLA1                          BANKMASK(INLVLA), 1
#define INLVLA2                          BANKMASK(INLVLA), 2
#define INLVLA3                          BANKMASK(INLVLA), 3
#define INLVLA4                          BANKMASK(INLVLA), 4
#define INLVLA5                          BANKMASK(INLVLA), 5
#define INLVLC0                          BANKMASK(INLVLC), 0
#define INLVLC1                          BANKMASK(INLVLC), 1
#define INLVLC2                          BANKMASK(INLVLC), 2
#define INLVLC3                          BANKMASK(INLVLC), 3
#define INLVLC4                          BANKMASK(INLVLC), 4
#define INLVLC5                          BANKMASK(INLVLC), 5
#define INTE                             BANKMASK(PIE0), 0
#define INTEDG                           BANKMASK(INTCON), 0
#define INTF                             BANKMASK(PIR0), 0
#define INTPPS0                          BANKMASK(INTPPS), 0
#define INTPPS1                          BANKMASK(INTPPS), 1
#define INTPPS2                          BANKMASK(INTPPS), 2
#define INTPPS3                          BANKMASK(INTPPS), 3
#define INTPPS4                          BANKMASK(INTPPS), 4
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
#define IOCCF0                           BANKMASK(IOCCF), 0
#define IOCCF1                           BANKMASK(IOCCF), 1
#define IOCCF2                           BANKMASK(IOCCF), 2
#define IOCCF3                           BANKMASK(IOCCF), 3
#define IOCCF4                           BANKMASK(IOCCF), 4
#define IOCCF5                           BANKMASK(IOCCF), 5
#define IOCCN0                           BANKMASK(IOCCN), 0
#define IOCCN1                           BANKMASK(IOCCN), 1
#define IOCCN2                           BANKMASK(IOCCN), 2
#define IOCCN3                           BANKMASK(IOCCN), 3
#define IOCCN4                           BANKMASK(IOCCN), 4
#define IOCCN5                           BANKMASK(IOCCN), 5
#define IOCCP0                           BANKMASK(IOCCP), 0
#define IOCCP1                           BANKMASK(IOCCP), 1
#define IOCCP2                           BANKMASK(IOCCP), 2
#define IOCCP3                           BANKMASK(IOCCP), 3
#define IOCCP4                           BANKMASK(IOCCP), 4
#define IOCCP5                           BANKMASK(IOCCP), 5
#define IOCIE                            BANKMASK(PIE0), 4
#define IOCIF                            BANKMASK(PIR0), 4
#define IOCMD                            BANKMASK(PMD0), 0
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
#define LATC0                            BANKMASK(LATC), 0
#define LATC1                            BANKMASK(LATC), 1
#define LATC2                            BANKMASK(LATC), 2
#define LATC3                            BANKMASK(LATC), 3
#define LATC4                            BANKMASK(LATC), 4
#define LATC5                            BANKMASK(LATC), 5
#define LC1D1S0                          BANKMASK(CLC1SEL0), 0
#define LC1D1S1                          BANKMASK(CLC1SEL0), 1
#define LC1D1S2                          BANKMASK(CLC1SEL0), 2
#define LC1D1S3                          BANKMASK(CLC1SEL0), 3
#define LC1D1S4                          BANKMASK(CLC1SEL0), 4
#define LC1D1S5                          BANKMASK(CLC1SEL0), 5
#define LC1D2S0                          BANKMASK(CLC1SEL1), 0
#define LC1D2S1                          BANKMASK(CLC1SEL1), 1
#define LC1D2S2                          BANKMASK(CLC1SEL1), 2
#define LC1D2S3                          BANKMASK(CLC1SEL1), 3
#define LC1D2S4                          BANKMASK(CLC1SEL1), 4
#define LC1D2S5                          BANKMASK(CLC1SEL1), 5
#define LC1D3S0                          BANKMASK(CLC1SEL2), 0
#define LC1D3S1                          BANKMASK(CLC1SEL2), 1
#define LC1D3S2                          BANKMASK(CLC1SEL2), 2
#define LC1D3S3                          BANKMASK(CLC1SEL2), 3
#define LC1D3S4                          BANKMASK(CLC1SEL2), 4
#define LC1D3S5                          BANKMASK(CLC1SEL2), 5
#define LC1D4S0                          BANKMASK(CLC1SEL3), 0
#define LC1D4S1                          BANKMASK(CLC1SEL3), 1
#define LC1D4S2                          BANKMASK(CLC1SEL3), 2
#define LC1D4S3                          BANKMASK(CLC1SEL3), 3
#define LC1D4S4                          BANKMASK(CLC1SEL3), 4
#define LC1D4S5                          BANKMASK(CLC1SEL3), 5
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
#define LC1OUT                           BANKMASK(CLC1CON), 5
#define LC1POL                           BANKMASK(CLC1POL), 7
#define LC2D1S0                          BANKMASK(CLC2SEL0), 0
#define LC2D1S1                          BANKMASK(CLC2SEL0), 1
#define LC2D1S2                          BANKMASK(CLC2SEL0), 2
#define LC2D1S3                          BANKMASK(CLC2SEL0), 3
#define LC2D1S4                          BANKMASK(CLC2SEL0), 4
#define LC2D1S5                          BANKMASK(CLC2SEL0), 5
#define LC2D2S0                          BANKMASK(CLC2SEL1), 0
#define LC2D2S1                          BANKMASK(CLC2SEL1), 1
#define LC2D2S2                          BANKMASK(CLC2SEL1), 2
#define LC2D2S3                          BANKMASK(CLC2SEL1), 3
#define LC2D2S4                          BANKMASK(CLC2SEL1), 4
#define LC2D2S5                          BANKMASK(CLC2SEL1), 5
#define LC2D3S0                          BANKMASK(CLC2SEL2), 0
#define LC2D3S1                          BANKMASK(CLC2SEL2), 1
#define LC2D3S2                          BANKMASK(CLC2SEL2), 2
#define LC2D3S3                          BANKMASK(CLC2SEL2), 3
#define LC2D3S4                          BANKMASK(CLC2SEL2), 4
#define LC2D3S5                          BANKMASK(CLC2SEL2), 5
#define LC2D4S0                          BANKMASK(CLC2SEL3), 0
#define LC2D4S1                          BANKMASK(CLC2SEL3), 1
#define LC2D4S2                          BANKMASK(CLC2SEL3), 2
#define LC2D4S3                          BANKMASK(CLC2SEL3), 3
#define LC2D4S4                          BANKMASK(CLC2SEL3), 4
#define LC2D4S5                          BANKMASK(CLC2SEL3), 5
#define LC2EN                            BANKMASK(CLC2CON), 7
#define LC2G1D1N                         BANKMASK(CLC2GLS0), 0
#define LC2G1D1T                         BANKMASK(CLC2GLS0), 1
#define LC2G1D2N                         BANKMASK(CLC2GLS0), 2
#define LC2G1D2T                         BANKMASK(CLC2GLS0), 3
#define LC2G1D3N                         BANKMASK(CLC2GLS0), 4
#define LC2G1D3T                         BANKMASK(CLC2GLS0), 5
#define LC2G1D4N                         BANKMASK(CLC2GLS0), 6
#define LC2G1D4T                         BANKMASK(CLC2GLS0), 7
#define LC2G1POL                         BANKMASK(CLC2POL), 0
#define LC2G2D1N                         BANKMASK(CLC2GLS1), 0
#define LC2G2D1T                         BANKMASK(CLC2GLS1), 1
#define LC2G2D2N                         BANKMASK(CLC2GLS1), 2
#define LC2G2D2T                         BANKMASK(CLC2GLS1), 3
#define LC2G2D3N                         BANKMASK(CLC2GLS1), 4
#define LC2G2D3T                         BANKMASK(CLC2GLS1), 5
#define LC2G2D4N                         BANKMASK(CLC2GLS1), 6
#define LC2G2D4T                         BANKMASK(CLC2GLS1), 7
#define LC2G2POL                         BANKMASK(CLC2POL), 1
#define LC2G3D1N                         BANKMASK(CLC2GLS2), 0
#define LC2G3D1T                         BANKMASK(CLC2GLS2), 1
#define LC2G3D2N                         BANKMASK(CLC2GLS2), 2
#define LC2G3D2T                         BANKMASK(CLC2GLS2), 3
#define LC2G3D3N                         BANKMASK(CLC2GLS2), 4
#define LC2G3D3T                         BANKMASK(CLC2GLS2), 5
#define LC2G3D4N                         BANKMASK(CLC2GLS2), 6
#define LC2G3D4T                         BANKMASK(CLC2GLS2), 7
#define LC2G3POL                         BANKMASK(CLC2POL), 2
#define LC2G4D1N                         BANKMASK(CLC2GLS3), 0
#define LC2G4D1T                         BANKMASK(CLC2GLS3), 1
#define LC2G4D2N                         BANKMASK(CLC2GLS3), 2
#define LC2G4D2T                         BANKMASK(CLC2GLS3), 3
#define LC2G4D3N                         BANKMASK(CLC2GLS3), 4
#define LC2G4D3T                         BANKMASK(CLC2GLS3), 5
#define LC2G4D4N                         BANKMASK(CLC2GLS3), 6
#define LC2G4D4T                         BANKMASK(CLC2GLS3), 7
#define LC2G4POL                         BANKMASK(CLC2POL), 3
#define LC2INTN                          BANKMASK(CLC2CON), 3
#define LC2INTP                          BANKMASK(CLC2CON), 4
#define LC2MODE0                         BANKMASK(CLC2CON), 0
#define LC2MODE1                         BANKMASK(CLC2CON), 1
#define LC2MODE2                         BANKMASK(CLC2CON), 2
#define LC2OUT                           BANKMASK(CLC2CON), 5
#define LC2POL                           BANKMASK(CLC2POL), 7
#define LC3D1S0                          BANKMASK(CLC3SEL0), 0
#define LC3D1S1                          BANKMASK(CLC3SEL0), 1
#define LC3D1S2                          BANKMASK(CLC3SEL0), 2
#define LC3D1S3                          BANKMASK(CLC3SEL0), 3
#define LC3D1S4                          BANKMASK(CLC3SEL0), 4
#define LC3D1S5                          BANKMASK(CLC3SEL0), 5
#define LC3D2S0                          BANKMASK(CLC3SEL1), 0
#define LC3D2S1                          BANKMASK(CLC3SEL1), 1
#define LC3D2S2                          BANKMASK(CLC3SEL1), 2
#define LC3D2S3                          BANKMASK(CLC3SEL1), 3
#define LC3D2S4                          BANKMASK(CLC3SEL1), 4
#define LC3D2S5                          BANKMASK(CLC3SEL1), 5
#define LC3D3S0                          BANKMASK(CLC3SEL2), 0
#define LC3D3S1                          BANKMASK(CLC3SEL2), 1
#define LC3D3S2                          BANKMASK(CLC3SEL2), 2
#define LC3D3S3                          BANKMASK(CLC3SEL2), 3
#define LC3D3S4                          BANKMASK(CLC3SEL2), 4
#define LC3D3S5                          BANKMASK(CLC3SEL2), 5
#define LC3D4S0                          BANKMASK(CLC3SEL3), 0
#define LC3D4S1                          BANKMASK(CLC3SEL3), 1
#define LC3D4S2                          BANKMASK(CLC3SEL3), 2
#define LC3D4S3                          BANKMASK(CLC3SEL3), 3
#define LC3D4S4                          BANKMASK(CLC3SEL3), 4
#define LC3D4S5                          BANKMASK(CLC3SEL3), 5
#define LC3EN                            BANKMASK(CLC3CON), 7
#define LC3G1D1N                         BANKMASK(CLC3GLS0), 0
#define LC3G1D1T                         BANKMASK(CLC3GLS0), 1
#define LC3G1D2N                         BANKMASK(CLC3GLS0), 2
#define LC3G1D2T                         BANKMASK(CLC3GLS0), 3
#define LC3G1D3N                         BANKMASK(CLC3GLS0), 4
#define LC3G1D3T                         BANKMASK(CLC3GLS0), 5
#define LC3G1D4N                         BANKMASK(CLC3GLS0), 6
#define LC3G1D4T                         BANKMASK(CLC3GLS0), 7
#define LC3G1POL                         BANKMASK(CLC3POL), 0
#define LC3G2D1N                         BANKMASK(CLC3GLS1), 0
#define LC3G2D1T                         BANKMASK(CLC3GLS1), 1
#define LC3G2D2N                         BANKMASK(CLC3GLS1), 2
#define LC3G2D2T                         BANKMASK(CLC3GLS1), 3
#define LC3G2D3N                         BANKMASK(CLC3GLS1), 4
#define LC3G2D3T                         BANKMASK(CLC3GLS1), 5
#define LC3G2D4N                         BANKMASK(CLC3GLS1), 6
#define LC3G2D4T                         BANKMASK(CLC3GLS1), 7
#define LC3G2POL                         BANKMASK(CLC3POL), 1
#define LC3G3D1N                         BANKMASK(CLC3GLS2), 0
#define LC3G3D1T                         BANKMASK(CLC3GLS2), 1
#define LC3G3D2N                         BANKMASK(CLC3GLS2), 2
#define LC3G3D2T                         BANKMASK(CLC3GLS2), 3
#define LC3G3D3N                         BANKMASK(CLC3GLS2), 4
#define LC3G3D3T                         BANKMASK(CLC3GLS2), 5
#define LC3G3D4N                         BANKMASK(CLC3GLS2), 6
#define LC3G3D4T                         BANKMASK(CLC3GLS2), 7
#define LC3G3POL                         BANKMASK(CLC3POL), 2
#define LC3G4D1N                         BANKMASK(CLC3GLS3), 0
#define LC3G4D1T                         BANKMASK(CLC3GLS3), 1
#define LC3G4D2N                         BANKMASK(CLC3GLS3), 2
#define LC3G4D2T                         BANKMASK(CLC3GLS3), 3
#define LC3G4D3N                         BANKMASK(CLC3GLS3), 4
#define LC3G4D3T                         BANKMASK(CLC3GLS3), 5
#define LC3G4D4N                         BANKMASK(CLC3GLS3), 6
#define LC3G4D4T                         BANKMASK(CLC3GLS3), 7
#define LC3G4POL                         BANKMASK(CLC3POL), 3
#define LC3INTN                          BANKMASK(CLC3CON), 3
#define LC3INTP                          BANKMASK(CLC3CON), 4
#define LC3MODE0                         BANKMASK(CLC3CON), 0
#define LC3MODE1                         BANKMASK(CLC3CON), 1
#define LC3MODE2                         BANKMASK(CLC3CON), 2
#define LC3OUT                           BANKMASK(CLC3CON), 5
#define LC3POL                           BANKMASK(CLC3POL), 7
#define LC4D1S0                          BANKMASK(CLC4SEL0), 0
#define LC4D1S1                          BANKMASK(CLC4SEL0), 1
#define LC4D1S2                          BANKMASK(CLC4SEL0), 2
#define LC4D1S3                          BANKMASK(CLC4SEL0), 3
#define LC4D1S4                          BANKMASK(CLC4SEL0), 4
#define LC4D1S5                          BANKMASK(CLC4SEL0), 5
#define LC4D2S0                          BANKMASK(CLC4SEL1), 0
#define LC4D2S1                          BANKMASK(CLC4SEL1), 1
#define LC4D2S2                          BANKMASK(CLC4SEL1), 2
#define LC4D2S3                          BANKMASK(CLC4SEL1), 3
#define LC4D2S4                          BANKMASK(CLC4SEL1), 4
#define LC4D2S5                          BANKMASK(CLC4SEL1), 5
#define LC4D3S0                          BANKMASK(CLC4SEL2), 0
#define LC4D3S1                          BANKMASK(CLC4SEL2), 1
#define LC4D3S2                          BANKMASK(CLC4SEL2), 2
#define LC4D3S3                          BANKMASK(CLC4SEL2), 3
#define LC4D3S4                          BANKMASK(CLC4SEL2), 4
#define LC4D3S5                          BANKMASK(CLC4SEL2), 5
#define LC4D4S0                          BANKMASK(CLC4SEL3), 0
#define LC4D4S1                          BANKMASK(CLC4SEL3), 1
#define LC4D4S2                          BANKMASK(CLC4SEL3), 2
#define LC4D4S3                          BANKMASK(CLC4SEL3), 3
#define LC4D4S4                          BANKMASK(CLC4SEL3), 4
#define LC4D4S5                          BANKMASK(CLC4SEL3), 5
#define LC4EN                            BANKMASK(CLC4CON), 7
#define LC4G1D1N                         BANKMASK(CLC4GLS0), 0
#define LC4G1D1T                         BANKMASK(CLC4GLS0), 1
#define LC4G1D2N                         BANKMASK(CLC4GLS0), 2
#define LC4G1D2T                         BANKMASK(CLC4GLS0), 3
#define LC4G1D3N                         BANKMASK(CLC4GLS0), 4
#define LC4G1D3T                         BANKMASK(CLC4GLS0), 5
#define LC4G1D4N                         BANKMASK(CLC4GLS0), 6
#define LC4G1D4T                         BANKMASK(CLC4GLS0), 7
#define LC4G1POL                         BANKMASK(CLC4POL), 0
#define LC4G2D1N                         BANKMASK(CLC4GLS1), 0
#define LC4G2D1T                         BANKMASK(CLC4GLS1), 1
#define LC4G2D2N                         BANKMASK(CLC4GLS1), 2
#define LC4G2D2T                         BANKMASK(CLC4GLS1), 3
#define LC4G2D3N                         BANKMASK(CLC4GLS1), 4
#define LC4G2D3T                         BANKMASK(CLC4GLS1), 5
#define LC4G2D4N                         BANKMASK(CLC4GLS1), 6
#define LC4G2D4T                         BANKMASK(CLC4GLS1), 7
#define LC4G2POL                         BANKMASK(CLC4POL), 1
#define LC4G3D1N                         BANKMASK(CLC4GLS2), 0
#define LC4G3D1T                         BANKMASK(CLC4GLS2), 1
#define LC4G3D2N                         BANKMASK(CLC4GLS2), 2
#define LC4G3D2T                         BANKMASK(CLC4GLS2), 3
#define LC4G3D3N                         BANKMASK(CLC4GLS2), 4
#define LC4G3D3T                         BANKMASK(CLC4GLS2), 5
#define LC4G3D4N                         BANKMASK(CLC4GLS2), 6
#define LC4G3D4T                         BANKMASK(CLC4GLS2), 7
#define LC4G3POL                         BANKMASK(CLC4POL), 2
#define LC4G4D1N                         BANKMASK(CLC4GLS3), 0
#define LC4G4D1T                         BANKMASK(CLC4GLS3), 1
#define LC4G4D2N                         BANKMASK(CLC4GLS3), 2
#define LC4G4D2T                         BANKMASK(CLC4GLS3), 3
#define LC4G4D3N                         BANKMASK(CLC4GLS3), 4
#define LC4G4D3T                         BANKMASK(CLC4GLS3), 5
#define LC4G4D4N                         BANKMASK(CLC4GLS3), 6
#define LC4G4D4T                         BANKMASK(CLC4GLS3), 7
#define LC4G4POL                         BANKMASK(CLC4POL), 3
#define LC4INTN                          BANKMASK(CLC4CON), 3
#define LC4INTP                          BANKMASK(CLC4CON), 4
#define LC4MODE0                         BANKMASK(CLC4CON), 0
#define LC4MODE1                         BANKMASK(CLC4CON), 1
#define LC4MODE2                         BANKMASK(CLC4CON), 2
#define LC4OUT                           BANKMASK(CLC4CON), 5
#define LC4POL                           BANKMASK(CLC4POL), 7
#define LFOEN                            BANKMASK(OSCEN), 4
#define LFOR                             BANKMASK(OSCSTAT1), 4
#define LWLO                             BANKMASK(NVMCON1), 5
#define MC1OUT                           BANKMASK(CMOUT), 0
#define MC2OUT                           BANKMASK(CMOUT), 1
#define MDBIT                            BANKMASK(MDCON), 0
#define MDCH0                            BANKMASK(MDCARH), 0
#define MDCH1                            BANKMASK(MDCARH), 1
#define MDCH2                            BANKMASK(MDCARH), 2
#define MDCH3                            BANKMASK(MDCARH), 3
#define MDCHPOL                          BANKMASK(MDCARH), 6
#define MDCHSYNC                         BANKMASK(MDCARH), 5
#define MDCIN1PPS0                       BANKMASK(MDCIN1PPS), 0
#define MDCIN1PPS1                       BANKMASK(MDCIN1PPS), 1
#define MDCIN1PPS2                       BANKMASK(MDCIN1PPS), 2
#define MDCIN1PPS3                       BANKMASK(MDCIN1PPS), 3
#define MDCIN1PPS4                       BANKMASK(MDCIN1PPS), 4
#define MDCIN2PPS0                       BANKMASK(MDCIN2PPS), 0
#define MDCIN2PPS1                       BANKMASK(MDCIN2PPS), 1
#define MDCIN2PPS2                       BANKMASK(MDCIN2PPS), 2
#define MDCIN2PPS3                       BANKMASK(MDCIN2PPS), 3
#define MDCIN2PPS4                       BANKMASK(MDCIN2PPS), 4
#define MDCL0                            BANKMASK(MDCARL), 0
#define MDCL1                            BANKMASK(MDCARL), 1
#define MDCL2                            BANKMASK(MDCARL), 2
#define MDCL3                            BANKMASK(MDCARL), 3
#define MDCLPOL                          BANKMASK(MDCARL), 6
#define MDCLSYNC                         BANKMASK(MDCARL), 5
#define MDEN                             BANKMASK(MDCON), 7
#define MDMINPPS0                        BANKMASK(MDMINPPS), 0
#define MDMINPPS1                        BANKMASK(MDMINPPS), 1
#define MDMINPPS2                        BANKMASK(MDMINPPS), 2
#define MDMINPPS3                        BANKMASK(MDMINPPS), 3
#define MDMINPPS4                        BANKMASK(MDMINPPS), 4
#define MDMS0                            BANKMASK(MDSRC), 0
#define MDMS1                            BANKMASK(MDSRC), 1
#define MDMS2                            BANKMASK(MDSRC), 2
#define MDMS3                            BANKMASK(MDSRC), 3
#define MDOPOL                           BANKMASK(MDCON), 4
#define MDOUT                            BANKMASK(MDCON), 3
#define MLC1OUT                          BANKMASK(CLCDATA), 0
#define MLC2OUT                          BANKMASK(CLCDATA), 1
#define MLC3OUT                          BANKMASK(CLCDATA), 2
#define MLC4OUT                          BANKMASK(CLCDATA), 3
#define MSSP1MD                          BANKMASK(PMD4), 1
#define MSSP2MD                          BANKMASK(PMD4), 2
#define N1EN                             BANKMASK(NCO1CON), 7
#define N1OUT                            BANKMASK(NCO1CON), 5
#define N1PFM                            BANKMASK(NCO1CON), 0
#define N1POL                            BANKMASK(NCO1CON), 4
#define NCO1IE                           BANKMASK(PIE2), 0
#define NCO1IF                           BANKMASK(PIR2), 0
#define NCOMD                            BANKMASK(PMD1), 7
#define NDIV0                            BANKMASK(OSCCON1), 0
#define NDIV1                            BANKMASK(OSCCON1), 1
#define NDIV2                            BANKMASK(OSCCON1), 2
#define NDIV3                            BANKMASK(OSCCON1), 3
#define NOSC0                            BANKMASK(OSCCON1), 4
#define NOSC1                            BANKMASK(OSCCON1), 5
#define NOSC2                            BANKMASK(OSCCON1), 6
#define NOSCR                            BANKMASK(OSCCON3), 3
#define NVMADR0                          BANKMASK(NVMADRL), 0
#define NVMADR1                          BANKMASK(NVMADRL), 1
#define NVMADR10                         BANKMASK(NVMADRH), 2
#define NVMADR11                         BANKMASK(NVMADRH), 3
#define NVMADR12                         BANKMASK(NVMADRH), 4
#define NVMADR13                         BANKMASK(NVMADRH), 5
#define NVMADR14                         BANKMASK(NVMADRH), 6
#define NVMADR2                          BANKMASK(NVMADRL), 2
#define NVMADR3                          BANKMASK(NVMADRL), 3
#define NVMADR4                          BANKMASK(NVMADRL), 4
#define NVMADR5                          BANKMASK(NVMADRL), 5
#define NVMADR6                          BANKMASK(NVMADRL), 6
#define NVMADR7                          BANKMASK(NVMADRL), 7
#define NVMADR8                          BANKMASK(NVMADRH), 0
#define NVMADR9                          BANKMASK(NVMADRH), 1
#define NVMDAT0                          BANKMASK(NVMDATL), 0
#define NVMDAT1                          BANKMASK(NVMDATL), 1
#define NVMDAT10                         BANKMASK(NVMDATH), 2
#define NVMDAT11                         BANKMASK(NVMDATH), 3
#define NVMDAT12                         BANKMASK(NVMDATH), 4
#define NVMDAT13                         BANKMASK(NVMDATH), 5
#define NVMDAT2                          BANKMASK(NVMDATL), 2
#define NVMDAT3                          BANKMASK(NVMDATL), 3
#define NVMDAT4                          BANKMASK(NVMDATL), 4
#define NVMDAT5                          BANKMASK(NVMDATL), 5
#define NVMDAT6                          BANKMASK(NVMDATL), 6
#define NVMDAT7                          BANKMASK(NVMDATL), 7
#define NVMDAT8                          BANKMASK(NVMDATH), 0
#define NVMDAT9                          BANKMASK(NVMDATH), 1
#define NVMIE                            BANKMASK(PIE2), 4
#define NVMIF                            BANKMASK(PIR2), 4
#define NVMMD                            BANKMASK(PMD0), 2
#define NVMREGS                          BANKMASK(NVMCON1), 6
#define ODCA0                            BANKMASK(ODCONA), 0
#define ODCA1                            BANKMASK(ODCONA), 1
#define ODCA2                            BANKMASK(ODCONA), 2
#define ODCA4                            BANKMASK(ODCONA), 4
#define ODCA5                            BANKMASK(ODCONA), 5
#define ODCC0                            BANKMASK(ODCONC), 0
#define ODCC1                            BANKMASK(ODCONC), 1
#define ODCC2                            BANKMASK(ODCONC), 2
#define ODCC3                            BANKMASK(ODCONC), 3
#define ODCC4                            BANKMASK(ODCONC), 4
#define ODCC5                            BANKMASK(ODCONC), 5
#define OERR                             BANKMASK(RC1STA), 1
#define ORDY                             BANKMASK(OSCCON3), 4
#define OSFIE                            BANKMASK(PIE3), 7
#define OSFIF                            BANKMASK(PIR3), 7
#define P5TSEL0                          BANKMASK(PWMTMRS), 0
#define P5TSEL1                          BANKMASK(PWMTMRS), 1
#define P6TSEL0                          BANKMASK(PWMTMRS), 2
#define P6TSEL1                          BANKMASK(PWMTMRS), 3
#define PEIE                             BANKMASK(INTCON), 6
#define PLLR                             BANKMASK(OSCSTAT1), 0
#define PPSLOCKED                        BANKMASK(PPSLOCK), 0
#define PWM5DCH0                         BANKMASK(PWM5DCH), 0
#define PWM5DCH1                         BANKMASK(PWM5DCH), 1
#define PWM5DCH2                         BANKMASK(PWM5DCH), 2
#define PWM5DCH3                         BANKMASK(PWM5DCH), 3
#define PWM5DCH4                         BANKMASK(PWM5DCH), 4
#define PWM5DCH5                         BANKMASK(PWM5DCH), 5
#define PWM5DCH6                         BANKMASK(PWM5DCH), 6
#define PWM5DCH7                         BANKMASK(PWM5DCH), 7
#define PWM5DCL0                         BANKMASK(PWM5DCL), 6
#define PWM5DCL1                         BANKMASK(PWM5DCL), 7
#define PWM5EN                           BANKMASK(PWM5CON), 7
#define PWM5MD                           BANKMASK(PMD3), 4
#define PWM5OUT                          BANKMASK(PWM5CON), 5
#define PWM5POL                          BANKMASK(PWM5CON), 4
#define PWM6DCH0                         BANKMASK(PWM6DCH), 0
#define PWM6DCH1                         BANKMASK(PWM6DCH), 1
#define PWM6DCH2                         BANKMASK(PWM6DCH), 2
#define PWM6DCH3                         BANKMASK(PWM6DCH), 3
#define PWM6DCH4                         BANKMASK(PWM6DCH), 4
#define PWM6DCH5                         BANKMASK(PWM6DCH), 5
#define PWM6DCH6                         BANKMASK(PWM6DCH), 6
#define PWM6DCH7                         BANKMASK(PWM6DCH), 7
#define PWM6DCL0                         BANKMASK(PWM6DCL), 6
#define PWM6DCL1                         BANKMASK(PWM6DCL), 7
#define PWM6EN                           BANKMASK(PWM6CON), 7
#define PWM6MD                           BANKMASK(PMD3), 5
#define PWM6OUT                          BANKMASK(PWM6CON), 5
#define PWM6POL                          BANKMASK(PWM6CON), 4
#define RA0                              BANKMASK(PORTA), 0
#define RA0PPS0                          BANKMASK(RA0PPS), 0
#define RA0PPS1                          BANKMASK(RA0PPS), 1
#define RA0PPS2                          BANKMASK(RA0PPS), 2
#define RA0PPS3                          BANKMASK(RA0PPS), 3
#define RA0PPS4                          BANKMASK(RA0PPS), 4
#define RA1                              BANKMASK(PORTA), 1
#define RA1PPS0                          BANKMASK(RA1PPS), 0
#define RA1PPS1                          BANKMASK(RA1PPS), 1
#define RA1PPS2                          BANKMASK(RA1PPS), 2
#define RA1PPS3                          BANKMASK(RA1PPS), 3
#define RA1PPS4                          BANKMASK(RA1PPS), 4
#define RA2                              BANKMASK(PORTA), 2
#define RA2PPS0                          BANKMASK(RA2PPS), 0
#define RA2PPS1                          BANKMASK(RA2PPS), 1
#define RA2PPS2                          BANKMASK(RA2PPS), 2
#define RA2PPS3                          BANKMASK(RA2PPS), 3
#define RA2PPS4                          BANKMASK(RA2PPS), 4
#define RA3                              BANKMASK(PORTA), 3
#define RA4                              BANKMASK(PORTA), 4
#define RA4PPS0                          BANKMASK(RA4PPS), 0
#define RA4PPS1                          BANKMASK(RA4PPS), 1
#define RA4PPS2                          BANKMASK(RA4PPS), 2
#define RA4PPS3                          BANKMASK(RA4PPS), 3
#define RA4PPS4                          BANKMASK(RA4PPS), 4
#define RA5                              BANKMASK(PORTA), 5
#define RA5PPS0                          BANKMASK(RA5PPS), 0
#define RA5PPS1                          BANKMASK(RA5PPS), 1
#define RA5PPS2                          BANKMASK(RA5PPS), 2
#define RA5PPS3                          BANKMASK(RA5PPS), 3
#define RA5PPS4                          BANKMASK(RA5PPS), 4
#define RC0                              BANKMASK(PORTC), 0
#define RC0PPS0                          BANKMASK(RC0PPS), 0
#define RC0PPS1                          BANKMASK(RC0PPS), 1
#define RC0PPS2                          BANKMASK(RC0PPS), 2
#define RC0PPS3                          BANKMASK(RC0PPS), 3
#define RC0PPS4                          BANKMASK(RC0PPS), 4
#define RC1                              BANKMASK(PORTC), 1
#define RC1PPS0                          BANKMASK(RC1PPS), 0
#define RC1PPS1                          BANKMASK(RC1PPS), 1
#define RC1PPS2                          BANKMASK(RC1PPS), 2
#define RC1PPS3                          BANKMASK(RC1PPS), 3
#define RC1PPS4                          BANKMASK(RC1PPS), 4
#define RC2                              BANKMASK(PORTC), 2
#define RC2PPS0                          BANKMASK(RC2PPS), 0
#define RC2PPS1                          BANKMASK(RC2PPS), 1
#define RC2PPS2                          BANKMASK(RC2PPS), 2
#define RC2PPS3                          BANKMASK(RC2PPS), 3
#define RC2PPS4                          BANKMASK(RC2PPS), 4
#define RC3                              BANKMASK(PORTC), 3
#define RC3PPS0                          BANKMASK(RC3PPS), 0
#define RC3PPS1                          BANKMASK(RC3PPS), 1
#define RC3PPS2                          BANKMASK(RC3PPS), 2
#define RC3PPS3                          BANKMASK(RC3PPS), 3
#define RC3PPS4                          BANKMASK(RC3PPS), 4
#define RC4                              BANKMASK(PORTC), 4
#define RC4PPS0                          BANKMASK(RC4PPS), 0
#define RC4PPS1                          BANKMASK(RC4PPS), 1
#define RC4PPS2                          BANKMASK(RC4PPS), 2
#define RC4PPS3                          BANKMASK(RC4PPS), 3
#define RC4PPS4                          BANKMASK(RC4PPS), 4
#define RC5                              BANKMASK(PORTC), 5
#define RC5PPS0                          BANKMASK(RC5PPS), 0
#define RC5PPS1                          BANKMASK(RC5PPS), 1
#define RC5PPS2                          BANKMASK(RC5PPS), 2
#define RC5PPS3                          BANKMASK(RC5PPS), 3
#define RC5PPS4                          BANKMASK(RC5PPS), 4
#define RCIDL                            BANKMASK(BAUD1CON), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(NVMCON1), 0
#define ROI                              BANKMASK(CPUDOZE), 5
#define RX9                              BANKMASK(RC1STA), 6
#define RX9D                             BANKMASK(RC1STA), 0
#define RXDTPPS0                         BANKMASK(RXPPS), 0
#define RXDTPPS1                         BANKMASK(RXPPS), 1
#define RXDTPPS2                         BANKMASK(RXPPS), 2
#define RXDTPPS3                         BANKMASK(RXPPS), 3
#define RXDTPPS4                         BANKMASK(RXPPS), 4
#define SBOREN                           BANKMASK(BORCON), 7
#define SCKP                             BANKMASK(BAUD1CON), 4
#define SENDB                            BANKMASK(TX1STA), 3
#define SLRA0                            BANKMASK(SLRCONA), 0
#define SLRA1                            BANKMASK(SLRCONA), 1
#define SLRA2                            BANKMASK(SLRCONA), 2
#define SLRA4                            BANKMASK(SLRCONA), 4
#define SLRA5                            BANKMASK(SLRCONA), 5
#define SLRC0                            BANKMASK(SLRCONC), 0
#define SLRC1                            BANKMASK(SLRCONC), 1
#define SLRC2                            BANKMASK(SLRCONC), 2
#define SLRC3                            BANKMASK(SLRCONC), 3
#define SLRC4                            BANKMASK(SLRCONC), 4
#define SLRC5                            BANKMASK(SLRCONC), 5
#define SOR                              BANKMASK(OSCSTAT1), 3
#define SOSCBE                           BANKMASK(OSCCON3), 5
#define SOSCEN                           BANKMASK(OSCEN), 3
#define SOSCPWR                          BANKMASK(OSCCON3), 6
#define SPEN                             BANKMASK(RC1STA), 7
#define SREN                             BANKMASK(RC1STA), 5
#define SSP1ADD0                         BANKMASK(SSP1ADD), 0
#define SSP1ADD1                         BANKMASK(SSP1ADD), 1
#define SSP1ADD2                         BANKMASK(SSP1ADD), 2
#define SSP1ADD3                         BANKMASK(SSP1ADD), 3
#define SSP1ADD4                         BANKMASK(SSP1ADD), 4
#define SSP1ADD5                         BANKMASK(SSP1ADD), 5
#define SSP1ADD6                         BANKMASK(SSP1ADD), 6
#define SSP1ADD7                         BANKMASK(SSP1ADD), 7
#define SSP1BUF0                         BANKMASK(SSP1BUF), 0
#define SSP1BUF1                         BANKMASK(SSP1BUF), 1
#define SSP1BUF2                         BANKMASK(SSP1BUF), 2
#define SSP1BUF3                         BANKMASK(SSP1BUF), 3
#define SSP1BUF4                         BANKMASK(SSP1BUF), 4
#define SSP1BUF5                         BANKMASK(SSP1BUF), 5
#define SSP1BUF6                         BANKMASK(SSP1BUF), 6
#define SSP1BUF7                         BANKMASK(SSP1BUF), 7
#define SSP1CLKPPS0                      BANKMASK(SSP1CLKPPS), 0
#define SSP1CLKPPS1                      BANKMASK(SSP1CLKPPS), 1
#define SSP1CLKPPS2                      BANKMASK(SSP1CLKPPS), 2
#define SSP1CLKPPS3                      BANKMASK(SSP1CLKPPS), 3
#define SSP1CLKPPS4                      BANKMASK(SSP1CLKPPS), 4
#define SSP1DATPPS0                      BANKMASK(SSP1DATPPS), 0
#define SSP1DATPPS1                      BANKMASK(SSP1DATPPS), 1
#define SSP1DATPPS2                      BANKMASK(SSP1DATPPS), 2
#define SSP1DATPPS3                      BANKMASK(SSP1DATPPS), 3
#define SSP1DATPPS4                      BANKMASK(SSP1DATPPS), 4
#define SSP1IE                           BANKMASK(PIE1), 3
#define SSP1IF                           BANKMASK(PIR1), 3
#define SSP1MSK0                         BANKMASK(SSP1MSK), 0
#define SSP1MSK1                         BANKMASK(SSP1MSK), 1
#define SSP1MSK2                         BANKMASK(SSP1MSK), 2
#define SSP1MSK3                         BANKMASK(SSP1MSK), 3
#define SSP1MSK4                         BANKMASK(SSP1MSK), 4
#define SSP1MSK5                         BANKMASK(SSP1MSK), 5
#define SSP1MSK6                         BANKMASK(SSP1MSK), 6
#define SSP1MSK7                         BANKMASK(SSP1MSK), 7
#define SSP1SSPPS0                       BANKMASK(SSP1SSPPS), 0
#define SSP1SSPPS1                       BANKMASK(SSP1SSPPS), 1
#define SSP1SSPPS2                       BANKMASK(SSP1SSPPS), 2
#define SSP1SSPPS3                       BANKMASK(SSP1SSPPS), 3
#define SSP1SSPPS4                       BANKMASK(SSP1SSPPS), 4
#define SSP2ADD0                         BANKMASK(SSP2ADD), 0
#define SSP2ADD1                         BANKMASK(SSP2ADD), 1
#define SSP2ADD2                         BANKMASK(SSP2ADD), 2
#define SSP2ADD3                         BANKMASK(SSP2ADD), 3
#define SSP2ADD4                         BANKMASK(SSP2ADD), 4
#define SSP2ADD5                         BANKMASK(SSP2ADD), 5
#define SSP2ADD6                         BANKMASK(SSP2ADD), 6
#define SSP2ADD7                         BANKMASK(SSP2ADD), 7
#define SSP2BUF0                         BANKMASK(SSP2BUF), 0
#define SSP2BUF1                         BANKMASK(SSP2BUF), 1
#define SSP2BUF2                         BANKMASK(SSP2BUF), 2
#define SSP2BUF3                         BANKMASK(SSP2BUF), 3
#define SSP2BUF4                         BANKMASK(SSP2BUF), 4
#define SSP2BUF5                         BANKMASK(SSP2BUF), 5
#define SSP2BUF6                         BANKMASK(SSP2BUF), 6
#define SSP2BUF7                         BANKMASK(SSP2BUF), 7
#define SSP2CLKPPS0                      BANKMASK(SSP2CLKPPS), 0
#define SSP2CLKPPS1                      BANKMASK(SSP2CLKPPS), 1
#define SSP2CLKPPS2                      BANKMASK(SSP2CLKPPS), 2
#define SSP2CLKPPS3                      BANKMASK(SSP2CLKPPS), 3
#define SSP2CLKPPS4                      BANKMASK(SSP2CLKPPS), 4
#define SSP2DATPPS0                      BANKMASK(SSP2DATPPS), 0
#define SSP2DATPPS1                      BANKMASK(SSP2DATPPS), 1
#define SSP2DATPPS2                      BANKMASK(SSP2DATPPS), 2
#define SSP2DATPPS3                      BANKMASK(SSP2DATPPS), 3
#define SSP2DATPPS4                      BANKMASK(SSP2DATPPS), 4
#define SSP2IE                           BANKMASK(PIE2), 3
#define SSP2IF                           BANKMASK(PIR2), 3
#define SSP2MSK0                         BANKMASK(SSP2MSK), 0
#define SSP2MSK1                         BANKMASK(SSP2MSK), 1
#define SSP2MSK2                         BANKMASK(SSP2MSK), 2
#define SSP2MSK3                         BANKMASK(SSP2MSK), 3
#define SSP2MSK4                         BANKMASK(SSP2MSK), 4
#define SSP2MSK5                         BANKMASK(SSP2MSK), 5
#define SSP2MSK6                         BANKMASK(SSP2MSK), 6
#define SSP2MSK7                         BANKMASK(SSP2MSK), 7
#define SSP2SSPPS0                       BANKMASK(SSP2SSPPS), 0
#define SSP2SSPPS1                       BANKMASK(SSP2SSPPS), 1
#define SSP2SSPPS2                       BANKMASK(SSP2SSPPS), 2
#define SSP2SSPPS3                       BANKMASK(SSP2SSPPS), 3
#define SSP2SSPPS4                       BANKMASK(SSP2SSPPS), 4
#define STKOVF                           BANKMASK(PCON0), 7
#define STKUNF                           BANKMASK(PCON0), 6
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TX1STA), 4
#define SYSCMD                           BANKMASK(PMD0), 7
#define T016BIT                          BANKMASK(T0CON0), 4
#define T0ASYNC                          BANKMASK(T0CON1), 4
#define T0CKIPPS0                        BANKMASK(T0CKIPPS), 0
#define T0CKIPPS1                        BANKMASK(T0CKIPPS), 1
#define T0CKIPPS2                        BANKMASK(T0CKIPPS), 2
#define T0CKIPPS3                        BANKMASK(T0CKIPPS), 3
#define T0CKIPPS4                        BANKMASK(T0CKIPPS), 4
#define T0CKPS0                          BANKMASK(T0CON1), 0
#define T0CKPS1                          BANKMASK(T0CON1), 1
#define T0CKPS2                          BANKMASK(T0CON1), 2
#define T0CKPS3                          BANKMASK(T0CON1), 3
#define T0CS0                            BANKMASK(T0CON1), 5
#define T0CS1                            BANKMASK(T0CON1), 6
#define T0CS2                            BANKMASK(T0CON1), 7
#define T0EN                             BANKMASK(T0CON0), 7
#define T0OUT                            BANKMASK(T0CON0), 5
#define T0OUTPS0                         BANKMASK(T0CON0), 0
#define T0OUTPS1                         BANKMASK(T0CON0), 1
#define T0OUTPS2                         BANKMASK(T0CON0), 2
#define T0OUTPS3                         BANKMASK(T0CON0), 3
#define T1CKIPPS0                        BANKMASK(T1CKIPPS), 0
#define T1CKIPPS1                        BANKMASK(T1CKIPPS), 1
#define T1CKIPPS2                        BANKMASK(T1CKIPPS), 2
#define T1CKIPPS3                        BANKMASK(T1CKIPPS), 3
#define T1CKIPPS4                        BANKMASK(T1CKIPPS), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GPPS0                          BANKMASK(T1GPPS), 0
#define T1GPPS1                          BANKMASK(T1GPPS), 1
#define T1GPPS2                          BANKMASK(T1GPPS), 2
#define T1GPPS3                          BANKMASK(T1GPPS), 3
#define T1GPPS4                          BANKMASK(T1GPPS), 4
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1SOSC                           BANKMASK(T1CON), 3
#define T1SYNC                           BANKMASK(T1CON), 2
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define T2OUTPS0                         BANKMASK(T2CON), 3
#define T2OUTPS1                         BANKMASK(T2CON), 4
#define T2OUTPS2                         BANKMASK(T2CON), 5
#define T2OUTPS3                         BANKMASK(T2CON), 6
#define T3CKPS0                          BANKMASK(T3CON), 4
#define T3CKPS1                          BANKMASK(T3CON), 5
#define T3GGO_nDONE                      BANKMASK(T3GCON), 3
#define T3GPOL                           BANKMASK(T3GCON), 6
#define T3GSPM                           BANKMASK(T3GCON), 4
#define T3GSS0                           BANKMASK(T3GCON), 0
#define T3GSS1                           BANKMASK(T3GCON), 1
#define T3GTM                            BANKMASK(T3GCON), 5
#define T3GVAL                           BANKMASK(T3GCON), 2
#define T3SOSC                           BANKMASK(T3CON), 3
#define T3SYNC                           BANKMASK(T3CON), 2
#define T4CKPS0                          BANKMASK(T4CON), 0
#define T4CKPS1                          BANKMASK(T4CON), 1
#define T4OUTPS0                         BANKMASK(T4CON), 3
#define T4OUTPS1                         BANKMASK(T4CON), 4
#define T4OUTPS2                         BANKMASK(T4CON), 5
#define T4OUTPS3                         BANKMASK(T4CON), 6
#define T5CKPS0                          BANKMASK(T5CON), 4
#define T5CKPS1                          BANKMASK(T5CON), 5
#define T5GGO_nDONE                      BANKMASK(T5GCON), 3
#define T5GPOL                           BANKMASK(T5GCON), 6
#define T5GSPM                           BANKMASK(T5GCON), 4
#define T5GSS0                           BANKMASK(T5GCON), 0
#define T5GSS1                           BANKMASK(T5GCON), 1
#define T5GTM                            BANKMASK(T5GCON), 5
#define T5GVAL                           BANKMASK(T5GCON), 2
#define T5SOSC                           BANKMASK(T5CON), 3
#define T5SYNC                           BANKMASK(T5CON), 2
#define T6CKPS0                          BANKMASK(T6CON), 0
#define T6CKPS1                          BANKMASK(T6CON), 1
#define T6OUTPS0                         BANKMASK(T6CON), 3
#define T6OUTPS1                         BANKMASK(T6CON), 4
#define T6OUTPS2                         BANKMASK(T6CON), 5
#define T6OUTPS3                         BANKMASK(T6CON), 6
#define TMR00                            BANKMASK(TMR0L), 0
#define TMR01                            BANKMASK(TMR0L), 1
#define TMR010                           BANKMASK(TMR0H), 2
#define TMR011                           BANKMASK(TMR0H), 3
#define TMR012                           BANKMASK(TMR0H), 4
#define TMR013                           BANKMASK(TMR0H), 5
#define TMR014                           BANKMASK(TMR0H), 6
#define TMR015                           BANKMASK(TMR0H), 7
#define TMR02                            BANKMASK(TMR0L), 2
#define TMR03                            BANKMASK(TMR0L), 3
#define TMR04                            BANKMASK(TMR0L), 4
#define TMR05                            BANKMASK(TMR0L), 5
#define TMR06                            BANKMASK(TMR0L), 6
#define TMR07                            BANKMASK(TMR0L), 7
#define TMR08                            BANKMASK(TMR0H), 0
#define TMR09                            BANKMASK(TMR0H), 1
#define TMR0IE                           BANKMASK(PIE0), 5
#define TMR0IF                           BANKMASK(PIR0), 5
#define TMR0MD                           BANKMASK(PMD1), 0
#define TMR1CS0                          BANKMASK(T1CON), 6
#define TMR1CS1                          BANKMASK(T1CON), 7
#define TMR1GE                           BANKMASK(T1GCON), 7
#define TMR1GIE                          BANKMASK(PIE1), 7
#define TMR1GIF                          BANKMASK(PIR1), 7
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1MD                           BANKMASK(PMD1), 1
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2MD                           BANKMASK(PMD1), 2
#define TMR2ON                           BANKMASK(T2CON), 2
#define TMR3CS0                          BANKMASK(T3CON), 6
#define TMR3CS1                          BANKMASK(T3CON), 7
#define TMR3GE                           BANKMASK(T3GCON), 7
#define TMR3GIE                          BANKMASK(PIE3), 5
#define TMR3GIF                          BANKMASK(PIR3), 5
#define TMR3IE                           BANKMASK(PIE3), 4
#define TMR3IF                           BANKMASK(PIR3), 4
#define TMR3MD                           BANKMASK(PMD1), 3
#define TMR3ON                           BANKMASK(T3CON), 0
#define TMR4IE                           BANKMASK(PIE2), 1
#define TMR4IF                           BANKMASK(PIR2), 1
#define TMR4MD                           BANKMASK(PMD1), 4
#define TMR4ON                           BANKMASK(T4CON), 2
#define TMR5CS0                          BANKMASK(T5CON), 6
#define TMR5CS1                          BANKMASK(T5CON), 7
#define TMR5GE                           BANKMASK(T5GCON), 7
#define TMR5GIE                          BANKMASK(PIE4), 5
#define TMR5GIF                          BANKMASK(PIR4), 5
#define TMR5IE                           BANKMASK(PIE4), 4
#define TMR5IF                           BANKMASK(PIR4), 4
#define TMR5MD                           BANKMASK(PMD1), 5
#define TMR5ON                           BANKMASK(T5CON), 0
#define TMR6IE                           BANKMASK(PIE2), 7
#define TMR6IF                           BANKMASK(PIR2), 7
#define TMR6MD                           BANKMASK(PMD1), 6
#define TMR6ON                           BANKMASK(T6CON), 2
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TRISA4                           BANKMASK(TRISA), 4
#define TRISA5                           BANKMASK(TRISA), 5
#define TRISC0                           BANKMASK(TRISC), 0
#define TRISC1                           BANKMASK(TRISC), 1
#define TRISC2                           BANKMASK(TRISC), 2
#define TRISC3                           BANKMASK(TRISC), 3
#define TRISC4                           BANKMASK(TRISC), 4
#define TRISC5                           BANKMASK(TRISC), 5
#define TRMT                             BANKMASK(TX1STA), 1
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TX9                              BANKMASK(TX1STA), 6
#define TX9D                             BANKMASK(TX1STA), 0
#define TXCKPPS0                         BANKMASK(TXPPS), 0
#define TXCKPPS1                         BANKMASK(TXPPS), 1
#define TXCKPPS2                         BANKMASK(TXPPS), 2
#define TXCKPPS3                         BANKMASK(TXPPS), 3
#define TXCKPPS4                         BANKMASK(TXPPS), 4
#define TXEN                             BANKMASK(TX1STA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define UART1MD                          BANKMASK(PMD4), 5
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
#define WPUC0                            BANKMASK(WPUC), 0
#define WPUC1                            BANKMASK(WPUC), 1
#define WPUC2                            BANKMASK(WPUC), 2
#define WPUC3                            BANKMASK(WPUC), 3
#define WPUC4                            BANKMASK(WPUC), 4
#define WPUC5                            BANKMASK(WPUC), 5
#define WR                               BANKMASK(NVMCON1), 1
#define WREN                             BANKMASK(NVMCON1), 2
#define WRERR                            BANKMASK(NVMCON1), 3
#define WUE                              BANKMASK(BAUD1CON), 1
#define ZERO                             BANKMASK(STATUS), 2
#define Z_SHAD                           BANKMASK(STATUS_SHAD), 2
#define nBOR                             BANKMASK(PCON0), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON0), 1
#define nRI                              BANKMASK(PCON0), 2
#define nRMCLR                           BANKMASK(PCON0), 3
#define nRWDT                            BANKMASK(PCON0), 4
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
psect udata_bank2,class=BANK2,space=SPACE_DATA,noexec
psect udata_bank3,class=BANK3,space=SPACE_DATA,noexec
psect udata_bank4,class=BANK4,space=SPACE_DATA,noexec
psect udata_bank5,class=BANK5,space=SPACE_DATA,noexec
psect udata_bank6,class=BANK6,space=SPACE_DATA,noexec
psect udata_bank7,class=BANK7,space=SPACE_DATA,noexec
psect udata_bank8,class=BANK8,space=SPACE_DATA,noexec
psect udata_bank9,class=BANK9,space=SPACE_DATA,noexec
psect udata_bank10,class=BANK10,space=SPACE_DATA,noexec
psect udata_bank11,class=BANK11,space=SPACE_DATA,noexec
psect udata_bank12,class=BANK12,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16LF18325_INC_
