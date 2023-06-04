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

#ifndef _PIC16F1713_INC_
#define _PIC16F1713_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F1713
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
PIR2_TMR4IF_POSN                         equ 0001h
PIR2_TMR4IF_POSITION                     equ 0001h
PIR2_TMR4IF_SIZE                         equ 0001h
PIR2_TMR4IF_LENGTH                       equ 0001h
PIR2_TMR4IF_MASK                         equ 0002h
PIR2_TMR6IF_POSN                         equ 0002h
PIR2_TMR6IF_POSITION                     equ 0002h
PIR2_TMR6IF_SIZE                         equ 0001h
PIR2_TMR6IF_LENGTH                       equ 0001h
PIR2_TMR6IF_MASK                         equ 0004h
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h
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
PIR3_ZCDIF_POSN                          equ 0004h
PIR3_ZCDIF_POSITION                      equ 0004h
PIR3_ZCDIF_SIZE                          equ 0001h
PIR3_ZCDIF_LENGTH                        equ 0001h
PIR3_ZCDIF_MASK                          equ 0010h
PIR3_COGIF_POSN                          equ 0005h
PIR3_COGIF_POSITION                      equ 0005h
PIR3_COGIF_SIZE                          equ 0001h
PIR3_COGIF_LENGTH                        equ 0001h
PIR3_COGIF_MASK                          equ 0020h
PIR3_NCOIF_POSN                          equ 0006h
PIR3_NCOIF_POSITION                      equ 0006h
PIR3_NCOIF_SIZE                          equ 0001h
PIR3_NCOIF_LENGTH                        equ 0001h
PIR3_NCOIF_MASK                          equ 0040h

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
T1GCON                                   equ 0019h
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
PIE2_TMR4IE_POSN                         equ 0001h
PIE2_TMR4IE_POSITION                     equ 0001h
PIE2_TMR4IE_SIZE                         equ 0001h
PIE2_TMR4IE_LENGTH                       equ 0001h
PIE2_TMR4IE_MASK                         equ 0002h
PIE2_TMR6IE_POSN                         equ 0002h
PIE2_TMR6IE_POSITION                     equ 0002h
PIE2_TMR6IE_SIZE                         equ 0001h
PIE2_TMR6IE_LENGTH                       equ 0001h
PIE2_TMR6IE_MASK                         equ 0004h
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h
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
PIE3_ZCDIE_POSN                          equ 0004h
PIE3_ZCDIE_POSITION                      equ 0004h
PIE3_ZCDIE_SIZE                          equ 0001h
PIE3_ZCDIE_LENGTH                        equ 0001h
PIE3_ZCDIE_MASK                          equ 0010h
PIE3_COGIE_POSN                          equ 0005h
PIE3_COGIE_POSITION                      equ 0005h
PIE3_COGIE_SIZE                          equ 0001h
PIE3_COGIE_LENGTH                        equ 0001h
PIE3_COGIE_MASK                          equ 0020h
PIE3_NCOIE_POSN                          equ 0006h
PIE3_NCOIE_POSITION                      equ 0006h
PIE3_NCOIE_SIZE                          equ 0001h
PIE3_NCOIE_LENGTH                        equ 0001h
PIE3_NCOIE_MASK                          equ 0040h

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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0098h
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0006h
OSCTUNE_TUN_LENGTH                       equ 0006h
OSCTUNE_TUN_MASK                         equ 003Fh
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
OSCSTAT_SOSCR_POSN                       equ 0007h
OSCSTAT_SOSCR_POSITION                   equ 0007h
OSCSTAT_SOSCR_SIZE                       equ 0001h
OSCSTAT_SOSCR_LENGTH                     equ 0001h
OSCSTAT_SOSCR_MASK                       equ 0080h

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

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 009Fh
// bitfield definitions
ADCON2_TRIGSEL_POSN                      equ 0004h
ADCON2_TRIGSEL_POSITION                  equ 0004h
ADCON2_TRIGSEL_SIZE                      equ 0004h
ADCON2_TRIGSEL_LENGTH                    equ 0004h
ADCON2_TRIGSEL_MASK                      equ 00F0h
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

// Register: DAC1CON0
#define DAC1CON0 DAC1CON0
DAC1CON0                                 equ 0118h
// bitfield definitions
DAC1CON0_DAC1NSS_POSN                    equ 0000h
DAC1CON0_DAC1NSS_POSITION                equ 0000h
DAC1CON0_DAC1NSS_SIZE                    equ 0001h
DAC1CON0_DAC1NSS_LENGTH                  equ 0001h
DAC1CON0_DAC1NSS_MASK                    equ 0001h
DAC1CON0_DAC1PSS_POSN                    equ 0002h
DAC1CON0_DAC1PSS_POSITION                equ 0002h
DAC1CON0_DAC1PSS_SIZE                    equ 0002h
DAC1CON0_DAC1PSS_LENGTH                  equ 0002h
DAC1CON0_DAC1PSS_MASK                    equ 000Ch
DAC1CON0_DAC1OE2_POSN                    equ 0004h
DAC1CON0_DAC1OE2_POSITION                equ 0004h
DAC1CON0_DAC1OE2_SIZE                    equ 0001h
DAC1CON0_DAC1OE2_LENGTH                  equ 0001h
DAC1CON0_DAC1OE2_MASK                    equ 0010h
DAC1CON0_DAC1OE1_POSN                    equ 0005h
DAC1CON0_DAC1OE1_POSITION                equ 0005h
DAC1CON0_DAC1OE1_SIZE                    equ 0001h
DAC1CON0_DAC1OE1_LENGTH                  equ 0001h
DAC1CON0_DAC1OE1_MASK                    equ 0020h
DAC1CON0_DAC1EN_POSN                     equ 0007h
DAC1CON0_DAC1EN_POSITION                 equ 0007h
DAC1CON0_DAC1EN_SIZE                     equ 0001h
DAC1CON0_DAC1EN_LENGTH                   equ 0001h
DAC1CON0_DAC1EN_MASK                     equ 0080h
DAC1CON0_DAC1PSS0_POSN                   equ 0002h
DAC1CON0_DAC1PSS0_POSITION               equ 0002h
DAC1CON0_DAC1PSS0_SIZE                   equ 0001h
DAC1CON0_DAC1PSS0_LENGTH                 equ 0001h
DAC1CON0_DAC1PSS0_MASK                   equ 0004h
DAC1CON0_DAC1PSS1_POSN                   equ 0003h
DAC1CON0_DAC1PSS1_POSITION               equ 0003h
DAC1CON0_DAC1PSS1_SIZE                   equ 0001h
DAC1CON0_DAC1PSS1_LENGTH                 equ 0001h
DAC1CON0_DAC1PSS1_MASK                   equ 0008h
DAC1CON0_DACNSS_POSN                     equ 0000h
DAC1CON0_DACNSS_POSITION                 equ 0000h
DAC1CON0_DACNSS_SIZE                     equ 0001h
DAC1CON0_DACNSS_LENGTH                   equ 0001h
DAC1CON0_DACNSS_MASK                     equ 0001h
DAC1CON0_DACPSS_POSN                     equ 0002h
DAC1CON0_DACPSS_POSITION                 equ 0002h
DAC1CON0_DACPSS_SIZE                     equ 0002h
DAC1CON0_DACPSS_LENGTH                   equ 0002h
DAC1CON0_DACPSS_MASK                     equ 000Ch
DAC1CON0_DACOE0_POSN                     equ 0004h
DAC1CON0_DACOE0_POSITION                 equ 0004h
DAC1CON0_DACOE0_SIZE                     equ 0001h
DAC1CON0_DACOE0_LENGTH                   equ 0001h
DAC1CON0_DACOE0_MASK                     equ 0010h
DAC1CON0_DACOE1_POSN                     equ 0005h
DAC1CON0_DACOE1_POSITION                 equ 0005h
DAC1CON0_DACOE1_SIZE                     equ 0001h
DAC1CON0_DACOE1_LENGTH                   equ 0001h
DAC1CON0_DACOE1_MASK                     equ 0020h
DAC1CON0_DACEN_POSN                      equ 0007h
DAC1CON0_DACEN_POSITION                  equ 0007h
DAC1CON0_DACEN_SIZE                      equ 0001h
DAC1CON0_DACEN_LENGTH                    equ 0001h
DAC1CON0_DACEN_MASK                      equ 0080h
DAC1CON0_DACPSS0_POSN                    equ 0002h
DAC1CON0_DACPSS0_POSITION                equ 0002h
DAC1CON0_DACPSS0_SIZE                    equ 0001h
DAC1CON0_DACPSS0_LENGTH                  equ 0001h
DAC1CON0_DACPSS0_MASK                    equ 0004h
DAC1CON0_DACPSS1_POSN                    equ 0003h
DAC1CON0_DACPSS1_POSITION                equ 0003h
DAC1CON0_DACPSS1_SIZE                    equ 0001h
DAC1CON0_DACPSS1_LENGTH                  equ 0001h
DAC1CON0_DACPSS1_MASK                    equ 0008h

// Register: DAC1CON1
#define DAC1CON1 DAC1CON1
DAC1CON1                                 equ 0119h
// bitfield definitions
DAC1CON1_DAC1R_POSN                      equ 0000h
DAC1CON1_DAC1R_POSITION                  equ 0000h
DAC1CON1_DAC1R_SIZE                      equ 0008h
DAC1CON1_DAC1R_LENGTH                    equ 0008h
DAC1CON1_DAC1R_MASK                      equ 00FFh
DAC1CON1_DAC1R0_POSN                     equ 0000h
DAC1CON1_DAC1R0_POSITION                 equ 0000h
DAC1CON1_DAC1R0_SIZE                     equ 0001h
DAC1CON1_DAC1R0_LENGTH                   equ 0001h
DAC1CON1_DAC1R0_MASK                     equ 0001h
DAC1CON1_DAC1R1_POSN                     equ 0001h
DAC1CON1_DAC1R1_POSITION                 equ 0001h
DAC1CON1_DAC1R1_SIZE                     equ 0001h
DAC1CON1_DAC1R1_LENGTH                   equ 0001h
DAC1CON1_DAC1R1_MASK                     equ 0002h
DAC1CON1_DAC1R2_POSN                     equ 0002h
DAC1CON1_DAC1R2_POSITION                 equ 0002h
DAC1CON1_DAC1R2_SIZE                     equ 0001h
DAC1CON1_DAC1R2_LENGTH                   equ 0001h
DAC1CON1_DAC1R2_MASK                     equ 0004h
DAC1CON1_DAC1R3_POSN                     equ 0003h
DAC1CON1_DAC1R3_POSITION                 equ 0003h
DAC1CON1_DAC1R3_SIZE                     equ 0001h
DAC1CON1_DAC1R3_LENGTH                   equ 0001h
DAC1CON1_DAC1R3_MASK                     equ 0008h
DAC1CON1_DAC1R4_POSN                     equ 0004h
DAC1CON1_DAC1R4_POSITION                 equ 0004h
DAC1CON1_DAC1R4_SIZE                     equ 0001h
DAC1CON1_DAC1R4_LENGTH                   equ 0001h
DAC1CON1_DAC1R4_MASK                     equ 0010h
DAC1CON1_DAC1R5_POSN                     equ 0005h
DAC1CON1_DAC1R5_POSITION                 equ 0005h
DAC1CON1_DAC1R5_SIZE                     equ 0001h
DAC1CON1_DAC1R5_LENGTH                   equ 0001h
DAC1CON1_DAC1R5_MASK                     equ 0020h
DAC1CON1_DAC1R6_POSN                     equ 0006h
DAC1CON1_DAC1R6_POSITION                 equ 0006h
DAC1CON1_DAC1R6_SIZE                     equ 0001h
DAC1CON1_DAC1R6_LENGTH                   equ 0001h
DAC1CON1_DAC1R6_MASK                     equ 0040h
DAC1CON1_DAC1R7_POSN                     equ 0007h
DAC1CON1_DAC1R7_POSITION                 equ 0007h
DAC1CON1_DAC1R7_SIZE                     equ 0001h
DAC1CON1_DAC1R7_LENGTH                   equ 0001h
DAC1CON1_DAC1R7_MASK                     equ 0080h
DAC1CON1_DACR0_POSN                      equ 0000h
DAC1CON1_DACR0_POSITION                  equ 0000h
DAC1CON1_DACR0_SIZE                      equ 0001h
DAC1CON1_DACR0_LENGTH                    equ 0001h
DAC1CON1_DACR0_MASK                      equ 0001h
DAC1CON1_DACR1_POSN                      equ 0001h
DAC1CON1_DACR1_POSITION                  equ 0001h
DAC1CON1_DACR1_SIZE                      equ 0001h
DAC1CON1_DACR1_LENGTH                    equ 0001h
DAC1CON1_DACR1_MASK                      equ 0002h
DAC1CON1_DACR2_POSN                      equ 0002h
DAC1CON1_DACR2_POSITION                  equ 0002h
DAC1CON1_DACR2_SIZE                      equ 0001h
DAC1CON1_DACR2_LENGTH                    equ 0001h
DAC1CON1_DACR2_MASK                      equ 0004h
DAC1CON1_DACR3_POSN                      equ 0003h
DAC1CON1_DACR3_POSITION                  equ 0003h
DAC1CON1_DACR3_SIZE                      equ 0001h
DAC1CON1_DACR3_LENGTH                    equ 0001h
DAC1CON1_DACR3_MASK                      equ 0008h
DAC1CON1_DACR4_POSN                      equ 0004h
DAC1CON1_DACR4_POSITION                  equ 0004h
DAC1CON1_DACR4_SIZE                      equ 0001h
DAC1CON1_DACR4_LENGTH                    equ 0001h
DAC1CON1_DACR4_MASK                      equ 0010h
DAC1CON1_DACR5_POSN                      equ 0005h
DAC1CON1_DACR5_POSITION                  equ 0005h
DAC1CON1_DACR5_SIZE                      equ 0001h
DAC1CON1_DACR5_LENGTH                    equ 0001h
DAC1CON1_DACR5_MASK                      equ 0020h
DAC1CON1_DACR6_POSN                      equ 0006h
DAC1CON1_DACR6_POSITION                  equ 0006h
DAC1CON1_DACR6_SIZE                      equ 0001h
DAC1CON1_DACR6_LENGTH                    equ 0001h
DAC1CON1_DACR6_MASK                      equ 0040h
DAC1CON1_DACR7_POSN                      equ 0007h
DAC1CON1_DACR7_POSITION                  equ 0007h
DAC1CON1_DACR7_SIZE                      equ 0001h
DAC1CON1_DACR7_LENGTH                    equ 0001h
DAC1CON1_DACR7_MASK                      equ 0080h

// Register: DAC2CON0
#define DAC2CON0 DAC2CON0
DAC2CON0                                 equ 011Ah
// bitfield definitions
DAC2CON0_NSS_POSN                        equ 0000h
DAC2CON0_NSS_POSITION                    equ 0000h
DAC2CON0_NSS_SIZE                        equ 0001h
DAC2CON0_NSS_LENGTH                      equ 0001h
DAC2CON0_NSS_MASK                        equ 0001h
DAC2CON0_PSS_POSN                        equ 0002h
DAC2CON0_PSS_POSITION                    equ 0002h
DAC2CON0_PSS_SIZE                        equ 0002h
DAC2CON0_PSS_LENGTH                      equ 0002h
DAC2CON0_PSS_MASK                        equ 000Ch
DAC2CON0_OE2_POSN                        equ 0004h
DAC2CON0_OE2_POSITION                    equ 0004h
DAC2CON0_OE2_SIZE                        equ 0001h
DAC2CON0_OE2_LENGTH                      equ 0001h
DAC2CON0_OE2_MASK                        equ 0010h
DAC2CON0_OE1_POSN                        equ 0005h
DAC2CON0_OE1_POSITION                    equ 0005h
DAC2CON0_OE1_SIZE                        equ 0001h
DAC2CON0_OE1_LENGTH                      equ 0001h
DAC2CON0_OE1_MASK                        equ 0020h
DAC2CON0_EN_POSN                         equ 0007h
DAC2CON0_EN_POSITION                     equ 0007h
DAC2CON0_EN_SIZE                         equ 0001h
DAC2CON0_EN_LENGTH                       equ 0001h
DAC2CON0_EN_MASK                         equ 0080h
DAC2CON0_PSS0_POSN                       equ 0002h
DAC2CON0_PSS0_POSITION                   equ 0002h
DAC2CON0_PSS0_SIZE                       equ 0001h
DAC2CON0_PSS0_LENGTH                     equ 0001h
DAC2CON0_PSS0_MASK                       equ 0004h
DAC2CON0_PSS1_POSN                       equ 0003h
DAC2CON0_PSS1_POSITION                   equ 0003h
DAC2CON0_PSS1_SIZE                       equ 0001h
DAC2CON0_PSS1_LENGTH                     equ 0001h
DAC2CON0_PSS1_MASK                       equ 0008h
DAC2CON0_DACNSS_POSN                     equ 0000h
DAC2CON0_DACNSS_POSITION                 equ 0000h
DAC2CON0_DACNSS_SIZE                     equ 0001h
DAC2CON0_DACNSS_LENGTH                   equ 0001h
DAC2CON0_DACNSS_MASK                     equ 0001h
DAC2CON0_DACPSS_POSN                     equ 0002h
DAC2CON0_DACPSS_POSITION                 equ 0002h
DAC2CON0_DACPSS_SIZE                     equ 0002h
DAC2CON0_DACPSS_LENGTH                   equ 0002h
DAC2CON0_DACPSS_MASK                     equ 000Ch
DAC2CON0_DACOE2_POSN                     equ 0004h
DAC2CON0_DACOE2_POSITION                 equ 0004h
DAC2CON0_DACOE2_SIZE                     equ 0001h
DAC2CON0_DACOE2_LENGTH                   equ 0001h
DAC2CON0_DACOE2_MASK                     equ 0010h
DAC2CON0_DACOE1_POSN                     equ 0005h
DAC2CON0_DACOE1_POSITION                 equ 0005h
DAC2CON0_DACOE1_SIZE                     equ 0001h
DAC2CON0_DACOE1_LENGTH                   equ 0001h
DAC2CON0_DACOE1_MASK                     equ 0020h
DAC2CON0_DACEN_POSN                      equ 0007h
DAC2CON0_DACEN_POSITION                  equ 0007h
DAC2CON0_DACEN_SIZE                      equ 0001h
DAC2CON0_DACEN_LENGTH                    equ 0001h
DAC2CON0_DACEN_MASK                      equ 0080h
DAC2CON0_DACPSS0_POSN                    equ 0002h
DAC2CON0_DACPSS0_POSITION                equ 0002h
DAC2CON0_DACPSS0_SIZE                    equ 0001h
DAC2CON0_DACPSS0_LENGTH                  equ 0001h
DAC2CON0_DACPSS0_MASK                    equ 0004h
DAC2CON0_DACPSS1_POSN                    equ 0003h
DAC2CON0_DACPSS1_POSITION                equ 0003h
DAC2CON0_DACPSS1_SIZE                    equ 0001h
DAC2CON0_DACPSS1_LENGTH                  equ 0001h
DAC2CON0_DACPSS1_MASK                    equ 0008h
DAC2CON0_DAC2NSS_POSN                    equ 0000h
DAC2CON0_DAC2NSS_POSITION                equ 0000h
DAC2CON0_DAC2NSS_SIZE                    equ 0001h
DAC2CON0_DAC2NSS_LENGTH                  equ 0001h
DAC2CON0_DAC2NSS_MASK                    equ 0001h
DAC2CON0_DAC2PSS_POSN                    equ 0002h
DAC2CON0_DAC2PSS_POSITION                equ 0002h
DAC2CON0_DAC2PSS_SIZE                    equ 0002h
DAC2CON0_DAC2PSS_LENGTH                  equ 0002h
DAC2CON0_DAC2PSS_MASK                    equ 000Ch
DAC2CON0_DAC2OE2_POSN                    equ 0004h
DAC2CON0_DAC2OE2_POSITION                equ 0004h
DAC2CON0_DAC2OE2_SIZE                    equ 0001h
DAC2CON0_DAC2OE2_LENGTH                  equ 0001h
DAC2CON0_DAC2OE2_MASK                    equ 0010h
DAC2CON0_DAC2OE1_POSN                    equ 0005h
DAC2CON0_DAC2OE1_POSITION                equ 0005h
DAC2CON0_DAC2OE1_SIZE                    equ 0001h
DAC2CON0_DAC2OE1_LENGTH                  equ 0001h
DAC2CON0_DAC2OE1_MASK                    equ 0020h
DAC2CON0_DAC2EN_POSN                     equ 0007h
DAC2CON0_DAC2EN_POSITION                 equ 0007h
DAC2CON0_DAC2EN_SIZE                     equ 0001h
DAC2CON0_DAC2EN_LENGTH                   equ 0001h
DAC2CON0_DAC2EN_MASK                     equ 0080h
DAC2CON0_DAC2PSS0_POSN                   equ 0002h
DAC2CON0_DAC2PSS0_POSITION               equ 0002h
DAC2CON0_DAC2PSS0_SIZE                   equ 0001h
DAC2CON0_DAC2PSS0_LENGTH                 equ 0001h
DAC2CON0_DAC2PSS0_MASK                   equ 0004h
DAC2CON0_DAC2PSS1_POSN                   equ 0003h
DAC2CON0_DAC2PSS1_POSITION               equ 0003h
DAC2CON0_DAC2PSS1_SIZE                   equ 0001h
DAC2CON0_DAC2PSS1_LENGTH                 equ 0001h
DAC2CON0_DAC2PSS1_MASK                   equ 0008h

