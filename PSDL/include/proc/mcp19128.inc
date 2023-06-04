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

#ifndef _MCP19128_INC_
#define _MCP19128_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * MCP19128
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
PIR1_TIMR4IF_POSN                        equ 0002h
PIR1_TIMR4IF_POSITION                    equ 0002h
PIR1_TIMR4IF_SIZE                        equ 0001h
PIR1_TIMR4IF_LENGTH                      equ 0001h
PIR1_TIMR4IF_MASK                        equ 0004h
PIR1_TIMR1GIF_POSN                       equ 0003h
PIR1_TIMR1GIF_POSITION                   equ 0003h
PIR1_TIMR1GIF_SIZE                       equ 0001h
PIR1_TIMR1GIF_LENGTH                     equ 0001h
PIR1_TIMR1GIF_MASK                       equ 0008h
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
PIR1_OTIF_POSN                           equ 0007h
PIR1_OTIF_POSITION                       equ 0007h
PIR1_OTIF_SIZE                           equ 0001h
PIR1_OTIF_LENGTH                         equ 0001h
PIR1_OTIF_MASK                           equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0008h
// bitfield definitions
PIR2_V1UVIF_POSN                         equ 0000h
PIR2_V1UVIF_POSITION                     equ 0000h
PIR2_V1UVIF_SIZE                         equ 0001h
PIR2_V1UVIF_LENGTH                       equ 0001h
PIR2_V1UVIF_MASK                         equ 0001h
PIR2_V1OVIF_POSN                         equ 0001h
PIR2_V1OVIF_POSITION                     equ 0001h
PIR2_V1OVIF_SIZE                         equ 0001h
PIR2_V1OVIF_LENGTH                       equ 0001h
PIR2_V1OVIF_MASK                         equ 0002h
PIR2_V2UVIF_POSN                         equ 0002h
PIR2_V2UVIF_POSITION                     equ 0002h
PIR2_V2UVIF_SIZE                         equ 0001h
PIR2_V2UVIF_LENGTH                       equ 0001h
PIR2_V2UVIF_MASK                         equ 0004h
PIR2_V2OVIF_POSN                         equ 0003h
PIR2_V2OVIF_POSITION                     equ 0003h
PIR2_V2OVIF_SIZE                         equ 0001h
PIR2_V2OVIF_LENGTH                       equ 0001h
PIR2_V2OVIF_MASK                         equ 0008h
PIR2_LDIF_POSN                           equ 0004h
PIR2_LDIF_POSITION                       equ 0004h
PIR2_LDIF_SIZE                           equ 0001h
PIR2_LDIF_LENGTH                         equ 0001h
PIR2_LDIF_MASK                           equ 0010h
PIR2_BTUVIF_POSN                         equ 0005h
PIR2_BTUVIF_POSITION                     equ 0005h
PIR2_BTUVIF_SIZE                         equ 0001h
PIR2_BTUVIF_LENGTH                       equ 0001h
PIR2_BTUVIF_MASK                         equ 0020h
PIR2_OCIF_POSN                           equ 0006h
PIR2_OCIF_POSITION                       equ 0006h
PIR2_OCIF_SIZE                           equ 0001h
PIR2_OCIF_LENGTH                         equ 0001h
PIR2_OCIF_MASK                           equ 0040h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0009h
// bitfield definitions
PIR3_TXIF_POSN                           equ 0000h
PIR3_TXIF_POSITION                       equ 0000h
PIR3_TXIF_SIZE                           equ 0001h
PIR3_TXIF_LENGTH                         equ 0001h
PIR3_TXIF_MASK                           equ 0001h
PIR3_RCIF_POSN                           equ 0001h
PIR3_RCIF_POSITION                       equ 0001h
PIR3_RCIF_SIZE                           equ 0001h
PIR3_RCIF_LENGTH                         equ 0001h
PIR3_RCIF_MASK                           equ 0002h
PIR3_CC1IF_POSN                          equ 0002h
PIR3_CC1IF_POSITION                      equ 0002h
PIR3_CC1IF_SIZE                          equ 0001h
PIR3_CC1IF_LENGTH                        equ 0001h
PIR3_CC1IF_MASK                          equ 0004h
PIR3_CC2IF_POSN                          equ 0003h
PIR3_CC2IF_POSITION                      equ 0003h
PIR3_CC2IF_SIZE                          equ 0001h
PIR3_CC2IF_LENGTH                        equ 0001h
PIR3_CC2IF_MASK                          equ 0008h
PIR3_SSIF_POSN                           equ 0004h
PIR3_SSIF_POSITION                       equ 0004h
PIR3_SSIF_SIZE                           equ 0001h
PIR3_SSIF_LENGTH                         equ 0001h
PIR3_SSIF_MASK                           equ 0010h
PIR3_VINUVIF_POSN                        equ 0005h
PIR3_VINUVIF_POSITION                    equ 0005h
PIR3_VINUVIF_SIZE                        equ 0001h
PIR3_VINUVIF_LENGTH                      equ 0001h
PIR3_VINUVIF_MASK                        equ 0020h
PIR3_VDDUIF_POSN                         equ 0006h
PIR3_VDDUIF_POSITION                     equ 0006h
PIR3_VDDUIF_SIZE                         equ 0001h
PIR3_VDDUIF_LENGTH                       equ 0001h
PIR3_VDDUIF_MASK                         equ 0040h
PIR3_DRVUVIF_POSN                        equ 0007h
PIR3_DRVUVIF_POSITION                    equ 0007h
PIR3_DRVUVIF_SIZE                        equ 0001h
PIR3_DRVUVIF_LENGTH                      equ 0001h
PIR3_DRVUVIF_MASK                        equ 0080h

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

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 000Eh
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
T1GCON_T1GO_DONE_POSN                    equ 0003h
T1GCON_T1GO_DONE_POSITION                equ 0003h
T1GCON_T1GO_DONE_SIZE                    equ 0001h
T1GCON_T1GO_DONE_LENGTH                  equ 0001h
T1GCON_T1GO_DONE_MASK                    equ 0008h
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

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 000Fh

// Register: PR2
#define PR2 PR2
PR2                                      equ 0010h
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh

// Register: TMR4
#define TMR4 TMR4
TMR4                                     equ 0011h
// bitfield definitions
TMR4_TMR4_POSN                           equ 0000h
TMR4_TMR4_POSITION                       equ 0000h
TMR4_TMR4_SIZE                           equ 0008h
TMR4_TMR4_LENGTH                         equ 0008h
TMR4_TMR4_MASK                           equ 00FFh

// Register: PR4
#define PR4 PR4
PR4                                      equ 0012h
// bitfield definitions
PR4_PR4_POSN                             equ 0000h
PR4_PR4_POSITION                         equ 0000h
PR4_PR4_SIZE                             equ 0008h
PR4_PR4_LENGTH                           equ 0008h
PR4_PR4_MASK                             equ 00FFh

// Register: TCON
#define TCON TCON
TCON                                     equ 0013h
// bitfield definitions
TCON_TMR1ON_POSN                         equ 0000h
TCON_TMR1ON_POSITION                     equ 0000h
TCON_TMR1ON_SIZE                         equ 0001h
TCON_TMR1ON_LENGTH                       equ 0001h
TCON_TMR1ON_MASK                         equ 0001h
TCON_TMR2ON_POSN                         equ 0001h
TCON_TMR2ON_POSITION                     equ 0001h
TCON_TMR2ON_SIZE                         equ 0001h
TCON_TMR2ON_LENGTH                       equ 0001h
TCON_TMR2ON_MASK                         equ 0002h
TCON_TMR4ON_POSN                         equ 0002h
TCON_TMR4ON_POSITION                     equ 0002h
TCON_TMR4ON_SIZE                         equ 0001h
TCON_TMR4ON_LENGTH                       equ 0001h
TCON_TMR4ON_MASK                         equ 0004h
TCON_TMR1CS_POSN                         equ 0003h
TCON_TMR1CS_POSITION                     equ 0003h
TCON_TMR1CS_SIZE                         equ 0001h
TCON_TMR1CS_LENGTH                       equ 0001h
TCON_TMR1CS_MASK                         equ 0008h
TCON_T1CKPS0_POSN                        equ 0004h
TCON_T1CKPS0_POSITION                    equ 0004h
TCON_T1CKPS0_SIZE                        equ 0001h
TCON_T1CKPS0_LENGTH                      equ 0001h
TCON_T1CKPS0_MASK                        equ 0010h
TCON_T1CKPS1_POSN                        equ 0005h
TCON_T1CKPS1_POSITION                    equ 0005h
TCON_T1CKPS1_SIZE                        equ 0001h
TCON_T1CKPS1_LENGTH                      equ 0001h
TCON_T1CKPS1_MASK                        equ 0020h
TCON_T4CKPS0_POSN                        equ 0006h
TCON_T4CKPS0_POSITION                    equ 0006h
TCON_T4CKPS0_SIZE                        equ 0001h
TCON_T4CKPS0_LENGTH                      equ 0001h
TCON_T4CKPS0_MASK                        equ 0040h
TCON_T4CKPS1_POSN                        equ 0007h
TCON_T4CKPS1_POSITION                    equ 0007h
TCON_T4CKPS1_SIZE                        equ 0001h
TCON_T4CKPS1_LENGTH                      equ 0001h
TCON_T4CKPS1_MASK                        equ 0080h
TCON_T1CKPS_POSN                         equ 0004h
TCON_T1CKPS_POSITION                     equ 0004h
TCON_T1CKPS_SIZE                         equ 0002h
TCON_T1CKPS_LENGTH                       equ 0002h
TCON_T1CKPS_MASK                         equ 0030h
TCON_T4CKPS_POSN                         equ 0006h
TCON_T4CKPS_POSITION                     equ 0006h
TCON_T4CKPS_SIZE                         equ 0002h
TCON_T4CKPS_LENGTH                       equ 0002h
TCON_T4CKPS_MASK                         equ 00C0h

// Register: PCON
#define PCON PCON
PCON                                     equ 0014h
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
PCON_LDO_LP_POSN                         equ 0004h
PCON_LDO_LP_POSITION                     equ 0004h
PCON_LDO_LP_SIZE                         equ 0001h
PCON_LDO_LP_LENGTH                       equ 0001h
PCON_LDO_LP_MASK                         equ 0010h
PCON_LDO_LV_POSN                         equ 0005h
PCON_LDO_LV_POSITION                     equ 0005h
PCON_LDO_LV_SIZE                         equ 0001h
PCON_LDO_LV_LENGTH                       equ 0001h
PCON_LDO_LV_MASK                         equ 0020h

