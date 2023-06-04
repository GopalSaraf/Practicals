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

#ifndef _PIC16F15243_INC_
#define _PIC16F15243_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F15243
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
WREG_WREG_POSN                           equ 0000h
WREG_WREG_POSITION                       equ 0000h
WREG_WREG_SIZE                           equ 0008h
WREG_WREG_LENGTH                         equ 0008h
WREG_WREG_MASK                           equ 00FFh

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

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 000Dh
// bitfield definitions
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

// Register: TRISB
#define TRISB TRISB
TRISB                                    equ 0013h
// bitfield definitions
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

// Register: LATB
#define LATB LATB
LATB                                     equ 0019h
// bitfield definitions
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

// Register: CPCON
#define CPCON CPCON
CPCON                                    equ 009Ah
// bitfield definitions
CPCON_CPRDY_POSN                         equ 0000h
CPCON_CPRDY_POSITION                     equ 0000h
CPCON_CPRDY_SIZE                         equ 0001h
CPCON_CPRDY_LENGTH                       equ 0001h
CPCON_CPRDY_MASK                         equ 0001h
CPCON_CPT_POSN                           equ 0001h
CPCON_CPT_POSITION                       equ 0001h
CPCON_CPT_SIZE                           equ 0001h
CPCON_CPT_LENGTH                         equ 0001h
CPCON_CPT_MASK                           equ 0002h
CPCON_CPON_POSN                          equ 0006h
CPCON_CPON_POSITION                      equ 0006h
CPCON_CPON_SIZE                          equ 0002h
CPCON_CPON_LENGTH                        equ 0002h
CPCON_CPON_MASK                          equ 00C0h

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
ADCON0_ON_POSN                           equ 0000h
ADCON0_ON_POSITION                       equ 0000h
ADCON0_ON_SIZE                           equ 0001h
ADCON0_ON_LENGTH                         equ 0001h
ADCON0_ON_MASK                           equ 0001h
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
ADCON0_ADCHS_POSN                        equ 0002h
ADCON0_ADCHS_POSITION                    equ 0002h
ADCON0_ADCHS_SIZE                        equ 0006h
ADCON0_ADCHS_LENGTH                      equ 0006h
ADCON0_ADCHS_MASK                        equ 00FCh
ADCON0_ADGO_POSN                         equ 0001h
ADCON0_ADGO_POSITION                     equ 0001h
ADCON0_ADGO_SIZE                         equ 0001h
ADCON0_ADGO_LENGTH                       equ 0001h
ADCON0_ADGO_MASK                         equ 0002h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Eh
// bitfield definitions
ADCON1_PREF_POSN                         equ 0000h
ADCON1_PREF_POSITION                     equ 0000h
ADCON1_PREF_SIZE                         equ 0002h
ADCON1_PREF_LENGTH                       equ 0002h
ADCON1_PREF_MASK                         equ 0003h
ADCON1_CS_POSN                           equ 0004h
ADCON1_CS_POSITION                       equ 0004h
ADCON1_CS_SIZE                           equ 0003h
ADCON1_CS_LENGTH                         equ 0003h
ADCON1_CS_MASK                           equ 0070h
ADCON1_FM_POSN                           equ 0007h
ADCON1_FM_POSITION                       equ 0007h
ADCON1_FM_SIZE                           equ 0001h
ADCON1_FM_LENGTH                         equ 0001h
ADCON1_FM_MASK                           equ 0080h
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

// Register: ADACT
#define ADACT ADACT
ADACT                                    equ 009Fh
// bitfield definitions
ADACT_ACT_POSN                           equ 0000h
ADACT_ACT_POSITION                       equ 0000h
ADACT_ACT_SIZE                           equ 0004h
ADACT_ACT_LENGTH                         equ 0004h
ADACT_ACT_MASK                           equ 000Fh
ADACT_ADACT_POSN                         equ 0000h
ADACT_ADACT_POSITION                     equ 0000h
ADACT_ADACT_SIZE                         equ 0004h
ADACT_ADACT_LENGTH                       equ 0004h
ADACT_ADACT_MASK                         equ 000Fh

// Register: RB4I2C
#define RB4I2C RB4I2C
RB4I2C                                   equ 010Ch
// bitfield definitions
RB4I2C_TH_POSN                           equ 0000h
RB4I2C_TH_POSITION                       equ 0000h
RB4I2C_TH_SIZE                           equ 0002h
RB4I2C_TH_LENGTH                         equ 0002h
RB4I2C_TH_MASK                           equ 0003h
RB4I2C_PU_POSN                           equ 0004h
RB4I2C_PU_POSITION                       equ 0004h
RB4I2C_PU_SIZE                           equ 0002h
RB4I2C_PU_LENGTH                         equ 0002h
RB4I2C_PU_MASK                           equ 0030h
RB4I2C_SLEW_POSN                         equ 0006h
RB4I2C_SLEW_POSITION                     equ 0006h
RB4I2C_SLEW_SIZE                         equ 0001h
RB4I2C_SLEW_LENGTH                       equ 0001h
RB4I2C_SLEW_MASK                         equ 0040h

// Register: RB6I2C
#define RB6I2C RB6I2C
RB6I2C                                   equ 010Dh
// bitfield definitions
RB6I2C_TH_POSN                           equ 0000h
RB6I2C_TH_POSITION                       equ 0000h
RB6I2C_TH_SIZE                           equ 0002h
RB6I2C_TH_LENGTH                         equ 0002h
RB6I2C_TH_MASK                           equ 0003h
RB6I2C_PU_POSN                           equ 0004h
RB6I2C_PU_POSITION                       equ 0004h
RB6I2C_PU_SIZE                           equ 0002h
RB6I2C_PU_LENGTH                         equ 0002h
RB6I2C_PU_MASK                           equ 0030h
RB6I2C_SLEW_POSN                         equ 0006h
RB6I2C_SLEW_POSITION                     equ 0006h
RB6I2C_SLEW_SIZE                         equ 0001h
RB6I2C_SLEW_LENGTH                       equ 0001h
RB6I2C_SLEW_MASK                         equ 0040h

// Register: RC1REG
#define RC1REG RC1REG
RC1REG                                   equ 0119h
// bitfield definitions
RC1REG_RCREG_POSN                        equ 0000h
RC1REG_RCREG_POSITION                    equ 0000h
RC1REG_RCREG_SIZE                        equ 0008h
RC1REG_RCREG_LENGTH                      equ 0008h
RC1REG_RCREG_MASK                        equ 00FFh

// Register: TX1REG
#define TX1REG TX1REG
TX1REG                                   equ 011Ah
// bitfield definitions
TX1REG_TXREG_POSN                        equ 0000h
TX1REG_TXREG_POSITION                    equ 0000h
TX1REG_TXREG_SIZE                        equ 0008h
TX1REG_TXREG_LENGTH                      equ 0008h
TX1REG_TXREG_MASK                        equ 00FFh

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
SP1BRGL                                  equ 011Bh
// bitfield definitions
SP1BRGL_SPBRGL_POSN                      equ 0000h
SP1BRGL_SPBRGL_POSITION                  equ 0000h
SP1BRGL_SPBRGL_SIZE                      equ 0008h
SP1BRGL_SPBRGL_LENGTH                    equ 0008h
SP1BRGL_SPBRGL_MASK                      equ 00FFh

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
SP1BRGH                                  equ 011Ch
// bitfield definitions
SP1BRGH_SPBRGH_POSN                      equ 0000h
SP1BRGH_SPBRGH_POSITION                  equ 0000h
SP1BRGH_SPBRGH_SIZE                      equ 0008h
SP1BRGH_SPBRGH_LENGTH                    equ 0008h
SP1BRGH_SPBRGH_MASK                      equ 00FFh

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
T1CON_NOT_SYNC_POSN                      equ 0002h
T1CON_NOT_SYNC_POSITION                  equ 0002h
T1CON_NOT_SYNC_SIZE                      equ 0001h
T1CON_NOT_SYNC_LENGTH                    equ 0001h
T1CON_NOT_SYNC_MASK                      equ 0004h
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
T1CON_NOT_T1SYNC_POSN                    equ 0002h
T1CON_NOT_T1SYNC_POSITION                equ 0002h
T1CON_NOT_T1SYNC_SIZE                    equ 0001h
T1CON_NOT_T1SYNC_LENGTH                  equ 0001h
T1CON_NOT_T1SYNC_MASK                    equ 0004h
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
T1GCON_GGO_POSN                          equ 0003h
T1GCON_GGO_POSITION                      equ 0003h
T1GCON_GGO_SIZE                          equ 0001h
T1GCON_GGO_LENGTH                        equ 0001h
T1GCON_GGO_MASK                          equ 0008h
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
T1GCON_T1GE_POSN                         equ 0007h
T1GCON_T1GE_POSITION                     equ 0007h
T1GCON_T1GE_SIZE                         equ 0001h
T1GCON_T1GE_LENGTH                       equ 0001h
T1GCON_T1GE_MASK                         equ 0080h
T1GCON_NOT_DONE_POSN                     equ 0003h
T1GCON_NOT_DONE_POSITION                 equ 0003h
T1GCON_NOT_DONE_SIZE                     equ 0001h
T1GCON_NOT_DONE_LENGTH                   equ 0001h
T1GCON_NOT_DONE_MASK                     equ 0008h
T1GCON_NOT_T1DONE_POSN                   equ 0003h
T1GCON_NOT_T1DONE_POSITION               equ 0003h
T1GCON_NOT_T1DONE_SIZE                   equ 0001h
T1GCON_NOT_T1DONE_LENGTH                 equ 0001h
T1GCON_NOT_T1DONE_MASK                   equ 0008h

// Register: T1GATE
#define T1GATE T1GATE
T1GATE                                   equ 0210h
// bitfield definitions
T1GATE_GSS_POSN                          equ 0000h
T1GATE_GSS_POSITION                      equ 0000h
T1GATE_GSS_SIZE                          equ 0008h
T1GATE_GSS_LENGTH                        equ 0008h
T1GATE_GSS_MASK                          equ 00FFh
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
T1CLK_CS_SIZE                            equ 0008h
T1CLK_CS_LENGTH                          equ 0008h
T1CLK_CS_MASK                            equ 00FFh
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