// Register: DAC2REF
#define DAC2REF DAC2REF
DAC2REF                                  equ 011Bh
// bitfield definitions
DAC2REF_DACR_POSN                        equ 0000h
DAC2REF_DACR_POSITION                    equ 0000h
DAC2REF_DACR_SIZE                        equ 0005h
DAC2REF_DACR_LENGTH                      equ 0005h
DAC2REF_DACR_MASK                        equ 001Fh
DAC2REF_DACR0_POSN                       equ 0000h
DAC2REF_DACR0_POSITION                   equ 0000h
DAC2REF_DACR0_SIZE                       equ 0001h
DAC2REF_DACR0_LENGTH                     equ 0001h
DAC2REF_DACR0_MASK                       equ 0001h
DAC2REF_DACR1_POSN                       equ 0001h
DAC2REF_DACR1_POSITION                   equ 0001h
DAC2REF_DACR1_SIZE                       equ 0001h
DAC2REF_DACR1_LENGTH                     equ 0001h
DAC2REF_DACR1_MASK                       equ 0002h
DAC2REF_DACR2_POSN                       equ 0002h
DAC2REF_DACR2_POSITION                   equ 0002h
DAC2REF_DACR2_SIZE                       equ 0001h
DAC2REF_DACR2_LENGTH                     equ 0001h
DAC2REF_DACR2_MASK                       equ 0004h
DAC2REF_DACR3_POSN                       equ 0003h
DAC2REF_DACR3_POSITION                   equ 0003h
DAC2REF_DACR3_SIZE                       equ 0001h
DAC2REF_DACR3_LENGTH                     equ 0001h
DAC2REF_DACR3_MASK                       equ 0008h
DAC2REF_DACR4_POSN                       equ 0004h
DAC2REF_DACR4_POSITION                   equ 0004h
DAC2REF_DACR4_SIZE                       equ 0001h
DAC2REF_DACR4_LENGTH                     equ 0001h
DAC2REF_DACR4_MASK                       equ 0010h
DAC2REF_R0_POSN                          equ 0000h
DAC2REF_R0_POSITION                      equ 0000h
DAC2REF_R0_SIZE                          equ 0001h
DAC2REF_R0_LENGTH                        equ 0001h
DAC2REF_R0_MASK                          equ 0001h
DAC2REF_R1_POSN                          equ 0001h
DAC2REF_R1_POSITION                      equ 0001h
DAC2REF_R1_SIZE                          equ 0001h
DAC2REF_R1_LENGTH                        equ 0001h
DAC2REF_R1_MASK                          equ 0002h
DAC2REF_R2_POSN                          equ 0002h
DAC2REF_R2_POSITION                      equ 0002h
DAC2REF_R2_SIZE                          equ 0001h
DAC2REF_R2_LENGTH                        equ 0001h
DAC2REF_R2_MASK                          equ 0004h
DAC2REF_R3_POSN                          equ 0003h
DAC2REF_R3_POSITION                      equ 0003h
DAC2REF_R3_SIZE                          equ 0001h
DAC2REF_R3_LENGTH                        equ 0001h
DAC2REF_R3_MASK                          equ 0008h
DAC2REF_R4_POSN                          equ 0004h
DAC2REF_R4_POSITION                      equ 0004h
DAC2REF_R4_SIZE                          equ 0001h
DAC2REF_R4_LENGTH                        equ 0001h
DAC2REF_R4_MASK                          equ 0010h
DAC2REF_DAC2R_POSN                       equ 0000h
DAC2REF_DAC2R_POSITION                   equ 0000h
DAC2REF_DAC2R_SIZE                       equ 0005h
DAC2REF_DAC2R_LENGTH                     equ 0005h
DAC2REF_DAC2R_MASK                       equ 001Fh
DAC2REF_DAC2R0_POSN                      equ 0000h
DAC2REF_DAC2R0_POSITION                  equ 0000h
DAC2REF_DAC2R0_SIZE                      equ 0001h
DAC2REF_DAC2R0_LENGTH                    equ 0001h
DAC2REF_DAC2R0_MASK                      equ 0001h
DAC2REF_DAC2R1_POSN                      equ 0001h
DAC2REF_DAC2R1_POSITION                  equ 0001h
DAC2REF_DAC2R1_SIZE                      equ 0001h
DAC2REF_DAC2R1_LENGTH                    equ 0001h
DAC2REF_DAC2R1_MASK                      equ 0002h
DAC2REF_DAC2R2_POSN                      equ 0002h
DAC2REF_DAC2R2_POSITION                  equ 0002h
DAC2REF_DAC2R2_SIZE                      equ 0001h
DAC2REF_DAC2R2_LENGTH                    equ 0001h
DAC2REF_DAC2R2_MASK                      equ 0004h
DAC2REF_DAC2R3_POSN                      equ 0003h
DAC2REF_DAC2R3_POSITION                  equ 0003h
DAC2REF_DAC2R3_SIZE                      equ 0001h
DAC2REF_DAC2R3_LENGTH                    equ 0001h
DAC2REF_DAC2R3_MASK                      equ 0008h
DAC2REF_DAC2R4_POSN                      equ 0004h
DAC2REF_DAC2R4_POSITION                  equ 0004h
DAC2REF_DAC2R4_SIZE                      equ 0001h
DAC2REF_DAC2R4_LENGTH                    equ 0001h
DAC2REF_DAC2R4_MASK                      equ 0010h
DAC2REF_REF0_POSN                        equ 0000h
DAC2REF_REF0_POSITION                    equ 0000h
DAC2REF_REF0_SIZE                        equ 0001h
DAC2REF_REF0_LENGTH                      equ 0001h
DAC2REF_REF0_MASK                        equ 0001h
DAC2REF_REF1_POSN                        equ 0001h
DAC2REF_REF1_POSITION                    equ 0001h
DAC2REF_REF1_SIZE                        equ 0001h
DAC2REF_REF1_LENGTH                      equ 0001h
DAC2REF_REF1_MASK                        equ 0002h
DAC2REF_REF2_POSN                        equ 0002h
DAC2REF_REF2_POSITION                    equ 0002h
DAC2REF_REF2_SIZE                        equ 0001h
DAC2REF_REF2_LENGTH                      equ 0001h
DAC2REF_REF2_MASK                        equ 0004h
DAC2REF_REF3_POSN                        equ 0003h
DAC2REF_REF3_POSITION                    equ 0003h
DAC2REF_REF3_SIZE                        equ 0001h
DAC2REF_REF3_LENGTH                      equ 0001h
DAC2REF_REF3_MASK                        equ 0008h
DAC2REF_REF4_POSN                        equ 0004h
DAC2REF_REF4_POSITION                    equ 0004h
DAC2REF_REF4_SIZE                        equ 0001h
DAC2REF_REF4_LENGTH                      equ 0001h
DAC2REF_REF4_MASK                        equ 0010h
DAC2REF_REF5_POSN                        equ 0005h
DAC2REF_REF5_POSITION                    equ 0005h
DAC2REF_REF5_SIZE                        equ 0001h
DAC2REF_REF5_LENGTH                      equ 0001h
DAC2REF_REF5_MASK                        equ 0020h
DAC2REF_DAC2REF0_POSN                    equ 0000h
DAC2REF_DAC2REF0_POSITION                equ 0000h
DAC2REF_DAC2REF0_SIZE                    equ 0001h
DAC2REF_DAC2REF0_LENGTH                  equ 0001h
DAC2REF_DAC2REF0_MASK                    equ 0001h
DAC2REF_DAC2REF1_POSN                    equ 0001h
DAC2REF_DAC2REF1_POSITION                equ 0001h
DAC2REF_DAC2REF1_SIZE                    equ 0001h
DAC2REF_DAC2REF1_LENGTH                  equ 0001h
DAC2REF_DAC2REF1_MASK                    equ 0002h
DAC2REF_DAC2REF2_POSN                    equ 0002h
DAC2REF_DAC2REF2_POSITION                equ 0002h
DAC2REF_DAC2REF2_SIZE                    equ 0001h
DAC2REF_DAC2REF2_LENGTH                  equ 0001h
DAC2REF_DAC2REF2_MASK                    equ 0004h
DAC2REF_DAC2REF3_POSN                    equ 0003h
DAC2REF_DAC2REF3_POSITION                equ 0003h
DAC2REF_DAC2REF3_SIZE                    equ 0001h
DAC2REF_DAC2REF3_LENGTH                  equ 0001h
DAC2REF_DAC2REF3_MASK                    equ 0008h
DAC2REF_DAC2REF4_POSN                    equ 0004h
DAC2REF_DAC2REF4_POSITION                equ 0004h
DAC2REF_DAC2REF4_SIZE                    equ 0001h
DAC2REF_DAC2REF4_LENGTH                  equ 0001h
DAC2REF_DAC2REF4_MASK                    equ 0010h
DAC2REF_DAC2REF5_POSN                    equ 0005h
DAC2REF_DAC2REF5_POSITION                equ 0005h
DAC2REF_DAC2REF5_SIZE                    equ 0001h
DAC2REF_DAC2REF5_LENGTH                  equ 0001h
DAC2REF_DAC2REF5_MASK                    equ 0020h

// Register: ZCD1CON
#define ZCD1CON ZCD1CON
ZCD1CON                                  equ 011Ch
// bitfield definitions
ZCD1CON_ZCD1INTN_POSN                    equ 0000h
ZCD1CON_ZCD1INTN_POSITION                equ 0000h
ZCD1CON_ZCD1INTN_SIZE                    equ 0001h
ZCD1CON_ZCD1INTN_LENGTH                  equ 0001h
ZCD1CON_ZCD1INTN_MASK                    equ 0001h
ZCD1CON_ZCD1INTP_POSN                    equ 0001h
ZCD1CON_ZCD1INTP_POSITION                equ 0001h
ZCD1CON_ZCD1INTP_SIZE                    equ 0001h
ZCD1CON_ZCD1INTP_LENGTH                  equ 0001h
ZCD1CON_ZCD1INTP_MASK                    equ 0002h
ZCD1CON_ZCD1POL_POSN                     equ 0004h
ZCD1CON_ZCD1POL_POSITION                 equ 0004h
ZCD1CON_ZCD1POL_SIZE                     equ 0001h
ZCD1CON_ZCD1POL_LENGTH                   equ 0001h
ZCD1CON_ZCD1POL_MASK                     equ 0010h
ZCD1CON_ZCD1OUT_POSN                     equ 0005h
ZCD1CON_ZCD1OUT_POSITION                 equ 0005h
ZCD1CON_ZCD1OUT_SIZE                     equ 0001h
ZCD1CON_ZCD1OUT_LENGTH                   equ 0001h
ZCD1CON_ZCD1OUT_MASK                     equ 0020h
ZCD1CON_ZCD1EN_POSN                      equ 0007h
ZCD1CON_ZCD1EN_POSITION                  equ 0007h
ZCD1CON_ZCD1EN_SIZE                      equ 0001h
ZCD1CON_ZCD1EN_LENGTH                    equ 0001h
ZCD1CON_ZCD1EN_MASK                      equ 0080h

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

// Register: ANSELC
#define ANSELC ANSELC
ANSELC                                   equ 018Eh
// bitfield definitions
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
ANSELC_ANSC6_POSN                        equ 0006h
ANSELC_ANSC6_POSITION                    equ 0006h
ANSELC_ANSC6_SIZE                        equ 0001h
ANSELC_ANSC6_LENGTH                      equ 0001h
ANSELC_ANSC6_MASK                        equ 0040h
ANSELC_ANSC7_POSN                        equ 0007h
ANSELC_ANSC7_POSITION                    equ 0007h
ANSELC_ANSC7_SIZE                        equ 0001h
ANSELC_ANSC7_LENGTH                      equ 0001h
ANSELC_ANSC7_MASK                        equ 0080h

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

// Register: VREGCON
#define VREGCON VREGCON
VREGCON                                  equ 0197h
// bitfield definitions
VREGCON_VREGPM_POSN                      equ 0001h
VREGCON_VREGPM_POSITION                  equ 0001h
VREGCON_VREGPM_SIZE                      equ 0001h
VREGCON_VREGPM_LENGTH                    equ 0001h
VREGCON_VREGPM_MASK                      equ 0002h

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

// Register: WPUE
#define WPUE WPUE
WPUE                                     equ 0210h
// bitfield definitions
WPUE_WPUE3_POSN                          equ 0003h
WPUE_WPUE3_POSITION                      equ 0003h
WPUE_WPUE3_SIZE                          equ 0001h
WPUE_WPUE3_LENGTH                        equ 0001h
WPUE_WPUE3_MASK                          equ 0008h

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

// Register: ODCONA
#define ODCONA ODCONA
ODCONA                                   equ 028Ch
// bitfield definitions
ODCONA_ODA0_POSN                         equ 0000h
ODCONA_ODA0_POSITION                     equ 0000h
ODCONA_ODA0_SIZE                         equ 0001h
ODCONA_ODA0_LENGTH                       equ 0001h
ODCONA_ODA0_MASK                         equ 0001h
ODCONA_ODA1_POSN                         equ 0001h
ODCONA_ODA1_POSITION                     equ 0001h
ODCONA_ODA1_SIZE                         equ 0001h
ODCONA_ODA1_LENGTH                       equ 0001h
ODCONA_ODA1_MASK                         equ 0002h
ODCONA_ODA2_POSN                         equ 0002h
ODCONA_ODA2_POSITION                     equ 0002h
ODCONA_ODA2_SIZE                         equ 0001h
ODCONA_ODA2_LENGTH                       equ 0001h
ODCONA_ODA2_MASK                         equ 0004h
ODCONA_ODA3_POSN                         equ 0003h
ODCONA_ODA3_POSITION                     equ 0003h
ODCONA_ODA3_SIZE                         equ 0001h
ODCONA_ODA3_LENGTH                       equ 0001h
ODCONA_ODA3_MASK                         equ 0008h
ODCONA_ODA4_POSN                         equ 0004h
ODCONA_ODA4_POSITION                     equ 0004h
ODCONA_ODA4_SIZE                         equ 0001h
ODCONA_ODA4_LENGTH                       equ 0001h
ODCONA_ODA4_MASK                         equ 0010h
ODCONA_ODA5_POSN                         equ 0005h
ODCONA_ODA5_POSITION                     equ 0005h
ODCONA_ODA5_SIZE                         equ 0001h
ODCONA_ODA5_LENGTH                       equ 0001h
ODCONA_ODA5_MASK                         equ 0020h
ODCONA_ODA6_POSN                         equ 0006h
ODCONA_ODA6_POSITION                     equ 0006h
ODCONA_ODA6_SIZE                         equ 0001h
ODCONA_ODA6_LENGTH                       equ 0001h
ODCONA_ODA6_MASK                         equ 0040h
ODCONA_ODA7_POSN                         equ 0007h
ODCONA_ODA7_POSITION                     equ 0007h
ODCONA_ODA7_SIZE                         equ 0001h
ODCONA_ODA7_LENGTH                       equ 0001h
ODCONA_ODA7_MASK                         equ 0080h

// Register: ODCONB
#define ODCONB ODCONB
ODCONB                                   equ 028Dh
// bitfield definitions
ODCONB_ODB0_POSN                         equ 0000h
ODCONB_ODB0_POSITION                     equ 0000h
ODCONB_ODB0_SIZE                         equ 0001h
ODCONB_ODB0_LENGTH                       equ 0001h
ODCONB_ODB0_MASK                         equ 0001h
ODCONB_ODB1_POSN                         equ 0001h
ODCONB_ODB1_POSITION                     equ 0001h
ODCONB_ODB1_SIZE                         equ 0001h
ODCONB_ODB1_LENGTH                       equ 0001h
ODCONB_ODB1_MASK                         equ 0002h
ODCONB_ODB2_POSN                         equ 0002h
ODCONB_ODB2_POSITION                     equ 0002h
ODCONB_ODB2_SIZE                         equ 0001h
ODCONB_ODB2_LENGTH                       equ 0001h
ODCONB_ODB2_MASK                         equ 0004h
ODCONB_ODB3_POSN                         equ 0003h
ODCONB_ODB3_POSITION                     equ 0003h
ODCONB_ODB3_SIZE                         equ 0001h
ODCONB_ODB3_LENGTH                       equ 0001h
ODCONB_ODB3_MASK                         equ 0008h
ODCONB_ODB4_POSN                         equ 0004h
ODCONB_ODB4_POSITION                     equ 0004h
ODCONB_ODB4_SIZE                         equ 0001h
ODCONB_ODB4_LENGTH                       equ 0001h
ODCONB_ODB4_MASK                         equ 0010h
ODCONB_ODB5_POSN                         equ 0005h
ODCONB_ODB5_POSITION                     equ 0005h
ODCONB_ODB5_SIZE                         equ 0001h
ODCONB_ODB5_LENGTH                       equ 0001h
ODCONB_ODB5_MASK                         equ 0020h
ODCONB_ODB6_POSN                         equ 0006h
ODCONB_ODB6_POSITION                     equ 0006h
ODCONB_ODB6_SIZE                         equ 0001h
ODCONB_ODB6_LENGTH                       equ 0001h
ODCONB_ODB6_MASK                         equ 0040h
ODCONB_ODB7_POSN                         equ 0007h
ODCONB_ODB7_POSITION                     equ 0007h
ODCONB_ODB7_SIZE                         equ 0001h
ODCONB_ODB7_LENGTH                       equ 0001h
ODCONB_ODB7_MASK                         equ 0080h

