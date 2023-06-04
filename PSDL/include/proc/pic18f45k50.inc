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

#ifndef _PIC18F45K50_INC_
#define _PIC18F45K50_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F45K50
 */

/*
 * Device Registers
 */

// Register: SRCON1
#define SRCON1 SRCON1
SRCON1                                   equ 0F57h
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

// Register: SRCON0
#define SRCON0 SRCON0
SRCON0                                   equ 0F58h
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

// Register: CCPTMRS
#define CCPTMRS CCPTMRS
CCPTMRS                                  equ 0F59h
// bitfield definitions
CCPTMRS_C1TSEL_POSN                      equ 0000h
CCPTMRS_C1TSEL_POSITION                  equ 0000h
CCPTMRS_C1TSEL_SIZE                      equ 0001h
CCPTMRS_C1TSEL_LENGTH                    equ 0001h
CCPTMRS_C1TSEL_MASK                      equ 0001h
CCPTMRS_C2TSEL_POSN                      equ 0003h
CCPTMRS_C2TSEL_POSITION                  equ 0003h
CCPTMRS_C2TSEL_SIZE                      equ 0001h
CCPTMRS_C2TSEL_LENGTH                    equ 0001h
CCPTMRS_C2TSEL_MASK                      equ 0008h

// Register: VREGCON
#define VREGCON VREGCON
VREGCON                                  equ 0F5Ah
// bitfield definitions
VREGCON_VREGPM_POSN                      equ 0000h
VREGCON_VREGPM_POSITION                  equ 0000h
VREGCON_VREGPM_SIZE                      equ 0002h
VREGCON_VREGPM_LENGTH                    equ 0002h
VREGCON_VREGPM_MASK                      equ 0003h

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 0F5Bh
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
ANSELA_ANSA5_POSN                        equ 0005h
ANSELA_ANSA5_POSITION                    equ 0005h
ANSELA_ANSA5_SIZE                        equ 0001h
ANSELA_ANSA5_LENGTH                      equ 0001h
ANSELA_ANSA5_MASK                        equ 0020h

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 0F5Ch
// bitfield definitions
ANSELB_ANSB0_POSN                        equ 0000h
ANSELB_ANSB0_POSITION                    equ 0000h
ANSELB_ANSB0_SIZE                        equ 0001h
ANSELB_ANSB0_LENGTH                      equ 0001h
ANSELB_ANSB0_MASK                        equ 0001h
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
ANSELB_ANSB3_POSN                        equ 0003h
ANSELB_ANSB3_POSITION                    equ 0003h
ANSELB_ANSB3_SIZE                        equ 0001h
ANSELB_ANSB3_LENGTH                      equ 0001h
ANSELB_ANSB3_MASK                        equ 0008h
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

// Register: ANSELC
#define ANSELC ANSELC
ANSELC                                   equ 0F5Dh
// bitfield definitions
ANSELC_ANSC2_POSN                        equ 0002h
ANSELC_ANSC2_POSITION                    equ 0002h
ANSELC_ANSC2_SIZE                        equ 0001h
ANSELC_ANSC2_LENGTH                      equ 0001h
ANSELC_ANSC2_MASK                        equ 0004h
ANSELC_ANSC6_POSN                        equ 0006h
ANSELC_ANSC6_POSITION                    equ 0006h
ANSELC_ANSC6_SIZE                        equ 0001h
ANSELC_ANSC6_LENGTH                      equ 0001h
ANSELC_ANSC6_MASK                        equ 0040h
ANSELC_ANSC7_POSN                        equ 0007h
ANSELC_ANSC7_POSITION                    equ 0007h
ANSELC_ANSC7_SIZE                        equ 0001h
ANSELC_ANSC7_LENGTH                      equ 0001h
ANSELC_ANSC7_MASK                        equ 0080h

// Register: ANSELD
#define ANSELD ANSELD
ANSELD                                   equ 0F5Eh
// bitfield definitions
ANSELD_ANSD0_POSN                        equ 0000h
ANSELD_ANSD0_POSITION                    equ 0000h
ANSELD_ANSD0_SIZE                        equ 0001h
ANSELD_ANSD0_LENGTH                      equ 0001h
ANSELD_ANSD0_MASK                        equ 0001h
ANSELD_ANSD1_POSN                        equ 0001h
ANSELD_ANSD1_POSITION                    equ 0001h
ANSELD_ANSD1_SIZE                        equ 0001h
ANSELD_ANSD1_LENGTH                      equ 0001h
ANSELD_ANSD1_MASK                        equ 0002h
ANSELD_ANSD2_POSN                        equ 0002h
ANSELD_ANSD2_POSITION                    equ 0002h
ANSELD_ANSD2_SIZE                        equ 0001h
ANSELD_ANSD2_LENGTH                      equ 0001h
ANSELD_ANSD2_MASK                        equ 0004h
ANSELD_ANSD3_POSN                        equ 0003h
ANSELD_ANSD3_POSITION                    equ 0003h
ANSELD_ANSD3_SIZE                        equ 0001h
ANSELD_ANSD3_LENGTH                      equ 0001h
ANSELD_ANSD3_MASK                        equ 0008h
ANSELD_ANSD4_POSN                        equ 0004h
ANSELD_ANSD4_POSITION                    equ 0004h
ANSELD_ANSD4_SIZE                        equ 0001h
ANSELD_ANSD4_LENGTH                      equ 0001h
ANSELD_ANSD4_MASK                        equ 0010h
ANSELD_ANSD5_POSN                        equ 0005h
ANSELD_ANSD5_POSITION                    equ 0005h
ANSELD_ANSD5_SIZE                        equ 0001h
ANSELD_ANSD5_LENGTH                      equ 0001h
ANSELD_ANSD5_MASK                        equ 0020h
ANSELD_ANSD6_POSN                        equ 0006h
ANSELD_ANSD6_POSITION                    equ 0006h
ANSELD_ANSD6_SIZE                        equ 0001h
ANSELD_ANSD6_LENGTH                      equ 0001h
ANSELD_ANSD6_MASK                        equ 0040h
ANSELD_ANSD7_POSN                        equ 0007h
ANSELD_ANSD7_POSITION                    equ 0007h
ANSELD_ANSD7_SIZE                        equ 0001h
ANSELD_ANSD7_LENGTH                      equ 0001h
ANSELD_ANSD7_MASK                        equ 0080h

// Register: ANSELE
#define ANSELE ANSELE
ANSELE                                   equ 0F5Fh
// bitfield definitions
ANSELE_ANSE0_POSN                        equ 0000h
ANSELE_ANSE0_POSITION                    equ 0000h
ANSELE_ANSE0_SIZE                        equ 0001h
ANSELE_ANSE0_LENGTH                      equ 0001h
ANSELE_ANSE0_MASK                        equ 0001h
ANSELE_ANSE1_POSN                        equ 0001h
ANSELE_ANSE1_POSITION                    equ 0001h
ANSELE_ANSE1_SIZE                        equ 0001h
ANSELE_ANSE1_LENGTH                      equ 0001h
ANSELE_ANSE1_MASK                        equ 0002h
ANSELE_ANSE2_POSN                        equ 0002h
ANSELE_ANSE2_POSITION                    equ 0002h
ANSELE_ANSE2_SIZE                        equ 0001h
ANSELE_ANSE2_LENGTH                      equ 0001h
ANSELE_ANSE2_MASK                        equ 0004h

// Register: UCON
#define UCON UCON
UCON                                     equ 0F60h
// bitfield definitions
UCON_SUSPND_POSN                         equ 0001h
UCON_SUSPND_POSITION                     equ 0001h
UCON_SUSPND_SIZE                         equ 0001h
UCON_SUSPND_LENGTH                       equ 0001h
UCON_SUSPND_MASK                         equ 0002h
UCON_RESUME_POSN                         equ 0002h
UCON_RESUME_POSITION                     equ 0002h
UCON_RESUME_SIZE                         equ 0001h
UCON_RESUME_LENGTH                       equ 0001h
UCON_RESUME_MASK                         equ 0004h
UCON_USBEN_POSN                          equ 0003h
UCON_USBEN_POSITION                      equ 0003h
UCON_USBEN_SIZE                          equ 0001h
UCON_USBEN_LENGTH                        equ 0001h
UCON_USBEN_MASK                          equ 0008h
UCON_PKTDIS_POSN                         equ 0004h
UCON_PKTDIS_POSITION                     equ 0004h
UCON_PKTDIS_SIZE                         equ 0001h
UCON_PKTDIS_LENGTH                       equ 0001h
UCON_PKTDIS_MASK                         equ 0010h
UCON_SE0_POSN                            equ 0005h
UCON_SE0_POSITION                        equ 0005h
UCON_SE0_SIZE                            equ 0001h
UCON_SE0_LENGTH                          equ 0001h
UCON_SE0_MASK                            equ 0020h
UCON_PPBRST_POSN                         equ 0006h
UCON_PPBRST_POSITION                     equ 0006h
UCON_PPBRST_SIZE                         equ 0001h
UCON_PPBRST_LENGTH                       equ 0001h
UCON_PPBRST_MASK                         equ 0040h

// Register: USTAT
#define USTAT USTAT
USTAT                                    equ 0F61h
// bitfield definitions
USTAT_PPBI_POSN                          equ 0001h
USTAT_PPBI_POSITION                      equ 0001h
USTAT_PPBI_SIZE                          equ 0001h
USTAT_PPBI_LENGTH                        equ 0001h
USTAT_PPBI_MASK                          equ 0002h
USTAT_DIR_POSN                           equ 0002h
USTAT_DIR_POSITION                       equ 0002h
USTAT_DIR_SIZE                           equ 0001h
USTAT_DIR_LENGTH                         equ 0001h
USTAT_DIR_MASK                           equ 0004h
USTAT_ENDP_POSN                          equ 0003h
USTAT_ENDP_POSITION                      equ 0003h
USTAT_ENDP_SIZE                          equ 0004h
USTAT_ENDP_LENGTH                        equ 0004h
USTAT_ENDP_MASK                          equ 0078h
USTAT_ENDP0_POSN                         equ 0003h
USTAT_ENDP0_POSITION                     equ 0003h
USTAT_ENDP0_SIZE                         equ 0001h
USTAT_ENDP0_LENGTH                       equ 0001h
USTAT_ENDP0_MASK                         equ 0008h
USTAT_ENDP1_POSN                         equ 0004h
USTAT_ENDP1_POSITION                     equ 0004h
USTAT_ENDP1_SIZE                         equ 0001h
USTAT_ENDP1_LENGTH                       equ 0001h
USTAT_ENDP1_MASK                         equ 0010h
USTAT_ENDP2_POSN                         equ 0005h
USTAT_ENDP2_POSITION                     equ 0005h
USTAT_ENDP2_SIZE                         equ 0001h
USTAT_ENDP2_LENGTH                       equ 0001h
USTAT_ENDP2_MASK                         equ 0020h
USTAT_ENDP3_POSN                         equ 0006h
USTAT_ENDP3_POSITION                     equ 0006h
USTAT_ENDP3_SIZE                         equ 0001h
USTAT_ENDP3_LENGTH                       equ 0001h
USTAT_ENDP3_MASK                         equ 0040h

// Register: UCFG
#define UCFG UCFG
UCFG                                     equ 0F62h
// bitfield definitions
UCFG_PPB_POSN                            equ 0000h
UCFG_PPB_POSITION                        equ 0000h
UCFG_PPB_SIZE                            equ 0002h
UCFG_PPB_LENGTH                          equ 0002h
UCFG_PPB_MASK                            equ 0003h
UCFG_FSEN_POSN                           equ 0002h
UCFG_FSEN_POSITION                       equ 0002h
UCFG_FSEN_SIZE                           equ 0001h
UCFG_FSEN_LENGTH                         equ 0001h
UCFG_FSEN_MASK                           equ 0004h
UCFG_UTRDIS_POSN                         equ 0003h
UCFG_UTRDIS_POSITION                     equ 0003h
UCFG_UTRDIS_SIZE                         equ 0001h
UCFG_UTRDIS_LENGTH                       equ 0001h
UCFG_UTRDIS_MASK                         equ 0008h
UCFG_UPUEN_POSN                          equ 0004h
UCFG_UPUEN_POSITION                      equ 0004h
UCFG_UPUEN_SIZE                          equ 0001h
UCFG_UPUEN_LENGTH                        equ 0001h
UCFG_UPUEN_MASK                          equ 0010h
UCFG_UOEMON_POSN                         equ 0006h
UCFG_UOEMON_POSITION                     equ 0006h
UCFG_UOEMON_SIZE                         equ 0001h
UCFG_UOEMON_LENGTH                       equ 0001h
UCFG_UOEMON_MASK                         equ 0040h
UCFG_UTEYE_POSN                          equ 0007h
UCFG_UTEYE_POSITION                      equ 0007h
UCFG_UTEYE_SIZE                          equ 0001h
UCFG_UTEYE_LENGTH                        equ 0001h
UCFG_UTEYE_MASK                          equ 0080h
UCFG_PPB0_POSN                           equ 0000h
UCFG_PPB0_POSITION                       equ 0000h
UCFG_PPB0_SIZE                           equ 0001h
UCFG_PPB0_LENGTH                         equ 0001h
UCFG_PPB0_MASK                           equ 0001h
UCFG_PPB1_POSN                           equ 0001h
UCFG_PPB1_POSITION                       equ 0001h
UCFG_PPB1_SIZE                           equ 0001h
UCFG_PPB1_LENGTH                         equ 0001h
UCFG_PPB1_MASK                           equ 0002h
UCFG_UPP0_POSN                           equ 0000h
UCFG_UPP0_POSITION                       equ 0000h
UCFG_UPP0_SIZE                           equ 0001h
UCFG_UPP0_LENGTH                         equ 0001h
UCFG_UPP0_MASK                           equ 0001h
UCFG_UPP1_POSN                           equ 0001h
UCFG_UPP1_POSITION                       equ 0001h
UCFG_UPP1_SIZE                           equ 0001h
UCFG_UPP1_LENGTH                         equ 0001h
UCFG_UPP1_MASK                           equ 0002h

// Register: UADDR
#define UADDR UADDR
UADDR                                    equ 0F63h
// bitfield definitions
UADDR_ADDR_POSN                          equ 0000h
UADDR_ADDR_POSITION                      equ 0000h
UADDR_ADDR_SIZE                          equ 0007h
UADDR_ADDR_LENGTH                        equ 0007h
UADDR_ADDR_MASK                          equ 007Fh
UADDR_ADDR0_POSN                         equ 0000h
UADDR_ADDR0_POSITION                     equ 0000h
UADDR_ADDR0_SIZE                         equ 0001h
UADDR_ADDR0_LENGTH                       equ 0001h
UADDR_ADDR0_MASK                         equ 0001h
UADDR_ADDR1_POSN                         equ 0001h
UADDR_ADDR1_POSITION                     equ 0001h
UADDR_ADDR1_SIZE                         equ 0001h
UADDR_ADDR1_LENGTH                       equ 0001h
UADDR_ADDR1_MASK                         equ 0002h
UADDR_ADDR2_POSN                         equ 0002h
UADDR_ADDR2_POSITION                     equ 0002h
UADDR_ADDR2_SIZE                         equ 0001h
UADDR_ADDR2_LENGTH                       equ 0001h
UADDR_ADDR2_MASK                         equ 0004h
UADDR_ADDR3_POSN                         equ 0003h
UADDR_ADDR3_POSITION                     equ 0003h
UADDR_ADDR3_SIZE                         equ 0001h
UADDR_ADDR3_LENGTH                       equ 0001h
UADDR_ADDR3_MASK                         equ 0008h
UADDR_ADDR4_POSN                         equ 0004h
UADDR_ADDR4_POSITION                     equ 0004h
UADDR_ADDR4_SIZE                         equ 0001h
UADDR_ADDR4_LENGTH                       equ 0001h
UADDR_ADDR4_MASK                         equ 0010h
UADDR_ADDR5_POSN                         equ 0005h
UADDR_ADDR5_POSITION                     equ 0005h
UADDR_ADDR5_SIZE                         equ 0001h
UADDR_ADDR5_LENGTH                       equ 0001h
UADDR_ADDR5_MASK                         equ 0020h
UADDR_ADDR6_POSN                         equ 0006h
UADDR_ADDR6_POSITION                     equ 0006h
UADDR_ADDR6_SIZE                         equ 0001h
UADDR_ADDR6_LENGTH                       equ 0001h
UADDR_ADDR6_MASK                         equ 0040h

// Register: UIE
#define UIE UIE
UIE                                      equ 0F64h
// bitfield definitions
UIE_URSTIE_POSN                          equ 0000h
UIE_URSTIE_POSITION                      equ 0000h
UIE_URSTIE_SIZE                          equ 0001h
UIE_URSTIE_LENGTH                        equ 0001h
UIE_URSTIE_MASK                          equ 0001h
UIE_UERRIE_POSN                          equ 0001h
UIE_UERRIE_POSITION                      equ 0001h
UIE_UERRIE_SIZE                          equ 0001h
UIE_UERRIE_LENGTH                        equ 0001h
UIE_UERRIE_MASK                          equ 0002h
UIE_ACTVIE_POSN                          equ 0002h
UIE_ACTVIE_POSITION                      equ 0002h
UIE_ACTVIE_SIZE                          equ 0001h
UIE_ACTVIE_LENGTH                        equ 0001h
UIE_ACTVIE_MASK                          equ 0004h
UIE_TRNIE_POSN                           equ 0003h
UIE_TRNIE_POSITION                       equ 0003h
UIE_TRNIE_SIZE                           equ 0001h
UIE_TRNIE_LENGTH                         equ 0001h
UIE_TRNIE_MASK                           equ 0008h
UIE_IDLEIE_POSN                          equ 0004h
UIE_IDLEIE_POSITION                      equ 0004h
UIE_IDLEIE_SIZE                          equ 0001h
UIE_IDLEIE_LENGTH                        equ 0001h
UIE_IDLEIE_MASK                          equ 0010h
UIE_STALLIE_POSN                         equ 0005h
UIE_STALLIE_POSITION                     equ 0005h
UIE_STALLIE_SIZE                         equ 0001h
UIE_STALLIE_LENGTH                       equ 0001h
UIE_STALLIE_MASK                         equ 0020h
UIE_SOFIE_POSN                           equ 0006h
UIE_SOFIE_POSITION                       equ 0006h
UIE_SOFIE_SIZE                           equ 0001h
UIE_SOFIE_LENGTH                         equ 0001h
UIE_SOFIE_MASK                           equ 0040h

// Register: UIR
#define UIR UIR
UIR                                      equ 0F65h
// bitfield definitions
UIR_URSTIF_POSN                          equ 0000h
UIR_URSTIF_POSITION                      equ 0000h
UIR_URSTIF_SIZE                          equ 0001h
UIR_URSTIF_LENGTH                        equ 0001h
UIR_URSTIF_MASK                          equ 0001h
UIR_UERRIF_POSN                          equ 0001h
UIR_UERRIF_POSITION                      equ 0001h
UIR_UERRIF_SIZE                          equ 0001h
UIR_UERRIF_LENGTH                        equ 0001h
UIR_UERRIF_MASK                          equ 0002h
UIR_ACTVIF_POSN                          equ 0002h
UIR_ACTVIF_POSITION                      equ 0002h
UIR_ACTVIF_SIZE                          equ 0001h
UIR_ACTVIF_LENGTH                        equ 0001h
UIR_ACTVIF_MASK                          equ 0004h
UIR_TRNIF_POSN                           equ 0003h
UIR_TRNIF_POSITION                       equ 0003h
UIR_TRNIF_SIZE                           equ 0001h
UIR_TRNIF_LENGTH                         equ 0001h
UIR_TRNIF_MASK                           equ 0008h
UIR_IDLEIF_POSN                          equ 0004h
UIR_IDLEIF_POSITION                      equ 0004h
UIR_IDLEIF_SIZE                          equ 0001h
UIR_IDLEIF_LENGTH                        equ 0001h
UIR_IDLEIF_MASK                          equ 0010h
UIR_STALLIF_POSN                         equ 0005h
UIR_STALLIF_POSITION                     equ 0005h
UIR_STALLIF_SIZE                         equ 0001h
UIR_STALLIF_LENGTH                       equ 0001h
UIR_STALLIF_MASK                         equ 0020h
UIR_SOFIF_POSN                           equ 0006h
UIR_SOFIF_POSITION                       equ 0006h
UIR_SOFIF_SIZE                           equ 0001h
UIR_SOFIF_LENGTH                         equ 0001h
UIR_SOFIF_MASK                           equ 0040h

// Register: UEIE
#define UEIE UEIE
UEIE                                     equ 0F66h
// bitfield definitions
UEIE_PIDEE_POSN                          equ 0000h
UEIE_PIDEE_POSITION                      equ 0000h
UEIE_PIDEE_SIZE                          equ 0001h
UEIE_PIDEE_LENGTH                        equ 0001h
UEIE_PIDEE_MASK                          equ 0001h
UEIE_CRC5EE_POSN                         equ 0001h
UEIE_CRC5EE_POSITION                     equ 0001h
UEIE_CRC5EE_SIZE                         equ 0001h
UEIE_CRC5EE_LENGTH                       equ 0001h
UEIE_CRC5EE_MASK                         equ 0002h
UEIE_CRC16EE_POSN                        equ 0002h
UEIE_CRC16EE_POSITION                    equ 0002h
UEIE_CRC16EE_SIZE                        equ 0001h
UEIE_CRC16EE_LENGTH                      equ 0001h
UEIE_CRC16EE_MASK                        equ 0004h
UEIE_DFN8EE_POSN                         equ 0003h
UEIE_DFN8EE_POSITION                     equ 0003h
UEIE_DFN8EE_SIZE                         equ 0001h
UEIE_DFN8EE_LENGTH                       equ 0001h
UEIE_DFN8EE_MASK                         equ 0008h
UEIE_BTOEE_POSN                          equ 0004h
UEIE_BTOEE_POSITION                      equ 0004h
UEIE_BTOEE_SIZE                          equ 0001h
UEIE_BTOEE_LENGTH                        equ 0001h
UEIE_BTOEE_MASK                          equ 0010h
UEIE_BTSEE_POSN                          equ 0007h
UEIE_BTSEE_POSITION                      equ 0007h
UEIE_BTSEE_SIZE                          equ 0001h
UEIE_BTSEE_LENGTH                        equ 0001h
UEIE_BTSEE_MASK                          equ 0080h

// Register: UEIR
#define UEIR UEIR
UEIR                                     equ 0F67h
// bitfield definitions
UEIR_PIDEF_POSN                          equ 0000h
UEIR_PIDEF_POSITION                      equ 0000h
UEIR_PIDEF_SIZE                          equ 0001h
UEIR_PIDEF_LENGTH                        equ 0001h
UEIR_PIDEF_MASK                          equ 0001h
UEIR_CRC5EF_POSN                         equ 0001h
UEIR_CRC5EF_POSITION                     equ 0001h
UEIR_CRC5EF_SIZE                         equ 0001h
UEIR_CRC5EF_LENGTH                       equ 0001h
UEIR_CRC5EF_MASK                         equ 0002h
UEIR_CRC16EF_POSN                        equ 0002h
UEIR_CRC16EF_POSITION                    equ 0002h
UEIR_CRC16EF_SIZE                        equ 0001h
UEIR_CRC16EF_LENGTH                      equ 0001h
UEIR_CRC16EF_MASK                        equ 0004h
UEIR_DFN8EF_POSN                         equ 0003h
UEIR_DFN8EF_POSITION                     equ 0003h
UEIR_DFN8EF_SIZE                         equ 0001h
UEIR_DFN8EF_LENGTH                       equ 0001h
UEIR_DFN8EF_MASK                         equ 0008h
UEIR_BTOEF_POSN                          equ 0004h
UEIR_BTOEF_POSITION                      equ 0004h
UEIR_BTOEF_SIZE                          equ 0001h
UEIR_BTOEF_LENGTH                        equ 0001h
UEIR_BTOEF_MASK                          equ 0010h
UEIR_BTSEF_POSN                          equ 0007h
UEIR_BTSEF_POSITION                      equ 0007h
UEIR_BTSEF_SIZE                          equ 0001h
UEIR_BTSEF_LENGTH                        equ 0001h
UEIR_BTSEF_MASK                          equ 0080h

// Register: UFRM
#define UFRM UFRM
UFRM                                     equ 0F68h

// Register: UFRML
#define UFRML UFRML
UFRML                                    equ 0F68h
// bitfield definitions
UFRML_FRM_POSN                           equ 0000h
UFRML_FRM_POSITION                       equ 0000h
UFRML_FRM_SIZE                           equ 0008h
UFRML_FRM_LENGTH                         equ 0008h
UFRML_FRM_MASK                           equ 00FFh
UFRML_FRM0_POSN                          equ 0000h
UFRML_FRM0_POSITION                      equ 0000h
UFRML_FRM0_SIZE                          equ 0001h
UFRML_FRM0_LENGTH                        equ 0001h
UFRML_FRM0_MASK                          equ 0001h
UFRML_FRM1_POSN                          equ 0001h
UFRML_FRM1_POSITION                      equ 0001h
UFRML_FRM1_SIZE                          equ 0001h
UFRML_FRM1_LENGTH                        equ 0001h
UFRML_FRM1_MASK                          equ 0002h
UFRML_FRM2_POSN                          equ 0002h
UFRML_FRM2_POSITION                      equ 0002h
UFRML_FRM2_SIZE                          equ 0001h
UFRML_FRM2_LENGTH                        equ 0001h
UFRML_FRM2_MASK                          equ 0004h
UFRML_FRM3_POSN                          equ 0003h
UFRML_FRM3_POSITION                      equ 0003h
UFRML_FRM3_SIZE                          equ 0001h
UFRML_FRM3_LENGTH                        equ 0001h
UFRML_FRM3_MASK                          equ 0008h
UFRML_FRM4_POSN                          equ 0004h
UFRML_FRM4_POSITION                      equ 0004h
UFRML_FRM4_SIZE                          equ 0001h
UFRML_FRM4_LENGTH                        equ 0001h
UFRML_FRM4_MASK                          equ 0010h
UFRML_FRM5_POSN                          equ 0005h
UFRML_FRM5_POSITION                      equ 0005h
UFRML_FRM5_SIZE                          equ 0001h
UFRML_FRM5_LENGTH                        equ 0001h
UFRML_FRM5_MASK                          equ 0020h
UFRML_FRM6_POSN                          equ 0006h
UFRML_FRM6_POSITION                      equ 0006h
UFRML_FRM6_SIZE                          equ 0001h
UFRML_FRM6_LENGTH                        equ 0001h
UFRML_FRM6_MASK                          equ 0040h
UFRML_FRM7_POSN                          equ 0007h
UFRML_FRM7_POSITION                      equ 0007h
UFRML_FRM7_SIZE                          equ 0001h
UFRML_FRM7_LENGTH                        equ 0001h
UFRML_FRM7_MASK                          equ 0080h
UFRML_FRML_POSN                          equ 0000h
UFRML_FRML_POSITION                      equ 0000h
UFRML_FRML_SIZE                          equ 0008h
UFRML_FRML_LENGTH                        equ 0008h
UFRML_FRML_MASK                          equ 00FFh

// Register: UFRMH
#define UFRMH UFRMH
UFRMH                                    equ 0F69h
// bitfield definitions
UFRMH_FRM_POSN                           equ 0000h
UFRMH_FRM_POSITION                       equ 0000h
UFRMH_FRM_SIZE                           equ 0003h
UFRMH_FRM_LENGTH                         equ 0003h
UFRMH_FRM_MASK                           equ 0007h
UFRMH_FRM8_POSN                          equ 0000h
UFRMH_FRM8_POSITION                      equ 0000h
UFRMH_FRM8_SIZE                          equ 0001h
UFRMH_FRM8_LENGTH                        equ 0001h
UFRMH_FRM8_MASK                          equ 0001h
UFRMH_FRM9_POSN                          equ 0001h
UFRMH_FRM9_POSITION                      equ 0001h
UFRMH_FRM9_SIZE                          equ 0001h
UFRMH_FRM9_LENGTH                        equ 0001h
UFRMH_FRM9_MASK                          equ 0002h
UFRMH_FRM10_POSN                         equ 0002h
UFRMH_FRM10_POSITION                     equ 0002h
UFRMH_FRM10_SIZE                         equ 0001h
UFRMH_FRM10_LENGTH                       equ 0001h
UFRMH_FRM10_MASK                         equ 0004h

// Register: UEP0
#define UEP0 UEP0
UEP0                                     equ 0F6Ah
// bitfield definitions
UEP0_EPSTALL_POSN                        equ 0000h
UEP0_EPSTALL_POSITION                    equ 0000h
UEP0_EPSTALL_SIZE                        equ 0001h
UEP0_EPSTALL_LENGTH                      equ 0001h
UEP0_EPSTALL_MASK                        equ 0001h
UEP0_EPINEN_POSN                         equ 0001h
UEP0_EPINEN_POSITION                     equ 0001h
UEP0_EPINEN_SIZE                         equ 0001h
UEP0_EPINEN_LENGTH                       equ 0001h
UEP0_EPINEN_MASK                         equ 0002h
UEP0_EPOUTEN_POSN                        equ 0002h
UEP0_EPOUTEN_POSITION                    equ 0002h
UEP0_EPOUTEN_SIZE                        equ 0001h
UEP0_EPOUTEN_LENGTH                      equ 0001h
UEP0_EPOUTEN_MASK                        equ 0004h
UEP0_EPCONDIS_POSN                       equ 0003h
UEP0_EPCONDIS_POSITION                   equ 0003h
UEP0_EPCONDIS_SIZE                       equ 0001h
UEP0_EPCONDIS_LENGTH                     equ 0001h
UEP0_EPCONDIS_MASK                       equ 0008h
UEP0_EPHSHK_POSN                         equ 0004h
UEP0_EPHSHK_POSITION                     equ 0004h
UEP0_EPHSHK_SIZE                         equ 0001h
UEP0_EPHSHK_LENGTH                       equ 0001h
UEP0_EPHSHK_MASK                         equ 0010h
UEP0_EP0STALL_POSN                       equ 0000h
UEP0_EP0STALL_POSITION                   equ 0000h
UEP0_EP0STALL_SIZE                       equ 0001h
UEP0_EP0STALL_LENGTH                     equ 0001h
UEP0_EP0STALL_MASK                       equ 0001h
UEP0_EP0INEN_POSN                        equ 0001h
UEP0_EP0INEN_POSITION                    equ 0001h
UEP0_EP0INEN_SIZE                        equ 0001h
UEP0_EP0INEN_LENGTH                      equ 0001h
UEP0_EP0INEN_MASK                        equ 0002h
UEP0_EP0OUTEN_POSN                       equ 0002h
UEP0_EP0OUTEN_POSITION                   equ 0002h
UEP0_EP0OUTEN_SIZE                       equ 0001h
UEP0_EP0OUTEN_LENGTH                     equ 0001h
UEP0_EP0OUTEN_MASK                       equ 0004h
UEP0_EP0CONDIS_POSN                      equ 0003h
UEP0_EP0CONDIS_POSITION                  equ 0003h
UEP0_EP0CONDIS_SIZE                      equ 0001h
UEP0_EP0CONDIS_LENGTH                    equ 0001h
UEP0_EP0CONDIS_MASK                      equ 0008h
UEP0_EP0HSHK_POSN                        equ 0004h
UEP0_EP0HSHK_POSITION                    equ 0004h
UEP0_EP0HSHK_SIZE                        equ 0001h
UEP0_EP0HSHK_LENGTH                      equ 0001h
UEP0_EP0HSHK_MASK                        equ 0010h
UEP0_EPSTALL0_POSN                       equ 0000h
UEP0_EPSTALL0_POSITION                   equ 0000h
UEP0_EPSTALL0_SIZE                       equ 0001h
UEP0_EPSTALL0_LENGTH                     equ 0001h
UEP0_EPSTALL0_MASK                       equ 0001h
UEP0_EPINEN0_POSN                        equ 0001h
UEP0_EPINEN0_POSITION                    equ 0001h
UEP0_EPINEN0_SIZE                        equ 0001h
UEP0_EPINEN0_LENGTH                      equ 0001h
UEP0_EPINEN0_MASK                        equ 0002h
UEP0_EPOUTEN0_POSN                       equ 0002h
UEP0_EPOUTEN0_POSITION                   equ 0002h
UEP0_EPOUTEN0_SIZE                       equ 0001h
UEP0_EPOUTEN0_LENGTH                     equ 0001h
UEP0_EPOUTEN0_MASK                       equ 0004h
UEP0_EPCONDIS0_POSN                      equ 0003h
UEP0_EPCONDIS0_POSITION                  equ 0003h
UEP0_EPCONDIS0_SIZE                      equ 0001h
UEP0_EPCONDIS0_LENGTH                    equ 0001h
UEP0_EPCONDIS0_MASK                      equ 0008h
UEP0_EPHSHK0_POSN                        equ 0004h
UEP0_EPHSHK0_POSITION                    equ 0004h
UEP0_EPHSHK0_SIZE                        equ 0001h
UEP0_EPHSHK0_LENGTH                      equ 0001h
UEP0_EPHSHK0_MASK                        equ 0010h

// Register: UEP1
#define UEP1 UEP1
UEP1                                     equ 0F6Bh
// bitfield definitions
UEP1_EPSTALL_POSN                        equ 0000h
UEP1_EPSTALL_POSITION                    equ 0000h
UEP1_EPSTALL_SIZE                        equ 0001h
UEP1_EPSTALL_LENGTH                      equ 0001h
UEP1_EPSTALL_MASK                        equ 0001h
UEP1_EPINEN_POSN                         equ 0001h
UEP1_EPINEN_POSITION                     equ 0001h
UEP1_EPINEN_SIZE                         equ 0001h
UEP1_EPINEN_LENGTH                       equ 0001h
UEP1_EPINEN_MASK                         equ 0002h
UEP1_EPOUTEN_POSN                        equ 0002h
UEP1_EPOUTEN_POSITION                    equ 0002h
UEP1_EPOUTEN_SIZE                        equ 0001h
UEP1_EPOUTEN_LENGTH                      equ 0001h
UEP1_EPOUTEN_MASK                        equ 0004h
UEP1_EPCONDIS_POSN                       equ 0003h
UEP1_EPCONDIS_POSITION                   equ 0003h
UEP1_EPCONDIS_SIZE                       equ 0001h
UEP1_EPCONDIS_LENGTH                     equ 0001h
UEP1_EPCONDIS_MASK                       equ 0008h
UEP1_EPHSHK_POSN                         equ 0004h
UEP1_EPHSHK_POSITION                     equ 0004h
UEP1_EPHSHK_SIZE                         equ 0001h
UEP1_EPHSHK_LENGTH                       equ 0001h
UEP1_EPHSHK_MASK                         equ 0010h
UEP1_EP1STALL_POSN                       equ 0000h
UEP1_EP1STALL_POSITION                   equ 0000h
UEP1_EP1STALL_SIZE                       equ 0001h
UEP1_EP1STALL_LENGTH                     equ 0001h
UEP1_EP1STALL_MASK                       equ 0001h
UEP1_EP1INEN_POSN                        equ 0001h
UEP1_EP1INEN_POSITION                    equ 0001h
UEP1_EP1INEN_SIZE                        equ 0001h
UEP1_EP1INEN_LENGTH                      equ 0001h
UEP1_EP1INEN_MASK                        equ 0002h
UEP1_EP1OUTEN_POSN                       equ 0002h
UEP1_EP1OUTEN_POSITION                   equ 0002h
UEP1_EP1OUTEN_SIZE                       equ 0001h
UEP1_EP1OUTEN_LENGTH                     equ 0001h
UEP1_EP1OUTEN_MASK                       equ 0004h
UEP1_EP1CONDIS_POSN                      equ 0003h
UEP1_EP1CONDIS_POSITION                  equ 0003h
UEP1_EP1CONDIS_SIZE                      equ 0001h
UEP1_EP1CONDIS_LENGTH                    equ 0001h
UEP1_EP1CONDIS_MASK                      equ 0008h
UEP1_EP1HSHK_POSN                        equ 0004h
UEP1_EP1HSHK_POSITION                    equ 0004h
UEP1_EP1HSHK_SIZE                        equ 0001h
UEP1_EP1HSHK_LENGTH                      equ 0001h
UEP1_EP1HSHK_MASK                        equ 0010h
UEP1_EPSTALL1_POSN                       equ 0000h
UEP1_EPSTALL1_POSITION                   equ 0000h
UEP1_EPSTALL1_SIZE                       equ 0001h
UEP1_EPSTALL1_LENGTH                     equ 0001h
UEP1_EPSTALL1_MASK                       equ 0001h
UEP1_EPINEN1_POSN                        equ 0001h
UEP1_EPINEN1_POSITION                    equ 0001h
UEP1_EPINEN1_SIZE                        equ 0001h
UEP1_EPINEN1_LENGTH                      equ 0001h
UEP1_EPINEN1_MASK                        equ 0002h
UEP1_EPOUTEN1_POSN                       equ 0002h
UEP1_EPOUTEN1_POSITION                   equ 0002h
UEP1_EPOUTEN1_SIZE                       equ 0001h
UEP1_EPOUTEN1_LENGTH                     equ 0001h
UEP1_EPOUTEN1_MASK                       equ 0004h
UEP1_EPCONDIS1_POSN                      equ 0003h
UEP1_EPCONDIS1_POSITION                  equ 0003h
UEP1_EPCONDIS1_SIZE                      equ 0001h
UEP1_EPCONDIS1_LENGTH                    equ 0001h
UEP1_EPCONDIS1_MASK                      equ 0008h
UEP1_EPHSHK1_POSN                        equ 0004h
UEP1_EPHSHK1_POSITION                    equ 0004h
UEP1_EPHSHK1_SIZE                        equ 0001h
UEP1_EPHSHK1_LENGTH                      equ 0001h
UEP1_EPHSHK1_MASK                        equ 0010h

// Register: UEP2
#define UEP2 UEP2
UEP2                                     equ 0F6Ch
// bitfield definitions
UEP2_EPSTALL_POSN                        equ 0000h
UEP2_EPSTALL_POSITION                    equ 0000h
UEP2_EPSTALL_SIZE                        equ 0001h
UEP2_EPSTALL_LENGTH                      equ 0001h
UEP2_EPSTALL_MASK                        equ 0001h
UEP2_EPINEN_POSN                         equ 0001h
UEP2_EPINEN_POSITION                     equ 0001h
UEP2_EPINEN_SIZE                         equ 0001h
UEP2_EPINEN_LENGTH                       equ 0001h
UEP2_EPINEN_MASK                         equ 0002h
UEP2_EPOUTEN_POSN                        equ 0002h
UEP2_EPOUTEN_POSITION                    equ 0002h
UEP2_EPOUTEN_SIZE                        equ 0001h
UEP2_EPOUTEN_LENGTH                      equ 0001h
UEP2_EPOUTEN_MASK                        equ 0004h
UEP2_EPCONDIS_POSN                       equ 0003h
UEP2_EPCONDIS_POSITION                   equ 0003h
UEP2_EPCONDIS_SIZE                       equ 0001h
UEP2_EPCONDIS_LENGTH                     equ 0001h
UEP2_EPCONDIS_MASK                       equ 0008h
UEP2_EPHSHK_POSN                         equ 0004h
UEP2_EPHSHK_POSITION                     equ 0004h
UEP2_EPHSHK_SIZE                         equ 0001h
UEP2_EPHSHK_LENGTH                       equ 0001h
UEP2_EPHSHK_MASK                         equ 0010h
UEP2_EP2STALL_POSN                       equ 0000h
UEP2_EP2STALL_POSITION                   equ 0000h
UEP2_EP2STALL_SIZE                       equ 0001h
UEP2_EP2STALL_LENGTH                     equ 0001h
UEP2_EP2STALL_MASK                       equ 0001h
UEP2_EP2INEN_POSN                        equ 0001h
UEP2_EP2INEN_POSITION                    equ 0001h
UEP2_EP2INEN_SIZE                        equ 0001h
UEP2_EP2INEN_LENGTH                      equ 0001h
UEP2_EP2INEN_MASK                        equ 0002h
UEP2_EP2OUTEN_POSN                       equ 0002h
UEP2_EP2OUTEN_POSITION                   equ 0002h
UEP2_EP2OUTEN_SIZE                       equ 0001h
UEP2_EP2OUTEN_LENGTH                     equ 0001h
UEP2_EP2OUTEN_MASK                       equ 0004h
UEP2_EP2CONDIS_POSN                      equ 0003h
UEP2_EP2CONDIS_POSITION                  equ 0003h
UEP2_EP2CONDIS_SIZE                      equ 0001h
UEP2_EP2CONDIS_LENGTH                    equ 0001h
UEP2_EP2CONDIS_MASK                      equ 0008h
UEP2_EP2HSHK_POSN                        equ 0004h
UEP2_EP2HSHK_POSITION                    equ 0004h
UEP2_EP2HSHK_SIZE                        equ 0001h
UEP2_EP2HSHK_LENGTH                      equ 0001h
UEP2_EP2HSHK_MASK                        equ 0010h
UEP2_EPSTALL2_POSN                       equ 0000h
UEP2_EPSTALL2_POSITION                   equ 0000h
UEP2_EPSTALL2_SIZE                       equ 0001h
UEP2_EPSTALL2_LENGTH                     equ 0001h
UEP2_EPSTALL2_MASK                       equ 0001h
UEP2_EPINEN2_POSN                        equ 0001h
UEP2_EPINEN2_POSITION                    equ 0001h
UEP2_EPINEN2_SIZE                        equ 0001h
UEP2_EPINEN2_LENGTH                      equ 0001h
UEP2_EPINEN2_MASK                        equ 0002h
UEP2_EPOUTEN2_POSN                       equ 0002h
UEP2_EPOUTEN2_POSITION                   equ 0002h
UEP2_EPOUTEN2_SIZE                       equ 0001h
UEP2_EPOUTEN2_LENGTH                     equ 0001h
UEP2_EPOUTEN2_MASK                       equ 0004h
UEP2_EPCONDIS2_POSN                      equ 0003h
UEP2_EPCONDIS2_POSITION                  equ 0003h
UEP2_EPCONDIS2_SIZE                      equ 0001h
UEP2_EPCONDIS2_LENGTH                    equ 0001h
UEP2_EPCONDIS2_MASK                      equ 0008h
UEP2_EPHSHK2_POSN                        equ 0004h
UEP2_EPHSHK2_POSITION                    equ 0004h
UEP2_EPHSHK2_SIZE                        equ 0001h
UEP2_EPHSHK2_LENGTH                      equ 0001h
UEP2_EPHSHK2_MASK                        equ 0010h

// Register: UEP3
#define UEP3 UEP3
UEP3                                     equ 0F6Dh
// bitfield definitions
UEP3_EPSTALL_POSN                        equ 0000h
UEP3_EPSTALL_POSITION                    equ 0000h
UEP3_EPSTALL_SIZE                        equ 0001h
UEP3_EPSTALL_LENGTH                      equ 0001h
UEP3_EPSTALL_MASK                        equ 0001h
UEP3_EPINEN_POSN                         equ 0001h
UEP3_EPINEN_POSITION                     equ 0001h
UEP3_EPINEN_SIZE                         equ 0001h
UEP3_EPINEN_LENGTH                       equ 0001h
UEP3_EPINEN_MASK                         equ 0002h
UEP3_EPOUTEN_POSN                        equ 0002h
UEP3_EPOUTEN_POSITION                    equ 0002h
UEP3_EPOUTEN_SIZE                        equ 0001h
UEP3_EPOUTEN_LENGTH                      equ 0001h
UEP3_EPOUTEN_MASK                        equ 0004h
UEP3_EPCONDIS_POSN                       equ 0003h
UEP3_EPCONDIS_POSITION                   equ 0003h
UEP3_EPCONDIS_SIZE                       equ 0001h
UEP3_EPCONDIS_LENGTH                     equ 0001h
UEP3_EPCONDIS_MASK                       equ 0008h
UEP3_EPHSHK_POSN                         equ 0004h
UEP3_EPHSHK_POSITION                     equ 0004h
UEP3_EPHSHK_SIZE                         equ 0001h
UEP3_EPHSHK_LENGTH                       equ 0001h
UEP3_EPHSHK_MASK                         equ 0010h
UEP3_EP3STALL_POSN                       equ 0000h
UEP3_EP3STALL_POSITION                   equ 0000h
UEP3_EP3STALL_SIZE                       equ 0001h
UEP3_EP3STALL_LENGTH                     equ 0001h
UEP3_EP3STALL_MASK                       equ 0001h
UEP3_EP3INEN_POSN                        equ 0001h
UEP3_EP3INEN_POSITION                    equ 0001h
UEP3_EP3INEN_SIZE                        equ 0001h
UEP3_EP3INEN_LENGTH                      equ 0001h
UEP3_EP3INEN_MASK                        equ 0002h
UEP3_EP3OUTEN_POSN                       equ 0002h
UEP3_EP3OUTEN_POSITION                   equ 0002h
UEP3_EP3OUTEN_SIZE                       equ 0001h
UEP3_EP3OUTEN_LENGTH                     equ 0001h
UEP3_EP3OUTEN_MASK                       equ 0004h
UEP3_EP3CONDIS_POSN                      equ 0003h
UEP3_EP3CONDIS_POSITION                  equ 0003h
UEP3_EP3CONDIS_SIZE                      equ 0001h
UEP3_EP3CONDIS_LENGTH                    equ 0001h
UEP3_EP3CONDIS_MASK                      equ 0008h
UEP3_EP3HSHK_POSN                        equ 0004h
UEP3_EP3HSHK_POSITION                    equ 0004h
UEP3_EP3HSHK_SIZE                        equ 0001h
UEP3_EP3HSHK_LENGTH                      equ 0001h
UEP3_EP3HSHK_MASK                        equ 0010h
UEP3_EPSTALL3_POSN                       equ 0000h
UEP3_EPSTALL3_POSITION                   equ 0000h
UEP3_EPSTALL3_SIZE                       equ 0001h
UEP3_EPSTALL3_LENGTH                     equ 0001h
UEP3_EPSTALL3_MASK                       equ 0001h
UEP3_EPINEN3_POSN                        equ 0001h
UEP3_EPINEN3_POSITION                    equ 0001h
UEP3_EPINEN3_SIZE                        equ 0001h
UEP3_EPINEN3_LENGTH                      equ 0001h
UEP3_EPINEN3_MASK                        equ 0002h
UEP3_EPOUTEN3_POSN                       equ 0002h
UEP3_EPOUTEN3_POSITION                   equ 0002h
UEP3_EPOUTEN3_SIZE                       equ 0001h
UEP3_EPOUTEN3_LENGTH                     equ 0001h
UEP3_EPOUTEN3_MASK                       equ 0004h
UEP3_EPCONDIS3_POSN                      equ 0003h
UEP3_EPCONDIS3_POSITION                  equ 0003h
UEP3_EPCONDIS3_SIZE                      equ 0001h
UEP3_EPCONDIS3_LENGTH                    equ 0001h
UEP3_EPCONDIS3_MASK                      equ 0008h
UEP3_EPHSHK3_POSN                        equ 0004h
UEP3_EPHSHK3_POSITION                    equ 0004h
UEP3_EPHSHK3_SIZE                        equ 0001h
UEP3_EPHSHK3_LENGTH                      equ 0001h
UEP3_EPHSHK3_MASK                        equ 0010h

// Register: UEP4
#define UEP4 UEP4
UEP4                                     equ 0F6Eh
// bitfield definitions
UEP4_EPSTALL_POSN                        equ 0000h
UEP4_EPSTALL_POSITION                    equ 0000h
UEP4_EPSTALL_SIZE                        equ 0001h
UEP4_EPSTALL_LENGTH                      equ 0001h
UEP4_EPSTALL_MASK                        equ 0001h
UEP4_EPINEN_POSN                         equ 0001h
UEP4_EPINEN_POSITION                     equ 0001h
UEP4_EPINEN_SIZE                         equ 0001h
UEP4_EPINEN_LENGTH                       equ 0001h
UEP4_EPINEN_MASK                         equ 0002h
UEP4_EPOUTEN_POSN                        equ 0002h
UEP4_EPOUTEN_POSITION                    equ 0002h
UEP4_EPOUTEN_SIZE                        equ 0001h
UEP4_EPOUTEN_LENGTH                      equ 0001h
UEP4_EPOUTEN_MASK                        equ 0004h
UEP4_EPCONDIS_POSN                       equ 0003h
UEP4_EPCONDIS_POSITION                   equ 0003h
UEP4_EPCONDIS_SIZE                       equ 0001h
UEP4_EPCONDIS_LENGTH                     equ 0001h
UEP4_EPCONDIS_MASK                       equ 0008h
UEP4_EPHSHK_POSN                         equ 0004h
UEP4_EPHSHK_POSITION                     equ 0004h
UEP4_EPHSHK_SIZE                         equ 0001h
UEP4_EPHSHK_LENGTH                       equ 0001h
UEP4_EPHSHK_MASK                         equ 0010h
UEP4_EP4STALL_POSN                       equ 0000h
UEP4_EP4STALL_POSITION                   equ 0000h
UEP4_EP4STALL_SIZE                       equ 0001h
UEP4_EP4STALL_LENGTH                     equ 0001h
UEP4_EP4STALL_MASK                       equ 0001h
UEP4_EP4INEN_POSN                        equ 0001h
UEP4_EP4INEN_POSITION                    equ 0001h
UEP4_EP4INEN_SIZE                        equ 0001h
UEP4_EP4INEN_LENGTH                      equ 0001h
UEP4_EP4INEN_MASK                        equ 0002h
UEP4_EP4OUTEN_POSN                       equ 0002h
UEP4_EP4OUTEN_POSITION                   equ 0002h
UEP4_EP4OUTEN_SIZE                       equ 0001h
UEP4_EP4OUTEN_LENGTH                     equ 0001h
UEP4_EP4OUTEN_MASK                       equ 0004h
UEP4_EP4CONDIS_POSN                      equ 0003h
UEP4_EP4CONDIS_POSITION                  equ 0003h
UEP4_EP4CONDIS_SIZE                      equ 0001h
UEP4_EP4CONDIS_LENGTH                    equ 0001h
UEP4_EP4CONDIS_MASK                      equ 0008h
UEP4_EP4HSHK_POSN                        equ 0004h
UEP4_EP4HSHK_POSITION                    equ 0004h
UEP4_EP4HSHK_SIZE                        equ 0001h
UEP4_EP4HSHK_LENGTH                      equ 0001h
UEP4_EP4HSHK_MASK                        equ 0010h
UEP4_EPSTALL4_POSN                       equ 0000h
UEP4_EPSTALL4_POSITION                   equ 0000h
UEP4_EPSTALL4_SIZE                       equ 0001h
UEP4_EPSTALL4_LENGTH                     equ 0001h
UEP4_EPSTALL4_MASK                       equ 0001h
UEP4_EPINEN4_POSN                        equ 0001h
UEP4_EPINEN4_POSITION                    equ 0001h
UEP4_EPINEN4_SIZE                        equ 0001h
UEP4_EPINEN4_LENGTH                      equ 0001h
UEP4_EPINEN4_MASK                        equ 0002h
UEP4_EPOUTEN4_POSN                       equ 0002h
UEP4_EPOUTEN4_POSITION                   equ 0002h
UEP4_EPOUTEN4_SIZE                       equ 0001h
UEP4_EPOUTEN4_LENGTH                     equ 0001h
UEP4_EPOUTEN4_MASK                       equ 0004h
UEP4_EPCONDIS4_POSN                      equ 0003h
UEP4_EPCONDIS4_POSITION                  equ 0003h
UEP4_EPCONDIS4_SIZE                      equ 0001h
UEP4_EPCONDIS4_LENGTH                    equ 0001h
UEP4_EPCONDIS4_MASK                      equ 0008h
UEP4_EPHSHK4_POSN                        equ 0004h
UEP4_EPHSHK4_POSITION                    equ 0004h
UEP4_EPHSHK4_SIZE                        equ 0001h
UEP4_EPHSHK4_LENGTH                      equ 0001h
UEP4_EPHSHK4_MASK                        equ 0010h

// Register: UEP5
#define UEP5 UEP5
UEP5                                     equ 0F6Fh
// bitfield definitions
UEP5_EPSTALL_POSN                        equ 0000h
UEP5_EPSTALL_POSITION                    equ 0000h
UEP5_EPSTALL_SIZE                        equ 0001h
UEP5_EPSTALL_LENGTH                      equ 0001h
UEP5_EPSTALL_MASK                        equ 0001h
UEP5_EPINEN_POSN                         equ 0001h
UEP5_EPINEN_POSITION                     equ 0001h
UEP5_EPINEN_SIZE                         equ 0001h
UEP5_EPINEN_LENGTH                       equ 0001h
UEP5_EPINEN_MASK                         equ 0002h
UEP5_EPOUTEN_POSN                        equ 0002h
UEP5_EPOUTEN_POSITION                    equ 0002h
UEP5_EPOUTEN_SIZE                        equ 0001h
UEP5_EPOUTEN_LENGTH                      equ 0001h
UEP5_EPOUTEN_MASK                        equ 0004h
UEP5_EPCONDIS_POSN                       equ 0003h
UEP5_EPCONDIS_POSITION                   equ 0003h
UEP5_EPCONDIS_SIZE                       equ 0001h
UEP5_EPCONDIS_LENGTH                     equ 0001h
UEP5_EPCONDIS_MASK                       equ 0008h
UEP5_EPHSHK_POSN                         equ 0004h
UEP5_EPHSHK_POSITION                     equ 0004h
UEP5_EPHSHK_SIZE                         equ 0001h
UEP5_EPHSHK_LENGTH                       equ 0001h
UEP5_EPHSHK_MASK                         equ 0010h
UEP5_EP5STALL_POSN                       equ 0000h
UEP5_EP5STALL_POSITION                   equ 0000h
UEP5_EP5STALL_SIZE                       equ 0001h
UEP5_EP5STALL_LENGTH                     equ 0001h
UEP5_EP5STALL_MASK                       equ 0001h
UEP5_EP5INEN_POSN                        equ 0001h
UEP5_EP5INEN_POSITION                    equ 0001h
UEP5_EP5INEN_SIZE                        equ 0001h
UEP5_EP5INEN_LENGTH                      equ 0001h
UEP5_EP5INEN_MASK                        equ 0002h
UEP5_EP5OUTEN_POSN                       equ 0002h
UEP5_EP5OUTEN_POSITION                   equ 0002h
UEP5_EP5OUTEN_SIZE                       equ 0001h
UEP5_EP5OUTEN_LENGTH                     equ 0001h
UEP5_EP5OUTEN_MASK                       equ 0004h
UEP5_EP5CONDIS_POSN                      equ 0003h
UEP5_EP5CONDIS_POSITION                  equ 0003h
UEP5_EP5CONDIS_SIZE                      equ 0001h
UEP5_EP5CONDIS_LENGTH                    equ 0001h
UEP5_EP5CONDIS_MASK                      equ 0008h
UEP5_EP5HSHK_POSN                        equ 0004h
UEP5_EP5HSHK_POSITION                    equ 0004h
UEP5_EP5HSHK_SIZE                        equ 0001h
UEP5_EP5HSHK_LENGTH                      equ 0001h
UEP5_EP5HSHK_MASK                        equ 0010h
UEP5_EPSTALL5_POSN                       equ 0000h
UEP5_EPSTALL5_POSITION                   equ 0000h
UEP5_EPSTALL5_SIZE                       equ 0001h
UEP5_EPSTALL5_LENGTH                     equ 0001h
UEP5_EPSTALL5_MASK                       equ 0001h
UEP5_EPINEN5_POSN                        equ 0001h
UEP5_EPINEN5_POSITION                    equ 0001h
UEP5_EPINEN5_SIZE                        equ 0001h
UEP5_EPINEN5_LENGTH                      equ 0001h
UEP5_EPINEN5_MASK                        equ 0002h
UEP5_EPOUTEN5_POSN                       equ 0002h
UEP5_EPOUTEN5_POSITION                   equ 0002h
UEP5_EPOUTEN5_SIZE                       equ 0001h
UEP5_EPOUTEN5_LENGTH                     equ 0001h
UEP5_EPOUTEN5_MASK                       equ 0004h
UEP5_EPCONDIS5_POSN                      equ 0003h
UEP5_EPCONDIS5_POSITION                  equ 0003h
UEP5_EPCONDIS5_SIZE                      equ 0001h
UEP5_EPCONDIS5_LENGTH                    equ 0001h
UEP5_EPCONDIS5_MASK                      equ 0008h
UEP5_EPHSHK5_POSN                        equ 0004h
UEP5_EPHSHK5_POSITION                    equ 0004h
UEP5_EPHSHK5_SIZE                        equ 0001h
UEP5_EPHSHK5_LENGTH                      equ 0001h
UEP5_EPHSHK5_MASK                        equ 0010h

// Register: UEP6
#define UEP6 UEP6
UEP6                                     equ 0F70h
// bitfield definitions
UEP6_EPSTALL_POSN                        equ 0000h
UEP6_EPSTALL_POSITION                    equ 0000h
UEP6_EPSTALL_SIZE                        equ 0001h
UEP6_EPSTALL_LENGTH                      equ 0001h
UEP6_EPSTALL_MASK                        equ 0001h
UEP6_EPINEN_POSN                         equ 0001h
UEP6_EPINEN_POSITION                     equ 0001h
UEP6_EPINEN_SIZE                         equ 0001h
UEP6_EPINEN_LENGTH                       equ 0001h
UEP6_EPINEN_MASK                         equ 0002h
UEP6_EPOUTEN_POSN                        equ 0002h
UEP6_EPOUTEN_POSITION                    equ 0002h
UEP6_EPOUTEN_SIZE                        equ 0001h
UEP6_EPOUTEN_LENGTH                      equ 0001h
UEP6_EPOUTEN_MASK                        equ 0004h
UEP6_EPCONDIS_POSN                       equ 0003h
UEP6_EPCONDIS_POSITION                   equ 0003h
UEP6_EPCONDIS_SIZE                       equ 0001h
UEP6_EPCONDIS_LENGTH                     equ 0001h
UEP6_EPCONDIS_MASK                       equ 0008h
UEP6_EPHSHK_POSN                         equ 0004h
UEP6_EPHSHK_POSITION                     equ 0004h
UEP6_EPHSHK_SIZE                         equ 0001h
UEP6_EPHSHK_LENGTH                       equ 0001h
UEP6_EPHSHK_MASK                         equ 0010h
UEP6_EP6STALL_POSN                       equ 0000h
UEP6_EP6STALL_POSITION                   equ 0000h
UEP6_EP6STALL_SIZE                       equ 0001h
UEP6_EP6STALL_LENGTH                     equ 0001h
UEP6_EP6STALL_MASK                       equ 0001h
UEP6_EP6INEN_POSN                        equ 0001h
UEP6_EP6INEN_POSITION                    equ 0001h
UEP6_EP6INEN_SIZE                        equ 0001h
UEP6_EP6INEN_LENGTH                      equ 0001h
UEP6_EP6INEN_MASK                        equ 0002h
UEP6_EP6OUTEN_POSN                       equ 0002h
UEP6_EP6OUTEN_POSITION                   equ 0002h
UEP6_EP6OUTEN_SIZE                       equ 0001h
UEP6_EP6OUTEN_LENGTH                     equ 0001h
UEP6_EP6OUTEN_MASK                       equ 0004h
UEP6_EP6CONDIS_POSN                      equ 0003h
UEP6_EP6CONDIS_POSITION                  equ 0003h
UEP6_EP6CONDIS_SIZE                      equ 0001h
UEP6_EP6CONDIS_LENGTH                    equ 0001h
UEP6_EP6CONDIS_MASK                      equ 0008h
UEP6_EP6HSHK_POSN                        equ 0004h
UEP6_EP6HSHK_POSITION                    equ 0004h
UEP6_EP6HSHK_SIZE                        equ 0001h
UEP6_EP6HSHK_LENGTH                      equ 0001h
UEP6_EP6HSHK_MASK                        equ 0010h
UEP6_EPSTALL6_POSN                       equ 0000h
UEP6_EPSTALL6_POSITION                   equ 0000h
UEP6_EPSTALL6_SIZE                       equ 0001h
UEP6_EPSTALL6_LENGTH                     equ 0001h
UEP6_EPSTALL6_MASK                       equ 0001h
UEP6_EPINEN6_POSN                        equ 0001h
UEP6_EPINEN6_POSITION                    equ 0001h
UEP6_EPINEN6_SIZE                        equ 0001h
UEP6_EPINEN6_LENGTH                      equ 0001h
UEP6_EPINEN6_MASK                        equ 0002h
UEP6_EPOUTEN6_POSN                       equ 0002h
UEP6_EPOUTEN6_POSITION                   equ 0002h
UEP6_EPOUTEN6_SIZE                       equ 0001h
UEP6_EPOUTEN6_LENGTH                     equ 0001h
UEP6_EPOUTEN6_MASK                       equ 0004h
UEP6_EPCONDIS6_POSN                      equ 0003h
UEP6_EPCONDIS6_POSITION                  equ 0003h
UEP6_EPCONDIS6_SIZE                      equ 0001h
UEP6_EPCONDIS6_LENGTH                    equ 0001h
UEP6_EPCONDIS6_MASK                      equ 0008h
UEP6_EPHSHK6_POSN                        equ 0004h
UEP6_EPHSHK6_POSITION                    equ 0004h
UEP6_EPHSHK6_SIZE                        equ 0001h
UEP6_EPHSHK6_LENGTH                      equ 0001h
UEP6_EPHSHK6_MASK                        equ 0010h

// Register: UEP7
#define UEP7 UEP7
UEP7                                     equ 0F71h
// bitfield definitions
UEP7_EPSTALL_POSN                        equ 0000h
UEP7_EPSTALL_POSITION                    equ 0000h
UEP7_EPSTALL_SIZE                        equ 0001h
UEP7_EPSTALL_LENGTH                      equ 0001h
UEP7_EPSTALL_MASK                        equ 0001h
UEP7_EPINEN_POSN                         equ 0001h
UEP7_EPINEN_POSITION                     equ 0001h
UEP7_EPINEN_SIZE                         equ 0001h
UEP7_EPINEN_LENGTH                       equ 0001h
UEP7_EPINEN_MASK                         equ 0002h
UEP7_EPOUTEN_POSN                        equ 0002h
UEP7_EPOUTEN_POSITION                    equ 0002h
UEP7_EPOUTEN_SIZE                        equ 0001h
UEP7_EPOUTEN_LENGTH                      equ 0001h
UEP7_EPOUTEN_MASK                        equ 0004h
UEP7_EPCONDIS_POSN                       equ 0003h
UEP7_EPCONDIS_POSITION                   equ 0003h
UEP7_EPCONDIS_SIZE                       equ 0001h
UEP7_EPCONDIS_LENGTH                     equ 0001h
UEP7_EPCONDIS_MASK                       equ 0008h
UEP7_EPHSHK_POSN                         equ 0004h
UEP7_EPHSHK_POSITION                     equ 0004h
UEP7_EPHSHK_SIZE                         equ 0001h
UEP7_EPHSHK_LENGTH                       equ 0001h
UEP7_EPHSHK_MASK                         equ 0010h
UEP7_EP7STALL_POSN                       equ 0000h
UEP7_EP7STALL_POSITION                   equ 0000h
UEP7_EP7STALL_SIZE                       equ 0001h
UEP7_EP7STALL_LENGTH                     equ 0001h
UEP7_EP7STALL_MASK                       equ 0001h
UEP7_EP7INEN_POSN                        equ 0001h
UEP7_EP7INEN_POSITION                    equ 0001h
UEP7_EP7INEN_SIZE                        equ 0001h
UEP7_EP7INEN_LENGTH                      equ 0001h
UEP7_EP7INEN_MASK                        equ 0002h
UEP7_EP7OUTEN_POSN                       equ 0002h
UEP7_EP7OUTEN_POSITION                   equ 0002h
UEP7_EP7OUTEN_SIZE                       equ 0001h
UEP7_EP7OUTEN_LENGTH                     equ 0001h
UEP7_EP7OUTEN_MASK                       equ 0004h
UEP7_EP7CONDIS_POSN                      equ 0003h
UEP7_EP7CONDIS_POSITION                  equ 0003h
UEP7_EP7CONDIS_SIZE                      equ 0001h
UEP7_EP7CONDIS_LENGTH                    equ 0001h
UEP7_EP7CONDIS_MASK                      equ 0008h
UEP7_EP7HSHK_POSN                        equ 0004h
UEP7_EP7HSHK_POSITION                    equ 0004h
UEP7_EP7HSHK_SIZE                        equ 0001h
UEP7_EP7HSHK_LENGTH                      equ 0001h
UEP7_EP7HSHK_MASK                        equ 0010h
UEP7_EPSTALL7_POSN                       equ 0000h
UEP7_EPSTALL7_POSITION                   equ 0000h
UEP7_EPSTALL7_SIZE                       equ 0001h
UEP7_EPSTALL7_LENGTH                     equ 0001h
UEP7_EPSTALL7_MASK                       equ 0001h
UEP7_EPINEN7_POSN                        equ 0001h
UEP7_EPINEN7_POSITION                    equ 0001h
UEP7_EPINEN7_SIZE                        equ 0001h
UEP7_EPINEN7_LENGTH                      equ 0001h
UEP7_EPINEN7_MASK                        equ 0002h
UEP7_EPOUTEN7_POSN                       equ 0002h
UEP7_EPOUTEN7_POSITION                   equ 0002h
UEP7_EPOUTEN7_SIZE                       equ 0001h
UEP7_EPOUTEN7_LENGTH                     equ 0001h
UEP7_EPOUTEN7_MASK                       equ 0004h
UEP7_EPCONDIS7_POSN                      equ 0003h
UEP7_EPCONDIS7_POSITION                  equ 0003h
UEP7_EPCONDIS7_SIZE                      equ 0001h
UEP7_EPCONDIS7_LENGTH                    equ 0001h
UEP7_EPCONDIS7_MASK                      equ 0008h
UEP7_EPHSHK7_POSN                        equ 0004h
UEP7_EPHSHK7_POSITION                    equ 0004h
UEP7_EPHSHK7_SIZE                        equ 0001h
UEP7_EPHSHK7_LENGTH                      equ 0001h
UEP7_EPHSHK7_MASK                        equ 0010h

// Register: UEP8
#define UEP8 UEP8
UEP8                                     equ 0F72h
// bitfield definitions
UEP8_EPSTALL_POSN                        equ 0000h
UEP8_EPSTALL_POSITION                    equ 0000h
UEP8_EPSTALL_SIZE                        equ 0001h
UEP8_EPSTALL_LENGTH                      equ 0001h
UEP8_EPSTALL_MASK                        equ 0001h
UEP8_EPINEN_POSN                         equ 0001h
UEP8_EPINEN_POSITION                     equ 0001h
UEP8_EPINEN_SIZE                         equ 0001h
UEP8_EPINEN_LENGTH                       equ 0001h
UEP8_EPINEN_MASK                         equ 0002h
UEP8_EPOUTEN_POSN                        equ 0002h
UEP8_EPOUTEN_POSITION                    equ 0002h
UEP8_EPOUTEN_SIZE                        equ 0001h
UEP8_EPOUTEN_LENGTH                      equ 0001h
UEP8_EPOUTEN_MASK                        equ 0004h
UEP8_EPCONDIS_POSN                       equ 0003h
UEP8_EPCONDIS_POSITION                   equ 0003h
UEP8_EPCONDIS_SIZE                       equ 0001h
UEP8_EPCONDIS_LENGTH                     equ 0001h
UEP8_EPCONDIS_MASK                       equ 0008h
UEP8_EPHSHK_POSN                         equ 0004h
UEP8_EPHSHK_POSITION                     equ 0004h
UEP8_EPHSHK_SIZE                         equ 0001h
UEP8_EPHSHK_LENGTH                       equ 0001h
UEP8_EPHSHK_MASK                         equ 0010h
UEP8_EPSTALL8_POSN                       equ 0000h
UEP8_EPSTALL8_POSITION                   equ 0000h
UEP8_EPSTALL8_SIZE                       equ 0001h
UEP8_EPSTALL8_LENGTH                     equ 0001h
UEP8_EPSTALL8_MASK                       equ 0001h
UEP8_EPINEN8_POSN                        equ 0001h
UEP8_EPINEN8_POSITION                    equ 0001h
UEP8_EPINEN8_SIZE                        equ 0001h
UEP8_EPINEN8_LENGTH                      equ 0001h
UEP8_EPINEN8_MASK                        equ 0002h
UEP8_EPOUTEN8_POSN                       equ 0002h
UEP8_EPOUTEN8_POSITION                   equ 0002h
UEP8_EPOUTEN8_SIZE                       equ 0001h
UEP8_EPOUTEN8_LENGTH                     equ 0001h
UEP8_EPOUTEN8_MASK                       equ 0004h
UEP8_EPCONDIS8_POSN                      equ 0003h
UEP8_EPCONDIS8_POSITION                  equ 0003h
UEP8_EPCONDIS8_SIZE                      equ 0001h
UEP8_EPCONDIS8_LENGTH                    equ 0001h
UEP8_EPCONDIS8_MASK                      equ 0008h
UEP8_EPHSHK8_POSN                        equ 0004h
UEP8_EPHSHK8_POSITION                    equ 0004h
UEP8_EPHSHK8_SIZE                        equ 0001h
UEP8_EPHSHK8_LENGTH                      equ 0001h
UEP8_EPHSHK8_MASK                        equ 0010h

// Register: UEP9
#define UEP9 UEP9
UEP9                                     equ 0F73h
// bitfield definitions
UEP9_EPSTALL_POSN                        equ 0000h
UEP9_EPSTALL_POSITION                    equ 0000h
UEP9_EPSTALL_SIZE                        equ 0001h
UEP9_EPSTALL_LENGTH                      equ 0001h
UEP9_EPSTALL_MASK                        equ 0001h
UEP9_EPINEN_POSN                         equ 0001h
UEP9_EPINEN_POSITION                     equ 0001h
UEP9_EPINEN_SIZE                         equ 0001h
UEP9_EPINEN_LENGTH                       equ 0001h
UEP9_EPINEN_MASK                         equ 0002h
UEP9_EPOUTEN_POSN                        equ 0002h
UEP9_EPOUTEN_POSITION                    equ 0002h
UEP9_EPOUTEN_SIZE                        equ 0001h
UEP9_EPOUTEN_LENGTH                      equ 0001h
UEP9_EPOUTEN_MASK                        equ 0004h
UEP9_EPCONDIS_POSN                       equ 0003h
UEP9_EPCONDIS_POSITION                   equ 0003h
UEP9_EPCONDIS_SIZE                       equ 0001h
UEP9_EPCONDIS_LENGTH                     equ 0001h
UEP9_EPCONDIS_MASK                       equ 0008h
UEP9_EPHSHK_POSN                         equ 0004h
UEP9_EPHSHK_POSITION                     equ 0004h
UEP9_EPHSHK_SIZE                         equ 0001h
UEP9_EPHSHK_LENGTH                       equ 0001h
UEP9_EPHSHK_MASK                         equ 0010h
UEP9_EPSTALL9_POSN                       equ 0000h
UEP9_EPSTALL9_POSITION                   equ 0000h
UEP9_EPSTALL9_SIZE                       equ 0001h
UEP9_EPSTALL9_LENGTH                     equ 0001h
UEP9_EPSTALL9_MASK                       equ 0001h
UEP9_EPINEN9_POSN                        equ 0001h
UEP9_EPINEN9_POSITION                    equ 0001h
UEP9_EPINEN9_SIZE                        equ 0001h
UEP9_EPINEN9_LENGTH                      equ 0001h
UEP9_EPINEN9_MASK                        equ 0002h
UEP9_EPOUTEN9_POSN                       equ 0002h
UEP9_EPOUTEN9_POSITION                   equ 0002h
UEP9_EPOUTEN9_SIZE                       equ 0001h
UEP9_EPOUTEN9_LENGTH                     equ 0001h
UEP9_EPOUTEN9_MASK                       equ 0004h
UEP9_EPCONDIS9_POSN                      equ 0003h
UEP9_EPCONDIS9_POSITION                  equ 0003h
UEP9_EPCONDIS9_SIZE                      equ 0001h
UEP9_EPCONDIS9_LENGTH                    equ 0001h
UEP9_EPCONDIS9_MASK                      equ 0008h
UEP9_EPHSHK9_POSN                        equ 0004h
UEP9_EPHSHK9_POSITION                    equ 0004h
UEP9_EPHSHK9_SIZE                        equ 0001h
UEP9_EPHSHK9_LENGTH                      equ 0001h
UEP9_EPHSHK9_MASK                        equ 0010h

// Register: UEP10
#define UEP10 UEP10
UEP10                                    equ 0F74h
// bitfield definitions
UEP10_EPSTALL_POSN                       equ 0000h
UEP10_EPSTALL_POSITION                   equ 0000h
UEP10_EPSTALL_SIZE                       equ 0001h
UEP10_EPSTALL_LENGTH                     equ 0001h
UEP10_EPSTALL_MASK                       equ 0001h
UEP10_EPINEN_POSN                        equ 0001h
UEP10_EPINEN_POSITION                    equ 0001h
UEP10_EPINEN_SIZE                        equ 0001h
UEP10_EPINEN_LENGTH                      equ 0001h
UEP10_EPINEN_MASK                        equ 0002h
UEP10_EPOUTEN_POSN                       equ 0002h
UEP10_EPOUTEN_POSITION                   equ 0002h
UEP10_EPOUTEN_SIZE                       equ 0001h
UEP10_EPOUTEN_LENGTH                     equ 0001h
UEP10_EPOUTEN_MASK                       equ 0004h
UEP10_EPCONDIS_POSN                      equ 0003h
UEP10_EPCONDIS_POSITION                  equ 0003h
UEP10_EPCONDIS_SIZE                      equ 0001h
UEP10_EPCONDIS_LENGTH                    equ 0001h
UEP10_EPCONDIS_MASK                      equ 0008h
UEP10_EPHSHK_POSN                        equ 0004h
UEP10_EPHSHK_POSITION                    equ 0004h
UEP10_EPHSHK_SIZE                        equ 0001h
UEP10_EPHSHK_LENGTH                      equ 0001h
UEP10_EPHSHK_MASK                        equ 0010h
UEP10_EPSTALL10_POSN                     equ 0000h
UEP10_EPSTALL10_POSITION                 equ 0000h
UEP10_EPSTALL10_SIZE                     equ 0001h
UEP10_EPSTALL10_LENGTH                   equ 0001h
UEP10_EPSTALL10_MASK                     equ 0001h
UEP10_EPINEN10_POSN                      equ 0001h
UEP10_EPINEN10_POSITION                  equ 0001h
UEP10_EPINEN10_SIZE                      equ 0001h
UEP10_EPINEN10_LENGTH                    equ 0001h
UEP10_EPINEN10_MASK                      equ 0002h
UEP10_EPOUTEN10_POSN                     equ 0002h
UEP10_EPOUTEN10_POSITION                 equ 0002h
UEP10_EPOUTEN10_SIZE                     equ 0001h
UEP10_EPOUTEN10_LENGTH                   equ 0001h
UEP10_EPOUTEN10_MASK                     equ 0004h
UEP10_EPCONDIS10_POSN                    equ 0003h
UEP10_EPCONDIS10_POSITION                equ 0003h
UEP10_EPCONDIS10_SIZE                    equ 0001h
UEP10_EPCONDIS10_LENGTH                  equ 0001h
UEP10_EPCONDIS10_MASK                    equ 0008h
UEP10_EPHSHK10_POSN                      equ 0004h
UEP10_EPHSHK10_POSITION                  equ 0004h
UEP10_EPHSHK10_SIZE                      equ 0001h
UEP10_EPHSHK10_LENGTH                    equ 0001h
UEP10_EPHSHK10_MASK                      equ 0010h

// Register: UEP11
#define UEP11 UEP11
UEP11                                    equ 0F75h
// bitfield definitions
UEP11_EPSTALL_POSN                       equ 0000h
UEP11_EPSTALL_POSITION                   equ 0000h
UEP11_EPSTALL_SIZE                       equ 0001h
UEP11_EPSTALL_LENGTH                     equ 0001h
UEP11_EPSTALL_MASK                       equ 0001h
UEP11_EPINEN_POSN                        equ 0001h
UEP11_EPINEN_POSITION                    equ 0001h
UEP11_EPINEN_SIZE                        equ 0001h
UEP11_EPINEN_LENGTH                      equ 0001h
UEP11_EPINEN_MASK                        equ 0002h
UEP11_EPOUTEN_POSN                       equ 0002h
UEP11_EPOUTEN_POSITION                   equ 0002h
UEP11_EPOUTEN_SIZE                       equ 0001h
UEP11_EPOUTEN_LENGTH                     equ 0001h
UEP11_EPOUTEN_MASK                       equ 0004h
UEP11_EPCONDIS_POSN                      equ 0003h
UEP11_EPCONDIS_POSITION                  equ 0003h
UEP11_EPCONDIS_SIZE                      equ 0001h
UEP11_EPCONDIS_LENGTH                    equ 0001h
UEP11_EPCONDIS_MASK                      equ 0008h
UEP11_EPHSHK_POSN                        equ 0004h
UEP11_EPHSHK_POSITION                    equ 0004h
UEP11_EPHSHK_SIZE                        equ 0001h
UEP11_EPHSHK_LENGTH                      equ 0001h
UEP11_EPHSHK_MASK                        equ 0010h
UEP11_EPSTALL11_POSN                     equ 0000h
UEP11_EPSTALL11_POSITION                 equ 0000h
UEP11_EPSTALL11_SIZE                     equ 0001h
UEP11_EPSTALL11_LENGTH                   equ 0001h
UEP11_EPSTALL11_MASK                     equ 0001h
UEP11_EPINEN11_POSN                      equ 0001h
UEP11_EPINEN11_POSITION                  equ 0001h
UEP11_EPINEN11_SIZE                      equ 0001h
UEP11_EPINEN11_LENGTH                    equ 0001h
UEP11_EPINEN11_MASK                      equ 0002h
UEP11_EPOUTEN11_POSN                     equ 0002h
UEP11_EPOUTEN11_POSITION                 equ 0002h
UEP11_EPOUTEN11_SIZE                     equ 0001h
UEP11_EPOUTEN11_LENGTH                   equ 0001h
UEP11_EPOUTEN11_MASK                     equ 0004h
UEP11_EPCONDIS11_POSN                    equ 0003h
UEP11_EPCONDIS11_POSITION                equ 0003h
UEP11_EPCONDIS11_SIZE                    equ 0001h
UEP11_EPCONDIS11_LENGTH                  equ 0001h
UEP11_EPCONDIS11_MASK                    equ 0008h
UEP11_EPHSHK11_POSN                      equ 0004h
UEP11_EPHSHK11_POSITION                  equ 0004h
UEP11_EPHSHK11_SIZE                      equ 0001h
UEP11_EPHSHK11_LENGTH                    equ 0001h
UEP11_EPHSHK11_MASK                      equ 0010h

// Register: UEP12
#define UEP12 UEP12
UEP12                                    equ 0F76h
// bitfield definitions
UEP12_EPSTALL_POSN                       equ 0000h
UEP12_EPSTALL_POSITION                   equ 0000h
UEP12_EPSTALL_SIZE                       equ 0001h
UEP12_EPSTALL_LENGTH                     equ 0001h
UEP12_EPSTALL_MASK                       equ 0001h
UEP12_EPINEN_POSN                        equ 0001h
UEP12_EPINEN_POSITION                    equ 0001h
UEP12_EPINEN_SIZE                        equ 0001h
UEP12_EPINEN_LENGTH                      equ 0001h
UEP12_EPINEN_MASK                        equ 0002h
UEP12_EPOUTEN_POSN                       equ 0002h
UEP12_EPOUTEN_POSITION                   equ 0002h
UEP12_EPOUTEN_SIZE                       equ 0001h
UEP12_EPOUTEN_LENGTH                     equ 0001h
UEP12_EPOUTEN_MASK                       equ 0004h
UEP12_EPCONDIS_POSN                      equ 0003h
UEP12_EPCONDIS_POSITION                  equ 0003h
UEP12_EPCONDIS_SIZE                      equ 0001h
UEP12_EPCONDIS_LENGTH                    equ 0001h
UEP12_EPCONDIS_MASK                      equ 0008h
UEP12_EPHSHK_POSN                        equ 0004h
UEP12_EPHSHK_POSITION                    equ 0004h
UEP12_EPHSHK_SIZE                        equ 0001h
UEP12_EPHSHK_LENGTH                      equ 0001h
UEP12_EPHSHK_MASK                        equ 0010h
UEP12_EPSTALL12_POSN                     equ 0000h
UEP12_EPSTALL12_POSITION                 equ 0000h
UEP12_EPSTALL12_SIZE                     equ 0001h
UEP12_EPSTALL12_LENGTH                   equ 0001h
UEP12_EPSTALL12_MASK                     equ 0001h
UEP12_EPINEN12_POSN                      equ 0001h
UEP12_EPINEN12_POSITION                  equ 0001h
UEP12_EPINEN12_SIZE                      equ 0001h
UEP12_EPINEN12_LENGTH                    equ 0001h
UEP12_EPINEN12_MASK                      equ 0002h
UEP12_EPOUTEN12_POSN                     equ 0002h
UEP12_EPOUTEN12_POSITION                 equ 0002h
UEP12_EPOUTEN12_SIZE                     equ 0001h
UEP12_EPOUTEN12_LENGTH                   equ 0001h
UEP12_EPOUTEN12_MASK                     equ 0004h
UEP12_EPCONDIS12_POSN                    equ 0003h
UEP12_EPCONDIS12_POSITION                equ 0003h
UEP12_EPCONDIS12_SIZE                    equ 0001h
UEP12_EPCONDIS12_LENGTH                  equ 0001h
UEP12_EPCONDIS12_MASK                    equ 0008h
UEP12_EPHSHK12_POSN                      equ 0004h
UEP12_EPHSHK12_POSITION                  equ 0004h
UEP12_EPHSHK12_SIZE                      equ 0001h
UEP12_EPHSHK12_LENGTH                    equ 0001h
UEP12_EPHSHK12_MASK                      equ 0010h

// Register: UEP13
#define UEP13 UEP13
UEP13                                    equ 0F77h
// bitfield definitions
UEP13_EPSTALL_POSN                       equ 0000h
UEP13_EPSTALL_POSITION                   equ 0000h
UEP13_EPSTALL_SIZE                       equ 0001h
UEP13_EPSTALL_LENGTH                     equ 0001h
UEP13_EPSTALL_MASK                       equ 0001h
UEP13_EPINEN_POSN                        equ 0001h
UEP13_EPINEN_POSITION                    equ 0001h
UEP13_EPINEN_SIZE                        equ 0001h
UEP13_EPINEN_LENGTH                      equ 0001h
UEP13_EPINEN_MASK                        equ 0002h
UEP13_EPOUTEN_POSN                       equ 0002h
UEP13_EPOUTEN_POSITION                   equ 0002h
UEP13_EPOUTEN_SIZE                       equ 0001h
UEP13_EPOUTEN_LENGTH                     equ 0001h
UEP13_EPOUTEN_MASK                       equ 0004h
UEP13_EPCONDIS_POSN                      equ 0003h
UEP13_EPCONDIS_POSITION                  equ 0003h
UEP13_EPCONDIS_SIZE                      equ 0001h
UEP13_EPCONDIS_LENGTH                    equ 0001h
UEP13_EPCONDIS_MASK                      equ 0008h
UEP13_EPHSHK_POSN                        equ 0004h
UEP13_EPHSHK_POSITION                    equ 0004h
UEP13_EPHSHK_SIZE                        equ 0001h
UEP13_EPHSHK_LENGTH                      equ 0001h
UEP13_EPHSHK_MASK                        equ 0010h
UEP13_EPSTALL13_POSN                     equ 0000h
UEP13_EPSTALL13_POSITION                 equ 0000h
UEP13_EPSTALL13_SIZE                     equ 0001h
UEP13_EPSTALL13_LENGTH                   equ 0001h
UEP13_EPSTALL13_MASK                     equ 0001h
UEP13_EPINEN13_POSN                      equ 0001h
UEP13_EPINEN13_POSITION                  equ 0001h
UEP13_EPINEN13_SIZE                      equ 0001h
UEP13_EPINEN13_LENGTH                    equ 0001h
UEP13_EPINEN13_MASK                      equ 0002h
UEP13_EPOUTEN13_POSN                     equ 0002h
UEP13_EPOUTEN13_POSITION                 equ 0002h
UEP13_EPOUTEN13_SIZE                     equ 0001h
UEP13_EPOUTEN13_LENGTH                   equ 0001h
UEP13_EPOUTEN13_MASK                     equ 0004h
UEP13_EPCONDIS13_POSN                    equ 0003h
UEP13_EPCONDIS13_POSITION                equ 0003h
UEP13_EPCONDIS13_SIZE                    equ 0001h
UEP13_EPCONDIS13_LENGTH                  equ 0001h
UEP13_EPCONDIS13_MASK                    equ 0008h
UEP13_EPHSHK13_POSN                      equ 0004h
UEP13_EPHSHK13_POSITION                  equ 0004h
UEP13_EPHSHK13_SIZE                      equ 0001h
UEP13_EPHSHK13_LENGTH                    equ 0001h
UEP13_EPHSHK13_MASK                      equ 0010h

// Register: UEP14
#define UEP14 UEP14
UEP14                                    equ 0F78h
// bitfield definitions
UEP14_EPSTALL_POSN                       equ 0000h
UEP14_EPSTALL_POSITION                   equ 0000h
UEP14_EPSTALL_SIZE                       equ 0001h
UEP14_EPSTALL_LENGTH                     equ 0001h
UEP14_EPSTALL_MASK                       equ 0001h
UEP14_EPINEN_POSN                        equ 0001h
UEP14_EPINEN_POSITION                    equ 0001h
UEP14_EPINEN_SIZE                        equ 0001h
UEP14_EPINEN_LENGTH                      equ 0001h
UEP14_EPINEN_MASK                        equ 0002h
UEP14_EPOUTEN_POSN                       equ 0002h
UEP14_EPOUTEN_POSITION                   equ 0002h
UEP14_EPOUTEN_SIZE                       equ 0001h
UEP14_EPOUTEN_LENGTH                     equ 0001h
UEP14_EPOUTEN_MASK                       equ 0004h
UEP14_EPCONDIS_POSN                      equ 0003h
UEP14_EPCONDIS_POSITION                  equ 0003h
UEP14_EPCONDIS_SIZE                      equ 0001h
UEP14_EPCONDIS_LENGTH                    equ 0001h
UEP14_EPCONDIS_MASK                      equ 0008h
UEP14_EPHSHK_POSN                        equ 0004h
UEP14_EPHSHK_POSITION                    equ 0004h
UEP14_EPHSHK_SIZE                        equ 0001h
UEP14_EPHSHK_LENGTH                      equ 0001h
UEP14_EPHSHK_MASK                        equ 0010h
UEP14_EPSTALL14_POSN                     equ 0000h
UEP14_EPSTALL14_POSITION                 equ 0000h
UEP14_EPSTALL14_SIZE                     equ 0001h
UEP14_EPSTALL14_LENGTH                   equ 0001h
UEP14_EPSTALL14_MASK                     equ 0001h
UEP14_EPINEN14_POSN                      equ 0001h
UEP14_EPINEN14_POSITION                  equ 0001h
UEP14_EPINEN14_SIZE                      equ 0001h
UEP14_EPINEN14_LENGTH                    equ 0001h
UEP14_EPINEN14_MASK                      equ 0002h
UEP14_EPOUTEN14_POSN                     equ 0002h
UEP14_EPOUTEN14_POSITION                 equ 0002h
UEP14_EPOUTEN14_SIZE                     equ 0001h
UEP14_EPOUTEN14_LENGTH                   equ 0001h
UEP14_EPOUTEN14_MASK                     equ 0004h
UEP14_EPCONDIS14_POSN                    equ 0003h
UEP14_EPCONDIS14_POSITION                equ 0003h
UEP14_EPCONDIS14_SIZE                    equ 0001h
UEP14_EPCONDIS14_LENGTH                  equ 0001h
UEP14_EPCONDIS14_MASK                    equ 0008h
UEP14_EPHSHK14_POSN                      equ 0004h
UEP14_EPHSHK14_POSITION                  equ 0004h
UEP14_EPHSHK14_SIZE                      equ 0001h
UEP14_EPHSHK14_LENGTH                    equ 0001h
UEP14_EPHSHK14_MASK                      equ 0010h

// Register: UEP15
#define UEP15 UEP15
UEP15                                    equ 0F79h
// bitfield definitions
UEP15_EPSTALL_POSN                       equ 0000h
UEP15_EPSTALL_POSITION                   equ 0000h
UEP15_EPSTALL_SIZE                       equ 0001h
UEP15_EPSTALL_LENGTH                     equ 0001h
UEP15_EPSTALL_MASK                       equ 0001h
UEP15_EPINEN_POSN                        equ 0001h
UEP15_EPINEN_POSITION                    equ 0001h
UEP15_EPINEN_SIZE                        equ 0001h
UEP15_EPINEN_LENGTH                      equ 0001h
UEP15_EPINEN_MASK                        equ 0002h
UEP15_EPOUTEN_POSN                       equ 0002h
UEP15_EPOUTEN_POSITION                   equ 0002h
UEP15_EPOUTEN_SIZE                       equ 0001h
UEP15_EPOUTEN_LENGTH                     equ 0001h
UEP15_EPOUTEN_MASK                       equ 0004h
UEP15_EPCONDIS_POSN                      equ 0003h
UEP15_EPCONDIS_POSITION                  equ 0003h
UEP15_EPCONDIS_SIZE                      equ 0001h
UEP15_EPCONDIS_LENGTH                    equ 0001h
UEP15_EPCONDIS_MASK                      equ 0008h
UEP15_EPHSHK_POSN                        equ 0004h
UEP15_EPHSHK_POSITION                    equ 0004h
UEP15_EPHSHK_SIZE                        equ 0001h
UEP15_EPHSHK_LENGTH                      equ 0001h
UEP15_EPHSHK_MASK                        equ 0010h
UEP15_EPSTALL15_POSN                     equ 0000h
UEP15_EPSTALL15_POSITION                 equ 0000h
UEP15_EPSTALL15_SIZE                     equ 0001h
UEP15_EPSTALL15_LENGTH                   equ 0001h
UEP15_EPSTALL15_MASK                     equ 0001h
UEP15_EPINEN15_POSN                      equ 0001h
UEP15_EPINEN15_POSITION                  equ 0001h
UEP15_EPINEN15_SIZE                      equ 0001h
UEP15_EPINEN15_LENGTH                    equ 0001h
UEP15_EPINEN15_MASK                      equ 0002h
UEP15_EPOUTEN15_POSN                     equ 0002h
UEP15_EPOUTEN15_POSITION                 equ 0002h
UEP15_EPOUTEN15_SIZE                     equ 0001h
UEP15_EPOUTEN15_LENGTH                   equ 0001h
UEP15_EPOUTEN15_MASK                     equ 0004h
UEP15_EPCONDIS15_POSN                    equ 0003h
UEP15_EPCONDIS15_POSITION                equ 0003h
UEP15_EPCONDIS15_SIZE                    equ 0001h
UEP15_EPCONDIS15_LENGTH                  equ 0001h
UEP15_EPCONDIS15_MASK                    equ 0008h
UEP15_EPHSHK15_POSN                      equ 0004h
UEP15_EPHSHK15_POSITION                  equ 0004h
UEP15_EPHSHK15_SIZE                      equ 0001h
UEP15_EPHSHK15_LENGTH                    equ 0001h
UEP15_EPHSHK15_MASK                      equ 0010h

// Register: SLRCON
#define SLRCON SLRCON
SLRCON                                   equ 0F7Ah
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
SLRCON_SLRD_POSN                         equ 0003h
SLRCON_SLRD_POSITION                     equ 0003h
SLRCON_SLRD_SIZE                         equ 0001h
SLRCON_SLRD_LENGTH                       equ 0001h
SLRCON_SLRD_MASK                         equ 0008h
SLRCON_SLRE_POSN                         equ 0004h
SLRCON_SLRE_POSITION                     equ 0004h
SLRCON_SLRE_SIZE                         equ 0001h
SLRCON_SLRE_LENGTH                       equ 0001h
SLRCON_SLRE_MASK                         equ 0010h

// Register: VREFCON2
#define VREFCON2 VREFCON2
VREFCON2                                 equ 0F7Bh
// bitfield definitions
VREFCON2_DACR_POSN                       equ 0000h
VREFCON2_DACR_POSITION                   equ 0000h
VREFCON2_DACR_SIZE                       equ 0005h
VREFCON2_DACR_LENGTH                     equ 0005h
VREFCON2_DACR_MASK                       equ 001Fh
VREFCON2_DACR0_POSN                      equ 0000h
VREFCON2_DACR0_POSITION                  equ 0000h
VREFCON2_DACR0_SIZE                      equ 0001h
VREFCON2_DACR0_LENGTH                    equ 0001h
VREFCON2_DACR0_MASK                      equ 0001h
VREFCON2_DACR1_POSN                      equ 0001h
VREFCON2_DACR1_POSITION                  equ 0001h
VREFCON2_DACR1_SIZE                      equ 0001h
VREFCON2_DACR1_LENGTH                    equ 0001h
VREFCON2_DACR1_MASK                      equ 0002h
VREFCON2_DACR2_POSN                      equ 0002h
VREFCON2_DACR2_POSITION                  equ 0002h
VREFCON2_DACR2_SIZE                      equ 0001h
VREFCON2_DACR2_LENGTH                    equ 0001h
VREFCON2_DACR2_MASK                      equ 0004h
VREFCON2_DACR3_POSN                      equ 0003h
VREFCON2_DACR3_POSITION                  equ 0003h
VREFCON2_DACR3_SIZE                      equ 0001h
VREFCON2_DACR3_LENGTH                    equ 0001h
VREFCON2_DACR3_MASK                      equ 0008h
VREFCON2_DACR4_POSN                      equ 0004h
VREFCON2_DACR4_POSITION                  equ 0004h
VREFCON2_DACR4_SIZE                      equ 0001h
VREFCON2_DACR4_LENGTH                    equ 0001h
VREFCON2_DACR4_MASK                      equ 0010h

// Register: VREFCON1
#define VREFCON1 VREFCON1
VREFCON1                                 equ 0F7Ch
// bitfield definitions
VREFCON1_DACNSS_POSN                     equ 0000h
VREFCON1_DACNSS_POSITION                 equ 0000h
VREFCON1_DACNSS_SIZE                     equ 0001h
VREFCON1_DACNSS_LENGTH                   equ 0001h
VREFCON1_DACNSS_MASK                     equ 0001h
VREFCON1_DACPSS_POSN                     equ 0002h
VREFCON1_DACPSS_POSITION                 equ 0002h
VREFCON1_DACPSS_SIZE                     equ 0002h
VREFCON1_DACPSS_LENGTH                   equ 0002h
VREFCON1_DACPSS_MASK                     equ 000Ch
VREFCON1_DACOE_POSN                      equ 0005h
VREFCON1_DACOE_POSITION                  equ 0005h
VREFCON1_DACOE_SIZE                      equ 0001h
VREFCON1_DACOE_LENGTH                    equ 0001h
VREFCON1_DACOE_MASK                      equ 0020h
VREFCON1_DACLPS_POSN                     equ 0006h
VREFCON1_DACLPS_POSITION                 equ 0006h
VREFCON1_DACLPS_SIZE                     equ 0001h
VREFCON1_DACLPS_LENGTH                   equ 0001h
VREFCON1_DACLPS_MASK                     equ 0040h
VREFCON1_DACEN_POSN                      equ 0007h
VREFCON1_DACEN_POSITION                  equ 0007h
VREFCON1_DACEN_SIZE                      equ 0001h
VREFCON1_DACEN_LENGTH                    equ 0001h
VREFCON1_DACEN_MASK                      equ 0080h
VREFCON1_DACPSS0_POSN                    equ 0002h
VREFCON1_DACPSS0_POSITION                equ 0002h
VREFCON1_DACPSS0_SIZE                    equ 0001h
VREFCON1_DACPSS0_LENGTH                  equ 0001h
VREFCON1_DACPSS0_MASK                    equ 0004h
VREFCON1_DACPSS1_POSN                    equ 0003h
VREFCON1_DACPSS1_POSITION                equ 0003h
VREFCON1_DACPSS1_SIZE                    equ 0001h
VREFCON1_DACPSS1_LENGTH                  equ 0001h
VREFCON1_DACPSS1_MASK                    equ 0008h

// Register: VREFCON0
#define VREFCON0 VREFCON0
VREFCON0                                 equ 0F7Dh
// bitfield definitions
VREFCON0_TSRNG_POSN                      equ 0002h
VREFCON0_TSRNG_POSITION                  equ 0002h
VREFCON0_TSRNG_SIZE                      equ 0001h
VREFCON0_TSRNG_LENGTH                    equ 0001h
VREFCON0_TSRNG_MASK                      equ 0004h
VREFCON0_TSEN_POSN                       equ 0003h
VREFCON0_TSEN_POSITION                   equ 0003h
VREFCON0_TSEN_SIZE                       equ 0001h
VREFCON0_TSEN_LENGTH                     equ 0001h
VREFCON0_TSEN_MASK                       equ 0008h
VREFCON0_FVRS_POSN                       equ 0004h
VREFCON0_FVRS_POSITION                   equ 0004h
VREFCON0_FVRS_SIZE                       equ 0002h
VREFCON0_FVRS_LENGTH                     equ 0002h
VREFCON0_FVRS_MASK                       equ 0030h
VREFCON0_FVRST_POSN                      equ 0006h
VREFCON0_FVRST_POSITION                  equ 0006h
VREFCON0_FVRST_SIZE                      equ 0001h
VREFCON0_FVRST_LENGTH                    equ 0001h
VREFCON0_FVRST_MASK                      equ 0040h
VREFCON0_FVREN_POSN                      equ 0007h
VREFCON0_FVREN_POSITION                  equ 0007h
VREFCON0_FVREN_SIZE                      equ 0001h
VREFCON0_FVREN_LENGTH                    equ 0001h
VREFCON0_FVREN_MASK                      equ 0080h
VREFCON0_FVRS0_POSN                      equ 0004h
VREFCON0_FVRS0_POSITION                  equ 0004h
VREFCON0_FVRS0_SIZE                      equ 0001h
VREFCON0_FVRS0_LENGTH                    equ 0001h
VREFCON0_FVRS0_MASK                      equ 0010h
VREFCON0_FVRS1_POSN                      equ 0005h
VREFCON0_FVRS1_POSITION                  equ 0005h
VREFCON0_FVRS1_SIZE                      equ 0001h
VREFCON0_FVRS1_LENGTH                    equ 0001h
VREFCON0_FVRS1_MASK                      equ 0020h

// Register: PMD0
#define PMD0 PMD0
PMD0                                     equ 0F7Eh
// bitfield definitions
PMD0_TMR1MD_POSN                         equ 0000h
PMD0_TMR1MD_POSITION                     equ 0000h
PMD0_TMR1MD_SIZE                         equ 0001h
PMD0_TMR1MD_LENGTH                       equ 0001h
PMD0_TMR1MD_MASK                         equ 0001h
PMD0_TMR2MD_POSN                         equ 0001h
PMD0_TMR2MD_POSITION                     equ 0001h
PMD0_TMR2MD_SIZE                         equ 0001h
PMD0_TMR2MD_LENGTH                       equ 0001h
PMD0_TMR2MD_MASK                         equ 0002h
PMD0_TMR3MD_POSN                         equ 0002h
PMD0_TMR3MD_POSITION                     equ 0002h
PMD0_TMR3MD_SIZE                         equ 0001h
PMD0_TMR3MD_LENGTH                       equ 0001h
PMD0_TMR3MD_MASK                         equ 0004h
PMD0_ACTMD_POSN                          equ 0004h
PMD0_ACTMD_POSITION                      equ 0004h
PMD0_ACTMD_SIZE                          equ 0001h
PMD0_ACTMD_LENGTH                        equ 0001h
PMD0_ACTMD_MASK                          equ 0010h
PMD0_USBMD_POSN                          equ 0005h
PMD0_USBMD_POSITION                      equ 0005h
PMD0_USBMD_SIZE                          equ 0001h
PMD0_USBMD_LENGTH                        equ 0001h
PMD0_USBMD_MASK                          equ 0020h
PMD0_UARTMD_POSN                         equ 0006h
PMD0_UARTMD_POSITION                     equ 0006h
PMD0_UARTMD_SIZE                         equ 0001h
PMD0_UARTMD_LENGTH                       equ 0001h
PMD0_UARTMD_MASK                         equ 0040h
PMD0_STMD_POSN                           equ 0004h
PMD0_STMD_POSITION                       equ 0004h
PMD0_STMD_SIZE                           equ 0001h
PMD0_STMD_LENGTH                         equ 0001h
PMD0_STMD_MASK                           equ 0010h
PMD0_UART1MD_POSN                        equ 0006h
PMD0_UART1MD_POSITION                    equ 0006h
PMD0_UART1MD_SIZE                        equ 0001h
PMD0_UART1MD_LENGTH                      equ 0001h
PMD0_UART1MD_MASK                        equ 0040h
PMD0_SPI1MD_POSN                         equ 0001h
PMD0_SPI1MD_POSITION                     equ 0001h
PMD0_SPI1MD_SIZE                         equ 0001h
PMD0_SPI1MD_LENGTH                       equ 0001h
PMD0_SPI1MD_MASK                         equ 0002h
PMD0_SPI2MD_POSN                         equ 0002h
PMD0_SPI2MD_POSITION                     equ 0002h
PMD0_SPI2MD_SIZE                         equ 0001h
PMD0_SPI2MD_LENGTH                       equ 0001h
PMD0_SPI2MD_MASK                         equ 0004h

// Register: PMD1
#define PMD1 PMD1
PMD1                                     equ 0F7Fh
// bitfield definitions
PMD1_CCP1MD_POSN                         equ 0000h
PMD1_CCP1MD_POSITION                     equ 0000h
PMD1_CCP1MD_SIZE                         equ 0001h
PMD1_CCP1MD_LENGTH                       equ 0001h
PMD1_CCP1MD_MASK                         equ 0001h
PMD1_CCP2MD_POSN                         equ 0001h
PMD1_CCP2MD_POSITION                     equ 0001h
PMD1_CCP2MD_SIZE                         equ 0001h
PMD1_CCP2MD_LENGTH                       equ 0001h
PMD1_CCP2MD_MASK                         equ 0002h
PMD1_ADCMD_POSN                          equ 0002h
PMD1_ADCMD_POSITION                      equ 0002h
PMD1_ADCMD_SIZE                          equ 0001h
PMD1_ADCMD_LENGTH                        equ 0001h
PMD1_ADCMD_MASK                          equ 0004h
PMD1_CMP1MD_POSN                         equ 0003h
PMD1_CMP1MD_POSITION                     equ 0003h
PMD1_CMP1MD_SIZE                         equ 0001h
PMD1_CMP1MD_LENGTH                       equ 0001h
PMD1_CMP1MD_MASK                         equ 0008h
PMD1_CMP2MD_POSN                         equ 0004h
PMD1_CMP2MD_POSITION                     equ 0004h
PMD1_CMP2MD_SIZE                         equ 0001h
PMD1_CMP2MD_LENGTH                       equ 0001h
PMD1_CMP2MD_MASK                         equ 0010h
PMD1_CTMUMD_POSN                         equ 0005h
PMD1_CTMUMD_POSITION                     equ 0005h
PMD1_CTMUMD_SIZE                         equ 0001h
PMD1_CTMUMD_LENGTH                       equ 0001h
PMD1_CTMUMD_MASK                         equ 0020h
PMD1_MSSPMD_POSN                         equ 0006h
PMD1_MSSPMD_POSITION                     equ 0006h
PMD1_MSSPMD_SIZE                         equ 0001h
PMD1_MSSPMD_LENGTH                       equ 0001h
PMD1_MSSPMD_MASK                         equ 0040h
PMD1_SSP1MD_POSN                         equ 0006h
PMD1_SSP1MD_POSITION                     equ 0006h
PMD1_SSP1MD_SIZE                         equ 0001h
PMD1_SSP1MD_LENGTH                       equ 0001h
PMD1_SSP1MD_MASK                         equ 0040h
PMD1_MSSP1MD_POSN                        equ 0006h
PMD1_MSSP1MD_POSITION                    equ 0006h
PMD1_MSSP1MD_SIZE                        equ 0001h
PMD1_MSSP1MD_LENGTH                      equ 0001h
PMD1_MSSP1MD_MASK                        equ 0040h
PMD1_EMBMD_POSN                          equ 0000h
PMD1_EMBMD_POSITION                      equ 0000h
PMD1_EMBMD_SIZE                          equ 0001h
PMD1_EMBMD_LENGTH                        equ 0001h
PMD1_EMBMD_MASK                          equ 0001h

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
PORTA_RA6_POSN                           equ 0006h
PORTA_RA6_POSITION                       equ 0006h
PORTA_RA6_SIZE                           equ 0001h
PORTA_RA6_LENGTH                         equ 0001h
PORTA_RA6_MASK                           equ 0040h
PORTA_RA7_POSN                           equ 0007h
PORTA_RA7_POSITION                       equ 0007h
PORTA_RA7_SIZE                           equ 0001h
PORTA_RA7_LENGTH                         equ 0001h
PORTA_RA7_MASK                           equ 0080h
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
PORTA_AN3_POSN                           equ 0003h
PORTA_AN3_POSITION                       equ 0003h
PORTA_AN3_SIZE                           equ 0001h
PORTA_AN3_LENGTH                         equ 0001h
PORTA_AN3_MASK                           equ 0008h
PORTA_T0CKI_POSN                         equ 0004h
PORTA_T0CKI_POSITION                     equ 0004h
PORTA_T0CKI_SIZE                         equ 0001h
PORTA_T0CKI_LENGTH                       equ 0001h
PORTA_T0CKI_MASK                         equ 0010h
PORTA_AN4_POSN                           equ 0005h
PORTA_AN4_POSITION                       equ 0005h
PORTA_AN4_SIZE                           equ 0001h
PORTA_AN4_LENGTH                         equ 0001h
PORTA_AN4_MASK                           equ 0020h
PORTA_OSC2_POSN                          equ 0006h
PORTA_OSC2_POSITION                      equ 0006h
PORTA_OSC2_SIZE                          equ 0001h
PORTA_OSC2_LENGTH                        equ 0001h
PORTA_OSC2_MASK                          equ 0040h
PORTA_VREFM_POSN                         equ 0002h
PORTA_VREFM_POSITION                     equ 0002h
PORTA_VREFM_SIZE                         equ 0001h
PORTA_VREFM_LENGTH                       equ 0001h
PORTA_VREFM_MASK                         equ 0004h
PORTA_VREFP_POSN                         equ 0003h
PORTA_VREFP_POSITION                     equ 0003h
PORTA_VREFP_SIZE                         equ 0001h
PORTA_VREFP_LENGTH                       equ 0001h
PORTA_VREFP_MASK                         equ 0008h
PORTA_LVDIN_POSN                         equ 0005h
PORTA_LVDIN_POSITION                     equ 0005h
PORTA_LVDIN_SIZE                         equ 0001h
PORTA_LVDIN_LENGTH                       equ 0001h
PORTA_LVDIN_MASK                         equ 0020h
PORTA_HLVDIN_POSN                        equ 0005h
PORTA_HLVDIN_POSITION                    equ 0005h
PORTA_HLVDIN_SIZE                        equ 0001h
PORTA_HLVDIN_LENGTH                      equ 0001h
PORTA_HLVDIN_MASK                        equ 0020h
PORTA_ULPWUIN_POSN                       equ 0000h
PORTA_ULPWUIN_POSITION                   equ 0000h
PORTA_ULPWUIN_SIZE                       equ 0001h
PORTA_ULPWUIN_LENGTH                     equ 0001h
PORTA_ULPWUIN_MASK                       equ 0001h
PORTA_RJPU_POSN                          equ 0007h
PORTA_RJPU_POSITION                      equ 0007h
PORTA_RJPU_SIZE                          equ 0001h
PORTA_RJPU_LENGTH                        equ 0001h
PORTA_RJPU_MASK                          equ 0080h

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 0F81h
// bitfield definitions
PORTB_RB0_POSN                           equ 0000h
PORTB_RB0_POSITION                       equ 0000h
PORTB_RB0_SIZE                           equ 0001h
PORTB_RB0_LENGTH                         equ 0001h
PORTB_RB0_MASK                           equ 0001h
PORTB_RB1_POSN                           equ 0001h
PORTB_RB1_POSITION                       equ 0001h
PORTB_RB1_SIZE                           equ 0001h
PORTB_RB1_LENGTH                         equ 0001h
PORTB_RB1_MASK                           equ 0002h
PORTB_RB2_POSN                           equ 0002h
PORTB_RB2_POSITION                       equ 0002h
PORTB_RB2_SIZE                           equ 0001h
PORTB_RB2_LENGTH                         equ 0001h
PORTB_RB2_MASK                           equ 0004h
PORTB_RB3_POSN                           equ 0003h
PORTB_RB3_POSITION                       equ 0003h
PORTB_RB3_SIZE                           equ 0001h
PORTB_RB3_LENGTH                         equ 0001h
PORTB_RB3_MASK                           equ 0008h
PORTB_RB4_POSN                           equ 0004h
PORTB_RB4_POSITION                       equ 0004h
PORTB_RB4_SIZE                           equ 0001h
PORTB_RB4_LENGTH                         equ 0001h
PORTB_RB4_MASK                           equ 0010h
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
PORTB_INT0_POSN                          equ 0000h
PORTB_INT0_POSITION                      equ 0000h
PORTB_INT0_SIZE                          equ 0001h
PORTB_INT0_LENGTH                        equ 0001h
PORTB_INT0_MASK                          equ 0001h
PORTB_INT1_POSN                          equ 0001h
PORTB_INT1_POSITION                      equ 0001h
PORTB_INT1_SIZE                          equ 0001h
PORTB_INT1_LENGTH                        equ 0001h
PORTB_INT1_MASK                          equ 0002h
PORTB_INT2_POSN                          equ 0002h
PORTB_INT2_POSITION                      equ 0002h
PORTB_INT2_SIZE                          equ 0001h
PORTB_INT2_LENGTH                        equ 0001h
PORTB_INT2_MASK                          equ 0004h
PORTB_PGM_POSN                           equ 0005h
PORTB_PGM_POSITION                       equ 0005h
PORTB_PGM_SIZE                           equ 0001h
PORTB_PGM_LENGTH                         equ 0001h
PORTB_PGM_MASK                           equ 0020h
PORTB_PGC_POSN                           equ 0006h
PORTB_PGC_POSITION                       equ 0006h
PORTB_PGC_SIZE                           equ 0001h
PORTB_PGC_LENGTH                         equ 0001h
PORTB_PGC_MASK                           equ 0040h
PORTB_PGD_POSN                           equ 0007h
PORTB_PGD_POSITION                       equ 0007h
PORTB_PGD_SIZE                           equ 0001h
PORTB_PGD_LENGTH                         equ 0001h
PORTB_PGD_MASK                           equ 0080h
PORTB_CCP2_PA2_POSN                      equ 0003h
PORTB_CCP2_PA2_POSITION                  equ 0003h
PORTB_CCP2_PA2_SIZE                      equ 0001h
PORTB_CCP2_PA2_LENGTH                    equ 0001h
PORTB_CCP2_PA2_MASK                      equ 0008h

// Register: PORTC
#define PORTC PORTC
PORTC                                    equ 0F82h
// bitfield definitions
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
PORTC_T1OSO_POSN                         equ 0000h
PORTC_T1OSO_POSITION                     equ 0000h
PORTC_T1OSO_SIZE                         equ 0001h
PORTC_T1OSO_LENGTH                       equ 0001h
PORTC_T1OSO_MASK                         equ 0001h
PORTC_T1OSI_POSN                         equ 0001h
PORTC_T1OSI_POSITION                     equ 0001h
PORTC_T1OSI_SIZE                         equ 0001h
PORTC_T1OSI_LENGTH                       equ 0001h
PORTC_T1OSI_MASK                         equ 0002h
PORTC_CCP1_POSN                          equ 0002h
PORTC_CCP1_POSITION                      equ 0002h
PORTC_CCP1_SIZE                          equ 0001h
PORTC_CCP1_LENGTH                        equ 0001h
PORTC_CCP1_MASK                          equ 0004h
PORTC_TX_POSN                            equ 0006h
PORTC_TX_POSITION                        equ 0006h
PORTC_TX_SIZE                            equ 0001h
PORTC_TX_LENGTH                          equ 0001h
PORTC_TX_MASK                            equ 0040h
PORTC_RX_POSN                            equ 0007h
PORTC_RX_POSITION                        equ 0007h
PORTC_RX_SIZE                            equ 0001h
PORTC_RX_LENGTH                          equ 0001h
PORTC_RX_MASK                            equ 0080h
PORTC_T13CKI_POSN                        equ 0000h
PORTC_T13CKI_POSITION                    equ 0000h
PORTC_T13CKI_SIZE                        equ 0001h
PORTC_T13CKI_LENGTH                      equ 0001h
PORTC_T13CKI_MASK                        equ 0001h
PORTC_P1A_POSN                           equ 0002h
PORTC_P1A_POSITION                       equ 0002h
PORTC_P1A_SIZE                           equ 0001h
PORTC_P1A_LENGTH                         equ 0001h
PORTC_P1A_MASK                           equ 0004h
PORTC_CK_POSN                            equ 0006h
PORTC_CK_POSITION                        equ 0006h
PORTC_CK_SIZE                            equ 0001h
PORTC_CK_LENGTH                          equ 0001h
PORTC_CK_MASK                            equ 0040h
PORTC_DT_POSN                            equ 0007h
PORTC_DT_POSITION                        equ 0007h
PORTC_DT_SIZE                            equ 0001h
PORTC_DT_LENGTH                          equ 0001h
PORTC_DT_MASK                            equ 0080h
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

// Register: PORTD
#define PORTD PORTD
PORTD                                    equ 0F83h
// bitfield definitions
PORTD_RD0_POSN                           equ 0000h
PORTD_RD0_POSITION                       equ 0000h
PORTD_RD0_SIZE                           equ 0001h
PORTD_RD0_LENGTH                         equ 0001h
PORTD_RD0_MASK                           equ 0001h
PORTD_RD1_POSN                           equ 0001h
PORTD_RD1_POSITION                       equ 0001h
PORTD_RD1_SIZE                           equ 0001h
PORTD_RD1_LENGTH                         equ 0001h
PORTD_RD1_MASK                           equ 0002h
PORTD_RD2_POSN                           equ 0002h
PORTD_RD2_POSITION                       equ 0002h
PORTD_RD2_SIZE                           equ 0001h
PORTD_RD2_LENGTH                         equ 0001h
PORTD_RD2_MASK                           equ 0004h
PORTD_RD3_POSN                           equ 0003h
PORTD_RD3_POSITION                       equ 0003h
PORTD_RD3_SIZE                           equ 0001h
PORTD_RD3_LENGTH                         equ 0001h
PORTD_RD3_MASK                           equ 0008h
PORTD_RD4_POSN                           equ 0004h
PORTD_RD4_POSITION                       equ 0004h
PORTD_RD4_SIZE                           equ 0001h
PORTD_RD4_LENGTH                         equ 0001h
PORTD_RD4_MASK                           equ 0010h
PORTD_RD5_POSN                           equ 0005h
PORTD_RD5_POSITION                       equ 0005h
PORTD_RD5_SIZE                           equ 0001h
PORTD_RD5_LENGTH                         equ 0001h
PORTD_RD5_MASK                           equ 0020h
PORTD_RD6_POSN                           equ 0006h
PORTD_RD6_POSITION                       equ 0006h
PORTD_RD6_SIZE                           equ 0001h
PORTD_RD6_LENGTH                         equ 0001h
PORTD_RD6_MASK                           equ 0040h
PORTD_RD7_POSN                           equ 0007h
PORTD_RD7_POSITION                       equ 0007h
PORTD_RD7_SIZE                           equ 0001h
PORTD_RD7_LENGTH                         equ 0001h
PORTD_RD7_MASK                           equ 0080h
PORTD_SPP0_POSN                          equ 0000h
PORTD_SPP0_POSITION                      equ 0000h
PORTD_SPP0_SIZE                          equ 0001h
PORTD_SPP0_LENGTH                        equ 0001h
PORTD_SPP0_MASK                          equ 0001h
PORTD_SPP1_POSN                          equ 0001h
PORTD_SPP1_POSITION                      equ 0001h
PORTD_SPP1_SIZE                          equ 0001h
PORTD_SPP1_LENGTH                        equ 0001h
PORTD_SPP1_MASK                          equ 0002h
PORTD_SPP2_POSN                          equ 0002h
PORTD_SPP2_POSITION                      equ 0002h
PORTD_SPP2_SIZE                          equ 0001h
PORTD_SPP2_LENGTH                        equ 0001h
PORTD_SPP2_MASK                          equ 0004h
PORTD_SPP3_POSN                          equ 0003h
PORTD_SPP3_POSITION                      equ 0003h
PORTD_SPP3_SIZE                          equ 0001h
PORTD_SPP3_LENGTH                        equ 0001h
PORTD_SPP3_MASK                          equ 0008h
PORTD_SPP4_POSN                          equ 0004h
PORTD_SPP4_POSITION                      equ 0004h
PORTD_SPP4_SIZE                          equ 0001h
PORTD_SPP4_LENGTH                        equ 0001h
PORTD_SPP4_MASK                          equ 0010h
PORTD_SPP5_POSN                          equ 0005h
PORTD_SPP5_POSITION                      equ 0005h
PORTD_SPP5_SIZE                          equ 0001h
PORTD_SPP5_LENGTH                        equ 0001h
PORTD_SPP5_MASK                          equ 0020h
PORTD_SPP6_POSN                          equ 0006h
PORTD_SPP6_POSITION                      equ 0006h
PORTD_SPP6_SIZE                          equ 0001h
PORTD_SPP6_LENGTH                        equ 0001h
PORTD_SPP6_MASK                          equ 0040h
PORTD_SPP7_POSN                          equ 0007h
PORTD_SPP7_POSITION                      equ 0007h
PORTD_SPP7_SIZE                          equ 0001h
PORTD_SPP7_LENGTH                        equ 0001h
PORTD_SPP7_MASK                          equ 0080h
PORTD_SS2_POSN                           equ 0007h
PORTD_SS2_POSITION                       equ 0007h
PORTD_SS2_SIZE                           equ 0001h
PORTD_SS2_LENGTH                         equ 0001h
PORTD_SS2_MASK                           equ 0080h

// Register: PORTE
#define PORTE PORTE
PORTE                                    equ 0F84h
// bitfield definitions
PORTE_RE0_POSN                           equ 0000h
PORTE_RE0_POSITION                       equ 0000h
PORTE_RE0_SIZE                           equ 0001h
PORTE_RE0_LENGTH                         equ 0001h
PORTE_RE0_MASK                           equ 0001h
PORTE_RE1_POSN                           equ 0001h
PORTE_RE1_POSITION                       equ 0001h
PORTE_RE1_SIZE                           equ 0001h
PORTE_RE1_LENGTH                         equ 0001h
PORTE_RE1_MASK                           equ 0002h
PORTE_RE2_POSN                           equ 0002h
PORTE_RE2_POSITION                       equ 0002h
PORTE_RE2_SIZE                           equ 0001h
PORTE_RE2_LENGTH                         equ 0001h
PORTE_RE2_MASK                           equ 0004h
PORTE_RE3_POSN                           equ 0003h
PORTE_RE3_POSITION                       equ 0003h
PORTE_RE3_SIZE                           equ 0001h
PORTE_RE3_LENGTH                         equ 0001h
PORTE_RE3_MASK                           equ 0008h
PORTE_CK1SPP_POSN                        equ 0000h
PORTE_CK1SPP_POSITION                    equ 0000h
PORTE_CK1SPP_SIZE                        equ 0001h
PORTE_CK1SPP_LENGTH                      equ 0001h
PORTE_CK1SPP_MASK                        equ 0001h
PORTE_CK2SPP_POSN                        equ 0001h
PORTE_CK2SPP_POSITION                    equ 0001h
PORTE_CK2SPP_SIZE                        equ 0001h
PORTE_CK2SPP_LENGTH                      equ 0001h
PORTE_CK2SPP_MASK                        equ 0002h
PORTE_OESPP_POSN                         equ 0002h
PORTE_OESPP_POSITION                     equ 0002h
PORTE_OESPP_SIZE                         equ 0001h
PORTE_OESPP_LENGTH                       equ 0001h
PORTE_OESPP_MASK                         equ 0004h
PORTE_PD2_POSN                           equ 0000h
PORTE_PD2_POSITION                       equ 0000h
PORTE_PD2_SIZE                           equ 0001h
PORTE_PD2_LENGTH                         equ 0001h
PORTE_PD2_MASK                           equ 0001h
PORTE_PC2_POSN                           equ 0001h
PORTE_PC2_POSITION                       equ 0001h
PORTE_PC2_SIZE                           equ 0001h
PORTE_PC2_LENGTH                         equ 0001h
PORTE_PC2_MASK                           equ 0002h
PORTE_CCP10_POSN                         equ 0002h
PORTE_CCP10_POSITION                     equ 0002h
PORTE_CCP10_SIZE                         equ 0001h
PORTE_CCP10_LENGTH                       equ 0001h
PORTE_CCP10_MASK                         equ 0004h
PORTE_CCP9E_POSN                         equ 0003h
PORTE_CCP9E_POSITION                     equ 0003h
PORTE_CCP9E_SIZE                         equ 0001h
PORTE_CCP9E_LENGTH                       equ 0001h
PORTE_CCP9E_MASK                         equ 0008h
PORTE_RDE_POSN                           equ 0000h
PORTE_RDE_POSITION                       equ 0000h
PORTE_RDE_SIZE                           equ 0001h
PORTE_RDE_LENGTH                         equ 0001h
PORTE_RDE_MASK                           equ 0001h
PORTE_WRE_POSN                           equ 0001h
PORTE_WRE_POSITION                       equ 0001h
PORTE_WRE_SIZE                           equ 0001h
PORTE_WRE_LENGTH                         equ 0001h
PORTE_WRE_MASK                           equ 0002h
PORTE_CS_POSN                            equ 0002h
PORTE_CS_POSITION                        equ 0002h
PORTE_CS_SIZE                            equ 0001h
PORTE_CS_LENGTH                          equ 0001h
PORTE_CS_MASK                            equ 0004h
PORTE_PC3E_POSN                          equ 0003h
PORTE_PC3E_POSITION                      equ 0003h
PORTE_PC3E_SIZE                          equ 0001h
PORTE_PC3E_LENGTH                        equ 0001h
PORTE_PC3E_MASK                          equ 0008h
PORTE_PB2_POSN                           equ 0002h
PORTE_PB2_POSITION                       equ 0002h
PORTE_PB2_SIZE                           equ 0001h
PORTE_PB2_LENGTH                         equ 0001h
PORTE_PB2_MASK                           equ 0004h

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 0F85h
// bitfield definitions
WPUB_WPUB0_POSN                          equ 0000h
WPUB_WPUB0_POSITION                      equ 0000h
WPUB_WPUB0_SIZE                          equ 0001h
WPUB_WPUB0_LENGTH                        equ 0001h
WPUB_WPUB0_MASK                          equ 0001h
WPUB_WPUB1_POSN                          equ 0001h
WPUB_WPUB1_POSITION                      equ 0001h
WPUB_WPUB1_SIZE                          equ 0001h
WPUB_WPUB1_LENGTH                        equ 0001h
WPUB_WPUB1_MASK                          equ 0002h
WPUB_WPUB2_POSN                          equ 0002h
WPUB_WPUB2_POSITION                      equ 0002h
WPUB_WPUB2_SIZE                          equ 0001h
WPUB_WPUB2_LENGTH                        equ 0001h
WPUB_WPUB2_MASK                          equ 0004h
WPUB_WPUB3_POSN                          equ 0003h
WPUB_WPUB3_POSITION                      equ 0003h
WPUB_WPUB3_SIZE                          equ 0001h
WPUB_WPUB3_LENGTH                        equ 0001h
WPUB_WPUB3_MASK                          equ 0008h
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

// Register: IOCB
#define IOCB IOCB
IOCB                                     equ 0F86h
// bitfield definitions
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

// Register: IOCC
#define IOCC IOCC
IOCC                                     equ 0F87h
// bitfield definitions
IOCC_IOCC0_POSN                          equ 0000h
IOCC_IOCC0_POSITION                      equ 0000h
IOCC_IOCC0_SIZE                          equ 0001h
IOCC_IOCC0_LENGTH                        equ 0001h
IOCC_IOCC0_MASK                          equ 0001h
IOCC_IOCC1_POSN                          equ 0001h
IOCC_IOCC1_POSITION                      equ 0001h
IOCC_IOCC1_SIZE                          equ 0001h
IOCC_IOCC1_LENGTH                        equ 0001h
IOCC_IOCC1_MASK                          equ 0002h
IOCC_IOCC2_POSN                          equ 0002h
IOCC_IOCC2_POSITION                      equ 0002h
IOCC_IOCC2_SIZE                          equ 0001h
IOCC_IOCC2_LENGTH                        equ 0001h
IOCC_IOCC2_MASK                          equ 0004h
IOCC_IOCC4_POSN                          equ 0004h
IOCC_IOCC4_POSITION                      equ 0004h
IOCC_IOCC4_SIZE                          equ 0001h
IOCC_IOCC4_LENGTH                        equ 0001h
IOCC_IOCC4_MASK                          equ 0010h
IOCC_IOCC5_POSN                          equ 0005h
IOCC_IOCC5_POSITION                      equ 0005h
IOCC_IOCC5_SIZE                          equ 0001h
IOCC_IOCC5_LENGTH                        equ 0001h
IOCC_IOCC5_MASK                          equ 0020h
IOCC_IOCC6_POSN                          equ 0006h
IOCC_IOCC6_POSITION                      equ 0006h
IOCC_IOCC6_SIZE                          equ 0001h
IOCC_IOCC6_LENGTH                        equ 0001h
IOCC_IOCC6_MASK                          equ 0040h
IOCC_IOCC7_POSN                          equ 0007h
IOCC_IOCC7_POSITION                      equ 0007h
IOCC_IOCC7_SIZE                          equ 0001h
IOCC_IOCC7_LENGTH                        equ 0001h
IOCC_IOCC7_MASK                          equ 0080h

// Register: CTMUICON
#define CTMUICON CTMUICON
CTMUICON                                 equ 0F88h
// bitfield definitions
CTMUICON_IRNG_POSN                       equ 0000h
CTMUICON_IRNG_POSITION                   equ 0000h
CTMUICON_IRNG_SIZE                       equ 0002h
CTMUICON_IRNG_LENGTH                     equ 0002h
CTMUICON_IRNG_MASK                       equ 0003h
CTMUICON_ITRIM_POSN                      equ 0002h
CTMUICON_ITRIM_POSITION                  equ 0002h
CTMUICON_ITRIM_SIZE                      equ 0006h
CTMUICON_ITRIM_LENGTH                    equ 0006h
CTMUICON_ITRIM_MASK                      equ 00FCh
CTMUICON_IRNG0_POSN                      equ 0000h
CTMUICON_IRNG0_POSITION                  equ 0000h
CTMUICON_IRNG0_SIZE                      equ 0001h
CTMUICON_IRNG0_LENGTH                    equ 0001h
CTMUICON_IRNG0_MASK                      equ 0001h
CTMUICON_IRNG1_POSN                      equ 0001h
CTMUICON_IRNG1_POSITION                  equ 0001h
CTMUICON_IRNG1_SIZE                      equ 0001h
CTMUICON_IRNG1_LENGTH                    equ 0001h
CTMUICON_IRNG1_MASK                      equ 0002h
CTMUICON_ITRIM0_POSN                     equ 0002h
CTMUICON_ITRIM0_POSITION                 equ 0002h
CTMUICON_ITRIM0_SIZE                     equ 0001h
CTMUICON_ITRIM0_LENGTH                   equ 0001h
CTMUICON_ITRIM0_MASK                     equ 0004h
CTMUICON_ITRIM1_POSN                     equ 0003h
CTMUICON_ITRIM1_POSITION                 equ 0003h
CTMUICON_ITRIM1_SIZE                     equ 0001h
CTMUICON_ITRIM1_LENGTH                   equ 0001h
CTMUICON_ITRIM1_MASK                     equ 0008h
CTMUICON_ITRIM2_POSN                     equ 0004h
CTMUICON_ITRIM2_POSITION                 equ 0004h
CTMUICON_ITRIM2_SIZE                     equ 0001h
CTMUICON_ITRIM2_LENGTH                   equ 0001h
CTMUICON_ITRIM2_MASK                     equ 0010h
CTMUICON_ITRIM3_POSN                     equ 0005h
CTMUICON_ITRIM3_POSITION                 equ 0005h
CTMUICON_ITRIM3_SIZE                     equ 0001h
CTMUICON_ITRIM3_LENGTH                   equ 0001h
CTMUICON_ITRIM3_MASK                     equ 0020h
CTMUICON_ITRIM4_POSN                     equ 0006h
CTMUICON_ITRIM4_POSITION                 equ 0006h
CTMUICON_ITRIM4_SIZE                     equ 0001h
CTMUICON_ITRIM4_LENGTH                   equ 0001h
CTMUICON_ITRIM4_MASK                     equ 0040h
CTMUICON_ITRIM5_POSN                     equ 0007h
CTMUICON_ITRIM5_POSITION                 equ 0007h
CTMUICON_ITRIM5_SIZE                     equ 0001h
CTMUICON_ITRIM5_LENGTH                   equ 0001h
CTMUICON_ITRIM5_MASK                     equ 0080h

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
LATA_LATA3_POSN                          equ 0003h
LATA_LATA3_POSITION                      equ 0003h
LATA_LATA3_SIZE                          equ 0001h
LATA_LATA3_LENGTH                        equ 0001h
LATA_LATA3_MASK                          equ 0008h
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
LATA_LATA6_POSN                          equ 0006h
LATA_LATA6_POSITION                      equ 0006h
LATA_LATA6_SIZE                          equ 0001h
LATA_LATA6_LENGTH                        equ 0001h
LATA_LATA6_MASK                          equ 0040h
LATA_LATA7_POSN                          equ 0007h
LATA_LATA7_POSITION                      equ 0007h
LATA_LATA7_SIZE                          equ 0001h
LATA_LATA7_LENGTH                        equ 0001h
LATA_LATA7_MASK                          equ 0080h
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
LATA_LA3_POSN                            equ 0003h
LATA_LA3_POSITION                        equ 0003h
LATA_LA3_SIZE                            equ 0001h
LATA_LA3_LENGTH                          equ 0001h
LATA_LA3_MASK                            equ 0008h
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
LATA_LA6_POSN                            equ 0006h
LATA_LA6_POSITION                        equ 0006h
LATA_LA6_SIZE                            equ 0001h
LATA_LA6_LENGTH                          equ 0001h
LATA_LA6_MASK                            equ 0040h
LATA_LA7_POSN                            equ 0007h
LATA_LA7_POSITION                        equ 0007h
LATA_LA7_SIZE                            equ 0001h
LATA_LA7_LENGTH                          equ 0001h
LATA_LA7_MASK                            equ 0080h

// Register: LATB
#define LATB LATB
LATB                                     equ 0F8Ah
// bitfield definitions
LATB_LATB0_POSN                          equ 0000h
LATB_LATB0_POSITION                      equ 0000h
LATB_LATB0_SIZE                          equ 0001h
LATB_LATB0_LENGTH                        equ 0001h
LATB_LATB0_MASK                          equ 0001h
LATB_LATB1_POSN                          equ 0001h
LATB_LATB1_POSITION                      equ 0001h
LATB_LATB1_SIZE                          equ 0001h
LATB_LATB1_LENGTH                        equ 0001h
LATB_LATB1_MASK                          equ 0002h
LATB_LATB2_POSN                          equ 0002h
LATB_LATB2_POSITION                      equ 0002h
LATB_LATB2_SIZE                          equ 0001h
LATB_LATB2_LENGTH                        equ 0001h
LATB_LATB2_MASK                          equ 0004h
LATB_LATB3_POSN                          equ 0003h
LATB_LATB3_POSITION                      equ 0003h
LATB_LATB3_SIZE                          equ 0001h
LATB_LATB3_LENGTH                        equ 0001h
LATB_LATB3_MASK                          equ 0008h
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
LATB_LB0_POSN                            equ 0000h
LATB_LB0_POSITION                        equ 0000h
LATB_LB0_SIZE                            equ 0001h
LATB_LB0_LENGTH                          equ 0001h
LATB_LB0_MASK                            equ 0001h
LATB_LB1_POSN                            equ 0001h
LATB_LB1_POSITION                        equ 0001h
LATB_LB1_SIZE                            equ 0001h
LATB_LB1_LENGTH                          equ 0001h
LATB_LB1_MASK                            equ 0002h
LATB_LB2_POSN                            equ 0002h
LATB_LB2_POSITION                        equ 0002h
LATB_LB2_SIZE                            equ 0001h
LATB_LB2_LENGTH                          equ 0001h
LATB_LB2_MASK                            equ 0004h
LATB_LB3_POSN                            equ 0003h
LATB_LB3_POSITION                        equ 0003h
LATB_LB3_SIZE                            equ 0001h
LATB_LB3_LENGTH                          equ 0001h
LATB_LB3_MASK                            equ 0008h
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
LATC_LC6_POSN                            equ 0006h
LATC_LC6_POSITION                        equ 0006h
LATC_LC6_SIZE                            equ 0001h
LATC_LC6_LENGTH                          equ 0001h
LATC_LC6_MASK                            equ 0040h
LATC_LC7_POSN                            equ 0007h
LATC_LC7_POSITION                        equ 0007h
LATC_LC7_SIZE                            equ 0001h
LATC_LC7_LENGTH                          equ 0001h
LATC_LC7_MASK                            equ 0080h

// Register: LATD
#define LATD LATD
LATD                                     equ 0F8Ch
// bitfield definitions
LATD_LATD0_POSN                          equ 0000h
LATD_LATD0_POSITION                      equ 0000h
LATD_LATD0_SIZE                          equ 0001h
LATD_LATD0_LENGTH                        equ 0001h
LATD_LATD0_MASK                          equ 0001h
LATD_LATD1_POSN                          equ 0001h
LATD_LATD1_POSITION                      equ 0001h
LATD_LATD1_SIZE                          equ 0001h
LATD_LATD1_LENGTH                        equ 0001h
LATD_LATD1_MASK                          equ 0002h
LATD_LATD2_POSN                          equ 0002h
LATD_LATD2_POSITION                      equ 0002h
LATD_LATD2_SIZE                          equ 0001h
LATD_LATD2_LENGTH                        equ 0001h
LATD_LATD2_MASK                          equ 0004h
LATD_LATD3_POSN                          equ 0003h
LATD_LATD3_POSITION                      equ 0003h
LATD_LATD3_SIZE                          equ 0001h
LATD_LATD3_LENGTH                        equ 0001h
LATD_LATD3_MASK                          equ 0008h
LATD_LATD4_POSN                          equ 0004h
LATD_LATD4_POSITION                      equ 0004h
LATD_LATD4_SIZE                          equ 0001h
LATD_LATD4_LENGTH                        equ 0001h
LATD_LATD4_MASK                          equ 0010h
LATD_LATD5_POSN                          equ 0005h
LATD_LATD5_POSITION                      equ 0005h
LATD_LATD5_SIZE                          equ 0001h
LATD_LATD5_LENGTH                        equ 0001h
LATD_LATD5_MASK                          equ 0020h
LATD_LATD6_POSN                          equ 0006h
LATD_LATD6_POSITION                      equ 0006h
LATD_LATD6_SIZE                          equ 0001h
LATD_LATD6_LENGTH                        equ 0001h
LATD_LATD6_MASK                          equ 0040h
LATD_LATD7_POSN                          equ 0007h
LATD_LATD7_POSITION                      equ 0007h
LATD_LATD7_SIZE                          equ 0001h
LATD_LATD7_LENGTH                        equ 0001h
LATD_LATD7_MASK                          equ 0080h
LATD_LD0_POSN                            equ 0000h
LATD_LD0_POSITION                        equ 0000h
LATD_LD0_SIZE                            equ 0001h
LATD_LD0_LENGTH                          equ 0001h
LATD_LD0_MASK                            equ 0001h
LATD_LD1_POSN                            equ 0001h
LATD_LD1_POSITION                        equ 0001h
LATD_LD1_SIZE                            equ 0001h
LATD_LD1_LENGTH                          equ 0001h
LATD_LD1_MASK                            equ 0002h
LATD_LD2_POSN                            equ 0002h
LATD_LD2_POSITION                        equ 0002h
LATD_LD2_SIZE                            equ 0001h
LATD_LD2_LENGTH                          equ 0001h
LATD_LD2_MASK                            equ 0004h
LATD_LD3_POSN                            equ 0003h
LATD_LD3_POSITION                        equ 0003h
LATD_LD3_SIZE                            equ 0001h
LATD_LD3_LENGTH                          equ 0001h
LATD_LD3_MASK                            equ 0008h
LATD_LD4_POSN                            equ 0004h
LATD_LD4_POSITION                        equ 0004h
LATD_LD4_SIZE                            equ 0001h
LATD_LD4_LENGTH                          equ 0001h
LATD_LD4_MASK                            equ 0010h
LATD_LD5_POSN                            equ 0005h
LATD_LD5_POSITION                        equ 0005h
LATD_LD5_SIZE                            equ 0001h
LATD_LD5_LENGTH                          equ 0001h
LATD_LD5_MASK                            equ 0020h
LATD_LD6_POSN                            equ 0006h
LATD_LD6_POSITION                        equ 0006h
LATD_LD6_SIZE                            equ 0001h
LATD_LD6_LENGTH                          equ 0001h
LATD_LD6_MASK                            equ 0040h
LATD_LD7_POSN                            equ 0007h
LATD_LD7_POSITION                        equ 0007h
LATD_LD7_SIZE                            equ 0001h
LATD_LD7_LENGTH                          equ 0001h
LATD_LD7_MASK                            equ 0080h

// Register: LATE
#define LATE LATE
LATE                                     equ 0F8Dh
// bitfield definitions
LATE_LATE0_POSN                          equ 0000h
LATE_LATE0_POSITION                      equ 0000h
LATE_LATE0_SIZE                          equ 0001h
LATE_LATE0_LENGTH                        equ 0001h
LATE_LATE0_MASK                          equ 0001h
LATE_LATE1_POSN                          equ 0001h
LATE_LATE1_POSITION                      equ 0001h
LATE_LATE1_SIZE                          equ 0001h
LATE_LATE1_LENGTH                        equ 0001h
LATE_LATE1_MASK                          equ 0002h
LATE_LATE2_POSN                          equ 0002h
LATE_LATE2_POSITION                      equ 0002h
LATE_LATE2_SIZE                          equ 0001h
LATE_LATE2_LENGTH                        equ 0001h
LATE_LATE2_MASK                          equ 0004h
LATE_LE0_POSN                            equ 0000h
LATE_LE0_POSITION                        equ 0000h
LATE_LE0_SIZE                            equ 0001h
LATE_LE0_LENGTH                          equ 0001h
LATE_LE0_MASK                            equ 0001h
LATE_LE1_POSN                            equ 0001h
LATE_LE1_POSITION                        equ 0001h
LATE_LE1_SIZE                            equ 0001h
LATE_LE1_LENGTH                          equ 0001h
LATE_LE1_MASK                            equ 0002h
LATE_LE2_POSN                            equ 0002h
LATE_LE2_POSITION                        equ 0002h
LATE_LE2_SIZE                            equ 0001h
LATE_LE2_LENGTH                          equ 0001h
LATE_LE2_MASK                            equ 0004h

// Register: CTMUCONL
#define CTMUCONL CTMUCONL
CTMUCONL                                 equ 0F8Eh
// bitfield definitions
CTMUCONL_EDG1STAT_POSN                   equ 0000h
CTMUCONL_EDG1STAT_POSITION               equ 0000h
CTMUCONL_EDG1STAT_SIZE                   equ 0001h
CTMUCONL_EDG1STAT_LENGTH                 equ 0001h
CTMUCONL_EDG1STAT_MASK                   equ 0001h
CTMUCONL_EDG2STAT_POSN                   equ 0001h
CTMUCONL_EDG2STAT_POSITION               equ 0001h
CTMUCONL_EDG2STAT_SIZE                   equ 0001h
CTMUCONL_EDG2STAT_LENGTH                 equ 0001h
CTMUCONL_EDG2STAT_MASK                   equ 0002h
CTMUCONL_EDG1SEL_POSN                    equ 0002h
CTMUCONL_EDG1SEL_POSITION                equ 0002h
CTMUCONL_EDG1SEL_SIZE                    equ 0002h
CTMUCONL_EDG1SEL_LENGTH                  equ 0002h
CTMUCONL_EDG1SEL_MASK                    equ 000Ch
CTMUCONL_EDG1POL_POSN                    equ 0004h
CTMUCONL_EDG1POL_POSITION                equ 0004h
CTMUCONL_EDG1POL_SIZE                    equ 0001h
CTMUCONL_EDG1POL_LENGTH                  equ 0001h
CTMUCONL_EDG1POL_MASK                    equ 0010h
CTMUCONL_EDG2SEL_POSN                    equ 0005h
CTMUCONL_EDG2SEL_POSITION                equ 0005h
CTMUCONL_EDG2SEL_SIZE                    equ 0002h
CTMUCONL_EDG2SEL_LENGTH                  equ 0002h
CTMUCONL_EDG2SEL_MASK                    equ 0060h
CTMUCONL_EDG2POL_POSN                    equ 0007h
CTMUCONL_EDG2POL_POSITION                equ 0007h
CTMUCONL_EDG2POL_SIZE                    equ 0001h
CTMUCONL_EDG2POL_LENGTH                  equ 0001h
CTMUCONL_EDG2POL_MASK                    equ 0080h
CTMUCONL_EDG1SEL0_POSN                   equ 0002h
CTMUCONL_EDG1SEL0_POSITION               equ 0002h
CTMUCONL_EDG1SEL0_SIZE                   equ 0001h
CTMUCONL_EDG1SEL0_LENGTH                 equ 0001h
CTMUCONL_EDG1SEL0_MASK                   equ 0004h
CTMUCONL_EDG1SEL1_POSN                   equ 0003h
CTMUCONL_EDG1SEL1_POSITION               equ 0003h
CTMUCONL_EDG1SEL1_SIZE                   equ 0001h
CTMUCONL_EDG1SEL1_LENGTH                 equ 0001h
CTMUCONL_EDG1SEL1_MASK                   equ 0008h
CTMUCONL_EDG2SEL0_POSN                   equ 0005h
CTMUCONL_EDG2SEL0_POSITION               equ 0005h
CTMUCONL_EDG2SEL0_SIZE                   equ 0001h
CTMUCONL_EDG2SEL0_LENGTH                 equ 0001h
CTMUCONL_EDG2SEL0_MASK                   equ 0020h
CTMUCONL_EDG2SEL1_POSN                   equ 0006h
CTMUCONL_EDG2SEL1_POSITION               equ 0006h
CTMUCONL_EDG2SEL1_SIZE                   equ 0001h
CTMUCONL_EDG2SEL1_LENGTH                 equ 0001h
CTMUCONL_EDG2SEL1_MASK                   equ 0040h

// Register: CTMUCONH
#define CTMUCONH CTMUCONH
CTMUCONH                                 equ 0F8Fh
// bitfield definitions
CTMUCONH_CTTRIG_POSN                     equ 0000h
CTMUCONH_CTTRIG_POSITION                 equ 0000h
CTMUCONH_CTTRIG_SIZE                     equ 0001h
CTMUCONH_CTTRIG_LENGTH                   equ 0001h
CTMUCONH_CTTRIG_MASK                     equ 0001h
CTMUCONH_IDISSEN_POSN                    equ 0001h
CTMUCONH_IDISSEN_POSITION                equ 0001h
CTMUCONH_IDISSEN_SIZE                    equ 0001h
CTMUCONH_IDISSEN_LENGTH                  equ 0001h
CTMUCONH_IDISSEN_MASK                    equ 0002h
CTMUCONH_EDGSEQEN_POSN                   equ 0002h
CTMUCONH_EDGSEQEN_POSITION               equ 0002h
CTMUCONH_EDGSEQEN_SIZE                   equ 0001h
CTMUCONH_EDGSEQEN_LENGTH                 equ 0001h
CTMUCONH_EDGSEQEN_MASK                   equ 0004h
CTMUCONH_EDGEN_POSN                      equ 0003h
CTMUCONH_EDGEN_POSITION                  equ 0003h
CTMUCONH_EDGEN_SIZE                      equ 0001h
CTMUCONH_EDGEN_LENGTH                    equ 0001h
CTMUCONH_EDGEN_MASK                      equ 0008h
CTMUCONH_TGEN_POSN                       equ 0004h
CTMUCONH_TGEN_POSITION                   equ 0004h
CTMUCONH_TGEN_SIZE                       equ 0001h
CTMUCONH_TGEN_LENGTH                     equ 0001h
CTMUCONH_TGEN_MASK                       equ 0010h
CTMUCONH_CTMUSIDL_POSN                   equ 0005h
CTMUCONH_CTMUSIDL_POSITION               equ 0005h
CTMUCONH_CTMUSIDL_SIZE                   equ 0001h
CTMUCONH_CTMUSIDL_LENGTH                 equ 0001h
CTMUCONH_CTMUSIDL_MASK                   equ 0020h
CTMUCONH_CTMUEN_POSN                     equ 0007h
CTMUCONH_CTMUEN_POSITION                 equ 0007h
CTMUCONH_CTMUEN_SIZE                     equ 0001h
CTMUCONH_CTMUEN_LENGTH                   equ 0001h
CTMUCONH_CTMUEN_MASK                     equ 0080h
CTMUCONH_TRIGEN_POSN                     equ 0000h
CTMUCONH_TRIGEN_POSITION                 equ 0000h
CTMUCONH_TRIGEN_SIZE                     equ 0001h
CTMUCONH_TRIGEN_LENGTH                   equ 0001h
CTMUCONH_TRIGEN_MASK                     equ 0001h
CTMUCONH_SIDL_POSN                       equ 0005h
CTMUCONH_SIDL_POSITION                   equ 0005h
CTMUCONH_SIDL_SIZE                       equ 0001h
CTMUCONH_SIDL_LENGTH                     equ 0001h
CTMUCONH_SIDL_MASK                       equ 0020h
CTMUCONH_ON_POSN                         equ 0007h
CTMUCONH_ON_POSITION                     equ 0007h
CTMUCONH_ON_SIZE                         equ 0001h
CTMUCONH_ON_LENGTH                       equ 0001h
CTMUCONH_ON_MASK                         equ 0080h

// Register: CCPR2
#define CCPR2 CCPR2
CCPR2                                    equ 0F90h

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0F90h
// bitfield definitions
CCPR2L_CCPR2L_POSN                       equ 0000h
CCPR2L_CCPR2L_POSITION                   equ 0000h
CCPR2L_CCPR2L_SIZE                       equ 0008h
CCPR2L_CCPR2L_LENGTH                     equ 0008h
CCPR2L_CCPR2L_MASK                       equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0F91h
// bitfield definitions
CCPR2H_CCPR2H_POSN                       equ 0000h
CCPR2H_CCPR2H_POSITION                   equ 0000h
CCPR2H_CCPR2H_SIZE                       equ 0008h
CCPR2H_CCPR2H_LENGTH                     equ 0008h
CCPR2H_CCPR2H_MASK                       equ 00FFh

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
TRISA_TRISA6_POSN                        equ 0006h
TRISA_TRISA6_POSITION                    equ 0006h
TRISA_TRISA6_SIZE                        equ 0001h
TRISA_TRISA6_LENGTH                      equ 0001h
TRISA_TRISA6_MASK                        equ 0040h
TRISA_TRISA7_POSN                        equ 0007h
TRISA_TRISA7_POSITION                    equ 0007h
TRISA_TRISA7_SIZE                        equ 0001h
TRISA_TRISA7_LENGTH                      equ 0001h
TRISA_TRISA7_MASK                        equ 0080h
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
TRISA_RA3_POSN                           equ 0003h
TRISA_RA3_POSITION                       equ 0003h
TRISA_RA3_SIZE                           equ 0001h
TRISA_RA3_LENGTH                         equ 0001h
TRISA_RA3_MASK                           equ 0008h
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
TRISA_RA6_POSN                           equ 0006h
TRISA_RA6_POSITION                       equ 0006h
TRISA_RA6_SIZE                           equ 0001h
TRISA_RA6_LENGTH                         equ 0001h
TRISA_RA6_MASK                           equ 0040h
TRISA_RA7_POSN                           equ 0007h
TRISA_RA7_POSITION                       equ 0007h
TRISA_RA7_SIZE                           equ 0001h
TRISA_RA7_LENGTH                         equ 0001h
TRISA_RA7_MASK                           equ 0080h

// Register: TRISB
#define TRISB TRISB
TRISB                                    equ 0F93h
// bitfield definitions
TRISB_TRISB0_POSN                        equ 0000h
TRISB_TRISB0_POSITION                    equ 0000h
TRISB_TRISB0_SIZE                        equ 0001h
TRISB_TRISB0_LENGTH                      equ 0001h
TRISB_TRISB0_MASK                        equ 0001h
TRISB_TRISB1_POSN                        equ 0001h
TRISB_TRISB1_POSITION                    equ 0001h
TRISB_TRISB1_SIZE                        equ 0001h
TRISB_TRISB1_LENGTH                      equ 0001h
TRISB_TRISB1_MASK                        equ 0002h
TRISB_TRISB2_POSN                        equ 0002h
TRISB_TRISB2_POSITION                    equ 0002h
TRISB_TRISB2_SIZE                        equ 0001h
TRISB_TRISB2_LENGTH                      equ 0001h
TRISB_TRISB2_MASK                        equ 0004h
TRISB_TRISB3_POSN                        equ 0003h
TRISB_TRISB3_POSITION                    equ 0003h
TRISB_TRISB3_SIZE                        equ 0001h
TRISB_TRISB3_LENGTH                      equ 0001h
TRISB_TRISB3_MASK                        equ 0008h
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
TRISB_RB0_POSN                           equ 0000h
TRISB_RB0_POSITION                       equ 0000h
TRISB_RB0_SIZE                           equ 0001h
TRISB_RB0_LENGTH                         equ 0001h
TRISB_RB0_MASK                           equ 0001h
TRISB_RB1_POSN                           equ 0001h
TRISB_RB1_POSITION                       equ 0001h
TRISB_RB1_SIZE                           equ 0001h
TRISB_RB1_LENGTH                         equ 0001h
TRISB_RB1_MASK                           equ 0002h
TRISB_RB2_POSN                           equ 0002h
TRISB_RB2_POSITION                       equ 0002h
TRISB_RB2_SIZE                           equ 0001h
TRISB_RB2_LENGTH                         equ 0001h
TRISB_RB2_MASK                           equ 0004h
TRISB_RB3_POSN                           equ 0003h
TRISB_RB3_POSITION                       equ 0003h
TRISB_RB3_SIZE                           equ 0001h
TRISB_RB3_LENGTH                         equ 0001h
TRISB_RB3_MASK                           equ 0008h
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

// Register: TRISD
#define TRISD TRISD
TRISD                                    equ 0F95h
// bitfield definitions
TRISD_TRISD0_POSN                        equ 0000h
TRISD_TRISD0_POSITION                    equ 0000h
TRISD_TRISD0_SIZE                        equ 0001h
TRISD_TRISD0_LENGTH                      equ 0001h
TRISD_TRISD0_MASK                        equ 0001h
TRISD_TRISD1_POSN                        equ 0001h
TRISD_TRISD1_POSITION                    equ 0001h
TRISD_TRISD1_SIZE                        equ 0001h
TRISD_TRISD1_LENGTH                      equ 0001h
TRISD_TRISD1_MASK                        equ 0002h
TRISD_TRISD2_POSN                        equ 0002h
TRISD_TRISD2_POSITION                    equ 0002h
TRISD_TRISD2_SIZE                        equ 0001h
TRISD_TRISD2_LENGTH                      equ 0001h
TRISD_TRISD2_MASK                        equ 0004h
TRISD_TRISD3_POSN                        equ 0003h
TRISD_TRISD3_POSITION                    equ 0003h
TRISD_TRISD3_SIZE                        equ 0001h
TRISD_TRISD3_LENGTH                      equ 0001h
TRISD_TRISD3_MASK                        equ 0008h
TRISD_TRISD4_POSN                        equ 0004h
TRISD_TRISD4_POSITION                    equ 0004h
TRISD_TRISD4_SIZE                        equ 0001h
TRISD_TRISD4_LENGTH                      equ 0001h
TRISD_TRISD4_MASK                        equ 0010h
TRISD_TRISD5_POSN                        equ 0005h
TRISD_TRISD5_POSITION                    equ 0005h
TRISD_TRISD5_SIZE                        equ 0001h
TRISD_TRISD5_LENGTH                      equ 0001h
TRISD_TRISD5_MASK                        equ 0020h
TRISD_TRISD6_POSN                        equ 0006h
TRISD_TRISD6_POSITION                    equ 0006h
TRISD_TRISD6_SIZE                        equ 0001h
TRISD_TRISD6_LENGTH                      equ 0001h
TRISD_TRISD6_MASK                        equ 0040h
TRISD_TRISD7_POSN                        equ 0007h
TRISD_TRISD7_POSITION                    equ 0007h
TRISD_TRISD7_SIZE                        equ 0001h
TRISD_TRISD7_LENGTH                      equ 0001h
TRISD_TRISD7_MASK                        equ 0080h
TRISD_RD0_POSN                           equ 0000h
TRISD_RD0_POSITION                       equ 0000h
TRISD_RD0_SIZE                           equ 0001h
TRISD_RD0_LENGTH                         equ 0001h
TRISD_RD0_MASK                           equ 0001h
TRISD_RD1_POSN                           equ 0001h
TRISD_RD1_POSITION                       equ 0001h
TRISD_RD1_SIZE                           equ 0001h
TRISD_RD1_LENGTH                         equ 0001h
TRISD_RD1_MASK                           equ 0002h
TRISD_RD2_POSN                           equ 0002h
TRISD_RD2_POSITION                       equ 0002h
TRISD_RD2_SIZE                           equ 0001h
TRISD_RD2_LENGTH                         equ 0001h
TRISD_RD2_MASK                           equ 0004h
TRISD_RD3_POSN                           equ 0003h
TRISD_RD3_POSITION                       equ 0003h
TRISD_RD3_SIZE                           equ 0001h
TRISD_RD3_LENGTH                         equ 0001h
TRISD_RD3_MASK                           equ 0008h
TRISD_RD4_POSN                           equ 0004h
TRISD_RD4_POSITION                       equ 0004h
TRISD_RD4_SIZE                           equ 0001h
TRISD_RD4_LENGTH                         equ 0001h
TRISD_RD4_MASK                           equ 0010h
TRISD_RD5_POSN                           equ 0005h
TRISD_RD5_POSITION                       equ 0005h
TRISD_RD5_SIZE                           equ 0001h
TRISD_RD5_LENGTH                         equ 0001h
TRISD_RD5_MASK                           equ 0020h
TRISD_RD6_POSN                           equ 0006h
TRISD_RD6_POSITION                       equ 0006h
TRISD_RD6_SIZE                           equ 0001h
TRISD_RD6_LENGTH                         equ 0001h
TRISD_RD6_MASK                           equ 0040h
TRISD_RD7_POSN                           equ 0007h
TRISD_RD7_POSITION                       equ 0007h
TRISD_RD7_SIZE                           equ 0001h
TRISD_RD7_LENGTH                         equ 0001h
TRISD_RD7_MASK                           equ 0080h

// Register: TRISE
#define TRISE TRISE
TRISE                                    equ 0F96h
// bitfield definitions
TRISE_TRISE0_POSN                        equ 0000h
TRISE_TRISE0_POSITION                    equ 0000h
TRISE_TRISE0_SIZE                        equ 0001h
TRISE_TRISE0_LENGTH                      equ 0001h
TRISE_TRISE0_MASK                        equ 0001h
TRISE_TRISE1_POSN                        equ 0001h
TRISE_TRISE1_POSITION                    equ 0001h
TRISE_TRISE1_SIZE                        equ 0001h
TRISE_TRISE1_LENGTH                      equ 0001h
TRISE_TRISE1_MASK                        equ 0002h
TRISE_TRISE2_POSN                        equ 0002h
TRISE_TRISE2_POSITION                    equ 0002h
TRISE_TRISE2_SIZE                        equ 0001h
TRISE_TRISE2_LENGTH                      equ 0001h
TRISE_TRISE2_MASK                        equ 0004h
TRISE_WPUE3_POSN                         equ 0007h
TRISE_WPUE3_POSITION                     equ 0007h
TRISE_WPUE3_SIZE                         equ 0001h
TRISE_WPUE3_LENGTH                       equ 0001h
TRISE_WPUE3_MASK                         equ 0080h
TRISE_RE0_POSN                           equ 0000h
TRISE_RE0_POSITION                       equ 0000h
TRISE_RE0_SIZE                           equ 0001h
TRISE_RE0_LENGTH                         equ 0001h
TRISE_RE0_MASK                           equ 0001h
TRISE_RE1_POSN                           equ 0001h
TRISE_RE1_POSITION                       equ 0001h
TRISE_RE1_SIZE                           equ 0001h
TRISE_RE1_LENGTH                         equ 0001h
TRISE_RE1_MASK                           equ 0002h
TRISE_RE2_POSN                           equ 0002h
TRISE_RE2_POSITION                       equ 0002h
TRISE_RE2_SIZE                           equ 0001h
TRISE_RE2_LENGTH                         equ 0001h
TRISE_RE2_MASK                           equ 0004h

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0F97h
// bitfield definitions
CCP2CON_CCP2M_POSN                       equ 0000h
CCP2CON_CCP2M_POSITION                   equ 0000h
CCP2CON_CCP2M_SIZE                       equ 0004h
CCP2CON_CCP2M_LENGTH                     equ 0004h
CCP2CON_CCP2M_MASK                       equ 000Fh
CCP2CON_DC2B_POSN                        equ 0004h
CCP2CON_DC2B_POSITION                    equ 0004h
CCP2CON_DC2B_SIZE                        equ 0002h
CCP2CON_DC2B_LENGTH                      equ 0002h
CCP2CON_DC2B_MASK                        equ 0030h
CCP2CON_CCP2M0_POSN                      equ 0000h
CCP2CON_CCP2M0_POSITION                  equ 0000h
CCP2CON_CCP2M0_SIZE                      equ 0001h
CCP2CON_CCP2M0_LENGTH                    equ 0001h
CCP2CON_CCP2M0_MASK                      equ 0001h
CCP2CON_CCP2M1_POSN                      equ 0001h
CCP2CON_CCP2M1_POSITION                  equ 0001h
CCP2CON_CCP2M1_SIZE                      equ 0001h
CCP2CON_CCP2M1_LENGTH                    equ 0001h
CCP2CON_CCP2M1_MASK                      equ 0002h
CCP2CON_CCP2M2_POSN                      equ 0002h
CCP2CON_CCP2M2_POSITION                  equ 0002h
CCP2CON_CCP2M2_SIZE                      equ 0001h
CCP2CON_CCP2M2_LENGTH                    equ 0001h
CCP2CON_CCP2M2_MASK                      equ 0004h
CCP2CON_CCP2M3_POSN                      equ 0003h
CCP2CON_CCP2M3_POSITION                  equ 0003h
CCP2CON_CCP2M3_SIZE                      equ 0001h
CCP2CON_CCP2M3_LENGTH                    equ 0001h
CCP2CON_CCP2M3_MASK                      equ 0008h
CCP2CON_DC2B0_POSN                       equ 0004h
CCP2CON_DC2B0_POSITION                   equ 0004h
CCP2CON_DC2B0_SIZE                       equ 0001h
CCP2CON_DC2B0_LENGTH                     equ 0001h
CCP2CON_DC2B0_MASK                       equ 0010h
CCP2CON_DC2B1_POSN                       equ 0005h
CCP2CON_DC2B1_POSITION                   equ 0005h
CCP2CON_DC2B1_SIZE                       equ 0001h
CCP2CON_DC2B1_LENGTH                     equ 0001h
CCP2CON_DC2B1_MASK                       equ 0020h
CCP2CON_CCP2Y_POSN                       equ 0004h
CCP2CON_CCP2Y_POSITION                   equ 0004h
CCP2CON_CCP2Y_SIZE                       equ 0001h
CCP2CON_CCP2Y_LENGTH                     equ 0001h
CCP2CON_CCP2Y_MASK                       equ 0010h
CCP2CON_CCP2X_POSN                       equ 0005h
CCP2CON_CCP2X_POSITION                   equ 0005h
CCP2CON_CCP2X_SIZE                       equ 0001h
CCP2CON_CCP2X_LENGTH                     equ 0001h
CCP2CON_CCP2X_MASK                       equ 0020h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0F98h
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
CM1CON0_CREF_POSN                        equ 0002h
CM1CON0_CREF_POSITION                    equ 0002h
CM1CON0_CREF_SIZE                        equ 0001h
CM1CON0_CREF_LENGTH                      equ 0001h
CM1CON0_CREF_MASK                        equ 0004h
CM1CON0_CPOL_POSN                        equ 0004h
CM1CON0_CPOL_POSITION                    equ 0004h
CM1CON0_CPOL_SIZE                        equ 0001h
CM1CON0_CPOL_LENGTH                      equ 0001h
CM1CON0_CPOL_MASK                        equ 0010h
CM1CON0_COE_POSN                         equ 0005h
CM1CON0_COE_POSITION                     equ 0005h
CM1CON0_COE_SIZE                         equ 0001h
CM1CON0_COE_LENGTH                       equ 0001h
CM1CON0_COE_MASK                         equ 0020h
CM1CON0_COUT1_POSN                       equ 0006h
CM1CON0_COUT1_POSITION                   equ 0006h
CM1CON0_COUT1_SIZE                       equ 0001h
CM1CON0_COUT1_LENGTH                     equ 0001h
CM1CON0_COUT1_MASK                       equ 0040h
CM1CON0_CON_POSN                         equ 0007h
CM1CON0_CON_POSITION                     equ 0007h
CM1CON0_CON_SIZE                         equ 0001h
CM1CON0_CON_LENGTH                       equ 0001h
CM1CON0_CON_MASK                         equ 0080h
CM1CON0_CCH_POSN                         equ 0000h
CM1CON0_CCH_POSITION                     equ 0000h
CM1CON0_CCH_SIZE                         equ 0002h
CM1CON0_CCH_LENGTH                       equ 0002h
CM1CON0_CCH_MASK                         equ 0003h
CM1CON0_CCH0_POSN                        equ 0000h
CM1CON0_CCH0_POSITION                    equ 0000h
CM1CON0_CCH0_SIZE                        equ 0001h
CM1CON0_CCH0_LENGTH                      equ 0001h
CM1CON0_CCH0_MASK                        equ 0001h
CM1CON0_CCH1_POSN                        equ 0001h
CM1CON0_CCH1_POSITION                    equ 0001h
CM1CON0_CCH1_SIZE                        equ 0001h
CM1CON0_CCH1_LENGTH                      equ 0001h
CM1CON0_CCH1_MASK                        equ 0002h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0F99h
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
CM2CON0_CREF_POSN                        equ 0002h
CM2CON0_CREF_POSITION                    equ 0002h
CM2CON0_CREF_SIZE                        equ 0001h
CM2CON0_CREF_LENGTH                      equ 0001h
CM2CON0_CREF_MASK                        equ 0004h
CM2CON0_CPOL_POSN                        equ 0004h
CM2CON0_CPOL_POSITION                    equ 0004h
CM2CON0_CPOL_SIZE                        equ 0001h
CM2CON0_CPOL_LENGTH                      equ 0001h
CM2CON0_CPOL_MASK                        equ 0010h
CM2CON0_COE_POSN                         equ 0005h
CM2CON0_COE_POSITION                     equ 0005h
CM2CON0_COE_SIZE                         equ 0001h
CM2CON0_COE_LENGTH                       equ 0001h
CM2CON0_COE_MASK                         equ 0020h
CM2CON0_COUT2_POSN                       equ 0006h
CM2CON0_COUT2_POSITION                   equ 0006h
CM2CON0_COUT2_SIZE                       equ 0001h
CM2CON0_COUT2_LENGTH                     equ 0001h
CM2CON0_COUT2_MASK                       equ 0040h
CM2CON0_CON_POSN                         equ 0007h
CM2CON0_CON_POSITION                     equ 0007h
CM2CON0_CON_SIZE                         equ 0001h
CM2CON0_CON_LENGTH                       equ 0001h
CM2CON0_CON_MASK                         equ 0080h
CM2CON0_CCH_POSN                         equ 0000h
CM2CON0_CCH_POSITION                     equ 0000h
CM2CON0_CCH_SIZE                         equ 0002h
CM2CON0_CCH_LENGTH                       equ 0002h
CM2CON0_CCH_MASK                         equ 0003h
CM2CON0_CCH0_POSN                        equ 0000h
CM2CON0_CCH0_POSITION                    equ 0000h
CM2CON0_CCH0_SIZE                        equ 0001h
CM2CON0_CCH0_LENGTH                      equ 0001h
CM2CON0_CCH0_MASK                        equ 0001h
CM2CON0_CCH1_POSN                        equ 0001h
CM2CON0_CCH1_POSITION                    equ 0001h
CM2CON0_CCH1_SIZE                        equ 0001h
CM2CON0_CCH1_LENGTH                      equ 0001h
CM2CON0_CCH1_MASK                        equ 0002h

// Register: CM2CON1
#define CM2CON1 CM2CON1
CM2CON1                                  equ 0F9Ah
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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0F9Bh
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0007h
OSCTUNE_TUN_LENGTH                       equ 0007h
OSCTUNE_TUN_MASK                         equ 007Fh
OSCTUNE_SPLLMULT_POSN                    equ 0007h
OSCTUNE_SPLLMULT_POSITION                equ 0007h
OSCTUNE_SPLLMULT_SIZE                    equ 0001h
OSCTUNE_SPLLMULT_LENGTH                  equ 0001h
OSCTUNE_SPLLMULT_MASK                    equ 0080h
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
OSCTUNE_TUN6_POSN                        equ 0006h
OSCTUNE_TUN6_POSITION                    equ 0006h
OSCTUNE_TUN6_SIZE                        equ 0001h
OSCTUNE_TUN6_LENGTH                      equ 0001h
OSCTUNE_TUN6_MASK                        equ 0040h

// Register: HLVDCON
#define HLVDCON HLVDCON
HLVDCON                                  equ 0F9Ch
// bitfield definitions
HLVDCON_HLVDL_POSN                       equ 0000h
HLVDCON_HLVDL_POSITION                   equ 0000h
HLVDCON_HLVDL_SIZE                       equ 0004h
HLVDCON_HLVDL_LENGTH                     equ 0004h
HLVDCON_HLVDL_MASK                       equ 000Fh
HLVDCON_HLVDEN_POSN                      equ 0004h
HLVDCON_HLVDEN_POSITION                  equ 0004h
HLVDCON_HLVDEN_SIZE                      equ 0001h
HLVDCON_HLVDEN_LENGTH                    equ 0001h
HLVDCON_HLVDEN_MASK                      equ 0010h
HLVDCON_IRVST_POSN                       equ 0005h
HLVDCON_IRVST_POSITION                   equ 0005h
HLVDCON_IRVST_SIZE                       equ 0001h
HLVDCON_IRVST_LENGTH                     equ 0001h
HLVDCON_IRVST_MASK                       equ 0020h
HLVDCON_BGVST_POSN                       equ 0006h
HLVDCON_BGVST_POSITION                   equ 0006h
HLVDCON_BGVST_SIZE                       equ 0001h
HLVDCON_BGVST_LENGTH                     equ 0001h
HLVDCON_BGVST_MASK                       equ 0040h
HLVDCON_VDIRMAG_POSN                     equ 0007h
HLVDCON_VDIRMAG_POSITION                 equ 0007h
HLVDCON_VDIRMAG_SIZE                     equ 0001h
HLVDCON_VDIRMAG_LENGTH                   equ 0001h
HLVDCON_VDIRMAG_MASK                     equ 0080h
HLVDCON_HLVDL0_POSN                      equ 0000h
HLVDCON_HLVDL0_POSITION                  equ 0000h
HLVDCON_HLVDL0_SIZE                      equ 0001h
HLVDCON_HLVDL0_LENGTH                    equ 0001h
HLVDCON_HLVDL0_MASK                      equ 0001h
HLVDCON_HLVDL1_POSN                      equ 0001h
HLVDCON_HLVDL1_POSITION                  equ 0001h
HLVDCON_HLVDL1_SIZE                      equ 0001h
HLVDCON_HLVDL1_LENGTH                    equ 0001h
HLVDCON_HLVDL1_MASK                      equ 0002h
HLVDCON_HLVDL2_POSN                      equ 0002h
HLVDCON_HLVDL2_POSITION                  equ 0002h
HLVDCON_HLVDL2_SIZE                      equ 0001h
HLVDCON_HLVDL2_LENGTH                    equ 0001h
HLVDCON_HLVDL2_MASK                      equ 0004h
HLVDCON_HLVDL3_POSN                      equ 0003h
HLVDCON_HLVDL3_POSITION                  equ 0003h
HLVDCON_HLVDL3_SIZE                      equ 0001h
HLVDCON_HLVDL3_LENGTH                    equ 0001h
HLVDCON_HLVDL3_MASK                      equ 0008h

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
PIE1_ACTIE_POSN                          equ 0007h
PIE1_ACTIE_POSITION                      equ 0007h
PIE1_ACTIE_SIZE                          equ 0001h
PIE1_ACTIE_LENGTH                        equ 0001h
PIE1_ACTIE_MASK                          equ 0080h
PIE1_SSP1IE_POSN                         equ 0003h
PIE1_SSP1IE_POSITION                     equ 0003h
PIE1_SSP1IE_SIZE                         equ 0001h
PIE1_SSP1IE_LENGTH                       equ 0001h
PIE1_SSP1IE_MASK                         equ 0008h
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
PIE1_STIE_POSN                           equ 0007h
PIE1_STIE_POSITION                       equ 0007h
PIE1_STIE_SIZE                           equ 0001h
PIE1_STIE_LENGTH                         equ 0001h
PIE1_STIE_MASK                           equ 0080h
PIE1_PSPIE_POSN                          equ 0007h
PIE1_PSPIE_POSITION                      equ 0007h
PIE1_PSPIE_SIZE                          equ 0001h
PIE1_PSPIE_LENGTH                        equ 0001h
PIE1_PSPIE_MASK                          equ 0080h

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
PIR1_ACTIF_POSN                          equ 0007h
PIR1_ACTIF_POSITION                      equ 0007h
PIR1_ACTIF_SIZE                          equ 0001h
PIR1_ACTIF_LENGTH                        equ 0001h
PIR1_ACTIF_MASK                          equ 0080h
PIR1_SSP1IF_POSN                         equ 0003h
PIR1_SSP1IF_POSITION                     equ 0003h
PIR1_SSP1IF_SIZE                         equ 0001h
PIR1_SSP1IF_LENGTH                       equ 0001h
PIR1_SSP1IF_MASK                         equ 0008h
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
PIR1_STIF_POSN                           equ 0007h
PIR1_STIF_POSITION                       equ 0007h
PIR1_STIF_SIZE                           equ 0001h
PIR1_STIF_LENGTH                         equ 0001h
PIR1_STIF_MASK                           equ 0080h
PIR1_PSPIF_POSN                          equ 0007h
PIR1_PSPIF_POSITION                      equ 0007h
PIR1_PSPIF_SIZE                          equ 0001h
PIR1_PSPIF_LENGTH                        equ 0001h
PIR1_PSPIF_MASK                          equ 0080h

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
IPR1_ACTIP_POSN                          equ 0007h
IPR1_ACTIP_POSITION                      equ 0007h
IPR1_ACTIP_SIZE                          equ 0001h
IPR1_ACTIP_LENGTH                        equ 0001h
IPR1_ACTIP_MASK                          equ 0080h
IPR1_SSP1IP_POSN                         equ 0003h
IPR1_SSP1IP_POSITION                     equ 0003h
IPR1_SSP1IP_SIZE                         equ 0001h
IPR1_SSP1IP_LENGTH                       equ 0001h
IPR1_SSP1IP_MASK                         equ 0008h
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
IPR1_STIP_POSN                           equ 0007h
IPR1_STIP_POSITION                       equ 0007h
IPR1_STIP_SIZE                           equ 0001h
IPR1_STIP_LENGTH                         equ 0001h
IPR1_STIP_MASK                           equ 0080h
IPR1_PSPIP_POSN                          equ 0007h
IPR1_PSPIP_POSITION                      equ 0007h
IPR1_PSPIP_SIZE                          equ 0001h
IPR1_PSPIP_LENGTH                        equ 0001h
IPR1_PSPIP_MASK                          equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0FA0h
// bitfield definitions
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h
PIE2_TMR3IE_POSN                         equ 0001h
PIE2_TMR3IE_POSITION                     equ 0001h
PIE2_TMR3IE_SIZE                         equ 0001h
PIE2_TMR3IE_LENGTH                       equ 0001h
PIE2_TMR3IE_MASK                         equ 0002h
PIE2_HLVDIE_POSN                         equ 0002h
PIE2_HLVDIE_POSITION                     equ 0002h
PIE2_HLVDIE_SIZE                         equ 0001h
PIE2_HLVDIE_LENGTH                       equ 0001h
PIE2_HLVDIE_MASK                         equ 0004h
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
PIE2_LVDIE_POSN                          equ 0002h
PIE2_LVDIE_POSITION                      equ 0002h
PIE2_LVDIE_SIZE                          equ 0001h
PIE2_LVDIE_LENGTH                        equ 0001h
PIE2_LVDIE_MASK                          equ 0004h
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h
PIE2_CM2IE_POSN                          equ 0005h
PIE2_CM2IE_POSITION                      equ 0005h
PIE2_CM2IE_SIZE                          equ 0001h
PIE2_CM2IE_LENGTH                        equ 0001h
PIE2_CM2IE_MASK                          equ 0020h
PIE2_CM1IE_POSN                          equ 0006h
PIE2_CM1IE_POSITION                      equ 0006h
PIE2_CM1IE_SIZE                          equ 0001h
PIE2_CM1IE_LENGTH                        equ 0001h
PIE2_CM1IE_MASK                          equ 0040h
PIE2_CMIE_POSN                           equ 0006h
PIE2_CMIE_POSITION                       equ 0006h
PIE2_CMIE_SIZE                           equ 0001h
PIE2_CMIE_LENGTH                         equ 0001h
PIE2_CMIE_MASK                           equ 0040h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0FA1h
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_TMR3IF_POSN                         equ 0001h
PIR2_TMR3IF_POSITION                     equ 0001h
PIR2_TMR3IF_SIZE                         equ 0001h
PIR2_TMR3IF_LENGTH                       equ 0001h
PIR2_TMR3IF_MASK                         equ 0002h
PIR2_HLVDIF_POSN                         equ 0002h
PIR2_HLVDIF_POSITION                     equ 0002h
PIR2_HLVDIF_SIZE                         equ 0001h
PIR2_HLVDIF_LENGTH                       equ 0001h
PIR2_HLVDIF_MASK                         equ 0004h
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
PIR2_LVDIF_POSN                          equ 0002h
PIR2_LVDIF_POSITION                      equ 0002h
PIR2_LVDIF_SIZE                          equ 0001h
PIR2_LVDIF_LENGTH                        equ 0001h
PIR2_LVDIF_MASK                          equ 0004h
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h
PIR2_CM2IF_POSN                          equ 0005h
PIR2_CM2IF_POSITION                      equ 0005h
PIR2_CM2IF_SIZE                          equ 0001h
PIR2_CM2IF_LENGTH                        equ 0001h
PIR2_CM2IF_MASK                          equ 0020h
PIR2_CM1IF_POSN                          equ 0006h
PIR2_CM1IF_POSITION                      equ 0006h
PIR2_CM1IF_SIZE                          equ 0001h
PIR2_CM1IF_LENGTH                        equ 0001h
PIR2_CM1IF_MASK                          equ 0040h
PIR2_CMIF_POSN                           equ 0006h
PIR2_CMIF_POSITION                       equ 0006h
PIR2_CMIF_SIZE                           equ 0001h
PIR2_CMIF_LENGTH                         equ 0001h
PIR2_CMIF_MASK                           equ 0040h

// Register: IPR2
#define IPR2 IPR2
IPR2                                     equ 0FA2h
// bitfield definitions
IPR2_CCP2IP_POSN                         equ 0000h
IPR2_CCP2IP_POSITION                     equ 0000h
IPR2_CCP2IP_SIZE                         equ 0001h
IPR2_CCP2IP_LENGTH                       equ 0001h
IPR2_CCP2IP_MASK                         equ 0001h
IPR2_TMR3IP_POSN                         equ 0001h
IPR2_TMR3IP_POSITION                     equ 0001h
IPR2_TMR3IP_SIZE                         equ 0001h
IPR2_TMR3IP_LENGTH                       equ 0001h
IPR2_TMR3IP_MASK                         equ 0002h
IPR2_HLVDIP_POSN                         equ 0002h
IPR2_HLVDIP_POSITION                     equ 0002h
IPR2_HLVDIP_SIZE                         equ 0001h
IPR2_HLVDIP_LENGTH                       equ 0001h
IPR2_HLVDIP_MASK                         equ 0004h
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
IPR2_LVDIP_POSN                          equ 0002h
IPR2_LVDIP_POSITION                      equ 0002h
IPR2_LVDIP_SIZE                          equ 0001h
IPR2_LVDIP_LENGTH                        equ 0001h
IPR2_LVDIP_MASK                          equ 0004h
IPR2_BCL1IP_POSN                         equ 0003h
IPR2_BCL1IP_POSITION                     equ 0003h
IPR2_BCL1IP_SIZE                         equ 0001h
IPR2_BCL1IP_LENGTH                       equ 0001h
IPR2_BCL1IP_MASK                         equ 0008h
IPR2_CM2IP_POSN                          equ 0005h
IPR2_CM2IP_POSITION                      equ 0005h
IPR2_CM2IP_SIZE                          equ 0001h
IPR2_CM2IP_LENGTH                        equ 0001h
IPR2_CM2IP_MASK                          equ 0020h
IPR2_CM1IP_POSN                          equ 0006h
IPR2_CM1IP_POSITION                      equ 0006h
IPR2_CM1IP_SIZE                          equ 0001h
IPR2_CM1IP_LENGTH                        equ 0001h
IPR2_CM1IP_MASK                          equ 0040h
IPR2_CMIP_POSN                           equ 0006h
IPR2_CMIP_POSITION                       equ 0006h
IPR2_CMIP_SIZE                           equ 0001h
IPR2_CMIP_LENGTH                         equ 0001h
IPR2_CMIP_MASK                           equ 0040h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0FA3h
// bitfield definitions
PIE3_TMR1GIE_POSN                        equ 0000h
PIE3_TMR1GIE_POSITION                    equ 0000h
PIE3_TMR1GIE_SIZE                        equ 0001h
PIE3_TMR1GIE_LENGTH                      equ 0001h
PIE3_TMR1GIE_MASK                        equ 0001h
PIE3_TMR3GIE_POSN                        equ 0001h
PIE3_TMR3GIE_POSITION                    equ 0001h
PIE3_TMR3GIE_SIZE                        equ 0001h
PIE3_TMR3GIE_LENGTH                      equ 0001h
PIE3_TMR3GIE_MASK                        equ 0002h
PIE3_USBIE_POSN                          equ 0002h
PIE3_USBIE_POSITION                      equ 0002h
PIE3_USBIE_SIZE                          equ 0001h
PIE3_USBIE_LENGTH                        equ 0001h
PIE3_USBIE_MASK                          equ 0004h
PIE3_CTMUIE_POSN                         equ 0003h
PIE3_CTMUIE_POSITION                     equ 0003h
PIE3_CTMUIE_SIZE                         equ 0001h
PIE3_CTMUIE_LENGTH                       equ 0001h
PIE3_CTMUIE_MASK                         equ 0008h
PIE3_RXB0IE_POSN                         equ 0000h
PIE3_RXB0IE_POSITION                     equ 0000h
PIE3_RXB0IE_SIZE                         equ 0001h
PIE3_RXB0IE_LENGTH                       equ 0001h
PIE3_RXB0IE_MASK                         equ 0001h
PIE3_RXB1IE_POSN                         equ 0001h
PIE3_RXB1IE_POSITION                     equ 0001h
PIE3_RXB1IE_SIZE                         equ 0001h
PIE3_RXB1IE_LENGTH                       equ 0001h
PIE3_RXB1IE_MASK                         equ 0002h
PIE3_TXB0IE_POSN                         equ 0002h
PIE3_TXB0IE_POSITION                     equ 0002h
PIE3_TXB0IE_SIZE                         equ 0001h
PIE3_TXB0IE_LENGTH                       equ 0001h
PIE3_TXB0IE_MASK                         equ 0004h
PIE3_TXB1IE_POSN                         equ 0003h
PIE3_TXB1IE_POSITION                     equ 0003h
PIE3_TXB1IE_SIZE                         equ 0001h
PIE3_TXB1IE_LENGTH                       equ 0001h
PIE3_TXB1IE_MASK                         equ 0008h
PIE3_RXBNIE_POSN                         equ 0001h
PIE3_RXBNIE_POSITION                     equ 0001h
PIE3_RXBNIE_SIZE                         equ 0001h
PIE3_RXBNIE_LENGTH                       equ 0001h
PIE3_RXBNIE_MASK                         equ 0002h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0FA4h
// bitfield definitions
PIR3_TMR1GIF_POSN                        equ 0000h
PIR3_TMR1GIF_POSITION                    equ 0000h
PIR3_TMR1GIF_SIZE                        equ 0001h
PIR3_TMR1GIF_LENGTH                      equ 0001h
PIR3_TMR1GIF_MASK                        equ 0001h
PIR3_TMR3GIF_POSN                        equ 0001h
PIR3_TMR3GIF_POSITION                    equ 0001h
PIR3_TMR3GIF_SIZE                        equ 0001h
PIR3_TMR3GIF_LENGTH                      equ 0001h
PIR3_TMR3GIF_MASK                        equ 0002h
PIR3_USBIF_POSN                          equ 0002h
PIR3_USBIF_POSITION                      equ 0002h
PIR3_USBIF_SIZE                          equ 0001h
PIR3_USBIF_LENGTH                        equ 0001h
PIR3_USBIF_MASK                          equ 0004h
PIR3_CTMUIF_POSN                         equ 0003h
PIR3_CTMUIF_POSITION                     equ 0003h
PIR3_CTMUIF_SIZE                         equ 0001h
PIR3_CTMUIF_LENGTH                       equ 0001h
PIR3_CTMUIF_MASK                         equ 0008h
PIR3_RXBNIF_POSN                         equ 0001h
PIR3_RXBNIF_POSITION                     equ 0001h
PIR3_RXBNIF_SIZE                         equ 0001h
PIR3_RXBNIF_LENGTH                       equ 0001h
PIR3_RXBNIF_MASK                         equ 0002h

// Register: IPR3
#define IPR3 IPR3
IPR3                                     equ 0FA5h
// bitfield definitions
IPR3_TMR1GIP_POSN                        equ 0000h
IPR3_TMR1GIP_POSITION                    equ 0000h
IPR3_TMR1GIP_SIZE                        equ 0001h
IPR3_TMR1GIP_LENGTH                      equ 0001h
IPR3_TMR1GIP_MASK                        equ 0001h
IPR3_TMR3GIP_POSN                        equ 0001h
IPR3_TMR3GIP_POSITION                    equ 0001h
IPR3_TMR3GIP_SIZE                        equ 0001h
IPR3_TMR3GIP_LENGTH                      equ 0001h
IPR3_TMR3GIP_MASK                        equ 0002h
IPR3_USBIP_POSN                          equ 0002h
IPR3_USBIP_POSITION                      equ 0002h
IPR3_USBIP_SIZE                          equ 0001h
IPR3_USBIP_LENGTH                        equ 0001h
IPR3_USBIP_MASK                          equ 0004h
IPR3_CTMUIP_POSN                         equ 0003h
IPR3_CTMUIP_POSITION                     equ 0003h
IPR3_CTMUIP_SIZE                         equ 0001h
IPR3_CTMUIP_LENGTH                       equ 0001h
IPR3_CTMUIP_MASK                         equ 0008h
IPR3_RXBNIP_POSN                         equ 0001h
IPR3_RXBNIP_POSITION                     equ 0001h
IPR3_RXBNIP_SIZE                         equ 0001h
IPR3_RXBNIP_LENGTH                       equ 0001h
IPR3_RXBNIP_MASK                         equ 0002h

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
// bitfield definitions
EECON2_EECON2_POSN                       equ 0000h
EECON2_EECON2_POSITION                   equ 0000h
EECON2_EECON2_SIZE                       equ 0008h
EECON2_EECON2_LENGTH                     equ 0008h
EECON2_EECON2_MASK                       equ 00FFh

// Register: EEDATA
#define EEDATA EEDATA
EEDATA                                   equ 0FA8h

// Register: EEADR
#define EEADR EEADR
EEADR                                    equ 0FA9h

// Register: RCSTA1
#define RCSTA1 RCSTA1
RCSTA1                                   equ 0FABh
// bitfield definitions
RCSTA1_RX9D_POSN                         equ 0000h
RCSTA1_RX9D_POSITION                     equ 0000h
RCSTA1_RX9D_SIZE                         equ 0001h
RCSTA1_RX9D_LENGTH                       equ 0001h
RCSTA1_RX9D_MASK                         equ 0001h
RCSTA1_OERR_POSN                         equ 0001h
RCSTA1_OERR_POSITION                     equ 0001h
RCSTA1_OERR_SIZE                         equ 0001h
RCSTA1_OERR_LENGTH                       equ 0001h
RCSTA1_OERR_MASK                         equ 0002h
RCSTA1_FERR_POSN                         equ 0002h
RCSTA1_FERR_POSITION                     equ 0002h
RCSTA1_FERR_SIZE                         equ 0001h
RCSTA1_FERR_LENGTH                       equ 0001h
RCSTA1_FERR_MASK                         equ 0004h
RCSTA1_ADDEN_POSN                        equ 0003h
RCSTA1_ADDEN_POSITION                    equ 0003h
RCSTA1_ADDEN_SIZE                        equ 0001h
RCSTA1_ADDEN_LENGTH                      equ 0001h
RCSTA1_ADDEN_MASK                        equ 0008h
RCSTA1_CREN_POSN                         equ 0004h
RCSTA1_CREN_POSITION                     equ 0004h
RCSTA1_CREN_SIZE                         equ 0001h
RCSTA1_CREN_LENGTH                       equ 0001h
RCSTA1_CREN_MASK                         equ 0010h
RCSTA1_SREN_POSN                         equ 0005h
RCSTA1_SREN_POSITION                     equ 0005h
RCSTA1_SREN_SIZE                         equ 0001h
RCSTA1_SREN_LENGTH                       equ 0001h
RCSTA1_SREN_MASK                         equ 0020h
RCSTA1_RX9_POSN                          equ 0006h
RCSTA1_RX9_POSITION                      equ 0006h
RCSTA1_RX9_SIZE                          equ 0001h
RCSTA1_RX9_LENGTH                        equ 0001h
RCSTA1_RX9_MASK                          equ 0040h
RCSTA1_SPEN_POSN                         equ 0007h
RCSTA1_SPEN_POSITION                     equ 0007h
RCSTA1_SPEN_SIZE                         equ 0001h
RCSTA1_SPEN_LENGTH                       equ 0001h
RCSTA1_SPEN_MASK                         equ 0080h
RCSTA1_ADEN_POSN                         equ 0003h
RCSTA1_ADEN_POSITION                     equ 0003h
RCSTA1_ADEN_SIZE                         equ 0001h
RCSTA1_ADEN_LENGTH                       equ 0001h
RCSTA1_ADEN_MASK                         equ 0008h
RCSTA1_RCD8_POSN                         equ 0000h
RCSTA1_RCD8_POSITION                     equ 0000h
RCSTA1_RCD8_SIZE                         equ 0001h
RCSTA1_RCD8_LENGTH                       equ 0001h
RCSTA1_RCD8_MASK                         equ 0001h
RCSTA1_RC8_9_POSN                        equ 0006h
RCSTA1_RC8_9_POSITION                    equ 0006h
RCSTA1_RC8_9_SIZE                        equ 0001h
RCSTA1_RC8_9_LENGTH                      equ 0001h
RCSTA1_RC8_9_MASK                        equ 0040h
RCSTA1_RC9_POSN                          equ 0006h
RCSTA1_RC9_POSITION                      equ 0006h
RCSTA1_RC9_SIZE                          equ 0001h
RCSTA1_RC9_LENGTH                        equ 0001h
RCSTA1_RC9_MASK                          equ 0040h
RCSTA1_SRENA_POSN                        equ 0005h
RCSTA1_SRENA_POSITION                    equ 0005h
RCSTA1_SRENA_SIZE                        equ 0001h
RCSTA1_SRENA_LENGTH                      equ 0001h
RCSTA1_SRENA_MASK                        equ 0020h

// Register: TXSTA1
#define TXSTA1 TXSTA1
TXSTA1                                   equ 0FACh
// bitfield definitions
TXSTA1_TX9D_POSN                         equ 0000h
TXSTA1_TX9D_POSITION                     equ 0000h
TXSTA1_TX9D_SIZE                         equ 0001h
TXSTA1_TX9D_LENGTH                       equ 0001h
TXSTA1_TX9D_MASK                         equ 0001h
TXSTA1_TRMT_POSN                         equ 0001h
TXSTA1_TRMT_POSITION                     equ 0001h
TXSTA1_TRMT_SIZE                         equ 0001h
TXSTA1_TRMT_LENGTH                       equ 0001h
TXSTA1_TRMT_MASK                         equ 0002h
TXSTA1_BRGH_POSN                         equ 0002h
TXSTA1_BRGH_POSITION                     equ 0002h
TXSTA1_BRGH_SIZE                         equ 0001h
TXSTA1_BRGH_LENGTH                       equ 0001h
TXSTA1_BRGH_MASK                         equ 0004h
TXSTA1_SENDB_POSN                        equ 0003h
TXSTA1_SENDB_POSITION                    equ 0003h
TXSTA1_SENDB_SIZE                        equ 0001h
TXSTA1_SENDB_LENGTH                      equ 0001h
TXSTA1_SENDB_MASK                        equ 0008h
TXSTA1_SYNC_POSN                         equ 0004h
TXSTA1_SYNC_POSITION                     equ 0004h
TXSTA1_SYNC_SIZE                         equ 0001h
TXSTA1_SYNC_LENGTH                       equ 0001h
TXSTA1_SYNC_MASK                         equ 0010h
TXSTA1_TXEN_POSN                         equ 0005h
TXSTA1_TXEN_POSITION                     equ 0005h
TXSTA1_TXEN_SIZE                         equ 0001h
TXSTA1_TXEN_LENGTH                       equ 0001h
TXSTA1_TXEN_MASK                         equ 0020h
TXSTA1_TX9_POSN                          equ 0006h
TXSTA1_TX9_POSITION                      equ 0006h
TXSTA1_TX9_SIZE                          equ 0001h
TXSTA1_TX9_LENGTH                        equ 0001h
TXSTA1_TX9_MASK                          equ 0040h
TXSTA1_CSRC_POSN                         equ 0007h
TXSTA1_CSRC_POSITION                     equ 0007h
TXSTA1_CSRC_SIZE                         equ 0001h
TXSTA1_CSRC_LENGTH                       equ 0001h
TXSTA1_CSRC_MASK                         equ 0080h
TXSTA1_TXD8_POSN                         equ 0000h
TXSTA1_TXD8_POSITION                     equ 0000h
TXSTA1_TXD8_SIZE                         equ 0001h
TXSTA1_TXD8_LENGTH                       equ 0001h
TXSTA1_TXD8_MASK                         equ 0001h
TXSTA1_TX8_9_POSN                        equ 0006h
TXSTA1_TX8_9_POSITION                    equ 0006h
TXSTA1_TX8_9_SIZE                        equ 0001h
TXSTA1_TX8_9_LENGTH                      equ 0001h
TXSTA1_TX8_9_MASK                        equ 0040h
TXSTA1_BRGH1_POSN                        equ 0002h
TXSTA1_BRGH1_POSITION                    equ 0002h
TXSTA1_BRGH1_SIZE                        equ 0001h
TXSTA1_BRGH1_LENGTH                      equ 0001h
TXSTA1_BRGH1_MASK                        equ 0004h
TXSTA1_CSRC1_POSN                        equ 0007h
TXSTA1_CSRC1_POSITION                    equ 0007h
TXSTA1_CSRC1_SIZE                        equ 0001h
TXSTA1_CSRC1_LENGTH                      equ 0001h
TXSTA1_CSRC1_MASK                        equ 0080h
TXSTA1_SENDB1_POSN                       equ 0003h
TXSTA1_SENDB1_POSITION                   equ 0003h
TXSTA1_SENDB1_SIZE                       equ 0001h
TXSTA1_SENDB1_LENGTH                     equ 0001h
TXSTA1_SENDB1_MASK                       equ 0008h
TXSTA1_SYNC1_POSN                        equ 0004h
TXSTA1_SYNC1_POSITION                    equ 0004h
TXSTA1_SYNC1_SIZE                        equ 0001h
TXSTA1_SYNC1_LENGTH                      equ 0001h
TXSTA1_SYNC1_MASK                        equ 0010h
TXSTA1_TRMT1_POSN                        equ 0001h
TXSTA1_TRMT1_POSITION                    equ 0001h
TXSTA1_TRMT1_SIZE                        equ 0001h
TXSTA1_TRMT1_LENGTH                      equ 0001h
TXSTA1_TRMT1_MASK                        equ 0002h
TXSTA1_TX91_POSN                         equ 0006h
TXSTA1_TX91_POSITION                     equ 0006h
TXSTA1_TX91_SIZE                         equ 0001h
TXSTA1_TX91_LENGTH                       equ 0001h
TXSTA1_TX91_MASK                         equ 0040h
TXSTA1_TX9D1_POSN                        equ 0000h
TXSTA1_TX9D1_POSITION                    equ 0000h
TXSTA1_TX9D1_SIZE                        equ 0001h
TXSTA1_TX9D1_LENGTH                      equ 0001h
TXSTA1_TX9D1_MASK                        equ 0001h
TXSTA1_TXEN1_POSN                        equ 0005h
TXSTA1_TXEN1_POSITION                    equ 0005h
TXSTA1_TXEN1_SIZE                        equ 0001h
TXSTA1_TXEN1_LENGTH                      equ 0001h
TXSTA1_TXEN1_MASK                        equ 0020h

// Register: TXREG1
#define TXREG1 TXREG1
TXREG1                                   equ 0FADh
// bitfield definitions
TXREG1_TXREG1_POSN                       equ 0000h
TXREG1_TXREG1_POSITION                   equ 0000h
TXREG1_TXREG1_SIZE                       equ 0008h
TXREG1_TXREG1_LENGTH                     equ 0008h
TXREG1_TXREG1_MASK                       equ 00FFh

// Register: RCREG1
#define RCREG1 RCREG1
RCREG1                                   equ 0FAEh
// bitfield definitions
RCREG1_RCREG1_POSN                       equ 0000h
RCREG1_RCREG1_POSITION                   equ 0000h
RCREG1_RCREG1_SIZE                       equ 0008h
RCREG1_RCREG1_LENGTH                     equ 0008h
RCREG1_RCREG1_MASK                       equ 00FFh

// Register: SPBRG1
#define SPBRG1 SPBRG1
SPBRG1                                   equ 0FAFh
// bitfield definitions
SPBRG1_SPBRG1_POSN                       equ 0000h
SPBRG1_SPBRG1_POSITION                   equ 0000h
SPBRG1_SPBRG1_SIZE                       equ 0008h
SPBRG1_SPBRG1_LENGTH                     equ 0008h
SPBRG1_SPBRG1_MASK                       equ 00FFh
SPBRG1_BRG0_POSN                         equ 0000h
SPBRG1_BRG0_POSITION                     equ 0000h
SPBRG1_BRG0_SIZE                         equ 0001h
SPBRG1_BRG0_LENGTH                       equ 0001h
SPBRG1_BRG0_MASK                         equ 0001h
SPBRG1_BRG1_POSN                         equ 0001h
SPBRG1_BRG1_POSITION                     equ 0001h
SPBRG1_BRG1_SIZE                         equ 0001h
SPBRG1_BRG1_LENGTH                       equ 0001h
SPBRG1_BRG1_MASK                         equ 0002h
SPBRG1_BRG2_POSN                         equ 0002h
SPBRG1_BRG2_POSITION                     equ 0002h
SPBRG1_BRG2_SIZE                         equ 0001h
SPBRG1_BRG2_LENGTH                       equ 0001h
SPBRG1_BRG2_MASK                         equ 0004h
SPBRG1_BRG3_POSN                         equ 0003h
SPBRG1_BRG3_POSITION                     equ 0003h
SPBRG1_BRG3_SIZE                         equ 0001h
SPBRG1_BRG3_LENGTH                       equ 0001h
SPBRG1_BRG3_MASK                         equ 0008h
SPBRG1_BRG4_POSN                         equ 0004h
SPBRG1_BRG4_POSITION                     equ 0004h
SPBRG1_BRG4_SIZE                         equ 0001h
SPBRG1_BRG4_LENGTH                       equ 0001h
SPBRG1_BRG4_MASK                         equ 0010h
SPBRG1_BRG5_POSN                         equ 0005h
SPBRG1_BRG5_POSITION                     equ 0005h
SPBRG1_BRG5_SIZE                         equ 0001h
SPBRG1_BRG5_LENGTH                       equ 0001h
SPBRG1_BRG5_MASK                         equ 0020h
SPBRG1_BRG6_POSN                         equ 0006h
SPBRG1_BRG6_POSITION                     equ 0006h
SPBRG1_BRG6_SIZE                         equ 0001h
SPBRG1_BRG6_LENGTH                       equ 0001h
SPBRG1_BRG6_MASK                         equ 0040h
SPBRG1_BRG7_POSN                         equ 0007h
SPBRG1_BRG7_POSITION                     equ 0007h
SPBRG1_BRG7_SIZE                         equ 0001h
SPBRG1_BRG7_LENGTH                       equ 0001h
SPBRG1_BRG7_MASK                         equ 0080h

// Register: SPBRGH1
#define SPBRGH1 SPBRGH1
SPBRGH1                                  equ 0FB0h
// bitfield definitions
SPBRGH1_SPBRGH1_POSN                     equ 0000h
SPBRGH1_SPBRGH1_POSITION                 equ 0000h
SPBRGH1_SPBRGH1_SIZE                     equ 0008h
SPBRGH1_SPBRGH1_LENGTH                   equ 0008h
SPBRGH1_SPBRGH1_MASK                     equ 00FFh
SPBRGH1_BRG8_POSN                        equ 0000h
SPBRGH1_BRG8_POSITION                    equ 0000h
SPBRGH1_BRG8_SIZE                        equ 0001h
SPBRGH1_BRG8_LENGTH                      equ 0001h
SPBRGH1_BRG8_MASK                        equ 0001h
SPBRGH1_BRG9_POSN                        equ 0001h
SPBRGH1_BRG9_POSITION                    equ 0001h
SPBRGH1_BRG9_SIZE                        equ 0001h
SPBRGH1_BRG9_LENGTH                      equ 0001h
SPBRGH1_BRG9_MASK                        equ 0002h
SPBRGH1_BRG10_POSN                       equ 0002h
SPBRGH1_BRG10_POSITION                   equ 0002h
SPBRGH1_BRG10_SIZE                       equ 0001h
SPBRGH1_BRG10_LENGTH                     equ 0001h
SPBRGH1_BRG10_MASK                       equ 0004h
SPBRGH1_BRG11_POSN                       equ 0003h
SPBRGH1_BRG11_POSITION                   equ 0003h
SPBRGH1_BRG11_SIZE                       equ 0001h
SPBRGH1_BRG11_LENGTH                     equ 0001h
SPBRGH1_BRG11_MASK                       equ 0008h
SPBRGH1_BRG12_POSN                       equ 0004h
SPBRGH1_BRG12_POSITION                   equ 0004h
SPBRGH1_BRG12_SIZE                       equ 0001h
SPBRGH1_BRG12_LENGTH                     equ 0001h
SPBRGH1_BRG12_MASK                       equ 0010h
SPBRGH1_BRG13_POSN                       equ 0005h
SPBRGH1_BRG13_POSITION                   equ 0005h
SPBRGH1_BRG13_SIZE                       equ 0001h
SPBRGH1_BRG13_LENGTH                     equ 0001h
SPBRGH1_BRG13_MASK                       equ 0020h
SPBRGH1_BRG14_POSN                       equ 0006h
SPBRGH1_BRG14_POSITION                   equ 0006h
SPBRGH1_BRG14_SIZE                       equ 0001h
SPBRGH1_BRG14_LENGTH                     equ 0001h
SPBRGH1_BRG14_MASK                       equ 0040h
SPBRGH1_BRG15_POSN                       equ 0007h
SPBRGH1_BRG15_POSITION                   equ 0007h
SPBRGH1_BRG15_SIZE                       equ 0001h
SPBRGH1_BRG15_LENGTH                     equ 0001h
SPBRGH1_BRG15_MASK                       equ 0080h

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
T3CON_RD16_POSN                          equ 0001h
T3CON_RD16_POSITION                      equ 0001h
T3CON_RD16_SIZE                          equ 0001h
T3CON_RD16_LENGTH                        equ 0001h
T3CON_RD16_MASK                          equ 0002h
T3CON_nT3SYNC_POSN                       equ 0002h
T3CON_nT3SYNC_POSITION                   equ 0002h
T3CON_nT3SYNC_SIZE                       equ 0001h
T3CON_nT3SYNC_LENGTH                     equ 0001h
T3CON_nT3SYNC_MASK                       equ 0004h
T3CON_SOSCEN_POSN                        equ 0003h
T3CON_SOSCEN_POSITION                    equ 0003h
T3CON_SOSCEN_SIZE                        equ 0001h
T3CON_SOSCEN_LENGTH                      equ 0001h
T3CON_SOSCEN_MASK                        equ 0008h
T3CON_T3CKPS_POSN                        equ 0004h
T3CON_T3CKPS_POSITION                    equ 0004h
T3CON_T3CKPS_SIZE                        equ 0002h
T3CON_T3CKPS_LENGTH                      equ 0002h
T3CON_T3CKPS_MASK                        equ 0030h
T3CON_TMR3CS_POSN                        equ 0006h
T3CON_TMR3CS_POSITION                    equ 0006h
T3CON_TMR3CS_SIZE                        equ 0002h
T3CON_TMR3CS_LENGTH                      equ 0002h
T3CON_TMR3CS_MASK                        equ 00C0h
T3CON_T3RD16_POSN                        equ 0001h
T3CON_T3RD16_POSITION                    equ 0001h
T3CON_T3RD16_SIZE                        equ 0001h
T3CON_T3RD16_LENGTH                      equ 0001h
T3CON_T3RD16_MASK                        equ 0002h
T3CON_T3SYNC_POSN                        equ 0002h
T3CON_T3SYNC_POSITION                    equ 0002h
T3CON_T3SYNC_SIZE                        equ 0001h
T3CON_T3SYNC_LENGTH                      equ 0001h
T3CON_T3SYNC_MASK                        equ 0004h
T3CON_T3SOSCEN_POSN                      equ 0003h
T3CON_T3SOSCEN_POSITION                  equ 0003h
T3CON_T3SOSCEN_SIZE                      equ 0001h
T3CON_T3SOSCEN_LENGTH                    equ 0001h
T3CON_T3SOSCEN_MASK                      equ 0008h
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
T3CON_TMR3CS0_POSN                       equ 0006h
T3CON_TMR3CS0_POSITION                   equ 0006h
T3CON_TMR3CS0_SIZE                       equ 0001h
T3CON_TMR3CS0_LENGTH                     equ 0001h
T3CON_TMR3CS0_MASK                       equ 0040h
T3CON_TMR3CS1_POSN                       equ 0007h
T3CON_TMR3CS1_POSITION                   equ 0007h
T3CON_TMR3CS1_SIZE                       equ 0001h
T3CON_TMR3CS1_LENGTH                     equ 0001h
T3CON_TMR3CS1_MASK                       equ 0080h
T3CON_T3OSCEN_POSN                       equ 0003h
T3CON_T3OSCEN_POSITION                   equ 0003h
T3CON_T3OSCEN_SIZE                       equ 0001h
T3CON_T3OSCEN_LENGTH                     equ 0001h
T3CON_T3OSCEN_MASK                       equ 0008h
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

// Register: TMR3
#define TMR3 TMR3
TMR3                                     equ 0FB2h

// Register: TMR3L
#define TMR3L TMR3L
TMR3L                                    equ 0FB2h
// bitfield definitions
TMR3L_TMR3L_POSN                         equ 0000h
TMR3L_TMR3L_POSITION                     equ 0000h
TMR3L_TMR3L_SIZE                         equ 0008h
TMR3L_TMR3L_LENGTH                       equ 0008h
TMR3L_TMR3L_MASK                         equ 00FFh

// Register: TMR3H
#define TMR3H TMR3H
TMR3H                                    equ 0FB3h
// bitfield definitions
TMR3H_TMR3H_POSN                         equ 0000h
TMR3H_TMR3H_POSITION                     equ 0000h
TMR3H_TMR3H_SIZE                         equ 0008h
TMR3H_TMR3H_LENGTH                       equ 0008h
TMR3H_TMR3H_MASK                         equ 00FFh

// Register: T3GCON
#define T3GCON T3GCON
T3GCON                                   equ 0FB4h
// bitfield definitions
T3GCON_T3GGO_NOT_T3DONE_POSN             equ 0003h
T3GCON_T3GGO_NOT_T3DONE_POSITION         equ 0003h
T3GCON_T3GGO_NOT_T3DONE_SIZE             equ 0001h
T3GCON_T3GGO_NOT_T3DONE_LENGTH           equ 0001h
T3GCON_T3GGO_NOT_T3DONE_MASK             equ 0008h
T3GCON_T3GSS_POSN                        equ 0000h
T3GCON_T3GSS_POSITION                    equ 0000h
T3GCON_T3GSS_SIZE                        equ 0002h
T3GCON_T3GSS_LENGTH                      equ 0002h
T3GCON_T3GSS_MASK                        equ 0003h
T3GCON_T3GVAL_POSN                       equ 0002h
T3GCON_T3GVAL_POSITION                   equ 0002h
T3GCON_T3GVAL_SIZE                       equ 0001h
T3GCON_T3GVAL_LENGTH                     equ 0001h
T3GCON_T3GVAL_MASK                       equ 0004h
T3GCON_T3GGO_nT3DONE_POSN                equ 0003h
T3GCON_T3GGO_nT3DONE_POSITION            equ 0003h
T3GCON_T3GGO_nT3DONE_SIZE                equ 0001h
T3GCON_T3GGO_nT3DONE_LENGTH              equ 0001h
T3GCON_T3GGO_nT3DONE_MASK                equ 0008h
T3GCON_T3GSPM_POSN                       equ 0004h
T3GCON_T3GSPM_POSITION                   equ 0004h
T3GCON_T3GSPM_SIZE                       equ 0001h
T3GCON_T3GSPM_LENGTH                     equ 0001h
T3GCON_T3GSPM_MASK                       equ 0010h
T3GCON_T3GTM_POSN                        equ 0005h
T3GCON_T3GTM_POSITION                    equ 0005h
T3GCON_T3GTM_SIZE                        equ 0001h
T3GCON_T3GTM_LENGTH                      equ 0001h
T3GCON_T3GTM_MASK                        equ 0020h
T3GCON_T3GPOL_POSN                       equ 0006h
T3GCON_T3GPOL_POSITION                   equ 0006h
T3GCON_T3GPOL_SIZE                       equ 0001h
T3GCON_T3GPOL_LENGTH                     equ 0001h
T3GCON_T3GPOL_MASK                       equ 0040h
T3GCON_TMR3GE_POSN                       equ 0007h
T3GCON_TMR3GE_POSITION                   equ 0007h
T3GCON_TMR3GE_SIZE                       equ 0001h
T3GCON_TMR3GE_LENGTH                     equ 0001h
T3GCON_TMR3GE_MASK                       equ 0080h
T3GCON_T3GSS0_POSN                       equ 0000h
T3GCON_T3GSS0_POSITION                   equ 0000h
T3GCON_T3GSS0_SIZE                       equ 0001h
T3GCON_T3GSS0_LENGTH                     equ 0001h
T3GCON_T3GSS0_MASK                       equ 0001h
T3GCON_T3GSS1_POSN                       equ 0001h
T3GCON_T3GSS1_POSITION                   equ 0001h
T3GCON_T3GSS1_SIZE                       equ 0001h
T3GCON_T3GSS1_LENGTH                     equ 0001h
T3GCON_T3GSS1_MASK                       equ 0002h
T3GCON_T3GGO_POSN                        equ 0003h
T3GCON_T3GGO_POSITION                    equ 0003h
T3GCON_T3GGO_SIZE                        equ 0001h
T3GCON_T3GGO_LENGTH                      equ 0001h
T3GCON_T3GGO_MASK                        equ 0008h
T3GCON_NOT_T3DONE_POSN                   equ 0003h
T3GCON_NOT_T3DONE_POSITION               equ 0003h
T3GCON_NOT_T3DONE_SIZE                   equ 0001h
T3GCON_NOT_T3DONE_LENGTH                 equ 0001h
T3GCON_NOT_T3DONE_MASK                   equ 0008h
T3GCON_nT3DONE_POSN                      equ 0003h
T3GCON_nT3DONE_POSITION                  equ 0003h
T3GCON_nT3DONE_SIZE                      equ 0001h
T3GCON_nT3DONE_LENGTH                    equ 0001h
T3GCON_nT3DONE_MASK                      equ 0008h
T3GCON_T3DONE_POSN                       equ 0003h
T3GCON_T3DONE_POSITION                   equ 0003h
T3GCON_T3DONE_SIZE                       equ 0001h
T3GCON_T3DONE_LENGTH                     equ 0001h
T3GCON_T3DONE_MASK                       equ 0008h
T3GCON_T3GGO_NOT_DONE_POSN               equ 0003h
T3GCON_T3GGO_NOT_DONE_POSITION           equ 0003h
T3GCON_T3GGO_NOT_DONE_SIZE               equ 0001h
T3GCON_T3GGO_NOT_DONE_LENGTH             equ 0001h
T3GCON_T3GGO_NOT_DONE_MASK               equ 0008h
T3GCON_T3GGO_nDONE_POSN                  equ 0003h
T3GCON_T3GGO_nDONE_POSITION              equ 0003h
T3GCON_T3GGO_nDONE_SIZE                  equ 0001h
T3GCON_T3GGO_nDONE_LENGTH                equ 0001h
T3GCON_T3GGO_nDONE_MASK                  equ 0008h

// Register: ACTCON
#define ACTCON ACTCON
ACTCON                                   equ 0FB5h
// bitfield definitions
ACTCON_ACTORS_POSN                       equ 0001h
ACTCON_ACTORS_POSITION                   equ 0001h
ACTCON_ACTORS_SIZE                       equ 0001h
ACTCON_ACTORS_LENGTH                     equ 0001h
ACTCON_ACTORS_MASK                       equ 0002h
ACTCON_ACTLOCK_POSN                      equ 0003h
ACTCON_ACTLOCK_POSITION                  equ 0003h
ACTCON_ACTLOCK_SIZE                      equ 0001h
ACTCON_ACTLOCK_LENGTH                    equ 0001h
ACTCON_ACTLOCK_MASK                      equ 0008h
ACTCON_ACTSRC_POSN                       equ 0004h
ACTCON_ACTSRC_POSITION                   equ 0004h
ACTCON_ACTSRC_SIZE                       equ 0001h
ACTCON_ACTSRC_LENGTH                     equ 0001h
ACTCON_ACTSRC_MASK                       equ 0010h
ACTCON_ACTUD_POSN                        equ 0006h
ACTCON_ACTUD_POSITION                    equ 0006h
ACTCON_ACTUD_SIZE                        equ 0001h
ACTCON_ACTUD_LENGTH                      equ 0001h
ACTCON_ACTUD_MASK                        equ 0040h
ACTCON_ACTEN_POSN                        equ 0007h
ACTCON_ACTEN_POSITION                    equ 0007h
ACTCON_ACTEN_SIZE                        equ 0001h
ACTCON_ACTEN_LENGTH                      equ 0001h
ACTCON_ACTEN_MASK                        equ 0080h
ACTCON_STOR_POSN                         equ 0001h
ACTCON_STOR_POSITION                     equ 0001h
ACTCON_STOR_SIZE                         equ 0001h
ACTCON_STOR_LENGTH                       equ 0001h
ACTCON_STOR_MASK                         equ 0002h
ACTCON_STLOCK_POSN                       equ 0003h
ACTCON_STLOCK_POSITION                   equ 0003h
ACTCON_STLOCK_SIZE                       equ 0001h
ACTCON_STLOCK_LENGTH                     equ 0001h
ACTCON_STLOCK_MASK                       equ 0008h
ACTCON_STSRC_POSN                        equ 0004h
ACTCON_STSRC_POSITION                    equ 0004h
ACTCON_STSRC_SIZE                        equ 0001h
ACTCON_STSRC_LENGTH                      equ 0001h
ACTCON_STSRC_MASK                        equ 0010h
ACTCON_STUD_POSN                         equ 0006h
ACTCON_STUD_POSITION                     equ 0006h
ACTCON_STUD_SIZE                         equ 0001h
ACTCON_STUD_LENGTH                       equ 0001h
ACTCON_STUD_MASK                         equ 0040h
ACTCON_STEN_POSN                         equ 0007h
ACTCON_STEN_POSITION                     equ 0007h
ACTCON_STEN_SIZE                         equ 0001h
ACTCON_STEN_LENGTH                       equ 0001h
ACTCON_STEN_MASK                         equ 0080h
ACTCON_ACTOR_POSN                        equ 0001h
ACTCON_ACTOR_POSITION                    equ 0001h
ACTCON_ACTOR_SIZE                        equ 0001h
ACTCON_ACTOR_LENGTH                      equ 0001h
ACTCON_ACTOR_MASK                        equ 0002h
ACTCON_ACTD_POSN                         equ 0006h
ACTCON_ACTD_POSITION                     equ 0006h
ACTCON_ACTD_SIZE                         equ 0001h
ACTCON_ACTD_LENGTH                       equ 0001h
ACTCON_ACTD_MASK                         equ 0040h
ACTCON_ACTSEL_POSN                       equ 0007h
ACTCON_ACTSEL_POSITION                   equ 0007h
ACTCON_ACTSEL_SIZE                       equ 0001h
ACTCON_ACTSEL_LENGTH                     equ 0001h
ACTCON_ACTSEL_MASK                       equ 0080h

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
ECCP1AS                                  equ 0FB6h
// bitfield definitions
ECCP1AS_PSS1BD_POSN                      equ 0000h
ECCP1AS_PSS1BD_POSITION                  equ 0000h
ECCP1AS_PSS1BD_SIZE                      equ 0002h
ECCP1AS_PSS1BD_LENGTH                    equ 0002h
ECCP1AS_PSS1BD_MASK                      equ 0003h
ECCP1AS_PSS1AC_POSN                      equ 0002h
ECCP1AS_PSS1AC_POSITION                  equ 0002h
ECCP1AS_PSS1AC_SIZE                      equ 0002h
ECCP1AS_PSS1AC_LENGTH                    equ 0002h
ECCP1AS_PSS1AC_MASK                      equ 000Ch
ECCP1AS_ECCP1AS_POSN                     equ 0004h
ECCP1AS_ECCP1AS_POSITION                 equ 0004h
ECCP1AS_ECCP1AS_SIZE                     equ 0003h
ECCP1AS_ECCP1AS_LENGTH                   equ 0003h
ECCP1AS_ECCP1AS_MASK                     equ 0070h
ECCP1AS_ECCP1ASE_POSN                    equ 0007h
ECCP1AS_ECCP1ASE_POSITION                equ 0007h
ECCP1AS_ECCP1ASE_SIZE                    equ 0001h
ECCP1AS_ECCP1ASE_LENGTH                  equ 0001h
ECCP1AS_ECCP1ASE_MASK                    equ 0080h
ECCP1AS_PSS1BD0_POSN                     equ 0000h
ECCP1AS_PSS1BD0_POSITION                 equ 0000h
ECCP1AS_PSS1BD0_SIZE                     equ 0001h
ECCP1AS_PSS1BD0_LENGTH                   equ 0001h
ECCP1AS_PSS1BD0_MASK                     equ 0001h
ECCP1AS_PSS1BD1_POSN                     equ 0001h
ECCP1AS_PSS1BD1_POSITION                 equ 0001h
ECCP1AS_PSS1BD1_SIZE                     equ 0001h
ECCP1AS_PSS1BD1_LENGTH                   equ 0001h
ECCP1AS_PSS1BD1_MASK                     equ 0002h
ECCP1AS_PSS1AC0_POSN                     equ 0002h
ECCP1AS_PSS1AC0_POSITION                 equ 0002h
ECCP1AS_PSS1AC0_SIZE                     equ 0001h
ECCP1AS_PSS1AC0_LENGTH                   equ 0001h
ECCP1AS_PSS1AC0_MASK                     equ 0004h
ECCP1AS_PSS1AC1_POSN                     equ 0003h
ECCP1AS_PSS1AC1_POSITION                 equ 0003h
ECCP1AS_PSS1AC1_SIZE                     equ 0001h
ECCP1AS_PSS1AC1_LENGTH                   equ 0001h
ECCP1AS_PSS1AC1_MASK                     equ 0008h
ECCP1AS_ECCP1AS0_POSN                    equ 0004h
ECCP1AS_ECCP1AS0_POSITION                equ 0004h
ECCP1AS_ECCP1AS0_SIZE                    equ 0001h
ECCP1AS_ECCP1AS0_LENGTH                  equ 0001h
ECCP1AS_ECCP1AS0_MASK                    equ 0010h
ECCP1AS_ECCP1AS1_POSN                    equ 0005h
ECCP1AS_ECCP1AS1_POSITION                equ 0005h
ECCP1AS_ECCP1AS1_SIZE                    equ 0001h
ECCP1AS_ECCP1AS1_LENGTH                  equ 0001h
ECCP1AS_ECCP1AS1_MASK                    equ 0020h
ECCP1AS_ECCP1AS2_POSN                    equ 0006h
ECCP1AS_ECCP1AS2_POSITION                equ 0006h
ECCP1AS_ECCP1AS2_SIZE                    equ 0001h
ECCP1AS_ECCP1AS2_LENGTH                  equ 0001h
ECCP1AS_ECCP1AS2_MASK                    equ 0040h
ECCP1AS_CCP1ASE_POSN                     equ 0007h
ECCP1AS_CCP1ASE_POSITION                 equ 0007h
ECCP1AS_CCP1ASE_SIZE                     equ 0001h
ECCP1AS_CCP1ASE_LENGTH                   equ 0001h
ECCP1AS_CCP1ASE_MASK                     equ 0080h
ECCP1AS_P1SSBD_POSN                      equ 0000h
ECCP1AS_P1SSBD_POSITION                  equ 0000h
ECCP1AS_P1SSBD_SIZE                      equ 0002h
ECCP1AS_P1SSBD_LENGTH                    equ 0002h
ECCP1AS_P1SSBD_MASK                      equ 0003h
ECCP1AS_P1SSAC_POSN                      equ 0002h
ECCP1AS_P1SSAC_POSITION                  equ 0002h
ECCP1AS_P1SSAC_SIZE                      equ 0002h
ECCP1AS_P1SSAC_LENGTH                    equ 0002h
ECCP1AS_P1SSAC_MASK                      equ 000Ch
ECCP1AS_CCP1AS_POSN                      equ 0004h
ECCP1AS_CCP1AS_POSITION                  equ 0004h
ECCP1AS_CCP1AS_SIZE                      equ 0003h
ECCP1AS_CCP1AS_LENGTH                    equ 0003h
ECCP1AS_CCP1AS_MASK                      equ 0070h
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

// Register: PWM1CON
#define PWM1CON PWM1CON
PWM1CON                                  equ 0FB7h
// bitfield definitions
PWM1CON_P1DC_POSN                        equ 0000h
PWM1CON_P1DC_POSITION                    equ 0000h
PWM1CON_P1DC_SIZE                        equ 0007h
PWM1CON_P1DC_LENGTH                      equ 0007h
PWM1CON_P1DC_MASK                        equ 007Fh
PWM1CON_P1RSEN_POSN                      equ 0007h
PWM1CON_P1RSEN_POSITION                  equ 0007h
PWM1CON_P1RSEN_SIZE                      equ 0001h
PWM1CON_P1RSEN_LENGTH                    equ 0001h
PWM1CON_P1RSEN_MASK                      equ 0080h
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
PWM1CON_PR1SEN_POSN                      equ 0007h
PWM1CON_PR1SEN_POSITION                  equ 0007h
PWM1CON_PR1SEN_SIZE                      equ 0001h
PWM1CON_PR1SEN_LENGTH                    equ 0001h
PWM1CON_PR1SEN_MASK                      equ 0080h

// Register: BAUDCON1
#define BAUDCON1 BAUDCON1
BAUDCON1                                 equ 0FB8h
// bitfield definitions
BAUDCON1_ABDEN_POSN                      equ 0000h
BAUDCON1_ABDEN_POSITION                  equ 0000h
BAUDCON1_ABDEN_SIZE                      equ 0001h
BAUDCON1_ABDEN_LENGTH                    equ 0001h
BAUDCON1_ABDEN_MASK                      equ 0001h
BAUDCON1_WUE_POSN                        equ 0001h
BAUDCON1_WUE_POSITION                    equ 0001h
BAUDCON1_WUE_SIZE                        equ 0001h
BAUDCON1_WUE_LENGTH                      equ 0001h
BAUDCON1_WUE_MASK                        equ 0002h
BAUDCON1_BRG16_POSN                      equ 0003h
BAUDCON1_BRG16_POSITION                  equ 0003h
BAUDCON1_BRG16_SIZE                      equ 0001h
BAUDCON1_BRG16_LENGTH                    equ 0001h
BAUDCON1_BRG16_MASK                      equ 0008h
BAUDCON1_TXCKP_POSN                      equ 0004h
BAUDCON1_TXCKP_POSITION                  equ 0004h
BAUDCON1_TXCKP_SIZE                      equ 0001h
BAUDCON1_TXCKP_LENGTH                    equ 0001h
BAUDCON1_TXCKP_MASK                      equ 0010h
BAUDCON1_RXDTP_POSN                      equ 0005h
BAUDCON1_RXDTP_POSITION                  equ 0005h
BAUDCON1_RXDTP_SIZE                      equ 0001h
BAUDCON1_RXDTP_LENGTH                    equ 0001h
BAUDCON1_RXDTP_MASK                      equ 0020h
BAUDCON1_RCIDL_POSN                      equ 0006h
BAUDCON1_RCIDL_POSITION                  equ 0006h
BAUDCON1_RCIDL_SIZE                      equ 0001h
BAUDCON1_RCIDL_LENGTH                    equ 0001h
BAUDCON1_RCIDL_MASK                      equ 0040h
BAUDCON1_ABDOVF_POSN                     equ 0007h
BAUDCON1_ABDOVF_POSITION                 equ 0007h
BAUDCON1_ABDOVF_SIZE                     equ 0001h
BAUDCON1_ABDOVF_LENGTH                   equ 0001h
BAUDCON1_ABDOVF_MASK                     equ 0080h
BAUDCON1_CKTXP_POSN                      equ 0004h
BAUDCON1_CKTXP_POSITION                  equ 0004h
BAUDCON1_CKTXP_SIZE                      equ 0001h
BAUDCON1_CKTXP_LENGTH                    equ 0001h
BAUDCON1_CKTXP_MASK                      equ 0010h
BAUDCON1_DTRXP_POSN                      equ 0005h
BAUDCON1_DTRXP_POSITION                  equ 0005h
BAUDCON1_DTRXP_SIZE                      equ 0001h
BAUDCON1_DTRXP_LENGTH                    equ 0001h
BAUDCON1_DTRXP_MASK                      equ 0020h
BAUDCON1_SCKP_POSN                       equ 0004h
BAUDCON1_SCKP_POSITION                   equ 0004h
BAUDCON1_SCKP_SIZE                       equ 0001h
BAUDCON1_SCKP_LENGTH                     equ 0001h
BAUDCON1_SCKP_MASK                       equ 0010h
BAUDCON1_RCMT_POSN                       equ 0006h
BAUDCON1_RCMT_POSITION                   equ 0006h
BAUDCON1_RCMT_SIZE                       equ 0001h
BAUDCON1_RCMT_LENGTH                     equ 0001h
BAUDCON1_RCMT_MASK                       equ 0040h
BAUDCON1_ABDEN1_POSN                     equ 0000h
BAUDCON1_ABDEN1_POSITION                 equ 0000h
BAUDCON1_ABDEN1_SIZE                     equ 0001h
BAUDCON1_ABDEN1_LENGTH                   equ 0001h
BAUDCON1_ABDEN1_MASK                     equ 0001h
BAUDCON1_WUE1_POSN                       equ 0001h
BAUDCON1_WUE1_POSITION                   equ 0001h
BAUDCON1_WUE1_SIZE                       equ 0001h
BAUDCON1_WUE1_LENGTH                     equ 0001h
BAUDCON1_WUE1_MASK                       equ 0002h
BAUDCON1_BRG161_POSN                     equ 0003h
BAUDCON1_BRG161_POSITION                 equ 0003h
BAUDCON1_BRG161_SIZE                     equ 0001h
BAUDCON1_BRG161_LENGTH                   equ 0001h
BAUDCON1_BRG161_MASK                     equ 0008h
BAUDCON1_SCKP1_POSN                      equ 0004h
BAUDCON1_SCKP1_POSITION                  equ 0004h
BAUDCON1_SCKP1_SIZE                      equ 0001h
BAUDCON1_SCKP1_LENGTH                    equ 0001h
BAUDCON1_SCKP1_MASK                      equ 0010h
BAUDCON1_DTRXP1_POSN                     equ 0005h
BAUDCON1_DTRXP1_POSITION                 equ 0005h
BAUDCON1_DTRXP1_SIZE                     equ 0001h
BAUDCON1_DTRXP1_LENGTH                   equ 0001h
BAUDCON1_DTRXP1_MASK                     equ 0020h
BAUDCON1_RCIDL1_POSN                     equ 0006h
BAUDCON1_RCIDL1_POSITION                 equ 0006h
BAUDCON1_RCIDL1_SIZE                     equ 0001h
BAUDCON1_RCIDL1_LENGTH                   equ 0001h
BAUDCON1_RCIDL1_MASK                     equ 0040h
BAUDCON1_ABDOVF1_POSN                    equ 0007h
BAUDCON1_ABDOVF1_POSITION                equ 0007h
BAUDCON1_ABDOVF1_SIZE                    equ 0001h
BAUDCON1_ABDOVF1_LENGTH                  equ 0001h
BAUDCON1_ABDOVF1_MASK                    equ 0080h
BAUDCON1_TXCKP1_POSN                     equ 0004h
BAUDCON1_TXCKP1_POSITION                 equ 0004h
BAUDCON1_TXCKP1_SIZE                     equ 0001h
BAUDCON1_TXCKP1_LENGTH                   equ 0001h
BAUDCON1_TXCKP1_MASK                     equ 0010h
BAUDCON1_RXDTP1_POSN                     equ 0005h
BAUDCON1_RXDTP1_POSITION                 equ 0005h
BAUDCON1_RXDTP1_SIZE                     equ 0001h
BAUDCON1_RXDTP1_LENGTH                   equ 0001h
BAUDCON1_RXDTP1_MASK                     equ 0020h
BAUDCON1_RCMT1_POSN                      equ 0006h
BAUDCON1_RCMT1_POSITION                  equ 0006h
BAUDCON1_RCMT1_SIZE                      equ 0001h
BAUDCON1_RCMT1_LENGTH                    equ 0001h
BAUDCON1_RCMT1_MASK                      equ 0040h
BAUDCON1_RXCKP_POSN                      equ 0005h
BAUDCON1_RXCKP_POSITION                  equ 0005h
BAUDCON1_RXCKP_SIZE                      equ 0001h
BAUDCON1_RXCKP_LENGTH                    equ 0001h
BAUDCON1_RXCKP_MASK                      equ 0020h
BAUDCON1_W4E_POSN                        equ 0001h
BAUDCON1_W4E_POSITION                    equ 0001h
BAUDCON1_W4E_SIZE                        equ 0001h
BAUDCON1_W4E_LENGTH                      equ 0001h
BAUDCON1_W4E_MASK                        equ 0002h

// Register: PSTR1CON
#define PSTR1CON PSTR1CON
PSTR1CON                                 equ 0FB9h
// bitfield definitions
PSTR1CON_STRA_POSN                       equ 0000h
PSTR1CON_STRA_POSITION                   equ 0000h
PSTR1CON_STRA_SIZE                       equ 0001h
PSTR1CON_STRA_LENGTH                     equ 0001h
PSTR1CON_STRA_MASK                       equ 0001h
PSTR1CON_STRB_POSN                       equ 0001h
PSTR1CON_STRB_POSITION                   equ 0001h
PSTR1CON_STRB_SIZE                       equ 0001h
PSTR1CON_STRB_LENGTH                     equ 0001h
PSTR1CON_STRB_MASK                       equ 0002h
PSTR1CON_STRC_POSN                       equ 0002h
PSTR1CON_STRC_POSITION                   equ 0002h
PSTR1CON_STRC_SIZE                       equ 0001h
PSTR1CON_STRC_LENGTH                     equ 0001h
PSTR1CON_STRC_MASK                       equ 0004h
PSTR1CON_STRD_POSN                       equ 0003h
PSTR1CON_STRD_POSITION                   equ 0003h
PSTR1CON_STRD_SIZE                       equ 0001h
PSTR1CON_STRD_LENGTH                     equ 0001h
PSTR1CON_STRD_MASK                       equ 0008h
PSTR1CON_STRSYNC_POSN                    equ 0004h
PSTR1CON_STRSYNC_POSITION                equ 0004h
PSTR1CON_STRSYNC_SIZE                    equ 0001h
PSTR1CON_STRSYNC_LENGTH                  equ 0001h
PSTR1CON_STRSYNC_MASK                    equ 0010h
PSTR1CON_STR1A_POSN                      equ 0000h
PSTR1CON_STR1A_POSITION                  equ 0000h
PSTR1CON_STR1A_SIZE                      equ 0001h
PSTR1CON_STR1A_LENGTH                    equ 0001h
PSTR1CON_STR1A_MASK                      equ 0001h
PSTR1CON_STR1B_POSN                      equ 0001h
PSTR1CON_STR1B_POSITION                  equ 0001h
PSTR1CON_STR1B_SIZE                      equ 0001h
PSTR1CON_STR1B_LENGTH                    equ 0001h
PSTR1CON_STR1B_MASK                      equ 0002h
PSTR1CON_STR1C_POSN                      equ 0002h
PSTR1CON_STR1C_POSITION                  equ 0002h
PSTR1CON_STR1C_SIZE                      equ 0001h
PSTR1CON_STR1C_LENGTH                    equ 0001h
PSTR1CON_STR1C_MASK                      equ 0004h
PSTR1CON_STR1D_POSN                      equ 0003h
PSTR1CON_STR1D_POSITION                  equ 0003h
PSTR1CON_STR1D_SIZE                      equ 0001h
PSTR1CON_STR1D_LENGTH                    equ 0001h
PSTR1CON_STR1D_MASK                      equ 0008h
PSTR1CON_STR1SYNC_POSN                   equ 0004h
PSTR1CON_STR1SYNC_POSITION               equ 0004h
PSTR1CON_STR1SYNC_SIZE                   equ 0001h
PSTR1CON_STR1SYNC_LENGTH                 equ 0001h
PSTR1CON_STR1SYNC_MASK                   equ 0010h

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0FBAh
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
PR2                                      equ 0FBBh
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 0FBCh
// bitfield definitions
TMR2_TMR2_POSN                           equ 0000h
TMR2_TMR2_POSITION                       equ 0000h
TMR2_TMR2_SIZE                           equ 0008h
TMR2_TMR2_LENGTH                         equ 0008h
TMR2_TMR2_MASK                           equ 00FFh

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
CCP1CON_CCP1Y_POSN                       equ 0004h
CCP1CON_CCP1Y_POSITION                   equ 0004h
CCP1CON_CCP1Y_SIZE                       equ 0001h
CCP1CON_CCP1Y_LENGTH                     equ 0001h
CCP1CON_CCP1Y_MASK                       equ 0010h
CCP1CON_CCP1X_POSN                       equ 0005h
CCP1CON_CCP1X_POSITION                   equ 0005h
CCP1CON_CCP1X_SIZE                       equ 0001h
CCP1CON_CCP1X_LENGTH                     equ 0001h
CCP1CON_CCP1X_MASK                       equ 0020h

// Register: CCPR1
#define CCPR1 CCPR1
CCPR1                                    equ 0FBEh

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0FBEh
// bitfield definitions
CCPR1L_CCPR1L_POSN                       equ 0000h
CCPR1L_CCPR1L_POSITION                   equ 0000h
CCPR1L_CCPR1L_SIZE                       equ 0008h
CCPR1L_CCPR1L_LENGTH                     equ 0008h
CCPR1L_CCPR1L_MASK                       equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0FBFh
// bitfield definitions
CCPR1H_CCPR1H_POSN                       equ 0000h
CCPR1H_CCPR1H_POSITION                   equ 0000h
CCPR1H_CCPR1H_SIZE                       equ 0008h
CCPR1H_CCPR1H_LENGTH                     equ 0008h
CCPR1H_CCPR1H_MASK                       equ 00FFh

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
ADCON1_TRIGSEL_POSN                      equ 0007h
ADCON1_TRIGSEL_POSITION                  equ 0007h
ADCON1_TRIGSEL_SIZE                      equ 0001h
ADCON1_TRIGSEL_LENGTH                    equ 0001h
ADCON1_TRIGSEL_MASK                      equ 0080h
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
ADCON0_CHS_SIZE                          equ 0005h
ADCON0_CHS_LENGTH                        equ 0005h
ADCON0_CHS_MASK                          equ 007Ch
ADCON0_DONE_POSN                         equ 0001h
ADCON0_DONE_POSITION                     equ 0001h
ADCON0_DONE_SIZE                         equ 0001h
ADCON0_DONE_LENGTH                       equ 0001h
ADCON0_DONE_MASK                         equ 0002h
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h
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
ADCON0_GODONE_POSN                       equ 0001h
ADCON0_GODONE_POSITION                   equ 0001h
ADCON0_GODONE_SIZE                       equ 0001h
ADCON0_GODONE_LENGTH                     equ 0001h
ADCON0_GODONE_MASK                       equ 0002h
ADCON0_GO_DONE_POSN                      equ 0001h
ADCON0_GO_DONE_POSITION                  equ 0001h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0002h

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 0FC3h

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 0FC4h

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
SSP1CON2                                 equ 0FC5h
// bitfield definitions
SSP1CON2_SEN_POSN                        equ 0000h
SSP1CON2_SEN_POSITION                    equ 0000h
SSP1CON2_SEN_SIZE                        equ 0001h
SSP1CON2_SEN_LENGTH                      equ 0001h
SSP1CON2_SEN_MASK                        equ 0001h
SSP1CON2_RSEN_POSN                       equ 0001h
SSP1CON2_RSEN_POSITION                   equ 0001h
SSP1CON2_RSEN_SIZE                       equ 0001h
SSP1CON2_RSEN_LENGTH                     equ 0001h
SSP1CON2_RSEN_MASK                       equ 0002h
SSP1CON2_PEN_POSN                        equ 0002h
SSP1CON2_PEN_POSITION                    equ 0002h
SSP1CON2_PEN_SIZE                        equ 0001h
SSP1CON2_PEN_LENGTH                      equ 0001h
SSP1CON2_PEN_MASK                        equ 0004h
SSP1CON2_RCEN_POSN                       equ 0003h
SSP1CON2_RCEN_POSITION                   equ 0003h
SSP1CON2_RCEN_SIZE                       equ 0001h
SSP1CON2_RCEN_LENGTH                     equ 0001h
SSP1CON2_RCEN_MASK                       equ 0008h
SSP1CON2_ACKEN_POSN                      equ 0004h
SSP1CON2_ACKEN_POSITION                  equ 0004h
SSP1CON2_ACKEN_SIZE                      equ 0001h
SSP1CON2_ACKEN_LENGTH                    equ 0001h
SSP1CON2_ACKEN_MASK                      equ 0010h
SSP1CON2_ACKDT_POSN                      equ 0005h
SSP1CON2_ACKDT_POSITION                  equ 0005h
SSP1CON2_ACKDT_SIZE                      equ 0001h
SSP1CON2_ACKDT_LENGTH                    equ 0001h
SSP1CON2_ACKDT_MASK                      equ 0020h
SSP1CON2_ACKSTAT_POSN                    equ 0006h
SSP1CON2_ACKSTAT_POSITION                equ 0006h
SSP1CON2_ACKSTAT_SIZE                    equ 0001h
SSP1CON2_ACKSTAT_LENGTH                  equ 0001h
SSP1CON2_ACKSTAT_MASK                    equ 0040h
SSP1CON2_GCEN_POSN                       equ 0007h
SSP1CON2_GCEN_POSITION                   equ 0007h
SSP1CON2_GCEN_SIZE                       equ 0001h
SSP1CON2_GCEN_LENGTH                     equ 0001h
SSP1CON2_GCEN_MASK                       equ 0080h
SSP1CON2_SEN1_POSN                       equ 0000h
SSP1CON2_SEN1_POSITION                   equ 0000h
SSP1CON2_SEN1_SIZE                       equ 0001h
SSP1CON2_SEN1_LENGTH                     equ 0001h
SSP1CON2_SEN1_MASK                       equ 0001h
SSP1CON2_ADMSK1_POSN                     equ 0001h
SSP1CON2_ADMSK1_POSITION                 equ 0001h
SSP1CON2_ADMSK1_SIZE                     equ 0001h
SSP1CON2_ADMSK1_LENGTH                   equ 0001h
SSP1CON2_ADMSK1_MASK                     equ 0002h
SSP1CON2_ADMSK2_POSN                     equ 0002h
SSP1CON2_ADMSK2_POSITION                 equ 0002h
SSP1CON2_ADMSK2_SIZE                     equ 0001h
SSP1CON2_ADMSK2_LENGTH                   equ 0001h
SSP1CON2_ADMSK2_MASK                     equ 0004h
SSP1CON2_ADMSK3_POSN                     equ 0003h
SSP1CON2_ADMSK3_POSITION                 equ 0003h
SSP1CON2_ADMSK3_SIZE                     equ 0001h
SSP1CON2_ADMSK3_LENGTH                   equ 0001h
SSP1CON2_ADMSK3_MASK                     equ 0008h
SSP1CON2_ACKEN1_POSN                     equ 0004h
SSP1CON2_ACKEN1_POSITION                 equ 0004h
SSP1CON2_ACKEN1_SIZE                     equ 0001h
SSP1CON2_ACKEN1_LENGTH                   equ 0001h
SSP1CON2_ACKEN1_MASK                     equ 0010h
SSP1CON2_ACKDT1_POSN                     equ 0005h
SSP1CON2_ACKDT1_POSITION                 equ 0005h
SSP1CON2_ACKDT1_SIZE                     equ 0001h
SSP1CON2_ACKDT1_LENGTH                   equ 0001h
SSP1CON2_ACKDT1_MASK                     equ 0020h
SSP1CON2_ACKSTAT1_POSN                   equ 0006h
SSP1CON2_ACKSTAT1_POSITION               equ 0006h
SSP1CON2_ACKSTAT1_SIZE                   equ 0001h
SSP1CON2_ACKSTAT1_LENGTH                 equ 0001h
SSP1CON2_ACKSTAT1_MASK                   equ 0040h
SSP1CON2_GCEN1_POSN                      equ 0007h
SSP1CON2_GCEN1_POSITION                  equ 0007h
SSP1CON2_GCEN1_SIZE                      equ 0001h
SSP1CON2_GCEN1_LENGTH                    equ 0001h
SSP1CON2_GCEN1_MASK                      equ 0080h
SSP1CON2_ADMSK11_POSN                    equ 0001h
SSP1CON2_ADMSK11_POSITION                equ 0001h
SSP1CON2_ADMSK11_SIZE                    equ 0001h
SSP1CON2_ADMSK11_LENGTH                  equ 0001h
SSP1CON2_ADMSK11_MASK                    equ 0002h
SSP1CON2_ADMSK21_POSN                    equ 0002h
SSP1CON2_ADMSK21_POSITION                equ 0002h
SSP1CON2_ADMSK21_SIZE                    equ 0001h
SSP1CON2_ADMSK21_LENGTH                  equ 0001h
SSP1CON2_ADMSK21_MASK                    equ 0004h
SSP1CON2_ADMSK31_POSN                    equ 0003h
SSP1CON2_ADMSK31_POSITION                equ 0003h
SSP1CON2_ADMSK31_SIZE                    equ 0001h
SSP1CON2_ADMSK31_LENGTH                  equ 0001h
SSP1CON2_ADMSK31_MASK                    equ 0008h
SSP1CON2_ADMSK4_POSN                     equ 0004h
SSP1CON2_ADMSK4_POSITION                 equ 0004h
SSP1CON2_ADMSK4_SIZE                     equ 0001h
SSP1CON2_ADMSK4_LENGTH                   equ 0001h
SSP1CON2_ADMSK4_MASK                     equ 0010h
SSP1CON2_ADMSK5_POSN                     equ 0005h
SSP1CON2_ADMSK5_POSITION                 equ 0005h
SSP1CON2_ADMSK5_SIZE                     equ 0001h
SSP1CON2_ADMSK5_LENGTH                   equ 0001h
SSP1CON2_ADMSK5_MASK                     equ 0020h
SSP1CON2_RSEN1_POSN                      equ 0001h
SSP1CON2_RSEN1_POSITION                  equ 0001h
SSP1CON2_RSEN1_SIZE                      equ 0001h
SSP1CON2_RSEN1_LENGTH                    equ 0001h
SSP1CON2_RSEN1_MASK                      equ 0002h
SSP1CON2_PEN1_POSN                       equ 0002h
SSP1CON2_PEN1_POSITION                   equ 0002h
SSP1CON2_PEN1_SIZE                       equ 0001h
SSP1CON2_PEN1_LENGTH                     equ 0001h
SSP1CON2_PEN1_MASK                       equ 0004h
SSP1CON2_RCEN1_POSN                      equ 0003h
SSP1CON2_RCEN1_POSITION                  equ 0003h
SSP1CON2_RCEN1_SIZE                      equ 0001h
SSP1CON2_RCEN1_LENGTH                    equ 0001h
SSP1CON2_RCEN1_MASK                      equ 0008h
SSP1CON2_ADMSK41_POSN                    equ 0004h
SSP1CON2_ADMSK41_POSITION                equ 0004h
SSP1CON2_ADMSK41_SIZE                    equ 0001h
SSP1CON2_ADMSK41_LENGTH                  equ 0001h
SSP1CON2_ADMSK41_MASK                    equ 0010h
SSP1CON2_ADMSK51_POSN                    equ 0005h
SSP1CON2_ADMSK51_POSITION                equ 0005h
SSP1CON2_ADMSK51_SIZE                    equ 0001h
SSP1CON2_ADMSK51_LENGTH                  equ 0001h
SSP1CON2_ADMSK51_MASK                    equ 0020h

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
SSP1CON1                                 equ 0FC6h
// bitfield definitions
SSP1CON1_SSPM_POSN                       equ 0000h
SSP1CON1_SSPM_POSITION                   equ 0000h
SSP1CON1_SSPM_SIZE                       equ 0004h
SSP1CON1_SSPM_LENGTH                     equ 0004h
SSP1CON1_SSPM_MASK                       equ 000Fh
SSP1CON1_CKP_POSN                        equ 0004h
SSP1CON1_CKP_POSITION                    equ 0004h
SSP1CON1_CKP_SIZE                        equ 0001h
SSP1CON1_CKP_LENGTH                      equ 0001h
SSP1CON1_CKP_MASK                        equ 0010h
SSP1CON1_SSPEN_POSN                      equ 0005h
SSP1CON1_SSPEN_POSITION                  equ 0005h
SSP1CON1_SSPEN_SIZE                      equ 0001h
SSP1CON1_SSPEN_LENGTH                    equ 0001h
SSP1CON1_SSPEN_MASK                      equ 0020h
SSP1CON1_SSPOV_POSN                      equ 0006h
SSP1CON1_SSPOV_POSITION                  equ 0006h
SSP1CON1_SSPOV_SIZE                      equ 0001h
SSP1CON1_SSPOV_LENGTH                    equ 0001h
SSP1CON1_SSPOV_MASK                      equ 0040h
SSP1CON1_WCOL_POSN                       equ 0007h
SSP1CON1_WCOL_POSITION                   equ 0007h
SSP1CON1_WCOL_SIZE                       equ 0001h
SSP1CON1_WCOL_LENGTH                     equ 0001h
SSP1CON1_WCOL_MASK                       equ 0080h
SSP1CON1_SSPM0_POSN                      equ 0000h
SSP1CON1_SSPM0_POSITION                  equ 0000h
SSP1CON1_SSPM0_SIZE                      equ 0001h
SSP1CON1_SSPM0_LENGTH                    equ 0001h
SSP1CON1_SSPM0_MASK                      equ 0001h
SSP1CON1_SSPM1_POSN                      equ 0001h
SSP1CON1_SSPM1_POSITION                  equ 0001h
SSP1CON1_SSPM1_SIZE                      equ 0001h
SSP1CON1_SSPM1_LENGTH                    equ 0001h
SSP1CON1_SSPM1_MASK                      equ 0002h
SSP1CON1_SSPM2_POSN                      equ 0002h
SSP1CON1_SSPM2_POSITION                  equ 0002h
SSP1CON1_SSPM2_SIZE                      equ 0001h
SSP1CON1_SSPM2_LENGTH                    equ 0001h
SSP1CON1_SSPM2_MASK                      equ 0004h
SSP1CON1_SSPM3_POSN                      equ 0003h
SSP1CON1_SSPM3_POSITION                  equ 0003h
SSP1CON1_SSPM3_SIZE                      equ 0001h
SSP1CON1_SSPM3_LENGTH                    equ 0001h
SSP1CON1_SSPM3_MASK                      equ 0008h
SSP1CON1_SSPM01_POSN                     equ 0000h
SSP1CON1_SSPM01_POSITION                 equ 0000h
SSP1CON1_SSPM01_SIZE                     equ 0001h
SSP1CON1_SSPM01_LENGTH                   equ 0001h
SSP1CON1_SSPM01_MASK                     equ 0001h
SSP1CON1_SSPM11_POSN                     equ 0001h
SSP1CON1_SSPM11_POSITION                 equ 0001h
SSP1CON1_SSPM11_SIZE                     equ 0001h
SSP1CON1_SSPM11_LENGTH                   equ 0001h
SSP1CON1_SSPM11_MASK                     equ 0002h
SSP1CON1_SSPM21_POSN                     equ 0002h
SSP1CON1_SSPM21_POSITION                 equ 0002h
SSP1CON1_SSPM21_SIZE                     equ 0001h
SSP1CON1_SSPM21_LENGTH                   equ 0001h
SSP1CON1_SSPM21_MASK                     equ 0004h
SSP1CON1_SSPM31_POSN                     equ 0003h
SSP1CON1_SSPM31_POSITION                 equ 0003h
SSP1CON1_SSPM31_SIZE                     equ 0001h
SSP1CON1_SSPM31_LENGTH                   equ 0001h
SSP1CON1_SSPM31_MASK                     equ 0008h
SSP1CON1_CKP1_POSN                       equ 0004h
SSP1CON1_CKP1_POSITION                   equ 0004h
SSP1CON1_CKP1_SIZE                       equ 0001h
SSP1CON1_CKP1_LENGTH                     equ 0001h
SSP1CON1_CKP1_MASK                       equ 0010h
SSP1CON1_SSPEN1_POSN                     equ 0005h
SSP1CON1_SSPEN1_POSITION                 equ 0005h
SSP1CON1_SSPEN1_SIZE                     equ 0001h
SSP1CON1_SSPEN1_LENGTH                   equ 0001h
SSP1CON1_SSPEN1_MASK                     equ 0020h
SSP1CON1_SSPOV1_POSN                     equ 0006h
SSP1CON1_SSPOV1_POSITION                 equ 0006h
SSP1CON1_SSPOV1_SIZE                     equ 0001h
SSP1CON1_SSPOV1_LENGTH                   equ 0001h
SSP1CON1_SSPOV1_MASK                     equ 0040h
SSP1CON1_WCOL1_POSN                      equ 0007h
SSP1CON1_WCOL1_POSITION                  equ 0007h
SSP1CON1_WCOL1_SIZE                      equ 0001h
SSP1CON1_WCOL1_LENGTH                    equ 0001h
SSP1CON1_WCOL1_MASK                      equ 0080h

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
SSP1STAT                                 equ 0FC7h
// bitfield definitions
SSP1STAT_R_NOT_W_POSN                    equ 0002h
SSP1STAT_R_NOT_W_POSITION                equ 0002h
SSP1STAT_R_NOT_W_SIZE                    equ 0001h
SSP1STAT_R_NOT_W_LENGTH                  equ 0001h
SSP1STAT_R_NOT_W_MASK                    equ 0004h
SSP1STAT_D_NOT_A_POSN                    equ 0005h
SSP1STAT_D_NOT_A_POSITION                equ 0005h
SSP1STAT_D_NOT_A_SIZE                    equ 0001h
SSP1STAT_D_NOT_A_LENGTH                  equ 0001h
SSP1STAT_D_NOT_A_MASK                    equ 0020h
SSP1STAT_BF_POSN                         equ 0000h
SSP1STAT_BF_POSITION                     equ 0000h
SSP1STAT_BF_SIZE                         equ 0001h
SSP1STAT_BF_LENGTH                       equ 0001h
SSP1STAT_BF_MASK                         equ 0001h
SSP1STAT_UA_POSN                         equ 0001h
SSP1STAT_UA_POSITION                     equ 0001h
SSP1STAT_UA_SIZE                         equ 0001h
SSP1STAT_UA_LENGTH                       equ 0001h
SSP1STAT_UA_MASK                         equ 0002h
SSP1STAT_R_nW_POSN                       equ 0002h
SSP1STAT_R_nW_POSITION                   equ 0002h
SSP1STAT_R_nW_SIZE                       equ 0001h
SSP1STAT_R_nW_LENGTH                     equ 0001h
SSP1STAT_R_nW_MASK                       equ 0004h
SSP1STAT_S_POSN                          equ 0003h
SSP1STAT_S_POSITION                      equ 0003h
SSP1STAT_S_SIZE                          equ 0001h
SSP1STAT_S_LENGTH                        equ 0001h
SSP1STAT_S_MASK                          equ 0008h
SSP1STAT_P_POSN                          equ 0004h
SSP1STAT_P_POSITION                      equ 0004h
SSP1STAT_P_SIZE                          equ 0001h
SSP1STAT_P_LENGTH                        equ 0001h
SSP1STAT_P_MASK                          equ 0010h
SSP1STAT_D_nA_POSN                       equ 0005h
SSP1STAT_D_nA_POSITION                   equ 0005h
SSP1STAT_D_nA_SIZE                       equ 0001h
SSP1STAT_D_nA_LENGTH                     equ 0001h
SSP1STAT_D_nA_MASK                       equ 0020h
SSP1STAT_CKE_POSN                        equ 0006h
SSP1STAT_CKE_POSITION                    equ 0006h
SSP1STAT_CKE_SIZE                        equ 0001h
SSP1STAT_CKE_LENGTH                      equ 0001h
SSP1STAT_CKE_MASK                        equ 0040h
SSP1STAT_SMP_POSN                        equ 0007h
SSP1STAT_SMP_POSITION                    equ 0007h
SSP1STAT_SMP_SIZE                        equ 0001h
SSP1STAT_SMP_LENGTH                      equ 0001h
SSP1STAT_SMP_MASK                        equ 0080h
SSP1STAT_BF1_POSN                        equ 0000h
SSP1STAT_BF1_POSITION                    equ 0000h
SSP1STAT_BF1_SIZE                        equ 0001h
SSP1STAT_BF1_LENGTH                      equ 0001h
SSP1STAT_BF1_MASK                        equ 0001h
SSP1STAT_UA1_POSN                        equ 0001h
SSP1STAT_UA1_POSITION                    equ 0001h
SSP1STAT_UA1_SIZE                        equ 0001h
SSP1STAT_UA1_LENGTH                      equ 0001h
SSP1STAT_UA1_MASK                        equ 0002h
SSP1STAT_I2C_READ_POSN                   equ 0002h
SSP1STAT_I2C_READ_POSITION               equ 0002h
SSP1STAT_I2C_READ_SIZE                   equ 0001h
SSP1STAT_I2C_READ_LENGTH                 equ 0001h
SSP1STAT_I2C_READ_MASK                   equ 0004h
SSP1STAT_I2C_START_POSN                  equ 0003h
SSP1STAT_I2C_START_POSITION              equ 0003h
SSP1STAT_I2C_START_SIZE                  equ 0001h
SSP1STAT_I2C_START_LENGTH                equ 0001h
SSP1STAT_I2C_START_MASK                  equ 0008h
SSP1STAT_I2C_STOP_POSN                   equ 0004h
SSP1STAT_I2C_STOP_POSITION               equ 0004h
SSP1STAT_I2C_STOP_SIZE                   equ 0001h
SSP1STAT_I2C_STOP_LENGTH                 equ 0001h
SSP1STAT_I2C_STOP_MASK                   equ 0010h
SSP1STAT_D_POSN                          equ 0005h
SSP1STAT_D_POSITION                      equ 0005h
SSP1STAT_D_SIZE                          equ 0001h
SSP1STAT_D_LENGTH                        equ 0001h
SSP1STAT_D_MASK                          equ 0020h
SSP1STAT_CKE1_POSN                       equ 0006h
SSP1STAT_CKE1_POSITION                   equ 0006h
SSP1STAT_CKE1_SIZE                       equ 0001h
SSP1STAT_CKE1_LENGTH                     equ 0001h
SSP1STAT_CKE1_MASK                       equ 0040h
SSP1STAT_SMP1_POSN                       equ 0007h
SSP1STAT_SMP1_POSITION                   equ 0007h
SSP1STAT_SMP1_SIZE                       equ 0001h
SSP1STAT_SMP1_LENGTH                     equ 0001h
SSP1STAT_SMP1_MASK                       equ 0080h
SSP1STAT_R_POSN                          equ 0002h
SSP1STAT_R_POSITION                      equ 0002h
SSP1STAT_R_SIZE                          equ 0001h
SSP1STAT_R_LENGTH                        equ 0001h
SSP1STAT_R_MASK                          equ 0004h
SSP1STAT_START_POSN                      equ 0003h
SSP1STAT_START_POSITION                  equ 0003h
SSP1STAT_START_SIZE                      equ 0001h
SSP1STAT_START_LENGTH                    equ 0001h
SSP1STAT_START_MASK                      equ 0008h
SSP1STAT_STOP_POSN                       equ 0004h
SSP1STAT_STOP_POSITION                   equ 0004h
SSP1STAT_STOP_SIZE                       equ 0001h
SSP1STAT_STOP_LENGTH                     equ 0001h
SSP1STAT_STOP_MASK                       equ 0010h
SSP1STAT_DA_POSN                         equ 0005h
SSP1STAT_DA_POSITION                     equ 0005h
SSP1STAT_DA_SIZE                         equ 0001h
SSP1STAT_DA_LENGTH                       equ 0001h
SSP1STAT_DA_MASK                         equ 0020h
SSP1STAT_READ_WRITE_POSN                 equ 0002h
SSP1STAT_READ_WRITE_POSITION             equ 0002h
SSP1STAT_READ_WRITE_SIZE                 equ 0001h
SSP1STAT_READ_WRITE_LENGTH               equ 0001h
SSP1STAT_READ_WRITE_MASK                 equ 0004h
SSP1STAT_START1_POSN                     equ 0003h
SSP1STAT_START1_POSITION                 equ 0003h
SSP1STAT_START1_SIZE                     equ 0001h
SSP1STAT_START1_LENGTH                   equ 0001h
SSP1STAT_START1_MASK                     equ 0008h
SSP1STAT_STOP1_POSN                      equ 0004h
SSP1STAT_STOP1_POSITION                  equ 0004h
SSP1STAT_STOP1_SIZE                      equ 0001h
SSP1STAT_STOP1_LENGTH                    equ 0001h
SSP1STAT_STOP1_MASK                      equ 0010h
SSP1STAT_DA1_POSN                        equ 0005h
SSP1STAT_DA1_POSITION                    equ 0005h
SSP1STAT_DA1_SIZE                        equ 0001h
SSP1STAT_DA1_LENGTH                      equ 0001h
SSP1STAT_DA1_MASK                        equ 0020h
SSP1STAT_RW_POSN                         equ 0002h
SSP1STAT_RW_POSITION                     equ 0002h
SSP1STAT_RW_SIZE                         equ 0001h
SSP1STAT_RW_LENGTH                       equ 0001h
SSP1STAT_RW_MASK                         equ 0004h
SSP1STAT_DATA_ADDRESS_POSN               equ 0005h
SSP1STAT_DATA_ADDRESS_POSITION           equ 0005h
SSP1STAT_DATA_ADDRESS_SIZE               equ 0001h
SSP1STAT_DATA_ADDRESS_LENGTH             equ 0001h
SSP1STAT_DATA_ADDRESS_MASK               equ 0020h
SSP1STAT_RW1_POSN                        equ 0002h
SSP1STAT_RW1_POSITION                    equ 0002h
SSP1STAT_RW1_SIZE                        equ 0001h
SSP1STAT_RW1_LENGTH                      equ 0001h
SSP1STAT_RW1_MASK                        equ 0004h
SSP1STAT_D_A_POSN                        equ 0005h
SSP1STAT_D_A_POSITION                    equ 0005h
SSP1STAT_D_A_SIZE                        equ 0001h
SSP1STAT_D_A_LENGTH                      equ 0001h
SSP1STAT_D_A_MASK                        equ 0020h
SSP1STAT_R_W_POSN                        equ 0002h
SSP1STAT_R_W_POSITION                    equ 0002h
SSP1STAT_R_W_SIZE                        equ 0001h
SSP1STAT_R_W_LENGTH                      equ 0001h
SSP1STAT_R_W_MASK                        equ 0004h
SSP1STAT_I2C_DAT_POSN                    equ 0005h
SSP1STAT_I2C_DAT_POSITION                equ 0005h
SSP1STAT_I2C_DAT_SIZE                    equ 0001h
SSP1STAT_I2C_DAT_LENGTH                  equ 0001h
SSP1STAT_I2C_DAT_MASK                    equ 0020h
SSP1STAT_nW_POSN                         equ 0002h
SSP1STAT_nW_POSITION                     equ 0002h
SSP1STAT_nW_SIZE                         equ 0001h
SSP1STAT_nW_LENGTH                       equ 0001h
SSP1STAT_nW_MASK                         equ 0004h
SSP1STAT_nA_POSN                         equ 0005h
SSP1STAT_nA_POSITION                     equ 0005h
SSP1STAT_nA_SIZE                         equ 0001h
SSP1STAT_nA_LENGTH                       equ 0001h
SSP1STAT_nA_MASK                         equ 0020h
SSP1STAT_NOT_WRITE_POSN                  equ 0002h
SSP1STAT_NOT_WRITE_POSITION              equ 0002h
SSP1STAT_NOT_WRITE_SIZE                  equ 0001h
SSP1STAT_NOT_WRITE_LENGTH                equ 0001h
SSP1STAT_NOT_WRITE_MASK                  equ 0004h
SSP1STAT_NOT_ADDRESS_POSN                equ 0005h
SSP1STAT_NOT_ADDRESS_POSITION            equ 0005h
SSP1STAT_NOT_ADDRESS_SIZE                equ 0001h
SSP1STAT_NOT_ADDRESS_LENGTH              equ 0001h
SSP1STAT_NOT_ADDRESS_MASK                equ 0020h
SSP1STAT_nWRITE_POSN                     equ 0002h
SSP1STAT_nWRITE_POSITION                 equ 0002h
SSP1STAT_nWRITE_SIZE                     equ 0001h
SSP1STAT_nWRITE_LENGTH                   equ 0001h
SSP1STAT_nWRITE_MASK                     equ 0004h
SSP1STAT_nADDRESS_POSN                   equ 0005h
SSP1STAT_nADDRESS_POSITION               equ 0005h
SSP1STAT_nADDRESS_SIZE                   equ 0001h
SSP1STAT_nADDRESS_LENGTH                 equ 0001h
SSP1STAT_nADDRESS_MASK                   equ 0020h
SSP1STAT_NOT_W_POSN                      equ 0002h
SSP1STAT_NOT_W_POSITION                  equ 0002h
SSP1STAT_NOT_W_SIZE                      equ 0001h
SSP1STAT_NOT_W_LENGTH                    equ 0001h
SSP1STAT_NOT_W_MASK                      equ 0004h
SSP1STAT_NOT_A_POSN                      equ 0005h
SSP1STAT_NOT_A_POSITION                  equ 0005h
SSP1STAT_NOT_A_SIZE                      equ 0001h
SSP1STAT_NOT_A_LENGTH                    equ 0001h
SSP1STAT_NOT_A_MASK                      equ 0020h

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
SSP1ADD                                  equ 0FC8h
// bitfield definitions
SSP1ADD_SSP1ADD_POSN                     equ 0000h
SSP1ADD_SSP1ADD_POSITION                 equ 0000h
SSP1ADD_SSP1ADD_SIZE                     equ 0008h
SSP1ADD_SSP1ADD_LENGTH                   equ 0008h
SSP1ADD_SSP1ADD_MASK                     equ 00FFh
SSP1ADD_SSP1ADD0_POSN                    equ 0000h
SSP1ADD_SSP1ADD0_POSITION                equ 0000h
SSP1ADD_SSP1ADD0_SIZE                    equ 0001h
SSP1ADD_SSP1ADD0_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD0_MASK                    equ 0001h
SSP1ADD_SSP1ADD1_POSN                    equ 0001h
SSP1ADD_SSP1ADD1_POSITION                equ 0001h
SSP1ADD_SSP1ADD1_SIZE                    equ 0001h
SSP1ADD_SSP1ADD1_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD1_MASK                    equ 0002h
SSP1ADD_SSP1ADD2_POSN                    equ 0002h
SSP1ADD_SSP1ADD2_POSITION                equ 0002h
SSP1ADD_SSP1ADD2_SIZE                    equ 0001h
SSP1ADD_SSP1ADD2_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD2_MASK                    equ 0004h
SSP1ADD_SSP1ADD3_POSN                    equ 0003h
SSP1ADD_SSP1ADD3_POSITION                equ 0003h
SSP1ADD_SSP1ADD3_SIZE                    equ 0001h
SSP1ADD_SSP1ADD3_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD3_MASK                    equ 0008h
SSP1ADD_SSP1ADD4_POSN                    equ 0004h
SSP1ADD_SSP1ADD4_POSITION                equ 0004h
SSP1ADD_SSP1ADD4_SIZE                    equ 0001h
SSP1ADD_SSP1ADD4_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD4_MASK                    equ 0010h
SSP1ADD_SSP1ADD5_POSN                    equ 0005h
SSP1ADD_SSP1ADD5_POSITION                equ 0005h
SSP1ADD_SSP1ADD5_SIZE                    equ 0001h
SSP1ADD_SSP1ADD5_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD5_MASK                    equ 0020h
SSP1ADD_SSP1ADD6_POSN                    equ 0006h
SSP1ADD_SSP1ADD6_POSITION                equ 0006h
SSP1ADD_SSP1ADD6_SIZE                    equ 0001h
SSP1ADD_SSP1ADD6_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD6_MASK                    equ 0040h
SSP1ADD_SSP1ADD7_POSN                    equ 0007h
SSP1ADD_SSP1ADD7_POSITION                equ 0007h
SSP1ADD_SSP1ADD7_SIZE                    equ 0001h
SSP1ADD_SSP1ADD7_LENGTH                  equ 0001h
SSP1ADD_SSP1ADD7_MASK                    equ 0080h
SSP1ADD_MSK0_POSN                        equ 0000h
SSP1ADD_MSK0_POSITION                    equ 0000h
SSP1ADD_MSK0_SIZE                        equ 0001h
SSP1ADD_MSK0_LENGTH                      equ 0001h
SSP1ADD_MSK0_MASK                        equ 0001h
SSP1ADD_MSK1_POSN                        equ 0001h
SSP1ADD_MSK1_POSITION                    equ 0001h
SSP1ADD_MSK1_SIZE                        equ 0001h
SSP1ADD_MSK1_LENGTH                      equ 0001h
SSP1ADD_MSK1_MASK                        equ 0002h
SSP1ADD_MSK2_POSN                        equ 0002h
SSP1ADD_MSK2_POSITION                    equ 0002h
SSP1ADD_MSK2_SIZE                        equ 0001h
SSP1ADD_MSK2_LENGTH                      equ 0001h
SSP1ADD_MSK2_MASK                        equ 0004h
SSP1ADD_MSK3_POSN                        equ 0003h
SSP1ADD_MSK3_POSITION                    equ 0003h
SSP1ADD_MSK3_SIZE                        equ 0001h
SSP1ADD_MSK3_LENGTH                      equ 0001h
SSP1ADD_MSK3_MASK                        equ 0008h
SSP1ADD_MSK4_POSN                        equ 0004h
SSP1ADD_MSK4_POSITION                    equ 0004h
SSP1ADD_MSK4_SIZE                        equ 0001h
SSP1ADD_MSK4_LENGTH                      equ 0001h
SSP1ADD_MSK4_MASK                        equ 0010h
SSP1ADD_MSK5_POSN                        equ 0005h
SSP1ADD_MSK5_POSITION                    equ 0005h
SSP1ADD_MSK5_SIZE                        equ 0001h
SSP1ADD_MSK5_LENGTH                      equ 0001h
SSP1ADD_MSK5_MASK                        equ 0020h
SSP1ADD_MSK6_POSN                        equ 0006h
SSP1ADD_MSK6_POSITION                    equ 0006h
SSP1ADD_MSK6_SIZE                        equ 0001h
SSP1ADD_MSK6_LENGTH                      equ 0001h
SSP1ADD_MSK6_MASK                        equ 0040h
SSP1ADD_MSK7_POSN                        equ 0007h
SSP1ADD_MSK7_POSITION                    equ 0007h
SSP1ADD_MSK7_SIZE                        equ 0001h
SSP1ADD_MSK7_LENGTH                      equ 0001h
SSP1ADD_MSK7_MASK                        equ 0080h
SSP1ADD_MSK01_POSN                       equ 0000h
SSP1ADD_MSK01_POSITION                   equ 0000h
SSP1ADD_MSK01_SIZE                       equ 0001h
SSP1ADD_MSK01_LENGTH                     equ 0001h
SSP1ADD_MSK01_MASK                       equ 0001h
SSP1ADD_MSK11_POSN                       equ 0001h
SSP1ADD_MSK11_POSITION                   equ 0001h
SSP1ADD_MSK11_SIZE                       equ 0001h
SSP1ADD_MSK11_LENGTH                     equ 0001h
SSP1ADD_MSK11_MASK                       equ 0002h
SSP1ADD_MSK21_POSN                       equ 0002h
SSP1ADD_MSK21_POSITION                   equ 0002h
SSP1ADD_MSK21_SIZE                       equ 0001h
SSP1ADD_MSK21_LENGTH                     equ 0001h
SSP1ADD_MSK21_MASK                       equ 0004h
SSP1ADD_MSK31_POSN                       equ 0003h
SSP1ADD_MSK31_POSITION                   equ 0003h
SSP1ADD_MSK31_SIZE                       equ 0001h
SSP1ADD_MSK31_LENGTH                     equ 0001h
SSP1ADD_MSK31_MASK                       equ 0008h
SSP1ADD_MSK41_POSN                       equ 0004h
SSP1ADD_MSK41_POSITION                   equ 0004h
SSP1ADD_MSK41_SIZE                       equ 0001h
SSP1ADD_MSK41_LENGTH                     equ 0001h
SSP1ADD_MSK41_MASK                       equ 0010h
SSP1ADD_MSK51_POSN                       equ 0005h
SSP1ADD_MSK51_POSITION                   equ 0005h
SSP1ADD_MSK51_SIZE                       equ 0001h
SSP1ADD_MSK51_LENGTH                     equ 0001h
SSP1ADD_MSK51_MASK                       equ 0020h
SSP1ADD_MSK61_POSN                       equ 0006h
SSP1ADD_MSK61_POSITION                   equ 0006h
SSP1ADD_MSK61_SIZE                       equ 0001h
SSP1ADD_MSK61_LENGTH                     equ 0001h
SSP1ADD_MSK61_MASK                       equ 0040h
SSP1ADD_MSK71_POSN                       equ 0007h
SSP1ADD_MSK71_POSITION                   equ 0007h
SSP1ADD_MSK71_SIZE                       equ 0001h
SSP1ADD_MSK71_LENGTH                     equ 0001h
SSP1ADD_MSK71_MASK                       equ 0080h

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
SSP1BUF                                  equ 0FC9h
// bitfield definitions
SSP1BUF_SSP1BUF_POSN                     equ 0000h
SSP1BUF_SSP1BUF_POSITION                 equ 0000h
SSP1BUF_SSP1BUF_SIZE                     equ 0008h
SSP1BUF_SSP1BUF_LENGTH                   equ 0008h
SSP1BUF_SSP1BUF_MASK                     equ 00FFh

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
SSP1MSK                                  equ 0FCAh
// bitfield definitions
SSP1MSK_SSP1MSK_POSN                     equ 0000h
SSP1MSK_SSP1MSK_POSITION                 equ 0000h
SSP1MSK_SSP1MSK_SIZE                     equ 0008h
SSP1MSK_SSP1MSK_LENGTH                   equ 0008h
SSP1MSK_SSP1MSK_MASK                     equ 00FFh
SSP1MSK_SSP1MSK0_POSN                    equ 0000h
SSP1MSK_SSP1MSK0_POSITION                equ 0000h
SSP1MSK_SSP1MSK0_SIZE                    equ 0001h
SSP1MSK_SSP1MSK0_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK0_MASK                    equ 0001h
SSP1MSK_SSP1MSK1_POSN                    equ 0001h
SSP1MSK_SSP1MSK1_POSITION                equ 0001h
SSP1MSK_SSP1MSK1_SIZE                    equ 0001h
SSP1MSK_SSP1MSK1_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK1_MASK                    equ 0002h
SSP1MSK_SSP1MSK2_POSN                    equ 0002h
SSP1MSK_SSP1MSK2_POSITION                equ 0002h
SSP1MSK_SSP1MSK2_SIZE                    equ 0001h
SSP1MSK_SSP1MSK2_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK2_MASK                    equ 0004h
SSP1MSK_SSP1MSK3_POSN                    equ 0003h
SSP1MSK_SSP1MSK3_POSITION                equ 0003h
SSP1MSK_SSP1MSK3_SIZE                    equ 0001h
SSP1MSK_SSP1MSK3_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK3_MASK                    equ 0008h
SSP1MSK_SSP1MSK4_POSN                    equ 0004h
SSP1MSK_SSP1MSK4_POSITION                equ 0004h
SSP1MSK_SSP1MSK4_SIZE                    equ 0001h
SSP1MSK_SSP1MSK4_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK4_MASK                    equ 0010h
SSP1MSK_SSP1MSK5_POSN                    equ 0005h
SSP1MSK_SSP1MSK5_POSITION                equ 0005h
SSP1MSK_SSP1MSK5_SIZE                    equ 0001h
SSP1MSK_SSP1MSK5_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK5_MASK                    equ 0020h
SSP1MSK_SSP1MSK6_POSN                    equ 0006h
SSP1MSK_SSP1MSK6_POSITION                equ 0006h
SSP1MSK_SSP1MSK6_SIZE                    equ 0001h
SSP1MSK_SSP1MSK6_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK6_MASK                    equ 0040h
SSP1MSK_SSP1MSK7_POSN                    equ 0007h
SSP1MSK_SSP1MSK7_POSITION                equ 0007h
SSP1MSK_SSP1MSK7_SIZE                    equ 0001h
SSP1MSK_SSP1MSK7_LENGTH                  equ 0001h
SSP1MSK_SSP1MSK7_MASK                    equ 0080h

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
SSP1CON3                                 equ 0FCBh
// bitfield definitions
SSP1CON3_DHEN_POSN                       equ 0000h
SSP1CON3_DHEN_POSITION                   equ 0000h
SSP1CON3_DHEN_SIZE                       equ 0001h
SSP1CON3_DHEN_LENGTH                     equ 0001h
SSP1CON3_DHEN_MASK                       equ 0001h
SSP1CON3_AHEN_POSN                       equ 0001h
SSP1CON3_AHEN_POSITION                   equ 0001h
SSP1CON3_AHEN_SIZE                       equ 0001h
SSP1CON3_AHEN_LENGTH                     equ 0001h
SSP1CON3_AHEN_MASK                       equ 0002h
SSP1CON3_SBCDE_POSN                      equ 0002h
SSP1CON3_SBCDE_POSITION                  equ 0002h
SSP1CON3_SBCDE_SIZE                      equ 0001h
SSP1CON3_SBCDE_LENGTH                    equ 0001h
SSP1CON3_SBCDE_MASK                      equ 0004h
SSP1CON3_SDAHT_POSN                      equ 0003h
SSP1CON3_SDAHT_POSITION                  equ 0003h
SSP1CON3_SDAHT_SIZE                      equ 0001h
SSP1CON3_SDAHT_LENGTH                    equ 0001h
SSP1CON3_SDAHT_MASK                      equ 0008h
SSP1CON3_BOEN_POSN                       equ 0004h
SSP1CON3_BOEN_POSITION                   equ 0004h
SSP1CON3_BOEN_SIZE                       equ 0001h
SSP1CON3_BOEN_LENGTH                     equ 0001h
SSP1CON3_BOEN_MASK                       equ 0010h
SSP1CON3_SCIE_POSN                       equ 0005h
SSP1CON3_SCIE_POSITION                   equ 0005h
SSP1CON3_SCIE_SIZE                       equ 0001h
SSP1CON3_SCIE_LENGTH                     equ 0001h
SSP1CON3_SCIE_MASK                       equ 0020h
SSP1CON3_PCIE_POSN                       equ 0006h
SSP1CON3_PCIE_POSITION                   equ 0006h
SSP1CON3_PCIE_SIZE                       equ 0001h
SSP1CON3_PCIE_LENGTH                     equ 0001h
SSP1CON3_PCIE_MASK                       equ 0040h
SSP1CON3_ACKTIM_POSN                     equ 0007h
SSP1CON3_ACKTIM_POSITION                 equ 0007h
SSP1CON3_ACKTIM_SIZE                     equ 0001h
SSP1CON3_ACKTIM_LENGTH                   equ 0001h
SSP1CON3_ACKTIM_MASK                     equ 0080h

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 0FCCh
// bitfield definitions
T1GCON_T1GGO_NOT_T1DONE_POSN             equ 0003h
T1GCON_T1GGO_NOT_T1DONE_POSITION         equ 0003h
T1GCON_T1GGO_NOT_T1DONE_SIZE             equ 0001h
T1GCON_T1GGO_NOT_T1DONE_LENGTH           equ 0001h
T1GCON_T1GGO_NOT_T1DONE_MASK             equ 0008h
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
T1GCON_T1GGO_nT1DONE_POSN                equ 0003h
T1GCON_T1GGO_nT1DONE_POSITION            equ 0003h
T1GCON_T1GGO_nT1DONE_SIZE                equ 0001h
T1GCON_T1GGO_nT1DONE_LENGTH              equ 0001h
T1GCON_T1GGO_nT1DONE_MASK                equ 0008h
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
T1GCON_NOT_T1DONE_POSN                   equ 0003h
T1GCON_NOT_T1DONE_POSITION               equ 0003h
T1GCON_NOT_T1DONE_SIZE                   equ 0001h
T1GCON_NOT_T1DONE_LENGTH                 equ 0001h
T1GCON_NOT_T1DONE_MASK                   equ 0008h
T1GCON_nT1DONE_POSN                      equ 0003h
T1GCON_nT1DONE_POSITION                  equ 0003h
T1GCON_nT1DONE_SIZE                      equ 0001h
T1GCON_nT1DONE_LENGTH                    equ 0001h
T1GCON_nT1DONE_MASK                      equ 0008h
T1GCON_T1DONE_POSN                       equ 0003h
T1GCON_T1DONE_POSITION                   equ 0003h
T1GCON_T1DONE_SIZE                       equ 0001h
T1GCON_T1DONE_LENGTH                     equ 0001h
T1GCON_T1DONE_MASK                       equ 0008h
T1GCON_T1GGO_NOT_DONE_POSN               equ 0003h
T1GCON_T1GGO_NOT_DONE_POSITION           equ 0003h
T1GCON_T1GGO_NOT_DONE_SIZE               equ 0001h
T1GCON_T1GGO_NOT_DONE_LENGTH             equ 0001h
T1GCON_T1GGO_NOT_DONE_MASK               equ 0008h
T1GCON_T1GGO_nDONE_POSN                  equ 0003h
T1GCON_T1GGO_nDONE_POSITION              equ 0003h
T1GCON_T1GGO_nDONE_SIZE                  equ 0001h
T1GCON_T1GGO_nDONE_LENGTH                equ 0001h
T1GCON_T1GGO_nDONE_MASK                  equ 0008h

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
T1CON_RD16_POSN                          equ 0001h
T1CON_RD16_POSITION                      equ 0001h
T1CON_RD16_SIZE                          equ 0001h
T1CON_RD16_LENGTH                        equ 0001h
T1CON_RD16_MASK                          equ 0002h
T1CON_nT1SYNC_POSN                       equ 0002h
T1CON_nT1SYNC_POSITION                   equ 0002h
T1CON_nT1SYNC_SIZE                       equ 0001h
T1CON_nT1SYNC_LENGTH                     equ 0001h
T1CON_nT1SYNC_MASK                       equ 0004h
T1CON_SOSCEN_POSN                        equ 0003h
T1CON_SOSCEN_POSITION                    equ 0003h
T1CON_SOSCEN_SIZE                        equ 0001h
T1CON_SOSCEN_LENGTH                      equ 0001h
T1CON_SOSCEN_MASK                        equ 0008h
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
T1CON_T1RD16_POSN                        equ 0001h
T1CON_T1RD16_POSITION                    equ 0001h
T1CON_T1RD16_SIZE                        equ 0001h
T1CON_T1RD16_LENGTH                      equ 0001h
T1CON_T1RD16_MASK                        equ 0002h
T1CON_T1SYNC_POSN                        equ 0002h
T1CON_T1SYNC_POSITION                    equ 0002h
T1CON_T1SYNC_SIZE                        equ 0001h
T1CON_T1SYNC_LENGTH                      equ 0001h
T1CON_T1SYNC_MASK                        equ 0004h
T1CON_T1SOSCEN_POSN                      equ 0003h
T1CON_T1SOSCEN_POSITION                  equ 0003h
T1CON_T1SOSCEN_SIZE                      equ 0001h
T1CON_T1SOSCEN_LENGTH                    equ 0001h
T1CON_T1SOSCEN_MASK                      equ 0008h
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
T1CON_T1OSCEN_POSN                       equ 0003h
T1CON_T1OSCEN_POSITION                   equ 0003h
T1CON_T1OSCEN_SIZE                       equ 0001h
T1CON_T1OSCEN_LENGTH                     equ 0001h
T1CON_T1OSCEN_MASK                       equ 0008h
T1CON_SOSCEN1_POSN                       equ 0003h
T1CON_SOSCEN1_POSITION                   equ 0003h
T1CON_SOSCEN1_SIZE                       equ 0001h
T1CON_SOSCEN1_LENGTH                     equ 0001h
T1CON_SOSCEN1_MASK                       equ 0008h
T1CON_RD161_POSN                         equ 0007h
T1CON_RD161_POSITION                     equ 0007h
T1CON_RD161_SIZE                         equ 0001h
T1CON_RD161_LENGTH                       equ 0001h
T1CON_RD161_MASK                         equ 0080h

// Register: TMR1
#define TMR1 TMR1
TMR1                                     equ 0FCEh

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 0FCEh
// bitfield definitions
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 0FCFh
// bitfield definitions
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh

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
OSCCON2_HFIOFR_POSN                      equ 0001h
OSCCON2_HFIOFR_POSITION                  equ 0001h
OSCCON2_HFIOFR_SIZE                      equ 0001h
OSCCON2_HFIOFR_LENGTH                    equ 0001h
OSCCON2_HFIOFR_MASK                      equ 0002h
OSCCON2_PRISD_POSN                       equ 0002h
OSCCON2_PRISD_POSITION                   equ 0002h
OSCCON2_PRISD_SIZE                       equ 0001h
OSCCON2_PRISD_LENGTH                     equ 0001h
OSCCON2_PRISD_MASK                       equ 0004h
OSCCON2_SOSCGO_POSN                      equ 0003h
OSCCON2_SOSCGO_POSITION                  equ 0003h
OSCCON2_SOSCGO_SIZE                      equ 0001h
OSCCON2_SOSCGO_LENGTH                    equ 0001h
OSCCON2_SOSCGO_MASK                      equ 0008h
OSCCON2_PLLEN_POSN                       equ 0004h
OSCCON2_PLLEN_POSITION                   equ 0004h
OSCCON2_PLLEN_SIZE                       equ 0001h
OSCCON2_PLLEN_LENGTH                     equ 0001h
OSCCON2_PLLEN_MASK                       equ 0010h
OSCCON2_INTSRC_POSN                      equ 0005h
OSCCON2_INTSRC_POSITION                  equ 0005h
OSCCON2_INTSRC_SIZE                      equ 0001h
OSCCON2_INTSRC_LENGTH                    equ 0001h
OSCCON2_INTSRC_MASK                      equ 0020h
OSCCON2_SOSCRUN_POSN                     equ 0006h
OSCCON2_SOSCRUN_POSITION                 equ 0006h
OSCCON2_SOSCRUN_SIZE                     equ 0001h
OSCCON2_SOSCRUN_LENGTH                   equ 0001h
OSCCON2_SOSCRUN_MASK                     equ 0040h
OSCCON2_PLLRDY_POSN                      equ 0007h
OSCCON2_PLLRDY_POSITION                  equ 0007h
OSCCON2_PLLRDY_SIZE                      equ 0001h
OSCCON2_PLLRDY_LENGTH                    equ 0001h
OSCCON2_PLLRDY_MASK                      equ 0080h

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
// bitfield definitions
TMR0L_TMR0L_POSN                         equ 0000h
TMR0L_TMR0L_POSITION                     equ 0000h
TMR0L_TMR0L_SIZE                         equ 0008h
TMR0L_TMR0L_LENGTH                       equ 0008h
TMR0L_TMR0L_MASK                         equ 00FFh

// Register: TMR0H
#define TMR0H TMR0H
TMR0H                                    equ 0FD7h
// bitfield definitions
TMR0H_TMR0H_POSN                         equ 0000h
TMR0H_TMR0H_POSITION                     equ 0000h
TMR0H_TMR0H_SIZE                         equ 0008h
TMR0H_TMR0H_LENGTH                       equ 0008h
TMR0H_TMR0H_MASK                         equ 00FFh

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
// bitfield definitions
FSR2L_FSR2L_POSN                         equ 0000h
FSR2L_FSR2L_POSITION                     equ 0000h
FSR2L_FSR2L_SIZE                         equ 0008h
FSR2L_FSR2L_LENGTH                       equ 0008h
FSR2L_FSR2L_MASK                         equ 00FFh

// Register: FSR2H
#define FSR2H FSR2H
FSR2H                                    equ 0FDAh

// Register: PLUSW2
#define PLUSW2 PLUSW2
PLUSW2                                   equ 0FDBh
// bitfield definitions
PLUSW2_PLUSW2_POSN                       equ 0000h
PLUSW2_PLUSW2_POSITION                   equ 0000h
PLUSW2_PLUSW2_SIZE                       equ 0008h
PLUSW2_PLUSW2_LENGTH                     equ 0008h
PLUSW2_PLUSW2_MASK                       equ 00FFh

// Register: PREINC2
#define PREINC2 PREINC2
PREINC2                                  equ 0FDCh
// bitfield definitions
PREINC2_PREINC2_POSN                     equ 0000h
PREINC2_PREINC2_POSITION                 equ 0000h
PREINC2_PREINC2_SIZE                     equ 0008h
PREINC2_PREINC2_LENGTH                   equ 0008h
PREINC2_PREINC2_MASK                     equ 00FFh

// Register: POSTDEC2
#define POSTDEC2 POSTDEC2
POSTDEC2                                 equ 0FDDh
// bitfield definitions
POSTDEC2_POSTDEC2_POSN                   equ 0000h
POSTDEC2_POSTDEC2_POSITION               equ 0000h
POSTDEC2_POSTDEC2_SIZE                   equ 0008h
POSTDEC2_POSTDEC2_LENGTH                 equ 0008h
POSTDEC2_POSTDEC2_MASK                   equ 00FFh

// Register: POSTINC2
#define POSTINC2 POSTINC2
POSTINC2                                 equ 0FDEh
// bitfield definitions
POSTINC2_POSTINC2_POSN                   equ 0000h
POSTINC2_POSTINC2_POSITION               equ 0000h
POSTINC2_POSTINC2_SIZE                   equ 0008h
POSTINC2_POSTINC2_LENGTH                 equ 0008h
POSTINC2_POSTINC2_MASK                   equ 00FFh

// Register: INDF2
#define INDF2 INDF2
INDF2                                    equ 0FDFh
// bitfield definitions
INDF2_INDF2_POSN                         equ 0000h
INDF2_INDF2_POSITION                     equ 0000h
INDF2_INDF2_SIZE                         equ 0008h
INDF2_INDF2_LENGTH                       equ 0008h
INDF2_INDF2_MASK                         equ 00FFh

// Register: BSR
#define BSR BSR
BSR                                      equ 0FE0h

// Register: FSR1
#define FSR1 FSR1
FSR1                                     equ 0FE1h

// Register: FSR1L
#define FSR1L FSR1L
FSR1L                                    equ 0FE1h
// bitfield definitions
FSR1L_FSR1L_POSN                         equ 0000h
FSR1L_FSR1L_POSITION                     equ 0000h
FSR1L_FSR1L_SIZE                         equ 0008h
FSR1L_FSR1L_LENGTH                       equ 0008h
FSR1L_FSR1L_MASK                         equ 00FFh

// Register: FSR1H
#define FSR1H FSR1H
FSR1H                                    equ 0FE2h

// Register: PLUSW1
#define PLUSW1 PLUSW1
PLUSW1                                   equ 0FE3h
// bitfield definitions
PLUSW1_PLUSW1_POSN                       equ 0000h
PLUSW1_PLUSW1_POSITION                   equ 0000h
PLUSW1_PLUSW1_SIZE                       equ 0008h
PLUSW1_PLUSW1_LENGTH                     equ 0008h
PLUSW1_PLUSW1_MASK                       equ 00FFh

// Register: PREINC1
#define PREINC1 PREINC1
PREINC1                                  equ 0FE4h
// bitfield definitions
PREINC1_PREINC1_POSN                     equ 0000h
PREINC1_PREINC1_POSITION                 equ 0000h
PREINC1_PREINC1_SIZE                     equ 0008h
PREINC1_PREINC1_LENGTH                   equ 0008h
PREINC1_PREINC1_MASK                     equ 00FFh

// Register: POSTDEC1
#define POSTDEC1 POSTDEC1
POSTDEC1                                 equ 0FE5h
// bitfield definitions
POSTDEC1_POSTDEC1_POSN                   equ 0000h
POSTDEC1_POSTDEC1_POSITION               equ 0000h
POSTDEC1_POSTDEC1_SIZE                   equ 0008h
POSTDEC1_POSTDEC1_LENGTH                 equ 0008h
POSTDEC1_POSTDEC1_MASK                   equ 00FFh

// Register: POSTINC1
#define POSTINC1 POSTINC1
POSTINC1                                 equ 0FE6h
// bitfield definitions
POSTINC1_POSTINC1_POSN                   equ 0000h
POSTINC1_POSTINC1_POSITION               equ 0000h
POSTINC1_POSTINC1_SIZE                   equ 0008h
POSTINC1_POSTINC1_LENGTH                 equ 0008h
POSTINC1_POSTINC1_MASK                   equ 00FFh

// Register: INDF1
#define INDF1 INDF1
INDF1                                    equ 0FE7h
// bitfield definitions
INDF1_INDF1_POSN                         equ 0000h
INDF1_INDF1_POSITION                     equ 0000h
INDF1_INDF1_SIZE                         equ 0008h
INDF1_INDF1_LENGTH                       equ 0008h
INDF1_INDF1_MASK                         equ 00FFh

// Register: WREG
#define WREG WREG
WREG                                     equ 0FE8h
// bitfield definitions
WREG_WREG_POSN                           equ 0000h
WREG_WREG_POSITION                       equ 0000h
WREG_WREG_SIZE                           equ 0008h
WREG_WREG_LENGTH                         equ 0008h
WREG_WREG_MASK                           equ 00FFh

// Register: FSR0
#define FSR0 FSR0
FSR0                                     equ 0FE9h

// Register: FSR0L
#define FSR0L FSR0L
FSR0L                                    equ 0FE9h
// bitfield definitions
FSR0L_FSR0L_POSN                         equ 0000h
FSR0L_FSR0L_POSITION                     equ 0000h
FSR0L_FSR0L_SIZE                         equ 0008h
FSR0L_FSR0L_LENGTH                       equ 0008h
FSR0L_FSR0L_MASK                         equ 00FFh

// Register: FSR0H
#define FSR0H FSR0H
FSR0H                                    equ 0FEAh

// Register: PLUSW0
#define PLUSW0 PLUSW0
PLUSW0                                   equ 0FEBh
// bitfield definitions
PLUSW0_PLUSW0_POSN                       equ 0000h
PLUSW0_PLUSW0_POSITION                   equ 0000h
PLUSW0_PLUSW0_SIZE                       equ 0008h
PLUSW0_PLUSW0_LENGTH                     equ 0008h
PLUSW0_PLUSW0_MASK                       equ 00FFh

// Register: PREINC0
#define PREINC0 PREINC0
PREINC0                                  equ 0FECh
// bitfield definitions
PREINC0_PREINC0_POSN                     equ 0000h
PREINC0_PREINC0_POSITION                 equ 0000h
PREINC0_PREINC0_SIZE                     equ 0008h
PREINC0_PREINC0_LENGTH                   equ 0008h
PREINC0_PREINC0_MASK                     equ 00FFh

// Register: POSTDEC0
#define POSTDEC0 POSTDEC0
POSTDEC0                                 equ 0FEDh
// bitfield definitions
POSTDEC0_POSTDEC0_POSN                   equ 0000h
POSTDEC0_POSTDEC0_POSITION               equ 0000h
POSTDEC0_POSTDEC0_SIZE                   equ 0008h
POSTDEC0_POSTDEC0_LENGTH                 equ 0008h
POSTDEC0_POSTDEC0_MASK                   equ 00FFh

// Register: POSTINC0
#define POSTINC0 POSTINC0
POSTINC0                                 equ 0FEEh
// bitfield definitions
POSTINC0_POSTINC0_POSN                   equ 0000h
POSTINC0_POSTINC0_POSITION               equ 0000h
POSTINC0_POSTINC0_SIZE                   equ 0008h
POSTINC0_POSTINC0_LENGTH                 equ 0008h
POSTINC0_POSTINC0_MASK                   equ 00FFh

// Register: INDF0
#define INDF0 INDF0
INDF0                                    equ 0FEFh
// bitfield definitions
INDF0_INDF0_POSN                         equ 0000h
INDF0_INDF0_POSITION                     equ 0000h
INDF0_INDF0_SIZE                         equ 0008h
INDF0_INDF0_LENGTH                       equ 0008h
INDF0_INDF0_MASK                         equ 00FFh

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
INTCON2_NOT_RBPU_POSN                    equ 0007h
INTCON2_NOT_RBPU_POSITION                equ 0007h
INTCON2_NOT_RBPU_SIZE                    equ 0001h
INTCON2_NOT_RBPU_LENGTH                  equ 0001h
INTCON2_NOT_RBPU_MASK                    equ 0080h
INTCON2_IOCIP_POSN                       equ 0000h
INTCON2_IOCIP_POSITION                   equ 0000h
INTCON2_IOCIP_SIZE                       equ 0001h
INTCON2_IOCIP_LENGTH                     equ 0001h
INTCON2_IOCIP_MASK                       equ 0001h
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
INTCON2_nRBPU_POSN                       equ 0007h
INTCON2_nRBPU_POSITION                   equ 0007h
INTCON2_nRBPU_SIZE                       equ 0001h
INTCON2_nRBPU_LENGTH                     equ 0001h
INTCON2_nRBPU_MASK                       equ 0080h
INTCON2_T0IP_POSN                        equ 0002h
INTCON2_T0IP_POSITION                    equ 0002h
INTCON2_T0IP_SIZE                        equ 0001h
INTCON2_T0IP_LENGTH                      equ 0001h
INTCON2_T0IP_MASK                        equ 0004h
INTCON2_RBPU_POSN                        equ 0007h
INTCON2_RBPU_POSITION                    equ 0007h
INTCON2_RBPU_SIZE                        equ 0001h
INTCON2_RBPU_LENGTH                      equ 0001h
INTCON2_RBPU_MASK                        equ 0080h

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 0FF2h
// bitfield definitions
INTCON_IOCIF_POSN                        equ 0000h
INTCON_IOCIF_POSITION                    equ 0000h
INTCON_IOCIF_SIZE                        equ 0001h
INTCON_IOCIF_LENGTH                      equ 0001h
INTCON_IOCIF_MASK                        equ 0001h
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
INTCON_IOCIE_POSN                        equ 0003h
INTCON_IOCIE_POSITION                    equ 0003h
INTCON_IOCIE_SIZE                        equ 0001h
INTCON_IOCIE_LENGTH                      equ 0001h
INTCON_IOCIE_MASK                        equ 0008h
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

// Register: PROD
#define PROD PROD
PROD                                     equ 0FF3h

// Register: PRODL
#define PRODL PRODL
PRODL                                    equ 0FF3h
// bitfield definitions
PRODL_PRODL_POSN                         equ 0000h
PRODL_PRODL_POSITION                     equ 0000h
PRODL_PRODL_SIZE                         equ 0008h
PRODL_PRODL_LENGTH                       equ 0008h
PRODL_PRODL_MASK                         equ 00FFh

// Register: PRODH
#define PRODH PRODH
PRODH                                    equ 0FF4h
// bitfield definitions
PRODH_PRODH_POSN                         equ 0000h
PRODH_PRODH_POSITION                     equ 0000h
PRODH_PRODH_SIZE                         equ 0008h
PRODH_PRODH_LENGTH                       equ 0008h
PRODH_PRODH_MASK                         equ 00FFh

// Register: TABLAT
#define TABLAT TABLAT
TABLAT                                   equ 0FF5h
// bitfield definitions
TABLAT_TABLAT_POSN                       equ 0000h
TABLAT_TABLAT_POSITION                   equ 0000h
TABLAT_TABLAT_SIZE                       equ 0008h
TABLAT_TABLAT_LENGTH                     equ 0008h
TABLAT_TABLAT_MASK                       equ 00FFh

// Register: TBLPTR
#define TBLPTR TBLPTR
TBLPTR                                   equ 0FF6h

// Register: TBLPTRL
#define TBLPTRL TBLPTRL
TBLPTRL                                  equ 0FF6h
// bitfield definitions
TBLPTRL_TBLPTRL_POSN                     equ 0000h
TBLPTRL_TBLPTRL_POSITION                 equ 0000h
TBLPTRL_TBLPTRL_SIZE                     equ 0008h
TBLPTRL_TBLPTRL_LENGTH                   equ 0008h
TBLPTRL_TBLPTRL_MASK                     equ 00FFh

// Register: TBLPTRH
#define TBLPTRH TBLPTRH
TBLPTRH                                  equ 0FF7h
// bitfield definitions
TBLPTRH_TBLPTRH_POSN                     equ 0000h
TBLPTRH_TBLPTRH_POSITION                 equ 0000h
TBLPTRH_TBLPTRH_SIZE                     equ 0008h
TBLPTRH_TBLPTRH_LENGTH                   equ 0008h
TBLPTRH_TBLPTRH_MASK                     equ 00FFh

// Register: TBLPTRU
#define TBLPTRU TBLPTRU
TBLPTRU                                  equ 0FF8h

// Register: PCLAT
#define PCLAT PCLAT
PCLAT                                    equ 0FF9h

// Register: PCL
#define PCL PCL
PCL                                      equ 0FF9h
// bitfield definitions
PCL_PCL_POSN                             equ 0000h
PCL_PCL_POSITION                         equ 0000h
PCL_PCL_SIZE                             equ 0008h
PCL_PCL_LENGTH                           equ 0008h
PCL_PCL_MASK                             equ 00FFh

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 0FFAh
// bitfield definitions
PCLATH_PCH_POSN                          equ 0000h
PCLATH_PCH_POSITION                      equ 0000h
PCLATH_PCH_SIZE                          equ 0008h
PCLATH_PCH_LENGTH                        equ 0008h
PCLATH_PCH_MASK                          equ 00FFh

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
STKPTR_STKFUL_POSN                       equ 0007h
STKPTR_STKFUL_POSITION                   equ 0007h
STKPTR_STKFUL_SIZE                       equ 0001h
STKPTR_STKFUL_LENGTH                     equ 0001h
STKPTR_STKFUL_MASK                       equ 0080h
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
STKPTR_STKOVF_POSN                       equ 0007h
STKPTR_STKOVF_POSITION                   equ 0007h
STKPTR_STKOVF_SIZE                       equ 0001h
STKPTR_STKOVF_LENGTH                     equ 0001h
STKPTR_STKOVF_MASK                       equ 0080h

// Register: TOS
#define TOS TOS
TOS                                      equ 0FFDh

// Register: TOSL
#define TOSL TOSL
TOSL                                     equ 0FFDh
// bitfield definitions
TOSL_TOSL_POSN                           equ 0000h
TOSL_TOSL_POSITION                       equ 0000h
TOSL_TOSL_SIZE                           equ 0008h
TOSL_TOSL_LENGTH                         equ 0008h
TOSL_TOSL_MASK                           equ 00FFh

// Register: TOSH
#define TOSH TOSH
TOSH                                     equ 0FFEh
// bitfield definitions
TOSH_TOSH_POSN                           equ 0000h
TOSH_TOSH_POSITION                       equ 0000h
TOSH_TOSH_SIZE                           equ 0008h
TOSH_TOSH_LENGTH                         equ 0008h
TOSH_TOSH_MASK                           equ 00FFh

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
#define ABDEN                            BANKMASK(BAUDCON1), 0, a
#define ABDEN1                           BANKMASK(BAUDCON1), 0, a
#define ABDOVF                           BANKMASK(BAUDCON1), 7, a
#define ABDOVF1                          BANKMASK(BAUDCON1), 7, a
#define ACKDT                            BANKMASK(SSP1CON2), 5, a
#define ACKDT1                           BANKMASK(SSP1CON2), 5, a
#define ACKEN                            BANKMASK(SSP1CON2), 4, a
#define ACKEN1                           BANKMASK(SSP1CON2), 4, a
#define ACKSTAT                          BANKMASK(SSP1CON2), 6, a
#define ACKSTAT1                         BANKMASK(SSP1CON2), 6, a
#define ACKTIM                           BANKMASK(SSP1CON3), 7, a
#define ACQT0                            BANKMASK(ADCON2), 3, a
#define ACQT1                            BANKMASK(ADCON2), 4, a
#define ACQT2                            BANKMASK(ADCON2), 5, a
#define ACTD                             BANKMASK(ACTCON), 6, a
#define ACTEN                            BANKMASK(ACTCON), 7, a
#define ACTIE                            BANKMASK(PIE1), 7, a
#define ACTIF                            BANKMASK(PIR1), 7, a
#define ACTIP                            BANKMASK(IPR1), 7, a
#define ACTLOCK                          BANKMASK(ACTCON), 3, a
#define ACTMD                            BANKMASK(PMD0), 4, a
#define ACTOR                            BANKMASK(ACTCON), 1, a
#define ACTORS                           BANKMASK(ACTCON), 1, a
#define ACTSEL                           BANKMASK(ACTCON), 7, a
#define ACTSRC                           BANKMASK(ACTCON), 4, a
#define ACTUD                            BANKMASK(ACTCON), 6, a
#define ACTVIE                           BANKMASK(UIE), 2, a
#define ACTVIF                           BANKMASK(UIR), 2, a
#define ADCMD                            BANKMASK(PMD1), 2, a
#define ADCS0                            BANKMASK(ADCON2), 0, a
#define ADCS1                            BANKMASK(ADCON2), 1, a
#define ADCS2                            BANKMASK(ADCON2), 2, a
#define ADDEN                            BANKMASK(RCSTA1), 3, a
#define ADDR0                            BANKMASK(UADDR), 0, a
#define ADDR1                            BANKMASK(UADDR), 1, a
#define ADDR2                            BANKMASK(UADDR), 2, a
#define ADDR3                            BANKMASK(UADDR), 3, a
#define ADDR4                            BANKMASK(UADDR), 4, a
#define ADDR5                            BANKMASK(UADDR), 5, a
#define ADDR6                            BANKMASK(UADDR), 6, a
#define ADEN                             BANKMASK(RCSTA1), 3, a
#define ADFM                             BANKMASK(ADCON2), 7, a
#define ADIE                             BANKMASK(PIE1), 6, a
#define ADIF                             BANKMASK(PIR1), 6, a
#define ADIP                             BANKMASK(IPR1), 6, a
#define ADMSK1                           BANKMASK(SSP1CON2), 1, a
#define ADMSK11                          BANKMASK(SSP1CON2), 1, a
#define ADMSK2                           BANKMASK(SSP1CON2), 2, a
#define ADMSK21                          BANKMASK(SSP1CON2), 2, a
#define ADMSK3                           BANKMASK(SSP1CON2), 3, a
#define ADMSK31                          BANKMASK(SSP1CON2), 3, a
#define ADMSK4                           BANKMASK(SSP1CON2), 4, a
#define ADMSK41                          BANKMASK(SSP1CON2), 4, a
#define ADMSK5                           BANKMASK(SSP1CON2), 5, a
#define ADMSK51                          BANKMASK(SSP1CON2), 5, a
#define ADON                             BANKMASK(ADCON0), 0, a
#define AHEN                             BANKMASK(SSP1CON3), 1, a
#define AN0                              BANKMASK(PORTA), 0, a
#define AN1                              BANKMASK(PORTA), 1, a
#define AN2                              BANKMASK(PORTA), 2, a
#define AN3                              BANKMASK(PORTA), 3, a
#define AN4                              BANKMASK(PORTA), 5, a
#define ANSA0                            BANKMASK(ANSELA), 0, b
#define ANSA1                            BANKMASK(ANSELA), 1, b
#define ANSA2                            BANKMASK(ANSELA), 2, b
#define ANSA3                            BANKMASK(ANSELA), 3, b
#define ANSA5                            BANKMASK(ANSELA), 5, b
#define ANSB0                            BANKMASK(ANSELB), 0, b
#define ANSB1                            BANKMASK(ANSELB), 1, b
#define ANSB2                            BANKMASK(ANSELB), 2, b
#define ANSB3                            BANKMASK(ANSELB), 3, b
#define ANSB4                            BANKMASK(ANSELB), 4, b
#define ANSB5                            BANKMASK(ANSELB), 5, b
#define ANSC2                            BANKMASK(ANSELC), 2, b
#define ANSC6                            BANKMASK(ANSELC), 6, b
#define ANSC7                            BANKMASK(ANSELC), 7, b
#define ANSD0                            BANKMASK(ANSELD), 0, b
#define ANSD1                            BANKMASK(ANSELD), 1, b
#define ANSD2                            BANKMASK(ANSELD), 2, b
#define ANSD3                            BANKMASK(ANSELD), 3, b
#define ANSD4                            BANKMASK(ANSELD), 4, b
#define ANSD5                            BANKMASK(ANSELD), 5, b
#define ANSD6                            BANKMASK(ANSELD), 6, b
#define ANSD7                            BANKMASK(ANSELD), 7, b
#define ANSE0                            BANKMASK(ANSELE), 0, b
#define ANSE1                            BANKMASK(ANSELE), 1, b
#define ANSE2                            BANKMASK(ANSELE), 2, b
#define BCL1IE                           BANKMASK(PIE2), 3, a
#define BCL1IF                           BANKMASK(PIR2), 3, a
#define BCL1IP                           BANKMASK(IPR2), 3, a
#define BCLIE                            BANKMASK(PIE2), 3, a
#define BCLIF                            BANKMASK(PIR2), 3, a
#define BCLIP                            BANKMASK(IPR2), 3, a
#define BF                               BANKMASK(SSP1STAT), 0, a
#define BF1                              BANKMASK(SSP1STAT), 0, a
#define BGVST                            BANKMASK(HLVDCON), 6, a
#define BOEN                             BANKMASK(SSP1CON3), 4, a
#define BOR                              BANKMASK(RCON), 0, a
#define BRG0                             BANKMASK(SPBRG1), 0, a
#define BRG1                             BANKMASK(SPBRG1), 1, a
#define BRG10                            BANKMASK(SPBRGH1), 2, a
#define BRG11                            BANKMASK(SPBRGH1), 3, a
#define BRG12                            BANKMASK(SPBRGH1), 4, a
#define BRG13                            BANKMASK(SPBRGH1), 5, a
#define BRG14                            BANKMASK(SPBRGH1), 6, a
#define BRG15                            BANKMASK(SPBRGH1), 7, a
#define BRG16                            BANKMASK(BAUDCON1), 3, a
#define BRG161                           BANKMASK(BAUDCON1), 3, a
#define BRG2                             BANKMASK(SPBRG1), 2, a
#define BRG3                             BANKMASK(SPBRG1), 3, a
#define BRG4                             BANKMASK(SPBRG1), 4, a
#define BRG5                             BANKMASK(SPBRG1), 5, a
#define BRG6                             BANKMASK(SPBRG1), 6, a
#define BRG7                             BANKMASK(SPBRG1), 7, a
#define BRG8                             BANKMASK(SPBRGH1), 0, a
#define BRG9                             BANKMASK(SPBRGH1), 1, a
#define BRGH                             BANKMASK(TXSTA1), 2, a
#define BRGH1                            BANKMASK(TXSTA1), 2, a
#define BTOEE                            BANKMASK(UEIE), 4, a
#define BTOEF                            BANKMASK(UEIR), 4, a
#define BTSEE                            BANKMASK(UEIE), 7, a
#define BTSEF                            BANKMASK(UEIR), 7, a
#define C1CH0                            BANKMASK(CM1CON0), 0, a
#define C1CH1                            BANKMASK(CM1CON0), 1, a
#define C1HYS                            BANKMASK(CM2CON1), 3, a
#define C1IE                             BANKMASK(PIE2), 6, a
#define C1IF                             BANKMASK(PIR2), 6, a
#define C1IP                             BANKMASK(IPR2), 6, a
#define C1OE                             BANKMASK(CM1CON0), 5, a
#define C1ON                             BANKMASK(CM1CON0), 7, a
#define C1OUT                            BANKMASK(CM1CON0), 6, a
#define C1POL                            BANKMASK(CM1CON0), 4, a
#define C1R                              BANKMASK(CM1CON0), 2, a
#define C1RSEL                           BANKMASK(CM2CON1), 5, a
#define C1SP                             BANKMASK(CM1CON0), 3, a
#define C1SYNC                           BANKMASK(CM2CON1), 1, a
#define C1TSEL                           BANKMASK(CCPTMRS), 0, b
#define C2CH0                            BANKMASK(CM2CON0), 0, a
#define C2CH1                            BANKMASK(CM2CON0), 1, a
#define C2HYS                            BANKMASK(CM2CON1), 2, a
#define C2IE                             BANKMASK(PIE2), 5, a
#define C2IF                             BANKMASK(PIR2), 5, a
#define C2IP                             BANKMASK(IPR2), 5, a
#define C2OE                             BANKMASK(CM2CON0), 5, a
#define C2ON                             BANKMASK(CM2CON0), 7, a
#define C2OUT                            BANKMASK(CM2CON0), 6, a
#define C2POL                            BANKMASK(CM2CON0), 4, a
#define C2R                              BANKMASK(CM2CON0), 2, a
#define C2RSEL                           BANKMASK(CM2CON1), 4, a
#define C2SP                             BANKMASK(CM2CON0), 3, a
#define C2SYNC                           BANKMASK(CM2CON1), 0, a
#define C2TSEL                           BANKMASK(CCPTMRS), 3, b
#define CARRY                            BANKMASK(STATUS), 0, a
#define CCP1                             BANKMASK(PORTC), 2, a
#define CCP10                            BANKMASK(PORTE), 2, a
#define CCP1ASE                          BANKMASK(ECCP1AS), 7, a
#define CCP1IE                           BANKMASK(PIE1), 2, a
#define CCP1IF                           BANKMASK(PIR1), 2, a
#define CCP1IP                           BANKMASK(IPR1), 2, a
#define CCP1M0                           BANKMASK(CCP1CON), 0, a
#define CCP1M1                           BANKMASK(CCP1CON), 1, a
#define CCP1M2                           BANKMASK(CCP1CON), 2, a
#define CCP1M3                           BANKMASK(CCP1CON), 3, a
#define CCP1MD                           BANKMASK(PMD1), 0, a
#define CCP1X                            BANKMASK(CCP1CON), 5, a
#define CCP1Y                            BANKMASK(CCP1CON), 4, a
#define CCP2                             BANKMASK(PORTC), 1, a
#define CCP2IE                           BANKMASK(PIE2), 0, a
#define CCP2IF                           BANKMASK(PIR2), 0, a
#define CCP2IP                           BANKMASK(IPR2), 0, a
#define CCP2M0                           BANKMASK(CCP2CON), 0, a
#define CCP2M1                           BANKMASK(CCP2CON), 1, a
#define CCP2M2                           BANKMASK(CCP2CON), 2, a
#define CCP2M3                           BANKMASK(CCP2CON), 3, a
#define CCP2MD                           BANKMASK(PMD1), 1, a
#define CCP2X                            BANKMASK(CCP2CON), 5, a
#define CCP2Y                            BANKMASK(CCP2CON), 4, a
#define CCP2_PA2                         BANKMASK(PORTB), 3, a
#define CCP9E                            BANKMASK(PORTE), 3, a
#define CFGS                             BANKMASK(EECON1), 6, a
#define CHSN3                            BANKMASK(ADCON1), 3, a
#define CK                               BANKMASK(PORTC), 6, a
#define CK1SPP                           BANKMASK(PORTE), 0, a
#define CK2SPP                           BANKMASK(PORTE), 1, a
#define CKE                              BANKMASK(SSP1STAT), 6, a
#define CKE1                             BANKMASK(SSP1STAT), 6, a
#define CKP                              BANKMASK(SSP1CON1), 4, a
#define CKP1                             BANKMASK(SSP1CON1), 4, a
#define CKTXP                            BANKMASK(BAUDCON1), 4, a
#define CM1IE                            BANKMASK(PIE2), 6, a
#define CM1IF                            BANKMASK(PIR2), 6, a
#define CM1IP                            BANKMASK(IPR2), 6, a
#define CM2IE                            BANKMASK(PIE2), 5, a
#define CM2IF                            BANKMASK(PIR2), 5, a
#define CM2IP                            BANKMASK(IPR2), 5, a
#define CMIE                             BANKMASK(PIE2), 6, a
#define CMIF                             BANKMASK(PIR2), 6, a
#define CMIP                             BANKMASK(IPR2), 6, a
#define CMP1MD                           BANKMASK(PMD1), 3, a
#define CMP2MD                           BANKMASK(PMD1), 4, a
#define COUT1                            BANKMASK(CM1CON0), 6, a
#define COUT2                            BANKMASK(CM2CON0), 6, a
#define CRC16EE                          BANKMASK(UEIE), 2, a
#define CRC16EF                          BANKMASK(UEIR), 2, a
#define CRC5EE                           BANKMASK(UEIE), 1, a
#define CRC5EF                           BANKMASK(UEIR), 1, a
#define CREN                             BANKMASK(RCSTA1), 4, a
#define CS                               BANKMASK(PORTE), 2, a
#define CSRC                             BANKMASK(TXSTA1), 7, a
#define CSRC1                            BANKMASK(TXSTA1), 7, a
#define CTMUEN                           BANKMASK(CTMUCONH), 7, a
#define CTMUIE                           BANKMASK(PIE3), 3, a
#define CTMUIF                           BANKMASK(PIR3), 3, a
#define CTMUIP                           BANKMASK(IPR3), 3, a
#define CTMUMD                           BANKMASK(PMD1), 5, a
#define CTMUSIDL                         BANKMASK(CTMUCONH), 5, a
#define CTTRIG                           BANKMASK(CTMUCONH), 0, a
#define DA                               BANKMASK(SSP1STAT), 5, a
#define DA1                              BANKMASK(SSP1STAT), 5, a
#define DACEN                            BANKMASK(VREFCON1), 7, a
#define DACLPS                           BANKMASK(VREFCON1), 6, a
#define DACNSS                           BANKMASK(VREFCON1), 0, a
#define DACOE                            BANKMASK(VREFCON1), 5, a
#define DACPSS0                          BANKMASK(VREFCON1), 2, a
#define DACPSS1                          BANKMASK(VREFCON1), 3, a
#define DACR0                            BANKMASK(VREFCON2), 0, a
#define DACR1                            BANKMASK(VREFCON2), 1, a
#define DACR2                            BANKMASK(VREFCON2), 2, a
#define DACR3                            BANKMASK(VREFCON2), 3, a
#define DACR4                            BANKMASK(VREFCON2), 4, a
#define DATA_ADDRESS                     BANKMASK(SSP1STAT), 5, a
#define DC                               BANKMASK(STATUS), 1, a
#define DC1B0                            BANKMASK(CCP1CON), 4, a
#define DC1B1                            BANKMASK(CCP1CON), 5, a
#define DC2B0                            BANKMASK(CCP2CON), 4, a
#define DC2B1                            BANKMASK(CCP2CON), 5, a
#define DFN8EE                           BANKMASK(UEIE), 3, a
#define DFN8EF                           BANKMASK(UEIR), 3, a
#define DHEN                             BANKMASK(SSP1CON3), 0, a
#define DIR                              BANKMASK(USTAT), 2, a
#define DONE                             BANKMASK(ADCON0), 1, a
#define DT                               BANKMASK(PORTC), 7, a
#define DTRXP                            BANKMASK(BAUDCON1), 5, a
#define DTRXP1                           BANKMASK(BAUDCON1), 5, a
#define D_A                              BANKMASK(SSP1STAT), 5, a
#define D_NOT_A                          BANKMASK(SSP1STAT), 5, a
#define D_nA                             BANKMASK(SSP1STAT), 5, a
#define ECCP1AS0                         BANKMASK(ECCP1AS), 4, a
#define ECCP1AS1                         BANKMASK(ECCP1AS), 5, a
#define ECCP1AS2                         BANKMASK(ECCP1AS), 6, a
#define ECCP1ASE                         BANKMASK(ECCP1AS), 7, a
#define EDG1POL                          BANKMASK(CTMUCONL), 4, a
#define EDG1SEL0                         BANKMASK(CTMUCONL), 2, a
#define EDG1SEL1                         BANKMASK(CTMUCONL), 3, a
#define EDG1STAT                         BANKMASK(CTMUCONL), 0, a
#define EDG2POL                          BANKMASK(CTMUCONL), 7, a
#define EDG2SEL0                         BANKMASK(CTMUCONL), 5, a
#define EDG2SEL1                         BANKMASK(CTMUCONL), 6, a
#define EDG2STAT                         BANKMASK(CTMUCONL), 1, a
#define EDGEN                            BANKMASK(CTMUCONH), 3, a
#define EDGSEQEN                         BANKMASK(CTMUCONH), 2, a
#define EEFS                             BANKMASK(EECON1), 6, a
#define EEIE                             BANKMASK(PIE2), 4, a
#define EEIF                             BANKMASK(PIR2), 4, a
#define EEIP                             BANKMASK(IPR2), 4, a
#define EEPGD                            BANKMASK(EECON1), 7, a
#define EMBMD                            BANKMASK(PMD1), 0, a
#define ENDP0                            BANKMASK(USTAT), 3, a
#define ENDP1                            BANKMASK(USTAT), 4, a
#define ENDP2                            BANKMASK(USTAT), 5, a
#define ENDP3                            BANKMASK(USTAT), 6, a
#define EP0CONDIS                        BANKMASK(UEP0), 3, a
#define EP0HSHK                          BANKMASK(UEP0), 4, a
#define EP0INEN                          BANKMASK(UEP0), 1, a
#define EP0OUTEN                         BANKMASK(UEP0), 2, a
#define EP0STALL                         BANKMASK(UEP0), 0, a
#define EP1CONDIS                        BANKMASK(UEP1), 3, a
#define EP1HSHK                          BANKMASK(UEP1), 4, a
#define EP1INEN                          BANKMASK(UEP1), 1, a
#define EP1OUTEN                         BANKMASK(UEP1), 2, a
#define EP1STALL                         BANKMASK(UEP1), 0, a
#define EP2CONDIS                        BANKMASK(UEP2), 3, a
#define EP2HSHK                          BANKMASK(UEP2), 4, a
#define EP2INEN                          BANKMASK(UEP2), 1, a
#define EP2OUTEN                         BANKMASK(UEP2), 2, a
#define EP2STALL                         BANKMASK(UEP2), 0, a
#define EP3CONDIS                        BANKMASK(UEP3), 3, a
#define EP3HSHK                          BANKMASK(UEP3), 4, a
#define EP3INEN                          BANKMASK(UEP3), 1, a
#define EP3OUTEN                         BANKMASK(UEP3), 2, a
#define EP3STALL                         BANKMASK(UEP3), 0, a
#define EP4CONDIS                        BANKMASK(UEP4), 3, a
#define EP4HSHK                          BANKMASK(UEP4), 4, a
#define EP4INEN                          BANKMASK(UEP4), 1, a
#define EP4OUTEN                         BANKMASK(UEP4), 2, a
#define EP4STALL                         BANKMASK(UEP4), 0, a
#define EP5CONDIS                        BANKMASK(UEP5), 3, a
#define EP5HSHK                          BANKMASK(UEP5), 4, a
#define EP5INEN                          BANKMASK(UEP5), 1, a
#define EP5OUTEN                         BANKMASK(UEP5), 2, a
#define EP5STALL                         BANKMASK(UEP5), 0, a
#define EP6CONDIS                        BANKMASK(UEP6), 3, a
#define EP6HSHK                          BANKMASK(UEP6), 4, a
#define EP6INEN                          BANKMASK(UEP6), 1, a
#define EP6OUTEN                         BANKMASK(UEP6), 2, a
#define EP6STALL                         BANKMASK(UEP6), 0, a
#define EP7CONDIS                        BANKMASK(UEP7), 3, a
#define EP7HSHK                          BANKMASK(UEP7), 4, a
#define EP7INEN                          BANKMASK(UEP7), 1, a
#define EP7OUTEN                         BANKMASK(UEP7), 2, a
#define EP7STALL                         BANKMASK(UEP7), 0, a
#define EPCONDIS0                        BANKMASK(UEP0), 3, a
#define EPCONDIS1                        BANKMASK(UEP1), 3, a
#define EPCONDIS10                       BANKMASK(UEP10), 3, a
#define EPCONDIS11                       BANKMASK(UEP11), 3, a
#define EPCONDIS12                       BANKMASK(UEP12), 3, a
#define EPCONDIS13                       BANKMASK(UEP13), 3, a
#define EPCONDIS14                       BANKMASK(UEP14), 3, a
#define EPCONDIS15                       BANKMASK(UEP15), 3, a
#define EPCONDIS2                        BANKMASK(UEP2), 3, a
#define EPCONDIS3                        BANKMASK(UEP3), 3, a
#define EPCONDIS4                        BANKMASK(UEP4), 3, a
#define EPCONDIS5                        BANKMASK(UEP5), 3, a
#define EPCONDIS6                        BANKMASK(UEP6), 3, a
#define EPCONDIS7                        BANKMASK(UEP7), 3, a
#define EPCONDIS8                        BANKMASK(UEP8), 3, a
#define EPCONDIS9                        BANKMASK(UEP9), 3, a
#define EPHSHK0                          BANKMASK(UEP0), 4, a
#define EPHSHK1                          BANKMASK(UEP1), 4, a
#define EPHSHK10                         BANKMASK(UEP10), 4, a
#define EPHSHK11                         BANKMASK(UEP11), 4, a
#define EPHSHK12                         BANKMASK(UEP12), 4, a
#define EPHSHK13                         BANKMASK(UEP13), 4, a
#define EPHSHK14                         BANKMASK(UEP14), 4, a
#define EPHSHK15                         BANKMASK(UEP15), 4, a
#define EPHSHK2                          BANKMASK(UEP2), 4, a
#define EPHSHK3                          BANKMASK(UEP3), 4, a
#define EPHSHK4                          BANKMASK(UEP4), 4, a
#define EPHSHK5                          BANKMASK(UEP5), 4, a
#define EPHSHK6                          BANKMASK(UEP6), 4, a
#define EPHSHK7                          BANKMASK(UEP7), 4, a
#define EPHSHK8                          BANKMASK(UEP8), 4, a
#define EPHSHK9                          BANKMASK(UEP9), 4, a
#define EPINEN0                          BANKMASK(UEP0), 1, a
#define EPINEN1                          BANKMASK(UEP1), 1, a
#define EPINEN10                         BANKMASK(UEP10), 1, a
#define EPINEN11                         BANKMASK(UEP11), 1, a
#define EPINEN12                         BANKMASK(UEP12), 1, a
#define EPINEN13                         BANKMASK(UEP13), 1, a
#define EPINEN14                         BANKMASK(UEP14), 1, a
#define EPINEN15                         BANKMASK(UEP15), 1, a
#define EPINEN2                          BANKMASK(UEP2), 1, a
#define EPINEN3                          BANKMASK(UEP3), 1, a
#define EPINEN4                          BANKMASK(UEP4), 1, a
#define EPINEN5                          BANKMASK(UEP5), 1, a
#define EPINEN6                          BANKMASK(UEP6), 1, a
#define EPINEN7                          BANKMASK(UEP7), 1, a
#define EPINEN8                          BANKMASK(UEP8), 1, a
#define EPINEN9                          BANKMASK(UEP9), 1, a
#define EPOUTEN0                         BANKMASK(UEP0), 2, a
#define EPOUTEN1                         BANKMASK(UEP1), 2, a
#define EPOUTEN10                        BANKMASK(UEP10), 2, a
#define EPOUTEN11                        BANKMASK(UEP11), 2, a
#define EPOUTEN12                        BANKMASK(UEP12), 2, a
#define EPOUTEN13                        BANKMASK(UEP13), 2, a
#define EPOUTEN14                        BANKMASK(UEP14), 2, a
#define EPOUTEN15                        BANKMASK(UEP15), 2, a
#define EPOUTEN2                         BANKMASK(UEP2), 2, a
#define EPOUTEN3                         BANKMASK(UEP3), 2, a
#define EPOUTEN4                         BANKMASK(UEP4), 2, a
#define EPOUTEN5                         BANKMASK(UEP5), 2, a
#define EPOUTEN6                         BANKMASK(UEP6), 2, a
#define EPOUTEN7                         BANKMASK(UEP7), 2, a
#define EPOUTEN8                         BANKMASK(UEP8), 2, a
#define EPOUTEN9                         BANKMASK(UEP9), 2, a
#define EPSTALL0                         BANKMASK(UEP0), 0, a
#define EPSTALL1                         BANKMASK(UEP1), 0, a
#define EPSTALL10                        BANKMASK(UEP10), 0, a
#define EPSTALL11                        BANKMASK(UEP11), 0, a
#define EPSTALL12                        BANKMASK(UEP12), 0, a
#define EPSTALL13                        BANKMASK(UEP13), 0, a
#define EPSTALL14                        BANKMASK(UEP14), 0, a
#define EPSTALL15                        BANKMASK(UEP15), 0, a
#define EPSTALL2                         BANKMASK(UEP2), 0, a
#define EPSTALL3                         BANKMASK(UEP3), 0, a
#define EPSTALL4                         BANKMASK(UEP4), 0, a
#define EPSTALL5                         BANKMASK(UEP5), 0, a
#define EPSTALL6                         BANKMASK(UEP6), 0, a
#define EPSTALL7                         BANKMASK(UEP7), 0, a
#define EPSTALL8                         BANKMASK(UEP8), 0, a
#define EPSTALL9                         BANKMASK(UEP9), 0, a
#define FERR                             BANKMASK(RCSTA1), 2, a
#define FLTS                             BANKMASK(OSCCON), 2, a
#define FREE                             BANKMASK(EECON1), 4, a
#define FRM0                             BANKMASK(UFRML), 0, a
#define FRM1                             BANKMASK(UFRML), 1, a
#define FRM10                            BANKMASK(UFRMH), 2, a
#define FRM2                             BANKMASK(UFRML), 2, a
#define FRM3                             BANKMASK(UFRML), 3, a
#define FRM4                             BANKMASK(UFRML), 4, a
#define FRM5                             BANKMASK(UFRML), 5, a
#define FRM6                             BANKMASK(UFRML), 6, a
#define FRM7                             BANKMASK(UFRML), 7, a
#define FRM8                             BANKMASK(UFRMH), 0, a
#define FRM9                             BANKMASK(UFRMH), 1, a
#define FSEN                             BANKMASK(UCFG), 2, a
#define FVREN                            BANKMASK(VREFCON0), 7, a
#define FVRS0                            BANKMASK(VREFCON0), 4, a
#define FVRS1                            BANKMASK(VREFCON0), 5, a
#define FVRST                            BANKMASK(VREFCON0), 6, a
#define GCEN                             BANKMASK(SSP1CON2), 7, a
#define GCEN1                            BANKMASK(SSP1CON2), 7, a
#define GIE                              BANKMASK(INTCON), 7, a
#define GIEH                             BANKMASK(INTCON), 7, a
#define GIEL                             BANKMASK(INTCON), 6, a
#define GIE_GIEH                         BANKMASK(INTCON), 7, a
#define GO                               BANKMASK(ADCON0), 1, a
#define GODONE                           BANKMASK(ADCON0), 1, a
#define GO_DONE                          BANKMASK(ADCON0), 1, a
#define GO_NOT_DONE                      BANKMASK(ADCON0), 1, a
#define GO_nDONE                         BANKMASK(ADCON0), 1, a
#define HFIOFR                           BANKMASK(OSCCON2), 1, a
#define HFIOFS                           BANKMASK(OSCCON), 2, a
#define HLVDEN                           BANKMASK(HLVDCON), 4, a
#define HLVDIE                           BANKMASK(PIE2), 2, a
#define HLVDIF                           BANKMASK(PIR2), 2, a
#define HLVDIN                           BANKMASK(PORTA), 5, a
#define HLVDIP                           BANKMASK(IPR2), 2, a
#define HLVDL0                           BANKMASK(HLVDCON), 0, a
#define HLVDL1                           BANKMASK(HLVDCON), 1, a
#define HLVDL2                           BANKMASK(HLVDCON), 2, a
#define HLVDL3                           BANKMASK(HLVDCON), 3, a
#define I2C_DAT                          BANKMASK(SSP1STAT), 5, a
#define I2C_READ                         BANKMASK(SSP1STAT), 2, a
#define I2C_START                        BANKMASK(SSP1STAT), 3, a
#define I2C_STOP                         BANKMASK(SSP1STAT), 4, a
#define IDISSEN                          BANKMASK(CTMUCONH), 1, a
#define IDLEIE                           BANKMASK(UIE), 4, a
#define IDLEIF                           BANKMASK(UIR), 4, a
#define IDLEN                            BANKMASK(OSCCON), 7, a
#define INT0                             BANKMASK(PORTB), 0, a
#define INT0E                            BANKMASK(INTCON), 4, a
#define INT0F                            BANKMASK(INTCON), 1, a
#define INT0IE                           BANKMASK(INTCON), 4, a
#define INT0IF                           BANKMASK(INTCON), 1, a
#define INT1                             BANKMASK(PORTB), 1, a
#define INT1E                            BANKMASK(INTCON3), 3, a
#define INT1F                            BANKMASK(INTCON3), 0, a
#define INT1IE                           BANKMASK(INTCON3), 3, a
#define INT1IF                           BANKMASK(INTCON3), 0, a
#define INT1IP                           BANKMASK(INTCON3), 6, a
#define INT1P                            BANKMASK(INTCON3), 6, a
#define INT2                             BANKMASK(PORTB), 2, a
#define INT2E                            BANKMASK(INTCON3), 4, a
#define INT2F                            BANKMASK(INTCON3), 1, a
#define INT2IE                           BANKMASK(INTCON3), 4, a
#define INT2IF                           BANKMASK(INTCON3), 1, a
#define INT2IP                           BANKMASK(INTCON3), 7, a
#define INT2P                            BANKMASK(INTCON3), 7, a
#define INTEDG0                          BANKMASK(INTCON2), 6, a
#define INTEDG1                          BANKMASK(INTCON2), 5, a
#define INTEDG2                          BANKMASK(INTCON2), 4, a
#define INTSRC                           BANKMASK(OSCCON2), 5, a
#define IOCB4                            BANKMASK(IOCB), 4, a
#define IOCB5                            BANKMASK(IOCB), 5, a
#define IOCB6                            BANKMASK(IOCB), 6, a
#define IOCB7                            BANKMASK(IOCB), 7, a
#define IOCC0                            BANKMASK(IOCC), 0, a
#define IOCC1                            BANKMASK(IOCC), 1, a
#define IOCC2                            BANKMASK(IOCC), 2, a
#define IOCC4                            BANKMASK(IOCC), 4, a
#define IOCC5                            BANKMASK(IOCC), 5, a
#define IOCC6                            BANKMASK(IOCC), 6, a
#define IOCC7                            BANKMASK(IOCC), 7, a
#define IOCIE                            BANKMASK(INTCON), 3, a
#define IOCIF                            BANKMASK(INTCON), 0, a
#define IOCIP                            BANKMASK(INTCON2), 0, a
#define IPEN                             BANKMASK(RCON), 7, a
#define IRCF0                            BANKMASK(OSCCON), 4, a
#define IRCF1                            BANKMASK(OSCCON), 5, a
#define IRCF2                            BANKMASK(OSCCON), 6, a
#define IRNG0                            BANKMASK(CTMUICON), 0, a
#define IRNG1                            BANKMASK(CTMUICON), 1, a
#define IRVST                            BANKMASK(HLVDCON), 5, a
#define ITRIM0                           BANKMASK(CTMUICON), 2, a
#define ITRIM1                           BANKMASK(CTMUICON), 3, a
#define ITRIM2                           BANKMASK(CTMUICON), 4, a
#define ITRIM3                           BANKMASK(CTMUICON), 5, a
#define ITRIM4                           BANKMASK(CTMUICON), 6, a
#define ITRIM5                           BANKMASK(CTMUICON), 7, a
#define LA0                              BANKMASK(LATA), 0, a
#define LA1                              BANKMASK(LATA), 1, a
#define LA2                              BANKMASK(LATA), 2, a
#define LA3                              BANKMASK(LATA), 3, a
#define LA4                              BANKMASK(LATA), 4, a
#define LA5                              BANKMASK(LATA), 5, a
#define LA6                              BANKMASK(LATA), 6, a
#define LA7                              BANKMASK(LATA), 7, a
#define LATA0                            BANKMASK(LATA), 0, a
#define LATA1                            BANKMASK(LATA), 1, a
#define LATA2                            BANKMASK(LATA), 2, a
#define LATA3                            BANKMASK(LATA), 3, a
#define LATA4                            BANKMASK(LATA), 4, a
#define LATA5                            BANKMASK(LATA), 5, a
#define LATA6                            BANKMASK(LATA), 6, a
#define LATA7                            BANKMASK(LATA), 7, a
#define LATB0                            BANKMASK(LATB), 0, a
#define LATB1                            BANKMASK(LATB), 1, a
#define LATB2                            BANKMASK(LATB), 2, a
#define LATB3                            BANKMASK(LATB), 3, a
#define LATB4                            BANKMASK(LATB), 4, a
#define LATB5                            BANKMASK(LATB), 5, a
#define LATB6                            BANKMASK(LATB), 6, a
#define LATB7                            BANKMASK(LATB), 7, a
#define LATC0                            BANKMASK(LATC), 0, a
#define LATC1                            BANKMASK(LATC), 1, a
#define LATC2                            BANKMASK(LATC), 2, a
#define LATC4                            BANKMASK(LATC), 4, a
#define LATC5                            BANKMASK(LATC), 5, a
#define LATC6                            BANKMASK(LATC), 6, a
#define LATC7                            BANKMASK(LATC), 7, a
#define LATD0                            BANKMASK(LATD), 0, a
#define LATD1                            BANKMASK(LATD), 1, a
#define LATD2                            BANKMASK(LATD), 2, a
#define LATD3                            BANKMASK(LATD), 3, a
#define LATD4                            BANKMASK(LATD), 4, a
#define LATD5                            BANKMASK(LATD), 5, a
#define LATD6                            BANKMASK(LATD), 6, a
#define LATD7                            BANKMASK(LATD), 7, a
#define LATE0                            BANKMASK(LATE), 0, a
#define LATE1                            BANKMASK(LATE), 1, a
#define LATE2                            BANKMASK(LATE), 2, a
#define LB0                              BANKMASK(LATB), 0, a
#define LB1                              BANKMASK(LATB), 1, a
#define LB2                              BANKMASK(LATB), 2, a
#define LB3                              BANKMASK(LATB), 3, a
#define LB4                              BANKMASK(LATB), 4, a
#define LB5                              BANKMASK(LATB), 5, a
#define LB6                              BANKMASK(LATB), 6, a
#define LB7                              BANKMASK(LATB), 7, a
#define LC0                              BANKMASK(LATC), 0, a
#define LC1                              BANKMASK(LATC), 1, a
#define LC2                              BANKMASK(LATC), 2, a
#define LC4                              BANKMASK(LATC), 4, a
#define LC5                              BANKMASK(LATC), 5, a
#define LC6                              BANKMASK(LATC), 6, a
#define LC7                              BANKMASK(LATC), 7, a
#define LD0                              BANKMASK(LATD), 0, a
#define LD1                              BANKMASK(LATD), 1, a
#define LD2                              BANKMASK(LATD), 2, a
#define LD3                              BANKMASK(LATD), 3, a
#define LD4                              BANKMASK(LATD), 4, a
#define LD5                              BANKMASK(LATD), 5, a
#define LD6                              BANKMASK(LATD), 6, a
#define LD7                              BANKMASK(LATD), 7, a
#define LE0                              BANKMASK(LATE), 0, a
#define LE1                              BANKMASK(LATE), 1, a
#define LE2                              BANKMASK(LATE), 2, a
#define LFIOFS                           BANKMASK(OSCCON2), 0, a
#define LVDIE                            BANKMASK(PIE2), 2, a
#define LVDIF                            BANKMASK(PIR2), 2, a
#define LVDIN                            BANKMASK(PORTA), 5, a
#define LVDIP                            BANKMASK(IPR2), 2, a
#define MC1OUT                           BANKMASK(CM2CON1), 7, a
#define MC2OUT                           BANKMASK(CM2CON1), 6, a
#define MSK0                             BANKMASK(SSP1ADD), 0, a
#define MSK01                            BANKMASK(SSP1ADD), 0, a
#define MSK1                             BANKMASK(SSP1ADD), 1, a
#define MSK11                            BANKMASK(SSP1ADD), 1, a
#define MSK2                             BANKMASK(SSP1ADD), 2, a
#define MSK21                            BANKMASK(SSP1ADD), 2, a
#define MSK3                             BANKMASK(SSP1ADD), 3, a
#define MSK31                            BANKMASK(SSP1ADD), 3, a
#define MSK4                             BANKMASK(SSP1ADD), 4, a
#define MSK41                            BANKMASK(SSP1ADD), 4, a
#define MSK5                             BANKMASK(SSP1ADD), 5, a
#define MSK51                            BANKMASK(SSP1ADD), 5, a
#define MSK6                             BANKMASK(SSP1ADD), 6, a
#define MSK61                            BANKMASK(SSP1ADD), 6, a
#define MSK7                             BANKMASK(SSP1ADD), 7, a
#define MSK71                            BANKMASK(SSP1ADD), 7, a
#define MSSP1MD                          BANKMASK(PMD1), 6, a
#define MSSPMD                           BANKMASK(PMD1), 6, a
#define NEGATIVE                         BANKMASK(STATUS), 4, a
#define NOT_A                            BANKMASK(SSP1STAT), 5, a
#define NOT_ADDRESS                      BANKMASK(SSP1STAT), 5, a
#define NOT_BOR                          BANKMASK(RCON), 0, a
#define NOT_DONE                         BANKMASK(ADCON0), 1, a
#define NOT_PD                           BANKMASK(RCON), 2, a
#define NOT_POR                          BANKMASK(RCON), 1, a
#define NOT_RBPU                         BANKMASK(INTCON2), 7, a
#define NOT_RI                           BANKMASK(RCON), 4, a
#define NOT_T1DONE                       BANKMASK(T1GCON), 3, a
#define NOT_T1SYNC                       BANKMASK(T1CON), 2, a
#define NOT_T3DONE                       BANKMASK(T3GCON), 3, a
#define NOT_T3SYNC                       BANKMASK(T3CON), 2, a
#define NOT_TO                           BANKMASK(RCON), 3, a
#define NOT_W                            BANKMASK(SSP1STAT), 2, a
#define NOT_WRITE                        BANKMASK(SSP1STAT), 2, a
#define NVCFG0                           BANKMASK(ADCON1), 0, a
#define NVCFG1                           BANKMASK(ADCON1), 1, a
#define OERR                             BANKMASK(RCSTA1), 1, a
#define OESPP                            BANKMASK(PORTE), 2, a
#define OSC2                             BANKMASK(PORTA), 6, a
#define OSCFIE                           BANKMASK(PIE2), 7, a
#define OSCFIF                           BANKMASK(PIR2), 7, a
#define OSCFIP                           BANKMASK(IPR2), 7, a
#define OSTS                             BANKMASK(OSCCON), 3, a
#define OV                               BANKMASK(STATUS), 3, a
#define OVERFLOW                         BANKMASK(STATUS), 3, a
#define P1A                              BANKMASK(PORTC), 2, a
#define P1M0                             BANKMASK(CCP1CON), 6, a
#define P1M1                             BANKMASK(CCP1CON), 7, a
#define P1RSEN                           BANKMASK(PWM1CON), 7, a
#define PA1                              BANKMASK(PORTC), 2, a
#define PA2                              BANKMASK(PORTC), 1, a
#define PB2                              BANKMASK(PORTE), 2, a
#define PC2                              BANKMASK(PORTE), 1, a
#define PC3E                             BANKMASK(PORTE), 3, a
#define PCIE                             BANKMASK(SSP1CON3), 6, a
#define PD                               BANKMASK(RCON), 2, a
#define PD2                              BANKMASK(PORTE), 0, a
#define PDC0                             BANKMASK(PWM1CON), 0, a
#define PDC1                             BANKMASK(PWM1CON), 1, a
#define PDC2                             BANKMASK(PWM1CON), 2, a
#define PDC3                             BANKMASK(PWM1CON), 3, a
#define PDC4                             BANKMASK(PWM1CON), 4, a
#define PDC5                             BANKMASK(PWM1CON), 5, a
#define PDC6                             BANKMASK(PWM1CON), 6, a
#define PEIE                             BANKMASK(INTCON), 6, a
#define PEIE_GIEL                        BANKMASK(INTCON), 6, a
#define PEN                              BANKMASK(SSP1CON2), 2, a
#define PEN1                             BANKMASK(SSP1CON2), 2, a
#define PGC                              BANKMASK(PORTB), 6, a
#define PGD                              BANKMASK(PORTB), 7, a
#define PGM                              BANKMASK(PORTB), 5, a
#define PIDEE                            BANKMASK(UEIE), 0, a
#define PIDEF                            BANKMASK(UEIR), 0, a
#define PKTDIS                           BANKMASK(UCON), 4, a
#define PLLEN                            BANKMASK(OSCCON2), 4, a
#define PLLRDY                           BANKMASK(OSCCON2), 7, a
#define POR                              BANKMASK(RCON), 1, a
#define PPB0                             BANKMASK(UCFG), 0, a
#define PPB1                             BANKMASK(UCFG), 1, a
#define PPBI                             BANKMASK(USTAT), 1, a
#define PPBRST                           BANKMASK(UCON), 6, a
#define PR1SEN                           BANKMASK(PWM1CON), 7, a
#define PRISD                            BANKMASK(OSCCON2), 2, a
#define PSA                              BANKMASK(T0CON), 3, a
#define PSPIE                            BANKMASK(PIE1), 7, a
#define PSPIF                            BANKMASK(PIR1), 7, a
#define PSPIP                            BANKMASK(IPR1), 7, a
#define PSS1AC0                          BANKMASK(ECCP1AS), 2, a
#define PSS1AC1                          BANKMASK(ECCP1AS), 3, a
#define PSS1BD0                          BANKMASK(ECCP1AS), 0, a
#define PSS1BD1                          BANKMASK(ECCP1AS), 1, a
#define PSSAC0                           BANKMASK(ECCP1AS), 2, a
#define PSSAC1                           BANKMASK(ECCP1AS), 3, a
#define PSSBD0                           BANKMASK(ECCP1AS), 0, a
#define PSSBD1                           BANKMASK(ECCP1AS), 1, a
#define PVCFG0                           BANKMASK(ADCON1), 2, a
#define PVCFG1                           BANKMASK(ADCON1), 3, a
#define RBPU                             BANKMASK(INTCON2), 7, a
#define RC1IE                            BANKMASK(PIE1), 5, a
#define RC1IF                            BANKMASK(PIR1), 5, a
#define RC1IP                            BANKMASK(IPR1), 5, a
#define RC4                              BANKMASK(PORTC), 4, a
#define RC5                              BANKMASK(PORTC), 5, a
#define RC8_9                            BANKMASK(RCSTA1), 6, a
#define RC9                              BANKMASK(RCSTA1), 6, a
#define RCD8                             BANKMASK(RCSTA1), 0, a
#define RCEN                             BANKMASK(SSP1CON2), 3, a
#define RCEN1                            BANKMASK(SSP1CON2), 3, a
#define RCIDL                            BANKMASK(BAUDCON1), 6, a
#define RCIDL1                           BANKMASK(BAUDCON1), 6, a
#define RCIE                             BANKMASK(PIE1), 5, a
#define RCIF                             BANKMASK(PIR1), 5, a
#define RCIP                             BANKMASK(IPR1), 5, a
#define RCMT                             BANKMASK(BAUDCON1), 6, a
#define RCMT1                            BANKMASK(BAUDCON1), 6, a
#define RD                               BANKMASK(EECON1), 0, a
#define RD161                            BANKMASK(T1CON), 7, a
#define RD163                            BANKMASK(T3CON), 7, a
#define RDE                              BANKMASK(PORTE), 0, a
#define RE3                              BANKMASK(PORTE), 3, a
#define READ_WRITE                       BANKMASK(SSP1STAT), 2, a
#define RESUME                           BANKMASK(UCON), 2, a
#define RI                               BANKMASK(RCON), 4, a
#define RJPU                             BANKMASK(PORTA), 7, a
#define RSEN                             BANKMASK(SSP1CON2), 1, a
#define RSEN1                            BANKMASK(SSP1CON2), 1, a
#define RW                               BANKMASK(SSP1STAT), 2, a
#define RW1                              BANKMASK(SSP1STAT), 2, a
#define RX                               BANKMASK(PORTC), 7, a
#define RX9                              BANKMASK(RCSTA1), 6, a
#define RX9D                             BANKMASK(RCSTA1), 0, a
#define RXB0IE                           BANKMASK(PIE3), 0, a
#define RXB1IE                           BANKMASK(PIE3), 1, a
#define RXBNIE                           BANKMASK(PIE3), 1, a
#define RXBNIF                           BANKMASK(PIR3), 1, a
#define RXBNIP                           BANKMASK(IPR3), 1, a
#define RXCKP                            BANKMASK(BAUDCON1), 5, a
#define RXDTP                            BANKMASK(BAUDCON1), 5, a
#define RXDTP1                           BANKMASK(BAUDCON1), 5, a
#define R_NOT_W                          BANKMASK(SSP1STAT), 2, a
#define R_W                              BANKMASK(SSP1STAT), 2, a
#define R_nW                             BANKMASK(SSP1STAT), 2, a
#define SBCDE                            BANKMASK(SSP1CON3), 2, a
#define SBOREN                           BANKMASK(RCON), 6, a
#define SCIE                             BANKMASK(SSP1CON3), 5, a
#define SCKP                             BANKMASK(BAUDCON1), 4, a
#define SCKP1                            BANKMASK(BAUDCON1), 4, a
#define SCS0                             BANKMASK(OSCCON), 0, a
#define SCS1                             BANKMASK(OSCCON), 1, a
#define SDAHT                            BANKMASK(SSP1CON3), 3, a
#define SE0                              BANKMASK(UCON), 5, a
#define SEN                              BANKMASK(SSP1CON2), 0, a
#define SEN1                             BANKMASK(SSP1CON2), 0, a
#define SENDB                            BANKMASK(TXSTA1), 3, a
#define SENDB1                           BANKMASK(TXSTA1), 3, a
#define SIDL                             BANKMASK(CTMUCONH), 5, a
#define SLRA                             BANKMASK(SLRCON), 0, a
#define SLRB                             BANKMASK(SLRCON), 1, a
#define SLRC                             BANKMASK(SLRCON), 2, a
#define SLRD                             BANKMASK(SLRCON), 3, a
#define SLRE                             BANKMASK(SLRCON), 4, a
#define SMP                              BANKMASK(SSP1STAT), 7, a
#define SMP1                             BANKMASK(SSP1STAT), 7, a
#define SOFIE                            BANKMASK(UIE), 6, a
#define SOFIF                            BANKMASK(UIR), 6, a
#define SOSCEN1                          BANKMASK(T1CON), 3, a
#define SOSCEN3                          BANKMASK(T3CON), 3, a
#define SOSCGO                           BANKMASK(OSCCON2), 3, a
#define SOSCRUN                          BANKMASK(OSCCON2), 6, a
#define SP0                              BANKMASK(STKPTR), 0, a
#define SP1                              BANKMASK(STKPTR), 1, a
#define SP2                              BANKMASK(STKPTR), 2, a
#define SP3                              BANKMASK(STKPTR), 3, a
#define SP4                              BANKMASK(STKPTR), 4, a
#define SPEN                             BANKMASK(RCSTA1), 7, a
#define SPI1MD                           BANKMASK(PMD0), 1, a
#define SPI2MD                           BANKMASK(PMD0), 2, a
#define SPLLMULT                         BANKMASK(OSCTUNE), 7, a
#define SPP0                             BANKMASK(PORTD), 0, a
#define SPP1                             BANKMASK(PORTD), 1, a
#define SPP2                             BANKMASK(PORTD), 2, a
#define SPP3                             BANKMASK(PORTD), 3, a
#define SPP4                             BANKMASK(PORTD), 4, a
#define SPP5                             BANKMASK(PORTD), 5, a
#define SPP6                             BANKMASK(PORTD), 6, a
#define SPP7                             BANKMASK(PORTD), 7, a
#define SRCLK0                           BANKMASK(SRCON0), 4, b
#define SRCLK1                           BANKMASK(SRCON0), 5, b
#define SRCLK2                           BANKMASK(SRCON0), 6, b
#define SREN                             BANKMASK(RCSTA1), 5, a
#define SRENA                            BANKMASK(RCSTA1), 5, a
#define SRLEN                            BANKMASK(SRCON0), 7, b
#define SRNQEN                           BANKMASK(SRCON0), 2, b
#define SRPR                             BANKMASK(SRCON0), 0, b
#define SRPS                             BANKMASK(SRCON0), 1, b
#define SRQEN                            BANKMASK(SRCON0), 3, b
#define SRRC1E                           BANKMASK(SRCON1), 0, b
#define SRRC2E                           BANKMASK(SRCON1), 1, b
#define SRRCKE                           BANKMASK(SRCON1), 2, b
#define SRRPE                            BANKMASK(SRCON1), 3, b
#define SRSC1E                           BANKMASK(SRCON1), 4, b
#define SRSC2E                           BANKMASK(SRCON1), 5, b
#define SRSCKE                           BANKMASK(SRCON1), 6, b
#define SRSPE                            BANKMASK(SRCON1), 7, b
#define SS2                              BANKMASK(PORTD), 7, a
#define SSP1ADD0                         BANKMASK(SSP1ADD), 0, a
#define SSP1ADD1                         BANKMASK(SSP1ADD), 1, a
#define SSP1ADD2                         BANKMASK(SSP1ADD), 2, a
#define SSP1ADD3                         BANKMASK(SSP1ADD), 3, a
#define SSP1ADD4                         BANKMASK(SSP1ADD), 4, a
#define SSP1ADD5                         BANKMASK(SSP1ADD), 5, a
#define SSP1ADD6                         BANKMASK(SSP1ADD), 6, a
#define SSP1ADD7                         BANKMASK(SSP1ADD), 7, a
#define SSP1IE                           BANKMASK(PIE1), 3, a
#define SSP1IF                           BANKMASK(PIR1), 3, a
#define SSP1IP                           BANKMASK(IPR1), 3, a
#define SSP1MD                           BANKMASK(PMD1), 6, a
#define SSP1MSK0                         BANKMASK(SSP1MSK), 0, a
#define SSP1MSK1                         BANKMASK(SSP1MSK), 1, a
#define SSP1MSK2                         BANKMASK(SSP1MSK), 2, a
#define SSP1MSK3                         BANKMASK(SSP1MSK), 3, a
#define SSP1MSK4                         BANKMASK(SSP1MSK), 4, a
#define SSP1MSK5                         BANKMASK(SSP1MSK), 5, a
#define SSP1MSK6                         BANKMASK(SSP1MSK), 6, a
#define SSP1MSK7                         BANKMASK(SSP1MSK), 7, a
#define SSPEN                            BANKMASK(SSP1CON1), 5, a
#define SSPEN1                           BANKMASK(SSP1CON1), 5, a
#define SSPIE                            BANKMASK(PIE1), 3, a
#define SSPIF                            BANKMASK(PIR1), 3, a
#define SSPIP                            BANKMASK(IPR1), 3, a
#define SSPM0                            BANKMASK(SSP1CON1), 0, a
#define SSPM01                           BANKMASK(SSP1CON1), 0, a
#define SSPM1                            BANKMASK(SSP1CON1), 1, a
#define SSPM11                           BANKMASK(SSP1CON1), 1, a
#define SSPM2                            BANKMASK(SSP1CON1), 2, a
#define SSPM21                           BANKMASK(SSP1CON1), 2, a
#define SSPM3                            BANKMASK(SSP1CON1), 3, a
#define SSPM31                           BANKMASK(SSP1CON1), 3, a
#define SSPOV                            BANKMASK(SSP1CON1), 6, a
#define SSPOV1                           BANKMASK(SSP1CON1), 6, a
#define STALLIE                          BANKMASK(UIE), 5, a
#define STALLIF                          BANKMASK(UIR), 5, a
#define START                            BANKMASK(SSP1STAT), 3, a
#define START1                           BANKMASK(SSP1STAT), 3, a
#define STEN                             BANKMASK(ACTCON), 7, a
#define STIE                             BANKMASK(PIE1), 7, a
#define STIF                             BANKMASK(PIR1), 7, a
#define STIP                             BANKMASK(IPR1), 7, a
#define STKFUL                           BANKMASK(STKPTR), 7, a
#define STKOVF                           BANKMASK(STKPTR), 7, a
#define STKUNF                           BANKMASK(STKPTR), 6, a
#define STLOCK                           BANKMASK(ACTCON), 3, a
#define STMD                             BANKMASK(PMD0), 4, a
#define STOP                             BANKMASK(SSP1STAT), 4, a
#define STOP1                            BANKMASK(SSP1STAT), 4, a
#define STOR                             BANKMASK(ACTCON), 1, a
#define STR1A                            BANKMASK(PSTR1CON), 0, a
#define STR1B                            BANKMASK(PSTR1CON), 1, a
#define STR1C                            BANKMASK(PSTR1CON), 2, a
#define STR1D                            BANKMASK(PSTR1CON), 3, a
#define STR1SYNC                         BANKMASK(PSTR1CON), 4, a
#define STRA                             BANKMASK(PSTR1CON), 0, a
#define STRB                             BANKMASK(PSTR1CON), 1, a
#define STRC                             BANKMASK(PSTR1CON), 2, a
#define STRD                             BANKMASK(PSTR1CON), 3, a
#define STRSYNC                          BANKMASK(PSTR1CON), 4, a
#define STSRC                            BANKMASK(ACTCON), 4, a
#define STUD                             BANKMASK(ACTCON), 6, a
#define SUSPND                           BANKMASK(UCON), 1, a
#define SWDTE                            BANKMASK(WDTCON), 0, a
#define SWDTEN                           BANKMASK(WDTCON), 0, a
#define SYNC                             BANKMASK(TXSTA1), 4, a
#define SYNC1                            BANKMASK(TXSTA1), 4, a
#define T08BIT                           BANKMASK(T0CON), 6, a
#define T0CKI                            BANKMASK(PORTA), 4, a
#define T0CS                             BANKMASK(T0CON), 5, a
#define T0IE                             BANKMASK(INTCON), 5, a
#define T0IF                             BANKMASK(INTCON), 2, a
#define T0IP                             BANKMASK(INTCON2), 2, a
#define T0PS0                            BANKMASK(T0CON), 0, a
#define T0PS1                            BANKMASK(T0CON), 1, a
#define T0PS2                            BANKMASK(T0CON), 2, a
#define T0SE                             BANKMASK(T0CON), 4, a
#define T13CKI                           BANKMASK(PORTC), 0, a
#define T1CKPS0                          BANKMASK(T1CON), 4, a
#define T1CKPS1                          BANKMASK(T1CON), 5, a
#define T1DONE                           BANKMASK(T1GCON), 3, a
#define T1GGO                            BANKMASK(T1GCON), 3, a
#define T1GGO_NOT_DONE                   BANKMASK(T1GCON), 3, a
#define T1GGO_NOT_T1DONE                 BANKMASK(T1GCON), 3, a
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3, a
#define T1GGO_nT1DONE                    BANKMASK(T1GCON), 3, a
#define T1GPOL                           BANKMASK(T1GCON), 6, a
#define T1GSPM                           BANKMASK(T1GCON), 4, a
#define T1GSS0                           BANKMASK(T1GCON), 0, a
#define T1GSS1                           BANKMASK(T1GCON), 1, a
#define T1GTM                            BANKMASK(T1GCON), 5, a
#define T1GVAL                           BANKMASK(T1GCON), 2, a
#define T1OSCEN                          BANKMASK(T1CON), 3, a
#define T1OSI                            BANKMASK(PORTC), 1, a
#define T1OSO                            BANKMASK(PORTC), 0, a
#define T1RD16                           BANKMASK(T1CON), 1, a
#define T1SOSCEN                         BANKMASK(T1CON), 3, a
#define T1SYNC                           BANKMASK(T1CON), 2, a
#define T2CKPS0                          BANKMASK(T2CON), 0, a
#define T2CKPS1                          BANKMASK(T2CON), 1, a
#define T2OUTPS0                         BANKMASK(T2CON), 3, a
#define T2OUTPS1                         BANKMASK(T2CON), 4, a
#define T2OUTPS2                         BANKMASK(T2CON), 5, a
#define T2OUTPS3                         BANKMASK(T2CON), 6, a
#define T3CKPS0                          BANKMASK(T3CON), 4, a
#define T3CKPS1                          BANKMASK(T3CON), 5, a
#define T3DONE                           BANKMASK(T3GCON), 3, a
#define T3GGO                            BANKMASK(T3GCON), 3, a
#define T3GGO_NOT_DONE                   BANKMASK(T3GCON), 3, a
#define T3GGO_NOT_T3DONE                 BANKMASK(T3GCON), 3, a
#define T3GGO_nDONE                      BANKMASK(T3GCON), 3, a
#define T3GGO_nT3DONE                    BANKMASK(T3GCON), 3, a
#define T3GPOL                           BANKMASK(T3GCON), 6, a
#define T3GSPM                           BANKMASK(T3GCON), 4, a
#define T3GSS0                           BANKMASK(T3GCON), 0, a
#define T3GSS1                           BANKMASK(T3GCON), 1, a
#define T3GTM                            BANKMASK(T3GCON), 5, a
#define T3GVAL                           BANKMASK(T3GCON), 2, a
#define T3OSCEN                          BANKMASK(T3CON), 3, a
#define T3RD16                           BANKMASK(T3CON), 1, a
#define T3SOSCEN                         BANKMASK(T3CON), 3, a
#define T3SYNC                           BANKMASK(T3CON), 2, a
#define TGEN                             BANKMASK(CTMUCONH), 4, a
#define TMR0IE                           BANKMASK(INTCON), 5, a
#define TMR0IF                           BANKMASK(INTCON), 2, a
#define TMR0IP                           BANKMASK(INTCON2), 2, a
#define TMR0ON                           BANKMASK(T0CON), 7, a
#define TMR1CS0                          BANKMASK(T1CON), 6, a
#define TMR1CS1                          BANKMASK(T1CON), 7, a
#define TMR1GE                           BANKMASK(T1GCON), 7, a
#define TMR1GIE                          BANKMASK(PIE3), 0, a
#define TMR1GIF                          BANKMASK(PIR3), 0, a
#define TMR1GIP                          BANKMASK(IPR3), 0, a
#define TMR1IE                           BANKMASK(PIE1), 0, a
#define TMR1IF                           BANKMASK(PIR1), 0, a
#define TMR1IP                           BANKMASK(IPR1), 0, a
#define TMR1MD                           BANKMASK(PMD0), 0, a
#define TMR1ON                           BANKMASK(T1CON), 0, a
#define TMR2IE                           BANKMASK(PIE1), 1, a
#define TMR2IF                           BANKMASK(PIR1), 1, a
#define TMR2IP                           BANKMASK(IPR1), 1, a
#define TMR2MD                           BANKMASK(PMD0), 1, a
#define TMR2ON                           BANKMASK(T2CON), 2, a
#define TMR3CS0                          BANKMASK(T3CON), 6, a
#define TMR3CS1                          BANKMASK(T3CON), 7, a
#define TMR3GE                           BANKMASK(T3GCON), 7, a
#define TMR3GIE                          BANKMASK(PIE3), 1, a
#define TMR3GIF                          BANKMASK(PIR3), 1, a
#define TMR3GIP                          BANKMASK(IPR3), 1, a
#define TMR3IE                           BANKMASK(PIE2), 1, a
#define TMR3IF                           BANKMASK(PIR2), 1, a
#define TMR3IP                           BANKMASK(IPR2), 1, a
#define TMR3MD                           BANKMASK(PMD0), 2, a
#define TMR3ON                           BANKMASK(T3CON), 0, a
#define TO                               BANKMASK(RCON), 3, a
#define TRIGEN                           BANKMASK(CTMUCONH), 0, a
#define TRIGSEL                          BANKMASK(ADCON1), 7, a
#define TRISA0                           BANKMASK(TRISA), 0, a
#define TRISA1                           BANKMASK(TRISA), 1, a
#define TRISA2                           BANKMASK(TRISA), 2, a
#define TRISA3                           BANKMASK(TRISA), 3, a
#define TRISA4                           BANKMASK(TRISA), 4, a
#define TRISA5                           BANKMASK(TRISA), 5, a
#define TRISA6                           BANKMASK(TRISA), 6, a
#define TRISA7                           BANKMASK(TRISA), 7, a
#define TRISB0                           BANKMASK(TRISB), 0, a
#define TRISB1                           BANKMASK(TRISB), 1, a
#define TRISB2                           BANKMASK(TRISB), 2, a
#define TRISB3                           BANKMASK(TRISB), 3, a
#define TRISB4                           BANKMASK(TRISB), 4, a
#define TRISB5                           BANKMASK(TRISB), 5, a
#define TRISB6                           BANKMASK(TRISB), 6, a
#define TRISB7                           BANKMASK(TRISB), 7, a
#define TRISC0                           BANKMASK(TRISC), 0, a
#define TRISC1                           BANKMASK(TRISC), 1, a
#define TRISC2                           BANKMASK(TRISC), 2, a
#define TRISC4                           BANKMASK(TRISC), 4, a
#define TRISC5                           BANKMASK(TRISC), 5, a
#define TRISC6                           BANKMASK(TRISC), 6, a
#define TRISC7                           BANKMASK(TRISC), 7, a
#define TRISD0                           BANKMASK(TRISD), 0, a
#define TRISD1                           BANKMASK(TRISD), 1, a
#define TRISD2                           BANKMASK(TRISD), 2, a
#define TRISD3                           BANKMASK(TRISD), 3, a
#define TRISD4                           BANKMASK(TRISD), 4, a
#define TRISD5                           BANKMASK(TRISD), 5, a
#define TRISD6                           BANKMASK(TRISD), 6, a
#define TRISD7                           BANKMASK(TRISD), 7, a
#define TRISE0                           BANKMASK(TRISE), 0, a
#define TRISE1                           BANKMASK(TRISE), 1, a
#define TRISE2                           BANKMASK(TRISE), 2, a
#define TRMT                             BANKMASK(TXSTA1), 1, a
#define TRMT1                            BANKMASK(TXSTA1), 1, a
#define TRNIE                            BANKMASK(UIE), 3, a
#define TRNIF                            BANKMASK(UIR), 3, a
#define TSEN                             BANKMASK(VREFCON0), 3, a
#define TSRNG                            BANKMASK(VREFCON0), 2, a
#define TUN0                             BANKMASK(OSCTUNE), 0, a
#define TUN1                             BANKMASK(OSCTUNE), 1, a
#define TUN2                             BANKMASK(OSCTUNE), 2, a
#define TUN3                             BANKMASK(OSCTUNE), 3, a
#define TUN4                             BANKMASK(OSCTUNE), 4, a
#define TUN5                             BANKMASK(OSCTUNE), 5, a
#define TUN6                             BANKMASK(OSCTUNE), 6, a
#define TX                               BANKMASK(PORTC), 6, a
#define TX1IE                            BANKMASK(PIE1), 4, a
#define TX1IF                            BANKMASK(PIR1), 4, a
#define TX1IP                            BANKMASK(IPR1), 4, a
#define TX8_9                            BANKMASK(TXSTA1), 6, a
#define TX9                              BANKMASK(TXSTA1), 6, a
#define TX91                             BANKMASK(TXSTA1), 6, a
#define TX9D                             BANKMASK(TXSTA1), 0, a
#define TX9D1                            BANKMASK(TXSTA1), 0, a
#define TXB0IE                           BANKMASK(PIE3), 2, a
#define TXB1IE                           BANKMASK(PIE3), 3, a
#define TXCKP                            BANKMASK(BAUDCON1), 4, a
#define TXCKP1                           BANKMASK(BAUDCON1), 4, a
#define TXD8                             BANKMASK(TXSTA1), 0, a
#define TXEN                             BANKMASK(TXSTA1), 5, a
#define TXEN1                            BANKMASK(TXSTA1), 5, a
#define TXIE                             BANKMASK(PIE1), 4, a
#define TXIF                             BANKMASK(PIR1), 4, a
#define TXIP                             BANKMASK(IPR1), 4, a
#define UA                               BANKMASK(SSP1STAT), 1, a
#define UA1                              BANKMASK(SSP1STAT), 1, a
#define UART1MD                          BANKMASK(PMD0), 6, a
#define UARTMD                           BANKMASK(PMD0), 6, a
#define UERRIE                           BANKMASK(UIE), 1, a
#define UERRIF                           BANKMASK(UIR), 1, a
#define ULPWUIN                          BANKMASK(PORTA), 0, a
#define UOEMON                           BANKMASK(UCFG), 6, a
#define UPP0                             BANKMASK(UCFG), 0, a
#define UPP1                             BANKMASK(UCFG), 1, a
#define UPUEN                            BANKMASK(UCFG), 4, a
#define URSTIE                           BANKMASK(UIE), 0, a
#define URSTIF                           BANKMASK(UIR), 0, a
#define USBEN                            BANKMASK(UCON), 3, a
#define USBIE                            BANKMASK(PIE3), 2, a
#define USBIF                            BANKMASK(PIR3), 2, a
#define USBIP                            BANKMASK(IPR3), 2, a
#define USBMD                            BANKMASK(PMD0), 5, a
#define UTEYE                            BANKMASK(UCFG), 7, a
#define UTRDIS                           BANKMASK(UCFG), 3, a
#define VDIRMAG                          BANKMASK(HLVDCON), 7, a
#define VREFM                            BANKMASK(PORTA), 2, a
#define VREFP                            BANKMASK(PORTA), 3, a
#define W4E                              BANKMASK(BAUDCON1), 1, a
#define WCOL                             BANKMASK(SSP1CON1), 7, a
#define WCOL1                            BANKMASK(SSP1CON1), 7, a
#define WPUB0                            BANKMASK(WPUB), 0, a
#define WPUB1                            BANKMASK(WPUB), 1, a
#define WPUB2                            BANKMASK(WPUB), 2, a
#define WPUB3                            BANKMASK(WPUB), 3, a
#define WPUB4                            BANKMASK(WPUB), 4, a
#define WPUB5                            BANKMASK(WPUB), 5, a
#define WPUB6                            BANKMASK(WPUB), 6, a
#define WPUB7                            BANKMASK(WPUB), 7, a
#define WPUE3                            BANKMASK(TRISE), 7, a
#define WR                               BANKMASK(EECON1), 1, a
#define WRE                              BANKMASK(PORTE), 1, a
#define WREN                             BANKMASK(EECON1), 2, a
#define WRERR                            BANKMASK(EECON1), 3, a
#define WUE                              BANKMASK(BAUDCON1), 1, a
#define WUE1                             BANKMASK(BAUDCON1), 1, a
#define ZERO                             BANKMASK(STATUS), 2, a
#define nA                               BANKMASK(SSP1STAT), 5, a
#define nADDRESS                         BANKMASK(SSP1STAT), 5, a
#define nBOR                             BANKMASK(RCON), 0, a
#define nDONE                            BANKMASK(ADCON0), 1, a
#define nPD                              BANKMASK(RCON), 2, a
#define nPOR                             BANKMASK(RCON), 1, a
#define nRBPU                            BANKMASK(INTCON2), 7, a
#define nRI                              BANKMASK(RCON), 4, a
#define nT1DONE                          BANKMASK(T1GCON), 3, a
#define nT1SYNC                          BANKMASK(T1CON), 2, a
#define nT3DONE                          BANKMASK(T3GCON), 3, a
#define nT3SYNC                          BANKMASK(T3CON), 2, a
#define nTO                              BANKMASK(RCON), 3, a
#define nW                               BANKMASK(SSP1STAT), 2, a
#define nWRITE                           BANKMASK(SSP1STAT), 2, a

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
psect udata_bank2,class=BANK2,space=SPACE_DATA,noexec,lowdata
psect udata_bank3,class=BANK3,space=SPACE_DATA,noexec,lowdata
psect udata_bank4,class=BANK4,space=SPACE_DATA,noexec,lowdata
psect udata_bank5,class=BANK5,space=SPACE_DATA,noexec,lowdata
psect udata_bank6,class=BANK6,space=SPACE_DATA,noexec,lowdata
psect udata_bank7,class=BANK7,space=SPACE_DATA,noexec,lowdata
psect udata,class=RAM,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,reloc=2
psect data,class=CONST,space=SPACE_CODE,reloc=2,noexec
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=1,noexec

#endif // _XC_INC_

#endif // _PIC18F45K50_INC_