// Register: T2RST
#define T2RST T2RST
T2RST                                    equ 0291h
// bitfield definitions
T2RST_RSEL_POSN                          equ 0000h
T2RST_RSEL_POSITION                      equ 0000h
T2RST_RSEL_SIZE                          equ 0005h
T2RST_RSEL_LENGTH                        equ 0005h
T2RST_RSEL_MASK                          equ 001Fh
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
T2RST_T2RSEL_SIZE                        equ 0005h
T2RST_T2RSEL_LENGTH                      equ 0005h
T2RST_T2RSEL_MASK                        equ 001Fh
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
CCPR1L_CCPRL_POSN                        equ 0000h
CCPR1L_CCPRL_POSITION                    equ 0000h
CCPR1L_CCPRL_SIZE                        equ 0008h
CCPR1L_CCPRL_LENGTH                      equ 0008h
CCPR1L_CCPRL_MASK                        equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 030Dh
// bitfield definitions
CCPR1H_CCPRH_POSN                        equ 0000h
CCPR1H_CCPRH_POSITION                    equ 0000h
CCPR1H_CCPRH_SIZE                        equ 0008h
CCPR1H_CCPRH_LENGTH                      equ 0008h
CCPR1H_CCPRH_MASK                        equ 00FFh

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
CCP1CON_P1M1_POSN                        equ 0007h
CCP1CON_P1M1_POSITION                    equ 0007h
CCP1CON_P1M1_SIZE                        equ 0001h
CCP1CON_P1M1_LENGTH                      equ 0001h
CCP1CON_P1M1_MASK                        equ 0080h

// Register: CCP1CAP
#define CCP1CAP CCP1CAP
CCP1CAP                                  equ 030Fh
// bitfield definitions
CCP1CAP_CTS_POSN                         equ 0000h
CCP1CAP_CTS_POSITION                     equ 0000h
CCP1CAP_CTS_SIZE                         equ 0002h
CCP1CAP_CTS_LENGTH                       equ 0002h
CCP1CAP_CTS_MASK                         equ 0003h
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
CCP1CAP_CCP1CTS_POSN                     equ 0000h
CCP1CAP_CCP1CTS_POSITION                 equ 0000h
CCP1CAP_CCP1CTS_SIZE                     equ 0003h
CCP1CAP_CCP1CTS_LENGTH                   equ 0003h
CCP1CAP_CCP1CTS_MASK                     equ 0007h
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

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0310h
// bitfield definitions
CCPR2L_CCPRL_POSN                        equ 0000h
CCPR2L_CCPRL_POSITION                    equ 0000h
CCPR2L_CCPRL_SIZE                        equ 0008h
CCPR2L_CCPRL_LENGTH                      equ 0008h
CCPR2L_CCPRL_MASK                        equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0311h
// bitfield definitions
CCPR2H_CCPRH_POSN                        equ 0000h
CCPR2H_CCPRH_POSITION                    equ 0000h
CCPR2H_CCPRH_SIZE                        equ 0008h
CCPR2H_CCPRH_LENGTH                      equ 0008h
CCPR2H_CCPRH_MASK                        equ 00FFh

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
CCP2CON_P2M1_POSN                        equ 0007h
CCP2CON_P2M1_POSITION                    equ 0007h
CCP2CON_P2M1_SIZE                        equ 0001h
CCP2CON_P2M1_LENGTH                      equ 0001h
CCP2CON_P2M1_MASK                        equ 0080h

// Register: CCP2CAP
#define CCP2CAP CCP2CAP
CCP2CAP                                  equ 0313h
// bitfield definitions
CCP2CAP_CTS_POSN                         equ 0000h
CCP2CAP_CTS_POSITION                     equ 0000h
CCP2CAP_CTS_SIZE                         equ 0002h
CCP2CAP_CTS_LENGTH                       equ 0002h
CCP2CAP_CTS_MASK                         equ 0003h
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
CCP2CAP_CCP2CTS_POSN                     equ 0000h
CCP2CAP_CCP2CTS_POSITION                 equ 0000h
CCP2CAP_CCP2CTS_SIZE                     equ 0003h
CCP2CAP_CCP2CTS_LENGTH                   equ 0003h
CCP2CAP_CCP2CTS_MASK                     equ 0007h
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

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
PWM3DCL                                  equ 0314h
// bitfield definitions
PWM3DCL_DCL_POSN                         equ 0006h
PWM3DCL_DCL_POSITION                     equ 0006h
PWM3DCL_DCL_SIZE                         equ 0002h
PWM3DCL_DCL_LENGTH                       equ 0002h
PWM3DCL_DCL_MASK                         equ 00C0h

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
PWM3DCH                                  equ 0315h
// bitfield definitions
PWM3DCH_DCH_POSN                         equ 0000h
PWM3DCH_DCH_POSITION                     equ 0000h
PWM3DCH_DCH_SIZE                         equ 0008h
PWM3DCH_DCH_LENGTH                       equ 0008h
PWM3DCH_DCH_MASK                         equ 00FFh

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
PWM4DCL_DCL_POSN                         equ 0006h
PWM4DCL_DCL_POSITION                     equ 0006h
PWM4DCL_DCL_SIZE                         equ 0002h
PWM4DCL_DCL_LENGTH                       equ 0002h
PWM4DCL_DCL_MASK                         equ 00C0h

// Register: PWM4DCH
#define PWM4DCH PWM4DCH
PWM4DCH                                  equ 0319h
// bitfield definitions
PWM4DCH_DCH_POSN                         equ 0000h
PWM4DCH_DCH_POSITION                     equ 0000h
PWM4DCH_DCH_SIZE                         equ 0008h
PWM4DCH_DCH_LENGTH                       equ 0008h
PWM4DCH_DCH_MASK                         equ 00FFh

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
TMR0H_T0PR_POSN                          equ 0000h
TMR0H_T0PR_POSITION                      equ 0000h
TMR0H_T0PR_SIZE                          equ 0008h
TMR0H_T0PR_LENGTH                        equ 0008h
TMR0H_T0PR_MASK                          equ 00FFh

// Register: T0CON0
#define T0CON0 T0CON0
T0CON0                                   equ 059Eh
// bitfield definitions
T0CON0_OUTPS_POSN                        equ 0000h
T0CON0_OUTPS_POSITION                    equ 0000h
T0CON0_OUTPS_SIZE                        equ 0004h
T0CON0_OUTPS_LENGTH                      equ 0004h
T0CON0_OUTPS_MASK                        equ 000Fh
T0CON0_MD16_POSN                         equ 0004h
T0CON0_MD16_POSITION                     equ 0004h
T0CON0_MD16_SIZE                         equ 0001h
T0CON0_MD16_LENGTH                       equ 0001h
T0CON0_MD16_MASK                         equ 0010h
T0CON0_OUT_POSN                          equ 0005h
T0CON0_OUT_POSITION                      equ 0005h
T0CON0_OUT_SIZE                          equ 0001h
T0CON0_OUT_LENGTH                        equ 0001h
T0CON0_OUT_MASK                          equ 0020h
T0CON0_EN_POSN                           equ 0007h
T0CON0_EN_POSITION                       equ 0007h
T0CON0_EN_SIZE                           equ 0001h
T0CON0_EN_LENGTH                         equ 0001h
T0CON0_EN_MASK                           equ 0080h
T0CON0_T0OUTPS_POSN                      equ 0000h
T0CON0_T0OUTPS_POSITION                  equ 0000h
T0CON0_T0OUTPS_SIZE                      equ 0004h
T0CON0_T0OUTPS_LENGTH                    equ 0004h
T0CON0_T0OUTPS_MASK                      equ 000Fh
T0CON0_T0MD16_POSN                       equ 0004h
T0CON0_T0MD16_POSITION                   equ 0004h
T0CON0_T0MD16_SIZE                       equ 0001h
T0CON0_T0MD16_LENGTH                     equ 0001h
T0CON0_T0MD16_MASK                       equ 0010h
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
T0CON0_OUTPS0_POSN                       equ 0000h
T0CON0_OUTPS0_POSITION                   equ 0000h
T0CON0_OUTPS0_SIZE                       equ 0001h
T0CON0_OUTPS0_LENGTH                     equ 0001h
T0CON0_OUTPS0_MASK                       equ 0001h
T0CON0_OUTPS1_POSN                       equ 0001h
T0CON0_OUTPS1_POSITION                   equ 0001h
T0CON0_OUTPS1_SIZE                       equ 0001h
T0CON0_OUTPS1_LENGTH                     equ 0001h
T0CON0_OUTPS1_MASK                       equ 0002h
T0CON0_OUTPS2_POSN                       equ 0002h
T0CON0_OUTPS2_POSITION                   equ 0002h
T0CON0_OUTPS2_SIZE                       equ 0001h
T0CON0_OUTPS2_LENGTH                     equ 0001h
T0CON0_OUTPS2_MASK                       equ 0004h
T0CON0_OUTPS3_POSN                       equ 0003h
T0CON0_OUTPS3_POSITION                   equ 0003h
T0CON0_OUTPS3_SIZE                       equ 0001h
T0CON0_OUTPS3_LENGTH                     equ 0001h
T0CON0_OUTPS3_MASK                       equ 0008h
T0CON0_T016BIT_POSN                      equ 0004h
T0CON0_T016BIT_POSITION                  equ 0004h
T0CON0_T016BIT_SIZE                      equ 0001h
T0CON0_T016BIT_LENGTH                    equ 0001h
T0CON0_T016BIT_MASK                      equ 0010h

