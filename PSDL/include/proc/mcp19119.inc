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

#ifndef _MCP19119_INC_
#define _MCP19119_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * MCP19119
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

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0008h
// bitfield definitions
PIR2_DCERIF_POSN                         equ 0000h
PIR2_DCERIF_POSITION                     equ 0000h
PIR2_DCERIF_SIZE                         equ 0001h
PIR2_DCERIF_LENGTH                       equ 0001h
PIR2_DCERIF_MASK                         equ 0001h
PIR2_VINIF_POSN                          equ 0001h
PIR2_VINIF_POSITION                      equ 0001h
PIR2_VINIF_SIZE                          equ 0001h
PIR2_VINIF_LENGTH                        equ 0001h
PIR2_VINIF_MASK                          equ 0002h
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
PIR2_UVIF_POSN                           equ 0007h
PIR2_UVIF_POSITION                       equ 0007h
PIR2_UVIF_SIZE                           equ 0001h
PIR2_UVIF_LENGTH                         equ 0001h
PIR2_UVIF_MASK                           equ 0080h

// Register: PCON
#define PCON PCON
PCON                                     equ 0009h
// bitfield definitions
PCON_nPOR_POSN                           equ 0001h
PCON_nPOR_POSITION                       equ 0001h
PCON_nPOR_SIZE                           equ 0001h
PCON_nPOR_LENGTH                         equ 0001h
PCON_nPOR_MASK                           equ 0002h
PCON_nOT_POSN                            equ 0002h
PCON_nOT_POSITION                        equ 0002h
PCON_nOT_SIZE                            equ 0001h
PCON_nOT_LENGTH                          equ 0001h
PCON_nOT_MASK                            equ 0004h

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

// Register: OVCCON
#define OVCCON OVCCON
OVCCON                                   equ 0019h
// bitfield definitions
OVCCON_OVC0_POSN                         equ 0000h
OVCCON_OVC0_POSITION                     equ 0000h
OVCCON_OVC0_SIZE                         equ 0001h
OVCCON_OVC0_LENGTH                       equ 0001h
OVCCON_OVC0_MASK                         equ 0001h
OVCCON_OVC1_POSN                         equ 0001h
OVCCON_OVC1_POSITION                     equ 0001h
OVCCON_OVC1_SIZE                         equ 0001h
OVCCON_OVC1_LENGTH                       equ 0001h
OVCCON_OVC1_MASK                         equ 0002h
OVCCON_OVC2_POSN                         equ 0002h
OVCCON_OVC2_POSITION                     equ 0002h
OVCCON_OVC2_SIZE                         equ 0001h
OVCCON_OVC2_LENGTH                       equ 0001h
OVCCON_OVC2_MASK                         equ 0004h
OVCCON_OVC3_POSN                         equ 0003h
OVCCON_OVC3_POSITION                     equ 0003h
OVCCON_OVC3_SIZE                         equ 0001h
OVCCON_OVC3_LENGTH                       equ 0001h
OVCCON_OVC3_MASK                         equ 0008h
OVCCON_OVC4_POSN                         equ 0004h
OVCCON_OVC4_POSITION                     equ 0004h
OVCCON_OVC4_SIZE                         equ 0001h
OVCCON_OVC4_LENGTH                       equ 0001h
OVCCON_OVC4_MASK                         equ 0010h
OVCCON_OVC5_POSN                         equ 0005h
OVCCON_OVC5_POSITION                     equ 0005h
OVCCON_OVC5_SIZE                         equ 0001h
OVCCON_OVC5_LENGTH                       equ 0001h
OVCCON_OVC5_MASK                         equ 0020h
OVCCON_OVC6_POSN                         equ 0006h
OVCCON_OVC6_POSITION                     equ 0006h
OVCCON_OVC6_SIZE                         equ 0001h
OVCCON_OVC6_LENGTH                       equ 0001h
OVCCON_OVC6_MASK                         equ 0040h
OVCCON_OVC7_POSN                         equ 0007h
OVCCON_OVC7_POSITION                     equ 0007h
OVCCON_OVC7_SIZE                         equ 0001h
OVCCON_OVC7_LENGTH                       equ 0001h
OVCCON_OVC7_MASK                         equ 0080h

