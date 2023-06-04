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

#ifndef _PIC18F14K22LIN_INC_
#define _PIC18F14K22LIN_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F14K22LIN
 */

/*
 * Device Registers
 */

// Register: SRCON0
#define SRCON0 SRCON0
SRCON0                                   equ 0F68h
// bitfield definitions
SRCON0_SRPR_POSN                         equ 0000h
SRCON0_SRPR_POSITION                     equ 0000h
SRCON0_SRPR_SIZE                         equ 0001h
SRCON0_SRPR_LENGTH                       equ 0001h
SRCON0_SRPR_MASK                         equ 0001h
SRCON0_SRPS_POSN                         equ 0001h
SRCON0_SRPS_POSITION                     equ 0001h
SRCON0_SRPS_SIZE                         equ 0001h
SRCON0_SRPS_LENGTH                       equ 0001h
SRCON0_SRPS_MASK                         equ 0002h
SRCON0_SRNQEN_POSN                       equ 0002h
SRCON0_SRNQEN_POSITION                   equ 0002h
SRCON0_SRNQEN_SIZE                       equ 0001h
SRCON0_SRNQEN_LENGTH                     equ 0001h
SRCON0_SRNQEN_MASK                       equ 0004h
SRCON0_SRQEN_POSN                        equ 0003h
SRCON0_SRQEN_POSITION                    equ 0003h
SRCON0_SRQEN_SIZE                        equ 0001h
SRCON0_SRQEN_LENGTH                      equ 0001h
SRCON0_SRQEN_MASK                        equ 0008h
SRCON0_SRCLK_POSN                        equ 0004h
SRCON0_SRCLK_POSITION                    equ 0004h
SRCON0_SRCLK_SIZE                        equ 0003h
SRCON0_SRCLK_LENGTH                      equ 0003h
SRCON0_SRCLK_MASK                        equ 0070h
SRCON0_SRLEN_POSN                        equ 0007h
SRCON0_SRLEN_POSITION                    equ 0007h
SRCON0_SRLEN_SIZE                        equ 0001h
SRCON0_SRLEN_LENGTH                      equ 0001h
SRCON0_SRLEN_MASK                        equ 0080h
SRCON0_SRCLK0_POSN                       equ 0004h
SRCON0_SRCLK0_POSITION                   equ 0004h
SRCON0_SRCLK0_SIZE                       equ 0001h
SRCON0_SRCLK0_LENGTH                     equ 0001h
SRCON0_SRCLK0_MASK                       equ 0010h
SRCON0_SRCLK1_POSN                       equ 0005h
SRCON0_SRCLK1_POSITION                   equ 0005h
SRCON0_SRCLK1_SIZE                       equ 0001h
SRCON0_SRCLK1_LENGTH                     equ 0001h
SRCON0_SRCLK1_MASK                       equ 0020h
SRCON0_SRCLK2_POSN                       equ 0006h
SRCON0_SRCLK2_POSITION                   equ 0006h
SRCON0_SRCLK2_SIZE                       equ 0001h
SRCON0_SRCLK2_LENGTH                     equ 0001h
SRCON0_SRCLK2_MASK                       equ 0040h

// Register: SRCON1
#define SRCON1 SRCON1
SRCON1                                   equ 0F69h
// bitfield definitions
SRCON1_SRRC1E_POSN                       equ 0000h
SRCON1_SRRC1E_POSITION                   equ 0000h
SRCON1_SRRC1E_SIZE                       equ 0001h
SRCON1_SRRC1E_LENGTH                     equ 0001h
SRCON1_SRRC1E_MASK                       equ 0001h
SRCON1_SRRC2E_POSN                       equ 0001h
SRCON1_SRRC2E_POSITION                   equ 0001h
SRCON1_SRRC2E_SIZE                       equ 0001h
SRCON1_SRRC2E_LENGTH                     equ 0001h
SRCON1_SRRC2E_MASK                       equ 0002h
SRCON1_SRRCKE_POSN                       equ 0002h
SRCON1_SRRCKE_POSITION                   equ 0002h
SRCON1_SRRCKE_SIZE                       equ 0001h
SRCON1_SRRCKE_LENGTH                     equ 0001h
SRCON1_SRRCKE_MASK                       equ 0004h
SRCON1_SRRPE_POSN                        equ 0003h
SRCON1_SRRPE_POSITION                    equ 0003h
SRCON1_SRRPE_SIZE                        equ 0001h
SRCON1_SRRPE_LENGTH                      equ 0001h
SRCON1_SRRPE_MASK                        equ 0008h
SRCON1_SRSC1E_POSN                       equ 0004h
SRCON1_SRSC1E_POSITION                   equ 0004h
SRCON1_SRSC1E_SIZE                       equ 0001h
SRCON1_SRSC1E_LENGTH                     equ 0001h
SRCON1_SRSC1E_MASK                       equ 0010h
SRCON1_SRSC2E_POSN                       equ 0005h
SRCON1_SRSC2E_POSITION                   equ 0005h
SRCON1_SRSC2E_SIZE                       equ 0001h
SRCON1_SRSC2E_LENGTH                     equ 0001h
SRCON1_SRSC2E_MASK                       equ 0020h
SRCON1_SRSCKE_POSN                       equ 0006h
SRCON1_SRSCKE_POSITION                   equ 0006h
SRCON1_SRSCKE_SIZE                       equ 0001h
SRCON1_SRSCKE_LENGTH                     equ 0001h
SRCON1_SRSCKE_MASK                       equ 0040h
SRCON1_SRSPE_POSN                        equ 0007h
SRCON1_SRSPE_POSITION                    equ 0007h
SRCON1_SRSPE_SIZE                        equ 0001h
SRCON1_SRSPE_LENGTH                      equ 0001h
SRCON1_SRSPE_MASK                        equ 0080h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0F6Bh
// bitfield definitions
CM2CON0_C2CH_POSN                        equ 0000h
CM2CON0_C2CH_POSITION                    equ 0000h
CM2CON0_C2CH_SIZE                        equ 0002h
CM2CON0_C2CH_LENGTH                      equ 0002h
CM2CON0_C2CH_MASK                        equ 0003h
CM2CON0_C2R_POSN                         equ 0002h
CM2CON0_C2R_POSITION                     equ 0002h
CM2CON0_C2R_SIZE                         equ 0001h
CM2CON0_C2R_LENGTH                       equ 0001h
CM2CON0_C2R_MASK                         equ 0004h
CM2CON0_C2SP_POSN                        equ 0003h
CM2CON0_C2SP_POSITION                    equ 0003h
CM2CON0_C2SP_SIZE                        equ 0001h
CM2CON0_C2SP_LENGTH                      equ 0001h
CM2CON0_C2SP_MASK                        equ 0008h
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
CM2CON0_C2CH0_POSN                       equ 0000h
CM2CON0_C2CH0_POSITION                   equ 0000h
CM2CON0_C2CH0_SIZE                       equ 0001h
CM2CON0_C2CH0_LENGTH                     equ 0001h
CM2CON0_C2CH0_MASK                       equ 0001h
CM2CON0_C2CH1_POSN                       equ 0001h
CM2CON0_C2CH1_POSITION                   equ 0001h
CM2CON0_C2CH1_SIZE                       equ 0001h
CM2CON0_C2CH1_LENGTH                     equ 0001h
CM2CON0_C2CH1_MASK                       equ 0002h

// Register: CM2CON1
#define CM2CON1 CM2CON1
CM2CON1                                  equ 0F6Ch
// bitfield definitions
CM2CON1_C2SYNC_POSN                      equ 0000h
CM2CON1_C2SYNC_POSITION                  equ 0000h
CM2CON1_C2SYNC_SIZE                      equ 0001h
CM2CON1_C2SYNC_LENGTH                    equ 0001h
CM2CON1_C2SYNC_MASK                      equ 0001h
CM2CON1_C1SYNC_POSN                      equ 0001h
CM2CON1_C1SYNC_POSITION                  equ 0001h
CM2CON1_C1SYNC_SIZE                      equ 0001h
CM2CON1_C1SYNC_LENGTH                    equ 0001h
CM2CON1_C1SYNC_MASK                      equ 0002h
CM2CON1_C2HYS_POSN                       equ 0002h
CM2CON1_C2HYS_POSITION                   equ 0002h
CM2CON1_C2HYS_SIZE                       equ 0001h
CM2CON1_C2HYS_LENGTH                     equ 0001h
CM2CON1_C2HYS_MASK                       equ 0004h
CM2CON1_C1HYS_POSN                       equ 0003h
CM2CON1_C1HYS_POSITION                   equ 0003h
CM2CON1_C1HYS_SIZE                       equ 0001h
CM2CON1_C1HYS_LENGTH                     equ 0001h
CM2CON1_C1HYS_MASK                       equ 0008h
CM2CON1_C2RSEL_POSN                      equ 0004h
CM2CON1_C2RSEL_POSITION                  equ 0004h
CM2CON1_C2RSEL_SIZE                      equ 0001h
CM2CON1_C2RSEL_LENGTH                    equ 0001h
CM2CON1_C2RSEL_MASK                      equ 0010h
CM2CON1_C1RSEL_POSN                      equ 0005h
CM2CON1_C1RSEL_POSITION                  equ 0005h
CM2CON1_C1RSEL_SIZE                      equ 0001h
CM2CON1_C1RSEL_LENGTH                    equ 0001h
CM2CON1_C1RSEL_MASK                      equ 0020h
CM2CON1_MC2OUT_POSN                      equ 0006h
CM2CON1_MC2OUT_POSITION                  equ 0006h
CM2CON1_MC2OUT_SIZE                      equ 0001h
CM2CON1_MC2OUT_LENGTH                    equ 0001h
CM2CON1_MC2OUT_MASK                      equ 0040h
CM2CON1_MC1OUT_POSN                      equ 0007h
CM2CON1_MC1OUT_POSITION                  equ 0007h
CM2CON1_MC1OUT_SIZE                      equ 0001h
CM2CON1_MC1OUT_LENGTH                    equ 0001h
CM2CON1_MC1OUT_MASK                      equ 0080h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0F6Dh
// bitfield definitions
CM1CON0_C1CH_POSN                        equ 0000h
CM1CON0_C1CH_POSITION                    equ 0000h
CM1CON0_C1CH_SIZE                        equ 0002h
CM1CON0_C1CH_LENGTH                      equ 0002h
CM1CON0_C1CH_MASK                        equ 0003h
CM1CON0_C1R_POSN                         equ 0002h
CM1CON0_C1R_POSITION                     equ 0002h
CM1CON0_C1R_SIZE                         equ 0001h
CM1CON0_C1R_LENGTH                       equ 0001h
CM1CON0_C1R_MASK                         equ 0004h
CM1CON0_C1SP_POSN                        equ 0003h
CM1CON0_C1SP_POSITION                    equ 0003h
CM1CON0_C1SP_SIZE                        equ 0001h
CM1CON0_C1SP_LENGTH                      equ 0001h
CM1CON0_C1SP_MASK                        equ 0008h
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
CM1CON0_C1CH0_POSN                       equ 0000h
CM1CON0_C1CH0_POSITION                   equ 0000h
CM1CON0_C1CH0_SIZE                       equ 0001h
CM1CON0_C1CH0_LENGTH                     equ 0001h
CM1CON0_C1CH0_MASK                       equ 0001h
CM1CON0_C1CH1_POSN                       equ 0001h
CM1CON0_C1CH1_POSITION                   equ 0001h
CM1CON0_C1CH1_SIZE                       equ 0001h
CM1CON0_C1CH1_LENGTH                     equ 0001h
CM1CON0_C1CH1_MASK                       equ 0002h

// Register: SSPMSK
#define SSPMSK SSPMSK
SSPMSK                                   equ 0F6Fh
// bitfield definitions
SSPMSK_MSK_POSN                          equ 0000h
SSPMSK_MSK_POSITION                      equ 0000h
SSPMSK_MSK_SIZE                          equ 0008h
SSPMSK_MSK_LENGTH                        equ 0008h
SSPMSK_MSK_MASK                          equ 00FFh
SSPMSK_MSK0_POSN                         equ 0000h
SSPMSK_MSK0_POSITION                     equ 0000h
SSPMSK_MSK0_SIZE                         equ 0001h
SSPMSK_MSK0_LENGTH                       equ 0001h
SSPMSK_MSK0_MASK                         equ 0001h
SSPMSK_MSK1_POSN                         equ 0001h
SSPMSK_MSK1_POSITION                     equ 0001h
SSPMSK_MSK1_SIZE                         equ 0001h
SSPMSK_MSK1_LENGTH                       equ 0001h
SSPMSK_MSK1_MASK                         equ 0002h
SSPMSK_MSK2_POSN                         equ 0002h
SSPMSK_MSK2_POSITION                     equ 0002h
SSPMSK_MSK2_SIZE                         equ 0001h
SSPMSK_MSK2_LENGTH                       equ 0001h
SSPMSK_MSK2_MASK                         equ 0004h
SSPMSK_MSK3_POSN                         equ 0003h
SSPMSK_MSK3_POSITION                     equ 0003h
SSPMSK_MSK3_SIZE                         equ 0001h
SSPMSK_MSK3_LENGTH                       equ 0001h
SSPMSK_MSK3_MASK                         equ 0008h
SSPMSK_MSK4_POSN                         equ 0004h
SSPMSK_MSK4_POSITION                     equ 0004h
SSPMSK_MSK4_SIZE                         equ 0001h
SSPMSK_MSK4_LENGTH                       equ 0001h
SSPMSK_MSK4_MASK                         equ 0010h
SSPMSK_MSK5_POSN                         equ 0005h
SSPMSK_MSK5_POSITION                     equ 0005h
SSPMSK_MSK5_SIZE                         equ 0001h
SSPMSK_MSK5_LENGTH                       equ 0001h
SSPMSK_MSK5_MASK                         equ 0020h
SSPMSK_MSK6_POSN                         equ 0006h
SSPMSK_MSK6_POSITION                     equ 0006h
SSPMSK_MSK6_SIZE                         equ 0001h
SSPMSK_MSK6_LENGTH                       equ 0001h
SSPMSK_MSK6_MASK                         equ 0040h
SSPMSK_MSK7_POSN                         equ 0007h
SSPMSK_MSK7_POSITION                     equ 0007h
SSPMSK_MSK7_SIZE                         equ 0001h
SSPMSK_MSK7_LENGTH                       equ 0001h
SSPMSK_MSK7_MASK                         equ 0080h

// Register: SLRCON
#define SLRCON SLRCON
SLRCON                                   equ 0F76h
// bitfield definitions
SLRCON_SLRA_POSN                         equ 0000h
SLRCON_SLRA_POSITION                     equ 0000h
SLRCON_SLRA_SIZE                         equ 0001h
SLRCON_SLRA_LENGTH                       equ 0001h
SLRCON_SLRA_MASK                         equ 0001h
SLRCON_SLRB_POSN                         equ 0001h
SLRCON_SLRB_POSITION                     equ 0001h
SLRCON_SLRB_SIZE                         equ 0001h
SLRCON_SLRB_LENGTH                       equ 0001h
SLRCON_SLRB_MASK                         equ 0002h
SLRCON_SLRC_POSN                         equ 0002h
SLRCON_SLRC_POSITION                     equ 0002h
SLRCON_SLRC_SIZE                         equ 0001h
SLRCON_SLRC_LENGTH                       equ 0001h
SLRCON_SLRC_MASK                         equ 0004h

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 0F77h
// bitfield definitions
WPUA_WPUA_POSN                           equ 0000h
WPUA_WPUA_POSITION                       equ 0000h
WPUA_WPUA_SIZE                           equ 0006h
WPUA_WPUA_LENGTH                         equ 0006h
WPUA_WPUA_MASK                           equ 003Fh
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

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 0F78h
// bitfield definitions
WPUB_WPUB_POSN                           equ 0004h
WPUB_WPUB_POSITION                       equ 0004h
WPUB_WPUB_SIZE                           equ 0004h
WPUB_WPUB_LENGTH                         equ 0004h
WPUB_WPUB_MASK                           equ 00F0h
WPUB_WPUB4_POSN                          equ 0004h
WPUB_WPUB4_POSITION                      equ 0004h
WPUB_WPUB4_SIZE                          equ 0001h
WPUB_WPUB4_LENGTH                        equ 0001h
WPUB_WPUB4_MASK                          equ 0010h
WPUB_WPUB5_POSN                          equ 0005h
WPUB_WPUB5_POSITION                      equ 0005h
WPUB_WPUB5_SIZE                          equ 0001h
WPUB_WPUB5_LENGTH                        equ 0001h
WPUB_WPUB5_MASK                          equ 0020h
WPUB_WPUB6_POSN                          equ 0006h
WPUB_WPUB6_POSITION                      equ 0006h
WPUB_WPUB6_SIZE                          equ 0001h
WPUB_WPUB6_LENGTH                        equ 0001h
WPUB_WPUB6_MASK                          equ 0040h
WPUB_WPUB7_POSN                          equ 0007h
WPUB_WPUB7_POSITION                      equ 0007h
WPUB_WPUB7_SIZE                          equ 0001h
WPUB_WPUB7_LENGTH                        equ 0001h
WPUB_WPUB7_MASK                          equ 0080h

// Register: IOCA
#define IOCA IOCA
IOCA                                     equ 0F79h
// bitfield definitions
IOCA_IOCA_POSN                           equ 0000h
IOCA_IOCA_POSITION                       equ 0000h
IOCA_IOCA_SIZE                           equ 0006h
IOCA_IOCA_LENGTH                         equ 0006h
IOCA_IOCA_MASK                           equ 003Fh
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

// Register: IOCB
#define IOCB IOCB
IOCB                                     equ 0F7Ah
// bitfield definitions
IOCB_IOCB_POSN                           equ 0004h
IOCB_IOCB_POSITION                       equ 0004h
IOCB_IOCB_SIZE                           equ 0004h
IOCB_IOCB_LENGTH                         equ 0004h
IOCB_IOCB_MASK                           equ 00F0h
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

// Register: ANSEL
#define ANSEL ANSEL
ANSEL                                    equ 0F7Eh
// bitfield definitions
ANSEL_ANSEL_POSN                         equ 0000h
ANSEL_ANSEL_POSITION                     equ 0000h
ANSEL_ANSEL_SIZE                         equ 0008h
ANSEL_ANSEL_LENGTH                       equ 0008h
ANSEL_ANSEL_MASK                         equ 00FFh
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
ANSEL_ANS4_POSN                          equ 0004h
ANSEL_ANS4_POSITION                      equ 0004h
ANSEL_ANS4_SIZE                          equ 0001h
ANSEL_ANS4_LENGTH                        equ 0001h
ANSEL_ANS4_MASK                          equ 0010h
ANSEL_ANS5_POSN                          equ 0005h
ANSEL_ANS5_POSITION                      equ 0005h
ANSEL_ANS5_SIZE                          equ 0001h
ANSEL_ANS5_LENGTH                        equ 0001h
ANSEL_ANS5_MASK                          equ 0020h
ANSEL_ANS6_POSN                          equ 0006h
ANSEL_ANS6_POSITION                      equ 0006h
ANSEL_ANS6_SIZE                          equ 0001h
ANSEL_ANS6_LENGTH                        equ 0001h
ANSEL_ANS6_MASK                          equ 0040h
ANSEL_ANS7_POSN                          equ 0007h
ANSEL_ANS7_POSITION                      equ 0007h
ANSEL_ANS7_SIZE                          equ 0001h
ANSEL_ANS7_LENGTH                        equ 0001h
ANSEL_ANS7_MASK                          equ 0080h
ANSEL_ANSEL0_POSN                        equ 0000h
ANSEL_ANSEL0_POSITION                    equ 0000h
ANSEL_ANSEL0_SIZE                        equ 0001h
ANSEL_ANSEL0_LENGTH                      equ 0001h
ANSEL_ANSEL0_MASK                        equ 0001h
ANSEL_ANSEL1_POSN                        equ 0001h
ANSEL_ANSEL1_POSITION                    equ 0001h
ANSEL_ANSEL1_SIZE                        equ 0001h
ANSEL_ANSEL1_LENGTH                      equ 0001h
ANSEL_ANSEL1_MASK                        equ 0002h
ANSEL_ANSEL2_POSN                        equ 0002h
ANSEL_ANSEL2_POSITION                    equ 0002h
ANSEL_ANSEL2_SIZE                        equ 0001h
ANSEL_ANSEL2_LENGTH                      equ 0001h
ANSEL_ANSEL2_MASK                        equ 0004h
ANSEL_ANSEL3_POSN                        equ 0003h
ANSEL_ANSEL3_POSITION                    equ 0003h
ANSEL_ANSEL3_SIZE                        equ 0001h
ANSEL_ANSEL3_LENGTH                      equ 0001h
ANSEL_ANSEL3_MASK                        equ 0008h
ANSEL_ANSEL4_POSN                        equ 0004h
ANSEL_ANSEL4_POSITION                    equ 0004h
ANSEL_ANSEL4_SIZE                        equ 0001h
ANSEL_ANSEL4_LENGTH                      equ 0001h
ANSEL_ANSEL4_MASK                        equ 0010h
ANSEL_ANSEL5_POSN                        equ 0005h
ANSEL_ANSEL5_POSITION                    equ 0005h
ANSEL_ANSEL5_SIZE                        equ 0001h
ANSEL_ANSEL5_LENGTH                      equ 0001h
ANSEL_ANSEL5_MASK                        equ 0020h
ANSEL_ANSEL6_POSN                        equ 0006h
ANSEL_ANSEL6_POSITION                    equ 0006h
ANSEL_ANSEL6_SIZE                        equ 0001h
ANSEL_ANSEL6_LENGTH                      equ 0001h
ANSEL_ANSEL6_MASK                        equ 0040h
ANSEL_ANSEL7_POSN                        equ 0007h
ANSEL_ANSEL7_POSITION                    equ 0007h
ANSEL_ANSEL7_SIZE                        equ 0001h
ANSEL_ANSEL7_LENGTH                      equ 0001h
ANSEL_ANSEL7_MASK                        equ 0080h

