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

#ifndef _PIC12F609_INC_
#define _PIC12F609_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC12F609
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

// Register: GPIO
#define GPIO GPIO
GPIO                                     equ 0005h
// bitfield definitions
GPIO_GP0_POSN                            equ 0000h
GPIO_GP0_POSITION                        equ 0000h
GPIO_GP0_SIZE                            equ 0001h
GPIO_GP0_LENGTH                          equ 0001h
GPIO_GP0_MASK                            equ 0001h
GPIO_GP1_POSN                            equ 0001h
GPIO_GP1_POSITION                        equ 0001h
GPIO_GP1_SIZE                            equ 0001h
GPIO_GP1_LENGTH                          equ 0001h
GPIO_GP1_MASK                            equ 0002h
GPIO_GP2_POSN                            equ 0002h
GPIO_GP2_POSITION                        equ 0002h
GPIO_GP2_SIZE                            equ 0001h
GPIO_GP2_LENGTH                          equ 0001h
GPIO_GP2_MASK                            equ 0004h
GPIO_GP3_POSN                            equ 0003h
GPIO_GP3_POSITION                        equ 0003h
GPIO_GP3_SIZE                            equ 0001h
GPIO_GP3_LENGTH                          equ 0001h
GPIO_GP3_MASK                            equ 0008h
GPIO_GP4_POSN                            equ 0004h
GPIO_GP4_POSITION                        equ 0004h
GPIO_GP4_SIZE                            equ 0001h
GPIO_GP4_LENGTH                          equ 0001h
GPIO_GP4_MASK                            equ 0010h
GPIO_GP5_POSN                            equ 0005h
GPIO_GP5_POSITION                        equ 0005h
GPIO_GP5_SIZE                            equ 0001h
GPIO_GP5_LENGTH                          equ 0001h
GPIO_GP5_MASK                            equ 0020h
GPIO_GPIO0_POSN                          equ 0000h
GPIO_GPIO0_POSITION                      equ 0000h
GPIO_GPIO0_SIZE                          equ 0001h
GPIO_GPIO0_LENGTH                        equ 0001h
GPIO_GPIO0_MASK                          equ 0001h
GPIO_GPIO1_POSN                          equ 0001h
GPIO_GPIO1_POSITION                      equ 0001h
GPIO_GPIO1_SIZE                          equ 0001h
GPIO_GPIO1_LENGTH                        equ 0001h
GPIO_GPIO1_MASK                          equ 0002h
GPIO_GPIO2_POSN                          equ 0002h
GPIO_GPIO2_POSITION                      equ 0002h
GPIO_GPIO2_SIZE                          equ 0001h
GPIO_GPIO2_LENGTH                        equ 0001h
GPIO_GPIO2_MASK                          equ 0004h
GPIO_GPIO3_POSN                          equ 0003h
GPIO_GPIO3_POSITION                      equ 0003h
GPIO_GPIO3_SIZE                          equ 0001h
GPIO_GPIO3_LENGTH                        equ 0001h
GPIO_GPIO3_MASK                          equ 0008h
GPIO_GPIO4_POSN                          equ 0004h
GPIO_GPIO4_POSITION                      equ 0004h
GPIO_GPIO4_SIZE                          equ 0001h
GPIO_GPIO4_LENGTH                        equ 0001h
GPIO_GPIO4_MASK                          equ 0010h
GPIO_GPIO5_POSN                          equ 0005h
GPIO_GPIO5_POSITION                      equ 0005h
GPIO_GPIO5_SIZE                          equ 0001h
GPIO_GPIO5_LENGTH                        equ 0001h
GPIO_GPIO5_MASK                          equ 0020h
GPIO_RA0_POSN                            equ 0000h
GPIO_RA0_POSITION                        equ 0000h
GPIO_RA0_SIZE                            equ 0001h
GPIO_RA0_LENGTH                          equ 0001h
GPIO_RA0_MASK                            equ 0001h
GPIO_RA1_POSN                            equ 0001h
GPIO_RA1_POSITION                        equ 0001h
GPIO_RA1_SIZE                            equ 0001h
GPIO_RA1_LENGTH                          equ 0001h
GPIO_RA1_MASK                            equ 0002h
GPIO_RA2_POSN                            equ 0002h
GPIO_RA2_POSITION                        equ 0002h
GPIO_RA2_SIZE                            equ 0001h
GPIO_RA2_LENGTH                          equ 0001h
GPIO_RA2_MASK                            equ 0004h
GPIO_RA3_POSN                            equ 0003h
GPIO_RA3_POSITION                        equ 0003h
GPIO_RA3_SIZE                            equ 0001h
GPIO_RA3_LENGTH                          equ 0001h
GPIO_RA3_MASK                            equ 0008h
GPIO_RA4_POSN                            equ 0004h
GPIO_RA4_POSITION                        equ 0004h
GPIO_RA4_SIZE                            equ 0001h
GPIO_RA4_LENGTH                          equ 0001h
GPIO_RA4_MASK                            equ 0010h
GPIO_RA5_POSN                            equ 0005h
GPIO_RA5_POSITION                        equ 0005h
GPIO_RA5_SIZE                            equ 0001h
GPIO_RA5_LENGTH                          equ 0001h
GPIO_RA5_MASK                            equ 0020h

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 000Bh
// bitfield definitions
INTCON_GPIF_POSN                         equ 0000h
INTCON_GPIF_POSITION                     equ 0000h
INTCON_GPIF_SIZE                         equ 0001h
INTCON_GPIF_LENGTH                       equ 0001h
INTCON_GPIF_MASK                         equ 0001h
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
INTCON_GPIE_POSN                         equ 0003h
INTCON_GPIE_POSITION                     equ 0003h
INTCON_GPIE_SIZE                         equ 0001h
INTCON_GPIE_LENGTH                       equ 0001h
INTCON_GPIE_MASK                         equ 0008h
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
PIR1_C1IF_POSN                           equ 0003h
PIR1_C1IF_POSITION                       equ 0003h
PIR1_C1IF_SIZE                           equ 0001h
PIR1_C1IF_LENGTH                         equ 0001h
PIR1_C1IF_MASK                           equ 0008h
PIR1_T1IF_POSN                           equ 0000h
PIR1_T1IF_POSITION                       equ 0000h
PIR1_T1IF_SIZE                           equ 0001h
PIR1_T1IF_LENGTH                         equ 0001h
PIR1_T1IF_MASK                           equ 0001h
PIR1_CMIF_POSN                           equ 0003h
PIR1_CMIF_POSITION                       equ 0003h
PIR1_CMIF_SIZE                           equ 0001h
PIR1_CMIF_LENGTH                         equ 0001h
PIR1_CMIF_MASK                           equ 0008h

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
T1CON_TMR1CS_POSN                        equ 0001h
T1CON_TMR1CS_POSITION                    equ 0001h
T1CON_TMR1CS_SIZE                        equ 0001h
T1CON_TMR1CS_LENGTH                      equ 0001h
T1CON_TMR1CS_MASK                        equ 0002h
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
T1CON_TMR1GE_POSN                        equ 0006h
T1CON_TMR1GE_POSITION                    equ 0006h
T1CON_TMR1GE_SIZE                        equ 0001h
T1CON_TMR1GE_LENGTH                      equ 0001h
T1CON_TMR1GE_MASK                        equ 0040h
T1CON_T1GINV_POSN                        equ 0007h
T1CON_T1GINV_POSITION                    equ 0007h
T1CON_T1GINV_SIZE                        equ 0001h
T1CON_T1GINV_LENGTH                      equ 0001h
T1CON_T1GINV_MASK                        equ 0080h
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

