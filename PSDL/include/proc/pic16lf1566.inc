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

#ifndef _PIC16LF1566_INC_
#define _PIC16LF1566_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF1566
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
PIR1_SSP2IF_POSN                         equ 0002h
PIR1_SSP2IF_POSITION                     equ 0002h
PIR1_SSP2IF_SIZE                         equ 0001h
PIR1_SSP2IF_LENGTH                       equ 0001h
PIR1_SSP2IF_MASK                         equ 0004h
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
PIR1_AD1IF_POSN                          equ 0006h
PIR1_AD1IF_POSITION                      equ 0006h
PIR1_AD1IF_SIZE                          equ 0001h
PIR1_AD1IF_LENGTH                        equ 0001h
PIR1_AD1IF_MASK                          equ 0040h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0012h
// bitfield definitions
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
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h
PIR2_AD2IF_POSN                          equ 0006h
PIR2_AD2IF_POSITION                      equ 0006h
PIR2_AD2IF_SIZE                          equ 0001h
PIR2_AD2IF_LENGTH                        equ 0001h
PIR2_AD2IF_MASK                          equ 0040h

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
T1GCON_T1GSS_SIZE                        equ 0001h
T1GCON_T1GSS_LENGTH                      equ 0001h
T1GCON_T1GSS_MASK                        equ 0001h
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
T1GCON_GO_POSN                           equ 0003h
T1GCON_GO_POSITION                       equ 0003h
T1GCON_GO_SIZE                           equ 0001h
T1GCON_GO_LENGTH                         equ 0001h
T1GCON_GO_MASK                           equ 0008h

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
PIE1_SSP2IE_POSN                         equ 0002h
PIE1_SSP2IE_POSITION                     equ 0002h
PIE1_SSP2IE_SIZE                         equ 0001h
PIE1_SSP2IE_LENGTH                       equ 0001h
PIE1_SSP2IE_MASK                         equ 0004h
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
PIE1_SSPIE_POSN                          equ 0003h
PIE1_SSPIE_POSITION                      equ 0003h
PIE1_SSPIE_SIZE                          equ 0001h
PIE1_SSPIE_LENGTH                        equ 0001h
PIE1_SSPIE_MASK                          equ 0008h
PIE1_AD1IE_POSN                          equ 0006h
PIE1_AD1IE_POSITION                      equ 0006h
PIE1_AD1IE_SIZE                          equ 0001h
PIE1_AD1IE_LENGTH                        equ 0001h
PIE1_AD1IE_MASK                          equ 0040h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0092h
// bitfield definitions
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
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h
PIE2_AD2IE_POSN                          equ 0006h
PIE2_AD2IE_POSITION                      equ 0006h
PIE2_AD2IE_SIZE                          equ 0001h
PIE2_AD2IE_LENGTH                        equ 0001h
PIE2_AD2IE_MASK                          equ 0040h

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
OSCSTAT_PLLSR_POSN                       equ 0006h
OSCSTAT_PLLSR_POSITION                   equ 0006h
OSCSTAT_PLLSR_SIZE                       equ 0001h
OSCSTAT_PLLSR_LENGTH                     equ 0001h
OSCSTAT_PLLSR_MASK                       equ 0040h

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
ADCON0_AD1ON_POSN                        equ 0000h
ADCON0_AD1ON_POSITION                    equ 0000h
ADCON0_AD1ON_SIZE                        equ 0001h
ADCON0_AD1ON_LENGTH                      equ 0001h
ADCON0_AD1ON_MASK                        equ 0001h
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
ADCON1_GO_nDONE_ALL_POSN                 equ 0002h
ADCON1_GO_nDONE_ALL_POSITION             equ 0002h
ADCON1_GO_nDONE_ALL_SIZE                 equ 0001h
ADCON1_GO_nDONE_ALL_LENGTH               equ 0001h
ADCON1_GO_nDONE_ALL_MASK                 equ 0004h
ADCON1_ADNREF_POSN                       equ 0003h
ADCON1_ADNREF_POSITION                   equ 0003h
ADCON1_ADNREF_SIZE                       equ 0001h
ADCON1_ADNREF_LENGTH                     equ 0001h
ADCON1_ADNREF_MASK                       equ 0008h
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
ADCON1_GO_ALL_POSN                       equ 0002h
ADCON1_GO_ALL_POSITION                   equ 0002h
ADCON1_GO_ALL_SIZE                       equ 0001h
ADCON1_GO_ALL_LENGTH                     equ 0001h
ADCON1_GO_ALL_MASK                       equ 0004h

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 009Fh
// bitfield definitions
ADCON2_TRIGSEL_POSN                      equ 0004h
ADCON2_TRIGSEL_POSITION                  equ 0004h
ADCON2_TRIGSEL_SIZE                      equ 0003h
ADCON2_TRIGSEL_LENGTH                    equ 0003h
ADCON2_TRIGSEL_MASK                      equ 0070h
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

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 011Dh
// bitfield definitions
APFCON_GRDASEL_POSN                      equ 0000h
APFCON_GRDASEL_POSITION                  equ 0000h
APFCON_GRDASEL_SIZE                      equ 0001h
APFCON_GRDASEL_LENGTH                    equ 0001h
APFCON_GRDASEL_MASK                      equ 0001h
APFCON_GRDBSEL_POSN                      equ 0001h
APFCON_GRDBSEL_POSITION                  equ 0001h
APFCON_GRDBSEL_SIZE                      equ 0001h
APFCON_GRDBSEL_LENGTH                    equ 0001h
APFCON_GRDBSEL_MASK                      equ 0002h
APFCON_SSSEL_POSN                        equ 0005h
APFCON_SSSEL_POSITION                    equ 0005h
APFCON_SSSEL_SIZE                        equ 0001h
APFCON_SSSEL_LENGTH                      equ 0001h
APFCON_SSSEL_MASK                        equ 0020h

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
ANSELA_ANSA6_POSN                        equ 0006h
ANSELA_ANSA6_POSITION                    equ 0006h
ANSELA_ANSA6_SIZE                        equ 0001h
ANSELA_ANSA6_LENGTH                      equ 0001h
ANSELA_ANSA6_MASK                        equ 0040h
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
ANSELB_ANSB6_POSN                        equ 0006h
ANSELB_ANSB6_POSITION                    equ 0006h
ANSELB_ANSB6_SIZE                        equ 0001h
ANSELB_ANSB6_LENGTH                      equ 0001h
ANSELB_ANSB6_MASK                        equ 0040h
ANSELB_ANSB7_POSN                        equ 0007h
ANSELB_ANSB7_POSITION                    equ 0007h
ANSELB_ANSB7_SIZE                        equ 0001h
ANSELB_ANSB7_LENGTH                      equ 0001h
ANSELB_ANSB7_MASK                        equ 0080h
ANSELB_ANSELB_POSN                       equ 0000h
ANSELB_ANSELB_POSITION                   equ 0000h
ANSELB_ANSELB_SIZE                       equ 0008h
ANSELB_ANSELB_LENGTH                     equ 0008h
ANSELB_ANSELB_MASK                       equ 00FFh

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
ANSELC_ANSELC_POSN                       equ 0000h
ANSELC_ANSELC_POSITION                   equ 0000h
ANSELC_ANSELC_SIZE                       equ 0008h
ANSELC_ANSELC_LENGTH                     equ 0008h
ANSELC_ANSELC_MASK                       equ 00FFh

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

// Register: RCREG
#define RCREG RCREG
RCREG                                    equ 0199h
// bitfield definitions
RCREG_RCREG_POSN                         equ 0000h
RCREG_RCREG_POSITION                     equ 0000h
RCREG_RCREG_SIZE                         equ 0008h
RCREG_RCREG_LENGTH                       equ 0008h
RCREG_RCREG_MASK                         equ 00FFh

// Register: TXREG
#define TXREG TXREG
TXREG                                    equ 019Ah
// bitfield definitions
TXREG_TXREG_POSN                         equ 0000h
TXREG_TXREG_POSITION                     equ 0000h
TXREG_TXREG_SIZE                         equ 0008h
TXREG_TXREG_LENGTH                       equ 0008h
TXREG_TXREG_MASK                         equ 00FFh

// Register: SPBRGL
#define SPBRGL SPBRGL
SPBRGL                                   equ 019Bh
// bitfield definitions
SPBRGL_SPBRGL_POSN                       equ 0000h
SPBRGL_SPBRGL_POSITION                   equ 0000h
SPBRGL_SPBRGL_SIZE                       equ 0008h
SPBRGL_SPBRGL_LENGTH                     equ 0008h
SPBRGL_SPBRGL_MASK                       equ 00FFh

// Register: SPBRGH
#define SPBRGH SPBRGH
SPBRGH                                   equ 019Ch
// bitfield definitions
SPBRGH_SPBRGH_POSN                       equ 0000h
SPBRGH_SPBRGH_POSITION                   equ 0000h
SPBRGH_SPBRGH_SIZE                       equ 0008h
SPBRGH_SPBRGH_LENGTH                     equ 0008h
SPBRGH_SPBRGH_MASK                       equ 00FFh

// Register: RCSTA
#define RCSTA RCSTA
RCSTA                                    equ 019Dh
// bitfield definitions
RCSTA_RX9D_POSN                          equ 0000h
RCSTA_RX9D_POSITION                      equ 0000h
RCSTA_RX9D_SIZE                          equ 0001h
RCSTA_RX9D_LENGTH                        equ 0001h
RCSTA_RX9D_MASK                          equ 0001h
RCSTA_OERR_POSN                          equ 0001h
RCSTA_OERR_POSITION                      equ 0001h
RCSTA_OERR_SIZE                          equ 0001h
RCSTA_OERR_LENGTH                        equ 0001h
RCSTA_OERR_MASK                          equ 0002h
RCSTA_FERR_POSN                          equ 0002h
RCSTA_FERR_POSITION                      equ 0002h
RCSTA_FERR_SIZE                          equ 0001h
RCSTA_FERR_LENGTH                        equ 0001h
RCSTA_FERR_MASK                          equ 0004h
RCSTA_ADDEN_POSN                         equ 0003h
RCSTA_ADDEN_POSITION                     equ 0003h
RCSTA_ADDEN_SIZE                         equ 0001h
RCSTA_ADDEN_LENGTH                       equ 0001h
RCSTA_ADDEN_MASK                         equ 0008h
RCSTA_CREN_POSN                          equ 0004h
RCSTA_CREN_POSITION                      equ 0004h
RCSTA_CREN_SIZE                          equ 0001h
RCSTA_CREN_LENGTH                        equ 0001h
RCSTA_CREN_MASK                          equ 0010h
RCSTA_SREN_POSN                          equ 0005h
RCSTA_SREN_POSITION                      equ 0005h
RCSTA_SREN_SIZE                          equ 0001h
RCSTA_SREN_LENGTH                        equ 0001h
RCSTA_SREN_MASK                          equ 0020h
RCSTA_RX9_POSN                           equ 0006h
RCSTA_RX9_POSITION                       equ 0006h
RCSTA_RX9_SIZE                           equ 0001h
RCSTA_RX9_LENGTH                         equ 0001h
RCSTA_RX9_MASK                           equ 0040h
RCSTA_SPEN_POSN                          equ 0007h
RCSTA_SPEN_POSITION                      equ 0007h
RCSTA_SPEN_SIZE                          equ 0001h
RCSTA_SPEN_LENGTH                        equ 0001h
RCSTA_SPEN_MASK                          equ 0080h

// Register: TXSTA
#define TXSTA TXSTA
TXSTA                                    equ 019Eh
// bitfield definitions
TXSTA_TX9D_POSN                          equ 0000h
TXSTA_TX9D_POSITION                      equ 0000h
TXSTA_TX9D_SIZE                          equ 0001h
TXSTA_TX9D_LENGTH                        equ 0001h
TXSTA_TX9D_MASK                          equ 0001h
TXSTA_TRMT_POSN                          equ 0001h
TXSTA_TRMT_POSITION                      equ 0001h
TXSTA_TRMT_SIZE                          equ 0001h
TXSTA_TRMT_LENGTH                        equ 0001h
TXSTA_TRMT_MASK                          equ 0002h
TXSTA_BRGH_POSN                          equ 0002h
TXSTA_BRGH_POSITION                      equ 0002h
TXSTA_BRGH_SIZE                          equ 0001h
TXSTA_BRGH_LENGTH                        equ 0001h
TXSTA_BRGH_MASK                          equ 0004h
TXSTA_SENDB_POSN                         equ 0003h
TXSTA_SENDB_POSITION                     equ 0003h
TXSTA_SENDB_SIZE                         equ 0001h
TXSTA_SENDB_LENGTH                       equ 0001h
TXSTA_SENDB_MASK                         equ 0008h
TXSTA_SYNC_POSN                          equ 0004h
TXSTA_SYNC_POSITION                      equ 0004h
TXSTA_SYNC_SIZE                          equ 0001h
TXSTA_SYNC_LENGTH                        equ 0001h
TXSTA_SYNC_MASK                          equ 0010h
TXSTA_TXEN_POSN                          equ 0005h
TXSTA_TXEN_POSITION                      equ 0005h
TXSTA_TXEN_SIZE                          equ 0001h
TXSTA_TXEN_LENGTH                        equ 0001h
TXSTA_TXEN_MASK                          equ 0020h
TXSTA_TX9_POSN                           equ 0006h
TXSTA_TX9_POSITION                       equ 0006h
TXSTA_TX9_SIZE                           equ 0001h
TXSTA_TX9_LENGTH                         equ 0001h
TXSTA_TX9_MASK                           equ 0040h
TXSTA_CSRC_POSN                          equ 0007h
TXSTA_CSRC_POSITION                      equ 0007h
TXSTA_CSRC_SIZE                          equ 0001h
TXSTA_CSRC_LENGTH                        equ 0001h
TXSTA_CSRC_MASK                          equ 0080h

