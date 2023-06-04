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

#ifndef _PIC12HV752_INC_
#define _PIC12HV752_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC12HV752
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
STATUS_IRP_POSN                          equ 0007h
STATUS_IRP_POSITION                      equ 0007h
STATUS_IRP_SIZE                          equ 0001h
STATUS_IRP_LENGTH                        equ 0001h
STATUS_IRP_MASK                          equ 0080h
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

// Register: IOCAF
#define IOCAF IOCAF
IOCAF                                    equ 0008h
// bitfield definitions
IOCAF_IOCAF0_POSN                        equ 0000h
IOCAF_IOCAF0_POSITION                    equ 0000h
IOCAF_IOCAF0_SIZE                        equ 0001h
IOCAF_IOCAF0_LENGTH                      equ 0001h
IOCAF_IOCAF0_MASK                        equ 0001h
IOCAF_IOCAF1_POSN                        equ 0001h
IOCAF_IOCAF1_POSITION                    equ 0001h
IOCAF_IOCAF1_SIZE                        equ 0001h
IOCAF_IOCAF1_LENGTH                      equ 0001h
IOCAF_IOCAF1_MASK                        equ 0002h
IOCAF_IOCAF2_POSN                        equ 0002h
IOCAF_IOCAF2_POSITION                    equ 0002h
IOCAF_IOCAF2_SIZE                        equ 0001h
IOCAF_IOCAF2_LENGTH                      equ 0001h
IOCAF_IOCAF2_MASK                        equ 0004h
IOCAF_IOCAF3_POSN                        equ 0003h
IOCAF_IOCAF3_POSITION                    equ 0003h
IOCAF_IOCAF3_SIZE                        equ 0001h
IOCAF_IOCAF3_LENGTH                      equ 0001h
IOCAF_IOCAF3_MASK                        equ 0008h
IOCAF_IOCAF4_POSN                        equ 0004h
IOCAF_IOCAF4_POSITION                    equ 0004h
IOCAF_IOCAF4_SIZE                        equ 0001h
IOCAF_IOCAF4_LENGTH                      equ 0001h
IOCAF_IOCAF4_MASK                        equ 0010h
IOCAF_IOCAF5_POSN                        equ 0005h
IOCAF_IOCAF5_POSITION                    equ 0005h
IOCAF_IOCAF5_SIZE                        equ 0001h
IOCAF_IOCAF5_LENGTH                      equ 0001h
IOCAF_IOCAF5_MASK                        equ 0020h

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 000Bh
// bitfield definitions
INTCON_IOCIF_POSN                        equ 0000h
INTCON_IOCIF_POSITION                    equ 0000h
INTCON_IOCIF_SIZE                        equ 0001h
INTCON_IOCIF_LENGTH                      equ 0001h
INTCON_IOCIF_MASK                        equ 0001h
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
INTCON_IOCIE_POSN                        equ 0003h
INTCON_IOCIE_POSITION                    equ 0003h
INTCON_IOCIE_SIZE                        equ 0001h
INTCON_IOCIE_LENGTH                      equ 0001h
INTCON_IOCIE_MASK                        equ 0008h
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
PIR1_TMR2IF_POSN                         equ 0001h
PIR1_TMR2IF_POSITION                     equ 0001h
PIR1_TMR2IF_SIZE                         equ 0001h
PIR1_TMR2IF_LENGTH                       equ 0001h
PIR1_TMR2IF_MASK                         equ 0002h
PIR1_HLTMR1IF_POSN                       equ 0002h
PIR1_HLTMR1IF_POSITION                   equ 0002h
PIR1_HLTMR1IF_SIZE                       equ 0001h
PIR1_HLTMR1IF_LENGTH                     equ 0001h
PIR1_HLTMR1IF_MASK                       equ 0004h
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
PIR2_CCP1IF_POSN                         equ 0000h
PIR2_CCP1IF_POSITION                     equ 0000h
PIR2_CCP1IF_SIZE                         equ 0001h
PIR2_CCP1IF_LENGTH                       equ 0001h
PIR2_CCP1IF_MASK                         equ 0001h
PIR2_COG1IF_POSN                         equ 0002h
PIR2_COG1IF_POSITION                     equ 0002h
PIR2_COG1IF_SIZE                         equ 0001h
PIR2_COG1IF_LENGTH                       equ 0001h
PIR2_COG1IF_MASK                         equ 0004h
PIR2_C1IF_POSN                           equ 0004h
PIR2_C1IF_POSITION                       equ 0004h
PIR2_C1IF_SIZE                           equ 0001h
PIR2_C1IF_LENGTH                         equ 0001h
PIR2_C1IF_MASK                           equ 0010h
PIR2_C2IF_POSN                           equ 0005h
PIR2_C2IF_POSITION                       equ 0005h
PIR2_C2IF_SIZE                           equ 0001h
PIR2_C2IF_LENGTH                         equ 0001h
PIR2_C2IF_MASK                           equ 0020h

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 000Fh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 0010h

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0011h
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
T1CON_TMR1CS0_POSN                       equ 0006h
T1CON_TMR1CS0_POSITION                   equ 0006h
T1CON_TMR1CS0_SIZE                       equ 0001h
T1CON_TMR1CS0_LENGTH                     equ 0001h
T1CON_TMR1CS0_MASK                       equ 0040h
T1CON_TMR1CS1_POSN                       equ 0007h
T1CON_TMR1CS1_POSITION                   equ 0007h
T1CON_TMR1CS1_SIZE                       equ 0001h
T1CON_TMR1CS1_LENGTH                     equ 0001h
T1CON_TMR1CS1_MASK                       equ 0080h

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
T1GCON_T1GGO_POSN                        equ 0003h
T1GCON_T1GGO_POSITION                    equ 0003h
T1GCON_T1GGO_SIZE                        equ 0001h
T1GCON_T1GGO_LENGTH                      equ 0001h
T1GCON_T1GGO_MASK                        equ 0008h

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0013h

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0014h

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0015h
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
ADCON0_CHS_SIZE                          equ 0004h
ADCON0_CHS_LENGTH                        equ 0004h
ADCON0_CHS_MASK                          equ 003Ch
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

