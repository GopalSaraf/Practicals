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

#ifndef _PIC16LF707_INC_
#define _PIC16LF707_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF707
 */

/*
 * Device Registers
 */

// Register: INDF
#define INDF INDF
INDF                                     equ 0000h

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0001h

// Register: PCL
#define PCL PCL
PCL                                      equ 0002h

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
STATUS_RP_POSN                           equ 0005h
STATUS_RP_POSITION                       equ 0005h
STATUS_RP_SIZE                           equ 0002h
STATUS_RP_LENGTH                         equ 0002h
STATUS_RP_MASK                           equ 0060h
STATUS_IRP_POSN                          equ 0007h
STATUS_IRP_POSITION                      equ 0007h
STATUS_IRP_SIZE                          equ 0001h
STATUS_IRP_LENGTH                        equ 0001h
STATUS_IRP_MASK                          equ 0080h
STATUS_RP0_POSN                          equ 0005h
STATUS_RP0_POSITION                      equ 0005h
STATUS_RP0_SIZE                          equ 0001h
STATUS_RP0_LENGTH                        equ 0001h
STATUS_RP0_MASK                          equ 0020h
STATUS_RP1_POSN                          equ 0006h
STATUS_RP1_POSITION                      equ 0006h
STATUS_RP1_SIZE                          equ 0001h
STATUS_RP1_LENGTH                        equ 0001h
STATUS_RP1_MASK                          equ 0040h
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

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 0005h
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
PORTA_AN0_POSN                           equ 0000h
PORTA_AN0_POSITION                       equ 0000h
PORTA_AN0_SIZE                           equ 0001h
PORTA_AN0_LENGTH                         equ 0001h
PORTA_AN0_MASK                           equ 0001h
PORTA_AN1_POSN                           equ 0001h
PORTA_AN1_POSITION                       equ 0001h
PORTA_AN1_SIZE                           equ 0001h
PORTA_AN1_LENGTH                         equ 0001h
PORTA_AN1_MASK                           equ 0002h
PORTA_AN2_POSN                           equ 0002h
PORTA_AN2_POSITION                       equ 0002h
PORTA_AN2_SIZE                           equ 0001h
PORTA_AN2_LENGTH                         equ 0001h
PORTA_AN2_MASK                           equ 0004h
PORTA_AN3_POSN                           equ 0003h
PORTA_AN3_POSITION                       equ 0003h
PORTA_AN3_SIZE                           equ 0001h
PORTA_AN3_LENGTH                         equ 0001h
PORTA_AN3_MASK                           equ 0008h
PORTA_AN4_POSN                           equ 0005h
PORTA_AN4_POSITION                       equ 0005h
PORTA_AN4_SIZE                           equ 0001h
PORTA_AN4_LENGTH                         equ 0001h
PORTA_AN4_MASK                           equ 0020h
PORTA_OSC2_POSN                          equ 0006h
PORTA_OSC2_POSITION                      equ 0006h
PORTA_OSC2_SIZE                          equ 0001h
PORTA_OSC2_LENGTH                        equ 0001h
PORTA_OSC2_MASK                          equ 0040h
PORTA_OSC1_POSN                          equ 0007h
PORTA_OSC1_POSITION                      equ 0007h
PORTA_OSC1_SIZE                          equ 0001h
PORTA_OSC1_LENGTH                        equ 0001h
PORTA_OSC1_MASK                          equ 0080h
PORTA_CPSA0_POSN                         equ 0001h
PORTA_CPSA0_POSITION                     equ 0001h
PORTA_CPSA0_SIZE                         equ 0001h
PORTA_CPSA0_LENGTH                       equ 0001h
PORTA_CPSA0_MASK                         equ 0002h
PORTA_CPSA1_POSN                         equ 0002h
PORTA_CPSA1_POSITION                     equ 0002h
PORTA_CPSA1_SIZE                         equ 0001h
PORTA_CPSA1_LENGTH                       equ 0001h
PORTA_CPSA1_MASK                         equ 0004h
PORTA_CPSA2_POSN                         equ 0003h
PORTA_CPSA2_POSITION                     equ 0003h
PORTA_CPSA2_SIZE                         equ 0001h
PORTA_CPSA2_LENGTH                       equ 0001h
PORTA_CPSA2_MASK                         equ 0008h
PORTA_CPSA3_POSN                         equ 0004h
PORTA_CPSA3_POSITION                     equ 0004h
PORTA_CPSA3_SIZE                         equ 0001h
PORTA_CPSA3_LENGTH                       equ 0001h
PORTA_CPSA3_MASK                         equ 0010h
PORTA_CPSA4_POSN                         equ 0005h
PORTA_CPSA4_POSITION                     equ 0005h
PORTA_CPSA4_SIZE                         equ 0001h
PORTA_CPSA4_LENGTH                       equ 0001h
PORTA_CPSA4_MASK                         equ 0020h
PORTA_CPSB1_POSN                         equ 0006h
PORTA_CPSB1_POSITION                     equ 0006h
PORTA_CPSB1_SIZE                         equ 0001h
PORTA_CPSB1_LENGTH                       equ 0001h
PORTA_CPSB1_MASK                         equ 0040h
PORTA_CPSB0_POSN                         equ 0007h
PORTA_CPSB0_POSITION                     equ 0007h
PORTA_CPSB0_SIZE                         equ 0001h
PORTA_CPSB0_LENGTH                       equ 0001h
PORTA_CPSB0_MASK                         equ 0080h
PORTA_DACOUT_POSN                        equ 0002h
PORTA_DACOUT_POSITION                    equ 0002h
PORTA_DACOUT_SIZE                        equ 0001h
PORTA_DACOUT_LENGTH                      equ 0001h
PORTA_DACOUT_MASK                        equ 0004h
PORTA_T0CKI_POSN                         equ 0004h
PORTA_T0CKI_POSITION                     equ 0004h
PORTA_T0CKI_SIZE                         equ 0001h
PORTA_T0CKI_LENGTH                       equ 0001h
PORTA_T0CKI_MASK                         equ 0010h
PORTA_CLKOUT_POSN                        equ 0006h
PORTA_CLKOUT_POSITION                    equ 0006h
PORTA_CLKOUT_SIZE                        equ 0001h
PORTA_CLKOUT_LENGTH                      equ 0001h
PORTA_CLKOUT_MASK                        equ 0040h
PORTA_CLKIN_POSN                         equ 0007h
PORTA_CLKIN_POSITION                     equ 0007h
PORTA_CLKIN_SIZE                         equ 0001h
PORTA_CLKIN_LENGTH                       equ 0001h
PORTA_CLKIN_MASK                         equ 0080h
PORTA_TACKI_POSN                         equ 0004h
PORTA_TACKI_POSITION                     equ 0004h
PORTA_TACKI_SIZE                         equ 0001h
PORTA_TACKI_LENGTH                       equ 0001h
PORTA_TACKI_MASK                         equ 0010h

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 0006h
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
PORTB_AN12_POSN                          equ 0000h
PORTB_AN12_POSITION                      equ 0000h
PORTB_AN12_SIZE                          equ 0001h
PORTB_AN12_LENGTH                        equ 0001h
PORTB_AN12_MASK                          equ 0001h
PORTB_AN10_POSN                          equ 0001h
PORTB_AN10_POSITION                      equ 0001h
PORTB_AN10_SIZE                          equ 0001h
PORTB_AN10_LENGTH                        equ 0001h
PORTB_AN10_MASK                          equ 0002h
PORTB_AN8_POSN                           equ 0002h
PORTB_AN8_POSITION                       equ 0002h
PORTB_AN8_SIZE                           equ 0001h
PORTB_AN8_LENGTH                         equ 0001h
PORTB_AN8_MASK                           equ 0004h
PORTB_AN9_POSN                           equ 0003h
PORTB_AN9_POSITION                       equ 0003h
PORTB_AN9_SIZE                           equ 0001h
PORTB_AN9_LENGTH                         equ 0001h
PORTB_AN9_MASK                           equ 0008h
PORTB_AN11_POSN                          equ 0004h
PORTB_AN11_POSITION                      equ 0004h
PORTB_AN11_SIZE                          equ 0001h
PORTB_AN11_LENGTH                        equ 0001h
PORTB_AN11_MASK                          equ 0010h
PORTB_AN13_POSN                          equ 0005h
PORTB_AN13_POSITION                      equ 0005h
PORTB_AN13_SIZE                          equ 0001h
PORTB_AN13_LENGTH                        equ 0001h
PORTB_AN13_MASK                          equ 0020h
PORTB_CPSB8_POSN                         equ 0000h
PORTB_CPSB8_POSITION                     equ 0000h
PORTB_CPSB8_SIZE                         equ 0001h
PORTB_CPSB8_LENGTH                       equ 0001h
PORTB_CPSB8_MASK                         equ 0001h
PORTB_CPSB9_POSN                         equ 0001h
PORTB_CPSB9_POSITION                     equ 0001h
PORTB_CPSB9_SIZE                         equ 0001h
PORTB_CPSB9_LENGTH                       equ 0001h
PORTB_CPSB9_MASK                         equ 0002h
PORTB_CPSB10_POSN                        equ 0002h
PORTB_CPSB10_POSITION                    equ 0002h
PORTB_CPSB10_SIZE                        equ 0001h
PORTB_CPSB10_LENGTH                      equ 0001h
PORTB_CPSB10_MASK                        equ 0004h
PORTB_CPSB11_POSN                        equ 0003h
PORTB_CPSB11_POSITION                    equ 0003h
PORTB_CPSB11_SIZE                        equ 0001h
PORTB_CPSB11_LENGTH                      equ 0001h
PORTB_CPSB11_MASK                        equ 0008h
PORTB_CPSB12_POSN                        equ 0004h
PORTB_CPSB12_POSITION                    equ 0004h
PORTB_CPSB12_SIZE                        equ 0001h
PORTB_CPSB12_LENGTH                      equ 0001h
PORTB_CPSB12_MASK                        equ 0010h
PORTB_CPSB13_POSN                        equ 0005h
PORTB_CPSB13_POSITION                    equ 0005h
PORTB_CPSB13_SIZE                        equ 0001h
PORTB_CPSB13_LENGTH                      equ 0001h
PORTB_CPSB13_MASK                        equ 0020h
PORTB_CPSB14_POSN                        equ 0006h
PORTB_CPSB14_POSITION                    equ 0006h
PORTB_CPSB14_SIZE                        equ 0001h
PORTB_CPSB14_LENGTH                      equ 0001h
PORTB_CPSB14_MASK                        equ 0040h
PORTB_CPSB15_POSN                        equ 0007h
PORTB_CPSB15_POSITION                    equ 0007h
PORTB_CPSB15_SIZE                        equ 0001h
PORTB_CPSB15_LENGTH                      equ 0001h
PORTB_CPSB15_MASK                        equ 0080h
PORTB_CCP2_POSN                          equ 0003h
PORTB_CCP2_POSITION                      equ 0003h
PORTB_CCP2_SIZE                          equ 0001h
PORTB_CCP2_LENGTH                        equ 0001h
PORTB_CCP2_MASK                          equ 0008h
PORTB_T1G_POSN                           equ 0005h
PORTB_T1G_POSITION                       equ 0005h
PORTB_T1G_SIZE                           equ 0001h
PORTB_T1G_LENGTH                         equ 0001h
PORTB_T1G_MASK                           equ 0020h
PORTB_T3CKI_POSN                         equ 0005h
PORTB_T3CKI_POSITION                     equ 0005h
PORTB_T3CKI_SIZE                         equ 0001h
PORTB_T3CKI_LENGTH                       equ 0001h
PORTB_T3CKI_MASK                         equ 0020h

