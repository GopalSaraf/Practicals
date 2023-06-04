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

#ifndef _PIC16LF1527_INC_
#define _PIC16LF1527_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF1527
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
PORTE_RE4_POSN                           equ 0004h
PORTE_RE4_POSITION                       equ 0004h
PORTE_RE4_SIZE                           equ 0001h
PORTE_RE4_LENGTH                         equ 0001h
PORTE_RE4_MASK                           equ 0010h
PORTE_RE5_POSN                           equ 0005h
PORTE_RE5_POSITION                       equ 0005h
PORTE_RE5_SIZE                           equ 0001h
PORTE_RE5_LENGTH                         equ 0001h
PORTE_RE5_MASK                           equ 0020h
PORTE_RE6_POSN                           equ 0006h
PORTE_RE6_POSITION                       equ 0006h
PORTE_RE6_SIZE                           equ 0001h
PORTE_RE6_LENGTH                         equ 0001h
PORTE_RE6_MASK                           equ 0040h
PORTE_RE7_POSN                           equ 0007h
PORTE_RE7_POSITION                       equ 0007h
PORTE_RE7_SIZE                           equ 0001h
PORTE_RE7_LENGTH                         equ 0001h
PORTE_RE7_MASK                           equ 0080h

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
PIR1_TX1IF_POSN                          equ 0004h
PIR1_TX1IF_POSITION                      equ 0004h
PIR1_TX1IF_SIZE                          equ 0001h
PIR1_TX1IF_LENGTH                        equ 0001h
PIR1_TX1IF_MASK                          equ 0010h
PIR1_RC1IF_POSN                          equ 0005h
PIR1_RC1IF_POSITION                      equ 0005h
PIR1_RC1IF_SIZE                          equ 0001h
PIR1_RC1IF_LENGTH                        equ 0001h
PIR1_RC1IF_MASK                          equ 0020h
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

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0012h
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_TMR8IF_POSN                         equ 0001h
PIR2_TMR8IF_POSITION                     equ 0001h
PIR2_TMR8IF_SIZE                         equ 0001h
PIR2_TMR8IF_LENGTH                       equ 0001h
PIR2_TMR8IF_MASK                         equ 0002h
PIR2_TMR10IF_POSN                        equ 0002h
PIR2_TMR10IF_POSITION                    equ 0002h
PIR2_TMR10IF_SIZE                        equ 0001h
PIR2_TMR10IF_LENGTH                      equ 0001h
PIR2_TMR10IF_MASK                        equ 0004h
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h
PIR2_TMR3GIF_POSN                        equ 0005h
PIR2_TMR3GIF_POSITION                    equ 0005h
PIR2_TMR3GIF_SIZE                        equ 0001h
PIR2_TMR3GIF_LENGTH                      equ 0001h
PIR2_TMR3GIF_MASK                        equ 0020h
PIR2_TMR5GIF_POSN                        equ 0006h
PIR2_TMR5GIF_POSITION                    equ 0006h
PIR2_TMR5GIF_SIZE                        equ 0001h
PIR2_TMR5GIF_LENGTH                      equ 0001h
PIR2_TMR5GIF_MASK                        equ 0040h
PIR2_OSFIF_POSN                          equ 0007h
PIR2_OSFIF_POSITION                      equ 0007h
PIR2_OSFIF_SIZE                          equ 0001h
PIR2_OSFIF_LENGTH                        equ 0001h
PIR2_OSFIF_MASK                          equ 0080h
PIR2_BCLIF_POSN                          equ 0003h
PIR2_BCLIF_POSITION                      equ 0003h
PIR2_BCLIF_SIZE                          equ 0001h
PIR2_BCLIF_LENGTH                        equ 0001h
PIR2_BCLIF_MASK                          equ 0008h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0013h
// bitfield definitions
PIR3_TMR3IF_POSN                         equ 0000h
PIR3_TMR3IF_POSITION                     equ 0000h
PIR3_TMR3IF_SIZE                         equ 0001h
PIR3_TMR3IF_LENGTH                       equ 0001h
PIR3_TMR3IF_MASK                         equ 0001h
PIR3_TMR4IF_POSN                         equ 0001h
PIR3_TMR4IF_POSITION                     equ 0001h
PIR3_TMR4IF_SIZE                         equ 0001h
PIR3_TMR4IF_LENGTH                       equ 0001h
PIR3_TMR4IF_MASK                         equ 0002h
PIR3_TMR5IF_POSN                         equ 0002h
PIR3_TMR5IF_POSITION                     equ 0002h
PIR3_TMR5IF_SIZE                         equ 0001h
PIR3_TMR5IF_LENGTH                       equ 0001h
PIR3_TMR5IF_MASK                         equ 0004h
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
PIR3_CCP6IF_POSN                         equ 0007h
PIR3_CCP6IF_POSITION                     equ 0007h
PIR3_CCP6IF_SIZE                         equ 0001h
PIR3_CCP6IF_LENGTH                       equ 0001h
PIR3_CCP6IF_MASK                         equ 0080h

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0014h
// bitfield definitions
PIR4_SSP2IF_POSN                         equ 0000h
PIR4_SSP2IF_POSITION                     equ 0000h
PIR4_SSP2IF_SIZE                         equ 0001h
PIR4_SSP2IF_LENGTH                       equ 0001h
PIR4_SSP2IF_MASK                         equ 0001h
PIR4_BCL2IF_POSN                         equ 0001h
PIR4_BCL2IF_POSITION                     equ 0001h
PIR4_BCL2IF_SIZE                         equ 0001h
PIR4_BCL2IF_LENGTH                       equ 0001h
PIR4_BCL2IF_MASK                         equ 0002h
PIR4_CCP7IF_POSN                         equ 0002h
PIR4_CCP7IF_POSITION                     equ 0002h
PIR4_CCP7IF_SIZE                         equ 0001h
PIR4_CCP7IF_LENGTH                       equ 0001h
PIR4_CCP7IF_MASK                         equ 0004h
PIR4_CCP8IF_POSN                         equ 0003h
PIR4_CCP8IF_POSITION                     equ 0003h
PIR4_CCP8IF_SIZE                         equ 0001h
PIR4_CCP8IF_LENGTH                       equ 0001h
PIR4_CCP8IF_MASK                         equ 0008h
PIR4_TX2IF_POSN                          equ 0004h
PIR4_TX2IF_POSITION                      equ 0004h
PIR4_TX2IF_SIZE                          equ 0001h
PIR4_TX2IF_LENGTH                        equ 0001h
PIR4_TX2IF_MASK                          equ 0010h
PIR4_RC2IF_POSN                          equ 0005h
PIR4_RC2IF_POSITION                      equ 0005h
PIR4_RC2IF_SIZE                          equ 0001h
PIR4_RC2IF_LENGTH                        equ 0001h
PIR4_RC2IF_MASK                          equ 0020h
PIR4_CCP9IF_POSN                         equ 0006h
PIR4_CCP9IF_POSITION                     equ 0006h
PIR4_CCP9IF_SIZE                         equ 0001h
PIR4_CCP9IF_LENGTH                       equ 0001h
PIR4_CCP9IF_MASK                         equ 0040h
PIR4_CCP10IF_POSN                        equ 0007h
PIR4_CCP10IF_POSITION                    equ 0007h
PIR4_CCP10IF_SIZE                        equ 0001h
PIR4_CCP10IF_LENGTH                      equ 0001h
PIR4_CCP10IF_MASK                        equ 0080h

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
T1CON_SOSCEN_POSN                        equ 0003h
T1CON_SOSCEN_POSITION                    equ 0003h
T1CON_SOSCEN_SIZE                        equ 0001h
T1CON_SOSCEN_LENGTH                      equ 0001h
T1CON_SOSCEN_MASK                        equ 0008h
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
TRISE_TRISE4_POSN                        equ 0004h
TRISE_TRISE4_POSITION                    equ 0004h
TRISE_TRISE4_SIZE                        equ 0001h
TRISE_TRISE4_LENGTH                      equ 0001h
TRISE_TRISE4_MASK                        equ 0010h
TRISE_TRISE5_POSN                        equ 0005h
TRISE_TRISE5_POSITION                    equ 0005h
TRISE_TRISE5_SIZE                        equ 0001h
TRISE_TRISE5_LENGTH                      equ 0001h
TRISE_TRISE5_MASK                        equ 0020h
TRISE_TRISE6_POSN                        equ 0006h
TRISE_TRISE6_POSITION                    equ 0006h
TRISE_TRISE6_SIZE                        equ 0001h
TRISE_TRISE6_LENGTH                      equ 0001h
TRISE_TRISE6_MASK                        equ 0040h
TRISE_TRISE7_POSN                        equ 0007h
TRISE_TRISE7_POSITION                    equ 0007h
TRISE_TRISE7_SIZE                        equ 0001h
TRISE_TRISE7_LENGTH                      equ 0001h
TRISE_TRISE7_MASK                        equ 0080h

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
PIE1_TX1IE_POSN                          equ 0004h
PIE1_TX1IE_POSITION                      equ 0004h
PIE1_TX1IE_SIZE                          equ 0001h
PIE1_TX1IE_LENGTH                        equ 0001h
PIE1_TX1IE_MASK                          equ 0010h
PIE1_RC1IE_POSN                          equ 0005h
PIE1_RC1IE_POSITION                      equ 0005h
PIE1_RC1IE_SIZE                          equ 0001h
PIE1_RC1IE_LENGTH                        equ 0001h
PIE1_RC1IE_MASK                          equ 0020h
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

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0092h
// bitfield definitions
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h
PIE2_TMR8IE_POSN                         equ 0001h
PIE2_TMR8IE_POSITION                     equ 0001h
PIE2_TMR8IE_SIZE                         equ 0001h
PIE2_TMR8IE_LENGTH                       equ 0001h
PIE2_TMR8IE_MASK                         equ 0002h
PIE2_TMR10IE_POSN                        equ 0002h
PIE2_TMR10IE_POSITION                    equ 0002h
PIE2_TMR10IE_SIZE                        equ 0001h
PIE2_TMR10IE_LENGTH                      equ 0001h
PIE2_TMR10IE_MASK                        equ 0004h
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h
PIE2_TMR3GIE_POSN                        equ 0005h
PIE2_TMR3GIE_POSITION                    equ 0005h
PIE2_TMR3GIE_SIZE                        equ 0001h
PIE2_TMR3GIE_LENGTH                      equ 0001h
PIE2_TMR3GIE_MASK                        equ 0020h
PIE2_TMR5GIE_POSN                        equ 0006h
PIE2_TMR5GIE_POSITION                    equ 0006h
PIE2_TMR5GIE_SIZE                        equ 0001h
PIE2_TMR5GIE_LENGTH                      equ 0001h
PIE2_TMR5GIE_MASK                        equ 0040h
PIE2_OSFIE_POSN                          equ 0007h
PIE2_OSFIE_POSITION                      equ 0007h
PIE2_OSFIE_SIZE                          equ 0001h
PIE2_OSFIE_LENGTH                        equ 0001h
PIE2_OSFIE_MASK                          equ 0080h
PIE2_BCLIE_POSN                          equ 0003h
PIE2_BCLIE_POSITION                      equ 0003h
PIE2_BCLIE_SIZE                          equ 0001h
PIE2_BCLIE_LENGTH                        equ 0001h
PIE2_BCLIE_MASK                          equ 0008h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0093h
// bitfield definitions
PIE3_TMR3IE_POSN                         equ 0000h
PIE3_TMR3IE_POSITION                     equ 0000h
PIE3_TMR3IE_SIZE                         equ 0001h
PIE3_TMR3IE_LENGTH                       equ 0001h
PIE3_TMR3IE_MASK                         equ 0001h
PIE3_TMR4IE_POSN                         equ 0001h
PIE3_TMR4IE_POSITION                     equ 0001h
PIE3_TMR4IE_SIZE                         equ 0001h
PIE3_TMR4IE_LENGTH                       equ 0001h
PIE3_TMR4IE_MASK                         equ 0002h
PIE3_TMR5IE_POSN                         equ 0002h
PIE3_TMR5IE_POSITION                     equ 0002h
PIE3_TMR5IE_SIZE                         equ 0001h
PIE3_TMR5IE_LENGTH                       equ 0001h
PIE3_TMR5IE_MASK                         equ 0004h
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
PIE3_CCP6IE_POSN                         equ 0007h
PIE3_CCP6IE_POSITION                     equ 0007h
PIE3_CCP6IE_SIZE                         equ 0001h
PIE3_CCP6IE_LENGTH                       equ 0001h
PIE3_CCP6IE_MASK                         equ 0080h

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 0094h
// bitfield definitions
PIE4_SSP2IE_POSN                         equ 0000h
PIE4_SSP2IE_POSITION                     equ 0000h
PIE4_SSP2IE_SIZE                         equ 0001h
PIE4_SSP2IE_LENGTH                       equ 0001h
PIE4_SSP2IE_MASK                         equ 0001h
PIE4_BCL2IE_POSN                         equ 0001h
PIE4_BCL2IE_POSITION                     equ 0001h
PIE4_BCL2IE_SIZE                         equ 0001h
PIE4_BCL2IE_LENGTH                       equ 0001h
PIE4_BCL2IE_MASK                         equ 0002h
PIE4_CCP7IE_POSN                         equ 0002h
PIE4_CCP7IE_POSITION                     equ 0002h
PIE4_CCP7IE_SIZE                         equ 0001h
PIE4_CCP7IE_LENGTH                       equ 0001h
PIE4_CCP7IE_MASK                         equ 0004h
PIE4_CCP8IE_POSN                         equ 0003h
PIE4_CCP8IE_POSITION                     equ 0003h
PIE4_CCP8IE_SIZE                         equ 0001h
PIE4_CCP8IE_LENGTH                       equ 0001h
PIE4_CCP8IE_MASK                         equ 0008h
PIE4_TX2IE_POSN                          equ 0004h
PIE4_TX2IE_POSITION                      equ 0004h
PIE4_TX2IE_SIZE                          equ 0001h
PIE4_TX2IE_LENGTH                        equ 0001h
PIE4_TX2IE_MASK                          equ 0010h
PIE4_RC2IE_POSN                          equ 0005h
PIE4_RC2IE_POSITION                      equ 0005h
PIE4_RC2IE_SIZE                          equ 0001h
PIE4_RC2IE_LENGTH                        equ 0001h
PIE4_RC2IE_MASK                          equ 0020h
PIE4_CCP9IE_POSN                         equ 0006h
PIE4_CCP9IE_POSITION                     equ 0006h
PIE4_CCP9IE_SIZE                         equ 0001h
PIE4_CCP9IE_LENGTH                       equ 0001h
PIE4_CCP9IE_MASK                         equ 0040h
PIE4_CCP10IE_POSN                        equ 0007h
PIE4_CCP10IE_POSITION                    equ 0007h
PIE4_CCP10IE_SIZE                        equ 0001h
PIE4_CCP10IE_LENGTH                      equ 0001h
PIE4_CCP10IE_MASK                        equ 0080h

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
OSCSTAT_SOSCR_POSN                       equ 0007h
OSCSTAT_SOSCR_POSITION                   equ 0007h
OSCSTAT_SOSCR_SIZE                       equ 0001h
OSCSTAT_SOSCR_LENGTH                     equ 0001h
OSCSTAT_SOSCR_MASK                       equ 0080h
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
LATE_LATE4_POSN                          equ 0004h
LATE_LATE4_POSITION                      equ 0004h
LATE_LATE4_SIZE                          equ 0001h
LATE_LATE4_LENGTH                        equ 0001h
LATE_LATE4_MASK                          equ 0010h
LATE_LATE5_POSN                          equ 0005h
LATE_LATE5_POSITION                      equ 0005h
LATE_LATE5_SIZE                          equ 0001h
LATE_LATE5_LENGTH                        equ 0001h
LATE_LATE5_MASK                          equ 0020h
LATE_LATE6_POSN                          equ 0006h
LATE_LATE6_POSITION                      equ 0006h
LATE_LATE6_SIZE                          equ 0001h
LATE_LATE6_LENGTH                        equ 0001h
LATE_LATE6_MASK                          equ 0040h
LATE_LATE7_POSN                          equ 0007h
LATE_LATE7_POSITION                      equ 0007h
LATE_LATE7_SIZE                          equ 0001h
LATE_LATE7_LENGTH                        equ 0001h
LATE_LATE7_MASK                          equ 0080h

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
APFCON_CCP2SEL_POSN                      equ 0000h
APFCON_CCP2SEL_POSITION                  equ 0000h
APFCON_CCP2SEL_SIZE                      equ 0001h
APFCON_CCP2SEL_LENGTH                    equ 0001h
APFCON_CCP2SEL_MASK                      equ 0001h
APFCON_T3CKISEL_POSN                     equ 0001h
APFCON_T3CKISEL_POSITION                 equ 0001h
APFCON_T3CKISEL_SIZE                     equ 0001h
APFCON_T3CKISEL_LENGTH                   equ 0001h
APFCON_T3CKISEL_MASK                     equ 0002h

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