// Register: IOCAP
#define IOCAP IOCAP
IOCAP                                    equ 0088h
// bitfield definitions
IOCAP_IOCAP0_POSN                        equ 0000h
IOCAP_IOCAP0_POSITION                    equ 0000h
IOCAP_IOCAP0_SIZE                        equ 0001h
IOCAP_IOCAP0_LENGTH                      equ 0001h
IOCAP_IOCAP0_MASK                        equ 0001h
IOCAP_IOCAP1_POSN                        equ 0001h
IOCAP_IOCAP1_POSITION                    equ 0001h
IOCAP_IOCAP1_SIZE                        equ 0001h
IOCAP_IOCAP1_LENGTH                      equ 0001h
IOCAP_IOCAP1_MASK                        equ 0002h
IOCAP_IOCAP2_POSN                        equ 0002h
IOCAP_IOCAP2_POSITION                    equ 0002h
IOCAP_IOCAP2_SIZE                        equ 0001h
IOCAP_IOCAP2_LENGTH                      equ 0001h
IOCAP_IOCAP2_MASK                        equ 0004h
IOCAP_IOCAP3_POSN                        equ 0003h
IOCAP_IOCAP3_POSITION                    equ 0003h
IOCAP_IOCAP3_SIZE                        equ 0001h
IOCAP_IOCAP3_LENGTH                      equ 0001h
IOCAP_IOCAP3_MASK                        equ 0008h
IOCAP_IOCAP4_POSN                        equ 0004h
IOCAP_IOCAP4_POSITION                    equ 0004h
IOCAP_IOCAP4_SIZE                        equ 0001h
IOCAP_IOCAP4_LENGTH                      equ 0001h
IOCAP_IOCAP4_MASK                        equ 0010h
IOCAP_IOCAP5_POSN                        equ 0005h
IOCAP_IOCAP5_POSITION                    equ 0005h
IOCAP_IOCAP5_SIZE                        equ 0001h
IOCAP_IOCAP5_LENGTH                      equ 0001h
IOCAP_IOCAP5_MASK                        equ 0020h

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
PIE1_HLTMR1IE_POSN                       equ 0002h
PIE1_HLTMR1IE_POSITION                   equ 0002h
PIE1_HLTMR1IE_SIZE                       equ 0001h
PIE1_HLTMR1IE_LENGTH                     equ 0001h
PIE1_HLTMR1IE_MASK                       equ 0004h
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
PIE2_CCP1IE_POSN                         equ 0000h
PIE2_CCP1IE_POSITION                     equ 0000h
PIE2_CCP1IE_SIZE                         equ 0001h
PIE2_CCP1IE_LENGTH                       equ 0001h
PIE2_CCP1IE_MASK                         equ 0001h
PIE2_COG1IE_POSN                         equ 0002h
PIE2_COG1IE_POSITION                     equ 0002h
PIE2_COG1IE_SIZE                         equ 0001h
PIE2_COG1IE_LENGTH                       equ 0001h
PIE2_COG1IE_MASK                         equ 0004h
PIE2_C1IE_POSN                           equ 0004h
PIE2_C1IE_POSITION                       equ 0004h
PIE2_C1IE_SIZE                           equ 0001h
PIE2_C1IE_LENGTH                         equ 0001h
PIE2_C1IE_MASK                           equ 0010h
PIE2_C2IE_POSN                           equ 0005h
PIE2_C2IE_POSITION                       equ 0005h
PIE2_C2IE_SIZE                           equ 0001h
PIE2_C2IE_LENGTH                         equ 0001h
PIE2_C2IE_MASK                           equ 0020h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 008Fh
// bitfield definitions
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

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 0090h
// bitfield definitions
FVRCON_FVRBUFSS_POSN                     equ 0004h
FVRCON_FVRBUFSS_POSITION                 equ 0004h
FVRCON_FVRBUFSS_SIZE                     equ 0001h
FVRCON_FVRBUFSS_LENGTH                   equ 0001h
FVRCON_FVRBUFSS_MASK                     equ 0010h
FVRCON_FVRBUFEN_POSN                     equ 0005h
FVRCON_FVRBUFEN_POSITION                 equ 0005h
FVRCON_FVRBUFEN_SIZE                     equ 0001h
FVRCON_FVRBUFEN_LENGTH                   equ 0001h
FVRCON_FVRBUFEN_MASK                     equ 0020h
FVRCON_FVRRDY_POSN                       equ 0006h
FVRCON_FVRRDY_POSITION                   equ 0006h
FVRCON_FVRRDY_SIZE                       equ 0001h
FVRCON_FVRRDY_LENGTH                     equ 0001h
FVRCON_FVRRDY_MASK                       equ 0040h
FVRCON_FVREN_POSN                        equ 0007h
FVRCON_FVREN_POSITION                    equ 0007h
FVRCON_FVREN_SIZE                        equ 0001h
FVRCON_FVREN_LENGTH                      equ 0001h
FVRCON_FVREN_MASK                        equ 0080h

// Register: DACCON0
#define DACCON0 DACCON0
DACCON0                                  equ 0091h
// bitfield definitions
DACCON0_DACPSS0_POSN                     equ 0002h
DACCON0_DACPSS0_POSITION                 equ 0002h
DACCON0_DACPSS0_SIZE                     equ 0001h
DACCON0_DACPSS0_LENGTH                   equ 0001h
DACCON0_DACPSS0_MASK                     equ 0004h
DACCON0_DACOE_POSN                       equ 0005h
DACCON0_DACOE_POSITION                   equ 0005h
DACCON0_DACOE_SIZE                       equ 0001h
DACCON0_DACOE_LENGTH                     equ 0001h
DACCON0_DACOE_MASK                       equ 0020h
DACCON0_DACRNG_POSN                      equ 0006h
DACCON0_DACRNG_POSITION                  equ 0006h
DACCON0_DACRNG_SIZE                      equ 0001h
DACCON0_DACRNG_LENGTH                    equ 0001h
DACCON0_DACRNG_MASK                      equ 0040h
DACCON0_DACEN_POSN                       equ 0007h
DACCON0_DACEN_POSITION                   equ 0007h
DACCON0_DACEN_SIZE                       equ 0001h
DACCON0_DACEN_LENGTH                     equ 0001h
DACCON0_DACEN_MASK                       equ 0080h

// Register: DACCON1
#define DACCON1 DACCON1
DACCON1                                  equ 0092h
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

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 009Bh
// bitfield definitions
CM2CON0_C2SYNC_POSN                      equ 0000h
CM2CON0_C2SYNC_POSITION                  equ 0000h
CM2CON0_C2SYNC_SIZE                      equ 0001h
CM2CON0_C2SYNC_LENGTH                    equ 0001h
CM2CON0_C2SYNC_MASK                      equ 0001h
CM2CON0_C2HYS_POSN                       equ 0001h
CM2CON0_C2HYS_POSITION                   equ 0001h
CM2CON0_C2HYS_SIZE                       equ 0001h
CM2CON0_C2HYS_LENGTH                     equ 0001h
CM2CON0_C2HYS_MASK                       equ 0002h
CM2CON0_C2SP_POSN                        equ 0002h
CM2CON0_C2SP_POSITION                    equ 0002h
CM2CON0_C2SP_SIZE                        equ 0001h
CM2CON0_C2SP_LENGTH                      equ 0001h
CM2CON0_C2SP_MASK                        equ 0004h
CM2CON0_C2ZLF_POSN                       equ 0003h
CM2CON0_C2ZLF_POSITION                   equ 0003h
CM2CON0_C2ZLF_SIZE                       equ 0001h
CM2CON0_C2ZLF_LENGTH                     equ 0001h
CM2CON0_C2ZLF_MASK                       equ 0008h
CM2CON0_C2POL_POSN                       equ 0004h
CM2CON0_C2POL_POSITION                   equ 0004h
CM2CON0_C2POL_SIZE                       equ 0001h
CM2CON0_C2POL_LENGTH                     equ 0001h
CM2CON0_C2POL_MASK                       equ 0010h
CM2CON0_C2OE_POSN                        equ 0005h
CM2CON0_C2OE_POSITION                    equ 0005h
CM2CON0_C2OE_SIZE                        equ 0001h
CM2CON0_C2OE_LENGTH                      equ 0001h
CM2CON0_C2OE_MASK                        equ 0020h
CM2CON0_C2OUT_POSN                       equ 0006h
CM2CON0_C2OUT_POSITION                   equ 0006h
CM2CON0_C2OUT_SIZE                       equ 0001h
CM2CON0_C2OUT_LENGTH                     equ 0001h
CM2CON0_C2OUT_MASK                       equ 0040h
CM2CON0_C2ON_POSN                        equ 0007h
CM2CON0_C2ON_POSITION                    equ 0007h
CM2CON0_C2ON_SIZE                        equ 0001h
CM2CON0_C2ON_LENGTH                      equ 0001h
CM2CON0_C2ON_MASK                        equ 0080h

