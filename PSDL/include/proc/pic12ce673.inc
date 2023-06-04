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

#ifndef _PIC12CE673_INC_
#define _PIC12CE673_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC12CE673
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
GPIO_SDA_POSN                            equ 0006h
GPIO_SDA_POSITION                        equ 0006h
GPIO_SDA_SIZE                            equ 0001h
GPIO_SDA_LENGTH                          equ 0001h
GPIO_SDA_MASK                            equ 0040h
GPIO_SCL_POSN                            equ 0007h
GPIO_SCL_POSITION                        equ 0007h
GPIO_SCL_SIZE                            equ 0001h
GPIO_SCL_LENGTH                          equ 0001h
GPIO_SCL_MASK                            equ 0080h

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

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 000Ch
// bitfield definitions
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 001Eh
// bitfield definitions
ADRES_ADRES_POSN                         equ 0000h
ADRES_ADRES_POSITION                     equ 0000h
ADRES_ADRES_SIZE                         equ 0008h
ADRES_ADRES_LENGTH                       equ 0008h
ADRES_ADRES_MASK                         equ 00FFh

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 001Fh
// bitfield definitions
ADCON0_ADON_POSN                         equ 0000h
ADCON0_ADON_POSITION                     equ 0000h
ADCON0_ADON_SIZE                         equ 0001h
ADCON0_ADON_LENGTH                       equ 0001h
ADCON0_ADON_MASK                         equ 0001h
ADCON0_GO_nDONE_POSN                     equ 0002h
ADCON0_GO_nDONE_POSITION                 equ 0002h
ADCON0_GO_nDONE_SIZE                     equ 0001h
ADCON0_GO_nDONE_LENGTH                   equ 0001h
ADCON0_GO_nDONE_MASK                     equ 0004h
ADCON0_CHS_POSN                          equ 0003h
ADCON0_CHS_POSITION                      equ 0003h
ADCON0_CHS_SIZE                          equ 0002h
ADCON0_CHS_LENGTH                        equ 0002h
ADCON0_CHS_MASK                          equ 0018h
ADCON0_ADCS_POSN                         equ 0006h
ADCON0_ADCS_POSITION                     equ 0006h
ADCON0_ADCS_SIZE                         equ 0002h
ADCON0_ADCS_LENGTH                       equ 0002h
ADCON0_ADCS_MASK                         equ 00C0h
ADCON0_GO_DONE_POSN                      equ 0002h
ADCON0_GO_DONE_POSITION                  equ 0002h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0004h
ADCON0_CHS0_POSN                         equ 0003h
ADCON0_CHS0_POSITION                     equ 0003h
ADCON0_CHS0_SIZE                         equ 0001h
ADCON0_CHS0_LENGTH                       equ 0001h
ADCON0_CHS0_MASK                         equ 0008h
ADCON0_CHS1_POSN                         equ 0004h
ADCON0_CHS1_POSITION                     equ 0004h
ADCON0_CHS1_SIZE                         equ 0001h
ADCON0_CHS1_LENGTH                       equ 0001h
ADCON0_CHS1_MASK                         equ 0010h
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
ADCON0_nDONE_POSN                        equ 0002h
ADCON0_nDONE_POSITION                    equ 0002h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0004h
ADCON0_GO_POSN                           equ 0002h
ADCON0_GO_POSITION                       equ 0002h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0004h

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

// Register: TRIS
#define TRIS TRIS
TRIS_REG                                 equ 0085h
// bitfield definitions
TRIS_TRIS0_POSN                          equ 0000h
TRIS_TRIS0_POSITION                      equ 0000h
TRIS_TRIS0_SIZE                          equ 0001h
TRIS_TRIS0_LENGTH                        equ 0001h
TRIS_TRIS0_MASK                          equ 0001h
TRIS_TRIS1_POSN                          equ 0001h
TRIS_TRIS1_POSITION                      equ 0001h
TRIS_TRIS1_SIZE                          equ 0001h
TRIS_TRIS1_LENGTH                        equ 0001h
TRIS_TRIS1_MASK                          equ 0002h
TRIS_TRIS2_POSN                          equ 0002h
TRIS_TRIS2_POSITION                      equ 0002h
TRIS_TRIS2_SIZE                          equ 0001h
TRIS_TRIS2_LENGTH                        equ 0001h
TRIS_TRIS2_MASK                          equ 0004h
TRIS_TRIS3_POSN                          equ 0003h
TRIS_TRIS3_POSITION                      equ 0003h
TRIS_TRIS3_SIZE                          equ 0001h
TRIS_TRIS3_LENGTH                        equ 0001h
TRIS_TRIS3_MASK                          equ 0008h
TRIS_TRIS4_POSN                          equ 0004h
TRIS_TRIS4_POSITION                      equ 0004h
TRIS_TRIS4_SIZE                          equ 0001h
TRIS_TRIS4_LENGTH                        equ 0001h
TRIS_TRIS4_MASK                          equ 0010h
TRIS_TRIS5_POSN                          equ 0005h
TRIS_TRIS5_POSITION                      equ 0005h
TRIS_TRIS5_SIZE                          equ 0001h
TRIS_TRIS5_LENGTH                        equ 0001h
TRIS_TRIS5_MASK                          equ 0020h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 008Ch
// bitfield definitions
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h

// Register: PCON
#define PCON PCON
PCON                                     equ 008Eh
// bitfield definitions
PCON_nPOR_POSN                           equ 0001h
PCON_nPOR_POSITION                       equ 0001h
PCON_nPOR_SIZE                           equ 0001h
PCON_nPOR_LENGTH                         equ 0001h
PCON_nPOR_MASK                           equ 0002h

