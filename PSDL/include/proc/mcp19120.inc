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

#ifndef _MCP19120_INC_
#define _MCP19120_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * MCP19120
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

// Register: PORTGPA
#define PORTGPA PORTGPA
PORTGPA                                  equ 0005h
// bitfield definitions
PORTGPA_GPA0_POSN                        equ 0000h
PORTGPA_GPA0_POSITION                    equ 0000h
PORTGPA_GPA0_SIZE                        equ 0001h
PORTGPA_GPA0_LENGTH                      equ 0001h
PORTGPA_GPA0_MASK                        equ 0001h
PORTGPA_GPA1_POSN                        equ 0001h
PORTGPA_GPA1_POSITION                    equ 0001h
PORTGPA_GPA1_SIZE                        equ 0001h
PORTGPA_GPA1_LENGTH                      equ 0001h
PORTGPA_GPA1_MASK                        equ 0002h
PORTGPA_GPA2_POSN                        equ 0002h
PORTGPA_GPA2_POSITION                    equ 0002h
PORTGPA_GPA2_SIZE                        equ 0001h
PORTGPA_GPA2_LENGTH                      equ 0001h
PORTGPA_GPA2_MASK                        equ 0004h
PORTGPA_GPA3_POSN                        equ 0003h
PORTGPA_GPA3_POSITION                    equ 0003h
PORTGPA_GPA3_SIZE                        equ 0001h
PORTGPA_GPA3_LENGTH                      equ 0001h
PORTGPA_GPA3_MASK                        equ 0008h
PORTGPA_GPA4_POSN                        equ 0004h
PORTGPA_GPA4_POSITION                    equ 0004h
PORTGPA_GPA4_SIZE                        equ 0001h
PORTGPA_GPA4_LENGTH                      equ 0001h
PORTGPA_GPA4_MASK                        equ 0010h
PORTGPA_GPA5_POSN                        equ 0005h
PORTGPA_GPA5_POSITION                    equ 0005h
PORTGPA_GPA5_SIZE                        equ 0001h
PORTGPA_GPA5_LENGTH                      equ 0001h
PORTGPA_GPA5_MASK                        equ 0020h
PORTGPA_GPA6_POSN                        equ 0006h
PORTGPA_GPA6_POSITION                    equ 0006h
PORTGPA_GPA6_SIZE                        equ 0001h
PORTGPA_GPA6_LENGTH                      equ 0001h
PORTGPA_GPA6_MASK                        equ 0040h
PORTGPA_GPA7_POSN                        equ 0007h
PORTGPA_GPA7_POSITION                    equ 0007h
PORTGPA_GPA7_SIZE                        equ 0001h
PORTGPA_GPA7_LENGTH                      equ 0001h
PORTGPA_GPA7_MASK                        equ 0080h
PORTGPA_GPIO0_POSN                       equ 0000h
PORTGPA_GPIO0_POSITION                   equ 0000h
PORTGPA_GPIO0_SIZE                       equ 0001h
PORTGPA_GPIO0_LENGTH                     equ 0001h
PORTGPA_GPIO0_MASK                       equ 0001h
PORTGPA_GPIO1_POSN                       equ 0001h
PORTGPA_GPIO1_POSITION                   equ 0001h
PORTGPA_GPIO1_SIZE                       equ 0001h
PORTGPA_GPIO1_LENGTH                     equ 0001h
PORTGPA_GPIO1_MASK                       equ 0002h
PORTGPA_GPIO2_POSN                       equ 0002h
PORTGPA_GPIO2_POSITION                   equ 0002h
PORTGPA_GPIO2_SIZE                       equ 0001h
PORTGPA_GPIO2_LENGTH                     equ 0001h
PORTGPA_GPIO2_MASK                       equ 0004h
PORTGPA_GPIO3_POSN                       equ 0003h
PORTGPA_GPIO3_POSITION                   equ 0003h
PORTGPA_GPIO3_SIZE                       equ 0001h
PORTGPA_GPIO3_LENGTH                     equ 0001h
PORTGPA_GPIO3_MASK                       equ 0008h
PORTGPA_GPIO4_POSN                       equ 0004h
PORTGPA_GPIO4_POSITION                   equ 0004h
PORTGPA_GPIO4_SIZE                       equ 0001h
PORTGPA_GPIO4_LENGTH                     equ 0001h
PORTGPA_GPIO4_MASK                       equ 0010h
PORTGPA_GPIO5_POSN                       equ 0005h
PORTGPA_GPIO5_POSITION                   equ 0005h
PORTGPA_GPIO5_SIZE                       equ 0001h
PORTGPA_GPIO5_LENGTH                     equ 0001h
PORTGPA_GPIO5_MASK                       equ 0020h
PORTGPA_GPIO6_POSN                       equ 0006h
PORTGPA_GPIO6_POSITION                   equ 0006h
PORTGPA_GPIO6_SIZE                       equ 0001h
PORTGPA_GPIO6_LENGTH                     equ 0001h
PORTGPA_GPIO6_MASK                       equ 0040h
PORTGPA_GPIO7_POSN                       equ 0007h
PORTGPA_GPIO7_POSITION                   equ 0007h
PORTGPA_GPIO7_SIZE                       equ 0001h
PORTGPA_GPIO7_LENGTH                     equ 0001h
PORTGPA_GPIO7_MASK                       equ 0080h
PORTGPA_RA0_POSN                         equ 0000h
PORTGPA_RA0_POSITION                     equ 0000h
PORTGPA_RA0_SIZE                         equ 0001h
PORTGPA_RA0_LENGTH                       equ 0001h
PORTGPA_RA0_MASK                         equ 0001h
PORTGPA_RA1_POSN                         equ 0001h
PORTGPA_RA1_POSITION                     equ 0001h
PORTGPA_RA1_SIZE                         equ 0001h
PORTGPA_RA1_LENGTH                       equ 0001h
PORTGPA_RA1_MASK                         equ 0002h
PORTGPA_RA2_POSN                         equ 0002h
PORTGPA_RA2_POSITION                     equ 0002h
PORTGPA_RA2_SIZE                         equ 0001h
PORTGPA_RA2_LENGTH                       equ 0001h
PORTGPA_RA2_MASK                         equ 0004h
PORTGPA_RA3_POSN                         equ 0003h
PORTGPA_RA3_POSITION                     equ 0003h
PORTGPA_RA3_SIZE                         equ 0001h
PORTGPA_RA3_LENGTH                       equ 0001h
PORTGPA_RA3_MASK                         equ 0008h
PORTGPA_RA4_POSN                         equ 0004h
PORTGPA_RA4_POSITION                     equ 0004h
PORTGPA_RA4_SIZE                         equ 0001h
PORTGPA_RA4_LENGTH                       equ 0001h
PORTGPA_RA4_MASK                         equ 0010h
PORTGPA_RA5_POSN                         equ 0005h
PORTGPA_RA5_POSITION                     equ 0005h
PORTGPA_RA5_SIZE                         equ 0001h
PORTGPA_RA5_LENGTH                       equ 0001h
PORTGPA_RA5_MASK                         equ 0020h
PORTGPA_RA6_POSN                         equ 0006h
PORTGPA_RA6_POSITION                     equ 0006h
PORTGPA_RA6_SIZE                         equ 0001h
PORTGPA_RA6_LENGTH                       equ 0001h
PORTGPA_RA6_MASK                         equ 0040h
PORTGPA_RA7_POSN                         equ 0007h
PORTGPA_RA7_POSITION                     equ 0007h
PORTGPA_RA7_SIZE                         equ 0001h
PORTGPA_RA7_LENGTH                       equ 0001h
PORTGPA_RA7_MASK                         equ 0080h

// Register: PORTGPB
#define PORTGPB PORTGPB
PORTGPB                                  equ 0006h
// bitfield definitions
PORTGPB_GPB0_POSN                        equ 0000h
PORTGPB_GPB0_POSITION                    equ 0000h
PORTGPB_GPB0_SIZE                        equ 0001h
PORTGPB_GPB0_LENGTH                      equ 0001h
PORTGPB_GPB0_MASK                        equ 0001h
PORTGPB_GPB1_POSN                        equ 0001h
PORTGPB_GPB1_POSITION                    equ 0001h
PORTGPB_GPB1_SIZE                        equ 0001h
PORTGPB_GPB1_LENGTH                      equ 0001h
PORTGPB_GPB1_MASK                        equ 0002h
PORTGPB_GPB2_POSN                        equ 0002h
PORTGPB_GPB2_POSITION                    equ 0002h
PORTGPB_GPB2_SIZE                        equ 0001h
PORTGPB_GPB2_LENGTH                      equ 0001h
PORTGPB_GPB2_MASK                        equ 0004h
PORTGPB_GPB3_POSN                        equ 0003h
PORTGPB_GPB3_POSITION                    equ 0003h
PORTGPB_GPB3_SIZE                        equ 0001h
PORTGPB_GPB3_LENGTH                      equ 0001h
PORTGPB_GPB3_MASK                        equ 0008h
PORTGPB_RB0_POSN                         equ 0000h
PORTGPB_RB0_POSITION                     equ 0000h
PORTGPB_RB0_SIZE                         equ 0001h
PORTGPB_RB0_LENGTH                       equ 0001h
PORTGPB_RB0_MASK                         equ 0001h
PORTGPB_RB1_POSN                         equ 0001h
PORTGPB_RB1_POSITION                     equ 0001h
PORTGPB_RB1_SIZE                         equ 0001h
PORTGPB_RB1_LENGTH                       equ 0001h
PORTGPB_RB1_MASK                         equ 0002h
PORTGPB_RB2_POSN                         equ 0002h
PORTGPB_RB2_POSITION                     equ 0002h
PORTGPB_RB2_SIZE                         equ 0001h
PORTGPB_RB2_LENGTH                       equ 0001h
PORTGPB_RB2_MASK                         equ 0004h
PORTGPB_RB3_POSN                         equ 0003h
PORTGPB_RB3_POSITION                     equ 0003h
PORTGPB_RB3_SIZE                         equ 0001h
PORTGPB_RB3_LENGTH                       equ 0001h
PORTGPB_RB3_MASK                         equ 0008h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 0007h
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
PIR1_CC1IF_POSN                          equ 0002h
PIR1_CC1IF_POSITION                      equ 0002h
PIR1_CC1IF_SIZE                          equ 0001h
PIR1_CC1IF_LENGTH                        equ 0001h
PIR1_CC1IF_MASK                          equ 0004h
PIR1_CC2IF_POSN                          equ 0003h
PIR1_CC2IF_POSITION                      equ 0003h
PIR1_CC2IF_SIZE                          equ 0001h
PIR1_CC2IF_LENGTH                        equ 0001h
PIR1_CC2IF_MASK                          equ 0008h
PIR1_SSPIF_POSN                          equ 0004h
PIR1_SSPIF_POSITION                      equ 0004h
PIR1_SSPIF_SIZE                          equ 0001h
PIR1_SSPIF_LENGTH                        equ 0001h
PIR1_SSPIF_MASK                          equ 0010h
PIR1_BCLIF_POSN                          equ 0005h
PIR1_BCLIF_POSITION                      equ 0005h
PIR1_BCLIF_SIZE                          equ 0001h
PIR1_BCLIF_LENGTH                        equ 0001h
PIR1_BCLIF_MASK                          equ 0020h
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
PIR2                                     equ 0008h
// bitfield definitions
PIR2_UVLOIF_POSN                         equ 0000h
PIR2_UVLOIF_POSITION                     equ 0000h
PIR2_UVLOIF_SIZE                         equ 0001h
PIR2_UVLOIF_LENGTH                       equ 0001h
PIR2_UVLOIF_MASK                         equ 0001h
PIR2_OVLOIF_POSN                         equ 0001h
PIR2_OVLOIF_POSITION                     equ 0001h
PIR2_OVLOIF_SIZE                         equ 0001h
PIR2_OVLOIF_LENGTH                       equ 0001h
PIR2_OVLOIF_MASK                         equ 0002h
PIR2_OVIF_POSN                           equ 0004h
PIR2_OVIF_POSITION                       equ 0004h
PIR2_OVIF_SIZE                           equ 0001h
PIR2_OVIF_LENGTH                         equ 0001h
PIR2_OVIF_MASK                           equ 0010h
PIR2_OCIF_POSN                           equ 0005h
PIR2_OCIF_POSITION                       equ 0005h
PIR2_OCIF_SIZE                           equ 0001h
PIR2_OCIF_LENGTH                         equ 0001h
PIR2_OCIF_MASK                           equ 0020h
PIR2_OTIF_POSN                           equ 0006h
PIR2_OTIF_POSITION                       equ 0006h
PIR2_OTIF_SIZE                           equ 0001h
PIR2_OTIF_LENGTH                         equ 0001h
PIR2_OTIF_MASK                           equ 0040h
PIR2_UVIF_POSN                           equ 0007h
PIR2_UVIF_POSITION                       equ 0007h
PIR2_UVIF_SIZE                           equ 0001h
PIR2_UVIF_LENGTH                         equ 0001h
PIR2_UVIF_MASK                           equ 0080h

