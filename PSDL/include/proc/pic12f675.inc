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

#ifndef _PIC12F675_INC_
#define _PIC12F675_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC12F675
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
// bitfield definitions
FSR_FSR_POSN                             equ 0000h
FSR_FSR_POSITION                         equ 0000h
FSR_FSR_SIZE                             equ 0008h
FSR_FSR_LENGTH                           equ 0008h
FSR_FSR_MASK                             equ 00FFh

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
INTCON_T0IF_POSN                         equ 0002h
INTCON_T0IF_POSITION                     equ 0002h
INTCON_T0IF_SIZE                         equ 0001h
INTCON_T0IF_LENGTH                       equ 0001h
INTCON_T0IF_MASK                         equ 0004h
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
INTCON_TMR0IF_POSN                       equ 0002h
INTCON_TMR0IF_POSITION                   equ 0002h
INTCON_TMR0IF_SIZE                       equ 0001h
INTCON_TMR0IF_LENGTH                     equ 0001h
INTCON_TMR0IF_MASK                       equ 0004h
INTCON_TMR0IE_POSN                       equ 0005h
INTCON_TMR0IE_POSITION                   equ 0005h
INTCON_TMR0IE_SIZE                       equ 0001h
INTCON_TMR0IE_LENGTH                     equ 0001h
INTCON_TMR0IE_MASK                       equ 0020h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 000Ch
// bitfield definitions
PIR1_TMR1IF_POSN                         equ 0000h
PIR1_TMR1IF_POSITION                     equ 0000h
PIR1_TMR1IF_SIZE                         equ 0001h
PIR1_TMR1IF_LENGTH                       equ 0001h
PIR1_TMR1IF_MASK                         equ 0001h
PIR1_CMIF_POSN                           equ 0003h
PIR1_CMIF_POSITION                       equ 0003h
PIR1_CMIF_SIZE                           equ 0001h
PIR1_CMIF_LENGTH                         equ 0001h
PIR1_CMIF_MASK                           equ 0008h
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h
PIR1_EEIF_POSN                           equ 0007h
PIR1_EEIF_POSITION                       equ 0007h
PIR1_EEIF_SIZE                           equ 0001h
PIR1_EEIF_LENGTH                         equ 0001h
PIR1_EEIF_MASK                           equ 0080h
PIR1_T1IF_POSN                           equ 0000h
PIR1_T1IF_POSITION                       equ 0000h
PIR1_T1IF_SIZE                           equ 0001h
PIR1_T1IF_LENGTH                         equ 0001h
PIR1_T1IF_MASK                           equ 0001h

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 000Eh
// bitfield definitions
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 000Fh
// bitfield definitions
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh

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

