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

#ifndef _PIC18F2458_INC_
#define _PIC18F2458_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F2458
 */

/*
 * Device Registers
 */

// Register: UFRM
#define UFRM UFRM
UFRM                                     equ 0F66h

// Register: UFRML
#define UFRML UFRML
UFRML                                    equ 0F66h
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
UFRMH                                    equ 0F67h
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

// Register: UIR
#define UIR UIR
UIR                                      equ 0F68h
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

// Register: UIE
#define UIE UIE
UIE                                      equ 0F69h
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

// Register: UEIR
#define UEIR UEIR
UEIR                                     equ 0F6Ah
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

// Register: UEIE
#define UEIE UEIE
UEIE                                     equ 0F6Bh
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

// Register: USTAT
#define USTAT USTAT
USTAT                                    equ 0F6Ch
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

// Register: UCON
#define UCON UCON
UCON                                     equ 0F6Dh
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

// Register: UADDR
#define UADDR UADDR
UADDR                                    equ 0F6Eh
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

// Register: UCFG
#define UCFG UCFG
UCFG                                     equ 0F6Fh
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

// Register: UEP0
#define UEP0 UEP0
UEP0                                     equ 0F70h
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
UEP1                                     equ 0F71h
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
UEP2                                     equ 0F72h
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
UEP3                                     equ 0F73h
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
UEP4                                     equ 0F74h
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
UEP5                                     equ 0F75h
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
UEP6                                     equ 0F76h
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
UEP7                                     equ 0F77h
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
UEP8                                     equ 0F78h
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
UEP9                                     equ 0F79h
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
UEP10                                    equ 0F7Ah
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
UEP11                                    equ 0F7Bh
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
UEP12                                    equ 0F7Ch
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
UEP13                                    equ 0F7Dh
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
UEP14                                    equ 0F7Eh
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
UEP15                                    equ 0F7Fh
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

// Register: PORTE
#define PORTE PORTE
PORTE                                    equ 0F84h
// bitfield definitions
PORTE_RE3_POSN                           equ 0003h
PORTE_RE3_POSITION                       equ 0003h
PORTE_RE3_SIZE                           equ 0001h
PORTE_RE3_LENGTH                         equ 0001h
PORTE_RE3_MASK                           equ 0008h
PORTE_CCP9E_POSN                         equ 0003h
PORTE_CCP9E_POSITION                     equ 0003h
PORTE_CCP9E_SIZE                         equ 0001h
PORTE_CCP9E_LENGTH                       equ 0001h
PORTE_CCP9E_MASK                         equ 0008h
PORTE_PC3E_POSN                          equ 0003h
PORTE_PC3E_POSITION                      equ 0003h
PORTE_PC3E_SIZE                          equ 0001h
PORTE_PC3E_LENGTH                        equ 0001h
PORTE_PC3E_MASK                          equ 0008h

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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0F9Bh
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0005h
OSCTUNE_TUN_LENGTH                       equ 0005h
OSCTUNE_TUN_MASK                         equ 001Fh
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
PIE2_USBIE_POSN                          equ 0005h
PIE2_USBIE_POSITION                      equ 0005h
PIE2_USBIE_SIZE                          equ 0001h
PIE2_USBIE_LENGTH                        equ 0001h
PIE2_USBIE_MASK                          equ 0020h
PIE2_CMIE_POSN                           equ 0006h
PIE2_CMIE_POSITION                       equ 0006h
PIE2_CMIE_SIZE                           equ 0001h
PIE2_CMIE_LENGTH                         equ 0001h
PIE2_CMIE_MASK                           equ 0040h
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
PIR2_USBIF_POSN                          equ 0005h
PIR2_USBIF_POSITION                      equ 0005h
PIR2_USBIF_SIZE                          equ 0001h
PIR2_USBIF_LENGTH                        equ 0001h
PIR2_USBIF_MASK                          equ 0020h
PIR2_CMIF_POSN                           equ 0006h
PIR2_CMIF_POSITION                       equ 0006h
PIR2_CMIF_SIZE                           equ 0001h
PIR2_CMIF_LENGTH                         equ 0001h
PIR2_CMIF_MASK                           equ 0040h
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
IPR2_USBIP_POSN                          equ 0005h
IPR2_USBIP_POSITION                      equ 0005h
IPR2_USBIP_SIZE                          equ 0001h
IPR2_USBIP_LENGTH                        equ 0001h
IPR2_USBIP_MASK                          equ 0020h
IPR2_CMIP_POSN                           equ 0006h
IPR2_CMIP_POSITION                       equ 0006h
IPR2_CMIP_SIZE                           equ 0001h
IPR2_CMIP_LENGTH                         equ 0001h
IPR2_CMIP_MASK                           equ 0040h
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
T3CON_T3CCP2_POSN                        equ 0006h
T3CON_T3CCP2_POSITION                    equ 0006h
T3CON_T3CCP2_SIZE                        equ 0001h
T3CON_T3CCP2_LENGTH                      equ 0001h
T3CON_T3CCP2_MASK                        equ 0040h
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
T3CON_T3NSYNC_POSN                       equ 0002h
T3CON_T3NSYNC_POSITION                   equ 0002h
T3CON_T3NSYNC_SIZE                       equ 0001h
T3CON_T3NSYNC_LENGTH                     equ 0001h
T3CON_T3NSYNC_MASK                       equ 0004h
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

// Register: CMCON
#define CMCON CMCON
CMCON                                    equ 0FB4h
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
CMCON_C1INV_POSN                         equ 0004h
CMCON_C1INV_POSITION                     equ 0004h
CMCON_C1INV_SIZE                         equ 0001h
CMCON_C1INV_LENGTH                       equ 0001h
CMCON_C1INV_MASK                         equ 0010h
CMCON_C2INV_POSN                         equ 0005h
CMCON_C2INV_POSITION                     equ 0005h
CMCON_C2INV_SIZE                         equ 0001h
CMCON_C2INV_LENGTH                       equ 0001h
CMCON_C2INV_MASK                         equ 0020h
CMCON_C1OUT_POSN                         equ 0006h
CMCON_C1OUT_POSITION                     equ 0006h
CMCON_C1OUT_SIZE                         equ 0001h
CMCON_C1OUT_LENGTH                       equ 0001h
CMCON_C1OUT_MASK                         equ 0040h
CMCON_C2OUT_POSN                         equ 0007h
CMCON_C2OUT_POSITION                     equ 0007h
CMCON_C2OUT_SIZE                         equ 0001h
CMCON_C2OUT_LENGTH                       equ 0001h
CMCON_C2OUT_MASK                         equ 0080h
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
CMCON_CMEN0_POSN                         equ 0000h
CMCON_CMEN0_POSITION                     equ 0000h
CMCON_CMEN0_SIZE                         equ 0001h
CMCON_CMEN0_LENGTH                       equ 0001h
CMCON_CMEN0_MASK                         equ 0001h
CMCON_CMEN1_POSN                         equ 0001h
CMCON_CMEN1_POSITION                     equ 0001h
CMCON_CMEN1_SIZE                         equ 0001h
CMCON_CMEN1_LENGTH                       equ 0001h
CMCON_CMEN1_MASK                         equ 0002h
CMCON_CMEN2_POSN                         equ 0002h
CMCON_CMEN2_POSITION                     equ 0002h
CMCON_CMEN2_SIZE                         equ 0001h
CMCON_CMEN2_LENGTH                       equ 0001h
CMCON_CMEN2_MASK                         equ 0004h

