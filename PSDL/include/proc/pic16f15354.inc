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

#ifndef _PIC16F15354_INC_
#define _PIC16F15354_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F15354
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
BSR_BSR_SIZE                             equ 0006h
BSR_BSR_LENGTH                           equ 0006h
BSR_BSR_MASK                             equ 003Fh
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
BSR_BSR5_POSN                            equ 0005h
BSR_BSR5_POSITION                        equ 0005h
BSR_BSR5_SIZE                            equ 0001h
BSR_BSR5_LENGTH                          equ 0001h
BSR_BSR5_MASK                            equ 0020h

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

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0012h
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
TRISB                                    equ 0013h
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
TRISC                                    equ 0014h
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
TRISE                                    equ 0016h
// bitfield definitions
TRISE_TRISE3_POSN                        equ 0003h
TRISE_TRISE3_POSITION                    equ 0003h
TRISE_TRISE3_SIZE                        equ 0001h
TRISE_TRISE3_LENGTH                      equ 0001h
TRISE_TRISE3_MASK                        equ 0008h

// Register: LATA
#define LATA LATA
LATA                                     equ 0018h
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
LATB                                     equ 0019h
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
LATC                                     equ 001Ah
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

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 009Bh
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh
ADRESL_ADRESL0_POSN                      equ 0000h
ADRESL_ADRESL0_POSITION                  equ 0000h
ADRESL_ADRESL0_SIZE                      equ 0001h
ADRESL_ADRESL0_LENGTH                    equ 0001h
ADRESL_ADRESL0_MASK                      equ 0001h
ADRESL_ADRESL1_POSN                      equ 0001h
ADRESL_ADRESL1_POSITION                  equ 0001h
ADRESL_ADRESL1_SIZE                      equ 0001h
ADRESL_ADRESL1_LENGTH                    equ 0001h
ADRESL_ADRESL1_MASK                      equ 0002h
ADRESL_ADRESL2_POSN                      equ 0002h
ADRESL_ADRESL2_POSITION                  equ 0002h
ADRESL_ADRESL2_SIZE                      equ 0001h
ADRESL_ADRESL2_LENGTH                    equ 0001h
ADRESL_ADRESL2_MASK                      equ 0004h
ADRESL_ADRESL3_POSN                      equ 0003h
ADRESL_ADRESL3_POSITION                  equ 0003h
ADRESL_ADRESL3_SIZE                      equ 0001h
ADRESL_ADRESL3_LENGTH                    equ 0001h
ADRESL_ADRESL3_MASK                      equ 0008h
ADRESL_ADRESL4_POSN                      equ 0004h
ADRESL_ADRESL4_POSITION                  equ 0004h
ADRESL_ADRESL4_SIZE                      equ 0001h
ADRESL_ADRESL4_LENGTH                    equ 0001h
ADRESL_ADRESL4_MASK                      equ 0010h
ADRESL_ADRESL5_POSN                      equ 0005h
ADRESL_ADRESL5_POSITION                  equ 0005h
ADRESL_ADRESL5_SIZE                      equ 0001h
ADRESL_ADRESL5_LENGTH                    equ 0001h
ADRESL_ADRESL5_MASK                      equ 0020h
ADRESL_ADRESL6_POSN                      equ 0006h
ADRESL_ADRESL6_POSITION                  equ 0006h
ADRESL_ADRESL6_SIZE                      equ 0001h
ADRESL_ADRESL6_LENGTH                    equ 0001h
ADRESL_ADRESL6_MASK                      equ 0040h
ADRESL_ADRESL7_POSN                      equ 0007h
ADRESL_ADRESL7_POSITION                  equ 0007h
ADRESL_ADRESL7_SIZE                      equ 0001h
ADRESL_ADRESL7_LENGTH                    equ 0001h
ADRESL_ADRESL7_MASK                      equ 0080h

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 009Ch
// bitfield definitions
ADRESH_ADRESH_POSN                       equ 0000h
ADRESH_ADRESH_POSITION                   equ 0000h
ADRESH_ADRESH_SIZE                       equ 0008h
ADRESH_ADRESH_LENGTH                     equ 0008h
ADRESH_ADRESH_MASK                       equ 00FFh
ADRESH_ADRESH0_POSN                      equ 0000h
ADRESH_ADRESH0_POSITION                  equ 0000h
ADRESH_ADRESH0_SIZE                      equ 0001h
ADRESH_ADRESH0_LENGTH                    equ 0001h
ADRESH_ADRESH0_MASK                      equ 0001h
ADRESH_ADRESH1_POSN                      equ 0001h
ADRESH_ADRESH1_POSITION                  equ 0001h
ADRESH_ADRESH1_SIZE                      equ 0001h
ADRESH_ADRESH1_LENGTH                    equ 0001h
ADRESH_ADRESH1_MASK                      equ 0002h
ADRESH_ADRESH2_POSN                      equ 0002h
ADRESH_ADRESH2_POSITION                  equ 0002h
ADRESH_ADRESH2_SIZE                      equ 0001h
ADRESH_ADRESH2_LENGTH                    equ 0001h
ADRESH_ADRESH2_MASK                      equ 0004h
ADRESH_ADRESH3_POSN                      equ 0003h
ADRESH_ADRESH3_POSITION                  equ 0003h
ADRESH_ADRESH3_SIZE                      equ 0001h
ADRESH_ADRESH3_LENGTH                    equ 0001h
ADRESH_ADRESH3_MASK                      equ 0008h
ADRESH_ADRESH4_POSN                      equ 0004h
ADRESH_ADRESH4_POSITION                  equ 0004h
ADRESH_ADRESH4_SIZE                      equ 0001h
ADRESH_ADRESH4_LENGTH                    equ 0001h
ADRESH_ADRESH4_MASK                      equ 0010h
ADRESH_ADRESH5_POSN                      equ 0005h
ADRESH_ADRESH5_POSITION                  equ 0005h
ADRESH_ADRESH5_SIZE                      equ 0001h
ADRESH_ADRESH5_LENGTH                    equ 0001h
ADRESH_ADRESH5_MASK                      equ 0020h
ADRESH_ADRESH6_POSN                      equ 0006h
ADRESH_ADRESH6_POSITION                  equ 0006h
ADRESH_ADRESH6_SIZE                      equ 0001h
ADRESH_ADRESH6_LENGTH                    equ 0001h
ADRESH_ADRESH6_MASK                      equ 0040h
ADRESH_ADRESH7_POSN                      equ 0007h
ADRESH_ADRESH7_POSITION                  equ 0007h
ADRESH_ADRESH7_SIZE                      equ 0001h
ADRESH_ADRESH7_LENGTH                    equ 0001h
ADRESH_ADRESH7_MASK                      equ 0080h

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 009Dh
// bitfield definitions
ADCON0_ADON_POSN                         equ 0000h
ADCON0_ADON_POSITION                     equ 0000h
ADCON0_ADON_SIZE                         equ 0001h
ADCON0_ADON_LENGTH                       equ 0001h
ADCON0_ADON_MASK                         equ 0001h
ADCON0_GOnDONE_POSN                      equ 0001h
ADCON0_GOnDONE_POSITION                  equ 0001h
ADCON0_GOnDONE_SIZE                      equ 0001h
ADCON0_GOnDONE_LENGTH                    equ 0001h
ADCON0_GOnDONE_MASK                      equ 0002h
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
ADCON0_CHS_POSN                          equ 0002h
ADCON0_CHS_POSITION                      equ 0002h
ADCON0_CHS_SIZE                          equ 0006h
ADCON0_CHS_LENGTH                        equ 0006h
ADCON0_CHS_MASK                          equ 00FCh

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

// Register: ADACT
#define ADACT ADACT
ADACT                                    equ 009Fh
// bitfield definitions
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
ADACT_ADACT_POSN                         equ 0000h
ADACT_ADACT_POSITION                     equ 0000h
ADACT_ADACT_SIZE                         equ 0005h
ADACT_ADACT_LENGTH                       equ 0005h
ADACT_ADACT_MASK                         equ 001Fh

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

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
SSP2BUF                                  equ 0196h
// bitfield definitions
SSP2BUF_SSPBUF_POSN                      equ 0000h
SSP2BUF_SSPBUF_POSITION                  equ 0000h
SSP2BUF_SSPBUF_SIZE                      equ 0008h
SSP2BUF_SSPBUF_LENGTH                    equ 0008h
SSP2BUF_SSPBUF_MASK                      equ 00FFh

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
SSP2ADD                                  equ 0197h
// bitfield definitions
SSP2ADD_SSPADD_POSN                      equ 0000h
SSP2ADD_SSPADD_POSITION                  equ 0000h
SSP2ADD_SSPADD_SIZE                      equ 0008h
SSP2ADD_SSPADD_LENGTH                    equ 0008h
SSP2ADD_SSPADD_MASK                      equ 00FFh
SSP2ADD_MSK0_POSN                        equ 0000h
SSP2ADD_MSK0_POSITION                    equ 0000h
SSP2ADD_MSK0_SIZE                        equ 0001h
SSP2ADD_MSK0_LENGTH                      equ 0001h
SSP2ADD_MSK0_MASK                        equ 0001h
SSP2ADD_MSK1_POSN                        equ 0001h
SSP2ADD_MSK1_POSITION                    equ 0001h
SSP2ADD_MSK1_SIZE                        equ 0001h
SSP2ADD_MSK1_LENGTH                      equ 0001h
SSP2ADD_MSK1_MASK                        equ 0002h
SSP2ADD_MSK2_POSN                        equ 0002h
SSP2ADD_MSK2_POSITION                    equ 0002h
SSP2ADD_MSK2_SIZE                        equ 0001h
SSP2ADD_MSK2_LENGTH                      equ 0001h
SSP2ADD_MSK2_MASK                        equ 0004h
SSP2ADD_MSK3_POSN                        equ 0003h
SSP2ADD_MSK3_POSITION                    equ 0003h
SSP2ADD_MSK3_SIZE                        equ 0001h
SSP2ADD_MSK3_LENGTH                      equ 0001h
SSP2ADD_MSK3_MASK                        equ 0008h
SSP2ADD_MSK4_POSN                        equ 0004h
SSP2ADD_MSK4_POSITION                    equ 0004h
SSP2ADD_MSK4_SIZE                        equ 0001h
SSP2ADD_MSK4_LENGTH                      equ 0001h
SSP2ADD_MSK4_MASK                        equ 0010h
SSP2ADD_MSK5_POSN                        equ 0005h
SSP2ADD_MSK5_POSITION                    equ 0005h
SSP2ADD_MSK5_SIZE                        equ 0001h
SSP2ADD_MSK5_LENGTH                      equ 0001h
SSP2ADD_MSK5_MASK                        equ 0020h
SSP2ADD_MSK6_POSN                        equ 0006h
SSP2ADD_MSK6_POSITION                    equ 0006h
SSP2ADD_MSK6_SIZE                        equ 0001h
SSP2ADD_MSK6_LENGTH                      equ 0001h
SSP2ADD_MSK6_MASK                        equ 0040h
SSP2ADD_MSK7_POSN                        equ 0007h
SSP2ADD_MSK7_POSITION                    equ 0007h
SSP2ADD_MSK7_SIZE                        equ 0001h
SSP2ADD_MSK7_LENGTH                      equ 0001h
SSP2ADD_MSK7_MASK                        equ 0080h
SSP2ADD_MSK02_POSN                       equ 0000h
SSP2ADD_MSK02_POSITION                   equ 0000h
SSP2ADD_MSK02_SIZE                       equ 0001h
SSP2ADD_MSK02_LENGTH                     equ 0001h
SSP2ADD_MSK02_MASK                       equ 0001h
SSP2ADD_MSK12_POSN                       equ 0001h
SSP2ADD_MSK12_POSITION                   equ 0001h
SSP2ADD_MSK12_SIZE                       equ 0001h
SSP2ADD_MSK12_LENGTH                     equ 0001h
SSP2ADD_MSK12_MASK                       equ 0002h
SSP2ADD_MSK22_POSN                       equ 0002h
SSP2ADD_MSK22_POSITION                   equ 0002h
SSP2ADD_MSK22_SIZE                       equ 0001h
SSP2ADD_MSK22_LENGTH                     equ 0001h
SSP2ADD_MSK22_MASK                       equ 0004h
SSP2ADD_MSK32_POSN                       equ 0003h
SSP2ADD_MSK32_POSITION                   equ 0003h
SSP2ADD_MSK32_SIZE                       equ 0001h
SSP2ADD_MSK32_LENGTH                     equ 0001h
SSP2ADD_MSK32_MASK                       equ 0008h
SSP2ADD_MSK42_POSN                       equ 0004h
SSP2ADD_MSK42_POSITION                   equ 0004h
SSP2ADD_MSK42_SIZE                       equ 0001h
SSP2ADD_MSK42_LENGTH                     equ 0001h
SSP2ADD_MSK42_MASK                       equ 0010h
SSP2ADD_MSK52_POSN                       equ 0005h
SSP2ADD_MSK52_POSITION                   equ 0005h
SSP2ADD_MSK52_SIZE                       equ 0001h
SSP2ADD_MSK52_LENGTH                     equ 0001h
SSP2ADD_MSK52_MASK                       equ 0020h
SSP2ADD_MSK62_POSN                       equ 0006h
SSP2ADD_MSK62_POSITION                   equ 0006h
SSP2ADD_MSK62_SIZE                       equ 0001h
SSP2ADD_MSK62_LENGTH                     equ 0001h
SSP2ADD_MSK62_MASK                       equ 0040h
SSP2ADD_MSK72_POSN                       equ 0007h
SSP2ADD_MSK72_POSITION                   equ 0007h
SSP2ADD_MSK72_SIZE                       equ 0001h
SSP2ADD_MSK72_LENGTH                     equ 0001h
SSP2ADD_MSK72_MASK                       equ 0080h

// Register: SSP2MSK
#define SSP2MSK SSP2MSK
SSP2MSK                                  equ 0198h
// bitfield definitions
SSP2MSK_SSPMSK_POSN                      equ 0000h
SSP2MSK_SSPMSK_POSITION                  equ 0000h
SSP2MSK_SSPMSK_SIZE                      equ 0008h
SSP2MSK_SSPMSK_LENGTH                    equ 0008h
SSP2MSK_SSPMSK_MASK                      equ 00FFh
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

// Register: SSP2STAT
#define SSP2STAT SSP2STAT
SSP2STAT                                 equ 0199h
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
SSP2STAT_R_W_POSN                        equ 0002h
SSP2STAT_R_W_POSITION                    equ 0002h
SSP2STAT_R_W_SIZE                        equ 0001h
SSP2STAT_R_W_LENGTH                      equ 0001h
SSP2STAT_R_W_MASK                        equ 0004h
SSP2STAT_D_A_POSN                        equ 0005h
SSP2STAT_D_A_POSITION                    equ 0005h
SSP2STAT_D_A_SIZE                        equ 0001h
SSP2STAT_D_A_LENGTH                      equ 0001h
SSP2STAT_D_A_MASK                        equ 0020h
SSP2STAT_nW_POSN                         equ 0002h
SSP2STAT_nW_POSITION                     equ 0002h
SSP2STAT_nW_SIZE                         equ 0001h
SSP2STAT_nW_LENGTH                       equ 0001h
SSP2STAT_nW_MASK                         equ 0004h
SSP2STAT_nA_POSN                         equ 0005h
SSP2STAT_nA_POSITION                     equ 0005h
SSP2STAT_nA_SIZE                         equ 0001h
SSP2STAT_nA_LENGTH                       equ 0001h
SSP2STAT_nA_MASK                         equ 0020h
SSP2STAT_nWRITE_POSN                     equ 0002h
SSP2STAT_nWRITE_POSITION                 equ 0002h
SSP2STAT_nWRITE_SIZE                     equ 0001h
SSP2STAT_nWRITE_LENGTH                   equ 0001h
SSP2STAT_nWRITE_MASK                     equ 0004h
SSP2STAT_nADDRESS_POSN                   equ 0005h
SSP2STAT_nADDRESS_POSITION               equ 0005h
SSP2STAT_nADDRESS_SIZE                   equ 0001h
SSP2STAT_nADDRESS_LENGTH                 equ 0001h
SSP2STAT_nADDRESS_MASK                   equ 0020h
SSP2STAT_READ_WRITE_POSN                 equ 0002h
SSP2STAT_READ_WRITE_POSITION             equ 0002h
SSP2STAT_READ_WRITE_SIZE                 equ 0001h
SSP2STAT_READ_WRITE_LENGTH               equ 0001h
SSP2STAT_READ_WRITE_MASK                 equ 0004h
SSP2STAT_DATA_ADDRESS_POSN               equ 0005h
SSP2STAT_DATA_ADDRESS_POSITION           equ 0005h
SSP2STAT_DATA_ADDRESS_SIZE               equ 0001h
SSP2STAT_DATA_ADDRESS_LENGTH             equ 0001h
SSP2STAT_DATA_ADDRESS_MASK               equ 0020h
SSP2STAT_I2C_READ_POSN                   equ 0002h
SSP2STAT_I2C_READ_POSITION               equ 0002h
SSP2STAT_I2C_READ_SIZE                   equ 0001h
SSP2STAT_I2C_READ_LENGTH                 equ 0001h
SSP2STAT_I2C_READ_MASK                   equ 0004h
SSP2STAT_I2C_START_POSN                  equ 0003h
SSP2STAT_I2C_START_POSITION              equ 0003h
SSP2STAT_I2C_START_SIZE                  equ 0001h
SSP2STAT_I2C_START_LENGTH                equ 0001h
SSP2STAT_I2C_START_MASK                  equ 0008h
SSP2STAT_I2C_STOP_POSN                   equ 0004h
SSP2STAT_I2C_STOP_POSITION               equ 0004h
SSP2STAT_I2C_STOP_SIZE                   equ 0001h
SSP2STAT_I2C_STOP_LENGTH                 equ 0001h
SSP2STAT_I2C_STOP_MASK                   equ 0010h
SSP2STAT_I2C_DAT_POSN                    equ 0005h
SSP2STAT_I2C_DAT_POSITION                equ 0005h
SSP2STAT_I2C_DAT_SIZE                    equ 0001h
SSP2STAT_I2C_DAT_LENGTH                  equ 0001h
SSP2STAT_I2C_DAT_MASK                    equ 0020h
SSP2STAT_BF2_POSN                        equ 0000h
SSP2STAT_BF2_POSITION                    equ 0000h
SSP2STAT_BF2_SIZE                        equ 0001h
SSP2STAT_BF2_LENGTH                      equ 0001h
SSP2STAT_BF2_MASK                        equ 0001h
SSP2STAT_UA2_POSN                        equ 0001h
SSP2STAT_UA2_POSITION                    equ 0001h
SSP2STAT_UA2_SIZE                        equ 0001h
SSP2STAT_UA2_LENGTH                      equ 0001h
SSP2STAT_UA2_MASK                        equ 0002h
SSP2STAT_R_POSN                          equ 0002h
SSP2STAT_R_POSITION                      equ 0002h
SSP2STAT_R_SIZE                          equ 0001h
SSP2STAT_R_LENGTH                        equ 0001h
SSP2STAT_R_MASK                          equ 0004h
SSP2STAT_START_POSN                      equ 0003h
SSP2STAT_START_POSITION                  equ 0003h
SSP2STAT_START_SIZE                      equ 0001h
SSP2STAT_START_LENGTH                    equ 0001h
SSP2STAT_START_MASK                      equ 0008h
SSP2STAT_STOP_POSN                       equ 0004h
SSP2STAT_STOP_POSITION                   equ 0004h
SSP2STAT_STOP_SIZE                       equ 0001h
SSP2STAT_STOP_LENGTH                     equ 0001h
SSP2STAT_STOP_MASK                       equ 0010h
SSP2STAT_D_POSN                          equ 0005h
SSP2STAT_D_POSITION                      equ 0005h
SSP2STAT_D_SIZE                          equ 0001h
SSP2STAT_D_LENGTH                        equ 0001h
SSP2STAT_D_MASK                          equ 0020h
SSP2STAT_CKE2_POSN                       equ 0006h
SSP2STAT_CKE2_POSITION                   equ 0006h
SSP2STAT_CKE2_SIZE                       equ 0001h
SSP2STAT_CKE2_LENGTH                     equ 0001h
SSP2STAT_CKE2_MASK                       equ 0040h
SSP2STAT_SMP2_POSN                       equ 0007h
SSP2STAT_SMP2_POSITION                   equ 0007h
SSP2STAT_SMP2_SIZE                       equ 0001h
SSP2STAT_SMP2_LENGTH                     equ 0001h
SSP2STAT_SMP2_MASK                       equ 0080h
SSP2STAT_RW_POSN                         equ 0002h
SSP2STAT_RW_POSITION                     equ 0002h
SSP2STAT_RW_SIZE                         equ 0001h
SSP2STAT_RW_LENGTH                       equ 0001h
SSP2STAT_RW_MASK                         equ 0004h
SSP2STAT_START2_POSN                     equ 0003h
SSP2STAT_START2_POSITION                 equ 0003h
SSP2STAT_START2_SIZE                     equ 0001h
SSP2STAT_START2_LENGTH                   equ 0001h
SSP2STAT_START2_MASK                     equ 0008h
SSP2STAT_STOP2_POSN                      equ 0004h
SSP2STAT_STOP2_POSITION                  equ 0004h
SSP2STAT_STOP2_SIZE                      equ 0001h
SSP2STAT_STOP2_LENGTH                    equ 0001h
SSP2STAT_STOP2_MASK                      equ 0010h
SSP2STAT_DA_POSN                         equ 0005h
SSP2STAT_DA_POSITION                     equ 0005h
SSP2STAT_DA_SIZE                         equ 0001h
SSP2STAT_DA_LENGTH                       equ 0001h
SSP2STAT_DA_MASK                         equ 0020h
SSP2STAT_RW2_POSN                        equ 0002h
SSP2STAT_RW2_POSITION                    equ 0002h
SSP2STAT_RW2_SIZE                        equ 0001h
SSP2STAT_RW2_LENGTH                      equ 0001h
SSP2STAT_RW2_MASK                        equ 0004h
SSP2STAT_I2C_START2_POSN                 equ 0003h
SSP2STAT_I2C_START2_POSITION             equ 0003h
SSP2STAT_I2C_START2_SIZE                 equ 0001h
SSP2STAT_I2C_START2_LENGTH               equ 0001h
SSP2STAT_I2C_START2_MASK                 equ 0008h
SSP2STAT_I2C_STOP2_POSN                  equ 0004h
SSP2STAT_I2C_STOP2_POSITION              equ 0004h
SSP2STAT_I2C_STOP2_SIZE                  equ 0001h
SSP2STAT_I2C_STOP2_LENGTH                equ 0001h
SSP2STAT_I2C_STOP2_MASK                  equ 0010h
SSP2STAT_DA2_POSN                        equ 0005h
SSP2STAT_DA2_POSITION                    equ 0005h
SSP2STAT_DA2_SIZE                        equ 0001h
SSP2STAT_DA2_LENGTH                      equ 0001h
SSP2STAT_DA2_MASK                        equ 0020h
SSP2STAT_I2C_READ2_POSN                  equ 0002h
SSP2STAT_I2C_READ2_POSITION              equ 0002h
SSP2STAT_I2C_READ2_SIZE                  equ 0001h
SSP2STAT_I2C_READ2_LENGTH                equ 0001h
SSP2STAT_I2C_READ2_MASK                  equ 0004h
SSP2STAT_S2_POSN                         equ 0003h
SSP2STAT_S2_POSITION                     equ 0003h
SSP2STAT_S2_SIZE                         equ 0001h
SSP2STAT_S2_LENGTH                       equ 0001h
SSP2STAT_S2_MASK                         equ 0008h
SSP2STAT_P2_POSN                         equ 0004h
SSP2STAT_P2_POSITION                     equ 0004h
SSP2STAT_P2_SIZE                         equ 0001h
SSP2STAT_P2_LENGTH                       equ 0001h
SSP2STAT_P2_MASK                         equ 0010h
SSP2STAT_DATA_ADDRESS2_POSN              equ 0005h
SSP2STAT_DATA_ADDRESS2_POSITION          equ 0005h
SSP2STAT_DATA_ADDRESS2_SIZE              equ 0001h
SSP2STAT_DATA_ADDRESS2_LENGTH            equ 0001h
SSP2STAT_DATA_ADDRESS2_MASK              equ 0020h
SSP2STAT_READ_WRITE2_POSN                equ 0002h
SSP2STAT_READ_WRITE2_POSITION            equ 0002h
SSP2STAT_READ_WRITE2_SIZE                equ 0001h
SSP2STAT_READ_WRITE2_LENGTH              equ 0001h
SSP2STAT_READ_WRITE2_MASK                equ 0004h
SSP2STAT_D_A2_POSN                       equ 0005h
SSP2STAT_D_A2_POSITION                   equ 0005h
SSP2STAT_D_A2_SIZE                       equ 0001h
SSP2STAT_D_A2_LENGTH                     equ 0001h
SSP2STAT_D_A2_MASK                       equ 0020h
SSP2STAT_R_W2_POSN                       equ 0002h
SSP2STAT_R_W2_POSITION                   equ 0002h
SSP2STAT_R_W2_SIZE                       equ 0001h
SSP2STAT_R_W2_LENGTH                     equ 0001h
SSP2STAT_R_W2_MASK                       equ 0004h
SSP2STAT_D_nA2_POSN                      equ 0005h
SSP2STAT_D_nA2_POSITION                  equ 0005h
SSP2STAT_D_nA2_SIZE                      equ 0001h
SSP2STAT_D_nA2_LENGTH                    equ 0001h
SSP2STAT_D_nA2_MASK                      equ 0020h
SSP2STAT_R_nW2_POSN                      equ 0002h
SSP2STAT_R_nW2_POSITION                  equ 0002h
SSP2STAT_R_nW2_SIZE                      equ 0001h
SSP2STAT_R_nW2_LENGTH                    equ 0001h
SSP2STAT_R_nW2_MASK                      equ 0004h
SSP2STAT_I2C_DAT2_POSN                   equ 0005h
SSP2STAT_I2C_DAT2_POSITION               equ 0005h
SSP2STAT_I2C_DAT2_SIZE                   equ 0001h
SSP2STAT_I2C_DAT2_LENGTH                 equ 0001h
SSP2STAT_I2C_DAT2_MASK                   equ 0020h
SSP2STAT_nW2_POSN                        equ 0002h
SSP2STAT_nW2_POSITION                    equ 0002h
SSP2STAT_nW2_SIZE                        equ 0001h
SSP2STAT_nW2_LENGTH                      equ 0001h
SSP2STAT_nW2_MASK                        equ 0004h
SSP2STAT_nA2_POSN                        equ 0005h
SSP2STAT_nA2_POSITION                    equ 0005h
SSP2STAT_nA2_SIZE                        equ 0001h
SSP2STAT_nA2_LENGTH                      equ 0001h
SSP2STAT_nA2_MASK                        equ 0020h
SSP2STAT_nWRITE2_POSN                    equ 0002h
SSP2STAT_nWRITE2_POSITION                equ 0002h
SSP2STAT_nWRITE2_SIZE                    equ 0001h
SSP2STAT_nWRITE2_LENGTH                  equ 0001h
SSP2STAT_nWRITE2_MASK                    equ 0004h
SSP2STAT_nADDRESS2_POSN                  equ 0005h
SSP2STAT_nADDRESS2_POSITION              equ 0005h
SSP2STAT_nADDRESS2_SIZE                  equ 0001h
SSP2STAT_nADDRESS2_LENGTH                equ 0001h
SSP2STAT_nADDRESS2_MASK                  equ 0020h

// Register: SSP2CON1
#define SSP2CON1 SSP2CON1
SSP2CON1                                 equ 019Ah
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
SSP2CON1_SSPM02_POSN                     equ 0000h
SSP2CON1_SSPM02_POSITION                 equ 0000h
SSP2CON1_SSPM02_SIZE                     equ 0001h
SSP2CON1_SSPM02_LENGTH                   equ 0001h
SSP2CON1_SSPM02_MASK                     equ 0001h
SSP2CON1_SSPM12_POSN                     equ 0001h
SSP2CON1_SSPM12_POSITION                 equ 0001h
SSP2CON1_SSPM12_SIZE                     equ 0001h
SSP2CON1_SSPM12_LENGTH                   equ 0001h
SSP2CON1_SSPM12_MASK                     equ 0002h
SSP2CON1_SSPM22_POSN                     equ 0002h
SSP2CON1_SSPM22_POSITION                 equ 0002h
SSP2CON1_SSPM22_SIZE                     equ 0001h
SSP2CON1_SSPM22_LENGTH                   equ 0001h
SSP2CON1_SSPM22_MASK                     equ 0004h
SSP2CON1_SSPM32_POSN                     equ 0003h
SSP2CON1_SSPM32_POSITION                 equ 0003h
SSP2CON1_SSPM32_SIZE                     equ 0001h
SSP2CON1_SSPM32_LENGTH                   equ 0001h
SSP2CON1_SSPM32_MASK                     equ 0008h
SSP2CON1_CKP2_POSN                       equ 0004h
SSP2CON1_CKP2_POSITION                   equ 0004h
SSP2CON1_CKP2_SIZE                       equ 0001h
SSP2CON1_CKP2_LENGTH                     equ 0001h
SSP2CON1_CKP2_MASK                       equ 0010h
SSP2CON1_SSPEN2_POSN                     equ 0005h
SSP2CON1_SSPEN2_POSITION                 equ 0005h
SSP2CON1_SSPEN2_SIZE                     equ 0001h
SSP2CON1_SSPEN2_LENGTH                   equ 0001h
SSP2CON1_SSPEN2_MASK                     equ 0020h
SSP2CON1_SSPOV2_POSN                     equ 0006h
SSP2CON1_SSPOV2_POSITION                 equ 0006h
SSP2CON1_SSPOV2_SIZE                     equ 0001h
SSP2CON1_SSPOV2_LENGTH                   equ 0001h
SSP2CON1_SSPOV2_MASK                     equ 0040h
SSP2CON1_WCOL2_POSN                      equ 0007h
SSP2CON1_WCOL2_POSITION                  equ 0007h
SSP2CON1_WCOL2_SIZE                      equ 0001h
SSP2CON1_WCOL2_LENGTH                    equ 0001h
SSP2CON1_WCOL2_MASK                      equ 0080h

// Register: SSP2CON2
#define SSP2CON2 SSP2CON2
SSP2CON2                                 equ 019Bh
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
SSP2CON2_ADMSK_POSN                      equ 0001h
SSP2CON2_ADMSK_POSITION                  equ 0001h
SSP2CON2_ADMSK_SIZE                      equ 0005h
SSP2CON2_ADMSK_LENGTH                    equ 0005h
SSP2CON2_ADMSK_MASK                      equ 003Eh
SSP2CON2_ADMSK1_POSN                     equ 0001h
SSP2CON2_ADMSK1_POSITION                 equ 0001h
SSP2CON2_ADMSK1_SIZE                     equ 0001h
SSP2CON2_ADMSK1_LENGTH                   equ 0001h
SSP2CON2_ADMSK1_MASK                     equ 0002h
SSP2CON2_ADMSK2_POSN                     equ 0002h
SSP2CON2_ADMSK2_POSITION                 equ 0002h
SSP2CON2_ADMSK2_SIZE                     equ 0001h
SSP2CON2_ADMSK2_LENGTH                   equ 0001h
SSP2CON2_ADMSK2_MASK                     equ 0004h
SSP2CON2_ADMSK3_POSN                     equ 0003h
SSP2CON2_ADMSK3_POSITION                 equ 0003h
SSP2CON2_ADMSK3_SIZE                     equ 0001h
SSP2CON2_ADMSK3_LENGTH                   equ 0001h
SSP2CON2_ADMSK3_MASK                     equ 0008h
SSP2CON2_ADMSK4_POSN                     equ 0004h
SSP2CON2_ADMSK4_POSITION                 equ 0004h
SSP2CON2_ADMSK4_SIZE                     equ 0001h
SSP2CON2_ADMSK4_LENGTH                   equ 0001h
SSP2CON2_ADMSK4_MASK                     equ 0010h
SSP2CON2_ADMSK5_POSN                     equ 0005h
SSP2CON2_ADMSK5_POSITION                 equ 0005h
SSP2CON2_ADMSK5_SIZE                     equ 0001h
SSP2CON2_ADMSK5_LENGTH                   equ 0001h
SSP2CON2_ADMSK5_MASK                     equ 0020h
SSP2CON2_SEN2_POSN                       equ 0000h
SSP2CON2_SEN2_POSITION                   equ 0000h
SSP2CON2_SEN2_SIZE                       equ 0001h
SSP2CON2_SEN2_LENGTH                     equ 0001h
SSP2CON2_SEN2_MASK                       equ 0001h
SSP2CON2_ADMSK12_POSN                    equ 0001h
SSP2CON2_ADMSK12_POSITION                equ 0001h
SSP2CON2_ADMSK12_SIZE                    equ 0001h
SSP2CON2_ADMSK12_LENGTH                  equ 0001h
SSP2CON2_ADMSK12_MASK                    equ 0002h
SSP2CON2_ADMSK22_POSN                    equ 0002h
SSP2CON2_ADMSK22_POSITION                equ 0002h
SSP2CON2_ADMSK22_SIZE                    equ 0001h
SSP2CON2_ADMSK22_LENGTH                  equ 0001h
SSP2CON2_ADMSK22_MASK                    equ 0004h
SSP2CON2_ADMSK32_POSN                    equ 0003h
SSP2CON2_ADMSK32_POSITION                equ 0003h
SSP2CON2_ADMSK32_SIZE                    equ 0001h
SSP2CON2_ADMSK32_LENGTH                  equ 0001h
SSP2CON2_ADMSK32_MASK                    equ 0008h
SSP2CON2_ACKEN2_POSN                     equ 0004h
SSP2CON2_ACKEN2_POSITION                 equ 0004h
SSP2CON2_ACKEN2_SIZE                     equ 0001h
SSP2CON2_ACKEN2_LENGTH                   equ 0001h
SSP2CON2_ACKEN2_MASK                     equ 0010h
SSP2CON2_ACKDT2_POSN                     equ 0005h
SSP2CON2_ACKDT2_POSITION                 equ 0005h
SSP2CON2_ACKDT2_SIZE                     equ 0001h
SSP2CON2_ACKDT2_LENGTH                   equ 0001h
SSP2CON2_ACKDT2_MASK                     equ 0020h
SSP2CON2_ACKSTAT2_POSN                   equ 0006h
SSP2CON2_ACKSTAT2_POSITION               equ 0006h
SSP2CON2_ACKSTAT2_SIZE                   equ 0001h
SSP2CON2_ACKSTAT2_LENGTH                 equ 0001h
SSP2CON2_ACKSTAT2_MASK                   equ 0040h
SSP2CON2_GCEN2_POSN                      equ 0007h
SSP2CON2_GCEN2_POSITION                  equ 0007h
SSP2CON2_GCEN2_SIZE                      equ 0001h
SSP2CON2_GCEN2_LENGTH                    equ 0001h
SSP2CON2_GCEN2_MASK                      equ 0080h
SSP2CON2_RSEN2_POSN                      equ 0001h
SSP2CON2_RSEN2_POSITION                  equ 0001h
SSP2CON2_RSEN2_SIZE                      equ 0001h
SSP2CON2_RSEN2_LENGTH                    equ 0001h
SSP2CON2_RSEN2_MASK                      equ 0002h
SSP2CON2_PEN2_POSN                       equ 0002h
SSP2CON2_PEN2_POSITION                   equ 0002h
SSP2CON2_PEN2_SIZE                       equ 0001h
SSP2CON2_PEN2_LENGTH                     equ 0001h
SSP2CON2_PEN2_MASK                       equ 0004h
SSP2CON2_RCEN2_POSN                      equ 0003h
SSP2CON2_RCEN2_POSITION                  equ 0003h
SSP2CON2_RCEN2_SIZE                      equ 0001h
SSP2CON2_RCEN2_LENGTH                    equ 0001h
SSP2CON2_RCEN2_MASK                      equ 0008h
SSP2CON2_ADMSK42_POSN                    equ 0004h
SSP2CON2_ADMSK42_POSITION                equ 0004h
SSP2CON2_ADMSK42_SIZE                    equ 0001h
SSP2CON2_ADMSK42_LENGTH                  equ 0001h
SSP2CON2_ADMSK42_MASK                    equ 0010h
SSP2CON2_ADMSK52_POSN                    equ 0005h
SSP2CON2_ADMSK52_POSITION                equ 0005h
SSP2CON2_ADMSK52_SIZE                    equ 0001h
SSP2CON2_ADMSK52_LENGTH                  equ 0001h
SSP2CON2_ADMSK52_MASK                    equ 0020h