// Register: VRCON
#define VRCON VRCON
VRCON                                    equ 0019h
// bitfield definitions
VRCON_VR_POSN                            equ 0000h
VRCON_VR_POSITION                        equ 0000h
VRCON_VR_SIZE                            equ 0004h
VRCON_VR_LENGTH                          equ 0004h
VRCON_VR_MASK                            equ 000Fh
VRCON_FBREN_POSN                         equ 0004h
VRCON_FBREN_POSITION                     equ 0004h
VRCON_FBREN_SIZE                         equ 0001h
VRCON_FBREN_LENGTH                       equ 0001h
VRCON_FBREN_MASK                         equ 0010h
VRCON_VRR_POSN                           equ 0005h
VRCON_VRR_POSITION                       equ 0005h
VRCON_VRR_SIZE                           equ 0001h
VRCON_VRR_LENGTH                         equ 0001h
VRCON_VRR_MASK                           equ 0020h
VRCON_C1VREN_POSN                        equ 0007h
VRCON_C1VREN_POSITION                    equ 0007h
VRCON_C1VREN_SIZE                        equ 0001h
VRCON_C1VREN_LENGTH                      equ 0001h
VRCON_C1VREN_MASK                        equ 0080h
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
VRCON_FVREN_POSN                         equ 0004h
VRCON_FVREN_POSITION                     equ 0004h
VRCON_FVREN_SIZE                         equ 0001h
VRCON_FVREN_LENGTH                       equ 0001h
VRCON_FVREN_MASK                         equ 0010h
VRCON_CMVREN_POSN                        equ 0007h
VRCON_CMVREN_POSITION                    equ 0007h
VRCON_CMVREN_SIZE                        equ 0001h
VRCON_CMVREN_LENGTH                      equ 0001h
VRCON_CMVREN_MASK                        equ 0080h
VRCON_VP6EN_POSN                         equ 0004h
VRCON_VP6EN_POSITION                     equ 0004h
VRCON_VP6EN_SIZE                         equ 0001h
VRCON_VP6EN_LENGTH                       equ 0001h
VRCON_VP6EN_MASK                         equ 0010h