// Register: PCON
#define PCON PCON
PCON                                     equ 0009h
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

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 000Bh
// bitfield definitions
INTCON_IOCF_POSN                         equ 0000h
INTCON_IOCF_POSITION                     equ 0000h
INTCON_IOCF_SIZE                         equ 0001h
INTCON_IOCF_LENGTH                       equ 0001h
INTCON_IOCF_MASK                         equ 0001h
INTCON_INTF_POSN                         equ 0001h
INTCON_INTF_POSITION                     equ 0001h
INTCON_INTF_SIZE                         equ 0001h
INTCON_INTF_LENGTH                       equ 0001h
INTCON_INTF_MASK                         equ 0002h
INTCON_T0IF_POSN                         equ 0002h
INTCON_T0IF_POSITION                     equ 0002h
INTCON_T0IF_SIZE                         equ 0001h
INTCON_T0IF_LENGTH                       equ 0001h
INTCON_T0IF_MASK                         equ 0004h
INTCON_IOCE_POSN                         equ 0003h
INTCON_IOCE_POSITION                     equ 0003h
INTCON_IOCE_SIZE                         equ 0001h
INTCON_IOCE_LENGTH                       equ 0001h
INTCON_IOCE_MASK                         equ 0008h
INTCON_INTE_POSN                         equ 0004h
INTCON_INTE_POSITION                     equ 0004h
INTCON_INTE_SIZE                         equ 0001h
INTCON_INTE_LENGTH                       equ 0001h
INTCON_INTE_MASK                         equ 0010h
INTCON_T0IE_POSN                         equ 0005h
INTCON_T0IE_POSITION                     equ 0005h
INTCON_T0IE_SIZE                         equ 0001h
INTCON_T0IE_LENGTH                       equ 0001h
INTCON_T0IE_MASK                         equ 0020h
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

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 000Ch
// bitfield definitions
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 000Dh
// bitfield definitions
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 000Eh
// bitfield definitions
T1CON_TMR1ON_POSN                        equ 0000h
T1CON_TMR1ON_POSITION                    equ 0000h
T1CON_TMR1ON_SIZE                        equ 0001h
T1CON_TMR1ON_LENGTH                      equ 0001h
T1CON_TMR1ON_MASK                        equ 0001h
T1CON_TMR1CS_POSN                        equ 0001h
T1CON_TMR1CS_POSITION                    equ 0001h
T1CON_TMR1CS_SIZE                        equ 0001h
T1CON_TMR1CS_LENGTH                      equ 0001h
T1CON_TMR1CS_MASK                        equ 0002h
T1CON_T1CKPS_POSN                        equ 0004h
T1CON_T1CKPS_POSITION                    equ 0004h
T1CON_T1CKPS_SIZE                        equ 0002h
T1CON_T1CKPS_LENGTH                      equ 0002h
T1CON_T1CKPS_MASK                        equ 0030h
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

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 000Fh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0010h
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

// Register: PR2
#define PR2 PR2
PR2                                      equ 0011h
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 0012h
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

// Register: PWMPHL
#define PWMPHL PWMPHL
PWMPHL                                   equ 0013h
// bitfield definitions
PWMPHL_PWMPHL_POSN                       equ 0000h
PWMPHL_PWMPHL_POSITION                   equ 0000h
PWMPHL_PWMPHL_SIZE                       equ 0008h
PWMPHL_PWMPHL_LENGTH                     equ 0008h
PWMPHL_PWMPHL_MASK                       equ 00FFh

// Register: PWMPHH
#define PWMPHH PWMPHH
PWMPHH                                   equ 0014h
// bitfield definitions
PWMPHH_PWMPHH_POSN                       equ 0000h
PWMPHH_PWMPHH_POSITION                   equ 0000h
PWMPHH_PWMPHH_SIZE                       equ 0008h
PWMPHH_PWMPHH_LENGTH                     equ 0008h
PWMPHH_PWMPHH_MASK                       equ 00FFh

// Register: PWMRL
#define PWMRL PWMRL
PWMRL                                    equ 0015h
// bitfield definitions
PWMRL_PWMRL_POSN                         equ 0000h
PWMRL_PWMRL_POSITION                     equ 0000h
PWMRL_PWMRL_SIZE                         equ 0008h
PWMRL_PWMRL_LENGTH                       equ 0008h
PWMRL_PWMRL_MASK                         equ 00FFh

// Register: PWMRH
#define PWMRH PWMRH
PWMRH                                    equ 0016h
// bitfield definitions
PWMRH_PWMRH_POSN                         equ 0000h
PWMRH_PWMRH_POSITION                     equ 0000h
PWMRH_PWMRH_SIZE                         equ 0008h
PWMRH_PWMRH_LENGTH                       equ 0008h
PWMRH_PWMRH_MASK                         equ 00FFh

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 001Ch
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 001Dh
// bitfield definitions
ADRESH_ADRESH_POSN                       equ 0000h
ADRESH_ADRESH_POSITION                   equ 0000h
ADRESH_ADRESH_SIZE                       equ 0008h
ADRESH_ADRESH_LENGTH                     equ 0008h
ADRESH_ADRESH_MASK                       equ 00FFh

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 001Eh
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

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 001Fh
// bitfield definitions
ADCON1_VCFG_POSN                         equ 0000h
ADCON1_VCFG_POSITION                     equ 0000h
ADCON1_VCFG_SIZE                         equ 0002h
ADCON1_VCFG_LENGTH                       equ 0002h
ADCON1_VCFG_MASK                         equ 0003h
ADCON1_ADFM_POSN                         equ 0002h
ADCON1_ADFM_POSITION                     equ 0002h
ADCON1_ADFM_SIZE                         equ 0001h
ADCON1_ADFM_LENGTH                       equ 0001h
ADCON1_ADFM_MASK                         equ 0004h
ADCON1_ADCS_POSN                         equ 0004h
ADCON1_ADCS_POSITION                     equ 0004h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0070h
ADCON1_VCFG0_POSN                        equ 0000h
ADCON1_VCFG0_POSITION                    equ 0000h
ADCON1_VCFG0_SIZE                        equ 0001h
ADCON1_VCFG0_LENGTH                      equ 0001h
ADCON1_VCFG0_MASK                        equ 0001h
ADCON1_VCFG1_POSN                        equ 0001h
ADCON1_VCFG1_POSITION                    equ 0001h
ADCON1_VCFG1_SIZE                        equ 0001h
ADCON1_VCFG1_LENGTH                      equ 0001h
ADCON1_VCFG1_MASK                        equ 0002h
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
OPTION_REG_INTEDG_POSN                   equ 0006h
OPTION_REG_INTEDG_POSITION               equ 0006h
OPTION_REG_INTEDG_SIZE                   equ 0001h
OPTION_REG_INTEDG_LENGTH                 equ 0001h
OPTION_REG_INTEDG_MASK                   equ 0040h
OPTION_REG_nRAPUI_POSN                   equ 0007h
OPTION_REG_nRAPUI_POSITION               equ 0007h
OPTION_REG_nRAPUI_SIZE                   equ 0001h
OPTION_REG_nRAPUI_LENGTH                 equ 0001h
OPTION_REG_nRAPUI_MASK                   equ 0080h
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

// Register: TRISGPA
#define TRISGPA TRISGPA
TRISGPA                                  equ 0085h
// bitfield definitions
TRISGPA_TRISA0_POSN                      equ 0000h
TRISGPA_TRISA0_POSITION                  equ 0000h
TRISGPA_TRISA0_SIZE                      equ 0001h
TRISGPA_TRISA0_LENGTH                    equ 0001h
TRISGPA_TRISA0_MASK                      equ 0001h
TRISGPA_TRISA1_POSN                      equ 0001h
TRISGPA_TRISA1_POSITION                  equ 0001h
TRISGPA_TRISA1_SIZE                      equ 0001h
TRISGPA_TRISA1_LENGTH                    equ 0001h
TRISGPA_TRISA1_MASK                      equ 0002h
TRISGPA_TRISA2_POSN                      equ 0002h
TRISGPA_TRISA2_POSITION                  equ 0002h
TRISGPA_TRISA2_SIZE                      equ 0001h
TRISGPA_TRISA2_LENGTH                    equ 0001h
TRISGPA_TRISA2_MASK                      equ 0004h
TRISGPA_TRISA3_POSN                      equ 0003h
TRISGPA_TRISA3_POSITION                  equ 0003h
TRISGPA_TRISA3_SIZE                      equ 0001h
TRISGPA_TRISA3_LENGTH                    equ 0001h
TRISGPA_TRISA3_MASK                      equ 0008h
TRISGPA_TRISA4_POSN                      equ 0004h
TRISGPA_TRISA4_POSITION                  equ 0004h
TRISGPA_TRISA4_SIZE                      equ 0001h
TRISGPA_TRISA4_LENGTH                    equ 0001h
TRISGPA_TRISA4_MASK                      equ 0010h
TRISGPA_TRISA5_POSN                      equ 0005h
TRISGPA_TRISA5_POSITION                  equ 0005h
TRISGPA_TRISA5_SIZE                      equ 0001h
TRISGPA_TRISA5_LENGTH                    equ 0001h
TRISGPA_TRISA5_MASK                      equ 0020h
TRISGPA_TRISA6_POSN                      equ 0006h
TRISGPA_TRISA6_POSITION                  equ 0006h
TRISGPA_TRISA6_SIZE                      equ 0001h
TRISGPA_TRISA6_LENGTH                    equ 0001h
TRISGPA_TRISA6_MASK                      equ 0040h
TRISGPA_TRISA7_POSN                      equ 0007h
TRISGPA_TRISA7_POSITION                  equ 0007h
TRISGPA_TRISA7_SIZE                      equ 0001h
TRISGPA_TRISA7_LENGTH                    equ 0001h
TRISGPA_TRISA7_MASK                      equ 0080h

// Register: TRISGPB
#define TRISGPB TRISGPB
TRISGPB                                  equ 0086h
// bitfield definitions
TRISGPB_TRISB0_POSN                      equ 0000h
TRISGPB_TRISB0_POSITION                  equ 0000h
TRISGPB_TRISB0_SIZE                      equ 0001h
TRISGPB_TRISB0_LENGTH                    equ 0001h
TRISGPB_TRISB0_MASK                      equ 0001h
TRISGPB_TRISB1_POSN                      equ 0001h
TRISGPB_TRISB1_POSITION                  equ 0001h
TRISGPB_TRISB1_SIZE                      equ 0001h
TRISGPB_TRISB1_LENGTH                    equ 0001h
TRISGPB_TRISB1_MASK                      equ 0002h
TRISGPB_TRISB2_POSN                      equ 0002h
TRISGPB_TRISB2_POSITION                  equ 0002h
TRISGPB_TRISB2_SIZE                      equ 0001h
TRISGPB_TRISB2_LENGTH                    equ 0001h
TRISGPB_TRISB2_MASK                      equ 0004h
TRISGPB_TRISB3_POSN                      equ 0003h
TRISGPB_TRISB3_POSITION                  equ 0003h
TRISGPB_TRISB3_SIZE                      equ 0001h
TRISGPB_TRISB3_LENGTH                    equ 0001h
TRISGPB_TRISB3_MASK                      equ 0008h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0087h
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
PIE1_CC1IE_POSN                          equ 0002h
PIE1_CC1IE_POSITION                      equ 0002h
PIE1_CC1IE_SIZE                          equ 0001h
PIE1_CC1IE_LENGTH                        equ 0001h
PIE1_CC1IE_MASK                          equ 0004h
PIE1_CC2IE_POSN                          equ 0003h
PIE1_CC2IE_POSITION                      equ 0003h
PIE1_CC2IE_SIZE                          equ 0001h
PIE1_CC2IE_LENGTH                        equ 0001h
PIE1_CC2IE_MASK                          equ 0008h
PIE1_SSPIE_POSN                          equ 0004h
PIE1_SSPIE_POSITION                      equ 0004h
PIE1_SSPIE_SIZE                          equ 0001h
PIE1_SSPIE_LENGTH                        equ 0001h
PIE1_SSPIE_MASK                          equ 0010h
PIE1_BCLIE_POSN                          equ 0005h
PIE1_BCLIE_POSITION                      equ 0005h
PIE1_BCLIE_SIZE                          equ 0001h
PIE1_BCLIE_LENGTH                        equ 0001h
PIE1_BCLIE_MASK                          equ 0020h
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
PIE2                                     equ 0088h
// bitfield definitions
PIE2_UVLOIE_POSN                         equ 0000h
PIE2_UVLOIE_POSITION                     equ 0000h
PIE2_UVLOIE_SIZE                         equ 0001h
PIE2_UVLOIE_LENGTH                       equ 0001h
PIE2_UVLOIE_MASK                         equ 0001h
PIE2_OVLOIE_POSN                         equ 0001h
PIE2_OVLOIE_POSITION                     equ 0001h
PIE2_OVLOIE_SIZE                         equ 0001h
PIE2_OVLOIE_LENGTH                       equ 0001h
PIE2_OVLOIE_MASK                         equ 0002h
PIE2_OVIE_POSN                           equ 0004h
PIE2_OVIE_POSITION                       equ 0004h
PIE2_OVIE_SIZE                           equ 0001h
PIE2_OVIE_LENGTH                         equ 0001h
PIE2_OVIE_MASK                           equ 0010h
PIE2_OCIE_POSN                           equ 0005h
PIE2_OCIE_POSITION                       equ 0005h
PIE2_OCIE_SIZE                           equ 0001h
PIE2_OCIE_LENGTH                         equ 0001h
PIE2_OCIE_MASK                           equ 0020h
PIE2_OTIE_POSN                           equ 0006h
PIE2_OTIE_POSITION                       equ 0006h
PIE2_OTIE_SIZE                           equ 0001h
PIE2_OTIE_LENGTH                         equ 0001h
PIE2_OTIE_MASK                           equ 0040h
PIE2_UVIE_POSN                           equ 0007h
PIE2_UVIE_POSITION                       equ 0007h
PIE2_UVIE_SIZE                           equ 0001h
PIE2_UVIE_LENGTH                         equ 0001h
PIE2_UVIE_MASK                           equ 0080h

// Register: VINUVLO
#define VINUVLO VINUVLO
VINUVLO                                  equ 0090h
// bitfield definitions
VINUVLO_UVLO_POSN                        equ 0000h
VINUVLO_UVLO_POSITION                    equ 0000h
VINUVLO_UVLO_SIZE                        equ 0004h
VINUVLO_UVLO_LENGTH                      equ 0004h
VINUVLO_UVLO_MASK                        equ 000Fh

// Register: VINOVLO
#define VINOVLO VINOVLO
VINOVLO                                  equ 0091h
// bitfield definitions
VINOVLO_OVLO_POSN                        equ 0000h
VINOVLO_OVLO_POSITION                    equ 0000h
VINOVLO_OVLO_SIZE                        equ 0004h
VINOVLO_OVLO_LENGTH                      equ 0004h
VINOVLO_OVLO_MASK                        equ 000Fh

