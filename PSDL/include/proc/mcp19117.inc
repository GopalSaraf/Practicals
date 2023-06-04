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

#ifndef _MCP19117_INC_
#define _MCP19117_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * MCP19117
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
PORTGPB_GPB4_POSN                        equ 0004h
PORTGPB_GPB4_POSITION                    equ 0004h
PORTGPB_GPB4_SIZE                        equ 0001h
PORTGPB_GPB4_LENGTH                      equ 0001h
PORTGPB_GPB4_MASK                        equ 0010h
PORTGPB_GPB5_POSN                        equ 0005h
PORTGPB_GPB5_POSITION                    equ 0005h
PORTGPB_GPB5_SIZE                        equ 0001h
PORTGPB_GPB5_LENGTH                      equ 0001h
PORTGPB_GPB5_MASK                        equ 0020h
PORTGPB_GPB6_POSN                        equ 0006h
PORTGPB_GPB6_POSITION                    equ 0006h
PORTGPB_GPB6_SIZE                        equ 0001h
PORTGPB_GPB6_LENGTH                      equ 0001h
PORTGPB_GPB6_MASK                        equ 0040h
PORTGPB_GPB7_POSN                        equ 0007h
PORTGPB_GPB7_POSITION                    equ 0007h
PORTGPB_GPB7_SIZE                        equ 0001h
PORTGPB_GPB7_LENGTH                      equ 0001h
PORTGPB_GPB7_MASK                        equ 0080h
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
PORTGPB_RB4_POSN                         equ 0004h
PORTGPB_RB4_POSITION                     equ 0004h
PORTGPB_RB4_SIZE                         equ 0001h
PORTGPB_RB4_LENGTH                       equ 0001h
PORTGPB_RB4_MASK                         equ 0010h
PORTGPB_RB5_POSN                         equ 0005h
PORTGPB_RB5_POSITION                     equ 0005h
PORTGPB_RB5_SIZE                         equ 0001h
PORTGPB_RB5_LENGTH                       equ 0001h
PORTGPB_RB5_MASK                         equ 0020h
PORTGPB_RB6_POSN                         equ 0006h
PORTGPB_RB6_POSITION                     equ 0006h
PORTGPB_RB6_SIZE                         equ 0001h
PORTGPB_RB6_LENGTH                       equ 0001h
PORTGPB_RB6_MASK                         equ 0040h
PORTGPB_RB7_POSN                         equ 0007h
PORTGPB_RB7_POSITION                     equ 0007h
PORTGPB_RB7_SIZE                         equ 0001h
PORTGPB_RB7_LENGTH                       equ 0001h
PORTGPB_RB7_MASK                         equ 0080h

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
PIR1_RCIF_POSN                           equ 0006h
PIR1_RCIF_POSITION                       equ 0006h
PIR1_RCIF_SIZE                           equ 0001h
PIR1_RCIF_LENGTH                         equ 0001h
PIR1_RCIF_MASK                           equ 0040h
PIR1_TXIF_POSN                           equ 0007h
PIR1_TXIF_POSITION                       equ 0007h
PIR1_TXIF_SIZE                           equ 0001h
PIR1_TXIF_LENGTH                         equ 0001h
PIR1_TXIF_MASK                           equ 0080h

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
PIR2_DRUVIF_POSN                         equ 0002h
PIR2_DRUVIF_POSITION                     equ 0002h
PIR2_DRUVIF_SIZE                         equ 0001h
PIR2_DRUVIF_LENGTH                       equ 0001h
PIR2_DRUVIF_MASK                         equ 0004h
PIR2_OVIF_POSN                           equ 0003h
PIR2_OVIF_POSITION                       equ 0003h
PIR2_OVIF_SIZE                           equ 0001h
PIR2_OVIF_LENGTH                         equ 0001h
PIR2_OVIF_MASK                           equ 0008h
PIR2_OTIF_POSN                           equ 0004h
PIR2_OTIF_POSITION                       equ 0004h
PIR2_OTIF_SIZE                           equ 0001h
PIR2_OTIF_LENGTH                         equ 0001h
PIR2_OTIF_MASK                           equ 0010h
PIR2_ADIF_POSN                           equ 0006h
PIR2_ADIF_POSITION                       equ 0006h
PIR2_ADIF_SIZE                           equ 0001h
PIR2_ADIF_LENGTH                         equ 0001h
PIR2_ADIF_MASK                           equ 0040h
PIR2_CDSIF_POSN                          equ 0007h
PIR2_CDSIF_POSITION                      equ 0007h
PIR2_CDSIF_SIZE                          equ 0001h
PIR2_CDSIF_LENGTH                        equ 0001h
PIR2_CDSIF_MASK                          equ 0080h

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
PCON_VDDOK_POSN                          equ 0002h
PCON_VDDOK_POSITION                      equ 0002h
PCON_VDDOK_SIZE                          equ 0001h
PCON_VDDOK_LENGTH                        equ 0001h
PCON_VDDOK_MASK                          equ 0004h
PCON_nVDD_FLAG_POSN                      equ 0003h
PCON_nVDD_FLAG_POSITION                  equ 0003h
PCON_nVDD_FLAG_SIZE                      equ 0001h
PCON_nVDD_FLAG_LENGTH                    equ 0001h
PCON_nVDD_FLAG_MASK                      equ 0008h
PCON_ADC_REFR_POSN                       equ 0007h
PCON_ADC_REFR_POSITION                   equ 0007h
PCON_ADC_REFR_SIZE                       equ 0001h
PCON_ADC_REFR_LENGTH                     equ 0001h
PCON_ADC_REFR_MASK                       equ 0080h

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

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 000Dh

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

// Register: VREFCON
#define VREFCON VREFCON
VREFCON                                  equ 0019h
// bitfield definitions
VREFCON_VREF0_POSN                       equ 0000h
VREFCON_VREF0_POSITION                   equ 0000h
VREFCON_VREF0_SIZE                       equ 0001h
VREFCON_VREF0_LENGTH                     equ 0001h
VREFCON_VREF0_MASK                       equ 0001h
VREFCON_VREF1_POSN                       equ 0001h
VREFCON_VREF1_POSITION                   equ 0001h
VREFCON_VREF1_SIZE                       equ 0001h
VREFCON_VREF1_LENGTH                     equ 0001h
VREFCON_VREF1_MASK                       equ 0002h
VREFCON_VREF2_POSN                       equ 0002h
VREFCON_VREF2_POSITION                   equ 0002h
VREFCON_VREF2_SIZE                       equ 0001h
VREFCON_VREF2_LENGTH                     equ 0001h
VREFCON_VREF2_MASK                       equ 0004h
VREFCON_VREF3_POSN                       equ 0003h
VREFCON_VREF3_POSITION                   equ 0003h
VREFCON_VREF3_SIZE                       equ 0001h
VREFCON_VREF3_LENGTH                     equ 0001h
VREFCON_VREF3_MASK                       equ 0008h
VREFCON_VREF4_POSN                       equ 0004h
VREFCON_VREF4_POSITION                   equ 0004h
VREFCON_VREF4_SIZE                       equ 0001h
VREFCON_VREF4_LENGTH                     equ 0001h
VREFCON_VREF4_MASK                       equ 0010h
VREFCON_VREF5_POSN                       equ 0005h
VREFCON_VREF5_POSITION                   equ 0005h
VREFCON_VREF5_SIZE                       equ 0001h
VREFCON_VREF5_LENGTH                     equ 0001h
VREFCON_VREF5_MASK                       equ 0020h
VREFCON_VREF6_POSN                       equ 0006h
VREFCON_VREF6_POSITION                   equ 0006h
VREFCON_VREF6_SIZE                       equ 0001h
VREFCON_VREF6_LENGTH                     equ 0001h
VREFCON_VREF6_MASK                       equ 0040h
VREFCON_VREF7_POSN                       equ 0007h
VREFCON_VREF7_POSITION                   equ 0007h
VREFCON_VREF7_SIZE                       equ 0001h
VREFCON_VREF7_LENGTH                     equ 0001h
VREFCON_VREF7_MASK                       equ 0080h

