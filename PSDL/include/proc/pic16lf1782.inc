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

#ifndef _PIC16LF1782_INC_
#define _PIC16LF1782_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF1782
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
BSR_BSR_POSN                             equ 0000h
BSR_BSR_POSITION                         equ 0000h
BSR_BSR_SIZE                             equ 0005h
BSR_BSR_LENGTH                           equ 0005h
BSR_BSR_MASK                             equ 001Fh

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
PORTA_PORTA_POSN                         equ 0000h
PORTA_PORTA_POSITION                     equ 0000h
PORTA_PORTA_SIZE                         equ 0008h
PORTA_PORTA_LENGTH                       equ 0008h
PORTA_PORTA_MASK                         equ 00FFh

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 000Dh
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
PORTB_PORTB_POSN                         equ 0000h
PORTB_PORTB_POSITION                     equ 0000h
PORTB_PORTB_SIZE                         equ 0008h
PORTB_PORTB_LENGTH                       equ 0008h
PORTB_PORTB_MASK                         equ 00FFh

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
PORTC_RC6_POSN                           equ 0006h
PORTC_RC6_POSITION                       equ 0006h
PORTC_RC6_SIZE                           equ 0001h
PORTC_RC6_LENGTH                         equ 0001h
PORTC_RC6_MASK                           equ 0040h
PORTC_RC7_POSN                           equ 0007h
PORTC_RC7_POSITION                       equ 0007h
PORTC_RC7_SIZE                           equ 0001h
PORTC_RC7_LENGTH                         equ 0001h
PORTC_RC7_MASK                           equ 0080h
PORTC_PORTC_POSN                         equ 0000h
PORTC_PORTC_POSITION                     equ 0000h
PORTC_PORTC_SIZE                         equ 0008h
PORTC_PORTC_LENGTH                       equ 0008h
PORTC_PORTC_MASK                         equ 00FFh

// Register: PORTE
#define PORTE PORTE
PORTE                                    equ 0010h
// bitfield definitions
PORTE_RE3_POSN                           equ 0003h
PORTE_RE3_POSITION                       equ 0003h
PORTE_RE3_SIZE                           equ 0001h
PORTE_RE3_LENGTH                         equ 0001h
PORTE_RE3_MASK                           equ 0008h

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
PIR1_CCP1IF_POSN                         equ 0002h
PIR1_CCP1IF_POSITION                     equ 0002h
PIR1_CCP1IF_SIZE                         equ 0001h
PIR1_CCP1IF_LENGTH                       equ 0001h
PIR1_CCP1IF_MASK                         equ 0004h
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
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_C3IF_POSN                           equ 0001h
PIR2_C3IF_POSITION                       equ 0001h
PIR2_C3IF_SIZE                           equ 0001h
PIR2_C3IF_LENGTH                         equ 0001h
PIR2_C3IF_MASK                           equ 0002h
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h
PIR2_EEIF_POSN                           equ 0004h
PIR2_EEIF_POSITION                       equ 0004h
PIR2_EEIF_SIZE                           equ 0001h
PIR2_EEIF_LENGTH                         equ 0001h
PIR2_EEIF_MASK                           equ 0010h
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
PIR2_OSFIF_POSN                          equ 0007h
PIR2_OSFIF_POSITION                      equ 0007h
PIR2_OSFIF_SIZE                          equ 0001h
PIR2_OSFIF_LENGTH                        equ 0001h
PIR2_OSFIF_MASK                          equ 0080h

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0014h
// bitfield definitions
PIR4_PSMC1SIF_POSN                       equ 0000h
PIR4_PSMC1SIF_POSITION                   equ 0000h
PIR4_PSMC1SIF_SIZE                       equ 0001h
PIR4_PSMC1SIF_LENGTH                     equ 0001h
PIR4_PSMC1SIF_MASK                       equ 0001h
PIR4_PSMC2SIF_POSN                       equ 0001h
PIR4_PSMC2SIF_POSITION                   equ 0001h
PIR4_PSMC2SIF_SIZE                       equ 0001h
PIR4_PSMC2SIF_LENGTH                     equ 0001h
PIR4_PSMC2SIF_MASK                       equ 0002h
PIR4_PSMC1TIF_POSN                       equ 0004h
PIR4_PSMC1TIF_POSITION                   equ 0004h
PIR4_PSMC1TIF_SIZE                       equ 0001h
PIR4_PSMC1TIF_LENGTH                     equ 0001h
PIR4_PSMC1TIF_MASK                       equ 0010h
PIR4_PSMC2TIF_POSN                       equ 0005h
PIR4_PSMC2TIF_POSITION                   equ 0005h
PIR4_PSMC2TIF_SIZE                       equ 0001h
PIR4_PSMC2TIF_LENGTH                     equ 0001h
PIR4_PSMC2TIF_MASK                       equ 0020h

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0015h
// bitfield definitions
TMR0_TMR0_POSN                           equ 0000h
TMR0_TMR0_POSITION                       equ 0000h
TMR0_TMR0_SIZE                           equ 0008h
TMR0_TMR0_LENGTH                         equ 0008h
TMR0_TMR0_MASK                           equ 00FFh

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 0016h
// bitfield definitions
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 0017h
// bitfield definitions
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0018h
// bitfield definitions
T1CON_TMR1ON_POSN                        equ 0000h
T1CON_TMR1ON_POSITION                    equ 0000h
T1CON_TMR1ON_SIZE                        equ 0001h
T1CON_TMR1ON_LENGTH                      equ 0001h
T1CON_TMR1ON_MASK                        equ 0001h
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

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 0019h
// bitfield definitions
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
T1GCON_T1GVAL_POSN                       equ 0002h
T1GCON_T1GVAL_POSITION                   equ 0002h
T1GCON_T1GVAL_SIZE                       equ 0001h
T1GCON_T1GVAL_LENGTH                     equ 0001h
T1GCON_T1GVAL_MASK                       equ 0004h
T1GCON_T1GGO_POSN                        equ 0003h
T1GCON_T1GGO_POSITION                    equ 0003h
T1GCON_T1GGO_SIZE                        equ 0001h
T1GCON_T1GGO_LENGTH                      equ 0001h
T1GCON_T1GGO_MASK                        equ 0008h
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
T1GCON_T1GSS_POSN                        equ 0000h
T1GCON_T1GSS_POSITION                    equ 0000h
T1GCON_T1GSS_SIZE                        equ 0002h
T1GCON_T1GSS_LENGTH                      equ 0002h
T1GCON_T1GSS_MASK                        equ 0003h

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 001Ah
// bitfield definitions
TMR2_TMR2_POSN                           equ 0000h
TMR2_TMR2_POSITION                       equ 0000h
TMR2_TMR2_SIZE                           equ 0008h
TMR2_TMR2_LENGTH                         equ 0008h
TMR2_TMR2_MASK                           equ 00FFh

// Register: PR2
#define PR2 PR2
PR2                                      equ 001Bh
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 001Ch
// bitfield definitions
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
T2CON_TMR2ON_POSN                        equ 0002h
T2CON_TMR2ON_POSITION                    equ 0002h
T2CON_TMR2ON_SIZE                        equ 0001h
T2CON_TMR2ON_LENGTH                      equ 0001h
T2CON_TMR2ON_MASK                        equ 0004h
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
T2CON_T2CKPS_POSN                        equ 0000h
T2CON_T2CKPS_POSITION                    equ 0000h
T2CON_T2CKPS_SIZE                        equ 0002h
T2CON_T2CKPS_LENGTH                      equ 0002h
T2CON_T2CKPS_MASK                        equ 0003h
T2CON_T2OUTPS_POSN                       equ 0003h
T2CON_T2OUTPS_POSITION                   equ 0003h
T2CON_T2OUTPS_SIZE                       equ 0004h
T2CON_T2OUTPS_LENGTH                     equ 0004h
T2CON_T2OUTPS_MASK                       equ 0078h

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
TRISA_TRISA_POSN                         equ 0000h
TRISA_TRISA_POSITION                     equ 0000h
TRISA_TRISA_SIZE                         equ 0008h
TRISA_TRISA_LENGTH                       equ 0008h
TRISA_TRISA_MASK                         equ 00FFh

// Register: TRISB
#define TRISB TRISB
TRISB                                    equ 008Dh
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
TRISB_TRISB_POSN                         equ 0000h
TRISB_TRISB_POSITION                     equ 0000h
TRISB_TRISB_SIZE                         equ 0008h
TRISB_TRISB_LENGTH                       equ 0008h
TRISB_TRISB_MASK                         equ 00FFh

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
TRISC_TRISC6_POSN                        equ 0006h
TRISC_TRISC6_POSITION                    equ 0006h
TRISC_TRISC6_SIZE                        equ 0001h
TRISC_TRISC6_LENGTH                      equ 0001h
TRISC_TRISC6_MASK                        equ 0040h
TRISC_TRISC7_POSN                        equ 0007h
TRISC_TRISC7_POSITION                    equ 0007h
TRISC_TRISC7_SIZE                        equ 0001h
TRISC_TRISC7_LENGTH                      equ 0001h
TRISC_TRISC7_MASK                        equ 0080h
TRISC_TRISC_POSN                         equ 0000h
TRISC_TRISC_POSITION                     equ 0000h
TRISC_TRISC_SIZE                         equ 0008h
TRISC_TRISC_LENGTH                       equ 0008h
TRISC_TRISC_MASK                         equ 00FFh

// Register: TRISE
#define TRISE TRISE
TRISE                                    equ 0090h
// bitfield definitions
TRISE_TRISE3_POSN                        equ 0003h
TRISE_TRISE3_POSITION                    equ 0003h
TRISE_TRISE3_SIZE                        equ 0001h
TRISE_TRISE3_LENGTH                      equ 0001h
TRISE_TRISE3_MASK                        equ 0008h

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
PIE1_CCP1IE_POSN                         equ 0002h
PIE1_CCP1IE_POSITION                     equ 0002h
PIE1_CCP1IE_SIZE                         equ 0001h
PIE1_CCP1IE_LENGTH                       equ 0001h
PIE1_CCP1IE_MASK                         equ 0004h
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
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h
PIE2_C3IE_POSN                           equ 0001h
PIE2_C3IE_POSITION                       equ 0001h
PIE2_C3IE_SIZE                           equ 0001h
PIE2_C3IE_LENGTH                         equ 0001h
PIE2_C3IE_MASK                           equ 0002h
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h
PIE2_EEIE_POSN                           equ 0004h
PIE2_EEIE_POSITION                       equ 0004h
PIE2_EEIE_SIZE                           equ 0001h
PIE2_EEIE_LENGTH                         equ 0001h
PIE2_EEIE_MASK                           equ 0010h
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
PIE2_OSFIE_POSN                          equ 0007h
PIE2_OSFIE_POSITION                      equ 0007h
PIE2_OSFIE_SIZE                          equ 0001h
PIE2_OSFIE_LENGTH                        equ 0001h
PIE2_OSFIE_MASK                          equ 0080h

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 0094h
// bitfield definitions
PIE4_PSMC1SIE_POSN                       equ 0000h
PIE4_PSMC1SIE_POSITION                   equ 0000h
PIE4_PSMC1SIE_SIZE                       equ 0001h
PIE4_PSMC1SIE_LENGTH                     equ 0001h
PIE4_PSMC1SIE_MASK                       equ 0001h
PIE4_PSMC2SIE_POSN                       equ 0001h
PIE4_PSMC2SIE_POSITION                   equ 0001h
PIE4_PSMC2SIE_SIZE                       equ 0001h
PIE4_PSMC2SIE_LENGTH                     equ 0001h
PIE4_PSMC2SIE_MASK                       equ 0002h
PIE4_PSMC1TIE_POSN                       equ 0004h
PIE4_PSMC1TIE_POSITION                   equ 0004h
PIE4_PSMC1TIE_SIZE                       equ 0001h
PIE4_PSMC1TIE_LENGTH                     equ 0001h
PIE4_PSMC1TIE_MASK                       equ 0010h
PIE4_PSMC2TIE_POSN                       equ 0005h
PIE4_PSMC2TIE_POSITION                   equ 0005h
PIE4_PSMC2TIE_SIZE                       equ 0001h
PIE4_PSMC2TIE_LENGTH                     equ 0001h
PIE4_PSMC2TIE_MASK                       equ 0020h

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
OPTION_REG                               equ 0095h
// bitfield definitions
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
OPTION_REG_PS_POSN                       equ 0000h
OPTION_REG_PS_POSITION                   equ 0000h
OPTION_REG_PS_SIZE                       equ 0003h
OPTION_REG_PS_LENGTH                     equ 0003h
OPTION_REG_PS_MASK                       equ 0007h
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
WDTCON_WDTPS_POSN                        equ 0001h
WDTCON_WDTPS_POSITION                    equ 0001h
WDTCON_WDTPS_SIZE                        equ 0005h
WDTCON_WDTPS_LENGTH                      equ 0005h
WDTCON_WDTPS_MASK                        equ 003Eh

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0098h
// bitfield definitions
OSCTUNE_TUN0_POSN                        equ 0000h
OSCTUNE_TUN0_POSITION                    equ 0000h
OSCTUNE_TUN0_SIZE                        equ 0001h
OSCTUNE_TUN0_LENGTH                      equ 0001h
OSCTUNE_TUN0_MASK                        equ 0001h
OSCTUNE_TUN1_POSN                        equ 0001h
OSCTUNE_TUN1_POSITION                    equ 0001h
OSCTUNE_TUN1_SIZE                        equ 0001h
OSCTUNE_TUN1_LENGTH                      equ 0001h
OSCTUNE_TUN1_MASK                        equ 0002h
OSCTUNE_TUN2_POSN                        equ 0002h
OSCTUNE_TUN2_POSITION                    equ 0002h
OSCTUNE_TUN2_SIZE                        equ 0001h
OSCTUNE_TUN2_LENGTH                      equ 0001h
OSCTUNE_TUN2_MASK                        equ 0004h
OSCTUNE_TUN3_POSN                        equ 0003h
OSCTUNE_TUN3_POSITION                    equ 0003h
OSCTUNE_TUN3_SIZE                        equ 0001h
OSCTUNE_TUN3_LENGTH                      equ 0001h
OSCTUNE_TUN3_MASK                        equ 0008h
OSCTUNE_TUN4_POSN                        equ 0004h
OSCTUNE_TUN4_POSITION                    equ 0004h
OSCTUNE_TUN4_SIZE                        equ 0001h
OSCTUNE_TUN4_LENGTH                      equ 0001h
OSCTUNE_TUN4_MASK                        equ 0010h
OSCTUNE_TUN5_POSN                        equ 0005h
OSCTUNE_TUN5_POSITION                    equ 0005h
OSCTUNE_TUN5_SIZE                        equ 0001h
OSCTUNE_TUN5_LENGTH                      equ 0001h
OSCTUNE_TUN5_MASK                        equ 0020h
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0006h
OSCTUNE_TUN_LENGTH                       equ 0006h
OSCTUNE_TUN_MASK                         equ 003Fh

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0099h
// bitfield definitions
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
OSCCON_SPLLEN_POSN                       equ 0007h
OSCCON_SPLLEN_POSITION                   equ 0007h
OSCCON_SPLLEN_SIZE                       equ 0001h
OSCCON_SPLLEN_LENGTH                     equ 0001h
OSCCON_SPLLEN_MASK                       equ 0080h
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
OSCSTAT_MFIOFR_POSN                      equ 0002h
OSCSTAT_MFIOFR_POSITION                  equ 0002h
OSCSTAT_MFIOFR_SIZE                      equ 0001h
OSCSTAT_MFIOFR_LENGTH                    equ 0001h
OSCSTAT_MFIOFR_MASK                      equ 0004h
OSCSTAT_HFIOFL_POSN                      equ 0003h
OSCSTAT_HFIOFL_POSITION                  equ 0003h
OSCSTAT_HFIOFL_SIZE                      equ 0001h
OSCSTAT_HFIOFL_LENGTH                    equ 0001h
OSCSTAT_HFIOFL_MASK                      equ 0008h
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
OSCSTAT_T1OSCR_POSN                      equ 0007h
OSCSTAT_T1OSCR_POSITION                  equ 0007h
OSCSTAT_T1OSCR_SIZE                      equ 0001h
OSCSTAT_T1OSCR_LENGTH                    equ 0001h
OSCSTAT_T1OSCR_MASK                      equ 0080h

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
ADCON0_ADRMD_POSN                        equ 0007h
ADCON0_ADRMD_POSITION                    equ 0007h
ADCON0_ADRMD_SIZE                        equ 0001h
ADCON0_ADRMD_LENGTH                      equ 0001h
ADCON0_ADRMD_MASK                        equ 0080h
ADCON0_ADGO_POSN                         equ 0001h
ADCON0_ADGO_POSITION                     equ 0001h
ADCON0_ADGO_SIZE                         equ 0001h
ADCON0_ADGO_LENGTH                       equ 0001h
ADCON0_ADGO_MASK                         equ 0002h
ADCON0_CHS_POSN                          equ 0002h
ADCON0_CHS_POSITION                      equ 0002h
ADCON0_CHS_SIZE                          equ 0005h
ADCON0_CHS_LENGTH                        equ 0005h
ADCON0_CHS_MASK                          equ 007Ch
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h
ADCON0_DONE_POSN                         equ 0001h
ADCON0_DONE_POSITION                     equ 0001h
ADCON0_DONE_SIZE                         equ 0001h
ADCON0_DONE_LENGTH                       equ 0001h
ADCON0_DONE_MASK                         equ 0002h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Eh
// bitfield definitions
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
ADCON1_ADNREF_POSN                       equ 0002h
ADCON1_ADNREF_POSITION                   equ 0002h
ADCON1_ADNREF_SIZE                       equ 0001h
ADCON1_ADNREF_LENGTH                     equ 0001h
ADCON1_ADNREF_MASK                       equ 0004h
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
ADCON1_ADFM_POSN                         equ 0007h
ADCON1_ADFM_POSITION                     equ 0007h
ADCON1_ADFM_SIZE                         equ 0001h
ADCON1_ADFM_LENGTH                       equ 0001h
ADCON1_ADFM_MASK                         equ 0080h
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

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 009Fh
// bitfield definitions
ADCON2_CHSN0_POSN                        equ 0000h
ADCON2_CHSN0_POSITION                    equ 0000h
ADCON2_CHSN0_SIZE                        equ 0001h
ADCON2_CHSN0_LENGTH                      equ 0001h
ADCON2_CHSN0_MASK                        equ 0001h
ADCON2_CHSN1_POSN                        equ 0001h
ADCON2_CHSN1_POSITION                    equ 0001h
ADCON2_CHSN1_SIZE                        equ 0001h
ADCON2_CHSN1_LENGTH                      equ 0001h
ADCON2_CHSN1_MASK                        equ 0002h
ADCON2_CHSN2_POSN                        equ 0002h
ADCON2_CHSN2_POSITION                    equ 0002h
ADCON2_CHSN2_SIZE                        equ 0001h
ADCON2_CHSN2_LENGTH                      equ 0001h
ADCON2_CHSN2_MASK                        equ 0004h
ADCON2_CHSN3_POSN                        equ 0003h
ADCON2_CHSN3_POSITION                    equ 0003h
ADCON2_CHSN3_SIZE                        equ 0001h
ADCON2_CHSN3_LENGTH                      equ 0001h
ADCON2_CHSN3_MASK                        equ 0008h
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
ADCON2_TRIGSEL3_POSN                     equ 0007h
ADCON2_TRIGSEL3_POSITION                 equ 0007h
ADCON2_TRIGSEL3_SIZE                     equ 0001h
ADCON2_TRIGSEL3_LENGTH                   equ 0001h
ADCON2_TRIGSEL3_MASK                     equ 0080h
ADCON2_CHSN_POSN                         equ 0000h
ADCON2_CHSN_POSITION                     equ 0000h
ADCON2_CHSN_SIZE                         equ 0004h
ADCON2_CHSN_LENGTH                       equ 0004h
ADCON2_CHSN_MASK                         equ 000Fh
ADCON2_TRIGSEL_POSN                      equ 0004h
ADCON2_TRIGSEL_POSITION                  equ 0004h
ADCON2_TRIGSEL_SIZE                      equ 0004h
ADCON2_TRIGSEL_LENGTH                    equ 0004h
ADCON2_TRIGSEL_MASK                      equ 00F0h

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
LATA_LATA3_POSN                          equ 0003h
LATA_LATA3_POSITION                      equ 0003h
LATA_LATA3_SIZE                          equ 0001h
LATA_LATA3_LENGTH                        equ 0001h
LATA_LATA3_MASK                          equ 0008h
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
LATA_LATA6_POSN                          equ 0006h
LATA_LATA6_POSITION                      equ 0006h
LATA_LATA6_SIZE                          equ 0001h
LATA_LATA6_LENGTH                        equ 0001h
LATA_LATA6_MASK                          equ 0040h
LATA_LATA7_POSN                          equ 0007h
LATA_LATA7_POSITION                      equ 0007h
LATA_LATA7_SIZE                          equ 0001h
LATA_LATA7_LENGTH                        equ 0001h
LATA_LATA7_MASK                          equ 0080h
LATA_LATA_POSN                           equ 0000h
LATA_LATA_POSITION                       equ 0000h
LATA_LATA_SIZE                           equ 0008h
LATA_LATA_LENGTH                         equ 0008h
LATA_LATA_MASK                           equ 00FFh

// Register: LATB
#define LATB LATB
LATB                                     equ 010Dh
// bitfield definitions
LATB_LATB0_POSN                          equ 0000h
LATB_LATB0_POSITION                      equ 0000h
LATB_LATB0_SIZE                          equ 0001h
LATB_LATB0_LENGTH                        equ 0001h
LATB_LATB0_MASK                          equ 0001h
LATB_LATB1_POSN                          equ 0001h
LATB_LATB1_POSITION                      equ 0001h
LATB_LATB1_SIZE                          equ 0001h
LATB_LATB1_LENGTH                        equ 0001h
LATB_LATB1_MASK                          equ 0002h
LATB_LATB2_POSN                          equ 0002h
LATB_LATB2_POSITION                      equ 0002h
LATB_LATB2_SIZE                          equ 0001h
LATB_LATB2_LENGTH                        equ 0001h
LATB_LATB2_MASK                          equ 0004h
LATB_LATB3_POSN                          equ 0003h
LATB_LATB3_POSITION                      equ 0003h
LATB_LATB3_SIZE                          equ 0001h
LATB_LATB3_LENGTH                        equ 0001h
LATB_LATB3_MASK                          equ 0008h
LATB_LATB4_POSN                          equ 0004h
LATB_LATB4_POSITION                      equ 0004h
LATB_LATB4_SIZE                          equ 0001h
LATB_LATB4_LENGTH                        equ 0001h
LATB_LATB4_MASK                          equ 0010h
LATB_LATB5_POSN                          equ 0005h
LATB_LATB5_POSITION                      equ 0005h
LATB_LATB5_SIZE                          equ 0001h
LATB_LATB5_LENGTH                        equ 0001h
LATB_LATB5_MASK                          equ 0020h
LATB_LATB6_POSN                          equ 0006h
LATB_LATB6_POSITION                      equ 0006h
LATB_LATB6_SIZE                          equ 0001h
LATB_LATB6_LENGTH                        equ 0001h
LATB_LATB6_MASK                          equ 0040h
LATB_LATB7_POSN                          equ 0007h
LATB_LATB7_POSITION                      equ 0007h
LATB_LATB7_SIZE                          equ 0001h
LATB_LATB7_LENGTH                        equ 0001h
LATB_LATB7_MASK                          equ 0080h
LATB_LATB_POSN                           equ 0000h
LATB_LATB_POSITION                       equ 0000h
LATB_LATB_SIZE                           equ 0008h
LATB_LATB_LENGTH                         equ 0008h
LATB_LATB_MASK                           equ 00FFh

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
LATC_LATC6_POSN                          equ 0006h
LATC_LATC6_POSITION                      equ 0006h
LATC_LATC6_SIZE                          equ 0001h
LATC_LATC6_LENGTH                        equ 0001h
LATC_LATC6_MASK                          equ 0040h
LATC_LATC7_POSN                          equ 0007h
LATC_LATC7_POSITION                      equ 0007h
LATC_LATC7_SIZE                          equ 0001h
LATC_LATC7_LENGTH                        equ 0001h
LATC_LATC7_MASK                          equ 0080h
LATC_LATC_POSN                           equ 0000h
LATC_LATC_POSITION                       equ 0000h
LATC_LATC_SIZE                           equ 0008h
LATC_LATC_LENGTH                         equ 0008h
LATC_LATC_MASK                           equ 00FFh

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
CM1CON0_C1ZLF_POSN                       equ 0003h
CM1CON0_C1ZLF_POSITION                   equ 0003h
CM1CON0_C1ZLF_SIZE                       equ 0001h
CM1CON0_C1ZLF_LENGTH                     equ 0001h
CM1CON0_C1ZLF_MASK                       equ 0008h
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

// Register: CM1CON1
#define CM1CON1 CM1CON1
CM1CON1                                  equ 0112h
// bitfield definitions
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
CM2CON0_C2ZLF_POSN                       equ 0003h
CM2CON0_C2ZLF_POSITION                   equ 0003h
CM2CON0_C2ZLF_SIZE                       equ 0001h
CM2CON0_C2ZLF_LENGTH                     equ 0001h
CM2CON0_C2ZLF_MASK                       equ 0008h
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

// Register: CM2CON1
#define CM2CON1 CM2CON1
CM2CON1                                  equ 0114h
// bitfield definitions
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
CMOUT_MC3OUT_POSN                        equ 0002h
CMOUT_MC3OUT_POSITION                    equ 0002h
CMOUT_MC3OUT_SIZE                        equ 0001h
CMOUT_MC3OUT_LENGTH                      equ 0001h
CMOUT_MC3OUT_MASK                        equ 0004h

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
FVRCON_CDAFVR_POSN                       equ 0002h
FVRCON_CDAFVR_POSITION                   equ 0002h
FVRCON_CDAFVR_SIZE                       equ 0002h
FVRCON_CDAFVR_LENGTH                     equ 0002h
FVRCON_CDAFVR_MASK                       equ 000Ch

// Register: DACCON0
#define DACCON0 DACCON0
DACCON0                                  equ 0118h
// bitfield definitions
DACCON0_DACNSS_POSN                      equ 0000h
DACCON0_DACNSS_POSITION                  equ 0000h
DACCON0_DACNSS_SIZE                      equ 0001h
DACCON0_DACNSS_LENGTH                    equ 0001h
DACCON0_DACNSS_MASK                      equ 0001h
DACCON0_DACPSS0_POSN                     equ 0002h
DACCON0_DACPSS0_POSITION                 equ 0002h
DACCON0_DACPSS0_SIZE                     equ 0001h
DACCON0_DACPSS0_LENGTH                   equ 0001h
DACCON0_DACPSS0_MASK                     equ 0004h
DACCON0_DACPSS1_POSN                     equ 0003h
DACCON0_DACPSS1_POSITION                 equ 0003h
DACCON0_DACPSS1_SIZE                     equ 0001h
DACCON0_DACPSS1_LENGTH                   equ 0001h
DACCON0_DACPSS1_MASK                     equ 0008h
DACCON0_DACOE2_POSN                      equ 0004h
DACCON0_DACOE2_POSITION                  equ 0004h
DACCON0_DACOE2_SIZE                      equ 0001h
DACCON0_DACOE2_LENGTH                    equ 0001h
DACCON0_DACOE2_MASK                      equ 0010h
DACCON0_DACOE1_POSN                      equ 0005h
DACCON0_DACOE1_POSITION                  equ 0005h
DACCON0_DACOE1_SIZE                      equ 0001h
DACCON0_DACOE1_LENGTH                    equ 0001h
DACCON0_DACOE1_MASK                      equ 0020h
DACCON0_DACEN_POSN                       equ 0007h
DACCON0_DACEN_POSITION                   equ 0007h
DACCON0_DACEN_SIZE                       equ 0001h
DACCON0_DACEN_LENGTH                     equ 0001h
DACCON0_DACEN_MASK                       equ 0080h
DACCON0_DACPSS_POSN                      equ 0002h
DACCON0_DACPSS_POSITION                  equ 0002h
DACCON0_DACPSS_SIZE                      equ 0002h
DACCON0_DACPSS_LENGTH                    equ 0002h
DACCON0_DACPSS_MASK                      equ 000Ch

// Register: DACCON1
#define DACCON1 DACCON1
DACCON1                                  equ 0119h
// bitfield definitions
DACCON1_DACR0_POSN                       equ 0000h
DACCON1_DACR0_POSITION                   equ 0000h
DACCON1_DACR0_SIZE                       equ 0001h
DACCON1_DACR0_LENGTH                     equ 0001h
DACCON1_DACR0_MASK                       equ 0001h
DACCON1_DACR1_POSN                       equ 0001h
DACCON1_DACR1_POSITION                   equ 0001h
DACCON1_DACR1_SIZE                       equ 0001h
DACCON1_DACR1_LENGTH                     equ 0001h
DACCON1_DACR1_MASK                       equ 0002h
DACCON1_DACR2_POSN                       equ 0002h
DACCON1_DACR2_POSITION                   equ 0002h
DACCON1_DACR2_SIZE                       equ 0001h
DACCON1_DACR2_LENGTH                     equ 0001h
DACCON1_DACR2_MASK                       equ 0004h
DACCON1_DACR3_POSN                       equ 0003h
DACCON1_DACR3_POSITION                   equ 0003h
DACCON1_DACR3_SIZE                       equ 0001h
DACCON1_DACR3_LENGTH                     equ 0001h
DACCON1_DACR3_MASK                       equ 0008h
DACCON1_DACR4_POSN                       equ 0004h
DACCON1_DACR4_POSITION                   equ 0004h
DACCON1_DACR4_SIZE                       equ 0001h
DACCON1_DACR4_LENGTH                     equ 0001h
DACCON1_DACR4_MASK                       equ 0010h
DACCON1_DACR5_POSN                       equ 0005h
DACCON1_DACR5_POSITION                   equ 0005h
DACCON1_DACR5_SIZE                       equ 0001h
DACCON1_DACR5_LENGTH                     equ 0001h
DACCON1_DACR5_MASK                       equ 0020h
DACCON1_DACR6_POSN                       equ 0006h
DACCON1_DACR6_POSITION                   equ 0006h
DACCON1_DACR6_SIZE                       equ 0001h
DACCON1_DACR6_LENGTH                     equ 0001h
DACCON1_DACR6_MASK                       equ 0040h
DACCON1_DACR7_POSN                       equ 0007h
DACCON1_DACR7_POSITION                   equ 0007h
DACCON1_DACR7_SIZE                       equ 0001h
DACCON1_DACR7_LENGTH                     equ 0001h
DACCON1_DACR7_MASK                       equ 0080h
DACCON1_DACR_POSN                        equ 0000h
DACCON1_DACR_POSITION                    equ 0000h
DACCON1_DACR_SIZE                        equ 0008h
DACCON1_DACR_LENGTH                      equ 0008h
DACCON1_DACR_MASK                        equ 00FFh

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 011Dh
// bitfield definitions
APFCON_CCP2SEL_POSN                      equ 0000h
APFCON_CCP2SEL_POSITION                  equ 0000h
APFCON_CCP2SEL_SIZE                      equ 0001h
APFCON_CCP2SEL_LENGTH                    equ 0001h
APFCON_CCP2SEL_MASK                      equ 0001h
APFCON_RXSEL_POSN                        equ 0001h
APFCON_RXSEL_POSITION                    equ 0001h
APFCON_RXSEL_SIZE                        equ 0001h
APFCON_RXSEL_LENGTH                      equ 0001h
APFCON_RXSEL_MASK                        equ 0002h
APFCON_TXSEL_POSN                        equ 0002h
APFCON_TXSEL_POSITION                    equ 0002h
APFCON_TXSEL_SIZE                        equ 0001h
APFCON_TXSEL_LENGTH                      equ 0001h
APFCON_TXSEL_MASK                        equ 0004h
APFCON_SDISEL_POSN                       equ 0003h
APFCON_SDISEL_POSITION                   equ 0003h
APFCON_SDISEL_SIZE                       equ 0001h
APFCON_SDISEL_LENGTH                     equ 0001h
APFCON_SDISEL_MASK                       equ 0008h
APFCON_SCKSEL_POSN                       equ 0004h
APFCON_SCKSEL_POSITION                   equ 0004h
APFCON_SCKSEL_SIZE                       equ 0001h
APFCON_SCKSEL_LENGTH                     equ 0001h
APFCON_SCKSEL_MASK                       equ 0010h
APFCON_SDOSEL_POSN                       equ 0005h
APFCON_SDOSEL_POSITION                   equ 0005h
APFCON_SDOSEL_SIZE                       equ 0001h
APFCON_SDOSEL_LENGTH                     equ 0001h
APFCON_SDOSEL_MASK                       equ 0020h
APFCON_CCP1SEL_POSN                      equ 0006h
APFCON_CCP1SEL_POSITION                  equ 0006h
APFCON_CCP1SEL_SIZE                      equ 0001h
APFCON_CCP1SEL_LENGTH                    equ 0001h
APFCON_CCP1SEL_MASK                      equ 0040h
APFCON_C2OUTSEL_POSN                     equ 0007h
APFCON_C2OUTSEL_POSITION                 equ 0007h
APFCON_C2OUTSEL_SIZE                     equ 0001h
APFCON_C2OUTSEL_LENGTH                   equ 0001h
APFCON_C2OUTSEL_MASK                     equ 0080h

// Register: CM3CON0
#define CM3CON0 CM3CON0
CM3CON0                                  equ 011Eh
// bitfield definitions
CM3CON0_C3SYNC_POSN                      equ 0000h
CM3CON0_C3SYNC_POSITION                  equ 0000h
CM3CON0_C3SYNC_SIZE                      equ 0001h
CM3CON0_C3SYNC_LENGTH                    equ 0001h
CM3CON0_C3SYNC_MASK                      equ 0001h
CM3CON0_C3HYS_POSN                       equ 0001h
CM3CON0_C3HYS_POSITION                   equ 0001h
CM3CON0_C3HYS_SIZE                       equ 0001h
CM3CON0_C3HYS_LENGTH                     equ 0001h
CM3CON0_C3HYS_MASK                       equ 0002h
CM3CON0_C3SP_POSN                        equ 0002h
CM3CON0_C3SP_POSITION                    equ 0002h
CM3CON0_C3SP_SIZE                        equ 0001h
CM3CON0_C3SP_LENGTH                      equ 0001h
CM3CON0_C3SP_MASK                        equ 0004h
CM3CON0_C3ZLF_POSN                       equ 0003h
CM3CON0_C3ZLF_POSITION                   equ 0003h
CM3CON0_C3ZLF_SIZE                       equ 0001h
CM3CON0_C3ZLF_LENGTH                     equ 0001h
CM3CON0_C3ZLF_MASK                       equ 0008h
CM3CON0_C3POL_POSN                       equ 0004h
CM3CON0_C3POL_POSITION                   equ 0004h
CM3CON0_C3POL_SIZE                       equ 0001h
CM3CON0_C3POL_LENGTH                     equ 0001h
CM3CON0_C3POL_MASK                       equ 0010h
CM3CON0_C3OE_POSN                        equ 0005h
CM3CON0_C3OE_POSITION                    equ 0005h
CM3CON0_C3OE_SIZE                        equ 0001h
CM3CON0_C3OE_LENGTH                      equ 0001h
CM3CON0_C3OE_MASK                        equ 0020h
CM3CON0_C3OUT_POSN                       equ 0006h
CM3CON0_C3OUT_POSITION                   equ 0006h
CM3CON0_C3OUT_SIZE                       equ 0001h
CM3CON0_C3OUT_LENGTH                     equ 0001h
CM3CON0_C3OUT_MASK                       equ 0040h
CM3CON0_C3ON_POSN                        equ 0007h
CM3CON0_C3ON_POSITION                    equ 0007h
CM3CON0_C3ON_SIZE                        equ 0001h
CM3CON0_C3ON_LENGTH                      equ 0001h
CM3CON0_C3ON_MASK                        equ 0080h