// Register: ANSELH
#define ANSELH ANSELH
ANSELH                                   equ 0F7Fh
// bitfield definitions
ANSELH_ANSELH_POSN                       equ 0000h
ANSELH_ANSELH_POSITION                   equ 0000h
ANSELH_ANSELH_SIZE                       equ 0004h
ANSELH_ANSELH_LENGTH                     equ 0004h
ANSELH_ANSELH_MASK                       equ 000Fh
ANSELH_ANS8_POSN                         equ 0000h
ANSELH_ANS8_POSITION                     equ 0000h
ANSELH_ANS8_SIZE                         equ 0001h
ANSELH_ANS8_LENGTH                       equ 0001h
ANSELH_ANS8_MASK                         equ 0001h
ANSELH_ANS9_POSN                         equ 0001h
ANSELH_ANS9_POSITION                     equ 0001h
ANSELH_ANS9_SIZE                         equ 0001h
ANSELH_ANS9_LENGTH                       equ 0001h
ANSELH_ANS9_MASK                         equ 0002h
ANSELH_ANS10_POSN                        equ 0002h
ANSELH_ANS10_POSITION                    equ 0002h
ANSELH_ANS10_SIZE                        equ 0001h
ANSELH_ANS10_LENGTH                      equ 0001h
ANSELH_ANS10_MASK                        equ 0004h
ANSELH_ANS11_POSN                        equ 0003h
ANSELH_ANS11_POSITION                    equ 0003h
ANSELH_ANS11_SIZE                        equ 0001h
ANSELH_ANS11_LENGTH                      equ 0001h
ANSELH_ANS11_MASK                        equ 0008h
ANSELH_ANSEL8_POSN                       equ 0000h
ANSELH_ANSEL8_POSITION                   equ 0000h
ANSELH_ANSEL8_SIZE                       equ 0001h
ANSELH_ANSEL8_LENGTH                     equ 0001h
ANSELH_ANSEL8_MASK                       equ 0001h
ANSELH_ANSEL9_POSN                       equ 0001h
ANSELH_ANSEL9_POSITION                   equ 0001h
ANSELH_ANSEL9_SIZE                       equ 0001h
ANSELH_ANSEL9_LENGTH                     equ 0001h
ANSELH_ANSEL9_MASK                       equ 0002h
ANSELH_ANSEL10_POSN                      equ 0002h
ANSELH_ANSEL10_POSITION                  equ 0002h
ANSELH_ANSEL10_SIZE                      equ 0001h
ANSELH_ANSEL10_LENGTH                    equ 0001h
ANSELH_ANSEL10_MASK                      equ 0004h
ANSELH_ANSEL11_POSN                      equ 0003h
ANSELH_ANSEL11_POSITION                  equ 0003h
ANSELH_ANSEL11_SIZE                      equ 0001h
ANSELH_ANSEL11_LENGTH                    equ 0001h
ANSELH_ANSEL11_MASK                      equ 0008h

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 0F80h
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
PORTA_AN0_POSN                           equ 0000h
PORTA_AN0_POSITION                       equ 0000h
PORTA_AN0_SIZE                           equ 0001h
PORTA_AN0_LENGTH                         equ 0001h
PORTA_AN0_MASK                           equ 0001h
PORTA_AN1_POSN                           equ 0001h
PORTA_AN1_POSITION                       equ 0001h
PORTA_AN1_SIZE                           equ 0001h
PORTA_AN1_LENGTH                         equ 0001h
PORTA_AN1_MASK                           equ 0002h
PORTA_AN2_POSN                           equ 0002h
PORTA_AN2_POSITION                       equ 0002h
PORTA_AN2_SIZE                           equ 0001h
PORTA_AN2_LENGTH                         equ 0001h
PORTA_AN2_MASK                           equ 0004h
PORTA_MCLR_POSN                          equ 0003h
PORTA_MCLR_POSITION                      equ 0003h
PORTA_MCLR_SIZE                          equ 0001h
PORTA_MCLR_LENGTH                        equ 0001h
PORTA_MCLR_MASK                          equ 0008h
PORTA_AN3_POSN                           equ 0004h
PORTA_AN3_POSITION                       equ 0004h
PORTA_AN3_SIZE                           equ 0001h
PORTA_AN3_LENGTH                         equ 0001h
PORTA_AN3_MASK                           equ 0010h
PORTA_T13CKI_POSN                        equ 0005h
PORTA_T13CKI_POSITION                    equ 0005h
PORTA_T13CKI_SIZE                        equ 0001h
PORTA_T13CKI_LENGTH                      equ 0001h
PORTA_T13CKI_MASK                        equ 0020h
PORTA_NOT_MCLR_POSN                      equ 0003h
PORTA_NOT_MCLR_POSITION                  equ 0003h
PORTA_NOT_MCLR_SIZE                      equ 0001h
PORTA_NOT_MCLR_LENGTH                    equ 0001h
PORTA_NOT_MCLR_MASK                      equ 0008h
PORTA_CVREF_POSN                         equ 0000h
PORTA_CVREF_POSITION                     equ 0000h
PORTA_CVREF_SIZE                         equ 0001h
PORTA_CVREF_LENGTH                       equ 0001h
PORTA_CVREF_MASK                         equ 0001h
PORTA_C12IN0M_POSN                       equ 0001h
PORTA_C12IN0M_POSITION                   equ 0001h
PORTA_C12IN0M_SIZE                       equ 0001h
PORTA_C12IN0M_LENGTH                     equ 0001h
PORTA_C12IN0M_MASK                       equ 0002h
PORTA_C1OUT_POSN                         equ 0002h
PORTA_C1OUT_POSITION                     equ 0002h
PORTA_C1OUT_SIZE                         equ 0001h
PORTA_C1OUT_LENGTH                       equ 0001h
PORTA_C1OUT_MASK                         equ 0004h
PORTA_nMCLR_POSN                         equ 0003h
PORTA_nMCLR_POSITION                     equ 0003h
PORTA_nMCLR_SIZE                         equ 0001h
PORTA_nMCLR_LENGTH                       equ 0001h
PORTA_nMCLR_MASK                         equ 0008h
PORTA_OSC2_POSN                          equ 0004h
PORTA_OSC2_POSITION                      equ 0004h
PORTA_OSC2_SIZE                          equ 0001h
PORTA_OSC2_LENGTH                        equ 0001h
PORTA_OSC2_MASK                          equ 0010h
PORTA_OSC1_POSN                          equ 0005h
PORTA_OSC1_POSITION                      equ 0005h
PORTA_OSC1_SIZE                          equ 0001h
PORTA_OSC1_LENGTH                        equ 0001h
PORTA_OSC1_MASK                          equ 0020h
PORTA_VREFM_POSN                         equ 0000h
PORTA_VREFM_POSITION                     equ 0000h
PORTA_VREFM_SIZE                         equ 0001h
PORTA_VREFM_LENGTH                       equ 0001h
PORTA_VREFM_MASK                         equ 0001h
PORTA_VREFP_POSN                         equ 0001h
PORTA_VREFP_POSITION                     equ 0001h
PORTA_VREFP_SIZE                         equ 0001h
PORTA_VREFP_LENGTH                       equ 0001h
PORTA_VREFP_MASK                         equ 0002h
PORTA_T0CKI_POSN                         equ 0002h
PORTA_T0CKI_POSITION                     equ 0002h
PORTA_T0CKI_SIZE                         equ 0001h
PORTA_T0CKI_LENGTH                       equ 0001h
PORTA_T0CKI_MASK                         equ 0004h
PORTA_CLKOUT_POSN                        equ 0004h
PORTA_CLKOUT_POSITION                    equ 0004h
PORTA_CLKOUT_SIZE                        equ 0001h
PORTA_CLKOUT_LENGTH                      equ 0001h
PORTA_CLKOUT_MASK                        equ 0010h
PORTA_CLKIN_POSN                         equ 0005h
PORTA_CLKIN_POSITION                     equ 0005h
PORTA_CLKIN_SIZE                         equ 0001h
PORTA_CLKIN_LENGTH                       equ 0001h
PORTA_CLKIN_MASK                         equ 0020h
PORTA_INT0_POSN                          equ 0000h
PORTA_INT0_POSITION                      equ 0000h
PORTA_INT0_SIZE                          equ 0001h
PORTA_INT0_LENGTH                        equ 0001h
PORTA_INT0_MASK                          equ 0001h
PORTA_INT1_POSN                          equ 0001h
PORTA_INT1_POSITION                      equ 0001h
PORTA_INT1_SIZE                          equ 0001h
PORTA_INT1_LENGTH                        equ 0001h
PORTA_INT1_MASK                          equ 0002h
PORTA_INT2_POSN                          equ 0002h
PORTA_INT2_POSITION                      equ 0002h
PORTA_INT2_SIZE                          equ 0001h
PORTA_INT2_LENGTH                        equ 0001h
PORTA_INT2_MASK                          equ 0004h
PORTA_PGD_POSN                           equ 0000h
PORTA_PGD_POSITION                       equ 0000h
PORTA_PGD_SIZE                           equ 0001h
PORTA_PGD_LENGTH                         equ 0001h
PORTA_PGD_MASK                           equ 0001h
PORTA_PGC_POSN                           equ 0001h
PORTA_PGC_POSITION                       equ 0001h
PORTA_PGC_SIZE                           equ 0001h
PORTA_PGC_LENGTH                         equ 0001h
PORTA_PGC_MASK                           equ 0002h
PORTA_VPP_POSN                           equ 0003h
PORTA_VPP_POSITION                       equ 0003h
PORTA_VPP_SIZE                           equ 0001h
PORTA_VPP_LENGTH                         equ 0001h
PORTA_VPP_MASK                           equ 0008h
PORTA_C1INP_POSN                         equ 0000h
PORTA_C1INP_POSITION                     equ 0000h
PORTA_C1INP_SIZE                         equ 0001h
PORTA_C1INP_LENGTH                       equ 0001h
PORTA_C1INP_MASK                         equ 0001h
PORTA_SRQ_POSN                           equ 0002h
PORTA_SRQ_POSITION                       equ 0002h
PORTA_SRQ_SIZE                           equ 0001h
PORTA_SRQ_LENGTH                         equ 0001h
PORTA_SRQ_MASK                           equ 0004h
PORTA_ULPWUIN_POSN                       equ 0000h
PORTA_ULPWUIN_POSITION                   equ 0000h
PORTA_ULPWUIN_SIZE                       equ 0001h
PORTA_ULPWUIN_LENGTH                     equ 0001h
PORTA_ULPWUIN_MASK                       equ 0001h
PORTA_LVDIN_POSN                         equ 0005h
PORTA_LVDIN_POSITION                     equ 0005h
PORTA_LVDIN_SIZE                         equ 0001h
PORTA_LVDIN_LENGTH                       equ 0001h
PORTA_LVDIN_MASK                         equ 0020h

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 0F81h
// bitfield definitions
PORTB_RB4_POSN                           equ 0004h
PORTB_RB4_POSITION                       equ 0004h
PORTB_RB4_SIZE                           equ 0001h
PORTB_RB4_LENGTH                         equ 0001h
PORTB_RB4_MASK                           equ 0010h
PORTB_LINRX_POSN                         equ 0005h
PORTB_LINRX_POSITION                     equ 0005h
PORTB_LINRX_SIZE                         equ 0001h
PORTB_LINRX_LENGTH                       equ 0001h
PORTB_LINRX_MASK                         equ 0020h
PORTB_LINCS_POSN                         equ 0006h
PORTB_LINCS_POSITION                     equ 0006h
PORTB_LINCS_SIZE                         equ 0001h
PORTB_LINCS_LENGTH                       equ 0001h
PORTB_LINCS_MASK                         equ 0040h
PORTB_LINTX_POSN                         equ 0007h
PORTB_LINTX_POSITION                     equ 0007h
PORTB_LINTX_SIZE                         equ 0001h
PORTB_LINTX_LENGTH                       equ 0001h
PORTB_LINTX_MASK                         equ 0080h
PORTB_AN10_POSN                          equ 0004h
PORTB_AN10_POSITION                      equ 0004h
PORTB_AN10_SIZE                          equ 0001h
PORTB_AN10_LENGTH                        equ 0001h
PORTB_AN10_MASK                          equ 0010h
PORTB_RB5_POSN                           equ 0005h
PORTB_RB5_POSITION                       equ 0005h
PORTB_RB5_SIZE                           equ 0001h
PORTB_RB5_LENGTH                         equ 0001h
PORTB_RB5_MASK                           equ 0020h
PORTB_RB6_POSN                           equ 0006h
PORTB_RB6_POSITION                       equ 0006h
PORTB_RB6_SIZE                           equ 0001h
PORTB_RB6_LENGTH                         equ 0001h
PORTB_RB6_MASK                           equ 0040h
PORTB_RB7_POSN                           equ 0007h
PORTB_RB7_POSITION                       equ 0007h
PORTB_RB7_SIZE                           equ 0001h
PORTB_RB7_LENGTH                         equ 0001h
PORTB_RB7_MASK                           equ 0080h
PORTB_SDI_POSN                           equ 0004h
PORTB_SDI_POSITION                       equ 0004h
PORTB_SDI_SIZE                           equ 0001h
PORTB_SDI_LENGTH                         equ 0001h
PORTB_SDI_MASK                           equ 0010h
PORTB_SCK_POSN                           equ 0006h
PORTB_SCK_POSITION                       equ 0006h
PORTB_SCK_SIZE                           equ 0001h
PORTB_SCK_LENGTH                         equ 0001h
PORTB_SCK_MASK                           equ 0040h
PORTB_SDA_POSN                           equ 0004h
PORTB_SDA_POSITION                       equ 0004h
PORTB_SDA_SIZE                           equ 0001h
PORTB_SDA_LENGTH                         equ 0001h
PORTB_SDA_MASK                           equ 0010h
PORTB_DT_POSN                            equ 0005h
PORTB_DT_POSITION                        equ 0005h
PORTB_DT_SIZE                            equ 0001h
PORTB_DT_LENGTH                          equ 0001h
PORTB_DT_MASK                            equ 0020h
PORTB_SCL_POSN                           equ 0006h
PORTB_SCL_POSITION                       equ 0006h
PORTB_SCL_SIZE                           equ 0001h
PORTB_SCL_LENGTH                         equ 0001h
PORTB_SCL_MASK                           equ 0040h
PORTB_CK_POSN                            equ 0007h
PORTB_CK_POSITION                        equ 0007h
PORTB_CK_SIZE                            equ 0001h
PORTB_CK_LENGTH                          equ 0001h
PORTB_CK_MASK                            equ 0080h

// Register: PORTC
#define PORTC PORTC
PORTC                                    equ 0F82h
// bitfield definitions
PORTC_NOT_LINRESET_POSN                  equ 0007h
PORTC_NOT_LINRESET_POSITION              equ 0007h
PORTC_NOT_LINRESET_SIZE                  equ 0001h
PORTC_NOT_LINRESET_LENGTH                equ 0001h
PORTC_NOT_LINRESET_MASK                  equ 0080h
PORTC_RC0_POSN                           equ 0000h
PORTC_RC0_POSITION                       equ 0000h
PORTC_RC0_SIZE                           equ 0001h
PORTC_RC0_LENGTH                         equ 0001h
PORTC_RC0_MASK                           equ 0001h
PORTC_RC1_POSN                           equ 0001h
PORTC_RC1_POSITION                       equ 0001h
PORTC_RC1_SIZE                           equ 0001h
PORTC_RC1_LENGTH                         equ 0001h
PORTC_RC1_MASK                           equ 0002h
PORTC_RC2_POSN                           equ 0002h
PORTC_RC2_POSITION                       equ 0002h
PORTC_RC2_SIZE                           equ 0001h
PORTC_RC2_LENGTH                         equ 0001h
PORTC_RC2_MASK                           equ 0004h
PORTC_RC3_POSN                           equ 0003h
PORTC_RC3_POSITION                       equ 0003h
PORTC_RC3_SIZE                           equ 0001h
PORTC_RC3_LENGTH                         equ 0001h
PORTC_RC3_MASK                           equ 0008h
PORTC_RC4_POSN                           equ 0004h
PORTC_RC4_POSITION                       equ 0004h
PORTC_RC4_SIZE                           equ 0001h
PORTC_RC4_LENGTH                         equ 0001h
PORTC_RC4_MASK                           equ 0010h
PORTC_RC5_POSN                           equ 0005h
PORTC_RC5_POSITION                       equ 0005h
PORTC_RC5_SIZE                           equ 0001h
PORTC_RC5_LENGTH                         equ 0001h
PORTC_RC5_MASK                           equ 0020h
PORTC_nLINRESET_POSN                     equ 0007h
PORTC_nLINRESET_POSITION                 equ 0007h
PORTC_nLINRESET_SIZE                     equ 0001h
PORTC_nLINRESET_LENGTH                   equ 0001h
PORTC_nLINRESET_MASK                     equ 0080h
PORTC_AN4_POSN                           equ 0000h
PORTC_AN4_POSITION                       equ 0000h
PORTC_AN4_SIZE                           equ 0001h
PORTC_AN4_LENGTH                         equ 0001h
PORTC_AN4_MASK                           equ 0001h
PORTC_AN5_POSN                           equ 0001h
PORTC_AN5_POSITION                       equ 0001h
PORTC_AN5_SIZE                           equ 0001h
PORTC_AN5_LENGTH                         equ 0001h
PORTC_AN5_MASK                           equ 0002h
PORTC_AN6_POSN                           equ 0002h
PORTC_AN6_POSITION                       equ 0002h
PORTC_AN6_SIZE                           equ 0001h
PORTC_AN6_LENGTH                         equ 0001h
PORTC_AN6_MASK                           equ 0004h
PORTC_AN7_POSN                           equ 0003h
PORTC_AN7_POSITION                       equ 0003h
PORTC_AN7_SIZE                           equ 0001h
PORTC_AN7_LENGTH                         equ 0001h
PORTC_AN7_MASK                           equ 0008h
PORTC_RC6_POSN                           equ 0006h
PORTC_RC6_POSITION                       equ 0006h
PORTC_RC6_SIZE                           equ 0001h
PORTC_RC6_LENGTH                         equ 0001h
PORTC_RC6_MASK                           equ 0040h
PORTC_RC7_POSN                           equ 0007h
PORTC_RC7_POSITION                       equ 0007h
PORTC_RC7_SIZE                           equ 0001h
PORTC_RC7_LENGTH                         equ 0001h
PORTC_RC7_MASK                           equ 0080h
PORTC_C12INP_POSN                        equ 0000h
PORTC_C12INP_POSITION                    equ 0000h
PORTC_C12INP_SIZE                        equ 0001h
PORTC_C12INP_LENGTH                      equ 0001h
PORTC_C12INP_MASK                        equ 0001h
PORTC_C12IN1M_POSN                       equ 0001h
PORTC_C12IN1M_POSITION                   equ 0001h
PORTC_C12IN1M_SIZE                       equ 0001h
PORTC_C12IN1M_LENGTH                     equ 0001h
PORTC_C12IN1M_MASK                       equ 0002h
PORTC_C12IN2M_POSN                       equ 0002h
PORTC_C12IN2M_POSITION                   equ 0002h
PORTC_C12IN2M_SIZE                       equ 0001h
PORTC_C12IN2M_LENGTH                     equ 0001h
PORTC_C12IN2M_MASK                       equ 0004h
PORTC_C12IN3M_POSN                       equ 0003h
PORTC_C12IN3M_POSITION                   equ 0003h
PORTC_C12IN3M_SIZE                       equ 0001h
PORTC_C12IN3M_LENGTH                     equ 0001h
PORTC_C12IN3M_MASK                       equ 0008h
PORTC_C12OUT_POSN                        equ 0004h
PORTC_C12OUT_POSITION                    equ 0004h
PORTC_C12OUT_SIZE                        equ 0001h
PORTC_C12OUT_LENGTH                      equ 0001h
PORTC_C12OUT_MASK                        equ 0010h
PORTC_LINRESET_POSN                      equ 0007h
PORTC_LINRESET_POSITION                  equ 0007h
PORTC_LINRESET_SIZE                      equ 0001h
PORTC_LINRESET_LENGTH                    equ 0001h
PORTC_LINRESET_MASK                      equ 0080h
PORTC_P1D_POSN                           equ 0002h
PORTC_P1D_POSITION                       equ 0002h
PORTC_P1D_SIZE                           equ 0001h
PORTC_P1D_LENGTH                         equ 0001h
PORTC_P1D_MASK                           equ 0004h
PORTC_P1C_POSN                           equ 0003h
PORTC_P1C_POSITION                       equ 0003h
PORTC_P1C_SIZE                           equ 0001h
PORTC_P1C_LENGTH                         equ 0001h
PORTC_P1C_MASK                           equ 0008h
PORTC_P1B_POSN                           equ 0004h
PORTC_P1B_POSITION                       equ 0004h
PORTC_P1B_SIZE                           equ 0001h
PORTC_P1B_LENGTH                         equ 0001h
PORTC_P1B_MASK                           equ 0010h
PORTC_P1A_POSN                           equ 0005h
PORTC_P1A_POSITION                       equ 0005h
PORTC_P1A_SIZE                           equ 0001h
PORTC_P1A_LENGTH                         equ 0001h
PORTC_P1A_MASK                           equ 0020h
PORTC_C2INP_POSN                         equ 0000h
PORTC_C2INP_POSITION                     equ 0000h
PORTC_C2INP_SIZE                         equ 0001h
PORTC_C2INP_LENGTH                       equ 0001h
PORTC_C2INP_MASK                         equ 0001h
PORTC_PGM_POSN                           equ 0003h
PORTC_PGM_POSITION                       equ 0003h
PORTC_PGM_SIZE                           equ 0001h
PORTC_PGM_LENGTH                         equ 0001h
PORTC_PGM_MASK                           equ 0008h
PORTC_C2OUT_POSN                         equ 0004h
PORTC_C2OUT_POSITION                     equ 0004h
PORTC_C2OUT_SIZE                         equ 0001h
PORTC_C2OUT_LENGTH                       equ 0001h
PORTC_C2OUT_MASK                         equ 0010h
PORTC_CCP1_POSN                          equ 0005h
PORTC_CCP1_POSITION                      equ 0005h
PORTC_CCP1_SIZE                          equ 0001h
PORTC_CCP1_LENGTH                        equ 0001h
PORTC_CCP1_MASK                          equ 0020h
PORTC_CCP2_POSN                          equ 0001h
PORTC_CCP2_POSITION                      equ 0001h
PORTC_CCP2_SIZE                          equ 0001h
PORTC_CCP2_LENGTH                        equ 0001h
PORTC_CCP2_MASK                          equ 0002h
PORTC_PA1_POSN                           equ 0002h
PORTC_PA1_POSITION                       equ 0002h
PORTC_PA1_SIZE                           equ 0001h
PORTC_PA1_LENGTH                         equ 0001h
PORTC_PA1_MASK                           equ 0004h
PORTC_PA2_POSN                           equ 0001h
PORTC_PA2_POSITION                       equ 0001h
PORTC_PA2_SIZE                           equ 0001h
PORTC_PA2_LENGTH                         equ 0001h
PORTC_PA2_MASK                           equ 0002h

// Register: LATA
#define LATA LATA
LATA                                     equ 0F89h
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
LATA_LA0_POSN                            equ 0000h
LATA_LA0_POSITION                        equ 0000h
LATA_LA0_SIZE                            equ 0001h
LATA_LA0_LENGTH                          equ 0001h
LATA_LA0_MASK                            equ 0001h
LATA_LA1_POSN                            equ 0001h
LATA_LA1_POSITION                        equ 0001h
LATA_LA1_SIZE                            equ 0001h
LATA_LA1_LENGTH                          equ 0001h
LATA_LA1_MASK                            equ 0002h
LATA_LA2_POSN                            equ 0002h
LATA_LA2_POSITION                        equ 0002h
LATA_LA2_SIZE                            equ 0001h
LATA_LA2_LENGTH                          equ 0001h
LATA_LA2_MASK                            equ 0004h
LATA_LA4_POSN                            equ 0004h
LATA_LA4_POSITION                        equ 0004h
LATA_LA4_SIZE                            equ 0001h
LATA_LA4_LENGTH                          equ 0001h
LATA_LA4_MASK                            equ 0010h
LATA_LA5_POSN                            equ 0005h
LATA_LA5_POSITION                        equ 0005h
LATA_LA5_SIZE                            equ 0001h
LATA_LA5_LENGTH                          equ 0001h
LATA_LA5_MASK                            equ 0020h