// Register: ODCONC
#define ODCONC ODCONC
ODCONC                                   equ 028Eh
// bitfield definitions
ODCONC_ODC0_POSN                         equ 0000h
ODCONC_ODC0_POSITION                     equ 0000h
ODCONC_ODC0_SIZE                         equ 0001h
ODCONC_ODC0_LENGTH                       equ 0001h
ODCONC_ODC0_MASK                         equ 0001h
ODCONC_ODC1_POSN                         equ 0001h
ODCONC_ODC1_POSITION                     equ 0001h
ODCONC_ODC1_SIZE                         equ 0001h
ODCONC_ODC1_LENGTH                       equ 0001h
ODCONC_ODC1_MASK                         equ 0002h
ODCONC_ODC2_POSN                         equ 0002h
ODCONC_ODC2_POSITION                     equ 0002h
ODCONC_ODC2_SIZE                         equ 0001h
ODCONC_ODC2_LENGTH                       equ 0001h
ODCONC_ODC2_MASK                         equ 0004h
ODCONC_ODC3_POSN                         equ 0003h
ODCONC_ODC3_POSITION                     equ 0003h
ODCONC_ODC3_SIZE                         equ 0001h
ODCONC_ODC3_LENGTH                       equ 0001h
ODCONC_ODC3_MASK                         equ 0008h
ODCONC_ODC4_POSN                         equ 0004h
ODCONC_ODC4_POSITION                     equ 0004h
ODCONC_ODC4_SIZE                         equ 0001h
ODCONC_ODC4_LENGTH                       equ 0001h
ODCONC_ODC4_MASK                         equ 0010h
ODCONC_ODC5_POSN                         equ 0005h
ODCONC_ODC5_POSITION                     equ 0005h
ODCONC_ODC5_SIZE                         equ 0001h
ODCONC_ODC5_LENGTH                       equ 0001h
ODCONC_ODC5_MASK                         equ 0020h
ODCONC_ODC6_POSN                         equ 0006h
ODCONC_ODC6_POSITION                     equ 0006h
ODCONC_ODC6_SIZE                         equ 0001h
ODCONC_ODC6_LENGTH                       equ 0001h
ODCONC_ODC6_MASK                         equ 0040h
ODCONC_ODC7_POSN                         equ 0007h
ODCONC_ODC7_POSITION                     equ 0007h
ODCONC_ODC7_SIZE                         equ 0001h
ODCONC_ODC7_LENGTH                       equ 0001h
ODCONC_ODC7_MASK                         equ 0080h

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
CCP1CON_CCP1Y_POSN                       equ 0004h
CCP1CON_CCP1Y_POSITION                   equ 0004h
CCP1CON_CCP1Y_SIZE                       equ 0001h
CCP1CON_CCP1Y_LENGTH                     equ 0001h
CCP1CON_CCP1Y_MASK                       equ 0010h
CCP1CON_CCP1X_POSN                       equ 0005h
CCP1CON_CCP1X_POSITION                   equ 0005h
CCP1CON_CCP1X_SIZE                       equ 0001h
CCP1CON_CCP1X_LENGTH                     equ 0001h
CCP1CON_CCP1X_MASK                       equ 0020h

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
CCP2CON_CCP2Y_POSN                       equ 0004h
CCP2CON_CCP2Y_POSITION                   equ 0004h
CCP2CON_CCP2Y_SIZE                       equ 0001h
CCP2CON_CCP2Y_LENGTH                     equ 0001h
CCP2CON_CCP2Y_MASK                       equ 0010h
CCP2CON_CCP2X_POSN                       equ 0005h
CCP2CON_CCP2X_POSITION                   equ 0005h
CCP2CON_CCP2X_SIZE                       equ 0001h
CCP2CON_CCP2X_LENGTH                     equ 0001h
CCP2CON_CCP2X_MASK                       equ 0020h

// Register: CCPTMRS
#define CCPTMRS CCPTMRS
CCPTMRS                                  equ 029Eh
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
CCPTMRS_P3TSEL_POSN                      equ 0004h
CCPTMRS_P3TSEL_POSITION                  equ 0004h
CCPTMRS_P3TSEL_SIZE                      equ 0002h
CCPTMRS_P3TSEL_LENGTH                    equ 0002h
CCPTMRS_P3TSEL_MASK                      equ 0030h
CCPTMRS_P4TSEL_POSN                      equ 0006h
CCPTMRS_P4TSEL_POSITION                  equ 0006h
CCPTMRS_P4TSEL_SIZE                      equ 0002h
CCPTMRS_P4TSEL_LENGTH                    equ 0002h
CCPTMRS_P4TSEL_MASK                      equ 00C0h
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
CCPTMRS_P3TSEL0_POSN                     equ 0004h
CCPTMRS_P3TSEL0_POSITION                 equ 0004h
CCPTMRS_P3TSEL0_SIZE                     equ 0001h
CCPTMRS_P3TSEL0_LENGTH                   equ 0001h
CCPTMRS_P3TSEL0_MASK                     equ 0010h
CCPTMRS_P3TSEL1_POSN                     equ 0005h
CCPTMRS_P3TSEL1_POSITION                 equ 0005h
CCPTMRS_P3TSEL1_SIZE                     equ 0001h
CCPTMRS_P3TSEL1_LENGTH                   equ 0001h
CCPTMRS_P3TSEL1_MASK                     equ 0020h
CCPTMRS_P4TSEL0_POSN                     equ 0006h
CCPTMRS_P4TSEL0_POSITION                 equ 0006h
CCPTMRS_P4TSEL0_SIZE                     equ 0001h
CCPTMRS_P4TSEL0_LENGTH                   equ 0001h
CCPTMRS_P4TSEL0_MASK                     equ 0040h
CCPTMRS_P4TSEL1_POSN                     equ 0007h
CCPTMRS_P4TSEL1_POSITION                 equ 0007h
CCPTMRS_P4TSEL1_SIZE                     equ 0001h
CCPTMRS_P4TSEL1_LENGTH                   equ 0001h
CCPTMRS_P4TSEL1_MASK                     equ 0080h

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
SLRCONA_SLRA3_POSN                       equ 0003h
SLRCONA_SLRA3_POSITION                   equ 0003h
SLRCONA_SLRA3_SIZE                       equ 0001h
SLRCONA_SLRA3_LENGTH                     equ 0001h
SLRCONA_SLRA3_MASK                       equ 0008h
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
SLRCONA_SLRA6_POSN                       equ 0006h
SLRCONA_SLRA6_POSITION                   equ 0006h
SLRCONA_SLRA6_SIZE                       equ 0001h
SLRCONA_SLRA6_LENGTH                     equ 0001h
SLRCONA_SLRA6_MASK                       equ 0040h
SLRCONA_SLRA7_POSN                       equ 0007h
SLRCONA_SLRA7_POSITION                   equ 0007h
SLRCONA_SLRA7_SIZE                       equ 0001h
SLRCONA_SLRA7_LENGTH                     equ 0001h
SLRCONA_SLRA7_MASK                       equ 0080h

// Register: SLRCONB
#define SLRCONB SLRCONB
SLRCONB                                  equ 030Dh
// bitfield definitions
SLRCONB_SLRB0_POSN                       equ 0000h
SLRCONB_SLRB0_POSITION                   equ 0000h
SLRCONB_SLRB0_SIZE                       equ 0001h
SLRCONB_SLRB0_LENGTH                     equ 0001h
SLRCONB_SLRB0_MASK                       equ 0001h
SLRCONB_SLRB1_POSN                       equ 0001h
SLRCONB_SLRB1_POSITION                   equ 0001h
SLRCONB_SLRB1_SIZE                       equ 0001h
SLRCONB_SLRB1_LENGTH                     equ 0001h
SLRCONB_SLRB1_MASK                       equ 0002h
SLRCONB_SLRB2_POSN                       equ 0002h
SLRCONB_SLRB2_POSITION                   equ 0002h
SLRCONB_SLRB2_SIZE                       equ 0001h
SLRCONB_SLRB2_LENGTH                     equ 0001h
SLRCONB_SLRB2_MASK                       equ 0004h
SLRCONB_SLRB3_POSN                       equ 0003h
SLRCONB_SLRB3_POSITION                   equ 0003h
SLRCONB_SLRB3_SIZE                       equ 0001h
SLRCONB_SLRB3_LENGTH                     equ 0001h
SLRCONB_SLRB3_MASK                       equ 0008h
SLRCONB_SLRB4_POSN                       equ 0004h
SLRCONB_SLRB4_POSITION                   equ 0004h
SLRCONB_SLRB4_SIZE                       equ 0001h
SLRCONB_SLRB4_LENGTH                     equ 0001h
SLRCONB_SLRB4_MASK                       equ 0010h
SLRCONB_SLRB5_POSN                       equ 0005h
SLRCONB_SLRB5_POSITION                   equ 0005h
SLRCONB_SLRB5_SIZE                       equ 0001h
SLRCONB_SLRB5_LENGTH                     equ 0001h
SLRCONB_SLRB5_MASK                       equ 0020h
SLRCONB_SLRB6_POSN                       equ 0006h
SLRCONB_SLRB6_POSITION                   equ 0006h
SLRCONB_SLRB6_SIZE                       equ 0001h
SLRCONB_SLRB6_LENGTH                     equ 0001h
SLRCONB_SLRB6_MASK                       equ 0040h
SLRCONB_SLRB7_POSN                       equ 0007h
SLRCONB_SLRB7_POSITION                   equ 0007h
SLRCONB_SLRB7_SIZE                       equ 0001h
SLRCONB_SLRB7_LENGTH                     equ 0001h
SLRCONB_SLRB7_MASK                       equ 0080h

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
SLRCONC_SLRC6_POSN                       equ 0006h
SLRCONC_SLRC6_POSITION                   equ 0006h
SLRCONC_SLRC6_SIZE                       equ 0001h
SLRCONC_SLRC6_LENGTH                     equ 0001h
SLRCONC_SLRC6_MASK                       equ 0040h
SLRCONC_SLRC7_POSN                       equ 0007h
SLRCONC_SLRC7_POSITION                   equ 0007h
SLRCONC_SLRC7_SIZE                       equ 0001h
SLRCONC_SLRC7_LENGTH                     equ 0001h
SLRCONC_SLRC7_MASK                       equ 0080h

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

// Register: NCO1ACCL
#define NCO1ACCL NCO1ACCL
NCO1ACCL                                 equ 0498h
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
NCO1ACCL_NCO1ACC_POSN                    equ 0000h
NCO1ACCL_NCO1ACC_POSITION                equ 0000h
NCO1ACCL_NCO1ACC_SIZE                    equ 0008h
NCO1ACCL_NCO1ACC_LENGTH                  equ 0008h
NCO1ACCL_NCO1ACC_MASK                    equ 00FFh

// Register: NCO1ACCH
#define NCO1ACCH NCO1ACCH
NCO1ACCH                                 equ 0499h
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
NCO1ACCH_NCO1ACC_POSN                    equ 0000h
NCO1ACCH_NCO1ACC_POSITION                equ 0000h
NCO1ACCH_NCO1ACC_SIZE                    equ 0008h
NCO1ACCH_NCO1ACC_LENGTH                  equ 0008h
NCO1ACCH_NCO1ACC_MASK                    equ 00FFh

// Register: NCO1ACCU
#define NCO1ACCU NCO1ACCU
NCO1ACCU                                 equ 049Ah
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
NCO1ACCU_NCO1ACC_POSN                    equ 0000h
NCO1ACCU_NCO1ACC_POSITION                equ 0000h
NCO1ACCU_NCO1ACC_SIZE                    equ 0008h
NCO1ACCU_NCO1ACC_LENGTH                  equ 0008h
NCO1ACCU_NCO1ACC_MASK                    equ 00FFh

// Register: NCO1INCL
#define NCO1INCL NCO1INCL
NCO1INCL                                 equ 049Bh
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
NCO1INCL_NCO1INC_POSN                    equ 0000h
NCO1INCL_NCO1INC_POSITION                equ 0000h
NCO1INCL_NCO1INC_SIZE                    equ 0008h
NCO1INCL_NCO1INC_LENGTH                  equ 0008h
NCO1INCL_NCO1INC_MASK                    equ 00FFh

// Register: NCO1INCH
#define NCO1INCH NCO1INCH
NCO1INCH                                 equ 049Ch
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
NCO1INCH_NCO1INC_POSN                    equ 0000h
NCO1INCH_NCO1INC_POSITION                equ 0000h
NCO1INCH_NCO1INC_SIZE                    equ 0008h
NCO1INCH_NCO1INC_LENGTH                  equ 0008h
NCO1INCH_NCO1INC_MASK                    equ 00FFh

// Register: NCO1INCU
#define NCO1INCU NCO1INCU
NCO1INCU                                 equ 049Dh
// bitfield definitions
NCO1INCU_NCO1INC16_POSN                  equ 0000h
NCO1INCU_NCO1INC16_POSITION              equ 0000h
NCO1INCU_NCO1INC16_SIZE                  equ 0001h
NCO1INCU_NCO1INC16_LENGTH                equ 0001h
NCO1INCU_NCO1INC16_MASK                  equ 0001h
NCO1INCU_NCO1INC17_POSN                  equ 0001h
NCO1INCU_NCO1INC17_POSITION              equ 0001h
NCO1INCU_NCO1INC17_SIZE                  equ 0001h
NCO1INCU_NCO1INC17_LENGTH                equ 0001h
NCO1INCU_NCO1INC17_MASK                  equ 0002h
NCO1INCU_NCO1INC18_POSN                  equ 0002h
NCO1INCU_NCO1INC18_POSITION              equ 0002h
NCO1INCU_NCO1INC18_SIZE                  equ 0001h
NCO1INCU_NCO1INC18_LENGTH                equ 0001h
NCO1INCU_NCO1INC18_MASK                  equ 0004h
NCO1INCU_NCO1INC19_POSN                  equ 0003h
NCO1INCU_NCO1INC19_POSITION              equ 0003h
NCO1INCU_NCO1INC19_SIZE                  equ 0001h
NCO1INCU_NCO1INC19_LENGTH                equ 0001h
NCO1INCU_NCO1INC19_MASK                  equ 0008h
NCO1INCU_NCO1INC_POSN                    equ 0000h
NCO1INCU_NCO1INC_POSITION                equ 0000h
NCO1INCU_NCO1INC_SIZE                    equ 0008h
NCO1INCU_NCO1INC_LENGTH                  equ 0008h
NCO1INCU_NCO1INC_MASK                    equ 00FFh

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

// Register: OPA1CON
#define OPA1CON OPA1CON
OPA1CON                                  equ 0511h
// bitfield definitions
OPA1CON_OPA1PCH_POSN                     equ 0000h
OPA1CON_OPA1PCH_POSITION                 equ 0000h
OPA1CON_OPA1PCH_SIZE                     equ 0002h
OPA1CON_OPA1PCH_LENGTH                   equ 0002h
OPA1CON_OPA1PCH_MASK                     equ 0003h
OPA1CON_OPA1UG_POSN                      equ 0004h
OPA1CON_OPA1UG_POSITION                  equ 0004h
OPA1CON_OPA1UG_SIZE                      equ 0001h
OPA1CON_OPA1UG_LENGTH                    equ 0001h
OPA1CON_OPA1UG_MASK                      equ 0010h
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
OPA1CON_OPA1PCH0_POSN                    equ 0000h
OPA1CON_OPA1PCH0_POSITION                equ 0000h
OPA1CON_OPA1PCH0_SIZE                    equ 0001h
OPA1CON_OPA1PCH0_LENGTH                  equ 0001h
OPA1CON_OPA1PCH0_MASK                    equ 0001h
OPA1CON_OPA1PCH1_POSN                    equ 0001h
OPA1CON_OPA1PCH1_POSITION                equ 0001h
OPA1CON_OPA1PCH1_SIZE                    equ 0001h
OPA1CON_OPA1PCH1_LENGTH                  equ 0001h
OPA1CON_OPA1PCH1_MASK                    equ 0002h

// Register: OPA2CON
#define OPA2CON OPA2CON
OPA2CON                                  equ 0515h
// bitfield definitions
OPA2CON_OPA2PCH_POSN                     equ 0000h
OPA2CON_OPA2PCH_POSITION                 equ 0000h
OPA2CON_OPA2PCH_SIZE                     equ 0002h
OPA2CON_OPA2PCH_LENGTH                   equ 0002h
OPA2CON_OPA2PCH_MASK                     equ 0003h
OPA2CON_OPA2UG_POSN                      equ 0004h
OPA2CON_OPA2UG_POSITION                  equ 0004h
OPA2CON_OPA2UG_SIZE                      equ 0001h
OPA2CON_OPA2UG_LENGTH                    equ 0001h
OPA2CON_OPA2UG_MASK                      equ 0010h
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
OPA2CON_OPA2PCH0_POSN                    equ 0000h
OPA2CON_OPA2PCH0_POSITION                equ 0000h
OPA2CON_OPA2PCH0_SIZE                    equ 0001h
OPA2CON_OPA2PCH0_LENGTH                  equ 0001h
OPA2CON_OPA2PCH0_MASK                    equ 0001h
OPA2CON_OPA2PCH1_POSN                    equ 0001h
OPA2CON_OPA2PCH1_POSITION                equ 0001h
OPA2CON_OPA2PCH1_SIZE                    equ 0001h
OPA2CON_OPA2PCH1_LENGTH                  equ 0001h
OPA2CON_OPA2PCH1_MASK                    equ 0002h

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
PWM3DCL                                  equ 0617h
// bitfield definitions
PWM3DCL_PWM3DCL_POSN                     equ 0006h
PWM3DCL_PWM3DCL_POSITION                 equ 0006h
PWM3DCL_PWM3DCL_SIZE                     equ 0002h
PWM3DCL_PWM3DCL_LENGTH                   equ 0002h
PWM3DCL_PWM3DCL_MASK                     equ 00C0h
PWM3DCL_PWM3DCL0_POSN                    equ 0006h
PWM3DCL_PWM3DCL0_POSITION                equ 0006h
PWM3DCL_PWM3DCL0_SIZE                    equ 0001h
PWM3DCL_PWM3DCL0_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL0_MASK                    equ 0040h
PWM3DCL_PWM3DCL1_POSN                    equ 0007h
PWM3DCL_PWM3DCL1_POSITION                equ 0007h
PWM3DCL_PWM3DCL1_SIZE                    equ 0001h
PWM3DCL_PWM3DCL1_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL1_MASK                    equ 0080h

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
PWM3DCH                                  equ 0618h
// bitfield definitions
PWM3DCH_PWM3DCH_POSN                     equ 0000h
PWM3DCH_PWM3DCH_POSITION                 equ 0000h
PWM3DCH_PWM3DCH_SIZE                     equ 0008h
PWM3DCH_PWM3DCH_LENGTH                   equ 0008h
PWM3DCH_PWM3DCH_MASK                     equ 00FFh
PWM3DCH_PWM3DCH0_POSN                    equ 0000h
PWM3DCH_PWM3DCH0_POSITION                equ 0000h
PWM3DCH_PWM3DCH0_SIZE                    equ 0001h
PWM3DCH_PWM3DCH0_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH0_MASK                    equ 0001h
PWM3DCH_PWM3DCH1_POSN                    equ 0001h
PWM3DCH_PWM3DCH1_POSITION                equ 0001h
PWM3DCH_PWM3DCH1_SIZE                    equ 0001h
PWM3DCH_PWM3DCH1_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH1_MASK                    equ 0002h
PWM3DCH_PWM3DCH2_POSN                    equ 0002h
PWM3DCH_PWM3DCH2_POSITION                equ 0002h
PWM3DCH_PWM3DCH2_SIZE                    equ 0001h
PWM3DCH_PWM3DCH2_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH2_MASK                    equ 0004h
PWM3DCH_PWM3DCH3_POSN                    equ 0003h
PWM3DCH_PWM3DCH3_POSITION                equ 0003h
PWM3DCH_PWM3DCH3_SIZE                    equ 0001h
PWM3DCH_PWM3DCH3_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH3_MASK                    equ 0008h
PWM3DCH_PWM3DCH4_POSN                    equ 0004h
PWM3DCH_PWM3DCH4_POSITION                equ 0004h
PWM3DCH_PWM3DCH4_SIZE                    equ 0001h
PWM3DCH_PWM3DCH4_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH4_MASK                    equ 0010h
PWM3DCH_PWM3DCH5_POSN                    equ 0005h
PWM3DCH_PWM3DCH5_POSITION                equ 0005h
PWM3DCH_PWM3DCH5_SIZE                    equ 0001h
PWM3DCH_PWM3DCH5_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH5_MASK                    equ 0020h
PWM3DCH_PWM3DCH6_POSN                    equ 0006h
PWM3DCH_PWM3DCH6_POSITION                equ 0006h
PWM3DCH_PWM3DCH6_SIZE                    equ 0001h
PWM3DCH_PWM3DCH6_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH6_MASK                    equ 0040h
PWM3DCH_PWM3DCH7_POSN                    equ 0007h
PWM3DCH_PWM3DCH7_POSITION                equ 0007h
PWM3DCH_PWM3DCH7_SIZE                    equ 0001h
PWM3DCH_PWM3DCH7_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH7_MASK                    equ 0080h