// Register: CM2CON1
#define CM2CON1 CM2CON1
CM2CON1                                  equ 009Ch
// bitfield definitions
CM2CON1_C2NCH0_POSN                      equ 0000h
CM2CON1_C2NCH0_POSITION                  equ 0000h
CM2CON1_C2NCH0_SIZE                      equ 0001h
CM2CON1_C2NCH0_LENGTH                    equ 0001h
CM2CON1_C2NCH0_MASK                      equ 0001h
CM2CON1_C2PCH_POSN                       equ 0004h
CM2CON1_C2PCH_POSITION                   equ 0004h
CM2CON1_C2PCH_SIZE                       equ 0002h
CM2CON1_C2PCH_LENGTH                     equ 0002h
CM2CON1_C2PCH_MASK                       equ 0030h
CM2CON1_C2INTN_POSN                      equ 0006h
CM2CON1_C2INTN_POSITION                  equ 0006h
CM2CON1_C2INTN_SIZE                      equ 0001h
CM2CON1_C2INTN_LENGTH                    equ 0001h
CM2CON1_C2INTN_MASK                      equ 0040h
CM2CON1_C2INTP_POSN                      equ 0007h
CM2CON1_C2INTP_POSITION                  equ 0007h
CM2CON1_C2INTP_SIZE                      equ 0001h
CM2CON1_C2INTP_LENGTH                    equ 0001h
CM2CON1_C2INTP_MASK                      equ 0080h
CM2CON1_C2PCH0_POSN                      equ 0004h
CM2CON1_C2PCH0_POSITION                  equ 0004h
CM2CON1_C2PCH0_SIZE                      equ 0001h
CM2CON1_C2PCH0_LENGTH                    equ 0001h
CM2CON1_C2PCH0_MASK                      equ 0010h
CM2CON1_C2PCH1_POSN                      equ 0005h
CM2CON1_C2PCH1_POSITION                  equ 0005h
CM2CON1_C2PCH1_SIZE                      equ 0001h
CM2CON1_C2PCH1_LENGTH                    equ 0001h
CM2CON1_C2PCH1_MASK                      equ 0020h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 009Dh
// bitfield definitions
CM1CON0_C1SYNC_POSN                      equ 0000h
CM1CON0_C1SYNC_POSITION                  equ 0000h
CM1CON0_C1SYNC_SIZE                      equ 0001h
CM1CON0_C1SYNC_LENGTH                    equ 0001h
CM1CON0_C1SYNC_MASK                      equ 0001h
CM1CON0_C1HYS_POSN                       equ 0001h
CM1CON0_C1HYS_POSITION                   equ 0001h
CM1CON0_C1HYS_SIZE                       equ 0001h
CM1CON0_C1HYS_LENGTH                     equ 0001h
CM1CON0_C1HYS_MASK                       equ 0002h
CM1CON0_C1SP_POSN                        equ 0002h
CM1CON0_C1SP_POSITION                    equ 0002h
CM1CON0_C1SP_SIZE                        equ 0001h
CM1CON0_C1SP_LENGTH                      equ 0001h
CM1CON0_C1SP_MASK                        equ 0004h
CM1CON0_C1ZLF_POSN                       equ 0003h
CM1CON0_C1ZLF_POSITION                   equ 0003h
CM1CON0_C1ZLF_SIZE                       equ 0001h
CM1CON0_C1ZLF_LENGTH                     equ 0001h
CM1CON0_C1ZLF_MASK                       equ 0008h
CM1CON0_C1POL_POSN                       equ 0004h
CM1CON0_C1POL_POSITION                   equ 0004h
CM1CON0_C1POL_SIZE                       equ 0001h
CM1CON0_C1POL_LENGTH                     equ 0001h
CM1CON0_C1POL_MASK                       equ 0010h
CM1CON0_C1OE_POSN                        equ 0005h
CM1CON0_C1OE_POSITION                    equ 0005h
CM1CON0_C1OE_SIZE                        equ 0001h
CM1CON0_C1OE_LENGTH                      equ 0001h
CM1CON0_C1OE_MASK                        equ 0020h
CM1CON0_C1OUT_POSN                       equ 0006h
CM1CON0_C1OUT_POSITION                   equ 0006h
CM1CON0_C1OUT_SIZE                       equ 0001h
CM1CON0_C1OUT_LENGTH                     equ 0001h
CM1CON0_C1OUT_MASK                       equ 0040h
CM1CON0_C1ON_POSN                        equ 0007h
CM1CON0_C1ON_POSITION                    equ 0007h
CM1CON0_C1ON_SIZE                        equ 0001h
CM1CON0_C1ON_LENGTH                      equ 0001h
CM1CON0_C1ON_MASK                        equ 0080h

// Register: CM1CON1
#define CM1CON1 CM1CON1
CM1CON1                                  equ 009Eh
// bitfield definitions
CM1CON1_C1NCH0_POSN                      equ 0000h
CM1CON1_C1NCH0_POSITION                  equ 0000h
CM1CON1_C1NCH0_SIZE                      equ 0001h
CM1CON1_C1NCH0_LENGTH                    equ 0001h
CM1CON1_C1NCH0_MASK                      equ 0001h
CM1CON1_C1PCH_POSN                       equ 0004h
CM1CON1_C1PCH_POSITION                   equ 0004h
CM1CON1_C1PCH_SIZE                       equ 0002h
CM1CON1_C1PCH_LENGTH                     equ 0002h
CM1CON1_C1PCH_MASK                       equ 0030h
CM1CON1_C1INTN_POSN                      equ 0006h
CM1CON1_C1INTN_POSITION                  equ 0006h
CM1CON1_C1INTN_SIZE                      equ 0001h
CM1CON1_C1INTN_LENGTH                    equ 0001h
CM1CON1_C1INTN_MASK                      equ 0040h
CM1CON1_C1INTP_POSN                      equ 0007h
CM1CON1_C1INTP_POSITION                  equ 0007h
CM1CON1_C1INTP_SIZE                      equ 0001h
CM1CON1_C1INTP_LENGTH                    equ 0001h
CM1CON1_C1INTP_MASK                      equ 0080h
CM1CON1_C1PCH0_POSN                      equ 0004h
CM1CON1_C1PCH0_POSITION                  equ 0004h
CM1CON1_C1PCH0_SIZE                      equ 0001h
CM1CON1_C1PCH0_LENGTH                    equ 0001h
CM1CON1_C1PCH0_MASK                      equ 0010h
CM1CON1_C1PCH1_POSN                      equ 0005h
CM1CON1_C1PCH1_POSITION                  equ 0005h
CM1CON1_C1PCH1_SIZE                      equ 0001h
CM1CON1_C1PCH1_LENGTH                    equ 0001h
CM1CON1_C1PCH1_MASK                      equ 0020h

// Register: CMOUT
#define CMOUT CMOUT
CMOUT                                    equ 009Fh
// bitfield definitions
CMOUT_MCOUT1_POSN                        equ 0000h
CMOUT_MCOUT1_POSITION                    equ 0000h
CMOUT_MCOUT1_SIZE                        equ 0001h
CMOUT_MCOUT1_LENGTH                      equ 0001h
CMOUT_MCOUT1_MASK                        equ 0001h
CMOUT_MCOUT2_POSN                        equ 0001h
CMOUT_MCOUT2_POSITION                    equ 0001h
CMOUT_MCOUT2_SIZE                        equ 0001h
CMOUT_MCOUT2_LENGTH                      equ 0001h
CMOUT_MCOUT2_MASK                        equ 0002h

// Register: LATA
#define LATA LATA
LATA                                     equ 0105h
// bitfield definitions
LATA_LATA0_POSN                          equ 0000h
LATA_LATA0_POSITION                      equ 0000h
LATA_LATA0_SIZE                          equ 0001h
LATA_LATA0_LENGTH                        equ 0001h
LATA_LATA0_MASK                          equ 0001h
LATA_LATA1_POSN                          equ 0001h
LATA_LATA1_POSITION                      equ 0001h
LATA_LATA1_SIZE                          equ 0001h
LATA_LATA1_LENGTH                        equ 0001h
LATA_LATA1_MASK                          equ 0002h
LATA_LATA2_POSN                          equ 0002h
LATA_LATA2_POSITION                      equ 0002h
LATA_LATA2_SIZE                          equ 0001h
LATA_LATA2_LENGTH                        equ 0001h
LATA_LATA2_MASK                          equ 0004h
LATA_LATA4_POSN                          equ 0004h
LATA_LATA4_POSITION                      equ 0004h
LATA_LATA4_SIZE                          equ 0001h
LATA_LATA4_LENGTH                        equ 0001h
LATA_LATA4_MASK                          equ 0010h
LATA_LATA5_POSN                          equ 0005h
LATA_LATA5_POSITION                      equ 0005h
LATA_LATA5_SIZE                          equ 0001h
LATA_LATA5_LENGTH                        equ 0001h
LATA_LATA5_MASK                          equ 0020h