// Register: CMCON0
#define CMCON0 CMCON0
CMCON0                                   equ 001Ah
// bitfield definitions
CMCON0_C1CH_POSN                         equ 0000h
CMCON0_C1CH_POSITION                     equ 0000h
CMCON0_C1CH_SIZE                         equ 0001h
CMCON0_C1CH_LENGTH                       equ 0001h
CMCON0_C1CH_MASK                         equ 0001h
CMCON0_C1R_POSN                          equ 0002h
CMCON0_C1R_POSITION                      equ 0002h
CMCON0_C1R_SIZE                          equ 0001h
CMCON0_C1R_LENGTH                        equ 0001h
CMCON0_C1R_MASK                          equ 0004h
CMCON0_C1POL_POSN                        equ 0004h
CMCON0_C1POL_POSITION                    equ 0004h
CMCON0_C1POL_SIZE                        equ 0001h
CMCON0_C1POL_LENGTH                      equ 0001h
CMCON0_C1POL_MASK                        equ 0010h
CMCON0_C1OE_POSN                         equ 0005h
CMCON0_C1OE_POSITION                     equ 0005h
CMCON0_C1OE_SIZE                         equ 0001h
CMCON0_C1OE_LENGTH                       equ 0001h
CMCON0_C1OE_MASK                         equ 0020h
CMCON0_C1OUT_POSN                        equ 0006h
CMCON0_C1OUT_POSITION                    equ 0006h
CMCON0_C1OUT_SIZE                        equ 0001h
CMCON0_C1OUT_LENGTH                      equ 0001h
CMCON0_C1OUT_MASK                        equ 0040h
CMCON0_C1ON_POSN                         equ 0007h
CMCON0_C1ON_POSITION                     equ 0007h
CMCON0_C1ON_SIZE                         equ 0001h
CMCON0_C1ON_LENGTH                       equ 0001h
CMCON0_C1ON_MASK                         equ 0080h
CMCON0_C1CH0_POSN                        equ 0000h
CMCON0_C1CH0_POSITION                    equ 0000h
CMCON0_C1CH0_SIZE                        equ 0001h
CMCON0_C1CH0_LENGTH                      equ 0001h
CMCON0_C1CH0_MASK                        equ 0001h
CMCON0_CMR_POSN                          equ 0002h
CMCON0_CMR_POSITION                      equ 0002h
CMCON0_CMR_SIZE                          equ 0001h
CMCON0_CMR_LENGTH                        equ 0001h
CMCON0_CMR_MASK                          equ 0004h
CMCON0_CMPOL_POSN                        equ 0004h
CMCON0_CMPOL_POSITION                    equ 0004h
CMCON0_CMPOL_SIZE                        equ 0001h
CMCON0_CMPOL_LENGTH                      equ 0001h
CMCON0_CMPOL_MASK                        equ 0010h
CMCON0_CMOE_POSN                         equ 0005h
CMCON0_CMOE_POSITION                     equ 0005h
CMCON0_CMOE_SIZE                         equ 0001h
CMCON0_CMOE_LENGTH                       equ 0001h
CMCON0_CMOE_MASK                         equ 0020h
CMCON0_COUT_POSN                         equ 0006h
CMCON0_COUT_POSITION                     equ 0006h
CMCON0_COUT_SIZE                         equ 0001h
CMCON0_COUT_LENGTH                       equ 0001h
CMCON0_COUT_MASK                         equ 0040h
CMCON0_CMON_POSN                         equ 0007h
CMCON0_CMON_POSITION                     equ 0007h
CMCON0_CMON_SIZE                         equ 0001h
CMCON0_CMON_LENGTH                       equ 0001h
CMCON0_CMON_MASK                         equ 0080h
CMCON0_CMCH_POSN                         equ 0000h
CMCON0_CMCH_POSITION                     equ 0000h
CMCON0_CMCH_SIZE                         equ 0001h
CMCON0_CMCH_LENGTH                       equ 0001h
CMCON0_CMCH_MASK                         equ 0001h