// Register: PORTC
#define PORTC PORTC
PORTC                                    equ 0007h
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
PORTC_CPSB2_POSN                         equ 0000h
PORTC_CPSB2_POSITION                     equ 0000h
PORTC_CPSB2_SIZE                         equ 0001h
PORTC_CPSB2_LENGTH                       equ 0001h
PORTC_CPSB2_MASK                         equ 0001h
PORTC_CPSB3_POSN                         equ 0001h
PORTC_CPSB3_POSITION                     equ 0001h
PORTC_CPSB3_SIZE                         equ 0001h
PORTC_CPSB3_LENGTH                       equ 0001h
PORTC_CPSB3_MASK                         equ 0002h
PORTC_CPSB4_POSN                         equ 0002h
PORTC_CPSB4_POSITION                     equ 0002h
PORTC_CPSB4_SIZE                         equ 0001h
PORTC_CPSB4_LENGTH                       equ 0001h
PORTC_CPSB4_MASK                         equ 0004h
PORTC_CPSA9_POSN                         equ 0005h
PORTC_CPSA9_POSITION                     equ 0005h
PORTC_CPSA9_SIZE                         equ 0001h
PORTC_CPSA9_LENGTH                       equ 0001h
PORTC_CPSA9_MASK                         equ 0020h
PORTC_CPSA10_POSN                        equ 0006h
PORTC_CPSA10_POSITION                    equ 0006h
PORTC_CPSA10_SIZE                        equ 0001h
PORTC_CPSA10_LENGTH                      equ 0001h
PORTC_CPSA10_MASK                        equ 0040h
PORTC_CPSA11_POSN                        equ 0007h
PORTC_CPSA11_POSITION                    equ 0007h
PORTC_CPSA11_SIZE                        equ 0001h
PORTC_CPSA11_LENGTH                      equ 0001h
PORTC_CPSA11_MASK                        equ 0080h
PORTC_T1OSO_POSN                         equ 0000h
PORTC_T1OSO_POSITION                     equ 0000h
PORTC_T1OSO_SIZE                         equ 0001h
PORTC_T1OSO_LENGTH                       equ 0001h
PORTC_T1OSO_MASK                         equ 0001h
PORTC_T1OSI_POSN                         equ 0001h
PORTC_T1OSI_POSITION                     equ 0001h
PORTC_T1OSI_SIZE                         equ 0001h
PORTC_T1OSI_LENGTH                       equ 0001h
PORTC_T1OSI_MASK                         equ 0002h
PORTC_TBCKI_POSN                         equ 0002h
PORTC_TBCKI_POSITION                     equ 0002h
PORTC_TBCKI_SIZE                         equ 0001h
PORTC_TBCKI_LENGTH                       equ 0001h
PORTC_TBCKI_MASK                         equ 0004h
PORTC_SCK_POSN                           equ 0003h
PORTC_SCK_POSITION                       equ 0003h
PORTC_SCK_SIZE                           equ 0001h
PORTC_SCK_LENGTH                         equ 0001h
PORTC_SCK_MASK                           equ 0008h
PORTC_SDI_POSN                           equ 0004h
PORTC_SDI_POSITION                       equ 0004h
PORTC_SDI_SIZE                           equ 0001h
PORTC_SDI_LENGTH                         equ 0001h
PORTC_SDI_MASK                           equ 0010h
PORTC_SDO_POSN                           equ 0005h
PORTC_SDO_POSITION                       equ 0005h
PORTC_SDO_SIZE                           equ 0001h
PORTC_SDO_LENGTH                         equ 0001h
PORTC_SDO_MASK                           equ 0020h
PORTC_TX_POSN                            equ 0006h
PORTC_TX_POSITION                        equ 0006h
PORTC_TX_SIZE                            equ 0001h
PORTC_TX_LENGTH                          equ 0001h
PORTC_TX_MASK                            equ 0040h
PORTC_RX_POSN                            equ 0007h
PORTC_RX_POSITION                        equ 0007h
PORTC_RX_SIZE                            equ 0001h
PORTC_RX_LENGTH                          equ 0001h
PORTC_RX_MASK                            equ 0080h
PORTC_T1CKI_POSN                         equ 0000h
PORTC_T1CKI_POSITION                     equ 0000h
PORTC_T1CKI_SIZE                         equ 0001h
PORTC_T1CKI_LENGTH                       equ 0001h
PORTC_T1CKI_MASK                         equ 0001h
PORTC_CCP2_POSN                          equ 0001h
PORTC_CCP2_POSITION                      equ 0001h
PORTC_CCP2_SIZE                          equ 0001h
PORTC_CCP2_LENGTH                        equ 0001h
PORTC_CCP2_MASK                          equ 0002h
PORTC_CCP1_POSN                          equ 0002h
PORTC_CCP1_POSITION                      equ 0002h
PORTC_CCP1_SIZE                          equ 0001h
PORTC_CCP1_LENGTH                        equ 0001h
PORTC_CCP1_MASK                          equ 0004h
PORTC_SCL_POSN                           equ 0003h
PORTC_SCL_POSITION                       equ 0003h
PORTC_SCL_SIZE                           equ 0001h
PORTC_SCL_LENGTH                         equ 0001h
PORTC_SCL_MASK                           equ 0008h
PORTC_SDA_POSN                           equ 0004h
PORTC_SDA_POSITION                       equ 0004h
PORTC_SDA_SIZE                           equ 0001h
PORTC_SDA_LENGTH                         equ 0001h
PORTC_SDA_MASK                           equ 0010h
PORTC_CK_POSN                            equ 0006h
PORTC_CK_POSITION                        equ 0006h
PORTC_CK_SIZE                            equ 0001h
PORTC_CK_LENGTH                          equ 0001h
PORTC_CK_MASK                            equ 0040h
PORTC_DT_POSN                            equ 0007h
PORTC_DT_POSITION                        equ 0007h
PORTC_DT_SIZE                            equ 0001h
PORTC_DT_LENGTH                          equ 0001h
PORTC_DT_MASK                            equ 0080h