// Register: IOCAN
#define IOCAN IOCAN
IOCAN                                    equ 0108h
// bitfield definitions
IOCAN_IOCAN0_POSN                        equ 0000h
IOCAN_IOCAN0_POSITION                    equ 0000h
IOCAN_IOCAN0_SIZE                        equ 0001h
IOCAN_IOCAN0_LENGTH                      equ 0001h
IOCAN_IOCAN0_MASK                        equ 0001h
IOCAN_IOCAN1_POSN                        equ 0001h
IOCAN_IOCAN1_POSITION                    equ 0001h
IOCAN_IOCAN1_SIZE                        equ 0001h
IOCAN_IOCAN1_LENGTH                      equ 0001h
IOCAN_IOCAN1_MASK                        equ 0002h
IOCAN_IOCAN2_POSN                        equ 0002h
IOCAN_IOCAN2_POSITION                    equ 0002h
IOCAN_IOCAN2_SIZE                        equ 0001h
IOCAN_IOCAN2_LENGTH                      equ 0001h
IOCAN_IOCAN2_MASK                        equ 0004h
IOCAN_IOCAN3_POSN                        equ 0003h
IOCAN_IOCAN3_POSITION                    equ 0003h
IOCAN_IOCAN3_SIZE                        equ 0001h
IOCAN_IOCAN3_LENGTH                      equ 0001h
IOCAN_IOCAN3_MASK                        equ 0008h
IOCAN_IOCAN4_POSN                        equ 0004h
IOCAN_IOCAN4_POSITION                    equ 0004h
IOCAN_IOCAN4_SIZE                        equ 0001h
IOCAN_IOCAN4_LENGTH                      equ 0001h
IOCAN_IOCAN4_MASK                        equ 0010h
IOCAN_IOCAN5_POSN                        equ 0005h
IOCAN_IOCAN5_POSITION                    equ 0005h
IOCAN_IOCAN5_SIZE                        equ 0001h
IOCAN_IOCAN5_LENGTH                      equ 0001h
IOCAN_IOCAN5_MASK                        equ 0020h

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 010Ch
// bitfield definitions
WPUA_WPUA0_POSN                          equ 0000h
WPUA_WPUA0_POSITION                      equ 0000h
WPUA_WPUA0_SIZE                          equ 0001h
WPUA_WPUA0_LENGTH                        equ 0001h
WPUA_WPUA0_MASK                          equ 0001h
WPUA_WPUA1_POSN                          equ 0001h
WPUA_WPUA1_POSITION                      equ 0001h
WPUA_WPUA1_SIZE                          equ 0001h
WPUA_WPUA1_LENGTH                        equ 0001h
WPUA_WPUA1_MASK                          equ 0002h
WPUA_WPUA2_POSN                          equ 0002h
WPUA_WPUA2_POSITION                      equ 0002h
WPUA_WPUA2_SIZE                          equ 0001h
WPUA_WPUA2_LENGTH                        equ 0001h
WPUA_WPUA2_MASK                          equ 0004h
WPUA_WPUA3_POSN                          equ 0003h
WPUA_WPUA3_POSITION                      equ 0003h
WPUA_WPUA3_SIZE                          equ 0001h
WPUA_WPUA3_LENGTH                        equ 0001h
WPUA_WPUA3_MASK                          equ 0008h
WPUA_WPUA4_POSN                          equ 0004h
WPUA_WPUA4_POSITION                      equ 0004h
WPUA_WPUA4_SIZE                          equ 0001h
WPUA_WPUA4_LENGTH                        equ 0001h
WPUA_WPUA4_MASK                          equ 0010h
WPUA_WPUA5_POSN                          equ 0005h
WPUA_WPUA5_POSITION                      equ 0005h
WPUA_WPUA5_SIZE                          equ 0001h
WPUA_WPUA5_LENGTH                        equ 0001h
WPUA_WPUA5_MASK                          equ 0020h

// Register: SLRCONA
#define SLRCONA SLRCONA
SLRCONA                                  equ 010Dh
// bitfield definitions
SLRCONA_SLRA0_POSN                       equ 0000h
SLRCONA_SLRA0_POSITION                   equ 0000h
SLRCONA_SLRA0_SIZE                       equ 0001h
SLRCONA_SLRA0_LENGTH                     equ 0001h
SLRCONA_SLRA0_MASK                       equ 0001h
SLRCONA_SLRA2_POSN                       equ 0002h
SLRCONA_SLRA2_POSITION                   equ 0002h
SLRCONA_SLRA2_SIZE                       equ 0001h
SLRCONA_SLRA2_LENGTH                     equ 0001h
SLRCONA_SLRA2_MASK                       equ 0004h

// Register: PCON
#define PCON PCON
PCON                                     equ 010Fh
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

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 0110h
// bitfield definitions
TMR2_TMR2_POSN                           equ 0000h
TMR2_TMR2_POSITION                       equ 0000h
TMR2_TMR2_SIZE                           equ 0008h
TMR2_TMR2_LENGTH                         equ 0008h
TMR2_TMR2_MASK                           equ 00FFh

// Register: PR2
#define PR2 PR2
PR2                                      equ 0111h
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0112h
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
T2CON_T2OUTPS_POSN                       equ 0003h
T2CON_T2OUTPS_POSITION                   equ 0003h
T2CON_T2OUTPS_SIZE                       equ 0004h
T2CON_T2OUTPS_LENGTH                     equ 0004h
T2CON_T2OUTPS_MASK                       equ 0078h
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
T2CON_T2OUTPS0_POSN                      equ 0003h
T2CON_T2OUTPS0_POSITION                  equ 0003h
T2CON_T2OUTPS0_SIZE                      equ 0001h
T2CON_T2OUTPS0_LENGTH                    equ 0001h
T2CON_T2OUTPS0_MASK                      equ 0008h
T2CON_T2OUTPS1_POSN                      equ 0004h
T2CON_T2OUTPS1_POSITION                  equ 0004h
T2CON_T2OUTPS1_SIZE                      equ 0001h
T2CON_T2OUTPS1_LENGTH                    equ 0001h
T2CON_T2OUTPS1_MASK                      equ 0010h
T2CON_T2OUTPS2_POSN                      equ 0005h
T2CON_T2OUTPS2_POSITION                  equ 0005h
T2CON_T2OUTPS2_SIZE                      equ 0001h
T2CON_T2OUTPS2_LENGTH                    equ 0001h
T2CON_T2OUTPS2_MASK                      equ 0020h
T2CON_T2OUTPS3_POSN                      equ 0006h
T2CON_T2OUTPS3_POSITION                  equ 0006h
T2CON_T2OUTPS3_SIZE                      equ 0001h
T2CON_T2OUTPS3_LENGTH                    equ 0001h
T2CON_T2OUTPS3_MASK                      equ 0040h

// Register: HLTMR1
#define HLTMR1 HLTMR1
HLTMR1                                   equ 0113h
// bitfield definitions
HLTMR1_HLTMR1_POSN                       equ 0000h
HLTMR1_HLTMR1_POSITION                   equ 0000h
HLTMR1_HLTMR1_SIZE                       equ 0008h
HLTMR1_HLTMR1_LENGTH                     equ 0008h
HLTMR1_HLTMR1_MASK                       equ 00FFh

// Register: HLTPR1
#define HLTPR1 HLTPR1
HLTPR1                                   equ 0114h
// bitfield definitions
HLTPR1_HLTPR1_POSN                       equ 0000h
HLTPR1_HLTPR1_POSITION                   equ 0000h
HLTPR1_HLTPR1_SIZE                       equ 0008h
HLTPR1_HLTPR1_LENGTH                     equ 0008h
HLTPR1_HLTPR1_MASK                       equ 00FFh

// Register: HLT1CON0
#define HLT1CON0 HLT1CON0
HLT1CON0                                 equ 0115h
// bitfield definitions
HLT1CON0_H1CKPS_POSN                     equ 0000h
HLT1CON0_H1CKPS_POSITION                 equ 0000h
HLT1CON0_H1CKPS_SIZE                     equ 0002h
HLT1CON0_H1CKPS_LENGTH                   equ 0002h
HLT1CON0_H1CKPS_MASK                     equ 0003h
HLT1CON0_H1ON_POSN                       equ 0002h
HLT1CON0_H1ON_POSITION                   equ 0002h
HLT1CON0_H1ON_SIZE                       equ 0001h
HLT1CON0_H1ON_LENGTH                     equ 0001h
HLT1CON0_H1ON_MASK                       equ 0004h
HLT1CON0_H1OUTPS_POSN                    equ 0003h
HLT1CON0_H1OUTPS_POSITION                equ 0003h
HLT1CON0_H1OUTPS_SIZE                    equ 0004h
HLT1CON0_H1OUTPS_LENGTH                  equ 0004h
HLT1CON0_H1OUTPS_MASK                    equ 0078h
HLT1CON0_H1CKPS0_POSN                    equ 0000h
HLT1CON0_H1CKPS0_POSITION                equ 0000h
HLT1CON0_H1CKPS0_SIZE                    equ 0001h
HLT1CON0_H1CKPS0_LENGTH                  equ 0001h
HLT1CON0_H1CKPS0_MASK                    equ 0001h
HLT1CON0_H1CKPS1_POSN                    equ 0001h
HLT1CON0_H1CKPS1_POSITION                equ 0001h
HLT1CON0_H1CKPS1_SIZE                    equ 0001h
HLT1CON0_H1CKPS1_LENGTH                  equ 0001h
HLT1CON0_H1CKPS1_MASK                    equ 0002h
HLT1CON0_H1OUTPS0_POSN                   equ 0003h
HLT1CON0_H1OUTPS0_POSITION               equ 0003h
HLT1CON0_H1OUTPS0_SIZE                   equ 0001h
HLT1CON0_H1OUTPS0_LENGTH                 equ 0001h
HLT1CON0_H1OUTPS0_MASK                   equ 0008h
HLT1CON0_H1OUTPS1_POSN                   equ 0004h
HLT1CON0_H1OUTPS1_POSITION               equ 0004h
HLT1CON0_H1OUTPS1_SIZE                   equ 0001h
HLT1CON0_H1OUTPS1_LENGTH                 equ 0001h
HLT1CON0_H1OUTPS1_MASK                   equ 0010h
HLT1CON0_H1OUTPS2_POSN                   equ 0005h
HLT1CON0_H1OUTPS2_POSITION               equ 0005h
HLT1CON0_H1OUTPS2_SIZE                   equ 0001h
HLT1CON0_H1OUTPS2_LENGTH                 equ 0001h
HLT1CON0_H1OUTPS2_MASK                   equ 0020h
HLT1CON0_H1OUTPS3_POSN                   equ 0006h
HLT1CON0_H1OUTPS3_POSITION               equ 0006h
HLT1CON0_H1OUTPS3_SIZE                   equ 0001h
HLT1CON0_H1OUTPS3_LENGTH                 equ 0001h
HLT1CON0_H1OUTPS3_MASK                   equ 0040h

