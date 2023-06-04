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

#ifndef _PIC12F635_INC_
#define _PIC12F635_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC12F635
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
INTCON_RAIF_POSN                         equ 0000h
INTCON_RAIF_POSITION                     equ 0000h
INTCON_RAIF_SIZE                         equ 0001h
INTCON_RAIF_LENGTH                       equ 0001h
INTCON_RAIF_MASK                         equ 0001h
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
INTCON_RAIE_POSN                         equ 0003h
INTCON_RAIE_POSITION                     equ 0003h
INTCON_RAIE_SIZE                         equ 0001h
INTCON_RAIE_LENGTH                       equ 0001h
INTCON_RAIE_MASK                         equ 0008h
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

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 000Ch
// bitfield definitions
PIR1_TMR1IF_POSN                         equ 0000h
PIR1_TMR1IF_POSITION                     equ 0000h
PIR1_TMR1IF_SIZE                         equ 0001h
PIR1_TMR1IF_LENGTH                       equ 0001h
PIR1_TMR1IF_MASK                         equ 0001h
PIR1_OSFIF_POSN                          equ 0002h
PIR1_OSFIF_POSITION                      equ 0002h
PIR1_OSFIF_SIZE                          equ 0001h
PIR1_OSFIF_LENGTH                        equ 0001h
PIR1_OSFIF_MASK                          equ 0004h
PIR1_C1IF_POSN                           equ 0003h
PIR1_C1IF_POSITION                       equ 0003h
PIR1_C1IF_SIZE                           equ 0001h
PIR1_C1IF_LENGTH                         equ 0001h
PIR1_C1IF_MASK                           equ 0008h
PIR1_CRIF_POSN                           equ 0005h
PIR1_CRIF_POSITION                       equ 0005h
PIR1_CRIF_SIZE                           equ 0001h
PIR1_CRIF_LENGTH                         equ 0001h
PIR1_CRIF_MASK                           equ 0020h
PIR1_LVDIF_POSN                          equ 0006h
PIR1_LVDIF_POSITION                      equ 0006h
PIR1_LVDIF_SIZE                          equ 0001h
PIR1_LVDIF_LENGTH                        equ 0001h
PIR1_LVDIF_MASK                          equ 0040h
PIR1_EEIF_POSN                           equ 0007h
PIR1_EEIF_POSITION                       equ 0007h
PIR1_EEIF_SIZE                           equ 0001h
PIR1_EEIF_LENGTH                         equ 0001h
PIR1_EEIF_MASK                           equ 0080h

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

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0018h
// bitfield definitions
WDTCON_SWDTEN_POSN                       equ 0000h
WDTCON_SWDTEN_POSITION                   equ 0000h
WDTCON_SWDTEN_SIZE                       equ 0001h
WDTCON_SWDTEN_LENGTH                     equ 0001h
WDTCON_SWDTEN_MASK                       equ 0001h
WDTCON_WDTPS_POSN                        equ 0001h
WDTCON_WDTPS_POSITION                    equ 0001h
WDTCON_WDTPS_SIZE                        equ 0004h
WDTCON_WDTPS_LENGTH                      equ 0004h
WDTCON_WDTPS_MASK                        equ 001Eh
WDTCON_WDTPS0_POSN                       equ 0001h
WDTCON_WDTPS0_POSITION                   equ 0001h
WDTCON_WDTPS0_SIZE                       equ 0001h
WDTCON_WDTPS0_LENGTH                     equ 0001h
WDTCON_WDTPS0_MASK                       equ 0002h
WDTCON_WDTPS1_POSN                       equ 0002h
WDTCON_WDTPS1_POSITION                   equ 0002h
WDTCON_WDTPS1_SIZE                       equ 0001h
WDTCON_WDTPS1_LENGTH                     equ 0001h
WDTCON_WDTPS1_MASK                       equ 0004h
WDTCON_WDTPS2_POSN                       equ 0003h
WDTCON_WDTPS2_POSITION                   equ 0003h
WDTCON_WDTPS2_SIZE                       equ 0001h
WDTCON_WDTPS2_LENGTH                     equ 0001h
WDTCON_WDTPS2_MASK                       equ 0008h
WDTCON_WDTPS3_POSN                       equ 0004h
WDTCON_WDTPS3_POSITION                   equ 0004h
WDTCON_WDTPS3_SIZE                       equ 0001h
WDTCON_WDTPS3_LENGTH                     equ 0001h
WDTCON_WDTPS3_MASK                       equ 0010h