// Register: LATB
#define LATB LATB
LATB                                     equ 0F8Ah
// bitfield definitions
LATB_LATB4_POSN                          equ 0004h
LATB_LATB4_POSITION                      equ 0004h
LATB_LATB4_SIZE                          equ 0001h
LATB_LATB4_LENGTH                        equ 0001h
LATB_LATB4_MASK                          equ 0010h
LATB_LATB5_POSN                          equ 0005h
LATB_LATB5_POSITION                      equ 0005h
LATB_LATB5_SIZE                          equ 0001h
LATB_LATB5_LENGTH                        equ 0001h
LATB_LATB5_MASK                          equ 0020h
LATB_LATB6_POSN                          equ 0006h
LATB_LATB6_POSITION                      equ 0006h
LATB_LATB6_SIZE                          equ 0001h
LATB_LATB6_LENGTH                        equ 0001h
LATB_LATB6_MASK                          equ 0040h
LATB_LATB7_POSN                          equ 0007h
LATB_LATB7_POSITION                      equ 0007h
LATB_LATB7_SIZE                          equ 0001h
LATB_LATB7_LENGTH                        equ 0001h
LATB_LATB7_MASK                          equ 0080h
LATB_LB4_POSN                            equ 0004h
LATB_LB4_POSITION                        equ 0004h
LATB_LB4_SIZE                            equ 0001h
LATB_LB4_LENGTH                          equ 0001h
LATB_LB4_MASK                            equ 0010h
LATB_LB5_POSN                            equ 0005h
LATB_LB5_POSITION                        equ 0005h
LATB_LB5_SIZE                            equ 0001h
LATB_LB5_LENGTH                          equ 0001h
LATB_LB5_MASK                            equ 0020h
LATB_LB6_POSN                            equ 0006h
LATB_LB6_POSITION                        equ 0006h
LATB_LB6_SIZE                            equ 0001h
LATB_LB6_LENGTH                          equ 0001h
LATB_LB6_MASK                            equ 0040h
LATB_LB7_POSN                            equ 0007h
LATB_LB7_POSITION                        equ 0007h
LATB_LB7_SIZE                            equ 0001h
LATB_LB7_LENGTH                          equ 0001h
LATB_LB7_MASK                            equ 0080h

// Register: LATC
#define LATC LATC
LATC                                     equ 0F8Bh
// bitfield definitions
LATC_LATC0_POSN                          equ 0000h
LATC_LATC0_POSITION                      equ 0000h
LATC_LATC0_SIZE                          equ 0001h
LATC_LATC0_LENGTH                        equ 0001h
LATC_LATC0_MASK                          equ 0001h
LATC_LATC1_POSN                          equ 0001h
LATC_LATC1_POSITION                      equ 0001h
LATC_LATC1_SIZE                          equ 0001h
LATC_LATC1_LENGTH                        equ 0001h
LATC_LATC1_MASK                          equ 0002h
LATC_LATC2_POSN                          equ 0002h
LATC_LATC2_POSITION                      equ 0002h
LATC_LATC2_SIZE                          equ 0001h
LATC_LATC2_LENGTH                        equ 0001h
LATC_LATC2_MASK                          equ 0004h
LATC_LATC3_POSN                          equ 0003h
LATC_LATC3_POSITION                      equ 0003h
LATC_LATC3_SIZE                          equ 0001h
LATC_LATC3_LENGTH                        equ 0001h
LATC_LATC3_MASK                          equ 0008h
LATC_LATC4_POSN                          equ 0004h
LATC_LATC4_POSITION                      equ 0004h
LATC_LATC4_SIZE                          equ 0001h
LATC_LATC4_LENGTH                        equ 0001h
LATC_LATC4_MASK                          equ 0010h
LATC_LATC5_POSN                          equ 0005h
LATC_LATC5_POSITION                      equ 0005h
LATC_LATC5_SIZE                          equ 0001h
LATC_LATC5_LENGTH                        equ 0001h
LATC_LATC5_MASK                          equ 0020h
LATC_PWRGD_POSN                          equ 0007h
LATC_PWRGD_POSITION                      equ 0007h
LATC_PWRGD_SIZE                          equ 0001h
LATC_PWRGD_LENGTH                        equ 0001h
LATC_PWRGD_MASK                          equ 0080h
LATC_LATC6_POSN                          equ 0006h
LATC_LATC6_POSITION                      equ 0006h
LATC_LATC6_SIZE                          equ 0001h
LATC_LATC6_LENGTH                        equ 0001h
LATC_LATC6_MASK                          equ 0040h
LATC_LATC7_POSN                          equ 0007h
LATC_LATC7_POSITION                      equ 0007h
LATC_LATC7_SIZE                          equ 0001h
LATC_LATC7_LENGTH                        equ 0001h
LATC_LATC7_MASK                          equ 0080h
LATC_LC0_POSN                            equ 0000h
LATC_LC0_POSITION                        equ 0000h
LATC_LC0_SIZE                            equ 0001h
LATC_LC0_LENGTH                          equ 0001h
LATC_LC0_MASK                            equ 0001h
LATC_LC1_POSN                            equ 0001h
LATC_LC1_POSITION                        equ 0001h
LATC_LC1_SIZE                            equ 0001h
LATC_LC1_LENGTH                          equ 0001h
LATC_LC1_MASK                            equ 0002h
LATC_LC2_POSN                            equ 0002h
LATC_LC2_POSITION                        equ 0002h
LATC_LC2_SIZE                            equ 0001h
LATC_LC2_LENGTH                          equ 0001h
LATC_LC2_MASK                            equ 0004h
LATC_LC3_POSN                            equ 0003h
LATC_LC3_POSITION                        equ 0003h
LATC_LC3_SIZE                            equ 0001h
LATC_LC3_LENGTH                          equ 0001h
LATC_LC3_MASK                            equ 0008h
LATC_LC4_POSN                            equ 0004h
LATC_LC4_POSITION                        equ 0004h
LATC_LC4_SIZE                            equ 0001h
LATC_LC4_LENGTH                          equ 0001h
LATC_LC4_MASK                            equ 0010h
LATC_LC5_POSN                            equ 0005h
LATC_LC5_POSITION                        equ 0005h
LATC_LC5_SIZE                            equ 0001h
LATC_LC5_LENGTH                          equ 0001h
LATC_LC5_MASK                            equ 0020h
LATC_LC7_POSN                            equ 0007h
LATC_LC7_POSITION                        equ 0007h
LATC_LC7_SIZE                            equ 0001h
LATC_LC7_LENGTH                          equ 0001h
LATC_LC7_MASK                            equ 0080h
LATC_LC6_POSN                            equ 0006h
LATC_LC6_POSITION                        equ 0006h
LATC_LC6_SIZE                            equ 0001h
LATC_LC6_LENGTH                          equ 0001h
LATC_LC6_MASK                            equ 0040h

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0F92h
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
TRISA_RA0_POSN                           equ 0000h
TRISA_RA0_POSITION                       equ 0000h
TRISA_RA0_SIZE                           equ 0001h
TRISA_RA0_LENGTH                         equ 0001h
TRISA_RA0_MASK                           equ 0001h
TRISA_RA1_POSN                           equ 0001h
TRISA_RA1_POSITION                       equ 0001h
TRISA_RA1_SIZE                           equ 0001h
TRISA_RA1_LENGTH                         equ 0001h
TRISA_RA1_MASK                           equ 0002h
TRISA_RA2_POSN                           equ 0002h
TRISA_RA2_POSITION                       equ 0002h
TRISA_RA2_SIZE                           equ 0001h
TRISA_RA2_LENGTH                         equ 0001h
TRISA_RA2_MASK                           equ 0004h
TRISA_RA4_POSN                           equ 0004h
TRISA_RA4_POSITION                       equ 0004h
TRISA_RA4_SIZE                           equ 0001h
TRISA_RA4_LENGTH                         equ 0001h
TRISA_RA4_MASK                           equ 0010h
TRISA_RA5_POSN                           equ 0005h
TRISA_RA5_POSITION                       equ 0005h
TRISA_RA5_SIZE                           equ 0001h
TRISA_RA5_LENGTH                         equ 0001h
TRISA_RA5_MASK                           equ 0020h

// Register: TRISB
#define TRISB TRISB
TRISB                                    equ 0F93h
// bitfield definitions
TRISB_TRISB4_POSN                        equ 0004h
TRISB_TRISB4_POSITION                    equ 0004h
TRISB_TRISB4_SIZE                        equ 0001h
TRISB_TRISB4_LENGTH                      equ 0001h
TRISB_TRISB4_MASK                        equ 0010h
TRISB_TRISB5_POSN                        equ 0005h
TRISB_TRISB5_POSITION                    equ 0005h
TRISB_TRISB5_SIZE                        equ 0001h
TRISB_TRISB5_LENGTH                      equ 0001h
TRISB_TRISB5_MASK                        equ 0020h
TRISB_TRISB6_POSN                        equ 0006h
TRISB_TRISB6_POSITION                    equ 0006h
TRISB_TRISB6_SIZE                        equ 0001h
TRISB_TRISB6_LENGTH                      equ 0001h
TRISB_TRISB6_MASK                        equ 0040h
TRISB_TRISB7_POSN                        equ 0007h
TRISB_TRISB7_POSITION                    equ 0007h
TRISB_TRISB7_SIZE                        equ 0001h
TRISB_TRISB7_LENGTH                      equ 0001h
TRISB_TRISB7_MASK                        equ 0080h
TRISB_RB4_POSN                           equ 0004h
TRISB_RB4_POSITION                       equ 0004h
TRISB_RB4_SIZE                           equ 0001h
TRISB_RB4_LENGTH                         equ 0001h
TRISB_RB4_MASK                           equ 0010h
TRISB_RB5_POSN                           equ 0005h
TRISB_RB5_POSITION                       equ 0005h
TRISB_RB5_SIZE                           equ 0001h
TRISB_RB5_LENGTH                         equ 0001h
TRISB_RB5_MASK                           equ 0020h
TRISB_RB6_POSN                           equ 0006h
TRISB_RB6_POSITION                       equ 0006h
TRISB_RB6_SIZE                           equ 0001h
TRISB_RB6_LENGTH                         equ 0001h
TRISB_RB6_MASK                           equ 0040h
TRISB_RB7_POSN                           equ 0007h
TRISB_RB7_POSITION                       equ 0007h
TRISB_RB7_SIZE                           equ 0001h
TRISB_RB7_LENGTH                         equ 0001h
TRISB_RB7_MASK                           equ 0080h

// Register: TRISC
#define TRISC TRISC
TRISC                                    equ 0F94h
// bitfield definitions
TRISC_TRISC0_POSN                        equ 0000h
TRISC_TRISC0_POSITION                    equ 0000h
TRISC_TRISC0_SIZE                        equ 0001h
TRISC_TRISC0_LENGTH                      equ 0001h
TRISC_TRISC0_MASK                        equ 0001h
TRISC_TRISC1_POSN                        equ 0001h
TRISC_TRISC1_POSITION                    equ 0001h
TRISC_TRISC1_SIZE                        equ 0001h
TRISC_TRISC1_LENGTH                      equ 0001h
TRISC_TRISC1_MASK                        equ 0002h
TRISC_TRISC2_POSN                        equ 0002h
TRISC_TRISC2_POSITION                    equ 0002h
TRISC_TRISC2_SIZE                        equ 0001h
TRISC_TRISC2_LENGTH                      equ 0001h
TRISC_TRISC2_MASK                        equ 0004h
TRISC_TRISC3_POSN                        equ 0003h
TRISC_TRISC3_POSITION                    equ 0003h
TRISC_TRISC3_SIZE                        equ 0001h
TRISC_TRISC3_LENGTH                      equ 0001h
TRISC_TRISC3_MASK                        equ 0008h
TRISC_TRISC4_POSN                        equ 0004h
TRISC_TRISC4_POSITION                    equ 0004h
TRISC_TRISC4_SIZE                        equ 0001h
TRISC_TRISC4_LENGTH                      equ 0001h
TRISC_TRISC4_MASK                        equ 0010h
TRISC_TRISC5_POSN                        equ 0005h
TRISC_TRISC5_POSITION                    equ 0005h
TRISC_TRISC5_SIZE                        equ 0001h
TRISC_TRISC5_LENGTH                      equ 0001h
TRISC_TRISC5_MASK                        equ 0020h
TRISC_TRISC6_POSN                        equ 0006h
TRISC_TRISC6_POSITION                    equ 0006h
TRISC_TRISC6_SIZE                        equ 0001h
TRISC_TRISC6_LENGTH                      equ 0001h
TRISC_TRISC6_MASK                        equ 0040h
TRISC_TRISC7_POSN                        equ 0007h
TRISC_TRISC7_POSITION                    equ 0007h
TRISC_TRISC7_SIZE                        equ 0001h
TRISC_TRISC7_LENGTH                      equ 0001h
TRISC_TRISC7_MASK                        equ 0080h
TRISC_RC0_POSN                           equ 0000h
TRISC_RC0_POSITION                       equ 0000h
TRISC_RC0_SIZE                           equ 0001h
TRISC_RC0_LENGTH                         equ 0001h
TRISC_RC0_MASK                           equ 0001h
TRISC_RC1_POSN                           equ 0001h
TRISC_RC1_POSITION                       equ 0001h
TRISC_RC1_SIZE                           equ 0001h
TRISC_RC1_LENGTH                         equ 0001h
TRISC_RC1_MASK                           equ 0002h
TRISC_RC2_POSN                           equ 0002h
TRISC_RC2_POSITION                       equ 0002h
TRISC_RC2_SIZE                           equ 0001h
TRISC_RC2_LENGTH                         equ 0001h
TRISC_RC2_MASK                           equ 0004h
TRISC_RC3_POSN                           equ 0003h
TRISC_RC3_POSITION                       equ 0003h
TRISC_RC3_SIZE                           equ 0001h
TRISC_RC3_LENGTH                         equ 0001h
TRISC_RC3_MASK                           equ 0008h
TRISC_RC4_POSN                           equ 0004h
TRISC_RC4_POSITION                       equ 0004h
TRISC_RC4_SIZE                           equ 0001h
TRISC_RC4_LENGTH                         equ 0001h
TRISC_RC4_MASK                           equ 0010h
TRISC_RC5_POSN                           equ 0005h
TRISC_RC5_POSITION                       equ 0005h
TRISC_RC5_SIZE                           equ 0001h
TRISC_RC5_LENGTH                         equ 0001h
TRISC_RC5_MASK                           equ 0020h
TRISC_RC6_POSN                           equ 0006h
TRISC_RC6_POSITION                       equ 0006h
TRISC_RC6_SIZE                           equ 0001h
TRISC_RC6_LENGTH                         equ 0001h
TRISC_RC6_MASK                           equ 0040h
TRISC_RC7_POSN                           equ 0007h
TRISC_RC7_POSITION                       equ 0007h
TRISC_RC7_SIZE                           equ 0001h
TRISC_RC7_LENGTH                         equ 0001h
TRISC_RC7_MASK                           equ 0080h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0F9Bh
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0006h
OSCTUNE_TUN_LENGTH                       equ 0006h
OSCTUNE_TUN_MASK                         equ 003Fh
OSCTUNE_PLLEN_POSN                       equ 0006h
OSCTUNE_PLLEN_POSITION                   equ 0006h
OSCTUNE_PLLEN_SIZE                       equ 0001h
OSCTUNE_PLLEN_LENGTH                     equ 0001h
OSCTUNE_PLLEN_MASK                       equ 0040h
OSCTUNE_INTSRC_POSN                      equ 0007h
OSCTUNE_INTSRC_POSITION                  equ 0007h
OSCTUNE_INTSRC_SIZE                      equ 0001h
OSCTUNE_INTSRC_LENGTH                    equ 0001h
OSCTUNE_INTSRC_MASK                      equ 0080h
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
OSCTUNE_TUN5_POSN                        equ 0005h
OSCTUNE_TUN5_POSITION                    equ 0005h
OSCTUNE_TUN5_SIZE                        equ 0001h
OSCTUNE_TUN5_LENGTH                      equ 0001h
OSCTUNE_TUN5_MASK                        equ 0020h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0F9Dh
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
PIE1_CCP1IE_POSN                         equ 0002h
PIE1_CCP1IE_POSITION                     equ 0002h
PIE1_CCP1IE_SIZE                         equ 0001h
PIE1_CCP1IE_LENGTH                       equ 0001h
PIE1_CCP1IE_MASK                         equ 0004h
PIE1_SSPIE_POSN                          equ 0003h
PIE1_SSPIE_POSITION                      equ 0003h
PIE1_SSPIE_SIZE                          equ 0001h
PIE1_SSPIE_LENGTH                        equ 0001h
PIE1_SSPIE_MASK                          equ 0008h
PIE1_TXIE_POSN                           equ 0004h
PIE1_TXIE_POSITION                       equ 0004h
PIE1_TXIE_SIZE                           equ 0001h
PIE1_TXIE_LENGTH                         equ 0001h
PIE1_TXIE_MASK                           equ 0010h
PIE1_RCIE_POSN                           equ 0005h
PIE1_RCIE_POSITION                       equ 0005h
PIE1_RCIE_SIZE                           equ 0001h
PIE1_RCIE_LENGTH                         equ 0001h
PIE1_RCIE_MASK                           equ 0020h
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h
PIE1_TX1IE_POSN                          equ 0004h
PIE1_TX1IE_POSITION                      equ 0004h
PIE1_TX1IE_SIZE                          equ 0001h
PIE1_TX1IE_LENGTH                        equ 0001h
PIE1_TX1IE_MASK                          equ 0010h
PIE1_RC1IE_POSN                          equ 0005h
PIE1_RC1IE_POSITION                      equ 0005h
PIE1_RC1IE_SIZE                          equ 0001h
PIE1_RC1IE_LENGTH                        equ 0001h
PIE1_RC1IE_MASK                          equ 0020h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 0F9Eh
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
PIR1_CCP1IF_POSN                         equ 0002h
PIR1_CCP1IF_POSITION                     equ 0002h
PIR1_CCP1IF_SIZE                         equ 0001h
PIR1_CCP1IF_LENGTH                       equ 0001h
PIR1_CCP1IF_MASK                         equ 0004h
PIR1_SSPIF_POSN                          equ 0003h
PIR1_SSPIF_POSITION                      equ 0003h
PIR1_SSPIF_SIZE                          equ 0001h
PIR1_SSPIF_LENGTH                        equ 0001h
PIR1_SSPIF_MASK                          equ 0008h
PIR1_TXIF_POSN                           equ 0004h
PIR1_TXIF_POSITION                       equ 0004h
PIR1_TXIF_SIZE                           equ 0001h
PIR1_TXIF_LENGTH                         equ 0001h
PIR1_TXIF_MASK                           equ 0010h
PIR1_RCIF_POSN                           equ 0005h
PIR1_RCIF_POSITION                       equ 0005h
PIR1_RCIF_SIZE                           equ 0001h
PIR1_RCIF_LENGTH                         equ 0001h
PIR1_RCIF_MASK                           equ 0020h
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h
PIR1_TX1IF_POSN                          equ 0004h
PIR1_TX1IF_POSITION                      equ 0004h
PIR1_TX1IF_SIZE                          equ 0001h
PIR1_TX1IF_LENGTH                        equ 0001h
PIR1_TX1IF_MASK                          equ 0010h
PIR1_RC1IF_POSN                          equ 0005h
PIR1_RC1IF_POSITION                      equ 0005h
PIR1_RC1IF_SIZE                          equ 0001h
PIR1_RC1IF_LENGTH                        equ 0001h
PIR1_RC1IF_MASK                          equ 0020h

// Register: IPR1
#define IPR1 IPR1
IPR1                                     equ 0F9Fh
// bitfield definitions
IPR1_TMR1IP_POSN                         equ 0000h
IPR1_TMR1IP_POSITION                     equ 0000h
IPR1_TMR1IP_SIZE                         equ 0001h
IPR1_TMR1IP_LENGTH                       equ 0001h
IPR1_TMR1IP_MASK                         equ 0001h
IPR1_TMR2IP_POSN                         equ 0001h
IPR1_TMR2IP_POSITION                     equ 0001h
IPR1_TMR2IP_SIZE                         equ 0001h
IPR1_TMR2IP_LENGTH                       equ 0001h
IPR1_TMR2IP_MASK                         equ 0002h
IPR1_CCP1IP_POSN                         equ 0002h
IPR1_CCP1IP_POSITION                     equ 0002h
IPR1_CCP1IP_SIZE                         equ 0001h
IPR1_CCP1IP_LENGTH                       equ 0001h
IPR1_CCP1IP_MASK                         equ 0004h
IPR1_SSPIP_POSN                          equ 0003h
IPR1_SSPIP_POSITION                      equ 0003h
IPR1_SSPIP_SIZE                          equ 0001h
IPR1_SSPIP_LENGTH                        equ 0001h
IPR1_SSPIP_MASK                          equ 0008h
IPR1_TXIP_POSN                           equ 0004h
IPR1_TXIP_POSITION                       equ 0004h
IPR1_TXIP_SIZE                           equ 0001h
IPR1_TXIP_LENGTH                         equ 0001h
IPR1_TXIP_MASK                           equ 0010h
IPR1_RCIP_POSN                           equ 0005h
IPR1_RCIP_POSITION                       equ 0005h
IPR1_RCIP_SIZE                           equ 0001h
IPR1_RCIP_LENGTH                         equ 0001h
IPR1_RCIP_MASK                           equ 0020h
IPR1_ADIP_POSN                           equ 0006h
IPR1_ADIP_POSITION                       equ 0006h
IPR1_ADIP_SIZE                           equ 0001h
IPR1_ADIP_LENGTH                         equ 0001h
IPR1_ADIP_MASK                           equ 0040h
IPR1_TX1IP_POSN                          equ 0004h
IPR1_TX1IP_POSITION                      equ 0004h
IPR1_TX1IP_SIZE                          equ 0001h
IPR1_TX1IP_LENGTH                        equ 0001h
IPR1_TX1IP_MASK                          equ 0010h
IPR1_RC1IP_POSN                          equ 0005h
IPR1_RC1IP_POSITION                      equ 0005h
IPR1_RC1IP_SIZE                          equ 0001h
IPR1_RC1IP_LENGTH                        equ 0001h
IPR1_RC1IP_MASK                          equ 0020h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0FA0h
// bitfield definitions
PIE2_TMR3IE_POSN                         equ 0001h
PIE2_TMR3IE_POSITION                     equ 0001h
PIE2_TMR3IE_SIZE                         equ 0001h
PIE2_TMR3IE_LENGTH                       equ 0001h
PIE2_TMR3IE_MASK                         equ 0002h
PIE2_BCLIE_POSN                          equ 0003h
PIE2_BCLIE_POSITION                      equ 0003h
PIE2_BCLIE_SIZE                          equ 0001h
PIE2_BCLIE_LENGTH                        equ 0001h
PIE2_BCLIE_MASK                          equ 0008h
PIE2_EEIE_POSN                           equ 0004h
PIE2_EEIE_POSITION                       equ 0004h
PIE2_EEIE_SIZE                           equ 0001h
PIE2_EEIE_LENGTH                         equ 0001h
PIE2_EEIE_MASK                           equ 0010h
PIE2_C2IE_POSN                           equ 0005h
PIE2_C2IE_POSITION                       equ 0005h
PIE2_C2IE_SIZE                           equ 0001h
PIE2_C2IE_LENGTH                         equ 0001h
PIE2_C2IE_MASK                           equ 0020h
PIE2_C1IE_POSN                           equ 0006h
PIE2_C1IE_POSITION                       equ 0006h
PIE2_C1IE_SIZE                           equ 0001h
PIE2_C1IE_LENGTH                         equ 0001h
PIE2_C1IE_MASK                           equ 0040h
PIE2_OSCFIE_POSN                         equ 0007h
PIE2_OSCFIE_POSITION                     equ 0007h
PIE2_OSCFIE_SIZE                         equ 0001h
PIE2_OSCFIE_LENGTH                       equ 0001h
PIE2_OSCFIE_MASK                         equ 0080h
PIE2_CMIE_POSN                           equ 0006h
PIE2_CMIE_POSITION                       equ 0006h
PIE2_CMIE_SIZE                           equ 0001h
PIE2_CMIE_LENGTH                         equ 0001h
PIE2_CMIE_MASK                           equ 0040h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0FA1h
// bitfield definitions
PIR2_TMR3IF_POSN                         equ 0001h
PIR2_TMR3IF_POSITION                     equ 0001h
PIR2_TMR3IF_SIZE                         equ 0001h
PIR2_TMR3IF_LENGTH                       equ 0001h
PIR2_TMR3IF_MASK                         equ 0002h
PIR2_BCLIF_POSN                          equ 0003h
PIR2_BCLIF_POSITION                      equ 0003h
PIR2_BCLIF_SIZE                          equ 0001h
PIR2_BCLIF_LENGTH                        equ 0001h
PIR2_BCLIF_MASK                          equ 0008h
PIR2_EEIF_POSN                           equ 0004h
PIR2_EEIF_POSITION                       equ 0004h
PIR2_EEIF_SIZE                           equ 0001h
PIR2_EEIF_LENGTH                         equ 0001h
PIR2_EEIF_MASK                           equ 0010h
PIR2_C2IF_POSN                           equ 0005h
PIR2_C2IF_POSITION                       equ 0005h
PIR2_C2IF_SIZE                           equ 0001h
PIR2_C2IF_LENGTH                         equ 0001h
PIR2_C2IF_MASK                           equ 0020h
PIR2_C1IF_POSN                           equ 0006h
PIR2_C1IF_POSITION                       equ 0006h
PIR2_C1IF_SIZE                           equ 0001h
PIR2_C1IF_LENGTH                         equ 0001h
PIR2_C1IF_MASK                           equ 0040h
PIR2_OSCFIF_POSN                         equ 0007h
PIR2_OSCFIF_POSITION                     equ 0007h
PIR2_OSCFIF_SIZE                         equ 0001h
PIR2_OSCFIF_LENGTH                       equ 0001h
PIR2_OSCFIF_MASK                         equ 0080h
PIR2_CMIF_POSN                           equ 0006h
PIR2_CMIF_POSITION                       equ 0006h
PIR2_CMIF_SIZE                           equ 0001h
PIR2_CMIF_LENGTH                         equ 0001h
PIR2_CMIF_MASK                           equ 0040h