// Register: CVRCON
#define CVRCON CVRCON
CVRCON                                   equ 0FB5h
// bitfield definitions
CVRCON_CVR_POSN                          equ 0000h
CVRCON_CVR_POSITION                      equ 0000h
CVRCON_CVR_SIZE                          equ 0004h
CVRCON_CVR_LENGTH                        equ 0004h
CVRCON_CVR_MASK                          equ 000Fh
CVRCON_CVRSS_POSN                        equ 0004h
CVRCON_CVRSS_POSITION                    equ 0004h
CVRCON_CVRSS_SIZE                        equ 0001h
CVRCON_CVRSS_LENGTH                      equ 0001h
CVRCON_CVRSS_MASK                        equ 0010h
CVRCON_CVRR_POSN                         equ 0005h
CVRCON_CVRR_POSITION                     equ 0005h
CVRCON_CVRR_SIZE                         equ 0001h
CVRCON_CVRR_LENGTH                       equ 0001h
CVRCON_CVRR_MASK                         equ 0020h
CVRCON_CVROE_POSN                        equ 0006h
CVRCON_CVROE_POSITION                    equ 0006h
CVRCON_CVROE_SIZE                        equ 0001h
CVRCON_CVROE_LENGTH                      equ 0001h
CVRCON_CVROE_MASK                        equ 0040h
CVRCON_CVREN_POSN                        equ 0007h
CVRCON_CVREN_POSITION                    equ 0007h
CVRCON_CVREN_SIZE                        equ 0001h
CVRCON_CVREN_LENGTH                      equ 0001h
CVRCON_CVREN_MASK                        equ 0080h
CVRCON_CVR0_POSN                         equ 0000h
CVRCON_CVR0_POSITION                     equ 0000h
CVRCON_CVR0_SIZE                         equ 0001h
CVRCON_CVR0_LENGTH                       equ 0001h
CVRCON_CVR0_MASK                         equ 0001h
CVRCON_CVR1_POSN                         equ 0001h
CVRCON_CVR1_POSITION                     equ 0001h
CVRCON_CVR1_SIZE                         equ 0001h
CVRCON_CVR1_LENGTH                       equ 0001h
CVRCON_CVR1_MASK                         equ 0002h
CVRCON_CVR2_POSN                         equ 0002h
CVRCON_CVR2_POSITION                     equ 0002h
CVRCON_CVR2_SIZE                         equ 0001h
CVRCON_CVR2_LENGTH                       equ 0001h
CVRCON_CVR2_MASK                         equ 0004h
CVRCON_CVR3_POSN                         equ 0003h
CVRCON_CVR3_POSITION                     equ 0003h
CVRCON_CVR3_SIZE                         equ 0001h
CVRCON_CVR3_LENGTH                       equ 0001h
CVRCON_CVR3_MASK                         equ 0008h
CVRCON_CVREF_POSN                        equ 0004h
CVRCON_CVREF_POSITION                    equ 0004h
CVRCON_CVREF_SIZE                        equ 0001h
CVRCON_CVREF_LENGTH                      equ 0001h
CVRCON_CVREF_MASK                        equ 0010h
CVRCON_CVROEN_POSN                       equ 0006h
CVRCON_CVROEN_POSITION                   equ 0006h
CVRCON_CVROEN_SIZE                       equ 0001h
CVRCON_CVROEN_LENGTH                     equ 0001h
CVRCON_CVROEN_MASK                       equ 0040h

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
ECCP1AS                                  equ 0FB6h
// bitfield definitions
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

// Register: ECCP1DEL
#define ECCP1DEL ECCP1DEL
ECCP1DEL                                 equ 0FB7h
// bitfield definitions
ECCP1DEL_PRSEN_POSN                      equ 0007h
ECCP1DEL_PRSEN_POSITION                  equ 0007h
ECCP1DEL_PRSEN_SIZE                      equ 0001h
ECCP1DEL_PRSEN_LENGTH                    equ 0001h
ECCP1DEL_PRSEN_MASK                      equ 0080h

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
BAUDCON_TXCKP_POSN                       equ 0004h
BAUDCON_TXCKP_POSITION                   equ 0004h
BAUDCON_TXCKP_SIZE                       equ 0001h
BAUDCON_TXCKP_LENGTH                     equ 0001h
BAUDCON_TXCKP_MASK                       equ 0010h
BAUDCON_RXDTP_POSN                       equ 0005h
BAUDCON_RXDTP_POSITION                   equ 0005h
BAUDCON_RXDTP_SIZE                       equ 0001h
BAUDCON_RXDTP_LENGTH                     equ 0001h
BAUDCON_RXDTP_MASK                       equ 0020h
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
BAUDCON_RCMT_POSN                        equ 0006h
BAUDCON_RCMT_POSITION                    equ 0006h
BAUDCON_RCMT_SIZE                        equ 0001h
BAUDCON_RCMT_LENGTH                      equ 0001h
BAUDCON_RCMT_MASK                        equ 0040h
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

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0FBAh
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

