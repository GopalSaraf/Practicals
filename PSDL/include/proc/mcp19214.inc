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

#ifndef _MCP19214_INC_
#define _MCP19214_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * MCP19214
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
PIR1_OTIF_POSN                           equ 0007h
PIR1_OTIF_POSITION                       equ 0007h
PIR1_OTIF_SIZE                           equ 0001h
PIR1_OTIF_LENGTH                         equ 0001h
PIR1_OTIF_MASK                           equ 0080h

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
PIR2_VDDUVIF_POSN                        equ 0003h
PIR2_VDDUVIF_POSITION                    equ 0003h
PIR2_VDDUVIF_SIZE                        equ 0001h
PIR2_VDDUVIF_LENGTH                      equ 0001h
PIR2_VDDUVIF_MASK                        equ 0008h
PIR2_IVGD2IF_POSN                        equ 0005h
PIR2_IVGD2IF_POSITION                    equ 0005h
PIR2_IVGD2IF_SIZE                        equ 0001h
PIR2_IVGD2IF_LENGTH                      equ 0001h
PIR2_IVGD2IF_MASK                        equ 0020h
PIR2_IVGD1IF_POSN                        equ 0007h
PIR2_IVGD1IF_POSITION                    equ 0007h
PIR2_IVGD1IF_SIZE                        equ 0001h
PIR2_IVGD1IF_LENGTH                      equ 0001h
PIR2_IVGD1IF_MASK                        equ 0080h

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

// Register: PCON
#define PCON PCON
PCON                                     equ 0012h

// Register: PWM2PHL
#define PWM2PHL PWM2PHL
PWM2PHL                                  equ 0013h
// bitfield definitions
PWM2PHL_PWM2PHL_POSN                     equ 0000h
PWM2PHL_PWM2PHL_POSITION                 equ 0000h
PWM2PHL_PWM2PHL_SIZE                     equ 0008h
PWM2PHL_PWM2PHL_LENGTH                   equ 0008h
PWM2PHL_PWM2PHL_MASK                     equ 00FFh

// Register: PWM2PHH
#define PWM2PHH PWM2PHH
PWM2PHH                                  equ 0014h
// bitfield definitions
PWM2PHH_PWM2PHH_POSN                     equ 0000h
PWM2PHH_PWM2PHH_POSITION                 equ 0000h
PWM2PHH_PWM2PHH_SIZE                     equ 0008h
PWM2PHH_PWM2PHH_LENGTH                   equ 0008h
PWM2PHH_PWM2PHH_MASK                     equ 00FFh

// Register: PWM2RL
#define PWM2RL PWM2RL
PWM2RL                                   equ 0015h
// bitfield definitions
PWM2RL_PWM2RL_POSN                       equ 0000h
PWM2RL_PWM2RL_POSITION                   equ 0000h
PWM2RL_PWM2RL_SIZE                       equ 0008h
PWM2RL_PWM2RL_LENGTH                     equ 0008h
PWM2RL_PWM2RL_MASK                       equ 00FFh

// Register: PWM2RH
#define PWM2RH PWM2RH
PWM2RH                                   equ 0016h
// bitfield definitions
PWM2RH_PWM2RH_POSN                       equ 0000h
PWM2RH_PWM2RH_POSITION                   equ 0000h
PWM2RH_PWM2RH_SIZE                       equ 0008h
PWM2RH_PWM2RH_LENGTH                     equ 0008h
PWM2RH_PWM2RH_MASK                       equ 00FFh

// Register: PWM1RL
#define PWM1RL PWM1RL
PWM1RL                                   equ 0017h
// bitfield definitions
PWM1RL_PWM1RL_POSN                       equ 0000h
PWM1RL_PWM1RL_POSITION                   equ 0000h
PWM1RL_PWM1RL_SIZE                       equ 0008h
PWM1RL_PWM1RL_LENGTH                     equ 0008h
PWM1RL_PWM1RL_MASK                       equ 00FFh

// Register: PWM1RH
#define PWM1RH PWM1RH
PWM1RH                                   equ 0018h
// bitfield definitions
PWM1RH_PWM1RH_POSN                       equ 0000h
PWM1RH_PWM1RH_POSITION                   equ 0000h
PWM1RH_PWM1RH_SIZE                       equ 0008h
PWM1RH_PWM1RH_LENGTH                     equ 0008h
PWM1RH_PWM1RH_MASK                       equ 00FFh

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
PIE1_OTIE_POSN                           equ 0007h
PIE1_OTIE_POSITION                       equ 0007h
PIE1_OTIE_SIZE                           equ 0001h
PIE1_OTIE_LENGTH                         equ 0001h
PIE1_OTIE_MASK                           equ 0080h

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
PIE2_VDDUVIE_POSN                        equ 0003h
PIE2_VDDUVIE_POSITION                    equ 0003h
PIE2_VDDUVIE_SIZE                        equ 0001h
PIE2_VDDUVIE_LENGTH                      equ 0001h
PIE2_VDDUVIE_MASK                        equ 0008h
PIE2_IVGD2IE_POSN                        equ 0005h
PIE2_IVGD2IE_POSITION                    equ 0005h
PIE2_IVGD2IE_SIZE                        equ 0001h
PIE2_IVGD2IE_LENGTH                      equ 0001h
PIE2_IVGD2IE_MASK                        equ 0020h
PIE2_IVGD1IE_POSN                        equ 0007h
PIE2_IVGD1IE_POSITION                    equ 0007h
PIE2_IVGD1IE_SIZE                        equ 0001h
PIE2_IVGD1IE_LENGTH                      equ 0001h
PIE2_IVGD1IE_MASK                        equ 0080h