// Register: VREF2CON
#define VREF2CON VREF2CON
VREF2CON                                 equ 001Ah
// bitfield definitions
VREF2CON_VREF20_POSN                     equ 0000h
VREF2CON_VREF20_POSITION                 equ 0000h
VREF2CON_VREF20_SIZE                     equ 0001h
VREF2CON_VREF20_LENGTH                   equ 0001h
VREF2CON_VREF20_MASK                     equ 0001h
VREF2CON_VREF21_POSN                     equ 0001h
VREF2CON_VREF21_POSITION                 equ 0001h
VREF2CON_VREF21_SIZE                     equ 0001h
VREF2CON_VREF21_LENGTH                   equ 0001h
VREF2CON_VREF21_MASK                     equ 0002h
VREF2CON_VREF22_POSN                     equ 0002h
VREF2CON_VREF22_POSITION                 equ 0002h
VREF2CON_VREF22_SIZE                     equ 0001h
VREF2CON_VREF22_LENGTH                   equ 0001h
VREF2CON_VREF22_MASK                     equ 0004h
VREF2CON_VREF23_POSN                     equ 0003h
VREF2CON_VREF23_POSITION                 equ 0003h
VREF2CON_VREF23_SIZE                     equ 0001h
VREF2CON_VREF23_LENGTH                   equ 0001h
VREF2CON_VREF23_MASK                     equ 0008h
VREF2CON_VREF24_POSN                     equ 0004h
VREF2CON_VREF24_POSITION                 equ 0004h
VREF2CON_VREF24_SIZE                     equ 0001h
VREF2CON_VREF24_LENGTH                   equ 0001h
VREF2CON_VREF24_MASK                     equ 0010h
VREF2CON_VREF25_POSN                     equ 0005h
VREF2CON_VREF25_POSITION                 equ 0005h
VREF2CON_VREF25_SIZE                     equ 0001h
VREF2CON_VREF25_LENGTH                   equ 0001h
VREF2CON_VREF25_MASK                     equ 0020h
VREF2CON_VREF26_POSN                     equ 0006h
VREF2CON_VREF26_POSITION                 equ 0006h
VREF2CON_VREF26_SIZE                     equ 0001h
VREF2CON_VREF26_LENGTH                   equ 0001h
VREF2CON_VREF26_MASK                     equ 0040h
VREF2CON_VREF27_POSN                     equ 0007h
VREF2CON_VREF27_POSITION                 equ 0007h
VREF2CON_VREF27_SIZE                     equ 0001h
VREF2CON_VREF27_LENGTH                   equ 0001h
VREF2CON_VREF27_MASK                     equ 0080h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 001Bh
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
ADCON1                                   equ 001Fh
// bitfield definitions
ADCON1_VCFG_POSN                         equ 0000h
ADCON1_VCFG_POSITION                     equ 0000h
ADCON1_VCFG_SIZE                         equ 0001h
ADCON1_VCFG_LENGTH                       equ 0001h
ADCON1_VCFG_MASK                         equ 0001h
ADCON1_ADCS_POSN                         equ 0004h
ADCON1_ADCS_POSITION                     equ 0004h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0070h
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
TRISGPB_TRISB4_POSN                      equ 0004h
TRISGPB_TRISB4_POSITION                  equ 0004h
TRISGPB_TRISB4_SIZE                      equ 0001h
TRISGPB_TRISB4_LENGTH                    equ 0001h
TRISGPB_TRISB4_MASK                      equ 0010h
TRISGPB_TRISB5_POSN                      equ 0005h
TRISGPB_TRISB5_POSITION                  equ 0005h
TRISGPB_TRISB5_SIZE                      equ 0001h
TRISGPB_TRISB5_LENGTH                    equ 0001h
TRISGPB_TRISB5_MASK                      equ 0020h
TRISGPB_TRISB6_POSN                      equ 0006h
TRISGPB_TRISB6_POSITION                  equ 0006h
TRISGPB_TRISB6_SIZE                      equ 0001h
TRISGPB_TRISB6_LENGTH                    equ 0001h
TRISGPB_TRISB6_MASK                      equ 0040h
TRISGPB_TRISB7_POSN                      equ 0007h
TRISGPB_TRISB7_POSITION                  equ 0007h
TRISGPB_TRISB7_SIZE                      equ 0001h
TRISGPB_TRISB7_LENGTH                    equ 0001h
TRISGPB_TRISB7_MASK                      equ 0080h

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
PIE1_RCIE_POSN                           equ 0006h
PIE1_RCIE_POSITION                       equ 0006h
PIE1_RCIE_SIZE                           equ 0001h
PIE1_RCIE_LENGTH                         equ 0001h
PIE1_RCIE_MASK                           equ 0040h
PIE1_TXIE_POSN                           equ 0007h
PIE1_TXIE_POSITION                       equ 0007h
PIE1_TXIE_SIZE                           equ 0001h
PIE1_TXIE_LENGTH                         equ 0001h
PIE1_TXIE_MASK                           equ 0080h

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
PIE2_DRUVIE_POSN                         equ 0002h
PIE2_DRUVIE_POSITION                     equ 0002h
PIE2_DRUVIE_SIZE                         equ 0001h
PIE2_DRUVIE_LENGTH                       equ 0001h
PIE2_DRUVIE_MASK                         equ 0004h
PIE2_OVIE_POSN                           equ 0003h
PIE2_OVIE_POSITION                       equ 0003h
PIE2_OVIE_SIZE                           equ 0001h
PIE2_OVIE_LENGTH                         equ 0001h
PIE2_OVIE_MASK                           equ 0008h
PIE2_OTIE_POSN                           equ 0004h
PIE2_OTIE_POSITION                       equ 0004h
PIE2_OTIE_SIZE                           equ 0001h
PIE2_OTIE_LENGTH                         equ 0001h
PIE2_OTIE_MASK                           equ 0010h
PIE2_ADIE_POSN                           equ 0006h
PIE2_ADIE_POSITION                       equ 0006h
PIE2_ADIE_SIZE                           equ 0001h
PIE2_ADIE_LENGTH                         equ 0001h
PIE2_ADIE_MASK                           equ 0040h
PIE2_CDSIE_POSN                          equ 0007h
PIE2_CDSIE_POSITION                      equ 0007h
PIE2_CDSIE_SIZE                          equ 0001h
PIE2_CDSIE_LENGTH                        equ 0001h
PIE2_CDSIE_MASK                          equ 0080h

// Register: VINUVLO
#define VINUVLO VINUVLO
VINUVLO                                  equ 0090h
// bitfield definitions
VINUVLO_UVLO0_POSN                       equ 0000h
VINUVLO_UVLO0_POSITION                   equ 0000h
VINUVLO_UVLO0_SIZE                       equ 0001h
VINUVLO_UVLO0_LENGTH                     equ 0001h
VINUVLO_UVLO0_MASK                       equ 0001h
VINUVLO_UVLO1_POSN                       equ 0001h
VINUVLO_UVLO1_POSITION                   equ 0001h
VINUVLO_UVLO1_SIZE                       equ 0001h
VINUVLO_UVLO1_LENGTH                     equ 0001h
VINUVLO_UVLO1_MASK                       equ 0002h
VINUVLO_UVLO2_POSN                       equ 0002h
VINUVLO_UVLO2_POSITION                   equ 0002h
VINUVLO_UVLO2_SIZE                       equ 0001h
VINUVLO_UVLO2_LENGTH                     equ 0001h
VINUVLO_UVLO2_MASK                       equ 0004h
VINUVLO_UVLO3_POSN                       equ 0003h
VINUVLO_UVLO3_POSITION                   equ 0003h
VINUVLO_UVLO3_SIZE                       equ 0001h
VINUVLO_UVLO3_LENGTH                     equ 0001h
VINUVLO_UVLO3_MASK                       equ 0008h
VINUVLO_UVLO4_POSN                       equ 0004h
VINUVLO_UVLO4_POSITION                   equ 0004h
VINUVLO_UVLO4_SIZE                       equ 0001h
VINUVLO_UVLO4_LENGTH                     equ 0001h
VINUVLO_UVLO4_MASK                       equ 0010h
VINUVLO_UVLO5_POSN                       equ 0005h
VINUVLO_UVLO5_POSITION                   equ 0005h
VINUVLO_UVLO5_SIZE                       equ 0001h
VINUVLO_UVLO5_LENGTH                     equ 0001h
VINUVLO_UVLO5_MASK                       equ 0020h

// Register: VINOVLO
#define VINOVLO VINOVLO
VINOVLO                                  equ 0091h
// bitfield definitions
VINOVLO_OVLO0_POSN                       equ 0000h
VINOVLO_OVLO0_POSITION                   equ 0000h
VINOVLO_OVLO0_SIZE                       equ 0001h
VINOVLO_OVLO0_LENGTH                     equ 0001h
VINOVLO_OVLO0_MASK                       equ 0001h
VINOVLO_OVLO1_POSN                       equ 0001h
VINOVLO_OVLO1_POSITION                   equ 0001h
VINOVLO_OVLO1_SIZE                       equ 0001h
VINOVLO_OVLO1_LENGTH                     equ 0001h
VINOVLO_OVLO1_MASK                       equ 0002h
VINOVLO_OVLO2_POSN                       equ 0002h
VINOVLO_OVLO2_POSITION                   equ 0002h
VINOVLO_OVLO2_SIZE                       equ 0001h
VINOVLO_OVLO2_LENGTH                     equ 0001h
VINOVLO_OVLO2_MASK                       equ 0004h
VINOVLO_OVLO3_POSN                       equ 0003h
VINOVLO_OVLO3_POSITION                   equ 0003h
VINOVLO_OVLO3_SIZE                       equ 0001h
VINOVLO_OVLO3_LENGTH                     equ 0001h
VINOVLO_OVLO3_MASK                       equ 0008h
VINOVLO_OVLO4_POSN                       equ 0004h
VINOVLO_OVLO4_POSITION                   equ 0004h
VINOVLO_OVLO4_SIZE                       equ 0001h
VINOVLO_OVLO4_LENGTH                     equ 0001h
VINOVLO_OVLO4_MASK                       equ 0010h
VINOVLO_OVLO5_POSN                       equ 0005h
VINOVLO_OVLO5_POSITION                   equ 0005h
VINOVLO_OVLO5_SIZE                       equ 0001h
VINOVLO_OVLO5_LENGTH                     equ 0001h
VINOVLO_OVLO5_MASK                       equ 0020h

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

// Register: CC1RL
#define CC1RL CC1RL
CC1RL                                    equ 0093h
// bitfield definitions
CC1RL_CC1RL_POSN                         equ 0000h
CC1RL_CC1RL_POSITION                     equ 0000h
CC1RL_CC1RL_SIZE                         equ 0008h
CC1RL_CC1RL_LENGTH                       equ 0008h
CC1RL_CC1RL_MASK                         equ 00FFh

// Register: CC1RH
#define CC1RH CC1RH
CC1RH                                    equ 0094h
// bitfield definitions
CC1RH_CC1RH_POSN                         equ 0000h
CC1RH_CC1RH_POSITION                     equ 0000h
CC1RH_CC1RH_SIZE                         equ 0008h
CC1RH_CC1RH_LENGTH                       equ 0008h
CC1RH_CC1RH_MASK                         equ 00FFh

// Register: CC2RL
#define CC2RL CC2RL
CC2RL                                    equ 0095h
// bitfield definitions
CC2RL_CC2RL_POSN                         equ 0000h
CC2RL_CC2RL_POSITION                     equ 0000h
CC2RL_CC2RL_SIZE                         equ 0008h
CC2RL_CC2RL_LENGTH                       equ 0008h
CC2RL_CC2RL_MASK                         equ 00FFh

// Register: CC2RH
#define CC2RH CC2RH
CC2RH                                    equ 0096h
// bitfield definitions
CC2RH_CC2RH_POSN                         equ 0000h
CC2RH_CC2RH_POSITION                     equ 0000h
CC2RH_CC2RH_SIZE                         equ 0008h
CC2RH_CC2RH_LENGTH                       equ 0008h
CC2RH_CC2RH_MASK                         equ 00FFh

// Register: CCDCON
#define CCDCON CCDCON
CCDCON                                   equ 0097h
// bitfield definitions
CCDCON_CC1M_POSN                         equ 0000h
CCDCON_CC1M_POSITION                     equ 0000h
CCDCON_CC1M_SIZE                         equ 0004h
CCDCON_CC1M_LENGTH                       equ 0004h
CCDCON_CC1M_MASK                         equ 000Fh
CCDCON_CC2M_POSN                         equ 0004h
CCDCON_CC2M_POSITION                     equ 0004h
CCDCON_CC2M_SIZE                         equ 0004h
CCDCON_CC2M_LENGTH                       equ 0004h
CCDCON_CC2M_MASK                         equ 00F0h

