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

#ifndef _PIC16F570_INC_
#define _PIC16F570_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F570
 */

/*
 * Device Registers
 */

// Register: INDF
#define INDF INDF
INDF                                     equ 0000h
// bitfield definitions
INDF_INDF_POSN                           equ 0000h
INDF_INDF_POSITION                       equ 0000h
INDF_INDF_SIZE                           equ 0008h
INDF_INDF_LENGTH                         equ 0008h
INDF_INDF_MASK                           equ 00FFh

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0001h
// bitfield definitions
TMR0_TMR0_POSN                           equ 0000h
TMR0_TMR0_POSITION                       equ 0000h
TMR0_TMR0_SIZE                           equ 0008h
TMR0_TMR0_LENGTH                         equ 0008h
TMR0_TMR0_MASK                           equ 00FFh

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
STATUS_PA0_POSN                          equ 0005h
STATUS_PA0_POSITION                      equ 0005h
STATUS_PA0_SIZE                          equ 0001h
STATUS_PA0_LENGTH                        equ 0001h
STATUS_PA0_MASK                          equ 0020h
STATUS_PA1_POSN                          equ 0006h
STATUS_PA1_POSITION                      equ 0006h
STATUS_PA1_SIZE                          equ 0001h
STATUS_PA1_LENGTH                        equ 0001h
STATUS_PA1_MASK                          equ 0040h
STATUS_PA2_POSN                          equ 0007h
STATUS_PA2_POSITION                      equ 0007h
STATUS_PA2_SIZE                          equ 0001h
STATUS_PA2_LENGTH                        equ 0001h
STATUS_PA2_MASK                          equ 0080h
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

// Register: FSR
#define FSR FSR
FSR                                      equ 0004h
// bitfield definitions
FSR_FSR_POSN                             equ 0000h
FSR_FSR_POSITION                         equ 0000h
FSR_FSR_SIZE                             equ 0008h
FSR_FSR_LENGTH                           equ 0008h
FSR_FSR_MASK                             equ 00FFh