// Register: OVFCON
#define OVFCON OVFCON
OVFCON                                   equ 001Ah
// bitfield definitions
OVFCON_OVF_POSN                          equ 0000h
OVFCON_OVF_POSITION                      equ 0000h
OVFCON_OVF_SIZE                          equ 0005h
OVFCON_OVF_LENGTH                        equ 0005h
OVFCON_OVF_MASK                          equ 001Fh
OVFCON_VOUTON_POSN                       equ 0007h
OVFCON_VOUTON_POSITION                   equ 0007h
OVFCON_VOUTON_SIZE                       equ 0001h
OVFCON_VOUTON_LENGTH                     equ 0001h
OVFCON_VOUTON_MASK                       equ 0080h
OVFCON_OVF0_POSN                         equ 0000h
OVFCON_OVF0_POSITION                     equ 0000h
OVFCON_OVF0_SIZE                         equ 0001h
OVFCON_OVF0_LENGTH                       equ 0001h
OVFCON_OVF0_MASK                         equ 0001h
OVFCON_OVF1_POSN                         equ 0001h
OVFCON_OVF1_POSITION                     equ 0001h
OVFCON_OVF1_SIZE                         equ 0001h
OVFCON_OVF1_LENGTH                       equ 0001h
OVFCON_OVF1_MASK                         equ 0002h
OVFCON_OVF2_POSN                         equ 0002h
OVFCON_OVF2_POSITION                     equ 0002h
OVFCON_OVF2_SIZE                         equ 0001h
OVFCON_OVF2_LENGTH                       equ 0001h
OVFCON_OVF2_MASK                         equ 0004h
OVFCON_OVF3_POSN                         equ 0003h
OVFCON_OVF3_POSITION                     equ 0003h
OVFCON_OVF3_SIZE                         equ 0001h
OVFCON_OVF3_LENGTH                       equ 0001h
OVFCON_OVF3_MASK                         equ 0008h
OVFCON_OVF4_POSN                         equ 0004h
OVFCON_OVF4_POSITION                     equ 0004h
OVFCON_OVF4_SIZE                         equ 0001h
OVFCON_OVF4_LENGTH                       equ 0001h
OVFCON_OVF4_MASK                         equ 0010h

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

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0088h
// bitfield definitions
PIE2_DCERIE_POSN                         equ 0000h
PIE2_DCERIE_POSITION                     equ 0000h
PIE2_DCERIE_SIZE                         equ 0001h
PIE2_DCERIE_LENGTH                       equ 0001h
PIE2_DCERIE_MASK                         equ 0001h
PIE2_VINIE_POSN                          equ 0001h
PIE2_VINIE_POSITION                      equ 0001h
PIE2_VINIE_SIZE                          equ 0001h
PIE2_VINIE_LENGTH                        equ 0001h
PIE2_VINIE_MASK                          equ 0002h
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
PIE2_UVIE_POSN                           equ 0007h
PIE2_UVIE_POSITION                       equ 0007h
PIE2_UVIE_SIZE                           equ 0001h
PIE2_UVIE_LENGTH                         equ 0001h
PIE2_UVIE_MASK                           equ 0080h

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 0089h
// bitfield definitions
APFCON_CLKSEL_POSN                       equ 0000h
APFCON_CLKSEL_POSITION                   equ 0000h
APFCON_CLKSEL_SIZE                       equ 0001h
APFCON_CLKSEL_LENGTH                     equ 0001h
APFCON_CLKSEL_MASK                       equ 0001h

// Register: VINLVL
#define VINLVL VINLVL
VINLVL                                   equ 0090h
// bitfield definitions
VINLVL_UVLO_POSN                         equ 0000h
VINLVL_UVLO_POSITION                     equ 0000h
VINLVL_UVLO_SIZE                         equ 0006h
VINLVL_UVLO_LENGTH                       equ 0006h
VINLVL_UVLO_MASK                         equ 003Fh
VINLVL_UVLOEN_POSN                       equ 0007h
VINLVL_UVLOEN_POSITION                   equ 0007h
VINLVL_UVLOEN_SIZE                       equ 0001h
VINLVL_UVLOEN_LENGTH                     equ 0001h
VINLVL_UVLOEN_MASK                       equ 0080h

// Register: OCCON
#define OCCON OCCON
OCCON                                    equ 0091h
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
CSGSCON                                  equ 0093h
// bitfield definitions
CSGSCON_CSGS_POSN                        equ 0000h
CSGSCON_CSGS_POSITION                    equ 0000h
CSGSCON_CSGS_SIZE                        equ 0004h
CSGSCON_CSGS_LENGTH                      equ 0004h
CSGSCON_CSGS_MASK                        equ 000Fh

// Register: CSDGCON
#define CSDGCON CSDGCON
CSDGCON                                  equ 0095h
// bitfield definitions
CSDGCON_CSDG_POSN                        equ 0000h
CSDGCON_CSDG_POSITION                    equ 0000h
CSDGCON_CSDG_SIZE                        equ 0003h
CSDGCON_CSDG_LENGTH                      equ 0003h
CSDGCON_CSDG_MASK                        equ 0007h
CSDGCON_CSDGEN_POSN                      equ 0007h
CSDGCON_CSDGEN_POSITION                  equ 0007h
CSDGCON_CSDGEN_SIZE                      equ 0001h
CSDGCON_CSDGEN_LENGTH                    equ 0001h
CSDGCON_CSDGEN_MASK                      equ 0080h

// Register: VZCCON
#define VZCCON VZCCON
VZCCON                                   equ 0097h
// bitfield definitions
VZCCON_VZC0_POSN                         equ 0000h
VZCCON_VZC0_POSITION                     equ 0000h
VZCCON_VZC0_SIZE                         equ 0001h
VZCCON_VZC0_LENGTH                       equ 0001h
VZCCON_VZC0_MASK                         equ 0001h
VZCCON_VZC1_POSN                         equ 0001h
VZCCON_VZC1_POSITION                     equ 0001h
VZCCON_VZC1_SIZE                         equ 0001h
VZCCON_VZC1_LENGTH                       equ 0001h
VZCCON_VZC1_MASK                         equ 0002h
VZCCON_VZC2_POSN                         equ 0002h
VZCCON_VZC2_POSITION                     equ 0002h
VZCCON_VZC2_SIZE                         equ 0001h
VZCCON_VZC2_LENGTH                       equ 0001h
VZCCON_VZC2_MASK                         equ 0004h
VZCCON_VZC3_POSN                         equ 0003h
VZCCON_VZC3_POSITION                     equ 0003h
VZCCON_VZC3_SIZE                         equ 0001h
VZCCON_VZC3_LENGTH                       equ 0001h
VZCCON_VZC3_MASK                         equ 0008h
VZCCON_VZC4_POSN                         equ 0004h
VZCCON_VZC4_POSITION                     equ 0004h
VZCCON_VZC4_SIZE                         equ 0001h
VZCCON_VZC4_LENGTH                       equ 0001h
VZCCON_VZC4_MASK                         equ 0010h
VZCCON_VZC5_POSN                         equ 0005h
VZCCON_VZC5_POSITION                     equ 0005h
VZCCON_VZC5_SIZE                         equ 0001h
VZCCON_VZC5_LENGTH                       equ 0001h
VZCCON_VZC5_MASK                         equ 0020h
VZCCON_VZC6_POSN                         equ 0006h
VZCCON_VZC6_POSITION                     equ 0006h
VZCCON_VZC6_SIZE                         equ 0001h
VZCCON_VZC6_LENGTH                       equ 0001h
VZCCON_VZC6_MASK                         equ 0040h
VZCCON_VZC7_POSN                         equ 0007h
VZCCON_VZC7_POSITION                     equ 0007h
VZCCON_VZC7_SIZE                         equ 0001h
VZCCON_VZC7_LENGTH                       equ 0001h
VZCCON_VZC7_MASK                         equ 0080h

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

