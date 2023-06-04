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

#ifndef _PIC16F1934_INC_
#define _PIC16F1934_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F1934
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

// Register: PORTD
#define PORTD PORTD
PORTD                                    equ 000Fh
// bitfield definitions
PORTD_RD0_POSN                           equ 0000h
PORTD_RD0_POSITION                       equ 0000h
PORTD_RD0_SIZE                           equ 0001h
PORTD_RD0_LENGTH                         equ 0001h
PORTD_RD0_MASK                           equ 0001h
PORTD_RD1_POSN                           equ 0001h
PORTD_RD1_POSITION                       equ 0001h
PORTD_RD1_SIZE                           equ 0001h
PORTD_RD1_LENGTH                         equ 0001h
PORTD_RD1_MASK                           equ 0002h
PORTD_RD2_POSN                           equ 0002h
PORTD_RD2_POSITION                       equ 0002h
PORTD_RD2_SIZE                           equ 0001h
PORTD_RD2_LENGTH                         equ 0001h
PORTD_RD2_MASK                           equ 0004h
PORTD_RD3_POSN                           equ 0003h
PORTD_RD3_POSITION                       equ 0003h
PORTD_RD3_SIZE                           equ 0001h
PORTD_RD3_LENGTH                         equ 0001h
PORTD_RD3_MASK                           equ 0008h
PORTD_RD4_POSN                           equ 0004h
PORTD_RD4_POSITION                       equ 0004h
PORTD_RD4_SIZE                           equ 0001h
PORTD_RD4_LENGTH                         equ 0001h
PORTD_RD4_MASK                           equ 0010h
PORTD_RD5_POSN                           equ 0005h
PORTD_RD5_POSITION                       equ 0005h
PORTD_RD5_SIZE                           equ 0001h
PORTD_RD5_LENGTH                         equ 0001h
PORTD_RD5_MASK                           equ 0020h
PORTD_RD6_POSN                           equ 0006h
PORTD_RD6_POSITION                       equ 0006h
PORTD_RD6_SIZE                           equ 0001h
PORTD_RD6_LENGTH                         equ 0001h
PORTD_RD6_MASK                           equ 0040h
PORTD_RD7_POSN                           equ 0007h
PORTD_RD7_POSITION                       equ 0007h
PORTD_RD7_SIZE                           equ 0001h
PORTD_RD7_LENGTH                         equ 0001h
PORTD_RD7_MASK                           equ 0080h

// Register: PORTE
#define PORTE PORTE
PORTE                                    equ 0010h
// bitfield definitions
PORTE_RE0_POSN                           equ 0000h
PORTE_RE0_POSITION                       equ 0000h
PORTE_RE0_SIZE                           equ 0001h
PORTE_RE0_LENGTH                         equ 0001h
PORTE_RE0_MASK                           equ 0001h
PORTE_RE1_POSN                           equ 0001h
PORTE_RE1_POSITION                       equ 0001h
PORTE_RE1_SIZE                           equ 0001h
PORTE_RE1_LENGTH                         equ 0001h
PORTE_RE1_MASK                           equ 0002h
PORTE_RE2_POSN                           equ 0002h
PORTE_RE2_POSITION                       equ 0002h
PORTE_RE2_SIZE                           equ 0001h
PORTE_RE2_LENGTH                         equ 0001h
PORTE_RE2_MASK                           equ 0004h
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
PIR1_SSPIF_POSN                          equ 0003h
PIR1_SSPIF_POSITION                      equ 0003h
PIR1_SSPIF_SIZE                          equ 0001h
PIR1_SSPIF_LENGTH                        equ 0001h
PIR1_SSPIF_MASK                          equ 0008h
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
PIR2_LCDIF_POSN                          equ 0002h
PIR2_LCDIF_POSITION                      equ 0002h
PIR2_LCDIF_SIZE                          equ 0001h
PIR2_LCDIF_LENGTH                        equ 0001h
PIR2_LCDIF_MASK                          equ 0004h
PIR2_BCLIF_POSN                          equ 0003h
PIR2_BCLIF_POSITION                      equ 0003h
PIR2_BCLIF_SIZE                          equ 0001h
PIR2_BCLIF_LENGTH                        equ 0001h
PIR2_BCLIF_MASK                          equ 0008h
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

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0013h
// bitfield definitions
PIR3_TMR4IF_POSN                         equ 0001h
PIR3_TMR4IF_POSITION                     equ 0001h
PIR3_TMR4IF_SIZE                         equ 0001h
PIR3_TMR4IF_LENGTH                       equ 0001h
PIR3_TMR4IF_MASK                         equ 0002h
PIR3_TMR6IF_POSN                         equ 0003h
PIR3_TMR6IF_POSITION                     equ 0003h
PIR3_TMR6IF_SIZE                         equ 0001h
PIR3_TMR6IF_LENGTH                       equ 0001h
PIR3_TMR6IF_MASK                         equ 0008h
PIR3_CCP3IF_POSN                         equ 0004h
PIR3_CCP3IF_POSITION                     equ 0004h
PIR3_CCP3IF_SIZE                         equ 0001h
PIR3_CCP3IF_LENGTH                       equ 0001h
PIR3_CCP3IF_MASK                         equ 0010h
PIR3_CCP4IF_POSN                         equ 0005h
PIR3_CCP4IF_POSITION                     equ 0005h
PIR3_CCP4IF_SIZE                         equ 0001h
PIR3_CCP4IF_LENGTH                       equ 0001h
PIR3_CCP4IF_MASK                         equ 0020h
PIR3_CCP5IF_POSN                         equ 0006h
PIR3_CCP5IF_POSITION                     equ 0006h
PIR3_CCP5IF_SIZE                         equ 0001h
PIR3_CCP5IF_LENGTH                       equ 0001h
PIR3_CCP5IF_MASK                         equ 0040h

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
T1GCON_T1GSS_POSN                        equ 0000h
T1GCON_T1GSS_POSITION                    equ 0000h
T1GCON_T1GSS_SIZE                        equ 0002h
T1GCON_T1GSS_LENGTH                      equ 0002h
T1GCON_T1GSS_MASK                        equ 0003h
T1GCON_T1GGO_POSN                        equ 0003h
T1GCON_T1GGO_POSITION                    equ 0003h
T1GCON_T1GGO_SIZE                        equ 0001h
T1GCON_T1GGO_LENGTH                      equ 0001h
T1GCON_T1GGO_MASK                        equ 0008h

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

// Register: CPSCON0
#define CPSCON0 CPSCON0
CPSCON0                                  equ 001Eh
// bitfield definitions
CPSCON0_T0XCS_POSN                       equ 0000h
CPSCON0_T0XCS_POSITION                   equ 0000h
CPSCON0_T0XCS_SIZE                       equ 0001h
CPSCON0_T0XCS_LENGTH                     equ 0001h
CPSCON0_T0XCS_MASK                       equ 0001h
CPSCON0_CPSOUT_POSN                      equ 0001h
CPSCON0_CPSOUT_POSITION                  equ 0001h
CPSCON0_CPSOUT_SIZE                      equ 0001h
CPSCON0_CPSOUT_LENGTH                    equ 0001h
CPSCON0_CPSOUT_MASK                      equ 0002h
CPSCON0_CPSRNG0_POSN                     equ 0002h
CPSCON0_CPSRNG0_POSITION                 equ 0002h
CPSCON0_CPSRNG0_SIZE                     equ 0001h
CPSCON0_CPSRNG0_LENGTH                   equ 0001h
CPSCON0_CPSRNG0_MASK                     equ 0004h
CPSCON0_CPSRNG1_POSN                     equ 0003h
CPSCON0_CPSRNG1_POSITION                 equ 0003h
CPSCON0_CPSRNG1_SIZE                     equ 0001h
CPSCON0_CPSRNG1_LENGTH                   equ 0001h
CPSCON0_CPSRNG1_MASK                     equ 0008h
CPSCON0_CPSON_POSN                       equ 0007h
CPSCON0_CPSON_POSITION                   equ 0007h
CPSCON0_CPSON_SIZE                       equ 0001h
CPSCON0_CPSON_LENGTH                     equ 0001h
CPSCON0_CPSON_MASK                       equ 0080h
CPSCON0_CPSRNG_POSN                      equ 0002h
CPSCON0_CPSRNG_POSITION                  equ 0002h
CPSCON0_CPSRNG_SIZE                      equ 0002h
CPSCON0_CPSRNG_LENGTH                    equ 0002h
CPSCON0_CPSRNG_MASK                      equ 000Ch

// Register: CPSCON1
#define CPSCON1 CPSCON1
CPSCON1                                  equ 001Fh
// bitfield definitions
CPSCON1_CPSCH0_POSN                      equ 0000h
CPSCON1_CPSCH0_POSITION                  equ 0000h
CPSCON1_CPSCH0_SIZE                      equ 0001h
CPSCON1_CPSCH0_LENGTH                    equ 0001h
CPSCON1_CPSCH0_MASK                      equ 0001h
CPSCON1_CPSCH1_POSN                      equ 0001h
CPSCON1_CPSCH1_POSITION                  equ 0001h
CPSCON1_CPSCH1_SIZE                      equ 0001h
CPSCON1_CPSCH1_LENGTH                    equ 0001h
CPSCON1_CPSCH1_MASK                      equ 0002h
CPSCON1_CPSCH2_POSN                      equ 0002h
CPSCON1_CPSCH2_POSITION                  equ 0002h
CPSCON1_CPSCH2_SIZE                      equ 0001h
CPSCON1_CPSCH2_LENGTH                    equ 0001h
CPSCON1_CPSCH2_MASK                      equ 0004h
CPSCON1_CPSCH3_POSN                      equ 0003h
CPSCON1_CPSCH3_POSITION                  equ 0003h
CPSCON1_CPSCH3_SIZE                      equ 0001h
CPSCON1_CPSCH3_LENGTH                    equ 0001h
CPSCON1_CPSCH3_MASK                      equ 0008h
CPSCON1_CPSCH_POSN                       equ 0000h
CPSCON1_CPSCH_POSITION                   equ 0000h
CPSCON1_CPSCH_SIZE                       equ 0004h
CPSCON1_CPSCH_LENGTH                     equ 0004h
CPSCON1_CPSCH_MASK                       equ 000Fh

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

// Register: TRISD
#define TRISD TRISD
TRISD                                    equ 008Fh
// bitfield definitions
TRISD_TRISD0_POSN                        equ 0000h
TRISD_TRISD0_POSITION                    equ 0000h
TRISD_TRISD0_SIZE                        equ 0001h
TRISD_TRISD0_LENGTH                      equ 0001h
TRISD_TRISD0_MASK                        equ 0001h
TRISD_TRISD1_POSN                        equ 0001h
TRISD_TRISD1_POSITION                    equ 0001h
TRISD_TRISD1_SIZE                        equ 0001h
TRISD_TRISD1_LENGTH                      equ 0001h
TRISD_TRISD1_MASK                        equ 0002h
TRISD_TRISD2_POSN                        equ 0002h
TRISD_TRISD2_POSITION                    equ 0002h
TRISD_TRISD2_SIZE                        equ 0001h
TRISD_TRISD2_LENGTH                      equ 0001h
TRISD_TRISD2_MASK                        equ 0004h
TRISD_TRISD3_POSN                        equ 0003h
TRISD_TRISD3_POSITION                    equ 0003h
TRISD_TRISD3_SIZE                        equ 0001h
TRISD_TRISD3_LENGTH                      equ 0001h
TRISD_TRISD3_MASK                        equ 0008h
TRISD_TRISD4_POSN                        equ 0004h
TRISD_TRISD4_POSITION                    equ 0004h
TRISD_TRISD4_SIZE                        equ 0001h
TRISD_TRISD4_LENGTH                      equ 0001h
TRISD_TRISD4_MASK                        equ 0010h
TRISD_TRISD5_POSN                        equ 0005h
TRISD_TRISD5_POSITION                    equ 0005h
TRISD_TRISD5_SIZE                        equ 0001h
TRISD_TRISD5_LENGTH                      equ 0001h
TRISD_TRISD5_MASK                        equ 0020h
TRISD_TRISD6_POSN                        equ 0006h
TRISD_TRISD6_POSITION                    equ 0006h
TRISD_TRISD6_SIZE                        equ 0001h
TRISD_TRISD6_LENGTH                      equ 0001h
TRISD_TRISD6_MASK                        equ 0040h
TRISD_TRISD7_POSN                        equ 0007h
TRISD_TRISD7_POSITION                    equ 0007h
TRISD_TRISD7_SIZE                        equ 0001h
TRISD_TRISD7_LENGTH                      equ 0001h
TRISD_TRISD7_MASK                        equ 0080h

// Register: TRISE
#define TRISE TRISE
TRISE                                    equ 0090h
// bitfield definitions
TRISE_TRISE0_POSN                        equ 0000h
TRISE_TRISE0_POSITION                    equ 0000h
TRISE_TRISE0_SIZE                        equ 0001h
TRISE_TRISE0_LENGTH                      equ 0001h
TRISE_TRISE0_MASK                        equ 0001h
TRISE_TRISE1_POSN                        equ 0001h
TRISE_TRISE1_POSITION                    equ 0001h
TRISE_TRISE1_SIZE                        equ 0001h
TRISE_TRISE1_LENGTH                      equ 0001h
TRISE_TRISE1_MASK                        equ 0002h
TRISE_TRISE2_POSN                        equ 0002h
TRISE_TRISE2_POSITION                    equ 0002h
TRISE_TRISE2_SIZE                        equ 0001h
TRISE_TRISE2_LENGTH                      equ 0001h
TRISE_TRISE2_MASK                        equ 0004h
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
PIE1_SSPIE_POSN                          equ 0003h
PIE1_SSPIE_POSITION                      equ 0003h
PIE1_SSPIE_SIZE                          equ 0001h
PIE1_SSPIE_LENGTH                        equ 0001h
PIE1_SSPIE_MASK                          equ 0008h
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
PIE2_LCDIE_POSN                          equ 0002h
PIE2_LCDIE_POSITION                      equ 0002h
PIE2_LCDIE_SIZE                          equ 0001h
PIE2_LCDIE_LENGTH                        equ 0001h
PIE2_LCDIE_MASK                          equ 0004h
PIE2_BCLIE_POSN                          equ 0003h
PIE2_BCLIE_POSITION                      equ 0003h
PIE2_BCLIE_SIZE                          equ 0001h
PIE2_BCLIE_LENGTH                        equ 0001h
PIE2_BCLIE_MASK                          equ 0008h
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

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0093h
// bitfield definitions
PIE3_TMR4IE_POSN                         equ 0001h
PIE3_TMR4IE_POSITION                     equ 0001h
PIE3_TMR4IE_SIZE                         equ 0001h
PIE3_TMR4IE_LENGTH                       equ 0001h
PIE3_TMR4IE_MASK                         equ 0002h
PIE3_TMR6IE_POSN                         equ 0003h
PIE3_TMR6IE_POSITION                     equ 0003h
PIE3_TMR6IE_SIZE                         equ 0001h
PIE3_TMR6IE_LENGTH                       equ 0001h
PIE3_TMR6IE_MASK                         equ 0008h
PIE3_CCP3IE_POSN                         equ 0004h
PIE3_CCP3IE_POSITION                     equ 0004h
PIE3_CCP3IE_SIZE                         equ 0001h
PIE3_CCP3IE_LENGTH                       equ 0001h
PIE3_CCP3IE_MASK                         equ 0010h
PIE3_CCP4IE_POSN                         equ 0005h
PIE3_CCP4IE_POSITION                     equ 0005h
PIE3_CCP4IE_SIZE                         equ 0001h
PIE3_CCP4IE_LENGTH                       equ 0001h
PIE3_CCP4IE_MASK                         equ 0020h
PIE3_CCP5IE_POSN                         equ 0006h
PIE3_CCP5IE_POSITION                     equ 0006h
PIE3_CCP5IE_SIZE                         equ 0001h
PIE3_CCP5IE_LENGTH                       equ 0001h
PIE3_CCP5IE_MASK                         equ 0040h

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
ADCON0_nDONE_POSN                        equ 0001h
ADCON0_nDONE_POSITION                    equ 0001h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0002h

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

// Register: LATD
#define LATD LATD
LATD                                     equ 010Fh
// bitfield definitions
LATD_LATD0_POSN                          equ 0000h
LATD_LATD0_POSITION                      equ 0000h
LATD_LATD0_SIZE                          equ 0001h
LATD_LATD0_LENGTH                        equ 0001h
LATD_LATD0_MASK                          equ 0001h
LATD_LATD1_POSN                          equ 0001h
LATD_LATD1_POSITION                      equ 0001h
LATD_LATD1_SIZE                          equ 0001h
LATD_LATD1_LENGTH                        equ 0001h
LATD_LATD1_MASK                          equ 0002h
LATD_LATD2_POSN                          equ 0002h
LATD_LATD2_POSITION                      equ 0002h
LATD_LATD2_SIZE                          equ 0001h
LATD_LATD2_LENGTH                        equ 0001h
LATD_LATD2_MASK                          equ 0004h
LATD_LATD3_POSN                          equ 0003h
LATD_LATD3_POSITION                      equ 0003h
LATD_LATD3_SIZE                          equ 0001h
LATD_LATD3_LENGTH                        equ 0001h
LATD_LATD3_MASK                          equ 0008h
LATD_LATD4_POSN                          equ 0004h
LATD_LATD4_POSITION                      equ 0004h
LATD_LATD4_SIZE                          equ 0001h
LATD_LATD4_LENGTH                        equ 0001h
LATD_LATD4_MASK                          equ 0010h
LATD_LATD5_POSN                          equ 0005h
LATD_LATD5_POSITION                      equ 0005h
LATD_LATD5_SIZE                          equ 0001h
LATD_LATD5_LENGTH                        equ 0001h
LATD_LATD5_MASK                          equ 0020h
LATD_LATD6_POSN                          equ 0006h
LATD_LATD6_POSITION                      equ 0006h
LATD_LATD6_SIZE                          equ 0001h
LATD_LATD6_LENGTH                        equ 0001h
LATD_LATD6_MASK                          equ 0040h
LATD_LATD7_POSN                          equ 0007h
LATD_LATD7_POSITION                      equ 0007h
LATD_LATD7_SIZE                          equ 0001h
LATD_LATD7_LENGTH                        equ 0001h
LATD_LATD7_MASK                          equ 0080h
LATD_LATD_POSN                           equ 0000h
LATD_LATD_POSITION                       equ 0000h
LATD_LATD_SIZE                           equ 0008h
LATD_LATD_LENGTH                         equ 0008h
LATD_LATD_MASK                           equ 00FFh