// Register: WPUD
#define WPUD WPUD
WPUD                                     equ 020Fh
// bitfield definitions
WPUD_WPUD0_POSN                          equ 0000h
WPUD_WPUD0_POSITION                      equ 0000h
WPUD_WPUD0_SIZE                          equ 0001h
WPUD_WPUD0_LENGTH                        equ 0001h
WPUD_WPUD0_MASK                          equ 0001h
WPUD_WPUD1_POSN                          equ 0001h
WPUD_WPUD1_POSITION                      equ 0001h
WPUD_WPUD1_SIZE                          equ 0001h
WPUD_WPUD1_LENGTH                        equ 0001h
WPUD_WPUD1_MASK                          equ 0002h
WPUD_WPUD2_POSN                          equ 0002h
WPUD_WPUD2_POSITION                      equ 0002h
WPUD_WPUD2_SIZE                          equ 0001h
WPUD_WPUD2_LENGTH                        equ 0001h
WPUD_WPUD2_MASK                          equ 0004h
WPUD_WPUD3_POSN                          equ 0003h
WPUD_WPUD3_POSITION                      equ 0003h
WPUD_WPUD3_SIZE                          equ 0001h
WPUD_WPUD3_LENGTH                        equ 0001h
WPUD_WPUD3_MASK                          equ 0008h
WPUD_WPUD4_POSN                          equ 0004h
WPUD_WPUD4_POSITION                      equ 0004h
WPUD_WPUD4_SIZE                          equ 0001h
WPUD_WPUD4_LENGTH                        equ 0001h
WPUD_WPUD4_MASK                          equ 0010h
WPUD_WPUD5_POSN                          equ 0005h
WPUD_WPUD5_POSITION                      equ 0005h
WPUD_WPUD5_SIZE                          equ 0001h
WPUD_WPUD5_LENGTH                        equ 0001h
WPUD_WPUD5_MASK                          equ 0020h
WPUD_WPUD6_POSN                          equ 0006h
WPUD_WPUD6_POSITION                      equ 0006h
WPUD_WPUD6_SIZE                          equ 0001h
WPUD_WPUD6_LENGTH                        equ 0001h
WPUD_WPUD6_MASK                          equ 0040h
WPUD_WPUD7_POSN                          equ 0007h
WPUD_WPUD7_POSITION                      equ 0007h
WPUD_WPUD7_SIZE                          equ 0001h
WPUD_WPUD7_LENGTH                        equ 0001h
WPUD_WPUD7_MASK                          equ 0080h

// Register: WPUE
#define WPUE WPUE
WPUE                                     equ 0210h
// bitfield definitions
WPUE_WPUE0_POSN                          equ 0000h
WPUE_WPUE0_POSITION                      equ 0000h
WPUE_WPUE0_SIZE                          equ 0001h
WPUE_WPUE0_LENGTH                        equ 0001h
WPUE_WPUE0_MASK                          equ 0001h
WPUE_WPUE1_POSN                          equ 0001h
WPUE_WPUE1_POSITION                      equ 0001h
WPUE_WPUE1_SIZE                          equ 0001h
WPUE_WPUE1_LENGTH                        equ 0001h
WPUE_WPUE1_MASK                          equ 0002h
WPUE_WPUE2_POSN                          equ 0002h
WPUE_WPUE2_POSITION                      equ 0002h
WPUE_WPUE2_SIZE                          equ 0001h
WPUE_WPUE2_LENGTH                        equ 0001h
WPUE_WPUE2_MASK                          equ 0004h
WPUE_WPUE3_POSN                          equ 0003h
WPUE_WPUE3_POSITION                      equ 0003h
WPUE_WPUE3_SIZE                          equ 0001h
WPUE_WPUE3_LENGTH                        equ 0001h
WPUE_WPUE3_MASK                          equ 0008h
WPUE_WPUE4_POSN                          equ 0004h
WPUE_WPUE4_POSITION                      equ 0004h
WPUE_WPUE4_SIZE                          equ 0001h
WPUE_WPUE4_LENGTH                        equ 0001h
WPUE_WPUE4_MASK                          equ 0010h
WPUE_WPUE5_POSN                          equ 0005h
WPUE_WPUE5_POSITION                      equ 0005h
WPUE_WPUE5_SIZE                          equ 0001h
WPUE_WPUE5_LENGTH                        equ 0001h
WPUE_WPUE5_MASK                          equ 0020h
WPUE_WPUE6_POSN                          equ 0006h
WPUE_WPUE6_POSITION                      equ 0006h
WPUE_WPUE6_SIZE                          equ 0001h
WPUE_WPUE6_LENGTH                        equ 0001h
WPUE_WPUE6_MASK                          equ 0040h
WPUE_WPUE7_POSN                          equ 0007h
WPUE_WPUE7_POSITION                      equ 0007h
WPUE_WPUE7_SIZE                          equ 0001h
WPUE_WPUE7_LENGTH                        equ 0001h
WPUE_WPUE7_MASK                          equ 0080h

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

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
SSP2BUF                                  equ 0219h
// bitfield definitions
SSP2BUF_SSPBUF_POSN                      equ 0000h
SSP2BUF_SSPBUF_POSITION                  equ 0000h
SSP2BUF_SSPBUF_SIZE                      equ 0008h
SSP2BUF_SSPBUF_LENGTH                    equ 0008h
SSP2BUF_SSPBUF_MASK                      equ 00FFh

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
SSP2ADD                                  equ 021Ah
// bitfield definitions
SSP2ADD_SSPADD_POSN                      equ 0000h
SSP2ADD_SSPADD_POSITION                  equ 0000h
SSP2ADD_SSPADD_SIZE                      equ 0008h
SSP2ADD_SSPADD_LENGTH                    equ 0008h
SSP2ADD_SSPADD_MASK                      equ 00FFh

// Register: SSP2MSK
#define SSP2MSK SSP2MSK
SSP2MSK                                  equ 021Bh
// bitfield definitions
SSP2MSK_SSPMSK_POSN                      equ 0000h
SSP2MSK_SSPMSK_POSITION                  equ 0000h
SSP2MSK_SSPMSK_SIZE                      equ 0008h
SSP2MSK_SSPMSK_LENGTH                    equ 0008h
SSP2MSK_SSPMSK_MASK                      equ 00FFh

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

// Register: PORTF
#define PORTF PORTF
PORTF                                    equ 028Ch
// bitfield definitions
PORTF_RF0_POSN                           equ 0000h
PORTF_RF0_POSITION                       equ 0000h
PORTF_RF0_SIZE                           equ 0001h
PORTF_RF0_LENGTH                         equ 0001h
PORTF_RF0_MASK                           equ 0001h
PORTF_RF1_POSN                           equ 0001h
PORTF_RF1_POSITION                       equ 0001h
PORTF_RF1_SIZE                           equ 0001h
PORTF_RF1_LENGTH                         equ 0001h
PORTF_RF1_MASK                           equ 0002h
PORTF_RF2_POSN                           equ 0002h
PORTF_RF2_POSITION                       equ 0002h
PORTF_RF2_SIZE                           equ 0001h
PORTF_RF2_LENGTH                         equ 0001h
PORTF_RF2_MASK                           equ 0004h
PORTF_RF3_POSN                           equ 0003h
PORTF_RF3_POSITION                       equ 0003h
PORTF_RF3_SIZE                           equ 0001h
PORTF_RF3_LENGTH                         equ 0001h
PORTF_RF3_MASK                           equ 0008h
PORTF_RF4_POSN                           equ 0004h
PORTF_RF4_POSITION                       equ 0004h
PORTF_RF4_SIZE                           equ 0001h
PORTF_RF4_LENGTH                         equ 0001h
PORTF_RF4_MASK                           equ 0010h
PORTF_RF5_POSN                           equ 0005h
PORTF_RF5_POSITION                       equ 0005h
PORTF_RF5_SIZE                           equ 0001h
PORTF_RF5_LENGTH                         equ 0001h
PORTF_RF5_MASK                           equ 0020h
PORTF_RF6_POSN                           equ 0006h
PORTF_RF6_POSITION                       equ 0006h
PORTF_RF6_SIZE                           equ 0001h
PORTF_RF6_LENGTH                         equ 0001h
PORTF_RF6_MASK                           equ 0040h
PORTF_RF7_POSN                           equ 0007h
PORTF_RF7_POSITION                       equ 0007h
PORTF_RF7_SIZE                           equ 0001h
PORTF_RF7_LENGTH                         equ 0001h
PORTF_RF7_MASK                           equ 0080h