// Register: PWM0PH
#define PWM0PH PWM0PH
PWM0PH                                   equ 0015h
// bitfield definitions
PWM0PH_PWM0PH_POSN                       equ 0000h
PWM0PH_PWM0PH_POSITION                   equ 0000h
PWM0PH_PWM0PH_SIZE                       equ 0008h
PWM0PH_PWM0PH_LENGTH                     equ 0008h
PWM0PH_PWM0PH_MASK                       equ 00FFh

// Register: PWM0R
#define PWM0R PWM0R
PWM0R                                    equ 0016h
// bitfield definitions
PWM0R_PWM0R_POSN                         equ 0000h
PWM0R_PWM0R_POSITION                     equ 0000h
PWM0R_PWM0R_SIZE                         equ 0008h
PWM0R_PWM0R_LENGTH                       equ 0008h
PWM0R_PWM0R_MASK                         equ 00FFh

// Register: PWM1R
#define PWM1R PWM1R
PWM1R                                    equ 0017h
// bitfield definitions
PWM1R_PWM1R_POSN                         equ 0000h
PWM1R_PWM1R_POSITION                     equ 0000h
PWM1R_PWM1R_SIZE                         equ 0008h
PWM1R_PWM1R_LENGTH                       equ 0008h
PWM1R_PWM1R_MASK                         equ 00FFh

// Register: PWM2R
#define PWM2R PWM2R
PWM2R                                    equ 0018h
// bitfield definitions
PWM2R_PWM2R_POSN                         equ 0000h
PWM2R_PWM2R_POSITION                     equ 0000h
PWM2R_PWM2R_SIZE                         equ 0008h
PWM2R_PWM2R_LENGTH                       equ 0008h
PWM2R_PWM2R_MASK                         equ 00FFh

// Register: PWM3R
#define PWM3R PWM3R
PWM3R                                    equ 0019h
// bitfield definitions
PWM3R_PWM3R_POSN                         equ 0000h
PWM3R_PWM3R_POSITION                     equ 0000h
PWM3R_PWM3R_SIZE                         equ 0008h
PWM3R_PWM3R_LENGTH                       equ 0008h
PWM3R_PWM3R_MASK                         equ 00FFh

// Register: PWMCON
#define PWMCON PWMCON
PWMCON                                   equ 001Ah
// bitfield definitions
PWMCON_PWM1EN_POSN                       equ 0000h
PWMCON_PWM1EN_POSITION                   equ 0000h
PWMCON_PWM1EN_SIZE                       equ 0001h
PWMCON_PWM1EN_LENGTH                     equ 0001h
PWMCON_PWM1EN_MASK                       equ 0001h
PWMCON_PWM2EN_POSN                       equ 0001h
PWMCON_PWM2EN_POSITION                   equ 0001h
PWMCON_PWM2EN_SIZE                       equ 0001h
PWMCON_PWM2EN_LENGTH                     equ 0001h
PWMCON_PWM2EN_MASK                       equ 0002h
PWMCON_PWM3EN_POSN                       equ 0002h
PWMCON_PWM3EN_POSITION                   equ 0002h
PWMCON_PWM3EN_SIZE                       equ 0001h
PWMCON_PWM3EN_LENGTH                     equ 0001h
PWMCON_PWM3EN_MASK                       equ 0004h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 001Bh
// bitfield definitions
OSCCON_TUN0_POSN                         equ 0000h
OSCCON_TUN0_POSITION                     equ 0000h
OSCCON_TUN0_SIZE                         equ 0001h
OSCCON_TUN0_LENGTH                       equ 0001h
OSCCON_TUN0_MASK                         equ 0001h
OSCCON_TUN1_POSN                         equ 0001h
OSCCON_TUN1_POSITION                     equ 0001h
OSCCON_TUN1_SIZE                         equ 0001h
OSCCON_TUN1_LENGTH                       equ 0001h
OSCCON_TUN1_MASK                         equ 0002h
OSCCON_TUN2_POSN                         equ 0002h
OSCCON_TUN2_POSITION                     equ 0002h
OSCCON_TUN2_SIZE                         equ 0001h
OSCCON_TUN2_LENGTH                       equ 0001h
OSCCON_TUN2_MASK                         equ 0004h
OSCCON_TUN3_POSN                         equ 0003h
OSCCON_TUN3_POSITION                     equ 0003h
OSCCON_TUN3_SIZE                         equ 0001h
OSCCON_TUN3_LENGTH                       equ 0001h
OSCCON_TUN3_MASK                         equ 0008h
OSCCON_TUN4_POSN                         equ 0004h
OSCCON_TUN4_POSITION                     equ 0004h
OSCCON_TUN4_SIZE                         equ 0001h
OSCCON_TUN4_LENGTH                       equ 0001h
OSCCON_TUN4_MASK                         equ 0010h
OSCCON_OSCSEL0_POSN                      equ 0005h
OSCCON_OSCSEL0_POSITION                  equ 0005h
OSCCON_OSCSEL0_SIZE                      equ 0001h
OSCCON_OSCSEL0_LENGTH                    equ 0001h
OSCCON_OSCSEL0_MASK                      equ 0020h
OSCCON_OSCSEL1_POSN                      equ 0006h
OSCCON_OSCSEL1_POSITION                  equ 0006h
OSCCON_OSCSEL1_SIZE                      equ 0001h
OSCCON_OSCSEL1_LENGTH                    equ 0001h
OSCCON_OSCSEL1_MASK                      equ 0040h
OSCCON_OSCSTB_POSN                       equ 0007h
OSCCON_OSCSTB_POSITION                   equ 0007h
OSCCON_OSCSTB_SIZE                       equ 0001h
OSCCON_OSCSTB_LENGTH                     equ 0001h
OSCCON_OSCSTB_MASK                       equ 0080h
OSCCON_TUN_POSN                          equ 0000h
OSCCON_TUN_POSITION                      equ 0000h
OSCCON_TUN_SIZE                          equ 0005h
OSCCON_TUN_LENGTH                        equ 0005h
OSCCON_TUN_MASK                          equ 001Fh
OSCCON_OSCSEL_POSN                       equ 0005h
OSCCON_OSCSEL_POSITION                   equ 0005h
OSCCON_OSCSEL_SIZE                       equ 0002h
OSCCON_OSCSEL_LENGTH                     equ 0002h
OSCCON_OSCSEL_MASK                       equ 0060h

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
ADCON0_CHS_POSN                          equ 0003h
ADCON0_CHS_POSITION                      equ 0003h
ADCON0_CHS_SIZE                          equ 0005h
ADCON0_CHS_LENGTH                        equ 0005h
ADCON0_CHS_MASK                          equ 00F8h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 001Fh
// bitfield definitions
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
ADCON1_ADFM_POSN                         equ 0002h
ADCON1_ADFM_POSITION                     equ 0002h
ADCON1_ADFM_SIZE                         equ 0001h
ADCON1_ADFM_LENGTH                       equ 0001h
ADCON1_ADFM_MASK                         equ 0004h
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
ADCON1_VCFG_POSN                         equ 0000h
ADCON1_VCFG_POSITION                     equ 0000h
ADCON1_VCFG_SIZE                         equ 0002h
ADCON1_VCFG_LENGTH                       equ 0002h
ADCON1_VCFG_MASK                         equ 0003h
ADCON1_ADCS_POSN                         equ 0004h
ADCON1_ADCS_POSITION                     equ 0004h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0070h

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
OPTION_REG_nRAPU_POSN                    equ 0007h
OPTION_REG_nRAPU_POSITION                equ 0007h
OPTION_REG_nRAPU_SIZE                    equ 0001h
OPTION_REG_nRAPU_LENGTH                  equ 0001h
OPTION_REG_nRAPU_MASK                    equ 0080h
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
PIE1_TMR4IE_POSN                         equ 0002h
PIE1_TMR4IE_POSITION                     equ 0002h
PIE1_TMR4IE_SIZE                         equ 0001h
PIE1_TMR4IE_LENGTH                       equ 0001h
PIE1_TMR4IE_MASK                         equ 0004h
PIE1_TMR1GIE_POSN                        equ 0003h
PIE1_TMR1GIE_POSITION                    equ 0003h
PIE1_TMR1GIE_SIZE                        equ 0001h
PIE1_TMR1GIE_LENGTH                      equ 0001h
PIE1_TMR1GIE_MASK                        equ 0008h
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
PIE1_OTIE_POSN                           equ 0007h
PIE1_OTIE_POSITION                       equ 0007h
PIE1_OTIE_SIZE                           equ 0001h
PIE1_OTIE_LENGTH                         equ 0001h
PIE1_OTIE_MASK                           equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0088h
// bitfield definitions
PIE2_V1UVIE_POSN                         equ 0000h
PIE2_V1UVIE_POSITION                     equ 0000h
PIE2_V1UVIE_SIZE                         equ 0001h
PIE2_V1UVIE_LENGTH                       equ 0001h
PIE2_V1UVIE_MASK                         equ 0001h
PIE2_V1OVIE_POSN                         equ 0001h
PIE2_V1OVIE_POSITION                     equ 0001h
PIE2_V1OVIE_SIZE                         equ 0001h
PIE2_V1OVIE_LENGTH                       equ 0001h
PIE2_V1OVIE_MASK                         equ 0002h
PIE2_V2UVIE_POSN                         equ 0002h
PIE2_V2UVIE_POSITION                     equ 0002h
PIE2_V2UVIE_SIZE                         equ 0001h
PIE2_V2UVIE_LENGTH                       equ 0001h
PIE2_V2UVIE_MASK                         equ 0004h
PIE2_V2OVIE_POSN                         equ 0003h
PIE2_V2OVIE_POSITION                     equ 0003h
PIE2_V2OVIE_SIZE                         equ 0001h
PIE2_V2OVIE_LENGTH                       equ 0001h
PIE2_V2OVIE_MASK                         equ 0008h
PIE2_LDIE_POSN                           equ 0004h
PIE2_LDIE_POSITION                       equ 0004h
PIE2_LDIE_SIZE                           equ 0001h
PIE2_LDIE_LENGTH                         equ 0001h
PIE2_LDIE_MASK                           equ 0010h
PIE2_BTUVIE_POSN                         equ 0005h
PIE2_BTUVIE_POSITION                     equ 0005h
PIE2_BTUVIE_SIZE                         equ 0001h
PIE2_BTUVIE_LENGTH                       equ 0001h
PIE2_BTUVIE_MASK                         equ 0020h
PIE2_OCIE_POSN                           equ 0006h
PIE2_OCIE_POSITION                       equ 0006h
PIE2_OCIE_SIZE                           equ 0001h
PIE2_OCIE_LENGTH                         equ 0001h
PIE2_OCIE_MASK                           equ 0040h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0089h
// bitfield definitions
PIE3_TXIE_POSN                           equ 0000h
PIE3_TXIE_POSITION                       equ 0000h
PIE3_TXIE_SIZE                           equ 0001h
PIE3_TXIE_LENGTH                         equ 0001h
PIE3_TXIE_MASK                           equ 0001h
PIE3_RCIE_POSN                           equ 0001h
PIE3_RCIE_POSITION                       equ 0001h
PIE3_RCIE_SIZE                           equ 0001h
PIE3_RCIE_LENGTH                         equ 0001h
PIE3_RCIE_MASK                           equ 0002h
PIE3_CC1IE_POSN                          equ 0002h
PIE3_CC1IE_POSITION                      equ 0002h
PIE3_CC1IE_SIZE                          equ 0001h
PIE3_CC1IE_LENGTH                        equ 0001h
PIE3_CC1IE_MASK                          equ 0004h
PIE3_CC2IE_POSN                          equ 0003h
PIE3_CC2IE_POSITION                      equ 0003h
PIE3_CC2IE_SIZE                          equ 0001h
PIE3_CC2IE_LENGTH                        equ 0001h
PIE3_CC2IE_MASK                          equ 0008h
PIE3_SSIE_POSN                           equ 0004h
PIE3_SSIE_POSITION                       equ 0004h
PIE3_SSIE_SIZE                           equ 0001h
PIE3_SSIE_LENGTH                         equ 0001h
PIE3_SSIE_MASK                           equ 0010h
PIE3_VINUVIE_POSN                        equ 0005h
PIE3_VINUVIE_POSITION                    equ 0005h
PIE3_VINUVIE_SIZE                        equ 0001h
PIE3_VINUVIE_LENGTH                      equ 0001h
PIE3_VINUVIE_MASK                        equ 0020h
PIE3_VDDUVIE_POSN                        equ 0006h
PIE3_VDDUVIE_POSITION                    equ 0006h
PIE3_VDDUVIE_SIZE                        equ 0001h
PIE3_VDDUVIE_LENGTH                      equ 0001h
PIE3_VDDUVIE_MASK                        equ 0040h
PIE3_DRUVIE_POSN                         equ 0007h
PIE3_DRUVIE_POSITION                     equ 0007h
PIE3_DRUVIE_SIZE                         equ 0001h
PIE3_DRUVIE_LENGTH                       equ 0001h
PIE3_DRUVIE_MASK                         equ 0080h