// Register: DESATCON
#define DESATCON DESATCON
DESATCON                                 equ 0098h
// bitfield definitions
DESATCON_CDSINTN_POSN                    equ 0000h
DESATCON_CDSINTN_POSITION                equ 0000h
DESATCON_CDSINTN_SIZE                    equ 0001h
DESATCON_CDSINTN_LENGTH                  equ 0001h
DESATCON_CDSINTN_MASK                    equ 0001h
DESATCON_CDSINTP_POSN                    equ 0001h
DESATCON_CDSINTP_POSITION                equ 0001h
DESATCON_CDSINTP_SIZE                    equ 0001h
DESATCON_CDSINTP_LENGTH                  equ 0001h
DESATCON_CDSINTP_MASK                    equ 0002h
DESATCON_CDSOUT_POSN                     equ 0002h
DESATCON_CDSOUT_POSITION                 equ 0002h
DESATCON_CDSOUT_SIZE                     equ 0001h
DESATCON_CDSOUT_LENGTH                   equ 0001h
DESATCON_CDSOUT_MASK                     equ 0004h
DESATCON_CDSOE_POSN                      equ 0003h
DESATCON_CDSOE_POSITION                  equ 0003h
DESATCON_CDSOE_SIZE                      equ 0001h
DESATCON_CDSOE_LENGTH                    equ 0001h
DESATCON_CDSOE_MASK                      equ 0008h
DESATCON_CDSPOL_POSN                     equ 0004h
DESATCON_CDSPOL_POSITION                 equ 0004h
DESATCON_CDSPOL_SIZE                     equ 0001h
DESATCON_CDSPOL_LENGTH                   equ 0001h
DESATCON_CDSPOL_MASK                     equ 0010h
DESATCON_CDSWDE_POSN                     equ 0006h
DESATCON_CDSWDE_POSITION                 equ 0006h
DESATCON_CDSWDE_SIZE                     equ 0001h
DESATCON_CDSWDE_LENGTH                   equ 0001h
DESATCON_CDSWDE_MASK                     equ 0040h
DESATCON_CDSMUX_POSN                     equ 0007h
DESATCON_CDSMUX_POSITION                 equ 0007h
DESATCON_CDSMUX_SIZE                     equ 0001h
DESATCON_CDSMUX_LENGTH                   equ 0001h
DESATCON_CDSMUX_MASK                     equ 0080h

// Register: OVCON
#define OVCON OVCON
OVCON                                    equ 0099h
// bitfield definitions
OVCON_OVINTN_POSN                        equ 0000h
OVCON_OVINTN_POSITION                    equ 0000h
OVCON_OVINTN_SIZE                        equ 0001h
OVCON_OVINTN_LENGTH                      equ 0001h
OVCON_OVINTN_MASK                        equ 0001h
OVCON_OVINTP_POSN                        equ 0001h
OVCON_OVINTP_POSITION                    equ 0001h
OVCON_OVINTP_SIZE                        equ 0001h
OVCON_OVINTP_LENGTH                      equ 0001h
OVCON_OVINTP_MASK                        equ 0002h
OVCON_OVOUT_POSN                         equ 0002h
OVCON_OVOUT_POSITION                     equ 0002h
OVCON_OVOUT_SIZE                         equ 0001h
OVCON_OVOUT_LENGTH                       equ 0001h
OVCON_OVOUT_MASK                         equ 0004h
OVCON_OVEN_POSN                          equ 0003h
OVCON_OVEN_POSITION                      equ 0003h
OVCON_OVEN_SIZE                          equ 0001h
OVCON_OVEN_LENGTH                        equ 0001h
OVCON_OVEN_MASK                          equ 0008h

// Register: OVREFCON
#define OVREFCON OVREFCON
OVREFCON                                 equ 009Ah
// bitfield definitions
OVREFCON_OOV0_POSN                       equ 0000h
OVREFCON_OOV0_POSITION                   equ 0000h
OVREFCON_OOV0_SIZE                       equ 0001h
OVREFCON_OOV0_LENGTH                     equ 0001h
OVREFCON_OOV0_MASK                       equ 0001h
OVREFCON_OOV1_POSN                       equ 0001h
OVREFCON_OOV1_POSITION                   equ 0001h
OVREFCON_OOV1_SIZE                       equ 0001h
OVREFCON_OOV1_LENGTH                     equ 0001h
OVREFCON_OOV1_MASK                       equ 0002h
OVREFCON_OOV2_POSN                       equ 0002h
OVREFCON_OOV2_POSITION                   equ 0002h
OVREFCON_OOV2_SIZE                       equ 0001h
OVREFCON_OOV2_LENGTH                     equ 0001h
OVREFCON_OOV2_MASK                       equ 0004h
OVREFCON_OOV3_POSN                       equ 0003h
OVREFCON_OOV3_POSITION                   equ 0003h
OVREFCON_OOV3_SIZE                       equ 0001h
OVREFCON_OOV3_LENGTH                     equ 0001h
OVREFCON_OOV3_MASK                       equ 0008h
OVREFCON_OOV4_POSN                       equ 0004h
OVREFCON_OOV4_POSITION                   equ 0004h
OVREFCON_OOV4_SIZE                       equ 0001h
OVREFCON_OOV4_LENGTH                     equ 0001h
OVREFCON_OOV4_MASK                       equ 0010h
OVREFCON_OOV5_POSN                       equ 0005h
OVREFCON_OOV5_POSITION                   equ 0005h
OVREFCON_OOV5_SIZE                       equ 0001h
OVREFCON_OOV5_LENGTH                     equ 0001h
OVREFCON_OOV5_MASK                       equ 0020h
OVREFCON_OOV6_POSN                       equ 0006h
OVREFCON_OOV6_POSITION                   equ 0006h
OVREFCON_OOV6_SIZE                       equ 0001h
OVREFCON_OOV6_LENGTH                     equ 0001h
OVREFCON_OOV6_MASK                       equ 0040h
OVREFCON_OOV7_POSN                       equ 0007h
OVREFCON_OOV7_POSITION                   equ 0007h
OVREFCON_OOV7_SIZE                       equ 0001h
OVREFCON_OOV7_LENGTH                     equ 0001h
OVREFCON_OOV7_MASK                       equ 0080h

// Register: DEADCON
#define DEADCON DEADCON
DEADCON                                  equ 009Bh
// bitfield definitions
DEADCON_SDRVDT_POSN                      equ 0000h
DEADCON_SDRVDT_POSITION                  equ 0000h
DEADCON_SDRVDT_SIZE                      equ 0004h
DEADCON_SDRVDT_LENGTH                    equ 0004h
DEADCON_SDRVDT_MASK                      equ 000Fh
DEADCON_PDRVDT_POSN                      equ 0004h
DEADCON_PDRVDT_POSITION                  equ 0004h
DEADCON_PDRVDT_SIZE                      equ 0004h
DEADCON_PDRVDT_LENGTH                    equ 0004h
DEADCON_PDRVDT_MASK                      equ 00F0h

// Register: SLPCRCON
#define SLPCRCON SLPCRCON
SLPCRCON                                 equ 009Ch
// bitfield definitions
SLPCRCON_SLPS_POSN                       equ 0000h
SLPCRCON_SLPS_POSITION                   equ 0000h
SLPCRCON_SLPS_SIZE                       equ 0006h
SLPCRCON_SLPS_LENGTH                     equ 0006h
SLPCRCON_SLPS_MASK                       equ 003Fh
SLPCRCON_SLPBY_POSN                      equ 0006h
SLPCRCON_SLPBY_POSITION                  equ 0006h
SLPCRCON_SLPBY_SIZE                      equ 0001h
SLPCRCON_SLPBY_LENGTH                    equ 0001h
SLPCRCON_SLPBY_MASK                      equ 0040h

// Register: ICOACON
#define ICOACON ICOACON
ICOACON                                  equ 009Dh
// bitfield definitions
ICOACON_ICOAC_POSN                       equ 0000h
ICOACON_ICOAC_POSITION                   equ 0000h
ICOACON_ICOAC_SIZE                       equ 0004h
ICOACON_ICOAC_LENGTH                     equ 0004h
ICOACON_ICOAC_MASK                       equ 000Fh

// Register: ICLEBCON
#define ICLEBCON ICLEBCON
ICLEBCON                                 equ 009Eh
// bitfield definitions
ICLEBCON_ICLEBC_POSN                     equ 0000h
ICLEBCON_ICLEBC_POSITION                 equ 0000h
ICLEBCON_ICLEBC_SIZE                     equ 0002h
ICLEBCON_ICLEBC_LENGTH                   equ 0002h
ICLEBCON_ICLEBC_MASK                     equ 0003h

// Register: WPUGPA
#define WPUGPA WPUGPA
WPUGPA                                   equ 0105h
// bitfield definitions
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
WPUGPA_WPUA2_POSN                        equ 0002h
WPUGPA_WPUA2_POSITION                    equ 0002h
WPUGPA_WPUA2_SIZE                        equ 0001h
WPUGPA_WPUA2_LENGTH                      equ 0001h
WPUGPA_WPUA2_MASK                        equ 0004h
WPUGPA_WPUA3_POSN                        equ 0003h
WPUGPA_WPUA3_POSITION                    equ 0003h
WPUGPA_WPUA3_SIZE                        equ 0001h
WPUGPA_WPUA3_LENGTH                      equ 0001h
WPUGPA_WPUA3_MASK                        equ 0008h
WPUGPA_WPUA5_POSN                        equ 0005h
WPUGPA_WPUA5_POSITION                    equ 0005h
WPUGPA_WPUA5_SIZE                        equ 0001h
WPUGPA_WPUA5_LENGTH                      equ 0001h
WPUGPA_WPUA5_MASK                        equ 0020h