// Register: CM3CON1
#define CM3CON1 CM3CON1
CM3CON1                                  equ 011Fh
// bitfield definitions
CM3CON1_C3NCH0_POSN                      equ 0000h
CM3CON1_C3NCH0_POSITION                  equ 0000h
CM3CON1_C3NCH0_SIZE                      equ 0001h
CM3CON1_C3NCH0_LENGTH                    equ 0001h
CM3CON1_C3NCH0_MASK                      equ 0001h
CM3CON1_C3NCH1_POSN                      equ 0001h
CM3CON1_C3NCH1_POSITION                  equ 0001h
CM3CON1_C3NCH1_SIZE                      equ 0001h
CM3CON1_C3NCH1_LENGTH                    equ 0001h
CM3CON1_C3NCH1_MASK                      equ 0002h
CM3CON1_C3NCH2_POSN                      equ 0002h
CM3CON1_C3NCH2_POSITION                  equ 0002h
CM3CON1_C3NCH2_SIZE                      equ 0001h
CM3CON1_C3NCH2_LENGTH                    equ 0001h
CM3CON1_C3NCH2_MASK                      equ 0004h
CM3CON1_C3PCH0_POSN                      equ 0003h
CM3CON1_C3PCH0_POSITION                  equ 0003h
CM3CON1_C3PCH0_SIZE                      equ 0001h
CM3CON1_C3PCH0_LENGTH                    equ 0001h
CM3CON1_C3PCH0_MASK                      equ 0008h
CM3CON1_C3PCH1_POSN                      equ 0004h
CM3CON1_C3PCH1_POSITION                  equ 0004h
CM3CON1_C3PCH1_SIZE                      equ 0001h
CM3CON1_C3PCH1_LENGTH                    equ 0001h
CM3CON1_C3PCH1_MASK                      equ 0010h
CM3CON1_C3PCH2_POSN                      equ 0005h
CM3CON1_C3PCH2_POSITION                  equ 0005h
CM3CON1_C3PCH2_SIZE                      equ 0001h
CM3CON1_C3PCH2_LENGTH                    equ 0001h
CM3CON1_C3PCH2_MASK                      equ 0020h
CM3CON1_C3INTN_POSN                      equ 0006h
CM3CON1_C3INTN_POSITION                  equ 0006h
CM3CON1_C3INTN_SIZE                      equ 0001h
CM3CON1_C3INTN_LENGTH                    equ 0001h
CM3CON1_C3INTN_MASK                      equ 0040h
CM3CON1_C3INTP_POSN                      equ 0007h
CM3CON1_C3INTP_POSITION                  equ 0007h
CM3CON1_C3INTP_SIZE                      equ 0001h
CM3CON1_C3INTP_LENGTH                    equ 0001h
CM3CON1_C3INTP_MASK                      equ 0080h
CM3CON1_C3NCH_POSN                       equ 0000h
CM3CON1_C3NCH_POSITION                   equ 0000h
CM3CON1_C3NCH_SIZE                       equ 0003h
CM3CON1_C3NCH_LENGTH                     equ 0003h
CM3CON1_C3NCH_MASK                       equ 0007h
CM3CON1_C3PCH_POSN                       equ 0003h
CM3CON1_C3PCH_POSITION                   equ 0003h
CM3CON1_C3PCH_SIZE                       equ 0003h
CM3CON1_C3PCH_LENGTH                     equ 0003h
CM3CON1_C3PCH_MASK                       equ 0038h

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
ANSELA_ANSA3_POSN                        equ 0003h
ANSELA_ANSA3_POSITION                    equ 0003h
ANSELA_ANSA3_SIZE                        equ 0001h
ANSELA_ANSA3_LENGTH                      equ 0001h
ANSELA_ANSA3_MASK                        equ 0008h
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
ANSELA_ANSA7_POSN                        equ 0007h
ANSELA_ANSA7_POSITION                    equ 0007h
ANSELA_ANSA7_SIZE                        equ 0001h
ANSELA_ANSA7_LENGTH                      equ 0001h
ANSELA_ANSA7_MASK                        equ 0080h
ANSELA_ANSELA_POSN                       equ 0000h
ANSELA_ANSELA_POSITION                   equ 0000h
ANSELA_ANSELA_SIZE                       equ 0008h
ANSELA_ANSELA_LENGTH                     equ 0008h
ANSELA_ANSELA_MASK                       equ 00FFh

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 018Dh
// bitfield definitions
ANSELB_ANSB0_POSN                        equ 0000h
ANSELB_ANSB0_POSITION                    equ 0000h
ANSELB_ANSB0_SIZE                        equ 0001h
ANSELB_ANSB0_LENGTH                      equ 0001h
ANSELB_ANSB0_MASK                        equ 0001h
ANSELB_ANSB1_POSN                        equ 0001h
ANSELB_ANSB1_POSITION                    equ 0001h
ANSELB_ANSB1_SIZE                        equ 0001h
ANSELB_ANSB1_LENGTH                      equ 0001h
ANSELB_ANSB1_MASK                        equ 0002h
ANSELB_ANSB2_POSN                        equ 0002h
ANSELB_ANSB2_POSITION                    equ 0002h
ANSELB_ANSB2_SIZE                        equ 0001h
ANSELB_ANSB2_LENGTH                      equ 0001h
ANSELB_ANSB2_MASK                        equ 0004h
ANSELB_ANSB3_POSN                        equ 0003h
ANSELB_ANSB3_POSITION                    equ 0003h
ANSELB_ANSB3_SIZE                        equ 0001h
ANSELB_ANSB3_LENGTH                      equ 0001h
ANSELB_ANSB3_MASK                        equ 0008h
ANSELB_ANSB4_POSN                        equ 0004h
ANSELB_ANSB4_POSITION                    equ 0004h
ANSELB_ANSB4_SIZE                        equ 0001h
ANSELB_ANSB4_LENGTH                      equ 0001h
ANSELB_ANSB4_MASK                        equ 0010h
ANSELB_ANSB5_POSN                        equ 0005h
ANSELB_ANSB5_POSITION                    equ 0005h
ANSELB_ANSB5_SIZE                        equ 0001h
ANSELB_ANSB5_LENGTH                      equ 0001h
ANSELB_ANSB5_MASK                        equ 0020h
ANSELB_ANSELB_POSN                       equ 0000h
ANSELB_ANSELB_POSITION                   equ 0000h
ANSELB_ANSELB_SIZE                       equ 0006h
ANSELB_ANSELB_LENGTH                     equ 0006h
ANSELB_ANSELB_MASK                       equ 003Fh

// Register: EEADRL
#define EEADRL EEADRL
EEADRL                                   equ 0191h
// bitfield definitions
EEADRL_EEADRL_POSN                       equ 0000h
EEADRL_EEADRL_POSITION                   equ 0000h
EEADRL_EEADRL_SIZE                       equ 0008h
EEADRL_EEADRL_LENGTH                     equ 0008h
EEADRL_EEADRL_MASK                       equ 00FFh

// Register: EEADRH
#define EEADRH EEADRH
EEADRH                                   equ 0192h
// bitfield definitions
EEADRH_EEADRH_POSN                       equ 0000h
EEADRH_EEADRH_POSITION                   equ 0000h
EEADRH_EEADRH_SIZE                       equ 0007h
EEADRH_EEADRH_LENGTH                     equ 0007h
EEADRH_EEADRH_MASK                       equ 007Fh

// Register: EEDATL
#define EEDATL EEDATL
EEDATL                                   equ 0193h
// bitfield definitions
EEDATL_EEDATL_POSN                       equ 0000h
EEDATL_EEDATL_POSITION                   equ 0000h
EEDATL_EEDATL_SIZE                       equ 0008h
EEDATL_EEDATL_LENGTH                     equ 0008h
EEDATL_EEDATL_MASK                       equ 00FFh

// Register: EEDATH
#define EEDATH EEDATH
EEDATH                                   equ 0194h
// bitfield definitions
EEDATH_EEDATH_POSN                       equ 0000h
EEDATH_EEDATH_POSITION                   equ 0000h
EEDATH_EEDATH_SIZE                       equ 0006h
EEDATH_EEDATH_LENGTH                     equ 0006h
EEDATH_EEDATH_MASK                       equ 003Fh

// Register: EECON1
#define EECON1 EECON1
EECON1                                   equ 0195h
// bitfield definitions
EECON1_RD_POSN                           equ 0000h
EECON1_RD_POSITION                       equ 0000h
EECON1_RD_SIZE                           equ 0001h
EECON1_RD_LENGTH                         equ 0001h
EECON1_RD_MASK                           equ 0001h
EECON1_WR_POSN                           equ 0001h
EECON1_WR_POSITION                       equ 0001h
EECON1_WR_SIZE                           equ 0001h
EECON1_WR_LENGTH                         equ 0001h
EECON1_WR_MASK                           equ 0002h
EECON1_WREN_POSN                         equ 0002h
EECON1_WREN_POSITION                     equ 0002h
EECON1_WREN_SIZE                         equ 0001h
EECON1_WREN_LENGTH                       equ 0001h
EECON1_WREN_MASK                         equ 0004h
EECON1_WRERR_POSN                        equ 0003h
EECON1_WRERR_POSITION                    equ 0003h
EECON1_WRERR_SIZE                        equ 0001h
EECON1_WRERR_LENGTH                      equ 0001h
EECON1_WRERR_MASK                        equ 0008h
EECON1_FREE_POSN                         equ 0004h
EECON1_FREE_POSITION                     equ 0004h
EECON1_FREE_SIZE                         equ 0001h
EECON1_FREE_LENGTH                       equ 0001h
EECON1_FREE_MASK                         equ 0010h
EECON1_LWLO_POSN                         equ 0005h
EECON1_LWLO_POSITION                     equ 0005h
EECON1_LWLO_SIZE                         equ 0001h
EECON1_LWLO_LENGTH                       equ 0001h
EECON1_LWLO_MASK                         equ 0020h
EECON1_CFGS_POSN                         equ 0006h
EECON1_CFGS_POSITION                     equ 0006h
EECON1_CFGS_SIZE                         equ 0001h
EECON1_CFGS_LENGTH                       equ 0001h
EECON1_CFGS_MASK                         equ 0040h
EECON1_EEPGD_POSN                        equ 0007h
EECON1_EEPGD_POSITION                    equ 0007h
EECON1_EEPGD_SIZE                        equ 0001h
EECON1_EEPGD_LENGTH                      equ 0001h
EECON1_EEPGD_MASK                        equ 0080h

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 0196h
// bitfield definitions
EECON2_EECON2_POSN                       equ 0000h
EECON2_EECON2_POSITION                   equ 0000h
EECON2_EECON2_SIZE                       equ 0008h
EECON2_EECON2_LENGTH                     equ 0008h
EECON2_EECON2_MASK                       equ 00FFh

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
WPUA_WPUA6_POSN                          equ 0006h
WPUA_WPUA6_POSITION                      equ 0006h
WPUA_WPUA6_SIZE                          equ 0001h
WPUA_WPUA6_LENGTH                        equ 0001h
WPUA_WPUA6_MASK                          equ 0040h
WPUA_WPUA7_POSN                          equ 0007h
WPUA_WPUA7_POSITION                      equ 0007h
WPUA_WPUA7_SIZE                          equ 0001h
WPUA_WPUA7_LENGTH                        equ 0001h
WPUA_WPUA7_MASK                          equ 0080h
WPUA_WPUA_POSN                           equ 0000h
WPUA_WPUA_POSITION                       equ 0000h
WPUA_WPUA_SIZE                           equ 0008h
WPUA_WPUA_LENGTH                         equ 0008h
WPUA_WPUA_MASK                           equ 00FFh

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 020Dh
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
WPUB_WPUB_POSN                           equ 0000h
WPUB_WPUB_POSITION                       equ 0000h
WPUB_WPUB_SIZE                           equ 0008h
WPUB_WPUB_LENGTH                         equ 0008h
WPUB_WPUB_MASK                           equ 00FFh

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
WPUC_WPUC6_POSN                          equ 0006h
WPUC_WPUC6_POSITION                      equ 0006h
WPUC_WPUC6_SIZE                          equ 0001h
WPUC_WPUC6_LENGTH                        equ 0001h
WPUC_WPUC6_MASK                          equ 0040h
WPUC_WPUC7_POSN                          equ 0007h
WPUC_WPUC7_POSITION                      equ 0007h
WPUC_WPUC7_SIZE                          equ 0001h
WPUC_WPUC7_LENGTH                        equ 0001h
WPUC_WPUC7_MASK                          equ 0080h
WPUC_WPUC_POSN                           equ 0000h
WPUC_WPUC_POSITION                       equ 0000h
WPUC_WPUC_SIZE                           equ 0008h
WPUC_WPUC_LENGTH                         equ 0008h
WPUC_WPUC_MASK                           equ 00FFh

// Register: WPUE
#define WPUE WPUE
WPUE                                     equ 0210h
// bitfield definitions
WPUE_WPUE3_POSN                          equ 0003h
WPUE_WPUE3_POSITION                      equ 0003h
WPUE_WPUE3_SIZE                          equ 0001h
WPUE_WPUE3_LENGTH                        equ 0001h
WPUE_WPUE3_MASK                          equ 0008h

// Register: SSPBUF
#define SSPBUF SSPBUF
SSPBUF                                   equ 0211h
// bitfield definitions
SSPBUF_SSPBUF_POSN                       equ 0000h
SSPBUF_SSPBUF_POSITION                   equ 0000h
SSPBUF_SSPBUF_SIZE                       equ 0008h
SSPBUF_SSPBUF_LENGTH                     equ 0008h
SSPBUF_SSPBUF_MASK                       equ 00FFh

// Register: SSPADD
#define SSPADD SSPADD
SSPADD                                   equ 0212h
// bitfield definitions
SSPADD_SSPADD_POSN                       equ 0000h
SSPADD_SSPADD_POSITION                   equ 0000h
SSPADD_SSPADD_SIZE                       equ 0008h
SSPADD_SSPADD_LENGTH                     equ 0008h
SSPADD_SSPADD_MASK                       equ 00FFh

// Register: SSPMSK
#define SSPMSK SSPMSK
SSPMSK                                   equ 0213h
// bitfield definitions
SSPMSK_SSPMSK_POSN                       equ 0000h
SSPMSK_SSPMSK_POSITION                   equ 0000h
SSPMSK_SSPMSK_SIZE                       equ 0008h
SSPMSK_SSPMSK_LENGTH                     equ 0008h
SSPMSK_SSPMSK_MASK                       equ 00FFh

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
SSPSTAT                                  equ 0214h
// bitfield definitions
SSPSTAT_BF_POSN                          equ 0000h
SSPSTAT_BF_POSITION                      equ 0000h
SSPSTAT_BF_SIZE                          equ 0001h
SSPSTAT_BF_LENGTH                        equ 0001h
SSPSTAT_BF_MASK                          equ 0001h
SSPSTAT_UA_POSN                          equ 0001h
SSPSTAT_UA_POSITION                      equ 0001h
SSPSTAT_UA_SIZE                          equ 0001h
SSPSTAT_UA_LENGTH                        equ 0001h
SSPSTAT_UA_MASK                          equ 0002h
SSPSTAT_R_nW_POSN                        equ 0002h
SSPSTAT_R_nW_POSITION                    equ 0002h
SSPSTAT_R_nW_SIZE                        equ 0001h
SSPSTAT_R_nW_LENGTH                      equ 0001h
SSPSTAT_R_nW_MASK                        equ 0004h
SSPSTAT_S_POSN                           equ 0003h
SSPSTAT_S_POSITION                       equ 0003h
SSPSTAT_S_SIZE                           equ 0001h
SSPSTAT_S_LENGTH                         equ 0001h
SSPSTAT_S_MASK                           equ 0008h
SSPSTAT_P_POSN                           equ 0004h
SSPSTAT_P_POSITION                       equ 0004h
SSPSTAT_P_SIZE                           equ 0001h
SSPSTAT_P_LENGTH                         equ 0001h
SSPSTAT_P_MASK                           equ 0010h
SSPSTAT_D_nA_POSN                        equ 0005h
SSPSTAT_D_nA_POSITION                    equ 0005h
SSPSTAT_D_nA_SIZE                        equ 0001h
SSPSTAT_D_nA_LENGTH                      equ 0001h
SSPSTAT_D_nA_MASK                        equ 0020h
SSPSTAT_CKE_POSN                         equ 0006h
SSPSTAT_CKE_POSITION                     equ 0006h
SSPSTAT_CKE_SIZE                         equ 0001h
SSPSTAT_CKE_LENGTH                       equ 0001h
SSPSTAT_CKE_MASK                         equ 0040h
SSPSTAT_SMP_POSN                         equ 0007h
SSPSTAT_SMP_POSITION                     equ 0007h
SSPSTAT_SMP_SIZE                         equ 0001h
SSPSTAT_SMP_LENGTH                       equ 0001h
SSPSTAT_SMP_MASK                         equ 0080h

// Register: SSPCON1
#define SSPCON1 SSPCON1
SSPCON1                                  equ 0215h
// bitfield definitions
SSPCON1_SSPM0_POSN                       equ 0000h
SSPCON1_SSPM0_POSITION                   equ 0000h
SSPCON1_SSPM0_SIZE                       equ 0001h
SSPCON1_SSPM0_LENGTH                     equ 0001h
SSPCON1_SSPM0_MASK                       equ 0001h
SSPCON1_SSPM1_POSN                       equ 0001h
SSPCON1_SSPM1_POSITION                   equ 0001h
SSPCON1_SSPM1_SIZE                       equ 0001h
SSPCON1_SSPM1_LENGTH                     equ 0001h
SSPCON1_SSPM1_MASK                       equ 0002h
SSPCON1_SSPM2_POSN                       equ 0002h
SSPCON1_SSPM2_POSITION                   equ 0002h
SSPCON1_SSPM2_SIZE                       equ 0001h
SSPCON1_SSPM2_LENGTH                     equ 0001h
SSPCON1_SSPM2_MASK                       equ 0004h
SSPCON1_SSPM3_POSN                       equ 0003h
SSPCON1_SSPM3_POSITION                   equ 0003h
SSPCON1_SSPM3_SIZE                       equ 0001h
SSPCON1_SSPM3_LENGTH                     equ 0001h
SSPCON1_SSPM3_MASK                       equ 0008h
SSPCON1_CKP_POSN                         equ 0004h
SSPCON1_CKP_POSITION                     equ 0004h
SSPCON1_CKP_SIZE                         equ 0001h
SSPCON1_CKP_LENGTH                       equ 0001h
SSPCON1_CKP_MASK                         equ 0010h
SSPCON1_SSPEN_POSN                       equ 0005h
SSPCON1_SSPEN_POSITION                   equ 0005h
SSPCON1_SSPEN_SIZE                       equ 0001h
SSPCON1_SSPEN_LENGTH                     equ 0001h
SSPCON1_SSPEN_MASK                       equ 0020h
SSPCON1_SSPOV_POSN                       equ 0006h
SSPCON1_SSPOV_POSITION                   equ 0006h
SSPCON1_SSPOV_SIZE                       equ 0001h
SSPCON1_SSPOV_LENGTH                     equ 0001h
SSPCON1_SSPOV_MASK                       equ 0040h
SSPCON1_WCOL_POSN                        equ 0007h
SSPCON1_WCOL_POSITION                    equ 0007h
SSPCON1_WCOL_SIZE                        equ 0001h
SSPCON1_WCOL_LENGTH                      equ 0001h
SSPCON1_WCOL_MASK                        equ 0080h
SSPCON1_SSPM_POSN                        equ 0000h
SSPCON1_SSPM_POSITION                    equ 0000h
SSPCON1_SSPM_SIZE                        equ 0004h
SSPCON1_SSPM_LENGTH                      equ 0004h
SSPCON1_SSPM_MASK                        equ 000Fh

// Register: SSPCON2
#define SSPCON2 SSPCON2
SSPCON2                                  equ 0216h
// bitfield definitions
SSPCON2_SEN_POSN                         equ 0000h
SSPCON2_SEN_POSITION                     equ 0000h
SSPCON2_SEN_SIZE                         equ 0001h
SSPCON2_SEN_LENGTH                       equ 0001h
SSPCON2_SEN_MASK                         equ 0001h
SSPCON2_RSEN_POSN                        equ 0001h
SSPCON2_RSEN_POSITION                    equ 0001h
SSPCON2_RSEN_SIZE                        equ 0001h
SSPCON2_RSEN_LENGTH                      equ 0001h
SSPCON2_RSEN_MASK                        equ 0002h
SSPCON2_PEN_POSN                         equ 0002h
SSPCON2_PEN_POSITION                     equ 0002h
SSPCON2_PEN_SIZE                         equ 0001h
SSPCON2_PEN_LENGTH                       equ 0001h
SSPCON2_PEN_MASK                         equ 0004h
SSPCON2_RCEN_POSN                        equ 0003h
SSPCON2_RCEN_POSITION                    equ 0003h
SSPCON2_RCEN_SIZE                        equ 0001h
SSPCON2_RCEN_LENGTH                      equ 0001h
SSPCON2_RCEN_MASK                        equ 0008h
SSPCON2_ACKEN_POSN                       equ 0004h
SSPCON2_ACKEN_POSITION                   equ 0004h
SSPCON2_ACKEN_SIZE                       equ 0001h
SSPCON2_ACKEN_LENGTH                     equ 0001h
SSPCON2_ACKEN_MASK                       equ 0010h
SSPCON2_ACKDT_POSN                       equ 0005h
SSPCON2_ACKDT_POSITION                   equ 0005h
SSPCON2_ACKDT_SIZE                       equ 0001h
SSPCON2_ACKDT_LENGTH                     equ 0001h
SSPCON2_ACKDT_MASK                       equ 0020h
SSPCON2_ACKSTAT_POSN                     equ 0006h
SSPCON2_ACKSTAT_POSITION                 equ 0006h
SSPCON2_ACKSTAT_SIZE                     equ 0001h
SSPCON2_ACKSTAT_LENGTH                   equ 0001h
SSPCON2_ACKSTAT_MASK                     equ 0040h
SSPCON2_GCEN_POSN                        equ 0007h
SSPCON2_GCEN_POSITION                    equ 0007h
SSPCON2_GCEN_SIZE                        equ 0001h
SSPCON2_GCEN_LENGTH                      equ 0001h
SSPCON2_GCEN_MASK                        equ 0080h

// Register: SSPCON3
#define SSPCON3 SSPCON3
SSPCON3                                  equ 0217h
// bitfield definitions
SSPCON3_DHEN_POSN                        equ 0000h
SSPCON3_DHEN_POSITION                    equ 0000h
SSPCON3_DHEN_SIZE                        equ 0001h
SSPCON3_DHEN_LENGTH                      equ 0001h
SSPCON3_DHEN_MASK                        equ 0001h
SSPCON3_AHEN_POSN                        equ 0001h
SSPCON3_AHEN_POSITION                    equ 0001h
SSPCON3_AHEN_SIZE                        equ 0001h
SSPCON3_AHEN_LENGTH                      equ 0001h
SSPCON3_AHEN_MASK                        equ 0002h
SSPCON3_SBCDE_POSN                       equ 0002h
SSPCON3_SBCDE_POSITION                   equ 0002h
SSPCON3_SBCDE_SIZE                       equ 0001h
SSPCON3_SBCDE_LENGTH                     equ 0001h
SSPCON3_SBCDE_MASK                       equ 0004h
SSPCON3_SDAHT_POSN                       equ 0003h
SSPCON3_SDAHT_POSITION                   equ 0003h
SSPCON3_SDAHT_SIZE                       equ 0001h
SSPCON3_SDAHT_LENGTH                     equ 0001h
SSPCON3_SDAHT_MASK                       equ 0008h
SSPCON3_BOEN_POSN                        equ 0004h
SSPCON3_BOEN_POSITION                    equ 0004h
SSPCON3_BOEN_SIZE                        equ 0001h
SSPCON3_BOEN_LENGTH                      equ 0001h
SSPCON3_BOEN_MASK                        equ 0010h
SSPCON3_SCIE_POSN                        equ 0005h
SSPCON3_SCIE_POSITION                    equ 0005h
SSPCON3_SCIE_SIZE                        equ 0001h
SSPCON3_SCIE_LENGTH                      equ 0001h
SSPCON3_SCIE_MASK                        equ 0020h
SSPCON3_PCIE_POSN                        equ 0006h
SSPCON3_PCIE_POSITION                    equ 0006h
SSPCON3_PCIE_SIZE                        equ 0001h
SSPCON3_PCIE_LENGTH                      equ 0001h
SSPCON3_PCIE_MASK                        equ 0040h
SSPCON3_ACKTIM_POSN                      equ 0007h
SSPCON3_ACKTIM_POSITION                  equ 0007h
SSPCON3_ACKTIM_SIZE                      equ 0001h
SSPCON3_ACKTIM_LENGTH                    equ 0001h
SSPCON3_ACKTIM_MASK                      equ 0080h

// Register: ODCONA
#define ODCONA ODCONA
ODCONA                                   equ 028Ch
// bitfield definitions
ODCONA_ODCONA0_POSN                      equ 0000h
ODCONA_ODCONA0_POSITION                  equ 0000h
ODCONA_ODCONA0_SIZE                      equ 0001h
ODCONA_ODCONA0_LENGTH                    equ 0001h
ODCONA_ODCONA0_MASK                      equ 0001h
ODCONA_ODCONA1_POSN                      equ 0001h
ODCONA_ODCONA1_POSITION                  equ 0001h
ODCONA_ODCONA1_SIZE                      equ 0001h
ODCONA_ODCONA1_LENGTH                    equ 0001h
ODCONA_ODCONA1_MASK                      equ 0002h
ODCONA_ODCONA2_POSN                      equ 0002h
ODCONA_ODCONA2_POSITION                  equ 0002h
ODCONA_ODCONA2_SIZE                      equ 0001h
ODCONA_ODCONA2_LENGTH                    equ 0001h
ODCONA_ODCONA2_MASK                      equ 0004h
ODCONA_ODCONA3_POSN                      equ 0003h
ODCONA_ODCONA3_POSITION                  equ 0003h
ODCONA_ODCONA3_SIZE                      equ 0001h
ODCONA_ODCONA3_LENGTH                    equ 0001h
ODCONA_ODCONA3_MASK                      equ 0008h
ODCONA_ODCONA4_POSN                      equ 0004h
ODCONA_ODCONA4_POSITION                  equ 0004h
ODCONA_ODCONA4_SIZE                      equ 0001h
ODCONA_ODCONA4_LENGTH                    equ 0001h
ODCONA_ODCONA4_MASK                      equ 0010h
ODCONA_ODCONA5_POSN                      equ 0005h
ODCONA_ODCONA5_POSITION                  equ 0005h
ODCONA_ODCONA5_SIZE                      equ 0001h
ODCONA_ODCONA5_LENGTH                    equ 0001h
ODCONA_ODCONA5_MASK                      equ 0020h
ODCONA_ODCONA6_POSN                      equ 0006h
ODCONA_ODCONA6_POSITION                  equ 0006h
ODCONA_ODCONA6_SIZE                      equ 0001h
ODCONA_ODCONA6_LENGTH                    equ 0001h
ODCONA_ODCONA6_MASK                      equ 0040h
ODCONA_ODCONA7_POSN                      equ 0007h
ODCONA_ODCONA7_POSITION                  equ 0007h
ODCONA_ODCONA7_SIZE                      equ 0001h
ODCONA_ODCONA7_LENGTH                    equ 0001h
ODCONA_ODCONA7_MASK                      equ 0080h
ODCONA_ODCONA_POSN                       equ 0000h
ODCONA_ODCONA_POSITION                   equ 0000h
ODCONA_ODCONA_SIZE                       equ 0008h
ODCONA_ODCONA_LENGTH                     equ 0008h
ODCONA_ODCONA_MASK                       equ 00FFh

// Register: ODCONB
#define ODCONB ODCONB
ODCONB                                   equ 028Dh
// bitfield definitions
ODCONB_ODCONB0_POSN                      equ 0000h
ODCONB_ODCONB0_POSITION                  equ 0000h
ODCONB_ODCONB0_SIZE                      equ 0001h
ODCONB_ODCONB0_LENGTH                    equ 0001h
ODCONB_ODCONB0_MASK                      equ 0001h
ODCONB_ODCONB1_POSN                      equ 0001h
ODCONB_ODCONB1_POSITION                  equ 0001h
ODCONB_ODCONB1_SIZE                      equ 0001h
ODCONB_ODCONB1_LENGTH                    equ 0001h
ODCONB_ODCONB1_MASK                      equ 0002h
ODCONB_ODCONB2_POSN                      equ 0002h
ODCONB_ODCONB2_POSITION                  equ 0002h
ODCONB_ODCONB2_SIZE                      equ 0001h
ODCONB_ODCONB2_LENGTH                    equ 0001h
ODCONB_ODCONB2_MASK                      equ 0004h
ODCONB_ODCONB3_POSN                      equ 0003h
ODCONB_ODCONB3_POSITION                  equ 0003h
ODCONB_ODCONB3_SIZE                      equ 0001h
ODCONB_ODCONB3_LENGTH                    equ 0001h
ODCONB_ODCONB3_MASK                      equ 0008h
ODCONB_ODCONB4_POSN                      equ 0004h
ODCONB_ODCONB4_POSITION                  equ 0004h
ODCONB_ODCONB4_SIZE                      equ 0001h
ODCONB_ODCONB4_LENGTH                    equ 0001h
ODCONB_ODCONB4_MASK                      equ 0010h
ODCONB_ODCONB5_POSN                      equ 0005h
ODCONB_ODCONB5_POSITION                  equ 0005h
ODCONB_ODCONB5_SIZE                      equ 0001h
ODCONB_ODCONB5_LENGTH                    equ 0001h
ODCONB_ODCONB5_MASK                      equ 0020h
ODCONB_ODCONB6_POSN                      equ 0006h
ODCONB_ODCONB6_POSITION                  equ 0006h
ODCONB_ODCONB6_SIZE                      equ 0001h
ODCONB_ODCONB6_LENGTH                    equ 0001h
ODCONB_ODCONB6_MASK                      equ 0040h
ODCONB_ODCONB7_POSN                      equ 0007h
ODCONB_ODCONB7_POSITION                  equ 0007h
ODCONB_ODCONB7_SIZE                      equ 0001h
ODCONB_ODCONB7_LENGTH                    equ 0001h
ODCONB_ODCONB7_MASK                      equ 0080h
ODCONB_ODCONB_POSN                       equ 0000h
ODCONB_ODCONB_POSITION                   equ 0000h
ODCONB_ODCONB_SIZE                       equ 0008h
ODCONB_ODCONB_LENGTH                     equ 0008h
ODCONB_ODCONB_MASK                       equ 00FFh

// Register: ODCONC
#define ODCONC ODCONC
ODCONC                                   equ 028Eh
// bitfield definitions
ODCONC_ODCONC0_POSN                      equ 0000h
ODCONC_ODCONC0_POSITION                  equ 0000h
ODCONC_ODCONC0_SIZE                      equ 0001h
ODCONC_ODCONC0_LENGTH                    equ 0001h
ODCONC_ODCONC0_MASK                      equ 0001h
ODCONC_ODCONC1_POSN                      equ 0001h
ODCONC_ODCONC1_POSITION                  equ 0001h
ODCONC_ODCONC1_SIZE                      equ 0001h
ODCONC_ODCONC1_LENGTH                    equ 0001h
ODCONC_ODCONC1_MASK                      equ 0002h
ODCONC_ODCONC2_POSN                      equ 0002h
ODCONC_ODCONC2_POSITION                  equ 0002h
ODCONC_ODCONC2_SIZE                      equ 0001h
ODCONC_ODCONC2_LENGTH                    equ 0001h
ODCONC_ODCONC2_MASK                      equ 0004h
ODCONC_ODCONC3_POSN                      equ 0003h
ODCONC_ODCONC3_POSITION                  equ 0003h
ODCONC_ODCONC3_SIZE                      equ 0001h
ODCONC_ODCONC3_LENGTH                    equ 0001h
ODCONC_ODCONC3_MASK                      equ 0008h
ODCONC_ODCONC4_POSN                      equ 0004h
ODCONC_ODCONC4_POSITION                  equ 0004h
ODCONC_ODCONC4_SIZE                      equ 0001h
ODCONC_ODCONC4_LENGTH                    equ 0001h
ODCONC_ODCONC4_MASK                      equ 0010h
ODCONC_ODCONC5_POSN                      equ 0005h
ODCONC_ODCONC5_POSITION                  equ 0005h
ODCONC_ODCONC5_SIZE                      equ 0001h
ODCONC_ODCONC5_LENGTH                    equ 0001h
ODCONC_ODCONC5_MASK                      equ 0020h
ODCONC_ODCONC6_POSN                      equ 0006h
ODCONC_ODCONC6_POSITION                  equ 0006h
ODCONC_ODCONC6_SIZE                      equ 0001h
ODCONC_ODCONC6_LENGTH                    equ 0001h
ODCONC_ODCONC6_MASK                      equ 0040h
ODCONC_ODCONC7_POSN                      equ 0007h
ODCONC_ODCONC7_POSITION                  equ 0007h
ODCONC_ODCONC7_SIZE                      equ 0001h
ODCONC_ODCONC7_LENGTH                    equ 0001h
ODCONC_ODCONC7_MASK                      equ 0080h
ODCONC_ODCONC_POSN                       equ 0000h
ODCONC_ODCONC_POSITION                   equ 0000h
ODCONC_ODCONC_SIZE                       equ 0008h
ODCONC_ODCONC_LENGTH                     equ 0008h
ODCONC_ODCONC_MASK                       equ 00FFh

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
CCP1CON_CCP1M0_POSN                      equ 0000h
CCP1CON_CCP1M0_POSITION                  equ 0000h
CCP1CON_CCP1M0_SIZE                      equ 0001h
CCP1CON_CCP1M0_LENGTH                    equ 0001h
CCP1CON_CCP1M0_MASK                      equ 0001h
CCP1CON_CCP1M1_POSN                      equ 0001h
CCP1CON_CCP1M1_POSITION                  equ 0001h
CCP1CON_CCP1M1_SIZE                      equ 0001h
CCP1CON_CCP1M1_LENGTH                    equ 0001h
CCP1CON_CCP1M1_MASK                      equ 0002h
CCP1CON_CCP1M2_POSN                      equ 0002h
CCP1CON_CCP1M2_POSITION                  equ 0002h
CCP1CON_CCP1M2_SIZE                      equ 0001h
CCP1CON_CCP1M2_LENGTH                    equ 0001h
CCP1CON_CCP1M2_MASK                      equ 0004h
CCP1CON_CCP1M3_POSN                      equ 0003h
CCP1CON_CCP1M3_POSITION                  equ 0003h
CCP1CON_CCP1M3_SIZE                      equ 0001h
CCP1CON_CCP1M3_LENGTH                    equ 0001h
CCP1CON_CCP1M3_MASK                      equ 0008h
CCP1CON_DC1B0_POSN                       equ 0004h
CCP1CON_DC1B0_POSITION                   equ 0004h
CCP1CON_DC1B0_SIZE                       equ 0001h
CCP1CON_DC1B0_LENGTH                     equ 0001h
CCP1CON_DC1B0_MASK                       equ 0010h
CCP1CON_DC1B1_POSN                       equ 0005h
CCP1CON_DC1B1_POSITION                   equ 0005h
CCP1CON_DC1B1_SIZE                       equ 0001h
CCP1CON_DC1B1_LENGTH                     equ 0001h
CCP1CON_DC1B1_MASK                       equ 0020h
CCP1CON_P1M0_POSN                        equ 0006h
CCP1CON_P1M0_POSITION                    equ 0006h
CCP1CON_P1M0_SIZE                        equ 0001h
CCP1CON_P1M0_LENGTH                      equ 0001h
CCP1CON_P1M0_MASK                        equ 0040h
CCP1CON_P1M1_POSN                        equ 0007h
CCP1CON_P1M1_POSITION                    equ 0007h
CCP1CON_P1M1_SIZE                        equ 0001h
CCP1CON_P1M1_LENGTH                      equ 0001h
CCP1CON_P1M1_MASK                        equ 0080h
CCP1CON_CCP1M_POSN                       equ 0000h
CCP1CON_CCP1M_POSITION                   equ 0000h
CCP1CON_CCP1M_SIZE                       equ 0004h
CCP1CON_CCP1M_LENGTH                     equ 0004h
CCP1CON_CCP1M_MASK                       equ 000Fh
CCP1CON_DC1B_POSN                        equ 0004h
CCP1CON_DC1B_POSITION                    equ 0004h
CCP1CON_DC1B_SIZE                        equ 0002h
CCP1CON_DC1B_LENGTH                      equ 0002h
CCP1CON_DC1B_MASK                        equ 0030h
CCP1CON_P1M_POSN                         equ 0006h
CCP1CON_P1M_POSITION                     equ 0006h
CCP1CON_P1M_SIZE                         equ 0002h
CCP1CON_P1M_LENGTH                       equ 0002h
CCP1CON_P1M_MASK                         equ 00C0h

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0298h
// bitfield definitions
CCPR2L_CCPR2L_POSN                       equ 0000h
CCPR2L_CCPR2L_POSITION                   equ 0000h
CCPR2L_CCPR2L_SIZE                       equ 0008h
CCPR2L_CCPR2L_LENGTH                     equ 0008h
CCPR2L_CCPR2L_MASK                       equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0299h
// bitfield definitions
CCPR2H_CCPR2H_POSN                       equ 0000h
CCPR2H_CCPR2H_POSITION                   equ 0000h
CCPR2H_CCPR2H_SIZE                       equ 0008h
CCPR2H_CCPR2H_LENGTH                     equ 0008h
CCPR2H_CCPR2H_MASK                       equ 00FFh

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 029Ah
// bitfield definitions
CCP2CON_CCP2M0_POSN                      equ 0000h
CCP2CON_CCP2M0_POSITION                  equ 0000h
CCP2CON_CCP2M0_SIZE                      equ 0001h
CCP2CON_CCP2M0_LENGTH                    equ 0001h
CCP2CON_CCP2M0_MASK                      equ 0001h
CCP2CON_CCP2M1_POSN                      equ 0001h
CCP2CON_CCP2M1_POSITION                  equ 0001h
CCP2CON_CCP2M1_SIZE                      equ 0001h
CCP2CON_CCP2M1_LENGTH                    equ 0001h
CCP2CON_CCP2M1_MASK                      equ 0002h
CCP2CON_CCP2M2_POSN                      equ 0002h
CCP2CON_CCP2M2_POSITION                  equ 0002h
CCP2CON_CCP2M2_SIZE                      equ 0001h
CCP2CON_CCP2M2_LENGTH                    equ 0001h
CCP2CON_CCP2M2_MASK                      equ 0004h
CCP2CON_CCP2M3_POSN                      equ 0003h
CCP2CON_CCP2M3_POSITION                  equ 0003h
CCP2CON_CCP2M3_SIZE                      equ 0001h
CCP2CON_CCP2M3_LENGTH                    equ 0001h
CCP2CON_CCP2M3_MASK                      equ 0008h
CCP2CON_DC2B0_POSN                       equ 0004h
CCP2CON_DC2B0_POSITION                   equ 0004h
CCP2CON_DC2B0_SIZE                       equ 0001h
CCP2CON_DC2B0_LENGTH                     equ 0001h
CCP2CON_DC2B0_MASK                       equ 0010h
CCP2CON_DC2B1_POSN                       equ 0005h
CCP2CON_DC2B1_POSITION                   equ 0005h
CCP2CON_DC2B1_SIZE                       equ 0001h
CCP2CON_DC2B1_LENGTH                     equ 0001h
CCP2CON_DC2B1_MASK                       equ 0020h
CCP2CON_P2M0_POSN                        equ 0006h
CCP2CON_P2M0_POSITION                    equ 0006h
CCP2CON_P2M0_SIZE                        equ 0001h
CCP2CON_P2M0_LENGTH                      equ 0001h
CCP2CON_P2M0_MASK                        equ 0040h
CCP2CON_P2M1_POSN                        equ 0007h
CCP2CON_P2M1_POSITION                    equ 0007h
CCP2CON_P2M1_SIZE                        equ 0001h
CCP2CON_P2M1_LENGTH                      equ 0001h
CCP2CON_P2M1_MASK                        equ 0080h
CCP2CON_CCP2M_POSN                       equ 0000h
CCP2CON_CCP2M_POSITION                   equ 0000h
CCP2CON_CCP2M_SIZE                       equ 0004h
CCP2CON_CCP2M_LENGTH                     equ 0004h
CCP2CON_CCP2M_MASK                       equ 000Fh
CCP2CON_DC2B_POSN                        equ 0004h
CCP2CON_DC2B_POSITION                    equ 0004h
CCP2CON_DC2B_SIZE                        equ 0002h
CCP2CON_DC2B_LENGTH                      equ 0002h
CCP2CON_DC2B_MASK                        equ 0030h
CCP2CON_P2M_POSN                         equ 0006h
CCP2CON_P2M_POSITION                     equ 0006h
CCP2CON_P2M_SIZE                         equ 0002h
CCP2CON_P2M_LENGTH                       equ 0002h
CCP2CON_P2M_MASK                         equ 00C0h