// Register: INTEDGE1
#define INTEDGE1 INTEDGE1
INTEDGE1                                 equ 008Ch
// bitfield definitions
INTEDGE1_VINUVINTN_POSN                  equ 0000h
INTEDGE1_VINUVINTN_POSITION              equ 0000h
INTEDGE1_VINUVINTN_SIZE                  equ 0001h
INTEDGE1_VINUVINTN_LENGTH                equ 0001h
INTEDGE1_VINUVINTN_MASK                  equ 0001h
INTEDGE1_VINUVINTP_POSN                  equ 0001h
INTEDGE1_VINUVINTP_POSITION              equ 0001h
INTEDGE1_VINUVINTP_SIZE                  equ 0001h
INTEDGE1_VINUVINTP_LENGTH                equ 0001h
INTEDGE1_VINUVINTP_MASK                  equ 0002h
INTEDGE1_LDINTN_POSN                     equ 0002h
INTEDGE1_LDINTN_POSITION                 equ 0002h
INTEDGE1_LDINTN_SIZE                     equ 0001h
INTEDGE1_LDINTN_LENGTH                   equ 0001h
INTEDGE1_LDINTN_MASK                     equ 0004h
INTEDGE1_LDINTP_POSN                     equ 0003h
INTEDGE1_LDINTP_POSITION                 equ 0003h
INTEDGE1_LDINTP_SIZE                     equ 0001h
INTEDGE1_LDINTP_LENGTH                   equ 0001h
INTEDGE1_LDINTP_MASK                     equ 0008h
INTEDGE1_DRUVINTN_POSN                   equ 0004h
INTEDGE1_DRUVINTN_POSITION               equ 0004h
INTEDGE1_DRUVINTN_SIZE                   equ 0001h
INTEDGE1_DRUVINTN_LENGTH                 equ 0001h
INTEDGE1_DRUVINTN_MASK                   equ 0010h
INTEDGE1_DRUVINTP_POSN                   equ 0005h
INTEDGE1_DRUVINTP_POSITION               equ 0005h
INTEDGE1_DRUVINTP_SIZE                   equ 0001h
INTEDGE1_DRUVINTP_LENGTH                 equ 0001h
INTEDGE1_DRUVINTP_MASK                   equ 0020h

// Register: INTEDGE2
#define INTEDGE2 INTEDGE2
INTEDGE2                                 equ 008Dh
// bitfield definitions
INTEDGE2_V1UVINTN_POSN                   equ 0000h
INTEDGE2_V1UVINTN_POSITION               equ 0000h
INTEDGE2_V1UVINTN_SIZE                   equ 0001h
INTEDGE2_V1UVINTN_LENGTH                 equ 0001h
INTEDGE2_V1UVINTN_MASK                   equ 0001h
INTEDGE2_V1UVINTP_POSN                   equ 0001h
INTEDGE2_V1UVINTP_POSITION               equ 0001h
INTEDGE2_V1UVINTP_SIZE                   equ 0001h
INTEDGE2_V1UVINTP_LENGTH                 equ 0001h
INTEDGE2_V1UVINTP_MASK                   equ 0002h
INTEDGE2_V1OVINTN_POSN                   equ 0002h
INTEDGE2_V1OVINTN_POSITION               equ 0002h
INTEDGE2_V1OVINTN_SIZE                   equ 0001h
INTEDGE2_V1OVINTN_LENGTH                 equ 0001h
INTEDGE2_V1OVINTN_MASK                   equ 0004h
INTEDGE2_V1OVINTP_POSN                   equ 0003h
INTEDGE2_V1OVINTP_POSITION               equ 0003h
INTEDGE2_V1OVINTP_SIZE                   equ 0001h
INTEDGE2_V1OVINTP_LENGTH                 equ 0001h
INTEDGE2_V1OVINTP_MASK                   equ 0008h
INTEDGE2_V2UVINTN_POSN                   equ 0004h
INTEDGE2_V2UVINTN_POSITION               equ 0004h
INTEDGE2_V2UVINTN_SIZE                   equ 0001h
INTEDGE2_V2UVINTN_LENGTH                 equ 0001h
INTEDGE2_V2UVINTN_MASK                   equ 0010h
INTEDGE2_V2UVINTP_POSN                   equ 0005h
INTEDGE2_V2UVINTP_POSITION               equ 0005h
INTEDGE2_V2UVINTP_SIZE                   equ 0001h
INTEDGE2_V2UVINTP_LENGTH                 equ 0001h
INTEDGE2_V2UVINTP_MASK                   equ 0020h
INTEDGE2_V2OVINTN_POSN                   equ 0006h
INTEDGE2_V2OVINTN_POSITION               equ 0006h
INTEDGE2_V2OVINTN_SIZE                   equ 0001h
INTEDGE2_V2OVINTN_LENGTH                 equ 0001h
INTEDGE2_V2OVINTN_MASK                   equ 0040h
INTEDGE2_V2OVINTP_POSN                   equ 0007h
INTEDGE2_V2OVINTP_POSITION               equ 0007h
INTEDGE2_V2OVINTP_SIZE                   equ 0001h
INTEDGE2_V2OVINTP_LENGTH                 equ 0001h
INTEDGE2_V2OVINTP_MASK                   equ 0080h

// Register: MODECON1
#define MODECON1 MODECON1
MODECON1                                 equ 008Eh
// bitfield definitions
MODECON1_PDIR_POSN                       equ 0000h
MODECON1_PDIR_POSITION                   equ 0000h
MODECON1_PDIR_SIZE                       equ 0001h
MODECON1_PDIR_LENGTH                     equ 0001h
MODECON1_PDIR_MASK                       equ 0001h
MODECON1_CCLAMP_POSN                     equ 0001h
MODECON1_CCLAMP_POSITION                 equ 0001h
MODECON1_CCLAMP_SIZE                     equ 0001h
MODECON1_CCLAMP_LENGTH                   equ 0001h
MODECON1_CCLAMP_MASK                     equ 0002h
MODECON1_TOPO0_POSN                      equ 0002h
MODECON1_TOPO0_POSITION                  equ 0002h
MODECON1_TOPO0_SIZE                      equ 0001h
MODECON1_TOPO0_LENGTH                    equ 0001h
MODECON1_TOPO0_MASK                      equ 0004h
MODECON1_TOPO1_POSN                      equ 0003h
MODECON1_TOPO1_POSITION                  equ 0003h
MODECON1_TOPO1_SIZE                      equ 0001h
MODECON1_TOPO1_LENGTH                    equ 0001h
MODECON1_TOPO1_MASK                      equ 0008h
MODECON1_MSSYNC_POSN                     equ 0004h
MODECON1_MSSYNC_POSITION                 equ 0004h
MODECON1_MSSYNC_SIZE                     equ 0001h
MODECON1_MSSYNC_LENGTH                   equ 0001h
MODECON1_MSSYNC_MASK                     equ 0010h
MODECON1_MSCLK_POSN                      equ 0005h
MODECON1_MSCLK_POSITION                  equ 0005h
MODECON1_MSCLK_SIZE                      equ 0001h
MODECON1_MSCLK_LENGTH                    equ 0001h
MODECON1_MSCLK_MASK                      equ 0020h
MODECON1_MSSEL_POSN                      equ 0006h
MODECON1_MSSEL_POSITION                  equ 0006h
MODECON1_MSSEL_SIZE                      equ 0001h
MODECON1_MSSEL_LENGTH                    equ 0001h
MODECON1_MSSEL_MASK                      equ 0040h
MODECON1_BYPASS_POSN                     equ 0007h
MODECON1_BYPASS_POSITION                 equ 0007h
MODECON1_BYPASS_SIZE                     equ 0001h
MODECON1_BYPASS_LENGTH                   equ 0001h
MODECON1_BYPASS_MASK                     equ 0080h
MODECON1_TOPO_POSN                       equ 0002h
MODECON1_TOPO_POSITION                   equ 0002h
MODECON1_TOPO_SIZE                       equ 0002h
MODECON1_TOPO_LENGTH                     equ 0002h
MODECON1_TOPO_MASK                       equ 000Ch