// Register: IPR2
#define IPR2 IPR2
IPR2                                     equ 0FA2h
// bitfield definitions
IPR2_TMR3IP_POSN                         equ 0001h
IPR2_TMR3IP_POSITION                     equ 0001h
IPR2_TMR3IP_SIZE                         equ 0001h
IPR2_TMR3IP_LENGTH                       equ 0001h
IPR2_TMR3IP_MASK                         equ 0002h
IPR2_BCLIP_POSN                          equ 0003h
IPR2_BCLIP_POSITION                      equ 0003h
IPR2_BCLIP_SIZE                          equ 0001h
IPR2_BCLIP_LENGTH                        equ 0001h
IPR2_BCLIP_MASK                          equ 0008h
IPR2_EEIP_POSN                           equ 0004h
IPR2_EEIP_POSITION                       equ 0004h
IPR2_EEIP_SIZE                           equ 0001h
IPR2_EEIP_LENGTH                         equ 0001h
IPR2_EEIP_MASK                           equ 0010h
IPR2_C2IP_POSN                           equ 0005h
IPR2_C2IP_POSITION                       equ 0005h
IPR2_C2IP_SIZE                           equ 0001h
IPR2_C2IP_LENGTH                         equ 0001h
IPR2_C2IP_MASK                           equ 0020h
IPR2_C1IP_POSN                           equ 0006h
IPR2_C1IP_POSITION                       equ 0006h
IPR2_C1IP_SIZE                           equ 0001h
IPR2_C1IP_LENGTH                         equ 0001h
IPR2_C1IP_MASK                           equ 0040h
IPR2_OSCFIP_POSN                         equ 0007h
IPR2_OSCFIP_POSITION                     equ 0007h
IPR2_OSCFIP_SIZE                         equ 0001h
IPR2_OSCFIP_LENGTH                       equ 0001h
IPR2_OSCFIP_MASK                         equ 0080h
IPR2_CMIP_POSN                           equ 0006h
IPR2_CMIP_POSITION                       equ 0006h
IPR2_CMIP_SIZE                           equ 0001h
IPR2_CMIP_LENGTH                         equ 0001h
IPR2_CMIP_MASK                           equ 0040h

// Register: EECON1
#define EECON1 EECON1
EECON1                                   equ 0FA6h
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
EECON1_FREE_POSN                         equ 0004h
EECON1_FREE_POSITION                     equ 0004h
EECON1_FREE_SIZE                         equ 0001h
EECON1_FREE_LENGTH                       equ 0001h
EECON1_FREE_MASK                         equ 0010h
EECON1_CFGS_POSN                         equ 0006h
EECON1_CFGS_POSITION                     equ 0006h
EECON1_CFGS_SIZE                         equ 0001h
EECON1_CFGS_LENGTH                       equ 0001h
EECON1_CFGS_MASK                         equ 0040h
EECON1_EEPGD_POSN                        equ 0007h
EECON1_EEPGD_POSITION                    equ 0007h
EECON1_EEPGD_SIZE                        equ 0001h
EECON1_EEPGD_LENGTH                      equ 0001h
EECON1_EEPGD_MASK                        equ 0080h
EECON1_EEFS_POSN                         equ 0006h
EECON1_EEFS_POSITION                     equ 0006h
EECON1_EEFS_SIZE                         equ 0001h
EECON1_EEFS_LENGTH                       equ 0001h
EECON1_EEFS_MASK                         equ 0040h

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 0FA7h

// Register: EEDATA
#define EEDATA EEDATA
EEDATA                                   equ 0FA8h

// Register: EEADR
#define EEADR EEADR
EEADR                                    equ 0FA9h
// bitfield definitions
EEADR_EEADR0_POSN                        equ 0000h
EEADR_EEADR0_POSITION                    equ 0000h
EEADR_EEADR0_SIZE                        equ 0001h
EEADR_EEADR0_LENGTH                      equ 0001h
EEADR_EEADR0_MASK                        equ 0001h
EEADR_EEADR1_POSN                        equ 0001h
EEADR_EEADR1_POSITION                    equ 0001h
EEADR_EEADR1_SIZE                        equ 0001h
EEADR_EEADR1_LENGTH                      equ 0001h
EEADR_EEADR1_MASK                        equ 0002h
EEADR_EEADR2_POSN                        equ 0002h
EEADR_EEADR2_POSITION                    equ 0002h
EEADR_EEADR2_SIZE                        equ 0001h
EEADR_EEADR2_LENGTH                      equ 0001h
EEADR_EEADR2_MASK                        equ 0004h
EEADR_EEADR3_POSN                        equ 0003h
EEADR_EEADR3_POSITION                    equ 0003h
EEADR_EEADR3_SIZE                        equ 0001h
EEADR_EEADR3_LENGTH                      equ 0001h
EEADR_EEADR3_MASK                        equ 0008h
EEADR_EEADR4_POSN                        equ 0004h
EEADR_EEADR4_POSITION                    equ 0004h
EEADR_EEADR4_SIZE                        equ 0001h
EEADR_EEADR4_LENGTH                      equ 0001h
EEADR_EEADR4_MASK                        equ 0010h
EEADR_EEADR5_POSN                        equ 0005h
EEADR_EEADR5_POSITION                    equ 0005h
EEADR_EEADR5_SIZE                        equ 0001h
EEADR_EEADR5_LENGTH                      equ 0001h
EEADR_EEADR5_MASK                        equ 0020h
EEADR_EEADR6_POSN                        equ 0006h
EEADR_EEADR6_POSITION                    equ 0006h
EEADR_EEADR6_SIZE                        equ 0001h
EEADR_EEADR6_LENGTH                      equ 0001h
EEADR_EEADR6_MASK                        equ 0040h
EEADR_EEADR7_POSN                        equ 0007h
EEADR_EEADR7_POSITION                    equ 0007h
EEADR_EEADR7_SIZE                        equ 0001h
EEADR_EEADR7_LENGTH                      equ 0001h
EEADR_EEADR7_MASK                        equ 0080h

// Register: RCSTA
#define RCSTA RCSTA
RCSTA                                    equ 0FABh
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
RCSTA_ADEN_POSN                          equ 0003h
RCSTA_ADEN_POSITION                      equ 0003h
RCSTA_ADEN_SIZE                          equ 0001h
RCSTA_ADEN_LENGTH                        equ 0001h
RCSTA_ADEN_MASK                          equ 0008h
RCSTA_SRENA_POSN                         equ 0005h
RCSTA_SRENA_POSITION                     equ 0005h
RCSTA_SRENA_SIZE                         equ 0001h
RCSTA_SRENA_LENGTH                       equ 0001h
RCSTA_SRENA_MASK                         equ 0020h
RCSTA_RC8_9_POSN                         equ 0006h
RCSTA_RC8_9_POSITION                     equ 0006h
RCSTA_RC8_9_SIZE                         equ 0001h
RCSTA_RC8_9_LENGTH                       equ 0001h
RCSTA_RC8_9_MASK                         equ 0040h
RCSTA_RC9_POSN                           equ 0006h
RCSTA_RC9_POSITION                       equ 0006h
RCSTA_RC9_SIZE                           equ 0001h
RCSTA_RC9_LENGTH                         equ 0001h
RCSTA_RC9_MASK                           equ 0040h
RCSTA_RCD8_POSN                          equ 0000h
RCSTA_RCD8_POSITION                      equ 0000h
RCSTA_RCD8_SIZE                          equ 0001h
RCSTA_RCD8_LENGTH                        equ 0001h
RCSTA_RCD8_MASK                          equ 0001h

// Register: TXSTA
#define TXSTA TXSTA
TXSTA                                    equ 0FACh
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
TXSTA_TX9D1_POSN                         equ 0000h
TXSTA_TX9D1_POSITION                     equ 0000h
TXSTA_TX9D1_SIZE                         equ 0001h
TXSTA_TX9D1_LENGTH                       equ 0001h
TXSTA_TX9D1_MASK                         equ 0001h
TXSTA_TRMT1_POSN                         equ 0001h
TXSTA_TRMT1_POSITION                     equ 0001h
TXSTA_TRMT1_SIZE                         equ 0001h
TXSTA_TRMT1_LENGTH                       equ 0001h
TXSTA_TRMT1_MASK                         equ 0002h
TXSTA_BRGH1_POSN                         equ 0002h
TXSTA_BRGH1_POSITION                     equ 0002h
TXSTA_BRGH1_SIZE                         equ 0001h
TXSTA_BRGH1_LENGTH                       equ 0001h
TXSTA_BRGH1_MASK                         equ 0004h
TXSTA_SENDB1_POSN                        equ 0003h
TXSTA_SENDB1_POSITION                    equ 0003h
TXSTA_SENDB1_SIZE                        equ 0001h
TXSTA_SENDB1_LENGTH                      equ 0001h
TXSTA_SENDB1_MASK                        equ 0008h
TXSTA_SYNC1_POSN                         equ 0004h
TXSTA_SYNC1_POSITION                     equ 0004h
TXSTA_SYNC1_SIZE                         equ 0001h
TXSTA_SYNC1_LENGTH                       equ 0001h
TXSTA_SYNC1_MASK                         equ 0010h
TXSTA_TXEN1_POSN                         equ 0005h
TXSTA_TXEN1_POSITION                     equ 0005h
TXSTA_TXEN1_SIZE                         equ 0001h
TXSTA_TXEN1_LENGTH                       equ 0001h
TXSTA_TXEN1_MASK                         equ 0020h
TXSTA_TX91_POSN                          equ 0006h
TXSTA_TX91_POSITION                      equ 0006h
TXSTA_TX91_SIZE                          equ 0001h
TXSTA_TX91_LENGTH                        equ 0001h
TXSTA_TX91_MASK                          equ 0040h
TXSTA_CSRC1_POSN                         equ 0007h
TXSTA_CSRC1_POSITION                     equ 0007h
TXSTA_CSRC1_SIZE                         equ 0001h
TXSTA_CSRC1_LENGTH                       equ 0001h
TXSTA_CSRC1_MASK                         equ 0080h
TXSTA_TX8_9_POSN                         equ 0006h
TXSTA_TX8_9_POSITION                     equ 0006h
TXSTA_TX8_9_SIZE                         equ 0001h
TXSTA_TX8_9_LENGTH                       equ 0001h
TXSTA_TX8_9_MASK                         equ 0040h
TXSTA_TXD8_POSN                          equ 0000h
TXSTA_TXD8_POSITION                      equ 0000h
TXSTA_TXD8_SIZE                          equ 0001h
TXSTA_TXD8_LENGTH                        equ 0001h
TXSTA_TXD8_MASK                          equ 0001h

// Register: TXREG
#define TXREG TXREG
TXREG                                    equ 0FADh

// Register: RCREG
#define RCREG RCREG
RCREG                                    equ 0FAEh

// Register: SPBRG
#define SPBRG SPBRG
SPBRG                                    equ 0FAFh

// Register: SPBRGH
#define SPBRGH SPBRGH
SPBRGH                                   equ 0FB0h

// Register: T3CON
#define T3CON T3CON
T3CON                                    equ 0FB1h
// bitfield definitions
T3CON_NOT_T3SYNC_POSN                    equ 0002h
T3CON_NOT_T3SYNC_POSITION                equ 0002h
T3CON_NOT_T3SYNC_SIZE                    equ 0001h
T3CON_NOT_T3SYNC_LENGTH                  equ 0001h
T3CON_NOT_T3SYNC_MASK                    equ 0004h
T3CON_TMR3ON_POSN                        equ 0000h
T3CON_TMR3ON_POSITION                    equ 0000h
T3CON_TMR3ON_SIZE                        equ 0001h
T3CON_TMR3ON_LENGTH                      equ 0001h
T3CON_TMR3ON_MASK                        equ 0001h
T3CON_TMR3CS_POSN                        equ 0001h
T3CON_TMR3CS_POSITION                    equ 0001h
T3CON_TMR3CS_SIZE                        equ 0001h
T3CON_TMR3CS_LENGTH                      equ 0001h
T3CON_TMR3CS_MASK                        equ 0002h
T3CON_nT3SYNC_POSN                       equ 0002h
T3CON_nT3SYNC_POSITION                   equ 0002h
T3CON_nT3SYNC_SIZE                       equ 0001h
T3CON_nT3SYNC_LENGTH                     equ 0001h
T3CON_nT3SYNC_MASK                       equ 0004h
T3CON_T3CCP1_POSN                        equ 0003h
T3CON_T3CCP1_POSITION                    equ 0003h
T3CON_T3CCP1_SIZE                        equ 0001h
T3CON_T3CCP1_LENGTH                      equ 0001h
T3CON_T3CCP1_MASK                        equ 0008h
T3CON_T3CKPS_POSN                        equ 0004h
T3CON_T3CKPS_POSITION                    equ 0004h
T3CON_T3CKPS_SIZE                        equ 0002h
T3CON_T3CKPS_LENGTH                      equ 0002h
T3CON_T3CKPS_MASK                        equ 0030h
T3CON_RD16_POSN                          equ 0007h
T3CON_RD16_POSITION                      equ 0007h
T3CON_RD16_SIZE                          equ 0001h
T3CON_RD16_LENGTH                        equ 0001h
T3CON_RD16_MASK                          equ 0080h
T3CON_T3SYNC_POSN                        equ 0002h
T3CON_T3SYNC_POSITION                    equ 0002h
T3CON_T3SYNC_SIZE                        equ 0001h
T3CON_T3SYNC_LENGTH                      equ 0001h
T3CON_T3SYNC_MASK                        equ 0004h
T3CON_T3CKPS0_POSN                       equ 0004h
T3CON_T3CKPS0_POSITION                   equ 0004h
T3CON_T3CKPS0_SIZE                       equ 0001h
T3CON_T3CKPS0_LENGTH                     equ 0001h
T3CON_T3CKPS0_MASK                       equ 0010h
T3CON_T3CKPS1_POSN                       equ 0005h
T3CON_T3CKPS1_POSITION                   equ 0005h
T3CON_T3CKPS1_SIZE                       equ 0001h
T3CON_T3CKPS1_LENGTH                     equ 0001h
T3CON_T3CKPS1_MASK                       equ 0020h
T3CON_SOSCEN3_POSN                       equ 0003h
T3CON_SOSCEN3_POSITION                   equ 0003h
T3CON_SOSCEN3_SIZE                       equ 0001h
T3CON_SOSCEN3_LENGTH                     equ 0001h
T3CON_SOSCEN3_MASK                       equ 0008h
T3CON_RD163_POSN                         equ 0007h
T3CON_RD163_POSITION                     equ 0007h
T3CON_RD163_SIZE                         equ 0001h
T3CON_RD163_LENGTH                       equ 0001h
T3CON_RD163_MASK                         equ 0080h
T3CON_T3RD16_POSN                        equ 0007h
T3CON_T3RD16_POSITION                    equ 0007h
T3CON_T3RD16_SIZE                        equ 0001h
T3CON_T3RD16_LENGTH                      equ 0001h
T3CON_T3RD16_MASK                        equ 0080h

// Register: TMR3
#define TMR3 TMR3
TMR3                                     equ 0FB2h

// Register: TMR3L
#define TMR3L TMR3L
TMR3L                                    equ 0FB2h

// Register: TMR3H
#define TMR3H TMR3H
TMR3H                                    equ 0FB3h

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
ECCP1AS                                  equ 0FB6h
// bitfield definitions
ECCP1AS_PSSBD_POSN                       equ 0000h
ECCP1AS_PSSBD_POSITION                   equ 0000h
ECCP1AS_PSSBD_SIZE                       equ 0002h
ECCP1AS_PSSBD_LENGTH                     equ 0002h
ECCP1AS_PSSBD_MASK                       equ 0003h
ECCP1AS_PSSAC_POSN                       equ 0002h
ECCP1AS_PSSAC_POSITION                   equ 0002h
ECCP1AS_PSSAC_SIZE                       equ 0002h
ECCP1AS_PSSAC_LENGTH                     equ 0002h
ECCP1AS_PSSAC_MASK                       equ 000Ch
ECCP1AS_ECCPAS_POSN                      equ 0004h
ECCP1AS_ECCPAS_POSITION                  equ 0004h
ECCP1AS_ECCPAS_SIZE                      equ 0003h
ECCP1AS_ECCPAS_LENGTH                    equ 0003h
ECCP1AS_ECCPAS_MASK                      equ 0070h
ECCP1AS_ECCPASE_POSN                     equ 0007h
ECCP1AS_ECCPASE_POSITION                 equ 0007h
ECCP1AS_ECCPASE_SIZE                     equ 0001h
ECCP1AS_ECCPASE_LENGTH                   equ 0001h
ECCP1AS_ECCPASE_MASK                     equ 0080h
ECCP1AS_PSSBD0_POSN                      equ 0000h
ECCP1AS_PSSBD0_POSITION                  equ 0000h
ECCP1AS_PSSBD0_SIZE                      equ 0001h
ECCP1AS_PSSBD0_LENGTH                    equ 0001h
ECCP1AS_PSSBD0_MASK                      equ 0001h
ECCP1AS_PSSBD1_POSN                      equ 0001h
ECCP1AS_PSSBD1_POSITION                  equ 0001h
ECCP1AS_PSSBD1_SIZE                      equ 0001h
ECCP1AS_PSSBD1_LENGTH                    equ 0001h
ECCP1AS_PSSBD1_MASK                      equ 0002h
ECCP1AS_PSSAC0_POSN                      equ 0002h
ECCP1AS_PSSAC0_POSITION                  equ 0002h
ECCP1AS_PSSAC0_SIZE                      equ 0001h
ECCP1AS_PSSAC0_LENGTH                    equ 0001h
ECCP1AS_PSSAC0_MASK                      equ 0004h
ECCP1AS_PSSAC1_POSN                      equ 0003h
ECCP1AS_PSSAC1_POSITION                  equ 0003h
ECCP1AS_PSSAC1_SIZE                      equ 0001h
ECCP1AS_PSSAC1_LENGTH                    equ 0001h
ECCP1AS_PSSAC1_MASK                      equ 0008h
ECCP1AS_ECCPAS0_POSN                     equ 0004h
ECCP1AS_ECCPAS0_POSITION                 equ 0004h
ECCP1AS_ECCPAS0_SIZE                     equ 0001h
ECCP1AS_ECCPAS0_LENGTH                   equ 0001h
ECCP1AS_ECCPAS0_MASK                     equ 0010h
ECCP1AS_ECCPAS1_POSN                     equ 0005h
ECCP1AS_ECCPAS1_POSITION                 equ 0005h
ECCP1AS_ECCPAS1_SIZE                     equ 0001h
ECCP1AS_ECCPAS1_LENGTH                   equ 0001h
ECCP1AS_ECCPAS1_MASK                     equ 0020h
ECCP1AS_ECCPAS2_POSN                     equ 0006h
ECCP1AS_ECCPAS2_POSITION                 equ 0006h
ECCP1AS_ECCPAS2_SIZE                     equ 0001h
ECCP1AS_ECCPAS2_LENGTH                   equ 0001h
ECCP1AS_ECCPAS2_MASK                     equ 0040h

// Register: PWM1CON
#define PWM1CON PWM1CON
PWM1CON                                  equ 0FB7h
// bitfield definitions
PWM1CON_PDC_POSN                         equ 0000h
PWM1CON_PDC_POSITION                     equ 0000h
PWM1CON_PDC_SIZE                         equ 0007h
PWM1CON_PDC_LENGTH                       equ 0007h
PWM1CON_PDC_MASK                         equ 007Fh
PWM1CON_PRSEN_POSN                       equ 0007h
PWM1CON_PRSEN_POSITION                   equ 0007h
PWM1CON_PRSEN_SIZE                       equ 0001h
PWM1CON_PRSEN_LENGTH                     equ 0001h
PWM1CON_PRSEN_MASK                       equ 0080h
PWM1CON_PDC0_POSN                        equ 0000h
PWM1CON_PDC0_POSITION                    equ 0000h
PWM1CON_PDC0_SIZE                        equ 0001h
PWM1CON_PDC0_LENGTH                      equ 0001h
PWM1CON_PDC0_MASK                        equ 0001h
PWM1CON_PDC1_POSN                        equ 0001h
PWM1CON_PDC1_POSITION                    equ 0001h
PWM1CON_PDC1_SIZE                        equ 0001h
PWM1CON_PDC1_LENGTH                      equ 0001h
PWM1CON_PDC1_MASK                        equ 0002h
PWM1CON_PDC2_POSN                        equ 0002h
PWM1CON_PDC2_POSITION                    equ 0002h
PWM1CON_PDC2_SIZE                        equ 0001h
PWM1CON_PDC2_LENGTH                      equ 0001h
PWM1CON_PDC2_MASK                        equ 0004h
PWM1CON_PDC3_POSN                        equ 0003h
PWM1CON_PDC3_POSITION                    equ 0003h
PWM1CON_PDC3_SIZE                        equ 0001h
PWM1CON_PDC3_LENGTH                      equ 0001h
PWM1CON_PDC3_MASK                        equ 0008h
PWM1CON_PDC4_POSN                        equ 0004h
PWM1CON_PDC4_POSITION                    equ 0004h
PWM1CON_PDC4_SIZE                        equ 0001h
PWM1CON_PDC4_LENGTH                      equ 0001h
PWM1CON_PDC4_MASK                        equ 0010h
PWM1CON_PDC5_POSN                        equ 0005h
PWM1CON_PDC5_POSITION                    equ 0005h
PWM1CON_PDC5_SIZE                        equ 0001h
PWM1CON_PDC5_LENGTH                      equ 0001h
PWM1CON_PDC5_MASK                        equ 0020h
PWM1CON_PDC6_POSN                        equ 0006h
PWM1CON_PDC6_POSITION                    equ 0006h
PWM1CON_PDC6_SIZE                        equ 0001h
PWM1CON_PDC6_LENGTH                      equ 0001h
PWM1CON_PDC6_MASK                        equ 0040h