// Register: VINUVLO
#define VINUVLO VINUVLO
VINUVLO                                  equ 008Ch
// bitfield definitions
VINUVLO_UVLO_POSN                        equ 0000h
VINUVLO_UVLO_POSITION                    equ 0000h
VINUVLO_UVLO_SIZE                        equ 0006h
VINUVLO_UVLO_LENGTH                      equ 0006h
VINUVLO_UVLO_MASK                        equ 003Fh

// Register: VINOVLO
#define VINOVLO VINOVLO
VINOVLO                                  equ 008Dh
// bitfield definitions
VINOVLO_OVLO_POSN                        equ 0000h
VINOVLO_OVLO_POSITION                    equ 0000h
VINOVLO_OVLO_SIZE                        equ 0006h
VINOVLO_OVLO_LENGTH                      equ 0006h
VINOVLO_OVLO_MASK                        equ 003Fh

// Register: VINCON
#define VINCON VINCON
VINCON                                   equ 008Eh
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

// Register: CREFCON1
#define CREFCON1 CREFCON1
CREFCON1                                 equ 008Fh
// bitfield definitions
CREFCON1_CREFCON1_POSN                   equ 0000h
CREFCON1_CREFCON1_POSITION               equ 0000h
CREFCON1_CREFCON1_SIZE                   equ 0008h
CREFCON1_CREFCON1_LENGTH                 equ 0008h
CREFCON1_CREFCON1_MASK                   equ 00FFh

// Register: CREFCON2
#define CREFCON2 CREFCON2
CREFCON2                                 equ 0090h
// bitfield definitions
CREFCON2_CREFCON2_POSN                   equ 0000h
CREFCON2_CREFCON2_POSITION               equ 0000h
CREFCON2_CREFCON2_SIZE                   equ 0008h
CREFCON2_CREFCON2_LENGTH                 equ 0008h
CREFCON2_CREFCON2_MASK                   equ 00FFh

// Register: VREFCON1
#define VREFCON1 VREFCON1
VREFCON1                                 equ 0091h
// bitfield definitions
VREFCON1_VREFCON1_POSN                   equ 0000h
VREFCON1_VREFCON1_POSITION               equ 0000h
VREFCON1_VREFCON1_SIZE                   equ 0008h
VREFCON1_VREFCON1_LENGTH                 equ 0008h
VREFCON1_VREFCON1_MASK                   equ 00FFh

// Register: VREFCON2
#define VREFCON2 VREFCON2
VREFCON2                                 equ 0092h
// bitfield definitions
VREFCON2_VREFCON2_POSN                   equ 0000h
VREFCON2_VREFCON2_POSITION               equ 0000h
VREFCON2_VREFCON2_SIZE                   equ 0008h
VREFCON2_VREFCON2_LENGTH                 equ 0008h
VREFCON2_VREFCON2_MASK                   equ 00FFh

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

// Register: VDDCON
#define VDDCON VDDCON
VDDCON                                   equ 0098h
// bitfield definitions
VDDCON_VDDUV0_POSN                       equ 0000h
VDDCON_VDDUV0_POSITION                   equ 0000h
VDDCON_VDDUV0_SIZE                       equ 0001h
VDDCON_VDDUV0_LENGTH                     equ 0001h
VDDCON_VDDUV0_MASK                       equ 0001h
VDDCON_VDDUV1_POSN                       equ 0001h
VDDCON_VDDUV1_POSITION                   equ 0001h
VDDCON_VDDUV1_SIZE                       equ 0001h
VDDCON_VDDUV1_LENGTH                     equ 0001h
VDDCON_VDDUV1_MASK                       equ 0002h
VDDCON_VDDUVINTN_POSN                    equ 0004h
VDDCON_VDDUVINTN_POSITION                equ 0004h
VDDCON_VDDUVINTN_SIZE                    equ 0001h
VDDCON_VDDUVINTN_LENGTH                  equ 0001h
VDDCON_VDDUVINTN_MASK                    equ 0010h
VDDCON_VDDUVINTP_POSN                    equ 0005h
VDDCON_VDDUVINTP_POSITION                equ 0005h
VDDCON_VDDUVINTP_SIZE                    equ 0001h
VDDCON_VDDUVINTP_LENGTH                  equ 0001h
VDDCON_VDDUVINTP_MASK                    equ 0020h
VDDCON_VDDUVOUT_POSN                     equ 0006h
VDDCON_VDDUVOUT_POSITION                 equ 0006h
VDDCON_VDDUVOUT_SIZE                     equ 0001h
VDDCON_VDDUVOUT_LENGTH                   equ 0001h
VDDCON_VDDUVOUT_MASK                     equ 0040h
VDDCON_VDDUVEN_POSN                      equ 0007h
VDDCON_VDDUVEN_POSITION                  equ 0007h
VDDCON_VDDUVEN_SIZE                      equ 0001h
VDDCON_VDDUVEN_LENGTH                    equ 0001h
VDDCON_VDDUVEN_MASK                      equ 0080h