// Register: PWM3CON
#define PWM3CON PWM3CON
PWM3CON                                  equ 0619h
// bitfield definitions
PWM3CON_PWM3POL_POSN                     equ 0004h
PWM3CON_PWM3POL_POSITION                 equ 0004h
PWM3CON_PWM3POL_SIZE                     equ 0001h
PWM3CON_PWM3POL_LENGTH                   equ 0001h
PWM3CON_PWM3POL_MASK                     equ 0010h
PWM3CON_PWM3OUT_POSN                     equ 0005h
PWM3CON_PWM3OUT_POSITION                 equ 0005h
PWM3CON_PWM3OUT_SIZE                     equ 0001h
PWM3CON_PWM3OUT_LENGTH                   equ 0001h
PWM3CON_PWM3OUT_MASK                     equ 0020h
PWM3CON_PWM3EN_POSN                      equ 0007h
PWM3CON_PWM3EN_POSITION                  equ 0007h
PWM3CON_PWM3EN_SIZE                      equ 0001h
PWM3CON_PWM3EN_LENGTH                    equ 0001h
PWM3CON_PWM3EN_MASK                      equ 0080h

// Register: PWM4DCL
#define PWM4DCL PWM4DCL
PWM4DCL                                  equ 061Ah
// bitfield definitions
PWM4DCL_PWM4DCL_POSN                     equ 0006h
PWM4DCL_PWM4DCL_POSITION                 equ 0006h
PWM4DCL_PWM4DCL_SIZE                     equ 0002h
PWM4DCL_PWM4DCL_LENGTH                   equ 0002h
PWM4DCL_PWM4DCL_MASK                     equ 00C0h
PWM4DCL_PWM4DCL0_POSN                    equ 0006h
PWM4DCL_PWM4DCL0_POSITION                equ 0006h
PWM4DCL_PWM4DCL0_SIZE                    equ 0001h
PWM4DCL_PWM4DCL0_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL0_MASK                    equ 0040h
PWM4DCL_PWM4DCL1_POSN                    equ 0007h
PWM4DCL_PWM4DCL1_POSITION                equ 0007h
PWM4DCL_PWM4DCL1_SIZE                    equ 0001h
PWM4DCL_PWM4DCL1_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL1_MASK                    equ 0080h

// Register: PWM4DCH
#define PWM4DCH PWM4DCH
PWM4DCH                                  equ 061Bh
// bitfield definitions
PWM4DCH_PWM4DCH_POSN                     equ 0000h
PWM4DCH_PWM4DCH_POSITION                 equ 0000h
PWM4DCH_PWM4DCH_SIZE                     equ 0008h
PWM4DCH_PWM4DCH_LENGTH                   equ 0008h
PWM4DCH_PWM4DCH_MASK                     equ 00FFh
PWM4DCH_PWM4DCH0_POSN                    equ 0000h
PWM4DCH_PWM4DCH0_POSITION                equ 0000h
PWM4DCH_PWM4DCH0_SIZE                    equ 0001h
PWM4DCH_PWM4DCH0_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH0_MASK                    equ 0001h
PWM4DCH_PWM4DCH1_POSN                    equ 0001h
PWM4DCH_PWM4DCH1_POSITION                equ 0001h
PWM4DCH_PWM4DCH1_SIZE                    equ 0001h
PWM4DCH_PWM4DCH1_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH1_MASK                    equ 0002h
PWM4DCH_PWM4DCH2_POSN                    equ 0002h
PWM4DCH_PWM4DCH2_POSITION                equ 0002h
PWM4DCH_PWM4DCH2_SIZE                    equ 0001h
PWM4DCH_PWM4DCH2_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH2_MASK                    equ 0004h
PWM4DCH_PWM4DCH3_POSN                    equ 0003h
PWM4DCH_PWM4DCH3_POSITION                equ 0003h
PWM4DCH_PWM4DCH3_SIZE                    equ 0001h
PWM4DCH_PWM4DCH3_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH3_MASK                    equ 0008h
PWM4DCH_PWM4DCH4_POSN                    equ 0004h
PWM4DCH_PWM4DCH4_POSITION                equ 0004h
PWM4DCH_PWM4DCH4_SIZE                    equ 0001h
PWM4DCH_PWM4DCH4_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH4_MASK                    equ 0010h
PWM4DCH_PWM4DCH5_POSN                    equ 0005h
PWM4DCH_PWM4DCH5_POSITION                equ 0005h
PWM4DCH_PWM4DCH5_SIZE                    equ 0001h
PWM4DCH_PWM4DCH5_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH5_MASK                    equ 0020h
PWM4DCH_PWM4DCH6_POSN                    equ 0006h
PWM4DCH_PWM4DCH6_POSITION                equ 0006h
PWM4DCH_PWM4DCH6_SIZE                    equ 0001h
PWM4DCH_PWM4DCH6_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH6_MASK                    equ 0040h
PWM4DCH_PWM4DCH7_POSN                    equ 0007h
PWM4DCH_PWM4DCH7_POSITION                equ 0007h
PWM4DCH_PWM4DCH7_SIZE                    equ 0001h
PWM4DCH_PWM4DCH7_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH7_MASK                    equ 0080h

// Register: PWM4CON
#define PWM4CON PWM4CON
PWM4CON                                  equ 061Ch
// bitfield definitions
PWM4CON_PWM4POL_POSN                     equ 0004h
PWM4CON_PWM4POL_POSITION                 equ 0004h
PWM4CON_PWM4POL_SIZE                     equ 0001h
PWM4CON_PWM4POL_LENGTH                   equ 0001h
PWM4CON_PWM4POL_MASK                     equ 0010h
PWM4CON_PWM4OUT_POSN                     equ 0005h
PWM4CON_PWM4OUT_POSITION                 equ 0005h
PWM4CON_PWM4OUT_SIZE                     equ 0001h
PWM4CON_PWM4OUT_LENGTH                   equ 0001h
PWM4CON_PWM4OUT_MASK                     equ 0020h
PWM4CON_PWM4EN_POSN                      equ 0007h
PWM4CON_PWM4EN_POSITION                  equ 0007h
PWM4CON_PWM4EN_SIZE                      equ 0001h
PWM4CON_PWM4EN_LENGTH                    equ 0001h
PWM4CON_PWM4EN_MASK                      equ 0080h

// Register: COG1PHR
#define COG1PHR COG1PHR
COG1PHR                                  equ 0691h
// bitfield definitions
COG1PHR_G1PHR_POSN                       equ 0000h
COG1PHR_G1PHR_POSITION                   equ 0000h
COG1PHR_G1PHR_SIZE                       equ 0006h
COG1PHR_G1PHR_LENGTH                     equ 0006h
COG1PHR_G1PHR_MASK                       equ 003Fh
COG1PHR_G1PHR0_POSN                      equ 0000h
COG1PHR_G1PHR0_POSITION                  equ 0000h
COG1PHR_G1PHR0_SIZE                      equ 0001h
COG1PHR_G1PHR0_LENGTH                    equ 0001h
COG1PHR_G1PHR0_MASK                      equ 0001h
COG1PHR_G1PHR1_POSN                      equ 0001h
COG1PHR_G1PHR1_POSITION                  equ 0001h
COG1PHR_G1PHR1_SIZE                      equ 0001h
COG1PHR_G1PHR1_LENGTH                    equ 0001h
COG1PHR_G1PHR1_MASK                      equ 0002h
COG1PHR_G1PHR2_POSN                      equ 0002h
COG1PHR_G1PHR2_POSITION                  equ 0002h
COG1PHR_G1PHR2_SIZE                      equ 0001h
COG1PHR_G1PHR2_LENGTH                    equ 0001h
COG1PHR_G1PHR2_MASK                      equ 0004h
COG1PHR_G1PHR3_POSN                      equ 0003h
COG1PHR_G1PHR3_POSITION                  equ 0003h
COG1PHR_G1PHR3_SIZE                      equ 0001h
COG1PHR_G1PHR3_LENGTH                    equ 0001h
COG1PHR_G1PHR3_MASK                      equ 0008h
COG1PHR_G1PHR4_POSN                      equ 0004h
COG1PHR_G1PHR4_POSITION                  equ 0004h
COG1PHR_G1PHR4_SIZE                      equ 0001h
COG1PHR_G1PHR4_LENGTH                    equ 0001h
COG1PHR_G1PHR4_MASK                      equ 0010h
COG1PHR_G1PHR5_POSN                      equ 0005h
COG1PHR_G1PHR5_POSITION                  equ 0005h
COG1PHR_G1PHR5_SIZE                      equ 0001h
COG1PHR_G1PHR5_LENGTH                    equ 0001h
COG1PHR_G1PHR5_MASK                      equ 0020h

// Register: COG1PHF
#define COG1PHF COG1PHF
COG1PHF                                  equ 0692h
// bitfield definitions
COG1PHF_G1PHF_POSN                       equ 0000h
COG1PHF_G1PHF_POSITION                   equ 0000h
COG1PHF_G1PHF_SIZE                       equ 0006h
COG1PHF_G1PHF_LENGTH                     equ 0006h
COG1PHF_G1PHF_MASK                       equ 003Fh
COG1PHF_G1PHF0_POSN                      equ 0000h
COG1PHF_G1PHF0_POSITION                  equ 0000h
COG1PHF_G1PHF0_SIZE                      equ 0001h
COG1PHF_G1PHF0_LENGTH                    equ 0001h
COG1PHF_G1PHF0_MASK                      equ 0001h
COG1PHF_G1PHF1_POSN                      equ 0001h
COG1PHF_G1PHF1_POSITION                  equ 0001h
COG1PHF_G1PHF1_SIZE                      equ 0001h
COG1PHF_G1PHF1_LENGTH                    equ 0001h
COG1PHF_G1PHF1_MASK                      equ 0002h
COG1PHF_G1PHF2_POSN                      equ 0002h
COG1PHF_G1PHF2_POSITION                  equ 0002h
COG1PHF_G1PHF2_SIZE                      equ 0001h
COG1PHF_G1PHF2_LENGTH                    equ 0001h
COG1PHF_G1PHF2_MASK                      equ 0004h
COG1PHF_G1PHF3_POSN                      equ 0003h
COG1PHF_G1PHF3_POSITION                  equ 0003h
COG1PHF_G1PHF3_SIZE                      equ 0001h
COG1PHF_G1PHF3_LENGTH                    equ 0001h
COG1PHF_G1PHF3_MASK                      equ 0008h
COG1PHF_G1PHF4_POSN                      equ 0004h
COG1PHF_G1PHF4_POSITION                  equ 0004h
COG1PHF_G1PHF4_SIZE                      equ 0001h
COG1PHF_G1PHF4_LENGTH                    equ 0001h
COG1PHF_G1PHF4_MASK                      equ 0010h
COG1PHF_G1PHF5_POSN                      equ 0005h
COG1PHF_G1PHF5_POSITION                  equ 0005h
COG1PHF_G1PHF5_SIZE                      equ 0001h
COG1PHF_G1PHF5_LENGTH                    equ 0001h
COG1PHF_G1PHF5_MASK                      equ 0020h

// Register: COG1BLKR
#define COG1BLKR COG1BLKR
COG1BLKR                                 equ 0693h
// bitfield definitions
COG1BLKR_G1BLKR_POSN                     equ 0000h
COG1BLKR_G1BLKR_POSITION                 equ 0000h
COG1BLKR_G1BLKR_SIZE                     equ 0006h
COG1BLKR_G1BLKR_LENGTH                   equ 0006h
COG1BLKR_G1BLKR_MASK                     equ 003Fh
COG1BLKR_G1BLKR0_POSN                    equ 0000h
COG1BLKR_G1BLKR0_POSITION                equ 0000h
COG1BLKR_G1BLKR0_SIZE                    equ 0001h
COG1BLKR_G1BLKR0_LENGTH                  equ 0001h
COG1BLKR_G1BLKR0_MASK                    equ 0001h
COG1BLKR_G1BLKR1_POSN                    equ 0001h
COG1BLKR_G1BLKR1_POSITION                equ 0001h
COG1BLKR_G1BLKR1_SIZE                    equ 0001h
COG1BLKR_G1BLKR1_LENGTH                  equ 0001h
COG1BLKR_G1BLKR1_MASK                    equ 0002h
COG1BLKR_G1BLKR2_POSN                    equ 0002h
COG1BLKR_G1BLKR2_POSITION                equ 0002h
COG1BLKR_G1BLKR2_SIZE                    equ 0001h
COG1BLKR_G1BLKR2_LENGTH                  equ 0001h
COG1BLKR_G1BLKR2_MASK                    equ 0004h
COG1BLKR_G1BLKR3_POSN                    equ 0003h
COG1BLKR_G1BLKR3_POSITION                equ 0003h
COG1BLKR_G1BLKR3_SIZE                    equ 0001h
COG1BLKR_G1BLKR3_LENGTH                  equ 0001h
COG1BLKR_G1BLKR3_MASK                    equ 0008h
COG1BLKR_G1BLKR4_POSN                    equ 0004h
COG1BLKR_G1BLKR4_POSITION                equ 0004h
COG1BLKR_G1BLKR4_SIZE                    equ 0001h
COG1BLKR_G1BLKR4_LENGTH                  equ 0001h
COG1BLKR_G1BLKR4_MASK                    equ 0010h
COG1BLKR_G1BLKR5_POSN                    equ 0005h
COG1BLKR_G1BLKR5_POSITION                equ 0005h
COG1BLKR_G1BLKR5_SIZE                    equ 0001h
COG1BLKR_G1BLKR5_LENGTH                  equ 0001h
COG1BLKR_G1BLKR5_MASK                    equ 0020h

// Register: COG1BLKF
#define COG1BLKF COG1BLKF
COG1BLKF                                 equ 0694h
// bitfield definitions
COG1BLKF_G1BLKF_POSN                     equ 0000h
COG1BLKF_G1BLKF_POSITION                 equ 0000h
COG1BLKF_G1BLKF_SIZE                     equ 0006h
COG1BLKF_G1BLKF_LENGTH                   equ 0006h
COG1BLKF_G1BLKF_MASK                     equ 003Fh
COG1BLKF_G1BLKF0_POSN                    equ 0000h
COG1BLKF_G1BLKF0_POSITION                equ 0000h
COG1BLKF_G1BLKF0_SIZE                    equ 0001h
COG1BLKF_G1BLKF0_LENGTH                  equ 0001h
COG1BLKF_G1BLKF0_MASK                    equ 0001h
COG1BLKF_G1BLKF1_POSN                    equ 0001h
COG1BLKF_G1BLKF1_POSITION                equ 0001h
COG1BLKF_G1BLKF1_SIZE                    equ 0001h
COG1BLKF_G1BLKF1_LENGTH                  equ 0001h
COG1BLKF_G1BLKF1_MASK                    equ 0002h
COG1BLKF_G1BLKF2_POSN                    equ 0002h
COG1BLKF_G1BLKF2_POSITION                equ 0002h
COG1BLKF_G1BLKF2_SIZE                    equ 0001h
COG1BLKF_G1BLKF2_LENGTH                  equ 0001h
COG1BLKF_G1BLKF2_MASK                    equ 0004h
COG1BLKF_G1BLKF3_POSN                    equ 0003h
COG1BLKF_G1BLKF3_POSITION                equ 0003h
COG1BLKF_G1BLKF3_SIZE                    equ 0001h
COG1BLKF_G1BLKF3_LENGTH                  equ 0001h
COG1BLKF_G1BLKF3_MASK                    equ 0008h
COG1BLKF_G1BLKF4_POSN                    equ 0004h
COG1BLKF_G1BLKF4_POSITION                equ 0004h
COG1BLKF_G1BLKF4_SIZE                    equ 0001h
COG1BLKF_G1BLKF4_LENGTH                  equ 0001h
COG1BLKF_G1BLKF4_MASK                    equ 0010h
COG1BLKF_G1BLKF5_POSN                    equ 0005h
COG1BLKF_G1BLKF5_POSITION                equ 0005h
COG1BLKF_G1BLKF5_SIZE                    equ 0001h
COG1BLKF_G1BLKF5_LENGTH                  equ 0001h
COG1BLKF_G1BLKF5_MASK                    equ 0020h

// Register: COG1DBR
#define COG1DBR COG1DBR
COG1DBR                                  equ 0695h
// bitfield definitions
COG1DBR_G1DBR_POSN                       equ 0000h
COG1DBR_G1DBR_POSITION                   equ 0000h
COG1DBR_G1DBR_SIZE                       equ 0006h
COG1DBR_G1DBR_LENGTH                     equ 0006h
COG1DBR_G1DBR_MASK                       equ 003Fh
COG1DBR_G1DBR0_POSN                      equ 0000h
COG1DBR_G1DBR0_POSITION                  equ 0000h
COG1DBR_G1DBR0_SIZE                      equ 0001h
COG1DBR_G1DBR0_LENGTH                    equ 0001h
COG1DBR_G1DBR0_MASK                      equ 0001h
COG1DBR_G1DBR1_POSN                      equ 0001h
COG1DBR_G1DBR1_POSITION                  equ 0001h
COG1DBR_G1DBR1_SIZE                      equ 0001h
COG1DBR_G1DBR1_LENGTH                    equ 0001h
COG1DBR_G1DBR1_MASK                      equ 0002h
COG1DBR_G1DBR2_POSN                      equ 0002h
COG1DBR_G1DBR2_POSITION                  equ 0002h
COG1DBR_G1DBR2_SIZE                      equ 0001h
COG1DBR_G1DBR2_LENGTH                    equ 0001h
COG1DBR_G1DBR2_MASK                      equ 0004h
COG1DBR_G1DBR3_POSN                      equ 0003h
COG1DBR_G1DBR3_POSITION                  equ 0003h
COG1DBR_G1DBR3_SIZE                      equ 0001h
COG1DBR_G1DBR3_LENGTH                    equ 0001h
COG1DBR_G1DBR3_MASK                      equ 0008h
COG1DBR_G1DBR4_POSN                      equ 0004h
COG1DBR_G1DBR4_POSITION                  equ 0004h
COG1DBR_G1DBR4_SIZE                      equ 0001h
COG1DBR_G1DBR4_LENGTH                    equ 0001h
COG1DBR_G1DBR4_MASK                      equ 0010h
COG1DBR_G1DBR5_POSN                      equ 0005h
COG1DBR_G1DBR5_POSITION                  equ 0005h
COG1DBR_G1DBR5_SIZE                      equ 0001h
COG1DBR_G1DBR5_LENGTH                    equ 0001h
COG1DBR_G1DBR5_MASK                      equ 0020h