// Register: CMCON0
#define CMCON0 CMCON0
CMCON0                                   equ 0019h
// bitfield definitions
CMCON0_CM_POSN                           equ 0000h
CMCON0_CM_POSITION                       equ 0000h
CMCON0_CM_SIZE                           equ 0003h
CMCON0_CM_LENGTH                         equ 0003h
CMCON0_CM_MASK                           equ 0007h
CMCON0_CIS_POSN                          equ 0003h
CMCON0_CIS_POSITION                      equ 0003h
CMCON0_CIS_SIZE                          equ 0001h
CMCON0_CIS_LENGTH                        equ 0001h
CMCON0_CIS_MASK                          equ 0008h
CMCON0_CINV_POSN                         equ 0004h
CMCON0_CINV_POSITION                     equ 0004h
CMCON0_CINV_SIZE                         equ 0001h
CMCON0_CINV_LENGTH                       equ 0001h
CMCON0_CINV_MASK                         equ 0010h
CMCON0_COUT_POSN                         equ 0006h
CMCON0_COUT_POSITION                     equ 0006h
CMCON0_COUT_SIZE                         equ 0001h
CMCON0_COUT_LENGTH                       equ 0001h
CMCON0_COUT_MASK                         equ 0040h
CMCON0_CM0_POSN                          equ 0000h
CMCON0_CM0_POSITION                      equ 0000h
CMCON0_CM0_SIZE                          equ 0001h
CMCON0_CM0_LENGTH                        equ 0001h
CMCON0_CM0_MASK                          equ 0001h
CMCON0_CM1_POSN                          equ 0001h
CMCON0_CM1_POSITION                      equ 0001h
CMCON0_CM1_SIZE                          equ 0001h
CMCON0_CM1_LENGTH                        equ 0001h
CMCON0_CM1_MASK                          equ 0002h
CMCON0_CM2_POSN                          equ 0002h
CMCON0_CM2_POSITION                      equ 0002h
CMCON0_CM2_SIZE                          equ 0001h
CMCON0_CM2_LENGTH                        equ 0001h
CMCON0_CM2_MASK                          equ 0004h
CMCON0_C1OUT_POSN                        equ 0006h
CMCON0_C1OUT_POSITION                    equ 0006h
CMCON0_C1OUT_SIZE                        equ 0001h
CMCON0_C1OUT_LENGTH                      equ 0001h
CMCON0_C1OUT_MASK                        equ 0040h
CMCON0_C1INV_POSN                        equ 0004h
CMCON0_C1INV_POSITION                    equ 0004h
CMCON0_C1INV_SIZE                        equ 0001h
CMCON0_C1INV_LENGTH                      equ 0001h
CMCON0_C1INV_MASK                        equ 0010h