// Register: WPUGPB
#define WPUGPB WPUGPB
WPUGPB                                   equ 0106h
// bitfield definitions
WPUGPB_WPUGPB1_POSN                      equ 0001h
WPUGPB_WPUGPB1_POSITION                  equ 0001h
WPUGPB_WPUGPB1_SIZE                      equ 0001h
WPUGPB_WPUGPB1_LENGTH                    equ 0001h
WPUGPB_WPUGPB1_MASK                      equ 0002h
WPUGPB_WPUGPB4_POSN                      equ 0004h
WPUGPB_WPUGPB4_POSITION                  equ 0004h
WPUGPB_WPUGPB4_SIZE                      equ 0001h
WPUGPB_WPUGPB4_LENGTH                    equ 0001h
WPUGPB_WPUGPB4_MASK                      equ 0010h
WPUGPB_WPUGPB5_POSN                      equ 0005h
WPUGPB_WPUGPB5_POSITION                  equ 0005h
WPUGPB_WPUGPB5_SIZE                      equ 0001h
WPUGPB_WPUGPB5_LENGTH                    equ 0001h
WPUGPB_WPUGPB5_MASK                      equ 0020h
WPUGPB_WPUGPB6_POSN                      equ 0006h
WPUGPB_WPUGPB6_POSITION                  equ 0006h
WPUGPB_WPUGPB6_SIZE                      equ 0001h
WPUGPB_WPUGPB6_LENGTH                    equ 0001h
WPUGPB_WPUGPB6_MASK                      equ 0040h
WPUGPB_WPUGPB7_POSN                      equ 0007h
WPUGPB_WPUGPB7_POSITION                  equ 0007h
WPUGPB_WPUGPB7_SIZE                      equ 0001h
WPUGPB_WPUGPB7_LENGTH                    equ 0001h
WPUGPB_WPUGPB7_MASK                      equ 0080h
WPUGPB_WPUB1_POSN                        equ 0001h
WPUGPB_WPUB1_POSITION                    equ 0001h
WPUGPB_WPUB1_SIZE                        equ 0001h
WPUGPB_WPUB1_LENGTH                      equ 0001h
WPUGPB_WPUB1_MASK                        equ 0002h
WPUGPB_WPUB4_POSN                        equ 0004h
WPUGPB_WPUB4_POSITION                    equ 0004h
WPUGPB_WPUB4_SIZE                        equ 0001h
WPUGPB_WPUB4_LENGTH                      equ 0001h
WPUGPB_WPUB4_MASK                        equ 0010h
WPUGPB_WPUB5_POSN                        equ 0005h
WPUGPB_WPUB5_POSITION                    equ 0005h
WPUGPB_WPUB5_SIZE                        equ 0001h
WPUGPB_WPUB5_LENGTH                      equ 0001h
WPUGPB_WPUB5_MASK                        equ 0020h
WPUGPB_WPUB6_POSN                        equ 0006h
WPUGPB_WPUB6_POSITION                    equ 0006h
WPUGPB_WPUB6_SIZE                        equ 0001h
WPUGPB_WPUB6_LENGTH                      equ 0001h
WPUGPB_WPUB6_MASK                        equ 0040h
WPUGPB_WPUB7_POSN                        equ 0007h
WPUGPB_WPUB7_POSITION                    equ 0007h
WPUGPB_WPUB7_SIZE                        equ 0001h
WPUGPB_WPUB7_LENGTH                      equ 0001h
WPUGPB_WPUB7_MASK                        equ 0080h

// Register: PE1
#define PE1 PE1
PE1                                      equ 0107h
// bitfield definitions
PE1_PWMSTR_SEN_POSN                      equ 0000h
PE1_PWMSTR_SEN_POSITION                  equ 0000h
PE1_PWMSTR_SEN_SIZE                      equ 0001h
PE1_PWMSTR_SEN_LENGTH                    equ 0001h
PE1_PWMSTR_SEN_MASK                      equ 0001h
PE1_PWMSTR_PEN_POSN                      equ 0001h
PE1_PWMSTR_PEN_POSITION                  equ 0001h
PE1_PWMSTR_PEN_SIZE                      equ 0001h
PE1_PWMSTR_PEN_LENGTH                    equ 0001h
PE1_PWMSTR_PEN_MASK                      equ 0002h
PE1_ISPUEN_POSN                          equ 0002h
PE1_ISPUEN_POSITION                      equ 0002h
PE1_ISPUEN_SIZE                          equ 0001h
PE1_ISPUEN_LENGTH                        equ 0001h
PE1_ISPUEN_MASK                          equ 0004h
PE1_SDRVBY_POSN                          equ 0004h
PE1_SDRVBY_POSITION                      equ 0004h
PE1_SDRVBY_SIZE                          equ 0001h
PE1_SDRVBY_LENGTH                        equ 0001h
PE1_SDRVBY_MASK                          equ 0010h
PE1_PDRVBY_POSN                          equ 0005h
PE1_PDRVBY_POSITION                      equ 0005h
PE1_PDRVBY_SIZE                          equ 0001h
PE1_PDRVBY_LENGTH                        equ 0001h
PE1_PDRVBY_MASK                          equ 0020h
PE1_SDRVEN_POSN                          equ 0006h
PE1_SDRVEN_POSITION                      equ 0006h
PE1_SDRVEN_SIZE                          equ 0001h
PE1_SDRVEN_LENGTH                        equ 0001h
PE1_SDRVEN_MASK                          equ 0040h
PE1_PDRVEN_POSN                          equ 0007h
PE1_PDRVEN_POSITION                      equ 0007h
PE1_PDRVEN_SIZE                          equ 0001h
PE1_PDRVEN_LENGTH                        equ 0001h
PE1_PDRVEN_MASK                          equ 0080h

// Register: MODECON
#define MODECON MODECON
MODECON                                  equ 0108h
// bitfield definitions
MODECON_MSC2_POSN                        equ 0003h
MODECON_MSC2_POSITION                    equ 0003h
MODECON_MSC2_SIZE                        equ 0001h
MODECON_MSC2_LENGTH                      equ 0001h
MODECON_MSC2_MASK                        equ 0008h
MODECON_RFB_POSN                         equ 0005h
MODECON_RFB_POSITION                     equ 0005h
MODECON_RFB_SIZE                         equ 0001h
MODECON_RFB_LENGTH                       equ 0001h
MODECON_RFB_MASK                         equ 0020h
MODECON_MSC_POSN                         equ 0006h
MODECON_MSC_POSITION                     equ 0006h
MODECON_MSC_SIZE                         equ 0002h
MODECON_MSC_LENGTH                       equ 0002h
MODECON_MSC_MASK                         equ 00C0h

// Register: ABECON
#define ABECON ABECON
ABECON                                   equ 0109h
// bitfield definitions
ABECON_ANAOEN_POSN                       equ 0000h
ABECON_ANAOEN_POSITION                   equ 0000h
ABECON_ANAOEN_SIZE                       equ 0001h
ABECON_ANAOEN_LENGTH                     equ 0001h
ABECON_ANAOEN_MASK                       equ 0001h
ABECON_EADIS_POSN                        equ 0001h
ABECON_EADIS_POSITION                    equ 0001h
ABECON_EADIS_SIZE                        equ 0001h
ABECON_EADIS_LENGTH                      equ 0001h
ABECON_EADIS_MASK                        equ 0002h
ABECON_DRUVSEL_POSN                      equ 0003h
ABECON_DRUVSEL_POSITION                  equ 0003h
ABECON_DRUVSEL_SIZE                      equ 0001h
ABECON_DRUVSEL_LENGTH                    equ 0001h
ABECON_DRUVSEL_MASK                      equ 0008h
ABECON_DSEL_POSN                         equ 0004h
ABECON_DSEL_POSITION                     equ 0004h
ABECON_DSEL_SIZE                         equ 0003h
ABECON_DSEL_LENGTH                       equ 0003h
ABECON_DSEL_MASK                         equ 0070h
ABECON_DIGOEN_POSN                       equ 0007h
ABECON_DIGOEN_POSITION                   equ 0007h
ABECON_DIGOEN_SIZE                       equ 0001h
ABECON_DIGOEN_LENGTH                     equ 0001h
ABECON_DIGOEN_MASK                       equ 0080h

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

// Register: VRSPCAL
#define VRSPCAL VRSPCAL
VRSPCAL                                  equ 0119h
// bitfield definitions
VRSPCAL_VRSPCAL0_POSN                    equ 0000h
VRSPCAL_VRSPCAL0_POSITION                equ 0000h
VRSPCAL_VRSPCAL0_SIZE                    equ 0001h
VRSPCAL_VRSPCAL0_LENGTH                  equ 0001h
VRSPCAL_VRSPCAL0_MASK                    equ 0001h
VRSPCAL_VRSPCAL1_POSN                    equ 0001h
VRSPCAL_VRSPCAL1_POSITION                equ 0001h
VRSPCAL_VRSPCAL1_SIZE                    equ 0001h
VRSPCAL_VRSPCAL1_LENGTH                  equ 0001h
VRSPCAL_VRSPCAL1_MASK                    equ 0002h
VRSPCAL_VRSPCAL2_POSN                    equ 0002h
VRSPCAL_VRSPCAL2_POSITION                equ 0002h
VRSPCAL_VRSPCAL2_SIZE                    equ 0001h
VRSPCAL_VRSPCAL2_LENGTH                  equ 0001h
VRSPCAL_VRSPCAL2_MASK                    equ 0004h
VRSPCAL_VRSPCAL3_POSN                    equ 0003h
VRSPCAL_VRSPCAL3_POSITION                equ 0003h
VRSPCAL_VRSPCAL3_SIZE                    equ 0001h
VRSPCAL_VRSPCAL3_LENGTH                  equ 0001h
VRSPCAL_VRSPCAL3_MASK                    equ 0008h
VRSPCAL_VRSPCAL4_POSN                    equ 0004h
VRSPCAL_VRSPCAL4_POSITION                equ 0004h
VRSPCAL_VRSPCAL4_SIZE                    equ 0001h
VRSPCAL_VRSPCAL4_LENGTH                  equ 0001h
VRSPCAL_VRSPCAL4_MASK                    equ 0010h