// Register: VINCON
#define VINCON VINCON
VINCON                                   equ 0092h
// bitfield definitions
VINCON_OVLOINTN_POSN                     equ 0000h
VINCON_OVLOINTN_POSITION                 equ 0000h
VINCON_OVLOINTN_SIZE                     equ 0001h
VINCON_OVLOINTN_LENGTH                   equ 0001h
VINCON_OVLOINTN_MASK                     equ 0001h
VINCON_OVLOINTP_POSN                     equ 0001h
VINCON_OVLOINTP_POSITION                 equ 0001h
VINCON_OVLOINTP_SIZE                     equ 0001h
VINCON_OVLOINTP_LENGTH                   equ 0001h
VINCON_OVLOINTP_MASK                     equ 0002h
VINCON_OVLOOUT_POSN                      equ 0002h
VINCON_OVLOOUT_POSITION                  equ 0002h
VINCON_OVLOOUT_SIZE                      equ 0001h
VINCON_OVLOOUT_LENGTH                    equ 0001h
VINCON_OVLOOUT_MASK                      equ 0004h
VINCON_OVLOEN_POSN                       equ 0003h
VINCON_OVLOEN_POSITION                   equ 0003h
VINCON_OVLOEN_SIZE                       equ 0001h
VINCON_OVLOEN_LENGTH                     equ 0001h
VINCON_OVLOEN_MASK                       equ 0008h
VINCON_UVLOINTN_POSN                     equ 0004h
VINCON_UVLOINTN_POSITION                 equ 0004h
VINCON_UVLOINTN_SIZE                     equ 0001h
VINCON_UVLOINTN_LENGTH                   equ 0001h
VINCON_UVLOINTN_MASK                     equ 0010h
VINCON_UVLOINTP_POSN                     equ 0005h
VINCON_UVLOINTP_POSITION                 equ 0005h
VINCON_UVLOINTP_SIZE                     equ 0001h
VINCON_UVLOINTP_LENGTH                   equ 0001h
VINCON_UVLOINTP_MASK                     equ 0020h
VINCON_UVLOOUT_POSN                      equ 0006h
VINCON_UVLOOUT_POSITION                  equ 0006h
VINCON_UVLOOUT_SIZE                      equ 0001h
VINCON_UVLOOUT_LENGTH                    equ 0001h
VINCON_UVLOOUT_MASK                      equ 0040h
VINCON_UVLOEN_POSN                       equ 0007h
VINCON_UVLOEN_POSITION                   equ 0007h
VINCON_UVLOEN_SIZE                       equ 0001h
VINCON_UVLOEN_LENGTH                     equ 0001h
VINCON_UVLOEN_MASK                       equ 0080h

// Register: DAGCON
#define DAGCON DAGCON
DAGCON                                   equ 0093h
// bitfield definitions
DAGCON_DAG_POSN                          equ 0000h
DAGCON_DAG_POSITION                      equ 0000h
DAGCON_DAG_SIZE                          equ 0003h
DAGCON_DAG_LENGTH                        equ 0003h
DAGCON_DAG_MASK                          equ 0007h

// Register: VOUTL
#define VOUTL VOUTL
VOUTL                                    equ 0094h
// bitfield definitions
VOUTL_VOUTL_POSN                         equ 0000h
VOUTL_VOUTL_POSITION                     equ 0000h
VOUTL_VOUTL_SIZE                         equ 0008h
VOUTL_VOUTL_LENGTH                       equ 0008h
VOUTL_VOUTL_MASK                         equ 00FFh
VOUTL_VOUT0_POSN                         equ 0000h
VOUTL_VOUT0_POSITION                     equ 0000h
VOUTL_VOUT0_SIZE                         equ 0001h
VOUTL_VOUT0_LENGTH                       equ 0001h
VOUTL_VOUT0_MASK                         equ 0001h
VOUTL_VOUT1_POSN                         equ 0001h
VOUTL_VOUT1_POSITION                     equ 0001h
VOUTL_VOUT1_SIZE                         equ 0001h
VOUTL_VOUT1_LENGTH                       equ 0001h
VOUTL_VOUT1_MASK                         equ 0002h
VOUTL_VOUT2_POSN                         equ 0002h
VOUTL_VOUT2_POSITION                     equ 0002h
VOUTL_VOUT2_SIZE                         equ 0001h
VOUTL_VOUT2_LENGTH                       equ 0001h
VOUTL_VOUT2_MASK                         equ 0004h
VOUTL_VOUT3_POSN                         equ 0003h
VOUTL_VOUT3_POSITION                     equ 0003h
VOUTL_VOUT3_SIZE                         equ 0001h
VOUTL_VOUT3_LENGTH                       equ 0001h
VOUTL_VOUT3_MASK                         equ 0008h
VOUTL_VOUT4_POSN                         equ 0004h
VOUTL_VOUT4_POSITION                     equ 0004h
VOUTL_VOUT4_SIZE                         equ 0001h
VOUTL_VOUT4_LENGTH                       equ 0001h
VOUTL_VOUT4_MASK                         equ 0010h
VOUTL_VOUT5_POSN                         equ 0005h
VOUTL_VOUT5_POSITION                     equ 0005h
VOUTL_VOUT5_SIZE                         equ 0001h
VOUTL_VOUT5_LENGTH                       equ 0001h
VOUTL_VOUT5_MASK                         equ 0020h
VOUTL_VOUT6_POSN                         equ 0006h
VOUTL_VOUT6_POSITION                     equ 0006h
VOUTL_VOUT6_SIZE                         equ 0001h
VOUTL_VOUT6_LENGTH                       equ 0001h
VOUTL_VOUT6_MASK                         equ 0040h
VOUTL_VOUT7_POSN                         equ 0007h
VOUTL_VOUT7_POSITION                     equ 0007h
VOUTL_VOUT7_SIZE                         equ 0001h
VOUTL_VOUT7_LENGTH                       equ 0001h
VOUTL_VOUT7_MASK                         equ 0080h

// Register: VOUTH
#define VOUTH VOUTH
VOUTH                                    equ 0095h
// bitfield definitions
VOUTH_VOUTH_POSN                         equ 0000h
VOUTH_VOUTH_POSITION                     equ 0000h
VOUTH_VOUTH_SIZE                         equ 0002h
VOUTH_VOUTH_LENGTH                       equ 0002h
VOUTH_VOUTH_MASK                         equ 0003h
VOUTH_VOUT8_POSN                         equ 0000h
VOUTH_VOUT8_POSITION                     equ 0000h
VOUTH_VOUT8_SIZE                         equ 0001h
VOUTH_VOUT8_LENGTH                       equ 0001h
VOUTH_VOUT8_MASK                         equ 0001h
VOUTH_VOUT9_POSN                         equ 0001h
VOUTH_VOUT9_POSITION                     equ 0001h
VOUTH_VOUT9_SIZE                         equ 0001h
VOUTH_VOUT9_LENGTH                       equ 0001h
VOUTH_VOUT9_MASK                         equ 0002h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0096h
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

// Register: CMPZCON
#define CMPZCON CMPZCON
CMPZCON                                  equ 0098h
// bitfield definitions
CMPZCON_CMPZG_POSN                       equ 0000h
CMPZCON_CMPZG_POSITION                   equ 0000h
CMPZCON_CMPZG_SIZE                       equ 0004h
CMPZCON_CMPZG_LENGTH                     equ 0004h
CMPZCON_CMPZG_MASK                       equ 000Fh
CMPZCON_CMPZF_POSN                       equ 0004h
CMPZCON_CMPZF_POSITION                   equ 0004h
CMPZCON_CMPZF_SIZE                       equ 0004h
CMPZCON_CMPZF_LENGTH                     equ 0004h
CMPZCON_CMPZF_MASK                       equ 00F0h

// Register: VOTUVLO
#define VOTUVLO VOTUVLO
VOTUVLO                                  equ 0099h
// bitfield definitions
VOTUVLO_OUV_POSN                         equ 0000h
VOTUVLO_OUV_POSITION                     equ 0000h
VOTUVLO_OUV_SIZE                         equ 0004h
VOTUVLO_OUV_LENGTH                       equ 0004h
VOTUVLO_OUV_MASK                         equ 000Fh

// Register: VOTOVLO
#define VOTOVLO VOTOVLO
VOTOVLO                                  equ 009Ah
// bitfield definitions
VOTOVLO_OOV_POSN                         equ 0000h
VOTOVLO_OOV_POSITION                     equ 0000h
VOTOVLO_OOV_SIZE                         equ 0004h
VOTOVLO_OOV_LENGTH                       equ 0004h
VOTOVLO_OOV_MASK                         equ 000Fh

// Register: DEADCON
#define DEADCON DEADCON
DEADCON                                  equ 009Bh
// bitfield definitions
DEADCON_LDLY_POSN                        equ 0000h
DEADCON_LDLY_POSITION                    equ 0000h
DEADCON_LDLY_SIZE                        equ 0004h
DEADCON_LDLY_LENGTH                      equ 0004h
DEADCON_LDLY_MASK                        equ 000Fh
DEADCON_HDLY_POSN                        equ 0004h
DEADCON_HDLY_POSITION                    equ 0004h
DEADCON_HDLY_SIZE                        equ 0004h
DEADCON_HDLY_LENGTH                      equ 0004h
DEADCON_HDLY_MASK                        equ 00F0h

// Register: RAMPCON
#define RAMPCON RAMPCON
RAMPCON                                  equ 009Ch
// bitfield definitions
RAMPCON_RMP_POSN                         equ 0000h
RAMPCON_RMP_POSITION                     equ 0000h
RAMPCON_RMP_SIZE                         equ 0005h
RAMPCON_RMP_LENGTH                       equ 0005h
RAMPCON_RMP_MASK                         equ 001Fh
RAMPCON_RAMPEN_POSN                      equ 0007h
RAMPCON_RAMPEN_POSITION                  equ 0007h
RAMPCON_RAMPEN_SIZE                      equ 0001h
RAMPCON_RAMPEN_LENGTH                    equ 0001h
RAMPCON_RAMPEN_MASK                      equ 0080h

// Register: OCCON
#define OCCON OCCON
OCCON                                    equ 009Dh
// bitfield definitions
OCCON_OOC_POSN                           equ 0000h
OCCON_OOC_POSITION                       equ 0000h
OCCON_OOC_SIZE                           equ 0005h
OCCON_OOC_LENGTH                         equ 0005h
OCCON_OOC_MASK                           equ 001Fh
OCCON_OCLEB_POSN                         equ 0005h
OCCON_OCLEB_POSITION                     equ 0005h
OCCON_OCLEB_SIZE                         equ 0002h
OCCON_OCLEB_LENGTH                       equ 0002h
OCCON_OCLEB_MASK                         equ 0060h
OCCON_OCEN_POSN                          equ 0007h
OCCON_OCEN_POSITION                      equ 0007h
OCCON_OCEN_SIZE                          equ 0001h
OCCON_OCEN_LENGTH                        equ 0001h
OCCON_OCEN_MASK                          equ 0080h

// Register: CSGSCON
#define CSGSCON CSGSCON
CSGSCON                                  equ 009Eh
// bitfield definitions
CSGSCON_CSGS_POSN                        equ 0000h
CSGSCON_CSGS_POSITION                    equ 0000h
CSGSCON_CSGS_SIZE                        equ 0005h
CSGSCON_CSGS_LENGTH                      equ 0005h
CSGSCON_CSGS_MASK                        equ 001Fh

// Register: RELEFF
#define RELEFF RELEFF
RELEFF                                   equ 009Fh
// bitfield definitions
RELEFF_RE_POSN                           equ 0000h
RELEFF_RE_POSITION                       equ 0000h
RELEFF_RE_SIZE                           equ 0007h
RELEFF_RE_LENGTH                         equ 0007h
RELEFF_RE_MASK                           equ 007Fh
RELEFF_MSDONE_POSN                       equ 0007h
RELEFF_MSDONE_POSITION                   equ 0007h
RELEFF_MSDONE_SIZE                       equ 0001h
RELEFF_MSDONE_LENGTH                     equ 0001h
RELEFF_MSDONE_MASK                       equ 0080h

// Register: WPUGPA
#define WPUGPA WPUGPA
WPUGPA                                   equ 0105h
// bitfield definitions
WPUGPA_WPUA0_POSN                        equ 0000h
WPUGPA_WPUA0_POSITION                    equ 0000h
WPUGPA_WPUA0_SIZE                        equ 0001h
WPUGPA_WPUA0_LENGTH                      equ 0001h
WPUGPA_WPUA0_MASK                        equ 0001h
WPUGPA_WPUA1_POSN                        equ 0001h
WPUGPA_WPUA1_POSITION                    equ 0001h
WPUGPA_WPUA1_SIZE                        equ 0001h
WPUGPA_WPUA1_LENGTH                      equ 0001h
WPUGPA_WPUA1_MASK                        equ 0002h
WPUGPA_WCS0_POSN                         equ 0002h
WPUGPA_WCS0_POSITION                     equ 0002h
WPUGPA_WCS0_SIZE                         equ 0001h
WPUGPA_WCS0_LENGTH                       equ 0001h
WPUGPA_WCS0_MASK                         equ 0004h
WPUGPA_WCS1_POSN                         equ 0003h
WPUGPA_WCS1_POSITION                     equ 0003h
WPUGPA_WCS1_SIZE                         equ 0001h
WPUGPA_WCS1_LENGTH                       equ 0001h
WPUGPA_WCS1_MASK                         equ 0008h
WPUGPA_WPUA5_POSN                        equ 0005h
WPUGPA_WPUA5_POSITION                    equ 0005h
WPUGPA_WPUA5_SIZE                        equ 0001h
WPUGPA_WPUA5_LENGTH                      equ 0001h
WPUGPA_WPUA5_MASK                        equ 0020h
WPUGPA_WPUGPA0_POSN                      equ 0000h
WPUGPA_WPUGPA0_POSITION                  equ 0000h
WPUGPA_WPUGPA0_SIZE                      equ 0001h
WPUGPA_WPUGPA0_LENGTH                    equ 0001h
WPUGPA_WPUGPA0_MASK                      equ 0001h
WPUGPA_WPUGPA1_POSN                      equ 0001h
WPUGPA_WPUGPA1_POSITION                  equ 0001h
WPUGPA_WPUGPA1_SIZE                      equ 0001h
WPUGPA_WPUGPA1_LENGTH                    equ 0001h
WPUGPA_WPUGPA1_MASK                      equ 0002h
WPUGPA_WPUGPA2_POSN                      equ 0002h
WPUGPA_WPUGPA2_POSITION                  equ 0002h
WPUGPA_WPUGPA2_SIZE                      equ 0001h
WPUGPA_WPUGPA2_LENGTH                    equ 0001h
WPUGPA_WPUGPA2_MASK                      equ 0004h
WPUGPA_WPUGPA3_POSN                      equ 0003h
WPUGPA_WPUGPA3_POSITION                  equ 0003h
WPUGPA_WPUGPA3_SIZE                      equ 0001h
WPUGPA_WPUGPA3_LENGTH                    equ 0001h
WPUGPA_WPUGPA3_MASK                      equ 0008h
WPUGPA_WPUGPA5_POSN                      equ 0005h
WPUGPA_WPUGPA5_POSITION                  equ 0005h
WPUGPA_WPUGPA5_SIZE                      equ 0001h
WPUGPA_WPUGPA5_LENGTH                    equ 0001h
WPUGPA_WPUGPA5_MASK                      equ 0020h