// Register: LOOPCON1
#define LOOPCON1 LOOPCON1
LOOPCON1                                 equ 0099h
// bitfield definitions
LOOPCON1_IVREGUL_POSN                    equ 0002h
LOOPCON1_IVREGUL_POSITION                equ 0002h
LOOPCON1_IVREGUL_SIZE                    equ 0001h
LOOPCON1_IVREGUL_LENGTH                  equ 0001h
LOOPCON1_IVREGUL_MASK                    equ 0004h
LOOPCON1_IVGDINTN_POSN                   equ 0003h
LOOPCON1_IVGDINTN_POSITION               equ 0003h
LOOPCON1_IVGDINTN_SIZE                   equ 0001h
LOOPCON1_IVGDINTN_LENGTH                 equ 0001h
LOOPCON1_IVGDINTN_MASK                   equ 0008h
LOOPCON1_IVGDINTP_POSN                   equ 0004h
LOOPCON1_IVGDINTP_POSITION               equ 0004h
LOOPCON1_IVGDINTP_SIZE                   equ 0001h
LOOPCON1_IVGDINTP_LENGTH                 equ 0001h
LOOPCON1_IVGDINTP_MASK                   equ 0010h
LOOPCON1_IV_GOOD_POSN                    equ 0005h
LOOPCON1_IV_GOOD_POSITION                equ 0005h
LOOPCON1_IV_GOOD_SIZE                    equ 0001h
LOOPCON1_IV_GOOD_LENGTH                  equ 0001h
LOOPCON1_IV_GOOD_MASK                    equ 0020h
LOOPCON1_IVLRES_POSN                     equ 0007h
LOOPCON1_IVLRES_POSITION                 equ 0007h
LOOPCON1_IVLRES_SIZE                     equ 0001h
LOOPCON1_IVLRES_LENGTH                   equ 0001h
LOOPCON1_IVLRES_MASK                     equ 0080h

// Register: LOOPCON2
#define LOOPCON2 LOOPCON2
LOOPCON2                                 equ 009Ah
// bitfield definitions
LOOPCON2_IVREGUL_POSN                    equ 0002h
LOOPCON2_IVREGUL_POSITION                equ 0002h
LOOPCON2_IVREGUL_SIZE                    equ 0001h
LOOPCON2_IVREGUL_LENGTH                  equ 0001h
LOOPCON2_IVREGUL_MASK                    equ 0004h
LOOPCON2_IVGDINTN_POSN                   equ 0003h
LOOPCON2_IVGDINTN_POSITION               equ 0003h
LOOPCON2_IVGDINTN_SIZE                   equ 0001h
LOOPCON2_IVGDINTN_LENGTH                 equ 0001h
LOOPCON2_IVGDINTN_MASK                   equ 0008h
LOOPCON2_IVGDINTP_POSN                   equ 0004h
LOOPCON2_IVGDINTP_POSITION               equ 0004h
LOOPCON2_IVGDINTP_SIZE                   equ 0001h
LOOPCON2_IVGDINTP_LENGTH                 equ 0001h
LOOPCON2_IVGDINTP_MASK                   equ 0010h
LOOPCON2_IV_GOOD_POSN                    equ 0005h
LOOPCON2_IV_GOOD_POSITION                equ 0005h
LOOPCON2_IV_GOOD_SIZE                    equ 0001h
LOOPCON2_IV_GOOD_LENGTH                  equ 0001h
LOOPCON2_IV_GOOD_MASK                    equ 0020h
LOOPCON2_IVLRES_POSN                     equ 0007h
LOOPCON2_IVLRES_POSITION                 equ 0007h
LOOPCON2_IVLRES_SIZE                     equ 0001h
LOOPCON2_IVLRES_LENGTH                   equ 0001h
LOOPCON2_IVLRES_MASK                     equ 0080h

// Register: TTCAL
#define TTCAL TTCAL
TTCAL                                    equ 009Bh
// bitfield definitions
TTCAL_TTA_POSN                           equ 0000h
TTCAL_TTA_POSITION                       equ 0000h
TTCAL_TTA_SIZE                           equ 0004h
TTCAL_TTA_LENGTH                         equ 0004h
TTCAL_TTA_MASK                           equ 000Fh
TTCAL_TSTOT_POSN                         equ 0007h
TTCAL_TSTOT_POSITION                     equ 0007h
TTCAL_TSTOT_SIZE                         equ 0001h
TTCAL_TSTOT_LENGTH                       equ 0001h
TTCAL_TSTOT_MASK                         equ 0080h

// Register: SLPCRCON1
#define SLPCRCON1 SLPCRCON1
SLPCRCON1                                equ 009Ch
// bitfield definitions
SLPCRCON1_SLPCRCON1_POSN                 equ 0000h
SLPCRCON1_SLPCRCON1_POSITION             equ 0000h
SLPCRCON1_SLPCRCON1_SIZE                 equ 0006h
SLPCRCON1_SLPCRCON1_LENGTH               equ 0006h
SLPCRCON1_SLPCRCON1_MASK                 equ 003Fh
SLPCRCON1_SLPBY_POSN                     equ 0006h
SLPCRCON1_SLPBY_POSITION                 equ 0006h
SLPCRCON1_SLPBY_SIZE                     equ 0001h
SLPCRCON1_SLPBY_LENGTH                   equ 0001h
SLPCRCON1_SLPBY_MASK                     equ 0040h

// Register: SLPCRCON2
#define SLPCRCON2 SLPCRCON2
SLPCRCON2                                equ 009Dh
// bitfield definitions
SLPCRCON2_SLPCRCON2_POSN                 equ 0000h
SLPCRCON2_SLPCRCON2_POSITION             equ 0000h
SLPCRCON2_SLPCRCON2_SIZE                 equ 0006h
SLPCRCON2_SLPCRCON2_LENGTH               equ 0006h
SLPCRCON2_SLPCRCON2_MASK                 equ 003Fh
SLPCRCON2_SLPBY_POSN                     equ 0006h
SLPCRCON2_SLPBY_POSITION                 equ 0006h
SLPCRCON2_SLPBY_SIZE                     equ 0001h
SLPCRCON2_SLPBY_LENGTH                   equ 0001h
SLPCRCON2_SLPBY_MASK                     equ 0040h