// Register: BAUDCON
#define BAUDCON BAUDCON
BAUDCON                                  equ 0FB8h
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
BAUDCON_CKTXP_POSN                       equ 0004h
BAUDCON_CKTXP_POSITION                   equ 0004h
BAUDCON_CKTXP_SIZE                       equ 0001h
BAUDCON_CKTXP_LENGTH                     equ 0001h
BAUDCON_CKTXP_MASK                       equ 0010h
BAUDCON_DTRXP_POSN                       equ 0005h
BAUDCON_DTRXP_POSITION                   equ 0005h
BAUDCON_DTRXP_SIZE                       equ 0001h
BAUDCON_DTRXP_LENGTH                     equ 0001h
BAUDCON_DTRXP_MASK                       equ 0020h
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
BAUDCON_SCKP_POSN                        equ 0004h
BAUDCON_SCKP_POSITION                    equ 0004h
BAUDCON_SCKP_SIZE                        equ 0001h
BAUDCON_SCKP_LENGTH                      equ 0001h
BAUDCON_SCKP_MASK                        equ 0010h
BAUDCON_RXCKP_POSN                       equ 0005h
BAUDCON_RXCKP_POSITION                   equ 0005h
BAUDCON_RXCKP_SIZE                       equ 0001h
BAUDCON_RXCKP_LENGTH                     equ 0001h
BAUDCON_RXCKP_MASK                       equ 0020h
BAUDCON_W4E_POSN                         equ 0001h
BAUDCON_W4E_POSITION                     equ 0001h
BAUDCON_W4E_SIZE                         equ 0001h
BAUDCON_W4E_LENGTH                       equ 0001h
BAUDCON_W4E_MASK                         equ 0002h

// Register: PSTRCON
#define PSTRCON PSTRCON
PSTRCON                                  equ 0FB9h
// bitfield definitions
PSTRCON_STRA_POSN                        equ 0000h
PSTRCON_STRA_POSITION                    equ 0000h
PSTRCON_STRA_SIZE                        equ 0001h
PSTRCON_STRA_LENGTH                      equ 0001h
PSTRCON_STRA_MASK                        equ 0001h
PSTRCON_STRB_POSN                        equ 0001h
PSTRCON_STRB_POSITION                    equ 0001h
PSTRCON_STRB_SIZE                        equ 0001h
PSTRCON_STRB_LENGTH                      equ 0001h
PSTRCON_STRB_MASK                        equ 0002h
PSTRCON_STRC_POSN                        equ 0002h
PSTRCON_STRC_POSITION                    equ 0002h
PSTRCON_STRC_SIZE                        equ 0001h
PSTRCON_STRC_LENGTH                      equ 0001h
PSTRCON_STRC_MASK                        equ 0004h
PSTRCON_STRD_POSN                        equ 0003h
PSTRCON_STRD_POSITION                    equ 0003h
PSTRCON_STRD_SIZE                        equ 0001h
PSTRCON_STRD_LENGTH                      equ 0001h
PSTRCON_STRD_MASK                        equ 0008h
PSTRCON_STRSYNC_POSN                     equ 0004h
PSTRCON_STRSYNC_POSITION                 equ 0004h
PSTRCON_STRSYNC_SIZE                     equ 0001h
PSTRCON_STRSYNC_LENGTH                   equ 0001h
PSTRCON_STRSYNC_MASK                     equ 0010h

// Register: VREFCON0
#define VREFCON0 VREFCON0
VREFCON0                                 equ 0FBAh
// bitfield definitions
VREFCON0_FVR1S0_POSN                     equ 0004h
VREFCON0_FVR1S0_POSITION                 equ 0004h
VREFCON0_FVR1S0_SIZE                     equ 0001h
VREFCON0_FVR1S0_LENGTH                   equ 0001h
VREFCON0_FVR1S0_MASK                     equ 0010h
VREFCON0_FVR1S1_POSN                     equ 0005h
VREFCON0_FVR1S1_POSITION                 equ 0005h
VREFCON0_FVR1S1_SIZE                     equ 0001h
VREFCON0_FVR1S1_LENGTH                   equ 0001h
VREFCON0_FVR1S1_MASK                     equ 0020h
VREFCON0_FVR1ST_POSN                     equ 0006h
VREFCON0_FVR1ST_POSITION                 equ 0006h
VREFCON0_FVR1ST_SIZE                     equ 0001h
VREFCON0_FVR1ST_LENGTH                   equ 0001h
VREFCON0_FVR1ST_MASK                     equ 0040h
VREFCON0_FVR1EN_POSN                     equ 0007h
VREFCON0_FVR1EN_POSITION                 equ 0007h
VREFCON0_FVR1EN_SIZE                     equ 0001h
VREFCON0_FVR1EN_LENGTH                   equ 0001h
VREFCON0_FVR1EN_MASK                     equ 0080h

// Register: VREFCON1
#define VREFCON1 VREFCON1
VREFCON1                                 equ 0FBBh
// bitfield definitions
VREFCON1_D1NSS_POSN                      equ 0000h
VREFCON1_D1NSS_POSITION                  equ 0000h
VREFCON1_D1NSS_SIZE                      equ 0001h
VREFCON1_D1NSS_LENGTH                    equ 0001h
VREFCON1_D1NSS_MASK                      equ 0001h
VREFCON1_D1PSS_POSN                      equ 0002h
VREFCON1_D1PSS_POSITION                  equ 0002h
VREFCON1_D1PSS_SIZE                      equ 0002h
VREFCON1_D1PSS_LENGTH                    equ 0002h
VREFCON1_D1PSS_MASK                      equ 000Ch
VREFCON1_DAC1OE_POSN                     equ 0005h
VREFCON1_DAC1OE_POSITION                 equ 0005h
VREFCON1_DAC1OE_SIZE                     equ 0001h
VREFCON1_DAC1OE_LENGTH                   equ 0001h
VREFCON1_DAC1OE_MASK                     equ 0020h
VREFCON1_D1LPS_POSN                      equ 0006h
VREFCON1_D1LPS_POSITION                  equ 0006h
VREFCON1_D1LPS_SIZE                      equ 0001h
VREFCON1_D1LPS_LENGTH                    equ 0001h
VREFCON1_D1LPS_MASK                      equ 0040h
VREFCON1_D1EN_POSN                       equ 0007h
VREFCON1_D1EN_POSITION                   equ 0007h
VREFCON1_D1EN_SIZE                       equ 0001h
VREFCON1_D1EN_LENGTH                     equ 0001h
VREFCON1_D1EN_MASK                       equ 0080h
VREFCON1_D1NSS0_POSN                     equ 0000h
VREFCON1_D1NSS0_POSITION                 equ 0000h
VREFCON1_D1NSS0_SIZE                     equ 0001h
VREFCON1_D1NSS0_LENGTH                   equ 0001h
VREFCON1_D1NSS0_MASK                     equ 0001h
VREFCON1_D1PSS0_POSN                     equ 0002h
VREFCON1_D1PSS0_POSITION                 equ 0002h
VREFCON1_D1PSS0_SIZE                     equ 0001h
VREFCON1_D1PSS0_LENGTH                   equ 0001h
VREFCON1_D1PSS0_MASK                     equ 0004h
VREFCON1_D1PSS1_POSN                     equ 0003h
VREFCON1_D1PSS1_POSITION                 equ 0003h
VREFCON1_D1PSS1_SIZE                     equ 0001h
VREFCON1_D1PSS1_LENGTH                   equ 0001h
VREFCON1_D1PSS1_MASK                     equ 0008h

// Register: VREFCON2
#define VREFCON2 VREFCON2
VREFCON2                                 equ 0FBCh
// bitfield definitions
VREFCON2_DAC1R_POSN                      equ 0000h
VREFCON2_DAC1R_POSITION                  equ 0000h
VREFCON2_DAC1R_SIZE                      equ 0005h
VREFCON2_DAC1R_LENGTH                    equ 0005h
VREFCON2_DAC1R_MASK                      equ 001Fh
VREFCON2_DAC1R0_POSN                     equ 0000h
VREFCON2_DAC1R0_POSITION                 equ 0000h
VREFCON2_DAC1R0_SIZE                     equ 0001h
VREFCON2_DAC1R0_LENGTH                   equ 0001h
VREFCON2_DAC1R0_MASK                     equ 0001h
VREFCON2_DAC1R1_POSN                     equ 0001h
VREFCON2_DAC1R1_POSITION                 equ 0001h
VREFCON2_DAC1R1_SIZE                     equ 0001h
VREFCON2_DAC1R1_LENGTH                   equ 0001h
VREFCON2_DAC1R1_MASK                     equ 0002h
VREFCON2_DAC1R2_POSN                     equ 0002h
VREFCON2_DAC1R2_POSITION                 equ 0002h
VREFCON2_DAC1R2_SIZE                     equ 0001h
VREFCON2_DAC1R2_LENGTH                   equ 0001h
VREFCON2_DAC1R2_MASK                     equ 0004h
VREFCON2_DAC1R3_POSN                     equ 0003h
VREFCON2_DAC1R3_POSITION                 equ 0003h
VREFCON2_DAC1R3_SIZE                     equ 0001h
VREFCON2_DAC1R3_LENGTH                   equ 0001h
VREFCON2_DAC1R3_MASK                     equ 0008h
VREFCON2_DAC1R4_POSN                     equ 0004h
VREFCON2_DAC1R4_POSITION                 equ 0004h
VREFCON2_DAC1R4_SIZE                     equ 0001h
VREFCON2_DAC1R4_LENGTH                   equ 0001h
VREFCON2_DAC1R4_MASK                     equ 0010h

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0FBDh
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
CCP1CON_P1M_POSN                         equ 0006h
CCP1CON_P1M_POSITION                     equ 0006h
CCP1CON_P1M_SIZE                         equ 0002h
CCP1CON_P1M_LENGTH                       equ 0002h
CCP1CON_P1M_MASK                         equ 00C0h
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
CCP1CON_P1M0_POSN                        equ 0006h
CCP1CON_P1M0_POSITION                    equ 0006h
CCP1CON_P1M0_SIZE                        equ 0001h
CCP1CON_P1M0_LENGTH                      equ 0001h
CCP1CON_P1M0_MASK                        equ 0040h
CCP1CON_P1M1_POSN                        equ 0007h
CCP1CON_P1M1_POSITION                    equ 0007h
CCP1CON_P1M1_SIZE                        equ 0001h
CCP1CON_P1M1_LENGTH                      equ 0001h
CCP1CON_P1M1_MASK                        equ 0080h

// Register: CCPR1
#define CCPR1 CCPR1
CCPR1                                    equ 0FBEh

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0FBEh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0FBFh

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 0FC0h
// bitfield definitions
ADCON2_ADCS_POSN                         equ 0000h
ADCON2_ADCS_POSITION                     equ 0000h
ADCON2_ADCS_SIZE                         equ 0003h
ADCON2_ADCS_LENGTH                       equ 0003h
ADCON2_ADCS_MASK                         equ 0007h
ADCON2_ACQT_POSN                         equ 0003h
ADCON2_ACQT_POSITION                     equ 0003h
ADCON2_ACQT_SIZE                         equ 0003h
ADCON2_ACQT_LENGTH                       equ 0003h
ADCON2_ACQT_MASK                         equ 0038h
ADCON2_ADFM_POSN                         equ 0007h
ADCON2_ADFM_POSITION                     equ 0007h
ADCON2_ADFM_SIZE                         equ 0001h
ADCON2_ADFM_LENGTH                       equ 0001h
ADCON2_ADFM_MASK                         equ 0080h
ADCON2_ADCS0_POSN                        equ 0000h
ADCON2_ADCS0_POSITION                    equ 0000h
ADCON2_ADCS0_SIZE                        equ 0001h
ADCON2_ADCS0_LENGTH                      equ 0001h
ADCON2_ADCS0_MASK                        equ 0001h
ADCON2_ADCS1_POSN                        equ 0001h
ADCON2_ADCS1_POSITION                    equ 0001h
ADCON2_ADCS1_SIZE                        equ 0001h
ADCON2_ADCS1_LENGTH                      equ 0001h
ADCON2_ADCS1_MASK                        equ 0002h
ADCON2_ADCS2_POSN                        equ 0002h
ADCON2_ADCS2_POSITION                    equ 0002h
ADCON2_ADCS2_SIZE                        equ 0001h
ADCON2_ADCS2_LENGTH                      equ 0001h
ADCON2_ADCS2_MASK                        equ 0004h
ADCON2_ACQT0_POSN                        equ 0003h
ADCON2_ACQT0_POSITION                    equ 0003h
ADCON2_ACQT0_SIZE                        equ 0001h
ADCON2_ACQT0_LENGTH                      equ 0001h
ADCON2_ACQT0_MASK                        equ 0008h
ADCON2_ACQT1_POSN                        equ 0004h
ADCON2_ACQT1_POSITION                    equ 0004h
ADCON2_ACQT1_SIZE                        equ 0001h
ADCON2_ACQT1_LENGTH                      equ 0001h
ADCON2_ACQT1_MASK                        equ 0010h
ADCON2_ACQT2_POSN                        equ 0005h
ADCON2_ACQT2_POSITION                    equ 0005h
ADCON2_ACQT2_SIZE                        equ 0001h
ADCON2_ACQT2_LENGTH                      equ 0001h
ADCON2_ACQT2_MASK                        equ 0020h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 0FC1h
// bitfield definitions
ADCON1_NVCFG_POSN                        equ 0000h
ADCON1_NVCFG_POSITION                    equ 0000h
ADCON1_NVCFG_SIZE                        equ 0002h
ADCON1_NVCFG_LENGTH                      equ 0002h
ADCON1_NVCFG_MASK                        equ 0003h
ADCON1_PVCFG_POSN                        equ 0002h
ADCON1_PVCFG_POSITION                    equ 0002h
ADCON1_PVCFG_SIZE                        equ 0002h
ADCON1_PVCFG_LENGTH                      equ 0002h
ADCON1_PVCFG_MASK                        equ 000Ch
ADCON1_NVCFG0_POSN                       equ 0000h
ADCON1_NVCFG0_POSITION                   equ 0000h
ADCON1_NVCFG0_SIZE                       equ 0001h
ADCON1_NVCFG0_LENGTH                     equ 0001h
ADCON1_NVCFG0_MASK                       equ 0001h
ADCON1_NVCFG1_POSN                       equ 0001h
ADCON1_NVCFG1_POSITION                   equ 0001h
ADCON1_NVCFG1_SIZE                       equ 0001h
ADCON1_NVCFG1_LENGTH                     equ 0001h
ADCON1_NVCFG1_MASK                       equ 0002h
ADCON1_PVCFG0_POSN                       equ 0002h
ADCON1_PVCFG0_POSITION                   equ 0002h
ADCON1_PVCFG0_SIZE                       equ 0001h
ADCON1_PVCFG0_LENGTH                     equ 0001h
ADCON1_PVCFG0_MASK                       equ 0004h
ADCON1_PVCFG1_POSN                       equ 0003h
ADCON1_PVCFG1_POSITION                   equ 0003h
ADCON1_PVCFG1_SIZE                       equ 0001h
ADCON1_PVCFG1_LENGTH                     equ 0001h
ADCON1_PVCFG1_MASK                       equ 0008h
ADCON1_CHSN3_POSN                        equ 0003h
ADCON1_CHSN3_POSITION                    equ 0003h
ADCON1_CHSN3_SIZE                        equ 0001h
ADCON1_CHSN3_LENGTH                      equ 0001h
ADCON1_CHSN3_MASK                        equ 0008h

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 0FC2h
// bitfield definitions
ADCON0_GO_NOT_DONE_POSN                  equ 0001h
ADCON0_GO_NOT_DONE_POSITION              equ 0001h
ADCON0_GO_NOT_DONE_SIZE                  equ 0001h
ADCON0_GO_NOT_DONE_LENGTH                equ 0001h
ADCON0_GO_NOT_DONE_MASK                  equ 0002h
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
ADCON0_DONE_POSN                         equ 0001h
ADCON0_DONE_POSITION                     equ 0001h
ADCON0_DONE_SIZE                         equ 0001h
ADCON0_DONE_LENGTH                       equ 0001h
ADCON0_DONE_MASK                         equ 0002h
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
ADCON0_NOT_DONE_POSN                     equ 0001h
ADCON0_NOT_DONE_POSITION                 equ 0001h
ADCON0_NOT_DONE_SIZE                     equ 0001h
ADCON0_NOT_DONE_LENGTH                   equ 0001h
ADCON0_NOT_DONE_MASK                     equ 0002h
ADCON0_nDONE_POSN                        equ 0001h
ADCON0_nDONE_POSITION                    equ 0001h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0002h
ADCON0_GO_DONE_POSN                      equ 0001h
ADCON0_GO_DONE_POSITION                  equ 0001h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0002h
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h
ADCON0_GODONE_POSN                       equ 0001h
ADCON0_GODONE_POSITION                   equ 0001h
ADCON0_GODONE_SIZE                       equ 0001h
ADCON0_GODONE_LENGTH                     equ 0001h
ADCON0_GODONE_MASK                       equ 0002h

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 0FC3h

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 0FC3h

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 0FC4h

// Register: SSPCON2
#define SSPCON2 SSPCON2
SSPCON2                                  equ 0FC5h
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

// Register: SSPCON1
#define SSPCON1 SSPCON1
SSPCON1                                  equ 0FC6h
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

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
SSPSTAT                                  equ 0FC7h
// bitfield definitions
SSPSTAT_R_NOT_W_POSN                     equ 0002h
SSPSTAT_R_NOT_W_POSITION                 equ 0002h
SSPSTAT_R_NOT_W_SIZE                     equ 0001h
SSPSTAT_R_NOT_W_LENGTH                   equ 0001h
SSPSTAT_R_NOT_W_MASK                     equ 0004h
SSPSTAT_D_NOT_A_POSN                     equ 0005h
SSPSTAT_D_NOT_A_POSITION                 equ 0005h
SSPSTAT_D_NOT_A_SIZE                     equ 0001h
SSPSTAT_D_NOT_A_LENGTH                   equ 0001h
SSPSTAT_D_NOT_A_MASK                     equ 0020h
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
SSPSTAT_R_POSN                           equ 0002h
SSPSTAT_R_POSITION                       equ 0002h
SSPSTAT_R_SIZE                           equ 0001h
SSPSTAT_R_LENGTH                         equ 0001h
SSPSTAT_R_MASK                           equ 0004h
SSPSTAT_D_POSN                           equ 0005h
SSPSTAT_D_POSITION                       equ 0005h
SSPSTAT_D_SIZE                           equ 0001h
SSPSTAT_D_LENGTH                         equ 0001h
SSPSTAT_D_MASK                           equ 0020h
SSPSTAT_W_POSN                           equ 0002h
SSPSTAT_W_POSITION                       equ 0002h
SSPSTAT_W_SIZE                           equ 0001h
SSPSTAT_W_LENGTH                         equ 0001h
SSPSTAT_W_MASK                           equ 0004h
SSPSTAT_A_POSN                           equ 0005h
SSPSTAT_A_POSITION                       equ 0005h
SSPSTAT_A_SIZE                           equ 0001h
SSPSTAT_A_LENGTH                         equ 0001h
SSPSTAT_A_MASK                           equ 0020h
SSPSTAT_nW_POSN                          equ 0002h
SSPSTAT_nW_POSITION                      equ 0002h
SSPSTAT_nW_SIZE                          equ 0001h
SSPSTAT_nW_LENGTH                        equ 0001h
SSPSTAT_nW_MASK                          equ 0004h
SSPSTAT_nA_POSN                          equ 0005h
SSPSTAT_nA_POSITION                      equ 0005h
SSPSTAT_nA_SIZE                          equ 0001h
SSPSTAT_nA_LENGTH                        equ 0001h
SSPSTAT_nA_MASK                          equ 0020h
SSPSTAT_R_W_POSN                         equ 0002h
SSPSTAT_R_W_POSITION                     equ 0002h
SSPSTAT_R_W_SIZE                         equ 0001h
SSPSTAT_R_W_LENGTH                       equ 0001h
SSPSTAT_R_W_MASK                         equ 0004h
SSPSTAT_D_A_POSN                         equ 0005h
SSPSTAT_D_A_POSITION                     equ 0005h
SSPSTAT_D_A_SIZE                         equ 0001h
SSPSTAT_D_A_LENGTH                       equ 0001h
SSPSTAT_D_A_MASK                         equ 0020h
SSPSTAT_NOT_WRITE_POSN                   equ 0002h
SSPSTAT_NOT_WRITE_POSITION               equ 0002h
SSPSTAT_NOT_WRITE_SIZE                   equ 0001h
SSPSTAT_NOT_WRITE_LENGTH                 equ 0001h
SSPSTAT_NOT_WRITE_MASK                   equ 0004h
SSPSTAT_NOT_ADDRESS_POSN                 equ 0005h
SSPSTAT_NOT_ADDRESS_POSITION             equ 0005h
SSPSTAT_NOT_ADDRESS_SIZE                 equ 0001h
SSPSTAT_NOT_ADDRESS_LENGTH               equ 0001h
SSPSTAT_NOT_ADDRESS_MASK                 equ 0020h
SSPSTAT_nWRITE_POSN                      equ 0002h
SSPSTAT_nWRITE_POSITION                  equ 0002h
SSPSTAT_nWRITE_SIZE                      equ 0001h
SSPSTAT_nWRITE_LENGTH                    equ 0001h
SSPSTAT_nWRITE_MASK                      equ 0004h
SSPSTAT_nADDRESS_POSN                    equ 0005h
SSPSTAT_nADDRESS_POSITION                equ 0005h
SSPSTAT_nADDRESS_SIZE                    equ 0001h
SSPSTAT_nADDRESS_LENGTH                  equ 0001h
SSPSTAT_nADDRESS_MASK                    equ 0020h
SSPSTAT_RW_POSN                          equ 0002h
SSPSTAT_RW_POSITION                      equ 0002h
SSPSTAT_RW_SIZE                          equ 0001h
SSPSTAT_RW_LENGTH                        equ 0001h
SSPSTAT_RW_MASK                          equ 0004h
SSPSTAT_START_POSN                       equ 0003h
SSPSTAT_START_POSITION                   equ 0003h
SSPSTAT_START_SIZE                       equ 0001h
SSPSTAT_START_LENGTH                     equ 0001h
SSPSTAT_START_MASK                       equ 0008h
SSPSTAT_STOP_POSN                        equ 0004h
SSPSTAT_STOP_POSITION                    equ 0004h
SSPSTAT_STOP_SIZE                        equ 0001h
SSPSTAT_STOP_LENGTH                      equ 0001h
SSPSTAT_STOP_MASK                        equ 0010h
SSPSTAT_DA_POSN                          equ 0005h
SSPSTAT_DA_POSITION                      equ 0005h
SSPSTAT_DA_SIZE                          equ 0001h
SSPSTAT_DA_LENGTH                        equ 0001h
SSPSTAT_DA_MASK                          equ 0020h
SSPSTAT_NOT_W_POSN                       equ 0002h
SSPSTAT_NOT_W_POSITION                   equ 0002h
SSPSTAT_NOT_W_SIZE                       equ 0001h
SSPSTAT_NOT_W_LENGTH                     equ 0001h
SSPSTAT_NOT_W_MASK                       equ 0004h
SSPSTAT_NOT_A_POSN                       equ 0005h
SSPSTAT_NOT_A_POSITION                   equ 0005h
SSPSTAT_NOT_A_SIZE                       equ 0001h
SSPSTAT_NOT_A_LENGTH                     equ 0001h
SSPSTAT_NOT_A_MASK                       equ 0020h