// Register: MODECON2
#define MODECON2 MODECON2
MODECON2                                 equ 008Fh
// bitfield definitions
MODECON2_VBBR_POSN                       equ 0000h
MODECON2_VBBR_POSITION                   equ 0000h
MODECON2_VBBR_SIZE                       equ 0005h
MODECON2_VBBR_LENGTH                     equ 0005h
MODECON2_VBBR_MASK                       equ 001Fh
MODECON2_BBRO_POSN                       equ 0005h
MODECON2_BBRO_POSITION                   equ 0005h
MODECON2_BBRO_SIZE                       equ 0001h
MODECON2_BBRO_LENGTH                     equ 0001h
MODECON2_BBRO_MASK                       equ 0020h
MODECON2_BUKDMBY_POSN                    equ 0006h
MODECON2_BUKDMBY_POSITION                equ 0006h
MODECON2_BUKDMBY_SIZE                    equ 0001h
MODECON2_BUKDMBY_LENGTH                  equ 0001h
MODECON2_BUKDMBY_MASK                    equ 0040h
MODECON2_SKIP_POSN                       equ 0007h
MODECON2_SKIP_POSITION                   equ 0007h
MODECON2_SKIP_SIZE                       equ 0001h
MODECON2_SKIP_LENGTH                     equ 0001h
MODECON2_SKIP_MASK                       equ 0080h

// Register: EACON
#define EACON EACON
EACON                                    equ 0090h
// bitfield definitions
EACON_I1EAF_POSN                         equ 0000h
EACON_I1EAF_POSITION                     equ 0000h
EACON_I1EAF_SIZE                         equ 0001h
EACON_I1EAF_LENGTH                       equ 0001h
EACON_I1EAF_MASK                         equ 0001h
EACON_I1EAR_POSN                         equ 0001h
EACON_I1EAR_POSITION                     equ 0001h
EACON_I1EAR_SIZE                         equ 0001h
EACON_I1EAR_LENGTH                       equ 0001h
EACON_I1EAR_MASK                         equ 0002h
EACON_I2EAF_POSN                         equ 0002h
EACON_I2EAF_POSITION                     equ 0002h
EACON_I2EAF_SIZE                         equ 0001h
EACON_I2EAF_LENGTH                       equ 0001h
EACON_I2EAF_MASK                         equ 0004h
EACON_I2EAR_POSN                         equ 0003h
EACON_I2EAR_POSITION                     equ 0003h
EACON_I2EAR_SIZE                         equ 0001h
EACON_I2EAR_LENGTH                       equ 0001h
EACON_I2EAR_MASK                         equ 0008h
EACON_V1EAF_POSN                         equ 0004h
EACON_V1EAF_POSITION                     equ 0004h
EACON_V1EAF_SIZE                         equ 0001h
EACON_V1EAF_LENGTH                       equ 0001h
EACON_V1EAF_MASK                         equ 0010h
EACON_V1EAR_POSN                         equ 0005h
EACON_V1EAR_POSITION                     equ 0005h
EACON_V1EAR_SIZE                         equ 0001h
EACON_V1EAR_LENGTH                       equ 0001h
EACON_V1EAR_MASK                         equ 0020h
EACON_V2EAF_POSN                         equ 0006h
EACON_V2EAF_POSITION                     equ 0006h
EACON_V2EAF_SIZE                         equ 0001h
EACON_V2EAF_LENGTH                       equ 0001h
EACON_V2EAF_MASK                         equ 0040h
EACON_V2EAR_POSN                         equ 0007h
EACON_V2EAR_POSITION                     equ 0007h
EACON_V2EAR_SIZE                         equ 0001h
EACON_V2EAR_LENGTH                       equ 0001h
EACON_V2EAR_MASK                         equ 0080h

// Register: SENSECON
#define SENSECON SENSECON
SENSECON                                 equ 0091h
// bitfield definitions
SENSECON_VS1G_POSN                       equ 0000h
SENSECON_VS1G_POSITION                   equ 0000h
SENSECON_VS1G_SIZE                       equ 0002h
SENSECON_VS1G_LENGTH                     equ 0002h
SENSECON_VS1G_MASK                       equ 0003h
SENSECON_VS2G_POSN                       equ 0002h
SENSECON_VS2G_POSITION                   equ 0002h
SENSECON_VS2G_SIZE                       equ 0002h
SENSECON_VS2G_LENGTH                     equ 0002h
SENSECON_VS2G_MASK                       equ 000Ch

// Register: DEADCON1
#define DEADCON1 DEADCON1
DEADCON1                                 equ 0092h
// bitfield definitions
DEADCON1_LDLY1_POSN                      equ 0000h
DEADCON1_LDLY1_POSITION                  equ 0000h
DEADCON1_LDLY1_SIZE                      equ 0004h
DEADCON1_LDLY1_LENGTH                    equ 0004h
DEADCON1_LDLY1_MASK                      equ 000Fh
DEADCON1_HDLY1_POSN                      equ 0004h
DEADCON1_HDLY1_POSITION                  equ 0004h
DEADCON1_HDLY1_SIZE                      equ 0004h
DEADCON1_HDLY1_LENGTH                    equ 0004h
DEADCON1_HDLY1_MASK                      equ 00F0h

// Register: DEADCON2
#define DEADCON2 DEADCON2
DEADCON2                                 equ 0093h
// bitfield definitions
DEADCON2_LDLY2_POSN                      equ 0000h
DEADCON2_LDLY2_POSITION                  equ 0000h
DEADCON2_LDLY2_SIZE                      equ 0004h
DEADCON2_LDLY2_LENGTH                    equ 0004h
DEADCON2_LDLY2_MASK                      equ 000Fh
DEADCON2_HDLY2_POSN                      equ 0004h
DEADCON2_HDLY2_POSITION                  equ 0004h
DEADCON2_HDLY2_SIZE                      equ 0004h
DEADCON2_HDLY2_LENGTH                    equ 0004h
DEADCON2_HDLY2_MASK                      equ 00F0h

// Register: REFCON1
#define REFCON1 REFCON1
REFCON1                                  equ 0094h
// bitfield definitions
REFCON1_I1REFEN_POSN                     equ 0000h
REFCON1_I1REFEN_POSITION                 equ 0000h
REFCON1_I1REFEN_SIZE                     equ 0001h
REFCON1_I1REFEN_LENGTH                   equ 0001h
REFCON1_I1REFEN_MASK                     equ 0001h
REFCON1_I2REFEN_POSN                     equ 0001h
REFCON1_I2REFEN_POSITION                 equ 0001h
REFCON1_I2REFEN_SIZE                     equ 0001h
REFCON1_I2REFEN_LENGTH                   equ 0001h
REFCON1_I2REFEN_MASK                     equ 0002h
REFCON1_V1REFEN_POSN                     equ 0002h
REFCON1_V1REFEN_POSITION                 equ 0002h
REFCON1_V1REFEN_SIZE                     equ 0001h
REFCON1_V1REFEN_LENGTH                   equ 0001h
REFCON1_V1REFEN_MASK                     equ 0004h
REFCON1_V2REFEN_POSN                     equ 0003h
REFCON1_V2REFEN_POSITION                 equ 0003h
REFCON1_V2REFEN_SIZE                     equ 0001h
REFCON1_V2REFEN_LENGTH                   equ 0001h
REFCON1_V2REFEN_MASK                     equ 0008h
REFCON1_V1UVEN_POSN                      equ 0004h
REFCON1_V1UVEN_POSITION                  equ 0004h
REFCON1_V1UVEN_SIZE                      equ 0001h
REFCON1_V1UVEN_LENGTH                    equ 0001h
REFCON1_V1UVEN_MASK                      equ 0010h
REFCON1_V1OVEN_POSN                      equ 0005h
REFCON1_V1OVEN_POSITION                  equ 0005h
REFCON1_V1OVEN_SIZE                      equ 0001h
REFCON1_V1OVEN_LENGTH                    equ 0001h
REFCON1_V1OVEN_MASK                      equ 0020h
REFCON1_V2UVEN_POSN                      equ 0006h
REFCON1_V2UVEN_POSITION                  equ 0006h
REFCON1_V2UVEN_SIZE                      equ 0001h
REFCON1_V2UVEN_LENGTH                    equ 0001h
REFCON1_V2UVEN_MASK                      equ 0040h
REFCON1_V2OVEN_POSN                      equ 0007h
REFCON1_V2OVEN_POSITION                  equ 0007h
REFCON1_V2OVEN_SIZE                      equ 0001h
REFCON1_V2OVEN_LENGTH                    equ 0001h
REFCON1_V2OVEN_MASK                      equ 0080h

// Register: REFCON2
#define REFCON2 REFCON2
REFCON2                                  equ 0095h
// bitfield definitions
REFCON2_LDREF_POSN                       equ 0000h
REFCON2_LDREF_POSITION                   equ 0000h
REFCON2_LDREF_SIZE                       equ 0004h
REFCON2_LDREF_LENGTH                     equ 0004h
REFCON2_LDREF_MASK                       equ 000Fh
REFCON2_VINUVLO_POSN                     equ 0004h
REFCON2_VINUVLO_POSITION                 equ 0004h
REFCON2_VINUVLO_SIZE                     equ 0003h
REFCON2_VINUVLO_LENGTH                   equ 0003h
REFCON2_VINUVLO_MASK                     equ 0070h
REFCON2_VINUVEN_POSN                     equ 0007h
REFCON2_VINUVEN_POSITION                 equ 0007h
REFCON2_VINUVEN_SIZE                     equ 0001h
REFCON2_VINUVEN_LENGTH                   equ 0001h
REFCON2_VINUVEN_MASK                     equ 0080h