// Register: OUVCON
#define OUVCON OUVCON
OUVCON                                   equ 0099h
// bitfield definitions
OUVCON_OUV0_POSN                         equ 0000h
OUVCON_OUV0_POSITION                     equ 0000h
OUVCON_OUV0_SIZE                         equ 0001h
OUVCON_OUV0_LENGTH                       equ 0001h
OUVCON_OUV0_MASK                         equ 0001h
OUVCON_OUV1_POSN                         equ 0001h
OUVCON_OUV1_POSITION                     equ 0001h
OUVCON_OUV1_SIZE                         equ 0001h
OUVCON_OUV1_LENGTH                       equ 0001h
OUVCON_OUV1_MASK                         equ 0002h
OUVCON_OUV2_POSN                         equ 0002h
OUVCON_OUV2_POSITION                     equ 0002h
OUVCON_OUV2_SIZE                         equ 0001h
OUVCON_OUV2_LENGTH                       equ 0001h
OUVCON_OUV2_MASK                         equ 0004h
OUVCON_OUV3_POSN                         equ 0003h
OUVCON_OUV3_POSITION                     equ 0003h
OUVCON_OUV3_SIZE                         equ 0001h
OUVCON_OUV3_LENGTH                       equ 0001h
OUVCON_OUV3_MASK                         equ 0008h
OUVCON_OUV4_POSN                         equ 0004h
OUVCON_OUV4_POSITION                     equ 0004h
OUVCON_OUV4_SIZE                         equ 0001h
OUVCON_OUV4_LENGTH                       equ 0001h
OUVCON_OUV4_MASK                         equ 0010h
OUVCON_OUV5_POSN                         equ 0005h
OUVCON_OUV5_POSITION                     equ 0005h
OUVCON_OUV5_SIZE                         equ 0001h
OUVCON_OUV5_LENGTH                       equ 0001h
OUVCON_OUV5_MASK                         equ 0020h
OUVCON_OUV6_POSN                         equ 0006h
OUVCON_OUV6_POSITION                     equ 0006h
OUVCON_OUV6_SIZE                         equ 0001h
OUVCON_OUV6_LENGTH                       equ 0001h
OUVCON_OUV6_MASK                         equ 0040h
OUVCON_OUV7_POSN                         equ 0007h
OUVCON_OUV7_POSITION                     equ 0007h
OUVCON_OUV7_SIZE                         equ 0001h
OUVCON_OUV7_LENGTH                       equ 0001h
OUVCON_OUV7_MASK                         equ 0080h

// Register: OOVCON
#define OOVCON OOVCON
OOVCON                                   equ 009Ah
// bitfield definitions
OOVCON_OOV0_POSN                         equ 0000h
OOVCON_OOV0_POSITION                     equ 0000h
OOVCON_OOV0_SIZE                         equ 0001h
OOVCON_OOV0_LENGTH                       equ 0001h
OOVCON_OOV0_MASK                         equ 0001h
OOVCON_OOV1_POSN                         equ 0001h
OOVCON_OOV1_POSITION                     equ 0001h
OOVCON_OOV1_SIZE                         equ 0001h
OOVCON_OOV1_LENGTH                       equ 0001h
OOVCON_OOV1_MASK                         equ 0002h
OOVCON_OOV2_POSN                         equ 0002h
OOVCON_OOV2_POSITION                     equ 0002h
OOVCON_OOV2_SIZE                         equ 0001h
OOVCON_OOV2_LENGTH                       equ 0001h
OOVCON_OOV2_MASK                         equ 0004h
OOVCON_OOV3_POSN                         equ 0003h
OOVCON_OOV3_POSITION                     equ 0003h
OOVCON_OOV3_SIZE                         equ 0001h
OOVCON_OOV3_LENGTH                       equ 0001h
OOVCON_OOV3_MASK                         equ 0008h
OOVCON_OOV4_POSN                         equ 0004h
OOVCON_OOV4_POSITION                     equ 0004h
OOVCON_OOV4_SIZE                         equ 0001h
OOVCON_OOV4_LENGTH                       equ 0001h
OOVCON_OOV4_MASK                         equ 0010h
OOVCON_OOV5_POSN                         equ 0005h
OOVCON_OOV5_POSITION                     equ 0005h
OOVCON_OOV5_SIZE                         equ 0001h
OOVCON_OOV5_LENGTH                       equ 0001h
OOVCON_OOV5_MASK                         equ 0020h
OOVCON_OOV6_POSN                         equ 0006h
OOVCON_OOV6_POSITION                     equ 0006h
OOVCON_OOV6_SIZE                         equ 0001h
OOVCON_OOV6_LENGTH                       equ 0001h
OOVCON_OOV6_MASK                         equ 0040h
OOVCON_OOV7_POSN                         equ 0007h
OOVCON_OOV7_POSITION                     equ 0007h
OOVCON_OOV7_SIZE                         equ 0001h
OOVCON_OOV7_LENGTH                       equ 0001h
OOVCON_OOV7_MASK                         equ 0080h

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