// Register: WPUGPB
#define WPUGPB WPUGPB
WPUGPB                                   equ 0106h
// bitfield definitions
WPUGPB_WPUB1_POSN                        equ 0001h
WPUGPB_WPUB1_POSITION                    equ 0001h
WPUGPB_WPUB1_SIZE                        equ 0001h
WPUGPB_WPUB1_LENGTH                      equ 0001h
WPUGPB_WPUB1_MASK                        equ 0002h
WPUGPB_WPUB2_POSN                        equ 0002h
WPUGPB_WPUB2_POSITION                    equ 0002h
WPUGPB_WPUB2_SIZE                        equ 0001h
WPUGPB_WPUB2_LENGTH                      equ 0001h
WPUGPB_WPUB2_MASK                        equ 0004h
WPUGPB_WPUB3_POSN                        equ 0003h
WPUGPB_WPUB3_POSITION                    equ 0003h
WPUGPB_WPUB3_SIZE                        equ 0001h
WPUGPB_WPUB3_LENGTH                      equ 0001h
WPUGPB_WPUB3_MASK                        equ 0008h
WPUGPB_WPUGPB1_POSN                      equ 0001h
WPUGPB_WPUGPB1_POSITION                  equ 0001h
WPUGPB_WPUGPB1_SIZE                      equ 0001h
WPUGPB_WPUGPB1_LENGTH                    equ 0001h
WPUGPB_WPUGPB1_MASK                      equ 0002h
WPUGPB_WPUGPB2_POSN                      equ 0002h
WPUGPB_WPUGPB2_POSITION                  equ 0002h
WPUGPB_WPUGPB2_SIZE                      equ 0001h
WPUGPB_WPUGPB2_LENGTH                    equ 0001h
WPUGPB_WPUGPB2_MASK                      equ 0004h
WPUGPB_WPUGPB3_POSN                      equ 0003h
WPUGPB_WPUGPB3_POSITION                  equ 0003h
WPUGPB_WPUGPB3_SIZE                      equ 0001h
WPUGPB_WPUGPB3_LENGTH                    equ 0001h
WPUGPB_WPUGPB3_MASK                      equ 0008h

// Register: PE1
#define PE1 PE1
PE1                                      equ 0107h
// bitfield definitions
PE1_OVTEE_POSN                           equ 0000h
PE1_OVTEE_POSITION                       equ 0000h
PE1_OVTEE_SIZE                           equ 0001h
PE1_OVTEE_LENGTH                         equ 0001h
PE1_OVTEE_MASK                           equ 0001h
PE1_UVTEE_POSN                           equ 0001h
PE1_UVTEE_POSITION                       equ 0001h
PE1_UVTEE_SIZE                           equ 0001h
PE1_UVTEE_LENGTH                         equ 0001h
PE1_UVTEE_MASK                           equ 0002h
PE1_SPAN_POSN                            equ 0002h
PE1_SPAN_POSITION                        equ 0002h
PE1_SPAN_SIZE                            equ 0001h
PE1_SPAN_LENGTH                          equ 0001h
PE1_SPAN_MASK                            equ 0004h
PE1_MEASEN_POSN                          equ 0003h
PE1_MEASEN_POSITION                      equ 0003h
PE1_MEASEN_SIZE                          equ 0001h
PE1_MEASEN_LENGTH                        equ 0001h
PE1_MEASEN_MASK                          equ 0008h
PE1_LODIS_POSN                           equ 0004h
PE1_LODIS_POSITION                       equ 0004h
PE1_LODIS_SIZE                           equ 0001h
PE1_LODIS_LENGTH                         equ 0001h
PE1_LODIS_MASK                           equ 0010h
PE1_HIDIS_POSN                           equ 0005h
PE1_HIDIS_POSITION                       equ 0005h
PE1_HIDIS_SIZE                           equ 0001h
PE1_HIDIS_LENGTH                         equ 0001h
PE1_HIDIS_MASK                           equ 0020h
PE1_TOPO_POSN                            equ 0006h
PE1_TOPO_POSITION                        equ 0006h
PE1_TOPO_SIZE                            equ 0001h
PE1_TOPO_LENGTH                          equ 0001h
PE1_TOPO_MASK                            equ 0040h
PE1_DECON_POSN                           equ 0007h
PE1_DECON_POSITION                       equ 0007h
PE1_DECON_SIZE                           equ 0001h
PE1_DECON_LENGTH                         equ 0001h
PE1_DECON_MASK                           equ 0080h

// Register: MODECON
#define MODECON MODECON
MODECON                                  equ 0108h
// bitfield definitions
MODECON_MSC_POSN                         equ 0000h
MODECON_MSC_POSITION                     equ 0000h
MODECON_MSC_SIZE                         equ 0003h
MODECON_MSC_LENGTH                       equ 0003h
MODECON_MSC_MASK                         equ 0007h
MODECON_EACLMP_POSN                      equ 0003h
MODECON_EACLMP_POSITION                  equ 0003h
MODECON_EACLMP_SIZE                      equ 0001h
MODECON_EACLMP_LENGTH                    equ 0001h
MODECON_EACLMP_MASK                      equ 0008h
MODECON_CNSG_POSN                        equ 0004h
MODECON_CNSG_POSITION                    equ 0004h
MODECON_CNSG_SIZE                        equ 0001h
MODECON_CNSG_LENGTH                      equ 0001h
MODECON_CNSG_MASK                        equ 0010h
MODECON_VDDEN_POSN                       equ 0005h
MODECON_VDDEN_POSITION                   equ 0005h
MODECON_VDDEN_SIZE                       equ 0001h
MODECON_VDDEN_LENGTH                     equ 0001h
MODECON_VDDEN_MASK                       equ 0020h
MODECON_VGNDEN_POSN                      equ 0006h
MODECON_VGNDEN_POSITION                  equ 0006h
MODECON_VGNDEN_SIZE                      equ 0001h
MODECON_VGNDEN_LENGTH                    equ 0001h
MODECON_VGNDEN_MASK                      equ 0040h
MODECON_CLMPSEL_POSN                     equ 0007h
MODECON_CLMPSEL_POSITION                 equ 0007h
MODECON_CLMPSEL_SIZE                     equ 0001h
MODECON_CLMPSEL_LENGTH                   equ 0001h
MODECON_CLMPSEL_MASK                     equ 0080h

// Register: SSPADD
#define SSPADD SSPADD
SSPADD                                   equ 0110h
// bitfield definitions
SSPADD_ADD_POSN                          equ 0000h
SSPADD_ADD_POSITION                      equ 0000h
SSPADD_ADD_SIZE                          equ 0008h
SSPADD_ADD_LENGTH                        equ 0008h
SSPADD_ADD_MASK                          equ 00FFh

// Register: SSPBUF
#define SSPBUF SSPBUF
SSPBUF                                   equ 0111h
// bitfield definitions
SSPBUF_SSPBUF_POSN                       equ 0000h
SSPBUF_SSPBUF_POSITION                   equ 0000h
SSPBUF_SSPBUF_SIZE                       equ 0008h
SSPBUF_SSPBUF_LENGTH                     equ 0008h
SSPBUF_SSPBUF_MASK                       equ 00FFh

// Register: SSPCON1
#define SSPCON1 SSPCON1
SSPCON1                                  equ 0112h
// bitfield definitions
SSPCON1_SSPM_POSN                        equ 0000h
SSPCON1_SSPM_POSITION                    equ 0000h
SSPCON1_SSPM_SIZE                        equ 0004h
SSPCON1_SSPM_LENGTH                      equ 0004h
SSPCON1_SSPM_MASK                        equ 000Fh
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

// Register: SSPCON2
#define SSPCON2 SSPCON2
SSPCON2                                  equ 0113h
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
SSPCON3                                  equ 0114h
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

// Register: SSPMSK
#define SSPMSK SSPMSK
SSPMSK                                   equ 0115h
// bitfield definitions
SSPMSK_MSK_POSN                          equ 0000h
SSPMSK_MSK_POSITION                      equ 0000h
SSPMSK_MSK_SIZE                          equ 0008h
SSPMSK_MSK_LENGTH                        equ 0008h
SSPMSK_MSK_MASK                          equ 00FFh

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
SSPSTAT                                  equ 0116h
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

// Register: SSPADD2
#define SSPADD2 SSPADD2
SSPADD2                                  equ 0117h
// bitfield definitions
SSPADD2_ADD2_POSN                        equ 0000h
SSPADD2_ADD2_POSITION                    equ 0000h
SSPADD2_ADD2_SIZE                        equ 0008h
SSPADD2_ADD2_LENGTH                      equ 0008h
SSPADD2_ADD2_MASK                        equ 00FFh

// Register: SSPMSK2
#define SSPMSK2 SSPMSK2
SSPMSK2                                  equ 0118h
// bitfield definitions
SSPMSK2_MSK2_POSN                        equ 0000h
SSPMSK2_MSK2_POSITION                    equ 0000h
SSPMSK2_MSK2_SIZE                        equ 0008h
SSPMSK2_MSK2_LENGTH                      equ 0008h
SSPMSK2_MSK2_MASK                        equ 00FFh

// Register: VREFCAL
#define VREFCAL VREFCAL
VREFCAL                                  equ 0119h
// bitfield definitions
VREFCAL_VREF0_POSN                       equ 0000h
VREFCAL_VREF0_POSITION                   equ 0000h
VREFCAL_VREF0_SIZE                       equ 0001h
VREFCAL_VREF0_LENGTH                     equ 0001h
VREFCAL_VREF0_MASK                       equ 0001h
VREFCAL_VREF1_POSN                       equ 0001h
VREFCAL_VREF1_POSITION                   equ 0001h
VREFCAL_VREF1_SIZE                       equ 0001h
VREFCAL_VREF1_LENGTH                     equ 0001h
VREFCAL_VREF1_MASK                       equ 0002h
VREFCAL_VREF2_POSN                       equ 0002h
VREFCAL_VREF2_POSITION                   equ 0002h
VREFCAL_VREF2_SIZE                       equ 0001h
VREFCAL_VREF2_LENGTH                     equ 0001h
VREFCAL_VREF2_MASK                       equ 0004h
VREFCAL_VREF3_POSN                       equ 0003h
VREFCAL_VREF3_POSITION                   equ 0003h
VREFCAL_VREF3_SIZE                       equ 0001h
VREFCAL_VREF3_LENGTH                     equ 0001h
VREFCAL_VREF3_MASK                       equ 0008h
VREFCAL_VREF4_POSN                       equ 0004h
VREFCAL_VREF4_POSITION                   equ 0004h
VREFCAL_VREF4_SIZE                       equ 0001h
VREFCAL_VREF4_LENGTH                     equ 0001h
VREFCAL_VREF4_MASK                       equ 0010h

// Register: VRFSCAL
#define VRFSCAL VRFSCAL
VRFSCAL                                  equ 011Ah
// bitfield definitions
VRFSCAL_VRFS0_POSN                       equ 0000h
VRFSCAL_VRFS0_POSITION                   equ 0000h
VRFSCAL_VRFS0_SIZE                       equ 0001h
VRFSCAL_VRFS0_LENGTH                     equ 0001h
VRFSCAL_VRFS0_MASK                       equ 0001h
VRFSCAL_VRFS1_POSN                       equ 0001h
VRFSCAL_VRFS1_POSITION                   equ 0001h
VRFSCAL_VRFS1_SIZE                       equ 0001h
VRFSCAL_VRFS1_LENGTH                     equ 0001h
VRFSCAL_VRFS1_MASK                       equ 0002h
VRFSCAL_VRFS2_POSN                       equ 0002h
VRFSCAL_VRFS2_POSITION                   equ 0002h
VRFSCAL_VRFS2_SIZE                       equ 0001h
VRFSCAL_VRFS2_LENGTH                     equ 0001h
VRFSCAL_VRFS2_MASK                       equ 0004h
VRFSCAL_VRFS3_POSN                       equ 0003h
VRFSCAL_VRFS3_POSITION                   equ 0003h
VRFSCAL_VRFS3_SIZE                       equ 0001h
VRFSCAL_VRFS3_LENGTH                     equ 0001h
VRFSCAL_VRFS3_MASK                       equ 0008h
VRFSCAL_VRFS4_POSN                       equ 0004h
VRFSCAL_VRFS4_POSITION                   equ 0004h
VRFSCAL_VRFS4_SIZE                       equ 0001h
VRFSCAL_VRFS4_LENGTH                     equ 0001h
VRFSCAL_VRFS4_MASK                       equ 0010h