// Register: SSP2CON3
#define SSP2CON3 SSP2CON3
SSP2CON3                                 equ 019Ch
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

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 020Ch
// bitfield definitions
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
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh
TMR1L_TMR10_POSN                         equ 0000h
TMR1L_TMR10_POSITION                     equ 0000h
TMR1L_TMR10_SIZE                         equ 0001h
TMR1L_TMR10_LENGTH                       equ 0001h
TMR1L_TMR10_MASK                         equ 0001h
TMR1L_TMR11_POSN                         equ 0001h
TMR1L_TMR11_POSITION                     equ 0001h
TMR1L_TMR11_SIZE                         equ 0001h
TMR1L_TMR11_LENGTH                       equ 0001h
TMR1L_TMR11_MASK                         equ 0002h
TMR1L_TMR12_POSN                         equ 0002h
TMR1L_TMR12_POSITION                     equ 0002h
TMR1L_TMR12_SIZE                         equ 0001h
TMR1L_TMR12_LENGTH                       equ 0001h
TMR1L_TMR12_MASK                         equ 0004h
TMR1L_TMR13_POSN                         equ 0003h
TMR1L_TMR13_POSITION                     equ 0003h
TMR1L_TMR13_SIZE                         equ 0001h
TMR1L_TMR13_LENGTH                       equ 0001h
TMR1L_TMR13_MASK                         equ 0008h
TMR1L_TMR14_POSN                         equ 0004h
TMR1L_TMR14_POSITION                     equ 0004h
TMR1L_TMR14_SIZE                         equ 0001h
TMR1L_TMR14_LENGTH                       equ 0001h
TMR1L_TMR14_MASK                         equ 0010h
TMR1L_TMR15_POSN                         equ 0005h
TMR1L_TMR15_POSITION                     equ 0005h
TMR1L_TMR15_SIZE                         equ 0001h
TMR1L_TMR15_LENGTH                       equ 0001h
TMR1L_TMR15_MASK                         equ 0020h
TMR1L_TMR16_POSN                         equ 0006h
TMR1L_TMR16_POSITION                     equ 0006h
TMR1L_TMR16_SIZE                         equ 0001h
TMR1L_TMR16_LENGTH                       equ 0001h
TMR1L_TMR16_MASK                         equ 0040h
TMR1L_TMR17_POSN                         equ 0007h
TMR1L_TMR17_POSITION                     equ 0007h
TMR1L_TMR17_SIZE                         equ 0001h
TMR1L_TMR17_LENGTH                       equ 0001h
TMR1L_TMR17_MASK                         equ 0080h
TMR1L_CAL01_POSN                         equ 0000h
TMR1L_CAL01_POSITION                     equ 0000h
TMR1L_CAL01_SIZE                         equ 0001h
TMR1L_CAL01_LENGTH                       equ 0001h
TMR1L_CAL01_MASK                         equ 0001h
TMR1L_CAL11_POSN                         equ 0001h
TMR1L_CAL11_POSITION                     equ 0001h
TMR1L_CAL11_SIZE                         equ 0001h
TMR1L_CAL11_LENGTH                       equ 0001h
TMR1L_CAL11_MASK                         equ 0002h
TMR1L_CAL21_POSN                         equ 0002h
TMR1L_CAL21_POSITION                     equ 0002h
TMR1L_CAL21_SIZE                         equ 0001h
TMR1L_CAL21_LENGTH                       equ 0001h
TMR1L_CAL21_MASK                         equ 0004h
TMR1L_CAL31_POSN                         equ 0003h
TMR1L_CAL31_POSITION                     equ 0003h
TMR1L_CAL31_SIZE                         equ 0001h
TMR1L_CAL31_LENGTH                       equ 0001h
TMR1L_CAL31_MASK                         equ 0008h
TMR1L_CAL41_POSN                         equ 0004h
TMR1L_CAL41_POSITION                     equ 0004h
TMR1L_CAL41_SIZE                         equ 0001h
TMR1L_CAL41_LENGTH                       equ 0001h
TMR1L_CAL41_MASK                         equ 0010h
TMR1L_CAL51_POSN                         equ 0005h
TMR1L_CAL51_POSITION                     equ 0005h
TMR1L_CAL51_SIZE                         equ 0001h
TMR1L_CAL51_LENGTH                       equ 0001h
TMR1L_CAL51_MASK                         equ 0020h
TMR1L_CAL61_POSN                         equ 0006h
TMR1L_CAL61_POSITION                     equ 0006h
TMR1L_CAL61_SIZE                         equ 0001h
TMR1L_CAL61_LENGTH                       equ 0001h
TMR1L_CAL61_MASK                         equ 0040h
TMR1L_CAL71_POSN                         equ 0007h
TMR1L_CAL71_POSITION                     equ 0007h
TMR1L_CAL71_SIZE                         equ 0001h
TMR1L_CAL71_LENGTH                       equ 0001h
TMR1L_CAL71_MASK                         equ 0080h

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 020Dh
// bitfield definitions
TMR1H_TMR1H0_POSN                        equ 0000h
TMR1H_TMR1H0_POSITION                    equ 0000h
TMR1H_TMR1H0_SIZE                        equ 0001h
TMR1H_TMR1H0_LENGTH                      equ 0001h
TMR1H_TMR1H0_MASK                        equ 0001h
TMR1H_TMR1H1_POSN                        equ 0001h
TMR1H_TMR1H1_POSITION                    equ 0001h
TMR1H_TMR1H1_SIZE                        equ 0001h
TMR1H_TMR1H1_LENGTH                      equ 0001h
TMR1H_TMR1H1_MASK                        equ 0002h
TMR1H_TMR1H2_POSN                        equ 0002h
TMR1H_TMR1H2_POSITION                    equ 0002h
TMR1H_TMR1H2_SIZE                        equ 0001h
TMR1H_TMR1H2_LENGTH                      equ 0001h
TMR1H_TMR1H2_MASK                        equ 0004h
TMR1H_TMR1H3_POSN                        equ 0003h
TMR1H_TMR1H3_POSITION                    equ 0003h
TMR1H_TMR1H3_SIZE                        equ 0001h
TMR1H_TMR1H3_LENGTH                      equ 0001h
TMR1H_TMR1H3_MASK                        equ 0008h
TMR1H_TMR1H4_POSN                        equ 0004h
TMR1H_TMR1H4_POSITION                    equ 0004h
TMR1H_TMR1H4_SIZE                        equ 0001h
TMR1H_TMR1H4_LENGTH                      equ 0001h
TMR1H_TMR1H4_MASK                        equ 0010h
TMR1H_TMR1H5_POSN                        equ 0005h
TMR1H_TMR1H5_POSITION                    equ 0005h
TMR1H_TMR1H5_SIZE                        equ 0001h
TMR1H_TMR1H5_LENGTH                      equ 0001h
TMR1H_TMR1H5_MASK                        equ 0020h
TMR1H_TMR1H6_POSN                        equ 0006h
TMR1H_TMR1H6_POSITION                    equ 0006h
TMR1H_TMR1H6_SIZE                        equ 0001h
TMR1H_TMR1H6_LENGTH                      equ 0001h
TMR1H_TMR1H6_MASK                        equ 0040h
TMR1H_TMR1H7_POSN                        equ 0007h
TMR1H_TMR1H7_POSITION                    equ 0007h
TMR1H_TMR1H7_SIZE                        equ 0001h
TMR1H_TMR1H7_LENGTH                      equ 0001h
TMR1H_TMR1H7_MASK                        equ 0080h
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh
TMR1H_TMR18_POSN                         equ 0000h
TMR1H_TMR18_POSITION                     equ 0000h
TMR1H_TMR18_SIZE                         equ 0001h
TMR1H_TMR18_LENGTH                       equ 0001h
TMR1H_TMR18_MASK                         equ 0001h
TMR1H_TMR19_POSN                         equ 0001h
TMR1H_TMR19_POSITION                     equ 0001h
TMR1H_TMR19_SIZE                         equ 0001h
TMR1H_TMR19_LENGTH                       equ 0001h
TMR1H_TMR19_MASK                         equ 0002h
TMR1H_TMR110_POSN                        equ 0002h
TMR1H_TMR110_POSITION                    equ 0002h
TMR1H_TMR110_SIZE                        equ 0001h
TMR1H_TMR110_LENGTH                      equ 0001h
TMR1H_TMR110_MASK                        equ 0004h
TMR1H_TMR111_POSN                        equ 0003h
TMR1H_TMR111_POSITION                    equ 0003h
TMR1H_TMR111_SIZE                        equ 0001h
TMR1H_TMR111_LENGTH                      equ 0001h
TMR1H_TMR111_MASK                        equ 0008h
TMR1H_TMR112_POSN                        equ 0004h
TMR1H_TMR112_POSITION                    equ 0004h
TMR1H_TMR112_SIZE                        equ 0001h
TMR1H_TMR112_LENGTH                      equ 0001h
TMR1H_TMR112_MASK                        equ 0010h
TMR1H_TMR113_POSN                        equ 0005h
TMR1H_TMR113_POSITION                    equ 0005h
TMR1H_TMR113_SIZE                        equ 0001h
TMR1H_TMR113_LENGTH                      equ 0001h
TMR1H_TMR113_MASK                        equ 0020h
TMR1H_TMR114_POSN                        equ 0006h
TMR1H_TMR114_POSITION                    equ 0006h
TMR1H_TMR114_SIZE                        equ 0001h
TMR1H_TMR114_LENGTH                      equ 0001h
TMR1H_TMR114_MASK                        equ 0040h
TMR1H_TMR115_POSN                        equ 0007h
TMR1H_TMR115_POSITION                    equ 0007h
TMR1H_TMR115_SIZE                        equ 0001h
TMR1H_TMR115_LENGTH                      equ 0001h
TMR1H_TMR115_MASK                        equ 0080h

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
T1CON_TMR1ON_POSN                        equ 0000h
T1CON_TMR1ON_POSITION                    equ 0000h
T1CON_TMR1ON_SIZE                        equ 0001h
T1CON_TMR1ON_LENGTH                      equ 0001h
T1CON_TMR1ON_MASK                        equ 0001h
T1CON_T1RD16_POSN                        equ 0001h
T1CON_T1RD16_POSITION                    equ 0001h
T1CON_T1RD16_SIZE                        equ 0001h
T1CON_T1RD16_LENGTH                      equ 0001h
T1CON_T1RD16_MASK                        equ 0002h
T1CON_nT1SYNC_POSN                       equ 0002h
T1CON_nT1SYNC_POSITION                   equ 0002h
T1CON_nT1SYNC_SIZE                       equ 0001h
T1CON_nT1SYNC_LENGTH                     equ 0001h
T1CON_nT1SYNC_MASK                       equ 0004h
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
T1CON_CKPS0_POSN                         equ 0004h
T1CON_CKPS0_POSITION                     equ 0004h
T1CON_CKPS0_SIZE                         equ 0001h
T1CON_CKPS0_LENGTH                       equ 0001h
T1CON_CKPS0_MASK                         equ 0010h
T1CON_CKPS1_POSN                         equ 0005h
T1CON_CKPS1_POSITION                     equ 0005h
T1CON_CKPS1_SIZE                         equ 0001h
T1CON_CKPS1_LENGTH                       equ 0001h
T1CON_CKPS1_MASK                         equ 0020h
T1CON_RD161_POSN                         equ 0001h
T1CON_RD161_POSITION                     equ 0001h
T1CON_RD161_SIZE                         equ 0001h
T1CON_RD161_LENGTH                       equ 0001h
T1CON_RD161_MASK                         equ 0002h

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
T1GCON_T1GE_POSN                         equ 0007h
T1GCON_T1GE_POSITION                     equ 0007h
T1GCON_T1GE_SIZE                         equ 0001h
T1GCON_T1GE_LENGTH                       equ 0001h
T1GCON_T1GE_MASK                         equ 0080h
T1GCON_T1GGO_POSN                        equ 0003h
T1GCON_T1GGO_POSITION                    equ 0003h
T1GCON_T1GGO_SIZE                        equ 0001h
T1GCON_T1GGO_LENGTH                      equ 0001h
T1GCON_T1GGO_MASK                        equ 0008h

// Register: T1GATE
#define T1GATE T1GATE
T1GATE                                   equ 0210h
// bitfield definitions
T1GATE_GSS_POSN                          equ 0000h
T1GATE_GSS_POSITION                      equ 0000h
T1GATE_GSS_SIZE                          equ 0005h
T1GATE_GSS_LENGTH                        equ 0005h
T1GATE_GSS_MASK                          equ 001Fh
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
T1GATE_GSS4_POSN                         equ 0004h
T1GATE_GSS4_POSITION                     equ 0004h
T1GATE_GSS4_SIZE                         equ 0001h
T1GATE_GSS4_LENGTH                       equ 0001h
T1GATE_GSS4_MASK                         equ 0010h
T1GATE_T1GSS0_POSN                       equ 0000h
T1GATE_T1GSS0_POSITION                   equ 0000h
T1GATE_T1GSS0_SIZE                       equ 0001h
T1GATE_T1GSS0_LENGTH                     equ 0001h
T1GATE_T1GSS0_MASK                       equ 0001h
T1GATE_T1GSS1_POSN                       equ 0001h
T1GATE_T1GSS1_POSITION                   equ 0001h
T1GATE_T1GSS1_SIZE                       equ 0001h
T1GATE_T1GSS1_LENGTH                     equ 0001h
T1GATE_T1GSS1_MASK                       equ 0002h
T1GATE_T1GSS2_POSN                       equ 0002h
T1GATE_T1GSS2_POSITION                   equ 0002h
T1GATE_T1GSS2_SIZE                       equ 0001h
T1GATE_T1GSS2_LENGTH                     equ 0001h
T1GATE_T1GSS2_MASK                       equ 0004h
T1GATE_T1GSS3_POSN                       equ 0003h
T1GATE_T1GSS3_POSITION                   equ 0003h
T1GATE_T1GSS3_SIZE                       equ 0001h
T1GATE_T1GSS3_LENGTH                     equ 0001h
T1GATE_T1GSS3_MASK                       equ 0008h
T1GATE_T1GSS4_POSN                       equ 0004h
T1GATE_T1GSS4_POSITION                   equ 0004h
T1GATE_T1GSS4_SIZE                       equ 0001h
T1GATE_T1GSS4_LENGTH                     equ 0001h
T1GATE_T1GSS4_MASK                       equ 0010h

// Register: T1CLK
#define T1CLK T1CLK
T1CLK                                    equ 0211h
// bitfield definitions
T1CLK_CS_POSN                            equ 0000h
T1CLK_CS_POSITION                        equ 0000h
T1CLK_CS_SIZE                            equ 0004h
T1CLK_CS_LENGTH                          equ 0004h
T1CLK_CS_MASK                            equ 000Fh
T1CLK_T1CS0_POSN                         equ 0000h
T1CLK_T1CS0_POSITION                     equ 0000h
T1CLK_T1CS0_SIZE                         equ 0001h
T1CLK_T1CS0_LENGTH                       equ 0001h
T1CLK_T1CS0_MASK                         equ 0001h
T1CLK_T1CS1_POSN                         equ 0001h
T1CLK_T1CS1_POSITION                     equ 0001h
T1CLK_T1CS1_SIZE                         equ 0001h
T1CLK_T1CS1_LENGTH                       equ 0001h
T1CLK_T1CS1_MASK                         equ 0002h
T1CLK_T1CS2_POSN                         equ 0002h
T1CLK_T1CS2_POSITION                     equ 0002h
T1CLK_T1CS2_SIZE                         equ 0001h
T1CLK_T1CS2_LENGTH                       equ 0001h
T1CLK_T1CS2_MASK                         equ 0004h
T1CLK_T1CS3_POSN                         equ 0003h
T1CLK_T1CS3_POSITION                     equ 0003h
T1CLK_T1CS3_SIZE                         equ 0001h
T1CLK_T1CS3_LENGTH                       equ 0001h
T1CLK_T1CS3_MASK                         equ 0008h
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

// Register: T2TMR
#define T2TMR T2TMR
T2TMR                                    equ 028Ch
// bitfield definitions
T2TMR_TMR_POSN                           equ 0000h
T2TMR_TMR_POSITION                       equ 0000h
T2TMR_TMR_SIZE                           equ 0008h
T2TMR_TMR_LENGTH                         equ 0008h
T2TMR_TMR_MASK                           equ 00FFh
T2TMR_TMR2_POSN                          equ 0000h
T2TMR_TMR2_POSITION                      equ 0000h
T2TMR_TMR2_SIZE                          equ 0008h
T2TMR_TMR2_LENGTH                        equ 0008h
T2TMR_TMR2_MASK                          equ 00FFh

// Register: T2PR
#define T2PR T2PR
T2PR                                     equ 028Dh
// bitfield definitions
T2PR_PR_POSN                             equ 0000h
T2PR_PR_POSITION                         equ 0000h
T2PR_PR_SIZE                             equ 0008h
T2PR_PR_LENGTH                           equ 0008h
T2PR_PR_MASK                             equ 00FFh
T2PR_T2PR_POSN                           equ 0000h
T2PR_T2PR_POSITION                       equ 0000h
T2PR_T2PR_SIZE                           equ 0008h
T2PR_T2PR_LENGTH                         equ 0008h
T2PR_T2PR_MASK                           equ 00FFh

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
T2CON_T2OUTPS_POSN                       equ 0000h
T2CON_T2OUTPS_POSITION                   equ 0000h
T2CON_T2OUTPS_SIZE                       equ 0004h
T2CON_T2OUTPS_LENGTH                     equ 0004h
T2CON_T2OUTPS_MASK                       equ 000Fh
T2CON_T2CKPS_POSN                        equ 0004h
T2CON_T2CKPS_POSITION                    equ 0004h
T2CON_T2CKPS_SIZE                        equ 0003h
T2CON_T2CKPS_LENGTH                      equ 0003h
T2CON_T2CKPS_MASK                        equ 0070h
T2CON_T2ON_POSN                          equ 0007h
T2CON_T2ON_POSITION                      equ 0007h
T2CON_T2ON_SIZE                          equ 0001h
T2CON_T2ON_LENGTH                        equ 0001h
T2CON_T2ON_MASK                          equ 0080h
T2CON_T2OUTPS0_POSN                      equ 0000h
T2CON_T2OUTPS0_POSITION                  equ 0000h
T2CON_T2OUTPS0_SIZE                      equ 0001h
T2CON_T2OUTPS0_LENGTH                    equ 0001h
T2CON_T2OUTPS0_MASK                      equ 0001h
T2CON_T2OUTPS1_POSN                      equ 0001h
T2CON_T2OUTPS1_POSITION                  equ 0001h
T2CON_T2OUTPS1_SIZE                      equ 0001h
T2CON_T2OUTPS1_LENGTH                    equ 0001h
T2CON_T2OUTPS1_MASK                      equ 0002h
T2CON_T2OUTPS2_POSN                      equ 0002h
T2CON_T2OUTPS2_POSITION                  equ 0002h
T2CON_T2OUTPS2_SIZE                      equ 0001h
T2CON_T2OUTPS2_LENGTH                    equ 0001h
T2CON_T2OUTPS2_MASK                      equ 0004h
T2CON_T2OUTPS3_POSN                      equ 0003h
T2CON_T2OUTPS3_POSITION                  equ 0003h
T2CON_T2OUTPS3_SIZE                      equ 0001h
T2CON_T2OUTPS3_LENGTH                    equ 0001h
T2CON_T2OUTPS3_MASK                      equ 0008h
T2CON_T2CKPS0_POSN                       equ 0004h
T2CON_T2CKPS0_POSITION                   equ 0004h
T2CON_T2CKPS0_SIZE                       equ 0001h
T2CON_T2CKPS0_LENGTH                     equ 0001h
T2CON_T2CKPS0_MASK                       equ 0010h
T2CON_T2CKPS1_POSN                       equ 0005h
T2CON_T2CKPS1_POSITION                   equ 0005h
T2CON_T2CKPS1_SIZE                       equ 0001h
T2CON_T2CKPS1_LENGTH                     equ 0001h
T2CON_T2CKPS1_MASK                       equ 0020h
T2CON_T2CKPS2_POSN                       equ 0006h
T2CON_T2CKPS2_POSITION                   equ 0006h
T2CON_T2CKPS2_SIZE                       equ 0001h
T2CON_T2CKPS2_LENGTH                     equ 0001h
T2CON_T2CKPS2_MASK                       equ 0040h
T2CON_TMR2ON_POSN                        equ 0007h
T2CON_TMR2ON_POSITION                    equ 0007h
T2CON_TMR2ON_SIZE                        equ 0001h
T2CON_TMR2ON_LENGTH                      equ 0001h
T2CON_TMR2ON_MASK                        equ 0080h

// Register: T2HLT
#define T2HLT T2HLT
T2HLT                                    equ 028Fh
// bitfield definitions
T2HLT_MODE_POSN                          equ 0000h
T2HLT_MODE_POSITION                      equ 0000h
T2HLT_MODE_SIZE                          equ 0005h
T2HLT_MODE_LENGTH                        equ 0005h
T2HLT_MODE_MASK                          equ 001Fh
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
T2HLT_MODE4_POSN                         equ 0004h
T2HLT_MODE4_POSITION                     equ 0004h
T2HLT_MODE4_SIZE                         equ 0001h
T2HLT_MODE4_LENGTH                       equ 0001h
T2HLT_MODE4_MASK                         equ 0010h
T2HLT_T2MODE_POSN                        equ 0000h
T2HLT_T2MODE_POSITION                    equ 0000h
T2HLT_T2MODE_SIZE                        equ 0005h
T2HLT_T2MODE_LENGTH                      equ 0005h
T2HLT_T2MODE_MASK                        equ 001Fh
T2HLT_T2CKSYNC_POSN                      equ 0005h
T2HLT_T2CKSYNC_POSITION                  equ 0005h
T2HLT_T2CKSYNC_SIZE                      equ 0001h
T2HLT_T2CKSYNC_LENGTH                    equ 0001h
T2HLT_T2CKSYNC_MASK                      equ 0020h
T2HLT_T2CKPOL_POSN                       equ 0006h
T2HLT_T2CKPOL_POSITION                   equ 0006h
T2HLT_T2CKPOL_SIZE                       equ 0001h
T2HLT_T2CKPOL_LENGTH                     equ 0001h
T2HLT_T2CKPOL_MASK                       equ 0040h
T2HLT_T2PSYNC_POSN                       equ 0007h
T2HLT_T2PSYNC_POSITION                   equ 0007h
T2HLT_T2PSYNC_SIZE                       equ 0001h
T2HLT_T2PSYNC_LENGTH                     equ 0001h
T2HLT_T2PSYNC_MASK                       equ 0080h
T2HLT_T2MODE0_POSN                       equ 0000h
T2HLT_T2MODE0_POSITION                   equ 0000h
T2HLT_T2MODE0_SIZE                       equ 0001h
T2HLT_T2MODE0_LENGTH                     equ 0001h
T2HLT_T2MODE0_MASK                       equ 0001h
T2HLT_T2MODE1_POSN                       equ 0001h
T2HLT_T2MODE1_POSITION                   equ 0001h
T2HLT_T2MODE1_SIZE                       equ 0001h
T2HLT_T2MODE1_LENGTH                     equ 0001h
T2HLT_T2MODE1_MASK                       equ 0002h
T2HLT_T2MODE2_POSN                       equ 0002h
T2HLT_T2MODE2_POSITION                   equ 0002h
T2HLT_T2MODE2_SIZE                       equ 0001h
T2HLT_T2MODE2_LENGTH                     equ 0001h
T2HLT_T2MODE2_MASK                       equ 0004h
T2HLT_T2MODE3_POSN                       equ 0003h
T2HLT_T2MODE3_POSITION                   equ 0003h
T2HLT_T2MODE3_SIZE                       equ 0001h
T2HLT_T2MODE3_LENGTH                     equ 0001h
T2HLT_T2MODE3_MASK                       equ 0008h
T2HLT_T2MODE4_POSN                       equ 0004h
T2HLT_T2MODE4_POSITION                   equ 0004h
T2HLT_T2MODE4_SIZE                       equ 0001h
T2HLT_T2MODE4_LENGTH                     equ 0001h
T2HLT_T2MODE4_MASK                       equ 0010h

// Register: T2CLKCON
#define T2CLKCON T2CLKCON
T2CLKCON                                 equ 0290h
// bitfield definitions
T2CLKCON_CS_POSN                         equ 0000h
T2CLKCON_CS_POSITION                     equ 0000h
T2CLKCON_CS_SIZE                         equ 0004h
T2CLKCON_CS_LENGTH                       equ 0004h
T2CLKCON_CS_MASK                         equ 000Fh
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
T2CLKCON_CS3_POSN                        equ 0003h
T2CLKCON_CS3_POSITION                    equ 0003h
T2CLKCON_CS3_SIZE                        equ 0001h
T2CLKCON_CS3_LENGTH                      equ 0001h
T2CLKCON_CS3_MASK                        equ 0008h
T2CLKCON_T2CS_POSN                       equ 0000h
T2CLKCON_T2CS_POSITION                   equ 0000h
T2CLKCON_T2CS_SIZE                       equ 0004h
T2CLKCON_T2CS_LENGTH                     equ 0004h
T2CLKCON_T2CS_MASK                       equ 000Fh
T2CLKCON_T2CS0_POSN                      equ 0000h
T2CLKCON_T2CS0_POSITION                  equ 0000h
T2CLKCON_T2CS0_SIZE                      equ 0001h
T2CLKCON_T2CS0_LENGTH                    equ 0001h
T2CLKCON_T2CS0_MASK                      equ 0001h
T2CLKCON_T2CS1_POSN                      equ 0001h
T2CLKCON_T2CS1_POSITION                  equ 0001h
T2CLKCON_T2CS1_SIZE                      equ 0001h
T2CLKCON_T2CS1_LENGTH                    equ 0001h
T2CLKCON_T2CS1_MASK                      equ 0002h
T2CLKCON_T2CS2_POSN                      equ 0002h
T2CLKCON_T2CS2_POSITION                  equ 0002h
T2CLKCON_T2CS2_SIZE                      equ 0001h
T2CLKCON_T2CS2_LENGTH                    equ 0001h
T2CLKCON_T2CS2_MASK                      equ 0004h
T2CLKCON_T2CS3_POSN                      equ 0003h
T2CLKCON_T2CS3_POSITION                  equ 0003h
T2CLKCON_T2CS3_SIZE                      equ 0001h
T2CLKCON_T2CS3_LENGTH                    equ 0001h
T2CLKCON_T2CS3_MASK                      equ 0008h

// Register: T2RST
#define T2RST T2RST
T2RST                                    equ 0291h
// bitfield definitions
T2RST_RSEL_POSN                          equ 0000h
T2RST_RSEL_POSITION                      equ 0000h
T2RST_RSEL_SIZE                          equ 0004h
T2RST_RSEL_LENGTH                        equ 0004h
T2RST_RSEL_MASK                          equ 000Fh
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
T2RST_RSEL2_POSN                         equ 0002h
T2RST_RSEL2_POSITION                     equ 0002h
T2RST_RSEL2_SIZE                         equ 0001h
T2RST_RSEL2_LENGTH                       equ 0001h
T2RST_RSEL2_MASK                         equ 0004h
T2RST_RSEL3_POSN                         equ 0003h
T2RST_RSEL3_POSITION                     equ 0003h
T2RST_RSEL3_SIZE                         equ 0001h
T2RST_RSEL3_LENGTH                       equ 0001h
T2RST_RSEL3_MASK                         equ 0008h
T2RST_T2RSEL_POSN                        equ 0000h
T2RST_T2RSEL_POSITION                    equ 0000h
T2RST_T2RSEL_SIZE                        equ 0004h
T2RST_T2RSEL_LENGTH                      equ 0004h
T2RST_T2RSEL_MASK                        equ 000Fh
T2RST_T2RSEL0_POSN                       equ 0000h
T2RST_T2RSEL0_POSITION                   equ 0000h
T2RST_T2RSEL0_SIZE                       equ 0001h
T2RST_T2RSEL0_LENGTH                     equ 0001h
T2RST_T2RSEL0_MASK                       equ 0001h
T2RST_T2RSEL1_POSN                       equ 0001h
T2RST_T2RSEL1_POSITION                   equ 0001h
T2RST_T2RSEL1_SIZE                       equ 0001h
T2RST_T2RSEL1_LENGTH                     equ 0001h
T2RST_T2RSEL1_MASK                       equ 0002h
T2RST_T2RSEL2_POSN                       equ 0002h
T2RST_T2RSEL2_POSITION                   equ 0002h
T2RST_T2RSEL2_SIZE                       equ 0001h
T2RST_T2RSEL2_LENGTH                     equ 0001h
T2RST_T2RSEL2_MASK                       equ 0004h
T2RST_T2RSEL3_POSN                       equ 0003h
T2RST_T2RSEL3_POSITION                   equ 0003h
T2RST_T2RSEL3_SIZE                       equ 0001h
T2RST_T2RSEL3_LENGTH                     equ 0001h
T2RST_T2RSEL3_MASK                       equ 0008h

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 030Ch
// bitfield definitions
CCPR1L_RL_POSN                           equ 0000h
CCPR1L_RL_POSITION                       equ 0000h
CCPR1L_RL_SIZE                           equ 0008h
CCPR1L_RL_LENGTH                         equ 0008h
CCPR1L_RL_MASK                           equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 030Dh
// bitfield definitions
CCPR1H_RH_POSN                           equ 0000h
CCPR1H_RH_POSITION                       equ 0000h
CCPR1H_RH_SIZE                           equ 0008h
CCPR1H_RH_LENGTH                         equ 0008h
CCPR1H_RH_MASK                           equ 00FFh

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 030Eh
// bitfield definitions
CCP1CON_MODE_POSN                        equ 0000h
CCP1CON_MODE_POSITION                    equ 0000h
CCP1CON_MODE_SIZE                        equ 0004h
CCP1CON_MODE_LENGTH                      equ 0004h
CCP1CON_MODE_MASK                        equ 000Fh
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
CCP1CAP                                  equ 030Fh
// bitfield definitions
CCP1CAP_CTS_POSN                         equ 0000h
CCP1CAP_CTS_POSITION                     equ 0000h
CCP1CAP_CTS_SIZE                         equ 0008h
CCP1CAP_CTS_LENGTH                       equ 0008h
CCP1CAP_CTS_MASK                         equ 00FFh
CCP1CAP_CTS0_POSN                        equ 0000h
CCP1CAP_CTS0_POSITION                    equ 0000h
CCP1CAP_CTS0_SIZE                        equ 0001h
CCP1CAP_CTS0_LENGTH                      equ 0001h
CCP1CAP_CTS0_MASK                        equ 0001h
CCP1CAP_CTS1_POSN                        equ 0001h
CCP1CAP_CTS1_POSITION                    equ 0001h
CCP1CAP_CTS1_SIZE                        equ 0001h
CCP1CAP_CTS1_LENGTH                      equ 0001h
CCP1CAP_CTS1_MASK                        equ 0002h
CCP1CAP_CTS2_POSN                        equ 0002h
CCP1CAP_CTS2_POSITION                    equ 0002h
CCP1CAP_CTS2_SIZE                        equ 0001h
CCP1CAP_CTS2_LENGTH                      equ 0001h
CCP1CAP_CTS2_MASK                        equ 0004h
CCP1CAP_CCP1CTS_POSN                     equ 0000h
CCP1CAP_CCP1CTS_POSITION                 equ 0000h
CCP1CAP_CCP1CTS_SIZE                     equ 0008h
CCP1CAP_CCP1CTS_LENGTH                   equ 0008h
CCP1CAP_CCP1CTS_MASK                     equ 00FFh
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

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0310h
// bitfield definitions
CCPR2L_RL_POSN                           equ 0000h
CCPR2L_RL_POSITION                       equ 0000h
CCPR2L_RL_SIZE                           equ 0008h
CCPR2L_RL_LENGTH                         equ 0008h
CCPR2L_RL_MASK                           equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0311h
// bitfield definitions
CCPR2H_RH_POSN                           equ 0000h
CCPR2H_RH_POSITION                       equ 0000h
CCPR2H_RH_SIZE                           equ 0008h
CCPR2H_RH_LENGTH                         equ 0008h
CCPR2H_RH_MASK                           equ 00FFh

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0312h
// bitfield definitions
CCP2CON_MODE_POSN                        equ 0000h
CCP2CON_MODE_POSITION                    equ 0000h
CCP2CON_MODE_SIZE                        equ 0004h
CCP2CON_MODE_LENGTH                      equ 0004h
CCP2CON_MODE_MASK                        equ 000Fh
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
CCP2CAP                                  equ 0313h
// bitfield definitions
CCP2CAP_CTS_POSN                         equ 0000h
CCP2CAP_CTS_POSITION                     equ 0000h
CCP2CAP_CTS_SIZE                         equ 0008h
CCP2CAP_CTS_LENGTH                       equ 0008h
CCP2CAP_CTS_MASK                         equ 00FFh
CCP2CAP_CTS0_POSN                        equ 0000h
CCP2CAP_CTS0_POSITION                    equ 0000h
CCP2CAP_CTS0_SIZE                        equ 0001h
CCP2CAP_CTS0_LENGTH                      equ 0001h
CCP2CAP_CTS0_MASK                        equ 0001h
CCP2CAP_CTS1_POSN                        equ 0001h
CCP2CAP_CTS1_POSITION                    equ 0001h
CCP2CAP_CTS1_SIZE                        equ 0001h
CCP2CAP_CTS1_LENGTH                      equ 0001h
CCP2CAP_CTS1_MASK                        equ 0002h
CCP2CAP_CTS2_POSN                        equ 0002h
CCP2CAP_CTS2_POSITION                    equ 0002h
CCP2CAP_CTS2_SIZE                        equ 0001h
CCP2CAP_CTS2_LENGTH                      equ 0001h
CCP2CAP_CTS2_MASK                        equ 0004h
CCP2CAP_CCP2CTS_POSN                     equ 0000h
CCP2CAP_CCP2CTS_POSITION                 equ 0000h
CCP2CAP_CCP2CTS_SIZE                     equ 0008h
CCP2CAP_CCP2CTS_LENGTH                   equ 0008h
CCP2CAP_CCP2CTS_MASK                     equ 00FFh
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

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
PWM3DCL                                  equ 0314h
// bitfield definitions
PWM3DCL_DC_POSN                          equ 0006h
PWM3DCL_DC_POSITION                      equ 0006h
PWM3DCL_DC_SIZE                          equ 0002h
PWM3DCL_DC_LENGTH                        equ 0002h
PWM3DCL_DC_MASK                          equ 00C0h
PWM3DCL_DC0_POSN                         equ 0006h
PWM3DCL_DC0_POSITION                     equ 0006h
PWM3DCL_DC0_SIZE                         equ 0001h
PWM3DCL_DC0_LENGTH                       equ 0001h
PWM3DCL_DC0_MASK                         equ 0040h
PWM3DCL_DC1_POSN                         equ 0007h
PWM3DCL_DC1_POSITION                     equ 0007h
PWM3DCL_DC1_SIZE                         equ 0001h
PWM3DCL_DC1_LENGTH                       equ 0001h
PWM3DCL_DC1_MASK                         equ 0080h
PWM3DCL_PWM3DC0_POSN                     equ 0006h
PWM3DCL_PWM3DC0_POSITION                 equ 0006h
PWM3DCL_PWM3DC0_SIZE                     equ 0001h
PWM3DCL_PWM3DC0_LENGTH                   equ 0001h
PWM3DCL_PWM3DC0_MASK                     equ 0040h
PWM3DCL_PWM3DC1_POSN                     equ 0007h
PWM3DCL_PWM3DC1_POSITION                 equ 0007h
PWM3DCL_PWM3DC1_SIZE                     equ 0001h
PWM3DCL_PWM3DC1_LENGTH                   equ 0001h
PWM3DCL_PWM3DC1_MASK                     equ 0080h
PWM3DCL_PWMPW0_POSN                      equ 0006h
PWM3DCL_PWMPW0_POSITION                  equ 0006h
PWM3DCL_PWMPW0_SIZE                      equ 0001h
PWM3DCL_PWMPW0_LENGTH                    equ 0001h
PWM3DCL_PWMPW0_MASK                      equ 0040h
PWM3DCL_PWMPW1_POSN                      equ 0007h
PWM3DCL_PWMPW1_POSITION                  equ 0007h
PWM3DCL_PWMPW1_SIZE                      equ 0001h
PWM3DCL_PWMPW1_LENGTH                    equ 0001h
PWM3DCL_PWMPW1_MASK                      equ 0080h

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
PWM3DCH                                  equ 0315h
// bitfield definitions
PWM3DCH_DC_POSN                          equ 0000h
PWM3DCH_DC_POSITION                      equ 0000h
PWM3DCH_DC_SIZE                          equ 0008h
PWM3DCH_DC_LENGTH                        equ 0008h
PWM3DCH_DC_MASK                          equ 00FFh
PWM3DCH_DC2_POSN                         equ 0000h
PWM3DCH_DC2_POSITION                     equ 0000h
PWM3DCH_DC2_SIZE                         equ 0001h
PWM3DCH_DC2_LENGTH                       equ 0001h
PWM3DCH_DC2_MASK                         equ 0001h
PWM3DCH_DC3_POSN                         equ 0001h
PWM3DCH_DC3_POSITION                     equ 0001h
PWM3DCH_DC3_SIZE                         equ 0001h
PWM3DCH_DC3_LENGTH                       equ 0001h
PWM3DCH_DC3_MASK                         equ 0002h
PWM3DCH_DC4_POSN                         equ 0002h
PWM3DCH_DC4_POSITION                     equ 0002h
PWM3DCH_DC4_SIZE                         equ 0001h
PWM3DCH_DC4_LENGTH                       equ 0001h
PWM3DCH_DC4_MASK                         equ 0004h
PWM3DCH_DC5_POSN                         equ 0003h
PWM3DCH_DC5_POSITION                     equ 0003h
PWM3DCH_DC5_SIZE                         equ 0001h
PWM3DCH_DC5_LENGTH                       equ 0001h
PWM3DCH_DC5_MASK                         equ 0008h
PWM3DCH_DC6_POSN                         equ 0004h
PWM3DCH_DC6_POSITION                     equ 0004h
PWM3DCH_DC6_SIZE                         equ 0001h
PWM3DCH_DC6_LENGTH                       equ 0001h
PWM3DCH_DC6_MASK                         equ 0010h
PWM3DCH_DC7_POSN                         equ 0005h
PWM3DCH_DC7_POSITION                     equ 0005h
PWM3DCH_DC7_SIZE                         equ 0001h
PWM3DCH_DC7_LENGTH                       equ 0001h
PWM3DCH_DC7_MASK                         equ 0020h
PWM3DCH_DC8_POSN                         equ 0006h
PWM3DCH_DC8_POSITION                     equ 0006h
PWM3DCH_DC8_SIZE                         equ 0001h
PWM3DCH_DC8_LENGTH                       equ 0001h
PWM3DCH_DC8_MASK                         equ 0040h
PWM3DCH_DC9_POSN                         equ 0007h
PWM3DCH_DC9_POSITION                     equ 0007h
PWM3DCH_DC9_SIZE                         equ 0001h
PWM3DCH_DC9_LENGTH                       equ 0001h
PWM3DCH_DC9_MASK                         equ 0080h
PWM3DCH_PWM3DC2_POSN                     equ 0000h
PWM3DCH_PWM3DC2_POSITION                 equ 0000h
PWM3DCH_PWM3DC2_SIZE                     equ 0001h
PWM3DCH_PWM3DC2_LENGTH                   equ 0001h
PWM3DCH_PWM3DC2_MASK                     equ 0001h
PWM3DCH_PWM3DC3_POSN                     equ 0001h
PWM3DCH_PWM3DC3_POSITION                 equ 0001h
PWM3DCH_PWM3DC3_SIZE                     equ 0001h
PWM3DCH_PWM3DC3_LENGTH                   equ 0001h
PWM3DCH_PWM3DC3_MASK                     equ 0002h
PWM3DCH_PWM3DC4_POSN                     equ 0002h
PWM3DCH_PWM3DC4_POSITION                 equ 0002h
PWM3DCH_PWM3DC4_SIZE                     equ 0001h
PWM3DCH_PWM3DC4_LENGTH                   equ 0001h
PWM3DCH_PWM3DC4_MASK                     equ 0004h
PWM3DCH_PWM3DC5_POSN                     equ 0003h
PWM3DCH_PWM3DC5_POSITION                 equ 0003h
PWM3DCH_PWM3DC5_SIZE                     equ 0001h
PWM3DCH_PWM3DC5_LENGTH                   equ 0001h
PWM3DCH_PWM3DC5_MASK                     equ 0008h
PWM3DCH_PWM3DC6_POSN                     equ 0004h
PWM3DCH_PWM3DC6_POSITION                 equ 0004h
PWM3DCH_PWM3DC6_SIZE                     equ 0001h
PWM3DCH_PWM3DC6_LENGTH                   equ 0001h
PWM3DCH_PWM3DC6_MASK                     equ 0010h
PWM3DCH_PWM3DC7_POSN                     equ 0005h
PWM3DCH_PWM3DC7_POSITION                 equ 0005h
PWM3DCH_PWM3DC7_SIZE                     equ 0001h
PWM3DCH_PWM3DC7_LENGTH                   equ 0001h
PWM3DCH_PWM3DC7_MASK                     equ 0020h
PWM3DCH_PWM3DC8_POSN                     equ 0006h
PWM3DCH_PWM3DC8_POSITION                 equ 0006h
PWM3DCH_PWM3DC8_SIZE                     equ 0001h
PWM3DCH_PWM3DC8_LENGTH                   equ 0001h
PWM3DCH_PWM3DC8_MASK                     equ 0040h
PWM3DCH_PWM3DC9_POSN                     equ 0007h
PWM3DCH_PWM3DC9_POSITION                 equ 0007h
PWM3DCH_PWM3DC9_SIZE                     equ 0001h
PWM3DCH_PWM3DC9_LENGTH                   equ 0001h
PWM3DCH_PWM3DC9_MASK                     equ 0080h
PWM3DCH_PWMPW2_POSN                      equ 0000h
PWM3DCH_PWMPW2_POSITION                  equ 0000h
PWM3DCH_PWMPW2_SIZE                      equ 0001h
PWM3DCH_PWMPW2_LENGTH                    equ 0001h
PWM3DCH_PWMPW2_MASK                      equ 0001h
PWM3DCH_PWMPW3_POSN                      equ 0001h
PWM3DCH_PWMPW3_POSITION                  equ 0001h
PWM3DCH_PWMPW3_SIZE                      equ 0001h
PWM3DCH_PWMPW3_LENGTH                    equ 0001h
PWM3DCH_PWMPW3_MASK                      equ 0002h
PWM3DCH_PWMPW4_POSN                      equ 0002h
PWM3DCH_PWMPW4_POSITION                  equ 0002h
PWM3DCH_PWMPW4_SIZE                      equ 0001h
PWM3DCH_PWMPW4_LENGTH                    equ 0001h
PWM3DCH_PWMPW4_MASK                      equ 0004h
PWM3DCH_PWMPW5_POSN                      equ 0003h
PWM3DCH_PWMPW5_POSITION                  equ 0003h
PWM3DCH_PWMPW5_SIZE                      equ 0001h
PWM3DCH_PWMPW5_LENGTH                    equ 0001h
PWM3DCH_PWMPW5_MASK                      equ 0008h
PWM3DCH_PWMPW6_POSN                      equ 0004h
PWM3DCH_PWMPW6_POSITION                  equ 0004h
PWM3DCH_PWMPW6_SIZE                      equ 0001h
PWM3DCH_PWMPW6_LENGTH                    equ 0001h
PWM3DCH_PWMPW6_MASK                      equ 0010h
PWM3DCH_PWMPW7_POSN                      equ 0005h
PWM3DCH_PWMPW7_POSITION                  equ 0005h
PWM3DCH_PWMPW7_SIZE                      equ 0001h
PWM3DCH_PWMPW7_LENGTH                    equ 0001h
PWM3DCH_PWMPW7_MASK                      equ 0020h
PWM3DCH_PWMPW8_POSN                      equ 0006h
PWM3DCH_PWMPW8_POSITION                  equ 0006h
PWM3DCH_PWMPW8_SIZE                      equ 0001h
PWM3DCH_PWMPW8_LENGTH                    equ 0001h
PWM3DCH_PWMPW8_MASK                      equ 0040h
PWM3DCH_PWMPW9_POSN                      equ 0007h
PWM3DCH_PWMPW9_POSITION                  equ 0007h
PWM3DCH_PWMPW9_SIZE                      equ 0001h
PWM3DCH_PWMPW9_LENGTH                    equ 0001h
PWM3DCH_PWMPW9_MASK                      equ 0080h