// Register: CMCON1
#define CMCON1 CMCON1
CMCON1                                   equ 001Ah
// bitfield definitions
CMCON1_CMSYNC_POSN                       equ 0000h
CMCON1_CMSYNC_POSITION                   equ 0000h
CMCON1_CMSYNC_SIZE                       equ 0001h
CMCON1_CMSYNC_LENGTH                     equ 0001h
CMCON1_CMSYNC_MASK                       equ 0001h
CMCON1_T1GSS_POSN                        equ 0001h
CMCON1_T1GSS_POSITION                    equ 0001h
CMCON1_T1GSS_SIZE                        equ 0001h
CMCON1_T1GSS_LENGTH                      equ 0001h
CMCON1_T1GSS_MASK                        equ 0002h
CMCON1_C1SYNC_POSN                       equ 0000h
CMCON1_C1SYNC_POSITION                   equ 0000h
CMCON1_C1SYNC_SIZE                       equ 0001h
CMCON1_C1SYNC_LENGTH                     equ 0001h
CMCON1_C1SYNC_MASK                       equ 0001h

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
PIE1_OSFIE_POSN                          equ 0002h
PIE1_OSFIE_POSITION                      equ 0002h
PIE1_OSFIE_SIZE                          equ 0001h
PIE1_OSFIE_LENGTH                        equ 0001h
PIE1_OSFIE_MASK                          equ 0004h
PIE1_C1IE_POSN                           equ 0003h
PIE1_C1IE_POSITION                       equ 0003h
PIE1_C1IE_SIZE                           equ 0001h
PIE1_C1IE_LENGTH                         equ 0001h
PIE1_C1IE_MASK                           equ 0008h
PIE1_CRIE_POSN                           equ 0005h
PIE1_CRIE_POSITION                       equ 0005h
PIE1_CRIE_SIZE                           equ 0001h
PIE1_CRIE_LENGTH                         equ 0001h
PIE1_CRIE_MASK                           equ 0020h
PIE1_LVDIE_POSN                          equ 0006h
PIE1_LVDIE_POSITION                      equ 0006h
PIE1_LVDIE_SIZE                          equ 0001h
PIE1_LVDIE_LENGTH                        equ 0001h
PIE1_LVDIE_MASK                          equ 0040h
PIE1_EEIE_POSN                           equ 0007h
PIE1_EEIE_POSITION                       equ 0007h
PIE1_EEIE_SIZE                           equ 0001h
PIE1_EEIE_LENGTH                         equ 0001h
PIE1_EEIE_MASK                           equ 0080h

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
PCON_nWUR_POSN                           equ 0003h
PCON_nWUR_POSITION                       equ 0003h
PCON_nWUR_SIZE                           equ 0001h
PCON_nWUR_LENGTH                         equ 0001h
PCON_nWUR_MASK                           equ 0008h
PCON_SBOREN_POSN                         equ 0004h
PCON_SBOREN_POSITION                     equ 0004h
PCON_SBOREN_SIZE                         equ 0001h
PCON_SBOREN_LENGTH                       equ 0001h
PCON_SBOREN_MASK                         equ 0010h
PCON_ULPWUE_POSN                         equ 0005h
PCON_ULPWUE_POSITION                     equ 0005h
PCON_ULPWUE_SIZE                         equ 0001h
PCON_ULPWUE_LENGTH                       equ 0001h
PCON_ULPWUE_MASK                         equ 0020h
PCON_nBOD_POSN                           equ 0000h
PCON_nBOD_POSITION                       equ 0000h
PCON_nBOD_SIZE                           equ 0001h
PCON_nBOD_LENGTH                         equ 0001h
PCON_nBOD_MASK                           equ 0001h
PCON_SBODEN_POSN                         equ 0004h
PCON_SBODEN_POSITION                     equ 0004h
PCON_SBODEN_SIZE                         equ 0001h
PCON_SBODEN_LENGTH                       equ 0001h
PCON_SBODEN_MASK                         equ 0010h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 008Fh
// bitfield definitions
OSCCON_SCS_POSN                          equ 0000h
OSCCON_SCS_POSITION                      equ 0000h
OSCCON_SCS_SIZE                          equ 0001h
OSCCON_SCS_LENGTH                        equ 0001h
OSCCON_SCS_MASK                          equ 0001h
OSCCON_LTS_POSN                          equ 0001h
OSCCON_LTS_POSITION                      equ 0001h
OSCCON_LTS_SIZE                          equ 0001h
OSCCON_LTS_LENGTH                        equ 0001h
OSCCON_LTS_MASK                          equ 0002h
OSCCON_HTS_POSN                          equ 0002h
OSCCON_HTS_POSITION                      equ 0002h
OSCCON_HTS_SIZE                          equ 0001h
OSCCON_HTS_LENGTH                        equ 0001h
OSCCON_HTS_MASK                          equ 0004h
OSCCON_OSTS_POSN                         equ 0003h
OSCCON_OSTS_POSITION                     equ 0003h
OSCCON_OSTS_SIZE                         equ 0001h
OSCCON_OSTS_LENGTH                       equ 0001h
OSCCON_OSTS_MASK                         equ 0008h
OSCCON_IRCF_POSN                         equ 0004h
OSCCON_IRCF_POSITION                     equ 0004h
OSCCON_IRCF_SIZE                         equ 0003h
OSCCON_IRCF_LENGTH                       equ 0003h
OSCCON_IRCF_MASK                         equ 0070h
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
OSCCON_IRCF2_POSN                        equ 0006h
OSCCON_IRCF2_POSITION                    equ 0006h
OSCCON_IRCF2_SIZE                        equ 0001h
OSCCON_IRCF2_LENGTH                      equ 0001h
OSCCON_IRCF2_MASK                        equ 0040h

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