// Register: SLRCONA
#define SLRCONA SLRCONA
SLRCONA                                  equ 030Ch
// bitfield definitions
SLRCONA_SLRCONA0_POSN                    equ 0000h
SLRCONA_SLRCONA0_POSITION                equ 0000h
SLRCONA_SLRCONA0_SIZE                    equ 0001h
SLRCONA_SLRCONA0_LENGTH                  equ 0001h
SLRCONA_SLRCONA0_MASK                    equ 0001h
SLRCONA_SLRCONA1_POSN                    equ 0001h
SLRCONA_SLRCONA1_POSITION                equ 0001h
SLRCONA_SLRCONA1_SIZE                    equ 0001h
SLRCONA_SLRCONA1_LENGTH                  equ 0001h
SLRCONA_SLRCONA1_MASK                    equ 0002h
SLRCONA_SLRCONA2_POSN                    equ 0002h
SLRCONA_SLRCONA2_POSITION                equ 0002h
SLRCONA_SLRCONA2_SIZE                    equ 0001h
SLRCONA_SLRCONA2_LENGTH                  equ 0001h
SLRCONA_SLRCONA2_MASK                    equ 0004h
SLRCONA_SLRCONA3_POSN                    equ 0003h
SLRCONA_SLRCONA3_POSITION                equ 0003h
SLRCONA_SLRCONA3_SIZE                    equ 0001h
SLRCONA_SLRCONA3_LENGTH                  equ 0001h
SLRCONA_SLRCONA3_MASK                    equ 0008h
SLRCONA_SLRCONA4_POSN                    equ 0004h
SLRCONA_SLRCONA4_POSITION                equ 0004h
SLRCONA_SLRCONA4_SIZE                    equ 0001h
SLRCONA_SLRCONA4_LENGTH                  equ 0001h
SLRCONA_SLRCONA4_MASK                    equ 0010h
SLRCONA_SLRCONA5_POSN                    equ 0005h
SLRCONA_SLRCONA5_POSITION                equ 0005h
SLRCONA_SLRCONA5_SIZE                    equ 0001h
SLRCONA_SLRCONA5_LENGTH                  equ 0001h
SLRCONA_SLRCONA5_MASK                    equ 0020h
SLRCONA_SLRCONA6_POSN                    equ 0006h
SLRCONA_SLRCONA6_POSITION                equ 0006h
SLRCONA_SLRCONA6_SIZE                    equ 0001h
SLRCONA_SLRCONA6_LENGTH                  equ 0001h
SLRCONA_SLRCONA6_MASK                    equ 0040h
SLRCONA_SLRCONA7_POSN                    equ 0007h
SLRCONA_SLRCONA7_POSITION                equ 0007h
SLRCONA_SLRCONA7_SIZE                    equ 0001h
SLRCONA_SLRCONA7_LENGTH                  equ 0001h
SLRCONA_SLRCONA7_MASK                    equ 0080h
SLRCONA_SLRCONA_POSN                     equ 0000h
SLRCONA_SLRCONA_POSITION                 equ 0000h
SLRCONA_SLRCONA_SIZE                     equ 0008h
SLRCONA_SLRCONA_LENGTH                   equ 0008h
SLRCONA_SLRCONA_MASK                     equ 00FFh

// Register: SLRCONB
#define SLRCONB SLRCONB
SLRCONB                                  equ 030Dh
// bitfield definitions
SLRCONB_SLRCONB0_POSN                    equ 0000h
SLRCONB_SLRCONB0_POSITION                equ 0000h
SLRCONB_SLRCONB0_SIZE                    equ 0001h
SLRCONB_SLRCONB0_LENGTH                  equ 0001h
SLRCONB_SLRCONB0_MASK                    equ 0001h
SLRCONB_SLRCONB1_POSN                    equ 0001h
SLRCONB_SLRCONB1_POSITION                equ 0001h
SLRCONB_SLRCONB1_SIZE                    equ 0001h
SLRCONB_SLRCONB1_LENGTH                  equ 0001h
SLRCONB_SLRCONB1_MASK                    equ 0002h
SLRCONB_SLRCONB2_POSN                    equ 0002h
SLRCONB_SLRCONB2_POSITION                equ 0002h
SLRCONB_SLRCONB2_SIZE                    equ 0001h
SLRCONB_SLRCONB2_LENGTH                  equ 0001h
SLRCONB_SLRCONB2_MASK                    equ 0004h
SLRCONB_SLRCONB3_POSN                    equ 0003h
SLRCONB_SLRCONB3_POSITION                equ 0003h
SLRCONB_SLRCONB3_SIZE                    equ 0001h
SLRCONB_SLRCONB3_LENGTH                  equ 0001h
SLRCONB_SLRCONB3_MASK                    equ 0008h
SLRCONB_SLRCONB4_POSN                    equ 0004h
SLRCONB_SLRCONB4_POSITION                equ 0004h
SLRCONB_SLRCONB4_SIZE                    equ 0001h
SLRCONB_SLRCONB4_LENGTH                  equ 0001h
SLRCONB_SLRCONB4_MASK                    equ 0010h
SLRCONB_SLRCONB5_POSN                    equ 0005h
SLRCONB_SLRCONB5_POSITION                equ 0005h
SLRCONB_SLRCONB5_SIZE                    equ 0001h
SLRCONB_SLRCONB5_LENGTH                  equ 0001h
SLRCONB_SLRCONB5_MASK                    equ 0020h
SLRCONB_SLRCONB6_POSN                    equ 0006h
SLRCONB_SLRCONB6_POSITION                equ 0006h
SLRCONB_SLRCONB6_SIZE                    equ 0001h
SLRCONB_SLRCONB6_LENGTH                  equ 0001h
SLRCONB_SLRCONB6_MASK                    equ 0040h
SLRCONB_SLRCONB7_POSN                    equ 0007h
SLRCONB_SLRCONB7_POSITION                equ 0007h
SLRCONB_SLRCONB7_SIZE                    equ 0001h
SLRCONB_SLRCONB7_LENGTH                  equ 0001h
SLRCONB_SLRCONB7_MASK                    equ 0080h
SLRCONB_SLRCONB_POSN                     equ 0000h
SLRCONB_SLRCONB_POSITION                 equ 0000h
SLRCONB_SLRCONB_SIZE                     equ 0008h
SLRCONB_SLRCONB_LENGTH                   equ 0008h
SLRCONB_SLRCONB_MASK                     equ 00FFh

// Register: SLRCONC
#define SLRCONC SLRCONC
SLRCONC                                  equ 030Eh
// bitfield definitions
SLRCONC_SLRCONC0_POSN                    equ 0000h
SLRCONC_SLRCONC0_POSITION                equ 0000h
SLRCONC_SLRCONC0_SIZE                    equ 0001h
SLRCONC_SLRCONC0_LENGTH                  equ 0001h
SLRCONC_SLRCONC0_MASK                    equ 0001h
SLRCONC_SLRCONC1_POSN                    equ 0001h
SLRCONC_SLRCONC1_POSITION                equ 0001h
SLRCONC_SLRCONC1_SIZE                    equ 0001h
SLRCONC_SLRCONC1_LENGTH                  equ 0001h
SLRCONC_SLRCONC1_MASK                    equ 0002h
SLRCONC_SLRCONC2_POSN                    equ 0002h
SLRCONC_SLRCONC2_POSITION                equ 0002h
SLRCONC_SLRCONC2_SIZE                    equ 0001h
SLRCONC_SLRCONC2_LENGTH                  equ 0001h
SLRCONC_SLRCONC2_MASK                    equ 0004h
SLRCONC_SLRCONC3_POSN                    equ 0003h
SLRCONC_SLRCONC3_POSITION                equ 0003h
SLRCONC_SLRCONC3_SIZE                    equ 0001h
SLRCONC_SLRCONC3_LENGTH                  equ 0001h
SLRCONC_SLRCONC3_MASK                    equ 0008h
SLRCONC_SLRCONC4_POSN                    equ 0004h
SLRCONC_SLRCONC4_POSITION                equ 0004h
SLRCONC_SLRCONC4_SIZE                    equ 0001h
SLRCONC_SLRCONC4_LENGTH                  equ 0001h
SLRCONC_SLRCONC4_MASK                    equ 0010h
SLRCONC_SLRCONC5_POSN                    equ 0005h
SLRCONC_SLRCONC5_POSITION                equ 0005h
SLRCONC_SLRCONC5_SIZE                    equ 0001h
SLRCONC_SLRCONC5_LENGTH                  equ 0001h
SLRCONC_SLRCONC5_MASK                    equ 0020h
SLRCONC_SLRCONC6_POSN                    equ 0006h
SLRCONC_SLRCONC6_POSITION                equ 0006h
SLRCONC_SLRCONC6_SIZE                    equ 0001h
SLRCONC_SLRCONC6_LENGTH                  equ 0001h
SLRCONC_SLRCONC6_MASK                    equ 0040h
SLRCONC_SLRCONC7_POSN                    equ 0007h
SLRCONC_SLRCONC7_POSITION                equ 0007h
SLRCONC_SLRCONC7_SIZE                    equ 0001h
SLRCONC_SLRCONC7_LENGTH                  equ 0001h
SLRCONC_SLRCONC7_MASK                    equ 0080h
SLRCONC_SLRCONC_POSN                     equ 0000h
SLRCONC_SLRCONC_POSITION                 equ 0000h
SLRCONC_SLRCONC_SIZE                     equ 0008h
SLRCONC_SLRCONC_LENGTH                   equ 0008h
SLRCONC_SLRCONC_MASK                     equ 00FFh

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
INLVLA_INLVLA6_POSN                      equ 0006h
INLVLA_INLVLA6_POSITION                  equ 0006h
INLVLA_INLVLA6_SIZE                      equ 0001h
INLVLA_INLVLA6_LENGTH                    equ 0001h
INLVLA_INLVLA6_MASK                      equ 0040h
INLVLA_INLVLA7_POSN                      equ 0007h
INLVLA_INLVLA7_POSITION                  equ 0007h
INLVLA_INLVLA7_SIZE                      equ 0001h
INLVLA_INLVLA7_LENGTH                    equ 0001h
INLVLA_INLVLA7_MASK                      equ 0080h
INLVLA_INLVLA_POSN                       equ 0000h
INLVLA_INLVLA_POSITION                   equ 0000h
INLVLA_INLVLA_SIZE                       equ 0008h
INLVLA_INLVLA_LENGTH                     equ 0008h
INLVLA_INLVLA_MASK                       equ 00FFh

// Register: INLVLB
#define INLVLB INLVLB
INLVLB                                   equ 038Dh
// bitfield definitions
INLVLB_INLVLB0_POSN                      equ 0000h
INLVLB_INLVLB0_POSITION                  equ 0000h
INLVLB_INLVLB0_SIZE                      equ 0001h
INLVLB_INLVLB0_LENGTH                    equ 0001h
INLVLB_INLVLB0_MASK                      equ 0001h
INLVLB_INLVLB1_POSN                      equ 0001h
INLVLB_INLVLB1_POSITION                  equ 0001h
INLVLB_INLVLB1_SIZE                      equ 0001h
INLVLB_INLVLB1_LENGTH                    equ 0001h
INLVLB_INLVLB1_MASK                      equ 0002h
INLVLB_INLVLB2_POSN                      equ 0002h
INLVLB_INLVLB2_POSITION                  equ 0002h
INLVLB_INLVLB2_SIZE                      equ 0001h
INLVLB_INLVLB2_LENGTH                    equ 0001h
INLVLB_INLVLB2_MASK                      equ 0004h
INLVLB_INLVLB3_POSN                      equ 0003h
INLVLB_INLVLB3_POSITION                  equ 0003h
INLVLB_INLVLB3_SIZE                      equ 0001h
INLVLB_INLVLB3_LENGTH                    equ 0001h
INLVLB_INLVLB3_MASK                      equ 0008h
INLVLB_INLVLB4_POSN                      equ 0004h
INLVLB_INLVLB4_POSITION                  equ 0004h
INLVLB_INLVLB4_SIZE                      equ 0001h
INLVLB_INLVLB4_LENGTH                    equ 0001h
INLVLB_INLVLB4_MASK                      equ 0010h
INLVLB_INLVLB5_POSN                      equ 0005h
INLVLB_INLVLB5_POSITION                  equ 0005h
INLVLB_INLVLB5_SIZE                      equ 0001h
INLVLB_INLVLB5_LENGTH                    equ 0001h
INLVLB_INLVLB5_MASK                      equ 0020h
INLVLB_INLVLB6_POSN                      equ 0006h
INLVLB_INLVLB6_POSITION                  equ 0006h
INLVLB_INLVLB6_SIZE                      equ 0001h
INLVLB_INLVLB6_LENGTH                    equ 0001h
INLVLB_INLVLB6_MASK                      equ 0040h
INLVLB_INLVLB7_POSN                      equ 0007h
INLVLB_INLVLB7_POSITION                  equ 0007h
INLVLB_INLVLB7_SIZE                      equ 0001h
INLVLB_INLVLB7_LENGTH                    equ 0001h
INLVLB_INLVLB7_MASK                      equ 0080h
INLVLB_INLVLB_POSN                       equ 0000h
INLVLB_INLVLB_POSITION                   equ 0000h
INLVLB_INLVLB_SIZE                       equ 0008h
INLVLB_INLVLB_LENGTH                     equ 0008h
INLVLB_INLVLB_MASK                       equ 00FFh

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
INLVLC_INLVLC6_POSN                      equ 0006h
INLVLC_INLVLC6_POSITION                  equ 0006h
INLVLC_INLVLC6_SIZE                      equ 0001h
INLVLC_INLVLC6_LENGTH                    equ 0001h
INLVLC_INLVLC6_MASK                      equ 0040h
INLVLC_INLVLC7_POSN                      equ 0007h
INLVLC_INLVLC7_POSITION                  equ 0007h
INLVLC_INLVLC7_SIZE                      equ 0001h
INLVLC_INLVLC7_LENGTH                    equ 0001h
INLVLC_INLVLC7_MASK                      equ 0080h
INLVLC_INLVLC_POSN                       equ 0000h
INLVLC_INLVLC_POSITION                   equ 0000h
INLVLC_INLVLC_SIZE                       equ 0008h
INLVLC_INLVLC_LENGTH                     equ 0008h
INLVLC_INLVLC_MASK                       equ 00FFh

// Register: INLVLE
#define INLVLE INLVLE
INLVLE                                   equ 0390h
// bitfield definitions
INLVLE_INLVLE3_POSN                      equ 0003h
INLVLE_INLVLE3_POSITION                  equ 0003h
INLVLE_INLVLE3_SIZE                      equ 0001h
INLVLE_INLVLE3_LENGTH                    equ 0001h
INLVLE_INLVLE3_MASK                      equ 0008h

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
IOCAP_IOCAP6_POSN                        equ 0006h
IOCAP_IOCAP6_POSITION                    equ 0006h
IOCAP_IOCAP6_SIZE                        equ 0001h
IOCAP_IOCAP6_LENGTH                      equ 0001h
IOCAP_IOCAP6_MASK                        equ 0040h
IOCAP_IOCAP7_POSN                        equ 0007h
IOCAP_IOCAP7_POSITION                    equ 0007h
IOCAP_IOCAP7_SIZE                        equ 0001h
IOCAP_IOCAP7_LENGTH                      equ 0001h
IOCAP_IOCAP7_MASK                        equ 0080h
IOCAP_IOCAP_POSN                         equ 0000h
IOCAP_IOCAP_POSITION                     equ 0000h
IOCAP_IOCAP_SIZE                         equ 0008h
IOCAP_IOCAP_LENGTH                       equ 0008h
IOCAP_IOCAP_MASK                         equ 00FFh

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
IOCAN_IOCAN6_POSN                        equ 0006h
IOCAN_IOCAN6_POSITION                    equ 0006h
IOCAN_IOCAN6_SIZE                        equ 0001h
IOCAN_IOCAN6_LENGTH                      equ 0001h
IOCAN_IOCAN6_MASK                        equ 0040h
IOCAN_IOCAN7_POSN                        equ 0007h
IOCAN_IOCAN7_POSITION                    equ 0007h
IOCAN_IOCAN7_SIZE                        equ 0001h
IOCAN_IOCAN7_LENGTH                      equ 0001h
IOCAN_IOCAN7_MASK                        equ 0080h
IOCAN_IOCAN_POSN                         equ 0000h
IOCAN_IOCAN_POSITION                     equ 0000h
IOCAN_IOCAN_SIZE                         equ 0008h
IOCAN_IOCAN_LENGTH                       equ 0008h
IOCAN_IOCAN_MASK                         equ 00FFh

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
IOCAF_IOCAF6_POSN                        equ 0006h
IOCAF_IOCAF6_POSITION                    equ 0006h
IOCAF_IOCAF6_SIZE                        equ 0001h
IOCAF_IOCAF6_LENGTH                      equ 0001h
IOCAF_IOCAF6_MASK                        equ 0040h
IOCAF_IOCAF7_POSN                        equ 0007h
IOCAF_IOCAF7_POSITION                    equ 0007h
IOCAF_IOCAF7_SIZE                        equ 0001h
IOCAF_IOCAF7_LENGTH                      equ 0001h
IOCAF_IOCAF7_MASK                        equ 0080h
IOCAF_IOCAF_POSN                         equ 0000h
IOCAF_IOCAF_POSITION                     equ 0000h
IOCAF_IOCAF_SIZE                         equ 0008h
IOCAF_IOCAF_LENGTH                       equ 0008h
IOCAF_IOCAF_MASK                         equ 00FFh

// Register: IOCBP
#define IOCBP IOCBP
IOCBP                                    equ 0394h
// bitfield definitions
IOCBP_IOCBP0_POSN                        equ 0000h
IOCBP_IOCBP0_POSITION                    equ 0000h
IOCBP_IOCBP0_SIZE                        equ 0001h
IOCBP_IOCBP0_LENGTH                      equ 0001h
IOCBP_IOCBP0_MASK                        equ 0001h
IOCBP_IOCBP1_POSN                        equ 0001h
IOCBP_IOCBP1_POSITION                    equ 0001h
IOCBP_IOCBP1_SIZE                        equ 0001h
IOCBP_IOCBP1_LENGTH                      equ 0001h
IOCBP_IOCBP1_MASK                        equ 0002h
IOCBP_IOCBP2_POSN                        equ 0002h
IOCBP_IOCBP2_POSITION                    equ 0002h
IOCBP_IOCBP2_SIZE                        equ 0001h
IOCBP_IOCBP2_LENGTH                      equ 0001h
IOCBP_IOCBP2_MASK                        equ 0004h
IOCBP_IOCBP3_POSN                        equ 0003h
IOCBP_IOCBP3_POSITION                    equ 0003h
IOCBP_IOCBP3_SIZE                        equ 0001h
IOCBP_IOCBP3_LENGTH                      equ 0001h
IOCBP_IOCBP3_MASK                        equ 0008h
IOCBP_IOCBP4_POSN                        equ 0004h
IOCBP_IOCBP4_POSITION                    equ 0004h
IOCBP_IOCBP4_SIZE                        equ 0001h
IOCBP_IOCBP4_LENGTH                      equ 0001h
IOCBP_IOCBP4_MASK                        equ 0010h
IOCBP_IOCBP5_POSN                        equ 0005h
IOCBP_IOCBP5_POSITION                    equ 0005h
IOCBP_IOCBP5_SIZE                        equ 0001h
IOCBP_IOCBP5_LENGTH                      equ 0001h
IOCBP_IOCBP5_MASK                        equ 0020h
IOCBP_IOCBP6_POSN                        equ 0006h
IOCBP_IOCBP6_POSITION                    equ 0006h
IOCBP_IOCBP6_SIZE                        equ 0001h
IOCBP_IOCBP6_LENGTH                      equ 0001h
IOCBP_IOCBP6_MASK                        equ 0040h
IOCBP_IOCBP7_POSN                        equ 0007h
IOCBP_IOCBP7_POSITION                    equ 0007h
IOCBP_IOCBP7_SIZE                        equ 0001h
IOCBP_IOCBP7_LENGTH                      equ 0001h
IOCBP_IOCBP7_MASK                        equ 0080h
IOCBP_IOCBP_POSN                         equ 0000h
IOCBP_IOCBP_POSITION                     equ 0000h
IOCBP_IOCBP_SIZE                         equ 0008h
IOCBP_IOCBP_LENGTH                       equ 0008h
IOCBP_IOCBP_MASK                         equ 00FFh

// Register: IOCBN
#define IOCBN IOCBN
IOCBN                                    equ 0395h
// bitfield definitions
IOCBN_IOCBN0_POSN                        equ 0000h
IOCBN_IOCBN0_POSITION                    equ 0000h
IOCBN_IOCBN0_SIZE                        equ 0001h
IOCBN_IOCBN0_LENGTH                      equ 0001h
IOCBN_IOCBN0_MASK                        equ 0001h
IOCBN_IOCBN1_POSN                        equ 0001h
IOCBN_IOCBN1_POSITION                    equ 0001h
IOCBN_IOCBN1_SIZE                        equ 0001h
IOCBN_IOCBN1_LENGTH                      equ 0001h
IOCBN_IOCBN1_MASK                        equ 0002h
IOCBN_IOCBN2_POSN                        equ 0002h
IOCBN_IOCBN2_POSITION                    equ 0002h
IOCBN_IOCBN2_SIZE                        equ 0001h
IOCBN_IOCBN2_LENGTH                      equ 0001h
IOCBN_IOCBN2_MASK                        equ 0004h
IOCBN_IOCBN3_POSN                        equ 0003h
IOCBN_IOCBN3_POSITION                    equ 0003h
IOCBN_IOCBN3_SIZE                        equ 0001h
IOCBN_IOCBN3_LENGTH                      equ 0001h
IOCBN_IOCBN3_MASK                        equ 0008h
IOCBN_IOCBN4_POSN                        equ 0004h
IOCBN_IOCBN4_POSITION                    equ 0004h
IOCBN_IOCBN4_SIZE                        equ 0001h
IOCBN_IOCBN4_LENGTH                      equ 0001h
IOCBN_IOCBN4_MASK                        equ 0010h
IOCBN_IOCBN5_POSN                        equ 0005h
IOCBN_IOCBN5_POSITION                    equ 0005h
IOCBN_IOCBN5_SIZE                        equ 0001h
IOCBN_IOCBN5_LENGTH                      equ 0001h
IOCBN_IOCBN5_MASK                        equ 0020h
IOCBN_IOCBN6_POSN                        equ 0006h
IOCBN_IOCBN6_POSITION                    equ 0006h
IOCBN_IOCBN6_SIZE                        equ 0001h
IOCBN_IOCBN6_LENGTH                      equ 0001h
IOCBN_IOCBN6_MASK                        equ 0040h
IOCBN_IOCBN7_POSN                        equ 0007h
IOCBN_IOCBN7_POSITION                    equ 0007h
IOCBN_IOCBN7_SIZE                        equ 0001h
IOCBN_IOCBN7_LENGTH                      equ 0001h
IOCBN_IOCBN7_MASK                        equ 0080h
IOCBN_IOCBN_POSN                         equ 0000h
IOCBN_IOCBN_POSITION                     equ 0000h
IOCBN_IOCBN_SIZE                         equ 0008h
IOCBN_IOCBN_LENGTH                       equ 0008h
IOCBN_IOCBN_MASK                         equ 00FFh

// Register: IOCBF
#define IOCBF IOCBF
IOCBF                                    equ 0396h
// bitfield definitions
IOCBF_IOCBF0_POSN                        equ 0000h
IOCBF_IOCBF0_POSITION                    equ 0000h
IOCBF_IOCBF0_SIZE                        equ 0001h
IOCBF_IOCBF0_LENGTH                      equ 0001h
IOCBF_IOCBF0_MASK                        equ 0001h
IOCBF_IOCBF1_POSN                        equ 0001h
IOCBF_IOCBF1_POSITION                    equ 0001h
IOCBF_IOCBF1_SIZE                        equ 0001h
IOCBF_IOCBF1_LENGTH                      equ 0001h
IOCBF_IOCBF1_MASK                        equ 0002h
IOCBF_IOCBF2_POSN                        equ 0002h
IOCBF_IOCBF2_POSITION                    equ 0002h
IOCBF_IOCBF2_SIZE                        equ 0001h
IOCBF_IOCBF2_LENGTH                      equ 0001h
IOCBF_IOCBF2_MASK                        equ 0004h
IOCBF_IOCBF3_POSN                        equ 0003h
IOCBF_IOCBF3_POSITION                    equ 0003h
IOCBF_IOCBF3_SIZE                        equ 0001h
IOCBF_IOCBF3_LENGTH                      equ 0001h
IOCBF_IOCBF3_MASK                        equ 0008h
IOCBF_IOCBF4_POSN                        equ 0004h
IOCBF_IOCBF4_POSITION                    equ 0004h
IOCBF_IOCBF4_SIZE                        equ 0001h
IOCBF_IOCBF4_LENGTH                      equ 0001h
IOCBF_IOCBF4_MASK                        equ 0010h
IOCBF_IOCBF5_POSN                        equ 0005h
IOCBF_IOCBF5_POSITION                    equ 0005h
IOCBF_IOCBF5_SIZE                        equ 0001h
IOCBF_IOCBF5_LENGTH                      equ 0001h
IOCBF_IOCBF5_MASK                        equ 0020h
IOCBF_IOCBF6_POSN                        equ 0006h
IOCBF_IOCBF6_POSITION                    equ 0006h
IOCBF_IOCBF6_SIZE                        equ 0001h
IOCBF_IOCBF6_LENGTH                      equ 0001h
IOCBF_IOCBF6_MASK                        equ 0040h
IOCBF_IOCBF7_POSN                        equ 0007h
IOCBF_IOCBF7_POSITION                    equ 0007h
IOCBF_IOCBF7_SIZE                        equ 0001h
IOCBF_IOCBF7_LENGTH                      equ 0001h
IOCBF_IOCBF7_MASK                        equ 0080h
IOCBF_IOCBF_POSN                         equ 0000h
IOCBF_IOCBF_POSITION                     equ 0000h
IOCBF_IOCBF_SIZE                         equ 0008h
IOCBF_IOCBF_LENGTH                       equ 0008h
IOCBF_IOCBF_MASK                         equ 00FFh

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
IOCCP_IOCCP6_POSN                        equ 0006h
IOCCP_IOCCP6_POSITION                    equ 0006h
IOCCP_IOCCP6_SIZE                        equ 0001h
IOCCP_IOCCP6_LENGTH                      equ 0001h
IOCCP_IOCCP6_MASK                        equ 0040h
IOCCP_IOCCP7_POSN                        equ 0007h
IOCCP_IOCCP7_POSITION                    equ 0007h
IOCCP_IOCCP7_SIZE                        equ 0001h
IOCCP_IOCCP7_LENGTH                      equ 0001h
IOCCP_IOCCP7_MASK                        equ 0080h
IOCCP_IOCCP_POSN                         equ 0000h
IOCCP_IOCCP_POSITION                     equ 0000h
IOCCP_IOCCP_SIZE                         equ 0008h
IOCCP_IOCCP_LENGTH                       equ 0008h
IOCCP_IOCCP_MASK                         equ 00FFh

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
IOCCN_IOCCN6_POSN                        equ 0006h
IOCCN_IOCCN6_POSITION                    equ 0006h
IOCCN_IOCCN6_SIZE                        equ 0001h
IOCCN_IOCCN6_LENGTH                      equ 0001h
IOCCN_IOCCN6_MASK                        equ 0040h
IOCCN_IOCCN7_POSN                        equ 0007h
IOCCN_IOCCN7_POSITION                    equ 0007h
IOCCN_IOCCN7_SIZE                        equ 0001h
IOCCN_IOCCN7_LENGTH                      equ 0001h
IOCCN_IOCCN7_MASK                        equ 0080h
IOCCN_IOCCN_POSN                         equ 0000h
IOCCN_IOCCN_POSITION                     equ 0000h
IOCCN_IOCCN_SIZE                         equ 0008h
IOCCN_IOCCN_LENGTH                       equ 0008h
IOCCN_IOCCN_MASK                         equ 00FFh

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
IOCCF_IOCCF6_POSN                        equ 0006h
IOCCF_IOCCF6_POSITION                    equ 0006h
IOCCF_IOCCF6_SIZE                        equ 0001h
IOCCF_IOCCF6_LENGTH                      equ 0001h
IOCCF_IOCCF6_MASK                        equ 0040h
IOCCF_IOCCF7_POSN                        equ 0007h
IOCCF_IOCCF7_POSITION                    equ 0007h
IOCCF_IOCCF7_SIZE                        equ 0001h
IOCCF_IOCCF7_LENGTH                      equ 0001h
IOCCF_IOCCF7_MASK                        equ 0080h
IOCCF_IOCCF_POSN                         equ 0000h
IOCCF_IOCCF_POSITION                     equ 0000h
IOCCF_IOCCF_SIZE                         equ 0008h
IOCCF_IOCCF_LENGTH                       equ 0008h
IOCCF_IOCCF_MASK                         equ 00FFh

// Register: IOCEP
#define IOCEP IOCEP
IOCEP                                    equ 039Dh
// bitfield definitions
IOCEP_IOCEP3_POSN                        equ 0003h
IOCEP_IOCEP3_POSITION                    equ 0003h
IOCEP_IOCEP3_SIZE                        equ 0001h
IOCEP_IOCEP3_LENGTH                      equ 0001h
IOCEP_IOCEP3_MASK                        equ 0008h

// Register: IOCEN
#define IOCEN IOCEN
IOCEN                                    equ 039Eh
// bitfield definitions
IOCEN_IOCEN3_POSN                        equ 0003h
IOCEN_IOCEN3_POSITION                    equ 0003h
IOCEN_IOCEN3_SIZE                        equ 0001h
IOCEN_IOCEN3_LENGTH                      equ 0001h
IOCEN_IOCEN3_MASK                        equ 0008h

// Register: IOCEF
#define IOCEF IOCEF
IOCEF                                    equ 039Fh
// bitfield definitions
IOCEF_IOCEF3_POSN                        equ 0003h
IOCEF_IOCEF3_POSITION                    equ 0003h
IOCEF_IOCEF3_SIZE                        equ 0001h
IOCEF_IOCEF3_LENGTH                      equ 0001h
IOCEF_IOCEF3_MASK                        equ 0008h

// Register: OPA1CON
#define OPA1CON OPA1CON
OPA1CON                                  equ 0511h
// bitfield definitions
OPA1CON_OPA1CH0_POSN                     equ 0000h
OPA1CON_OPA1CH0_POSITION                 equ 0000h
OPA1CON_OPA1CH0_SIZE                     equ 0001h
OPA1CON_OPA1CH0_LENGTH                   equ 0001h
OPA1CON_OPA1CH0_MASK                     equ 0001h
OPA1CON_OPA1CH1_POSN                     equ 0001h
OPA1CON_OPA1CH1_POSITION                 equ 0001h
OPA1CON_OPA1CH1_SIZE                     equ 0001h
OPA1CON_OPA1CH1_LENGTH                   equ 0001h
OPA1CON_OPA1CH1_MASK                     equ 0002h
OPA1CON_OPA1SP_POSN                      equ 0006h
OPA1CON_OPA1SP_POSITION                  equ 0006h
OPA1CON_OPA1SP_SIZE                      equ 0001h
OPA1CON_OPA1SP_LENGTH                    equ 0001h
OPA1CON_OPA1SP_MASK                      equ 0040h
OPA1CON_OPA1EN_POSN                      equ 0007h
OPA1CON_OPA1EN_POSITION                  equ 0007h
OPA1CON_OPA1EN_SIZE                      equ 0001h
OPA1CON_OPA1EN_LENGTH                    equ 0001h
OPA1CON_OPA1EN_MASK                      equ 0080h
OPA1CON_OPA1CH_POSN                      equ 0000h
OPA1CON_OPA1CH_POSITION                  equ 0000h
OPA1CON_OPA1CH_SIZE                      equ 0002h
OPA1CON_OPA1CH_LENGTH                    equ 0002h
OPA1CON_OPA1CH_MASK                      equ 0003h

// Register: OPA2CON
#define OPA2CON OPA2CON
OPA2CON                                  equ 0513h
// bitfield definitions
OPA2CON_OPA2CH0_POSN                     equ 0000h
OPA2CON_OPA2CH0_POSITION                 equ 0000h
OPA2CON_OPA2CH0_SIZE                     equ 0001h
OPA2CON_OPA2CH0_LENGTH                   equ 0001h
OPA2CON_OPA2CH0_MASK                     equ 0001h
OPA2CON_OPA2CH1_POSN                     equ 0001h
OPA2CON_OPA2CH1_POSITION                 equ 0001h
OPA2CON_OPA2CH1_SIZE                     equ 0001h
OPA2CON_OPA2CH1_LENGTH                   equ 0001h
OPA2CON_OPA2CH1_MASK                     equ 0002h
OPA2CON_OPA2SP_POSN                      equ 0006h
OPA2CON_OPA2SP_POSITION                  equ 0006h
OPA2CON_OPA2SP_SIZE                      equ 0001h
OPA2CON_OPA2SP_LENGTH                    equ 0001h
OPA2CON_OPA2SP_MASK                      equ 0040h
OPA2CON_OPA2EN_POSN                      equ 0007h
OPA2CON_OPA2EN_POSITION                  equ 0007h
OPA2CON_OPA2EN_SIZE                      equ 0001h
OPA2CON_OPA2EN_LENGTH                    equ 0001h
OPA2CON_OPA2EN_MASK                      equ 0080h
OPA2CON_OPA2CH_POSN                      equ 0000h
OPA2CON_OPA2CH_POSITION                  equ 0000h
OPA2CON_OPA2CH_SIZE                      equ 0002h
OPA2CON_OPA2CH_LENGTH                    equ 0002h
OPA2CON_OPA2CH_MASK                      equ 0003h

// Register: CLKRCON
#define CLKRCON CLKRCON
CLKRCON                                  equ 051Ah
// bitfield definitions
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
CLKRCON_CLKRSLR_POSN                     equ 0005h
CLKRCON_CLKRSLR_POSITION                 equ 0005h
CLKRCON_CLKRSLR_SIZE                     equ 0001h
CLKRCON_CLKRSLR_LENGTH                   equ 0001h
CLKRCON_CLKRSLR_MASK                     equ 0020h
CLKRCON_CLKROE_POSN                      equ 0006h
CLKRCON_CLKROE_POSITION                  equ 0006h
CLKRCON_CLKROE_SIZE                      equ 0001h
CLKRCON_CLKROE_LENGTH                    equ 0001h
CLKRCON_CLKROE_MASK                      equ 0040h
CLKRCON_CLKREN_POSN                      equ 0007h
CLKRCON_CLKREN_POSITION                  equ 0007h
CLKRCON_CLKREN_SIZE                      equ 0001h
CLKRCON_CLKREN_LENGTH                    equ 0001h
CLKRCON_CLKREN_MASK                      equ 0080h
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

// Register: PSMC1CON
#define PSMC1CON PSMC1CON
PSMC1CON                                 equ 0811h
// bitfield definitions
PSMC1CON_P1MODE_POSN                     equ 0000h
PSMC1CON_P1MODE_POSITION                 equ 0000h
PSMC1CON_P1MODE_SIZE                     equ 0004h
PSMC1CON_P1MODE_LENGTH                   equ 0004h
PSMC1CON_P1MODE_MASK                     equ 000Fh
PSMC1CON_P1DBRE_POSN                     equ 0004h
PSMC1CON_P1DBRE_POSITION                 equ 0004h
PSMC1CON_P1DBRE_SIZE                     equ 0001h
PSMC1CON_P1DBRE_LENGTH                   equ 0001h
PSMC1CON_P1DBRE_MASK                     equ 0010h
PSMC1CON_P1DBFE_POSN                     equ 0005h
PSMC1CON_P1DBFE_POSITION                 equ 0005h
PSMC1CON_P1DBFE_SIZE                     equ 0001h
PSMC1CON_P1DBFE_LENGTH                   equ 0001h
PSMC1CON_P1DBFE_MASK                     equ 0020h
PSMC1CON_PSMC1LD_POSN                    equ 0006h
PSMC1CON_PSMC1LD_POSITION                equ 0006h
PSMC1CON_PSMC1LD_SIZE                    equ 0001h
PSMC1CON_PSMC1LD_LENGTH                  equ 0001h
PSMC1CON_PSMC1LD_MASK                    equ 0040h
PSMC1CON_PSMC1EN_POSN                    equ 0007h
PSMC1CON_PSMC1EN_POSITION                equ 0007h
PSMC1CON_PSMC1EN_SIZE                    equ 0001h
PSMC1CON_PSMC1EN_LENGTH                  equ 0001h
PSMC1CON_PSMC1EN_MASK                    equ 0080h
PSMC1CON_P1MODE0_POSN                    equ 0000h
PSMC1CON_P1MODE0_POSITION                equ 0000h
PSMC1CON_P1MODE0_SIZE                    equ 0001h
PSMC1CON_P1MODE0_LENGTH                  equ 0001h
PSMC1CON_P1MODE0_MASK                    equ 0001h
PSMC1CON_P1MODE1_POSN                    equ 0001h
PSMC1CON_P1MODE1_POSITION                equ 0001h
PSMC1CON_P1MODE1_SIZE                    equ 0001h
PSMC1CON_P1MODE1_LENGTH                  equ 0001h
PSMC1CON_P1MODE1_MASK                    equ 0002h
PSMC1CON_P1MODE2_POSN                    equ 0002h
PSMC1CON_P1MODE2_POSITION                equ 0002h
PSMC1CON_P1MODE2_SIZE                    equ 0001h
PSMC1CON_P1MODE2_LENGTH                  equ 0001h
PSMC1CON_P1MODE2_MASK                    equ 0004h
PSMC1CON_P1MODE3_POSN                    equ 0003h
PSMC1CON_P1MODE3_POSITION                equ 0003h
PSMC1CON_P1MODE3_SIZE                    equ 0001h
PSMC1CON_P1MODE3_LENGTH                  equ 0001h
PSMC1CON_P1MODE3_MASK                    equ 0008h

// Register: PSMC1MDL
#define PSMC1MDL PSMC1MDL
PSMC1MDL                                 equ 0812h
// bitfield definitions
PSMC1MDL_P1MSRC_POSN                     equ 0000h
PSMC1MDL_P1MSRC_POSITION                 equ 0000h
PSMC1MDL_P1MSRC_SIZE                     equ 0004h
PSMC1MDL_P1MSRC_LENGTH                   equ 0004h
PSMC1MDL_P1MSRC_MASK                     equ 000Fh
PSMC1MDL_P1MDLBIT_POSN                   equ 0005h
PSMC1MDL_P1MDLBIT_POSITION               equ 0005h
PSMC1MDL_P1MDLBIT_SIZE                   equ 0001h
PSMC1MDL_P1MDLBIT_LENGTH                 equ 0001h
PSMC1MDL_P1MDLBIT_MASK                   equ 0020h
PSMC1MDL_P1MDLPOL_POSN                   equ 0006h
PSMC1MDL_P1MDLPOL_POSITION               equ 0006h
PSMC1MDL_P1MDLPOL_SIZE                   equ 0001h
PSMC1MDL_P1MDLPOL_LENGTH                 equ 0001h
PSMC1MDL_P1MDLPOL_MASK                   equ 0040h
PSMC1MDL_P1MDLEN_POSN                    equ 0007h
PSMC1MDL_P1MDLEN_POSITION                equ 0007h
PSMC1MDL_P1MDLEN_SIZE                    equ 0001h
PSMC1MDL_P1MDLEN_LENGTH                  equ 0001h
PSMC1MDL_P1MDLEN_MASK                    equ 0080h
PSMC1MDL_P1MSRC0_POSN                    equ 0000h
PSMC1MDL_P1MSRC0_POSITION                equ 0000h
PSMC1MDL_P1MSRC0_SIZE                    equ 0001h
PSMC1MDL_P1MSRC0_LENGTH                  equ 0001h
PSMC1MDL_P1MSRC0_MASK                    equ 0001h
PSMC1MDL_P1MSRC1_POSN                    equ 0001h
PSMC1MDL_P1MSRC1_POSITION                equ 0001h
PSMC1MDL_P1MSRC1_SIZE                    equ 0001h
PSMC1MDL_P1MSRC1_LENGTH                  equ 0001h
PSMC1MDL_P1MSRC1_MASK                    equ 0002h
PSMC1MDL_P1MSRC2_POSN                    equ 0002h
PSMC1MDL_P1MSRC2_POSITION                equ 0002h
PSMC1MDL_P1MSRC2_SIZE                    equ 0001h
PSMC1MDL_P1MSRC2_LENGTH                  equ 0001h
PSMC1MDL_P1MSRC2_MASK                    equ 0004h
PSMC1MDL_P1MSRC3_POSN                    equ 0003h
PSMC1MDL_P1MSRC3_POSITION                equ 0003h
PSMC1MDL_P1MSRC3_SIZE                    equ 0001h
PSMC1MDL_P1MSRC3_LENGTH                  equ 0001h
PSMC1MDL_P1MSRC3_MASK                    equ 0008h