// Register: ICOACON
#define ICOACON ICOACON
ICOACON                                  equ 009Eh
// bitfield definitions
ICOACON_IC2OAC_POSN                      equ 0000h
ICOACON_IC2OAC_POSITION                  equ 0000h
ICOACON_IC2OAC_SIZE                      equ 0004h
ICOACON_IC2OAC_LENGTH                    equ 0004h
ICOACON_IC2OAC_MASK                      equ 000Fh
ICOACON_IC1OAC_POSN                      equ 0004h
ICOACON_IC1OAC_POSITION                  equ 0004h
ICOACON_IC1OAC_SIZE                      equ 0004h
ICOACON_IC1OAC_LENGTH                    equ 0004h
ICOACON_IC1OAC_MASK                      equ 00F0h

// Register: ICLEBCON
#define ICLEBCON ICLEBCON
ICLEBCON                                 equ 009Fh
// bitfield definitions
ICLEBCON_IC2LEBC_POSN                    equ 0000h
ICLEBCON_IC2LEBC_POSITION                equ 0000h
ICLEBCON_IC2LEBC_SIZE                    equ 0002h
ICLEBCON_IC2LEBC_LENGTH                  equ 0002h
ICLEBCON_IC2LEBC_MASK                    equ 0003h
ICLEBCON_IC1LEBC_POSN                    equ 0002h
ICLEBCON_IC1LEBC_POSITION                equ 0002h
ICLEBCON_IC1LEBC_SIZE                    equ 0002h
ICLEBCON_IC1LEBC_LENGTH                  equ 0002h
ICLEBCON_IC1LEBC_MASK                    equ 000Ch

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
WPUGPA_WPUGPA6_POSN                      equ 0006h
WPUGPA_WPUGPA6_POSITION                  equ 0006h
WPUGPA_WPUGPA6_SIZE                      equ 0001h
WPUGPA_WPUGPA6_LENGTH                    equ 0001h
WPUGPA_WPUGPA6_MASK                      equ 0040h
WPUGPA_WPUGPA7_POSN                      equ 0007h
WPUGPA_WPUGPA7_POSITION                  equ 0007h
WPUGPA_WPUGPA7_SIZE                      equ 0001h
WPUGPA_WPUGPA7_LENGTH                    equ 0001h
WPUGPA_WPUGPA7_MASK                      equ 0080h
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
WPUGPA_WPUA6_POSN                        equ 0006h
WPUGPA_WPUA6_POSITION                    equ 0006h
WPUGPA_WPUA6_SIZE                        equ 0001h
WPUGPA_WPUA6_LENGTH                      equ 0001h
WPUGPA_WPUA6_MASK                        equ 0040h
WPUGPA_WPUA7_POSN                        equ 0007h
WPUGPA_WPUA7_POSITION                    equ 0007h
WPUGPA_WPUA7_SIZE                        equ 0001h
WPUGPA_WPUA7_LENGTH                      equ 0001h
WPUGPA_WPUA7_MASK                        equ 0080h

// Register: WPUGPB
#define WPUGPB WPUGPB
WPUGPB                                   equ 0106h
// bitfield definitions
WPUGPB_WPUGPB0_POSN                      equ 0000h
WPUGPB_WPUGPB0_POSITION                  equ 0000h
WPUGPB_WPUGPB0_SIZE                      equ 0001h
WPUGPB_WPUGPB0_LENGTH                    equ 0001h
WPUGPB_WPUGPB0_MASK                      equ 0001h
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
WPUGPB_WPUB0_POSN                        equ 0000h
WPUGPB_WPUB0_POSITION                    equ 0000h
WPUGPB_WPUB0_SIZE                        equ 0001h
WPUGPB_WPUB0_LENGTH                      equ 0001h
WPUGPB_WPUB0_MASK                        equ 0001h
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

// Register: PE1
#define PE1 PE1
PE1                                      equ 0107h
// bitfield definitions
PE1_LDO_LP_POSN                          equ 0000h
PE1_LDO_LP_POSITION                      equ 0000h
PE1_LDO_LP_SIZE                          equ 0001h
PE1_LDO_LP_LENGTH                        equ 0001h
PE1_LDO_LP_MASK                          equ 0001h
PE1_LDO_LV_POSN                          equ 0001h
PE1_LDO_LV_POSITION                      equ 0001h
PE1_LDO_LV_SIZE                          equ 0001h
PE1_LDO_LV_LENGTH                        equ 0001h
PE1_LDO_LV_MASK                          equ 0002h
PE1_IS2PUEN_POSN                         equ 0002h
PE1_IS2PUEN_POSITION                     equ 0002h
PE1_IS2PUEN_SIZE                         equ 0001h
PE1_IS2PUEN_LENGTH                       equ 0001h
PE1_IS2PUEN_MASK                         equ 0004h
PE1_IS1PUEN_POSN                         equ 0003h
PE1_IS1PUEN_POSITION                     equ 0003h
PE1_IS1PUEN_SIZE                         equ 0001h
PE1_IS1PUEN_LENGTH                       equ 0001h
PE1_IS1PUEN_MASK                         equ 0008h
PE1_PDRV2EN_POSN                         equ 0006h
PE1_PDRV2EN_POSITION                     equ 0006h
PE1_PDRV2EN_SIZE                         equ 0001h
PE1_PDRV2EN_LENGTH                       equ 0001h
PE1_PDRV2EN_MASK                         equ 0040h
PE1_PDRV1EN_POSN                         equ 0007h
PE1_PDRV1EN_POSITION                     equ 0007h
PE1_PDRV1EN_SIZE                         equ 0001h
PE1_PDRV1EN_LENGTH                       equ 0001h
PE1_PDRV1EN_MASK                         equ 0080h