// Register: PORTD
#define PORTD PORTD
PORTD                                    equ 0008h
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
PORTD_CPSB5_POSN                         equ 0000h
PORTD_CPSB5_POSITION                     equ 0000h
PORTD_CPSB5_SIZE                         equ 0001h
PORTD_CPSB5_LENGTH                       equ 0001h
PORTD_CPSB5_MASK                         equ 0001h
PORTD_CPSB6_POSN                         equ 0001h
PORTD_CPSB6_POSITION                     equ 0001h
PORTD_CPSB6_SIZE                         equ 0001h
PORTD_CPSB6_LENGTH                       equ 0001h
PORTD_CPSB6_MASK                         equ 0002h
PORTD_CPSB7_POSN                         equ 0002h
PORTD_CPSB7_POSITION                     equ 0002h
PORTD_CPSB7_SIZE                         equ 0001h
PORTD_CPSB7_LENGTH                       equ 0001h
PORTD_CPSB7_MASK                         equ 0004h
PORTD_CPSA8_POSN                         equ 0003h
PORTD_CPSA8_POSITION                     equ 0003h
PORTD_CPSA8_SIZE                         equ 0001h
PORTD_CPSA8_LENGTH                       equ 0001h
PORTD_CPSA8_MASK                         equ 0008h
PORTD_CPSA12_POSN                        equ 0004h
PORTD_CPSA12_POSITION                    equ 0004h
PORTD_CPSA12_SIZE                        equ 0001h
PORTD_CPSA12_LENGTH                      equ 0001h
PORTD_CPSA12_MASK                        equ 0010h
PORTD_CPSA13_POSN                        equ 0005h
PORTD_CPSA13_POSITION                    equ 0005h
PORTD_CPSA13_SIZE                        equ 0001h
PORTD_CPSA13_LENGTH                      equ 0001h
PORTD_CPSA13_MASK                        equ 0020h
PORTD_CPSA14_POSN                        equ 0006h
PORTD_CPSA14_POSITION                    equ 0006h
PORTD_CPSA14_SIZE                        equ 0001h
PORTD_CPSA14_LENGTH                      equ 0001h
PORTD_CPSA14_MASK                        equ 0040h
PORTD_CPSA15_POSN                        equ 0007h
PORTD_CPSA15_POSITION                    equ 0007h
PORTD_CPSA15_SIZE                        equ 0001h
PORTD_CPSA15_LENGTH                      equ 0001h
PORTD_CPSA15_MASK                        equ 0080h
PORTD_T3G_POSN                           equ 0000h
PORTD_T3G_POSITION                       equ 0000h
PORTD_T3G_SIZE                           equ 0001h
PORTD_T3G_LENGTH                         equ 0001h
PORTD_T3G_MASK                           equ 0001h

// Register: PORTE
#define PORTE PORTE
PORTE                                    equ 0009h
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
PORTE_AN5_POSN                           equ 0000h
PORTE_AN5_POSITION                       equ 0000h
PORTE_AN5_SIZE                           equ 0001h
PORTE_AN5_LENGTH                         equ 0001h
PORTE_AN5_MASK                           equ 0001h
PORTE_AN6_POSN                           equ 0001h
PORTE_AN6_POSITION                       equ 0001h
PORTE_AN6_SIZE                           equ 0001h
PORTE_AN6_LENGTH                         equ 0001h
PORTE_AN6_MASK                           equ 0002h
PORTE_AN7_POSN                           equ 0002h
PORTE_AN7_POSITION                       equ 0002h
PORTE_AN7_SIZE                           equ 0001h
PORTE_AN7_LENGTH                         equ 0001h
PORTE_AN7_MASK                           equ 0004h
PORTE_nMCLR_POSN                         equ 0003h
PORTE_nMCLR_POSITION                     equ 0003h
PORTE_nMCLR_SIZE                         equ 0001h
PORTE_nMCLR_LENGTH                       equ 0001h
PORTE_nMCLR_MASK                         equ 0008h
PORTE_CPSA5_POSN                         equ 0000h
PORTE_CPSA5_POSITION                     equ 0000h
PORTE_CPSA5_SIZE                         equ 0001h
PORTE_CPSA5_LENGTH                       equ 0001h
PORTE_CPSA5_MASK                         equ 0001h
PORTE_CPSA6_POSN                         equ 0001h
PORTE_CPSA6_POSITION                     equ 0001h
PORTE_CPSA6_SIZE                         equ 0001h
PORTE_CPSA6_LENGTH                       equ 0001h
PORTE_CPSA6_MASK                         equ 0002h
PORTE_CPSA7_POSN                         equ 0002h
PORTE_CPSA7_POSITION                     equ 0002h
PORTE_CPSA7_SIZE                         equ 0001h
PORTE_CPSA7_LENGTH                       equ 0001h
PORTE_CPSA7_MASK                         equ 0004h

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah
// bitfield definitions
PCLATH_PCLATH_POSN                       equ 0000h
PCLATH_PCLATH_POSITION                   equ 0000h
PCLATH_PCLATH_SIZE                       equ 0005h
PCLATH_PCLATH_LENGTH                     equ 0005h
PCLATH_PCLATH_MASK                       equ 001Fh

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 000Bh
// bitfield definitions
INTCON_RBIF_POSN                         equ 0000h
INTCON_RBIF_POSITION                     equ 0000h
INTCON_RBIF_SIZE                         equ 0001h
INTCON_RBIF_LENGTH                       equ 0001h
INTCON_RBIF_MASK                         equ 0001h
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
INTCON_RBIE_POSN                         equ 0003h
INTCON_RBIE_POSITION                     equ 0003h
INTCON_RBIE_SIZE                         equ 0001h
INTCON_RBIE_LENGTH                       equ 0001h
INTCON_RBIE_MASK                         equ 0008h
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

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 000Ch
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
PIR2                                     equ 000Dh
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_TMRAIF_POSN                         equ 0004h
PIR2_TMRAIF_POSITION                     equ 0004h
PIR2_TMRAIF_SIZE                         equ 0001h
PIR2_TMRAIF_LENGTH                       equ 0001h
PIR2_TMRAIF_MASK                         equ 0010h
PIR2_TMRBIF_POSN                         equ 0005h
PIR2_TMRBIF_POSITION                     equ 0005h
PIR2_TMRBIF_SIZE                         equ 0001h
PIR2_TMRBIF_LENGTH                       equ 0001h
PIR2_TMRBIF_MASK                         equ 0020h
PIR2_TMR3IF_POSN                         equ 0006h
PIR2_TMR3IF_POSITION                     equ 0006h
PIR2_TMR3IF_SIZE                         equ 0001h
PIR2_TMR3IF_LENGTH                       equ 0001h
PIR2_TMR3IF_MASK                         equ 0040h
PIR2_TMR3GIF_POSN                        equ 0007h
PIR2_TMR3GIF_POSITION                    equ 0007h
PIR2_TMR3GIF_SIZE                        equ 0001h
PIR2_TMR3GIF_LENGTH                      equ 0001h
PIR2_TMR3GIF_MASK                        equ 0080h

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 000Eh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 000Fh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0010h
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
T1CON_T1SYNC_POSN                        equ 0002h
T1CON_T1SYNC_POSITION                    equ 0002h
T1CON_T1SYNC_SIZE                        equ 0001h
T1CON_T1SYNC_LENGTH                      equ 0001h
T1CON_T1SYNC_MASK                        equ 0004h
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
T1CON_TMRCS0_POSN                        equ 0006h
T1CON_TMRCS0_POSITION                    equ 0006h
T1CON_TMRCS0_SIZE                        equ 0001h
T1CON_TMRCS0_LENGTH                      equ 0001h
T1CON_TMRCS0_MASK                        equ 0040h
T1CON_TMRCS1_POSN                        equ 0007h
T1CON_TMRCS1_POSITION                    equ 0007h
T1CON_TMRCS1_SIZE                        equ 0001h
T1CON_TMRCS1_LENGTH                      equ 0001h
T1CON_TMRCS1_MASK                        equ 0080h

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 0011h

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0012h
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
T2CON_TOUTPS_POSN                        equ 0003h
T2CON_TOUTPS_POSITION                    equ 0003h
T2CON_TOUTPS_SIZE                        equ 0004h
T2CON_TOUTPS_LENGTH                      equ 0004h
T2CON_TOUTPS_MASK                        equ 0078h
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
T2CON_TOUTPS0_POSN                       equ 0003h
T2CON_TOUTPS0_POSITION                   equ 0003h
T2CON_TOUTPS0_SIZE                       equ 0001h
T2CON_TOUTPS0_LENGTH                     equ 0001h
T2CON_TOUTPS0_MASK                       equ 0008h
T2CON_TOUTPS1_POSN                       equ 0004h
T2CON_TOUTPS1_POSITION                   equ 0004h
T2CON_TOUTPS1_SIZE                       equ 0001h
T2CON_TOUTPS1_LENGTH                     equ 0001h
T2CON_TOUTPS1_MASK                       equ 0010h
T2CON_TOUTPS2_POSN                       equ 0005h
T2CON_TOUTPS2_POSITION                   equ 0005h
T2CON_TOUTPS2_SIZE                       equ 0001h
T2CON_TOUTPS2_LENGTH                     equ 0001h
T2CON_TOUTPS2_MASK                       equ 0020h
T2CON_TOUTPS3_POSN                       equ 0006h
T2CON_TOUTPS3_POSITION                   equ 0006h
T2CON_TOUTPS3_SIZE                       equ 0001h
T2CON_TOUTPS3_LENGTH                     equ 0001h
T2CON_TOUTPS3_MASK                       equ 0040h

// Register: SSPBUF
#define SSPBUF SSPBUF
SSPBUF                                   equ 0013h