// Register: T0CON1
#define T0CON1 T0CON1
T0CON1                                   equ 059Fh
// bitfield definitions
T0CON1_CKPS_POSN                         equ 0000h
T0CON1_CKPS_POSITION                     equ 0000h
T0CON1_CKPS_SIZE                         equ 0004h
T0CON1_CKPS_LENGTH                       equ 0004h
T0CON1_CKPS_MASK                         equ 000Fh
T0CON1_ASYNC_POSN                        equ 0004h
T0CON1_ASYNC_POSITION                    equ 0004h
T0CON1_ASYNC_SIZE                        equ 0001h
T0CON1_ASYNC_LENGTH                      equ 0001h
T0CON1_ASYNC_MASK                        equ 0010h
T0CON1_CS_POSN                           equ 0005h
T0CON1_CS_POSITION                       equ 0005h
T0CON1_CS_SIZE                           equ 0003h
T0CON1_CS_LENGTH                         equ 0003h
T0CON1_CS_MASK                           equ 00E0h
T0CON1_CKPS0_POSN                        equ 0000h
T0CON1_CKPS0_POSITION                    equ 0000h
T0CON1_CKPS0_SIZE                        equ 0001h
T0CON1_CKPS0_LENGTH                      equ 0001h
T0CON1_CKPS0_MASK                        equ 0001h
T0CON1_CKPS1_POSN                        equ 0001h
T0CON1_CKPS1_POSITION                    equ 0001h
T0CON1_CKPS1_SIZE                        equ 0001h
T0CON1_CKPS1_LENGTH                      equ 0001h
T0CON1_CKPS1_MASK                        equ 0002h
T0CON1_CKPS2_POSN                        equ 0002h
T0CON1_CKPS2_POSITION                    equ 0002h
T0CON1_CKPS2_SIZE                        equ 0001h
T0CON1_CKPS2_LENGTH                      equ 0001h
T0CON1_CKPS2_MASK                        equ 0004h
T0CON1_CKPS3_POSN                        equ 0003h
T0CON1_CKPS3_POSITION                    equ 0003h
T0CON1_CKPS3_SIZE                        equ 0001h
T0CON1_CKPS3_LENGTH                      equ 0001h
T0CON1_CKPS3_MASK                        equ 0008h
T0CON1_T0ASYNC_POSN                      equ 0004h
T0CON1_T0ASYNC_POSITION                  equ 0004h
T0CON1_T0ASYNC_SIZE                      equ 0001h
T0CON1_T0ASYNC_LENGTH                    equ 0001h
T0CON1_T0ASYNC_MASK                      equ 0010h
T0CON1_CS0_POSN                          equ 0005h
T0CON1_CS0_POSITION                      equ 0005h
T0CON1_CS0_SIZE                          equ 0001h
T0CON1_CS0_LENGTH                        equ 0001h
T0CON1_CS0_MASK                          equ 0020h
T0CON1_CS1_POSN                          equ 0006h
T0CON1_CS1_POSITION                      equ 0006h
T0CON1_CS1_SIZE                          equ 0001h
T0CON1_CS1_LENGTH                        equ 0001h
T0CON1_CS1_MASK                          equ 0040h
T0CON1_CS2_POSN                          equ 0007h
T0CON1_CS2_POSITION                      equ 0007h
T0CON1_CS2_SIZE                          equ 0001h
T0CON1_CS2_LENGTH                        equ 0001h
T0CON1_CS2_MASK                          equ 0080h
T0CON1_T0CKPS_POSN                       equ 0000h
T0CON1_T0CKPS_POSITION                   equ 0000h
T0CON1_T0CKPS_SIZE                       equ 0004h
T0CON1_T0CKPS_LENGTH                     equ 0004h
T0CON1_T0CKPS_MASK                       equ 000Fh
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
PIR1_SSP1IF_POSN                         equ 0001h
PIR1_SSP1IF_POSITION                     equ 0001h
PIR1_SSP1IF_SIZE                         equ 0001h
PIR1_SSP1IF_LENGTH                       equ 0001h
PIR1_SSP1IF_MASK                         equ 0002h
PIR1_BCL1IF_POSN                         equ 0002h
PIR1_BCL1IF_POSITION                     equ 0002h
PIR1_BCL1IF_SIZE                         equ 0001h
PIR1_BCL1IF_LENGTH                       equ 0001h
PIR1_BCL1IF_MASK                         equ 0004h
PIR1_TX1IF_POSN                          equ 0003h
PIR1_TX1IF_POSITION                      equ 0003h
PIR1_TX1IF_SIZE                          equ 0001h
PIR1_TX1IF_LENGTH                        equ 0001h
PIR1_TX1IF_MASK                          equ 0008h
PIR1_RC1IF_POSN                          equ 0004h
PIR1_RC1IF_POSITION                      equ 0004h
PIR1_RC1IF_SIZE                          equ 0001h
PIR1_RC1IF_LENGTH                        equ 0001h
PIR1_RC1IF_MASK                          equ 0010h
PIR1_TMR1IF_POSN                         equ 0005h
PIR1_TMR1IF_POSITION                     equ 0005h
PIR1_TMR1IF_SIZE                         equ 0001h
PIR1_TMR1IF_LENGTH                       equ 0001h
PIR1_TMR1IF_MASK                         equ 0020h
PIR1_TMR2IF_POSN                         equ 0006h
PIR1_TMR2IF_POSITION                     equ 0006h
PIR1_TMR2IF_SIZE                         equ 0001h
PIR1_TMR2IF_LENGTH                       equ 0001h
PIR1_TMR2IF_MASK                         equ 0040h
PIR1_CCP1IF_POSN                         equ 0007h
PIR1_CCP1IF_POSITION                     equ 0007h
PIR1_CCP1IF_SIZE                         equ 0001h
PIR1_CCP1IF_LENGTH                       equ 0001h
PIR1_CCP1IF_MASK                         equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 070Eh
// bitfield definitions
PIR2_TMR1GIF_POSN                        equ 0005h
PIR2_TMR1GIF_POSITION                    equ 0005h
PIR2_TMR1GIF_SIZE                        equ 0001h
PIR2_TMR1GIF_LENGTH                      equ 0001h
PIR2_TMR1GIF_MASK                        equ 0020h
PIR2_NVMIF_POSN                          equ 0006h
PIR2_NVMIF_POSITION                      equ 0006h
PIR2_NVMIF_SIZE                          equ 0001h
PIR2_NVMIF_LENGTH                        equ 0001h
PIR2_NVMIF_MASK                          equ 0040h
PIR2_CCP2IF_POSN                         equ 0007h
PIR2_CCP2IF_POSITION                     equ 0007h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0080h

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
PIE1_SSP1IE_POSN                         equ 0001h
PIE1_SSP1IE_POSITION                     equ 0001h
PIE1_SSP1IE_SIZE                         equ 0001h
PIE1_SSP1IE_LENGTH                       equ 0001h
PIE1_SSP1IE_MASK                         equ 0002h
PIE1_BCL1IE_POSN                         equ 0002h
PIE1_BCL1IE_POSITION                     equ 0002h
PIE1_BCL1IE_SIZE                         equ 0001h
PIE1_BCL1IE_LENGTH                       equ 0001h
PIE1_BCL1IE_MASK                         equ 0004h
PIE1_TX1IE_POSN                          equ 0003h
PIE1_TX1IE_POSITION                      equ 0003h
PIE1_TX1IE_SIZE                          equ 0001h
PIE1_TX1IE_LENGTH                        equ 0001h
PIE1_TX1IE_MASK                          equ 0008h
PIE1_RC1IE_POSN                          equ 0004h
PIE1_RC1IE_POSITION                      equ 0004h
PIE1_RC1IE_SIZE                          equ 0001h
PIE1_RC1IE_LENGTH                        equ 0001h
PIE1_RC1IE_MASK                          equ 0010h
PIE1_TMR1IE_POSN                         equ 0005h
PIE1_TMR1IE_POSITION                     equ 0005h
PIE1_TMR1IE_SIZE                         equ 0001h
PIE1_TMR1IE_LENGTH                       equ 0001h
PIE1_TMR1IE_MASK                         equ 0020h
PIE1_TMR2IE_POSN                         equ 0006h
PIE1_TMR2IE_POSITION                     equ 0006h
PIE1_TMR2IE_SIZE                         equ 0001h
PIE1_TMR2IE_LENGTH                       equ 0001h
PIE1_TMR2IE_MASK                         equ 0040h
PIE1_CCP1IE_POSN                         equ 0007h
PIE1_CCP1IE_POSITION                     equ 0007h
PIE1_CCP1IE_SIZE                         equ 0001h
PIE1_CCP1IE_LENGTH                       equ 0001h
PIE1_CCP1IE_MASK                         equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0718h
// bitfield definitions
PIE2_TMR1GIE_POSN                        equ 0005h
PIE2_TMR1GIE_POSITION                    equ 0005h
PIE2_TMR1GIE_SIZE                        equ 0001h
PIE2_TMR1GIE_LENGTH                      equ 0001h
PIE2_TMR1GIE_MASK                        equ 0020h
PIE2_NVMIE_POSN                          equ 0006h
PIE2_NVMIE_POSITION                      equ 0006h
PIE2_NVMIE_SIZE                          equ 0001h
PIE2_NVMIE_LENGTH                        equ 0001h
PIE2_NVMIE_MASK                          equ 0040h
PIE2_CCP2IE_POSN                         equ 0007h
PIE2_CCP2IE_POSITION                     equ 0007h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0080h

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 080Ch
// bitfield definitions
WDTCON_SEN_POSN                          equ 0000h
WDTCON_SEN_POSITION                      equ 0000h
WDTCON_SEN_SIZE                          equ 0001h
WDTCON_SEN_LENGTH                        equ 0001h
WDTCON_SEN_MASK                          equ 0001h
WDTCON_PS_POSN                           equ 0001h
WDTCON_PS_POSITION                       equ 0001h
WDTCON_PS_SIZE                           equ 0005h
WDTCON_PS_LENGTH                         equ 0005h
WDTCON_PS_MASK                           equ 003Eh
WDTCON_CS_POSN                           equ 0007h
WDTCON_CS_POSITION                       equ 0007h
WDTCON_CS_SIZE                           equ 0001h
WDTCON_CS_LENGTH                         equ 0001h
WDTCON_CS_MASK                           equ 0080h
WDTCON_WDTSEN_POSN                       equ 0000h
WDTCON_WDTSEN_POSITION                   equ 0000h
WDTCON_WDTSEN_SIZE                       equ 0001h
WDTCON_WDTSEN_LENGTH                     equ 0001h
WDTCON_WDTSEN_MASK                       equ 0001h
WDTCON_WDTPS_POSN                        equ 0001h
WDTCON_WDTPS_POSITION                    equ 0001h
WDTCON_WDTPS_SIZE                        equ 0005h
WDTCON_WDTPS_LENGTH                      equ 0005h
WDTCON_WDTPS_MASK                        equ 003Eh
WDTCON_WDTCS_POSN                        equ 0007h
WDTCON_WDTCS_POSITION                    equ 0007h
WDTCON_WDTCS_SIZE                        equ 0001h
WDTCON_WDTCS_LENGTH                      equ 0001h
WDTCON_WDTCS_MASK                        equ 0080h
WDTCON_SWDTEN_POSN                       equ 0000h
WDTCON_SWDTEN_POSITION                   equ 0000h
WDTCON_SWDTEN_SIZE                       equ 0001h
WDTCON_SWDTEN_LENGTH                     equ 0001h
WDTCON_SWDTEN_MASK                       equ 0001h

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
NVMADRL_NVMADRL_POSN                     equ 0000h
NVMADRL_NVMADRL_POSITION                 equ 0000h
NVMADRL_NVMADRL_SIZE                     equ 0008h
NVMADRL_NVMADRL_LENGTH                   equ 0008h
NVMADRL_NVMADRL_MASK                     equ 00FFh