// Register: CCPR2
#define CCPR2 CCPR2
CCPR2                                    equ 0FBBh

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0FBBh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0FBCh

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
ADCON1_PCFG_POSN                         equ 0000h
ADCON1_PCFG_POSITION                     equ 0000h
ADCON1_PCFG_SIZE                         equ 0004h
ADCON1_PCFG_LENGTH                       equ 0004h
ADCON1_PCFG_MASK                         equ 000Fh
ADCON1_VCFG_POSN                         equ 0004h
ADCON1_VCFG_POSITION                     equ 0004h
ADCON1_VCFG_SIZE                         equ 0002h
ADCON1_VCFG_LENGTH                       equ 0002h
ADCON1_VCFG_MASK                         equ 0030h
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
ADCON1_PCFG3_POSN                        equ 0003h
ADCON1_PCFG3_POSITION                    equ 0003h
ADCON1_PCFG3_SIZE                        equ 0001h
ADCON1_PCFG3_LENGTH                      equ 0001h
ADCON1_PCFG3_MASK                        equ 0008h
ADCON1_VCFG0_POSN                        equ 0004h
ADCON1_VCFG0_POSITION                    equ 0004h
ADCON1_VCFG0_SIZE                        equ 0001h
ADCON1_VCFG0_LENGTH                      equ 0001h
ADCON1_VCFG0_MASK                        equ 0010h
ADCON1_VCFG1_POSN                        equ 0005h
ADCON1_VCFG1_POSITION                    equ 0005h
ADCON1_VCFG1_SIZE                        equ 0001h
ADCON1_VCFG1_LENGTH                      equ 0001h
ADCON1_VCFG1_MASK                        equ 0020h
ADCON1_CHSN3_POSN                        equ 0003h
ADCON1_CHSN3_POSITION                    equ 0003h
ADCON1_CHSN3_SIZE                        equ 0001h
ADCON1_CHSN3_LENGTH                      equ 0001h
ADCON1_CHSN3_MASK                        equ 0008h
ADCON1_VCFG01_POSN                       equ 0004h
ADCON1_VCFG01_POSITION                   equ 0004h
ADCON1_VCFG01_SIZE                       equ 0001h
ADCON1_VCFG01_LENGTH                     equ 0001h
ADCON1_VCFG01_MASK                       equ 0010h
ADCON1_VCFG11_POSN                       equ 0005h
ADCON1_VCFG11_POSITION                   equ 0005h
ADCON1_VCFG11_SIZE                       equ 0001h
ADCON1_VCFG11_LENGTH                     equ 0001h
ADCON1_VCFG11_MASK                       equ 0020h

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
SSPSTAT_I2C_READ_POSN                    equ 0002h
SSPSTAT_I2C_READ_POSITION                equ 0002h
SSPSTAT_I2C_READ_SIZE                    equ 0001h
SSPSTAT_I2C_READ_LENGTH                  equ 0001h
SSPSTAT_I2C_READ_MASK                    equ 0004h
SSPSTAT_I2C_START_POSN                   equ 0003h
SSPSTAT_I2C_START_POSITION               equ 0003h
SSPSTAT_I2C_START_SIZE                   equ 0001h
SSPSTAT_I2C_START_LENGTH                 equ 0001h
SSPSTAT_I2C_START_MASK                   equ 0008h
SSPSTAT_I2C_STOP_POSN                    equ 0004h
SSPSTAT_I2C_STOP_POSITION                equ 0004h
SSPSTAT_I2C_STOP_SIZE                    equ 0001h
SSPSTAT_I2C_STOP_LENGTH                  equ 0001h
SSPSTAT_I2C_STOP_MASK                    equ 0010h
SSPSTAT_I2C_DAT_POSN                     equ 0005h
SSPSTAT_I2C_DAT_POSITION                 equ 0005h
SSPSTAT_I2C_DAT_SIZE                     equ 0001h
SSPSTAT_I2C_DAT_LENGTH                   equ 0001h
SSPSTAT_I2C_DAT_MASK                     equ 0020h
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
SSPSTAT_READ_WRITE_POSN                  equ 0002h
SSPSTAT_READ_WRITE_POSITION              equ 0002h
SSPSTAT_READ_WRITE_SIZE                  equ 0001h
SSPSTAT_READ_WRITE_LENGTH                equ 0001h
SSPSTAT_READ_WRITE_MASK                  equ 0004h
SSPSTAT_DATA_ADDRESS_POSN                equ 0005h
SSPSTAT_DATA_ADDRESS_POSITION            equ 0005h
SSPSTAT_DATA_ADDRESS_SIZE                equ 0001h
SSPSTAT_DATA_ADDRESS_LENGTH              equ 0001h
SSPSTAT_DATA_ADDRESS_MASK                equ 0020h
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
T2CON_TOUTPS_POSN                        equ 0003h
T2CON_TOUTPS_POSITION                    equ 0003h
T2CON_TOUTPS_SIZE                        equ 0004h
T2CON_TOUTPS_LENGTH                      equ 0004h
T2CON_TOUTPS_MASK                        equ 0078h
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
T2CON_TOUTPS0_POSN                       equ 0003h
T2CON_TOUTPS0_POSITION                   equ 0003h
T2CON_TOUTPS0_SIZE                       equ 0001h
T2CON_TOUTPS0_LENGTH                     equ 0001h
T2CON_TOUTPS0_MASK                       equ 0008h
T2CON_TOUTPS1_POSN                       equ 0004h
T2CON_TOUTPS1_POSITION                   equ 0004h
T2CON_TOUTPS1_SIZE                       equ 0001h
T2CON_TOUTPS1_LENGTH                     equ 0001h
T2CON_TOUTPS1_MASK                       equ 0010h
T2CON_TOUTPS2_POSN                       equ 0005h
T2CON_TOUTPS2_POSITION                   equ 0005h
T2CON_TOUTPS2_SIZE                       equ 0001h
T2CON_TOUTPS2_LENGTH                     equ 0001h
T2CON_TOUTPS2_MASK                       equ 0020h
T2CON_TOUTPS3_POSN                       equ 0006h
T2CON_TOUTPS3_POSITION                   equ 0006h
T2CON_TOUTPS3_SIZE                       equ 0001h
T2CON_TOUTPS3_LENGTH                     equ 0001h
T2CON_TOUTPS3_MASK                       equ 0040h

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
RCON_NOT_IPEN_POSN                       equ 0007h
RCON_NOT_IPEN_POSITION                   equ 0007h
RCON_NOT_IPEN_SIZE                       equ 0001h
RCON_NOT_IPEN_LENGTH                     equ 0001h
RCON_NOT_IPEN_MASK                       equ 0080h
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
RCON_nIPEN_POSN                          equ 0007h
RCON_nIPEN_POSITION                      equ 0007h
RCON_nIPEN_SIZE                          equ 0001h
RCON_nIPEN_LENGTH                        equ 0001h
RCON_nIPEN_MASK                          equ 0080h

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