// Register: PWM3CON
#define PWM3CON PWM3CON
PWM3CON                                  equ 0316h
// bitfield definitions
PWM3CON_POL_POSN                         equ 0004h
PWM3CON_POL_POSITION                     equ 0004h
PWM3CON_POL_SIZE                         equ 0001h
PWM3CON_POL_LENGTH                       equ 0001h
PWM3CON_POL_MASK                         equ 0010h
PWM3CON_OUT_POSN                         equ 0005h
PWM3CON_OUT_POSITION                     equ 0005h
PWM3CON_OUT_SIZE                         equ 0001h
PWM3CON_OUT_LENGTH                       equ 0001h
PWM3CON_OUT_MASK                         equ 0020h
PWM3CON_EN_POSN                          equ 0007h
PWM3CON_EN_POSITION                      equ 0007h
PWM3CON_EN_SIZE                          equ 0001h
PWM3CON_EN_LENGTH                        equ 0001h
PWM3CON_EN_MASK                          equ 0080h
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
PWM4DCL                                  equ 0318h
// bitfield definitions
PWM4DCL_DC_POSN                          equ 0006h
PWM4DCL_DC_POSITION                      equ 0006h
PWM4DCL_DC_SIZE                          equ 0002h
PWM4DCL_DC_LENGTH                        equ 0002h
PWM4DCL_DC_MASK                          equ 00C0h
PWM4DCL_DC0_POSN                         equ 0006h
PWM4DCL_DC0_POSITION                     equ 0006h
PWM4DCL_DC0_SIZE                         equ 0001h
PWM4DCL_DC0_LENGTH                       equ 0001h
PWM4DCL_DC0_MASK                         equ 0040h
PWM4DCL_DC1_POSN                         equ 0007h
PWM4DCL_DC1_POSITION                     equ 0007h
PWM4DCL_DC1_SIZE                         equ 0001h
PWM4DCL_DC1_LENGTH                       equ 0001h
PWM4DCL_DC1_MASK                         equ 0080h
PWM4DCL_PWM4DC0_POSN                     equ 0006h
PWM4DCL_PWM4DC0_POSITION                 equ 0006h
PWM4DCL_PWM4DC0_SIZE                     equ 0001h
PWM4DCL_PWM4DC0_LENGTH                   equ 0001h
PWM4DCL_PWM4DC0_MASK                     equ 0040h
PWM4DCL_PWM4DC1_POSN                     equ 0007h
PWM4DCL_PWM4DC1_POSITION                 equ 0007h
PWM4DCL_PWM4DC1_SIZE                     equ 0001h
PWM4DCL_PWM4DC1_LENGTH                   equ 0001h
PWM4DCL_PWM4DC1_MASK                     equ 0080h
PWM4DCL_PWMPW0_POSN                      equ 0006h
PWM4DCL_PWMPW0_POSITION                  equ 0006h
PWM4DCL_PWMPW0_SIZE                      equ 0001h
PWM4DCL_PWMPW0_LENGTH                    equ 0001h
PWM4DCL_PWMPW0_MASK                      equ 0040h
PWM4DCL_PWMPW1_POSN                      equ 0007h
PWM4DCL_PWMPW1_POSITION                  equ 0007h
PWM4DCL_PWMPW1_SIZE                      equ 0001h
PWM4DCL_PWMPW1_LENGTH                    equ 0001h
PWM4DCL_PWMPW1_MASK                      equ 0080h

// Register: PWM4DCH
#define PWM4DCH PWM4DCH
PWM4DCH                                  equ 0319h
// bitfield definitions
PWM4DCH_DC_POSN                          equ 0000h
PWM4DCH_DC_POSITION                      equ 0000h
PWM4DCH_DC_SIZE                          equ 0008h
PWM4DCH_DC_LENGTH                        equ 0008h
PWM4DCH_DC_MASK                          equ 00FFh
PWM4DCH_DC2_POSN                         equ 0000h
PWM4DCH_DC2_POSITION                     equ 0000h
PWM4DCH_DC2_SIZE                         equ 0001h
PWM4DCH_DC2_LENGTH                       equ 0001h
PWM4DCH_DC2_MASK                         equ 0001h
PWM4DCH_DC3_POSN                         equ 0001h
PWM4DCH_DC3_POSITION                     equ 0001h
PWM4DCH_DC3_SIZE                         equ 0001h
PWM4DCH_DC3_LENGTH                       equ 0001h
PWM4DCH_DC3_MASK                         equ 0002h
PWM4DCH_DC4_POSN                         equ 0002h
PWM4DCH_DC4_POSITION                     equ 0002h
PWM4DCH_DC4_SIZE                         equ 0001h
PWM4DCH_DC4_LENGTH                       equ 0001h
PWM4DCH_DC4_MASK                         equ 0004h
PWM4DCH_DC5_POSN                         equ 0003h
PWM4DCH_DC5_POSITION                     equ 0003h
PWM4DCH_DC5_SIZE                         equ 0001h
PWM4DCH_DC5_LENGTH                       equ 0001h
PWM4DCH_DC5_MASK                         equ 0008h
PWM4DCH_DC6_POSN                         equ 0004h
PWM4DCH_DC6_POSITION                     equ 0004h
PWM4DCH_DC6_SIZE                         equ 0001h
PWM4DCH_DC6_LENGTH                       equ 0001h
PWM4DCH_DC6_MASK                         equ 0010h
PWM4DCH_DC7_POSN                         equ 0005h
PWM4DCH_DC7_POSITION                     equ 0005h
PWM4DCH_DC7_SIZE                         equ 0001h
PWM4DCH_DC7_LENGTH                       equ 0001h
PWM4DCH_DC7_MASK                         equ 0020h
PWM4DCH_DC8_POSN                         equ 0006h
PWM4DCH_DC8_POSITION                     equ 0006h
PWM4DCH_DC8_SIZE                         equ 0001h
PWM4DCH_DC8_LENGTH                       equ 0001h
PWM4DCH_DC8_MASK                         equ 0040h
PWM4DCH_DC9_POSN                         equ 0007h
PWM4DCH_DC9_POSITION                     equ 0007h
PWM4DCH_DC9_SIZE                         equ 0001h
PWM4DCH_DC9_LENGTH                       equ 0001h
PWM4DCH_DC9_MASK                         equ 0080h
PWM4DCH_PWM4DC2_POSN                     equ 0000h
PWM4DCH_PWM4DC2_POSITION                 equ 0000h
PWM4DCH_PWM4DC2_SIZE                     equ 0001h
PWM4DCH_PWM4DC2_LENGTH                   equ 0001h
PWM4DCH_PWM4DC2_MASK                     equ 0001h
PWM4DCH_PWM4DC3_POSN                     equ 0001h
PWM4DCH_PWM4DC3_POSITION                 equ 0001h
PWM4DCH_PWM4DC3_SIZE                     equ 0001h
PWM4DCH_PWM4DC3_LENGTH                   equ 0001h
PWM4DCH_PWM4DC3_MASK                     equ 0002h
PWM4DCH_PWM4DC4_POSN                     equ 0002h
PWM4DCH_PWM4DC4_POSITION                 equ 0002h
PWM4DCH_PWM4DC4_SIZE                     equ 0001h
PWM4DCH_PWM4DC4_LENGTH                   equ 0001h
PWM4DCH_PWM4DC4_MASK                     equ 0004h
PWM4DCH_PWM4DC5_POSN                     equ 0003h
PWM4DCH_PWM4DC5_POSITION                 equ 0003h
PWM4DCH_PWM4DC5_SIZE                     equ 0001h
PWM4DCH_PWM4DC5_LENGTH                   equ 0001h
PWM4DCH_PWM4DC5_MASK                     equ 0008h
PWM4DCH_PWM4DC6_POSN                     equ 0004h
PWM4DCH_PWM4DC6_POSITION                 equ 0004h
PWM4DCH_PWM4DC6_SIZE                     equ 0001h
PWM4DCH_PWM4DC6_LENGTH                   equ 0001h
PWM4DCH_PWM4DC6_MASK                     equ 0010h
PWM4DCH_PWM4DC7_POSN                     equ 0005h
PWM4DCH_PWM4DC7_POSITION                 equ 0005h
PWM4DCH_PWM4DC7_SIZE                     equ 0001h
PWM4DCH_PWM4DC7_LENGTH                   equ 0001h
PWM4DCH_PWM4DC7_MASK                     equ 0020h
PWM4DCH_PWM4DC8_POSN                     equ 0006h
PWM4DCH_PWM4DC8_POSITION                 equ 0006h
PWM4DCH_PWM4DC8_SIZE                     equ 0001h
PWM4DCH_PWM4DC8_LENGTH                   equ 0001h
PWM4DCH_PWM4DC8_MASK                     equ 0040h
PWM4DCH_PWM4DC9_POSN                     equ 0007h
PWM4DCH_PWM4DC9_POSITION                 equ 0007h
PWM4DCH_PWM4DC9_SIZE                     equ 0001h
PWM4DCH_PWM4DC9_LENGTH                   equ 0001h
PWM4DCH_PWM4DC9_MASK                     equ 0080h
PWM4DCH_PWMPW2_POSN                      equ 0000h
PWM4DCH_PWMPW2_POSITION                  equ 0000h
PWM4DCH_PWMPW2_SIZE                      equ 0001h
PWM4DCH_PWMPW2_LENGTH                    equ 0001h
PWM4DCH_PWMPW2_MASK                      equ 0001h
PWM4DCH_PWMPW3_POSN                      equ 0001h
PWM4DCH_PWMPW3_POSITION                  equ 0001h
PWM4DCH_PWMPW3_SIZE                      equ 0001h
PWM4DCH_PWMPW3_LENGTH                    equ 0001h
PWM4DCH_PWMPW3_MASK                      equ 0002h
PWM4DCH_PWMPW4_POSN                      equ 0002h
PWM4DCH_PWMPW4_POSITION                  equ 0002h
PWM4DCH_PWMPW4_SIZE                      equ 0001h
PWM4DCH_PWMPW4_LENGTH                    equ 0001h
PWM4DCH_PWMPW4_MASK                      equ 0004h
PWM4DCH_PWMPW5_POSN                      equ 0003h
PWM4DCH_PWMPW5_POSITION                  equ 0003h
PWM4DCH_PWMPW5_SIZE                      equ 0001h
PWM4DCH_PWMPW5_LENGTH                    equ 0001h
PWM4DCH_PWMPW5_MASK                      equ 0008h
PWM4DCH_PWMPW6_POSN                      equ 0004h
PWM4DCH_PWMPW6_POSITION                  equ 0004h
PWM4DCH_PWMPW6_SIZE                      equ 0001h
PWM4DCH_PWMPW6_LENGTH                    equ 0001h
PWM4DCH_PWMPW6_MASK                      equ 0010h
PWM4DCH_PWMPW7_POSN                      equ 0005h
PWM4DCH_PWMPW7_POSITION                  equ 0005h
PWM4DCH_PWMPW7_SIZE                      equ 0001h
PWM4DCH_PWMPW7_LENGTH                    equ 0001h
PWM4DCH_PWMPW7_MASK                      equ 0020h
PWM4DCH_PWMPW8_POSN                      equ 0006h
PWM4DCH_PWMPW8_POSITION                  equ 0006h
PWM4DCH_PWMPW8_SIZE                      equ 0001h
PWM4DCH_PWMPW8_LENGTH                    equ 0001h
PWM4DCH_PWMPW8_MASK                      equ 0040h
PWM4DCH_PWMPW9_POSN                      equ 0007h
PWM4DCH_PWMPW9_POSITION                  equ 0007h
PWM4DCH_PWMPW9_SIZE                      equ 0001h
PWM4DCH_PWMPW9_LENGTH                    equ 0001h
PWM4DCH_PWMPW9_MASK                      equ 0080h

// Register: PWM4CON
#define PWM4CON PWM4CON
PWM4CON                                  equ 031Ah
// bitfield definitions
PWM4CON_POL_POSN                         equ 0004h
PWM4CON_POL_POSITION                     equ 0004h
PWM4CON_POL_SIZE                         equ 0001h
PWM4CON_POL_LENGTH                       equ 0001h
PWM4CON_POL_MASK                         equ 0010h
PWM4CON_OUT_POSN                         equ 0005h
PWM4CON_OUT_POSITION                     equ 0005h
PWM4CON_OUT_SIZE                         equ 0001h
PWM4CON_OUT_LENGTH                       equ 0001h
PWM4CON_OUT_MASK                         equ 0020h
PWM4CON_EN_POSN                          equ 0007h
PWM4CON_EN_POSITION                      equ 0007h
PWM4CON_EN_SIZE                          equ 0001h
PWM4CON_EN_LENGTH                        equ 0001h
PWM4CON_EN_MASK                          equ 0080h
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

// Register: PWM5DCL
#define PWM5DCL PWM5DCL
PWM5DCL                                  equ 031Ch
// bitfield definitions
PWM5DCL_DC_POSN                          equ 0006h
PWM5DCL_DC_POSITION                      equ 0006h
PWM5DCL_DC_SIZE                          equ 0002h
PWM5DCL_DC_LENGTH                        equ 0002h
PWM5DCL_DC_MASK                          equ 00C0h
PWM5DCL_DC0_POSN                         equ 0006h
PWM5DCL_DC0_POSITION                     equ 0006h
PWM5DCL_DC0_SIZE                         equ 0001h
PWM5DCL_DC0_LENGTH                       equ 0001h
PWM5DCL_DC0_MASK                         equ 0040h
PWM5DCL_DC1_POSN                         equ 0007h
PWM5DCL_DC1_POSITION                     equ 0007h
PWM5DCL_DC1_SIZE                         equ 0001h
PWM5DCL_DC1_LENGTH                       equ 0001h
PWM5DCL_DC1_MASK                         equ 0080h
PWM5DCL_PWM5DC0_POSN                     equ 0006h
PWM5DCL_PWM5DC0_POSITION                 equ 0006h
PWM5DCL_PWM5DC0_SIZE                     equ 0001h
PWM5DCL_PWM5DC0_LENGTH                   equ 0001h
PWM5DCL_PWM5DC0_MASK                     equ 0040h
PWM5DCL_PWM5DC1_POSN                     equ 0007h
PWM5DCL_PWM5DC1_POSITION                 equ 0007h
PWM5DCL_PWM5DC1_SIZE                     equ 0001h
PWM5DCL_PWM5DC1_LENGTH                   equ 0001h
PWM5DCL_PWM5DC1_MASK                     equ 0080h
PWM5DCL_PWMPW0_POSN                      equ 0006h
PWM5DCL_PWMPW0_POSITION                  equ 0006h
PWM5DCL_PWMPW0_SIZE                      equ 0001h
PWM5DCL_PWMPW0_LENGTH                    equ 0001h
PWM5DCL_PWMPW0_MASK                      equ 0040h
PWM5DCL_PWMPW1_POSN                      equ 0007h
PWM5DCL_PWMPW1_POSITION                  equ 0007h
PWM5DCL_PWMPW1_SIZE                      equ 0001h
PWM5DCL_PWMPW1_LENGTH                    equ 0001h
PWM5DCL_PWMPW1_MASK                      equ 0080h

// Register: PWM5DCH
#define PWM5DCH PWM5DCH
PWM5DCH                                  equ 031Dh
// bitfield definitions
PWM5DCH_DC_POSN                          equ 0000h
PWM5DCH_DC_POSITION                      equ 0000h
PWM5DCH_DC_SIZE                          equ 0008h
PWM5DCH_DC_LENGTH                        equ 0008h
PWM5DCH_DC_MASK                          equ 00FFh
PWM5DCH_DC2_POSN                         equ 0000h
PWM5DCH_DC2_POSITION                     equ 0000h
PWM5DCH_DC2_SIZE                         equ 0001h
PWM5DCH_DC2_LENGTH                       equ 0001h
PWM5DCH_DC2_MASK                         equ 0001h
PWM5DCH_DC3_POSN                         equ 0001h
PWM5DCH_DC3_POSITION                     equ 0001h
PWM5DCH_DC3_SIZE                         equ 0001h
PWM5DCH_DC3_LENGTH                       equ 0001h
PWM5DCH_DC3_MASK                         equ 0002h
PWM5DCH_DC4_POSN                         equ 0002h
PWM5DCH_DC4_POSITION                     equ 0002h
PWM5DCH_DC4_SIZE                         equ 0001h
PWM5DCH_DC4_LENGTH                       equ 0001h
PWM5DCH_DC4_MASK                         equ 0004h
PWM5DCH_DC5_POSN                         equ 0003h
PWM5DCH_DC5_POSITION                     equ 0003h
PWM5DCH_DC5_SIZE                         equ 0001h
PWM5DCH_DC5_LENGTH                       equ 0001h
PWM5DCH_DC5_MASK                         equ 0008h
PWM5DCH_DC6_POSN                         equ 0004h
PWM5DCH_DC6_POSITION                     equ 0004h
PWM5DCH_DC6_SIZE                         equ 0001h
PWM5DCH_DC6_LENGTH                       equ 0001h
PWM5DCH_DC6_MASK                         equ 0010h
PWM5DCH_DC7_POSN                         equ 0005h
PWM5DCH_DC7_POSITION                     equ 0005h
PWM5DCH_DC7_SIZE                         equ 0001h
PWM5DCH_DC7_LENGTH                       equ 0001h
PWM5DCH_DC7_MASK                         equ 0020h
PWM5DCH_DC8_POSN                         equ 0006h
PWM5DCH_DC8_POSITION                     equ 0006h
PWM5DCH_DC8_SIZE                         equ 0001h
PWM5DCH_DC8_LENGTH                       equ 0001h
PWM5DCH_DC8_MASK                         equ 0040h
PWM5DCH_DC9_POSN                         equ 0007h
PWM5DCH_DC9_POSITION                     equ 0007h
PWM5DCH_DC9_SIZE                         equ 0001h
PWM5DCH_DC9_LENGTH                       equ 0001h
PWM5DCH_DC9_MASK                         equ 0080h
PWM5DCH_PWM5DC2_POSN                     equ 0000h
PWM5DCH_PWM5DC2_POSITION                 equ 0000h
PWM5DCH_PWM5DC2_SIZE                     equ 0001h
PWM5DCH_PWM5DC2_LENGTH                   equ 0001h
PWM5DCH_PWM5DC2_MASK                     equ 0001h
PWM5DCH_PWM5DC3_POSN                     equ 0001h
PWM5DCH_PWM5DC3_POSITION                 equ 0001h
PWM5DCH_PWM5DC3_SIZE                     equ 0001h
PWM5DCH_PWM5DC3_LENGTH                   equ 0001h
PWM5DCH_PWM5DC3_MASK                     equ 0002h
PWM5DCH_PWM5DC4_POSN                     equ 0002h
PWM5DCH_PWM5DC4_POSITION                 equ 0002h
PWM5DCH_PWM5DC4_SIZE                     equ 0001h
PWM5DCH_PWM5DC4_LENGTH                   equ 0001h
PWM5DCH_PWM5DC4_MASK                     equ 0004h
PWM5DCH_PWM5DC5_POSN                     equ 0003h
PWM5DCH_PWM5DC5_POSITION                 equ 0003h
PWM5DCH_PWM5DC5_SIZE                     equ 0001h
PWM5DCH_PWM5DC5_LENGTH                   equ 0001h
PWM5DCH_PWM5DC5_MASK                     equ 0008h
PWM5DCH_PWM5DC6_POSN                     equ 0004h
PWM5DCH_PWM5DC6_POSITION                 equ 0004h
PWM5DCH_PWM5DC6_SIZE                     equ 0001h
PWM5DCH_PWM5DC6_LENGTH                   equ 0001h
PWM5DCH_PWM5DC6_MASK                     equ 0010h
PWM5DCH_PWM5DC7_POSN                     equ 0005h
PWM5DCH_PWM5DC7_POSITION                 equ 0005h
PWM5DCH_PWM5DC7_SIZE                     equ 0001h
PWM5DCH_PWM5DC7_LENGTH                   equ 0001h
PWM5DCH_PWM5DC7_MASK                     equ 0020h
PWM5DCH_PWM5DC8_POSN                     equ 0006h
PWM5DCH_PWM5DC8_POSITION                 equ 0006h
PWM5DCH_PWM5DC8_SIZE                     equ 0001h
PWM5DCH_PWM5DC8_LENGTH                   equ 0001h
PWM5DCH_PWM5DC8_MASK                     equ 0040h
PWM5DCH_PWM5DC9_POSN                     equ 0007h
PWM5DCH_PWM5DC9_POSITION                 equ 0007h
PWM5DCH_PWM5DC9_SIZE                     equ 0001h
PWM5DCH_PWM5DC9_LENGTH                   equ 0001h
PWM5DCH_PWM5DC9_MASK                     equ 0080h
PWM5DCH_PWMPW2_POSN                      equ 0000h
PWM5DCH_PWMPW2_POSITION                  equ 0000h
PWM5DCH_PWMPW2_SIZE                      equ 0001h
PWM5DCH_PWMPW2_LENGTH                    equ 0001h
PWM5DCH_PWMPW2_MASK                      equ 0001h
PWM5DCH_PWMPW3_POSN                      equ 0001h
PWM5DCH_PWMPW3_POSITION                  equ 0001h
PWM5DCH_PWMPW3_SIZE                      equ 0001h
PWM5DCH_PWMPW3_LENGTH                    equ 0001h
PWM5DCH_PWMPW3_MASK                      equ 0002h
PWM5DCH_PWMPW4_POSN                      equ 0002h
PWM5DCH_PWMPW4_POSITION                  equ 0002h
PWM5DCH_PWMPW4_SIZE                      equ 0001h
PWM5DCH_PWMPW4_LENGTH                    equ 0001h
PWM5DCH_PWMPW4_MASK                      equ 0004h
PWM5DCH_PWMPW5_POSN                      equ 0003h
PWM5DCH_PWMPW5_POSITION                  equ 0003h
PWM5DCH_PWMPW5_SIZE                      equ 0001h
PWM5DCH_PWMPW5_LENGTH                    equ 0001h
PWM5DCH_PWMPW5_MASK                      equ 0008h
PWM5DCH_PWMPW6_POSN                      equ 0004h
PWM5DCH_PWMPW6_POSITION                  equ 0004h
PWM5DCH_PWMPW6_SIZE                      equ 0001h
PWM5DCH_PWMPW6_LENGTH                    equ 0001h
PWM5DCH_PWMPW6_MASK                      equ 0010h
PWM5DCH_PWMPW7_POSN                      equ 0005h
PWM5DCH_PWMPW7_POSITION                  equ 0005h
PWM5DCH_PWMPW7_SIZE                      equ 0001h
PWM5DCH_PWMPW7_LENGTH                    equ 0001h
PWM5DCH_PWMPW7_MASK                      equ 0020h
PWM5DCH_PWMPW8_POSN                      equ 0006h
PWM5DCH_PWMPW8_POSITION                  equ 0006h
PWM5DCH_PWMPW8_SIZE                      equ 0001h
PWM5DCH_PWMPW8_LENGTH                    equ 0001h
PWM5DCH_PWMPW8_MASK                      equ 0040h
PWM5DCH_PWMPW9_POSN                      equ 0007h
PWM5DCH_PWMPW9_POSITION                  equ 0007h
PWM5DCH_PWMPW9_SIZE                      equ 0001h
PWM5DCH_PWMPW9_LENGTH                    equ 0001h
PWM5DCH_PWMPW9_MASK                      equ 0080h

// Register: PWM5CON
#define PWM5CON PWM5CON
PWM5CON                                  equ 031Eh
// bitfield definitions
PWM5CON_POL_POSN                         equ 0004h
PWM5CON_POL_POSITION                     equ 0004h
PWM5CON_POL_SIZE                         equ 0001h
PWM5CON_POL_LENGTH                       equ 0001h
PWM5CON_POL_MASK                         equ 0010h
PWM5CON_OUT_POSN                         equ 0005h
PWM5CON_OUT_POSITION                     equ 0005h
PWM5CON_OUT_SIZE                         equ 0001h
PWM5CON_OUT_LENGTH                       equ 0001h
PWM5CON_OUT_MASK                         equ 0020h
PWM5CON_EN_POSN                          equ 0007h
PWM5CON_EN_POSITION                      equ 0007h
PWM5CON_EN_SIZE                          equ 0001h
PWM5CON_EN_LENGTH                        equ 0001h
PWM5CON_EN_MASK                          equ 0080h
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
PWM6DCL                                  equ 038Ch
// bitfield definitions
PWM6DCL_DC_POSN                          equ 0006h
PWM6DCL_DC_POSITION                      equ 0006h
PWM6DCL_DC_SIZE                          equ 0002h
PWM6DCL_DC_LENGTH                        equ 0002h
PWM6DCL_DC_MASK                          equ 00C0h
PWM6DCL_DC0_POSN                         equ 0006h
PWM6DCL_DC0_POSITION                     equ 0006h
PWM6DCL_DC0_SIZE                         equ 0001h
PWM6DCL_DC0_LENGTH                       equ 0001h
PWM6DCL_DC0_MASK                         equ 0040h
PWM6DCL_DC1_POSN                         equ 0007h
PWM6DCL_DC1_POSITION                     equ 0007h
PWM6DCL_DC1_SIZE                         equ 0001h
PWM6DCL_DC1_LENGTH                       equ 0001h
PWM6DCL_DC1_MASK                         equ 0080h
PWM6DCL_PWM6DC0_POSN                     equ 0006h
PWM6DCL_PWM6DC0_POSITION                 equ 0006h
PWM6DCL_PWM6DC0_SIZE                     equ 0001h
PWM6DCL_PWM6DC0_LENGTH                   equ 0001h
PWM6DCL_PWM6DC0_MASK                     equ 0040h
PWM6DCL_PWM6DC1_POSN                     equ 0007h
PWM6DCL_PWM6DC1_POSITION                 equ 0007h
PWM6DCL_PWM6DC1_SIZE                     equ 0001h
PWM6DCL_PWM6DC1_LENGTH                   equ 0001h
PWM6DCL_PWM6DC1_MASK                     equ 0080h
PWM6DCL_PWMPW0_POSN                      equ 0006h
PWM6DCL_PWMPW0_POSITION                  equ 0006h
PWM6DCL_PWMPW0_SIZE                      equ 0001h
PWM6DCL_PWMPW0_LENGTH                    equ 0001h
PWM6DCL_PWMPW0_MASK                      equ 0040h
PWM6DCL_PWMPW1_POSN                      equ 0007h
PWM6DCL_PWMPW1_POSITION                  equ 0007h
PWM6DCL_PWMPW1_SIZE                      equ 0001h
PWM6DCL_PWMPW1_LENGTH                    equ 0001h
PWM6DCL_PWMPW1_MASK                      equ 0080h

// Register: PWM6DCH
#define PWM6DCH PWM6DCH
PWM6DCH                                  equ 038Dh
// bitfield definitions
PWM6DCH_DC_POSN                          equ 0000h
PWM6DCH_DC_POSITION                      equ 0000h
PWM6DCH_DC_SIZE                          equ 0008h
PWM6DCH_DC_LENGTH                        equ 0008h
PWM6DCH_DC_MASK                          equ 00FFh
PWM6DCH_DC2_POSN                         equ 0000h
PWM6DCH_DC2_POSITION                     equ 0000h
PWM6DCH_DC2_SIZE                         equ 0001h
PWM6DCH_DC2_LENGTH                       equ 0001h
PWM6DCH_DC2_MASK                         equ 0001h
PWM6DCH_DC3_POSN                         equ 0001h
PWM6DCH_DC3_POSITION                     equ 0001h
PWM6DCH_DC3_SIZE                         equ 0001h
PWM6DCH_DC3_LENGTH                       equ 0001h
PWM6DCH_DC3_MASK                         equ 0002h
PWM6DCH_DC4_POSN                         equ 0002h
PWM6DCH_DC4_POSITION                     equ 0002h
PWM6DCH_DC4_SIZE                         equ 0001h
PWM6DCH_DC4_LENGTH                       equ 0001h
PWM6DCH_DC4_MASK                         equ 0004h
PWM6DCH_DC5_POSN                         equ 0003h
PWM6DCH_DC5_POSITION                     equ 0003h
PWM6DCH_DC5_SIZE                         equ 0001h
PWM6DCH_DC5_LENGTH                       equ 0001h
PWM6DCH_DC5_MASK                         equ 0008h
PWM6DCH_DC6_POSN                         equ 0004h
PWM6DCH_DC6_POSITION                     equ 0004h
PWM6DCH_DC6_SIZE                         equ 0001h
PWM6DCH_DC6_LENGTH                       equ 0001h
PWM6DCH_DC6_MASK                         equ 0010h
PWM6DCH_DC7_POSN                         equ 0005h
PWM6DCH_DC7_POSITION                     equ 0005h
PWM6DCH_DC7_SIZE                         equ 0001h
PWM6DCH_DC7_LENGTH                       equ 0001h
PWM6DCH_DC7_MASK                         equ 0020h
PWM6DCH_DC8_POSN                         equ 0006h
PWM6DCH_DC8_POSITION                     equ 0006h
PWM6DCH_DC8_SIZE                         equ 0001h
PWM6DCH_DC8_LENGTH                       equ 0001h
PWM6DCH_DC8_MASK                         equ 0040h
PWM6DCH_DC9_POSN                         equ 0007h
PWM6DCH_DC9_POSITION                     equ 0007h
PWM6DCH_DC9_SIZE                         equ 0001h
PWM6DCH_DC9_LENGTH                       equ 0001h
PWM6DCH_DC9_MASK                         equ 0080h
PWM6DCH_PWM6DC2_POSN                     equ 0000h
PWM6DCH_PWM6DC2_POSITION                 equ 0000h
PWM6DCH_PWM6DC2_SIZE                     equ 0001h
PWM6DCH_PWM6DC2_LENGTH                   equ 0001h
PWM6DCH_PWM6DC2_MASK                     equ 0001h
PWM6DCH_PWM6DC3_POSN                     equ 0001h
PWM6DCH_PWM6DC3_POSITION                 equ 0001h
PWM6DCH_PWM6DC3_SIZE                     equ 0001h
PWM6DCH_PWM6DC3_LENGTH                   equ 0001h
PWM6DCH_PWM6DC3_MASK                     equ 0002h
PWM6DCH_PWM6DC4_POSN                     equ 0002h
PWM6DCH_PWM6DC4_POSITION                 equ 0002h
PWM6DCH_PWM6DC4_SIZE                     equ 0001h
PWM6DCH_PWM6DC4_LENGTH                   equ 0001h
PWM6DCH_PWM6DC4_MASK                     equ 0004h
PWM6DCH_PWM6DC5_POSN                     equ 0003h
PWM6DCH_PWM6DC5_POSITION                 equ 0003h
PWM6DCH_PWM6DC5_SIZE                     equ 0001h
PWM6DCH_PWM6DC5_LENGTH                   equ 0001h
PWM6DCH_PWM6DC5_MASK                     equ 0008h
PWM6DCH_PWM6DC6_POSN                     equ 0004h
PWM6DCH_PWM6DC6_POSITION                 equ 0004h
PWM6DCH_PWM6DC6_SIZE                     equ 0001h
PWM6DCH_PWM6DC6_LENGTH                   equ 0001h
PWM6DCH_PWM6DC6_MASK                     equ 0010h
PWM6DCH_PWM6DC7_POSN                     equ 0005h
PWM6DCH_PWM6DC7_POSITION                 equ 0005h
PWM6DCH_PWM6DC7_SIZE                     equ 0001h
PWM6DCH_PWM6DC7_LENGTH                   equ 0001h
PWM6DCH_PWM6DC7_MASK                     equ 0020h
PWM6DCH_PWM6DC8_POSN                     equ 0006h
PWM6DCH_PWM6DC8_POSITION                 equ 0006h
PWM6DCH_PWM6DC8_SIZE                     equ 0001h
PWM6DCH_PWM6DC8_LENGTH                   equ 0001h
PWM6DCH_PWM6DC8_MASK                     equ 0040h
PWM6DCH_PWM6DC9_POSN                     equ 0007h
PWM6DCH_PWM6DC9_POSITION                 equ 0007h
PWM6DCH_PWM6DC9_SIZE                     equ 0001h
PWM6DCH_PWM6DC9_LENGTH                   equ 0001h
PWM6DCH_PWM6DC9_MASK                     equ 0080h
PWM6DCH_PWMPW2_POSN                      equ 0000h
PWM6DCH_PWMPW2_POSITION                  equ 0000h
PWM6DCH_PWMPW2_SIZE                      equ 0001h
PWM6DCH_PWMPW2_LENGTH                    equ 0001h
PWM6DCH_PWMPW2_MASK                      equ 0001h
PWM6DCH_PWMPW3_POSN                      equ 0001h
PWM6DCH_PWMPW3_POSITION                  equ 0001h
PWM6DCH_PWMPW3_SIZE                      equ 0001h
PWM6DCH_PWMPW3_LENGTH                    equ 0001h
PWM6DCH_PWMPW3_MASK                      equ 0002h
PWM6DCH_PWMPW4_POSN                      equ 0002h
PWM6DCH_PWMPW4_POSITION                  equ 0002h
PWM6DCH_PWMPW4_SIZE                      equ 0001h
PWM6DCH_PWMPW4_LENGTH                    equ 0001h
PWM6DCH_PWMPW4_MASK                      equ 0004h
PWM6DCH_PWMPW5_POSN                      equ 0003h
PWM6DCH_PWMPW5_POSITION                  equ 0003h
PWM6DCH_PWMPW5_SIZE                      equ 0001h
PWM6DCH_PWMPW5_LENGTH                    equ 0001h
PWM6DCH_PWMPW5_MASK                      equ 0008h
PWM6DCH_PWMPW6_POSN                      equ 0004h
PWM6DCH_PWMPW6_POSITION                  equ 0004h
PWM6DCH_PWMPW6_SIZE                      equ 0001h
PWM6DCH_PWMPW6_LENGTH                    equ 0001h
PWM6DCH_PWMPW6_MASK                      equ 0010h
PWM6DCH_PWMPW7_POSN                      equ 0005h
PWM6DCH_PWMPW7_POSITION                  equ 0005h
PWM6DCH_PWMPW7_SIZE                      equ 0001h
PWM6DCH_PWMPW7_LENGTH                    equ 0001h
PWM6DCH_PWMPW7_MASK                      equ 0020h
PWM6DCH_PWMPW8_POSN                      equ 0006h
PWM6DCH_PWMPW8_POSITION                  equ 0006h
PWM6DCH_PWMPW8_SIZE                      equ 0001h
PWM6DCH_PWMPW8_LENGTH                    equ 0001h
PWM6DCH_PWMPW8_MASK                      equ 0040h
PWM6DCH_PWMPW9_POSN                      equ 0007h
PWM6DCH_PWMPW9_POSITION                  equ 0007h
PWM6DCH_PWMPW9_SIZE                      equ 0001h
PWM6DCH_PWMPW9_LENGTH                    equ 0001h
PWM6DCH_PWMPW9_MASK                      equ 0080h

// Register: PWM6CON
#define PWM6CON PWM6CON
PWM6CON                                  equ 038Eh
// bitfield definitions
PWM6CON_POL_POSN                         equ 0004h
PWM6CON_POL_POSITION                     equ 0004h
PWM6CON_POL_SIZE                         equ 0001h
PWM6CON_POL_LENGTH                       equ 0001h
PWM6CON_POL_MASK                         equ 0010h
PWM6CON_OUT_POSN                         equ 0005h
PWM6CON_OUT_POSITION                     equ 0005h
PWM6CON_OUT_SIZE                         equ 0001h
PWM6CON_OUT_LENGTH                       equ 0001h
PWM6CON_OUT_MASK                         equ 0020h
PWM6CON_EN_POSN                          equ 0007h
PWM6CON_EN_POSITION                      equ 0007h
PWM6CON_EN_SIZE                          equ 0001h
PWM6CON_EN_LENGTH                        equ 0001h
PWM6CON_EN_MASK                          equ 0080h
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