// Register: PORTG
#define PORTG PORTG
PORTG                                    equ 028Dh
// bitfield definitions
PORTG_RG0_POSN                           equ 0000h
PORTG_RG0_POSITION                       equ 0000h
PORTG_RG0_SIZE                           equ 0001h
PORTG_RG0_LENGTH                         equ 0001h
PORTG_RG0_MASK                           equ 0001h
PORTG_RG1_POSN                           equ 0001h
PORTG_RG1_POSITION                       equ 0001h
PORTG_RG1_SIZE                           equ 0001h
PORTG_RG1_LENGTH                         equ 0001h
PORTG_RG1_MASK                           equ 0002h
PORTG_RG2_POSN                           equ 0002h
PORTG_RG2_POSITION                       equ 0002h
PORTG_RG2_SIZE                           equ 0001h
PORTG_RG2_LENGTH                         equ 0001h
PORTG_RG2_MASK                           equ 0004h
PORTG_RG3_POSN                           equ 0003h
PORTG_RG3_POSITION                       equ 0003h
PORTG_RG3_SIZE                           equ 0001h
PORTG_RG3_LENGTH                         equ 0001h
PORTG_RG3_MASK                           equ 0008h
PORTG_RG4_POSN                           equ 0004h
PORTG_RG4_POSITION                       equ 0004h
PORTG_RG4_SIZE                           equ 0001h
PORTG_RG4_LENGTH                         equ 0001h
PORTG_RG4_MASK                           equ 0010h
PORTG_RG5_POSN                           equ 0005h
PORTG_RG5_POSITION                       equ 0005h
PORTG_RG5_SIZE                           equ 0001h
PORTG_RG5_LENGTH                         equ 0001h
PORTG_RG5_MASK                           equ 0020h

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

// Register: CCPTMRS0
#define CCPTMRS0 CCPTMRS0
CCPTMRS0                                 equ 029Dh
// bitfield definitions
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

// Register: CCPTMRS1
#define CCPTMRS1 CCPTMRS1
CCPTMRS1                                 equ 029Eh
// bitfield definitions
CCPTMRS1_C5TSEL_POSN                     equ 0000h
CCPTMRS1_C5TSEL_POSITION                 equ 0000h
CCPTMRS1_C5TSEL_SIZE                     equ 0002h
CCPTMRS1_C5TSEL_LENGTH                   equ 0002h
CCPTMRS1_C5TSEL_MASK                     equ 0003h
CCPTMRS1_C6TSEL_POSN                     equ 0002h
CCPTMRS1_C6TSEL_POSITION                 equ 0002h
CCPTMRS1_C6TSEL_SIZE                     equ 0002h
CCPTMRS1_C6TSEL_LENGTH                   equ 0002h
CCPTMRS1_C6TSEL_MASK                     equ 000Ch
CCPTMRS1_C7TSEL_POSN                     equ 0004h
CCPTMRS1_C7TSEL_POSITION                 equ 0004h
CCPTMRS1_C7TSEL_SIZE                     equ 0002h
CCPTMRS1_C7TSEL_LENGTH                   equ 0002h
CCPTMRS1_C7TSEL_MASK                     equ 0030h
CCPTMRS1_C8TSEL_POSN                     equ 0006h
CCPTMRS1_C8TSEL_POSITION                 equ 0006h
CCPTMRS1_C8TSEL_SIZE                     equ 0002h
CCPTMRS1_C8TSEL_LENGTH                   equ 0002h
CCPTMRS1_C8TSEL_MASK                     equ 00C0h
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
CCPTMRS1_C6TSEL0_POSN                    equ 0002h
CCPTMRS1_C6TSEL0_POSITION                equ 0002h
CCPTMRS1_C6TSEL0_SIZE                    equ 0001h
CCPTMRS1_C6TSEL0_LENGTH                  equ 0001h
CCPTMRS1_C6TSEL0_MASK                    equ 0004h
CCPTMRS1_C6TSEL1_POSN                    equ 0003h
CCPTMRS1_C6TSEL1_POSITION                equ 0003h
CCPTMRS1_C6TSEL1_SIZE                    equ 0001h
CCPTMRS1_C6TSEL1_LENGTH                  equ 0001h
CCPTMRS1_C6TSEL1_MASK                    equ 0008h
CCPTMRS1_C7TSEL0_POSN                    equ 0004h
CCPTMRS1_C7TSEL0_POSITION                equ 0004h
CCPTMRS1_C7TSEL0_SIZE                    equ 0001h
CCPTMRS1_C7TSEL0_LENGTH                  equ 0001h
CCPTMRS1_C7TSEL0_MASK                    equ 0010h
CCPTMRS1_C7TSEL1_POSN                    equ 0005h
CCPTMRS1_C7TSEL1_POSITION                equ 0005h
CCPTMRS1_C7TSEL1_SIZE                    equ 0001h
CCPTMRS1_C7TSEL1_LENGTH                  equ 0001h
CCPTMRS1_C7TSEL1_MASK                    equ 0020h
CCPTMRS1_C8TSEL0_POSN                    equ 0006h
CCPTMRS1_C8TSEL0_POSITION                equ 0006h
CCPTMRS1_C8TSEL0_SIZE                    equ 0001h
CCPTMRS1_C8TSEL0_LENGTH                  equ 0001h
CCPTMRS1_C8TSEL0_MASK                    equ 0040h
CCPTMRS1_C8TSEL1_POSN                    equ 0007h
CCPTMRS1_C8TSEL1_POSITION                equ 0007h
CCPTMRS1_C8TSEL1_SIZE                    equ 0001h
CCPTMRS1_C8TSEL1_LENGTH                  equ 0001h
CCPTMRS1_C8TSEL1_MASK                    equ 0080h

// Register: CCPTMRS2
#define CCPTMRS2 CCPTMRS2
CCPTMRS2                                 equ 029Fh
// bitfield definitions
CCPTMRS2_C9TSEL_POSN                     equ 0000h
CCPTMRS2_C9TSEL_POSITION                 equ 0000h
CCPTMRS2_C9TSEL_SIZE                     equ 0002h
CCPTMRS2_C9TSEL_LENGTH                   equ 0002h
CCPTMRS2_C9TSEL_MASK                     equ 0003h
CCPTMRS2_C10TSEL_POSN                    equ 0002h
CCPTMRS2_C10TSEL_POSITION                equ 0002h
CCPTMRS2_C10TSEL_SIZE                    equ 0002h
CCPTMRS2_C10TSEL_LENGTH                  equ 0002h
CCPTMRS2_C10TSEL_MASK                    equ 000Ch
CCPTMRS2_C9TSEL0_POSN                    equ 0000h
CCPTMRS2_C9TSEL0_POSITION                equ 0000h
CCPTMRS2_C9TSEL0_SIZE                    equ 0001h
CCPTMRS2_C9TSEL0_LENGTH                  equ 0001h
CCPTMRS2_C9TSEL0_MASK                    equ 0001h
CCPTMRS2_C9TSEL1_POSN                    equ 0001h
CCPTMRS2_C9TSEL1_POSITION                equ 0001h
CCPTMRS2_C9TSEL1_SIZE                    equ 0001h
CCPTMRS2_C9TSEL1_LENGTH                  equ 0001h
CCPTMRS2_C9TSEL1_MASK                    equ 0002h
CCPTMRS2_C10TSEL0_POSN                   equ 0002h
CCPTMRS2_C10TSEL0_POSITION               equ 0002h
CCPTMRS2_C10TSEL0_SIZE                   equ 0001h
CCPTMRS2_C10TSEL0_LENGTH                 equ 0001h
CCPTMRS2_C10TSEL0_MASK                   equ 0004h
CCPTMRS2_C10TSEL1_POSN                   equ 0003h
CCPTMRS2_C10TSEL1_POSITION               equ 0003h
CCPTMRS2_C10TSEL1_SIZE                   equ 0001h
CCPTMRS2_C10TSEL1_LENGTH                 equ 0001h
CCPTMRS2_C10TSEL1_MASK                   equ 0008h

// Register: TRISF
#define TRISF TRISF
TRISF                                    equ 030Ch
// bitfield definitions
TRISF_TRISF0_POSN                        equ 0000h
TRISF_TRISF0_POSITION                    equ 0000h
TRISF_TRISF0_SIZE                        equ 0001h
TRISF_TRISF0_LENGTH                      equ 0001h
TRISF_TRISF0_MASK                        equ 0001h
TRISF_TRISF1_POSN                        equ 0001h
TRISF_TRISF1_POSITION                    equ 0001h
TRISF_TRISF1_SIZE                        equ 0001h
TRISF_TRISF1_LENGTH                      equ 0001h
TRISF_TRISF1_MASK                        equ 0002h
TRISF_TRISF2_POSN                        equ 0002h
TRISF_TRISF2_POSITION                    equ 0002h
TRISF_TRISF2_SIZE                        equ 0001h
TRISF_TRISF2_LENGTH                      equ 0001h
TRISF_TRISF2_MASK                        equ 0004h
TRISF_TRISF3_POSN                        equ 0003h
TRISF_TRISF3_POSITION                    equ 0003h
TRISF_TRISF3_SIZE                        equ 0001h
TRISF_TRISF3_LENGTH                      equ 0001h
TRISF_TRISF3_MASK                        equ 0008h
TRISF_TRISF4_POSN                        equ 0004h
TRISF_TRISF4_POSITION                    equ 0004h
TRISF_TRISF4_SIZE                        equ 0001h
TRISF_TRISF4_LENGTH                      equ 0001h
TRISF_TRISF4_MASK                        equ 0010h
TRISF_TRISF5_POSN                        equ 0005h
TRISF_TRISF5_POSITION                    equ 0005h
TRISF_TRISF5_SIZE                        equ 0001h
TRISF_TRISF5_LENGTH                      equ 0001h
TRISF_TRISF5_MASK                        equ 0020h
TRISF_TRISF6_POSN                        equ 0006h
TRISF_TRISF6_POSITION                    equ 0006h
TRISF_TRISF6_SIZE                        equ 0001h
TRISF_TRISF6_LENGTH                      equ 0001h
TRISF_TRISF6_MASK                        equ 0040h
TRISF_TRISF7_POSN                        equ 0007h
TRISF_TRISF7_POSITION                    equ 0007h
TRISF_TRISF7_SIZE                        equ 0001h
TRISF_TRISF7_LENGTH                      equ 0001h
TRISF_TRISF7_MASK                        equ 0080h

// Register: TRISG
#define TRISG TRISG
TRISG                                    equ 030Dh
// bitfield definitions
TRISG_TRISG0_POSN                        equ 0000h
TRISG_TRISG0_POSITION                    equ 0000h
TRISG_TRISG0_SIZE                        equ 0001h
TRISG_TRISG0_LENGTH                      equ 0001h
TRISG_TRISG0_MASK                        equ 0001h
TRISG_TRISG1_POSN                        equ 0001h
TRISG_TRISG1_POSITION                    equ 0001h
TRISG_TRISG1_SIZE                        equ 0001h
TRISG_TRISG1_LENGTH                      equ 0001h
TRISG_TRISG1_MASK                        equ 0002h
TRISG_TRISG2_POSN                        equ 0002h
TRISG_TRISG2_POSITION                    equ 0002h
TRISG_TRISG2_SIZE                        equ 0001h
TRISG_TRISG2_LENGTH                      equ 0001h
TRISG_TRISG2_MASK                        equ 0004h
TRISG_TRISG3_POSN                        equ 0003h
TRISG_TRISG3_POSITION                    equ 0003h
TRISG_TRISG3_SIZE                        equ 0001h
TRISG_TRISG3_LENGTH                      equ 0001h
TRISG_TRISG3_MASK                        equ 0008h
TRISG_TRISG4_POSN                        equ 0004h
TRISG_TRISG4_POSITION                    equ 0004h
TRISG_TRISG4_SIZE                        equ 0001h
TRISG_TRISG4_LENGTH                      equ 0001h
TRISG_TRISG4_MASK                        equ 0010h

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
CCP3CON_CCP3M_POSN                       equ 0000h
CCP3CON_CCP3M_POSITION                   equ 0000h
CCP3CON_CCP3M_SIZE                       equ 0004h
CCP3CON_CCP3M_LENGTH                     equ 0004h
CCP3CON_CCP3M_MASK                       equ 000Fh
CCP3CON_DC3B_POSN                        equ 0004h
CCP3CON_DC3B_POSITION                    equ 0004h
CCP3CON_DC3B_SIZE                        equ 0002h
CCP3CON_DC3B_LENGTH                      equ 0002h
CCP3CON_DC3B_MASK                        equ 0030h
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
CCP4CON_CCP4M_POSN                       equ 0000h
CCP4CON_CCP4M_POSITION                   equ 0000h
CCP4CON_CCP4M_SIZE                       equ 0004h
CCP4CON_CCP4M_LENGTH                     equ 0004h
CCP4CON_CCP4M_MASK                       equ 000Fh
CCP4CON_DC4B_POSN                        equ 0004h
CCP4CON_DC4B_POSITION                    equ 0004h
CCP4CON_DC4B_SIZE                        equ 0002h
CCP4CON_DC4B_LENGTH                      equ 0002h
CCP4CON_DC4B_MASK                        equ 0030h
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
CCP5CON_CCP5M_POSN                       equ 0000h
CCP5CON_CCP5M_POSITION                   equ 0000h
CCP5CON_CCP5M_SIZE                       equ 0004h
CCP5CON_CCP5M_LENGTH                     equ 0004h
CCP5CON_CCP5M_MASK                       equ 000Fh
CCP5CON_DC5B_POSN                        equ 0004h
CCP5CON_DC5B_POSITION                    equ 0004h
CCP5CON_DC5B_SIZE                        equ 0002h
CCP5CON_DC5B_LENGTH                      equ 0002h
CCP5CON_DC5B_MASK                        equ 0030h
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