// Register: BAUDCON
#define BAUDCON BAUDCON
BAUDCON                                  equ 019Fh
// bitfield definitions
BAUDCON_ABDEN_POSN                       equ 0000h
BAUDCON_ABDEN_POSITION                   equ 0000h
BAUDCON_ABDEN_SIZE                       equ 0001h
BAUDCON_ABDEN_LENGTH                     equ 0001h
BAUDCON_ABDEN_MASK                       equ 0001h
BAUDCON_WUE_POSN                         equ 0001h
BAUDCON_WUE_POSITION                     equ 0001h
BAUDCON_WUE_SIZE                         equ 0001h
BAUDCON_WUE_LENGTH                       equ 0001h
BAUDCON_WUE_MASK                         equ 0002h
BAUDCON_BRG16_POSN                       equ 0003h
BAUDCON_BRG16_POSITION                   equ 0003h
BAUDCON_BRG16_SIZE                       equ 0001h
BAUDCON_BRG16_LENGTH                     equ 0001h
BAUDCON_BRG16_MASK                       equ 0008h
BAUDCON_SCKP_POSN                        equ 0004h
BAUDCON_SCKP_POSITION                    equ 0004h
BAUDCON_SCKP_SIZE                        equ 0001h
BAUDCON_SCKP_LENGTH                      equ 0001h
BAUDCON_SCKP_MASK                        equ 0010h
BAUDCON_RCIDL_POSN                       equ 0006h
BAUDCON_RCIDL_POSITION                   equ 0006h
BAUDCON_RCIDL_SIZE                       equ 0001h
BAUDCON_RCIDL_LENGTH                     equ 0001h
BAUDCON_RCIDL_MASK                       equ 0040h
BAUDCON_ABDOVF_POSN                      equ 0007h
BAUDCON_ABDOVF_POSITION                  equ 0007h
BAUDCON_ABDOVF_SIZE                      equ 0001h
BAUDCON_ABDOVF_LENGTH                    equ 0001h
BAUDCON_ABDOVF_MASK                      equ 0080h

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

// Register: WPUE
#define WPUE WPUE
WPUE                                     equ 0210h
// bitfield definitions
WPUE_WPUE3_POSN                          equ 0003h
WPUE_WPUE3_POSITION                      equ 0003h
WPUE_WPUE3_SIZE                          equ 0001h
WPUE_WPUE3_LENGTH                        equ 0001h
WPUE_WPUE3_MASK                          equ 0008h
WPUE_WPUE_POSN                           equ 0000h
WPUE_WPUE_POSITION                       equ 0000h
WPUE_WPUE_SIZE                           equ 0008h
WPUE_WPUE_LENGTH                         equ 0008h
WPUE_WPUE_MASK                           equ 00FFh

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

// Register: SSPLVL
#define SSPLVL SSPLVL
SSPLVL                                   equ 0218h
// bitfield definitions
SSPLVL_S1ILS_POSN                        equ 0000h
SSPLVL_S1ILS_POSITION                    equ 0000h
SSPLVL_S1ILS_SIZE                        equ 0001h
SSPLVL_S1ILS_LENGTH                      equ 0001h
SSPLVL_S1ILS_MASK                        equ 0001h
SSPLVL_S2ILS_POSN                        equ 0004h
SSPLVL_S2ILS_POSITION                    equ 0004h
SSPLVL_S2ILS_SIZE                        equ 0001h
SSPLVL_S2ILS_LENGTH                      equ 0001h
SSPLVL_S2ILS_MASK                        equ 0010h

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

// Register: PWM1DCL
#define PWM1DCL PWM1DCL
PWM1DCL                                  equ 0611h
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
PWM1DCH                                  equ 0612h
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
PWM1CON                                  equ 0613h
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
PWM2DCL                                  equ 0614h
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
PWM2DCH                                  equ 0615h
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
PWM2CON                                  equ 0616h
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

// Register: PWMTMRS
#define PWMTMRS PWMTMRS
PWMTMRS                                  equ 061Dh
// bitfield definitions
PWMTMRS_P1TSEL_POSN                      equ 0000h
PWMTMRS_P1TSEL_POSITION                  equ 0000h
PWMTMRS_P1TSEL_SIZE                      equ 0001h
PWMTMRS_P1TSEL_LENGTH                    equ 0001h
PWMTMRS_P1TSEL_MASK                      equ 0001h
PWMTMRS_P2TSEL_POSN                      equ 0002h
PWMTMRS_P2TSEL_POSITION                  equ 0002h
PWMTMRS_P2TSEL_SIZE                      equ 0001h
PWMTMRS_P2TSEL_LENGTH                    equ 0001h
PWMTMRS_P2TSEL_MASK                      equ 0004h

// Register: PWM1AOE
#define PWM1AOE PWM1AOE
PWM1AOE                                  equ 061Eh
// bitfield definitions
PWM1AOE_PWM1OE_POSN                      equ 0000h
PWM1AOE_PWM1OE_POSITION                  equ 0000h
PWM1AOE_PWM1OE_SIZE                      equ 0004h
PWM1AOE_PWM1OE_LENGTH                    equ 0004h
PWM1AOE_PWM1OE_MASK                      equ 000Fh
PWM1AOE_PWM1OE0_POSN                     equ 0000h
PWM1AOE_PWM1OE0_POSITION                 equ 0000h
PWM1AOE_PWM1OE0_SIZE                     equ 0001h
PWM1AOE_PWM1OE0_LENGTH                   equ 0001h
PWM1AOE_PWM1OE0_MASK                     equ 0001h
PWM1AOE_PWM1OE1_POSN                     equ 0001h
PWM1AOE_PWM1OE1_POSITION                 equ 0001h
PWM1AOE_PWM1OE1_SIZE                     equ 0001h
PWM1AOE_PWM1OE1_LENGTH                   equ 0001h
PWM1AOE_PWM1OE1_MASK                     equ 0002h
PWM1AOE_PWM1OE2_POSN                     equ 0002h
PWM1AOE_PWM1OE2_POSITION                 equ 0002h
PWM1AOE_PWM1OE2_SIZE                     equ 0001h
PWM1AOE_PWM1OE2_LENGTH                   equ 0001h
PWM1AOE_PWM1OE2_MASK                     equ 0004h
PWM1AOE_PWM1OE3_POSN                     equ 0003h
PWM1AOE_PWM1OE3_POSITION                 equ 0003h
PWM1AOE_PWM1OE3_SIZE                     equ 0001h
PWM1AOE_PWM1OE3_LENGTH                   equ 0001h
PWM1AOE_PWM1OE3_MASK                     equ 0008h

// Register: PWM2AOE
#define PWM2AOE PWM2AOE
PWM2AOE                                  equ 061Fh
// bitfield definitions
PWM2AOE_PWM2OE_POSN                      equ 0000h
PWM2AOE_PWM2OE_POSITION                  equ 0000h
PWM2AOE_PWM2OE_SIZE                      equ 0004h
PWM2AOE_PWM2OE_LENGTH                    equ 0004h
PWM2AOE_PWM2OE_MASK                      equ 000Fh
PWM2AOE_PWM2OE0_POSN                     equ 0000h
PWM2AOE_PWM2OE0_POSITION                 equ 0000h
PWM2AOE_PWM2OE0_SIZE                     equ 0001h
PWM2AOE_PWM2OE0_LENGTH                   equ 0001h
PWM2AOE_PWM2OE0_MASK                     equ 0001h
PWM2AOE_PWM2OE1_POSN                     equ 0001h
PWM2AOE_PWM2OE1_POSITION                 equ 0001h
PWM2AOE_PWM2OE1_SIZE                     equ 0001h
PWM2AOE_PWM2OE1_LENGTH                   equ 0001h
PWM2AOE_PWM2OE1_MASK                     equ 0002h
PWM2AOE_PWM2OE2_POSN                     equ 0002h
PWM2AOE_PWM2OE2_POSITION                 equ 0002h
PWM2AOE_PWM2OE2_SIZE                     equ 0001h
PWM2AOE_PWM2OE2_LENGTH                   equ 0001h
PWM2AOE_PWM2OE2_MASK                     equ 0004h
PWM2AOE_PWM2OE3_POSN                     equ 0003h
PWM2AOE_PWM2OE3_POSITION                 equ 0003h
PWM2AOE_PWM2OE3_SIZE                     equ 0001h
PWM2AOE_PWM2OE3_LENGTH                   equ 0001h
PWM2AOE_PWM2OE3_MASK                     equ 0008h

// Register: ADCTX
#define ADCTX ADCTX
ADCTX                                    equ 0691h
// bitfield definitions
ADCTX_A1TX0_POSN                         equ 0000h
ADCTX_A1TX0_POSITION                     equ 0000h
ADCTX_A1TX0_SIZE                         equ 0001h
ADCTX_A1TX0_LENGTH                       equ 0001h
ADCTX_A1TX0_MASK                         equ 0001h
ADCTX_A1TX1_POSN                         equ 0001h
ADCTX_A1TX1_POSITION                     equ 0001h
ADCTX_A1TX1_SIZE                         equ 0001h
ADCTX_A1TX1_LENGTH                       equ 0001h
ADCTX_A1TX1_MASK                         equ 0002h
ADCTX_A1TX2_POSN                         equ 0002h
ADCTX_A1TX2_POSITION                     equ 0002h
ADCTX_A1TX2_SIZE                         equ 0001h
ADCTX_A1TX2_LENGTH                       equ 0001h
ADCTX_A1TX2_MASK                         equ 0004h
ADCTX_A2TX0_POSN                         equ 0004h
ADCTX_A2TX0_POSITION                     equ 0004h
ADCTX_A2TX0_SIZE                         equ 0001h
ADCTX_A2TX0_LENGTH                       equ 0001h
ADCTX_A2TX0_MASK                         equ 0010h
ADCTX_A2TX1_POSN                         equ 0005h
ADCTX_A2TX1_POSITION                     equ 0005h
ADCTX_A2TX1_SIZE                         equ 0001h
ADCTX_A2TX1_LENGTH                       equ 0001h
ADCTX_A2TX1_MASK                         equ 0020h
ADCTX_A2TX2_POSN                         equ 0006h
ADCTX_A2TX2_POSITION                     equ 0006h
ADCTX_A2TX2_SIZE                         equ 0001h
ADCTX_A2TX2_LENGTH                       equ 0001h
ADCTX_A2TX2_MASK                         equ 0040h

// Register: AD1TX0
#define AD1TX0 AD1TX0
AD1TX0                                   equ 0692h
// bitfield definitions
AD1TX0_TX10_POSN                         equ 0000h
AD1TX0_TX10_POSITION                     equ 0000h
AD1TX0_TX10_SIZE                         equ 0001h
AD1TX0_TX10_LENGTH                       equ 0001h
AD1TX0_TX10_MASK                         equ 0001h
AD1TX0_TX11_POSN                         equ 0001h
AD1TX0_TX11_POSITION                     equ 0001h
AD1TX0_TX11_SIZE                         equ 0001h
AD1TX0_TX11_LENGTH                       equ 0001h
AD1TX0_TX11_MASK                         equ 0002h
AD1TX0_TX12_POSN                         equ 0002h
AD1TX0_TX12_POSITION                     equ 0002h
AD1TX0_TX12_SIZE                         equ 0001h
AD1TX0_TX12_LENGTH                       equ 0001h
AD1TX0_TX12_MASK                         equ 0004h
AD1TX0_TX13_POSN                         equ 0003h
AD1TX0_TX13_POSITION                     equ 0003h
AD1TX0_TX13_SIZE                         equ 0001h
AD1TX0_TX13_LENGTH                       equ 0001h
AD1TX0_TX13_MASK                         equ 0008h
AD1TX0_TX14_POSN                         equ 0004h
AD1TX0_TX14_POSITION                     equ 0004h
AD1TX0_TX14_SIZE                         equ 0001h
AD1TX0_TX14_LENGTH                       equ 0001h
AD1TX0_TX14_MASK                         equ 0010h
AD1TX0_TX15_POSN                         equ 0005h
AD1TX0_TX15_POSITION                     equ 0005h
AD1TX0_TX15_SIZE                         equ 0001h
AD1TX0_TX15_LENGTH                       equ 0001h
AD1TX0_TX15_MASK                         equ 0020h
AD1TX0_TX16_POSN                         equ 0006h
AD1TX0_TX16_POSITION                     equ 0006h
AD1TX0_TX16_SIZE                         equ 0001h
AD1TX0_TX16_LENGTH                       equ 0001h
AD1TX0_TX16_MASK                         equ 0040h
AD1TX0_TX17_POSN                         equ 0007h
AD1TX0_TX17_POSITION                     equ 0007h
AD1TX0_TX17_SIZE                         equ 0001h
AD1TX0_TX17_LENGTH                       equ 0001h
AD1TX0_TX17_MASK                         equ 0080h

// Register: AD1TX1
#define AD1TX1 AD1TX1
AD1TX1                                   equ 0693h
// bitfield definitions
AD1TX1_TX18_POSN                         equ 0000h
AD1TX1_TX18_POSITION                     equ 0000h
AD1TX1_TX18_SIZE                         equ 0001h
AD1TX1_TX18_LENGTH                       equ 0001h
AD1TX1_TX18_MASK                         equ 0001h
AD1TX1_TX19_POSN                         equ 0001h
AD1TX1_TX19_POSITION                     equ 0001h
AD1TX1_TX19_SIZE                         equ 0001h
AD1TX1_TX19_LENGTH                       equ 0001h
AD1TX1_TX19_MASK                         equ 0002h

// Register: AD2TX0
#define AD2TX0 AD2TX0
AD2TX0                                   equ 0694h
// bitfield definitions
AD2TX0_TX20_POSN                         equ 0000h
AD2TX0_TX20_POSITION                     equ 0000h
AD2TX0_TX20_SIZE                         equ 0001h
AD2TX0_TX20_LENGTH                       equ 0001h
AD2TX0_TX20_MASK                         equ 0001h
AD2TX0_TX21_POSN                         equ 0001h
AD2TX0_TX21_POSITION                     equ 0001h
AD2TX0_TX21_SIZE                         equ 0001h
AD2TX0_TX21_LENGTH                       equ 0001h
AD2TX0_TX21_MASK                         equ 0002h
AD2TX0_TX22_POSN                         equ 0002h
AD2TX0_TX22_POSITION                     equ 0002h
AD2TX0_TX22_SIZE                         equ 0001h
AD2TX0_TX22_LENGTH                       equ 0001h
AD2TX0_TX22_MASK                         equ 0004h
AD2TX0_TX23_POSN                         equ 0003h
AD2TX0_TX23_POSITION                     equ 0003h
AD2TX0_TX23_SIZE                         equ 0001h
AD2TX0_TX23_LENGTH                       equ 0001h
AD2TX0_TX23_MASK                         equ 0008h
AD2TX0_TX24_POSN                         equ 0004h
AD2TX0_TX24_POSITION                     equ 0004h
AD2TX0_TX24_SIZE                         equ 0001h
AD2TX0_TX24_LENGTH                       equ 0001h
AD2TX0_TX24_MASK                         equ 0010h
AD2TX0_TX25_POSN                         equ 0005h
AD2TX0_TX25_POSITION                     equ 0005h
AD2TX0_TX25_SIZE                         equ 0001h
AD2TX0_TX25_LENGTH                       equ 0001h
AD2TX0_TX25_MASK                         equ 0020h
AD2TX0_TX26_POSN                         equ 0006h
AD2TX0_TX26_POSITION                     equ 0006h
AD2TX0_TX26_SIZE                         equ 0001h
AD2TX0_TX26_LENGTH                       equ 0001h
AD2TX0_TX26_MASK                         equ 0040h
AD2TX0_TX27_POSN                         equ 0007h
AD2TX0_TX27_POSITION                     equ 0007h
AD2TX0_TX27_SIZE                         equ 0001h
AD2TX0_TX27_LENGTH                       equ 0001h
AD2TX0_TX27_MASK                         equ 0080h