// Register: CMCON1
#define CMCON1 CMCON1
CMCON1                                   equ 001Ch
// bitfield definitions
CMCON1_C1SYNC_POSN                       equ 0000h
CMCON1_C1SYNC_POSITION                   equ 0000h
CMCON1_C1SYNC_SIZE                       equ 0001h
CMCON1_C1SYNC_LENGTH                     equ 0001h
CMCON1_C1SYNC_MASK                       equ 0001h
CMCON1_T1GSS_POSN                        equ 0001h
CMCON1_T1GSS_POSITION                    equ 0001h
CMCON1_T1GSS_SIZE                        equ 0001h
CMCON1_T1GSS_LENGTH                      equ 0001h
CMCON1_T1GSS_MASK                        equ 0002h
CMCON1_C1HYS_POSN                        equ 0003h
CMCON1_C1HYS_POSITION                    equ 0003h
CMCON1_C1HYS_SIZE                        equ 0001h
CMCON1_C1HYS_LENGTH                      equ 0001h
CMCON1_C1HYS_MASK                        equ 0008h
CMCON1_T1ACS_POSN                        equ 0004h
CMCON1_T1ACS_POSITION                    equ 0004h
CMCON1_T1ACS_SIZE                        equ 0001h
CMCON1_T1ACS_LENGTH                      equ 0001h
CMCON1_T1ACS_MASK                        equ 0010h
CMCON1_CMSYNC_POSN                       equ 0000h
CMCON1_CMSYNC_POSITION                   equ 0000h
CMCON1_CMSYNC_SIZE                       equ 0001h
CMCON1_CMSYNC_LENGTH                     equ 0001h
CMCON1_CMSYNC_MASK                       equ 0001h
CMCON1_CMHYS_POSN                        equ 0003h
CMCON1_CMHYS_POSITION                    equ 0003h
CMCON1_CMHYS_SIZE                        equ 0001h
CMCON1_CMHYS_LENGTH                      equ 0001h
CMCON1_CMHYS_MASK                        equ 0008h

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
OPTION_REG_nGPPU_POSN                    equ 0007h
OPTION_REG_nGPPU_POSITION                equ 0007h
OPTION_REG_nGPPU_SIZE                    equ 0001h
OPTION_REG_nGPPU_LENGTH                  equ 0001h
OPTION_REG_nGPPU_MASK                    equ 0080h
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