// Register: LATF
#define LATF LATF
LATF                                     equ 038Ch
// bitfield definitions
LATF_LATF0_POSN                          equ 0000h
LATF_LATF0_POSITION                      equ 0000h
LATF_LATF0_SIZE                          equ 0001h
LATF_LATF0_LENGTH                        equ 0001h
LATF_LATF0_MASK                          equ 0001h
LATF_LATF1_POSN                          equ 0001h
LATF_LATF1_POSITION                      equ 0001h
LATF_LATF1_SIZE                          equ 0001h
LATF_LATF1_LENGTH                        equ 0001h
LATF_LATF1_MASK                          equ 0002h
LATF_LATF2_POSN                          equ 0002h
LATF_LATF2_POSITION                      equ 0002h
LATF_LATF2_SIZE                          equ 0001h
LATF_LATF2_LENGTH                        equ 0001h
LATF_LATF2_MASK                          equ 0004h
LATF_LATF3_POSN                          equ 0003h
LATF_LATF3_POSITION                      equ 0003h
LATF_LATF3_SIZE                          equ 0001h
LATF_LATF3_LENGTH                        equ 0001h
LATF_LATF3_MASK                          equ 0008h
LATF_LATF4_POSN                          equ 0004h
LATF_LATF4_POSITION                      equ 0004h
LATF_LATF4_SIZE                          equ 0001h
LATF_LATF4_LENGTH                        equ 0001h
LATF_LATF4_MASK                          equ 0010h
LATF_LATF5_POSN                          equ 0005h
LATF_LATF5_POSITION                      equ 0005h
LATF_LATF5_SIZE                          equ 0001h
LATF_LATF5_LENGTH                        equ 0001h
LATF_LATF5_MASK                          equ 0020h
LATF_LATF6_POSN                          equ 0006h
LATF_LATF6_POSITION                      equ 0006h
LATF_LATF6_SIZE                          equ 0001h
LATF_LATF6_LENGTH                        equ 0001h
LATF_LATF6_MASK                          equ 0040h
LATF_LATF7_POSN                          equ 0007h
LATF_LATF7_POSITION                      equ 0007h
LATF_LATF7_SIZE                          equ 0001h
LATF_LATF7_LENGTH                        equ 0001h
LATF_LATF7_MASK                          equ 0080h

// Register: LATG
#define LATG LATG
LATG                                     equ 038Dh
// bitfield definitions
LATG_LATG0_POSN                          equ 0000h
LATG_LATG0_POSITION                      equ 0000h
LATG_LATG0_SIZE                          equ 0001h
LATG_LATG0_LENGTH                        equ 0001h
LATG_LATG0_MASK                          equ 0001h
LATG_LATG1_POSN                          equ 0001h
LATG_LATG1_POSITION                      equ 0001h
LATG_LATG1_SIZE                          equ 0001h
LATG_LATG1_LENGTH                        equ 0001h
LATG_LATG1_MASK                          equ 0002h
LATG_LATG2_POSN                          equ 0002h
LATG_LATG2_POSITION                      equ 0002h
LATG_LATG2_SIZE                          equ 0001h
LATG_LATG2_LENGTH                        equ 0001h
LATG_LATG2_MASK                          equ 0004h
LATG_LATG3_POSN                          equ 0003h
LATG_LATG3_POSITION                      equ 0003h
LATG_LATG3_SIZE                          equ 0001h
LATG_LATG3_LENGTH                        equ 0001h
LATG_LATG3_MASK                          equ 0008h
LATG_LATG4_POSN                          equ 0004h
LATG_LATG4_POSITION                      equ 0004h
LATG_LATG4_SIZE                          equ 0001h
LATG_LATG4_LENGTH                        equ 0001h
LATG_LATG4_MASK                          equ 0010h

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

// Register: ANSELF
#define ANSELF ANSELF
ANSELF                                   equ 040Ch
// bitfield definitions
ANSELF_ANSF0_POSN                        equ 0000h
ANSELF_ANSF0_POSITION                    equ 0000h
ANSELF_ANSF0_SIZE                        equ 0001h
ANSELF_ANSF0_LENGTH                      equ 0001h
ANSELF_ANSF0_MASK                        equ 0001h
ANSELF_ANSF1_POSN                        equ 0001h
ANSELF_ANSF1_POSITION                    equ 0001h
ANSELF_ANSF1_SIZE                        equ 0001h
ANSELF_ANSF1_LENGTH                      equ 0001h
ANSELF_ANSF1_MASK                        equ 0002h
ANSELF_ANSF2_POSN                        equ 0002h
ANSELF_ANSF2_POSITION                    equ 0002h
ANSELF_ANSF2_SIZE                        equ 0001h
ANSELF_ANSF2_LENGTH                      equ 0001h
ANSELF_ANSF2_MASK                        equ 0004h
ANSELF_ANSF3_POSN                        equ 0003h
ANSELF_ANSF3_POSITION                    equ 0003h
ANSELF_ANSF3_SIZE                        equ 0001h
ANSELF_ANSF3_LENGTH                      equ 0001h
ANSELF_ANSF3_MASK                        equ 0008h
ANSELF_ANSF4_POSN                        equ 0004h
ANSELF_ANSF4_POSITION                    equ 0004h
ANSELF_ANSF4_SIZE                        equ 0001h
ANSELF_ANSF4_LENGTH                      equ 0001h
ANSELF_ANSF4_MASK                        equ 0010h
ANSELF_ANSF5_POSN                        equ 0005h
ANSELF_ANSF5_POSITION                    equ 0005h
ANSELF_ANSF5_SIZE                        equ 0001h
ANSELF_ANSF5_LENGTH                      equ 0001h
ANSELF_ANSF5_MASK                        equ 0020h
ANSELF_ANSF6_POSN                        equ 0006h
ANSELF_ANSF6_POSITION                    equ 0006h
ANSELF_ANSF6_SIZE                        equ 0001h
ANSELF_ANSF6_LENGTH                      equ 0001h
ANSELF_ANSF6_MASK                        equ 0040h
ANSELF_ANSF7_POSN                        equ 0007h
ANSELF_ANSF7_POSITION                    equ 0007h
ANSELF_ANSF7_SIZE                        equ 0001h
ANSELF_ANSF7_LENGTH                      equ 0001h
ANSELF_ANSF7_MASK                        equ 0080h

// Register: ANSELG
#define ANSELG ANSELG
ANSELG                                   equ 040Dh
// bitfield definitions
ANSELG_ANSG1_POSN                        equ 0001h
ANSELG_ANSG1_POSITION                    equ 0001h
ANSELG_ANSG1_SIZE                        equ 0001h
ANSELG_ANSG1_LENGTH                      equ 0001h
ANSELG_ANSG1_MASK                        equ 0002h
ANSELG_ANSG2_POSN                        equ 0002h
ANSELG_ANSG2_POSITION                    equ 0002h
ANSELG_ANSG2_SIZE                        equ 0001h
ANSELG_ANSG2_LENGTH                      equ 0001h
ANSELG_ANSG2_MASK                        equ 0004h
ANSELG_ANSG3_POSN                        equ 0003h
ANSELG_ANSG3_POSITION                    equ 0003h
ANSELG_ANSG3_SIZE                        equ 0001h
ANSELG_ANSG3_LENGTH                      equ 0001h
ANSELG_ANSG3_MASK                        equ 0008h
ANSELG_ANSG4_POSN                        equ 0004h
ANSELG_ANSG4_POSITION                    equ 0004h
ANSELG_ANSG4_SIZE                        equ 0001h
ANSELG_ANSG4_LENGTH                      equ 0001h
ANSELG_ANSG4_MASK                        equ 0010h

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
T3CON_nT3SYNC_POSN                       equ 0002h
T3CON_nT3SYNC_POSITION                   equ 0002h
T3CON_nT3SYNC_SIZE                       equ 0001h
T3CON_nT3SYNC_LENGTH                     equ 0001h
T3CON_nT3SYNC_MASK                       equ 0004h
T3CON_SOSCEN_POSN                        equ 0003h
T3CON_SOSCEN_POSITION                    equ 0003h
T3CON_SOSCEN_SIZE                        equ 0001h
T3CON_SOSCEN_LENGTH                      equ 0001h
T3CON_SOSCEN_MASK                        equ 0008h
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
T3CON_T3OSCEN_POSN                       equ 0003h
T3CON_T3OSCEN_POSITION                   equ 0003h
T3CON_T3OSCEN_SIZE                       equ 0001h
T3CON_T3OSCEN_LENGTH                     equ 0001h
T3CON_T3OSCEN_MASK                       equ 0008h
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
T5CON_nT5SYNC_POSN                       equ 0002h
T5CON_nT5SYNC_POSITION                   equ 0002h
T5CON_nT5SYNC_SIZE                       equ 0001h
T5CON_nT5SYNC_LENGTH                     equ 0001h
T5CON_nT5SYNC_MASK                       equ 0004h
T5CON_SOSCEN_POSN                        equ 0003h
T5CON_SOSCEN_POSITION                    equ 0003h
T5CON_SOSCEN_SIZE                        equ 0001h
T5CON_SOSCEN_LENGTH                      equ 0001h
T5CON_SOSCEN_MASK                        equ 0008h
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
T5CON_T5OSCEN_POSN                       equ 0003h
T5CON_T5OSCEN_POSITION                   equ 0003h
T5CON_T5OSCEN_SIZE                       equ 0001h
T5CON_T5OSCEN_LENGTH                     equ 0001h
T5CON_T5OSCEN_MASK                       equ 0008h
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

// Register: WPUG
#define WPUG WPUG
WPUG                                     equ 048Dh
// bitfield definitions
WPUG_WPUG5_POSN                          equ 0005h
WPUG_WPUG5_POSITION                      equ 0005h
WPUG_WPUG5_SIZE                          equ 0001h
WPUG_WPUG5_LENGTH                        equ 0001h
WPUG_WPUG5_MASK                          equ 0020h

// Register: RC2REG
#define RC2REG RC2REG
RC2REG                                   equ 0491h
// bitfield definitions
RC2REG_RC2REG_POSN                       equ 0000h
RC2REG_RC2REG_POSITION                   equ 0000h
RC2REG_RC2REG_SIZE                       equ 0008h
RC2REG_RC2REG_LENGTH                     equ 0008h
RC2REG_RC2REG_MASK                       equ 00FFh

// Register: TX2REG
#define TX2REG TX2REG
TX2REG                                   equ 0492h
// bitfield definitions
TX2REG_TX2REG_POSN                       equ 0000h
TX2REG_TX2REG_POSITION                   equ 0000h
TX2REG_TX2REG_SIZE                       equ 0008h
TX2REG_TX2REG_LENGTH                     equ 0008h
TX2REG_TX2REG_MASK                       equ 00FFh