// Register: CMCON
#define CMCON CMCON
CMCON                                    equ 0019h
// bitfield definitions
CMCON_CM_POSN                            equ 0000h
CMCON_CM_POSITION                        equ 0000h
CMCON_CM_SIZE                            equ 0003h
CMCON_CM_LENGTH                          equ 0003h
CMCON_CM_MASK                            equ 0007h
CMCON_CIS_POSN                           equ 0003h
CMCON_CIS_POSITION                       equ 0003h
CMCON_CIS_SIZE                           equ 0001h
CMCON_CIS_LENGTH                         equ 0001h
CMCON_CIS_MASK                           equ 0008h
CMCON_CINV_POSN                          equ 0004h
CMCON_CINV_POSITION                      equ 0004h
CMCON_CINV_SIZE                          equ 0001h
CMCON_CINV_LENGTH                        equ 0001h
CMCON_CINV_MASK                          equ 0010h
CMCON_COUT_POSN                          equ 0006h
CMCON_COUT_POSITION                      equ 0006h
CMCON_COUT_SIZE                          equ 0001h
CMCON_COUT_LENGTH                        equ 0001h
CMCON_COUT_MASK                          equ 0040h
CMCON_CM0_POSN                           equ 0000h
CMCON_CM0_POSITION                       equ 0000h
CMCON_CM0_SIZE                           equ 0001h
CMCON_CM0_LENGTH                         equ 0001h
CMCON_CM0_MASK                           equ 0001h
CMCON_CM1_POSN                           equ 0001h
CMCON_CM1_POSITION                       equ 0001h
CMCON_CM1_SIZE                           equ 0001h
CMCON_CM1_LENGTH                         equ 0001h
CMCON_CM1_MASK                           equ 0002h
CMCON_CM2_POSN                           equ 0002h
CMCON_CM2_POSITION                       equ 0002h
CMCON_CM2_SIZE                           equ 0001h
CMCON_CM2_LENGTH                         equ 0001h
CMCON_CM2_MASK                           equ 0004h

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 001Eh
// bitfield definitions
ADRESH_ADRESH_POSN                       equ 0000h
ADRESH_ADRESH_POSITION                   equ 0000h
ADRESH_ADRESH_SIZE                       equ 0008h
ADRESH_ADRESH_LENGTH                     equ 0008h
ADRESH_ADRESH_MASK                       equ 00FFh

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
ADCON0_CHS_SIZE                          equ 0002h
ADCON0_CHS_LENGTH                        equ 0002h
ADCON0_CHS_MASK                          equ 000Ch
ADCON0_VCFG_POSN                         equ 0006h
ADCON0_VCFG_POSITION                     equ 0006h
ADCON0_VCFG_SIZE                         equ 0001h
ADCON0_VCFG_LENGTH                       equ 0001h
ADCON0_VCFG_MASK                         equ 0040h
ADCON0_ADFM_POSN                         equ 0007h
ADCON0_ADFM_POSITION                     equ 0007h
ADCON0_ADFM_SIZE                         equ 0001h
ADCON0_ADFM_LENGTH                       equ 0001h
ADCON0_ADFM_MASK                         equ 0080h
ADCON0_GO_DONE_POSN                      equ 0001h
ADCON0_GO_DONE_POSITION                  equ 0001h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0002h
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
ADCON0_nDONE_POSN                        equ 0001h
ADCON0_nDONE_POSITION                    equ 0001h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0002h
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h

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

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 008Ch
// bitfield definitions
PIE1_TMR1IE_POSN                         equ 0000h
PIE1_TMR1IE_POSITION                     equ 0000h
PIE1_TMR1IE_SIZE                         equ 0001h
PIE1_TMR1IE_LENGTH                       equ 0001h
PIE1_TMR1IE_MASK                         equ 0001h
PIE1_CMIE_POSN                           equ 0003h
PIE1_CMIE_POSITION                       equ 0003h
PIE1_CMIE_SIZE                           equ 0001h
PIE1_CMIE_LENGTH                         equ 0001h
PIE1_CMIE_MASK                           equ 0008h
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h
PIE1_EEIE_POSN                           equ 0007h
PIE1_EEIE_POSITION                       equ 0007h
PIE1_EEIE_SIZE                           equ 0001h
PIE1_EEIE_LENGTH                         equ 0001h
PIE1_EEIE_MASK                           equ 0080h
PIE1_T1IE_POSN                           equ 0000h
PIE1_T1IE_POSITION                       equ 0000h
PIE1_T1IE_SIZE                           equ 0001h
PIE1_T1IE_LENGTH                         equ 0001h
PIE1_T1IE_MASK                           equ 0001h

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

// Register: OSCCAL
#define OSCCAL OSCCAL
OSCCAL                                   equ 0090h
// bitfield definitions
OSCCAL_CAL_POSN                          equ 0002h
OSCCAL_CAL_POSITION                      equ 0002h
OSCCAL_CAL_SIZE                          equ 0006h
OSCCAL_CAL_LENGTH                        equ 0006h
OSCCAL_CAL_MASK                          equ 00FCh
OSCCAL_CAL0_POSN                         equ 0002h
OSCCAL_CAL0_POSITION                     equ 0002h
OSCCAL_CAL0_SIZE                         equ 0001h
OSCCAL_CAL0_LENGTH                       equ 0001h
OSCCAL_CAL0_MASK                         equ 0004h
OSCCAL_CAL1_POSN                         equ 0003h
OSCCAL_CAL1_POSITION                     equ 0003h
OSCCAL_CAL1_SIZE                         equ 0001h
OSCCAL_CAL1_LENGTH                       equ 0001h
OSCCAL_CAL1_MASK                         equ 0008h
OSCCAL_CAL2_POSN                         equ 0004h
OSCCAL_CAL2_POSITION                     equ 0004h
OSCCAL_CAL2_SIZE                         equ 0001h
OSCCAL_CAL2_LENGTH                       equ 0001h
OSCCAL_CAL2_MASK                         equ 0010h
OSCCAL_CAL3_POSN                         equ 0005h
OSCCAL_CAL3_POSITION                     equ 0005h
OSCCAL_CAL3_SIZE                         equ 0001h
OSCCAL_CAL3_LENGTH                       equ 0001h
OSCCAL_CAL3_MASK                         equ 0020h
OSCCAL_CAL4_POSN                         equ 0006h
OSCCAL_CAL4_POSITION                     equ 0006h
OSCCAL_CAL4_SIZE                         equ 0001h
OSCCAL_CAL4_LENGTH                       equ 0001h
OSCCAL_CAL4_MASK                         equ 0040h
OSCCAL_CAL5_POSN                         equ 0007h
OSCCAL_CAL5_POSITION                     equ 0007h
OSCCAL_CAL5_SIZE                         equ 0001h
OSCCAL_CAL5_LENGTH                       equ 0001h
OSCCAL_CAL5_MASK                         equ 0080h