// Register: NCO1ACCL
#define NCO1ACCL NCO1ACCL
NCO1ACCL                                 equ 058Ch
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
NCO1ACCH                                 equ 058Dh
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
NCO1ACCU                                 equ 058Eh
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
NCO1INCL                                 equ 058Fh
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
NCO1INCH                                 equ 0590h
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
NCO1INCU                                 equ 0591h
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
NCO1CON                                  equ 0592h
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
NCO1CLK                                  equ 0593h
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
NCO1CLK_N1CKS2_POSN                      equ 0002h
NCO1CLK_N1CKS2_POSITION                  equ 0002h
NCO1CLK_N1CKS2_SIZE                      equ 0001h
NCO1CLK_N1CKS2_LENGTH                    equ 0001h
NCO1CLK_N1CKS2_MASK                      equ 0004h
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

// Register: TMR0L
#define TMR0L TMR0L
TMR0L                                    equ 059Ch
// bitfield definitions
TMR0L_TMR0L_POSN                         equ 0000h
TMR0L_TMR0L_POSITION                     equ 0000h
TMR0L_TMR0L_SIZE                         equ 0008h
TMR0L_TMR0L_LENGTH                       equ 0008h
TMR0L_TMR0L_MASK                         equ 00FFh
TMR0L_TMR0L0_POSN                        equ 0000h
TMR0L_TMR0L0_POSITION                    equ 0000h
TMR0L_TMR0L0_SIZE                        equ 0001h
TMR0L_TMR0L0_LENGTH                      equ 0001h
TMR0L_TMR0L0_MASK                        equ 0001h
TMR0L_TMR0L1_POSN                        equ 0001h
TMR0L_TMR0L1_POSITION                    equ 0001h
TMR0L_TMR0L1_SIZE                        equ 0001h
TMR0L_TMR0L1_LENGTH                      equ 0001h
TMR0L_TMR0L1_MASK                        equ 0002h
TMR0L_TMR0L2_POSN                        equ 0002h
TMR0L_TMR0L2_POSITION                    equ 0002h
TMR0L_TMR0L2_SIZE                        equ 0001h
TMR0L_TMR0L2_LENGTH                      equ 0001h
TMR0L_TMR0L2_MASK                        equ 0004h
TMR0L_TMR0L3_POSN                        equ 0003h
TMR0L_TMR0L3_POSITION                    equ 0003h
TMR0L_TMR0L3_SIZE                        equ 0001h
TMR0L_TMR0L3_LENGTH                      equ 0001h
TMR0L_TMR0L3_MASK                        equ 0008h
TMR0L_TMR0L4_POSN                        equ 0004h
TMR0L_TMR0L4_POSITION                    equ 0004h
TMR0L_TMR0L4_SIZE                        equ 0001h
TMR0L_TMR0L4_LENGTH                      equ 0001h
TMR0L_TMR0L4_MASK                        equ 0010h
TMR0L_TMR0L5_POSN                        equ 0005h
TMR0L_TMR0L5_POSITION                    equ 0005h
TMR0L_TMR0L5_SIZE                        equ 0001h
TMR0L_TMR0L5_LENGTH                      equ 0001h
TMR0L_TMR0L5_MASK                        equ 0020h
TMR0L_TMR0L6_POSN                        equ 0006h
TMR0L_TMR0L6_POSITION                    equ 0006h
TMR0L_TMR0L6_SIZE                        equ 0001h
TMR0L_TMR0L6_LENGTH                      equ 0001h
TMR0L_TMR0L6_MASK                        equ 0040h
TMR0L_TMR0L7_POSN                        equ 0007h
TMR0L_TMR0L7_POSITION                    equ 0007h
TMR0L_TMR0L7_SIZE                        equ 0001h
TMR0L_TMR0L7_LENGTH                      equ 0001h
TMR0L_TMR0L7_MASK                        equ 0080h

// Register: TMR0H
#define TMR0H TMR0H
TMR0H                                    equ 059Dh
// bitfield definitions
TMR0H_TMR0H_POSN                         equ 0000h
TMR0H_TMR0H_POSITION                     equ 0000h
TMR0H_TMR0H_SIZE                         equ 0008h
TMR0H_TMR0H_LENGTH                       equ 0008h
TMR0H_TMR0H_MASK                         equ 00FFh
TMR0H_T0PR_POSN                          equ 0000h
TMR0H_T0PR_POSITION                      equ 0000h
TMR0H_T0PR_SIZE                          equ 0008h
TMR0H_T0PR_LENGTH                        equ 0008h
TMR0H_T0PR_MASK                          equ 00FFh
TMR0H_TMR0H0_POSN                        equ 0000h
TMR0H_TMR0H0_POSITION                    equ 0000h
TMR0H_TMR0H0_SIZE                        equ 0001h
TMR0H_TMR0H0_LENGTH                      equ 0001h
TMR0H_TMR0H0_MASK                        equ 0001h
TMR0H_TMR0H1_POSN                        equ 0001h
TMR0H_TMR0H1_POSITION                    equ 0001h
TMR0H_TMR0H1_SIZE                        equ 0001h
TMR0H_TMR0H1_LENGTH                      equ 0001h
TMR0H_TMR0H1_MASK                        equ 0002h
TMR0H_TMR0H2_POSN                        equ 0002h
TMR0H_TMR0H2_POSITION                    equ 0002h
TMR0H_TMR0H2_SIZE                        equ 0001h
TMR0H_TMR0H2_LENGTH                      equ 0001h
TMR0H_TMR0H2_MASK                        equ 0004h
TMR0H_TMR0H3_POSN                        equ 0003h
TMR0H_TMR0H3_POSITION                    equ 0003h
TMR0H_TMR0H3_SIZE                        equ 0001h
TMR0H_TMR0H3_LENGTH                      equ 0001h
TMR0H_TMR0H3_MASK                        equ 0008h
TMR0H_TMR0H4_POSN                        equ 0004h
TMR0H_TMR0H4_POSITION                    equ 0004h
TMR0H_TMR0H4_SIZE                        equ 0001h
TMR0H_TMR0H4_LENGTH                      equ 0001h
TMR0H_TMR0H4_MASK                        equ 0010h
TMR0H_TMR0H5_POSN                        equ 0005h
TMR0H_TMR0H5_POSITION                    equ 0005h
TMR0H_TMR0H5_SIZE                        equ 0001h
TMR0H_TMR0H5_LENGTH                      equ 0001h
TMR0H_TMR0H5_MASK                        equ 0020h
TMR0H_TMR0H6_POSN                        equ 0006h
TMR0H_TMR0H6_POSITION                    equ 0006h
TMR0H_TMR0H6_SIZE                        equ 0001h
TMR0H_TMR0H6_LENGTH                      equ 0001h
TMR0H_TMR0H6_MASK                        equ 0040h
TMR0H_TMR0H7_POSN                        equ 0007h
TMR0H_TMR0H7_POSITION                    equ 0007h
TMR0H_TMR0H7_SIZE                        equ 0001h
TMR0H_TMR0H7_LENGTH                      equ 0001h
TMR0H_TMR0H7_MASK                        equ 0080h
TMR0H_T0PR0_POSN                         equ 0000h
TMR0H_T0PR0_POSITION                     equ 0000h
TMR0H_T0PR0_SIZE                         equ 0001h
TMR0H_T0PR0_LENGTH                       equ 0001h
TMR0H_T0PR0_MASK                         equ 0001h
TMR0H_T0PR1_POSN                         equ 0001h
TMR0H_T0PR1_POSITION                     equ 0001h
TMR0H_T0PR1_SIZE                         equ 0001h
TMR0H_T0PR1_LENGTH                       equ 0001h
TMR0H_T0PR1_MASK                         equ 0002h
TMR0H_T0PR2_POSN                         equ 0002h
TMR0H_T0PR2_POSITION                     equ 0002h
TMR0H_T0PR2_SIZE                         equ 0001h
TMR0H_T0PR2_LENGTH                       equ 0001h
TMR0H_T0PR2_MASK                         equ 0004h
TMR0H_T0PR3_POSN                         equ 0003h
TMR0H_T0PR3_POSITION                     equ 0003h
TMR0H_T0PR3_SIZE                         equ 0001h
TMR0H_T0PR3_LENGTH                       equ 0001h
TMR0H_T0PR3_MASK                         equ 0008h
TMR0H_T0PR4_POSN                         equ 0004h
TMR0H_T0PR4_POSITION                     equ 0004h
TMR0H_T0PR4_SIZE                         equ 0001h
TMR0H_T0PR4_LENGTH                       equ 0001h
TMR0H_T0PR4_MASK                         equ 0010h
TMR0H_T0PR5_POSN                         equ 0005h
TMR0H_T0PR5_POSITION                     equ 0005h
TMR0H_T0PR5_SIZE                         equ 0001h
TMR0H_T0PR5_LENGTH                       equ 0001h
TMR0H_T0PR5_MASK                         equ 0020h
TMR0H_T0PR6_POSN                         equ 0006h
TMR0H_T0PR6_POSITION                     equ 0006h
TMR0H_T0PR6_SIZE                         equ 0001h
TMR0H_T0PR6_LENGTH                       equ 0001h
TMR0H_T0PR6_MASK                         equ 0040h
TMR0H_T0PR7_POSN                         equ 0007h
TMR0H_T0PR7_POSITION                     equ 0007h
TMR0H_T0PR7_SIZE                         equ 0001h
TMR0H_T0PR7_LENGTH                       equ 0001h
TMR0H_T0PR7_MASK                         equ 0080h

// Register: T0CON0
#define T0CON0 T0CON0
T0CON0                                   equ 059Eh
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
T0CON1                                   equ 059Fh
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
T0CON1_T0PS0_POSN                        equ 0000h
T0CON1_T0PS0_POSITION                    equ 0000h
T0CON1_T0PS0_SIZE                        equ 0001h
T0CON1_T0PS0_LENGTH                      equ 0001h
T0CON1_T0PS0_MASK                        equ 0001h
T0CON1_T0PS1_POSN                        equ 0001h
T0CON1_T0PS1_POSITION                    equ 0001h
T0CON1_T0PS1_SIZE                        equ 0001h
T0CON1_T0PS1_LENGTH                      equ 0001h
T0CON1_T0PS1_MASK                        equ 0002h
T0CON1_T0PS2_POSN                        equ 0002h
T0CON1_T0PS2_POSITION                    equ 0002h
T0CON1_T0PS2_SIZE                        equ 0001h
T0CON1_T0PS2_LENGTH                      equ 0001h
T0CON1_T0PS2_MASK                        equ 0004h
T0CON1_T0PS3_POSN                        equ 0003h
T0CON1_T0PS3_POSITION                    equ 0003h
T0CON1_T0PS3_SIZE                        equ 0001h
T0CON1_T0PS3_LENGTH                      equ 0001h
T0CON1_T0PS3_MASK                        equ 0008h
T0CON1_T0PS_POSN                         equ 0000h
T0CON1_T0PS_POSITION                     equ 0000h
T0CON1_T0PS_SIZE                         equ 0004h
T0CON1_T0PS_LENGTH                       equ 0004h
T0CON1_T0PS_MASK                         equ 000Fh

// Register: CWG1CLKCON
#define CWG1CLKCON CWG1CLKCON
CWG1CLKCON                               equ 060Ch
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
CWG1DAT                                  equ 060Dh
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
CWG1DBR                                  equ 060Eh
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
CWG1DBF                                  equ 060Fh
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
CWG1CON0                                 equ 0610h
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
CWG1CON1                                 equ 0611h
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
CWG1AS0                                  equ 0612h
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
CWG1AS1                                  equ 0613h
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
CWG1STR                                  equ 0614h
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

// Register: PIR0
#define PIR0 PIR0
PIR0                                     equ 070Ch
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
PIR1                                     equ 070Dh
// bitfield definitions
PIR1_ADIF_POSN                           equ 0000h
PIR1_ADIF_POSITION                       equ 0000h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0001h
PIR1_ADTIF_POSN                          equ 0001h
PIR1_ADTIF_POSITION                      equ 0001h
PIR1_ADTIF_SIZE                          equ 0001h
PIR1_ADTIF_LENGTH                        equ 0001h
PIR1_ADTIF_MASK                          equ 0002h
PIR1_CSWIF_POSN                          equ 0006h
PIR1_CSWIF_POSITION                      equ 0006h
PIR1_CSWIF_SIZE                          equ 0001h
PIR1_CSWIF_LENGTH                        equ 0001h
PIR1_CSWIF_MASK                          equ 0040h
PIR1_OSFIF_POSN                          equ 0007h
PIR1_OSFIF_POSITION                      equ 0007h
PIR1_OSFIF_SIZE                          equ 0001h
PIR1_OSFIF_LENGTH                        equ 0001h
PIR1_OSFIF_MASK                          equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 070Eh
// bitfield definitions
PIR2_C1IF_POSN                           equ 0000h
PIR2_C1IF_POSITION                       equ 0000h
PIR2_C1IF_SIZE                           equ 0001h
PIR2_C1IF_LENGTH                         equ 0001h
PIR2_C1IF_MASK                           equ 0001h
PIR2_C2IF_POSN                           equ 0001h
PIR2_C2IF_POSITION                       equ 0001h
PIR2_C2IF_SIZE                           equ 0001h
PIR2_C2IF_LENGTH                         equ 0001h
PIR2_C2IF_MASK                           equ 0002h
PIR2_ZCDIF_POSN                          equ 0006h
PIR2_ZCDIF_POSITION                      equ 0006h
PIR2_ZCDIF_SIZE                          equ 0001h
PIR2_ZCDIF_LENGTH                        equ 0001h
PIR2_ZCDIF_MASK                          equ 0040h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 070Fh
// bitfield definitions
PIR3_SSP1IF_POSN                         equ 0000h
PIR3_SSP1IF_POSITION                     equ 0000h
PIR3_SSP1IF_SIZE                         equ 0001h
PIR3_SSP1IF_LENGTH                       equ 0001h
PIR3_SSP1IF_MASK                         equ 0001h
PIR3_BCL1IF_POSN                         equ 0001h
PIR3_BCL1IF_POSITION                     equ 0001h
PIR3_BCL1IF_SIZE                         equ 0001h
PIR3_BCL1IF_LENGTH                       equ 0001h
PIR3_BCL1IF_MASK                         equ 0002h
PIR3_SSP2IF_POSN                         equ 0002h
PIR3_SSP2IF_POSITION                     equ 0002h
PIR3_SSP2IF_SIZE                         equ 0001h
PIR3_SSP2IF_LENGTH                       equ 0001h
PIR3_SSP2IF_MASK                         equ 0004h
PIR3_BCL2IF_POSN                         equ 0003h
PIR3_BCL2IF_POSITION                     equ 0003h
PIR3_BCL2IF_SIZE                         equ 0001h
PIR3_BCL2IF_LENGTH                       equ 0001h
PIR3_BCL2IF_MASK                         equ 0008h
PIR3_TX1IF_POSN                          equ 0004h
PIR3_TX1IF_POSITION                      equ 0004h
PIR3_TX1IF_SIZE                          equ 0001h
PIR3_TX1IF_LENGTH                        equ 0001h
PIR3_TX1IF_MASK                          equ 0010h
PIR3_RC1IF_POSN                          equ 0005h
PIR3_RC1IF_POSITION                      equ 0005h
PIR3_RC1IF_SIZE                          equ 0001h
PIR3_RC1IF_LENGTH                        equ 0001h
PIR3_RC1IF_MASK                          equ 0020h
PIR3_TX2IF_POSN                          equ 0006h
PIR3_TX2IF_POSITION                      equ 0006h
PIR3_TX2IF_SIZE                          equ 0001h
PIR3_TX2IF_LENGTH                        equ 0001h
PIR3_TX2IF_MASK                          equ 0040h
PIR3_RC2IF_POSN                          equ 0007h
PIR3_RC2IF_POSITION                      equ 0007h
PIR3_RC2IF_SIZE                          equ 0001h
PIR3_RC2IF_LENGTH                        equ 0001h
PIR3_RC2IF_MASK                          equ 0080h

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0710h
// bitfield definitions
PIR4_TMR1IF_POSN                         equ 0000h
PIR4_TMR1IF_POSITION                     equ 0000h
PIR4_TMR1IF_SIZE                         equ 0001h
PIR4_TMR1IF_LENGTH                       equ 0001h
PIR4_TMR1IF_MASK                         equ 0001h
PIR4_TMR2IF_POSN                         equ 0001h
PIR4_TMR2IF_POSITION                     equ 0001h
PIR4_TMR2IF_SIZE                         equ 0001h
PIR4_TMR2IF_LENGTH                       equ 0001h
PIR4_TMR2IF_MASK                         equ 0002h

// Register: PIR5
#define PIR5 PIR5
PIR5                                     equ 0711h
// bitfield definitions
PIR5_TMR1GIF_POSN                        equ 0000h
PIR5_TMR1GIF_POSITION                    equ 0000h
PIR5_TMR1GIF_SIZE                        equ 0001h
PIR5_TMR1GIF_LENGTH                      equ 0001h
PIR5_TMR1GIF_MASK                        equ 0001h
PIR5_CLC1IF_POSN                         equ 0004h
PIR5_CLC1IF_POSITION                     equ 0004h
PIR5_CLC1IF_SIZE                         equ 0001h
PIR5_CLC1IF_LENGTH                       equ 0001h
PIR5_CLC1IF_MASK                         equ 0010h
PIR5_CLC2IF_POSN                         equ 0005h
PIR5_CLC2IF_POSITION                     equ 0005h
PIR5_CLC2IF_SIZE                         equ 0001h
PIR5_CLC2IF_LENGTH                       equ 0001h
PIR5_CLC2IF_MASK                         equ 0020h
PIR5_CLC3IF_POSN                         equ 0006h
PIR5_CLC3IF_POSITION                     equ 0006h
PIR5_CLC3IF_SIZE                         equ 0001h
PIR5_CLC3IF_LENGTH                       equ 0001h
PIR5_CLC3IF_MASK                         equ 0040h
PIR5_CLC4IF_POSN                         equ 0007h
PIR5_CLC4IF_POSITION                     equ 0007h
PIR5_CLC4IF_SIZE                         equ 0001h
PIR5_CLC4IF_LENGTH                       equ 0001h
PIR5_CLC4IF_MASK                         equ 0080h

// Register: PIR6
#define PIR6 PIR6
PIR6                                     equ 0712h
// bitfield definitions
PIR6_CCP1IF_POSN                         equ 0000h
PIR6_CCP1IF_POSITION                     equ 0000h
PIR6_CCP1IF_SIZE                         equ 0001h
PIR6_CCP1IF_LENGTH                       equ 0001h
PIR6_CCP1IF_MASK                         equ 0001h
PIR6_CCP2IF_POSN                         equ 0001h
PIR6_CCP2IF_POSITION                     equ 0001h
PIR6_CCP2IF_SIZE                         equ 0001h
PIR6_CCP2IF_LENGTH                       equ 0001h
PIR6_CCP2IF_MASK                         equ 0002h

// Register: PIR7
#define PIR7 PIR7
PIR7                                     equ 0713h
// bitfield definitions
PIR7_CWG1IF_POSN                         equ 0000h
PIR7_CWG1IF_POSITION                     equ 0000h
PIR7_CWG1IF_SIZE                         equ 0001h
PIR7_CWG1IF_LENGTH                       equ 0001h
PIR7_CWG1IF_MASK                         equ 0001h
PIR7_NCO1IF_POSN                         equ 0004h
PIR7_NCO1IF_POSITION                     equ 0004h
PIR7_NCO1IF_SIZE                         equ 0001h
PIR7_NCO1IF_LENGTH                       equ 0001h
PIR7_NCO1IF_MASK                         equ 0010h
PIR7_NVMIF_POSN                          equ 0005h
PIR7_NVMIF_POSITION                      equ 0005h
PIR7_NVMIF_SIZE                          equ 0001h
PIR7_NVMIF_LENGTH                        equ 0001h
PIR7_NVMIF_MASK                          equ 0020h
PIR7_NCOIF_POSN                          equ 0004h
PIR7_NCOIF_POSITION                      equ 0004h
PIR7_NCOIF_SIZE                          equ 0001h
PIR7_NCOIF_LENGTH                        equ 0001h
PIR7_NCOIF_MASK                          equ 0010h

// Register: PIE0
#define PIE0 PIE0
PIE0                                     equ 0716h
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
PIE1                                     equ 0717h
// bitfield definitions
PIE1_ADIE_POSN                           equ 0000h
PIE1_ADIE_POSITION                       equ 0000h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0001h
PIE1_ADTIE_POSN                          equ 0001h
PIE1_ADTIE_POSITION                      equ 0001h
PIE1_ADTIE_SIZE                          equ 0001h
PIE1_ADTIE_LENGTH                        equ 0001h
PIE1_ADTIE_MASK                          equ 0002h
PIE1_CSWIE_POSN                          equ 0006h
PIE1_CSWIE_POSITION                      equ 0006h
PIE1_CSWIE_SIZE                          equ 0001h
PIE1_CSWIE_LENGTH                        equ 0001h
PIE1_CSWIE_MASK                          equ 0040h
PIE1_OSFIE_POSN                          equ 0007h
PIE1_OSFIE_POSITION                      equ 0007h
PIE1_OSFIE_SIZE                          equ 0001h
PIE1_OSFIE_LENGTH                        equ 0001h
PIE1_OSFIE_MASK                          equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0718h
// bitfield definitions
PIE2_C1IE_POSN                           equ 0000h
PIE2_C1IE_POSITION                       equ 0000h
PIE2_C1IE_SIZE                           equ 0001h
PIE2_C1IE_LENGTH                         equ 0001h
PIE2_C1IE_MASK                           equ 0001h
PIE2_C2IE_POSN                           equ 0001h
PIE2_C2IE_POSITION                       equ 0001h
PIE2_C2IE_SIZE                           equ 0001h
PIE2_C2IE_LENGTH                         equ 0001h
PIE2_C2IE_MASK                           equ 0002h
PIE2_ZCDIE_POSN                          equ 0006h
PIE2_ZCDIE_POSITION                      equ 0006h
PIE2_ZCDIE_SIZE                          equ 0001h
PIE2_ZCDIE_LENGTH                        equ 0001h
PIE2_ZCDIE_MASK                          equ 0040h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0719h
// bitfield definitions
PIE3_SSP1IE_POSN                         equ 0000h
PIE3_SSP1IE_POSITION                     equ 0000h
PIE3_SSP1IE_SIZE                         equ 0001h
PIE3_SSP1IE_LENGTH                       equ 0001h
PIE3_SSP1IE_MASK                         equ 0001h
PIE3_BCL1IE_POSN                         equ 0001h
PIE3_BCL1IE_POSITION                     equ 0001h
PIE3_BCL1IE_SIZE                         equ 0001h
PIE3_BCL1IE_LENGTH                       equ 0001h
PIE3_BCL1IE_MASK                         equ 0002h
PIE3_SSP2IE_POSN                         equ 0002h
PIE3_SSP2IE_POSITION                     equ 0002h
PIE3_SSP2IE_SIZE                         equ 0001h
PIE3_SSP2IE_LENGTH                       equ 0001h
PIE3_SSP2IE_MASK                         equ 0004h
PIE3_BCL2IE_POSN                         equ 0003h
PIE3_BCL2IE_POSITION                     equ 0003h
PIE3_BCL2IE_SIZE                         equ 0001h
PIE3_BCL2IE_LENGTH                       equ 0001h
PIE3_BCL2IE_MASK                         equ 0008h
PIE3_TX1IE_POSN                          equ 0004h
PIE3_TX1IE_POSITION                      equ 0004h
PIE3_TX1IE_SIZE                          equ 0001h
PIE3_TX1IE_LENGTH                        equ 0001h
PIE3_TX1IE_MASK                          equ 0010h
PIE3_RC1IE_POSN                          equ 0005h
PIE3_RC1IE_POSITION                      equ 0005h
PIE3_RC1IE_SIZE                          equ 0001h
PIE3_RC1IE_LENGTH                        equ 0001h
PIE3_RC1IE_MASK                          equ 0020h
PIE3_TX2IE_POSN                          equ 0006h
PIE3_TX2IE_POSITION                      equ 0006h
PIE3_TX2IE_SIZE                          equ 0001h
PIE3_TX2IE_LENGTH                        equ 0001h
PIE3_TX2IE_MASK                          equ 0040h
PIE3_RC2IE_POSN                          equ 0007h
PIE3_RC2IE_POSITION                      equ 0007h
PIE3_RC2IE_SIZE                          equ 0001h
PIE3_RC2IE_LENGTH                        equ 0001h
PIE3_RC2IE_MASK                          equ 0080h

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 071Ah
// bitfield definitions
PIE4_TMR1IE_POSN                         equ 0000h
PIE4_TMR1IE_POSITION                     equ 0000h
PIE4_TMR1IE_SIZE                         equ 0001h
PIE4_TMR1IE_LENGTH                       equ 0001h
PIE4_TMR1IE_MASK                         equ 0001h
PIE4_TMR2IE_POSN                         equ 0001h
PIE4_TMR2IE_POSITION                     equ 0001h
PIE4_TMR2IE_SIZE                         equ 0001h
PIE4_TMR2IE_LENGTH                       equ 0001h
PIE4_TMR2IE_MASK                         equ 0002h

// Register: PIE5
#define PIE5 PIE5
PIE5                                     equ 071Bh
// bitfield definitions
PIE5_TMR1GIE_POSN                        equ 0000h
PIE5_TMR1GIE_POSITION                    equ 0000h
PIE5_TMR1GIE_SIZE                        equ 0001h
PIE5_TMR1GIE_LENGTH                      equ 0001h
PIE5_TMR1GIE_MASK                        equ 0001h
PIE5_CLC1IE_POSN                         equ 0004h
PIE5_CLC1IE_POSITION                     equ 0004h
PIE5_CLC1IE_SIZE                         equ 0001h
PIE5_CLC1IE_LENGTH                       equ 0001h
PIE5_CLC1IE_MASK                         equ 0010h
PIE5_CLC2IE_POSN                         equ 0005h
PIE5_CLC2IE_POSITION                     equ 0005h
PIE5_CLC2IE_SIZE                         equ 0001h
PIE5_CLC2IE_LENGTH                       equ 0001h
PIE5_CLC2IE_MASK                         equ 0020h
PIE5_CLC3IE_POSN                         equ 0006h
PIE5_CLC3IE_POSITION                     equ 0006h
PIE5_CLC3IE_SIZE                         equ 0001h
PIE5_CLC3IE_LENGTH                       equ 0001h
PIE5_CLC3IE_MASK                         equ 0040h
PIE5_CLC4IE_POSN                         equ 0007h
PIE5_CLC4IE_POSITION                     equ 0007h
PIE5_CLC4IE_SIZE                         equ 0001h
PIE5_CLC4IE_LENGTH                       equ 0001h
PIE5_CLC4IE_MASK                         equ 0080h

// Register: PIE6
#define PIE6 PIE6
PIE6                                     equ 071Ch
// bitfield definitions
PIE6_CCP1IE_POSN                         equ 0000h
PIE6_CCP1IE_POSITION                     equ 0000h
PIE6_CCP1IE_SIZE                         equ 0001h
PIE6_CCP1IE_LENGTH                       equ 0001h
PIE6_CCP1IE_MASK                         equ 0001h
PIE6_CCP2IE_POSN                         equ 0001h
PIE6_CCP2IE_POSITION                     equ 0001h
PIE6_CCP2IE_SIZE                         equ 0001h
PIE6_CCP2IE_LENGTH                       equ 0001h
PIE6_CCP2IE_MASK                         equ 0002h

// Register: PIE7
#define PIE7 PIE7
PIE7                                     equ 071Dh
// bitfield definitions
PIE7_CWG1IE_POSN                         equ 0000h
PIE7_CWG1IE_POSITION                     equ 0000h
PIE7_CWG1IE_SIZE                         equ 0001h
PIE7_CWG1IE_LENGTH                       equ 0001h
PIE7_CWG1IE_MASK                         equ 0001h
PIE7_NCO1IE_POSN                         equ 0004h
PIE7_NCO1IE_POSITION                     equ 0004h
PIE7_NCO1IE_SIZE                         equ 0001h
PIE7_NCO1IE_LENGTH                       equ 0001h
PIE7_NCO1IE_MASK                         equ 0010h
PIE7_NVMIE_POSN                          equ 0005h
PIE7_NVMIE_POSITION                      equ 0005h
PIE7_NVMIE_SIZE                          equ 0001h
PIE7_NVMIE_LENGTH                        equ 0001h
PIE7_NVMIE_MASK                          equ 0020h
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
PMD1_NCO1MD_POSN                         equ 0007h
PMD1_NCO1MD_POSITION                     equ 0007h
PMD1_NCO1MD_SIZE                         equ 0001h
PMD1_NCO1MD_LENGTH                       equ 0001h
PMD1_NCO1MD_MASK                         equ 0080h
PMD1_NCOMD_POSN                          equ 0007h
PMD1_NCOMD_POSITION                      equ 0007h
PMD1_NCOMD_SIZE                          equ 0001h
PMD1_NCOMD_LENGTH                        equ 0001h
PMD1_NCOMD_MASK                          equ 0080h

// Register: PMD2
#define PMD2 PMD2
PMD2                                     equ 0798h
// bitfield definitions
PMD2_ZCDMD_POSN                          equ 0000h
PMD2_ZCDMD_POSITION                      equ 0000h
PMD2_ZCDMD_SIZE                          equ 0001h
PMD2_ZCDMD_LENGTH                        equ 0001h
PMD2_ZCDMD_MASK                          equ 0001h
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
PMD2_DAC1MD_POSN                         equ 0006h
PMD2_DAC1MD_POSITION                     equ 0006h
PMD2_DAC1MD_SIZE                         equ 0001h
PMD2_DAC1MD_LENGTH                       equ 0001h
PMD2_DAC1MD_MASK                         equ 0040h

// Register: PMD3
#define PMD3 PMD3
PMD3                                     equ 0799h
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
PMD3_PWM3MD_POSN                         equ 0002h
PMD3_PWM3MD_POSITION                     equ 0002h
PMD3_PWM3MD_SIZE                         equ 0001h
PMD3_PWM3MD_LENGTH                       equ 0001h
PMD3_PWM3MD_MASK                         equ 0004h
PMD3_PWM4MD_POSN                         equ 0003h
PMD3_PWM4MD_POSITION                     equ 0003h
PMD3_PWM4MD_SIZE                         equ 0001h
PMD3_PWM4MD_LENGTH                       equ 0001h
PMD3_PWM4MD_MASK                         equ 0008h
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

// Register: PMD4
#define PMD4 PMD4
PMD4                                     equ 079Ah
// bitfield definitions
PMD4_CWG1MD_POSN                         equ 0000h
PMD4_CWG1MD_POSITION                     equ 0000h
PMD4_CWG1MD_SIZE                         equ 0001h
PMD4_CWG1MD_LENGTH                       equ 0001h
PMD4_CWG1MD_MASK                         equ 0001h
PMD4_MSSP1MD_POSN                        equ 0004h
PMD4_MSSP1MD_POSITION                    equ 0004h
PMD4_MSSP1MD_SIZE                        equ 0001h
PMD4_MSSP1MD_LENGTH                      equ 0001h
PMD4_MSSP1MD_MASK                        equ 0010h
PMD4_MSSP2MD_POSN                        equ 0005h
PMD4_MSSP2MD_POSITION                    equ 0005h
PMD4_MSSP2MD_SIZE                        equ 0001h
PMD4_MSSP2MD_LENGTH                      equ 0001h
PMD4_MSSP2MD_MASK                        equ 0020h
PMD4_UART1MD_POSN                        equ 0006h
PMD4_UART1MD_POSITION                    equ 0006h
PMD4_UART1MD_SIZE                        equ 0001h
PMD4_UART1MD_LENGTH                      equ 0001h
PMD4_UART1MD_MASK                        equ 0040h
PMD4_UART2MD_POSN                        equ 0007h
PMD4_UART2MD_POSITION                    equ 0007h
PMD4_UART2MD_SIZE                        equ 0001h
PMD4_UART2MD_LENGTH                      equ 0001h
PMD4_UART2MD_MASK                        equ 0080h

// Register: PMD5
#define PMD5 PMD5
PMD5                                     equ 079Bh
// bitfield definitions
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

// Register: WDTCON0
#define WDTCON0 WDTCON0
WDTCON0                                  equ 080Ch
// bitfield definitions
WDTCON0_SEN_POSN                         equ 0000h
WDTCON0_SEN_POSITION                     equ 0000h
WDTCON0_SEN_SIZE                         equ 0001h
WDTCON0_SEN_LENGTH                       equ 0001h
WDTCON0_SEN_MASK                         equ 0001h
WDTCON0_WDTPS_POSN                       equ 0001h
WDTCON0_WDTPS_POSITION                   equ 0001h
WDTCON0_WDTPS_SIZE                       equ 0005h
WDTCON0_WDTPS_LENGTH                     equ 0005h
WDTCON0_WDTPS_MASK                       equ 003Eh
WDTCON0_SWDTEN_POSN                      equ 0000h
WDTCON0_SWDTEN_POSITION                  equ 0000h
WDTCON0_SWDTEN_SIZE                      equ 0001h
WDTCON0_SWDTEN_LENGTH                    equ 0001h
WDTCON0_SWDTEN_MASK                      equ 0001h
WDTCON0_WDTSEN_POSN                      equ 0000h
WDTCON0_WDTSEN_POSITION                  equ 0000h
WDTCON0_WDTSEN_SIZE                      equ 0001h
WDTCON0_WDTSEN_LENGTH                    equ 0001h
WDTCON0_WDTSEN_MASK                      equ 0001h
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
WDTCON1_WINDOW_POSN                      equ 0000h
WDTCON1_WINDOW_POSITION                  equ 0000h
WDTCON1_WINDOW_SIZE                      equ 0003h
WDTCON1_WINDOW_LENGTH                    equ 0003h
WDTCON1_WINDOW_MASK                      equ 0007h
WDTCON1_WDTCS_POSN                       equ 0004h
WDTCON1_WDTCS_POSITION                   equ 0004h
WDTCON1_WDTCS_SIZE                       equ 0003h
WDTCON1_WDTCS_LENGTH                     equ 0003h
WDTCON1_WDTCS_MASK                       equ 0070h
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
WDTCON1_WDTWINDOW_POSN                   equ 0000h
WDTCON1_WDTWINDOW_POSITION               equ 0000h
WDTCON1_WDTWINDOW_SIZE                   equ 0003h
WDTCON1_WDTWINDOW_LENGTH                 equ 0003h
WDTCON1_WDTWINDOW_MASK                   equ 0007h
WDTCON1_WDTWINDOW0_POSN                  equ 0000h
WDTCON1_WDTWINDOW0_POSITION              equ 0000h
WDTCON1_WDTWINDOW0_SIZE                  equ 0001h
WDTCON1_WDTWINDOW0_LENGTH                equ 0001h
WDTCON1_WDTWINDOW0_MASK                  equ 0001h
WDTCON1_WDTWINDOW1_POSN                  equ 0001h
WDTCON1_WDTWINDOW1_POSITION              equ 0001h
WDTCON1_WDTWINDOW1_SIZE                  equ 0001h
WDTCON1_WDTWINDOW1_LENGTH                equ 0001h
WDTCON1_WDTWINDOW1_MASK                  equ 0002h
WDTCON1_WDTWINDOW2_POSN                  equ 0002h
WDTCON1_WDTWINDOW2_POSITION              equ 0002h
WDTCON1_WDTWINDOW2_SIZE                  equ 0001h
WDTCON1_WDTWINDOW2_LENGTH                equ 0001h
WDTCON1_WDTWINDOW2_MASK                  equ 0004h
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
WDTPSL_WDTPSCNT_POSN                     equ 0000h
WDTPSL_WDTPSCNT_POSITION                 equ 0000h
WDTPSL_WDTPSCNT_SIZE                     equ 0008h
WDTPSL_WDTPSCNT_LENGTH                   equ 0008h
WDTPSL_WDTPSCNT_MASK                     equ 00FFh
WDTPSL_WDTPSCNT0_POSN                    equ 0000h
WDTPSL_WDTPSCNT0_POSITION                equ 0000h
WDTPSL_WDTPSCNT0_SIZE                    equ 0001h
WDTPSL_WDTPSCNT0_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT0_MASK                    equ 0001h
WDTPSL_WDTPSCNT1_POSN                    equ 0001h
WDTPSL_WDTPSCNT1_POSITION                equ 0001h
WDTPSL_WDTPSCNT1_SIZE                    equ 0001h
WDTPSL_WDTPSCNT1_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT1_MASK                    equ 0002h
WDTPSL_WDTPSCNT2_POSN                    equ 0002h
WDTPSL_WDTPSCNT2_POSITION                equ 0002h
WDTPSL_WDTPSCNT2_SIZE                    equ 0001h
WDTPSL_WDTPSCNT2_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT2_MASK                    equ 0004h
WDTPSL_WDTPSCNT3_POSN                    equ 0003h
WDTPSL_WDTPSCNT3_POSITION                equ 0003h
WDTPSL_WDTPSCNT3_SIZE                    equ 0001h
WDTPSL_WDTPSCNT3_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT3_MASK                    equ 0008h
WDTPSL_WDTPSCNT4_POSN                    equ 0004h
WDTPSL_WDTPSCNT4_POSITION                equ 0004h
WDTPSL_WDTPSCNT4_SIZE                    equ 0001h
WDTPSL_WDTPSCNT4_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT4_MASK                    equ 0010h
WDTPSL_WDTPSCNT5_POSN                    equ 0005h
WDTPSL_WDTPSCNT5_POSITION                equ 0005h
WDTPSL_WDTPSCNT5_SIZE                    equ 0001h
WDTPSL_WDTPSCNT5_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT5_MASK                    equ 0020h
WDTPSL_WDTPSCNT6_POSN                    equ 0006h
WDTPSL_WDTPSCNT6_POSITION                equ 0006h
WDTPSL_WDTPSCNT6_SIZE                    equ 0001h
WDTPSL_WDTPSCNT6_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT6_MASK                    equ 0040h
WDTPSL_WDTPSCNT7_POSN                    equ 0007h
WDTPSL_WDTPSCNT7_POSITION                equ 0007h
WDTPSL_WDTPSCNT7_SIZE                    equ 0001h
WDTPSL_WDTPSCNT7_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT7_MASK                    equ 0080h

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
WDTPSH_WDTPSCNT_POSN                     equ 0000h
WDTPSH_WDTPSCNT_POSITION                 equ 0000h
WDTPSH_WDTPSCNT_SIZE                     equ 0008h
WDTPSH_WDTPSCNT_LENGTH                   equ 0008h
WDTPSH_WDTPSCNT_MASK                     equ 00FFh
WDTPSH_WDTPSCNT8_POSN                    equ 0000h
WDTPSH_WDTPSCNT8_POSITION                equ 0000h
WDTPSH_WDTPSCNT8_SIZE                    equ 0001h
WDTPSH_WDTPSCNT8_LENGTH                  equ 0001h
WDTPSH_WDTPSCNT8_MASK                    equ 0001h
WDTPSH_WDTPSCNT9_POSN                    equ 0001h
WDTPSH_WDTPSCNT9_POSITION                equ 0001h
WDTPSH_WDTPSCNT9_SIZE                    equ 0001h
WDTPSH_WDTPSCNT9_LENGTH                  equ 0001h
WDTPSH_WDTPSCNT9_MASK                    equ 0002h
WDTPSH_WDTPSCNT10_POSN                   equ 0002h
WDTPSH_WDTPSCNT10_POSITION               equ 0002h
WDTPSH_WDTPSCNT10_SIZE                   equ 0001h
WDTPSH_WDTPSCNT10_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT10_MASK                   equ 0004h
WDTPSH_WDTPSCNT11_POSN                   equ 0003h
WDTPSH_WDTPSCNT11_POSITION               equ 0003h
WDTPSH_WDTPSCNT11_SIZE                   equ 0001h
WDTPSH_WDTPSCNT11_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT11_MASK                   equ 0008h
WDTPSH_WDTPSCNT12_POSN                   equ 0004h
WDTPSH_WDTPSCNT12_POSITION               equ 0004h
WDTPSH_WDTPSCNT12_SIZE                   equ 0001h
WDTPSH_WDTPSCNT12_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT12_MASK                   equ 0010h
WDTPSH_WDTPSCNT13_POSN                   equ 0005h
WDTPSH_WDTPSCNT13_POSITION               equ 0005h
WDTPSH_WDTPSCNT13_SIZE                   equ 0001h
WDTPSH_WDTPSCNT13_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT13_MASK                   equ 0020h
WDTPSH_WDTPSCNT14_POSN                   equ 0006h
WDTPSH_WDTPSCNT14_POSITION               equ 0006h
WDTPSH_WDTPSCNT14_SIZE                   equ 0001h
WDTPSH_WDTPSCNT14_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT14_MASK                   equ 0040h
WDTPSH_WDTPSCNT15_POSN                   equ 0007h
WDTPSH_WDTPSCNT15_POSITION               equ 0007h
WDTPSH_WDTPSCNT15_SIZE                   equ 0001h
WDTPSH_WDTPSCNT15_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT15_MASK                   equ 0080h