// Register: REFCON3
#define REFCON3 REFCON3
REFCON3                                  equ 0096h
// bitfield definitions
REFCON3_V1UVREF_POSN                     equ 0000h
REFCON3_V1UVREF_POSITION                 equ 0000h
REFCON3_V1UVREF_SIZE                     equ 0004h
REFCON3_V1UVREF_LENGTH                   equ 0004h
REFCON3_V1UVREF_MASK                     equ 000Fh
REFCON3_V1OVREF_POSN                     equ 0004h
REFCON3_V1OVREF_POSITION                 equ 0004h
REFCON3_V1OVREF_SIZE                     equ 0004h
REFCON3_V1OVREF_LENGTH                   equ 0004h
REFCON3_V1OVREF_MASK                     equ 00F0h

// Register: REFCON4
#define REFCON4 REFCON4
REFCON4                                  equ 0097h
// bitfield definitions
REFCON4_V2UVREF_POSN                     equ 0000h
REFCON4_V2UVREF_POSITION                 equ 0000h
REFCON4_V2UVREF_SIZE                     equ 0004h
REFCON4_V2UVREF_LENGTH                   equ 0004h
REFCON4_V2UVREF_MASK                     equ 000Fh
REFCON4_V2OVREF_POSN                     equ 0004h
REFCON4_V2OVREF_POSITION                 equ 0004h
REFCON4_V2OVREF_SIZE                     equ 0004h
REFCON4_V2OVREF_LENGTH                   equ 0004h
REFCON4_V2OVREF_MASK                     equ 00F0h

// Register: V1REF
#define V1REF V1REF
V1REF                                    equ 0098h
// bitfield definitions
V1REF_V1REF_POSN                         equ 0000h
V1REF_V1REF_POSITION                     equ 0000h
V1REF_V1REF_SIZE                         equ 0008h
V1REF_V1REF_LENGTH                       equ 0008h
V1REF_V1REF_MASK                         equ 00FFh

// Register: V2REF
#define V2REF V2REF
V2REF                                    equ 0099h
// bitfield definitions
V2REF_V2REF_POSN                         equ 0000h
V2REF_V2REF_POSITION                     equ 0000h
V2REF_V2REF_SIZE                         equ 0008h
V2REF_V2REF_LENGTH                       equ 0008h
V2REF_V2REF_MASK                         equ 00FFh

// Register: I1REF
#define I1REF I1REF
I1REF                                    equ 009Ah
// bitfield definitions
I1REF_I1REF_POSN                         equ 0000h
I1REF_I1REF_POSITION                     equ 0000h
I1REF_I1REF_SIZE                         equ 0008h
I1REF_I1REF_LENGTH                       equ 0008h
I1REF_I1REF_MASK                         equ 00FFh

// Register: I2REF
#define I2REF I2REF
I2REF                                    equ 009Bh
// bitfield definitions
I2REF_I2REF_POSN                         equ 0000h
I2REF_I2REF_POSITION                     equ 0000h
I2REF_I2REF_SIZE                         equ 0008h
I2REF_I2REF_LENGTH                       equ 0008h
I2REF_I2REF_MASK                         equ 00FFh

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

// Register: SSCON
#define SSCON SSCON
SSCON                                    equ 009Dh
// bitfield definitions
SSCON_SSPR_POSN                          equ 0000h
SSCON_SSPR_POSITION                      equ 0000h
SSCON_SSPR_SIZE                          equ 0005h
SSCON_SSPR_LENGTH                        equ 0005h
SSCON_SSPR_MASK                          equ 001Fh
SSCON_SSCLK_POSN                         equ 0005h
SSCON_SSCLK_POSITION                     equ 0005h
SSCON_SSCLK_SIZE                         equ 0002h
SSCON_SSCLK_LENGTH                       equ 0002h
SSCON_SSCLK_MASK                         equ 0060h
SSCON_SSEN_POSN                          equ 0007h
SSCON_SSEN_POSITION                      equ 0007h
SSCON_SSEN_SIZE                          equ 0001h
SSCON_SSEN_LENGTH                        equ 0001h
SSCON_SSEN_MASK                          equ 0080h

// Register: ABECON
#define ABECON ABECON
ABECON                                   equ 009Eh
// bitfield definitions
ABECON_LD1EN_POSN                        equ 0000h
ABECON_LD1EN_POSITION                    equ 0000h
ABECON_LD1EN_SIZE                        equ 0001h
ABECON_LD1EN_LENGTH                      equ 0001h
ABECON_LD1EN_MASK                        equ 0001h
ABECON_HD1EN_POSN                        equ 0001h
ABECON_HD1EN_POSITION                    equ 0001h
ABECON_HD1EN_SIZE                        equ 0001h
ABECON_HD1EN_LENGTH                      equ 0001h
ABECON_HD1EN_MASK                        equ 0002h
ABECON_LD2EN_POSN                        equ 0002h
ABECON_LD2EN_POSITION                    equ 0002h
ABECON_LD2EN_SIZE                        equ 0001h
ABECON_LD2EN_LENGTH                      equ 0001h
ABECON_LD2EN_MASK                        equ 0004h
ABECON_HD2EN_POSN                        equ 0003h
ABECON_HD2EN_POSITION                    equ 0003h
ABECON_HD2EN_SIZE                        equ 0001h
ABECON_HD2EN_LENGTH                      equ 0001h
ABECON_HD2EN_MASK                        equ 0008h
ABECON_DEL1EN_POSN                       equ 0004h
ABECON_DEL1EN_POSITION                   equ 0004h
ABECON_DEL1EN_SIZE                       equ 0001h
ABECON_DEL1EN_LENGTH                     equ 0001h
ABECON_DEL1EN_MASK                       equ 0010h
ABECON_DEH1EN_POSN                       equ 0005h
ABECON_DEH1EN_POSITION                   equ 0005h
ABECON_DEH1EN_SIZE                       equ 0001h
ABECON_DEH1EN_LENGTH                     equ 0001h
ABECON_DEH1EN_MASK                       equ 0020h
ABECON_DEL2EN_POSN                       equ 0006h
ABECON_DEL2EN_POSITION                   equ 0006h
ABECON_DEL2EN_SIZE                       equ 0001h
ABECON_DEL2EN_LENGTH                     equ 0001h
ABECON_DEL2EN_MASK                       equ 0040h
ABECON_DEH2EN_POSN                       equ 0007h
ABECON_DEH2EN_POSITION                   equ 0007h
ABECON_DEH2EN_SIZE                       equ 0001h
ABECON_DEH2EN_LENGTH                     equ 0001h
ABECON_DEH2EN_MASK                       equ 0080h

// Register: OVCON
#define OVCON OVCON
OVCON                                    equ 009Fh
// bitfield definitions
OVCON_OVCL1EN_POSN                       equ 0000h
OVCON_OVCL1EN_POSITION                   equ 0000h
OVCON_OVCL1EN_SIZE                       equ 0002h
OVCON_OVCL1EN_LENGTH                     equ 0002h
OVCON_OVCL1EN_MASK                       equ 0003h
OVCON_OVCH1EN_POSN                       equ 0002h
OVCON_OVCH1EN_POSITION                   equ 0002h
OVCON_OVCH1EN_SIZE                       equ 0002h
OVCON_OVCH1EN_LENGTH                     equ 0002h
OVCON_OVCH1EN_MASK                       equ 000Ch
OVCON_OVCL2EN_POSN                       equ 0004h
OVCON_OVCL2EN_POSITION                   equ 0004h
OVCON_OVCL2EN_SIZE                       equ 0002h
OVCON_OVCL2EN_LENGTH                     equ 0002h
OVCON_OVCL2EN_MASK                       equ 0030h
OVCON_OVCH2EN_POSN                       equ 0006h
OVCON_OVCH2EN_POSITION                   equ 0006h
OVCON_OVCH2EN_SIZE                       equ 0002h
OVCON_OVCH2EN_LENGTH                     equ 0002h
OVCON_OVCH2EN_MASK                       equ 00C0h

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
WPUGPA_WPUA6_POSN                        equ 0006h
WPUGPA_WPUA6_POSITION                    equ 0006h
WPUGPA_WPUA6_SIZE                        equ 0001h
WPUGPA_WPUA6_LENGTH                      equ 0001h
WPUGPA_WPUA6_MASK                        equ 0040h

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

// Register: BAUDCON
#define BAUDCON BAUDCON
BAUDCON                                  equ 0107h
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

// Register: SPBRGL
#define SPBRGL SPBRGL
SPBRGL                                   equ 0108h
// bitfield definitions
SPBRGL_SPBRGL_POSN                       equ 0000h
SPBRGL_SPBRGL_POSITION                   equ 0000h
SPBRGL_SPBRGL_SIZE                       equ 0008h
SPBRGL_SPBRGL_LENGTH                     equ 0008h
SPBRGL_SPBRGL_MASK                       equ 00FFh

// Register: SPBRGH
#define SPBRGH SPBRGH
SPBRGH                                   equ 0109h
// bitfield definitions
SPBRGH_SPBRGH_POSN                       equ 0000h
SPBRGH_SPBRGH_POSITION                   equ 0000h
SPBRGH_SPBRGH_SIZE                       equ 0008h
SPBRGH_SPBRGH_LENGTH                     equ 0008h
SPBRGH_SPBRGH_MASK                       equ 00FFh

// Register: RCREG
#define RCREG RCREG
RCREG                                    equ 010Ch
// bitfield definitions
RCREG_USART_RCDAT_POSN                   equ 0000h
RCREG_USART_RCDAT_POSITION               equ 0000h
RCREG_USART_RCDAT_SIZE                   equ 0008h
RCREG_USART_RCDAT_LENGTH                 equ 0008h
RCREG_USART_RCDAT_MASK                   equ 00FFh

// Register: TXREG
#define TXREG TXREG
TXREG                                    equ 010Dh
// bitfield definitions
TXREG_USART_TXDAT_POSN                   equ 0000h
TXREG_USART_TXDAT_POSITION               equ 0000h
TXREG_USART_TXDAT_SIZE                   equ 0008h
TXREG_USART_TXDAT_LENGTH                 equ 0008h
TXREG_USART_TXDAT_MASK                   equ 00FFh