// Register: LATE
#define LATE LATE
LATE                                     equ 0110h
// bitfield definitions
LATE_LATE0_POSN                          equ 0000h
LATE_LATE0_POSITION                      equ 0000h
LATE_LATE0_SIZE                          equ 0001h
LATE_LATE0_LENGTH                        equ 0001h
LATE_LATE0_MASK                          equ 0001h
LATE_LATE1_POSN                          equ 0001h
LATE_LATE1_POSITION                      equ 0001h
LATE_LATE1_SIZE                          equ 0001h
LATE_LATE1_LENGTH                        equ 0001h
LATE_LATE1_MASK                          equ 0002h
LATE_LATE2_POSN                          equ 0002h
LATE_LATE2_POSITION                      equ 0002h
LATE_LATE2_SIZE                          equ 0001h
LATE_LATE2_LENGTH                        equ 0001h
LATE_LATE2_MASK                          equ 0004h
LATE_LATE3_POSN                          equ 0003h
LATE_LATE3_POSITION                      equ 0003h
LATE_LATE3_SIZE                          equ 0001h
LATE_LATE3_LENGTH                        equ 0001h
LATE_LATE3_MASK                          equ 0008h

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
CM1CON1_C1PCH0_POSN                      equ 0004h
CM1CON1_C1PCH0_POSITION                  equ 0004h
CM1CON1_C1PCH0_SIZE                      equ 0001h
CM1CON1_C1PCH0_LENGTH                    equ 0001h
CM1CON1_C1PCH0_MASK                      equ 0010h
CM1CON1_C1PCH1_POSN                      equ 0005h
CM1CON1_C1PCH1_POSITION                  equ 0005h
CM1CON1_C1PCH1_SIZE                      equ 0001h
CM1CON1_C1PCH1_LENGTH                    equ 0001h
CM1CON1_C1PCH1_MASK                      equ 0020h
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
CM1CON1_C1NCH_SIZE                       equ 0002h
CM1CON1_C1NCH_LENGTH                     equ 0002h
CM1CON1_C1NCH_MASK                       equ 0003h
CM1CON1_C1PCH_POSN                       equ 0004h
CM1CON1_C1PCH_POSITION                   equ 0004h
CM1CON1_C1PCH_SIZE                       equ 0002h
CM1CON1_C1PCH_LENGTH                     equ 0002h
CM1CON1_C1PCH_MASK                       equ 0030h

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
CM2CON1_C2PCH0_POSN                      equ 0004h
CM2CON1_C2PCH0_POSITION                  equ 0004h
CM2CON1_C2PCH0_SIZE                      equ 0001h
CM2CON1_C2PCH0_LENGTH                    equ 0001h
CM2CON1_C2PCH0_MASK                      equ 0010h
CM2CON1_C2PCH1_POSN                      equ 0005h
CM2CON1_C2PCH1_POSITION                  equ 0005h
CM2CON1_C2PCH1_SIZE                      equ 0001h
CM2CON1_C2PCH1_LENGTH                    equ 0001h
CM2CON1_C2PCH1_MASK                      equ 0020h
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
CM2CON1_C2NCH_SIZE                       equ 0002h
CM2CON1_C2NCH_LENGTH                     equ 0002h
CM2CON1_C2NCH_MASK                       equ 0003h
CM2CON1_C2PCH_POSN                       equ 0004h
CM2CON1_C2PCH_POSITION                   equ 0004h
CM2CON1_C2PCH_SIZE                       equ 0002h
CM2CON1_C2PCH_LENGTH                     equ 0002h
CM2CON1_C2PCH_MASK                       equ 0030h

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
DACCON0_DACOE_POSN                       equ 0005h
DACCON0_DACOE_POSITION                   equ 0005h
DACCON0_DACOE_SIZE                       equ 0001h
DACCON0_DACOE_LENGTH                     equ 0001h
DACCON0_DACOE_MASK                       equ 0020h
DACCON0_DACLPS_POSN                      equ 0006h
DACCON0_DACLPS_POSITION                  equ 0006h
DACCON0_DACLPS_SIZE                      equ 0001h
DACCON0_DACLPS_LENGTH                    equ 0001h
DACCON0_DACLPS_MASK                      equ 0040h
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
DACCON1_DACR_POSN                        equ 0000h
DACCON1_DACR_POSITION                    equ 0000h
DACCON1_DACR_SIZE                        equ 0005h
DACCON1_DACR_LENGTH                      equ 0005h
DACCON1_DACR_MASK                        equ 001Fh

// Register: SRCON0
#define SRCON0 SRCON0
SRCON0                                   equ 011Ah
// bitfield definitions
SRCON0_SRPR_POSN                         equ 0000h
SRCON0_SRPR_POSITION                     equ 0000h
SRCON0_SRPR_SIZE                         equ 0001h
SRCON0_SRPR_LENGTH                       equ 0001h
SRCON0_SRPR_MASK                         equ 0001h
SRCON0_SRPS_POSN                         equ 0001h
SRCON0_SRPS_POSITION                     equ 0001h
SRCON0_SRPS_SIZE                         equ 0001h
SRCON0_SRPS_LENGTH                       equ 0001h
SRCON0_SRPS_MASK                         equ 0002h
SRCON0_SRNQEN_POSN                       equ 0002h
SRCON0_SRNQEN_POSITION                   equ 0002h
SRCON0_SRNQEN_SIZE                       equ 0001h
SRCON0_SRNQEN_LENGTH                     equ 0001h
SRCON0_SRNQEN_MASK                       equ 0004h
SRCON0_SRQEN_POSN                        equ 0003h
SRCON0_SRQEN_POSITION                    equ 0003h
SRCON0_SRQEN_SIZE                        equ 0001h
SRCON0_SRQEN_LENGTH                      equ 0001h
SRCON0_SRQEN_MASK                        equ 0008h
SRCON0_SRCLK0_POSN                       equ 0004h
SRCON0_SRCLK0_POSITION                   equ 0004h
SRCON0_SRCLK0_SIZE                       equ 0001h
SRCON0_SRCLK0_LENGTH                     equ 0001h
SRCON0_SRCLK0_MASK                       equ 0010h
SRCON0_SRCLK1_POSN                       equ 0005h
SRCON0_SRCLK1_POSITION                   equ 0005h
SRCON0_SRCLK1_SIZE                       equ 0001h
SRCON0_SRCLK1_LENGTH                     equ 0001h
SRCON0_SRCLK1_MASK                       equ 0020h
SRCON0_SRCLK2_POSN                       equ 0006h
SRCON0_SRCLK2_POSITION                   equ 0006h
SRCON0_SRCLK2_SIZE                       equ 0001h
SRCON0_SRCLK2_LENGTH                     equ 0001h
SRCON0_SRCLK2_MASK                       equ 0040h
SRCON0_SRLEN_POSN                        equ 0007h
SRCON0_SRLEN_POSITION                    equ 0007h
SRCON0_SRLEN_SIZE                        equ 0001h
SRCON0_SRLEN_LENGTH                      equ 0001h
SRCON0_SRLEN_MASK                        equ 0080h
SRCON0_SRCLK_POSN                        equ 0004h
SRCON0_SRCLK_POSITION                    equ 0004h
SRCON0_SRCLK_SIZE                        equ 0003h
SRCON0_SRCLK_LENGTH                      equ 0003h
SRCON0_SRCLK_MASK                        equ 0070h

// Register: SRCON1
#define SRCON1 SRCON1
SRCON1                                   equ 011Bh
// bitfield definitions
SRCON1_SRRC1E_POSN                       equ 0000h
SRCON1_SRRC1E_POSITION                   equ 0000h
SRCON1_SRRC1E_SIZE                       equ 0001h
SRCON1_SRRC1E_LENGTH                     equ 0001h
SRCON1_SRRC1E_MASK                       equ 0001h
SRCON1_SRRC2E_POSN                       equ 0001h
SRCON1_SRRC2E_POSITION                   equ 0001h
SRCON1_SRRC2E_SIZE                       equ 0001h
SRCON1_SRRC2E_LENGTH                     equ 0001h
SRCON1_SRRC2E_MASK                       equ 0002h
SRCON1_SRRCKE_POSN                       equ 0002h
SRCON1_SRRCKE_POSITION                   equ 0002h
SRCON1_SRRCKE_SIZE                       equ 0001h
SRCON1_SRRCKE_LENGTH                     equ 0001h
SRCON1_SRRCKE_MASK                       equ 0004h
SRCON1_SRRPE_POSN                        equ 0003h
SRCON1_SRRPE_POSITION                    equ 0003h
SRCON1_SRRPE_SIZE                        equ 0001h
SRCON1_SRRPE_LENGTH                      equ 0001h
SRCON1_SRRPE_MASK                        equ 0008h
SRCON1_SRSC1E_POSN                       equ 0004h
SRCON1_SRSC1E_POSITION                   equ 0004h
SRCON1_SRSC1E_SIZE                       equ 0001h
SRCON1_SRSC1E_LENGTH                     equ 0001h
SRCON1_SRSC1E_MASK                       equ 0010h
SRCON1_SRSC2E_POSN                       equ 0005h
SRCON1_SRSC2E_POSITION                   equ 0005h
SRCON1_SRSC2E_SIZE                       equ 0001h
SRCON1_SRSC2E_LENGTH                     equ 0001h
SRCON1_SRSC2E_MASK                       equ 0020h
SRCON1_SRSCKE_POSN                       equ 0006h
SRCON1_SRSCKE_POSITION                   equ 0006h
SRCON1_SRSCKE_SIZE                       equ 0001h
SRCON1_SRSCKE_LENGTH                     equ 0001h
SRCON1_SRSCKE_MASK                       equ 0040h
SRCON1_SRSPE_POSN                        equ 0007h
SRCON1_SRSPE_POSITION                    equ 0007h
SRCON1_SRSPE_SIZE                        equ 0001h
SRCON1_SRSPE_LENGTH                      equ 0001h
SRCON1_SRSPE_MASK                        equ 0080h

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 011Dh
// bitfield definitions
APFCON_CCP2SEL_POSN                      equ 0000h
APFCON_CCP2SEL_POSITION                  equ 0000h
APFCON_CCP2SEL_SIZE                      equ 0001h
APFCON_CCP2SEL_LENGTH                    equ 0001h
APFCON_CCP2SEL_MASK                      equ 0001h
APFCON_SSSEL_POSN                        equ 0001h
APFCON_SSSEL_POSITION                    equ 0001h
APFCON_SSSEL_SIZE                        equ 0001h
APFCON_SSSEL_LENGTH                      equ 0001h
APFCON_SSSEL_MASK                        equ 0002h
APFCON_C2OUTSEL_POSN                     equ 0002h
APFCON_C2OUTSEL_POSITION                 equ 0002h
APFCON_C2OUTSEL_SIZE                     equ 0001h
APFCON_C2OUTSEL_LENGTH                   equ 0001h
APFCON_C2OUTSEL_MASK                     equ 0004h
APFCON_SRNQSEL_POSN                      equ 0003h
APFCON_SRNQSEL_POSITION                  equ 0003h
APFCON_SRNQSEL_SIZE                      equ 0001h
APFCON_SRNQSEL_LENGTH                    equ 0001h
APFCON_SRNQSEL_MASK                      equ 0008h
APFCON_P2BSEL_POSN                       equ 0004h
APFCON_P2BSEL_POSITION                   equ 0004h
APFCON_P2BSEL_SIZE                       equ 0001h
APFCON_P2BSEL_LENGTH                     equ 0001h
APFCON_P2BSEL_MASK                       equ 0010h
APFCON_T1GSEL_POSN                       equ 0005h
APFCON_T1GSEL_POSITION                   equ 0005h
APFCON_T1GSEL_SIZE                       equ 0001h
APFCON_T1GSEL_LENGTH                     equ 0001h
APFCON_T1GSEL_MASK                       equ 0020h
APFCON_CCP3SEL_POSN                      equ 0006h
APFCON_CCP3SEL_POSITION                  equ 0006h
APFCON_CCP3SEL_SIZE                      equ 0001h
APFCON_CCP3SEL_LENGTH                    equ 0001h
APFCON_CCP3SEL_MASK                      equ 0040h

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
ANSELA_ANSELA_POSN                       equ 0000h
ANSELA_ANSELA_POSITION                   equ 0000h
ANSELA_ANSELA_SIZE                       equ 0006h
ANSELA_ANSELA_LENGTH                     equ 0006h
ANSELA_ANSELA_MASK                       equ 003Fh

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

// Register: ANSELD
#define ANSELD ANSELD
ANSELD                                   equ 018Fh
// bitfield definitions
ANSELD_ANSD0_POSN                        equ 0000h
ANSELD_ANSD0_POSITION                    equ 0000h
ANSELD_ANSD0_SIZE                        equ 0001h
ANSELD_ANSD0_LENGTH                      equ 0001h
ANSELD_ANSD0_MASK                        equ 0001h
ANSELD_ANSD1_POSN                        equ 0001h
ANSELD_ANSD1_POSITION                    equ 0001h
ANSELD_ANSD1_SIZE                        equ 0001h
ANSELD_ANSD1_LENGTH                      equ 0001h
ANSELD_ANSD1_MASK                        equ 0002h
ANSELD_ANSD2_POSN                        equ 0002h
ANSELD_ANSD2_POSITION                    equ 0002h
ANSELD_ANSD2_SIZE                        equ 0001h
ANSELD_ANSD2_LENGTH                      equ 0001h
ANSELD_ANSD2_MASK                        equ 0004h
ANSELD_ANSD3_POSN                        equ 0003h
ANSELD_ANSD3_POSITION                    equ 0003h
ANSELD_ANSD3_SIZE                        equ 0001h
ANSELD_ANSD3_LENGTH                      equ 0001h
ANSELD_ANSD3_MASK                        equ 0008h
ANSELD_ANSD4_POSN                        equ 0004h
ANSELD_ANSD4_POSITION                    equ 0004h
ANSELD_ANSD4_SIZE                        equ 0001h
ANSELD_ANSD4_LENGTH                      equ 0001h
ANSELD_ANSD4_MASK                        equ 0010h
ANSELD_ANSD5_POSN                        equ 0005h
ANSELD_ANSD5_POSITION                    equ 0005h
ANSELD_ANSD5_SIZE                        equ 0001h
ANSELD_ANSD5_LENGTH                      equ 0001h
ANSELD_ANSD5_MASK                        equ 0020h
ANSELD_ANSD6_POSN                        equ 0006h
ANSELD_ANSD6_POSITION                    equ 0006h
ANSELD_ANSD6_SIZE                        equ 0001h
ANSELD_ANSD6_LENGTH                      equ 0001h
ANSELD_ANSD6_MASK                        equ 0040h
ANSELD_ANSD7_POSN                        equ 0007h
ANSELD_ANSD7_POSITION                    equ 0007h
ANSELD_ANSD7_SIZE                        equ 0001h
ANSELD_ANSD7_LENGTH                      equ 0001h
ANSELD_ANSD7_MASK                        equ 0080h
ANSELD_ANSELD_POSN                       equ 0000h
ANSELD_ANSELD_POSITION                   equ 0000h
ANSELD_ANSELD_SIZE                       equ 0008h
ANSELD_ANSELD_LENGTH                     equ 0008h
ANSELD_ANSELD_MASK                       equ 00FFh

// Register: ANSELE
#define ANSELE ANSELE
ANSELE                                   equ 0190h
// bitfield definitions
ANSELE_ANSE0_POSN                        equ 0000h
ANSELE_ANSE0_POSITION                    equ 0000h
ANSELE_ANSE0_SIZE                        equ 0001h
ANSELE_ANSE0_LENGTH                      equ 0001h
ANSELE_ANSE0_MASK                        equ 0001h
ANSELE_ANSE1_POSN                        equ 0001h
ANSELE_ANSE1_POSITION                    equ 0001h
ANSELE_ANSE1_SIZE                        equ 0001h
ANSELE_ANSE1_LENGTH                      equ 0001h
ANSELE_ANSE1_MASK                        equ 0002h
ANSELE_ANSE2_POSN                        equ 0002h
ANSELE_ANSE2_POSITION                    equ 0002h
ANSELE_ANSE2_SIZE                        equ 0001h
ANSELE_ANSE2_LENGTH                      equ 0001h
ANSELE_ANSE2_MASK                        equ 0004h
ANSELE_ANSELE_POSN                       equ 0000h
ANSELE_ANSELE_POSITION                   equ 0000h
ANSELE_ANSELE_SIZE                       equ 0003h
ANSELE_ANSELE_LENGTH                     equ 0003h
ANSELE_ANSELE_MASK                       equ 0007h

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

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
SP1BRGL                                  equ 019Bh
// bitfield definitions
SP1BRGL_SPBRGL_POSN                      equ 0000h
SP1BRGL_SPBRGL_POSITION                  equ 0000h
SP1BRGL_SPBRGL_SIZE                      equ 0008h
SP1BRGL_SPBRGL_LENGTH                    equ 0008h
SP1BRGL_SPBRGL_MASK                      equ 00FFh

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
SP1BRGH                                  equ 019Ch
// bitfield definitions
SP1BRGH_SPBRGH_POSN                      equ 0000h
SP1BRGH_SPBRGH_POSITION                  equ 0000h
SP1BRGH_SPBRGH_SIZE                      equ 0008h
SP1BRGH_SPBRGH_LENGTH                    equ 0008h
SP1BRGH_SPBRGH_MASK                      equ 00FFh

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

// Register: PWM1CON
#define PWM1CON PWM1CON
PWM1CON                                  equ 0294h
// bitfield definitions
PWM1CON_P1DC0_POSN                       equ 0000h
PWM1CON_P1DC0_POSITION                   equ 0000h
PWM1CON_P1DC0_SIZE                       equ 0001h
PWM1CON_P1DC0_LENGTH                     equ 0001h
PWM1CON_P1DC0_MASK                       equ 0001h
PWM1CON_P1DC1_POSN                       equ 0001h
PWM1CON_P1DC1_POSITION                   equ 0001h
PWM1CON_P1DC1_SIZE                       equ 0001h
PWM1CON_P1DC1_LENGTH                     equ 0001h
PWM1CON_P1DC1_MASK                       equ 0002h
PWM1CON_P1DC2_POSN                       equ 0002h
PWM1CON_P1DC2_POSITION                   equ 0002h
PWM1CON_P1DC2_SIZE                       equ 0001h
PWM1CON_P1DC2_LENGTH                     equ 0001h
PWM1CON_P1DC2_MASK                       equ 0004h
PWM1CON_P1DC3_POSN                       equ 0003h
PWM1CON_P1DC3_POSITION                   equ 0003h
PWM1CON_P1DC3_SIZE                       equ 0001h
PWM1CON_P1DC3_LENGTH                     equ 0001h
PWM1CON_P1DC3_MASK                       equ 0008h
PWM1CON_P1DC4_POSN                       equ 0004h
PWM1CON_P1DC4_POSITION                   equ 0004h
PWM1CON_P1DC4_SIZE                       equ 0001h
PWM1CON_P1DC4_LENGTH                     equ 0001h
PWM1CON_P1DC4_MASK                       equ 0010h
PWM1CON_P1DC5_POSN                       equ 0005h
PWM1CON_P1DC5_POSITION                   equ 0005h
PWM1CON_P1DC5_SIZE                       equ 0001h
PWM1CON_P1DC5_LENGTH                     equ 0001h
PWM1CON_P1DC5_MASK                       equ 0020h
PWM1CON_P1DC6_POSN                       equ 0006h
PWM1CON_P1DC6_POSITION                   equ 0006h
PWM1CON_P1DC6_SIZE                       equ 0001h
PWM1CON_P1DC6_LENGTH                     equ 0001h
PWM1CON_P1DC6_MASK                       equ 0040h
PWM1CON_P1RSEN_POSN                      equ 0007h
PWM1CON_P1RSEN_POSITION                  equ 0007h
PWM1CON_P1RSEN_SIZE                      equ 0001h
PWM1CON_P1RSEN_LENGTH                    equ 0001h
PWM1CON_P1RSEN_MASK                      equ 0080h