// Register: NVMADRH
#define NVMADRH NVMADRH
NVMADRH                                  equ 081Bh
// bitfield definitions
NVMADRH_NVMADRH_POSN                     equ 0000h
NVMADRH_NVMADRH_POSITION                 equ 0000h
NVMADRH_NVMADRH_SIZE                     equ 0007h
NVMADRH_NVMADRH_LENGTH                   equ 0007h
NVMADRH_NVMADRH_MASK                     equ 007Fh

// Register: NVMDATL
#define NVMDATL NVMDATL
NVMDATL                                  equ 081Ch
// bitfield definitions
NVMDATL_NVMDATL_POSN                     equ 0000h
NVMDATL_NVMDATL_POSITION                 equ 0000h
NVMDATL_NVMDATL_SIZE                     equ 0008h
NVMDATL_NVMDATL_LENGTH                   equ 0008h
NVMDATL_NVMDATL_MASK                     equ 00FFh

// Register: NVMDATH
#define NVMDATH NVMDATH
NVMDATH                                  equ 081Dh
// bitfield definitions
NVMDATH_NVMDATH_POSN                     equ 0000h
NVMDATH_NVMDATH_POSITION                 equ 0000h
NVMDATH_NVMDATH_SIZE                     equ 0006h
NVMDATH_NVMDATH_LENGTH                   equ 0006h
NVMDATH_NVMDATH_MASK                     equ 003Fh

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

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 088Eh
// bitfield definitions
OSCCON_COSC_POSN                         equ 0004h
OSCCON_COSC_POSITION                     equ 0004h
OSCCON_COSC_SIZE                         equ 0002h
OSCCON_COSC_LENGTH                       equ 0002h
OSCCON_COSC_MASK                         equ 0030h
OSCCON_NDIV0_POSN                        equ 0000h
OSCCON_NDIV0_POSITION                    equ 0000h
OSCCON_NDIV0_SIZE                        equ 0001h
OSCCON_NDIV0_LENGTH                      equ 0001h
OSCCON_NDIV0_MASK                        equ 0001h
OSCCON_NDIV1_POSN                        equ 0001h
OSCCON_NDIV1_POSITION                    equ 0001h
OSCCON_NDIV1_SIZE                        equ 0001h
OSCCON_NDIV1_LENGTH                      equ 0001h
OSCCON_NDIV1_MASK                        equ 0002h
OSCCON_NDIV2_POSN                        equ 0002h
OSCCON_NDIV2_POSITION                    equ 0002h
OSCCON_NDIV2_SIZE                        equ 0001h
OSCCON_NDIV2_LENGTH                      equ 0001h
OSCCON_NDIV2_MASK                        equ 0004h
OSCCON_NDIV3_POSN                        equ 0003h
OSCCON_NDIV3_POSITION                    equ 0003h
OSCCON_NDIV3_SIZE                        equ 0001h
OSCCON_NDIV3_LENGTH                      equ 0001h
OSCCON_NDIV3_MASK                        equ 0008h
OSCCON_NOSC0_POSN                        equ 0004h
OSCCON_NOSC0_POSITION                    equ 0004h
OSCCON_NOSC0_SIZE                        equ 0001h
OSCCON_NOSC0_LENGTH                      equ 0001h
OSCCON_NOSC0_MASK                        equ 0010h
OSCCON_NOSC1_POSN                        equ 0005h
OSCCON_NOSC1_POSITION                    equ 0005h
OSCCON_NOSC1_SIZE                        equ 0001h
OSCCON_NOSC1_LENGTH                      equ 0001h
OSCCON_NOSC1_MASK                        equ 0020h
OSCCON_NOSC2_POSN                        equ 0006h
OSCCON_NOSC2_POSITION                    equ 0006h
OSCCON_NOSC2_SIZE                        equ 0001h
OSCCON_NOSC2_LENGTH                      equ 0001h
OSCCON_NOSC2_MASK                        equ 0040h

// Register: OSCSTAT
#define OSCSTAT OSCSTAT
OSCSTAT                                  equ 0890h
// bitfield definitions
OSCSTAT_SFOR_POSN                        equ 0001h
OSCSTAT_SFOR_POSITION                    equ 0001h
OSCSTAT_SFOR_SIZE                        equ 0001h
OSCSTAT_SFOR_LENGTH                      equ 0001h
OSCSTAT_SFOR_MASK                        equ 0002h
OSCSTAT_ADOR_POSN                        equ 0002h
OSCSTAT_ADOR_POSITION                    equ 0002h
OSCSTAT_ADOR_SIZE                        equ 0001h
OSCSTAT_ADOR_LENGTH                      equ 0001h
OSCSTAT_ADOR_MASK                        equ 0004h
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

// Register: OSCEN
#define OSCEN OSCEN
OSCEN                                    equ 0891h
// bitfield definitions
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
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0006h
OSCTUNE_TUN_LENGTH                       equ 0006h
OSCTUNE_TUN_MASK                         equ 003Fh
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
OSCFRQ_FRQ_POSN                          equ 0000h
OSCFRQ_FRQ_POSITION                      equ 0000h
OSCFRQ_FRQ_SIZE                          equ 0003h
OSCFRQ_FRQ_LENGTH                        equ 0003h
OSCFRQ_FRQ_MASK                          equ 0007h
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

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 090Ch
// bitfield definitions
FVRCON_ADFVR_POSN                        equ 0000h
FVRCON_ADFVR_POSITION                    equ 0000h
FVRCON_ADFVR_SIZE                        equ 0002h
FVRCON_ADFVR_LENGTH                      equ 0002h
FVRCON_ADFVR_MASK                        equ 0003h
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
INTPPS_PIN_POSN                          equ 0000h
INTPPS_PIN_POSITION                      equ 0000h
INTPPS_PIN_SIZE                          equ 0003h
INTPPS_PIN_LENGTH                        equ 0003h
INTPPS_PIN_MASK                          equ 0007h
INTPPS_PORT_POSN                         equ 0003h
INTPPS_PORT_POSITION                     equ 0003h
INTPPS_PORT_SIZE                         equ 0002h
INTPPS_PORT_LENGTH                       equ 0002h
INTPPS_PORT_MASK                         equ 0018h
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
T0CKIPPS                                 equ 01E91h
// bitfield definitions
T0CKIPPS_PIN_POSN                        equ 0000h
T0CKIPPS_PIN_POSITION                    equ 0000h
T0CKIPPS_PIN_SIZE                        equ 0003h
T0CKIPPS_PIN_LENGTH                      equ 0003h
T0CKIPPS_PIN_MASK                        equ 0007h
T0CKIPPS_PORT_POSN                       equ 0003h
T0CKIPPS_PORT_POSITION                   equ 0003h
T0CKIPPS_PORT_SIZE                       equ 0002h
T0CKIPPS_PORT_LENGTH                     equ 0002h
T0CKIPPS_PORT_MASK                       equ 0018h
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
T1CKIPPS                                 equ 01E92h
// bitfield definitions
T1CKIPPS_PIN_POSN                        equ 0000h
T1CKIPPS_PIN_POSITION                    equ 0000h
T1CKIPPS_PIN_SIZE                        equ 0003h
T1CKIPPS_PIN_LENGTH                      equ 0003h
T1CKIPPS_PIN_MASK                        equ 0007h
T1CKIPPS_PORT_POSN                       equ 0003h
T1CKIPPS_PORT_POSITION                   equ 0003h
T1CKIPPS_PORT_SIZE                       equ 0002h
T1CKIPPS_PORT_LENGTH                     equ 0002h
T1CKIPPS_PORT_MASK                       equ 0018h
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
T1GPPS                                   equ 01E93h
// bitfield definitions
T1GPPS_PIN_POSN                          equ 0000h
T1GPPS_PIN_POSITION                      equ 0000h
T1GPPS_PIN_SIZE                          equ 0003h
T1GPPS_PIN_LENGTH                        equ 0003h
T1GPPS_PIN_MASK                          equ 0007h
T1GPPS_PORT_POSN                         equ 0003h
T1GPPS_PORT_POSITION                     equ 0003h
T1GPPS_PORT_SIZE                         equ 0002h
T1GPPS_PORT_LENGTH                       equ 0002h
T1GPPS_PORT_MASK                         equ 0018h
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