// Register: TXSTA
#define TXSTA TXSTA
TXSTA                                    equ 010Eh
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

// Register: RCSTA
#define RCSTA RCSTA
RCSTA                                    equ 010Fh
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
SSPCON1_SSPM_SIZE                        equ 0003h
SSPCON1_SSPM_LENGTH                      equ 0003h
SSPCON1_SSPM_MASK                        equ 0007h
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

// Register: CC1RL
#define CC1RL CC1RL
CC1RL                                    equ 0119h
// bitfield definitions
CC1RL_CC1RL_POSN                         equ 0000h
CC1RL_CC1RL_POSITION                     equ 0000h
CC1RL_CC1RL_SIZE                         equ 0008h
CC1RL_CC1RL_LENGTH                       equ 0008h
CC1RL_CC1RL_MASK                         equ 00FFh

// Register: CC1RH
#define CC1RH CC1RH
CC1RH                                    equ 011Ah
// bitfield definitions
CC1RH_CC1RH_POSN                         equ 0000h
CC1RH_CC1RH_POSITION                     equ 0000h
CC1RH_CC1RH_SIZE                         equ 0008h
CC1RH_CC1RH_LENGTH                       equ 0008h
CC1RH_CC1RH_MASK                         equ 00FFh

// Register: CC2RL
#define CC2RL CC2RL
CC2RL                                    equ 011Bh
// bitfield definitions
CC2RL_CC2RL_POSN                         equ 0000h
CC2RL_CC2RL_POSITION                     equ 0000h
CC2RL_CC2RL_SIZE                         equ 0008h
CC2RL_CC2RL_LENGTH                       equ 0008h
CC2RL_CC2RL_MASK                         equ 00FFh

// Register: CC2RH
#define CC2RH CC2RH
CC2RH                                    equ 011Ch
// bitfield definitions
CC2RH_CC2RH_POSN                         equ 0000h
CC2RH_CC2RH_POSITION                     equ 0000h
CC2RH_CC2RH_SIZE                         equ 0008h
CC2RH_CC2RH_LENGTH                       equ 0008h
CC2RH_CC2RH_MASK                         equ 00FFh

// Register: CCDCON
#define CCDCON CCDCON
CCDCON                                   equ 011Dh
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

// Register: ANSEL
#define ANSEL ANSEL
ANSEL                                    equ 0187h
// bitfield definitions
ANSEL_ANSA0_POSN                         equ 0000h
ANSEL_ANSA0_POSITION                     equ 0000h
ANSEL_ANSA0_SIZE                         equ 0001h
ANSEL_ANSA0_LENGTH                       equ 0001h
ANSEL_ANSA0_MASK                         equ 0001h
ANSEL_ANSA1_POSN                         equ 0001h
ANSEL_ANSA1_POSITION                     equ 0001h
ANSEL_ANSA1_SIZE                         equ 0001h
ANSEL_ANSA1_LENGTH                       equ 0001h
ANSEL_ANSA1_MASK                         equ 0002h
ANSEL_ANSA2_POSN                         equ 0002h
ANSEL_ANSA2_POSITION                     equ 0002h
ANSEL_ANSA2_SIZE                         equ 0001h
ANSEL_ANSA2_LENGTH                       equ 0001h
ANSEL_ANSA2_MASK                         equ 0004h
ANSEL_ANSA3_POSN                         equ 0003h
ANSEL_ANSA3_POSITION                     equ 0003h
ANSEL_ANSA3_SIZE                         equ 0001h
ANSEL_ANSA3_LENGTH                       equ 0001h
ANSEL_ANSA3_MASK                         equ 0008h
ANSEL_ANSB3_POSN                         equ 0004h
ANSEL_ANSB3_POSITION                     equ 0004h
ANSEL_ANSB3_SIZE                         equ 0001h
ANSEL_ANSB3_LENGTH                       equ 0001h
ANSEL_ANSB3_MASK                         equ 0010h
ANSEL_ANSB4_POSN                         equ 0005h
ANSEL_ANSB4_POSITION                     equ 0005h
ANSEL_ANSB4_SIZE                         equ 0001h
ANSEL_ANSB4_LENGTH                       equ 0001h
ANSEL_ANSB4_MASK                         equ 0020h
ANSEL_ANSB5_POSN                         equ 0006h
ANSEL_ANSB5_POSITION                     equ 0006h
ANSEL_ANSB5_SIZE                         equ 0001h
ANSEL_ANSB5_LENGTH                       equ 0001h
ANSEL_ANSB5_MASK                         equ 0040h
ANSEL_ANSB6_POSN                         equ 0007h
ANSEL_ANSB6_POSITION                     equ 0007h
ANSEL_ANSB6_SIZE                         equ 0001h
ANSEL_ANSB6_LENGTH                       equ 0001h
ANSEL_ANSB6_MASK                         equ 0080h

// Register: TMUXCON0
#define TMUXCON0 TMUXCON0
TMUXCON0                                 equ 0188h
// bitfield definitions
TMUXCON0_AMUXEN_POSN                     equ 0000h
TMUXCON0_AMUXEN_POSITION                 equ 0000h
TMUXCON0_AMUXEN_SIZE                     equ 0004h
TMUXCON0_AMUXEN_LENGTH                   equ 0004h
TMUXCON0_AMUXEN_MASK                     equ 000Fh
TMUXCON0_TMUXEN_POSN                     equ 0004h
TMUXCON0_TMUXEN_POSITION                 equ 0004h
TMUXCON0_TMUXEN_SIZE                     equ 0003h
TMUXCON0_TMUXEN_LENGTH                   equ 0003h
TMUXCON0_TMUXEN_MASK                     equ 0070h
TMUXCON0_GCTRL_POSN                      equ 0007h
TMUXCON0_GCTRL_POSITION                  equ 0007h
TMUXCON0_GCTRL_SIZE                      equ 0001h
TMUXCON0_GCTRL_LENGTH                    equ 0001h
TMUXCON0_GCTRL_MASK                      equ 0080h

// Register: TMUXCON1
#define TMUXCON1 TMUXCON1
TMUXCON1                                 equ 0189h
// bitfield definitions
TMUXCON1_DMUX_POSN                       equ 0000h
TMUXCON1_DMUX_POSITION                   equ 0000h
TMUXCON1_DMUX_SIZE                       equ 0005h
TMUXCON1_DMUX_LENGTH                     equ 0005h
TMUXCON1_DMUX_MASK                       equ 001Fh
TMUXCON1_DMUX0OUT_POSN                   equ 0005h
TMUXCON1_DMUX0OUT_POSITION               equ 0005h
TMUXCON1_DMUX0OUT_SIZE                   equ 0001h
TMUXCON1_DMUX0OUT_LENGTH                 equ 0001h
TMUXCON1_DMUX0OUT_MASK                   equ 0020h
TMUXCON1_DMUX1OUT_POSN                   equ 0006h
TMUXCON1_DMUX1OUT_POSITION               equ 0006h
TMUXCON1_DMUX1OUT_SIZE                   equ 0001h
TMUXCON1_DMUX1OUT_LENGTH                 equ 0001h
TMUXCON1_DMUX1OUT_MASK                   equ 0040h

// Register: PORTICD
#define PORTICD PORTICD
PORTICD                                  equ 018Ch
// bitfield definitions
PORTICD_DEBUG_PORT_POSN                  equ 0000h
PORTICD_DEBUG_PORT_POSITION              equ 0000h
PORTICD_DEBUG_PORT_SIZE                  equ 0008h
PORTICD_DEBUG_PORT_LENGTH                equ 0008h
PORTICD_DEBUG_PORT_MASK                  equ 00FFh

// Register: TRISICD
#define TRISICD TRISICD
TRISICD                                  equ 018Dh
// bitfield definitions
TRISICD_DEBUG_TRIS_POSN                  equ 0000h
TRISICD_DEBUG_TRIS_POSITION              equ 0000h
TRISICD_DEBUG_TRIS_SIZE                  equ 0008h
TRISICD_DEBUG_TRIS_LENGTH                equ 0008h
TRISICD_DEBUG_TRIS_MASK                  equ 00FFh

// Register: ICKBUG
#define ICKBUG ICKBUG
ICKBUG                                   equ 018Eh
// bitfield definitions
ICKBUG_DEBUG_REGISTER_POSN               equ 0000h
ICKBUG_DEBUG_REGISTER_POSITION           equ 0000h
ICKBUG_DEBUG_REGISTER_SIZE               equ 0008h
ICKBUG_DEBUG_REGISTER_LENGTH             equ 0008h
ICKBUG_DEBUG_REGISTER_MASK               equ 00FFh

// Register: BIGBUG
#define BIGBUG BIGBUG
BIGBUG                                   equ 018Fh
// bitfield definitions
BIGBUG_DEBUG_BREAKPOINT_POSN             equ 0000h
BIGBUG_DEBUG_BREAKPOINT_POSITION         equ 0000h
BIGBUG_DEBUG_BREAKPOINT_SIZE             equ 0008h
BIGBUG_DEBUG_BREAKPOINT_LENGTH           equ 0008h
BIGBUG_DEBUG_BREAKPOINT_MASK             equ 00FFh

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
PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_POSN  equ 0000h
PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_POSITION  equ 0000h
PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_SIZE  equ 0008h
PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_LENGTH  equ 0008h
PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_MASK  equ 00FFh

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 0192h
// bitfield definitions
PMADRL_PMADRL_POSN                       equ 0000h
PMADRL_PMADRL_POSITION                   equ 0000h
PMADRL_PMADRL_SIZE                       equ 0008h
PMADRL_PMADRL_LENGTH                     equ 0008h
PMADRL_PMADRL_MASK                       equ 00FFh

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 0193h
// bitfield definitions
PMADRH_PMADRH_POSN                       equ 0000h
PMADRH_PMADRH_POSITION                   equ 0000h
PMADRH_PMADRH_SIZE                       equ 0005h
PMADRH_PMADRH_LENGTH                     equ 0005h
PMADRH_PMADRH_MASK                       equ 001Fh

// Register: PMADATL
#define PMADATL PMADATL
PMADATL                                  equ 0194h
// bitfield definitions
PMADATL_PMADATL_POSN                     equ 0000h
PMADATL_PMADATL_POSITION                 equ 0000h
PMADATL_PMADATL_SIZE                     equ 0008h
PMADATL_PMADATL_LENGTH                   equ 0008h
PMADATL_PMADATL_MASK                     equ 00FFh