// Register: HLT1CON1
#define HLT1CON1 HLT1CON1
HLT1CON1                                 equ 0116h
// bitfield definitions
HLT1CON1_H1REREN_POSN                    equ 0000h
HLT1CON1_H1REREN_POSITION                equ 0000h
HLT1CON1_H1REREN_SIZE                    equ 0001h
HLT1CON1_H1REREN_LENGTH                  equ 0001h
HLT1CON1_H1REREN_MASK                    equ 0001h
HLT1CON1_H1FEREN_POSN                    equ 0001h
HLT1CON1_H1FEREN_POSITION                equ 0001h
HLT1CON1_H1FEREN_SIZE                    equ 0001h
HLT1CON1_H1FEREN_LENGTH                  equ 0001h
HLT1CON1_H1FEREN_MASK                    equ 0002h
HLT1CON1_H1ERS_POSN                      equ 0002h
HLT1CON1_H1ERS_POSITION                  equ 0002h
HLT1CON1_H1ERS_SIZE                      equ 0003h
HLT1CON1_H1ERS_LENGTH                    equ 0003h
HLT1CON1_H1ERS_MASK                      equ 001Ch
HLT1CON1_H1ERS0_POSN                     equ 0002h
HLT1CON1_H1ERS0_POSITION                 equ 0002h
HLT1CON1_H1ERS0_SIZE                     equ 0001h
HLT1CON1_H1ERS0_LENGTH                   equ 0001h
HLT1CON1_H1ERS0_MASK                     equ 0004h
HLT1CON1_H1ERS1_POSN                     equ 0003h
HLT1CON1_H1ERS1_POSITION                 equ 0003h
HLT1CON1_H1ERS1_SIZE                     equ 0001h
HLT1CON1_H1ERS1_LENGTH                   equ 0001h
HLT1CON1_H1ERS1_MASK                     equ 0008h
HLT1CON1_H1ERS2_POSN                     equ 0004h
HLT1CON1_H1ERS2_POSITION                 equ 0004h
HLT1CON1_H1ERS2_SIZE                     equ 0001h
HLT1CON1_H1ERS2_LENGTH                   equ 0001h
HLT1CON1_H1ERS2_MASK                     equ 0010h

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

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 0188h
// bitfield definitions
APFCON_COG1O0SEL_POSN                    equ 0000h
APFCON_COG1O0SEL_POSITION                equ 0000h
APFCON_COG1O0SEL_SIZE                    equ 0001h
APFCON_COG1O0SEL_LENGTH                  equ 0001h
APFCON_COG1O0SEL_MASK                    equ 0001h
APFCON_COG1O1SEL_POSN                    equ 0001h
APFCON_COG1O1SEL_POSITION                equ 0001h
APFCON_COG1O1SEL_SIZE                    equ 0001h
APFCON_COG1O1SEL_LENGTH                  equ 0001h
APFCON_COG1O1SEL_MASK                    equ 0002h
APFCON_COG1FSEL_POSN                     equ 0002h
APFCON_COG1FSEL_POSITION                 equ 0002h
APFCON_COG1FSEL_SIZE                     equ 0001h
APFCON_COG1FSEL_LENGTH                   equ 0001h
APFCON_COG1FSEL_MASK                     equ 0004h
APFCON_T1GSEL_POSN                       equ 0004h
APFCON_T1GSEL_POSITION                   equ 0004h
APFCON_T1GSEL_SIZE                       equ 0001h
APFCON_T1GSEL_LENGTH                     equ 0001h
APFCON_T1GSEL_MASK                       equ 0010h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0189h
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

// Register: PMCON1
#define PMCON1 PMCON1
PMCON1                                   equ 018Ch
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

// Register: PMCON2
#define PMCON2 PMCON2
PMCON2                                   equ 018Dh
// bitfield definitions
PMCON2_PMCON2_POSN                       equ 0000h
PMCON2_PMCON2_POSITION                   equ 0000h
PMCON2_PMCON2_SIZE                       equ 0008h
PMCON2_PMCON2_LENGTH                     equ 0008h
PMCON2_PMCON2_MASK                       equ 00FFh

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 018Eh
// bitfield definitions
PMADRL_PMADRL_POSN                       equ 0000h
PMADRL_PMADRL_POSITION                   equ 0000h
PMADRL_PMADRL_SIZE                       equ 0008h
PMADRL_PMADRL_LENGTH                     equ 0008h
PMADRL_PMADRL_MASK                       equ 00FFh

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 018Fh
// bitfield definitions
PMADRH_PMADRH_POSN                       equ 0000h
PMADRH_PMADRH_POSITION                   equ 0000h
PMADRH_PMADRH_SIZE                       equ 0002h
PMADRH_PMADRH_LENGTH                     equ 0002h
PMADRH_PMADRH_MASK                       equ 0003h

// Register: PMDATL
#define PMDATL PMDATL
PMDATL                                   equ 0190h
// bitfield definitions
PMDATL_PMDATL_POSN                       equ 0000h
PMDATL_PMDATL_POSITION                   equ 0000h
PMDATL_PMDATL_SIZE                       equ 0008h
PMDATL_PMDATL_LENGTH                     equ 0008h
PMDATL_PMDATL_MASK                       equ 00FFh

// Register: PMDATH
#define PMDATH PMDATH
PMDATH                                   equ 0191h
// bitfield definitions
PMDATH_PMDATH_POSN                       equ 0000h
PMDATH_PMDATH_POSITION                   equ 0000h
PMDATH_PMDATH_SIZE                       equ 0006h
PMDATH_PMDATH_LENGTH                     equ 0006h
PMDATH_PMDATH_MASK                       equ 003Fh

// Register: COG1PH
#define COG1PH COG1PH
COG1PH                                   equ 0192h
// bitfield definitions
COG1PH_G1PH_POSN                         equ 0000h
COG1PH_G1PH_POSITION                     equ 0000h
COG1PH_G1PH_SIZE                         equ 0004h
COG1PH_G1PH_LENGTH                       equ 0004h
COG1PH_G1PH_MASK                         equ 000Fh
COG1PH_G1PH0_POSN                        equ 0000h
COG1PH_G1PH0_POSITION                    equ 0000h
COG1PH_G1PH0_SIZE                        equ 0001h
COG1PH_G1PH0_LENGTH                      equ 0001h
COG1PH_G1PH0_MASK                        equ 0001h
COG1PH_G1PH1_POSN                        equ 0001h
COG1PH_G1PH1_POSITION                    equ 0001h
COG1PH_G1PH1_SIZE                        equ 0001h
COG1PH_G1PH1_LENGTH                      equ 0001h
COG1PH_G1PH1_MASK                        equ 0002h
COG1PH_G1PH2_POSN                        equ 0002h
COG1PH_G1PH2_POSITION                    equ 0002h
COG1PH_G1PH2_SIZE                        equ 0001h
COG1PH_G1PH2_LENGTH                      equ 0001h
COG1PH_G1PH2_MASK                        equ 0004h
COG1PH_G1PH3_POSN                        equ 0003h
COG1PH_G1PH3_POSITION                    equ 0003h
COG1PH_G1PH3_SIZE                        equ 0001h
COG1PH_G1PH3_LENGTH                      equ 0001h
COG1PH_G1PH3_MASK                        equ 0008h