// Register: OSCCAL
#define OSCCAL OSCCAL
OSCCAL                                   equ 0005h
// bitfield definitions
OSCCAL_CAL_POSN                          equ 0001h
OSCCAL_CAL_POSITION                      equ 0001h
OSCCAL_CAL_SIZE                          equ 0007h
OSCCAL_CAL_LENGTH                        equ 0007h
OSCCAL_CAL_MASK                          equ 00FEh
OSCCAL_CAL0_POSN                         equ 0001h
OSCCAL_CAL0_POSITION                     equ 0001h
OSCCAL_CAL0_SIZE                         equ 0001h
OSCCAL_CAL0_LENGTH                       equ 0001h
OSCCAL_CAL0_MASK                         equ 0002h
OSCCAL_CAL1_POSN                         equ 0002h
OSCCAL_CAL1_POSITION                     equ 0002h
OSCCAL_CAL1_SIZE                         equ 0001h
OSCCAL_CAL1_LENGTH                       equ 0001h
OSCCAL_CAL1_MASK                         equ 0004h
OSCCAL_CAL2_POSN                         equ 0003h
OSCCAL_CAL2_POSITION                     equ 0003h
OSCCAL_CAL2_SIZE                         equ 0001h
OSCCAL_CAL2_LENGTH                       equ 0001h
OSCCAL_CAL2_MASK                         equ 0008h
OSCCAL_CAL3_POSN                         equ 0004h
OSCCAL_CAL3_POSITION                     equ 0004h
OSCCAL_CAL3_SIZE                         equ 0001h
OSCCAL_CAL3_LENGTH                       equ 0001h
OSCCAL_CAL3_MASK                         equ 0010h
OSCCAL_CAL4_POSN                         equ 0005h
OSCCAL_CAL4_POSITION                     equ 0005h
OSCCAL_CAL4_SIZE                         equ 0001h
OSCCAL_CAL4_LENGTH                       equ 0001h
OSCCAL_CAL4_MASK                         equ 0020h
OSCCAL_CAL5_POSN                         equ 0006h
OSCCAL_CAL5_POSITION                     equ 0006h
OSCCAL_CAL5_SIZE                         equ 0001h
OSCCAL_CAL5_LENGTH                       equ 0001h
OSCCAL_CAL5_MASK                         equ 0040h
OSCCAL_CAL6_POSN                         equ 0007h
OSCCAL_CAL6_POSITION                     equ 0007h
OSCCAL_CAL6_SIZE                         equ 0001h
OSCCAL_CAL6_LENGTH                       equ 0001h
OSCCAL_CAL6_MASK                         equ 0080h

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 0006h
// bitfield definitions
PORTA_RA_POSN                            equ 0000h
PORTA_RA_POSITION                        equ 0000h
PORTA_RA_SIZE                            equ 0008h
PORTA_RA_LENGTH                          equ 0008h
PORTA_RA_MASK                            equ 00FFh
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
PORTB                                    equ 0007h
// bitfield definitions
PORTB_RB_POSN                            equ 0000h
PORTB_RB_POSITION                        equ 0000h
PORTB_RB_SIZE                            equ 0008h
PORTB_RB_LENGTH                          equ 0008h
PORTB_RB_MASK                            equ 00FFh
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
PORTC                                    equ 0008h
// bitfield definitions
PORTC_RC_POSN                            equ 0000h
PORTC_RC_POSITION                        equ 0000h
PORTC_RC_SIZE                            equ 0008h
PORTC_RC_LENGTH                          equ 0008h
PORTC_RC_MASK                            equ 00FFh
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

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 0009h
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
ADCON0_CHS_SIZE                          equ 0004h
ADCON0_CHS_LENGTH                        equ 0004h
ADCON0_CHS_MASK                          equ 003Ch
ADCON0_ADCS_POSN                         equ 0006h
ADCON0_ADCS_POSITION                     equ 0006h
ADCON0_ADCS_SIZE                         equ 0002h
ADCON0_ADCS_LENGTH                       equ 0002h
ADCON0_ADCS_MASK                         equ 00C0h
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h
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
ADCON0_ADCS0_POSN                        equ 0006h
ADCON0_ADCS0_POSITION                    equ 0006h
ADCON0_ADCS0_SIZE                        equ 0001h
ADCON0_ADCS0_LENGTH                      equ 0001h
ADCON0_ADCS0_MASK                        equ 0040h
ADCON0_ADCS1_POSN                        equ 0007h
ADCON0_ADCS1_POSITION                    equ 0007h
ADCON0_ADCS1_SIZE                        equ 0001h
ADCON0_ADCS1_LENGTH                      equ 0001h
ADCON0_ADCS1_MASK                        equ 0080h
ADCON0_NOT_DONE_POSN                     equ 0001h
ADCON0_NOT_DONE_POSITION                 equ 0001h
ADCON0_NOT_DONE_SIZE                     equ 0001h
ADCON0_NOT_DONE_LENGTH                   equ 0001h
ADCON0_NOT_DONE_MASK                     equ 0002h

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 000Ah
// bitfield definitions
ADRES_ADRES_POSN                         equ 0000h
ADRES_ADRES_POSITION                     equ 0000h
ADRES_ADRES_SIZE                         equ 0008h
ADRES_ADRES_LENGTH                       equ 0008h
ADRES_ADRES_MASK                         equ 00FFh
ADRES_ADRES0_POSN                        equ 0000h
ADRES_ADRES0_POSITION                    equ 0000h
ADRES_ADRES0_SIZE                        equ 0001h
ADRES_ADRES0_LENGTH                      equ 0001h
ADRES_ADRES0_MASK                        equ 0001h
ADRES_ADRES1_POSN                        equ 0001h
ADRES_ADRES1_POSITION                    equ 0001h
ADRES_ADRES1_SIZE                        equ 0001h
ADRES_ADRES1_LENGTH                      equ 0001h
ADRES_ADRES1_MASK                        equ 0002h
ADRES_ADRES2_POSN                        equ 0002h
ADRES_ADRES2_POSITION                    equ 0002h
ADRES_ADRES2_SIZE                        equ 0001h
ADRES_ADRES2_LENGTH                      equ 0001h
ADRES_ADRES2_MASK                        equ 0004h
ADRES_ADRES3_POSN                        equ 0003h
ADRES_ADRES3_POSITION                    equ 0003h
ADRES_ADRES3_SIZE                        equ 0001h
ADRES_ADRES3_LENGTH                      equ 0001h
ADRES_ADRES3_MASK                        equ 0008h
ADRES_ADRES4_POSN                        equ 0004h
ADRES_ADRES4_POSITION                    equ 0004h
ADRES_ADRES4_SIZE                        equ 0001h
ADRES_ADRES4_LENGTH                      equ 0001h
ADRES_ADRES4_MASK                        equ 0010h
ADRES_ADRES5_POSN                        equ 0005h
ADRES_ADRES5_POSITION                    equ 0005h
ADRES_ADRES5_SIZE                        equ 0001h
ADRES_ADRES5_LENGTH                      equ 0001h
ADRES_ADRES5_MASK                        equ 0020h
ADRES_ADRES6_POSN                        equ 0006h
ADRES_ADRES6_POSITION                    equ 0006h
ADRES_ADRES6_SIZE                        equ 0001h
ADRES_ADRES6_LENGTH                      equ 0001h
ADRES_ADRES6_MASK                        equ 0040h
ADRES_ADRES7_POSN                        equ 0007h
ADRES_ADRES7_POSITION                    equ 0007h
ADRES_ADRES7_SIZE                        equ 0001h
ADRES_ADRES7_LENGTH                      equ 0001h
ADRES_ADRES7_MASK                        equ 0080h