// Register: WPU
#define WPU WPU
WPU                                      equ 0095h
// bitfield definitions
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
IOC_IOCB0_POSN                           equ 0000h
IOC_IOCB0_POSITION                       equ 0000h
IOC_IOCB0_SIZE                           equ 0001h
IOC_IOCB0_LENGTH                         equ 0001h
IOC_IOCB0_MASK                           equ 0001h
IOC_IOCB1_POSN                           equ 0001h
IOC_IOCB1_POSITION                       equ 0001h
IOC_IOCB1_SIZE                           equ 0001h
IOC_IOCB1_LENGTH                         equ 0001h
IOC_IOCB1_MASK                           equ 0002h
IOC_IOCB2_POSN                           equ 0002h
IOC_IOCB2_POSITION                       equ 0002h
IOC_IOCB2_SIZE                           equ 0001h
IOC_IOCB2_LENGTH                         equ 0001h
IOC_IOCB2_MASK                           equ 0004h
IOC_IOCB3_POSN                           equ 0003h
IOC_IOCB3_POSITION                       equ 0003h
IOC_IOCB3_SIZE                           equ 0001h
IOC_IOCB3_LENGTH                         equ 0001h
IOC_IOCB3_MASK                           equ 0008h
IOC_IOCB4_POSN                           equ 0004h
IOC_IOCB4_POSITION                       equ 0004h
IOC_IOCB4_SIZE                           equ 0001h
IOC_IOCB4_LENGTH                         equ 0001h
IOC_IOCB4_MASK                           equ 0010h
IOC_IOCB5_POSN                           equ 0005h
IOC_IOCB5_POSITION                       equ 0005h
IOC_IOCB5_SIZE                           equ 0001h
IOC_IOCB5_LENGTH                         equ 0001h
IOC_IOCB5_MASK                           equ 0020h

// Register: VRCON
#define VRCON VRCON
VRCON                                    equ 0099h
// bitfield definitions
VRCON_VR_POSN                            equ 0000h
VRCON_VR_POSITION                        equ 0000h
VRCON_VR_SIZE                            equ 0004h
VRCON_VR_LENGTH                          equ 0004h
VRCON_VR_MASK                            equ 000Fh
VRCON_VRR_POSN                           equ 0005h
VRCON_VRR_POSITION                       equ 0005h
VRCON_VRR_SIZE                           equ 0001h
VRCON_VRR_LENGTH                         equ 0001h
VRCON_VRR_MASK                           equ 0020h
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

// Register: EEDATA
#define EEDATA EEDATA
EEDATA                                   equ 009Ah
// bitfield definitions
EEDATA_EEDATA_POSN                       equ 0000h
EEDATA_EEDATA_POSITION                   equ 0000h
EEDATA_EEDATA_SIZE                       equ 0008h
EEDATA_EEDATA_LENGTH                     equ 0008h
EEDATA_EEDATA_MASK                       equ 00FFh

// Register: EEADR
#define EEADR EEADR
EEADR                                    equ 009Bh
// bitfield definitions
EEADR_EEADR_POSN                         equ 0000h
EEADR_EEADR_POSITION                     equ 0000h
EEADR_EEADR_SIZE                         equ 0007h
EEADR_EEADR_LENGTH                       equ 0007h
EEADR_EEADR_MASK                         equ 007Fh