// Register: AD2TX1
#define AD2TX1 AD2TX1
AD2TX1                                   equ 0695h
// bitfield definitions
AD2TX1_TX28_POSN                         equ 0000h
AD2TX1_TX28_POSITION                     equ 0000h
AD2TX1_TX28_SIZE                         equ 0001h
AD2TX1_TX28_LENGTH                       equ 0001h
AD2TX1_TX28_MASK                         equ 0001h
AD2TX1_TX29_POSN                         equ 0001h
AD2TX1_TX29_POSITION                     equ 0001h
AD2TX1_TX29_SIZE                         equ 0001h
AD2TX1_TX29_LENGTH                       equ 0001h
AD2TX1_TX29_MASK                         equ 0002h
AD2TX1_TX40_POSN                         equ 0002h
AD2TX1_TX40_POSITION                     equ 0002h
AD2TX1_TX40_SIZE                         equ 0001h
AD2TX1_TX40_LENGTH                       equ 0001h
AD2TX1_TX40_MASK                         equ 0004h

// Register: AD1CON0
#define AD1CON0 AD1CON0
AD1CON0                                  equ 0711h
// bitfield definitions
AD1CON0_ADON_POSN                        equ 0000h
AD1CON0_ADON_POSITION                    equ 0000h
AD1CON0_ADON_SIZE                        equ 0001h
AD1CON0_ADON_LENGTH                      equ 0001h
AD1CON0_ADON_MASK                        equ 0001h
AD1CON0_GO_POSN                          equ 0001h
AD1CON0_GO_POSITION                      equ 0001h
AD1CON0_GO_SIZE                          equ 0001h
AD1CON0_GO_LENGTH                        equ 0001h
AD1CON0_GO_MASK                          equ 0002h
AD1CON0_CHS_POSN                         equ 0002h
AD1CON0_CHS_POSITION                     equ 0002h
AD1CON0_CHS_SIZE                         equ 0006h
AD1CON0_CHS_LENGTH                       equ 0006h
AD1CON0_CHS_MASK                         equ 00FCh
AD1CON0_AD1ON_POSN                       equ 0000h
AD1CON0_AD1ON_POSITION                   equ 0000h
AD1CON0_AD1ON_SIZE                       equ 0001h
AD1CON0_AD1ON_LENGTH                     equ 0001h
AD1CON0_AD1ON_MASK                       equ 0001h
AD1CON0_GO_nDONE_POSN                    equ 0001h
AD1CON0_GO_nDONE_POSITION                equ 0001h
AD1CON0_GO_nDONE_SIZE                    equ 0001h
AD1CON0_GO_nDONE_LENGTH                  equ 0001h
AD1CON0_GO_nDONE_MASK                    equ 0002h
AD1CON0_CHS0_POSN                        equ 0002h
AD1CON0_CHS0_POSITION                    equ 0002h
AD1CON0_CHS0_SIZE                        equ 0001h
AD1CON0_CHS0_LENGTH                      equ 0001h
AD1CON0_CHS0_MASK                        equ 0004h
AD1CON0_CHS1_POSN                        equ 0003h
AD1CON0_CHS1_POSITION                    equ 0003h
AD1CON0_CHS1_SIZE                        equ 0001h
AD1CON0_CHS1_LENGTH                      equ 0001h
AD1CON0_CHS1_MASK                        equ 0008h
AD1CON0_CHS2_POSN                        equ 0004h
AD1CON0_CHS2_POSITION                    equ 0004h
AD1CON0_CHS2_SIZE                        equ 0001h
AD1CON0_CHS2_LENGTH                      equ 0001h
AD1CON0_CHS2_MASK                        equ 0010h
AD1CON0_CHS3_POSN                        equ 0005h
AD1CON0_CHS3_POSITION                    equ 0005h
AD1CON0_CHS3_SIZE                        equ 0001h
AD1CON0_CHS3_LENGTH                      equ 0001h
AD1CON0_CHS3_MASK                        equ 0020h
AD1CON0_CHS4_POSN                        equ 0006h
AD1CON0_CHS4_POSITION                    equ 0006h
AD1CON0_CHS4_SIZE                        equ 0001h
AD1CON0_CHS4_LENGTH                      equ 0001h
AD1CON0_CHS4_MASK                        equ 0040h
AD1CON0_CHS5_POSN                        equ 0007h
AD1CON0_CHS5_POSITION                    equ 0007h
AD1CON0_CHS5_SIZE                        equ 0001h
AD1CON0_CHS5_LENGTH                      equ 0001h
AD1CON0_CHS5_MASK                        equ 0080h
AD1CON0_GO_nDONE1_POSN                   equ 0001h
AD1CON0_GO_nDONE1_POSITION               equ 0001h
AD1CON0_GO_nDONE1_SIZE                   equ 0001h
AD1CON0_GO_nDONE1_LENGTH                 equ 0001h
AD1CON0_GO_nDONE1_MASK                   equ 0002h

// Register: ADCOMCON
#define ADCOMCON ADCOMCON
ADCOMCON                                 equ 0712h
// bitfield definitions
ADCOMCON_ADPREF_POSN                     equ 0000h
ADCOMCON_ADPREF_POSITION                 equ 0000h
ADCOMCON_ADPREF_SIZE                     equ 0002h
ADCOMCON_ADPREF_LENGTH                   equ 0002h
ADCOMCON_ADPREF_MASK                     equ 0003h
ADCOMCON_GO_nDONE_ALL_POSN               equ 0002h
ADCOMCON_GO_nDONE_ALL_POSITION           equ 0002h
ADCOMCON_GO_nDONE_ALL_SIZE               equ 0001h
ADCOMCON_GO_nDONE_ALL_LENGTH             equ 0001h
ADCOMCON_GO_nDONE_ALL_MASK               equ 0004h
ADCOMCON_ADNREF_POSN                     equ 0003h
ADCOMCON_ADNREF_POSITION                 equ 0003h
ADCOMCON_ADNREF_SIZE                     equ 0001h
ADCOMCON_ADNREF_LENGTH                   equ 0001h
ADCOMCON_ADNREF_MASK                     equ 0008h
ADCOMCON_ADCS_POSN                       equ 0004h
ADCOMCON_ADCS_POSITION                   equ 0004h
ADCOMCON_ADCS_SIZE                       equ 0003h
ADCOMCON_ADCS_LENGTH                     equ 0003h
ADCOMCON_ADCS_MASK                       equ 0070h
ADCOMCON_ADFM_POSN                       equ 0007h
ADCOMCON_ADFM_POSITION                   equ 0007h
ADCOMCON_ADFM_SIZE                       equ 0001h
ADCOMCON_ADFM_LENGTH                     equ 0001h
ADCOMCON_ADFM_MASK                       equ 0080h
ADCOMCON_ADPREF0_POSN                    equ 0000h
ADCOMCON_ADPREF0_POSITION                equ 0000h
ADCOMCON_ADPREF0_SIZE                    equ 0001h
ADCOMCON_ADPREF0_LENGTH                  equ 0001h
ADCOMCON_ADPREF0_MASK                    equ 0001h
ADCOMCON_ADPREF1_POSN                    equ 0001h
ADCOMCON_ADPREF1_POSITION                equ 0001h
ADCOMCON_ADPREF1_SIZE                    equ 0001h
ADCOMCON_ADPREF1_LENGTH                  equ 0001h
ADCOMCON_ADPREF1_MASK                    equ 0002h
ADCOMCON_GO_ALL_POSN                     equ 0002h
ADCOMCON_GO_ALL_POSITION                 equ 0002h
ADCOMCON_GO_ALL_SIZE                     equ 0001h
ADCOMCON_GO_ALL_LENGTH                   equ 0001h
ADCOMCON_GO_ALL_MASK                     equ 0004h
ADCOMCON_ADCS0_POSN                      equ 0004h
ADCOMCON_ADCS0_POSITION                  equ 0004h
ADCOMCON_ADCS0_SIZE                      equ 0001h
ADCOMCON_ADCS0_LENGTH                    equ 0001h
ADCOMCON_ADCS0_MASK                      equ 0010h
ADCOMCON_ADCS1_POSN                      equ 0005h
ADCOMCON_ADCS1_POSITION                  equ 0005h
ADCOMCON_ADCS1_SIZE                      equ 0001h
ADCOMCON_ADCS1_LENGTH                    equ 0001h
ADCOMCON_ADCS1_MASK                      equ 0020h
ADCOMCON_ADCS2_POSN                      equ 0006h
ADCOMCON_ADCS2_POSITION                  equ 0006h
ADCOMCON_ADCS2_SIZE                      equ 0001h
ADCOMCON_ADCS2_LENGTH                    equ 0001h
ADCOMCON_ADCS2_MASK                      equ 0040h

// Register: AD1CON2
#define AD1CON2 AD1CON2
AD1CON2                                  equ 0713h
// bitfield definitions
AD1CON2_TRIGSEL_POSN                     equ 0004h
AD1CON2_TRIGSEL_POSITION                 equ 0004h
AD1CON2_TRIGSEL_SIZE                     equ 0003h
AD1CON2_TRIGSEL_LENGTH                   equ 0003h
AD1CON2_TRIGSEL_MASK                     equ 0070h
AD1CON2_TRIGSEL0_POSN                    equ 0004h
AD1CON2_TRIGSEL0_POSITION                equ 0004h
AD1CON2_TRIGSEL0_SIZE                    equ 0001h
AD1CON2_TRIGSEL0_LENGTH                  equ 0001h
AD1CON2_TRIGSEL0_MASK                    equ 0010h
AD1CON2_TRIGSEL1_POSN                    equ 0005h
AD1CON2_TRIGSEL1_POSITION                equ 0005h
AD1CON2_TRIGSEL1_SIZE                    equ 0001h
AD1CON2_TRIGSEL1_LENGTH                  equ 0001h
AD1CON2_TRIGSEL1_MASK                    equ 0020h
AD1CON2_TRIGSEL2_POSN                    equ 0006h
AD1CON2_TRIGSEL2_POSITION                equ 0006h
AD1CON2_TRIGSEL2_SIZE                    equ 0001h
AD1CON2_TRIGSEL2_LENGTH                  equ 0001h
AD1CON2_TRIGSEL2_MASK                    equ 0040h

// Register: AD1CON3
#define AD1CON3 AD1CON3
AD1CON3                                  equ 0714h
// bitfield definitions
AD1CON3_AD1DSEN_POSN                     equ 0000h
AD1CON3_AD1DSEN_POSITION                 equ 0000h
AD1CON3_AD1DSEN_SIZE                     equ 0001h
AD1CON3_AD1DSEN_LENGTH                   equ 0001h
AD1CON3_AD1DSEN_MASK                     equ 0001h
AD1CON3_AD1IPEN_POSN                     equ 0001h
AD1CON3_AD1IPEN_POSITION                 equ 0001h
AD1CON3_AD1IPEN_SIZE                     equ 0001h
AD1CON3_AD1IPEN_LENGTH                   equ 0001h
AD1CON3_AD1IPEN_MASK                     equ 0002h
AD1CON3_AD1IPPOL_POSN                    equ 0006h
AD1CON3_AD1IPPOL_POSITION                equ 0006h
AD1CON3_AD1IPPOL_SIZE                    equ 0001h
AD1CON3_AD1IPPOL_LENGTH                  equ 0001h
AD1CON3_AD1IPPOL_MASK                    equ 0040h
AD1CON3_AD1EPPOL_POSN                    equ 0007h
AD1CON3_AD1EPPOL_POSITION                equ 0007h
AD1CON3_AD1EPPOL_SIZE                    equ 0001h
AD1CON3_AD1EPPOL_LENGTH                  equ 0001h
AD1CON3_AD1EPPOL_MASK                    equ 0080h
AD1CON3_ADDSEN_POSN                      equ 0000h
AD1CON3_ADDSEN_POSITION                  equ 0000h
AD1CON3_ADDSEN_SIZE                      equ 0001h
AD1CON3_ADDSEN_LENGTH                    equ 0001h
AD1CON3_ADDSEN_MASK                      equ 0001h
AD1CON3_ADIPEN_POSN                      equ 0001h
AD1CON3_ADIPEN_POSITION                  equ 0001h
AD1CON3_ADIPEN_SIZE                      equ 0001h
AD1CON3_ADIPEN_LENGTH                    equ 0001h
AD1CON3_ADIPEN_MASK                      equ 0002h
AD1CON3_ADIPPOL_POSN                     equ 0006h
AD1CON3_ADIPPOL_POSITION                 equ 0006h
AD1CON3_ADIPPOL_SIZE                     equ 0001h
AD1CON3_ADIPPOL_LENGTH                   equ 0001h
AD1CON3_ADIPPOL_MASK                     equ 0040h
AD1CON3_ADEPPOL_POSN                     equ 0007h
AD1CON3_ADEPPOL_POSITION                 equ 0007h
AD1CON3_ADEPPOL_SIZE                     equ 0001h
AD1CON3_ADEPPOL_LENGTH                   equ 0001h
AD1CON3_ADEPPOL_MASK                     equ 0080h