// Register: SP2BRGL
#define SP2BRGL SP2BRGL
SP2BRGL                                  equ 0493h
// bitfield definitions
SP2BRGL_SP2BRGL_POSN                     equ 0000h
SP2BRGL_SP2BRGL_POSITION                 equ 0000h
SP2BRGL_SP2BRGL_SIZE                     equ 0008h
SP2BRGL_SP2BRGL_LENGTH                   equ 0008h
SP2BRGL_SP2BRGL_MASK                     equ 00FFh

// Register: SP2BRGH
#define SP2BRGH SP2BRGH
SP2BRGH                                  equ 0494h
// bitfield definitions
SP2BRGH_SP2BRGH_POSN                     equ 0000h
SP2BRGH_SP2BRGH_POSITION                 equ 0000h
SP2BRGH_SP2BRGH_SIZE                     equ 0008h
SP2BRGH_SP2BRGH_LENGTH                   equ 0008h
SP2BRGH_SP2BRGH_MASK                     equ 00FFh

// Register: RC2STA
#define RC2STA RC2STA
RC2STA                                   equ 0495h
// bitfield definitions
RC2STA_RX9D_POSN                         equ 0000h
RC2STA_RX9D_POSITION                     equ 0000h
RC2STA_RX9D_SIZE                         equ 0001h
RC2STA_RX9D_LENGTH                       equ 0001h
RC2STA_RX9D_MASK                         equ 0001h
RC2STA_OERR_POSN                         equ 0001h
RC2STA_OERR_POSITION                     equ 0001h
RC2STA_OERR_SIZE                         equ 0001h
RC2STA_OERR_LENGTH                       equ 0001h
RC2STA_OERR_MASK                         equ 0002h
RC2STA_FERR_POSN                         equ 0002h
RC2STA_FERR_POSITION                     equ 0002h
RC2STA_FERR_SIZE                         equ 0001h
RC2STA_FERR_LENGTH                       equ 0001h
RC2STA_FERR_MASK                         equ 0004h
RC2STA_ADDEN_POSN                        equ 0003h
RC2STA_ADDEN_POSITION                    equ 0003h
RC2STA_ADDEN_SIZE                        equ 0001h
RC2STA_ADDEN_LENGTH                      equ 0001h
RC2STA_ADDEN_MASK                        equ 0008h
RC2STA_CREN_POSN                         equ 0004h
RC2STA_CREN_POSITION                     equ 0004h
RC2STA_CREN_SIZE                         equ 0001h
RC2STA_CREN_LENGTH                       equ 0001h
RC2STA_CREN_MASK                         equ 0010h
RC2STA_SREN_POSN                         equ 0005h
RC2STA_SREN_POSITION                     equ 0005h
RC2STA_SREN_SIZE                         equ 0001h
RC2STA_SREN_LENGTH                       equ 0001h
RC2STA_SREN_MASK                         equ 0020h
RC2STA_RX9_POSN                          equ 0006h
RC2STA_RX9_POSITION                      equ 0006h
RC2STA_RX9_SIZE                          equ 0001h
RC2STA_RX9_LENGTH                        equ 0001h
RC2STA_RX9_MASK                          equ 0040h
RC2STA_SPEN_POSN                         equ 0007h
RC2STA_SPEN_POSITION                     equ 0007h
RC2STA_SPEN_SIZE                         equ 0001h
RC2STA_SPEN_LENGTH                       equ 0001h
RC2STA_SPEN_MASK                         equ 0080h

// Register: TX2STA
#define TX2STA TX2STA
TX2STA                                   equ 0496h
// bitfield definitions
TX2STA_TX9D_POSN                         equ 0000h
TX2STA_TX9D_POSITION                     equ 0000h
TX2STA_TX9D_SIZE                         equ 0001h
TX2STA_TX9D_LENGTH                       equ 0001h
TX2STA_TX9D_MASK                         equ 0001h
TX2STA_TRMT_POSN                         equ 0001h
TX2STA_TRMT_POSITION                     equ 0001h
TX2STA_TRMT_SIZE                         equ 0001h
TX2STA_TRMT_LENGTH                       equ 0001h
TX2STA_TRMT_MASK                         equ 0002h
TX2STA_BRGH_POSN                         equ 0002h
TX2STA_BRGH_POSITION                     equ 0002h
TX2STA_BRGH_SIZE                         equ 0001h
TX2STA_BRGH_LENGTH                       equ 0001h
TX2STA_BRGH_MASK                         equ 0004h
TX2STA_SENDB_POSN                        equ 0003h
TX2STA_SENDB_POSITION                    equ 0003h
TX2STA_SENDB_SIZE                        equ 0001h
TX2STA_SENDB_LENGTH                      equ 0001h
TX2STA_SENDB_MASK                        equ 0008h
TX2STA_SYNC_POSN                         equ 0004h
TX2STA_SYNC_POSITION                     equ 0004h
TX2STA_SYNC_SIZE                         equ 0001h
TX2STA_SYNC_LENGTH                       equ 0001h
TX2STA_SYNC_MASK                         equ 0010h
TX2STA_TXEN_POSN                         equ 0005h
TX2STA_TXEN_POSITION                     equ 0005h
TX2STA_TXEN_SIZE                         equ 0001h
TX2STA_TXEN_LENGTH                       equ 0001h
TX2STA_TXEN_MASK                         equ 0020h
TX2STA_TX9_POSN                          equ 0006h
TX2STA_TX9_POSITION                      equ 0006h
TX2STA_TX9_SIZE                          equ 0001h
TX2STA_TX9_LENGTH                        equ 0001h
TX2STA_TX9_MASK                          equ 0040h
TX2STA_CSRC_POSN                         equ 0007h
TX2STA_CSRC_POSITION                     equ 0007h
TX2STA_CSRC_SIZE                         equ 0001h
TX2STA_CSRC_LENGTH                       equ 0001h
TX2STA_CSRC_MASK                         equ 0080h

// Register: BAUD2CON
#define BAUD2CON BAUD2CON
BAUD2CON                                 equ 0497h
// bitfield definitions
BAUD2CON_ABDEN_POSN                      equ 0000h
BAUD2CON_ABDEN_POSITION                  equ 0000h
BAUD2CON_ABDEN_SIZE                      equ 0001h
BAUD2CON_ABDEN_LENGTH                    equ 0001h
BAUD2CON_ABDEN_MASK                      equ 0001h
BAUD2CON_WUE_POSN                        equ 0001h
BAUD2CON_WUE_POSITION                    equ 0001h
BAUD2CON_WUE_SIZE                        equ 0001h
BAUD2CON_WUE_LENGTH                      equ 0001h
BAUD2CON_WUE_MASK                        equ 0002h
BAUD2CON_BRG16_POSN                      equ 0003h
BAUD2CON_BRG16_POSITION                  equ 0003h
BAUD2CON_BRG16_SIZE                      equ 0001h
BAUD2CON_BRG16_LENGTH                    equ 0001h
BAUD2CON_BRG16_MASK                      equ 0008h
BAUD2CON_SCKP_POSN                       equ 0004h
BAUD2CON_SCKP_POSITION                   equ 0004h
BAUD2CON_SCKP_SIZE                       equ 0001h
BAUD2CON_SCKP_LENGTH                     equ 0001h
BAUD2CON_SCKP_MASK                       equ 0010h
BAUD2CON_RCIDL_POSN                      equ 0006h
BAUD2CON_RCIDL_POSITION                  equ 0006h
BAUD2CON_RCIDL_SIZE                      equ 0001h
BAUD2CON_RCIDL_LENGTH                    equ 0001h
BAUD2CON_RCIDL_MASK                      equ 0040h
BAUD2CON_ABDOVF_POSN                     equ 0007h
BAUD2CON_ABDOVF_POSITION                 equ 0007h
BAUD2CON_ABDOVF_SIZE                     equ 0001h
BAUD2CON_ABDOVF_LENGTH                   equ 0001h
BAUD2CON_ABDOVF_MASK                     equ 0080h

// Register: TMR8
#define TMR8 TMR8
TMR8                                     equ 0595h
// bitfield definitions
TMR8_TMR8_POSN                           equ 0000h
TMR8_TMR8_POSITION                       equ 0000h
TMR8_TMR8_SIZE                           equ 0008h
TMR8_TMR8_LENGTH                         equ 0008h
TMR8_TMR8_MASK                           equ 00FFh

// Register: PR8
#define PR8 PR8
PR8                                      equ 0596h
// bitfield definitions
PR8_PR8_POSN                             equ 0000h
PR8_PR8_POSITION                         equ 0000h
PR8_PR8_SIZE                             equ 0008h
PR8_PR8_LENGTH                           equ 0008h
PR8_PR8_MASK                             equ 00FFh

// Register: T8CON
#define T8CON T8CON
T8CON                                    equ 0597h
// bitfield definitions
T8CON_T8CKPS_POSN                        equ 0000h
T8CON_T8CKPS_POSITION                    equ 0000h
T8CON_T8CKPS_SIZE                        equ 0002h
T8CON_T8CKPS_LENGTH                      equ 0002h
T8CON_T8CKPS_MASK                        equ 0003h
T8CON_TMR8ON_POSN                        equ 0002h
T8CON_TMR8ON_POSITION                    equ 0002h
T8CON_TMR8ON_SIZE                        equ 0001h
T8CON_TMR8ON_LENGTH                      equ 0001h
T8CON_TMR8ON_MASK                        equ 0004h
T8CON_T8OUTPS_POSN                       equ 0003h
T8CON_T8OUTPS_POSITION                   equ 0003h
T8CON_T8OUTPS_SIZE                       equ 0004h
T8CON_T8OUTPS_LENGTH                     equ 0004h
T8CON_T8OUTPS_MASK                       equ 0078h
T8CON_T8CKPS0_POSN                       equ 0000h
T8CON_T8CKPS0_POSITION                   equ 0000h
T8CON_T8CKPS0_SIZE                       equ 0001h
T8CON_T8CKPS0_LENGTH                     equ 0001h
T8CON_T8CKPS0_MASK                       equ 0001h
T8CON_T8CKPS1_POSN                       equ 0001h
T8CON_T8CKPS1_POSITION                   equ 0001h
T8CON_T8CKPS1_SIZE                       equ 0001h
T8CON_T8CKPS1_LENGTH                     equ 0001h
T8CON_T8CKPS1_MASK                       equ 0002h
T8CON_T8OUTPS0_POSN                      equ 0003h
T8CON_T8OUTPS0_POSITION                  equ 0003h
T8CON_T8OUTPS0_SIZE                      equ 0001h
T8CON_T8OUTPS0_LENGTH                    equ 0001h
T8CON_T8OUTPS0_MASK                      equ 0008h
T8CON_T8OUTPS1_POSN                      equ 0004h
T8CON_T8OUTPS1_POSITION                  equ 0004h
T8CON_T8OUTPS1_SIZE                      equ 0001h
T8CON_T8OUTPS1_LENGTH                    equ 0001h
T8CON_T8OUTPS1_MASK                      equ 0010h
T8CON_T8OUTPS2_POSN                      equ 0005h
T8CON_T8OUTPS2_POSITION                  equ 0005h
T8CON_T8OUTPS2_SIZE                      equ 0001h
T8CON_T8OUTPS2_LENGTH                    equ 0001h
T8CON_T8OUTPS2_MASK                      equ 0020h
T8CON_T8OUTPS3_POSN                      equ 0006h
T8CON_T8OUTPS3_POSITION                  equ 0006h
T8CON_T8OUTPS3_SIZE                      equ 0001h
T8CON_T8OUTPS3_LENGTH                    equ 0001h
T8CON_T8OUTPS3_MASK                      equ 0040h

// Register: TMR10
#define TMR10 TMR10
TMR10                                    equ 059Ch
// bitfield definitions
TMR10_TMR10_POSN                         equ 0000h
TMR10_TMR10_POSITION                     equ 0000h
TMR10_TMR10_SIZE                         equ 0008h
TMR10_TMR10_LENGTH                       equ 0008h
TMR10_TMR10_MASK                         equ 00FFh

// Register: PR10
#define PR10 PR10
PR10                                     equ 059Dh
// bitfield definitions
PR10_PR10_POSN                           equ 0000h
PR10_PR10_POSITION                       equ 0000h
PR10_PR10_SIZE                           equ 0008h
PR10_PR10_LENGTH                         equ 0008h
PR10_PR10_MASK                           equ 00FFh