// Register: PSMC1SYNC
#define PSMC1SYNC PSMC1SYNC
PSMC1SYNC                                equ 0813h
// bitfield definitions
PSMC1SYNC_P1SYNC0_POSN                   equ 0000h
PSMC1SYNC_P1SYNC0_POSITION               equ 0000h
PSMC1SYNC_P1SYNC0_SIZE                   equ 0001h
PSMC1SYNC_P1SYNC0_LENGTH                 equ 0001h
PSMC1SYNC_P1SYNC0_MASK                   equ 0001h
PSMC1SYNC_P1SYNC1_POSN                   equ 0001h
PSMC1SYNC_P1SYNC1_POSITION               equ 0001h
PSMC1SYNC_P1SYNC1_SIZE                   equ 0001h
PSMC1SYNC_P1SYNC1_LENGTH                 equ 0001h
PSMC1SYNC_P1SYNC1_MASK                   equ 0002h

// Register: PSMC1CLK
#define PSMC1CLK PSMC1CLK
PSMC1CLK                                 equ 0814h
// bitfield definitions
PSMC1CLK_P1CSRC0_POSN                    equ 0000h
PSMC1CLK_P1CSRC0_POSITION                equ 0000h
PSMC1CLK_P1CSRC0_SIZE                    equ 0001h
PSMC1CLK_P1CSRC0_LENGTH                  equ 0001h
PSMC1CLK_P1CSRC0_MASK                    equ 0001h
PSMC1CLK_P1CSRC1_POSN                    equ 0001h
PSMC1CLK_P1CSRC1_POSITION                equ 0001h
PSMC1CLK_P1CSRC1_SIZE                    equ 0001h
PSMC1CLK_P1CSRC1_LENGTH                  equ 0001h
PSMC1CLK_P1CSRC1_MASK                    equ 0002h
PSMC1CLK_P1CPRE0_POSN                    equ 0004h
PSMC1CLK_P1CPRE0_POSITION                equ 0004h
PSMC1CLK_P1CPRE0_SIZE                    equ 0001h
PSMC1CLK_P1CPRE0_LENGTH                  equ 0001h
PSMC1CLK_P1CPRE0_MASK                    equ 0010h
PSMC1CLK_P1CPRE1_POSN                    equ 0005h
PSMC1CLK_P1CPRE1_POSITION                equ 0005h
PSMC1CLK_P1CPRE1_SIZE                    equ 0001h
PSMC1CLK_P1CPRE1_LENGTH                  equ 0001h
PSMC1CLK_P1CPRE1_MASK                    equ 0020h
PSMC1CLK_P1CSRC_POSN                     equ 0000h
PSMC1CLK_P1CSRC_POSITION                 equ 0000h
PSMC1CLK_P1CSRC_SIZE                     equ 0002h
PSMC1CLK_P1CSRC_LENGTH                   equ 0002h
PSMC1CLK_P1CSRC_MASK                     equ 0003h
PSMC1CLK_P1CPRE_POSN                     equ 0004h
PSMC1CLK_P1CPRE_POSITION                 equ 0004h
PSMC1CLK_P1CPRE_SIZE                     equ 0002h
PSMC1CLK_P1CPRE_LENGTH                   equ 0002h
PSMC1CLK_P1CPRE_MASK                     equ 0030h

// Register: PSMC1OEN
#define PSMC1OEN PSMC1OEN
PSMC1OEN                                 equ 0815h
// bitfield definitions
PSMC1OEN_P1OEA_POSN                      equ 0000h
PSMC1OEN_P1OEA_POSITION                  equ 0000h
PSMC1OEN_P1OEA_SIZE                      equ 0001h
PSMC1OEN_P1OEA_LENGTH                    equ 0001h
PSMC1OEN_P1OEA_MASK                      equ 0001h
PSMC1OEN_P1OEB_POSN                      equ 0001h
PSMC1OEN_P1OEB_POSITION                  equ 0001h
PSMC1OEN_P1OEB_SIZE                      equ 0001h
PSMC1OEN_P1OEB_LENGTH                    equ 0001h
PSMC1OEN_P1OEB_MASK                      equ 0002h
PSMC1OEN_P1OEC_POSN                      equ 0002h
PSMC1OEN_P1OEC_POSITION                  equ 0002h
PSMC1OEN_P1OEC_SIZE                      equ 0001h
PSMC1OEN_P1OEC_LENGTH                    equ 0001h
PSMC1OEN_P1OEC_MASK                      equ 0004h
PSMC1OEN_P1OED_POSN                      equ 0003h
PSMC1OEN_P1OED_POSITION                  equ 0003h
PSMC1OEN_P1OED_SIZE                      equ 0001h
PSMC1OEN_P1OED_LENGTH                    equ 0001h
PSMC1OEN_P1OED_MASK                      equ 0008h
PSMC1OEN_P1OEE_POSN                      equ 0004h
PSMC1OEN_P1OEE_POSITION                  equ 0004h
PSMC1OEN_P1OEE_SIZE                      equ 0001h
PSMC1OEN_P1OEE_LENGTH                    equ 0001h
PSMC1OEN_P1OEE_MASK                      equ 0010h
PSMC1OEN_P1OEF_POSN                      equ 0005h
PSMC1OEN_P1OEF_POSITION                  equ 0005h
PSMC1OEN_P1OEF_SIZE                      equ 0001h
PSMC1OEN_P1OEF_LENGTH                    equ 0001h
PSMC1OEN_P1OEF_MASK                      equ 0020h

// Register: PSMC1POL
#define PSMC1POL PSMC1POL
PSMC1POL                                 equ 0816h
// bitfield definitions
PSMC1POL_P1POLA_POSN                     equ 0000h
PSMC1POL_P1POLA_POSITION                 equ 0000h
PSMC1POL_P1POLA_SIZE                     equ 0001h
PSMC1POL_P1POLA_LENGTH                   equ 0001h
PSMC1POL_P1POLA_MASK                     equ 0001h
PSMC1POL_P1POLB_POSN                     equ 0001h
PSMC1POL_P1POLB_POSITION                 equ 0001h
PSMC1POL_P1POLB_SIZE                     equ 0001h
PSMC1POL_P1POLB_LENGTH                   equ 0001h
PSMC1POL_P1POLB_MASK                     equ 0002h
PSMC1POL_P1POLC_POSN                     equ 0002h
PSMC1POL_P1POLC_POSITION                 equ 0002h
PSMC1POL_P1POLC_SIZE                     equ 0001h
PSMC1POL_P1POLC_LENGTH                   equ 0001h
PSMC1POL_P1POLC_MASK                     equ 0004h
PSMC1POL_P1POLD_POSN                     equ 0003h
PSMC1POL_P1POLD_POSITION                 equ 0003h
PSMC1POL_P1POLD_SIZE                     equ 0001h
PSMC1POL_P1POLD_LENGTH                   equ 0001h
PSMC1POL_P1POLD_MASK                     equ 0008h
PSMC1POL_P1POLE_POSN                     equ 0004h
PSMC1POL_P1POLE_POSITION                 equ 0004h
PSMC1POL_P1POLE_SIZE                     equ 0001h
PSMC1POL_P1POLE_LENGTH                   equ 0001h
PSMC1POL_P1POLE_MASK                     equ 0010h
PSMC1POL_P1POLF_POSN                     equ 0005h
PSMC1POL_P1POLF_POSITION                 equ 0005h
PSMC1POL_P1POLF_SIZE                     equ 0001h
PSMC1POL_P1POLF_LENGTH                   equ 0001h
PSMC1POL_P1POLF_MASK                     equ 0020h
PSMC1POL_P1INPOL_POSN                    equ 0006h
PSMC1POL_P1INPOL_POSITION                equ 0006h
PSMC1POL_P1INPOL_SIZE                    equ 0001h
PSMC1POL_P1INPOL_LENGTH                  equ 0001h
PSMC1POL_P1INPOL_MASK                    equ 0040h

// Register: PSMC1BLNK
#define PSMC1BLNK PSMC1BLNK
PSMC1BLNK                                equ 0817h
// bitfield definitions
PSMC1BLNK_P1REBM_POSN                    equ 0000h
PSMC1BLNK_P1REBM_POSITION                equ 0000h
PSMC1BLNK_P1REBM_SIZE                    equ 0002h
PSMC1BLNK_P1REBM_LENGTH                  equ 0002h
PSMC1BLNK_P1REBM_MASK                    equ 0003h
PSMC1BLNK_P1FEBM_POSN                    equ 0004h
PSMC1BLNK_P1FEBM_POSITION                equ 0004h
PSMC1BLNK_P1FEBM_SIZE                    equ 0002h
PSMC1BLNK_P1FEBM_LENGTH                  equ 0002h
PSMC1BLNK_P1FEBM_MASK                    equ 0030h
PSMC1BLNK_P1REBM0_POSN                   equ 0000h
PSMC1BLNK_P1REBM0_POSITION               equ 0000h
PSMC1BLNK_P1REBM0_SIZE                   equ 0001h
PSMC1BLNK_P1REBM0_LENGTH                 equ 0001h
PSMC1BLNK_P1REBM0_MASK                   equ 0001h
PSMC1BLNK_P1REBM1_POSN                   equ 0001h
PSMC1BLNK_P1REBM1_POSITION               equ 0001h
PSMC1BLNK_P1REBM1_SIZE                   equ 0001h
PSMC1BLNK_P1REBM1_LENGTH                 equ 0001h
PSMC1BLNK_P1REBM1_MASK                   equ 0002h
PSMC1BLNK_P1FEBM0_POSN                   equ 0004h
PSMC1BLNK_P1FEBM0_POSITION               equ 0004h
PSMC1BLNK_P1FEBM0_SIZE                   equ 0001h
PSMC1BLNK_P1FEBM0_LENGTH                 equ 0001h
PSMC1BLNK_P1FEBM0_MASK                   equ 0010h
PSMC1BLNK_P1FEBM1_POSN                   equ 0005h
PSMC1BLNK_P1FEBM1_POSITION               equ 0005h
PSMC1BLNK_P1FEBM1_SIZE                   equ 0001h
PSMC1BLNK_P1FEBM1_LENGTH                 equ 0001h
PSMC1BLNK_P1FEBM1_MASK                   equ 0020h

// Register: PSMC1REBS
#define PSMC1REBS PSMC1REBS
PSMC1REBS                                equ 0818h
// bitfield definitions
PSMC1REBS_P1REBSC1_POSN                  equ 0001h
PSMC1REBS_P1REBSC1_POSITION              equ 0001h
PSMC1REBS_P1REBSC1_SIZE                  equ 0001h
PSMC1REBS_P1REBSC1_LENGTH                equ 0001h
PSMC1REBS_P1REBSC1_MASK                  equ 0002h
PSMC1REBS_P1REBSC2_POSN                  equ 0002h
PSMC1REBS_P1REBSC2_POSITION              equ 0002h
PSMC1REBS_P1REBSC2_SIZE                  equ 0001h
PSMC1REBS_P1REBSC2_LENGTH                equ 0001h
PSMC1REBS_P1REBSC2_MASK                  equ 0004h
PSMC1REBS_P1REBSC3_POSN                  equ 0003h
PSMC1REBS_P1REBSC3_POSITION              equ 0003h
PSMC1REBS_P1REBSC3_SIZE                  equ 0001h
PSMC1REBS_P1REBSC3_LENGTH                equ 0001h
PSMC1REBS_P1REBSC3_MASK                  equ 0008h
PSMC1REBS_P1REBSIN_POSN                  equ 0007h
PSMC1REBS_P1REBSIN_POSITION              equ 0007h
PSMC1REBS_P1REBSIN_SIZE                  equ 0001h
PSMC1REBS_P1REBSIN_LENGTH                equ 0001h
PSMC1REBS_P1REBSIN_MASK                  equ 0080h

// Register: PSMC1FEBS
#define PSMC1FEBS PSMC1FEBS
PSMC1FEBS                                equ 0819h
// bitfield definitions
PSMC1FEBS_P1FEBSC1_POSN                  equ 0001h
PSMC1FEBS_P1FEBSC1_POSITION              equ 0001h
PSMC1FEBS_P1FEBSC1_SIZE                  equ 0001h
PSMC1FEBS_P1FEBSC1_LENGTH                equ 0001h
PSMC1FEBS_P1FEBSC1_MASK                  equ 0002h
PSMC1FEBS_P1FEBSC2_POSN                  equ 0002h
PSMC1FEBS_P1FEBSC2_POSITION              equ 0002h
PSMC1FEBS_P1FEBSC2_SIZE                  equ 0001h
PSMC1FEBS_P1FEBSC2_LENGTH                equ 0001h
PSMC1FEBS_P1FEBSC2_MASK                  equ 0004h
PSMC1FEBS_P1FEBSC3_POSN                  equ 0003h
PSMC1FEBS_P1FEBSC3_POSITION              equ 0003h
PSMC1FEBS_P1FEBSC3_SIZE                  equ 0001h
PSMC1FEBS_P1FEBSC3_LENGTH                equ 0001h
PSMC1FEBS_P1FEBSC3_MASK                  equ 0008h
PSMC1FEBS_P1FEBSIN_POSN                  equ 0007h
PSMC1FEBS_P1FEBSIN_POSITION              equ 0007h
PSMC1FEBS_P1FEBSIN_SIZE                  equ 0001h
PSMC1FEBS_P1FEBSIN_LENGTH                equ 0001h
PSMC1FEBS_P1FEBSIN_MASK                  equ 0080h

// Register: PSMC1PHS
#define PSMC1PHS PSMC1PHS
PSMC1PHS                                 equ 081Ah
// bitfield definitions
PSMC1PHS_P1PHST_POSN                     equ 0000h
PSMC1PHS_P1PHST_POSITION                 equ 0000h
PSMC1PHS_P1PHST_SIZE                     equ 0001h
PSMC1PHS_P1PHST_LENGTH                   equ 0001h
PSMC1PHS_P1PHST_MASK                     equ 0001h
PSMC1PHS_P1PHSC1_POSN                    equ 0001h
PSMC1PHS_P1PHSC1_POSITION                equ 0001h
PSMC1PHS_P1PHSC1_SIZE                    equ 0001h
PSMC1PHS_P1PHSC1_LENGTH                  equ 0001h
PSMC1PHS_P1PHSC1_MASK                    equ 0002h
PSMC1PHS_P1PHSC2_POSN                    equ 0002h
PSMC1PHS_P1PHSC2_POSITION                equ 0002h
PSMC1PHS_P1PHSC2_SIZE                    equ 0001h
PSMC1PHS_P1PHSC2_LENGTH                  equ 0001h
PSMC1PHS_P1PHSC2_MASK                    equ 0004h
PSMC1PHS_P1PHSC3_POSN                    equ 0003h
PSMC1PHS_P1PHSC3_POSITION                equ 0003h
PSMC1PHS_P1PHSC3_SIZE                    equ 0001h
PSMC1PHS_P1PHSC3_LENGTH                  equ 0001h
PSMC1PHS_P1PHSC3_MASK                    equ 0008h
PSMC1PHS_P1PHSIN_POSN                    equ 0007h
PSMC1PHS_P1PHSIN_POSITION                equ 0007h
PSMC1PHS_P1PHSIN_SIZE                    equ 0001h
PSMC1PHS_P1PHSIN_LENGTH                  equ 0001h
PSMC1PHS_P1PHSIN_MASK                    equ 0080h

// Register: PSMC1DCS
#define PSMC1DCS PSMC1DCS
PSMC1DCS                                 equ 081Bh
// bitfield definitions
PSMC1DCS_P1DCST_POSN                     equ 0000h
PSMC1DCS_P1DCST_POSITION                 equ 0000h
PSMC1DCS_P1DCST_SIZE                     equ 0001h
PSMC1DCS_P1DCST_LENGTH                   equ 0001h
PSMC1DCS_P1DCST_MASK                     equ 0001h
PSMC1DCS_P1DCSC1_POSN                    equ 0001h
PSMC1DCS_P1DCSC1_POSITION                equ 0001h
PSMC1DCS_P1DCSC1_SIZE                    equ 0001h
PSMC1DCS_P1DCSC1_LENGTH                  equ 0001h
PSMC1DCS_P1DCSC1_MASK                    equ 0002h
PSMC1DCS_P1DCSC2_POSN                    equ 0002h
PSMC1DCS_P1DCSC2_POSITION                equ 0002h
PSMC1DCS_P1DCSC2_SIZE                    equ 0001h
PSMC1DCS_P1DCSC2_LENGTH                  equ 0001h
PSMC1DCS_P1DCSC2_MASK                    equ 0004h
PSMC1DCS_P1DCSC3_POSN                    equ 0003h
PSMC1DCS_P1DCSC3_POSITION                equ 0003h
PSMC1DCS_P1DCSC3_SIZE                    equ 0001h
PSMC1DCS_P1DCSC3_LENGTH                  equ 0001h
PSMC1DCS_P1DCSC3_MASK                    equ 0008h
PSMC1DCS_P1DCSIN_POSN                    equ 0007h
PSMC1DCS_P1DCSIN_POSITION                equ 0007h
PSMC1DCS_P1DCSIN_SIZE                    equ 0001h
PSMC1DCS_P1DCSIN_LENGTH                  equ 0001h
PSMC1DCS_P1DCSIN_MASK                    equ 0080h

// Register: PSMC1PRS
#define PSMC1PRS PSMC1PRS
PSMC1PRS                                 equ 081Ch
// bitfield definitions
PSMC1PRS_P1PRST_POSN                     equ 0000h
PSMC1PRS_P1PRST_POSITION                 equ 0000h
PSMC1PRS_P1PRST_SIZE                     equ 0001h
PSMC1PRS_P1PRST_LENGTH                   equ 0001h
PSMC1PRS_P1PRST_MASK                     equ 0001h
PSMC1PRS_P1PRSC1_POSN                    equ 0001h
PSMC1PRS_P1PRSC1_POSITION                equ 0001h
PSMC1PRS_P1PRSC1_SIZE                    equ 0001h
PSMC1PRS_P1PRSC1_LENGTH                  equ 0001h
PSMC1PRS_P1PRSC1_MASK                    equ 0002h
PSMC1PRS_P1PRSC2_POSN                    equ 0002h
PSMC1PRS_P1PRSC2_POSITION                equ 0002h
PSMC1PRS_P1PRSC2_SIZE                    equ 0001h
PSMC1PRS_P1PRSC2_LENGTH                  equ 0001h
PSMC1PRS_P1PRSC2_MASK                    equ 0004h
PSMC1PRS_P1PRSC3_POSN                    equ 0003h
PSMC1PRS_P1PRSC3_POSITION                equ 0003h
PSMC1PRS_P1PRSC3_SIZE                    equ 0001h
PSMC1PRS_P1PRSC3_LENGTH                  equ 0001h
PSMC1PRS_P1PRSC3_MASK                    equ 0008h
PSMC1PRS_P1PRSIN_POSN                    equ 0007h
PSMC1PRS_P1PRSIN_POSITION                equ 0007h
PSMC1PRS_P1PRSIN_SIZE                    equ 0001h
PSMC1PRS_P1PRSIN_LENGTH                  equ 0001h
PSMC1PRS_P1PRSIN_MASK                    equ 0080h

// Register: PSMC1ASDC
#define PSMC1ASDC PSMC1ASDC
PSMC1ASDC                                equ 081Dh
// bitfield definitions
PSMC1ASDC_P1ASDOV_POSN                   equ 0000h
PSMC1ASDC_P1ASDOV_POSITION               equ 0000h
PSMC1ASDC_P1ASDOV_SIZE                   equ 0001h
PSMC1ASDC_P1ASDOV_LENGTH                 equ 0001h
PSMC1ASDC_P1ASDOV_MASK                   equ 0001h
PSMC1ASDC_P1ARSEN_POSN                   equ 0005h
PSMC1ASDC_P1ARSEN_POSITION               equ 0005h
PSMC1ASDC_P1ARSEN_SIZE                   equ 0001h
PSMC1ASDC_P1ARSEN_LENGTH                 equ 0001h
PSMC1ASDC_P1ARSEN_MASK                   equ 0020h
PSMC1ASDC_P1ASDEN_POSN                   equ 0006h
PSMC1ASDC_P1ASDEN_POSITION               equ 0006h
PSMC1ASDC_P1ASDEN_SIZE                   equ 0001h
PSMC1ASDC_P1ASDEN_LENGTH                 equ 0001h
PSMC1ASDC_P1ASDEN_MASK                   equ 0040h
PSMC1ASDC_P1ASE_POSN                     equ 0007h
PSMC1ASDC_P1ASE_POSITION                 equ 0007h
PSMC1ASDC_P1ASE_SIZE                     equ 0001h
PSMC1ASDC_P1ASE_LENGTH                   equ 0001h
PSMC1ASDC_P1ASE_MASK                     equ 0080h

// Register: PSMC1ASDL
#define PSMC1ASDL PSMC1ASDL
PSMC1ASDL                                equ 081Eh
// bitfield definitions
PSMC1ASDL_P1ASDLA_POSN                   equ 0000h
PSMC1ASDL_P1ASDLA_POSITION               equ 0000h
PSMC1ASDL_P1ASDLA_SIZE                   equ 0001h
PSMC1ASDL_P1ASDLA_LENGTH                 equ 0001h
PSMC1ASDL_P1ASDLA_MASK                   equ 0001h
PSMC1ASDL_P1ASDLB_POSN                   equ 0001h
PSMC1ASDL_P1ASDLB_POSITION               equ 0001h
PSMC1ASDL_P1ASDLB_SIZE                   equ 0001h
PSMC1ASDL_P1ASDLB_LENGTH                 equ 0001h
PSMC1ASDL_P1ASDLB_MASK                   equ 0002h
PSMC1ASDL_P1ASDLC_POSN                   equ 0002h
PSMC1ASDL_P1ASDLC_POSITION               equ 0002h
PSMC1ASDL_P1ASDLC_SIZE                   equ 0001h
PSMC1ASDL_P1ASDLC_LENGTH                 equ 0001h
PSMC1ASDL_P1ASDLC_MASK                   equ 0004h
PSMC1ASDL_P1ASDLD_POSN                   equ 0003h
PSMC1ASDL_P1ASDLD_POSITION               equ 0003h
PSMC1ASDL_P1ASDLD_SIZE                   equ 0001h
PSMC1ASDL_P1ASDLD_LENGTH                 equ 0001h
PSMC1ASDL_P1ASDLD_MASK                   equ 0008h
PSMC1ASDL_P1ASDLE_POSN                   equ 0004h
PSMC1ASDL_P1ASDLE_POSITION               equ 0004h
PSMC1ASDL_P1ASDLE_SIZE                   equ 0001h
PSMC1ASDL_P1ASDLE_LENGTH                 equ 0001h
PSMC1ASDL_P1ASDLE_MASK                   equ 0010h
PSMC1ASDL_P1ASDLF_POSN                   equ 0005h
PSMC1ASDL_P1ASDLF_POSITION               equ 0005h
PSMC1ASDL_P1ASDLF_SIZE                   equ 0001h
PSMC1ASDL_P1ASDLF_LENGTH                 equ 0001h
PSMC1ASDL_P1ASDLF_MASK                   equ 0020h

// Register: PSMC1ASDS
#define PSMC1ASDS PSMC1ASDS
PSMC1ASDS                                equ 081Fh
// bitfield definitions
PSMC1ASDS_P1ASDSC1_POSN                  equ 0001h
PSMC1ASDS_P1ASDSC1_POSITION              equ 0001h
PSMC1ASDS_P1ASDSC1_SIZE                  equ 0001h
PSMC1ASDS_P1ASDSC1_LENGTH                equ 0001h
PSMC1ASDS_P1ASDSC1_MASK                  equ 0002h
PSMC1ASDS_P1ASDSC2_POSN                  equ 0002h
PSMC1ASDS_P1ASDSC2_POSITION              equ 0002h
PSMC1ASDS_P1ASDSC2_SIZE                  equ 0001h
PSMC1ASDS_P1ASDSC2_LENGTH                equ 0001h
PSMC1ASDS_P1ASDSC2_MASK                  equ 0004h
PSMC1ASDS_P1ASDSC3_POSN                  equ 0003h
PSMC1ASDS_P1ASDSC3_POSITION              equ 0003h
PSMC1ASDS_P1ASDSC3_SIZE                  equ 0001h
PSMC1ASDS_P1ASDSC3_LENGTH                equ 0001h
PSMC1ASDS_P1ASDSC3_MASK                  equ 0008h
PSMC1ASDS_P1ASDSIN_POSN                  equ 0007h
PSMC1ASDS_P1ASDSIN_POSITION              equ 0007h
PSMC1ASDS_P1ASDSIN_SIZE                  equ 0001h
PSMC1ASDS_P1ASDSIN_LENGTH                equ 0001h
PSMC1ASDS_P1ASDSIN_MASK                  equ 0080h

// Register: PSMC1INT
#define PSMC1INT PSMC1INT
PSMC1INT                                 equ 0820h
// bitfield definitions
PSMC1INT_P1TPRIF_POSN                    equ 0000h
PSMC1INT_P1TPRIF_POSITION                equ 0000h
PSMC1INT_P1TPRIF_SIZE                    equ 0001h
PSMC1INT_P1TPRIF_LENGTH                  equ 0001h
PSMC1INT_P1TPRIF_MASK                    equ 0001h
PSMC1INT_P1TDCIF_POSN                    equ 0001h
PSMC1INT_P1TDCIF_POSITION                equ 0001h
PSMC1INT_P1TDCIF_SIZE                    equ 0001h
PSMC1INT_P1TDCIF_LENGTH                  equ 0001h
PSMC1INT_P1TDCIF_MASK                    equ 0002h
PSMC1INT_P1TPHIF_POSN                    equ 0002h
PSMC1INT_P1TPHIF_POSITION                equ 0002h
PSMC1INT_P1TPHIF_SIZE                    equ 0001h
PSMC1INT_P1TPHIF_LENGTH                  equ 0001h
PSMC1INT_P1TPHIF_MASK                    equ 0004h
PSMC1INT_P1TOVIF_POSN                    equ 0003h
PSMC1INT_P1TOVIF_POSITION                equ 0003h
PSMC1INT_P1TOVIF_SIZE                    equ 0001h
PSMC1INT_P1TOVIF_LENGTH                  equ 0001h
PSMC1INT_P1TOVIF_MASK                    equ 0008h
PSMC1INT_P1TPRIE_POSN                    equ 0004h
PSMC1INT_P1TPRIE_POSITION                equ 0004h
PSMC1INT_P1TPRIE_SIZE                    equ 0001h
PSMC1INT_P1TPRIE_LENGTH                  equ 0001h
PSMC1INT_P1TPRIE_MASK                    equ 0010h
PSMC1INT_P1TDCIE_POSN                    equ 0005h
PSMC1INT_P1TDCIE_POSITION                equ 0005h
PSMC1INT_P1TDCIE_SIZE                    equ 0001h
PSMC1INT_P1TDCIE_LENGTH                  equ 0001h
PSMC1INT_P1TDCIE_MASK                    equ 0020h
PSMC1INT_P1TPHIE_POSN                    equ 0006h
PSMC1INT_P1TPHIE_POSITION                equ 0006h
PSMC1INT_P1TPHIE_SIZE                    equ 0001h
PSMC1INT_P1TPHIE_LENGTH                  equ 0001h
PSMC1INT_P1TPHIE_MASK                    equ 0040h
PSMC1INT_P1TOVIE_POSN                    equ 0007h
PSMC1INT_P1TOVIE_POSITION                equ 0007h
PSMC1INT_P1TOVIE_SIZE                    equ 0001h
PSMC1INT_P1TOVIE_LENGTH                  equ 0001h
PSMC1INT_P1TOVIE_MASK                    equ 0080h

// Register: PSMC1PHL
#define PSMC1PHL PSMC1PHL
PSMC1PHL                                 equ 0821h
// bitfield definitions
PSMC1PHL_PSMC1PH0_POSN                   equ 0000h
PSMC1PHL_PSMC1PH0_POSITION               equ 0000h
PSMC1PHL_PSMC1PH0_SIZE                   equ 0001h
PSMC1PHL_PSMC1PH0_LENGTH                 equ 0001h
PSMC1PHL_PSMC1PH0_MASK                   equ 0001h
PSMC1PHL_PSMC1PH1_POSN                   equ 0001h
PSMC1PHL_PSMC1PH1_POSITION               equ 0001h
PSMC1PHL_PSMC1PH1_SIZE                   equ 0001h
PSMC1PHL_PSMC1PH1_LENGTH                 equ 0001h
PSMC1PHL_PSMC1PH1_MASK                   equ 0002h
PSMC1PHL_PSMC1PH2_POSN                   equ 0002h
PSMC1PHL_PSMC1PH2_POSITION               equ 0002h
PSMC1PHL_PSMC1PH2_SIZE                   equ 0001h
PSMC1PHL_PSMC1PH2_LENGTH                 equ 0001h
PSMC1PHL_PSMC1PH2_MASK                   equ 0004h
PSMC1PHL_PSMC1PH3_POSN                   equ 0003h
PSMC1PHL_PSMC1PH3_POSITION               equ 0003h
PSMC1PHL_PSMC1PH3_SIZE                   equ 0001h
PSMC1PHL_PSMC1PH3_LENGTH                 equ 0001h
PSMC1PHL_PSMC1PH3_MASK                   equ 0008h
PSMC1PHL_PSMC1PH4_POSN                   equ 0004h
PSMC1PHL_PSMC1PH4_POSITION               equ 0004h
PSMC1PHL_PSMC1PH4_SIZE                   equ 0001h
PSMC1PHL_PSMC1PH4_LENGTH                 equ 0001h
PSMC1PHL_PSMC1PH4_MASK                   equ 0010h
PSMC1PHL_PSMC1PH5_POSN                   equ 0005h
PSMC1PHL_PSMC1PH5_POSITION               equ 0005h
PSMC1PHL_PSMC1PH5_SIZE                   equ 0001h
PSMC1PHL_PSMC1PH5_LENGTH                 equ 0001h
PSMC1PHL_PSMC1PH5_MASK                   equ 0020h
PSMC1PHL_PSMC1PH6_POSN                   equ 0006h
PSMC1PHL_PSMC1PH6_POSITION               equ 0006h
PSMC1PHL_PSMC1PH6_SIZE                   equ 0001h
PSMC1PHL_PSMC1PH6_LENGTH                 equ 0001h
PSMC1PHL_PSMC1PH6_MASK                   equ 0040h
PSMC1PHL_PSMC1PH7_POSN                   equ 0007h
PSMC1PHL_PSMC1PH7_POSITION               equ 0007h
PSMC1PHL_PSMC1PH7_SIZE                   equ 0001h
PSMC1PHL_PSMC1PH7_LENGTH                 equ 0001h
PSMC1PHL_PSMC1PH7_MASK                   equ 0080h

// Register: PSMC1PHH
#define PSMC1PHH PSMC1PHH
PSMC1PHH                                 equ 0822h
// bitfield definitions
PSMC1PHH_PSMC1PH8_POSN                   equ 0000h
PSMC1PHH_PSMC1PH8_POSITION               equ 0000h
PSMC1PHH_PSMC1PH8_SIZE                   equ 0001h
PSMC1PHH_PSMC1PH8_LENGTH                 equ 0001h
PSMC1PHH_PSMC1PH8_MASK                   equ 0001h
PSMC1PHH_PSMC1PH9_POSN                   equ 0001h
PSMC1PHH_PSMC1PH9_POSITION               equ 0001h
PSMC1PHH_PSMC1PH9_SIZE                   equ 0001h
PSMC1PHH_PSMC1PH9_LENGTH                 equ 0001h
PSMC1PHH_PSMC1PH9_MASK                   equ 0002h
PSMC1PHH_PSMC1PH10_POSN                  equ 0002h
PSMC1PHH_PSMC1PH10_POSITION              equ 0002h
PSMC1PHH_PSMC1PH10_SIZE                  equ 0001h
PSMC1PHH_PSMC1PH10_LENGTH                equ 0001h
PSMC1PHH_PSMC1PH10_MASK                  equ 0004h
PSMC1PHH_PSMC1PH11_POSN                  equ 0003h
PSMC1PHH_PSMC1PH11_POSITION              equ 0003h
PSMC1PHH_PSMC1PH11_SIZE                  equ 0001h
PSMC1PHH_PSMC1PH11_LENGTH                equ 0001h
PSMC1PHH_PSMC1PH11_MASK                  equ 0008h
PSMC1PHH_PSMC1PH12_POSN                  equ 0004h
PSMC1PHH_PSMC1PH12_POSITION              equ 0004h
PSMC1PHH_PSMC1PH12_SIZE                  equ 0001h
PSMC1PHH_PSMC1PH12_LENGTH                equ 0001h
PSMC1PHH_PSMC1PH12_MASK                  equ 0010h
PSMC1PHH_PSMC1PH13_POSN                  equ 0005h
PSMC1PHH_PSMC1PH13_POSITION              equ 0005h
PSMC1PHH_PSMC1PH13_SIZE                  equ 0001h
PSMC1PHH_PSMC1PH13_LENGTH                equ 0001h
PSMC1PHH_PSMC1PH13_MASK                  equ 0020h
PSMC1PHH_PSMC1PH14_POSN                  equ 0006h
PSMC1PHH_PSMC1PH14_POSITION              equ 0006h
PSMC1PHH_PSMC1PH14_SIZE                  equ 0001h
PSMC1PHH_PSMC1PH14_LENGTH                equ 0001h
PSMC1PHH_PSMC1PH14_MASK                  equ 0040h
PSMC1PHH_PSMC1PH15_POSN                  equ 0007h
PSMC1PHH_PSMC1PH15_POSITION              equ 0007h
PSMC1PHH_PSMC1PH15_SIZE                  equ 0001h
PSMC1PHH_PSMC1PH15_LENGTH                equ 0001h
PSMC1PHH_PSMC1PH15_MASK                  equ 0080h

// Register: PSMC1DCL
#define PSMC1DCL PSMC1DCL
PSMC1DCL                                 equ 0823h
// bitfield definitions
PSMC1DCL_PSMC1DC0_POSN                   equ 0000h
PSMC1DCL_PSMC1DC0_POSITION               equ 0000h
PSMC1DCL_PSMC1DC0_SIZE                   equ 0001h
PSMC1DCL_PSMC1DC0_LENGTH                 equ 0001h
PSMC1DCL_PSMC1DC0_MASK                   equ 0001h
PSMC1DCL_PSMC1DC1_POSN                   equ 0001h
PSMC1DCL_PSMC1DC1_POSITION               equ 0001h
PSMC1DCL_PSMC1DC1_SIZE                   equ 0001h
PSMC1DCL_PSMC1DC1_LENGTH                 equ 0001h
PSMC1DCL_PSMC1DC1_MASK                   equ 0002h
PSMC1DCL_PSMC1DC2_POSN                   equ 0002h
PSMC1DCL_PSMC1DC2_POSITION               equ 0002h
PSMC1DCL_PSMC1DC2_SIZE                   equ 0001h
PSMC1DCL_PSMC1DC2_LENGTH                 equ 0001h
PSMC1DCL_PSMC1DC2_MASK                   equ 0004h
PSMC1DCL_PSMC1DC3_POSN                   equ 0003h
PSMC1DCL_PSMC1DC3_POSITION               equ 0003h
PSMC1DCL_PSMC1DC3_SIZE                   equ 0001h
PSMC1DCL_PSMC1DC3_LENGTH                 equ 0001h
PSMC1DCL_PSMC1DC3_MASK                   equ 0008h
PSMC1DCL_PSMC1DC4_POSN                   equ 0004h
PSMC1DCL_PSMC1DC4_POSITION               equ 0004h
PSMC1DCL_PSMC1DC4_SIZE                   equ 0001h
PSMC1DCL_PSMC1DC4_LENGTH                 equ 0001h
PSMC1DCL_PSMC1DC4_MASK                   equ 0010h
PSMC1DCL_PSMC1DC5_POSN                   equ 0005h
PSMC1DCL_PSMC1DC5_POSITION               equ 0005h
PSMC1DCL_PSMC1DC5_SIZE                   equ 0001h
PSMC1DCL_PSMC1DC5_LENGTH                 equ 0001h
PSMC1DCL_PSMC1DC5_MASK                   equ 0020h
PSMC1DCL_PSMC1DC6_POSN                   equ 0006h
PSMC1DCL_PSMC1DC6_POSITION               equ 0006h
PSMC1DCL_PSMC1DC6_SIZE                   equ 0001h
PSMC1DCL_PSMC1DC6_LENGTH                 equ 0001h
PSMC1DCL_PSMC1DC6_MASK                   equ 0040h
PSMC1DCL_PSMC1DC7_POSN                   equ 0007h
PSMC1DCL_PSMC1DC7_POSITION               equ 0007h
PSMC1DCL_PSMC1DC7_SIZE                   equ 0001h
PSMC1DCL_PSMC1DC7_LENGTH                 equ 0001h
PSMC1DCL_PSMC1DC7_MASK                   equ 0080h