// Register: ADSTAT
#define ADSTAT ADSTAT
ADSTAT                                   equ 0715h
// bitfield definitions
ADSTAT_AD1STG_POSN                       equ 0000h
ADSTAT_AD1STG_POSITION                   equ 0000h
ADSTAT_AD1STG_SIZE                       equ 0002h
ADSTAT_AD1STG_LENGTH                     equ 0002h
ADSTAT_AD1STG_MASK                       equ 0003h
ADSTAT_AD1CONV_POSN                      equ 0002h
ADSTAT_AD1CONV_POSITION                  equ 0002h
ADSTAT_AD1CONV_SIZE                      equ 0001h
ADSTAT_AD1CONV_LENGTH                    equ 0001h
ADSTAT_AD1CONV_MASK                      equ 0004h
ADSTAT_AD2STG_POSN                       equ 0004h
ADSTAT_AD2STG_POSITION                   equ 0004h
ADSTAT_AD2STG_SIZE                       equ 0002h
ADSTAT_AD2STG_LENGTH                     equ 0002h
ADSTAT_AD2STG_MASK                       equ 0030h
ADSTAT_AD2CONV_POSN                      equ 0006h
ADSTAT_AD2CONV_POSITION                  equ 0006h
ADSTAT_AD2CONV_SIZE                      equ 0001h
ADSTAT_AD2CONV_LENGTH                    equ 0001h
ADSTAT_AD2CONV_MASK                      equ 0040h
ADSTAT_ADSTG_POSN                        equ 0000h
ADSTAT_ADSTG_POSITION                    equ 0000h
ADSTAT_ADSTG_SIZE                        equ 0002h
ADSTAT_ADSTG_LENGTH                      equ 0002h
ADSTAT_ADSTG_MASK                        equ 0003h
ADSTAT_ADCONV_POSN                       equ 0002h
ADSTAT_ADCONV_POSITION                   equ 0002h
ADSTAT_ADCONV_SIZE                       equ 0001h
ADSTAT_ADCONV_LENGTH                     equ 0001h
ADSTAT_ADCONV_MASK                       equ 0004h
ADSTAT_AD1STG0_POSN                      equ 0000h
ADSTAT_AD1STG0_POSITION                  equ 0000h
ADSTAT_AD1STG0_SIZE                      equ 0001h
ADSTAT_AD1STG0_LENGTH                    equ 0001h
ADSTAT_AD1STG0_MASK                      equ 0001h
ADSTAT_AD1STG1_POSN                      equ 0001h
ADSTAT_AD1STG1_POSITION                  equ 0001h
ADSTAT_AD1STG1_SIZE                      equ 0001h
ADSTAT_AD1STG1_LENGTH                    equ 0001h
ADSTAT_AD1STG1_MASK                      equ 0002h
ADSTAT_AD2STG0_POSN                      equ 0004h
ADSTAT_AD2STG0_POSITION                  equ 0004h
ADSTAT_AD2STG0_SIZE                      equ 0001h
ADSTAT_AD2STG0_LENGTH                    equ 0001h
ADSTAT_AD2STG0_MASK                      equ 0010h
ADSTAT_AD2STG1_POSN                      equ 0005h
ADSTAT_AD2STG1_POSITION                  equ 0005h
ADSTAT_AD2STG1_SIZE                      equ 0001h
ADSTAT_AD2STG1_LENGTH                    equ 0001h
ADSTAT_AD2STG1_MASK                      equ 0020h

// Register: AD1PRECON
#define AD1PRECON AD1PRECON
AD1PRECON                                equ 0716h
// bitfield definitions
AD1PRECON_ADPRE_POSN                     equ 0000h
AD1PRECON_ADPRE_POSITION                 equ 0000h
AD1PRECON_ADPRE_SIZE                     equ 0007h
AD1PRECON_ADPRE_LENGTH                   equ 0007h
AD1PRECON_ADPRE_MASK                     equ 007Fh
AD1PRECON_ADPRE0_POSN                    equ 0000h
AD1PRECON_ADPRE0_POSITION                equ 0000h
AD1PRECON_ADPRE0_SIZE                    equ 0001h
AD1PRECON_ADPRE0_LENGTH                  equ 0001h
AD1PRECON_ADPRE0_MASK                    equ 0001h
AD1PRECON_ADPRE1_POSN                    equ 0001h
AD1PRECON_ADPRE1_POSITION                equ 0001h
AD1PRECON_ADPRE1_SIZE                    equ 0001h
AD1PRECON_ADPRE1_LENGTH                  equ 0001h
AD1PRECON_ADPRE1_MASK                    equ 0002h
AD1PRECON_ADPRE2_POSN                    equ 0002h
AD1PRECON_ADPRE2_POSITION                equ 0002h
AD1PRECON_ADPRE2_SIZE                    equ 0001h
AD1PRECON_ADPRE2_LENGTH                  equ 0001h
AD1PRECON_ADPRE2_MASK                    equ 0004h
AD1PRECON_ADPRE3_POSN                    equ 0003h
AD1PRECON_ADPRE3_POSITION                equ 0003h
AD1PRECON_ADPRE3_SIZE                    equ 0001h
AD1PRECON_ADPRE3_LENGTH                  equ 0001h
AD1PRECON_ADPRE3_MASK                    equ 0008h
AD1PRECON_ADPRE4_POSN                    equ 0004h
AD1PRECON_ADPRE4_POSITION                equ 0004h
AD1PRECON_ADPRE4_SIZE                    equ 0001h
AD1PRECON_ADPRE4_LENGTH                  equ 0001h
AD1PRECON_ADPRE4_MASK                    equ 0010h
AD1PRECON_ADPRE5_POSN                    equ 0005h
AD1PRECON_ADPRE5_POSITION                equ 0005h
AD1PRECON_ADPRE5_SIZE                    equ 0001h
AD1PRECON_ADPRE5_LENGTH                  equ 0001h
AD1PRECON_ADPRE5_MASK                    equ 0020h
AD1PRECON_ADPRE6_POSN                    equ 0006h
AD1PRECON_ADPRE6_POSITION                equ 0006h
AD1PRECON_ADPRE6_SIZE                    equ 0001h
AD1PRECON_ADPRE6_LENGTH                  equ 0001h
AD1PRECON_ADPRE6_MASK                    equ 0040h

// Register: AD1ACQCON
#define AD1ACQCON AD1ACQCON
AD1ACQCON                                equ 0717h
// bitfield definitions
AD1ACQCON_ADACQ_POSN                     equ 0000h
AD1ACQCON_ADACQ_POSITION                 equ 0000h
AD1ACQCON_ADACQ_SIZE                     equ 0007h
AD1ACQCON_ADACQ_LENGTH                   equ 0007h
AD1ACQCON_ADACQ_MASK                     equ 007Fh
AD1ACQCON_ADACQ0_POSN                    equ 0000h
AD1ACQCON_ADACQ0_POSITION                equ 0000h
AD1ACQCON_ADACQ0_SIZE                    equ 0001h
AD1ACQCON_ADACQ0_LENGTH                  equ 0001h
AD1ACQCON_ADACQ0_MASK                    equ 0001h
AD1ACQCON_ADACQ1_POSN                    equ 0001h
AD1ACQCON_ADACQ1_POSITION                equ 0001h
AD1ACQCON_ADACQ1_SIZE                    equ 0001h
AD1ACQCON_ADACQ1_LENGTH                  equ 0001h
AD1ACQCON_ADACQ1_MASK                    equ 0002h
AD1ACQCON_ADACQ2_POSN                    equ 0002h
AD1ACQCON_ADACQ2_POSITION                equ 0002h
AD1ACQCON_ADACQ2_SIZE                    equ 0001h
AD1ACQCON_ADACQ2_LENGTH                  equ 0001h
AD1ACQCON_ADACQ2_MASK                    equ 0004h
AD1ACQCON_ADACQ3_POSN                    equ 0003h
AD1ACQCON_ADACQ3_POSITION                equ 0003h
AD1ACQCON_ADACQ3_SIZE                    equ 0001h
AD1ACQCON_ADACQ3_LENGTH                  equ 0001h
AD1ACQCON_ADACQ3_MASK                    equ 0008h
AD1ACQCON_ADACQ4_POSN                    equ 0004h
AD1ACQCON_ADACQ4_POSITION                equ 0004h
AD1ACQCON_ADACQ4_SIZE                    equ 0001h
AD1ACQCON_ADACQ4_LENGTH                  equ 0001h
AD1ACQCON_ADACQ4_MASK                    equ 0010h
AD1ACQCON_ADACQ5_POSN                    equ 0005h
AD1ACQCON_ADACQ5_POSITION                equ 0005h
AD1ACQCON_ADACQ5_SIZE                    equ 0001h
AD1ACQCON_ADACQ5_LENGTH                  equ 0001h
AD1ACQCON_ADACQ5_MASK                    equ 0020h
AD1ACQCON_ADACQ6_POSN                    equ 0006h
AD1ACQCON_ADACQ6_POSITION                equ 0006h
AD1ACQCON_ADACQ6_SIZE                    equ 0001h
AD1ACQCON_ADACQ6_LENGTH                  equ 0001h
AD1ACQCON_ADACQ6_MASK                    equ 0040h

// Register: AD1GRD
#define AD1GRD AD1GRD
AD1GRD                                   equ 0718h
// bitfield definitions
AD1GRD_TX1POL_POSN                       equ 0000h
AD1GRD_TX1POL_POSITION                   equ 0000h
AD1GRD_TX1POL_SIZE                       equ 0001h
AD1GRD_TX1POL_LENGTH                     equ 0001h
AD1GRD_TX1POL_MASK                       equ 0001h
AD1GRD_GRD1POL_POSN                      equ 0005h
AD1GRD_GRD1POL_POSITION                  equ 0005h
AD1GRD_GRD1POL_SIZE                      equ 0001h
AD1GRD_GRD1POL_LENGTH                    equ 0001h
AD1GRD_GRD1POL_MASK                      equ 0020h
AD1GRD_GRD1AOE_POSN                      equ 0006h
AD1GRD_GRD1AOE_POSITION                  equ 0006h
AD1GRD_GRD1AOE_SIZE                      equ 0001h
AD1GRD_GRD1AOE_LENGTH                    equ 0001h
AD1GRD_GRD1AOE_MASK                      equ 0040h
AD1GRD_GRD1BOE_POSN                      equ 0007h
AD1GRD_GRD1BOE_POSITION                  equ 0007h
AD1GRD_GRD1BOE_SIZE                      equ 0001h
AD1GRD_GRD1BOE_LENGTH                    equ 0001h
AD1GRD_GRD1BOE_MASK                      equ 0080h
AD1GRD_TXPOL_POSN                        equ 0000h
AD1GRD_TXPOL_POSITION                    equ 0000h
AD1GRD_TXPOL_SIZE                        equ 0001h
AD1GRD_TXPOL_LENGTH                      equ 0001h
AD1GRD_TXPOL_MASK                        equ 0001h
AD1GRD_GRDPOL_POSN                       equ 0005h
AD1GRD_GRDPOL_POSITION                   equ 0005h
AD1GRD_GRDPOL_SIZE                       equ 0001h
AD1GRD_GRDPOL_LENGTH                     equ 0001h
AD1GRD_GRDPOL_MASK                       equ 0020h
AD1GRD_GRDAOE_POSN                       equ 0006h
AD1GRD_GRDAOE_POSITION                   equ 0006h
AD1GRD_GRDAOE_SIZE                       equ 0001h
AD1GRD_GRDAOE_LENGTH                     equ 0001h
AD1GRD_GRDAOE_MASK                       equ 0040h
AD1GRD_GRDBOE_POSN                       equ 0007h
AD1GRD_GRDBOE_POSITION                   equ 0007h
AD1GRD_GRDBOE_SIZE                       equ 0001h
AD1GRD_GRDBOE_LENGTH                     equ 0001h
AD1GRD_GRDBOE_MASK                       equ 0080h

// Register: AD1CAPCON
#define AD1CAPCON AD1CAPCON
AD1CAPCON                                equ 0719h
// bitfield definitions
AD1CAPCON_ADDCAP_POSN                    equ 0000h
AD1CAPCON_ADDCAP_POSITION                equ 0000h
AD1CAPCON_ADDCAP_SIZE                    equ 0004h
AD1CAPCON_ADDCAP_LENGTH                  equ 0004h
AD1CAPCON_ADDCAP_MASK                    equ 000Fh
AD1CAPCON_ADCAP_POSN                     equ 0000h
AD1CAPCON_ADCAP_POSITION                 equ 0000h
AD1CAPCON_ADCAP_SIZE                     equ 0004h
AD1CAPCON_ADCAP_LENGTH                   equ 0004h
AD1CAPCON_ADCAP_MASK                     equ 000Fh
AD1CAPCON_ADDCAP0_POSN                   equ 0000h
AD1CAPCON_ADDCAP0_POSITION               equ 0000h
AD1CAPCON_ADDCAP0_SIZE                   equ 0001h
AD1CAPCON_ADDCAP0_LENGTH                 equ 0001h
AD1CAPCON_ADDCAP0_MASK                   equ 0001h
AD1CAPCON_ADDCAP1_POSN                   equ 0001h
AD1CAPCON_ADDCAP1_POSITION               equ 0001h
AD1CAPCON_ADDCAP1_SIZE                   equ 0001h
AD1CAPCON_ADDCAP1_LENGTH                 equ 0001h
AD1CAPCON_ADDCAP1_MASK                   equ 0002h
AD1CAPCON_ADDCAP2_POSN                   equ 0002h
AD1CAPCON_ADDCAP2_POSITION               equ 0002h
AD1CAPCON_ADDCAP2_SIZE                   equ 0001h
AD1CAPCON_ADDCAP2_LENGTH                 equ 0001h
AD1CAPCON_ADDCAP2_MASK                   equ 0004h
AD1CAPCON_ADDCAP3_POSN                   equ 0003h
AD1CAPCON_ADDCAP3_POSITION               equ 0003h
AD1CAPCON_ADDCAP3_SIZE                   equ 0001h
AD1CAPCON_ADDCAP3_LENGTH                 equ 0001h
AD1CAPCON_ADDCAP3_MASK                   equ 0008h
AD1CAPCON_ADD1CAP_POSN                   equ 0000h
AD1CAPCON_ADD1CAP_POSITION               equ 0000h
AD1CAPCON_ADD1CAP_SIZE                   equ 0004h
AD1CAPCON_ADD1CAP_LENGTH                 equ 0004h
AD1CAPCON_ADD1CAP_MASK                   equ 000Fh

// Register: AAD1RES0L
#define AAD1RES0L AAD1RES0L
AAD1RES0L                                equ 071Ah
// bitfield definitions
AAD1RES0L_ADRESL_POSN                    equ 0000h
AAD1RES0L_ADRESL_POSITION                equ 0000h
AAD1RES0L_ADRESL_SIZE                    equ 0008h
AAD1RES0L_ADRESL_LENGTH                  equ 0008h
AAD1RES0L_ADRESL_MASK                    equ 00FFh

// Register: AAD1RES0H
#define AAD1RES0H AAD1RES0H
AAD1RES0H                                equ 071Bh
// bitfield definitions
AAD1RES0H_ADRESH_POSN                    equ 0000h
AAD1RES0H_ADRESH_POSITION                equ 0000h
AAD1RES0H_ADRESH_SIZE                    equ 0008h
AAD1RES0H_ADRESH_LENGTH                  equ 0008h
AAD1RES0H_ADRESH_MASK                    equ 00FFh

// Register: AAD1RES1L
#define AAD1RES1L AAD1RES1L
AAD1RES1L                                equ 071Ch
// bitfield definitions
AAD1RES1L_ADRESL_POSN                    equ 0000h
AAD1RES1L_ADRESL_POSITION                equ 0000h
AAD1RES1L_ADRESL_SIZE                    equ 0008h
AAD1RES1L_ADRESL_LENGTH                  equ 0008h
AAD1RES1L_ADRESL_MASK                    equ 00FFh