// Register: SSPCON
#define SSPCON SSPCON
SSPCON                                   equ 0014h
// bitfield definitions
SSPCON_SSPM_POSN                         equ 0000h
SSPCON_SSPM_POSITION                     equ 0000h
SSPCON_SSPM_SIZE                         equ 0004h
SSPCON_SSPM_LENGTH                       equ 0004h
SSPCON_SSPM_MASK                         equ 000Fh
SSPCON_CKP_POSN                          equ 0004h
SSPCON_CKP_POSITION                      equ 0004h
SSPCON_CKP_SIZE                          equ 0001h
SSPCON_CKP_LENGTH                        equ 0001h
SSPCON_CKP_MASK                          equ 0010h
SSPCON_SSPEN_POSN                        equ 0005h
SSPCON_SSPEN_POSITION                    equ 0005h
SSPCON_SSPEN_SIZE                        equ 0001h
SSPCON_SSPEN_LENGTH                      equ 0001h
SSPCON_SSPEN_MASK                        equ 0020h
SSPCON_SSPOV_POSN                        equ 0006h
SSPCON_SSPOV_POSITION                    equ 0006h
SSPCON_SSPOV_SIZE                        equ 0001h
SSPCON_SSPOV_LENGTH                      equ 0001h
SSPCON_SSPOV_MASK                        equ 0040h
SSPCON_WCOL_POSN                         equ 0007h
SSPCON_WCOL_POSITION                     equ 0007h
SSPCON_WCOL_SIZE                         equ 0001h
SSPCON_WCOL_LENGTH                       equ 0001h
SSPCON_WCOL_MASK                         equ 0080h
SSPCON_SSPM0_POSN                        equ 0000h
SSPCON_SSPM0_POSITION                    equ 0000h
SSPCON_SSPM0_SIZE                        equ 0001h
SSPCON_SSPM0_LENGTH                      equ 0001h
SSPCON_SSPM0_MASK                        equ 0001h
SSPCON_SSPM1_POSN                        equ 0001h
SSPCON_SSPM1_POSITION                    equ 0001h
SSPCON_SSPM1_SIZE                        equ 0001h
SSPCON_SSPM1_LENGTH                      equ 0001h
SSPCON_SSPM1_MASK                        equ 0002h
SSPCON_SSPM2_POSN                        equ 0002h
SSPCON_SSPM2_POSITION                    equ 0002h
SSPCON_SSPM2_SIZE                        equ 0001h
SSPCON_SSPM2_LENGTH                      equ 0001h
SSPCON_SSPM2_MASK                        equ 0004h
SSPCON_SSPM3_POSN                        equ 0003h
SSPCON_SSPM3_POSITION                    equ 0003h
SSPCON_SSPM3_SIZE                        equ 0001h
SSPCON_SSPM3_LENGTH                      equ 0001h
SSPCON_SSPM3_MASK                        equ 0008h

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0015h

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0016h

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0017h
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

// Register: RCSTA
#define RCSTA RCSTA
RCSTA                                    equ 0018h
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

// Register: TXREG
#define TXREG TXREG
TXREG                                    equ 0019h

// Register: RCREG
#define RCREG RCREG
RCREG                                    equ 001Ah

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 001Bh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 001Ch

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 001Dh
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

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 001Eh

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 001Fh
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

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
OPTION_REG                               equ 0081h
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
OPTION_REG_nRBPU_POSN                    equ 0007h
OPTION_REG_nRBPU_POSITION                equ 0007h
OPTION_REG_nRBPU_SIZE                    equ 0001h
OPTION_REG_nRBPU_LENGTH                  equ 0001h
OPTION_REG_nRBPU_MASK                    equ 0080h
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

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0085h
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
TRISB                                    equ 0086h
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
TRISC                                    equ 0087h
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
TRISD                                    equ 0088h
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
TRISE                                    equ 0089h
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
PIE1                                     equ 008Ch
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
PIE2                                     equ 008Dh
// bitfield definitions
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h
PIE2_TMRAIE_POSN                         equ 0004h
PIE2_TMRAIE_POSITION                     equ 0004h
PIE2_TMRAIE_SIZE                         equ 0001h
PIE2_TMRAIE_LENGTH                       equ 0001h
PIE2_TMRAIE_MASK                         equ 0010h
PIE2_TMRBIE_POSN                         equ 0005h
PIE2_TMRBIE_POSITION                     equ 0005h
PIE2_TMRBIE_SIZE                         equ 0001h
PIE2_TMRBIE_LENGTH                       equ 0001h
PIE2_TMRBIE_MASK                         equ 0020h
PIE2_TMR3IE_POSN                         equ 0006h
PIE2_TMR3IE_POSITION                     equ 0006h
PIE2_TMR3IE_SIZE                         equ 0001h
PIE2_TMR3IE_LENGTH                       equ 0001h
PIE2_TMR3IE_MASK                         equ 0040h
PIE2_TMR3GIE_POSN                        equ 0007h
PIE2_TMR3GIE_POSITION                    equ 0007h
PIE2_TMR3GIE_SIZE                        equ 0001h
PIE2_TMR3GIE_LENGTH                      equ 0001h
PIE2_TMR3GIE_MASK                        equ 0080h

// Register: PCON
#define PCON PCON
PCON                                     equ 008Eh
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

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 008Fh
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

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0090h
// bitfield definitions
OSCCON_ICSS_POSN                         equ 0002h
OSCCON_ICSS_POSITION                     equ 0002h
OSCCON_ICSS_SIZE                         equ 0001h
OSCCON_ICSS_LENGTH                       equ 0001h
OSCCON_ICSS_MASK                         equ 0004h
OSCCON_ICSL_POSN                         equ 0003h
OSCCON_ICSL_POSITION                     equ 0003h
OSCCON_ICSL_SIZE                         equ 0001h
OSCCON_ICSL_LENGTH                       equ 0001h
OSCCON_ICSL_MASK                         equ 0008h
OSCCON_IRCF_POSN                         equ 0004h
OSCCON_IRCF_POSITION                     equ 0004h
OSCCON_IRCF_SIZE                         equ 0002h
OSCCON_IRCF_LENGTH                       equ 0002h
OSCCON_IRCF_MASK                         equ 0030h
OSCCON_IRCF0_POSN                        equ 0004h
OSCCON_IRCF0_POSITION                    equ 0004h
OSCCON_IRCF0_SIZE                        equ 0001h
OSCCON_IRCF0_LENGTH                      equ 0001h
OSCCON_IRCF0_MASK                        equ 0010h
OSCCON_IRCF1_POSN                        equ 0005h
OSCCON_IRCF1_POSITION                    equ 0005h
OSCCON_IRCF1_SIZE                        equ 0001h
OSCCON_IRCF1_LENGTH                      equ 0001h
OSCCON_IRCF1_MASK                        equ 0020h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0091h
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0006h
OSCTUNE_TUN_LENGTH                       equ 0006h
OSCTUNE_TUN_MASK                         equ 003Fh

// Register: PR2
#define PR2 PR2
PR2                                      equ 0092h

// Register: SSPADD
#define SSPADD SSPADD
SSPADD                                   equ 0093h
// bitfield definitions
SSPADD_SSPADD_POSN                       equ 0000h
SSPADD_SSPADD_POSITION                   equ 0000h
SSPADD_SSPADD_SIZE                       equ 0008h
SSPADD_SSPADD_LENGTH                     equ 0008h
SSPADD_SSPADD_MASK                       equ 00FFh

// Register: SSPMSK
#define SSPMSK SSPMSK
SSPMSK                                   equ 0093h
// bitfield definitions
SSPMSK_SSPMSK_POSN                       equ 0000h
SSPMSK_SSPMSK_POSITION                   equ 0000h
SSPMSK_SSPMSK_SIZE                       equ 0008h
SSPMSK_SSPMSK_LENGTH                     equ 0008h
SSPMSK_SSPMSK_MASK                       equ 00FFh

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
SSPSTAT                                  equ 0094h
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

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 0095h
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