// Register: CCP1AS
#define CCP1AS CCP1AS
CCP1AS                                   equ 0295h
// bitfield definitions
CCP1AS_PSS1BD0_POSN                      equ 0000h
CCP1AS_PSS1BD0_POSITION                  equ 0000h
CCP1AS_PSS1BD0_SIZE                      equ 0001h
CCP1AS_PSS1BD0_LENGTH                    equ 0001h
CCP1AS_PSS1BD0_MASK                      equ 0001h
CCP1AS_PSS1BD1_POSN                      equ 0001h
CCP1AS_PSS1BD1_POSITION                  equ 0001h
CCP1AS_PSS1BD1_SIZE                      equ 0001h
CCP1AS_PSS1BD1_LENGTH                    equ 0001h
CCP1AS_PSS1BD1_MASK                      equ 0002h
CCP1AS_PSS1AC0_POSN                      equ 0002h
CCP1AS_PSS1AC0_POSITION                  equ 0002h
CCP1AS_PSS1AC0_SIZE                      equ 0001h
CCP1AS_PSS1AC0_LENGTH                    equ 0001h
CCP1AS_PSS1AC0_MASK                      equ 0004h
CCP1AS_PSS1AC1_POSN                      equ 0003h
CCP1AS_PSS1AC1_POSITION                  equ 0003h
CCP1AS_PSS1AC1_SIZE                      equ 0001h
CCP1AS_PSS1AC1_LENGTH                    equ 0001h
CCP1AS_PSS1AC1_MASK                      equ 0008h
CCP1AS_CCP1AS0_POSN                      equ 0004h
CCP1AS_CCP1AS0_POSITION                  equ 0004h
CCP1AS_CCP1AS0_SIZE                      equ 0001h
CCP1AS_CCP1AS0_LENGTH                    equ 0001h
CCP1AS_CCP1AS0_MASK                      equ 0010h
CCP1AS_CCP1AS1_POSN                      equ 0005h
CCP1AS_CCP1AS1_POSITION                  equ 0005h
CCP1AS_CCP1AS1_SIZE                      equ 0001h
CCP1AS_CCP1AS1_LENGTH                    equ 0001h
CCP1AS_CCP1AS1_MASK                      equ 0020h
CCP1AS_CCP1AS2_POSN                      equ 0006h
CCP1AS_CCP1AS2_POSITION                  equ 0006h
CCP1AS_CCP1AS2_SIZE                      equ 0001h
CCP1AS_CCP1AS2_LENGTH                    equ 0001h
CCP1AS_CCP1AS2_MASK                      equ 0040h
CCP1AS_CCP1ASE_POSN                      equ 0007h
CCP1AS_CCP1ASE_POSITION                  equ 0007h
CCP1AS_CCP1ASE_SIZE                      equ 0001h
CCP1AS_CCP1ASE_LENGTH                    equ 0001h
CCP1AS_CCP1ASE_MASK                      equ 0080h

// Register: PSTR1CON
#define PSTR1CON PSTR1CON
PSTR1CON                                 equ 0296h
// bitfield definitions
PSTR1CON_STR1A_POSN                      equ 0000h
PSTR1CON_STR1A_POSITION                  equ 0000h
PSTR1CON_STR1A_SIZE                      equ 0001h
PSTR1CON_STR1A_LENGTH                    equ 0001h
PSTR1CON_STR1A_MASK                      equ 0001h
PSTR1CON_STR1B_POSN                      equ 0001h
PSTR1CON_STR1B_POSITION                  equ 0001h
PSTR1CON_STR1B_SIZE                      equ 0001h
PSTR1CON_STR1B_LENGTH                    equ 0001h
PSTR1CON_STR1B_MASK                      equ 0002h
PSTR1CON_STR1C_POSN                      equ 0002h
PSTR1CON_STR1C_POSITION                  equ 0002h
PSTR1CON_STR1C_SIZE                      equ 0001h
PSTR1CON_STR1C_LENGTH                    equ 0001h
PSTR1CON_STR1C_MASK                      equ 0004h
PSTR1CON_STR1D_POSN                      equ 0003h
PSTR1CON_STR1D_POSITION                  equ 0003h
PSTR1CON_STR1D_SIZE                      equ 0001h
PSTR1CON_STR1D_LENGTH                    equ 0001h
PSTR1CON_STR1D_MASK                      equ 0008h
PSTR1CON_STR1SYNC_POSN                   equ 0004h
PSTR1CON_STR1SYNC_POSITION               equ 0004h
PSTR1CON_STR1SYNC_SIZE                   equ 0001h
PSTR1CON_STR1SYNC_LENGTH                 equ 0001h
PSTR1CON_STR1SYNC_MASK                   equ 0010h

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

// Register: PWM2CON
#define PWM2CON PWM2CON
PWM2CON                                  equ 029Bh
// bitfield definitions
PWM2CON_P2DC0_POSN                       equ 0000h
PWM2CON_P2DC0_POSITION                   equ 0000h
PWM2CON_P2DC0_SIZE                       equ 0001h
PWM2CON_P2DC0_LENGTH                     equ 0001h
PWM2CON_P2DC0_MASK                       equ 0001h
PWM2CON_P2DC1_POSN                       equ 0001h
PWM2CON_P2DC1_POSITION                   equ 0001h
PWM2CON_P2DC1_SIZE                       equ 0001h
PWM2CON_P2DC1_LENGTH                     equ 0001h
PWM2CON_P2DC1_MASK                       equ 0002h
PWM2CON_P2DC2_POSN                       equ 0002h
PWM2CON_P2DC2_POSITION                   equ 0002h
PWM2CON_P2DC2_SIZE                       equ 0001h
PWM2CON_P2DC2_LENGTH                     equ 0001h
PWM2CON_P2DC2_MASK                       equ 0004h
PWM2CON_P2DC3_POSN                       equ 0003h
PWM2CON_P2DC3_POSITION                   equ 0003h
PWM2CON_P2DC3_SIZE                       equ 0001h
PWM2CON_P2DC3_LENGTH                     equ 0001h
PWM2CON_P2DC3_MASK                       equ 0008h
PWM2CON_P2DC4_POSN                       equ 0004h
PWM2CON_P2DC4_POSITION                   equ 0004h
PWM2CON_P2DC4_SIZE                       equ 0001h
PWM2CON_P2DC4_LENGTH                     equ 0001h
PWM2CON_P2DC4_MASK                       equ 0010h
PWM2CON_P2DC5_POSN                       equ 0005h
PWM2CON_P2DC5_POSITION                   equ 0005h
PWM2CON_P2DC5_SIZE                       equ 0001h
PWM2CON_P2DC5_LENGTH                     equ 0001h
PWM2CON_P2DC5_MASK                       equ 0020h
PWM2CON_P2DC6_POSN                       equ 0006h
PWM2CON_P2DC6_POSITION                   equ 0006h
PWM2CON_P2DC6_SIZE                       equ 0001h
PWM2CON_P2DC6_LENGTH                     equ 0001h
PWM2CON_P2DC6_MASK                       equ 0040h
PWM2CON_P2RSEN_POSN                      equ 0007h
PWM2CON_P2RSEN_POSITION                  equ 0007h
PWM2CON_P2RSEN_SIZE                      equ 0001h
PWM2CON_P2RSEN_LENGTH                    equ 0001h
PWM2CON_P2RSEN_MASK                      equ 0080h

// Register: CCP2AS
#define CCP2AS CCP2AS
CCP2AS                                   equ 029Ch
// bitfield definitions
CCP2AS_PSS2BD0_POSN                      equ 0000h
CCP2AS_PSS2BD0_POSITION                  equ 0000h
CCP2AS_PSS2BD0_SIZE                      equ 0001h
CCP2AS_PSS2BD0_LENGTH                    equ 0001h
CCP2AS_PSS2BD0_MASK                      equ 0001h
CCP2AS_PSS2BD1_POSN                      equ 0001h
CCP2AS_PSS2BD1_POSITION                  equ 0001h
CCP2AS_PSS2BD1_SIZE                      equ 0001h
CCP2AS_PSS2BD1_LENGTH                    equ 0001h
CCP2AS_PSS2BD1_MASK                      equ 0002h
CCP2AS_PSS2AC0_POSN                      equ 0002h
CCP2AS_PSS2AC0_POSITION                  equ 0002h
CCP2AS_PSS2AC0_SIZE                      equ 0001h
CCP2AS_PSS2AC0_LENGTH                    equ 0001h
CCP2AS_PSS2AC0_MASK                      equ 0004h
CCP2AS_PSS2AC1_POSN                      equ 0003h
CCP2AS_PSS2AC1_POSITION                  equ 0003h
CCP2AS_PSS2AC1_SIZE                      equ 0001h
CCP2AS_PSS2AC1_LENGTH                    equ 0001h
CCP2AS_PSS2AC1_MASK                      equ 0008h
CCP2AS_CCP2AS0_POSN                      equ 0004h
CCP2AS_CCP2AS0_POSITION                  equ 0004h
CCP2AS_CCP2AS0_SIZE                      equ 0001h
CCP2AS_CCP2AS0_LENGTH                    equ 0001h
CCP2AS_CCP2AS0_MASK                      equ 0010h
CCP2AS_CCP2AS1_POSN                      equ 0005h
CCP2AS_CCP2AS1_POSITION                  equ 0005h
CCP2AS_CCP2AS1_SIZE                      equ 0001h
CCP2AS_CCP2AS1_LENGTH                    equ 0001h
CCP2AS_CCP2AS1_MASK                      equ 0020h
CCP2AS_CCP2AS2_POSN                      equ 0006h
CCP2AS_CCP2AS2_POSITION                  equ 0006h
CCP2AS_CCP2AS2_SIZE                      equ 0001h
CCP2AS_CCP2AS2_LENGTH                    equ 0001h
CCP2AS_CCP2AS2_MASK                      equ 0040h
CCP2AS_CCP2ASE_POSN                      equ 0007h
CCP2AS_CCP2ASE_POSITION                  equ 0007h
CCP2AS_CCP2ASE_SIZE                      equ 0001h
CCP2AS_CCP2ASE_LENGTH                    equ 0001h
CCP2AS_CCP2ASE_MASK                      equ 0080h

// Register: PSTR2CON
#define PSTR2CON PSTR2CON
PSTR2CON                                 equ 029Dh
// bitfield definitions
PSTR2CON_STR2A_POSN                      equ 0000h
PSTR2CON_STR2A_POSITION                  equ 0000h
PSTR2CON_STR2A_SIZE                      equ 0001h
PSTR2CON_STR2A_LENGTH                    equ 0001h
PSTR2CON_STR2A_MASK                      equ 0001h
PSTR2CON_STR2B_POSN                      equ 0001h
PSTR2CON_STR2B_POSITION                  equ 0001h
PSTR2CON_STR2B_SIZE                      equ 0001h
PSTR2CON_STR2B_LENGTH                    equ 0001h
PSTR2CON_STR2B_MASK                      equ 0002h
PSTR2CON_STR2C_POSN                      equ 0002h
PSTR2CON_STR2C_POSITION                  equ 0002h
PSTR2CON_STR2C_SIZE                      equ 0001h
PSTR2CON_STR2C_LENGTH                    equ 0001h
PSTR2CON_STR2C_MASK                      equ 0004h
PSTR2CON_STR2D_POSN                      equ 0003h
PSTR2CON_STR2D_POSITION                  equ 0003h
PSTR2CON_STR2D_SIZE                      equ 0001h
PSTR2CON_STR2D_LENGTH                    equ 0001h
PSTR2CON_STR2D_MASK                      equ 0008h
PSTR2CON_STR2SYNC_POSN                   equ 0004h
PSTR2CON_STR2SYNC_POSITION               equ 0004h
PSTR2CON_STR2SYNC_SIZE                   equ 0001h
PSTR2CON_STR2SYNC_LENGTH                 equ 0001h
PSTR2CON_STR2SYNC_MASK                   equ 0010h

// Register: CCPTMRS0
#define CCPTMRS0 CCPTMRS0
CCPTMRS0                                 equ 029Eh
// bitfield definitions
CCPTMRS0_C1TSEL0_POSN                    equ 0000h
CCPTMRS0_C1TSEL0_POSITION                equ 0000h
CCPTMRS0_C1TSEL0_SIZE                    equ 0001h
CCPTMRS0_C1TSEL0_LENGTH                  equ 0001h
CCPTMRS0_C1TSEL0_MASK                    equ 0001h
CCPTMRS0_C1TSEL1_POSN                    equ 0001h
CCPTMRS0_C1TSEL1_POSITION                equ 0001h
CCPTMRS0_C1TSEL1_SIZE                    equ 0001h
CCPTMRS0_C1TSEL1_LENGTH                  equ 0001h
CCPTMRS0_C1TSEL1_MASK                    equ 0002h
CCPTMRS0_C2TSEL0_POSN                    equ 0002h
CCPTMRS0_C2TSEL0_POSITION                equ 0002h
CCPTMRS0_C2TSEL0_SIZE                    equ 0001h
CCPTMRS0_C2TSEL0_LENGTH                  equ 0001h
CCPTMRS0_C2TSEL0_MASK                    equ 0004h
CCPTMRS0_C2TSEL1_POSN                    equ 0003h
CCPTMRS0_C2TSEL1_POSITION                equ 0003h
CCPTMRS0_C2TSEL1_SIZE                    equ 0001h
CCPTMRS0_C2TSEL1_LENGTH                  equ 0001h
CCPTMRS0_C2TSEL1_MASK                    equ 0008h
CCPTMRS0_C3TSEL0_POSN                    equ 0004h
CCPTMRS0_C3TSEL0_POSITION                equ 0004h
CCPTMRS0_C3TSEL0_SIZE                    equ 0001h
CCPTMRS0_C3TSEL0_LENGTH                  equ 0001h
CCPTMRS0_C3TSEL0_MASK                    equ 0010h
CCPTMRS0_C3TSEL1_POSN                    equ 0005h
CCPTMRS0_C3TSEL1_POSITION                equ 0005h
CCPTMRS0_C3TSEL1_SIZE                    equ 0001h
CCPTMRS0_C3TSEL1_LENGTH                  equ 0001h
CCPTMRS0_C3TSEL1_MASK                    equ 0020h
CCPTMRS0_C4TSEL0_POSN                    equ 0006h
CCPTMRS0_C4TSEL0_POSITION                equ 0006h
CCPTMRS0_C4TSEL0_SIZE                    equ 0001h
CCPTMRS0_C4TSEL0_LENGTH                  equ 0001h
CCPTMRS0_C4TSEL0_MASK                    equ 0040h
CCPTMRS0_C4TSEL1_POSN                    equ 0007h
CCPTMRS0_C4TSEL1_POSITION                equ 0007h
CCPTMRS0_C4TSEL1_SIZE                    equ 0001h
CCPTMRS0_C4TSEL1_LENGTH                  equ 0001h
CCPTMRS0_C4TSEL1_MASK                    equ 0080h
CCPTMRS0_C1TSEL_POSN                     equ 0000h
CCPTMRS0_C1TSEL_POSITION                 equ 0000h
CCPTMRS0_C1TSEL_SIZE                     equ 0002h
CCPTMRS0_C1TSEL_LENGTH                   equ 0002h
CCPTMRS0_C1TSEL_MASK                     equ 0003h
CCPTMRS0_C2TSEL_POSN                     equ 0002h
CCPTMRS0_C2TSEL_POSITION                 equ 0002h
CCPTMRS0_C2TSEL_SIZE                     equ 0002h
CCPTMRS0_C2TSEL_LENGTH                   equ 0002h
CCPTMRS0_C2TSEL_MASK                     equ 000Ch
CCPTMRS0_C3TSEL_POSN                     equ 0004h
CCPTMRS0_C3TSEL_POSITION                 equ 0004h
CCPTMRS0_C3TSEL_SIZE                     equ 0002h
CCPTMRS0_C3TSEL_LENGTH                   equ 0002h
CCPTMRS0_C3TSEL_MASK                     equ 0030h
CCPTMRS0_C4TSEL_POSN                     equ 0006h
CCPTMRS0_C4TSEL_POSITION                 equ 0006h
CCPTMRS0_C4TSEL_SIZE                     equ 0002h
CCPTMRS0_C4TSEL_LENGTH                   equ 0002h
CCPTMRS0_C4TSEL_MASK                     equ 00C0h

// Register: CCPTMRS1
#define CCPTMRS1 CCPTMRS1
CCPTMRS1                                 equ 029Fh
// bitfield definitions
CCPTMRS1_C5TSEL0_POSN                    equ 0000h
CCPTMRS1_C5TSEL0_POSITION                equ 0000h
CCPTMRS1_C5TSEL0_SIZE                    equ 0001h
CCPTMRS1_C5TSEL0_LENGTH                  equ 0001h
CCPTMRS1_C5TSEL0_MASK                    equ 0001h
CCPTMRS1_C5TSEL1_POSN                    equ 0001h
CCPTMRS1_C5TSEL1_POSITION                equ 0001h
CCPTMRS1_C5TSEL1_SIZE                    equ 0001h
CCPTMRS1_C5TSEL1_LENGTH                  equ 0001h
CCPTMRS1_C5TSEL1_MASK                    equ 0002h
CCPTMRS1_C5TSEL_POSN                     equ 0000h
CCPTMRS1_C5TSEL_POSITION                 equ 0000h
CCPTMRS1_C5TSEL_SIZE                     equ 0002h
CCPTMRS1_C5TSEL_LENGTH                   equ 0002h
CCPTMRS1_C5TSEL_MASK                     equ 0003h

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
CCP3CON_CCP3M0_POSN                      equ 0000h
CCP3CON_CCP3M0_POSITION                  equ 0000h
CCP3CON_CCP3M0_SIZE                      equ 0001h
CCP3CON_CCP3M0_LENGTH                    equ 0001h
CCP3CON_CCP3M0_MASK                      equ 0001h
CCP3CON_CCP3M1_POSN                      equ 0001h
CCP3CON_CCP3M1_POSITION                  equ 0001h
CCP3CON_CCP3M1_SIZE                      equ 0001h
CCP3CON_CCP3M1_LENGTH                    equ 0001h
CCP3CON_CCP3M1_MASK                      equ 0002h
CCP3CON_CCP3M2_POSN                      equ 0002h
CCP3CON_CCP3M2_POSITION                  equ 0002h
CCP3CON_CCP3M2_SIZE                      equ 0001h
CCP3CON_CCP3M2_LENGTH                    equ 0001h
CCP3CON_CCP3M2_MASK                      equ 0004h
CCP3CON_CCP3M3_POSN                      equ 0003h
CCP3CON_CCP3M3_POSITION                  equ 0003h
CCP3CON_CCP3M3_SIZE                      equ 0001h
CCP3CON_CCP3M3_LENGTH                    equ 0001h
CCP3CON_CCP3M3_MASK                      equ 0008h
CCP3CON_DC3B0_POSN                       equ 0004h
CCP3CON_DC3B0_POSITION                   equ 0004h
CCP3CON_DC3B0_SIZE                       equ 0001h
CCP3CON_DC3B0_LENGTH                     equ 0001h
CCP3CON_DC3B0_MASK                       equ 0010h
CCP3CON_DC3B1_POSN                       equ 0005h
CCP3CON_DC3B1_POSITION                   equ 0005h
CCP3CON_DC3B1_SIZE                       equ 0001h
CCP3CON_DC3B1_LENGTH                     equ 0001h
CCP3CON_DC3B1_MASK                       equ 0020h
CCP3CON_P3M0_POSN                        equ 0006h
CCP3CON_P3M0_POSITION                    equ 0006h
CCP3CON_P3M0_SIZE                        equ 0001h
CCP3CON_P3M0_LENGTH                      equ 0001h
CCP3CON_P3M0_MASK                        equ 0040h
CCP3CON_P3M1_POSN                        equ 0007h
CCP3CON_P3M1_POSITION                    equ 0007h
CCP3CON_P3M1_SIZE                        equ 0001h
CCP3CON_P3M1_LENGTH                      equ 0001h
CCP3CON_P3M1_MASK                        equ 0080h