// Register: SLPCRCON
#define SLPCRCON SLPCRCON
SLPCRCON                                 equ 009Ch
// bitfield definitions
SLPCRCON_SLPS_POSN                       equ 0000h
SLPCRCON_SLPS_POSITION                   equ 0000h
SLPCRCON_SLPS_SIZE                       equ 0004h
SLPCRCON_SLPS_LENGTH                     equ 0004h
SLPCRCON_SLPS_MASK                       equ 000Fh
SLPCRCON_SLPG_POSN                       equ 0004h
SLPCRCON_SLPG_POSITION                   equ 0004h
SLPCRCON_SLPG_SIZE                       equ 0004h
SLPCRCON_SLPG_LENGTH                     equ 0004h
SLPCRCON_SLPG_MASK                       equ 00F0h

// Register: SLVGNCON
#define SLVGNCON SLVGNCON
SLVGNCON                                 equ 009Dh
// bitfield definitions
SLVGNCON_SLVGN_POSN                      equ 0000h
SLVGNCON_SLVGN_POSITION                  equ 0000h
SLVGNCON_SLVGN_SIZE                      equ 0005h
SLVGNCON_SLVGN_LENGTH                    equ 0005h
SLVGNCON_SLVGN_MASK                      equ 001Fh

// Register: RELEFF
#define RELEFF RELEFF
RELEFF                                   equ 009Eh
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
WPUGPB_WPUGPB2_POSN                      equ 0002h
WPUGPB_WPUGPB2_POSITION                  equ 0002h
WPUGPB_WPUGPB2_SIZE                      equ 0001h
WPUGPB_WPUGPB2_LENGTH                    equ 0001h
WPUGPB_WPUGPB2_MASK                      equ 0004h
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
WPUGPB_WPUB2_POSN                        equ 0002h
WPUGPB_WPUB2_POSITION                    equ 0002h
WPUGPB_WPUB2_SIZE                        equ 0001h
WPUGPB_WPUB2_LENGTH                      equ 0001h
WPUGPB_WPUB2_MASK                        equ 0004h
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
PE1_PUEN_POSN                            equ 0002h
PE1_PUEN_POSITION                        equ 0002h
PE1_PUEN_SIZE                            equ 0001h
PE1_PUEN_LENGTH                          equ 0001h
PE1_PUEN_MASK                            equ 0004h
PE1_PDEN_POSN                            equ 0003h
PE1_PDEN_POSITION                        equ 0003h
PE1_PDEN_SIZE                            equ 0001h
PE1_PDEN_LENGTH                          equ 0001h
PE1_PDEN_MASK                            equ 0008h
PE1_LDLYBY_POSN                          equ 0004h
PE1_LDLYBY_POSITION                      equ 0004h
PE1_LDLYBY_SIZE                          equ 0001h
PE1_LDLYBY_LENGTH                        equ 0001h
PE1_LDLYBY_MASK                          equ 0010h
PE1_HDLYBY_POSN                          equ 0005h
PE1_HDLYBY_POSITION                      equ 0005h
PE1_HDLYBY_SIZE                          equ 0001h
PE1_HDLYBY_LENGTH                        equ 0001h
PE1_HDLYBY_MASK                          equ 0020h
PE1_DVRSTR_POSN                          equ 0006h
PE1_DVRSTR_POSITION                      equ 0006h
PE1_DVRSTR_SIZE                          equ 0001h
PE1_DVRSTR_LENGTH                        equ 0001h
PE1_DVRSTR_MASK                          equ 0040h
PE1_DECON_POSN                           equ 0007h
PE1_DECON_POSITION                       equ 0007h
PE1_DECON_SIZE                           equ 0001h
PE1_DECON_LENGTH                         equ 0001h
PE1_DECON_MASK                           equ 0080h