// Register: TRISIO
#define TRISIO TRISIO
TRISIO                                   equ 0085h
// bitfield definitions
TRISIO_TRISIO0_POSN                      equ 0000h
TRISIO_TRISIO0_POSITION                  equ 0000h
TRISIO_TRISIO0_SIZE                      equ 0001h
TRISIO_TRISIO0_LENGTH                    equ 0001h
TRISIO_TRISIO0_MASK                      equ 0001h
TRISIO_TRISIO1_POSN                      equ 0001h
TRISIO_TRISIO1_POSITION                  equ 0001h
TRISIO_TRISIO1_SIZE                      equ 0001h
TRISIO_TRISIO1_LENGTH                    equ 0001h
TRISIO_TRISIO1_MASK                      equ 0002h
TRISIO_TRISIO2_POSN                      equ 0002h
TRISIO_TRISIO2_POSITION                  equ 0002h
TRISIO_TRISIO2_SIZE                      equ 0001h
TRISIO_TRISIO2_LENGTH                    equ 0001h
TRISIO_TRISIO2_MASK                      equ 0004h
TRISIO_TRISIO3_POSN                      equ 0003h
TRISIO_TRISIO3_POSITION                  equ 0003h
TRISIO_TRISIO3_SIZE                      equ 0001h
TRISIO_TRISIO3_LENGTH                    equ 0001h
TRISIO_TRISIO3_MASK                      equ 0008h
TRISIO_TRISIO4_POSN                      equ 0004h
TRISIO_TRISIO4_POSITION                  equ 0004h
TRISIO_TRISIO4_SIZE                      equ 0001h
TRISIO_TRISIO4_LENGTH                    equ 0001h
TRISIO_TRISIO4_MASK                      equ 0010h
TRISIO_TRISIO5_POSN                      equ 0005h
TRISIO_TRISIO5_POSITION                  equ 0005h
TRISIO_TRISIO5_SIZE                      equ 0001h
TRISIO_TRISIO5_LENGTH                    equ 0001h
TRISIO_TRISIO5_MASK                      equ 0020h
TRISIO_TRISA0_POSN                       equ 0000h
TRISIO_TRISA0_POSITION                   equ 0000h
TRISIO_TRISA0_SIZE                       equ 0001h
TRISIO_TRISA0_LENGTH                     equ 0001h
TRISIO_TRISA0_MASK                       equ 0001h
TRISIO_TRISA1_POSN                       equ 0001h
TRISIO_TRISA1_POSITION                   equ 0001h
TRISIO_TRISA1_SIZE                       equ 0001h
TRISIO_TRISA1_LENGTH                     equ 0001h
TRISIO_TRISA1_MASK                       equ 0002h
TRISIO_TRISA2_POSN                       equ 0002h
TRISIO_TRISA2_POSITION                   equ 0002h
TRISIO_TRISA2_SIZE                       equ 0001h
TRISIO_TRISA2_LENGTH                     equ 0001h
TRISIO_TRISA2_MASK                       equ 0004h
TRISIO_TRISA3_POSN                       equ 0003h
TRISIO_TRISA3_POSITION                   equ 0003h
TRISIO_TRISA3_SIZE                       equ 0001h
TRISIO_TRISA3_LENGTH                     equ 0001h
TRISIO_TRISA3_MASK                       equ 0008h
TRISIO_TRISA4_POSN                       equ 0004h
TRISIO_TRISA4_POSITION                   equ 0004h
TRISIO_TRISA4_SIZE                       equ 0001h
TRISIO_TRISA4_LENGTH                     equ 0001h
TRISIO_TRISA4_MASK                       equ 0010h
TRISIO_TRISA5_POSN                       equ 0005h
TRISIO_TRISA5_POSITION                   equ 0005h
TRISIO_TRISA5_SIZE                       equ 0001h
TRISIO_TRISA5_LENGTH                     equ 0001h
TRISIO_TRISA5_MASK                       equ 0020h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 008Ch
// bitfield definitions
PIE1_TMR1IE_POSN                         equ 0000h
PIE1_TMR1IE_POSITION                     equ 0000h
PIE1_TMR1IE_SIZE                         equ 0001h
PIE1_TMR1IE_LENGTH                       equ 0001h
PIE1_TMR1IE_MASK                         equ 0001h
PIE1_C1IE_POSN                           equ 0003h
PIE1_C1IE_POSITION                       equ 0003h
PIE1_C1IE_SIZE                           equ 0001h
PIE1_C1IE_LENGTH                         equ 0001h
PIE1_C1IE_MASK                           equ 0008h
PIE1_T1IE_POSN                           equ 0000h
PIE1_T1IE_POSITION                       equ 0000h
PIE1_T1IE_SIZE                           equ 0001h
PIE1_T1IE_LENGTH                         equ 0001h
PIE1_T1IE_MASK                           equ 0001h
PIE1_CMIE_POSN                           equ 0003h
PIE1_CMIE_POSITION                       equ 0003h
PIE1_CMIE_SIZE                           equ 0001h
PIE1_CMIE_LENGTH                         equ 0001h
PIE1_CMIE_MASK                           equ 0008h

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
PCON_nBOD_POSN                           equ 0000h
PCON_nBOD_POSITION                       equ 0000h
PCON_nBOD_SIZE                           equ 0001h
PCON_nBOD_LENGTH                         equ 0001h
PCON_nBOD_MASK                           equ 0001h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0090h
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0005h
OSCTUNE_TUN_LENGTH                       equ 0005h
OSCTUNE_TUN_MASK                         equ 001Fh
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