// Register: COG1BLK
#define COG1BLK COG1BLK
COG1BLK                                  equ 0193h
// bitfield definitions
COG1BLK_G1BLKF_POSN                      equ 0000h
COG1BLK_G1BLKF_POSITION                  equ 0000h
COG1BLK_G1BLKF_SIZE                      equ 0004h
COG1BLK_G1BLKF_LENGTH                    equ 0004h
COG1BLK_G1BLKF_MASK                      equ 000Fh
COG1BLK_G1BLKR_POSN                      equ 0004h
COG1BLK_G1BLKR_POSITION                  equ 0004h
COG1BLK_G1BLKR_SIZE                      equ 0004h
COG1BLK_G1BLKR_LENGTH                    equ 0004h
COG1BLK_G1BLKR_MASK                      equ 00F0h
COG1BLK_G1BLKF0_POSN                     equ 0000h
COG1BLK_G1BLKF0_POSITION                 equ 0000h
COG1BLK_G1BLKF0_SIZE                     equ 0001h
COG1BLK_G1BLKF0_LENGTH                   equ 0001h
COG1BLK_G1BLKF0_MASK                     equ 0001h
COG1BLK_G1BLKF1_POSN                     equ 0001h
COG1BLK_G1BLKF1_POSITION                 equ 0001h
COG1BLK_G1BLKF1_SIZE                     equ 0001h
COG1BLK_G1BLKF1_LENGTH                   equ 0001h
COG1BLK_G1BLKF1_MASK                     equ 0002h
COG1BLK_G1BLKF2_POSN                     equ 0002h
COG1BLK_G1BLKF2_POSITION                 equ 0002h
COG1BLK_G1BLKF2_SIZE                     equ 0001h
COG1BLK_G1BLKF2_LENGTH                   equ 0001h
COG1BLK_G1BLKF2_MASK                     equ 0004h
COG1BLK_G1BLKF3_POSN                     equ 0003h
COG1BLK_G1BLKF3_POSITION                 equ 0003h
COG1BLK_G1BLKF3_SIZE                     equ 0001h
COG1BLK_G1BLKF3_LENGTH                   equ 0001h
COG1BLK_G1BLKF3_MASK                     equ 0008h
COG1BLK_G1BLKR0_POSN                     equ 0004h
COG1BLK_G1BLKR0_POSITION                 equ 0004h
COG1BLK_G1BLKR0_SIZE                     equ 0001h
COG1BLK_G1BLKR0_LENGTH                   equ 0001h
COG1BLK_G1BLKR0_MASK                     equ 0010h
COG1BLK_G1BLKR1_POSN                     equ 0005h
COG1BLK_G1BLKR1_POSITION                 equ 0005h
COG1BLK_G1BLKR1_SIZE                     equ 0001h
COG1BLK_G1BLKR1_LENGTH                   equ 0001h
COG1BLK_G1BLKR1_MASK                     equ 0020h
COG1BLK_G1BLKR2_POSN                     equ 0006h
COG1BLK_G1BLKR2_POSITION                 equ 0006h
COG1BLK_G1BLKR2_SIZE                     equ 0001h
COG1BLK_G1BLKR2_LENGTH                   equ 0001h
COG1BLK_G1BLKR2_MASK                     equ 0040h
COG1BLK_G1BLKR3_POSN                     equ 0007h
COG1BLK_G1BLKR3_POSITION                 equ 0007h
COG1BLK_G1BLKR3_SIZE                     equ 0001h
COG1BLK_G1BLKR3_LENGTH                   equ 0001h
COG1BLK_G1BLKR3_MASK                     equ 0080h

// Register: COG1DB
#define COG1DB COG1DB
COG1DB                                   equ 0194h
// bitfield definitions
COG1DB_G1DBF_POSN                        equ 0000h
COG1DB_G1DBF_POSITION                    equ 0000h
COG1DB_G1DBF_SIZE                        equ 0004h
COG1DB_G1DBF_LENGTH                      equ 0004h
COG1DB_G1DBF_MASK                        equ 000Fh
COG1DB_G1DBR_POSN                        equ 0004h
COG1DB_G1DBR_POSITION                    equ 0004h
COG1DB_G1DBR_SIZE                        equ 0004h
COG1DB_G1DBR_LENGTH                      equ 0004h
COG1DB_G1DBR_MASK                        equ 00F0h
COG1DB_G1DBF0_POSN                       equ 0000h
COG1DB_G1DBF0_POSITION                   equ 0000h
COG1DB_G1DBF0_SIZE                       equ 0001h
COG1DB_G1DBF0_LENGTH                     equ 0001h
COG1DB_G1DBF0_MASK                       equ 0001h
COG1DB_G1DBF1_POSN                       equ 0001h
COG1DB_G1DBF1_POSITION                   equ 0001h
COG1DB_G1DBF1_SIZE                       equ 0001h
COG1DB_G1DBF1_LENGTH                     equ 0001h
COG1DB_G1DBF1_MASK                       equ 0002h
COG1DB_G1DBF2_POSN                       equ 0002h
COG1DB_G1DBF2_POSITION                   equ 0002h
COG1DB_G1DBF2_SIZE                       equ 0001h
COG1DB_G1DBF2_LENGTH                     equ 0001h
COG1DB_G1DBF2_MASK                       equ 0004h
COG1DB_G1DBF3_POSN                       equ 0003h
COG1DB_G1DBF3_POSITION                   equ 0003h
COG1DB_G1DBF3_SIZE                       equ 0001h
COG1DB_G1DBF3_LENGTH                     equ 0001h
COG1DB_G1DBF3_MASK                       equ 0008h
COG1DB_G1BDR0_POSN                       equ 0004h
COG1DB_G1BDR0_POSITION                   equ 0004h
COG1DB_G1BDR0_SIZE                       equ 0001h
COG1DB_G1BDR0_LENGTH                     equ 0001h
COG1DB_G1BDR0_MASK                       equ 0010h
COG1DB_G1BDR1_POSN                       equ 0005h
COG1DB_G1BDR1_POSITION                   equ 0005h
COG1DB_G1BDR1_SIZE                       equ 0001h
COG1DB_G1BDR1_LENGTH                     equ 0001h
COG1DB_G1BDR1_MASK                       equ 0020h
COG1DB_G1BDR2_POSN                       equ 0006h
COG1DB_G1BDR2_POSITION                   equ 0006h
COG1DB_G1BDR2_SIZE                       equ 0001h
COG1DB_G1BDR2_LENGTH                     equ 0001h
COG1DB_G1BDR2_MASK                       equ 0040h
COG1DB_G1BDR3_POSN                       equ 0007h
COG1DB_G1BDR3_POSITION                   equ 0007h
COG1DB_G1BDR3_SIZE                       equ 0001h
COG1DB_G1BDR3_LENGTH                     equ 0001h
COG1DB_G1BDR3_MASK                       equ 0080h

// Register: COG1CON0
#define COG1CON0 COG1CON0
COG1CON0                                 equ 0195h
// bitfield definitions
COG1CON0_G1CS_POSN                       equ 0000h
COG1CON0_G1CS_POSITION                   equ 0000h
COG1CON0_G1CS_SIZE                       equ 0002h
COG1CON0_G1CS_LENGTH                     equ 0002h
COG1CON0_G1CS_MASK                       equ 0003h
COG1CON0_G1LD_POSN                       equ 0002h
COG1CON0_G1LD_POSITION                   equ 0002h
COG1CON0_G1LD_SIZE                       equ 0001h
COG1CON0_G1LD_LENGTH                     equ 0001h
COG1CON0_G1LD_MASK                       equ 0004h
COG1CON0_G1POL0_POSN                     equ 0003h
COG1CON0_G1POL0_POSITION                 equ 0003h
COG1CON0_G1POL0_SIZE                     equ 0001h
COG1CON0_G1POL0_LENGTH                   equ 0001h
COG1CON0_G1POL0_MASK                     equ 0008h
COG1CON0_G1POL1_POSN                     equ 0004h
COG1CON0_G1POL1_POSITION                 equ 0004h
COG1CON0_G1POL1_SIZE                     equ 0001h
COG1CON0_G1POL1_LENGTH                   equ 0001h
COG1CON0_G1POL1_MASK                     equ 0010h
COG1CON0_G1OE0_POSN                      equ 0005h
COG1CON0_G1OE0_POSITION                  equ 0005h
COG1CON0_G1OE0_SIZE                      equ 0001h
COG1CON0_G1OE0_LENGTH                    equ 0001h
COG1CON0_G1OE0_MASK                      equ 0020h
COG1CON0_G1OE1_POSN                      equ 0006h
COG1CON0_G1OE1_POSITION                  equ 0006h
COG1CON0_G1OE1_SIZE                      equ 0001h
COG1CON0_G1OE1_LENGTH                    equ 0001h
COG1CON0_G1OE1_MASK                      equ 0040h
COG1CON0_G1EN_POSN                       equ 0007h
COG1CON0_G1EN_POSITION                   equ 0007h
COG1CON0_G1EN_SIZE                       equ 0001h
COG1CON0_G1EN_LENGTH                     equ 0001h
COG1CON0_G1EN_MASK                       equ 0080h
COG1CON0_G1CS0_POSN                      equ 0000h
COG1CON0_G1CS0_POSITION                  equ 0000h
COG1CON0_G1CS0_SIZE                      equ 0001h
COG1CON0_G1CS0_LENGTH                    equ 0001h
COG1CON0_G1CS0_MASK                      equ 0001h
COG1CON0_G1CS1_POSN                      equ 0001h
COG1CON0_G1CS1_POSITION                  equ 0001h
COG1CON0_G1CS1_SIZE                      equ 0001h
COG1CON0_G1CS1_LENGTH                    equ 0001h
COG1CON0_G1CS1_MASK                      equ 0002h