// Register: IOCB
#define IOCB IOCB
IOCB                                     equ 0096h
// bitfield definitions
IOCB_IOCB0_POSN                          equ 0000h
IOCB_IOCB0_POSITION                      equ 0000h
IOCB_IOCB0_SIZE                          equ 0001h
IOCB_IOCB0_LENGTH                        equ 0001h
IOCB_IOCB0_MASK                          equ 0001h
IOCB_IOCB1_POSN                          equ 0001h
IOCB_IOCB1_POSITION                      equ 0001h
IOCB_IOCB1_SIZE                          equ 0001h
IOCB_IOCB1_LENGTH                        equ 0001h
IOCB_IOCB1_MASK                          equ 0002h
IOCB_IOCB2_POSN                          equ 0002h
IOCB_IOCB2_POSITION                      equ 0002h
IOCB_IOCB2_SIZE                          equ 0001h
IOCB_IOCB2_LENGTH                        equ 0001h
IOCB_IOCB2_MASK                          equ 0004h
IOCB_IOCB3_POSN                          equ 0003h
IOCB_IOCB3_POSITION                      equ 0003h
IOCB_IOCB3_SIZE                          equ 0001h
IOCB_IOCB3_LENGTH                        equ 0001h
IOCB_IOCB3_MASK                          equ 0008h
IOCB_IOCB4_POSN                          equ 0004h
IOCB_IOCB4_POSITION                      equ 0004h
IOCB_IOCB4_SIZE                          equ 0001h
IOCB_IOCB4_LENGTH                        equ 0001h
IOCB_IOCB4_MASK                          equ 0010h
IOCB_IOCB5_POSN                          equ 0005h
IOCB_IOCB5_POSITION                      equ 0005h
IOCB_IOCB5_SIZE                          equ 0001h
IOCB_IOCB5_LENGTH                        equ 0001h
IOCB_IOCB5_MASK                          equ 0020h
IOCB_IOCB6_POSN                          equ 0006h
IOCB_IOCB6_POSITION                      equ 0006h
IOCB_IOCB6_SIZE                          equ 0001h
IOCB_IOCB6_LENGTH                        equ 0001h
IOCB_IOCB6_MASK                          equ 0040h
IOCB_IOCB7_POSN                          equ 0007h
IOCB_IOCB7_POSITION                      equ 0007h
IOCB_IOCB7_SIZE                          equ 0001h
IOCB_IOCB7_LENGTH                        equ 0001h
IOCB_IOCB7_MASK                          equ 0080h

// Register: T3CON
#define T3CON T3CON
T3CON                                    equ 0097h
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

// Register: TXSTA
#define TXSTA TXSTA
TXSTA                                    equ 0098h
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

// Register: SPBRG
#define SPBRG SPBRG
SPBRG                                    equ 0099h

// Register: TMR3L
#define TMR3L TMR3L
TMR3L                                    equ 009Ah

// Register: TMR3H
#define TMR3H TMR3H
TMR3H                                    equ 009Bh

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 009Ch
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

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 009Dh
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
FVRCON_FVREN_POSN                        equ 0006h
FVRCON_FVREN_POSITION                    equ 0006h
FVRCON_FVREN_SIZE                        equ 0001h
FVRCON_FVREN_LENGTH                      equ 0001h
FVRCON_FVREN_MASK                        equ 0040h
FVRCON_FVRRDY_POSN                       equ 0007h
FVRCON_FVRRDY_POSITION                   equ 0007h
FVRCON_FVRRDY_SIZE                       equ 0001h
FVRCON_FVRRDY_LENGTH                     equ 0001h
FVRCON_FVRRDY_MASK                       equ 0080h
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

// Register: T3GCON
#define T3GCON T3GCON
T3GCON                                   equ 009Eh
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

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Fh
// bitfield definitions
ADCON1_ADREF_POSN                        equ 0000h
ADCON1_ADREF_POSITION                    equ 0000h
ADCON1_ADREF_SIZE                        equ 0002h
ADCON1_ADREF_LENGTH                      equ 0002h
ADCON1_ADREF_MASK                        equ 0003h
ADCON1_ADCS_POSN                         equ 0004h
ADCON1_ADCS_POSITION                     equ 0004h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0070h
ADCON1_ADREF0_POSN                       equ 0000h
ADCON1_ADREF0_POSITION                   equ 0000h
ADCON1_ADREF0_SIZE                       equ 0001h
ADCON1_ADREF0_LENGTH                     equ 0001h
ADCON1_ADREF0_MASK                       equ 0001h
ADCON1_ADREF1_POSN                       equ 0001h
ADCON1_ADREF1_POSITION                   equ 0001h
ADCON1_ADREF1_SIZE                       equ 0001h
ADCON1_ADREF1_LENGTH                     equ 0001h
ADCON1_ADREF1_MASK                       equ 0002h
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

// Register: TACON
#define TACON TACON
TACON                                    equ 0105h
// bitfield definitions
TACON_TAPS_POSN                          equ 0000h
TACON_TAPS_POSITION                      equ 0000h
TACON_TAPS_SIZE                          equ 0003h
TACON_TAPS_LENGTH                        equ 0003h
TACON_TAPS_MASK                          equ 0007h
TACON_TAPSA_POSN                         equ 0003h
TACON_TAPSA_POSITION                     equ 0003h
TACON_TAPSA_SIZE                         equ 0001h
TACON_TAPSA_LENGTH                       equ 0001h
TACON_TAPSA_MASK                         equ 0008h
TACON_TASE_POSN                          equ 0004h
TACON_TASE_POSITION                      equ 0004h
TACON_TASE_SIZE                          equ 0001h
TACON_TASE_LENGTH                        equ 0001h
TACON_TASE_MASK                          equ 0010h
TACON_TACS_POSN                          equ 0005h
TACON_TACS_POSITION                      equ 0005h
TACON_TACS_SIZE                          equ 0001h
TACON_TACS_LENGTH                        equ 0001h
TACON_TACS_MASK                          equ 0020h
TACON_TMRAON_POSN                        equ 0007h
TACON_TMRAON_POSITION                    equ 0007h
TACON_TMRAON_SIZE                        equ 0001h
TACON_TMRAON_LENGTH                      equ 0001h
TACON_TMRAON_MASK                        equ 0080h
TACON_TAPS0_POSN                         equ 0000h
TACON_TAPS0_POSITION                     equ 0000h
TACON_TAPS0_SIZE                         equ 0001h
TACON_TAPS0_LENGTH                       equ 0001h
TACON_TAPS0_MASK                         equ 0001h
TACON_TAPS1_POSN                         equ 0001h
TACON_TAPS1_POSITION                     equ 0001h
TACON_TAPS1_SIZE                         equ 0001h
TACON_TAPS1_LENGTH                       equ 0001h
TACON_TAPS1_MASK                         equ 0002h
TACON_TAPS2_POSN                         equ 0002h
TACON_TAPS2_POSITION                     equ 0002h
TACON_TAPS2_SIZE                         equ 0001h
TACON_TAPS2_LENGTH                       equ 0001h
TACON_TAPS2_MASK                         equ 0004h
TACON_TMRAPS_POSN                        equ 0000h
TACON_TMRAPS_POSITION                    equ 0000h
TACON_TMRAPS_SIZE                        equ 0003h
TACON_TMRAPS_LENGTH                      equ 0003h
TACON_TMRAPS_MASK                        equ 0007h
TACON_TMRAPSA_POSN                       equ 0003h
TACON_TMRAPSA_POSITION                   equ 0003h
TACON_TMRAPSA_SIZE                       equ 0001h
TACON_TMRAPSA_LENGTH                     equ 0001h
TACON_TMRAPSA_MASK                       equ 0008h
TACON_TMRASE_POSN                        equ 0004h
TACON_TMRASE_POSITION                    equ 0004h
TACON_TMRASE_SIZE                        equ 0001h
TACON_TMRASE_LENGTH                      equ 0001h
TACON_TMRASE_MASK                        equ 0010h
TACON_TMRACS_POSN                        equ 0005h
TACON_TMRACS_POSITION                    equ 0005h
TACON_TMRACS_SIZE                        equ 0001h
TACON_TMRACS_LENGTH                      equ 0001h
TACON_TMRACS_MASK                        equ 0020h
TACON_TMRAPS0_POSN                       equ 0000h
TACON_TMRAPS0_POSITION                   equ 0000h
TACON_TMRAPS0_SIZE                       equ 0001h
TACON_TMRAPS0_LENGTH                     equ 0001h
TACON_TMRAPS0_MASK                       equ 0001h
TACON_TMRAPS1_POSN                       equ 0001h
TACON_TMRAPS1_POSITION                   equ 0001h
TACON_TMRAPS1_SIZE                       equ 0001h
TACON_TMRAPS1_LENGTH                     equ 0001h
TACON_TMRAPS1_MASK                       equ 0002h
TACON_TMRAPS2_POSN                       equ 0002h
TACON_TMRAPS2_POSITION                   equ 0002h
TACON_TMRAPS2_SIZE                       equ 0001h
TACON_TMRAPS2_LENGTH                     equ 0001h
TACON_TMRAPS2_MASK                       equ 0004h