// Register: COG1DBF
#define COG1DBF COG1DBF
COG1DBF                                  equ 0696h
// bitfield definitions
COG1DBF_G1DBF_POSN                       equ 0000h
COG1DBF_G1DBF_POSITION                   equ 0000h
COG1DBF_G1DBF_SIZE                       equ 0006h
COG1DBF_G1DBF_LENGTH                     equ 0006h
COG1DBF_G1DBF_MASK                       equ 003Fh
COG1DBF_G1DBF0_POSN                      equ 0000h
COG1DBF_G1DBF0_POSITION                  equ 0000h
COG1DBF_G1DBF0_SIZE                      equ 0001h
COG1DBF_G1DBF0_LENGTH                    equ 0001h
COG1DBF_G1DBF0_MASK                      equ 0001h
COG1DBF_G1DBF1_POSN                      equ 0001h
COG1DBF_G1DBF1_POSITION                  equ 0001h
COG1DBF_G1DBF1_SIZE                      equ 0001h
COG1DBF_G1DBF1_LENGTH                    equ 0001h
COG1DBF_G1DBF1_MASK                      equ 0002h
COG1DBF_G1DBF2_POSN                      equ 0002h
COG1DBF_G1DBF2_POSITION                  equ 0002h
COG1DBF_G1DBF2_SIZE                      equ 0001h
COG1DBF_G1DBF2_LENGTH                    equ 0001h
COG1DBF_G1DBF2_MASK                      equ 0004h
COG1DBF_G1DBF3_POSN                      equ 0003h
COG1DBF_G1DBF3_POSITION                  equ 0003h
COG1DBF_G1DBF3_SIZE                      equ 0001h
COG1DBF_G1DBF3_LENGTH                    equ 0001h
COG1DBF_G1DBF3_MASK                      equ 0008h
COG1DBF_G1DBF4_POSN                      equ 0004h
COG1DBF_G1DBF4_POSITION                  equ 0004h
COG1DBF_G1DBF4_SIZE                      equ 0001h
COG1DBF_G1DBF4_LENGTH                    equ 0001h
COG1DBF_G1DBF4_MASK                      equ 0010h
COG1DBF_G1DBF5_POSN                      equ 0005h
COG1DBF_G1DBF5_POSITION                  equ 0005h
COG1DBF_G1DBF5_SIZE                      equ 0001h
COG1DBF_G1DBF5_LENGTH                    equ 0001h
COG1DBF_G1DBF5_MASK                      equ 0020h

// Register: COG1CON0
#define COG1CON0 COG1CON0
COG1CON0                                 equ 0697h
// bitfield definitions
COG1CON0_G1MD_POSN                       equ 0000h
COG1CON0_G1MD_POSITION                   equ 0000h
COG1CON0_G1MD_SIZE                       equ 0003h
COG1CON0_G1MD_LENGTH                     equ 0003h
COG1CON0_G1MD_MASK                       equ 0007h
COG1CON0_G1CS_POSN                       equ 0003h
COG1CON0_G1CS_POSITION                   equ 0003h
COG1CON0_G1CS_SIZE                       equ 0002h
COG1CON0_G1CS_LENGTH                     equ 0002h
COG1CON0_G1CS_MASK                       equ 0018h
COG1CON0_G1LD_POSN                       equ 0006h
COG1CON0_G1LD_POSITION                   equ 0006h
COG1CON0_G1LD_SIZE                       equ 0001h
COG1CON0_G1LD_LENGTH                     equ 0001h
COG1CON0_G1LD_MASK                       equ 0040h
COG1CON0_G1EN_POSN                       equ 0007h
COG1CON0_G1EN_POSITION                   equ 0007h
COG1CON0_G1EN_SIZE                       equ 0001h
COG1CON0_G1EN_LENGTH                     equ 0001h
COG1CON0_G1EN_MASK                       equ 0080h
COG1CON0_G1MD0_POSN                      equ 0000h
COG1CON0_G1MD0_POSITION                  equ 0000h
COG1CON0_G1MD0_SIZE                      equ 0001h
COG1CON0_G1MD0_LENGTH                    equ 0001h
COG1CON0_G1MD0_MASK                      equ 0001h
COG1CON0_G1MD1_POSN                      equ 0001h
COG1CON0_G1MD1_POSITION                  equ 0001h
COG1CON0_G1MD1_SIZE                      equ 0001h
COG1CON0_G1MD1_LENGTH                    equ 0001h
COG1CON0_G1MD1_MASK                      equ 0002h
COG1CON0_G1MD2_POSN                      equ 0002h
COG1CON0_G1MD2_POSITION                  equ 0002h
COG1CON0_G1MD2_SIZE                      equ 0001h
COG1CON0_G1MD2_LENGTH                    equ 0001h
COG1CON0_G1MD2_MASK                      equ 0004h
COG1CON0_G1CS0_POSN                      equ 0003h
COG1CON0_G1CS0_POSITION                  equ 0003h
COG1CON0_G1CS0_SIZE                      equ 0001h
COG1CON0_G1CS0_LENGTH                    equ 0001h
COG1CON0_G1CS0_MASK                      equ 0008h
COG1CON0_G1CS1_POSN                      equ 0004h
COG1CON0_G1CS1_POSITION                  equ 0004h
COG1CON0_G1CS1_SIZE                      equ 0001h
COG1CON0_G1CS1_LENGTH                    equ 0001h
COG1CON0_G1CS1_MASK                      equ 0010h

// Register: COG1CON1
#define COG1CON1 COG1CON1
COG1CON1                                 equ 0698h
// bitfield definitions
COG1CON1_G1POLA_POSN                     equ 0000h
COG1CON1_G1POLA_POSITION                 equ 0000h
COG1CON1_G1POLA_SIZE                     equ 0001h
COG1CON1_G1POLA_LENGTH                   equ 0001h
COG1CON1_G1POLA_MASK                     equ 0001h
COG1CON1_G1POLB_POSN                     equ 0001h
COG1CON1_G1POLB_POSITION                 equ 0001h
COG1CON1_G1POLB_SIZE                     equ 0001h
COG1CON1_G1POLB_LENGTH                   equ 0001h
COG1CON1_G1POLB_MASK                     equ 0002h
COG1CON1_G1POLC_POSN                     equ 0002h
COG1CON1_G1POLC_POSITION                 equ 0002h
COG1CON1_G1POLC_SIZE                     equ 0001h
COG1CON1_G1POLC_LENGTH                   equ 0001h
COG1CON1_G1POLC_MASK                     equ 0004h
COG1CON1_G1POLD_POSN                     equ 0003h
COG1CON1_G1POLD_POSITION                 equ 0003h
COG1CON1_G1POLD_SIZE                     equ 0001h
COG1CON1_G1POLD_LENGTH                   equ 0001h
COG1CON1_G1POLD_MASK                     equ 0008h
COG1CON1_G1FDBS_POSN                     equ 0006h
COG1CON1_G1FDBS_POSITION                 equ 0006h
COG1CON1_G1FDBS_SIZE                     equ 0001h
COG1CON1_G1FDBS_LENGTH                   equ 0001h
COG1CON1_G1FDBS_MASK                     equ 0040h
COG1CON1_G1RDBS_POSN                     equ 0007h
COG1CON1_G1RDBS_POSITION                 equ 0007h
COG1CON1_G1RDBS_SIZE                     equ 0001h
COG1CON1_G1RDBS_LENGTH                   equ 0001h
COG1CON1_G1RDBS_MASK                     equ 0080h

// Register: COG1RIS
#define COG1RIS COG1RIS
COG1RIS                                  equ 0699h
// bitfield definitions
COG1RIS_G1RIS0_POSN                      equ 0000h
COG1RIS_G1RIS0_POSITION                  equ 0000h
COG1RIS_G1RIS0_SIZE                      equ 0001h
COG1RIS_G1RIS0_LENGTH                    equ 0001h
COG1RIS_G1RIS0_MASK                      equ 0001h
COG1RIS_G1RIS1_POSN                      equ 0001h
COG1RIS_G1RIS1_POSITION                  equ 0001h
COG1RIS_G1RIS1_SIZE                      equ 0001h
COG1RIS_G1RIS1_LENGTH                    equ 0001h
COG1RIS_G1RIS1_MASK                      equ 0002h
COG1RIS_G1RIS2_POSN                      equ 0002h
COG1RIS_G1RIS2_POSITION                  equ 0002h
COG1RIS_G1RIS2_SIZE                      equ 0001h
COG1RIS_G1RIS2_LENGTH                    equ 0001h
COG1RIS_G1RIS2_MASK                      equ 0004h
COG1RIS_G1RIS3_POSN                      equ 0003h
COG1RIS_G1RIS3_POSITION                  equ 0003h
COG1RIS_G1RIS3_SIZE                      equ 0001h
COG1RIS_G1RIS3_LENGTH                    equ 0001h
COG1RIS_G1RIS3_MASK                      equ 0008h
COG1RIS_G1RIS4_POSN                      equ 0004h
COG1RIS_G1RIS4_POSITION                  equ 0004h
COG1RIS_G1RIS4_SIZE                      equ 0001h
COG1RIS_G1RIS4_LENGTH                    equ 0001h
COG1RIS_G1RIS4_MASK                      equ 0010h
COG1RIS_G1RIS5_POSN                      equ 0005h
COG1RIS_G1RIS5_POSITION                  equ 0005h
COG1RIS_G1RIS5_SIZE                      equ 0001h
COG1RIS_G1RIS5_LENGTH                    equ 0001h
COG1RIS_G1RIS5_MASK                      equ 0020h
COG1RIS_G1RIS6_POSN                      equ 0006h
COG1RIS_G1RIS6_POSITION                  equ 0006h
COG1RIS_G1RIS6_SIZE                      equ 0001h
COG1RIS_G1RIS6_LENGTH                    equ 0001h
COG1RIS_G1RIS6_MASK                      equ 0040h
COG1RIS_G1RIS7_POSN                      equ 0007h
COG1RIS_G1RIS7_POSITION                  equ 0007h
COG1RIS_G1RIS7_SIZE                      equ 0001h
COG1RIS_G1RIS7_LENGTH                    equ 0001h
COG1RIS_G1RIS7_MASK                      equ 0080h

// Register: COG1RSIM
#define COG1RSIM COG1RSIM
COG1RSIM                                 equ 069Ah
// bitfield definitions
COG1RSIM_G1RSIM0_POSN                    equ 0000h
COG1RSIM_G1RSIM0_POSITION                equ 0000h
COG1RSIM_G1RSIM0_SIZE                    equ 0001h
COG1RSIM_G1RSIM0_LENGTH                  equ 0001h
COG1RSIM_G1RSIM0_MASK                    equ 0001h
COG1RSIM_G1RSIM1_POSN                    equ 0001h
COG1RSIM_G1RSIM1_POSITION                equ 0001h
COG1RSIM_G1RSIM1_SIZE                    equ 0001h
COG1RSIM_G1RSIM1_LENGTH                  equ 0001h
COG1RSIM_G1RSIM1_MASK                    equ 0002h
COG1RSIM_G1RSIM2_POSN                    equ 0002h
COG1RSIM_G1RSIM2_POSITION                equ 0002h
COG1RSIM_G1RSIM2_SIZE                    equ 0001h
COG1RSIM_G1RSIM2_LENGTH                  equ 0001h
COG1RSIM_G1RSIM2_MASK                    equ 0004h
COG1RSIM_G1RSIM3_POSN                    equ 0003h
COG1RSIM_G1RSIM3_POSITION                equ 0003h
COG1RSIM_G1RSIM3_SIZE                    equ 0001h
COG1RSIM_G1RSIM3_LENGTH                  equ 0001h
COG1RSIM_G1RSIM3_MASK                    equ 0008h
COG1RSIM_G1RSIM4_POSN                    equ 0004h
COG1RSIM_G1RSIM4_POSITION                equ 0004h
COG1RSIM_G1RSIM4_SIZE                    equ 0001h
COG1RSIM_G1RSIM4_LENGTH                  equ 0001h
COG1RSIM_G1RSIM4_MASK                    equ 0010h
COG1RSIM_G1RSIM5_POSN                    equ 0005h
COG1RSIM_G1RSIM5_POSITION                equ 0005h
COG1RSIM_G1RSIM5_SIZE                    equ 0001h
COG1RSIM_G1RSIM5_LENGTH                  equ 0001h
COG1RSIM_G1RSIM5_MASK                    equ 0020h
COG1RSIM_G1RSIM6_POSN                    equ 0006h
COG1RSIM_G1RSIM6_POSITION                equ 0006h
COG1RSIM_G1RSIM6_SIZE                    equ 0001h
COG1RSIM_G1RSIM6_LENGTH                  equ 0001h
COG1RSIM_G1RSIM6_MASK                    equ 0040h
COG1RSIM_G1RSIM7_POSN                    equ 0007h
COG1RSIM_G1RSIM7_POSITION                equ 0007h
COG1RSIM_G1RSIM7_SIZE                    equ 0001h
COG1RSIM_G1RSIM7_LENGTH                  equ 0001h
COG1RSIM_G1RSIM7_MASK                    equ 0080h

// Register: COG1FIS
#define COG1FIS COG1FIS
COG1FIS                                  equ 069Bh
// bitfield definitions
COG1FIS_G1FIS0_POSN                      equ 0000h
COG1FIS_G1FIS0_POSITION                  equ 0000h
COG1FIS_G1FIS0_SIZE                      equ 0001h
COG1FIS_G1FIS0_LENGTH                    equ 0001h
COG1FIS_G1FIS0_MASK                      equ 0001h
COG1FIS_G1FIS1_POSN                      equ 0001h
COG1FIS_G1FIS1_POSITION                  equ 0001h
COG1FIS_G1FIS1_SIZE                      equ 0001h
COG1FIS_G1FIS1_LENGTH                    equ 0001h
COG1FIS_G1FIS1_MASK                      equ 0002h
COG1FIS_G1FIS2_POSN                      equ 0002h
COG1FIS_G1FIS2_POSITION                  equ 0002h
COG1FIS_G1FIS2_SIZE                      equ 0001h
COG1FIS_G1FIS2_LENGTH                    equ 0001h
COG1FIS_G1FIS2_MASK                      equ 0004h
COG1FIS_G1FIS3_POSN                      equ 0003h
COG1FIS_G1FIS3_POSITION                  equ 0003h
COG1FIS_G1FIS3_SIZE                      equ 0001h
COG1FIS_G1FIS3_LENGTH                    equ 0001h
COG1FIS_G1FIS3_MASK                      equ 0008h
COG1FIS_G1FIS4_POSN                      equ 0004h
COG1FIS_G1FIS4_POSITION                  equ 0004h
COG1FIS_G1FIS4_SIZE                      equ 0001h
COG1FIS_G1FIS4_LENGTH                    equ 0001h
COG1FIS_G1FIS4_MASK                      equ 0010h
COG1FIS_G1FIS5_POSN                      equ 0005h
COG1FIS_G1FIS5_POSITION                  equ 0005h
COG1FIS_G1FIS5_SIZE                      equ 0001h
COG1FIS_G1FIS5_LENGTH                    equ 0001h
COG1FIS_G1FIS5_MASK                      equ 0020h
COG1FIS_G1FIS6_POSN                      equ 0006h
COG1FIS_G1FIS6_POSITION                  equ 0006h
COG1FIS_G1FIS6_SIZE                      equ 0001h
COG1FIS_G1FIS6_LENGTH                    equ 0001h
COG1FIS_G1FIS6_MASK                      equ 0040h
COG1FIS_G1FIS7_POSN                      equ 0007h
COG1FIS_G1FIS7_POSITION                  equ 0007h
COG1FIS_G1FIS7_SIZE                      equ 0001h
COG1FIS_G1FIS7_LENGTH                    equ 0001h
COG1FIS_G1FIS7_MASK                      equ 0080h

// Register: COG1FSIM
#define COG1FSIM COG1FSIM
COG1FSIM                                 equ 069Ch
// bitfield definitions
COG1FSIM_G1FSIM0_POSN                    equ 0000h
COG1FSIM_G1FSIM0_POSITION                equ 0000h
COG1FSIM_G1FSIM0_SIZE                    equ 0001h
COG1FSIM_G1FSIM0_LENGTH                  equ 0001h
COG1FSIM_G1FSIM0_MASK                    equ 0001h
COG1FSIM_G1FSIM1_POSN                    equ 0001h
COG1FSIM_G1FSIM1_POSITION                equ 0001h
COG1FSIM_G1FSIM1_SIZE                    equ 0001h
COG1FSIM_G1FSIM1_LENGTH                  equ 0001h
COG1FSIM_G1FSIM1_MASK                    equ 0002h
COG1FSIM_G1FSIM2_POSN                    equ 0002h
COG1FSIM_G1FSIM2_POSITION                equ 0002h
COG1FSIM_G1FSIM2_SIZE                    equ 0001h
COG1FSIM_G1FSIM2_LENGTH                  equ 0001h
COG1FSIM_G1FSIM2_MASK                    equ 0004h
COG1FSIM_G1FSIM3_POSN                    equ 0003h
COG1FSIM_G1FSIM3_POSITION                equ 0003h
COG1FSIM_G1FSIM3_SIZE                    equ 0001h
COG1FSIM_G1FSIM3_LENGTH                  equ 0001h
COG1FSIM_G1FSIM3_MASK                    equ 0008h
COG1FSIM_G1FSIM4_POSN                    equ 0004h
COG1FSIM_G1FSIM4_POSITION                equ 0004h
COG1FSIM_G1FSIM4_SIZE                    equ 0001h
COG1FSIM_G1FSIM4_LENGTH                  equ 0001h
COG1FSIM_G1FSIM4_MASK                    equ 0010h
COG1FSIM_G1FSIM5_POSN                    equ 0005h
COG1FSIM_G1FSIM5_POSITION                equ 0005h
COG1FSIM_G1FSIM5_SIZE                    equ 0001h
COG1FSIM_G1FSIM5_LENGTH                  equ 0001h
COG1FSIM_G1FSIM5_MASK                    equ 0020h
COG1FSIM_G1FSIM6_POSN                    equ 0006h
COG1FSIM_G1FSIM6_POSITION                equ 0006h
COG1FSIM_G1FSIM6_SIZE                    equ 0001h
COG1FSIM_G1FSIM6_LENGTH                  equ 0001h
COG1FSIM_G1FSIM6_MASK                    equ 0040h
COG1FSIM_G1FSIM7_POSN                    equ 0007h
COG1FSIM_G1FSIM7_POSITION                equ 0007h
COG1FSIM_G1FSIM7_SIZE                    equ 0001h
COG1FSIM_G1FSIM7_LENGTH                  equ 0001h
COG1FSIM_G1FSIM7_MASK                    equ 0080h