// Register: INTCON0
#define INTCON0 INTCON0
INTCON0                                  equ 000Bh
// bitfield definitions
INTCON0_GIE_POSN                         equ 0000h
INTCON0_GIE_POSITION                     equ 0000h
INTCON0_GIE_SIZE                         equ 0001h
INTCON0_GIE_LENGTH                       equ 0001h
INTCON0_GIE_MASK                         equ 0001h
INTCON0_RBIF_POSN                        equ 0004h
INTCON0_RBIF_POSITION                    equ 0004h
INTCON0_RBIF_SIZE                        equ 0001h
INTCON0_RBIF_LENGTH                      equ 0001h
INTCON0_RBIF_MASK                        equ 0010h
INTCON0_T0IF_POSN                        equ 0005h
INTCON0_T0IF_POSITION                    equ 0005h
INTCON0_T0IF_SIZE                        equ 0001h
INTCON0_T0IF_LENGTH                      equ 0001h
INTCON0_T0IF_MASK                        equ 0020h
INTCON0_CWIF_POSN                        equ 0006h
INTCON0_CWIF_POSITION                    equ 0006h
INTCON0_CWIF_SIZE                        equ 0001h
INTCON0_CWIF_LENGTH                      equ 0001h
INTCON0_CWIF_MASK                        equ 0040h
INTCON0_ADIF_POSN                        equ 0007h
INTCON0_ADIF_POSITION                    equ 0007h
INTCON0_ADIF_SIZE                        equ 0001h
INTCON0_ADIF_LENGTH                      equ 0001h
INTCON0_ADIF_MASK                        equ 0080h

// Register: EECON
#define EECON EECON
EECON                                    equ 0021h
// bitfield definitions
EECON_RD_POSN                            equ 0000h
EECON_RD_POSITION                        equ 0000h
EECON_RD_SIZE                            equ 0001h
EECON_RD_LENGTH                          equ 0001h
EECON_RD_MASK                            equ 0001h
EECON_WR_POSN                            equ 0001h
EECON_WR_POSITION                        equ 0001h
EECON_WR_SIZE                            equ 0001h
EECON_WR_LENGTH                          equ 0001h
EECON_WR_MASK                            equ 0002h
EECON_WREN_POSN                          equ 0002h
EECON_WREN_POSITION                      equ 0002h
EECON_WREN_SIZE                          equ 0001h
EECON_WREN_LENGTH                        equ 0001h
EECON_WREN_MASK                          equ 0004h
EECON_WRERR_POSN                         equ 0003h
EECON_WRERR_POSITION                     equ 0003h
EECON_WRERR_SIZE                         equ 0001h
EECON_WRERR_LENGTH                       equ 0001h
EECON_WRERR_MASK                         equ 0008h
EECON_FREE_POSN                          equ 0004h
EECON_FREE_POSITION                      equ 0004h
EECON_FREE_SIZE                          equ 0001h
EECON_FREE_LENGTH                        equ 0001h
EECON_FREE_MASK                          equ 0010h

// Register: EEDATA
#define EEDATA EEDATA
EEDATA                                   equ 0025h
// bitfield definitions
EEDATA_EEDATA_POSN                       equ 0000h
EEDATA_EEDATA_POSITION                   equ 0000h
EEDATA_EEDATA_SIZE                       equ 0008h
EEDATA_EEDATA_LENGTH                     equ 0008h
EEDATA_EEDATA_MASK                       equ 00FFh