// Register: WDTTMR
#define WDTTMR WDTTMR
WDTTMR                                   equ 0810h
// bitfield definitions
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
WDTTMR_STATE_POSN                        equ 0002h
WDTTMR_STATE_POSITION                    equ 0002h
WDTTMR_STATE_SIZE                        equ 0001h
WDTTMR_STATE_LENGTH                      equ 0001h
WDTTMR_STATE_MASK                        equ 0004h
WDTTMR_WDTTMR_POSN                       equ 0003h
WDTTMR_WDTTMR_POSITION                   equ 0003h
WDTTMR_WDTTMR_SIZE                       equ 0005h
WDTTMR_WDTTMR_LENGTH                     equ 0005h
WDTTMR_WDTTMR_MASK                       equ 00F8h
WDTTMR_WDTPSCNT16_POSN                   equ 0000h
WDTTMR_WDTPSCNT16_POSITION               equ 0000h
WDTTMR_WDTPSCNT16_SIZE                   equ 0001h
WDTTMR_WDTPSCNT16_LENGTH                 equ 0001h
WDTTMR_WDTPSCNT16_MASK                   equ 0001h
WDTTMR_WDTPSCNT17_POSN                   equ 0001h
WDTTMR_WDTPSCNT17_POSITION               equ 0001h
WDTTMR_WDTPSCNT17_SIZE                   equ 0001h
WDTTMR_WDTPSCNT17_LENGTH                 equ 0001h
WDTTMR_WDTPSCNT17_MASK                   equ 0002h
WDTTMR_WDTSTATE_POSN                     equ 0002h
WDTTMR_WDTSTATE_POSITION                 equ 0002h
WDTTMR_WDTSTATE_SIZE                     equ 0001h
WDTTMR_WDTSTATE_LENGTH                   equ 0001h
WDTTMR_WDTSTATE_MASK                     equ 0004h
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
VREGCON_VREGPM_POSN                      equ 0001h
VREGCON_VREGPM_POSITION                  equ 0001h
VREGCON_VREGPM_SIZE                      equ 0001h
VREGCON_VREGPM_LENGTH                    equ 0001h
VREGCON_VREGPM_MASK                      equ 0002h

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

// Register: PCON1
#define PCON1 PCON1
PCON1                                    equ 0814h
// bitfield definitions
PCON1_nMEMV_POSN                         equ 0001h
PCON1_nMEMV_POSITION                     equ 0001h
PCON1_nMEMV_SIZE                         equ 0001h
PCON1_nMEMV_LENGTH                       equ 0001h
PCON1_nMEMV_MASK                         equ 0002h

// Register: NVMADRL
#define NVMADRL NVMADRL
NVMADRL                                  equ 081Ah
// bitfield definitions
NVMADRL_NVMADRL0_POSN                    equ 0000h
NVMADRL_NVMADRL0_POSITION                equ 0000h
NVMADRL_NVMADRL0_SIZE                    equ 0001h
NVMADRL_NVMADRL0_LENGTH                  equ 0001h
NVMADRL_NVMADRL0_MASK                    equ 0001h
NVMADRL_NVMADRL1_POSN                    equ 0001h
NVMADRL_NVMADRL1_POSITION                equ 0001h
NVMADRL_NVMADRL1_SIZE                    equ 0001h
NVMADRL_NVMADRL1_LENGTH                  equ 0001h
NVMADRL_NVMADRL1_MASK                    equ 0002h
NVMADRL_NVMADRL2_POSN                    equ 0002h
NVMADRL_NVMADRL2_POSITION                equ 0002h
NVMADRL_NVMADRL2_SIZE                    equ 0001h
NVMADRL_NVMADRL2_LENGTH                  equ 0001h
NVMADRL_NVMADRL2_MASK                    equ 0004h
NVMADRL_NVMADRL3_POSN                    equ 0003h
NVMADRL_NVMADRL3_POSITION                equ 0003h
NVMADRL_NVMADRL3_SIZE                    equ 0001h
NVMADRL_NVMADRL3_LENGTH                  equ 0001h
NVMADRL_NVMADRL3_MASK                    equ 0008h
NVMADRL_NVMADRL4_POSN                    equ 0004h
NVMADRL_NVMADRL4_POSITION                equ 0004h
NVMADRL_NVMADRL4_SIZE                    equ 0001h
NVMADRL_NVMADRL4_LENGTH                  equ 0001h
NVMADRL_NVMADRL4_MASK                    equ 0010h
NVMADRL_NVMADRL5_POSN                    equ 0005h
NVMADRL_NVMADRL5_POSITION                equ 0005h
NVMADRL_NVMADRL5_SIZE                    equ 0001h
NVMADRL_NVMADRL5_LENGTH                  equ 0001h
NVMADRL_NVMADRL5_MASK                    equ 0020h
NVMADRL_NVMADRL6_POSN                    equ 0006h
NVMADRL_NVMADRL6_POSITION                equ 0006h
NVMADRL_NVMADRL6_SIZE                    equ 0001h
NVMADRL_NVMADRL6_LENGTH                  equ 0001h
NVMADRL_NVMADRL6_MASK                    equ 0040h
NVMADRL_NVMADRL7_POSN                    equ 0007h
NVMADRL_NVMADRL7_POSITION                equ 0007h
NVMADRL_NVMADRL7_SIZE                    equ 0001h
NVMADRL_NVMADRL7_LENGTH                  equ 0001h
NVMADRL_NVMADRL7_MASK                    equ 0080h

// Register: NVMADRH
#define NVMADRH NVMADRH
NVMADRH                                  equ 081Bh
// bitfield definitions
NVMADRH_NVMADRH0_POSN                    equ 0000h
NVMADRH_NVMADRH0_POSITION                equ 0000h
NVMADRH_NVMADRH0_SIZE                    equ 0001h
NVMADRH_NVMADRH0_LENGTH                  equ 0001h
NVMADRH_NVMADRH0_MASK                    equ 0001h
NVMADRH_NVMADRH1_POSN                    equ 0001h
NVMADRH_NVMADRH1_POSITION                equ 0001h
NVMADRH_NVMADRH1_SIZE                    equ 0001h
NVMADRH_NVMADRH1_LENGTH                  equ 0001h
NVMADRH_NVMADRH1_MASK                    equ 0002h
NVMADRH_NVMADRH2_POSN                    equ 0002h
NVMADRH_NVMADRH2_POSITION                equ 0002h
NVMADRH_NVMADRH2_SIZE                    equ 0001h
NVMADRH_NVMADRH2_LENGTH                  equ 0001h
NVMADRH_NVMADRH2_MASK                    equ 0004h
NVMADRH_NVMADRH3_POSN                    equ 0003h
NVMADRH_NVMADRH3_POSITION                equ 0003h
NVMADRH_NVMADRH3_SIZE                    equ 0001h
NVMADRH_NVMADRH3_LENGTH                  equ 0001h
NVMADRH_NVMADRH3_MASK                    equ 0008h
NVMADRH_NVMADRH4_POSN                    equ 0004h
NVMADRH_NVMADRH4_POSITION                equ 0004h
NVMADRH_NVMADRH4_SIZE                    equ 0001h
NVMADRH_NVMADRH4_LENGTH                  equ 0001h
NVMADRH_NVMADRH4_MASK                    equ 0010h
NVMADRH_NVMADRH5_POSN                    equ 0005h
NVMADRH_NVMADRH5_POSITION                equ 0005h
NVMADRH_NVMADRH5_SIZE                    equ 0001h
NVMADRH_NVMADRH5_LENGTH                  equ 0001h
NVMADRH_NVMADRH5_MASK                    equ 0020h
NVMADRH_NVMADRH6_POSN                    equ 0006h
NVMADRH_NVMADRH6_POSITION                equ 0006h
NVMADRH_NVMADRH6_SIZE                    equ 0001h
NVMADRH_NVMADRH6_LENGTH                  equ 0001h
NVMADRH_NVMADRH6_MASK                    equ 0040h

// Register: NVMDATL
#define NVMDATL NVMDATL
NVMDATL                                  equ 081Ch
// bitfield definitions
NVMDATL_NVMDATL0_POSN                    equ 0000h
NVMDATL_NVMDATL0_POSITION                equ 0000h
NVMDATL_NVMDATL0_SIZE                    equ 0001h
NVMDATL_NVMDATL0_LENGTH                  equ 0001h
NVMDATL_NVMDATL0_MASK                    equ 0001h
NVMDATL_NVMDATL1_POSN                    equ 0001h
NVMDATL_NVMDATL1_POSITION                equ 0001h
NVMDATL_NVMDATL1_SIZE                    equ 0001h
NVMDATL_NVMDATL1_LENGTH                  equ 0001h
NVMDATL_NVMDATL1_MASK                    equ 0002h
NVMDATL_NVMDATL2_POSN                    equ 0002h
NVMDATL_NVMDATL2_POSITION                equ 0002h
NVMDATL_NVMDATL2_SIZE                    equ 0001h
NVMDATL_NVMDATL2_LENGTH                  equ 0001h
NVMDATL_NVMDATL2_MASK                    equ 0004h
NVMDATL_NVMDATL3_POSN                    equ 0003h
NVMDATL_NVMDATL3_POSITION                equ 0003h
NVMDATL_NVMDATL3_SIZE                    equ 0001h
NVMDATL_NVMDATL3_LENGTH                  equ 0001h
NVMDATL_NVMDATL3_MASK                    equ 0008h
NVMDATL_NVMDATL4_POSN                    equ 0004h
NVMDATL_NVMDATL4_POSITION                equ 0004h
NVMDATL_NVMDATL4_SIZE                    equ 0001h
NVMDATL_NVMDATL4_LENGTH                  equ 0001h
NVMDATL_NVMDATL4_MASK                    equ 0010h
NVMDATL_NVMDATL5_POSN                    equ 0005h
NVMDATL_NVMDATL5_POSITION                equ 0005h
NVMDATL_NVMDATL5_SIZE                    equ 0001h
NVMDATL_NVMDATL5_LENGTH                  equ 0001h
NVMDATL_NVMDATL5_MASK                    equ 0020h
NVMDATL_NVMDATL6_POSN                    equ 0006h
NVMDATL_NVMDATL6_POSITION                equ 0006h
NVMDATL_NVMDATL6_SIZE                    equ 0001h
NVMDATL_NVMDATL6_LENGTH                  equ 0001h
NVMDATL_NVMDATL6_MASK                    equ 0040h
NVMDATL_NVMDATL7_POSN                    equ 0007h
NVMDATL_NVMDATL7_POSITION                equ 0007h
NVMDATL_NVMDATL7_SIZE                    equ 0001h
NVMDATL_NVMDATL7_LENGTH                  equ 0001h
NVMDATL_NVMDATL7_MASK                    equ 0080h

// Register: NVMDATH
#define NVMDATH NVMDATH
NVMDATH                                  equ 081Dh
// bitfield definitions
NVMDATH_NVMDATH0_POSN                    equ 0000h
NVMDATH_NVMDATH0_POSITION                equ 0000h
NVMDATH_NVMDATH0_SIZE                    equ 0001h
NVMDATH_NVMDATH0_LENGTH                  equ 0001h
NVMDATH_NVMDATH0_MASK                    equ 0001h
NVMDATH_NVMDATH1_POSN                    equ 0001h
NVMDATH_NVMDATH1_POSITION                equ 0001h
NVMDATH_NVMDATH1_SIZE                    equ 0001h
NVMDATH_NVMDATH1_LENGTH                  equ 0001h
NVMDATH_NVMDATH1_MASK                    equ 0002h
NVMDATH_NVMDATH2_POSN                    equ 0002h
NVMDATH_NVMDATH2_POSITION                equ 0002h
NVMDATH_NVMDATH2_SIZE                    equ 0001h
NVMDATH_NVMDATH2_LENGTH                  equ 0001h
NVMDATH_NVMDATH2_MASK                    equ 0004h
NVMDATH_NVMDATH3_POSN                    equ 0003h
NVMDATH_NVMDATH3_POSITION                equ 0003h
NVMDATH_NVMDATH3_SIZE                    equ 0001h
NVMDATH_NVMDATH3_LENGTH                  equ 0001h
NVMDATH_NVMDATH3_MASK                    equ 0008h
NVMDATH_NVMDATH4_POSN                    equ 0004h
NVMDATH_NVMDATH4_POSITION                equ 0004h
NVMDATH_NVMDATH4_SIZE                    equ 0001h
NVMDATH_NVMDATH4_LENGTH                  equ 0001h
NVMDATH_NVMDATH4_MASK                    equ 0010h
NVMDATH_NVMDATH5_POSN                    equ 0005h
NVMDATH_NVMDATH5_POSITION                equ 0005h
NVMDATH_NVMDATH5_SIZE                    equ 0001h
NVMDATH_NVMDATH5_LENGTH                  equ 0001h
NVMDATH_NVMDATH5_MASK                    equ 0020h

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
// bitfield definitions
NVMCON2_NVMCON2_POSN                     equ 0000h
NVMCON2_NVMCON2_POSITION                 equ 0000h
NVMCON2_NVMCON2_SIZE                     equ 0008h
NVMCON2_NVMCON2_LENGTH                   equ 0008h
NVMCON2_NVMCON2_MASK                     equ 00FFh

// Register: CPUDOZE
#define CPUDOZE CPUDOZE
CPUDOZE                                  equ 088Ch
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
OSCCON1                                  equ 088Dh
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
OSCCON2                                  equ 088Eh
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

// Register: OSCSTAT
#define OSCSTAT OSCSTAT
OSCSTAT                                  equ 0890h
// bitfield definitions
OSCSTAT_PLLR_POSN                        equ 0000h
OSCSTAT_PLLR_POSITION                    equ 0000h
OSCSTAT_PLLR_SIZE                        equ 0001h
OSCSTAT_PLLR_LENGTH                      equ 0001h
OSCSTAT_PLLR_MASK                        equ 0001h
OSCSTAT_ADOR_POSN                        equ 0002h
OSCSTAT_ADOR_POSITION                    equ 0002h
OSCSTAT_ADOR_SIZE                        equ 0001h
OSCSTAT_ADOR_LENGTH                      equ 0001h
OSCSTAT_ADOR_MASK                        equ 0004h
OSCSTAT_SOR_POSN                         equ 0003h
OSCSTAT_SOR_POSITION                     equ 0003h
OSCSTAT_SOR_SIZE                         equ 0001h
OSCSTAT_SOR_LENGTH                       equ 0001h
OSCSTAT_SOR_MASK                         equ 0008h
OSCSTAT_LFOR_POSN                        equ 0004h
OSCSTAT_LFOR_POSITION                    equ 0004h
OSCSTAT_LFOR_SIZE                        equ 0001h
OSCSTAT_LFOR_LENGTH                      equ 0001h
OSCSTAT_LFOR_MASK                        equ 0010h
OSCSTAT_MFOR_POSN                        equ 0005h
OSCSTAT_MFOR_POSITION                    equ 0005h
OSCSTAT_MFOR_SIZE                        equ 0001h
OSCSTAT_MFOR_LENGTH                      equ 0001h
OSCSTAT_MFOR_MASK                        equ 0020h
OSCSTAT_HFOR_POSN                        equ 0006h
OSCSTAT_HFOR_POSITION                    equ 0006h
OSCSTAT_HFOR_SIZE                        equ 0001h
OSCSTAT_HFOR_LENGTH                      equ 0001h
OSCSTAT_HFOR_MASK                        equ 0040h
OSCSTAT_EXTOR_POSN                       equ 0007h
OSCSTAT_EXTOR_POSITION                   equ 0007h
OSCSTAT_EXTOR_SIZE                       equ 0001h
OSCSTAT_EXTOR_LENGTH                     equ 0001h
OSCSTAT_EXTOR_MASK                       equ 0080h

// Register: OSCEN
#define OSCEN OSCEN
OSCEN                                    equ 0891h
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
OSCEN_EXTOEN_POSN                        equ 0007h
OSCEN_EXTOEN_POSITION                    equ 0007h
OSCEN_EXTOEN_SIZE                        equ 0001h
OSCEN_EXTOEN_LENGTH                      equ 0001h
OSCEN_EXTOEN_MASK                        equ 0080h

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

// Register: OSCFRQ
#define OSCFRQ OSCFRQ
OSCFRQ                                   equ 0893h
// bitfield definitions
OSCFRQ_HFFRQ_POSN                        equ 0000h
OSCFRQ_HFFRQ_POSITION                    equ 0000h
OSCFRQ_HFFRQ_SIZE                        equ 0003h
OSCFRQ_HFFRQ_LENGTH                      equ 0003h
OSCFRQ_HFFRQ_MASK                        equ 0007h
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

// Register: CLKRCON
#define CLKRCON CLKRCON
CLKRCON                                  equ 0895h
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

// Register: CLKRCLK
#define CLKRCLK CLKRCLK
CLKRCLK                                  equ 0896h
// bitfield definitions
CLKRCLK_CLKRCLK_POSN                     equ 0000h
CLKRCLK_CLKRCLK_POSITION                 equ 0000h
CLKRCLK_CLKRCLK_SIZE                     equ 0004h
CLKRCLK_CLKRCLK_LENGTH                   equ 0004h
CLKRCLK_CLKRCLK_MASK                     equ 000Fh
CLKRCLK_CLKRCLK0_POSN                    equ 0000h
CLKRCLK_CLKRCLK0_POSITION                equ 0000h
CLKRCLK_CLKRCLK0_SIZE                    equ 0001h
CLKRCLK_CLKRCLK0_LENGTH                  equ 0001h
CLKRCLK_CLKRCLK0_MASK                    equ 0001h
CLKRCLK_CLKRCLK1_POSN                    equ 0001h
CLKRCLK_CLKRCLK1_POSITION                equ 0001h
CLKRCLK_CLKRCLK1_SIZE                    equ 0001h
CLKRCLK_CLKRCLK1_LENGTH                  equ 0001h
CLKRCLK_CLKRCLK1_MASK                    equ 0002h
CLKRCLK_CLKRCLK2_POSN                    equ 0002h
CLKRCLK_CLKRCLK2_POSITION                equ 0002h
CLKRCLK_CLKRCLK2_SIZE                    equ 0001h
CLKRCLK_CLKRCLK2_LENGTH                  equ 0001h
CLKRCLK_CLKRCLK2_MASK                    equ 0004h
CLKRCLK_CLKRCLK3_POSN                    equ 0003h
CLKRCLK_CLKRCLK3_POSITION                equ 0003h
CLKRCLK_CLKRCLK3_SIZE                    equ 0001h
CLKRCLK_CLKRCLK3_LENGTH                  equ 0001h
CLKRCLK_CLKRCLK3_MASK                    equ 0008h

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 090Ch
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
DAC1CON0                                 equ 090Eh
// bitfield definitions
DAC1CON0_NSS_POSN                        equ 0000h
DAC1CON0_NSS_POSITION                    equ 0000h
DAC1CON0_NSS_SIZE                        equ 0001h
DAC1CON0_NSS_LENGTH                      equ 0001h
DAC1CON0_NSS_MASK                        equ 0001h
DAC1CON0_PSS_POSN                        equ 0002h
DAC1CON0_PSS_POSITION                    equ 0002h
DAC1CON0_PSS_SIZE                        equ 0002h
DAC1CON0_PSS_LENGTH                      equ 0002h
DAC1CON0_PSS_MASK                        equ 000Ch
DAC1CON0_OE2_POSN                        equ 0004h
DAC1CON0_OE2_POSITION                    equ 0004h
DAC1CON0_OE2_SIZE                        equ 0001h
DAC1CON0_OE2_LENGTH                      equ 0001h
DAC1CON0_OE2_MASK                        equ 0010h
DAC1CON0_OE1_POSN                        equ 0005h
DAC1CON0_OE1_POSITION                    equ 0005h
DAC1CON0_OE1_SIZE                        equ 0001h
DAC1CON0_OE1_LENGTH                      equ 0001h
DAC1CON0_OE1_MASK                        equ 0020h
DAC1CON0_EN_POSN                         equ 0007h
DAC1CON0_EN_POSITION                     equ 0007h
DAC1CON0_EN_SIZE                         equ 0001h
DAC1CON0_EN_LENGTH                       equ 0001h
DAC1CON0_EN_MASK                         equ 0080h
DAC1CON0_DAC1NSS_POSN                    equ 0000h
DAC1CON0_DAC1NSS_POSITION                equ 0000h
DAC1CON0_DAC1NSS_SIZE                    equ 0001h
DAC1CON0_DAC1NSS_LENGTH                  equ 0001h
DAC1CON0_DAC1NSS_MASK                    equ 0001h
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
DAC1CON0_PSS0_POSN                       equ 0002h
DAC1CON0_PSS0_POSITION                   equ 0002h
DAC1CON0_PSS0_SIZE                       equ 0001h
DAC1CON0_PSS0_LENGTH                     equ 0001h
DAC1CON0_PSS0_MASK                       equ 0004h
DAC1CON0_PSS1_POSN                       equ 0003h
DAC1CON0_PSS1_POSITION                   equ 0003h
DAC1CON0_PSS1_SIZE                       equ 0001h
DAC1CON0_PSS1_LENGTH                     equ 0001h
DAC1CON0_PSS1_MASK                       equ 0008h

// Register: DAC1CON1
#define DAC1CON1 DAC1CON1
DAC1CON1                                 equ 090Fh
// bitfield definitions
DAC1CON1_DAC1R_POSN                      equ 0000h
DAC1CON1_DAC1R_POSITION                  equ 0000h
DAC1CON1_DAC1R_SIZE                      equ 0005h
DAC1CON1_DAC1R_LENGTH                    equ 0005h
DAC1CON1_DAC1R_MASK                      equ 001Fh
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

// Register: ZCDCON
#define ZCDCON ZCDCON
ZCDCON                                   equ 091Fh
// bitfield definitions
ZCDCON_ZCDINTN_POSN                      equ 0000h
ZCDCON_ZCDINTN_POSITION                  equ 0000h
ZCDCON_ZCDINTN_SIZE                      equ 0001h
ZCDCON_ZCDINTN_LENGTH                    equ 0001h
ZCDCON_ZCDINTN_MASK                      equ 0001h
ZCDCON_ZCDINTP_POSN                      equ 0001h
ZCDCON_ZCDINTP_POSITION                  equ 0001h
ZCDCON_ZCDINTP_SIZE                      equ 0001h
ZCDCON_ZCDINTP_LENGTH                    equ 0001h
ZCDCON_ZCDINTP_MASK                      equ 0002h
ZCDCON_ZCDPOL_POSN                       equ 0004h
ZCDCON_ZCDPOL_POSITION                   equ 0004h
ZCDCON_ZCDPOL_SIZE                       equ 0001h
ZCDCON_ZCDPOL_LENGTH                     equ 0001h
ZCDCON_ZCDPOL_MASK                       equ 0010h
ZCDCON_ZCDOUT_POSN                       equ 0005h
ZCDCON_ZCDOUT_POSITION                   equ 0005h
ZCDCON_ZCDOUT_SIZE                       equ 0001h
ZCDCON_ZCDOUT_LENGTH                     equ 0001h
ZCDCON_ZCDOUT_MASK                       equ 0020h
ZCDCON_ZCDSEN_POSN                       equ 0007h
ZCDCON_ZCDSEN_POSITION                   equ 0007h
ZCDCON_ZCDSEN_SIZE                       equ 0001h
ZCDCON_ZCDSEN_LENGTH                     equ 0001h
ZCDCON_ZCDSEN_MASK                       equ 0080h

// Register: CMOUT
#define CMOUT CMOUT
CMOUT                                    equ 098Fh
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
CMOUT_C1OUT_POSN                         equ 0000h
CMOUT_C1OUT_POSITION                     equ 0000h
CMOUT_C1OUT_SIZE                         equ 0001h
CMOUT_C1OUT_LENGTH                       equ 0001h
CMOUT_C1OUT_MASK                         equ 0001h
CMOUT_C2OUT_POSN                         equ 0001h
CMOUT_C2OUT_POSITION                     equ 0001h
CMOUT_C2OUT_SIZE                         equ 0001h
CMOUT_C2OUT_LENGTH                       equ 0001h
CMOUT_C2OUT_MASK                         equ 0002h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0990h
// bitfield definitions
CM1CON0_SYNC_POSN                        equ 0000h
CM1CON0_SYNC_POSITION                    equ 0000h
CM1CON0_SYNC_SIZE                        equ 0001h
CM1CON0_SYNC_LENGTH                      equ 0001h
CM1CON0_SYNC_MASK                        equ 0001h
CM1CON0_HYS_POSN                         equ 0001h
CM1CON0_HYS_POSITION                     equ 0001h
CM1CON0_HYS_SIZE                         equ 0001h
CM1CON0_HYS_LENGTH                       equ 0001h
CM1CON0_HYS_MASK                         equ 0002h
CM1CON0_POL_POSN                         equ 0004h
CM1CON0_POL_POSITION                     equ 0004h
CM1CON0_POL_SIZE                         equ 0001h
CM1CON0_POL_LENGTH                       equ 0001h
CM1CON0_POL_MASK                         equ 0010h
CM1CON0_OUT_POSN                         equ 0006h
CM1CON0_OUT_POSITION                     equ 0006h
CM1CON0_OUT_SIZE                         equ 0001h
CM1CON0_OUT_LENGTH                       equ 0001h
CM1CON0_OUT_MASK                         equ 0040h
CM1CON0_EN_POSN                          equ 0007h
CM1CON0_EN_POSITION                      equ 0007h
CM1CON0_EN_SIZE                          equ 0001h
CM1CON0_EN_LENGTH                        equ 0001h
CM1CON0_EN_MASK                          equ 0080h
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
CM1CON0_C1EN_POSN                        equ 0007h
CM1CON0_C1EN_POSITION                    equ 0007h
CM1CON0_C1EN_SIZE                        equ 0001h
CM1CON0_C1EN_LENGTH                      equ 0001h
CM1CON0_C1EN_MASK                        equ 0080h

// Register: CM1CON1
#define CM1CON1 CM1CON1
CM1CON1                                  equ 0991h
// bitfield definitions
CM1CON1_INTN_POSN                        equ 0000h
CM1CON1_INTN_POSITION                    equ 0000h
CM1CON1_INTN_SIZE                        equ 0001h
CM1CON1_INTN_LENGTH                      equ 0001h
CM1CON1_INTN_MASK                        equ 0001h
CM1CON1_INTP_POSN                        equ 0001h
CM1CON1_INTP_POSITION                    equ 0001h
CM1CON1_INTP_SIZE                        equ 0001h
CM1CON1_INTP_LENGTH                      equ 0001h
CM1CON1_INTP_MASK                        equ 0002h
CM1CON1_C1INTN_POSN                      equ 0000h
CM1CON1_C1INTN_POSITION                  equ 0000h
CM1CON1_C1INTN_SIZE                      equ 0001h
CM1CON1_C1INTN_LENGTH                    equ 0001h
CM1CON1_C1INTN_MASK                      equ 0001h
CM1CON1_C1INTP_POSN                      equ 0001h
CM1CON1_C1INTP_POSITION                  equ 0001h
CM1CON1_C1INTP_SIZE                      equ 0001h
CM1CON1_C1INTP_LENGTH                    equ 0001h
CM1CON1_C1INTP_MASK                      equ 0002h

// Register: CM1NCH
#define CM1NCH CM1NCH
CM1NCH                                   equ 0992h
// bitfield definitions
CM1NCH_NCH_POSN                          equ 0000h
CM1NCH_NCH_POSITION                      equ 0000h
CM1NCH_NCH_SIZE                          equ 0003h
CM1NCH_NCH_LENGTH                        equ 0003h
CM1NCH_NCH_MASK                          equ 0007h
CM1NCH_NCH0_POSN                         equ 0000h
CM1NCH_NCH0_POSITION                     equ 0000h
CM1NCH_NCH0_SIZE                         equ 0001h
CM1NCH_NCH0_LENGTH                       equ 0001h
CM1NCH_NCH0_MASK                         equ 0001h
CM1NCH_NCH1_POSN                         equ 0001h
CM1NCH_NCH1_POSITION                     equ 0001h
CM1NCH_NCH1_SIZE                         equ 0001h
CM1NCH_NCH1_LENGTH                       equ 0001h
CM1NCH_NCH1_MASK                         equ 0002h
CM1NCH_NCH2_POSN                         equ 0002h
CM1NCH_NCH2_POSITION                     equ 0002h
CM1NCH_NCH2_SIZE                         equ 0001h
CM1NCH_NCH2_LENGTH                       equ 0001h
CM1NCH_NCH2_MASK                         equ 0004h
CM1NCH_C1NCH0_POSN                       equ 0000h
CM1NCH_C1NCH0_POSITION                   equ 0000h
CM1NCH_C1NCH0_SIZE                       equ 0001h
CM1NCH_C1NCH0_LENGTH                     equ 0001h
CM1NCH_C1NCH0_MASK                       equ 0001h
CM1NCH_C1NCH1_POSN                       equ 0001h
CM1NCH_C1NCH1_POSITION                   equ 0001h
CM1NCH_C1NCH1_SIZE                       equ 0001h
CM1NCH_C1NCH1_LENGTH                     equ 0001h
CM1NCH_C1NCH1_MASK                       equ 0002h
CM1NCH_C1NCH2_POSN                       equ 0002h
CM1NCH_C1NCH2_POSITION                   equ 0002h
CM1NCH_C1NCH2_SIZE                       equ 0001h
CM1NCH_C1NCH2_LENGTH                     equ 0001h
CM1NCH_C1NCH2_MASK                       equ 0004h

// Register: CM1PCH
#define CM1PCH CM1PCH
CM1PCH                                   equ 0993h
// bitfield definitions
CM1PCH_PCH_POSN                          equ 0000h
CM1PCH_PCH_POSITION                      equ 0000h
CM1PCH_PCH_SIZE                          equ 0003h
CM1PCH_PCH_LENGTH                        equ 0003h
CM1PCH_PCH_MASK                          equ 0007h
CM1PCH_PCH0_POSN                         equ 0000h
CM1PCH_PCH0_POSITION                     equ 0000h
CM1PCH_PCH0_SIZE                         equ 0001h
CM1PCH_PCH0_LENGTH                       equ 0001h
CM1PCH_PCH0_MASK                         equ 0001h
CM1PCH_PCH1_POSN                         equ 0001h
CM1PCH_PCH1_POSITION                     equ 0001h
CM1PCH_PCH1_SIZE                         equ 0001h
CM1PCH_PCH1_LENGTH                       equ 0001h
CM1PCH_PCH1_MASK                         equ 0002h
CM1PCH_PCH2_POSN                         equ 0002h
CM1PCH_PCH2_POSITION                     equ 0002h
CM1PCH_PCH2_SIZE                         equ 0001h
CM1PCH_PCH2_LENGTH                       equ 0001h
CM1PCH_PCH2_MASK                         equ 0004h
CM1PCH_C1PCH0_POSN                       equ 0000h
CM1PCH_C1PCH0_POSITION                   equ 0000h
CM1PCH_C1PCH0_SIZE                       equ 0001h
CM1PCH_C1PCH0_LENGTH                     equ 0001h
CM1PCH_C1PCH0_MASK                       equ 0001h
CM1PCH_C1PCH1_POSN                       equ 0001h
CM1PCH_C1PCH1_POSITION                   equ 0001h
CM1PCH_C1PCH1_SIZE                       equ 0001h
CM1PCH_C1PCH1_LENGTH                     equ 0001h
CM1PCH_C1PCH1_MASK                       equ 0002h
CM1PCH_C1PCH2_POSN                       equ 0002h
CM1PCH_C1PCH2_POSITION                   equ 0002h
CM1PCH_C1PCH2_SIZE                       equ 0001h
CM1PCH_C1PCH2_LENGTH                     equ 0001h
CM1PCH_C1PCH2_MASK                       equ 0004h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0994h
// bitfield definitions
CM2CON0_SYNC_POSN                        equ 0000h
CM2CON0_SYNC_POSITION                    equ 0000h
CM2CON0_SYNC_SIZE                        equ 0001h
CM2CON0_SYNC_LENGTH                      equ 0001h
CM2CON0_SYNC_MASK                        equ 0001h
CM2CON0_HYS_POSN                         equ 0001h
CM2CON0_HYS_POSITION                     equ 0001h
CM2CON0_HYS_SIZE                         equ 0001h
CM2CON0_HYS_LENGTH                       equ 0001h
CM2CON0_HYS_MASK                         equ 0002h
CM2CON0_POL_POSN                         equ 0004h
CM2CON0_POL_POSITION                     equ 0004h
CM2CON0_POL_SIZE                         equ 0001h
CM2CON0_POL_LENGTH                       equ 0001h
CM2CON0_POL_MASK                         equ 0010h
CM2CON0_OUT_POSN                         equ 0006h
CM2CON0_OUT_POSITION                     equ 0006h
CM2CON0_OUT_SIZE                         equ 0001h
CM2CON0_OUT_LENGTH                       equ 0001h
CM2CON0_OUT_MASK                         equ 0040h
CM2CON0_EN_POSN                          equ 0007h
CM2CON0_EN_POSITION                      equ 0007h
CM2CON0_EN_SIZE                          equ 0001h
CM2CON0_EN_LENGTH                        equ 0001h
CM2CON0_EN_MASK                          equ 0080h
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
CM2CON0_C2EN_POSN                        equ 0007h
CM2CON0_C2EN_POSITION                    equ 0007h
CM2CON0_C2EN_SIZE                        equ 0001h
CM2CON0_C2EN_LENGTH                      equ 0001h
CM2CON0_C2EN_MASK                        equ 0080h

// Register: CM2CON1
#define CM2CON1 CM2CON1
CM2CON1                                  equ 0995h
// bitfield definitions
CM2CON1_INTN_POSN                        equ 0000h
CM2CON1_INTN_POSITION                    equ 0000h
CM2CON1_INTN_SIZE                        equ 0001h
CM2CON1_INTN_LENGTH                      equ 0001h
CM2CON1_INTN_MASK                        equ 0001h
CM2CON1_INTP_POSN                        equ 0001h
CM2CON1_INTP_POSITION                    equ 0001h
CM2CON1_INTP_SIZE                        equ 0001h
CM2CON1_INTP_LENGTH                      equ 0001h
CM2CON1_INTP_MASK                        equ 0002h
CM2CON1_C2INTN_POSN                      equ 0000h
CM2CON1_C2INTN_POSITION                  equ 0000h
CM2CON1_C2INTN_SIZE                      equ 0001h
CM2CON1_C2INTN_LENGTH                    equ 0001h
CM2CON1_C2INTN_MASK                      equ 0001h
CM2CON1_C2INTP_POSN                      equ 0001h
CM2CON1_C2INTP_POSITION                  equ 0001h
CM2CON1_C2INTP_SIZE                      equ 0001h
CM2CON1_C2INTP_LENGTH                    equ 0001h
CM2CON1_C2INTP_MASK                      equ 0002h

// Register: CM2NCH
#define CM2NCH CM2NCH
CM2NCH                                   equ 0996h
// bitfield definitions
CM2NCH_NCH_POSN                          equ 0000h
CM2NCH_NCH_POSITION                      equ 0000h
CM2NCH_NCH_SIZE                          equ 0003h
CM2NCH_NCH_LENGTH                        equ 0003h
CM2NCH_NCH_MASK                          equ 0007h
CM2NCH_NCH0_POSN                         equ 0000h
CM2NCH_NCH0_POSITION                     equ 0000h
CM2NCH_NCH0_SIZE                         equ 0001h
CM2NCH_NCH0_LENGTH                       equ 0001h
CM2NCH_NCH0_MASK                         equ 0001h
CM2NCH_NCH1_POSN                         equ 0001h
CM2NCH_NCH1_POSITION                     equ 0001h
CM2NCH_NCH1_SIZE                         equ 0001h
CM2NCH_NCH1_LENGTH                       equ 0001h
CM2NCH_NCH1_MASK                         equ 0002h
CM2NCH_NCH2_POSN                         equ 0002h
CM2NCH_NCH2_POSITION                     equ 0002h
CM2NCH_NCH2_SIZE                         equ 0001h
CM2NCH_NCH2_LENGTH                       equ 0001h
CM2NCH_NCH2_MASK                         equ 0004h
CM2NCH_C2NCH0_POSN                       equ 0000h
CM2NCH_C2NCH0_POSITION                   equ 0000h
CM2NCH_C2NCH0_SIZE                       equ 0001h
CM2NCH_C2NCH0_LENGTH                     equ 0001h
CM2NCH_C2NCH0_MASK                       equ 0001h
CM2NCH_C2NCH1_POSN                       equ 0001h
CM2NCH_C2NCH1_POSITION                   equ 0001h
CM2NCH_C2NCH1_SIZE                       equ 0001h
CM2NCH_C2NCH1_LENGTH                     equ 0001h
CM2NCH_C2NCH1_MASK                       equ 0002h
CM2NCH_C2NCH2_POSN                       equ 0002h
CM2NCH_C2NCH2_POSITION                   equ 0002h
CM2NCH_C2NCH2_SIZE                       equ 0001h
CM2NCH_C2NCH2_LENGTH                     equ 0001h
CM2NCH_C2NCH2_MASK                       equ 0004h