// Register: LVDCON
#define LVDCON LVDCON
LVDCON                                   equ 0094h
// bitfield definitions
LVDCON_LVDL_POSN                         equ 0000h
LVDCON_LVDL_POSITION                     equ 0000h
LVDCON_LVDL_SIZE                         equ 0003h
LVDCON_LVDL_LENGTH                       equ 0003h
LVDCON_LVDL_MASK                         equ 0007h
LVDCON_LVDEN_POSN                        equ 0004h
LVDCON_LVDEN_POSITION                    equ 0004h
LVDCON_LVDEN_SIZE                        equ 0001h
LVDCON_LVDEN_LENGTH                      equ 0001h
LVDCON_LVDEN_MASK                        equ 0010h
LVDCON_IRVST_POSN                        equ 0005h
LVDCON_IRVST_POSITION                    equ 0005h
LVDCON_IRVST_SIZE                        equ 0001h
LVDCON_IRVST_LENGTH                      equ 0001h
LVDCON_IRVST_MASK                        equ 0020h
LVDCON_LVDL0_POSN                        equ 0000h
LVDCON_LVDL0_POSITION                    equ 0000h
LVDCON_LVDL0_SIZE                        equ 0001h
LVDCON_LVDL0_LENGTH                      equ 0001h
LVDCON_LVDL0_MASK                        equ 0001h
LVDCON_LVDL1_POSN                        equ 0001h
LVDCON_LVDL1_POSITION                    equ 0001h
LVDCON_LVDL1_SIZE                        equ 0001h
LVDCON_LVDL1_LENGTH                      equ 0001h
LVDCON_LVDL1_MASK                        equ 0002h
LVDCON_LVDL2_POSN                        equ 0002h
LVDCON_LVDL2_POSITION                    equ 0002h
LVDCON_LVDL2_SIZE                        equ 0001h
LVDCON_LVDL2_LENGTH                      equ 0001h
LVDCON_LVDL2_MASK                        equ 0004h
LVDCON_PLVDEN_POSN                       equ 0004h
LVDCON_PLVDEN_POSITION                   equ 0004h
LVDCON_PLVDEN_SIZE                       equ 0001h
LVDCON_PLVDEN_LENGTH                     equ 0001h
LVDCON_PLVDEN_MASK                       equ 0010h

// Register: WPUDA
#define WPUDA WPUDA
WPUDA                                    equ 0095h
// bitfield definitions
WPUDA_WPUDA0_POSN                        equ 0000h
WPUDA_WPUDA0_POSITION                    equ 0000h
WPUDA_WPUDA0_SIZE                        equ 0001h
WPUDA_WPUDA0_LENGTH                      equ 0001h
WPUDA_WPUDA0_MASK                        equ 0001h
WPUDA_WPUDA1_POSN                        equ 0001h
WPUDA_WPUDA1_POSITION                    equ 0001h
WPUDA_WPUDA1_SIZE                        equ 0001h
WPUDA_WPUDA1_LENGTH                      equ 0001h
WPUDA_WPUDA1_MASK                        equ 0002h
WPUDA_WPUDA2_POSN                        equ 0002h
WPUDA_WPUDA2_POSITION                    equ 0002h
WPUDA_WPUDA2_SIZE                        equ 0001h
WPUDA_WPUDA2_LENGTH                      equ 0001h
WPUDA_WPUDA2_MASK                        equ 0004h
WPUDA_WPUDA4_POSN                        equ 0004h
WPUDA_WPUDA4_POSITION                    equ 0004h
WPUDA_WPUDA4_SIZE                        equ 0001h
WPUDA_WPUDA4_LENGTH                      equ 0001h
WPUDA_WPUDA4_MASK                        equ 0010h
WPUDA_WPUDA5_POSN                        equ 0005h
WPUDA_WPUDA5_POSITION                    equ 0005h
WPUDA_WPUDA5_SIZE                        equ 0001h
WPUDA_WPUDA5_LENGTH                      equ 0001h
WPUDA_WPUDA5_MASK                        equ 0020h