// Register: RAMPCAL
#define RAMPCAL RAMPCAL
RAMPCAL                                  equ 011Bh
// bitfield definitions
RAMPCAL_RAMP0_POSN                       equ 0000h
RAMPCAL_RAMP0_POSITION                   equ 0000h
RAMPCAL_RAMP0_SIZE                       equ 0001h
RAMPCAL_RAMP0_LENGTH                     equ 0001h
RAMPCAL_RAMP0_MASK                       equ 0001h
RAMPCAL_RAMP1_POSN                       equ 0001h
RAMPCAL_RAMP1_POSITION                   equ 0001h
RAMPCAL_RAMP1_SIZE                       equ 0001h
RAMPCAL_RAMP1_LENGTH                     equ 0001h
RAMPCAL_RAMP1_MASK                       equ 0002h
RAMPCAL_RAMP2_POSN                       equ 0002h
RAMPCAL_RAMP2_POSITION                   equ 0002h
RAMPCAL_RAMP2_SIZE                       equ 0001h
RAMPCAL_RAMP2_LENGTH                     equ 0001h
RAMPCAL_RAMP2_MASK                       equ 0004h
RAMPCAL_RAMP3_POSN                       equ 0003h
RAMPCAL_RAMP3_POSITION                   equ 0003h
RAMPCAL_RAMP3_SIZE                       equ 0001h
RAMPCAL_RAMP3_LENGTH                     equ 0001h
RAMPCAL_RAMP3_MASK                       equ 0008h
RAMPCAL_RAMP4_POSN                       equ 0004h
RAMPCAL_RAMP4_POSITION                   equ 0004h
RAMPCAL_RAMP4_SIZE                       equ 0001h
RAMPCAL_RAMP4_LENGTH                     equ 0001h
RAMPCAL_RAMP4_MASK                       equ 0010h

// Register: CSRCAL
#define CSRCAL CSRCAL
CSRCAL                                   equ 011Ch
// bitfield definitions
CSRCAL_CSR0_POSN                         equ 0000h
CSRCAL_CSR0_POSITION                     equ 0000h
CSRCAL_CSR0_SIZE                         equ 0001h
CSRCAL_CSR0_LENGTH                       equ 0001h
CSRCAL_CSR0_MASK                         equ 0001h
CSRCAL_CSR1_POSN                         equ 0001h
CSRCAL_CSR1_POSITION                     equ 0001h
CSRCAL_CSR1_SIZE                         equ 0001h
CSRCAL_CSR1_LENGTH                       equ 0001h
CSRCAL_CSR1_MASK                         equ 0002h
CSRCAL_CSR2_POSN                         equ 0002h
CSRCAL_CSR2_POSITION                     equ 0002h
CSRCAL_CSR2_SIZE                         equ 0001h
CSRCAL_CSR2_LENGTH                       equ 0001h
CSRCAL_CSR2_MASK                         equ 0004h
CSRCAL_CSR3_POSN                         equ 0003h
CSRCAL_CSR3_POSITION                     equ 0003h
CSRCAL_CSR3_SIZE                         equ 0001h
CSRCAL_CSR3_LENGTH                       equ 0001h
CSRCAL_CSR3_MASK                         equ 0008h
CSRCAL_CSR4_POSN                         equ 0004h
CSRCAL_CSR4_POSITION                     equ 0004h
CSRCAL_CSR4_SIZE                         equ 0001h
CSRCAL_CSR4_LENGTH                       equ 0001h
CSRCAL_CSR4_MASK                         equ 0010h

// Register: OVUVCAL
#define OVUVCAL OVUVCAL
OVUVCAL                                  equ 011Dh
// bitfield definitions
OVUVCAL_OVCO_POSN                        equ 0000h
OVUVCAL_OVCO_POSITION                    equ 0000h
OVUVCAL_OVCO_SIZE                        equ 0004h
OVUVCAL_OVCO_LENGTH                      equ 0004h
OVUVCAL_OVCO_MASK                        equ 000Fh
OVUVCAL_UVCO_POSN                        equ 0004h
OVUVCAL_UVCO_POSITION                    equ 0004h
OVUVCAL_UVCO_SIZE                        equ 0004h
OVUVCAL_UVCO_LENGTH                      equ 0004h
OVUVCAL_UVCO_MASK                        equ 00F0h

// Register: DEMCAL
#define DEMCAL DEMCAL
DEMCAL                                   equ 011Eh
// bitfield definitions
DEMCAL_DEMOV0_POSN                       equ 0000h
DEMCAL_DEMOV0_POSITION                   equ 0000h
DEMCAL_DEMOV0_SIZE                       equ 0001h
DEMCAL_DEMOV0_LENGTH                     equ 0001h
DEMCAL_DEMOV0_MASK                       equ 0001h
DEMCAL_DEMOV1_POSN                       equ 0001h
DEMCAL_DEMOV1_POSITION                   equ 0001h
DEMCAL_DEMOV1_SIZE                       equ 0001h
DEMCAL_DEMOV1_LENGTH                     equ 0001h
DEMCAL_DEMOV1_MASK                       equ 0002h
DEMCAL_DEMOV2_POSN                       equ 0002h
DEMCAL_DEMOV2_POSITION                   equ 0002h
DEMCAL_DEMOV2_SIZE                       equ 0001h
DEMCAL_DEMOV2_LENGTH                     equ 0001h
DEMCAL_DEMOV2_MASK                       equ 0004h
DEMCAL_DEMOV3_POSN                       equ 0003h
DEMCAL_DEMOV3_POSITION                   equ 0003h
DEMCAL_DEMOV3_SIZE                       equ 0001h
DEMCAL_DEMOV3_LENGTH                     equ 0001h
DEMCAL_DEMOV3_MASK                       equ 0008h
DEMCAL_DEMOV4_POSN                       equ 0004h
DEMCAL_DEMOV4_POSITION                   equ 0004h
DEMCAL_DEMOV4_SIZE                       equ 0001h
DEMCAL_DEMOV4_LENGTH                     equ 0001h
DEMCAL_DEMOV4_MASK                       equ 0010h

// Register: HCSOVCAL
#define HCSOVCAL HCSOVCAL
HCSOVCAL                                 equ 011Fh
// bitfield definitions
HCSOVCAL_HCSOV0_POSN                     equ 0000h
HCSOVCAL_HCSOV0_POSITION                 equ 0000h
HCSOVCAL_HCSOV0_SIZE                     equ 0001h
HCSOVCAL_HCSOV0_LENGTH                   equ 0001h
HCSOVCAL_HCSOV0_MASK                     equ 0001h
HCSOVCAL_HCSOV1_POSN                     equ 0001h
HCSOVCAL_HCSOV1_POSITION                 equ 0001h
HCSOVCAL_HCSOV1_SIZE                     equ 0001h
HCSOVCAL_HCSOV1_LENGTH                   equ 0001h
HCSOVCAL_HCSOV1_MASK                     equ 0002h
HCSOVCAL_HCSOV2_POSN                     equ 0002h
HCSOVCAL_HCSOV2_POSITION                 equ 0002h
HCSOVCAL_HCSOV2_SIZE                     equ 0001h
HCSOVCAL_HCSOV2_LENGTH                   equ 0001h
HCSOVCAL_HCSOV2_MASK                     equ 0004h
HCSOVCAL_HCSOV3_POSN                     equ 0003h
HCSOVCAL_HCSOV3_POSITION                 equ 0003h
HCSOVCAL_HCSOV3_SIZE                     equ 0001h
HCSOVCAL_HCSOV3_LENGTH                   equ 0001h
HCSOVCAL_HCSOV3_MASK                     equ 0008h
HCSOVCAL_HCSOV4_POSN                     equ 0004h
HCSOVCAL_HCSOV4_POSITION                 equ 0004h
HCSOVCAL_HCSOV4_SIZE                     equ 0001h
HCSOVCAL_HCSOV4_LENGTH                   equ 0001h
HCSOVCAL_HCSOV4_MASK                     equ 0010h
HCSOVCAL_HCSOV5_POSN                     equ 0005h
HCSOVCAL_HCSOV5_POSITION                 equ 0005h
HCSOVCAL_HCSOV5_SIZE                     equ 0001h
HCSOVCAL_HCSOV5_LENGTH                   equ 0001h
HCSOVCAL_HCSOV5_MASK                     equ 0020h
HCSOVCAL_HCSOV6_POSN                     equ 0006h
HCSOVCAL_HCSOV6_POSITION                 equ 0006h
HCSOVCAL_HCSOV6_SIZE                     equ 0001h
HCSOVCAL_HCSOV6_LENGTH                   equ 0001h
HCSOVCAL_HCSOV6_MASK                     equ 0040h

// Register: IOCA
#define IOCA IOCA
IOCA                                     equ 0185h
// bitfield definitions
IOCA_IOCA0_POSN                          equ 0000h
IOCA_IOCA0_POSITION                      equ 0000h
IOCA_IOCA0_SIZE                          equ 0001h
IOCA_IOCA0_LENGTH                        equ 0001h
IOCA_IOCA0_MASK                          equ 0001h
IOCA_IOCA1_POSN                          equ 0001h
IOCA_IOCA1_POSITION                      equ 0001h
IOCA_IOCA1_SIZE                          equ 0001h
IOCA_IOCA1_LENGTH                        equ 0001h
IOCA_IOCA1_MASK                          equ 0002h
IOCA_IOCA2_POSN                          equ 0002h
IOCA_IOCA2_POSITION                      equ 0002h
IOCA_IOCA2_SIZE                          equ 0001h
IOCA_IOCA2_LENGTH                        equ 0001h
IOCA_IOCA2_MASK                          equ 0004h
IOCA_IOCA3_POSN                          equ 0003h
IOCA_IOCA3_POSITION                      equ 0003h
IOCA_IOCA3_SIZE                          equ 0001h
IOCA_IOCA3_LENGTH                        equ 0001h
IOCA_IOCA3_MASK                          equ 0008h
IOCA_IOCA4_POSN                          equ 0004h
IOCA_IOCA4_POSITION                      equ 0004h
IOCA_IOCA4_SIZE                          equ 0001h
IOCA_IOCA4_LENGTH                        equ 0001h
IOCA_IOCA4_MASK                          equ 0010h
IOCA_IOCA5_POSN                          equ 0005h
IOCA_IOCA5_POSITION                      equ 0005h
IOCA_IOCA5_SIZE                          equ 0001h
IOCA_IOCA5_LENGTH                        equ 0001h
IOCA_IOCA5_MASK                          equ 0020h
IOCA_IOCA6_POSN                          equ 0006h
IOCA_IOCA6_POSITION                      equ 0006h
IOCA_IOCA6_SIZE                          equ 0001h
IOCA_IOCA6_LENGTH                        equ 0001h
IOCA_IOCA6_MASK                          equ 0040h
IOCA_IOCA7_POSN                          equ 0007h
IOCA_IOCA7_POSITION                      equ 0007h
IOCA_IOCA7_SIZE                          equ 0001h
IOCA_IOCA7_LENGTH                        equ 0001h
IOCA_IOCA7_MASK                          equ 0080h

// Register: IOCB
#define IOCB IOCB
IOCB                                     equ 0186h
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

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 0187h
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

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 0188h
// bitfield definitions
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

// Register: PMCON1
#define PMCON1 PMCON1
PMCON1                                   equ 0190h
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
PMCON1_CALSEL_POSN                       equ 0006h
PMCON1_CALSEL_POSITION                   equ 0006h
PMCON1_CALSEL_SIZE                       equ 0001h
PMCON1_CALSEL_LENGTH                     equ 0001h
PMCON1_CALSEL_MASK                       equ 0040h

// Register: PMCON2
#define PMCON2 PMCON2
PMCON2                                   equ 0191h
// bitfield definitions
PMCON2_PMCON2_POSN                       equ 0000h
PMCON2_PMCON2_POSITION                   equ 0000h
PMCON2_PMCON2_SIZE                       equ 0008h
PMCON2_PMCON2_LENGTH                     equ 0008h
PMCON2_PMCON2_MASK                       equ 00FFh

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 0192h
// bitfield definitions
PMADRL_PMADRL_POSN                       equ 0000h
PMADRL_PMADRL_POSITION                   equ 0000h
PMADRL_PMADRL_SIZE                       equ 0008h
PMADRL_PMADRL_LENGTH                     equ 0008h
PMADRL_PMADRL_MASK                       equ 00FFh
PMADRL_PMADRL0_POSN                      equ 0000h
PMADRL_PMADRL0_POSITION                  equ 0000h
PMADRL_PMADRL0_SIZE                      equ 0001h
PMADRL_PMADRL0_LENGTH                    equ 0001h
PMADRL_PMADRL0_MASK                      equ 0001h
PMADRL_PMADRL1_POSN                      equ 0001h
PMADRL_PMADRL1_POSITION                  equ 0001h
PMADRL_PMADRL1_SIZE                      equ 0001h
PMADRL_PMADRL1_LENGTH                    equ 0001h
PMADRL_PMADRL1_MASK                      equ 0002h
PMADRL_PMADRL2_POSN                      equ 0002h
PMADRL_PMADRL2_POSITION                  equ 0002h
PMADRL_PMADRL2_SIZE                      equ 0001h
PMADRL_PMADRL2_LENGTH                    equ 0001h
PMADRL_PMADRL2_MASK                      equ 0004h
PMADRL_PMADRL3_POSN                      equ 0003h
PMADRL_PMADRL3_POSITION                  equ 0003h
PMADRL_PMADRL3_SIZE                      equ 0001h
PMADRL_PMADRL3_LENGTH                    equ 0001h
PMADRL_PMADRL3_MASK                      equ 0008h
PMADRL_PMADRL4_POSN                      equ 0004h
PMADRL_PMADRL4_POSITION                  equ 0004h
PMADRL_PMADRL4_SIZE                      equ 0001h
PMADRL_PMADRL4_LENGTH                    equ 0001h
PMADRL_PMADRL4_MASK                      equ 0010h
PMADRL_PMADRL5_POSN                      equ 0005h
PMADRL_PMADRL5_POSITION                  equ 0005h
PMADRL_PMADRL5_SIZE                      equ 0001h
PMADRL_PMADRL5_LENGTH                    equ 0001h
PMADRL_PMADRL5_MASK                      equ 0020h
PMADRL_PMADRL6_POSN                      equ 0006h
PMADRL_PMADRL6_POSITION                  equ 0006h
PMADRL_PMADRL6_SIZE                      equ 0001h
PMADRL_PMADRL6_LENGTH                    equ 0001h
PMADRL_PMADRL6_MASK                      equ 0040h
PMADRL_PMADRL7_POSN                      equ 0007h
PMADRL_PMADRL7_POSITION                  equ 0007h
PMADRL_PMADRL7_SIZE                      equ 0001h
PMADRL_PMADRL7_LENGTH                    equ 0001h
PMADRL_PMADRL7_MASK                      equ 0080h

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 0193h
// bitfield definitions
PMADRH_PMADRH_POSN                       equ 0000h
PMADRH_PMADRH_POSITION                   equ 0000h
PMADRH_PMADRH_SIZE                       equ 0004h
PMADRH_PMADRH_LENGTH                     equ 0004h
PMADRH_PMADRH_MASK                       equ 000Fh
PMADRH_PMADRH0_POSN                      equ 0000h
PMADRH_PMADRH0_POSITION                  equ 0000h
PMADRH_PMADRH0_SIZE                      equ 0001h
PMADRH_PMADRH0_LENGTH                    equ 0001h
PMADRH_PMADRH0_MASK                      equ 0001h
PMADRH_PMADRH1_POSN                      equ 0001h
PMADRH_PMADRH1_POSITION                  equ 0001h
PMADRH_PMADRH1_SIZE                      equ 0001h
PMADRH_PMADRH1_LENGTH                    equ 0001h
PMADRH_PMADRH1_MASK                      equ 0002h
PMADRH_PMADRH2_POSN                      equ 0002h
PMADRH_PMADRH2_POSITION                  equ 0002h
PMADRH_PMADRH2_SIZE                      equ 0001h
PMADRH_PMADRH2_LENGTH                    equ 0001h
PMADRH_PMADRH2_MASK                      equ 0004h
PMADRH_PMADRH3_POSN                      equ 0003h
PMADRH_PMADRH3_POSITION                  equ 0003h
PMADRH_PMADRH3_SIZE                      equ 0001h
PMADRH_PMADRH3_LENGTH                    equ 0001h
PMADRH_PMADRH3_MASK                      equ 0008h