// Register: AAD1RES1H
#define AAD1RES1H AAD1RES1H
AAD1RES1H                                equ 071Dh
// bitfield definitions
AAD1RES1H_ADRESH_POSN                    equ 0000h
AAD1RES1H_ADRESH_POSITION                equ 0000h
AAD1RES1H_ADRESH_SIZE                    equ 0008h
AAD1RES1H_ADRESH_LENGTH                  equ 0008h
AAD1RES1H_ADRESH_MASK                    equ 00FFh

// Register: AD1CH0
#define AD1CH0 AD1CH0
AD1CH0                                   equ 071Eh
// bitfield definitions
AD1CH0_CH10_POSN                         equ 0000h
AD1CH0_CH10_POSITION                     equ 0000h
AD1CH0_CH10_SIZE                         equ 0001h
AD1CH0_CH10_LENGTH                       equ 0001h
AD1CH0_CH10_MASK                         equ 0001h
AD1CH0_CH11_POSN                         equ 0001h
AD1CH0_CH11_POSITION                     equ 0001h
AD1CH0_CH11_SIZE                         equ 0001h
AD1CH0_CH11_LENGTH                       equ 0001h
AD1CH0_CH11_MASK                         equ 0002h
AD1CH0_CH12_POSN                         equ 0002h
AD1CH0_CH12_POSITION                     equ 0002h
AD1CH0_CH12_SIZE                         equ 0001h
AD1CH0_CH12_LENGTH                       equ 0001h
AD1CH0_CH12_MASK                         equ 0004h
AD1CH0_CH13_POSN                         equ 0003h
AD1CH0_CH13_POSITION                     equ 0003h
AD1CH0_CH13_SIZE                         equ 0001h
AD1CH0_CH13_LENGTH                       equ 0001h
AD1CH0_CH13_MASK                         equ 0008h
AD1CH0_CH14_POSN                         equ 0004h
AD1CH0_CH14_POSITION                     equ 0004h
AD1CH0_CH14_SIZE                         equ 0001h
AD1CH0_CH14_LENGTH                       equ 0001h
AD1CH0_CH14_MASK                         equ 0010h
AD1CH0_CH15_POSN                         equ 0005h
AD1CH0_CH15_POSITION                     equ 0005h
AD1CH0_CH15_SIZE                         equ 0001h
AD1CH0_CH15_LENGTH                       equ 0001h
AD1CH0_CH15_MASK                         equ 0020h
AD1CH0_CH16_POSN                         equ 0006h
AD1CH0_CH16_POSITION                     equ 0006h
AD1CH0_CH16_SIZE                         equ 0001h
AD1CH0_CH16_LENGTH                       equ 0001h
AD1CH0_CH16_MASK                         equ 0040h
AD1CH0_CHS17_POSN                        equ 0007h
AD1CH0_CHS17_POSITION                    equ 0007h
AD1CH0_CHS17_SIZE                        equ 0001h
AD1CH0_CHS17_LENGTH                      equ 0001h
AD1CH0_CHS17_MASK                        equ 0080h
AD1CH0_CH17_POSN                         equ 0007h
AD1CH0_CH17_POSITION                     equ 0007h
AD1CH0_CH17_SIZE                         equ 0001h
AD1CH0_CH17_LENGTH                       equ 0001h
AD1CH0_CH17_MASK                         equ 0080h

// Register: AD1CH1
#define AD1CH1 AD1CH1
AD1CH1                                   equ 071Fh
// bitfield definitions
AD1CH1_CH18_POSN                         equ 0000h
AD1CH1_CH18_POSITION                     equ 0000h
AD1CH1_CH18_SIZE                         equ 0001h
AD1CH1_CH18_LENGTH                       equ 0001h
AD1CH1_CH18_MASK                         equ 0001h
AD1CH1_CH19_POSN                         equ 0001h
AD1CH1_CH19_POSITION                     equ 0001h
AD1CH1_CH19_SIZE                         equ 0001h
AD1CH1_CH19_LENGTH                       equ 0001h
AD1CH1_CH19_MASK                         equ 0002h

// Register: AD2CON0
#define AD2CON0 AD2CON0
AD2CON0                                  equ 0791h
// bitfield definitions
AD2CON0_ADON_POSN                        equ 0000h
AD2CON0_ADON_POSITION                    equ 0000h
AD2CON0_ADON_SIZE                        equ 0001h
AD2CON0_ADON_LENGTH                      equ 0001h
AD2CON0_ADON_MASK                        equ 0001h
AD2CON0_GO_POSN                          equ 0001h
AD2CON0_GO_POSITION                      equ 0001h
AD2CON0_GO_SIZE                          equ 0001h
AD2CON0_GO_LENGTH                        equ 0001h
AD2CON0_GO_MASK                          equ 0002h
AD2CON0_CHS_POSN                         equ 0002h
AD2CON0_CHS_POSITION                     equ 0002h
AD2CON0_CHS_SIZE                         equ 0006h
AD2CON0_CHS_LENGTH                       equ 0006h
AD2CON0_CHS_MASK                         equ 00FCh
AD2CON0_AD2ON_POSN                       equ 0000h
AD2CON0_AD2ON_POSITION                   equ 0000h
AD2CON0_AD2ON_SIZE                       equ 0001h
AD2CON0_AD2ON_LENGTH                     equ 0001h
AD2CON0_AD2ON_MASK                       equ 0001h
AD2CON0_GO_nDONE_POSN                    equ 0001h
AD2CON0_GO_nDONE_POSITION                equ 0001h
AD2CON0_GO_nDONE_SIZE                    equ 0001h
AD2CON0_GO_nDONE_LENGTH                  equ 0001h
AD2CON0_GO_nDONE_MASK                    equ 0002h
AD2CON0_CHS0_POSN                        equ 0002h
AD2CON0_CHS0_POSITION                    equ 0002h
AD2CON0_CHS0_SIZE                        equ 0001h
AD2CON0_CHS0_LENGTH                      equ 0001h
AD2CON0_CHS0_MASK                        equ 0004h
AD2CON0_CHS1_POSN                        equ 0003h
AD2CON0_CHS1_POSITION                    equ 0003h
AD2CON0_CHS1_SIZE                        equ 0001h
AD2CON0_CHS1_LENGTH                      equ 0001h
AD2CON0_CHS1_MASK                        equ 0008h
AD2CON0_CHS2_POSN                        equ 0004h
AD2CON0_CHS2_POSITION                    equ 0004h
AD2CON0_CHS2_SIZE                        equ 0001h
AD2CON0_CHS2_LENGTH                      equ 0001h
AD2CON0_CHS2_MASK                        equ 0010h
AD2CON0_CHS3_POSN                        equ 0005h
AD2CON0_CHS3_POSITION                    equ 0005h
AD2CON0_CHS3_SIZE                        equ 0001h
AD2CON0_CHS3_LENGTH                      equ 0001h
AD2CON0_CHS3_MASK                        equ 0020h
AD2CON0_CHS4_POSN                        equ 0006h
AD2CON0_CHS4_POSITION                    equ 0006h
AD2CON0_CHS4_SIZE                        equ 0001h
AD2CON0_CHS4_LENGTH                      equ 0001h
AD2CON0_CHS4_MASK                        equ 0040h
AD2CON0_CHS5_POSN                        equ 0007h
AD2CON0_CHS5_POSITION                    equ 0007h
AD2CON0_CHS5_SIZE                        equ 0001h
AD2CON0_CHS5_LENGTH                      equ 0001h
AD2CON0_CHS5_MASK                        equ 0080h
AD2CON0_GO_nDONE2_POSN                   equ 0001h
AD2CON0_GO_nDONE2_POSITION               equ 0001h
AD2CON0_GO_nDONE2_SIZE                   equ 0001h
AD2CON0_GO_nDONE2_LENGTH                 equ 0001h
AD2CON0_GO_nDONE2_MASK                   equ 0002h

// Register: AD2CON2
#define AD2CON2 AD2CON2
AD2CON2                                  equ 0793h
// bitfield definitions
AD2CON2_TRIGSEL_POSN                     equ 0004h
AD2CON2_TRIGSEL_POSITION                 equ 0004h
AD2CON2_TRIGSEL_SIZE                     equ 0003h
AD2CON2_TRIGSEL_LENGTH                   equ 0003h
AD2CON2_TRIGSEL_MASK                     equ 0070h
AD2CON2_TRIGSEL0_POSN                    equ 0004h
AD2CON2_TRIGSEL0_POSITION                equ 0004h
AD2CON2_TRIGSEL0_SIZE                    equ 0001h
AD2CON2_TRIGSEL0_LENGTH                  equ 0001h
AD2CON2_TRIGSEL0_MASK                    equ 0010h
AD2CON2_TRIGSEL1_POSN                    equ 0005h
AD2CON2_TRIGSEL1_POSITION                equ 0005h
AD2CON2_TRIGSEL1_SIZE                    equ 0001h
AD2CON2_TRIGSEL1_LENGTH                  equ 0001h
AD2CON2_TRIGSEL1_MASK                    equ 0020h
AD2CON2_TRIGSEL2_POSN                    equ 0006h
AD2CON2_TRIGSEL2_POSITION                equ 0006h
AD2CON2_TRIGSEL2_SIZE                    equ 0001h
AD2CON2_TRIGSEL2_LENGTH                  equ 0001h
AD2CON2_TRIGSEL2_MASK                    equ 0040h

// Register: AD2CON3
#define AD2CON3 AD2CON3
AD2CON3                                  equ 0794h
// bitfield definitions
AD2CON3_AD2DSEN_POSN                     equ 0000h
AD2CON3_AD2DSEN_POSITION                 equ 0000h
AD2CON3_AD2DSEN_SIZE                     equ 0001h
AD2CON3_AD2DSEN_LENGTH                   equ 0001h
AD2CON3_AD2DSEN_MASK                     equ 0001h
AD2CON3_AD2IPEN_POSN                     equ 0001h
AD2CON3_AD2IPEN_POSITION                 equ 0001h
AD2CON3_AD2IPEN_SIZE                     equ 0001h
AD2CON3_AD2IPEN_LENGTH                   equ 0001h
AD2CON3_AD2IPEN_MASK                     equ 0002h
AD2CON3_AD2IPPOL_POSN                    equ 0006h
AD2CON3_AD2IPPOL_POSITION                equ 0006h
AD2CON3_AD2IPPOL_SIZE                    equ 0001h
AD2CON3_AD2IPPOL_LENGTH                  equ 0001h
AD2CON3_AD2IPPOL_MASK                    equ 0040h
AD2CON3_AD2EPPOL_POSN                    equ 0007h
AD2CON3_AD2EPPOL_POSITION                equ 0007h
AD2CON3_AD2EPPOL_SIZE                    equ 0001h
AD2CON3_AD2EPPOL_LENGTH                  equ 0001h
AD2CON3_AD2EPPOL_MASK                    equ 0080h
AD2CON3_ADDSEN_POSN                      equ 0000h
AD2CON3_ADDSEN_POSITION                  equ 0000h
AD2CON3_ADDSEN_SIZE                      equ 0001h
AD2CON3_ADDSEN_LENGTH                    equ 0001h
AD2CON3_ADDSEN_MASK                      equ 0001h
AD2CON3_ADIPEN_POSN                      equ 0001h
AD2CON3_ADIPEN_POSITION                  equ 0001h
AD2CON3_ADIPEN_SIZE                      equ 0001h
AD2CON3_ADIPEN_LENGTH                    equ 0001h
AD2CON3_ADIPEN_MASK                      equ 0002h
AD2CON3_ADIPPOL_POSN                     equ 0006h
AD2CON3_ADIPPOL_POSITION                 equ 0006h
AD2CON3_ADIPPOL_SIZE                     equ 0001h
AD2CON3_ADIPPOL_LENGTH                   equ 0001h
AD2CON3_ADIPPOL_MASK                     equ 0040h
AD2CON3_ADEPPOL_POSN                     equ 0007h
AD2CON3_ADEPPOL_POSITION                 equ 0007h
AD2CON3_ADEPPOL_SIZE                     equ 0001h
AD2CON3_ADEPPOL_LENGTH                   equ 0001h
AD2CON3_ADEPPOL_MASK                     equ 0080h

// Register: AD2PRECON
#define AD2PRECON AD2PRECON
AD2PRECON                                equ 0796h
// bitfield definitions
AD2PRECON_ADPRE_POSN                     equ 0000h
AD2PRECON_ADPRE_POSITION                 equ 0000h
AD2PRECON_ADPRE_SIZE                     equ 0007h
AD2PRECON_ADPRE_LENGTH                   equ 0007h
AD2PRECON_ADPRE_MASK                     equ 007Fh
AD2PRECON_ADPRE0_POSN                    equ 0000h
AD2PRECON_ADPRE0_POSITION                equ 0000h
AD2PRECON_ADPRE0_SIZE                    equ 0001h
AD2PRECON_ADPRE0_LENGTH                  equ 0001h
AD2PRECON_ADPRE0_MASK                    equ 0001h
AD2PRECON_ADPRE1_POSN                    equ 0001h
AD2PRECON_ADPRE1_POSITION                equ 0001h
AD2PRECON_ADPRE1_SIZE                    equ 0001h
AD2PRECON_ADPRE1_LENGTH                  equ 0001h
AD2PRECON_ADPRE1_MASK                    equ 0002h
AD2PRECON_ADPRE2_POSN                    equ 0002h
AD2PRECON_ADPRE2_POSITION                equ 0002h
AD2PRECON_ADPRE2_SIZE                    equ 0001h
AD2PRECON_ADPRE2_LENGTH                  equ 0001h
AD2PRECON_ADPRE2_MASK                    equ 0004h
AD2PRECON_ADPRE3_POSN                    equ 0003h
AD2PRECON_ADPRE3_POSITION                equ 0003h
AD2PRECON_ADPRE3_SIZE                    equ 0001h
AD2PRECON_ADPRE3_LENGTH                  equ 0001h
AD2PRECON_ADPRE3_MASK                    equ 0008h
AD2PRECON_ADPRE4_POSN                    equ 0004h
AD2PRECON_ADPRE4_POSITION                equ 0004h
AD2PRECON_ADPRE4_SIZE                    equ 0001h
AD2PRECON_ADPRE4_LENGTH                  equ 0001h
AD2PRECON_ADPRE4_MASK                    equ 0010h
AD2PRECON_ADPRE5_POSN                    equ 0005h
AD2PRECON_ADPRE5_POSITION                equ 0005h
AD2PRECON_ADPRE5_SIZE                    equ 0001h
AD2PRECON_ADPRE5_LENGTH                  equ 0001h
AD2PRECON_ADPRE5_MASK                    equ 0020h
AD2PRECON_ADPRE6_POSN                    equ 0006h
AD2PRECON_ADPRE6_POSITION                equ 0006h
AD2PRECON_ADPRE6_SIZE                    equ 0001h
AD2PRECON_ADPRE6_LENGTH                  equ 0001h
AD2PRECON_ADPRE6_MASK                    equ 0040h