// Register: CPSBCON0
#define CPSBCON0 CPSBCON0
CPSBCON0                                 equ 0106h
// bitfield definitions
CPSBCON0_TBXCS_POSN                      equ 0000h
CPSBCON0_TBXCS_POSITION                  equ 0000h
CPSBCON0_TBXCS_SIZE                      equ 0001h
CPSBCON0_TBXCS_LENGTH                    equ 0001h
CPSBCON0_TBXCS_MASK                      equ 0001h
CPSBCON0_CPSBOUT_POSN                    equ 0001h
CPSBCON0_CPSBOUT_POSITION                equ 0001h
CPSBCON0_CPSBOUT_SIZE                    equ 0001h
CPSBCON0_CPSBOUT_LENGTH                  equ 0001h
CPSBCON0_CPSBOUT_MASK                    equ 0002h
CPSBCON0_CPSBRNG_POSN                    equ 0002h
CPSBCON0_CPSBRNG_POSITION                equ 0002h
CPSBCON0_CPSBRNG_SIZE                    equ 0002h
CPSBCON0_CPSBRNG_LENGTH                  equ 0002h
CPSBCON0_CPSBRNG_MASK                    equ 000Ch
CPSBCON0_CPSBRM_POSN                     equ 0006h
CPSBCON0_CPSBRM_POSITION                 equ 0006h
CPSBCON0_CPSBRM_SIZE                     equ 0001h
CPSBCON0_CPSBRM_LENGTH                   equ 0001h
CPSBCON0_CPSBRM_MASK                     equ 0040h
CPSBCON0_CPSBON_POSN                     equ 0007h
CPSBCON0_CPSBON_POSITION                 equ 0007h
CPSBCON0_CPSBON_SIZE                     equ 0001h
CPSBCON0_CPSBON_LENGTH                   equ 0001h
CPSBCON0_CPSBON_MASK                     equ 0080h
CPSBCON0_CPSBRNG0_POSN                   equ 0002h
CPSBCON0_CPSBRNG0_POSITION               equ 0002h
CPSBCON0_CPSBRNG0_SIZE                   equ 0001h
CPSBCON0_CPSBRNG0_LENGTH                 equ 0001h
CPSBCON0_CPSBRNG0_MASK                   equ 0004h
CPSBCON0_CPSBRNG1_POSN                   equ 0003h
CPSBCON0_CPSBRNG1_POSITION               equ 0003h
CPSBCON0_CPSBRNG1_SIZE                   equ 0001h
CPSBCON0_CPSBRNG1_LENGTH                 equ 0001h
CPSBCON0_CPSBRNG1_MASK                   equ 0008h

// Register: CPSBCON1
#define CPSBCON1 CPSBCON1
CPSBCON1                                 equ 0107h
// bitfield definitions
CPSBCON1_CPSBCH_POSN                     equ 0000h
CPSBCON1_CPSBCH_POSITION                 equ 0000h
CPSBCON1_CPSBCH_SIZE                     equ 0004h
CPSBCON1_CPSBCH_LENGTH                   equ 0004h
CPSBCON1_CPSBCH_MASK                     equ 000Fh
CPSBCON1_CPSBCH0_POSN                    equ 0000h
CPSBCON1_CPSBCH0_POSITION                equ 0000h
CPSBCON1_CPSBCH0_SIZE                    equ 0001h
CPSBCON1_CPSBCH0_LENGTH                  equ 0001h
CPSBCON1_CPSBCH0_MASK                    equ 0001h
CPSBCON1_CPSBCH1_POSN                    equ 0001h
CPSBCON1_CPSBCH1_POSITION                equ 0001h
CPSBCON1_CPSBCH1_SIZE                    equ 0001h
CPSBCON1_CPSBCH1_LENGTH                  equ 0001h
CPSBCON1_CPSBCH1_MASK                    equ 0002h
CPSBCON1_CPSBCH2_POSN                    equ 0002h
CPSBCON1_CPSBCH2_POSITION                equ 0002h
CPSBCON1_CPSBCH2_SIZE                    equ 0001h
CPSBCON1_CPSBCH2_LENGTH                  equ 0001h
CPSBCON1_CPSBCH2_MASK                    equ 0004h
CPSBCON1_CPSBCH3_POSN                    equ 0003h
CPSBCON1_CPSBCH3_POSITION                equ 0003h
CPSBCON1_CPSBCH3_SIZE                    equ 0001h
CPSBCON1_CPSBCH3_LENGTH                  equ 0001h
CPSBCON1_CPSBCH3_MASK                    equ 0008h

// Register: CPSACON0
#define CPSACON0 CPSACON0
CPSACON0                                 equ 0108h
// bitfield definitions
CPSACON0_TAXCS_POSN                      equ 0000h
CPSACON0_TAXCS_POSITION                  equ 0000h
CPSACON0_TAXCS_SIZE                      equ 0001h
CPSACON0_TAXCS_LENGTH                    equ 0001h
CPSACON0_TAXCS_MASK                      equ 0001h
CPSACON0_CPSAOUT_POSN                    equ 0001h
CPSACON0_CPSAOUT_POSITION                equ 0001h
CPSACON0_CPSAOUT_SIZE                    equ 0001h
CPSACON0_CPSAOUT_LENGTH                  equ 0001h
CPSACON0_CPSAOUT_MASK                    equ 0002h
CPSACON0_CPSARNG_POSN                    equ 0002h
CPSACON0_CPSARNG_POSITION                equ 0002h
CPSACON0_CPSARNG_SIZE                    equ 0002h
CPSACON0_CPSARNG_LENGTH                  equ 0002h
CPSACON0_CPSARNG_MASK                    equ 000Ch
CPSACON0_CPSARM_POSN                     equ 0006h
CPSACON0_CPSARM_POSITION                 equ 0006h
CPSACON0_CPSARM_SIZE                     equ 0001h
CPSACON0_CPSARM_LENGTH                   equ 0001h
CPSACON0_CPSARM_MASK                     equ 0040h
CPSACON0_CPSAON_POSN                     equ 0007h
CPSACON0_CPSAON_POSITION                 equ 0007h
CPSACON0_CPSAON_SIZE                     equ 0001h
CPSACON0_CPSAON_LENGTH                   equ 0001h
CPSACON0_CPSAON_MASK                     equ 0080h
CPSACON0_CPSARNG0_POSN                   equ 0002h
CPSACON0_CPSARNG0_POSITION               equ 0002h
CPSACON0_CPSARNG0_SIZE                   equ 0001h
CPSACON0_CPSARNG0_LENGTH                 equ 0001h
CPSACON0_CPSARNG0_MASK                   equ 0004h
CPSACON0_CPSARNG1_POSN                   equ 0003h
CPSACON0_CPSARNG1_POSITION               equ 0003h
CPSACON0_CPSARNG1_SIZE                   equ 0001h
CPSACON0_CPSARNG1_LENGTH                 equ 0001h
CPSACON0_CPSARNG1_MASK                   equ 0008h

// Register: CPSACON1
#define CPSACON1 CPSACON1
CPSACON1                                 equ 0109h
// bitfield definitions
CPSACON1_CPSACH_POSN                     equ 0000h
CPSACON1_CPSACH_POSITION                 equ 0000h
CPSACON1_CPSACH_SIZE                     equ 0004h
CPSACON1_CPSACH_LENGTH                   equ 0004h
CPSACON1_CPSACH_MASK                     equ 000Fh
CPSACON1_CPSACH0_POSN                    equ 0000h
CPSACON1_CPSACH0_POSITION                equ 0000h
CPSACON1_CPSACH0_SIZE                    equ 0001h
CPSACON1_CPSACH0_LENGTH                  equ 0001h
CPSACON1_CPSACH0_MASK                    equ 0001h
CPSACON1_CPSACH1_POSN                    equ 0001h
CPSACON1_CPSACH1_POSITION                equ 0001h
CPSACON1_CPSACH1_SIZE                    equ 0001h
CPSACON1_CPSACH1_LENGTH                  equ 0001h
CPSACON1_CPSACH1_MASK                    equ 0002h
CPSACON1_CPSACH2_POSN                    equ 0002h
CPSACON1_CPSACH2_POSITION                equ 0002h
CPSACON1_CPSACH2_SIZE                    equ 0001h
CPSACON1_CPSACH2_LENGTH                  equ 0001h
CPSACON1_CPSACH2_MASK                    equ 0004h
CPSACON1_CPSACH3_POSN                    equ 0003h
CPSACON1_CPSACH3_POSITION                equ 0003h
CPSACON1_CPSACH3_SIZE                    equ 0001h
CPSACON1_CPSACH3_LENGTH                  equ 0001h
CPSACON1_CPSACH3_MASK                    equ 0008h

// Register: PMDATL
#define PMDATL PMDATL
PMDATL                                   equ 010Ch

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 010Dh

// Register: PMDATH
#define PMDATH PMDATH
PMDATH                                   equ 010Eh

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 010Fh

// Register: TMRA
#define TMRA TMRA
TMRA                                     equ 0110h