// Register: SSPADD
#define SSPADD SSPADD
SSPADD                                   equ 0FC8h

// Register: SSPBUF
#define SSPBUF SSPBUF
SSPBUF                                   equ 0FC9h

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0FCAh
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

// Register: PR2
#define PR2 PR2
PR2                                      equ 0FCBh
// bitfield definitions
PR2_EBDIS_POSN                           equ 0007h
PR2_EBDIS_POSITION                       equ 0007h
PR2_EBDIS_SIZE                           equ 0001h
PR2_EBDIS_LENGTH                         equ 0001h
PR2_EBDIS_MASK                           equ 0080h
PR2_WAIT0_POSN                           equ 0004h
PR2_WAIT0_POSITION                       equ 0004h
PR2_WAIT0_SIZE                           equ 0001h
PR2_WAIT0_LENGTH                         equ 0001h
PR2_WAIT0_MASK                           equ 0010h
PR2_WAIT1_POSN                           equ 0005h
PR2_WAIT1_POSITION                       equ 0005h
PR2_WAIT1_SIZE                           equ 0001h
PR2_WAIT1_LENGTH                         equ 0001h
PR2_WAIT1_MASK                           equ 0020h
PR2_WM0_POSN                             equ 0000h
PR2_WM0_POSITION                         equ 0000h
PR2_WM0_SIZE                             equ 0001h
PR2_WM0_LENGTH                           equ 0001h
PR2_WM0_MASK                             equ 0001h
PR2_WM1_POSN                             equ 0001h
PR2_WM1_POSITION                         equ 0001h
PR2_WM1_SIZE                             equ 0001h
PR2_WM1_LENGTH                           equ 0001h
PR2_WM1_MASK                             equ 0002h

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 0FCCh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0FCDh
// bitfield definitions
T1CON_NOT_T1SYNC_POSN                    equ 0002h
T1CON_NOT_T1SYNC_POSITION                equ 0002h
T1CON_NOT_T1SYNC_SIZE                    equ 0001h
T1CON_NOT_T1SYNC_LENGTH                  equ 0001h
T1CON_NOT_T1SYNC_MASK                    equ 0004h
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
T1CON_T1RUN_POSN                         equ 0006h
T1CON_T1RUN_POSITION                     equ 0006h
T1CON_T1RUN_SIZE                         equ 0001h
T1CON_T1RUN_LENGTH                       equ 0001h
T1CON_T1RUN_MASK                         equ 0040h
T1CON_RD16_POSN                          equ 0007h
T1CON_RD16_POSITION                      equ 0007h
T1CON_RD16_SIZE                          equ 0001h
T1CON_RD16_LENGTH                        equ 0001h
T1CON_RD16_MASK                          equ 0080h
T1CON_T1SYNC_POSN                        equ 0002h
T1CON_T1SYNC_POSITION                    equ 0002h
T1CON_T1SYNC_SIZE                        equ 0001h
T1CON_T1SYNC_LENGTH                      equ 0001h
T1CON_T1SYNC_MASK                        equ 0004h
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
T1CON_SOSCEN_POSN                        equ 0003h
T1CON_SOSCEN_POSITION                    equ 0003h
T1CON_SOSCEN_SIZE                        equ 0001h
T1CON_SOSCEN_LENGTH                      equ 0001h
T1CON_SOSCEN_MASK                        equ 0008h
T1CON_T1RD16_POSN                        equ 0007h
T1CON_T1RD16_POSITION                    equ 0007h
T1CON_T1RD16_SIZE                        equ 0001h
T1CON_T1RD16_LENGTH                      equ 0001h
T1CON_T1RD16_MASK                        equ 0080h

// Register: TMR1
#define TMR1 TMR1
TMR1                                     equ 0FCEh

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 0FCEh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 0FCFh

// Register: RCON
#define RCON RCON
RCON                                     equ 0FD0h
// bitfield definitions
RCON_NOT_BOR_POSN                        equ 0000h
RCON_NOT_BOR_POSITION                    equ 0000h
RCON_NOT_BOR_SIZE                        equ 0001h
RCON_NOT_BOR_LENGTH                      equ 0001h
RCON_NOT_BOR_MASK                        equ 0001h
RCON_NOT_POR_POSN                        equ 0001h
RCON_NOT_POR_POSITION                    equ 0001h
RCON_NOT_POR_SIZE                        equ 0001h
RCON_NOT_POR_LENGTH                      equ 0001h
RCON_NOT_POR_MASK                        equ 0002h
RCON_NOT_PD_POSN                         equ 0002h
RCON_NOT_PD_POSITION                     equ 0002h
RCON_NOT_PD_SIZE                         equ 0001h
RCON_NOT_PD_LENGTH                       equ 0001h
RCON_NOT_PD_MASK                         equ 0004h
RCON_NOT_TO_POSN                         equ 0003h
RCON_NOT_TO_POSITION                     equ 0003h
RCON_NOT_TO_SIZE                         equ 0001h
RCON_NOT_TO_LENGTH                       equ 0001h
RCON_NOT_TO_MASK                         equ 0008h
RCON_NOT_RI_POSN                         equ 0004h
RCON_NOT_RI_POSITION                     equ 0004h
RCON_NOT_RI_SIZE                         equ 0001h
RCON_NOT_RI_LENGTH                       equ 0001h
RCON_NOT_RI_MASK                         equ 0010h
RCON_nBOR_POSN                           equ 0000h
RCON_nBOR_POSITION                       equ 0000h
RCON_nBOR_SIZE                           equ 0001h
RCON_nBOR_LENGTH                         equ 0001h
RCON_nBOR_MASK                           equ 0001h
RCON_nPOR_POSN                           equ 0001h
RCON_nPOR_POSITION                       equ 0001h
RCON_nPOR_SIZE                           equ 0001h
RCON_nPOR_LENGTH                         equ 0001h
RCON_nPOR_MASK                           equ 0002h
RCON_nPD_POSN                            equ 0002h
RCON_nPD_POSITION                        equ 0002h
RCON_nPD_SIZE                            equ 0001h
RCON_nPD_LENGTH                          equ 0001h
RCON_nPD_MASK                            equ 0004h
RCON_nTO_POSN                            equ 0003h
RCON_nTO_POSITION                        equ 0003h
RCON_nTO_SIZE                            equ 0001h
RCON_nTO_LENGTH                          equ 0001h
RCON_nTO_MASK                            equ 0008h
RCON_nRI_POSN                            equ 0004h
RCON_nRI_POSITION                        equ 0004h
RCON_nRI_SIZE                            equ 0001h
RCON_nRI_LENGTH                          equ 0001h
RCON_nRI_MASK                            equ 0010h
RCON_SBOREN_POSN                         equ 0006h
RCON_SBOREN_POSITION                     equ 0006h
RCON_SBOREN_SIZE                         equ 0001h
RCON_SBOREN_LENGTH                       equ 0001h
RCON_SBOREN_MASK                         equ 0040h
RCON_IPEN_POSN                           equ 0007h
RCON_IPEN_POSITION                       equ 0007h
RCON_IPEN_SIZE                           equ 0001h
RCON_IPEN_LENGTH                         equ 0001h
RCON_IPEN_MASK                           equ 0080h
RCON_BOR_POSN                            equ 0000h
RCON_BOR_POSITION                        equ 0000h
RCON_BOR_SIZE                            equ 0001h
RCON_BOR_LENGTH                          equ 0001h
RCON_BOR_MASK                            equ 0001h
RCON_POR_POSN                            equ 0001h
RCON_POR_POSITION                        equ 0001h
RCON_POR_SIZE                            equ 0001h
RCON_POR_LENGTH                          equ 0001h
RCON_POR_MASK                            equ 0002h
RCON_PD_POSN                             equ 0002h
RCON_PD_POSITION                         equ 0002h
RCON_PD_SIZE                             equ 0001h
RCON_PD_LENGTH                           equ 0001h
RCON_PD_MASK                             equ 0004h
RCON_TO_POSN                             equ 0003h
RCON_TO_POSITION                         equ 0003h
RCON_TO_SIZE                             equ 0001h
RCON_TO_LENGTH                           equ 0001h
RCON_TO_MASK                             equ 0008h
RCON_RI_POSN                             equ 0004h
RCON_RI_POSITION                         equ 0004h
RCON_RI_SIZE                             equ 0001h
RCON_RI_LENGTH                           equ 0001h
RCON_RI_MASK                             equ 0010h

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0FD1h
// bitfield definitions
WDTCON_SWDTEN_POSN                       equ 0000h
WDTCON_SWDTEN_POSITION                   equ 0000h
WDTCON_SWDTEN_SIZE                       equ 0001h
WDTCON_SWDTEN_LENGTH                     equ 0001h
WDTCON_SWDTEN_MASK                       equ 0001h
WDTCON_SWDTE_POSN                        equ 0000h
WDTCON_SWDTE_POSITION                    equ 0000h
WDTCON_SWDTE_SIZE                        equ 0001h
WDTCON_SWDTE_LENGTH                      equ 0001h
WDTCON_SWDTE_MASK                        equ 0001h

// Register: OSCCON2
#define OSCCON2 OSCCON2
OSCCON2                                  equ 0FD2h
// bitfield definitions
OSCCON2_LFIOFS_POSN                      equ 0000h
OSCCON2_LFIOFS_POSITION                  equ 0000h
OSCCON2_LFIOFS_SIZE                      equ 0001h
OSCCON2_LFIOFS_LENGTH                    equ 0001h
OSCCON2_LFIOFS_MASK                      equ 0001h
OSCCON2_HFIOFL_POSN                      equ 0001h
OSCCON2_HFIOFL_POSITION                  equ 0001h
OSCCON2_HFIOFL_SIZE                      equ 0001h
OSCCON2_HFIOFL_LENGTH                    equ 0001h
OSCCON2_HFIOFL_MASK                      equ 0002h
OSCCON2_PRI_SD_POSN                      equ 0002h
OSCCON2_PRI_SD_POSITION                  equ 0002h
OSCCON2_PRI_SD_SIZE                      equ 0001h
OSCCON2_PRI_SD_LENGTH                    equ 0001h
OSCCON2_PRI_SD_MASK                      equ 0004h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0FD3h
// bitfield definitions
OSCCON_SCS_POSN                          equ 0000h
OSCCON_SCS_POSITION                      equ 0000h
OSCCON_SCS_SIZE                          equ 0002h
OSCCON_SCS_LENGTH                        equ 0002h
OSCCON_SCS_MASK                          equ 0003h
OSCCON_HFIOFS_POSN                       equ 0002h
OSCCON_HFIOFS_POSITION                   equ 0002h
OSCCON_HFIOFS_SIZE                       equ 0001h
OSCCON_HFIOFS_LENGTH                     equ 0001h
OSCCON_HFIOFS_MASK                       equ 0004h
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
OSCCON_IDLEN_POSN                        equ 0007h
OSCCON_IDLEN_POSITION                    equ 0007h
OSCCON_IDLEN_SIZE                        equ 0001h
OSCCON_IDLEN_LENGTH                      equ 0001h
OSCCON_IDLEN_MASK                        equ 0080h
OSCCON_SCS0_POSN                         equ 0000h
OSCCON_SCS0_POSITION                     equ 0000h
OSCCON_SCS0_SIZE                         equ 0001h
OSCCON_SCS0_LENGTH                       equ 0001h
OSCCON_SCS0_MASK                         equ 0001h
OSCCON_SCS1_POSN                         equ 0001h
OSCCON_SCS1_POSITION                     equ 0001h
OSCCON_SCS1_SIZE                         equ 0001h
OSCCON_SCS1_LENGTH                       equ 0001h
OSCCON_SCS1_MASK                         equ 0002h
OSCCON_FLTS_POSN                         equ 0002h
OSCCON_FLTS_POSITION                     equ 0002h
OSCCON_FLTS_SIZE                         equ 0001h
OSCCON_FLTS_LENGTH                       equ 0001h
OSCCON_FLTS_MASK                         equ 0004h
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

// Register: T0CON
#define T0CON T0CON
T0CON                                    equ 0FD5h
// bitfield definitions
T0CON_T0PS_POSN                          equ 0000h
T0CON_T0PS_POSITION                      equ 0000h
T0CON_T0PS_SIZE                          equ 0003h
T0CON_T0PS_LENGTH                        equ 0003h
T0CON_T0PS_MASK                          equ 0007h
T0CON_PSA_POSN                           equ 0003h
T0CON_PSA_POSITION                       equ 0003h
T0CON_PSA_SIZE                           equ 0001h
T0CON_PSA_LENGTH                         equ 0001h
T0CON_PSA_MASK                           equ 0008h
T0CON_T0SE_POSN                          equ 0004h
T0CON_T0SE_POSITION                      equ 0004h
T0CON_T0SE_SIZE                          equ 0001h
T0CON_T0SE_LENGTH                        equ 0001h
T0CON_T0SE_MASK                          equ 0010h
T0CON_T0CS_POSN                          equ 0005h
T0CON_T0CS_POSITION                      equ 0005h
T0CON_T0CS_SIZE                          equ 0001h
T0CON_T0CS_LENGTH                        equ 0001h
T0CON_T0CS_MASK                          equ 0020h
T0CON_T08BIT_POSN                        equ 0006h
T0CON_T08BIT_POSITION                    equ 0006h
T0CON_T08BIT_SIZE                        equ 0001h
T0CON_T08BIT_LENGTH                      equ 0001h
T0CON_T08BIT_MASK                        equ 0040h
T0CON_TMR0ON_POSN                        equ 0007h
T0CON_TMR0ON_POSITION                    equ 0007h
T0CON_TMR0ON_SIZE                        equ 0001h
T0CON_TMR0ON_LENGTH                      equ 0001h
T0CON_TMR0ON_MASK                        equ 0080h
T0CON_T0PS0_POSN                         equ 0000h
T0CON_T0PS0_POSITION                     equ 0000h
T0CON_T0PS0_SIZE                         equ 0001h
T0CON_T0PS0_LENGTH                       equ 0001h
T0CON_T0PS0_MASK                         equ 0001h
T0CON_T0PS1_POSN                         equ 0001h
T0CON_T0PS1_POSITION                     equ 0001h
T0CON_T0PS1_SIZE                         equ 0001h
T0CON_T0PS1_LENGTH                       equ 0001h
T0CON_T0PS1_MASK                         equ 0002h
T0CON_T0PS2_POSN                         equ 0002h
T0CON_T0PS2_POSITION                     equ 0002h
T0CON_T0PS2_SIZE                         equ 0001h
T0CON_T0PS2_LENGTH                       equ 0001h
T0CON_T0PS2_MASK                         equ 0004h

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0FD6h

// Register: TMR0L
#define TMR0L TMR0L
TMR0L                                    equ 0FD6h

// Register: TMR0H
#define TMR0H TMR0H
TMR0H                                    equ 0FD7h

// Register: STATUS
#define STATUS STATUS
STATUS                                   equ 0FD8h
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
STATUS_OV_POSN                           equ 0003h
STATUS_OV_POSITION                       equ 0003h
STATUS_OV_SIZE                           equ 0001h
STATUS_OV_LENGTH                         equ 0001h
STATUS_OV_MASK                           equ 0008h
STATUS_N_POSN                            equ 0004h
STATUS_N_POSITION                        equ 0004h
STATUS_N_SIZE                            equ 0001h
STATUS_N_LENGTH                          equ 0001h
STATUS_N_MASK                            equ 0010h
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
STATUS_OVERFLOW_POSN                     equ 0003h
STATUS_OVERFLOW_POSITION                 equ 0003h
STATUS_OVERFLOW_SIZE                     equ 0001h
STATUS_OVERFLOW_LENGTH                   equ 0001h
STATUS_OVERFLOW_MASK                     equ 0008h
STATUS_NEGATIVE_POSN                     equ 0004h
STATUS_NEGATIVE_POSITION                 equ 0004h
STATUS_NEGATIVE_SIZE                     equ 0001h
STATUS_NEGATIVE_LENGTH                   equ 0001h
STATUS_NEGATIVE_MASK                     equ 0010h

// Register: FSR2
#define FSR2 FSR2
FSR2                                     equ 0FD9h

// Register: FSR2L
#define FSR2L FSR2L
FSR2L                                    equ 0FD9h

// Register: FSR2H
#define FSR2H FSR2H
FSR2H                                    equ 0FDAh

// Register: PLUSW2
#define PLUSW2 PLUSW2
PLUSW2                                   equ 0FDBh

// Register: PREINC2
#define PREINC2 PREINC2
PREINC2                                  equ 0FDCh

// Register: POSTDEC2
#define POSTDEC2 POSTDEC2
POSTDEC2                                 equ 0FDDh

// Register: POSTINC2
#define POSTINC2 POSTINC2
POSTINC2                                 equ 0FDEh

// Register: INDF2
#define INDF2 INDF2
INDF2                                    equ 0FDFh

// Register: BSR
#define BSR BSR
BSR                                      equ 0FE0h

// Register: FSR1
#define FSR1 FSR1
FSR1                                     equ 0FE1h

// Register: FSR1L
#define FSR1L FSR1L
FSR1L                                    equ 0FE1h

// Register: FSR1H
#define FSR1H FSR1H
FSR1H                                    equ 0FE2h

// Register: PLUSW1
#define PLUSW1 PLUSW1
PLUSW1                                   equ 0FE3h

// Register: PREINC1
#define PREINC1 PREINC1
PREINC1                                  equ 0FE4h

// Register: POSTDEC1
#define POSTDEC1 POSTDEC1
POSTDEC1                                 equ 0FE5h

// Register: POSTINC1
#define POSTINC1 POSTINC1
POSTINC1                                 equ 0FE6h

// Register: INDF1
#define INDF1 INDF1
INDF1                                    equ 0FE7h

// Register: WREG
#define WREG WREG
WREG                                     equ 0FE8h

// Register: FSR0
#define FSR0 FSR0
FSR0                                     equ 0FE9h

// Register: FSR0L
#define FSR0L FSR0L
FSR0L                                    equ 0FE9h

// Register: FSR0H
#define FSR0H FSR0H
FSR0H                                    equ 0FEAh

// Register: PLUSW0
#define PLUSW0 PLUSW0
PLUSW0                                   equ 0FEBh

// Register: PREINC0
#define PREINC0 PREINC0
PREINC0                                  equ 0FECh

// Register: POSTDEC0
#define POSTDEC0 POSTDEC0
POSTDEC0                                 equ 0FEDh

// Register: POSTINC0
#define POSTINC0 POSTINC0
POSTINC0                                 equ 0FEEh

// Register: INDF0
#define INDF0 INDF0
INDF0                                    equ 0FEFh

// Register: INTCON3
#define INTCON3 INTCON3
INTCON3                                  equ 0FF0h
// bitfield definitions
INTCON3_INT1IF_POSN                      equ 0000h
INTCON3_INT1IF_POSITION                  equ 0000h
INTCON3_INT1IF_SIZE                      equ 0001h
INTCON3_INT1IF_LENGTH                    equ 0001h
INTCON3_INT1IF_MASK                      equ 0001h
INTCON3_INT2IF_POSN                      equ 0001h
INTCON3_INT2IF_POSITION                  equ 0001h
INTCON3_INT2IF_SIZE                      equ 0001h
INTCON3_INT2IF_LENGTH                    equ 0001h
INTCON3_INT2IF_MASK                      equ 0002h
INTCON3_INT1IE_POSN                      equ 0003h
INTCON3_INT1IE_POSITION                  equ 0003h
INTCON3_INT1IE_SIZE                      equ 0001h
INTCON3_INT1IE_LENGTH                    equ 0001h
INTCON3_INT1IE_MASK                      equ 0008h
INTCON3_INT2IE_POSN                      equ 0004h
INTCON3_INT2IE_POSITION                  equ 0004h
INTCON3_INT2IE_SIZE                      equ 0001h
INTCON3_INT2IE_LENGTH                    equ 0001h
INTCON3_INT2IE_MASK                      equ 0010h
INTCON3_INT1IP_POSN                      equ 0006h
INTCON3_INT1IP_POSITION                  equ 0006h
INTCON3_INT1IP_SIZE                      equ 0001h
INTCON3_INT1IP_LENGTH                    equ 0001h
INTCON3_INT1IP_MASK                      equ 0040h
INTCON3_INT2IP_POSN                      equ 0007h
INTCON3_INT2IP_POSITION                  equ 0007h
INTCON3_INT2IP_SIZE                      equ 0001h
INTCON3_INT2IP_LENGTH                    equ 0001h
INTCON3_INT2IP_MASK                      equ 0080h
INTCON3_INT1F_POSN                       equ 0000h
INTCON3_INT1F_POSITION                   equ 0000h
INTCON3_INT1F_SIZE                       equ 0001h
INTCON3_INT1F_LENGTH                     equ 0001h
INTCON3_INT1F_MASK                       equ 0001h
INTCON3_INT2F_POSN                       equ 0001h
INTCON3_INT2F_POSITION                   equ 0001h
INTCON3_INT2F_SIZE                       equ 0001h
INTCON3_INT2F_LENGTH                     equ 0001h
INTCON3_INT2F_MASK                       equ 0002h
INTCON3_INT1E_POSN                       equ 0003h
INTCON3_INT1E_POSITION                   equ 0003h
INTCON3_INT1E_SIZE                       equ 0001h
INTCON3_INT1E_LENGTH                     equ 0001h
INTCON3_INT1E_MASK                       equ 0008h
INTCON3_INT2E_POSN                       equ 0004h
INTCON3_INT2E_POSITION                   equ 0004h
INTCON3_INT2E_SIZE                       equ 0001h
INTCON3_INT2E_LENGTH                     equ 0001h
INTCON3_INT2E_MASK                       equ 0010h
INTCON3_INT1P_POSN                       equ 0006h
INTCON3_INT1P_POSITION                   equ 0006h
INTCON3_INT1P_SIZE                       equ 0001h
INTCON3_INT1P_LENGTH                     equ 0001h
INTCON3_INT1P_MASK                       equ 0040h
INTCON3_INT2P_POSN                       equ 0007h
INTCON3_INT2P_POSITION                   equ 0007h
INTCON3_INT2P_SIZE                       equ 0001h
INTCON3_INT2P_LENGTH                     equ 0001h
INTCON3_INT2P_MASK                       equ 0080h