// Register: AD2ACQCON
#define AD2ACQCON AD2ACQCON
AD2ACQCON                                equ 0797h
// bitfield definitions
AD2ACQCON_ADACQ_POSN                     equ 0000h
AD2ACQCON_ADACQ_POSITION                 equ 0000h
AD2ACQCON_ADACQ_SIZE                     equ 0007h
AD2ACQCON_ADACQ_LENGTH                   equ 0007h
AD2ACQCON_ADACQ_MASK                     equ 007Fh
AD2ACQCON_ADACQ0_POSN                    equ 0000h
AD2ACQCON_ADACQ0_POSITION                equ 0000h
AD2ACQCON_ADACQ0_SIZE                    equ 0001h
AD2ACQCON_ADACQ0_LENGTH                  equ 0001h
AD2ACQCON_ADACQ0_MASK                    equ 0001h
AD2ACQCON_ADACQ1_POSN                    equ 0001h
AD2ACQCON_ADACQ1_POSITION                equ 0001h
AD2ACQCON_ADACQ1_SIZE                    equ 0001h
AD2ACQCON_ADACQ1_LENGTH                  equ 0001h
AD2ACQCON_ADACQ1_MASK                    equ 0002h
AD2ACQCON_ADACQ2_POSN                    equ 0002h
AD2ACQCON_ADACQ2_POSITION                equ 0002h
AD2ACQCON_ADACQ2_SIZE                    equ 0001h
AD2ACQCON_ADACQ2_LENGTH                  equ 0001h
AD2ACQCON_ADACQ2_MASK                    equ 0004h
AD2ACQCON_ADACQ3_POSN                    equ 0003h
AD2ACQCON_ADACQ3_POSITION                equ 0003h
AD2ACQCON_ADACQ3_SIZE                    equ 0001h
AD2ACQCON_ADACQ3_LENGTH                  equ 0001h
AD2ACQCON_ADACQ3_MASK                    equ 0008h
AD2ACQCON_ADACQ4_POSN                    equ 0004h
AD2ACQCON_ADACQ4_POSITION                equ 0004h
AD2ACQCON_ADACQ4_SIZE                    equ 0001h
AD2ACQCON_ADACQ4_LENGTH                  equ 0001h
AD2ACQCON_ADACQ4_MASK                    equ 0010h
AD2ACQCON_ADACQ5_POSN                    equ 0005h
AD2ACQCON_ADACQ5_POSITION                equ 0005h
AD2ACQCON_ADACQ5_SIZE                    equ 0001h
AD2ACQCON_ADACQ5_LENGTH                  equ 0001h
AD2ACQCON_ADACQ5_MASK                    equ 0020h
AD2ACQCON_ADACQ6_POSN                    equ 0006h
AD2ACQCON_ADACQ6_POSITION                equ 0006h
AD2ACQCON_ADACQ6_SIZE                    equ 0001h
AD2ACQCON_ADACQ6_LENGTH                  equ 0001h
AD2ACQCON_ADACQ6_MASK                    equ 0040h

// Register: AD2GRD
#define AD2GRD AD2GRD
AD2GRD                                   equ 0798h
// bitfield definitions
AD2GRD_TX2POL_POSN                       equ 0000h
AD2GRD_TX2POL_POSITION                   equ 0000h
AD2GRD_TX2POL_SIZE                       equ 0001h
AD2GRD_TX2POL_LENGTH                     equ 0001h
AD2GRD_TX2POL_MASK                       equ 0001h
AD2GRD_GRD2POL_POSN                      equ 0005h
AD2GRD_GRD2POL_POSITION                  equ 0005h
AD2GRD_GRD2POL_SIZE                      equ 0001h
AD2GRD_GRD2POL_LENGTH                    equ 0001h
AD2GRD_GRD2POL_MASK                      equ 0020h
AD2GRD_GRD2AOE_POSN                      equ 0006h
AD2GRD_GRD2AOE_POSITION                  equ 0006h
AD2GRD_GRD2AOE_SIZE                      equ 0001h
AD2GRD_GRD2AOE_LENGTH                    equ 0001h
AD2GRD_GRD2AOE_MASK                      equ 0040h
AD2GRD_GRD2BOE_POSN                      equ 0007h
AD2GRD_GRD2BOE_POSITION                  equ 0007h
AD2GRD_GRD2BOE_SIZE                      equ 0001h
AD2GRD_GRD2BOE_LENGTH                    equ 0001h
AD2GRD_GRD2BOE_MASK                      equ 0080h
AD2GRD_TXPOL_POSN                        equ 0000h
AD2GRD_TXPOL_POSITION                    equ 0000h
AD2GRD_TXPOL_SIZE                        equ 0001h
AD2GRD_TXPOL_LENGTH                      equ 0001h
AD2GRD_TXPOL_MASK                        equ 0001h
AD2GRD_GRDPOL_POSN                       equ 0005h
AD2GRD_GRDPOL_POSITION                   equ 0005h
AD2GRD_GRDPOL_SIZE                       equ 0001h
AD2GRD_GRDPOL_LENGTH                     equ 0001h
AD2GRD_GRDPOL_MASK                       equ 0020h
AD2GRD_GRDAOE_POSN                       equ 0006h
AD2GRD_GRDAOE_POSITION                   equ 0006h
AD2GRD_GRDAOE_SIZE                       equ 0001h
AD2GRD_GRDAOE_LENGTH                     equ 0001h
AD2GRD_GRDAOE_MASK                       equ 0040h
AD2GRD_GRDBOE_POSN                       equ 0007h
AD2GRD_GRDBOE_POSITION                   equ 0007h
AD2GRD_GRDBOE_SIZE                       equ 0001h
AD2GRD_GRDBOE_LENGTH                     equ 0001h
AD2GRD_GRDBOE_MASK                       equ 0080h

// Register: AD2CAPCON
#define AD2CAPCON AD2CAPCON
AD2CAPCON                                equ 0799h
// bitfield definitions
AD2CAPCON_ADDCAP_POSN                    equ 0000h
AD2CAPCON_ADDCAP_POSITION                equ 0000h
AD2CAPCON_ADDCAP_SIZE                    equ 0004h
AD2CAPCON_ADDCAP_LENGTH                  equ 0004h
AD2CAPCON_ADDCAP_MASK                    equ 000Fh
AD2CAPCON_ADCAP_POSN                     equ 0000h
AD2CAPCON_ADCAP_POSITION                 equ 0000h
AD2CAPCON_ADCAP_SIZE                     equ 0004h
AD2CAPCON_ADCAP_LENGTH                   equ 0004h
AD2CAPCON_ADCAP_MASK                     equ 000Fh
AD2CAPCON_ADDCAP0_POSN                   equ 0000h
AD2CAPCON_ADDCAP0_POSITION               equ 0000h
AD2CAPCON_ADDCAP0_SIZE                   equ 0001h
AD2CAPCON_ADDCAP0_LENGTH                 equ 0001h
AD2CAPCON_ADDCAP0_MASK                   equ 0001h
AD2CAPCON_ADDCAP1_POSN                   equ 0001h
AD2CAPCON_ADDCAP1_POSITION               equ 0001h
AD2CAPCON_ADDCAP1_SIZE                   equ 0001h
AD2CAPCON_ADDCAP1_LENGTH                 equ 0001h
AD2CAPCON_ADDCAP1_MASK                   equ 0002h
AD2CAPCON_ADDCAP2_POSN                   equ 0002h
AD2CAPCON_ADDCAP2_POSITION               equ 0002h
AD2CAPCON_ADDCAP2_SIZE                   equ 0001h
AD2CAPCON_ADDCAP2_LENGTH                 equ 0001h
AD2CAPCON_ADDCAP2_MASK                   equ 0004h
AD2CAPCON_ADDCAP3_POSN                   equ 0003h
AD2CAPCON_ADDCAP3_POSITION               equ 0003h
AD2CAPCON_ADDCAP3_SIZE                   equ 0001h
AD2CAPCON_ADDCAP3_LENGTH                 equ 0001h
AD2CAPCON_ADDCAP3_MASK                   equ 0008h
AD2CAPCON_ADD2CAP_POSN                   equ 0000h
AD2CAPCON_ADD2CAP_POSITION               equ 0000h
AD2CAPCON_ADD2CAP_SIZE                   equ 0004h
AD2CAPCON_ADD2CAP_LENGTH                 equ 0004h
AD2CAPCON_ADD2CAP_MASK                   equ 000Fh

// Register: AAD2RES0L
#define AAD2RES0L AAD2RES0L
AAD2RES0L                                equ 079Ah
// bitfield definitions
AAD2RES0L_ADRESL_POSN                    equ 0000h
AAD2RES0L_ADRESL_POSITION                equ 0000h
AAD2RES0L_ADRESL_SIZE                    equ 0008h
AAD2RES0L_ADRESL_LENGTH                  equ 0008h
AAD2RES0L_ADRESL_MASK                    equ 00FFh

// Register: AAD2RES0H
#define AAD2RES0H AAD2RES0H
AAD2RES0H                                equ 079Bh
// bitfield definitions
AAD2RES0H_ADRESH_POSN                    equ 0000h
AAD2RES0H_ADRESH_POSITION                equ 0000h
AAD2RES0H_ADRESH_SIZE                    equ 0008h
AAD2RES0H_ADRESH_LENGTH                  equ 0008h
AAD2RES0H_ADRESH_MASK                    equ 00FFh

// Register: AAD2RES1L
#define AAD2RES1L AAD2RES1L
AAD2RES1L                                equ 079Ch
// bitfield definitions
AAD2RES1L_ADRESL_POSN                    equ 0000h
AAD2RES1L_ADRESL_POSITION                equ 0000h
AAD2RES1L_ADRESL_SIZE                    equ 0008h
AAD2RES1L_ADRESL_LENGTH                  equ 0008h
AAD2RES1L_ADRESL_MASK                    equ 00FFh

// Register: AAD2RES1H
#define AAD2RES1H AAD2RES1H
AAD2RES1H                                equ 079Dh
// bitfield definitions
AAD2RES1H_ADRESH_POSN                    equ 0000h
AAD2RES1H_ADRESH_POSITION                equ 0000h
AAD2RES1H_ADRESH_SIZE                    equ 0008h
AAD2RES1H_ADRESH_LENGTH                  equ 0008h
AAD2RES1H_ADRESH_MASK                    equ 00FFh

// Register: AD2CH0
#define AD2CH0 AD2CH0
AD2CH0                                   equ 079Eh
// bitfield definitions
AD2CH0_CH20_POSN                         equ 0000h
AD2CH0_CH20_POSITION                     equ 0000h
AD2CH0_CH20_SIZE                         equ 0001h
AD2CH0_CH20_LENGTH                       equ 0001h
AD2CH0_CH20_MASK                         equ 0001h
AD2CH0_CH21_POSN                         equ 0001h
AD2CH0_CH21_POSITION                     equ 0001h
AD2CH0_CH21_SIZE                         equ 0001h
AD2CH0_CH21_LENGTH                       equ 0001h
AD2CH0_CH21_MASK                         equ 0002h
AD2CH0_CH22_POSN                         equ 0002h
AD2CH0_CH22_POSITION                     equ 0002h
AD2CH0_CH22_SIZE                         equ 0001h
AD2CH0_CH22_LENGTH                       equ 0001h
AD2CH0_CH22_MASK                         equ 0004h
AD2CH0_CH23_POSN                         equ 0003h
AD2CH0_CH23_POSITION                     equ 0003h
AD2CH0_CH23_SIZE                         equ 0001h
AD2CH0_CH23_LENGTH                       equ 0001h
AD2CH0_CH23_MASK                         equ 0008h
AD2CH0_CH24_POSN                         equ 0004h
AD2CH0_CH24_POSITION                     equ 0004h
AD2CH0_CH24_SIZE                         equ 0001h
AD2CH0_CH24_LENGTH                       equ 0001h
AD2CH0_CH24_MASK                         equ 0010h
AD2CH0_CH25_POSN                         equ 0005h
AD2CH0_CH25_POSITION                     equ 0005h
AD2CH0_CH25_SIZE                         equ 0001h
AD2CH0_CH25_LENGTH                       equ 0001h
AD2CH0_CH25_MASK                         equ 0020h
AD2CH0_CH26_POSN                         equ 0006h
AD2CH0_CH26_POSITION                     equ 0006h
AD2CH0_CH26_SIZE                         equ 0001h
AD2CH0_CH26_LENGTH                       equ 0001h
AD2CH0_CH26_MASK                         equ 0040h
AD2CH0_CH27_POSN                         equ 0007h
AD2CH0_CH27_POSITION                     equ 0007h
AD2CH0_CH27_SIZE                         equ 0001h
AD2CH0_CH27_LENGTH                       equ 0001h
AD2CH0_CH27_MASK                         equ 0080h

// Register: AD2CH1
#define AD2CH1 AD2CH1
AD2CH1                                   equ 079Fh
// bitfield definitions
AD2CH1_CH28_POSN                         equ 0000h
AD2CH1_CH28_POSITION                     equ 0000h
AD2CH1_CH28_SIZE                         equ 0001h
AD2CH1_CH28_LENGTH                       equ 0001h
AD2CH1_CH28_MASK                         equ 0001h
AD2CH1_CH29_POSN                         equ 0001h
AD2CH1_CH29_POSITION                     equ 0001h
AD2CH1_CH29_SIZE                         equ 0001h
AD2CH1_CH29_LENGTH                       equ 0001h
AD2CH1_CH29_MASK                         equ 0002h
AD2CH1_CH40_POSN                         equ 0002h
AD2CH1_CH40_POSITION                     equ 0002h
AD2CH1_CH40_SIZE                         equ 0001h
AD2CH1_CH40_LENGTH                       equ 0001h
AD2CH1_CH40_MASK                         equ 0004h