// Register: T10CON
#define T10CON T10CON
T10CON                                   equ 059Eh
// bitfield definitions
T10CON_T10CKPS_POSN                      equ 0000h
T10CON_T10CKPS_POSITION                  equ 0000h
T10CON_T10CKPS_SIZE                      equ 0002h
T10CON_T10CKPS_LENGTH                    equ 0002h
T10CON_T10CKPS_MASK                      equ 0003h
T10CON_TMR10ON_POSN                      equ 0002h
T10CON_TMR10ON_POSITION                  equ 0002h
T10CON_TMR10ON_SIZE                      equ 0001h
T10CON_TMR10ON_LENGTH                    equ 0001h
T10CON_TMR10ON_MASK                      equ 0004h
T10CON_T10OUTPS_POSN                     equ 0003h
T10CON_T10OUTPS_POSITION                 equ 0003h
T10CON_T10OUTPS_SIZE                     equ 0004h
T10CON_T10OUTPS_LENGTH                   equ 0004h
T10CON_T10OUTPS_MASK                     equ 0078h
T10CON_T10CKPS0_POSN                     equ 0000h
T10CON_T10CKPS0_POSITION                 equ 0000h
T10CON_T10CKPS0_SIZE                     equ 0001h
T10CON_T10CKPS0_LENGTH                   equ 0001h
T10CON_T10CKPS0_MASK                     equ 0001h
T10CON_T10CKPS1_POSN                     equ 0001h
T10CON_T10CKPS1_POSITION                 equ 0001h
T10CON_T10CKPS1_SIZE                     equ 0001h
T10CON_T10CKPS1_LENGTH                   equ 0001h
T10CON_T10CKPS1_MASK                     equ 0002h
T10CON_T10OUTPS0_POSN                    equ 0003h
T10CON_T10OUTPS0_POSITION                equ 0003h
T10CON_T10OUTPS0_SIZE                    equ 0001h
T10CON_T10OUTPS0_LENGTH                  equ 0001h
T10CON_T10OUTPS0_MASK                    equ 0008h
T10CON_T10OUTPS1_POSN                    equ 0004h
T10CON_T10OUTPS1_POSITION                equ 0004h
T10CON_T10OUTPS1_SIZE                    equ 0001h
T10CON_T10OUTPS1_LENGTH                  equ 0001h
T10CON_T10OUTPS1_MASK                    equ 0010h
T10CON_T10OUTPS2_POSN                    equ 0005h
T10CON_T10OUTPS2_POSITION                equ 0005h
T10CON_T10OUTPS2_SIZE                    equ 0001h
T10CON_T10OUTPS2_LENGTH                  equ 0001h
T10CON_T10OUTPS2_MASK                    equ 0020h
T10CON_T10OUTPS3_POSN                    equ 0006h
T10CON_T10OUTPS3_POSITION                equ 0006h
T10CON_T10OUTPS3_SIZE                    equ 0001h
T10CON_T10OUTPS3_LENGTH                  equ 0001h
T10CON_T10OUTPS3_MASK                    equ 0040h

// Register: CCPR6L
#define CCPR6L CCPR6L
CCPR6L                                   equ 0611h
// bitfield definitions
CCPR6L_CCPR6L_POSN                       equ 0000h
CCPR6L_CCPR6L_POSITION                   equ 0000h
CCPR6L_CCPR6L_SIZE                       equ 0008h
CCPR6L_CCPR6L_LENGTH                     equ 0008h
CCPR6L_CCPR6L_MASK                       equ 00FFh

// Register: CCPR6H
#define CCPR6H CCPR6H
CCPR6H                                   equ 0612h
// bitfield definitions
CCPR6H_CCPR6H_POSN                       equ 0000h
CCPR6H_CCPR6H_POSITION                   equ 0000h
CCPR6H_CCPR6H_SIZE                       equ 0008h
CCPR6H_CCPR6H_LENGTH                     equ 0008h
CCPR6H_CCPR6H_MASK                       equ 00FFh

// Register: CCP6CON
#define CCP6CON CCP6CON
CCP6CON                                  equ 0613h
// bitfield definitions
CCP6CON_CCP6M_POSN                       equ 0000h
CCP6CON_CCP6M_POSITION                   equ 0000h
CCP6CON_CCP6M_SIZE                       equ 0004h
CCP6CON_CCP6M_LENGTH                     equ 0004h
CCP6CON_CCP6M_MASK                       equ 000Fh
CCP6CON_DC6B_POSN                        equ 0004h
CCP6CON_DC6B_POSITION                    equ 0004h
CCP6CON_DC6B_SIZE                        equ 0002h
CCP6CON_DC6B_LENGTH                      equ 0002h
CCP6CON_DC6B_MASK                        equ 0030h
CCP6CON_CCP6M0_POSN                      equ 0000h
CCP6CON_CCP6M0_POSITION                  equ 0000h
CCP6CON_CCP6M0_SIZE                      equ 0001h
CCP6CON_CCP6M0_LENGTH                    equ 0001h
CCP6CON_CCP6M0_MASK                      equ 0001h
CCP6CON_CCP6M1_POSN                      equ 0001h
CCP6CON_CCP6M1_POSITION                  equ 0001h
CCP6CON_CCP6M1_SIZE                      equ 0001h
CCP6CON_CCP6M1_LENGTH                    equ 0001h
CCP6CON_CCP6M1_MASK                      equ 0002h
CCP6CON_CCP6M2_POSN                      equ 0002h
CCP6CON_CCP6M2_POSITION                  equ 0002h
CCP6CON_CCP6M2_SIZE                      equ 0001h
CCP6CON_CCP6M2_LENGTH                    equ 0001h
CCP6CON_CCP6M2_MASK                      equ 0004h
CCP6CON_CCP6M3_POSN                      equ 0003h
CCP6CON_CCP6M3_POSITION                  equ 0003h
CCP6CON_CCP6M3_SIZE                      equ 0001h
CCP6CON_CCP6M3_LENGTH                    equ 0001h
CCP6CON_CCP6M3_MASK                      equ 0008h
CCP6CON_DC6B0_POSN                       equ 0004h
CCP6CON_DC6B0_POSITION                   equ 0004h
CCP6CON_DC6B0_SIZE                       equ 0001h
CCP6CON_DC6B0_LENGTH                     equ 0001h
CCP6CON_DC6B0_MASK                       equ 0010h
CCP6CON_DC6B1_POSN                       equ 0005h
CCP6CON_DC6B1_POSITION                   equ 0005h
CCP6CON_DC6B1_SIZE                       equ 0001h
CCP6CON_DC6B1_LENGTH                     equ 0001h
CCP6CON_DC6B1_MASK                       equ 0020h

// Register: CCPR7L
#define CCPR7L CCPR7L
CCPR7L                                   equ 0614h
// bitfield definitions
CCPR7L_CCPR7L_POSN                       equ 0000h
CCPR7L_CCPR7L_POSITION                   equ 0000h
CCPR7L_CCPR7L_SIZE                       equ 0008h
CCPR7L_CCPR7L_LENGTH                     equ 0008h
CCPR7L_CCPR7L_MASK                       equ 00FFh

// Register: CCPR7H
#define CCPR7H CCPR7H
CCPR7H                                   equ 0615h
// bitfield definitions
CCPR7H_CCPR7H_POSN                       equ 0000h
CCPR7H_CCPR7H_POSITION                   equ 0000h
CCPR7H_CCPR7H_SIZE                       equ 0008h
CCPR7H_CCPR7H_LENGTH                     equ 0008h
CCPR7H_CCPR7H_MASK                       equ 00FFh

// Register: CCP7CON
#define CCP7CON CCP7CON
CCP7CON                                  equ 0616h
// bitfield definitions
CCP7CON_CCP7M_POSN                       equ 0000h
CCP7CON_CCP7M_POSITION                   equ 0000h
CCP7CON_CCP7M_SIZE                       equ 0004h
CCP7CON_CCP7M_LENGTH                     equ 0004h
CCP7CON_CCP7M_MASK                       equ 000Fh
CCP7CON_DC7B_POSN                        equ 0004h
CCP7CON_DC7B_POSITION                    equ 0004h
CCP7CON_DC7B_SIZE                        equ 0002h
CCP7CON_DC7B_LENGTH                      equ 0002h
CCP7CON_DC7B_MASK                        equ 0030h
CCP7CON_CCP7M0_POSN                      equ 0000h
CCP7CON_CCP7M0_POSITION                  equ 0000h
CCP7CON_CCP7M0_SIZE                      equ 0001h
CCP7CON_CCP7M0_LENGTH                    equ 0001h
CCP7CON_CCP7M0_MASK                      equ 0001h
CCP7CON_CCP7M1_POSN                      equ 0001h
CCP7CON_CCP7M1_POSITION                  equ 0001h
CCP7CON_CCP7M1_SIZE                      equ 0001h
CCP7CON_CCP7M1_LENGTH                    equ 0001h
CCP7CON_CCP7M1_MASK                      equ 0002h
CCP7CON_CCP7M2_POSN                      equ 0002h
CCP7CON_CCP7M2_POSITION                  equ 0002h
CCP7CON_CCP7M2_SIZE                      equ 0001h
CCP7CON_CCP7M2_LENGTH                    equ 0001h
CCP7CON_CCP7M2_MASK                      equ 0004h
CCP7CON_CCP7M3_POSN                      equ 0003h
CCP7CON_CCP7M3_POSITION                  equ 0003h
CCP7CON_CCP7M3_SIZE                      equ 0001h
CCP7CON_CCP7M3_LENGTH                    equ 0001h
CCP7CON_CCP7M3_MASK                      equ 0008h
CCP7CON_DC7B0_POSN                       equ 0004h
CCP7CON_DC7B0_POSITION                   equ 0004h
CCP7CON_DC7B0_SIZE                       equ 0001h
CCP7CON_DC7B0_LENGTH                     equ 0001h
CCP7CON_DC7B0_MASK                       equ 0010h
CCP7CON_DC7B1_POSN                       equ 0005h
CCP7CON_DC7B1_POSITION                   equ 0005h
CCP7CON_DC7B1_SIZE                       equ 0001h
CCP7CON_DC7B1_LENGTH                     equ 0001h
CCP7CON_DC7B1_MASK                       equ 0020h

// Register: CCPR8L
#define CCPR8L CCPR8L
CCPR8L                                   equ 0617h
// bitfield definitions
CCPR8L_CCPR8L_POSN                       equ 0000h
CCPR8L_CCPR8L_POSITION                   equ 0000h
CCPR8L_CCPR8L_SIZE                       equ 0008h
CCPR8L_CCPR8L_LENGTH                     equ 0008h
CCPR8L_CCPR8L_MASK                       equ 00FFh

// Register: CCPR8H
#define CCPR8H CCPR8H
CCPR8H                                   equ 0618h
// bitfield definitions
CCPR8H_CCPR8H_POSN                       equ 0000h
CCPR8H_CCPR8H_POSITION                   equ 0000h
CCPR8H_CCPR8H_SIZE                       equ 0008h
CCPR8H_CCPR8H_LENGTH                     equ 0008h
CCPR8H_CCPR8H_MASK                       equ 00FFh

// Register: CCP8CON
#define CCP8CON CCP8CON
CCP8CON                                  equ 0619h
// bitfield definitions
CCP8CON_CCP8M_POSN                       equ 0000h
CCP8CON_CCP8M_POSITION                   equ 0000h
CCP8CON_CCP8M_SIZE                       equ 0004h
CCP8CON_CCP8M_LENGTH                     equ 0004h
CCP8CON_CCP8M_MASK                       equ 000Fh
CCP8CON_DC8B_POSN                        equ 0004h
CCP8CON_DC8B_POSITION                    equ 0004h
CCP8CON_DC8B_SIZE                        equ 0002h
CCP8CON_DC8B_LENGTH                      equ 0002h
CCP8CON_DC8B_MASK                        equ 0030h
CCP8CON_CCP8M0_POSN                      equ 0000h
CCP8CON_CCP8M0_POSITION                  equ 0000h
CCP8CON_CCP8M0_SIZE                      equ 0001h
CCP8CON_CCP8M0_LENGTH                    equ 0001h
CCP8CON_CCP8M0_MASK                      equ 0001h
CCP8CON_CCP8M1_POSN                      equ 0001h
CCP8CON_CCP8M1_POSITION                  equ 0001h
CCP8CON_CCP8M1_SIZE                      equ 0001h
CCP8CON_CCP8M1_LENGTH                    equ 0001h
CCP8CON_CCP8M1_MASK                      equ 0002h
CCP8CON_CCP8M2_POSN                      equ 0002h
CCP8CON_CCP8M2_POSITION                  equ 0002h
CCP8CON_CCP8M2_SIZE                      equ 0001h
CCP8CON_CCP8M2_LENGTH                    equ 0001h
CCP8CON_CCP8M2_MASK                      equ 0004h
CCP8CON_CCP8M3_POSN                      equ 0003h
CCP8CON_CCP8M3_POSITION                  equ 0003h
CCP8CON_CCP8M3_SIZE                      equ 0001h
CCP8CON_CCP8M3_LENGTH                    equ 0001h
CCP8CON_CCP8M3_MASK                      equ 0008h
CCP8CON_DC8B0_POSN                       equ 0004h
CCP8CON_DC8B0_POSITION                   equ 0004h
CCP8CON_DC8B0_SIZE                       equ 0001h
CCP8CON_DC8B0_LENGTH                     equ 0001h
CCP8CON_DC8B0_MASK                       equ 0010h
CCP8CON_DC8B1_POSN                       equ 0005h
CCP8CON_DC8B1_POSITION                   equ 0005h
CCP8CON_DC8B1_SIZE                       equ 0001h
CCP8CON_DC8B1_LENGTH                     equ 0001h
CCP8CON_DC8B1_MASK                       equ 0020h