// Register: VR2SPCAL
#define VR2SPCAL VR2SPCAL
VR2SPCAL                                 equ 011Ah
// bitfield definitions
VR2SPCAL_VR2SPCAL0_POSN                  equ 0000h
VR2SPCAL_VR2SPCAL0_POSITION              equ 0000h
VR2SPCAL_VR2SPCAL0_SIZE                  equ 0001h
VR2SPCAL_VR2SPCAL0_LENGTH                equ 0001h
VR2SPCAL_VR2SPCAL0_MASK                  equ 0001h
VR2SPCAL_VR2SPCAL1_POSN                  equ 0001h
VR2SPCAL_VR2SPCAL1_POSITION              equ 0001h
VR2SPCAL_VR2SPCAL1_SIZE                  equ 0001h
VR2SPCAL_VR2SPCAL1_LENGTH                equ 0001h
VR2SPCAL_VR2SPCAL1_MASK                  equ 0002h
VR2SPCAL_VR2SPCAL2_POSN                  equ 0002h
VR2SPCAL_VR2SPCAL2_POSITION              equ 0002h
VR2SPCAL_VR2SPCAL2_SIZE                  equ 0001h
VR2SPCAL_VR2SPCAL2_LENGTH                equ 0001h
VR2SPCAL_VR2SPCAL2_MASK                  equ 0004h
VR2SPCAL_VR2SPCAL3_POSN                  equ 0003h
VR2SPCAL_VR2SPCAL3_POSITION              equ 0003h
VR2SPCAL_VR2SPCAL3_SIZE                  equ 0001h
VR2SPCAL_VR2SPCAL3_LENGTH                equ 0001h
VR2SPCAL_VR2SPCAL3_MASK                  equ 0008h
VR2SPCAL_VR2SPCAL4_POSN                  equ 0004h
VR2SPCAL_VR2SPCAL4_POSITION              equ 0004h
VR2SPCAL_VR2SPCAL4_SIZE                  equ 0001h
VR2SPCAL_VR2SPCAL4_LENGTH                equ 0001h
VR2SPCAL_VR2SPCAL4_MASK                  equ 0010h

// Register: SPBRG
#define SPBRG SPBRG
SPBRG                                    equ 011Bh
// bitfield definitions
SPBRG_SPBRG0_POSN                        equ 0000h
SPBRG_SPBRG0_POSITION                    equ 0000h
SPBRG_SPBRG0_SIZE                        equ 0001h
SPBRG_SPBRG0_LENGTH                      equ 0001h
SPBRG_SPBRG0_MASK                        equ 0001h
SPBRG_SPBRG1_POSN                        equ 0001h
SPBRG_SPBRG1_POSITION                    equ 0001h
SPBRG_SPBRG1_SIZE                        equ 0001h
SPBRG_SPBRG1_LENGTH                      equ 0001h
SPBRG_SPBRG1_MASK                        equ 0002h
SPBRG_SPBRG2_POSN                        equ 0002h
SPBRG_SPBRG2_POSITION                    equ 0002h
SPBRG_SPBRG2_SIZE                        equ 0001h
SPBRG_SPBRG2_LENGTH                      equ 0001h
SPBRG_SPBRG2_MASK                        equ 0004h
SPBRG_SPBRG3_POSN                        equ 0003h
SPBRG_SPBRG3_POSITION                    equ 0003h
SPBRG_SPBRG3_SIZE                        equ 0001h
SPBRG_SPBRG3_LENGTH                      equ 0001h
SPBRG_SPBRG3_MASK                        equ 0008h
SPBRG_SPBRG4_POSN                        equ 0004h
SPBRG_SPBRG4_POSITION                    equ 0004h
SPBRG_SPBRG4_SIZE                        equ 0001h
SPBRG_SPBRG4_LENGTH                      equ 0001h
SPBRG_SPBRG4_MASK                        equ 0010h
SPBRG_SPBRG5_POSN                        equ 0005h
SPBRG_SPBRG5_POSITION                    equ 0005h
SPBRG_SPBRG5_SIZE                        equ 0001h
SPBRG_SPBRG5_LENGTH                      equ 0001h
SPBRG_SPBRG5_MASK                        equ 0020h
SPBRG_SPBRG6_POSN                        equ 0006h
SPBRG_SPBRG6_POSITION                    equ 0006h
SPBRG_SPBRG6_SIZE                        equ 0001h
SPBRG_SPBRG6_LENGTH                      equ 0001h
SPBRG_SPBRG6_MASK                        equ 0040h
SPBRG_SPBRG7_POSN                        equ 0007h
SPBRG_SPBRG7_POSITION                    equ 0007h
SPBRG_SPBRG7_SIZE                        equ 0001h
SPBRG_SPBRG7_LENGTH                      equ 0001h
SPBRG_SPBRG7_MASK                        equ 0080h

// Register: RCREG
#define RCREG RCREG
RCREG                                    equ 011Ch
// bitfield definitions
RCREG_USART_RCDAT_POSN                   equ 0000h
RCREG_USART_RCDAT_POSITION               equ 0000h
RCREG_USART_RCDAT_SIZE                   equ 0008h
RCREG_USART_RCDAT_LENGTH                 equ 0008h
RCREG_USART_RCDAT_MASK                   equ 00FFh

// Register: TXREG
#define TXREG TXREG
TXREG                                    equ 011Dh
// bitfield definitions
TXREG_USART_TXDAT_POSN                   equ 0000h
TXREG_USART_TXDAT_POSITION               equ 0000h
TXREG_USART_TXDAT_SIZE                   equ 0008h
TXREG_USART_TXDAT_LENGTH                 equ 0008h
TXREG_USART_TXDAT_MASK                   equ 00FFh

// Register: TXSTA
#define TXSTA TXSTA
TXSTA                                    equ 011Eh
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

// Register: RCSTA
#define RCSTA RCSTA
RCSTA                                    equ 011Fh
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

// Register: DSTCAL
#define DSTCAL DSTCAL
DSTCAL                                   equ 0196h
// bitfield definitions
DSTCAL_DSTCAL0_POSN                      equ 0000h
DSTCAL_DSTCAL0_POSITION                  equ 0000h
DSTCAL_DSTCAL0_SIZE                      equ 0001h
DSTCAL_DSTCAL0_LENGTH                    equ 0001h
DSTCAL_DSTCAL0_MASK                      equ 0001h
DSTCAL_DSTCAL1_POSN                      equ 0001h
DSTCAL_DSTCAL1_POSITION                  equ 0001h
DSTCAL_DSTCAL1_SIZE                      equ 0001h
DSTCAL_DSTCAL1_LENGTH                    equ 0001h
DSTCAL_DSTCAL1_MASK                      equ 0002h
DSTCAL_DSTCAL2_POSN                      equ 0002h
DSTCAL_DSTCAL2_POSITION                  equ 0002h
DSTCAL_DSTCAL2_SIZE                      equ 0001h
DSTCAL_DSTCAL2_LENGTH                    equ 0001h
DSTCAL_DSTCAL2_MASK                      equ 0004h
DSTCAL_DSTCAL3_POSN                      equ 0003h
DSTCAL_DSTCAL3_POSITION                  equ 0003h
DSTCAL_DSTCAL3_SIZE                      equ 0001h
DSTCAL_DSTCAL3_LENGTH                    equ 0001h
DSTCAL_DSTCAL3_MASK                      equ 0008h
DSTCAL_DSTCAL4_POSN                      equ 0004h
DSTCAL_DSTCAL4_POSITION                  equ 0004h
DSTCAL_DSTCAL4_SIZE                      equ 0001h
DSTCAL_DSTCAL4_LENGTH                    equ 0001h
DSTCAL_DSTCAL4_MASK                      equ 0010h

// Register: RFBTCAL
#define RFBTCAL RFBTCAL
RFBTCAL                                  equ 0197h
// bitfield definitions
RFBTCAL_RFBCAL0_POSN                     equ 0000h
RFBTCAL_RFBCAL0_POSITION                 equ 0000h
RFBTCAL_RFBCAL0_SIZE                     equ 0001h
RFBTCAL_RFBCAL0_LENGTH                   equ 0001h
RFBTCAL_RFBCAL0_MASK                     equ 0001h
RFBTCAL_RFBCAL1_POSN                     equ 0001h
RFBTCAL_RFBCAL1_POSITION                 equ 0001h
RFBTCAL_RFBCAL1_SIZE                     equ 0001h
RFBTCAL_RFBCAL1_LENGTH                   equ 0001h
RFBTCAL_RFBCAL1_MASK                     equ 0002h
RFBTCAL_RFBCAL2_POSN                     equ 0002h
RFBTCAL_RFBCAL2_POSITION                 equ 0002h
RFBTCAL_RFBCAL2_SIZE                     equ 0001h
RFBTCAL_RFBCAL2_LENGTH                   equ 0001h
RFBTCAL_RFBCAL2_MASK                     equ 0004h
RFBTCAL_RFBCAL3_POSN                     equ 0003h
RFBTCAL_RFBCAL3_POSITION                 equ 0003h
RFBTCAL_RFBCAL3_SIZE                     equ 0001h
RFBTCAL_RFBCAL3_LENGTH                   equ 0001h
RFBTCAL_RFBCAL3_MASK                     equ 0008h
RFBTCAL_RFBCAL4_POSN                     equ 0004h
RFBTCAL_RFBCAL4_POSITION                 equ 0004h
RFBTCAL_RFBCAL4_SIZE                     equ 0001h
RFBTCAL_RFBCAL4_LENGTH                   equ 0001h
RFBTCAL_RFBCAL4_MASK                     equ 0010h
RFBTCAL_RFBCAL5_POSN                     equ 0005h
RFBTCAL_RFBCAL5_POSITION                 equ 0005h
RFBTCAL_RFBCAL5_SIZE                     equ 0001h
RFBTCAL_RFBCAL5_LENGTH                   equ 0001h
RFBTCAL_RFBCAL5_MASK                     equ 0020h

// Register: OSCCAL
#define OSCCAL OSCCAL
OSCCAL                                   equ 0198h
// bitfield definitions
OSCCAL_FCALT0_POSN                       equ 0000h
OSCCAL_FCALT0_POSITION                   equ 0000h
OSCCAL_FCALT0_SIZE                       equ 0001h
OSCCAL_FCALT0_LENGTH                     equ 0001h
OSCCAL_FCALT0_MASK                       equ 0001h
OSCCAL_FCALT1_POSN                       equ 0001h
OSCCAL_FCALT1_POSITION                   equ 0001h
OSCCAL_FCALT1_SIZE                       equ 0001h
OSCCAL_FCALT1_LENGTH                     equ 0001h
OSCCAL_FCALT1_MASK                       equ 0002h
OSCCAL_FCALT2_POSN                       equ 0002h
OSCCAL_FCALT2_POSITION                   equ 0002h
OSCCAL_FCALT2_SIZE                       equ 0001h
OSCCAL_FCALT2_LENGTH                     equ 0001h
OSCCAL_FCALT2_MASK                       equ 0004h
OSCCAL_FCALT3_POSN                       equ 0003h
OSCCAL_FCALT3_POSITION                   equ 0003h
OSCCAL_FCALT3_SIZE                       equ 0001h
OSCCAL_FCALT3_LENGTH                     equ 0001h
OSCCAL_FCALT3_MASK                       equ 0008h
OSCCAL_FCALT4_POSN                       equ 0004h
OSCCAL_FCALT4_POSITION                   equ 0004h
OSCCAL_FCALT4_SIZE                       equ 0001h
OSCCAL_FCALT4_LENGTH                     equ 0001h
OSCCAL_FCALT4_MASK                       equ 0010h
OSCCAL_FCALT5_POSN                       equ 0005h
OSCCAL_FCALT5_POSITION                   equ 0005h
OSCCAL_FCALT5_SIZE                       equ 0001h
OSCCAL_FCALT5_LENGTH                     equ 0001h
OSCCAL_FCALT5_MASK                       equ 0020h
OSCCAL_FCALT6_POSN                       equ 0006h
OSCCAL_FCALT6_POSITION                   equ 0006h
OSCCAL_FCALT6_SIZE                       equ 0001h
OSCCAL_FCALT6_LENGTH                     equ 0001h
OSCCAL_FCALT6_MASK                       equ 0040h