// Register: OSCCAL
#define OSCCAL OSCCAL
OSCCAL                                   equ 008Fh
// bitfield definitions
OSCCAL_CALSLW_POSN                       equ 0002h
OSCCAL_CALSLW_POSITION                   equ 0002h
OSCCAL_CALSLW_SIZE                       equ 0001h
OSCCAL_CALSLW_LENGTH                     equ 0001h
OSCCAL_CALSLW_MASK                       equ 0004h
OSCCAL_CALFST_POSN                       equ 0003h
OSCCAL_CALFST_POSITION                   equ 0003h
OSCCAL_CALFST_SIZE                       equ 0001h
OSCCAL_CALFST_LENGTH                     equ 0001h
OSCCAL_CALFST_MASK                       equ 0008h
OSCCAL_CAL_POSN                          equ 0004h
OSCCAL_CAL_POSITION                      equ 0004h
OSCCAL_CAL_SIZE                          equ 0004h
OSCCAL_CAL_LENGTH                        equ 0004h
OSCCAL_CAL_MASK                          equ 00F0h
OSCCAL_CAL0_POSN                         equ 0004h
OSCCAL_CAL0_POSITION                     equ 0004h
OSCCAL_CAL0_SIZE                         equ 0001h
OSCCAL_CAL0_LENGTH                       equ 0001h
OSCCAL_CAL0_MASK                         equ 0010h
OSCCAL_CAL1_POSN                         equ 0005h
OSCCAL_CAL1_POSITION                     equ 0005h
OSCCAL_CAL1_SIZE                         equ 0001h
OSCCAL_CAL1_LENGTH                       equ 0001h
OSCCAL_CAL1_MASK                         equ 0020h
OSCCAL_CAL2_POSN                         equ 0006h
OSCCAL_CAL2_POSITION                     equ 0006h
OSCCAL_CAL2_SIZE                         equ 0001h
OSCCAL_CAL2_LENGTH                       equ 0001h
OSCCAL_CAL2_MASK                         equ 0040h
OSCCAL_CAL3_POSN                         equ 0007h
OSCCAL_CAL3_POSITION                     equ 0007h
OSCCAL_CAL3_SIZE                         equ 0001h
OSCCAL_CAL3_LENGTH                       equ 0001h
OSCCAL_CAL3_MASK                         equ 0080h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Fh
// bitfield definitions
ADCON1_PCFG_POSN                         equ 0000h
ADCON1_PCFG_POSITION                     equ 0000h
ADCON1_PCFG_SIZE                         equ 0003h
ADCON1_PCFG_LENGTH                       equ 0003h
ADCON1_PCFG_MASK                         equ 0007h
ADCON1_PCFG0_POSN                        equ 0000h
ADCON1_PCFG0_POSITION                    equ 0000h
ADCON1_PCFG0_SIZE                        equ 0001h
ADCON1_PCFG0_LENGTH                      equ 0001h
ADCON1_PCFG0_MASK                        equ 0001h
ADCON1_PCFG1_POSN                        equ 0001h
ADCON1_PCFG1_POSITION                    equ 0001h
ADCON1_PCFG1_SIZE                        equ 0001h
ADCON1_PCFG1_LENGTH                      equ 0001h
ADCON1_PCFG1_MASK                        equ 0002h
ADCON1_PCFG2_POSN                        equ 0002h
ADCON1_PCFG2_POSITION                    equ 0002h
ADCON1_PCFG2_SIZE                        equ 0001h
ADCON1_PCFG2_LENGTH                      equ 0001h
ADCON1_PCFG2_MASK                        equ 0004h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ADCS0                            BANKMASK(ADCON0), 6
#define ADCS1                            BANKMASK(ADCON0), 7
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define CAL0                             BANKMASK(OSCCAL), 4
#define CAL1                             BANKMASK(OSCCAL), 5
#define CAL2                             BANKMASK(OSCCAL), 6
#define CAL3                             BANKMASK(OSCCAL), 7
#define CALFST                           BANKMASK(OSCCAL), 3
#define CALSLW                           BANKMASK(OSCCAL), 2
#define CARRY                            BANKMASK(STATUS), 0
#define CHS0                             BANKMASK(ADCON0), 3
#define CHS1                             BANKMASK(ADCON0), 4
#define DC                               BANKMASK(STATUS), 1
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 2
#define GO_DONE                          BANKMASK(ADCON0), 2
#define GO_nDONE                         BANKMASK(ADCON0), 2
#define GP0                              BANKMASK(GPIO), 0
#define GP1                              BANKMASK(GPIO), 1
#define GP2                              BANKMASK(GPIO), 2
#define GP3                              BANKMASK(GPIO), 3
#define GP4                              BANKMASK(GPIO), 4
#define GP5                              BANKMASK(GPIO), 5
#define GPIE                             BANKMASK(INTCON), 3
#define GPIF                             BANKMASK(INTCON), 0
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define PCFG0                            BANKMASK(ADCON1), 0
#define PCFG1                            BANKMASK(ADCON1), 1
#define PCFG2                            BANKMASK(ADCON1), 2
#define PEIE                             BANKMASK(INTCON), 6
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define SCL                              BANKMASK(GPIO), 7
#define SDA                              BANKMASK(GPIO), 6
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define TRIS0                            BANKMASK(TRIS), 0
#define TRIS1                            BANKMASK(TRIS), 1
#define TRIS2                            BANKMASK(TRIS), 2
#define TRIS3                            BANKMASK(TRIS), 3
#define TRIS4                            BANKMASK(TRIS), 4
#define TRIS5                            BANKMASK(TRIS), 5
#define ZERO                             BANKMASK(STATUS), 2
#define nDONE                            BANKMASK(ADCON0), 2
#define nGPPU                            BANKMASK(OPTION_REG), 7
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
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
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC12CE673_INC_