// Register: IOCA
#define IOCA IOCA
IOCA                                     equ 0096h
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

// Register: WDA
#define WDA WDA
WDA                                      equ 0097h
// bitfield definitions
WDA_WDA0_POSN                            equ 0000h
WDA_WDA0_POSITION                        equ 0000h
WDA_WDA0_SIZE                            equ 0001h
WDA_WDA0_LENGTH                          equ 0001h
WDA_WDA0_MASK                            equ 0001h
WDA_WDA1_POSN                            equ 0001h
WDA_WDA1_POSITION                        equ 0001h
WDA_WDA1_SIZE                            equ 0001h
WDA_WDA1_LENGTH                          equ 0001h
WDA_WDA1_MASK                            equ 0002h
WDA_WDA2_POSN                            equ 0002h
WDA_WDA2_POSITION                        equ 0002h
WDA_WDA2_SIZE                            equ 0001h
WDA_WDA2_LENGTH                          equ 0001h
WDA_WDA2_MASK                            equ 0004h
WDA_WDA4_POSN                            equ 0004h
WDA_WDA4_POSITION                        equ 0004h
WDA_WDA4_SIZE                            equ 0001h
WDA_WDA4_LENGTH                          equ 0001h
WDA_WDA4_MASK                            equ 0010h
WDA_WDA5_POSN                            equ 0005h
WDA_WDA5_POSITION                        equ 0005h
WDA_WDA5_SIZE                            equ 0001h
WDA_WDA5_LENGTH                          equ 0001h
WDA_WDA5_MASK                            equ 0020h

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

// Register: EEDAT
#define EEDAT EEDAT
EEDAT                                    equ 009Ah
// bitfield definitions
EEDAT_EEDAT_POSN                         equ 0000h
EEDAT_EEDAT_POSITION                     equ 0000h
EEDAT_EEDAT_SIZE                         equ 0008h
EEDAT_EEDAT_LENGTH                       equ 0008h
EEDAT_EEDAT_MASK                         equ 00FFh

// Register: EEADR
#define EEADR EEADR
EEADR                                    equ 009Bh

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

// Register: CRCON
#define CRCON CRCON
CRCON                                    equ 0110h
// bitfield definitions
CRCON_CRREG_POSN                         equ 0000h
CRCON_CRREG_POSITION                     equ 0000h
CRCON_CRREG_SIZE                         equ 0002h
CRCON_CRREG_LENGTH                       equ 0002h
CRCON_CRREG_MASK                         equ 0003h
CRCON_ENC_nDEC_POSN                      equ 0006h
CRCON_ENC_nDEC_POSITION                  equ 0006h
CRCON_ENC_nDEC_SIZE                      equ 0001h
CRCON_ENC_nDEC_LENGTH                    equ 0001h
CRCON_ENC_nDEC_MASK                      equ 0040h
CRCON_GO_nDONE_POSN                      equ 0007h
CRCON_GO_nDONE_POSITION                  equ 0007h
CRCON_GO_nDONE_SIZE                      equ 0001h
CRCON_GO_nDONE_LENGTH                    equ 0001h
CRCON_GO_nDONE_MASK                      equ 0080h
CRCON_CRREG0_POSN                        equ 0000h
CRCON_CRREG0_POSITION                    equ 0000h
CRCON_CRREG0_SIZE                        equ 0001h
CRCON_CRREG0_LENGTH                      equ 0001h
CRCON_CRREG0_MASK                        equ 0001h
CRCON_CRREG1_POSN                        equ 0001h
CRCON_CRREG1_POSITION                    equ 0001h
CRCON_CRREG1_SIZE                        equ 0001h
CRCON_CRREG1_LENGTH                      equ 0001h
CRCON_CRREG1_MASK                        equ 0002h
CRCON_ENC_DEC_POSN                       equ 0006h
CRCON_ENC_DEC_POSITION                   equ 0006h
CRCON_ENC_DEC_SIZE                       equ 0001h
CRCON_ENC_DEC_LENGTH                     equ 0001h
CRCON_ENC_DEC_MASK                       equ 0040h
CRCON_GO_POSN                            equ 0007h
CRCON_GO_POSITION                        equ 0007h
CRCON_GO_SIZE                            equ 0001h
CRCON_GO_LENGTH                          equ 0001h
CRCON_GO_MASK                            equ 0080h