// Register: T2INPPS
#define T2INPPS T2INPPS
T2INPPS                                  equ 01E9Ch
// bitfield definitions
T2INPPS_PIN_POSN                         equ 0000h
T2INPPS_PIN_POSITION                     equ 0000h
T2INPPS_PIN_SIZE                         equ 0003h
T2INPPS_PIN_LENGTH                       equ 0003h
T2INPPS_PIN_MASK                         equ 0007h
T2INPPS_PORT_POSN                        equ 0003h
T2INPPS_PORT_POSITION                    equ 0003h
T2INPPS_PORT_SIZE                        equ 0002h
T2INPPS_PORT_LENGTH                      equ 0002h
T2INPPS_PORT_MASK                        equ 0018h
T2INPPS_T2INPPS_POSN                     equ 0000h
T2INPPS_T2INPPS_POSITION                 equ 0000h
T2INPPS_T2INPPS_SIZE                     equ 0005h
T2INPPS_T2INPPS_LENGTH                   equ 0005h
T2INPPS_T2INPPS_MASK                     equ 001Fh
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

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
CCP1PPS                                  equ 01EA1h
// bitfield definitions
CCP1PPS_PIN_POSN                         equ 0000h
CCP1PPS_PIN_POSITION                     equ 0000h
CCP1PPS_PIN_SIZE                         equ 0003h
CCP1PPS_PIN_LENGTH                       equ 0003h
CCP1PPS_PIN_MASK                         equ 0007h
CCP1PPS_PORT_POSN                        equ 0003h
CCP1PPS_PORT_POSITION                    equ 0003h
CCP1PPS_PORT_SIZE                        equ 0002h
CCP1PPS_PORT_LENGTH                      equ 0002h
CCP1PPS_PORT_MASK                        equ 0018h
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
CCP2PPS                                  equ 01EA2h
// bitfield definitions
CCP2PPS_PIN_POSN                         equ 0000h
CCP2PPS_PIN_POSITION                     equ 0000h
CCP2PPS_PIN_SIZE                         equ 0003h
CCP2PPS_PIN_LENGTH                       equ 0003h
CCP2PPS_PIN_MASK                         equ 0007h
CCP2PPS_PORT_POSN                        equ 0003h
CCP2PPS_PORT_POSITION                    equ 0003h
CCP2PPS_PORT_SIZE                        equ 0002h
CCP2PPS_PORT_LENGTH                      equ 0002h
CCP2PPS_PORT_MASK                        equ 0018h
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

// Register: ADACTPPS
#define ADACTPPS ADACTPPS
ADACTPPS                                 equ 01EC3h
// bitfield definitions
ADACTPPS_PIN_POSN                        equ 0000h
ADACTPPS_PIN_POSITION                    equ 0000h
ADACTPPS_PIN_SIZE                        equ 0003h
ADACTPPS_PIN_LENGTH                      equ 0003h
ADACTPPS_PIN_MASK                        equ 0007h
ADACTPPS_PORT_POSN                       equ 0003h
ADACTPPS_PORT_POSITION                   equ 0003h
ADACTPPS_PORT_SIZE                       equ 0002h
ADACTPPS_PORT_LENGTH                     equ 0002h
ADACTPPS_PORT_MASK                       equ 0018h
ADACTPPS_ADACTPPS_POSN                   equ 0000h
ADACTPPS_ADACTPPS_POSITION               equ 0000h
ADACTPPS_ADACTPPS_SIZE                   equ 0005h
ADACTPPS_ADACTPPS_LENGTH                 equ 0005h
ADACTPPS_ADACTPPS_MASK                   equ 001Fh
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

// Register: SSP1CLKPPS
#define SSP1CLKPPS SSP1CLKPPS
SSP1CLKPPS                               equ 01EC5h
// bitfield definitions
SSP1CLKPPS_PIN_POSN                      equ 0000h
SSP1CLKPPS_PIN_POSITION                  equ 0000h
SSP1CLKPPS_PIN_SIZE                      equ 0003h
SSP1CLKPPS_PIN_LENGTH                    equ 0003h
SSP1CLKPPS_PIN_MASK                      equ 0007h
SSP1CLKPPS_PORT_POSN                     equ 0003h
SSP1CLKPPS_PORT_POSITION                 equ 0003h
SSP1CLKPPS_PORT_SIZE                     equ 0002h
SSP1CLKPPS_PORT_LENGTH                   equ 0002h
SSP1CLKPPS_PORT_MASK                     equ 0018h
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
SSP1DATPPS                               equ 01EC6h
// bitfield definitions
SSP1DATPPS_PIN_POSN                      equ 0000h
SSP1DATPPS_PIN_POSITION                  equ 0000h
SSP1DATPPS_PIN_SIZE                      equ 0003h
SSP1DATPPS_PIN_LENGTH                    equ 0003h
SSP1DATPPS_PIN_MASK                      equ 0007h
SSP1DATPPS_PORT_POSN                     equ 0003h
SSP1DATPPS_PORT_POSITION                 equ 0003h
SSP1DATPPS_PORT_SIZE                     equ 0002h
SSP1DATPPS_PORT_LENGTH                   equ 0002h
SSP1DATPPS_PORT_MASK                     equ 0018h
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
SSP1SSPPS                                equ 01EC7h
// bitfield definitions
SSP1SSPPS_PIN_POSN                       equ 0000h
SSP1SSPPS_PIN_POSITION                   equ 0000h
SSP1SSPPS_PIN_SIZE                       equ 0003h
SSP1SSPPS_PIN_LENGTH                     equ 0003h
SSP1SSPPS_PIN_MASK                       equ 0007h
SSP1SSPPS_PORT_POSN                      equ 0003h
SSP1SSPPS_PORT_POSITION                  equ 0003h
SSP1SSPPS_PORT_SIZE                      equ 0002h
SSP1SSPPS_PORT_LENGTH                    equ 0002h
SSP1SSPPS_PORT_MASK                      equ 0018h
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

// Register: RX1PPS
#define RX1PPS RX1PPS
RX1PPS                                   equ 01ECBh
// bitfield definitions
RX1PPS_PIN_POSN                          equ 0000h
RX1PPS_PIN_POSITION                      equ 0000h
RX1PPS_PIN_SIZE                          equ 0003h
RX1PPS_PIN_LENGTH                        equ 0003h
RX1PPS_PIN_MASK                          equ 0007h
RX1PPS_PORT_POSN                         equ 0003h
RX1PPS_PORT_POSITION                     equ 0003h
RX1PPS_PORT_SIZE                         equ 0002h
RX1PPS_PORT_LENGTH                       equ 0002h
RX1PPS_PORT_MASK                         equ 0018h
RX1PPS_RX1DTPPS_POSN                     equ 0000h
RX1PPS_RX1DTPPS_POSITION                 equ 0000h
RX1PPS_RX1DTPPS_SIZE                     equ 0005h
RX1PPS_RX1DTPPS_LENGTH                   equ 0005h
RX1PPS_RX1DTPPS_MASK                     equ 001Fh
RX1PPS_RX1DTPPS0_POSN                    equ 0000h
RX1PPS_RX1DTPPS0_POSITION                equ 0000h
RX1PPS_RX1DTPPS0_SIZE                    equ 0001h
RX1PPS_RX1DTPPS0_LENGTH                  equ 0001h
RX1PPS_RX1DTPPS0_MASK                    equ 0001h
RX1PPS_RX1DTPPS1_POSN                    equ 0001h
RX1PPS_RX1DTPPS1_POSITION                equ 0001h
RX1PPS_RX1DTPPS1_SIZE                    equ 0001h
RX1PPS_RX1DTPPS1_LENGTH                  equ 0001h
RX1PPS_RX1DTPPS1_MASK                    equ 0002h
RX1PPS_RX1DTPPS2_POSN                    equ 0002h
RX1PPS_RX1DTPPS2_POSITION                equ 0002h
RX1PPS_RX1DTPPS2_SIZE                    equ 0001h
RX1PPS_RX1DTPPS2_LENGTH                  equ 0001h
RX1PPS_RX1DTPPS2_MASK                    equ 0004h
RX1PPS_RX1DTPPS3_POSN                    equ 0003h
RX1PPS_RX1DTPPS3_POSITION                equ 0003h
RX1PPS_RX1DTPPS3_SIZE                    equ 0001h
RX1PPS_RX1DTPPS3_LENGTH                  equ 0001h
RX1PPS_RX1DTPPS3_MASK                    equ 0008h
RX1PPS_RX1DTPPS4_POSN                    equ 0004h
RX1PPS_RX1DTPPS4_POSITION                equ 0004h
RX1PPS_RX1DTPPS4_SIZE                    equ 0001h
RX1PPS_RX1DTPPS4_LENGTH                  equ 0001h
RX1PPS_RX1DTPPS4_MASK                    equ 0010h

// Register: CK1PPS
#define CK1PPS CK1PPS
CK1PPS                                   equ 01ECCh
// bitfield definitions
CK1PPS_PIN_POSN                          equ 0000h
CK1PPS_PIN_POSITION                      equ 0000h
CK1PPS_PIN_SIZE                          equ 0003h
CK1PPS_PIN_LENGTH                        equ 0003h
CK1PPS_PIN_MASK                          equ 0007h
CK1PPS_PORT_POSN                         equ 0003h
CK1PPS_PORT_POSITION                     equ 0003h
CK1PPS_PORT_SIZE                         equ 0002h
CK1PPS_PORT_LENGTH                       equ 0002h
CK1PPS_PORT_MASK                         equ 0018h
CK1PPS_TX1CKPPS_POSN                     equ 0000h
CK1PPS_TX1CKPPS_POSITION                 equ 0000h
CK1PPS_TX1CKPPS_SIZE                     equ 0005h
CK1PPS_TX1CKPPS_LENGTH                   equ 0005h
CK1PPS_TX1CKPPS_MASK                     equ 001Fh
CK1PPS_TX1CKPPS0_POSN                    equ 0000h
CK1PPS_TX1CKPPS0_POSITION                equ 0000h
CK1PPS_TX1CKPPS0_SIZE                    equ 0001h
CK1PPS_TX1CKPPS0_LENGTH                  equ 0001h
CK1PPS_TX1CKPPS0_MASK                    equ 0001h
CK1PPS_TX1CKPPS1_POSN                    equ 0001h
CK1PPS_TX1CKPPS1_POSITION                equ 0001h
CK1PPS_TX1CKPPS1_SIZE                    equ 0001h
CK1PPS_TX1CKPPS1_LENGTH                  equ 0001h
CK1PPS_TX1CKPPS1_MASK                    equ 0002h
CK1PPS_TX1CKPPS2_POSN                    equ 0002h
CK1PPS_TX1CKPPS2_POSITION                equ 0002h
CK1PPS_TX1CKPPS2_SIZE                    equ 0001h
CK1PPS_TX1CKPPS2_LENGTH                  equ 0001h
CK1PPS_TX1CKPPS2_MASK                    equ 0004h
CK1PPS_TX1CKPPS3_POSN                    equ 0003h
CK1PPS_TX1CKPPS3_POSITION                equ 0003h
CK1PPS_TX1CKPPS3_SIZE                    equ 0001h
CK1PPS_TX1CKPPS3_LENGTH                  equ 0001h
CK1PPS_TX1CKPPS3_MASK                    equ 0008h
CK1PPS_TX1CKPPS4_POSN                    equ 0004h
CK1PPS_TX1CKPPS4_POSITION                equ 0004h
CK1PPS_TX1CKPPS4_SIZE                    equ 0001h
CK1PPS_TX1CKPPS4_LENGTH                  equ 0001h
CK1PPS_TX1CKPPS4_MASK                    equ 0010h