// Register: INTCON2
#define INTCON2 INTCON2
INTCON2                                  equ 0FF1h
// bitfield definitions
INTCON2_NOT_RABPU_POSN                   equ 0007h
INTCON2_NOT_RABPU_POSITION               equ 0007h
INTCON2_NOT_RABPU_SIZE                   equ 0001h
INTCON2_NOT_RABPU_LENGTH                 equ 0001h
INTCON2_NOT_RABPU_MASK                   equ 0080h
INTCON2_RABIP_POSN                       equ 0000h
INTCON2_RABIP_POSITION                   equ 0000h
INTCON2_RABIP_SIZE                       equ 0001h
INTCON2_RABIP_LENGTH                     equ 0001h
INTCON2_RABIP_MASK                       equ 0001h
INTCON2_TMR0IP_POSN                      equ 0002h
INTCON2_TMR0IP_POSITION                  equ 0002h
INTCON2_TMR0IP_SIZE                      equ 0001h
INTCON2_TMR0IP_LENGTH                    equ 0001h
INTCON2_TMR0IP_MASK                      equ 0004h
INTCON2_INTEDG2_POSN                     equ 0004h
INTCON2_INTEDG2_POSITION                 equ 0004h
INTCON2_INTEDG2_SIZE                     equ 0001h
INTCON2_INTEDG2_LENGTH                   equ 0001h
INTCON2_INTEDG2_MASK                     equ 0010h
INTCON2_INTEDG1_POSN                     equ 0005h
INTCON2_INTEDG1_POSITION                 equ 0005h
INTCON2_INTEDG1_SIZE                     equ 0001h
INTCON2_INTEDG1_LENGTH                   equ 0001h
INTCON2_INTEDG1_MASK                     equ 0020h
INTCON2_INTEDG0_POSN                     equ 0006h
INTCON2_INTEDG0_POSITION                 equ 0006h
INTCON2_INTEDG0_SIZE                     equ 0001h
INTCON2_INTEDG0_LENGTH                   equ 0001h
INTCON2_INTEDG0_MASK                     equ 0040h
INTCON2_nRABPU_POSN                      equ 0007h
INTCON2_nRABPU_POSITION                  equ 0007h
INTCON2_nRABPU_SIZE                      equ 0001h
INTCON2_nRABPU_LENGTH                    equ 0001h
INTCON2_nRABPU_MASK                      equ 0080h
INTCON2_RBIP_POSN                        equ 0000h
INTCON2_RBIP_POSITION                    equ 0000h
INTCON2_RBIP_SIZE                        equ 0001h
INTCON2_RBIP_LENGTH                      equ 0001h
INTCON2_RBIP_MASK                        equ 0001h
INTCON2_RABPU_POSN                       equ 0007h
INTCON2_RABPU_POSITION                   equ 0007h
INTCON2_RABPU_SIZE                       equ 0001h
INTCON2_RABPU_LENGTH                     equ 0001h
INTCON2_RABPU_MASK                       equ 0080h
INTCON2_NOT_RBPU_POSN                    equ 0007h
INTCON2_NOT_RBPU_POSITION                equ 0007h
INTCON2_NOT_RBPU_SIZE                    equ 0001h
INTCON2_NOT_RBPU_LENGTH                  equ 0001h
INTCON2_NOT_RBPU_MASK                    equ 0080h
INTCON2_nRBPU_POSN                       equ 0007h
INTCON2_nRBPU_POSITION                   equ 0007h
INTCON2_nRBPU_SIZE                       equ 0001h
INTCON2_nRBPU_LENGTH                     equ 0001h
INTCON2_nRBPU_MASK                       equ 0080h

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 0FF2h
// bitfield definitions
INTCON_RABIF_POSN                        equ 0000h
INTCON_RABIF_POSITION                    equ 0000h
INTCON_RABIF_SIZE                        equ 0001h
INTCON_RABIF_LENGTH                      equ 0001h
INTCON_RABIF_MASK                        equ 0001h
INTCON_INT0IF_POSN                       equ 0001h
INTCON_INT0IF_POSITION                   equ 0001h
INTCON_INT0IF_SIZE                       equ 0001h
INTCON_INT0IF_LENGTH                     equ 0001h
INTCON_INT0IF_MASK                       equ 0002h
INTCON_TMR0IF_POSN                       equ 0002h
INTCON_TMR0IF_POSITION                   equ 0002h
INTCON_TMR0IF_SIZE                       equ 0001h
INTCON_TMR0IF_LENGTH                     equ 0001h
INTCON_TMR0IF_MASK                       equ 0004h
INTCON_RABIE_POSN                        equ 0003h
INTCON_RABIE_POSITION                    equ 0003h
INTCON_RABIE_SIZE                        equ 0001h
INTCON_RABIE_LENGTH                      equ 0001h
INTCON_RABIE_MASK                        equ 0008h
INTCON_INT0IE_POSN                       equ 0004h
INTCON_INT0IE_POSITION                   equ 0004h
INTCON_INT0IE_SIZE                       equ 0001h
INTCON_INT0IE_LENGTH                     equ 0001h
INTCON_INT0IE_MASK                       equ 0010h
INTCON_TMR0IE_POSN                       equ 0005h
INTCON_TMR0IE_POSITION                   equ 0005h
INTCON_TMR0IE_SIZE                       equ 0001h
INTCON_TMR0IE_LENGTH                     equ 0001h
INTCON_TMR0IE_MASK                       equ 0020h
INTCON_PEIE_GIEL_POSN                    equ 0006h
INTCON_PEIE_GIEL_POSITION                equ 0006h
INTCON_PEIE_GIEL_SIZE                    equ 0001h
INTCON_PEIE_GIEL_LENGTH                  equ 0001h
INTCON_PEIE_GIEL_MASK                    equ 0040h
INTCON_GIE_GIEH_POSN                     equ 0007h
INTCON_GIE_GIEH_POSITION                 equ 0007h
INTCON_GIE_GIEH_SIZE                     equ 0001h
INTCON_GIE_GIEH_LENGTH                   equ 0001h
INTCON_GIE_GIEH_MASK                     equ 0080h
INTCON_RBIF_POSN                         equ 0000h
INTCON_RBIF_POSITION                     equ 0000h
INTCON_RBIF_SIZE                         equ 0001h
INTCON_RBIF_LENGTH                       equ 0001h
INTCON_RBIF_MASK                         equ 0001h
INTCON_INT0F_POSN                        equ 0001h
INTCON_INT0F_POSITION                    equ 0001h
INTCON_INT0F_SIZE                        equ 0001h
INTCON_INT0F_LENGTH                      equ 0001h
INTCON_INT0F_MASK                        equ 0002h
INTCON_T0IF_POSN                         equ 0002h
INTCON_T0IF_POSITION                     equ 0002h
INTCON_T0IF_SIZE                         equ 0001h
INTCON_T0IF_LENGTH                       equ 0001h
INTCON_T0IF_MASK                         equ 0004h
INTCON_RBIE_POSN                         equ 0003h
INTCON_RBIE_POSITION                     equ 0003h
INTCON_RBIE_SIZE                         equ 0001h
INTCON_RBIE_LENGTH                       equ 0001h
INTCON_RBIE_MASK                         equ 0008h
INTCON_INT0E_POSN                        equ 0004h
INTCON_INT0E_POSITION                    equ 0004h
INTCON_INT0E_SIZE                        equ 0001h
INTCON_INT0E_LENGTH                      equ 0001h
INTCON_INT0E_MASK                        equ 0010h
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
INTCON_GIEL_POSN                         equ 0006h
INTCON_GIEL_POSITION                     equ 0006h
INTCON_GIEL_SIZE                         equ 0001h
INTCON_GIEL_LENGTH                       equ 0001h
INTCON_GIEL_MASK                         equ 0040h
INTCON_GIEH_POSN                         equ 0007h
INTCON_GIEH_POSITION                     equ 0007h
INTCON_GIEH_SIZE                         equ 0001h
INTCON_GIEH_LENGTH                       equ 0001h
INTCON_GIEH_MASK                         equ 0080h
INTCON_PIE_POSN                          equ 0006h
INTCON_PIE_POSITION                      equ 0006h
INTCON_PIE_SIZE                          equ 0001h
INTCON_PIE_LENGTH                        equ 0001h
INTCON_PIE_MASK                          equ 0040h

// Register: PROD
#define PROD PROD
PROD                                     equ 0FF3h

// Register: PRODL
#define PRODL PRODL
PRODL                                    equ 0FF3h

// Register: PRODH
#define PRODH PRODH
PRODH                                    equ 0FF4h

// Register: TABLAT
#define TABLAT TABLAT
TABLAT                                   equ 0FF5h

// Register: TBLPTR
#define TBLPTR TBLPTR
TBLPTR                                   equ 0FF6h

// Register: TBLPTRL
#define TBLPTRL TBLPTRL
TBLPTRL                                  equ 0FF6h

// Register: TBLPTRH
#define TBLPTRH TBLPTRH
TBLPTRH                                  equ 0FF7h

// Register: TBLPTRU
#define TBLPTRU TBLPTRU
TBLPTRU                                  equ 0FF8h

// Register: PCLAT
#define PCLAT PCLAT
PCLAT                                    equ 0FF9h

// Register: PCL
#define PCL PCL
PCL                                      equ 0FF9h

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 0FFAh

// Register: PCLATU
#define PCLATU PCLATU
PCLATU                                   equ 0FFBh

// Register: STKPTR
#define STKPTR STKPTR
STKPTR                                   equ 0FFCh
// bitfield definitions
STKPTR_STKPTR_POSN                       equ 0000h
STKPTR_STKPTR_POSITION                   equ 0000h
STKPTR_STKPTR_SIZE                       equ 0005h
STKPTR_STKPTR_LENGTH                     equ 0005h
STKPTR_STKPTR_MASK                       equ 001Fh
STKPTR_STKUNF_POSN                       equ 0006h
STKPTR_STKUNF_POSITION                   equ 0006h
STKPTR_STKUNF_SIZE                       equ 0001h
STKPTR_STKUNF_LENGTH                     equ 0001h
STKPTR_STKUNF_MASK                       equ 0040h
STKPTR_STKOVF_POSN                       equ 0007h
STKPTR_STKOVF_POSITION                   equ 0007h
STKPTR_STKOVF_SIZE                       equ 0001h
STKPTR_STKOVF_LENGTH                     equ 0001h
STKPTR_STKOVF_MASK                       equ 0080h
STKPTR_SP0_POSN                          equ 0000h
STKPTR_SP0_POSITION                      equ 0000h
STKPTR_SP0_SIZE                          equ 0001h
STKPTR_SP0_LENGTH                        equ 0001h
STKPTR_SP0_MASK                          equ 0001h
STKPTR_SP1_POSN                          equ 0001h
STKPTR_SP1_POSITION                      equ 0001h
STKPTR_SP1_SIZE                          equ 0001h
STKPTR_SP1_LENGTH                        equ 0001h
STKPTR_SP1_MASK                          equ 0002h
STKPTR_SP2_POSN                          equ 0002h
STKPTR_SP2_POSITION                      equ 0002h
STKPTR_SP2_SIZE                          equ 0001h
STKPTR_SP2_LENGTH                        equ 0001h
STKPTR_SP2_MASK                          equ 0004h
STKPTR_SP3_POSN                          equ 0003h
STKPTR_SP3_POSITION                      equ 0003h
STKPTR_SP3_SIZE                          equ 0001h
STKPTR_SP3_LENGTH                        equ 0001h
STKPTR_SP3_MASK                          equ 0008h
STKPTR_SP4_POSN                          equ 0004h
STKPTR_SP4_POSITION                      equ 0004h
STKPTR_SP4_SIZE                          equ 0001h
STKPTR_SP4_LENGTH                        equ 0001h
STKPTR_SP4_MASK                          equ 0010h
STKPTR_STKFUL_POSN                       equ 0007h
STKPTR_STKFUL_POSITION                   equ 0007h
STKPTR_STKFUL_SIZE                       equ 0001h
STKPTR_STKFUL_LENGTH                     equ 0001h
STKPTR_STKFUL_MASK                       equ 0080h

// Register: TOS
#define TOS TOS
TOS                                      equ 0FFDh

// Register: TOSL
#define TOSL TOSL
TOSL                                     equ 0FFDh

// Register: TOSH
#define TOSH TOSH
TOSH                                     equ 0FFEh