// Register: PMADATH
#define PMADATH PMADATH
PMADATH                                  equ 0195h
// bitfield definitions
PMADATH_PMADATH_POSN                     equ 0000h
PMADATH_PMADATH_POSITION                 equ 0000h
PMADATH_PMADATH_SIZE                     equ 0006h
PMADATH_PMADATH_LENGTH                   equ 0006h
PMADATH_PMADATH_MASK                     equ 003Fh

// Register: CALCON1
#define CALCON1 CALCON1
CALCON1                                  equ 0196h
// bitfield definitions
CALCON1_WR_POSN                          equ 0001h
CALCON1_WR_POSITION                      equ 0001h
CALCON1_WR_SIZE                          equ 0001h
CALCON1_WR_LENGTH                        equ 0001h
CALCON1_WR_MASK                          equ 0002h
CALCON1_WREN_POSN                        equ 0002h
CALCON1_WREN_POSITION                    equ 0002h
CALCON1_WREN_SIZE                        equ 0001h
CALCON1_WREN_LENGTH                      equ 0001h
CALCON1_WREN_MASK                        equ 0004h

// Register: CALCON2
#define CALCON2 CALCON2
CALCON2                                  equ 0197h
// bitfield definitions
CALCON2_CAL_REG_CONTROL_POSN             equ 0000h
CALCON2_CAL_REG_CONTROL_POSITION         equ 0000h
CALCON2_CAL_REG_CONTROL_SIZE             equ 0008h
CALCON2_CAL_REG_CONTROL_LENGTH           equ 0008h
CALCON2_CAL_REG_CONTROL_MASK             equ 00FFh

// Register: CALADR
#define CALADR CALADR
CALADR                                   equ 0198h
// bitfield definitions
CALADR_CALADR_POSN                       equ 0000h
CALADR_CALADR_POSITION                   equ 0000h
CALADR_CALADR_SIZE                       equ 0008h
CALADR_CALADR_LENGTH                     equ 0008h
CALADR_CALADR_MASK                       equ 00FFh

// Register: CALDATWR
#define CALDATWR CALDATWR
CALDATWR                                 equ 0199h
// bitfield definitions
CALDATWR_CALDATWR_POSN                   equ 0000h
CALDATWR_CALDATWR_POSITION               equ 0000h
CALDATWR_CALDATWR_SIZE                   equ 0008h
CALDATWR_CALDATWR_LENGTH                 equ 0008h
CALDATWR_CALDATWR_MASK                   equ 00FFh

// Register: CALDATRD
#define CALDATRD CALDATRD
CALDATRD                                 equ 019Ah
// bitfield definitions
CALDATRD_CALDATRD_POSN                   equ 0000h
CALDATRD_CALDATRD_POSITION               equ 0000h
CALDATRD_CALDATRD_SIZE                   equ 0008h
CALDATRD_CALDATRD_LENGTH                 equ 0008h
CALDATRD_CALDATRD_MASK                   equ 00FFh

// Register: ATSTCON0
#define ATSTCON0 ATSTCON0
ATSTCON0                                 equ 019Bh
// bitfield definitions
ATSTCON0_TMPTBY_POSN                     equ 0000h
ATSTCON0_TMPTBY_POSITION                 equ 0000h
ATSTCON0_TMPTBY_SIZE                     equ 0001h
ATSTCON0_TMPTBY_LENGTH                   equ 0001h
ATSTCON0_TMPTBY_MASK                     equ 0001h
ATSTCON0_DRUVBY_POSN                     equ 0001h
ATSTCON0_DRUVBY_POSITION                 equ 0001h
ATSTCON0_DRUVBY_SIZE                     equ 0001h
ATSTCON0_DRUVBY_LENGTH                   equ 0001h
ATSTCON0_DRUVBY_MASK                     equ 0002h
ATSTCON0_BGCHOP_POSN                     equ 0002h
ATSTCON0_BGCHOP_POSITION                 equ 0002h
ATSTCON0_BGCHOP_SIZE                     equ 0001h
ATSTCON0_BGCHOP_LENGTH                   equ 0001h
ATSTCON0_BGCHOP_MASK                     equ 0004h
ATSTCON0_HSIAHIGHGAIN_POSN               equ 0003h
ATSTCON0_HSIAHIGHGAIN_POSITION           equ 0003h
ATSTCON0_HSIAHIGHGAIN_SIZE               equ 0001h
ATSTCON0_HSIAHIGHGAIN_LENGTH             equ 0001h
ATSTCON0_HSIAHIGHGAIN_MASK               equ 0008h
ATSTCON0_SWFRQOR_POSN                    equ 0004h
ATSTCON0_SWFRQOR_POSITION                equ 0004h
ATSTCON0_SWFRQOR_SIZE                    equ 0001h
ATSTCON0_SWFRQOR_LENGTH                  equ 0001h
ATSTCON0_SWFRQOR_MASK                    equ 0010h
ATSTCON0_TSTOT_POSN                      equ 0005h
ATSTCON0_TSTOT_POSITION                  equ 0005h
ATSTCON0_TSTOT_SIZE                      equ 0001h
ATSTCON0_TSTOT_LENGTH                    equ 0001h
ATSTCON0_TSTOT_MASK                      equ 0020h
ATSTCON0_BRGBY_POSN                      equ 0006h
ATSTCON0_BRGBY_POSITION                  equ 0006h
ATSTCON0_BRGBY_SIZE                      equ 0001h
ATSTCON0_BRGBY_LENGTH                    equ 0001h
ATSTCON0_BRGBY_MASK                      equ 0040h
ATSTCON0_TSTGM_POSN                      equ 0007h
ATSTCON0_TSTGM_POSITION                  equ 0007h
ATSTCON0_TSTGM_SIZE                      equ 0001h
ATSTCON0_TSTGM_LENGTH                    equ 0001h
ATSTCON0_TSTGM_MASK                      equ 0080h