// Register: PMDATL
#define PMDATL PMDATL
PMDATL                                   equ 0194h
// bitfield definitions
PMDATL_PMDATL_POSN                       equ 0000h
PMDATL_PMDATL_POSITION                   equ 0000h
PMDATL_PMDATL_SIZE                       equ 0008h
PMDATL_PMDATL_LENGTH                     equ 0008h
PMDATL_PMDATL_MASK                       equ 00FFh
PMDATL_PMDATL0_POSN                      equ 0000h
PMDATL_PMDATL0_POSITION                  equ 0000h
PMDATL_PMDATL0_SIZE                      equ 0001h
PMDATL_PMDATL0_LENGTH                    equ 0001h
PMDATL_PMDATL0_MASK                      equ 0001h
PMDATL_PMDATL1_POSN                      equ 0001h
PMDATL_PMDATL1_POSITION                  equ 0001h
PMDATL_PMDATL1_SIZE                      equ 0001h
PMDATL_PMDATL1_LENGTH                    equ 0001h
PMDATL_PMDATL1_MASK                      equ 0002h
PMDATL_PMDATL2_POSN                      equ 0002h
PMDATL_PMDATL2_POSITION                  equ 0002h
PMDATL_PMDATL2_SIZE                      equ 0001h
PMDATL_PMDATL2_LENGTH                    equ 0001h
PMDATL_PMDATL2_MASK                      equ 0004h
PMDATL_PMDATL3_POSN                      equ 0003h
PMDATL_PMDATL3_POSITION                  equ 0003h
PMDATL_PMDATL3_SIZE                      equ 0001h
PMDATL_PMDATL3_LENGTH                    equ 0001h
PMDATL_PMDATL3_MASK                      equ 0008h
PMDATL_PMDATL4_POSN                      equ 0004h
PMDATL_PMDATL4_POSITION                  equ 0004h
PMDATL_PMDATL4_SIZE                      equ 0001h
PMDATL_PMDATL4_LENGTH                    equ 0001h
PMDATL_PMDATL4_MASK                      equ 0010h
PMDATL_PMDATL5_POSN                      equ 0005h
PMDATL_PMDATL5_POSITION                  equ 0005h
PMDATL_PMDATL5_SIZE                      equ 0001h
PMDATL_PMDATL5_LENGTH                    equ 0001h
PMDATL_PMDATL5_MASK                      equ 0020h
PMDATL_PMDATL6_POSN                      equ 0006h
PMDATL_PMDATL6_POSITION                  equ 0006h
PMDATL_PMDATL6_SIZE                      equ 0001h
PMDATL_PMDATL6_LENGTH                    equ 0001h
PMDATL_PMDATL6_MASK                      equ 0040h
PMDATL_PMDATL7_POSN                      equ 0007h
PMDATL_PMDATL7_POSITION                  equ 0007h
PMDATL_PMDATL7_SIZE                      equ 0001h
PMDATL_PMDATL7_LENGTH                    equ 0001h
PMDATL_PMDATL7_MASK                      equ 0080h

// Register: PMDATH
#define PMDATH PMDATH
PMDATH                                   equ 0195h
// bitfield definitions
PMDATH_PMDATH_POSN                       equ 0000h
PMDATH_PMDATH_POSITION                   equ 0000h
PMDATH_PMDATH_SIZE                       equ 0006h
PMDATH_PMDATH_LENGTH                     equ 0006h
PMDATH_PMDATH_MASK                       equ 003Fh
PMDATH_PMDATH0_POSN                      equ 0000h
PMDATH_PMDATH0_POSITION                  equ 0000h
PMDATH_PMDATH0_SIZE                      equ 0001h
PMDATH_PMDATH0_LENGTH                    equ 0001h
PMDATH_PMDATH0_MASK                      equ 0001h
PMDATH_PMDATH1_POSN                      equ 0001h
PMDATH_PMDATH1_POSITION                  equ 0001h
PMDATH_PMDATH1_SIZE                      equ 0001h
PMDATH_PMDATH1_LENGTH                    equ 0001h
PMDATH_PMDATH1_MASK                      equ 0002h
PMDATH_PMDATH2_POSN                      equ 0002h
PMDATH_PMDATH2_POSITION                  equ 0002h
PMDATH_PMDATH2_SIZE                      equ 0001h
PMDATH_PMDATH2_LENGTH                    equ 0001h
PMDATH_PMDATH2_MASK                      equ 0004h
PMDATH_PMDATH3_POSN                      equ 0003h
PMDATH_PMDATH3_POSITION                  equ 0003h
PMDATH_PMDATH3_SIZE                      equ 0001h
PMDATH_PMDATH3_LENGTH                    equ 0001h
PMDATH_PMDATH3_MASK                      equ 0008h
PMDATH_PMDATH4_POSN                      equ 0004h
PMDATH_PMDATH4_POSITION                  equ 0004h
PMDATH_PMDATH4_SIZE                      equ 0001h
PMDATH_PMDATH4_LENGTH                    equ 0001h
PMDATH_PMDATH4_MASK                      equ 0010h
PMDATH_PMDATH5_POSN                      equ 0005h
PMDATH_PMDATH5_POSITION                  equ 0005h
PMDATH_PMDATH5_SIZE                      equ 0001h
PMDATH_PMDATH5_LENGTH                    equ 0001h
PMDATH_PMDATH5_MASK                      equ 0020h
PMDATH_PMDATH6_POSN                      equ 0006h
PMDATH_PMDATH6_POSITION                  equ 0006h
PMDATH_PMDATH6_SIZE                      equ 0001h
PMDATH_PMDATH6_LENGTH                    equ 0001h
PMDATH_PMDATH6_MASK                      equ 0040h
PMDATH_PMDATH7_POSN                      equ 0007h
PMDATH_PMDATH7_POSITION                  equ 0007h
PMDATH_PMDATH7_SIZE                      equ 0001h
PMDATH_PMDATH7_LENGTH                    equ 0001h
PMDATH_PMDATH7_MASK                      equ 0080h

// Register: TTACAL
#define TTACAL TTACAL
TTACAL                                   equ 0196h
// bitfield definitions
TTACAL_TTA0_POSN                         equ 0000h
TTACAL_TTA0_POSITION                     equ 0000h
TTACAL_TTA0_SIZE                         equ 0001h
TTACAL_TTA0_LENGTH                       equ 0001h
TTACAL_TTA0_MASK                         equ 0001h
TTACAL_TTA1_POSN                         equ 0001h
TTACAL_TTA1_POSITION                     equ 0001h
TTACAL_TTA1_SIZE                         equ 0001h
TTACAL_TTA1_LENGTH                       equ 0001h
TTACAL_TTA1_MASK                         equ 0002h
TTACAL_TTA2_POSN                         equ 0002h
TTACAL_TTA2_POSITION                     equ 0002h
TTACAL_TTA2_SIZE                         equ 0001h
TTACAL_TTA2_LENGTH                       equ 0001h
TTACAL_TTA2_MASK                         equ 0004h
TTACAL_TTA3_POSN                         equ 0003h
TTACAL_TTA3_POSITION                     equ 0003h
TTACAL_TTA3_SIZE                         equ 0001h
TTACAL_TTA3_LENGTH                       equ 0001h
TTACAL_TTA3_MASK                         equ 0008h

// Register: OSCCAL
#define OSCCAL OSCCAL
OSCCAL                                   equ 0197h
// bitfield definitions
OSCCAL_FCAL0_POSN                        equ 0000h
OSCCAL_FCAL0_POSITION                    equ 0000h
OSCCAL_FCAL0_SIZE                        equ 0001h
OSCCAL_FCAL0_LENGTH                      equ 0001h
OSCCAL_FCAL0_MASK                        equ 0001h
OSCCAL_FCAL1_POSN                        equ 0001h
OSCCAL_FCAL1_POSITION                    equ 0001h
OSCCAL_FCAL1_SIZE                        equ 0001h
OSCCAL_FCAL1_LENGTH                      equ 0001h
OSCCAL_FCAL1_MASK                        equ 0002h
OSCCAL_FCAL2_POSN                        equ 0002h
OSCCAL_FCAL2_POSITION                    equ 0002h
OSCCAL_FCAL2_SIZE                        equ 0001h
OSCCAL_FCAL2_LENGTH                      equ 0001h
OSCCAL_FCAL2_MASK                        equ 0004h
OSCCAL_FCAL3_POSN                        equ 0003h
OSCCAL_FCAL3_POSITION                    equ 0003h
OSCCAL_FCAL3_SIZE                        equ 0001h
OSCCAL_FCAL3_LENGTH                      equ 0001h
OSCCAL_FCAL3_MASK                        equ 0008h
OSCCAL_FCAL4_POSN                        equ 0004h
OSCCAL_FCAL4_POSITION                    equ 0004h
OSCCAL_FCAL4_SIZE                        equ 0001h
OSCCAL_FCAL4_LENGTH                      equ 0001h
OSCCAL_FCAL4_MASK                        equ 0010h
OSCCAL_FCAL5_POSN                        equ 0005h
OSCCAL_FCAL5_POSITION                    equ 0005h
OSCCAL_FCAL5_SIZE                        equ 0001h
OSCCAL_FCAL5_LENGTH                      equ 0001h
OSCCAL_FCAL5_MASK                        equ 0020h
OSCCAL_FCAL6_POSN                        equ 0006h
OSCCAL_FCAL6_POSITION                    equ 0006h
OSCCAL_FCAL6_SIZE                        equ 0001h
OSCCAL_FCAL6_LENGTH                      equ 0001h
OSCCAL_FCAL6_MASK                        equ 0040h

// Register: BGTCAL
#define BGTCAL BGTCAL
BGTCAL                                   equ 0198h
// bitfield definitions
BGTCAL_BGT0_POSN                         equ 0000h
BGTCAL_BGT0_POSITION                     equ 0000h
BGTCAL_BGT0_SIZE                         equ 0001h
BGTCAL_BGT0_LENGTH                       equ 0001h
BGTCAL_BGT0_MASK                         equ 0001h
BGTCAL_BGT1_POSN                         equ 0001h
BGTCAL_BGT1_POSITION                     equ 0001h
BGTCAL_BGT1_SIZE                         equ 0001h
BGTCAL_BGT1_LENGTH                       equ 0001h
BGTCAL_BGT1_MASK                         equ 0002h
BGTCAL_BGT2_POSN                         equ 0002h
BGTCAL_BGT2_POSITION                     equ 0002h
BGTCAL_BGT2_SIZE                         equ 0001h
BGTCAL_BGT2_LENGTH                       equ 0001h
BGTCAL_BGT2_MASK                         equ 0004h
BGTCAL_BGT3_POSN                         equ 0003h
BGTCAL_BGT3_POSITION                     equ 0003h
BGTCAL_BGT3_SIZE                         equ 0001h
BGTCAL_BGT3_LENGTH                       equ 0001h
BGTCAL_BGT3_MASK                         equ 0008h

// Register: BGRCAL
#define BGRCAL BGRCAL
BGRCAL                                   equ 0199h
// bitfield definitions
BGRCAL_BGR0_POSN                         equ 0000h
BGRCAL_BGR0_POSITION                     equ 0000h
BGRCAL_BGR0_SIZE                         equ 0001h
BGRCAL_BGR0_LENGTH                       equ 0001h
BGRCAL_BGR0_MASK                         equ 0001h
BGRCAL_BGR1_POSN                         equ 0001h
BGRCAL_BGR1_POSITION                     equ 0001h
BGRCAL_BGR1_SIZE                         equ 0001h
BGRCAL_BGR1_LENGTH                       equ 0001h
BGRCAL_BGR1_MASK                         equ 0002h
BGRCAL_BGR2_POSN                         equ 0002h
BGRCAL_BGR2_POSITION                     equ 0002h
BGRCAL_BGR2_SIZE                         equ 0001h
BGRCAL_BGR2_LENGTH                       equ 0001h
BGRCAL_BGR2_MASK                         equ 0004h
BGRCAL_BGR3_POSN                         equ 0003h
BGRCAL_BGR3_POSITION                     equ 0003h
BGRCAL_BGR3_SIZE                         equ 0001h
BGRCAL_BGR3_LENGTH                       equ 0001h
BGRCAL_BGR3_MASK                         equ 0008h
BGRCAL_BGR4_POSN                         equ 0004h
BGRCAL_BGR4_POSITION                     equ 0004h
BGRCAL_BGR4_SIZE                         equ 0001h
BGRCAL_BGR4_LENGTH                       equ 0001h
BGRCAL_BGR4_MASK                         equ 0010h
BGRCAL_BGR5_POSN                         equ 0005h
BGRCAL_BGR5_POSITION                     equ 0005h
BGRCAL_BGR5_SIZE                         equ 0001h
BGRCAL_BGR5_LENGTH                       equ 0001h
BGRCAL_BGR5_MASK                         equ 0020h