// Register: DCSCAL
#define DCSCAL DCSCAL
DCSCAL                                   equ 0199h
// bitfield definitions
DCSCAL_DCSCAL0_POSN                      equ 0000h
DCSCAL_DCSCAL0_POSITION                  equ 0000h
DCSCAL_DCSCAL0_SIZE                      equ 0001h
DCSCAL_DCSCAL0_LENGTH                    equ 0001h
DCSCAL_DCSCAL0_MASK                      equ 0001h
DCSCAL_DCSCAL1_POSN                      equ 0001h
DCSCAL_DCSCAL1_POSITION                  equ 0001h
DCSCAL_DCSCAL1_SIZE                      equ 0001h
DCSCAL_DCSCAL1_LENGTH                    equ 0001h
DCSCAL_DCSCAL1_MASK                      equ 0002h
DCSCAL_DCSCAL2_POSN                      equ 0002h
DCSCAL_DCSCAL2_POSITION                  equ 0002h
DCSCAL_DCSCAL2_SIZE                      equ 0001h
DCSCAL_DCSCAL2_LENGTH                    equ 0001h
DCSCAL_DCSCAL2_MASK                      equ 0004h
DCSCAL_DCSCAL3_POSN                      equ 0003h
DCSCAL_DCSCAL3_POSITION                  equ 0003h
DCSCAL_DCSCAL3_SIZE                      equ 0001h
DCSCAL_DCSCAL3_LENGTH                    equ 0001h
DCSCAL_DCSCAL3_MASK                      equ 0008h
DCSCAL_DCSCAL4_POSN                      equ 0004h
DCSCAL_DCSCAL4_POSITION                  equ 0004h
DCSCAL_DCSCAL4_SIZE                      equ 0001h
DCSCAL_DCSCAL4_LENGTH                    equ 0001h
DCSCAL_DCSCAL4_MASK                      equ 0010h
DCSCAL_DCSCAL5_POSN                      equ 0005h
DCSCAL_DCSCAL5_POSITION                  equ 0005h
DCSCAL_DCSCAL5_SIZE                      equ 0001h
DCSCAL_DCSCAL5_LENGTH                    equ 0001h
DCSCAL_DCSCAL5_MASK                      equ 0020h
DCSCAL_DCSCAL6_POSN                      equ 0006h
DCSCAL_DCSCAL6_POSITION                  equ 0006h
DCSCAL_DCSCAL6_SIZE                      equ 0001h
DCSCAL_DCSCAL6_LENGTH                    equ 0001h
DCSCAL_DCSCAL6_MASK                      equ 0040h

// Register: TTACAL
#define TTACAL TTACAL
TTACAL                                   equ 019Ah
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

// Register: BGRCAL
#define BGRCAL BGRCAL
BGRCAL                                   equ 019Bh
// bitfield definitions
BGRCAL_BGRT0_POSN                        equ 0000h
BGRCAL_BGRT0_POSITION                    equ 0000h
BGRCAL_BGRT0_SIZE                        equ 0001h
BGRCAL_BGRT0_LENGTH                      equ 0001h
BGRCAL_BGRT0_MASK                        equ 0001h
BGRCAL_BGRT1_POSN                        equ 0001h
BGRCAL_BGRT1_POSITION                    equ 0001h
BGRCAL_BGRT1_SIZE                        equ 0001h
BGRCAL_BGRT1_LENGTH                      equ 0001h
BGRCAL_BGRT1_MASK                        equ 0002h
BGRCAL_BGRT2_POSN                        equ 0002h
BGRCAL_BGRT2_POSITION                    equ 0002h
BGRCAL_BGRT2_SIZE                        equ 0001h
BGRCAL_BGRT2_LENGTH                      equ 0001h
BGRCAL_BGRT2_MASK                        equ 0004h
BGRCAL_BGRT3_POSN                        equ 0003h
BGRCAL_BGRT3_POSITION                    equ 0003h
BGRCAL_BGRT3_SIZE                        equ 0001h
BGRCAL_BGRT3_LENGTH                      equ 0001h
BGRCAL_BGRT3_MASK                        equ 0008h
BGRCAL_BGRT4_POSN                        equ 0004h
BGRCAL_BGRT4_POSITION                    equ 0004h
BGRCAL_BGRT4_SIZE                        equ 0001h
BGRCAL_BGRT4_LENGTH                      equ 0001h
BGRCAL_BGRT4_MASK                        equ 0010h

// Register: EAOFFCAL
#define EAOFFCAL EAOFFCAL
EAOFFCAL                                 equ 019Ch
// bitfield definitions
EAOFFCAL_EAOFFCAL0_POSN                  equ 0000h
EAOFFCAL_EAOFFCAL0_POSITION              equ 0000h
EAOFFCAL_EAOFFCAL0_SIZE                  equ 0001h
EAOFFCAL_EAOFFCAL0_LENGTH                equ 0001h
EAOFFCAL_EAOFFCAL0_MASK                  equ 0001h
EAOFFCAL_EAOFFCAL1_POSN                  equ 0001h
EAOFFCAL_EAOFFCAL1_POSITION              equ 0001h
EAOFFCAL_EAOFFCAL1_SIZE                  equ 0001h
EAOFFCAL_EAOFFCAL1_LENGTH                equ 0001h
EAOFFCAL_EAOFFCAL1_MASK                  equ 0002h
EAOFFCAL_EAOFFCAL2_POSN                  equ 0002h
EAOFFCAL_EAOFFCAL2_POSITION              equ 0002h
EAOFFCAL_EAOFFCAL2_SIZE                  equ 0001h
EAOFFCAL_EAOFFCAL2_LENGTH                equ 0001h
EAOFFCAL_EAOFFCAL2_MASK                  equ 0004h
EAOFFCAL_EAOFFCAL3_POSN                  equ 0003h
EAOFFCAL_EAOFFCAL3_POSITION              equ 0003h
EAOFFCAL_EAOFFCAL3_SIZE                  equ 0001h
EAOFFCAL_EAOFFCAL3_LENGTH                equ 0001h
EAOFFCAL_EAOFFCAL3_MASK                  equ 0008h
EAOFFCAL_EAOFFCAL4_POSN                  equ 0004h
EAOFFCAL_EAOFFCAL4_POSITION              equ 0004h
EAOFFCAL_EAOFFCAL4_SIZE                  equ 0001h
EAOFFCAL_EAOFFCAL4_LENGTH                equ 0001h
EAOFFCAL_EAOFFCAL4_MASK                  equ 0010h

// Register: AVDDCAL
#define AVDDCAL AVDDCAL
AVDDCAL                                  equ 019Dh
// bitfield definitions
AVDDCAL_AVDDCAL0_POSN                    equ 0000h
AVDDCAL_AVDDCAL0_POSITION                equ 0000h
AVDDCAL_AVDDCAL0_SIZE                    equ 0001h
AVDDCAL_AVDDCAL0_LENGTH                  equ 0001h
AVDDCAL_AVDDCAL0_MASK                    equ 0001h
AVDDCAL_AVDDCAL1_POSN                    equ 0001h
AVDDCAL_AVDDCAL1_POSITION                equ 0001h
AVDDCAL_AVDDCAL1_SIZE                    equ 0001h
AVDDCAL_AVDDCAL1_LENGTH                  equ 0001h
AVDDCAL_AVDDCAL1_MASK                    equ 0002h
AVDDCAL_AVDDCAL2_POSN                    equ 0002h
AVDDCAL_AVDDCAL2_POSITION                equ 0002h
AVDDCAL_AVDDCAL2_SIZE                    equ 0001h
AVDDCAL_AVDDCAL2_LENGTH                  equ 0001h
AVDDCAL_AVDDCAL2_MASK                    equ 0004h
AVDDCAL_AVDDCAL3_POSN                    equ 0003h
AVDDCAL_AVDDCAL3_POSITION                equ 0003h
AVDDCAL_AVDDCAL3_SIZE                    equ 0001h
AVDDCAL_AVDDCAL3_LENGTH                  equ 0001h
AVDDCAL_AVDDCAL3_MASK                    equ 0008h

// Register: A2GCAL
#define A2GCAL A2GCAL
A2GCAL                                   equ 019Eh
// bitfield definitions
A2GCAL_A2GCAL0_POSN                      equ 0000h
A2GCAL_A2GCAL0_POSITION                  equ 0000h
A2GCAL_A2GCAL0_SIZE                      equ 0001h
A2GCAL_A2GCAL0_LENGTH                    equ 0001h
A2GCAL_A2GCAL0_MASK                      equ 0001h
A2GCAL_A2GCAL1_POSN                      equ 0001h
A2GCAL_A2GCAL1_POSITION                  equ 0001h
A2GCAL_A2GCAL1_SIZE                      equ 0001h
A2GCAL_A2GCAL1_LENGTH                    equ 0001h
A2GCAL_A2GCAL1_MASK                      equ 0002h
A2GCAL_A2GCAL2_POSN                      equ 0002h
A2GCAL_A2GCAL2_POSITION                  equ 0002h
A2GCAL_A2GCAL2_SIZE                      equ 0001h
A2GCAL_A2GCAL2_LENGTH                    equ 0001h
A2GCAL_A2GCAL2_MASK                      equ 0004h
A2GCAL_A2GCAL3_POSN                      equ 0003h
A2GCAL_A2GCAL3_POSITION                  equ 0003h
A2GCAL_A2GCAL3_SIZE                      equ 0001h
A2GCAL_A2GCAL3_LENGTH                    equ 0001h
A2GCAL_A2GCAL3_MASK                      equ 0008h