// Register: ATSTCON1
#define ATSTCON1 ATSTCON1
ATSTCON1                                 equ 019Ch
// bitfield definitions
ATSTCON1_LSBIAS_POSN                     equ 0000h
ATSTCON1_LSBIAS_POSITION                 equ 0000h
ATSTCON1_LSBIAS_SIZE                     equ 0002h
ATSTCON1_LSBIAS_LENGTH                   equ 0002h
ATSTCON1_LSBIAS_MASK                     equ 0003h
ATSTCON1_DEADTBY_POSN                    equ 0002h
ATSTCON1_DEADTBY_POSITION                equ 0002h
ATSTCON1_DEADTBY_SIZE                    equ 0001h
ATSTCON1_DEADTBY_LENGTH                  equ 0001h
ATSTCON1_DEADTBY_MASK                    equ 0004h
ATSTCON1_EAGMRANGE_POSN                  equ 0003h
ATSTCON1_EAGMRANGE_POSITION              equ 0003h
ATSTCON1_EAGMRANGE_SIZE                  equ 0002h
ATSTCON1_EAGMRANGE_LENGTH                equ 0002h
ATSTCON1_EAGMRANGE_MASK                  equ 0018h

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
#define ADFM                             BANKMASK(ADCON1), 2
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define AHEN                             BANKMASK(SSPCON3), 1
#define ANSA0                            BANKMASK(ANSEL), 0
#define ANSA1                            BANKMASK(ANSEL), 1
#define ANSA2                            BANKMASK(ANSEL), 2
#define ANSA3                            BANKMASK(ANSEL), 3
#define ANSB3                            BANKMASK(ANSEL), 4
#define ANSB4                            BANKMASK(ANSEL), 5
#define ANSB5                            BANKMASK(ANSEL), 6
#define ANSB6                            BANKMASK(ANSEL), 7
#define BBRO                             BANKMASK(MODECON2), 5
#define BCLIE                            BANKMASK(PIE1), 5
#define BCLIF                            BANKMASK(PIR1), 5
#define BF                               BANKMASK(SSPSTAT), 0
#define BGCHOP                           BANKMASK(ATSTCON0), 2
#define BOEN                             BANKMASK(SSPCON3), 4
#define BRG16                            BANKMASK(BAUDCON), 3
#define BRGBY                            BANKMASK(ATSTCON0), 6
#define BRGH                             BANKMASK(TXSTA), 2
#define BTUVIE                           BANKMASK(PIE2), 5
#define BTUVIF                           BANKMASK(PIR2), 5
#define BUKDMBY                          BANKMASK(MODECON2), 6
#define BYPASS                           BANKMASK(MODECON1), 7
#define CALSEL                           BANKMASK(PMCON1), 6
#define CC1IE                            BANKMASK(PIE3), 2
#define CC1IF                            BANKMASK(PIR3), 2
#define CC2IE                            BANKMASK(PIE3), 3
#define CC2IF                            BANKMASK(PIR3), 3
#define CCLAMP                           BANKMASK(MODECON1), 1
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CHS5                             BANKMASK(ADCON0), 7
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON1), 4
#define CREN                             BANKMASK(RCSTA), 4
#define CSRC                             BANKMASK(TXSTA), 7
#define DC                               BANKMASK(STATUS), 1
#define DEADTBY                          BANKMASK(ATSTCON1), 2
#define DEH1EN                           BANKMASK(ABECON), 5
#define DEH2EN                           BANKMASK(ABECON), 7
#define DEL1EN                           BANKMASK(ABECON), 4
#define DEL2EN                           BANKMASK(ABECON), 6
#define DHEN                             BANKMASK(SSPCON3), 0
#define DMUX0OUT                         BANKMASK(TMUXCON1), 5
#define DMUX1OUT                         BANKMASK(TMUXCON1), 6
#define DRUVBY                           BANKMASK(ATSTCON0), 1
#define DRUVIE                           BANKMASK(PIE3), 7
#define DRUVINTN                         BANKMASK(INTEDGE1), 4
#define DRUVINTP                         BANKMASK(INTEDGE1), 5
#define DRVUVIF                          BANKMASK(PIR3), 7
#define D_nA                             BANKMASK(SSPSTAT), 5
#define FERR                             BANKMASK(RCSTA), 2
#define GCEN                             BANKMASK(SSPCON2), 7
#define GCTRL                            BANKMASK(TMUXCON0), 7
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
#define GPB4                             BANKMASK(PORTGPB), 4
#define GPB5                             BANKMASK(PORTGPB), 5
#define GPB6                             BANKMASK(PORTGPB), 6
#define GPIO0                            BANKMASK(PORTGPA), 0
#define GPIO1                            BANKMASK(PORTGPA), 1
#define GPIO2                            BANKMASK(PORTGPA), 2
#define GPIO3                            BANKMASK(PORTGPA), 3
#define GPIO4                            BANKMASK(PORTGPA), 4
#define GPIO5                            BANKMASK(PORTGPA), 5
#define GPIO6                            BANKMASK(PORTGPA), 6
#define GPIO7                            BANKMASK(PORTGPA), 7
#define HD1EN                            BANKMASK(ABECON), 1
#define HD2EN                            BANKMASK(ABECON), 3
#define HSIAHIGHGAIN                     BANKMASK(ATSTCON0), 3
#define I1EAF                            BANKMASK(EACON), 0
#define I1EAR                            BANKMASK(EACON), 1
#define I1REFEN                          BANKMASK(REFCON1), 0
#define I2EAF                            BANKMASK(EACON), 2
#define I2EAR                            BANKMASK(EACON), 3
#define I2REFEN                          BANKMASK(REFCON1), 1
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
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCB6                            BANKMASK(IOCB), 6
#define IOCE                             BANKMASK(INTCON), 3
#define IOCF                             BANKMASK(INTCON), 0
#define LD1EN                            BANKMASK(ABECON), 0
#define LD2EN                            BANKMASK(ABECON), 2
#define LDIE                             BANKMASK(PIE2), 4
#define LDIF                             BANKMASK(PIR2), 4
#define LDINTN                           BANKMASK(INTEDGE1), 2
#define LDINTP                           BANKMASK(INTEDGE1), 3
#define LDO_LP                           BANKMASK(PCON), 4
#define LDO_LV                           BANKMASK(PCON), 5
#define MSCLK                            BANKMASK(MODECON1), 5
#define MSSEL                            BANKMASK(MODECON1), 6
#define MSSYNC                           BANKMASK(MODECON1), 4
#define OCIE                             BANKMASK(PIE2), 6
#define OCIF                             BANKMASK(PIR2), 6
#define OERR                             BANKMASK(RCSTA), 1
#define OSCSEL0                          BANKMASK(OSCCON), 5
#define OSCSEL1                          BANKMASK(OSCCON), 6
#define OSCSTB                           BANKMASK(OSCCON), 7
#define OTIE                             BANKMASK(PIE1), 7
#define OTIF                             BANKMASK(PIR1), 7
#define PCIE                             BANKMASK(SSPCON3), 6
#define PDIR                             BANKMASK(MODECON1), 0
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSPCON2), 2
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PWM1EN                           BANKMASK(PWMCON), 0
#define PWM2EN                           BANKMASK(PWMCON), 1
#define PWM3EN                           BANKMASK(PWMCON), 2
#define RA0                              BANKMASK(PORTGPA), 0
#define RA1                              BANKMASK(PORTGPA), 1
#define RA2                              BANKMASK(PORTGPA), 2
#define RA3                              BANKMASK(PORTGPA), 3
#define RA4                              BANKMASK(PORTGPA), 4
#define RA5                              BANKMASK(PORTGPA), 5
#define RA6                              BANKMASK(PORTGPA), 6
#define RA7                              BANKMASK(PORTGPA), 7
#define RB0                              BANKMASK(PORTGPB), 0
#define RB1                              BANKMASK(PORTGPB), 1
#define RB2                              BANKMASK(PORTGPB), 2
#define RB4                              BANKMASK(PORTGPB), 4
#define RB5                              BANKMASK(PORTGPB), 5
#define RB6                              BANKMASK(PORTGPB), 6
#define RB7                              BANKMASK(PORTGPB), 7
#define RCEN                             BANKMASK(SSPCON2), 3
#define RCIDL                            BANKMASK(BAUDCON), 6
#define RCIE                             BANKMASK(PIE3), 1
#define RCIF                             BANKMASK(PIR3), 1
#define RD                               BANKMASK(PMCON1), 0
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RSEN                             BANKMASK(SSPCON2), 1
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SBCDE                            BANKMASK(SSPCON3), 2
#define SCIE                             BANKMASK(SSPCON3), 5
#define SCKP                             BANKMASK(BAUDCON), 4
#define SDAHT                            BANKMASK(SSPCON3), 3
#define SEN                              BANKMASK(SSPCON2), 0
#define SENDB                            BANKMASK(TXSTA), 3
#define SKIP                             BANKMASK(MODECON2), 7
#define SLPBY                            BANKMASK(SLPCRCON), 6
#define SMP                              BANKMASK(SSPSTAT), 7
#define SPEN                             BANKMASK(RCSTA), 7
#define SREN                             BANKMASK(RCSTA), 5
#define SSEN                             BANKMASK(SSCON), 7
#define SSIE                             BANKMASK(PIE3), 4
#define SSIF                             BANKMASK(PIR3), 4
#define SSPEN                            BANKMASK(SSPCON1), 5
#define SSPIE                            BANKMASK(PIE1), 4
#define SSPIF                            BANKMASK(PIR1), 4
#define SSPM3                            BANKMASK(SSPCON1), 3
#define SSPOV                            BANKMASK(SSPCON1), 6
#define SWFRQOR                          BANKMASK(ATSTCON0), 4
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(TCON), 4
#define T1CKPS1                          BANKMASK(TCON), 5
#define T1GO_DONE                        BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T4CKPS0                          BANKMASK(TCON), 6
#define T4CKPS1                          BANKMASK(TCON), 7
#define TIMR1GIF                         BANKMASK(PIR1), 3
#define TIMR4IF                          BANKMASK(PIR1), 2
#define TMPTBY                           BANKMASK(ATSTCON0), 0
#define TMR1CS                           BANKMASK(TCON), 3
#define TMR1GE                           BANKMASK(T1GCON), 7
#define TMR1GIE                          BANKMASK(PIE1), 3
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(TCON), 0
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(TCON), 1
#define TMR4IE                           BANKMASK(PIE1), 2
#define TMR4ON                           BANKMASK(TCON), 2
#define TOPO0                            BANKMASK(MODECON1), 2
#define TOPO1                            BANKMASK(MODECON1), 3
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
#define TRISB4                           BANKMASK(TRISGPB), 4
#define TRISB5                           BANKMASK(TRISGPB), 5
#define TRISB6                           BANKMASK(TRISGPB), 6
#define TRMT                             BANKMASK(TXSTA), 1
#define TSTGM                            BANKMASK(ATSTCON0), 7
#define TSTOT                            BANKMASK(ATSTCON0), 5
#define TUN0                             BANKMASK(OSCCON), 0
#define TUN1                             BANKMASK(OSCCON), 1
#define TUN2                             BANKMASK(OSCCON), 2
#define TUN3                             BANKMASK(OSCCON), 3
#define TUN4                             BANKMASK(OSCCON), 4
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE3), 0
#define TXIF                             BANKMASK(PIR3), 0
#define UA                               BANKMASK(SSPSTAT), 1
#define V1EAF                            BANKMASK(EACON), 4
#define V1EAR                            BANKMASK(EACON), 5
#define V1OVEN                           BANKMASK(REFCON1), 5
#define V1OVIE                           BANKMASK(PIE2), 1
#define V1OVIF                           BANKMASK(PIR2), 1
#define V1OVINTN                         BANKMASK(INTEDGE2), 2
#define V1OVINTP                         BANKMASK(INTEDGE2), 3
#define V1REFEN                          BANKMASK(REFCON1), 2
#define V1UVEN                           BANKMASK(REFCON1), 4
#define V1UVIE                           BANKMASK(PIE2), 0
#define V1UVIF                           BANKMASK(PIR2), 0
#define V1UVINTN                         BANKMASK(INTEDGE2), 0
#define V1UVINTP                         BANKMASK(INTEDGE2), 1
#define V2EAF                            BANKMASK(EACON), 6
#define V2EAR                            BANKMASK(EACON), 7
#define V2OVEN                           BANKMASK(REFCON1), 7
#define V2OVIE                           BANKMASK(PIE2), 3
#define V2OVIF                           BANKMASK(PIR2), 3
#define V2OVINTN                         BANKMASK(INTEDGE2), 6
#define V2OVINTP                         BANKMASK(INTEDGE2), 7
#define V2REFEN                          BANKMASK(REFCON1), 3
#define V2UVEN                           BANKMASK(REFCON1), 6
#define V2UVIE                           BANKMASK(PIE2), 2
#define V2UVIF                           BANKMASK(PIR2), 2
#define V2UVINTN                         BANKMASK(INTEDGE2), 4
#define V2UVINTP                         BANKMASK(INTEDGE2), 5
#define VCFG0                            BANKMASK(ADCON1), 0
#define VCFG1                            BANKMASK(ADCON1), 1
#define VDDUIF                           BANKMASK(PIR3), 6
#define VDDUVIE                          BANKMASK(PIE3), 6
#define VINUVEN                          BANKMASK(REFCON2), 7
#define VINUVIE                          BANKMASK(PIE3), 5
#define VINUVIF                          BANKMASK(PIR3), 5
#define VINUVINTN                        BANKMASK(INTEDGE1), 0
#define VINUVINTP                        BANKMASK(INTEDGE1), 1
#define WCOL                             BANKMASK(SSPCON1), 7
#define WCS0                             BANKMASK(WPUGPA), 2
#define WCS1                             BANKMASK(WPUGPA), 3
#define WPUA0                            BANKMASK(WPUGPA), 0
#define WPUA1                            BANKMASK(WPUGPA), 1
#define WPUA5                            BANKMASK(WPUGPA), 5
#define WPUA6                            BANKMASK(WPUGPA), 6
#define WPUB1                            BANKMASK(WPUGPB), 1
#define WPUB2                            BANKMASK(WPUGPB), 2
#define WPUB3                            BANKMASK(WPUGPB), 3
#define WPUB4                            BANKMASK(WPUGPB), 4
#define WPUB5                            BANKMASK(WPUGPB), 5
#define WPUB6                            BANKMASK(WPUGPB), 6
#define WUE                              BANKMASK(BAUDCON), 1
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRAPU                            BANKMASK(OPTION_REG), 7
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

#endif // _MCP19128_INC_