// Register: ABECON1
#define ABECON1 ABECON1
ABECON1                                  equ 010Ch
// bitfield definitions
ABECON1_ANAOEN_POSN                      equ 0000h
ABECON1_ANAOEN_POSITION                  equ 0000h
ABECON1_ANAOEN_SIZE                      equ 0001h
ABECON1_ANAOEN_LENGTH                    equ 0001h
ABECON1_ANAOEN_MASK                      equ 0001h
ABECON1_EA2DIS1_POSN                     equ 0001h
ABECON1_EA2DIS1_POSITION                 equ 0001h
ABECON1_EA2DIS1_SIZE                     equ 0001h
ABECON1_EA2DIS1_LENGTH                   equ 0001h
ABECON1_EA2DIS1_MASK                     equ 0002h
ABECON1_EA1DIS1_POSN                     equ 0002h
ABECON1_EA1DIS1_POSITION                 equ 0002h
ABECON1_EA1DIS1_SIZE                     equ 0001h
ABECON1_EA1DIS1_LENGTH                   equ 0001h
ABECON1_EA1DIS1_MASK                     equ 0004h
ABECON1_DRUVSEL_POSN                     equ 0003h
ABECON1_DRUVSEL_POSITION                 equ 0003h
ABECON1_DRUVSEL_SIZE                     equ 0001h
ABECON1_DRUVSEL_LENGTH                   equ 0001h
ABECON1_DRUVSEL_MASK                     equ 0008h
ABECON1_DCHSEL_POSN                      equ 0004h
ABECON1_DCHSEL_POSITION                  equ 0004h
ABECON1_DCHSEL_SIZE                      equ 0002h
ABECON1_DCHSEL_LENGTH                    equ 0002h
ABECON1_DCHSEL_MASK                      equ 0030h
ABECON1_GCTRL_POSN                       equ 0006h
ABECON1_GCTRL_POSITION                   equ 0006h
ABECON1_GCTRL_SIZE                       equ 0001h
ABECON1_GCTRL_LENGTH                     equ 0001h
ABECON1_GCTRL_MASK                       equ 0040h
ABECON1_DIGOEN_POSN                      equ 0007h
ABECON1_DIGOEN_POSITION                  equ 0007h
ABECON1_DIGOEN_SIZE                      equ 0001h
ABECON1_DIGOEN_LENGTH                    equ 0001h
ABECON1_DIGOEN_MASK                      equ 0080h
ABECON1_DCHSEL0_POSN                     equ 0004h
ABECON1_DCHSEL0_POSITION                 equ 0004h
ABECON1_DCHSEL0_SIZE                     equ 0001h
ABECON1_DCHSEL0_LENGTH                   equ 0001h
ABECON1_DCHSEL0_MASK                     equ 0010h
ABECON1_DCHSEL1_POSN                     equ 0005h
ABECON1_DCHSEL1_POSITION                 equ 0005h
ABECON1_DCHSEL1_SIZE                     equ 0001h
ABECON1_DCHSEL1_LENGTH                   equ 0001h
ABECON1_DCHSEL1_MASK                     equ 0020h

// Register: ABECON2
#define ABECON2 ABECON2
ABECON2                                  equ 010Dh
// bitfield definitions
ABECON2_EA2DIS2_POSN                     equ 0001h
ABECON2_EA2DIS2_POSITION                 equ 0001h
ABECON2_EA2DIS2_SIZE                     equ 0001h
ABECON2_EA2DIS2_LENGTH                   equ 0001h
ABECON2_EA2DIS2_MASK                     equ 0002h
ABECON2_EA1DIS2_POSN                     equ 0002h
ABECON2_EA1DIS2_POSITION                 equ 0002h
ABECON2_EA1DIS2_SIZE                     equ 0001h
ABECON2_EA1DIS2_LENGTH                   equ 0001h
ABECON2_EA1DIS2_MASK                     equ 0004h
ABECON2_DSEL_POSN                        equ 0004h
ABECON2_DSEL_POSITION                    equ 0004h
ABECON2_DSEL_SIZE                        equ 0003h
ABECON2_DSEL_LENGTH                      equ 0003h
ABECON2_DSEL_MASK                        equ 0070h

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
ANSELB_ANSB4_POSN                        equ 0004h
ANSELB_ANSB4_POSITION                    equ 0004h
ANSELB_ANSB4_SIZE                        equ 0001h
ANSELB_ANSB4_LENGTH                      equ 0001h
ANSELB_ANSB4_MASK                        equ 0010h

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