// Register: EEADR
#define EEADR EEADR
EEADR                                    equ 0026h
// bitfield definitions
EEADR_EEADR_POSN                         equ 0000h
EEADR_EEADR_POSITION                     equ 0000h
EEADR_EEADR_SIZE                         equ 0006h
EEADR_EEADR_LENGTH                       equ 0006h
EEADR_EEADR_MASK                         equ 003Fh

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0027h
// bitfield definitions
CM1CON0_nC1WU_POSN                       equ 0000h
CM1CON0_nC1WU_POSITION                   equ 0000h
CM1CON0_nC1WU_SIZE                       equ 0001h
CM1CON0_nC1WU_LENGTH                     equ 0001h
CM1CON0_nC1WU_MASK                       equ 0001h
CM1CON0_C1PREF_POSN                      equ 0001h
CM1CON0_C1PREF_POSITION                  equ 0001h
CM1CON0_C1PREF_SIZE                      equ 0001h
CM1CON0_C1PREF_LENGTH                    equ 0001h
CM1CON0_C1PREF_MASK                      equ 0002h
CM1CON0_C1NREF_POSN                      equ 0002h
CM1CON0_C1NREF_POSITION                  equ 0002h
CM1CON0_C1NREF_SIZE                      equ 0001h
CM1CON0_C1NREF_LENGTH                    equ 0001h
CM1CON0_C1NREF_MASK                      equ 0004h
CM1CON0_C1ON_POSN                        equ 0003h
CM1CON0_C1ON_POSITION                    equ 0003h
CM1CON0_C1ON_SIZE                        equ 0001h
CM1CON0_C1ON_LENGTH                      equ 0001h
CM1CON0_C1ON_MASK                        equ 0008h
CM1CON0_nC1T0CS_POSN                     equ 0004h
CM1CON0_nC1T0CS_POSITION                 equ 0004h
CM1CON0_nC1T0CS_SIZE                     equ 0001h
CM1CON0_nC1T0CS_LENGTH                   equ 0001h
CM1CON0_nC1T0CS_MASK                     equ 0010h
CM1CON0_C1POL_POSN                       equ 0005h
CM1CON0_C1POL_POSITION                   equ 0005h
CM1CON0_C1POL_SIZE                       equ 0001h
CM1CON0_C1POL_LENGTH                     equ 0001h
CM1CON0_C1POL_MASK                       equ 0020h
CM1CON0_nC1OUTEN_POSN                    equ 0006h
CM1CON0_nC1OUTEN_POSITION                equ 0006h
CM1CON0_nC1OUTEN_SIZE                    equ 0001h
CM1CON0_nC1OUTEN_LENGTH                  equ 0001h
CM1CON0_nC1OUTEN_MASK                    equ 0040h
CM1CON0_C1OUT_POSN                       equ 0007h
CM1CON0_C1OUT_POSITION                   equ 0007h
CM1CON0_C1OUT_SIZE                       equ 0001h
CM1CON0_C1OUT_LENGTH                     equ 0001h
CM1CON0_C1OUT_MASK                       equ 0080h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0028h
// bitfield definitions
CM2CON0_nC2WU_POSN                       equ 0000h
CM2CON0_nC2WU_POSITION                   equ 0000h
CM2CON0_nC2WU_SIZE                       equ 0001h
CM2CON0_nC2WU_LENGTH                     equ 0001h
CM2CON0_nC2WU_MASK                       equ 0001h
CM2CON0_C2PREF1_POSN                     equ 0001h
CM2CON0_C2PREF1_POSITION                 equ 0001h
CM2CON0_C2PREF1_SIZE                     equ 0001h
CM2CON0_C2PREF1_LENGTH                   equ 0001h
CM2CON0_C2PREF1_MASK                     equ 0002h
CM2CON0_C2NREF_POSN                      equ 0002h
CM2CON0_C2NREF_POSITION                  equ 0002h
CM2CON0_C2NREF_SIZE                      equ 0001h
CM2CON0_C2NREF_LENGTH                    equ 0001h
CM2CON0_C2NREF_MASK                      equ 0004h
CM2CON0_C2ON_POSN                        equ 0003h
CM2CON0_C2ON_POSITION                    equ 0003h
CM2CON0_C2ON_SIZE                        equ 0001h
CM2CON0_C2ON_LENGTH                      equ 0001h
CM2CON0_C2ON_MASK                        equ 0008h
CM2CON0_C2PREF2_POSN                     equ 0004h
CM2CON0_C2PREF2_POSITION                 equ 0004h
CM2CON0_C2PREF2_SIZE                     equ 0001h
CM2CON0_C2PREF2_LENGTH                   equ 0001h
CM2CON0_C2PREF2_MASK                     equ 0010h
CM2CON0_C2POL_POSN                       equ 0005h
CM2CON0_C2POL_POSITION                   equ 0005h
CM2CON0_C2POL_SIZE                       equ 0001h
CM2CON0_C2POL_LENGTH                     equ 0001h
CM2CON0_C2POL_MASK                       equ 0020h
CM2CON0_nC2OUTEN_POSN                    equ 0006h
CM2CON0_nC2OUTEN_POSITION                equ 0006h
CM2CON0_nC2OUTEN_SIZE                    equ 0001h
CM2CON0_nC2OUTEN_LENGTH                  equ 0001h
CM2CON0_nC2OUTEN_MASK                    equ 0040h
CM2CON0_C2OUT_POSN                       equ 0007h
CM2CON0_C2OUT_POSITION                   equ 0007h
CM2CON0_C2OUT_SIZE                       equ 0001h
CM2CON0_C2OUT_LENGTH                     equ 0001h
CM2CON0_C2OUT_MASK                       equ 0080h