// Register: CM2PCH
#define CM2PCH CM2PCH
CM2PCH                                   equ 0997h
// bitfield definitions
CM2PCH_PCH_POSN                          equ 0000h
CM2PCH_PCH_POSITION                      equ 0000h
CM2PCH_PCH_SIZE                          equ 0003h
CM2PCH_PCH_LENGTH                        equ 0003h
CM2PCH_PCH_MASK                          equ 0007h
CM2PCH_PCH0_POSN                         equ 0000h
CM2PCH_PCH0_POSITION                     equ 0000h
CM2PCH_PCH0_SIZE                         equ 0001h
CM2PCH_PCH0_LENGTH                       equ 0001h
CM2PCH_PCH0_MASK                         equ 0001h
CM2PCH_PCH1_POSN                         equ 0001h
CM2PCH_PCH1_POSITION                     equ 0001h
CM2PCH_PCH1_SIZE                         equ 0001h
CM2PCH_PCH1_LENGTH                       equ 0001h
CM2PCH_PCH1_MASK                         equ 0002h
CM2PCH_PCH2_POSN                         equ 0002h
CM2PCH_PCH2_POSITION                     equ 0002h
CM2PCH_PCH2_SIZE                         equ 0001h
CM2PCH_PCH2_LENGTH                       equ 0001h
CM2PCH_PCH2_MASK                         equ 0004h
CM2PCH_C2PCH0_POSN                       equ 0000h
CM2PCH_C2PCH0_POSITION                   equ 0000h
CM2PCH_C2PCH0_SIZE                       equ 0001h
CM2PCH_C2PCH0_LENGTH                     equ 0001h
CM2PCH_C2PCH0_MASK                       equ 0001h
CM2PCH_C2PCH1_POSN                       equ 0001h
CM2PCH_C2PCH1_POSITION                   equ 0001h
CM2PCH_C2PCH1_SIZE                       equ 0001h
CM2PCH_C2PCH1_LENGTH                     equ 0001h
CM2PCH_C2PCH1_MASK                       equ 0002h
CM2PCH_C2PCH2_POSN                       equ 0002h
CM2PCH_C2PCH2_POSITION                   equ 0002h
CM2PCH_C2PCH2_SIZE                       equ 0001h
CM2PCH_C2PCH2_LENGTH                     equ 0001h
CM2PCH_C2PCH2_MASK                       equ 0004h

// Register: RC2REG
#define RC2REG RC2REG
RC2REG                                   equ 0A19h
// bitfield definitions
RC2REG_RC2REG_POSN                       equ 0000h
RC2REG_RC2REG_POSITION                   equ 0000h
RC2REG_RC2REG_SIZE                       equ 0008h
RC2REG_RC2REG_LENGTH                     equ 0008h
RC2REG_RC2REG_MASK                       equ 00FFh

// Register: TX2REG
#define TX2REG TX2REG
TX2REG                                   equ 0A1Ah
// bitfield definitions
TX2REG_TX2REG_POSN                       equ 0000h
TX2REG_TX2REG_POSITION                   equ 0000h
TX2REG_TX2REG_SIZE                       equ 0008h
TX2REG_TX2REG_LENGTH                     equ 0008h
TX2REG_TX2REG_MASK                       equ 00FFh

// Register: SP2BRGL
#define SP2BRGL SP2BRGL
SP2BRGL                                  equ 0A1Bh
// bitfield definitions
SP2BRGL_SP2BRGL_POSN                     equ 0000h
SP2BRGL_SP2BRGL_POSITION                 equ 0000h
SP2BRGL_SP2BRGL_SIZE                     equ 0008h
SP2BRGL_SP2BRGL_LENGTH                   equ 0008h
SP2BRGL_SP2BRGL_MASK                     equ 00FFh

// Register: SP2BRGH
#define SP2BRGH SP2BRGH
SP2BRGH                                  equ 0A1Ch
// bitfield definitions
SP2BRGH_SP2BRGH_POSN                     equ 0000h
SP2BRGH_SP2BRGH_POSITION                 equ 0000h
SP2BRGH_SP2BRGH_SIZE                     equ 0008h
SP2BRGH_SP2BRGH_LENGTH                   equ 0008h
SP2BRGH_SP2BRGH_MASK                     equ 00FFh

// Register: RC2STA
#define RC2STA RC2STA
RC2STA                                   equ 0A1Dh
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
TX2STA                                   equ 0A1Eh
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
BAUD2CON                                 equ 0A1Fh
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

// Register: CLCDATA
#define CLCDATA CLCDATA
CLCDATA                                  equ 01E0Fh
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
CLC1CON                                  equ 01E10h
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
CLC1POL                                  equ 01E11h
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
CLC1SEL0                                 equ 01E12h
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
CLC1SEL1                                 equ 01E13h
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
CLC1SEL2                                 equ 01E14h
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
CLC1SEL3                                 equ 01E15h
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
CLC1GLS0                                 equ 01E16h
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
CLC1GLS1                                 equ 01E17h
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
CLC1GLS2                                 equ 01E18h
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
CLC1GLS3                                 equ 01E19h
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
CLC2CON                                  equ 01E1Ah
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
CLC2POL                                  equ 01E1Bh
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
CLC2SEL0                                 equ 01E1Ch
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
CLC2SEL1                                 equ 01E1Dh
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
CLC2SEL2                                 equ 01E1Eh
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
CLC2SEL3                                 equ 01E1Fh
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
CLC2GLS0                                 equ 01E20h
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
CLC2GLS1                                 equ 01E21h
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
CLC2GLS2                                 equ 01E22h
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
CLC2GLS3                                 equ 01E23h
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
CLC3CON                                  equ 01E24h
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
CLC3POL                                  equ 01E25h
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
CLC3SEL0                                 equ 01E26h
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
CLC3SEL1                                 equ 01E27h
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
CLC3SEL2                                 equ 01E28h
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
CLC3SEL3                                 equ 01E29h
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
CLC3GLS0                                 equ 01E2Ah
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
CLC3GLS1                                 equ 01E2Bh
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
CLC3GLS2                                 equ 01E2Ch
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
CLC3GLS3                                 equ 01E2Dh
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
CLC4CON                                  equ 01E2Eh
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
CLC4POL                                  equ 01E2Fh
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
CLC4SEL0                                 equ 01E30h
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
CLC4SEL1                                 equ 01E31h
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
CLC4SEL2                                 equ 01E32h
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
CLC4SEL3                                 equ 01E33h
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
CLC4GLS0                                 equ 01E34h
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
CLC4GLS1                                 equ 01E35h
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
CLC4GLS2                                 equ 01E36h
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
CLC4GLS3                                 equ 01E37h
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

// Register: PPSLOCK
#define PPSLOCK PPSLOCK
PPSLOCK                                  equ 01E8Fh
// bitfield definitions
PPSLOCK_PPSLOCKED_POSN                   equ 0000h
PPSLOCK_PPSLOCKED_POSITION               equ 0000h
PPSLOCK_PPSLOCKED_SIZE                   equ 0001h
PPSLOCK_PPSLOCKED_LENGTH                 equ 0001h
PPSLOCK_PPSLOCKED_MASK                   equ 0001h

// Register: INTPPS
#define INTPPS INTPPS
INTPPS                                   equ 01E90h
// bitfield definitions
INTPPS_INTPPS_POSN                       equ 0000h
INTPPS_INTPPS_POSITION                   equ 0000h
INTPPS_INTPPS_SIZE                       equ 0006h
INTPPS_INTPPS_LENGTH                     equ 0006h
INTPPS_INTPPS_MASK                       equ 003Fh
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
INTPPS_INTPPS5_POSN                      equ 0005h
INTPPS_INTPPS5_POSITION                  equ 0005h
INTPPS_INTPPS5_SIZE                      equ 0001h
INTPPS_INTPPS5_LENGTH                    equ 0001h
INTPPS_INTPPS5_MASK                      equ 0020h

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
T0CKIPPS                                 equ 01E91h
// bitfield definitions
T0CKIPPS_T0CKIPPS_POSN                   equ 0000h
T0CKIPPS_T0CKIPPS_POSITION               equ 0000h
T0CKIPPS_T0CKIPPS_SIZE                   equ 0006h
T0CKIPPS_T0CKIPPS_LENGTH                 equ 0006h
T0CKIPPS_T0CKIPPS_MASK                   equ 003Fh
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
T0CKIPPS_T0CKIPPS5_POSN                  equ 0005h
T0CKIPPS_T0CKIPPS5_POSITION              equ 0005h
T0CKIPPS_T0CKIPPS5_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS5_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS5_MASK                  equ 0020h

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
T1CKIPPS                                 equ 01E92h
// bitfield definitions
T1CKIPPS_T1CKIPPS_POSN                   equ 0000h
T1CKIPPS_T1CKIPPS_POSITION               equ 0000h
T1CKIPPS_T1CKIPPS_SIZE                   equ 0006h
T1CKIPPS_T1CKIPPS_LENGTH                 equ 0006h
T1CKIPPS_T1CKIPPS_MASK                   equ 003Fh
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
T1CKIPPS_T1CKIPPS5_POSN                  equ 0005h
T1CKIPPS_T1CKIPPS5_POSITION              equ 0005h
T1CKIPPS_T1CKIPPS5_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS5_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS5_MASK                  equ 0020h

// Register: T1GPPS
#define T1GPPS T1GPPS
T1GPPS                                   equ 01E93h
// bitfield definitions
T1GPPS_T1GPPS_POSN                       equ 0000h
T1GPPS_T1GPPS_POSITION                   equ 0000h
T1GPPS_T1GPPS_SIZE                       equ 0006h
T1GPPS_T1GPPS_LENGTH                     equ 0006h
T1GPPS_T1GPPS_MASK                       equ 003Fh
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
T1GPPS_T1GPPS5_POSN                      equ 0005h
T1GPPS_T1GPPS5_POSITION                  equ 0005h
T1GPPS_T1GPPS5_SIZE                      equ 0001h
T1GPPS_T1GPPS5_LENGTH                    equ 0001h
T1GPPS_T1GPPS5_MASK                      equ 0020h

// Register: T2INPPS
#define T2INPPS T2INPPS
T2INPPS                                  equ 01E9Ch
// bitfield definitions
T2INPPS_T2INPPS_POSN                     equ 0000h
T2INPPS_T2INPPS_POSITION                 equ 0000h
T2INPPS_T2INPPS_SIZE                     equ 0006h
T2INPPS_T2INPPS_LENGTH                   equ 0006h
T2INPPS_T2INPPS_MASK                     equ 003Fh
T2INPPS_T2INPPS0_POSN                    equ 0000h
T2INPPS_T2INPPS0_POSITION                equ 0000h
T2INPPS_T2INPPS0_SIZE                    equ 0001h
T2INPPS_T2INPPS0_LENGTH                  equ 0001h
T2INPPS_T2INPPS0_MASK                    equ 0001h
T2INPPS_T2INPPS1_POSN                    equ 0001h
T2INPPS_T2INPPS1_POSITION                equ 0001h
T2INPPS_T2INPPS1_SIZE                    equ 0001h
T2INPPS_T2INPPS1_LENGTH                  equ 0001h
T2INPPS_T2INPPS1_MASK                    equ 0002h
T2INPPS_T2INPPS2_POSN                    equ 0002h
T2INPPS_T2INPPS2_POSITION                equ 0002h
T2INPPS_T2INPPS2_SIZE                    equ 0001h
T2INPPS_T2INPPS2_LENGTH                  equ 0001h
T2INPPS_T2INPPS2_MASK                    equ 0004h
T2INPPS_T2INPPS3_POSN                    equ 0003h
T2INPPS_T2INPPS3_POSITION                equ 0003h
T2INPPS_T2INPPS3_SIZE                    equ 0001h
T2INPPS_T2INPPS3_LENGTH                  equ 0001h
T2INPPS_T2INPPS3_MASK                    equ 0008h
T2INPPS_T2INPPS4_POSN                    equ 0004h
T2INPPS_T2INPPS4_POSITION                equ 0004h
T2INPPS_T2INPPS4_SIZE                    equ 0001h
T2INPPS_T2INPPS4_LENGTH                  equ 0001h
T2INPPS_T2INPPS4_MASK                    equ 0010h
T2INPPS_T2INPPS5_POSN                    equ 0005h
T2INPPS_T2INPPS5_POSITION                equ 0005h
T2INPPS_T2INPPS5_SIZE                    equ 0001h
T2INPPS_T2INPPS5_LENGTH                  equ 0001h
T2INPPS_T2INPPS5_MASK                    equ 0020h

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
CCP1PPS                                  equ 01EA1h
// bitfield definitions
CCP1PPS_CCP1PPS_POSN                     equ 0000h
CCP1PPS_CCP1PPS_POSITION                 equ 0000h
CCP1PPS_CCP1PPS_SIZE                     equ 0006h
CCP1PPS_CCP1PPS_LENGTH                   equ 0006h
CCP1PPS_CCP1PPS_MASK                     equ 003Fh
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
CCP1PPS_CCP1PPS5_POSN                    equ 0005h
CCP1PPS_CCP1PPS5_POSITION                equ 0005h
CCP1PPS_CCP1PPS5_SIZE                    equ 0001h
CCP1PPS_CCP1PPS5_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS5_MASK                    equ 0020h

// Register: CCP2PPS
#define CCP2PPS CCP2PPS
CCP2PPS                                  equ 01EA2h
// bitfield definitions
CCP2PPS_CCP2PPS_POSN                     equ 0000h
CCP2PPS_CCP2PPS_POSITION                 equ 0000h
CCP2PPS_CCP2PPS_SIZE                     equ 0006h
CCP2PPS_CCP2PPS_LENGTH                   equ 0006h
CCP2PPS_CCP2PPS_MASK                     equ 003Fh
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
CCP2PPS_CCP2PPS5_POSN                    equ 0005h
CCP2PPS_CCP2PPS5_POSITION                equ 0005h
CCP2PPS_CCP2PPS5_SIZE                    equ 0001h
CCP2PPS_CCP2PPS5_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS5_MASK                    equ 0020h

// Register: CWG1PPS
#define CWG1PPS CWG1PPS
CWG1PPS                                  equ 01EB1h
// bitfield definitions
CWG1PPS_CWG1PPS_POSN                     equ 0000h
CWG1PPS_CWG1PPS_POSITION                 equ 0000h
CWG1PPS_CWG1PPS_SIZE                     equ 0006h
CWG1PPS_CWG1PPS_LENGTH                   equ 0006h
CWG1PPS_CWG1PPS_MASK                     equ 003Fh
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
CWG1PPS_CWG1PPS5_POSN                    equ 0005h
CWG1PPS_CWG1PPS5_POSITION                equ 0005h
CWG1PPS_CWG1PPS5_SIZE                    equ 0001h
CWG1PPS_CWG1PPS5_LENGTH                  equ 0001h
CWG1PPS_CWG1PPS5_MASK                    equ 0020h

// Register: CLCIN0PPS
#define CLCIN0PPS CLCIN0PPS
CLCIN0PPS                                equ 01EBBh
// bitfield definitions
CLCIN0PPS_CLCIN0PPS_POSN                 equ 0000h
CLCIN0PPS_CLCIN0PPS_POSITION             equ 0000h
CLCIN0PPS_CLCIN0PPS_SIZE                 equ 0006h
CLCIN0PPS_CLCIN0PPS_LENGTH               equ 0006h
CLCIN0PPS_CLCIN0PPS_MASK                 equ 003Fh
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
CLCIN0PPS_CLCIN0PPS5_POSN                equ 0005h
CLCIN0PPS_CLCIN0PPS5_POSITION            equ 0005h
CLCIN0PPS_CLCIN0PPS5_SIZE                equ 0001h
CLCIN0PPS_CLCIN0PPS5_LENGTH              equ 0001h
CLCIN0PPS_CLCIN0PPS5_MASK                equ 0020h

// Register: CLCIN1PPS
#define CLCIN1PPS CLCIN1PPS
CLCIN1PPS                                equ 01EBCh
// bitfield definitions
CLCIN1PPS_CLCIN1PPS_POSN                 equ 0000h
CLCIN1PPS_CLCIN1PPS_POSITION             equ 0000h
CLCIN1PPS_CLCIN1PPS_SIZE                 equ 0006h
CLCIN1PPS_CLCIN1PPS_LENGTH               equ 0006h
CLCIN1PPS_CLCIN1PPS_MASK                 equ 003Fh
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
CLCIN1PPS_CLCIN1PPS5_POSN                equ 0005h
CLCIN1PPS_CLCIN1PPS5_POSITION            equ 0005h
CLCIN1PPS_CLCIN1PPS5_SIZE                equ 0001h
CLCIN1PPS_CLCIN1PPS5_LENGTH              equ 0001h
CLCIN1PPS_CLCIN1PPS5_MASK                equ 0020h

// Register: CLCIN2PPS
#define CLCIN2PPS CLCIN2PPS
CLCIN2PPS                                equ 01EBDh
// bitfield definitions
CLCIN2PPS_CLCIN2PPS_POSN                 equ 0000h
CLCIN2PPS_CLCIN2PPS_POSITION             equ 0000h
CLCIN2PPS_CLCIN2PPS_SIZE                 equ 0006h
CLCIN2PPS_CLCIN2PPS_LENGTH               equ 0006h
CLCIN2PPS_CLCIN2PPS_MASK                 equ 003Fh
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
CLCIN2PPS_CLCIN2PPS5_POSN                equ 0005h
CLCIN2PPS_CLCIN2PPS5_POSITION            equ 0005h
CLCIN2PPS_CLCIN2PPS5_SIZE                equ 0001h
CLCIN2PPS_CLCIN2PPS5_LENGTH              equ 0001h
CLCIN2PPS_CLCIN2PPS5_MASK                equ 0020h

// Register: CLCIN3PPS
#define CLCIN3PPS CLCIN3PPS
CLCIN3PPS                                equ 01EBEh
// bitfield definitions
CLCIN3PPS_CLCIN3PPS_POSN                 equ 0000h
CLCIN3PPS_CLCIN3PPS_POSITION             equ 0000h
CLCIN3PPS_CLCIN3PPS_SIZE                 equ 0006h
CLCIN3PPS_CLCIN3PPS_LENGTH               equ 0006h
CLCIN3PPS_CLCIN3PPS_MASK                 equ 003Fh
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
CLCIN3PPS_CLCIN3PPS5_POSN                equ 0005h
CLCIN3PPS_CLCIN3PPS5_POSITION            equ 0005h
CLCIN3PPS_CLCIN3PPS5_SIZE                equ 0001h
CLCIN3PPS_CLCIN3PPS5_LENGTH              equ 0001h
CLCIN3PPS_CLCIN3PPS5_MASK                equ 0020h

// Register: ADACTPPS
#define ADACTPPS ADACTPPS
ADACTPPS                                 equ 01EC3h
// bitfield definitions
ADACTPPS_ADACTPPS_POSN                   equ 0000h
ADACTPPS_ADACTPPS_POSITION               equ 0000h
ADACTPPS_ADACTPPS_SIZE                   equ 0006h
ADACTPPS_ADACTPPS_LENGTH                 equ 0006h
ADACTPPS_ADACTPPS_MASK                   equ 003Fh
ADACTPPS_ADACTPPS0_POSN                  equ 0000h
ADACTPPS_ADACTPPS0_POSITION              equ 0000h
ADACTPPS_ADACTPPS0_SIZE                  equ 0001h
ADACTPPS_ADACTPPS0_LENGTH                equ 0001h
ADACTPPS_ADACTPPS0_MASK                  equ 0001h
ADACTPPS_ADACTPPS1_POSN                  equ 0001h
ADACTPPS_ADACTPPS1_POSITION              equ 0001h
ADACTPPS_ADACTPPS1_SIZE                  equ 0001h
ADACTPPS_ADACTPPS1_LENGTH                equ 0001h
ADACTPPS_ADACTPPS1_MASK                  equ 0002h
ADACTPPS_ADACTPPS2_POSN                  equ 0002h
ADACTPPS_ADACTPPS2_POSITION              equ 0002h
ADACTPPS_ADACTPPS2_SIZE                  equ 0001h
ADACTPPS_ADACTPPS2_LENGTH                equ 0001h
ADACTPPS_ADACTPPS2_MASK                  equ 0004h
ADACTPPS_ADACTPPS3_POSN                  equ 0003h
ADACTPPS_ADACTPPS3_POSITION              equ 0003h
ADACTPPS_ADACTPPS3_SIZE                  equ 0001h
ADACTPPS_ADACTPPS3_LENGTH                equ 0001h
ADACTPPS_ADACTPPS3_MASK                  equ 0008h
ADACTPPS_ADACTPPS4_POSN                  equ 0004h
ADACTPPS_ADACTPPS4_POSITION              equ 0004h
ADACTPPS_ADACTPPS4_SIZE                  equ 0001h
ADACTPPS_ADACTPPS4_LENGTH                equ 0001h
ADACTPPS_ADACTPPS4_MASK                  equ 0010h
ADACTPPS_ADACTPPS5_POSN                  equ 0005h
ADACTPPS_ADACTPPS5_POSITION              equ 0005h
ADACTPPS_ADACTPPS5_SIZE                  equ 0001h
ADACTPPS_ADACTPPS5_LENGTH                equ 0001h
ADACTPPS_ADACTPPS5_MASK                  equ 0020h

// Register: SSP1CLKPPS
#define SSP1CLKPPS SSP1CLKPPS
SSP1CLKPPS                               equ 01EC5h
// bitfield definitions
SSP1CLKPPS_SSP1CLKPPS_POSN               equ 0000h
SSP1CLKPPS_SSP1CLKPPS_POSITION           equ 0000h
SSP1CLKPPS_SSP1CLKPPS_SIZE               equ 0006h
SSP1CLKPPS_SSP1CLKPPS_LENGTH             equ 0006h
SSP1CLKPPS_SSP1CLKPPS_MASK               equ 003Fh
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
SSP1CLKPPS_SSP1CLKPPS5_POSN              equ 0005h
SSP1CLKPPS_SSP1CLKPPS5_POSITION          equ 0005h
SSP1CLKPPS_SSP1CLKPPS5_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS5_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS5_MASK              equ 0020h

// Register: SSP1DATPPS
#define SSP1DATPPS SSP1DATPPS
SSP1DATPPS                               equ 01EC6h
// bitfield definitions
SSP1DATPPS_SSP1DATPPS_POSN               equ 0000h
SSP1DATPPS_SSP1DATPPS_POSITION           equ 0000h
SSP1DATPPS_SSP1DATPPS_SIZE               equ 0006h
SSP1DATPPS_SSP1DATPPS_LENGTH             equ 0006h
SSP1DATPPS_SSP1DATPPS_MASK               equ 003Fh
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
SSP1DATPPS_SSP1DATPPS5_POSN              equ 0005h
SSP1DATPPS_SSP1DATPPS5_POSITION          equ 0005h
SSP1DATPPS_SSP1DATPPS5_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS5_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS5_MASK              equ 0020h

// Register: SSP1SSPPS
#define SSP1SSPPS SSP1SSPPS
SSP1SSPPS                                equ 01EC7h
// bitfield definitions
SSP1SSPPS_SSP1SSPPS_POSN                 equ 0000h
SSP1SSPPS_SSP1SSPPS_POSITION             equ 0000h
SSP1SSPPS_SSP1SSPPS_SIZE                 equ 0006h
SSP1SSPPS_SSP1SSPPS_LENGTH               equ 0006h
SSP1SSPPS_SSP1SSPPS_MASK                 equ 003Fh
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
SSP1SSPPS_SSP1SSPPS5_POSN                equ 0005h
SSP1SSPPS_SSP1SSPPS5_POSITION            equ 0005h
SSP1SSPPS_SSP1SSPPS5_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS5_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS5_MASK                equ 0020h

// Register: SSP2CLKPPS
#define SSP2CLKPPS SSP2CLKPPS
SSP2CLKPPS                               equ 01EC8h
// bitfield definitions
SSP2CLKPPS_SSP2CLKPPS_POSN               equ 0000h
SSP2CLKPPS_SSP2CLKPPS_POSITION           equ 0000h
SSP2CLKPPS_SSP2CLKPPS_SIZE               equ 0006h
SSP2CLKPPS_SSP2CLKPPS_LENGTH             equ 0006h
SSP2CLKPPS_SSP2CLKPPS_MASK               equ 003Fh
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
SSP2CLKPPS_SSP2CLKPPS5_POSN              equ 0005h
SSP2CLKPPS_SSP2CLKPPS5_POSITION          equ 0005h
SSP2CLKPPS_SSP2CLKPPS5_SIZE              equ 0001h
SSP2CLKPPS_SSP2CLKPPS5_LENGTH            equ 0001h
SSP2CLKPPS_SSP2CLKPPS5_MASK              equ 0020h

// Register: SSP2DATPPS
#define SSP2DATPPS SSP2DATPPS
SSP2DATPPS                               equ 01EC9h
// bitfield definitions
SSP2DATPPS_SSP2DATPPS_POSN               equ 0000h
SSP2DATPPS_SSP2DATPPS_POSITION           equ 0000h
SSP2DATPPS_SSP2DATPPS_SIZE               equ 0006h
SSP2DATPPS_SSP2DATPPS_LENGTH             equ 0006h
SSP2DATPPS_SSP2DATPPS_MASK               equ 003Fh
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
SSP2DATPPS_SSP2DATPPS5_POSN              equ 0005h
SSP2DATPPS_SSP2DATPPS5_POSITION          equ 0005h
SSP2DATPPS_SSP2DATPPS5_SIZE              equ 0001h
SSP2DATPPS_SSP2DATPPS5_LENGTH            equ 0001h
SSP2DATPPS_SSP2DATPPS5_MASK              equ 0020h

// Register: SSP2SSPPS
#define SSP2SSPPS SSP2SSPPS
SSP2SSPPS                                equ 01ECAh
// bitfield definitions
SSP2SSPPS_SSP2SSPPS_POSN                 equ 0000h
SSP2SSPPS_SSP2SSPPS_POSITION             equ 0000h
SSP2SSPPS_SSP2SSPPS_SIZE                 equ 0006h
SSP2SSPPS_SSP2SSPPS_LENGTH               equ 0006h
SSP2SSPPS_SSP2SSPPS_MASK                 equ 003Fh
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
SSP2SSPPS_SSP2SSPPS5_POSN                equ 0005h
SSP2SSPPS_SSP2SSPPS5_POSITION            equ 0005h
SSP2SSPPS_SSP2SSPPS5_SIZE                equ 0001h
SSP2SSPPS_SSP2SSPPS5_LENGTH              equ 0001h
SSP2SSPPS_SSP2SSPPS5_MASK                equ 0020h

// Register: RX1DTPPS
#define RX1DTPPS RX1DTPPS
RX1DTPPS                                 equ 01ECBh
// bitfield definitions
RX1DTPPS_RX1DTPPS_POSN                   equ 0000h
RX1DTPPS_RX1DTPPS_POSITION               equ 0000h
RX1DTPPS_RX1DTPPS_SIZE                   equ 0006h
RX1DTPPS_RX1DTPPS_LENGTH                 equ 0006h
RX1DTPPS_RX1DTPPS_MASK                   equ 003Fh
RX1DTPPS_RX1DTPPS0_POSN                  equ 0000h
RX1DTPPS_RX1DTPPS0_POSITION              equ 0000h
RX1DTPPS_RX1DTPPS0_SIZE                  equ 0001h
RX1DTPPS_RX1DTPPS0_LENGTH                equ 0001h
RX1DTPPS_RX1DTPPS0_MASK                  equ 0001h
RX1DTPPS_RX1DTPPS1_POSN                  equ 0001h
RX1DTPPS_RX1DTPPS1_POSITION              equ 0001h
RX1DTPPS_RX1DTPPS1_SIZE                  equ 0001h
RX1DTPPS_RX1DTPPS1_LENGTH                equ 0001h
RX1DTPPS_RX1DTPPS1_MASK                  equ 0002h
RX1DTPPS_RX1DTPPS2_POSN                  equ 0002h
RX1DTPPS_RX1DTPPS2_POSITION              equ 0002h
RX1DTPPS_RX1DTPPS2_SIZE                  equ 0001h
RX1DTPPS_RX1DTPPS2_LENGTH                equ 0001h
RX1DTPPS_RX1DTPPS2_MASK                  equ 0004h
RX1DTPPS_RX1DTPPS3_POSN                  equ 0003h
RX1DTPPS_RX1DTPPS3_POSITION              equ 0003h
RX1DTPPS_RX1DTPPS3_SIZE                  equ 0001h
RX1DTPPS_RX1DTPPS3_LENGTH                equ 0001h
RX1DTPPS_RX1DTPPS3_MASK                  equ 0008h
RX1DTPPS_RX1DTPPS4_POSN                  equ 0004h
RX1DTPPS_RX1DTPPS4_POSITION              equ 0004h
RX1DTPPS_RX1DTPPS4_SIZE                  equ 0001h
RX1DTPPS_RX1DTPPS4_LENGTH                equ 0001h
RX1DTPPS_RX1DTPPS4_MASK                  equ 0010h
RX1DTPPS_RX1DTPPS5_POSN                  equ 0005h
RX1DTPPS_RX1DTPPS5_POSITION              equ 0005h
RX1DTPPS_RX1DTPPS5_SIZE                  equ 0001h
RX1DTPPS_RX1DTPPS5_LENGTH                equ 0001h
RX1DTPPS_RX1DTPPS5_MASK                  equ 0020h

// Register: TX1CKPPS
#define TX1CKPPS TX1CKPPS
TX1CKPPS                                 equ 01ECCh
// bitfield definitions
TX1CKPPS_TX1CKPPS_POSN                   equ 0000h
TX1CKPPS_TX1CKPPS_POSITION               equ 0000h
TX1CKPPS_TX1CKPPS_SIZE                   equ 0006h
TX1CKPPS_TX1CKPPS_LENGTH                 equ 0006h
TX1CKPPS_TX1CKPPS_MASK                   equ 003Fh
TX1CKPPS_TX1CKPPS0_POSN                  equ 0000h
TX1CKPPS_TX1CKPPS0_POSITION              equ 0000h
TX1CKPPS_TX1CKPPS0_SIZE                  equ 0001h
TX1CKPPS_TX1CKPPS0_LENGTH                equ 0001h
TX1CKPPS_TX1CKPPS0_MASK                  equ 0001h
TX1CKPPS_TX1CKPPS1_POSN                  equ 0001h
TX1CKPPS_TX1CKPPS1_POSITION              equ 0001h
TX1CKPPS_TX1CKPPS1_SIZE                  equ 0001h
TX1CKPPS_TX1CKPPS1_LENGTH                equ 0001h
TX1CKPPS_TX1CKPPS1_MASK                  equ 0002h
TX1CKPPS_TX1CKPPS2_POSN                  equ 0002h
TX1CKPPS_TX1CKPPS2_POSITION              equ 0002h
TX1CKPPS_TX1CKPPS2_SIZE                  equ 0001h
TX1CKPPS_TX1CKPPS2_LENGTH                equ 0001h
TX1CKPPS_TX1CKPPS2_MASK                  equ 0004h
TX1CKPPS_TX1CKPPS3_POSN                  equ 0003h
TX1CKPPS_TX1CKPPS3_POSITION              equ 0003h
TX1CKPPS_TX1CKPPS3_SIZE                  equ 0001h
TX1CKPPS_TX1CKPPS3_LENGTH                equ 0001h
TX1CKPPS_TX1CKPPS3_MASK                  equ 0008h
TX1CKPPS_TX1CKPPS4_POSN                  equ 0004h
TX1CKPPS_TX1CKPPS4_POSITION              equ 0004h
TX1CKPPS_TX1CKPPS4_SIZE                  equ 0001h
TX1CKPPS_TX1CKPPS4_LENGTH                equ 0001h
TX1CKPPS_TX1CKPPS4_MASK                  equ 0010h
TX1CKPPS_TX1CKPPS5_POSN                  equ 0005h
TX1CKPPS_TX1CKPPS5_POSITION              equ 0005h
TX1CKPPS_TX1CKPPS5_SIZE                  equ 0001h
TX1CKPPS_TX1CKPPS5_LENGTH                equ 0001h
TX1CKPPS_TX1CKPPS5_MASK                  equ 0020h

// Register: RX2DTPPS
#define RX2DTPPS RX2DTPPS
RX2DTPPS                                 equ 01ECDh
// bitfield definitions
RX2DTPPS_RX2DTPPS_POSN                   equ 0000h
RX2DTPPS_RX2DTPPS_POSITION               equ 0000h
RX2DTPPS_RX2DTPPS_SIZE                   equ 0006h
RX2DTPPS_RX2DTPPS_LENGTH                 equ 0006h
RX2DTPPS_RX2DTPPS_MASK                   equ 003Fh
RX2DTPPS_RX2DTPPS0_POSN                  equ 0000h
RX2DTPPS_RX2DTPPS0_POSITION              equ 0000h
RX2DTPPS_RX2DTPPS0_SIZE                  equ 0001h
RX2DTPPS_RX2DTPPS0_LENGTH                equ 0001h
RX2DTPPS_RX2DTPPS0_MASK                  equ 0001h
RX2DTPPS_RX2DTPPS1_POSN                  equ 0001h
RX2DTPPS_RX2DTPPS1_POSITION              equ 0001h
RX2DTPPS_RX2DTPPS1_SIZE                  equ 0001h
RX2DTPPS_RX2DTPPS1_LENGTH                equ 0001h
RX2DTPPS_RX2DTPPS1_MASK                  equ 0002h
RX2DTPPS_RX2DTPPS2_POSN                  equ 0002h
RX2DTPPS_RX2DTPPS2_POSITION              equ 0002h
RX2DTPPS_RX2DTPPS2_SIZE                  equ 0001h
RX2DTPPS_RX2DTPPS2_LENGTH                equ 0001h
RX2DTPPS_RX2DTPPS2_MASK                  equ 0004h
RX2DTPPS_RX2DTPPS3_POSN                  equ 0003h
RX2DTPPS_RX2DTPPS3_POSITION              equ 0003h
RX2DTPPS_RX2DTPPS3_SIZE                  equ 0001h
RX2DTPPS_RX2DTPPS3_LENGTH                equ 0001h
RX2DTPPS_RX2DTPPS3_MASK                  equ 0008h
RX2DTPPS_RX2DTPPS4_POSN                  equ 0004h
RX2DTPPS_RX2DTPPS4_POSITION              equ 0004h
RX2DTPPS_RX2DTPPS4_SIZE                  equ 0001h
RX2DTPPS_RX2DTPPS4_LENGTH                equ 0001h
RX2DTPPS_RX2DTPPS4_MASK                  equ 0010h
RX2DTPPS_RX2DTPPS5_POSN                  equ 0005h
RX2DTPPS_RX2DTPPS5_POSITION              equ 0005h
RX2DTPPS_RX2DTPPS5_SIZE                  equ 0001h
RX2DTPPS_RX2DTPPS5_LENGTH                equ 0001h
RX2DTPPS_RX2DTPPS5_MASK                  equ 0020h

// Register: TX2CKPPS
#define TX2CKPPS TX2CKPPS
TX2CKPPS                                 equ 01ECEh
// bitfield definitions
TX2CKPPS_TX2CKPPS_POSN                   equ 0000h
TX2CKPPS_TX2CKPPS_POSITION               equ 0000h
TX2CKPPS_TX2CKPPS_SIZE                   equ 0006h
TX2CKPPS_TX2CKPPS_LENGTH                 equ 0006h
TX2CKPPS_TX2CKPPS_MASK                   equ 003Fh
TX2CKPPS_TX2CKPPS0_POSN                  equ 0000h
TX2CKPPS_TX2CKPPS0_POSITION              equ 0000h
TX2CKPPS_TX2CKPPS0_SIZE                  equ 0001h
TX2CKPPS_TX2CKPPS0_LENGTH                equ 0001h
TX2CKPPS_TX2CKPPS0_MASK                  equ 0001h
TX2CKPPS_TX2CKPPS1_POSN                  equ 0001h
TX2CKPPS_TX2CKPPS1_POSITION              equ 0001h
TX2CKPPS_TX2CKPPS1_SIZE                  equ 0001h
TX2CKPPS_TX2CKPPS1_LENGTH                equ 0001h
TX2CKPPS_TX2CKPPS1_MASK                  equ 0002h
TX2CKPPS_TX2CKPPS2_POSN                  equ 0002h
TX2CKPPS_TX2CKPPS2_POSITION              equ 0002h
TX2CKPPS_TX2CKPPS2_SIZE                  equ 0001h
TX2CKPPS_TX2CKPPS2_LENGTH                equ 0001h
TX2CKPPS_TX2CKPPS2_MASK                  equ 0004h
TX2CKPPS_TX2CKPPS3_POSN                  equ 0003h
TX2CKPPS_TX2CKPPS3_POSITION              equ 0003h
TX2CKPPS_TX2CKPPS3_SIZE                  equ 0001h
TX2CKPPS_TX2CKPPS3_LENGTH                equ 0001h
TX2CKPPS_TX2CKPPS3_MASK                  equ 0008h
TX2CKPPS_TX2CKPPS4_POSN                  equ 0004h
TX2CKPPS_TX2CKPPS4_POSITION              equ 0004h
TX2CKPPS_TX2CKPPS4_SIZE                  equ 0001h
TX2CKPPS_TX2CKPPS4_LENGTH                equ 0001h
TX2CKPPS_TX2CKPPS4_MASK                  equ 0010h
TX2CKPPS_TX2CKPPS5_POSN                  equ 0005h
TX2CKPPS_TX2CKPPS5_POSITION              equ 0005h
TX2CKPPS_TX2CKPPS5_SIZE                  equ 0001h
TX2CKPPS_TX2CKPPS5_LENGTH                equ 0001h
TX2CKPPS_TX2CKPPS5_MASK                  equ 0020h

// Register: RA0PPS
#define RA0PPS RA0PPS
RA0PPS                                   equ 01F10h
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

// Register: RA1PPS
#define RA1PPS RA1PPS
RA1PPS                                   equ 01F11h
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

// Register: RA2PPS
#define RA2PPS RA2PPS
RA2PPS                                   equ 01F12h
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

// Register: RA3PPS
#define RA3PPS RA3PPS
RA3PPS                                   equ 01F13h
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

// Register: RA4PPS
#define RA4PPS RA4PPS
RA4PPS                                   equ 01F14h
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

// Register: RA5PPS
#define RA5PPS RA5PPS
RA5PPS                                   equ 01F15h
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

// Register: RA6PPS
#define RA6PPS RA6PPS
RA6PPS                                   equ 01F16h
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

// Register: RA7PPS
#define RA7PPS RA7PPS
RA7PPS                                   equ 01F17h
// bitfield definitions
RA7PPS_RA7PPS0_POSN                      equ 0000h
RA7PPS_RA7PPS0_POSITION                  equ 0000h
RA7PPS_RA7PPS0_SIZE                      equ 0001h
RA7PPS_RA7PPS0_LENGTH                    equ 0001h
RA7PPS_RA7PPS0_MASK                      equ 0001h
RA7PPS_RA7PPS1_POSN                      equ 0001h
RA7PPS_RA7PPS1_POSITION                  equ 0001h
RA7PPS_RA7PPS1_SIZE                      equ 0001h
RA7PPS_RA7PPS1_LENGTH                    equ 0001h
RA7PPS_RA7PPS1_MASK                      equ 0002h
RA7PPS_RA7PPS2_POSN                      equ 0002h
RA7PPS_RA7PPS2_POSITION                  equ 0002h
RA7PPS_RA7PPS2_SIZE                      equ 0001h
RA7PPS_RA7PPS2_LENGTH                    equ 0001h
RA7PPS_RA7PPS2_MASK                      equ 0004h
RA7PPS_RA7PPS3_POSN                      equ 0003h
RA7PPS_RA7PPS3_POSITION                  equ 0003h
RA7PPS_RA7PPS3_SIZE                      equ 0001h
RA7PPS_RA7PPS3_LENGTH                    equ 0001h
RA7PPS_RA7PPS3_MASK                      equ 0008h
RA7PPS_RA7PPS4_POSN                      equ 0004h
RA7PPS_RA7PPS4_POSITION                  equ 0004h
RA7PPS_RA7PPS4_SIZE                      equ 0001h
RA7PPS_RA7PPS4_LENGTH                    equ 0001h
RA7PPS_RA7PPS4_MASK                      equ 0010h