// Register: PWM3CON
#define PWM3CON PWM3CON
PWM3CON                                  equ 0314h
// bitfield definitions
PWM3CON_P3DC0_POSN                       equ 0000h
PWM3CON_P3DC0_POSITION                   equ 0000h
PWM3CON_P3DC0_SIZE                       equ 0001h
PWM3CON_P3DC0_LENGTH                     equ 0001h
PWM3CON_P3DC0_MASK                       equ 0001h
PWM3CON_P3DC1_POSN                       equ 0001h
PWM3CON_P3DC1_POSITION                   equ 0001h
PWM3CON_P3DC1_SIZE                       equ 0001h
PWM3CON_P3DC1_LENGTH                     equ 0001h
PWM3CON_P3DC1_MASK                       equ 0002h
PWM3CON_P3DC2_POSN                       equ 0002h
PWM3CON_P3DC2_POSITION                   equ 0002h
PWM3CON_P3DC2_SIZE                       equ 0001h
PWM3CON_P3DC2_LENGTH                     equ 0001h
PWM3CON_P3DC2_MASK                       equ 0004h
PWM3CON_P3DC3_POSN                       equ 0003h
PWM3CON_P3DC3_POSITION                   equ 0003h
PWM3CON_P3DC3_SIZE                       equ 0001h
PWM3CON_P3DC3_LENGTH                     equ 0001h
PWM3CON_P3DC3_MASK                       equ 0008h
PWM3CON_P3DC4_POSN                       equ 0004h
PWM3CON_P3DC4_POSITION                   equ 0004h
PWM3CON_P3DC4_SIZE                       equ 0001h
PWM3CON_P3DC4_LENGTH                     equ 0001h
PWM3CON_P3DC4_MASK                       equ 0010h
PWM3CON_P3DC5_POSN                       equ 0005h
PWM3CON_P3DC5_POSITION                   equ 0005h
PWM3CON_P3DC5_SIZE                       equ 0001h
PWM3CON_P3DC5_LENGTH                     equ 0001h
PWM3CON_P3DC5_MASK                       equ 0020h
PWM3CON_P3DC6_POSN                       equ 0006h
PWM3CON_P3DC6_POSITION                   equ 0006h
PWM3CON_P3DC6_SIZE                       equ 0001h
PWM3CON_P3DC6_LENGTH                     equ 0001h
PWM3CON_P3DC6_MASK                       equ 0040h
PWM3CON_P3RSEN_POSN                      equ 0007h
PWM3CON_P3RSEN_POSITION                  equ 0007h
PWM3CON_P3RSEN_SIZE                      equ 0001h
PWM3CON_P3RSEN_LENGTH                    equ 0001h
PWM3CON_P3RSEN_MASK                      equ 0080h

// Register: CCP3AS
#define CCP3AS CCP3AS
CCP3AS                                   equ 0315h
// bitfield definitions
CCP3AS_PSS3BD0_POSN                      equ 0000h
CCP3AS_PSS3BD0_POSITION                  equ 0000h
CCP3AS_PSS3BD0_SIZE                      equ 0001h
CCP3AS_PSS3BD0_LENGTH                    equ 0001h
CCP3AS_PSS3BD0_MASK                      equ 0001h
CCP3AS_PSS3BD1_POSN                      equ 0001h
CCP3AS_PSS3BD1_POSITION                  equ 0001h
CCP3AS_PSS3BD1_SIZE                      equ 0001h
CCP3AS_PSS3BD1_LENGTH                    equ 0001h
CCP3AS_PSS3BD1_MASK                      equ 0002h
CCP3AS_PSS3AC0_POSN                      equ 0002h
CCP3AS_PSS3AC0_POSITION                  equ 0002h
CCP3AS_PSS3AC0_SIZE                      equ 0001h
CCP3AS_PSS3AC0_LENGTH                    equ 0001h
CCP3AS_PSS3AC0_MASK                      equ 0004h
CCP3AS_PSS3AC1_POSN                      equ 0003h
CCP3AS_PSS3AC1_POSITION                  equ 0003h
CCP3AS_PSS3AC1_SIZE                      equ 0001h
CCP3AS_PSS3AC1_LENGTH                    equ 0001h
CCP3AS_PSS3AC1_MASK                      equ 0008h
CCP3AS_CCP3AS0_POSN                      equ 0004h
CCP3AS_CCP3AS0_POSITION                  equ 0004h
CCP3AS_CCP3AS0_SIZE                      equ 0001h
CCP3AS_CCP3AS0_LENGTH                    equ 0001h
CCP3AS_CCP3AS0_MASK                      equ 0010h
CCP3AS_CCP3AS1_POSN                      equ 0005h
CCP3AS_CCP3AS1_POSITION                  equ 0005h
CCP3AS_CCP3AS1_SIZE                      equ 0001h
CCP3AS_CCP3AS1_LENGTH                    equ 0001h
CCP3AS_CCP3AS1_MASK                      equ 0020h
CCP3AS_CCP3AS2_POSN                      equ 0006h
CCP3AS_CCP3AS2_POSITION                  equ 0006h
CCP3AS_CCP3AS2_SIZE                      equ 0001h
CCP3AS_CCP3AS2_LENGTH                    equ 0001h
CCP3AS_CCP3AS2_MASK                      equ 0040h
CCP3AS_CCP3ASE_POSN                      equ 0007h
CCP3AS_CCP3ASE_POSITION                  equ 0007h
CCP3AS_CCP3ASE_SIZE                      equ 0001h
CCP3AS_CCP3ASE_LENGTH                    equ 0001h
CCP3AS_CCP3ASE_MASK                      equ 0080h

// Register: PSTR3CON
#define PSTR3CON PSTR3CON
PSTR3CON                                 equ 0316h
// bitfield definitions
PSTR3CON_STR3A_POSN                      equ 0000h
PSTR3CON_STR3A_POSITION                  equ 0000h
PSTR3CON_STR3A_SIZE                      equ 0001h
PSTR3CON_STR3A_LENGTH                    equ 0001h
PSTR3CON_STR3A_MASK                      equ 0001h
PSTR3CON_STR3B_POSN                      equ 0001h
PSTR3CON_STR3B_POSITION                  equ 0001h
PSTR3CON_STR3B_SIZE                      equ 0001h
PSTR3CON_STR3B_LENGTH                    equ 0001h
PSTR3CON_STR3B_MASK                      equ 0002h
PSTR3CON_STR3C_POSN                      equ 0002h
PSTR3CON_STR3C_POSITION                  equ 0002h
PSTR3CON_STR3C_SIZE                      equ 0001h
PSTR3CON_STR3C_LENGTH                    equ 0001h
PSTR3CON_STR3C_MASK                      equ 0004h
PSTR3CON_STR3D_POSN                      equ 0003h
PSTR3CON_STR3D_POSITION                  equ 0003h
PSTR3CON_STR3D_SIZE                      equ 0001h
PSTR3CON_STR3D_LENGTH                    equ 0001h
PSTR3CON_STR3D_MASK                      equ 0008h
PSTR3CON_STR3SYNC_POSN                   equ 0004h
PSTR3CON_STR3SYNC_POSITION               equ 0004h
PSTR3CON_STR3SYNC_SIZE                   equ 0001h
PSTR3CON_STR3SYNC_LENGTH                 equ 0001h
PSTR3CON_STR3SYNC_MASK                   equ 0010h

// Register: CCPR4L
#define CCPR4L CCPR4L
CCPR4L                                   equ 0318h
// bitfield definitions
CCPR4L_CCPR4L_POSN                       equ 0000h
CCPR4L_CCPR4L_POSITION                   equ 0000h
CCPR4L_CCPR4L_SIZE                       equ 0008h
CCPR4L_CCPR4L_LENGTH                     equ 0008h
CCPR4L_CCPR4L_MASK                       equ 00FFh

// Register: CCPR4H
#define CCPR4H CCPR4H
CCPR4H                                   equ 0319h
// bitfield definitions
CCPR4H_CCPR4H_POSN                       equ 0000h
CCPR4H_CCPR4H_POSITION                   equ 0000h
CCPR4H_CCPR4H_SIZE                       equ 0008h
CCPR4H_CCPR4H_LENGTH                     equ 0008h
CCPR4H_CCPR4H_MASK                       equ 00FFh

// Register: CCP4CON
#define CCP4CON CCP4CON
CCP4CON                                  equ 031Ah
// bitfield definitions
CCP4CON_CCP4M0_POSN                      equ 0000h
CCP4CON_CCP4M0_POSITION                  equ 0000h
CCP4CON_CCP4M0_SIZE                      equ 0001h
CCP4CON_CCP4M0_LENGTH                    equ 0001h
CCP4CON_CCP4M0_MASK                      equ 0001h
CCP4CON_CCP4M1_POSN                      equ 0001h
CCP4CON_CCP4M1_POSITION                  equ 0001h
CCP4CON_CCP4M1_SIZE                      equ 0001h
CCP4CON_CCP4M1_LENGTH                    equ 0001h
CCP4CON_CCP4M1_MASK                      equ 0002h
CCP4CON_CCP4M2_POSN                      equ 0002h
CCP4CON_CCP4M2_POSITION                  equ 0002h
CCP4CON_CCP4M2_SIZE                      equ 0001h
CCP4CON_CCP4M2_LENGTH                    equ 0001h
CCP4CON_CCP4M2_MASK                      equ 0004h
CCP4CON_CCP4M3_POSN                      equ 0003h
CCP4CON_CCP4M3_POSITION                  equ 0003h
CCP4CON_CCP4M3_SIZE                      equ 0001h
CCP4CON_CCP4M3_LENGTH                    equ 0001h
CCP4CON_CCP4M3_MASK                      equ 0008h
CCP4CON_DC4B0_POSN                       equ 0004h
CCP4CON_DC4B0_POSITION                   equ 0004h
CCP4CON_DC4B0_SIZE                       equ 0001h
CCP4CON_DC4B0_LENGTH                     equ 0001h
CCP4CON_DC4B0_MASK                       equ 0010h
CCP4CON_DC4B1_POSN                       equ 0005h
CCP4CON_DC4B1_POSITION                   equ 0005h
CCP4CON_DC4B1_SIZE                       equ 0001h
CCP4CON_DC4B1_LENGTH                     equ 0001h
CCP4CON_DC4B1_MASK                       equ 0020h

// Register: CCPR5L
#define CCPR5L CCPR5L
CCPR5L                                   equ 031Ch
// bitfield definitions
CCPR5L_CCPR5L_POSN                       equ 0000h
CCPR5L_CCPR5L_POSITION                   equ 0000h
CCPR5L_CCPR5L_SIZE                       equ 0008h
CCPR5L_CCPR5L_LENGTH                     equ 0008h
CCPR5L_CCPR5L_MASK                       equ 00FFh

// Register: CCPR5H
#define CCPR5H CCPR5H
CCPR5H                                   equ 031Dh
// bitfield definitions
CCPR5H_CCPR5H_POSN                       equ 0000h
CCPR5H_CCPR5H_POSITION                   equ 0000h
CCPR5H_CCPR5H_SIZE                       equ 0008h
CCPR5H_CCPR5H_LENGTH                     equ 0008h
CCPR5H_CCPR5H_MASK                       equ 00FFh

// Register: CCP5CON
#define CCP5CON CCP5CON
CCP5CON                                  equ 031Eh
// bitfield definitions
CCP5CON_CCP5M0_POSN                      equ 0000h
CCP5CON_CCP5M0_POSITION                  equ 0000h
CCP5CON_CCP5M0_SIZE                      equ 0001h
CCP5CON_CCP5M0_LENGTH                    equ 0001h
CCP5CON_CCP5M0_MASK                      equ 0001h
CCP5CON_CCP5M1_POSN                      equ 0001h
CCP5CON_CCP5M1_POSITION                  equ 0001h
CCP5CON_CCP5M1_SIZE                      equ 0001h
CCP5CON_CCP5M1_LENGTH                    equ 0001h
CCP5CON_CCP5M1_MASK                      equ 0002h
CCP5CON_CCP5M2_POSN                      equ 0002h
CCP5CON_CCP5M2_POSITION                  equ 0002h
CCP5CON_CCP5M2_SIZE                      equ 0001h
CCP5CON_CCP5M2_LENGTH                    equ 0001h
CCP5CON_CCP5M2_MASK                      equ 0004h
CCP5CON_CCP5M3_POSN                      equ 0003h
CCP5CON_CCP5M3_POSITION                  equ 0003h
CCP5CON_CCP5M3_SIZE                      equ 0001h
CCP5CON_CCP5M3_LENGTH                    equ 0001h
CCP5CON_CCP5M3_MASK                      equ 0008h
CCP5CON_DC5B0_POSN                       equ 0004h
CCP5CON_DC5B0_POSITION                   equ 0004h
CCP5CON_DC5B0_SIZE                       equ 0001h
CCP5CON_DC5B0_LENGTH                     equ 0001h
CCP5CON_DC5B0_MASK                       equ 0010h
CCP5CON_DC5B1_POSN                       equ 0005h
CCP5CON_DC5B1_POSITION                   equ 0005h
CCP5CON_DC5B1_SIZE                       equ 0001h
CCP5CON_DC5B1_LENGTH                     equ 0001h
CCP5CON_DC5B1_MASK                       equ 0020h

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
T4CON_TMR4ON_POSN                        equ 0002h
T4CON_TMR4ON_POSITION                    equ 0002h
T4CON_TMR4ON_SIZE                        equ 0001h
T4CON_TMR4ON_LENGTH                      equ 0001h
T4CON_TMR4ON_MASK                        equ 0004h
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
T4CON_T4CKPS_POSN                        equ 0000h
T4CON_T4CKPS_POSITION                    equ 0000h
T4CON_T4CKPS_SIZE                        equ 0002h
T4CON_T4CKPS_LENGTH                      equ 0002h
T4CON_T4CKPS_MASK                        equ 0003h
T4CON_T4OUTPS_POSN                       equ 0003h
T4CON_T4OUTPS_POSITION                   equ 0003h
T4CON_T4OUTPS_SIZE                       equ 0004h
T4CON_T4OUTPS_LENGTH                     equ 0004h
T4CON_T4OUTPS_MASK                       equ 0078h

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
T6CON_TMR6ON_POSN                        equ 0002h
T6CON_TMR6ON_POSITION                    equ 0002h
T6CON_TMR6ON_SIZE                        equ 0001h
T6CON_TMR6ON_LENGTH                      equ 0001h
T6CON_TMR6ON_MASK                        equ 0004h
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
T6CON_T6CKPS_POSN                        equ 0000h
T6CON_T6CKPS_POSITION                    equ 0000h
T6CON_T6CKPS_SIZE                        equ 0002h
T6CON_T6CKPS_LENGTH                      equ 0002h
T6CON_T6CKPS_MASK                        equ 0003h
T6CON_T6OUTPS_POSN                       equ 0003h
T6CON_T6OUTPS_POSITION                   equ 0003h
T6CON_T6OUTPS_SIZE                       equ 0004h
T6CON_T6OUTPS_LENGTH                     equ 0004h
T6CON_T6OUTPS_MASK                       equ 0078h

// Register: LCDCON
#define LCDCON LCDCON
LCDCON                                   equ 0791h
// bitfield definitions
LCDCON_LMUX0_POSN                        equ 0000h
LCDCON_LMUX0_POSITION                    equ 0000h
LCDCON_LMUX0_SIZE                        equ 0001h
LCDCON_LMUX0_LENGTH                      equ 0001h
LCDCON_LMUX0_MASK                        equ 0001h
LCDCON_LMUX1_POSN                        equ 0001h
LCDCON_LMUX1_POSITION                    equ 0001h
LCDCON_LMUX1_SIZE                        equ 0001h
LCDCON_LMUX1_LENGTH                      equ 0001h
LCDCON_LMUX1_MASK                        equ 0002h
LCDCON_CS0_POSN                          equ 0002h
LCDCON_CS0_POSITION                      equ 0002h
LCDCON_CS0_SIZE                          equ 0001h
LCDCON_CS0_LENGTH                        equ 0001h
LCDCON_CS0_MASK                          equ 0004h
LCDCON_CS1_POSN                          equ 0003h
LCDCON_CS1_POSITION                      equ 0003h
LCDCON_CS1_SIZE                          equ 0001h
LCDCON_CS1_LENGTH                        equ 0001h
LCDCON_CS1_MASK                          equ 0008h
LCDCON_WERR_POSN                         equ 0005h
LCDCON_WERR_POSITION                     equ 0005h
LCDCON_WERR_SIZE                         equ 0001h
LCDCON_WERR_LENGTH                       equ 0001h
LCDCON_WERR_MASK                         equ 0020h
LCDCON_SLPEN_POSN                        equ 0006h
LCDCON_SLPEN_POSITION                    equ 0006h
LCDCON_SLPEN_SIZE                        equ 0001h
LCDCON_SLPEN_LENGTH                      equ 0001h
LCDCON_SLPEN_MASK                        equ 0040h
LCDCON_LCDEN_POSN                        equ 0007h
LCDCON_LCDEN_POSITION                    equ 0007h
LCDCON_LCDEN_SIZE                        equ 0001h
LCDCON_LCDEN_LENGTH                      equ 0001h
LCDCON_LCDEN_MASK                        equ 0080h
LCDCON_LMUX_POSN                         equ 0000h
LCDCON_LMUX_POSITION                     equ 0000h
LCDCON_LMUX_SIZE                         equ 0002h
LCDCON_LMUX_LENGTH                       equ 0002h
LCDCON_LMUX_MASK                         equ 0003h
LCDCON_CS_POSN                           equ 0002h
LCDCON_CS_POSITION                       equ 0002h
LCDCON_CS_SIZE                           equ 0002h
LCDCON_CS_LENGTH                         equ 0002h
LCDCON_CS_MASK                           equ 000Ch

// Register: LCDPS
#define LCDPS LCDPS
LCDPS                                    equ 0792h
// bitfield definitions
LCDPS_LP0_POSN                           equ 0000h
LCDPS_LP0_POSITION                       equ 0000h
LCDPS_LP0_SIZE                           equ 0001h
LCDPS_LP0_LENGTH                         equ 0001h
LCDPS_LP0_MASK                           equ 0001h
LCDPS_LP1_POSN                           equ 0001h
LCDPS_LP1_POSITION                       equ 0001h
LCDPS_LP1_SIZE                           equ 0001h
LCDPS_LP1_LENGTH                         equ 0001h
LCDPS_LP1_MASK                           equ 0002h
LCDPS_LP2_POSN                           equ 0002h
LCDPS_LP2_POSITION                       equ 0002h
LCDPS_LP2_SIZE                           equ 0001h
LCDPS_LP2_LENGTH                         equ 0001h
LCDPS_LP2_MASK                           equ 0004h
LCDPS_LP3_POSN                           equ 0003h
LCDPS_LP3_POSITION                       equ 0003h
LCDPS_LP3_SIZE                           equ 0001h
LCDPS_LP3_LENGTH                         equ 0001h
LCDPS_LP3_MASK                           equ 0008h
LCDPS_WA_POSN                            equ 0004h
LCDPS_WA_POSITION                        equ 0004h
LCDPS_WA_SIZE                            equ 0001h
LCDPS_WA_LENGTH                          equ 0001h
LCDPS_WA_MASK                            equ 0010h
LCDPS_LCDA_POSN                          equ 0005h
LCDPS_LCDA_POSITION                      equ 0005h
LCDPS_LCDA_SIZE                          equ 0001h
LCDPS_LCDA_LENGTH                        equ 0001h
LCDPS_LCDA_MASK                          equ 0020h
LCDPS_BIASMD_POSN                        equ 0006h
LCDPS_BIASMD_POSITION                    equ 0006h
LCDPS_BIASMD_SIZE                        equ 0001h
LCDPS_BIASMD_LENGTH                      equ 0001h
LCDPS_BIASMD_MASK                        equ 0040h
LCDPS_WFT_POSN                           equ 0007h
LCDPS_WFT_POSITION                       equ 0007h
LCDPS_WFT_SIZE                           equ 0001h
LCDPS_WFT_LENGTH                         equ 0001h
LCDPS_WFT_MASK                           equ 0080h
LCDPS_LP_POSN                            equ 0000h
LCDPS_LP_POSITION                        equ 0000h
LCDPS_LP_SIZE                            equ 0004h
LCDPS_LP_LENGTH                          equ 0004h
LCDPS_LP_MASK                            equ 000Fh