// Register: VRCON
#define VRCON VRCON
VRCON                                    equ 0029h
// bitfield definitions
VRCON_VR_POSN                            equ 0000h
VRCON_VR_POSITION                        equ 0000h
VRCON_VR_SIZE                            equ 0004h
VRCON_VR_LENGTH                          equ 0004h
VRCON_VR_MASK                            equ 000Fh
VRCON_VRR_POSN                           equ 0004h
VRCON_VRR_POSITION                       equ 0004h
VRCON_VRR_SIZE                           equ 0001h
VRCON_VRR_LENGTH                         equ 0001h
VRCON_VRR_MASK                           equ 0010h
VRCON_VROE2_POSN                         equ 0005h
VRCON_VROE2_POSITION                     equ 0005h
VRCON_VROE2_SIZE                         equ 0001h
VRCON_VROE2_LENGTH                       equ 0001h
VRCON_VROE2_MASK                         equ 0020h
VRCON_VROE1_POSN                         equ 0006h
VRCON_VROE1_POSITION                     equ 0006h
VRCON_VROE1_SIZE                         equ 0001h
VRCON_VROE1_LENGTH                       equ 0001h
VRCON_VROE1_MASK                         equ 0040h
VRCON_VREN_POSN                          equ 0007h
VRCON_VREN_POSITION                      equ 0007h
VRCON_VREN_SIZE                          equ 0001h
VRCON_VREN_LENGTH                        equ 0001h
VRCON_VREN_MASK                          equ 0080h
VRCON_VR0_POSN                           equ 0000h
VRCON_VR0_POSITION                       equ 0000h
VRCON_VR0_SIZE                           equ 0001h
VRCON_VR0_LENGTH                         equ 0001h
VRCON_VR0_MASK                           equ 0001h
VRCON_VR1_POSN                           equ 0001h
VRCON_VR1_POSITION                       equ 0001h
VRCON_VR1_SIZE                           equ 0001h
VRCON_VR1_LENGTH                         equ 0001h
VRCON_VR1_MASK                           equ 0002h
VRCON_VR2_POSN                           equ 0002h
VRCON_VR2_POSITION                       equ 0002h
VRCON_VR2_SIZE                           equ 0001h
VRCON_VR2_LENGTH                         equ 0001h
VRCON_VR2_MASK                           equ 0004h
VRCON_VR3_POSN                           equ 0003h
VRCON_VR3_POSITION                       equ 0003h
VRCON_VR3_SIZE                           equ 0001h
VRCON_VR3_LENGTH                         equ 0001h
VRCON_VR3_MASK                           equ 0008h