// Register: RA0PPS
#define RA0PPS RA0PPS
RA0PPS                                   equ 01F10h
// bitfield definitions
RA0PPS_RA0PPS_POSN                       equ 0000h
RA0PPS_RA0PPS_POSITION                   equ 0000h
RA0PPS_RA0PPS_SIZE                       equ 0006h
RA0PPS_RA0PPS_LENGTH                     equ 0006h
RA0PPS_RA0PPS_MASK                       equ 003Fh
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
RA1PPS                                   equ 01F11h
// bitfield definitions
RA1PPS_RA1PPS_POSN                       equ 0000h
RA1PPS_RA1PPS_POSITION                   equ 0000h
RA1PPS_RA1PPS_SIZE                       equ 0006h
RA1PPS_RA1PPS_LENGTH                     equ 0006h
RA1PPS_RA1PPS_MASK                       equ 003Fh
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
RA2PPS                                   equ 01F12h
// bitfield definitions
RA2PPS_RA2PPS_POSN                       equ 0000h
RA2PPS_RA2PPS_POSITION                   equ 0000h
RA2PPS_RA2PPS_SIZE                       equ 0006h
RA2PPS_RA2PPS_LENGTH                     equ 0006h
RA2PPS_RA2PPS_MASK                       equ 003Fh
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

// Register: RA4PPS
#define RA4PPS RA4PPS
RA4PPS                                   equ 01F14h
// bitfield definitions
RA4PPS_RA4PPS_POSN                       equ 0000h
RA4PPS_RA4PPS_POSITION                   equ 0000h
RA4PPS_RA4PPS_SIZE                       equ 0006h
RA4PPS_RA4PPS_LENGTH                     equ 0006h
RA4PPS_RA4PPS_MASK                       equ 003Fh
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
RA5PPS                                   equ 01F15h
// bitfield definitions
RA5PPS_RA5PPS_POSN                       equ 0000h
RA5PPS_RA5PPS_POSITION                   equ 0000h
RA5PPS_RA5PPS_SIZE                       equ 0006h
RA5PPS_RA5PPS_LENGTH                     equ 0006h
RA5PPS_RA5PPS_MASK                       equ 003Fh
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

// Register: RB4PPS
#define RB4PPS RB4PPS
RB4PPS                                   equ 01F1Ch
// bitfield definitions
RB4PPS_RB4PPS_POSN                       equ 0000h
RB4PPS_RB4PPS_POSITION                   equ 0000h
RB4PPS_RB4PPS_SIZE                       equ 0006h
RB4PPS_RB4PPS_LENGTH                     equ 0006h
RB4PPS_RB4PPS_MASK                       equ 003Fh
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
RB5PPS                                   equ 01F1Dh
// bitfield definitions
RB5PPS_RB5PPS_POSN                       equ 0000h
RB5PPS_RB5PPS_POSITION                   equ 0000h
RB5PPS_RB5PPS_SIZE                       equ 0006h
RB5PPS_RB5PPS_LENGTH                     equ 0006h
RB5PPS_RB5PPS_MASK                       equ 003Fh
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
RB6PPS                                   equ 01F1Eh
// bitfield definitions
RB6PPS_RB6PPS_POSN                       equ 0000h
RB6PPS_RB6PPS_POSITION                   equ 0000h
RB6PPS_RB6PPS_SIZE                       equ 0006h
RB6PPS_RB6PPS_LENGTH                     equ 0006h
RB6PPS_RB6PPS_MASK                       equ 003Fh
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
RB7PPS                                   equ 01F1Fh
// bitfield definitions
RB7PPS_RB7PPS_POSN                       equ 0000h
RB7PPS_RB7PPS_POSITION                   equ 0000h
RB7PPS_RB7PPS_SIZE                       equ 0006h
RB7PPS_RB7PPS_LENGTH                     equ 0006h
RB7PPS_RB7PPS_MASK                       equ 003Fh
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

// Register: RC0PPS
#define RC0PPS RC0PPS
RC0PPS                                   equ 01F20h
// bitfield definitions
RC0PPS_RC0PPS_POSN                       equ 0000h
RC0PPS_RC0PPS_POSITION                   equ 0000h
RC0PPS_RC0PPS_SIZE                       equ 0006h
RC0PPS_RC0PPS_LENGTH                     equ 0006h
RC0PPS_RC0PPS_MASK                       equ 003Fh
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
RC0PPS_RC0PPS5_POSN                      equ 0005h
RC0PPS_RC0PPS5_POSITION                  equ 0005h
RC0PPS_RC0PPS5_SIZE                      equ 0001h
RC0PPS_RC0PPS5_LENGTH                    equ 0001h
RC0PPS_RC0PPS5_MASK                      equ 0020h

// Register: RC1PPS
#define RC1PPS RC1PPS
RC1PPS                                   equ 01F21h
// bitfield definitions
RC1PPS_RC1PPS_POSN                       equ 0000h
RC1PPS_RC1PPS_POSITION                   equ 0000h
RC1PPS_RC1PPS_SIZE                       equ 0006h
RC1PPS_RC1PPS_LENGTH                     equ 0006h
RC1PPS_RC1PPS_MASK                       equ 003Fh
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
RC1PPS_RC1PPS5_POSN                      equ 0005h
RC1PPS_RC1PPS5_POSITION                  equ 0005h
RC1PPS_RC1PPS5_SIZE                      equ 0001h
RC1PPS_RC1PPS5_LENGTH                    equ 0001h
RC1PPS_RC1PPS5_MASK                      equ 0020h

// Register: RC2PPS
#define RC2PPS RC2PPS
RC2PPS                                   equ 01F22h
// bitfield definitions
RC2PPS_RC2PPS_POSN                       equ 0000h
RC2PPS_RC2PPS_POSITION                   equ 0000h
RC2PPS_RC2PPS_SIZE                       equ 0006h
RC2PPS_RC2PPS_LENGTH                     equ 0006h
RC2PPS_RC2PPS_MASK                       equ 003Fh
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
RC3PPS                                   equ 01F23h
// bitfield definitions
RC3PPS_RC3PPS_POSN                       equ 0000h
RC3PPS_RC3PPS_POSITION                   equ 0000h
RC3PPS_RC3PPS_SIZE                       equ 0006h
RC3PPS_RC3PPS_LENGTH                     equ 0006h
RC3PPS_RC3PPS_MASK                       equ 003Fh
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
RC4PPS                                   equ 01F24h
// bitfield definitions
RC4PPS_RC4PPS_POSN                       equ 0000h
RC4PPS_RC4PPS_POSITION                   equ 0000h
RC4PPS_RC4PPS_SIZE                       equ 0006h
RC4PPS_RC4PPS_LENGTH                     equ 0006h
RC4PPS_RC4PPS_MASK                       equ 003Fh
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
RC5PPS                                   equ 01F25h
// bitfield definitions
RC5PPS_RC5PPS_POSN                       equ 0000h
RC5PPS_RC5PPS_POSITION                   equ 0000h
RC5PPS_RC5PPS_SIZE                       equ 0006h
RC5PPS_RC5PPS_LENGTH                     equ 0006h
RC5PPS_RC5PPS_MASK                       equ 003Fh
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
RC6PPS                                   equ 01F26h
// bitfield definitions
RC6PPS_RC6PPS_POSN                       equ 0000h
RC6PPS_RC6PPS_POSITION                   equ 0000h
RC6PPS_RC6PPS_SIZE                       equ 0006h
RC6PPS_RC6PPS_LENGTH                     equ 0006h
RC6PPS_RC6PPS_MASK                       equ 003Fh
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