// Register: LCDREF
#define LCDREF LCDREF
LCDREF                                   equ 0793h
// bitfield definitions
LCDREF_VLCD1PE_POSN                      equ 0001h
LCDREF_VLCD1PE_POSITION                  equ 0001h
LCDREF_VLCD1PE_SIZE                      equ 0001h
LCDREF_VLCD1PE_LENGTH                    equ 0001h
LCDREF_VLCD1PE_MASK                      equ 0002h
LCDREF_VLCD2PE_POSN                      equ 0002h
LCDREF_VLCD2PE_POSITION                  equ 0002h
LCDREF_VLCD2PE_SIZE                      equ 0001h
LCDREF_VLCD2PE_LENGTH                    equ 0001h
LCDREF_VLCD2PE_MASK                      equ 0004h
LCDREF_VLCD3PE_POSN                      equ 0003h
LCDREF_VLCD3PE_POSITION                  equ 0003h
LCDREF_VLCD3PE_SIZE                      equ 0001h
LCDREF_VLCD3PE_LENGTH                    equ 0001h
LCDREF_VLCD3PE_MASK                      equ 0008h
LCDREF_LCDIRI_POSN                       equ 0005h
LCDREF_LCDIRI_POSITION                   equ 0005h
LCDREF_LCDIRI_SIZE                       equ 0001h
LCDREF_LCDIRI_LENGTH                     equ 0001h
LCDREF_LCDIRI_MASK                       equ 0020h
LCDREF_LCDIRS_POSN                       equ 0006h
LCDREF_LCDIRS_POSITION                   equ 0006h
LCDREF_LCDIRS_SIZE                       equ 0001h
LCDREF_LCDIRS_LENGTH                     equ 0001h
LCDREF_LCDIRS_MASK                       equ 0040h
LCDREF_LCDIRE_POSN                       equ 0007h
LCDREF_LCDIRE_POSITION                   equ 0007h
LCDREF_LCDIRE_SIZE                       equ 0001h
LCDREF_LCDIRE_LENGTH                     equ 0001h
LCDREF_LCDIRE_MASK                       equ 0080h

// Register: LCDCST
#define LCDCST LCDCST
LCDCST                                   equ 0794h
// bitfield definitions
LCDCST_LCDCST0_POSN                      equ 0000h
LCDCST_LCDCST0_POSITION                  equ 0000h
LCDCST_LCDCST0_SIZE                      equ 0001h
LCDCST_LCDCST0_LENGTH                    equ 0001h
LCDCST_LCDCST0_MASK                      equ 0001h
LCDCST_LCDCST1_POSN                      equ 0001h
LCDCST_LCDCST1_POSITION                  equ 0001h
LCDCST_LCDCST1_SIZE                      equ 0001h
LCDCST_LCDCST1_LENGTH                    equ 0001h
LCDCST_LCDCST1_MASK                      equ 0002h
LCDCST_LCDCST2_POSN                      equ 0002h
LCDCST_LCDCST2_POSITION                  equ 0002h
LCDCST_LCDCST2_SIZE                      equ 0001h
LCDCST_LCDCST2_LENGTH                    equ 0001h
LCDCST_LCDCST2_MASK                      equ 0004h
LCDCST_LCDCST_POSN                       equ 0000h
LCDCST_LCDCST_POSITION                   equ 0000h
LCDCST_LCDCST_SIZE                       equ 0003h
LCDCST_LCDCST_LENGTH                     equ 0003h
LCDCST_LCDCST_MASK                       equ 0007h

// Register: LCDRL
#define LCDRL LCDRL
LCDRL                                    equ 0795h
// bitfield definitions
LCDRL_LRLAT0_POSN                        equ 0000h
LCDRL_LRLAT0_POSITION                    equ 0000h
LCDRL_LRLAT0_SIZE                        equ 0001h
LCDRL_LRLAT0_LENGTH                      equ 0001h
LCDRL_LRLAT0_MASK                        equ 0001h
LCDRL_LRLAT1_POSN                        equ 0001h
LCDRL_LRLAT1_POSITION                    equ 0001h
LCDRL_LRLAT1_SIZE                        equ 0001h
LCDRL_LRLAT1_LENGTH                      equ 0001h
LCDRL_LRLAT1_MASK                        equ 0002h
LCDRL_LRLAT2_POSN                        equ 0002h
LCDRL_LRLAT2_POSITION                    equ 0002h
LCDRL_LRLAT2_SIZE                        equ 0001h
LCDRL_LRLAT2_LENGTH                      equ 0001h
LCDRL_LRLAT2_MASK                        equ 0004h
LCDRL_LRLBP0_POSN                        equ 0004h
LCDRL_LRLBP0_POSITION                    equ 0004h
LCDRL_LRLBP0_SIZE                        equ 0001h
LCDRL_LRLBP0_LENGTH                      equ 0001h
LCDRL_LRLBP0_MASK                        equ 0010h
LCDRL_LRLBP1_POSN                        equ 0005h
LCDRL_LRLBP1_POSITION                    equ 0005h
LCDRL_LRLBP1_SIZE                        equ 0001h
LCDRL_LRLBP1_LENGTH                      equ 0001h
LCDRL_LRLBP1_MASK                        equ 0020h
LCDRL_LRLAP0_POSN                        equ 0006h
LCDRL_LRLAP0_POSITION                    equ 0006h
LCDRL_LRLAP0_SIZE                        equ 0001h
LCDRL_LRLAP0_LENGTH                      equ 0001h
LCDRL_LRLAP0_MASK                        equ 0040h
LCDRL_LRLAP1_POSN                        equ 0007h
LCDRL_LRLAP1_POSITION                    equ 0007h
LCDRL_LRLAP1_SIZE                        equ 0001h
LCDRL_LRLAP1_LENGTH                      equ 0001h
LCDRL_LRLAP1_MASK                        equ 0080h
LCDRL_LRLAT_POSN                         equ 0000h
LCDRL_LRLAT_POSITION                     equ 0000h
LCDRL_LRLAT_SIZE                         equ 0003h
LCDRL_LRLAT_LENGTH                       equ 0003h
LCDRL_LRLAT_MASK                         equ 0007h
LCDRL_LRLBP_POSN                         equ 0004h
LCDRL_LRLBP_POSITION                     equ 0004h
LCDRL_LRLBP_SIZE                         equ 0002h
LCDRL_LRLBP_LENGTH                       equ 0002h
LCDRL_LRLBP_MASK                         equ 0030h
LCDRL_LRLAP_POSN                         equ 0006h
LCDRL_LRLAP_POSITION                     equ 0006h
LCDRL_LRLAP_SIZE                         equ 0002h
LCDRL_LRLAP_LENGTH                       equ 0002h
LCDRL_LRLAP_MASK                         equ 00C0h

// Register: LCDSE0
#define LCDSE0 LCDSE0
LCDSE0                                   equ 0798h
// bitfield definitions
LCDSE0_SE0_POSN                          equ 0000h
LCDSE0_SE0_POSITION                      equ 0000h
LCDSE0_SE0_SIZE                          equ 0001h
LCDSE0_SE0_LENGTH                        equ 0001h
LCDSE0_SE0_MASK                          equ 0001h
LCDSE0_SE1_POSN                          equ 0001h
LCDSE0_SE1_POSITION                      equ 0001h
LCDSE0_SE1_SIZE                          equ 0001h
LCDSE0_SE1_LENGTH                        equ 0001h
LCDSE0_SE1_MASK                          equ 0002h
LCDSE0_SE2_POSN                          equ 0002h
LCDSE0_SE2_POSITION                      equ 0002h
LCDSE0_SE2_SIZE                          equ 0001h
LCDSE0_SE2_LENGTH                        equ 0001h
LCDSE0_SE2_MASK                          equ 0004h
LCDSE0_SE3_POSN                          equ 0003h
LCDSE0_SE3_POSITION                      equ 0003h
LCDSE0_SE3_SIZE                          equ 0001h
LCDSE0_SE3_LENGTH                        equ 0001h
LCDSE0_SE3_MASK                          equ 0008h
LCDSE0_SE4_POSN                          equ 0004h
LCDSE0_SE4_POSITION                      equ 0004h
LCDSE0_SE4_SIZE                          equ 0001h
LCDSE0_SE4_LENGTH                        equ 0001h
LCDSE0_SE4_MASK                          equ 0010h
LCDSE0_SE5_POSN                          equ 0005h
LCDSE0_SE5_POSITION                      equ 0005h
LCDSE0_SE5_SIZE                          equ 0001h
LCDSE0_SE5_LENGTH                        equ 0001h
LCDSE0_SE5_MASK                          equ 0020h
LCDSE0_SE6_POSN                          equ 0006h
LCDSE0_SE6_POSITION                      equ 0006h
LCDSE0_SE6_SIZE                          equ 0001h
LCDSE0_SE6_LENGTH                        equ 0001h
LCDSE0_SE6_MASK                          equ 0040h
LCDSE0_SE7_POSN                          equ 0007h
LCDSE0_SE7_POSITION                      equ 0007h
LCDSE0_SE7_SIZE                          equ 0001h
LCDSE0_SE7_LENGTH                        equ 0001h
LCDSE0_SE7_MASK                          equ 0080h

// Register: LCDSE1
#define LCDSE1 LCDSE1
LCDSE1                                   equ 0799h
// bitfield definitions
LCDSE1_SE8_POSN                          equ 0000h
LCDSE1_SE8_POSITION                      equ 0000h
LCDSE1_SE8_SIZE                          equ 0001h
LCDSE1_SE8_LENGTH                        equ 0001h
LCDSE1_SE8_MASK                          equ 0001h
LCDSE1_SE9_POSN                          equ 0001h
LCDSE1_SE9_POSITION                      equ 0001h
LCDSE1_SE9_SIZE                          equ 0001h
LCDSE1_SE9_LENGTH                        equ 0001h
LCDSE1_SE9_MASK                          equ 0002h
LCDSE1_SE10_POSN                         equ 0002h
LCDSE1_SE10_POSITION                     equ 0002h
LCDSE1_SE10_SIZE                         equ 0001h
LCDSE1_SE10_LENGTH                       equ 0001h
LCDSE1_SE10_MASK                         equ 0004h
LCDSE1_SE11_POSN                         equ 0003h
LCDSE1_SE11_POSITION                     equ 0003h
LCDSE1_SE11_SIZE                         equ 0001h
LCDSE1_SE11_LENGTH                       equ 0001h
LCDSE1_SE11_MASK                         equ 0008h
LCDSE1_SE12_POSN                         equ 0004h
LCDSE1_SE12_POSITION                     equ 0004h
LCDSE1_SE12_SIZE                         equ 0001h
LCDSE1_SE12_LENGTH                       equ 0001h
LCDSE1_SE12_MASK                         equ 0010h
LCDSE1_SE13_POSN                         equ 0005h
LCDSE1_SE13_POSITION                     equ 0005h
LCDSE1_SE13_SIZE                         equ 0001h
LCDSE1_SE13_LENGTH                       equ 0001h
LCDSE1_SE13_MASK                         equ 0020h
LCDSE1_SE14_POSN                         equ 0006h
LCDSE1_SE14_POSITION                     equ 0006h
LCDSE1_SE14_SIZE                         equ 0001h
LCDSE1_SE14_LENGTH                       equ 0001h
LCDSE1_SE14_MASK                         equ 0040h
LCDSE1_SE15_POSN                         equ 0007h
LCDSE1_SE15_POSITION                     equ 0007h
LCDSE1_SE15_SIZE                         equ 0001h
LCDSE1_SE15_LENGTH                       equ 0001h
LCDSE1_SE15_MASK                         equ 0080h

// Register: LCDSE2
#define LCDSE2 LCDSE2
LCDSE2                                   equ 079Ah
// bitfield definitions
LCDSE2_SE16_POSN                         equ 0000h
LCDSE2_SE16_POSITION                     equ 0000h
LCDSE2_SE16_SIZE                         equ 0001h
LCDSE2_SE16_LENGTH                       equ 0001h
LCDSE2_SE16_MASK                         equ 0001h
LCDSE2_SE17_POSN                         equ 0001h
LCDSE2_SE17_POSITION                     equ 0001h
LCDSE2_SE17_SIZE                         equ 0001h
LCDSE2_SE17_LENGTH                       equ 0001h
LCDSE2_SE17_MASK                         equ 0002h
LCDSE2_SE18_POSN                         equ 0002h
LCDSE2_SE18_POSITION                     equ 0002h
LCDSE2_SE18_SIZE                         equ 0001h
LCDSE2_SE18_LENGTH                       equ 0001h
LCDSE2_SE18_MASK                         equ 0004h
LCDSE2_SE19_POSN                         equ 0003h
LCDSE2_SE19_POSITION                     equ 0003h
LCDSE2_SE19_SIZE                         equ 0001h
LCDSE2_SE19_LENGTH                       equ 0001h
LCDSE2_SE19_MASK                         equ 0008h
LCDSE2_SE20_POSN                         equ 0004h
LCDSE2_SE20_POSITION                     equ 0004h
LCDSE2_SE20_SIZE                         equ 0001h
LCDSE2_SE20_LENGTH                       equ 0001h
LCDSE2_SE20_MASK                         equ 0010h
LCDSE2_SE21_POSN                         equ 0005h
LCDSE2_SE21_POSITION                     equ 0005h
LCDSE2_SE21_SIZE                         equ 0001h
LCDSE2_SE21_LENGTH                       equ 0001h
LCDSE2_SE21_MASK                         equ 0020h
LCDSE2_SE22_POSN                         equ 0006h
LCDSE2_SE22_POSITION                     equ 0006h
LCDSE2_SE22_SIZE                         equ 0001h
LCDSE2_SE22_LENGTH                       equ 0001h
LCDSE2_SE22_MASK                         equ 0040h
LCDSE2_SE23_POSN                         equ 0007h
LCDSE2_SE23_POSITION                     equ 0007h
LCDSE2_SE23_SIZE                         equ 0001h
LCDSE2_SE23_LENGTH                       equ 0001h
LCDSE2_SE23_MASK                         equ 0080h

// Register: LCDDATA0
#define LCDDATA0 LCDDATA0
LCDDATA0                                 equ 07A0h
// bitfield definitions
LCDDATA0_SEG0COM0_POSN                   equ 0000h
LCDDATA0_SEG0COM0_POSITION               equ 0000h
LCDDATA0_SEG0COM0_SIZE                   equ 0001h
LCDDATA0_SEG0COM0_LENGTH                 equ 0001h
LCDDATA0_SEG0COM0_MASK                   equ 0001h
LCDDATA0_SEG1COM0_POSN                   equ 0001h
LCDDATA0_SEG1COM0_POSITION               equ 0001h
LCDDATA0_SEG1COM0_SIZE                   equ 0001h
LCDDATA0_SEG1COM0_LENGTH                 equ 0001h
LCDDATA0_SEG1COM0_MASK                   equ 0002h
LCDDATA0_SEG2COM0_POSN                   equ 0002h
LCDDATA0_SEG2COM0_POSITION               equ 0002h
LCDDATA0_SEG2COM0_SIZE                   equ 0001h
LCDDATA0_SEG2COM0_LENGTH                 equ 0001h
LCDDATA0_SEG2COM0_MASK                   equ 0004h
LCDDATA0_SEG3COM0_POSN                   equ 0003h
LCDDATA0_SEG3COM0_POSITION               equ 0003h
LCDDATA0_SEG3COM0_SIZE                   equ 0001h
LCDDATA0_SEG3COM0_LENGTH                 equ 0001h
LCDDATA0_SEG3COM0_MASK                   equ 0008h
LCDDATA0_SEG4COM0_POSN                   equ 0004h
LCDDATA0_SEG4COM0_POSITION               equ 0004h
LCDDATA0_SEG4COM0_SIZE                   equ 0001h
LCDDATA0_SEG4COM0_LENGTH                 equ 0001h
LCDDATA0_SEG4COM0_MASK                   equ 0010h
LCDDATA0_SEG5COM0_POSN                   equ 0005h
LCDDATA0_SEG5COM0_POSITION               equ 0005h
LCDDATA0_SEG5COM0_SIZE                   equ 0001h
LCDDATA0_SEG5COM0_LENGTH                 equ 0001h
LCDDATA0_SEG5COM0_MASK                   equ 0020h
LCDDATA0_SEG6COM0_POSN                   equ 0006h
LCDDATA0_SEG6COM0_POSITION               equ 0006h
LCDDATA0_SEG6COM0_SIZE                   equ 0001h
LCDDATA0_SEG6COM0_LENGTH                 equ 0001h
LCDDATA0_SEG6COM0_MASK                   equ 0040h
LCDDATA0_SEG7COM0_POSN                   equ 0007h
LCDDATA0_SEG7COM0_POSITION               equ 0007h
LCDDATA0_SEG7COM0_SIZE                   equ 0001h
LCDDATA0_SEG7COM0_LENGTH                 equ 0001h
LCDDATA0_SEG7COM0_MASK                   equ 0080h

// Register: LCDDATA1
#define LCDDATA1 LCDDATA1
LCDDATA1                                 equ 07A1h
// bitfield definitions
LCDDATA1_SEG8COM0_POSN                   equ 0000h
LCDDATA1_SEG8COM0_POSITION               equ 0000h
LCDDATA1_SEG8COM0_SIZE                   equ 0001h
LCDDATA1_SEG8COM0_LENGTH                 equ 0001h
LCDDATA1_SEG8COM0_MASK                   equ 0001h
LCDDATA1_SEG9COM0_POSN                   equ 0001h
LCDDATA1_SEG9COM0_POSITION               equ 0001h
LCDDATA1_SEG9COM0_SIZE                   equ 0001h
LCDDATA1_SEG9COM0_LENGTH                 equ 0001h
LCDDATA1_SEG9COM0_MASK                   equ 0002h
LCDDATA1_SEG10COM0_POSN                  equ 0002h
LCDDATA1_SEG10COM0_POSITION              equ 0002h
LCDDATA1_SEG10COM0_SIZE                  equ 0001h
LCDDATA1_SEG10COM0_LENGTH                equ 0001h
LCDDATA1_SEG10COM0_MASK                  equ 0004h
LCDDATA1_SEG11COM0_POSN                  equ 0003h
LCDDATA1_SEG11COM0_POSITION              equ 0003h
LCDDATA1_SEG11COM0_SIZE                  equ 0001h
LCDDATA1_SEG11COM0_LENGTH                equ 0001h
LCDDATA1_SEG11COM0_MASK                  equ 0008h
LCDDATA1_SEG12COM0_POSN                  equ 0004h
LCDDATA1_SEG12COM0_POSITION              equ 0004h
LCDDATA1_SEG12COM0_SIZE                  equ 0001h
LCDDATA1_SEG12COM0_LENGTH                equ 0001h
LCDDATA1_SEG12COM0_MASK                  equ 0010h
LCDDATA1_SEG13COM0_POSN                  equ 0005h
LCDDATA1_SEG13COM0_POSITION              equ 0005h
LCDDATA1_SEG13COM0_SIZE                  equ 0001h
LCDDATA1_SEG13COM0_LENGTH                equ 0001h
LCDDATA1_SEG13COM0_MASK                  equ 0020h
LCDDATA1_SEG14COM0_POSN                  equ 0006h
LCDDATA1_SEG14COM0_POSITION              equ 0006h
LCDDATA1_SEG14COM0_SIZE                  equ 0001h
LCDDATA1_SEG14COM0_LENGTH                equ 0001h
LCDDATA1_SEG14COM0_MASK                  equ 0040h
LCDDATA1_SEG15COM0_POSN                  equ 0007h
LCDDATA1_SEG15COM0_POSITION              equ 0007h
LCDDATA1_SEG15COM0_SIZE                  equ 0001h
LCDDATA1_SEG15COM0_LENGTH                equ 0001h
LCDDATA1_SEG15COM0_MASK                  equ 0080h