// Register: PSMC1DCH
#define PSMC1DCH PSMC1DCH
PSMC1DCH                                 equ 0824h
// bitfield definitions
PSMC1DCH_PSMC1DC8_POSN                   equ 0000h
PSMC1DCH_PSMC1DC8_POSITION               equ 0000h
PSMC1DCH_PSMC1DC8_SIZE                   equ 0001h
PSMC1DCH_PSMC1DC8_LENGTH                 equ 0001h
PSMC1DCH_PSMC1DC8_MASK                   equ 0001h
PSMC1DCH_PSMC1DC9_POSN                   equ 0001h
PSMC1DCH_PSMC1DC9_POSITION               equ 0001h
PSMC1DCH_PSMC1DC9_SIZE                   equ 0001h
PSMC1DCH_PSMC1DC9_LENGTH                 equ 0001h
PSMC1DCH_PSMC1DC9_MASK                   equ 0002h
PSMC1DCH_PSMC1DC10_POSN                  equ 0002h
PSMC1DCH_PSMC1DC10_POSITION              equ 0002h
PSMC1DCH_PSMC1DC10_SIZE                  equ 0001h
PSMC1DCH_PSMC1DC10_LENGTH                equ 0001h
PSMC1DCH_PSMC1DC10_MASK                  equ 0004h
PSMC1DCH_PSMC1DC11_POSN                  equ 0003h
PSMC1DCH_PSMC1DC11_POSITION              equ 0003h
PSMC1DCH_PSMC1DC11_SIZE                  equ 0001h
PSMC1DCH_PSMC1DC11_LENGTH                equ 0001h
PSMC1DCH_PSMC1DC11_MASK                  equ 0008h
PSMC1DCH_PSMC1DC12_POSN                  equ 0004h
PSMC1DCH_PSMC1DC12_POSITION              equ 0004h
PSMC1DCH_PSMC1DC12_SIZE                  equ 0001h
PSMC1DCH_PSMC1DC12_LENGTH                equ 0001h
PSMC1DCH_PSMC1DC12_MASK                  equ 0010h
PSMC1DCH_PSMC1DC13_POSN                  equ 0005h
PSMC1DCH_PSMC1DC13_POSITION              equ 0005h
PSMC1DCH_PSMC1DC13_SIZE                  equ 0001h
PSMC1DCH_PSMC1DC13_LENGTH                equ 0001h
PSMC1DCH_PSMC1DC13_MASK                  equ 0020h
PSMC1DCH_PSMC1DC14_POSN                  equ 0006h
PSMC1DCH_PSMC1DC14_POSITION              equ 0006h
PSMC1DCH_PSMC1DC14_SIZE                  equ 0001h
PSMC1DCH_PSMC1DC14_LENGTH                equ 0001h
PSMC1DCH_PSMC1DC14_MASK                  equ 0040h
PSMC1DCH_PSMC1DC15_POSN                  equ 0007h
PSMC1DCH_PSMC1DC15_POSITION              equ 0007h
PSMC1DCH_PSMC1DC15_SIZE                  equ 0001h
PSMC1DCH_PSMC1DC15_LENGTH                equ 0001h
PSMC1DCH_PSMC1DC15_MASK                  equ 0080h

// Register: PSMC1PRL
#define PSMC1PRL PSMC1PRL
PSMC1PRL                                 equ 0825h
// bitfield definitions
PSMC1PRL_PSMC1PR0_POSN                   equ 0000h
PSMC1PRL_PSMC1PR0_POSITION               equ 0000h
PSMC1PRL_PSMC1PR0_SIZE                   equ 0001h
PSMC1PRL_PSMC1PR0_LENGTH                 equ 0001h
PSMC1PRL_PSMC1PR0_MASK                   equ 0001h
PSMC1PRL_PSMC1PR1_POSN                   equ 0001h
PSMC1PRL_PSMC1PR1_POSITION               equ 0001h
PSMC1PRL_PSMC1PR1_SIZE                   equ 0001h
PSMC1PRL_PSMC1PR1_LENGTH                 equ 0001h
PSMC1PRL_PSMC1PR1_MASK                   equ 0002h
PSMC1PRL_PSMC1PR2_POSN                   equ 0002h
PSMC1PRL_PSMC1PR2_POSITION               equ 0002h
PSMC1PRL_PSMC1PR2_SIZE                   equ 0001h
PSMC1PRL_PSMC1PR2_LENGTH                 equ 0001h
PSMC1PRL_PSMC1PR2_MASK                   equ 0004h
PSMC1PRL_PSMC1PR3_POSN                   equ 0003h
PSMC1PRL_PSMC1PR3_POSITION               equ 0003h
PSMC1PRL_PSMC1PR3_SIZE                   equ 0001h
PSMC1PRL_PSMC1PR3_LENGTH                 equ 0001h
PSMC1PRL_PSMC1PR3_MASK                   equ 0008h
PSMC1PRL_PSMC1PR4_POSN                   equ 0004h
PSMC1PRL_PSMC1PR4_POSITION               equ 0004h
PSMC1PRL_PSMC1PR4_SIZE                   equ 0001h
PSMC1PRL_PSMC1PR4_LENGTH                 equ 0001h
PSMC1PRL_PSMC1PR4_MASK                   equ 0010h
PSMC1PRL_PSMC1PR5_POSN                   equ 0005h
PSMC1PRL_PSMC1PR5_POSITION               equ 0005h
PSMC1PRL_PSMC1PR5_SIZE                   equ 0001h
PSMC1PRL_PSMC1PR5_LENGTH                 equ 0001h
PSMC1PRL_PSMC1PR5_MASK                   equ 0020h
PSMC1PRL_PSMC1PR6_POSN                   equ 0006h
PSMC1PRL_PSMC1PR6_POSITION               equ 0006h
PSMC1PRL_PSMC1PR6_SIZE                   equ 0001h
PSMC1PRL_PSMC1PR6_LENGTH                 equ 0001h
PSMC1PRL_PSMC1PR6_MASK                   equ 0040h
PSMC1PRL_PSMC1PR7_POSN                   equ 0007h
PSMC1PRL_PSMC1PR7_POSITION               equ 0007h
PSMC1PRL_PSMC1PR7_SIZE                   equ 0001h
PSMC1PRL_PSMC1PR7_LENGTH                 equ 0001h
PSMC1PRL_PSMC1PR7_MASK                   equ 0080h

// Register: PSMC1PRH
#define PSMC1PRH PSMC1PRH
PSMC1PRH                                 equ 0826h
// bitfield definitions
PSMC1PRH_PSMC1PR8_POSN                   equ 0000h
PSMC1PRH_PSMC1PR8_POSITION               equ 0000h
PSMC1PRH_PSMC1PR8_SIZE                   equ 0001h
PSMC1PRH_PSMC1PR8_LENGTH                 equ 0001h
PSMC1PRH_PSMC1PR8_MASK                   equ 0001h
PSMC1PRH_PSMC1PR9_POSN                   equ 0001h
PSMC1PRH_PSMC1PR9_POSITION               equ 0001h
PSMC1PRH_PSMC1PR9_SIZE                   equ 0001h
PSMC1PRH_PSMC1PR9_LENGTH                 equ 0001h
PSMC1PRH_PSMC1PR9_MASK                   equ 0002h
PSMC1PRH_PSMC1PR10_POSN                  equ 0002h
PSMC1PRH_PSMC1PR10_POSITION              equ 0002h
PSMC1PRH_PSMC1PR10_SIZE                  equ 0001h
PSMC1PRH_PSMC1PR10_LENGTH                equ 0001h
PSMC1PRH_PSMC1PR10_MASK                  equ 0004h
PSMC1PRH_PSMC1PR11_POSN                  equ 0003h
PSMC1PRH_PSMC1PR11_POSITION              equ 0003h
PSMC1PRH_PSMC1PR11_SIZE                  equ 0001h
PSMC1PRH_PSMC1PR11_LENGTH                equ 0001h
PSMC1PRH_PSMC1PR11_MASK                  equ 0008h
PSMC1PRH_PSMC1PR12_POSN                  equ 0004h
PSMC1PRH_PSMC1PR12_POSITION              equ 0004h
PSMC1PRH_PSMC1PR12_SIZE                  equ 0001h
PSMC1PRH_PSMC1PR12_LENGTH                equ 0001h
PSMC1PRH_PSMC1PR12_MASK                  equ 0010h
PSMC1PRH_PSMC1PR13_POSN                  equ 0005h
PSMC1PRH_PSMC1PR13_POSITION              equ 0005h
PSMC1PRH_PSMC1PR13_SIZE                  equ 0001h
PSMC1PRH_PSMC1PR13_LENGTH                equ 0001h
PSMC1PRH_PSMC1PR13_MASK                  equ 0020h
PSMC1PRH_PSMC1PR14_POSN                  equ 0006h
PSMC1PRH_PSMC1PR14_POSITION              equ 0006h
PSMC1PRH_PSMC1PR14_SIZE                  equ 0001h
PSMC1PRH_PSMC1PR14_LENGTH                equ 0001h
PSMC1PRH_PSMC1PR14_MASK                  equ 0040h
PSMC1PRH_PSMC1PR15_POSN                  equ 0007h
PSMC1PRH_PSMC1PR15_POSITION              equ 0007h
PSMC1PRH_PSMC1PR15_SIZE                  equ 0001h
PSMC1PRH_PSMC1PR15_LENGTH                equ 0001h
PSMC1PRH_PSMC1PR15_MASK                  equ 0080h

// Register: PSMC1TMRL
#define PSMC1TMRL PSMC1TMRL
PSMC1TMRL                                equ 0827h
// bitfield definitions
PSMC1TMRL_PSMC1TMR0_POSN                 equ 0000h
PSMC1TMRL_PSMC1TMR0_POSITION             equ 0000h
PSMC1TMRL_PSMC1TMR0_SIZE                 equ 0001h
PSMC1TMRL_PSMC1TMR0_LENGTH               equ 0001h
PSMC1TMRL_PSMC1TMR0_MASK                 equ 0001h
PSMC1TMRL_PSMC1TMR1_POSN                 equ 0001h
PSMC1TMRL_PSMC1TMR1_POSITION             equ 0001h
PSMC1TMRL_PSMC1TMR1_SIZE                 equ 0001h
PSMC1TMRL_PSMC1TMR1_LENGTH               equ 0001h
PSMC1TMRL_PSMC1TMR1_MASK                 equ 0002h
PSMC1TMRL_PSMC1TMR2_POSN                 equ 0002h
PSMC1TMRL_PSMC1TMR2_POSITION             equ 0002h
PSMC1TMRL_PSMC1TMR2_SIZE                 equ 0001h
PSMC1TMRL_PSMC1TMR2_LENGTH               equ 0001h
PSMC1TMRL_PSMC1TMR2_MASK                 equ 0004h
PSMC1TMRL_PSMC1TMR3_POSN                 equ 0003h
PSMC1TMRL_PSMC1TMR3_POSITION             equ 0003h
PSMC1TMRL_PSMC1TMR3_SIZE                 equ 0001h
PSMC1TMRL_PSMC1TMR3_LENGTH               equ 0001h
PSMC1TMRL_PSMC1TMR3_MASK                 equ 0008h
PSMC1TMRL_PSMC1TMR4_POSN                 equ 0004h
PSMC1TMRL_PSMC1TMR4_POSITION             equ 0004h
PSMC1TMRL_PSMC1TMR4_SIZE                 equ 0001h
PSMC1TMRL_PSMC1TMR4_LENGTH               equ 0001h
PSMC1TMRL_PSMC1TMR4_MASK                 equ 0010h
PSMC1TMRL_PSMC1TMR5_POSN                 equ 0005h
PSMC1TMRL_PSMC1TMR5_POSITION             equ 0005h
PSMC1TMRL_PSMC1TMR5_SIZE                 equ 0001h
PSMC1TMRL_PSMC1TMR5_LENGTH               equ 0001h
PSMC1TMRL_PSMC1TMR5_MASK                 equ 0020h
PSMC1TMRL_PSMC1TMR6_POSN                 equ 0006h
PSMC1TMRL_PSMC1TMR6_POSITION             equ 0006h
PSMC1TMRL_PSMC1TMR6_SIZE                 equ 0001h
PSMC1TMRL_PSMC1TMR6_LENGTH               equ 0001h
PSMC1TMRL_PSMC1TMR6_MASK                 equ 0040h
PSMC1TMRL_PSMC1TMR7_POSN                 equ 0007h
PSMC1TMRL_PSMC1TMR7_POSITION             equ 0007h
PSMC1TMRL_PSMC1TMR7_SIZE                 equ 0001h
PSMC1TMRL_PSMC1TMR7_LENGTH               equ 0001h
PSMC1TMRL_PSMC1TMR7_MASK                 equ 0080h

// Register: PSMC1TMRH
#define PSMC1TMRH PSMC1TMRH
PSMC1TMRH                                equ 0828h
// bitfield definitions
PSMC1TMRH_PSMC1TMR8_POSN                 equ 0000h
PSMC1TMRH_PSMC1TMR8_POSITION             equ 0000h
PSMC1TMRH_PSMC1TMR8_SIZE                 equ 0001h
PSMC1TMRH_PSMC1TMR8_LENGTH               equ 0001h
PSMC1TMRH_PSMC1TMR8_MASK                 equ 0001h
PSMC1TMRH_PSMC1TMR9_POSN                 equ 0001h
PSMC1TMRH_PSMC1TMR9_POSITION             equ 0001h
PSMC1TMRH_PSMC1TMR9_SIZE                 equ 0001h
PSMC1TMRH_PSMC1TMR9_LENGTH               equ 0001h
PSMC1TMRH_PSMC1TMR9_MASK                 equ 0002h
PSMC1TMRH_PSMC1TMR10_POSN                equ 0002h
PSMC1TMRH_PSMC1TMR10_POSITION            equ 0002h
PSMC1TMRH_PSMC1TMR10_SIZE                equ 0001h
PSMC1TMRH_PSMC1TMR10_LENGTH              equ 0001h
PSMC1TMRH_PSMC1TMR10_MASK                equ 0004h
PSMC1TMRH_PSMC1TMR11_POSN                equ 0003h
PSMC1TMRH_PSMC1TMR11_POSITION            equ 0003h
PSMC1TMRH_PSMC1TMR11_SIZE                equ 0001h
PSMC1TMRH_PSMC1TMR11_LENGTH              equ 0001h
PSMC1TMRH_PSMC1TMR11_MASK                equ 0008h
PSMC1TMRH_PSMC1TMR12_POSN                equ 0004h
PSMC1TMRH_PSMC1TMR12_POSITION            equ 0004h
PSMC1TMRH_PSMC1TMR12_SIZE                equ 0001h
PSMC1TMRH_PSMC1TMR12_LENGTH              equ 0001h
PSMC1TMRH_PSMC1TMR12_MASK                equ 0010h
PSMC1TMRH_PSMC1TMR13_POSN                equ 0005h
PSMC1TMRH_PSMC1TMR13_POSITION            equ 0005h
PSMC1TMRH_PSMC1TMR13_SIZE                equ 0001h
PSMC1TMRH_PSMC1TMR13_LENGTH              equ 0001h
PSMC1TMRH_PSMC1TMR13_MASK                equ 0020h
PSMC1TMRH_PSMC1TMR14_POSN                equ 0006h
PSMC1TMRH_PSMC1TMR14_POSITION            equ 0006h
PSMC1TMRH_PSMC1TMR14_SIZE                equ 0001h
PSMC1TMRH_PSMC1TMR14_LENGTH              equ 0001h
PSMC1TMRH_PSMC1TMR14_MASK                equ 0040h
PSMC1TMRH_PSMC1TMR15_POSN                equ 0007h
PSMC1TMRH_PSMC1TMR15_POSITION            equ 0007h
PSMC1TMRH_PSMC1TMR15_SIZE                equ 0001h
PSMC1TMRH_PSMC1TMR15_LENGTH              equ 0001h
PSMC1TMRH_PSMC1TMR15_MASK                equ 0080h

// Register: PSMC1DBR
#define PSMC1DBR PSMC1DBR
PSMC1DBR                                 equ 0829h
// bitfield definitions
PSMC1DBR_PSMC1DBR0_POSN                  equ 0000h
PSMC1DBR_PSMC1DBR0_POSITION              equ 0000h
PSMC1DBR_PSMC1DBR0_SIZE                  equ 0001h
PSMC1DBR_PSMC1DBR0_LENGTH                equ 0001h
PSMC1DBR_PSMC1DBR0_MASK                  equ 0001h
PSMC1DBR_PSMC1DBR1_POSN                  equ 0001h
PSMC1DBR_PSMC1DBR1_POSITION              equ 0001h
PSMC1DBR_PSMC1DBR1_SIZE                  equ 0001h
PSMC1DBR_PSMC1DBR1_LENGTH                equ 0001h
PSMC1DBR_PSMC1DBR1_MASK                  equ 0002h
PSMC1DBR_PSMC1DBR2_POSN                  equ 0002h
PSMC1DBR_PSMC1DBR2_POSITION              equ 0002h
PSMC1DBR_PSMC1DBR2_SIZE                  equ 0001h
PSMC1DBR_PSMC1DBR2_LENGTH                equ 0001h
PSMC1DBR_PSMC1DBR2_MASK                  equ 0004h
PSMC1DBR_PSMC1DBR3_POSN                  equ 0003h
PSMC1DBR_PSMC1DBR3_POSITION              equ 0003h
PSMC1DBR_PSMC1DBR3_SIZE                  equ 0001h
PSMC1DBR_PSMC1DBR3_LENGTH                equ 0001h
PSMC1DBR_PSMC1DBR3_MASK                  equ 0008h
PSMC1DBR_PSMC1DBR4_POSN                  equ 0004h
PSMC1DBR_PSMC1DBR4_POSITION              equ 0004h
PSMC1DBR_PSMC1DBR4_SIZE                  equ 0001h
PSMC1DBR_PSMC1DBR4_LENGTH                equ 0001h
PSMC1DBR_PSMC1DBR4_MASK                  equ 0010h
PSMC1DBR_PSMC1DBR5_POSN                  equ 0005h
PSMC1DBR_PSMC1DBR5_POSITION              equ 0005h
PSMC1DBR_PSMC1DBR5_SIZE                  equ 0001h
PSMC1DBR_PSMC1DBR5_LENGTH                equ 0001h
PSMC1DBR_PSMC1DBR5_MASK                  equ 0020h
PSMC1DBR_PSMC1DBR6_POSN                  equ 0006h
PSMC1DBR_PSMC1DBR6_POSITION              equ 0006h
PSMC1DBR_PSMC1DBR6_SIZE                  equ 0001h
PSMC1DBR_PSMC1DBR6_LENGTH                equ 0001h
PSMC1DBR_PSMC1DBR6_MASK                  equ 0040h
PSMC1DBR_PSMC1DBR7_POSN                  equ 0007h
PSMC1DBR_PSMC1DBR7_POSITION              equ 0007h
PSMC1DBR_PSMC1DBR7_SIZE                  equ 0001h
PSMC1DBR_PSMC1DBR7_LENGTH                equ 0001h
PSMC1DBR_PSMC1DBR7_MASK                  equ 0080h

// Register: PSMC1DBF
#define PSMC1DBF PSMC1DBF
PSMC1DBF                                 equ 082Ah
// bitfield definitions
PSMC1DBF_PSMC1DBF0_POSN                  equ 0000h
PSMC1DBF_PSMC1DBF0_POSITION              equ 0000h
PSMC1DBF_PSMC1DBF0_SIZE                  equ 0001h
PSMC1DBF_PSMC1DBF0_LENGTH                equ 0001h
PSMC1DBF_PSMC1DBF0_MASK                  equ 0001h
PSMC1DBF_PSMC1DBF1_POSN                  equ 0001h
PSMC1DBF_PSMC1DBF1_POSITION              equ 0001h
PSMC1DBF_PSMC1DBF1_SIZE                  equ 0001h
PSMC1DBF_PSMC1DBF1_LENGTH                equ 0001h
PSMC1DBF_PSMC1DBF1_MASK                  equ 0002h
PSMC1DBF_PSMC1DBF2_POSN                  equ 0002h
PSMC1DBF_PSMC1DBF2_POSITION              equ 0002h
PSMC1DBF_PSMC1DBF2_SIZE                  equ 0001h
PSMC1DBF_PSMC1DBF2_LENGTH                equ 0001h
PSMC1DBF_PSMC1DBF2_MASK                  equ 0004h
PSMC1DBF_PSMC1DBF3_POSN                  equ 0003h
PSMC1DBF_PSMC1DBF3_POSITION              equ 0003h
PSMC1DBF_PSMC1DBF3_SIZE                  equ 0001h
PSMC1DBF_PSMC1DBF3_LENGTH                equ 0001h
PSMC1DBF_PSMC1DBF3_MASK                  equ 0008h
PSMC1DBF_PSMC1DBF4_POSN                  equ 0004h
PSMC1DBF_PSMC1DBF4_POSITION              equ 0004h
PSMC1DBF_PSMC1DBF4_SIZE                  equ 0001h
PSMC1DBF_PSMC1DBF4_LENGTH                equ 0001h
PSMC1DBF_PSMC1DBF4_MASK                  equ 0010h
PSMC1DBF_PSMC1DBF5_POSN                  equ 0005h
PSMC1DBF_PSMC1DBF5_POSITION              equ 0005h
PSMC1DBF_PSMC1DBF5_SIZE                  equ 0001h
PSMC1DBF_PSMC1DBF5_LENGTH                equ 0001h
PSMC1DBF_PSMC1DBF5_MASK                  equ 0020h
PSMC1DBF_PSMC1DBF6_POSN                  equ 0006h
PSMC1DBF_PSMC1DBF6_POSITION              equ 0006h
PSMC1DBF_PSMC1DBF6_SIZE                  equ 0001h
PSMC1DBF_PSMC1DBF6_LENGTH                equ 0001h
PSMC1DBF_PSMC1DBF6_MASK                  equ 0040h
PSMC1DBF_PSMC1DBF7_POSN                  equ 0007h
PSMC1DBF_PSMC1DBF7_POSITION              equ 0007h
PSMC1DBF_PSMC1DBF7_SIZE                  equ 0001h
PSMC1DBF_PSMC1DBF7_LENGTH                equ 0001h
PSMC1DBF_PSMC1DBF7_MASK                  equ 0080h

// Register: PSMC1BLKR
#define PSMC1BLKR PSMC1BLKR
PSMC1BLKR                                equ 082Bh
// bitfield definitions
PSMC1BLKR_PSMC1BLKR0_POSN                equ 0000h
PSMC1BLKR_PSMC1BLKR0_POSITION            equ 0000h
PSMC1BLKR_PSMC1BLKR0_SIZE                equ 0001h
PSMC1BLKR_PSMC1BLKR0_LENGTH              equ 0001h
PSMC1BLKR_PSMC1BLKR0_MASK                equ 0001h
PSMC1BLKR_PSMC1BLKR1_POSN                equ 0001h
PSMC1BLKR_PSMC1BLKR1_POSITION            equ 0001h
PSMC1BLKR_PSMC1BLKR1_SIZE                equ 0001h
PSMC1BLKR_PSMC1BLKR1_LENGTH              equ 0001h
PSMC1BLKR_PSMC1BLKR1_MASK                equ 0002h
PSMC1BLKR_PSMC1BLKR2_POSN                equ 0002h
PSMC1BLKR_PSMC1BLKR2_POSITION            equ 0002h
PSMC1BLKR_PSMC1BLKR2_SIZE                equ 0001h
PSMC1BLKR_PSMC1BLKR2_LENGTH              equ 0001h
PSMC1BLKR_PSMC1BLKR2_MASK                equ 0004h
PSMC1BLKR_PSMC1BLKR3_POSN                equ 0003h
PSMC1BLKR_PSMC1BLKR3_POSITION            equ 0003h
PSMC1BLKR_PSMC1BLKR3_SIZE                equ 0001h
PSMC1BLKR_PSMC1BLKR3_LENGTH              equ 0001h
PSMC1BLKR_PSMC1BLKR3_MASK                equ 0008h
PSMC1BLKR_PSMC1BLKR4_POSN                equ 0004h
PSMC1BLKR_PSMC1BLKR4_POSITION            equ 0004h
PSMC1BLKR_PSMC1BLKR4_SIZE                equ 0001h
PSMC1BLKR_PSMC1BLKR4_LENGTH              equ 0001h
PSMC1BLKR_PSMC1BLKR4_MASK                equ 0010h
PSMC1BLKR_PSMC1BLKR5_POSN                equ 0005h
PSMC1BLKR_PSMC1BLKR5_POSITION            equ 0005h
PSMC1BLKR_PSMC1BLKR5_SIZE                equ 0001h
PSMC1BLKR_PSMC1BLKR5_LENGTH              equ 0001h
PSMC1BLKR_PSMC1BLKR5_MASK                equ 0020h
PSMC1BLKR_PSMC1BLKR6_POSN                equ 0006h
PSMC1BLKR_PSMC1BLKR6_POSITION            equ 0006h
PSMC1BLKR_PSMC1BLKR6_SIZE                equ 0001h
PSMC1BLKR_PSMC1BLKR6_LENGTH              equ 0001h
PSMC1BLKR_PSMC1BLKR6_MASK                equ 0040h
PSMC1BLKR_PSMC1BLKR7_POSN                equ 0007h
PSMC1BLKR_PSMC1BLKR7_POSITION            equ 0007h
PSMC1BLKR_PSMC1BLKR7_SIZE                equ 0001h
PSMC1BLKR_PSMC1BLKR7_LENGTH              equ 0001h
PSMC1BLKR_PSMC1BLKR7_MASK                equ 0080h

// Register: PSMC1BLKF
#define PSMC1BLKF PSMC1BLKF
PSMC1BLKF                                equ 082Ch
// bitfield definitions
PSMC1BLKF_PSMC1BLKF0_POSN                equ 0000h
PSMC1BLKF_PSMC1BLKF0_POSITION            equ 0000h
PSMC1BLKF_PSMC1BLKF0_SIZE                equ 0001h
PSMC1BLKF_PSMC1BLKF0_LENGTH              equ 0001h
PSMC1BLKF_PSMC1BLKF0_MASK                equ 0001h
PSMC1BLKF_PSMC1BLKF1_POSN                equ 0001h
PSMC1BLKF_PSMC1BLKF1_POSITION            equ 0001h
PSMC1BLKF_PSMC1BLKF1_SIZE                equ 0001h
PSMC1BLKF_PSMC1BLKF1_LENGTH              equ 0001h
PSMC1BLKF_PSMC1BLKF1_MASK                equ 0002h
PSMC1BLKF_PSMC1BLKF2_POSN                equ 0002h
PSMC1BLKF_PSMC1BLKF2_POSITION            equ 0002h
PSMC1BLKF_PSMC1BLKF2_SIZE                equ 0001h
PSMC1BLKF_PSMC1BLKF2_LENGTH              equ 0001h
PSMC1BLKF_PSMC1BLKF2_MASK                equ 0004h
PSMC1BLKF_PSMC1BLKF3_POSN                equ 0003h
PSMC1BLKF_PSMC1BLKF3_POSITION            equ 0003h
PSMC1BLKF_PSMC1BLKF3_SIZE                equ 0001h
PSMC1BLKF_PSMC1BLKF3_LENGTH              equ 0001h
PSMC1BLKF_PSMC1BLKF3_MASK                equ 0008h
PSMC1BLKF_PSMC1BLKF4_POSN                equ 0004h
PSMC1BLKF_PSMC1BLKF4_POSITION            equ 0004h
PSMC1BLKF_PSMC1BLKF4_SIZE                equ 0001h
PSMC1BLKF_PSMC1BLKF4_LENGTH              equ 0001h
PSMC1BLKF_PSMC1BLKF4_MASK                equ 0010h
PSMC1BLKF_PSMC1BLKF5_POSN                equ 0005h
PSMC1BLKF_PSMC1BLKF5_POSITION            equ 0005h
PSMC1BLKF_PSMC1BLKF5_SIZE                equ 0001h
PSMC1BLKF_PSMC1BLKF5_LENGTH              equ 0001h
PSMC1BLKF_PSMC1BLKF5_MASK                equ 0020h
PSMC1BLKF_PSMC1BLKF6_POSN                equ 0006h
PSMC1BLKF_PSMC1BLKF6_POSITION            equ 0006h
PSMC1BLKF_PSMC1BLKF6_SIZE                equ 0001h
PSMC1BLKF_PSMC1BLKF6_LENGTH              equ 0001h
PSMC1BLKF_PSMC1BLKF6_MASK                equ 0040h
PSMC1BLKF_PSMC1BLKF7_POSN                equ 0007h
PSMC1BLKF_PSMC1BLKF7_POSITION            equ 0007h
PSMC1BLKF_PSMC1BLKF7_SIZE                equ 0001h
PSMC1BLKF_PSMC1BLKF7_LENGTH              equ 0001h
PSMC1BLKF_PSMC1BLKF7_MASK                equ 0080h

// Register: PSMC1FFA
#define PSMC1FFA PSMC1FFA
PSMC1FFA                                 equ 082Dh
// bitfield definitions
PSMC1FFA_PSMC1FFA0_POSN                  equ 0000h
PSMC1FFA_PSMC1FFA0_POSITION              equ 0000h
PSMC1FFA_PSMC1FFA0_SIZE                  equ 0001h
PSMC1FFA_PSMC1FFA0_LENGTH                equ 0001h
PSMC1FFA_PSMC1FFA0_MASK                  equ 0001h
PSMC1FFA_PSMC1FFA1_POSN                  equ 0001h
PSMC1FFA_PSMC1FFA1_POSITION              equ 0001h
PSMC1FFA_PSMC1FFA1_SIZE                  equ 0001h
PSMC1FFA_PSMC1FFA1_LENGTH                equ 0001h
PSMC1FFA_PSMC1FFA1_MASK                  equ 0002h
PSMC1FFA_PSMC1FFA2_POSN                  equ 0002h
PSMC1FFA_PSMC1FFA2_POSITION              equ 0002h
PSMC1FFA_PSMC1FFA2_SIZE                  equ 0001h
PSMC1FFA_PSMC1FFA2_LENGTH                equ 0001h
PSMC1FFA_PSMC1FFA2_MASK                  equ 0004h
PSMC1FFA_PSMC1FFA3_POSN                  equ 0003h
PSMC1FFA_PSMC1FFA3_POSITION              equ 0003h
PSMC1FFA_PSMC1FFA3_SIZE                  equ 0001h
PSMC1FFA_PSMC1FFA3_LENGTH                equ 0001h
PSMC1FFA_PSMC1FFA3_MASK                  equ 0008h

// Register: PSMC1STR0
#define PSMC1STR0 PSMC1STR0
PSMC1STR0                                equ 082Eh
// bitfield definitions
PSMC1STR0_P1STRA_POSN                    equ 0000h
PSMC1STR0_P1STRA_POSITION                equ 0000h
PSMC1STR0_P1STRA_SIZE                    equ 0001h
PSMC1STR0_P1STRA_LENGTH                  equ 0001h
PSMC1STR0_P1STRA_MASK                    equ 0001h
PSMC1STR0_P1STRB_POSN                    equ 0001h
PSMC1STR0_P1STRB_POSITION                equ 0001h
PSMC1STR0_P1STRB_SIZE                    equ 0001h
PSMC1STR0_P1STRB_LENGTH                  equ 0001h
PSMC1STR0_P1STRB_MASK                    equ 0002h
PSMC1STR0_P1STRC_POSN                    equ 0002h
PSMC1STR0_P1STRC_POSITION                equ 0002h
PSMC1STR0_P1STRC_SIZE                    equ 0001h
PSMC1STR0_P1STRC_LENGTH                  equ 0001h
PSMC1STR0_P1STRC_MASK                    equ 0004h
PSMC1STR0_P1STRD_POSN                    equ 0003h
PSMC1STR0_P1STRD_POSITION                equ 0003h
PSMC1STR0_P1STRD_SIZE                    equ 0001h
PSMC1STR0_P1STRD_LENGTH                  equ 0001h
PSMC1STR0_P1STRD_MASK                    equ 0008h
PSMC1STR0_P1STRE_POSN                    equ 0004h
PSMC1STR0_P1STRE_POSITION                equ 0004h
PSMC1STR0_P1STRE_SIZE                    equ 0001h
PSMC1STR0_P1STRE_LENGTH                  equ 0001h
PSMC1STR0_P1STRE_MASK                    equ 0010h
PSMC1STR0_P1STRF_POSN                    equ 0005h
PSMC1STR0_P1STRF_POSITION                equ 0005h
PSMC1STR0_P1STRF_SIZE                    equ 0001h
PSMC1STR0_P1STRF_LENGTH                  equ 0001h
PSMC1STR0_P1STRF_MASK                    equ 0020h

// Register: PSMC1STR1
#define PSMC1STR1 PSMC1STR1
PSMC1STR1                                equ 082Fh
// bitfield definitions
PSMC1STR1_P1HSMEN_POSN                   equ 0000h
PSMC1STR1_P1HSMEN_POSITION               equ 0000h
PSMC1STR1_P1HSMEN_SIZE                   equ 0001h
PSMC1STR1_P1HSMEN_LENGTH                 equ 0001h
PSMC1STR1_P1HSMEN_MASK                   equ 0001h
PSMC1STR1_P1LSMEN_POSN                   equ 0001h
PSMC1STR1_P1LSMEN_POSITION               equ 0001h
PSMC1STR1_P1LSMEN_SIZE                   equ 0001h
PSMC1STR1_P1LSMEN_LENGTH                 equ 0001h
PSMC1STR1_P1LSMEN_MASK                   equ 0002h
PSMC1STR1_P1SSYNC_POSN                   equ 0007h
PSMC1STR1_P1SSYNC_POSITION               equ 0007h
PSMC1STR1_P1SSYNC_SIZE                   equ 0001h
PSMC1STR1_P1SSYNC_LENGTH                 equ 0001h
PSMC1STR1_P1SSYNC_MASK                   equ 0080h

// Register: PSMC2CON
#define PSMC2CON PSMC2CON
PSMC2CON                                 equ 0831h
// bitfield definitions
PSMC2CON_P2MODE_POSN                     equ 0000h
PSMC2CON_P2MODE_POSITION                 equ 0000h
PSMC2CON_P2MODE_SIZE                     equ 0004h
PSMC2CON_P2MODE_LENGTH                   equ 0004h
PSMC2CON_P2MODE_MASK                     equ 000Fh
PSMC2CON_P2DBRE_POSN                     equ 0004h
PSMC2CON_P2DBRE_POSITION                 equ 0004h
PSMC2CON_P2DBRE_SIZE                     equ 0001h
PSMC2CON_P2DBRE_LENGTH                   equ 0001h
PSMC2CON_P2DBRE_MASK                     equ 0010h
PSMC2CON_P2DBFE_POSN                     equ 0005h
PSMC2CON_P2DBFE_POSITION                 equ 0005h
PSMC2CON_P2DBFE_SIZE                     equ 0001h
PSMC2CON_P2DBFE_LENGTH                   equ 0001h
PSMC2CON_P2DBFE_MASK                     equ 0020h
PSMC2CON_PSMC2LD_POSN                    equ 0006h
PSMC2CON_PSMC2LD_POSITION                equ 0006h
PSMC2CON_PSMC2LD_SIZE                    equ 0001h
PSMC2CON_PSMC2LD_LENGTH                  equ 0001h
PSMC2CON_PSMC2LD_MASK                    equ 0040h
PSMC2CON_PSMC2EN_POSN                    equ 0007h
PSMC2CON_PSMC2EN_POSITION                equ 0007h
PSMC2CON_PSMC2EN_SIZE                    equ 0001h
PSMC2CON_PSMC2EN_LENGTH                  equ 0001h
PSMC2CON_PSMC2EN_MASK                    equ 0080h
PSMC2CON_P2MODE0_POSN                    equ 0000h
PSMC2CON_P2MODE0_POSITION                equ 0000h
PSMC2CON_P2MODE0_SIZE                    equ 0001h
PSMC2CON_P2MODE0_LENGTH                  equ 0001h
PSMC2CON_P2MODE0_MASK                    equ 0001h
PSMC2CON_P2MODE1_POSN                    equ 0001h
PSMC2CON_P2MODE1_POSITION                equ 0001h
PSMC2CON_P2MODE1_SIZE                    equ 0001h
PSMC2CON_P2MODE1_LENGTH                  equ 0001h
PSMC2CON_P2MODE1_MASK                    equ 0002h
PSMC2CON_P2MODE2_POSN                    equ 0002h
PSMC2CON_P2MODE2_POSITION                equ 0002h
PSMC2CON_P2MODE2_SIZE                    equ 0001h
PSMC2CON_P2MODE2_LENGTH                  equ 0001h
PSMC2CON_P2MODE2_MASK                    equ 0004h
PSMC2CON_P2MODE3_POSN                    equ 0003h
PSMC2CON_P2MODE3_POSITION                equ 0003h
PSMC2CON_P2MODE3_SIZE                    equ 0001h
PSMC2CON_P2MODE3_LENGTH                  equ 0001h
PSMC2CON_P2MODE3_MASK                    equ 0008h

// Register: PSMC2MDL
#define PSMC2MDL PSMC2MDL
PSMC2MDL                                 equ 0832h
// bitfield definitions
PSMC2MDL_P2MSRC_POSN                     equ 0000h
PSMC2MDL_P2MSRC_POSITION                 equ 0000h
PSMC2MDL_P2MSRC_SIZE                     equ 0004h
PSMC2MDL_P2MSRC_LENGTH                   equ 0004h
PSMC2MDL_P2MSRC_MASK                     equ 000Fh
PSMC2MDL_P2MDLBIT_POSN                   equ 0005h
PSMC2MDL_P2MDLBIT_POSITION               equ 0005h
PSMC2MDL_P2MDLBIT_SIZE                   equ 0001h
PSMC2MDL_P2MDLBIT_LENGTH                 equ 0001h
PSMC2MDL_P2MDLBIT_MASK                   equ 0020h
PSMC2MDL_P2MDLPOL_POSN                   equ 0006h
PSMC2MDL_P2MDLPOL_POSITION               equ 0006h
PSMC2MDL_P2MDLPOL_SIZE                   equ 0001h
PSMC2MDL_P2MDLPOL_LENGTH                 equ 0001h
PSMC2MDL_P2MDLPOL_MASK                   equ 0040h
PSMC2MDL_P2MDLEN_POSN                    equ 0007h
PSMC2MDL_P2MDLEN_POSITION                equ 0007h
PSMC2MDL_P2MDLEN_SIZE                    equ 0001h
PSMC2MDL_P2MDLEN_LENGTH                  equ 0001h
PSMC2MDL_P2MDLEN_MASK                    equ 0080h
PSMC2MDL_P2MSRC0_POSN                    equ 0000h
PSMC2MDL_P2MSRC0_POSITION                equ 0000h
PSMC2MDL_P2MSRC0_SIZE                    equ 0001h
PSMC2MDL_P2MSRC0_LENGTH                  equ 0001h
PSMC2MDL_P2MSRC0_MASK                    equ 0001h
PSMC2MDL_P2MSRC1_POSN                    equ 0001h
PSMC2MDL_P2MSRC1_POSITION                equ 0001h
PSMC2MDL_P2MSRC1_SIZE                    equ 0001h
PSMC2MDL_P2MSRC1_LENGTH                  equ 0001h
PSMC2MDL_P2MSRC1_MASK                    equ 0002h
PSMC2MDL_P2MSRC2_POSN                    equ 0002h
PSMC2MDL_P2MSRC2_POSITION                equ 0002h
PSMC2MDL_P2MSRC2_SIZE                    equ 0001h
PSMC2MDL_P2MSRC2_LENGTH                  equ 0001h
PSMC2MDL_P2MSRC2_MASK                    equ 0004h
PSMC2MDL_P2MSRC3_POSN                    equ 0003h
PSMC2MDL_P2MSRC3_POSITION                equ 0003h
PSMC2MDL_P2MSRC3_SIZE                    equ 0001h
PSMC2MDL_P2MSRC3_LENGTH                  equ 0001h
PSMC2MDL_P2MSRC3_MASK                    equ 0008h

// Register: PSMC2SYNC
#define PSMC2SYNC PSMC2SYNC
PSMC2SYNC                                equ 0833h
// bitfield definitions
PSMC2SYNC_P2SYNC0_POSN                   equ 0000h
PSMC2SYNC_P2SYNC0_POSITION               equ 0000h
PSMC2SYNC_P2SYNC0_SIZE                   equ 0001h
PSMC2SYNC_P2SYNC0_LENGTH                 equ 0001h
PSMC2SYNC_P2SYNC0_MASK                   equ 0001h
PSMC2SYNC_P2SYNC1_POSN                   equ 0001h
PSMC2SYNC_P2SYNC1_POSITION               equ 0001h
PSMC2SYNC_P2SYNC1_SIZE                   equ 0001h
PSMC2SYNC_P2SYNC1_LENGTH                 equ 0001h
PSMC2SYNC_P2SYNC1_MASK                   equ 0002h