// Register: COG1ASD0
#define COG1ASD0 COG1ASD0
COG1ASD0                                 equ 069Dh
// bitfield definitions
COG1ASD0_G1ASDAC_POSN                    equ 0002h
COG1ASD0_G1ASDAC_POSITION                equ 0002h
COG1ASD0_G1ASDAC_SIZE                    equ 0002h
COG1ASD0_G1ASDAC_LENGTH                  equ 0002h
COG1ASD0_G1ASDAC_MASK                    equ 000Ch
COG1ASD0_G1ASDBD_POSN                    equ 0004h
COG1ASD0_G1ASDBD_POSITION                equ 0004h
COG1ASD0_G1ASDBD_SIZE                    equ 0002h
COG1ASD0_G1ASDBD_LENGTH                  equ 0002h
COG1ASD0_G1ASDBD_MASK                    equ 0030h
COG1ASD0_G1ARSEN_POSN                    equ 0006h
COG1ASD0_G1ARSEN_POSITION                equ 0006h
COG1ASD0_G1ARSEN_SIZE                    equ 0001h
COG1ASD0_G1ARSEN_LENGTH                  equ 0001h
COG1ASD0_G1ARSEN_MASK                    equ 0040h
COG1ASD0_G1ASE_POSN                      equ 0007h
COG1ASD0_G1ASE_POSITION                  equ 0007h
COG1ASD0_G1ASE_SIZE                      equ 0001h
COG1ASD0_G1ASE_LENGTH                    equ 0001h
COG1ASD0_G1ASE_MASK                      equ 0080h
COG1ASD0_G1ASDAC0_POSN                   equ 0002h
COG1ASD0_G1ASDAC0_POSITION               equ 0002h
COG1ASD0_G1ASDAC0_SIZE                   equ 0001h
COG1ASD0_G1ASDAC0_LENGTH                 equ 0001h
COG1ASD0_G1ASDAC0_MASK                   equ 0004h
COG1ASD0_G1ASDAC1_POSN                   equ 0003h
COG1ASD0_G1ASDAC1_POSITION               equ 0003h
COG1ASD0_G1ASDAC1_SIZE                   equ 0001h
COG1ASD0_G1ASDAC1_LENGTH                 equ 0001h
COG1ASD0_G1ASDAC1_MASK                   equ 0008h
COG1ASD0_G1ASDBD0_POSN                   equ 0004h
COG1ASD0_G1ASDBD0_POSITION               equ 0004h
COG1ASD0_G1ASDBD0_SIZE                   equ 0001h
COG1ASD0_G1ASDBD0_LENGTH                 equ 0001h
COG1ASD0_G1ASDBD0_MASK                   equ 0010h
COG1ASD0_G1ASDBD1_POSN                   equ 0005h
COG1ASD0_G1ASDBD1_POSITION               equ 0005h
COG1ASD0_G1ASDBD1_SIZE                   equ 0001h
COG1ASD0_G1ASDBD1_LENGTH                 equ 0001h
COG1ASD0_G1ASDBD1_MASK                   equ 0020h

// Register: COG1ASD1
#define COG1ASD1 COG1ASD1
COG1ASD1                                 equ 069Eh
// bitfield definitions
COG1ASD1_G1AS0E_POSN                     equ 0000h
COG1ASD1_G1AS0E_POSITION                 equ 0000h
COG1ASD1_G1AS0E_SIZE                     equ 0001h
COG1ASD1_G1AS0E_LENGTH                   equ 0001h
COG1ASD1_G1AS0E_MASK                     equ 0001h
COG1ASD1_G1AS1E_POSN                     equ 0001h
COG1ASD1_G1AS1E_POSITION                 equ 0001h
COG1ASD1_G1AS1E_SIZE                     equ 0001h
COG1ASD1_G1AS1E_LENGTH                   equ 0001h
COG1ASD1_G1AS1E_MASK                     equ 0002h
COG1ASD1_G1AS2E_POSN                     equ 0002h
COG1ASD1_G1AS2E_POSITION                 equ 0002h
COG1ASD1_G1AS2E_SIZE                     equ 0001h
COG1ASD1_G1AS2E_LENGTH                   equ 0001h
COG1ASD1_G1AS2E_MASK                     equ 0004h
COG1ASD1_G1AS3E_POSN                     equ 0003h
COG1ASD1_G1AS3E_POSITION                 equ 0003h
COG1ASD1_G1AS3E_SIZE                     equ 0001h
COG1ASD1_G1AS3E_LENGTH                   equ 0001h
COG1ASD1_G1AS3E_MASK                     equ 0008h

// Register: COG1STR
#define COG1STR COG1STR
COG1STR                                  equ 069Fh
// bitfield definitions
COG1STR_G1STRA_POSN                      equ 0000h
COG1STR_G1STRA_POSITION                  equ 0000h
COG1STR_G1STRA_SIZE                      equ 0001h
COG1STR_G1STRA_LENGTH                    equ 0001h
COG1STR_G1STRA_MASK                      equ 0001h
COG1STR_G1STRB_POSN                      equ 0001h
COG1STR_G1STRB_POSITION                  equ 0001h
COG1STR_G1STRB_SIZE                      equ 0001h
COG1STR_G1STRB_LENGTH                    equ 0001h
COG1STR_G1STRB_MASK                      equ 0002h
COG1STR_G1STRC_POSN                      equ 0002h
COG1STR_G1STRC_POSITION                  equ 0002h
COG1STR_G1STRC_SIZE                      equ 0001h
COG1STR_G1STRC_LENGTH                    equ 0001h
COG1STR_G1STRC_MASK                      equ 0004h
COG1STR_G1STRD_POSN                      equ 0003h
COG1STR_G1STRD_POSITION                  equ 0003h
COG1STR_G1STRD_SIZE                      equ 0001h
COG1STR_G1STRD_LENGTH                    equ 0001h
COG1STR_G1STRD_MASK                      equ 0008h
COG1STR_G1SDATA_POSN                     equ 0004h
COG1STR_G1SDATA_POSITION                 equ 0004h
COG1STR_G1SDATA_SIZE                     equ 0001h
COG1STR_G1SDATA_LENGTH                   equ 0001h
COG1STR_G1SDATA_MASK                     equ 0010h
COG1STR_G1SDATB_POSN                     equ 0005h
COG1STR_G1SDATB_POSITION                 equ 0005h
COG1STR_G1SDATB_SIZE                     equ 0001h
COG1STR_G1SDATB_LENGTH                   equ 0001h
COG1STR_G1SDATB_MASK                     equ 0020h
COG1STR_G1SDATC_POSN                     equ 0006h
COG1STR_G1SDATC_POSITION                 equ 0006h
COG1STR_G1SDATC_SIZE                     equ 0001h
COG1STR_G1SDATC_LENGTH                   equ 0001h
COG1STR_G1SDATC_MASK                     equ 0040h
COG1STR_G1SDATD_POSN                     equ 0007h
COG1STR_G1SDATD_POSITION                 equ 0007h
COG1STR_G1SDATD_SIZE                     equ 0001h
COG1STR_G1SDATD_LENGTH                   equ 0001h
COG1STR_G1SDATD_MASK                     equ 0080h

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

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
T0CKIPPS                                 equ 0E11h
// bitfield definitions
T0CKIPPS_T0CKIPPS_POSN                   equ 0000h
T0CKIPPS_T0CKIPPS_POSITION               equ 0000h
T0CKIPPS_T0CKIPPS_SIZE                   equ 0005h
T0CKIPPS_T0CKIPPS_LENGTH                 equ 0005h
T0CKIPPS_T0CKIPPS_MASK                   equ 001Fh

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
T1CKIPPS                                 equ 0E12h
// bitfield definitions
T1CKIPPS_T1CKIPPS_POSN                   equ 0000h
T1CKIPPS_T1CKIPPS_POSITION               equ 0000h
T1CKIPPS_T1CKIPPS_SIZE                   equ 0005h
T1CKIPPS_T1CKIPPS_LENGTH                 equ 0005h
T1CKIPPS_T1CKIPPS_MASK                   equ 001Fh

// Register: T1GPPS
#define T1GPPS T1GPPS
T1GPPS                                   equ 0E13h
// bitfield definitions
T1GPPS_T1GPPS_POSN                       equ 0000h
T1GPPS_T1GPPS_POSITION                   equ 0000h
T1GPPS_T1GPPS_SIZE                       equ 0005h
T1GPPS_T1GPPS_LENGTH                     equ 0005h
T1GPPS_T1GPPS_MASK                       equ 001Fh

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
CCP1PPS                                  equ 0E14h
// bitfield definitions
CCP1PPS_CCP1PPS_POSN                     equ 0000h
CCP1PPS_CCP1PPS_POSITION                 equ 0000h
CCP1PPS_CCP1PPS_SIZE                     equ 0005h
CCP1PPS_CCP1PPS_LENGTH                   equ 0005h
CCP1PPS_CCP1PPS_MASK                     equ 001Fh

// Register: CCP2PPS
#define CCP2PPS CCP2PPS
CCP2PPS                                  equ 0E15h
// bitfield definitions
CCP2PPS_CCP2PPS_POSN                     equ 0000h
CCP2PPS_CCP2PPS_POSITION                 equ 0000h
CCP2PPS_CCP2PPS_SIZE                     equ 0005h
CCP2PPS_CCP2PPS_LENGTH                   equ 0005h
CCP2PPS_CCP2PPS_MASK                     equ 001Fh

// Register: COGINPPS
#define COGINPPS COGINPPS
COGINPPS                                 equ 0E17h
// bitfield definitions
COGINPPS_COGINPPS_POSN                   equ 0000h
COGINPPS_COGINPPS_POSITION               equ 0000h
COGINPPS_COGINPPS_SIZE                   equ 0005h
COGINPPS_COGINPPS_LENGTH                 equ 0005h
COGINPPS_COGINPPS_MASK                   equ 001Fh

// Register: SSPCLKPPS
#define SSPCLKPPS SSPCLKPPS
SSPCLKPPS                                equ 0E20h
// bitfield definitions
SSPCLKPPS_SSPCLKPPS_POSN                 equ 0000h
SSPCLKPPS_SSPCLKPPS_POSITION             equ 0000h
SSPCLKPPS_SSPCLKPPS_SIZE                 equ 0005h
SSPCLKPPS_SSPCLKPPS_LENGTH               equ 0005h
SSPCLKPPS_SSPCLKPPS_MASK                 equ 001Fh

// Register: SSPDATPPS
#define SSPDATPPS SSPDATPPS
SSPDATPPS                                equ 0E21h
// bitfield definitions
SSPDATPPS_SSPDATPPS_POSN                 equ 0000h
SSPDATPPS_SSPDATPPS_POSITION             equ 0000h
SSPDATPPS_SSPDATPPS_SIZE                 equ 0005h
SSPDATPPS_SSPDATPPS_LENGTH               equ 0005h
SSPDATPPS_SSPDATPPS_MASK                 equ 001Fh

// Register: SSPSSPPS
#define SSPSSPPS SSPSSPPS
SSPSSPPS                                 equ 0E22h
// bitfield definitions
SSPSSPPS_SSPSSPPS_POSN                   equ 0000h
SSPSSPPS_SSPSSPPS_POSITION               equ 0000h
SSPSSPPS_SSPSSPPS_SIZE                   equ 0005h
SSPSSPPS_SSPSSPPS_LENGTH                 equ 0005h
SSPSSPPS_SSPSSPPS_MASK                   equ 001Fh

// Register: RXPPS
#define RXPPS RXPPS
RXPPS                                    equ 0E24h
// bitfield definitions
RXPPS_RXPPS_POSN                         equ 0000h
RXPPS_RXPPS_POSITION                     equ 0000h
RXPPS_RXPPS_SIZE                         equ 0005h
RXPPS_RXPPS_LENGTH                       equ 0005h
RXPPS_RXPPS_MASK                         equ 001Fh

// Register: CKPPS
#define CKPPS CKPPS
CKPPS                                    equ 0E25h
// bitfield definitions
CKPPS_CKPPS_POSN                         equ 0000h
CKPPS_CKPPS_POSITION                     equ 0000h
CKPPS_CKPPS_SIZE                         equ 0005h
CKPPS_CKPPS_LENGTH                       equ 0005h
CKPPS_CKPPS_MASK                         equ 001Fh

// Register: CLCIN0PPS
#define CLCIN0PPS CLCIN0PPS
CLCIN0PPS                                equ 0E28h
// bitfield definitions
CLCIN0PPS_CLCIN0PPS_POSN                 equ 0000h
CLCIN0PPS_CLCIN0PPS_POSITION             equ 0000h
CLCIN0PPS_CLCIN0PPS_SIZE                 equ 0005h
CLCIN0PPS_CLCIN0PPS_LENGTH               equ 0005h
CLCIN0PPS_CLCIN0PPS_MASK                 equ 001Fh

// Register: CLCIN1PPS
#define CLCIN1PPS CLCIN1PPS
CLCIN1PPS                                equ 0E29h
// bitfield definitions
CLCIN1PPS_CLCIN1PPS_POSN                 equ 0000h
CLCIN1PPS_CLCIN1PPS_POSITION             equ 0000h
CLCIN1PPS_CLCIN1PPS_SIZE                 equ 0005h
CLCIN1PPS_CLCIN1PPS_LENGTH               equ 0005h
CLCIN1PPS_CLCIN1PPS_MASK                 equ 001Fh

// Register: CLCIN2PPS
#define CLCIN2PPS CLCIN2PPS
CLCIN2PPS                                equ 0E2Ah
// bitfield definitions
CLCIN2PPS_CLCIN2PPS_POSN                 equ 0000h
CLCIN2PPS_CLCIN2PPS_POSITION             equ 0000h
CLCIN2PPS_CLCIN2PPS_SIZE                 equ 0005h
CLCIN2PPS_CLCIN2PPS_LENGTH               equ 0005h
CLCIN2PPS_CLCIN2PPS_MASK                 equ 001Fh

// Register: CLCIN3PPS
#define CLCIN3PPS CLCIN3PPS
CLCIN3PPS                                equ 0E2Bh
// bitfield definitions
CLCIN3PPS_CLCIN3PPS_POSN                 equ 0000h
CLCIN3PPS_CLCIN3PPS_POSITION             equ 0000h
CLCIN3PPS_CLCIN3PPS_SIZE                 equ 0005h
CLCIN3PPS_CLCIN3PPS_LENGTH               equ 0005h
CLCIN3PPS_CLCIN3PPS_MASK                 equ 001Fh

// Register: RA0PPS
#define RA0PPS RA0PPS
RA0PPS                                   equ 0E90h
// bitfield definitions
RA0PPS_RA0PPS_POSN                       equ 0000h
RA0PPS_RA0PPS_POSITION                   equ 0000h
RA0PPS_RA0PPS_SIZE                       equ 0005h
RA0PPS_RA0PPS_LENGTH                     equ 0005h
RA0PPS_RA0PPS_MASK                       equ 001Fh

// Register: RA1PPS
#define RA1PPS RA1PPS
RA1PPS                                   equ 0E91h
// bitfield definitions
RA1PPS_RA1PPS_POSN                       equ 0000h
RA1PPS_RA1PPS_POSITION                   equ 0000h
RA1PPS_RA1PPS_SIZE                       equ 0005h
RA1PPS_RA1PPS_LENGTH                     equ 0005h
RA1PPS_RA1PPS_MASK                       equ 001Fh

// Register: RA2PPS
#define RA2PPS RA2PPS
RA2PPS                                   equ 0E92h
// bitfield definitions
RA2PPS_RA2PPS_POSN                       equ 0000h
RA2PPS_RA2PPS_POSITION                   equ 0000h
RA2PPS_RA2PPS_SIZE                       equ 0005h
RA2PPS_RA2PPS_LENGTH                     equ 0005h
RA2PPS_RA2PPS_MASK                       equ 001Fh

// Register: RA3PPS
#define RA3PPS RA3PPS
RA3PPS                                   equ 0E93h
// bitfield definitions
RA3PPS_RA3PPS_POSN                       equ 0000h
RA3PPS_RA3PPS_POSITION                   equ 0000h
RA3PPS_RA3PPS_SIZE                       equ 0005h
RA3PPS_RA3PPS_LENGTH                     equ 0005h
RA3PPS_RA3PPS_MASK                       equ 001Fh

// Register: RA4PPS
#define RA4PPS RA4PPS
RA4PPS                                   equ 0E94h
// bitfield definitions
RA4PPS_RA4PPS_POSN                       equ 0000h
RA4PPS_RA4PPS_POSITION                   equ 0000h
RA4PPS_RA4PPS_SIZE                       equ 0005h
RA4PPS_RA4PPS_LENGTH                     equ 0005h
RA4PPS_RA4PPS_MASK                       equ 001Fh

// Register: RA5PPS
#define RA5PPS RA5PPS
RA5PPS                                   equ 0E95h
// bitfield definitions
RA5PPS_RA5PPS_POSN                       equ 0000h
RA5PPS_RA5PPS_POSITION                   equ 0000h
RA5PPS_RA5PPS_SIZE                       equ 0005h
RA5PPS_RA5PPS_LENGTH                     equ 0005h
RA5PPS_RA5PPS_MASK                       equ 001Fh

// Register: RA6PPS
#define RA6PPS RA6PPS
RA6PPS                                   equ 0E96h
// bitfield definitions
RA6PPS_RA6PPS_POSN                       equ 0000h
RA6PPS_RA6PPS_POSITION                   equ 0000h
RA6PPS_RA6PPS_SIZE                       equ 0005h
RA6PPS_RA6PPS_LENGTH                     equ 0005h
RA6PPS_RA6PPS_MASK                       equ 001Fh

// Register: RA7PPS
#define RA7PPS RA7PPS
RA7PPS                                   equ 0E97h
// bitfield definitions
RA7PPS_RA7PPS_POSN                       equ 0000h
RA7PPS_RA7PPS_POSITION                   equ 0000h
RA7PPS_RA7PPS_SIZE                       equ 0005h
RA7PPS_RA7PPS_LENGTH                     equ 0005h
RA7PPS_RA7PPS_MASK                       equ 001Fh

// Register: RB0PPS
#define RB0PPS RB0PPS
RB0PPS                                   equ 0E98h
// bitfield definitions
RB0PPS_RB0PPS_POSN                       equ 0000h
RB0PPS_RB0PPS_POSITION                   equ 0000h
RB0PPS_RB0PPS_SIZE                       equ 0005h
RB0PPS_RB0PPS_LENGTH                     equ 0005h
RB0PPS_RB0PPS_MASK                       equ 001Fh

// Register: RB1PPS
#define RB1PPS RB1PPS
RB1PPS                                   equ 0E99h
// bitfield definitions
RB1PPS_RB1PPS_POSN                       equ 0000h
RB1PPS_RB1PPS_POSITION                   equ 0000h
RB1PPS_RB1PPS_SIZE                       equ 0005h
RB1PPS_RB1PPS_LENGTH                     equ 0005h
RB1PPS_RB1PPS_MASK                       equ 001Fh

// Register: RB2PPS
#define RB2PPS RB2PPS
RB2PPS                                   equ 0E9Ah
// bitfield definitions
RB2PPS_RB2PPS_POSN                       equ 0000h
RB2PPS_RB2PPS_POSITION                   equ 0000h
RB2PPS_RB2PPS_SIZE                       equ 0005h
RB2PPS_RB2PPS_LENGTH                     equ 0005h
RB2PPS_RB2PPS_MASK                       equ 001Fh

// Register: RB3PPS
#define RB3PPS RB3PPS
RB3PPS                                   equ 0E9Bh
// bitfield definitions
RB3PPS_RB3PPS_POSN                       equ 0000h
RB3PPS_RB3PPS_POSITION                   equ 0000h
RB3PPS_RB3PPS_SIZE                       equ 0005h
RB3PPS_RB3PPS_LENGTH                     equ 0005h
RB3PPS_RB3PPS_MASK                       equ 001Fh

// Register: RB4PPS
#define RB4PPS RB4PPS
RB4PPS                                   equ 0E9Ch
// bitfield definitions
RB4PPS_RB4PPS_POSN                       equ 0000h
RB4PPS_RB4PPS_POSITION                   equ 0000h
RB4PPS_RB4PPS_SIZE                       equ 0005h
RB4PPS_RB4PPS_LENGTH                     equ 0005h
RB4PPS_RB4PPS_MASK                       equ 001Fh