// Register: RB0PPS
#define RB0PPS RB0PPS
RB0PPS                                   equ 01F18h
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

// Register: RB1PPS
#define RB1PPS RB1PPS
RB1PPS                                   equ 01F19h
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

// Register: RB2PPS
#define RB2PPS RB2PPS
RB2PPS                                   equ 01F1Ah
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

// Register: RB3PPS
#define RB3PPS RB3PPS
RB3PPS                                   equ 01F1Bh
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

// Register: RB4PPS
#define RB4PPS RB4PPS
RB4PPS                                   equ 01F1Ch
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

// Register: RB5PPS
#define RB5PPS RB5PPS
RB5PPS                                   equ 01F1Dh
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

// Register: RB6PPS
#define RB6PPS RB6PPS
RB6PPS                                   equ 01F1Eh
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

// Register: RB7PPS
#define RB7PPS RB7PPS
RB7PPS                                   equ 01F1Fh
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

// Register: RC0PPS
#define RC0PPS RC0PPS
RC0PPS                                   equ 01F20h
// bitfield definitions
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
RC1PPS                                   equ 01F21h
// bitfield definitions
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
RC2PPS                                   equ 01F22h
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

// Register: RC3PPS
#define RC3PPS RC3PPS
RC3PPS                                   equ 01F23h
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

// Register: RC4PPS
#define RC4PPS RC4PPS
RC4PPS                                   equ 01F24h
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

// Register: RC5PPS
#define RC5PPS RC5PPS
RC5PPS                                   equ 01F25h
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

// Register: RC6PPS
#define RC6PPS RC6PPS
RC6PPS                                   equ 01F26h
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

// Register: RC7PPS
#define RC7PPS RC7PPS
RC7PPS                                   equ 01F27h
// bitfield definitions
RC7PPS_RC7PPS0_POSN                      equ 0000h
RC7PPS_RC7PPS0_POSITION                  equ 0000h
RC7PPS_RC7PPS0_SIZE                      equ 0001h
RC7PPS_RC7PPS0_LENGTH                    equ 0001h
RC7PPS_RC7PPS0_MASK                      equ 0001h
RC7PPS_RC7PPS1_POSN                      equ 0001h
RC7PPS_RC7PPS1_POSITION                  equ 0001h
RC7PPS_RC7PPS1_SIZE                      equ 0001h
RC7PPS_RC7PPS1_LENGTH                    equ 0001h
RC7PPS_RC7PPS1_MASK                      equ 0002h
RC7PPS_RC7PPS2_POSN                      equ 0002h
RC7PPS_RC7PPS2_POSITION                  equ 0002h
RC7PPS_RC7PPS2_SIZE                      equ 0001h
RC7PPS_RC7PPS2_LENGTH                    equ 0001h
RC7PPS_RC7PPS2_MASK                      equ 0004h
RC7PPS_RC7PPS3_POSN                      equ 0003h
RC7PPS_RC7PPS3_POSITION                  equ 0003h
RC7PPS_RC7PPS3_SIZE                      equ 0001h
RC7PPS_RC7PPS3_LENGTH                    equ 0001h
RC7PPS_RC7PPS3_MASK                      equ 0008h
RC7PPS_RC7PPS4_POSN                      equ 0004h
RC7PPS_RC7PPS4_POSITION                  equ 0004h
RC7PPS_RC7PPS4_SIZE                      equ 0001h
RC7PPS_RC7PPS4_LENGTH                    equ 0001h
RC7PPS_RC7PPS4_MASK                      equ 0010h

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 01F38h
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

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 01F39h
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

// Register: ODCONA
#define ODCONA ODCONA
ODCONA                                   equ 01F3Ah
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
ODCONA_ODCA7_POSN                        equ 0007h
ODCONA_ODCA7_POSITION                    equ 0007h
ODCONA_ODCA7_SIZE                        equ 0001h
ODCONA_ODCA7_LENGTH                      equ 0001h
ODCONA_ODCA7_MASK                        equ 0080h

// Register: SLRCONA
#define SLRCONA SLRCONA
SLRCONA                                  equ 01F3Bh
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

// Register: INLVLA
#define INLVLA INLVLA
INLVLA                                   equ 01F3Ch
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

// Register: IOCAP
#define IOCAP IOCAP
IOCAP                                    equ 01F3Dh
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
IOCAN                                    equ 01F3Eh
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
IOCAF                                    equ 01F3Fh
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

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 01F43h
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
WPUB                                     equ 01F44h
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
ODCONB                                   equ 01F45h
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
SLRCONB                                  equ 01F46h
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
INLVLB                                   equ 01F47h
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
IOCBP                                    equ 01F48h
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
IOCBN                                    equ 01F49h
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
IOCBF                                    equ 01F4Ah
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
ANSELC                                   equ 01F4Eh
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

// Register: WPUC
#define WPUC WPUC
WPUC                                     equ 01F4Fh
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

// Register: ODCONC
#define ODCONC ODCONC
ODCONC                                   equ 01F50h
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
ODCONC_ODCC6_POSN                        equ 0006h
ODCONC_ODCC6_POSITION                    equ 0006h
ODCONC_ODCC6_SIZE                        equ 0001h
ODCONC_ODCC6_LENGTH                      equ 0001h
ODCONC_ODCC6_MASK                        equ 0040h
ODCONC_ODCC7_POSN                        equ 0007h
ODCONC_ODCC7_POSITION                    equ 0007h
ODCONC_ODCC7_SIZE                        equ 0001h
ODCONC_ODCC7_LENGTH                      equ 0001h
ODCONC_ODCC7_MASK                        equ 0080h

// Register: SLRCONC
#define SLRCONC SLRCONC
SLRCONC                                  equ 01F51h
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

// Register: INLVLC
#define INLVLC INLVLC
INLVLC                                   equ 01F52h
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

// Register: IOCCP
#define IOCCP IOCCP
IOCCP                                    equ 01F53h
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
IOCCN                                    equ 01F54h
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
IOCCF                                    equ 01F55h
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

// Register: WPUE
#define WPUE WPUE
WPUE                                     equ 01F65h
// bitfield definitions
WPUE_WPUE3_POSN                          equ 0003h
WPUE_WPUE3_POSITION                      equ 0003h
WPUE_WPUE3_SIZE                          equ 0001h
WPUE_WPUE3_LENGTH                        equ 0001h
WPUE_WPUE3_MASK                          equ 0008h

// Register: INLVLE
#define INLVLE INLVLE
INLVLE                                   equ 01F68h
// bitfield definitions
INLVLE_INLVLE3_POSN                      equ 0003h
INLVLE_INLVLE3_POSITION                  equ 0003h
INLVLE_INLVLE3_SIZE                      equ 0001h
INLVLE_INLVLE3_LENGTH                    equ 0001h
INLVLE_INLVLE3_MASK                      equ 0008h

// Register: IOCEP
#define IOCEP IOCEP
IOCEP                                    equ 01F69h
// bitfield definitions
IOCEP_IOCEP3_POSN                        equ 0003h
IOCEP_IOCEP3_POSITION                    equ 0003h
IOCEP_IOCEP3_SIZE                        equ 0001h
IOCEP_IOCEP3_LENGTH                      equ 0001h
IOCEP_IOCEP3_MASK                        equ 0008h

// Register: IOCEN
#define IOCEN IOCEN
IOCEN                                    equ 01F6Ah
// bitfield definitions
IOCEN_IOCEN3_POSN                        equ 0003h
IOCEN_IOCEN3_POSITION                    equ 0003h
IOCEN_IOCEN3_SIZE                        equ 0001h
IOCEN_IOCEN3_LENGTH                      equ 0001h
IOCEN_IOCEN3_MASK                        equ 0008h

// Register: IOCEF
#define IOCEF IOCEF
IOCEF                                    equ 01F6Bh
// bitfield definitions
IOCEF_IOCEF3_POSN                        equ 0003h
IOCEF_IOCEF3_POSITION                    equ 0003h
IOCEF_IOCEF3_SIZE                        equ 0001h
IOCEF_IOCEF3_LENGTH                      equ 0001h
IOCEF_IOCEF3_MASK                        equ 0008h

// Register: STATUS_SHAD
#define STATUS_SHAD STATUS_SHAD
STATUS_SHAD                              equ 01FE4h
// bitfield definitions
STATUS_SHAD_STATUS_SHAD_POSN             equ 0000h
STATUS_SHAD_STATUS_SHAD_POSITION         equ 0000h
STATUS_SHAD_STATUS_SHAD_SIZE             equ 0008h
STATUS_SHAD_STATUS_SHAD_LENGTH           equ 0008h
STATUS_SHAD_STATUS_SHAD_MASK             equ 00FFh

// Register: WREG_SHAD
#define WREG_SHAD WREG_SHAD
WREG_SHAD                                equ 01FE5h
// bitfield definitions
WREG_SHAD_WREG_SHAD_POSN                 equ 0000h
WREG_SHAD_WREG_SHAD_POSITION             equ 0000h
WREG_SHAD_WREG_SHAD_SIZE                 equ 0008h
WREG_SHAD_WREG_SHAD_LENGTH               equ 0008h
WREG_SHAD_WREG_SHAD_MASK                 equ 00FFh

// Register: BSR_SHAD
#define BSR_SHAD BSR_SHAD
BSR_SHAD                                 equ 01FE6h
// bitfield definitions
BSR_SHAD_BSR_SHAD_POSN                   equ 0000h
BSR_SHAD_BSR_SHAD_POSITION               equ 0000h
BSR_SHAD_BSR_SHAD_SIZE                   equ 0008h
BSR_SHAD_BSR_SHAD_LENGTH                 equ 0008h
BSR_SHAD_BSR_SHAD_MASK                   equ 00FFh

// Register: PCLATH_SHAD
#define PCLATH_SHAD PCLATH_SHAD
PCLATH_SHAD                              equ 01FE7h
// bitfield definitions
PCLATH_SHAD_PCLATH_SHAD_POSN             equ 0000h
PCLATH_SHAD_PCLATH_SHAD_POSITION         equ 0000h
PCLATH_SHAD_PCLATH_SHAD_SIZE             equ 0008h
PCLATH_SHAD_PCLATH_SHAD_LENGTH           equ 0008h
PCLATH_SHAD_PCLATH_SHAD_MASK             equ 00FFh

// Register: FSR0L_SHAD
#define FSR0L_SHAD FSR0L_SHAD
FSR0L_SHAD                               equ 01FE8h
// bitfield definitions
FSR0L_SHAD_FSR0L_SHAD_POSN               equ 0000h
FSR0L_SHAD_FSR0L_SHAD_POSITION           equ 0000h
FSR0L_SHAD_FSR0L_SHAD_SIZE               equ 0008h
FSR0L_SHAD_FSR0L_SHAD_LENGTH             equ 0008h
FSR0L_SHAD_FSR0L_SHAD_MASK               equ 00FFh

// Register: FSR0H_SHAD
#define FSR0H_SHAD FSR0H_SHAD
FSR0H_SHAD                               equ 01FE9h
// bitfield definitions
FSR0H_SHAD_FSR0H_SHAD_POSN               equ 0000h
FSR0H_SHAD_FSR0H_SHAD_POSITION           equ 0000h
FSR0H_SHAD_FSR0H_SHAD_SIZE               equ 0008h
FSR0H_SHAD_FSR0H_SHAD_LENGTH             equ 0008h
FSR0H_SHAD_FSR0H_SHAD_MASK               equ 00FFh

// Register: FSR1L_SHAD
#define FSR1L_SHAD FSR1L_SHAD
FSR1L_SHAD                               equ 01FEAh
// bitfield definitions
FSR1L_SHAD_FSR1L_SHAD_POSN               equ 0000h
FSR1L_SHAD_FSR1L_SHAD_POSITION           equ 0000h
FSR1L_SHAD_FSR1L_SHAD_SIZE               equ 0008h
FSR1L_SHAD_FSR1L_SHAD_LENGTH             equ 0008h
FSR1L_SHAD_FSR1L_SHAD_MASK               equ 00FFh

// Register: FSR1H_SHAD
#define FSR1H_SHAD FSR1H_SHAD
FSR1H_SHAD                               equ 01FEBh
// bitfield definitions
FSR1H_SHAD_FSR1H_SHAD_POSN               equ 0000h
FSR1H_SHAD_FSR1H_SHAD_POSITION           equ 0000h
FSR1H_SHAD_FSR1H_SHAD_SIZE               equ 0008h
FSR1H_SHAD_FSR1H_SHAD_LENGTH             equ 0008h
FSR1H_SHAD_FSR1H_SHAD_MASK               equ 00FFh

// Register: STKPTR
#define STKPTR STKPTR
STKPTR                                   equ 01FEDh
// bitfield definitions
STKPTR_STKPTR0_POSN                      equ 0000h
STKPTR_STKPTR0_POSITION                  equ 0000h
STKPTR_STKPTR0_SIZE                      equ 0001h
STKPTR_STKPTR0_LENGTH                    equ 0001h
STKPTR_STKPTR0_MASK                      equ 0001h
STKPTR_STKPTR1_POSN                      equ 0001h
STKPTR_STKPTR1_POSITION                  equ 0001h
STKPTR_STKPTR1_SIZE                      equ 0001h
STKPTR_STKPTR1_LENGTH                    equ 0001h
STKPTR_STKPTR1_MASK                      equ 0002h
STKPTR_STKPTR2_POSN                      equ 0002h
STKPTR_STKPTR2_POSITION                  equ 0002h
STKPTR_STKPTR2_SIZE                      equ 0001h
STKPTR_STKPTR2_LENGTH                    equ 0001h
STKPTR_STKPTR2_MASK                      equ 0004h
STKPTR_STKPTR3_POSN                      equ 0003h
STKPTR_STKPTR3_POSITION                  equ 0003h
STKPTR_STKPTR3_SIZE                      equ 0001h
STKPTR_STKPTR3_LENGTH                    equ 0001h
STKPTR_STKPTR3_MASK                      equ 0008h
STKPTR_STKPTR4_POSN                      equ 0004h
STKPTR_STKPTR4_POSITION                  equ 0004h
STKPTR_STKPTR4_SIZE                      equ 0001h
STKPTR_STKPTR4_LENGTH                    equ 0001h
STKPTR_STKPTR4_MASK                      equ 0010h

// Register: TOSL
#define TOSL TOSL
TOSL                                     equ 01FEEh
// bitfield definitions
TOSL_TOSL_POSN                           equ 0000h
TOSL_TOSL_POSITION                       equ 0000h
TOSL_TOSL_SIZE                           equ 0008h
TOSL_TOSL_LENGTH                         equ 0008h
TOSL_TOSL_MASK                           equ 00FFh
TOSL_TOSL0_POSN                          equ 0000h
TOSL_TOSL0_POSITION                      equ 0000h
TOSL_TOSL0_SIZE                          equ 0001h
TOSL_TOSL0_LENGTH                        equ 0001h
TOSL_TOSL0_MASK                          equ 0001h
TOSL_TOSL1_POSN                          equ 0001h
TOSL_TOSL1_POSITION                      equ 0001h
TOSL_TOSL1_SIZE                          equ 0001h
TOSL_TOSL1_LENGTH                        equ 0001h
TOSL_TOSL1_MASK                          equ 0002h
TOSL_TOSL2_POSN                          equ 0002h
TOSL_TOSL2_POSITION                      equ 0002h
TOSL_TOSL2_SIZE                          equ 0001h
TOSL_TOSL2_LENGTH                        equ 0001h
TOSL_TOSL2_MASK                          equ 0004h
TOSL_TOSL3_POSN                          equ 0003h
TOSL_TOSL3_POSITION                      equ 0003h
TOSL_TOSL3_SIZE                          equ 0001h
TOSL_TOSL3_LENGTH                        equ 0001h
TOSL_TOSL3_MASK                          equ 0008h
TOSL_TOSL4_POSN                          equ 0004h
TOSL_TOSL4_POSITION                      equ 0004h
TOSL_TOSL4_SIZE                          equ 0001h
TOSL_TOSL4_LENGTH                        equ 0001h
TOSL_TOSL4_MASK                          equ 0010h
TOSL_TOSL5_POSN                          equ 0005h
TOSL_TOSL5_POSITION                      equ 0005h
TOSL_TOSL5_SIZE                          equ 0001h
TOSL_TOSL5_LENGTH                        equ 0001h
TOSL_TOSL5_MASK                          equ 0020h
TOSL_TOSL6_POSN                          equ 0006h
TOSL_TOSL6_POSITION                      equ 0006h
TOSL_TOSL6_SIZE                          equ 0001h
TOSL_TOSL6_LENGTH                        equ 0001h
TOSL_TOSL6_MASK                          equ 0040h
TOSL_TOSL7_POSN                          equ 0007h
TOSL_TOSL7_POSITION                      equ 0007h
TOSL_TOSL7_SIZE                          equ 0001h
TOSL_TOSL7_LENGTH                        equ 0001h
TOSL_TOSL7_MASK                          equ 0080h