// Register: HLVDCON
#define HLVDCON HLVDCON
HLVDCON                                  equ 0FD2h
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
HLVDCON_LVDL0_POSN                       equ 0000h
HLVDCON_LVDL0_POSITION                   equ 0000h
HLVDCON_LVDL0_SIZE                       equ 0001h
HLVDCON_LVDL0_LENGTH                     equ 0001h
HLVDCON_LVDL0_MASK                       equ 0001h
HLVDCON_LVDL1_POSN                       equ 0001h
HLVDCON_LVDL1_POSITION                   equ 0001h
HLVDCON_LVDL1_SIZE                       equ 0001h
HLVDCON_LVDL1_LENGTH                     equ 0001h
HLVDCON_LVDL1_MASK                       equ 0002h
HLVDCON_LVDL2_POSN                       equ 0002h
HLVDCON_LVDL2_POSITION                   equ 0002h
HLVDCON_LVDL2_SIZE                       equ 0001h
HLVDCON_LVDL2_LENGTH                     equ 0001h
HLVDCON_LVDL2_MASK                       equ 0004h
HLVDCON_LVDL3_POSN                       equ 0003h
HLVDCON_LVDL3_POSITION                   equ 0003h
HLVDCON_LVDL3_SIZE                       equ 0001h
HLVDCON_LVDL3_LENGTH                     equ 0001h
HLVDCON_LVDL3_MASK                       equ 0008h
HLVDCON_LVDEN_POSN                       equ 0004h
HLVDCON_LVDEN_POSITION                   equ 0004h
HLVDCON_LVDEN_SIZE                       equ 0001h
HLVDCON_LVDEN_LENGTH                     equ 0001h
HLVDCON_LVDEN_MASK                       equ 0010h
HLVDCON_IVRST_POSN                       equ 0005h
HLVDCON_IVRST_POSITION                   equ 0005h
HLVDCON_IVRST_SIZE                       equ 0001h
HLVDCON_IVRST_LENGTH                     equ 0001h
HLVDCON_IVRST_MASK                       equ 0020h
HLVDCON_LVV0_POSN                        equ 0000h
HLVDCON_LVV0_POSITION                    equ 0000h
HLVDCON_LVV0_SIZE                        equ 0001h
HLVDCON_LVV0_LENGTH                      equ 0001h
HLVDCON_LVV0_MASK                        equ 0001h
HLVDCON_LVV1_POSN                        equ 0001h
HLVDCON_LVV1_POSITION                    equ 0001h
HLVDCON_LVV1_SIZE                        equ 0001h
HLVDCON_LVV1_LENGTH                      equ 0001h
HLVDCON_LVV1_MASK                        equ 0002h
HLVDCON_LVV2_POSN                        equ 0002h
HLVDCON_LVV2_POSITION                    equ 0002h
HLVDCON_LVV2_SIZE                        equ 0001h
HLVDCON_LVV2_LENGTH                      equ 0001h
HLVDCON_LVV2_MASK                        equ 0004h
HLVDCON_LVV3_POSN                        equ 0003h
HLVDCON_LVV3_POSITION                    equ 0003h
HLVDCON_LVV3_SIZE                        equ 0001h
HLVDCON_LVV3_LENGTH                      equ 0001h
HLVDCON_LVV3_MASK                        equ 0008h
HLVDCON_BGST_POSN                        equ 0005h
HLVDCON_BGST_POSITION                    equ 0005h
HLVDCON_BGST_SIZE                        equ 0001h
HLVDCON_BGST_LENGTH                      equ 0001h
HLVDCON_BGST_MASK                        equ 0020h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0FD3h
// bitfield definitions
OSCCON_SCS_POSN                          equ 0000h
OSCCON_SCS_POSITION                      equ 0000h
OSCCON_SCS_SIZE                          equ 0002h
OSCCON_SCS_LENGTH                        equ 0002h
OSCCON_SCS_MASK                          equ 0003h
OSCCON_IOFS_POSN                         equ 0002h
OSCCON_IOFS_POSITION                     equ 0002h
OSCCON_IOFS_SIZE                         equ 0001h
OSCCON_IOFS_LENGTH                       equ 0001h
OSCCON_IOFS_MASK                         equ 0004h
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
INTCON2_NOT_RBPU_POSN                    equ 0007h
INTCON2_NOT_RBPU_POSITION                equ 0007h
INTCON2_NOT_RBPU_SIZE                    equ 0001h
INTCON2_NOT_RBPU_LENGTH                  equ 0001h
INTCON2_NOT_RBPU_MASK                    equ 0080h
INTCON2_RBIP_POSN                        equ 0000h
INTCON2_RBIP_POSITION                    equ 0000h
INTCON2_RBIP_SIZE                        equ 0001h
INTCON2_RBIP_LENGTH                      equ 0001h
INTCON2_RBIP_MASK                        equ 0001h
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
INTCON_RBIF_POSN                         equ 0000h
INTCON_RBIF_POSITION                     equ 0000h
INTCON_RBIF_SIZE                         equ 0001h
INTCON_RBIF_LENGTH                       equ 0001h
INTCON_RBIF_MASK                         equ 0001h
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
INTCON_RBIE_POSN                         equ 0003h
INTCON_RBIE_POSITION                     equ 0003h
INTCON_RBIE_SIZE                         equ 0001h
INTCON_RBIE_LENGTH                       equ 0001h
INTCON_RBIE_MASK                         equ 0008h
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
STKPTR_STKFUL_POSN                       equ 0007h
STKPTR_STKFUL_POSITION                   equ 0007h
STKPTR_STKFUL_SIZE                       equ 0001h
STKPTR_STKFUL_LENGTH                     equ 0001h
STKPTR_STKFUL_MASK                       equ 0080h
STKPTR_STKPTR0_POSN                      equ 0000h
STKPTR_STKPTR0_POSITION                  equ 0000h
STKPTR_STKPTR0_SIZE                      equ 0001h
STKPTR_STKPTR0_LENGTH                    equ 0001h
STKPTR_STKPTR0_MASK                      equ 0001h
STKPTR_STKPTR1_POSN                      equ 0001h
STKPTR_STKPTR1_POSITION                  equ 0001h
STKPTR_STKPTR1_SIZE                      equ 0001h
STKPTR_STKPTR1_LENGTH                    equ 0001h
STKPTR_STKPTR1_MASK                      equ 0002h
STKPTR_STKPTR2_POSN                      equ 0002h
STKPTR_STKPTR2_POSITION                  equ 0002h
STKPTR_STKPTR2_SIZE                      equ 0001h
STKPTR_STKPTR2_LENGTH                    equ 0001h
STKPTR_STKPTR2_MASK                      equ 0004h
STKPTR_STKPTR3_POSN                      equ 0003h
STKPTR_STKPTR3_POSITION                  equ 0003h
STKPTR_STKPTR3_SIZE                      equ 0001h
STKPTR_STKPTR3_LENGTH                    equ 0001h
STKPTR_STKPTR3_MASK                      equ 0008h
STKPTR_STKPTR4_POSN                      equ 0004h
STKPTR_STKPTR4_POSITION                  equ 0004h
STKPTR_STKPTR4_SIZE                      equ 0001h
STKPTR_STKPTR4_LENGTH                    equ 0001h
STKPTR_STKPTR4_MASK                      equ 0010h
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
#define ACTVIE                           BANKMASK(UIE), 2, a
#define ACTVIF                           BANKMASK(UIR), 2, a
#define ADCS0                            BANKMASK(ADCON2), 0, a
#define ADCS1                            BANKMASK(ADCON2), 1, a
#define ADCS2                            BANKMASK(ADCON2), 2, a
#define ADDEN                            BANKMASK(RCSTA), 3, a
#define ADDR0                            BANKMASK(UADDR), 0, a
#define ADDR1                            BANKMASK(UADDR), 1, a
#define ADDR2                            BANKMASK(UADDR), 2, a
#define ADDR3                            BANKMASK(UADDR), 3, a
#define ADDR4                            BANKMASK(UADDR), 4, a
#define ADDR5                            BANKMASK(UADDR), 5, a
#define ADDR6                            BANKMASK(UADDR), 6, a
#define ADEN                             BANKMASK(RCSTA), 3, a
#define ADFM                             BANKMASK(ADCON2), 7, a
#define ADIE                             BANKMASK(PIE1), 6, a
#define ADIF                             BANKMASK(PIR1), 6, a
#define ADIP                             BANKMASK(IPR1), 6, a
#define ADON                             BANKMASK(ADCON0), 0, a
#define AN0                              BANKMASK(PORTA), 0, a
#define AN1                              BANKMASK(PORTA), 1, a
#define AN2                              BANKMASK(PORTA), 2, a
#define AN3                              BANKMASK(PORTA), 3, a
#define AN4                              BANKMASK(PORTA), 5, a
#define BCLIE                            BANKMASK(PIE2), 3, a
#define BCLIF                            BANKMASK(PIR2), 3, a
#define BCLIP                            BANKMASK(IPR2), 3, a
#define BF                               BANKMASK(SSPSTAT), 0, a
#define BGST                             BANKMASK(HLVDCON), 5, a
#define BOR                              BANKMASK(RCON), 0, a
#define BRG16                            BANKMASK(BAUDCON), 3, a
#define BRGH                             BANKMASK(TXSTA), 2, a
#define BRGH1                            BANKMASK(TXSTA), 2, a
#define BTOEE                            BANKMASK(UEIE), 4, a
#define BTOEF                            BANKMASK(UEIR), 4, a
#define BTSEE                            BANKMASK(UEIE), 7, a
#define BTSEF                            BANKMASK(UEIR), 7, a
#define C1INV                            BANKMASK(CMCON), 4, a
#define C1OUT                            BANKMASK(CMCON), 6, a
#define C2INV                            BANKMASK(CMCON), 5, a
#define C2OUT                            BANKMASK(CMCON), 7, a
#define CARRY                            BANKMASK(STATUS), 0, a
#define CCP1                             BANKMASK(PORTC), 2, a
#define CCP1IE                           BANKMASK(PIE1), 2, a
#define CCP1IF                           BANKMASK(PIR1), 2, a
#define CCP1IP                           BANKMASK(IPR1), 2, a
#define CCP1M0                           BANKMASK(CCP1CON), 0, a
#define CCP1M1                           BANKMASK(CCP1CON), 1, a
#define CCP1M2                           BANKMASK(CCP1CON), 2, a
#define CCP1M3                           BANKMASK(CCP1CON), 3, a
#define CCP2                             BANKMASK(PORTC), 1, a
#define CCP2IE                           BANKMASK(PIE2), 0, a
#define CCP2IF                           BANKMASK(PIR2), 0, a
#define CCP2IP                           BANKMASK(IPR2), 0, a
#define CCP2M0                           BANKMASK(CCP2CON), 0, a
#define CCP2M1                           BANKMASK(CCP2CON), 1, a
#define CCP2M2                           BANKMASK(CCP2CON), 2, a
#define CCP2M3                           BANKMASK(CCP2CON), 3, a
#define CCP2_PA2                         BANKMASK(PORTB), 3, a
#define CCP9E                            BANKMASK(PORTE), 3, a
#define CFGS                             BANKMASK(EECON1), 6, a
#define CHS0                             BANKMASK(ADCON0), 2, a
#define CHS1                             BANKMASK(ADCON0), 3, a
#define CHS2                             BANKMASK(ADCON0), 4, a
#define CHS3                             BANKMASK(ADCON0), 5, a
#define CHSN3                            BANKMASK(ADCON1), 3, a
#define CIS                              BANKMASK(CMCON), 3, a
#define CK                               BANKMASK(PORTC), 6, a
#define CKE                              BANKMASK(SSPSTAT), 6, a
#define CKP                              BANKMASK(SSPCON1), 4, a
#define CM0                              BANKMASK(CMCON), 0, a
#define CM1                              BANKMASK(CMCON), 1, a
#define CM2                              BANKMASK(CMCON), 2, a
#define CMEN0                            BANKMASK(CMCON), 0, a
#define CMEN1                            BANKMASK(CMCON), 1, a
#define CMEN2                            BANKMASK(CMCON), 2, a
#define CMIE                             BANKMASK(PIE2), 6, a
#define CMIF                             BANKMASK(PIR2), 6, a
#define CMIP                             BANKMASK(IPR2), 6, a
#define CRC16EE                          BANKMASK(UEIE), 2, a
#define CRC16EF                          BANKMASK(UEIR), 2, a
#define CRC5EE                           BANKMASK(UEIE), 1, a
#define CRC5EF                           BANKMASK(UEIR), 1, a
#define CREN                             BANKMASK(RCSTA), 4, a
#define CSRC                             BANKMASK(TXSTA), 7, a
#define CSRC1                            BANKMASK(TXSTA), 7, a
#define CVR0                             BANKMASK(CVRCON), 0, a
#define CVR1                             BANKMASK(CVRCON), 1, a
#define CVR2                             BANKMASK(CVRCON), 2, a
#define CVR3                             BANKMASK(CVRCON), 3, a
#define CVREF                            BANKMASK(CVRCON), 4, a
#define CVREN                            BANKMASK(CVRCON), 7, a
#define CVROE                            BANKMASK(CVRCON), 6, a
#define CVROEN                           BANKMASK(CVRCON), 6, a
#define CVRR                             BANKMASK(CVRCON), 5, a
#define CVRSS                            BANKMASK(CVRCON), 4, a
#define DA                               BANKMASK(SSPSTAT), 5, a
#define DATA_ADDRESS                     BANKMASK(SSPSTAT), 5, a
#define DC                               BANKMASK(STATUS), 1, a
#define DC1B0                            BANKMASK(CCP1CON), 4, a
#define DC1B1                            BANKMASK(CCP1CON), 5, a
#define DC2B0                            BANKMASK(CCP2CON), 4, a
#define DC2B1                            BANKMASK(CCP2CON), 5, a
#define DFN8EE                           BANKMASK(UEIE), 3, a
#define DFN8EF                           BANKMASK(UEIR), 3, a
#define DIR                              BANKMASK(USTAT), 2, a
#define DONE                             BANKMASK(ADCON0), 1, a
#define DT                               BANKMASK(PORTC), 7, a
#define D_A                              BANKMASK(SSPSTAT), 5, a
#define D_NOT_A                          BANKMASK(SSPSTAT), 5, a
#define D_nA                             BANKMASK(SSPSTAT), 5, a
#define EBDIS                            BANKMASK(PR2), 7, a
#define ECCPAS0                          BANKMASK(ECCP1AS), 4, a
#define ECCPAS1                          BANKMASK(ECCP1AS), 5, a
#define ECCPAS2                          BANKMASK(ECCP1AS), 6, a
#define ECCPASE                          BANKMASK(ECCP1AS), 7, a
#define EEFS                             BANKMASK(EECON1), 6, a
#define EEIE                             BANKMASK(PIE2), 4, a
#define EEIF                             BANKMASK(PIR2), 4, a
#define EEIP                             BANKMASK(IPR2), 4, a
#define EEPGD                            BANKMASK(EECON1), 7, a
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
#define FERR                             BANKMASK(RCSTA), 2, a
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
#define HLVDEN                           BANKMASK(HLVDCON), 4, a
#define HLVDIE                           BANKMASK(PIE2), 2, a
#define HLVDIF                           BANKMASK(PIR2), 2, a
#define HLVDIN                           BANKMASK(PORTA), 5, a
#define HLVDIP                           BANKMASK(IPR2), 2, a
#define HLVDL0                           BANKMASK(HLVDCON), 0, a
#define HLVDL1                           BANKMASK(HLVDCON), 1, a
#define HLVDL2                           BANKMASK(HLVDCON), 2, a
#define HLVDL3                           BANKMASK(HLVDCON), 3, a
#define I2C_DAT                          BANKMASK(SSPSTAT), 5, a
#define I2C_READ                         BANKMASK(SSPSTAT), 2, a
#define I2C_START                        BANKMASK(SSPSTAT), 3, a
#define I2C_STOP                         BANKMASK(SSPSTAT), 4, a
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
#define INTSRC                           BANKMASK(OSCTUNE), 7, a
#define IOFS                             BANKMASK(OSCCON), 2, a
#define IPEN                             BANKMASK(RCON), 7, a
#define IRCF0                            BANKMASK(OSCCON), 4, a
#define IRCF1                            BANKMASK(OSCCON), 5, a
#define IRCF2                            BANKMASK(OSCCON), 6, a
#define IRVST                            BANKMASK(HLVDCON), 5, a
#define IVRST                            BANKMASK(HLVDCON), 5, a
#define LA0                              BANKMASK(LATA), 0, a
#define LA1                              BANKMASK(LATA), 1, a
#define LA2                              BANKMASK(LATA), 2, a
#define LA3                              BANKMASK(LATA), 3, a
#define LA4                              BANKMASK(LATA), 4, a
#define LA5                              BANKMASK(LATA), 5, a
#define LA6                              BANKMASK(LATA), 6, a
#define LATA0                            BANKMASK(LATA), 0, a
#define LATA1                            BANKMASK(LATA), 1, a
#define LATA2                            BANKMASK(LATA), 2, a
#define LATA3                            BANKMASK(LATA), 3, a
#define LATA4                            BANKMASK(LATA), 4, a
#define LATA5                            BANKMASK(LATA), 5, a
#define LATA6                            BANKMASK(LATA), 6, a
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
#define LATC6                            BANKMASK(LATC), 6, a
#define LATC7                            BANKMASK(LATC), 7, a
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
#define LC6                              BANKMASK(LATC), 6, a
#define LC7                              BANKMASK(LATC), 7, a
#define LVDEN                            BANKMASK(HLVDCON), 4, a
#define LVDIE                            BANKMASK(PIE2), 2, a
#define LVDIF                            BANKMASK(PIR2), 2, a
#define LVDIN                            BANKMASK(PORTA), 5, a
#define LVDIP                            BANKMASK(IPR2), 2, a
#define LVDL0                            BANKMASK(HLVDCON), 0, a
#define LVDL1                            BANKMASK(HLVDCON), 1, a
#define LVDL2                            BANKMASK(HLVDCON), 2, a
#define LVDL3                            BANKMASK(HLVDCON), 3, a
#define LVV0                             BANKMASK(HLVDCON), 0, a
#define LVV1                             BANKMASK(HLVDCON), 1, a
#define LVV2                             BANKMASK(HLVDCON), 2, a
#define LVV3                             BANKMASK(HLVDCON), 3, a
#define NEGATIVE                         BANKMASK(STATUS), 4, a
#define NOT_A                            BANKMASK(SSPSTAT), 5, a
#define NOT_ADDRESS                      BANKMASK(SSPSTAT), 5, a
#define NOT_BOR                          BANKMASK(RCON), 0, a
#define NOT_DONE                         BANKMASK(ADCON0), 1, a
#define NOT_IPEN                         BANKMASK(RCON), 7, a
#define NOT_PD                           BANKMASK(RCON), 2, a
#define NOT_POR                          BANKMASK(RCON), 1, a
#define NOT_RBPU                         BANKMASK(INTCON2), 7, a
#define NOT_RI                           BANKMASK(RCON), 4, a
#define NOT_T1SYNC                       BANKMASK(T1CON), 2, a
#define NOT_T3SYNC                       BANKMASK(T3CON), 2, a
#define NOT_TO                           BANKMASK(RCON), 3, a
#define NOT_W                            BANKMASK(SSPSTAT), 2, a
#define NOT_WRITE                        BANKMASK(SSPSTAT), 2, a
#define OERR                             BANKMASK(RCSTA), 1, a
#define OSC2                             BANKMASK(PORTA), 6, a
#define OSCFIE                           BANKMASK(PIE2), 7, a
#define OSCFIF                           BANKMASK(PIR2), 7, a
#define OSCFIP                           BANKMASK(IPR2), 7, a
#define OSTS                             BANKMASK(OSCCON), 3, a
#define OV                               BANKMASK(STATUS), 3, a
#define OVERFLOW                         BANKMASK(STATUS), 3, a
#define P1A                              BANKMASK(PORTC), 2, a
#define PA1                              BANKMASK(PORTC), 2, a
#define PA2                              BANKMASK(PORTC), 1, a
#define PC3E                             BANKMASK(PORTE), 3, a
#define PCFG0                            BANKMASK(ADCON1), 0, a
#define PCFG1                            BANKMASK(ADCON1), 1, a
#define PCFG2                            BANKMASK(ADCON1), 2, a
#define PCFG3                            BANKMASK(ADCON1), 3, a
#define PD                               BANKMASK(RCON), 2, a
#define PEIE                             BANKMASK(INTCON), 6, a
#define PEIE_GIEL                        BANKMASK(INTCON), 6, a
#define PEN                              BANKMASK(SSPCON2), 2, a
#define PGC                              BANKMASK(PORTB), 6, a
#define PGD                              BANKMASK(PORTB), 7, a
#define PGM                              BANKMASK(PORTB), 5, a
#define PIDEE                            BANKMASK(UEIE), 0, a
#define PIDEF                            BANKMASK(UEIR), 0, a
#define PKTDIS                           BANKMASK(UCON), 4, a
#define POR                              BANKMASK(RCON), 1, a
#define PPB0                             BANKMASK(UCFG), 0, a
#define PPB1                             BANKMASK(UCFG), 1, a
#define PPBI                             BANKMASK(USTAT), 1, a
#define PPBRST                           BANKMASK(UCON), 6, a
#define PRSEN                            BANKMASK(ECCP1DEL), 7, a
#define PSA                              BANKMASK(T0CON), 3, a
#define PSSAC0                           BANKMASK(ECCP1AS), 2, a
#define PSSAC1                           BANKMASK(ECCP1AS), 3, a
#define RA0                              BANKMASK(PORTA), 0, a
#define RA1                              BANKMASK(PORTA), 1, a
#define RA2                              BANKMASK(PORTA), 2, a
#define RA3                              BANKMASK(PORTA), 3, a
#define RA4                              BANKMASK(PORTA), 4, a
#define RA5                              BANKMASK(PORTA), 5, a
#define RA6                              BANKMASK(PORTA), 6, a
#define RB0                              BANKMASK(PORTB), 0, a
#define RB1                              BANKMASK(PORTB), 1, a
#define RB2                              BANKMASK(PORTB), 2, a
#define RB3                              BANKMASK(PORTB), 3, a
#define RB4                              BANKMASK(PORTB), 4, a
#define RB5                              BANKMASK(PORTB), 5, a
#define RB6                              BANKMASK(PORTB), 6, a
#define RB7                              BANKMASK(PORTB), 7, a
#define RBIE                             BANKMASK(INTCON), 3, a
#define RBIF                             BANKMASK(INTCON), 0, a
#define RBIP                             BANKMASK(INTCON2), 0, a
#define RBPU                             BANKMASK(INTCON2), 7, a
#define RC0                              BANKMASK(PORTC), 0, a
#define RC1                              BANKMASK(PORTC), 1, a
#define RC1IE                            BANKMASK(PIE1), 5, a
#define RC1IF                            BANKMASK(PIR1), 5, a
#define RC1IP                            BANKMASK(IPR1), 5, a
#define RC2                              BANKMASK(PORTC), 2, a
#define RC4                              BANKMASK(PORTC), 4, a
#define RC5                              BANKMASK(PORTC), 5, a
#define RC6                              BANKMASK(PORTC), 6, a
#define RC7                              BANKMASK(PORTC), 7, a
#define RC8_9                            BANKMASK(RCSTA), 6, a
#define RC9                              BANKMASK(RCSTA), 6, a
#define RCD8                             BANKMASK(RCSTA), 0, a
#define RCEN                             BANKMASK(SSPCON2), 3, a
#define RCIDL                            BANKMASK(BAUDCON), 6, a
#define RCIE                             BANKMASK(PIE1), 5, a
#define RCIF                             BANKMASK(PIR1), 5, a
#define RCIP                             BANKMASK(IPR1), 5, a
#define RCMT                             BANKMASK(BAUDCON), 6, a
#define RD                               BANKMASK(EECON1), 0, a
#define RD163                            BANKMASK(T3CON), 7, a
#define RE3                              BANKMASK(PORTE), 3, a
#define READ_WRITE                       BANKMASK(SSPSTAT), 2, a
#define RESUME                           BANKMASK(UCON), 2, a
#define RI                               BANKMASK(RCON), 4, a
#define RSEN                             BANKMASK(SSPCON2), 1, a
#define RW                               BANKMASK(SSPSTAT), 2, a
#define RX                               BANKMASK(PORTC), 7, a
#define RX9                              BANKMASK(RCSTA), 6, a
#define RX9D                             BANKMASK(RCSTA), 0, a
#define RXCKP                            BANKMASK(BAUDCON), 5, a
#define RXDTP                            BANKMASK(BAUDCON), 5, a
#define R_NOT_W                          BANKMASK(SSPSTAT), 2, a
#define R_W                              BANKMASK(SSPSTAT), 2, a
#define R_nW                             BANKMASK(SSPSTAT), 2, a
#define SBOREN                           BANKMASK(RCON), 6, a
#define SCKP                             BANKMASK(BAUDCON), 4, a
#define SCS0                             BANKMASK(OSCCON), 0, a
#define SCS1                             BANKMASK(OSCCON), 1, a
#define SE0                              BANKMASK(UCON), 5, a
#define SEN                              BANKMASK(SSPCON2), 0, a
#define SENDB                            BANKMASK(TXSTA), 3, a
#define SENDB1                           BANKMASK(TXSTA), 3, a
#define SMP                              BANKMASK(SSPSTAT), 7, a
#define SOFIE                            BANKMASK(UIE), 6, a
#define SOFIF                            BANKMASK(UIR), 6, a
#define SOSCEN                           BANKMASK(T1CON), 3, a
#define SOSCEN3                          BANKMASK(T3CON), 3, a
#define SPEN                             BANKMASK(RCSTA), 7, a
#define SREN                             BANKMASK(RCSTA), 5, a
#define SRENA                            BANKMASK(RCSTA), 5, a
#define SSPEN                            BANKMASK(SSPCON1), 5, a
#define SSPIE                            BANKMASK(PIE1), 3, a
#define SSPIF                            BANKMASK(PIR1), 3, a
#define SSPIP                            BANKMASK(IPR1), 3, a
#define SSPM0                            BANKMASK(SSPCON1), 0, a
#define SSPM1                            BANKMASK(SSPCON1), 1, a
#define SSPM2                            BANKMASK(SSPCON1), 2, a
#define SSPM3                            BANKMASK(SSPCON1), 3, a
#define SSPOV                            BANKMASK(SSPCON1), 6, a
#define STALLIE                          BANKMASK(UIE), 5, a
#define STALLIF                          BANKMASK(UIR), 5, a
#define START                            BANKMASK(SSPSTAT), 3, a
#define STKFUL                           BANKMASK(STKPTR), 7, a
#define STKOVF                           BANKMASK(STKPTR), 7, a
#define STKPTR0                          BANKMASK(STKPTR), 0, a
#define STKPTR1                          BANKMASK(STKPTR), 1, a
#define STKPTR2                          BANKMASK(STKPTR), 2, a
#define STKPTR3                          BANKMASK(STKPTR), 3, a
#define STKPTR4                          BANKMASK(STKPTR), 4, a
#define STKUNF                           BANKMASK(STKPTR), 6, a
#define STOP                             BANKMASK(SSPSTAT), 4, a
#define SUSPND                           BANKMASK(UCON), 1, a
#define SWDTE                            BANKMASK(WDTCON), 0, a
#define SWDTEN                           BANKMASK(WDTCON), 0, a
#define SYNC                             BANKMASK(TXSTA), 4, a
#define SYNC1                            BANKMASK(TXSTA), 4, a
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
#define T1OSCEN                          BANKMASK(T1CON), 3, a
#define T1OSI                            BANKMASK(PORTC), 1, a
#define T1OSO                            BANKMASK(PORTC), 0, a
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
#define T3CCP2                           BANKMASK(T3CON), 6, a
#define T3CKPS0                          BANKMASK(T3CON), 4, a
#define T3CKPS1                          BANKMASK(T3CON), 5, a
#define T3NSYNC                          BANKMASK(T3CON), 2, a
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
#define TOUTPS0                          BANKMASK(T2CON), 3, a
#define TOUTPS1                          BANKMASK(T2CON), 4, a
#define TOUTPS2                          BANKMASK(T2CON), 5, a
#define TOUTPS3                          BANKMASK(T2CON), 6, a
#define TRISA0                           BANKMASK(TRISA), 0, a
#define TRISA1                           BANKMASK(TRISA), 1, a
#define TRISA2                           BANKMASK(TRISA), 2, a
#define TRISA3                           BANKMASK(TRISA), 3, a
#define TRISA4                           BANKMASK(TRISA), 4, a
#define TRISA5                           BANKMASK(TRISA), 5, a
#define TRISA6                           BANKMASK(TRISA), 6, a
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
#define TRISC6                           BANKMASK(TRISC), 6, a
#define TRISC7                           BANKMASK(TRISC), 7, a
#define TRMT                             BANKMASK(TXSTA), 1, a
#define TRMT1                            BANKMASK(TXSTA), 1, a
#define TRNIE                            BANKMASK(UIE), 3, a
#define TRNIF                            BANKMASK(UIR), 3, a
#define TUN0                             BANKMASK(OSCTUNE), 0, a
#define TUN1                             BANKMASK(OSCTUNE), 1, a
#define TUN2                             BANKMASK(OSCTUNE), 2, a
#define TUN3                             BANKMASK(OSCTUNE), 3, a
#define TUN4                             BANKMASK(OSCTUNE), 4, a
#define TX                               BANKMASK(PORTC), 6, a
#define TX1IE                            BANKMASK(PIE1), 4, a
#define TX1IF                            BANKMASK(PIR1), 4, a
#define TX1IP                            BANKMASK(IPR1), 4, a
#define TX8_9                            BANKMASK(TXSTA), 6, a
#define TX9                              BANKMASK(TXSTA), 6, a
#define TX91                             BANKMASK(TXSTA), 6, a
#define TX9D                             BANKMASK(TXSTA), 0, a
#define TX9D1                            BANKMASK(TXSTA), 0, a
#define TXCKP                            BANKMASK(BAUDCON), 4, a
#define TXD8                             BANKMASK(TXSTA), 0, a
#define TXEN                             BANKMASK(TXSTA), 5, a
#define TXEN1                            BANKMASK(TXSTA), 5, a
#define TXIE                             BANKMASK(PIE1), 4, a
#define TXIF                             BANKMASK(PIR1), 4, a
#define TXIP                             BANKMASK(IPR1), 4, a
#define UA                               BANKMASK(SSPSTAT), 1, a
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
#define USBIE                            BANKMASK(PIE2), 5, a
#define USBIF                            BANKMASK(PIR2), 5, a
#define USBIP                            BANKMASK(IPR2), 5, a
#define UTEYE                            BANKMASK(UCFG), 7, a
#define UTRDIS                           BANKMASK(UCFG), 3, a
#define VCFG0                            BANKMASK(ADCON1), 4, a
#define VCFG01                           BANKMASK(ADCON1), 4, a
#define VCFG1                            BANKMASK(ADCON1), 5, a
#define VCFG11                           BANKMASK(ADCON1), 5, a
#define VDIRMAG                          BANKMASK(HLVDCON), 7, a
#define VREFM                            BANKMASK(PORTA), 2, a
#define VREFP                            BANKMASK(PORTA), 3, a
#define W4E                              BANKMASK(BAUDCON), 1, a
#define WAIT0                            BANKMASK(PR2), 4, a
#define WAIT1                            BANKMASK(PR2), 5, a
#define WCOL                             BANKMASK(SSPCON1), 7, a
#define WM0                              BANKMASK(PR2), 0, a
#define WM1                              BANKMASK(PR2), 1, a
#define WR                               BANKMASK(EECON1), 1, a
#define WREN                             BANKMASK(EECON1), 2, a
#define WRERR                            BANKMASK(EECON1), 3, a
#define WUE                              BANKMASK(BAUDCON), 1, a
#define ZERO                             BANKMASK(STATUS), 2, a
#define nA                               BANKMASK(SSPSTAT), 5, a
#define nADDRESS                         BANKMASK(SSPSTAT), 5, a
#define nBOR                             BANKMASK(RCON), 0, a
#define nDONE                            BANKMASK(ADCON0), 1, a
#define nIPEN                            BANKMASK(RCON), 7, a
#define nPD                              BANKMASK(RCON), 2, a
#define nPOR                             BANKMASK(RCON), 1, a
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

#endif // _PIC18F2458_INC_