// Register: COG1CON1
#define COG1CON1 COG1CON1
COG1CON1                                 equ 0196h
// bitfield definitions
COG1CON1_G1RS_POSN                       equ 0000h
COG1CON1_G1RS_POSITION                   equ 0000h
COG1CON1_G1RS_SIZE                       equ 0003h
COG1CON1_G1RS_LENGTH                     equ 0003h
COG1CON1_G1RS_MASK                       equ 0007h
COG1CON1_G1FS_POSN                       equ 0003h
COG1CON1_G1FS_POSITION                   equ 0003h
COG1CON1_G1FS_SIZE                       equ 0003h
COG1CON1_G1FS_LENGTH                     equ 0003h
COG1CON1_G1FS_MASK                       equ 0038h
COG1CON1_G1RSIM_POSN                     equ 0006h
COG1CON1_G1RSIM_POSITION                 equ 0006h
COG1CON1_G1RSIM_SIZE                     equ 0001h
COG1CON1_G1RSIM_LENGTH                   equ 0001h
COG1CON1_G1RSIM_MASK                     equ 0040h
COG1CON1_G1FSIM_POSN                     equ 0007h
COG1CON1_G1FSIM_POSITION                 equ 0007h
COG1CON1_G1FSIM_SIZE                     equ 0001h
COG1CON1_G1FSIM_LENGTH                   equ 0001h
COG1CON1_G1FSIM_MASK                     equ 0080h
COG1CON1_G1RS0_POSN                      equ 0000h
COG1CON1_G1RS0_POSITION                  equ 0000h
COG1CON1_G1RS0_SIZE                      equ 0001h
COG1CON1_G1RS0_LENGTH                    equ 0001h
COG1CON1_G1RS0_MASK                      equ 0001h
COG1CON1_G1RS1_POSN                      equ 0001h
COG1CON1_G1RS1_POSITION                  equ 0001h
COG1CON1_G1RS1_SIZE                      equ 0001h
COG1CON1_G1RS1_LENGTH                    equ 0001h
COG1CON1_G1RS1_MASK                      equ 0002h
COG1CON1_G1RS2_POSN                      equ 0002h
COG1CON1_G1RS2_POSITION                  equ 0002h
COG1CON1_G1RS2_SIZE                      equ 0001h
COG1CON1_G1RS2_LENGTH                    equ 0001h
COG1CON1_G1RS2_MASK                      equ 0004h
COG1CON1_G1FS0_POSN                      equ 0003h
COG1CON1_G1FS0_POSITION                  equ 0003h
COG1CON1_G1FS0_SIZE                      equ 0001h
COG1CON1_G1FS0_LENGTH                    equ 0001h
COG1CON1_G1FS0_MASK                      equ 0008h
COG1CON1_G1FS1_POSN                      equ 0004h
COG1CON1_G1FS1_POSITION                  equ 0004h
COG1CON1_G1FS1_SIZE                      equ 0001h
COG1CON1_G1FS1_LENGTH                    equ 0001h
COG1CON1_G1FS1_MASK                      equ 0010h
COG1CON1_G1FS2_POSN                      equ 0005h
COG1CON1_G1FS2_POSITION                  equ 0005h
COG1CON1_G1FS2_SIZE                      equ 0001h
COG1CON1_G1FS2_LENGTH                    equ 0001h
COG1CON1_G1FS2_MASK                      equ 0020h