// Register: ANSEL
#define ANSEL ANSEL
ANSEL                                    equ 002Ah
// bitfield definitions
ANSEL_ANS0_POSN                          equ 0000h
ANSEL_ANS0_POSITION                      equ 0000h
ANSEL_ANS0_SIZE                          equ 0001h
ANSEL_ANS0_LENGTH                        equ 0001h
ANSEL_ANS0_MASK                          equ 0001h
ANSEL_ANS1_POSN                          equ 0001h
ANSEL_ANS1_POSITION                      equ 0001h
ANSEL_ANS1_SIZE                          equ 0001h
ANSEL_ANS1_LENGTH                        equ 0001h
ANSEL_ANS1_MASK                          equ 0002h
ANSEL_ANS2_POSN                          equ 0002h
ANSEL_ANS2_POSITION                      equ 0002h
ANSEL_ANS2_SIZE                          equ 0001h
ANSEL_ANS2_LENGTH                        equ 0001h
ANSEL_ANS2_MASK                          equ 0004h
ANSEL_ANS3_POSN                          equ 0003h
ANSEL_ANS3_POSITION                      equ 0003h
ANSEL_ANS3_SIZE                          equ 0001h
ANSEL_ANS3_LENGTH                        equ 0001h
ANSEL_ANS3_MASK                          equ 0008h
ANSEL_ANS4_POSN                          equ 0004h
ANSEL_ANS4_POSITION                      equ 0004h
ANSEL_ANS4_SIZE                          equ 0001h
ANSEL_ANS4_LENGTH                        equ 0001h
ANSEL_ANS4_MASK                          equ 0010h
ANSEL_ANS5_POSN                          equ 0005h
ANSEL_ANS5_POSITION                      equ 0005h
ANSEL_ANS5_SIZE                          equ 0001h
ANSEL_ANS5_LENGTH                        equ 0001h
ANSEL_ANS5_MASK                          equ 0020h
ANSEL_ANS6_POSN                          equ 0006h
ANSEL_ANS6_POSITION                      equ 0006h
ANSEL_ANS6_SIZE                          equ 0001h
ANSEL_ANS6_LENGTH                        equ 0001h
ANSEL_ANS6_MASK                          equ 0040h
ANSEL_ANS7_POSN                          equ 0007h
ANSEL_ANS7_POSITION                      equ 0007h
ANSEL_ANS7_SIZE                          equ 0001h
ANSEL_ANS7_LENGTH                        equ 0001h
ANSEL_ANS7_MASK                          equ 0080h

// Register: IW
#define IW IW
IW                                       equ 0061h
// bitfield definitions
IW_IWREG_POSN                            equ 0000h
IW_IWREG_POSITION                        equ 0000h
IW_IWREG_SIZE                            equ 0008h
IW_IWREG_LENGTH                          equ 0008h
IW_IWREG_MASK                            equ 00FFh

// Register: INTCON1
#define INTCON1 INTCON1
INTCON1                                  equ 0065h
// bitfield definitions
INTCON1_WUR_POSN                         equ 0000h
INTCON1_WUR_POSITION                     equ 0000h
INTCON1_WUR_SIZE                         equ 0001h
INTCON1_WUR_LENGTH                       equ 0001h
INTCON1_WUR_MASK                         equ 0001h
INTCON1_RBIE_POSN                        equ 0004h
INTCON1_RBIE_POSITION                    equ 0004h
INTCON1_RBIE_SIZE                        equ 0001h
INTCON1_RBIE_LENGTH                      equ 0001h
INTCON1_RBIE_MASK                        equ 0010h
INTCON1_T0IE_POSN                        equ 0005h
INTCON1_T0IE_POSITION                    equ 0005h
INTCON1_T0IE_SIZE                        equ 0001h
INTCON1_T0IE_LENGTH                      equ 0001h
INTCON1_T0IE_MASK                        equ 0020h
INTCON1_CWIE_POSN                        equ 0006h
INTCON1_CWIE_POSITION                    equ 0006h
INTCON1_CWIE_SIZE                        equ 0001h
INTCON1_CWIE_LENGTH                      equ 0001h
INTCON1_CWIE_MASK                        equ 0040h
INTCON1_ADIE_POSN                        equ 0007h
INTCON1_ADIE_POSITION                    equ 0007h
INTCON1_ADIE_SIZE                        equ 0001h
INTCON1_ADIE_LENGTH                      equ 0001h
INTCON1_ADIE_MASK                        equ 0080h