// Register: CCPR9L
#define CCPR9L CCPR9L
CCPR9L                                   equ 061Ah
// bitfield definitions
CCPR9L_CCPR9L_POSN                       equ 0000h
CCPR9L_CCPR9L_POSITION                   equ 0000h
CCPR9L_CCPR9L_SIZE                       equ 0008h
CCPR9L_CCPR9L_LENGTH                     equ 0008h
CCPR9L_CCPR9L_MASK                       equ 00FFh

// Register: CCPR9H
#define CCPR9H CCPR9H
CCPR9H                                   equ 061Bh
// bitfield definitions
CCPR9H_CCPR9H_POSN                       equ 0000h
CCPR9H_CCPR9H_POSITION                   equ 0000h
CCPR9H_CCPR9H_SIZE                       equ 0008h
CCPR9H_CCPR9H_LENGTH                     equ 0008h
CCPR9H_CCPR9H_MASK                       equ 00FFh

// Register: CCP9CON
#define CCP9CON CCP9CON
CCP9CON                                  equ 061Ch
// bitfield definitions
CCP9CON_CCP9M_POSN                       equ 0000h
CCP9CON_CCP9M_POSITION                   equ 0000h
CCP9CON_CCP9M_SIZE                       equ 0004h
CCP9CON_CCP9M_LENGTH                     equ 0004h
CCP9CON_CCP9M_MASK                       equ 000Fh
CCP9CON_DC9B_POSN                        equ 0004h
CCP9CON_DC9B_POSITION                    equ 0004h
CCP9CON_DC9B_SIZE                        equ 0002h
CCP9CON_DC9B_LENGTH                      equ 0002h
CCP9CON_DC9B_MASK                        equ 0030h
CCP9CON_CCP9M0_POSN                      equ 0000h
CCP9CON_CCP9M0_POSITION                  equ 0000h
CCP9CON_CCP9M0_SIZE                      equ 0001h
CCP9CON_CCP9M0_LENGTH                    equ 0001h
CCP9CON_CCP9M0_MASK                      equ 0001h
CCP9CON_CCP9M1_POSN                      equ 0001h
CCP9CON_CCP9M1_POSITION                  equ 0001h
CCP9CON_CCP9M1_SIZE                      equ 0001h
CCP9CON_CCP9M1_LENGTH                    equ 0001h
CCP9CON_CCP9M1_MASK                      equ 0002h
CCP9CON_CCP9M2_POSN                      equ 0002h
CCP9CON_CCP9M2_POSITION                  equ 0002h
CCP9CON_CCP9M2_SIZE                      equ 0001h
CCP9CON_CCP9M2_LENGTH                    equ 0001h
CCP9CON_CCP9M2_MASK                      equ 0004h
CCP9CON_CCP9M3_POSN                      equ 0003h
CCP9CON_CCP9M3_POSITION                  equ 0003h
CCP9CON_CCP9M3_SIZE                      equ 0001h
CCP9CON_CCP9M3_LENGTH                    equ 0001h
CCP9CON_CCP9M3_MASK                      equ 0008h
CCP9CON_DC9B0_POSN                       equ 0004h
CCP9CON_DC9B0_POSITION                   equ 0004h
CCP9CON_DC9B0_SIZE                       equ 0001h
CCP9CON_DC9B0_LENGTH                     equ 0001h
CCP9CON_DC9B0_MASK                       equ 0010h
CCP9CON_DC9B1_POSN                       equ 0005h
CCP9CON_DC9B1_POSITION                   equ 0005h
CCP9CON_DC9B1_SIZE                       equ 0001h
CCP9CON_DC9B1_LENGTH                     equ 0001h
CCP9CON_DC9B1_MASK                       equ 0020h

// Register: CCPR10L
#define CCPR10L CCPR10L
CCPR10L                                  equ 061Dh
// bitfield definitions
CCPR10L_CCPR10L_POSN                     equ 0000h
CCPR10L_CCPR10L_POSITION                 equ 0000h
CCPR10L_CCPR10L_SIZE                     equ 0008h
CCPR10L_CCPR10L_LENGTH                   equ 0008h
CCPR10L_CCPR10L_MASK                     equ 00FFh

// Register: CCPR10H
#define CCPR10H CCPR10H
CCPR10H                                  equ 061Eh
// bitfield definitions
CCPR10H_CCPR10H_POSN                     equ 0000h
CCPR10H_CCPR10H_POSITION                 equ 0000h
CCPR10H_CCPR10H_SIZE                     equ 0008h
CCPR10H_CCPR10H_LENGTH                   equ 0008h
CCPR10H_CCPR10H_MASK                     equ 00FFh