// Register: COG1ASD
#define COG1ASD COG1ASD
COG1ASD                                  equ 0197h
// bitfield definitions
COG1ASD_G1ASDSFLT_POSN                   equ 0000h
COG1ASD_G1ASDSFLT_POSITION               equ 0000h
COG1ASD_G1ASDSFLT_SIZE                   equ 0001h
COG1ASD_G1ASDSFLT_LENGTH                 equ 0001h
COG1ASD_G1ASDSFLT_MASK                   equ 0001h
COG1ASD_G1ASDSC1_POSN                    equ 0001h
COG1ASD_G1ASDSC1_POSITION                equ 0001h
COG1ASD_G1ASDSC1_SIZE                    equ 0001h
COG1ASD_G1ASDSC1_LENGTH                  equ 0001h
COG1ASD_G1ASDSC1_MASK                    equ 0002h
COG1ASD_G1ASDSC2_POSN                    equ 0002h
COG1ASD_G1ASDSC2_POSITION                equ 0002h
COG1ASD_G1ASDSC2_SIZE                    equ 0001h
COG1ASD_G1ASDSC2_LENGTH                  equ 0001h
COG1ASD_G1ASDSC2_MASK                    equ 0004h
COG1ASD_G1ASDSHLT_POSN                   equ 0003h
COG1ASD_G1ASDSHLT_POSITION               equ 0003h
COG1ASD_G1ASDSHLT_SIZE                   equ 0001h
COG1ASD_G1ASDSHLT_LENGTH                 equ 0001h
COG1ASD_G1ASDSHLT_MASK                   equ 0008h
COG1ASD_G1ASDL0_POSN                     equ 0004h
COG1ASD_G1ASDL0_POSITION                 equ 0004h
COG1ASD_G1ASDL0_SIZE                     equ 0001h
COG1ASD_G1ASDL0_LENGTH                   equ 0001h
COG1ASD_G1ASDL0_MASK                     equ 0010h
COG1ASD_G1ASDL1_POSN                     equ 0005h
COG1ASD_G1ASDL1_POSITION                 equ 0005h
COG1ASD_G1ASDL1_SIZE                     equ 0001h
COG1ASD_G1ASDL1_LENGTH                   equ 0001h
COG1ASD_G1ASDL1_MASK                     equ 0020h
COG1ASD_G1ARSEN_POSN                     equ 0006h
COG1ASD_G1ARSEN_POSITION                 equ 0006h
COG1ASD_G1ARSEN_SIZE                     equ 0001h
COG1ASD_G1ARSEN_LENGTH                   equ 0001h
COG1ASD_G1ARSEN_MASK                     equ 0040h
COG1ASD_G1ASDE_POSN                      equ 0007h
COG1ASD_G1ASDE_POSITION                  equ 0007h
COG1ASD_G1ASDE_SIZE                      equ 0001h
COG1ASD_G1ASDE_LENGTH                    equ 0001h
COG1ASD_G1ASDE_MASK                      equ 0080h

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
#define ADFM                             BANKMASK(ADCON0), 7
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
#define C1HYS                            BANKMASK(CM1CON0), 1
#define C1IE                             BANKMASK(PIE2), 4
#define C1IF                             BANKMASK(PIR2), 4
#define C1INTN                           BANKMASK(CM1CON1), 6
#define C1INTP                           BANKMASK(CM1CON1), 7
#define C1NCH0                           BANKMASK(CM1CON1), 0
#define C1OE                             BANKMASK(CM1CON0), 5
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1PCH0                           BANKMASK(CM1CON1), 4
#define C1PCH1                           BANKMASK(CM1CON1), 5
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1SP                             BANKMASK(CM1CON0), 2
#define C1SYNC                           BANKMASK(CM1CON0), 0
#define C1ZLF                            BANKMASK(CM1CON0), 3
#define C2HYS                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE2), 5
#define C2IF                             BANKMASK(PIR2), 5
#define C2INTN                           BANKMASK(CM2CON1), 6
#define C2INTP                           BANKMASK(CM2CON1), 7
#define C2NCH0                           BANKMASK(CM2CON1), 0
#define C2OE                             BANKMASK(CM2CON0), 5
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2PCH0                           BANKMASK(CM2CON1), 4
#define C2PCH1                           BANKMASK(CM2CON1), 5
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2SP                             BANKMASK(CM2CON0), 2
#define C2SYNC                           BANKMASK(CM2CON0), 0
#define C2ZLF                            BANKMASK(CM2CON0), 3
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1IE                           BANKMASK(PIE2), 0
#define CCP1IF                           BANKMASK(PIR2), 0
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define COG1FSEL                         BANKMASK(APFCON), 2
#define COG1IE                           BANKMASK(PIE2), 2
#define COG1IF                           BANKMASK(PIR2), 2
#define COG1O0SEL                        BANKMASK(APFCON), 0
#define COG1O1SEL                        BANKMASK(APFCON), 1
#define DACEN                            BANKMASK(DACCON0), 7
#define DACOE                            BANKMASK(DACCON0), 5
#define DACPSS0                          BANKMASK(DACCON0), 2
#define DACR0                            BANKMASK(DACCON1), 0
#define DACR1                            BANKMASK(DACCON1), 1
#define DACR2                            BANKMASK(DACCON1), 2
#define DACR3                            BANKMASK(DACCON1), 3
#define DACR4                            BANKMASK(DACCON1), 4
#define DACRNG                           BANKMASK(DACCON0), 6
#define DC                               BANKMASK(STATUS), 1
#define DC1B0                            BANKMASK(CCP1CON), 4
#define DC1B1                            BANKMASK(CCP1CON), 5
#define FVRBUFEN                         BANKMASK(FVRCON), 5
#define FVRBUFSS                         BANKMASK(FVRCON), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define G1ARSEN                          BANKMASK(COG1ASD), 6
#define G1ASDE                           BANKMASK(COG1ASD), 7
#define G1ASDL0                          BANKMASK(COG1ASD), 4
#define G1ASDL1                          BANKMASK(COG1ASD), 5
#define G1ASDSC1                         BANKMASK(COG1ASD), 1
#define G1ASDSC2                         BANKMASK(COG1ASD), 2
#define G1ASDSFLT                        BANKMASK(COG1ASD), 0
#define G1ASDSHLT                        BANKMASK(COG1ASD), 3
#define G1BDR0                           BANKMASK(COG1DB), 4
#define G1BDR1                           BANKMASK(COG1DB), 5
#define G1BDR2                           BANKMASK(COG1DB), 6
#define G1BDR3                           BANKMASK(COG1DB), 7
#define G1BLKF0                          BANKMASK(COG1BLK), 0
#define G1BLKF1                          BANKMASK(COG1BLK), 1
#define G1BLKF2                          BANKMASK(COG1BLK), 2
#define G1BLKF3                          BANKMASK(COG1BLK), 3
#define G1BLKR0                          BANKMASK(COG1BLK), 4
#define G1BLKR1                          BANKMASK(COG1BLK), 5
#define G1BLKR2                          BANKMASK(COG1BLK), 6
#define G1BLKR3                          BANKMASK(COG1BLK), 7
#define G1CS0                            BANKMASK(COG1CON0), 0
#define G1CS1                            BANKMASK(COG1CON0), 1
#define G1DBF0                           BANKMASK(COG1DB), 0
#define G1DBF1                           BANKMASK(COG1DB), 1
#define G1DBF2                           BANKMASK(COG1DB), 2
#define G1DBF3                           BANKMASK(COG1DB), 3
#define G1EN                             BANKMASK(COG1CON0), 7
#define G1FS0                            BANKMASK(COG1CON1), 3
#define G1FS1                            BANKMASK(COG1CON1), 4
#define G1FS2                            BANKMASK(COG1CON1), 5
#define G1FSIM                           BANKMASK(COG1CON1), 7
#define G1LD                             BANKMASK(COG1CON0), 2
#define G1OE0                            BANKMASK(COG1CON0), 5
#define G1OE1                            BANKMASK(COG1CON0), 6
#define G1PH0                            BANKMASK(COG1PH), 0
#define G1PH1                            BANKMASK(COG1PH), 1
#define G1PH2                            BANKMASK(COG1PH), 2
#define G1PH3                            BANKMASK(COG1PH), 3
#define G1POL0                           BANKMASK(COG1CON0), 3
#define G1POL1                           BANKMASK(COG1CON0), 4
#define G1RS0                            BANKMASK(COG1CON1), 0
#define G1RS1                            BANKMASK(COG1CON1), 1
#define G1RS2                            BANKMASK(COG1CON1), 2
#define G1RSIM                           BANKMASK(COG1CON1), 6
#define GIE                              BANKMASK(INTCON), 7
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define H1CKPS0                          BANKMASK(HLT1CON0), 0
#define H1CKPS1                          BANKMASK(HLT1CON0), 1
#define H1ERS0                           BANKMASK(HLT1CON1), 2
#define H1ERS1                           BANKMASK(HLT1CON1), 3
#define H1ERS2                           BANKMASK(HLT1CON1), 4
#define H1FEREN                          BANKMASK(HLT1CON1), 1
#define H1ON                             BANKMASK(HLT1CON0), 2
#define H1OUTPS0                         BANKMASK(HLT1CON0), 3
#define H1OUTPS1                         BANKMASK(HLT1CON0), 4
#define H1OUTPS2                         BANKMASK(HLT1CON0), 5
#define H1OUTPS3                         BANKMASK(HLT1CON0), 6
#define H1REREN                          BANKMASK(HLT1CON1), 0
#define HLTMR1IE                         BANKMASK(PIE1), 2
#define HLTMR1IF                         BANKMASK(PIR1), 2
#define HTS                              BANKMASK(OSCCON), 2
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCAF0                           BANKMASK(IOCAF), 0
#define IOCAF1                           BANKMASK(IOCAF), 1
#define IOCAF2                           BANKMASK(IOCAF), 2
#define IOCAF3                           BANKMASK(IOCAF), 3
#define IOCAF4                           BANKMASK(IOCAF), 4
#define IOCAF5                           BANKMASK(IOCAF), 5
#define IOCAN0                           BANKMASK(IOCAN), 0
#define IOCAN1                           BANKMASK(IOCAN), 1
#define IOCAN2                           BANKMASK(IOCAN), 2
#define IOCAN3                           BANKMASK(IOCAN), 3
#define IOCAN4                           BANKMASK(IOCAN), 4
#define IOCAN5                           BANKMASK(IOCAN), 5
#define IOCAP0                           BANKMASK(IOCAP), 0
#define IOCAP1                           BANKMASK(IOCAP), 1
#define IOCAP2                           BANKMASK(IOCAP), 2
#define IOCAP3                           BANKMASK(IOCAP), 3
#define IOCAP4                           BANKMASK(IOCAP), 4
#define IOCAP5                           BANKMASK(IOCAP), 5
#define IOCIE                            BANKMASK(INTCON), 3
#define IOCIF                            BANKMASK(INTCON), 0
#define IRCF0                            BANKMASK(OSCCON), 4
#define IRCF1                            BANKMASK(OSCCON), 5
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
#define LTS                              BANKMASK(OSCCON), 1
#define MCOUT1                           BANKMASK(CMOUT), 0
#define MCOUT2                           BANKMASK(CMOUT), 1
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
#define RD                               BANKMASK(PMCON1), 0
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define SLRA0                            BANKMASK(SLRCONA), 0
#define SLRA2                            BANKMASK(SLRCONA), 2
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSEL                           BANKMASK(APFCON), 4
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define T2OUTPS0                         BANKMASK(T2CON), 3
#define T2OUTPS1                         BANKMASK(T2CON), 4
#define T2OUTPS2                         BANKMASK(T2CON), 5
#define T2OUTPS3                         BANKMASK(T2CON), 6
#define TMR1CS0                          BANKMASK(T1CON), 6
#define TMR1CS1                          BANKMASK(T1CON), 7
#define TMR1GE                           BANKMASK(T1GCON), 7
#define TMR1GIE                          BANKMASK(PIE1), 7
#define TMR1GIF                          BANKMASK(PIR1), 7
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(T2CON), 2
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TRISA3                           BANKMASK(TRISA), 3
#define TRISA4                           BANKMASK(TRISA), 4
#define TRISA5                           BANKMASK(TRISA), 5
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define VCFG                             BANKMASK(ADCON0), 6
#define WPUA0                            BANKMASK(WPUA), 0
#define WPUA1                            BANKMASK(WPUA), 1
#define WPUA2                            BANKMASK(WPUA), 2
#define WPUA3                            BANKMASK(WPUA), 3
#define WPUA4                            BANKMASK(WPUA), 4
#define WPUA5                            BANKMASK(WPUA), 5
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define ZERO                             BANKMASK(STATUS), 2
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRAPU                            BANKMASK(OPTION_REG), 7
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

#endif // _PIC12HV752_INC_