// Register: WPU
#define WPU WPU
WPU                                      equ 0095h
// bitfield definitions
WPU_WPUA0_POSN                           equ 0000h
WPU_WPUA0_POSITION                       equ 0000h
WPU_WPUA0_SIZE                           equ 0001h
WPU_WPUA0_LENGTH                         equ 0001h
WPU_WPUA0_MASK                           equ 0001h
WPU_WPUA1_POSN                           equ 0001h
WPU_WPUA1_POSITION                       equ 0001h
WPU_WPUA1_SIZE                           equ 0001h
WPU_WPUA1_LENGTH                         equ 0001h
WPU_WPUA1_MASK                           equ 0002h
WPU_WPUA2_POSN                           equ 0002h
WPU_WPUA2_POSITION                       equ 0002h
WPU_WPUA2_SIZE                           equ 0001h
WPU_WPUA2_LENGTH                         equ 0001h
WPU_WPUA2_MASK                           equ 0004h
WPU_WPUA4_POSN                           equ 0004h
WPU_WPUA4_POSITION                       equ 0004h
WPU_WPUA4_SIZE                           equ 0001h
WPU_WPUA4_LENGTH                         equ 0001h
WPU_WPUA4_MASK                           equ 0010h
WPU_WPUA5_POSN                           equ 0005h
WPU_WPUA5_POSITION                       equ 0005h
WPU_WPUA5_SIZE                           equ 0001h
WPU_WPUA5_LENGTH                         equ 0001h
WPU_WPUA5_MASK                           equ 0020h
WPU_WPU0_POSN                            equ 0000h
WPU_WPU0_POSITION                        equ 0000h
WPU_WPU0_SIZE                            equ 0001h
WPU_WPU0_LENGTH                          equ 0001h
WPU_WPU0_MASK                            equ 0001h
WPU_WPU1_POSN                            equ 0001h
WPU_WPU1_POSITION                        equ 0001h
WPU_WPU1_SIZE                            equ 0001h
WPU_WPU1_LENGTH                          equ 0001h
WPU_WPU1_MASK                            equ 0002h
WPU_WPU2_POSN                            equ 0002h
WPU_WPU2_POSITION                        equ 0002h
WPU_WPU2_SIZE                            equ 0001h
WPU_WPU2_LENGTH                          equ 0001h
WPU_WPU2_MASK                            equ 0004h
WPU_WPU4_POSN                            equ 0004h
WPU_WPU4_POSITION                        equ 0004h
WPU_WPU4_SIZE                            equ 0001h
WPU_WPU4_LENGTH                          equ 0001h
WPU_WPU4_MASK                            equ 0010h
WPU_WPU5_POSN                            equ 0005h
WPU_WPU5_POSITION                        equ 0005h
WPU_WPU5_SIZE                            equ 0001h
WPU_WPU5_LENGTH                          equ 0001h
WPU_WPU5_MASK                            equ 0020h

// Register: IOC
#define IOC IOC
IOC                                      equ 0096h
// bitfield definitions
IOC_IOC0_POSN                            equ 0000h
IOC_IOC0_POSITION                        equ 0000h
IOC_IOC0_SIZE                            equ 0001h
IOC_IOC0_LENGTH                          equ 0001h
IOC_IOC0_MASK                            equ 0001h
IOC_IOC1_POSN                            equ 0001h
IOC_IOC1_POSITION                        equ 0001h
IOC_IOC1_SIZE                            equ 0001h
IOC_IOC1_LENGTH                          equ 0001h
IOC_IOC1_MASK                            equ 0002h
IOC_IOC2_POSN                            equ 0002h
IOC_IOC2_POSITION                        equ 0002h
IOC_IOC2_SIZE                            equ 0001h
IOC_IOC2_LENGTH                          equ 0001h
IOC_IOC2_MASK                            equ 0004h
IOC_IOC3_POSN                            equ 0003h
IOC_IOC3_POSITION                        equ 0003h
IOC_IOC3_SIZE                            equ 0001h
IOC_IOC3_LENGTH                          equ 0001h
IOC_IOC3_MASK                            equ 0008h
IOC_IOC4_POSN                            equ 0004h
IOC_IOC4_POSITION                        equ 0004h
IOC_IOC4_SIZE                            equ 0001h
IOC_IOC4_LENGTH                          equ 0001h
IOC_IOC4_MASK                            equ 0010h
IOC_IOC5_POSN                            equ 0005h
IOC_IOC5_POSITION                        equ 0005h
IOC_IOC5_SIZE                            equ 0001h
IOC_IOC5_LENGTH                          equ 0001h
IOC_IOC5_MASK                            equ 0020h
IOC_IOCA0_POSN                           equ 0000h
IOC_IOCA0_POSITION                       equ 0000h
IOC_IOCA0_SIZE                           equ 0001h
IOC_IOCA0_LENGTH                         equ 0001h
IOC_IOCA0_MASK                           equ 0001h
IOC_IOCA1_POSN                           equ 0001h
IOC_IOCA1_POSITION                       equ 0001h
IOC_IOCA1_SIZE                           equ 0001h
IOC_IOCA1_LENGTH                         equ 0001h
IOC_IOCA1_MASK                           equ 0002h
IOC_IOCA2_POSN                           equ 0002h
IOC_IOCA2_POSITION                       equ 0002h
IOC_IOCA2_SIZE                           equ 0001h
IOC_IOCA2_LENGTH                         equ 0001h
IOC_IOCA2_MASK                           equ 0004h
IOC_IOCA3_POSN                           equ 0003h
IOC_IOCA3_POSITION                       equ 0003h
IOC_IOCA3_SIZE                           equ 0001h
IOC_IOCA3_LENGTH                         equ 0001h
IOC_IOCA3_MASK                           equ 0008h
IOC_IOCA4_POSN                           equ 0004h
IOC_IOCA4_POSITION                       equ 0004h
IOC_IOCA4_SIZE                           equ 0001h
IOC_IOCA4_LENGTH                         equ 0001h
IOC_IOCA4_MASK                           equ 0010h
IOC_IOCA5_POSN                           equ 0005h
IOC_IOCA5_POSITION                       equ 0005h
IOC_IOCA5_SIZE                           equ 0001h
IOC_IOCA5_LENGTH                         equ 0001h
IOC_IOCA5_MASK                           equ 0020h