// Register: ISTATUS
#define ISTATUS ISTATUS
ISTATUS                                  equ 0066h
// bitfield definitions
ISTATUS_C_POSN                           equ 0000h
ISTATUS_C_POSITION                       equ 0000h
ISTATUS_C_SIZE                           equ 0001h
ISTATUS_C_LENGTH                         equ 0001h
ISTATUS_C_MASK                           equ 0001h
ISTATUS_DC_POSN                          equ 0001h
ISTATUS_DC_POSITION                      equ 0001h
ISTATUS_DC_SIZE                          equ 0001h
ISTATUS_DC_LENGTH                        equ 0001h
ISTATUS_DC_MASK                          equ 0002h
ISTATUS_Z_POSN                           equ 0002h
ISTATUS_Z_POSITION                       equ 0002h
ISTATUS_Z_SIZE                           equ 0001h
ISTATUS_Z_LENGTH                         equ 0001h
ISTATUS_Z_MASK                           equ 0004h
ISTATUS_nPD_POSN                         equ 0003h
ISTATUS_nPD_POSITION                     equ 0003h
ISTATUS_nPD_SIZE                         equ 0001h
ISTATUS_nPD_LENGTH                       equ 0001h
ISTATUS_nPD_MASK                         equ 0008h
ISTATUS_nTO_POSN                         equ 0004h
ISTATUS_nTO_POSITION                     equ 0004h
ISTATUS_nTO_SIZE                         equ 0001h
ISTATUS_nTO_LENGTH                       equ 0001h
ISTATUS_nTO_MASK                         equ 0010h
ISTATUS_PA0_POSN                         equ 0005h
ISTATUS_PA0_POSITION                     equ 0005h
ISTATUS_PA0_SIZE                         equ 0001h
ISTATUS_PA0_LENGTH                       equ 0001h
ISTATUS_PA0_MASK                         equ 0020h
ISTATUS_PA1_POSN                         equ 0006h
ISTATUS_PA1_POSITION                     equ 0006h
ISTATUS_PA1_SIZE                         equ 0001h
ISTATUS_PA1_LENGTH                       equ 0001h
ISTATUS_PA1_MASK                         equ 0040h
ISTATUS_PA2_POSN                         equ 0007h
ISTATUS_PA2_POSITION                     equ 0007h
ISTATUS_PA2_SIZE                         equ 0001h
ISTATUS_PA2_LENGTH                       equ 0001h
ISTATUS_PA2_MASK                         equ 0080h

// Register: IFSR
#define IFSR IFSR
IFSR                                     equ 0067h
// bitfield definitions
IFSR_IFSR_POSN                           equ 0000h
IFSR_IFSR_POSITION                       equ 0000h
IFSR_IFSR_SIZE                           equ 0008h
IFSR_IFSR_LENGTH                         equ 0008h
IFSR_IFSR_MASK                           equ 00FFh

// Register: IBSR
#define IBSR IBSR
IBSR                                     equ 0068h
// bitfield definitions
IBSR_IBSR_POSN                           equ 0000h
IBSR_IBSR_POSITION                       equ 0000h
IBSR_IBSR_SIZE                           equ 0003h
IBSR_IBSR_LENGTH                         equ 0003h
IBSR_IBSR_MASK                           equ 0007h

// Register: OPACON
#define OPACON OPACON
OPACON                                   equ 0069h
// bitfield definitions
OPACON_OPA1ON_POSN                       equ 0000h
OPACON_OPA1ON_POSITION                   equ 0000h
OPACON_OPA1ON_SIZE                       equ 0001h
OPACON_OPA1ON_LENGTH                     equ 0001h
OPACON_OPA1ON_MASK                       equ 0001h
OPACON_OPA2ON_POSN                       equ 0001h
OPACON_OPA2ON_POSITION                   equ 0001h
OPACON_OPA2ON_SIZE                       equ 0001h
OPACON_OPA2ON_LENGTH                     equ 0001h
OPACON_OPA2ON_MASK                       equ 0002h

// Register: TRISA
#define TRISA TRISA

// Register: TRISB
#define TRISB TRISB