// Register: LCDDATA2
#define LCDDATA2 LCDDATA2
LCDDATA2                                 equ 07A2h
// bitfield definitions
LCDDATA2_SEG16COM0_POSN                  equ 0000h
LCDDATA2_SEG16COM0_POSITION              equ 0000h
LCDDATA2_SEG16COM0_SIZE                  equ 0001h
LCDDATA2_SEG16COM0_LENGTH                equ 0001h
LCDDATA2_SEG16COM0_MASK                  equ 0001h
LCDDATA2_SEG17COM0_POSN                  equ 0001h
LCDDATA2_SEG17COM0_POSITION              equ 0001h
LCDDATA2_SEG17COM0_SIZE                  equ 0001h
LCDDATA2_SEG17COM0_LENGTH                equ 0001h
LCDDATA2_SEG17COM0_MASK                  equ 0002h
LCDDATA2_SEG18COM0_POSN                  equ 0002h
LCDDATA2_SEG18COM0_POSITION              equ 0002h
LCDDATA2_SEG18COM0_SIZE                  equ 0001h
LCDDATA2_SEG18COM0_LENGTH                equ 0001h
LCDDATA2_SEG18COM0_MASK                  equ 0004h
LCDDATA2_SEG19COM0_POSN                  equ 0003h
LCDDATA2_SEG19COM0_POSITION              equ 0003h
LCDDATA2_SEG19COM0_SIZE                  equ 0001h
LCDDATA2_SEG19COM0_LENGTH                equ 0001h
LCDDATA2_SEG19COM0_MASK                  equ 0008h
LCDDATA2_SEG20COM0_POSN                  equ 0004h
LCDDATA2_SEG20COM0_POSITION              equ 0004h
LCDDATA2_SEG20COM0_SIZE                  equ 0001h
LCDDATA2_SEG20COM0_LENGTH                equ 0001h
LCDDATA2_SEG20COM0_MASK                  equ 0010h
LCDDATA2_SEG21COM0_POSN                  equ 0005h
LCDDATA2_SEG21COM0_POSITION              equ 0005h
LCDDATA2_SEG21COM0_SIZE                  equ 0001h
LCDDATA2_SEG21COM0_LENGTH                equ 0001h
LCDDATA2_SEG21COM0_MASK                  equ 0020h
LCDDATA2_SEG22COM0_POSN                  equ 0006h
LCDDATA2_SEG22COM0_POSITION              equ 0006h
LCDDATA2_SEG22COM0_SIZE                  equ 0001h
LCDDATA2_SEG22COM0_LENGTH                equ 0001h
LCDDATA2_SEG22COM0_MASK                  equ 0040h
LCDDATA2_SEG23COM0_POSN                  equ 0007h
LCDDATA2_SEG23COM0_POSITION              equ 0007h
LCDDATA2_SEG23COM0_SIZE                  equ 0001h
LCDDATA2_SEG23COM0_LENGTH                equ 0001h
LCDDATA2_SEG23COM0_MASK                  equ 0080h

// Register: LCDDATA3
#define LCDDATA3 LCDDATA3
LCDDATA3                                 equ 07A3h
// bitfield definitions
LCDDATA3_SEG0COM1_POSN                   equ 0000h
LCDDATA3_SEG0COM1_POSITION               equ 0000h
LCDDATA3_SEG0COM1_SIZE                   equ 0001h
LCDDATA3_SEG0COM1_LENGTH                 equ 0001h
LCDDATA3_SEG0COM1_MASK                   equ 0001h
LCDDATA3_SEG1COM1_POSN                   equ 0001h
LCDDATA3_SEG1COM1_POSITION               equ 0001h
LCDDATA3_SEG1COM1_SIZE                   equ 0001h
LCDDATA3_SEG1COM1_LENGTH                 equ 0001h
LCDDATA3_SEG1COM1_MASK                   equ 0002h
LCDDATA3_SEG2COM1_POSN                   equ 0002h
LCDDATA3_SEG2COM1_POSITION               equ 0002h
LCDDATA3_SEG2COM1_SIZE                   equ 0001h
LCDDATA3_SEG2COM1_LENGTH                 equ 0001h
LCDDATA3_SEG2COM1_MASK                   equ 0004h
LCDDATA3_SEG3COM1_POSN                   equ 0003h
LCDDATA3_SEG3COM1_POSITION               equ 0003h
LCDDATA3_SEG3COM1_SIZE                   equ 0001h
LCDDATA3_SEG3COM1_LENGTH                 equ 0001h
LCDDATA3_SEG3COM1_MASK                   equ 0008h
LCDDATA3_SEG4COM1_POSN                   equ 0004h
LCDDATA3_SEG4COM1_POSITION               equ 0004h
LCDDATA3_SEG4COM1_SIZE                   equ 0001h
LCDDATA3_SEG4COM1_LENGTH                 equ 0001h
LCDDATA3_SEG4COM1_MASK                   equ 0010h
LCDDATA3_SEG5COM1_POSN                   equ 0005h
LCDDATA3_SEG5COM1_POSITION               equ 0005h
LCDDATA3_SEG5COM1_SIZE                   equ 0001h
LCDDATA3_SEG5COM1_LENGTH                 equ 0001h
LCDDATA3_SEG5COM1_MASK                   equ 0020h
LCDDATA3_SEG6COM1_POSN                   equ 0006h
LCDDATA3_SEG6COM1_POSITION               equ 0006h
LCDDATA3_SEG6COM1_SIZE                   equ 0001h
LCDDATA3_SEG6COM1_LENGTH                 equ 0001h
LCDDATA3_SEG6COM1_MASK                   equ 0040h
LCDDATA3_SEG7COM1_POSN                   equ 0007h
LCDDATA3_SEG7COM1_POSITION               equ 0007h
LCDDATA3_SEG7COM1_SIZE                   equ 0001h
LCDDATA3_SEG7COM1_LENGTH                 equ 0001h
LCDDATA3_SEG7COM1_MASK                   equ 0080h

// Register: LCDDATA4
#define LCDDATA4 LCDDATA4
LCDDATA4                                 equ 07A4h
// bitfield definitions
LCDDATA4_SEG8COM1_POSN                   equ 0000h
LCDDATA4_SEG8COM1_POSITION               equ 0000h
LCDDATA4_SEG8COM1_SIZE                   equ 0001h
LCDDATA4_SEG8COM1_LENGTH                 equ 0001h
LCDDATA4_SEG8COM1_MASK                   equ 0001h
LCDDATA4_SEG9COM1_POSN                   equ 0001h
LCDDATA4_SEG9COM1_POSITION               equ 0001h
LCDDATA4_SEG9COM1_SIZE                   equ 0001h
LCDDATA4_SEG9COM1_LENGTH                 equ 0001h
LCDDATA4_SEG9COM1_MASK                   equ 0002h
LCDDATA4_SEG10COM1_POSN                  equ 0002h
LCDDATA4_SEG10COM1_POSITION              equ 0002h
LCDDATA4_SEG10COM1_SIZE                  equ 0001h
LCDDATA4_SEG10COM1_LENGTH                equ 0001h
LCDDATA4_SEG10COM1_MASK                  equ 0004h
LCDDATA4_SEG11COM1_POSN                  equ 0003h
LCDDATA4_SEG11COM1_POSITION              equ 0003h
LCDDATA4_SEG11COM1_SIZE                  equ 0001h
LCDDATA4_SEG11COM1_LENGTH                equ 0001h
LCDDATA4_SEG11COM1_MASK                  equ 0008h
LCDDATA4_SEG12COM1_POSN                  equ 0004h
LCDDATA4_SEG12COM1_POSITION              equ 0004h
LCDDATA4_SEG12COM1_SIZE                  equ 0001h
LCDDATA4_SEG12COM1_LENGTH                equ 0001h
LCDDATA4_SEG12COM1_MASK                  equ 0010h
LCDDATA4_SEG13COM1_POSN                  equ 0005h
LCDDATA4_SEG13COM1_POSITION              equ 0005h
LCDDATA4_SEG13COM1_SIZE                  equ 0001h
LCDDATA4_SEG13COM1_LENGTH                equ 0001h
LCDDATA4_SEG13COM1_MASK                  equ 0020h
LCDDATA4_SEG14COM1_POSN                  equ 0006h
LCDDATA4_SEG14COM1_POSITION              equ 0006h
LCDDATA4_SEG14COM1_SIZE                  equ 0001h
LCDDATA4_SEG14COM1_LENGTH                equ 0001h
LCDDATA4_SEG14COM1_MASK                  equ 0040h
LCDDATA4_SEG15COM1_POSN                  equ 0007h
LCDDATA4_SEG15COM1_POSITION              equ 0007h
LCDDATA4_SEG15COM1_SIZE                  equ 0001h
LCDDATA4_SEG15COM1_LENGTH                equ 0001h
LCDDATA4_SEG15COM1_MASK                  equ 0080h

// Register: LCDDATA5
#define LCDDATA5 LCDDATA5
LCDDATA5                                 equ 07A5h
// bitfield definitions
LCDDATA5_SEG16COM1_POSN                  equ 0000h
LCDDATA5_SEG16COM1_POSITION              equ 0000h
LCDDATA5_SEG16COM1_SIZE                  equ 0001h
LCDDATA5_SEG16COM1_LENGTH                equ 0001h
LCDDATA5_SEG16COM1_MASK                  equ 0001h
LCDDATA5_SEG17COM1_POSN                  equ 0001h
LCDDATA5_SEG17COM1_POSITION              equ 0001h
LCDDATA5_SEG17COM1_SIZE                  equ 0001h
LCDDATA5_SEG17COM1_LENGTH                equ 0001h
LCDDATA5_SEG17COM1_MASK                  equ 0002h
LCDDATA5_SEG18COM1_POSN                  equ 0002h
LCDDATA5_SEG18COM1_POSITION              equ 0002h
LCDDATA5_SEG18COM1_SIZE                  equ 0001h
LCDDATA5_SEG18COM1_LENGTH                equ 0001h
LCDDATA5_SEG18COM1_MASK                  equ 0004h
LCDDATA5_SEG19COM1_POSN                  equ 0003h
LCDDATA5_SEG19COM1_POSITION              equ 0003h
LCDDATA5_SEG19COM1_SIZE                  equ 0001h
LCDDATA5_SEG19COM1_LENGTH                equ 0001h
LCDDATA5_SEG19COM1_MASK                  equ 0008h
LCDDATA5_SEG20COM1_POSN                  equ 0004h
LCDDATA5_SEG20COM1_POSITION              equ 0004h
LCDDATA5_SEG20COM1_SIZE                  equ 0001h
LCDDATA5_SEG20COM1_LENGTH                equ 0001h
LCDDATA5_SEG20COM1_MASK                  equ 0010h
LCDDATA5_SEG21COM1_POSN                  equ 0005h
LCDDATA5_SEG21COM1_POSITION              equ 0005h
LCDDATA5_SEG21COM1_SIZE                  equ 0001h
LCDDATA5_SEG21COM1_LENGTH                equ 0001h
LCDDATA5_SEG21COM1_MASK                  equ 0020h
LCDDATA5_SEG22COM1_POSN                  equ 0006h
LCDDATA5_SEG22COM1_POSITION              equ 0006h
LCDDATA5_SEG22COM1_SIZE                  equ 0001h
LCDDATA5_SEG22COM1_LENGTH                equ 0001h
LCDDATA5_SEG22COM1_MASK                  equ 0040h
LCDDATA5_SEG23COM1_POSN                  equ 0007h
LCDDATA5_SEG23COM1_POSITION              equ 0007h
LCDDATA5_SEG23COM1_SIZE                  equ 0001h
LCDDATA5_SEG23COM1_LENGTH                equ 0001h
LCDDATA5_SEG23COM1_MASK                  equ 0080h

// Register: LCDDATA6
#define LCDDATA6 LCDDATA6
LCDDATA6                                 equ 07A6h
// bitfield definitions
LCDDATA6_SEG0COM2_POSN                   equ 0000h
LCDDATA6_SEG0COM2_POSITION               equ 0000h
LCDDATA6_SEG0COM2_SIZE                   equ 0001h
LCDDATA6_SEG0COM2_LENGTH                 equ 0001h
LCDDATA6_SEG0COM2_MASK                   equ 0001h
LCDDATA6_SEG1COM2_POSN                   equ 0001h
LCDDATA6_SEG1COM2_POSITION               equ 0001h
LCDDATA6_SEG1COM2_SIZE                   equ 0001h
LCDDATA6_SEG1COM2_LENGTH                 equ 0001h
LCDDATA6_SEG1COM2_MASK                   equ 0002h
LCDDATA6_SEG2COM2_POSN                   equ 0002h
LCDDATA6_SEG2COM2_POSITION               equ 0002h
LCDDATA6_SEG2COM2_SIZE                   equ 0001h
LCDDATA6_SEG2COM2_LENGTH                 equ 0001h
LCDDATA6_SEG2COM2_MASK                   equ 0004h
LCDDATA6_SEG3COM2_POSN                   equ 0003h
LCDDATA6_SEG3COM2_POSITION               equ 0003h
LCDDATA6_SEG3COM2_SIZE                   equ 0001h
LCDDATA6_SEG3COM2_LENGTH                 equ 0001h
LCDDATA6_SEG3COM2_MASK                   equ 0008h
LCDDATA6_SEG4COM2_POSN                   equ 0004h
LCDDATA6_SEG4COM2_POSITION               equ 0004h
LCDDATA6_SEG4COM2_SIZE                   equ 0001h
LCDDATA6_SEG4COM2_LENGTH                 equ 0001h
LCDDATA6_SEG4COM2_MASK                   equ 0010h
LCDDATA6_SEG5COM2_POSN                   equ 0005h
LCDDATA6_SEG5COM2_POSITION               equ 0005h
LCDDATA6_SEG5COM2_SIZE                   equ 0001h
LCDDATA6_SEG5COM2_LENGTH                 equ 0001h
LCDDATA6_SEG5COM2_MASK                   equ 0020h
LCDDATA6_SEG6COM2_POSN                   equ 0006h
LCDDATA6_SEG6COM2_POSITION               equ 0006h
LCDDATA6_SEG6COM2_SIZE                   equ 0001h
LCDDATA6_SEG6COM2_LENGTH                 equ 0001h
LCDDATA6_SEG6COM2_MASK                   equ 0040h
LCDDATA6_SEG7COM2_POSN                   equ 0007h
LCDDATA6_SEG7COM2_POSITION               equ 0007h
LCDDATA6_SEG7COM2_SIZE                   equ 0001h
LCDDATA6_SEG7COM2_LENGTH                 equ 0001h
LCDDATA6_SEG7COM2_MASK                   equ 0080h

// Register: LCDDATA7
#define LCDDATA7 LCDDATA7
LCDDATA7                                 equ 07A7h
// bitfield definitions
LCDDATA7_SEG8COM2_POSN                   equ 0000h
LCDDATA7_SEG8COM2_POSITION               equ 0000h
LCDDATA7_SEG8COM2_SIZE                   equ 0001h
LCDDATA7_SEG8COM2_LENGTH                 equ 0001h
LCDDATA7_SEG8COM2_MASK                   equ 0001h
LCDDATA7_SEG9COM2_POSN                   equ 0001h
LCDDATA7_SEG9COM2_POSITION               equ 0001h
LCDDATA7_SEG9COM2_SIZE                   equ 0001h
LCDDATA7_SEG9COM2_LENGTH                 equ 0001h
LCDDATA7_SEG9COM2_MASK                   equ 0002h
LCDDATA7_SEG10COM2_POSN                  equ 0002h
LCDDATA7_SEG10COM2_POSITION              equ 0002h
LCDDATA7_SEG10COM2_SIZE                  equ 0001h
LCDDATA7_SEG10COM2_LENGTH                equ 0001h
LCDDATA7_SEG10COM2_MASK                  equ 0004h
LCDDATA7_SEG11COM2_POSN                  equ 0003h
LCDDATA7_SEG11COM2_POSITION              equ 0003h
LCDDATA7_SEG11COM2_SIZE                  equ 0001h
LCDDATA7_SEG11COM2_LENGTH                equ 0001h
LCDDATA7_SEG11COM2_MASK                  equ 0008h
LCDDATA7_SEG12COM2_POSN                  equ 0004h
LCDDATA7_SEG12COM2_POSITION              equ 0004h
LCDDATA7_SEG12COM2_SIZE                  equ 0001h
LCDDATA7_SEG12COM2_LENGTH                equ 0001h
LCDDATA7_SEG12COM2_MASK                  equ 0010h
LCDDATA7_SEG13COM2_POSN                  equ 0005h
LCDDATA7_SEG13COM2_POSITION              equ 0005h
LCDDATA7_SEG13COM2_SIZE                  equ 0001h
LCDDATA7_SEG13COM2_LENGTH                equ 0001h
LCDDATA7_SEG13COM2_MASK                  equ 0020h
LCDDATA7_SEG14COM2_POSN                  equ 0006h
LCDDATA7_SEG14COM2_POSITION              equ 0006h
LCDDATA7_SEG14COM2_SIZE                  equ 0001h
LCDDATA7_SEG14COM2_LENGTH                equ 0001h
LCDDATA7_SEG14COM2_MASK                  equ 0040h
LCDDATA7_SEG15COM2_POSN                  equ 0007h
LCDDATA7_SEG15COM2_POSITION              equ 0007h
LCDDATA7_SEG15COM2_SIZE                  equ 0001h
LCDDATA7_SEG15COM2_LENGTH                equ 0001h
LCDDATA7_SEG15COM2_MASK                  equ 0080h