// Register: TBCON
#define TBCON TBCON
TBCON                                    equ 0111h
// bitfield definitions
TBCON_TBPS_POSN                          equ 0000h
TBCON_TBPS_POSITION                      equ 0000h
TBCON_TBPS_SIZE                          equ 0003h
TBCON_TBPS_LENGTH                        equ 0003h
TBCON_TBPS_MASK                          equ 0007h
TBCON_TBPSA_POSN                         equ 0003h
TBCON_TBPSA_POSITION                     equ 0003h
TBCON_TBPSA_SIZE                         equ 0001h
TBCON_TBPSA_LENGTH                       equ 0001h
TBCON_TBPSA_MASK                         equ 0008h
TBCON_TBSE_POSN                          equ 0004h
TBCON_TBSE_POSITION                      equ 0004h
TBCON_TBSE_SIZE                          equ 0001h
TBCON_TBSE_LENGTH                        equ 0001h
TBCON_TBSE_MASK                          equ 0010h
TBCON_TBCS_POSN                          equ 0005h
TBCON_TBCS_POSITION                      equ 0005h
TBCON_TBCS_SIZE                          equ 0001h
TBCON_TBCS_LENGTH                        equ 0001h
TBCON_TBCS_MASK                          equ 0020h
TBCON_TMRBON_POSN                        equ 0007h
TBCON_TMRBON_POSITION                    equ 0007h
TBCON_TMRBON_SIZE                        equ 0001h
TBCON_TMRBON_LENGTH                      equ 0001h
TBCON_TMRBON_MASK                        equ 0080h
TBCON_TBPS0_POSN                         equ 0000h
TBCON_TBPS0_POSITION                     equ 0000h
TBCON_TBPS0_SIZE                         equ 0001h
TBCON_TBPS0_LENGTH                       equ 0001h
TBCON_TBPS0_MASK                         equ 0001h
TBCON_TBPS1_POSN                         equ 0001h
TBCON_TBPS1_POSITION                     equ 0001h
TBCON_TBPS1_SIZE                         equ 0001h
TBCON_TBPS1_LENGTH                       equ 0001h
TBCON_TBPS1_MASK                         equ 0002h
TBCON_TBPS2_POSN                         equ 0002h
TBCON_TBPS2_POSITION                     equ 0002h
TBCON_TBPS2_SIZE                         equ 0001h
TBCON_TBPS2_LENGTH                       equ 0001h
TBCON_TBPS2_MASK                         equ 0004h
TBCON_TMRBPS_POSN                        equ 0000h
TBCON_TMRBPS_POSITION                    equ 0000h
TBCON_TMRBPS_SIZE                        equ 0003h
TBCON_TMRBPS_LENGTH                      equ 0003h
TBCON_TMRBPS_MASK                        equ 0007h
TBCON_TMRBPSA_POSN                       equ 0003h
TBCON_TMRBPSA_POSITION                   equ 0003h
TBCON_TMRBPSA_SIZE                       equ 0001h
TBCON_TMRBPSA_LENGTH                     equ 0001h
TBCON_TMRBPSA_MASK                       equ 0008h
TBCON_TMRBSE_POSN                        equ 0004h
TBCON_TMRBSE_POSITION                    equ 0004h
TBCON_TMRBSE_SIZE                        equ 0001h
TBCON_TMRBSE_LENGTH                      equ 0001h
TBCON_TMRBSE_MASK                        equ 0010h
TBCON_TMRBCS_POSN                        equ 0005h
TBCON_TMRBCS_POSITION                    equ 0005h
TBCON_TMRBCS_SIZE                        equ 0001h
TBCON_TMRBCS_LENGTH                      equ 0001h
TBCON_TMRBCS_MASK                        equ 0020h
TBCON_TMRBPS0_POSN                       equ 0000h
TBCON_TMRBPS0_POSITION                   equ 0000h
TBCON_TMRBPS0_SIZE                       equ 0001h
TBCON_TMRBPS0_LENGTH                     equ 0001h
TBCON_TMRBPS0_MASK                       equ 0001h
TBCON_TMRBPS1_POSN                       equ 0001h
TBCON_TMRBPS1_POSITION                   equ 0001h
TBCON_TMRBPS1_SIZE                       equ 0001h
TBCON_TMRBPS1_LENGTH                     equ 0001h
TBCON_TMRBPS1_MASK                       equ 0002h
TBCON_TMRBPS2_POSN                       equ 0002h
TBCON_TMRBPS2_POSITION                   equ 0002h
TBCON_TMRBPS2_SIZE                       equ 0001h
TBCON_TMRBPS2_LENGTH                     equ 0001h
TBCON_TMRBPS2_MASK                       equ 0004h

// Register: TMRB
#define TMRB TMRB
TMRB                                     equ 0112h

// Register: DACCON0
#define DACCON0 DACCON0
DACCON0                                  equ 0113h
// bitfield definitions
DACCON0_DACPSS_POSN                      equ 0002h
DACCON0_DACPSS_POSITION                  equ 0002h
DACCON0_DACPSS_SIZE                      equ 0002h
DACCON0_DACPSS_LENGTH                    equ 0002h
DACCON0_DACPSS_MASK                      equ 000Ch
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

// Register: DACCON1
#define DACCON1 DACCON1
DACCON1                                  equ 0114h
// bitfield definitions
DACCON1_DACR_POSN                        equ 0000h
DACCON1_DACR_POSITION                    equ 0000h
DACCON1_DACR_SIZE                        equ 0005h
DACCON1_DACR_LENGTH                      equ 0005h
DACCON1_DACR_MASK                        equ 001Fh
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

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 0185h
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
ANSELA_ANSA_POSN                         equ 0000h
ANSELA_ANSA_POSITION                     equ 0000h
ANSELA_ANSA_SIZE                         equ 0008h
ANSELA_ANSA_LENGTH                       equ 0008h
ANSELA_ANSA_MASK                         equ 00FFh

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 0186h
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
ANSELB_ANSB_POSN                         equ 0000h
ANSELB_ANSB_POSITION                     equ 0000h
ANSELB_ANSB_SIZE                         equ 0008h
ANSELB_ANSB_LENGTH                       equ 0008h
ANSELB_ANSB_MASK                         equ 00FFh

// Register: ANSELC
#define ANSELC ANSELC
ANSELC                                   equ 0187h
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
ANSELC_ANSC_POSN                         equ 0000h
ANSELC_ANSC_POSITION                     equ 0000h
ANSELC_ANSC_SIZE                         equ 0008h
ANSELC_ANSC_LENGTH                       equ 0008h
ANSELC_ANSC_MASK                         equ 00FFh

// Register: ANSELD
#define ANSELD ANSELD
ANSELD                                   equ 0188h
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
ANSELD_ANSD_POSN                         equ 0000h
ANSELD_ANSD_POSITION                     equ 0000h
ANSELD_ANSD_SIZE                         equ 0008h
ANSELD_ANSD_LENGTH                       equ 0008h
ANSELD_ANSD_MASK                         equ 00FFh

// Register: ANSELE
#define ANSELE ANSELE
ANSELE                                   equ 0189h
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
ANSELE_ANSE_POSN                         equ 0000h
ANSELE_ANSE_POSITION                     equ 0000h
ANSELE_ANSE_SIZE                         equ 0008h
ANSELE_ANSE_LENGTH                       equ 0008h
ANSELE_ANSE_MASK                         equ 00FFh