// Register: TRISC
#define TRISC TRISC

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 01FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 01Fh)
#endif
#define ADCS0                            BANKMASK(ADCON0), 6
#define ADCS1                            BANKMASK(ADCON0), 7
#define ADIE                             BANKMASK(INTCON1), 7
#define ADIF                             BANKMASK(INTCON0), 7
#define ADON                             BANKMASK(ADCON0), 0
#define ADRES0                           BANKMASK(ADRES), 0
#define ADRES1                           BANKMASK(ADRES), 1
#define ADRES2                           BANKMASK(ADRES), 2
#define ADRES3                           BANKMASK(ADRES), 3
#define ADRES4                           BANKMASK(ADRES), 4
#define ADRES5                           BANKMASK(ADRES), 5
#define ADRES6                           BANKMASK(ADRES), 6
#define ADRES7                           BANKMASK(ADRES), 7
#define ANS0                             BANKMASK(ANSEL), 0
#define ANS1                             BANKMASK(ANSEL), 1
#define ANS2                             BANKMASK(ANSEL), 2
#define ANS3                             BANKMASK(ANSEL), 3
#define ANS4                             BANKMASK(ANSEL), 4
#define ANS5                             BANKMASK(ANSEL), 5
#define ANS6                             BANKMASK(ANSEL), 6
#define ANS7                             BANKMASK(ANSEL), 7
#define C1NREF                           BANKMASK(CM1CON0), 2
#define C1ON                             BANKMASK(CM1CON0), 3
#define C1OUT                            BANKMASK(CM1CON0), 7
#define C1POL                            BANKMASK(CM1CON0), 5
#define C1PREF                           BANKMASK(CM1CON0), 1
#define C2NREF                           BANKMASK(CM2CON0), 2
#define C2ON                             BANKMASK(CM2CON0), 3
#define C2OUT                            BANKMASK(CM2CON0), 7
#define C2POL                            BANKMASK(CM2CON0), 5
#define C2PREF1                          BANKMASK(CM2CON0), 1
#define C2PREF2                          BANKMASK(CM2CON0), 4
#define CAL0                             BANKMASK(OSCCAL), 1
#define CAL1                             BANKMASK(OSCCAL), 2
#define CAL2                             BANKMASK(OSCCAL), 3
#define CAL3                             BANKMASK(OSCCAL), 4
#define CAL4                             BANKMASK(OSCCAL), 5
#define CAL5                             BANKMASK(OSCCAL), 6
#define CAL6                             BANKMASK(OSCCAL), 7
#define CARRY                            BANKMASK(STATUS), 0
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CWIE                             BANKMASK(INTCON1), 6
#define CWIF                             BANKMASK(INTCON0), 6
#define FREE                             BANKMASK(EECON), 4
#define GIE                              BANKMASK(INTCON0), 0
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define NOT_DONE                         BANKMASK(ADCON0), 1
#define OPA1ON                           BANKMASK(OPACON), 0
#define OPA2ON                           BANKMASK(OPACON), 1
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
#define RBIE                             BANKMASK(INTCON1), 4
#define RBIF                             BANKMASK(INTCON0), 4
#define RC0                              BANKMASK(PORTC), 0
#define RC1                              BANKMASK(PORTC), 1
#define RC2                              BANKMASK(PORTC), 2
#define RC3                              BANKMASK(PORTC), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC5                              BANKMASK(PORTC), 5
#define RC6                              BANKMASK(PORTC), 6
#define RC7                              BANKMASK(PORTC), 7
#define RD                               BANKMASK(EECON), 0
#define T0IE                             BANKMASK(INTCON1), 5
#define T0IF                             BANKMASK(INTCON0), 5
#define VR0                              BANKMASK(VRCON), 0
#define VR1                              BANKMASK(VRCON), 1
#define VR2                              BANKMASK(VRCON), 2
#define VR3                              BANKMASK(VRCON), 3
#define VREN                             BANKMASK(VRCON), 7
#define VROE1                            BANKMASK(VRCON), 6
#define VROE2                            BANKMASK(VRCON), 5
#define VRR                              BANKMASK(VRCON), 4
#define WR                               BANKMASK(EECON), 1
#define WREN                             BANKMASK(EECON), 2
#define WRERR                            BANKMASK(EECON), 3
#define WUR                              BANKMASK(INTCON1), 0
#define ZERO                             BANKMASK(STATUS), 2
#define nC1OUTEN                         BANKMASK(CM1CON0), 6
#define nC1T0CS                          BANKMASK(CM1CON0), 4
#define nC1WU                            BANKMASK(CM1CON0), 0
#define nC2OUTEN                         BANKMASK(CM2CON0), 6
#define nC2WU                            BANKMASK(CM2CON0), 0

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
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16F570_INC_