// Register: BUFFCON
#define BUFFCON BUFFCON
BUFFCON                                  equ 0108h
// bitfield definitions
BUFFCON_ASEL_POSN                        equ 0000h
BUFFCON_ASEL_POSITION                    equ 0000h
BUFFCON_ASEL_SIZE                        equ 0005h
BUFFCON_ASEL_LENGTH                      equ 0005h
BUFFCON_ASEL_MASK                        equ 001Fh
BUFFCON_MLTPH_POSN                       equ 0005h
BUFFCON_MLTPH_POSITION                   equ 0005h
BUFFCON_MLTPH_SIZE                       equ 0003h
BUFFCON_MLTPH_LENGTH                     equ 0003h
BUFFCON_MLTPH_MASK                       equ 00E0h
BUFFCON_ASEL0_POSN                       equ 0000h
BUFFCON_ASEL0_POSITION                   equ 0000h
BUFFCON_ASEL0_SIZE                       equ 0001h
BUFFCON_ASEL0_LENGTH                     equ 0001h
BUFFCON_ASEL0_MASK                       equ 0001h
BUFFCON_ASEL1_POSN                       equ 0001h
BUFFCON_ASEL1_POSITION                   equ 0001h
BUFFCON_ASEL1_SIZE                       equ 0001h
BUFFCON_ASEL1_LENGTH                     equ 0001h
BUFFCON_ASEL1_MASK                       equ 0002h
BUFFCON_ASEL2_POSN                       equ 0002h
BUFFCON_ASEL2_POSITION                   equ 0002h
BUFFCON_ASEL2_SIZE                       equ 0001h
BUFFCON_ASEL2_LENGTH                     equ 0001h
BUFFCON_ASEL2_MASK                       equ 0004h
BUFFCON_ASEL3_POSN                       equ 0003h
BUFFCON_ASEL3_POSITION                   equ 0003h
BUFFCON_ASEL3_SIZE                       equ 0001h
BUFFCON_ASEL3_LENGTH                     equ 0001h
BUFFCON_ASEL3_MASK                       equ 0008h
BUFFCON_ASEL4_POSN                       equ 0004h
BUFFCON_ASEL4_POSITION                   equ 0004h
BUFFCON_ASEL4_SIZE                       equ 0001h
BUFFCON_ASEL4_LENGTH                     equ 0001h
BUFFCON_ASEL4_MASK                       equ 0010h
BUFFCON_MLTPH0_POSN                      equ 0005h
BUFFCON_MLTPH0_POSITION                  equ 0005h
BUFFCON_MLTPH0_SIZE                      equ 0001h
BUFFCON_MLTPH0_LENGTH                    equ 0001h
BUFFCON_MLTPH0_MASK                      equ 0020h
BUFFCON_MLTPH1_POSN                      equ 0006h
BUFFCON_MLTPH1_POSITION                  equ 0006h
BUFFCON_MLTPH1_SIZE                      equ 0001h
BUFFCON_MLTPH1_LENGTH                    equ 0001h
BUFFCON_MLTPH1_MASK                      equ 0040h
BUFFCON_MLTPH2_POSN                      equ 0007h
BUFFCON_MLTPH2_POSITION                  equ 0007h
BUFFCON_MLTPH2_SIZE                      equ 0001h
BUFFCON_MLTPH2_LENGTH                    equ 0001h
BUFFCON_MLTPH2_MASK                      equ 0080h

// Register: ABECON
#define ABECON ABECON
ABECON                                   equ 0109h
// bitfield definitions
ABECON_PATHEN_POSN                       equ 0000h
ABECON_PATHEN_POSITION                   equ 0000h
ABECON_PATHEN_SIZE                       equ 0001h
ABECON_PATHEN_LENGTH                     equ 0001h
ABECON_PATHEN_MASK                       equ 0001h
ABECON_RECIREN_POSN                      equ 0001h
ABECON_RECIREN_POSITION                  equ 0001h
ABECON_RECIREN_SIZE                      equ 0001h
ABECON_RECIREN_LENGTH                    equ 0001h
ABECON_RECIREN_MASK                      equ 0002h
ABECON_TMPSEN_POSN                       equ 0002h
ABECON_TMPSEN_POSITION                   equ 0002h
ABECON_TMPSEN_SIZE                       equ 0001h
ABECON_TMPSEN_LENGTH                     equ 0001h
ABECON_TMPSEN_MASK                       equ 0004h
ABECON_CRTMEN_POSN                       equ 0003h
ABECON_CRTMEN_POSITION                   equ 0003h
ABECON_CRTMEN_SIZE                       equ 0001h
ABECON_CRTMEN_LENGTH                     equ 0001h
ABECON_CRTMEN_MASK                       equ 0008h
ABECON_SLCPBY_POSN                       equ 0004h
ABECON_SLCPBY_POSITION                   equ 0004h
ABECON_SLCPBY_SIZE                       equ 0001h
ABECON_SLCPBY_LENGTH                     equ 0001h
ABECON_SLCPBY_MASK                       equ 0010h
ABECON_MEASEN_POSN                       equ 0005h
ABECON_MEASEN_POSITION                   equ 0005h
ABECON_MEASEN_SIZE                       equ 0001h
ABECON_MEASEN_LENGTH                     equ 0001h
ABECON_MEASEN_MASK                       equ 0020h
ABECON_UVDCEN_POSN                       equ 0006h
ABECON_UVDCEN_POSITION                   equ 0006h
ABECON_UVDCEN_SIZE                       equ 0001h
ABECON_UVDCEN_LENGTH                     equ 0001h
ABECON_UVDCEN_MASK                       equ 0040h
ABECON_OVDCEN_POSN                       equ 0007h
ABECON_OVDCEN_POSITION                   equ 0007h
ABECON_OVDCEN_SIZE                       equ 0001h
ABECON_OVDCEN_LENGTH                     equ 0001h
ABECON_OVDCEN_MASK                       equ 0080h

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
ANSELB_ANSB2_POSN                        equ 0002h
ANSELB_ANSB2_POSITION                    equ 0002h
ANSELB_ANSB2_SIZE                        equ 0001h
ANSELB_ANSB2_LENGTH                      equ 0001h
ANSELB_ANSB2_MASK                        equ 0004h
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

// Register: PORTICD
#define PORTICD PORTICD
PORTICD                                  equ 018Ch

// Register: TRISICD
#define TRISICD TRISICD
TRISICD                                  equ 018Dh