// Register: ICDIO
#define ICDIO ICDIO
ICDIO                                    equ 0F8Ch
// bitfield definitions
ICDIO_TRIS_ICDCLK_POSN                   equ 0002h
ICDIO_TRIS_ICDCLK_POSITION               equ 0002h
ICDIO_TRIS_ICDCLK_SIZE                   equ 0001h
ICDIO_TRIS_ICDCLK_LENGTH                 equ 0001h
ICDIO_TRIS_ICDCLK_MASK                   equ 0004h
ICDIO_TRIS_ICDDAT_POSN                   equ 0003h
ICDIO_TRIS_ICDDAT_POSITION               equ 0003h
ICDIO_TRIS_ICDDAT_SIZE                   equ 0001h
ICDIO_TRIS_ICDDAT_LENGTH                 equ 0001h
ICDIO_TRIS_ICDDAT_MASK                   equ 0008h
ICDIO_LAT_ICDCLK_POSN                    equ 0004h
ICDIO_LAT_ICDCLK_POSITION                equ 0004h
ICDIO_LAT_ICDCLK_SIZE                    equ 0001h
ICDIO_LAT_ICDCLK_LENGTH                  equ 0001h
ICDIO_LAT_ICDCLK_MASK                    equ 0010h
ICDIO_LAT_ICDDAT_POSN                    equ 0005h
ICDIO_LAT_ICDDAT_POSITION                equ 0005h
ICDIO_LAT_ICDDAT_SIZE                    equ 0001h
ICDIO_LAT_ICDDAT_LENGTH                  equ 0001h
ICDIO_LAT_ICDDAT_MASK                    equ 0020h
ICDIO_PORT_ICDCLK_POSN                   equ 0006h
ICDIO_PORT_ICDCLK_POSITION               equ 0006h
ICDIO_PORT_ICDCLK_SIZE                   equ 0001h
ICDIO_PORT_ICDCLK_LENGTH                 equ 0001h
ICDIO_PORT_ICDCLK_MASK                   equ 0040h
ICDIO_PORT_ICDDAT_POSN                   equ 0007h
ICDIO_PORT_ICDDAT_POSITION               equ 0007h
ICDIO_PORT_ICDDAT_SIZE                   equ 0001h
ICDIO_PORT_ICDDAT_LENGTH                 equ 0001h
ICDIO_PORT_ICDDAT_MASK                   equ 0080h

// Register: ICDCON0
#define ICDCON0 ICDCON0
ICDCON0                                  equ 0F8Dh
// bitfield definitions
ICDCON0_RSTVEC_POSN                      equ 0000h
ICDCON0_RSTVEC_POSITION                  equ 0000h
ICDCON0_RSTVEC_SIZE                      equ 0001h
ICDCON0_RSTVEC_LENGTH                    equ 0001h
ICDCON0_RSTVEC_MASK                      equ 0001h
ICDCON0_DBGINEX_POSN                     equ 0003h
ICDCON0_DBGINEX_POSITION                 equ 0003h
ICDCON0_DBGINEX_SIZE                     equ 0001h
ICDCON0_DBGINEX_LENGTH                   equ 0001h
ICDCON0_DBGINEX_MASK                     equ 0008h
ICDCON0_SSTEP_POSN                       equ 0005h
ICDCON0_SSTEP_POSITION                   equ 0005h
ICDCON0_SSTEP_SIZE                       equ 0001h
ICDCON0_SSTEP_LENGTH                     equ 0001h
ICDCON0_SSTEP_MASK                       equ 0020h
ICDCON0_FREEZ_POSN                       equ 0006h
ICDCON0_FREEZ_POSITION                   equ 0006h
ICDCON0_FREEZ_SIZE                       equ 0001h
ICDCON0_FREEZ_LENGTH                     equ 0001h
ICDCON0_FREEZ_MASK                       equ 0040h
ICDCON0_INBUG_POSN                       equ 0007h
ICDCON0_INBUG_POSITION                   equ 0007h
ICDCON0_INBUG_SIZE                       equ 0001h
ICDCON0_INBUG_LENGTH                     equ 0001h
ICDCON0_INBUG_MASK                       equ 0080h

// Register: ICDSTAT
#define ICDSTAT ICDSTAT
ICDSTAT                                  equ 0F91h
// bitfield definitions
ICDSTAT_USRHLTF_POSN                     equ 0001h
ICDSTAT_USRHLTF_POSITION                 equ 0001h
ICDSTAT_USRHLTF_SIZE                     equ 0001h
ICDSTAT_USRHLTF_LENGTH                   equ 0001h
ICDSTAT_USRHLTF_MASK                     equ 0002h
ICDSTAT_TRP0HLTF_POSN                    equ 0006h
ICDSTAT_TRP0HLTF_POSITION                equ 0006h
ICDSTAT_TRP0HLTF_SIZE                    equ 0001h
ICDSTAT_TRP0HLTF_LENGTH                  equ 0001h
ICDSTAT_TRP0HLTF_MASK                    equ 0040h
ICDSTAT_TRP1HLTF_POSN                    equ 0007h
ICDSTAT_TRP1HLTF_POSITION                equ 0007h
ICDSTAT_TRP1HLTF_SIZE                    equ 0001h
ICDSTAT_TRP1HLTF_LENGTH                  equ 0001h
ICDSTAT_TRP1HLTF_MASK                    equ 0080h

// Register: ICDINSTL
#define ICDINSTL ICDINSTL
ICDINSTL                                 equ 0F96h
// bitfield definitions
ICDINSTL_DBGIN0_POSN                     equ 0000h
ICDINSTL_DBGIN0_POSITION                 equ 0000h
ICDINSTL_DBGIN0_SIZE                     equ 0001h
ICDINSTL_DBGIN0_LENGTH                   equ 0001h
ICDINSTL_DBGIN0_MASK                     equ 0001h
ICDINSTL_DBGIN1_POSN                     equ 0001h
ICDINSTL_DBGIN1_POSITION                 equ 0001h
ICDINSTL_DBGIN1_SIZE                     equ 0001h
ICDINSTL_DBGIN1_LENGTH                   equ 0001h
ICDINSTL_DBGIN1_MASK                     equ 0002h
ICDINSTL_DBGIN2_POSN                     equ 0002h
ICDINSTL_DBGIN2_POSITION                 equ 0002h
ICDINSTL_DBGIN2_SIZE                     equ 0001h
ICDINSTL_DBGIN2_LENGTH                   equ 0001h
ICDINSTL_DBGIN2_MASK                     equ 0004h
ICDINSTL_DBGIN3_POSN                     equ 0003h
ICDINSTL_DBGIN3_POSITION                 equ 0003h
ICDINSTL_DBGIN3_SIZE                     equ 0001h
ICDINSTL_DBGIN3_LENGTH                   equ 0001h
ICDINSTL_DBGIN3_MASK                     equ 0008h
ICDINSTL_DBGIN4_POSN                     equ 0004h
ICDINSTL_DBGIN4_POSITION                 equ 0004h
ICDINSTL_DBGIN4_SIZE                     equ 0001h
ICDINSTL_DBGIN4_LENGTH                   equ 0001h
ICDINSTL_DBGIN4_MASK                     equ 0010h
ICDINSTL_DBGIN5_POSN                     equ 0005h
ICDINSTL_DBGIN5_POSITION                 equ 0005h
ICDINSTL_DBGIN5_SIZE                     equ 0001h
ICDINSTL_DBGIN5_LENGTH                   equ 0001h
ICDINSTL_DBGIN5_MASK                     equ 0020h
ICDINSTL_DBGIN6_POSN                     equ 0006h
ICDINSTL_DBGIN6_POSITION                 equ 0006h
ICDINSTL_DBGIN6_SIZE                     equ 0001h
ICDINSTL_DBGIN6_LENGTH                   equ 0001h
ICDINSTL_DBGIN6_MASK                     equ 0040h
ICDINSTL_DBGIN7_POSN                     equ 0007h
ICDINSTL_DBGIN7_POSITION                 equ 0007h
ICDINSTL_DBGIN7_SIZE                     equ 0001h
ICDINSTL_DBGIN7_LENGTH                   equ 0001h
ICDINSTL_DBGIN7_MASK                     equ 0080h

// Register: ICDINSTH
#define ICDINSTH ICDINSTH
ICDINSTH                                 equ 0F97h
// bitfield definitions
ICDINSTH_DBGIN8_POSN                     equ 0000h
ICDINSTH_DBGIN8_POSITION                 equ 0000h
ICDINSTH_DBGIN8_SIZE                     equ 0001h
ICDINSTH_DBGIN8_LENGTH                   equ 0001h
ICDINSTH_DBGIN8_MASK                     equ 0001h
ICDINSTH_DBGIN9_POSN                     equ 0001h
ICDINSTH_DBGIN9_POSITION                 equ 0001h
ICDINSTH_DBGIN9_SIZE                     equ 0001h
ICDINSTH_DBGIN9_LENGTH                   equ 0001h
ICDINSTH_DBGIN9_MASK                     equ 0002h
ICDINSTH_DBGIN10_POSN                    equ 0002h
ICDINSTH_DBGIN10_POSITION                equ 0002h
ICDINSTH_DBGIN10_SIZE                    equ 0001h
ICDINSTH_DBGIN10_LENGTH                  equ 0001h
ICDINSTH_DBGIN10_MASK                    equ 0004h
ICDINSTH_DBGIN11_POSN                    equ 0003h
ICDINSTH_DBGIN11_POSITION                equ 0003h
ICDINSTH_DBGIN11_SIZE                    equ 0001h
ICDINSTH_DBGIN11_LENGTH                  equ 0001h
ICDINSTH_DBGIN11_MASK                    equ 0008h
ICDINSTH_DBGIN12_POSN                    equ 0004h
ICDINSTH_DBGIN12_POSITION                equ 0004h
ICDINSTH_DBGIN12_SIZE                    equ 0001h
ICDINSTH_DBGIN12_LENGTH                  equ 0001h
ICDINSTH_DBGIN12_MASK                    equ 0010h
ICDINSTH_DBGIN13_POSN                    equ 0005h
ICDINSTH_DBGIN13_POSITION                equ 0005h
ICDINSTH_DBGIN13_SIZE                    equ 0001h
ICDINSTH_DBGIN13_LENGTH                  equ 0001h
ICDINSTH_DBGIN13_MASK                    equ 0020h

// Register: ICDBK0CON
#define ICDBK0CON ICDBK0CON
ICDBK0CON                                equ 0F9Ch
// bitfield definitions
ICDBK0CON_BKHLT_POSN                     equ 0000h
ICDBK0CON_BKHLT_POSITION                 equ 0000h
ICDBK0CON_BKHLT_SIZE                     equ 0001h
ICDBK0CON_BKHLT_LENGTH                   equ 0001h
ICDBK0CON_BKHLT_MASK                     equ 0001h
ICDBK0CON_BKEN_POSN                      equ 0007h
ICDBK0CON_BKEN_POSITION                  equ 0007h
ICDBK0CON_BKEN_SIZE                      equ 0001h
ICDBK0CON_BKEN_LENGTH                    equ 0001h
ICDBK0CON_BKEN_MASK                      equ 0080h

// Register: ICDBK0L
#define ICDBK0L ICDBK0L
ICDBK0L                                  equ 0F9Dh
// bitfield definitions
ICDBK0L_BKA0_POSN                        equ 0000h
ICDBK0L_BKA0_POSITION                    equ 0000h
ICDBK0L_BKA0_SIZE                        equ 0001h
ICDBK0L_BKA0_LENGTH                      equ 0001h
ICDBK0L_BKA0_MASK                        equ 0001h
ICDBK0L_BKA1_POSN                        equ 0001h
ICDBK0L_BKA1_POSITION                    equ 0001h
ICDBK0L_BKA1_SIZE                        equ 0001h
ICDBK0L_BKA1_LENGTH                      equ 0001h
ICDBK0L_BKA1_MASK                        equ 0002h
ICDBK0L_BKA2_POSN                        equ 0002h
ICDBK0L_BKA2_POSITION                    equ 0002h
ICDBK0L_BKA2_SIZE                        equ 0001h
ICDBK0L_BKA2_LENGTH                      equ 0001h
ICDBK0L_BKA2_MASK                        equ 0004h
ICDBK0L_BKA3_POSN                        equ 0003h
ICDBK0L_BKA3_POSITION                    equ 0003h
ICDBK0L_BKA3_SIZE                        equ 0001h
ICDBK0L_BKA3_LENGTH                      equ 0001h
ICDBK0L_BKA3_MASK                        equ 0008h
ICDBK0L_BKA4_POSN                        equ 0004h
ICDBK0L_BKA4_POSITION                    equ 0004h
ICDBK0L_BKA4_SIZE                        equ 0001h
ICDBK0L_BKA4_LENGTH                      equ 0001h
ICDBK0L_BKA4_MASK                        equ 0010h
ICDBK0L_BKA5_POSN                        equ 0005h
ICDBK0L_BKA5_POSITION                    equ 0005h
ICDBK0L_BKA5_SIZE                        equ 0001h
ICDBK0L_BKA5_LENGTH                      equ 0001h
ICDBK0L_BKA5_MASK                        equ 0020h
ICDBK0L_BKA6_POSN                        equ 0006h
ICDBK0L_BKA6_POSITION                    equ 0006h
ICDBK0L_BKA6_SIZE                        equ 0001h
ICDBK0L_BKA6_LENGTH                      equ 0001h
ICDBK0L_BKA6_MASK                        equ 0040h
ICDBK0L_BKA7_POSN                        equ 0007h
ICDBK0L_BKA7_POSITION                    equ 0007h
ICDBK0L_BKA7_SIZE                        equ 0001h
ICDBK0L_BKA7_LENGTH                      equ 0001h
ICDBK0L_BKA7_MASK                        equ 0080h

// Register: ICDBK0H
#define ICDBK0H ICDBK0H
ICDBK0H                                  equ 0F9Eh
// bitfield definitions
ICDBK0H_BKA8_POSN                        equ 0000h
ICDBK0H_BKA8_POSITION                    equ 0000h
ICDBK0H_BKA8_SIZE                        equ 0001h
ICDBK0H_BKA8_LENGTH                      equ 0001h
ICDBK0H_BKA8_MASK                        equ 0001h
ICDBK0H_BKA9_POSN                        equ 0001h
ICDBK0H_BKA9_POSITION                    equ 0001h
ICDBK0H_BKA9_SIZE                        equ 0001h
ICDBK0H_BKA9_LENGTH                      equ 0001h
ICDBK0H_BKA9_MASK                        equ 0002h
ICDBK0H_BKA10_POSN                       equ 0002h
ICDBK0H_BKA10_POSITION                   equ 0002h
ICDBK0H_BKA10_SIZE                       equ 0001h
ICDBK0H_BKA10_LENGTH                     equ 0001h
ICDBK0H_BKA10_MASK                       equ 0004h
ICDBK0H_BKA11_POSN                       equ 0003h
ICDBK0H_BKA11_POSITION                   equ 0003h
ICDBK0H_BKA11_SIZE                       equ 0001h
ICDBK0H_BKA11_LENGTH                     equ 0001h
ICDBK0H_BKA11_MASK                       equ 0008h
ICDBK0H_BKA12_POSN                       equ 0004h
ICDBK0H_BKA12_POSITION                   equ 0004h
ICDBK0H_BKA12_SIZE                       equ 0001h
ICDBK0H_BKA12_LENGTH                     equ 0001h
ICDBK0H_BKA12_MASK                       equ 0010h
ICDBK0H_BKA13_POSN                       equ 0005h
ICDBK0H_BKA13_POSITION                   equ 0005h
ICDBK0H_BKA13_SIZE                       equ 0001h
ICDBK0H_BKA13_LENGTH                     equ 0001h
ICDBK0H_BKA13_MASK                       equ 0020h
ICDBK0H_BKA14_POSN                       equ 0006h
ICDBK0H_BKA14_POSITION                   equ 0006h
ICDBK0H_BKA14_SIZE                       equ 0001h
ICDBK0H_BKA14_LENGTH                     equ 0001h
ICDBK0H_BKA14_MASK                       equ 0040h