// Register: CCP10CON
#define CCP10CON CCP10CON
CCP10CON                                 equ 061Fh
// bitfield definitions
CCP10CON_CCP10M_POSN                     equ 0000h
CCP10CON_CCP10M_POSITION                 equ 0000h
CCP10CON_CCP10M_SIZE                     equ 0004h
CCP10CON_CCP10M_LENGTH                   equ 0004h
CCP10CON_CCP10M_MASK                     equ 000Fh
CCP10CON_DC10B_POSN                      equ 0004h
CCP10CON_DC10B_POSITION                  equ 0004h
CCP10CON_DC10B_SIZE                      equ 0002h
CCP10CON_DC10B_LENGTH                    equ 0002h
CCP10CON_DC10B_MASK                      equ 0030h
CCP10CON_CCP10M0_POSN                    equ 0000h
CCP10CON_CCP10M0_POSITION                equ 0000h
CCP10CON_CCP10M0_SIZE                    equ 0001h
CCP10CON_CCP10M0_LENGTH                  equ 0001h
CCP10CON_CCP10M0_MASK                    equ 0001h
CCP10CON_CCP10M1_POSN                    equ 0001h
CCP10CON_CCP10M1_POSITION                equ 0001h
CCP10CON_CCP10M1_SIZE                    equ 0001h
CCP10CON_CCP10M1_LENGTH                  equ 0001h
CCP10CON_CCP10M1_MASK                    equ 0002h
CCP10CON_CCP10M2_POSN                    equ 0002h
CCP10CON_CCP10M2_POSITION                equ 0002h
CCP10CON_CCP10M2_SIZE                    equ 0001h
CCP10CON_CCP10M2_LENGTH                  equ 0001h
CCP10CON_CCP10M2_MASK                    equ 0004h
CCP10CON_CCP10M3_POSN                    equ 0003h
CCP10CON_CCP10M3_POSITION                equ 0003h
CCP10CON_CCP10M3_SIZE                    equ 0001h
CCP10CON_CCP10M3_LENGTH                  equ 0001h
CCP10CON_CCP10M3_MASK                    equ 0008h
CCP10CON_DC10B0_POSN                     equ 0004h
CCP10CON_DC10B0_POSITION                 equ 0004h
CCP10CON_DC10B0_SIZE                     equ 0001h
CCP10CON_DC10B0_LENGTH                   equ 0001h
CCP10CON_DC10B0_MASK                     equ 0010h
CCP10CON_DC10B1_POSN                     equ 0005h
CCP10CON_DC10B1_POSITION                 equ 0005h
CCP10CON_DC10B1_SIZE                     equ 0001h
CCP10CON_DC10B1_LENGTH                   equ 0001h
CCP10CON_DC10B1_MASK                     equ 0020h

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
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADFM                             BANKMASK(ADCON1), 7
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADGO                             BANKMASK(ADCON0), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ADPREF0                          BANKMASK(ADCON1), 0
#define ADPREF1                          BANKMASK(ADCON1), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
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
#define ANSE0                            BANKMASK(ANSELE), 0
#define ANSE1                            BANKMASK(ANSELE), 1
#define ANSE2                            BANKMASK(ANSELE), 2
#define ANSF0                            BANKMASK(ANSELF), 0
#define ANSF1                            BANKMASK(ANSELF), 1
#define ANSF2                            BANKMASK(ANSELF), 2
#define ANSF3                            BANKMASK(ANSELF), 3
#define ANSF4                            BANKMASK(ANSELF), 4
#define ANSF5                            BANKMASK(ANSELF), 5
#define ANSF6                            BANKMASK(ANSELF), 6
#define ANSF7                            BANKMASK(ANSELF), 7
#define ANSG1                            BANKMASK(ANSELG), 1
#define ANSG2                            BANKMASK(ANSELG), 2
#define ANSG3                            BANKMASK(ANSELG), 3
#define ANSG4                            BANKMASK(ANSELG), 4
#define BCL1IE                           BANKMASK(PIE2), 3
#define BCL1IF                           BANKMASK(PIR2), 3
#define BCL2IE                           BANKMASK(PIE4), 1
#define BCL2IF                           BANKMASK(PIR4), 1
#define BCLIE                            BANKMASK(PIE2), 3
#define BCLIF                            BANKMASK(PIR2), 3
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define C10TSEL0                         BANKMASK(CCPTMRS2), 2
#define C10TSEL1                         BANKMASK(CCPTMRS2), 3
#define C1TSEL0                          BANKMASK(CCPTMRS0), 0
#define C1TSEL1                          BANKMASK(CCPTMRS0), 1
#define C2TSEL0                          BANKMASK(CCPTMRS0), 2
#define C2TSEL1                          BANKMASK(CCPTMRS0), 3
#define C3TSEL0                          BANKMASK(CCPTMRS0), 4
#define C3TSEL1                          BANKMASK(CCPTMRS0), 5
#define C4TSEL0                          BANKMASK(CCPTMRS0), 6
#define C4TSEL1                          BANKMASK(CCPTMRS0), 7
#define C5TSEL0                          BANKMASK(CCPTMRS1), 0
#define C5TSEL1                          BANKMASK(CCPTMRS1), 1
#define C6TSEL0                          BANKMASK(CCPTMRS1), 2
#define C6TSEL1                          BANKMASK(CCPTMRS1), 3
#define C7TSEL0                          BANKMASK(CCPTMRS1), 4
#define C7TSEL1                          BANKMASK(CCPTMRS1), 5
#define C8TSEL0                          BANKMASK(CCPTMRS1), 6
#define C8TSEL1                          BANKMASK(CCPTMRS1), 7
#define C9TSEL0                          BANKMASK(CCPTMRS2), 0
#define C9TSEL1                          BANKMASK(CCPTMRS2), 1
#define CARRY                            BANKMASK(STATUS), 0
#define CCP10IE                          BANKMASK(PIE4), 7
#define CCP10IF                          BANKMASK(PIR4), 7
#define CCP10M0                          BANKMASK(CCP10CON), 0
#define CCP10M1                          BANKMASK(CCP10CON), 1
#define CCP10M2                          BANKMASK(CCP10CON), 2
#define CCP10M3                          BANKMASK(CCP10CON), 3
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CCP2IE                           BANKMASK(PIE2), 0
#define CCP2IF                           BANKMASK(PIR2), 0
#define CCP2M0                           BANKMASK(CCP2CON), 0
#define CCP2M1                           BANKMASK(CCP2CON), 1
#define CCP2M2                           BANKMASK(CCP2CON), 2
#define CCP2M3                           BANKMASK(CCP2CON), 3
#define CCP2SEL                          BANKMASK(APFCON), 0
#define CCP3IE                           BANKMASK(PIE3), 4
#define CCP3IF                           BANKMASK(PIR3), 4
#define CCP3M0                           BANKMASK(CCP3CON), 0
#define CCP3M1                           BANKMASK(CCP3CON), 1
#define CCP3M2                           BANKMASK(CCP3CON), 2
#define CCP3M3                           BANKMASK(CCP3CON), 3
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
#define CCP6IE                           BANKMASK(PIE3), 7
#define CCP6IF                           BANKMASK(PIR3), 7
#define CCP6M0                           BANKMASK(CCP6CON), 0
#define CCP6M1                           BANKMASK(CCP6CON), 1
#define CCP6M2                           BANKMASK(CCP6CON), 2
#define CCP6M3                           BANKMASK(CCP6CON), 3
#define CCP7IE                           BANKMASK(PIE4), 2
#define CCP7IF                           BANKMASK(PIR4), 2
#define CCP7M0                           BANKMASK(CCP7CON), 0
#define CCP7M1                           BANKMASK(CCP7CON), 1
#define CCP7M2                           BANKMASK(CCP7CON), 2
#define CCP7M3                           BANKMASK(CCP7CON), 3
#define CCP8IE                           BANKMASK(PIE4), 3
#define CCP8IF                           BANKMASK(PIR4), 3
#define CCP8M0                           BANKMASK(CCP8CON), 0
#define CCP8M1                           BANKMASK(CCP8CON), 1
#define CCP8M2                           BANKMASK(CCP8CON), 2
#define CCP8M3                           BANKMASK(CCP8CON), 3
#define CCP9IE                           BANKMASK(PIE4), 6
#define CCP9IF                           BANKMASK(PIR4), 6
#define CCP9M0                           BANKMASK(CCP9CON), 0
#define CCP9M1                           BANKMASK(CCP9CON), 1
#define CCP9M2                           BANKMASK(CCP9CON), 2
#define CCP9M3                           BANKMASK(CCP9CON), 3
#define CFGS                             BANKMASK(PMCON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DC                               BANKMASK(STATUS), 1
#define DC10B0                           BANKMASK(CCP10CON), 4
#define DC10B1                           BANKMASK(CCP10CON), 5
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
#define DC6B0                            BANKMASK(CCP6CON), 4
#define DC6B1                            BANKMASK(CCP6CON), 5
#define DC7B0                            BANKMASK(CCP7CON), 4
#define DC7B1                            BANKMASK(CCP7CON), 5
#define DC8B0                            BANKMASK(CCP8CON), 4
#define DC8B1                            BANKMASK(CCP8CON), 5
#define DC9B0                            BANKMASK(CCP9CON), 4
#define DC9B1                            BANKMASK(CCP9CON), 5
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define FREE                             BANKMASK(PMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
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
#define LATE4                            BANKMASK(LATE), 4
#define LATE5                            BANKMASK(LATE), 5
#define LATE6                            BANKMASK(LATE), 6
#define LATE7                            BANKMASK(LATE), 7
#define LATF0                            BANKMASK(LATF), 0
#define LATF1                            BANKMASK(LATF), 1
#define LATF2                            BANKMASK(LATF), 2
#define LATF3                            BANKMASK(LATF), 3
#define LATF4                            BANKMASK(LATF), 4
#define LATF5                            BANKMASK(LATF), 5
#define LATF6                            BANKMASK(LATF), 6
#define LATF7                            BANKMASK(LATF), 7
#define LATG0                            BANKMASK(LATG), 0
#define LATG1                            BANKMASK(LATG), 1
#define LATG2                            BANKMASK(LATG), 2
#define LATG3                            BANKMASK(LATG), 3
#define LATG4                            BANKMASK(LATG), 4
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LWLO                             BANKMASK(PMCON1), 5
#define OSFIE                            BANKMASK(PIE2), 7
#define OSFIF                            BANKMASK(PIR2), 7
#define OSTS                             BANKMASK(OSCSTAT), 5
#define PEIE                             BANKMASK(INTCON), 6
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
#define RC1IE                            BANKMASK(PIE1), 5
#define RC1IF                            BANKMASK(PIR1), 5
#define RC2                              BANKMASK(PORTC), 2
#define RC2IE                            BANKMASK(PIE4), 5
#define RC2IF                            BANKMASK(PIR4), 5
#define RC3                              BANKMASK(PORTC), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC5                              BANKMASK(PORTC), 5
#define RC6                              BANKMASK(PORTC), 6
#define RC7                              BANKMASK(PORTC), 7
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(PMCON1), 0
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
#define RE4                              BANKMASK(PORTE), 4
#define RE5                              BANKMASK(PORTE), 5
#define RE6                              BANKMASK(PORTE), 6
#define RE7                              BANKMASK(PORTE), 7
#define RF0                              BANKMASK(PORTF), 0
#define RF1                              BANKMASK(PORTF), 1
#define RF2                              BANKMASK(PORTF), 2
#define RF3                              BANKMASK(PORTF), 3
#define RF4                              BANKMASK(PORTF), 4
#define RF5                              BANKMASK(PORTF), 5
#define RF6                              BANKMASK(PORTF), 6
#define RF7                              BANKMASK(PORTF), 7
#define RG0                              BANKMASK(PORTG), 0
#define RG1                              BANKMASK(PORTG), 1
#define RG2                              BANKMASK(PORTG), 2
#define RG3                              BANKMASK(PORTG), 3
#define RG4                              BANKMASK(PORTG), 4
#define RG5                              BANKMASK(PORTG), 5
#define SBOREN                           BANKMASK(BORCON), 7
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SOSCR                            BANKMASK(OSCSTAT), 7
#define SSP1IE                           BANKMASK(PIE1), 3
#define SSP1IF                           BANKMASK(PIR1), 3
#define SSP2IE                           BANKMASK(PIE4), 0
#define SSP2IF                           BANKMASK(PIR4), 0
#define SSPIE                            BANKMASK(PIE1), 3
#define SSPIF                            BANKMASK(PIR1), 3
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define SWDTEN                           BANKMASK(WDTCON), 0
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T10CKPS0                         BANKMASK(T10CON), 0
#define T10CKPS1                         BANKMASK(T10CON), 1
#define T10OUTPS0                        BANKMASK(T10CON), 3
#define T10OUTPS1                        BANKMASK(T10CON), 4
#define T10OUTPS2                        BANKMASK(T10CON), 5
#define T10OUTPS3                        BANKMASK(T10CON), 6
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
#define T1OSCR                           BANKMASK(OSCSTAT), 7
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define T2OUTPS0                         BANKMASK(T2CON), 3
#define T2OUTPS1                         BANKMASK(T2CON), 4
#define T2OUTPS2                         BANKMASK(T2CON), 5
#define T2OUTPS3                         BANKMASK(T2CON), 6
#define T3CKISEL                         BANKMASK(APFCON), 1
#define T3CKPS0                          BANKMASK(T3CON), 4
#define T3CKPS1                          BANKMASK(T3CON), 5
#define T3GGO_nDONE                      BANKMASK(T3GCON), 3
#define T3GPOL                           BANKMASK(T3GCON), 6
#define T3GSPM                           BANKMASK(T3GCON), 4
#define T3GSS0                           BANKMASK(T3GCON), 0
#define T3GSS1                           BANKMASK(T3GCON), 1
#define T3GTM                            BANKMASK(T3GCON), 5
#define T3GVAL                           BANKMASK(T3GCON), 2
#define T3OSCEN                          BANKMASK(T3CON), 3
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
#define T5OSCEN                          BANKMASK(T5CON), 3
#define T6CKPS0                          BANKMASK(T6CON), 0
#define T6CKPS1                          BANKMASK(T6CON), 1
#define T6OUTPS0                         BANKMASK(T6CON), 3
#define T6OUTPS1                         BANKMASK(T6CON), 4
#define T6OUTPS2                         BANKMASK(T6CON), 5
#define T6OUTPS3                         BANKMASK(T6CON), 6
#define T8CKPS0                          BANKMASK(T8CON), 0
#define T8CKPS1                          BANKMASK(T8CON), 1
#define T8OUTPS0                         BANKMASK(T8CON), 3
#define T8OUTPS1                         BANKMASK(T8CON), 4
#define T8OUTPS2                         BANKMASK(T8CON), 5
#define T8OUTPS3                         BANKMASK(T8CON), 6
#define TMR0CS                           BANKMASK(OPTION_REG), 5
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR0SE                           BANKMASK(OPTION_REG), 4
#define TMR10IE                          BANKMASK(PIE2), 2
#define TMR10IF                          BANKMASK(PIR2), 2
#define TMR10ON                          BANKMASK(T10CON), 2
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
#define TMR3CS0                          BANKMASK(T3CON), 6
#define TMR3CS1                          BANKMASK(T3CON), 7
#define TMR3GE                           BANKMASK(T3GCON), 7
#define TMR3GIE                          BANKMASK(PIE2), 5
#define TMR3GIF                          BANKMASK(PIR2), 5
#define TMR3IE                           BANKMASK(PIE3), 0
#define TMR3IF                           BANKMASK(PIR3), 0
#define TMR3ON                           BANKMASK(T3CON), 0
#define TMR4IE                           BANKMASK(PIE3), 1
#define TMR4IF                           BANKMASK(PIR3), 1
#define TMR4ON                           BANKMASK(T4CON), 2
#define TMR5CS0                          BANKMASK(T5CON), 6
#define TMR5CS1                          BANKMASK(T5CON), 7
#define TMR5GE                           BANKMASK(T5GCON), 7
#define TMR5GIE                          BANKMASK(PIE2), 6
#define TMR5GIF                          BANKMASK(PIR2), 6
#define TMR5IE                           BANKMASK(PIE3), 2
#define TMR5IF                           BANKMASK(PIR3), 2
#define TMR5ON                           BANKMASK(T5CON), 0
#define TMR6IE                           BANKMASK(PIE3), 3
#define TMR6IF                           BANKMASK(PIR3), 3
#define TMR6ON                           BANKMASK(T6CON), 2
#define TMR8IE                           BANKMASK(PIE2), 1
#define TMR8IF                           BANKMASK(PIR2), 1
#define TMR8ON                           BANKMASK(T8CON), 2
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
#define TRISE4                           BANKMASK(TRISE), 4
#define TRISE5                           BANKMASK(TRISE), 5
#define TRISE6                           BANKMASK(TRISE), 6
#define TRISE7                           BANKMASK(TRISE), 7
#define TRISF0                           BANKMASK(TRISF), 0
#define TRISF1                           BANKMASK(TRISF), 1
#define TRISF2                           BANKMASK(TRISF), 2
#define TRISF3                           BANKMASK(TRISF), 3
#define TRISF4                           BANKMASK(TRISF), 4
#define TRISF5                           BANKMASK(TRISF), 5
#define TRISF6                           BANKMASK(TRISF), 6
#define TRISF7                           BANKMASK(TRISF), 7
#define TRISG0                           BANKMASK(TRISG), 0
#define TRISG1                           BANKMASK(TRISG), 1
#define TRISG2                           BANKMASK(TRISG), 2
#define TRISG3                           BANKMASK(TRISG), 3
#define TRISG4                           BANKMASK(TRISG), 4
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TX1IE                            BANKMASK(PIE1), 4
#define TX1IF                            BANKMASK(PIR1), 4
#define TX2IE                            BANKMASK(PIE4), 4
#define TX2IF                            BANKMASK(PIR4), 4
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
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
#define WPUD0                            BANKMASK(WPUD), 0
#define WPUD1                            BANKMASK(WPUD), 1
#define WPUD2                            BANKMASK(WPUD), 2
#define WPUD3                            BANKMASK(WPUD), 3
#define WPUD4                            BANKMASK(WPUD), 4
#define WPUD5                            BANKMASK(WPUD), 5
#define WPUD6                            BANKMASK(WPUD), 6
#define WPUD7                            BANKMASK(WPUD), 7
#define WPUE0                            BANKMASK(WPUE), 0
#define WPUE1                            BANKMASK(WPUE), 1
#define WPUE2                            BANKMASK(WPUE), 2
#define WPUE3                            BANKMASK(WPUE), 3
#define WPUE4                            BANKMASK(WPUE), 4
#define WPUE5                            BANKMASK(WPUE), 5
#define WPUE6                            BANKMASK(WPUE), 6
#define WPUE7                            BANKMASK(WPUE), 7
#define WPUG5                            BANKMASK(WPUG), 5
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
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nT3SYNC                          BANKMASK(T3CON), 2
#define nT5SYNC                          BANKMASK(T5CON), 2
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
psect udata_bank13,class=BANK13,space=SPACE_DATA,noexec
psect udata_bank14,class=BANK14,space=SPACE_DATA,noexec
psect udata_bank15,class=BANK15,space=SPACE_DATA,noexec
psect udata_bank16,class=BANK16,space=SPACE_DATA,noexec
psect udata_bank17,class=BANK17,space=SPACE_DATA,noexec
psect udata_bank18,class=BANK18,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16LF1527_INC_