// Register: RB5PPS
#define RB5PPS RB5PPS
RB5PPS                                   equ 0E9Dh
// bitfield definitions
RB5PPS_RB5PPS_POSN                       equ 0000h
RB5PPS_RB5PPS_POSITION                   equ 0000h
RB5PPS_RB5PPS_SIZE                       equ 0005h
RB5PPS_RB5PPS_LENGTH                     equ 0005h
RB5PPS_RB5PPS_MASK                       equ 001Fh

// Register: RB6PPS
#define RB6PPS RB6PPS
RB6PPS                                   equ 0E9Eh
// bitfield definitions
RB6PPS_RB6PPS_POSN                       equ 0000h
RB6PPS_RB6PPS_POSITION                   equ 0000h
RB6PPS_RB6PPS_SIZE                       equ 0005h
RB6PPS_RB6PPS_LENGTH                     equ 0005h
RB6PPS_RB6PPS_MASK                       equ 001Fh

// Register: RB7PPS
#define RB7PPS RB7PPS
RB7PPS                                   equ 0E9Fh
// bitfield definitions
RB7PPS_RB7PPS_POSN                       equ 0000h
RB7PPS_RB7PPS_POSITION                   equ 0000h
RB7PPS_RB7PPS_SIZE                       equ 0005h
RB7PPS_RB7PPS_LENGTH                     equ 0005h
RB7PPS_RB7PPS_MASK                       equ 001Fh

// Register: RC0PPS
#define RC0PPS RC0PPS
RC0PPS                                   equ 0EA0h
// bitfield definitions
RC0PPS_RC0PPS_POSN                       equ 0000h
RC0PPS_RC0PPS_POSITION                   equ 0000h
RC0PPS_RC0PPS_SIZE                       equ 0005h
RC0PPS_RC0PPS_LENGTH                     equ 0005h
RC0PPS_RC0PPS_MASK                       equ 001Fh

// Register: RC1PPS
#define RC1PPS RC1PPS
RC1PPS                                   equ 0EA1h
// bitfield definitions
RC1PPS_RC1PPS_POSN                       equ 0000h
RC1PPS_RC1PPS_POSITION                   equ 0000h
RC1PPS_RC1PPS_SIZE                       equ 0005h
RC1PPS_RC1PPS_LENGTH                     equ 0005h
RC1PPS_RC1PPS_MASK                       equ 001Fh

// Register: RC2PPS
#define RC2PPS RC2PPS
RC2PPS                                   equ 0EA2h
// bitfield definitions
RC2PPS_RC2PPS_POSN                       equ 0000h
RC2PPS_RC2PPS_POSITION                   equ 0000h
RC2PPS_RC2PPS_SIZE                       equ 0005h
RC2PPS_RC2PPS_LENGTH                     equ 0005h
RC2PPS_RC2PPS_MASK                       equ 001Fh

// Register: RC3PPS
#define RC3PPS RC3PPS
RC3PPS                                   equ 0EA3h
// bitfield definitions
RC3PPS_RC3PPS_POSN                       equ 0000h
RC3PPS_RC3PPS_POSITION                   equ 0000h
RC3PPS_RC3PPS_SIZE                       equ 0005h
RC3PPS_RC3PPS_LENGTH                     equ 0005h
RC3PPS_RC3PPS_MASK                       equ 001Fh

// Register: RC4PPS
#define RC4PPS RC4PPS
RC4PPS                                   equ 0EA4h
// bitfield definitions
RC4PPS_RC4PPS_POSN                       equ 0000h
RC4PPS_RC4PPS_POSITION                   equ 0000h
RC4PPS_RC4PPS_SIZE                       equ 0005h
RC4PPS_RC4PPS_LENGTH                     equ 0005h
RC4PPS_RC4PPS_MASK                       equ 001Fh

// Register: RC5PPS
#define RC5PPS RC5PPS
RC5PPS                                   equ 0EA5h
// bitfield definitions
RC5PPS_RC5PPS_POSN                       equ 0000h
RC5PPS_RC5PPS_POSITION                   equ 0000h
RC5PPS_RC5PPS_SIZE                       equ 0005h
RC5PPS_RC5PPS_LENGTH                     equ 0005h
RC5PPS_RC5PPS_MASK                       equ 001Fh

// Register: RC6PPS
#define RC6PPS RC6PPS
RC6PPS                                   equ 0EA6h
// bitfield definitions
RC6PPS_RC6PPS_POSN                       equ 0000h
RC6PPS_RC6PPS_POSITION                   equ 0000h
RC6PPS_RC6PPS_SIZE                       equ 0005h
RC6PPS_RC6PPS_LENGTH                     equ 0005h
RC6PPS_RC6PPS_MASK                       equ 001Fh