// Register: EECON1
#define EECON1 EECON1
EECON1                                   equ 009Ch
// bitfield definitions
EECON1_RD_POSN                           equ 0000h
EECON1_RD_POSITION                       equ 0000h
EECON1_RD_SIZE                           equ 0001h
EECON1_RD_LENGTH                         equ 0001h
EECON1_RD_MASK                           equ 0001h
EECON1_WR_POSN                           equ 0001h
EECON1_WR_POSITION                       equ 0001h
EECON1_WR_SIZE                           equ 0001h
EECON1_WR_LENGTH                         equ 0001h
EECON1_WR_MASK                           equ 0002h
EECON1_WREN_POSN                         equ 0002h
EECON1_WREN_POSITION                     equ 0002h
EECON1_WREN_SIZE                         equ 0001h
EECON1_WREN_LENGTH                       equ 0001h
EECON1_WREN_MASK                         equ 0004h
EECON1_WRERR_POSN                        equ 0003h
EECON1_WRERR_POSITION                    equ 0003h
EECON1_WRERR_SIZE                        equ 0001h
EECON1_WRERR_LENGTH                      equ 0001h
EECON1_WRERR_MASK                        equ 0008h

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 009Dh
// bitfield definitions
EECON2_EECON2_POSN                       equ 0000h
EECON2_EECON2_POSITION                   equ 0000h
EECON2_EECON2_SIZE                       equ 0008h
EECON2_EECON2_LENGTH                     equ 0008h
EECON2_EECON2_MASK                       equ 00FFh

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 009Eh
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh

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
ANSEL_ADCS0_POSN                         equ 0004h
ANSEL_ADCS0_POSITION                     equ 0004h
ANSEL_ADCS0_SIZE                         equ 0001h
ANSEL_ADCS0_LENGTH                       equ 0001h
ANSEL_ADCS0_MASK                         equ 0010h
ANSEL_ADCS1_POSN                         equ 0005h
ANSEL_ADCS1_POSITION                     equ 0005h
ANSEL_ADCS1_SIZE                         equ 0001h
ANSEL_ADCS1_LENGTH                       equ 0001h
ANSEL_ADCS1_MASK                         equ 0020h
ANSEL_ADCS2_POSN                         equ 0006h
ANSEL_ADCS2_POSITION                     equ 0006h
ANSEL_ADCS2_SIZE                         equ 0001h
ANSEL_ADCS2_LENGTH                       equ 0001h
ANSEL_ADCS2_MASK                         equ 0040h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ADCS0                            BANKMASK(ANSEL), 4
#define ADCS1                            BANKMASK(ANSEL), 5
#define ADCS2                            BANKMASK(ANSEL), 6
#define ADFM                             BANKMASK(ADCON0), 7
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ANS0                             BANKMASK(ANSEL), 0
#define ANS1                             BANKMASK(ANSEL), 1
#define ANS2                             BANKMASK(ANSEL), 2
#define ANS3                             BANKMASK(ANSEL), 3
#define CAL0                             BANKMASK(OSCCAL), 2
#define CAL1                             BANKMASK(OSCCAL), 3
#define CAL2                             BANKMASK(OSCCAL), 4
#define CAL3                             BANKMASK(OSCCAL), 5
#define CAL4                             BANKMASK(OSCCAL), 6
#define CAL5                             BANKMASK(OSCCAL), 7
#define CARRY                            BANKMASK(STATUS), 0
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CINV                             BANKMASK(CMCON), 4
#define CIS                              BANKMASK(CMCON), 3
#define CM0                              BANKMASK(CMCON), 0
#define CM1                              BANKMASK(CMCON), 1
#define CM2                              BANKMASK(CMCON), 2
#define CMIE                             BANKMASK(PIE1), 3
#define CMIF                             BANKMASK(PIR1), 3
#define COUT                             BANKMASK(CMCON), 6
#define DC                               BANKMASK(STATUS), 1
#define EEIE                             BANKMASK(PIE1), 7
#define EEIF                             BANKMASK(PIR1), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_DONE                          BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
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
#define IOCB0                            BANKMASK(IOC), 0
#define IOCB1                            BANKMASK(IOC), 1
#define IOCB2                            BANKMASK(IOC), 2
#define IOCB3                            BANKMASK(IOC), 3
#define IOCB4                            BANKMASK(IOC), 4
#define IOCB5                            BANKMASK(IOC), 5
#define PEIE                             BANKMASK(INTCON), 6
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define RD                               BANKMASK(EECON1), 0
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
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
#define TRISIO0                          BANKMASK(TRISIO), 0
#define TRISIO1                          BANKMASK(TRISIO), 1
#define TRISIO2                          BANKMASK(TRISIO), 2
#define TRISIO3                          BANKMASK(TRISIO), 3
#define TRISIO4                          BANKMASK(TRISIO), 4
#define TRISIO5                          BANKMASK(TRISIO), 5
#define VCFG                             BANKMASK(ADCON0), 6
#define VR0                              BANKMASK(VRCON), 0
#define VR1                              BANKMASK(VRCON), 1
#define VR2                              BANKMASK(VRCON), 2
#define VR3                              BANKMASK(VRCON), 3
#define VREN                             BANKMASK(VRCON), 7
#define VRR                              BANKMASK(VRCON), 5
#define WPU0                             BANKMASK(WPU), 0
#define WPU1                             BANKMASK(WPU), 1
#define WPU2                             BANKMASK(WPU), 2
#define WPU4                             BANKMASK(WPU), 4
#define WPU5                             BANKMASK(WPU), 5
#define WR                               BANKMASK(EECON1), 1
#define WREN                             BANKMASK(EECON1), 2
#define WRERR                            BANKMASK(EECON1), 3
#define ZERO                             BANKMASK(STATUS), 2
#define nBOD                             BANKMASK(PCON), 0
#define nBOR                             BANKMASK(PCON), 0
#define nDONE                            BANKMASK(ADCON0), 1
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

psect udata,class=RAM,space=SPACE_DATA,noexec
psect udata_bank0,class=BANK0,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC12F675_INC_