// Register: ICKBUG
#define ICKBUG ICKBUG
ICKBUG                                   equ 018Eh

// Register: BIGBUG
#define BIGBUG BIGBUG
BIGBUG                                   equ 018Fh

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

// Register: DOVCAL
#define DOVCAL DOVCAL
DOVCAL                                   equ 0199h
// bitfield definitions
DOVCAL_DOVT0_POSN                        equ 0000h
DOVCAL_DOVT0_POSITION                    equ 0000h
DOVCAL_DOVT0_SIZE                        equ 0001h
DOVCAL_DOVT0_LENGTH                      equ 0001h
DOVCAL_DOVT0_MASK                        equ 0001h
DOVCAL_DOVT1_POSN                        equ 0001h
DOVCAL_DOVT1_POSITION                    equ 0001h
DOVCAL_DOVT1_SIZE                        equ 0001h
DOVCAL_DOVT1_LENGTH                      equ 0001h
DOVCAL_DOVT1_MASK                        equ 0002h
DOVCAL_DOVT2_POSN                        equ 0002h
DOVCAL_DOVT2_POSITION                    equ 0002h
DOVCAL_DOVT2_SIZE                        equ 0001h
DOVCAL_DOVT2_LENGTH                      equ 0001h
DOVCAL_DOVT2_MASK                        equ 0004h
DOVCAL_DOVT3_POSN                        equ 0003h
DOVCAL_DOVT3_POSITION                    equ 0003h
DOVCAL_DOVT3_SIZE                        equ 0001h
DOVCAL_DOVT3_LENGTH                      equ 0001h
DOVCAL_DOVT3_MASK                        equ 0008h

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

// Register: VROCAL
#define VROCAL VROCAL
VROCAL                                   equ 019Ch
// bitfield definitions
VROCAL_VROT0_POSN                        equ 0000h
VROCAL_VROT0_POSITION                    equ 0000h
VROCAL_VROT0_SIZE                        equ 0001h
VROCAL_VROT0_LENGTH                      equ 0001h
VROCAL_VROT0_MASK                        equ 0001h
VROCAL_VROT1_POSN                        equ 0001h
VROCAL_VROT1_POSITION                    equ 0001h
VROCAL_VROT1_SIZE                        equ 0001h
VROCAL_VROT1_LENGTH                      equ 0001h
VROCAL_VROT1_MASK                        equ 0002h
VROCAL_VROT2_POSN                        equ 0002h
VROCAL_VROT2_POSITION                    equ 0002h
VROCAL_VROT2_SIZE                        equ 0001h
VROCAL_VROT2_LENGTH                      equ 0001h
VROCAL_VROT2_MASK                        equ 0004h
VROCAL_VROT3_POSN                        equ 0003h
VROCAL_VROT3_POSITION                    equ 0003h
VROCAL_VROT3_SIZE                        equ 0001h
VROCAL_VROT3_LENGTH                      equ 0001h
VROCAL_VROT3_MASK                        equ 0008h

// Register: ZROCAL
#define ZROCAL ZROCAL
ZROCAL                                   equ 019Dh
// bitfield definitions
ZROCAL_ZROT0_POSN                        equ 0000h
ZROCAL_ZROT0_POSITION                    equ 0000h
ZROCAL_ZROT0_SIZE                        equ 0001h
ZROCAL_ZROT0_LENGTH                      equ 0001h
ZROCAL_ZROT0_MASK                        equ 0001h
ZROCAL_ZROT1_POSN                        equ 0001h
ZROCAL_ZROT1_POSITION                    equ 0001h
ZROCAL_ZROT1_SIZE                        equ 0001h
ZROCAL_ZROT1_LENGTH                      equ 0001h
ZROCAL_ZROT1_MASK                        equ 0002h
ZROCAL_ZROT2_POSN                        equ 0002h
ZROCAL_ZROT2_POSITION                    equ 0002h
ZROCAL_ZROT2_SIZE                        equ 0001h
ZROCAL_ZROT2_LENGTH                      equ 0001h
ZROCAL_ZROT2_MASK                        equ 0004h
ZROCAL_ZROT3_POSN                        equ 0003h
ZROCAL_ZROT3_POSITION                    equ 0003h
ZROCAL_ZROT3_SIZE                        equ 0001h
ZROCAL_ZROT3_LENGTH                      equ 0001h
ZROCAL_ZROT3_MASK                        equ 0008h