// Register: CRDAT0
#define CRDAT0 CRDAT0
CRDAT0                                   equ 0111h
// bitfield definitions
CRDAT0_CRDAT0_POSN                       equ 0000h
CRDAT0_CRDAT0_POSITION                   equ 0000h
CRDAT0_CRDAT0_SIZE                       equ 0008h
CRDAT0_CRDAT0_LENGTH                     equ 0008h
CRDAT0_CRDAT0_MASK                       equ 00FFh

// Register: CRDAT1
#define CRDAT1 CRDAT1
CRDAT1                                   equ 0112h
// bitfield definitions
CRDAT1_CRDAT1_POSN                       equ 0000h
CRDAT1_CRDAT1_POSITION                   equ 0000h
CRDAT1_CRDAT1_SIZE                       equ 0008h
CRDAT1_CRDAT1_LENGTH                     equ 0008h
CRDAT1_CRDAT1_MASK                       equ 00FFh

// Register: CRDAT2
#define CRDAT2 CRDAT2
CRDAT2                                   equ 0113h
// bitfield definitions
CRDAT2_CRDAT2_POSN                       equ 0000h
CRDAT2_CRDAT2_POSITION                   equ 0000h
CRDAT2_CRDAT2_SIZE                       equ 0008h
CRDAT2_CRDAT2_LENGTH                     equ 0008h
CRDAT2_CRDAT2_MASK                       equ 00FFh