// Register: GMCAL1
#define GMCAL1 GMCAL1
GMCAL1                                   equ 0196h
// bitfield definitions
GMCAL1_VGMCAL_POSN                       equ 0000h
GMCAL1_VGMCAL_POSITION                   equ 0000h
GMCAL1_VGMCAL_SIZE                       equ 0004h
GMCAL1_VGMCAL_LENGTH                     equ 0004h
GMCAL1_VGMCAL_MASK                       equ 000Fh
GMCAL1_IGMCAL_POSN                       equ 0004h
GMCAL1_IGMCAL_POSITION                   equ 0004h
GMCAL1_IGMCAL_SIZE                       equ 0004h
GMCAL1_IGMCAL_LENGTH                     equ 0004h
GMCAL1_IGMCAL_MASK                       equ 00F0h

// Register: EACAL2
#define EACAL2 EACAL2
EACAL2                                   equ 0196h
// bitfield definitions
EACAL2_VEACAL_POSN                       equ 0000h
EACAL2_VEACAL_POSITION                   equ 0000h
EACAL2_VEACAL_SIZE                       equ 0004h
EACAL2_VEACAL_LENGTH                     equ 0004h
EACAL2_VEACAL_MASK                       equ 000Fh
EACAL2_IEACAL_POSN                       equ 0004h
EACAL2_IEACAL_POSITION                   equ 0004h
EACAL2_IEACAL_SIZE                       equ 0004h
EACAL2_IEACAL_LENGTH                     equ 0004h
EACAL2_IEACAL_MASK                       equ 00F0h

// Register: GMCAL2
#define GMCAL2 GMCAL2
GMCAL2                                   equ 0197h
// bitfield definitions
GMCAL2_VGMCAL_POSN                       equ 0000h
GMCAL2_VGMCAL_POSITION                   equ 0000h
GMCAL2_VGMCAL_SIZE                       equ 0004h
GMCAL2_VGMCAL_LENGTH                     equ 0004h
GMCAL2_VGMCAL_MASK                       equ 000Fh
GMCAL2_IGMCAL_POSN                       equ 0004h
GMCAL2_IGMCAL_POSITION                   equ 0004h
GMCAL2_IGMCAL_SIZE                       equ 0004h
GMCAL2_IGMCAL_LENGTH                     equ 0004h
GMCAL2_IGMCAL_MASK                       equ 00F0h

// Register: DCSCAL1
#define DCSCAL1 DCSCAL1
DCSCAL1                                  equ 0198h
// bitfield definitions
DCSCAL1_DCSCAL1_POSN                     equ 0000h
DCSCAL1_DCSCAL1_POSITION                 equ 0000h
DCSCAL1_DCSCAL1_SIZE                     equ 0007h
DCSCAL1_DCSCAL1_LENGTH                   equ 0007h
DCSCAL1_DCSCAL1_MASK                     equ 007Fh

// Register: DACCAL1
#define DACCAL1 DACCAL1
DACCAL1                                  equ 0198h
// bitfield definitions
DACCAL1_VDACCAL_POSN                     equ 0000h
DACCAL1_VDACCAL_POSITION                 equ 0000h
DACCAL1_VDACCAL_SIZE                     equ 0004h
DACCAL1_VDACCAL_LENGTH                   equ 0004h
DACCAL1_VDACCAL_MASK                     equ 000Fh
DACCAL1_IDACCAL_POSN                     equ 0004h
DACCAL1_IDACCAL_POSITION                 equ 0004h
DACCAL1_IDACCAL_SIZE                     equ 0004h
DACCAL1_IDACCAL_LENGTH                   equ 0004h
DACCAL1_IDACCAL_MASK                     equ 00F0h

// Register: DCSCAL2
#define DCSCAL2 DCSCAL2
DCSCAL2                                  equ 0199h
// bitfield definitions
DCSCAL2_DCSCAL2_POSN                     equ 0000h
DCSCAL2_DCSCAL2_POSITION                 equ 0000h
DCSCAL2_DCSCAL2_SIZE                     equ 0007h
DCSCAL2_DCSCAL2_LENGTH                   equ 0007h
DCSCAL2_DCSCAL2_MASK                     equ 007Fh

// Register: DACCAL2
#define DACCAL2 DACCAL2
DACCAL2                                  equ 0199h
// bitfield definitions
DACCAL2_VDACCAL_POSN                     equ 0000h
DACCAL2_VDACCAL_POSITION                 equ 0000h
DACCAL2_VDACCAL_SIZE                     equ 0004h
DACCAL2_VDACCAL_LENGTH                   equ 0004h
DACCAL2_VDACCAL_MASK                     equ 000Fh
DACCAL2_IDACCAL_POSN                     equ 0004h
DACCAL2_IDACCAL_POSITION                 equ 0004h
DACCAL2_IDACCAL_SIZE                     equ 0004h
DACCAL2_IDACCAL_LENGTH                   equ 0004h
DACCAL2_IDACCAL_MASK                     equ 00F0h

// Register: ADBT
#define ADBT ADBT
ADBT                                     equ 019Ah
// bitfield definitions
ADBT_ADBT_POSN                           equ 0004h
ADBT_ADBT_POSITION                       equ 0004h
ADBT_ADBT_SIZE                           equ 0004h
ADBT_ADBT_LENGTH                         equ 0004h
ADBT_ADBT_MASK                           equ 00F0h

// Register: EACAL1
#define EACAL1 EACAL1
EACAL1                                   equ 019Ah
// bitfield definitions
EACAL1_VEACAL_POSN                       equ 0000h
EACAL1_VEACAL_POSITION                   equ 0000h
EACAL1_VEACAL_SIZE                       equ 0004h
EACAL1_VEACAL_LENGTH                     equ 0004h
EACAL1_VEACAL_MASK                       equ 000Fh
EACAL1_IEACAL_POSN                       equ 0004h
EACAL1_IEACAL_POSITION                   equ 0004h
EACAL1_IEACAL_SIZE                       equ 0004h
EACAL1_IEACAL_LENGTH                     equ 0004h
EACAL1_IEACAL_MASK                       equ 00F0h