// Register: TOSU
#define TOSU TOSU
TOSU                                     equ 0FFFh

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 0FFFFFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 0FFh)
#endif
#define ABDEN                            BANKMASK(BAUDCON), 0, a
#define ABDOVF                           BANKMASK(BAUDCON), 7, a
#define ACKDT                            BANKMASK(SSPCON2), 5, a
#define ACKEN                            BANKMASK(SSPCON2), 4, a
#define ACKSTAT                          BANKMASK(SSPCON2), 6, a
#define ACQT0                            BANKMASK(ADCON2), 3, a
#define ACQT1                            BANKMASK(ADCON2), 4, a
#define ACQT2                            BANKMASK(ADCON2), 5, a
#define ADCS0                            BANKMASK(ADCON2), 0, a
#define ADCS1                            BANKMASK(ADCON2), 1, a
#define ADCS2                            BANKMASK(ADCON2), 2, a
#define ADDEN                            BANKMASK(RCSTA), 3, a
#define ADEN                             BANKMASK(RCSTA), 3, a
#define ADFM                             BANKMASK(ADCON2), 7, a
#define ADIE                             BANKMASK(PIE1), 6, a
#define ADIF                             BANKMASK(PIR1), 6, a
#define ADIP                             BANKMASK(IPR1), 6, a
#define ADON                             BANKMASK(ADCON0), 0, a
#define AN0                              BANKMASK(PORTA), 0, a
#define AN1                              BANKMASK(PORTA), 1, a
#define AN10                             BANKMASK(PORTB), 4, a
#define AN2                              BANKMASK(PORTA), 2, a
#define AN3                              BANKMASK(PORTA), 4, a
#define AN4                              BANKMASK(PORTC), 0, a
#define AN5                              BANKMASK(PORTC), 1, a
#define AN6                              BANKMASK(PORTC), 2, a
#define AN7                              BANKMASK(PORTC), 3, a
#define ANS0                             BANKMASK(ANSEL), 0, a
#define ANS1                             BANKMASK(ANSEL), 1, a
#define ANS10                            BANKMASK(ANSELH), 2, a
#define ANS11                            BANKMASK(ANSELH), 3, a
#define ANS2                             BANKMASK(ANSEL), 2, a
#define ANS3                             BANKMASK(ANSEL), 3, a
#define ANS4                             BANKMASK(ANSEL), 4, a
#define ANS5                             BANKMASK(ANSEL), 5, a
#define ANS6                             BANKMASK(ANSEL), 6, a
#define ANS7                             BANKMASK(ANSEL), 7, a
#define ANS8                             BANKMASK(ANSELH), 0, a
#define ANS9                             BANKMASK(ANSELH), 1, a
#define ANSEL0                           BANKMASK(ANSEL), 0, a
#define ANSEL1                           BANKMASK(ANSEL), 1, a
#define ANSEL10                          BANKMASK(ANSELH), 2, a
#define ANSEL11                          BANKMASK(ANSELH), 3, a
#define ANSEL2                           BANKMASK(ANSEL), 2, a
#define ANSEL3                           BANKMASK(ANSEL), 3, a
#define ANSEL4                           BANKMASK(ANSEL), 4, a
#define ANSEL5                           BANKMASK(ANSEL), 5, a
#define ANSEL6                           BANKMASK(ANSEL), 6, a
#define ANSEL7                           BANKMASK(ANSEL), 7, a
#define ANSEL8                           BANKMASK(ANSELH), 0, a
#define ANSEL9                           BANKMASK(ANSELH), 1, a
#define BCLIE                            BANKMASK(PIE2), 3, a
#define BCLIF                            BANKMASK(PIR2), 3, a
#define BCLIP                            BANKMASK(IPR2), 3, a
#define BF                               BANKMASK(SSPSTAT), 0, a
#define BOR                              BANKMASK(RCON), 0, a
#define BRG16                            BANKMASK(BAUDCON), 3, a
#define BRGH                             BANKMASK(TXSTA), 2, a
#define BRGH1                            BANKMASK(TXSTA), 2, a
#define C12IN0M                          BANKMASK(PORTA), 1, a
#define C12IN1M                          BANKMASK(PORTC), 1, a
#define C12IN2M                          BANKMASK(PORTC), 2, a
#define C12IN3M                          BANKMASK(PORTC), 3, a
#define C12INP                           BANKMASK(PORTC), 0, a
#define C12OUT                           BANKMASK(PORTC), 4, a
#define C1CH0                            BANKMASK(CM1CON0), 0, a
#define C1CH1                            BANKMASK(CM1CON0), 1, a
#define C1HYS                            BANKMASK(CM2CON1), 3, a
#define C1IE                             BANKMASK(PIE2), 6, a
#define C1IF                             BANKMASK(PIR2), 6, a
#define C1INP                            BANKMASK(PORTA), 0, a
#define C1IP                             BANKMASK(IPR2), 6, a
#define C1OE                             BANKMASK(CM1CON0), 5, a
#define C1ON                             BANKMASK(CM1CON0), 7, a
#define C1POL                            BANKMASK(CM1CON0), 4, a
#define C1R                              BANKMASK(CM1CON0), 2, a
#define C1RSEL                           BANKMASK(CM2CON1), 5, a
#define C1SP                             BANKMASK(CM1CON0), 3, a
#define C1SYNC                           BANKMASK(CM2CON1), 1, a
#define C2CH0                            BANKMASK(CM2CON0), 0, a
#define C2CH1                            BANKMASK(CM2CON0), 1, a
#define C2HYS                            BANKMASK(CM2CON1), 2, a
#define C2IE                             BANKMASK(PIE2), 5, a
#define C2IF                             BANKMASK(PIR2), 5, a
#define C2INP                            BANKMASK(PORTC), 0, a
#define C2IP                             BANKMASK(IPR2), 5, a
#define C2OE                             BANKMASK(CM2CON0), 5, a
#define C2ON                             BANKMASK(CM2CON0), 7, a
#define C2POL                            BANKMASK(CM2CON0), 4, a
#define C2R                              BANKMASK(CM2CON0), 2, a
#define C2RSEL                           BANKMASK(CM2CON1), 4, a
#define C2SP                             BANKMASK(CM2CON0), 3, a
#define C2SYNC                           BANKMASK(CM2CON1), 0, a
#define CARRY                            BANKMASK(STATUS), 0, a
#define CCP1                             BANKMASK(PORTC), 5, a
#define CCP1IE                           BANKMASK(PIE1), 2, a
#define CCP1IF                           BANKMASK(PIR1), 2, a
#define CCP1IP                           BANKMASK(IPR1), 2, a
#define CCP1M0                           BANKMASK(CCP1CON), 0, a
#define CCP1M1                           BANKMASK(CCP1CON), 1, a
#define CCP1M2                           BANKMASK(CCP1CON), 2, a
#define CCP1M3                           BANKMASK(CCP1CON), 3, a
#define CCP2                             BANKMASK(PORTC), 1, a
#define CFGS                             BANKMASK(EECON1), 6, a
#define CHS0                             BANKMASK(ADCON0), 2, a
#define CHS1                             BANKMASK(ADCON0), 3, a
#define CHS2                             BANKMASK(ADCON0), 4, a
#define CHS3                             BANKMASK(ADCON0), 5, a
#define CHSN3                            BANKMASK(ADCON1), 3, a
#define CK                               BANKMASK(PORTB), 7, a
#define CKE                              BANKMASK(SSPSTAT), 6, a
#define CKP                              BANKMASK(SSPCON1), 4, a
#define CKTXP                            BANKMASK(BAUDCON), 4, a
#define CLKIN                            BANKMASK(PORTA), 5, a
#define CLKOUT                           BANKMASK(PORTA), 4, a
#define CMIE                             BANKMASK(PIE2), 6, a
#define CMIF                             BANKMASK(PIR2), 6, a
#define CMIP                             BANKMASK(IPR2), 6, a
#define CREN                             BANKMASK(RCSTA), 4, a
#define CSRC                             BANKMASK(TXSTA), 7, a
#define CSRC1                            BANKMASK(TXSTA), 7, a
#define CVREF                            BANKMASK(PORTA), 0, a
#define D1EN                             BANKMASK(VREFCON1), 7, a
#define D1LPS                            BANKMASK(VREFCON1), 6, a
#define D1NSS                            BANKMASK(VREFCON1), 0, a
#define D1NSS0                           BANKMASK(VREFCON1), 0, a
#define D1PSS0                           BANKMASK(VREFCON1), 2, a
#define D1PSS1                           BANKMASK(VREFCON1), 3, a
#define DA                               BANKMASK(SSPSTAT), 5, a
#define DAC1OE                           BANKMASK(VREFCON1), 5, a
#define DAC1R0                           BANKMASK(VREFCON2), 0, a
#define DAC1R1                           BANKMASK(VREFCON2), 1, a
#define DAC1R2                           BANKMASK(VREFCON2), 2, a
#define DAC1R3                           BANKMASK(VREFCON2), 3, a
#define DAC1R4                           BANKMASK(VREFCON2), 4, a
#define DC                               BANKMASK(STATUS), 1, a
#define DC1B0                            BANKMASK(CCP1CON), 4, a
#define DC1B1                            BANKMASK(CCP1CON), 5, a
#define DONE                             BANKMASK(ADCON0), 1, a
#define DT                               BANKMASK(PORTB), 5, a
#define DTRXP                            BANKMASK(BAUDCON), 5, a
#define D_A                              BANKMASK(SSPSTAT), 5, a
#define D_NOT_A                          BANKMASK(SSPSTAT), 5, a
#define D_nA                             BANKMASK(SSPSTAT), 5, a
#define EBDIS                            BANKMASK(PR2), 7, a
#define ECCPAS0                          BANKMASK(ECCP1AS), 4, a
#define ECCPAS1                          BANKMASK(ECCP1AS), 5, a
#define ECCPAS2                          BANKMASK(ECCP1AS), 6, a
#define ECCPASE                          BANKMASK(ECCP1AS), 7, a
#define EEADR0                           BANKMASK(EEADR), 0, a
#define EEADR1                           BANKMASK(EEADR), 1, a
#define EEADR2                           BANKMASK(EEADR), 2, a
#define EEADR3                           BANKMASK(EEADR), 3, a
#define EEADR4                           BANKMASK(EEADR), 4, a
#define EEADR5                           BANKMASK(EEADR), 5, a
#define EEADR6                           BANKMASK(EEADR), 6, a
#define EEADR7                           BANKMASK(EEADR), 7, a
#define EEFS                             BANKMASK(EECON1), 6, a
#define EEIE                             BANKMASK(PIE2), 4, a
#define EEIF                             BANKMASK(PIR2), 4, a
#define EEIP                             BANKMASK(IPR2), 4, a
#define EEPGD                            BANKMASK(EECON1), 7, a
#define FERR                             BANKMASK(RCSTA), 2, a
#define FLTS                             BANKMASK(OSCCON), 2, a
#define FREE                             BANKMASK(EECON1), 4, a
#define FVR1EN                           BANKMASK(VREFCON0), 7, a
#define FVR1S0                           BANKMASK(VREFCON0), 4, a
#define FVR1S1                           BANKMASK(VREFCON0), 5, a
#define FVR1ST                           BANKMASK(VREFCON0), 6, a
#define GCEN                             BANKMASK(SSPCON2), 7, a
#define GIE                              BANKMASK(INTCON), 7, a
#define GIEH                             BANKMASK(INTCON), 7, a
#define GIEL                             BANKMASK(INTCON), 6, a
#define GIE_GIEH                         BANKMASK(INTCON), 7, a
#define GO                               BANKMASK(ADCON0), 1, a
#define GODONE                           BANKMASK(ADCON0), 1, a
#define GO_DONE                          BANKMASK(ADCON0), 1, a
#define GO_NOT_DONE                      BANKMASK(ADCON0), 1, a
#define GO_nDONE                         BANKMASK(ADCON0), 1, a
#define HFIOFL                           BANKMASK(OSCCON2), 1, a
#define HFIOFS                           BANKMASK(OSCCON), 2, a
#define IDLEN                            BANKMASK(OSCCON), 7, a
#define INT0                             BANKMASK(PORTA), 0, a
#define INT0E                            BANKMASK(INTCON), 4, a
#define INT0F                            BANKMASK(INTCON), 1, a
#define INT0IE                           BANKMASK(INTCON), 4, a
#define INT0IF                           BANKMASK(INTCON), 1, a
#define INT1                             BANKMASK(PORTA), 1, a
#define INT1E                            BANKMASK(INTCON3), 3, a
#define INT1F                            BANKMASK(INTCON3), 0, a
#define INT1IE                           BANKMASK(INTCON3), 3, a
#define INT1IF                           BANKMASK(INTCON3), 0, a
#define INT1IP                           BANKMASK(INTCON3), 6, a
#define INT1P                            BANKMASK(INTCON3), 6, a
#define INT2                             BANKMASK(PORTA), 2, a
#define INT2E                            BANKMASK(INTCON3), 4, a
#define INT2F                            BANKMASK(INTCON3), 1, a
#define INT2IE                           BANKMASK(INTCON3), 4, a
#define INT2IF                           BANKMASK(INTCON3), 1, a
#define INT2IP                           BANKMASK(INTCON3), 7, a
#define INT2P                            BANKMASK(INTCON3), 7, a
#define INTEDG0                          BANKMASK(INTCON2), 6, a
#define INTEDG1                          BANKMASK(INTCON2), 5, a
#define INTEDG2                          BANKMASK(INTCON2), 4, a
#define INTSRC                           BANKMASK(OSCTUNE), 7, a
#define IOCA0                            BANKMASK(IOCA), 0, a
#define IOCA1                            BANKMASK(IOCA), 1, a
#define IOCA2                            BANKMASK(IOCA), 2, a
#define IOCA3                            BANKMASK(IOCA), 3, a
#define IOCA4                            BANKMASK(IOCA), 4, a
#define IOCA5                            BANKMASK(IOCA), 5, a
#define IOCB4                            BANKMASK(IOCB), 4, a
#define IOCB5                            BANKMASK(IOCB), 5, a
#define IOCB6                            BANKMASK(IOCB), 6, a
#define IOCB7                            BANKMASK(IOCB), 7, a
#define IPEN                             BANKMASK(RCON), 7, a
#define IRCF0                            BANKMASK(OSCCON), 4, a
#define IRCF1                            BANKMASK(OSCCON), 5, a
#define IRCF2                            BANKMASK(OSCCON), 6, a
#define LA0                              BANKMASK(LATA), 0, a
#define LA1                              BANKMASK(LATA), 1, a
#define LA2                              BANKMASK(LATA), 2, a
#define LA4                              BANKMASK(LATA), 4, a
#define LA5                              BANKMASK(LATA), 5, a
#define LATA0                            BANKMASK(LATA), 0, a
#define LATA1                            BANKMASK(LATA), 1, a
#define LATA2                            BANKMASK(LATA), 2, a
#define LATA4                            BANKMASK(LATA), 4, a
#define LATA5                            BANKMASK(LATA), 5, a
#define LATB4                            BANKMASK(LATB), 4, a
#define LATB5                            BANKMASK(LATB), 5, a
#define LATB6                            BANKMASK(LATB), 6, a
#define LATB7                            BANKMASK(LATB), 7, a
#define LATC0                            BANKMASK(LATC), 0, a
#define LATC1                            BANKMASK(LATC), 1, a
#define LATC2                            BANKMASK(LATC), 2, a
#define LATC3                            BANKMASK(LATC), 3, a
#define LATC4                            BANKMASK(LATC), 4, a
#define LATC5                            BANKMASK(LATC), 5, a
#define LATC6                            BANKMASK(LATC), 6, a
#define LATC7                            BANKMASK(LATC), 7, a
#define LB4                              BANKMASK(LATB), 4, a
#define LB5                              BANKMASK(LATB), 5, a
#define LB6                              BANKMASK(LATB), 6, a
#define LB7                              BANKMASK(LATB), 7, a
#define LC0                              BANKMASK(LATC), 0, a
#define LC1                              BANKMASK(LATC), 1, a
#define LC2                              BANKMASK(LATC), 2, a
#define LC3                              BANKMASK(LATC), 3, a
#define LC4                              BANKMASK(LATC), 4, a
#define LC5                              BANKMASK(LATC), 5, a
#define LC6                              BANKMASK(LATC), 6, a
#define LC7                              BANKMASK(LATC), 7, a
#define LFIOFS                           BANKMASK(OSCCON2), 0, a
#define LINCS                            BANKMASK(PORTB), 6, a
#define LINRESET                         BANKMASK(PORTC), 7, a
#define LINRX                            BANKMASK(PORTB), 5, a
#define LINTX                            BANKMASK(PORTB), 7, a
#define LVDIN                            BANKMASK(PORTA), 5, a
#define MC1OUT                           BANKMASK(CM2CON1), 7, a
#define MC2OUT                           BANKMASK(CM2CON1), 6, a
#define MCLR                             BANKMASK(PORTA), 3, a
#define MSK0                             BANKMASK(SSPMSK), 0, a
#define MSK1                             BANKMASK(SSPMSK), 1, a
#define MSK2                             BANKMASK(SSPMSK), 2, a
#define MSK3                             BANKMASK(SSPMSK), 3, a
#define MSK4                             BANKMASK(SSPMSK), 4, a
#define MSK5                             BANKMASK(SSPMSK), 5, a
#define MSK6                             BANKMASK(SSPMSK), 6, a
#define MSK7                             BANKMASK(SSPMSK), 7, a
#define NEGATIVE                         BANKMASK(STATUS), 4, a
#define NOT_A                            BANKMASK(SSPSTAT), 5, a
#define NOT_ADDRESS                      BANKMASK(SSPSTAT), 5, a
#define NOT_BOR                          BANKMASK(RCON), 0, a
#define NOT_DONE                         BANKMASK(ADCON0), 1, a
#define NOT_LINRESET                     BANKMASK(PORTC), 7, a
#define NOT_MCLR                         BANKMASK(PORTA), 3, a
#define NOT_PD                           BANKMASK(RCON), 2, a
#define NOT_POR                          BANKMASK(RCON), 1, a
#define NOT_RABPU                        BANKMASK(INTCON2), 7, a
#define NOT_RBPU                         BANKMASK(INTCON2), 7, a
#define NOT_RI                           BANKMASK(RCON), 4, a
#define NOT_T1SYNC                       BANKMASK(T1CON), 2, a
#define NOT_T3SYNC                       BANKMASK(T3CON), 2, a
#define NOT_TO                           BANKMASK(RCON), 3, a
#define NOT_W                            BANKMASK(SSPSTAT), 2, a
#define NOT_WRITE                        BANKMASK(SSPSTAT), 2, a
#define NVCFG0                           BANKMASK(ADCON1), 0, a
#define NVCFG1                           BANKMASK(ADCON1), 1, a
#define OERR                             BANKMASK(RCSTA), 1, a
#define OSC1                             BANKMASK(PORTA), 5, a
#define OSC2                             BANKMASK(PORTA), 4, a
#define OSCFIE                           BANKMASK(PIE2), 7, a
#define OSCFIF                           BANKMASK(PIR2), 7, a
#define OSCFIP                           BANKMASK(IPR2), 7, a
#define OSTS                             BANKMASK(OSCCON), 3, a
#define OV                               BANKMASK(STATUS), 3, a
#define OVERFLOW                         BANKMASK(STATUS), 3, a
#define P1A                              BANKMASK(PORTC), 5, a
#define P1B                              BANKMASK(PORTC), 4, a
#define P1C                              BANKMASK(PORTC), 3, a
#define P1D                              BANKMASK(PORTC), 2, a
#define P1M0                             BANKMASK(CCP1CON), 6, a
#define P1M1                             BANKMASK(CCP1CON), 7, a
#define PA1                              BANKMASK(PORTC), 2, a
#define PA2                              BANKMASK(PORTC), 1, a
#define PD                               BANKMASK(RCON), 2, a
#define PDC0                             BANKMASK(PWM1CON), 0, a
#define PDC1                             BANKMASK(PWM1CON), 1, a
#define PDC2                             BANKMASK(PWM1CON), 2, a
#define PDC3                             BANKMASK(PWM1CON), 3, a
#define PDC4                             BANKMASK(PWM1CON), 4, a
#define PDC5                             BANKMASK(PWM1CON), 5, a
#define PDC6                             BANKMASK(PWM1CON), 6, a
#define PEIE                             BANKMASK(INTCON), 6, a
#define PEIE_GIEL                        BANKMASK(INTCON), 6, a
#define PEN                              BANKMASK(SSPCON2), 2, a
#define PGC                              BANKMASK(PORTA), 1, a
#define PGD                              BANKMASK(PORTA), 0, a
#define PGM                              BANKMASK(PORTC), 3, a
#define PIE                              BANKMASK(INTCON), 6, a
#define PLLEN                            BANKMASK(OSCTUNE), 6, a
#define POR                              BANKMASK(RCON), 1, a
#define PRI_SD                           BANKMASK(OSCCON2), 2, a
#define PRSEN                            BANKMASK(PWM1CON), 7, a
#define PSA                              BANKMASK(T0CON), 3, a
#define PSSAC0                           BANKMASK(ECCP1AS), 2, a
#define PSSAC1                           BANKMASK(ECCP1AS), 3, a
#define PSSBD0                           BANKMASK(ECCP1AS), 0, a
#define PSSBD1                           BANKMASK(ECCP1AS), 1, a
#define PVCFG0                           BANKMASK(ADCON1), 2, a
#define PVCFG1                           BANKMASK(ADCON1), 3, a
#define PWRGD                            BANKMASK(LATC), 7, a
#define RA3                              BANKMASK(PORTA), 3, a
#define RABIE                            BANKMASK(INTCON), 3, a
#define RABIF                            BANKMASK(INTCON), 0, a
#define RABIP                            BANKMASK(INTCON2), 0, a
#define RABPU                            BANKMASK(INTCON2), 7, a
#define RBIE                             BANKMASK(INTCON), 3, a
#define RBIF                             BANKMASK(INTCON), 0, a
#define RBIP                             BANKMASK(INTCON2), 0, a
#define RC1IE                            BANKMASK(PIE1), 5, a
#define RC1IF                            BANKMASK(PIR1), 5, a
#define RC1IP                            BANKMASK(IPR1), 5, a
#define RC8_9                            BANKMASK(RCSTA), 6, a
#define RC9                              BANKMASK(RCSTA), 6, a
#define RCD8                             BANKMASK(RCSTA), 0, a
#define RCEN                             BANKMASK(SSPCON2), 3, a
#define RCIDL                            BANKMASK(BAUDCON), 6, a
#define RCIE                             BANKMASK(PIE1), 5, a
#define RCIF                             BANKMASK(PIR1), 5, a
#define RCIP                             BANKMASK(IPR1), 5, a
#define RD                               BANKMASK(EECON1), 0, a
#define RD163                            BANKMASK(T3CON), 7, a
#define RI                               BANKMASK(RCON), 4, a
#define RSEN                             BANKMASK(SSPCON2), 1, a
#define RW                               BANKMASK(SSPSTAT), 2, a
#define RX9                              BANKMASK(RCSTA), 6, a
#define RX9D                             BANKMASK(RCSTA), 0, a
#define RXCKP                            BANKMASK(BAUDCON), 5, a
#define R_NOT_W                          BANKMASK(SSPSTAT), 2, a
#define R_W                              BANKMASK(SSPSTAT), 2, a
#define R_nW                             BANKMASK(SSPSTAT), 2, a
#define SBOREN                           BANKMASK(RCON), 6, a
#define SCK                              BANKMASK(PORTB), 6, a
#define SCKP                             BANKMASK(BAUDCON), 4, a
#define SCL                              BANKMASK(PORTB), 6, a
#define SCS0                             BANKMASK(OSCCON), 0, a
#define SCS1                             BANKMASK(OSCCON), 1, a
#define SDA                              BANKMASK(PORTB), 4, a
#define SDI                              BANKMASK(PORTB), 4, a
#define SEN                              BANKMASK(SSPCON2), 0, a
#define SENDB                            BANKMASK(TXSTA), 3, a
#define SENDB1                           BANKMASK(TXSTA), 3, a
#define SLRA                             BANKMASK(SLRCON), 0, a
#define SLRB                             BANKMASK(SLRCON), 1, a
#define SLRC                             BANKMASK(SLRCON), 2, a
#define SMP                              BANKMASK(SSPSTAT), 7, a
#define SOSCEN                           BANKMASK(T1CON), 3, a
#define SOSCEN3                          BANKMASK(T3CON), 3, a
#define SP0                              BANKMASK(STKPTR), 0, a
#define SP1                              BANKMASK(STKPTR), 1, a
#define SP2                              BANKMASK(STKPTR), 2, a
#define SP3                              BANKMASK(STKPTR), 3, a
#define SP4                              BANKMASK(STKPTR), 4, a
#define SPEN                             BANKMASK(RCSTA), 7, a
#define SRCLK0                           BANKMASK(SRCON0), 4, a
#define SRCLK1                           BANKMASK(SRCON0), 5, a
#define SRCLK2                           BANKMASK(SRCON0), 6, a
#define SREN                             BANKMASK(RCSTA), 5, a
#define SRENA                            BANKMASK(RCSTA), 5, a
#define SRLEN                            BANKMASK(SRCON0), 7, a
#define SRNQEN                           BANKMASK(SRCON0), 2, a
#define SRPR                             BANKMASK(SRCON0), 0, a
#define SRPS                             BANKMASK(SRCON0), 1, a
#define SRQ                              BANKMASK(PORTA), 2, a
#define SRQEN                            BANKMASK(SRCON0), 3, a
#define SRRC1E                           BANKMASK(SRCON1), 0, a
#define SRRC2E                           BANKMASK(SRCON1), 1, a
#define SRRCKE                           BANKMASK(SRCON1), 2, a
#define SRRPE                            BANKMASK(SRCON1), 3, a
#define SRSC1E                           BANKMASK(SRCON1), 4, a
#define SRSC2E                           BANKMASK(SRCON1), 5, a
#define SRSCKE                           BANKMASK(SRCON1), 6, a
#define SRSPE                            BANKMASK(SRCON1), 7, a
#define SSPEN                            BANKMASK(SSPCON1), 5, a
#define SSPIE                            BANKMASK(PIE1), 3, a
#define SSPIF                            BANKMASK(PIR1), 3, a
#define SSPIP                            BANKMASK(IPR1), 3, a
#define SSPM0                            BANKMASK(SSPCON1), 0, a
#define SSPM1                            BANKMASK(SSPCON1), 1, a
#define SSPM2                            BANKMASK(SSPCON1), 2, a
#define SSPM3                            BANKMASK(SSPCON1), 3, a
#define SSPOV                            BANKMASK(SSPCON1), 6, a
#define START                            BANKMASK(SSPSTAT), 3, a
#define STKFUL                           BANKMASK(STKPTR), 7, a
#define STKOVF                           BANKMASK(STKPTR), 7, a
#define STKUNF                           BANKMASK(STKPTR), 6, a
#define STOP                             BANKMASK(SSPSTAT), 4, a
#define STRA                             BANKMASK(PSTRCON), 0, a
#define STRB                             BANKMASK(PSTRCON), 1, a
#define STRC                             BANKMASK(PSTRCON), 2, a
#define STRD                             BANKMASK(PSTRCON), 3, a
#define STRSYNC                          BANKMASK(PSTRCON), 4, a
#define SWDTE                            BANKMASK(WDTCON), 0, a
#define SWDTEN                           BANKMASK(WDTCON), 0, a
#define SYNC                             BANKMASK(TXSTA), 4, a
#define SYNC1                            BANKMASK(TXSTA), 4, a
#define T08BIT                           BANKMASK(T0CON), 6, a
#define T0CKI                            BANKMASK(PORTA), 2, a
#define T0CS                             BANKMASK(T0CON), 5, a
#define T0IE                             BANKMASK(INTCON), 5, a
#define T0IF                             BANKMASK(INTCON), 2, a
#define T0PS0                            BANKMASK(T0CON), 0, a
#define T0PS1                            BANKMASK(T0CON), 1, a
#define T0PS2                            BANKMASK(T0CON), 2, a
#define T0SE                             BANKMASK(T0CON), 4, a
#define T13CKI                           BANKMASK(PORTA), 5, a
#define T1CKPS0                          BANKMASK(T1CON), 4, a
#define T1CKPS1                          BANKMASK(T1CON), 5, a
#define T1OSCEN                          BANKMASK(T1CON), 3, a
#define T1RD16                           BANKMASK(T1CON), 7, a
#define T1RUN                            BANKMASK(T1CON), 6, a
#define T1SYNC                           BANKMASK(T1CON), 2, a
#define T2CKPS0                          BANKMASK(T2CON), 0, a
#define T2CKPS1                          BANKMASK(T2CON), 1, a
#define T2OUTPS0                         BANKMASK(T2CON), 3, a
#define T2OUTPS1                         BANKMASK(T2CON), 4, a
#define T2OUTPS2                         BANKMASK(T2CON), 5, a
#define T2OUTPS3                         BANKMASK(T2CON), 6, a
#define T3CCP1                           BANKMASK(T3CON), 3, a
#define T3CKPS0                          BANKMASK(T3CON), 4, a
#define T3CKPS1                          BANKMASK(T3CON), 5, a
#define T3RD16                           BANKMASK(T3CON), 7, a
#define T3SYNC                           BANKMASK(T3CON), 2, a
#define TMR0IE                           BANKMASK(INTCON), 5, a
#define TMR0IF                           BANKMASK(INTCON), 2, a
#define TMR0IP                           BANKMASK(INTCON2), 2, a
#define TMR0ON                           BANKMASK(T0CON), 7, a
#define TMR1CS                           BANKMASK(T1CON), 1, a
#define TMR1IE                           BANKMASK(PIE1), 0, a
#define TMR1IF                           BANKMASK(PIR1), 0, a
#define TMR1IP                           BANKMASK(IPR1), 0, a
#define TMR1ON                           BANKMASK(T1CON), 0, a
#define TMR2IE                           BANKMASK(PIE1), 1, a
#define TMR2IF                           BANKMASK(PIR1), 1, a
#define TMR2IP                           BANKMASK(IPR1), 1, a
#define TMR2ON                           BANKMASK(T2CON), 2, a
#define TMR3CS                           BANKMASK(T3CON), 1, a
#define TMR3IE                           BANKMASK(PIE2), 1, a
#define TMR3IF                           BANKMASK(PIR2), 1, a
#define TMR3IP                           BANKMASK(IPR2), 1, a
#define TMR3ON                           BANKMASK(T3CON), 0, a
#define TO                               BANKMASK(RCON), 3, a
#define TRISA0                           BANKMASK(TRISA), 0, a
#define TRISA1                           BANKMASK(TRISA), 1, a
#define TRISA2                           BANKMASK(TRISA), 2, a
#define TRISA4                           BANKMASK(TRISA), 4, a
#define TRISA5                           BANKMASK(TRISA), 5, a
#define TRISB4                           BANKMASK(TRISB), 4, a
#define TRISB5                           BANKMASK(TRISB), 5, a
#define TRISB6                           BANKMASK(TRISB), 6, a
#define TRISB7                           BANKMASK(TRISB), 7, a
#define TRISC0                           BANKMASK(TRISC), 0, a
#define TRISC1                           BANKMASK(TRISC), 1, a
#define TRISC2                           BANKMASK(TRISC), 2, a
#define TRISC3                           BANKMASK(TRISC), 3, a
#define TRISC4                           BANKMASK(TRISC), 4, a
#define TRISC5                           BANKMASK(TRISC), 5, a
#define TRISC6                           BANKMASK(TRISC), 6, a
#define TRISC7                           BANKMASK(TRISC), 7, a
#define TRMT                             BANKMASK(TXSTA), 1, a
#define TRMT1                            BANKMASK(TXSTA), 1, a
#define TUN0                             BANKMASK(OSCTUNE), 0, a
#define TUN1                             BANKMASK(OSCTUNE), 1, a
#define TUN2                             BANKMASK(OSCTUNE), 2, a
#define TUN3                             BANKMASK(OSCTUNE), 3, a
#define TUN4                             BANKMASK(OSCTUNE), 4, a
#define TUN5                             BANKMASK(OSCTUNE), 5, a
#define TX1IE                            BANKMASK(PIE1), 4, a
#define TX1IF                            BANKMASK(PIR1), 4, a
#define TX1IP                            BANKMASK(IPR1), 4, a
#define TX8_9                            BANKMASK(TXSTA), 6, a
#define TX9                              BANKMASK(TXSTA), 6, a
#define TX91                             BANKMASK(TXSTA), 6, a
#define TX9D                             BANKMASK(TXSTA), 0, a
#define TX9D1                            BANKMASK(TXSTA), 0, a
#define TXD8                             BANKMASK(TXSTA), 0, a
#define TXEN                             BANKMASK(TXSTA), 5, a
#define TXEN1                            BANKMASK(TXSTA), 5, a
#define TXIE                             BANKMASK(PIE1), 4, a
#define TXIF                             BANKMASK(PIR1), 4, a
#define TXIP                             BANKMASK(IPR1), 4, a
#define UA                               BANKMASK(SSPSTAT), 1, a
#define ULPWUIN                          BANKMASK(PORTA), 0, a
#define VPP                              BANKMASK(PORTA), 3, a
#define VREFM                            BANKMASK(PORTA), 0, a
#define VREFP                            BANKMASK(PORTA), 1, a
#define W4E                              BANKMASK(BAUDCON), 1, a
#define WAIT0                            BANKMASK(PR2), 4, a
#define WAIT1                            BANKMASK(PR2), 5, a
#define WCOL                             BANKMASK(SSPCON1), 7, a
#define WM0                              BANKMASK(PR2), 0, a
#define WM1                              BANKMASK(PR2), 1, a
#define WPUA0                            BANKMASK(WPUA), 0, a
#define WPUA1                            BANKMASK(WPUA), 1, a
#define WPUA2                            BANKMASK(WPUA), 2, a
#define WPUA3                            BANKMASK(WPUA), 3, a
#define WPUA4                            BANKMASK(WPUA), 4, a
#define WPUA5                            BANKMASK(WPUA), 5, a
#define WPUB4                            BANKMASK(WPUB), 4, a
#define WPUB5                            BANKMASK(WPUB), 5, a
#define WPUB6                            BANKMASK(WPUB), 6, a
#define WPUB7                            BANKMASK(WPUB), 7, a
#define WR                               BANKMASK(EECON1), 1, a
#define WREN                             BANKMASK(EECON1), 2, a
#define WRERR                            BANKMASK(EECON1), 3, a
#define WUE                              BANKMASK(BAUDCON), 1, a
#define ZERO                             BANKMASK(STATUS), 2, a
#define nA                               BANKMASK(SSPSTAT), 5, a
#define nADDRESS                         BANKMASK(SSPSTAT), 5, a
#define nBOR                             BANKMASK(RCON), 0, a
#define nDONE                            BANKMASK(ADCON0), 1, a
#define nLINRESET                        BANKMASK(PORTC), 7, a
#define nMCLR                            BANKMASK(PORTA), 3, a
#define nPD                              BANKMASK(RCON), 2, a
#define nPOR                             BANKMASK(RCON), 1, a
#define nRABPU                           BANKMASK(INTCON2), 7, a
#define nRBPU                            BANKMASK(INTCON2), 7, a
#define nRI                              BANKMASK(RCON), 4, a
#define nT1SYNC                          BANKMASK(T1CON), 2, a
#define nT3SYNC                          BANKMASK(T3CON), 2, a
#define nTO                              BANKMASK(RCON), 3, a
#define nW                               BANKMASK(SSPSTAT), 2, a
#define nWRITE                           BANKMASK(SSPSTAT), 2, a

/*
 * Device Psects
 */

#ifdef _XC_INC_

// Memory Spaces
#define SPACE_CODE   0
#define SPACE_DATA   1
#define SPACE_EEPROM 3

#if _COMMON_SIZE_
psect udata_acs,class=COMRAM,space=SPACE_DATA,noexec,lowdata
#endif
psect udata_bank0,class=BANK0,space=SPACE_DATA,noexec,lowdata
psect udata_bank1,class=BANK1,space=SPACE_DATA,noexec,lowdata
psect udata,class=RAM,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,reloc=2
psect data,class=CONST,space=SPACE_CODE,reloc=2,noexec
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=1,noexec

#endif // _XC_INC_

#endif // _PIC18F14K22LIN_INC_