// Register: BSRICDSHAD
#define BSRICDSHAD BSRICDSHAD
BSRICDSHAD                               equ 0FE3h
// bitfield definitions
BSRICDSHAD_BSR_ICDSHAD_POSN              equ 0000h
BSRICDSHAD_BSR_ICDSHAD_POSITION          equ 0000h
BSRICDSHAD_BSR_ICDSHAD_SIZE              equ 0005h
BSRICDSHAD_BSR_ICDSHAD_LENGTH            equ 0005h
BSRICDSHAD_BSR_ICDSHAD_MASK              equ 001Fh

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
#define A1TX0                            BANKMASK(ADCTX), 0
#define A1TX1                            BANKMASK(ADCTX), 1
#define A1TX2                            BANKMASK(ADCTX), 2
#define A2TX0                            BANKMASK(ADCTX), 4
#define A2TX1                            BANKMASK(ADCTX), 5
#define A2TX2                            BANKMASK(ADCTX), 6
#define ABDEN                            BANKMASK(BAUDCON), 0
#define ABDOVF                           BANKMASK(BAUDCON), 7
#define AD1CONV                          BANKMASK(ADSTAT), 2
#define AD1DSEN                          BANKMASK(AD1CON3), 0
#define AD1EPPOL                         BANKMASK(AD1CON3), 7
#define AD1IE                            BANKMASK(PIE1), 6
#define AD1IF                            BANKMASK(PIR1), 6
#define AD1IPEN                          BANKMASK(AD1CON3), 1
#define AD1IPPOL                         BANKMASK(AD1CON3), 6
#define AD1STG0                          BANKMASK(ADSTAT), 0
#define AD1STG1                          BANKMASK(ADSTAT), 1
#define AD2CONV                          BANKMASK(ADSTAT), 6
#define AD2DSEN                          BANKMASK(AD2CON3), 0
#define AD2EPPOL                         BANKMASK(AD2CON3), 7
#define AD2IE                            BANKMASK(PIE2), 6
#define AD2IF                            BANKMASK(PIR2), 6
#define AD2IPEN                          BANKMASK(AD2CON3), 1
#define AD2IPPOL                         BANKMASK(AD2CON3), 6
#define AD2ON                            BANKMASK(AD2CON0), 0
#define AD2STG0                          BANKMASK(ADSTAT), 4
#define AD2STG1                          BANKMASK(ADSTAT), 5
#define ADCONV                           BANKMASK(ADSTAT), 2
#define ADCS0                            BANKMASK(ADCOMCON), 4
#define ADCS1                            BANKMASK(ADCOMCON), 5
#define ADCS2                            BANKMASK(ADCOMCON), 6
#define ADDEN                            BANKMASK(RCSTA), 3
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADGO                             BANKMASK(ADCON0), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
#define ANSA6                            BANKMASK(ANSELA), 6
#define ANSA7                            BANKMASK(ANSELA), 7
#define ANSB0                            BANKMASK(ANSELB), 0
#define ANSB1                            BANKMASK(ANSELB), 1
#define ANSB2                            BANKMASK(ANSELB), 2
#define ANSB3                            BANKMASK(ANSELB), 3
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define ANSB6                            BANKMASK(ANSELB), 6
#define ANSB7                            BANKMASK(ANSELB), 7
#define ANSC0                            BANKMASK(ANSELC), 0
#define ANSC1                            BANKMASK(ANSELC), 1
#define ANSC2                            BANKMASK(ANSELC), 2
#define ANSC3                            BANKMASK(ANSELC), 3
#define ANSC4                            BANKMASK(ANSELC), 4
#define ANSC5                            BANKMASK(ANSELC), 5
#define ANSC6                            BANKMASK(ANSELC), 6
#define ANSC7                            BANKMASK(ANSELC), 7
#define BCL1IE                           BANKMASK(PIE2), 3
#define BCL1IF                           BANKMASK(PIR2), 3
#define BCL2IE                           BANKMASK(PIE2), 2
#define BCL2IF                           BANKMASK(PIR2), 2
#define BKA0                             BANKMASK(ICDBK0L), 0
#define BKA1                             BANKMASK(ICDBK0L), 1
#define BKA10                            BANKMASK(ICDBK0H), 2
#define BKA11                            BANKMASK(ICDBK0H), 3
#define BKA12                            BANKMASK(ICDBK0H), 4
#define BKA13                            BANKMASK(ICDBK0H), 5
#define BKA14                            BANKMASK(ICDBK0H), 6
#define BKA2                             BANKMASK(ICDBK0L), 2
#define BKA3                             BANKMASK(ICDBK0L), 3
#define BKA4                             BANKMASK(ICDBK0L), 4
#define BKA5                             BANKMASK(ICDBK0L), 5
#define BKA6                             BANKMASK(ICDBK0L), 6
#define BKA7                             BANKMASK(ICDBK0L), 7
#define BKA8                             BANKMASK(ICDBK0H), 0
#define BKA9                             BANKMASK(ICDBK0H), 1
#define BKEN                             BANKMASK(ICDBK0CON), 7
#define BKHLT                            BANKMASK(ICDBK0CON), 0
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define BRG16                            BANKMASK(BAUDCON), 3
#define BRGH                             BANKMASK(TXSTA), 2
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define CARRY                            BANKMASK(STATUS), 0
#define CFGS                             BANKMASK(PMCON1), 6
#define CH10                             BANKMASK(AD1CH0), 0
#define CH11                             BANKMASK(AD1CH0), 1
#define CH12                             BANKMASK(AD1CH0), 2
#define CH13                             BANKMASK(AD1CH0), 3
#define CH14                             BANKMASK(AD1CH0), 4
#define CH15                             BANKMASK(AD1CH0), 5
#define CH16                             BANKMASK(AD1CH0), 6
#define CH17                             BANKMASK(AD1CH0), 7
#define CH18                             BANKMASK(AD1CH1), 0
#define CH19                             BANKMASK(AD1CH1), 1
#define CH20                             BANKMASK(AD2CH0), 0
#define CH21                             BANKMASK(AD2CH0), 1
#define CH22                             BANKMASK(AD2CH0), 2
#define CH23                             BANKMASK(AD2CH0), 3
#define CH24                             BANKMASK(AD2CH0), 4
#define CH25                             BANKMASK(AD2CH0), 5
#define CH26                             BANKMASK(AD2CH0), 6
#define CH27                             BANKMASK(AD2CH0), 7
#define CH28                             BANKMASK(AD2CH1), 0
#define CH29                             BANKMASK(AD2CH1), 1
#define CH40                             BANKMASK(AD2CH1), 2
#define CHS17                            BANKMASK(AD1CH0), 7
#define CREN                             BANKMASK(RCSTA), 4
#define CSRC                             BANKMASK(TXSTA), 7
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DBGIN0                           BANKMASK(ICDINSTL), 0
#define DBGIN1                           BANKMASK(ICDINSTL), 1
#define DBGIN10                          BANKMASK(ICDINSTH), 2
#define DBGIN11                          BANKMASK(ICDINSTH), 3
#define DBGIN12                          BANKMASK(ICDINSTH), 4
#define DBGIN13                          BANKMASK(ICDINSTH), 5
#define DBGIN2                           BANKMASK(ICDINSTL), 2
#define DBGIN3                           BANKMASK(ICDINSTL), 3
#define DBGIN4                           BANKMASK(ICDINSTL), 4
#define DBGIN5                           BANKMASK(ICDINSTL), 5
#define DBGIN6                           BANKMASK(ICDINSTL), 6
#define DBGIN7                           BANKMASK(ICDINSTL), 7
#define DBGIN8                           BANKMASK(ICDINSTH), 0
#define DBGIN9                           BANKMASK(ICDINSTH), 1
#define DBGINEX                          BANKMASK(ICDCON0), 3
#define DC                               BANKMASK(STATUS), 1
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define FERR                             BANKMASK(RCSTA), 2
#define FREE                             BANKMASK(PMCON1), 4
#define FREEZ                            BANKMASK(ICDCON0), 6
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define GIE                              BANKMASK(INTCON), 7
#define GO_nDONE1                        BANKMASK(AD1CON0), 1
#define GO_nDONE2                        BANKMASK(AD2CON0), 1
#define GRD1AOE                          BANKMASK(AD1GRD), 6
#define GRD1BOE                          BANKMASK(AD1GRD), 7
#define GRD1POL                          BANKMASK(AD1GRD), 5
#define GRD2AOE                          BANKMASK(AD2GRD), 6
#define GRD2BOE                          BANKMASK(AD2GRD), 7
#define GRD2POL                          BANKMASK(AD2GRD), 5
#define GRDASEL                          BANKMASK(APFCON), 0
#define GRDBSEL                          BANKMASK(APFCON), 1
#define HFIOFR                           BANKMASK(OSCSTAT), 4
#define HFIOFS                           BANKMASK(OSCSTAT), 0
#define INBUG                            BANKMASK(ICDCON0), 7
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
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
#define LAT_ICDCLK                       BANKMASK(ICDIO), 4
#define LAT_ICDDAT                       BANKMASK(ICDIO), 5
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LWLO                             BANKMASK(PMCON1), 5
#define OERR                             BANKMASK(RCSTA), 1
#define P1TSEL                           BANKMASK(PWMTMRS), 0
#define P2TSEL                           BANKMASK(PWMTMRS), 2
#define PEIE                             BANKMASK(INTCON), 6
#define PLLSR                            BANKMASK(OSCSTAT), 6
#define PORT_ICDCLK                      BANKMASK(ICDIO), 6
#define PORT_ICDDAT                      BANKMASK(ICDIO), 7
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
#define PWM1OE0                          BANKMASK(PWM1AOE), 0
#define PWM1OE1                          BANKMASK(PWM1AOE), 1
#define PWM1OE2                          BANKMASK(PWM1AOE), 2
#define PWM1OE3                          BANKMASK(PWM1AOE), 3
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
#define PWM2OE0                          BANKMASK(PWM2AOE), 0
#define PWM2OE1                          BANKMASK(PWM2AOE), 1
#define PWM2OE2                          BANKMASK(PWM2AOE), 2
#define PWM2OE3                          BANKMASK(PWM2AOE), 3
#define PWM2OUT                          BANKMASK(PWM2CON), 5
#define PWM2POL                          BANKMASK(PWM2CON), 4
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
#define RCIDL                            BANKMASK(BAUDCON), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(PMCON1), 0
#define RE3                              BANKMASK(PORTE), 3
#define RSTVEC                           BANKMASK(ICDCON0), 0
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define S1ILS                            BANKMASK(SSPLVL), 0
#define S2ILS                            BANKMASK(SSPLVL), 4
#define SBOREN                           BANKMASK(BORCON), 7
#define SCKP                             BANKMASK(BAUDCON), 4
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SENDB                            BANKMASK(TXSTA), 3
#define SPEN                             BANKMASK(RCSTA), 7
#define SPLLEN                           BANKMASK(OSCCON), 7
#define SREN                             BANKMASK(RCSTA), 5
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
#define SSP2IE                           BANKMASK(PIE1), 2
#define SSP2IF                           BANKMASK(PIR1), 2
#define SSP2MSK0                         BANKMASK(SSP2MSK), 0
#define SSP2MSK1                         BANKMASK(SSP2MSK), 1
#define SSP2MSK2                         BANKMASK(SSP2MSK), 2
#define SSP2MSK3                         BANKMASK(SSP2MSK), 3
#define SSP2MSK4                         BANKMASK(SSP2MSK), 4
#define SSP2MSK5                         BANKMASK(SSP2MSK), 5
#define SSP2MSK6                         BANKMASK(SSP2MSK), 6
#define SSP2MSK7                         BANKMASK(SSP2MSK), 7
#define SSPIE                            BANKMASK(PIE1), 3
#define SSSEL                            BANKMASK(APFCON), 5
#define SSTEP                            BANKMASK(ICDCON0), 5
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS                            BANKMASK(T1GCON), 0
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
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
#define TRIS_ICDCLK                      BANKMASK(ICDIO), 2
#define TRIS_ICDDAT                      BANKMASK(ICDIO), 3
#define TRMT                             BANKMASK(TXSTA), 1
#define TRP0HLTF                         BANKMASK(ICDSTAT), 6
#define TRP1HLTF                         BANKMASK(ICDSTAT), 7
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TX10                             BANKMASK(AD1TX0), 0
#define TX11                             BANKMASK(AD1TX0), 1
#define TX12                             BANKMASK(AD1TX0), 2
#define TX13                             BANKMASK(AD1TX0), 3
#define TX14                             BANKMASK(AD1TX0), 4
#define TX15                             BANKMASK(AD1TX0), 5
#define TX16                             BANKMASK(AD1TX0), 6
#define TX17                             BANKMASK(AD1TX0), 7
#define TX18                             BANKMASK(AD1TX1), 0
#define TX19                             BANKMASK(AD1TX1), 1
#define TX1POL                           BANKMASK(AD1GRD), 0
#define TX20                             BANKMASK(AD2TX0), 0
#define TX21                             BANKMASK(AD2TX0), 1
#define TX22                             BANKMASK(AD2TX0), 2
#define TX23                             BANKMASK(AD2TX0), 3
#define TX24                             BANKMASK(AD2TX0), 4
#define TX25                             BANKMASK(AD2TX0), 5
#define TX26                             BANKMASK(AD2TX0), 6
#define TX27                             BANKMASK(AD2TX0), 7
#define TX28                             BANKMASK(AD2TX1), 0
#define TX29                             BANKMASK(AD2TX1), 1
#define TX2POL                           BANKMASK(AD2GRD), 0
#define TX40                             BANKMASK(AD2TX1), 2
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define USRHLTF                          BANKMASK(ICDSTAT), 1
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WDTPS4                           BANKMASK(WDTCON), 5
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define WPUE3                            BANKMASK(WPUE), 3
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define WRERR                            BANKMASK(PMCON1), 3
#define WUE                              BANKMASK(BAUDCON), 1
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
psect udata_bank7,class=BANK7,space=SPACE_DATA,noexec
psect udata_bank8,class=BANK8,space=SPACE_DATA,noexec
psect udata_bank9,class=BANK9,space=SPACE_DATA,noexec
psect udata_bank10,class=BANK10,space=SPACE_DATA,noexec
psect udata_bank11,class=BANK11,space=SPACE_DATA,noexec
psect udata_bank12,class=BANK12,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16LF1566_INC_