// Register: PSMC2CLK
#define PSMC2CLK PSMC2CLK
PSMC2CLK                                 equ 0834h
// bitfield definitions
PSMC2CLK_P2CSRC0_POSN                    equ 0000h
PSMC2CLK_P2CSRC0_POSITION                equ 0000h
PSMC2CLK_P2CSRC0_SIZE                    equ 0001h
PSMC2CLK_P2CSRC0_LENGTH                  equ 0001h
PSMC2CLK_P2CSRC0_MASK                    equ 0001h
PSMC2CLK_P2CSRC1_POSN                    equ 0001h
PSMC2CLK_P2CSRC1_POSITION                equ 0001h
PSMC2CLK_P2CSRC1_SIZE                    equ 0001h
PSMC2CLK_P2CSRC1_LENGTH                  equ 0001h
PSMC2CLK_P2CSRC1_MASK                    equ 0002h
PSMC2CLK_P2CPRE0_POSN                    equ 0004h
PSMC2CLK_P2CPRE0_POSITION                equ 0004h
PSMC2CLK_P2CPRE0_SIZE                    equ 0001h
PSMC2CLK_P2CPRE0_LENGTH                  equ 0001h
PSMC2CLK_P2CPRE0_MASK                    equ 0010h
PSMC2CLK_P2CPRE1_POSN                    equ 0005h
PSMC2CLK_P2CPRE1_POSITION                equ 0005h
PSMC2CLK_P2CPRE1_SIZE                    equ 0001h
PSMC2CLK_P2CPRE1_LENGTH                  equ 0001h
PSMC2CLK_P2CPRE1_MASK                    equ 0020h
PSMC2CLK_P2CSRC_POSN                     equ 0000h
PSMC2CLK_P2CSRC_POSITION                 equ 0000h
PSMC2CLK_P2CSRC_SIZE                     equ 0002h
PSMC2CLK_P2CSRC_LENGTH                   equ 0002h
PSMC2CLK_P2CSRC_MASK                     equ 0003h
PSMC2CLK_P2CPRE_POSN                     equ 0004h
PSMC2CLK_P2CPRE_POSITION                 equ 0004h
PSMC2CLK_P2CPRE_SIZE                     equ 0002h
PSMC2CLK_P2CPRE_LENGTH                   equ 0002h
PSMC2CLK_P2CPRE_MASK                     equ 0030h

// Register: PSMC2OEN
#define PSMC2OEN PSMC2OEN
PSMC2OEN                                 equ 0835h
// bitfield definitions
PSMC2OEN_P2OEA_POSN                      equ 0000h
PSMC2OEN_P2OEA_POSITION                  equ 0000h
PSMC2OEN_P2OEA_SIZE                      equ 0001h
PSMC2OEN_P2OEA_LENGTH                    equ 0001h
PSMC2OEN_P2OEA_MASK                      equ 0001h
PSMC2OEN_P2OEB_POSN                      equ 0001h
PSMC2OEN_P2OEB_POSITION                  equ 0001h
PSMC2OEN_P2OEB_SIZE                      equ 0001h
PSMC2OEN_P2OEB_LENGTH                    equ 0001h
PSMC2OEN_P2OEB_MASK                      equ 0002h

// Register: PSMC2POL
#define PSMC2POL PSMC2POL
PSMC2POL                                 equ 0836h
// bitfield definitions
PSMC2POL_P2POLA_POSN                     equ 0000h
PSMC2POL_P2POLA_POSITION                 equ 0000h
PSMC2POL_P2POLA_SIZE                     equ 0001h
PSMC2POL_P2POLA_LENGTH                   equ 0001h
PSMC2POL_P2POLA_MASK                     equ 0001h
PSMC2POL_P2POLB_POSN                     equ 0001h
PSMC2POL_P2POLB_POSITION                 equ 0001h
PSMC2POL_P2POLB_SIZE                     equ 0001h
PSMC2POL_P2POLB_LENGTH                   equ 0001h
PSMC2POL_P2POLB_MASK                     equ 0002h
PSMC2POL_P2INPOL_POSN                    equ 0006h
PSMC2POL_P2INPOL_POSITION                equ 0006h
PSMC2POL_P2INPOL_SIZE                    equ 0001h
PSMC2POL_P2INPOL_LENGTH                  equ 0001h
PSMC2POL_P2INPOL_MASK                    equ 0040h

// Register: PSMC2BLNK
#define PSMC2BLNK PSMC2BLNK
PSMC2BLNK                                equ 0837h
// bitfield definitions
PSMC2BLNK_P2REBM_POSN                    equ 0000h
PSMC2BLNK_P2REBM_POSITION                equ 0000h
PSMC2BLNK_P2REBM_SIZE                    equ 0002h
PSMC2BLNK_P2REBM_LENGTH                  equ 0002h
PSMC2BLNK_P2REBM_MASK                    equ 0003h
PSMC2BLNK_P2FEBM_POSN                    equ 0004h
PSMC2BLNK_P2FEBM_POSITION                equ 0004h
PSMC2BLNK_P2FEBM_SIZE                    equ 0002h
PSMC2BLNK_P2FEBM_LENGTH                  equ 0002h
PSMC2BLNK_P2FEBM_MASK                    equ 0030h
PSMC2BLNK_P2REBM0_POSN                   equ 0000h
PSMC2BLNK_P2REBM0_POSITION               equ 0000h
PSMC2BLNK_P2REBM0_SIZE                   equ 0001h
PSMC2BLNK_P2REBM0_LENGTH                 equ 0001h
PSMC2BLNK_P2REBM0_MASK                   equ 0001h
PSMC2BLNK_P2REBM1_POSN                   equ 0001h
PSMC2BLNK_P2REBM1_POSITION               equ 0001h
PSMC2BLNK_P2REBM1_SIZE                   equ 0001h
PSMC2BLNK_P2REBM1_LENGTH                 equ 0001h
PSMC2BLNK_P2REBM1_MASK                   equ 0002h
PSMC2BLNK_P2FEBM0_POSN                   equ 0004h
PSMC2BLNK_P2FEBM0_POSITION               equ 0004h
PSMC2BLNK_P2FEBM0_SIZE                   equ 0001h
PSMC2BLNK_P2FEBM0_LENGTH                 equ 0001h
PSMC2BLNK_P2FEBM0_MASK                   equ 0010h
PSMC2BLNK_P2FEBM1_POSN                   equ 0005h
PSMC2BLNK_P2FEBM1_POSITION               equ 0005h
PSMC2BLNK_P2FEBM1_SIZE                   equ 0001h
PSMC2BLNK_P2FEBM1_LENGTH                 equ 0001h
PSMC2BLNK_P2FEBM1_MASK                   equ 0020h

// Register: PSMC2REBS
#define PSMC2REBS PSMC2REBS
PSMC2REBS                                equ 0838h
// bitfield definitions
PSMC2REBS_P2REBSC1_POSN                  equ 0001h
PSMC2REBS_P2REBSC1_POSITION              equ 0001h
PSMC2REBS_P2REBSC1_SIZE                  equ 0001h
PSMC2REBS_P2REBSC1_LENGTH                equ 0001h
PSMC2REBS_P2REBSC1_MASK                  equ 0002h
PSMC2REBS_P2REBSC2_POSN                  equ 0002h
PSMC2REBS_P2REBSC2_POSITION              equ 0002h
PSMC2REBS_P2REBSC2_SIZE                  equ 0001h
PSMC2REBS_P2REBSC2_LENGTH                equ 0001h
PSMC2REBS_P2REBSC2_MASK                  equ 0004h
PSMC2REBS_P2REBSC3_POSN                  equ 0003h
PSMC2REBS_P2REBSC3_POSITION              equ 0003h
PSMC2REBS_P2REBSC3_SIZE                  equ 0001h
PSMC2REBS_P2REBSC3_LENGTH                equ 0001h
PSMC2REBS_P2REBSC3_MASK                  equ 0008h
PSMC2REBS_P2REBSIN_POSN                  equ 0007h
PSMC2REBS_P2REBSIN_POSITION              equ 0007h
PSMC2REBS_P2REBSIN_SIZE                  equ 0001h
PSMC2REBS_P2REBSIN_LENGTH                equ 0001h
PSMC2REBS_P2REBSIN_MASK                  equ 0080h

// Register: PSMC2FEBS
#define PSMC2FEBS PSMC2FEBS
PSMC2FEBS                                equ 0839h
// bitfield definitions
PSMC2FEBS_P2FEBSC1_POSN                  equ 0001h
PSMC2FEBS_P2FEBSC1_POSITION              equ 0001h
PSMC2FEBS_P2FEBSC1_SIZE                  equ 0001h
PSMC2FEBS_P2FEBSC1_LENGTH                equ 0001h
PSMC2FEBS_P2FEBSC1_MASK                  equ 0002h
PSMC2FEBS_P2FEBSC2_POSN                  equ 0002h
PSMC2FEBS_P2FEBSC2_POSITION              equ 0002h
PSMC2FEBS_P2FEBSC2_SIZE                  equ 0001h
PSMC2FEBS_P2FEBSC2_LENGTH                equ 0001h
PSMC2FEBS_P2FEBSC2_MASK                  equ 0004h
PSMC2FEBS_P2FEBSC3_POSN                  equ 0003h
PSMC2FEBS_P2FEBSC3_POSITION              equ 0003h
PSMC2FEBS_P2FEBSC3_SIZE                  equ 0001h
PSMC2FEBS_P2FEBSC3_LENGTH                equ 0001h
PSMC2FEBS_P2FEBSC3_MASK                  equ 0008h
PSMC2FEBS_P2FEBSIN_POSN                  equ 0007h
PSMC2FEBS_P2FEBSIN_POSITION              equ 0007h
PSMC2FEBS_P2FEBSIN_SIZE                  equ 0001h
PSMC2FEBS_P2FEBSIN_LENGTH                equ 0001h
PSMC2FEBS_P2FEBSIN_MASK                  equ 0080h

// Register: PSMC2PHS
#define PSMC2PHS PSMC2PHS
PSMC2PHS                                 equ 083Ah
// bitfield definitions
PSMC2PHS_P2PHST_POSN                     equ 0000h
PSMC2PHS_P2PHST_POSITION                 equ 0000h
PSMC2PHS_P2PHST_SIZE                     equ 0001h
PSMC2PHS_P2PHST_LENGTH                   equ 0001h
PSMC2PHS_P2PHST_MASK                     equ 0001h
PSMC2PHS_P2PHSC1_POSN                    equ 0001h
PSMC2PHS_P2PHSC1_POSITION                equ 0001h
PSMC2PHS_P2PHSC1_SIZE                    equ 0001h
PSMC2PHS_P2PHSC1_LENGTH                  equ 0001h
PSMC2PHS_P2PHSC1_MASK                    equ 0002h
PSMC2PHS_P2PHSC2_POSN                    equ 0002h
PSMC2PHS_P2PHSC2_POSITION                equ 0002h
PSMC2PHS_P2PHSC2_SIZE                    equ 0001h
PSMC2PHS_P2PHSC2_LENGTH                  equ 0001h
PSMC2PHS_P2PHSC2_MASK                    equ 0004h
PSMC2PHS_P2PHSC3_POSN                    equ 0003h
PSMC2PHS_P2PHSC3_POSITION                equ 0003h
PSMC2PHS_P2PHSC3_SIZE                    equ 0001h
PSMC2PHS_P2PHSC3_LENGTH                  equ 0001h
PSMC2PHS_P2PHSC3_MASK                    equ 0008h
PSMC2PHS_P2PHSIN_POSN                    equ 0007h
PSMC2PHS_P2PHSIN_POSITION                equ 0007h
PSMC2PHS_P2PHSIN_SIZE                    equ 0001h
PSMC2PHS_P2PHSIN_LENGTH                  equ 0001h
PSMC2PHS_P2PHSIN_MASK                    equ 0080h

// Register: PSMC2DCS
#define PSMC2DCS PSMC2DCS
PSMC2DCS                                 equ 083Bh
// bitfield definitions
PSMC2DCS_P2DCST_POSN                     equ 0000h
PSMC2DCS_P2DCST_POSITION                 equ 0000h
PSMC2DCS_P2DCST_SIZE                     equ 0001h
PSMC2DCS_P2DCST_LENGTH                   equ 0001h
PSMC2DCS_P2DCST_MASK                     equ 0001h
PSMC2DCS_P2DCSC1_POSN                    equ 0001h
PSMC2DCS_P2DCSC1_POSITION                equ 0001h
PSMC2DCS_P2DCSC1_SIZE                    equ 0001h
PSMC2DCS_P2DCSC1_LENGTH                  equ 0001h
PSMC2DCS_P2DCSC1_MASK                    equ 0002h
PSMC2DCS_P2DCSC2_POSN                    equ 0002h
PSMC2DCS_P2DCSC2_POSITION                equ 0002h
PSMC2DCS_P2DCSC2_SIZE                    equ 0001h
PSMC2DCS_P2DCSC2_LENGTH                  equ 0001h
PSMC2DCS_P2DCSC2_MASK                    equ 0004h
PSMC2DCS_P2DCSC3_POSN                    equ 0003h
PSMC2DCS_P2DCSC3_POSITION                equ 0003h
PSMC2DCS_P2DCSC3_SIZE                    equ 0001h
PSMC2DCS_P2DCSC3_LENGTH                  equ 0001h
PSMC2DCS_P2DCSC3_MASK                    equ 0008h
PSMC2DCS_P2DCSIN_POSN                    equ 0007h
PSMC2DCS_P2DCSIN_POSITION                equ 0007h
PSMC2DCS_P2DCSIN_SIZE                    equ 0001h
PSMC2DCS_P2DCSIN_LENGTH                  equ 0001h
PSMC2DCS_P2DCSIN_MASK                    equ 0080h

// Register: PSMC2PRS
#define PSMC2PRS PSMC2PRS
PSMC2PRS                                 equ 083Ch
// bitfield definitions
PSMC2PRS_P2PRST_POSN                     equ 0000h
PSMC2PRS_P2PRST_POSITION                 equ 0000h
PSMC2PRS_P2PRST_SIZE                     equ 0001h
PSMC2PRS_P2PRST_LENGTH                   equ 0001h
PSMC2PRS_P2PRST_MASK                     equ 0001h
PSMC2PRS_P2PRSC1_POSN                    equ 0001h
PSMC2PRS_P2PRSC1_POSITION                equ 0001h
PSMC2PRS_P2PRSC1_SIZE                    equ 0001h
PSMC2PRS_P2PRSC1_LENGTH                  equ 0001h
PSMC2PRS_P2PRSC1_MASK                    equ 0002h
PSMC2PRS_P2PRSC2_POSN                    equ 0002h
PSMC2PRS_P2PRSC2_POSITION                equ 0002h
PSMC2PRS_P2PRSC2_SIZE                    equ 0001h
PSMC2PRS_P2PRSC2_LENGTH                  equ 0001h
PSMC2PRS_P2PRSC2_MASK                    equ 0004h
PSMC2PRS_P2PRSC3_POSN                    equ 0003h
PSMC2PRS_P2PRSC3_POSITION                equ 0003h
PSMC2PRS_P2PRSC3_SIZE                    equ 0001h
PSMC2PRS_P2PRSC3_LENGTH                  equ 0001h
PSMC2PRS_P2PRSC3_MASK                    equ 0008h
PSMC2PRS_P2PRSIN_POSN                    equ 0007h
PSMC2PRS_P2PRSIN_POSITION                equ 0007h
PSMC2PRS_P2PRSIN_SIZE                    equ 0001h
PSMC2PRS_P2PRSIN_LENGTH                  equ 0001h
PSMC2PRS_P2PRSIN_MASK                    equ 0080h

// Register: PSMC2ASDC
#define PSMC2ASDC PSMC2ASDC
PSMC2ASDC                                equ 083Dh
// bitfield definitions
PSMC2ASDC_P2ASDOV_POSN                   equ 0000h
PSMC2ASDC_P2ASDOV_POSITION               equ 0000h
PSMC2ASDC_P2ASDOV_SIZE                   equ 0001h
PSMC2ASDC_P2ASDOV_LENGTH                 equ 0001h
PSMC2ASDC_P2ASDOV_MASK                   equ 0001h
PSMC2ASDC_P2ARSEN_POSN                   equ 0005h
PSMC2ASDC_P2ARSEN_POSITION               equ 0005h
PSMC2ASDC_P2ARSEN_SIZE                   equ 0001h
PSMC2ASDC_P2ARSEN_LENGTH                 equ 0001h
PSMC2ASDC_P2ARSEN_MASK                   equ 0020h
PSMC2ASDC_P2ASDEN_POSN                   equ 0006h
PSMC2ASDC_P2ASDEN_POSITION               equ 0006h
PSMC2ASDC_P2ASDEN_SIZE                   equ 0001h
PSMC2ASDC_P2ASDEN_LENGTH                 equ 0001h
PSMC2ASDC_P2ASDEN_MASK                   equ 0040h
PSMC2ASDC_P2ASE_POSN                     equ 0007h
PSMC2ASDC_P2ASE_POSITION                 equ 0007h
PSMC2ASDC_P2ASE_SIZE                     equ 0001h
PSMC2ASDC_P2ASE_LENGTH                   equ 0001h
PSMC2ASDC_P2ASE_MASK                     equ 0080h

// Register: PSMC2ASDL
#define PSMC2ASDL PSMC2ASDL
PSMC2ASDL                                equ 083Eh
// bitfield definitions
PSMC2ASDL_P2ASDLA_POSN                   equ 0000h
PSMC2ASDL_P2ASDLA_POSITION               equ 0000h
PSMC2ASDL_P2ASDLA_SIZE                   equ 0001h
PSMC2ASDL_P2ASDLA_LENGTH                 equ 0001h
PSMC2ASDL_P2ASDLA_MASK                   equ 0001h
PSMC2ASDL_P2ASDLB_POSN                   equ 0001h
PSMC2ASDL_P2ASDLB_POSITION               equ 0001h
PSMC2ASDL_P2ASDLB_SIZE                   equ 0001h
PSMC2ASDL_P2ASDLB_LENGTH                 equ 0001h
PSMC2ASDL_P2ASDLB_MASK                   equ 0002h

// Register: PSMC2ASDS
#define PSMC2ASDS PSMC2ASDS
PSMC2ASDS                                equ 083Fh
// bitfield definitions
PSMC2ASDS_P2ASDSC1_POSN                  equ 0001h
PSMC2ASDS_P2ASDSC1_POSITION              equ 0001h
PSMC2ASDS_P2ASDSC1_SIZE                  equ 0001h
PSMC2ASDS_P2ASDSC1_LENGTH                equ 0001h
PSMC2ASDS_P2ASDSC1_MASK                  equ 0002h
PSMC2ASDS_P2ASDSC2_POSN                  equ 0002h
PSMC2ASDS_P2ASDSC2_POSITION              equ 0002h
PSMC2ASDS_P2ASDSC2_SIZE                  equ 0001h
PSMC2ASDS_P2ASDSC2_LENGTH                equ 0001h
PSMC2ASDS_P2ASDSC2_MASK                  equ 0004h
PSMC2ASDS_P2ASDSC3_POSN                  equ 0003h
PSMC2ASDS_P2ASDSC3_POSITION              equ 0003h
PSMC2ASDS_P2ASDSC3_SIZE                  equ 0001h
PSMC2ASDS_P2ASDSC3_LENGTH                equ 0001h
PSMC2ASDS_P2ASDSC3_MASK                  equ 0008h
PSMC2ASDS_P2ASDSIN_POSN                  equ 0007h
PSMC2ASDS_P2ASDSIN_POSITION              equ 0007h
PSMC2ASDS_P2ASDSIN_SIZE                  equ 0001h
PSMC2ASDS_P2ASDSIN_LENGTH                equ 0001h
PSMC2ASDS_P2ASDSIN_MASK                  equ 0080h

// Register: PSMC2INT
#define PSMC2INT PSMC2INT
PSMC2INT                                 equ 0840h
// bitfield definitions
PSMC2INT_P2TPRIF_POSN                    equ 0000h
PSMC2INT_P2TPRIF_POSITION                equ 0000h
PSMC2INT_P2TPRIF_SIZE                    equ 0001h
PSMC2INT_P2TPRIF_LENGTH                  equ 0001h
PSMC2INT_P2TPRIF_MASK                    equ 0001h
PSMC2INT_P2TDCIF_POSN                    equ 0001h
PSMC2INT_P2TDCIF_POSITION                equ 0001h
PSMC2INT_P2TDCIF_SIZE                    equ 0001h
PSMC2INT_P2TDCIF_LENGTH                  equ 0001h
PSMC2INT_P2TDCIF_MASK                    equ 0002h
PSMC2INT_P2TPHIF_POSN                    equ 0002h
PSMC2INT_P2TPHIF_POSITION                equ 0002h
PSMC2INT_P2TPHIF_SIZE                    equ 0001h
PSMC2INT_P2TPHIF_LENGTH                  equ 0001h
PSMC2INT_P2TPHIF_MASK                    equ 0004h
PSMC2INT_P2TOVIF_POSN                    equ 0003h
PSMC2INT_P2TOVIF_POSITION                equ 0003h
PSMC2INT_P2TOVIF_SIZE                    equ 0001h
PSMC2INT_P2TOVIF_LENGTH                  equ 0001h
PSMC2INT_P2TOVIF_MASK                    equ 0008h
PSMC2INT_P2TPRIE_POSN                    equ 0004h
PSMC2INT_P2TPRIE_POSITION                equ 0004h
PSMC2INT_P2TPRIE_SIZE                    equ 0001h
PSMC2INT_P2TPRIE_LENGTH                  equ 0001h
PSMC2INT_P2TPRIE_MASK                    equ 0010h
PSMC2INT_P2TDCIE_POSN                    equ 0005h
PSMC2INT_P2TDCIE_POSITION                equ 0005h
PSMC2INT_P2TDCIE_SIZE                    equ 0001h
PSMC2INT_P2TDCIE_LENGTH                  equ 0001h
PSMC2INT_P2TDCIE_MASK                    equ 0020h
PSMC2INT_P2TPHIE_POSN                    equ 0006h
PSMC2INT_P2TPHIE_POSITION                equ 0006h
PSMC2INT_P2TPHIE_SIZE                    equ 0001h
PSMC2INT_P2TPHIE_LENGTH                  equ 0001h
PSMC2INT_P2TPHIE_MASK                    equ 0040h
PSMC2INT_P2TOVIE_POSN                    equ 0007h
PSMC2INT_P2TOVIE_POSITION                equ 0007h
PSMC2INT_P2TOVIE_SIZE                    equ 0001h
PSMC2INT_P2TOVIE_LENGTH                  equ 0001h
PSMC2INT_P2TOVIE_MASK                    equ 0080h

// Register: PSMC2PHL
#define PSMC2PHL PSMC2PHL
PSMC2PHL                                 equ 0841h
// bitfield definitions
PSMC2PHL_PSMC2PH0_POSN                   equ 0000h
PSMC2PHL_PSMC2PH0_POSITION               equ 0000h
PSMC2PHL_PSMC2PH0_SIZE                   equ 0001h
PSMC2PHL_PSMC2PH0_LENGTH                 equ 0001h
PSMC2PHL_PSMC2PH0_MASK                   equ 0001h
PSMC2PHL_PSMC2PH1_POSN                   equ 0001h
PSMC2PHL_PSMC2PH1_POSITION               equ 0001h
PSMC2PHL_PSMC2PH1_SIZE                   equ 0001h
PSMC2PHL_PSMC2PH1_LENGTH                 equ 0001h
PSMC2PHL_PSMC2PH1_MASK                   equ 0002h
PSMC2PHL_PSMC2PH2_POSN                   equ 0002h
PSMC2PHL_PSMC2PH2_POSITION               equ 0002h
PSMC2PHL_PSMC2PH2_SIZE                   equ 0001h
PSMC2PHL_PSMC2PH2_LENGTH                 equ 0001h
PSMC2PHL_PSMC2PH2_MASK                   equ 0004h
PSMC2PHL_PSMC2PH3_POSN                   equ 0003h
PSMC2PHL_PSMC2PH3_POSITION               equ 0003h
PSMC2PHL_PSMC2PH3_SIZE                   equ 0001h
PSMC2PHL_PSMC2PH3_LENGTH                 equ 0001h
PSMC2PHL_PSMC2PH3_MASK                   equ 0008h
PSMC2PHL_PSMC2PH4_POSN                   equ 0004h
PSMC2PHL_PSMC2PH4_POSITION               equ 0004h
PSMC2PHL_PSMC2PH4_SIZE                   equ 0001h
PSMC2PHL_PSMC2PH4_LENGTH                 equ 0001h
PSMC2PHL_PSMC2PH4_MASK                   equ 0010h
PSMC2PHL_PSMC2PH5_POSN                   equ 0005h
PSMC2PHL_PSMC2PH5_POSITION               equ 0005h
PSMC2PHL_PSMC2PH5_SIZE                   equ 0001h
PSMC2PHL_PSMC2PH5_LENGTH                 equ 0001h
PSMC2PHL_PSMC2PH5_MASK                   equ 0020h
PSMC2PHL_PSMC2PH6_POSN                   equ 0006h
PSMC2PHL_PSMC2PH6_POSITION               equ 0006h
PSMC2PHL_PSMC2PH6_SIZE                   equ 0001h
PSMC2PHL_PSMC2PH6_LENGTH                 equ 0001h
PSMC2PHL_PSMC2PH6_MASK                   equ 0040h
PSMC2PHL_PSMC2PH7_POSN                   equ 0007h
PSMC2PHL_PSMC2PH7_POSITION               equ 0007h
PSMC2PHL_PSMC2PH7_SIZE                   equ 0001h
PSMC2PHL_PSMC2PH7_LENGTH                 equ 0001h
PSMC2PHL_PSMC2PH7_MASK                   equ 0080h

// Register: PSMC2PHH
#define PSMC2PHH PSMC2PHH
PSMC2PHH                                 equ 0842h
// bitfield definitions
PSMC2PHH_PSMC2PH8_POSN                   equ 0000h
PSMC2PHH_PSMC2PH8_POSITION               equ 0000h
PSMC2PHH_PSMC2PH8_SIZE                   equ 0001h
PSMC2PHH_PSMC2PH8_LENGTH                 equ 0001h
PSMC2PHH_PSMC2PH8_MASK                   equ 0001h
PSMC2PHH_PSMC2PH9_POSN                   equ 0001h
PSMC2PHH_PSMC2PH9_POSITION               equ 0001h
PSMC2PHH_PSMC2PH9_SIZE                   equ 0001h
PSMC2PHH_PSMC2PH9_LENGTH                 equ 0001h
PSMC2PHH_PSMC2PH9_MASK                   equ 0002h
PSMC2PHH_PSMC2PH10_POSN                  equ 0002h
PSMC2PHH_PSMC2PH10_POSITION              equ 0002h
PSMC2PHH_PSMC2PH10_SIZE                  equ 0001h
PSMC2PHH_PSMC2PH10_LENGTH                equ 0001h
PSMC2PHH_PSMC2PH10_MASK                  equ 0004h
PSMC2PHH_PSMC2PH11_POSN                  equ 0003h
PSMC2PHH_PSMC2PH11_POSITION              equ 0003h
PSMC2PHH_PSMC2PH11_SIZE                  equ 0001h
PSMC2PHH_PSMC2PH11_LENGTH                equ 0001h
PSMC2PHH_PSMC2PH11_MASK                  equ 0008h
PSMC2PHH_PSMC2PH12_POSN                  equ 0004h
PSMC2PHH_PSMC2PH12_POSITION              equ 0004h
PSMC2PHH_PSMC2PH12_SIZE                  equ 0001h
PSMC2PHH_PSMC2PH12_LENGTH                equ 0001h
PSMC2PHH_PSMC2PH12_MASK                  equ 0010h
PSMC2PHH_PSMC2PH13_POSN                  equ 0005h
PSMC2PHH_PSMC2PH13_POSITION              equ 0005h
PSMC2PHH_PSMC2PH13_SIZE                  equ 0001h
PSMC2PHH_PSMC2PH13_LENGTH                equ 0001h
PSMC2PHH_PSMC2PH13_MASK                  equ 0020h
PSMC2PHH_PSMC2PH14_POSN                  equ 0006h
PSMC2PHH_PSMC2PH14_POSITION              equ 0006h
PSMC2PHH_PSMC2PH14_SIZE                  equ 0001h
PSMC2PHH_PSMC2PH14_LENGTH                equ 0001h
PSMC2PHH_PSMC2PH14_MASK                  equ 0040h
PSMC2PHH_PSMC2PH15_POSN                  equ 0007h
PSMC2PHH_PSMC2PH15_POSITION              equ 0007h
PSMC2PHH_PSMC2PH15_SIZE                  equ 0001h
PSMC2PHH_PSMC2PH15_LENGTH                equ 0001h
PSMC2PHH_PSMC2PH15_MASK                  equ 0080h

// Register: PSMC2DCL
#define PSMC2DCL PSMC2DCL
PSMC2DCL                                 equ 0843h
// bitfield definitions
PSMC2DCL_PSMC2DC0_POSN                   equ 0000h
PSMC2DCL_PSMC2DC0_POSITION               equ 0000h
PSMC2DCL_PSMC2DC0_SIZE                   equ 0001h
PSMC2DCL_PSMC2DC0_LENGTH                 equ 0001h
PSMC2DCL_PSMC2DC0_MASK                   equ 0001h
PSMC2DCL_PSMC2DC1_POSN                   equ 0001h
PSMC2DCL_PSMC2DC1_POSITION               equ 0001h
PSMC2DCL_PSMC2DC1_SIZE                   equ 0001h
PSMC2DCL_PSMC2DC1_LENGTH                 equ 0001h
PSMC2DCL_PSMC2DC1_MASK                   equ 0002h
PSMC2DCL_PSMC2DC2_POSN                   equ 0002h
PSMC2DCL_PSMC2DC2_POSITION               equ 0002h
PSMC2DCL_PSMC2DC2_SIZE                   equ 0001h
PSMC2DCL_PSMC2DC2_LENGTH                 equ 0001h
PSMC2DCL_PSMC2DC2_MASK                   equ 0004h
PSMC2DCL_PSMC2DC3_POSN                   equ 0003h
PSMC2DCL_PSMC2DC3_POSITION               equ 0003h
PSMC2DCL_PSMC2DC3_SIZE                   equ 0001h
PSMC2DCL_PSMC2DC3_LENGTH                 equ 0001h
PSMC2DCL_PSMC2DC3_MASK                   equ 0008h
PSMC2DCL_PSMC2DC4_POSN                   equ 0004h
PSMC2DCL_PSMC2DC4_POSITION               equ 0004h
PSMC2DCL_PSMC2DC4_SIZE                   equ 0001h
PSMC2DCL_PSMC2DC4_LENGTH                 equ 0001h
PSMC2DCL_PSMC2DC4_MASK                   equ 0010h
PSMC2DCL_PSMC2DC5_POSN                   equ 0005h
PSMC2DCL_PSMC2DC5_POSITION               equ 0005h
PSMC2DCL_PSMC2DC5_SIZE                   equ 0001h
PSMC2DCL_PSMC2DC5_LENGTH                 equ 0001h
PSMC2DCL_PSMC2DC5_MASK                   equ 0020h
PSMC2DCL_PSMC2DC6_POSN                   equ 0006h
PSMC2DCL_PSMC2DC6_POSITION               equ 0006h
PSMC2DCL_PSMC2DC6_SIZE                   equ 0001h
PSMC2DCL_PSMC2DC6_LENGTH                 equ 0001h
PSMC2DCL_PSMC2DC6_MASK                   equ 0040h
PSMC2DCL_PSMC2DC7_POSN                   equ 0007h
PSMC2DCL_PSMC2DC7_POSITION               equ 0007h
PSMC2DCL_PSMC2DC7_SIZE                   equ 0001h
PSMC2DCL_PSMC2DC7_LENGTH                 equ 0001h
PSMC2DCL_PSMC2DC7_MASK                   equ 0080h

// Register: PSMC2DCH
#define PSMC2DCH PSMC2DCH
PSMC2DCH                                 equ 0844h
// bitfield definitions
PSMC2DCH_PSMC2DC8_POSN                   equ 0000h
PSMC2DCH_PSMC2DC8_POSITION               equ 0000h
PSMC2DCH_PSMC2DC8_SIZE                   equ 0001h
PSMC2DCH_PSMC2DC8_LENGTH                 equ 0001h
PSMC2DCH_PSMC2DC8_MASK                   equ 0001h
PSMC2DCH_PSMC2DC9_POSN                   equ 0001h
PSMC2DCH_PSMC2DC9_POSITION               equ 0001h
PSMC2DCH_PSMC2DC9_SIZE                   equ 0001h
PSMC2DCH_PSMC2DC9_LENGTH                 equ 0001h
PSMC2DCH_PSMC2DC9_MASK                   equ 0002h
PSMC2DCH_PSMC2DC10_POSN                  equ 0002h
PSMC2DCH_PSMC2DC10_POSITION              equ 0002h
PSMC2DCH_PSMC2DC10_SIZE                  equ 0001h
PSMC2DCH_PSMC2DC10_LENGTH                equ 0001h
PSMC2DCH_PSMC2DC10_MASK                  equ 0004h
PSMC2DCH_PSMC2DC11_POSN                  equ 0003h
PSMC2DCH_PSMC2DC11_POSITION              equ 0003h
PSMC2DCH_PSMC2DC11_SIZE                  equ 0001h
PSMC2DCH_PSMC2DC11_LENGTH                equ 0001h
PSMC2DCH_PSMC2DC11_MASK                  equ 0008h
PSMC2DCH_PSMC2DC12_POSN                  equ 0004h
PSMC2DCH_PSMC2DC12_POSITION              equ 0004h
PSMC2DCH_PSMC2DC12_SIZE                  equ 0001h
PSMC2DCH_PSMC2DC12_LENGTH                equ 0001h
PSMC2DCH_PSMC2DC12_MASK                  equ 0010h
PSMC2DCH_PSMC2DC13_POSN                  equ 0005h
PSMC2DCH_PSMC2DC13_POSITION              equ 0005h
PSMC2DCH_PSMC2DC13_SIZE                  equ 0001h
PSMC2DCH_PSMC2DC13_LENGTH                equ 0001h
PSMC2DCH_PSMC2DC13_MASK                  equ 0020h
PSMC2DCH_PSMC2DC14_POSN                  equ 0006h
PSMC2DCH_PSMC2DC14_POSITION              equ 0006h
PSMC2DCH_PSMC2DC14_SIZE                  equ 0001h
PSMC2DCH_PSMC2DC14_LENGTH                equ 0001h
PSMC2DCH_PSMC2DC14_MASK                  equ 0040h
PSMC2DCH_PSMC2DC15_POSN                  equ 0007h
PSMC2DCH_PSMC2DC15_POSITION              equ 0007h
PSMC2DCH_PSMC2DC15_SIZE                  equ 0001h
PSMC2DCH_PSMC2DC15_LENGTH                equ 0001h
PSMC2DCH_PSMC2DC15_MASK                  equ 0080h

// Register: PSMC2PRL
#define PSMC2PRL PSMC2PRL
PSMC2PRL                                 equ 0845h
// bitfield definitions
PSMC2PRL_PSMC2PR0_POSN                   equ 0000h
PSMC2PRL_PSMC2PR0_POSITION               equ 0000h
PSMC2PRL_PSMC2PR0_SIZE                   equ 0001h
PSMC2PRL_PSMC2PR0_LENGTH                 equ 0001h
PSMC2PRL_PSMC2PR0_MASK                   equ 0001h
PSMC2PRL_PSMC2PR1_POSN                   equ 0001h
PSMC2PRL_PSMC2PR1_POSITION               equ 0001h
PSMC2PRL_PSMC2PR1_SIZE                   equ 0001h
PSMC2PRL_PSMC2PR1_LENGTH                 equ 0001h
PSMC2PRL_PSMC2PR1_MASK                   equ 0002h
PSMC2PRL_PSMC2PR2_POSN                   equ 0002h
PSMC2PRL_PSMC2PR2_POSITION               equ 0002h
PSMC2PRL_PSMC2PR2_SIZE                   equ 0001h
PSMC2PRL_PSMC2PR2_LENGTH                 equ 0001h
PSMC2PRL_PSMC2PR2_MASK                   equ 0004h
PSMC2PRL_PSMC2PR3_POSN                   equ 0003h
PSMC2PRL_PSMC2PR3_POSITION               equ 0003h
PSMC2PRL_PSMC2PR3_SIZE                   equ 0001h
PSMC2PRL_PSMC2PR3_LENGTH                 equ 0001h
PSMC2PRL_PSMC2PR3_MASK                   equ 0008h
PSMC2PRL_PSMC2PR4_POSN                   equ 0004h
PSMC2PRL_PSMC2PR4_POSITION               equ 0004h
PSMC2PRL_PSMC2PR4_SIZE                   equ 0001h
PSMC2PRL_PSMC2PR4_LENGTH                 equ 0001h
PSMC2PRL_PSMC2PR4_MASK                   equ 0010h
PSMC2PRL_PSMC2PR5_POSN                   equ 0005h
PSMC2PRL_PSMC2PR5_POSITION               equ 0005h
PSMC2PRL_PSMC2PR5_SIZE                   equ 0001h
PSMC2PRL_PSMC2PR5_LENGTH                 equ 0001h
PSMC2PRL_PSMC2PR5_MASK                   equ 0020h
PSMC2PRL_PSMC2PR6_POSN                   equ 0006h
PSMC2PRL_PSMC2PR6_POSITION               equ 0006h
PSMC2PRL_PSMC2PR6_SIZE                   equ 0001h
PSMC2PRL_PSMC2PR6_LENGTH                 equ 0001h
PSMC2PRL_PSMC2PR6_MASK                   equ 0040h
PSMC2PRL_PSMC2PR7_POSN                   equ 0007h
PSMC2PRL_PSMC2PR7_POSITION               equ 0007h
PSMC2PRL_PSMC2PR7_SIZE                   equ 0001h
PSMC2PRL_PSMC2PR7_LENGTH                 equ 0001h
PSMC2PRL_PSMC2PR7_MASK                   equ 0080h