// Register: DACBGRCAL
#define DACBGRCAL DACBGRCAL
DACBGRCAL                                equ 019Bh
// bitfield definitions
DACBGRCAL_BGRT_POSN                      equ 0000h
DACBGRCAL_BGRT_POSITION                  equ 0000h
DACBGRCAL_BGRT_SIZE                      equ 0004h
DACBGRCAL_BGRT_LENGTH                    equ 0004h
DACBGRCAL_BGRT_MASK                      equ 000Fh
DACBGRCAL_DACT_POSN                      equ 0004h
DACBGRCAL_DACT_POSITION                  equ 0004h
DACBGRCAL_DACT_SIZE                      equ 0002h
DACBGRCAL_DACT_LENGTH                    equ 0002h
DACBGRCAL_DACT_MASK                      equ 0030h

// Register: PDSCAL
#define PDSCAL PDSCAL
PDSCAL                                   equ 019Ch
// bitfield definitions
PDSCAL_PDST_POSN                         equ 0000h
PDSCAL_PDST_POSITION                     equ 0000h
PDSCAL_PDST_SIZE                         equ 0006h
PDSCAL_PDST_LENGTH                       equ 0006h
PDSCAL_PDST_MASK                         equ 003Fh

// Register: VRCAL
#define VRCAL VRCAL
VRCAL                                    equ 019Dh
// bitfield definitions
VRCAL_VRCAL_POSN                         equ 0000h
VRCAL_VRCAL_POSITION                     equ 0000h
VRCAL_VRCAL_SIZE                         equ 0006h
VRCAL_VRCAL_LENGTH                       equ 0006h
VRCAL_VRCAL_MASK                         equ 003Fh

// Register: OSCCAL
#define OSCCAL OSCCAL
OSCCAL                                   equ 019Eh
// bitfield definitions
OSCCAL_FCALT_POSN                        equ 0000h
OSCCAL_FCALT_POSITION                    equ 0000h
OSCCAL_FCALT_SIZE                        equ 0007h
OSCCAL_FCALT_LENGTH                      equ 0007h
OSCCAL_FCALT_MASK                        equ 007Fh