// Register: LCDDATA8
#define LCDDATA8 LCDDATA8
LCDDATA8                                 equ 07A8h
// bitfield definitions
LCDDATA8_SEG16COM2_POSN                  equ 0000h
LCDDATA8_SEG16COM2_POSITION              equ 0000h
LCDDATA8_SEG16COM2_SIZE                  equ 0001h
LCDDATA8_SEG16COM2_LENGTH                equ 0001h
LCDDATA8_SEG16COM2_MASK                  equ 0001h
LCDDATA8_SEG17COM2_POSN                  equ 0001h
LCDDATA8_SEG17COM2_POSITION              equ 0001h
LCDDATA8_SEG17COM2_SIZE                  equ 0001h
LCDDATA8_SEG17COM2_LENGTH                equ 0001h
LCDDATA8_SEG17COM2_MASK                  equ 0002h
LCDDATA8_SEG18COM2_POSN                  equ 0002h
LCDDATA8_SEG18COM2_POSITION              equ 0002h
LCDDATA8_SEG18COM2_SIZE                  equ 0001h
LCDDATA8_SEG18COM2_LENGTH                equ 0001h
LCDDATA8_SEG18COM2_MASK                  equ 0004h
LCDDATA8_SEG19COM2_POSN                  equ 0003h
LCDDATA8_SEG19COM2_POSITION              equ 0003h
LCDDATA8_SEG19COM2_SIZE                  equ 0001h
LCDDATA8_SEG19COM2_LENGTH                equ 0001h
LCDDATA8_SEG19COM2_MASK                  equ 0008h
LCDDATA8_SEG20COM2_POSN                  equ 0004h
LCDDATA8_SEG20COM2_POSITION              equ 0004h
LCDDATA8_SEG20COM2_SIZE                  equ 0001h
LCDDATA8_SEG20COM2_LENGTH                equ 0001h
LCDDATA8_SEG20COM2_MASK                  equ 0010h
LCDDATA8_SEG21COM2_POSN                  equ 0005h
LCDDATA8_SEG21COM2_POSITION              equ 0005h
LCDDATA8_SEG21COM2_SIZE                  equ 0001h
LCDDATA8_SEG21COM2_LENGTH                equ 0001h
LCDDATA8_SEG21COM2_MASK                  equ 0020h
LCDDATA8_SEG22COM2_POSN                  equ 0006h
LCDDATA8_SEG22COM2_POSITION              equ 0006h
LCDDATA8_SEG22COM2_SIZE                  equ 0001h
LCDDATA8_SEG22COM2_LENGTH                equ 0001h
LCDDATA8_SEG22COM2_MASK                  equ 0040h
LCDDATA8_SEG23COM2_POSN                  equ 0007h
LCDDATA8_SEG23COM2_POSITION              equ 0007h
LCDDATA8_SEG23COM2_SIZE                  equ 0001h
LCDDATA8_SEG23COM2_LENGTH                equ 0001h
LCDDATA8_SEG23COM2_MASK                  equ 0080h

// Register: LCDDATA9
#define LCDDATA9 LCDDATA9
LCDDATA9                                 equ 07A9h
// bitfield definitions
LCDDATA9_SEG0COM3_POSN                   equ 0000h
LCDDATA9_SEG0COM3_POSITION               equ 0000h
LCDDATA9_SEG0COM3_SIZE                   equ 0001h
LCDDATA9_SEG0COM3_LENGTH                 equ 0001h
LCDDATA9_SEG0COM3_MASK                   equ 0001h
LCDDATA9_SEG1COM3_POSN                   equ 0001h
LCDDATA9_SEG1COM3_POSITION               equ 0001h
LCDDATA9_SEG1COM3_SIZE                   equ 0001h
LCDDATA9_SEG1COM3_LENGTH                 equ 0001h
LCDDATA9_SEG1COM3_MASK                   equ 0002h
LCDDATA9_SEG2COM3_POSN                   equ 0002h
LCDDATA9_SEG2COM3_POSITION               equ 0002h
LCDDATA9_SEG2COM3_SIZE                   equ 0001h
LCDDATA9_SEG2COM3_LENGTH                 equ 0001h
LCDDATA9_SEG2COM3_MASK                   equ 0004h
LCDDATA9_SEG3COM3_POSN                   equ 0003h
LCDDATA9_SEG3COM3_POSITION               equ 0003h
LCDDATA9_SEG3COM3_SIZE                   equ 0001h
LCDDATA9_SEG3COM3_LENGTH                 equ 0001h
LCDDATA9_SEG3COM3_MASK                   equ 0008h
LCDDATA9_SEG4COM3_POSN                   equ 0004h
LCDDATA9_SEG4COM3_POSITION               equ 0004h
LCDDATA9_SEG4COM3_SIZE                   equ 0001h
LCDDATA9_SEG4COM3_LENGTH                 equ 0001h
LCDDATA9_SEG4COM3_MASK                   equ 0010h
LCDDATA9_SEG5COM3_POSN                   equ 0005h
LCDDATA9_SEG5COM3_POSITION               equ 0005h
LCDDATA9_SEG5COM3_SIZE                   equ 0001h
LCDDATA9_SEG5COM3_LENGTH                 equ 0001h
LCDDATA9_SEG5COM3_MASK                   equ 0020h
LCDDATA9_SEG6COM3_POSN                   equ 0006h
LCDDATA9_SEG6COM3_POSITION               equ 0006h
LCDDATA9_SEG6COM3_SIZE                   equ 0001h
LCDDATA9_SEG6COM3_LENGTH                 equ 0001h
LCDDATA9_SEG6COM3_MASK                   equ 0040h
LCDDATA9_SEG7COM3_POSN                   equ 0007h
LCDDATA9_SEG7COM3_POSITION               equ 0007h
LCDDATA9_SEG7COM3_SIZE                   equ 0001h
LCDDATA9_SEG7COM3_LENGTH                 equ 0001h
LCDDATA9_SEG7COM3_MASK                   equ 0080h

// Register: LCDDATA10
#define LCDDATA10 LCDDATA10
LCDDATA10                                equ 07AAh
// bitfield definitions
LCDDATA10_SEG8COM3_POSN                  equ 0000h
LCDDATA10_SEG8COM3_POSITION              equ 0000h
LCDDATA10_SEG8COM3_SIZE                  equ 0001h
LCDDATA10_SEG8COM3_LENGTH                equ 0001h
LCDDATA10_SEG8COM3_MASK                  equ 0001h
LCDDATA10_SEG9COM3_POSN                  equ 0001h
LCDDATA10_SEG9COM3_POSITION              equ 0001h
LCDDATA10_SEG9COM3_SIZE                  equ 0001h
LCDDATA10_SEG9COM3_LENGTH                equ 0001h
LCDDATA10_SEG9COM3_MASK                  equ 0002h
LCDDATA10_SEG10COM3_POSN                 equ 0002h
LCDDATA10_SEG10COM3_POSITION             equ 0002h
LCDDATA10_SEG10COM3_SIZE                 equ 0001h
LCDDATA10_SEG10COM3_LENGTH               equ 0001h
LCDDATA10_SEG10COM3_MASK                 equ 0004h
LCDDATA10_SEG11COM3_POSN                 equ 0003h
LCDDATA10_SEG11COM3_POSITION             equ 0003h
LCDDATA10_SEG11COM3_SIZE                 equ 0001h
LCDDATA10_SEG11COM3_LENGTH               equ 0001h
LCDDATA10_SEG11COM3_MASK                 equ 0008h
LCDDATA10_SEG12COM3_POSN                 equ 0004h
LCDDATA10_SEG12COM3_POSITION             equ 0004h
LCDDATA10_SEG12COM3_SIZE                 equ 0001h
LCDDATA10_SEG12COM3_LENGTH               equ 0001h
LCDDATA10_SEG12COM3_MASK                 equ 0010h
LCDDATA10_SEG13COM3_POSN                 equ 0005h
LCDDATA10_SEG13COM3_POSITION             equ 0005h
LCDDATA10_SEG13COM3_SIZE                 equ 0001h
LCDDATA10_SEG13COM3_LENGTH               equ 0001h
LCDDATA10_SEG13COM3_MASK                 equ 0020h
LCDDATA10_SEG14COM3_POSN                 equ 0006h
LCDDATA10_SEG14COM3_POSITION             equ 0006h
LCDDATA10_SEG14COM3_SIZE                 equ 0001h
LCDDATA10_SEG14COM3_LENGTH               equ 0001h
LCDDATA10_SEG14COM3_MASK                 equ 0040h
LCDDATA10_SEG15COM3_POSN                 equ 0007h
LCDDATA10_SEG15COM3_POSITION             equ 0007h
LCDDATA10_SEG15COM3_SIZE                 equ 0001h
LCDDATA10_SEG15COM3_LENGTH               equ 0001h
LCDDATA10_SEG15COM3_MASK                 equ 0080h