// Register: RC7PPS
#define RC7PPS RC7PPS
RC7PPS                                   equ 01F27h
// bitfield definitions
RC7PPS_RC7PPS_POSN                       equ 0000h
RC7PPS_RC7PPS_POSITION                   equ 0000h
RC7PPS_RC7PPS_SIZE                       equ 0006h
RC7PPS_RC7PPS_LENGTH                     equ 0006h
RC7PPS_RC7PPS_MASK                       equ 003Fh
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
RC7PPS_RC7PPS5_POSN                      equ 0005h
RC7PPS_RC7PPS5_POSITION                  equ 0005h
RC7PPS_RC7PPS5_SIZE                      equ 0001h
RC7PPS_RC7PPS5_LENGTH                    equ 0001h
RC7PPS_RC7PPS5_MASK                      equ 0020h

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

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 01F43h
// bitfield definitions
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
#define ABDEN                            BANKMASK(BAUD1CON), 0
#define ABDOVF                           BANKMASK(BAUD1CON), 7
#define ACKDT                            BANKMASK(SSP1CON2), 5
#define ACKDT1                           BANKMASK(SSP1CON2), 5
#define ACKEN                            BANKMASK(SSP1CON2), 4
#define ACKEN1                           BANKMASK(SSP1CON2), 4
#define ACKSTAT                          BANKMASK(SSP1CON2), 6
#define ACKSTAT1                         BANKMASK(SSP1CON2), 6
#define ACKTIM                           BANKMASK(SSP1CON3), 7
#define ADACTPPS0                        BANKMASK(ADACTPPS), 0
#define ADACTPPS1                        BANKMASK(ADACTPPS), 1
#define ADACTPPS2                        BANKMASK(ADACTPPS), 2
#define ADACTPPS3                        BANKMASK(ADACTPPS), 3
#define ADACTPPS4                        BANKMASK(ADACTPPS), 4
#define ADDEN                            BANKMASK(RC1STA), 3
#define ADFM                             BANKMASK(ADCON1), 7
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADGO                             BANKMASK(ADCON0), 1
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
#define ADOR                             BANKMASK(OSCSTAT), 2
#define AHEN                             BANKMASK(SSP1CON3), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
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
#define ASYNC                            BANKMASK(T0CON1), 4
#define BCL1IE                           BANKMASK(PIE1), 2
#define BCL1IF                           BANKMASK(PIR1), 2
#define BF                               BANKMASK(SSP1STAT), 0
#define BF1                              BANKMASK(SSP1STAT), 0
#define BOEN                             BANKMASK(SSP1CON3), 4
#define BORRDY                           BANKMASK(BORCON), 0
#define BRG16                            BANKMASK(BAUD1CON), 3
#define BRGH                             BANKMASK(TX1STA), 2
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define BSR5                             BANKMASK(BSR), 5
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1CTS0                         BANKMASK(CCP1CAP), 0
#define CCP1CTS1                         BANKMASK(CCP1CAP), 1
#define CCP1EN                           BANKMASK(CCP1CON), 7
#define CCP1FMT                          BANKMASK(CCP1CON), 4
#define CCP1IE                           BANKMASK(PIE1), 7
#define CCP1IF                           BANKMASK(PIR1), 7
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
#define CCP2EN                           BANKMASK(CCP2CON), 7
#define CCP2FMT                          BANKMASK(CCP2CON), 4
#define CCP2IE                           BANKMASK(PIE2), 7
#define CCP2IF                           BANKMASK(PIR2), 7
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
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CKE                              BANKMASK(SSP1STAT), 6
#define CKE1                             BANKMASK(SSP1STAT), 6
#define CKP                              BANKMASK(SSP1CON1), 4
#define CKP1                             BANKMASK(SSP1CON1), 4
#define CKPOL                            BANKMASK(T2HLT), 6
#define CKPS3                            BANKMASK(T0CON1), 3
#define CKSYNC                           BANKMASK(T2HLT), 5
#define CPRDY                            BANKMASK(CPCON), 0
#define CPT                              BANKMASK(CPCON), 1
#define CREN                             BANKMASK(RC1STA), 4
#define CS                               BANKMASK(WDTCON), 7
#define CS3                              BANKMASK(T1CLK), 3
#define CSRC                             BANKMASK(TX1STA), 7
#define DA                               BANKMASK(SSP1STAT), 5
#define DA1                              BANKMASK(SSP1STAT), 5
#define DATA_ADDRESS                     BANKMASK(SSP1STAT), 5
#define DATA_ADDRESS1                    BANKMASK(SSP1STAT), 5
#define DC                               BANKMASK(STATUS), 1
#define DHEN                             BANKMASK(SSP1CON3), 0
#define D_A                              BANKMASK(SSP1STAT), 5
#define D_A1                             BANKMASK(SSP1STAT), 5
#define D_nA                             BANKMASK(SSP1STAT), 5
#define D_nA1                            BANKMASK(SSP1STAT), 5
#define FERR                             BANKMASK(RC1STA), 2
#define FM                               BANKMASK(ADCON1), 7
#define FREE                             BANKMASK(NVMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define GCEN                             BANKMASK(SSP1CON2), 7
#define GCEN1                            BANKMASK(SSP1CON2), 7
#define GGO                              BANKMASK(T1GCON), 3
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
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
#define I2C_DAT                          BANKMASK(SSP1STAT), 5
#define I2C_DAT1                         BANKMASK(SSP1STAT), 5
#define I2C_READ                         BANKMASK(SSP1STAT), 2
#define I2C_READ1                        BANKMASK(SSP1STAT), 2
#define I2C_START                        BANKMASK(SSP1STAT), 3
#define I2C_START1                       BANKMASK(SSP1STAT), 3
#define I2C_STOP                         BANKMASK(SSP1STAT), 4
#define I2C_STOP2                        BANKMASK(SSP1STAT), 4
#define INLVLA0                          BANKMASK(INLVLA), 0
#define INLVLA1                          BANKMASK(INLVLA), 1
#define INLVLA2                          BANKMASK(INLVLA), 2
#define INLVLA3                          BANKMASK(INLVLA), 3
#define INLVLA4                          BANKMASK(INLVLA), 4
#define INLVLA5                          BANKMASK(INLVLA), 5
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
#define INTE                             BANKMASK(PIE0), 0
#define INTEDG                           BANKMASK(INTCON), 0
#define INTF                             BANKMASK(PIR0), 0
#define INTPPS0                          BANKMASK(INTPPS), 0
#define INTPPS1                          BANKMASK(INTPPS), 1
#define INTPPS2                          BANKMASK(INTPPS), 2
#define INTPPS3                          BANKMASK(INTPPS), 3
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
#define IOCBF4                           BANKMASK(IOCBF), 4
#define IOCBF5                           BANKMASK(IOCBF), 5
#define IOCBF6                           BANKMASK(IOCBF), 6
#define IOCBF7                           BANKMASK(IOCBF), 7
#define IOCBN4                           BANKMASK(IOCBN), 4
#define IOCBN5                           BANKMASK(IOCBN), 5
#define IOCBN6                           BANKMASK(IOCBN), 6
#define IOCBN7                           BANKMASK(IOCBN), 7
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
#define IOCIE                            BANKMASK(PIE0), 4
#define IOCIF                            BANKMASK(PIR0), 4
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA3                            BANKMASK(LATA), 3
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
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
#define LFOEN                            BANKMASK(OSCEN), 4
#define LFOR                             BANKMASK(OSCSTAT), 4
#define LWLO                             BANKMASK(NVMCON1), 5
#define MD16                             BANKMASK(T0CON0), 4
#define MFOEN                            BANKMASK(OSCEN), 5
#define MFOR                             BANKMASK(OSCSTAT), 5
#define MODE4                            BANKMASK(T2HLT), 4
#define MSK01                            BANKMASK(SSP1ADD), 0
#define MSK11                            BANKMASK(SSP1ADD), 1
#define MSK21                            BANKMASK(SSP1ADD), 2
#define MSK31                            BANKMASK(SSP1ADD), 3
#define MSK41                            BANKMASK(SSP1ADD), 4
#define MSK51                            BANKMASK(SSP1ADD), 5
#define MSK61                            BANKMASK(SSP1ADD), 6
#define MSK71                            BANKMASK(SSP1ADD), 7
#define NDIV0                            BANKMASK(OSCCON), 0
#define NDIV1                            BANKMASK(OSCCON), 1
#define NDIV2                            BANKMASK(OSCCON), 2
#define NDIV3                            BANKMASK(OSCCON), 3
#define NOSC0                            BANKMASK(OSCCON), 4
#define NOSC1                            BANKMASK(OSCCON), 5
#define NOSC2                            BANKMASK(OSCCON), 6
#define NOT_DONE                         BANKMASK(T1GCON), 3
#define NOT_SYNC                         BANKMASK(T1CON), 2
#define NOT_T1DONE                       BANKMASK(T1GCON), 3
#define NOT_T1SYNC                       BANKMASK(T1CON), 2
#define NVMIE                            BANKMASK(PIE2), 6
#define NVMIF                            BANKMASK(PIR2), 6
#define NVMREGS                          BANKMASK(NVMCON1), 6
#define ODCA0                            BANKMASK(ODCONA), 0
#define ODCA1                            BANKMASK(ODCONA), 1
#define ODCA2                            BANKMASK(ODCONA), 2
#define ODCA4                            BANKMASK(ODCONA), 4
#define ODCA5                            BANKMASK(ODCONA), 5
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
#define OERR                             BANKMASK(RC1STA), 1
#define P1M1                             BANKMASK(CCP1CON), 7
#define P2                               BANKMASK(SSP1STAT), 4
#define P2M1                             BANKMASK(CCP2CON), 7
#define PCIE                             BANKMASK(SSP1CON3), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSP1CON2), 2
#define PEN1                             BANKMASK(SSP1CON2), 2
#define PPSLOCKED                        BANKMASK(PPSLOCK), 0
#define PSYNC                            BANKMASK(T2HLT), 7
#define PWM3EN                           BANKMASK(PWM3CON), 7
#define PWM3OUT                          BANKMASK(PWM3CON), 5
#define PWM3POL                          BANKMASK(PWM3CON), 4
#define PWM4EN                           BANKMASK(PWM4CON), 7
#define PWM4OUT                          BANKMASK(PWM4CON), 5
#define PWM4POL                          BANKMASK(PWM4CON), 4
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
#define RC0                              BANKMASK(PORTC), 0
#define RC0PPS0                          BANKMASK(RC0PPS), 0
#define RC0PPS1                          BANKMASK(RC0PPS), 1
#define RC0PPS2                          BANKMASK(RC0PPS), 2
#define RC0PPS3                          BANKMASK(RC0PPS), 3
#define RC0PPS4                          BANKMASK(RC0PPS), 4
#define RC0PPS5                          BANKMASK(RC0PPS), 5
#define RC1                              BANKMASK(PORTC), 1
#define RC1IE                            BANKMASK(PIE1), 4
#define RC1IF                            BANKMASK(PIR1), 4
#define RC1PPS0                          BANKMASK(RC1PPS), 0
#define RC1PPS1                          BANKMASK(RC1PPS), 1
#define RC1PPS2                          BANKMASK(RC1PPS), 2
#define RC1PPS3                          BANKMASK(RC1PPS), 3
#define RC1PPS4                          BANKMASK(RC1PPS), 4
#define RC1PPS5                          BANKMASK(RC1PPS), 5
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
#define RC7PPS0                          BANKMASK(RC7PPS), 0
#define RC7PPS1                          BANKMASK(RC7PPS), 1
#define RC7PPS2                          BANKMASK(RC7PPS), 2
#define RC7PPS3                          BANKMASK(RC7PPS), 3
#define RC7PPS4                          BANKMASK(RC7PPS), 4
#define RC7PPS5                          BANKMASK(RC7PPS), 5
#define RCEN                             BANKMASK(SSP1CON2), 3
#define RCEN1                            BANKMASK(SSP1CON2), 3
#define RCIDL                            BANKMASK(BAUD1CON), 6
#define RD                               BANKMASK(NVMCON1), 0
#define RD16                             BANKMASK(T1CON), 1
#define RD161                            BANKMASK(T1CON), 1
#define READ_WRITE                       BANKMASK(SSP1STAT), 2
#define READ_WRITE1                      BANKMASK(SSP1STAT), 2
#define RSEL0                            BANKMASK(T2RST), 0
#define RSEL1                            BANKMASK(T2RST), 1
#define RSEL2                            BANKMASK(T2RST), 2
#define RSEL3                            BANKMASK(T2RST), 3
#define RSEN                             BANKMASK(SSP1CON2), 1
#define RSEN1                            BANKMASK(SSP1CON2), 1
#define RW                               BANKMASK(SSP1STAT), 2
#define RW1                              BANKMASK(SSP1STAT), 2
#define RX1DTPPS0                        BANKMASK(RX1PPS), 0
#define RX1DTPPS1                        BANKMASK(RX1PPS), 1
#define RX1DTPPS2                        BANKMASK(RX1PPS), 2
#define RX1DTPPS3                        BANKMASK(RX1PPS), 3
#define RX1DTPPS4                        BANKMASK(RX1PPS), 4
#define RX9                              BANKMASK(RC1STA), 6
#define RX9D                             BANKMASK(RC1STA), 0
#define R_W                              BANKMASK(SSP1STAT), 2
#define R_W1                             BANKMASK(SSP1STAT), 2
#define R_nW                             BANKMASK(SSP1STAT), 2
#define R_nW1                            BANKMASK(SSP1STAT), 2
#define S2                               BANKMASK(SSP1STAT), 3
#define SBCDE                            BANKMASK(SSP1CON3), 2
#define SBOREN                           BANKMASK(BORCON), 7
#define SCIE                             BANKMASK(SSP1CON3), 5
#define SCKP                             BANKMASK(BAUD1CON), 4
#define SDAHT                            BANKMASK(SSP1CON3), 3
#define SEN1                             BANKMASK(SSP1CON2), 0
#define SENDB                            BANKMASK(TX1STA), 3
#define SFOR                             BANKMASK(OSCSTAT), 1
#define SLRA0                            BANKMASK(SLRCONA), 0
#define SLRA1                            BANKMASK(SLRCONA), 1
#define SLRA2                            BANKMASK(SLRCONA), 2
#define SLRA4                            BANKMASK(SLRCONA), 4
#define SLRA5                            BANKMASK(SLRCONA), 5
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
#define SMP1                             BANKMASK(SSP1STAT), 7
#define SPEN                             BANKMASK(RC1STA), 7
#define SREN                             BANKMASK(RC1STA), 5
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
#define SSP1IE                           BANKMASK(PIE1), 1
#define SSP1IF                           BANKMASK(PIR1), 1
#define SSP1SSPPS0                       BANKMASK(SSP1SSPPS), 0
#define SSP1SSPPS1                       BANKMASK(SSP1SSPPS), 1
#define SSP1SSPPS2                       BANKMASK(SSP1SSPPS), 2
#define SSP1SSPPS3                       BANKMASK(SSP1SSPPS), 3
#define SSP1SSPPS4                       BANKMASK(SSP1SSPPS), 4
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
#define SSPOV                            BANKMASK(SSP1CON1), 6
#define SSPOV1                           BANKMASK(SSP1CON1), 6
#define START                            BANKMASK(SSP1STAT), 3
#define START1                           BANKMASK(SSP1STAT), 3
#define STKOVF                           BANKMASK(PCON0), 7
#define STKPTR0                          BANKMASK(STKPTR), 0
#define STKPTR1                          BANKMASK(STKPTR), 1
#define STKPTR2                          BANKMASK(STKPTR), 2
#define STKPTR3                          BANKMASK(STKPTR), 3
#define STKPTR4                          BANKMASK(STKPTR), 4
#define STKUNF                           BANKMASK(PCON0), 6
#define STOP                             BANKMASK(SSP1STAT), 4
#define STOP1                            BANKMASK(SSP1STAT), 4
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TX1STA), 4
#define T016BIT                          BANKMASK(T0CON0), 4
#define T0ASYNC                          BANKMASK(T0CON1), 4
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
#define T0MD16                           BANKMASK(T0CON0), 4
#define T0OUT                            BANKMASK(T0CON0), 5
#define T0PR0                            BANKMASK(TMR0H), 0
#define T0PR1                            BANKMASK(TMR0H), 1
#define T0PR2                            BANKMASK(TMR0H), 2
#define T0PR3                            BANKMASK(TMR0H), 3
#define T0PR4                            BANKMASK(TMR0H), 4
#define T0PR5                            BANKMASK(TMR0H), 5
#define T0PR6                            BANKMASK(TMR0H), 6
#define T0PR7                            BANKMASK(TMR0H), 7
#define T1CKIPPS0                        BANKMASK(T1CKIPPS), 0
#define T1CKIPPS1                        BANKMASK(T1CKIPPS), 1
#define T1CKIPPS2                        BANKMASK(T1CKIPPS), 2
#define T1CKIPPS3                        BANKMASK(T1CKIPPS), 3
#define T1CKIPPS4                        BANKMASK(T1CKIPPS), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1CS0                            BANKMASK(T1CLK), 0
#define T1CS1                            BANKMASK(T1CLK), 1
#define T1CS2                            BANKMASK(T1CLK), 2
#define T1CS3                            BANKMASK(T1CLK), 3
#define T1GE                             BANKMASK(T1GCON), 7
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GPPS0                          BANKMASK(T1GPPS), 0
#define T1GPPS1                          BANKMASK(T1GPPS), 1
#define T1GPPS2                          BANKMASK(T1GPPS), 2
#define T1GPPS3                          BANKMASK(T1GPPS), 3
#define T1GPPS4                          BANKMASK(T1GPPS), 4
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
#define T2INPPS0                         BANKMASK(T2INPPS), 0
#define T2INPPS1                         BANKMASK(T2INPPS), 1
#define T2INPPS2                         BANKMASK(T2INPPS), 2
#define T2INPPS3                         BANKMASK(T2INPPS), 3
#define T2INPPS4                         BANKMASK(T2INPPS), 4
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
#define TMR1GIE                          BANKMASK(PIE2), 5
#define TMR1GIF                          BANKMASK(PIR2), 5
#define TMR1H0                           BANKMASK(TMR1H), 0
#define TMR1H1                           BANKMASK(TMR1H), 1
#define TMR1H2                           BANKMASK(TMR1H), 2
#define TMR1H3                           BANKMASK(TMR1H), 3
#define TMR1H4                           BANKMASK(TMR1H), 4
#define TMR1H5                           BANKMASK(TMR1H), 5
#define TMR1H6                           BANKMASK(TMR1H), 6
#define TMR1H7                           BANKMASK(TMR1H), 7
#define TMR1IE                           BANKMASK(PIE1), 5
#define TMR1IF                           BANKMASK(PIR1), 5
#define TMR1L0                           BANKMASK(TMR1L), 0
#define TMR1L1                           BANKMASK(TMR1L), 1
#define TMR1L2                           BANKMASK(TMR1L), 2
#define TMR1L3                           BANKMASK(TMR1L), 3
#define TMR1L4                           BANKMASK(TMR1L), 4
#define TMR1L5                           BANKMASK(TMR1L), 5
#define TMR1L6                           BANKMASK(TMR1L), 6
#define TMR1L7                           BANKMASK(TMR1L), 7
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2IE                           BANKMASK(PIE1), 6
#define TMR2IF                           BANKMASK(PIR1), 6
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
#define TRMT                             BANKMASK(TX1STA), 1
#define TX1CKPPS0                        BANKMASK(CK1PPS), 0
#define TX1CKPPS1                        BANKMASK(CK1PPS), 1
#define TX1CKPPS2                        BANKMASK(CK1PPS), 2
#define TX1CKPPS3                        BANKMASK(CK1PPS), 3
#define TX1CKPPS4                        BANKMASK(CK1PPS), 4
#define TX1IE                            BANKMASK(PIE1), 3
#define TX1IF                            BANKMASK(PIR1), 3
#define TX9                              BANKMASK(TX1STA), 6
#define TX9D                             BANKMASK(TX1STA), 0
#define TXEN                             BANKMASK(TX1STA), 5
#define UA                               BANKMASK(SSP1STAT), 1
#define UA1                              BANKMASK(SSP1STAT), 1
#define WCOL                             BANKMASK(SSP1CON1), 7
#define WCOL1                            BANKMASK(SSP1CON1), 7
#define WDTCS                            BANKMASK(WDTCON), 7
#define WDTSEN                           BANKMASK(WDTCON), 0
#define WPUA0                            BANKMASK(WPUA), 0
#define WPUA1                            BANKMASK(WPUA), 1
#define WPUA2                            BANKMASK(WPUA), 2
#define WPUA3                            BANKMASK(WPUA), 3
#define WPUA4                            BANKMASK(WPUA), 4
#define WPUA5                            BANKMASK(WPUA), 5
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
#define WR                               BANKMASK(NVMCON1), 1
#define WREN                             BANKMASK(NVMCON1), 2
#define WRERR                            BANKMASK(NVMCON1), 3
#define WUE                              BANKMASK(BAUD1CON), 1
#define ZERO                             BANKMASK(STATUS), 2
#define nA                               BANKMASK(SSP1STAT), 5
#define nA2                              BANKMASK(SSP1STAT), 5
#define nADDRESS                         BANKMASK(SSP1STAT), 5
#define nADDRESS1                        BANKMASK(SSP1STAT), 5
#define nBOR                             BANKMASK(PCON0), 0
#define nMEMV                            BANKMASK(PCON1), 1
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON0), 1
#define nRI                              BANKMASK(PCON0), 2
#define nRMCLR                           BANKMASK(PCON0), 3
#define nRWDT                            BANKMASK(PCON0), 4
#define nTO                              BANKMASK(STATUS), 4
#define nW                               BANKMASK(SSP1STAT), 2
#define nW2                              BANKMASK(SSP1STAT), 2
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
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16F15243_INC_