// Register: ATSTCON
#define ATSTCON ATSTCON
ATSTCON                                  equ 019Fh
// bitfield definitions
ATSTCON_TMPTBY_POSN                      equ 0000h
ATSTCON_TMPTBY_POSITION                  equ 0000h
ATSTCON_TMPTBY_SIZE                      equ 0001h
ATSTCON_TMPTBY_LENGTH                    equ 0001h
ATSTCON_TMPTBY_MASK                      equ 0001h
ATSTCON_DRUVBY_POSN                      equ 0001h
ATSTCON_DRUVBY_POSITION                  equ 0001h
ATSTCON_DRUVBY_SIZE                      equ 0001h
ATSTCON_DRUVBY_LENGTH                    equ 0001h
ATSTCON_DRUVBY_MASK                      equ 0002h
ATSTCON_DCSG1X_POSN                      equ 0002h
ATSTCON_DCSG1X_POSITION                  equ 0002h
ATSTCON_DCSG1X_SIZE                      equ 0001h
ATSTCON_DCSG1X_LENGTH                    equ 0001h
ATSTCON_DCSG1X_MASK                      equ 0004h
ATSTCON_SWFRQOR_POSN                     equ 0004h
ATSTCON_SWFRQOR_POSITION                 equ 0004h
ATSTCON_SWFRQOR_SIZE                     equ 0001h
ATSTCON_SWFRQOR_LENGTH                   equ 0001h
ATSTCON_SWFRQOR_MASK                     equ 0010h
ATSTCON_TSTGM_POSN                       equ 0007h
ATSTCON_TSTGM_POSITION                   equ 0007h
ATSTCON_TSTGM_SIZE                       equ 0001h
ATSTCON_TSTGM_LENGTH                     equ 0001h
ATSTCON_TSTGM_MASK                       equ 0080h

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
#define ANAOEN                           BANKMASK(ABECON1), 0
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSB4                            BANKMASK(ANSELB), 4
#define BCLIE                            BANKMASK(PIE1), 5
#define BCLIF                            BANKMASK(PIR1), 5
#define BF                               BANKMASK(SSPSTAT), 0
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
#define DC                               BANKMASK(STATUS), 1
#define DCHSEL0                          BANKMASK(ABECON1), 4
#define DCHSEL1                          BANKMASK(ABECON1), 5
#define DCSG1X                           BANKMASK(ATSTCON), 2
#define DHEN                             BANKMASK(SSPCON3), 0
#define DIGOEN                           BANKMASK(ABECON1), 7
#define DRUVBY                           BANKMASK(ATSTCON), 1
#define DRUVIE                           BANKMASK(PIE2), 2
#define DRUVIF                           BANKMASK(PIR2), 2
#define DRUVSEL                          BANKMASK(ABECON1), 3
#define D_nA                             BANKMASK(SSPSTAT), 5
#define EA1DIS1                          BANKMASK(ABECON1), 2
#define EA1DIS2                          BANKMASK(ABECON2), 2
#define EA2DIS1                          BANKMASK(ABECON1), 1
#define EA2DIS2                          BANKMASK(ABECON2), 1
#define GCEN                             BANKMASK(SSPCON2), 7
#define GCTRL                            BANKMASK(ABECON1), 6
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
#define GPB4                             BANKMASK(PORTGPB), 4
#define GPB5                             BANKMASK(PORTGPB), 5
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
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCE                             BANKMASK(INTCON), 3
#define IOCF                             BANKMASK(INTCON), 0
#define IS1PUEN                          BANKMASK(PE1), 3
#define IS2PUEN                          BANKMASK(PE1), 2
#define IVGD1IE                          BANKMASK(PIE2), 7
#define IVGD1IF                          BANKMASK(PIR2), 7
#define IVGD2IE                          BANKMASK(PIE2), 5
#define IVGD2IF                          BANKMASK(PIR2), 5
#define LDO_LP                           BANKMASK(PE1), 0
#define LDO_LV                           BANKMASK(PE1), 1
#define OTIE                             BANKMASK(PIE1), 7
#define OTIF                             BANKMASK(PIR1), 7
#define OVLOEN                           BANKMASK(VINCON), 3
#define OVLOIE                           BANKMASK(PIE2), 1
#define OVLOIF                           BANKMASK(PIR2), 1
#define OVLOINTN                         BANKMASK(VINCON), 0
#define OVLOINTP                         BANKMASK(VINCON), 1
#define OVLOOUT                          BANKMASK(VINCON), 2
#define PCIE                             BANKMASK(SSPCON3), 6
#define PDRV1EN                          BANKMASK(PE1), 7
#define PDRV2EN                          BANKMASK(PE1), 6
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
#define RA5                              BANKMASK(PORTGPA), 5
#define RA6                              BANKMASK(PORTGPA), 6
#define RA7                              BANKMASK(PORTGPA), 7
#define RB0                              BANKMASK(PORTGPB), 0
#define RB1                              BANKMASK(PORTGPB), 1
#define RB2                              BANKMASK(PORTGPB), 2
#define RB4                              BANKMASK(PORTGPB), 4
#define RB5                              BANKMASK(PORTGPB), 5
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
#define SSPEN                            BANKMASK(SSPCON1), 5
#define SSPIE                            BANKMASK(PIE1), 4
#define SSPIF                            BANKMASK(PIR1), 4
#define SSPM0                            BANKMASK(SSPCON1), 0
#define SSPM1                            BANKMASK(SSPCON1), 1
#define SSPM2                            BANKMASK(SSPCON1), 2
#define SSPM3                            BANKMASK(SSPCON1), 3
#define SSPOV                            BANKMASK(SSPCON1), 6
#define SWFRQOR                          BANKMASK(ATSTCON), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define TMPTBY                           BANKMASK(ATSTCON), 0
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
#define TRISB4                           BANKMASK(TRISGPB), 4
#define TRISB5                           BANKMASK(TRISGPB), 5
#define TSTGM                            BANKMASK(ATSTCON), 7
#define TSTOT                            BANKMASK(TTCAL), 7
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define UA                               BANKMASK(SSPSTAT), 1
#define UVLOEN                           BANKMASK(VINCON), 7
#define UVLOIE                           BANKMASK(PIE2), 0
#define UVLOIF                           BANKMASK(PIR2), 0
#define UVLOINTN                         BANKMASK(VINCON), 4
#define UVLOINTP                         BANKMASK(VINCON), 5
#define UVLOOUT                          BANKMASK(VINCON), 6
#define VDDUV0                           BANKMASK(VDDCON), 0
#define VDDUV1                           BANKMASK(VDDCON), 1
#define VDDUVEN                          BANKMASK(VDDCON), 7
#define VDDUVIE                          BANKMASK(PIE2), 3
#define VDDUVIF                          BANKMASK(PIR2), 3
#define VDDUVINTN                        BANKMASK(VDDCON), 4
#define VDDUVINTP                        BANKMASK(VDDCON), 5
#define VDDUVOUT                         BANKMASK(VDDCON), 6
#define WCOL                             BANKMASK(SSPCON1), 7
#define WPUA0                            BANKMASK(WPUGPA), 0
#define WPUA1                            BANKMASK(WPUGPA), 1
#define WPUA2                            BANKMASK(WPUGPA), 2
#define WPUA3                            BANKMASK(WPUGPA), 3
#define WPUA5                            BANKMASK(WPUGPA), 5
#define WPUA6                            BANKMASK(WPUGPA), 6
#define WPUA7                            BANKMASK(WPUGPA), 7
#define WPUB0                            BANKMASK(WPUGPB), 0
#define WPUB4                            BANKMASK(WPUGPB), 4
#define WPUB5                            BANKMASK(WPUGPB), 5
#define WPUGPA0                          BANKMASK(WPUGPA), 0
#define WPUGPA1                          BANKMASK(WPUGPA), 1
#define WPUGPA2                          BANKMASK(WPUGPA), 2
#define WPUGPA3                          BANKMASK(WPUGPA), 3
#define WPUGPA5                          BANKMASK(WPUGPA), 5
#define WPUGPA6                          BANKMASK(WPUGPA), 6
#define WPUGPA7                          BANKMASK(WPUGPA), 7
#define WPUGPB0                          BANKMASK(WPUGPB), 0
#define WPUGPB4                          BANKMASK(WPUGPB), 4
#define WPUGPB5                          BANKMASK(WPUGPB), 5
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define ZERO                             BANKMASK(STATUS), 2
#define nPD                              BANKMASK(STATUS), 3
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

#endif // _MCP19214_INC_