// Register: PMCON1
#define PMCON1 PMCON1
PMCON1                                   equ 018Ch
// bitfield definitions
PMCON1_RD_POSN                           equ 0000h
PMCON1_RD_POSITION                       equ 0000h
PMCON1_RD_SIZE                           equ 0001h
PMCON1_RD_LENGTH                         equ 0001h
PMCON1_RD_MASK                           equ 0001h

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
#define ADDEN                            BANKMASK(RCSTA), 3
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ADREF0                           BANKMASK(ADCON1), 0
#define ADREF1                           BANKMASK(ADCON1), 1
#define AN0                              BANKMASK(PORTA), 0
#define AN1                              BANKMASK(PORTA), 1
#define AN10                             BANKMASK(PORTB), 1
#define AN11                             BANKMASK(PORTB), 4
#define AN12                             BANKMASK(PORTB), 0
#define AN13                             BANKMASK(PORTB), 5
#define AN2                              BANKMASK(PORTA), 2
#define AN3                              BANKMASK(PORTA), 3
#define AN4                              BANKMASK(PORTA), 5
#define AN5                              BANKMASK(PORTE), 0
#define AN6                              BANKMASK(PORTE), 1
#define AN7                              BANKMASK(PORTE), 2
#define AN8                              BANKMASK(PORTB), 2
#define AN9                              BANKMASK(PORTB), 3
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
#define ANSC5                            BANKMASK(ANSELC), 5
#define ANSC6                            BANKMASK(ANSELC), 6
#define ANSC7                            BANKMASK(ANSELC), 7
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
#define BF                               BANKMASK(SSPSTAT), 0
#define BRGH                             BANKMASK(TXSTA), 2
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1                             BANKMASK(PORTC), 2
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
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CK                               BANKMASK(PORTC), 6
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON), 4
#define CLKIN                            BANKMASK(PORTA), 7
#define CLKOUT                           BANKMASK(PORTA), 6
#define CPSA0                            BANKMASK(PORTA), 1
#define CPSA1                            BANKMASK(PORTA), 2
#define CPSA10                           BANKMASK(PORTC), 6
#define CPSA11                           BANKMASK(PORTC), 7
#define CPSA12                           BANKMASK(PORTD), 4
#define CPSA13                           BANKMASK(PORTD), 5
#define CPSA14                           BANKMASK(PORTD), 6
#define CPSA15                           BANKMASK(PORTD), 7
#define CPSA2                            BANKMASK(PORTA), 3
#define CPSA3                            BANKMASK(PORTA), 4
#define CPSA4                            BANKMASK(PORTA), 5
#define CPSA5                            BANKMASK(PORTE), 0
#define CPSA6                            BANKMASK(PORTE), 1
#define CPSA7                            BANKMASK(PORTE), 2
#define CPSA8                            BANKMASK(PORTD), 3
#define CPSA9                            BANKMASK(PORTC), 5
#define CPSACH0                          BANKMASK(CPSACON1), 0
#define CPSACH1                          BANKMASK(CPSACON1), 1
#define CPSACH2                          BANKMASK(CPSACON1), 2
#define CPSACH3                          BANKMASK(CPSACON1), 3
#define CPSAON                           BANKMASK(CPSACON0), 7
#define CPSAOUT                          BANKMASK(CPSACON0), 1
#define CPSARM                           BANKMASK(CPSACON0), 6
#define CPSARNG0                         BANKMASK(CPSACON0), 2
#define CPSARNG1                         BANKMASK(CPSACON0), 3
#define CPSB0                            BANKMASK(PORTA), 7
#define CPSB1                            BANKMASK(PORTA), 6
#define CPSB10                           BANKMASK(PORTB), 2
#define CPSB11                           BANKMASK(PORTB), 3
#define CPSB12                           BANKMASK(PORTB), 4
#define CPSB13                           BANKMASK(PORTB), 5
#define CPSB14                           BANKMASK(PORTB), 6
#define CPSB15                           BANKMASK(PORTB), 7
#define CPSB2                            BANKMASK(PORTC), 0
#define CPSB3                            BANKMASK(PORTC), 1
#define CPSB4                            BANKMASK(PORTC), 2
#define CPSB5                            BANKMASK(PORTD), 0
#define CPSB6                            BANKMASK(PORTD), 1
#define CPSB7                            BANKMASK(PORTD), 2
#define CPSB8                            BANKMASK(PORTB), 0
#define CPSB9                            BANKMASK(PORTB), 1
#define CPSBCH0                          BANKMASK(CPSBCON1), 0
#define CPSBCH1                          BANKMASK(CPSBCON1), 1
#define CPSBCH2                          BANKMASK(CPSBCON1), 2
#define CPSBCH3                          BANKMASK(CPSBCON1), 3
#define CPSBON                           BANKMASK(CPSBCON0), 7
#define CPSBOUT                          BANKMASK(CPSBCON0), 1
#define CPSBRM                           BANKMASK(CPSBCON0), 6
#define CPSBRNG0                         BANKMASK(CPSBCON0), 2
#define CPSBRNG1                         BANKMASK(CPSBCON0), 3
#define CREN                             BANKMASK(RCSTA), 4
#define CSRC                             BANKMASK(TXSTA), 7
#define DACEN                            BANKMASK(DACCON0), 7
#define DACLPS                           BANKMASK(DACCON0), 6
#define DACOE                            BANKMASK(DACCON0), 5
#define DACOUT                           BANKMASK(PORTA), 2
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
#define DT                               BANKMASK(PORTC), 7
#define D_nA                             BANKMASK(SSPSTAT), 5
#define FERR                             BANKMASK(RCSTA), 2
#define FVREN                            BANKMASK(FVRCON), 6
#define FVRRDY                           BANKMASK(FVRCON), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define ICSL                             BANKMASK(OSCCON), 3
#define ICSS                             BANKMASK(OSCCON), 2
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCB0                            BANKMASK(IOCB), 0
#define IOCB1                            BANKMASK(IOCB), 1
#define IOCB2                            BANKMASK(IOCB), 2
#define IOCB3                            BANKMASK(IOCB), 3
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCB6                            BANKMASK(IOCB), 6
#define IOCB7                            BANKMASK(IOCB), 7
#define IRCF0                            BANKMASK(OSCCON), 4
#define IRCF1                            BANKMASK(OSCCON), 5
#define OERR                             BANKMASK(RCSTA), 1
#define OSC1                             BANKMASK(PORTA), 7
#define OSC2                             BANKMASK(PORTA), 6
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
#define RBIE                             BANKMASK(INTCON), 3
#define RBIF                             BANKMASK(INTCON), 0
#define RC0                              BANKMASK(PORTC), 0
#define RC1                              BANKMASK(PORTC), 1
#define RC2                              BANKMASK(PORTC), 2
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
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RX                               BANKMASK(PORTC), 7
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SCK                              BANKMASK(PORTC), 3
#define SCL                              BANKMASK(PORTC), 3
#define SDA                              BANKMASK(PORTC), 4
#define SDI                              BANKMASK(PORTC), 4
#define SDO                              BANKMASK(PORTC), 5
#define SMP                              BANKMASK(SSPSTAT), 7
#define SPEN                             BANKMASK(RCSTA), 7
#define SREN                             BANKMASK(RCSTA), 5
#define SSPEN                            BANKMASK(SSPCON), 5
#define SSPIE                            BANKMASK(PIE1), 3
#define SSPIF                            BANKMASK(PIR1), 3
#define SSPM0                            BANKMASK(SSPCON), 0
#define SSPM1                            BANKMASK(SSPCON), 1
#define SSPM2                            BANKMASK(SSPCON), 2
#define SSPM3                            BANKMASK(SSPCON), 3
#define SSPOV                            BANKMASK(SSPCON), 6
#define SSSEL                            BANKMASK(APFCON), 1
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CKI                            BANKMASK(PORTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKI                            BANKMASK(PORTC), 0
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1G                              BANKMASK(PORTB), 5
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T1OSI                            BANKMASK(PORTC), 1
#define T1OSO                            BANKMASK(PORTC), 0
#define T1SYNC                           BANKMASK(T1CON), 2
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define T3CKI                            BANKMASK(PORTB), 5
#define T3CKPS0                          BANKMASK(T3CON), 4
#define T3CKPS1                          BANKMASK(T3CON), 5
#define T3G                              BANKMASK(PORTD), 0
#define T3GGO_nDONE                      BANKMASK(T3GCON), 3
#define T3GPOL                           BANKMASK(T3GCON), 6
#define T3GSPM                           BANKMASK(T3GCON), 4
#define T3GSS0                           BANKMASK(T3GCON), 0
#define T3GSS1                           BANKMASK(T3GCON), 1
#define T3GTM                            BANKMASK(T3GCON), 5
#define T3GVAL                           BANKMASK(T3GCON), 2
#define T3SYNC                           BANKMASK(T3CON), 2
#define TACKI                            BANKMASK(PORTA), 4
#define TACS                             BANKMASK(TACON), 5
#define TAPS0                            BANKMASK(TACON), 0
#define TAPS1                            BANKMASK(TACON), 1
#define TAPS2                            BANKMASK(TACON), 2
#define TAPSA                            BANKMASK(TACON), 3
#define TASE                             BANKMASK(TACON), 4
#define TAXCS                            BANKMASK(CPSACON0), 0
#define TBCKI                            BANKMASK(PORTC), 2
#define TBCS                             BANKMASK(TBCON), 5
#define TBPS0                            BANKMASK(TBCON), 0
#define TBPS1                            BANKMASK(TBCON), 1
#define TBPS2                            BANKMASK(TBCON), 2
#define TBPSA                            BANKMASK(TBCON), 3
#define TBSE                             BANKMASK(TBCON), 4
#define TBXCS                            BANKMASK(CPSBCON0), 0
#define TMR0CS                           BANKMASK(OPTION_REG), 5
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR0SE                           BANKMASK(OPTION_REG), 4
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
#define TMR3GIE                          BANKMASK(PIE2), 7
#define TMR3GIF                          BANKMASK(PIR2), 7
#define TMR3IE                           BANKMASK(PIE2), 6
#define TMR3IF                           BANKMASK(PIR2), 6
#define TMR3ON                           BANKMASK(T3CON), 0
#define TMRACS                           BANKMASK(TACON), 5
#define TMRAIE                           BANKMASK(PIE2), 4
#define TMRAIF                           BANKMASK(PIR2), 4
#define TMRAON                           BANKMASK(TACON), 7
#define TMRAPS0                          BANKMASK(TACON), 0
#define TMRAPS1                          BANKMASK(TACON), 1
#define TMRAPS2                          BANKMASK(TACON), 2
#define TMRAPSA                          BANKMASK(TACON), 3
#define TMRASE                           BANKMASK(TACON), 4
#define TMRBCS                           BANKMASK(TBCON), 5
#define TMRBIE                           BANKMASK(PIE2), 5
#define TMRBIF                           BANKMASK(PIR2), 5
#define TMRBON                           BANKMASK(TBCON), 7
#define TMRBPS0                          BANKMASK(TBCON), 0
#define TMRBPS1                          BANKMASK(TBCON), 1
#define TMRBPS2                          BANKMASK(TBCON), 2
#define TMRBPSA                          BANKMASK(TBCON), 3
#define TMRBSE                           BANKMASK(TBCON), 4
#define TMRCS0                           BANKMASK(T1CON), 6
#define TMRCS1                           BANKMASK(T1CON), 7
#define TOUTPS0                          BANKMASK(T2CON), 3
#define TOUTPS1                          BANKMASK(T2CON), 4
#define TOUTPS2                          BANKMASK(T2CON), 5
#define TOUTPS3                          BANKMASK(T2CON), 6
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
#define TX                               BANKMASK(PORTC), 6
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define UA                               BANKMASK(SSPSTAT), 1
#define WCOL                             BANKMASK(SSPCON), 7
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define ZERO                             BANKMASK(STATUS), 2
#define nBOR                             BANKMASK(PCON), 0
#define nMCLR                            BANKMASK(PORTE), 3
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRBPU                            BANKMASK(OPTION_REG), 7
#define nT1SYNC                          BANKMASK(T1CON), 2
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
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16LF707_INC_