// Register: OVRSPCAL
#define OVRSPCAL OVRSPCAL
OVRSPCAL                                 equ 019Fh
// bitfield definitions
OVRSPCAL_OVRSPCAL0_POSN                  equ 0000h
OVRSPCAL_OVRSPCAL0_POSITION              equ 0000h
OVRSPCAL_OVRSPCAL0_SIZE                  equ 0001h
OVRSPCAL_OVRSPCAL0_LENGTH                equ 0001h
OVRSPCAL_OVRSPCAL0_MASK                  equ 0001h
OVRSPCAL_OVRSPCAL1_POSN                  equ 0001h
OVRSPCAL_OVRSPCAL1_POSITION              equ 0001h
OVRSPCAL_OVRSPCAL1_SIZE                  equ 0001h
OVRSPCAL_OVRSPCAL1_LENGTH                equ 0001h
OVRSPCAL_OVRSPCAL1_MASK                  equ 0002h
OVRSPCAL_OVRSPCAL2_POSN                  equ 0002h
OVRSPCAL_OVRSPCAL2_POSITION              equ 0002h
OVRSPCAL_OVRSPCAL2_SIZE                  equ 0001h
OVRSPCAL_OVRSPCAL2_LENGTH                equ 0001h
OVRSPCAL_OVRSPCAL2_MASK                  equ 0004h
OVRSPCAL_OVRSPCAL3_POSN                  equ 0003h
OVRSPCAL_OVRSPCAL3_POSITION              equ 0003h
OVRSPCAL_OVRSPCAL3_SIZE                  equ 0001h
OVRSPCAL_OVRSPCAL3_LENGTH                equ 0001h
OVRSPCAL_OVRSPCAL3_MASK                  equ 0008h
OVRSPCAL_OVRSPCAL4_POSN                  equ 0004h
OVRSPCAL_OVRSPCAL4_POSITION              equ 0004h
OVRSPCAL_OVRSPCAL4_SIZE                  equ 0001h
OVRSPCAL_OVRSPCAL4_LENGTH                equ 0001h
OVRSPCAL_OVRSPCAL4_MASK                  equ 0010h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define A2GCAL0                          BANKMASK(A2GCAL), 0
#define A2GCAL1                          BANKMASK(A2GCAL), 1
#define A2GCAL2                          BANKMASK(A2GCAL), 2
#define A2GCAL3                          BANKMASK(A2GCAL), 3
#define ACKDT                            BANKMASK(SSPCON2), 5
#define ACKEN                            BANKMASK(SSPCON2), 4
#define ACKSTAT                          BANKMASK(SSPCON2), 6
#define ACKTIM                           BANKMASK(SSPCON3), 7
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADC_REFR                         BANKMASK(PCON), 7
#define ADDEN                            BANKMASK(RCSTA), 3
#define ADIE                             BANKMASK(PIE2), 6
#define ADIF                             BANKMASK(PIR2), 6
#define ADON                             BANKMASK(ADCON0), 0
#define AHEN                             BANKMASK(SSPCON3), 1
#define ANAOEN                           BANKMASK(ABECON), 0
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSB1                            BANKMASK(ANSELB), 1
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define ANSB6                            BANKMASK(ANSELB), 6
#define AVDDCAL0                         BANKMASK(AVDDCAL), 0
#define AVDDCAL1                         BANKMASK(AVDDCAL), 1
#define AVDDCAL2                         BANKMASK(AVDDCAL), 2
#define AVDDCAL3                         BANKMASK(AVDDCAL), 3
#define BCLIE                            BANKMASK(PIE1), 5
#define BCLIF                            BANKMASK(PIR1), 5
#define BF                               BANKMASK(SSPSTAT), 0
#define BGRT0                            BANKMASK(BGRCAL), 0
#define BGRT1                            BANKMASK(BGRCAL), 1
#define BGRT2                            BANKMASK(BGRCAL), 2
#define BGRT3                            BANKMASK(BGRCAL), 3
#define BGRT4                            BANKMASK(BGRCAL), 4
#define BOEN                             BANKMASK(SSPCON3), 4
#define BRGH                             BANKMASK(TXSTA), 2
#define CALSEL                           BANKMASK(PMCON1), 6
#define CARRY                            BANKMASK(STATUS), 0
#define CC1IE                            BANKMASK(PIE1), 2
#define CC1IF                            BANKMASK(PIR1), 2
#define CC2IE                            BANKMASK(PIE1), 3
#define CC2IF                            BANKMASK(PIR1), 3
#define CDSIE                            BANKMASK(PIE2), 7
#define CDSIF                            BANKMASK(PIR2), 7
#define CDSINTN                          BANKMASK(DESATCON), 0
#define CDSINTP                          BANKMASK(DESATCON), 1
#define CDSMUX                           BANKMASK(DESATCON), 7
#define CDSOE                            BANKMASK(DESATCON), 3
#define CDSOUT                           BANKMASK(DESATCON), 2
#define CDSPOL                           BANKMASK(DESATCON), 4
#define CDSWDE                           BANKMASK(DESATCON), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON1), 4
#define CREN                             BANKMASK(RCSTA), 4
#define CSRC                             BANKMASK(TXSTA), 7
#define DC                               BANKMASK(STATUS), 1
#define DCSCAL0                          BANKMASK(DCSCAL), 0
#define DCSCAL1                          BANKMASK(DCSCAL), 1
#define DCSCAL2                          BANKMASK(DCSCAL), 2
#define DCSCAL3                          BANKMASK(DCSCAL), 3
#define DCSCAL4                          BANKMASK(DCSCAL), 4
#define DCSCAL5                          BANKMASK(DCSCAL), 5
#define DCSCAL6                          BANKMASK(DCSCAL), 6
#define DHEN                             BANKMASK(SSPCON3), 0
#define DIGOEN                           BANKMASK(ABECON), 7
#define DRUVIE                           BANKMASK(PIE2), 2
#define DRUVIF                           BANKMASK(PIR2), 2
#define DRUVSEL                          BANKMASK(ABECON), 3
#define DSTCAL0                          BANKMASK(DSTCAL), 0
#define DSTCAL1                          BANKMASK(DSTCAL), 1
#define DSTCAL2                          BANKMASK(DSTCAL), 2
#define DSTCAL3                          BANKMASK(DSTCAL), 3
#define DSTCAL4                          BANKMASK(DSTCAL), 4
#define D_nA                             BANKMASK(SSPSTAT), 5
#define EADIS                            BANKMASK(ABECON), 1
#define EAOFFCAL0                        BANKMASK(EAOFFCAL), 0
#define EAOFFCAL1                        BANKMASK(EAOFFCAL), 1
#define EAOFFCAL2                        BANKMASK(EAOFFCAL), 2
#define EAOFFCAL3                        BANKMASK(EAOFFCAL), 3
#define EAOFFCAL4                        BANKMASK(EAOFFCAL), 4
#define FCALT0                           BANKMASK(OSCCAL), 0
#define FCALT1                           BANKMASK(OSCCAL), 1
#define FCALT2                           BANKMASK(OSCCAL), 2
#define FCALT3                           BANKMASK(OSCCAL), 3
#define FCALT4                           BANKMASK(OSCCAL), 4
#define FCALT5                           BANKMASK(OSCCAL), 5
#define FCALT6                           BANKMASK(OSCCAL), 6
#define FERR                             BANKMASK(RCSTA), 2
#define GCEN                             BANKMASK(SSPCON2), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define GPA0                             BANKMASK(PORTGPA), 0
#define GPA1                             BANKMASK(PORTGPA), 1
#define GPA2                             BANKMASK(PORTGPA), 2
#define GPA3                             BANKMASK(PORTGPA), 3
#define GPA5                             BANKMASK(PORTGPA), 5
#define GPA6                             BANKMASK(PORTGPA), 6
#define GPA7                             BANKMASK(PORTGPA), 7
#define GPB0                             BANKMASK(PORTGPB), 0
#define GPB1                             BANKMASK(PORTGPB), 1
#define GPB4                             BANKMASK(PORTGPB), 4
#define GPB5                             BANKMASK(PORTGPB), 5
#define GPB6                             BANKMASK(PORTGPB), 6
#define GPB7                             BANKMASK(PORTGPB), 7
#define GPIO0                            BANKMASK(PORTGPA), 0
#define GPIO1                            BANKMASK(PORTGPA), 1
#define GPIO2                            BANKMASK(PORTGPA), 2
#define GPIO3                            BANKMASK(PORTGPA), 3
#define GPIO5                            BANKMASK(PORTGPA), 5
#define GPIO6                            BANKMASK(PORTGPA), 6
#define GPIO7                            BANKMASK(PORTGPA), 7
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCA0                            BANKMASK(IOCA), 0
#define IOCA1                            BANKMASK(IOCA), 1
#define IOCA2                            BANKMASK(IOCA), 2
#define IOCA3                            BANKMASK(IOCA), 3
#define IOCA5                            BANKMASK(IOCA), 5
#define IOCA6                            BANKMASK(IOCA), 6
#define IOCA7                            BANKMASK(IOCA), 7
#define IOCB0                            BANKMASK(IOCB), 0
#define IOCB1                            BANKMASK(IOCB), 1
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCB6                            BANKMASK(IOCB), 6
#define IOCB7                            BANKMASK(IOCB), 7
#define IOCE                             BANKMASK(INTCON), 3
#define IOCF                             BANKMASK(INTCON), 0
#define ISPUEN                           BANKMASK(PE1), 2
#define MSC2                             BANKMASK(MODECON), 3
#define OERR                             BANKMASK(RCSTA), 1
#define OOV0                             BANKMASK(OVREFCON), 0
#define OOV1                             BANKMASK(OVREFCON), 1
#define OOV2                             BANKMASK(OVREFCON), 2
#define OOV3                             BANKMASK(OVREFCON), 3
#define OOV4                             BANKMASK(OVREFCON), 4
#define OOV5                             BANKMASK(OVREFCON), 5
#define OOV6                             BANKMASK(OVREFCON), 6
#define OOV7                             BANKMASK(OVREFCON), 7
#define OTIE                             BANKMASK(PIE2), 4
#define OTIF                             BANKMASK(PIR2), 4
#define OVEN                             BANKMASK(OVCON), 3
#define OVIE                             BANKMASK(PIE2), 3
#define OVIF                             BANKMASK(PIR2), 3
#define OVINTN                           BANKMASK(OVCON), 0
#define OVINTP                           BANKMASK(OVCON), 1
#define OVLO0                            BANKMASK(VINOVLO), 0
#define OVLO1                            BANKMASK(VINOVLO), 1
#define OVLO2                            BANKMASK(VINOVLO), 2
#define OVLO3                            BANKMASK(VINOVLO), 3
#define OVLO4                            BANKMASK(VINOVLO), 4
#define OVLO5                            BANKMASK(VINOVLO), 5
#define OVLOEN                           BANKMASK(VINCON), 3
#define OVLOIE                           BANKMASK(PIE2), 1
#define OVLOIF                           BANKMASK(PIR2), 1
#define OVLOINTN                         BANKMASK(VINCON), 0
#define OVLOINTP                         BANKMASK(VINCON), 1
#define OVLOOUT                          BANKMASK(VINCON), 2
#define OVOUT                            BANKMASK(OVCON), 2
#define OVRSPCAL0                        BANKMASK(OVRSPCAL), 0
#define OVRSPCAL1                        BANKMASK(OVRSPCAL), 1
#define OVRSPCAL2                        BANKMASK(OVRSPCAL), 2
#define OVRSPCAL3                        BANKMASK(OVRSPCAL), 3
#define OVRSPCAL4                        BANKMASK(OVRSPCAL), 4
#define PCIE                             BANKMASK(SSPCON3), 6
#define PDRVBY                           BANKMASK(PE1), 5
#define PDRVEN                           BANKMASK(PE1), 7
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
#define PWMSTR_PEN                       BANKMASK(PE1), 1
#define PWMSTR_SEN                       BANKMASK(PE1), 0
#define RA0                              BANKMASK(PORTGPA), 0
#define RA1                              BANKMASK(PORTGPA), 1
#define RA2                              BANKMASK(PORTGPA), 2
#define RA3                              BANKMASK(PORTGPA), 3
#define RA5                              BANKMASK(PORTGPA), 5
#define RA6                              BANKMASK(PORTGPA), 6
#define RA7                              BANKMASK(PORTGPA), 7
#define RB0                              BANKMASK(PORTGPB), 0
#define RB1                              BANKMASK(PORTGPB), 1
#define RB4                              BANKMASK(PORTGPB), 4
#define RB5                              BANKMASK(PORTGPB), 5
#define RB6                              BANKMASK(PORTGPB), 6
#define RB7                              BANKMASK(PORTGPB), 7
#define RCEN                             BANKMASK(SSPCON2), 3
#define RCIE                             BANKMASK(PIE1), 6
#define RCIF                             BANKMASK(PIR1), 6
#define RD                               BANKMASK(PMCON1), 0
#define RFB                              BANKMASK(MODECON), 5
#define RFBCAL0                          BANKMASK(RFBTCAL), 0
#define RFBCAL1                          BANKMASK(RFBTCAL), 1
#define RFBCAL2                          BANKMASK(RFBTCAL), 2
#define RFBCAL3                          BANKMASK(RFBTCAL), 3
#define RFBCAL4                          BANKMASK(RFBTCAL), 4
#define RFBCAL5                          BANKMASK(RFBTCAL), 5
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RSEN                             BANKMASK(SSPCON2), 1
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SBCDE                            BANKMASK(SSPCON3), 2
#define SCIE                             BANKMASK(SSPCON3), 5
#define SDAHT                            BANKMASK(SSPCON3), 3
#define SDRVBY                           BANKMASK(PE1), 4
#define SDRVEN                           BANKMASK(PE1), 6
#define SEN                              BANKMASK(SSPCON2), 0
#define SLPBY                            BANKMASK(SLPCRCON), 6
#define SMP                              BANKMASK(SSPSTAT), 7
#define SPBRG0                           BANKMASK(SPBRG), 0
#define SPBRG1                           BANKMASK(SPBRG), 1
#define SPBRG2                           BANKMASK(SPBRG), 2
#define SPBRG3                           BANKMASK(SPBRG), 3
#define SPBRG4                           BANKMASK(SPBRG), 4
#define SPBRG5                           BANKMASK(SPBRG), 5
#define SPBRG6                           BANKMASK(SPBRG), 6
#define SPBRG7                           BANKMASK(SPBRG), 7
#define SPEN                             BANKMASK(RCSTA), 7
#define SREN                             BANKMASK(RCSTA), 5
#define SSPEN                            BANKMASK(SSPCON1), 5
#define SSPIE                            BANKMASK(PIE1), 4
#define SSPIF                            BANKMASK(PIR1), 4
#define SSPM0                            BANKMASK(SSPCON1), 0
#define SSPM1                            BANKMASK(SSPCON1), 1
#define SSPM2                            BANKMASK(SSPCON1), 2
#define SSPM3                            BANKMASK(SSPCON1), 3
#define SSPOV                            BANKMASK(SSPCON1), 6
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define TMR1CS                           BANKMASK(T1CON), 1
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(T2CON), 2
#define TRISA0                           BANKMASK(TRISGPA), 0
#define TRISA1                           BANKMASK(TRISGPA), 1
#define TRISA2                           BANKMASK(TRISGPA), 2
#define TRISA3                           BANKMASK(TRISGPA), 3
#define TRISA5                           BANKMASK(TRISGPA), 5
#define TRISA6                           BANKMASK(TRISGPA), 6
#define TRISA7                           BANKMASK(TRISGPA), 7
#define TRISB0                           BANKMASK(TRISGPB), 0
#define TRISB1                           BANKMASK(TRISGPB), 1
#define TRISB4                           BANKMASK(TRISGPB), 4
#define TRISB5                           BANKMASK(TRISGPB), 5
#define TRISB6                           BANKMASK(TRISGPB), 6
#define TRISB7                           BANKMASK(TRISGPB), 7
#define TRMT                             BANKMASK(TXSTA), 1
#define TTA0                             BANKMASK(TTACAL), 0
#define TTA1                             BANKMASK(TTACAL), 1
#define TTA2                             BANKMASK(TTACAL), 2
#define TTA3                             BANKMASK(TTACAL), 3
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE1), 7
#define TXIF                             BANKMASK(PIR1), 7
#define UA                               BANKMASK(SSPSTAT), 1
#define UVLO0                            BANKMASK(VINUVLO), 0
#define UVLO1                            BANKMASK(VINUVLO), 1
#define UVLO2                            BANKMASK(VINUVLO), 2
#define UVLO3                            BANKMASK(VINUVLO), 3
#define UVLO4                            BANKMASK(VINUVLO), 4
#define UVLO5                            BANKMASK(VINUVLO), 5
#define UVLOEN                           BANKMASK(VINCON), 7
#define UVLOIE                           BANKMASK(PIE2), 0
#define UVLOIF                           BANKMASK(PIR2), 0
#define UVLOINTN                         BANKMASK(VINCON), 4
#define UVLOINTP                         BANKMASK(VINCON), 5
#define UVLOOUT                          BANKMASK(VINCON), 6
#define VCFG                             BANKMASK(ADCON1), 0
#define VDDOK                            BANKMASK(PCON), 2
#define VR2SPCAL0                        BANKMASK(VR2SPCAL), 0
#define VR2SPCAL1                        BANKMASK(VR2SPCAL), 1
#define VR2SPCAL2                        BANKMASK(VR2SPCAL), 2
#define VR2SPCAL3                        BANKMASK(VR2SPCAL), 3
#define VR2SPCAL4                        BANKMASK(VR2SPCAL), 4
#define VREF0                            BANKMASK(VREFCON), 0
#define VREF1                            BANKMASK(VREFCON), 1
#define VREF2                            BANKMASK(VREFCON), 2
#define VREF20                           BANKMASK(VREF2CON), 0
#define VREF21                           BANKMASK(VREF2CON), 1
#define VREF22                           BANKMASK(VREF2CON), 2
#define VREF23                           BANKMASK(VREF2CON), 3
#define VREF24                           BANKMASK(VREF2CON), 4
#define VREF25                           BANKMASK(VREF2CON), 5
#define VREF26                           BANKMASK(VREF2CON), 6
#define VREF27                           BANKMASK(VREF2CON), 7
#define VREF3                            BANKMASK(VREFCON), 3
#define VREF4                            BANKMASK(VREFCON), 4
#define VREF5                            BANKMASK(VREFCON), 5
#define VREF6                            BANKMASK(VREFCON), 6
#define VREF7                            BANKMASK(VREFCON), 7
#define VRSPCAL0                         BANKMASK(VRSPCAL), 0
#define VRSPCAL1                         BANKMASK(VRSPCAL), 1
#define VRSPCAL2                         BANKMASK(VRSPCAL), 2
#define VRSPCAL3                         BANKMASK(VRSPCAL), 3
#define VRSPCAL4                         BANKMASK(VRSPCAL), 4
#define WCOL                             BANKMASK(SSPCON1), 7
#define WPUA0                            BANKMASK(WPUGPA), 0
#define WPUA1                            BANKMASK(WPUGPA), 1
#define WPUA2                            BANKMASK(WPUGPA), 2
#define WPUA3                            BANKMASK(WPUGPA), 3
#define WPUA5                            BANKMASK(WPUGPA), 5
#define WPUB1                            BANKMASK(WPUGPB), 1
#define WPUB4                            BANKMASK(WPUGPB), 4
#define WPUB5                            BANKMASK(WPUGPB), 5
#define WPUB6                            BANKMASK(WPUGPB), 6
#define WPUB7                            BANKMASK(WPUGPB), 7
#define WPUGPA0                          BANKMASK(WPUGPA), 0
#define WPUGPA1                          BANKMASK(WPUGPA), 1
#define WPUGPA2                          BANKMASK(WPUGPA), 2
#define WPUGPA3                          BANKMASK(WPUGPA), 3
#define WPUGPA5                          BANKMASK(WPUGPA), 5
#define WPUGPB1                          BANKMASK(WPUGPB), 1
#define WPUGPB4                          BANKMASK(WPUGPB), 4
#define WPUGPB5                          BANKMASK(WPUGPB), 5
#define WPUGPB6                          BANKMASK(WPUGPB), 6
#define WPUGPB7                          BANKMASK(WPUGPB), 7
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define ZERO                             BANKMASK(STATUS), 2
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRAPUI                           BANKMASK(OPTION_REG), 7
#define nTO                              BANKMASK(STATUS), 4
#define nVDD_FLAG                        BANKMASK(PCON), 3

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

#endif // _MCP19117_INC_