// Register: ATSTCON
#define ATSTCON ATSTCON
ATSTCON                                  equ 019Fh
// bitfield definitions
ATSTCON_DRVDIS_POSN                      equ 0000h
ATSTCON_DRVDIS_POSITION                  equ 0000h
ATSTCON_DRVDIS_SIZE                      equ 0001h
ATSTCON_DRVDIS_LENGTH                    equ 0001h
ATSTCON_DRVDIS_MASK                      equ 0001h
ATSTCON_BNCHEN_POSN                      equ 0001h
ATSTCON_BNCHEN_POSITION                  equ 0001h
ATSTCON_BNCHEN_SIZE                      equ 0001h
ATSTCON_BNCHEN_LENGTH                    equ 0001h
ATSTCON_BNCHEN_MASK                      equ 0002h
ATSTCON_LODIS_POSN                       equ 0002h
ATSTCON_LODIS_POSITION                   equ 0002h
ATSTCON_LODIS_SIZE                       equ 0001h
ATSTCON_LODIS_LENGTH                     equ 0001h
ATSTCON_LODIS_MASK                       equ 0004h
ATSTCON_HIDIS_POSN                       equ 0003h
ATSTCON_HIDIS_POSITION                   equ 0003h
ATSTCON_HIDIS_SIZE                       equ 0001h
ATSTCON_HIDIS_LENGTH                     equ 0001h
ATSTCON_HIDIS_MASK                       equ 0008h

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
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define ASEL0                            BANKMASK(BUFFCON), 0
#define ASEL1                            BANKMASK(BUFFCON), 1
#define ASEL2                            BANKMASK(BUFFCON), 2
#define ASEL3                            BANKMASK(BUFFCON), 3
#define ASEL4                            BANKMASK(BUFFCON), 4
#define BCLIE                            BANKMASK(PIE1), 5
#define BCLIF                            BANKMASK(PIR1), 5
#define BF                               BANKMASK(SSPSTAT), 0
#define BGRT0                            BANKMASK(BGRCAL), 0
#define BGRT1                            BANKMASK(BGRCAL), 1
#define BGRT2                            BANKMASK(BGRCAL), 2
#define BGRT3                            BANKMASK(BGRCAL), 3
#define BNCHEN                           BANKMASK(ATSTCON), 1
#define BOEN                             BANKMASK(SSPCON3), 4
#define CALSEL                           BANKMASK(PMCON1), 6
#define CARRY                            BANKMASK(STATUS), 0
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON1), 4
#define CLKSEL                           BANKMASK(APFCON), 0
#define CRTMEN                           BANKMASK(ABECON), 3
#define CSDGEN                           BANKMASK(CSDGCON), 7
#define DC                               BANKMASK(STATUS), 1
#define DCERIE                           BANKMASK(PIE2), 0
#define DCERIF                           BANKMASK(PIR2), 0
#define DECON                            BANKMASK(PE1), 7
#define DHEN                             BANKMASK(SSPCON3), 0
#define DOVT0                            BANKMASK(DOVCAL), 0
#define DOVT1                            BANKMASK(DOVCAL), 1
#define DOVT2                            BANKMASK(DOVCAL), 2
#define DOVT3                            BANKMASK(DOVCAL), 3
#define DRVDIS                           BANKMASK(ATSTCON), 0
#define DVRSTR                           BANKMASK(PE1), 6
#define D_nA                             BANKMASK(SSPSTAT), 5
#define FCALT0                           BANKMASK(OSCCAL), 0
#define FCALT1                           BANKMASK(OSCCAL), 1
#define FCALT2                           BANKMASK(OSCCAL), 2
#define FCALT3                           BANKMASK(OSCCAL), 3
#define FCALT4                           BANKMASK(OSCCAL), 4
#define FCALT5                           BANKMASK(OSCCAL), 5
#define FCALT6                           BANKMASK(OSCCAL), 6
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
#define GPB4                             BANKMASK(PORTGPB), 4
#define GPB5                             BANKMASK(PORTGPB), 5
#define GPB6                             BANKMASK(PORTGPB), 6
#define GPB7                             BANKMASK(PORTGPB), 7
#define GPIO0                            BANKMASK(PORTGPA), 0
#define GPIO1                            BANKMASK(PORTGPA), 1
#define GPIO2                            BANKMASK(PORTGPA), 2
#define GPIO3                            BANKMASK(PORTGPA), 3
#define GPIO4                            BANKMASK(PORTGPA), 4
#define GPIO5                            BANKMASK(PORTGPA), 5
#define GPIO6                            BANKMASK(PORTGPA), 6
#define GPIO7                            BANKMASK(PORTGPA), 7
#define HDLYBY                           BANKMASK(PE1), 5
#define HIDIS                            BANKMASK(ATSTCON), 3
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
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCB6                            BANKMASK(IOCB), 6
#define IOCB7                            BANKMASK(IOCB), 7
#define IOCE                             BANKMASK(INTCON), 3
#define IOCF                             BANKMASK(INTCON), 0
#define LDLYBY                           BANKMASK(PE1), 4
#define LODIS                            BANKMASK(ATSTCON), 2
#define MEASEN                           BANKMASK(ABECON), 5
#define MLTPH0                           BANKMASK(BUFFCON), 5
#define MLTPH1                           BANKMASK(BUFFCON), 6
#define MLTPH2                           BANKMASK(BUFFCON), 7
#define MSDONE                           BANKMASK(RELEFF), 7
#define OCEN                             BANKMASK(OCCON), 7
#define OCIE                             BANKMASK(PIE2), 5
#define OCIF                             BANKMASK(PIR2), 5
#define OOV0                             BANKMASK(OOVCON), 0
#define OOV1                             BANKMASK(OOVCON), 1
#define OOV2                             BANKMASK(OOVCON), 2
#define OOV3                             BANKMASK(OOVCON), 3
#define OOV4                             BANKMASK(OOVCON), 4
#define OOV5                             BANKMASK(OOVCON), 5
#define OOV6                             BANKMASK(OOVCON), 6
#define OOV7                             BANKMASK(OOVCON), 7
#define OUV0                             BANKMASK(OUVCON), 0
#define OUV1                             BANKMASK(OUVCON), 1
#define OUV2                             BANKMASK(OUVCON), 2
#define OUV3                             BANKMASK(OUVCON), 3
#define OUV4                             BANKMASK(OUVCON), 4
#define OUV5                             BANKMASK(OUVCON), 5
#define OUV6                             BANKMASK(OUVCON), 6
#define OUV7                             BANKMASK(OUVCON), 7
#define OVC0                             BANKMASK(OVCCON), 0
#define OVC1                             BANKMASK(OVCCON), 1
#define OVC2                             BANKMASK(OVCCON), 2
#define OVC3                             BANKMASK(OVCCON), 3
#define OVC4                             BANKMASK(OVCCON), 4
#define OVC5                             BANKMASK(OVCCON), 5
#define OVC6                             BANKMASK(OVCCON), 6
#define OVC7                             BANKMASK(OVCCON), 7
#define OVDCEN                           BANKMASK(ABECON), 7
#define OVF0                             BANKMASK(OVFCON), 0
#define OVF1                             BANKMASK(OVFCON), 1
#define OVF2                             BANKMASK(OVFCON), 2
#define OVF3                             BANKMASK(OVFCON), 3
#define OVF4                             BANKMASK(OVFCON), 4
#define OVIE                             BANKMASK(PIE2), 4
#define OVIF                             BANKMASK(PIR2), 4
#define OVTEE                            BANKMASK(PE1), 0
#define PATHEN                           BANKMASK(ABECON), 0
#define PCIE                             BANKMASK(SSPCON3), 6
#define PDEN                             BANKMASK(PE1), 3
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
#define PUEN                             BANKMASK(PE1), 2
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
#define RD                               BANKMASK(PMCON1), 0
#define RECIREN                          BANKMASK(ABECON), 1
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RSEN                             BANKMASK(SSPCON2), 1
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SBCDE                            BANKMASK(SSPCON3), 2
#define SCIE                             BANKMASK(SSPCON3), 5
#define SDAHT                            BANKMASK(SSPCON3), 3
#define SEN                              BANKMASK(SSPCON2), 0
#define SLCPBY                           BANKMASK(ABECON), 4
#define SMP                              BANKMASK(SSPSTAT), 7
#define SSPEN                            BANKMASK(SSPCON1), 5
#define SSPIE                            BANKMASK(PIE1), 4
#define SSPIF                            BANKMASK(PIR1), 4
#define SSPM0                            BANKMASK(SSPCON1), 0
#define SSPM1                            BANKMASK(SSPCON1), 1
#define SSPM2                            BANKMASK(SSPCON1), 2
#define SSPM3                            BANKMASK(SSPCON1), 3
#define SSPOV                            BANKMASK(SSPCON1), 6
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define TMPSEN                           BANKMASK(ABECON), 2
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
#define TRISA4                           BANKMASK(TRISGPA), 4
#define TRISA5                           BANKMASK(TRISGPA), 5
#define TRISA6                           BANKMASK(TRISGPA), 6
#define TRISA7                           BANKMASK(TRISGPA), 7
#define TRISB0                           BANKMASK(TRISGPB), 0
#define TRISB1                           BANKMASK(TRISGPB), 1
#define TRISB2                           BANKMASK(TRISGPB), 2
#define TRISB4                           BANKMASK(TRISGPB), 4
#define TRISB5                           BANKMASK(TRISGPB), 5
#define TRISB6                           BANKMASK(TRISGPB), 6
#define TRISB7                           BANKMASK(TRISGPB), 7
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
#define UVDCEN                           BANKMASK(ABECON), 6
#define UVIE                             BANKMASK(PIE2), 7
#define UVIF                             BANKMASK(PIR2), 7
#define UVLOEN                           BANKMASK(VINLVL), 7
#define UVTEE                            BANKMASK(PE1), 1
#define VINIE                            BANKMASK(PIE2), 1
#define VINIF                            BANKMASK(PIR2), 1
#define VOUTON                           BANKMASK(OVFCON), 7
#define VROT0                            BANKMASK(VROCAL), 0
#define VROT1                            BANKMASK(VROCAL), 1
#define VROT2                            BANKMASK(VROCAL), 2
#define VROT3                            BANKMASK(VROCAL), 3
#define VZC0                             BANKMASK(VZCCON), 0
#define VZC1                             BANKMASK(VZCCON), 1
#define VZC2                             BANKMASK(VZCCON), 2
#define VZC3                             BANKMASK(VZCCON), 3
#define VZC4                             BANKMASK(VZCCON), 4
#define VZC5                             BANKMASK(VZCCON), 5
#define VZC6                             BANKMASK(VZCCON), 6
#define VZC7                             BANKMASK(VZCCON), 7
#define WCOL                             BANKMASK(SSPCON1), 7
#define WPUA0                            BANKMASK(WPUGPA), 0
#define WPUA1                            BANKMASK(WPUGPA), 1
#define WPUA2                            BANKMASK(WPUGPA), 2
#define WPUA3                            BANKMASK(WPUGPA), 3
#define WPUA5                            BANKMASK(WPUGPA), 5
#define WPUB1                            BANKMASK(WPUGPB), 1
#define WPUB2                            BANKMASK(WPUGPB), 2
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
#define WPUGPB2                          BANKMASK(WPUGPB), 2
#define WPUGPB4                          BANKMASK(WPUGPB), 4
#define WPUGPB5                          BANKMASK(WPUGPB), 5
#define WPUGPB6                          BANKMASK(WPUGPB), 6
#define WPUGPB7                          BANKMASK(WPUGPB), 7
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define ZERO                             BANKMASK(STATUS), 2
#define ZROT0                            BANKMASK(ZROCAL), 0
#define ZROT1                            BANKMASK(ZROCAL), 1
#define ZROT2                            BANKMASK(ZROCAL), 2
#define ZROT3                            BANKMASK(ZROCAL), 3
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

#endif // _MCP19119_INC_