// Register: AVDDCAL
#define AVDDCAL AVDDCAL
AVDDCAL                                  equ 019Ah
// bitfield definitions
AVDDCAL_AVDD0_POSN                       equ 0000h
AVDDCAL_AVDD0_POSITION                   equ 0000h
AVDDCAL_AVDD0_SIZE                       equ 0001h
AVDDCAL_AVDD0_LENGTH                     equ 0001h
AVDDCAL_AVDD0_MASK                       equ 0001h
AVDDCAL_AVDD1_POSN                       equ 0001h
AVDDCAL_AVDD1_POSITION                   equ 0001h
AVDDCAL_AVDD1_SIZE                       equ 0001h
AVDDCAL_AVDD1_LENGTH                     equ 0001h
AVDDCAL_AVDD1_MASK                       equ 0002h
AVDDCAL_AVDD2_POSN                       equ 0002h
AVDDCAL_AVDD2_POSITION                   equ 0002h
AVDDCAL_AVDD2_SIZE                       equ 0001h
AVDDCAL_AVDD2_LENGTH                     equ 0001h
AVDDCAL_AVDD2_MASK                       equ 0004h
AVDDCAL_AVDD3_POSN                       equ 0003h
AVDDCAL_AVDD3_POSITION                   equ 0003h
AVDDCAL_AVDD3_SIZE                       equ 0001h
AVDDCAL_AVDD3_LENGTH                     equ 0001h
AVDDCAL_AVDD3_MASK                       equ 0008h

// Register: VOURCAL
#define VOURCAL VOURCAL
VOURCAL                                  equ 019Bh
// bitfield definitions
VOURCAL_VOUR0_POSN                       equ 0000h
VOURCAL_VOUR0_POSITION                   equ 0000h
VOURCAL_VOUR0_SIZE                       equ 0001h
VOURCAL_VOUR0_LENGTH                     equ 0001h
VOURCAL_VOUR0_MASK                       equ 0001h
VOURCAL_VOUR1_POSN                       equ 0001h
VOURCAL_VOUR1_POSITION                   equ 0001h
VOURCAL_VOUR1_SIZE                       equ 0001h
VOURCAL_VOUR1_LENGTH                     equ 0001h
VOURCAL_VOUR1_MASK                       equ 0002h
VOURCAL_VOUR2_POSN                       equ 0002h
VOURCAL_VOUR2_POSITION                   equ 0002h
VOURCAL_VOUR2_SIZE                       equ 0001h
VOURCAL_VOUR2_LENGTH                     equ 0001h
VOURCAL_VOUR2_MASK                       equ 0004h
VOURCAL_VOUR3_POSN                       equ 0003h
VOURCAL_VOUR3_POSITION                   equ 0003h
VOURCAL_VOUR3_SIZE                       equ 0001h
VOURCAL_VOUR3_LENGTH                     equ 0001h
VOURCAL_VOUR3_MASK                       equ 0008h
VOURCAL_VOUR4_POSN                       equ 0004h
VOURCAL_VOUR4_POSITION                   equ 0004h
VOURCAL_VOUR4_SIZE                       equ 0001h
VOURCAL_VOUR4_LENGTH                     equ 0001h
VOURCAL_VOUR4_MASK                       equ 0010h

// Register: DOVCAL
#define DOVCAL DOVCAL
DOVCAL                                   equ 019Ch
// bitfield definitions
DOVCAL_DOV0_POSN                         equ 0000h
DOVCAL_DOV0_POSITION                     equ 0000h
DOVCAL_DOV0_SIZE                         equ 0001h
DOVCAL_DOV0_LENGTH                       equ 0001h
DOVCAL_DOV0_MASK                         equ 0001h
DOVCAL_DOV1_POSN                         equ 0001h
DOVCAL_DOV1_POSITION                     equ 0001h
DOVCAL_DOV1_SIZE                         equ 0001h
DOVCAL_DOV1_LENGTH                       equ 0001h
DOVCAL_DOV1_MASK                         equ 0002h
DOVCAL_DOV2_POSN                         equ 0002h
DOVCAL_DOV2_POSITION                     equ 0002h
DOVCAL_DOV2_SIZE                         equ 0001h
DOVCAL_DOV2_LENGTH                       equ 0001h
DOVCAL_DOV2_MASK                         equ 0004h
DOVCAL_DOV3_POSN                         equ 0003h
DOVCAL_DOV3_POSITION                     equ 0003h
DOVCAL_DOV3_SIZE                         equ 0001h
DOVCAL_DOV3_LENGTH                       equ 0001h
DOVCAL_DOV3_MASK                         equ 0008h
DOVCAL_DOV4_POSN                         equ 0004h
DOVCAL_DOV4_POSITION                     equ 0004h
DOVCAL_DOV4_SIZE                         equ 0001h
DOVCAL_DOV4_LENGTH                       equ 0001h
DOVCAL_DOV4_MASK                         equ 0010h

// Register: VEAOCAL
#define VEAOCAL VEAOCAL
VEAOCAL                                  equ 019Dh
// bitfield definitions
VEAOCAL_VEAO0_POSN                       equ 0000h
VEAOCAL_VEAO0_POSITION                   equ 0000h
VEAOCAL_VEAO0_SIZE                       equ 0001h
VEAOCAL_VEAO0_LENGTH                     equ 0001h
VEAOCAL_VEAO0_MASK                       equ 0001h
VEAOCAL_VEAO1_POSN                       equ 0001h
VEAOCAL_VEAO1_POSITION                   equ 0001h
VEAOCAL_VEAO1_SIZE                       equ 0001h
VEAOCAL_VEAO1_LENGTH                     equ 0001h
VEAOCAL_VEAO1_MASK                       equ 0002h
VEAOCAL_VEAO2_POSN                       equ 0002h
VEAOCAL_VEAO2_POSITION                   equ 0002h
VEAOCAL_VEAO2_SIZE                       equ 0001h
VEAOCAL_VEAO2_LENGTH                     equ 0001h
VEAOCAL_VEAO2_MASK                       equ 0004h
VEAOCAL_VEAO3_POSN                       equ 0003h
VEAOCAL_VEAO3_POSITION                   equ 0003h
VEAOCAL_VEAO3_SIZE                       equ 0001h
VEAOCAL_VEAO3_LENGTH                     equ 0001h
VEAOCAL_VEAO3_MASK                       equ 0008h
VEAOCAL_VEAO4_POSN                       equ 0004h
VEAOCAL_VEAO4_POSITION                   equ 0004h
VEAOCAL_VEAO4_SIZE                       equ 0001h
VEAOCAL_VEAO4_LENGTH                     equ 0001h
VEAOCAL_VEAO4_MASK                       equ 0010h

// Register: BUFFCON
#define BUFFCON BUFFCON
BUFFCON                                  equ 019Eh
// bitfield definitions
BUFFCON_DSEL_POSN                        equ 0000h
BUFFCON_DSEL_POSITION                    equ 0000h
BUFFCON_DSEL_SIZE                        equ 0005h
BUFFCON_DSEL_LENGTH                      equ 0005h
BUFFCON_DSEL_MASK                        equ 001Fh
BUFFCON_DIGOEN_POSN                      equ 0006h
BUFFCON_DIGOEN_POSITION                  equ 0006h
BUFFCON_DIGOEN_SIZE                      equ 0001h
BUFFCON_DIGOEN_LENGTH                    equ 0001h
BUFFCON_DIGOEN_MASK                      equ 0040h
BUFFCON_BNCHEN_POSN                      equ 0007h
BUFFCON_BNCHEN_POSITION                  equ 0007h
BUFFCON_BNCHEN_SIZE                      equ 0001h
BUFFCON_BNCHEN_LENGTH                    equ 0001h
BUFFCON_BNCHEN_MASK                      equ 0080h