// Register: TOSH
#define TOSH TOSH
TOSH                                     equ 01FEFh
// bitfield definitions
TOSH_TOSH_POSN                           equ 0000h
TOSH_TOSH_POSITION                       equ 0000h
TOSH_TOSH_SIZE                           equ 0008h
TOSH_TOSH_LENGTH                         equ 0008h
TOSH_TOSH_MASK                           equ 00FFh
TOSH_TOSH0_POSN                          equ 0000h
TOSH_TOSH0_POSITION                      equ 0000h
TOSH_TOSH0_SIZE                          equ 0001h
TOSH_TOSH0_LENGTH                        equ 0001h
TOSH_TOSH0_MASK                          equ 0001h
TOSH_TOSH1_POSN                          equ 0001h
TOSH_TOSH1_POSITION                      equ 0001h
TOSH_TOSH1_SIZE                          equ 0001h
TOSH_TOSH1_LENGTH                        equ 0001h
TOSH_TOSH1_MASK                          equ 0002h
TOSH_TOSH2_POSN                          equ 0002h
TOSH_TOSH2_POSITION                      equ 0002h
TOSH_TOSH2_SIZE                          equ 0001h
TOSH_TOSH2_LENGTH                        equ 0001h
TOSH_TOSH2_MASK                          equ 0004h
TOSH_TOSH3_POSN                          equ 0003h
TOSH_TOSH3_POSITION                      equ 0003h
TOSH_TOSH3_SIZE                          equ 0001h
TOSH_TOSH3_LENGTH                        equ 0001h
TOSH_TOSH3_MASK                          equ 0008h
TOSH_TOSH4_POSN                          equ 0004h
TOSH_TOSH4_POSITION                      equ 0004h
TOSH_TOSH4_SIZE                          equ 0001h
TOSH_TOSH4_LENGTH                        equ 0001h
TOSH_TOSH4_MASK                          equ 0010h
TOSH_TOSH5_POSN                          equ 0005h
TOSH_TOSH5_POSITION                      equ 0005h
TOSH_TOSH5_SIZE                          equ 0001h
TOSH_TOSH5_LENGTH                        equ 0001h
TOSH_TOSH5_MASK                          equ 0020h
TOSH_TOSH6_POSN                          equ 0006h
TOSH_TOSH6_POSITION                      equ 0006h
TOSH_TOSH6_SIZE                          equ 0001h
TOSH_TOSH6_LENGTH                        equ 0001h
TOSH_TOSH6_MASK                          equ 0040h
TOSH_TOSH7_POSN                          equ 0007h
TOSH_TOSH7_POSITION                      equ 0007h
TOSH_TOSH7_SIZE                          equ 0001h
TOSH_TOSH7_LENGTH                        equ 0001h
TOSH_TOSH7_MASK                          equ 0080h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ACKDT1                           BANKMASK(SSP1CON2), 5
#define ACKDT2                           BANKMASK(SSP2CON2), 5
#define ACKEN1                           BANKMASK(SSP1CON2), 4
#define ACKEN2                           BANKMASK(SSP2CON2), 4
#define ACKSTAT1                         BANKMASK(SSP1CON2), 6
#define ACKSTAT2                         BANKMASK(SSP2CON2), 6
#define ADACT0                           BANKMASK(ADACT), 0
#define ADACT1                           BANKMASK(ADACT), 1
#define ADACT2                           BANKMASK(ADACT), 2
#define ADACT3                           BANKMASK(ADACT), 3
#define ADACT4                           BANKMASK(ADACT), 4
#define ADACTPPS0                        BANKMASK(ADACTPPS), 0
#define ADACTPPS1                        BANKMASK(ADACTPPS), 1
#define ADACTPPS2                        BANKMASK(ADACTPPS), 2
#define ADACTPPS3                        BANKMASK(ADACTPPS), 3
#define ADACTPPS4                        BANKMASK(ADACTPPS), 4
#define ADACTPPS5                        BANKMASK(ADACTPPS), 5
#define ADCMD                            BANKMASK(PMD2), 5
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADFM                             BANKMASK(ADCON1), 7
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADIE                             BANKMASK(PIE1), 0
#define ADIF                             BANKMASK(PIR1), 0
#define ADMSK11                          BANKMASK(SSP1CON2), 1
#define ADMSK12                          BANKMASK(SSP2CON2), 1
#define ADMSK21                          BANKMASK(SSP1CON2), 2
#define ADMSK22                          BANKMASK(SSP2CON2), 2
#define ADMSK31                          BANKMASK(SSP1CON2), 3
#define ADMSK32                          BANKMASK(SSP2CON2), 3
#define ADMSK41                          BANKMASK(SSP1CON2), 4
#define ADMSK42                          BANKMASK(SSP2CON2), 4
#define ADMSK51                          BANKMASK(SSP1CON2), 5
#define ADMSK52                          BANKMASK(SSP2CON2), 5
#define ADOEN                            BANKMASK(OSCEN), 2
#define ADON                             BANKMASK(ADCON0), 0
#define ADOR                             BANKMASK(OSCSTAT), 2
#define ADPREF0                          BANKMASK(ADCON1), 0
#define ADPREF1                          BANKMASK(ADCON1), 1
#define ADRESH0                          BANKMASK(ADRESH), 0
#define ADRESH1                          BANKMASK(ADRESH), 1
#define ADRESH2                          BANKMASK(ADRESH), 2
#define ADRESH3                          BANKMASK(ADRESH), 3
#define ADRESH4                          BANKMASK(ADRESH), 4
#define ADRESH5                          BANKMASK(ADRESH), 5
#define ADRESH6                          BANKMASK(ADRESH), 6
#define ADRESH7                          BANKMASK(ADRESH), 7
#define ADRESL0                          BANKMASK(ADRESL), 0
#define ADRESL1                          BANKMASK(ADRESL), 1
#define ADRESL2                          BANKMASK(ADRESL), 2
#define ADRESL3                          BANKMASK(ADRESL), 3
#define ADRESL4                          BANKMASK(ADRESL), 4
#define ADRESL5                          BANKMASK(ADRESL), 5
#define ADRESL6                          BANKMASK(ADRESL), 6
#define ADRESL7                          BANKMASK(ADRESL), 7
#define ADTIE                            BANKMASK(PIE1), 1
#define ADTIF                            BANKMASK(PIR1), 1
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
#define AS0E                             BANKMASK(CWG1AS1), 0
#define AS1E                             BANKMASK(CWG1AS1), 1
#define AS2E                             BANKMASK(CWG1AS1), 2
#define AS3E                             BANKMASK(CWG1AS1), 3
#define AS4E                             BANKMASK(CWG1AS1), 4
#define BCL1IE                           BANKMASK(PIE3), 1
#define BCL1IF                           BANKMASK(PIR3), 1
#define BCL2IE                           BANKMASK(PIE3), 3
#define BCL2IF                           BANKMASK(PIR3), 3
#define BF1                              BANKMASK(SSP1STAT), 0
#define BF2                              BANKMASK(SSP2STAT), 0
#define BORRDY                           BANKMASK(BORCON), 0
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define BSR5                             BANKMASK(BSR), 5
#define C1EN                             BANKMASK(CM1CON0), 7
#define C1HYS                            BANKMASK(CM1CON0), 1
#define C1IE                             BANKMASK(PIE2), 0
#define C1IF                             BANKMASK(PIR2), 0
#define C1INTN                           BANKMASK(CM1CON1), 0
#define C1INTP                           BANKMASK(CM1CON1), 1
#define C1NCH0                           BANKMASK(CM1NCH), 0
#define C1NCH1                           BANKMASK(CM1NCH), 1
#define C1NCH2                           BANKMASK(CM1NCH), 2
#define C1PCH0                           BANKMASK(CM1PCH), 0
#define C1PCH1                           BANKMASK(CM1PCH), 1
#define C1PCH2                           BANKMASK(CM1PCH), 2
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1SYNC                           BANKMASK(CM1CON0), 0
#define C2EN                             BANKMASK(CM2CON0), 7
#define C2HYS                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE2), 1
#define C2IF                             BANKMASK(PIR2), 1
#define C2INTN                           BANKMASK(CM2CON1), 0
#define C2INTP                           BANKMASK(CM2CON1), 1
#define C2NCH0                           BANKMASK(CM2NCH), 0
#define C2NCH1                           BANKMASK(CM2NCH), 1
#define C2NCH2                           BANKMASK(CM2NCH), 2
#define C2PCH0                           BANKMASK(CM2PCH), 0
#define C2PCH1                           BANKMASK(CM2PCH), 1
#define C2PCH2                           BANKMASK(CM2PCH), 2
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2SYNC                           BANKMASK(CM2CON0), 0
#define CAL01                            BANKMASK(TMR1L), 0
#define CAL11                            BANKMASK(TMR1L), 1
#define CAL21                            BANKMASK(TMR1L), 2
#define CAL31                            BANKMASK(TMR1L), 3
#define CAL41                            BANKMASK(TMR1L), 4
#define CAL51                            BANKMASK(TMR1L), 5
#define CAL61                            BANKMASK(TMR1L), 6
#define CAL71                            BANKMASK(TMR1L), 7
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1CTS0                         BANKMASK(CCP1CAP), 0
#define CCP1CTS1                         BANKMASK(CCP1CAP), 1
#define CCP1CTS2                         BANKMASK(CCP1CAP), 2
#define CCP1EN                           BANKMASK(CCP1CON), 7
#define CCP1FMT                          BANKMASK(CCP1CON), 4
#define CCP1IE                           BANKMASK(PIE6), 0
#define CCP1IF                           BANKMASK(PIR6), 0
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
#define CCP1PPS5                         BANKMASK(CCP1PPS), 5
#define CCP2CTS0                         BANKMASK(CCP2CAP), 0
#define CCP2CTS1                         BANKMASK(CCP2CAP), 1
#define CCP2CTS2                         BANKMASK(CCP2CAP), 2
#define CCP2EN                           BANKMASK(CCP2CON), 7
#define CCP2FMT                          BANKMASK(CCP2CON), 4
#define CCP2IE                           BANKMASK(PIE6), 1
#define CCP2IF                           BANKMASK(PIR6), 1
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
#define CCP2PPS5                         BANKMASK(CCP2PPS), 5
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CDIV0                            BANKMASK(OSCCON2), 0
#define CDIV1                            BANKMASK(OSCCON2), 1
#define CDIV2                            BANKMASK(OSCCON2), 2
#define CDIV3                            BANKMASK(OSCCON2), 3
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CHS5                             BANKMASK(ADCON0), 7
#define CKE1                             BANKMASK(SSP1STAT), 6
#define CKE2                             BANKMASK(SSP2STAT), 6
#define CKP1                             BANKMASK(SSP1CON1), 4
#define CKP2                             BANKMASK(SSP2CON1), 4
#define CKPOL                            BANKMASK(T2HLT), 6
#define CKPS2                            BANKMASK(T2CON), 6
#define CKSYNC                           BANKMASK(T2HLT), 5
#define CLC1IE                           BANKMASK(PIE5), 4
#define CLC1IF                           BANKMASK(PIR5), 4
#define CLC1MD                           BANKMASK(PMD5), 1
#define CLC2IE                           BANKMASK(PIE5), 5
#define CLC2IF                           BANKMASK(PIR5), 5
#define CLC2MD                           BANKMASK(PMD5), 2
#define CLC3IE                           BANKMASK(PIE5), 6
#define CLC3IF                           BANKMASK(PIR5), 6
#define CLC3MD                           BANKMASK(PMD5), 3
#define CLC4IE                           BANKMASK(PIE5), 7
#define CLC4IF                           BANKMASK(PIR5), 7
#define CLC4MD                           BANKMASK(PMD5), 4
#define CLCIN0PPS0                       BANKMASK(CLCIN0PPS), 0
#define CLCIN0PPS1                       BANKMASK(CLCIN0PPS), 1
#define CLCIN0PPS2                       BANKMASK(CLCIN0PPS), 2
#define CLCIN0PPS3                       BANKMASK(CLCIN0PPS), 3
#define CLCIN0PPS4                       BANKMASK(CLCIN0PPS), 4
#define CLCIN0PPS5                       BANKMASK(CLCIN0PPS), 5
#define CLCIN1PPS0                       BANKMASK(CLCIN1PPS), 0
#define CLCIN1PPS1                       BANKMASK(CLCIN1PPS), 1
#define CLCIN1PPS2                       BANKMASK(CLCIN1PPS), 2
#define CLCIN1PPS3                       BANKMASK(CLCIN1PPS), 3
#define CLCIN1PPS4                       BANKMASK(CLCIN1PPS), 4
#define CLCIN1PPS5                       BANKMASK(CLCIN1PPS), 5
#define CLCIN2PPS0                       BANKMASK(CLCIN2PPS), 0
#define CLCIN2PPS1                       BANKMASK(CLCIN2PPS), 1
#define CLCIN2PPS2                       BANKMASK(CLCIN2PPS), 2
#define CLCIN2PPS3                       BANKMASK(CLCIN2PPS), 3
#define CLCIN2PPS4                       BANKMASK(CLCIN2PPS), 4
#define CLCIN2PPS5                       BANKMASK(CLCIN2PPS), 5
#define CLCIN3PPS0                       BANKMASK(CLCIN3PPS), 0
#define CLCIN3PPS1                       BANKMASK(CLCIN3PPS), 1
#define CLCIN3PPS2                       BANKMASK(CLCIN3PPS), 2
#define CLCIN3PPS3                       BANKMASK(CLCIN3PPS), 3
#define CLCIN3PPS4                       BANKMASK(CLCIN3PPS), 4
#define CLCIN3PPS5                       BANKMASK(CLCIN3PPS), 5
#define CLKRCLK0                         BANKMASK(CLKRCLK), 0
#define CLKRCLK1                         BANKMASK(CLKRCLK), 1
#define CLKRCLK2                         BANKMASK(CLKRCLK), 2
#define CLKRCLK3                         BANKMASK(CLKRCLK), 3
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
#define CS                               BANKMASK(CWG1CLKCON), 0
#define CSWHOLD                          BANKMASK(OSCCON3), 7
#define CSWIE                            BANKMASK(PIE1), 6
#define CSWIF                            BANKMASK(PIR1), 6
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
#define CWG1IE                           BANKMASK(PIE7), 0
#define CWG1IF                           BANKMASK(PIR7), 0
#define CWG1IN                           BANKMASK(CWG1CON1), 5
#define CWG1LD                           BANKMASK(CWG1CON0), 6
#define CWG1LSAC0                        BANKMASK(CWG1AS0), 2
#define CWG1LSAC1                        BANKMASK(CWG1AS0), 3
#define CWG1LSBD0                        BANKMASK(CWG1AS0), 4
#define CWG1LSBD1                        BANKMASK(CWG1AS0), 5
#define CWG1MD                           BANKMASK(PMD4), 0
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
#define CWG1PPS5                         BANKMASK(CWG1PPS), 5
#define CWG1REN                          BANKMASK(CWG1AS0), 6
#define CWG1SHUTDOWN                     BANKMASK(CWG1AS0), 7
#define CWG1STRA                         BANKMASK(CWG1STR), 0
#define CWG1STRB                         BANKMASK(CWG1STR), 1
#define CWG1STRC                         BANKMASK(CWG1STR), 2
#define CWG1STRD                         BANKMASK(CWG1STR), 3
#define DA1                              BANKMASK(SSP1STAT), 5
#define DA2                              BANKMASK(SSP2STAT), 5
#define DAC1EN                           BANKMASK(DAC1CON0), 7
#define DAC1MD                           BANKMASK(PMD2), 6
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
#define DATA_ADDRESS1                    BANKMASK(SSP1STAT), 5
#define DATA_ADDRESS2                    BANKMASK(SSP2STAT), 5
#define DBF0                             BANKMASK(CWG1DBF), 0
#define DBF1                             BANKMASK(CWG1DBF), 1
#define DBF2                             BANKMASK(CWG1DBF), 2
#define DBF3                             BANKMASK(CWG1DBF), 3
#define DBF4                             BANKMASK(CWG1DBF), 4
#define DBF5                             BANKMASK(CWG1DBF), 5
#define DBR0                             BANKMASK(CWG1DBR), 0
#define DBR1                             BANKMASK(CWG1DBR), 1
#define DBR2                             BANKMASK(CWG1DBR), 2
#define DBR3                             BANKMASK(CWG1DBR), 3
#define DBR4                             BANKMASK(CWG1DBR), 4
#define DBR5                             BANKMASK(CWG1DBR), 5
#define DC                               BANKMASK(STATUS), 1
#define DOE                              BANKMASK(CPUDOZE), 4
#define DOZE0                            BANKMASK(CPUDOZE), 0
#define DOZE1                            BANKMASK(CPUDOZE), 1
#define DOZE2                            BANKMASK(CPUDOZE), 2
#define DOZEN                            BANKMASK(CPUDOZE), 6
#define D_A1                             BANKMASK(SSP1STAT), 5
#define D_A2                             BANKMASK(SSP2STAT), 5
#define D_nA1                            BANKMASK(SSP1STAT), 5
#define D_nA2                            BANKMASK(SSP2STAT), 5
#define EXTOEN                           BANKMASK(OSCEN), 7
#define EXTOR                            BANKMASK(OSCSTAT), 7
#define FREE                             BANKMASK(NVMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRMD                            BANKMASK(PMD0), 6
#define FVRRDY                           BANKMASK(FVRCON), 6
#define G1EN                             BANKMASK(CWG1CON0), 7
#define GCEN1                            BANKMASK(SSP1CON2), 7
#define GCEN2                            BANKMASK(SSP2CON2), 7
#define GGO_nDONE                        BANKMASK(T1GCON), 3
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GOnDONE                          BANKMASK(ADCON0), 1
#define GPOL                             BANKMASK(T1GCON), 6
#define GSPM                             BANKMASK(T1GCON), 4
#define GSS0                             BANKMASK(T1GATE), 0
#define GSS1                             BANKMASK(T1GATE), 1
#define GSS2                             BANKMASK(T1GATE), 2
#define GSS3                             BANKMASK(T1GATE), 3
#define GSS4                             BANKMASK(T1GATE), 4
#define GTM                              BANKMASK(T1GCON), 5
#define GVAL                             BANKMASK(T1GCON), 2
#define HFFRQ0                           BANKMASK(OSCFRQ), 0
#define HFFRQ1                           BANKMASK(OSCFRQ), 1
#define HFFRQ2                           BANKMASK(OSCFRQ), 2
#define HFOEN                            BANKMASK(OSCEN), 6
#define HFOR                             BANKMASK(OSCSTAT), 6
#define HFTUN0                           BANKMASK(OSCTUNE), 0
#define HFTUN1                           BANKMASK(OSCTUNE), 1
#define HFTUN2                           BANKMASK(OSCTUNE), 2
#define HFTUN3                           BANKMASK(OSCTUNE), 3
#define HFTUN4                           BANKMASK(OSCTUNE), 4
#define HFTUN5                           BANKMASK(OSCTUNE), 5
#define I2C_DAT1                         BANKMASK(SSP1STAT), 5
#define I2C_DAT2                         BANKMASK(SSP2STAT), 5
#define I2C_READ1                        BANKMASK(SSP1STAT), 2
#define I2C_READ2                        BANKMASK(SSP2STAT), 2
#define I2C_START1                       BANKMASK(SSP1STAT), 3
#define I2C_START2                       BANKMASK(SSP2STAT), 3
#define IDLEN                            BANKMASK(CPUDOZE), 7
#define IN                               BANKMASK(CWG1CON1), 5
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
#define INTE                             BANKMASK(PIE0), 0
#define INTEDG                           BANKMASK(INTCON), 0
#define INTF                             BANKMASK(PIR0), 0
#define INTPPS0                          BANKMASK(INTPPS), 0
#define INTPPS1                          BANKMASK(INTPPS), 1
#define INTPPS2                          BANKMASK(INTPPS), 2
#define INTPPS3                          BANKMASK(INTPPS), 3
#define INTPPS4                          BANKMASK(INTPPS), 4
#define INTPPS5                          BANKMASK(INTPPS), 5
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
#define IOCIE                            BANKMASK(PIE0), 4
#define IOCIF                            BANKMASK(PIR0), 4
#define IOCMD                            BANKMASK(PMD0), 0
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
#define LD                               BANKMASK(CWG1CON0), 6
#define LFOEN                            BANKMASK(OSCEN), 4
#define LFOR                             BANKMASK(OSCSTAT), 4
#define LSAC0                            BANKMASK(CWG1AS0), 2
#define LSAC1                            BANKMASK(CWG1AS0), 3
#define LSBD0                            BANKMASK(CWG1AS0), 4
#define LSBD1                            BANKMASK(CWG1AS0), 5
#define LWLO                             BANKMASK(NVMCON1), 5
#define MC1OUT                           BANKMASK(CMOUT), 0
#define MC2OUT                           BANKMASK(CMOUT), 1
#define MFOEN                            BANKMASK(OSCEN), 5
#define MFOR                             BANKMASK(OSCSTAT), 5
#define MLC1OUT                          BANKMASK(CLCDATA), 0
#define MLC2OUT                          BANKMASK(CLCDATA), 1
#define MLC3OUT                          BANKMASK(CLCDATA), 2
#define MLC4OUT                          BANKMASK(CLCDATA), 3
#define MODE4                            BANKMASK(T2HLT), 4
#define MSK01                            BANKMASK(SSP1ADD), 0
#define MSK02                            BANKMASK(SSP2ADD), 0
#define MSK11                            BANKMASK(SSP1ADD), 1
#define MSK12                            BANKMASK(SSP2ADD), 1
#define MSK21                            BANKMASK(SSP1ADD), 2
#define MSK22                            BANKMASK(SSP2ADD), 2
#define MSK31                            BANKMASK(SSP1ADD), 3
#define MSK32                            BANKMASK(SSP2ADD), 3
#define MSK41                            BANKMASK(SSP1ADD), 4
#define MSK42                            BANKMASK(SSP2ADD), 4
#define MSK51                            BANKMASK(SSP1ADD), 5
#define MSK52                            BANKMASK(SSP2ADD), 5
#define MSK61                            BANKMASK(SSP1ADD), 6
#define MSK62                            BANKMASK(SSP2ADD), 6
#define MSK71                            BANKMASK(SSP1ADD), 7
#define MSK72                            BANKMASK(SSP2ADD), 7
#define MSSP1MD                          BANKMASK(PMD4), 4
#define MSSP2MD                          BANKMASK(PMD4), 5
#define N1CKS0                           BANKMASK(NCO1CLK), 0
#define N1CKS1                           BANKMASK(NCO1CLK), 1
#define N1CKS2                           BANKMASK(NCO1CLK), 2
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
#define NCO1IE                           BANKMASK(PIE7), 4
#define NCO1IF                           BANKMASK(PIR7), 4
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
#define NCO1MD                           BANKMASK(PMD1), 7
#define NCOIE                            BANKMASK(PIE7), 4
#define NCOIF                            BANKMASK(PIR7), 4
#define NCOMD                            BANKMASK(PMD1), 7
#define NDIV0                            BANKMASK(OSCCON1), 0
#define NDIV1                            BANKMASK(OSCCON1), 1
#define NDIV2                            BANKMASK(OSCCON1), 2
#define NDIV3                            BANKMASK(OSCCON1), 3
#define NOSC0                            BANKMASK(OSCCON1), 4
#define NOSC1                            BANKMASK(OSCCON1), 5
#define NOSC2                            BANKMASK(OSCCON1), 6
#define NOSCR                            BANKMASK(OSCCON3), 3
#define NSS                              BANKMASK(DAC1CON0), 0
#define NVMADRH0                         BANKMASK(NVMADRH), 0
#define NVMADRH1                         BANKMASK(NVMADRH), 1
#define NVMADRH2                         BANKMASK(NVMADRH), 2
#define NVMADRH3                         BANKMASK(NVMADRH), 3
#define NVMADRH4                         BANKMASK(NVMADRH), 4
#define NVMADRH5                         BANKMASK(NVMADRH), 5
#define NVMADRH6                         BANKMASK(NVMADRH), 6
#define NVMADRL0                         BANKMASK(NVMADRL), 0
#define NVMADRL1                         BANKMASK(NVMADRL), 1
#define NVMADRL2                         BANKMASK(NVMADRL), 2
#define NVMADRL3                         BANKMASK(NVMADRL), 3
#define NVMADRL4                         BANKMASK(NVMADRL), 4
#define NVMADRL5                         BANKMASK(NVMADRL), 5
#define NVMADRL6                         BANKMASK(NVMADRL), 6
#define NVMADRL7                         BANKMASK(NVMADRL), 7
#define NVMDATH0                         BANKMASK(NVMDATH), 0
#define NVMDATH1                         BANKMASK(NVMDATH), 1
#define NVMDATH2                         BANKMASK(NVMDATH), 2
#define NVMDATH3                         BANKMASK(NVMDATH), 3
#define NVMDATH4                         BANKMASK(NVMDATH), 4
#define NVMDATH5                         BANKMASK(NVMDATH), 5
#define NVMDATL0                         BANKMASK(NVMDATL), 0
#define NVMDATL1                         BANKMASK(NVMDATL), 1
#define NVMDATL2                         BANKMASK(NVMDATL), 2
#define NVMDATL3                         BANKMASK(NVMDATL), 3
#define NVMDATL4                         BANKMASK(NVMDATL), 4
#define NVMDATL5                         BANKMASK(NVMDATL), 5
#define NVMDATL6                         BANKMASK(NVMDATL), 6
#define NVMDATL7                         BANKMASK(NVMDATL), 7
#define NVMIE                            BANKMASK(PIE7), 5
#define NVMIF                            BANKMASK(PIR7), 5
#define NVMMD                            BANKMASK(PMD0), 2
#define NVMREGS                          BANKMASK(NVMCON1), 6
#define ODCA0                            BANKMASK(ODCONA), 0
#define ODCA1                            BANKMASK(ODCONA), 1
#define ODCA2                            BANKMASK(ODCONA), 2
#define ODCA3                            BANKMASK(ODCONA), 3
#define ODCA4                            BANKMASK(ODCONA), 4
#define ODCA5                            BANKMASK(ODCONA), 5
#define ODCA6                            BANKMASK(ODCONA), 6
#define ODCA7                            BANKMASK(ODCONA), 7
#define ODCB0                            BANKMASK(ODCONB), 0
#define ODCB1                            BANKMASK(ODCONB), 1
#define ODCB2                            BANKMASK(ODCONB), 2
#define ODCB3                            BANKMASK(ODCONB), 3
#define ODCB4                            BANKMASK(ODCONB), 4
#define ODCB5                            BANKMASK(ODCONB), 5
#define ODCB6                            BANKMASK(ODCONB), 6
#define ODCB7                            BANKMASK(ODCONB), 7
#define ODCC0                            BANKMASK(ODCONC), 0
#define ODCC1                            BANKMASK(ODCONC), 1
#define ODCC2                            BANKMASK(ODCONC), 2
#define ODCC3                            BANKMASK(ODCONC), 3
#define ODCC4                            BANKMASK(ODCONC), 4
#define ODCC5                            BANKMASK(ODCONC), 5
#define ODCC6                            BANKMASK(ODCONC), 6
#define ODCC7                            BANKMASK(ODCONC), 7
#define OE1                              BANKMASK(DAC1CON0), 5
#define OE2                              BANKMASK(DAC1CON0), 4
#define ORDY                             BANKMASK(OSCCON3), 4
#define OSFIE                            BANKMASK(PIE1), 7
#define OSFIF                            BANKMASK(PIR1), 7
#define OUTPS0                           BANKMASK(T2CON), 0
#define OUTPS1                           BANKMASK(T2CON), 1
#define OUTPS2                           BANKMASK(T2CON), 2
#define OUTPS3                           BANKMASK(T2CON), 3
#define OVRA                             BANKMASK(CWG1STR), 4
#define OVRB                             BANKMASK(CWG1STR), 5
#define OVRC                             BANKMASK(CWG1STR), 6
#define OVRD                             BANKMASK(CWG1STR), 7
#define PEIE                             BANKMASK(INTCON), 6
#define PEN1                             BANKMASK(SSP1CON2), 2
#define PEN2                             BANKMASK(SSP2CON2), 2
#define PLLR                             BANKMASK(OSCSTAT), 0
#define POLA                             BANKMASK(CWG1CON1), 0
#define POLB                             BANKMASK(CWG1CON1), 1
#define POLC                             BANKMASK(CWG1CON1), 2
#define POLD                             BANKMASK(CWG1CON1), 3
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
#define PSS0                             BANKMASK(DAC1CON0), 2
#define PSS1                             BANKMASK(DAC1CON0), 3
#define PSYNC                            BANKMASK(T2HLT), 7
#define PWM3DC0                          BANKMASK(PWM3DCL), 6
#define PWM3DC1                          BANKMASK(PWM3DCL), 7
#define PWM3DC2                          BANKMASK(PWM3DCH), 0
#define PWM3DC3                          BANKMASK(PWM3DCH), 1
#define PWM3DC4                          BANKMASK(PWM3DCH), 2
#define PWM3DC5                          BANKMASK(PWM3DCH), 3
#define PWM3DC6                          BANKMASK(PWM3DCH), 4
#define PWM3DC7                          BANKMASK(PWM3DCH), 5
#define PWM3DC8                          BANKMASK(PWM3DCH), 6
#define PWM3DC9                          BANKMASK(PWM3DCH), 7
#define PWM3EN                           BANKMASK(PWM3CON), 7
#define PWM3MD                           BANKMASK(PMD3), 2
#define PWM3OUT                          BANKMASK(PWM3CON), 5
#define PWM3POL                          BANKMASK(PWM3CON), 4
#define PWM4DC0                          BANKMASK(PWM4DCL), 6
#define PWM4DC1                          BANKMASK(PWM4DCL), 7
#define PWM4DC2                          BANKMASK(PWM4DCH), 0
#define PWM4DC3                          BANKMASK(PWM4DCH), 1
#define PWM4DC4                          BANKMASK(PWM4DCH), 2
#define PWM4DC5                          BANKMASK(PWM4DCH), 3
#define PWM4DC6                          BANKMASK(PWM4DCH), 4
#define PWM4DC7                          BANKMASK(PWM4DCH), 5
#define PWM4DC8                          BANKMASK(PWM4DCH), 6
#define PWM4DC9                          BANKMASK(PWM4DCH), 7
#define PWM4EN                           BANKMASK(PWM4CON), 7
#define PWM4MD                           BANKMASK(PMD3), 3
#define PWM4OUT                          BANKMASK(PWM4CON), 5
#define PWM4POL                          BANKMASK(PWM4CON), 4
#define PWM5DC0                          BANKMASK(PWM5DCL), 6
#define PWM5DC1                          BANKMASK(PWM5DCL), 7
#define PWM5DC2                          BANKMASK(PWM5DCH), 0
#define PWM5DC3                          BANKMASK(PWM5DCH), 1
#define PWM5DC4                          BANKMASK(PWM5DCH), 2
#define PWM5DC5                          BANKMASK(PWM5DCH), 3
#define PWM5DC6                          BANKMASK(PWM5DCH), 4
#define PWM5DC7                          BANKMASK(PWM5DCH), 5
#define PWM5DC8                          BANKMASK(PWM5DCH), 6
#define PWM5DC9                          BANKMASK(PWM5DCH), 7
#define PWM5EN                           BANKMASK(PWM5CON), 7
#define PWM5MD                           BANKMASK(PMD3), 4
#define PWM5OUT                          BANKMASK(PWM5CON), 5
#define PWM5POL                          BANKMASK(PWM5CON), 4
#define PWM6DC0                          BANKMASK(PWM6DCL), 6
#define PWM6DC1                          BANKMASK(PWM6DCL), 7
#define PWM6DC2                          BANKMASK(PWM6DCH), 0
#define PWM6DC3                          BANKMASK(PWM6DCH), 1
#define PWM6DC4                          BANKMASK(PWM6DCH), 2
#define PWM6DC5                          BANKMASK(PWM6DCH), 3
#define PWM6DC6                          BANKMASK(PWM6DCH), 4
#define PWM6DC7                          BANKMASK(PWM6DCH), 5
#define PWM6DC8                          BANKMASK(PWM6DCH), 6
#define PWM6DC9                          BANKMASK(PWM6DCH), 7
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
#define RA3PPS0                          BANKMASK(RA3PPS), 0
#define RA3PPS1                          BANKMASK(RA3PPS), 1
#define RA3PPS2                          BANKMASK(RA3PPS), 2
#define RA3PPS3                          BANKMASK(RA3PPS), 3
#define RA3PPS4                          BANKMASK(RA3PPS), 4
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
#define RA6                              BANKMASK(PORTA), 6
#define RA6PPS0                          BANKMASK(RA6PPS), 0
#define RA6PPS1                          BANKMASK(RA6PPS), 1
#define RA6PPS2                          BANKMASK(RA6PPS), 2
#define RA6PPS3                          BANKMASK(RA6PPS), 3
#define RA6PPS4                          BANKMASK(RA6PPS), 4
#define RA7                              BANKMASK(PORTA), 7
#define RA7PPS0                          BANKMASK(RA7PPS), 0
#define RA7PPS1                          BANKMASK(RA7PPS), 1
#define RA7PPS2                          BANKMASK(RA7PPS), 2
#define RA7PPS3                          BANKMASK(RA7PPS), 3
#define RA7PPS4                          BANKMASK(RA7PPS), 4
#define RB0                              BANKMASK(PORTB), 0
#define RB0PPS0                          BANKMASK(RB0PPS), 0
#define RB0PPS1                          BANKMASK(RB0PPS), 1
#define RB0PPS2                          BANKMASK(RB0PPS), 2
#define RB0PPS3                          BANKMASK(RB0PPS), 3
#define RB0PPS4                          BANKMASK(RB0PPS), 4
#define RB1                              BANKMASK(PORTB), 1
#define RB1PPS0                          BANKMASK(RB1PPS), 0
#define RB1PPS1                          BANKMASK(RB1PPS), 1
#define RB1PPS2                          BANKMASK(RB1PPS), 2
#define RB1PPS3                          BANKMASK(RB1PPS), 3
#define RB1PPS4                          BANKMASK(RB1PPS), 4
#define RB2                              BANKMASK(PORTB), 2
#define RB2PPS0                          BANKMASK(RB2PPS), 0
#define RB2PPS1                          BANKMASK(RB2PPS), 1
#define RB2PPS2                          BANKMASK(RB2PPS), 2
#define RB2PPS3                          BANKMASK(RB2PPS), 3
#define RB2PPS4                          BANKMASK(RB2PPS), 4
#define RB3                              BANKMASK(PORTB), 3
#define RB3PPS0                          BANKMASK(RB3PPS), 0
#define RB3PPS1                          BANKMASK(RB3PPS), 1
#define RB3PPS2                          BANKMASK(RB3PPS), 2
#define RB3PPS3                          BANKMASK(RB3PPS), 3
#define RB3PPS4                          BANKMASK(RB3PPS), 4
#define RB4                              BANKMASK(PORTB), 4
#define RB4PPS0                          BANKMASK(RB4PPS), 0
#define RB4PPS1                          BANKMASK(RB4PPS), 1
#define RB4PPS2                          BANKMASK(RB4PPS), 2
#define RB4PPS3                          BANKMASK(RB4PPS), 3
#define RB4PPS4                          BANKMASK(RB4PPS), 4
#define RB5                              BANKMASK(PORTB), 5
#define RB5PPS0                          BANKMASK(RB5PPS), 0
#define RB5PPS1                          BANKMASK(RB5PPS), 1
#define RB5PPS2                          BANKMASK(RB5PPS), 2
#define RB5PPS3                          BANKMASK(RB5PPS), 3
#define RB5PPS4                          BANKMASK(RB5PPS), 4
#define RB6                              BANKMASK(PORTB), 6
#define RB6PPS0                          BANKMASK(RB6PPS), 0
#define RB6PPS1                          BANKMASK(RB6PPS), 1
#define RB6PPS2                          BANKMASK(RB6PPS), 2
#define RB6PPS3                          BANKMASK(RB6PPS), 3
#define RB6PPS4                          BANKMASK(RB6PPS), 4
#define RB7                              BANKMASK(PORTB), 7
#define RB7PPS0                          BANKMASK(RB7PPS), 0
#define RB7PPS1                          BANKMASK(RB7PPS), 1
#define RB7PPS2                          BANKMASK(RB7PPS), 2
#define RB7PPS3                          BANKMASK(RB7PPS), 3
#define RB7PPS4                          BANKMASK(RB7PPS), 4
#define RC0                              BANKMASK(PORTC), 0
#define RC0PPS0                          BANKMASK(RC0PPS), 0
#define RC0PPS1                          BANKMASK(RC0PPS), 1
#define RC0PPS2                          BANKMASK(RC0PPS), 2
#define RC0PPS3                          BANKMASK(RC0PPS), 3
#define RC0PPS4                          BANKMASK(RC0PPS), 4
#define RC1                              BANKMASK(PORTC), 1
#define RC1IE                            BANKMASK(PIE3), 5
#define RC1IF                            BANKMASK(PIR3), 5
#define RC1PPS0                          BANKMASK(RC1PPS), 0
#define RC1PPS1                          BANKMASK(RC1PPS), 1
#define RC1PPS2                          BANKMASK(RC1PPS), 2
#define RC1PPS3                          BANKMASK(RC1PPS), 3
#define RC1PPS4                          BANKMASK(RC1PPS), 4
#define RC2                              BANKMASK(PORTC), 2
#define RC2IE                            BANKMASK(PIE3), 7
#define RC2IF                            BANKMASK(PIR3), 7
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
#define RC6                              BANKMASK(PORTC), 6
#define RC6PPS0                          BANKMASK(RC6PPS), 0
#define RC6PPS1                          BANKMASK(RC6PPS), 1
#define RC6PPS2                          BANKMASK(RC6PPS), 2
#define RC6PPS3                          BANKMASK(RC6PPS), 3
#define RC6PPS4                          BANKMASK(RC6PPS), 4
#define RC7                              BANKMASK(PORTC), 7
#define RC7PPS0                          BANKMASK(RC7PPS), 0
#define RC7PPS1                          BANKMASK(RC7PPS), 1
#define RC7PPS2                          BANKMASK(RC7PPS), 2
#define RC7PPS3                          BANKMASK(RC7PPS), 3
#define RC7PPS4                          BANKMASK(RC7PPS), 4
#define RCEN1                            BANKMASK(SSP1CON2), 3
#define RCEN2                            BANKMASK(SSP2CON2), 3
#define RD                               BANKMASK(NVMCON1), 0
#define RD16                             BANKMASK(T1CON), 1
#define RD161                            BANKMASK(T1CON), 1
#define RE3                              BANKMASK(PORTE), 3
#define READ_WRITE1                      BANKMASK(SSP1STAT), 2
#define READ_WRITE2                      BANKMASK(SSP2STAT), 2
#define REN                              BANKMASK(CWG1AS0), 6
#define ROI                              BANKMASK(CPUDOZE), 5
#define RSEL0                            BANKMASK(T2RST), 0
#define RSEL1                            BANKMASK(T2RST), 1
#define RSEL2                            BANKMASK(T2RST), 2
#define RSEL3                            BANKMASK(T2RST), 3
#define RSEN1                            BANKMASK(SSP1CON2), 1
#define RSEN2                            BANKMASK(SSP2CON2), 1
#define RW1                              BANKMASK(SSP1STAT), 2
#define RW2                              BANKMASK(SSP2STAT), 2
#define RX1DTPPS0                        BANKMASK(RX1DTPPS), 0
#define RX1DTPPS1                        BANKMASK(RX1DTPPS), 1
#define RX1DTPPS2                        BANKMASK(RX1DTPPS), 2
#define RX1DTPPS3                        BANKMASK(RX1DTPPS), 3
#define RX1DTPPS4                        BANKMASK(RX1DTPPS), 4
#define RX1DTPPS5                        BANKMASK(RX1DTPPS), 5
#define RX2DTPPS0                        BANKMASK(RX2DTPPS), 0
#define RX2DTPPS1                        BANKMASK(RX2DTPPS), 1
#define RX2DTPPS2                        BANKMASK(RX2DTPPS), 2
#define RX2DTPPS3                        BANKMASK(RX2DTPPS), 3
#define RX2DTPPS4                        BANKMASK(RX2DTPPS), 4
#define RX2DTPPS5                        BANKMASK(RX2DTPPS), 5
#define R_W1                             BANKMASK(SSP1STAT), 2
#define R_W2                             BANKMASK(SSP2STAT), 2
#define R_nW1                            BANKMASK(SSP1STAT), 2
#define R_nW2                            BANKMASK(SSP2STAT), 2
#define SBOREN                           BANKMASK(BORCON), 7
#define SEN1                             BANKMASK(SSP1CON2), 0
#define SEN2                             BANKMASK(SSP2CON2), 0
#define SHUTDOWN                         BANKMASK(CWG1AS0), 7
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
#define SMP1                             BANKMASK(SSP1STAT), 7
#define SMP2                             BANKMASK(SSP2STAT), 7
#define SOR                              BANKMASK(OSCSTAT), 3
#define SOSCEN                           BANKMASK(OSCEN), 3
#define SOSCPWR                          BANKMASK(OSCCON3), 6
#define SSP1CLKPPS0                      BANKMASK(SSP1CLKPPS), 0
#define SSP1CLKPPS1                      BANKMASK(SSP1CLKPPS), 1
#define SSP1CLKPPS2                      BANKMASK(SSP1CLKPPS), 2
#define SSP1CLKPPS3                      BANKMASK(SSP1CLKPPS), 3
#define SSP1CLKPPS4                      BANKMASK(SSP1CLKPPS), 4
#define SSP1CLKPPS5                      BANKMASK(SSP1CLKPPS), 5
#define SSP1DATPPS0                      BANKMASK(SSP1DATPPS), 0
#define SSP1DATPPS1                      BANKMASK(SSP1DATPPS), 1
#define SSP1DATPPS2                      BANKMASK(SSP1DATPPS), 2
#define SSP1DATPPS3                      BANKMASK(SSP1DATPPS), 3
#define SSP1DATPPS4                      BANKMASK(SSP1DATPPS), 4
#define SSP1DATPPS5                      BANKMASK(SSP1DATPPS), 5
#define SSP1IE                           BANKMASK(PIE3), 0
#define SSP1IF                           BANKMASK(PIR3), 0
#define SSP1SSPPS0                       BANKMASK(SSP1SSPPS), 0
#define SSP1SSPPS1                       BANKMASK(SSP1SSPPS), 1
#define SSP1SSPPS2                       BANKMASK(SSP1SSPPS), 2
#define SSP1SSPPS3                       BANKMASK(SSP1SSPPS), 3
#define SSP1SSPPS4                       BANKMASK(SSP1SSPPS), 4
#define SSP1SSPPS5                       BANKMASK(SSP1SSPPS), 5
#define SSP2CLKPPS0                      BANKMASK(SSP2CLKPPS), 0
#define SSP2CLKPPS1                      BANKMASK(SSP2CLKPPS), 1
#define SSP2CLKPPS2                      BANKMASK(SSP2CLKPPS), 2
#define SSP2CLKPPS3                      BANKMASK(SSP2CLKPPS), 3
#define SSP2CLKPPS4                      BANKMASK(SSP2CLKPPS), 4
#define SSP2CLKPPS5                      BANKMASK(SSP2CLKPPS), 5
#define SSP2DATPPS0                      BANKMASK(SSP2DATPPS), 0
#define SSP2DATPPS1                      BANKMASK(SSP2DATPPS), 1
#define SSP2DATPPS2                      BANKMASK(SSP2DATPPS), 2
#define SSP2DATPPS3                      BANKMASK(SSP2DATPPS), 3
#define SSP2DATPPS4                      BANKMASK(SSP2DATPPS), 4
#define SSP2DATPPS5                      BANKMASK(SSP2DATPPS), 5
#define SSP2IE                           BANKMASK(PIE3), 2
#define SSP2IF                           BANKMASK(PIR3), 2
#define SSP2SSPPS0                       BANKMASK(SSP2SSPPS), 0
#define SSP2SSPPS1                       BANKMASK(SSP2SSPPS), 1
#define SSP2SSPPS2                       BANKMASK(SSP2SSPPS), 2
#define SSP2SSPPS3                       BANKMASK(SSP2SSPPS), 3
#define SSP2SSPPS4                       BANKMASK(SSP2SSPPS), 4
#define SSP2SSPPS5                       BANKMASK(SSP2SSPPS), 5
#define SSPEN1                           BANKMASK(SSP1CON1), 5
#define SSPEN2                           BANKMASK(SSP2CON1), 5
#define SSPM01                           BANKMASK(SSP1CON1), 0
#define SSPM02                           BANKMASK(SSP2CON1), 0
#define SSPM11                           BANKMASK(SSP1CON1), 1
#define SSPM12                           BANKMASK(SSP2CON1), 1
#define SSPM21                           BANKMASK(SSP1CON1), 2
#define SSPM22                           BANKMASK(SSP2CON1), 2
#define SSPM31                           BANKMASK(SSP1CON1), 3
#define SSPM32                           BANKMASK(SSP2CON1), 3
#define SSPOV1                           BANKMASK(SSP1CON1), 6
#define SSPOV2                           BANKMASK(SSP2CON1), 6
#define START1                           BANKMASK(SSP1STAT), 3
#define START2                           BANKMASK(SSP2STAT), 3
#define STATE                            BANKMASK(WDTTMR), 2
#define STKOVF                           BANKMASK(PCON0), 7
#define STKPTR0                          BANKMASK(STKPTR), 0
#define STKPTR1                          BANKMASK(STKPTR), 1
#define STKPTR2                          BANKMASK(STKPTR), 2
#define STKPTR3                          BANKMASK(STKPTR), 3
#define STKPTR4                          BANKMASK(STKPTR), 4
#define STKUNF                           BANKMASK(PCON0), 6
#define STOP1                            BANKMASK(SSP1STAT), 4
#define STOP2                            BANKMASK(SSP2STAT), 4
#define STRA                             BANKMASK(CWG1STR), 0
#define STRB                             BANKMASK(CWG1STR), 1
#define STRC                             BANKMASK(CWG1STR), 2
#define STRD                             BANKMASK(CWG1STR), 3
#define SWDTEN                           BANKMASK(WDTCON0), 0
#define SYSCMD                           BANKMASK(PMD0), 7
#define T016BIT                          BANKMASK(T0CON0), 4
#define T0ASYNC                          BANKMASK(T0CON1), 4
#define T0CKIPPS0                        BANKMASK(T0CKIPPS), 0
#define T0CKIPPS1                        BANKMASK(T0CKIPPS), 1
#define T0CKIPPS2                        BANKMASK(T0CKIPPS), 2
#define T0CKIPPS3                        BANKMASK(T0CKIPPS), 3
#define T0CKIPPS4                        BANKMASK(T0CKIPPS), 4
#define T0CKIPPS5                        BANKMASK(T0CKIPPS), 5
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
#define T0PR0                            BANKMASK(TMR0H), 0
#define T0PR1                            BANKMASK(TMR0H), 1
#define T0PR2                            BANKMASK(TMR0H), 2
#define T0PR3                            BANKMASK(TMR0H), 3
#define T0PR4                            BANKMASK(TMR0H), 4
#define T0PR5                            BANKMASK(TMR0H), 5
#define T0PR6                            BANKMASK(TMR0H), 6
#define T0PR7                            BANKMASK(TMR0H), 7
#define T0PS0                            BANKMASK(T0CON1), 0
#define T0PS1                            BANKMASK(T0CON1), 1
#define T0PS2                            BANKMASK(T0CON1), 2
#define T0PS3                            BANKMASK(T0CON1), 3
#define T1CKIPPS0                        BANKMASK(T1CKIPPS), 0
#define T1CKIPPS1                        BANKMASK(T1CKIPPS), 1
#define T1CKIPPS2                        BANKMASK(T1CKIPPS), 2
#define T1CKIPPS3                        BANKMASK(T1CKIPPS), 3
#define T1CKIPPS4                        BANKMASK(T1CKIPPS), 4
#define T1CKIPPS5                        BANKMASK(T1CKIPPS), 5
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1CS0                            BANKMASK(T1CLK), 0
#define T1CS1                            BANKMASK(T1CLK), 1
#define T1CS2                            BANKMASK(T1CLK), 2
#define T1CS3                            BANKMASK(T1CLK), 3
#define T1GE                             BANKMASK(T1GCON), 7
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GPPS0                          BANKMASK(T1GPPS), 0
#define T1GPPS1                          BANKMASK(T1GPPS), 1
#define T1GPPS2                          BANKMASK(T1GPPS), 2
#define T1GPPS3                          BANKMASK(T1GPPS), 3
#define T1GPPS4                          BANKMASK(T1GPPS), 4
#define T1GPPS5                          BANKMASK(T1GPPS), 5
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GATE), 0
#define T1GSS1                           BANKMASK(T1GATE), 1
#define T1GSS2                           BANKMASK(T1GATE), 2
#define T1GSS3                           BANKMASK(T1GATE), 3
#define T1GSS4                           BANKMASK(T1GATE), 4
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1RD16                           BANKMASK(T1CON), 1
#define T2CKPOL                          BANKMASK(T2HLT), 6
#define T2CKPS0                          BANKMASK(T2CON), 4
#define T2CKPS1                          BANKMASK(T2CON), 5
#define T2CKPS2                          BANKMASK(T2CON), 6
#define T2CKSYNC                         BANKMASK(T2HLT), 5
#define T2CS0                            BANKMASK(T2CLKCON), 0
#define T2CS1                            BANKMASK(T2CLKCON), 1
#define T2CS2                            BANKMASK(T2CLKCON), 2
#define T2CS3                            BANKMASK(T2CLKCON), 3
#define T2INPPS0                         BANKMASK(T2INPPS), 0
#define T2INPPS1                         BANKMASK(T2INPPS), 1
#define T2INPPS2                         BANKMASK(T2INPPS), 2
#define T2INPPS3                         BANKMASK(T2INPPS), 3
#define T2INPPS4                         BANKMASK(T2INPPS), 4
#define T2INPPS5                         BANKMASK(T2INPPS), 5
#define T2MODE0                          BANKMASK(T2HLT), 0
#define T2MODE1                          BANKMASK(T2HLT), 1
#define T2MODE2                          BANKMASK(T2HLT), 2
#define T2MODE3                          BANKMASK(T2HLT), 3
#define T2MODE4                          BANKMASK(T2HLT), 4
#define T2ON                             BANKMASK(T2CON), 7
#define T2OUTPS0                         BANKMASK(T2CON), 0
#define T2OUTPS1                         BANKMASK(T2CON), 1
#define T2OUTPS2                         BANKMASK(T2CON), 2
#define T2OUTPS3                         BANKMASK(T2CON), 3
#define T2PSYNC                          BANKMASK(T2HLT), 7
#define T2RSEL0                          BANKMASK(T2RST), 0
#define T2RSEL1                          BANKMASK(T2RST), 1
#define T2RSEL2                          BANKMASK(T2RST), 2
#define T2RSEL3                          BANKMASK(T2RST), 3
#define TMR0H0                           BANKMASK(TMR0H), 0
#define TMR0H1                           BANKMASK(TMR0H), 1
#define TMR0H2                           BANKMASK(TMR0H), 2
#define TMR0H3                           BANKMASK(TMR0H), 3
#define TMR0H4                           BANKMASK(TMR0H), 4
#define TMR0H5                           BANKMASK(TMR0H), 5
#define TMR0H6                           BANKMASK(TMR0H), 6
#define TMR0H7                           BANKMASK(TMR0H), 7
#define TMR0IE                           BANKMASK(PIE0), 5
#define TMR0IF                           BANKMASK(PIR0), 5
#define TMR0L0                           BANKMASK(TMR0L), 0
#define TMR0L1                           BANKMASK(TMR0L), 1
#define TMR0L2                           BANKMASK(TMR0L), 2
#define TMR0L3                           BANKMASK(TMR0L), 3
#define TMR0L4                           BANKMASK(TMR0L), 4
#define TMR0L5                           BANKMASK(TMR0L), 5
#define TMR0L6                           BANKMASK(TMR0L), 6
#define TMR0L7                           BANKMASK(TMR0L), 7
#define TMR0MD                           BANKMASK(PMD1), 0
#define TMR10                            BANKMASK(TMR1L), 0
#define TMR11                            BANKMASK(TMR1L), 1
#define TMR110                           BANKMASK(TMR1H), 2
#define TMR111                           BANKMASK(TMR1H), 3
#define TMR112                           BANKMASK(TMR1H), 4
#define TMR113                           BANKMASK(TMR1H), 5
#define TMR114                           BANKMASK(TMR1H), 6
#define TMR115                           BANKMASK(TMR1H), 7
#define TMR12                            BANKMASK(TMR1L), 2
#define TMR13                            BANKMASK(TMR1L), 3
#define TMR14                            BANKMASK(TMR1L), 4
#define TMR15                            BANKMASK(TMR1L), 5
#define TMR16                            BANKMASK(TMR1L), 6
#define TMR17                            BANKMASK(TMR1L), 7
#define TMR18                            BANKMASK(TMR1H), 0
#define TMR19                            BANKMASK(TMR1H), 1
#define TMR1GIE                          BANKMASK(PIE5), 0
#define TMR1GIF                          BANKMASK(PIR5), 0
#define TMR1H0                           BANKMASK(TMR1H), 0
#define TMR1H1                           BANKMASK(TMR1H), 1
#define TMR1H2                           BANKMASK(TMR1H), 2
#define TMR1H3                           BANKMASK(TMR1H), 3
#define TMR1H4                           BANKMASK(TMR1H), 4
#define TMR1H5                           BANKMASK(TMR1H), 5
#define TMR1H6                           BANKMASK(TMR1H), 6
#define TMR1H7                           BANKMASK(TMR1H), 7
#define TMR1IE                           BANKMASK(PIE4), 0
#define TMR1IF                           BANKMASK(PIR4), 0
#define TMR1L0                           BANKMASK(TMR1L), 0
#define TMR1L1                           BANKMASK(TMR1L), 1
#define TMR1L2                           BANKMASK(TMR1L), 2
#define TMR1L3                           BANKMASK(TMR1L), 3
#define TMR1L4                           BANKMASK(TMR1L), 4
#define TMR1L5                           BANKMASK(TMR1L), 5
#define TMR1L6                           BANKMASK(TMR1L), 6
#define TMR1L7                           BANKMASK(TMR1L), 7
#define TMR1MD                           BANKMASK(PMD1), 1
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2IE                           BANKMASK(PIE4), 1
#define TMR2IF                           BANKMASK(PIR4), 1
#define TMR2MD                           BANKMASK(PMD1), 2
#define TMR2ON                           BANKMASK(T2CON), 7
#define TOSH0                            BANKMASK(TOSH), 0
#define TOSH1                            BANKMASK(TOSH), 1
#define TOSH2                            BANKMASK(TOSH), 2
#define TOSH3                            BANKMASK(TOSH), 3
#define TOSH4                            BANKMASK(TOSH), 4
#define TOSH5                            BANKMASK(TOSH), 5
#define TOSH6                            BANKMASK(TOSH), 6
#define TOSH7                            BANKMASK(TOSH), 7
#define TOSL0                            BANKMASK(TOSL), 0
#define TOSL1                            BANKMASK(TOSL), 1
#define TOSL2                            BANKMASK(TOSL), 2
#define TOSL3                            BANKMASK(TOSL), 3
#define TOSL4                            BANKMASK(TOSL), 4
#define TOSL5                            BANKMASK(TOSL), 5
#define TOSL6                            BANKMASK(TOSL), 6
#define TOSL7                            BANKMASK(TOSL), 7
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
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TX1CKPPS0                        BANKMASK(TX1CKPPS), 0
#define TX1CKPPS1                        BANKMASK(TX1CKPPS), 1
#define TX1CKPPS2                        BANKMASK(TX1CKPPS), 2
#define TX1CKPPS3                        BANKMASK(TX1CKPPS), 3
#define TX1CKPPS4                        BANKMASK(TX1CKPPS), 4
#define TX1CKPPS5                        BANKMASK(TX1CKPPS), 5
#define TX1IE                            BANKMASK(PIE3), 4
#define TX1IF                            BANKMASK(PIR3), 4
#define TX2CKPPS0                        BANKMASK(TX2CKPPS), 0
#define TX2CKPPS1                        BANKMASK(TX2CKPPS), 1
#define TX2CKPPS2                        BANKMASK(TX2CKPPS), 2
#define TX2CKPPS3                        BANKMASK(TX2CKPPS), 3
#define TX2CKPPS4                        BANKMASK(TX2CKPPS), 4
#define TX2CKPPS5                        BANKMASK(TX2CKPPS), 5
#define TX2IE                            BANKMASK(PIE3), 6
#define TX2IF                            BANKMASK(PIR3), 6
#define UA1                              BANKMASK(SSP1STAT), 1
#define UA2                              BANKMASK(SSP2STAT), 1
#define UART1MD                          BANKMASK(PMD4), 6
#define UART2MD                          BANKMASK(PMD4), 7
#define VREGPM                           BANKMASK(VREGCON), 1
#define WCOL1                            BANKMASK(SSP1CON1), 7
#define WCOL2                            BANKMASK(SSP2CON1), 7
#define WDTCS0                           BANKMASK(WDTCON1), 4
#define WDTCS1                           BANKMASK(WDTCON1), 5
#define WDTCS2                           BANKMASK(WDTCON1), 6
#define WDTPS0                           BANKMASK(WDTCON0), 1
#define WDTPS1                           BANKMASK(WDTCON0), 2
#define WDTPS2                           BANKMASK(WDTCON0), 3
#define WDTPS3                           BANKMASK(WDTCON0), 4
#define WDTPS4                           BANKMASK(WDTCON0), 5
#define WDTPSCNT0                        BANKMASK(WDTPSL), 0
#define WDTPSCNT1                        BANKMASK(WDTPSL), 1
#define WDTPSCNT10                       BANKMASK(WDTPSH), 2
#define WDTPSCNT11                       BANKMASK(WDTPSH), 3
#define WDTPSCNT12                       BANKMASK(WDTPSH), 4
#define WDTPSCNT13                       BANKMASK(WDTPSH), 5
#define WDTPSCNT14                       BANKMASK(WDTPSH), 6
#define WDTPSCNT15                       BANKMASK(WDTPSH), 7
#define WDTPSCNT16                       BANKMASK(WDTTMR), 0
#define WDTPSCNT17                       BANKMASK(WDTTMR), 1
#define WDTPSCNT2                        BANKMASK(WDTPSL), 2
#define WDTPSCNT3                        BANKMASK(WDTPSL), 3
#define WDTPSCNT4                        BANKMASK(WDTPSL), 4
#define WDTPSCNT5                        BANKMASK(WDTPSL), 5
#define WDTPSCNT6                        BANKMASK(WDTPSL), 6
#define WDTPSCNT7                        BANKMASK(WDTPSL), 7
#define WDTPSCNT8                        BANKMASK(WDTPSH), 0
#define WDTPSCNT9                        BANKMASK(WDTPSH), 1
#define WDTSEN                           BANKMASK(WDTCON0), 0
#define WDTSTATE                         BANKMASK(WDTTMR), 2
#define WDTTMR0                          BANKMASK(WDTTMR), 3
#define WDTTMR1                          BANKMASK(WDTTMR), 4
#define WDTTMR2                          BANKMASK(WDTTMR), 5
#define WDTTMR3                          BANKMASK(WDTTMR), 6
#define WDTWINDOW0                       BANKMASK(WDTCON1), 0
#define WDTWINDOW1                       BANKMASK(WDTCON1), 1
#define WDTWINDOW2                       BANKMASK(WDTCON1), 2
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
#define WR                               BANKMASK(NVMCON1), 1
#define WREN                             BANKMASK(NVMCON1), 2
#define WRERR                            BANKMASK(NVMCON1), 3
#define ZCDIE                            BANKMASK(PIE2), 6
#define ZCDIF                            BANKMASK(PIR2), 6
#define ZCDINTN                          BANKMASK(ZCDCON), 0
#define ZCDINTP                          BANKMASK(ZCDCON), 1
#define ZCDMD                            BANKMASK(PMD2), 0
#define ZCDOUT                           BANKMASK(ZCDCON), 5
#define ZCDPOL                           BANKMASK(ZCDCON), 4
#define ZCDSEN                           BANKMASK(ZCDCON), 7
#define ZERO                             BANKMASK(STATUS), 2
#define nADDRESS1                        BANKMASK(SSP1STAT), 5
#define nADDRESS2                        BANKMASK(SSP2STAT), 5
#define nBOR                             BANKMASK(PCON0), 0
#define nMEMV                            BANKMASK(PCON1), 1
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON0), 1
#define nRI                              BANKMASK(PCON0), 2
#define nRMCLR                           BANKMASK(PCON0), 3
#define nRWDT                            BANKMASK(PCON0), 4
#define nSYNC                            BANKMASK(T1CON), 2
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nTO                              BANKMASK(STATUS), 4
#define nWDTWV                           BANKMASK(PCON0), 5
#define nWRITE1                          BANKMASK(SSP1STAT), 2
#define nWRITE2                          BANKMASK(SSP2STAT), 2

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

#endif // _PIC16F15354_INC_
