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

#ifndef _MCP19133_INC_
#define _MCP19133_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * MCP19133
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
PORTA_RA6_POSN                           equ 0006h
PORTA_RA6_POSITION                       equ 0006h
PORTA_RA6_SIZE                           equ 0001h
PORTA_RA6_LENGTH                         equ 0001h
PORTA_RA6_MASK                           equ 0040h

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

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0011h
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

// Register: TRISB
#define TRISB TRISB
TRISB                                    equ 0012h
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
TRISC                                    equ 0013h
// bitfield definitions
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

// Register: LATA
#define LATA LATA
LATA                                     equ 0016h
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

// Register: LATB
#define LATB LATB
LATB                                     equ 0017h
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
LATC                                     equ 0018h
// bitfield definitions
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

// Register: TMR0L
#define TMR0L TMR0L
TMR0L                                    equ 001Ch
// bitfield definitions
TMR0L_TMR0L_POSN                         equ 0000h
TMR0L_TMR0L_POSITION                     equ 0000h
TMR0L_TMR0L_SIZE                         equ 0008h
TMR0L_TMR0L_LENGTH                       equ 0008h
TMR0L_TMR0L_MASK                         equ 00FFh

// Register: TMR0H
#define TMR0H TMR0H
TMR0H                                    equ 001Dh
// bitfield definitions
TMR0H_TMR0H_POSN                         equ 0000h
TMR0H_TMR0H_POSITION                     equ 0000h
TMR0H_TMR0H_SIZE                         equ 0008h
TMR0H_TMR0H_LENGTH                       equ 0008h
TMR0H_TMR0H_MASK                         equ 00FFh

// Register: T0CON0
#define T0CON0 T0CON0
T0CON0                                   equ 001Eh
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
T0CON1                                   equ 001Fh
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

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 008Ch
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 008Dh

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 008Eh
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

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 008Fh
// bitfield definitions
ADCON1_ADPREF_POSN                       equ 0000h
ADCON1_ADPREF_POSITION                   equ 0000h
ADCON1_ADPREF_SIZE                       equ 0001h
ADCON1_ADPREF_LENGTH                     equ 0001h
ADCON1_ADPREF_MASK                       equ 0001h
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
ADACT                                    equ 0090h
// bitfield definitions
ADACT_ADACT_POSN                         equ 0000h
ADACT_ADACT_POSITION                     equ 0000h
ADACT_ADACT_SIZE                         equ 0004h
ADACT_ADACT_LENGTH                       equ 0004h
ADACT_ADACT_MASK                         equ 000Fh
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

// Register: RC1REG
#define RC1REG RC1REG
RC1REG                                   equ 0119h
// bitfield definitions
RC1REG_RC1REG_POSN                       equ 0000h
RC1REG_RC1REG_POSITION                   equ 0000h
RC1REG_RC1REG_SIZE                       equ 0008h
RC1REG_RC1REG_LENGTH                     equ 0008h
RC1REG_RC1REG_MASK                       equ 00FFh

// Register: TX1REG
#define TX1REG TX1REG
TX1REG                                   equ 011Ah
// bitfield definitions
TX1REG_TX1REG_POSN                       equ 0000h
TX1REG_TX1REG_POSITION                   equ 0000h
TX1REG_TX1REG_SIZE                       equ 0008h
TX1REG_TX1REG_LENGTH                     equ 0008h
TX1REG_TX1REG_MASK                       equ 00FFh

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
SP1BRGL                                  equ 011Bh
// bitfield definitions
SP1BRGL_SP1BRGL_POSN                     equ 0000h
SP1BRGL_SP1BRGL_POSITION                 equ 0000h
SP1BRGL_SP1BRGL_SIZE                     equ 0008h
SP1BRGL_SP1BRGL_LENGTH                   equ 0008h
SP1BRGL_SP1BRGL_MASK                     equ 00FFh

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
SP1BRGH                                  equ 011Ch
// bitfield definitions
SP1BRGH_SP1BRGH_POSN                     equ 0000h
SP1BRGH_SP1BRGH_POSITION                 equ 0000h
SP1BRGH_SP1BRGH_SIZE                     equ 0008h
SP1BRGH_SP1BRGH_LENGTH                   equ 0008h
SP1BRGH_SP1BRGH_MASK                     equ 00FFh

// Register: RC1STA
#define RC1STA RC1STA
RC1STA                                   equ 011Dh
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
TX1STA                                   equ 011Eh
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
BAUD1CON                                 equ 011Fh
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

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
SSP1BUF                                  equ 018Ch
// bitfield definitions
SSP1BUF_SSPBUF_POSN                      equ 0000h
SSP1BUF_SSPBUF_POSITION                  equ 0000h
SSP1BUF_SSPBUF_SIZE                      equ 0008h
SSP1BUF_SSPBUF_LENGTH                    equ 0008h
SSP1BUF_SSPBUF_MASK                      equ 00FFh

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
SSP1ADD                                  equ 018Dh
// bitfield definitions
SSP1ADD_SSPADD_POSN                      equ 0000h
SSP1ADD_SSPADD_POSITION                  equ 0000h
SSP1ADD_SSPADD_SIZE                      equ 0008h
SSP1ADD_SSPADD_LENGTH                    equ 0008h
SSP1ADD_SSPADD_MASK                      equ 00FFh
SSP1ADD_MSK0_POSN                        equ 0000h
SSP1ADD_MSK0_POSITION                    equ 0000h
SSP1ADD_MSK0_SIZE                        equ 0001h
SSP1ADD_MSK0_LENGTH                      equ 0001h
SSP1ADD_MSK0_MASK                        equ 0001h
SSP1ADD_MSK1_POSN                        equ 0001h
SSP1ADD_MSK1_POSITION                    equ 0001h
SSP1ADD_MSK1_SIZE                        equ 0001h
SSP1ADD_MSK1_LENGTH                      equ 0001h
SSP1ADD_MSK1_MASK                        equ 0002h
SSP1ADD_MSK2_POSN                        equ 0002h
SSP1ADD_MSK2_POSITION                    equ 0002h
SSP1ADD_MSK2_SIZE                        equ 0001h
SSP1ADD_MSK2_LENGTH                      equ 0001h
SSP1ADD_MSK2_MASK                        equ 0004h
SSP1ADD_MSK3_POSN                        equ 0003h
SSP1ADD_MSK3_POSITION                    equ 0003h
SSP1ADD_MSK3_SIZE                        equ 0001h
SSP1ADD_MSK3_LENGTH                      equ 0001h
SSP1ADD_MSK3_MASK                        equ 0008h
SSP1ADD_MSK4_POSN                        equ 0004h
SSP1ADD_MSK4_POSITION                    equ 0004h
SSP1ADD_MSK4_SIZE                        equ 0001h
SSP1ADD_MSK4_LENGTH                      equ 0001h
SSP1ADD_MSK4_MASK                        equ 0010h
SSP1ADD_MSK5_POSN                        equ 0005h
SSP1ADD_MSK5_POSITION                    equ 0005h
SSP1ADD_MSK5_SIZE                        equ 0001h
SSP1ADD_MSK5_LENGTH                      equ 0001h
SSP1ADD_MSK5_MASK                        equ 0020h
SSP1ADD_MSK6_POSN                        equ 0006h
SSP1ADD_MSK6_POSITION                    equ 0006h
SSP1ADD_MSK6_SIZE                        equ 0001h
SSP1ADD_MSK6_LENGTH                      equ 0001h
SSP1ADD_MSK6_MASK                        equ 0040h
SSP1ADD_MSK7_POSN                        equ 0007h
SSP1ADD_MSK7_POSITION                    equ 0007h
SSP1ADD_MSK7_SIZE                        equ 0001h
SSP1ADD_MSK7_LENGTH                      equ 0001h
SSP1ADD_MSK7_MASK                        equ 0080h
SSP1ADD_MSK01_POSN                       equ 0000h
SSP1ADD_MSK01_POSITION                   equ 0000h
SSP1ADD_MSK01_SIZE                       equ 0001h
SSP1ADD_MSK01_LENGTH                     equ 0001h
SSP1ADD_MSK01_MASK                       equ 0001h
SSP1ADD_MSK11_POSN                       equ 0001h
SSP1ADD_MSK11_POSITION                   equ 0001h
SSP1ADD_MSK11_SIZE                       equ 0001h
SSP1ADD_MSK11_LENGTH                     equ 0001h
SSP1ADD_MSK11_MASK                       equ 0002h
SSP1ADD_MSK21_POSN                       equ 0002h
SSP1ADD_MSK21_POSITION                   equ 0002h
SSP1ADD_MSK21_SIZE                       equ 0001h
SSP1ADD_MSK21_LENGTH                     equ 0001h
SSP1ADD_MSK21_MASK                       equ 0004h
SSP1ADD_MSK31_POSN                       equ 0003h
SSP1ADD_MSK31_POSITION                   equ 0003h
SSP1ADD_MSK31_SIZE                       equ 0001h
SSP1ADD_MSK31_LENGTH                     equ 0001h
SSP1ADD_MSK31_MASK                       equ 0008h
SSP1ADD_MSK41_POSN                       equ 0004h
SSP1ADD_MSK41_POSITION                   equ 0004h
SSP1ADD_MSK41_SIZE                       equ 0001h
SSP1ADD_MSK41_LENGTH                     equ 0001h
SSP1ADD_MSK41_MASK                       equ 0010h
SSP1ADD_MSK51_POSN                       equ 0005h
SSP1ADD_MSK51_POSITION                   equ 0005h
SSP1ADD_MSK51_SIZE                       equ 0001h
SSP1ADD_MSK51_LENGTH                     equ 0001h
SSP1ADD_MSK51_MASK                       equ 0020h
SSP1ADD_MSK61_POSN                       equ 0006h
SSP1ADD_MSK61_POSITION                   equ 0006h
SSP1ADD_MSK61_SIZE                       equ 0001h
SSP1ADD_MSK61_LENGTH                     equ 0001h
SSP1ADD_MSK61_MASK                       equ 0040h
SSP1ADD_MSK71_POSN                       equ 0007h
SSP1ADD_MSK71_POSITION                   equ 0007h
SSP1ADD_MSK71_SIZE                       equ 0001h
SSP1ADD_MSK71_LENGTH                     equ 0001h
SSP1ADD_MSK71_MASK                       equ 0080h

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
SSP1MSK                                  equ 018Eh
// bitfield definitions
SSP1MSK_SSPMSK_POSN                      equ 0000h
SSP1MSK_SSPMSK_POSITION                  equ 0000h
SSP1MSK_SSPMSK_SIZE                      equ 0008h
SSP1MSK_SSPMSK_LENGTH                    equ 0008h
SSP1MSK_SSPMSK_MASK                      equ 00FFh
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

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
SSP1STAT                                 equ 018Fh
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
SSP1STAT_R_W_POSN                        equ 0002h
SSP1STAT_R_W_POSITION                    equ 0002h
SSP1STAT_R_W_SIZE                        equ 0001h
SSP1STAT_R_W_LENGTH                      equ 0001h
SSP1STAT_R_W_MASK                        equ 0004h
SSP1STAT_D_A_POSN                        equ 0005h
SSP1STAT_D_A_POSITION                    equ 0005h
SSP1STAT_D_A_SIZE                        equ 0001h
SSP1STAT_D_A_LENGTH                      equ 0001h
SSP1STAT_D_A_MASK                        equ 0020h
SSP1STAT_nW_POSN                         equ 0002h
SSP1STAT_nW_POSITION                     equ 0002h
SSP1STAT_nW_SIZE                         equ 0001h
SSP1STAT_nW_LENGTH                       equ 0001h
SSP1STAT_nW_MASK                         equ 0004h
SSP1STAT_nA_POSN                         equ 0005h
SSP1STAT_nA_POSITION                     equ 0005h
SSP1STAT_nA_SIZE                         equ 0001h
SSP1STAT_nA_LENGTH                       equ 0001h
SSP1STAT_nA_MASK                         equ 0020h
SSP1STAT_nWRITE_POSN                     equ 0002h
SSP1STAT_nWRITE_POSITION                 equ 0002h
SSP1STAT_nWRITE_SIZE                     equ 0001h
SSP1STAT_nWRITE_LENGTH                   equ 0001h
SSP1STAT_nWRITE_MASK                     equ 0004h
SSP1STAT_nADDRESS_POSN                   equ 0005h
SSP1STAT_nADDRESS_POSITION               equ 0005h
SSP1STAT_nADDRESS_SIZE                   equ 0001h
SSP1STAT_nADDRESS_LENGTH                 equ 0001h
SSP1STAT_nADDRESS_MASK                   equ 0020h
SSP1STAT_READ_WRITE_POSN                 equ 0002h
SSP1STAT_READ_WRITE_POSITION             equ 0002h
SSP1STAT_READ_WRITE_SIZE                 equ 0001h
SSP1STAT_READ_WRITE_LENGTH               equ 0001h
SSP1STAT_READ_WRITE_MASK                 equ 0004h
SSP1STAT_DATA_ADDRESS_POSN               equ 0005h
SSP1STAT_DATA_ADDRESS_POSITION           equ 0005h
SSP1STAT_DATA_ADDRESS_SIZE               equ 0001h
SSP1STAT_DATA_ADDRESS_LENGTH             equ 0001h
SSP1STAT_DATA_ADDRESS_MASK               equ 0020h
SSP1STAT_I2C_READ_POSN                   equ 0002h
SSP1STAT_I2C_READ_POSITION               equ 0002h
SSP1STAT_I2C_READ_SIZE                   equ 0001h
SSP1STAT_I2C_READ_LENGTH                 equ 0001h
SSP1STAT_I2C_READ_MASK                   equ 0004h
SSP1STAT_I2C_START_POSN                  equ 0003h
SSP1STAT_I2C_START_POSITION              equ 0003h
SSP1STAT_I2C_START_SIZE                  equ 0001h
SSP1STAT_I2C_START_LENGTH                equ 0001h
SSP1STAT_I2C_START_MASK                  equ 0008h
SSP1STAT_I2C_STOP_POSN                   equ 0004h
SSP1STAT_I2C_STOP_POSITION               equ 0004h
SSP1STAT_I2C_STOP_SIZE                   equ 0001h
SSP1STAT_I2C_STOP_LENGTH                 equ 0001h
SSP1STAT_I2C_STOP_MASK                   equ 0010h
SSP1STAT_I2C_DAT_POSN                    equ 0005h
SSP1STAT_I2C_DAT_POSITION                equ 0005h
SSP1STAT_I2C_DAT_SIZE                    equ 0001h
SSP1STAT_I2C_DAT_LENGTH                  equ 0001h
SSP1STAT_I2C_DAT_MASK                    equ 0020h
SSP1STAT_BF1_POSN                        equ 0000h
SSP1STAT_BF1_POSITION                    equ 0000h
SSP1STAT_BF1_SIZE                        equ 0001h
SSP1STAT_BF1_LENGTH                      equ 0001h
SSP1STAT_BF1_MASK                        equ 0001h
SSP1STAT_UA1_POSN                        equ 0001h
SSP1STAT_UA1_POSITION                    equ 0001h
SSP1STAT_UA1_SIZE                        equ 0001h
SSP1STAT_UA1_LENGTH                      equ 0001h
SSP1STAT_UA1_MASK                        equ 0002h
SSP1STAT_R_POSN                          equ 0002h
SSP1STAT_R_POSITION                      equ 0002h
SSP1STAT_R_SIZE                          equ 0001h
SSP1STAT_R_LENGTH                        equ 0001h
SSP1STAT_R_MASK                          equ 0004h
SSP1STAT_START_POSN                      equ 0003h
SSP1STAT_START_POSITION                  equ 0003h
SSP1STAT_START_SIZE                      equ 0001h
SSP1STAT_START_LENGTH                    equ 0001h
SSP1STAT_START_MASK                      equ 0008h
SSP1STAT_STOP_POSN                       equ 0004h
SSP1STAT_STOP_POSITION                   equ 0004h
SSP1STAT_STOP_SIZE                       equ 0001h
SSP1STAT_STOP_LENGTH                     equ 0001h
SSP1STAT_STOP_MASK                       equ 0010h
SSP1STAT_D_POSN                          equ 0005h
SSP1STAT_D_POSITION                      equ 0005h
SSP1STAT_D_SIZE                          equ 0001h
SSP1STAT_D_LENGTH                        equ 0001h
SSP1STAT_D_MASK                          equ 0020h
SSP1STAT_CKE1_POSN                       equ 0006h
SSP1STAT_CKE1_POSITION                   equ 0006h
SSP1STAT_CKE1_SIZE                       equ 0001h
SSP1STAT_CKE1_LENGTH                     equ 0001h
SSP1STAT_CKE1_MASK                       equ 0040h
SSP1STAT_SMP1_POSN                       equ 0007h
SSP1STAT_SMP1_POSITION                   equ 0007h
SSP1STAT_SMP1_SIZE                       equ 0001h
SSP1STAT_SMP1_LENGTH                     equ 0001h
SSP1STAT_SMP1_MASK                       equ 0080h
SSP1STAT_RW_POSN                         equ 0002h
SSP1STAT_RW_POSITION                     equ 0002h
SSP1STAT_RW_SIZE                         equ 0001h
SSP1STAT_RW_LENGTH                       equ 0001h
SSP1STAT_RW_MASK                         equ 0004h
SSP1STAT_START1_POSN                     equ 0003h
SSP1STAT_START1_POSITION                 equ 0003h
SSP1STAT_START1_SIZE                     equ 0001h
SSP1STAT_START1_LENGTH                   equ 0001h
SSP1STAT_START1_MASK                     equ 0008h
SSP1STAT_STOP1_POSN                      equ 0004h
SSP1STAT_STOP1_POSITION                  equ 0004h
SSP1STAT_STOP1_SIZE                      equ 0001h
SSP1STAT_STOP1_LENGTH                    equ 0001h
SSP1STAT_STOP1_MASK                      equ 0010h
SSP1STAT_DA_POSN                         equ 0005h
SSP1STAT_DA_POSITION                     equ 0005h
SSP1STAT_DA_SIZE                         equ 0001h
SSP1STAT_DA_LENGTH                       equ 0001h
SSP1STAT_DA_MASK                         equ 0020h
SSP1STAT_RW1_POSN                        equ 0002h
SSP1STAT_RW1_POSITION                    equ 0002h
SSP1STAT_RW1_SIZE                        equ 0001h
SSP1STAT_RW1_LENGTH                      equ 0001h
SSP1STAT_RW1_MASK                        equ 0004h
SSP1STAT_I2C_START1_POSN                 equ 0003h
SSP1STAT_I2C_START1_POSITION             equ 0003h
SSP1STAT_I2C_START1_SIZE                 equ 0001h
SSP1STAT_I2C_START1_LENGTH               equ 0001h
SSP1STAT_I2C_START1_MASK                 equ 0008h
SSP1STAT_I2C_STOP2_POSN                  equ 0004h
SSP1STAT_I2C_STOP2_POSITION              equ 0004h
SSP1STAT_I2C_STOP2_SIZE                  equ 0001h
SSP1STAT_I2C_STOP2_LENGTH                equ 0001h
SSP1STAT_I2C_STOP2_MASK                  equ 0010h
SSP1STAT_DA1_POSN                        equ 0005h
SSP1STAT_DA1_POSITION                    equ 0005h
SSP1STAT_DA1_SIZE                        equ 0001h
SSP1STAT_DA1_LENGTH                      equ 0001h
SSP1STAT_DA1_MASK                        equ 0020h
SSP1STAT_I2C_READ1_POSN                  equ 0002h
SSP1STAT_I2C_READ1_POSITION              equ 0002h
SSP1STAT_I2C_READ1_SIZE                  equ 0001h
SSP1STAT_I2C_READ1_LENGTH                equ 0001h
SSP1STAT_I2C_READ1_MASK                  equ 0004h
SSP1STAT_S2_POSN                         equ 0003h
SSP1STAT_S2_POSITION                     equ 0003h
SSP1STAT_S2_SIZE                         equ 0001h
SSP1STAT_S2_LENGTH                       equ 0001h
SSP1STAT_S2_MASK                         equ 0008h
SSP1STAT_P2_POSN                         equ 0004h
SSP1STAT_P2_POSITION                     equ 0004h
SSP1STAT_P2_SIZE                         equ 0001h
SSP1STAT_P2_LENGTH                       equ 0001h
SSP1STAT_P2_MASK                         equ 0010h
SSP1STAT_DATA_ADDRESS1_POSN              equ 0005h
SSP1STAT_DATA_ADDRESS1_POSITION          equ 0005h
SSP1STAT_DATA_ADDRESS1_SIZE              equ 0001h
SSP1STAT_DATA_ADDRESS1_LENGTH            equ 0001h
SSP1STAT_DATA_ADDRESS1_MASK              equ 0020h
SSP1STAT_READ_WRITE1_POSN                equ 0002h
SSP1STAT_READ_WRITE1_POSITION            equ 0002h
SSP1STAT_READ_WRITE1_SIZE                equ 0001h
SSP1STAT_READ_WRITE1_LENGTH              equ 0001h
SSP1STAT_READ_WRITE1_MASK                equ 0004h
SSP1STAT_D_A1_POSN                       equ 0005h
SSP1STAT_D_A1_POSITION                   equ 0005h
SSP1STAT_D_A1_SIZE                       equ 0001h
SSP1STAT_D_A1_LENGTH                     equ 0001h
SSP1STAT_D_A1_MASK                       equ 0020h
SSP1STAT_R_W1_POSN                       equ 0002h
SSP1STAT_R_W1_POSITION                   equ 0002h
SSP1STAT_R_W1_SIZE                       equ 0001h
SSP1STAT_R_W1_LENGTH                     equ 0001h
SSP1STAT_R_W1_MASK                       equ 0004h
SSP1STAT_D_nA1_POSN                      equ 0005h
SSP1STAT_D_nA1_POSITION                  equ 0005h
SSP1STAT_D_nA1_SIZE                      equ 0001h
SSP1STAT_D_nA1_LENGTH                    equ 0001h
SSP1STAT_D_nA1_MASK                      equ 0020h
SSP1STAT_R_nW1_POSN                      equ 0002h
SSP1STAT_R_nW1_POSITION                  equ 0002h
SSP1STAT_R_nW1_SIZE                      equ 0001h
SSP1STAT_R_nW1_LENGTH                    equ 0001h
SSP1STAT_R_nW1_MASK                      equ 0004h
SSP1STAT_I2C_DAT1_POSN                   equ 0005h
SSP1STAT_I2C_DAT1_POSITION               equ 0005h
SSP1STAT_I2C_DAT1_SIZE                   equ 0001h
SSP1STAT_I2C_DAT1_LENGTH                 equ 0001h
SSP1STAT_I2C_DAT1_MASK                   equ 0020h
SSP1STAT_nW2_POSN                        equ 0002h
SSP1STAT_nW2_POSITION                    equ 0002h
SSP1STAT_nW2_SIZE                        equ 0001h
SSP1STAT_nW2_LENGTH                      equ 0001h
SSP1STAT_nW2_MASK                        equ 0004h
SSP1STAT_nA2_POSN                        equ 0005h
SSP1STAT_nA2_POSITION                    equ 0005h
SSP1STAT_nA2_SIZE                        equ 0001h
SSP1STAT_nA2_LENGTH                      equ 0001h
SSP1STAT_nA2_MASK                        equ 0020h
SSP1STAT_nWRITE1_POSN                    equ 0002h
SSP1STAT_nWRITE1_POSITION                equ 0002h
SSP1STAT_nWRITE1_SIZE                    equ 0001h
SSP1STAT_nWRITE1_LENGTH                  equ 0001h
SSP1STAT_nWRITE1_MASK                    equ 0004h
SSP1STAT_nADDRESS1_POSN                  equ 0005h
SSP1STAT_nADDRESS1_POSITION              equ 0005h
SSP1STAT_nADDRESS1_SIZE                  equ 0001h
SSP1STAT_nADDRESS1_LENGTH                equ 0001h
SSP1STAT_nADDRESS1_MASK                  equ 0020h

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
SSP1CON1                                 equ 0190h
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
SSP1CON1_SSPM01_POSN                     equ 0000h
SSP1CON1_SSPM01_POSITION                 equ 0000h
SSP1CON1_SSPM01_SIZE                     equ 0001h
SSP1CON1_SSPM01_LENGTH                   equ 0001h
SSP1CON1_SSPM01_MASK                     equ 0001h
SSP1CON1_SSPM11_POSN                     equ 0001h
SSP1CON1_SSPM11_POSITION                 equ 0001h
SSP1CON1_SSPM11_SIZE                     equ 0001h
SSP1CON1_SSPM11_LENGTH                   equ 0001h
SSP1CON1_SSPM11_MASK                     equ 0002h
SSP1CON1_SSPM21_POSN                     equ 0002h
SSP1CON1_SSPM21_POSITION                 equ 0002h
SSP1CON1_SSPM21_SIZE                     equ 0001h
SSP1CON1_SSPM21_LENGTH                   equ 0001h
SSP1CON1_SSPM21_MASK                     equ 0004h
SSP1CON1_SSPM31_POSN                     equ 0003h
SSP1CON1_SSPM31_POSITION                 equ 0003h
SSP1CON1_SSPM31_SIZE                     equ 0001h
SSP1CON1_SSPM31_LENGTH                   equ 0001h
SSP1CON1_SSPM31_MASK                     equ 0008h
SSP1CON1_CKP1_POSN                       equ 0004h
SSP1CON1_CKP1_POSITION                   equ 0004h
SSP1CON1_CKP1_SIZE                       equ 0001h
SSP1CON1_CKP1_LENGTH                     equ 0001h
SSP1CON1_CKP1_MASK                       equ 0010h
SSP1CON1_SSPEN1_POSN                     equ 0005h
SSP1CON1_SSPEN1_POSITION                 equ 0005h
SSP1CON1_SSPEN1_SIZE                     equ 0001h
SSP1CON1_SSPEN1_LENGTH                   equ 0001h
SSP1CON1_SSPEN1_MASK                     equ 0020h
SSP1CON1_SSPOV1_POSN                     equ 0006h
SSP1CON1_SSPOV1_POSITION                 equ 0006h
SSP1CON1_SSPOV1_SIZE                     equ 0001h
SSP1CON1_SSPOV1_LENGTH                   equ 0001h
SSP1CON1_SSPOV1_MASK                     equ 0040h
SSP1CON1_WCOL1_POSN                      equ 0007h
SSP1CON1_WCOL1_POSITION                  equ 0007h
SSP1CON1_WCOL1_SIZE                      equ 0001h
SSP1CON1_WCOL1_LENGTH                    equ 0001h
SSP1CON1_WCOL1_MASK                      equ 0080h

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
SSP1CON2                                 equ 0191h
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
SSP1CON2_ADMSK_POSN                      equ 0001h
SSP1CON2_ADMSK_POSITION                  equ 0001h
SSP1CON2_ADMSK_SIZE                      equ 0005h
SSP1CON2_ADMSK_LENGTH                    equ 0005h
SSP1CON2_ADMSK_MASK                      equ 003Eh
SSP1CON2_ADMSK1_POSN                     equ 0001h
SSP1CON2_ADMSK1_POSITION                 equ 0001h
SSP1CON2_ADMSK1_SIZE                     equ 0001h
SSP1CON2_ADMSK1_LENGTH                   equ 0001h
SSP1CON2_ADMSK1_MASK                     equ 0002h
SSP1CON2_ADMSK2_POSN                     equ 0002h
SSP1CON2_ADMSK2_POSITION                 equ 0002h
SSP1CON2_ADMSK2_SIZE                     equ 0001h
SSP1CON2_ADMSK2_LENGTH                   equ 0001h
SSP1CON2_ADMSK2_MASK                     equ 0004h
SSP1CON2_ADMSK3_POSN                     equ 0003h
SSP1CON2_ADMSK3_POSITION                 equ 0003h
SSP1CON2_ADMSK3_SIZE                     equ 0001h
SSP1CON2_ADMSK3_LENGTH                   equ 0001h
SSP1CON2_ADMSK3_MASK                     equ 0008h
SSP1CON2_ADMSK4_POSN                     equ 0004h
SSP1CON2_ADMSK4_POSITION                 equ 0004h
SSP1CON2_ADMSK4_SIZE                     equ 0001h
SSP1CON2_ADMSK4_LENGTH                   equ 0001h
SSP1CON2_ADMSK4_MASK                     equ 0010h
SSP1CON2_ADMSK5_POSN                     equ 0005h
SSP1CON2_ADMSK5_POSITION                 equ 0005h
SSP1CON2_ADMSK5_SIZE                     equ 0001h
SSP1CON2_ADMSK5_LENGTH                   equ 0001h
SSP1CON2_ADMSK5_MASK                     equ 0020h
SSP1CON2_SEN1_POSN                       equ 0000h
SSP1CON2_SEN1_POSITION                   equ 0000h
SSP1CON2_SEN1_SIZE                       equ 0001h
SSP1CON2_SEN1_LENGTH                     equ 0001h
SSP1CON2_SEN1_MASK                       equ 0001h
SSP1CON2_ADMSK11_POSN                    equ 0001h
SSP1CON2_ADMSK11_POSITION                equ 0001h
SSP1CON2_ADMSK11_SIZE                    equ 0001h
SSP1CON2_ADMSK11_LENGTH                  equ 0001h
SSP1CON2_ADMSK11_MASK                    equ 0002h
SSP1CON2_ADMSK21_POSN                    equ 0002h
SSP1CON2_ADMSK21_POSITION                equ 0002h
SSP1CON2_ADMSK21_SIZE                    equ 0001h
SSP1CON2_ADMSK21_LENGTH                  equ 0001h
SSP1CON2_ADMSK21_MASK                    equ 0004h
SSP1CON2_ADMSK31_POSN                    equ 0003h
SSP1CON2_ADMSK31_POSITION                equ 0003h
SSP1CON2_ADMSK31_SIZE                    equ 0001h
SSP1CON2_ADMSK31_LENGTH                  equ 0001h
SSP1CON2_ADMSK31_MASK                    equ 0008h
SSP1CON2_ACKEN1_POSN                     equ 0004h
SSP1CON2_ACKEN1_POSITION                 equ 0004h
SSP1CON2_ACKEN1_SIZE                     equ 0001h
SSP1CON2_ACKEN1_LENGTH                   equ 0001h
SSP1CON2_ACKEN1_MASK                     equ 0010h
SSP1CON2_ACKDT1_POSN                     equ 0005h
SSP1CON2_ACKDT1_POSITION                 equ 0005h
SSP1CON2_ACKDT1_SIZE                     equ 0001h
SSP1CON2_ACKDT1_LENGTH                   equ 0001h
SSP1CON2_ACKDT1_MASK                     equ 0020h
SSP1CON2_ACKSTAT1_POSN                   equ 0006h
SSP1CON2_ACKSTAT1_POSITION               equ 0006h
SSP1CON2_ACKSTAT1_SIZE                   equ 0001h
SSP1CON2_ACKSTAT1_LENGTH                 equ 0001h
SSP1CON2_ACKSTAT1_MASK                   equ 0040h
SSP1CON2_GCEN1_POSN                      equ 0007h
SSP1CON2_GCEN1_POSITION                  equ 0007h
SSP1CON2_GCEN1_SIZE                      equ 0001h
SSP1CON2_GCEN1_LENGTH                    equ 0001h
SSP1CON2_GCEN1_MASK                      equ 0080h
SSP1CON2_RSEN1_POSN                      equ 0001h
SSP1CON2_RSEN1_POSITION                  equ 0001h
SSP1CON2_RSEN1_SIZE                      equ 0001h
SSP1CON2_RSEN1_LENGTH                    equ 0001h
SSP1CON2_RSEN1_MASK                      equ 0002h
SSP1CON2_PEN1_POSN                       equ 0002h
SSP1CON2_PEN1_POSITION                   equ 0002h
SSP1CON2_PEN1_SIZE                       equ 0001h
SSP1CON2_PEN1_LENGTH                     equ 0001h
SSP1CON2_PEN1_MASK                       equ 0004h
SSP1CON2_RCEN1_POSN                      equ 0003h
SSP1CON2_RCEN1_POSITION                  equ 0003h
SSP1CON2_RCEN1_SIZE                      equ 0001h
SSP1CON2_RCEN1_LENGTH                    equ 0001h
SSP1CON2_RCEN1_MASK                      equ 0008h
SSP1CON2_ADMSK41_POSN                    equ 0004h
SSP1CON2_ADMSK41_POSITION                equ 0004h
SSP1CON2_ADMSK41_SIZE                    equ 0001h
SSP1CON2_ADMSK41_LENGTH                  equ 0001h
SSP1CON2_ADMSK41_MASK                    equ 0010h
SSP1CON2_ADMSK51_POSN                    equ 0005h
SSP1CON2_ADMSK51_POSITION                equ 0005h
SSP1CON2_ADMSK51_SIZE                    equ 0001h
SSP1CON2_ADMSK51_LENGTH                  equ 0001h
SSP1CON2_ADMSK51_MASK                    equ 0020h

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
SSP1CON3                                 equ 0192h
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

// Register: SSP1ADD2
#define SSP1ADD2 SSP1ADD2
SSP1ADD2                                 equ 0193h
// bitfield definitions
SSP1ADD2_SSPADD_POSN                     equ 0000h
SSP1ADD2_SSPADD_POSITION                 equ 0000h
SSP1ADD2_SSPADD_SIZE                     equ 0008h
SSP1ADD2_SSPADD_LENGTH                   equ 0008h
SSP1ADD2_SSPADD_MASK                     equ 00FFh
SSP1ADD2_SSPADD0_POSN                    equ 0000h
SSP1ADD2_SSPADD0_POSITION                equ 0000h
SSP1ADD2_SSPADD0_SIZE                    equ 0001h
SSP1ADD2_SSPADD0_LENGTH                  equ 0001h
SSP1ADD2_SSPADD0_MASK                    equ 0001h
SSP1ADD2_SSPADD1_POSN                    equ 0001h
SSP1ADD2_SSPADD1_POSITION                equ 0001h
SSP1ADD2_SSPADD1_SIZE                    equ 0001h
SSP1ADD2_SSPADD1_LENGTH                  equ 0001h
SSP1ADD2_SSPADD1_MASK                    equ 0002h
SSP1ADD2_SSPADD2_POSN                    equ 0002h
SSP1ADD2_SSPADD2_POSITION                equ 0002h
SSP1ADD2_SSPADD2_SIZE                    equ 0001h
SSP1ADD2_SSPADD2_LENGTH                  equ 0001h
SSP1ADD2_SSPADD2_MASK                    equ 0004h
SSP1ADD2_SSPADD3_POSN                    equ 0003h
SSP1ADD2_SSPADD3_POSITION                equ 0003h
SSP1ADD2_SSPADD3_SIZE                    equ 0001h
SSP1ADD2_SSPADD3_LENGTH                  equ 0001h
SSP1ADD2_SSPADD3_MASK                    equ 0008h
SSP1ADD2_SSPADD4_POSN                    equ 0004h
SSP1ADD2_SSPADD4_POSITION                equ 0004h
SSP1ADD2_SSPADD4_SIZE                    equ 0001h
SSP1ADD2_SSPADD4_LENGTH                  equ 0001h
SSP1ADD2_SSPADD4_MASK                    equ 0010h
SSP1ADD2_SSPADD5_POSN                    equ 0005h
SSP1ADD2_SSPADD5_POSITION                equ 0005h
SSP1ADD2_SSPADD5_SIZE                    equ 0001h
SSP1ADD2_SSPADD5_LENGTH                  equ 0001h
SSP1ADD2_SSPADD5_MASK                    equ 0020h
SSP1ADD2_SSPADD6_POSN                    equ 0006h
SSP1ADD2_SSPADD6_POSITION                equ 0006h
SSP1ADD2_SSPADD6_SIZE                    equ 0001h
SSP1ADD2_SSPADD6_LENGTH                  equ 0001h
SSP1ADD2_SSPADD6_MASK                    equ 0040h
SSP1ADD2_SSPADD7_POSN                    equ 0007h
SSP1ADD2_SSPADD7_POSITION                equ 0007h
SSP1ADD2_SSPADD7_SIZE                    equ 0001h
SSP1ADD2_SSPADD7_LENGTH                  equ 0001h
SSP1ADD2_SSPADD7_MASK                    equ 0080h

// Register: SSP1MASK2
#define SSP1MASK2 SSP1MASK2
SSP1MASK2                                equ 0194h
// bitfield definitions
SSP1MASK2_SSPMSK_POSN                    equ 0000h
SSP1MASK2_SSPMSK_POSITION                equ 0000h
SSP1MASK2_SSPMSK_SIZE                    equ 0008h
SSP1MASK2_SSPMSK_LENGTH                  equ 0008h
SSP1MASK2_SSPMSK_MASK                    equ 00FFh
SSP1MASK2_SSPMSK0_POSN                   equ 0000h
SSP1MASK2_SSPMSK0_POSITION               equ 0000h
SSP1MASK2_SSPMSK0_SIZE                   equ 0001h
SSP1MASK2_SSPMSK0_LENGTH                 equ 0001h
SSP1MASK2_SSPMSK0_MASK                   equ 0001h
SSP1MASK2_SSPMSK1_POSN                   equ 0001h
SSP1MASK2_SSPMSK1_POSITION               equ 0001h
SSP1MASK2_SSPMSK1_SIZE                   equ 0001h
SSP1MASK2_SSPMSK1_LENGTH                 equ 0001h
SSP1MASK2_SSPMSK1_MASK                   equ 0002h
SSP1MASK2_SSPMSK2_POSN                   equ 0002h
SSP1MASK2_SSPMSK2_POSITION               equ 0002h
SSP1MASK2_SSPMSK2_SIZE                   equ 0001h
SSP1MASK2_SSPMSK2_LENGTH                 equ 0001h
SSP1MASK2_SSPMSK2_MASK                   equ 0004h
SSP1MASK2_SSPMSK3_POSN                   equ 0003h
SSP1MASK2_SSPMSK3_POSITION               equ 0003h
SSP1MASK2_SSPMSK3_SIZE                   equ 0001h
SSP1MASK2_SSPMSK3_LENGTH                 equ 0001h
SSP1MASK2_SSPMSK3_MASK                   equ 0008h
SSP1MASK2_SSPMSK4_POSN                   equ 0004h
SSP1MASK2_SSPMSK4_POSITION               equ 0004h
SSP1MASK2_SSPMSK4_SIZE                   equ 0001h
SSP1MASK2_SSPMSK4_LENGTH                 equ 0001h
SSP1MASK2_SSPMSK4_MASK                   equ 0010h
SSP1MASK2_SSPMSK5_POSN                   equ 0005h
SSP1MASK2_SSPMSK5_POSITION               equ 0005h
SSP1MASK2_SSPMSK5_SIZE                   equ 0001h
SSP1MASK2_SSPMSK5_LENGTH                 equ 0001h
SSP1MASK2_SSPMSK5_MASK                   equ 0020h
SSP1MASK2_SSPMSK6_POSN                   equ 0006h
SSP1MASK2_SSPMSK6_POSITION               equ 0006h
SSP1MASK2_SSPMSK6_SIZE                   equ 0001h
SSP1MASK2_SSPMSK6_LENGTH                 equ 0001h
SSP1MASK2_SSPMSK6_MASK                   equ 0040h
SSP1MASK2_SSPMSK7_POSN                   equ 0007h
SSP1MASK2_SSPMSK7_POSITION               equ 0007h
SSP1MASK2_SSPMSK7_SIZE                   equ 0001h
SSP1MASK2_SSPMSK7_LENGTH                 equ 0001h
SSP1MASK2_SSPMSK7_MASK                   equ 0080h

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 020Ch
// bitfield definitions
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh
TMR1L_TMR1L0_POSN                        equ 0000h
TMR1L_TMR1L0_POSITION                    equ 0000h
TMR1L_TMR1L0_SIZE                        equ 0001h
TMR1L_TMR1L0_LENGTH                      equ 0001h
TMR1L_TMR1L0_MASK                        equ 0001h
TMR1L_TMR1L1_POSN                        equ 0001h
TMR1L_TMR1L1_POSITION                    equ 0001h
TMR1L_TMR1L1_SIZE                        equ 0001h
TMR1L_TMR1L1_LENGTH                      equ 0001h
TMR1L_TMR1L1_MASK                        equ 0002h
TMR1L_TMR1L2_POSN                        equ 0002h
TMR1L_TMR1L2_POSITION                    equ 0002h
TMR1L_TMR1L2_SIZE                        equ 0001h
TMR1L_TMR1L2_LENGTH                      equ 0001h
TMR1L_TMR1L2_MASK                        equ 0004h
TMR1L_TMR1L3_POSN                        equ 0003h
TMR1L_TMR1L3_POSITION                    equ 0003h
TMR1L_TMR1L3_SIZE                        equ 0001h
TMR1L_TMR1L3_LENGTH                      equ 0001h
TMR1L_TMR1L3_MASK                        equ 0008h
TMR1L_TMR1L4_POSN                        equ 0004h
TMR1L_TMR1L4_POSITION                    equ 0004h
TMR1L_TMR1L4_SIZE                        equ 0001h
TMR1L_TMR1L4_LENGTH                      equ 0001h
TMR1L_TMR1L4_MASK                        equ 0010h
TMR1L_TMR1L5_POSN                        equ 0005h
TMR1L_TMR1L5_POSITION                    equ 0005h
TMR1L_TMR1L5_SIZE                        equ 0001h
TMR1L_TMR1L5_LENGTH                      equ 0001h
TMR1L_TMR1L5_MASK                        equ 0020h
TMR1L_TMR1L6_POSN                        equ 0006h
TMR1L_TMR1L6_POSITION                    equ 0006h
TMR1L_TMR1L6_SIZE                        equ 0001h
TMR1L_TMR1L6_LENGTH                      equ 0001h
TMR1L_TMR1L6_MASK                        equ 0040h
TMR1L_TMR1L7_POSN                        equ 0007h
TMR1L_TMR1L7_POSITION                    equ 0007h
TMR1L_TMR1L7_SIZE                        equ 0001h
TMR1L_TMR1L7_LENGTH                      equ 0001h
TMR1L_TMR1L7_MASK                        equ 0080h

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 020Dh
// bitfield definitions
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh
TMR1H_TM1H0_POSN                         equ 0000h
TMR1H_TM1H0_POSITION                     equ 0000h
TMR1H_TM1H0_SIZE                         equ 0001h
TMR1H_TM1H0_LENGTH                       equ 0001h
TMR1H_TM1H0_MASK                         equ 0001h
TMR1H_TM1H1_POSN                         equ 0001h
TMR1H_TM1H1_POSITION                     equ 0001h
TMR1H_TM1H1_SIZE                         equ 0001h
TMR1H_TM1H1_LENGTH                       equ 0001h
TMR1H_TM1H1_MASK                         equ 0002h
TMR1H_TM1H2_POSN                         equ 0002h
TMR1H_TM1H2_POSITION                     equ 0002h
TMR1H_TM1H2_SIZE                         equ 0001h
TMR1H_TM1H2_LENGTH                       equ 0001h
TMR1H_TM1H2_MASK                         equ 0004h
TMR1H_TM1H3_POSN                         equ 0003h
TMR1H_TM1H3_POSITION                     equ 0003h
TMR1H_TM1H3_SIZE                         equ 0001h
TMR1H_TM1H3_LENGTH                       equ 0001h
TMR1H_TM1H3_MASK                         equ 0008h
TMR1H_TM1H4_POSN                         equ 0004h
TMR1H_TM1H4_POSITION                     equ 0004h
TMR1H_TM1H4_SIZE                         equ 0001h
TMR1H_TM1H4_LENGTH                       equ 0001h
TMR1H_TM1H4_MASK                         equ 0010h
TMR1H_TM1H5_POSN                         equ 0005h
TMR1H_TM1H5_POSITION                     equ 0005h
TMR1H_TM1H5_SIZE                         equ 0001h
TMR1H_TM1H5_LENGTH                       equ 0001h
TMR1H_TM1H5_MASK                         equ 0020h
TMR1H_TM1H6_POSN                         equ 0006h
TMR1H_TM1H6_POSITION                     equ 0006h
TMR1H_TM1H6_SIZE                         equ 0001h
TMR1H_TM1H6_LENGTH                       equ 0001h
TMR1H_TM1H6_MASK                         equ 0040h
TMR1H_TM1H7_POSN                         equ 0007h
TMR1H_TM1H7_POSITION                     equ 0007h
TMR1H_TM1H7_SIZE                         equ 0001h
TMR1H_TM1H7_LENGTH                       equ 0001h
TMR1H_TM1H7_MASK                         equ 0080h

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 020Eh
// bitfield definitions
T1CON_ON_POSN                            equ 0000h
T1CON_ON_POSITION                        equ 0000h
T1CON_ON_SIZE                            equ 0001h
T1CON_ON_LENGTH                          equ 0001h
T1CON_ON_MASK                            equ 0001h
T1CON_RD16_POSN                          equ 0001h
T1CON_RD16_POSITION                      equ 0001h
T1CON_RD16_SIZE                          equ 0001h
T1CON_RD16_LENGTH                        equ 0001h
T1CON_RD16_MASK                          equ 0002h
T1CON_nSYNC_POSN                         equ 0002h
T1CON_nSYNC_POSITION                     equ 0002h
T1CON_nSYNC_SIZE                         equ 0001h
T1CON_nSYNC_LENGTH                       equ 0001h
T1CON_nSYNC_MASK                         equ 0004h
T1CON_CKPS_POSN                          equ 0004h
T1CON_CKPS_POSITION                      equ 0004h
T1CON_CKPS_SIZE                          equ 0002h
T1CON_CKPS_LENGTH                        equ 0002h
T1CON_CKPS_MASK                          equ 0030h
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

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 020Fh
// bitfield definitions
T1GCON_GVAL_POSN                         equ 0002h
T1GCON_GVAL_POSITION                     equ 0002h
T1GCON_GVAL_SIZE                         equ 0001h
T1GCON_GVAL_LENGTH                       equ 0001h
T1GCON_GVAL_MASK                         equ 0004h
T1GCON_GGO_nDONE_POSN                    equ 0003h
T1GCON_GGO_nDONE_POSITION                equ 0003h
T1GCON_GGO_nDONE_SIZE                    equ 0001h
T1GCON_GGO_nDONE_LENGTH                  equ 0001h
T1GCON_GGO_nDONE_MASK                    equ 0008h
T1GCON_GSPM_POSN                         equ 0004h
T1GCON_GSPM_POSITION                     equ 0004h
T1GCON_GSPM_SIZE                         equ 0001h
T1GCON_GSPM_LENGTH                       equ 0001h
T1GCON_GSPM_MASK                         equ 0010h
T1GCON_GTM_POSN                          equ 0005h
T1GCON_GTM_POSITION                      equ 0005h
T1GCON_GTM_SIZE                          equ 0001h
T1GCON_GTM_LENGTH                        equ 0001h
T1GCON_GTM_MASK                          equ 0020h
T1GCON_GPOL_POSN                         equ 0006h
T1GCON_GPOL_POSITION                     equ 0006h
T1GCON_GPOL_SIZE                         equ 0001h
T1GCON_GPOL_LENGTH                       equ 0001h
T1GCON_GPOL_MASK                         equ 0040h
T1GCON_GE_POSN                           equ 0007h
T1GCON_GE_POSITION                       equ 0007h
T1GCON_GE_SIZE                           equ 0001h
T1GCON_GE_LENGTH                         equ 0001h
T1GCON_GE_MASK                           equ 0080h

// Register: T1GATE
#define T1GATE T1GATE
T1GATE                                   equ 0210h
// bitfield definitions
T1GATE_GSS_POSN                          equ 0000h
T1GATE_GSS_POSITION                      equ 0000h
T1GATE_GSS_SIZE                          equ 0004h
T1GATE_GSS_LENGTH                        equ 0004h
T1GATE_GSS_MASK                          equ 000Fh
T1GATE_GSS0_POSN                         equ 0000h
T1GATE_GSS0_POSITION                     equ 0000h
T1GATE_GSS0_SIZE                         equ 0001h
T1GATE_GSS0_LENGTH                       equ 0001h
T1GATE_GSS0_MASK                         equ 0001h
T1GATE_GSS1_POSN                         equ 0001h
T1GATE_GSS1_POSITION                     equ 0001h
T1GATE_GSS1_SIZE                         equ 0001h
T1GATE_GSS1_LENGTH                       equ 0001h
T1GATE_GSS1_MASK                         equ 0002h
T1GATE_GSS2_POSN                         equ 0002h
T1GATE_GSS2_POSITION                     equ 0002h
T1GATE_GSS2_SIZE                         equ 0001h
T1GATE_GSS2_LENGTH                       equ 0001h
T1GATE_GSS2_MASK                         equ 0004h
T1GATE_GSS3_POSN                         equ 0003h
T1GATE_GSS3_POSITION                     equ 0003h
T1GATE_GSS3_SIZE                         equ 0001h
T1GATE_GSS3_LENGTH                       equ 0001h
T1GATE_GSS3_MASK                         equ 0008h

// Register: T1CLK
#define T1CLK T1CLK
T1CLK                                    equ 0211h
// bitfield definitions
T1CLK_CS_POSN                            equ 0000h
T1CLK_CS_POSITION                        equ 0000h
T1CLK_CS_SIZE                            equ 0004h
T1CLK_CS_LENGTH                          equ 0004h
T1CLK_CS_MASK                            equ 000Fh
T1CLK_CS0_POSN                           equ 0000h
T1CLK_CS0_POSITION                       equ 0000h
T1CLK_CS0_SIZE                           equ 0001h
T1CLK_CS0_LENGTH                         equ 0001h
T1CLK_CS0_MASK                           equ 0001h
T1CLK_CS1_POSN                           equ 0001h
T1CLK_CS1_POSITION                       equ 0001h
T1CLK_CS1_SIZE                           equ 0001h
T1CLK_CS1_LENGTH                         equ 0001h
T1CLK_CS1_MASK                           equ 0002h
T1CLK_CS2_POSN                           equ 0002h
T1CLK_CS2_POSITION                       equ 0002h
T1CLK_CS2_SIZE                           equ 0001h
T1CLK_CS2_LENGTH                         equ 0001h
T1CLK_CS2_MASK                           equ 0004h
T1CLK_CS3_POSN                           equ 0003h
T1CLK_CS3_POSITION                       equ 0003h
T1CLK_CS3_SIZE                           equ 0001h
T1CLK_CS3_LENGTH                         equ 0001h
T1CLK_CS3_MASK                           equ 0008h

// Register: TMR3L
#define TMR3L TMR3L
TMR3L                                    equ 0212h
// bitfield definitions
TMR3L_TMR3L_POSN                         equ 0000h
TMR3L_TMR3L_POSITION                     equ 0000h
TMR3L_TMR3L_SIZE                         equ 0008h
TMR3L_TMR3L_LENGTH                       equ 0008h
TMR3L_TMR3L_MASK                         equ 00FFh
TMR3L_TMR3L0_POSN                        equ 0000h
TMR3L_TMR3L0_POSITION                    equ 0000h
TMR3L_TMR3L0_SIZE                        equ 0001h
TMR3L_TMR3L0_LENGTH                      equ 0001h
TMR3L_TMR3L0_MASK                        equ 0001h
TMR3L_TMR3L1_POSN                        equ 0001h
TMR3L_TMR3L1_POSITION                    equ 0001h
TMR3L_TMR3L1_SIZE                        equ 0001h
TMR3L_TMR3L1_LENGTH                      equ 0001h
TMR3L_TMR3L1_MASK                        equ 0002h
TMR3L_TMR3L2_POSN                        equ 0002h
TMR3L_TMR3L2_POSITION                    equ 0002h
TMR3L_TMR3L2_SIZE                        equ 0001h
TMR3L_TMR3L2_LENGTH                      equ 0001h
TMR3L_TMR3L2_MASK                        equ 0004h
TMR3L_TMR3L3_POSN                        equ 0003h
TMR3L_TMR3L3_POSITION                    equ 0003h
TMR3L_TMR3L3_SIZE                        equ 0001h
TMR3L_TMR3L3_LENGTH                      equ 0001h
TMR3L_TMR3L3_MASK                        equ 0008h
TMR3L_TMR3L4_POSN                        equ 0004h
TMR3L_TMR3L4_POSITION                    equ 0004h
TMR3L_TMR3L4_SIZE                        equ 0001h
TMR3L_TMR3L4_LENGTH                      equ 0001h
TMR3L_TMR3L4_MASK                        equ 0010h
TMR3L_TMR3L5_POSN                        equ 0005h
TMR3L_TMR3L5_POSITION                    equ 0005h
TMR3L_TMR3L5_SIZE                        equ 0001h
TMR3L_TMR3L5_LENGTH                      equ 0001h
TMR3L_TMR3L5_MASK                        equ 0020h
TMR3L_TMR3L6_POSN                        equ 0006h
TMR3L_TMR3L6_POSITION                    equ 0006h
TMR3L_TMR3L6_SIZE                        equ 0001h
TMR3L_TMR3L6_LENGTH                      equ 0001h
TMR3L_TMR3L6_MASK                        equ 0040h
TMR3L_TMR3L7_POSN                        equ 0007h
TMR3L_TMR3L7_POSITION                    equ 0007h
TMR3L_TMR3L7_SIZE                        equ 0001h
TMR3L_TMR3L7_LENGTH                      equ 0001h
TMR3L_TMR3L7_MASK                        equ 0080h

// Register: TMR3H
#define TMR3H TMR3H
TMR3H                                    equ 0213h
// bitfield definitions
TMR3H_TMR3H_POSN                         equ 0000h
TMR3H_TMR3H_POSITION                     equ 0000h
TMR3H_TMR3H_SIZE                         equ 0008h
TMR3H_TMR3H_LENGTH                       equ 0008h
TMR3H_TMR3H_MASK                         equ 00FFh
TMR3H_TMR3H0_POSN                        equ 0000h
TMR3H_TMR3H0_POSITION                    equ 0000h
TMR3H_TMR3H0_SIZE                        equ 0001h
TMR3H_TMR3H0_LENGTH                      equ 0001h
TMR3H_TMR3H0_MASK                        equ 0001h
TMR3H_TMR3H1_POSN                        equ 0001h
TMR3H_TMR3H1_POSITION                    equ 0001h
TMR3H_TMR3H1_SIZE                        equ 0001h
TMR3H_TMR3H1_LENGTH                      equ 0001h
TMR3H_TMR3H1_MASK                        equ 0002h
TMR3H_TMR3H2_POSN                        equ 0002h
TMR3H_TMR3H2_POSITION                    equ 0002h
TMR3H_TMR3H2_SIZE                        equ 0001h
TMR3H_TMR3H2_LENGTH                      equ 0001h
TMR3H_TMR3H2_MASK                        equ 0004h
TMR3H_TMR3H3_POSN                        equ 0003h
TMR3H_TMR3H3_POSITION                    equ 0003h
TMR3H_TMR3H3_SIZE                        equ 0001h
TMR3H_TMR3H3_LENGTH                      equ 0001h
TMR3H_TMR3H3_MASK                        equ 0008h
TMR3H_TMR3H4_POSN                        equ 0004h
TMR3H_TMR3H4_POSITION                    equ 0004h
TMR3H_TMR3H4_SIZE                        equ 0001h
TMR3H_TMR3H4_LENGTH                      equ 0001h
TMR3H_TMR3H4_MASK                        equ 0010h
TMR3H_TMR3H5_POSN                        equ 0005h
TMR3H_TMR3H5_POSITION                    equ 0005h
TMR3H_TMR3H5_SIZE                        equ 0001h
TMR3H_TMR3H5_LENGTH                      equ 0001h
TMR3H_TMR3H5_MASK                        equ 0020h
TMR3H_TMR3H6_POSN                        equ 0006h
TMR3H_TMR3H6_POSITION                    equ 0006h
TMR3H_TMR3H6_SIZE                        equ 0001h
TMR3H_TMR3H6_LENGTH                      equ 0001h
TMR3H_TMR3H6_MASK                        equ 0040h
TMR3H_TMR3H7_POSN                        equ 0007h
TMR3H_TMR3H7_POSITION                    equ 0007h
TMR3H_TMR3H7_SIZE                        equ 0001h
TMR3H_TMR3H7_LENGTH                      equ 0001h
TMR3H_TMR3H7_MASK                        equ 0080h

// Register: T3CON
#define T3CON T3CON
T3CON                                    equ 0214h
// bitfield definitions
T3CON_ON_POSN                            equ 0000h
T3CON_ON_POSITION                        equ 0000h
T3CON_ON_SIZE                            equ 0001h
T3CON_ON_LENGTH                          equ 0001h
T3CON_ON_MASK                            equ 0001h
T3CON_RD16_POSN                          equ 0001h
T3CON_RD16_POSITION                      equ 0001h
T3CON_RD16_SIZE                          equ 0001h
T3CON_RD16_LENGTH                        equ 0001h
T3CON_RD16_MASK                          equ 0002h
T3CON_nSYNC_POSN                         equ 0002h
T3CON_nSYNC_POSITION                     equ 0002h
T3CON_nSYNC_SIZE                         equ 0001h
T3CON_nSYNC_LENGTH                       equ 0001h
T3CON_nSYNC_MASK                         equ 0004h
T3CON_CKPS_POSN                          equ 0004h
T3CON_CKPS_POSITION                      equ 0004h
T3CON_CKPS_SIZE                          equ 0002h
T3CON_CKPS_LENGTH                        equ 0002h
T3CON_CKPS_MASK                          equ 0030h
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

// Register: T3GCON
#define T3GCON T3GCON
T3GCON                                   equ 0215h
// bitfield definitions
T3GCON_GVAL_POSN                         equ 0002h
T3GCON_GVAL_POSITION                     equ 0002h
T3GCON_GVAL_SIZE                         equ 0001h
T3GCON_GVAL_LENGTH                       equ 0001h
T3GCON_GVAL_MASK                         equ 0004h
T3GCON_GGO_nDONE_POSN                    equ 0003h
T3GCON_GGO_nDONE_POSITION                equ 0003h
T3GCON_GGO_nDONE_SIZE                    equ 0001h
T3GCON_GGO_nDONE_LENGTH                  equ 0001h
T3GCON_GGO_nDONE_MASK                    equ 0008h
T3GCON_GSPM_POSN                         equ 0004h
T3GCON_GSPM_POSITION                     equ 0004h
T3GCON_GSPM_SIZE                         equ 0001h
T3GCON_GSPM_LENGTH                       equ 0001h
T3GCON_GSPM_MASK                         equ 0010h
T3GCON_GTM_POSN                          equ 0005h
T3GCON_GTM_POSITION                      equ 0005h
T3GCON_GTM_SIZE                          equ 0001h
T3GCON_GTM_LENGTH                        equ 0001h
T3GCON_GTM_MASK                          equ 0020h
T3GCON_GPOL_POSN                         equ 0006h
T3GCON_GPOL_POSITION                     equ 0006h
T3GCON_GPOL_SIZE                         equ 0001h
T3GCON_GPOL_LENGTH                       equ 0001h
T3GCON_GPOL_MASK                         equ 0040h
T3GCON_GE_POSN                           equ 0007h
T3GCON_GE_POSITION                       equ 0007h
T3GCON_GE_SIZE                           equ 0001h
T3GCON_GE_LENGTH                         equ 0001h
T3GCON_GE_MASK                           equ 0080h

// Register: T3GATE
#define T3GATE T3GATE
T3GATE                                   equ 0216h
// bitfield definitions
T3GATE_GSS_POSN                          equ 0000h
T3GATE_GSS_POSITION                      equ 0000h
T3GATE_GSS_SIZE                          equ 0004h
T3GATE_GSS_LENGTH                        equ 0004h
T3GATE_GSS_MASK                          equ 000Fh
T3GATE_GSS0_POSN                         equ 0000h
T3GATE_GSS0_POSITION                     equ 0000h
T3GATE_GSS0_SIZE                         equ 0001h
T3GATE_GSS0_LENGTH                       equ 0001h
T3GATE_GSS0_MASK                         equ 0001h
T3GATE_GSS1_POSN                         equ 0001h
T3GATE_GSS1_POSITION                     equ 0001h
T3GATE_GSS1_SIZE                         equ 0001h
T3GATE_GSS1_LENGTH                       equ 0001h
T3GATE_GSS1_MASK                         equ 0002h
T3GATE_GSS2_POSN                         equ 0002h
T3GATE_GSS2_POSITION                     equ 0002h
T3GATE_GSS2_SIZE                         equ 0001h
T3GATE_GSS2_LENGTH                       equ 0001h
T3GATE_GSS2_MASK                         equ 0004h
T3GATE_GSS3_POSN                         equ 0003h
T3GATE_GSS3_POSITION                     equ 0003h
T3GATE_GSS3_SIZE                         equ 0001h
T3GATE_GSS3_LENGTH                       equ 0001h
T3GATE_GSS3_MASK                         equ 0008h

// Register: T3CLK
#define T3CLK T3CLK
T3CLK                                    equ 0217h
// bitfield definitions
T3CLK_CS_POSN                            equ 0000h
T3CLK_CS_POSITION                        equ 0000h
T3CLK_CS_SIZE                            equ 0004h
T3CLK_CS_LENGTH                          equ 0004h
T3CLK_CS_MASK                            equ 000Fh
T3CLK_CS0_POSN                           equ 0000h
T3CLK_CS0_POSITION                       equ 0000h
T3CLK_CS0_SIZE                           equ 0001h
T3CLK_CS0_LENGTH                         equ 0001h
T3CLK_CS0_MASK                           equ 0001h
T3CLK_CS1_POSN                           equ 0001h
T3CLK_CS1_POSITION                       equ 0001h
T3CLK_CS1_SIZE                           equ 0001h
T3CLK_CS1_LENGTH                         equ 0001h
T3CLK_CS1_MASK                           equ 0002h
T3CLK_CS2_POSN                           equ 0002h
T3CLK_CS2_POSITION                       equ 0002h
T3CLK_CS2_SIZE                           equ 0001h
T3CLK_CS2_LENGTH                         equ 0001h
T3CLK_CS2_MASK                           equ 0004h
T3CLK_CS3_POSN                           equ 0003h
T3CLK_CS3_POSITION                       equ 0003h
T3CLK_CS3_SIZE                           equ 0001h
T3CLK_CS3_LENGTH                         equ 0001h
T3CLK_CS3_MASK                           equ 0008h

// Register: CCPTMRS0
#define CCPTMRS0 CCPTMRS0
CCPTMRS0                                 equ 021Eh
// bitfield definitions
CCPTMRS0_C1TSEL_POSN                     equ 0000h
CCPTMRS0_C1TSEL_POSITION                 equ 0000h
CCPTMRS0_C1TSEL_SIZE                     equ 0001h
CCPTMRS0_C1TSEL_LENGTH                   equ 0001h
CCPTMRS0_C1TSEL_MASK                     equ 0001h
CCPTMRS0_C2TSEL_POSN                     equ 0001h
CCPTMRS0_C2TSEL_POSITION                 equ 0001h
CCPTMRS0_C2TSEL_SIZE                     equ 0001h
CCPTMRS0_C2TSEL_LENGTH                   equ 0001h
CCPTMRS0_C2TSEL_MASK                     equ 0002h

// Register: T2TMR
#define T2TMR T2TMR
T2TMR                                    equ 028Ch
// bitfield definitions
T2TMR_TMR2_POSN                          equ 0000h
T2TMR_TMR2_POSITION                      equ 0000h
T2TMR_TMR2_SIZE                          equ 0008h
T2TMR_TMR2_LENGTH                        equ 0008h
T2TMR_TMR2_MASK                          equ 00FFh

// Register: T2PR
#define T2PR T2PR
T2PR                                     equ 028Dh
// bitfield definitions
T2PR_PR2_POSN                            equ 0000h
T2PR_PR2_POSITION                        equ 0000h
T2PR_PR2_SIZE                            equ 0008h
T2PR_PR2_LENGTH                          equ 0008h
T2PR_PR2_MASK                            equ 00FFh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 028Eh
// bitfield definitions
T2CON_OUTPS_POSN                         equ 0000h
T2CON_OUTPS_POSITION                     equ 0000h
T2CON_OUTPS_SIZE                         equ 0004h
T2CON_OUTPS_LENGTH                       equ 0004h
T2CON_OUTPS_MASK                         equ 000Fh
T2CON_CKPS_POSN                          equ 0004h
T2CON_CKPS_POSITION                      equ 0004h
T2CON_CKPS_SIZE                          equ 0003h
T2CON_CKPS_LENGTH                        equ 0003h
T2CON_CKPS_MASK                          equ 0070h
T2CON_ON_POSN                            equ 0007h
T2CON_ON_POSITION                        equ 0007h
T2CON_ON_SIZE                            equ 0001h
T2CON_ON_LENGTH                          equ 0001h
T2CON_ON_MASK                            equ 0080h
T2CON_OUTPS0_POSN                        equ 0000h
T2CON_OUTPS0_POSITION                    equ 0000h
T2CON_OUTPS0_SIZE                        equ 0001h
T2CON_OUTPS0_LENGTH                      equ 0001h
T2CON_OUTPS0_MASK                        equ 0001h
T2CON_OUTPS1_POSN                        equ 0001h
T2CON_OUTPS1_POSITION                    equ 0001h
T2CON_OUTPS1_SIZE                        equ 0001h
T2CON_OUTPS1_LENGTH                      equ 0001h
T2CON_OUTPS1_MASK                        equ 0002h
T2CON_OUTPS2_POSN                        equ 0002h
T2CON_OUTPS2_POSITION                    equ 0002h
T2CON_OUTPS2_SIZE                        equ 0001h
T2CON_OUTPS2_LENGTH                      equ 0001h
T2CON_OUTPS2_MASK                        equ 0004h
T2CON_OUTPS3_POSN                        equ 0003h
T2CON_OUTPS3_POSITION                    equ 0003h
T2CON_OUTPS3_SIZE                        equ 0001h
T2CON_OUTPS3_LENGTH                      equ 0001h
T2CON_OUTPS3_MASK                        equ 0008h
T2CON_CKPS0_POSN                         equ 0004h
T2CON_CKPS0_POSITION                     equ 0004h
T2CON_CKPS0_SIZE                         equ 0001h
T2CON_CKPS0_LENGTH                       equ 0001h
T2CON_CKPS0_MASK                         equ 0010h
T2CON_CKPS1_POSN                         equ 0005h
T2CON_CKPS1_POSITION                     equ 0005h
T2CON_CKPS1_SIZE                         equ 0001h
T2CON_CKPS1_LENGTH                       equ 0001h
T2CON_CKPS1_MASK                         equ 0020h
T2CON_CKPS2_POSN                         equ 0006h
T2CON_CKPS2_POSITION                     equ 0006h
T2CON_CKPS2_SIZE                         equ 0001h
T2CON_CKPS2_LENGTH                       equ 0001h
T2CON_CKPS2_MASK                         equ 0040h

// Register: T2HLT
#define T2HLT T2HLT
T2HLT                                    equ 028Fh
// bitfield definitions
T2HLT_T2MODE_POSN                        equ 0000h
T2HLT_T2MODE_POSITION                    equ 0000h
T2HLT_T2MODE_SIZE                        equ 0004h
T2HLT_T2MODE_LENGTH                      equ 0004h
T2HLT_T2MODE_MASK                        equ 000Fh
T2HLT_CKSYNC_POSN                        equ 0005h
T2HLT_CKSYNC_POSITION                    equ 0005h
T2HLT_CKSYNC_SIZE                        equ 0001h
T2HLT_CKSYNC_LENGTH                      equ 0001h
T2HLT_CKSYNC_MASK                        equ 0020h
T2HLT_CKPOL_POSN                         equ 0006h
T2HLT_CKPOL_POSITION                     equ 0006h
T2HLT_CKPOL_SIZE                         equ 0001h
T2HLT_CKPOL_LENGTH                       equ 0001h
T2HLT_CKPOL_MASK                         equ 0040h
T2HLT_PSYNC_POSN                         equ 0007h
T2HLT_PSYNC_POSITION                     equ 0007h
T2HLT_PSYNC_SIZE                         equ 0001h
T2HLT_PSYNC_LENGTH                       equ 0001h
T2HLT_PSYNC_MASK                         equ 0080h
T2HLT_MODE0_POSN                         equ 0000h
T2HLT_MODE0_POSITION                     equ 0000h
T2HLT_MODE0_SIZE                         equ 0001h
T2HLT_MODE0_LENGTH                       equ 0001h
T2HLT_MODE0_MASK                         equ 0001h
T2HLT_MODE1_POSN                         equ 0001h
T2HLT_MODE1_POSITION                     equ 0001h
T2HLT_MODE1_SIZE                         equ 0001h
T2HLT_MODE1_LENGTH                       equ 0001h
T2HLT_MODE1_MASK                         equ 0002h
T2HLT_MODE2_POSN                         equ 0002h
T2HLT_MODE2_POSITION                     equ 0002h
T2HLT_MODE2_SIZE                         equ 0001h
T2HLT_MODE2_LENGTH                       equ 0001h
T2HLT_MODE2_MASK                         equ 0004h
T2HLT_MODE3_POSN                         equ 0003h
T2HLT_MODE3_POSITION                     equ 0003h
T2HLT_MODE3_SIZE                         equ 0001h
T2HLT_MODE3_LENGTH                       equ 0001h
T2HLT_MODE3_MASK                         equ 0008h

// Register: T2CLKCON
#define T2CLKCON T2CLKCON
T2CLKCON                                 equ 0290h
// bitfield definitions
T2CLKCON_T2CLK_POSN                      equ 0000h
T2CLKCON_T2CLK_POSITION                  equ 0000h
T2CLKCON_T2CLK_SIZE                      equ 0003h
T2CLKCON_T2CLK_LENGTH                    equ 0003h
T2CLKCON_T2CLK_MASK                      equ 0007h
T2CLKCON_CS0_POSN                        equ 0000h
T2CLKCON_CS0_POSITION                    equ 0000h
T2CLKCON_CS0_SIZE                        equ 0001h
T2CLKCON_CS0_LENGTH                      equ 0001h
T2CLKCON_CS0_MASK                        equ 0001h
T2CLKCON_CS1_POSN                        equ 0001h
T2CLKCON_CS1_POSITION                    equ 0001h
T2CLKCON_CS1_SIZE                        equ 0001h
T2CLKCON_CS1_LENGTH                      equ 0001h
T2CLKCON_CS1_MASK                        equ 0002h
T2CLKCON_CS2_POSN                        equ 0002h
T2CLKCON_CS2_POSITION                    equ 0002h
T2CLKCON_CS2_SIZE                        equ 0001h
T2CLKCON_CS2_LENGTH                      equ 0001h
T2CLKCON_CS2_MASK                        equ 0004h

// Register: T2RST
#define T2RST T2RST
T2RST                                    equ 0291h
// bitfield definitions
T2RST_T2RST_POSN                         equ 0000h
T2RST_T2RST_POSITION                     equ 0000h
T2RST_T2RST_SIZE                         equ 0003h
T2RST_T2RST_LENGTH                       equ 0003h
T2RST_T2RST_MASK                         equ 0007h
T2RST_RSEL0_POSN                         equ 0000h
T2RST_RSEL0_POSITION                     equ 0000h
T2RST_RSEL0_SIZE                         equ 0001h
T2RST_RSEL0_LENGTH                       equ 0001h
T2RST_RSEL0_MASK                         equ 0001h
T2RST_RSEL1_POSN                         equ 0001h
T2RST_RSEL1_POSITION                     equ 0001h
T2RST_RSEL1_SIZE                         equ 0001h
T2RST_RSEL1_LENGTH                       equ 0001h
T2RST_RSEL1_MASK                         equ 0002h
T2RST_RESL2_POSN                         equ 0002h
T2RST_RESL2_POSITION                     equ 0002h
T2RST_RESL2_SIZE                         equ 0001h
T2RST_RESL2_LENGTH                       equ 0001h
T2RST_RESL2_MASK                         equ 0004h

// Register: T4TMR
#define T4TMR T4TMR
T4TMR                                    equ 0292h
// bitfield definitions
T4TMR_T4TMR_POSN                         equ 0000h
T4TMR_T4TMR_POSITION                     equ 0000h
T4TMR_T4TMR_SIZE                         equ 0008h
T4TMR_T4TMR_LENGTH                       equ 0008h
T4TMR_T4TMR_MASK                         equ 00FFh

// Register: T4PR
#define T4PR T4PR
T4PR                                     equ 0293h
// bitfield definitions
T4PR_T4PR_POSN                           equ 0000h
T4PR_T4PR_POSITION                       equ 0000h
T4PR_T4PR_SIZE                           equ 0008h
T4PR_T4PR_LENGTH                         equ 0008h
T4PR_T4PR_MASK                           equ 00FFh

// Register: T4CON
#define T4CON T4CON
T4CON                                    equ 0294h
// bitfield definitions
T4CON_OUTPS_POSN                         equ 0000h
T4CON_OUTPS_POSITION                     equ 0000h
T4CON_OUTPS_SIZE                         equ 0004h
T4CON_OUTPS_LENGTH                       equ 0004h
T4CON_OUTPS_MASK                         equ 000Fh
T4CON_CKPS_POSN                          equ 0004h
T4CON_CKPS_POSITION                      equ 0004h
T4CON_CKPS_SIZE                          equ 0003h
T4CON_CKPS_LENGTH                        equ 0003h
T4CON_CKPS_MASK                          equ 0070h
T4CON_ON_POSN                            equ 0007h
T4CON_ON_POSITION                        equ 0007h
T4CON_ON_SIZE                            equ 0001h
T4CON_ON_LENGTH                          equ 0001h
T4CON_ON_MASK                            equ 0080h
T4CON_OUTPS0_POSN                        equ 0000h
T4CON_OUTPS0_POSITION                    equ 0000h
T4CON_OUTPS0_SIZE                        equ 0001h
T4CON_OUTPS0_LENGTH                      equ 0001h
T4CON_OUTPS0_MASK                        equ 0001h
T4CON_OUTPS1_POSN                        equ 0001h
T4CON_OUTPS1_POSITION                    equ 0001h
T4CON_OUTPS1_SIZE                        equ 0001h
T4CON_OUTPS1_LENGTH                      equ 0001h
T4CON_OUTPS1_MASK                        equ 0002h
T4CON_OUTPS2_POSN                        equ 0002h
T4CON_OUTPS2_POSITION                    equ 0002h
T4CON_OUTPS2_SIZE                        equ 0001h
T4CON_OUTPS2_LENGTH                      equ 0001h
T4CON_OUTPS2_MASK                        equ 0004h
T4CON_OUTPS3_POSN                        equ 0003h
T4CON_OUTPS3_POSITION                    equ 0003h
T4CON_OUTPS3_SIZE                        equ 0001h
T4CON_OUTPS3_LENGTH                      equ 0001h
T4CON_OUTPS3_MASK                        equ 0008h
T4CON_CKPS0_POSN                         equ 0004h
T4CON_CKPS0_POSITION                     equ 0004h
T4CON_CKPS0_SIZE                         equ 0001h
T4CON_CKPS0_LENGTH                       equ 0001h
T4CON_CKPS0_MASK                         equ 0010h
T4CON_CKPS1_POSN                         equ 0005h
T4CON_CKPS1_POSITION                     equ 0005h
T4CON_CKPS1_SIZE                         equ 0001h
T4CON_CKPS1_LENGTH                       equ 0001h
T4CON_CKPS1_MASK                         equ 0020h
T4CON_CKPS2_POSN                         equ 0006h
T4CON_CKPS2_POSITION                     equ 0006h
T4CON_CKPS2_SIZE                         equ 0001h
T4CON_CKPS2_LENGTH                       equ 0001h
T4CON_CKPS2_MASK                         equ 0040h

// Register: T4HLT
#define T4HLT T4HLT
T4HLT                                    equ 0295h
// bitfield definitions
T4HLT_T4MODE_POSN                        equ 0000h
T4HLT_T4MODE_POSITION                    equ 0000h
T4HLT_T4MODE_SIZE                        equ 0004h
T4HLT_T4MODE_LENGTH                      equ 0004h
T4HLT_T4MODE_MASK                        equ 000Fh
T4HLT_T4CSYNC_POSN                       equ 0005h
T4HLT_T4CSYNC_POSITION                   equ 0005h
T4HLT_T4CSYNC_SIZE                       equ 0001h
T4HLT_T4CSYNC_LENGTH                     equ 0001h
T4HLT_T4CSYNC_MASK                       equ 0020h
T4HLT_T4CPOL_POSN                        equ 0006h
T4HLT_T4CPOL_POSITION                    equ 0006h
T4HLT_T4CPOL_SIZE                        equ 0001h
T4HLT_T4CPOL_LENGTH                      equ 0001h
T4HLT_T4CPOL_MASK                        equ 0040h
T4HLT_T4PSYNC_POSN                       equ 0007h
T4HLT_T4PSYNC_POSITION                   equ 0007h
T4HLT_T4PSYNC_SIZE                       equ 0001h
T4HLT_T4PSYNC_LENGTH                     equ 0001h
T4HLT_T4PSYNC_MASK                       equ 0080h
T4HLT_MODE0_POSN                         equ 0000h
T4HLT_MODE0_POSITION                     equ 0000h
T4HLT_MODE0_SIZE                         equ 0001h
T4HLT_MODE0_LENGTH                       equ 0001h
T4HLT_MODE0_MASK                         equ 0001h
T4HLT_MODE1_POSN                         equ 0001h
T4HLT_MODE1_POSITION                     equ 0001h
T4HLT_MODE1_SIZE                         equ 0001h
T4HLT_MODE1_LENGTH                       equ 0001h
T4HLT_MODE1_MASK                         equ 0002h
T4HLT_MODE2_POSN                         equ 0002h
T4HLT_MODE2_POSITION                     equ 0002h
T4HLT_MODE2_SIZE                         equ 0001h
T4HLT_MODE2_LENGTH                       equ 0001h
T4HLT_MODE2_MASK                         equ 0004h
T4HLT_MODE3_POSN                         equ 0003h
T4HLT_MODE3_POSITION                     equ 0003h
T4HLT_MODE3_SIZE                         equ 0001h
T4HLT_MODE3_LENGTH                       equ 0001h
T4HLT_MODE3_MASK                         equ 0008h

// Register: T4CLKCON
#define T4CLKCON T4CLKCON
T4CLKCON                                 equ 0296h
// bitfield definitions
T4CLKCON_T4CLK_POSN                      equ 0000h
T4CLKCON_T4CLK_POSITION                  equ 0000h
T4CLKCON_T4CLK_SIZE                      equ 0003h
T4CLKCON_T4CLK_LENGTH                    equ 0003h
T4CLKCON_T4CLK_MASK                      equ 0007h
T4CLKCON_CS0_POSN                        equ 0000h
T4CLKCON_CS0_POSITION                    equ 0000h
T4CLKCON_CS0_SIZE                        equ 0001h
T4CLKCON_CS0_LENGTH                      equ 0001h
T4CLKCON_CS0_MASK                        equ 0001h
T4CLKCON_CS1_POSN                        equ 0001h
T4CLKCON_CS1_POSITION                    equ 0001h
T4CLKCON_CS1_SIZE                        equ 0001h
T4CLKCON_CS1_LENGTH                      equ 0001h
T4CLKCON_CS1_MASK                        equ 0002h
T4CLKCON_CS2_POSN                        equ 0002h
T4CLKCON_CS2_POSITION                    equ 0002h
T4CLKCON_CS2_SIZE                        equ 0001h
T4CLKCON_CS2_LENGTH                      equ 0001h
T4CLKCON_CS2_MASK                        equ 0004h

// Register: T4RST
#define T4RST T4RST
T4RST                                    equ 0297h
// bitfield definitions
T4RST_T4RST_POSN                         equ 0000h
T4RST_T4RST_POSITION                     equ 0000h
T4RST_T4RST_SIZE                         equ 0003h
T4RST_T4RST_LENGTH                       equ 0003h
T4RST_T4RST_MASK                         equ 0007h
T4RST_RSEL0_POSN                         equ 0000h
T4RST_RSEL0_POSITION                     equ 0000h
T4RST_RSEL0_SIZE                         equ 0001h
T4RST_RSEL0_LENGTH                       equ 0001h
T4RST_RSEL0_MASK                         equ 0001h
T4RST_RSEL1_POSN                         equ 0001h
T4RST_RSEL1_POSITION                     equ 0001h
T4RST_RSEL1_SIZE                         equ 0001h
T4RST_RSEL1_LENGTH                       equ 0001h
T4RST_RSEL1_MASK                         equ 0002h
T4RST_RSEL2_POSN                         equ 0002h
T4RST_RSEL2_POSITION                     equ 0002h
T4RST_RSEL2_SIZE                         equ 0001h
T4RST_RSEL2_LENGTH                       equ 0001h
T4RST_RSEL2_MASK                         equ 0004h

// Register: CCP1RL
#define CCP1RL CCP1RL
CCP1RL                                   equ 030Ch
// bitfield definitions
CCP1RL_CCP1PR0_POSN                      equ 0000h
CCP1RL_CCP1PR0_POSITION                  equ 0000h
CCP1RL_CCP1PR0_SIZE                      equ 0001h
CCP1RL_CCP1PR0_LENGTH                    equ 0001h
CCP1RL_CCP1PR0_MASK                      equ 0001h
CCP1RL_CCP1PR1_POSN                      equ 0001h
CCP1RL_CCP1PR1_POSITION                  equ 0001h
CCP1RL_CCP1PR1_SIZE                      equ 0001h
CCP1RL_CCP1PR1_LENGTH                    equ 0001h
CCP1RL_CCP1PR1_MASK                      equ 0002h
CCP1RL_CCP1PR2_POSN                      equ 0002h
CCP1RL_CCP1PR2_POSITION                  equ 0002h
CCP1RL_CCP1PR2_SIZE                      equ 0001h
CCP1RL_CCP1PR2_LENGTH                    equ 0001h
CCP1RL_CCP1PR2_MASK                      equ 0004h
CCP1RL_CCP1PR3_POSN                      equ 0003h
CCP1RL_CCP1PR3_POSITION                  equ 0003h
CCP1RL_CCP1PR3_SIZE                      equ 0001h
CCP1RL_CCP1PR3_LENGTH                    equ 0001h
CCP1RL_CCP1PR3_MASK                      equ 0008h
CCP1RL_CCP1PR4_POSN                      equ 0004h
CCP1RL_CCP1PR4_POSITION                  equ 0004h
CCP1RL_CCP1PR4_SIZE                      equ 0001h
CCP1RL_CCP1PR4_LENGTH                    equ 0001h
CCP1RL_CCP1PR4_MASK                      equ 0010h
CCP1RL_CCP1PR5_POSN                      equ 0005h
CCP1RL_CCP1PR5_POSITION                  equ 0005h
CCP1RL_CCP1PR5_SIZE                      equ 0001h
CCP1RL_CCP1PR5_LENGTH                    equ 0001h
CCP1RL_CCP1PR5_MASK                      equ 0020h
CCP1RL_CCP1PR6_POSN                      equ 0006h
CCP1RL_CCP1PR6_POSITION                  equ 0006h
CCP1RL_CCP1PR6_SIZE                      equ 0001h
CCP1RL_CCP1PR6_LENGTH                    equ 0001h
CCP1RL_CCP1PR6_MASK                      equ 0040h
CCP1RL_CCP1PR7_POSN                      equ 0007h
CCP1RL_CCP1PR7_POSITION                  equ 0007h
CCP1RL_CCP1PR7_SIZE                      equ 0001h
CCP1RL_CCP1PR7_LENGTH                    equ 0001h
CCP1RL_CCP1PR7_MASK                      equ 0080h

// Register: CCP1RH
#define CCP1RH CCP1RH
CCP1RH                                   equ 030Dh
// bitfield definitions
CCP1RH_CCP1PR8_POSN                      equ 0000h
CCP1RH_CCP1PR8_POSITION                  equ 0000h
CCP1RH_CCP1PR8_SIZE                      equ 0001h
CCP1RH_CCP1PR8_LENGTH                    equ 0001h
CCP1RH_CCP1PR8_MASK                      equ 0001h
CCP1RH_CCP1PR9_POSN                      equ 0001h
CCP1RH_CCP1PR9_POSITION                  equ 0001h
CCP1RH_CCP1PR9_SIZE                      equ 0001h
CCP1RH_CCP1PR9_LENGTH                    equ 0001h
CCP1RH_CCP1PR9_MASK                      equ 0002h
CCP1RH_CCP1PR10_POSN                     equ 0002h
CCP1RH_CCP1PR10_POSITION                 equ 0002h
CCP1RH_CCP1PR10_SIZE                     equ 0001h
CCP1RH_CCP1PR10_LENGTH                   equ 0001h
CCP1RH_CCP1PR10_MASK                     equ 0004h
CCP1RH_CCP1PR11_POSN                     equ 0003h
CCP1RH_CCP1PR11_POSITION                 equ 0003h
CCP1RH_CCP1PR11_SIZE                     equ 0001h
CCP1RH_CCP1PR11_LENGTH                   equ 0001h
CCP1RH_CCP1PR11_MASK                     equ 0008h
CCP1RH_CCP1PR12_POSN                     equ 0004h
CCP1RH_CCP1PR12_POSITION                 equ 0004h
CCP1RH_CCP1PR12_SIZE                     equ 0001h
CCP1RH_CCP1PR12_LENGTH                   equ 0001h
CCP1RH_CCP1PR12_MASK                     equ 0010h
CCP1RH_CCP1PR13_POSN                     equ 0005h
CCP1RH_CCP1PR13_POSITION                 equ 0005h
CCP1RH_CCP1PR13_SIZE                     equ 0001h
CCP1RH_CCP1PR13_LENGTH                   equ 0001h
CCP1RH_CCP1PR13_MASK                     equ 0020h
CCP1RH_CCP1PR14_POSN                     equ 0006h
CCP1RH_CCP1PR14_POSITION                 equ 0006h
CCP1RH_CCP1PR14_SIZE                     equ 0001h
CCP1RH_CCP1PR14_LENGTH                   equ 0001h
CCP1RH_CCP1PR14_MASK                     equ 0040h
CCP1RH_CCP1PR15_POSN                     equ 0007h
CCP1RH_CCP1PR15_POSITION                 equ 0007h
CCP1RH_CCP1PR15_SIZE                     equ 0001h
CCP1RH_CCP1PR15_LENGTH                   equ 0001h
CCP1RH_CCP1PR15_MASK                     equ 0080h

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 030Eh
// bitfield definitions
CCP1CON_MODE0_POSN                       equ 0000h
CCP1CON_MODE0_POSITION                   equ 0000h
CCP1CON_MODE0_SIZE                       equ 0001h
CCP1CON_MODE0_LENGTH                     equ 0001h
CCP1CON_MODE0_MASK                       equ 0001h
CCP1CON_MODE1_POSN                       equ 0001h
CCP1CON_MODE1_POSITION                   equ 0001h
CCP1CON_MODE1_SIZE                       equ 0001h
CCP1CON_MODE1_LENGTH                     equ 0001h
CCP1CON_MODE1_MASK                       equ 0002h
CCP1CON_MODE2_POSN                       equ 0002h
CCP1CON_MODE2_POSITION                   equ 0002h
CCP1CON_MODE2_SIZE                       equ 0001h
CCP1CON_MODE2_LENGTH                     equ 0001h
CCP1CON_MODE2_MASK                       equ 0004h
CCP1CON_MODE3_POSN                       equ 0003h
CCP1CON_MODE3_POSITION                   equ 0003h
CCP1CON_MODE3_SIZE                       equ 0001h
CCP1CON_MODE3_LENGTH                     equ 0001h
CCP1CON_MODE3_MASK                       equ 0008h
CCP1CON_FMT_POSN                         equ 0004h
CCP1CON_FMT_POSITION                     equ 0004h
CCP1CON_FMT_SIZE                         equ 0001h
CCP1CON_FMT_LENGTH                       equ 0001h
CCP1CON_FMT_MASK                         equ 0010h
CCP1CON_OUT_POSN                         equ 0005h
CCP1CON_OUT_POSITION                     equ 0005h
CCP1CON_OUT_SIZE                         equ 0001h
CCP1CON_OUT_LENGTH                       equ 0001h
CCP1CON_OUT_MASK                         equ 0020h
CCP1CON_EN_POSN                          equ 0007h
CCP1CON_EN_POSITION                      equ 0007h
CCP1CON_EN_SIZE                          equ 0001h
CCP1CON_EN_LENGTH                        equ 0001h
CCP1CON_EN_MASK                          equ 0080h

// Register: CCP1CAP
#define CCP1CAP CCP1CAP
CCP1CAP                                  equ 030Fh
// bitfield definitions
CCP1CAP_CCP1CAP0_POSN                    equ 0000h
CCP1CAP_CCP1CAP0_POSITION                equ 0000h
CCP1CAP_CCP1CAP0_SIZE                    equ 0001h
CCP1CAP_CCP1CAP0_LENGTH                  equ 0001h
CCP1CAP_CCP1CAP0_MASK                    equ 0001h
CCP1CAP_CCP1CAP1_POSN                    equ 0001h
CCP1CAP_CCP1CAP1_POSITION                equ 0001h
CCP1CAP_CCP1CAP1_SIZE                    equ 0001h
CCP1CAP_CCP1CAP1_LENGTH                  equ 0001h
CCP1CAP_CCP1CAP1_MASK                    equ 0002h
CCP1CAP_CCP1CAP2_POSN                    equ 0002h
CCP1CAP_CCP1CAP2_POSITION                equ 0002h
CCP1CAP_CCP1CAP2_SIZE                    equ 0001h
CCP1CAP_CCP1CAP2_LENGTH                  equ 0001h
CCP1CAP_CCP1CAP2_MASK                    equ 0004h

// Register: CCP2RL
#define CCP2RL CCP2RL
CCP2RL                                   equ 0310h
// bitfield definitions
CCP2RL_CCP2PR0_POSN                      equ 0000h
CCP2RL_CCP2PR0_POSITION                  equ 0000h
CCP2RL_CCP2PR0_SIZE                      equ 0001h
CCP2RL_CCP2PR0_LENGTH                    equ 0001h
CCP2RL_CCP2PR0_MASK                      equ 0001h
CCP2RL_CCP2PR1_POSN                      equ 0001h
CCP2RL_CCP2PR1_POSITION                  equ 0001h
CCP2RL_CCP2PR1_SIZE                      equ 0001h
CCP2RL_CCP2PR1_LENGTH                    equ 0001h
CCP2RL_CCP2PR1_MASK                      equ 0002h
CCP2RL_CCP2PR2_POSN                      equ 0002h
CCP2RL_CCP2PR2_POSITION                  equ 0002h
CCP2RL_CCP2PR2_SIZE                      equ 0001h
CCP2RL_CCP2PR2_LENGTH                    equ 0001h
CCP2RL_CCP2PR2_MASK                      equ 0004h
CCP2RL_CCP2PR3_POSN                      equ 0003h
CCP2RL_CCP2PR3_POSITION                  equ 0003h
CCP2RL_CCP2PR3_SIZE                      equ 0001h
CCP2RL_CCP2PR3_LENGTH                    equ 0001h
CCP2RL_CCP2PR3_MASK                      equ 0008h
CCP2RL_CCP2PR4_POSN                      equ 0004h
CCP2RL_CCP2PR4_POSITION                  equ 0004h
CCP2RL_CCP2PR4_SIZE                      equ 0001h
CCP2RL_CCP2PR4_LENGTH                    equ 0001h
CCP2RL_CCP2PR4_MASK                      equ 0010h
CCP2RL_CCP2PR5_POSN                      equ 0005h
CCP2RL_CCP2PR5_POSITION                  equ 0005h
CCP2RL_CCP2PR5_SIZE                      equ 0001h
CCP2RL_CCP2PR5_LENGTH                    equ 0001h
CCP2RL_CCP2PR5_MASK                      equ 0020h
CCP2RL_CCP2PR6_POSN                      equ 0006h
CCP2RL_CCP2PR6_POSITION                  equ 0006h
CCP2RL_CCP2PR6_SIZE                      equ 0001h
CCP2RL_CCP2PR6_LENGTH                    equ 0001h
CCP2RL_CCP2PR6_MASK                      equ 0040h
CCP2RL_CCP2PR7_POSN                      equ 0007h
CCP2RL_CCP2PR7_POSITION                  equ 0007h
CCP2RL_CCP2PR7_SIZE                      equ 0001h
CCP2RL_CCP2PR7_LENGTH                    equ 0001h
CCP2RL_CCP2PR7_MASK                      equ 0080h

// Register: CCP2RH
#define CCP2RH CCP2RH
CCP2RH                                   equ 0311h
// bitfield definitions
CCP2RH_CCP2PR8_POSN                      equ 0000h
CCP2RH_CCP2PR8_POSITION                  equ 0000h
CCP2RH_CCP2PR8_SIZE                      equ 0001h
CCP2RH_CCP2PR8_LENGTH                    equ 0001h
CCP2RH_CCP2PR8_MASK                      equ 0001h
CCP2RH_CCP2PR9_POSN                      equ 0001h
CCP2RH_CCP2PR9_POSITION                  equ 0001h
CCP2RH_CCP2PR9_SIZE                      equ 0001h
CCP2RH_CCP2PR9_LENGTH                    equ 0001h
CCP2RH_CCP2PR9_MASK                      equ 0002h
CCP2RH_CCP2PR10_POSN                     equ 0002h
CCP2RH_CCP2PR10_POSITION                 equ 0002h
CCP2RH_CCP2PR10_SIZE                     equ 0001h
CCP2RH_CCP2PR10_LENGTH                   equ 0001h
CCP2RH_CCP2PR10_MASK                     equ 0004h
CCP2RH_CCP2PR11_POSN                     equ 0003h
CCP2RH_CCP2PR11_POSITION                 equ 0003h
CCP2RH_CCP2PR11_SIZE                     equ 0001h
CCP2RH_CCP2PR11_LENGTH                   equ 0001h
CCP2RH_CCP2PR11_MASK                     equ 0008h
CCP2RH_CCP2PR12_POSN                     equ 0004h
CCP2RH_CCP2PR12_POSITION                 equ 0004h
CCP2RH_CCP2PR12_SIZE                     equ 0001h
CCP2RH_CCP2PR12_LENGTH                   equ 0001h
CCP2RH_CCP2PR12_MASK                     equ 0010h
CCP2RH_CCP2PR13_POSN                     equ 0005h
CCP2RH_CCP2PR13_POSITION                 equ 0005h
CCP2RH_CCP2PR13_SIZE                     equ 0001h
CCP2RH_CCP2PR13_LENGTH                   equ 0001h
CCP2RH_CCP2PR13_MASK                     equ 0020h
CCP2RH_CCP2PR14_POSN                     equ 0006h
CCP2RH_CCP2PR14_POSITION                 equ 0006h
CCP2RH_CCP2PR14_SIZE                     equ 0001h
CCP2RH_CCP2PR14_LENGTH                   equ 0001h
CCP2RH_CCP2PR14_MASK                     equ 0040h
CCP2RH_CCP2PR15_POSN                     equ 0007h
CCP2RH_CCP2PR15_POSITION                 equ 0007h
CCP2RH_CCP2PR15_SIZE                     equ 0001h
CCP2RH_CCP2PR15_LENGTH                   equ 0001h
CCP2RH_CCP2PR15_MASK                     equ 0080h

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0312h
// bitfield definitions
CCP2CON_MODE0_POSN                       equ 0000h
CCP2CON_MODE0_POSITION                   equ 0000h
CCP2CON_MODE0_SIZE                       equ 0001h
CCP2CON_MODE0_LENGTH                     equ 0001h
CCP2CON_MODE0_MASK                       equ 0001h
CCP2CON_MODE1_POSN                       equ 0001h
CCP2CON_MODE1_POSITION                   equ 0001h
CCP2CON_MODE1_SIZE                       equ 0001h
CCP2CON_MODE1_LENGTH                     equ 0001h
CCP2CON_MODE1_MASK                       equ 0002h
CCP2CON_MODE2_POSN                       equ 0002h
CCP2CON_MODE2_POSITION                   equ 0002h
CCP2CON_MODE2_SIZE                       equ 0001h
CCP2CON_MODE2_LENGTH                     equ 0001h
CCP2CON_MODE2_MASK                       equ 0004h
CCP2CON_MODE3_POSN                       equ 0003h
CCP2CON_MODE3_POSITION                   equ 0003h
CCP2CON_MODE3_SIZE                       equ 0001h
CCP2CON_MODE3_LENGTH                     equ 0001h
CCP2CON_MODE3_MASK                       equ 0008h
CCP2CON_FMT_POSN                         equ 0004h
CCP2CON_FMT_POSITION                     equ 0004h
CCP2CON_FMT_SIZE                         equ 0001h
CCP2CON_FMT_LENGTH                       equ 0001h
CCP2CON_FMT_MASK                         equ 0010h
CCP2CON_OUT_POSN                         equ 0005h
CCP2CON_OUT_POSITION                     equ 0005h
CCP2CON_OUT_SIZE                         equ 0001h
CCP2CON_OUT_LENGTH                       equ 0001h
CCP2CON_OUT_MASK                         equ 0020h
CCP2CON_EN_POSN                          equ 0007h
CCP2CON_EN_POSITION                      equ 0007h
CCP2CON_EN_SIZE                          equ 0001h
CCP2CON_EN_LENGTH                        equ 0001h
CCP2CON_EN_MASK                          equ 0080h

// Register: CCP2CAP
#define CCP2CAP CCP2CAP
CCP2CAP                                  equ 0313h
// bitfield definitions
CCP2CAP_CCP2CAP0_POSN                    equ 0000h
CCP2CAP_CCP2CAP0_POSITION                equ 0000h
CCP2CAP_CCP2CAP0_SIZE                    equ 0001h
CCP2CAP_CCP2CAP0_LENGTH                  equ 0001h
CCP2CAP_CCP2CAP0_MASK                    equ 0001h
CCP2CAP_CCP2CAP1_POSN                    equ 0001h
CCP2CAP_CCP2CAP1_POSITION                equ 0001h
CCP2CAP_CCP2CAP1_SIZE                    equ 0001h
CCP2CAP_CCP2CAP1_LENGTH                  equ 0001h
CCP2CAP_CCP2CAP1_MASK                    equ 0002h
CCP2CAP_CCP2CAP2_POSN                    equ 0002h
CCP2CAP_CCP2CAP2_POSITION                equ 0002h
CCP2CAP_CCP2CAP2_SIZE                    equ 0001h
CCP2CAP_CCP2CAP2_LENGTH                  equ 0001h
CCP2CAP_CCP2CAP2_MASK                    equ 0004h

// Register: SWFRQCON
#define SWFRQCON SWFRQCON
SWFRQCON                                 equ 038Ch
// bitfield definitions
SWFRQCON_SWFRQPS0_POSN                   equ 0000h
SWFRQCON_SWFRQPS0_POSITION               equ 0000h
SWFRQCON_SWFRQPS0_SIZE                   equ 0001h
SWFRQCON_SWFRQPS0_LENGTH                 equ 0001h
SWFRQCON_SWFRQPS0_MASK                   equ 0001h
SWFRQCON_SWFRQPS1_POSN                   equ 0001h
SWFRQCON_SWFRQPS1_POSITION               equ 0001h
SWFRQCON_SWFRQPS1_SIZE                   equ 0001h
SWFRQCON_SWFRQPS1_LENGTH                 equ 0001h
SWFRQCON_SWFRQPS1_MASK                   equ 0002h
SWFRQCON_SWFRQPS2_POSN                   equ 0002h
SWFRQCON_SWFRQPS2_POSITION               equ 0002h
SWFRQCON_SWFRQPS2_SIZE                   equ 0001h
SWFRQCON_SWFRQPS2_LENGTH                 equ 0001h
SWFRQCON_SWFRQPS2_MASK                   equ 0004h
SWFRQCON_PWOUT_POSN                      equ 0003h
SWFRQCON_PWOUT_POSITION                  equ 0003h
SWFRQCON_PWOUT_SIZE                      equ 0001h
SWFRQCON_PWOUT_LENGTH                    equ 0001h
SWFRQCON_PWOUT_MASK                      equ 0008h
SWFRQCON_MANUAL_POSN                     equ 0004h
SWFRQCON_MANUAL_POSITION                 equ 0004h
SWFRQCON_MANUAL_SIZE                     equ 0001h
SWFRQCON_MANUAL_LENGTH                   equ 0001h
SWFRQCON_MANUAL_MASK                     equ 0010h
SWFRQCON_DLLDIS_POSN                     equ 0005h
SWFRQCON_DLLDIS_POSITION                 equ 0005h
SWFRQCON_DLLDIS_SIZE                     equ 0001h
SWFRQCON_DLLDIS_LENGTH                   equ 0001h
SWFRQCON_DLLDIS_MASK                     equ 0020h
SWFRQCON_DITHER_POSN                     equ 0006h
SWFRQCON_DITHER_POSITION                 equ 0006h
SWFRQCON_DITHER_SIZE                     equ 0001h
SWFRQCON_DITHER_LENGTH                   equ 0001h
SWFRQCON_DITHER_MASK                     equ 0040h
SWFRQCON_SWFRQON_POSN                    equ 0007h
SWFRQCON_SWFRQON_POSITION                equ 0007h
SWFRQCON_SWFRQON_SIZE                    equ 0001h
SWFRQCON_SWFRQON_LENGTH                  equ 0001h
SWFRQCON_SWFRQON_MASK                    equ 0080h

// Register: SWFRQPR
#define SWFRQPR SWFRQPR
SWFRQPR                                  equ 038Dh
// bitfield definitions
SWFRQPR_SWFRQPR_POSN                     equ 0000h
SWFRQPR_SWFRQPR_POSITION                 equ 0000h
SWFRQPR_SWFRQPR_SIZE                     equ 0008h
SWFRQPR_SWFRQPR_LENGTH                   equ 0008h
SWFRQPR_SWFRQPR_MASK                     equ 00FFh

// Register: SWFRQ
#define SWFRQ SWFRQ
SWFRQ                                    equ 038Eh
// bitfield definitions
SWFRQ_SWFRQ_POSN                         equ 0000h
SWFRQ_SWFRQ_POSITION                     equ 0000h
SWFRQ_SWFRQ_SIZE                         equ 0008h
SWFRQ_SWFRQ_LENGTH                       equ 0008h
SWFRQ_SWFRQ_MASK                         equ 00FFh

// Register: SWFRQDITHER
#define SWFRQDITHER SWFRQDITHER
SWFRQDITHER                              equ 038Fh
// bitfield definitions
SWFRQDITHER_DITHER_POSN                  equ 0000h
SWFRQDITHER_DITHER_POSITION              equ 0000h
SWFRQDITHER_DITHER_SIZE                  equ 0006h
SWFRQDITHER_DITHER_LENGTH                equ 0006h
SWFRQDITHER_DITHER_MASK                  equ 003Fh

// Register: SWFRQPWH
#define SWFRQPWH SWFRQPWH
SWFRQPWH                                 equ 0390h
// bitfield definitions
SWFRQPWH_SWFRQPW6_POSN                   equ 0000h
SWFRQPWH_SWFRQPW6_POSITION               equ 0000h
SWFRQPWH_SWFRQPW6_SIZE                   equ 0001h
SWFRQPWH_SWFRQPW6_LENGTH                 equ 0001h
SWFRQPWH_SWFRQPW6_MASK                   equ 0001h
SWFRQPWH_SWFRQPW7_POSN                   equ 0001h
SWFRQPWH_SWFRQPW7_POSITION               equ 0001h
SWFRQPWH_SWFRQPW7_SIZE                   equ 0001h
SWFRQPWH_SWFRQPW7_LENGTH                 equ 0001h
SWFRQPWH_SWFRQPW7_MASK                   equ 0002h
SWFRQPWH_SWFRQPW8_POSN                   equ 0002h
SWFRQPWH_SWFRQPW8_POSITION               equ 0002h
SWFRQPWH_SWFRQPW8_SIZE                   equ 0001h
SWFRQPWH_SWFRQPW8_LENGTH                 equ 0001h
SWFRQPWH_SWFRQPW8_MASK                   equ 0004h
SWFRQPWH_SWFRQPW9_POSN                   equ 0003h
SWFRQPWH_SWFRQPW9_POSITION               equ 0003h
SWFRQPWH_SWFRQPW9_SIZE                   equ 0001h
SWFRQPWH_SWFRQPW9_LENGTH                 equ 0001h
SWFRQPWH_SWFRQPW9_MASK                   equ 0008h
SWFRQPWH_SWFRQPW10_POSN                  equ 0004h
SWFRQPWH_SWFRQPW10_POSITION              equ 0004h
SWFRQPWH_SWFRQPW10_SIZE                  equ 0001h
SWFRQPWH_SWFRQPW10_LENGTH                equ 0001h
SWFRQPWH_SWFRQPW10_MASK                  equ 0010h
SWFRQPWH_SWFRQPW11_POSN                  equ 0005h
SWFRQPWH_SWFRQPW11_POSITION              equ 0005h
SWFRQPWH_SWFRQPW11_SIZE                  equ 0001h
SWFRQPWH_SWFRQPW11_LENGTH                equ 0001h
SWFRQPWH_SWFRQPW11_MASK                  equ 0020h
SWFRQPWH_SWFRQPW12_POSN                  equ 0006h
SWFRQPWH_SWFRQPW12_POSITION              equ 0006h
SWFRQPWH_SWFRQPW12_SIZE                  equ 0001h
SWFRQPWH_SWFRQPW12_LENGTH                equ 0001h
SWFRQPWH_SWFRQPW12_MASK                  equ 0040h
SWFRQPWH_SWFRQPW13_POSN                  equ 0007h
SWFRQPWH_SWFRQPW13_POSITION              equ 0007h
SWFRQPWH_SWFRQPW13_SIZE                  equ 0001h
SWFRQPWH_SWFRQPW13_LENGTH                equ 0001h
SWFRQPWH_SWFRQPW13_MASK                  equ 0080h

// Register: SWFRQPWL
#define SWFRQPWL SWFRQPWL
SWFRQPWL                                 equ 0391h
// bitfield definitions
SWFRQPWL_SWFRQPW0_POSN                   equ 0002h
SWFRQPWL_SWFRQPW0_POSITION               equ 0002h
SWFRQPWL_SWFRQPW0_SIZE                   equ 0001h
SWFRQPWL_SWFRQPW0_LENGTH                 equ 0001h
SWFRQPWL_SWFRQPW0_MASK                   equ 0004h
SWFRQPWL_SWFRQPW1_POSN                   equ 0003h
SWFRQPWL_SWFRQPW1_POSITION               equ 0003h
SWFRQPWL_SWFRQPW1_SIZE                   equ 0001h
SWFRQPWL_SWFRQPW1_LENGTH                 equ 0001h
SWFRQPWL_SWFRQPW1_MASK                   equ 0008h
SWFRQPWL_SWFRQPW2_POSN                   equ 0004h
SWFRQPWL_SWFRQPW2_POSITION               equ 0004h
SWFRQPWL_SWFRQPW2_SIZE                   equ 0001h
SWFRQPWL_SWFRQPW2_LENGTH                 equ 0001h
SWFRQPWL_SWFRQPW2_MASK                   equ 0010h
SWFRQPWL_SWFRQPW3_POSN                   equ 0005h
SWFRQPWL_SWFRQPW3_POSITION               equ 0005h
SWFRQPWL_SWFRQPW3_SIZE                   equ 0001h
SWFRQPWL_SWFRQPW3_LENGTH                 equ 0001h
SWFRQPWL_SWFRQPW3_MASK                   equ 0020h
SWFRQPWL_SWFRQPW4_POSN                   equ 0006h
SWFRQPWL_SWFRQPW4_POSITION               equ 0006h
SWFRQPWL_SWFRQPW4_SIZE                   equ 0001h
SWFRQPWL_SWFRQPW4_LENGTH                 equ 0001h
SWFRQPWL_SWFRQPW4_MASK                   equ 0040h
SWFRQPWL_SWFRQPW5_POSN                   equ 0007h
SWFRQPWL_SWFRQPW5_POSITION               equ 0007h
SWFRQPWL_SWFRQPW5_SIZE                   equ 0001h
SWFRQPWL_SWFRQPW5_LENGTH                 equ 0001h
SWFRQPWL_SWFRQPW5_MASK                   equ 0080h

// Register: SWFRQDPS
#define SWFRQDPS SWFRQDPS
SWFRQDPS                                 equ 0392h
// bitfield definitions
SWFRQDPS_DPS0_POSN                       equ 0004h
SWFRQDPS_DPS0_POSITION                   equ 0004h
SWFRQDPS_DPS0_SIZE                       equ 0001h
SWFRQDPS_DPS0_LENGTH                     equ 0001h
SWFRQDPS_DPS0_MASK                       equ 0010h
SWFRQDPS_DPS1_POSN                       equ 0005h
SWFRQDPS_DPS1_POSITION                   equ 0005h
SWFRQDPS_DPS1_SIZE                       equ 0001h
SWFRQDPS_DPS1_LENGTH                     equ 0001h
SWFRQDPS_DPS1_MASK                       equ 0020h
SWFRQDPS_DPS2_POSN                       equ 0006h
SWFRQDPS_DPS2_POSITION                   equ 0006h
SWFRQDPS_DPS2_SIZE                       equ 0001h
SWFRQDPS_DPS2_LENGTH                     equ 0001h
SWFRQDPS_DPS2_MASK                       equ 0040h
SWFRQDPS_DRANGE_POSN                     equ 0007h
SWFRQDPS_DRANGE_POSITION                 equ 0007h
SWFRQDPS_DRANGE_SIZE                     equ 0001h
SWFRQDPS_DRANGE_LENGTH                   equ 0001h
SWFRQDPS_DRANGE_MASK                     equ 0080h

// Register: DRVCON0
#define DRVCON0 DRVCON0
DRVCON0                                  equ 0397h
// bitfield definitions
DRVCON0_DRVMODE0_POSN                    equ 0000h
DRVCON0_DRVMODE0_POSITION                equ 0000h
DRVCON0_DRVMODE0_SIZE                    equ 0001h
DRVCON0_DRVMODE0_LENGTH                  equ 0001h
DRVCON0_DRVMODE0_MASK                    equ 0001h
DRVCON0_DRVMODE1_POSN                    equ 0001h
DRVCON0_DRVMODE1_POSITION                equ 0001h
DRVCON0_DRVMODE1_SIZE                    equ 0001h
DRVCON0_DRVMODE1_LENGTH                  equ 0001h
DRVCON0_DRVMODE1_MASK                    equ 0002h
DRVCON0_DRVMODE2_POSN                    equ 0002h
DRVCON0_DRVMODE2_POSITION                equ 0002h
DRVCON0_DRVMODE2_SIZE                    equ 0001h
DRVCON0_DRVMODE2_LENGTH                  equ 0001h
DRVCON0_DRVMODE2_MASK                    equ 0004h
DRVCON0_DRVCTL_POSN                      equ 0003h
DRVCON0_DRVCTL_POSITION                  equ 0003h
DRVCON0_DRVCTL_SIZE                      equ 0001h
DRVCON0_DRVCTL_LENGTH                    equ 0001h
DRVCON0_DRVCTL_MASK                      equ 0008h
DRVCON0_DTSEL0_POSN                      equ 0004h
DRVCON0_DTSEL0_POSITION                  equ 0004h
DRVCON0_DTSEL0_SIZE                      equ 0001h
DRVCON0_DTSEL0_LENGTH                    equ 0001h
DRVCON0_DTSEL0_MASK                      equ 0010h
DRVCON0_DTSEL1_POSN                      equ 0005h
DRVCON0_DTSEL1_POSITION                  equ 0005h
DRVCON0_DTSEL1_SIZE                      equ 0001h
DRVCON0_DTSEL1_LENGTH                    equ 0001h
DRVCON0_DTSEL1_MASK                      equ 0020h
DRVCON0_LODIS_POSN                       equ 0006h
DRVCON0_LODIS_POSITION                   equ 0006h
DRVCON0_LODIS_SIZE                       equ 0001h
DRVCON0_LODIS_LENGTH                     equ 0001h
DRVCON0_LODIS_MASK                       equ 0040h
DRVCON0_HODIS_POSN                       equ 0007h
DRVCON0_HODIS_POSITION                   equ 0007h
DRVCON0_HODIS_SIZE                       equ 0001h
DRVCON0_HODIS_LENGTH                     equ 0001h
DRVCON0_HODIS_MASK                       equ 0080h

// Register: DRVCON1
#define DRVCON1 DRVCON1
DRVCON1                                  equ 0398h
// bitfield definitions
DRVCON1_IVMUVFEL_POSN                    equ 0000h
DRVCON1_IVMUVFEL_POSITION                equ 0000h
DRVCON1_IVMUVFEL_SIZE                    equ 0001h
DRVCON1_IVMUVFEL_LENGTH                  equ 0001h
DRVCON1_IVMUVFEL_MASK                    equ 0001h
DRVCON1_IVMOVFEH_POSN                    equ 0001h
DRVCON1_IVMOVFEH_POSITION                equ 0001h
DRVCON1_IVMOVFEH_SIZE                    equ 0001h
DRVCON1_IVMOVFEH_LENGTH                  equ 0001h
DRVCON1_IVMOVFEH_MASK                    equ 0002h
DRVCON1_ICMOCFEL_POSN                    equ 0002h
DRVCON1_ICMOCFEL_POSITION                equ 0002h
DRVCON1_ICMOCFEL_SIZE                    equ 0001h
DRVCON1_ICMOCFEL_LENGTH                  equ 0001h
DRVCON1_ICMOCFEL_MASK                    equ 0004h
DRVCON1_OVMUVFEL_POSN                    equ 0003h
DRVCON1_OVMUVFEL_POSITION                equ 0003h
DRVCON1_OVMUVFEL_SIZE                    equ 0001h
DRVCON1_OVMUVFEL_LENGTH                  equ 0001h
DRVCON1_OVMUVFEL_MASK                    equ 0008h
DRVCON1_OVMOVFEL_POSN                    equ 0004h
DRVCON1_OVMOVFEL_POSITION                equ 0004h
DRVCON1_OVMOVFEL_SIZE                    equ 0001h
DRVCON1_OVMOVFEL_LENGTH                  equ 0001h
DRVCON1_OVMOVFEL_MASK                    equ 0010h
DRVCON1_OCMUCFEL_POSN                    equ 0005h
DRVCON1_OCMUCFEL_POSITION                equ 0005h
DRVCON1_OCMUCFEL_SIZE                    equ 0001h
DRVCON1_OCMUCFEL_LENGTH                  equ 0001h
DRVCON1_OCMUCFEL_MASK                    equ 0020h
DRVCON1_OCMOCFEL_POSN                    equ 0006h
DRVCON1_OCMOCFEL_POSITION                equ 0006h
DRVCON1_OCMOCFEL_SIZE                    equ 0001h
DRVCON1_OCMOCFEL_LENGTH                  equ 0001h
DRVCON1_OCMOCFEL_MASK                    equ 0040h
DRVCON1_HOLDEL_POSN                      equ 0007h
DRVCON1_HOLDEL_POSITION                  equ 0007h
DRVCON1_HOLDEL_SIZE                      equ 0001h
DRVCON1_HOLDEL_LENGTH                    equ 0001h
DRVCON1_HOLDEL_MASK                      equ 0080h

// Register: DRVCON2
#define DRVCON2 DRVCON2
DRVCON2                                  equ 0399h
// bitfield definitions
DRVCON2_IVMUVFEH_POSN                    equ 0000h
DRVCON2_IVMUVFEH_POSITION                equ 0000h
DRVCON2_IVMUVFEH_SIZE                    equ 0001h
DRVCON2_IVMUVFEH_LENGTH                  equ 0001h
DRVCON2_IVMUVFEH_MASK                    equ 0001h
DRVCON2_IVMOFEH_POSN                     equ 0001h
DRVCON2_IVMOFEH_POSITION                 equ 0001h
DRVCON2_IVMOFEH_SIZE                     equ 0001h
DRVCON2_IVMOFEH_LENGTH                   equ 0001h
DRVCON2_IVMOFEH_MASK                     equ 0002h
DRVCON2_ICMOCFEH_POSN                    equ 0002h
DRVCON2_ICMOCFEH_POSITION                equ 0002h
DRVCON2_ICMOCFEH_SIZE                    equ 0001h
DRVCON2_ICMOCFEH_LENGTH                  equ 0001h
DRVCON2_ICMOCFEH_MASK                    equ 0004h
DRVCON2_OVMUVFEH_POSN                    equ 0003h
DRVCON2_OVMUVFEH_POSITION                equ 0003h
DRVCON2_OVMUVFEH_SIZE                    equ 0001h
DRVCON2_OVMUVFEH_LENGTH                  equ 0001h
DRVCON2_OVMUVFEH_MASK                    equ 0008h
DRVCON2_OVMOFEH_POSN                     equ 0004h
DRVCON2_OVMOFEH_POSITION                 equ 0004h
DRVCON2_OVMOFEH_SIZE                     equ 0001h
DRVCON2_OVMOFEH_LENGTH                   equ 0001h
DRVCON2_OVMOFEH_MASK                     equ 0010h
DRVCON2_OCMUCFEH_POSN                    equ 0005h
DRVCON2_OCMUCFEH_POSITION                equ 0005h
DRVCON2_OCMUCFEH_SIZE                    equ 0001h
DRVCON2_OCMUCFEH_LENGTH                  equ 0001h
DRVCON2_OCMUCFEH_MASK                    equ 0020h
DRVCON2_OCMOCEH_POSN                     equ 0006h
DRVCON2_OCMOCEH_POSITION                 equ 0006h
DRVCON2_OCMOCEH_SIZE                     equ 0001h
DRVCON2_OCMOCEH_LENGTH                   equ 0001h
DRVCON2_OCMOCEH_MASK                     equ 0040h
DRVCON2_HOLDEH_POSN                      equ 0007h
DRVCON2_HOLDEH_POSITION                  equ 0007h
DRVCON2_HOLDEH_SIZE                      equ 0001h
DRVCON2_HOLDEH_LENGTH                    equ 0001h
DRVCON2_HOLDEH_MASK                      equ 0080h

// Register: DEADCON
#define DEADCON DEADCON
DEADCON                                  equ 039Ah
// bitfield definitions
DEADCON_DTL_POSN                         equ 0000h
DEADCON_DTL_POSITION                     equ 0000h
DEADCON_DTL_SIZE                         equ 0004h
DEADCON_DTL_LENGTH                       equ 0004h
DEADCON_DTL_MASK                         equ 000Fh
DEADCON_DTH_POSN                         equ 0004h
DEADCON_DTH_POSITION                     equ 0004h
DEADCON_DTH_SIZE                         equ 0004h
DEADCON_DTH_LENGTH                       equ 0004h
DEADCON_DTH_MASK                         equ 00F0h

// Register: DEMCON
#define DEMCON DEMCON
DEMCON                                   equ 039Bh
// bitfield definitions
DEMCON_DEMPOL_POSN                       equ 0004h
DEMCON_DEMPOL_POSITION                   equ 0004h
DEMCON_DEMPOL_SIZE                       equ 0001h
DEMCON_DEMPOL_LENGTH                     equ 0001h
DEMCON_DEMPOL_MASK                       equ 0010h
DEMCON_DEMOUT_POSN                       equ 0005h
DEMCON_DEMOUT_POSITION                   equ 0005h
DEMCON_DEMOUT_SIZE                       equ 0001h
DEMCON_DEMOUT_LENGTH                     equ 0001h
DEMCON_DEMOUT_MASK                       equ 0020h
DEMCON_DEMEN_POSN                        equ 0007h
DEMCON_DEMEN_POSITION                    equ 0007h
DEMCON_DEMEN_SIZE                        equ 0001h
DEMCON_DEMEN_LENGTH                      equ 0001h
DEMCON_DEMEN_MASK                        equ 0080h

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 039Ch
// bitfield definitions
FVRCON_FVRINTN_POSN                      equ 0000h
FVRCON_FVRINTN_POSITION                  equ 0000h
FVRCON_FVRINTN_SIZE                      equ 0001h
FVRCON_FVRINTN_LENGTH                    equ 0001h
FVRCON_FVRINTN_MASK                      equ 0001h
FVRCON_FVRINTP_POSN                      equ 0001h
FVRCON_FVRINTP_POSITION                  equ 0001h
FVRCON_FVRINTP_SIZE                      equ 0001h
FVRCON_FVRINTP_LENGTH                    equ 0001h
FVRCON_FVRINTP_MASK                      equ 0002h
FVRCON_FVR2OK_POSN                       equ 0002h
FVRCON_FVR2OK_POSITION                   equ 0002h
FVRCON_FVR2OK_SIZE                       equ 0001h
FVRCON_FVR2OK_LENGTH                     equ 0001h
FVRCON_FVR2OK_MASK                       equ 0004h
FVRCON_FVR1OK_POSN                       equ 0003h
FVRCON_FVR1OK_POSITION                   equ 0003h
FVRCON_FVR1OK_SIZE                       equ 0001h
FVRCON_FVR1OK_LENGTH                     equ 0001h
FVRCON_FVR1OK_MASK                       equ 0008h
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

// Register: TTASLOPE
#define TTASLOPE TTASLOPE
TTASLOPE                                 equ 039Dh
// bitfield definitions
TTASLOPE_MTTAMC_POSN                     equ 0000h
TTASLOPE_MTTAMC_POSITION                 equ 0000h
TTASLOPE_MTTAMC_SIZE                     equ 0008h
TTASLOPE_MTTAMC_LENGTH                   equ 0008h
TTASLOPE_MTTAMC_MASK                     equ 00FFh

// Register: TTAOFFSET
#define TTAOFFSET TTAOFFSET
TTAOFFSET                                equ 039Eh
// bitfield definitions
TTAOFFSET_MTTABC_POSN                    equ 0000h
TTAOFFSET_MTTABC_POSITION                equ 0000h
TTAOFFSET_MTTABC_SIZE                    equ 0008h
TTAOFFSET_MTTABC_LENGTH                  equ 0008h
TTAOFFSET_MTTABC_MASK                    equ 00FFh

// Register: TSTBUFCON
#define TSTBUFCON TSTBUFCON
TSTBUFCON                                equ 039Fh
// bitfield definitions
TSTBUFCON_TSTPT0_POSN                    equ 0000h
TSTBUFCON_TSTPT0_POSITION                equ 0000h
TSTBUFCON_TSTPT0_SIZE                    equ 0001h
TSTBUFCON_TSTPT0_LENGTH                  equ 0001h
TSTBUFCON_TSTPT0_MASK                    equ 0001h
TSTBUFCON_TSTPT1_POSN                    equ 0001h
TSTBUFCON_TSTPT1_POSITION                equ 0001h
TSTBUFCON_TSTPT1_SIZE                    equ 0001h
TSTBUFCON_TSTPT1_LENGTH                  equ 0001h
TSTBUFCON_TSTPT1_MASK                    equ 0002h
TSTBUFCON_SLOT0_POSN                     equ 0002h
TSTBUFCON_SLOT0_POSITION                 equ 0002h
TSTBUFCON_SLOT0_SIZE                     equ 0001h
TSTBUFCON_SLOT0_LENGTH                   equ 0001h
TSTBUFCON_SLOT0_MASK                     equ 0004h
TSTBUFCON_SLOT1_POSN                     equ 0003h
TSTBUFCON_SLOT1_POSITION                 equ 0003h
TSTBUFCON_SLOT1_SIZE                     equ 0001h
TSTBUFCON_SLOT1_LENGTH                   equ 0001h
TSTBUFCON_SLOT1_MASK                     equ 0008h
TSTBUFCON_SLOT2_POSN                     equ 0004h
TSTBUFCON_SLOT2_POSITION                 equ 0004h
TSTBUFCON_SLOT2_SIZE                     equ 0001h
TSTBUFCON_SLOT2_LENGTH                   equ 0001h
TSTBUFCON_SLOT2_MASK                     equ 0010h
TSTBUFCON_SLOT3_POSN                     equ 0005h
TSTBUFCON_SLOT3_POSITION                 equ 0005h
TSTBUFCON_SLOT3_SIZE                     equ 0001h
TSTBUFCON_SLOT3_LENGTH                   equ 0001h
TSTBUFCON_SLOT3_MASK                     equ 0020h
TSTBUFCON_TSTMODE0_POSN                  equ 0006h
TSTBUFCON_TSTMODE0_POSITION              equ 0006h
TSTBUFCON_TSTMODE0_SIZE                  equ 0001h
TSTBUFCON_TSTMODE0_LENGTH                equ 0001h
TSTBUFCON_TSTMODE0_MASK                  equ 0040h
TSTBUFCON_TSTMODE1_POSN                  equ 0007h
TSTBUFCON_TSTMODE1_POSITION              equ 0007h
TSTBUFCON_TSTMODE1_SIZE                  equ 0001h
TSTBUFCON_TSTMODE1_LENGTH                equ 0001h
TSTBUFCON_TSTMODE1_MASK                  equ 0080h

// Register: SCANLADRL
#define SCANLADRL SCANLADRL
SCANLADRL                                equ 040Ch
// bitfield definitions
SCANLADRL_LADRL_POSN                     equ 0000h
SCANLADRL_LADRL_POSITION                 equ 0000h
SCANLADRL_LADRL_SIZE                     equ 0008h
SCANLADRL_LADRL_LENGTH                   equ 0008h
SCANLADRL_LADRL_MASK                     equ 00FFh
SCANLADRL_LADR0_POSN                     equ 0000h
SCANLADRL_LADR0_POSITION                 equ 0000h
SCANLADRL_LADR0_SIZE                     equ 0001h
SCANLADRL_LADR0_LENGTH                   equ 0001h
SCANLADRL_LADR0_MASK                     equ 0001h
SCANLADRL_LADR1_POSN                     equ 0001h
SCANLADRL_LADR1_POSITION                 equ 0001h
SCANLADRL_LADR1_SIZE                     equ 0001h
SCANLADRL_LADR1_LENGTH                   equ 0001h
SCANLADRL_LADR1_MASK                     equ 0002h
SCANLADRL_LADR2_POSN                     equ 0002h
SCANLADRL_LADR2_POSITION                 equ 0002h
SCANLADRL_LADR2_SIZE                     equ 0001h
SCANLADRL_LADR2_LENGTH                   equ 0001h
SCANLADRL_LADR2_MASK                     equ 0004h
SCANLADRL_LADR3_POSN                     equ 0003h
SCANLADRL_LADR3_POSITION                 equ 0003h
SCANLADRL_LADR3_SIZE                     equ 0001h
SCANLADRL_LADR3_LENGTH                   equ 0001h
SCANLADRL_LADR3_MASK                     equ 0008h
SCANLADRL_LADR4_POSN                     equ 0004h
SCANLADRL_LADR4_POSITION                 equ 0004h
SCANLADRL_LADR4_SIZE                     equ 0001h
SCANLADRL_LADR4_LENGTH                   equ 0001h
SCANLADRL_LADR4_MASK                     equ 0010h
SCANLADRL_LADR5_POSN                     equ 0005h
SCANLADRL_LADR5_POSITION                 equ 0005h
SCANLADRL_LADR5_SIZE                     equ 0001h
SCANLADRL_LADR5_LENGTH                   equ 0001h
SCANLADRL_LADR5_MASK                     equ 0020h
SCANLADRL_LADR6_POSN                     equ 0006h
SCANLADRL_LADR6_POSITION                 equ 0006h
SCANLADRL_LADR6_SIZE                     equ 0001h
SCANLADRL_LADR6_LENGTH                   equ 0001h
SCANLADRL_LADR6_MASK                     equ 0040h
SCANLADRL_LADR7_POSN                     equ 0007h
SCANLADRL_LADR7_POSITION                 equ 0007h
SCANLADRL_LADR7_SIZE                     equ 0001h
SCANLADRL_LADR7_LENGTH                   equ 0001h
SCANLADRL_LADR7_MASK                     equ 0080h

// Register: SCANLADRH
#define SCANLADRH SCANLADRH
SCANLADRH                                equ 040Dh
// bitfield definitions
SCANLADRH_LADRH_POSN                     equ 0000h
SCANLADRH_LADRH_POSITION                 equ 0000h
SCANLADRH_LADRH_SIZE                     equ 0008h
SCANLADRH_LADRH_LENGTH                   equ 0008h
SCANLADRH_LADRH_MASK                     equ 00FFh
SCANLADRH_LADR8_POSN                     equ 0000h
SCANLADRH_LADR8_POSITION                 equ 0000h
SCANLADRH_LADR8_SIZE                     equ 0001h
SCANLADRH_LADR8_LENGTH                   equ 0001h
SCANLADRH_LADR8_MASK                     equ 0001h
SCANLADRH_LADR9_POSN                     equ 0001h
SCANLADRH_LADR9_POSITION                 equ 0001h
SCANLADRH_LADR9_SIZE                     equ 0001h
SCANLADRH_LADR9_LENGTH                   equ 0001h
SCANLADRH_LADR9_MASK                     equ 0002h
SCANLADRH_LADR10_POSN                    equ 0002h
SCANLADRH_LADR10_POSITION                equ 0002h
SCANLADRH_LADR10_SIZE                    equ 0001h
SCANLADRH_LADR10_LENGTH                  equ 0001h
SCANLADRH_LADR10_MASK                    equ 0004h
SCANLADRH_LADR11_POSN                    equ 0003h
SCANLADRH_LADR11_POSITION                equ 0003h
SCANLADRH_LADR11_SIZE                    equ 0001h
SCANLADRH_LADR11_LENGTH                  equ 0001h
SCANLADRH_LADR11_MASK                    equ 0008h
SCANLADRH_LADR12_POSN                    equ 0004h
SCANLADRH_LADR12_POSITION                equ 0004h
SCANLADRH_LADR12_SIZE                    equ 0001h
SCANLADRH_LADR12_LENGTH                  equ 0001h
SCANLADRH_LADR12_MASK                    equ 0010h
SCANLADRH_LADR13_POSN                    equ 0005h
SCANLADRH_LADR13_POSITION                equ 0005h
SCANLADRH_LADR13_SIZE                    equ 0001h
SCANLADRH_LADR13_LENGTH                  equ 0001h
SCANLADRH_LADR13_MASK                    equ 0020h
SCANLADRH_LADR14_POSN                    equ 0006h
SCANLADRH_LADR14_POSITION                equ 0006h
SCANLADRH_LADR14_SIZE                    equ 0001h
SCANLADRH_LADR14_LENGTH                  equ 0001h
SCANLADRH_LADR14_MASK                    equ 0040h
SCANLADRH_LADR15_POSN                    equ 0007h
SCANLADRH_LADR15_POSITION                equ 0007h
SCANLADRH_LADR15_SIZE                    equ 0001h
SCANLADRH_LADR15_LENGTH                  equ 0001h
SCANLADRH_LADR15_MASK                    equ 0080h

// Register: SCANHADRL
#define SCANHADRL SCANHADRL
SCANHADRL                                equ 040Eh
// bitfield definitions
SCANHADRL_HADRL_POSN                     equ 0000h
SCANHADRL_HADRL_POSITION                 equ 0000h
SCANHADRL_HADRL_SIZE                     equ 0008h
SCANHADRL_HADRL_LENGTH                   equ 0008h
SCANHADRL_HADRL_MASK                     equ 00FFh
SCANHADRL_HADR0_POSN                     equ 0000h
SCANHADRL_HADR0_POSITION                 equ 0000h
SCANHADRL_HADR0_SIZE                     equ 0001h
SCANHADRL_HADR0_LENGTH                   equ 0001h
SCANHADRL_HADR0_MASK                     equ 0001h
SCANHADRL_HADR1_POSN                     equ 0001h
SCANHADRL_HADR1_POSITION                 equ 0001h
SCANHADRL_HADR1_SIZE                     equ 0001h
SCANHADRL_HADR1_LENGTH                   equ 0001h
SCANHADRL_HADR1_MASK                     equ 0002h
SCANHADRL_HADR2_POSN                     equ 0002h
SCANHADRL_HADR2_POSITION                 equ 0002h
SCANHADRL_HADR2_SIZE                     equ 0001h
SCANHADRL_HADR2_LENGTH                   equ 0001h
SCANHADRL_HADR2_MASK                     equ 0004h
SCANHADRL_HADR3_POSN                     equ 0003h
SCANHADRL_HADR3_POSITION                 equ 0003h
SCANHADRL_HADR3_SIZE                     equ 0001h
SCANHADRL_HADR3_LENGTH                   equ 0001h
SCANHADRL_HADR3_MASK                     equ 0008h
SCANHADRL_HADR4_POSN                     equ 0004h
SCANHADRL_HADR4_POSITION                 equ 0004h
SCANHADRL_HADR4_SIZE                     equ 0001h
SCANHADRL_HADR4_LENGTH                   equ 0001h
SCANHADRL_HADR4_MASK                     equ 0010h
SCANHADRL_HADR5_POSN                     equ 0005h
SCANHADRL_HADR5_POSITION                 equ 0005h
SCANHADRL_HADR5_SIZE                     equ 0001h
SCANHADRL_HADR5_LENGTH                   equ 0001h
SCANHADRL_HADR5_MASK                     equ 0020h
SCANHADRL_HADR6_POSN                     equ 0006h
SCANHADRL_HADR6_POSITION                 equ 0006h
SCANHADRL_HADR6_SIZE                     equ 0001h
SCANHADRL_HADR6_LENGTH                   equ 0001h
SCANHADRL_HADR6_MASK                     equ 0040h
SCANHADRL_HADR7_POSN                     equ 0007h
SCANHADRL_HADR7_POSITION                 equ 0007h
SCANHADRL_HADR7_SIZE                     equ 0001h
SCANHADRL_HADR7_LENGTH                   equ 0001h
SCANHADRL_HADR7_MASK                     equ 0080h

// Register: SCANHADRH
#define SCANHADRH SCANHADRH
SCANHADRH                                equ 040Fh
// bitfield definitions
SCANHADRH_HADRH_POSN                     equ 0000h
SCANHADRH_HADRH_POSITION                 equ 0000h
SCANHADRH_HADRH_SIZE                     equ 0008h
SCANHADRH_HADRH_LENGTH                   equ 0008h
SCANHADRH_HADRH_MASK                     equ 00FFh
SCANHADRH_HADR8_POSN                     equ 0000h
SCANHADRH_HADR8_POSITION                 equ 0000h
SCANHADRH_HADR8_SIZE                     equ 0001h
SCANHADRH_HADR8_LENGTH                   equ 0001h
SCANHADRH_HADR8_MASK                     equ 0001h
SCANHADRH_HADR9_POSN                     equ 0001h
SCANHADRH_HADR9_POSITION                 equ 0001h
SCANHADRH_HADR9_SIZE                     equ 0001h
SCANHADRH_HADR9_LENGTH                   equ 0001h
SCANHADRH_HADR9_MASK                     equ 0002h
SCANHADRH_HADR10_POSN                    equ 0002h
SCANHADRH_HADR10_POSITION                equ 0002h
SCANHADRH_HADR10_SIZE                    equ 0001h
SCANHADRH_HADR10_LENGTH                  equ 0001h
SCANHADRH_HADR10_MASK                    equ 0004h
SCANHADRH_HADR11_POSN                    equ 0003h
SCANHADRH_HADR11_POSITION                equ 0003h
SCANHADRH_HADR11_SIZE                    equ 0001h
SCANHADRH_HADR11_LENGTH                  equ 0001h
SCANHADRH_HADR11_MASK                    equ 0008h
SCANHADRH_HADR12_POSN                    equ 0004h
SCANHADRH_HADR12_POSITION                equ 0004h
SCANHADRH_HADR12_SIZE                    equ 0001h
SCANHADRH_HADR12_LENGTH                  equ 0001h
SCANHADRH_HADR12_MASK                    equ 0010h
SCANHADRH_HADR13_POSN                    equ 0005h
SCANHADRH_HADR13_POSITION                equ 0005h
SCANHADRH_HADR13_SIZE                    equ 0001h
SCANHADRH_HADR13_LENGTH                  equ 0001h
SCANHADRH_HADR13_MASK                    equ 0020h
SCANHADRH_HADR14_POSN                    equ 0006h
SCANHADRH_HADR14_POSITION                equ 0006h
SCANHADRH_HADR14_SIZE                    equ 0001h
SCANHADRH_HADR14_LENGTH                  equ 0001h
SCANHADRH_HADR14_MASK                    equ 0040h
SCANHADRH_HADR15_POSN                    equ 0007h
SCANHADRH_HADR15_POSITION                equ 0007h
SCANHADRH_HADR15_SIZE                    equ 0001h
SCANHADRH_HADR15_LENGTH                  equ 0001h
SCANHADRH_HADR15_MASK                    equ 0080h

// Register: SCANCON0
#define SCANCON0 SCANCON0
SCANCON0                                 equ 0410h
// bitfield definitions
SCANCON0_MODE0_POSN                      equ 0000h
SCANCON0_MODE0_POSITION                  equ 0000h
SCANCON0_MODE0_SIZE                      equ 0001h
SCANCON0_MODE0_LENGTH                    equ 0001h
SCANCON0_MODE0_MASK                      equ 0001h
SCANCON0_MODE1_POSN                      equ 0001h
SCANCON0_MODE1_POSITION                  equ 0001h
SCANCON0_MODE1_SIZE                      equ 0001h
SCANCON0_MODE1_LENGTH                    equ 0001h
SCANCON0_MODE1_MASK                      equ 0002h
SCANCON0_INTM_POSN                       equ 0003h
SCANCON0_INTM_POSITION                   equ 0003h
SCANCON0_INTM_SIZE                       equ 0001h
SCANCON0_INTM_LENGTH                     equ 0001h
SCANCON0_INTM_MASK                       equ 0008h
SCANCON0_INVALID_POSN                    equ 0004h
SCANCON0_INVALID_POSITION                equ 0004h
SCANCON0_INVALID_SIZE                    equ 0001h
SCANCON0_INVALID_LENGTH                  equ 0001h
SCANCON0_INVALID_MASK                    equ 0010h
SCANCON0_BUSY_POSN                       equ 0005h
SCANCON0_BUSY_POSITION                   equ 0005h
SCANCON0_BUSY_SIZE                       equ 0001h
SCANCON0_BUSY_LENGTH                     equ 0001h
SCANCON0_BUSY_MASK                       equ 0020h
SCANCON0_SCANGO_POSN                     equ 0006h
SCANCON0_SCANGO_POSITION                 equ 0006h
SCANCON0_SCANGO_SIZE                     equ 0001h
SCANCON0_SCANGO_LENGTH                   equ 0001h
SCANCON0_SCANGO_MASK                     equ 0040h
SCANCON0_EN_POSN                         equ 0007h
SCANCON0_EN_POSITION                     equ 0007h
SCANCON0_EN_SIZE                         equ 0001h
SCANCON0_EN_LENGTH                       equ 0001h
SCANCON0_EN_MASK                         equ 0080h

// Register: SCANDTRIG
#define SCANDTRIG SCANDTRIG
SCANDTRIG                                equ 0411h
// bitfield definitions
SCANDTRIG_TSEL0_POSN                     equ 0000h
SCANDTRIG_TSEL0_POSITION                 equ 0000h
SCANDTRIG_TSEL0_SIZE                     equ 0001h
SCANDTRIG_TSEL0_LENGTH                   equ 0001h
SCANDTRIG_TSEL0_MASK                     equ 0001h
SCANDTRIG_TSEL1_POSN                     equ 0001h
SCANDTRIG_TSEL1_POSITION                 equ 0001h
SCANDTRIG_TSEL1_SIZE                     equ 0001h
SCANDTRIG_TSEL1_LENGTH                   equ 0001h
SCANDTRIG_TSEL1_MASK                     equ 0002h
SCANDTRIG_TSEL2_POSN                     equ 0002h
SCANDTRIG_TSEL2_POSITION                 equ 0002h
SCANDTRIG_TSEL2_SIZE                     equ 0001h
SCANDTRIG_TSEL2_LENGTH                   equ 0001h
SCANDTRIG_TSEL2_MASK                     equ 0004h

// Register: CRCDATL
#define CRCDATL CRCDATL
CRCDATL                                  equ 0416h
// bitfield definitions
CRCDATL_DATA0_POSN                       equ 0000h
CRCDATL_DATA0_POSITION                   equ 0000h
CRCDATL_DATA0_SIZE                       equ 0001h
CRCDATL_DATA0_LENGTH                     equ 0001h
CRCDATL_DATA0_MASK                       equ 0001h
CRCDATL_DATA1_POSN                       equ 0001h
CRCDATL_DATA1_POSITION                   equ 0001h
CRCDATL_DATA1_SIZE                       equ 0001h
CRCDATL_DATA1_LENGTH                     equ 0001h
CRCDATL_DATA1_MASK                       equ 0002h
CRCDATL_DATA2_POSN                       equ 0002h
CRCDATL_DATA2_POSITION                   equ 0002h
CRCDATL_DATA2_SIZE                       equ 0001h
CRCDATL_DATA2_LENGTH                     equ 0001h
CRCDATL_DATA2_MASK                       equ 0004h
CRCDATL_DATA3_POSN                       equ 0003h
CRCDATL_DATA3_POSITION                   equ 0003h
CRCDATL_DATA3_SIZE                       equ 0001h
CRCDATL_DATA3_LENGTH                     equ 0001h
CRCDATL_DATA3_MASK                       equ 0008h
CRCDATL_DATA4_POSN                       equ 0004h
CRCDATL_DATA4_POSITION                   equ 0004h
CRCDATL_DATA4_SIZE                       equ 0001h
CRCDATL_DATA4_LENGTH                     equ 0001h
CRCDATL_DATA4_MASK                       equ 0010h
CRCDATL_DATA5_POSN                       equ 0005h
CRCDATL_DATA5_POSITION                   equ 0005h
CRCDATL_DATA5_SIZE                       equ 0001h
CRCDATL_DATA5_LENGTH                     equ 0001h
CRCDATL_DATA5_MASK                       equ 0020h
CRCDATL_DATA6_POSN                       equ 0006h
CRCDATL_DATA6_POSITION                   equ 0006h
CRCDATL_DATA6_SIZE                       equ 0001h
CRCDATL_DATA6_LENGTH                     equ 0001h
CRCDATL_DATA6_MASK                       equ 0040h
CRCDATL_DATA7_POSN                       equ 0007h
CRCDATL_DATA7_POSITION                   equ 0007h
CRCDATL_DATA7_SIZE                       equ 0001h
CRCDATL_DATA7_LENGTH                     equ 0001h
CRCDATL_DATA7_MASK                       equ 0080h

// Register: CRCDATH
#define CRCDATH CRCDATH
CRCDATH                                  equ 0417h
// bitfield definitions
CRCDATH_DATA8_POSN                       equ 0000h
CRCDATH_DATA8_POSITION                   equ 0000h
CRCDATH_DATA8_SIZE                       equ 0001h
CRCDATH_DATA8_LENGTH                     equ 0001h
CRCDATH_DATA8_MASK                       equ 0001h
CRCDATH_DATA9_POSN                       equ 0001h
CRCDATH_DATA9_POSITION                   equ 0001h
CRCDATH_DATA9_SIZE                       equ 0001h
CRCDATH_DATA9_LENGTH                     equ 0001h
CRCDATH_DATA9_MASK                       equ 0002h
CRCDATH_DATA10_POSN                      equ 0002h
CRCDATH_DATA10_POSITION                  equ 0002h
CRCDATH_DATA10_SIZE                      equ 0001h
CRCDATH_DATA10_LENGTH                    equ 0001h
CRCDATH_DATA10_MASK                      equ 0004h
CRCDATH_DATA11_POSN                      equ 0003h
CRCDATH_DATA11_POSITION                  equ 0003h
CRCDATH_DATA11_SIZE                      equ 0001h
CRCDATH_DATA11_LENGTH                    equ 0001h
CRCDATH_DATA11_MASK                      equ 0008h
CRCDATH_DATA12_POSN                      equ 0004h
CRCDATH_DATA12_POSITION                  equ 0004h
CRCDATH_DATA12_SIZE                      equ 0001h
CRCDATH_DATA12_LENGTH                    equ 0001h
CRCDATH_DATA12_MASK                      equ 0010h
CRCDATH_DATA13_POSN                      equ 0005h
CRCDATH_DATA13_POSITION                  equ 0005h
CRCDATH_DATA13_SIZE                      equ 0001h
CRCDATH_DATA13_LENGTH                    equ 0001h
CRCDATH_DATA13_MASK                      equ 0020h
CRCDATH_DATA14_POSN                      equ 0006h
CRCDATH_DATA14_POSITION                  equ 0006h
CRCDATH_DATA14_SIZE                      equ 0001h
CRCDATH_DATA14_LENGTH                    equ 0001h
CRCDATH_DATA14_MASK                      equ 0040h
CRCDATH_DATA15_POSN                      equ 0007h
CRCDATH_DATA15_POSITION                  equ 0007h
CRCDATH_DATA15_SIZE                      equ 0001h
CRCDATH_DATA15_LENGTH                    equ 0001h
CRCDATH_DATA15_MASK                      equ 0080h

// Register: CRCACCL
#define CRCACCL CRCACCL
CRCACCL                                  equ 0418h
// bitfield definitions
CRCACCL_ACC0_POSN                        equ 0000h
CRCACCL_ACC0_POSITION                    equ 0000h
CRCACCL_ACC0_SIZE                        equ 0001h
CRCACCL_ACC0_LENGTH                      equ 0001h
CRCACCL_ACC0_MASK                        equ 0001h
CRCACCL_ACC1_POSN                        equ 0001h
CRCACCL_ACC1_POSITION                    equ 0001h
CRCACCL_ACC1_SIZE                        equ 0001h
CRCACCL_ACC1_LENGTH                      equ 0001h
CRCACCL_ACC1_MASK                        equ 0002h
CRCACCL_ACC2_POSN                        equ 0002h
CRCACCL_ACC2_POSITION                    equ 0002h
CRCACCL_ACC2_SIZE                        equ 0001h
CRCACCL_ACC2_LENGTH                      equ 0001h
CRCACCL_ACC2_MASK                        equ 0004h
CRCACCL_ACC3_POSN                        equ 0003h
CRCACCL_ACC3_POSITION                    equ 0003h
CRCACCL_ACC3_SIZE                        equ 0001h
CRCACCL_ACC3_LENGTH                      equ 0001h
CRCACCL_ACC3_MASK                        equ 0008h
CRCACCL_ACC4_POSN                        equ 0004h
CRCACCL_ACC4_POSITION                    equ 0004h
CRCACCL_ACC4_SIZE                        equ 0001h
CRCACCL_ACC4_LENGTH                      equ 0001h
CRCACCL_ACC4_MASK                        equ 0010h
CRCACCL_ACC5_POSN                        equ 0005h
CRCACCL_ACC5_POSITION                    equ 0005h
CRCACCL_ACC5_SIZE                        equ 0001h
CRCACCL_ACC5_LENGTH                      equ 0001h
CRCACCL_ACC5_MASK                        equ 0020h
CRCACCL_ACC6_POSN                        equ 0006h
CRCACCL_ACC6_POSITION                    equ 0006h
CRCACCL_ACC6_SIZE                        equ 0001h
CRCACCL_ACC6_LENGTH                      equ 0001h
CRCACCL_ACC6_MASK                        equ 0040h
CRCACCL_ACC7_POSN                        equ 0007h
CRCACCL_ACC7_POSITION                    equ 0007h
CRCACCL_ACC7_SIZE                        equ 0001h
CRCACCL_ACC7_LENGTH                      equ 0001h
CRCACCL_ACC7_MASK                        equ 0080h

// Register: CRCACCH
#define CRCACCH CRCACCH
CRCACCH                                  equ 0419h
// bitfield definitions
CRCACCH_ACC8_POSN                        equ 0000h
CRCACCH_ACC8_POSITION                    equ 0000h
CRCACCH_ACC8_SIZE                        equ 0001h
CRCACCH_ACC8_LENGTH                      equ 0001h
CRCACCH_ACC8_MASK                        equ 0001h
CRCACCH_ACC9_POSN                        equ 0001h
CRCACCH_ACC9_POSITION                    equ 0001h
CRCACCH_ACC9_SIZE                        equ 0001h
CRCACCH_ACC9_LENGTH                      equ 0001h
CRCACCH_ACC9_MASK                        equ 0002h
CRCACCH_ACC10_POSN                       equ 0002h
CRCACCH_ACC10_POSITION                   equ 0002h
CRCACCH_ACC10_SIZE                       equ 0001h
CRCACCH_ACC10_LENGTH                     equ 0001h
CRCACCH_ACC10_MASK                       equ 0004h
CRCACCH_ACC11_POSN                       equ 0003h
CRCACCH_ACC11_POSITION                   equ 0003h
CRCACCH_ACC11_SIZE                       equ 0001h
CRCACCH_ACC11_LENGTH                     equ 0001h
CRCACCH_ACC11_MASK                       equ 0008h
CRCACCH_ACC12_POSN                       equ 0004h
CRCACCH_ACC12_POSITION                   equ 0004h
CRCACCH_ACC12_SIZE                       equ 0001h
CRCACCH_ACC12_LENGTH                     equ 0001h
CRCACCH_ACC12_MASK                       equ 0010h
CRCACCH_ACC13_POSN                       equ 0005h
CRCACCH_ACC13_POSITION                   equ 0005h
CRCACCH_ACC13_SIZE                       equ 0001h
CRCACCH_ACC13_LENGTH                     equ 0001h
CRCACCH_ACC13_MASK                       equ 0020h
CRCACCH_ACC14_POSN                       equ 0006h
CRCACCH_ACC14_POSITION                   equ 0006h
CRCACCH_ACC14_SIZE                       equ 0001h
CRCACCH_ACC14_LENGTH                     equ 0001h
CRCACCH_ACC14_MASK                       equ 0040h
CRCACCH_ACC15_POSN                       equ 0007h
CRCACCH_ACC15_POSITION                   equ 0007h
CRCACCH_ACC15_SIZE                       equ 0001h
CRCACCH_ACC15_LENGTH                     equ 0001h
CRCACCH_ACC15_MASK                       equ 0080h

// Register: CRCSHIFTL
#define CRCSHIFTL CRCSHIFTL
CRCSHIFTL                                equ 041Ah
// bitfield definitions
CRCSHIFTL_SHFT0_POSN                     equ 0000h
CRCSHIFTL_SHFT0_POSITION                 equ 0000h
CRCSHIFTL_SHFT0_SIZE                     equ 0001h
CRCSHIFTL_SHFT0_LENGTH                   equ 0001h
CRCSHIFTL_SHFT0_MASK                     equ 0001h
CRCSHIFTL_SHFT1_POSN                     equ 0001h
CRCSHIFTL_SHFT1_POSITION                 equ 0001h
CRCSHIFTL_SHFT1_SIZE                     equ 0001h
CRCSHIFTL_SHFT1_LENGTH                   equ 0001h
CRCSHIFTL_SHFT1_MASK                     equ 0002h
CRCSHIFTL_SHFT2_POSN                     equ 0002h
CRCSHIFTL_SHFT2_POSITION                 equ 0002h
CRCSHIFTL_SHFT2_SIZE                     equ 0001h
CRCSHIFTL_SHFT2_LENGTH                   equ 0001h
CRCSHIFTL_SHFT2_MASK                     equ 0004h
CRCSHIFTL_SHFT3_POSN                     equ 0003h
CRCSHIFTL_SHFT3_POSITION                 equ 0003h
CRCSHIFTL_SHFT3_SIZE                     equ 0001h
CRCSHIFTL_SHFT3_LENGTH                   equ 0001h
CRCSHIFTL_SHFT3_MASK                     equ 0008h
CRCSHIFTL_SHFT4_POSN                     equ 0004h
CRCSHIFTL_SHFT4_POSITION                 equ 0004h
CRCSHIFTL_SHFT4_SIZE                     equ 0001h
CRCSHIFTL_SHFT4_LENGTH                   equ 0001h
CRCSHIFTL_SHFT4_MASK                     equ 0010h
CRCSHIFTL_SHFT5_POSN                     equ 0005h
CRCSHIFTL_SHFT5_POSITION                 equ 0005h
CRCSHIFTL_SHFT5_SIZE                     equ 0001h
CRCSHIFTL_SHFT5_LENGTH                   equ 0001h
CRCSHIFTL_SHFT5_MASK                     equ 0020h
CRCSHIFTL_SHFT6_POSN                     equ 0006h
CRCSHIFTL_SHFT6_POSITION                 equ 0006h
CRCSHIFTL_SHFT6_SIZE                     equ 0001h
CRCSHIFTL_SHFT6_LENGTH                   equ 0001h
CRCSHIFTL_SHFT6_MASK                     equ 0040h
CRCSHIFTL_SHFT7_POSN                     equ 0007h
CRCSHIFTL_SHFT7_POSITION                 equ 0007h
CRCSHIFTL_SHFT7_SIZE                     equ 0001h
CRCSHIFTL_SHFT7_LENGTH                   equ 0001h
CRCSHIFTL_SHFT7_MASK                     equ 0080h

// Register: CRCSHIFTH
#define CRCSHIFTH CRCSHIFTH
CRCSHIFTH                                equ 041Bh
// bitfield definitions
CRCSHIFTH_SHFT8_POSN                     equ 0000h
CRCSHIFTH_SHFT8_POSITION                 equ 0000h
CRCSHIFTH_SHFT8_SIZE                     equ 0001h
CRCSHIFTH_SHFT8_LENGTH                   equ 0001h
CRCSHIFTH_SHFT8_MASK                     equ 0001h
CRCSHIFTH_SHFT9_POSN                     equ 0001h
CRCSHIFTH_SHFT9_POSITION                 equ 0001h
CRCSHIFTH_SHFT9_SIZE                     equ 0001h
CRCSHIFTH_SHFT9_LENGTH                   equ 0001h
CRCSHIFTH_SHFT9_MASK                     equ 0002h
CRCSHIFTH_SHFT10_POSN                    equ 0002h
CRCSHIFTH_SHFT10_POSITION                equ 0002h
CRCSHIFTH_SHFT10_SIZE                    equ 0001h
CRCSHIFTH_SHFT10_LENGTH                  equ 0001h
CRCSHIFTH_SHFT10_MASK                    equ 0004h
CRCSHIFTH_SHFT11_POSN                    equ 0003h
CRCSHIFTH_SHFT11_POSITION                equ 0003h
CRCSHIFTH_SHFT11_SIZE                    equ 0001h
CRCSHIFTH_SHFT11_LENGTH                  equ 0001h
CRCSHIFTH_SHFT11_MASK                    equ 0008h
CRCSHIFTH_SHFT12_POSN                    equ 0004h
CRCSHIFTH_SHFT12_POSITION                equ 0004h
CRCSHIFTH_SHFT12_SIZE                    equ 0001h
CRCSHIFTH_SHFT12_LENGTH                  equ 0001h
CRCSHIFTH_SHFT12_MASK                    equ 0010h
CRCSHIFTH_SHFT13_POSN                    equ 0005h
CRCSHIFTH_SHFT13_POSITION                equ 0005h
CRCSHIFTH_SHFT13_SIZE                    equ 0001h
CRCSHIFTH_SHFT13_LENGTH                  equ 0001h
CRCSHIFTH_SHFT13_MASK                    equ 0020h
CRCSHIFTH_SHFT14_POSN                    equ 0006h
CRCSHIFTH_SHFT14_POSITION                equ 0006h
CRCSHIFTH_SHFT14_SIZE                    equ 0001h
CRCSHIFTH_SHFT14_LENGTH                  equ 0001h
CRCSHIFTH_SHFT14_MASK                    equ 0040h
CRCSHIFTH_SHFT15_POSN                    equ 0007h
CRCSHIFTH_SHFT15_POSITION                equ 0007h
CRCSHIFTH_SHFT15_SIZE                    equ 0001h
CRCSHIFTH_SHFT15_LENGTH                  equ 0001h
CRCSHIFTH_SHFT15_MASK                    equ 0080h

// Register: CRCXORL
#define CRCXORL CRCXORL
CRCXORL                                  equ 041Ch
// bitfield definitions
CRCXORL_X1_POSN                          equ 0001h
CRCXORL_X1_POSITION                      equ 0001h
CRCXORL_X1_SIZE                          equ 0001h
CRCXORL_X1_LENGTH                        equ 0001h
CRCXORL_X1_MASK                          equ 0002h
CRCXORL_X2_POSN                          equ 0002h
CRCXORL_X2_POSITION                      equ 0002h
CRCXORL_X2_SIZE                          equ 0001h
CRCXORL_X2_LENGTH                        equ 0001h
CRCXORL_X2_MASK                          equ 0004h
CRCXORL_X3_POSN                          equ 0003h
CRCXORL_X3_POSITION                      equ 0003h
CRCXORL_X3_SIZE                          equ 0001h
CRCXORL_X3_LENGTH                        equ 0001h
CRCXORL_X3_MASK                          equ 0008h
CRCXORL_X4_POSN                          equ 0004h
CRCXORL_X4_POSITION                      equ 0004h
CRCXORL_X4_SIZE                          equ 0001h
CRCXORL_X4_LENGTH                        equ 0001h
CRCXORL_X4_MASK                          equ 0010h
CRCXORL_X5_POSN                          equ 0005h
CRCXORL_X5_POSITION                      equ 0005h
CRCXORL_X5_SIZE                          equ 0001h
CRCXORL_X5_LENGTH                        equ 0001h
CRCXORL_X5_MASK                          equ 0020h
CRCXORL_X6_POSN                          equ 0006h
CRCXORL_X6_POSITION                      equ 0006h
CRCXORL_X6_SIZE                          equ 0001h
CRCXORL_X6_LENGTH                        equ 0001h
CRCXORL_X6_MASK                          equ 0040h
CRCXORL_X7_POSN                          equ 0007h
CRCXORL_X7_POSITION                      equ 0007h
CRCXORL_X7_SIZE                          equ 0001h
CRCXORL_X7_LENGTH                        equ 0001h
CRCXORL_X7_MASK                          equ 0080h

// Register: CRCXORH
#define CRCXORH CRCXORH
CRCXORH                                  equ 041Dh
// bitfield definitions
CRCXORH_X8_POSN                          equ 0000h
CRCXORH_X8_POSITION                      equ 0000h
CRCXORH_X8_SIZE                          equ 0001h
CRCXORH_X8_LENGTH                        equ 0001h
CRCXORH_X8_MASK                          equ 0001h
CRCXORH_X9_POSN                          equ 0001h
CRCXORH_X9_POSITION                      equ 0001h
CRCXORH_X9_SIZE                          equ 0001h
CRCXORH_X9_LENGTH                        equ 0001h
CRCXORH_X9_MASK                          equ 0002h
CRCXORH_X10_POSN                         equ 0002h
CRCXORH_X10_POSITION                     equ 0002h
CRCXORH_X10_SIZE                         equ 0001h
CRCXORH_X10_LENGTH                       equ 0001h
CRCXORH_X10_MASK                         equ 0004h
CRCXORH_X11_POSN                         equ 0003h
CRCXORH_X11_POSITION                     equ 0003h
CRCXORH_X11_SIZE                         equ 0001h
CRCXORH_X11_LENGTH                       equ 0001h
CRCXORH_X11_MASK                         equ 0008h
CRCXORH_X12_POSN                         equ 0004h
CRCXORH_X12_POSITION                     equ 0004h
CRCXORH_X12_SIZE                         equ 0001h
CRCXORH_X12_LENGTH                       equ 0001h
CRCXORH_X12_MASK                         equ 0010h
CRCXORH_X13_POSN                         equ 0005h
CRCXORH_X13_POSITION                     equ 0005h
CRCXORH_X13_SIZE                         equ 0001h
CRCXORH_X13_LENGTH                       equ 0001h
CRCXORH_X13_MASK                         equ 0020h
CRCXORH_X14_POSN                         equ 0006h
CRCXORH_X14_POSITION                     equ 0006h
CRCXORH_X14_SIZE                         equ 0001h
CRCXORH_X14_LENGTH                       equ 0001h
CRCXORH_X14_MASK                         equ 0040h
CRCXORH_X15_POSN                         equ 0007h
CRCXORH_X15_POSITION                     equ 0007h
CRCXORH_X15_SIZE                         equ 0001h
CRCXORH_X15_LENGTH                       equ 0001h
CRCXORH_X15_MASK                         equ 0080h

// Register: CRCCON0
#define CRCCON0 CRCCON0
CRCCON0                                  equ 041Eh
// bitfield definitions
CRCCON0_FULL_POSN                        equ 0000h
CRCCON0_FULL_POSITION                    equ 0000h
CRCCON0_FULL_SIZE                        equ 0001h
CRCCON0_FULL_LENGTH                      equ 0001h
CRCCON0_FULL_MASK                        equ 0001h
CRCCON0_SHIFTM_POSN                      equ 0001h
CRCCON0_SHIFTM_POSITION                  equ 0001h
CRCCON0_SHIFTM_SIZE                      equ 0001h
CRCCON0_SHIFTM_LENGTH                    equ 0001h
CRCCON0_SHIFTM_MASK                      equ 0002h
CRCCON0_ACCM_POSN                        equ 0004h
CRCCON0_ACCM_POSITION                    equ 0004h
CRCCON0_ACCM_SIZE                        equ 0001h
CRCCON0_ACCM_LENGTH                      equ 0001h
CRCCON0_ACCM_MASK                        equ 0010h
CRCCON0_BUSY_POSN                        equ 0005h
CRCCON0_BUSY_POSITION                    equ 0005h
CRCCON0_BUSY_SIZE                        equ 0001h
CRCCON0_BUSY_LENGTH                      equ 0001h
CRCCON0_BUSY_MASK                        equ 0020h
CRCCON0_CRCGO_POSN                       equ 0006h
CRCCON0_CRCGO_POSITION                   equ 0006h
CRCCON0_CRCGO_SIZE                       equ 0001h
CRCCON0_CRCGO_LENGTH                     equ 0001h
CRCCON0_CRCGO_MASK                       equ 0040h
CRCCON0_EN_POSN                          equ 0007h
CRCCON0_EN_POSITION                      equ 0007h
CRCCON0_EN_SIZE                          equ 0001h
CRCCON0_EN_LENGTH                        equ 0001h
CRCCON0_EN_MASK                          equ 0080h
CRCCON0_CRCEN_POSN                       equ 0007h
CRCCON0_CRCEN_POSITION                   equ 0007h
CRCCON0_CRCEN_SIZE                       equ 0001h
CRCCON0_CRCEN_LENGTH                     equ 0001h
CRCCON0_CRCEN_MASK                       equ 0080h

// Register: CRCCON1
#define CRCCON1 CRCCON1
CRCCON1                                  equ 041Fh
// bitfield definitions
CRCCON1_PLEN_POSN                        equ 0000h
CRCCON1_PLEN_POSITION                    equ 0000h
CRCCON1_PLEN_SIZE                        equ 0004h
CRCCON1_PLEN_LENGTH                      equ 0004h
CRCCON1_PLEN_MASK                        equ 000Fh
CRCCON1_DLEN_POSN                        equ 0004h
CRCCON1_DLEN_POSITION                    equ 0004h
CRCCON1_DLEN_SIZE                        equ 0004h
CRCCON1_DLEN_LENGTH                      equ 0004h
CRCCON1_DLEN_MASK                        equ 00F0h
CRCCON1_PLEN0_POSN                       equ 0000h
CRCCON1_PLEN0_POSITION                   equ 0000h
CRCCON1_PLEN0_SIZE                       equ 0001h
CRCCON1_PLEN0_LENGTH                     equ 0001h
CRCCON1_PLEN0_MASK                       equ 0001h
CRCCON1_PLEN1_POSN                       equ 0001h
CRCCON1_PLEN1_POSITION                   equ 0001h
CRCCON1_PLEN1_SIZE                       equ 0001h
CRCCON1_PLEN1_LENGTH                     equ 0001h
CRCCON1_PLEN1_MASK                       equ 0002h
CRCCON1_PLEN2_POSN                       equ 0002h
CRCCON1_PLEN2_POSITION                   equ 0002h
CRCCON1_PLEN2_SIZE                       equ 0001h
CRCCON1_PLEN2_LENGTH                     equ 0001h
CRCCON1_PLEN2_MASK                       equ 0004h
CRCCON1_PLEN3_POSN                       equ 0003h
CRCCON1_PLEN3_POSITION                   equ 0003h
CRCCON1_PLEN3_SIZE                       equ 0001h
CRCCON1_PLEN3_LENGTH                     equ 0001h
CRCCON1_PLEN3_MASK                       equ 0008h
CRCCON1_DLEN0_POSN                       equ 0004h
CRCCON1_DLEN0_POSITION                   equ 0004h
CRCCON1_DLEN0_SIZE                       equ 0001h
CRCCON1_DLEN0_LENGTH                     equ 0001h
CRCCON1_DLEN0_MASK                       equ 0010h
CRCCON1_DLEN1_POSN                       equ 0005h
CRCCON1_DLEN1_POSITION                   equ 0005h
CRCCON1_DLEN1_SIZE                       equ 0001h
CRCCON1_DLEN1_LENGTH                     equ 0001h
CRCCON1_DLEN1_MASK                       equ 0020h
CRCCON1_DLEN2_POSN                       equ 0006h
CRCCON1_DLEN2_POSITION                   equ 0006h
CRCCON1_DLEN2_SIZE                       equ 0001h
CRCCON1_DLEN2_LENGTH                     equ 0001h
CRCCON1_DLEN2_MASK                       equ 0040h
CRCCON1_DLEN3_POSN                       equ 0007h
CRCCON1_DLEN3_POSITION                   equ 0007h
CRCCON1_DLEN3_SIZE                       equ 0001h
CRCCON1_DLEN3_LENGTH                     equ 0001h
CRCCON1_DLEN3_MASK                       equ 0080h

// Register: IVMRAWRESL
#define IVMRAWRESL IVMRAWRESL
IVMRAWRESL                               equ 050Dh
// bitfield definitions
IVMRAWRESL_AD0_POSN                      equ 0000h
IVMRAWRESL_AD0_POSITION                  equ 0000h
IVMRAWRESL_AD0_SIZE                      equ 0001h
IVMRAWRESL_AD0_LENGTH                    equ 0001h
IVMRAWRESL_AD0_MASK                      equ 0001h
IVMRAWRESL_AD1_POSN                      equ 0001h
IVMRAWRESL_AD1_POSITION                  equ 0001h
IVMRAWRESL_AD1_SIZE                      equ 0001h
IVMRAWRESL_AD1_LENGTH                    equ 0001h
IVMRAWRESL_AD1_MASK                      equ 0002h
IVMRAWRESL_AD2_POSN                      equ 0002h
IVMRAWRESL_AD2_POSITION                  equ 0002h
IVMRAWRESL_AD2_SIZE                      equ 0001h
IVMRAWRESL_AD2_LENGTH                    equ 0001h
IVMRAWRESL_AD2_MASK                      equ 0004h
IVMRAWRESL_AD3_POSN                      equ 0003h
IVMRAWRESL_AD3_POSITION                  equ 0003h
IVMRAWRESL_AD3_SIZE                      equ 0001h
IVMRAWRESL_AD3_LENGTH                    equ 0001h
IVMRAWRESL_AD3_MASK                      equ 0008h
IVMRAWRESL_AD4_POSN                      equ 0004h
IVMRAWRESL_AD4_POSITION                  equ 0004h
IVMRAWRESL_AD4_SIZE                      equ 0001h
IVMRAWRESL_AD4_LENGTH                    equ 0001h
IVMRAWRESL_AD4_MASK                      equ 0010h
IVMRAWRESL_AD5_POSN                      equ 0005h
IVMRAWRESL_AD5_POSITION                  equ 0005h
IVMRAWRESL_AD5_SIZE                      equ 0001h
IVMRAWRESL_AD5_LENGTH                    equ 0001h
IVMRAWRESL_AD5_MASK                      equ 0020h
IVMRAWRESL_AD6_POSN                      equ 0006h
IVMRAWRESL_AD6_POSITION                  equ 0006h
IVMRAWRESL_AD6_SIZE                      equ 0001h
IVMRAWRESL_AD6_LENGTH                    equ 0001h
IVMRAWRESL_AD6_MASK                      equ 0040h
IVMRAWRESL_AD7_POSN                      equ 0007h
IVMRAWRESL_AD7_POSITION                  equ 0007h
IVMRAWRESL_AD7_SIZE                      equ 0001h
IVMRAWRESL_AD7_LENGTH                    equ 0001h
IVMRAWRESL_AD7_MASK                      equ 0080h

// Register: IVMRAWRESH
#define IVMRAWRESH IVMRAWRESH
IVMRAWRESH                               equ 050Eh
// bitfield definitions
IVMRAWRESH_AD8_POSN                      equ 0000h
IVMRAWRESH_AD8_POSITION                  equ 0000h
IVMRAWRESH_AD8_SIZE                      equ 0001h
IVMRAWRESH_AD8_LENGTH                    equ 0001h
IVMRAWRESH_AD8_MASK                      equ 0001h
IVMRAWRESH_AD9_POSN                      equ 0001h
IVMRAWRESH_AD9_POSITION                  equ 0001h
IVMRAWRESH_AD9_SIZE                      equ 0001h
IVMRAWRESH_AD9_LENGTH                    equ 0001h
IVMRAWRESH_AD9_MASK                      equ 0002h

// Register: IVMCON0
#define IVMCON0 IVMCON0
IVMCON0                                  equ 050Fh
// bitfield definitions
IVMCON0_IVMON_POSN                       equ 0000h
IVMCON0_IVMON_POSITION                   equ 0000h
IVMCON0_IVMON_SIZE                       equ 0001h
IVMCON0_IVMON_LENGTH                     equ 0001h
IVMCON0_IVMON_MASK                       equ 0001h
IVMCON0_GOnDONE_POSN                     equ 0001h
IVMCON0_GOnDONE_POSITION                 equ 0001h
IVMCON0_GOnDONE_SIZE                     equ 0001h
IVMCON0_GOnDONE_LENGTH                   equ 0001h
IVMCON0_GOnDONE_MASK                     equ 0002h
IVMCON0_IVMCTS_POSN                      equ 0003h
IVMCON0_IVMCTS_POSITION                  equ 0003h
IVMCON0_IVMCTS_SIZE                      equ 0001h
IVMCON0_IVMCTS_LENGTH                    equ 0001h
IVMCON0_IVMCTS_MASK                      equ 0008h
IVMCON0_IVMLT0_POSN                      equ 0005h
IVMCON0_IVMLT0_POSITION                  equ 0005h
IVMCON0_IVMLT0_SIZE                      equ 0001h
IVMCON0_IVMLT0_LENGTH                    equ 0001h
IVMCON0_IVMLT0_MASK                      equ 0020h
IVMCON0_IVMLT1_POSN                      equ 0006h
IVMCON0_IVMLT1_POSITION                  equ 0006h
IVMCON0_IVMLT1_SIZE                      equ 0001h
IVMCON0_IVMLT1_LENGTH                    equ 0001h
IVMCON0_IVMLT1_MASK                      equ 0040h
IVMCON0_IVMLT2_POSN                      equ 0007h
IVMCON0_IVMLT2_POSITION                  equ 0007h
IVMCON0_IVMLT2_SIZE                      equ 0001h
IVMCON0_IVMLT2_LENGTH                    equ 0001h
IVMCON0_IVMLT2_MASK                      equ 0080h

// Register: IVMCON1
#define IVMCON1 IVMCON1
IVMCON1                                  equ 0510h
// bitfield definitions
IVMCON1_IVMOVFINT_POSN                   equ 0002h
IVMCON1_IVMOVFINT_POSITION               equ 0002h
IVMCON1_IVMOVFINT_SIZE                   equ 0001h
IVMCON1_IVMOVFINT_LENGTH                 equ 0001h
IVMCON1_IVMOVFINT_MASK                   equ 0004h
IVMCON1_IVMOVRINT_POSN                   equ 0003h
IVMCON1_IVMOVRINT_POSITION               equ 0003h
IVMCON1_IVMOVRINT_SIZE                   equ 0001h
IVMCON1_IVMOVRINT_LENGTH                 equ 0001h
IVMCON1_IVMOVRINT_MASK                   equ 0008h
IVMCON1_IVMOVLAT_POSN                    equ 0004h
IVMCON1_IVMOVLAT_POSITION                equ 0004h
IVMCON1_IVMOVLAT_SIZE                    equ 0001h
IVMCON1_IVMOVLAT_LENGTH                  equ 0001h
IVMCON1_IVMOVLAT_MASK                    equ 0010h
IVMCON1_IVMOVCNT0_POSN                   equ 0005h
IVMCON1_IVMOVCNT0_POSITION               equ 0005h
IVMCON1_IVMOVCNT0_SIZE                   equ 0001h
IVMCON1_IVMOVCNT0_LENGTH                 equ 0001h
IVMCON1_IVMOVCNT0_MASK                   equ 0020h
IVMCON1_IVMOVCNT1_POSN                   equ 0006h
IVMCON1_IVMOVCNT1_POSITION               equ 0006h
IVMCON1_IVMOVCNT1_SIZE                   equ 0001h
IVMCON1_IVMOVCNT1_LENGTH                 equ 0001h
IVMCON1_IVMOVCNT1_MASK                   equ 0040h
IVMCON1_IVMOVCNT2_POSN                   equ 0007h
IVMCON1_IVMOVCNT2_POSITION               equ 0007h
IVMCON1_IVMOVCNT2_SIZE                   equ 0001h
IVMCON1_IVMOVCNT2_LENGTH                 equ 0001h
IVMCON1_IVMOVCNT2_MASK                   equ 0080h

// Register: IVMCON2
#define IVMCON2 IVMCON2
IVMCON2                                  equ 0511h
// bitfield definitions
IVMCON2_IVMUVFINT_POSN                   equ 0000h
IVMCON2_IVMUVFINT_POSITION               equ 0000h
IVMCON2_IVMUVFINT_SIZE                   equ 0001h
IVMCON2_IVMUVFINT_LENGTH                 equ 0001h
IVMCON2_IVMUVFINT_MASK                   equ 0001h
IVMCON2_IVMUVRINT_POSN                   equ 0001h
IVMCON2_IVMUVRINT_POSITION               equ 0001h
IVMCON2_IVMUVRINT_SIZE                   equ 0001h
IVMCON2_IVMUVRINT_LENGTH                 equ 0001h
IVMCON2_IVMUVRINT_MASK                   equ 0002h
IVMCON2_IVMUVLAT_POSN                    equ 0004h
IVMCON2_IVMUVLAT_POSITION                equ 0004h
IVMCON2_IVMUVLAT_SIZE                    equ 0001h
IVMCON2_IVMUVLAT_LENGTH                  equ 0001h
IVMCON2_IVMUVLAT_MASK                    equ 0010h
IVMCON2_IVMUVCNT0_POSN                   equ 0005h
IVMCON2_IVMUVCNT0_POSITION               equ 0005h
IVMCON2_IVMUVCNT0_SIZE                   equ 0001h
IVMCON2_IVMUVCNT0_LENGTH                 equ 0001h
IVMCON2_IVMUVCNT0_MASK                   equ 0020h
IVMCON2_IVMUVCNT1_POSN                   equ 0006h
IVMCON2_IVMUVCNT1_POSITION               equ 0006h
IVMCON2_IVMUVCNT1_SIZE                   equ 0001h
IVMCON2_IVMUVCNT1_LENGTH                 equ 0001h
IVMCON2_IVMUVCNT1_MASK                   equ 0040h
IVMCON2_IVMUVCNT2_POSN                   equ 0007h
IVMCON2_IVMUVCNT2_POSITION               equ 0007h
IVMCON2_IVMUVCNT2_SIZE                   equ 0001h
IVMCON2_IVMUVCNT2_LENGTH                 equ 0001h
IVMCON2_IVMUVCNT2_MASK                   equ 0080h

// Register: ICMCON1
#define ICMCON1 ICMCON1
ICMCON1                                  equ 0512h
// bitfield definitions
ICMCON1_ICMOCRINT_POSN                   equ 0003h
ICMCON1_ICMOCRINT_POSITION               equ 0003h
ICMCON1_ICMOCRINT_SIZE                   equ 0001h
ICMCON1_ICMOCRINT_LENGTH                 equ 0001h
ICMCON1_ICMOCRINT_MASK                   equ 0008h
ICMCON1_ICMOCLAT_POSN                    equ 0004h
ICMCON1_ICMOCLAT_POSITION                equ 0004h
ICMCON1_ICMOCLAT_SIZE                    equ 0001h
ICMCON1_ICMOCLAT_LENGTH                  equ 0001h
ICMCON1_ICMOCLAT_MASK                    equ 0010h
ICMCON1_ICMOCCNT0_POSN                   equ 0005h
ICMCON1_ICMOCCNT0_POSITION               equ 0005h
ICMCON1_ICMOCCNT0_SIZE                   equ 0001h
ICMCON1_ICMOCCNT0_LENGTH                 equ 0001h
ICMCON1_ICMOCCNT0_MASK                   equ 0020h
ICMCON1_ICMOCCNT1_POSN                   equ 0006h
ICMCON1_ICMOCCNT1_POSITION               equ 0006h
ICMCON1_ICMOCCNT1_SIZE                   equ 0001h
ICMCON1_ICMOCCNT1_LENGTH                 equ 0001h
ICMCON1_ICMOCCNT1_MASK                   equ 0040h
ICMCON1_ICMOCCNT2_POSN                   equ 0007h
ICMCON1_ICMOCCNT2_POSITION               equ 0007h
ICMCON1_ICMOCCNT2_SIZE                   equ 0001h
ICMCON1_ICMOCCNT2_LENGTH                 equ 0001h
ICMCON1_ICMOCCNT2_MASK                   equ 0080h

// Register: IVMUVR
#define IVMUVR IVMUVR
IVMUVR                                   equ 0513h
// bitfield definitions
IVMUVR_IVMUVR_POSN                       equ 0000h
IVMUVR_IVMUVR_POSITION                   equ 0000h
IVMUVR_IVMUVR_SIZE                       equ 0008h
IVMUVR_IVMUVR_LENGTH                     equ 0008h
IVMUVR_IVMUVR_MASK                       equ 00FFh

// Register: IVMUVF
#define IVMUVF IVMUVF
IVMUVF                                   equ 0514h
// bitfield definitions
IVMUVF_IVMUVF_POSN                       equ 0000h
IVMUVF_IVMUVF_POSITION                   equ 0000h
IVMUVF_IVMUVF_SIZE                       equ 0008h
IVMUVF_IVMUVF_LENGTH                     equ 0008h
IVMUVF_IVMUVF_MASK                       equ 00FFh

// Register: IVMOVR
#define IVMOVR IVMOVR
IVMOVR                                   equ 0515h
// bitfield definitions
IVMOVR_IVMOVR_POSN                       equ 0000h
IVMOVR_IVMOVR_POSITION                   equ 0000h
IVMOVR_IVMOVR_SIZE                       equ 0008h
IVMOVR_IVMOVR_LENGTH                     equ 0008h
IVMOVR_IVMOVR_MASK                       equ 00FFh

// Register: IVMOVF
#define IVMOVF IVMOVF
IVMOVF                                   equ 0516h
// bitfield definitions
IVMOVF_IVMOVF_POSN                       equ 0000h
IVMOVF_IVMOVF_POSITION                   equ 0000h
IVMOVF_IVMOVF_SIZE                       equ 0008h
IVMOVF_IVMOVF_LENGTH                     equ 0008h
IVMOVF_IVMOVF_MASK                       equ 00FFh

// Register: IVMOVUVOUT
#define IVMOVUVOUT IVMOVUVOUT
IVMOVUVOUT                               equ 0517h
// bitfield definitions
IVMOVUVOUT_MIVMUVF_POSN                  equ 0000h
IVMOVUVOUT_MIVMUVF_POSITION              equ 0000h
IVMOVUVOUT_MIVMUVF_SIZE                  equ 0001h
IVMOVUVOUT_MIVMUVF_LENGTH                equ 0001h
IVMOVUVOUT_MIVMUVF_MASK                  equ 0001h
IVMOVUVOUT_MIVMUVR_POSN                  equ 0001h
IVMOVUVOUT_MIVMUVR_POSITION              equ 0001h
IVMOVUVOUT_MIVMUVR_SIZE                  equ 0001h
IVMOVUVOUT_MIVMUVR_LENGTH                equ 0001h
IVMOVUVOUT_MIVMUVR_MASK                  equ 0002h
IVMOVUVOUT_MIVMOVF_POSN                  equ 0002h
IVMOVUVOUT_MIVMOVF_POSITION              equ 0002h
IVMOVUVOUT_MIVMOVF_SIZE                  equ 0001h
IVMOVUVOUT_MIVMOVF_LENGTH                equ 0001h
IVMOVUVOUT_MIVMOVF_MASK                  equ 0004h
IVMOVUVOUT_MIVMOVR_POSN                  equ 0003h
IVMOVUVOUT_MIVMOVR_POSITION              equ 0003h
IVMOVUVOUT_MIVMOVR_SIZE                  equ 0001h
IVMOVUVOUT_MIVMOVR_LENGTH                equ 0001h
IVMOVUVOUT_MIVMOVR_MASK                  equ 0008h
IVMOVUVOUT_IVMUV_POSN                    equ 0004h
IVMOVUVOUT_IVMUV_POSITION                equ 0004h
IVMOVUVOUT_IVMUV_SIZE                    equ 0001h
IVMOVUVOUT_IVMUV_LENGTH                  equ 0001h
IVMOVUVOUT_IVMUV_MASK                    equ 0010h
IVMOVUVOUT_IVMOV_POSN                    equ 0005h
IVMOVUVOUT_IVMOV_POSITION                equ 0005h
IVMOVUVOUT_IVMOV_SIZE                    equ 0001h
IVMOVUVOUT_IVMOV_LENGTH                  equ 0001h
IVMOVUVOUT_IVMOV_MASK                    equ 0020h

// Register: IVMCORRESL
#define IVMCORRESL IVMCORRESL
IVMCORRESL                               equ 0518h
// bitfield definitions
IVMCORRESL_IVM0_POSN                     equ 0006h
IVMCORRESL_IVM0_POSITION                 equ 0006h
IVMCORRESL_IVM0_SIZE                     equ 0001h
IVMCORRESL_IVM0_LENGTH                   equ 0001h
IVMCORRESL_IVM0_MASK                     equ 0040h
IVMCORRESL_IVM1_POSN                     equ 0007h
IVMCORRESL_IVM1_POSITION                 equ 0007h
IVMCORRESL_IVM1_SIZE                     equ 0001h
IVMCORRESL_IVM1_LENGTH                   equ 0001h
IVMCORRESL_IVM1_MASK                     equ 0080h

// Register: IVMCORRESH
#define IVMCORRESH IVMCORRESH
IVMCORRESH                               equ 0519h
// bitfield definitions
IVMCORRESH_IVM2_POSN                     equ 0000h
IVMCORRESH_IVM2_POSITION                 equ 0000h
IVMCORRESH_IVM2_SIZE                     equ 0001h
IVMCORRESH_IVM2_LENGTH                   equ 0001h
IVMCORRESH_IVM2_MASK                     equ 0001h
IVMCORRESH_IVM3_POSN                     equ 0001h
IVMCORRESH_IVM3_POSITION                 equ 0001h
IVMCORRESH_IVM3_SIZE                     equ 0001h
IVMCORRESH_IVM3_LENGTH                   equ 0001h
IVMCORRESH_IVM3_MASK                     equ 0002h
IVMCORRESH_IVM4_POSN                     equ 0002h
IVMCORRESH_IVM4_POSITION                 equ 0002h
IVMCORRESH_IVM4_SIZE                     equ 0001h
IVMCORRESH_IVM4_LENGTH                   equ 0001h
IVMCORRESH_IVM4_MASK                     equ 0004h
IVMCORRESH_IVM5_POSN                     equ 0003h
IVMCORRESH_IVM5_POSITION                 equ 0003h
IVMCORRESH_IVM5_SIZE                     equ 0001h
IVMCORRESH_IVM5_LENGTH                   equ 0001h
IVMCORRESH_IVM5_MASK                     equ 0008h
IVMCORRESH_IVM6_POSN                     equ 0004h
IVMCORRESH_IVM6_POSITION                 equ 0004h
IVMCORRESH_IVM6_SIZE                     equ 0001h
IVMCORRESH_IVM6_LENGTH                   equ 0001h
IVMCORRESH_IVM6_MASK                     equ 0010h
IVMCORRESH_IVM7_POSN                     equ 0005h
IVMCORRESH_IVM7_POSITION                 equ 0005h
IVMCORRESH_IVM7_SIZE                     equ 0001h
IVMCORRESH_IVM7_LENGTH                   equ 0001h
IVMCORRESH_IVM7_MASK                     equ 0020h
IVMCORRESH_IVM8_POSN                     equ 0006h
IVMCORRESH_IVM8_POSITION                 equ 0006h
IVMCORRESH_IVM8_SIZE                     equ 0001h
IVMCORRESH_IVM8_LENGTH                   equ 0001h
IVMCORRESH_IVM8_MASK                     equ 0040h
IVMCORRESH_IVM9_POSN                     equ 0007h
IVMCORRESH_IVM9_POSITION                 equ 0007h
IVMCORRESH_IVM9_SIZE                     equ 0001h
IVMCORRESH_IVM9_LENGTH                   equ 0001h
IVMCORRESH_IVM9_MASK                     equ 0080h

// Register: ICMOCCON
#define ICMOCCON ICMOCCON
ICMOCCON                                 equ 051Ah
// bitfield definitions
ICMOCCON_ICMOCSEL0_POSN                  equ 0000h
ICMOCCON_ICMOCSEL0_POSITION              equ 0000h
ICMOCCON_ICMOCSEL0_SIZE                  equ 0001h
ICMOCCON_ICMOCSEL0_LENGTH                equ 0001h
ICMOCCON_ICMOCSEL0_MASK                  equ 0001h
ICMOCCON_ICMOCSEL1_POSN                  equ 0001h
ICMOCCON_ICMOCSEL1_POSITION              equ 0001h
ICMOCCON_ICMOCSEL1_SIZE                  equ 0001h
ICMOCCON_ICMOCSEL1_LENGTH                equ 0001h
ICMOCCON_ICMOCSEL1_MASK                  equ 0002h
ICMOCCON_ICMOCSEL2_POSN                  equ 0002h
ICMOCCON_ICMOCSEL2_POSITION              equ 0002h
ICMOCCON_ICMOCSEL2_SIZE                  equ 0001h
ICMOCCON_ICMOCSEL2_LENGTH                equ 0001h
ICMOCCON_ICMOCSEL2_MASK                  equ 0004h
ICMOCCON_ICMOCSEL3_POSN                  equ 0003h
ICMOCCON_ICMOCSEL3_POSITION              equ 0003h
ICMOCCON_ICMOCSEL3_SIZE                  equ 0001h
ICMOCCON_ICMOCSEL3_LENGTH                equ 0001h
ICMOCCON_ICMOCSEL3_MASK                  equ 0008h
ICMOCCON_ICMOCSEL4_POSN                  equ 0004h
ICMOCCON_ICMOCSEL4_POSITION              equ 0004h
ICMOCCON_ICMOCSEL4_SIZE                  equ 0001h
ICMOCCON_ICMOCSEL4_LENGTH                equ 0001h
ICMOCCON_ICMOCSEL4_MASK                  equ 0010h
ICMOCCON_ICMOC_POSN                      equ 0006h
ICMOCCON_ICMOC_POSITION                  equ 0006h
ICMOCCON_ICMOC_SIZE                      equ 0001h
ICMOCCON_ICMOC_LENGTH                    equ 0001h
ICMOCCON_ICMOC_MASK                      equ 0040h
ICMOCCON_ICMOCON_POSN                    equ 0007h
ICMOCCON_ICMOCON_POSITION                equ 0007h
ICMOCCON_ICMOCON_SIZE                    equ 0001h
ICMOCCON_ICMOCON_LENGTH                  equ 0001h
ICMOCCON_ICMOCON_MASK                    equ 0080h

// Register: ICMOFF
#define ICMOFF ICMOFF
ICMOFF                                   equ 051Bh
// bitfield definitions
ICMOFF_MICMOC0_POSN                      equ 0000h
ICMOFF_MICMOC0_POSITION                  equ 0000h
ICMOFF_MICMOC0_SIZE                      equ 0001h
ICMOFF_MICMOC0_LENGTH                    equ 0001h
ICMOFF_MICMOC0_MASK                      equ 0001h
ICMOFF_MICMOC1_POSN                      equ 0001h
ICMOFF_MICMOC1_POSITION                  equ 0001h
ICMOFF_MICMOC1_SIZE                      equ 0001h
ICMOFF_MICMOC1_LENGTH                    equ 0001h
ICMOFF_MICMOC1_MASK                      equ 0002h
ICMOFF_MICMOC2_POSN                      equ 0002h
ICMOFF_MICMOC2_POSITION                  equ 0002h
ICMOFF_MICMOC2_SIZE                      equ 0001h
ICMOFF_MICMOC2_LENGTH                    equ 0001h
ICMOFF_MICMOC2_MASK                      equ 0004h
ICMOFF_MICMOC3_POSN                      equ 0003h
ICMOFF_MICMOC3_POSITION                  equ 0003h
ICMOFF_MICMOC3_SIZE                      equ 0001h
ICMOFF_MICMOC3_LENGTH                    equ 0001h
ICMOFF_MICMOC3_MASK                      equ 0008h
ICMOFF_MICMOC4_POSN                      equ 0004h
ICMOFF_MICMOC4_POSITION                  equ 0004h
ICMOFF_MICMOC4_SIZE                      equ 0001h
ICMOFF_MICMOC4_LENGTH                    equ 0001h
ICMOFF_MICMOC4_MASK                      equ 0010h

// Register: ICMGAIN
#define ICMGAIN ICMGAIN
ICMGAIN                                  equ 051Ch
// bitfield definitions
ICMGAIN_MICMGC0_POSN                     equ 0000h
ICMGAIN_MICMGC0_POSITION                 equ 0000h
ICMGAIN_MICMGC0_SIZE                     equ 0001h
ICMGAIN_MICMGC0_LENGTH                   equ 0001h
ICMGAIN_MICMGC0_MASK                     equ 0001h
ICMGAIN_MICMGC1_POSN                     equ 0001h
ICMGAIN_MICMGC1_POSITION                 equ 0001h
ICMGAIN_MICMGC1_SIZE                     equ 0001h
ICMGAIN_MICMGC1_LENGTH                   equ 0001h
ICMGAIN_MICMGC1_MASK                     equ 0002h
ICMGAIN_MICMGC2_POSN                     equ 0002h
ICMGAIN_MICMGC2_POSITION                 equ 0002h
ICMGAIN_MICMGC2_SIZE                     equ 0001h
ICMGAIN_MICMGC2_LENGTH                   equ 0001h
ICMGAIN_MICMGC2_MASK                     equ 0004h
ICMGAIN_MICMGC3_POSN                     equ 0003h
ICMGAIN_MICMGC3_POSITION                 equ 0003h
ICMGAIN_MICMGC3_SIZE                     equ 0001h
ICMGAIN_MICMGC3_LENGTH                   equ 0001h
ICMGAIN_MICMGC3_MASK                     equ 0008h
ICMGAIN_MICMGC4_POSN                     equ 0004h
ICMGAIN_MICMGC4_POSITION                 equ 0004h
ICMGAIN_MICMGC4_SIZE                     equ 0001h
ICMGAIN_MICMGC4_LENGTH                   equ 0001h
ICMGAIN_MICMGC4_MASK                     equ 0010h
ICMGAIN_MICMGC5_POSN                     equ 0005h
ICMGAIN_MICMGC5_POSITION                 equ 0005h
ICMGAIN_MICMGC5_SIZE                     equ 0001h
ICMGAIN_MICMGC5_LENGTH                   equ 0001h
ICMGAIN_MICMGC5_MASK                     equ 0020h
ICMGAIN_MICMGC6_POSN                     equ 0006h
ICMGAIN_MICMGC6_POSITION                 equ 0006h
ICMGAIN_MICMGC6_SIZE                     equ 0001h
ICMGAIN_MICMGC6_LENGTH                   equ 0001h
ICMGAIN_MICMGC6_MASK                     equ 0040h

// Register: OCMRAWRESL
#define OCMRAWRESL OCMRAWRESL
OCMRAWRESL                               equ 058Dh
// bitfield definitions
OCMRAWRESL_AD0_POSN                      equ 0000h
OCMRAWRESL_AD0_POSITION                  equ 0000h
OCMRAWRESL_AD0_SIZE                      equ 0001h
OCMRAWRESL_AD0_LENGTH                    equ 0001h
OCMRAWRESL_AD0_MASK                      equ 0001h
OCMRAWRESL_AD1_POSN                      equ 0001h
OCMRAWRESL_AD1_POSITION                  equ 0001h
OCMRAWRESL_AD1_SIZE                      equ 0001h
OCMRAWRESL_AD1_LENGTH                    equ 0001h
OCMRAWRESL_AD1_MASK                      equ 0002h
OCMRAWRESL_AD2_POSN                      equ 0002h
OCMRAWRESL_AD2_POSITION                  equ 0002h
OCMRAWRESL_AD2_SIZE                      equ 0001h
OCMRAWRESL_AD2_LENGTH                    equ 0001h
OCMRAWRESL_AD2_MASK                      equ 0004h
OCMRAWRESL_AD3_POSN                      equ 0003h
OCMRAWRESL_AD3_POSITION                  equ 0003h
OCMRAWRESL_AD3_SIZE                      equ 0001h
OCMRAWRESL_AD3_LENGTH                    equ 0001h
OCMRAWRESL_AD3_MASK                      equ 0008h
OCMRAWRESL_AD4_POSN                      equ 0004h
OCMRAWRESL_AD4_POSITION                  equ 0004h
OCMRAWRESL_AD4_SIZE                      equ 0001h
OCMRAWRESL_AD4_LENGTH                    equ 0001h
OCMRAWRESL_AD4_MASK                      equ 0010h
OCMRAWRESL_AD5_POSN                      equ 0005h
OCMRAWRESL_AD5_POSITION                  equ 0005h
OCMRAWRESL_AD5_SIZE                      equ 0001h
OCMRAWRESL_AD5_LENGTH                    equ 0001h
OCMRAWRESL_AD5_MASK                      equ 0020h
OCMRAWRESL_AD6_POSN                      equ 0006h
OCMRAWRESL_AD6_POSITION                  equ 0006h
OCMRAWRESL_AD6_SIZE                      equ 0001h
OCMRAWRESL_AD6_LENGTH                    equ 0001h
OCMRAWRESL_AD6_MASK                      equ 0040h
OCMRAWRESL_AD7_POSN                      equ 0007h
OCMRAWRESL_AD7_POSITION                  equ 0007h
OCMRAWRESL_AD7_SIZE                      equ 0001h
OCMRAWRESL_AD7_LENGTH                    equ 0001h
OCMRAWRESL_AD7_MASK                      equ 0080h

// Register: OCMRAWRESH
#define OCMRAWRESH OCMRAWRESH
OCMRAWRESH                               equ 058Eh
// bitfield definitions
OCMRAWRESH_AD8_POSN                      equ 0000h
OCMRAWRESH_AD8_POSITION                  equ 0000h
OCMRAWRESH_AD8_SIZE                      equ 0001h
OCMRAWRESH_AD8_LENGTH                    equ 0001h
OCMRAWRESH_AD8_MASK                      equ 0001h
OCMRAWRESH_AD9_POSN                      equ 0001h
OCMRAWRESH_AD9_POSITION                  equ 0001h
OCMRAWRESH_AD9_SIZE                      equ 0001h
OCMRAWRESH_AD9_LENGTH                    equ 0001h
OCMRAWRESH_AD9_MASK                      equ 0002h

// Register: OCMCON0
#define OCMCON0 OCMCON0
OCMCON0                                  equ 058Fh
// bitfield definitions
OCMCON0_OCMON_POSN                       equ 0000h
OCMCON0_OCMON_POSITION                   equ 0000h
OCMCON0_OCMON_SIZE                       equ 0001h
OCMCON0_OCMON_LENGTH                     equ 0001h
OCMCON0_OCMON_MASK                       equ 0001h
OCMCON0_GO_nDONE_POSN                    equ 0001h
OCMCON0_GO_nDONE_POSITION                equ 0001h
OCMCON0_GO_nDONE_SIZE                    equ 0001h
OCMCON0_GO_nDONE_LENGTH                  equ 0001h
OCMCON0_GO_nDONE_MASK                    equ 0002h
OCMCON0_OCMCTS_POSN                      equ 0003h
OCMCON0_OCMCTS_POSITION                  equ 0003h
OCMCON0_OCMCTS_SIZE                      equ 0001h
OCMCON0_OCMCTS_LENGTH                    equ 0001h
OCMCON0_OCMCTS_MASK                      equ 0008h
OCMCON0_OCMLT0_POSN                      equ 0005h
OCMCON0_OCMLT0_POSITION                  equ 0005h
OCMCON0_OCMLT0_SIZE                      equ 0001h
OCMCON0_OCMLT0_LENGTH                    equ 0001h
OCMCON0_OCMLT0_MASK                      equ 0020h
OCMCON0_OCMLT1_POSN                      equ 0006h
OCMCON0_OCMLT1_POSITION                  equ 0006h
OCMCON0_OCMLT1_SIZE                      equ 0001h
OCMCON0_OCMLT1_LENGTH                    equ 0001h
OCMCON0_OCMLT1_MASK                      equ 0040h
OCMCON0_OCMLT2_POSN                      equ 0007h
OCMCON0_OCMLT2_POSITION                  equ 0007h
OCMCON0_OCMLT2_SIZE                      equ 0001h
OCMCON0_OCMLT2_LENGTH                    equ 0001h
OCMCON0_OCMLT2_MASK                      equ 0080h

// Register: OCMCON1
#define OCMCON1 OCMCON1
OCMCON1                                  equ 0590h
// bitfield definitions
OCMCON1_OCMOCFINT_POSN                   equ 0002h
OCMCON1_OCMOCFINT_POSITION               equ 0002h
OCMCON1_OCMOCFINT_SIZE                   equ 0001h
OCMCON1_OCMOCFINT_LENGTH                 equ 0001h
OCMCON1_OCMOCFINT_MASK                   equ 0004h
OCMCON1_OCMOCRINT_POSN                   equ 0003h
OCMCON1_OCMOCRINT_POSITION               equ 0003h
OCMCON1_OCMOCRINT_SIZE                   equ 0001h
OCMCON1_OCMOCRINT_LENGTH                 equ 0001h
OCMCON1_OCMOCRINT_MASK                   equ 0008h
OCMCON1_OCMOCLAT_POSN                    equ 0004h
OCMCON1_OCMOCLAT_POSITION                equ 0004h
OCMCON1_OCMOCLAT_SIZE                    equ 0001h
OCMCON1_OCMOCLAT_LENGTH                  equ 0001h
OCMCON1_OCMOCLAT_MASK                    equ 0010h
OCMCON1_OCMOCCNT0_POSN                   equ 0005h
OCMCON1_OCMOCCNT0_POSITION               equ 0005h
OCMCON1_OCMOCCNT0_SIZE                   equ 0001h
OCMCON1_OCMOCCNT0_LENGTH                 equ 0001h
OCMCON1_OCMOCCNT0_MASK                   equ 0020h
OCMCON1_OCMOCCNT1_POSN                   equ 0006h
OCMCON1_OCMOCCNT1_POSITION               equ 0006h
OCMCON1_OCMOCCNT1_SIZE                   equ 0001h
OCMCON1_OCMOCCNT1_LENGTH                 equ 0001h
OCMCON1_OCMOCCNT1_MASK                   equ 0040h
OCMCON1_OCMOCCNT2_POSN                   equ 0007h
OCMCON1_OCMOCCNT2_POSITION               equ 0007h
OCMCON1_OCMOCCNT2_SIZE                   equ 0001h
OCMCON1_OCMOCCNT2_LENGTH                 equ 0001h
OCMCON1_OCMOCCNT2_MASK                   equ 0080h

// Register: OCMCON2
#define OCMCON2 OCMCON2
OCMCON2                                  equ 0591h
// bitfield definitions
OCMCON2_OCMUCFINT_POSN                   equ 0000h
OCMCON2_OCMUCFINT_POSITION               equ 0000h
OCMCON2_OCMUCFINT_SIZE                   equ 0001h
OCMCON2_OCMUCFINT_LENGTH                 equ 0001h
OCMCON2_OCMUCFINT_MASK                   equ 0001h
OCMCON2_OCMUCRINT_POSN                   equ 0001h
OCMCON2_OCMUCRINT_POSITION               equ 0001h
OCMCON2_OCMUCRINT_SIZE                   equ 0001h
OCMCON2_OCMUCRINT_LENGTH                 equ 0001h
OCMCON2_OCMUCRINT_MASK                   equ 0002h
OCMCON2_OCMUCLAT_POSN                    equ 0004h
OCMCON2_OCMUCLAT_POSITION                equ 0004h
OCMCON2_OCMUCLAT_SIZE                    equ 0001h
OCMCON2_OCMUCLAT_LENGTH                  equ 0001h
OCMCON2_OCMUCLAT_MASK                    equ 0010h
OCMCON2_OCMUCCNT0_POSN                   equ 0005h
OCMCON2_OCMUCCNT0_POSITION               equ 0005h
OCMCON2_OCMUCCNT0_SIZE                   equ 0001h
OCMCON2_OCMUCCNT0_LENGTH                 equ 0001h
OCMCON2_OCMUCCNT0_MASK                   equ 0020h
OCMCON2_OCMUCCNT1_POSN                   equ 0006h
OCMCON2_OCMUCCNT1_POSITION               equ 0006h
OCMCON2_OCMUCCNT1_SIZE                   equ 0001h
OCMCON2_OCMUCCNT1_LENGTH                 equ 0001h
OCMCON2_OCMUCCNT1_MASK                   equ 0040h
OCMCON2_OCMUCCNT2_POSN                   equ 0007h
OCMCON2_OCMUCCNT2_POSITION               equ 0007h
OCMCON2_OCMUCCNT2_SIZE                   equ 0001h
OCMCON2_OCMUCCNT2_LENGTH                 equ 0001h
OCMCON2_OCMUCCNT2_MASK                   equ 0080h

// Register: OCMUCR
#define OCMUCR OCMUCR
OCMUCR                                   equ 0593h
// bitfield definitions
OCMUCR_OCMUCR0_POSN                      equ 0000h
OCMUCR_OCMUCR0_POSITION                  equ 0000h
OCMUCR_OCMUCR0_SIZE                      equ 0001h
OCMUCR_OCMUCR0_LENGTH                    equ 0001h
OCMUCR_OCMUCR0_MASK                      equ 0001h
OCMUCR_OCMUCR1_POSN                      equ 0001h
OCMUCR_OCMUCR1_POSITION                  equ 0001h
OCMUCR_OCMUCR1_SIZE                      equ 0001h
OCMUCR_OCMUCR1_LENGTH                    equ 0001h
OCMUCR_OCMUCR1_MASK                      equ 0002h
OCMUCR_OCMUCR2_POSN                      equ 0002h
OCMUCR_OCMUCR2_POSITION                  equ 0002h
OCMUCR_OCMUCR2_SIZE                      equ 0001h
OCMUCR_OCMUCR2_LENGTH                    equ 0001h
OCMUCR_OCMUCR2_MASK                      equ 0004h
OCMUCR_OCMUCR3_POSN                      equ 0003h
OCMUCR_OCMUCR3_POSITION                  equ 0003h
OCMUCR_OCMUCR3_SIZE                      equ 0001h
OCMUCR_OCMUCR3_LENGTH                    equ 0001h
OCMUCR_OCMUCR3_MASK                      equ 0008h
OCMUCR_OCMUCR4_POSN                      equ 0004h
OCMUCR_OCMUCR4_POSITION                  equ 0004h
OCMUCR_OCMUCR4_SIZE                      equ 0001h
OCMUCR_OCMUCR4_LENGTH                    equ 0001h
OCMUCR_OCMUCR4_MASK                      equ 0010h
OCMUCR_OCMUCR5_POSN                      equ 0005h
OCMUCR_OCMUCR5_POSITION                  equ 0005h
OCMUCR_OCMUCR5_SIZE                      equ 0001h
OCMUCR_OCMUCR5_LENGTH                    equ 0001h
OCMUCR_OCMUCR5_MASK                      equ 0020h
OCMUCR_OCMUCR6_POSN                      equ 0006h
OCMUCR_OCMUCR6_POSITION                  equ 0006h
OCMUCR_OCMUCR6_SIZE                      equ 0001h
OCMUCR_OCMUCR6_LENGTH                    equ 0001h
OCMUCR_OCMUCR6_MASK                      equ 0040h
OCMUCR_OCMUCR7_POSN                      equ 0007h
OCMUCR_OCMUCR7_POSITION                  equ 0007h
OCMUCR_OCMUCR7_SIZE                      equ 0001h
OCMUCR_OCMUCR7_LENGTH                    equ 0001h
OCMUCR_OCMUCR7_MASK                      equ 0080h

// Register: OCMUCF
#define OCMUCF OCMUCF
OCMUCF                                   equ 0594h
// bitfield definitions
OCMUCF_OCMUCF0_POSN                      equ 0000h
OCMUCF_OCMUCF0_POSITION                  equ 0000h
OCMUCF_OCMUCF0_SIZE                      equ 0001h
OCMUCF_OCMUCF0_LENGTH                    equ 0001h
OCMUCF_OCMUCF0_MASK                      equ 0001h
OCMUCF_OCMUCF1_POSN                      equ 0001h
OCMUCF_OCMUCF1_POSITION                  equ 0001h
OCMUCF_OCMUCF1_SIZE                      equ 0001h
OCMUCF_OCMUCF1_LENGTH                    equ 0001h
OCMUCF_OCMUCF1_MASK                      equ 0002h
OCMUCF_OCMUCF2_POSN                      equ 0002h
OCMUCF_OCMUCF2_POSITION                  equ 0002h
OCMUCF_OCMUCF2_SIZE                      equ 0001h
OCMUCF_OCMUCF2_LENGTH                    equ 0001h
OCMUCF_OCMUCF2_MASK                      equ 0004h
OCMUCF_OCMUCF3_POSN                      equ 0003h
OCMUCF_OCMUCF3_POSITION                  equ 0003h
OCMUCF_OCMUCF3_SIZE                      equ 0001h
OCMUCF_OCMUCF3_LENGTH                    equ 0001h
OCMUCF_OCMUCF3_MASK                      equ 0008h
OCMUCF_OCMUCF4_POSN                      equ 0004h
OCMUCF_OCMUCF4_POSITION                  equ 0004h
OCMUCF_OCMUCF4_SIZE                      equ 0001h
OCMUCF_OCMUCF4_LENGTH                    equ 0001h
OCMUCF_OCMUCF4_MASK                      equ 0010h
OCMUCF_OCMUCF5_POSN                      equ 0005h
OCMUCF_OCMUCF5_POSITION                  equ 0005h
OCMUCF_OCMUCF5_SIZE                      equ 0001h
OCMUCF_OCMUCF5_LENGTH                    equ 0001h
OCMUCF_OCMUCF5_MASK                      equ 0020h
OCMUCF_OCMUCF6_POSN                      equ 0006h
OCMUCF_OCMUCF6_POSITION                  equ 0006h
OCMUCF_OCMUCF6_SIZE                      equ 0001h
OCMUCF_OCMUCF6_LENGTH                    equ 0001h
OCMUCF_OCMUCF6_MASK                      equ 0040h
OCMUCF_OCMUCF7_POSN                      equ 0007h
OCMUCF_OCMUCF7_POSITION                  equ 0007h
OCMUCF_OCMUCF7_SIZE                      equ 0001h
OCMUCF_OCMUCF7_LENGTH                    equ 0001h
OCMUCF_OCMUCF7_MASK                      equ 0080h

// Register: OCMOCR
#define OCMOCR OCMOCR
OCMOCR                                   equ 0595h
// bitfield definitions
OCMOCR_OCMOCR0_POSN                      equ 0000h
OCMOCR_OCMOCR0_POSITION                  equ 0000h
OCMOCR_OCMOCR0_SIZE                      equ 0001h
OCMOCR_OCMOCR0_LENGTH                    equ 0001h
OCMOCR_OCMOCR0_MASK                      equ 0001h
OCMOCR_OCMOCR1_POSN                      equ 0001h
OCMOCR_OCMOCR1_POSITION                  equ 0001h
OCMOCR_OCMOCR1_SIZE                      equ 0001h
OCMOCR_OCMOCR1_LENGTH                    equ 0001h
OCMOCR_OCMOCR1_MASK                      equ 0002h
OCMOCR_OCMOCR2_POSN                      equ 0002h
OCMOCR_OCMOCR2_POSITION                  equ 0002h
OCMOCR_OCMOCR2_SIZE                      equ 0001h
OCMOCR_OCMOCR2_LENGTH                    equ 0001h
OCMOCR_OCMOCR2_MASK                      equ 0004h
OCMOCR_OCMOCR3_POSN                      equ 0003h
OCMOCR_OCMOCR3_POSITION                  equ 0003h
OCMOCR_OCMOCR3_SIZE                      equ 0001h
OCMOCR_OCMOCR3_LENGTH                    equ 0001h
OCMOCR_OCMOCR3_MASK                      equ 0008h
OCMOCR_OCMOCR4_POSN                      equ 0004h
OCMOCR_OCMOCR4_POSITION                  equ 0004h
OCMOCR_OCMOCR4_SIZE                      equ 0001h
OCMOCR_OCMOCR4_LENGTH                    equ 0001h
OCMOCR_OCMOCR4_MASK                      equ 0010h
OCMOCR_OCMOCR5_POSN                      equ 0005h
OCMOCR_OCMOCR5_POSITION                  equ 0005h
OCMOCR_OCMOCR5_SIZE                      equ 0001h
OCMOCR_OCMOCR5_LENGTH                    equ 0001h
OCMOCR_OCMOCR5_MASK                      equ 0020h
OCMOCR_OCMOCR6_POSN                      equ 0006h
OCMOCR_OCMOCR6_POSITION                  equ 0006h
OCMOCR_OCMOCR6_SIZE                      equ 0001h
OCMOCR_OCMOCR6_LENGTH                    equ 0001h
OCMOCR_OCMOCR6_MASK                      equ 0040h
OCMOCR_OCMOCR7_POSN                      equ 0007h
OCMOCR_OCMOCR7_POSITION                  equ 0007h
OCMOCR_OCMOCR7_SIZE                      equ 0001h
OCMOCR_OCMOCR7_LENGTH                    equ 0001h
OCMOCR_OCMOCR7_MASK                      equ 0080h

// Register: OCMOCF
#define OCMOCF OCMOCF
OCMOCF                                   equ 0596h
// bitfield definitions
OCMOCF_OCMOCF0_POSN                      equ 0000h
OCMOCF_OCMOCF0_POSITION                  equ 0000h
OCMOCF_OCMOCF0_SIZE                      equ 0001h
OCMOCF_OCMOCF0_LENGTH                    equ 0001h
OCMOCF_OCMOCF0_MASK                      equ 0001h
OCMOCF_OCMOCF1_POSN                      equ 0001h
OCMOCF_OCMOCF1_POSITION                  equ 0001h
OCMOCF_OCMOCF1_SIZE                      equ 0001h
OCMOCF_OCMOCF1_LENGTH                    equ 0001h
OCMOCF_OCMOCF1_MASK                      equ 0002h
OCMOCF_OCMOCF2_POSN                      equ 0002h
OCMOCF_OCMOCF2_POSITION                  equ 0002h
OCMOCF_OCMOCF2_SIZE                      equ 0001h
OCMOCF_OCMOCF2_LENGTH                    equ 0001h
OCMOCF_OCMOCF2_MASK                      equ 0004h
OCMOCF_OCMOCF3_POSN                      equ 0003h
OCMOCF_OCMOCF3_POSITION                  equ 0003h
OCMOCF_OCMOCF3_SIZE                      equ 0001h
OCMOCF_OCMOCF3_LENGTH                    equ 0001h
OCMOCF_OCMOCF3_MASK                      equ 0008h
OCMOCF_OCMOCF4_POSN                      equ 0004h
OCMOCF_OCMOCF4_POSITION                  equ 0004h
OCMOCF_OCMOCF4_SIZE                      equ 0001h
OCMOCF_OCMOCF4_LENGTH                    equ 0001h
OCMOCF_OCMOCF4_MASK                      equ 0010h
OCMOCF_OCMOCF5_POSN                      equ 0005h
OCMOCF_OCMOCF5_POSITION                  equ 0005h
OCMOCF_OCMOCF5_SIZE                      equ 0001h
OCMOCF_OCMOCF5_LENGTH                    equ 0001h
OCMOCF_OCMOCF5_MASK                      equ 0020h
OCMOCF_OCMOCF6_POSN                      equ 0006h
OCMOCF_OCMOCF6_POSITION                  equ 0006h
OCMOCF_OCMOCF6_SIZE                      equ 0001h
OCMOCF_OCMOCF6_LENGTH                    equ 0001h
OCMOCF_OCMOCF6_MASK                      equ 0040h
OCMOCF_OCMOCF7_POSN                      equ 0007h
OCMOCF_OCMOCF7_POSITION                  equ 0007h
OCMOCF_OCMOCF7_SIZE                      equ 0001h
OCMOCF_OCMOCF7_LENGTH                    equ 0001h
OCMOCF_OCMOCF7_MASK                      equ 0080h

// Register: OCMOCUCOUT
#define OCMOCUCOUT OCMOCUCOUT
OCMOCUCOUT                               equ 0597h
// bitfield definitions
OCMOCUCOUT_MOCMUCR_POSN                  equ 0000h
OCMOCUCOUT_MOCMUCR_POSITION              equ 0000h
OCMOCUCOUT_MOCMUCR_SIZE                  equ 0001h
OCMOCUCOUT_MOCMUCR_LENGTH                equ 0001h
OCMOCUCOUT_MOCMUCR_MASK                  equ 0001h
OCMOCUCOUT_MOCMUCF_POSN                  equ 0001h
OCMOCUCOUT_MOCMUCF_POSITION              equ 0001h
OCMOCUCOUT_MOCMUCF_SIZE                  equ 0001h
OCMOCUCOUT_MOCMUCF_LENGTH                equ 0001h
OCMOCUCOUT_MOCMUCF_MASK                  equ 0002h
OCMOCUCOUT_MOCMOCR_POSN                  equ 0002h
OCMOCUCOUT_MOCMOCR_POSITION              equ 0002h
OCMOCUCOUT_MOCMOCR_SIZE                  equ 0001h
OCMOCUCOUT_MOCMOCR_LENGTH                equ 0001h
OCMOCUCOUT_MOCMOCR_MASK                  equ 0004h
OCMOCUCOUT_MOCMOCF_POSN                  equ 0003h
OCMOCUCOUT_MOCMOCF_POSITION              equ 0003h
OCMOCUCOUT_MOCMOCF_SIZE                  equ 0001h
OCMOCUCOUT_MOCMOCF_LENGTH                equ 0001h
OCMOCUCOUT_MOCMOCF_MASK                  equ 0008h
OCMOCUCOUT_OCMUC_POSN                    equ 0004h
OCMOCUCOUT_OCMUC_POSITION                equ 0004h
OCMOCUCOUT_OCMUC_SIZE                    equ 0001h
OCMOCUCOUT_OCMUC_LENGTH                  equ 0001h
OCMOCUCOUT_OCMUC_MASK                    equ 0010h
OCMOCUCOUT_OCMOC_POSN                    equ 0005h
OCMOCUCOUT_OCMOC_POSITION                equ 0005h
OCMOCUCOUT_OCMOC_SIZE                    equ 0001h
OCMOCUCOUT_OCMOC_LENGTH                  equ 0001h
OCMOCUCOUT_OCMOC_MASK                    equ 0020h

// Register: OCMCORRESL
#define OCMCORRESL OCMCORRESL
OCMCORRESL                               equ 0598h
// bitfield definitions
OCMCORRESL_OCM0_POSN                     equ 0006h
OCMCORRESL_OCM0_POSITION                 equ 0006h
OCMCORRESL_OCM0_SIZE                     equ 0001h
OCMCORRESL_OCM0_LENGTH                   equ 0001h
OCMCORRESL_OCM0_MASK                     equ 0040h
OCMCORRESL_OCM1_POSN                     equ 0007h
OCMCORRESL_OCM1_POSITION                 equ 0007h
OCMCORRESL_OCM1_SIZE                     equ 0001h
OCMCORRESL_OCM1_LENGTH                   equ 0001h
OCMCORRESL_OCM1_MASK                     equ 0080h

// Register: OCMCORRESH
#define OCMCORRESH OCMCORRESH
OCMCORRESH                               equ 0599h
// bitfield definitions
OCMCORRESH_OCM2_POSN                     equ 0000h
OCMCORRESH_OCM2_POSITION                 equ 0000h
OCMCORRESH_OCM2_SIZE                     equ 0001h
OCMCORRESH_OCM2_LENGTH                   equ 0001h
OCMCORRESH_OCM2_MASK                     equ 0001h
OCMCORRESH_OCM3_POSN                     equ 0001h
OCMCORRESH_OCM3_POSITION                 equ 0001h
OCMCORRESH_OCM3_SIZE                     equ 0001h
OCMCORRESH_OCM3_LENGTH                   equ 0001h
OCMCORRESH_OCM3_MASK                     equ 0002h
OCMCORRESH_OCM4_POSN                     equ 0002h
OCMCORRESH_OCM4_POSITION                 equ 0002h
OCMCORRESH_OCM4_SIZE                     equ 0001h
OCMCORRESH_OCM4_LENGTH                   equ 0001h
OCMCORRESH_OCM4_MASK                     equ 0004h
OCMCORRESH_OCM5_POSN                     equ 0003h
OCMCORRESH_OCM5_POSITION                 equ 0003h
OCMCORRESH_OCM5_SIZE                     equ 0001h
OCMCORRESH_OCM5_LENGTH                   equ 0001h
OCMCORRESH_OCM5_MASK                     equ 0008h
OCMCORRESH_OCM6_POSN                     equ 0004h
OCMCORRESH_OCM6_POSITION                 equ 0004h
OCMCORRESH_OCM6_SIZE                     equ 0001h
OCMCORRESH_OCM6_LENGTH                   equ 0001h
OCMCORRESH_OCM6_MASK                     equ 0010h
OCMCORRESH_OCM7_POSN                     equ 0005h
OCMCORRESH_OCM7_POSITION                 equ 0005h
OCMCORRESH_OCM7_SIZE                     equ 0001h
OCMCORRESH_OCM7_LENGTH                   equ 0001h
OCMCORRESH_OCM7_MASK                     equ 0020h
OCMCORRESH_OCM8_POSN                     equ 0006h
OCMCORRESH_OCM8_POSITION                 equ 0006h
OCMCORRESH_OCM8_SIZE                     equ 0001h
OCMCORRESH_OCM8_LENGTH                   equ 0001h
OCMCORRESH_OCM8_MASK                     equ 0040h
OCMCORRESH_OCM9_POSN                     equ 0007h
OCMCORRESH_OCM9_POSITION                 equ 0007h
OCMCORRESH_OCM9_SIZE                     equ 0001h
OCMCORRESH_OCM9_LENGTH                   equ 0001h
OCMCORRESH_OCM9_MASK                     equ 0080h

// Register: LPFCON0
#define LPFCON0 LPFCON0
LPFCON0                                  equ 059Ah
// bitfield definitions
LPFCON0_LPFCHS0_POSN                     equ 0000h
LPFCON0_LPFCHS0_POSITION                 equ 0000h
LPFCON0_LPFCHS0_SIZE                     equ 0001h
LPFCON0_LPFCHS0_LENGTH                   equ 0001h
LPFCON0_LPFCHS0_MASK                     equ 0001h
LPFCON0_LPFCHS1_POSN                     equ 0001h
LPFCON0_LPFCHS1_POSITION                 equ 0001h
LPFCON0_LPFCHS1_SIZE                     equ 0001h
LPFCON0_LPFCHS1_LENGTH                   equ 0001h
LPFCON0_LPFCHS1_MASK                     equ 0002h
LPFCON0_LPFEN_POSN                       equ 0007h
LPFCON0_LPFEN_POSITION                   equ 0007h
LPFCON0_LPFEN_SIZE                       equ 0001h
LPFCON0_LPFEN_LENGTH                     equ 0001h
LPFCON0_LPFEN_MASK                       equ 0080h

// Register: OCROFF
#define OCROFF OCROFF
OCROFF                                   equ 059Bh
// bitfield definitions
OCROFF_MOCROC0_POSN                      equ 0000h
OCROFF_MOCROC0_POSITION                  equ 0000h
OCROFF_MOCROC0_SIZE                      equ 0001h
OCROFF_MOCROC0_LENGTH                    equ 0001h
OCROFF_MOCROC0_MASK                      equ 0001h
OCROFF_MOCROC1_POSN                      equ 0001h
OCROFF_MOCROC1_POSITION                  equ 0001h
OCROFF_MOCROC1_SIZE                      equ 0001h
OCROFF_MOCROC1_LENGTH                    equ 0001h
OCROFF_MOCROC1_MASK                      equ 0002h
OCROFF_MOCROC2_POSN                      equ 0002h
OCROFF_MOCROC2_POSITION                  equ 0002h
OCROFF_MOCROC2_SIZE                      equ 0001h
OCROFF_MOCROC2_LENGTH                    equ 0001h
OCROFF_MOCROC2_MASK                      equ 0004h
OCROFF_MOCROC3_POSN                      equ 0003h
OCROFF_MOCROC3_POSITION                  equ 0003h
OCROFF_MOCROC3_SIZE                      equ 0001h
OCROFF_MOCROC3_LENGTH                    equ 0001h
OCROFF_MOCROC3_MASK                      equ 0008h
OCROFF_MOCROC4_POSN                      equ 0004h
OCROFF_MOCROC4_POSITION                  equ 0004h
OCROFF_MOCROC4_SIZE                      equ 0001h
OCROFF_MOCROC4_LENGTH                    equ 0001h
OCROFF_MOCROC4_MASK                      equ 0010h

// Register: OCRGAIN
#define OCRGAIN OCRGAIN
OCRGAIN                                  equ 059Ch
// bitfield definitions
OCRGAIN_MOCRGC0_POSN                     equ 0000h
OCRGAIN_MOCRGC0_POSITION                 equ 0000h
OCRGAIN_MOCRGC0_SIZE                     equ 0001h
OCRGAIN_MOCRGC0_LENGTH                   equ 0001h
OCRGAIN_MOCRGC0_MASK                     equ 0001h
OCRGAIN_MOCRGC1_POSN                     equ 0001h
OCRGAIN_MOCRGC1_POSITION                 equ 0001h
OCRGAIN_MOCRGC1_SIZE                     equ 0001h
OCRGAIN_MOCRGC1_LENGTH                   equ 0001h
OCRGAIN_MOCRGC1_MASK                     equ 0002h
OCRGAIN_MOCRGC2_POSN                     equ 0002h
OCRGAIN_MOCRGC2_POSITION                 equ 0002h
OCRGAIN_MOCRGC2_SIZE                     equ 0001h
OCRGAIN_MOCRGC2_LENGTH                   equ 0001h
OCRGAIN_MOCRGC2_MASK                     equ 0004h
OCRGAIN_MOCRGC3_POSN                     equ 0003h
OCRGAIN_MOCRGC3_POSITION                 equ 0003h
OCRGAIN_MOCRGC3_SIZE                     equ 0001h
OCRGAIN_MOCRGC3_LENGTH                   equ 0001h
OCRGAIN_MOCRGC3_MASK                     equ 0008h
OCRGAIN_MOCRGC4_POSN                     equ 0004h
OCRGAIN_MOCRGC4_POSITION                 equ 0004h
OCRGAIN_MOCRGC4_SIZE                     equ 0001h
OCRGAIN_MOCRGC4_LENGTH                   equ 0001h
OCRGAIN_MOCRGC4_MASK                     equ 0010h
OCRGAIN_MOCRGC5_POSN                     equ 0005h
OCRGAIN_MOCRGC5_POSITION                 equ 0005h
OCRGAIN_MOCRGC5_SIZE                     equ 0001h
OCRGAIN_MOCRGC5_LENGTH                   equ 0001h
OCRGAIN_MOCRGC5_MASK                     equ 0020h
OCRGAIN_MOCRGC6_POSN                     equ 0006h
OCRGAIN_MOCRGC6_POSITION                 equ 0006h
OCRGAIN_MOCRGC6_SIZE                     equ 0001h
OCRGAIN_MOCRGC6_LENGTH                   equ 0001h
OCRGAIN_MOCRGC6_MASK                     equ 0040h

// Register: OVMRAWRESL
#define OVMRAWRESL OVMRAWRESL
OVMRAWRESL                               equ 060Dh
// bitfield definitions
OVMRAWRESL_AD0_POSN                      equ 0000h
OVMRAWRESL_AD0_POSITION                  equ 0000h
OVMRAWRESL_AD0_SIZE                      equ 0001h
OVMRAWRESL_AD0_LENGTH                    equ 0001h
OVMRAWRESL_AD0_MASK                      equ 0001h
OVMRAWRESL_AD1_POSN                      equ 0001h
OVMRAWRESL_AD1_POSITION                  equ 0001h
OVMRAWRESL_AD1_SIZE                      equ 0001h
OVMRAWRESL_AD1_LENGTH                    equ 0001h
OVMRAWRESL_AD1_MASK                      equ 0002h
OVMRAWRESL_AD2_POSN                      equ 0002h
OVMRAWRESL_AD2_POSITION                  equ 0002h
OVMRAWRESL_AD2_SIZE                      equ 0001h
OVMRAWRESL_AD2_LENGTH                    equ 0001h
OVMRAWRESL_AD2_MASK                      equ 0004h
OVMRAWRESL_AD3_POSN                      equ 0003h
OVMRAWRESL_AD3_POSITION                  equ 0003h
OVMRAWRESL_AD3_SIZE                      equ 0001h
OVMRAWRESL_AD3_LENGTH                    equ 0001h
OVMRAWRESL_AD3_MASK                      equ 0008h
OVMRAWRESL_AD4_POSN                      equ 0004h
OVMRAWRESL_AD4_POSITION                  equ 0004h
OVMRAWRESL_AD4_SIZE                      equ 0001h
OVMRAWRESL_AD4_LENGTH                    equ 0001h
OVMRAWRESL_AD4_MASK                      equ 0010h
OVMRAWRESL_AD5_POSN                      equ 0005h
OVMRAWRESL_AD5_POSITION                  equ 0005h
OVMRAWRESL_AD5_SIZE                      equ 0001h
OVMRAWRESL_AD5_LENGTH                    equ 0001h
OVMRAWRESL_AD5_MASK                      equ 0020h
OVMRAWRESL_AD6_POSN                      equ 0006h
OVMRAWRESL_AD6_POSITION                  equ 0006h
OVMRAWRESL_AD6_SIZE                      equ 0001h
OVMRAWRESL_AD6_LENGTH                    equ 0001h
OVMRAWRESL_AD6_MASK                      equ 0040h
OVMRAWRESL_AD7_POSN                      equ 0007h
OVMRAWRESL_AD7_POSITION                  equ 0007h
OVMRAWRESL_AD7_SIZE                      equ 0001h
OVMRAWRESL_AD7_LENGTH                    equ 0001h
OVMRAWRESL_AD7_MASK                      equ 0080h

// Register: OVMRAWRESH
#define OVMRAWRESH OVMRAWRESH
OVMRAWRESH                               equ 060Eh
// bitfield definitions
OVMRAWRESH_AD8_POSN                      equ 0000h
OVMRAWRESH_AD8_POSITION                  equ 0000h
OVMRAWRESH_AD8_SIZE                      equ 0001h
OVMRAWRESH_AD8_LENGTH                    equ 0001h
OVMRAWRESH_AD8_MASK                      equ 0001h
OVMRAWRESH_AD9_POSN                      equ 0001h
OVMRAWRESH_AD9_POSITION                  equ 0001h
OVMRAWRESH_AD9_SIZE                      equ 0001h
OVMRAWRESH_AD9_LENGTH                    equ 0001h
OVMRAWRESH_AD9_MASK                      equ 0002h

// Register: OVMCON0
#define OVMCON0 OVMCON0
OVMCON0                                  equ 060Fh
// bitfield definitions
OVMCON0_OCMON_POSN                       equ 0000h
OVMCON0_OCMON_POSITION                   equ 0000h
OVMCON0_OCMON_SIZE                       equ 0001h
OVMCON0_OCMON_LENGTH                     equ 0001h
OVMCON0_OCMON_MASK                       equ 0001h
OVMCON0_GO_nDONE_POSN                    equ 0001h
OVMCON0_GO_nDONE_POSITION                equ 0001h
OVMCON0_GO_nDONE_SIZE                    equ 0001h
OVMCON0_GO_nDONE_LENGTH                  equ 0001h
OVMCON0_GO_nDONE_MASK                    equ 0002h
OVMCON0_OMCTS_POSN                       equ 0003h
OVMCON0_OMCTS_POSITION                   equ 0003h
OVMCON0_OMCTS_SIZE                       equ 0001h
OVMCON0_OMCTS_LENGTH                     equ 0001h
OVMCON0_OMCTS_MASK                       equ 0008h
OVMCON0_OMLT0_POSN                       equ 0005h
OVMCON0_OMLT0_POSITION                   equ 0005h
OVMCON0_OMLT0_SIZE                       equ 0001h
OVMCON0_OMLT0_LENGTH                     equ 0001h
OVMCON0_OMLT0_MASK                       equ 0020h
OVMCON0_OMLT1_POSN                       equ 0006h
OVMCON0_OMLT1_POSITION                   equ 0006h
OVMCON0_OMLT1_SIZE                       equ 0001h
OVMCON0_OMLT1_LENGTH                     equ 0001h
OVMCON0_OMLT1_MASK                       equ 0040h
OVMCON0_OMLT2_POSN                       equ 0007h
OVMCON0_OMLT2_POSITION                   equ 0007h
OVMCON0_OMLT2_SIZE                       equ 0001h
OVMCON0_OMLT2_LENGTH                     equ 0001h
OVMCON0_OMLT2_MASK                       equ 0080h

// Register: OVMCON1
#define OVMCON1 OVMCON1
OVMCON1                                  equ 0610h
// bitfield definitions
OVMCON1_OVMOVFINT_POSN                   equ 0002h
OVMCON1_OVMOVFINT_POSITION               equ 0002h
OVMCON1_OVMOVFINT_SIZE                   equ 0001h
OVMCON1_OVMOVFINT_LENGTH                 equ 0001h
OVMCON1_OVMOVFINT_MASK                   equ 0004h
OVMCON1_OVMOVRINT_POSN                   equ 0003h
OVMCON1_OVMOVRINT_POSITION               equ 0003h
OVMCON1_OVMOVRINT_SIZE                   equ 0001h
OVMCON1_OVMOVRINT_LENGTH                 equ 0001h
OVMCON1_OVMOVRINT_MASK                   equ 0008h
OVMCON1_OVMOVLAT_POSN                    equ 0004h
OVMCON1_OVMOVLAT_POSITION                equ 0004h
OVMCON1_OVMOVLAT_SIZE                    equ 0001h
OVMCON1_OVMOVLAT_LENGTH                  equ 0001h
OVMCON1_OVMOVLAT_MASK                    equ 0010h
OVMCON1_OVMOVCNT0_POSN                   equ 0005h
OVMCON1_OVMOVCNT0_POSITION               equ 0005h
OVMCON1_OVMOVCNT0_SIZE                   equ 0001h
OVMCON1_OVMOVCNT0_LENGTH                 equ 0001h
OVMCON1_OVMOVCNT0_MASK                   equ 0020h
OVMCON1_OVMOVCNT1_POSN                   equ 0006h
OVMCON1_OVMOVCNT1_POSITION               equ 0006h
OVMCON1_OVMOVCNT1_SIZE                   equ 0001h
OVMCON1_OVMOVCNT1_LENGTH                 equ 0001h
OVMCON1_OVMOVCNT1_MASK                   equ 0040h
OVMCON1_OVMOVCNT2_POSN                   equ 0007h
OVMCON1_OVMOVCNT2_POSITION               equ 0007h
OVMCON1_OVMOVCNT2_SIZE                   equ 0001h
OVMCON1_OVMOVCNT2_LENGTH                 equ 0001h
OVMCON1_OVMOVCNT2_MASK                   equ 0080h

// Register: OVMCON2
#define OVMCON2 OVMCON2
OVMCON2                                  equ 0611h
// bitfield definitions
OVMCON2_OVMUVFINT_POSN                   equ 0000h
OVMCON2_OVMUVFINT_POSITION               equ 0000h
OVMCON2_OVMUVFINT_SIZE                   equ 0001h
OVMCON2_OVMUVFINT_LENGTH                 equ 0001h
OVMCON2_OVMUVFINT_MASK                   equ 0001h
OVMCON2_OVMUVRINT_POSN                   equ 0001h
OVMCON2_OVMUVRINT_POSITION               equ 0001h
OVMCON2_OVMUVRINT_SIZE                   equ 0001h
OVMCON2_OVMUVRINT_LENGTH                 equ 0001h
OVMCON2_OVMUVRINT_MASK                   equ 0002h
OVMCON2_OVMUVLAT_POSN                    equ 0004h
OVMCON2_OVMUVLAT_POSITION                equ 0004h
OVMCON2_OVMUVLAT_SIZE                    equ 0001h
OVMCON2_OVMUVLAT_LENGTH                  equ 0001h
OVMCON2_OVMUVLAT_MASK                    equ 0010h
OVMCON2_OVMUVCNT0_POSN                   equ 0005h
OVMCON2_OVMUVCNT0_POSITION               equ 0005h
OVMCON2_OVMUVCNT0_SIZE                   equ 0001h
OVMCON2_OVMUVCNT0_LENGTH                 equ 0001h
OVMCON2_OVMUVCNT0_MASK                   equ 0020h
OVMCON2_OVMUVCNT1_POSN                   equ 0006h
OVMCON2_OVMUVCNT1_POSITION               equ 0006h
OVMCON2_OVMUVCNT1_SIZE                   equ 0001h
OVMCON2_OVMUVCNT1_LENGTH                 equ 0001h
OVMCON2_OVMUVCNT1_MASK                   equ 0040h
OVMCON2_OVMUVCNT2_POSN                   equ 0007h
OVMCON2_OVMUVCNT2_POSITION               equ 0007h
OVMCON2_OVMUVCNT2_SIZE                   equ 0001h
OVMCON2_OVMUVCNT2_LENGTH                 equ 0001h
OVMCON2_OVMUVCNT2_MASK                   equ 0080h

// Register: OVMCON3
#define OVMCON3 OVMCON3
OVMCON3                                  equ 0612h
// bitfield definitions
OVMCON3_OVMGS0_POSN                      equ 0000h
OVMCON3_OVMGS0_POSITION                  equ 0000h
OVMCON3_OVMGS0_SIZE                      equ 0001h
OVMCON3_OVMGS0_LENGTH                    equ 0001h
OVMCON3_OVMGS0_MASK                      equ 0001h
OVMCON3_OVMGS1_POSN                      equ 0001h
OVMCON3_OVMGS1_POSITION                  equ 0001h
OVMCON3_OVMGS1_SIZE                      equ 0001h
OVMCON3_OVMGS1_LENGTH                    equ 0001h
OVMCON3_OVMGS1_MASK                      equ 0002h
OVMCON3_OVMGS2_POSN                      equ 0002h
OVMCON3_OVMGS2_POSITION                  equ 0002h
OVMCON3_OVMGS2_SIZE                      equ 0001h
OVMCON3_OVMGS2_LENGTH                    equ 0001h
OVMCON3_OVMGS2_MASK                      equ 0004h
OVMCON3_OVMSIGN_POSN                     equ 0007h
OVMCON3_OVMSIGN_POSITION                 equ 0007h
OVMCON3_OVMSIGN_SIZE                     equ 0001h
OVMCON3_OVMSIGN_LENGTH                   equ 0001h
OVMCON3_OVMSIGN_MASK                     equ 0080h

// Register: OVMUVR
#define OVMUVR OVMUVR
OVMUVR                                   equ 0613h
// bitfield definitions
OVMUVR_OVMUVR_POSN                       equ 0000h
OVMUVR_OVMUVR_POSITION                   equ 0000h
OVMUVR_OVMUVR_SIZE                       equ 0008h
OVMUVR_OVMUVR_LENGTH                     equ 0008h
OVMUVR_OVMUVR_MASK                       equ 00FFh

// Register: OVMUVF
#define OVMUVF OVMUVF
OVMUVF                                   equ 0614h
// bitfield definitions
OVMUVF_OVMUVF_POSN                       equ 0000h
OVMUVF_OVMUVF_POSITION                   equ 0000h
OVMUVF_OVMUVF_SIZE                       equ 0008h
OVMUVF_OVMUVF_LENGTH                     equ 0008h
OVMUVF_OVMUVF_MASK                       equ 00FFh

// Register: OVMOVR
#define OVMOVR OVMOVR
OVMOVR                                   equ 0615h
// bitfield definitions
OVMOVR_OVMOVR_POSN                       equ 0000h
OVMOVR_OVMOVR_POSITION                   equ 0000h
OVMOVR_OVMOVR_SIZE                       equ 0008h
OVMOVR_OVMOVR_LENGTH                     equ 0008h
OVMOVR_OVMOVR_MASK                       equ 00FFh

// Register: OVMOVF
#define OVMOVF OVMOVF
OVMOVF                                   equ 0616h
// bitfield definitions
OVMOVF_OVMOVF_POSN                       equ 0000h
OVMOVF_OVMOVF_POSITION                   equ 0000h
OVMOVF_OVMOVF_SIZE                       equ 0008h
OVMOVF_OVMOVF_LENGTH                     equ 0008h
OVMOVF_OVMOVF_MASK                       equ 00FFh

// Register: OVMOVUVOUT
#define OVMOVUVOUT OVMOVUVOUT
OVMOVUVOUT                               equ 0617h
// bitfield definitions
OVMOVUVOUT_MOVMUVF_POSN                  equ 0000h
OVMOVUVOUT_MOVMUVF_POSITION              equ 0000h
OVMOVUVOUT_MOVMUVF_SIZE                  equ 0001h
OVMOVUVOUT_MOVMUVF_LENGTH                equ 0001h
OVMOVUVOUT_MOVMUVF_MASK                  equ 0001h
OVMOVUVOUT_MOVMUVR_POSN                  equ 0001h
OVMOVUVOUT_MOVMUVR_POSITION              equ 0001h
OVMOVUVOUT_MOVMUVR_SIZE                  equ 0001h
OVMOVUVOUT_MOVMUVR_LENGTH                equ 0001h
OVMOVUVOUT_MOVMUVR_MASK                  equ 0002h
OVMOVUVOUT_MOVMOVF_POSN                  equ 0002h
OVMOVUVOUT_MOVMOVF_POSITION              equ 0002h
OVMOVUVOUT_MOVMOVF_SIZE                  equ 0001h
OVMOVUVOUT_MOVMOVF_LENGTH                equ 0001h
OVMOVUVOUT_MOVMOVF_MASK                  equ 0004h
OVMOVUVOUT_MOVMOVR_POSN                  equ 0003h
OVMOVUVOUT_MOVMOVR_POSITION              equ 0003h
OVMOVUVOUT_MOVMOVR_SIZE                  equ 0001h
OVMOVUVOUT_MOVMOVR_LENGTH                equ 0001h
OVMOVUVOUT_MOVMOVR_MASK                  equ 0008h
OVMOVUVOUT_OVMUV_POSN                    equ 0004h
OVMOVUVOUT_OVMUV_POSITION                equ 0004h
OVMOVUVOUT_OVMUV_SIZE                    equ 0001h
OVMOVUVOUT_OVMUV_LENGTH                  equ 0001h
OVMOVUVOUT_OVMUV_MASK                    equ 0010h
OVMOVUVOUT_OVMOV_POSN                    equ 0005h
OVMOVUVOUT_OVMOV_POSITION                equ 0005h
OVMOVUVOUT_OVMOV_SIZE                    equ 0001h
OVMOVUVOUT_OVMOV_LENGTH                  equ 0001h
OVMOVUVOUT_OVMOV_MASK                    equ 0020h

// Register: OVMCORRESL
#define OVMCORRESL OVMCORRESL
OVMCORRESL                               equ 0618h
// bitfield definitions
OVMCORRESL_OVM0_POSN                     equ 0006h
OVMCORRESL_OVM0_POSITION                 equ 0006h
OVMCORRESL_OVM0_SIZE                     equ 0001h
OVMCORRESL_OVM0_LENGTH                   equ 0001h
OVMCORRESL_OVM0_MASK                     equ 0040h
OVMCORRESL_OVM1_POSN                     equ 0007h
OVMCORRESL_OVM1_POSITION                 equ 0007h
OVMCORRESL_OVM1_SIZE                     equ 0001h
OVMCORRESL_OVM1_LENGTH                   equ 0001h
OVMCORRESL_OVM1_MASK                     equ 0080h

// Register: OVMCORRESH
#define OVMCORRESH OVMCORRESH
OVMCORRESH                               equ 0619h
// bitfield definitions
OVMCORRESH_OVM2_POSN                     equ 0000h
OVMCORRESH_OVM2_POSITION                 equ 0000h
OVMCORRESH_OVM2_SIZE                     equ 0001h
OVMCORRESH_OVM2_LENGTH                   equ 0001h
OVMCORRESH_OVM2_MASK                     equ 0001h
OVMCORRESH_OVM3_POSN                     equ 0001h
OVMCORRESH_OVM3_POSITION                 equ 0001h
OVMCORRESH_OVM3_SIZE                     equ 0001h
OVMCORRESH_OVM3_LENGTH                   equ 0001h
OVMCORRESH_OVM3_MASK                     equ 0002h
OVMCORRESH_OVM4_POSN                     equ 0002h
OVMCORRESH_OVM4_POSITION                 equ 0002h
OVMCORRESH_OVM4_SIZE                     equ 0001h
OVMCORRESH_OVM4_LENGTH                   equ 0001h
OVMCORRESH_OVM4_MASK                     equ 0004h
OVMCORRESH_OVM5_POSN                     equ 0003h
OVMCORRESH_OVM5_POSITION                 equ 0003h
OVMCORRESH_OVM5_SIZE                     equ 0001h
OVMCORRESH_OVM5_LENGTH                   equ 0001h
OVMCORRESH_OVM5_MASK                     equ 0008h
OVMCORRESH_OVM6_POSN                     equ 0004h
OVMCORRESH_OVM6_POSITION                 equ 0004h
OVMCORRESH_OVM6_SIZE                     equ 0001h
OVMCORRESH_OVM6_LENGTH                   equ 0001h
OVMCORRESH_OVM6_MASK                     equ 0010h
OVMCORRESH_OVM7_POSN                     equ 0005h
OVMCORRESH_OVM7_POSITION                 equ 0005h
OVMCORRESH_OVM7_SIZE                     equ 0001h
OVMCORRESH_OVM7_LENGTH                   equ 0001h
OVMCORRESH_OVM7_MASK                     equ 0020h
OVMCORRESH_OVM8_POSN                     equ 0006h
OVMCORRESH_OVM8_POSITION                 equ 0006h
OVMCORRESH_OVM8_SIZE                     equ 0001h
OVMCORRESH_OVM8_LENGTH                   equ 0001h
OVMCORRESH_OVM8_MASK                     equ 0040h
OVMCORRESH_OVM9_POSN                     equ 0007h
OVMCORRESH_OVM9_POSITION                 equ 0007h
OVMCORRESH_OVM9_SIZE                     equ 0001h
OVMCORRESH_OVM9_LENGTH                   equ 0001h
OVMCORRESH_OVM9_MASK                     equ 0080h

// Register: PIR0
#define PIR0 PIR0
PIR0                                     equ 070Ch
// bitfield definitions
PIR0_INT0IF_POSN                         equ 0000h
PIR0_INT0IF_POSITION                     equ 0000h
PIR0_INT0IF_SIZE                         equ 0001h
PIR0_INT0IF_LENGTH                       equ 0001h
PIR0_INT0IF_MASK                         equ 0001h
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
PIR0_FVRIF_POSN                          equ 0006h
PIR0_FVRIF_POSITION                      equ 0006h
PIR0_FVRIF_SIZE                          equ 0001h
PIR0_FVRIF_LENGTH                        equ 0001h
PIR0_FVRIF_MASK                          equ 0040h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 070Dh
// bitfield definitions
PIR1_ADIF_POSN                           equ 0000h
PIR1_ADIF_POSITION                       equ 0000h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0001h
PIR1_CSWIF_POSN                          equ 0003h
PIR1_CSWIF_POSITION                      equ 0003h
PIR1_CSWIF_SIZE                          equ 0001h
PIR1_CSWIF_LENGTH                        equ 0001h
PIR1_CSWIF_MASK                          equ 0008h
PIR1_NVMIF_POSN                          equ 0005h
PIR1_NVMIF_POSITION                      equ 0005h
PIR1_NVMIF_SIZE                          equ 0001h
PIR1_NVMIF_LENGTH                        equ 0001h
PIR1_NVMIF_MASK                          equ 0020h
PIR1_CRCIF_POSN                          equ 0006h
PIR1_CRCIF_POSITION                      equ 0006h
PIR1_CRCIF_SIZE                          equ 0001h
PIR1_CRCIF_LENGTH                        equ 0001h
PIR1_CRCIF_MASK                          equ 0040h
PIR1_DMAIF_POSN                          equ 0007h
PIR1_DMAIF_POSITION                      equ 0007h
PIR1_DMAIF_SIZE                          equ 0001h
PIR1_DMAIF_LENGTH                        equ 0001h
PIR1_DMAIF_MASK                          equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 070Eh
// bitfield definitions
PIR2_TMR1IF_POSN                         equ 0000h
PIR2_TMR1IF_POSITION                     equ 0000h
PIR2_TMR1IF_SIZE                         equ 0001h
PIR2_TMR1IF_LENGTH                       equ 0001h
PIR2_TMR1IF_MASK                         equ 0001h
PIR2_TMR2IF_POSN                         equ 0001h
PIR2_TMR2IF_POSITION                     equ 0001h
PIR2_TMR2IF_SIZE                         equ 0001h
PIR2_TMR2IF_LENGTH                       equ 0001h
PIR2_TMR2IF_MASK                         equ 0002h
PIR2_TMR3IF_POSN                         equ 0002h
PIR2_TMR3IF_POSITION                     equ 0002h
PIR2_TMR3IF_SIZE                         equ 0001h
PIR2_TMR3IF_LENGTH                       equ 0001h
PIR2_TMR3IF_MASK                         equ 0004h
PIR2_TMR4IF_POSN                         equ 0003h
PIR2_TMR4IF_POSITION                     equ 0003h
PIR2_TMR4IF_SIZE                         equ 0001h
PIR2_TMR4IF_LENGTH                       equ 0001h
PIR2_TMR4IF_MASK                         equ 0008h
PIR2_TMR1GIF_POSN                        equ 0006h
PIR2_TMR1GIF_POSITION                    equ 0006h
PIR2_TMR1GIF_SIZE                        equ 0001h
PIR2_TMR1GIF_LENGTH                      equ 0001h
PIR2_TMR1GIF_MASK                        equ 0040h
PIR2_TMR3GIF_POSN                        equ 0007h
PIR2_TMR3GIF_POSITION                    equ 0007h
PIR2_TMR3GIF_SIZE                        equ 0001h
PIR2_TMR3GIF_LENGTH                      equ 0001h
PIR2_TMR3GIF_MASK                        equ 0080h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 070Fh
// bitfield definitions
PIR3_CCP1IF_POSN                         equ 0000h
PIR3_CCP1IF_POSITION                     equ 0000h
PIR3_CCP1IF_SIZE                         equ 0001h
PIR3_CCP1IF_LENGTH                       equ 0001h
PIR3_CCP1IF_MASK                         equ 0001h
PIR3_CCP2IF_POSN                         equ 0001h
PIR3_CCP2IF_POSITION                     equ 0001h
PIR3_CCP2IF_SIZE                         equ 0001h
PIR3_CCP2IF_LENGTH                       equ 0001h
PIR3_CCP2IF_MASK                         equ 0002h
PIR3_CLC1IF_POSN                         equ 0004h
PIR3_CLC1IF_POSITION                     equ 0004h
PIR3_CLC1IF_SIZE                         equ 0001h
PIR3_CLC1IF_LENGTH                       equ 0001h
PIR3_CLC1IF_MASK                         equ 0010h
PIR3_CLC2IF_POSN                         equ 0005h
PIR3_CLC2IF_POSITION                     equ 0005h
PIR3_CLC2IF_SIZE                         equ 0001h
PIR3_CLC2IF_LENGTH                       equ 0001h
PIR3_CLC2IF_MASK                         equ 0020h

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0710h
// bitfield definitions
PIR4_SSP1IF_POSN                         equ 0000h
PIR4_SSP1IF_POSITION                     equ 0000h
PIR4_SSP1IF_SIZE                         equ 0001h
PIR4_SSP1IF_LENGTH                       equ 0001h
PIR4_SSP1IF_MASK                         equ 0001h
PIR4_BCL1IF_POSN                         equ 0001h
PIR4_BCL1IF_POSITION                     equ 0001h
PIR4_BCL1IF_SIZE                         equ 0001h
PIR4_BCL1IF_LENGTH                       equ 0001h
PIR4_BCL1IF_MASK                         equ 0002h
PIR4_TXIF_POSN                           equ 0004h
PIR4_TXIF_POSITION                       equ 0004h
PIR4_TXIF_SIZE                           equ 0001h
PIR4_TXIF_LENGTH                         equ 0001h
PIR4_TXIF_MASK                           equ 0010h
PIR4_RCIF_POSN                           equ 0005h
PIR4_RCIF_POSITION                       equ 0005h
PIR4_RCIF_SIZE                           equ 0001h
PIR4_RCIF_LENGTH                         equ 0001h
PIR4_RCIF_MASK                           equ 0020h

// Register: PIR5
#define PIR5 PIR5
PIR5                                     equ 0711h
// bitfield definitions
PIR5_OCMUCIF_POSN                        equ 0000h
PIR5_OCMUCIF_POSITION                    equ 0000h
PIR5_OCMUCIF_SIZE                        equ 0001h
PIR5_OCMUCIF_LENGTH                      equ 0001h
PIR5_OCMUCIF_MASK                        equ 0001h
PIR5_OCMOCIF_POSN                        equ 0001h
PIR5_OCMOCIF_POSITION                    equ 0001h
PIR5_OCMOCIF_SIZE                        equ 0001h
PIR5_OCMOCIF_LENGTH                      equ 0001h
PIR5_OCMOCIF_MASK                        equ 0002h
PIR5_OCMADCIF_POSN                       equ 0002h
PIR5_OCMADCIF_POSITION                   equ 0002h
PIR5_OCMADCIF_SIZE                       equ 0001h
PIR5_OCMADCIF_LENGTH                     equ 0001h
PIR5_OCMADCIF_MASK                       equ 0004h
PIR5_OVMUVIF_POSN                        equ 0004h
PIR5_OVMUVIF_POSITION                    equ 0004h
PIR5_OVMUVIF_SIZE                        equ 0001h
PIR5_OVMUVIF_LENGTH                      equ 0001h
PIR5_OVMUVIF_MASK                        equ 0010h
PIR5_OVMOVIF_POSN                        equ 0005h
PIR5_OVMOVIF_POSITION                    equ 0005h
PIR5_OVMOVIF_SIZE                        equ 0001h
PIR5_OVMOVIF_LENGTH                      equ 0001h
PIR5_OVMOVIF_MASK                        equ 0020h
PIR5_OVMADCIF_POSN                       equ 0006h
PIR5_OVMADCIF_POSITION                   equ 0006h
PIR5_OVMADCIF_SIZE                       equ 0001h
PIR5_OVMADCIF_LENGTH                     equ 0001h
PIR5_OVMADCIF_MASK                       equ 0040h

// Register: PIR6
#define PIR6 PIR6
PIR6                                     equ 0712h
// bitfield definitions
PIR6_ICMOCIF_POSN                        equ 0001h
PIR6_ICMOCIF_POSITION                    equ 0001h
PIR6_ICMOCIF_SIZE                        equ 0001h
PIR6_ICMOCIF_LENGTH                      equ 0001h
PIR6_ICMOCIF_MASK                        equ 0002h
PIR6_IVMUVIF_POSN                        equ 0004h
PIR6_IVMUVIF_POSITION                    equ 0004h
PIR6_IVMUVIF_SIZE                        equ 0001h
PIR6_IVMUVIF_LENGTH                      equ 0001h
PIR6_IVMUVIF_MASK                        equ 0010h
PIR6_IVMOVIF_POSN                        equ 0005h
PIR6_IVMOVIF_POSITION                    equ 0005h
PIR6_IVMOVIF_SIZE                        equ 0001h
PIR6_IVMOVIF_LENGTH                      equ 0001h
PIR6_IVMOVIF_MASK                        equ 0020h
PIR6_IVMADCIF_POSN                       equ 0006h
PIR6_IVMADCIF_POSITION                   equ 0006h
PIR6_IVMADCIF_SIZE                       equ 0001h
PIR6_IVMADCIF_LENGTH                     equ 0001h
PIR6_IVMADCIF_MASK                       equ 0040h

// Register: PIR7
#define PIR7 PIR7
PIR7                                     equ 0713h
// bitfield definitions
PIR7_DEMIF_POSN                          equ 0000h
PIR7_DEMIF_POSITION                      equ 0000h
PIR7_DEMIF_SIZE                          equ 0001h
PIR7_DEMIF_LENGTH                        equ 0001h
PIR7_DEMIF_MASK                          equ 0001h
PIR7_TSWIF_POSN                          equ 0002h
PIR7_TSWIF_POSITION                      equ 0002h
PIR7_TSWIF_SIZE                          equ 0001h
PIR7_TSWIF_LENGTH                        equ 0001h
PIR7_TSWIF_MASK                          equ 0004h
PIR7_SWFRQIF_POSN                        equ 0004h
PIR7_SWFRQIF_POSITION                    equ 0004h
PIR7_SWFRQIF_SIZE                        equ 0001h
PIR7_SWFRQIF_LENGTH                      equ 0001h
PIR7_SWFRQIF_MASK                        equ 0010h
PIR7_NCOIF_POSN                          equ 0004h
PIR7_NCOIF_POSITION                      equ 0004h
PIR7_NCOIF_SIZE                          equ 0001h
PIR7_NCOIF_LENGTH                        equ 0001h
PIR7_NCOIF_MASK                          equ 0010h

// Register: PIE0
#define PIE0 PIE0
PIE0                                     equ 0716h
// bitfield definitions
PIE0_INT0IE_POSN                         equ 0000h
PIE0_INT0IE_POSITION                     equ 0000h
PIE0_INT0IE_SIZE                         equ 0001h
PIE0_INT0IE_LENGTH                       equ 0001h
PIE0_INT0IE_MASK                         equ 0001h
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
PIE0_FVRIE_POSN                          equ 0006h
PIE0_FVRIE_POSITION                      equ 0006h
PIE0_FVRIE_SIZE                          equ 0001h
PIE0_FVRIE_LENGTH                        equ 0001h
PIE0_FVRIE_MASK                          equ 0040h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0717h
// bitfield definitions
PIE1_ADIE_POSN                           equ 0000h
PIE1_ADIE_POSITION                       equ 0000h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0001h
PIE1_CSWIE_POSN                          equ 0003h
PIE1_CSWIE_POSITION                      equ 0003h
PIE1_CSWIE_SIZE                          equ 0001h
PIE1_CSWIE_LENGTH                        equ 0001h
PIE1_CSWIE_MASK                          equ 0008h
PIE1_NVMIE_POSN                          equ 0005h
PIE1_NVMIE_POSITION                      equ 0005h
PIE1_NVMIE_SIZE                          equ 0001h
PIE1_NVMIE_LENGTH                        equ 0001h
PIE1_NVMIE_MASK                          equ 0020h
PIE1_CRCIE_POSN                          equ 0006h
PIE1_CRCIE_POSITION                      equ 0006h
PIE1_CRCIE_SIZE                          equ 0001h
PIE1_CRCIE_LENGTH                        equ 0001h
PIE1_CRCIE_MASK                          equ 0040h
PIE1_DMAIE_POSN                          equ 0007h
PIE1_DMAIE_POSITION                      equ 0007h
PIE1_DMAIE_SIZE                          equ 0001h
PIE1_DMAIE_LENGTH                        equ 0001h
PIE1_DMAIE_MASK                          equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0718h
// bitfield definitions
PIE2_TMR1IE_POSN                         equ 0000h
PIE2_TMR1IE_POSITION                     equ 0000h
PIE2_TMR1IE_SIZE                         equ 0001h
PIE2_TMR1IE_LENGTH                       equ 0001h
PIE2_TMR1IE_MASK                         equ 0001h
PIE2_TMR2IE_POSN                         equ 0001h
PIE2_TMR2IE_POSITION                     equ 0001h
PIE2_TMR2IE_SIZE                         equ 0001h
PIE2_TMR2IE_LENGTH                       equ 0001h
PIE2_TMR2IE_MASK                         equ 0002h
PIE2_TMR3IE_POSN                         equ 0002h
PIE2_TMR3IE_POSITION                     equ 0002h
PIE2_TMR3IE_SIZE                         equ 0001h
PIE2_TMR3IE_LENGTH                       equ 0001h
PIE2_TMR3IE_MASK                         equ 0004h
PIE2_TMR4IE_POSN                         equ 0003h
PIE2_TMR4IE_POSITION                     equ 0003h
PIE2_TMR4IE_SIZE                         equ 0001h
PIE2_TMR4IE_LENGTH                       equ 0001h
PIE2_TMR4IE_MASK                         equ 0008h
PIE2_TMR1GIE_POSN                        equ 0006h
PIE2_TMR1GIE_POSITION                    equ 0006h
PIE2_TMR1GIE_SIZE                        equ 0001h
PIE2_TMR1GIE_LENGTH                      equ 0001h
PIE2_TMR1GIE_MASK                        equ 0040h
PIE2_TMR3GIE_POSN                        equ 0007h
PIE2_TMR3GIE_POSITION                    equ 0007h
PIE2_TMR3GIE_SIZE                        equ 0001h
PIE2_TMR3GIE_LENGTH                      equ 0001h
PIE2_TMR3GIE_MASK                        equ 0080h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0719h
// bitfield definitions
PIE3_CCP1IE_POSN                         equ 0000h
PIE3_CCP1IE_POSITION                     equ 0000h
PIE3_CCP1IE_SIZE                         equ 0001h
PIE3_CCP1IE_LENGTH                       equ 0001h
PIE3_CCP1IE_MASK                         equ 0001h
PIE3_CCP2IE_POSN                         equ 0001h
PIE3_CCP2IE_POSITION                     equ 0001h
PIE3_CCP2IE_SIZE                         equ 0001h
PIE3_CCP2IE_LENGTH                       equ 0001h
PIE3_CCP2IE_MASK                         equ 0002h
PIE3_CLC1IE_POSN                         equ 0004h
PIE3_CLC1IE_POSITION                     equ 0004h
PIE3_CLC1IE_SIZE                         equ 0001h
PIE3_CLC1IE_LENGTH                       equ 0001h
PIE3_CLC1IE_MASK                         equ 0010h
PIE3_CLC2IE_POSN                         equ 0005h
PIE3_CLC2IE_POSITION                     equ 0005h
PIE3_CLC2IE_SIZE                         equ 0001h
PIE3_CLC2IE_LENGTH                       equ 0001h
PIE3_CLC2IE_MASK                         equ 0020h

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 071Ah
// bitfield definitions
PIE4_SSP1IE_POSN                         equ 0000h
PIE4_SSP1IE_POSITION                     equ 0000h
PIE4_SSP1IE_SIZE                         equ 0001h
PIE4_SSP1IE_LENGTH                       equ 0001h
PIE4_SSP1IE_MASK                         equ 0001h
PIE4_BCL1IE_POSN                         equ 0001h
PIE4_BCL1IE_POSITION                     equ 0001h
PIE4_BCL1IE_SIZE                         equ 0001h
PIE4_BCL1IE_LENGTH                       equ 0001h
PIE4_BCL1IE_MASK                         equ 0002h
PIE4_TXIE_POSN                           equ 0004h
PIE4_TXIE_POSITION                       equ 0004h
PIE4_TXIE_SIZE                           equ 0001h
PIE4_TXIE_LENGTH                         equ 0001h
PIE4_TXIE_MASK                           equ 0010h
PIE4_RCIE_POSN                           equ 0005h
PIE4_RCIE_POSITION                       equ 0005h
PIE4_RCIE_SIZE                           equ 0001h
PIE4_RCIE_LENGTH                         equ 0001h
PIE4_RCIE_MASK                           equ 0020h

// Register: PIE5
#define PIE5 PIE5
PIE5                                     equ 071Bh
// bitfield definitions
PIE5_OCMUCIE_POSN                        equ 0000h
PIE5_OCMUCIE_POSITION                    equ 0000h
PIE5_OCMUCIE_SIZE                        equ 0001h
PIE5_OCMUCIE_LENGTH                      equ 0001h
PIE5_OCMUCIE_MASK                        equ 0001h
PIE5_OCMOCIE_POSN                        equ 0001h
PIE5_OCMOCIE_POSITION                    equ 0001h
PIE5_OCMOCIE_SIZE                        equ 0001h
PIE5_OCMOCIE_LENGTH                      equ 0001h
PIE5_OCMOCIE_MASK                        equ 0002h
PIE5_OCMADCIE_POSN                       equ 0002h
PIE5_OCMADCIE_POSITION                   equ 0002h
PIE5_OCMADCIE_SIZE                       equ 0001h
PIE5_OCMADCIE_LENGTH                     equ 0001h
PIE5_OCMADCIE_MASK                       equ 0004h
PIE5_OVMUVIE_POSN                        equ 0004h
PIE5_OVMUVIE_POSITION                    equ 0004h
PIE5_OVMUVIE_SIZE                        equ 0001h
PIE5_OVMUVIE_LENGTH                      equ 0001h
PIE5_OVMUVIE_MASK                        equ 0010h
PIE5_OVMOVIE_POSN                        equ 0005h
PIE5_OVMOVIE_POSITION                    equ 0005h
PIE5_OVMOVIE_SIZE                        equ 0001h
PIE5_OVMOVIE_LENGTH                      equ 0001h
PIE5_OVMOVIE_MASK                        equ 0020h
PIE5_OVMADCIE_POSN                       equ 0006h
PIE5_OVMADCIE_POSITION                   equ 0006h
PIE5_OVMADCIE_SIZE                       equ 0001h
PIE5_OVMADCIE_LENGTH                     equ 0001h
PIE5_OVMADCIE_MASK                       equ 0040h

// Register: PIE6
#define PIE6 PIE6
PIE6                                     equ 071Ch
// bitfield definitions
PIE6_ICMOCIE_POSN                        equ 0001h
PIE6_ICMOCIE_POSITION                    equ 0001h
PIE6_ICMOCIE_SIZE                        equ 0001h
PIE6_ICMOCIE_LENGTH                      equ 0001h
PIE6_ICMOCIE_MASK                        equ 0002h
PIE6_IVMUVIE_POSN                        equ 0004h
PIE6_IVMUVIE_POSITION                    equ 0004h
PIE6_IVMUVIE_SIZE                        equ 0001h
PIE6_IVMUVIE_LENGTH                      equ 0001h
PIE6_IVMUVIE_MASK                        equ 0010h
PIE6_IVMOVIE_POSN                        equ 0005h
PIE6_IVMOVIE_POSITION                    equ 0005h
PIE6_IVMOVIE_SIZE                        equ 0001h
PIE6_IVMOVIE_LENGTH                      equ 0001h
PIE6_IVMOVIE_MASK                        equ 0020h
PIE6_IVMADCIE_POSN                       equ 0006h
PIE6_IVMADCIE_POSITION                   equ 0006h
PIE6_IVMADCIE_SIZE                       equ 0001h
PIE6_IVMADCIE_LENGTH                     equ 0001h
PIE6_IVMADCIE_MASK                       equ 0040h

// Register: PIE7
#define PIE7 PIE7
PIE7                                     equ 071Dh
// bitfield definitions
PIE7_DEMIE_POSN                          equ 0000h
PIE7_DEMIE_POSITION                      equ 0000h
PIE7_DEMIE_SIZE                          equ 0001h
PIE7_DEMIE_LENGTH                        equ 0001h
PIE7_DEMIE_MASK                          equ 0001h
PIE7_TSWIE_POSN                          equ 0002h
PIE7_TSWIE_POSITION                      equ 0002h
PIE7_TSWIE_SIZE                          equ 0001h
PIE7_TSWIE_LENGTH                        equ 0001h
PIE7_TSWIE_MASK                          equ 0004h
PIE7_SWFRQIE_POSN                        equ 0004h
PIE7_SWFRQIE_POSITION                    equ 0004h
PIE7_SWFRQIE_SIZE                        equ 0001h
PIE7_SWFRQIE_LENGTH                      equ 0001h
PIE7_SWFRQIE_MASK                        equ 0010h
PIE7_NCOIE_POSN                          equ 0004h
PIE7_NCOIE_POSITION                      equ 0004h
PIE7_NCOIE_SIZE                          equ 0001h
PIE7_NCOIE_LENGTH                        equ 0001h
PIE7_NCOIE_MASK                          equ 0010h

// Register: PMD0
#define PMD0 PMD0
PMD0                                     equ 0796h
// bitfield definitions
PMD0_IOCMD_POSN                          equ 0000h
PMD0_IOCMD_POSITION                      equ 0000h
PMD0_IOCMD_SIZE                          equ 0001h
PMD0_IOCMD_LENGTH                        equ 0001h
PMD0_IOCMD_MASK                          equ 0001h
PMD0_NVMMD_POSN                          equ 0002h
PMD0_NVMMD_POSITION                      equ 0002h
PMD0_NVMMD_SIZE                          equ 0001h
PMD0_NVMMD_LENGTH                        equ 0001h
PMD0_NVMMD_MASK                          equ 0004h
PMD0_SCANMD_POSN                         equ 0003h
PMD0_SCANMD_POSITION                     equ 0003h
PMD0_SCANMD_SIZE                         equ 0001h
PMD0_SCANMD_LENGTH                       equ 0001h
PMD0_SCANMD_MASK                         equ 0008h
PMD0_CRCMD_POSN                          equ 0004h
PMD0_CRCMD_POSITION                      equ 0004h
PMD0_CRCMD_SIZE                          equ 0001h
PMD0_CRCMD_LENGTH                        equ 0001h
PMD0_CRCMD_MASK                          equ 0010h
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
PMD1                                     equ 0797h
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
PMD1_CCP1MD_POSN                         equ 0006h
PMD1_CCP1MD_POSITION                     equ 0006h
PMD1_CCP1MD_SIZE                         equ 0001h
PMD1_CCP1MD_LENGTH                       equ 0001h
PMD1_CCP1MD_MASK                         equ 0040h
PMD1_CCP2MD_POSN                         equ 0007h
PMD1_CCP2MD_POSITION                     equ 0007h
PMD1_CCP2MD_SIZE                         equ 0001h
PMD1_CCP2MD_LENGTH                       equ 0001h
PMD1_CCP2MD_MASK                         equ 0080h

// Register: PMD2
#define PMD2 PMD2
PMD2                                     equ 0798h
// bitfield definitions
PMD2_CLC1MD_POSN                         equ 0000h
PMD2_CLC1MD_POSITION                     equ 0000h
PMD2_CLC1MD_SIZE                         equ 0001h
PMD2_CLC1MD_LENGTH                       equ 0001h
PMD2_CLC1MD_MASK                         equ 0001h
PMD2_CLC2MD_POSN                         equ 0001h
PMD2_CLC2MD_POSITION                     equ 0001h
PMD2_CLC2MD_SIZE                         equ 0001h
PMD2_CLC2MD_LENGTH                       equ 0001h
PMD2_CLC2MD_MASK                         equ 0002h
PMD2_ADCMD_POSN                          equ 0003h
PMD2_ADCMD_POSITION                      equ 0003h
PMD2_ADCMD_SIZE                          equ 0001h
PMD2_ADCMD_LENGTH                        equ 0001h
PMD2_ADCMD_MASK                          equ 0008h
PMD2_MSSP1MD_POSN                        equ 0005h
PMD2_MSSP1MD_POSITION                    equ 0005h
PMD2_MSSP1MD_SIZE                        equ 0001h
PMD2_MSSP1MD_LENGTH                      equ 0001h
PMD2_MSSP1MD_MASK                        equ 0020h
PMD2_UART1MD_POSN                        equ 0007h
PMD2_UART1MD_POSITION                    equ 0007h
PMD2_UART1MD_SIZE                        equ 0001h
PMD2_UART1MD_LENGTH                      equ 0001h
PMD2_UART1MD_MASK                        equ 0080h

// Register: PMD3
#define PMD3 PMD3
PMD3                                     equ 0799h
// bitfield definitions
PMD3_ICMMD_POSN                          equ 0000h
PMD3_ICMMD_POSITION                      equ 0000h
PMD3_ICMMD_SIZE                          equ 0001h
PMD3_ICMMD_LENGTH                        equ 0001h
PMD3_ICMMD_MASK                          equ 0001h
PMD3_IVMMD_POSN                          equ 0002h
PMD3_IVMMD_POSITION                      equ 0002h
PMD3_IVMMD_SIZE                          equ 0001h
PMD3_IVMMD_LENGTH                        equ 0001h
PMD3_IVMMD_MASK                          equ 0004h
PMD3_OCMMD_POSN                          equ 0004h
PMD3_OCMMD_POSITION                      equ 0004h
PMD3_OCMMD_SIZE                          equ 0001h
PMD3_OCMMD_LENGTH                        equ 0001h
PMD3_OCMMD_MASK                          equ 0010h
PMD3_OVMMD_POSN                          equ 0006h
PMD3_OVMMD_POSITION                      equ 0006h
PMD3_OVMMD_SIZE                          equ 0001h
PMD3_OVMMD_LENGTH                        equ 0001h
PMD3_OVMMD_MASK                          equ 0040h

// Register: PMD4
#define PMD4 PMD4
PMD4                                     equ 079Ah
// bitfield definitions
PMD4_OCRMD_POSN                          equ 0000h
PMD4_OCRMD_POSITION                      equ 0000h
PMD4_OCRMD_SIZE                          equ 0001h
PMD4_OCRMD_LENGTH                        equ 0001h
PMD4_OCRMD_MASK                          equ 0001h
PMD4_DCOMPMD_POSN                        equ 0002h
PMD4_DCOMPMD_POSITION                    equ 0002h
PMD4_DCOMPMD_SIZE                        equ 0001h
PMD4_DCOMPMD_LENGTH                      equ 0001h
PMD4_DCOMPMD_MASK                        equ 0004h
PMD4_SWFRQMD_POSN                        equ 0004h
PMD4_SWFRQMD_POSITION                    equ 0004h
PMD4_SWFRQMD_SIZE                        equ 0001h
PMD4_SWFRQMD_LENGTH                      equ 0001h
PMD4_SWFRQMD_MASK                        equ 0010h
PMD4_DEMMD_POSN                          equ 0006h
PMD4_DEMMD_POSITION                      equ 0006h
PMD4_DEMMD_SIZE                          equ 0001h
PMD4_DEMMD_LENGTH                        equ 0001h
PMD4_DEMMD_MASK                          equ 0040h

// Register: WDTCON0
#define WDTCON0 WDTCON0
WDTCON0                                  equ 080Ch
// bitfield definitions
WDTCON0_SWDTEN_POSN                      equ 0000h
WDTCON0_SWDTEN_POSITION                  equ 0000h
WDTCON0_SWDTEN_SIZE                      equ 0001h
WDTCON0_SWDTEN_LENGTH                    equ 0001h
WDTCON0_SWDTEN_MASK                      equ 0001h
WDTCON0_WDTPS0_POSN                      equ 0001h
WDTCON0_WDTPS0_POSITION                  equ 0001h
WDTCON0_WDTPS0_SIZE                      equ 0001h
WDTCON0_WDTPS0_LENGTH                    equ 0001h
WDTCON0_WDTPS0_MASK                      equ 0002h
WDTCON0_WDTPS1_POSN                      equ 0002h
WDTCON0_WDTPS1_POSITION                  equ 0002h
WDTCON0_WDTPS1_SIZE                      equ 0001h
WDTCON0_WDTPS1_LENGTH                    equ 0001h
WDTCON0_WDTPS1_MASK                      equ 0004h
WDTCON0_WDTPS2_POSN                      equ 0003h
WDTCON0_WDTPS2_POSITION                  equ 0003h
WDTCON0_WDTPS2_SIZE                      equ 0001h
WDTCON0_WDTPS2_LENGTH                    equ 0001h
WDTCON0_WDTPS2_MASK                      equ 0008h
WDTCON0_WDTPS3_POSN                      equ 0004h
WDTCON0_WDTPS3_POSITION                  equ 0004h
WDTCON0_WDTPS3_SIZE                      equ 0001h
WDTCON0_WDTPS3_LENGTH                    equ 0001h
WDTCON0_WDTPS3_MASK                      equ 0010h
WDTCON0_WDTPS4_POSN                      equ 0005h
WDTCON0_WDTPS4_POSITION                  equ 0005h
WDTCON0_WDTPS4_SIZE                      equ 0001h
WDTCON0_WDTPS4_LENGTH                    equ 0001h
WDTCON0_WDTPS4_MASK                      equ 0020h

// Register: WDTCON1
#define WDTCON1 WDTCON1
WDTCON1                                  equ 080Dh
// bitfield definitions
WDTCON1_WINDOW0_POSN                     equ 0000h
WDTCON1_WINDOW0_POSITION                 equ 0000h
WDTCON1_WINDOW0_SIZE                     equ 0001h
WDTCON1_WINDOW0_LENGTH                   equ 0001h
WDTCON1_WINDOW0_MASK                     equ 0001h
WDTCON1_WINDOW1_POSN                     equ 0001h
WDTCON1_WINDOW1_POSITION                 equ 0001h
WDTCON1_WINDOW1_SIZE                     equ 0001h
WDTCON1_WINDOW1_LENGTH                   equ 0001h
WDTCON1_WINDOW1_MASK                     equ 0002h
WDTCON1_WINDOW2_POSN                     equ 0002h
WDTCON1_WINDOW2_POSITION                 equ 0002h
WDTCON1_WINDOW2_SIZE                     equ 0001h
WDTCON1_WINDOW2_LENGTH                   equ 0001h
WDTCON1_WINDOW2_MASK                     equ 0004h
WDTCON1_WDTCS0_POSN                      equ 0004h
WDTCON1_WDTCS0_POSITION                  equ 0004h
WDTCON1_WDTCS0_SIZE                      equ 0001h
WDTCON1_WDTCS0_LENGTH                    equ 0001h
WDTCON1_WDTCS0_MASK                      equ 0010h
WDTCON1_WDTCS1_POSN                      equ 0005h
WDTCON1_WDTCS1_POSITION                  equ 0005h
WDTCON1_WDTCS1_SIZE                      equ 0001h
WDTCON1_WDTCS1_LENGTH                    equ 0001h
WDTCON1_WDTCS1_MASK                      equ 0020h
WDTCON1_WDTCS2_POSN                      equ 0006h
WDTCON1_WDTCS2_POSITION                  equ 0006h
WDTCON1_WDTCS2_SIZE                      equ 0001h
WDTCON1_WDTCS2_LENGTH                    equ 0001h
WDTCON1_WDTCS2_MASK                      equ 0040h

// Register: WDTPSL
#define WDTPSL WDTPSL
WDTPSL                                   equ 080Eh
// bitfield definitions
WDTPSL_PSCNT_POSN                        equ 0000h
WDTPSL_PSCNT_POSITION                    equ 0000h
WDTPSL_PSCNT_SIZE                        equ 0008h
WDTPSL_PSCNT_LENGTH                      equ 0008h
WDTPSL_PSCNT_MASK                        equ 00FFh
WDTPSL_PSCNT0_POSN                       equ 0000h
WDTPSL_PSCNT0_POSITION                   equ 0000h
WDTPSL_PSCNT0_SIZE                       equ 0001h
WDTPSL_PSCNT0_LENGTH                     equ 0001h
WDTPSL_PSCNT0_MASK                       equ 0001h
WDTPSL_PSCNT1_POSN                       equ 0001h
WDTPSL_PSCNT1_POSITION                   equ 0001h
WDTPSL_PSCNT1_SIZE                       equ 0001h
WDTPSL_PSCNT1_LENGTH                     equ 0001h
WDTPSL_PSCNT1_MASK                       equ 0002h
WDTPSL_PSCNT2_POSN                       equ 0002h
WDTPSL_PSCNT2_POSITION                   equ 0002h
WDTPSL_PSCNT2_SIZE                       equ 0001h
WDTPSL_PSCNT2_LENGTH                     equ 0001h
WDTPSL_PSCNT2_MASK                       equ 0004h
WDTPSL_PSCNT3_POSN                       equ 0003h
WDTPSL_PSCNT3_POSITION                   equ 0003h
WDTPSL_PSCNT3_SIZE                       equ 0001h
WDTPSL_PSCNT3_LENGTH                     equ 0001h
WDTPSL_PSCNT3_MASK                       equ 0008h
WDTPSL_PSCNT4_POSN                       equ 0004h
WDTPSL_PSCNT4_POSITION                   equ 0004h
WDTPSL_PSCNT4_SIZE                       equ 0001h
WDTPSL_PSCNT4_LENGTH                     equ 0001h
WDTPSL_PSCNT4_MASK                       equ 0010h
WDTPSL_PSCNT5_POSN                       equ 0005h
WDTPSL_PSCNT5_POSITION                   equ 0005h
WDTPSL_PSCNT5_SIZE                       equ 0001h
WDTPSL_PSCNT5_LENGTH                     equ 0001h
WDTPSL_PSCNT5_MASK                       equ 0020h
WDTPSL_PSCNT6_POSN                       equ 0006h
WDTPSL_PSCNT6_POSITION                   equ 0006h
WDTPSL_PSCNT6_SIZE                       equ 0001h
WDTPSL_PSCNT6_LENGTH                     equ 0001h
WDTPSL_PSCNT6_MASK                       equ 0040h
WDTPSL_PSCNT7_POSN                       equ 0007h
WDTPSL_PSCNT7_POSITION                   equ 0007h
WDTPSL_PSCNT7_SIZE                       equ 0001h
WDTPSL_PSCNT7_LENGTH                     equ 0001h
WDTPSL_PSCNT7_MASK                       equ 0080h

// Register: WDTPSH
#define WDTPSH WDTPSH
WDTPSH                                   equ 080Fh
// bitfield definitions
WDTPSH_PSCNT_POSN                        equ 0000h
WDTPSH_PSCNT_POSITION                    equ 0000h
WDTPSH_PSCNT_SIZE                        equ 0008h
WDTPSH_PSCNT_LENGTH                      equ 0008h
WDTPSH_PSCNT_MASK                        equ 00FFh
WDTPSH_PSCNT8_POSN                       equ 0000h
WDTPSH_PSCNT8_POSITION                   equ 0000h
WDTPSH_PSCNT8_SIZE                       equ 0001h
WDTPSH_PSCNT8_LENGTH                     equ 0001h
WDTPSH_PSCNT8_MASK                       equ 0001h
WDTPSH_PSCNT9_POSN                       equ 0001h
WDTPSH_PSCNT9_POSITION                   equ 0001h
WDTPSH_PSCNT9_SIZE                       equ 0001h
WDTPSH_PSCNT9_LENGTH                     equ 0001h
WDTPSH_PSCNT9_MASK                       equ 0002h
WDTPSH_PSCNT10_POSN                      equ 0002h
WDTPSH_PSCNT10_POSITION                  equ 0002h
WDTPSH_PSCNT10_SIZE                      equ 0001h
WDTPSH_PSCNT10_LENGTH                    equ 0001h
WDTPSH_PSCNT10_MASK                      equ 0004h
WDTPSH_PSCNT11_POSN                      equ 0003h
WDTPSH_PSCNT11_POSITION                  equ 0003h
WDTPSH_PSCNT11_SIZE                      equ 0001h
WDTPSH_PSCNT11_LENGTH                    equ 0001h
WDTPSH_PSCNT11_MASK                      equ 0008h
WDTPSH_PSCNT12_POSN                      equ 0004h
WDTPSH_PSCNT12_POSITION                  equ 0004h
WDTPSH_PSCNT12_SIZE                      equ 0001h
WDTPSH_PSCNT12_LENGTH                    equ 0001h
WDTPSH_PSCNT12_MASK                      equ 0010h
WDTPSH_PSCNT13_POSN                      equ 0005h
WDTPSH_PSCNT13_POSITION                  equ 0005h
WDTPSH_PSCNT13_SIZE                      equ 0001h
WDTPSH_PSCNT13_LENGTH                    equ 0001h
WDTPSH_PSCNT13_MASK                      equ 0020h
WDTPSH_PSCNT14_POSN                      equ 0006h
WDTPSH_PSCNT14_POSITION                  equ 0006h
WDTPSH_PSCNT14_SIZE                      equ 0001h
WDTPSH_PSCNT14_LENGTH                    equ 0001h
WDTPSH_PSCNT14_MASK                      equ 0040h
WDTPSH_PSCNT15_POSN                      equ 0007h
WDTPSH_PSCNT15_POSITION                  equ 0007h
WDTPSH_PSCNT15_SIZE                      equ 0001h
WDTPSH_PSCNT15_LENGTH                    equ 0001h
WDTPSH_PSCNT15_MASK                      equ 0080h

// Register: WDTTMR
#define WDTTMR WDTTMR
WDTTMR                                   equ 0810h
// bitfield definitions
WDTTMR_PSCNT_POSN                        equ 0000h
WDTTMR_PSCNT_POSITION                    equ 0000h
WDTTMR_PSCNT_SIZE                        equ 0002h
WDTTMR_PSCNT_LENGTH                      equ 0002h
WDTTMR_PSCNT_MASK                        equ 0003h
WDTTMR_STATE_POSN                        equ 0002h
WDTTMR_STATE_POSITION                    equ 0002h
WDTTMR_STATE_SIZE                        equ 0001h
WDTTMR_STATE_LENGTH                      equ 0001h
WDTTMR_STATE_MASK                        equ 0004h
WDTTMR_WDTTMR_POSN                       equ 0003h
WDTTMR_WDTTMR_POSITION                   equ 0003h
WDTTMR_WDTTMR_SIZE                       equ 0004h
WDTTMR_WDTTMR_LENGTH                     equ 0004h
WDTTMR_WDTTMR_MASK                       equ 0078h
WDTTMR_PSCNT16_POSN                      equ 0000h
WDTTMR_PSCNT16_POSITION                  equ 0000h
WDTTMR_PSCNT16_SIZE                      equ 0001h
WDTTMR_PSCNT16_LENGTH                    equ 0001h
WDTTMR_PSCNT16_MASK                      equ 0001h
WDTTMR_PSCNT17_POSN                      equ 0001h
WDTTMR_PSCNT17_POSITION                  equ 0001h
WDTTMR_PSCNT17_SIZE                      equ 0001h
WDTTMR_PSCNT17_LENGTH                    equ 0001h
WDTTMR_PSCNT17_MASK                      equ 0002h
WDTTMR_WDTTMR0_POSN                      equ 0003h
WDTTMR_WDTTMR0_POSITION                  equ 0003h
WDTTMR_WDTTMR0_SIZE                      equ 0001h
WDTTMR_WDTTMR0_LENGTH                    equ 0001h
WDTTMR_WDTTMR0_MASK                      equ 0008h
WDTTMR_WDTTMR1_POSN                      equ 0004h
WDTTMR_WDTTMR1_POSITION                  equ 0004h
WDTTMR_WDTTMR1_SIZE                      equ 0001h
WDTTMR_WDTTMR1_LENGTH                    equ 0001h
WDTTMR_WDTTMR1_MASK                      equ 0010h
WDTTMR_WDTTMR2_POSN                      equ 0005h
WDTTMR_WDTTMR2_POSITION                  equ 0005h
WDTTMR_WDTTMR2_SIZE                      equ 0001h
WDTTMR_WDTTMR2_LENGTH                    equ 0001h
WDTTMR_WDTTMR2_MASK                      equ 0020h
WDTTMR_WDTTMR3_POSN                      equ 0006h
WDTTMR_WDTTMR3_POSITION                  equ 0006h
WDTTMR_WDTTMR3_SIZE                      equ 0001h
WDTTMR_WDTTMR3_LENGTH                    equ 0001h
WDTTMR_WDTTMR3_MASK                      equ 0040h

// Register: BORCON
#define BORCON BORCON
BORCON                                   equ 0811h
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

// Register: VREGCON
#define VREGCON VREGCON
VREGCON                                  equ 0812h
// bitfield definitions
VREGCON_VREGPM1_POSN                     equ 0001h
VREGCON_VREGPM1_POSITION                 equ 0001h
VREGCON_VREGPM1_SIZE                     equ 0001h
VREGCON_VREGPM1_LENGTH                   equ 0001h
VREGCON_VREGPM1_MASK                     equ 0002h

// Register: PCON0
#define PCON0 PCON0
PCON0                                    equ 0813h
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
PCON0_nWDTWV_POSN                        equ 0005h
PCON0_nWDTWV_POSITION                    equ 0005h
PCON0_nWDTWV_SIZE                        equ 0001h
PCON0_nWDTWV_LENGTH                      equ 0001h
PCON0_nWDTWV_MASK                        equ 0020h
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

// Register: CCDCON
#define CCDCON CCDCON
CCDCON                                   equ 0814h
// bitfield definitions
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
CCDCON_CCDEN_POSN                        equ 0007h
CCDCON_CCDEN_POSITION                    equ 0007h
CCDCON_CCDEN_SIZE                        equ 0001h
CCDCON_CCDEN_LENGTH                      equ 0001h
CCDCON_CCDEN_MASK                        equ 0080h

// Register: NVMADRL
#define NVMADRL NVMADRL
NVMADRL                                  equ 081Ah
// bitfield definitions
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

// Register: NVMADRH
#define NVMADRH NVMADRH
NVMADRH                                  equ 081Bh
// bitfield definitions
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

// Register: NVMDATL
#define NVMDATL NVMDATL
NVMDATL                                  equ 081Ch
// bitfield definitions
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

// Register: NVMDATH
#define NVMDATH NVMDATH
NVMDATH                                  equ 081Dh
// bitfield definitions
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

// Register: NVMCON1
#define NVMCON1 NVMCON1
NVMCON1                                  equ 081Eh
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

// Register: NVMCON2
#define NVMCON2 NVMCON2
NVMCON2                                  equ 081Fh

// Register: CPUDOZE
#define CPUDOZE CPUDOZE
CPUDOZE                                  equ 088Ch
// bitfield definitions
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

// Register: OSCCON1
#define OSCCON1 OSCCON1
OSCCON1                                  equ 088Dh
// bitfield definitions
OSCCON1_NDIV_POSN                        equ 0000h
OSCCON1_NDIV_POSITION                    equ 0000h
OSCCON1_NDIV_SIZE                        equ 0004h
OSCCON1_NDIV_LENGTH                      equ 0004h
OSCCON1_NDIV_MASK                        equ 000Fh
OSCCON1_NOSC_POSN                        equ 0004h
OSCCON1_NOSC_POSITION                    equ 0004h
OSCCON1_NOSC_SIZE                        equ 0002h
OSCCON1_NOSC_LENGTH                      equ 0002h
OSCCON1_NOSC_MASK                        equ 0030h
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

// Register: OSCCON2
#define OSCCON2 OSCCON2
OSCCON2                                  equ 088Eh
// bitfield definitions
OSCCON2_CDIV_POSN                        equ 0000h
OSCCON2_CDIV_POSITION                    equ 0000h
OSCCON2_CDIV_SIZE                        equ 0004h
OSCCON2_CDIV_LENGTH                      equ 0004h
OSCCON2_CDIV_MASK                        equ 000Fh
OSCCON2_COSC_POSN                        equ 0004h
OSCCON2_COSC_POSITION                    equ 0004h
OSCCON2_COSC_SIZE                        equ 0002h
OSCCON2_COSC_LENGTH                      equ 0002h
OSCCON2_COSC_MASK                        equ 0030h
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

// Register: OSCCON3
#define OSCCON3 OSCCON3
OSCCON3                                  equ 088Fh
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
OSCCON3_CSWHOLD_POSN                     equ 0007h
OSCCON3_CSWHOLD_POSITION                 equ 0007h
OSCCON3_CSWHOLD_SIZE                     equ 0001h
OSCCON3_CSWHOLD_LENGTH                   equ 0001h
OSCCON3_CSWHOLD_MASK                     equ 0080h

// Register: OSCSTAT1
#define OSCSTAT1 OSCSTAT1
OSCSTAT1                                 equ 0890h
// bitfield definitions
OSCSTAT1_PLL32OR_POSN                    equ 0000h
OSCSTAT1_PLL32OR_POSITION                equ 0000h
OSCSTAT1_PLL32OR_SIZE                    equ 0001h
OSCSTAT1_PLL32OR_LENGTH                  equ 0001h
OSCSTAT1_PLL32OR_MASK                    equ 0001h
OSCSTAT1_ADOR_POSN                       equ 0002h
OSCSTAT1_ADOR_POSITION                   equ 0002h
OSCSTAT1_ADOR_SIZE                       equ 0001h
OSCSTAT1_ADOR_LENGTH                     equ 0001h
OSCSTAT1_ADOR_MASK                       equ 0004h
OSCSTAT1_LFOR_POSN                       equ 0004h
OSCSTAT1_LFOR_POSITION                   equ 0004h
OSCSTAT1_LFOR_SIZE                       equ 0001h
OSCSTAT1_LFOR_LENGTH                     equ 0001h
OSCSTAT1_LFOR_MASK                       equ 0010h
OSCSTAT1_MFOR_POSN                       equ 0005h
OSCSTAT1_MFOR_POSITION                   equ 0005h
OSCSTAT1_MFOR_SIZE                       equ 0001h
OSCSTAT1_MFOR_LENGTH                     equ 0001h
OSCSTAT1_MFOR_MASK                       equ 0020h
OSCSTAT1_HFOR_POSN                       equ 0006h
OSCSTAT1_HFOR_POSITION                   equ 0006h
OSCSTAT1_HFOR_SIZE                       equ 0001h
OSCSTAT1_HFOR_LENGTH                     equ 0001h
OSCSTAT1_HFOR_MASK                       equ 0040h

// Register: OSCEN
#define OSCEN OSCEN
OSCEN                                    equ 0891h
// bitfield definitions
OSCEN_PLL32EN_POSN                       equ 0000h
OSCEN_PLL32EN_POSITION                   equ 0000h
OSCEN_PLL32EN_SIZE                       equ 0001h
OSCEN_PLL32EN_LENGTH                     equ 0001h
OSCEN_PLL32EN_MASK                       equ 0001h
OSCEN_ADOEN_POSN                         equ 0002h
OSCEN_ADOEN_POSITION                     equ 0002h
OSCEN_ADOEN_SIZE                         equ 0001h
OSCEN_ADOEN_LENGTH                       equ 0001h
OSCEN_ADOEN_MASK                         equ 0004h
OSCEN_LFOEN_POSN                         equ 0004h
OSCEN_LFOEN_POSITION                     equ 0004h
OSCEN_LFOEN_SIZE                         equ 0001h
OSCEN_LFOEN_LENGTH                       equ 0001h
OSCEN_LFOEN_MASK                         equ 0010h
OSCEN_MFOEN_POSN                         equ 0005h
OSCEN_MFOEN_POSITION                     equ 0005h
OSCEN_MFOEN_SIZE                         equ 0001h
OSCEN_MFOEN_LENGTH                       equ 0001h
OSCEN_MFOEN_MASK                         equ 0020h
OSCEN_HFOEN_POSN                         equ 0006h
OSCEN_HFOEN_POSITION                     equ 0006h
OSCEN_HFOEN_SIZE                         equ 0001h
OSCEN_HFOEN_LENGTH                       equ 0001h
OSCEN_HFOEN_MASK                         equ 0040h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0892h
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

// Register: OSCFREQ
#define OSCFREQ OSCFREQ
OSCFREQ                                  equ 0893h
// bitfield definitions
OSCFREQ_HFFRQ_POSN                       equ 0000h
OSCFREQ_HFFRQ_POSITION                   equ 0000h
OSCFREQ_HFFRQ_SIZE                       equ 0003h
OSCFREQ_HFFRQ_LENGTH                     equ 0003h
OSCFREQ_HFFRQ_MASK                       equ 0007h
OSCFREQ_HFFRQ0_POSN                      equ 0000h
OSCFREQ_HFFRQ0_POSITION                  equ 0000h
OSCFREQ_HFFRQ0_SIZE                      equ 0001h
OSCFREQ_HFFRQ0_LENGTH                    equ 0001h
OSCFREQ_HFFRQ0_MASK                      equ 0001h
OSCFREQ_HFFRQ1_POSN                      equ 0001h
OSCFREQ_HFFRQ1_POSITION                  equ 0001h
OSCFREQ_HFFRQ1_SIZE                      equ 0001h
OSCFREQ_HFFRQ1_LENGTH                    equ 0001h
OSCFREQ_HFFRQ1_MASK                      equ 0002h
OSCFREQ_HFFRQ2_POSN                      equ 0002h
OSCFREQ_HFFRQ2_POSITION                  equ 0002h
OSCFREQ_HFFRQ2_SIZE                      equ 0001h
OSCFREQ_HFFRQ2_LENGTH                    equ 0001h
OSCFREQ_HFFRQ2_MASK                      equ 0004h

// Register: DCOMPCON0
#define DCOMPCON0 DCOMPCON0
DCOMPCON0                                equ 090Fh
// bitfield definitions
DCOMPCON0_TFS0_POSN                      equ 0000h
DCOMPCON0_TFS0_POSITION                  equ 0000h
DCOMPCON0_TFS0_SIZE                      equ 0001h
DCOMPCON0_TFS0_LENGTH                    equ 0001h
DCOMPCON0_TFS0_MASK                      equ 0001h
DCOMPCON0_TFS1_POSN                      equ 0001h
DCOMPCON0_TFS1_POSITION                  equ 0001h
DCOMPCON0_TFS1_SIZE                      equ 0001h
DCOMPCON0_TFS1_LENGTH                    equ 0001h
DCOMPCON0_TFS1_MASK                      equ 0002h
DCOMPCON0_VCOMPEN_POSN                   equ 0006h
DCOMPCON0_VCOMPEN_POSITION               equ 0006h
DCOMPCON0_VCOMPEN_SIZE                   equ 0001h
DCOMPCON0_VCOMPEN_LENGTH                 equ 0001h
DCOMPCON0_VCOMPEN_MASK                   equ 0040h
DCOMPCON0_ICOMPEN_POSN                   equ 0007h
DCOMPCON0_ICOMPEN_POSITION               equ 0007h
DCOMPCON0_ICOMPEN_SIZE                   equ 0001h
DCOMPCON0_ICOMPEN_LENGTH                 equ 0001h
DCOMPCON0_ICOMPEN_MASK                   equ 0080h

// Register: DCOMPCON1
#define DCOMPCON1 DCOMPCON1
DCOMPCON1                                equ 0910h
// bitfield definitions
DCOMPCON1_IVMUVFE_POSN                   equ 0000h
DCOMPCON1_IVMUVFE_POSITION               equ 0000h
DCOMPCON1_IVMUVFE_SIZE                   equ 0001h
DCOMPCON1_IVMUVFE_LENGTH                 equ 0001h
DCOMPCON1_IVMUVFE_MASK                   equ 0001h
DCOMPCON1_IVMOVFE_POSN                   equ 0001h
DCOMPCON1_IVMOVFE_POSITION               equ 0001h
DCOMPCON1_IVMOVFE_SIZE                   equ 0001h
DCOMPCON1_IVMOVFE_LENGTH                 equ 0001h
DCOMPCON1_IVMOVFE_MASK                   equ 0002h
DCOMPCON1_ICMOCFE_POSN                   equ 0002h
DCOMPCON1_ICMOCFE_POSITION               equ 0002h
DCOMPCON1_ICMOCFE_SIZE                   equ 0001h
DCOMPCON1_ICMOCFE_LENGTH                 equ 0001h
DCOMPCON1_ICMOCFE_MASK                   equ 0004h
DCOMPCON1_HOLDM0_POSN                    equ 0003h
DCOMPCON1_HOLDM0_POSITION                equ 0003h
DCOMPCON1_HOLDM0_SIZE                    equ 0001h
DCOMPCON1_HOLDM0_LENGTH                  equ 0001h
DCOMPCON1_HOLDM0_MASK                    equ 0008h
DCOMPCON1_HOLDM1_POSN                    equ 0004h
DCOMPCON1_HOLDM1_POSITION                equ 0004h
DCOMPCON1_HOLDM1_SIZE                    equ 0001h
DCOMPCON1_HOLDM1_LENGTH                  equ 0001h
DCOMPCON1_HOLDM1_MASK                    equ 0010h
DCOMPCON1_HOLDM2_POSN                    equ 0005h
DCOMPCON1_HOLDM2_POSITION                equ 0005h
DCOMPCON1_HOLDM2_SIZE                    equ 0001h
DCOMPCON1_HOLDM2_LENGTH                  equ 0001h
DCOMPCON1_HOLDM2_MASK                    equ 0020h
DCOMPCON1_HOLDOVR_POSN                   equ 0006h
DCOMPCON1_HOLDOVR_POSITION               equ 0006h
DCOMPCON1_HOLDOVR_SIZE                   equ 0001h
DCOMPCON1_HOLDOVR_LENGTH                 equ 0001h
DCOMPCON1_HOLDOVR_MASK                   equ 0040h
DCOMPCON1_HOLD_POSN                      equ 0007h
DCOMPCON1_HOLD_POSITION                  equ 0007h
DCOMPCON1_HOLD_SIZE                      equ 0001h
DCOMPCON1_HOLD_LENGTH                    equ 0001h
DCOMPCON1_HOLD_MASK                      equ 0080h

// Register: DCOMPCON2
#define DCOMPCON2 DCOMPCON2
DCOMPCON2                                equ 0911h
// bitfield definitions
DCOMPCON2_OVMUVFE0_POSN                  equ 0000h
DCOMPCON2_OVMUVFE0_POSITION              equ 0000h
DCOMPCON2_OVMUVFE0_SIZE                  equ 0001h
DCOMPCON2_OVMUVFE0_LENGTH                equ 0001h
DCOMPCON2_OVMUVFE0_MASK                  equ 0001h
DCOMPCON2_OVMUVFE1_POSN                  equ 0001h
DCOMPCON2_OVMUVFE1_POSITION              equ 0001h
DCOMPCON2_OVMUVFE1_SIZE                  equ 0001h
DCOMPCON2_OVMUVFE1_LENGTH                equ 0001h
DCOMPCON2_OVMUVFE1_MASK                  equ 0002h
DCOMPCON2_OVMOVFE0_POSN                  equ 0002h
DCOMPCON2_OVMOVFE0_POSITION              equ 0002h
DCOMPCON2_OVMOVFE0_SIZE                  equ 0001h
DCOMPCON2_OVMOVFE0_LENGTH                equ 0001h
DCOMPCON2_OVMOVFE0_MASK                  equ 0004h
DCOMPCON2_OVMOVFE1_POSN                  equ 0003h
DCOMPCON2_OVMOVFE1_POSITION              equ 0003h
DCOMPCON2_OVMOVFE1_SIZE                  equ 0001h
DCOMPCON2_OVMOVFE1_LENGTH                equ 0001h
DCOMPCON2_OVMOVFE1_MASK                  equ 0008h
DCOMPCON2_OCMUCFE0_POSN                  equ 0004h
DCOMPCON2_OCMUCFE0_POSITION              equ 0004h
DCOMPCON2_OCMUCFE0_SIZE                  equ 0001h
DCOMPCON2_OCMUCFE0_LENGTH                equ 0001h
DCOMPCON2_OCMUCFE0_MASK                  equ 0010h
DCOMPCON2_OCMUCFE1_POSN                  equ 0005h
DCOMPCON2_OCMUCFE1_POSITION              equ 0005h
DCOMPCON2_OCMUCFE1_SIZE                  equ 0001h
DCOMPCON2_OCMUCFE1_LENGTH                equ 0001h
DCOMPCON2_OCMUCFE1_MASK                  equ 0020h
DCOMPCON2_OCMOCFE0_POSN                  equ 0006h
DCOMPCON2_OCMOCFE0_POSITION              equ 0006h
DCOMPCON2_OCMOCFE0_SIZE                  equ 0001h
DCOMPCON2_OCMOCFE0_LENGTH                equ 0001h
DCOMPCON2_OCMOCFE0_MASK                  equ 0040h
DCOMPCON2_OCMOCFE1_POSN                  equ 0007h
DCOMPCON2_OCMOCFE1_POSITION              equ 0007h
DCOMPCON2_OCMOCFE1_SIZE                  equ 0001h
DCOMPCON2_OCMOCFE1_LENGTH                equ 0001h
DCOMPCON2_OCMOCFE1_MASK                  equ 0080h

// Register: VREFH
#define VREFH VREFH
VREFH                                    equ 0913h
// bitfield definitions
VREFH_VREF8_POSN                         equ 0000h
VREFH_VREF8_POSITION                     equ 0000h
VREFH_VREF8_SIZE                         equ 0001h
VREFH_VREF8_LENGTH                       equ 0001h
VREFH_VREF8_MASK                         equ 0001h
VREFH_VREF9_POSN                         equ 0001h
VREFH_VREF9_POSITION                     equ 0001h
VREFH_VREF9_SIZE                         equ 0001h
VREFH_VREF9_LENGTH                       equ 0001h
VREFH_VREF9_MASK                         equ 0002h

// Register: VREFL
#define VREFL VREFL
VREFL                                    equ 0914h
// bitfield definitions
VREFL_VREF0_POSN                         equ 0000h
VREFL_VREF0_POSITION                     equ 0000h
VREFL_VREF0_SIZE                         equ 0001h
VREFL_VREF0_LENGTH                       equ 0001h
VREFL_VREF0_MASK                         equ 0001h
VREFL_VREF1_POSN                         equ 0001h
VREFL_VREF1_POSITION                     equ 0001h
VREFL_VREF1_SIZE                         equ 0001h
VREFL_VREF1_LENGTH                       equ 0001h
VREFL_VREF1_MASK                         equ 0002h
VREFL_VREF2_POSN                         equ 0002h
VREFL_VREF2_POSITION                     equ 0002h
VREFL_VREF2_SIZE                         equ 0001h
VREFL_VREF2_LENGTH                       equ 0001h
VREFL_VREF2_MASK                         equ 0004h
VREFL_VREF3_POSN                         equ 0003h
VREFL_VREF3_POSITION                     equ 0003h
VREFL_VREF3_SIZE                         equ 0001h
VREFL_VREF3_LENGTH                       equ 0001h
VREFL_VREF3_MASK                         equ 0008h
VREFL_VREF4_POSN                         equ 0004h
VREFL_VREF4_POSITION                     equ 0004h
VREFL_VREF4_SIZE                         equ 0001h
VREFL_VREF4_LENGTH                       equ 0001h
VREFL_VREF4_MASK                         equ 0010h
VREFL_VREF5_POSN                         equ 0005h
VREFL_VREF5_POSITION                     equ 0005h
VREFL_VREF5_SIZE                         equ 0001h
VREFL_VREF5_LENGTH                       equ 0001h
VREFL_VREF5_MASK                         equ 0020h
VREFL_VREF6_POSN                         equ 0006h
VREFL_VREF6_POSITION                     equ 0006h
VREFL_VREF6_SIZE                         equ 0001h
VREFL_VREF6_LENGTH                       equ 0001h
VREFL_VREF6_MASK                         equ 0040h
VREFL_VREF7_POSN                         equ 0007h
VREFL_VREF7_POSITION                     equ 0007h
VREFL_VREF7_SIZE                         equ 0001h
VREFL_VREF7_LENGTH                       equ 0001h
VREFL_VREF7_MASK                         equ 0080h

// Register: IREFH
#define IREFH IREFH
IREFH                                    equ 0916h
// bitfield definitions
IREFH_IREF8_POSN                         equ 0000h
IREFH_IREF8_POSITION                     equ 0000h
IREFH_IREF8_SIZE                         equ 0001h
IREFH_IREF8_LENGTH                       equ 0001h
IREFH_IREF8_MASK                         equ 0001h
IREFH_IREF9_POSN                         equ 0001h
IREFH_IREF9_POSITION                     equ 0001h
IREFH_IREF9_SIZE                         equ 0001h
IREFH_IREF9_LENGTH                       equ 0001h
IREFH_IREF9_MASK                         equ 0002h

// Register: IREFL
#define IREFL IREFL
IREFL                                    equ 0917h
// bitfield definitions
IREFL_IREF0_POSN                         equ 0000h
IREFL_IREF0_POSITION                     equ 0000h
IREFL_IREF0_SIZE                         equ 0001h
IREFL_IREF0_LENGTH                       equ 0001h
IREFL_IREF0_MASK                         equ 0001h
IREFL_IREF1_POSN                         equ 0001h
IREFL_IREF1_POSITION                     equ 0001h
IREFL_IREF1_SIZE                         equ 0001h
IREFL_IREF1_LENGTH                       equ 0001h
IREFL_IREF1_MASK                         equ 0002h
IREFL_IREF2_POSN                         equ 0002h
IREFL_IREF2_POSITION                     equ 0002h
IREFL_IREF2_SIZE                         equ 0001h
IREFL_IREF2_LENGTH                       equ 0001h
IREFL_IREF2_MASK                         equ 0004h
IREFL_IREF3_POSN                         equ 0003h
IREFL_IREF3_POSITION                     equ 0003h
IREFL_IREF3_SIZE                         equ 0001h
IREFL_IREF3_LENGTH                       equ 0001h
IREFL_IREF3_MASK                         equ 0008h
IREFL_IREF4_POSN                         equ 0004h
IREFL_IREF4_POSITION                     equ 0004h
IREFL_IREF4_SIZE                         equ 0001h
IREFL_IREF4_LENGTH                       equ 0001h
IREFL_IREF4_MASK                         equ 0010h
IREFL_IREF5_POSN                         equ 0005h
IREFL_IREF5_POSITION                     equ 0005h
IREFL_IREF5_SIZE                         equ 0001h
IREFL_IREF5_LENGTH                       equ 0001h
IREFL_IREF5_MASK                         equ 0020h
IREFL_IREF6_POSN                         equ 0006h
IREFL_IREF6_POSITION                     equ 0006h
IREFL_IREF6_SIZE                         equ 0001h
IREFL_IREF6_LENGTH                       equ 0001h
IREFL_IREF6_MASK                         equ 0040h
IREFL_IREF7_POSN                         equ 0007h
IREFL_IREF7_POSITION                     equ 0007h
IREFL_IREF7_SIZE                         equ 0001h
IREFL_IREF7_LENGTH                       equ 0001h
IREFL_IREF7_MASK                         equ 0080h

// Register: DOUTH
#define DOUTH DOUTH
DOUTH                                    equ 0919h
// bitfield definitions
DOUTH_DOUT6_POSN                         equ 0000h
DOUTH_DOUT6_POSITION                     equ 0000h
DOUTH_DOUT6_SIZE                         equ 0001h
DOUTH_DOUT6_LENGTH                       equ 0001h
DOUTH_DOUT6_MASK                         equ 0001h
DOUTH_DOUT7_POSN                         equ 0001h
DOUTH_DOUT7_POSITION                     equ 0001h
DOUTH_DOUT7_SIZE                         equ 0001h
DOUTH_DOUT7_LENGTH                       equ 0001h
DOUTH_DOUT7_MASK                         equ 0002h
DOUTH_DOUT8_POSN                         equ 0002h
DOUTH_DOUT8_POSITION                     equ 0002h
DOUTH_DOUT8_SIZE                         equ 0001h
DOUTH_DOUT8_LENGTH                       equ 0001h
DOUTH_DOUT8_MASK                         equ 0004h
DOUTH_DOUT9_POSN                         equ 0003h
DOUTH_DOUT9_POSITION                     equ 0003h
DOUTH_DOUT9_SIZE                         equ 0001h
DOUTH_DOUT9_LENGTH                       equ 0001h
DOUTH_DOUT9_MASK                         equ 0008h
DOUTH_DOUT10_POSN                        equ 0004h
DOUTH_DOUT10_POSITION                    equ 0004h
DOUTH_DOUT10_SIZE                        equ 0001h
DOUTH_DOUT10_LENGTH                      equ 0001h
DOUTH_DOUT10_MASK                        equ 0010h
DOUTH_DOUT11_POSN                        equ 0005h
DOUTH_DOUT11_POSITION                    equ 0005h
DOUTH_DOUT11_SIZE                        equ 0001h
DOUTH_DOUT11_LENGTH                      equ 0001h
DOUTH_DOUT11_MASK                        equ 0020h
DOUTH_DOUT12_POSN                        equ 0006h
DOUTH_DOUT12_POSITION                    equ 0006h
DOUTH_DOUT12_SIZE                        equ 0001h
DOUTH_DOUT12_LENGTH                      equ 0001h
DOUTH_DOUT12_MASK                        equ 0040h
DOUTH_DOUT13_POSN                        equ 0007h
DOUTH_DOUT13_POSITION                    equ 0007h
DOUTH_DOUT13_SIZE                        equ 0001h
DOUTH_DOUT13_LENGTH                      equ 0001h
DOUTH_DOUT13_MASK                        equ 0080h

// Register: DOUTL
#define DOUTL DOUTL
DOUTL                                    equ 091Ah
// bitfield definitions
DOUTL_DOUT0_POSN                         equ 0002h
DOUTL_DOUT0_POSITION                     equ 0002h
DOUTL_DOUT0_SIZE                         equ 0001h
DOUTL_DOUT0_LENGTH                       equ 0001h
DOUTL_DOUT0_MASK                         equ 0004h
DOUTL_DOUT1_POSN                         equ 0003h
DOUTL_DOUT1_POSITION                     equ 0003h
DOUTL_DOUT1_SIZE                         equ 0001h
DOUTL_DOUT1_LENGTH                       equ 0001h
DOUTL_DOUT1_MASK                         equ 0008h
DOUTL_DOUT2_POSN                         equ 0004h
DOUTL_DOUT2_POSITION                     equ 0004h
DOUTL_DOUT2_SIZE                         equ 0001h
DOUTL_DOUT2_LENGTH                       equ 0001h
DOUTL_DOUT2_MASK                         equ 0010h
DOUTL_DOUT3_POSN                         equ 0005h
DOUTL_DOUT3_POSITION                     equ 0005h
DOUTL_DOUT3_SIZE                         equ 0001h
DOUTL_DOUT3_LENGTH                       equ 0001h
DOUTL_DOUT3_MASK                         equ 0020h
DOUTL_DOUT4_POSN                         equ 0006h
DOUTL_DOUT4_POSITION                     equ 0006h
DOUTL_DOUT4_SIZE                         equ 0001h
DOUTL_DOUT4_LENGTH                       equ 0001h
DOUTL_DOUT4_MASK                         equ 0040h
DOUTL_DOUT5_POSN                         equ 0007h
DOUTL_DOUT5_POSITION                     equ 0007h
DOUTL_DOUT5_SIZE                         equ 0001h
DOUTL_DOUT5_LENGTH                       equ 0001h
DOUTL_DOUT5_MASK                         equ 0080h

// Register: KPI
#define KPI KPI
KPI                                      equ 098Fh
// bitfield definitions
KPI_KPI0_POSN                            equ 0000h
KPI_KPI0_POSITION                        equ 0000h
KPI_KPI0_SIZE                            equ 0001h
KPI_KPI0_LENGTH                          equ 0001h
KPI_KPI0_MASK                            equ 0001h
KPI_KPI1_POSN                            equ 0001h
KPI_KPI1_POSITION                        equ 0001h
KPI_KPI1_SIZE                            equ 0001h
KPI_KPI1_LENGTH                          equ 0001h
KPI_KPI1_MASK                            equ 0002h
KPI_KPI2_POSN                            equ 0002h
KPI_KPI2_POSITION                        equ 0002h
KPI_KPI2_SIZE                            equ 0001h
KPI_KPI2_LENGTH                          equ 0001h
KPI_KPI2_MASK                            equ 0004h
KPI_KPI3_POSN                            equ 0003h
KPI_KPI3_POSITION                        equ 0003h
KPI_KPI3_SIZE                            equ 0001h
KPI_KPI3_LENGTH                          equ 0001h
KPI_KPI3_MASK                            equ 0008h
KPI_KPI4_POSN                            equ 0004h
KPI_KPI4_POSITION                        equ 0004h
KPI_KPI4_SIZE                            equ 0001h
KPI_KPI4_LENGTH                          equ 0001h
KPI_KPI4_MASK                            equ 0010h

// Register: KVI
#define KVI KVI
KVI                                      equ 0990h
// bitfield definitions
KVI_KVI0_POSN                            equ 0000h
KVI_KVI0_POSITION                        equ 0000h
KVI_KVI0_SIZE                            equ 0001h
KVI_KVI0_LENGTH                          equ 0001h
KVI_KVI0_MASK                            equ 0001h
KVI_KVI1_POSN                            equ 0001h
KVI_KVI1_POSITION                        equ 0001h
KVI_KVI1_SIZE                            equ 0001h
KVI_KVI1_LENGTH                          equ 0001h
KVI_KVI1_MASK                            equ 0002h
KVI_KVI2_POSN                            equ 0002h
KVI_KVI2_POSITION                        equ 0002h
KVI_KVI2_SIZE                            equ 0001h
KVI_KVI2_LENGTH                          equ 0001h
KVI_KVI2_MASK                            equ 0004h
KVI_KVI3_POSN                            equ 0003h
KVI_KVI3_POSITION                        equ 0003h
KVI_KVI3_SIZE                            equ 0001h
KVI_KVI3_LENGTH                          equ 0001h
KVI_KVI3_MASK                            equ 0008h
KVI_KVI4_POSN                            equ 0004h
KVI_KVI4_POSITION                        equ 0004h
KVI_KVI4_SIZE                            equ 0001h
KVI_KVI4_LENGTH                          equ 0001h
KVI_KVI4_MASK                            equ 0010h

// Register: KPV
#define KPV KPV
KPV                                      equ 0991h
// bitfield definitions
KPV_KPV0_POSN                            equ 0000h
KPV_KPV0_POSITION                        equ 0000h
KPV_KPV0_SIZE                            equ 0001h
KPV_KPV0_LENGTH                          equ 0001h
KPV_KPV0_MASK                            equ 0001h
KPV_KPV1_POSN                            equ 0001h
KPV_KPV1_POSITION                        equ 0001h
KPV_KPV1_SIZE                            equ 0001h
KPV_KPV1_LENGTH                          equ 0001h
KPV_KPV1_MASK                            equ 0002h
KPV_KPV2_POSN                            equ 0002h
KPV_KPV2_POSITION                        equ 0002h
KPV_KPV2_SIZE                            equ 0001h
KPV_KPV2_LENGTH                          equ 0001h
KPV_KPV2_MASK                            equ 0004h
KPV_KPV3_POSN                            equ 0003h
KPV_KPV3_POSITION                        equ 0003h
KPV_KPV3_SIZE                            equ 0001h
KPV_KPV3_LENGTH                          equ 0001h
KPV_KPV3_MASK                            equ 0008h
KPV_KPV4_POSN                            equ 0004h
KPV_KPV4_POSITION                        equ 0004h
KPV_KPV4_SIZE                            equ 0001h
KPV_KPV4_LENGTH                          equ 0001h
KPV_KPV4_MASK                            equ 0010h

// Register: KVV
#define KVV KVV
KVV                                      equ 0992h
// bitfield definitions
KVV_KVV0_POSN                            equ 0000h
KVV_KVV0_POSITION                        equ 0000h
KVV_KVV0_SIZE                            equ 0001h
KVV_KVV0_LENGTH                          equ 0001h
KVV_KVV0_MASK                            equ 0001h
KVV_KVV1_POSN                            equ 0001h
KVV_KVV1_POSITION                        equ 0001h
KVV_KVV1_SIZE                            equ 0001h
KVV_KVV1_LENGTH                          equ 0001h
KVV_KVV1_MASK                            equ 0002h
KVV_KVV2_POSN                            equ 0002h
KVV_KVV2_POSITION                        equ 0002h
KVV_KVV2_SIZE                            equ 0001h
KVV_KVV2_LENGTH                          equ 0001h
KVV_KVV2_MASK                            equ 0004h
KVV_KVV3_POSN                            equ 0003h
KVV_KVV3_POSITION                        equ 0003h
KVV_KVV3_SIZE                            equ 0001h
KVV_KVV3_LENGTH                          equ 0001h
KVV_KVV3_MASK                            equ 0008h
KVV_KVV4_POSN                            equ 0004h
KVV_KVV4_POSITION                        equ 0004h
KVV_KVV4_SIZE                            equ 0001h
KVV_KVV4_LENGTH                          equ 0001h
KVV_KVV4_MASK                            equ 0010h

// Register: KIV
#define KIV KIV
KIV                                      equ 0993h
// bitfield definitions
KIV_KIV0_POSN                            equ 0000h
KIV_KIV0_POSITION                        equ 0000h
KIV_KIV0_SIZE                            equ 0001h
KIV_KIV0_LENGTH                          equ 0001h
KIV_KIV0_MASK                            equ 0001h
KIV_KIV1_POSN                            equ 0001h
KIV_KIV1_POSITION                        equ 0001h
KIV_KIV1_SIZE                            equ 0001h
KIV_KIV1_LENGTH                          equ 0001h
KIV_KIV1_MASK                            equ 0002h
KIV_KIV2_POSN                            equ 0002h
KIV_KIV2_POSITION                        equ 0002h
KIV_KIV2_SIZE                            equ 0001h
KIV_KIV2_LENGTH                          equ 0001h
KIV_KIV2_MASK                            equ 0004h
KIV_KIV3_POSN                            equ 0003h
KIV_KIV3_POSITION                        equ 0003h
KIV_KIV3_SIZE                            equ 0001h
KIV_KIV3_LENGTH                          equ 0001h
KIV_KIV3_MASK                            equ 0008h
KIV_KIV4_POSN                            equ 0004h
KIV_KIV4_POSITION                        equ 0004h
KIV_KIV4_SIZE                            equ 0001h
KIV_KIV4_LENGTH                          equ 0001h
KIV_KIV4_MASK                            equ 0010h

// Register: MAXDC
#define MAXDC MAXDC
MAXDC                                    equ 0995h
// bitfield definitions
MAXDC_MAXDC0_POSN                        equ 0000h
MAXDC_MAXDC0_POSITION                    equ 0000h
MAXDC_MAXDC0_SIZE                        equ 0001h
MAXDC_MAXDC0_LENGTH                      equ 0001h
MAXDC_MAXDC0_MASK                        equ 0001h
MAXDC_MAXDC1_POSN                        equ 0001h
MAXDC_MAXDC1_POSITION                    equ 0001h
MAXDC_MAXDC1_SIZE                        equ 0001h
MAXDC_MAXDC1_LENGTH                      equ 0001h
MAXDC_MAXDC1_MASK                        equ 0002h
MAXDC_MAXDC2_POSN                        equ 0002h
MAXDC_MAXDC2_POSITION                    equ 0002h
MAXDC_MAXDC2_SIZE                        equ 0001h
MAXDC_MAXDC2_LENGTH                      equ 0001h
MAXDC_MAXDC2_MASK                        equ 0004h
MAXDC_MAXDC3_POSN                        equ 0003h
MAXDC_MAXDC3_POSITION                    equ 0003h
MAXDC_MAXDC3_SIZE                        equ 0001h
MAXDC_MAXDC3_LENGTH                      equ 0001h
MAXDC_MAXDC3_MASK                        equ 0008h
MAXDC_MAXDC4_POSN                        equ 0004h
MAXDC_MAXDC4_POSITION                    equ 0004h
MAXDC_MAXDC4_SIZE                        equ 0001h
MAXDC_MAXDC4_LENGTH                      equ 0001h
MAXDC_MAXDC4_MASK                        equ 0010h
MAXDC_MAXDC5_POSN                        equ 0005h
MAXDC_MAXDC5_POSITION                    equ 0005h
MAXDC_MAXDC5_SIZE                        equ 0001h
MAXDC_MAXDC5_LENGTH                      equ 0001h
MAXDC_MAXDC5_MASK                        equ 0020h
MAXDC_MAXDC6_POSN                        equ 0006h
MAXDC_MAXDC6_POSITION                    equ 0006h
MAXDC_MAXDC6_SIZE                        equ 0001h
MAXDC_MAXDC6_LENGTH                      equ 0001h
MAXDC_MAXDC6_MASK                        equ 0040h
MAXDC_MAXDC7_POSN                        equ 0007h
MAXDC_MAXDC7_POSITION                    equ 0007h
MAXDC_MAXDC7_SIZE                        equ 0001h
MAXDC_MAXDC7_LENGTH                      equ 0001h
MAXDC_MAXDC7_MASK                        equ 0080h

// Register: XI
#define XI XI
XI                                       equ 0996h
// bitfield definitions
XI_XI0_POSN                              equ 0000h
XI_XI0_POSITION                          equ 0000h
XI_XI0_SIZE                              equ 0001h
XI_XI0_LENGTH                            equ 0001h
XI_XI0_MASK                              equ 0001h
XI_XI1_POSN                              equ 0001h
XI_XI1_POSITION                          equ 0001h
XI_XI1_SIZE                              equ 0001h
XI_XI1_LENGTH                            equ 0001h
XI_XI1_MASK                              equ 0002h
XI_XI2_POSN                              equ 0002h
XI_XI2_POSITION                          equ 0002h
XI_XI2_SIZE                              equ 0001h
XI_XI2_LENGTH                            equ 0001h
XI_XI2_MASK                              equ 0004h
XI_XI3_POSN                              equ 0003h
XI_XI3_POSITION                          equ 0003h
XI_XI3_SIZE                              equ 0001h
XI_XI3_LENGTH                            equ 0001h
XI_XI3_MASK                              equ 0008h
XI_XI4_POSN                              equ 0004h
XI_XI4_POSITION                          equ 0004h
XI_XI4_SIZE                              equ 0001h
XI_XI4_LENGTH                            equ 0001h
XI_XI4_MASK                              equ 0010h

// Register: YI
#define YI YI
YI                                       equ 0997h
// bitfield definitions
YI_YI0_POSN                              equ 0000h
YI_YI0_POSITION                          equ 0000h
YI_YI0_SIZE                              equ 0001h
YI_YI0_LENGTH                            equ 0001h
YI_YI0_MASK                              equ 0001h
YI_YI1_POSN                              equ 0001h
YI_YI1_POSITION                          equ 0001h
YI_YI1_SIZE                              equ 0001h
YI_YI1_LENGTH                            equ 0001h
YI_YI1_MASK                              equ 0002h
YI_YI2_POSN                              equ 0002h
YI_YI2_POSITION                          equ 0002h
YI_YI2_SIZE                              equ 0001h
YI_YI2_LENGTH                            equ 0001h
YI_YI2_MASK                              equ 0004h
YI_YI3_POSN                              equ 0003h
YI_YI3_POSITION                          equ 0003h
YI_YI3_SIZE                              equ 0001h
YI_YI3_LENGTH                            equ 0001h
YI_YI3_MASK                              equ 0008h
YI_YI4_POSN                              equ 0004h
YI_YI4_POSITION                          equ 0004h
YI_YI4_SIZE                              equ 0001h
YI_YI4_LENGTH                            equ 0001h
YI_YI4_MASK                              equ 0010h

// Register: XV
#define XV XV
XV                                       equ 0998h
// bitfield definitions
XV_XV0_POSN                              equ 0000h
XV_XV0_POSITION                          equ 0000h
XV_XV0_SIZE                              equ 0001h
XV_XV0_LENGTH                            equ 0001h
XV_XV0_MASK                              equ 0001h
XV_XV1_POSN                              equ 0001h
XV_XV1_POSITION                          equ 0001h
XV_XV1_SIZE                              equ 0001h
XV_XV1_LENGTH                            equ 0001h
XV_XV1_MASK                              equ 0002h
XV_XV2_POSN                              equ 0002h
XV_XV2_POSITION                          equ 0002h
XV_XV2_SIZE                              equ 0001h
XV_XV2_LENGTH                            equ 0001h
XV_XV2_MASK                              equ 0004h
XV_XV3_POSN                              equ 0003h
XV_XV3_POSITION                          equ 0003h
XV_XV3_SIZE                              equ 0001h
XV_XV3_LENGTH                            equ 0001h
XV_XV3_MASK                              equ 0008h
XV_XV4_POSN                              equ 0004h
XV_XV4_POSITION                          equ 0004h
XV_XV4_SIZE                              equ 0001h
XV_XV4_LENGTH                            equ 0001h
XV_XV4_MASK                              equ 0010h

// Register: YV
#define YV YV
YV                                       equ 0999h
// bitfield definitions
YV_YV0_POSN                              equ 0000h
YV_YV0_POSITION                          equ 0000h
YV_YV0_SIZE                              equ 0001h
YV_YV0_LENGTH                            equ 0001h
YV_YV0_MASK                              equ 0001h
YV_YV1_POSN                              equ 0001h
YV_YV1_POSITION                          equ 0001h
YV_YV1_SIZE                              equ 0001h
YV_YV1_LENGTH                            equ 0001h
YV_YV1_MASK                              equ 0002h
YV_YV2_POSN                              equ 0002h
YV_YV2_POSITION                          equ 0002h
YV_YV2_SIZE                              equ 0001h
YV_YV2_LENGTH                            equ 0001h
YV_YV2_MASK                              equ 0004h
YV_YV3_POSN                              equ 0003h
YV_YV3_POSITION                          equ 0003h
YV_YV3_SIZE                              equ 0001h
YV_YV3_LENGTH                            equ 0001h
YV_YV3_MASK                              equ 0008h
YV_YV4_POSN                              equ 0004h
YV_YV4_POSITION                          equ 0004h
YV_YV4_SIZE                              equ 0001h
YV_YV4_LENGTH                            equ 0001h
YV_YV4_MASK                              equ 0010h

// Register: NS
#define NS NS
NS                                       equ 099Ah
// bitfield definitions
NS_NS0_POSN                              equ 0000h
NS_NS0_POSITION                          equ 0000h
NS_NS0_SIZE                              equ 0001h
NS_NS0_LENGTH                            equ 0001h
NS_NS0_MASK                              equ 0001h
NS_NS1_POSN                              equ 0001h
NS_NS1_POSITION                          equ 0001h
NS_NS1_SIZE                              equ 0001h
NS_NS1_LENGTH                            equ 0001h
NS_NS1_MASK                              equ 0002h
NS_NS2_POSN                              equ 0002h
NS_NS2_POSITION                          equ 0002h
NS_NS2_SIZE                              equ 0001h
NS_NS2_LENGTH                            equ 0001h
NS_NS2_MASK                              equ 0004h
NS_NS3_POSN                              equ 0003h
NS_NS3_POSITION                          equ 0003h
NS_NS3_SIZE                              equ 0001h
NS_NS3_LENGTH                            equ 0001h
NS_NS3_MASK                              equ 0008h
NS_NS4_POSN                              equ 0004h
NS_NS4_POSITION                          equ 0004h
NS_NS4_SIZE                              equ 0001h
NS_NS4_LENGTH                            equ 0001h
NS_NS4_MASK                              equ 0010h

// Register: NP
#define NP NP
NP                                       equ 099Bh
// bitfield definitions
NP_NP0_POSN                              equ 0000h
NP_NP0_POSITION                          equ 0000h
NP_NP0_SIZE                              equ 0001h
NP_NP0_LENGTH                            equ 0001h
NP_NP0_MASK                              equ 0001h
NP_NP1_POSN                              equ 0001h
NP_NP1_POSITION                          equ 0001h
NP_NP1_SIZE                              equ 0001h
NP_NP1_LENGTH                            equ 0001h
NP_NP1_MASK                              equ 0002h
NP_NP2_POSN                              equ 0002h
NP_NP2_POSITION                          equ 0002h
NP_NP2_SIZE                              equ 0001h
NP_NP2_LENGTH                            equ 0001h
NP_NP2_MASK                              equ 0004h
NP_NP3_POSN                              equ 0003h
NP_NP3_POSITION                          equ 0003h
NP_NP3_SIZE                              equ 0001h
NP_NP3_LENGTH                            equ 0001h
NP_NP3_MASK                              equ 0008h
NP_NP4_POSN                              equ 0004h
NP_NP4_POSITION                          equ 0004h
NP_NP4_SIZE                              equ 0001h
NP_NP4_LENGTH                            equ 0001h
NP_NP4_MASK                              equ 0010h

// Register: RLOAD
#define RLOAD RLOAD
RLOAD                                    equ 099Ch
// bitfield definitions
RLOAD_RLOAD0_POSN                        equ 0000h
RLOAD_RLOAD0_POSITION                    equ 0000h
RLOAD_RLOAD0_SIZE                        equ 0001h
RLOAD_RLOAD0_LENGTH                      equ 0001h
RLOAD_RLOAD0_MASK                        equ 0001h
RLOAD_RLOAD1_POSN                        equ 0001h
RLOAD_RLOAD1_POSITION                    equ 0001h
RLOAD_RLOAD1_SIZE                        equ 0001h
RLOAD_RLOAD1_LENGTH                      equ 0001h
RLOAD_RLOAD1_MASK                        equ 0002h
RLOAD_RLOAD2_POSN                        equ 0002h
RLOAD_RLOAD2_POSITION                    equ 0002h
RLOAD_RLOAD2_SIZE                        equ 0001h
RLOAD_RLOAD2_LENGTH                      equ 0001h
RLOAD_RLOAD2_MASK                        equ 0004h
RLOAD_RLOAD3_POSN                        equ 0003h
RLOAD_RLOAD3_POSITION                    equ 0003h
RLOAD_RLOAD3_SIZE                        equ 0001h
RLOAD_RLOAD3_LENGTH                      equ 0001h
RLOAD_RLOAD3_MASK                        equ 0008h
RLOAD_RLOAD4_POSN                        equ 0004h
RLOAD_RLOAD4_POSITION                    equ 0004h
RLOAD_RLOAD4_SIZE                        equ 0001h
RLOAD_RLOAD4_LENGTH                      equ 0001h
RLOAD_RLOAD4_MASK                        equ 0010h
RLOAD_RLOAD5_POSN                        equ 0005h
RLOAD_RLOAD5_POSITION                    equ 0005h
RLOAD_RLOAD5_SIZE                        equ 0001h
RLOAD_RLOAD5_LENGTH                      equ 0001h
RLOAD_RLOAD5_MASK                        equ 0020h
RLOAD_RLOAD6_POSN                        equ 0006h
RLOAD_RLOAD6_POSITION                    equ 0006h
RLOAD_RLOAD6_SIZE                        equ 0001h
RLOAD_RLOAD6_LENGTH                      equ 0001h
RLOAD_RLOAD6_MASK                        equ 0040h
RLOAD_RLOAD7_POSN                        equ 0007h
RLOAD_RLOAD7_POSITION                    equ 0007h
RLOAD_RLOAD7_SIZE                        equ 0001h
RLOAD_RLOAD7_LENGTH                      equ 0001h
RLOAD_RLOAD7_MASK                        equ 0080h

// Register: RLOSS
#define RLOSS RLOSS
RLOSS                                    equ 099Dh
// bitfield definitions
RLOSS_RLOSS0_POSN                        equ 0000h
RLOSS_RLOSS0_POSITION                    equ 0000h
RLOSS_RLOSS0_SIZE                        equ 0001h
RLOSS_RLOSS0_LENGTH                      equ 0001h
RLOSS_RLOSS0_MASK                        equ 0001h
RLOSS_RLOSS1_POSN                        equ 0001h
RLOSS_RLOSS1_POSITION                    equ 0001h
RLOSS_RLOSS1_SIZE                        equ 0001h
RLOSS_RLOSS1_LENGTH                      equ 0001h
RLOSS_RLOSS1_MASK                        equ 0002h
RLOSS_RLOSS2_POSN                        equ 0002h
RLOSS_RLOSS2_POSITION                    equ 0002h
RLOSS_RLOSS2_SIZE                        equ 0001h
RLOSS_RLOSS2_LENGTH                      equ 0001h
RLOSS_RLOSS2_MASK                        equ 0004h
RLOSS_RLOSS3_POSN                        equ 0003h
RLOSS_RLOSS3_POSITION                    equ 0003h
RLOSS_RLOSS3_SIZE                        equ 0001h
RLOSS_RLOSS3_LENGTH                      equ 0001h
RLOSS_RLOSS3_MASK                        equ 0008h
RLOSS_RLOSS4_POSN                        equ 0004h
RLOSS_RLOSS4_POSITION                    equ 0004h
RLOSS_RLOSS4_SIZE                        equ 0001h
RLOSS_RLOSS4_LENGTH                      equ 0001h
RLOSS_RLOSS4_MASK                        equ 0010h
RLOSS_RLOSS5_POSN                        equ 0005h
RLOSS_RLOSS5_POSITION                    equ 0005h
RLOSS_RLOSS5_SIZE                        equ 0001h
RLOSS_RLOSS5_LENGTH                      equ 0001h
RLOSS_RLOSS5_MASK                        equ 0020h
RLOSS_RLOSS6_POSN                        equ 0006h
RLOSS_RLOSS6_POSITION                    equ 0006h
RLOSS_RLOSS6_SIZE                        equ 0001h
RLOSS_RLOSS6_LENGTH                      equ 0001h
RLOSS_RLOSS6_MASK                        equ 0040h
RLOSS_RLOSS7_POSN                        equ 0007h
RLOSS_RLOSS7_POSITION                    equ 0007h
RLOSS_RLOSS7_SIZE                        equ 0001h
RLOSS_RLOSS7_LENGTH                      equ 0001h
RLOSS_RLOSS7_MASK                        equ 0080h

// Register: TST_DMAH
#define TST_DMAH TST_DMAH
TST_DMAH                                 equ 0D8Ch
// bitfield definitions
TST_DMAH_DMA_DATA8_POSN                  equ 0000h
TST_DMAH_DMA_DATA8_POSITION              equ 0000h
TST_DMAH_DMA_DATA8_SIZE                  equ 0001h
TST_DMAH_DMA_DATA8_LENGTH                equ 0001h
TST_DMAH_DMA_DATA8_MASK                  equ 0001h
TST_DMAH_DMA_DATA9_POSN                  equ 0001h
TST_DMAH_DMA_DATA9_POSITION              equ 0001h
TST_DMAH_DMA_DATA9_SIZE                  equ 0001h
TST_DMAH_DMA_DATA9_LENGTH                equ 0001h
TST_DMAH_DMA_DATA9_MASK                  equ 0002h
TST_DMAH_DMA_DATA10_POSN                 equ 0002h
TST_DMAH_DMA_DATA10_POSITION             equ 0002h
TST_DMAH_DMA_DATA10_SIZE                 equ 0001h
TST_DMAH_DMA_DATA10_LENGTH               equ 0001h
TST_DMAH_DMA_DATA10_MASK                 equ 0004h
TST_DMAH_DMA_DATA11_POSN                 equ 0003h
TST_DMAH_DMA_DATA11_POSITION             equ 0003h
TST_DMAH_DMA_DATA11_SIZE                 equ 0001h
TST_DMAH_DMA_DATA11_LENGTH               equ 0001h
TST_DMAH_DMA_DATA11_MASK                 equ 0008h
TST_DMAH_DMA_DATA12_POSN                 equ 0004h
TST_DMAH_DMA_DATA12_POSITION             equ 0004h
TST_DMAH_DMA_DATA12_SIZE                 equ 0001h
TST_DMAH_DMA_DATA12_LENGTH               equ 0001h
TST_DMAH_DMA_DATA12_MASK                 equ 0010h
TST_DMAH_DMA_DATA13_POSN                 equ 0005h
TST_DMAH_DMA_DATA13_POSITION             equ 0005h
TST_DMAH_DMA_DATA13_SIZE                 equ 0001h
TST_DMAH_DMA_DATA13_LENGTH               equ 0001h
TST_DMAH_DMA_DATA13_MASK                 equ 0020h
TST_DMAH_DMA_DATA14_POSN                 equ 0006h
TST_DMAH_DMA_DATA14_POSITION             equ 0006h
TST_DMAH_DMA_DATA14_SIZE                 equ 0001h
TST_DMAH_DMA_DATA14_LENGTH               equ 0001h
TST_DMAH_DMA_DATA14_MASK                 equ 0040h
TST_DMAH_DMA_DATA15_POSN                 equ 0007h
TST_DMAH_DMA_DATA15_POSITION             equ 0007h
TST_DMAH_DMA_DATA15_SIZE                 equ 0001h
TST_DMAH_DMA_DATA15_LENGTH               equ 0001h
TST_DMAH_DMA_DATA15_MASK                 equ 0080h

// Register: TST_DMAL
#define TST_DMAL TST_DMAL
TST_DMAL                                 equ 0D8Dh
// bitfield definitions
TST_DMAL_DMA_DATA0_POSN                  equ 0000h
TST_DMAL_DMA_DATA0_POSITION              equ 0000h
TST_DMAL_DMA_DATA0_SIZE                  equ 0001h
TST_DMAL_DMA_DATA0_LENGTH                equ 0001h
TST_DMAL_DMA_DATA0_MASK                  equ 0001h
TST_DMAL_DMA_DATA1_POSN                  equ 0001h
TST_DMAL_DMA_DATA1_POSITION              equ 0001h
TST_DMAL_DMA_DATA1_SIZE                  equ 0001h
TST_DMAL_DMA_DATA1_LENGTH                equ 0001h
TST_DMAL_DMA_DATA1_MASK                  equ 0002h
TST_DMAL_DMA_DATA2_POSN                  equ 0002h
TST_DMAL_DMA_DATA2_POSITION              equ 0002h
TST_DMAL_DMA_DATA2_SIZE                  equ 0001h
TST_DMAL_DMA_DATA2_LENGTH                equ 0001h
TST_DMAL_DMA_DATA2_MASK                  equ 0004h
TST_DMAL_DMA_DATA3_POSN                  equ 0003h
TST_DMAL_DMA_DATA3_POSITION              equ 0003h
TST_DMAL_DMA_DATA3_SIZE                  equ 0001h
TST_DMAL_DMA_DATA3_LENGTH                equ 0001h
TST_DMAL_DMA_DATA3_MASK                  equ 0008h
TST_DMAL_DMA_DATA4_POSN                  equ 0004h
TST_DMAL_DMA_DATA4_POSITION              equ 0004h
TST_DMAL_DMA_DATA4_SIZE                  equ 0001h
TST_DMAL_DMA_DATA4_LENGTH                equ 0001h
TST_DMAL_DMA_DATA4_MASK                  equ 0010h
TST_DMAL_DMA_DATA5_POSN                  equ 0005h
TST_DMAL_DMA_DATA5_POSITION              equ 0005h
TST_DMAL_DMA_DATA5_SIZE                  equ 0001h
TST_DMAL_DMA_DATA5_LENGTH                equ 0001h
TST_DMAL_DMA_DATA5_MASK                  equ 0020h
TST_DMAL_DMA_DATA6_POSN                  equ 0006h
TST_DMAL_DMA_DATA6_POSITION              equ 0006h
TST_DMAL_DMA_DATA6_SIZE                  equ 0001h
TST_DMAL_DMA_DATA6_LENGTH                equ 0001h
TST_DMAL_DMA_DATA6_MASK                  equ 0040h
TST_DMAL_DMA_DATA7_POSN                  equ 0007h
TST_DMAL_DMA_DATA7_POSITION              equ 0007h
TST_DMAL_DMA_DATA7_SIZE                  equ 0001h
TST_DMAL_DMA_DATA7_LENGTH                equ 0001h
TST_DMAL_DMA_DATA7_MASK                  equ 0080h

// Register: TST_ISMSTAT
#define TST_ISMSTAT TST_ISMSTAT
TST_ISMSTAT                              equ 0D90h
// bitfield definitions
TST_ISMSTAT_PIBSTAT_POSN                 equ 0000h
TST_ISMSTAT_PIBSTAT_POSITION             equ 0000h
TST_ISMSTAT_PIBSTAT_SIZE                 equ 0001h
TST_ISMSTAT_PIBSTAT_LENGTH               equ 0001h
TST_ISMSTAT_PIBSTAT_MASK                 equ 0001h
TST_ISMSTAT_ISMSTAT_POSN                 equ 0004h
TST_ISMSTAT_ISMSTAT_POSITION             equ 0004h
TST_ISMSTAT_ISMSTAT_SIZE                 equ 0001h
TST_ISMSTAT_ISMSTAT_LENGTH               equ 0001h
TST_ISMSTAT_ISMSTAT_MASK                 equ 0010h

// Register: TST_ISMREAD
#define TST_ISMREAD TST_ISMREAD
TST_ISMREAD                              equ 0D91h
// bitfield definitions
TST_ISMREAD_ISMREAD0_POSN                equ 0000h
TST_ISMREAD_ISMREAD0_POSITION            equ 0000h
TST_ISMREAD_ISMREAD0_SIZE                equ 0001h
TST_ISMREAD_ISMREAD0_LENGTH              equ 0001h
TST_ISMREAD_ISMREAD0_MASK                equ 0001h
TST_ISMREAD_ISMREAD1_POSN                equ 0001h
TST_ISMREAD_ISMREAD1_POSITION            equ 0001h
TST_ISMREAD_ISMREAD1_SIZE                equ 0001h
TST_ISMREAD_ISMREAD1_LENGTH              equ 0001h
TST_ISMREAD_ISMREAD1_MASK                equ 0002h
TST_ISMREAD_ISMREAD2_POSN                equ 0002h
TST_ISMREAD_ISMREAD2_POSITION            equ 0002h
TST_ISMREAD_ISMREAD2_SIZE                equ 0001h
TST_ISMREAD_ISMREAD2_LENGTH              equ 0001h
TST_ISMREAD_ISMREAD2_MASK                equ 0004h
TST_ISMREAD_ISMREAD3_POSN                equ 0003h
TST_ISMREAD_ISMREAD3_POSITION            equ 0003h
TST_ISMREAD_ISMREAD3_SIZE                equ 0001h
TST_ISMREAD_ISMREAD3_LENGTH              equ 0001h
TST_ISMREAD_ISMREAD3_MASK                equ 0008h
TST_ISMREAD_ISMREAD4_POSN                equ 0004h
TST_ISMREAD_ISMREAD4_POSITION            equ 0004h
TST_ISMREAD_ISMREAD4_SIZE                equ 0001h
TST_ISMREAD_ISMREAD4_LENGTH              equ 0001h
TST_ISMREAD_ISMREAD4_MASK                equ 0010h
TST_ISMREAD_ISMREAD5_POSN                equ 0005h
TST_ISMREAD_ISMREAD5_POSITION            equ 0005h
TST_ISMREAD_ISMREAD5_SIZE                equ 0001h
TST_ISMREAD_ISMREAD5_LENGTH              equ 0001h
TST_ISMREAD_ISMREAD5_MASK                equ 0020h

// Register: TST_PERDOVR
#define TST_PERDOVR TST_PERDOVR
TST_PERDOVR                              equ 0D92h
// bitfield definitions
TST_PERDOVR_PEROVR0_POSN                 equ 0000h
TST_PERDOVR_PEROVR0_POSITION             equ 0000h
TST_PERDOVR_PEROVR0_SIZE                 equ 0001h
TST_PERDOVR_PEROVR0_LENGTH               equ 0001h
TST_PERDOVR_PEROVR0_MASK                 equ 0001h
TST_PERDOVR_PEROVR1_POSN                 equ 0001h
TST_PERDOVR_PEROVR1_POSITION             equ 0001h
TST_PERDOVR_PEROVR1_SIZE                 equ 0001h
TST_PERDOVR_PEROVR1_LENGTH               equ 0001h
TST_PERDOVR_PEROVR1_MASK                 equ 0002h
TST_PERDOVR_PEROVR2_POSN                 equ 0002h
TST_PERDOVR_PEROVR2_POSITION             equ 0002h
TST_PERDOVR_PEROVR2_SIZE                 equ 0001h
TST_PERDOVR_PEROVR2_LENGTH               equ 0001h
TST_PERDOVR_PEROVR2_MASK                 equ 0004h
TST_PERDOVR_PEROVR3_POSN                 equ 0003h
TST_PERDOVR_PEROVR3_POSITION             equ 0003h
TST_PERDOVR_PEROVR3_SIZE                 equ 0001h
TST_PERDOVR_PEROVR3_LENGTH               equ 0001h
TST_PERDOVR_PEROVR3_MASK                 equ 0008h
TST_PERDOVR_PEROVR4_POSN                 equ 0004h
TST_PERDOVR_PEROVR4_POSITION             equ 0004h
TST_PERDOVR_PEROVR4_SIZE                 equ 0001h
TST_PERDOVR_PEROVR4_LENGTH               equ 0001h
TST_PERDOVR_PEROVR4_MASK                 equ 0010h
TST_PERDOVR_PEROVR5_POSN                 equ 0005h
TST_PERDOVR_PEROVR5_POSITION             equ 0005h
TST_PERDOVR_PEROVR5_SIZE                 equ 0001h
TST_PERDOVR_PEROVR5_LENGTH               equ 0001h
TST_PERDOVR_PEROVR5_MASK                 equ 0020h

// Register: TST_PIBREAD
#define TST_PIBREAD TST_PIBREAD
TST_PIBREAD                              equ 0D96h
// bitfield definitions
TST_PIBREAD_PIBREAD0_POSN                equ 0000h
TST_PIBREAD_PIBREAD0_POSITION            equ 0000h
TST_PIBREAD_PIBREAD0_SIZE                equ 0001h
TST_PIBREAD_PIBREAD0_LENGTH              equ 0001h
TST_PIBREAD_PIBREAD0_MASK                equ 0001h
TST_PIBREAD_PIBREAD1_POSN                equ 0001h
TST_PIBREAD_PIBREAD1_POSITION            equ 0001h
TST_PIBREAD_PIBREAD1_SIZE                equ 0001h
TST_PIBREAD_PIBREAD1_LENGTH              equ 0001h
TST_PIBREAD_PIBREAD1_MASK                equ 0002h
TST_PIBREAD_PIBREAD2_POSN                equ 0002h
TST_PIBREAD_PIBREAD2_POSITION            equ 0002h
TST_PIBREAD_PIBREAD2_SIZE                equ 0001h
TST_PIBREAD_PIBREAD2_LENGTH              equ 0001h
TST_PIBREAD_PIBREAD2_MASK                equ 0004h
TST_PIBREAD_PIBREAD3_POSN                equ 0003h
TST_PIBREAD_PIBREAD3_POSITION            equ 0003h
TST_PIBREAD_PIBREAD3_SIZE                equ 0001h
TST_PIBREAD_PIBREAD3_LENGTH              equ 0001h
TST_PIBREAD_PIBREAD3_MASK                equ 0008h
TST_PIBREAD_PIBREAD4_POSN                equ 0004h
TST_PIBREAD_PIBREAD4_POSITION            equ 0004h
TST_PIBREAD_PIBREAD4_SIZE                equ 0001h
TST_PIBREAD_PIBREAD4_LENGTH              equ 0001h
TST_PIBREAD_PIBREAD4_MASK                equ 0010h
TST_PIBREAD_PIBREAD5_POSN                equ 0005h
TST_PIBREAD_PIBREAD5_POSITION            equ 0005h
TST_PIBREAD_PIBREAD5_SIZE                equ 0001h
TST_PIBREAD_PIBREAD5_LENGTH              equ 0001h
TST_PIBREAD_PIBREAD5_MASK                equ 0020h

// Register: UMTOAP
#define UMTOAP UMTOAP
UMTOAP                                   equ 0E0Ch
// bitfield definitions
UMTOAP_UMTOAP0_POSN                      equ 0000h
UMTOAP_UMTOAP0_POSITION                  equ 0000h
UMTOAP_UMTOAP0_SIZE                      equ 0001h
UMTOAP_UMTOAP0_LENGTH                    equ 0001h
UMTOAP_UMTOAP0_MASK                      equ 0001h
UMTOAP_UMTOAP1_POSN                      equ 0001h
UMTOAP_UMTOAP1_POSITION                  equ 0001h
UMTOAP_UMTOAP1_SIZE                      equ 0001h
UMTOAP_UMTOAP1_LENGTH                    equ 0001h
UMTOAP_UMTOAP1_MASK                      equ 0002h
UMTOAP_UMTOAP2_POSN                      equ 0002h
UMTOAP_UMTOAP2_POSITION                  equ 0002h
UMTOAP_UMTOAP2_SIZE                      equ 0001h
UMTOAP_UMTOAP2_LENGTH                    equ 0001h
UMTOAP_UMTOAP2_MASK                      equ 0004h
UMTOAP_UMTOAP3_POSN                      equ 0003h
UMTOAP_UMTOAP3_POSITION                  equ 0003h
UMTOAP_UMTOAP3_SIZE                      equ 0001h
UMTOAP_UMTOAP3_LENGTH                    equ 0001h
UMTOAP_UMTOAP3_MASK                      equ 0008h
UMTOAP_UMTOAP4_POSN                      equ 0004h
UMTOAP_UMTOAP4_POSITION                  equ 0004h
UMTOAP_UMTOAP4_SIZE                      equ 0001h
UMTOAP_UMTOAP4_LENGTH                    equ 0001h
UMTOAP_UMTOAP4_MASK                      equ 0010h
UMTOAP_UMTOAP5_POSN                      equ 0005h
UMTOAP_UMTOAP5_POSITION                  equ 0005h
UMTOAP_UMTOAP5_SIZE                      equ 0001h
UMTOAP_UMTOAP5_LENGTH                    equ 0001h
UMTOAP_UMTOAP5_MASK                      equ 0020h

// Register: UMTOAL
#define UMTOAL UMTOAL
UMTOAL                                   equ 0E0Dh
// bitfield definitions
UMTOAL_UMTOA0_POSN                       equ 0000h
UMTOAL_UMTOA0_POSITION                   equ 0000h
UMTOAL_UMTOA0_SIZE                       equ 0001h
UMTOAL_UMTOA0_LENGTH                     equ 0001h
UMTOAL_UMTOA0_MASK                       equ 0001h
UMTOAL_UMTOA1_POSN                       equ 0001h
UMTOAL_UMTOA1_POSITION                   equ 0001h
UMTOAL_UMTOA1_SIZE                       equ 0001h
UMTOAL_UMTOA1_LENGTH                     equ 0001h
UMTOAL_UMTOA1_MASK                       equ 0002h
UMTOAL_UMTOA2_POSN                       equ 0002h
UMTOAL_UMTOA2_POSITION                   equ 0002h
UMTOAL_UMTOA2_SIZE                       equ 0001h
UMTOAL_UMTOA2_LENGTH                     equ 0001h
UMTOAL_UMTOA2_MASK                       equ 0004h
UMTOAL_UMTOA3_POSN                       equ 0003h
UMTOAL_UMTOA3_POSITION                   equ 0003h
UMTOAL_UMTOA3_SIZE                       equ 0001h
UMTOAL_UMTOA3_LENGTH                     equ 0001h
UMTOAL_UMTOA3_MASK                       equ 0008h
UMTOAL_UMTOA4_POSN                       equ 0004h
UMTOAL_UMTOA4_POSITION                   equ 0004h
UMTOAL_UMTOA4_SIZE                       equ 0001h
UMTOAL_UMTOA4_LENGTH                     equ 0001h
UMTOAL_UMTOA4_MASK                       equ 0010h
UMTOAL_UMTOA5_POSN                       equ 0005h
UMTOAL_UMTOA5_POSITION                   equ 0005h
UMTOAL_UMTOA5_SIZE                       equ 0001h
UMTOAL_UMTOA5_LENGTH                     equ 0001h
UMTOAL_UMTOA5_MASK                       equ 0020h
UMTOAL_UMTOA6_POSN                       equ 0006h
UMTOAL_UMTOA6_POSITION                   equ 0006h
UMTOAL_UMTOA6_SIZE                       equ 0001h
UMTOAL_UMTOA6_LENGTH                     equ 0001h
UMTOAL_UMTOA6_MASK                       equ 0040h
UMTOAL_UMTOA7_POSN                       equ 0007h
UMTOAL_UMTOA7_POSITION                   equ 0007h
UMTOAL_UMTOA7_SIZE                       equ 0001h
UMTOAL_UMTOA7_LENGTH                     equ 0001h
UMTOAL_UMTOA7_MASK                       equ 0080h

// Register: UMTOAH
#define UMTOAH UMTOAH
UMTOAH                                   equ 0E0Eh
// bitfield definitions
UMTOAH_UMTOA8_POSN                       equ 0000h
UMTOAH_UMTOA8_POSITION                   equ 0000h
UMTOAH_UMTOA8_SIZE                       equ 0001h
UMTOAH_UMTOA8_LENGTH                     equ 0001h
UMTOAH_UMTOA8_MASK                       equ 0001h
UMTOAH_UMTOA9_POSN                       equ 0001h
UMTOAH_UMTOA9_POSITION                   equ 0001h
UMTOAH_UMTOA9_SIZE                       equ 0001h
UMTOAH_UMTOA9_LENGTH                     equ 0001h
UMTOAH_UMTOA9_MASK                       equ 0002h
UMTOAH_UMTOA10_POSN                      equ 0002h
UMTOAH_UMTOA10_POSITION                  equ 0002h
UMTOAH_UMTOA10_SIZE                      equ 0001h
UMTOAH_UMTOA10_LENGTH                    equ 0001h
UMTOAH_UMTOA10_MASK                      equ 0004h
UMTOAH_UMTOA11_POSN                      equ 0003h
UMTOAH_UMTOA11_POSITION                  equ 0003h
UMTOAH_UMTOA11_SIZE                      equ 0001h
UMTOAH_UMTOA11_LENGTH                    equ 0001h
UMTOAH_UMTOA11_MASK                      equ 0008h
UMTOAH_UMTOA12_POSN                      equ 0004h
UMTOAH_UMTOA12_POSITION                  equ 0004h
UMTOAH_UMTOA12_SIZE                      equ 0001h
UMTOAH_UMTOA12_LENGTH                    equ 0001h
UMTOAH_UMTOA12_MASK                      equ 0010h
UMTOAH_UMTOA13_POSN                      equ 0005h
UMTOAH_UMTOA13_POSITION                  equ 0005h
UMTOAH_UMTOA13_SIZE                      equ 0001h
UMTOAH_UMTOA13_LENGTH                    equ 0001h
UMTOAH_UMTOA13_MASK                      equ 0020h

// Register: CLCDATA
#define CLCDATA CLCDATA
CLCDATA                                  equ 0E0Fh
// bitfield definitions
CLCDATA_LC1OUT_POSN                      equ 0000h
CLCDATA_LC1OUT_POSITION                  equ 0000h
CLCDATA_LC1OUT_SIZE                      equ 0001h
CLCDATA_LC1OUT_LENGTH                    equ 0001h
CLCDATA_LC1OUT_MASK                      equ 0001h
CLCDATA_LC2OUT_POSN                      equ 0001h
CLCDATA_LC2OUT_POSITION                  equ 0001h
CLCDATA_LC2OUT_SIZE                      equ 0001h
CLCDATA_LC2OUT_LENGTH                    equ 0001h
CLCDATA_LC2OUT_MASK                      equ 0002h
CLCDATA_LC3OUT_POSN                      equ 0002h
CLCDATA_LC3OUT_POSITION                  equ 0002h
CLCDATA_LC3OUT_SIZE                      equ 0001h
CLCDATA_LC3OUT_LENGTH                    equ 0001h
CLCDATA_LC3OUT_MASK                      equ 0004h
CLCDATA_LC4OUT_POSN                      equ 0003h
CLCDATA_LC4OUT_POSITION                  equ 0003h
CLCDATA_LC4OUT_SIZE                      equ 0001h
CLCDATA_LC4OUT_LENGTH                    equ 0001h
CLCDATA_LC4OUT_MASK                      equ 0008h

// Register: CLC1CON
#define CLC1CON CLC1CON
CLC1CON                                  equ 0E10h
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
CLC1POL                                  equ 0E11h
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
CLC1SEL0                                 equ 0E12h
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
CLC1SEL1                                 equ 0E13h
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
CLC1SEL2                                 equ 0E14h
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
CLC1SEL3                                 equ 0E15h
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
CLC1GLS0                                 equ 0E16h
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
CLC1GLS1                                 equ 0E17h
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
CLC1GLS2                                 equ 0E18h
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
CLC1GLS3                                 equ 0E19h
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
CLC2CON                                  equ 0E1Ah
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
CLC2POL                                  equ 0E1Bh
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
CLC2SEL0                                 equ 0E1Ch
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
CLC2SEL1                                 equ 0E1Dh
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
CLC2SEL2                                 equ 0E1Eh
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
CLC2SEL3                                 equ 0E1Fh
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
CLC2GLS0                                 equ 0E20h
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
CLC2GLS1                                 equ 0E21h
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
CLC2GLS2                                 equ 0E22h
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
CLC2GLS3                                 equ 0E23h
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

// Register: PPSLOCK
#define PPSLOCK PPSLOCK
PPSLOCK                                  equ 0E8Fh
// bitfield definitions
PPSLOCK_PPSLOCKED_POSN                   equ 0000h
PPSLOCK_PPSLOCKED_POSITION               equ 0000h
PPSLOCK_PPSLOCKED_SIZE                   equ 0001h
PPSLOCK_PPSLOCKED_LENGTH                 equ 0001h
PPSLOCK_PPSLOCKED_MASK                   equ 0001h

// Register: INTPPS
#define INTPPS INTPPS
INTPPS                                   equ 0E90h
// bitfield definitions
INTPPS_INTPPS_POSN                       equ 0000h
INTPPS_INTPPS_POSITION                   equ 0000h
INTPPS_INTPPS_SIZE                       equ 0004h
INTPPS_INTPPS_LENGTH                     equ 0004h
INTPPS_INTPPS_MASK                       equ 000Fh
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

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
T0CKIPPS                                 equ 0E91h
// bitfield definitions
T0CKIPPS_T0CKIPPS_POSN                   equ 0000h
T0CKIPPS_T0CKIPPS_POSITION               equ 0000h
T0CKIPPS_T0CKIPPS_SIZE                   equ 0004h
T0CKIPPS_T0CKIPPS_LENGTH                 equ 0004h
T0CKIPPS_T0CKIPPS_MASK                   equ 000Fh
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

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
T1CKIPPS                                 equ 0E92h
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
T1GPPS                                   equ 0E93h
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

// Register: T3CKIPPS
#define T3CKIPPS T3CKIPPS
T3CKIPPS                                 equ 0E94h
// bitfield definitions
T3CKIPPS_T3CKIPPS_POSN                   equ 0000h
T3CKIPPS_T3CKIPPS_POSITION               equ 0000h
T3CKIPPS_T3CKIPPS_SIZE                   equ 0005h
T3CKIPPS_T3CKIPPS_LENGTH                 equ 0005h
T3CKIPPS_T3CKIPPS_MASK                   equ 001Fh
T3CKIPPS_T3CKIPPS0_POSN                  equ 0000h
T3CKIPPS_T3CKIPPS0_POSITION              equ 0000h
T3CKIPPS_T3CKIPPS0_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS0_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS0_MASK                  equ 0001h
T3CKIPPS_T3CKIPPS1_POSN                  equ 0001h
T3CKIPPS_T3CKIPPS1_POSITION              equ 0001h
T3CKIPPS_T3CKIPPS1_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS1_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS1_MASK                  equ 0002h
T3CKIPPS_T3CKIPPS2_POSN                  equ 0002h
T3CKIPPS_T3CKIPPS2_POSITION              equ 0002h
T3CKIPPS_T3CKIPPS2_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS2_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS2_MASK                  equ 0004h
T3CKIPPS_T3CKIPPS3_POSN                  equ 0003h
T3CKIPPS_T3CKIPPS3_POSITION              equ 0003h
T3CKIPPS_T3CKIPPS3_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS3_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS3_MASK                  equ 0008h
T3CKIPPS_T3CKIPPS4_POSN                  equ 0004h
T3CKIPPS_T3CKIPPS4_POSITION              equ 0004h
T3CKIPPS_T3CKIPPS4_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS4_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS4_MASK                  equ 0010h

// Register: T3GPPS
#define T3GPPS T3GPPS
T3GPPS                                   equ 0E95h
// bitfield definitions
T3GPPS_T3GPPS_POSN                       equ 0000h
T3GPPS_T3GPPS_POSITION                   equ 0000h
T3GPPS_T3GPPS_SIZE                       equ 0005h
T3GPPS_T3GPPS_LENGTH                     equ 0005h
T3GPPS_T3GPPS_MASK                       equ 001Fh
T3GPPS_T3GPPS0_POSN                      equ 0000h
T3GPPS_T3GPPS0_POSITION                  equ 0000h
T3GPPS_T3GPPS0_SIZE                      equ 0001h
T3GPPS_T3GPPS0_LENGTH                    equ 0001h
T3GPPS_T3GPPS0_MASK                      equ 0001h
T3GPPS_T3GPPS1_POSN                      equ 0001h
T3GPPS_T3GPPS1_POSITION                  equ 0001h
T3GPPS_T3GPPS1_SIZE                      equ 0001h
T3GPPS_T3GPPS1_LENGTH                    equ 0001h
T3GPPS_T3GPPS1_MASK                      equ 0002h
T3GPPS_T3GPPS2_POSN                      equ 0002h
T3GPPS_T3GPPS2_POSITION                  equ 0002h
T3GPPS_T3GPPS2_SIZE                      equ 0001h
T3GPPS_T3GPPS2_LENGTH                    equ 0001h
T3GPPS_T3GPPS2_MASK                      equ 0004h
T3GPPS_T3GPPS3_POSN                      equ 0003h
T3GPPS_T3GPPS3_POSITION                  equ 0003h
T3GPPS_T3GPPS3_SIZE                      equ 0001h
T3GPPS_T3GPPS3_LENGTH                    equ 0001h
T3GPPS_T3GPPS3_MASK                      equ 0008h
T3GPPS_T3GPPS4_POSN                      equ 0004h
T3GPPS_T3GPPS4_POSITION                  equ 0004h
T3GPPS_T3GPPS4_SIZE                      equ 0001h
T3GPPS_T3GPPS4_LENGTH                    equ 0001h
T3GPPS_T3GPPS4_MASK                      equ 0010h

// Register: T2AINPPS
#define T2AINPPS T2AINPPS
T2AINPPS                                 equ 0E9Ch
// bitfield definitions
T2AINPPS_T2AINPPS_POSN                   equ 0000h
T2AINPPS_T2AINPPS_POSITION               equ 0000h
T2AINPPS_T2AINPPS_SIZE                   equ 0005h
T2AINPPS_T2AINPPS_LENGTH                 equ 0005h
T2AINPPS_T2AINPPS_MASK                   equ 001Fh
T2AINPPS_T2AINPPS0_POSN                  equ 0000h
T2AINPPS_T2AINPPS0_POSITION              equ 0000h
T2AINPPS_T2AINPPS0_SIZE                  equ 0001h
T2AINPPS_T2AINPPS0_LENGTH                equ 0001h
T2AINPPS_T2AINPPS0_MASK                  equ 0001h
T2AINPPS_T2AINPPS1_POSN                  equ 0001h
T2AINPPS_T2AINPPS1_POSITION              equ 0001h
T2AINPPS_T2AINPPS1_SIZE                  equ 0001h
T2AINPPS_T2AINPPS1_LENGTH                equ 0001h
T2AINPPS_T2AINPPS1_MASK                  equ 0002h
T2AINPPS_T2AINPPS2_POSN                  equ 0002h
T2AINPPS_T2AINPPS2_POSITION              equ 0002h
T2AINPPS_T2AINPPS2_SIZE                  equ 0001h
T2AINPPS_T2AINPPS2_LENGTH                equ 0001h
T2AINPPS_T2AINPPS2_MASK                  equ 0004h
T2AINPPS_T2AINPPS3_POSN                  equ 0003h
T2AINPPS_T2AINPPS3_POSITION              equ 0003h
T2AINPPS_T2AINPPS3_SIZE                  equ 0001h
T2AINPPS_T2AINPPS3_LENGTH                equ 0001h
T2AINPPS_T2AINPPS3_MASK                  equ 0008h
T2AINPPS_T2AINPPS4_POSN                  equ 0004h
T2AINPPS_T2AINPPS4_POSITION              equ 0004h
T2AINPPS_T2AINPPS4_SIZE                  equ 0001h
T2AINPPS_T2AINPPS4_LENGTH                equ 0001h
T2AINPPS_T2AINPPS4_MASK                  equ 0010h

// Register: T4AINPPS
#define T4AINPPS T4AINPPS
T4AINPPS                                 equ 0E9Dh
// bitfield definitions
T4AINPPS_T4AINPPS_POSN                   equ 0000h
T4AINPPS_T4AINPPS_POSITION               equ 0000h
T4AINPPS_T4AINPPS_SIZE                   equ 0005h
T4AINPPS_T4AINPPS_LENGTH                 equ 0005h
T4AINPPS_T4AINPPS_MASK                   equ 001Fh
T4AINPPS_T4AINPPS0_POSN                  equ 0000h
T4AINPPS_T4AINPPS0_POSITION              equ 0000h
T4AINPPS_T4AINPPS0_SIZE                  equ 0001h
T4AINPPS_T4AINPPS0_LENGTH                equ 0001h
T4AINPPS_T4AINPPS0_MASK                  equ 0001h
T4AINPPS_T4AINPPS1_POSN                  equ 0001h
T4AINPPS_T4AINPPS1_POSITION              equ 0001h
T4AINPPS_T4AINPPS1_SIZE                  equ 0001h
T4AINPPS_T4AINPPS1_LENGTH                equ 0001h
T4AINPPS_T4AINPPS1_MASK                  equ 0002h
T4AINPPS_T4AINPPS2_POSN                  equ 0002h
T4AINPPS_T4AINPPS2_POSITION              equ 0002h
T4AINPPS_T4AINPPS2_SIZE                  equ 0001h
T4AINPPS_T4AINPPS2_LENGTH                equ 0001h
T4AINPPS_T4AINPPS2_MASK                  equ 0004h
T4AINPPS_T4AINPPS3_POSN                  equ 0003h
T4AINPPS_T4AINPPS3_POSITION              equ 0003h
T4AINPPS_T4AINPPS3_SIZE                  equ 0001h
T4AINPPS_T4AINPPS3_LENGTH                equ 0001h
T4AINPPS_T4AINPPS3_MASK                  equ 0008h
T4AINPPS_T4AINPPS4_POSN                  equ 0004h
T4AINPPS_T4AINPPS4_POSITION              equ 0004h
T4AINPPS_T4AINPPS4_SIZE                  equ 0001h
T4AINPPS_T4AINPPS4_LENGTH                equ 0001h
T4AINPPS_T4AINPPS4_MASK                  equ 0010h

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
CCP1PPS                                  equ 0EA1h
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
CCP2PPS                                  equ 0EA2h
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

// Register: CLCIN0PPS
#define CLCIN0PPS CLCIN0PPS
CLCIN0PPS                                equ 0EBBh
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
CLCIN1PPS                                equ 0EBCh
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
CLCIN2PPS                                equ 0EBDh
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
CLCIN3PPS                                equ 0EBEh
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

// Register: ADCACTPPS
#define ADCACTPPS ADCACTPPS
ADCACTPPS                                equ 0EC3h
// bitfield definitions
ADCACTPPS_ADCACTPPS_POSN                 equ 0000h
ADCACTPPS_ADCACTPPS_POSITION             equ 0000h
ADCACTPPS_ADCACTPPS_SIZE                 equ 0005h
ADCACTPPS_ADCACTPPS_LENGTH               equ 0005h
ADCACTPPS_ADCACTPPS_MASK                 equ 001Fh

// Register: DCPHLDPPS
#define DCPHLDPPS DCPHLDPPS
DCPHLDPPS                                equ 0EC4h
// bitfield definitions
DCPHLDPPS_DCPHLDPPS_POSN                 equ 0000h
DCPHLDPPS_DCPHLDPPS_POSITION             equ 0000h
DCPHLDPPS_DCPHLDPPS_SIZE                 equ 0005h
DCPHLDPPS_DCPHLDPPS_LENGTH               equ 0005h
DCPHLDPPS_DCPHLDPPS_MASK                 equ 001Fh

// Register: SSP1CLKPPS
#define SSP1CLKPPS SSP1CLKPPS
SSP1CLKPPS                               equ 0EC5h
// bitfield definitions
SSP1CLKPPS_SSP1CLKPPS_POSN               equ 0000h
SSP1CLKPPS_SSP1CLKPPS_POSITION           equ 0000h
SSP1CLKPPS_SSP1CLKPPS_SIZE               equ 0005h
SSP1CLKPPS_SSP1CLKPPS_LENGTH             equ 0005h
SSP1CLKPPS_SSP1CLKPPS_MASK               equ 001Fh

// Register: SSP1DATPPS
#define SSP1DATPPS SSP1DATPPS
SSP1DATPPS                               equ 0EC6h
// bitfield definitions
SSP1DATPPS_SSP1DATPPS_POSN               equ 0000h
SSP1DATPPS_SSP1DATPPS_POSITION           equ 0000h
SSP1DATPPS_SSP1DATPPS_SIZE               equ 0005h
SSP1DATPPS_SSP1DATPPS_LENGTH             equ 0005h
SSP1DATPPS_SSP1DATPPS_MASK               equ 001Fh

// Register: SSP1SSPPS
#define SSP1SSPPS SSP1SSPPS
SSP1SSPPS                                equ 0EC7h
// bitfield definitions
SSP1SSPPS_SSP1SSPPS_POSN                 equ 0000h
SSP1SSPPS_SSP1SSPPS_POSITION             equ 0000h
SSP1SSPPS_SSP1SSPPS_SIZE                 equ 0005h
SSP1SSPPS_SSP1SSPPS_LENGTH               equ 0005h
SSP1SSPPS_SSP1SSPPS_MASK                 equ 001Fh

// Register: RXDTPPS
#define RXDTPPS RXDTPPS
RXDTPPS                                  equ 0ECBh
// bitfield definitions
RXDTPPS_RXDTPPS_POSN                     equ 0000h
RXDTPPS_RXDTPPS_POSITION                 equ 0000h
RXDTPPS_RXDTPPS_SIZE                     equ 0005h
RXDTPPS_RXDTPPS_LENGTH                   equ 0005h
RXDTPPS_RXDTPPS_MASK                     equ 001Fh

// Register: CKTXPPS
#define CKTXPPS CKTXPPS
CKTXPPS                                  equ 0ECCh
// bitfield definitions
CKTXPPS_CKTXPPS_POSN                     equ 0000h
CKTXPPS_CKTXPPS_POSITION                 equ 0000h
CKTXPPS_CKTXPPS_SIZE                     equ 0005h
CKTXPPS_CKTXPPS_LENGTH                   equ 0005h
CKTXPPS_CKTXPPS_MASK                     equ 001Fh

// Register: TST_PPSIN1
#define TST_PPSIN1 TST_PPSIN1
TST_PPSIN1                               equ 0ED0h
// bitfield definitions
TST_PPSIN1_INT_POSN                      equ 0000h
TST_PPSIN1_INT_POSITION                  equ 0000h
TST_PPSIN1_INT_SIZE                      equ 0001h
TST_PPSIN1_INT_LENGTH                    equ 0001h
TST_PPSIN1_INT_MASK                      equ 0001h
TST_PPSIN1_T0CKI_POSN                    equ 0001h
TST_PPSIN1_T0CKI_POSITION                equ 0001h
TST_PPSIN1_T0CKI_SIZE                    equ 0001h
TST_PPSIN1_T0CKI_LENGTH                  equ 0001h
TST_PPSIN1_T0CKI_MASK                    equ 0002h
TST_PPSIN1_T1CKI_POSN                    equ 0002h
TST_PPSIN1_T1CKI_POSITION                equ 0002h
TST_PPSIN1_T1CKI_SIZE                    equ 0001h
TST_PPSIN1_T1CKI_LENGTH                  equ 0001h
TST_PPSIN1_T1CKI_MASK                    equ 0004h
TST_PPSIN1_T1G_POSN                      equ 0003h
TST_PPSIN1_T1G_POSITION                  equ 0003h
TST_PPSIN1_T1G_SIZE                      equ 0001h
TST_PPSIN1_T1G_LENGTH                    equ 0001h
TST_PPSIN1_T1G_MASK                      equ 0008h
TST_PPSIN1_T3CKI_POSN                    equ 0004h
TST_PPSIN1_T3CKI_POSITION                equ 0004h
TST_PPSIN1_T3CKI_SIZE                    equ 0001h
TST_PPSIN1_T3CKI_LENGTH                  equ 0001h
TST_PPSIN1_T3CKI_MASK                    equ 0010h
TST_PPSIN1_T3G_POSN                      equ 0005h
TST_PPSIN1_T3G_POSITION                  equ 0005h
TST_PPSIN1_T3G_SIZE                      equ 0001h
TST_PPSIN1_T3G_LENGTH                    equ 0001h
TST_PPSIN1_T3G_MASK                      equ 0020h

// Register: TST_PPSIN2
#define TST_PPSIN2 TST_PPSIN2
TST_PPSIN2                               equ 0ED1h
// bitfield definitions
TST_PPSIN2_T2IN_POSN                     equ 0000h
TST_PPSIN2_T2IN_POSITION                 equ 0000h
TST_PPSIN2_T2IN_SIZE                     equ 0001h
TST_PPSIN2_T2IN_LENGTH                   equ 0001h
TST_PPSIN2_T2IN_MASK                     equ 0001h
TST_PPSIN2_T4IN_POSN                     equ 0001h
TST_PPSIN2_T4IN_POSITION                 equ 0001h
TST_PPSIN2_T4IN_SIZE                     equ 0001h
TST_PPSIN2_T4IN_LENGTH                   equ 0001h
TST_PPSIN2_T4IN_MASK                     equ 0002h
TST_PPSIN2_CCP1_POSN                     equ 0004h
TST_PPSIN2_CCP1_POSITION                 equ 0004h
TST_PPSIN2_CCP1_SIZE                     equ 0001h
TST_PPSIN2_CCP1_LENGTH                   equ 0001h
TST_PPSIN2_CCP1_MASK                     equ 0010h
TST_PPSIN2_CCP2_POSN                     equ 0005h
TST_PPSIN2_CCP2_POSITION                 equ 0005h
TST_PPSIN2_CCP2_SIZE                     equ 0001h
TST_PPSIN2_CCP2_LENGTH                   equ 0001h
TST_PPSIN2_CCP2_MASK                     equ 0020h

// Register: TST_PPSIN3
#define TST_PPSIN3 TST_PPSIN3
TST_PPSIN3                               equ 0ED2h
// bitfield definitions
TST_PPSIN3_CLCIN0_POSN                   equ 0000h
TST_PPSIN3_CLCIN0_POSITION               equ 0000h
TST_PPSIN3_CLCIN0_SIZE                   equ 0001h
TST_PPSIN3_CLCIN0_LENGTH                 equ 0001h
TST_PPSIN3_CLCIN0_MASK                   equ 0001h
TST_PPSIN3_CLCIN1_POSN                   equ 0001h
TST_PPSIN3_CLCIN1_POSITION               equ 0001h
TST_PPSIN3_CLCIN1_SIZE                   equ 0001h
TST_PPSIN3_CLCIN1_LENGTH                 equ 0001h
TST_PPSIN3_CLCIN1_MASK                   equ 0002h
TST_PPSIN3_CLCIN2_POSN                   equ 0002h
TST_PPSIN3_CLCIN2_POSITION               equ 0002h
TST_PPSIN3_CLCIN2_SIZE                   equ 0001h
TST_PPSIN3_CLCIN2_LENGTH                 equ 0001h
TST_PPSIN3_CLCIN2_MASK                   equ 0004h
TST_PPSIN3_CLCIN3_POSN                   equ 0003h
TST_PPSIN3_CLCIN3_POSITION               equ 0003h
TST_PPSIN3_CLCIN3_SIZE                   equ 0001h
TST_PPSIN3_CLCIN3_LENGTH                 equ 0001h
TST_PPSIN3_CLCIN3_MASK                   equ 0008h
TST_PPSIN3_ADCACT_POSN                   equ 0006h
TST_PPSIN3_ADCACT_POSITION               equ 0006h
TST_PPSIN3_ADCACT_SIZE                   equ 0001h
TST_PPSIN3_ADCACT_LENGTH                 equ 0001h
TST_PPSIN3_ADCACT_MASK                   equ 0040h
TST_PPSIN3_DCPHLD_POSN                   equ 0007h
TST_PPSIN3_DCPHLD_POSITION               equ 0007h
TST_PPSIN3_DCPHLD_SIZE                   equ 0001h
TST_PPSIN3_DCPHLD_LENGTH                 equ 0001h
TST_PPSIN3_DCPHLD_MASK                   equ 0080h

// Register: TST_PPSIN4
#define TST_PPSIN4 TST_PPSIN4
TST_PPSIN4                               equ 0ED3h
// bitfield definitions
TST_PPSIN4_RXDT_POSN                     equ 0000h
TST_PPSIN4_RXDT_POSITION                 equ 0000h
TST_PPSIN4_RXDT_SIZE                     equ 0001h
TST_PPSIN4_RXDT_LENGTH                   equ 0001h
TST_PPSIN4_RXDT_MASK                     equ 0001h
TST_PPSIN4_TXCK_POSN                     equ 0001h
TST_PPSIN4_TXCK_POSITION                 equ 0001h
TST_PPSIN4_TXCK_SIZE                     equ 0001h
TST_PPSIN4_TXCK_LENGTH                   equ 0001h
TST_PPSIN4_TXCK_MASK                     equ 0002h
TST_PPSIN4_SSP1CLK_POSN                  equ 0005h
TST_PPSIN4_SSP1CLK_POSITION              equ 0005h
TST_PPSIN4_SSP1CLK_SIZE                  equ 0001h
TST_PPSIN4_SSP1CLK_LENGTH                equ 0001h
TST_PPSIN4_SSP1CLK_MASK                  equ 0020h
TST_PPSIN4_SSP1DAT_POSN                  equ 0006h
TST_PPSIN4_SSP1DAT_POSITION              equ 0006h
TST_PPSIN4_SSP1DAT_SIZE                  equ 0001h
TST_PPSIN4_SSP1DAT_LENGTH                equ 0001h
TST_PPSIN4_SSP1DAT_MASK                  equ 0040h
TST_PPSIN4_SSP1SS_POSN                   equ 0007h
TST_PPSIN4_SSP1SS_POSITION               equ 0007h
TST_PPSIN4_SSP1SS_SIZE                   equ 0001h
TST_PPSIN4_SSP1SS_LENGTH                 equ 0001h
TST_PPSIN4_SSP1SS_MASK                   equ 0080h

// Register: TST_PPSDOV
#define TST_PPSDOV TST_PPSDOV
TST_PPSDOV                               equ 0ED8h
// bitfield definitions
TST_PPSDOV_PPSDOV0_POSN                  equ 0000h
TST_PPSDOV_PPSDOV0_POSITION              equ 0000h
TST_PPSDOV_PPSDOV0_SIZE                  equ 0001h
TST_PPSDOV_PPSDOV0_LENGTH                equ 0001h
TST_PPSDOV_PPSDOV0_MASK                  equ 0001h
TST_PPSDOV_PPSDOV1_POSN                  equ 0001h
TST_PPSDOV_PPSDOV1_POSITION              equ 0001h
TST_PPSDOV_PPSDOV1_SIZE                  equ 0001h
TST_PPSDOV_PPSDOV1_LENGTH                equ 0001h
TST_PPSDOV_PPSDOV1_MASK                  equ 0002h
TST_PPSDOV_PPSDOV2_POSN                  equ 0002h
TST_PPSDOV_PPSDOV2_POSITION              equ 0002h
TST_PPSDOV_PPSDOV2_SIZE                  equ 0001h
TST_PPSDOV_PPSDOV2_LENGTH                equ 0001h
TST_PPSDOV_PPSDOV2_MASK                  equ 0004h
TST_PPSDOV_PPSDOV3_POSN                  equ 0003h
TST_PPSDOV_PPSDOV3_POSITION              equ 0003h
TST_PPSDOV_PPSDOV3_SIZE                  equ 0001h
TST_PPSDOV_PPSDOV3_LENGTH                equ 0001h
TST_PPSDOV_PPSDOV3_MASK                  equ 0008h

// Register: TST_PPSEOV
#define TST_PPSEOV TST_PPSEOV
TST_PPSEOV                               equ 0ED9h
// bitfield definitions
TST_PPSEOV_PPSEOV0_POSN                  equ 0000h
TST_PPSEOV_PPSEOV0_POSITION              equ 0000h
TST_PPSEOV_PPSEOV0_SIZE                  equ 0001h
TST_PPSEOV_PPSEOV0_LENGTH                equ 0001h
TST_PPSEOV_PPSEOV0_MASK                  equ 0001h
TST_PPSEOV_PPSEOV1_POSN                  equ 0001h
TST_PPSEOV_PPSEOV1_POSITION              equ 0001h
TST_PPSEOV_PPSEOV1_SIZE                  equ 0001h
TST_PPSEOV_PPSEOV1_LENGTH                equ 0001h
TST_PPSEOV_PPSEOV1_MASK                  equ 0002h
TST_PPSEOV_PPSEOV2_POSN                  equ 0002h
TST_PPSEOV_PPSEOV2_POSITION              equ 0002h
TST_PPSEOV_PPSEOV2_SIZE                  equ 0001h
TST_PPSEOV_PPSEOV2_LENGTH                equ 0001h
TST_PPSEOV_PPSEOV2_MASK                  equ 0004h
TST_PPSEOV_PPSEOV3_POSN                  equ 0003h
TST_PPSEOV_PPSEOV3_POSITION              equ 0003h
TST_PPSEOV_PPSEOV3_SIZE                  equ 0001h
TST_PPSEOV_PPSEOV3_LENGTH                equ 0001h
TST_PPSEOV_PPSEOV3_MASK                  equ 0008h

// Register: RA0PPS
#define RA0PPS RA0PPS
RA0PPS                                   equ 0F10h
// bitfield definitions
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
RA0PPS_RA0PPS5_POSN                      equ 0005h
RA0PPS_RA0PPS5_POSITION                  equ 0005h
RA0PPS_RA0PPS5_SIZE                      equ 0001h
RA0PPS_RA0PPS5_LENGTH                    equ 0001h
RA0PPS_RA0PPS5_MASK                      equ 0020h

// Register: RA1PPS
#define RA1PPS RA1PPS
RA1PPS                                   equ 0F11h
// bitfield definitions
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
RA1PPS_RA1PPS5_POSN                      equ 0005h
RA1PPS_RA1PPS5_POSITION                  equ 0005h
RA1PPS_RA1PPS5_SIZE                      equ 0001h
RA1PPS_RA1PPS5_LENGTH                    equ 0001h
RA1PPS_RA1PPS5_MASK                      equ 0020h

// Register: RA2PPS
#define RA2PPS RA2PPS
RA2PPS                                   equ 0F12h
// bitfield definitions
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
RA2PPS_RA2PPS5_POSN                      equ 0005h
RA2PPS_RA2PPS5_POSITION                  equ 0005h
RA2PPS_RA2PPS5_SIZE                      equ 0001h
RA2PPS_RA2PPS5_LENGTH                    equ 0001h
RA2PPS_RA2PPS5_MASK                      equ 0020h

// Register: RA3PPS
#define RA3PPS RA3PPS
RA3PPS                                   equ 0F13h
// bitfield definitions
RA3PPS_RA3PPS0_POSN                      equ 0000h
RA3PPS_RA3PPS0_POSITION                  equ 0000h
RA3PPS_RA3PPS0_SIZE                      equ 0001h
RA3PPS_RA3PPS0_LENGTH                    equ 0001h
RA3PPS_RA3PPS0_MASK                      equ 0001h
RA3PPS_RA3PPS1_POSN                      equ 0001h
RA3PPS_RA3PPS1_POSITION                  equ 0001h
RA3PPS_RA3PPS1_SIZE                      equ 0001h
RA3PPS_RA3PPS1_LENGTH                    equ 0001h
RA3PPS_RA3PPS1_MASK                      equ 0002h
RA3PPS_RA3PPS2_POSN                      equ 0002h
RA3PPS_RA3PPS2_POSITION                  equ 0002h
RA3PPS_RA3PPS2_SIZE                      equ 0001h
RA3PPS_RA3PPS2_LENGTH                    equ 0001h
RA3PPS_RA3PPS2_MASK                      equ 0004h
RA3PPS_RA3PPS3_POSN                      equ 0003h
RA3PPS_RA3PPS3_POSITION                  equ 0003h
RA3PPS_RA3PPS3_SIZE                      equ 0001h
RA3PPS_RA3PPS3_LENGTH                    equ 0001h
RA3PPS_RA3PPS3_MASK                      equ 0008h
RA3PPS_RA3PPS4_POSN                      equ 0004h
RA3PPS_RA3PPS4_POSITION                  equ 0004h
RA3PPS_RA3PPS4_SIZE                      equ 0001h
RA3PPS_RA3PPS4_LENGTH                    equ 0001h
RA3PPS_RA3PPS4_MASK                      equ 0010h
RA3PPS_RA3PPS5_POSN                      equ 0005h
RA3PPS_RA3PPS5_POSITION                  equ 0005h
RA3PPS_RA3PPS5_SIZE                      equ 0001h
RA3PPS_RA3PPS5_LENGTH                    equ 0001h
RA3PPS_RA3PPS5_MASK                      equ 0020h

// Register: RA4PPS
#define RA4PPS RA4PPS
RA4PPS                                   equ 0F14h
// bitfield definitions
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
RA4PPS_RA4PPS5_POSN                      equ 0005h
RA4PPS_RA4PPS5_POSITION                  equ 0005h
RA4PPS_RA4PPS5_SIZE                      equ 0001h
RA4PPS_RA4PPS5_LENGTH                    equ 0001h
RA4PPS_RA4PPS5_MASK                      equ 0020h

// Register: RA5PPS
#define RA5PPS RA5PPS
RA5PPS                                   equ 0F15h
// bitfield definitions
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
RA5PPS_RA5PPS5_POSN                      equ 0005h
RA5PPS_RA5PPS5_POSITION                  equ 0005h
RA5PPS_RA5PPS5_SIZE                      equ 0001h
RA5PPS_RA5PPS5_LENGTH                    equ 0001h
RA5PPS_RA5PPS5_MASK                      equ 0020h

// Register: RA6PPS
#define RA6PPS RA6PPS
RA6PPS                                   equ 0F16h
// bitfield definitions
RA6PPS_RA6PPS0_POSN                      equ 0000h
RA6PPS_RA6PPS0_POSITION                  equ 0000h
RA6PPS_RA6PPS0_SIZE                      equ 0001h
RA6PPS_RA6PPS0_LENGTH                    equ 0001h
RA6PPS_RA6PPS0_MASK                      equ 0001h
RA6PPS_RA6PPS1_POSN                      equ 0001h
RA6PPS_RA6PPS1_POSITION                  equ 0001h
RA6PPS_RA6PPS1_SIZE                      equ 0001h
RA6PPS_RA6PPS1_LENGTH                    equ 0001h
RA6PPS_RA6PPS1_MASK                      equ 0002h
RA6PPS_RA6PPS2_POSN                      equ 0002h
RA6PPS_RA6PPS2_POSITION                  equ 0002h
RA6PPS_RA6PPS2_SIZE                      equ 0001h
RA6PPS_RA6PPS2_LENGTH                    equ 0001h
RA6PPS_RA6PPS2_MASK                      equ 0004h
RA6PPS_RA6PPS3_POSN                      equ 0003h
RA6PPS_RA6PPS3_POSITION                  equ 0003h
RA6PPS_RA6PPS3_SIZE                      equ 0001h
RA6PPS_RA6PPS3_LENGTH                    equ 0001h
RA6PPS_RA6PPS3_MASK                      equ 0008h
RA6PPS_RA6PPS4_POSN                      equ 0004h
RA6PPS_RA6PPS4_POSITION                  equ 0004h
RA6PPS_RA6PPS4_SIZE                      equ 0001h
RA6PPS_RA6PPS4_LENGTH                    equ 0001h
RA6PPS_RA6PPS4_MASK                      equ 0010h
RA6PPS_RA6PPS5_POSN                      equ 0005h
RA6PPS_RA6PPS5_POSITION                  equ 0005h
RA6PPS_RA6PPS5_SIZE                      equ 0001h
RA6PPS_RA6PPS5_LENGTH                    equ 0001h
RA6PPS_RA6PPS5_MASK                      equ 0020h

// Register: RB0PPS
#define RB0PPS RB0PPS
RB0PPS                                   equ 0F18h
// bitfield definitions
RB0PPS_RB0PPS0_POSN                      equ 0000h
RB0PPS_RB0PPS0_POSITION                  equ 0000h
RB0PPS_RB0PPS0_SIZE                      equ 0001h
RB0PPS_RB0PPS0_LENGTH                    equ 0001h
RB0PPS_RB0PPS0_MASK                      equ 0001h
RB0PPS_RB0PPS1_POSN                      equ 0001h
RB0PPS_RB0PPS1_POSITION                  equ 0001h
RB0PPS_RB0PPS1_SIZE                      equ 0001h
RB0PPS_RB0PPS1_LENGTH                    equ 0001h
RB0PPS_RB0PPS1_MASK                      equ 0002h
RB0PPS_RB0PPS2_POSN                      equ 0002h
RB0PPS_RB0PPS2_POSITION                  equ 0002h
RB0PPS_RB0PPS2_SIZE                      equ 0001h
RB0PPS_RB0PPS2_LENGTH                    equ 0001h
RB0PPS_RB0PPS2_MASK                      equ 0004h
RB0PPS_RB0PPS3_POSN                      equ 0003h
RB0PPS_RB0PPS3_POSITION                  equ 0003h
RB0PPS_RB0PPS3_SIZE                      equ 0001h
RB0PPS_RB0PPS3_LENGTH                    equ 0001h
RB0PPS_RB0PPS3_MASK                      equ 0008h
RB0PPS_RB0PPS4_POSN                      equ 0004h
RB0PPS_RB0PPS4_POSITION                  equ 0004h
RB0PPS_RB0PPS4_SIZE                      equ 0001h
RB0PPS_RB0PPS4_LENGTH                    equ 0001h
RB0PPS_RB0PPS4_MASK                      equ 0010h
RB0PPS_RB0PPS5_POSN                      equ 0005h
RB0PPS_RB0PPS5_POSITION                  equ 0005h
RB0PPS_RB0PPS5_SIZE                      equ 0001h
RB0PPS_RB0PPS5_LENGTH                    equ 0001h
RB0PPS_RB0PPS5_MASK                      equ 0020h

// Register: RB1PPS
#define RB1PPS RB1PPS
RB1PPS                                   equ 0F19h
// bitfield definitions
RB1PPS_RB1PPS0_POSN                      equ 0000h
RB1PPS_RB1PPS0_POSITION                  equ 0000h
RB1PPS_RB1PPS0_SIZE                      equ 0001h
RB1PPS_RB1PPS0_LENGTH                    equ 0001h
RB1PPS_RB1PPS0_MASK                      equ 0001h
RB1PPS_RB1PPS1_POSN                      equ 0001h
RB1PPS_RB1PPS1_POSITION                  equ 0001h
RB1PPS_RB1PPS1_SIZE                      equ 0001h
RB1PPS_RB1PPS1_LENGTH                    equ 0001h
RB1PPS_RB1PPS1_MASK                      equ 0002h
RB1PPS_RB1PPS2_POSN                      equ 0002h
RB1PPS_RB1PPS2_POSITION                  equ 0002h
RB1PPS_RB1PPS2_SIZE                      equ 0001h
RB1PPS_RB1PPS2_LENGTH                    equ 0001h
RB1PPS_RB1PPS2_MASK                      equ 0004h
RB1PPS_RB1PPS3_POSN                      equ 0003h
RB1PPS_RB1PPS3_POSITION                  equ 0003h
RB1PPS_RB1PPS3_SIZE                      equ 0001h
RB1PPS_RB1PPS3_LENGTH                    equ 0001h
RB1PPS_RB1PPS3_MASK                      equ 0008h
RB1PPS_RB1PPS4_POSN                      equ 0004h
RB1PPS_RB1PPS4_POSITION                  equ 0004h
RB1PPS_RB1PPS4_SIZE                      equ 0001h
RB1PPS_RB1PPS4_LENGTH                    equ 0001h
RB1PPS_RB1PPS4_MASK                      equ 0010h
RB1PPS_RB1PPS5_POSN                      equ 0005h
RB1PPS_RB1PPS5_POSITION                  equ 0005h
RB1PPS_RB1PPS5_SIZE                      equ 0001h
RB1PPS_RB1PPS5_LENGTH                    equ 0001h
RB1PPS_RB1PPS5_MASK                      equ 0020h

// Register: RB2PPS
#define RB2PPS RB2PPS
RB2PPS                                   equ 0F1Ah
// bitfield definitions
RB2PPS_RB2PPS0_POSN                      equ 0000h
RB2PPS_RB2PPS0_POSITION                  equ 0000h
RB2PPS_RB2PPS0_SIZE                      equ 0001h
RB2PPS_RB2PPS0_LENGTH                    equ 0001h
RB2PPS_RB2PPS0_MASK                      equ 0001h
RB2PPS_RB2PPS1_POSN                      equ 0001h
RB2PPS_RB2PPS1_POSITION                  equ 0001h
RB2PPS_RB2PPS1_SIZE                      equ 0001h
RB2PPS_RB2PPS1_LENGTH                    equ 0001h
RB2PPS_RB2PPS1_MASK                      equ 0002h
RB2PPS_RB2PPS2_POSN                      equ 0002h
RB2PPS_RB2PPS2_POSITION                  equ 0002h
RB2PPS_RB2PPS2_SIZE                      equ 0001h
RB2PPS_RB2PPS2_LENGTH                    equ 0001h
RB2PPS_RB2PPS2_MASK                      equ 0004h
RB2PPS_RB2PPS3_POSN                      equ 0003h
RB2PPS_RB2PPS3_POSITION                  equ 0003h
RB2PPS_RB2PPS3_SIZE                      equ 0001h
RB2PPS_RB2PPS3_LENGTH                    equ 0001h
RB2PPS_RB2PPS3_MASK                      equ 0008h
RB2PPS_RB2PPS4_POSN                      equ 0004h
RB2PPS_RB2PPS4_POSITION                  equ 0004h
RB2PPS_RB2PPS4_SIZE                      equ 0001h
RB2PPS_RB2PPS4_LENGTH                    equ 0001h
RB2PPS_RB2PPS4_MASK                      equ 0010h
RB2PPS_RB2PPS5_POSN                      equ 0005h
RB2PPS_RB2PPS5_POSITION                  equ 0005h
RB2PPS_RB2PPS5_SIZE                      equ 0001h
RB2PPS_RB2PPS5_LENGTH                    equ 0001h
RB2PPS_RB2PPS5_MASK                      equ 0020h

// Register: RB3PPS
#define RB3PPS RB3PPS
RB3PPS                                   equ 0F1Bh
// bitfield definitions
RB3PPS_RB3PPS0_POSN                      equ 0000h
RB3PPS_RB3PPS0_POSITION                  equ 0000h
RB3PPS_RB3PPS0_SIZE                      equ 0001h
RB3PPS_RB3PPS0_LENGTH                    equ 0001h
RB3PPS_RB3PPS0_MASK                      equ 0001h
RB3PPS_RB3PPS1_POSN                      equ 0001h
RB3PPS_RB3PPS1_POSITION                  equ 0001h
RB3PPS_RB3PPS1_SIZE                      equ 0001h
RB3PPS_RB3PPS1_LENGTH                    equ 0001h
RB3PPS_RB3PPS1_MASK                      equ 0002h
RB3PPS_RB3PPS2_POSN                      equ 0002h
RB3PPS_RB3PPS2_POSITION                  equ 0002h
RB3PPS_RB3PPS2_SIZE                      equ 0001h
RB3PPS_RB3PPS2_LENGTH                    equ 0001h
RB3PPS_RB3PPS2_MASK                      equ 0004h
RB3PPS_RB3PPS3_POSN                      equ 0003h
RB3PPS_RB3PPS3_POSITION                  equ 0003h
RB3PPS_RB3PPS3_SIZE                      equ 0001h
RB3PPS_RB3PPS3_LENGTH                    equ 0001h
RB3PPS_RB3PPS3_MASK                      equ 0008h
RB3PPS_RB3PPS4_POSN                      equ 0004h
RB3PPS_RB3PPS4_POSITION                  equ 0004h
RB3PPS_RB3PPS4_SIZE                      equ 0001h
RB3PPS_RB3PPS4_LENGTH                    equ 0001h
RB3PPS_RB3PPS4_MASK                      equ 0010h
RB3PPS_RB3PPS5_POSN                      equ 0005h
RB3PPS_RB3PPS5_POSITION                  equ 0005h
RB3PPS_RB3PPS5_SIZE                      equ 0001h
RB3PPS_RB3PPS5_LENGTH                    equ 0001h
RB3PPS_RB3PPS5_MASK                      equ 0020h

// Register: RB4PPS
#define RB4PPS RB4PPS
RB4PPS                                   equ 0F1Ch
// bitfield definitions
RB4PPS_RB4PPS0_POSN                      equ 0000h
RB4PPS_RB4PPS0_POSITION                  equ 0000h
RB4PPS_RB4PPS0_SIZE                      equ 0001h
RB4PPS_RB4PPS0_LENGTH                    equ 0001h
RB4PPS_RB4PPS0_MASK                      equ 0001h
RB4PPS_RB4PPS1_POSN                      equ 0001h
RB4PPS_RB4PPS1_POSITION                  equ 0001h
RB4PPS_RB4PPS1_SIZE                      equ 0001h
RB4PPS_RB4PPS1_LENGTH                    equ 0001h
RB4PPS_RB4PPS1_MASK                      equ 0002h
RB4PPS_RB4PPS2_POSN                      equ 0002h
RB4PPS_RB4PPS2_POSITION                  equ 0002h
RB4PPS_RB4PPS2_SIZE                      equ 0001h
RB4PPS_RB4PPS2_LENGTH                    equ 0001h
RB4PPS_RB4PPS2_MASK                      equ 0004h
RB4PPS_RB4PPS3_POSN                      equ 0003h
RB4PPS_RB4PPS3_POSITION                  equ 0003h
RB4PPS_RB4PPS3_SIZE                      equ 0001h
RB4PPS_RB4PPS3_LENGTH                    equ 0001h
RB4PPS_RB4PPS3_MASK                      equ 0008h
RB4PPS_RB4PPS4_POSN                      equ 0004h
RB4PPS_RB4PPS4_POSITION                  equ 0004h
RB4PPS_RB4PPS4_SIZE                      equ 0001h
RB4PPS_RB4PPS4_LENGTH                    equ 0001h
RB4PPS_RB4PPS4_MASK                      equ 0010h
RB4PPS_RB4PPS5_POSN                      equ 0005h
RB4PPS_RB4PPS5_POSITION                  equ 0005h
RB4PPS_RB4PPS5_SIZE                      equ 0001h
RB4PPS_RB4PPS5_LENGTH                    equ 0001h
RB4PPS_RB4PPS5_MASK                      equ 0020h

// Register: RB5PPS
#define RB5PPS RB5PPS
RB5PPS                                   equ 0F1Dh
// bitfield definitions
RB5PPS_RB5PPS0_POSN                      equ 0000h
RB5PPS_RB5PPS0_POSITION                  equ 0000h
RB5PPS_RB5PPS0_SIZE                      equ 0001h
RB5PPS_RB5PPS0_LENGTH                    equ 0001h
RB5PPS_RB5PPS0_MASK                      equ 0001h
RB5PPS_RB5PPS1_POSN                      equ 0001h
RB5PPS_RB5PPS1_POSITION                  equ 0001h
RB5PPS_RB5PPS1_SIZE                      equ 0001h
RB5PPS_RB5PPS1_LENGTH                    equ 0001h
RB5PPS_RB5PPS1_MASK                      equ 0002h
RB5PPS_RB5PPS2_POSN                      equ 0002h
RB5PPS_RB5PPS2_POSITION                  equ 0002h
RB5PPS_RB5PPS2_SIZE                      equ 0001h
RB5PPS_RB5PPS2_LENGTH                    equ 0001h
RB5PPS_RB5PPS2_MASK                      equ 0004h
RB5PPS_RB5PPS3_POSN                      equ 0003h
RB5PPS_RB5PPS3_POSITION                  equ 0003h
RB5PPS_RB5PPS3_SIZE                      equ 0001h
RB5PPS_RB5PPS3_LENGTH                    equ 0001h
RB5PPS_RB5PPS3_MASK                      equ 0008h
RB5PPS_RB5PPS4_POSN                      equ 0004h
RB5PPS_RB5PPS4_POSITION                  equ 0004h
RB5PPS_RB5PPS4_SIZE                      equ 0001h
RB5PPS_RB5PPS4_LENGTH                    equ 0001h
RB5PPS_RB5PPS4_MASK                      equ 0010h
RB5PPS_RB5PPS5_POSN                      equ 0005h
RB5PPS_RB5PPS5_POSITION                  equ 0005h
RB5PPS_RB5PPS5_SIZE                      equ 0001h
RB5PPS_RB5PPS5_LENGTH                    equ 0001h
RB5PPS_RB5PPS5_MASK                      equ 0020h

// Register: RB6PPS
#define RB6PPS RB6PPS
RB6PPS                                   equ 0F1Eh
// bitfield definitions
RB6PPS_RB6PPS0_POSN                      equ 0000h
RB6PPS_RB6PPS0_POSITION                  equ 0000h
RB6PPS_RB6PPS0_SIZE                      equ 0001h
RB6PPS_RB6PPS0_LENGTH                    equ 0001h
RB6PPS_RB6PPS0_MASK                      equ 0001h
RB6PPS_RB6PPS1_POSN                      equ 0001h
RB6PPS_RB6PPS1_POSITION                  equ 0001h
RB6PPS_RB6PPS1_SIZE                      equ 0001h
RB6PPS_RB6PPS1_LENGTH                    equ 0001h
RB6PPS_RB6PPS1_MASK                      equ 0002h
RB6PPS_RB6PPS2_POSN                      equ 0002h
RB6PPS_RB6PPS2_POSITION                  equ 0002h
RB6PPS_RB6PPS2_SIZE                      equ 0001h
RB6PPS_RB6PPS2_LENGTH                    equ 0001h
RB6PPS_RB6PPS2_MASK                      equ 0004h
RB6PPS_RB6PPS3_POSN                      equ 0003h
RB6PPS_RB6PPS3_POSITION                  equ 0003h
RB6PPS_RB6PPS3_SIZE                      equ 0001h
RB6PPS_RB6PPS3_LENGTH                    equ 0001h
RB6PPS_RB6PPS3_MASK                      equ 0008h
RB6PPS_RB6PPS4_POSN                      equ 0004h
RB6PPS_RB6PPS4_POSITION                  equ 0004h
RB6PPS_RB6PPS4_SIZE                      equ 0001h
RB6PPS_RB6PPS4_LENGTH                    equ 0001h
RB6PPS_RB6PPS4_MASK                      equ 0010h
RB6PPS_RB6PPS5_POSN                      equ 0005h
RB6PPS_RB6PPS5_POSITION                  equ 0005h
RB6PPS_RB6PPS5_SIZE                      equ 0001h
RB6PPS_RB6PPS5_LENGTH                    equ 0001h
RB6PPS_RB6PPS5_MASK                      equ 0020h

// Register: RB7PPS
#define RB7PPS RB7PPS
RB7PPS                                   equ 0F1Fh
// bitfield definitions
RB7PPS_RB7PPS0_POSN                      equ 0000h
RB7PPS_RB7PPS0_POSITION                  equ 0000h
RB7PPS_RB7PPS0_SIZE                      equ 0001h
RB7PPS_RB7PPS0_LENGTH                    equ 0001h
RB7PPS_RB7PPS0_MASK                      equ 0001h
RB7PPS_RB7PPS1_POSN                      equ 0001h
RB7PPS_RB7PPS1_POSITION                  equ 0001h
RB7PPS_RB7PPS1_SIZE                      equ 0001h
RB7PPS_RB7PPS1_LENGTH                    equ 0001h
RB7PPS_RB7PPS1_MASK                      equ 0002h
RB7PPS_RB7PPS2_POSN                      equ 0002h
RB7PPS_RB7PPS2_POSITION                  equ 0002h
RB7PPS_RB7PPS2_SIZE                      equ 0001h
RB7PPS_RB7PPS2_LENGTH                    equ 0001h
RB7PPS_RB7PPS2_MASK                      equ 0004h
RB7PPS_RB7PPS3_POSN                      equ 0003h
RB7PPS_RB7PPS3_POSITION                  equ 0003h
RB7PPS_RB7PPS3_SIZE                      equ 0001h
RB7PPS_RB7PPS3_LENGTH                    equ 0001h
RB7PPS_RB7PPS3_MASK                      equ 0008h
RB7PPS_RB7PPS4_POSN                      equ 0004h
RB7PPS_RB7PPS4_POSITION                  equ 0004h
RB7PPS_RB7PPS4_SIZE                      equ 0001h
RB7PPS_RB7PPS4_LENGTH                    equ 0001h
RB7PPS_RB7PPS4_MASK                      equ 0010h
RB7PPS_RB7PPS5_POSN                      equ 0005h
RB7PPS_RB7PPS5_POSITION                  equ 0005h
RB7PPS_RB7PPS5_SIZE                      equ 0001h
RB7PPS_RB7PPS5_LENGTH                    equ 0001h
RB7PPS_RB7PPS5_MASK                      equ 0020h

// Register: RC2PPS
#define RC2PPS RC2PPS
RC2PPS                                   equ 0F22h
// bitfield definitions
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
RC2PPS_RC2PPS5_POSN                      equ 0005h
RC2PPS_RC2PPS5_POSITION                  equ 0005h
RC2PPS_RC2PPS5_SIZE                      equ 0001h
RC2PPS_RC2PPS5_LENGTH                    equ 0001h
RC2PPS_RC2PPS5_MASK                      equ 0020h

// Register: RC3PPS
#define RC3PPS RC3PPS
RC3PPS                                   equ 0F23h
// bitfield definitions
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
RC3PPS_RC3PPS5_POSN                      equ 0005h
RC3PPS_RC3PPS5_POSITION                  equ 0005h
RC3PPS_RC3PPS5_SIZE                      equ 0001h
RC3PPS_RC3PPS5_LENGTH                    equ 0001h
RC3PPS_RC3PPS5_MASK                      equ 0020h

// Register: RC4PPS
#define RC4PPS RC4PPS
RC4PPS                                   equ 0F24h
// bitfield definitions
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
RC4PPS_RC4PPS5_POSN                      equ 0005h
RC4PPS_RC4PPS5_POSITION                  equ 0005h
RC4PPS_RC4PPS5_SIZE                      equ 0001h
RC4PPS_RC4PPS5_LENGTH                    equ 0001h
RC4PPS_RC4PPS5_MASK                      equ 0020h

// Register: RC5PPS
#define RC5PPS RC5PPS
RC5PPS                                   equ 0F25h
// bitfield definitions
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
RC5PPS_RC5PPS5_POSN                      equ 0005h
RC5PPS_RC5PPS5_POSITION                  equ 0005h
RC5PPS_RC5PPS5_SIZE                      equ 0001h
RC5PPS_RC5PPS5_LENGTH                    equ 0001h
RC5PPS_RC5PPS5_MASK                      equ 0020h

// Register: RC6PPS
#define RC6PPS RC6PPS
RC6PPS                                   equ 0F26h
// bitfield definitions
RC6PPS_RC6PPS0_POSN                      equ 0000h
RC6PPS_RC6PPS0_POSITION                  equ 0000h
RC6PPS_RC6PPS0_SIZE                      equ 0001h
RC6PPS_RC6PPS0_LENGTH                    equ 0001h
RC6PPS_RC6PPS0_MASK                      equ 0001h
RC6PPS_RC6PPS1_POSN                      equ 0001h
RC6PPS_RC6PPS1_POSITION                  equ 0001h
RC6PPS_RC6PPS1_SIZE                      equ 0001h
RC6PPS_RC6PPS1_LENGTH                    equ 0001h
RC6PPS_RC6PPS1_MASK                      equ 0002h
RC6PPS_RC6PPS2_POSN                      equ 0002h
RC6PPS_RC6PPS2_POSITION                  equ 0002h
RC6PPS_RC6PPS2_SIZE                      equ 0001h
RC6PPS_RC6PPS2_LENGTH                    equ 0001h
RC6PPS_RC6PPS2_MASK                      equ 0004h
RC6PPS_RC6PPS3_POSN                      equ 0003h
RC6PPS_RC6PPS3_POSITION                  equ 0003h
RC6PPS_RC6PPS3_SIZE                      equ 0001h
RC6PPS_RC6PPS3_LENGTH                    equ 0001h
RC6PPS_RC6PPS3_MASK                      equ 0008h
RC6PPS_RC6PPS4_POSN                      equ 0004h
RC6PPS_RC6PPS4_POSITION                  equ 0004h
RC6PPS_RC6PPS4_SIZE                      equ 0001h
RC6PPS_RC6PPS4_LENGTH                    equ 0001h
RC6PPS_RC6PPS4_MASK                      equ 0010h
RC6PPS_RC6PPS5_POSN                      equ 0005h
RC6PPS_RC6PPS5_POSITION                  equ 0005h
RC6PPS_RC6PPS5_SIZE                      equ 0001h
RC6PPS_RC6PPS5_LENGTH                    equ 0001h
RC6PPS_RC6PPS5_MASK                      equ 0020h

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 0F38h
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

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 0F39h
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

// Register: ODCONA
#define ODCONA ODCONA
ODCONA                                   equ 0F3Ah
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
ODCONA_ODCA3_POSN                        equ 0003h
ODCONA_ODCA3_POSITION                    equ 0003h
ODCONA_ODCA3_SIZE                        equ 0001h
ODCONA_ODCA3_LENGTH                      equ 0001h
ODCONA_ODCA3_MASK                        equ 0008h
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
ODCONA_ODCA6_POSN                        equ 0006h
ODCONA_ODCA6_POSITION                    equ 0006h
ODCONA_ODCA6_SIZE                        equ 0001h
ODCONA_ODCA6_LENGTH                      equ 0001h
ODCONA_ODCA6_MASK                        equ 0040h

// Register: SLRCONA
#define SLRCONA SLRCONA
SLRCONA                                  equ 0F3Bh
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

// Register: INLVLA
#define INLVLA INLVLA
INLVLA                                   equ 0F3Ch
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

// Register: IOCAP
#define IOCAP IOCAP
IOCAP                                    equ 0F3Dh
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

// Register: IOCAN
#define IOCAN IOCAN
IOCAN                                    equ 0F3Eh
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

// Register: IOCAF
#define IOCAF IOCAF
IOCAF                                    equ 0F3Fh
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

// Register: CCDNA
#define CCDNA CCDNA
CCDNA                                    equ 0F40h
// bitfield definitions
CCDNA_CCDNA1_POSN                        equ 0001h
CCDNA_CCDNA1_POSITION                    equ 0001h
CCDNA_CCDNA1_SIZE                        equ 0001h
CCDNA_CCDNA1_LENGTH                      equ 0001h
CCDNA_CCDNA1_MASK                        equ 0002h
CCDNA_CCDNA2_POSN                        equ 0002h
CCDNA_CCDNA2_POSITION                    equ 0002h
CCDNA_CCDNA2_SIZE                        equ 0001h
CCDNA_CCDNA2_LENGTH                      equ 0001h
CCDNA_CCDNA2_MASK                        equ 0004h
CCDNA_CCDNA3_POSN                        equ 0003h
CCDNA_CCDNA3_POSITION                    equ 0003h
CCDNA_CCDNA3_SIZE                        equ 0001h
CCDNA_CCDNA3_LENGTH                      equ 0001h
CCDNA_CCDNA3_MASK                        equ 0008h

// Register: CCDPA
#define CCDPA CCDPA
CCDPA                                    equ 0F41h
// bitfield definitions
CCDPA_CCDPA1_POSN                        equ 0001h
CCDPA_CCDPA1_POSITION                    equ 0001h
CCDPA_CCDPA1_SIZE                        equ 0001h
CCDPA_CCDPA1_LENGTH                      equ 0001h
CCDPA_CCDPA1_MASK                        equ 0002h
CCDPA_CCDPA2_POSN                        equ 0002h
CCDPA_CCDPA2_POSITION                    equ 0002h
CCDPA_CCDPA2_SIZE                        equ 0001h
CCDPA_CCDPA2_LENGTH                      equ 0001h
CCDPA_CCDPA2_MASK                        equ 0004h
CCDPA_CCDPA3_POSN                        equ 0003h
CCDPA_CCDPA3_POSITION                    equ 0003h
CCDPA_CCDPA3_SIZE                        equ 0001h
CCDPA_CCDPA3_LENGTH                      equ 0001h
CCDPA_CCDPA3_MASK                        equ 0008h

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 0F43h
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

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 0F44h
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

// Register: ODCONB
#define ODCONB ODCONB
ODCONB                                   equ 0F45h
// bitfield definitions
ODCONB_ODCB0_POSN                        equ 0000h
ODCONB_ODCB0_POSITION                    equ 0000h
ODCONB_ODCB0_SIZE                        equ 0001h
ODCONB_ODCB0_LENGTH                      equ 0001h
ODCONB_ODCB0_MASK                        equ 0001h
ODCONB_ODCB1_POSN                        equ 0001h
ODCONB_ODCB1_POSITION                    equ 0001h
ODCONB_ODCB1_SIZE                        equ 0001h
ODCONB_ODCB1_LENGTH                      equ 0001h
ODCONB_ODCB1_MASK                        equ 0002h
ODCONB_ODCB2_POSN                        equ 0002h
ODCONB_ODCB2_POSITION                    equ 0002h
ODCONB_ODCB2_SIZE                        equ 0001h
ODCONB_ODCB2_LENGTH                      equ 0001h
ODCONB_ODCB2_MASK                        equ 0004h
ODCONB_ODCB3_POSN                        equ 0003h
ODCONB_ODCB3_POSITION                    equ 0003h
ODCONB_ODCB3_SIZE                        equ 0001h
ODCONB_ODCB3_LENGTH                      equ 0001h
ODCONB_ODCB3_MASK                        equ 0008h
ODCONB_ODCB4_POSN                        equ 0004h
ODCONB_ODCB4_POSITION                    equ 0004h
ODCONB_ODCB4_SIZE                        equ 0001h
ODCONB_ODCB4_LENGTH                      equ 0001h
ODCONB_ODCB4_MASK                        equ 0010h
ODCONB_ODCB5_POSN                        equ 0005h
ODCONB_ODCB5_POSITION                    equ 0005h
ODCONB_ODCB5_SIZE                        equ 0001h
ODCONB_ODCB5_LENGTH                      equ 0001h
ODCONB_ODCB5_MASK                        equ 0020h
ODCONB_ODCB6_POSN                        equ 0006h
ODCONB_ODCB6_POSITION                    equ 0006h
ODCONB_ODCB6_SIZE                        equ 0001h
ODCONB_ODCB6_LENGTH                      equ 0001h
ODCONB_ODCB6_MASK                        equ 0040h
ODCONB_ODCB7_POSN                        equ 0007h
ODCONB_ODCB7_POSITION                    equ 0007h
ODCONB_ODCB7_SIZE                        equ 0001h
ODCONB_ODCB7_LENGTH                      equ 0001h
ODCONB_ODCB7_MASK                        equ 0080h

// Register: SLRCONB
#define SLRCONB SLRCONB
SLRCONB                                  equ 0F46h
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

// Register: INLVLB
#define INLVLB INLVLB
INLVLB                                   equ 0F47h
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

// Register: IOCBP
#define IOCBP IOCBP
IOCBP                                    equ 0F48h
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
IOCBN                                    equ 0F49h
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
IOCBF                                    equ 0F4Ah
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

// Register: ANSELC
#define ANSELC ANSELC
ANSELC                                   equ 0F4Eh
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

// Register: WPUC
#define WPUC WPUC
WPUC                                     equ 0F4Fh
// bitfield definitions
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
WPUC_WPUC7_POSN                          equ 0007h
WPUC_WPUC7_POSITION                      equ 0007h
WPUC_WPUC7_SIZE                          equ 0001h
WPUC_WPUC7_LENGTH                        equ 0001h
WPUC_WPUC7_MASK                          equ 0080h

// Register: ODCONC
#define ODCONC ODCONC
ODCONC                                   equ 0F50h
// bitfield definitions
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

// Register: SLRCONC
#define SLRCONC SLRCONC
SLRCONC                                  equ 0F51h
// bitfield definitions
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

// Register: INLVLC
#define INLVLC INLVLC
INLVLC                                   equ 0F52h
// bitfield definitions
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

// Register: IOCCP
#define IOCCP IOCCP
IOCCP                                    equ 0F53h
// bitfield definitions
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
IOCCN                                    equ 0F54h
// bitfield definitions
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
IOCCF                                    equ 0F55h
// bitfield definitions
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

// Register: ICDIO
#define ICDIO ICDIO
ICDIO                                    equ 0F8Ch
// bitfield definitions
ICDIO_ICD_SLRC_POSN                      equ 0000h
ICDIO_ICD_SLRC_POSITION                  equ 0000h
ICDIO_ICD_SLRC_SIZE                      equ 0001h
ICDIO_ICD_SLRC_LENGTH                    equ 0001h
ICDIO_ICD_SLRC_MASK                      equ 0001h
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
ICDCON0_FREEZE_POSN                      equ 0006h
ICDCON0_FREEZE_POSITION                  equ 0006h
ICDCON0_FREEZE_SIZE                      equ 0001h
ICDCON0_FREEZE_LENGTH                    equ 0001h
ICDCON0_FREEZE_MASK                      equ 0040h
ICDCON0_INBUG_POSN                       equ 0007h
ICDCON0_INBUG_POSITION                   equ 0007h
ICDCON0_INBUG_SIZE                       equ 0001h
ICDCON0_INBUG_LENGTH                     equ 0001h
ICDCON0_INBUG_MASK                       equ 0080h

// Register: ICDDC
#define ICDDC ICDDC
ICDDC                                    equ 0F8Eh
// bitfield definitions
ICDDC_BP1STAT_POSN                       equ 0000h
ICDDC_BP1STAT_POSITION                   equ 0000h
ICDDC_BP1STAT_SIZE                       equ 0001h
ICDDC_BP1STAT_LENGTH                     equ 0001h
ICDDC_BP1STAT_MASK                       equ 0001h
ICDDC_HLTSTAT_POSN                       equ 0003h
ICDDC_HLTSTAT_POSITION                   equ 0003h
ICDDC_HLTSTAT_SIZE                       equ 0001h
ICDDC_HLTSTAT_LENGTH                     equ 0001h
ICDDC_HLTSTAT_MASK                       equ 0008h
ICDDC_XTHI_POSN                          equ 0004h
ICDDC_XTHI_POSITION                      equ 0004h
ICDDC_XTHI_SIZE                          equ 0001h
ICDDC_XTHI_LENGTH                        equ 0001h
ICDDC_XTHI_MASK                          equ 0010h
ICDDC_DTSTAT_POSN                        equ 0005h
ICDDC_DTSTAT_POSITION                    equ 0005h
ICDDC_DTSTAT_SIZE                        equ 0001h
ICDDC_DTSTAT_LENGTH                      equ 0001h
ICDDC_DTSTAT_MASK                        equ 0020h
ICDDC_XTEN_POSN                          equ 0006h
ICDDC_XTEN_POSITION                      equ 0006h
ICDDC_XTEN_SIZE                          equ 0001h
ICDDC_XTEN_LENGTH                        equ 0001h
ICDDC_XTEN_MASK                          equ 0040h
ICDDC_DCEN_POSN                          equ 0007h
ICDDC_DCEN_POSITION                      equ 0007h
ICDDC_DCEN_SIZE                          equ 0001h
ICDDC_DCEN_LENGTH                        equ 0001h
ICDDC_DCEN_MASK                          equ 0080h

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

// Register: CLKRFRZ
#define CLKRFRZ CLKRFRZ
CLKRFRZ                                  equ 0F92h
// bitfield definitions
CLKRFRZ_CLKRFRZEN_POSN                   equ 0000h
CLKRFRZ_CLKRFRZEN_POSITION               equ 0000h
CLKRFRZ_CLKRFRZEN_SIZE                   equ 0001h
CLKRFRZ_CLKRFRZEN_LENGTH                 equ 0001h
CLKRFRZ_CLKRFRZEN_MASK                   equ 0001h

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

// Register: ICDBP0AL
#define ICDBP0AL ICDBP0AL
ICDBP0AL                                 equ 0F98h
// bitfield definitions
ICDBP0AL_BPA0_POSN                       equ 0000h
ICDBP0AL_BPA0_POSITION                   equ 0000h
ICDBP0AL_BPA0_SIZE                       equ 0001h
ICDBP0AL_BPA0_LENGTH                     equ 0001h
ICDBP0AL_BPA0_MASK                       equ 0001h
ICDBP0AL_BPA1_POSN                       equ 0001h
ICDBP0AL_BPA1_POSITION                   equ 0001h
ICDBP0AL_BPA1_SIZE                       equ 0001h
ICDBP0AL_BPA1_LENGTH                     equ 0001h
ICDBP0AL_BPA1_MASK                       equ 0002h
ICDBP0AL_BPA2_POSN                       equ 0002h
ICDBP0AL_BPA2_POSITION                   equ 0002h
ICDBP0AL_BPA2_SIZE                       equ 0001h
ICDBP0AL_BPA2_LENGTH                     equ 0001h
ICDBP0AL_BPA2_MASK                       equ 0004h
ICDBP0AL_BPA3_POSN                       equ 0003h
ICDBP0AL_BPA3_POSITION                   equ 0003h
ICDBP0AL_BPA3_SIZE                       equ 0001h
ICDBP0AL_BPA3_LENGTH                     equ 0001h
ICDBP0AL_BPA3_MASK                       equ 0008h
ICDBP0AL_BPA4_POSN                       equ 0004h
ICDBP0AL_BPA4_POSITION                   equ 0004h
ICDBP0AL_BPA4_SIZE                       equ 0001h
ICDBP0AL_BPA4_LENGTH                     equ 0001h
ICDBP0AL_BPA4_MASK                       equ 0010h
ICDBP0AL_BPA5_POSN                       equ 0005h
ICDBP0AL_BPA5_POSITION                   equ 0005h
ICDBP0AL_BPA5_SIZE                       equ 0001h
ICDBP0AL_BPA5_LENGTH                     equ 0001h
ICDBP0AL_BPA5_MASK                       equ 0020h
ICDBP0AL_BPA6_POSN                       equ 0006h
ICDBP0AL_BPA6_POSITION                   equ 0006h
ICDBP0AL_BPA6_SIZE                       equ 0001h
ICDBP0AL_BPA6_LENGTH                     equ 0001h
ICDBP0AL_BPA6_MASK                       equ 0040h
ICDBP0AL_BPA7_POSN                       equ 0007h
ICDBP0AL_BPA7_POSITION                   equ 0007h
ICDBP0AL_BPA7_SIZE                       equ 0001h
ICDBP0AL_BPA7_LENGTH                     equ 0001h
ICDBP0AL_BPA7_MASK                       equ 0080h

// Register: ICDBP0AH
#define ICDBP0AH ICDBP0AH
ICDBP0AH                                 equ 0F99h
// bitfield definitions
ICDBP0AH_BPA8_POSN                       equ 0000h
ICDBP0AH_BPA8_POSITION                   equ 0000h
ICDBP0AH_BPA8_SIZE                       equ 0001h
ICDBP0AH_BPA8_LENGTH                     equ 0001h
ICDBP0AH_BPA8_MASK                       equ 0001h
ICDBP0AH_BPA9_POSN                       equ 0001h
ICDBP0AH_BPA9_POSITION                   equ 0001h
ICDBP0AH_BPA9_SIZE                       equ 0001h
ICDBP0AH_BPA9_LENGTH                     equ 0001h
ICDBP0AH_BPA9_MASK                       equ 0002h
ICDBP0AH_BPA10_POSN                      equ 0002h
ICDBP0AH_BPA10_POSITION                  equ 0002h
ICDBP0AH_BPA10_SIZE                      equ 0001h
ICDBP0AH_BPA10_LENGTH                    equ 0001h
ICDBP0AH_BPA10_MASK                      equ 0004h
ICDBP0AH_BPA11_POSN                      equ 0003h
ICDBP0AH_BPA11_POSITION                  equ 0003h
ICDBP0AH_BPA11_SIZE                      equ 0001h
ICDBP0AH_BPA11_LENGTH                    equ 0001h
ICDBP0AH_BPA11_MASK                      equ 0008h
ICDBP0AH_BPA12_POSN                      equ 0004h
ICDBP0AH_BPA12_POSITION                  equ 0004h
ICDBP0AH_BPA12_SIZE                      equ 0001h
ICDBP0AH_BPA12_LENGTH                    equ 0001h
ICDBP0AH_BPA12_MASK                      equ 0010h
ICDBP0AH_BPA13_POSN                      equ 0005h
ICDBP0AH_BPA13_POSITION                  equ 0005h
ICDBP0AH_BPA13_SIZE                      equ 0001h
ICDBP0AH_BPA13_LENGTH                    equ 0001h
ICDBP0AH_BPA13_MASK                      equ 0020h
ICDBP0AH_BPA14_POSN                      equ 0006h
ICDBP0AH_BPA14_POSITION                  equ 0006h
ICDBP0AH_BPA14_SIZE                      equ 0001h
ICDBP0AH_BPA14_LENGTH                    equ 0001h
ICDBP0AH_BPA14_MASK                      equ 0040h

// Register: ICDBP0D
#define ICDBP0D ICDBP0D
ICDBP0D                                  equ 0F9Bh
// bitfield definitions
ICDBP0D_BPD0_POSN                        equ 0000h
ICDBP0D_BPD0_POSITION                    equ 0000h
ICDBP0D_BPD0_SIZE                        equ 0001h
ICDBP0D_BPD0_LENGTH                      equ 0001h
ICDBP0D_BPD0_MASK                        equ 0001h
ICDBP0D_BPD1_POSN                        equ 0001h
ICDBP0D_BPD1_POSITION                    equ 0001h
ICDBP0D_BPD1_SIZE                        equ 0001h
ICDBP0D_BPD1_LENGTH                      equ 0001h
ICDBP0D_BPD1_MASK                        equ 0002h
ICDBP0D_BPD2_POSN                        equ 0002h
ICDBP0D_BPD2_POSITION                    equ 0002h
ICDBP0D_BPD2_SIZE                        equ 0001h
ICDBP0D_BPD2_LENGTH                      equ 0001h
ICDBP0D_BPD2_MASK                        equ 0004h
ICDBP0D_BPD3_POSN                        equ 0003h
ICDBP0D_BPD3_POSITION                    equ 0003h
ICDBP0D_BPD3_SIZE                        equ 0001h
ICDBP0D_BPD3_LENGTH                      equ 0001h
ICDBP0D_BPD3_MASK                        equ 0008h
ICDBP0D_BPD4_POSN                        equ 0004h
ICDBP0D_BPD4_POSITION                    equ 0004h
ICDBP0D_BPD4_SIZE                        equ 0001h
ICDBP0D_BPD4_LENGTH                      equ 0001h
ICDBP0D_BPD4_MASK                        equ 0010h
ICDBP0D_BPD5_POSN                        equ 0005h
ICDBP0D_BPD5_POSITION                    equ 0005h
ICDBP0D_BPD5_SIZE                        equ 0001h
ICDBP0D_BPD5_LENGTH                      equ 0001h
ICDBP0D_BPD5_MASK                        equ 0020h
ICDBP0D_BPD6_POSN                        equ 0006h
ICDBP0D_BPD6_POSITION                    equ 0006h
ICDBP0D_BPD6_SIZE                        equ 0001h
ICDBP0D_BPD6_LENGTH                      equ 0001h
ICDBP0D_BPD6_MASK                        equ 0040h
ICDBP0D_BPD7_POSN                        equ 0007h
ICDBP0D_BPD7_POSITION                    equ 0007h
ICDBP0D_BPD7_SIZE                        equ 0001h
ICDBP0D_BPD7_LENGTH                      equ 0001h
ICDBP0D_BPD7_MASK                        equ 0080h

// Register: ICDBP0CON
#define ICDBP0CON ICDBP0CON
ICDBP0CON                                equ 0F9Ch
// bitfield definitions
ICDBP0CON_CAPEN_POSN                     equ 0003h
ICDBP0CON_CAPEN_POSITION                 equ 0003h
ICDBP0CON_CAPEN_SIZE                     equ 0001h
ICDBP0CON_CAPEN_LENGTH                   equ 0001h
ICDBP0CON_CAPEN_MASK                     equ 0008h
ICDBP0CON_DCMP_POSN                      equ 0004h
ICDBP0CON_DCMP_POSITION                  equ 0004h
ICDBP0CON_DCMP_SIZE                      equ 0001h
ICDBP0CON_DCMP_LENGTH                    equ 0001h
ICDBP0CON_DCMP_MASK                      equ 0010h
ICDBP0CON_MSSEL0_POSN                    equ 0005h
ICDBP0CON_MSSEL0_POSITION                equ 0005h
ICDBP0CON_MSSEL0_SIZE                    equ 0001h
ICDBP0CON_MSSEL0_LENGTH                  equ 0001h
ICDBP0CON_MSSEL0_MASK                    equ 0020h
ICDBP0CON_MSSEL1_POSN                    equ 0006h
ICDBP0CON_MSSEL1_POSITION                equ 0006h
ICDBP0CON_MSSEL1_SIZE                    equ 0001h
ICDBP0CON_MSSEL1_LENGTH                  equ 0001h
ICDBP0CON_MSSEL1_MASK                    equ 0040h
ICDBP0CON_BPEN_POSN                      equ 0007h
ICDBP0CON_BPEN_POSITION                  equ 0007h
ICDBP0CON_BPEN_SIZE                      equ 0001h
ICDBP0CON_BPEN_LENGTH                    equ 0001h
ICDBP0CON_BPEN_MASK                      equ 0080h

// Register: ICDBP0CNT
#define ICDBP0CNT ICDBP0CNT
ICDBP0CNT                                equ 0F9Dh
// bitfield definitions
ICDBP0CNT_BPC0_POSN                      equ 0000h
ICDBP0CNT_BPC0_POSITION                  equ 0000h
ICDBP0CNT_BPC0_SIZE                      equ 0001h
ICDBP0CNT_BPC0_LENGTH                    equ 0001h
ICDBP0CNT_BPC0_MASK                      equ 0001h
ICDBP0CNT_BPC1_POSN                      equ 0001h
ICDBP0CNT_BPC1_POSITION                  equ 0001h
ICDBP0CNT_BPC1_SIZE                      equ 0001h
ICDBP0CNT_BPC1_LENGTH                    equ 0001h
ICDBP0CNT_BPC1_MASK                      equ 0002h
ICDBP0CNT_BPC2_POSN                      equ 0002h
ICDBP0CNT_BPC2_POSITION                  equ 0002h
ICDBP0CNT_BPC2_SIZE                      equ 0001h
ICDBP0CNT_BPC2_LENGTH                    equ 0001h
ICDBP0CNT_BPC2_MASK                      equ 0004h
ICDBP0CNT_BPC3_POSN                      equ 0003h
ICDBP0CNT_BPC3_POSITION                  equ 0003h
ICDBP0CNT_BPC3_SIZE                      equ 0001h
ICDBP0CNT_BPC3_LENGTH                    equ 0001h
ICDBP0CNT_BPC3_MASK                      equ 0008h
ICDBP0CNT_BPC4_POSN                      equ 0004h
ICDBP0CNT_BPC4_POSITION                  equ 0004h
ICDBP0CNT_BPC4_SIZE                      equ 0001h
ICDBP0CNT_BPC4_LENGTH                    equ 0001h
ICDBP0CNT_BPC4_MASK                      equ 0010h
ICDBP0CNT_BPC5_POSN                      equ 0005h
ICDBP0CNT_BPC5_POSITION                  equ 0005h
ICDBP0CNT_BPC5_SIZE                      equ 0001h
ICDBP0CNT_BPC5_LENGTH                    equ 0001h
ICDBP0CNT_BPC5_MASK                      equ 0020h
ICDBP0CNT_BPC6_POSN                      equ 0006h
ICDBP0CNT_BPC6_POSITION                  equ 0006h
ICDBP0CNT_BPC6_SIZE                      equ 0001h
ICDBP0CNT_BPC6_LENGTH                    equ 0001h
ICDBP0CNT_BPC6_MASK                      equ 0040h
ICDBP0CNT_BPC7_POSN                      equ 0007h
ICDBP0CNT_BPC7_POSITION                  equ 0007h
ICDBP0CNT_BPC7_SIZE                      equ 0001h
ICDBP0CNT_BPC7_LENGTH                    equ 0001h
ICDBP0CNT_BPC7_MASK                      equ 0080h

// Register: BSR_ICDSHAD
#define BSR_ICDSHAD BSR_ICDSHAD
BSR_ICDSHAD                              equ 0FE3h
// bitfield definitions
BSR_ICDSHAD_BANKSELECTICDMODESHADOW_POSN  equ 0000h
BSR_ICDSHAD_BANKSELECTICDMODESHADOW_POSITION  equ 0000h
BSR_ICDSHAD_BANKSELECTICDMODESHADOW_SIZE  equ 0005h
BSR_ICDSHAD_BANKSELECTICDMODESHADOW_LENGTH  equ 0005h
BSR_ICDSHAD_BANKSELECTICDMODESHADOW_MASK  equ 001Fh

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
#define ACC0                             BANKMASK(CRCACCL), 0
#define ACC1                             BANKMASK(CRCACCL), 1
#define ACC10                            BANKMASK(CRCACCH), 2
#define ACC11                            BANKMASK(CRCACCH), 3
#define ACC12                            BANKMASK(CRCACCH), 4
#define ACC13                            BANKMASK(CRCACCH), 5
#define ACC14                            BANKMASK(CRCACCH), 6
#define ACC15                            BANKMASK(CRCACCH), 7
#define ACC2                             BANKMASK(CRCACCL), 2
#define ACC3                             BANKMASK(CRCACCL), 3
#define ACC4                             BANKMASK(CRCACCL), 4
#define ACC5                             BANKMASK(CRCACCL), 5
#define ACC6                             BANKMASK(CRCACCL), 6
#define ACC7                             BANKMASK(CRCACCL), 7
#define ACC8                             BANKMASK(CRCACCH), 0
#define ACC9                             BANKMASK(CRCACCH), 1
#define ACCM                             BANKMASK(CRCCON0), 4
#define ACKDT                            BANKMASK(SSP1CON2), 5
#define ACKDT1                           BANKMASK(SSP1CON2), 5
#define ACKEN                            BANKMASK(SSP1CON2), 4
#define ACKEN1                           BANKMASK(SSP1CON2), 4
#define ACKSTAT                          BANKMASK(SSP1CON2), 6
#define ACKSTAT1                         BANKMASK(SSP1CON2), 6
#define ACKTIM                           BANKMASK(SSP1CON3), 7
#define ADACT0                           BANKMASK(ADACT), 0
#define ADACT1                           BANKMASK(ADACT), 1
#define ADACT2                           BANKMASK(ADACT), 2
#define ADACT3                           BANKMASK(ADACT), 3
#define ADCACT                           BANKMASK(TST_PPSIN3), 6
#define ADCMD                            BANKMASK(PMD2), 3
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADDEN                            BANKMASK(RC1STA), 3
#define ADFM                             BANKMASK(ADCON1), 7
#define ADIE                             BANKMASK(PIE1), 0
#define ADIF                             BANKMASK(PIR1), 0
#define ADMSK1                           BANKMASK(SSP1CON2), 1
#define ADMSK11                          BANKMASK(SSP1CON2), 1
#define ADMSK2                           BANKMASK(SSP1CON2), 2
#define ADMSK21                          BANKMASK(SSP1CON2), 2
#define ADMSK3                           BANKMASK(SSP1CON2), 3
#define ADMSK31                          BANKMASK(SSP1CON2), 3
#define ADMSK4                           BANKMASK(SSP1CON2), 4
#define ADMSK41                          BANKMASK(SSP1CON2), 4
#define ADMSK5                           BANKMASK(SSP1CON2), 5
#define ADMSK51                          BANKMASK(SSP1CON2), 5
#define ADOEN                            BANKMASK(OSCEN), 2
#define ADON                             BANKMASK(ADCON0), 0
#define ADOR                             BANKMASK(OSCSTAT1), 2
#define ADPREF                           BANKMASK(ADCON1), 0
#define AHEN                             BANKMASK(SSP1CON3), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
#define ANSA6                            BANKMASK(ANSELA), 6
#define ANSB0                            BANKMASK(ANSELB), 0
#define ANSB1                            BANKMASK(ANSELB), 1
#define ANSB2                            BANKMASK(ANSELB), 2
#define ANSB3                            BANKMASK(ANSELB), 3
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define ANSB6                            BANKMASK(ANSELB), 6
#define ANSB7                            BANKMASK(ANSELB), 7
#define ANSC2                            BANKMASK(ANSELC), 2
#define ANSC3                            BANKMASK(ANSELC), 3
#define BCL1IE                           BANKMASK(PIE4), 1
#define BCL1IF                           BANKMASK(PIR4), 1
#define BF                               BANKMASK(SSP1STAT), 0
#define BF1                              BANKMASK(SSP1STAT), 0
#define BOEN                             BANKMASK(SSP1CON3), 4
#define BORRDY                           BANKMASK(BORCON), 0
#define BP1STAT                          BANKMASK(ICDDC), 0
#define BPA0                             BANKMASK(ICDBP0AL), 0
#define BPA1                             BANKMASK(ICDBP0AL), 1
#define BPA10                            BANKMASK(ICDBP0AH), 2
#define BPA11                            BANKMASK(ICDBP0AH), 3
#define BPA12                            BANKMASK(ICDBP0AH), 4
#define BPA13                            BANKMASK(ICDBP0AH), 5
#define BPA14                            BANKMASK(ICDBP0AH), 6
#define BPA2                             BANKMASK(ICDBP0AL), 2
#define BPA3                             BANKMASK(ICDBP0AL), 3
#define BPA4                             BANKMASK(ICDBP0AL), 4
#define BPA5                             BANKMASK(ICDBP0AL), 5
#define BPA6                             BANKMASK(ICDBP0AL), 6
#define BPA7                             BANKMASK(ICDBP0AL), 7
#define BPA8                             BANKMASK(ICDBP0AH), 0
#define BPA9                             BANKMASK(ICDBP0AH), 1
#define BPC0                             BANKMASK(ICDBP0CNT), 0
#define BPC1                             BANKMASK(ICDBP0CNT), 1
#define BPC2                             BANKMASK(ICDBP0CNT), 2
#define BPC3                             BANKMASK(ICDBP0CNT), 3
#define BPC4                             BANKMASK(ICDBP0CNT), 4
#define BPC5                             BANKMASK(ICDBP0CNT), 5
#define BPC6                             BANKMASK(ICDBP0CNT), 6
#define BPC7                             BANKMASK(ICDBP0CNT), 7
#define BPD0                             BANKMASK(ICDBP0D), 0
#define BPD1                             BANKMASK(ICDBP0D), 1
#define BPD2                             BANKMASK(ICDBP0D), 2
#define BPD3                             BANKMASK(ICDBP0D), 3
#define BPD4                             BANKMASK(ICDBP0D), 4
#define BPD5                             BANKMASK(ICDBP0D), 5
#define BPD6                             BANKMASK(ICDBP0D), 6
#define BPD7                             BANKMASK(ICDBP0D), 7
#define BPEN                             BANKMASK(ICDBP0CON), 7
#define BRG16                            BANKMASK(BAUD1CON), 3
#define BRGH                             BANKMASK(TX1STA), 2
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define C1TSEL                           BANKMASK(CCPTMRS0), 0
#define C2TSEL                           BANKMASK(CCPTMRS0), 1
#define CAPEN                            BANKMASK(ICDBP0CON), 3
#define CARRY                            BANKMASK(STATUS), 0
#define CCDEN                            BANKMASK(CCDCON), 7
#define CCDNA1                           BANKMASK(CCDNA), 1
#define CCDNA2                           BANKMASK(CCDNA), 2
#define CCDNA3                           BANKMASK(CCDNA), 3
#define CCDPA1                           BANKMASK(CCDPA), 1
#define CCDPA2                           BANKMASK(CCDPA), 2
#define CCDPA3                           BANKMASK(CCDPA), 3
#define CCDS0                            BANKMASK(CCDCON), 0
#define CCDS1                            BANKMASK(CCDCON), 1
#define CCP1                             BANKMASK(TST_PPSIN2), 4
#define CCP1CAP0                         BANKMASK(CCP1CAP), 0
#define CCP1CAP1                         BANKMASK(CCP1CAP), 1
#define CCP1CAP2                         BANKMASK(CCP1CAP), 2
#define CCP1IE                           BANKMASK(PIE3), 0
#define CCP1IF                           BANKMASK(PIR3), 0
#define CCP1MD                           BANKMASK(PMD1), 6
#define CCP1PPS0                         BANKMASK(CCP1PPS), 0
#define CCP1PPS1                         BANKMASK(CCP1PPS), 1
#define CCP1PPS2                         BANKMASK(CCP1PPS), 2
#define CCP1PPS3                         BANKMASK(CCP1PPS), 3
#define CCP1PPS4                         BANKMASK(CCP1PPS), 4
#define CCP1PR0                          BANKMASK(CCP1RL), 0
#define CCP1PR1                          BANKMASK(CCP1RL), 1
#define CCP1PR10                         BANKMASK(CCP1RH), 2
#define CCP1PR11                         BANKMASK(CCP1RH), 3
#define CCP1PR12                         BANKMASK(CCP1RH), 4
#define CCP1PR13                         BANKMASK(CCP1RH), 5
#define CCP1PR14                         BANKMASK(CCP1RH), 6
#define CCP1PR15                         BANKMASK(CCP1RH), 7
#define CCP1PR2                          BANKMASK(CCP1RL), 2
#define CCP1PR3                          BANKMASK(CCP1RL), 3
#define CCP1PR4                          BANKMASK(CCP1RL), 4
#define CCP1PR5                          BANKMASK(CCP1RL), 5
#define CCP1PR6                          BANKMASK(CCP1RL), 6
#define CCP1PR7                          BANKMASK(CCP1RL), 7
#define CCP1PR8                          BANKMASK(CCP1RH), 0
#define CCP1PR9                          BANKMASK(CCP1RH), 1
#define CCP2                             BANKMASK(TST_PPSIN2), 5
#define CCP2CAP0                         BANKMASK(CCP2CAP), 0
#define CCP2CAP1                         BANKMASK(CCP2CAP), 1
#define CCP2CAP2                         BANKMASK(CCP2CAP), 2
#define CCP2IE                           BANKMASK(PIE3), 1
#define CCP2IF                           BANKMASK(PIR3), 1
#define CCP2MD                           BANKMASK(PMD1), 7
#define CCP2PPS0                         BANKMASK(CCP2PPS), 0
#define CCP2PPS1                         BANKMASK(CCP2PPS), 1
#define CCP2PPS2                         BANKMASK(CCP2PPS), 2
#define CCP2PPS3                         BANKMASK(CCP2PPS), 3
#define CCP2PPS4                         BANKMASK(CCP2PPS), 4
#define CCP2PR0                          BANKMASK(CCP2RL), 0
#define CCP2PR1                          BANKMASK(CCP2RL), 1
#define CCP2PR10                         BANKMASK(CCP2RH), 2
#define CCP2PR11                         BANKMASK(CCP2RH), 3
#define CCP2PR12                         BANKMASK(CCP2RH), 4
#define CCP2PR13                         BANKMASK(CCP2RH), 5
#define CCP2PR14                         BANKMASK(CCP2RH), 6
#define CCP2PR15                         BANKMASK(CCP2RH), 7
#define CCP2PR2                          BANKMASK(CCP2RL), 2
#define CCP2PR3                          BANKMASK(CCP2RL), 3
#define CCP2PR4                          BANKMASK(CCP2RL), 4
#define CCP2PR5                          BANKMASK(CCP2RL), 5
#define CCP2PR6                          BANKMASK(CCP2RL), 6
#define CCP2PR7                          BANKMASK(CCP2RL), 7
#define CCP2PR8                          BANKMASK(CCP2RH), 0
#define CCP2PR9                          BANKMASK(CCP2RH), 1
#define CDIV0                            BANKMASK(OSCCON2), 0
#define CDIV1                            BANKMASK(OSCCON2), 1
#define CDIV2                            BANKMASK(OSCCON2), 2
#define CDIV3                            BANKMASK(OSCCON2), 3
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CKE                              BANKMASK(SSP1STAT), 6
#define CKE1                             BANKMASK(SSP1STAT), 6
#define CKP                              BANKMASK(SSP1CON1), 4
#define CKP1                             BANKMASK(SSP1CON1), 4
#define CKPOL                            BANKMASK(T2HLT), 6
#define CKSYNC                           BANKMASK(T2HLT), 5
#define CLC1IE                           BANKMASK(PIE3), 4
#define CLC1IF                           BANKMASK(PIR3), 4
#define CLC1MD                           BANKMASK(PMD2), 0
#define CLC2IE                           BANKMASK(PIE3), 5
#define CLC2IF                           BANKMASK(PIR3), 5
#define CLC2MD                           BANKMASK(PMD2), 1
#define CLCIN0                           BANKMASK(TST_PPSIN3), 0
#define CLCIN0PPS0                       BANKMASK(CLCIN0PPS), 0
#define CLCIN0PPS1                       BANKMASK(CLCIN0PPS), 1
#define CLCIN0PPS2                       BANKMASK(CLCIN0PPS), 2
#define CLCIN0PPS3                       BANKMASK(CLCIN0PPS), 3
#define CLCIN0PPS4                       BANKMASK(CLCIN0PPS), 4
#define CLCIN1                           BANKMASK(TST_PPSIN3), 1
#define CLCIN1PPS0                       BANKMASK(CLCIN1PPS), 0
#define CLCIN1PPS1                       BANKMASK(CLCIN1PPS), 1
#define CLCIN1PPS2                       BANKMASK(CLCIN1PPS), 2
#define CLCIN1PPS3                       BANKMASK(CLCIN1PPS), 3
#define CLCIN1PPS4                       BANKMASK(CLCIN1PPS), 4
#define CLCIN2                           BANKMASK(TST_PPSIN3), 2
#define CLCIN2PPS0                       BANKMASK(CLCIN2PPS), 0
#define CLCIN2PPS1                       BANKMASK(CLCIN2PPS), 1
#define CLCIN2PPS2                       BANKMASK(CLCIN2PPS), 2
#define CLCIN2PPS3                       BANKMASK(CLCIN2PPS), 3
#define CLCIN2PPS4                       BANKMASK(CLCIN2PPS), 4
#define CLCIN3                           BANKMASK(TST_PPSIN3), 3
#define CLCIN3PPS0                       BANKMASK(CLCIN3PPS), 0
#define CLCIN3PPS1                       BANKMASK(CLCIN3PPS), 1
#define CLCIN3PPS2                       BANKMASK(CLCIN3PPS), 2
#define CLCIN3PPS3                       BANKMASK(CLCIN3PPS), 3
#define CLCIN3PPS4                       BANKMASK(CLCIN3PPS), 4
#define CLKRFRZEN                        BANKMASK(CLKRFRZ), 0
#define COSC0                            BANKMASK(OSCCON2), 4
#define COSC1                            BANKMASK(OSCCON2), 5
#define CRCEN                            BANKMASK(CRCCON0), 7
#define CRCGO                            BANKMASK(CRCCON0), 6
#define CRCIE                            BANKMASK(PIE1), 6
#define CRCIF                            BANKMASK(PIR1), 6
#define CRCMD                            BANKMASK(PMD0), 4
#define CREN                             BANKMASK(RC1STA), 4
#define CSRC                             BANKMASK(TX1STA), 7
#define CSWHOLD                          BANKMASK(OSCCON3), 7
#define CSWIE                            BANKMASK(PIE1), 3
#define CSWIF                            BANKMASK(PIR1), 3
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DA                               BANKMASK(SSP1STAT), 5
#define DA1                              BANKMASK(SSP1STAT), 5
#define DATA0                            BANKMASK(CRCDATL), 0
#define DATA1                            BANKMASK(CRCDATL), 1
#define DATA10                           BANKMASK(CRCDATH), 2
#define DATA11                           BANKMASK(CRCDATH), 3
#define DATA12                           BANKMASK(CRCDATH), 4
#define DATA13                           BANKMASK(CRCDATH), 5
#define DATA14                           BANKMASK(CRCDATH), 6
#define DATA15                           BANKMASK(CRCDATH), 7
#define DATA2                            BANKMASK(CRCDATL), 2
#define DATA3                            BANKMASK(CRCDATL), 3
#define DATA4                            BANKMASK(CRCDATL), 4
#define DATA5                            BANKMASK(CRCDATL), 5
#define DATA6                            BANKMASK(CRCDATL), 6
#define DATA7                            BANKMASK(CRCDATL), 7
#define DATA8                            BANKMASK(CRCDATH), 0
#define DATA9                            BANKMASK(CRCDATH), 1
#define DATA_ADDRESS                     BANKMASK(SSP1STAT), 5
#define DATA_ADDRESS1                    BANKMASK(SSP1STAT), 5
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
#define DCEN                             BANKMASK(ICDDC), 7
#define DCMP                             BANKMASK(ICDBP0CON), 4
#define DCOMPMD                          BANKMASK(PMD4), 2
#define DCPHLD                           BANKMASK(TST_PPSIN3), 7
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define DEMEN                            BANKMASK(DEMCON), 7
#define DEMIE                            BANKMASK(PIE7), 0
#define DEMIF                            BANKMASK(PIR7), 0
#define DEMMD                            BANKMASK(PMD4), 6
#define DEMOUT                           BANKMASK(DEMCON), 5
#define DEMPOL                           BANKMASK(DEMCON), 4
#define DHEN                             BANKMASK(SSP1CON3), 0
#define DITHER                           BANKMASK(SWFRQCON), 6
#define DLEN0                            BANKMASK(CRCCON1), 4
#define DLEN1                            BANKMASK(CRCCON1), 5
#define DLEN2                            BANKMASK(CRCCON1), 6
#define DLEN3                            BANKMASK(CRCCON1), 7
#define DLLDIS                           BANKMASK(SWFRQCON), 5
#define DMAIE                            BANKMASK(PIE1), 7
#define DMAIF                            BANKMASK(PIR1), 7
#define DMA_DATA0                        BANKMASK(TST_DMAL), 0
#define DMA_DATA1                        BANKMASK(TST_DMAL), 1
#define DMA_DATA10                       BANKMASK(TST_DMAH), 2
#define DMA_DATA11                       BANKMASK(TST_DMAH), 3
#define DMA_DATA12                       BANKMASK(TST_DMAH), 4
#define DMA_DATA13                       BANKMASK(TST_DMAH), 5
#define DMA_DATA14                       BANKMASK(TST_DMAH), 6
#define DMA_DATA15                       BANKMASK(TST_DMAH), 7
#define DMA_DATA2                        BANKMASK(TST_DMAL), 2
#define DMA_DATA3                        BANKMASK(TST_DMAL), 3
#define DMA_DATA4                        BANKMASK(TST_DMAL), 4
#define DMA_DATA5                        BANKMASK(TST_DMAL), 5
#define DMA_DATA6                        BANKMASK(TST_DMAL), 6
#define DMA_DATA7                        BANKMASK(TST_DMAL), 7
#define DMA_DATA8                        BANKMASK(TST_DMAH), 0
#define DMA_DATA9                        BANKMASK(TST_DMAH), 1
#define DOE                              BANKMASK(CPUDOZE), 4
#define DOUT0                            BANKMASK(DOUTL), 2
#define DOUT1                            BANKMASK(DOUTL), 3
#define DOUT10                           BANKMASK(DOUTH), 4
#define DOUT11                           BANKMASK(DOUTH), 5
#define DOUT12                           BANKMASK(DOUTH), 6
#define DOUT13                           BANKMASK(DOUTH), 7
#define DOUT2                            BANKMASK(DOUTL), 4
#define DOUT3                            BANKMASK(DOUTL), 5
#define DOUT4                            BANKMASK(DOUTL), 6
#define DOUT5                            BANKMASK(DOUTL), 7
#define DOUT6                            BANKMASK(DOUTH), 0
#define DOUT7                            BANKMASK(DOUTH), 1
#define DOUT8                            BANKMASK(DOUTH), 2
#define DOUT9                            BANKMASK(DOUTH), 3
#define DOZE0                            BANKMASK(CPUDOZE), 0
#define DOZE1                            BANKMASK(CPUDOZE), 1
#define DOZE2                            BANKMASK(CPUDOZE), 2
#define DOZEN                            BANKMASK(CPUDOZE), 6
#define DPS0                             BANKMASK(SWFRQDPS), 4
#define DPS1                             BANKMASK(SWFRQDPS), 5
#define DPS2                             BANKMASK(SWFRQDPS), 6
#define DRANGE                           BANKMASK(SWFRQDPS), 7
#define DRVCTL                           BANKMASK(DRVCON0), 3
#define DRVMODE0                         BANKMASK(DRVCON0), 0
#define DRVMODE1                         BANKMASK(DRVCON0), 1
#define DRVMODE2                         BANKMASK(DRVCON0), 2
#define DTSEL0                           BANKMASK(DRVCON0), 4
#define DTSEL1                           BANKMASK(DRVCON0), 5
#define DTSTAT                           BANKMASK(ICDDC), 5
#define D_A                              BANKMASK(SSP1STAT), 5
#define D_A1                             BANKMASK(SSP1STAT), 5
#define D_nA                             BANKMASK(SSP1STAT), 5
#define D_nA1                            BANKMASK(SSP1STAT), 5
#define FERR                             BANKMASK(RC1STA), 2
#define FREE                             BANKMASK(NVMCON1), 4
#define FREEZE                           BANKMASK(ICDCON0), 6
#define FULL                             BANKMASK(CRCCON0), 0
#define FVR1OK                           BANKMASK(FVRCON), 3
#define FVR2OK                           BANKMASK(FVRCON), 2
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRIE                            BANKMASK(PIE0), 6
#define FVRIF                            BANKMASK(PIR0), 6
#define FVRINTN                          BANKMASK(FVRCON), 0
#define FVRINTP                          BANKMASK(FVRCON), 1
#define FVRMD                            BANKMASK(PMD0), 6
#define FVRRDY                           BANKMASK(FVRCON), 6
#define GCEN                             BANKMASK(SSP1CON2), 7
#define GCEN1                            BANKMASK(SSP1CON2), 7
#define GIE                              BANKMASK(INTCON), 7
#define GOnDONE                          BANKMASK(IVMCON0), 1
#define HADR0                            BANKMASK(SCANHADRL), 0
#define HADR1                            BANKMASK(SCANHADRL), 1
#define HADR10                           BANKMASK(SCANHADRH), 2
#define HADR11                           BANKMASK(SCANHADRH), 3
#define HADR12                           BANKMASK(SCANHADRH), 4
#define HADR13                           BANKMASK(SCANHADRH), 5
#define HADR14                           BANKMASK(SCANHADRH), 6
#define HADR15                           BANKMASK(SCANHADRH), 7
#define HADR2                            BANKMASK(SCANHADRL), 2
#define HADR3                            BANKMASK(SCANHADRL), 3
#define HADR4                            BANKMASK(SCANHADRL), 4
#define HADR5                            BANKMASK(SCANHADRL), 5
#define HADR6                            BANKMASK(SCANHADRL), 6
#define HADR7                            BANKMASK(SCANHADRL), 7
#define HADR8                            BANKMASK(SCANHADRH), 0
#define HADR9                            BANKMASK(SCANHADRH), 1
#define HFFRQ0                           BANKMASK(OSCFREQ), 0
#define HFFRQ1                           BANKMASK(OSCFREQ), 1
#define HFFRQ2                           BANKMASK(OSCFREQ), 2
#define HFOEN                            BANKMASK(OSCEN), 6
#define HFOR                             BANKMASK(OSCSTAT1), 6
#define HFTUN0                           BANKMASK(OSCTUNE), 0
#define HFTUN1                           BANKMASK(OSCTUNE), 1
#define HFTUN2                           BANKMASK(OSCTUNE), 2
#define HFTUN3                           BANKMASK(OSCTUNE), 3
#define HFTUN4                           BANKMASK(OSCTUNE), 4
#define HFTUN5                           BANKMASK(OSCTUNE), 5
#define HLTSTAT                          BANKMASK(ICDDC), 3
#define HODIS                            BANKMASK(DRVCON0), 7
#define HOLD                             BANKMASK(DCOMPCON1), 7
#define HOLDEH                           BANKMASK(DRVCON2), 7
#define HOLDEL                           BANKMASK(DRVCON1), 7
#define HOLDM0                           BANKMASK(DCOMPCON1), 3
#define HOLDM1                           BANKMASK(DCOMPCON1), 4
#define HOLDM2                           BANKMASK(DCOMPCON1), 5
#define HOLDOVR                          BANKMASK(DCOMPCON1), 6
#define I2C_DAT                          BANKMASK(SSP1STAT), 5
#define I2C_DAT1                         BANKMASK(SSP1STAT), 5
#define I2C_READ                         BANKMASK(SSP1STAT), 2
#define I2C_READ1                        BANKMASK(SSP1STAT), 2
#define I2C_START                        BANKMASK(SSP1STAT), 3
#define I2C_START1                       BANKMASK(SSP1STAT), 3
#define I2C_STOP                         BANKMASK(SSP1STAT), 4
#define I2C_STOP2                        BANKMASK(SSP1STAT), 4
#define ICD_SLRC                         BANKMASK(ICDIO), 0
#define ICMMD                            BANKMASK(PMD3), 0
#define ICMOC                            BANKMASK(ICMOCCON), 6
#define ICMOCCNT0                        BANKMASK(ICMCON1), 5
#define ICMOCCNT1                        BANKMASK(ICMCON1), 6
#define ICMOCCNT2                        BANKMASK(ICMCON1), 7
#define ICMOCFE                          BANKMASK(DCOMPCON1), 2
#define ICMOCFEH                         BANKMASK(DRVCON2), 2
#define ICMOCFEL                         BANKMASK(DRVCON1), 2
#define ICMOCIE                          BANKMASK(PIE6), 1
#define ICMOCIF                          BANKMASK(PIR6), 1
#define ICMOCLAT                         BANKMASK(ICMCON1), 4
#define ICMOCON                          BANKMASK(ICMOCCON), 7
#define ICMOCRINT                        BANKMASK(ICMCON1), 3
#define ICMOCSEL0                        BANKMASK(ICMOCCON), 0
#define ICMOCSEL1                        BANKMASK(ICMOCCON), 1
#define ICMOCSEL2                        BANKMASK(ICMOCCON), 2
#define ICMOCSEL3                        BANKMASK(ICMOCCON), 3
#define ICMOCSEL4                        BANKMASK(ICMOCCON), 4
#define ICOMPEN                          BANKMASK(DCOMPCON0), 7
#define IDLEN                            BANKMASK(CPUDOZE), 7
#define INBUG                            BANKMASK(ICDCON0), 7
#define INLVLA0                          BANKMASK(INLVLA), 0
#define INLVLA1                          BANKMASK(INLVLA), 1
#define INLVLA2                          BANKMASK(INLVLA), 2
#define INLVLA3                          BANKMASK(INLVLA), 3
#define INLVLA4                          BANKMASK(INLVLA), 4
#define INLVLA5                          BANKMASK(INLVLA), 5
#define INLVLA6                          BANKMASK(INLVLA), 6
#define INLVLB0                          BANKMASK(INLVLB), 0
#define INLVLB1                          BANKMASK(INLVLB), 1
#define INLVLB2                          BANKMASK(INLVLB), 2
#define INLVLB3                          BANKMASK(INLVLB), 3
#define INLVLB4                          BANKMASK(INLVLB), 4
#define INLVLB5                          BANKMASK(INLVLB), 5
#define INLVLB6                          BANKMASK(INLVLB), 6
#define INLVLB7                          BANKMASK(INLVLB), 7
#define INLVLC2                          BANKMASK(INLVLC), 2
#define INLVLC3                          BANKMASK(INLVLC), 3
#define INLVLC4                          BANKMASK(INLVLC), 4
#define INLVLC5                          BANKMASK(INLVLC), 5
#define INLVLC6                          BANKMASK(INLVLC), 6
#define INLVLC7                          BANKMASK(INLVLC), 7
#define INT                              BANKMASK(TST_PPSIN1), 0
#define INT0IE                           BANKMASK(PIE0), 0
#define INT0IF                           BANKMASK(PIR0), 0
#define INTEDG                           BANKMASK(INTCON), 0
#define INTM                             BANKMASK(SCANCON0), 3
#define INTPPS0                          BANKMASK(INTPPS), 0
#define INTPPS1                          BANKMASK(INTPPS), 1
#define INTPPS2                          BANKMASK(INTPPS), 2
#define INTPPS3                          BANKMASK(INTPPS), 3
#define INVALID                          BANKMASK(SCANCON0), 4
#define IOCAF0                           BANKMASK(IOCAF), 0
#define IOCAF1                           BANKMASK(IOCAF), 1
#define IOCAF2                           BANKMASK(IOCAF), 2
#define IOCAF3                           BANKMASK(IOCAF), 3
#define IOCAF4                           BANKMASK(IOCAF), 4
#define IOCAF5                           BANKMASK(IOCAF), 5
#define IOCAF6                           BANKMASK(IOCAF), 6
#define IOCAN0                           BANKMASK(IOCAN), 0
#define IOCAN1                           BANKMASK(IOCAN), 1
#define IOCAN2                           BANKMASK(IOCAN), 2
#define IOCAN3                           BANKMASK(IOCAN), 3
#define IOCAN4                           BANKMASK(IOCAN), 4
#define IOCAN5                           BANKMASK(IOCAN), 5
#define IOCAN6                           BANKMASK(IOCAN), 6
#define IOCAP0                           BANKMASK(IOCAP), 0
#define IOCAP1                           BANKMASK(IOCAP), 1
#define IOCAP2                           BANKMASK(IOCAP), 2
#define IOCAP3                           BANKMASK(IOCAP), 3
#define IOCAP4                           BANKMASK(IOCAP), 4
#define IOCAP5                           BANKMASK(IOCAP), 5
#define IOCAP6                           BANKMASK(IOCAP), 6
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
#define IOCCF2                           BANKMASK(IOCCF), 2
#define IOCCF3                           BANKMASK(IOCCF), 3
#define IOCCF4                           BANKMASK(IOCCF), 4
#define IOCCF5                           BANKMASK(IOCCF), 5
#define IOCCF6                           BANKMASK(IOCCF), 6
#define IOCCF7                           BANKMASK(IOCCF), 7
#define IOCCN2                           BANKMASK(IOCCN), 2
#define IOCCN3                           BANKMASK(IOCCN), 3
#define IOCCN4                           BANKMASK(IOCCN), 4
#define IOCCN5                           BANKMASK(IOCCN), 5
#define IOCCN6                           BANKMASK(IOCCN), 6
#define IOCCN7                           BANKMASK(IOCCN), 7
#define IOCCP2                           BANKMASK(IOCCP), 2
#define IOCCP3                           BANKMASK(IOCCP), 3
#define IOCCP4                           BANKMASK(IOCCP), 4
#define IOCCP5                           BANKMASK(IOCCP), 5
#define IOCCP6                           BANKMASK(IOCCP), 6
#define IOCCP7                           BANKMASK(IOCCP), 7
#define IOCIE                            BANKMASK(PIE0), 4
#define IOCIF                            BANKMASK(PIR0), 4
#define IOCMD                            BANKMASK(PMD0), 0
#define IREF0                            BANKMASK(IREFL), 0
#define IREF1                            BANKMASK(IREFL), 1
#define IREF2                            BANKMASK(IREFL), 2
#define IREF3                            BANKMASK(IREFL), 3
#define IREF4                            BANKMASK(IREFL), 4
#define IREF5                            BANKMASK(IREFL), 5
#define IREF6                            BANKMASK(IREFL), 6
#define IREF7                            BANKMASK(IREFL), 7
#define IREF8                            BANKMASK(IREFH), 0
#define IREF9                            BANKMASK(IREFH), 1
#define ISMREAD0                         BANKMASK(TST_ISMREAD), 0
#define ISMREAD1                         BANKMASK(TST_ISMREAD), 1
#define ISMREAD2                         BANKMASK(TST_ISMREAD), 2
#define ISMREAD3                         BANKMASK(TST_ISMREAD), 3
#define ISMREAD4                         BANKMASK(TST_ISMREAD), 4
#define ISMREAD5                         BANKMASK(TST_ISMREAD), 5
#define ISMSTAT                          BANKMASK(TST_ISMSTAT), 4
#define IVM0                             BANKMASK(IVMCORRESL), 6
#define IVM1                             BANKMASK(IVMCORRESL), 7
#define IVM2                             BANKMASK(IVMCORRESH), 0
#define IVM3                             BANKMASK(IVMCORRESH), 1
#define IVM4                             BANKMASK(IVMCORRESH), 2
#define IVM5                             BANKMASK(IVMCORRESH), 3
#define IVM6                             BANKMASK(IVMCORRESH), 4
#define IVM7                             BANKMASK(IVMCORRESH), 5
#define IVM8                             BANKMASK(IVMCORRESH), 6
#define IVM9                             BANKMASK(IVMCORRESH), 7
#define IVMADCIE                         BANKMASK(PIE6), 6
#define IVMADCIF                         BANKMASK(PIR6), 6
#define IVMCTS                           BANKMASK(IVMCON0), 3
#define IVMLT0                           BANKMASK(IVMCON0), 5
#define IVMLT1                           BANKMASK(IVMCON0), 6
#define IVMLT2                           BANKMASK(IVMCON0), 7
#define IVMMD                            BANKMASK(PMD3), 2
#define IVMOFEH                          BANKMASK(DRVCON2), 1
#define IVMON                            BANKMASK(IVMCON0), 0
#define IVMOV                            BANKMASK(IVMOVUVOUT), 5
#define IVMOVCNT0                        BANKMASK(IVMCON1), 5
#define IVMOVCNT1                        BANKMASK(IVMCON1), 6
#define IVMOVCNT2                        BANKMASK(IVMCON1), 7
#define IVMOVFE                          BANKMASK(DCOMPCON1), 1
#define IVMOVFEH                         BANKMASK(DRVCON1), 1
#define IVMOVFINT                        BANKMASK(IVMCON1), 2
#define IVMOVIE                          BANKMASK(PIE6), 5
#define IVMOVIF                          BANKMASK(PIR6), 5
#define IVMOVLAT                         BANKMASK(IVMCON1), 4
#define IVMOVRINT                        BANKMASK(IVMCON1), 3
#define IVMUV                            BANKMASK(IVMOVUVOUT), 4
#define IVMUVCNT0                        BANKMASK(IVMCON2), 5
#define IVMUVCNT1                        BANKMASK(IVMCON2), 6
#define IVMUVCNT2                        BANKMASK(IVMCON2), 7
#define IVMUVFE                          BANKMASK(DCOMPCON1), 0
#define IVMUVFEH                         BANKMASK(DRVCON2), 0
#define IVMUVFEL                         BANKMASK(DRVCON1), 0
#define IVMUVFINT                        BANKMASK(IVMCON2), 0
#define IVMUVIE                          BANKMASK(PIE6), 4
#define IVMUVIF                          BANKMASK(PIR6), 4
#define IVMUVLAT                         BANKMASK(IVMCON2), 4
#define IVMUVRINT                        BANKMASK(IVMCON2), 1
#define KIV0                             BANKMASK(KIV), 0
#define KIV1                             BANKMASK(KIV), 1
#define KIV2                             BANKMASK(KIV), 2
#define KIV3                             BANKMASK(KIV), 3
#define KIV4                             BANKMASK(KIV), 4
#define KPI0                             BANKMASK(KPI), 0
#define KPI1                             BANKMASK(KPI), 1
#define KPI2                             BANKMASK(KPI), 2
#define KPI3                             BANKMASK(KPI), 3
#define KPI4                             BANKMASK(KPI), 4
#define KPV0                             BANKMASK(KPV), 0
#define KPV1                             BANKMASK(KPV), 1
#define KPV2                             BANKMASK(KPV), 2
#define KPV3                             BANKMASK(KPV), 3
#define KPV4                             BANKMASK(KPV), 4
#define KVI0                             BANKMASK(KVI), 0
#define KVI1                             BANKMASK(KVI), 1
#define KVI2                             BANKMASK(KVI), 2
#define KVI3                             BANKMASK(KVI), 3
#define KVI4                             BANKMASK(KVI), 4
#define KVV0                             BANKMASK(KVV), 0
#define KVV1                             BANKMASK(KVV), 1
#define KVV2                             BANKMASK(KVV), 2
#define KVV3                             BANKMASK(KVV), 3
#define KVV4                             BANKMASK(KVV), 4
#define LADR0                            BANKMASK(SCANLADRL), 0
#define LADR1                            BANKMASK(SCANLADRL), 1
#define LADR10                           BANKMASK(SCANLADRH), 2
#define LADR11                           BANKMASK(SCANLADRH), 3
#define LADR12                           BANKMASK(SCANLADRH), 4
#define LADR13                           BANKMASK(SCANLADRH), 5
#define LADR14                           BANKMASK(SCANLADRH), 6
#define LADR15                           BANKMASK(SCANLADRH), 7
#define LADR2                            BANKMASK(SCANLADRL), 2
#define LADR3                            BANKMASK(SCANLADRL), 3
#define LADR4                            BANKMASK(SCANLADRL), 4
#define LADR5                            BANKMASK(SCANLADRL), 5
#define LADR6                            BANKMASK(SCANLADRL), 6
#define LADR7                            BANKMASK(SCANLADRL), 7
#define LADR8                            BANKMASK(SCANLADRH), 0
#define LADR9                            BANKMASK(SCANLADRH), 1
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA3                            BANKMASK(LATA), 3
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
#define LATA6                            BANKMASK(LATA), 6
#define LATB0                            BANKMASK(LATB), 0
#define LATB1                            BANKMASK(LATB), 1
#define LATB2                            BANKMASK(LATB), 2
#define LATB3                            BANKMASK(LATB), 3
#define LATB4                            BANKMASK(LATB), 4
#define LATB5                            BANKMASK(LATB), 5
#define LATB6                            BANKMASK(LATB), 6
#define LATB7                            BANKMASK(LATB), 7
#define LATC2                            BANKMASK(LATC), 2
#define LATC3                            BANKMASK(LATC), 3
#define LATC4                            BANKMASK(LATC), 4
#define LATC5                            BANKMASK(LATC), 5
#define LATC6                            BANKMASK(LATC), 6
#define LAT_ICDCLK                       BANKMASK(ICDIO), 4
#define LAT_ICDDAT                       BANKMASK(ICDIO), 5
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
#define LC2POL                           BANKMASK(CLC2POL), 7
#define LC3OUT                           BANKMASK(CLCDATA), 2
#define LC4OUT                           BANKMASK(CLCDATA), 3
#define LFOEN                            BANKMASK(OSCEN), 4
#define LFOR                             BANKMASK(OSCSTAT1), 4
#define LODIS                            BANKMASK(DRVCON0), 6
#define LPFCHS0                          BANKMASK(LPFCON0), 0
#define LPFCHS1                          BANKMASK(LPFCON0), 1
#define LPFEN                            BANKMASK(LPFCON0), 7
#define LWLO                             BANKMASK(NVMCON1), 5
#define MANUAL                           BANKMASK(SWFRQCON), 4
#define MAXDC0                           BANKMASK(MAXDC), 0
#define MAXDC1                           BANKMASK(MAXDC), 1
#define MAXDC2                           BANKMASK(MAXDC), 2
#define MAXDC3                           BANKMASK(MAXDC), 3
#define MAXDC4                           BANKMASK(MAXDC), 4
#define MAXDC5                           BANKMASK(MAXDC), 5
#define MAXDC6                           BANKMASK(MAXDC), 6
#define MAXDC7                           BANKMASK(MAXDC), 7
#define MFOEN                            BANKMASK(OSCEN), 5
#define MFOR                             BANKMASK(OSCSTAT1), 5
#define MICMGC0                          BANKMASK(ICMGAIN), 0
#define MICMGC1                          BANKMASK(ICMGAIN), 1
#define MICMGC2                          BANKMASK(ICMGAIN), 2
#define MICMGC3                          BANKMASK(ICMGAIN), 3
#define MICMGC4                          BANKMASK(ICMGAIN), 4
#define MICMGC5                          BANKMASK(ICMGAIN), 5
#define MICMGC6                          BANKMASK(ICMGAIN), 6
#define MICMOC0                          BANKMASK(ICMOFF), 0
#define MICMOC1                          BANKMASK(ICMOFF), 1
#define MICMOC2                          BANKMASK(ICMOFF), 2
#define MICMOC3                          BANKMASK(ICMOFF), 3
#define MICMOC4                          BANKMASK(ICMOFF), 4
#define MIVMOVF                          BANKMASK(IVMOVUVOUT), 2
#define MIVMOVR                          BANKMASK(IVMOVUVOUT), 3
#define MIVMUVF                          BANKMASK(IVMOVUVOUT), 0
#define MIVMUVR                          BANKMASK(IVMOVUVOUT), 1
#define MOCMOCF                          BANKMASK(OCMOCUCOUT), 3
#define MOCMOCR                          BANKMASK(OCMOCUCOUT), 2
#define MOCMUCF                          BANKMASK(OCMOCUCOUT), 1
#define MOCMUCR                          BANKMASK(OCMOCUCOUT), 0
#define MOCRGC0                          BANKMASK(OCRGAIN), 0
#define MOCRGC1                          BANKMASK(OCRGAIN), 1
#define MOCRGC2                          BANKMASK(OCRGAIN), 2
#define MOCRGC3                          BANKMASK(OCRGAIN), 3
#define MOCRGC4                          BANKMASK(OCRGAIN), 4
#define MOCRGC5                          BANKMASK(OCRGAIN), 5
#define MOCRGC6                          BANKMASK(OCRGAIN), 6
#define MOCROC0                          BANKMASK(OCROFF), 0
#define MOCROC1                          BANKMASK(OCROFF), 1
#define MOCROC2                          BANKMASK(OCROFF), 2
#define MOCROC3                          BANKMASK(OCROFF), 3
#define MOCROC4                          BANKMASK(OCROFF), 4
#define MOVMOVF                          BANKMASK(OVMOVUVOUT), 2
#define MOVMOVR                          BANKMASK(OVMOVUVOUT), 3
#define MOVMUVF                          BANKMASK(OVMOVUVOUT), 0
#define MOVMUVR                          BANKMASK(OVMOVUVOUT), 1
#define MSK01                            BANKMASK(SSP1ADD), 0
#define MSK11                            BANKMASK(SSP1ADD), 1
#define MSK21                            BANKMASK(SSP1ADD), 2
#define MSK31                            BANKMASK(SSP1ADD), 3
#define MSK41                            BANKMASK(SSP1ADD), 4
#define MSK51                            BANKMASK(SSP1ADD), 5
#define MSK61                            BANKMASK(SSP1ADD), 6
#define MSK71                            BANKMASK(SSP1ADD), 7
#define MSSEL0                           BANKMASK(ICDBP0CON), 5
#define MSSEL1                           BANKMASK(ICDBP0CON), 6
#define MSSP1MD                          BANKMASK(PMD2), 5
#define NCOIE                            BANKMASK(PIE7), 4
#define NCOIF                            BANKMASK(PIR7), 4
#define NDIV0                            BANKMASK(OSCCON1), 0
#define NDIV1                            BANKMASK(OSCCON1), 1
#define NDIV2                            BANKMASK(OSCCON1), 2
#define NDIV3                            BANKMASK(OSCCON1), 3
#define NOSC0                            BANKMASK(OSCCON1), 4
#define NOSC1                            BANKMASK(OSCCON1), 5
#define NOSCR                            BANKMASK(OSCCON3), 3
#define NP0                              BANKMASK(NP), 0
#define NP1                              BANKMASK(NP), 1
#define NP2                              BANKMASK(NP), 2
#define NP3                              BANKMASK(NP), 3
#define NP4                              BANKMASK(NP), 4
#define NS0                              BANKMASK(NS), 0
#define NS1                              BANKMASK(NS), 1
#define NS2                              BANKMASK(NS), 2
#define NS3                              BANKMASK(NS), 3
#define NS4                              BANKMASK(NS), 4
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
#define NVMIE                            BANKMASK(PIE1), 5
#define NVMIF                            BANKMASK(PIR1), 5
#define NVMMD                            BANKMASK(PMD0), 2
#define NVMREGS                          BANKMASK(NVMCON1), 6
#define OCM0                             BANKMASK(OCMCORRESL), 6
#define OCM1                             BANKMASK(OCMCORRESL), 7
#define OCM2                             BANKMASK(OCMCORRESH), 0
#define OCM3                             BANKMASK(OCMCORRESH), 1
#define OCM4                             BANKMASK(OCMCORRESH), 2
#define OCM5                             BANKMASK(OCMCORRESH), 3
#define OCM6                             BANKMASK(OCMCORRESH), 4
#define OCM7                             BANKMASK(OCMCORRESH), 5
#define OCM8                             BANKMASK(OCMCORRESH), 6
#define OCM9                             BANKMASK(OCMCORRESH), 7
#define OCMADCIE                         BANKMASK(PIE5), 2
#define OCMADCIF                         BANKMASK(PIR5), 2
#define OCMCTS                           BANKMASK(OCMCON0), 3
#define OCMLT0                           BANKMASK(OCMCON0), 5
#define OCMLT1                           BANKMASK(OCMCON0), 6
#define OCMLT2                           BANKMASK(OCMCON0), 7
#define OCMMD                            BANKMASK(PMD3), 4
#define OCMOC                            BANKMASK(OCMOCUCOUT), 5
#define OCMOCCNT0                        BANKMASK(OCMCON1), 5
#define OCMOCCNT1                        BANKMASK(OCMCON1), 6
#define OCMOCCNT2                        BANKMASK(OCMCON1), 7
#define OCMOCEH                          BANKMASK(DRVCON2), 6
#define OCMOCF0                          BANKMASK(OCMOCF), 0
#define OCMOCF1                          BANKMASK(OCMOCF), 1
#define OCMOCF2                          BANKMASK(OCMOCF), 2
#define OCMOCF3                          BANKMASK(OCMOCF), 3
#define OCMOCF4                          BANKMASK(OCMOCF), 4
#define OCMOCF5                          BANKMASK(OCMOCF), 5
#define OCMOCF6                          BANKMASK(OCMOCF), 6
#define OCMOCF7                          BANKMASK(OCMOCF), 7
#define OCMOCFE0                         BANKMASK(DCOMPCON2), 6
#define OCMOCFE1                         BANKMASK(DCOMPCON2), 7
#define OCMOCFEL                         BANKMASK(DRVCON1), 6
#define OCMOCFINT                        BANKMASK(OCMCON1), 2
#define OCMOCIE                          BANKMASK(PIE5), 1
#define OCMOCIF                          BANKMASK(PIR5), 1
#define OCMOCLAT                         BANKMASK(OCMCON1), 4
#define OCMOCR0                          BANKMASK(OCMOCR), 0
#define OCMOCR1                          BANKMASK(OCMOCR), 1
#define OCMOCR2                          BANKMASK(OCMOCR), 2
#define OCMOCR3                          BANKMASK(OCMOCR), 3
#define OCMOCR4                          BANKMASK(OCMOCR), 4
#define OCMOCR5                          BANKMASK(OCMOCR), 5
#define OCMOCR6                          BANKMASK(OCMOCR), 6
#define OCMOCR7                          BANKMASK(OCMOCR), 7
#define OCMOCRINT                        BANKMASK(OCMCON1), 3
#define OCMUC                            BANKMASK(OCMOCUCOUT), 4
#define OCMUCCNT0                        BANKMASK(OCMCON2), 5
#define OCMUCCNT1                        BANKMASK(OCMCON2), 6
#define OCMUCCNT2                        BANKMASK(OCMCON2), 7
#define OCMUCF0                          BANKMASK(OCMUCF), 0
#define OCMUCF1                          BANKMASK(OCMUCF), 1
#define OCMUCF2                          BANKMASK(OCMUCF), 2
#define OCMUCF3                          BANKMASK(OCMUCF), 3
#define OCMUCF4                          BANKMASK(OCMUCF), 4
#define OCMUCF5                          BANKMASK(OCMUCF), 5
#define OCMUCF6                          BANKMASK(OCMUCF), 6
#define OCMUCF7                          BANKMASK(OCMUCF), 7
#define OCMUCFE0                         BANKMASK(DCOMPCON2), 4
#define OCMUCFE1                         BANKMASK(DCOMPCON2), 5
#define OCMUCFEH                         BANKMASK(DRVCON2), 5
#define OCMUCFEL                         BANKMASK(DRVCON1), 5
#define OCMUCFINT                        BANKMASK(OCMCON2), 0
#define OCMUCIE                          BANKMASK(PIE5), 0
#define OCMUCIF                          BANKMASK(PIR5), 0
#define OCMUCLAT                         BANKMASK(OCMCON2), 4
#define OCMUCR0                          BANKMASK(OCMUCR), 0
#define OCMUCR1                          BANKMASK(OCMUCR), 1
#define OCMUCR2                          BANKMASK(OCMUCR), 2
#define OCMUCR3                          BANKMASK(OCMUCR), 3
#define OCMUCR4                          BANKMASK(OCMUCR), 4
#define OCMUCR5                          BANKMASK(OCMUCR), 5
#define OCMUCR6                          BANKMASK(OCMUCR), 6
#define OCMUCR7                          BANKMASK(OCMUCR), 7
#define OCMUCRINT                        BANKMASK(OCMCON2), 1
#define OCRMD                            BANKMASK(PMD4), 0
#define ODCA0                            BANKMASK(ODCONA), 0
#define ODCA1                            BANKMASK(ODCONA), 1
#define ODCA2                            BANKMASK(ODCONA), 2
#define ODCA3                            BANKMASK(ODCONA), 3
#define ODCA4                            BANKMASK(ODCONA), 4
#define ODCA5                            BANKMASK(ODCONA), 5
#define ODCA6                            BANKMASK(ODCONA), 6
#define ODCB0                            BANKMASK(ODCONB), 0
#define ODCB1                            BANKMASK(ODCONB), 1
#define ODCB2                            BANKMASK(ODCONB), 2
#define ODCB3                            BANKMASK(ODCONB), 3
#define ODCB4                            BANKMASK(ODCONB), 4
#define ODCB5                            BANKMASK(ODCONB), 5
#define ODCB6                            BANKMASK(ODCONB), 6
#define ODCB7                            BANKMASK(ODCONB), 7
#define ODCC2                            BANKMASK(ODCONC), 2
#define ODCC3                            BANKMASK(ODCONC), 3
#define OERR                             BANKMASK(RC1STA), 1
#define OMCTS                            BANKMASK(OVMCON0), 3
#define OMLT0                            BANKMASK(OVMCON0), 5
#define OMLT1                            BANKMASK(OVMCON0), 6
#define OMLT2                            BANKMASK(OVMCON0), 7
#define ORDY                             BANKMASK(OSCCON3), 4
#define OVM0                             BANKMASK(OVMCORRESL), 6
#define OVM1                             BANKMASK(OVMCORRESL), 7
#define OVM2                             BANKMASK(OVMCORRESH), 0
#define OVM3                             BANKMASK(OVMCORRESH), 1
#define OVM4                             BANKMASK(OVMCORRESH), 2
#define OVM5                             BANKMASK(OVMCORRESH), 3
#define OVM6                             BANKMASK(OVMCORRESH), 4
#define OVM7                             BANKMASK(OVMCORRESH), 5
#define OVM8                             BANKMASK(OVMCORRESH), 6
#define OVM9                             BANKMASK(OVMCORRESH), 7
#define OVMADCIE                         BANKMASK(PIE5), 6
#define OVMADCIF                         BANKMASK(PIR5), 6
#define OVMGS0                           BANKMASK(OVMCON3), 0
#define OVMGS1                           BANKMASK(OVMCON3), 1
#define OVMGS2                           BANKMASK(OVMCON3), 2
#define OVMMD                            BANKMASK(PMD3), 6
#define OVMOFEH                          BANKMASK(DRVCON2), 4
#define OVMOV                            BANKMASK(OVMOVUVOUT), 5
#define OVMOVCNT0                        BANKMASK(OVMCON1), 5
#define OVMOVCNT1                        BANKMASK(OVMCON1), 6
#define OVMOVCNT2                        BANKMASK(OVMCON1), 7
#define OVMOVFE0                         BANKMASK(DCOMPCON2), 2
#define OVMOVFE1                         BANKMASK(DCOMPCON2), 3
#define OVMOVFEL                         BANKMASK(DRVCON1), 4
#define OVMOVFINT                        BANKMASK(OVMCON1), 2
#define OVMOVIE                          BANKMASK(PIE5), 5
#define OVMOVIF                          BANKMASK(PIR5), 5
#define OVMOVLAT                         BANKMASK(OVMCON1), 4
#define OVMOVRINT                        BANKMASK(OVMCON1), 3
#define OVMSIGN                          BANKMASK(OVMCON3), 7
#define OVMUV                            BANKMASK(OVMOVUVOUT), 4
#define OVMUVCNT0                        BANKMASK(OVMCON2), 5
#define OVMUVCNT1                        BANKMASK(OVMCON2), 6
#define OVMUVCNT2                        BANKMASK(OVMCON2), 7
#define OVMUVFE0                         BANKMASK(DCOMPCON2), 0
#define OVMUVFE1                         BANKMASK(DCOMPCON2), 1
#define OVMUVFEH                         BANKMASK(DRVCON2), 3
#define OVMUVFEL                         BANKMASK(DRVCON1), 3
#define OVMUVFINT                        BANKMASK(OVMCON2), 0
#define OVMUVIE                          BANKMASK(PIE5), 4
#define OVMUVIF                          BANKMASK(PIR5), 4
#define OVMUVLAT                         BANKMASK(OVMCON2), 4
#define OVMUVRINT                        BANKMASK(OVMCON2), 1
#define P2                               BANKMASK(SSP1STAT), 4
#define PCIE                             BANKMASK(SSP1CON3), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSP1CON2), 2
#define PEN1                             BANKMASK(SSP1CON2), 2
#define PEROVR0                          BANKMASK(TST_PERDOVR), 0
#define PEROVR1                          BANKMASK(TST_PERDOVR), 1
#define PEROVR2                          BANKMASK(TST_PERDOVR), 2
#define PEROVR3                          BANKMASK(TST_PERDOVR), 3
#define PEROVR4                          BANKMASK(TST_PERDOVR), 4
#define PEROVR5                          BANKMASK(TST_PERDOVR), 5
#define PIBREAD0                         BANKMASK(TST_PIBREAD), 0
#define PIBREAD1                         BANKMASK(TST_PIBREAD), 1
#define PIBREAD2                         BANKMASK(TST_PIBREAD), 2
#define PIBREAD3                         BANKMASK(TST_PIBREAD), 3
#define PIBREAD4                         BANKMASK(TST_PIBREAD), 4
#define PIBREAD5                         BANKMASK(TST_PIBREAD), 5
#define PIBSTAT                          BANKMASK(TST_ISMSTAT), 0
#define PLEN0                            BANKMASK(CRCCON1), 0
#define PLEN1                            BANKMASK(CRCCON1), 1
#define PLEN2                            BANKMASK(CRCCON1), 2
#define PLEN3                            BANKMASK(CRCCON1), 3
#define PLL32EN                          BANKMASK(OSCEN), 0
#define PLL32OR                          BANKMASK(OSCSTAT1), 0
#define PORT_ICDCLK                      BANKMASK(ICDIO), 6
#define PORT_ICDDAT                      BANKMASK(ICDIO), 7
#define PPSDOV0                          BANKMASK(TST_PPSDOV), 0
#define PPSDOV1                          BANKMASK(TST_PPSDOV), 1
#define PPSDOV2                          BANKMASK(TST_PPSDOV), 2
#define PPSDOV3                          BANKMASK(TST_PPSDOV), 3
#define PPSEOV0                          BANKMASK(TST_PPSEOV), 0
#define PPSEOV1                          BANKMASK(TST_PPSEOV), 1
#define PPSEOV2                          BANKMASK(TST_PPSEOV), 2
#define PPSEOV3                          BANKMASK(TST_PPSEOV), 3
#define PPSLOCKED                        BANKMASK(PPSLOCK), 0
#define PSCNT0                           BANKMASK(WDTPSL), 0
#define PSCNT1                           BANKMASK(WDTPSL), 1
#define PSCNT10                          BANKMASK(WDTPSH), 2
#define PSCNT11                          BANKMASK(WDTPSH), 3
#define PSCNT12                          BANKMASK(WDTPSH), 4
#define PSCNT13                          BANKMASK(WDTPSH), 5
#define PSCNT14                          BANKMASK(WDTPSH), 6
#define PSCNT15                          BANKMASK(WDTPSH), 7
#define PSCNT16                          BANKMASK(WDTTMR), 0
#define PSCNT17                          BANKMASK(WDTTMR), 1
#define PSCNT2                           BANKMASK(WDTPSL), 2
#define PSCNT3                           BANKMASK(WDTPSL), 3
#define PSCNT4                           BANKMASK(WDTPSL), 4
#define PSCNT5                           BANKMASK(WDTPSL), 5
#define PSCNT6                           BANKMASK(WDTPSL), 6
#define PSCNT7                           BANKMASK(WDTPSL), 7
#define PSCNT8                           BANKMASK(WDTPSH), 0
#define PSCNT9                           BANKMASK(WDTPSH), 1
#define PSYNC                            BANKMASK(T2HLT), 7
#define PWOUT                            BANKMASK(SWFRQCON), 3
#define RA0                              BANKMASK(PORTA), 0
#define RA0PPS0                          BANKMASK(RA0PPS), 0
#define RA0PPS1                          BANKMASK(RA0PPS), 1
#define RA0PPS2                          BANKMASK(RA0PPS), 2
#define RA0PPS3                          BANKMASK(RA0PPS), 3
#define RA0PPS4                          BANKMASK(RA0PPS), 4
#define RA0PPS5                          BANKMASK(RA0PPS), 5
#define RA1                              BANKMASK(PORTA), 1
#define RA1PPS0                          BANKMASK(RA1PPS), 0
#define RA1PPS1                          BANKMASK(RA1PPS), 1
#define RA1PPS2                          BANKMASK(RA1PPS), 2
#define RA1PPS3                          BANKMASK(RA1PPS), 3
#define RA1PPS4                          BANKMASK(RA1PPS), 4
#define RA1PPS5                          BANKMASK(RA1PPS), 5
#define RA2                              BANKMASK(PORTA), 2
#define RA2PPS0                          BANKMASK(RA2PPS), 0
#define RA2PPS1                          BANKMASK(RA2PPS), 1
#define RA2PPS2                          BANKMASK(RA2PPS), 2
#define RA2PPS3                          BANKMASK(RA2PPS), 3
#define RA2PPS4                          BANKMASK(RA2PPS), 4
#define RA2PPS5                          BANKMASK(RA2PPS), 5
#define RA3                              BANKMASK(PORTA), 3
#define RA3PPS0                          BANKMASK(RA3PPS), 0
#define RA3PPS1                          BANKMASK(RA3PPS), 1
#define RA3PPS2                          BANKMASK(RA3PPS), 2
#define RA3PPS3                          BANKMASK(RA3PPS), 3
#define RA3PPS4                          BANKMASK(RA3PPS), 4
#define RA3PPS5                          BANKMASK(RA3PPS), 5
#define RA4                              BANKMASK(PORTA), 4
#define RA4PPS0                          BANKMASK(RA4PPS), 0
#define RA4PPS1                          BANKMASK(RA4PPS), 1
#define RA4PPS2                          BANKMASK(RA4PPS), 2
#define RA4PPS3                          BANKMASK(RA4PPS), 3
#define RA4PPS4                          BANKMASK(RA4PPS), 4
#define RA4PPS5                          BANKMASK(RA4PPS), 5
#define RA5                              BANKMASK(PORTA), 5
#define RA5PPS0                          BANKMASK(RA5PPS), 0
#define RA5PPS1                          BANKMASK(RA5PPS), 1
#define RA5PPS2                          BANKMASK(RA5PPS), 2
#define RA5PPS3                          BANKMASK(RA5PPS), 3
#define RA5PPS4                          BANKMASK(RA5PPS), 4
#define RA5PPS5                          BANKMASK(RA5PPS), 5
#define RA6                              BANKMASK(PORTA), 6
#define RA6PPS0                          BANKMASK(RA6PPS), 0
#define RA6PPS1                          BANKMASK(RA6PPS), 1
#define RA6PPS2                          BANKMASK(RA6PPS), 2
#define RA6PPS3                          BANKMASK(RA6PPS), 3
#define RA6PPS4                          BANKMASK(RA6PPS), 4
#define RA6PPS5                          BANKMASK(RA6PPS), 5
#define RB0                              BANKMASK(PORTB), 0
#define RB0PPS0                          BANKMASK(RB0PPS), 0
#define RB0PPS1                          BANKMASK(RB0PPS), 1
#define RB0PPS2                          BANKMASK(RB0PPS), 2
#define RB0PPS3                          BANKMASK(RB0PPS), 3
#define RB0PPS4                          BANKMASK(RB0PPS), 4
#define RB0PPS5                          BANKMASK(RB0PPS), 5
#define RB1                              BANKMASK(PORTB), 1
#define RB1PPS0                          BANKMASK(RB1PPS), 0
#define RB1PPS1                          BANKMASK(RB1PPS), 1
#define RB1PPS2                          BANKMASK(RB1PPS), 2
#define RB1PPS3                          BANKMASK(RB1PPS), 3
#define RB1PPS4                          BANKMASK(RB1PPS), 4
#define RB1PPS5                          BANKMASK(RB1PPS), 5
#define RB2                              BANKMASK(PORTB), 2
#define RB2PPS0                          BANKMASK(RB2PPS), 0
#define RB2PPS1                          BANKMASK(RB2PPS), 1
#define RB2PPS2                          BANKMASK(RB2PPS), 2
#define RB2PPS3                          BANKMASK(RB2PPS), 3
#define RB2PPS4                          BANKMASK(RB2PPS), 4
#define RB2PPS5                          BANKMASK(RB2PPS), 5
#define RB3                              BANKMASK(PORTB), 3
#define RB3PPS0                          BANKMASK(RB3PPS), 0
#define RB3PPS1                          BANKMASK(RB3PPS), 1
#define RB3PPS2                          BANKMASK(RB3PPS), 2
#define RB3PPS3                          BANKMASK(RB3PPS), 3
#define RB3PPS4                          BANKMASK(RB3PPS), 4
#define RB3PPS5                          BANKMASK(RB3PPS), 5
#define RB4                              BANKMASK(PORTB), 4
#define RB4PPS0                          BANKMASK(RB4PPS), 0
#define RB4PPS1                          BANKMASK(RB4PPS), 1
#define RB4PPS2                          BANKMASK(RB4PPS), 2
#define RB4PPS3                          BANKMASK(RB4PPS), 3
#define RB4PPS4                          BANKMASK(RB4PPS), 4
#define RB4PPS5                          BANKMASK(RB4PPS), 5
#define RB5                              BANKMASK(PORTB), 5
#define RB5PPS0                          BANKMASK(RB5PPS), 0
#define RB5PPS1                          BANKMASK(RB5PPS), 1
#define RB5PPS2                          BANKMASK(RB5PPS), 2
#define RB5PPS3                          BANKMASK(RB5PPS), 3
#define RB5PPS4                          BANKMASK(RB5PPS), 4
#define RB5PPS5                          BANKMASK(RB5PPS), 5
#define RB6                              BANKMASK(PORTB), 6
#define RB6PPS0                          BANKMASK(RB6PPS), 0
#define RB6PPS1                          BANKMASK(RB6PPS), 1
#define RB6PPS2                          BANKMASK(RB6PPS), 2
#define RB6PPS3                          BANKMASK(RB6PPS), 3
#define RB6PPS4                          BANKMASK(RB6PPS), 4
#define RB6PPS5                          BANKMASK(RB6PPS), 5
#define RB7                              BANKMASK(PORTB), 7
#define RB7PPS0                          BANKMASK(RB7PPS), 0
#define RB7PPS1                          BANKMASK(RB7PPS), 1
#define RB7PPS2                          BANKMASK(RB7PPS), 2
#define RB7PPS3                          BANKMASK(RB7PPS), 3
#define RB7PPS4                          BANKMASK(RB7PPS), 4
#define RB7PPS5                          BANKMASK(RB7PPS), 5
#define RC2                              BANKMASK(PORTC), 2
#define RC2PPS0                          BANKMASK(RC2PPS), 0
#define RC2PPS1                          BANKMASK(RC2PPS), 1
#define RC2PPS2                          BANKMASK(RC2PPS), 2
#define RC2PPS3                          BANKMASK(RC2PPS), 3
#define RC2PPS4                          BANKMASK(RC2PPS), 4
#define RC2PPS5                          BANKMASK(RC2PPS), 5
#define RC3                              BANKMASK(PORTC), 3
#define RC3PPS0                          BANKMASK(RC3PPS), 0
#define RC3PPS1                          BANKMASK(RC3PPS), 1
#define RC3PPS2                          BANKMASK(RC3PPS), 2
#define RC3PPS3                          BANKMASK(RC3PPS), 3
#define RC3PPS4                          BANKMASK(RC3PPS), 4
#define RC3PPS5                          BANKMASK(RC3PPS), 5
#define RC4                              BANKMASK(PORTC), 4
#define RC4PPS0                          BANKMASK(RC4PPS), 0
#define RC4PPS1                          BANKMASK(RC4PPS), 1
#define RC4PPS2                          BANKMASK(RC4PPS), 2
#define RC4PPS3                          BANKMASK(RC4PPS), 3
#define RC4PPS4                          BANKMASK(RC4PPS), 4
#define RC4PPS5                          BANKMASK(RC4PPS), 5
#define RC5                              BANKMASK(PORTC), 5
#define RC5PPS0                          BANKMASK(RC5PPS), 0
#define RC5PPS1                          BANKMASK(RC5PPS), 1
#define RC5PPS2                          BANKMASK(RC5PPS), 2
#define RC5PPS3                          BANKMASK(RC5PPS), 3
#define RC5PPS4                          BANKMASK(RC5PPS), 4
#define RC5PPS5                          BANKMASK(RC5PPS), 5
#define RC6                              BANKMASK(PORTC), 6
#define RC6PPS0                          BANKMASK(RC6PPS), 0
#define RC6PPS1                          BANKMASK(RC6PPS), 1
#define RC6PPS2                          BANKMASK(RC6PPS), 2
#define RC6PPS3                          BANKMASK(RC6PPS), 3
#define RC6PPS4                          BANKMASK(RC6PPS), 4
#define RC6PPS5                          BANKMASK(RC6PPS), 5
#define RC7                              BANKMASK(PORTC), 7
#define RCEN                             BANKMASK(SSP1CON2), 3
#define RCEN1                            BANKMASK(SSP1CON2), 3
#define RCIDL                            BANKMASK(BAUD1CON), 6
#define RCIE                             BANKMASK(PIE4), 5
#define RCIF                             BANKMASK(PIR4), 5
#define RD                               BANKMASK(NVMCON1), 0
#define READ_WRITE                       BANKMASK(SSP1STAT), 2
#define READ_WRITE1                      BANKMASK(SSP1STAT), 2
#define RESL2                            BANKMASK(T2RST), 2
#define RLOAD0                           BANKMASK(RLOAD), 0
#define RLOAD1                           BANKMASK(RLOAD), 1
#define RLOAD2                           BANKMASK(RLOAD), 2
#define RLOAD3                           BANKMASK(RLOAD), 3
#define RLOAD4                           BANKMASK(RLOAD), 4
#define RLOAD5                           BANKMASK(RLOAD), 5
#define RLOAD6                           BANKMASK(RLOAD), 6
#define RLOAD7                           BANKMASK(RLOAD), 7
#define RLOSS0                           BANKMASK(RLOSS), 0
#define RLOSS1                           BANKMASK(RLOSS), 1
#define RLOSS2                           BANKMASK(RLOSS), 2
#define RLOSS3                           BANKMASK(RLOSS), 3
#define RLOSS4                           BANKMASK(RLOSS), 4
#define RLOSS5                           BANKMASK(RLOSS), 5
#define RLOSS6                           BANKMASK(RLOSS), 6
#define RLOSS7                           BANKMASK(RLOSS), 7
#define ROI                              BANKMASK(CPUDOZE), 5
#define RSEL2                            BANKMASK(T4RST), 2
#define RSEN                             BANKMASK(SSP1CON2), 1
#define RSEN1                            BANKMASK(SSP1CON2), 1
#define RSTVEC                           BANKMASK(ICDCON0), 0
#define RW                               BANKMASK(SSP1STAT), 2
#define RW1                              BANKMASK(SSP1STAT), 2
#define RX9                              BANKMASK(RC1STA), 6
#define RX9D                             BANKMASK(RC1STA), 0
#define RXDT                             BANKMASK(TST_PPSIN4), 0
#define R_W                              BANKMASK(SSP1STAT), 2
#define R_W1                             BANKMASK(SSP1STAT), 2
#define R_nW                             BANKMASK(SSP1STAT), 2
#define R_nW1                            BANKMASK(SSP1STAT), 2
#define S2                               BANKMASK(SSP1STAT), 3
#define SBCDE                            BANKMASK(SSP1CON3), 2
#define SBOREN                           BANKMASK(BORCON), 7
#define SCANGO                           BANKMASK(SCANCON0), 6
#define SCANMD                           BANKMASK(PMD0), 3
#define SCIE                             BANKMASK(SSP1CON3), 5
#define SCKP                             BANKMASK(BAUD1CON), 4
#define SDAHT                            BANKMASK(SSP1CON3), 3
#define SEN                              BANKMASK(SSP1CON2), 0
#define SEN1                             BANKMASK(SSP1CON2), 0
#define SENDB                            BANKMASK(TX1STA), 3
#define SHFT0                            BANKMASK(CRCSHIFTL), 0
#define SHFT1                            BANKMASK(CRCSHIFTL), 1
#define SHFT10                           BANKMASK(CRCSHIFTH), 2
#define SHFT11                           BANKMASK(CRCSHIFTH), 3
#define SHFT12                           BANKMASK(CRCSHIFTH), 4
#define SHFT13                           BANKMASK(CRCSHIFTH), 5
#define SHFT14                           BANKMASK(CRCSHIFTH), 6
#define SHFT15                           BANKMASK(CRCSHIFTH), 7
#define SHFT2                            BANKMASK(CRCSHIFTL), 2
#define SHFT3                            BANKMASK(CRCSHIFTL), 3
#define SHFT4                            BANKMASK(CRCSHIFTL), 4
#define SHFT5                            BANKMASK(CRCSHIFTL), 5
#define SHFT6                            BANKMASK(CRCSHIFTL), 6
#define SHFT7                            BANKMASK(CRCSHIFTL), 7
#define SHFT8                            BANKMASK(CRCSHIFTH), 0
#define SHFT9                            BANKMASK(CRCSHIFTH), 1
#define SHIFTM                           BANKMASK(CRCCON0), 1
#define SLOT0                            BANKMASK(TSTBUFCON), 2
#define SLOT1                            BANKMASK(TSTBUFCON), 3
#define SLOT2                            BANKMASK(TSTBUFCON), 4
#define SLOT3                            BANKMASK(TSTBUFCON), 5
#define SLRA0                            BANKMASK(SLRCONA), 0
#define SLRA1                            BANKMASK(SLRCONA), 1
#define SLRA2                            BANKMASK(SLRCONA), 2
#define SLRA3                            BANKMASK(SLRCONA), 3
#define SLRA4                            BANKMASK(SLRCONA), 4
#define SLRA5                            BANKMASK(SLRCONA), 5
#define SLRA6                            BANKMASK(SLRCONA), 6
#define SLRB0                            BANKMASK(SLRCONB), 0
#define SLRB1                            BANKMASK(SLRCONB), 1
#define SLRB2                            BANKMASK(SLRCONB), 2
#define SLRB3                            BANKMASK(SLRCONB), 3
#define SLRB4                            BANKMASK(SLRCONB), 4
#define SLRB5                            BANKMASK(SLRCONB), 5
#define SLRB6                            BANKMASK(SLRCONB), 6
#define SLRB7                            BANKMASK(SLRCONB), 7
#define SLRC2                            BANKMASK(SLRCONC), 2
#define SLRC3                            BANKMASK(SLRCONC), 3
#define SMP                              BANKMASK(SSP1STAT), 7
#define SMP1                             BANKMASK(SSP1STAT), 7
#define SPEN                             BANKMASK(RC1STA), 7
#define SREN                             BANKMASK(RC1STA), 5
#define SSP1CLK                          BANKMASK(TST_PPSIN4), 5
#define SSP1DAT                          BANKMASK(TST_PPSIN4), 6
#define SSP1IE                           BANKMASK(PIE4), 0
#define SSP1IF                           BANKMASK(PIR4), 0
#define SSP1SS                           BANKMASK(TST_PPSIN4), 7
#define SSPADD0                          BANKMASK(SSP1ADD2), 0
#define SSPADD1                          BANKMASK(SSP1ADD2), 1
#define SSPADD2                          BANKMASK(SSP1ADD2), 2
#define SSPADD3                          BANKMASK(SSP1ADD2), 3
#define SSPADD4                          BANKMASK(SSP1ADD2), 4
#define SSPADD5                          BANKMASK(SSP1ADD2), 5
#define SSPADD6                          BANKMASK(SSP1ADD2), 6
#define SSPADD7                          BANKMASK(SSP1ADD2), 7
#define SSPEN                            BANKMASK(SSP1CON1), 5
#define SSPEN1                           BANKMASK(SSP1CON1), 5
#define SSPM0                            BANKMASK(SSP1CON1), 0
#define SSPM01                           BANKMASK(SSP1CON1), 0
#define SSPM1                            BANKMASK(SSP1CON1), 1
#define SSPM11                           BANKMASK(SSP1CON1), 1
#define SSPM2                            BANKMASK(SSP1CON1), 2
#define SSPM21                           BANKMASK(SSP1CON1), 2
#define SSPM3                            BANKMASK(SSP1CON1), 3
#define SSPM31                           BANKMASK(SSP1CON1), 3
#define SSPMSK0                          BANKMASK(SSP1MASK2), 0
#define SSPMSK1                          BANKMASK(SSP1MASK2), 1
#define SSPMSK2                          BANKMASK(SSP1MASK2), 2
#define SSPMSK3                          BANKMASK(SSP1MASK2), 3
#define SSPMSK4                          BANKMASK(SSP1MASK2), 4
#define SSPMSK5                          BANKMASK(SSP1MASK2), 5
#define SSPMSK6                          BANKMASK(SSP1MASK2), 6
#define SSPMSK7                          BANKMASK(SSP1MASK2), 7
#define SSPOV                            BANKMASK(SSP1CON1), 6
#define SSPOV1                           BANKMASK(SSP1CON1), 6
#define SSTEP                            BANKMASK(ICDCON0), 5
#define START                            BANKMASK(SSP1STAT), 3
#define START1                           BANKMASK(SSP1STAT), 3
#define STATE                            BANKMASK(WDTTMR), 2
#define STKOVF                           BANKMASK(PCON0), 7
#define STKUNF                           BANKMASK(PCON0), 6
#define STOP                             BANKMASK(SSP1STAT), 4
#define STOP1                            BANKMASK(SSP1STAT), 4
#define SWDTEN                           BANKMASK(WDTCON0), 0
#define SWFRQIE                          BANKMASK(PIE7), 4
#define SWFRQIF                          BANKMASK(PIR7), 4
#define SWFRQMD                          BANKMASK(PMD4), 4
#define SWFRQON                          BANKMASK(SWFRQCON), 7
#define SWFRQPS0                         BANKMASK(SWFRQCON), 0
#define SWFRQPS1                         BANKMASK(SWFRQCON), 1
#define SWFRQPS2                         BANKMASK(SWFRQCON), 2
#define SWFRQPW0                         BANKMASK(SWFRQPWL), 2
#define SWFRQPW1                         BANKMASK(SWFRQPWL), 3
#define SWFRQPW10                        BANKMASK(SWFRQPWH), 4
#define SWFRQPW11                        BANKMASK(SWFRQPWH), 5
#define SWFRQPW12                        BANKMASK(SWFRQPWH), 6
#define SWFRQPW13                        BANKMASK(SWFRQPWH), 7
#define SWFRQPW2                         BANKMASK(SWFRQPWL), 4
#define SWFRQPW3                         BANKMASK(SWFRQPWL), 5
#define SWFRQPW4                         BANKMASK(SWFRQPWL), 6
#define SWFRQPW5                         BANKMASK(SWFRQPWL), 7
#define SWFRQPW6                         BANKMASK(SWFRQPWH), 0
#define SWFRQPW7                         BANKMASK(SWFRQPWH), 1
#define SWFRQPW8                         BANKMASK(SWFRQPWH), 2
#define SWFRQPW9                         BANKMASK(SWFRQPWH), 3
#define SYNC                             BANKMASK(TX1STA), 4
#define SYSCMD                           BANKMASK(PMD0), 7
#define T016BIT                          BANKMASK(T0CON0), 4
#define T0ASYNC                          BANKMASK(T0CON1), 4
#define T0CKI                            BANKMASK(TST_PPSIN1), 1
#define T0CKIPPS0                        BANKMASK(T0CKIPPS), 0
#define T0CKIPPS1                        BANKMASK(T0CKIPPS), 1
#define T0CKIPPS2                        BANKMASK(T0CKIPPS), 2
#define T0CKIPPS3                        BANKMASK(T0CKIPPS), 3
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
#define T1CKI                            BANKMASK(TST_PPSIN1), 2
#define T1CKIPPS0                        BANKMASK(T1CKIPPS), 0
#define T1CKIPPS1                        BANKMASK(T1CKIPPS), 1
#define T1CKIPPS2                        BANKMASK(T1CKIPPS), 2
#define T1CKIPPS3                        BANKMASK(T1CKIPPS), 3
#define T1CKIPPS4                        BANKMASK(T1CKIPPS), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1G                              BANKMASK(TST_PPSIN1), 3
#define T1GPPS0                          BANKMASK(T1GPPS), 0
#define T1GPPS1                          BANKMASK(T1GPPS), 1
#define T1GPPS2                          BANKMASK(T1GPPS), 2
#define T1GPPS3                          BANKMASK(T1GPPS), 3
#define T1GPPS4                          BANKMASK(T1GPPS), 4
#define T2AINPPS0                        BANKMASK(T2AINPPS), 0
#define T2AINPPS1                        BANKMASK(T2AINPPS), 1
#define T2AINPPS2                        BANKMASK(T2AINPPS), 2
#define T2AINPPS3                        BANKMASK(T2AINPPS), 3
#define T2AINPPS4                        BANKMASK(T2AINPPS), 4
#define T2IN                             BANKMASK(TST_PPSIN2), 0
#define T3CKI                            BANKMASK(TST_PPSIN1), 4
#define T3CKIPPS0                        BANKMASK(T3CKIPPS), 0
#define T3CKIPPS1                        BANKMASK(T3CKIPPS), 1
#define T3CKIPPS2                        BANKMASK(T3CKIPPS), 2
#define T3CKIPPS3                        BANKMASK(T3CKIPPS), 3
#define T3CKIPPS4                        BANKMASK(T3CKIPPS), 4
#define T3CKPS0                          BANKMASK(T3CON), 4
#define T3CKPS1                          BANKMASK(T3CON), 5
#define T3G                              BANKMASK(TST_PPSIN1), 5
#define T3GPPS0                          BANKMASK(T3GPPS), 0
#define T3GPPS1                          BANKMASK(T3GPPS), 1
#define T3GPPS2                          BANKMASK(T3GPPS), 2
#define T3GPPS3                          BANKMASK(T3GPPS), 3
#define T3GPPS4                          BANKMASK(T3GPPS), 4
#define T4AINPPS0                        BANKMASK(T4AINPPS), 0
#define T4AINPPS1                        BANKMASK(T4AINPPS), 1
#define T4AINPPS2                        BANKMASK(T4AINPPS), 2
#define T4AINPPS3                        BANKMASK(T4AINPPS), 3
#define T4AINPPS4                        BANKMASK(T4AINPPS), 4
#define T4CPOL                           BANKMASK(T4HLT), 6
#define T4CSYNC                          BANKMASK(T4HLT), 5
#define T4IN                             BANKMASK(TST_PPSIN2), 1
#define T4PSYNC                          BANKMASK(T4HLT), 7
#define TFS0                             BANKMASK(DCOMPCON0), 0
#define TFS1                             BANKMASK(DCOMPCON0), 1
#define TM1H0                            BANKMASK(TMR1H), 0
#define TM1H1                            BANKMASK(TMR1H), 1
#define TM1H2                            BANKMASK(TMR1H), 2
#define TM1H3                            BANKMASK(TMR1H), 3
#define TM1H4                            BANKMASK(TMR1H), 4
#define TM1H5                            BANKMASK(TMR1H), 5
#define TM1H6                            BANKMASK(TMR1H), 6
#define TM1H7                            BANKMASK(TMR1H), 7
#define TMR0IE                           BANKMASK(PIE0), 5
#define TMR0IF                           BANKMASK(PIR0), 5
#define TMR0MD                           BANKMASK(PMD1), 0
#define TMR1GIE                          BANKMASK(PIE2), 6
#define TMR1GIF                          BANKMASK(PIR2), 6
#define TMR1IE                           BANKMASK(PIE2), 0
#define TMR1IF                           BANKMASK(PIR2), 0
#define TMR1L0                           BANKMASK(TMR1L), 0
#define TMR1L1                           BANKMASK(TMR1L), 1
#define TMR1L2                           BANKMASK(TMR1L), 2
#define TMR1L3                           BANKMASK(TMR1L), 3
#define TMR1L4                           BANKMASK(TMR1L), 4
#define TMR1L5                           BANKMASK(TMR1L), 5
#define TMR1L6                           BANKMASK(TMR1L), 6
#define TMR1L7                           BANKMASK(TMR1L), 7
#define TMR1MD                           BANKMASK(PMD1), 1
#define TMR2IE                           BANKMASK(PIE2), 1
#define TMR2IF                           BANKMASK(PIR2), 1
#define TMR2MD                           BANKMASK(PMD1), 2
#define TMR3GIE                          BANKMASK(PIE2), 7
#define TMR3GIF                          BANKMASK(PIR2), 7
#define TMR3H0                           BANKMASK(TMR3H), 0
#define TMR3H1                           BANKMASK(TMR3H), 1
#define TMR3H2                           BANKMASK(TMR3H), 2
#define TMR3H3                           BANKMASK(TMR3H), 3
#define TMR3H4                           BANKMASK(TMR3H), 4
#define TMR3H5                           BANKMASK(TMR3H), 5
#define TMR3H6                           BANKMASK(TMR3H), 6
#define TMR3H7                           BANKMASK(TMR3H), 7
#define TMR3IE                           BANKMASK(PIE2), 2
#define TMR3IF                           BANKMASK(PIR2), 2
#define TMR3L0                           BANKMASK(TMR3L), 0
#define TMR3L1                           BANKMASK(TMR3L), 1
#define TMR3L2                           BANKMASK(TMR3L), 2
#define TMR3L3                           BANKMASK(TMR3L), 3
#define TMR3L4                           BANKMASK(TMR3L), 4
#define TMR3L5                           BANKMASK(TMR3L), 5
#define TMR3L6                           BANKMASK(TMR3L), 6
#define TMR3L7                           BANKMASK(TMR3L), 7
#define TMR3MD                           BANKMASK(PMD1), 3
#define TMR4IE                           BANKMASK(PIE2), 3
#define TMR4IF                           BANKMASK(PIR2), 3
#define TMR4MD                           BANKMASK(PMD1), 4
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TRISA3                           BANKMASK(TRISA), 3
#define TRISA4                           BANKMASK(TRISA), 4
#define TRISA5                           BANKMASK(TRISA), 5
#define TRISA6                           BANKMASK(TRISA), 6
#define TRISB0                           BANKMASK(TRISB), 0
#define TRISB1                           BANKMASK(TRISB), 1
#define TRISB2                           BANKMASK(TRISB), 2
#define TRISB3                           BANKMASK(TRISB), 3
#define TRISB4                           BANKMASK(TRISB), 4
#define TRISB5                           BANKMASK(TRISB), 5
#define TRISB6                           BANKMASK(TRISB), 6
#define TRISB7                           BANKMASK(TRISB), 7
#define TRISC2                           BANKMASK(TRISC), 2
#define TRISC3                           BANKMASK(TRISC), 3
#define TRISC4                           BANKMASK(TRISC), 4
#define TRISC5                           BANKMASK(TRISC), 5
#define TRISC6                           BANKMASK(TRISC), 6
#define TRISC7                           BANKMASK(TRISC), 7
#define TRIS_ICDCLK                      BANKMASK(ICDIO), 2
#define TRIS_ICDDAT                      BANKMASK(ICDIO), 3
#define TRMT                             BANKMASK(TX1STA), 1
#define TRP0HLTF                         BANKMASK(ICDSTAT), 6
#define TRP1HLTF                         BANKMASK(ICDSTAT), 7
#define TSEL0                            BANKMASK(SCANDTRIG), 0
#define TSEL1                            BANKMASK(SCANDTRIG), 1
#define TSEL2                            BANKMASK(SCANDTRIG), 2
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TSTMODE0                         BANKMASK(TSTBUFCON), 6
#define TSTMODE1                         BANKMASK(TSTBUFCON), 7
#define TSTPT0                           BANKMASK(TSTBUFCON), 0
#define TSTPT1                           BANKMASK(TSTBUFCON), 1
#define TSWIE                            BANKMASK(PIE7), 2
#define TSWIF                            BANKMASK(PIR7), 2
#define TX9                              BANKMASK(TX1STA), 6
#define TX9D                             BANKMASK(TX1STA), 0
#define TXCK                             BANKMASK(TST_PPSIN4), 1
#define TXEN                             BANKMASK(TX1STA), 5
#define TXIE                             BANKMASK(PIE4), 4
#define TXIF                             BANKMASK(PIR4), 4
#define UA                               BANKMASK(SSP1STAT), 1
#define UA1                              BANKMASK(SSP1STAT), 1
#define UART1MD                          BANKMASK(PMD2), 7
#define UMTOA0                           BANKMASK(UMTOAL), 0
#define UMTOA1                           BANKMASK(UMTOAL), 1
#define UMTOA10                          BANKMASK(UMTOAH), 2
#define UMTOA11                          BANKMASK(UMTOAH), 3
#define UMTOA12                          BANKMASK(UMTOAH), 4
#define UMTOA13                          BANKMASK(UMTOAH), 5
#define UMTOA2                           BANKMASK(UMTOAL), 2
#define UMTOA3                           BANKMASK(UMTOAL), 3
#define UMTOA4                           BANKMASK(UMTOAL), 4
#define UMTOA5                           BANKMASK(UMTOAL), 5
#define UMTOA6                           BANKMASK(UMTOAL), 6
#define UMTOA7                           BANKMASK(UMTOAL), 7
#define UMTOA8                           BANKMASK(UMTOAH), 0
#define UMTOA9                           BANKMASK(UMTOAH), 1
#define UMTOAP0                          BANKMASK(UMTOAP), 0
#define UMTOAP1                          BANKMASK(UMTOAP), 1
#define UMTOAP2                          BANKMASK(UMTOAP), 2
#define UMTOAP3                          BANKMASK(UMTOAP), 3
#define UMTOAP4                          BANKMASK(UMTOAP), 4
#define UMTOAP5                          BANKMASK(UMTOAP), 5
#define USRHLTF                          BANKMASK(ICDSTAT), 1
#define VCOMPEN                          BANKMASK(DCOMPCON0), 6
#define VREF0                            BANKMASK(VREFL), 0
#define VREF1                            BANKMASK(VREFL), 1
#define VREF2                            BANKMASK(VREFL), 2
#define VREF3                            BANKMASK(VREFL), 3
#define VREF4                            BANKMASK(VREFL), 4
#define VREF5                            BANKMASK(VREFL), 5
#define VREF6                            BANKMASK(VREFL), 6
#define VREF7                            BANKMASK(VREFL), 7
#define VREF8                            BANKMASK(VREFH), 0
#define VREF9                            BANKMASK(VREFH), 1
#define VREGPM1                          BANKMASK(VREGCON), 1
#define WCOL                             BANKMASK(SSP1CON1), 7
#define WCOL1                            BANKMASK(SSP1CON1), 7
#define WDTCS0                           BANKMASK(WDTCON1), 4
#define WDTCS1                           BANKMASK(WDTCON1), 5
#define WDTCS2                           BANKMASK(WDTCON1), 6
#define WDTPS0                           BANKMASK(WDTCON0), 1
#define WDTPS1                           BANKMASK(WDTCON0), 2
#define WDTPS2                           BANKMASK(WDTCON0), 3
#define WDTPS3                           BANKMASK(WDTCON0), 4
#define WDTPS4                           BANKMASK(WDTCON0), 5
#define WDTTMR0                          BANKMASK(WDTTMR), 3
#define WDTTMR1                          BANKMASK(WDTTMR), 4
#define WDTTMR2                          BANKMASK(WDTTMR), 5
#define WDTTMR3                          BANKMASK(WDTTMR), 6
#define WINDOW0                          BANKMASK(WDTCON1), 0
#define WINDOW1                          BANKMASK(WDTCON1), 1
#define WINDOW2                          BANKMASK(WDTCON1), 2
#define WPUA0                            BANKMASK(WPUA), 0
#define WPUA1                            BANKMASK(WPUA), 1
#define WPUA2                            BANKMASK(WPUA), 2
#define WPUA3                            BANKMASK(WPUA), 3
#define WPUA4                            BANKMASK(WPUA), 4
#define WPUA5                            BANKMASK(WPUA), 5
#define WPUA6                            BANKMASK(WPUA), 6
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define WPUC2                            BANKMASK(WPUC), 2
#define WPUC3                            BANKMASK(WPUC), 3
#define WPUC7                            BANKMASK(WPUC), 7
#define WR                               BANKMASK(NVMCON1), 1
#define WREN                             BANKMASK(NVMCON1), 2
#define WRERR                            BANKMASK(NVMCON1), 3
#define WUE                              BANKMASK(BAUD1CON), 1
#define X1                               BANKMASK(CRCXORL), 1
#define X10                              BANKMASK(CRCXORH), 2
#define X11                              BANKMASK(CRCXORH), 3
#define X12                              BANKMASK(CRCXORH), 4
#define X13                              BANKMASK(CRCXORH), 5
#define X14                              BANKMASK(CRCXORH), 6
#define X15                              BANKMASK(CRCXORH), 7
#define X2                               BANKMASK(CRCXORL), 2
#define X3                               BANKMASK(CRCXORL), 3
#define X4                               BANKMASK(CRCXORL), 4
#define X5                               BANKMASK(CRCXORL), 5
#define X6                               BANKMASK(CRCXORL), 6
#define X7                               BANKMASK(CRCXORL), 7
#define X8                               BANKMASK(CRCXORH), 0
#define X9                               BANKMASK(CRCXORH), 1
#define XI0                              BANKMASK(XI), 0
#define XI1                              BANKMASK(XI), 1
#define XI2                              BANKMASK(XI), 2
#define XI3                              BANKMASK(XI), 3
#define XI4                              BANKMASK(XI), 4
#define XTEN                             BANKMASK(ICDDC), 6
#define XTHI                             BANKMASK(ICDDC), 4
#define XV0                              BANKMASK(XV), 0
#define XV1                              BANKMASK(XV), 1
#define XV2                              BANKMASK(XV), 2
#define XV3                              BANKMASK(XV), 3
#define XV4                              BANKMASK(XV), 4
#define YI0                              BANKMASK(YI), 0
#define YI1                              BANKMASK(YI), 1
#define YI2                              BANKMASK(YI), 2
#define YI3                              BANKMASK(YI), 3
#define YI4                              BANKMASK(YI), 4
#define YV0                              BANKMASK(YV), 0
#define YV1                              BANKMASK(YV), 1
#define YV2                              BANKMASK(YV), 2
#define YV3                              BANKMASK(YV), 3
#define YV4                              BANKMASK(YV), 4
#define ZERO                             BANKMASK(STATUS), 2
#define Z_SHAD                           BANKMASK(STATUS_SHAD), 2
#define nA                               BANKMASK(SSP1STAT), 5
#define nA2                              BANKMASK(SSP1STAT), 5
#define nADDRESS                         BANKMASK(SSP1STAT), 5
#define nADDRESS1                        BANKMASK(SSP1STAT), 5
#define nBOR                             BANKMASK(PCON0), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON0), 1
#define nRI                              BANKMASK(PCON0), 2
#define nRMCLR                           BANKMASK(PCON0), 3
#define nRWDT                            BANKMASK(PCON0), 4
#define nTO                              BANKMASK(STATUS), 4
#define nW                               BANKMASK(SSP1STAT), 2
#define nW2                              BANKMASK(SSP1STAT), 2
#define nWDTWV                           BANKMASK(PCON0), 5
#define nWRITE                           BANKMASK(SSP1STAT), 2
#define nWRITE1                          BANKMASK(SSP1STAT), 2

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

#endif // _MCP19133_INC_