// Register: CRDAT3
#define CRDAT3 CRDAT3
CRDAT3                                   equ 0114h
// bitfield definitions
CRDAT3_CRDAT3_POSN                       equ 0000h
CRDAT3_CRDAT3_POSITION                   equ 0000h
CRDAT3_CRDAT3_SIZE                       equ 0008h
CRDAT3_CRDAT3_LENGTH                     equ 0008h
CRDAT3_CRDAT3_MASK                       equ 00FFh

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define C1IE                             BANKMASK(PIE1), 3
#define C1IF                             BANKMASK(PIR1), 3
#define C1INV                            BANKMASK(CMCON0), 4
#define C1OUT                            BANKMASK(CMCON0), 6
#define C1SYNC                           BANKMASK(CMCON1), 0
#define CARRY                            BANKMASK(STATUS), 0
#define CINV                             BANKMASK(CMCON0), 4
#define CIS                              BANKMASK(CMCON0), 3
#define CM0                              BANKMASK(CMCON0), 0
#define CM1                              BANKMASK(CMCON0), 1
#define CM2                              BANKMASK(CMCON0), 2
#define CMSYNC                           BANKMASK(CMCON1), 0
#define COUT                             BANKMASK(CMCON0), 6
#define CRIE                             BANKMASK(PIE1), 5
#define CRIF                             BANKMASK(PIR1), 5
#define CRREG0                           BANKMASK(CRCON), 0
#define CRREG1                           BANKMASK(CRCON), 1
#define DC                               BANKMASK(STATUS), 1
#define EEIE                             BANKMASK(PIE1), 7
#define EEIF                             BANKMASK(PIR1), 7
#define ENC_DEC                          BANKMASK(CRCON), 6
#define ENC_nDEC                         BANKMASK(CRCON), 6
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(CRCON), 7
#define GO_nDONE                         BANKMASK(CRCON), 7
#define GP0                              BANKMASK(GPIO), 0
#define GP1                              BANKMASK(GPIO), 1
#define GP2                              BANKMASK(GPIO), 2
#define GP3                              BANKMASK(GPIO), 3
#define GP4                              BANKMASK(GPIO), 4
#define GP5                              BANKMASK(GPIO), 5
#define HTS                              BANKMASK(OSCCON), 2
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCA0                            BANKMASK(IOCA), 0
#define IOCA1                            BANKMASK(IOCA), 1
#define IOCA2                            BANKMASK(IOCA), 2
#define IOCA3                            BANKMASK(IOCA), 3
#define IOCA4                            BANKMASK(IOCA), 4
#define IOCA5                            BANKMASK(IOCA), 5
#define IRCF0                            BANKMASK(OSCCON), 4
#define IRCF1                            BANKMASK(OSCCON), 5
#define IRCF2                            BANKMASK(OSCCON), 6
#define IRVST                            BANKMASK(LVDCON), 5
#define LTS                              BANKMASK(OSCCON), 1
#define LVDEN                            BANKMASK(LVDCON), 4
#define LVDIE                            BANKMASK(PIE1), 6
#define LVDIF                            BANKMASK(PIR1), 6
#define LVDL0                            BANKMASK(LVDCON), 0
#define LVDL1                            BANKMASK(LVDCON), 1
#define LVDL2                            BANKMASK(LVDCON), 2
#define OSFIE                            BANKMASK(PIE1), 2
#define OSFIF                            BANKMASK(PIR1), 2
#define OSTS                             BANKMASK(OSCCON), 3
#define PEIE                             BANKMASK(INTCON), 6
#define PLVDEN                           BANKMASK(LVDCON), 4
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
#define RAIE                             BANKMASK(INTCON), 3
#define RAIF                             BANKMASK(INTCON), 0
#define RD                               BANKMASK(EECON1), 0
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define SBODEN                           BANKMASK(PCON), 4
#define SBOREN                           BANKMASK(PCON), 4
#define SCS                              BANKMASK(OSCCON), 0
#define SWDTEN                           BANKMASK(WDTCON), 0
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GINV                           BANKMASK(T1CON), 7
#define T1GSS                            BANKMASK(CMCON1), 1
#define T1OSCEN                          BANKMASK(T1CON), 3
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
#define ULPWUE                           BANKMASK(PCON), 5
#define VR0                              BANKMASK(VRCON), 0
#define VR1                              BANKMASK(VRCON), 1
#define VR2                              BANKMASK(VRCON), 2
#define VR3                              BANKMASK(VRCON), 3
#define VREN                             BANKMASK(VRCON), 7
#define VRR                              BANKMASK(VRCON), 5
#define WDA0                             BANKMASK(WDA), 0
#define WDA1                             BANKMASK(WDA), 1
#define WDA2                             BANKMASK(WDA), 2
#define WDA4                             BANKMASK(WDA), 4
#define WDA5                             BANKMASK(WDA), 5
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WPUDA0                           BANKMASK(WPUDA), 0
#define WPUDA1                           BANKMASK(WPUDA), 1
#define WPUDA2                           BANKMASK(WPUDA), 2
#define WPUDA4                           BANKMASK(WPUDA), 4
#define WPUDA5                           BANKMASK(WPUDA), 5
#define WR                               BANKMASK(EECON1), 1
#define WREN                             BANKMASK(EECON1), 2
#define WRERR                            BANKMASK(EECON1), 3
#define ZERO                             BANKMASK(STATUS), 2
#define nBOD                             BANKMASK(PCON), 0
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRAPU                            BANKMASK(OPTION_REG), 7
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nTO                              BANKMASK(STATUS), 4
#define nWUR                             BANKMASK(PCON), 3

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
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC12F635_INC_