// Register: PSMC2PRH
#define PSMC2PRH PSMC2PRH
PSMC2PRH                                 equ 0846h
// bitfield definitions
PSMC2PRH_PSMC2PR8_POSN                   equ 0000h
PSMC2PRH_PSMC2PR8_POSITION               equ 0000h
PSMC2PRH_PSMC2PR8_SIZE                   equ 0001h
PSMC2PRH_PSMC2PR8_LENGTH                 equ 0001h
PSMC2PRH_PSMC2PR8_MASK                   equ 0001h
PSMC2PRH_PSMC2PR9_POSN                   equ 0001h
PSMC2PRH_PSMC2PR9_POSITION               equ 0001h
PSMC2PRH_PSMC2PR9_SIZE                   equ 0001h
PSMC2PRH_PSMC2PR9_LENGTH                 equ 0001h
PSMC2PRH_PSMC2PR9_MASK                   equ 0002h
PSMC2PRH_PSMC2PR10_POSN                  equ 0002h
PSMC2PRH_PSMC2PR10_POSITION              equ 0002h
PSMC2PRH_PSMC2PR10_SIZE                  equ 0001h
PSMC2PRH_PSMC2PR10_LENGTH                equ 0001h
PSMC2PRH_PSMC2PR10_MASK                  equ 0004h
PSMC2PRH_PSMC2PR11_POSN                  equ 0003h
PSMC2PRH_PSMC2PR11_POSITION              equ 0003h
PSMC2PRH_PSMC2PR11_SIZE                  equ 0001h
PSMC2PRH_PSMC2PR11_LENGTH                equ 0001h
PSMC2PRH_PSMC2PR11_MASK                  equ 0008h
PSMC2PRH_PSMC2PR12_POSN                  equ 0004h
PSMC2PRH_PSMC2PR12_POSITION              equ 0004h
PSMC2PRH_PSMC2PR12_SIZE                  equ 0001h
PSMC2PRH_PSMC2PR12_LENGTH                equ 0001h
PSMC2PRH_PSMC2PR12_MASK                  equ 0010h
PSMC2PRH_PSMC2PR13_POSN                  equ 0005h
PSMC2PRH_PSMC2PR13_POSITION              equ 0005h
PSMC2PRH_PSMC2PR13_SIZE                  equ 0001h
PSMC2PRH_PSMC2PR13_LENGTH                equ 0001h
PSMC2PRH_PSMC2PR13_MASK                  equ 0020h
PSMC2PRH_PSMC2PR14_POSN                  equ 0006h
PSMC2PRH_PSMC2PR14_POSITION              equ 0006h
PSMC2PRH_PSMC2PR14_SIZE                  equ 0001h
PSMC2PRH_PSMC2PR14_LENGTH                equ 0001h
PSMC2PRH_PSMC2PR14_MASK                  equ 0040h
PSMC2PRH_PSMC2PR15_POSN                  equ 0007h
PSMC2PRH_PSMC2PR15_POSITION              equ 0007h
PSMC2PRH_PSMC2PR15_SIZE                  equ 0001h
PSMC2PRH_PSMC2PR15_LENGTH                equ 0001h
PSMC2PRH_PSMC2PR15_MASK                  equ 0080h

// Register: PSMC2TMRL
#define PSMC2TMRL PSMC2TMRL
PSMC2TMRL                                equ 0847h
// bitfield definitions
PSMC2TMRL_PSMC2TMR0_POSN                 equ 0000h
PSMC2TMRL_PSMC2TMR0_POSITION             equ 0000h
PSMC2TMRL_PSMC2TMR0_SIZE                 equ 0001h
PSMC2TMRL_PSMC2TMR0_LENGTH               equ 0001h
PSMC2TMRL_PSMC2TMR0_MASK                 equ 0001h
PSMC2TMRL_PSMC2TMR1_POSN                 equ 0001h
PSMC2TMRL_PSMC2TMR1_POSITION             equ 0001h
PSMC2TMRL_PSMC2TMR1_SIZE                 equ 0001h
PSMC2TMRL_PSMC2TMR1_LENGTH               equ 0001h
PSMC2TMRL_PSMC2TMR1_MASK                 equ 0002h
PSMC2TMRL_PSMC2TMR2_POSN                 equ 0002h
PSMC2TMRL_PSMC2TMR2_POSITION             equ 0002h
PSMC2TMRL_PSMC2TMR2_SIZE                 equ 0001h
PSMC2TMRL_PSMC2TMR2_LENGTH               equ 0001h
PSMC2TMRL_PSMC2TMR2_MASK                 equ 0004h
PSMC2TMRL_PSMC2TMR3_POSN                 equ 0003h
PSMC2TMRL_PSMC2TMR3_POSITION             equ 0003h
PSMC2TMRL_PSMC2TMR3_SIZE                 equ 0001h
PSMC2TMRL_PSMC2TMR3_LENGTH               equ 0001h
PSMC2TMRL_PSMC2TMR3_MASK                 equ 0008h
PSMC2TMRL_PSMC2TMR4_POSN                 equ 0004h
PSMC2TMRL_PSMC2TMR4_POSITION             equ 0004h
PSMC2TMRL_PSMC2TMR4_SIZE                 equ 0001h
PSMC2TMRL_PSMC2TMR4_LENGTH               equ 0001h
PSMC2TMRL_PSMC2TMR4_MASK                 equ 0010h
PSMC2TMRL_PSMC2TMR5_POSN                 equ 0005h
PSMC2TMRL_PSMC2TMR5_POSITION             equ 0005h
PSMC2TMRL_PSMC2TMR5_SIZE                 equ 0001h
PSMC2TMRL_PSMC2TMR5_LENGTH               equ 0001h
PSMC2TMRL_PSMC2TMR5_MASK                 equ 0020h
PSMC2TMRL_PSMC2TMR6_POSN                 equ 0006h
PSMC2TMRL_PSMC2TMR6_POSITION             equ 0006h
PSMC2TMRL_PSMC2TMR6_SIZE                 equ 0001h
PSMC2TMRL_PSMC2TMR6_LENGTH               equ 0001h
PSMC2TMRL_PSMC2TMR6_MASK                 equ 0040h
PSMC2TMRL_PSMC2TMR7_POSN                 equ 0007h
PSMC2TMRL_PSMC2TMR7_POSITION             equ 0007h
PSMC2TMRL_PSMC2TMR7_SIZE                 equ 0001h
PSMC2TMRL_PSMC2TMR7_LENGTH               equ 0001h
PSMC2TMRL_PSMC2TMR7_MASK                 equ 0080h

// Register: PSMC2TMRH
#define PSMC2TMRH PSMC2TMRH
PSMC2TMRH                                equ 0848h
// bitfield definitions
PSMC2TMRH_PSMC2TMR8_POSN                 equ 0000h
PSMC2TMRH_PSMC2TMR8_POSITION             equ 0000h
PSMC2TMRH_PSMC2TMR8_SIZE                 equ 0001h
PSMC2TMRH_PSMC2TMR8_LENGTH               equ 0001h
PSMC2TMRH_PSMC2TMR8_MASK                 equ 0001h
PSMC2TMRH_PSMC2TMR9_POSN                 equ 0001h
PSMC2TMRH_PSMC2TMR9_POSITION             equ 0001h
PSMC2TMRH_PSMC2TMR9_SIZE                 equ 0001h
PSMC2TMRH_PSMC2TMR9_LENGTH               equ 0001h
PSMC2TMRH_PSMC2TMR9_MASK                 equ 0002h
PSMC2TMRH_PSMC2TMR10_POSN                equ 0002h
PSMC2TMRH_PSMC2TMR10_POSITION            equ 0002h
PSMC2TMRH_PSMC2TMR10_SIZE                equ 0001h
PSMC2TMRH_PSMC2TMR10_LENGTH              equ 0001h
PSMC2TMRH_PSMC2TMR10_MASK                equ 0004h
PSMC2TMRH_PSMC2TMR11_POSN                equ 0003h
PSMC2TMRH_PSMC2TMR11_POSITION            equ 0003h
PSMC2TMRH_PSMC2TMR11_SIZE                equ 0001h
PSMC2TMRH_PSMC2TMR11_LENGTH              equ 0001h
PSMC2TMRH_PSMC2TMR11_MASK                equ 0008h
PSMC2TMRH_PSMC2TMR12_POSN                equ 0004h
PSMC2TMRH_PSMC2TMR12_POSITION            equ 0004h
PSMC2TMRH_PSMC2TMR12_SIZE                equ 0001h
PSMC2TMRH_PSMC2TMR12_LENGTH              equ 0001h
PSMC2TMRH_PSMC2TMR12_MASK                equ 0010h
PSMC2TMRH_PSMC2TMR13_POSN                equ 0005h
PSMC2TMRH_PSMC2TMR13_POSITION            equ 0005h
PSMC2TMRH_PSMC2TMR13_SIZE                equ 0001h
PSMC2TMRH_PSMC2TMR13_LENGTH              equ 0001h
PSMC2TMRH_PSMC2TMR13_MASK                equ 0020h
PSMC2TMRH_PSMC2TMR14_POSN                equ 0006h
PSMC2TMRH_PSMC2TMR14_POSITION            equ 0006h
PSMC2TMRH_PSMC2TMR14_SIZE                equ 0001h
PSMC2TMRH_PSMC2TMR14_LENGTH              equ 0001h
PSMC2TMRH_PSMC2TMR14_MASK                equ 0040h
PSMC2TMRH_PSMC2TMR15_POSN                equ 0007h
PSMC2TMRH_PSMC2TMR15_POSITION            equ 0007h
PSMC2TMRH_PSMC2TMR15_SIZE                equ 0001h
PSMC2TMRH_PSMC2TMR15_LENGTH              equ 0001h
PSMC2TMRH_PSMC2TMR15_MASK                equ 0080h

// Register: PSMC2DBR
#define PSMC2DBR PSMC2DBR
PSMC2DBR                                 equ 0849h
// bitfield definitions
PSMC2DBR_PSMC2DBR0_POSN                  equ 0000h
PSMC2DBR_PSMC2DBR0_POSITION              equ 0000h
PSMC2DBR_PSMC2DBR0_SIZE                  equ 0001h
PSMC2DBR_PSMC2DBR0_LENGTH                equ 0001h
PSMC2DBR_PSMC2DBR0_MASK                  equ 0001h
PSMC2DBR_PSMC2DBR1_POSN                  equ 0001h
PSMC2DBR_PSMC2DBR1_POSITION              equ 0001h
PSMC2DBR_PSMC2DBR1_SIZE                  equ 0001h
PSMC2DBR_PSMC2DBR1_LENGTH                equ 0001h
PSMC2DBR_PSMC2DBR1_MASK                  equ 0002h
PSMC2DBR_PSMC2DBR2_POSN                  equ 0002h
PSMC2DBR_PSMC2DBR2_POSITION              equ 0002h
PSMC2DBR_PSMC2DBR2_SIZE                  equ 0001h
PSMC2DBR_PSMC2DBR2_LENGTH                equ 0001h
PSMC2DBR_PSMC2DBR2_MASK                  equ 0004h
PSMC2DBR_PSMC2DBR3_POSN                  equ 0003h
PSMC2DBR_PSMC2DBR3_POSITION              equ 0003h
PSMC2DBR_PSMC2DBR3_SIZE                  equ 0001h
PSMC2DBR_PSMC2DBR3_LENGTH                equ 0001h
PSMC2DBR_PSMC2DBR3_MASK                  equ 0008h
PSMC2DBR_PSMC2DBR4_POSN                  equ 0004h
PSMC2DBR_PSMC2DBR4_POSITION              equ 0004h
PSMC2DBR_PSMC2DBR4_SIZE                  equ 0001h
PSMC2DBR_PSMC2DBR4_LENGTH                equ 0001h
PSMC2DBR_PSMC2DBR4_MASK                  equ 0010h
PSMC2DBR_PSMC2DBR5_POSN                  equ 0005h
PSMC2DBR_PSMC2DBR5_POSITION              equ 0005h
PSMC2DBR_PSMC2DBR5_SIZE                  equ 0001h
PSMC2DBR_PSMC2DBR5_LENGTH                equ 0001h
PSMC2DBR_PSMC2DBR5_MASK                  equ 0020h
PSMC2DBR_PSMC2DBR6_POSN                  equ 0006h
PSMC2DBR_PSMC2DBR6_POSITION              equ 0006h
PSMC2DBR_PSMC2DBR6_SIZE                  equ 0001h
PSMC2DBR_PSMC2DBR6_LENGTH                equ 0001h
PSMC2DBR_PSMC2DBR6_MASK                  equ 0040h
PSMC2DBR_PSMC2DBR7_POSN                  equ 0007h
PSMC2DBR_PSMC2DBR7_POSITION              equ 0007h
PSMC2DBR_PSMC2DBR7_SIZE                  equ 0001h
PSMC2DBR_PSMC2DBR7_LENGTH                equ 0001h
PSMC2DBR_PSMC2DBR7_MASK                  equ 0080h

// Register: PSMC2DBF
#define PSMC2DBF PSMC2DBF
PSMC2DBF                                 equ 084Ah
// bitfield definitions
PSMC2DBF_PSMC2DBF0_POSN                  equ 0000h
PSMC2DBF_PSMC2DBF0_POSITION              equ 0000h
PSMC2DBF_PSMC2DBF0_SIZE                  equ 0001h
PSMC2DBF_PSMC2DBF0_LENGTH                equ 0001h
PSMC2DBF_PSMC2DBF0_MASK                  equ 0001h
PSMC2DBF_PSMC2DBF1_POSN                  equ 0001h
PSMC2DBF_PSMC2DBF1_POSITION              equ 0001h
PSMC2DBF_PSMC2DBF1_SIZE                  equ 0001h
PSMC2DBF_PSMC2DBF1_LENGTH                equ 0001h
PSMC2DBF_PSMC2DBF1_MASK                  equ 0002h
PSMC2DBF_PSMC2DBF2_POSN                  equ 0002h
PSMC2DBF_PSMC2DBF2_POSITION              equ 0002h
PSMC2DBF_PSMC2DBF2_SIZE                  equ 0001h
PSMC2DBF_PSMC2DBF2_LENGTH                equ 0001h
PSMC2DBF_PSMC2DBF2_MASK                  equ 0004h
PSMC2DBF_PSMC2DBF3_POSN                  equ 0003h
PSMC2DBF_PSMC2DBF3_POSITION              equ 0003h
PSMC2DBF_PSMC2DBF3_SIZE                  equ 0001h
PSMC2DBF_PSMC2DBF3_LENGTH                equ 0001h
PSMC2DBF_PSMC2DBF3_MASK                  equ 0008h
PSMC2DBF_PSMC2DBF4_POSN                  equ 0004h
PSMC2DBF_PSMC2DBF4_POSITION              equ 0004h
PSMC2DBF_PSMC2DBF4_SIZE                  equ 0001h
PSMC2DBF_PSMC2DBF4_LENGTH                equ 0001h
PSMC2DBF_PSMC2DBF4_MASK                  equ 0010h
PSMC2DBF_PSMC2DBF5_POSN                  equ 0005h
PSMC2DBF_PSMC2DBF5_POSITION              equ 0005h
PSMC2DBF_PSMC2DBF5_SIZE                  equ 0001h
PSMC2DBF_PSMC2DBF5_LENGTH                equ 0001h
PSMC2DBF_PSMC2DBF5_MASK                  equ 0020h
PSMC2DBF_PSMC2DBF6_POSN                  equ 0006h
PSMC2DBF_PSMC2DBF6_POSITION              equ 0006h
PSMC2DBF_PSMC2DBF6_SIZE                  equ 0001h
PSMC2DBF_PSMC2DBF6_LENGTH                equ 0001h
PSMC2DBF_PSMC2DBF6_MASK                  equ 0040h
PSMC2DBF_PSMC2DBF7_POSN                  equ 0007h
PSMC2DBF_PSMC2DBF7_POSITION              equ 0007h
PSMC2DBF_PSMC2DBF7_SIZE                  equ 0001h
PSMC2DBF_PSMC2DBF7_LENGTH                equ 0001h
PSMC2DBF_PSMC2DBF7_MASK                  equ 0080h

// Register: PSMC2BLKR
#define PSMC2BLKR PSMC2BLKR
PSMC2BLKR                                equ 084Bh
// bitfield definitions
PSMC2BLKR_PSMC2BLKR0_POSN                equ 0000h
PSMC2BLKR_PSMC2BLKR0_POSITION            equ 0000h
PSMC2BLKR_PSMC2BLKR0_SIZE                equ 0001h
PSMC2BLKR_PSMC2BLKR0_LENGTH              equ 0001h
PSMC2BLKR_PSMC2BLKR0_MASK                equ 0001h
PSMC2BLKR_PSMC2BLKR1_POSN                equ 0001h
PSMC2BLKR_PSMC2BLKR1_POSITION            equ 0001h
PSMC2BLKR_PSMC2BLKR1_SIZE                equ 0001h
PSMC2BLKR_PSMC2BLKR1_LENGTH              equ 0001h
PSMC2BLKR_PSMC2BLKR1_MASK                equ 0002h
PSMC2BLKR_PSMC2BLKR2_POSN                equ 0002h
PSMC2BLKR_PSMC2BLKR2_POSITION            equ 0002h
PSMC2BLKR_PSMC2BLKR2_SIZE                equ 0001h
PSMC2BLKR_PSMC2BLKR2_LENGTH              equ 0001h
PSMC2BLKR_PSMC2BLKR2_MASK                equ 0004h
PSMC2BLKR_PSMC2BLKR3_POSN                equ 0003h
PSMC2BLKR_PSMC2BLKR3_POSITION            equ 0003h
PSMC2BLKR_PSMC2BLKR3_SIZE                equ 0001h
PSMC2BLKR_PSMC2BLKR3_LENGTH              equ 0001h
PSMC2BLKR_PSMC2BLKR3_MASK                equ 0008h
PSMC2BLKR_PSMC2BLKR4_POSN                equ 0004h
PSMC2BLKR_PSMC2BLKR4_POSITION            equ 0004h
PSMC2BLKR_PSMC2BLKR4_SIZE                equ 0001h
PSMC2BLKR_PSMC2BLKR4_LENGTH              equ 0001h
PSMC2BLKR_PSMC2BLKR4_MASK                equ 0010h
PSMC2BLKR_PSMC2BLKR5_POSN                equ 0005h
PSMC2BLKR_PSMC2BLKR5_POSITION            equ 0005h
PSMC2BLKR_PSMC2BLKR5_SIZE                equ 0001h
PSMC2BLKR_PSMC2BLKR5_LENGTH              equ 0001h
PSMC2BLKR_PSMC2BLKR5_MASK                equ 0020h
PSMC2BLKR_PSMC2BLKR6_POSN                equ 0006h
PSMC2BLKR_PSMC2BLKR6_POSITION            equ 0006h
PSMC2BLKR_PSMC2BLKR6_SIZE                equ 0001h
PSMC2BLKR_PSMC2BLKR6_LENGTH              equ 0001h
PSMC2BLKR_PSMC2BLKR6_MASK                equ 0040h
PSMC2BLKR_PSMC2BLKR7_POSN                equ 0007h
PSMC2BLKR_PSMC2BLKR7_POSITION            equ 0007h
PSMC2BLKR_PSMC2BLKR7_SIZE                equ 0001h
PSMC2BLKR_PSMC2BLKR7_LENGTH              equ 0001h
PSMC2BLKR_PSMC2BLKR7_MASK                equ 0080h

// Register: PSMC2BLKF
#define PSMC2BLKF PSMC2BLKF
PSMC2BLKF                                equ 084Ch
// bitfield definitions
PSMC2BLKF_PSMC2BLKF0_POSN                equ 0000h
PSMC2BLKF_PSMC2BLKF0_POSITION            equ 0000h
PSMC2BLKF_PSMC2BLKF0_SIZE                equ 0001h
PSMC2BLKF_PSMC2BLKF0_LENGTH              equ 0001h
PSMC2BLKF_PSMC2BLKF0_MASK                equ 0001h
PSMC2BLKF_PSMC2BLKF1_POSN                equ 0001h
PSMC2BLKF_PSMC2BLKF1_POSITION            equ 0001h
PSMC2BLKF_PSMC2BLKF1_SIZE                equ 0001h
PSMC2BLKF_PSMC2BLKF1_LENGTH              equ 0001h
PSMC2BLKF_PSMC2BLKF1_MASK                equ 0002h
PSMC2BLKF_PSMC2BLKF2_POSN                equ 0002h
PSMC2BLKF_PSMC2BLKF2_POSITION            equ 0002h
PSMC2BLKF_PSMC2BLKF2_SIZE                equ 0001h
PSMC2BLKF_PSMC2BLKF2_LENGTH              equ 0001h
PSMC2BLKF_PSMC2BLKF2_MASK                equ 0004h
PSMC2BLKF_PSMC2BLKF3_POSN                equ 0003h
PSMC2BLKF_PSMC2BLKF3_POSITION            equ 0003h
PSMC2BLKF_PSMC2BLKF3_SIZE                equ 0001h
PSMC2BLKF_PSMC2BLKF3_LENGTH              equ 0001h
PSMC2BLKF_PSMC2BLKF3_MASK                equ 0008h
PSMC2BLKF_PSMC2BLKF4_POSN                equ 0004h
PSMC2BLKF_PSMC2BLKF4_POSITION            equ 0004h
PSMC2BLKF_PSMC2BLKF4_SIZE                equ 0001h
PSMC2BLKF_PSMC2BLKF4_LENGTH              equ 0001h
PSMC2BLKF_PSMC2BLKF4_MASK                equ 0010h
PSMC2BLKF_PSMC2BLKF5_POSN                equ 0005h
PSMC2BLKF_PSMC2BLKF5_POSITION            equ 0005h
PSMC2BLKF_PSMC2BLKF5_SIZE                equ 0001h
PSMC2BLKF_PSMC2BLKF5_LENGTH              equ 0001h
PSMC2BLKF_PSMC2BLKF5_MASK                equ 0020h
PSMC2BLKF_PSMC2BLKF6_POSN                equ 0006h
PSMC2BLKF_PSMC2BLKF6_POSITION            equ 0006h
PSMC2BLKF_PSMC2BLKF6_SIZE                equ 0001h
PSMC2BLKF_PSMC2BLKF6_LENGTH              equ 0001h
PSMC2BLKF_PSMC2BLKF6_MASK                equ 0040h
PSMC2BLKF_PSMC2BLKF7_POSN                equ 0007h
PSMC2BLKF_PSMC2BLKF7_POSITION            equ 0007h
PSMC2BLKF_PSMC2BLKF7_SIZE                equ 0001h
PSMC2BLKF_PSMC2BLKF7_LENGTH              equ 0001h
PSMC2BLKF_PSMC2BLKF7_MASK                equ 0080h

// Register: PSMC2FFA
#define PSMC2FFA PSMC2FFA
PSMC2FFA                                 equ 084Dh
// bitfield definitions
PSMC2FFA_PSMC2FFA0_POSN                  equ 0000h
PSMC2FFA_PSMC2FFA0_POSITION              equ 0000h
PSMC2FFA_PSMC2FFA0_SIZE                  equ 0001h
PSMC2FFA_PSMC2FFA0_LENGTH                equ 0001h
PSMC2FFA_PSMC2FFA0_MASK                  equ 0001h
PSMC2FFA_PSMC2FFA1_POSN                  equ 0001h
PSMC2FFA_PSMC2FFA1_POSITION              equ 0001h
PSMC2FFA_PSMC2FFA1_SIZE                  equ 0001h
PSMC2FFA_PSMC2FFA1_LENGTH                equ 0001h
PSMC2FFA_PSMC2FFA1_MASK                  equ 0002h
PSMC2FFA_PSMC2FFA2_POSN                  equ 0002h
PSMC2FFA_PSMC2FFA2_POSITION              equ 0002h
PSMC2FFA_PSMC2FFA2_SIZE                  equ 0001h
PSMC2FFA_PSMC2FFA2_LENGTH                equ 0001h
PSMC2FFA_PSMC2FFA2_MASK                  equ 0004h
PSMC2FFA_PSMC2FFA3_POSN                  equ 0003h
PSMC2FFA_PSMC2FFA3_POSITION              equ 0003h
PSMC2FFA_PSMC2FFA3_SIZE                  equ 0001h
PSMC2FFA_PSMC2FFA3_LENGTH                equ 0001h
PSMC2FFA_PSMC2FFA3_MASK                  equ 0008h

// Register: PSMC2STR0
#define PSMC2STR0 PSMC2STR0
PSMC2STR0                                equ 084Eh
// bitfield definitions
PSMC2STR0_P2STRA_POSN                    equ 0000h
PSMC2STR0_P2STRA_POSITION                equ 0000h
PSMC2STR0_P2STRA_SIZE                    equ 0001h
PSMC2STR0_P2STRA_LENGTH                  equ 0001h
PSMC2STR0_P2STRA_MASK                    equ 0001h
PSMC2STR0_P2STRB_POSN                    equ 0001h
PSMC2STR0_P2STRB_POSITION                equ 0001h
PSMC2STR0_P2STRB_SIZE                    equ 0001h
PSMC2STR0_P2STRB_LENGTH                  equ 0001h
PSMC2STR0_P2STRB_MASK                    equ 0002h