// Register: LCDDATA11
#define LCDDATA11 LCDDATA11
LCDDATA11                                equ 07ABh
// bitfield definitions
LCDDATA11_SEG16COM3_POSN                 equ 0000h
LCDDATA11_SEG16COM3_POSITION             equ 0000h
LCDDATA11_SEG16COM3_SIZE                 equ 0001h
LCDDATA11_SEG16COM3_LENGTH               equ 0001h
LCDDATA11_SEG16COM3_MASK                 equ 0001h
LCDDATA11_SEG17COM3_POSN                 equ 0001h
LCDDATA11_SEG17COM3_POSITION             equ 0001h
LCDDATA11_SEG17COM3_SIZE                 equ 0001h
LCDDATA11_SEG17COM3_LENGTH               equ 0001h
LCDDATA11_SEG17COM3_MASK                 equ 0002h
LCDDATA11_SEG18COM3_POSN                 equ 0002h
LCDDATA11_SEG18COM3_POSITION             equ 0002h
LCDDATA11_SEG18COM3_SIZE                 equ 0001h
LCDDATA11_SEG18COM3_LENGTH               equ 0001h
LCDDATA11_SEG18COM3_MASK                 equ 0004h
LCDDATA11_SEG19COM3_POSN                 equ 0003h
LCDDATA11_SEG19COM3_POSITION             equ 0003h
LCDDATA11_SEG19COM3_SIZE                 equ 0001h
LCDDATA11_SEG19COM3_LENGTH               equ 0001h
LCDDATA11_SEG19COM3_MASK                 equ 0008h
LCDDATA11_SEG20COM3_POSN                 equ 0004h
LCDDATA11_SEG20COM3_POSITION             equ 0004h
LCDDATA11_SEG20COM3_SIZE                 equ 0001h
LCDDATA11_SEG20COM3_LENGTH               equ 0001h
LCDDATA11_SEG20COM3_MASK                 equ 0010h
LCDDATA11_SEG21COM3_POSN                 equ 0005h
LCDDATA11_SEG21COM3_POSITION             equ 0005h
LCDDATA11_SEG21COM3_SIZE                 equ 0001h
LCDDATA11_SEG21COM3_LENGTH               equ 0001h
LCDDATA11_SEG21COM3_MASK                 equ 0020h
LCDDATA11_SEG22COM3_POSN                 equ 0006h
LCDDATA11_SEG22COM3_POSITION             equ 0006h
LCDDATA11_SEG22COM3_SIZE                 equ 0001h
LCDDATA11_SEG22COM3_LENGTH               equ 0001h
LCDDATA11_SEG22COM3_MASK                 equ 0040h
LCDDATA11_SEG23COM3_POSN                 equ 0007h
LCDDATA11_SEG23COM3_POSITION             equ 0007h
LCDDATA11_SEG23COM3_SIZE                 equ 0001h
LCDDATA11_SEG23COM3_LENGTH               equ 0001h
LCDDATA11_SEG23COM3_MASK                 equ 0080h

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
#define ABDEN                            BANKMASK(BAUDCON), 0
#define ABDOVF                           BANKMASK(BAUDCON), 7
#define ACKDT                            BANKMASK(SSPCON2), 5
#define ACKEN                            BANKMASK(SSPCON2), 4
#define ACKSTAT                          BANKMASK(SSPCON2), 6
#define ACKTIM                           BANKMASK(SSPCON3), 7
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADDEN                            BANKMASK(RCSTA), 3
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
#define AHEN                             BANKMASK(SSPCON3), 1
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
#define ANSD0                            BANKMASK(ANSELD), 0
#define ANSD1                            BANKMASK(ANSELD), 1
#define ANSD2                            BANKMASK(ANSELD), 2
#define ANSD3                            BANKMASK(ANSELD), 3
#define ANSD4                            BANKMASK(ANSELD), 4
#define ANSD5                            BANKMASK(ANSELD), 5
#define ANSD6                            BANKMASK(ANSELD), 6
#define ANSD7                            BANKMASK(ANSELD), 7
#define ANSE0                            BANKMASK(ANSELE), 0
#define ANSE1                            BANKMASK(ANSELE), 1
#define ANSE2                            BANKMASK(ANSELE), 2
#define BCLIE                            BANKMASK(PIE2), 3
#define BCLIF                            BANKMASK(PIR2), 3
#define BF                               BANKMASK(SSPSTAT), 0
#define BIASMD                           BANKMASK(LCDPS), 6
#define BOEN                             BANKMASK(SSPCON3), 4
#define BORRDY                           BANKMASK(BORCON), 0
#define BRG16                            BANKMASK(BAUDCON), 3
#define BRGH                             BANKMASK(TXSTA), 2
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
#define C1OE                             BANKMASK(CM1CON0), 5
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1PCH0                           BANKMASK(CM1CON1), 4
#define C1PCH1                           BANKMASK(CM1CON1), 5
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1SP                             BANKMASK(CM1CON0), 2
#define C1SYNC                           BANKMASK(CM1CON0), 0
#define C1TSEL0                          BANKMASK(CCPTMRS0), 0
#define C1TSEL1                          BANKMASK(CCPTMRS0), 1
#define C2HYS                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE2), 6
#define C2IF                             BANKMASK(PIR2), 6
#define C2INTN                           BANKMASK(CM2CON1), 6
#define C2INTP                           BANKMASK(CM2CON1), 7
#define C2NCH0                           BANKMASK(CM2CON1), 0
#define C2NCH1                           BANKMASK(CM2CON1), 1
#define C2OE                             BANKMASK(CM2CON0), 5
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2OUTSEL                         BANKMASK(APFCON), 2
#define C2PCH0                           BANKMASK(CM2CON1), 4
#define C2PCH1                           BANKMASK(CM2CON1), 5
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2SP                             BANKMASK(CM2CON0), 2
#define C2SYNC                           BANKMASK(CM2CON0), 0
#define C2TSEL0                          BANKMASK(CCPTMRS0), 2
#define C2TSEL1                          BANKMASK(CCPTMRS0), 3
#define C3TSEL0                          BANKMASK(CCPTMRS0), 4
#define C3TSEL1                          BANKMASK(CCPTMRS0), 5
#define C4TSEL0                          BANKMASK(CCPTMRS0), 6
#define C4TSEL1                          BANKMASK(CCPTMRS0), 7
#define C5TSEL0                          BANKMASK(CCPTMRS1), 0
#define C5TSEL1                          BANKMASK(CCPTMRS1), 1
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1AS0                          BANKMASK(CCP1AS), 4
#define CCP1AS1                          BANKMASK(CCP1AS), 5
#define CCP1AS2                          BANKMASK(CCP1AS), 6
#define CCP1ASE                          BANKMASK(CCP1AS), 7
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CCP2AS0                          BANKMASK(CCP2AS), 4
#define CCP2AS1                          BANKMASK(CCP2AS), 5
#define CCP2AS2                          BANKMASK(CCP2AS), 6
#define CCP2ASE                          BANKMASK(CCP2AS), 7
#define CCP2IE                           BANKMASK(PIE2), 0
#define CCP2IF                           BANKMASK(PIR2), 0
#define CCP2M0                           BANKMASK(CCP2CON), 0
#define CCP2M1                           BANKMASK(CCP2CON), 1
#define CCP2M2                           BANKMASK(CCP2CON), 2
#define CCP2M3                           BANKMASK(CCP2CON), 3
#define CCP2SEL                          BANKMASK(APFCON), 0
#define CCP3AS0                          BANKMASK(CCP3AS), 4
#define CCP3AS1                          BANKMASK(CCP3AS), 5
#define CCP3AS2                          BANKMASK(CCP3AS), 6
#define CCP3ASE                          BANKMASK(CCP3AS), 7
#define CCP3IE                           BANKMASK(PIE3), 4
#define CCP3IF                           BANKMASK(PIR3), 4
#define CCP3M0                           BANKMASK(CCP3CON), 0
#define CCP3M1                           BANKMASK(CCP3CON), 1
#define CCP3M2                           BANKMASK(CCP3CON), 2
#define CCP3M3                           BANKMASK(CCP3CON), 3
#define CCP3SEL                          BANKMASK(APFCON), 6
#define CCP4IE                           BANKMASK(PIE3), 5
#define CCP4IF                           BANKMASK(PIR3), 5
#define CCP4M0                           BANKMASK(CCP4CON), 0
#define CCP4M1                           BANKMASK(CCP4CON), 1
#define CCP4M2                           BANKMASK(CCP4CON), 2
#define CCP4M3                           BANKMASK(CCP4CON), 3
#define CCP5IE                           BANKMASK(PIE3), 6
#define CCP5IF                           BANKMASK(PIR3), 6
#define CCP5M0                           BANKMASK(CCP5CON), 0
#define CCP5M1                           BANKMASK(CCP5CON), 1
#define CCP5M2                           BANKMASK(CCP5CON), 2
#define CCP5M3                           BANKMASK(CCP5CON), 3
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CFGS                             BANKMASK(EECON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON1), 4
#define CPSCH0                           BANKMASK(CPSCON1), 0
#define CPSCH1                           BANKMASK(CPSCON1), 1
#define CPSCH2                           BANKMASK(CPSCON1), 2
#define CPSCH3                           BANKMASK(CPSCON1), 3
#define CPSON                            BANKMASK(CPSCON0), 7
#define CPSOUT                           BANKMASK(CPSCON0), 1
#define CPSRNG0                          BANKMASK(CPSCON0), 2
#define CPSRNG1                          BANKMASK(CPSCON0), 3
#define CREN                             BANKMASK(RCSTA), 4
#define CS0                              BANKMASK(LCDCON), 2
#define CS1                              BANKMASK(LCDCON), 3
#define CSRC                             BANKMASK(TXSTA), 7
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DACEN                            BANKMASK(DACCON0), 7
#define DACLPS                           BANKMASK(DACCON0), 6
#define DACNSS                           BANKMASK(DACCON0), 0
#define DACOE                            BANKMASK(DACCON0), 5
#define DACPSS0                          BANKMASK(DACCON0), 2
#define DACPSS1                          BANKMASK(DACCON0), 3
#define DACR0                            BANKMASK(DACCON1), 0
#define DACR1                            BANKMASK(DACCON1), 1
#define DACR2                            BANKMASK(DACCON1), 2
#define DACR3                            BANKMASK(DACCON1), 3
#define DACR4                            BANKMASK(DACCON1), 4
#define DC                               BANKMASK(STATUS), 1
#define DC1B0                            BANKMASK(CCP1CON), 4
#define DC1B1                            BANKMASK(CCP1CON), 5
#define DC2B0                            BANKMASK(CCP2CON), 4
#define DC2B1                            BANKMASK(CCP2CON), 5
#define DC3B0                            BANKMASK(CCP3CON), 4
#define DC3B1                            BANKMASK(CCP3CON), 5
#define DC4B0                            BANKMASK(CCP4CON), 4
#define DC4B1                            BANKMASK(CCP4CON), 5
#define DC5B0                            BANKMASK(CCP5CON), 4
#define DC5B1                            BANKMASK(CCP5CON), 5
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define DHEN                             BANKMASK(SSPCON3), 0
#define D_nA                             BANKMASK(SSPSTAT), 5
#define EEIE                             BANKMASK(PIE2), 4
#define EEIF                             BANKMASK(PIR2), 4
#define EEPGD                            BANKMASK(EECON1), 7
#define FERR                             BANKMASK(RCSTA), 2
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
#define LATD0                            BANKMASK(LATD), 0
#define LATD1                            BANKMASK(LATD), 1
#define LATD2                            BANKMASK(LATD), 2
#define LATD3                            BANKMASK(LATD), 3
#define LATD4                            BANKMASK(LATD), 4
#define LATD5                            BANKMASK(LATD), 5
#define LATD6                            BANKMASK(LATD), 6
#define LATD7                            BANKMASK(LATD), 7
#define LATE0                            BANKMASK(LATE), 0
#define LATE1                            BANKMASK(LATE), 1
#define LATE2                            BANKMASK(LATE), 2
#define LATE3                            BANKMASK(LATE), 3
#define LCDA                             BANKMASK(LCDPS), 5
#define LCDCST0                          BANKMASK(LCDCST), 0
#define LCDCST1                          BANKMASK(LCDCST), 1
#define LCDCST2                          BANKMASK(LCDCST), 2
#define LCDEN                            BANKMASK(LCDCON), 7
#define LCDIE                            BANKMASK(PIE2), 2
#define LCDIF                            BANKMASK(PIR2), 2
#define LCDIRE                           BANKMASK(LCDREF), 7
#define LCDIRI                           BANKMASK(LCDREF), 5
#define LCDIRS                           BANKMASK(LCDREF), 6
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LMUX0                            BANKMASK(LCDCON), 0
#define LMUX1                            BANKMASK(LCDCON), 1
#define LP0                              BANKMASK(LCDPS), 0
#define LP1                              BANKMASK(LCDPS), 1
#define LP2                              BANKMASK(LCDPS), 2
#define LP3                              BANKMASK(LCDPS), 3
#define LRLAP0                           BANKMASK(LCDRL), 6
#define LRLAP1                           BANKMASK(LCDRL), 7
#define LRLAT0                           BANKMASK(LCDRL), 0
#define LRLAT1                           BANKMASK(LCDRL), 1
#define LRLAT2                           BANKMASK(LCDRL), 2
#define LRLBP0                           BANKMASK(LCDRL), 4
#define LRLBP1                           BANKMASK(LCDRL), 5
#define LWLO                             BANKMASK(EECON1), 5
#define MC1OUT                           BANKMASK(CMOUT), 0
#define MC2OUT                           BANKMASK(CMOUT), 1
#define MFIOFR                           BANKMASK(OSCSTAT), 2
#define OERR                             BANKMASK(RCSTA), 1
#define OSFIE                            BANKMASK(PIE2), 7
#define OSFIF                            BANKMASK(PIR2), 7
#define OSTS                             BANKMASK(OSCSTAT), 5
#define P1DC0                            BANKMASK(PWM1CON), 0
#define P1DC1                            BANKMASK(PWM1CON), 1
#define P1DC2                            BANKMASK(PWM1CON), 2
#define P1DC3                            BANKMASK(PWM1CON), 3
#define P1DC4                            BANKMASK(PWM1CON), 4
#define P1DC5                            BANKMASK(PWM1CON), 5
#define P1DC6                            BANKMASK(PWM1CON), 6
#define P1M0                             BANKMASK(CCP1CON), 6
#define P1M1                             BANKMASK(CCP1CON), 7
#define P1RSEN                           BANKMASK(PWM1CON), 7
#define P2BSEL                           BANKMASK(APFCON), 4
#define P2DC0                            BANKMASK(PWM2CON), 0
#define P2DC1                            BANKMASK(PWM2CON), 1
#define P2DC2                            BANKMASK(PWM2CON), 2
#define P2DC3                            BANKMASK(PWM2CON), 3
#define P2DC4                            BANKMASK(PWM2CON), 4
#define P2DC5                            BANKMASK(PWM2CON), 5
#define P2DC6                            BANKMASK(PWM2CON), 6
#define P2M0                             BANKMASK(CCP2CON), 6
#define P2M1                             BANKMASK(CCP2CON), 7
#define P2RSEN                           BANKMASK(PWM2CON), 7
#define P3DC0                            BANKMASK(PWM3CON), 0
#define P3DC1                            BANKMASK(PWM3CON), 1
#define P3DC2                            BANKMASK(PWM3CON), 2
#define P3DC3                            BANKMASK(PWM3CON), 3
#define P3DC4                            BANKMASK(PWM3CON), 4
#define P3DC5                            BANKMASK(PWM3CON), 5
#define P3DC6                            BANKMASK(PWM3CON), 6
#define P3M0                             BANKMASK(CCP3CON), 6
#define P3M1                             BANKMASK(CCP3CON), 7
#define P3RSEN                           BANKMASK(PWM3CON), 7
#define PCIE                             BANKMASK(SSPCON3), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSPCON2), 2
#define PLLR                             BANKMASK(OSCSTAT), 6
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PSS1AC0                          BANKMASK(CCP1AS), 2
#define PSS1AC1                          BANKMASK(CCP1AS), 3
#define PSS1BD0                          BANKMASK(CCP1AS), 0
#define PSS1BD1                          BANKMASK(CCP1AS), 1
#define PSS2AC0                          BANKMASK(CCP2AS), 2
#define PSS2AC1                          BANKMASK(CCP2AS), 3
#define PSS2BD0                          BANKMASK(CCP2AS), 0
#define PSS2BD1                          BANKMASK(CCP2AS), 1
#define PSS3AC0                          BANKMASK(CCP3AS), 2
#define PSS3AC1                          BANKMASK(CCP3AS), 3
#define PSS3BD0                          BANKMASK(CCP3AS), 0
#define PSS3BD1                          BANKMASK(CCP3AS), 1
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
#define RCIDL                            BANKMASK(BAUDCON), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(EECON1), 0
#define RD0                              BANKMASK(PORTD), 0
#define RD1                              BANKMASK(PORTD), 1
#define RD2                              BANKMASK(PORTD), 2
#define RD3                              BANKMASK(PORTD), 3
#define RD4                              BANKMASK(PORTD), 4
#define RD5                              BANKMASK(PORTD), 5
#define RD6                              BANKMASK(PORTD), 6
#define RD7                              BANKMASK(PORTD), 7
#define RE0                              BANKMASK(PORTE), 0
#define RE1                              BANKMASK(PORTE), 1
#define RE2                              BANKMASK(PORTE), 2
#define RE3                              BANKMASK(PORTE), 3
#define RSEN                             BANKMASK(SSPCON2), 1
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SBCDE                            BANKMASK(SSPCON3), 2
#define SBOREN                           BANKMASK(BORCON), 7
#define SCIE                             BANKMASK(SSPCON3), 5
#define SCKP                             BANKMASK(BAUDCON), 4
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SDAHT                            BANKMASK(SSPCON3), 3
#define SE0                              BANKMASK(LCDSE0), 0
#define SE1                              BANKMASK(LCDSE0), 1
#define SE10                             BANKMASK(LCDSE1), 2
#define SE11                             BANKMASK(LCDSE1), 3
#define SE12                             BANKMASK(LCDSE1), 4
#define SE13                             BANKMASK(LCDSE1), 5
#define SE14                             BANKMASK(LCDSE1), 6
#define SE15                             BANKMASK(LCDSE1), 7
#define SE16                             BANKMASK(LCDSE2), 0
#define SE17                             BANKMASK(LCDSE2), 1
#define SE18                             BANKMASK(LCDSE2), 2
#define SE19                             BANKMASK(LCDSE2), 3
#define SE2                              BANKMASK(LCDSE0), 2
#define SE20                             BANKMASK(LCDSE2), 4
#define SE21                             BANKMASK(LCDSE2), 5
#define SE22                             BANKMASK(LCDSE2), 6
#define SE23                             BANKMASK(LCDSE2), 7
#define SE3                              BANKMASK(LCDSE0), 3
#define SE4                              BANKMASK(LCDSE0), 4
#define SE5                              BANKMASK(LCDSE0), 5
#define SE6                              BANKMASK(LCDSE0), 6
#define SE7                              BANKMASK(LCDSE0), 7
#define SE8                              BANKMASK(LCDSE1), 0
#define SE9                              BANKMASK(LCDSE1), 1
#define SEG0COM0                         BANKMASK(LCDDATA0), 0
#define SEG0COM1                         BANKMASK(LCDDATA3), 0
#define SEG0COM2                         BANKMASK(LCDDATA6), 0
#define SEG0COM3                         BANKMASK(LCDDATA9), 0
#define SEG10COM0                        BANKMASK(LCDDATA1), 2
#define SEG10COM1                        BANKMASK(LCDDATA4), 2
#define SEG10COM2                        BANKMASK(LCDDATA7), 2
#define SEG10COM3                        BANKMASK(LCDDATA10), 2
#define SEG11COM0                        BANKMASK(LCDDATA1), 3
#define SEG11COM1                        BANKMASK(LCDDATA4), 3
#define SEG11COM2                        BANKMASK(LCDDATA7), 3
#define SEG11COM3                        BANKMASK(LCDDATA10), 3
#define SEG12COM0                        BANKMASK(LCDDATA1), 4
#define SEG12COM1                        BANKMASK(LCDDATA4), 4
#define SEG12COM2                        BANKMASK(LCDDATA7), 4
#define SEG12COM3                        BANKMASK(LCDDATA10), 4
#define SEG13COM0                        BANKMASK(LCDDATA1), 5
#define SEG13COM1                        BANKMASK(LCDDATA4), 5
#define SEG13COM2                        BANKMASK(LCDDATA7), 5
#define SEG13COM3                        BANKMASK(LCDDATA10), 5
#define SEG14COM0                        BANKMASK(LCDDATA1), 6
#define SEG14COM1                        BANKMASK(LCDDATA4), 6
#define SEG14COM2                        BANKMASK(LCDDATA7), 6
#define SEG14COM3                        BANKMASK(LCDDATA10), 6
#define SEG15COM0                        BANKMASK(LCDDATA1), 7
#define SEG15COM1                        BANKMASK(LCDDATA4), 7
#define SEG15COM2                        BANKMASK(LCDDATA7), 7
#define SEG15COM3                        BANKMASK(LCDDATA10), 7
#define SEG16COM0                        BANKMASK(LCDDATA2), 0
#define SEG16COM1                        BANKMASK(LCDDATA5), 0
#define SEG16COM2                        BANKMASK(LCDDATA8), 0
#define SEG16COM3                        BANKMASK(LCDDATA11), 0
#define SEG17COM0                        BANKMASK(LCDDATA2), 1
#define SEG17COM1                        BANKMASK(LCDDATA5), 1
#define SEG17COM2                        BANKMASK(LCDDATA8), 1
#define SEG17COM3                        BANKMASK(LCDDATA11), 1
#define SEG18COM0                        BANKMASK(LCDDATA2), 2
#define SEG18COM1                        BANKMASK(LCDDATA5), 2
#define SEG18COM2                        BANKMASK(LCDDATA8), 2
#define SEG18COM3                        BANKMASK(LCDDATA11), 2
#define SEG19COM0                        BANKMASK(LCDDATA2), 3
#define SEG19COM1                        BANKMASK(LCDDATA5), 3
#define SEG19COM2                        BANKMASK(LCDDATA8), 3
#define SEG19COM3                        BANKMASK(LCDDATA11), 3
#define SEG1COM0                         BANKMASK(LCDDATA0), 1
#define SEG1COM1                         BANKMASK(LCDDATA3), 1
#define SEG1COM2                         BANKMASK(LCDDATA6), 1
#define SEG1COM3                         BANKMASK(LCDDATA9), 1
#define SEG20COM0                        BANKMASK(LCDDATA2), 4
#define SEG20COM1                        BANKMASK(LCDDATA5), 4
#define SEG20COM2                        BANKMASK(LCDDATA8), 4
#define SEG20COM3                        BANKMASK(LCDDATA11), 4
#define SEG21COM0                        BANKMASK(LCDDATA2), 5
#define SEG21COM1                        BANKMASK(LCDDATA5), 5
#define SEG21COM2                        BANKMASK(LCDDATA8), 5
#define SEG21COM3                        BANKMASK(LCDDATA11), 5
#define SEG22COM0                        BANKMASK(LCDDATA2), 6
#define SEG22COM1                        BANKMASK(LCDDATA5), 6
#define SEG22COM2                        BANKMASK(LCDDATA8), 6
#define SEG22COM3                        BANKMASK(LCDDATA11), 6
#define SEG23COM0                        BANKMASK(LCDDATA2), 7
#define SEG23COM1                        BANKMASK(LCDDATA5), 7
#define SEG23COM2                        BANKMASK(LCDDATA8), 7
#define SEG23COM3                        BANKMASK(LCDDATA11), 7
#define SEG2COM0                         BANKMASK(LCDDATA0), 2
#define SEG2COM1                         BANKMASK(LCDDATA3), 2
#define SEG2COM2                         BANKMASK(LCDDATA6), 2
#define SEG2COM3                         BANKMASK(LCDDATA9), 2
#define SEG3COM0                         BANKMASK(LCDDATA0), 3
#define SEG3COM1                         BANKMASK(LCDDATA3), 3
#define SEG3COM2                         BANKMASK(LCDDATA6), 3
#define SEG3COM3                         BANKMASK(LCDDATA9), 3
#define SEG4COM0                         BANKMASK(LCDDATA0), 4
#define SEG4COM1                         BANKMASK(LCDDATA3), 4
#define SEG4COM2                         BANKMASK(LCDDATA6), 4
#define SEG4COM3                         BANKMASK(LCDDATA9), 4
#define SEG5COM0                         BANKMASK(LCDDATA0), 5
#define SEG5COM1                         BANKMASK(LCDDATA3), 5
#define SEG5COM2                         BANKMASK(LCDDATA6), 5
#define SEG5COM3                         BANKMASK(LCDDATA9), 5
#define SEG6COM0                         BANKMASK(LCDDATA0), 6
#define SEG6COM1                         BANKMASK(LCDDATA3), 6
#define SEG6COM2                         BANKMASK(LCDDATA6), 6
#define SEG6COM3                         BANKMASK(LCDDATA9), 6
#define SEG7COM0                         BANKMASK(LCDDATA0), 7
#define SEG7COM1                         BANKMASK(LCDDATA3), 7
#define SEG7COM2                         BANKMASK(LCDDATA6), 7
#define SEG7COM3                         BANKMASK(LCDDATA9), 7
#define SEG8COM0                         BANKMASK(LCDDATA1), 0
#define SEG8COM1                         BANKMASK(LCDDATA4), 0
#define SEG8COM2                         BANKMASK(LCDDATA7), 0
#define SEG8COM3                         BANKMASK(LCDDATA10), 0
#define SEG9COM0                         BANKMASK(LCDDATA1), 1
#define SEG9COM1                         BANKMASK(LCDDATA4), 1
#define SEG9COM2                         BANKMASK(LCDDATA7), 1
#define SEG9COM3                         BANKMASK(LCDDATA10), 1
#define SEN                              BANKMASK(SSPCON2), 0
#define SENDB                            BANKMASK(TXSTA), 3
#define SLPEN                            BANKMASK(LCDCON), 6
#define SMP                              BANKMASK(SSPSTAT), 7
#define SPEN                             BANKMASK(RCSTA), 7
#define SPLLEN                           BANKMASK(OSCCON), 7
#define SRCLK0                           BANKMASK(SRCON0), 4
#define SRCLK1                           BANKMASK(SRCON0), 5
#define SRCLK2                           BANKMASK(SRCON0), 6
#define SREN                             BANKMASK(RCSTA), 5
#define SRLEN                            BANKMASK(SRCON0), 7
#define SRNQEN                           BANKMASK(SRCON0), 2
#define SRNQSEL                          BANKMASK(APFCON), 3
#define SRPR                             BANKMASK(SRCON0), 0
#define SRPS                             BANKMASK(SRCON0), 1
#define SRQEN                            BANKMASK(SRCON0), 3
#define SRRC1E                           BANKMASK(SRCON1), 0
#define SRRC2E                           BANKMASK(SRCON1), 1
#define SRRCKE                           BANKMASK(SRCON1), 2
#define SRRPE                            BANKMASK(SRCON1), 3
#define SRSC1E                           BANKMASK(SRCON1), 4
#define SRSC2E                           BANKMASK(SRCON1), 5
#define SRSCKE                           BANKMASK(SRCON1), 6
#define SRSPE                            BANKMASK(SRCON1), 7
#define SSPEN                            BANKMASK(SSPCON1), 5
#define SSPIE                            BANKMASK(PIE1), 3
#define SSPIF                            BANKMASK(PIR1), 3
#define SSPM0                            BANKMASK(SSPCON1), 0
#define SSPM1                            BANKMASK(SSPCON1), 1
#define SSPM2                            BANKMASK(SSPCON1), 2
#define SSPM3                            BANKMASK(SSPCON1), 3
#define SSPOV                            BANKMASK(SSPCON1), 6
#define SSSEL                            BANKMASK(APFCON), 1
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define STR1A                            BANKMASK(PSTR1CON), 0
#define STR1B                            BANKMASK(PSTR1CON), 1
#define STR1C                            BANKMASK(PSTR1CON), 2
#define STR1D                            BANKMASK(PSTR1CON), 3
#define STR1SYNC                         BANKMASK(PSTR1CON), 4
#define STR2A                            BANKMASK(PSTR2CON), 0
#define STR2B                            BANKMASK(PSTR2CON), 1
#define STR2C                            BANKMASK(PSTR2CON), 2
#define STR2D                            BANKMASK(PSTR2CON), 3
#define STR2SYNC                         BANKMASK(PSTR2CON), 4
#define STR3A                            BANKMASK(PSTR3CON), 0
#define STR3B                            BANKMASK(PSTR3CON), 1
#define STR3C                            BANKMASK(PSTR3CON), 2
#define STR3D                            BANKMASK(PSTR3CON), 3
#define STR3SYNC                         BANKMASK(PSTR3CON), 4
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T0XCS                            BANKMASK(CPSCON0), 0
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSEL                           BANKMASK(APFCON), 5
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
#define TMR4IE                           BANKMASK(PIE3), 1
#define TMR4IF                           BANKMASK(PIR3), 1
#define TMR4ON                           BANKMASK(T4CON), 2
#define TMR6IE                           BANKMASK(PIE3), 3
#define TMR6IF                           BANKMASK(PIR3), 3
#define TMR6ON                           BANKMASK(T6CON), 2
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
#define TRISD0                           BANKMASK(TRISD), 0
#define TRISD1                           BANKMASK(TRISD), 1
#define TRISD2                           BANKMASK(TRISD), 2
#define TRISD3                           BANKMASK(TRISD), 3
#define TRISD4                           BANKMASK(TRISD), 4
#define TRISD5                           BANKMASK(TRISD), 5
#define TRISD6                           BANKMASK(TRISD), 6
#define TRISD7                           BANKMASK(TRISD), 7
#define TRISE0                           BANKMASK(TRISE), 0
#define TRISE1                           BANKMASK(TRISE), 1
#define TRISE2                           BANKMASK(TRISE), 2
#define TRISE3                           BANKMASK(TRISE), 3
#define TRMT                             BANKMASK(TXSTA), 1
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define TUN5                             BANKMASK(OSCTUNE), 5
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define UA                               BANKMASK(SSPSTAT), 1
#define VLCD1PE                          BANKMASK(LCDREF), 1
#define VLCD2PE                          BANKMASK(LCDREF), 2
#define VLCD3PE                          BANKMASK(LCDREF), 3
#define WA                               BANKMASK(LCDPS), 4
#define WCOL                             BANKMASK(SSPCON1), 7
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WDTPS4                           BANKMASK(WDTCON), 5
#define WERR                             BANKMASK(LCDCON), 5
#define WFT                              BANKMASK(LCDPS), 7
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define WPUE3                            BANKMASK(WPUE), 3
#define WR                               BANKMASK(EECON1), 1
#define WREN                             BANKMASK(EECON1), 2
#define WRERR                            BANKMASK(EECON1), 3
#define WUE                              BANKMASK(BAUDCON), 1
#define ZERO                             BANKMASK(STATUS), 2
#define Z_SHAD                           BANKMASK(STATUS_SHAD), 2
#define nBOR                             BANKMASK(PCON), 0
#define nDONE                            BANKMASK(ADCON0), 1
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRI                              BANKMASK(PCON), 2
#define nRMCLR                           BANKMASK(PCON), 3
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

#endif // _PIC16F1934_INC_