// Register: RC7PPS
#define RC7PPS RC7PPS
RC7PPS                                   equ 0EA7h
// bitfield definitions
RC7PPS_RC7PPS_POSN                       equ 0000h
RC7PPS_RC7PPS_POSITION                   equ 0000h
RC7PPS_RC7PPS_SIZE                       equ 0005h
RC7PPS_RC7PPS_LENGTH                     equ 0005h
RC7PPS_RC7PPS_MASK                       equ 001Fh

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
CLCDATA_MCLC1OUT_POSN                    equ 0000h
CLCDATA_MCLC1OUT_POSITION                equ 0000h
CLCDATA_MCLC1OUT_SIZE                    equ 0001h
CLCDATA_MCLC1OUT_LENGTH                  equ 0001h
CLCDATA_MCLC1OUT_MASK                    equ 0001h
CLCDATA_MCLC2OUT_POSN                    equ 0001h
CLCDATA_MCLC2OUT_POSITION                equ 0001h
CLCDATA_MCLC2OUT_SIZE                    equ 0001h
CLCDATA_MCLC2OUT_LENGTH                  equ 0001h
CLCDATA_MCLC2OUT_MASK                    equ 0002h
CLCDATA_MCLC3OUT_POSN                    equ 0002h
CLCDATA_MCLC3OUT_POSITION                equ 0002h
CLCDATA_MCLC3OUT_SIZE                    equ 0001h
CLCDATA_MCLC3OUT_LENGTH                  equ 0001h
CLCDATA_MCLC3OUT_MASK                    equ 0004h
CLCDATA_MCLC4OUT_POSN                    equ 0003h
CLCDATA_MCLC4OUT_POSITION                equ 0003h
CLCDATA_MCLC4OUT_SIZE                    equ 0001h
CLCDATA_MCLC4OUT_LENGTH                  equ 0001h
CLCDATA_MCLC4OUT_MASK                    equ 0008h

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
#define ACKDT                            BANKMASK(SSP1CON2), 5
#define ACKEN                            BANKMASK(SSP1CON2), 4
#define ACKSTAT                          BANKMASK(SSP1CON2), 6
#define ACKTIM                           BANKMASK(SSP1CON3), 7
#define ADD0                             BANKMASK(SSP1ADD), 0
#define ADD1                             BANKMASK(SSP1ADD), 1
#define ADD2                             BANKMASK(SSP1ADD), 2
#define ADD3                             BANKMASK(SSP1ADD), 3
#define ADD4                             BANKMASK(SSP1ADD), 4
#define ADD5                             BANKMASK(SSP1ADD), 5
#define ADD6                             BANKMASK(SSP1ADD), 6
#define ADD7                             BANKMASK(SSP1ADD), 7
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
#define AHEN                             BANKMASK(SSP1CON3), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
#define ANSB0                            BANKMASK(ANSELB), 0
#define ANSB1                            BANKMASK(ANSELB), 1
#define ANSB2                            BANKMASK(ANSELB), 2
#define ANSB3                            BANKMASK(ANSELB), 3
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define ANSC2                            BANKMASK(ANSELC), 2
#define ANSC3                            BANKMASK(ANSELC), 3
#define ANSC4                            BANKMASK(ANSELC), 4
#define ANSC5                            BANKMASK(ANSELC), 5
#define ANSC6                            BANKMASK(ANSELC), 6
#define ANSC7                            BANKMASK(ANSELC), 7
#define BCL1IE                           BANKMASK(PIE2), 3
#define BCL1IF                           BANKMASK(PIR2), 3
#define BF                               BANKMASK(SSP1STAT), 0
#define BOEN                             BANKMASK(SSP1CON3), 4
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define BRG16                            BANKMASK(BAUD1CON), 3
#define BRGH                             BANKMASK(TX1STA), 2
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define BUF0                             BANKMASK(SSP1BUF), 0
#define BUF1                             BANKMASK(SSP1BUF), 1
#define BUF2                             BANKMASK(SSP1BUF), 2
#define BUF3                             BANKMASK(SSP1BUF), 3
#define BUF4                             BANKMASK(SSP1BUF), 4
#define BUF5                             BANKMASK(SSP1BUF), 5
#define BUF6                             BANKMASK(SSP1BUF), 6
#define BUF7                             BANKMASK(SSP1BUF), 7
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
#define C1ZLF                            BANKMASK(CM1CON0), 3
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
#define C2ZLF                            BANKMASK(CM2CON0), 3
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CCP1X                            BANKMASK(CCP1CON), 5
#define CCP1Y                            BANKMASK(CCP1CON), 4
#define CCP2IE                           BANKMASK(PIE2), 0
#define CCP2IF                           BANKMASK(PIR2), 0
#define CCP2M0                           BANKMASK(CCP2CON), 0
#define CCP2M1                           BANKMASK(CCP2CON), 1
#define CCP2M2                           BANKMASK(CCP2CON), 2
#define CCP2M3                           BANKMASK(CCP2CON), 3
#define CCP2X                            BANKMASK(CCP2CON), 5
#define CCP2Y                            BANKMASK(CCP2CON), 4
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CFGS                             BANKMASK(PMCON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CKE                              BANKMASK(SSP1STAT), 6
#define CKP                              BANKMASK(SSP1CON1), 4
#define CLC1IE                           BANKMASK(PIE3), 0
#define CLC1IF                           BANKMASK(PIR3), 0
#define CLC2IE                           BANKMASK(PIE3), 1
#define CLC2IF                           BANKMASK(PIR3), 1
#define CLC3IE                           BANKMASK(PIE3), 2
#define CLC3IF                           BANKMASK(PIR3), 2
#define CLC4IE                           BANKMASK(PIE3), 3
#define CLC4IF                           BANKMASK(PIR3), 3
#define COGIE                            BANKMASK(PIE3), 5
#define COGIF                            BANKMASK(PIR3), 5
#define CREN                             BANKMASK(RC1STA), 4
#define CSRC                             BANKMASK(TX1STA), 7
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DAC1EN                           BANKMASK(DAC1CON0), 7
#define DAC1NSS                          BANKMASK(DAC1CON0), 0
#define DAC1OE1                          BANKMASK(DAC1CON0), 5
#define DAC1OE2                          BANKMASK(DAC1CON0), 4
#define DAC1PSS0                         BANKMASK(DAC1CON0), 2
#define DAC1PSS1                         BANKMASK(DAC1CON0), 3
#define DAC1R0                           BANKMASK(DAC1CON1), 0
#define DAC1R1                           BANKMASK(DAC1CON1), 1
#define DAC1R2                           BANKMASK(DAC1CON1), 2
#define DAC1R3                           BANKMASK(DAC1CON1), 3
#define DAC1R4                           BANKMASK(DAC1CON1), 4
#define DAC1R5                           BANKMASK(DAC1CON1), 5
#define DAC1R6                           BANKMASK(DAC1CON1), 6
#define DAC1R7                           BANKMASK(DAC1CON1), 7
#define DAC2EN                           BANKMASK(DAC2CON0), 7
#define DAC2NSS                          BANKMASK(DAC2CON0), 0
#define DAC2OE1                          BANKMASK(DAC2CON0), 5
#define DAC2OE2                          BANKMASK(DAC2CON0), 4
#define DAC2PSS0                         BANKMASK(DAC2CON0), 2
#define DAC2PSS1                         BANKMASK(DAC2CON0), 3
#define DAC2R0                           BANKMASK(DAC2REF), 0
#define DAC2R1                           BANKMASK(DAC2REF), 1
#define DAC2R2                           BANKMASK(DAC2REF), 2
#define DAC2R3                           BANKMASK(DAC2REF), 3
#define DAC2R4                           BANKMASK(DAC2REF), 4
#define DAC2REF0                         BANKMASK(DAC2REF), 0
#define DAC2REF1                         BANKMASK(DAC2REF), 1
#define DAC2REF2                         BANKMASK(DAC2REF), 2
#define DAC2REF3                         BANKMASK(DAC2REF), 3
#define DAC2REF4                         BANKMASK(DAC2REF), 4
#define DAC2REF5                         BANKMASK(DAC2REF), 5
#define DACOE0                           BANKMASK(DAC1CON0), 4
#define DACOE2                           BANKMASK(DAC2CON0), 4
#define DACR5                            BANKMASK(DAC1CON1), 5
#define DACR6                            BANKMASK(DAC1CON1), 6
#define DACR7                            BANKMASK(DAC1CON1), 7
#define DC                               BANKMASK(STATUS), 1
#define DC1B0                            BANKMASK(CCP1CON), 4
#define DC1B1                            BANKMASK(CCP1CON), 5
#define DC2B0                            BANKMASK(CCP2CON), 4
#define DC2B1                            BANKMASK(CCP2CON), 5
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define DHEN                             BANKMASK(SSP1CON3), 0
#define D_nA                             BANKMASK(SSP1STAT), 5
#define FERR                             BANKMASK(RC1STA), 2
#define FREE                             BANKMASK(PMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define G1ARSEN                          BANKMASK(COG1ASD0), 6
#define G1AS0E                           BANKMASK(COG1ASD1), 0
#define G1AS1E                           BANKMASK(COG1ASD1), 1
#define G1AS2E                           BANKMASK(COG1ASD1), 2
#define G1AS3E                           BANKMASK(COG1ASD1), 3
#define G1ASDAC0                         BANKMASK(COG1ASD0), 2
#define G1ASDAC1                         BANKMASK(COG1ASD0), 3
#define G1ASDBD0                         BANKMASK(COG1ASD0), 4
#define G1ASDBD1                         BANKMASK(COG1ASD0), 5
#define G1ASE                            BANKMASK(COG1ASD0), 7
#define G1BLKF0                          BANKMASK(COG1BLKF), 0
#define G1BLKF1                          BANKMASK(COG1BLKF), 1
#define G1BLKF2                          BANKMASK(COG1BLKF), 2
#define G1BLKF3                          BANKMASK(COG1BLKF), 3
#define G1BLKF4                          BANKMASK(COG1BLKF), 4
#define G1BLKF5                          BANKMASK(COG1BLKF), 5
#define G1BLKR0                          BANKMASK(COG1BLKR), 0
#define G1BLKR1                          BANKMASK(COG1BLKR), 1
#define G1BLKR2                          BANKMASK(COG1BLKR), 2
#define G1BLKR3                          BANKMASK(COG1BLKR), 3
#define G1BLKR4                          BANKMASK(COG1BLKR), 4
#define G1BLKR5                          BANKMASK(COG1BLKR), 5
#define G1CS0                            BANKMASK(COG1CON0), 3
#define G1CS1                            BANKMASK(COG1CON0), 4
#define G1DBF0                           BANKMASK(COG1DBF), 0
#define G1DBF1                           BANKMASK(COG1DBF), 1
#define G1DBF2                           BANKMASK(COG1DBF), 2
#define G1DBF3                           BANKMASK(COG1DBF), 3
#define G1DBF4                           BANKMASK(COG1DBF), 4
#define G1DBF5                           BANKMASK(COG1DBF), 5
#define G1DBR0                           BANKMASK(COG1DBR), 0
#define G1DBR1                           BANKMASK(COG1DBR), 1
#define G1DBR2                           BANKMASK(COG1DBR), 2
#define G1DBR3                           BANKMASK(COG1DBR), 3
#define G1DBR4                           BANKMASK(COG1DBR), 4
#define G1DBR5                           BANKMASK(COG1DBR), 5
#define G1EN                             BANKMASK(COG1CON0), 7
#define G1FDBS                           BANKMASK(COG1CON1), 6
#define G1FIS0                           BANKMASK(COG1FIS), 0
#define G1FIS1                           BANKMASK(COG1FIS), 1
#define G1FIS2                           BANKMASK(COG1FIS), 2
#define G1FIS3                           BANKMASK(COG1FIS), 3
#define G1FIS4                           BANKMASK(COG1FIS), 4
#define G1FIS5                           BANKMASK(COG1FIS), 5
#define G1FIS6                           BANKMASK(COG1FIS), 6
#define G1FIS7                           BANKMASK(COG1FIS), 7
#define G1FSIM0                          BANKMASK(COG1FSIM), 0
#define G1FSIM1                          BANKMASK(COG1FSIM), 1
#define G1FSIM2                          BANKMASK(COG1FSIM), 2
#define G1FSIM3                          BANKMASK(COG1FSIM), 3
#define G1FSIM4                          BANKMASK(COG1FSIM), 4
#define G1FSIM5                          BANKMASK(COG1FSIM), 5
#define G1FSIM6                          BANKMASK(COG1FSIM), 6
#define G1FSIM7                          BANKMASK(COG1FSIM), 7
#define G1LD                             BANKMASK(COG1CON0), 6
#define G1MD0                            BANKMASK(COG1CON0), 0
#define G1MD1                            BANKMASK(COG1CON0), 1
#define G1MD2                            BANKMASK(COG1CON0), 2
#define G1PHF0                           BANKMASK(COG1PHF), 0
#define G1PHF1                           BANKMASK(COG1PHF), 1
#define G1PHF2                           BANKMASK(COG1PHF), 2
#define G1PHF3                           BANKMASK(COG1PHF), 3
#define G1PHF4                           BANKMASK(COG1PHF), 4
#define G1PHF5                           BANKMASK(COG1PHF), 5
#define G1PHR0                           BANKMASK(COG1PHR), 0
#define G1PHR1                           BANKMASK(COG1PHR), 1
#define G1PHR2                           BANKMASK(COG1PHR), 2
#define G1PHR3                           BANKMASK(COG1PHR), 3
#define G1PHR4                           BANKMASK(COG1PHR), 4
#define G1PHR5                           BANKMASK(COG1PHR), 5
#define G1POLA                           BANKMASK(COG1CON1), 0
#define G1POLB                           BANKMASK(COG1CON1), 1
#define G1POLC                           BANKMASK(COG1CON1), 2
#define G1POLD                           BANKMASK(COG1CON1), 3
#define G1RDBS                           BANKMASK(COG1CON1), 7
#define G1RIS0                           BANKMASK(COG1RIS), 0
#define G1RIS1                           BANKMASK(COG1RIS), 1
#define G1RIS2                           BANKMASK(COG1RIS), 2
#define G1RIS3                           BANKMASK(COG1RIS), 3
#define G1RIS4                           BANKMASK(COG1RIS), 4
#define G1RIS5                           BANKMASK(COG1RIS), 5
#define G1RIS6                           BANKMASK(COG1RIS), 6
#define G1RIS7                           BANKMASK(COG1RIS), 7
#define G1RSIM0                          BANKMASK(COG1RSIM), 0
#define G1RSIM1                          BANKMASK(COG1RSIM), 1
#define G1RSIM2                          BANKMASK(COG1RSIM), 2
#define G1RSIM3                          BANKMASK(COG1RSIM), 3
#define G1RSIM4                          BANKMASK(COG1RSIM), 4
#define G1RSIM5                          BANKMASK(COG1RSIM), 5
#define G1RSIM6                          BANKMASK(COG1RSIM), 6
#define G1RSIM7                          BANKMASK(COG1RSIM), 7
#define G1SDATA                          BANKMASK(COG1STR), 4
#define G1SDATB                          BANKMASK(COG1STR), 5
#define G1SDATC                          BANKMASK(COG1STR), 6
#define G1SDATD                          BANKMASK(COG1STR), 7
#define G1STRA                           BANKMASK(COG1STR), 0
#define G1STRB                           BANKMASK(COG1STR), 1
#define G1STRC                           BANKMASK(COG1STR), 2
#define G1STRD                           BANKMASK(COG1STR), 3
#define GCEN                             BANKMASK(SSP1CON2), 7
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
#define LC1D1S0                          BANKMASK(CLC1SEL0), 0
#define LC1D1S1                          BANKMASK(CLC1SEL0), 1
#define LC1D1S2                          BANKMASK(CLC1SEL0), 2
#define LC1D1S3                          BANKMASK(CLC1SEL0), 3
#define LC1D1S4                          BANKMASK(CLC1SEL0), 4
#define LC1D2S0                          BANKMASK(CLC1SEL1), 0
#define LC1D2S1                          BANKMASK(CLC1SEL1), 1
#define LC1D2S2                          BANKMASK(CLC1SEL1), 2
#define LC1D2S3                          BANKMASK(CLC1SEL1), 3
#define LC1D2S4                          BANKMASK(CLC1SEL1), 4
#define LC1D3S0                          BANKMASK(CLC1SEL2), 0
#define LC1D3S1                          BANKMASK(CLC1SEL2), 1
#define LC1D3S2                          BANKMASK(CLC1SEL2), 2
#define LC1D3S3                          BANKMASK(CLC1SEL2), 3
#define LC1D3S4                          BANKMASK(CLC1SEL2), 4
#define LC1D4S0                          BANKMASK(CLC1SEL3), 0
#define LC1D4S1                          BANKMASK(CLC1SEL3), 1
#define LC1D4S2                          BANKMASK(CLC1SEL3), 2
#define LC1D4S3                          BANKMASK(CLC1SEL3), 3
#define LC1D4S4                          BANKMASK(CLC1SEL3), 4
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
#define LC2D2S0                          BANKMASK(CLC2SEL1), 0
#define LC2D2S1                          BANKMASK(CLC2SEL1), 1
#define LC2D2S2                          BANKMASK(CLC2SEL1), 2
#define LC2D2S3                          BANKMASK(CLC2SEL1), 3
#define LC2D2S4                          BANKMASK(CLC2SEL1), 4
#define LC2D3S0                          BANKMASK(CLC2SEL2), 0
#define LC2D3S1                          BANKMASK(CLC2SEL2), 1
#define LC2D3S2                          BANKMASK(CLC2SEL2), 2
#define LC2D3S3                          BANKMASK(CLC2SEL2), 3
#define LC2D3S4                          BANKMASK(CLC2SEL2), 4
#define LC2D4S0                          BANKMASK(CLC2SEL3), 0
#define LC2D4S1                          BANKMASK(CLC2SEL3), 1
#define LC2D4S2                          BANKMASK(CLC2SEL3), 2
#define LC2D4S3                          BANKMASK(CLC2SEL3), 3
#define LC2D4S4                          BANKMASK(CLC2SEL3), 4
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
#define LC3D2S0                          BANKMASK(CLC3SEL1), 0
#define LC3D2S1                          BANKMASK(CLC3SEL1), 1
#define LC3D2S2                          BANKMASK(CLC3SEL1), 2
#define LC3D2S3                          BANKMASK(CLC3SEL1), 3
#define LC3D2S4                          BANKMASK(CLC3SEL1), 4
#define LC3D3S0                          BANKMASK(CLC3SEL2), 0
#define LC3D3S1                          BANKMASK(CLC3SEL2), 1
#define LC3D3S2                          BANKMASK(CLC3SEL2), 2
#define LC3D3S3                          BANKMASK(CLC3SEL2), 3
#define LC3D3S4                          BANKMASK(CLC3SEL2), 4
#define LC3D4S0                          BANKMASK(CLC3SEL3), 0
#define LC3D4S1                          BANKMASK(CLC3SEL3), 1
#define LC3D4S2                          BANKMASK(CLC3SEL3), 2
#define LC3D4S3                          BANKMASK(CLC3SEL3), 3
#define LC3D4S4                          BANKMASK(CLC3SEL3), 4
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
#define LC4D2S0                          BANKMASK(CLC4SEL1), 0
#define LC4D2S1                          BANKMASK(CLC4SEL1), 1
#define LC4D2S2                          BANKMASK(CLC4SEL1), 2
#define LC4D2S3                          BANKMASK(CLC4SEL1), 3
#define LC4D2S4                          BANKMASK(CLC4SEL1), 4
#define LC4D3S0                          BANKMASK(CLC4SEL2), 0
#define LC4D3S1                          BANKMASK(CLC4SEL2), 1
#define LC4D3S2                          BANKMASK(CLC4SEL2), 2
#define LC4D3S3                          BANKMASK(CLC4SEL2), 3
#define LC4D3S4                          BANKMASK(CLC4SEL2), 4
#define LC4D4S0                          BANKMASK(CLC4SEL3), 0
#define LC4D4S1                          BANKMASK(CLC4SEL3), 1
#define LC4D4S2                          BANKMASK(CLC4SEL3), 2
#define LC4D4S3                          BANKMASK(CLC4SEL3), 3
#define LC4D4S4                          BANKMASK(CLC4SEL3), 4
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
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LWLO                             BANKMASK(PMCON1), 5
#define MC1OUT                           BANKMASK(CMOUT), 0
#define MC2OUT                           BANKMASK(CMOUT), 1
#define MCLC1OUT                         BANKMASK(CLCDATA), 0
#define MCLC2OUT                         BANKMASK(CLCDATA), 1
#define MCLC3OUT                         BANKMASK(CLCDATA), 2
#define MCLC4OUT                         BANKMASK(CLCDATA), 3
#define MFIOFR                           BANKMASK(OSCSTAT), 2
#define MLC1OUT                          BANKMASK(CLCDATA), 0
#define MLC2OUT                          BANKMASK(CLCDATA), 1
#define MLC3OUT                          BANKMASK(CLCDATA), 2
#define MLC4OUT                          BANKMASK(CLCDATA), 3
#define MSK0                             BANKMASK(SSP1MSK), 0
#define MSK1                             BANKMASK(SSP1MSK), 1
#define MSK2                             BANKMASK(SSP1MSK), 2
#define MSK3                             BANKMASK(SSP1MSK), 3
#define MSK4                             BANKMASK(SSP1MSK), 4
#define MSK5                             BANKMASK(SSP1MSK), 5
#define MSK6                             BANKMASK(SSP1MSK), 6
#define MSK7                             BANKMASK(SSP1MSK), 7
#define N1CKS0                           BANKMASK(NCO1CLK), 0
#define N1CKS1                           BANKMASK(NCO1CLK), 1
#define N1EN                             BANKMASK(NCO1CON), 7
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
#define NCO1INC0                         BANKMASK(NCO1INCL), 0
#define NCO1INC1                         BANKMASK(NCO1INCL), 1
#define NCO1INC10                        BANKMASK(NCO1INCH), 2
#define NCO1INC11                        BANKMASK(NCO1INCH), 3
#define NCO1INC12                        BANKMASK(NCO1INCH), 4
#define NCO1INC13                        BANKMASK(NCO1INCH), 5
#define NCO1INC14                        BANKMASK(NCO1INCH), 6
#define NCO1INC15                        BANKMASK(NCO1INCH), 7
#define NCO1INC16                        BANKMASK(NCO1INCU), 0
#define NCO1INC17                        BANKMASK(NCO1INCU), 1
#define NCO1INC18                        BANKMASK(NCO1INCU), 2
#define NCO1INC19                        BANKMASK(NCO1INCU), 3
#define NCO1INC2                         BANKMASK(NCO1INCL), 2
#define NCO1INC3                         BANKMASK(NCO1INCL), 3
#define NCO1INC4                         BANKMASK(NCO1INCL), 4
#define NCO1INC5                         BANKMASK(NCO1INCL), 5
#define NCO1INC6                         BANKMASK(NCO1INCL), 6
#define NCO1INC7                         BANKMASK(NCO1INCL), 7
#define NCO1INC8                         BANKMASK(NCO1INCH), 0
#define NCO1INC9                         BANKMASK(NCO1INCH), 1
#define NCOIE                            BANKMASK(PIE3), 6
#define NCOIF                            BANKMASK(PIR3), 6
#define NSS                              BANKMASK(DAC2CON0), 0
#define ODA0                             BANKMASK(ODCONA), 0
#define ODA1                             BANKMASK(ODCONA), 1
#define ODA2                             BANKMASK(ODCONA), 2
#define ODA3                             BANKMASK(ODCONA), 3
#define ODA4                             BANKMASK(ODCONA), 4
#define ODA5                             BANKMASK(ODCONA), 5
#define ODA6                             BANKMASK(ODCONA), 6
#define ODA7                             BANKMASK(ODCONA), 7
#define ODB0                             BANKMASK(ODCONB), 0
#define ODB1                             BANKMASK(ODCONB), 1
#define ODB2                             BANKMASK(ODCONB), 2
#define ODB3                             BANKMASK(ODCONB), 3
#define ODB4                             BANKMASK(ODCONB), 4
#define ODB5                             BANKMASK(ODCONB), 5
#define ODB6                             BANKMASK(ODCONB), 6
#define ODB7                             BANKMASK(ODCONB), 7
#define ODC0                             BANKMASK(ODCONC), 0
#define ODC1                             BANKMASK(ODCONC), 1
#define ODC2                             BANKMASK(ODCONC), 2
#define ODC3                             BANKMASK(ODCONC), 3
#define ODC4                             BANKMASK(ODCONC), 4
#define ODC5                             BANKMASK(ODCONC), 5
#define ODC6                             BANKMASK(ODCONC), 6
#define ODC7                             BANKMASK(ODCONC), 7
#define OE1                              BANKMASK(DAC2CON0), 5
#define OE2                              BANKMASK(DAC2CON0), 4
#define OERR                             BANKMASK(RC1STA), 1
#define OPA1EN                           BANKMASK(OPA1CON), 7
#define OPA1PCH0                         BANKMASK(OPA1CON), 0
#define OPA1PCH1                         BANKMASK(OPA1CON), 1
#define OPA1SP                           BANKMASK(OPA1CON), 6
#define OPA1UG                           BANKMASK(OPA1CON), 4
#define OPA2EN                           BANKMASK(OPA2CON), 7
#define OPA2PCH0                         BANKMASK(OPA2CON), 0
#define OPA2PCH1                         BANKMASK(OPA2CON), 1
#define OPA2SP                           BANKMASK(OPA2CON), 6
#define OPA2UG                           BANKMASK(OPA2CON), 4
#define OSFIE                            BANKMASK(PIE2), 7
#define OSFIF                            BANKMASK(PIR2), 7
#define OSTS                             BANKMASK(OSCSTAT), 5
#define P3TSEL0                          BANKMASK(CCPTMRS), 4
#define P3TSEL1                          BANKMASK(CCPTMRS), 5
#define P4TSEL0                          BANKMASK(CCPTMRS), 6
#define P4TSEL1                          BANKMASK(CCPTMRS), 7
#define PCIE                             BANKMASK(SSP1CON3), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSP1CON2), 2
#define PLLR                             BANKMASK(OSCSTAT), 6
#define PPSLOCKED                        BANKMASK(PPSLOCK), 0
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PSS0                             BANKMASK(DAC2CON0), 2
#define PSS1                             BANKMASK(DAC2CON0), 3
#define PWM3DCH0                         BANKMASK(PWM3DCH), 0
#define PWM3DCH1                         BANKMASK(PWM3DCH), 1
#define PWM3DCH2                         BANKMASK(PWM3DCH), 2
#define PWM3DCH3                         BANKMASK(PWM3DCH), 3
#define PWM3DCH4                         BANKMASK(PWM3DCH), 4
#define PWM3DCH5                         BANKMASK(PWM3DCH), 5
#define PWM3DCH6                         BANKMASK(PWM3DCH), 6
#define PWM3DCH7                         BANKMASK(PWM3DCH), 7
#define PWM3DCL0                         BANKMASK(PWM3DCL), 6
#define PWM3DCL1                         BANKMASK(PWM3DCL), 7
#define PWM3EN                           BANKMASK(PWM3CON), 7
#define PWM3OUT                          BANKMASK(PWM3CON), 5
#define PWM3POL                          BANKMASK(PWM3CON), 4
#define PWM4DCH0                         BANKMASK(PWM4DCH), 0
#define PWM4DCH1                         BANKMASK(PWM4DCH), 1
#define PWM4DCH2                         BANKMASK(PWM4DCH), 2
#define PWM4DCH3                         BANKMASK(PWM4DCH), 3
#define PWM4DCH4                         BANKMASK(PWM4DCH), 4
#define PWM4DCH5                         BANKMASK(PWM4DCH), 5
#define PWM4DCH6                         BANKMASK(PWM4DCH), 6
#define PWM4DCH7                         BANKMASK(PWM4DCH), 7
#define PWM4DCL0                         BANKMASK(PWM4DCL), 6
#define PWM4DCL1                         BANKMASK(PWM4DCL), 7
#define PWM4EN                           BANKMASK(PWM4CON), 7
#define PWM4OUT                          BANKMASK(PWM4CON), 5
#define PWM4POL                          BANKMASK(PWM4CON), 4
#define R0                               BANKMASK(DAC2REF), 0
#define R1                               BANKMASK(DAC2REF), 1
#define R2                               BANKMASK(DAC2REF), 2
#define R3                               BANKMASK(DAC2REF), 3
#define R4                               BANKMASK(DAC2REF), 4
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
#define RCEN                             BANKMASK(SSP1CON2), 3
#define RCIDL                            BANKMASK(BAUD1CON), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(PMCON1), 0
#define RE3                              BANKMASK(PORTE), 3
#define REF0                             BANKMASK(DAC2REF), 0
#define REF1                             BANKMASK(DAC2REF), 1
#define REF2                             BANKMASK(DAC2REF), 2
#define REF3                             BANKMASK(DAC2REF), 3
#define REF4                             BANKMASK(DAC2REF), 4
#define REF5                             BANKMASK(DAC2REF), 5
#define RSEN                             BANKMASK(SSP1CON2), 1
#define RX9                              BANKMASK(RC1STA), 6
#define RX9D                             BANKMASK(RC1STA), 0
#define R_nW                             BANKMASK(SSP1STAT), 2
#define SBCDE                            BANKMASK(SSP1CON3), 2
#define SBOREN                           BANKMASK(BORCON), 7
#define SCIE                             BANKMASK(SSP1CON3), 5
#define SCKP                             BANKMASK(BAUD1CON), 4
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SDAHT                            BANKMASK(SSP1CON3), 3
#define SEN                              BANKMASK(SSP1CON2), 0
#define SENDB                            BANKMASK(TX1STA), 3
#define SLRA0                            BANKMASK(SLRCONA), 0
#define SLRA1                            BANKMASK(SLRCONA), 1
#define SLRA2                            BANKMASK(SLRCONA), 2
#define SLRA3                            BANKMASK(SLRCONA), 3
#define SLRA4                            BANKMASK(SLRCONA), 4
#define SLRA5                            BANKMASK(SLRCONA), 5
#define SLRA6                            BANKMASK(SLRCONA), 6
#define SLRA7                            BANKMASK(SLRCONA), 7
#define SLRB0                            BANKMASK(SLRCONB), 0
#define SLRB1                            BANKMASK(SLRCONB), 1
#define SLRB2                            BANKMASK(SLRCONB), 2
#define SLRB3                            BANKMASK(SLRCONB), 3
#define SLRB4                            BANKMASK(SLRCONB), 4
#define SLRB5                            BANKMASK(SLRCONB), 5
#define SLRB6                            BANKMASK(SLRCONB), 6
#define SLRB7                            BANKMASK(SLRCONB), 7
#define SLRC0                            BANKMASK(SLRCONC), 0
#define SLRC1                            BANKMASK(SLRCONC), 1
#define SLRC2                            BANKMASK(SLRCONC), 2
#define SLRC3                            BANKMASK(SLRCONC), 3
#define SLRC4                            BANKMASK(SLRCONC), 4
#define SLRC5                            BANKMASK(SLRCONC), 5
#define SLRC6                            BANKMASK(SLRCONC), 6
#define SLRC7                            BANKMASK(SLRCONC), 7
#define SMP                              BANKMASK(SSP1STAT), 7
#define SOSCR                            BANKMASK(OSCSTAT), 7
#define SPEN                             BANKMASK(RC1STA), 7
#define SPLLEN                           BANKMASK(OSCCON), 7
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
#define SSPEN                            BANKMASK(SSP1CON1), 5
#define SSPM0                            BANKMASK(SSP1CON1), 0
#define SSPM1                            BANKMASK(SSP1CON1), 1
#define SSPM2                            BANKMASK(SSP1CON1), 2
#define SSPM3                            BANKMASK(SSP1CON1), 3
#define SSPOV                            BANKMASK(SSP1CON1), 6
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
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define T2OUTPS0                         BANKMASK(T2CON), 3
#define T2OUTPS1                         BANKMASK(T2CON), 4
#define T2OUTPS2                         BANKMASK(T2CON), 5
#define T2OUTPS3                         BANKMASK(T2CON), 6
#define T4CKPS0                          BANKMASK(T4CON), 0
#define T4CKPS1                          BANKMASK(T4CON), 1
#define T4OUTPS0                         BANKMASK(T4CON), 3
#define T4OUTPS1                         BANKMASK(T4CON), 4
#define T4OUTPS2                         BANKMASK(T4CON), 5
#define T4OUTPS3                         BANKMASK(T4CON), 6
#define T6CKPS0                          BANKMASK(T6CON), 0
#define T6CKPS1                          BANKMASK(T6CON), 1
#define T6OUTPS0                         BANKMASK(T6CON), 3
#define T6OUTPS1                         BANKMASK(T6CON), 4
#define T6OUTPS2                         BANKMASK(T6CON), 5
#define T6OUTPS3                         BANKMASK(T6CON), 6
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
#define TMR4IE                           BANKMASK(PIE2), 1
#define TMR4IF                           BANKMASK(PIR2), 1
#define TMR4ON                           BANKMASK(T4CON), 2
#define TMR6IE                           BANKMASK(PIE2), 2
#define TMR6IF                           BANKMASK(PIR2), 2
#define TMR6ON                           BANKMASK(T6CON), 2
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
#define UA                               BANKMASK(SSP1STAT), 1
#define VREGPM                           BANKMASK(VREGCON), 1
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
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define WRERR                            BANKMASK(PMCON1), 3
#define WUE                              BANKMASK(BAUD1CON), 1
#define ZCD1EN                           BANKMASK(ZCD1CON), 7
#define ZCD1INTN                         BANKMASK(ZCD1CON), 0
#define ZCD1INTP                         BANKMASK(ZCD1CON), 1
#define ZCD1OUT                          BANKMASK(ZCD1CON), 5
#define ZCD1POL                          BANKMASK(ZCD1CON), 4
#define ZCDIE                            BANKMASK(PIE3), 4
#define ZCDIF                            BANKMASK(PIR3), 4
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
psect udata_bank3,class=BANK3,space=SPACE_DATA,noexec
psect udata_bank4,class=BANK4,space=SPACE_DATA,noexec
psect udata_bank5,class=BANK5,space=SPACE_DATA,noexec
psect udata_bank6,class=BANK6,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16F1713_INC_