// Register: PSMC2STR1
#define PSMC2STR1 PSMC2STR1
PSMC2STR1                                equ 084Fh
// bitfield definitions
PSMC2STR1_P2HSMEN_POSN                   equ 0000h
PSMC2STR1_P2HSMEN_POSITION               equ 0000h
PSMC2STR1_P2HSMEN_SIZE                   equ 0001h
PSMC2STR1_P2HSMEN_LENGTH                 equ 0001h
PSMC2STR1_P2HSMEN_MASK                   equ 0001h
PSMC2STR1_P2LSMEN_POSN                   equ 0001h
PSMC2STR1_P2LSMEN_POSITION               equ 0001h
PSMC2STR1_P2LSMEN_SIZE                   equ 0001h
PSMC2STR1_P2LSMEN_LENGTH                 equ 0001h
PSMC2STR1_P2LSMEN_MASK                   equ 0002h
PSMC2STR1_P2SSYNC_POSN                   equ 0007h
PSMC2STR1_P2SSYNC_POSITION               equ 0007h
PSMC2STR1_P2SSYNC_SIZE                   equ 0001h
PSMC2STR1_P2SSYNC_LENGTH                 equ 0001h
PSMC2STR1_P2SSYNC_MASK                   equ 0080h

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
#define ACKDT                            BANKMASK(SSPCON2), 5
#define ACKEN                            BANKMASK(SSPCON2), 4
#define ACKSTAT                          BANKMASK(SSPCON2), 6
#define ACKTIM                           BANKMASK(SSPCON3), 7
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
#define ADON                             BANKMASK(ADCON0), 0
#define ADPREF0                          BANKMASK(ADCON1), 0
#define ADPREF1                          BANKMASK(ADCON1), 1
#define ADRMD                            BANKMASK(ADCON0), 7
#define AHEN                             BANKMASK(SSPCON3), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
#define ANSA7                            BANKMASK(ANSELA), 7
#define ANSB0                            BANKMASK(ANSELB), 0
#define ANSB1                            BANKMASK(ANSELB), 1
#define ANSB2                            BANKMASK(ANSELB), 2
#define ANSB3                            BANKMASK(ANSELB), 3
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define BCL1IE                           BANKMASK(PIE2), 3
#define BCL1IF                           BANKMASK(PIR2), 3
#define BF                               BANKMASK(SSPSTAT), 0
#define BOEN                             BANKMASK(SSPCON3), 4
#define BORFS                            BANKMASK(BORCON), 6
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
#define C1OE                             BANKMASK(CM1CON0), 5
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1PCH0                           BANKMASK(CM1CON1), 3
#define C1PCH1                           BANKMASK(CM1CON1), 4
#define C1PCH2                           BANKMASK(CM1CON1), 5
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1SP                             BANKMASK(CM1CON0), 2
#define C1SYNC                           BANKMASK(CM1CON0), 0
#define C1ZLF                            BANKMASK(CM1CON0), 3
#define C2HYS                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE2), 6
#define C2IF                             BANKMASK(PIR2), 6
#define C2INTN                           BANKMASK(CM2CON1), 6
#define C2INTP                           BANKMASK(CM2CON1), 7
#define C2NCH0                           BANKMASK(CM2CON1), 0
#define C2NCH1                           BANKMASK(CM2CON1), 1
#define C2NCH2                           BANKMASK(CM2CON1), 2
#define C2OE                             BANKMASK(CM2CON0), 5
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2OUTSEL                         BANKMASK(APFCON), 7
#define C2PCH0                           BANKMASK(CM2CON1), 3
#define C2PCH1                           BANKMASK(CM2CON1), 4
#define C2PCH2                           BANKMASK(CM2CON1), 5
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2SP                             BANKMASK(CM2CON0), 2
#define C2SYNC                           BANKMASK(CM2CON0), 0
#define C2ZLF                            BANKMASK(CM2CON0), 3
#define C3HYS                            BANKMASK(CM3CON0), 1
#define C3IE                             BANKMASK(PIE2), 1
#define C3IF                             BANKMASK(PIR2), 1
#define C3INTN                           BANKMASK(CM3CON1), 6
#define C3INTP                           BANKMASK(CM3CON1), 7
#define C3NCH0                           BANKMASK(CM3CON1), 0
#define C3NCH1                           BANKMASK(CM3CON1), 1
#define C3NCH2                           BANKMASK(CM3CON1), 2
#define C3OE                             BANKMASK(CM3CON0), 5
#define C3ON                             BANKMASK(CM3CON0), 7
#define C3OUT                            BANKMASK(CM3CON0), 6
#define C3PCH0                           BANKMASK(CM3CON1), 3
#define C3PCH1                           BANKMASK(CM3CON1), 4
#define C3PCH2                           BANKMASK(CM3CON1), 5
#define C3POL                            BANKMASK(CM3CON0), 4
#define C3SP                             BANKMASK(CM3CON0), 2
#define C3SYNC                           BANKMASK(CM3CON0), 0
#define C3ZLF                            BANKMASK(CM3CON0), 3
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CCP1SEL                          BANKMASK(APFCON), 6
#define CCP2IE                           BANKMASK(PIE2), 0
#define CCP2IF                           BANKMASK(PIR2), 0
#define CCP2M0                           BANKMASK(CCP2CON), 0
#define CCP2M1                           BANKMASK(CCP2CON), 1
#define CCP2M2                           BANKMASK(CCP2CON), 2
#define CCP2M3                           BANKMASK(CCP2CON), 3
#define CCP2SEL                          BANKMASK(APFCON), 0
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CFGS                             BANKMASK(EECON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CHSN0                            BANKMASK(ADCON2), 0
#define CHSN1                            BANKMASK(ADCON2), 1
#define CHSN2                            BANKMASK(ADCON2), 2
#define CHSN3                            BANKMASK(ADCON2), 3
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON1), 4
#define CLKRDC0                          BANKMASK(CLKRCON), 3
#define CLKRDC1                          BANKMASK(CLKRCON), 4
#define CLKRDIV0                         BANKMASK(CLKRCON), 0
#define CLKRDIV1                         BANKMASK(CLKRCON), 1
#define CLKRDIV2                         BANKMASK(CLKRCON), 2
#define CLKREN                           BANKMASK(CLKRCON), 7
#define CLKROE                           BANKMASK(CLKRCON), 6
#define CLKRSLR                          BANKMASK(CLKRCON), 5
#define CREN                             BANKMASK(RC1STA), 4
#define CSRC                             BANKMASK(TX1STA), 7
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DACEN                            BANKMASK(DACCON0), 7
#define DACNSS                           BANKMASK(DACCON0), 0
#define DACOE1                           BANKMASK(DACCON0), 5
#define DACOE2                           BANKMASK(DACCON0), 4
#define DACPSS0                          BANKMASK(DACCON0), 2
#define DACPSS1                          BANKMASK(DACCON0), 3
#define DACR0                            BANKMASK(DACCON1), 0
#define DACR1                            BANKMASK(DACCON1), 1
#define DACR2                            BANKMASK(DACCON1), 2
#define DACR3                            BANKMASK(DACCON1), 3
#define DACR4                            BANKMASK(DACCON1), 4
#define DACR5                            BANKMASK(DACCON1), 5
#define DACR6                            BANKMASK(DACCON1), 6
#define DACR7                            BANKMASK(DACCON1), 7
#define DC                               BANKMASK(STATUS), 1
#define DC1B0                            BANKMASK(CCP1CON), 4
#define DC1B1                            BANKMASK(CCP1CON), 5
#define DC2B0                            BANKMASK(CCP2CON), 4
#define DC2B1                            BANKMASK(CCP2CON), 5
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define DHEN                             BANKMASK(SSPCON3), 0
#define DONE                             BANKMASK(ADCON0), 1
#define D_nA                             BANKMASK(SSPSTAT), 5
#define EEIE                             BANKMASK(PIE2), 4
#define EEIF                             BANKMASK(PIR2), 4
#define EEPGD                            BANKMASK(EECON1), 7
#define FERR                             BANKMASK(RC1STA), 2
#define FREE                             BANKMASK(EECON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define GCEN                             BANKMASK(SSPCON2), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define HFIOFL                           BANKMASK(OSCSTAT), 3
#define HFIOFR                           BANKMASK(OSCSTAT), 4
#define HFIOFS                           BANKMASK(OSCSTAT), 0
#define INLVLA0                          BANKMASK(INLVLA), 0
#define INLVLA1                          BANKMASK(INLVLA), 1
#define INLVLA2                          BANKMASK(INLVLA), 2
#define INLVLA3                          BANKMASK(INLVLA), 3
#define INLVLA4                          BANKMASK(INLVLA), 4
#define INLVLA5                          BANKMASK(INLVLA), 5
#define INLVLA6                          BANKMASK(INLVLA), 6
#define INLVLA7                          BANKMASK(INLVLA), 7
#define INLVLB0                          BANKMASK(INLVLB), 0
#define INLVLB1                          BANKMASK(INLVLB), 1
#define INLVLB2                          BANKMASK(INLVLB), 2
#define INLVLB3                          BANKMASK(INLVLB), 3
#define INLVLB4                          BANKMASK(INLVLB), 4
#define INLVLB5                          BANKMASK(INLVLB), 5
#define INLVLB6                          BANKMASK(INLVLB), 6
#define INLVLB7                          BANKMASK(INLVLB), 7
#define INLVLC0                          BANKMASK(INLVLC), 0
#define INLVLC1                          BANKMASK(INLVLC), 1
#define INLVLC2                          BANKMASK(INLVLC), 2
#define INLVLC3                          BANKMASK(INLVLC), 3
#define INLVLC4                          BANKMASK(INLVLC), 4
#define INLVLC5                          BANKMASK(INLVLC), 5
#define INLVLC6                          BANKMASK(INLVLC), 6
#define INLVLC7                          BANKMASK(INLVLC), 7
#define INLVLE3                          BANKMASK(INLVLE), 3
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCAF0                           BANKMASK(IOCAF), 0
#define IOCAF1                           BANKMASK(IOCAF), 1
#define IOCAF2                           BANKMASK(IOCAF), 2
#define IOCAF3                           BANKMASK(IOCAF), 3
#define IOCAF4                           BANKMASK(IOCAF), 4
#define IOCAF5                           BANKMASK(IOCAF), 5
#define IOCAF6                           BANKMASK(IOCAF), 6
#define IOCAF7                           BANKMASK(IOCAF), 7
#define IOCAN0                           BANKMASK(IOCAN), 0
#define IOCAN1                           BANKMASK(IOCAN), 1
#define IOCAN2                           BANKMASK(IOCAN), 2
#define IOCAN3                           BANKMASK(IOCAN), 3
#define IOCAN4                           BANKMASK(IOCAN), 4
#define IOCAN5                           BANKMASK(IOCAN), 5
#define IOCAN6                           BANKMASK(IOCAN), 6
#define IOCAN7                           BANKMASK(IOCAN), 7
#define IOCAP0                           BANKMASK(IOCAP), 0
#define IOCAP1                           BANKMASK(IOCAP), 1
#define IOCAP2                           BANKMASK(IOCAP), 2
#define IOCAP3                           BANKMASK(IOCAP), 3
#define IOCAP4                           BANKMASK(IOCAP), 4
#define IOCAP5                           BANKMASK(IOCAP), 5
#define IOCAP6                           BANKMASK(IOCAP), 6
#define IOCAP7                           BANKMASK(IOCAP), 7
#define IOCBF0                           BANKMASK(IOCBF), 0
#define IOCBF1                           BANKMASK(IOCBF), 1
#define IOCBF2                           BANKMASK(IOCBF), 2
#define IOCBF3                           BANKMASK(IOCBF), 3
#define IOCBF4                           BANKMASK(IOCBF), 4
#define IOCBF5                           BANKMASK(IOCBF), 5
#define IOCBF6                           BANKMASK(IOCBF), 6
#define IOCBF7                           BANKMASK(IOCBF), 7
#define IOCBN0                           BANKMASK(IOCBN), 0
#define IOCBN1                           BANKMASK(IOCBN), 1
#define IOCBN2                           BANKMASK(IOCBN), 2
#define IOCBN3                           BANKMASK(IOCBN), 3
#define IOCBN4                           BANKMASK(IOCBN), 4
#define IOCBN5                           BANKMASK(IOCBN), 5
#define IOCBN6                           BANKMASK(IOCBN), 6
#define IOCBN7                           BANKMASK(IOCBN), 7
#define IOCBP0                           BANKMASK(IOCBP), 0
#define IOCBP1                           BANKMASK(IOCBP), 1
#define IOCBP2                           BANKMASK(IOCBP), 2
#define IOCBP3                           BANKMASK(IOCBP), 3
#define IOCBP4                           BANKMASK(IOCBP), 4
#define IOCBP5                           BANKMASK(IOCBP), 5
#define IOCBP6                           BANKMASK(IOCBP), 6
#define IOCBP7                           BANKMASK(IOCBP), 7
#define IOCCF0                           BANKMASK(IOCCF), 0
#define IOCCF1                           BANKMASK(IOCCF), 1
#define IOCCF2                           BANKMASK(IOCCF), 2
#define IOCCF3                           BANKMASK(IOCCF), 3
#define IOCCF4                           BANKMASK(IOCCF), 4
#define IOCCF5                           BANKMASK(IOCCF), 5
#define IOCCF6                           BANKMASK(IOCCF), 6
#define IOCCF7                           BANKMASK(IOCCF), 7
#define IOCCN0                           BANKMASK(IOCCN), 0
#define IOCCN1                           BANKMASK(IOCCN), 1
#define IOCCN2                           BANKMASK(IOCCN), 2
#define IOCCN3                           BANKMASK(IOCCN), 3
#define IOCCN4                           BANKMASK(IOCCN), 4
#define IOCCN5                           BANKMASK(IOCCN), 5
#define IOCCN6                           BANKMASK(IOCCN), 6
#define IOCCN7                           BANKMASK(IOCCN), 7
#define IOCCP0                           BANKMASK(IOCCP), 0
#define IOCCP1                           BANKMASK(IOCCP), 1
#define IOCCP2                           BANKMASK(IOCCP), 2
#define IOCCP3                           BANKMASK(IOCCP), 3
#define IOCCP4                           BANKMASK(IOCCP), 4
#define IOCCP5                           BANKMASK(IOCCP), 5
#define IOCCP6                           BANKMASK(IOCCP), 6
#define IOCCP7                           BANKMASK(IOCCP), 7
#define IOCEF3                           BANKMASK(IOCEF), 3
#define IOCEN3                           BANKMASK(IOCEN), 3
#define IOCEP3                           BANKMASK(IOCEP), 3
#define IOCIE                            BANKMASK(INTCON), 3
#define IOCIF                            BANKMASK(INTCON), 0
#define IRCF0                            BANKMASK(OSCCON), 3
#define IRCF1                            BANKMASK(OSCCON), 4
#define IRCF2                            BANKMASK(OSCCON), 5
#define IRCF3                            BANKMASK(OSCCON), 6
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA3                            BANKMASK(LATA), 3
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
#define LATA6                            BANKMASK(LATA), 6
#define LATA7                            BANKMASK(LATA), 7
#define LATB0                            BANKMASK(LATB), 0
#define LATB1                            BANKMASK(LATB), 1
#define LATB2                            BANKMASK(LATB), 2
#define LATB3                            BANKMASK(LATB), 3
#define LATB4                            BANKMASK(LATB), 4
#define LATB5                            BANKMASK(LATB), 5
#define LATB6                            BANKMASK(LATB), 6
#define LATB7                            BANKMASK(LATB), 7
#define LATC0                            BANKMASK(LATC), 0
#define LATC1                            BANKMASK(LATC), 1
#define LATC2                            BANKMASK(LATC), 2
#define LATC3                            BANKMASK(LATC), 3
#define LATC4                            BANKMASK(LATC), 4
#define LATC5                            BANKMASK(LATC), 5
#define LATC6                            BANKMASK(LATC), 6
#define LATC7                            BANKMASK(LATC), 7
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LWLO                             BANKMASK(EECON1), 5
#define MC1OUT                           BANKMASK(CMOUT), 0
#define MC2OUT                           BANKMASK(CMOUT), 1
#define MC3OUT                           BANKMASK(CMOUT), 2
#define MFIOFR                           BANKMASK(OSCSTAT), 2
#define ODCONA0                          BANKMASK(ODCONA), 0
#define ODCONA1                          BANKMASK(ODCONA), 1
#define ODCONA2                          BANKMASK(ODCONA), 2
#define ODCONA3                          BANKMASK(ODCONA), 3
#define ODCONA4                          BANKMASK(ODCONA), 4
#define ODCONA5                          BANKMASK(ODCONA), 5
#define ODCONA6                          BANKMASK(ODCONA), 6
#define ODCONA7                          BANKMASK(ODCONA), 7
#define ODCONB0                          BANKMASK(ODCONB), 0
#define ODCONB1                          BANKMASK(ODCONB), 1
#define ODCONB2                          BANKMASK(ODCONB), 2
#define ODCONB3                          BANKMASK(ODCONB), 3
#define ODCONB4                          BANKMASK(ODCONB), 4
#define ODCONB5                          BANKMASK(ODCONB), 5
#define ODCONB6                          BANKMASK(ODCONB), 6
#define ODCONB7                          BANKMASK(ODCONB), 7
#define ODCONC0                          BANKMASK(ODCONC), 0
#define ODCONC1                          BANKMASK(ODCONC), 1
#define ODCONC2                          BANKMASK(ODCONC), 2
#define ODCONC3                          BANKMASK(ODCONC), 3
#define ODCONC4                          BANKMASK(ODCONC), 4
#define ODCONC5                          BANKMASK(ODCONC), 5
#define ODCONC6                          BANKMASK(ODCONC), 6
#define ODCONC7                          BANKMASK(ODCONC), 7
#define OERR                             BANKMASK(RC1STA), 1
#define OPA1CH0                          BANKMASK(OPA1CON), 0
#define OPA1CH1                          BANKMASK(OPA1CON), 1
#define OPA1EN                           BANKMASK(OPA1CON), 7
#define OPA1SP                           BANKMASK(OPA1CON), 6
#define OPA2CH0                          BANKMASK(OPA2CON), 0
#define OPA2CH1                          BANKMASK(OPA2CON), 1
#define OPA2EN                           BANKMASK(OPA2CON), 7
#define OPA2SP                           BANKMASK(OPA2CON), 6
#define OSFIE                            BANKMASK(PIE2), 7
#define OSFIF                            BANKMASK(PIR2), 7
#define OSTS                             BANKMASK(OSCSTAT), 5
#define P1ARSEN                          BANKMASK(PSMC1ASDC), 5
#define P1ASDEN                          BANKMASK(PSMC1ASDC), 6
#define P1ASDLA                          BANKMASK(PSMC1ASDL), 0
#define P1ASDLB                          BANKMASK(PSMC1ASDL), 1
#define P1ASDLC                          BANKMASK(PSMC1ASDL), 2
#define P1ASDLD                          BANKMASK(PSMC1ASDL), 3
#define P1ASDLE                          BANKMASK(PSMC1ASDL), 4
#define P1ASDLF                          BANKMASK(PSMC1ASDL), 5
#define P1ASDOV                          BANKMASK(PSMC1ASDC), 0
#define P1ASDSC1                         BANKMASK(PSMC1ASDS), 1
#define P1ASDSC2                         BANKMASK(PSMC1ASDS), 2
#define P1ASDSC3                         BANKMASK(PSMC1ASDS), 3
#define P1ASDSIN                         BANKMASK(PSMC1ASDS), 7
#define P1ASE                            BANKMASK(PSMC1ASDC), 7
#define P1CPRE0                          BANKMASK(PSMC1CLK), 4
#define P1CPRE1                          BANKMASK(PSMC1CLK), 5
#define P1CSRC0                          BANKMASK(PSMC1CLK), 0
#define P1CSRC1                          BANKMASK(PSMC1CLK), 1
#define P1DBFE                           BANKMASK(PSMC1CON), 5
#define P1DBRE                           BANKMASK(PSMC1CON), 4
#define P1DCSC1                          BANKMASK(PSMC1DCS), 1
#define P1DCSC2                          BANKMASK(PSMC1DCS), 2
#define P1DCSC3                          BANKMASK(PSMC1DCS), 3
#define P1DCSIN                          BANKMASK(PSMC1DCS), 7
#define P1DCST                           BANKMASK(PSMC1DCS), 0
#define P1FEBM0                          BANKMASK(PSMC1BLNK), 4
#define P1FEBM1                          BANKMASK(PSMC1BLNK), 5
#define P1FEBSC1                         BANKMASK(PSMC1FEBS), 1
#define P1FEBSC2                         BANKMASK(PSMC1FEBS), 2
#define P1FEBSC3                         BANKMASK(PSMC1FEBS), 3
#define P1FEBSIN                         BANKMASK(PSMC1FEBS), 7
#define P1HSMEN                          BANKMASK(PSMC1STR1), 0
#define P1INPOL                          BANKMASK(PSMC1POL), 6
#define P1LSMEN                          BANKMASK(PSMC1STR1), 1
#define P1M0                             BANKMASK(CCP1CON), 6
#define P1M1                             BANKMASK(CCP1CON), 7
#define P1MDLBIT                         BANKMASK(PSMC1MDL), 5
#define P1MDLEN                          BANKMASK(PSMC1MDL), 7
#define P1MDLPOL                         BANKMASK(PSMC1MDL), 6
#define P1MODE0                          BANKMASK(PSMC1CON), 0
#define P1MODE1                          BANKMASK(PSMC1CON), 1
#define P1MODE2                          BANKMASK(PSMC1CON), 2
#define P1MODE3                          BANKMASK(PSMC1CON), 3
#define P1MSRC0                          BANKMASK(PSMC1MDL), 0
#define P1MSRC1                          BANKMASK(PSMC1MDL), 1
#define P1MSRC2                          BANKMASK(PSMC1MDL), 2
#define P1MSRC3                          BANKMASK(PSMC1MDL), 3
#define P1OEA                            BANKMASK(PSMC1OEN), 0
#define P1OEB                            BANKMASK(PSMC1OEN), 1
#define P1OEC                            BANKMASK(PSMC1OEN), 2
#define P1OED                            BANKMASK(PSMC1OEN), 3
#define P1OEE                            BANKMASK(PSMC1OEN), 4
#define P1OEF                            BANKMASK(PSMC1OEN), 5
#define P1PHSC1                          BANKMASK(PSMC1PHS), 1
#define P1PHSC2                          BANKMASK(PSMC1PHS), 2
#define P1PHSC3                          BANKMASK(PSMC1PHS), 3
#define P1PHSIN                          BANKMASK(PSMC1PHS), 7
#define P1PHST                           BANKMASK(PSMC1PHS), 0
#define P1POLA                           BANKMASK(PSMC1POL), 0
#define P1POLB                           BANKMASK(PSMC1POL), 1
#define P1POLC                           BANKMASK(PSMC1POL), 2
#define P1POLD                           BANKMASK(PSMC1POL), 3
#define P1POLE                           BANKMASK(PSMC1POL), 4
#define P1POLF                           BANKMASK(PSMC1POL), 5
#define P1PRSC1                          BANKMASK(PSMC1PRS), 1
#define P1PRSC2                          BANKMASK(PSMC1PRS), 2
#define P1PRSC3                          BANKMASK(PSMC1PRS), 3
#define P1PRSIN                          BANKMASK(PSMC1PRS), 7
#define P1PRST                           BANKMASK(PSMC1PRS), 0
#define P1REBM0                          BANKMASK(PSMC1BLNK), 0
#define P1REBM1                          BANKMASK(PSMC1BLNK), 1
#define P1REBSC1                         BANKMASK(PSMC1REBS), 1
#define P1REBSC2                         BANKMASK(PSMC1REBS), 2
#define P1REBSC3                         BANKMASK(PSMC1REBS), 3
#define P1REBSIN                         BANKMASK(PSMC1REBS), 7
#define P1SSYNC                          BANKMASK(PSMC1STR1), 7
#define P1STRA                           BANKMASK(PSMC1STR0), 0
#define P1STRB                           BANKMASK(PSMC1STR0), 1
#define P1STRC                           BANKMASK(PSMC1STR0), 2
#define P1STRD                           BANKMASK(PSMC1STR0), 3
#define P1STRE                           BANKMASK(PSMC1STR0), 4
#define P1STRF                           BANKMASK(PSMC1STR0), 5
#define P1SYNC0                          BANKMASK(PSMC1SYNC), 0
#define P1SYNC1                          BANKMASK(PSMC1SYNC), 1
#define P1TDCIE                          BANKMASK(PSMC1INT), 5
#define P1TDCIF                          BANKMASK(PSMC1INT), 1
#define P1TOVIE                          BANKMASK(PSMC1INT), 7
#define P1TOVIF                          BANKMASK(PSMC1INT), 3
#define P1TPHIE                          BANKMASK(PSMC1INT), 6
#define P1TPHIF                          BANKMASK(PSMC1INT), 2
#define P1TPRIE                          BANKMASK(PSMC1INT), 4
#define P1TPRIF                          BANKMASK(PSMC1INT), 0
#define P2ARSEN                          BANKMASK(PSMC2ASDC), 5
#define P2ASDEN                          BANKMASK(PSMC2ASDC), 6
#define P2ASDLA                          BANKMASK(PSMC2ASDL), 0
#define P2ASDLB                          BANKMASK(PSMC2ASDL), 1
#define P2ASDOV                          BANKMASK(PSMC2ASDC), 0
#define P2ASDSC1                         BANKMASK(PSMC2ASDS), 1
#define P2ASDSC2                         BANKMASK(PSMC2ASDS), 2
#define P2ASDSC3                         BANKMASK(PSMC2ASDS), 3
#define P2ASDSIN                         BANKMASK(PSMC2ASDS), 7
#define P2ASE                            BANKMASK(PSMC2ASDC), 7
#define P2CPRE0                          BANKMASK(PSMC2CLK), 4
#define P2CPRE1                          BANKMASK(PSMC2CLK), 5
#define P2CSRC0                          BANKMASK(PSMC2CLK), 0
#define P2CSRC1                          BANKMASK(PSMC2CLK), 1
#define P2DBFE                           BANKMASK(PSMC2CON), 5
#define P2DBRE                           BANKMASK(PSMC2CON), 4
#define P2DCSC1                          BANKMASK(PSMC2DCS), 1
#define P2DCSC2                          BANKMASK(PSMC2DCS), 2
#define P2DCSC3                          BANKMASK(PSMC2DCS), 3
#define P2DCSIN                          BANKMASK(PSMC2DCS), 7
#define P2DCST                           BANKMASK(PSMC2DCS), 0
#define P2FEBM0                          BANKMASK(PSMC2BLNK), 4
#define P2FEBM1                          BANKMASK(PSMC2BLNK), 5
#define P2FEBSC1                         BANKMASK(PSMC2FEBS), 1
#define P2FEBSC2                         BANKMASK(PSMC2FEBS), 2
#define P2FEBSC3                         BANKMASK(PSMC2FEBS), 3
#define P2FEBSIN                         BANKMASK(PSMC2FEBS), 7
#define P2HSMEN                          BANKMASK(PSMC2STR1), 0
#define P2INPOL                          BANKMASK(PSMC2POL), 6
#define P2LSMEN                          BANKMASK(PSMC2STR1), 1
#define P2M0                             BANKMASK(CCP2CON), 6
#define P2M1                             BANKMASK(CCP2CON), 7
#define P2MDLBIT                         BANKMASK(PSMC2MDL), 5
#define P2MDLEN                          BANKMASK(PSMC2MDL), 7
#define P2MDLPOL                         BANKMASK(PSMC2MDL), 6
#define P2MODE0                          BANKMASK(PSMC2CON), 0
#define P2MODE1                          BANKMASK(PSMC2CON), 1
#define P2MODE2                          BANKMASK(PSMC2CON), 2
#define P2MODE3                          BANKMASK(PSMC2CON), 3
#define P2MSRC0                          BANKMASK(PSMC2MDL), 0
#define P2MSRC1                          BANKMASK(PSMC2MDL), 1
#define P2MSRC2                          BANKMASK(PSMC2MDL), 2
#define P2MSRC3                          BANKMASK(PSMC2MDL), 3
#define P2OEA                            BANKMASK(PSMC2OEN), 0
#define P2OEB                            BANKMASK(PSMC2OEN), 1
#define P2PHSC1                          BANKMASK(PSMC2PHS), 1
#define P2PHSC2                          BANKMASK(PSMC2PHS), 2
#define P2PHSC3                          BANKMASK(PSMC2PHS), 3
#define P2PHSIN                          BANKMASK(PSMC2PHS), 7
#define P2PHST                           BANKMASK(PSMC2PHS), 0
#define P2POLA                           BANKMASK(PSMC2POL), 0
#define P2POLB                           BANKMASK(PSMC2POL), 1
#define P2PRSC1                          BANKMASK(PSMC2PRS), 1
#define P2PRSC2                          BANKMASK(PSMC2PRS), 2
#define P2PRSC3                          BANKMASK(PSMC2PRS), 3
#define P2PRSIN                          BANKMASK(PSMC2PRS), 7
#define P2PRST                           BANKMASK(PSMC2PRS), 0
#define P2REBM0                          BANKMASK(PSMC2BLNK), 0
#define P2REBM1                          BANKMASK(PSMC2BLNK), 1
#define P2REBSC1                         BANKMASK(PSMC2REBS), 1
#define P2REBSC2                         BANKMASK(PSMC2REBS), 2
#define P2REBSC3                         BANKMASK(PSMC2REBS), 3
#define P2REBSIN                         BANKMASK(PSMC2REBS), 7
#define P2SSYNC                          BANKMASK(PSMC2STR1), 7
#define P2STRA                           BANKMASK(PSMC2STR0), 0
#define P2STRB                           BANKMASK(PSMC2STR0), 1
#define P2SYNC0                          BANKMASK(PSMC2SYNC), 0
#define P2SYNC1                          BANKMASK(PSMC2SYNC), 1
#define P2TDCIE                          BANKMASK(PSMC2INT), 5
#define P2TDCIF                          BANKMASK(PSMC2INT), 1
#define P2TOVIE                          BANKMASK(PSMC2INT), 7
#define P2TOVIF                          BANKMASK(PSMC2INT), 3
#define P2TPHIE                          BANKMASK(PSMC2INT), 6
#define P2TPHIF                          BANKMASK(PSMC2INT), 2
#define P2TPRIE                          BANKMASK(PSMC2INT), 4
#define P2TPRIF                          BANKMASK(PSMC2INT), 0
#define PCIE                             BANKMASK(SSPCON3), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSPCON2), 2
#define PLLR                             BANKMASK(OSCSTAT), 6
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PSMC1BLKF0                       BANKMASK(PSMC1BLKF), 0
#define PSMC1BLKF1                       BANKMASK(PSMC1BLKF), 1
#define PSMC1BLKF2                       BANKMASK(PSMC1BLKF), 2
#define PSMC1BLKF3                       BANKMASK(PSMC1BLKF), 3
#define PSMC1BLKF4                       BANKMASK(PSMC1BLKF), 4
#define PSMC1BLKF5                       BANKMASK(PSMC1BLKF), 5
#define PSMC1BLKF6                       BANKMASK(PSMC1BLKF), 6
#define PSMC1BLKF7                       BANKMASK(PSMC1BLKF), 7
#define PSMC1BLKR0                       BANKMASK(PSMC1BLKR), 0
#define PSMC1BLKR1                       BANKMASK(PSMC1BLKR), 1
#define PSMC1BLKR2                       BANKMASK(PSMC1BLKR), 2
#define PSMC1BLKR3                       BANKMASK(PSMC1BLKR), 3
#define PSMC1BLKR4                       BANKMASK(PSMC1BLKR), 4
#define PSMC1BLKR5                       BANKMASK(PSMC1BLKR), 5
#define PSMC1BLKR6                       BANKMASK(PSMC1BLKR), 6
#define PSMC1BLKR7                       BANKMASK(PSMC1BLKR), 7
#define PSMC1DBF0                        BANKMASK(PSMC1DBF), 0
#define PSMC1DBF1                        BANKMASK(PSMC1DBF), 1
#define PSMC1DBF2                        BANKMASK(PSMC1DBF), 2
#define PSMC1DBF3                        BANKMASK(PSMC1DBF), 3
#define PSMC1DBF4                        BANKMASK(PSMC1DBF), 4
#define PSMC1DBF5                        BANKMASK(PSMC1DBF), 5
#define PSMC1DBF6                        BANKMASK(PSMC1DBF), 6
#define PSMC1DBF7                        BANKMASK(PSMC1DBF), 7
#define PSMC1DBR0                        BANKMASK(PSMC1DBR), 0
#define PSMC1DBR1                        BANKMASK(PSMC1DBR), 1
#define PSMC1DBR2                        BANKMASK(PSMC1DBR), 2
#define PSMC1DBR3                        BANKMASK(PSMC1DBR), 3
#define PSMC1DBR4                        BANKMASK(PSMC1DBR), 4
#define PSMC1DBR5                        BANKMASK(PSMC1DBR), 5
#define PSMC1DBR6                        BANKMASK(PSMC1DBR), 6
#define PSMC1DBR7                        BANKMASK(PSMC1DBR), 7
#define PSMC1DC0                         BANKMASK(PSMC1DCL), 0
#define PSMC1DC1                         BANKMASK(PSMC1DCL), 1
#define PSMC1DC10                        BANKMASK(PSMC1DCH), 2
#define PSMC1DC11                        BANKMASK(PSMC1DCH), 3
#define PSMC1DC12                        BANKMASK(PSMC1DCH), 4
#define PSMC1DC13                        BANKMASK(PSMC1DCH), 5
#define PSMC1DC14                        BANKMASK(PSMC1DCH), 6
#define PSMC1DC15                        BANKMASK(PSMC1DCH), 7
#define PSMC1DC2                         BANKMASK(PSMC1DCL), 2
#define PSMC1DC3                         BANKMASK(PSMC1DCL), 3
#define PSMC1DC4                         BANKMASK(PSMC1DCL), 4
#define PSMC1DC5                         BANKMASK(PSMC1DCL), 5
#define PSMC1DC6                         BANKMASK(PSMC1DCL), 6
#define PSMC1DC7                         BANKMASK(PSMC1DCL), 7
#define PSMC1DC8                         BANKMASK(PSMC1DCH), 0
#define PSMC1DC9                         BANKMASK(PSMC1DCH), 1
#define PSMC1EN                          BANKMASK(PSMC1CON), 7
#define PSMC1FFA0                        BANKMASK(PSMC1FFA), 0
#define PSMC1FFA1                        BANKMASK(PSMC1FFA), 1
#define PSMC1FFA2                        BANKMASK(PSMC1FFA), 2
#define PSMC1FFA3                        BANKMASK(PSMC1FFA), 3
#define PSMC1LD                          BANKMASK(PSMC1CON), 6
#define PSMC1PH0                         BANKMASK(PSMC1PHL), 0
#define PSMC1PH1                         BANKMASK(PSMC1PHL), 1
#define PSMC1PH10                        BANKMASK(PSMC1PHH), 2
#define PSMC1PH11                        BANKMASK(PSMC1PHH), 3
#define PSMC1PH12                        BANKMASK(PSMC1PHH), 4
#define PSMC1PH13                        BANKMASK(PSMC1PHH), 5
#define PSMC1PH14                        BANKMASK(PSMC1PHH), 6
#define PSMC1PH15                        BANKMASK(PSMC1PHH), 7
#define PSMC1PH2                         BANKMASK(PSMC1PHL), 2
#define PSMC1PH3                         BANKMASK(PSMC1PHL), 3
#define PSMC1PH4                         BANKMASK(PSMC1PHL), 4
#define PSMC1PH5                         BANKMASK(PSMC1PHL), 5
#define PSMC1PH6                         BANKMASK(PSMC1PHL), 6
#define PSMC1PH7                         BANKMASK(PSMC1PHL), 7
#define PSMC1PH8                         BANKMASK(PSMC1PHH), 0
#define PSMC1PH9                         BANKMASK(PSMC1PHH), 1
#define PSMC1PR0                         BANKMASK(PSMC1PRL), 0
#define PSMC1PR1                         BANKMASK(PSMC1PRL), 1
#define PSMC1PR10                        BANKMASK(PSMC1PRH), 2
#define PSMC1PR11                        BANKMASK(PSMC1PRH), 3
#define PSMC1PR12                        BANKMASK(PSMC1PRH), 4
#define PSMC1PR13                        BANKMASK(PSMC1PRH), 5
#define PSMC1PR14                        BANKMASK(PSMC1PRH), 6
#define PSMC1PR15                        BANKMASK(PSMC1PRH), 7
#define PSMC1PR2                         BANKMASK(PSMC1PRL), 2
#define PSMC1PR3                         BANKMASK(PSMC1PRL), 3
#define PSMC1PR4                         BANKMASK(PSMC1PRL), 4
#define PSMC1PR5                         BANKMASK(PSMC1PRL), 5
#define PSMC1PR6                         BANKMASK(PSMC1PRL), 6
#define PSMC1PR7                         BANKMASK(PSMC1PRL), 7
#define PSMC1PR8                         BANKMASK(PSMC1PRH), 0
#define PSMC1PR9                         BANKMASK(PSMC1PRH), 1
#define PSMC1SIE                         BANKMASK(PIE4), 0
#define PSMC1SIF                         BANKMASK(PIR4), 0
#define PSMC1TIE                         BANKMASK(PIE4), 4
#define PSMC1TIF                         BANKMASK(PIR4), 4
#define PSMC1TMR0                        BANKMASK(PSMC1TMRL), 0
#define PSMC1TMR1                        BANKMASK(PSMC1TMRL), 1
#define PSMC1TMR10                       BANKMASK(PSMC1TMRH), 2
#define PSMC1TMR11                       BANKMASK(PSMC1TMRH), 3
#define PSMC1TMR12                       BANKMASK(PSMC1TMRH), 4
#define PSMC1TMR13                       BANKMASK(PSMC1TMRH), 5
#define PSMC1TMR14                       BANKMASK(PSMC1TMRH), 6
#define PSMC1TMR15                       BANKMASK(PSMC1TMRH), 7
#define PSMC1TMR2                        BANKMASK(PSMC1TMRL), 2
#define PSMC1TMR3                        BANKMASK(PSMC1TMRL), 3
#define PSMC1TMR4                        BANKMASK(PSMC1TMRL), 4
#define PSMC1TMR5                        BANKMASK(PSMC1TMRL), 5
#define PSMC1TMR6                        BANKMASK(PSMC1TMRL), 6
#define PSMC1TMR7                        BANKMASK(PSMC1TMRL), 7
#define PSMC1TMR8                        BANKMASK(PSMC1TMRH), 0
#define PSMC1TMR9                        BANKMASK(PSMC1TMRH), 1
#define PSMC2BLKF0                       BANKMASK(PSMC2BLKF), 0
#define PSMC2BLKF1                       BANKMASK(PSMC2BLKF), 1
#define PSMC2BLKF2                       BANKMASK(PSMC2BLKF), 2
#define PSMC2BLKF3                       BANKMASK(PSMC2BLKF), 3
#define PSMC2BLKF4                       BANKMASK(PSMC2BLKF), 4
#define PSMC2BLKF5                       BANKMASK(PSMC2BLKF), 5
#define PSMC2BLKF6                       BANKMASK(PSMC2BLKF), 6
#define PSMC2BLKF7                       BANKMASK(PSMC2BLKF), 7
#define PSMC2BLKR0                       BANKMASK(PSMC2BLKR), 0
#define PSMC2BLKR1                       BANKMASK(PSMC2BLKR), 1
#define PSMC2BLKR2                       BANKMASK(PSMC2BLKR), 2
#define PSMC2BLKR3                       BANKMASK(PSMC2BLKR), 3
#define PSMC2BLKR4                       BANKMASK(PSMC2BLKR), 4
#define PSMC2BLKR5                       BANKMASK(PSMC2BLKR), 5
#define PSMC2BLKR6                       BANKMASK(PSMC2BLKR), 6
#define PSMC2BLKR7                       BANKMASK(PSMC2BLKR), 7
#define PSMC2DBF0                        BANKMASK(PSMC2DBF), 0
#define PSMC2DBF1                        BANKMASK(PSMC2DBF), 1
#define PSMC2DBF2                        BANKMASK(PSMC2DBF), 2
#define PSMC2DBF3                        BANKMASK(PSMC2DBF), 3
#define PSMC2DBF4                        BANKMASK(PSMC2DBF), 4
#define PSMC2DBF5                        BANKMASK(PSMC2DBF), 5
#define PSMC2DBF6                        BANKMASK(PSMC2DBF), 6
#define PSMC2DBF7                        BANKMASK(PSMC2DBF), 7
#define PSMC2DBR0                        BANKMASK(PSMC2DBR), 0
#define PSMC2DBR1                        BANKMASK(PSMC2DBR), 1
#define PSMC2DBR2                        BANKMASK(PSMC2DBR), 2
#define PSMC2DBR3                        BANKMASK(PSMC2DBR), 3
#define PSMC2DBR4                        BANKMASK(PSMC2DBR), 4
#define PSMC2DBR5                        BANKMASK(PSMC2DBR), 5
#define PSMC2DBR6                        BANKMASK(PSMC2DBR), 6
#define PSMC2DBR7                        BANKMASK(PSMC2DBR), 7
#define PSMC2DC0                         BANKMASK(PSMC2DCL), 0
#define PSMC2DC1                         BANKMASK(PSMC2DCL), 1
#define PSMC2DC10                        BANKMASK(PSMC2DCH), 2
#define PSMC2DC11                        BANKMASK(PSMC2DCH), 3
#define PSMC2DC12                        BANKMASK(PSMC2DCH), 4
#define PSMC2DC13                        BANKMASK(PSMC2DCH), 5
#define PSMC2DC14                        BANKMASK(PSMC2DCH), 6
#define PSMC2DC15                        BANKMASK(PSMC2DCH), 7
#define PSMC2DC2                         BANKMASK(PSMC2DCL), 2
#define PSMC2DC3                         BANKMASK(PSMC2DCL), 3
#define PSMC2DC4                         BANKMASK(PSMC2DCL), 4
#define PSMC2DC5                         BANKMASK(PSMC2DCL), 5
#define PSMC2DC6                         BANKMASK(PSMC2DCL), 6
#define PSMC2DC7                         BANKMASK(PSMC2DCL), 7
#define PSMC2DC8                         BANKMASK(PSMC2DCH), 0
#define PSMC2DC9                         BANKMASK(PSMC2DCH), 1
#define PSMC2EN                          BANKMASK(PSMC2CON), 7
#define PSMC2FFA0                        BANKMASK(PSMC2FFA), 0
#define PSMC2FFA1                        BANKMASK(PSMC2FFA), 1
#define PSMC2FFA2                        BANKMASK(PSMC2FFA), 2
#define PSMC2FFA3                        BANKMASK(PSMC2FFA), 3
#define PSMC2LD                          BANKMASK(PSMC2CON), 6
#define PSMC2PH0                         BANKMASK(PSMC2PHL), 0
#define PSMC2PH1                         BANKMASK(PSMC2PHL), 1
#define PSMC2PH10                        BANKMASK(PSMC2PHH), 2
#define PSMC2PH11                        BANKMASK(PSMC2PHH), 3
#define PSMC2PH12                        BANKMASK(PSMC2PHH), 4
#define PSMC2PH13                        BANKMASK(PSMC2PHH), 5
#define PSMC2PH14                        BANKMASK(PSMC2PHH), 6
#define PSMC2PH15                        BANKMASK(PSMC2PHH), 7
#define PSMC2PH2                         BANKMASK(PSMC2PHL), 2
#define PSMC2PH3                         BANKMASK(PSMC2PHL), 3
#define PSMC2PH4                         BANKMASK(PSMC2PHL), 4
#define PSMC2PH5                         BANKMASK(PSMC2PHL), 5
#define PSMC2PH6                         BANKMASK(PSMC2PHL), 6
#define PSMC2PH7                         BANKMASK(PSMC2PHL), 7
#define PSMC2PH8                         BANKMASK(PSMC2PHH), 0
#define PSMC2PH9                         BANKMASK(PSMC2PHH), 1
#define PSMC2PR0                         BANKMASK(PSMC2PRL), 0
#define PSMC2PR1                         BANKMASK(PSMC2PRL), 1
#define PSMC2PR10                        BANKMASK(PSMC2PRH), 2
#define PSMC2PR11                        BANKMASK(PSMC2PRH), 3
#define PSMC2PR12                        BANKMASK(PSMC2PRH), 4
#define PSMC2PR13                        BANKMASK(PSMC2PRH), 5
#define PSMC2PR14                        BANKMASK(PSMC2PRH), 6
#define PSMC2PR15                        BANKMASK(PSMC2PRH), 7
#define PSMC2PR2                         BANKMASK(PSMC2PRL), 2
#define PSMC2PR3                         BANKMASK(PSMC2PRL), 3
#define PSMC2PR4                         BANKMASK(PSMC2PRL), 4
#define PSMC2PR5                         BANKMASK(PSMC2PRL), 5
#define PSMC2PR6                         BANKMASK(PSMC2PRL), 6
#define PSMC2PR7                         BANKMASK(PSMC2PRL), 7
#define PSMC2PR8                         BANKMASK(PSMC2PRH), 0
#define PSMC2PR9                         BANKMASK(PSMC2PRH), 1
#define PSMC2SIE                         BANKMASK(PIE4), 1
#define PSMC2SIF                         BANKMASK(PIR4), 1
#define PSMC2TIE                         BANKMASK(PIE4), 5
#define PSMC2TIF                         BANKMASK(PIR4), 5
#define PSMC2TMR0                        BANKMASK(PSMC2TMRL), 0
#define PSMC2TMR1                        BANKMASK(PSMC2TMRL), 1
#define PSMC2TMR10                       BANKMASK(PSMC2TMRH), 2
#define PSMC2TMR11                       BANKMASK(PSMC2TMRH), 3
#define PSMC2TMR12                       BANKMASK(PSMC2TMRH), 4
#define PSMC2TMR13                       BANKMASK(PSMC2TMRH), 5
#define PSMC2TMR14                       BANKMASK(PSMC2TMRH), 6
#define PSMC2TMR15                       BANKMASK(PSMC2TMRH), 7
#define PSMC2TMR2                        BANKMASK(PSMC2TMRL), 2
#define PSMC2TMR3                        BANKMASK(PSMC2TMRL), 3
#define PSMC2TMR4                        BANKMASK(PSMC2TMRL), 4
#define PSMC2TMR5                        BANKMASK(PSMC2TMRL), 5
#define PSMC2TMR6                        BANKMASK(PSMC2TMRL), 6
#define PSMC2TMR7                        BANKMASK(PSMC2TMRL), 7
#define PSMC2TMR8                        BANKMASK(PSMC2TMRH), 0
#define PSMC2TMR9                        BANKMASK(PSMC2TMRH), 1
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
#define RC0                              BANKMASK(PORTC), 0
#define RC1                              BANKMASK(PORTC), 1
#define RC2                              BANKMASK(PORTC), 2
#define RC3                              BANKMASK(PORTC), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC5                              BANKMASK(PORTC), 5
#define RC6                              BANKMASK(PORTC), 6
#define RC7                              BANKMASK(PORTC), 7
#define RCEN                             BANKMASK(SSPCON2), 3
#define RCIDL                            BANKMASK(BAUD1CON), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(EECON1), 0
#define RE3                              BANKMASK(PORTE), 3
#define RSEN                             BANKMASK(SSPCON2), 1
#define RX9                              BANKMASK(RC1STA), 6
#define RX9D                             BANKMASK(RC1STA), 0
#define RXSEL                            BANKMASK(APFCON), 1
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SBCDE                            BANKMASK(SSPCON3), 2
#define SBOREN                           BANKMASK(BORCON), 7
#define SCIE                             BANKMASK(SSPCON3), 5
#define SCKP                             BANKMASK(BAUD1CON), 4
#define SCKSEL                           BANKMASK(APFCON), 4
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SDAHT                            BANKMASK(SSPCON3), 3
#define SDISEL                           BANKMASK(APFCON), 3
#define SDOSEL                           BANKMASK(APFCON), 5
#define SEN                              BANKMASK(SSPCON2), 0
#define SENDB                            BANKMASK(TX1STA), 3
#define SLRCONA0                         BANKMASK(SLRCONA), 0
#define SLRCONA1                         BANKMASK(SLRCONA), 1
#define SLRCONA2                         BANKMASK(SLRCONA), 2
#define SLRCONA3                         BANKMASK(SLRCONA), 3
#define SLRCONA4                         BANKMASK(SLRCONA), 4
#define SLRCONA5                         BANKMASK(SLRCONA), 5
#define SLRCONA6                         BANKMASK(SLRCONA), 6
#define SLRCONA7                         BANKMASK(SLRCONA), 7
#define SLRCONB0                         BANKMASK(SLRCONB), 0
#define SLRCONB1                         BANKMASK(SLRCONB), 1
#define SLRCONB2                         BANKMASK(SLRCONB), 2
#define SLRCONB3                         BANKMASK(SLRCONB), 3
#define SLRCONB4                         BANKMASK(SLRCONB), 4
#define SLRCONB5                         BANKMASK(SLRCONB), 5
#define SLRCONB6                         BANKMASK(SLRCONB), 6
#define SLRCONB7                         BANKMASK(SLRCONB), 7
#define SLRCONC0                         BANKMASK(SLRCONC), 0
#define SLRCONC1                         BANKMASK(SLRCONC), 1
#define SLRCONC2                         BANKMASK(SLRCONC), 2
#define SLRCONC3                         BANKMASK(SLRCONC), 3
#define SLRCONC4                         BANKMASK(SLRCONC), 4
#define SLRCONC5                         BANKMASK(SLRCONC), 5
#define SLRCONC6                         BANKMASK(SLRCONC), 6
#define SLRCONC7                         BANKMASK(SLRCONC), 7
#define SMP                              BANKMASK(SSPSTAT), 7
#define SPEN                             BANKMASK(RC1STA), 7
#define SPLLEN                           BANKMASK(OSCCON), 7
#define SREN                             BANKMASK(RC1STA), 5
#define SSP1IE                           BANKMASK(PIE1), 3
#define SSP1IF                           BANKMASK(PIR1), 3
#define SSPEN                            BANKMASK(SSPCON1), 5
#define SSPM0                            BANKMASK(SSPCON1), 0
#define SSPM1                            BANKMASK(SSPCON1), 1
#define SSPM2                            BANKMASK(SSPCON1), 2
#define SSPM3                            BANKMASK(SSPCON1), 3
#define SSPOV                            BANKMASK(SSPCON1), 6
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TX1STA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T1OSCR                           BANKMASK(OSCSTAT), 7
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define T2OUTPS0                         BANKMASK(T2CON), 3
#define T2OUTPS1                         BANKMASK(T2CON), 4
#define T2OUTPS2                         BANKMASK(T2CON), 5
#define T2OUTPS3                         BANKMASK(T2CON), 6
#define TMR0CS                           BANKMASK(OPTION_REG), 5
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR0SE                           BANKMASK(OPTION_REG), 4
#define TMR1CS0                          BANKMASK(T1CON), 6
#define TMR1CS1                          BANKMASK(T1CON), 7
#define TMR1GE                           BANKMASK(T1GCON), 7
#define TMR1GIE                          BANKMASK(PIE1), 7
#define TMR1GIF                          BANKMASK(PIR1), 7
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(T2CON), 2
#define TRIGSEL0                         BANKMASK(ADCON2), 4
#define TRIGSEL1                         BANKMASK(ADCON2), 5
#define TRIGSEL2                         BANKMASK(ADCON2), 6
#define TRIGSEL3                         BANKMASK(ADCON2), 7
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
#define TRISC0                           BANKMASK(TRISC), 0
#define TRISC1                           BANKMASK(TRISC), 1
#define TRISC2                           BANKMASK(TRISC), 2
#define TRISC3                           BANKMASK(TRISC), 3
#define TRISC4                           BANKMASK(TRISC), 4
#define TRISC5                           BANKMASK(TRISC), 5
#define TRISC6                           BANKMASK(TRISC), 6
#define TRISC7                           BANKMASK(TRISC), 7
#define TRISE3                           BANKMASK(TRISE), 3
#define TRMT                             BANKMASK(TX1STA), 1
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define TUN5                             BANKMASK(OSCTUNE), 5
#define TX9                              BANKMASK(TX1STA), 6
#define TX9D                             BANKMASK(TX1STA), 0
#define TXEN                             BANKMASK(TX1STA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define TXSEL                            BANKMASK(APFCON), 2
#define UA                               BANKMASK(SSPSTAT), 1
#define WCOL                             BANKMASK(SSPCON1), 7
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
#define WPUA6                            BANKMASK(WPUA), 6
#define WPUA7                            BANKMASK(WPUA), 7
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define WPUC0                            BANKMASK(WPUC), 0
#define WPUC1                            BANKMASK(WPUC), 1
#define WPUC2                            BANKMASK(WPUC), 2
#define WPUC3                            BANKMASK(WPUC), 3
#define WPUC4                            BANKMASK(WPUC), 4
#define WPUC5                            BANKMASK(WPUC), 5
#define WPUC6                            BANKMASK(WPUC), 6
#define WPUC7                            BANKMASK(WPUC), 7
#define WPUE3                            BANKMASK(WPUE), 3
#define WR                               BANKMASK(EECON1), 1
#define WREN                             BANKMASK(EECON1), 2
#define WRERR                            BANKMASK(EECON1), 3
#define WUE                              BANKMASK(BAUD1CON), 1
#define ZERO                             BANKMASK(STATUS), 2
#define Z_SHAD                           BANKMASK(STATUS_SHAD), 2
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRI                              BANKMASK(PCON), 2
#define nRMCLR                           BANKMASK(PCON), 3
#define nRWDT                            BANKMASK(PCON), 4
#define nT1SYNC                          BANKMASK(T1CON), 2
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
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16LF1782_INC_