// Register: ATSTCON
#define ATSTCON ATSTCON
ATSTCON                                  equ 019Fh
// bitfield definitions
ATSTCON_SWFRQEN_POSN                     equ 0000h
ATSTCON_SWFRQEN_POSITION                 equ 0000h
ATSTCON_SWFRQEN_SIZE                     equ 0001h
ATSTCON_SWFRQEN_LENGTH                   equ 0001h
ATSTCON_SWFRQEN_MASK                     equ 0001h
ATSTCON_TMPTBY_POSN                      equ 0001h
ATSTCON_TMPTBY_POSITION                  equ 0001h
ATSTCON_TMPTBY_SIZE                      equ 0001h
ATSTCON_TMPTBY_LENGTH                    equ 0001h
ATSTCON_TMPTBY_MASK                      equ 0002h
ATSTCON_EAFBEN_POSN                      equ 0002h
ATSTCON_EAFBEN_POSITION                  equ 0002h
ATSTCON_EAFBEN_SIZE                      equ 0001h
ATSTCON_EAFBEN_LENGTH                    equ 0001h
ATSTCON_EAFBEN_MASK                      equ 0004h
ATSTCON_AVDDTSEN_POSN                    equ 0004h
ATSTCON_AVDDTSEN_POSITION                equ 0004h
ATSTCON_AVDDTSEN_SIZE                    equ 0001h
ATSTCON_AVDDTSEN_LENGTH                  equ 0001h
ATSTCON_AVDDTSEN_MASK                    equ 0010h
ATSTCON_DTYCLEN_POSN                     equ 0006h
ATSTCON_DTYCLEN_POSITION                 equ 0006h
ATSTCON_DTYCLEN_SIZE                     equ 0001h
ATSTCON_DTYCLEN_LENGTH                   equ 0001h
ATSTCON_DTYCLEN_MASK                     equ 0040h
ATSTCON_EACLKEN_POSN                     equ 0007h
ATSTCON_EACLKEN_POSITION                 equ 0007h
ATSTCON_EACLKEN_SIZE                     equ 0001h
ATSTCON_EACLKEN_LENGTH                   equ 0001h
ATSTCON_EACLKEN_MASK                     equ 0080h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ACKDT                            BANKMASK(SSPCON2), 5
#define ACKEN                            BANKMASK(SSPCON2), 4
#define ACKSTAT                          BANKMASK(SSPCON2), 6
#define ACKTIM                           BANKMASK(SSPCON3), 7
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADFM                             BANKMASK(ADCON1), 2
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define AHEN                             BANKMASK(SSPCON3), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSB1                            BANKMASK(ANSELB), 1
#define ANSB2                            BANKMASK(ANSELB), 2
#define AVDD0                            BANKMASK(AVDDCAL), 0
#define AVDD1                            BANKMASK(AVDDCAL), 1
#define AVDD2                            BANKMASK(AVDDCAL), 2
#define AVDD3                            BANKMASK(AVDDCAL), 3
#define AVDDTSEN                         BANKMASK(ATSTCON), 4
#define BCLIE                            BANKMASK(PIE1), 5
#define BCLIF                            BANKMASK(PIR1), 5
#define BF                               BANKMASK(SSPSTAT), 0
#define BGR0                             BANKMASK(BGRCAL), 0
#define BGR1                             BANKMASK(BGRCAL), 1
#define BGR2                             BANKMASK(BGRCAL), 2
#define BGR3                             BANKMASK(BGRCAL), 3
#define BGR4                             BANKMASK(BGRCAL), 4
#define BGR5                             BANKMASK(BGRCAL), 5
#define BGT0                             BANKMASK(BGTCAL), 0
#define BGT1                             BANKMASK(BGTCAL), 1
#define BGT2                             BANKMASK(BGTCAL), 2
#define BGT3                             BANKMASK(BGTCAL), 3
#define BNCHEN                           BANKMASK(BUFFCON), 7
#define BOEN                             BANKMASK(SSPCON3), 4
#define CALSEL                           BANKMASK(PMCON1), 6
#define CARRY                            BANKMASK(STATUS), 0
#define CC1IE                            BANKMASK(PIE1), 2
#define CC1IF                            BANKMASK(PIR1), 2
#define CC2IE                            BANKMASK(PIE1), 3
#define CC2IF                            BANKMASK(PIR1), 3
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CHS5                             BANKMASK(ADCON0), 7
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON1), 4
#define CLMPSEL                          BANKMASK(MODECON), 7
#define CNSG                             BANKMASK(MODECON), 4
#define CSR0                             BANKMASK(CSRCAL), 0
#define CSR1                             BANKMASK(CSRCAL), 1
#define CSR2                             BANKMASK(CSRCAL), 2
#define CSR3                             BANKMASK(CSRCAL), 3
#define CSR4                             BANKMASK(CSRCAL), 4
#define DC                               BANKMASK(STATUS), 1
#define DECON                            BANKMASK(PE1), 7
#define DEMOV0                           BANKMASK(DEMCAL), 0
#define DEMOV1                           BANKMASK(DEMCAL), 1
#define DEMOV2                           BANKMASK(DEMCAL), 2
#define DEMOV3                           BANKMASK(DEMCAL), 3
#define DEMOV4                           BANKMASK(DEMCAL), 4
#define DHEN                             BANKMASK(SSPCON3), 0
#define DIGOEN                           BANKMASK(BUFFCON), 6
#define DOV0                             BANKMASK(DOVCAL), 0
#define DOV1                             BANKMASK(DOVCAL), 1
#define DOV2                             BANKMASK(DOVCAL), 2
#define DOV3                             BANKMASK(DOVCAL), 3
#define DOV4                             BANKMASK(DOVCAL), 4
#define DTYCLEN                          BANKMASK(ATSTCON), 6
#define D_nA                             BANKMASK(SSPSTAT), 5
#define EACLKEN                          BANKMASK(ATSTCON), 7
#define EACLMP                           BANKMASK(MODECON), 3
#define EAFBEN                           BANKMASK(ATSTCON), 2
#define FCAL0                            BANKMASK(OSCCAL), 0
#define FCAL1                            BANKMASK(OSCCAL), 1
#define FCAL2                            BANKMASK(OSCCAL), 2
#define FCAL3                            BANKMASK(OSCCAL), 3
#define FCAL4                            BANKMASK(OSCCAL), 4
#define FCAL5                            BANKMASK(OSCCAL), 5
#define FCAL6                            BANKMASK(OSCCAL), 6
#define GCEN                             BANKMASK(SSPCON2), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define GPA0                             BANKMASK(PORTGPA), 0
#define GPA1                             BANKMASK(PORTGPA), 1
#define GPA2                             BANKMASK(PORTGPA), 2
#define GPA3                             BANKMASK(PORTGPA), 3
#define GPA4                             BANKMASK(PORTGPA), 4
#define GPA5                             BANKMASK(PORTGPA), 5
#define GPA6                             BANKMASK(PORTGPA), 6
#define GPA7                             BANKMASK(PORTGPA), 7
#define GPB0                             BANKMASK(PORTGPB), 0
#define GPB1                             BANKMASK(PORTGPB), 1
#define GPB2                             BANKMASK(PORTGPB), 2
#define GPB3                             BANKMASK(PORTGPB), 3
#define GPIO0                            BANKMASK(PORTGPA), 0
#define GPIO1                            BANKMASK(PORTGPA), 1
#define GPIO2                            BANKMASK(PORTGPA), 2
#define GPIO3                            BANKMASK(PORTGPA), 3
#define GPIO4                            BANKMASK(PORTGPA), 4
#define GPIO5                            BANKMASK(PORTGPA), 5
#define GPIO6                            BANKMASK(PORTGPA), 6
#define GPIO7                            BANKMASK(PORTGPA), 7
#define HCSOV0                           BANKMASK(HCSOVCAL), 0
#define HCSOV1                           BANKMASK(HCSOVCAL), 1
#define HCSOV2                           BANKMASK(HCSOVCAL), 2
#define HCSOV3                           BANKMASK(HCSOVCAL), 3
#define HCSOV4                           BANKMASK(HCSOVCAL), 4
#define HCSOV5                           BANKMASK(HCSOVCAL), 5
#define HCSOV6                           BANKMASK(HCSOVCAL), 6
#define HIDIS                            BANKMASK(PE1), 5
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCA0                            BANKMASK(IOCA), 0
#define IOCA1                            BANKMASK(IOCA), 1
#define IOCA2                            BANKMASK(IOCA), 2
#define IOCA3                            BANKMASK(IOCA), 3
#define IOCA4                            BANKMASK(IOCA), 4
#define IOCA5                            BANKMASK(IOCA), 5
#define IOCA6                            BANKMASK(IOCA), 6
#define IOCA7                            BANKMASK(IOCA), 7
#define IOCB0                            BANKMASK(IOCB), 0
#define IOCB1                            BANKMASK(IOCB), 1
#define IOCB2                            BANKMASK(IOCB), 2
#define IOCB3                            BANKMASK(IOCB), 3
#define IOCE                             BANKMASK(INTCON), 3
#define IOCF                             BANKMASK(INTCON), 0
#define LODIS                            BANKMASK(PE1), 4
#define MEASEN                           BANKMASK(PE1), 3
#define MSDONE                           BANKMASK(RELEFF), 7
#define OCEN                             BANKMASK(OCCON), 7
#define OCIE                             BANKMASK(PIE2), 5
#define OCIF                             BANKMASK(PIR2), 5
#define OTIE                             BANKMASK(PIE2), 6
#define OTIF                             BANKMASK(PIR2), 6
#define OVIE                             BANKMASK(PIE2), 4
#define OVIF                             BANKMASK(PIR2), 4
#define OVLOEN                           BANKMASK(VINCON), 3
#define OVLOIE                           BANKMASK(PIE2), 1
#define OVLOIF                           BANKMASK(PIR2), 1
#define OVLOINTN                         BANKMASK(VINCON), 0
#define OVLOINTP                         BANKMASK(VINCON), 1
#define OVLOOUT                          BANKMASK(VINCON), 2
#define OVTEE                            BANKMASK(PE1), 0
#define PCIE                             BANKMASK(SSPCON3), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSPCON2), 2
#define PMADRH0                          BANKMASK(PMADRH), 0
#define PMADRH1                          BANKMASK(PMADRH), 1
#define PMADRH2                          BANKMASK(PMADRH), 2
#define PMADRH3                          BANKMASK(PMADRH), 3
#define PMADRL0                          BANKMASK(PMADRL), 0
#define PMADRL1                          BANKMASK(PMADRL), 1
#define PMADRL2                          BANKMASK(PMADRL), 2
#define PMADRL3                          BANKMASK(PMADRL), 3
#define PMADRL4                          BANKMASK(PMADRL), 4
#define PMADRL5                          BANKMASK(PMADRL), 5
#define PMADRL6                          BANKMASK(PMADRL), 6
#define PMADRL7                          BANKMASK(PMADRL), 7
#define PMDATH0                          BANKMASK(PMDATH), 0
#define PMDATH1                          BANKMASK(PMDATH), 1
#define PMDATH2                          BANKMASK(PMDATH), 2
#define PMDATH3                          BANKMASK(PMDATH), 3
#define PMDATH4                          BANKMASK(PMDATH), 4
#define PMDATH5                          BANKMASK(PMDATH), 5
#define PMDATH6                          BANKMASK(PMDATH), 6
#define PMDATH7                          BANKMASK(PMDATH), 7
#define PMDATL0                          BANKMASK(PMDATL), 0
#define PMDATL1                          BANKMASK(PMDATL), 1
#define PMDATL2                          BANKMASK(PMDATL), 2
#define PMDATL3                          BANKMASK(PMDATL), 3
#define PMDATL4                          BANKMASK(PMDATL), 4
#define PMDATL5                          BANKMASK(PMDATL), 5
#define PMDATL6                          BANKMASK(PMDATL), 6
#define PMDATL7                          BANKMASK(PMDATL), 7
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define RA0                              BANKMASK(PORTGPA), 0
#define RA1                              BANKMASK(PORTGPA), 1
#define RA2                              BANKMASK(PORTGPA), 2
#define RA3                              BANKMASK(PORTGPA), 3
#define RA4                              BANKMASK(PORTGPA), 4
#define RA5                              BANKMASK(PORTGPA), 5
#define RA6                              BANKMASK(PORTGPA), 6
#define RA7                              BANKMASK(PORTGPA), 7
#define RAMP0                            BANKMASK(RAMPCAL), 0
#define RAMP1                            BANKMASK(RAMPCAL), 1
#define RAMP2                            BANKMASK(RAMPCAL), 2
#define RAMP3                            BANKMASK(RAMPCAL), 3
#define RAMP4                            BANKMASK(RAMPCAL), 4
#define RAMPEN                           BANKMASK(RAMPCON), 7
#define RB0                              BANKMASK(PORTGPB), 0
#define RB1                              BANKMASK(PORTGPB), 1
#define RB2                              BANKMASK(PORTGPB), 2
#define RB3                              BANKMASK(PORTGPB), 3
#define RCEN                             BANKMASK(SSPCON2), 3
#define RD                               BANKMASK(PMCON1), 0
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RSEN                             BANKMASK(SSPCON2), 1
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SBCDE                            BANKMASK(SSPCON3), 2
#define SCIE                             BANKMASK(SSPCON3), 5
#define SDAHT                            BANKMASK(SSPCON3), 3
#define SEN                              BANKMASK(SSPCON2), 0
#define SMP                              BANKMASK(SSPSTAT), 7
#define SPAN                             BANKMASK(PE1), 2
#define SSPEN                            BANKMASK(SSPCON1), 5
#define SSPIE                            BANKMASK(PIE1), 4
#define SSPIF                            BANKMASK(PIR1), 4
#define SSPM0                            BANKMASK(SSPCON1), 0
#define SSPM1                            BANKMASK(SSPCON1), 1
#define SSPM2                            BANKMASK(SSPCON1), 2
#define SSPM3                            BANKMASK(SSPCON1), 3
#define SSPOV                            BANKMASK(SSPCON1), 6
#define SWFRQEN                          BANKMASK(ATSTCON), 0
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define TMPTBY                           BANKMASK(ATSTCON), 1
#define TMR1CS                           BANKMASK(T1CON), 1
#define TMR1GE                           BANKMASK(T1GCON), 7
#define TMR1GIE                          BANKMASK(PIE1), 7
#define TMR1GIF                          BANKMASK(PIR1), 7
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(T2CON), 2
#define TOPO                             BANKMASK(PE1), 6
#define TRISA0                           BANKMASK(TRISGPA), 0
#define TRISA1                           BANKMASK(TRISGPA), 1
#define TRISA2                           BANKMASK(TRISGPA), 2
#define TRISA3                           BANKMASK(TRISGPA), 3
#define TRISA4                           BANKMASK(TRISGPA), 4
#define TRISA5                           BANKMASK(TRISGPA), 5
#define TRISA6                           BANKMASK(TRISGPA), 6
#define TRISA7                           BANKMASK(TRISGPA), 7
#define TRISB0                           BANKMASK(TRISGPB), 0
#define TRISB1                           BANKMASK(TRISGPB), 1
#define TRISB2                           BANKMASK(TRISGPB), 2
#define TRISB3                           BANKMASK(TRISGPB), 3
#define TTA0                             BANKMASK(TTACAL), 0
#define TTA1                             BANKMASK(TTACAL), 1
#define TTA2                             BANKMASK(TTACAL), 2
#define TTA3                             BANKMASK(TTACAL), 3
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define UA                               BANKMASK(SSPSTAT), 1
#define UVIE                             BANKMASK(PIE2), 7
#define UVIF                             BANKMASK(PIR2), 7
#define UVLOEN                           BANKMASK(VINCON), 7
#define UVLOIE                           BANKMASK(PIE2), 0
#define UVLOIF                           BANKMASK(PIR2), 0
#define UVLOINTN                         BANKMASK(VINCON), 4
#define UVLOINTP                         BANKMASK(VINCON), 5
#define UVLOOUT                          BANKMASK(VINCON), 6
#define UVTEE                            BANKMASK(PE1), 1
#define VCFG0                            BANKMASK(ADCON1), 0
#define VCFG1                            BANKMASK(ADCON1), 1
#define VDDEN                            BANKMASK(MODECON), 5
#define VEAO0                            BANKMASK(VEAOCAL), 0
#define VEAO1                            BANKMASK(VEAOCAL), 1
#define VEAO2                            BANKMASK(VEAOCAL), 2
#define VEAO3                            BANKMASK(VEAOCAL), 3
#define VEAO4                            BANKMASK(VEAOCAL), 4
#define VGNDEN                           BANKMASK(MODECON), 6
#define VOUR0                            BANKMASK(VOURCAL), 0
#define VOUR1                            BANKMASK(VOURCAL), 1
#define VOUR2                            BANKMASK(VOURCAL), 2
#define VOUR3                            BANKMASK(VOURCAL), 3
#define VOUR4                            BANKMASK(VOURCAL), 4
#define VOUT0                            BANKMASK(VOUTL), 0
#define VOUT1                            BANKMASK(VOUTL), 1
#define VOUT2                            BANKMASK(VOUTL), 2
#define VOUT3                            BANKMASK(VOUTL), 3
#define VOUT4                            BANKMASK(VOUTL), 4
#define VOUT5                            BANKMASK(VOUTL), 5
#define VOUT6                            BANKMASK(VOUTL), 6
#define VOUT7                            BANKMASK(VOUTL), 7
#define VOUT8                            BANKMASK(VOUTH), 0
#define VOUT9                            BANKMASK(VOUTH), 1
#define VREF0                            BANKMASK(VREFCAL), 0
#define VREF1                            BANKMASK(VREFCAL), 1
#define VREF2                            BANKMASK(VREFCAL), 2
#define VREF3                            BANKMASK(VREFCAL), 3
#define VREF4                            BANKMASK(VREFCAL), 4
#define VRFS0                            BANKMASK(VRFSCAL), 0
#define VRFS1                            BANKMASK(VRFSCAL), 1
#define VRFS2                            BANKMASK(VRFSCAL), 2
#define VRFS3                            BANKMASK(VRFSCAL), 3
#define VRFS4                            BANKMASK(VRFSCAL), 4
#define WCOL                             BANKMASK(SSPCON1), 7
#define WCS0                             BANKMASK(WPUGPA), 2
#define WCS1                             BANKMASK(WPUGPA), 3
#define WPUA0                            BANKMASK(WPUGPA), 0
#define WPUA1                            BANKMASK(WPUGPA), 1
#define WPUA5                            BANKMASK(WPUGPA), 5
#define WPUB1                            BANKMASK(WPUGPB), 1
#define WPUB2                            BANKMASK(WPUGPB), 2
#define WPUB3                            BANKMASK(WPUGPB), 3
#define WPUGPA0                          BANKMASK(WPUGPA), 0
#define WPUGPA1                          BANKMASK(WPUGPA), 1
#define WPUGPA2                          BANKMASK(WPUGPA), 2
#define WPUGPA3                          BANKMASK(WPUGPA), 3
#define WPUGPA5                          BANKMASK(WPUGPA), 5
#define WPUGPB1                          BANKMASK(WPUGPB), 1
#define WPUGPB2                          BANKMASK(WPUGPB), 2
#define WPUGPB3                          BANKMASK(WPUGPB), 3
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define ZERO                             BANKMASK(STATUS), 2
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRAPUI                           BANKMASK(OPTION_REG), 7
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
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _MCP19120_INC_