// Register: ANSEL
#define ANSEL ANSEL
ANSEL                                    equ 009Fh
// bitfield definitions
ANSEL_ANS_POSN                           equ 0000h
ANSEL_ANS_POSITION                       equ 0000h
ANSEL_ANS_SIZE                           equ 0004h
ANSEL_ANS_LENGTH                         equ 0004h
ANSEL_ANS_MASK                           equ 000Fh
ANSEL_ADCS_POSN                          equ 0004h
ANSEL_ADCS_POSITION                      equ 0004h
ANSEL_ADCS_SIZE                          equ 0003h
ANSEL_ADCS_LENGTH                        equ 0003h
ANSEL_ADCS_MASK                          equ 0070h
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
ANSEL_ANS3_POSN                          equ 0003h
ANSEL_ANS3_POSITION                      equ 0003h
ANSEL_ANS3_SIZE                          equ 0001h
ANSEL_ANS3_LENGTH                        equ 0001h
ANSEL_ANS3_MASK                          equ 0008h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ANS0                             BANKMASK(ANSEL), 0
#define ANS1                             BANKMASK(ANSEL), 1
#define ANS3                             BANKMASK(ANSEL), 3
#define C1CH                             BANKMASK(CMCON0), 0
#define C1CH0                            BANKMASK(CMCON0), 0
#define C1HYS                            BANKMASK(CMCON1), 3
#define C1IE                             BANKMASK(PIE1), 3
#define C1IF                             BANKMASK(PIR1), 3
#define C1OE                             BANKMASK(CMCON0), 5
#define C1ON                             BANKMASK(CMCON0), 7
#define C1OUT                            BANKMASK(CMCON0), 6
#define C1POL                            BANKMASK(CMCON0), 4
#define C1R                              BANKMASK(CMCON0), 2
#define C1SYNC                           BANKMASK(CMCON1), 0
#define C1VREN                           BANKMASK(VRCON), 7
#define CARRY                            BANKMASK(STATUS), 0
#define CMCH                             BANKMASK(CMCON0), 0
#define CMHYS                            BANKMASK(CMCON1), 3
#define CMIE                             BANKMASK(PIE1), 3
#define CMIF                             BANKMASK(PIR1), 3
#define CMOE                             BANKMASK(CMCON0), 5
#define CMON                             BANKMASK(CMCON0), 7
#define CMPOL                            BANKMASK(CMCON0), 4
#define CMR                              BANKMASK(CMCON0), 2
#define CMSYNC                           BANKMASK(CMCON1), 0
#define CMVREN                           BANKMASK(VRCON), 7
#define COUT                             BANKMASK(CMCON0), 6
#define DC                               BANKMASK(STATUS), 1
#define FBREN                            BANKMASK(VRCON), 4
#define FVREN                            BANKMASK(VRCON), 4
#define GIE                              BANKMASK(INTCON), 7
#define GP0                              BANKMASK(GPIO), 0
#define GP1                              BANKMASK(GPIO), 1
#define GP2                              BANKMASK(GPIO), 2
#define GP3                              BANKMASK(GPIO), 3
#define GP4                              BANKMASK(GPIO), 4
#define GP5                              BANKMASK(GPIO), 5
#define GPIE                             BANKMASK(INTCON), 3
#define GPIF                             BANKMASK(INTCON), 0
#define GPIO0                            BANKMASK(GPIO), 0
#define GPIO1                            BANKMASK(GPIO), 1
#define GPIO2                            BANKMASK(GPIO), 2
#define GPIO3                            BANKMASK(GPIO), 3
#define GPIO4                            BANKMASK(GPIO), 4
#define GPIO5                            BANKMASK(GPIO), 5
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOC0                             BANKMASK(IOC), 0
#define IOC1                             BANKMASK(IOC), 1
#define IOC2                             BANKMASK(IOC), 2
#define IOC3                             BANKMASK(IOC), 3
#define IOC4                             BANKMASK(IOC), 4
#define IOC5                             BANKMASK(IOC), 5
#define IOCA0                            BANKMASK(IOC), 0
#define IOCA1                            BANKMASK(IOC), 1
#define IOCA2                            BANKMASK(IOC), 2
#define IOCA3                            BANKMASK(IOC), 3
#define IOCA4                            BANKMASK(IOC), 4
#define IOCA5                            BANKMASK(IOC), 5
#define PEIE                             BANKMASK(INTCON), 6
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define RA0                              BANKMASK(GPIO), 0
#define RA1                              BANKMASK(GPIO), 1
#define RA2                              BANKMASK(GPIO), 2
#define RA3                              BANKMASK(GPIO), 3
#define RA4                              BANKMASK(GPIO), 4
#define RA5                              BANKMASK(GPIO), 5
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1ACS                            BANKMASK(CMCON1), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GINV                           BANKMASK(T1CON), 7
#define T1GSS                            BANKMASK(CMCON1), 1
#define T1IE                             BANKMASK(PIE1), 0
#define T1IF                             BANKMASK(PIR1), 0
#define T1OSCEN                          BANKMASK(T1CON), 3
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR1CS                           BANKMASK(T1CON), 1
#define TMR1GE                           BANKMASK(T1CON), 6
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(T1CON), 0
#define TRISA0                           BANKMASK(TRISIO), 0
#define TRISA1                           BANKMASK(TRISIO), 1
#define TRISA2                           BANKMASK(TRISIO), 2
#define TRISA3                           BANKMASK(TRISIO), 3
#define TRISA4                           BANKMASK(TRISIO), 4
#define TRISA5                           BANKMASK(TRISIO), 5
#define TRISIO0                          BANKMASK(TRISIO), 0
#define TRISIO1                          BANKMASK(TRISIO), 1
#define TRISIO2                          BANKMASK(TRISIO), 2
#define TRISIO3                          BANKMASK(TRISIO), 3
#define TRISIO4                          BANKMASK(TRISIO), 4
#define TRISIO5                          BANKMASK(TRISIO), 5
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define VP6EN                            BANKMASK(VRCON), 4
#define VR0                              BANKMASK(VRCON), 0
#define VR1                              BANKMASK(VRCON), 1
#define VR2                              BANKMASK(VRCON), 2
#define VR3                              BANKMASK(VRCON), 3
#define VRR                              BANKMASK(VRCON), 5
#define WPU0                             BANKMASK(WPU), 0
#define WPU1                             BANKMASK(WPU), 1
#define WPU2                             BANKMASK(WPU), 2
#define WPU4                             BANKMASK(WPU), 4
#define WPU5                             BANKMASK(WPU), 5
#define WPUA0                            BANKMASK(WPU), 0
#define WPUA1                            BANKMASK(WPU), 1
#define WPUA2                            BANKMASK(WPU), 2
#define WPUA4                            BANKMASK(WPU), 4
#define WPUA5                            BANKMASK(WPU), 5
#define ZERO                             BANKMASK(STATUS), 2
#define nBOD                             BANKMASK(PCON), 0
#define nBOR                             BANKMASK(PCON), 0
#define nGPPU                            BANKMASK(OPTION_REG), 7
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
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
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC12F609_INC_
