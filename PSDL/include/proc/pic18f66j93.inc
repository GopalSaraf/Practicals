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

#ifndef _PIC18F66J93_INC_
#define _PIC18F66J93_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F66J93
 */

/*
 * Device Registers
 */

// Register: PADCFG1
#define PADCFG1 PADCFG1
PADCFG1                                  equ 0F54h
// bitfield definitions
PADCFG1_RTSECSEL0_POSN                   equ 0001h
PADCFG1_RTSECSEL0_POSITION               equ 0001h
PADCFG1_RTSECSEL0_SIZE                   equ 0001h
PADCFG1_RTSECSEL0_LENGTH                 equ 0001h
PADCFG1_RTSECSEL0_MASK                   equ 0002h
PADCFG1_RTSECSEL1_POSN                   equ 0002h
PADCFG1_RTSECSEL1_POSITION               equ 0002h
PADCFG1_RTSECSEL1_SIZE                   equ 0001h
PADCFG1_RTSECSEL1_LENGTH                 equ 0001h
PADCFG1_RTSECSEL1_MASK                   equ 0004h

// Register: CTMUICON
#define CTMUICON CTMUICON
CTMUICON                                 equ 0F55h
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

// Register: CTMUCONL
#define CTMUCONL CTMUCONL
CTMUCONL                                 equ 0F56h
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
CTMUCONL_EDG1POL_POSN                    equ 0004h
CTMUCONL_EDG1POL_POSITION                equ 0004h
CTMUCONL_EDG1POL_SIZE                    equ 0001h
CTMUCONL_EDG1POL_LENGTH                  equ 0001h
CTMUCONL_EDG1POL_MASK                    equ 0010h
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
CTMUCONL_EDG2POL_POSN                    equ 0007h
CTMUCONL_EDG2POL_POSITION                equ 0007h
CTMUCONL_EDG2POL_SIZE                    equ 0001h
CTMUCONL_EDG2POL_LENGTH                  equ 0001h
CTMUCONL_EDG2POL_MASK                    equ 0080h

// Register: CTMUCONH
#define CTMUCONH CTMUCONH
CTMUCONH                                 equ 0F57h
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

// Register: ALRMVALL
#define ALRMVALL ALRMVALL
ALRMVALL                                 equ 0F58h
// bitfield definitions
ALRMVALL_ALRMVALL_POSN                   equ 0000h
ALRMVALL_ALRMVALL_POSITION               equ 0000h
ALRMVALL_ALRMVALL_SIZE                   equ 0008h
ALRMVALL_ALRMVALL_LENGTH                 equ 0008h
ALRMVALL_ALRMVALL_MASK                   equ 00FFh

// Register: ALRMVALH
#define ALRMVALH ALRMVALH
ALRMVALH                                 equ 0F59h
// bitfield definitions
ALRMVALH_ALRMVALH_POSN                   equ 0000h
ALRMVALH_ALRMVALH_POSITION               equ 0000h
ALRMVALH_ALRMVALH_SIZE                   equ 0008h
ALRMVALH_ALRMVALH_LENGTH                 equ 0008h
ALRMVALH_ALRMVALH_MASK                   equ 00FFh

// Register: ALRMRPT
#define ALRMRPT ALRMRPT
ALRMRPT                                  equ 0F5Ah
// bitfield definitions
ALRMRPT_ARPT_POSN                        equ 0000h
ALRMRPT_ARPT_POSITION                    equ 0000h
ALRMRPT_ARPT_SIZE                        equ 0008h
ALRMRPT_ARPT_LENGTH                      equ 0008h
ALRMRPT_ARPT_MASK                        equ 00FFh
ALRMRPT_ARPT0_POSN                       equ 0000h
ALRMRPT_ARPT0_POSITION                   equ 0000h
ALRMRPT_ARPT0_SIZE                       equ 0001h
ALRMRPT_ARPT0_LENGTH                     equ 0001h
ALRMRPT_ARPT0_MASK                       equ 0001h
ALRMRPT_ARPT1_POSN                       equ 0001h
ALRMRPT_ARPT1_POSITION                   equ 0001h
ALRMRPT_ARPT1_SIZE                       equ 0001h
ALRMRPT_ARPT1_LENGTH                     equ 0001h
ALRMRPT_ARPT1_MASK                       equ 0002h
ALRMRPT_ARPT2_POSN                       equ 0002h
ALRMRPT_ARPT2_POSITION                   equ 0002h
ALRMRPT_ARPT2_SIZE                       equ 0001h
ALRMRPT_ARPT2_LENGTH                     equ 0001h
ALRMRPT_ARPT2_MASK                       equ 0004h
ALRMRPT_ARPT3_POSN                       equ 0003h
ALRMRPT_ARPT3_POSITION                   equ 0003h
ALRMRPT_ARPT3_SIZE                       equ 0001h
ALRMRPT_ARPT3_LENGTH                     equ 0001h
ALRMRPT_ARPT3_MASK                       equ 0008h
ALRMRPT_ARPT4_POSN                       equ 0004h
ALRMRPT_ARPT4_POSITION                   equ 0004h
ALRMRPT_ARPT4_SIZE                       equ 0001h
ALRMRPT_ARPT4_LENGTH                     equ 0001h
ALRMRPT_ARPT4_MASK                       equ 0010h
ALRMRPT_ARPT5_POSN                       equ 0005h
ALRMRPT_ARPT5_POSITION                   equ 0005h
ALRMRPT_ARPT5_SIZE                       equ 0001h
ALRMRPT_ARPT5_LENGTH                     equ 0001h
ALRMRPT_ARPT5_MASK                       equ 0020h
ALRMRPT_ARPT6_POSN                       equ 0006h
ALRMRPT_ARPT6_POSITION                   equ 0006h
ALRMRPT_ARPT6_SIZE                       equ 0001h
ALRMRPT_ARPT6_LENGTH                     equ 0001h
ALRMRPT_ARPT6_MASK                       equ 0040h
ALRMRPT_ARPT7_POSN                       equ 0007h
ALRMRPT_ARPT7_POSITION                   equ 0007h
ALRMRPT_ARPT7_SIZE                       equ 0001h
ALRMRPT_ARPT7_LENGTH                     equ 0001h
ALRMRPT_ARPT7_MASK                       equ 0080h

// Register: ALRMCFG
#define ALRMCFG ALRMCFG
ALRMCFG                                  equ 0F5Bh
// bitfield definitions
ALRMCFG_ALRMPTR_POSN                     equ 0000h
ALRMCFG_ALRMPTR_POSITION                 equ 0000h
ALRMCFG_ALRMPTR_SIZE                     equ 0002h
ALRMCFG_ALRMPTR_LENGTH                   equ 0002h
ALRMCFG_ALRMPTR_MASK                     equ 0003h
ALRMCFG_AMASK_POSN                       equ 0002h
ALRMCFG_AMASK_POSITION                   equ 0002h
ALRMCFG_AMASK_SIZE                       equ 0004h
ALRMCFG_AMASK_LENGTH                     equ 0004h
ALRMCFG_AMASK_MASK                       equ 003Ch
ALRMCFG_CHIME_POSN                       equ 0006h
ALRMCFG_CHIME_POSITION                   equ 0006h
ALRMCFG_CHIME_SIZE                       equ 0001h
ALRMCFG_CHIME_LENGTH                     equ 0001h
ALRMCFG_CHIME_MASK                       equ 0040h
ALRMCFG_ALRMEN_POSN                      equ 0007h
ALRMCFG_ALRMEN_POSITION                  equ 0007h
ALRMCFG_ALRMEN_SIZE                      equ 0001h
ALRMCFG_ALRMEN_LENGTH                    equ 0001h
ALRMCFG_ALRMEN_MASK                      equ 0080h
ALRMCFG_ALRMPTR0_POSN                    equ 0000h
ALRMCFG_ALRMPTR0_POSITION                equ 0000h
ALRMCFG_ALRMPTR0_SIZE                    equ 0001h
ALRMCFG_ALRMPTR0_LENGTH                  equ 0001h
ALRMCFG_ALRMPTR0_MASK                    equ 0001h
ALRMCFG_ALRMPTR1_POSN                    equ 0001h
ALRMCFG_ALRMPTR1_POSITION                equ 0001h
ALRMCFG_ALRMPTR1_SIZE                    equ 0001h
ALRMCFG_ALRMPTR1_LENGTH                  equ 0001h
ALRMCFG_ALRMPTR1_MASK                    equ 0002h
ALRMCFG_AMASK0_POSN                      equ 0002h
ALRMCFG_AMASK0_POSITION                  equ 0002h
ALRMCFG_AMASK0_SIZE                      equ 0001h
ALRMCFG_AMASK0_LENGTH                    equ 0001h
ALRMCFG_AMASK0_MASK                      equ 0004h
ALRMCFG_AMASK1_POSN                      equ 0003h
ALRMCFG_AMASK1_POSITION                  equ 0003h
ALRMCFG_AMASK1_SIZE                      equ 0001h
ALRMCFG_AMASK1_LENGTH                    equ 0001h
ALRMCFG_AMASK1_MASK                      equ 0008h
ALRMCFG_AMASK2_POSN                      equ 0004h
ALRMCFG_AMASK2_POSITION                  equ 0004h
ALRMCFG_AMASK2_SIZE                      equ 0001h
ALRMCFG_AMASK2_LENGTH                    equ 0001h
ALRMCFG_AMASK2_MASK                      equ 0010h
ALRMCFG_AMASK3_POSN                      equ 0005h
ALRMCFG_AMASK3_POSITION                  equ 0005h
ALRMCFG_AMASK3_SIZE                      equ 0001h
ALRMCFG_AMASK3_LENGTH                    equ 0001h
ALRMCFG_AMASK3_MASK                      equ 0020h

// Register: RTCVALL
#define RTCVALL RTCVALL
RTCVALL                                  equ 0F5Ch
// bitfield definitions
RTCVALL_RTCVALL_POSN                     equ 0000h
RTCVALL_RTCVALL_POSITION                 equ 0000h
RTCVALL_RTCVALL_SIZE                     equ 0008h
RTCVALL_RTCVALL_LENGTH                   equ 0008h
RTCVALL_RTCVALL_MASK                     equ 00FFh

// Register: RTCVALH
#define RTCVALH RTCVALH
RTCVALH                                  equ 0F5Dh
// bitfield definitions
RTCVALH_RTCVALH_POSN                     equ 0000h
RTCVALH_RTCVALH_POSITION                 equ 0000h
RTCVALH_RTCVALH_SIZE                     equ 0008h
RTCVALH_RTCVALH_LENGTH                   equ 0008h
RTCVALH_RTCVALH_MASK                     equ 00FFh
RTCVALH_WAITE0_POSN                      equ 0000h
RTCVALH_WAITE0_POSITION                  equ 0000h
RTCVALH_WAITE0_SIZE                      equ 0001h
RTCVALH_WAITE0_LENGTH                    equ 0001h
RTCVALH_WAITE0_MASK                      equ 0001h
RTCVALH_WAITE1_POSN                      equ 0001h
RTCVALH_WAITE1_POSITION                  equ 0001h
RTCVALH_WAITE1_SIZE                      equ 0001h
RTCVALH_WAITE1_LENGTH                    equ 0001h
RTCVALH_WAITE1_MASK                      equ 0002h
RTCVALH_WAITM0_POSN                      equ 0002h
RTCVALH_WAITM0_POSITION                  equ 0002h
RTCVALH_WAITM0_SIZE                      equ 0001h
RTCVALH_WAITM0_LENGTH                    equ 0001h
RTCVALH_WAITM0_MASK                      equ 0004h
RTCVALH_WAITM1_POSN                      equ 0003h
RTCVALH_WAITM1_POSITION                  equ 0003h
RTCVALH_WAITM1_SIZE                      equ 0001h
RTCVALH_WAITM1_LENGTH                    equ 0001h
RTCVALH_WAITM1_MASK                      equ 0008h
RTCVALH_WAITM2_POSN                      equ 0004h
RTCVALH_WAITM2_POSITION                  equ 0004h
RTCVALH_WAITM2_SIZE                      equ 0001h
RTCVALH_WAITM2_LENGTH                    equ 0001h
RTCVALH_WAITM2_MASK                      equ 0010h
RTCVALH_WAITM3_POSN                      equ 0005h
RTCVALH_WAITM3_POSITION                  equ 0005h
RTCVALH_WAITM3_SIZE                      equ 0001h
RTCVALH_WAITM3_LENGTH                    equ 0001h
RTCVALH_WAITM3_MASK                      equ 0020h
RTCVALH_WAITB0_POSN                      equ 0006h
RTCVALH_WAITB0_POSITION                  equ 0006h
RTCVALH_WAITB0_SIZE                      equ 0001h
RTCVALH_WAITB0_LENGTH                    equ 0001h
RTCVALH_WAITB0_MASK                      equ 0040h
RTCVALH_WAITB1_POSN                      equ 0007h
RTCVALH_WAITB1_POSITION                  equ 0007h
RTCVALH_WAITB1_SIZE                      equ 0001h
RTCVALH_WAITB1_LENGTH                    equ 0001h
RTCVALH_WAITB1_MASK                      equ 0080h

// Register: RTCCAL
#define RTCCAL RTCCAL
RTCCAL                                   equ 0F5Eh
// bitfield definitions
RTCCAL_CAL_POSN                          equ 0000h
RTCCAL_CAL_POSITION                      equ 0000h
RTCCAL_CAL_SIZE                          equ 0008h
RTCCAL_CAL_LENGTH                        equ 0008h
RTCCAL_CAL_MASK                          equ 00FFh
RTCCAL_CAL0_POSN                         equ 0000h
RTCCAL_CAL0_POSITION                     equ 0000h
RTCCAL_CAL0_SIZE                         equ 0001h
RTCCAL_CAL0_LENGTH                       equ 0001h
RTCCAL_CAL0_MASK                         equ 0001h
RTCCAL_CAL1_POSN                         equ 0001h
RTCCAL_CAL1_POSITION                     equ 0001h
RTCCAL_CAL1_SIZE                         equ 0001h
RTCCAL_CAL1_LENGTH                       equ 0001h
RTCCAL_CAL1_MASK                         equ 0002h
RTCCAL_CAL2_POSN                         equ 0002h
RTCCAL_CAL2_POSITION                     equ 0002h
RTCCAL_CAL2_SIZE                         equ 0001h
RTCCAL_CAL2_LENGTH                       equ 0001h
RTCCAL_CAL2_MASK                         equ 0004h
RTCCAL_CAL3_POSN                         equ 0003h
RTCCAL_CAL3_POSITION                     equ 0003h
RTCCAL_CAL3_SIZE                         equ 0001h
RTCCAL_CAL3_LENGTH                       equ 0001h
RTCCAL_CAL3_MASK                         equ 0008h
RTCCAL_CAL4_POSN                         equ 0004h
RTCCAL_CAL4_POSITION                     equ 0004h
RTCCAL_CAL4_SIZE                         equ 0001h
RTCCAL_CAL4_LENGTH                       equ 0001h
RTCCAL_CAL4_MASK                         equ 0010h
RTCCAL_CAL5_POSN                         equ 0005h
RTCCAL_CAL5_POSITION                     equ 0005h
RTCCAL_CAL5_SIZE                         equ 0001h
RTCCAL_CAL5_LENGTH                       equ 0001h
RTCCAL_CAL5_MASK                         equ 0020h
RTCCAL_CAL6_POSN                         equ 0006h
RTCCAL_CAL6_POSITION                     equ 0006h
RTCCAL_CAL6_SIZE                         equ 0001h
RTCCAL_CAL6_LENGTH                       equ 0001h
RTCCAL_CAL6_MASK                         equ 0040h
RTCCAL_CAL7_POSN                         equ 0007h
RTCCAL_CAL7_POSITION                     equ 0007h
RTCCAL_CAL7_SIZE                         equ 0001h
RTCCAL_CAL7_LENGTH                       equ 0001h
RTCCAL_CAL7_MASK                         equ 0080h

// Register: RTCCFG
#define RTCCFG RTCCFG
RTCCFG                                   equ 0F5Fh
// bitfield definitions
RTCCFG_RTCPTR0_POSN                      equ 0000h
RTCCFG_RTCPTR0_POSITION                  equ 0000h
RTCCFG_RTCPTR0_SIZE                      equ 0001h
RTCCFG_RTCPTR0_LENGTH                    equ 0001h
RTCCFG_RTCPTR0_MASK                      equ 0001h
RTCCFG_RTCPTR1_POSN                      equ 0001h
RTCCFG_RTCPTR1_POSITION                  equ 0001h
RTCCFG_RTCPTR1_SIZE                      equ 0001h
RTCCFG_RTCPTR1_LENGTH                    equ 0001h
RTCCFG_RTCPTR1_MASK                      equ 0002h
RTCCFG_RTCOE_POSN                        equ 0002h
RTCCFG_RTCOE_POSITION                    equ 0002h
RTCCFG_RTCOE_SIZE                        equ 0001h
RTCCFG_RTCOE_LENGTH                      equ 0001h
RTCCFG_RTCOE_MASK                        equ 0004h
RTCCFG_HALFSEC_POSN                      equ 0003h
RTCCFG_HALFSEC_POSITION                  equ 0003h
RTCCFG_HALFSEC_SIZE                      equ 0001h
RTCCFG_HALFSEC_LENGTH                    equ 0001h
RTCCFG_HALFSEC_MASK                      equ 0008h
RTCCFG_RTCSYNC_POSN                      equ 0004h
RTCCFG_RTCSYNC_POSITION                  equ 0004h
RTCCFG_RTCSYNC_SIZE                      equ 0001h
RTCCFG_RTCSYNC_LENGTH                    equ 0001h
RTCCFG_RTCSYNC_MASK                      equ 0010h
RTCCFG_RTCWREN_POSN                      equ 0005h
RTCCFG_RTCWREN_POSITION                  equ 0005h
RTCCFG_RTCWREN_SIZE                      equ 0001h
RTCCFG_RTCWREN_LENGTH                    equ 0001h
RTCCFG_RTCWREN_MASK                      equ 0020h
RTCCFG_RTCEN_POSN                        equ 0007h
RTCCFG_RTCEN_POSITION                    equ 0007h
RTCCFG_RTCEN_SIZE                        equ 0001h
RTCCFG_RTCEN_LENGTH                      equ 0001h
RTCCFG_RTCEN_MASK                        equ 0080h

// Register: RCSTA2
#define RCSTA2 RCSTA2
RCSTA2                                   equ 0F60h
// bitfield definitions
RCSTA2_RX9D_POSN                         equ 0000h
RCSTA2_RX9D_POSITION                     equ 0000h
RCSTA2_RX9D_SIZE                         equ 0001h
RCSTA2_RX9D_LENGTH                       equ 0001h
RCSTA2_RX9D_MASK                         equ 0001h
RCSTA2_OERR_POSN                         equ 0001h
RCSTA2_OERR_POSITION                     equ 0001h
RCSTA2_OERR_SIZE                         equ 0001h
RCSTA2_OERR_LENGTH                       equ 0001h
RCSTA2_OERR_MASK                         equ 0002h
RCSTA2_FERR_POSN                         equ 0002h
RCSTA2_FERR_POSITION                     equ 0002h
RCSTA2_FERR_SIZE                         equ 0001h
RCSTA2_FERR_LENGTH                       equ 0001h
RCSTA2_FERR_MASK                         equ 0004h
RCSTA2_ADDEN_POSN                        equ 0003h
RCSTA2_ADDEN_POSITION                    equ 0003h
RCSTA2_ADDEN_SIZE                        equ 0001h
RCSTA2_ADDEN_LENGTH                      equ 0001h
RCSTA2_ADDEN_MASK                        equ 0008h
RCSTA2_CREN_POSN                         equ 0004h
RCSTA2_CREN_POSITION                     equ 0004h
RCSTA2_CREN_SIZE                         equ 0001h
RCSTA2_CREN_LENGTH                       equ 0001h
RCSTA2_CREN_MASK                         equ 0010h
RCSTA2_SREN_POSN                         equ 0005h
RCSTA2_SREN_POSITION                     equ 0005h
RCSTA2_SREN_SIZE                         equ 0001h
RCSTA2_SREN_LENGTH                       equ 0001h
RCSTA2_SREN_MASK                         equ 0020h
RCSTA2_RX9_POSN                          equ 0006h
RCSTA2_RX9_POSITION                      equ 0006h
RCSTA2_RX9_SIZE                          equ 0001h
RCSTA2_RX9_LENGTH                        equ 0001h
RCSTA2_RX9_MASK                          equ 0040h
RCSTA2_SPEN_POSN                         equ 0007h
RCSTA2_SPEN_POSITION                     equ 0007h
RCSTA2_SPEN_SIZE                         equ 0001h
RCSTA2_SPEN_LENGTH                       equ 0001h
RCSTA2_SPEN_MASK                         equ 0080h
RCSTA2_RCD8_POSN                         equ 0000h
RCSTA2_RCD8_POSITION                     equ 0000h
RCSTA2_RCD8_SIZE                         equ 0001h
RCSTA2_RCD8_LENGTH                       equ 0001h
RCSTA2_RCD8_MASK                         equ 0001h
RCSTA2_RC9_POSN                          equ 0006h
RCSTA2_RC9_POSITION                      equ 0006h
RCSTA2_RC9_SIZE                          equ 0001h
RCSTA2_RC9_LENGTH                        equ 0001h
RCSTA2_RC9_MASK                          equ 0040h
RCSTA2_NOT_RC8_POSN                      equ 0006h
RCSTA2_NOT_RC8_POSITION                  equ 0006h
RCSTA2_NOT_RC8_SIZE                      equ 0001h
RCSTA2_NOT_RC8_LENGTH                    equ 0001h
RCSTA2_NOT_RC8_MASK                      equ 0040h
RCSTA2_RC8_9_POSN                        equ 0006h
RCSTA2_RC8_9_POSITION                    equ 0006h
RCSTA2_RC8_9_SIZE                        equ 0001h
RCSTA2_RC8_9_LENGTH                      equ 0001h
RCSTA2_RC8_9_MASK                        equ 0040h
RCSTA2_RX9D2_POSN                        equ 0000h
RCSTA2_RX9D2_POSITION                    equ 0000h
RCSTA2_RX9D2_SIZE                        equ 0001h
RCSTA2_RX9D2_LENGTH                      equ 0001h
RCSTA2_RX9D2_MASK                        equ 0001h
RCSTA2_OERR2_POSN                        equ 0001h
RCSTA2_OERR2_POSITION                    equ 0001h
RCSTA2_OERR2_SIZE                        equ 0001h
RCSTA2_OERR2_LENGTH                      equ 0001h
RCSTA2_OERR2_MASK                        equ 0002h
RCSTA2_FERR2_POSN                        equ 0002h
RCSTA2_FERR2_POSITION                    equ 0002h
RCSTA2_FERR2_SIZE                        equ 0001h
RCSTA2_FERR2_LENGTH                      equ 0001h
RCSTA2_FERR2_MASK                        equ 0004h
RCSTA2_ADDEN2_POSN                       equ 0003h
RCSTA2_ADDEN2_POSITION                   equ 0003h
RCSTA2_ADDEN2_SIZE                       equ 0001h
RCSTA2_ADDEN2_LENGTH                     equ 0001h
RCSTA2_ADDEN2_MASK                       equ 0008h
RCSTA2_CREN2_POSN                        equ 0004h
RCSTA2_CREN2_POSITION                    equ 0004h
RCSTA2_CREN2_SIZE                        equ 0001h
RCSTA2_CREN2_LENGTH                      equ 0001h
RCSTA2_CREN2_MASK                        equ 0010h
RCSTA2_SREN2_POSN                        equ 0005h
RCSTA2_SREN2_POSITION                    equ 0005h
RCSTA2_SREN2_SIZE                        equ 0001h
RCSTA2_SREN2_LENGTH                      equ 0001h
RCSTA2_SREN2_MASK                        equ 0020h
RCSTA2_RX92_POSN                         equ 0006h
RCSTA2_RX92_POSITION                     equ 0006h
RCSTA2_RX92_SIZE                         equ 0001h
RCSTA2_RX92_LENGTH                       equ 0001h
RCSTA2_RX92_MASK                         equ 0040h
RCSTA2_SPEN2_POSN                        equ 0007h
RCSTA2_SPEN2_POSITION                    equ 0007h
RCSTA2_SPEN2_SIZE                        equ 0001h
RCSTA2_SPEN2_LENGTH                      equ 0001h
RCSTA2_SPEN2_MASK                        equ 0080h
RCSTA2_RCD82_POSN                        equ 0000h
RCSTA2_RCD82_POSITION                    equ 0000h
RCSTA2_RCD82_SIZE                        equ 0001h
RCSTA2_RCD82_LENGTH                      equ 0001h
RCSTA2_RCD82_MASK                        equ 0001h
RCSTA2_RC92_POSN                         equ 0006h
RCSTA2_RC92_POSITION                     equ 0006h
RCSTA2_RC92_SIZE                         equ 0001h
RCSTA2_RC92_LENGTH                       equ 0001h
RCSTA2_RC92_MASK                         equ 0040h
RCSTA2_RC8_92_POSN                       equ 0006h
RCSTA2_RC8_92_POSITION                   equ 0006h
RCSTA2_RC8_92_SIZE                       equ 0001h
RCSTA2_RC8_92_LENGTH                     equ 0001h
RCSTA2_RC8_92_MASK                       equ 0040h

// Register: TXSTA2
#define TXSTA2 TXSTA2
TXSTA2                                   equ 0F61h
// bitfield definitions
TXSTA2_TX9D_POSN                         equ 0000h
TXSTA2_TX9D_POSITION                     equ 0000h
TXSTA2_TX9D_SIZE                         equ 0001h
TXSTA2_TX9D_LENGTH                       equ 0001h
TXSTA2_TX9D_MASK                         equ 0001h
TXSTA2_TRMT_POSN                         equ 0001h
TXSTA2_TRMT_POSITION                     equ 0001h
TXSTA2_TRMT_SIZE                         equ 0001h
TXSTA2_TRMT_LENGTH                       equ 0001h
TXSTA2_TRMT_MASK                         equ 0002h
TXSTA2_BRGH_POSN                         equ 0002h
TXSTA2_BRGH_POSITION                     equ 0002h
TXSTA2_BRGH_SIZE                         equ 0001h
TXSTA2_BRGH_LENGTH                       equ 0001h
TXSTA2_BRGH_MASK                         equ 0004h
TXSTA2_SYNC_POSN                         equ 0004h
TXSTA2_SYNC_POSITION                     equ 0004h
TXSTA2_SYNC_SIZE                         equ 0001h
TXSTA2_SYNC_LENGTH                       equ 0001h
TXSTA2_SYNC_MASK                         equ 0010h
TXSTA2_TXEN_POSN                         equ 0005h
TXSTA2_TXEN_POSITION                     equ 0005h
TXSTA2_TXEN_SIZE                         equ 0001h
TXSTA2_TXEN_LENGTH                       equ 0001h
TXSTA2_TXEN_MASK                         equ 0020h
TXSTA2_TX9_POSN                          equ 0006h
TXSTA2_TX9_POSITION                      equ 0006h
TXSTA2_TX9_SIZE                          equ 0001h
TXSTA2_TX9_LENGTH                        equ 0001h
TXSTA2_TX9_MASK                          equ 0040h
TXSTA2_CSRC_POSN                         equ 0007h
TXSTA2_CSRC_POSITION                     equ 0007h
TXSTA2_CSRC_SIZE                         equ 0001h
TXSTA2_CSRC_LENGTH                       equ 0001h
TXSTA2_CSRC_MASK                         equ 0080h
TXSTA2_TXD8_POSN                         equ 0000h
TXSTA2_TXD8_POSITION                     equ 0000h
TXSTA2_TXD8_SIZE                         equ 0001h
TXSTA2_TXD8_LENGTH                       equ 0001h
TXSTA2_TXD8_MASK                         equ 0001h
TXSTA2_TX8_9_POSN                        equ 0006h
TXSTA2_TX8_9_POSITION                    equ 0006h
TXSTA2_TX8_9_SIZE                        equ 0001h
TXSTA2_TX8_9_LENGTH                      equ 0001h
TXSTA2_TX8_9_MASK                        equ 0040h
TXSTA2_NOT_TX8_POSN                      equ 0006h
TXSTA2_NOT_TX8_POSITION                  equ 0006h
TXSTA2_NOT_TX8_SIZE                      equ 0001h
TXSTA2_NOT_TX8_LENGTH                    equ 0001h
TXSTA2_NOT_TX8_MASK                      equ 0040h
TXSTA2_TX9D2_POSN                        equ 0000h
TXSTA2_TX9D2_POSITION                    equ 0000h
TXSTA2_TX9D2_SIZE                        equ 0001h
TXSTA2_TX9D2_LENGTH                      equ 0001h
TXSTA2_TX9D2_MASK                        equ 0001h
TXSTA2_TRMT2_POSN                        equ 0001h
TXSTA2_TRMT2_POSITION                    equ 0001h
TXSTA2_TRMT2_SIZE                        equ 0001h
TXSTA2_TRMT2_LENGTH                      equ 0001h
TXSTA2_TRMT2_MASK                        equ 0002h
TXSTA2_BRGH2_POSN                        equ 0002h
TXSTA2_BRGH2_POSITION                    equ 0002h
TXSTA2_BRGH2_SIZE                        equ 0001h
TXSTA2_BRGH2_LENGTH                      equ 0001h
TXSTA2_BRGH2_MASK                        equ 0004h
TXSTA2_SENDB2_POSN                       equ 0003h
TXSTA2_SENDB2_POSITION                   equ 0003h
TXSTA2_SENDB2_SIZE                       equ 0001h
TXSTA2_SENDB2_LENGTH                     equ 0001h
TXSTA2_SENDB2_MASK                       equ 0008h
TXSTA2_SYNC2_POSN                        equ 0004h
TXSTA2_SYNC2_POSITION                    equ 0004h
TXSTA2_SYNC2_SIZE                        equ 0001h
TXSTA2_SYNC2_LENGTH                      equ 0001h
TXSTA2_SYNC2_MASK                        equ 0010h
TXSTA2_TXEN2_POSN                        equ 0005h
TXSTA2_TXEN2_POSITION                    equ 0005h
TXSTA2_TXEN2_SIZE                        equ 0001h
TXSTA2_TXEN2_LENGTH                      equ 0001h
TXSTA2_TXEN2_MASK                        equ 0020h
TXSTA2_TX92_POSN                         equ 0006h
TXSTA2_TX92_POSITION                     equ 0006h
TXSTA2_TX92_SIZE                         equ 0001h
TXSTA2_TX92_LENGTH                       equ 0001h
TXSTA2_TX92_MASK                         equ 0040h
TXSTA2_CSRC2_POSN                        equ 0007h
TXSTA2_CSRC2_POSITION                    equ 0007h
TXSTA2_CSRC2_SIZE                        equ 0001h
TXSTA2_CSRC2_LENGTH                      equ 0001h
TXSTA2_CSRC2_MASK                        equ 0080h
TXSTA2_TXD82_POSN                        equ 0000h
TXSTA2_TXD82_POSITION                    equ 0000h
TXSTA2_TXD82_SIZE                        equ 0001h
TXSTA2_TXD82_LENGTH                      equ 0001h
TXSTA2_TXD82_MASK                        equ 0001h
TXSTA2_TX8_92_POSN                       equ 0006h
TXSTA2_TX8_92_POSITION                   equ 0006h
TXSTA2_TX8_92_SIZE                       equ 0001h
TXSTA2_TX8_92_LENGTH                     equ 0001h
TXSTA2_TX8_92_MASK                       equ 0040h

// Register: TXREG2
#define TXREG2 TXREG2
TXREG2                                   equ 0F62h
// bitfield definitions
TXREG2_TXREG2_POSN                       equ 0000h
TXREG2_TXREG2_POSITION                   equ 0000h
TXREG2_TXREG2_SIZE                       equ 0008h
TXREG2_TXREG2_LENGTH                     equ 0008h
TXREG2_TXREG2_MASK                       equ 00FFh

// Register: RCREG2
#define RCREG2 RCREG2
RCREG2                                   equ 0F63h
// bitfield definitions
RCREG2_RCREG2_POSN                       equ 0000h
RCREG2_RCREG2_POSITION                   equ 0000h
RCREG2_RCREG2_SIZE                       equ 0008h
RCREG2_RCREG2_LENGTH                     equ 0008h
RCREG2_RCREG2_MASK                       equ 00FFh

// Register: SPBRG2
#define SPBRG2 SPBRG2
SPBRG2                                   equ 0F64h
// bitfield definitions
SPBRG2_SPBRG2_POSN                       equ 0000h
SPBRG2_SPBRG2_POSITION                   equ 0000h
SPBRG2_SPBRG2_SIZE                       equ 0008h
SPBRG2_SPBRG2_LENGTH                     equ 0008h
SPBRG2_SPBRG2_MASK                       equ 00FFh

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0F65h
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
CCP2CON_DCCP2Y_POSN                      equ 0004h
CCP2CON_DCCP2Y_POSITION                  equ 0004h
CCP2CON_DCCP2Y_SIZE                      equ 0001h
CCP2CON_DCCP2Y_LENGTH                    equ 0001h
CCP2CON_DCCP2Y_MASK                      equ 0010h
CCP2CON_DCCP2X_POSN                      equ 0005h
CCP2CON_DCCP2X_POSITION                  equ 0005h
CCP2CON_DCCP2X_SIZE                      equ 0001h
CCP2CON_DCCP2X_LENGTH                    equ 0001h
CCP2CON_DCCP2X_MASK                      equ 0020h

// Register: CCPR2
#define CCPR2 CCPR2
CCPR2                                    equ 0F66h

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0F66h
// bitfield definitions
CCPR2L_CCPR2L_POSN                       equ 0000h
CCPR2L_CCPR2L_POSITION                   equ 0000h
CCPR2L_CCPR2L_SIZE                       equ 0008h
CCPR2L_CCPR2L_LENGTH                     equ 0008h
CCPR2L_CCPR2L_MASK                       equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0F67h
// bitfield definitions
CCPR2H_CCPR2H_POSN                       equ 0000h
CCPR2H_CCPR2H_POSITION                   equ 0000h
CCPR2H_CCPR2H_SIZE                       equ 0008h
CCPR2H_CCPR2H_LENGTH                     equ 0008h
CCPR2H_CCPR2H_MASK                       equ 00FFh

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0F68h
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
CCP1CON_DCCP1Y_POSN                      equ 0004h
CCP1CON_DCCP1Y_POSITION                  equ 0004h
CCP1CON_DCCP1Y_SIZE                      equ 0001h
CCP1CON_DCCP1Y_LENGTH                    equ 0001h
CCP1CON_DCCP1Y_MASK                      equ 0010h
CCP1CON_DCCP1X_POSN                      equ 0005h
CCP1CON_DCCP1X_POSITION                  equ 0005h
CCP1CON_DCCP1X_SIZE                      equ 0001h
CCP1CON_DCCP1X_LENGTH                    equ 0001h
CCP1CON_DCCP1X_MASK                      equ 0020h

// Register: CCPR1
#define CCPR1 CCPR1
CCPR1                                    equ 0F69h

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0F69h
// bitfield definitions
CCPR1L_CCPR1L_POSN                       equ 0000h
CCPR1L_CCPR1L_POSITION                   equ 0000h
CCPR1L_CCPR1L_SIZE                       equ 0008h
CCPR1L_CCPR1L_LENGTH                     equ 0008h
CCPR1L_CCPR1L_MASK                       equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0F6Ah
// bitfield definitions
CCPR1H_CCPR1H_POSN                       equ 0000h
CCPR1H_CCPR1H_POSITION                   equ 0000h
CCPR1H_CCPR1H_SIZE                       equ 0008h
CCPR1H_CCPR1H_LENGTH                     equ 0008h
CCPR1H_CCPR1H_MASK                       equ 00FFh

// Register: LCDDATA6
#define LCDDATA6 LCDDATA6
LCDDATA6                                 equ 0F6Ch
// bitfield definitions
LCDDATA6_LCDDATA6_POSN                   equ 0000h
LCDDATA6_LCDDATA6_POSITION               equ 0000h
LCDDATA6_LCDDATA6_SIZE                   equ 0008h
LCDDATA6_LCDDATA6_LENGTH                 equ 0008h
LCDDATA6_LCDDATA6_MASK                   equ 00FFh
LCDDATA6_S00C1_POSN                      equ 0000h
LCDDATA6_S00C1_POSITION                  equ 0000h
LCDDATA6_S00C1_SIZE                      equ 0001h
LCDDATA6_S00C1_LENGTH                    equ 0001h
LCDDATA6_S00C1_MASK                      equ 0001h
LCDDATA6_S01C1_POSN                      equ 0001h
LCDDATA6_S01C1_POSITION                  equ 0001h
LCDDATA6_S01C1_SIZE                      equ 0001h
LCDDATA6_S01C1_LENGTH                    equ 0001h
LCDDATA6_S01C1_MASK                      equ 0002h
LCDDATA6_S02C1_POSN                      equ 0002h
LCDDATA6_S02C1_POSITION                  equ 0002h
LCDDATA6_S02C1_SIZE                      equ 0001h
LCDDATA6_S02C1_LENGTH                    equ 0001h
LCDDATA6_S02C1_MASK                      equ 0004h
LCDDATA6_S03C1_POSN                      equ 0003h
LCDDATA6_S03C1_POSITION                  equ 0003h
LCDDATA6_S03C1_SIZE                      equ 0001h
LCDDATA6_S03C1_LENGTH                    equ 0001h
LCDDATA6_S03C1_MASK                      equ 0008h
LCDDATA6_S04C1_POSN                      equ 0004h
LCDDATA6_S04C1_POSITION                  equ 0004h
LCDDATA6_S04C1_SIZE                      equ 0001h
LCDDATA6_S04C1_LENGTH                    equ 0001h
LCDDATA6_S04C1_MASK                      equ 0010h
LCDDATA6_S05C1_POSN                      equ 0005h
LCDDATA6_S05C1_POSITION                  equ 0005h
LCDDATA6_S05C1_SIZE                      equ 0001h
LCDDATA6_S05C1_LENGTH                    equ 0001h
LCDDATA6_S05C1_MASK                      equ 0020h
LCDDATA6_S06C1_POSN                      equ 0006h
LCDDATA6_S06C1_POSITION                  equ 0006h
LCDDATA6_S06C1_SIZE                      equ 0001h
LCDDATA6_S06C1_LENGTH                    equ 0001h
LCDDATA6_S06C1_MASK                      equ 0040h
LCDDATA6_S07C1_POSN                      equ 0007h
LCDDATA6_S07C1_POSITION                  equ 0007h
LCDDATA6_S07C1_SIZE                      equ 0001h
LCDDATA6_S07C1_LENGTH                    equ 0001h
LCDDATA6_S07C1_MASK                      equ 0080h
LCDDATA6_SEG0COM1_POSN                   equ 0000h
LCDDATA6_SEG0COM1_POSITION               equ 0000h
LCDDATA6_SEG0COM1_SIZE                   equ 0001h
LCDDATA6_SEG0COM1_LENGTH                 equ 0001h
LCDDATA6_SEG0COM1_MASK                   equ 0001h
LCDDATA6_SEG1COM1_POSN                   equ 0001h
LCDDATA6_SEG1COM1_POSITION               equ 0001h
LCDDATA6_SEG1COM1_SIZE                   equ 0001h
LCDDATA6_SEG1COM1_LENGTH                 equ 0001h
LCDDATA6_SEG1COM1_MASK                   equ 0002h
LCDDATA6_SEG2COM1_POSN                   equ 0002h
LCDDATA6_SEG2COM1_POSITION               equ 0002h
LCDDATA6_SEG2COM1_SIZE                   equ 0001h
LCDDATA6_SEG2COM1_LENGTH                 equ 0001h
LCDDATA6_SEG2COM1_MASK                   equ 0004h
LCDDATA6_SEG3COM1_POSN                   equ 0003h
LCDDATA6_SEG3COM1_POSITION               equ 0003h
LCDDATA6_SEG3COM1_SIZE                   equ 0001h
LCDDATA6_SEG3COM1_LENGTH                 equ 0001h
LCDDATA6_SEG3COM1_MASK                   equ 0008h
LCDDATA6_SEG4COM1_POSN                   equ 0004h
LCDDATA6_SEG4COM1_POSITION               equ 0004h
LCDDATA6_SEG4COM1_SIZE                   equ 0001h
LCDDATA6_SEG4COM1_LENGTH                 equ 0001h
LCDDATA6_SEG4COM1_MASK                   equ 0010h
LCDDATA6_SEG5COM1_POSN                   equ 0005h
LCDDATA6_SEG5COM1_POSITION               equ 0005h
LCDDATA6_SEG5COM1_SIZE                   equ 0001h
LCDDATA6_SEG5COM1_LENGTH                 equ 0001h
LCDDATA6_SEG5COM1_MASK                   equ 0020h
LCDDATA6_SEG6COM1_POSN                   equ 0006h
LCDDATA6_SEG6COM1_POSITION               equ 0006h
LCDDATA6_SEG6COM1_SIZE                   equ 0001h
LCDDATA6_SEG6COM1_LENGTH                 equ 0001h
LCDDATA6_SEG6COM1_MASK                   equ 0040h
LCDDATA6_SEG7COM1_POSN                   equ 0007h
LCDDATA6_SEG7COM1_POSITION               equ 0007h
LCDDATA6_SEG7COM1_SIZE                   equ 0001h
LCDDATA6_SEG7COM1_LENGTH                 equ 0001h
LCDDATA6_SEG7COM1_MASK                   equ 0080h
LCDDATA6_S0C1_POSN                       equ 0000h
LCDDATA6_S0C1_POSITION                   equ 0000h
LCDDATA6_S0C1_SIZE                       equ 0001h
LCDDATA6_S0C1_LENGTH                     equ 0001h
LCDDATA6_S0C1_MASK                       equ 0001h
LCDDATA6_S1C1_POSN                       equ 0001h
LCDDATA6_S1C1_POSITION                   equ 0001h
LCDDATA6_S1C1_SIZE                       equ 0001h
LCDDATA6_S1C1_LENGTH                     equ 0001h
LCDDATA6_S1C1_MASK                       equ 0002h
LCDDATA6_S2C1_POSN                       equ 0002h
LCDDATA6_S2C1_POSITION                   equ 0002h
LCDDATA6_S2C1_SIZE                       equ 0001h
LCDDATA6_S2C1_LENGTH                     equ 0001h
LCDDATA6_S2C1_MASK                       equ 0004h
LCDDATA6_S3C1_POSN                       equ 0003h
LCDDATA6_S3C1_POSITION                   equ 0003h
LCDDATA6_S3C1_SIZE                       equ 0001h
LCDDATA6_S3C1_LENGTH                     equ 0001h
LCDDATA6_S3C1_MASK                       equ 0008h
LCDDATA6_S4C1_POSN                       equ 0004h
LCDDATA6_S4C1_POSITION                   equ 0004h
LCDDATA6_S4C1_SIZE                       equ 0001h
LCDDATA6_S4C1_LENGTH                     equ 0001h
LCDDATA6_S4C1_MASK                       equ 0010h
LCDDATA6_S5C1_POSN                       equ 0005h
LCDDATA6_S5C1_POSITION                   equ 0005h
LCDDATA6_S5C1_SIZE                       equ 0001h
LCDDATA6_S5C1_LENGTH                     equ 0001h
LCDDATA6_S5C1_MASK                       equ 0020h
LCDDATA6_S6C1_POSN                       equ 0006h
LCDDATA6_S6C1_POSITION                   equ 0006h
LCDDATA6_S6C1_SIZE                       equ 0001h
LCDDATA6_S6C1_LENGTH                     equ 0001h
LCDDATA6_S6C1_MASK                       equ 0040h
LCDDATA6_S7C1_POSN                       equ 0007h
LCDDATA6_S7C1_POSITION                   equ 0007h
LCDDATA6_S7C1_SIZE                       equ 0001h
LCDDATA6_S7C1_LENGTH                     equ 0001h
LCDDATA6_S7C1_MASK                       equ 0080h

// Register: LCDDATA7
#define LCDDATA7 LCDDATA7
LCDDATA7                                 equ 0F6Dh
// bitfield definitions
LCDDATA7_LCDDATA7_POSN                   equ 0000h
LCDDATA7_LCDDATA7_POSITION               equ 0000h
LCDDATA7_LCDDATA7_SIZE                   equ 0008h
LCDDATA7_LCDDATA7_LENGTH                 equ 0008h
LCDDATA7_LCDDATA7_MASK                   equ 00FFh
LCDDATA7_S8C1_POSN                       equ 0000h
LCDDATA7_S8C1_POSITION                   equ 0000h
LCDDATA7_S8C1_SIZE                       equ 0001h
LCDDATA7_S8C1_LENGTH                     equ 0001h
LCDDATA7_S8C1_MASK                       equ 0001h
LCDDATA7_S9C1_POSN                       equ 0001h
LCDDATA7_S9C1_POSITION                   equ 0001h
LCDDATA7_S9C1_SIZE                       equ 0001h
LCDDATA7_S9C1_LENGTH                     equ 0001h
LCDDATA7_S9C1_MASK                       equ 0002h
LCDDATA7_S10C1_POSN                      equ 0002h
LCDDATA7_S10C1_POSITION                  equ 0002h
LCDDATA7_S10C1_SIZE                      equ 0001h
LCDDATA7_S10C1_LENGTH                    equ 0001h
LCDDATA7_S10C1_MASK                      equ 0004h
LCDDATA7_S11C1_POSN                      equ 0003h
LCDDATA7_S11C1_POSITION                  equ 0003h
LCDDATA7_S11C1_SIZE                      equ 0001h
LCDDATA7_S11C1_LENGTH                    equ 0001h
LCDDATA7_S11C1_MASK                      equ 0008h
LCDDATA7_S12C1_POSN                      equ 0004h
LCDDATA7_S12C1_POSITION                  equ 0004h
LCDDATA7_S12C1_SIZE                      equ 0001h
LCDDATA7_S12C1_LENGTH                    equ 0001h
LCDDATA7_S12C1_MASK                      equ 0010h
LCDDATA7_S13C1_POSN                      equ 0005h
LCDDATA7_S13C1_POSITION                  equ 0005h
LCDDATA7_S13C1_SIZE                      equ 0001h
LCDDATA7_S13C1_LENGTH                    equ 0001h
LCDDATA7_S13C1_MASK                      equ 0020h
LCDDATA7_S14C1_POSN                      equ 0006h
LCDDATA7_S14C1_POSITION                  equ 0006h
LCDDATA7_S14C1_SIZE                      equ 0001h
LCDDATA7_S14C1_LENGTH                    equ 0001h
LCDDATA7_S14C1_MASK                      equ 0040h
LCDDATA7_S15C1_POSN                      equ 0007h
LCDDATA7_S15C1_POSITION                  equ 0007h
LCDDATA7_S15C1_SIZE                      equ 0001h
LCDDATA7_S15C1_LENGTH                    equ 0001h
LCDDATA7_S15C1_MASK                      equ 0080h
LCDDATA7_SEG8COM1_POSN                   equ 0000h
LCDDATA7_SEG8COM1_POSITION               equ 0000h
LCDDATA7_SEG8COM1_SIZE                   equ 0001h
LCDDATA7_SEG8COM1_LENGTH                 equ 0001h
LCDDATA7_SEG8COM1_MASK                   equ 0001h
LCDDATA7_SEG9COM1_POSN                   equ 0001h
LCDDATA7_SEG9COM1_POSITION               equ 0001h
LCDDATA7_SEG9COM1_SIZE                   equ 0001h
LCDDATA7_SEG9COM1_LENGTH                 equ 0001h
LCDDATA7_SEG9COM1_MASK                   equ 0002h
LCDDATA7_SEG10COM1_POSN                  equ 0002h
LCDDATA7_SEG10COM1_POSITION              equ 0002h
LCDDATA7_SEG10COM1_SIZE                  equ 0001h
LCDDATA7_SEG10COM1_LENGTH                equ 0001h
LCDDATA7_SEG10COM1_MASK                  equ 0004h
LCDDATA7_SEG11COM1_POSN                  equ 0003h
LCDDATA7_SEG11COM1_POSITION              equ 0003h
LCDDATA7_SEG11COM1_SIZE                  equ 0001h
LCDDATA7_SEG11COM1_LENGTH                equ 0001h
LCDDATA7_SEG11COM1_MASK                  equ 0008h
LCDDATA7_SEG12COM1_POSN                  equ 0004h
LCDDATA7_SEG12COM1_POSITION              equ 0004h
LCDDATA7_SEG12COM1_SIZE                  equ 0001h
LCDDATA7_SEG12COM1_LENGTH                equ 0001h
LCDDATA7_SEG12COM1_MASK                  equ 0010h
LCDDATA7_SEG13COM1_POSN                  equ 0005h
LCDDATA7_SEG13COM1_POSITION              equ 0005h
LCDDATA7_SEG13COM1_SIZE                  equ 0001h
LCDDATA7_SEG13COM1_LENGTH                equ 0001h
LCDDATA7_SEG13COM1_MASK                  equ 0020h
LCDDATA7_SEG14COM1_POSN                  equ 0006h
LCDDATA7_SEG14COM1_POSITION              equ 0006h
LCDDATA7_SEG14COM1_SIZE                  equ 0001h
LCDDATA7_SEG14COM1_LENGTH                equ 0001h
LCDDATA7_SEG14COM1_MASK                  equ 0040h
LCDDATA7_SEG15COM1_POSN                  equ 0007h
LCDDATA7_SEG15COM1_POSITION              equ 0007h
LCDDATA7_SEG15COM1_SIZE                  equ 0001h
LCDDATA7_SEG15COM1_LENGTH                equ 0001h
LCDDATA7_SEG15COM1_MASK                  equ 0080h
LCDDATA7_S08C1_POSN                      equ 0000h
LCDDATA7_S08C1_POSITION                  equ 0000h
LCDDATA7_S08C1_SIZE                      equ 0001h
LCDDATA7_S08C1_LENGTH                    equ 0001h
LCDDATA7_S08C1_MASK                      equ 0001h
LCDDATA7_S09C1_POSN                      equ 0001h
LCDDATA7_S09C1_POSITION                  equ 0001h
LCDDATA7_S09C1_SIZE                      equ 0001h
LCDDATA7_S09C1_LENGTH                    equ 0001h
LCDDATA7_S09C1_MASK                      equ 0002h

// Register: LCDDATA8
#define LCDDATA8 LCDDATA8
LCDDATA8                                 equ 0F6Eh
// bitfield definitions
LCDDATA8_LCDDATA8_POSN                   equ 0000h
LCDDATA8_LCDDATA8_POSITION               equ 0000h
LCDDATA8_LCDDATA8_SIZE                   equ 0008h
LCDDATA8_LCDDATA8_LENGTH                 equ 0008h
LCDDATA8_LCDDATA8_MASK                   equ 00FFh
LCDDATA8_S16C1_POSN                      equ 0000h
LCDDATA8_S16C1_POSITION                  equ 0000h
LCDDATA8_S16C1_SIZE                      equ 0001h
LCDDATA8_S16C1_LENGTH                    equ 0001h
LCDDATA8_S16C1_MASK                      equ 0001h
LCDDATA8_S17C1_POSN                      equ 0001h
LCDDATA8_S17C1_POSITION                  equ 0001h
LCDDATA8_S17C1_SIZE                      equ 0001h
LCDDATA8_S17C1_LENGTH                    equ 0001h
LCDDATA8_S17C1_MASK                      equ 0002h
LCDDATA8_S18C1_POSN                      equ 0002h
LCDDATA8_S18C1_POSITION                  equ 0002h
LCDDATA8_S18C1_SIZE                      equ 0001h
LCDDATA8_S18C1_LENGTH                    equ 0001h
LCDDATA8_S18C1_MASK                      equ 0004h
LCDDATA8_S19C1_POSN                      equ 0003h
LCDDATA8_S19C1_POSITION                  equ 0003h
LCDDATA8_S19C1_SIZE                      equ 0001h
LCDDATA8_S19C1_LENGTH                    equ 0001h
LCDDATA8_S19C1_MASK                      equ 0008h
LCDDATA8_S20C1_POSN                      equ 0004h
LCDDATA8_S20C1_POSITION                  equ 0004h
LCDDATA8_S20C1_SIZE                      equ 0001h
LCDDATA8_S20C1_LENGTH                    equ 0001h
LCDDATA8_S20C1_MASK                      equ 0010h
LCDDATA8_S21C1_POSN                      equ 0005h
LCDDATA8_S21C1_POSITION                  equ 0005h
LCDDATA8_S21C1_SIZE                      equ 0001h
LCDDATA8_S21C1_LENGTH                    equ 0001h
LCDDATA8_S21C1_MASK                      equ 0020h
LCDDATA8_S22C1_POSN                      equ 0006h
LCDDATA8_S22C1_POSITION                  equ 0006h
LCDDATA8_S22C1_SIZE                      equ 0001h
LCDDATA8_S22C1_LENGTH                    equ 0001h
LCDDATA8_S22C1_MASK                      equ 0040h
LCDDATA8_S23C1_POSN                      equ 0007h
LCDDATA8_S23C1_POSITION                  equ 0007h
LCDDATA8_S23C1_SIZE                      equ 0001h
LCDDATA8_S23C1_LENGTH                    equ 0001h
LCDDATA8_S23C1_MASK                      equ 0080h
LCDDATA8_SEG16COM1_POSN                  equ 0000h
LCDDATA8_SEG16COM1_POSITION              equ 0000h
LCDDATA8_SEG16COM1_SIZE                  equ 0001h
LCDDATA8_SEG16COM1_LENGTH                equ 0001h
LCDDATA8_SEG16COM1_MASK                  equ 0001h
LCDDATA8_SEG17COM1_POSN                  equ 0001h
LCDDATA8_SEG17COM1_POSITION              equ 0001h
LCDDATA8_SEG17COM1_SIZE                  equ 0001h
LCDDATA8_SEG17COM1_LENGTH                equ 0001h
LCDDATA8_SEG17COM1_MASK                  equ 0002h
LCDDATA8_SEG18COM1_POSN                  equ 0002h
LCDDATA8_SEG18COM1_POSITION              equ 0002h
LCDDATA8_SEG18COM1_SIZE                  equ 0001h
LCDDATA8_SEG18COM1_LENGTH                equ 0001h
LCDDATA8_SEG18COM1_MASK                  equ 0004h
LCDDATA8_SEG19COM1_POSN                  equ 0003h
LCDDATA8_SEG19COM1_POSITION              equ 0003h
LCDDATA8_SEG19COM1_SIZE                  equ 0001h
LCDDATA8_SEG19COM1_LENGTH                equ 0001h
LCDDATA8_SEG19COM1_MASK                  equ 0008h
LCDDATA8_SEG20COM1_POSN                  equ 0004h
LCDDATA8_SEG20COM1_POSITION              equ 0004h
LCDDATA8_SEG20COM1_SIZE                  equ 0001h
LCDDATA8_SEG20COM1_LENGTH                equ 0001h
LCDDATA8_SEG20COM1_MASK                  equ 0010h
LCDDATA8_SEG21COM1_POSN                  equ 0005h
LCDDATA8_SEG21COM1_POSITION              equ 0005h
LCDDATA8_SEG21COM1_SIZE                  equ 0001h
LCDDATA8_SEG21COM1_LENGTH                equ 0001h
LCDDATA8_SEG21COM1_MASK                  equ 0020h
LCDDATA8_SEG22COM1_POSN                  equ 0006h
LCDDATA8_SEG22COM1_POSITION              equ 0006h
LCDDATA8_SEG22COM1_SIZE                  equ 0001h
LCDDATA8_SEG22COM1_LENGTH                equ 0001h
LCDDATA8_SEG22COM1_MASK                  equ 0040h
LCDDATA8_SEG23COM1_POSN                  equ 0007h
LCDDATA8_SEG23COM1_POSITION              equ 0007h
LCDDATA8_SEG23COM1_SIZE                  equ 0001h
LCDDATA8_SEG23COM1_LENGTH                equ 0001h
LCDDATA8_SEG23COM1_MASK                  equ 0080h

// Register: LCDDATA9
#define LCDDATA9 LCDDATA9
LCDDATA9                                 equ 0F6Fh
// bitfield definitions
LCDDATA9_LCDDATA9_POSN                   equ 0000h
LCDDATA9_LCDDATA9_POSITION               equ 0000h
LCDDATA9_LCDDATA9_SIZE                   equ 0008h
LCDDATA9_LCDDATA9_LENGTH                 equ 0008h
LCDDATA9_LCDDATA9_MASK                   equ 00FFh
LCDDATA9_S24C1_POSN                      equ 0000h
LCDDATA9_S24C1_POSITION                  equ 0000h
LCDDATA9_S24C1_SIZE                      equ 0001h
LCDDATA9_S24C1_LENGTH                    equ 0001h
LCDDATA9_S24C1_MASK                      equ 0001h
LCDDATA9_S25C1_POSN                      equ 0001h
LCDDATA9_S25C1_POSITION                  equ 0001h
LCDDATA9_S25C1_SIZE                      equ 0001h
LCDDATA9_S25C1_LENGTH                    equ 0001h
LCDDATA9_S25C1_MASK                      equ 0002h
LCDDATA9_S26C1_POSN                      equ 0002h
LCDDATA9_S26C1_POSITION                  equ 0002h
LCDDATA9_S26C1_SIZE                      equ 0001h
LCDDATA9_S26C1_LENGTH                    equ 0001h
LCDDATA9_S26C1_MASK                      equ 0004h
LCDDATA9_S27C1_POSN                      equ 0003h
LCDDATA9_S27C1_POSITION                  equ 0003h
LCDDATA9_S27C1_SIZE                      equ 0001h
LCDDATA9_S27C1_LENGTH                    equ 0001h
LCDDATA9_S27C1_MASK                      equ 0008h
LCDDATA9_S28C1_POSN                      equ 0004h
LCDDATA9_S28C1_POSITION                  equ 0004h
LCDDATA9_S28C1_SIZE                      equ 0001h
LCDDATA9_S28C1_LENGTH                    equ 0001h
LCDDATA9_S28C1_MASK                      equ 0010h
LCDDATA9_S29C1_POSN                      equ 0005h
LCDDATA9_S29C1_POSITION                  equ 0005h
LCDDATA9_S29C1_SIZE                      equ 0001h
LCDDATA9_S29C1_LENGTH                    equ 0001h
LCDDATA9_S29C1_MASK                      equ 0020h
LCDDATA9_S30C1_POSN                      equ 0006h
LCDDATA9_S30C1_POSITION                  equ 0006h
LCDDATA9_S30C1_SIZE                      equ 0001h
LCDDATA9_S30C1_LENGTH                    equ 0001h
LCDDATA9_S30C1_MASK                      equ 0040h
LCDDATA9_S31C1_POSN                      equ 0007h
LCDDATA9_S31C1_POSITION                  equ 0007h
LCDDATA9_S31C1_SIZE                      equ 0001h
LCDDATA9_S31C1_LENGTH                    equ 0001h
LCDDATA9_S31C1_MASK                      equ 0080h
LCDDATA9_SEG24COM1_POSN                  equ 0000h
LCDDATA9_SEG24COM1_POSITION              equ 0000h
LCDDATA9_SEG24COM1_SIZE                  equ 0001h
LCDDATA9_SEG24COM1_LENGTH                equ 0001h
LCDDATA9_SEG24COM1_MASK                  equ 0001h
LCDDATA9_SEG25COM1_POSN                  equ 0001h
LCDDATA9_SEG25COM1_POSITION              equ 0001h
LCDDATA9_SEG25COM1_SIZE                  equ 0001h
LCDDATA9_SEG25COM1_LENGTH                equ 0001h
LCDDATA9_SEG25COM1_MASK                  equ 0002h
LCDDATA9_SEG26COM1_POSN                  equ 0002h
LCDDATA9_SEG26COM1_POSITION              equ 0002h
LCDDATA9_SEG26COM1_SIZE                  equ 0001h
LCDDATA9_SEG26COM1_LENGTH                equ 0001h
LCDDATA9_SEG26COM1_MASK                  equ 0004h
LCDDATA9_SEG27COM1_POSN                  equ 0003h
LCDDATA9_SEG27COM1_POSITION              equ 0003h
LCDDATA9_SEG27COM1_SIZE                  equ 0001h
LCDDATA9_SEG27COM1_LENGTH                equ 0001h
LCDDATA9_SEG27COM1_MASK                  equ 0008h
LCDDATA9_SEG28COM1_POSN                  equ 0004h
LCDDATA9_SEG28COM1_POSITION              equ 0004h
LCDDATA9_SEG28COM1_SIZE                  equ 0001h
LCDDATA9_SEG28COM1_LENGTH                equ 0001h
LCDDATA9_SEG28COM1_MASK                  equ 0010h
LCDDATA9_SEG29COM1_POSN                  equ 0005h
LCDDATA9_SEG29COM1_POSITION              equ 0005h
LCDDATA9_SEG29COM1_SIZE                  equ 0001h
LCDDATA9_SEG29COM1_LENGTH                equ 0001h
LCDDATA9_SEG29COM1_MASK                  equ 0020h
LCDDATA9_SEG30COM1_POSN                  equ 0006h
LCDDATA9_SEG30COM1_POSITION              equ 0006h
LCDDATA9_SEG30COM1_SIZE                  equ 0001h
LCDDATA9_SEG30COM1_LENGTH                equ 0001h
LCDDATA9_SEG30COM1_MASK                  equ 0040h
LCDDATA9_SEG31COM1_POSN                  equ 0007h
LCDDATA9_SEG31COM1_POSITION              equ 0007h
LCDDATA9_SEG31COM1_SIZE                  equ 0001h
LCDDATA9_SEG31COM1_LENGTH                equ 0001h
LCDDATA9_SEG31COM1_MASK                  equ 0080h

// Register: LCDDATA10
#define LCDDATA10 LCDDATA10
LCDDATA10                                equ 0F70h
// bitfield definitions
LCDDATA10_LCDDATA10_POSN                 equ 0000h
LCDDATA10_LCDDATA10_POSITION             equ 0000h
LCDDATA10_LCDDATA10_SIZE                 equ 0008h
LCDDATA10_LCDDATA10_LENGTH               equ 0008h
LCDDATA10_LCDDATA10_MASK                 equ 00FFh
LCDDATA10_S32C1_POSN                     equ 0000h
LCDDATA10_S32C1_POSITION                 equ 0000h
LCDDATA10_S32C1_SIZE                     equ 0001h
LCDDATA10_S32C1_LENGTH                   equ 0001h
LCDDATA10_S32C1_MASK                     equ 0001h
LCDDATA10_SEG32COM1_POSN                 equ 0000h
LCDDATA10_SEG32COM1_POSITION             equ 0000h
LCDDATA10_SEG32COM1_SIZE                 equ 0001h
LCDDATA10_SEG32COM1_LENGTH               equ 0001h
LCDDATA10_SEG32COM1_MASK                 equ 0001h

// Register: LCDDATA12
#define LCDDATA12 LCDDATA12
LCDDATA12                                equ 0F72h
// bitfield definitions
LCDDATA12_LCDDATA12_POSN                 equ 0000h
LCDDATA12_LCDDATA12_POSITION             equ 0000h
LCDDATA12_LCDDATA12_SIZE                 equ 0008h
LCDDATA12_LCDDATA12_LENGTH               equ 0008h
LCDDATA12_LCDDATA12_MASK                 equ 00FFh
LCDDATA12_S00C2_POSN                     equ 0000h
LCDDATA12_S00C2_POSITION                 equ 0000h
LCDDATA12_S00C2_SIZE                     equ 0001h
LCDDATA12_S00C2_LENGTH                   equ 0001h
LCDDATA12_S00C2_MASK                     equ 0001h
LCDDATA12_S01C2_POSN                     equ 0001h
LCDDATA12_S01C2_POSITION                 equ 0001h
LCDDATA12_S01C2_SIZE                     equ 0001h
LCDDATA12_S01C2_LENGTH                   equ 0001h
LCDDATA12_S01C2_MASK                     equ 0002h
LCDDATA12_S02C2_POSN                     equ 0002h
LCDDATA12_S02C2_POSITION                 equ 0002h
LCDDATA12_S02C2_SIZE                     equ 0001h
LCDDATA12_S02C2_LENGTH                   equ 0001h
LCDDATA12_S02C2_MASK                     equ 0004h
LCDDATA12_S03C2_POSN                     equ 0003h
LCDDATA12_S03C2_POSITION                 equ 0003h
LCDDATA12_S03C2_SIZE                     equ 0001h
LCDDATA12_S03C2_LENGTH                   equ 0001h
LCDDATA12_S03C2_MASK                     equ 0008h
LCDDATA12_S04C2_POSN                     equ 0004h
LCDDATA12_S04C2_POSITION                 equ 0004h
LCDDATA12_S04C2_SIZE                     equ 0001h
LCDDATA12_S04C2_LENGTH                   equ 0001h
LCDDATA12_S04C2_MASK                     equ 0010h
LCDDATA12_S05C2_POSN                     equ 0005h
LCDDATA12_S05C2_POSITION                 equ 0005h
LCDDATA12_S05C2_SIZE                     equ 0001h
LCDDATA12_S05C2_LENGTH                   equ 0001h
LCDDATA12_S05C2_MASK                     equ 0020h
LCDDATA12_S06C2_POSN                     equ 0006h
LCDDATA12_S06C2_POSITION                 equ 0006h
LCDDATA12_S06C2_SIZE                     equ 0001h
LCDDATA12_S06C2_LENGTH                   equ 0001h
LCDDATA12_S06C2_MASK                     equ 0040h
LCDDATA12_S07C2_POSN                     equ 0007h
LCDDATA12_S07C2_POSITION                 equ 0007h
LCDDATA12_S07C2_SIZE                     equ 0001h
LCDDATA12_S07C2_LENGTH                   equ 0001h
LCDDATA12_S07C2_MASK                     equ 0080h
LCDDATA12_SEG0COM2_POSN                  equ 0000h
LCDDATA12_SEG0COM2_POSITION              equ 0000h
LCDDATA12_SEG0COM2_SIZE                  equ 0001h
LCDDATA12_SEG0COM2_LENGTH                equ 0001h
LCDDATA12_SEG0COM2_MASK                  equ 0001h
LCDDATA12_SEG1COM2_POSN                  equ 0001h
LCDDATA12_SEG1COM2_POSITION              equ 0001h
LCDDATA12_SEG1COM2_SIZE                  equ 0001h
LCDDATA12_SEG1COM2_LENGTH                equ 0001h
LCDDATA12_SEG1COM2_MASK                  equ 0002h
LCDDATA12_SEG2COM2_POSN                  equ 0002h
LCDDATA12_SEG2COM2_POSITION              equ 0002h
LCDDATA12_SEG2COM2_SIZE                  equ 0001h
LCDDATA12_SEG2COM2_LENGTH                equ 0001h
LCDDATA12_SEG2COM2_MASK                  equ 0004h
LCDDATA12_SEG3COM2_POSN                  equ 0003h
LCDDATA12_SEG3COM2_POSITION              equ 0003h
LCDDATA12_SEG3COM2_SIZE                  equ 0001h
LCDDATA12_SEG3COM2_LENGTH                equ 0001h
LCDDATA12_SEG3COM2_MASK                  equ 0008h
LCDDATA12_SEG4COM2_POSN                  equ 0004h
LCDDATA12_SEG4COM2_POSITION              equ 0004h
LCDDATA12_SEG4COM2_SIZE                  equ 0001h
LCDDATA12_SEG4COM2_LENGTH                equ 0001h
LCDDATA12_SEG4COM2_MASK                  equ 0010h
LCDDATA12_SEG5COM2_POSN                  equ 0005h
LCDDATA12_SEG5COM2_POSITION              equ 0005h
LCDDATA12_SEG5COM2_SIZE                  equ 0001h
LCDDATA12_SEG5COM2_LENGTH                equ 0001h
LCDDATA12_SEG5COM2_MASK                  equ 0020h
LCDDATA12_SEG6COM2_POSN                  equ 0006h
LCDDATA12_SEG6COM2_POSITION              equ 0006h
LCDDATA12_SEG6COM2_SIZE                  equ 0001h
LCDDATA12_SEG6COM2_LENGTH                equ 0001h
LCDDATA12_SEG6COM2_MASK                  equ 0040h
LCDDATA12_SEG7COM2_POSN                  equ 0007h
LCDDATA12_SEG7COM2_POSITION              equ 0007h
LCDDATA12_SEG7COM2_SIZE                  equ 0001h
LCDDATA12_SEG7COM2_LENGTH                equ 0001h
LCDDATA12_SEG7COM2_MASK                  equ 0080h
LCDDATA12_S0C2_POSN                      equ 0000h
LCDDATA12_S0C2_POSITION                  equ 0000h
LCDDATA12_S0C2_SIZE                      equ 0001h
LCDDATA12_S0C2_LENGTH                    equ 0001h
LCDDATA12_S0C2_MASK                      equ 0001h
LCDDATA12_S1C2_POSN                      equ 0001h
LCDDATA12_S1C2_POSITION                  equ 0001h
LCDDATA12_S1C2_SIZE                      equ 0001h
LCDDATA12_S1C2_LENGTH                    equ 0001h
LCDDATA12_S1C2_MASK                      equ 0002h
LCDDATA12_S2C2_POSN                      equ 0002h
LCDDATA12_S2C2_POSITION                  equ 0002h
LCDDATA12_S2C2_SIZE                      equ 0001h
LCDDATA12_S2C2_LENGTH                    equ 0001h
LCDDATA12_S2C2_MASK                      equ 0004h
LCDDATA12_S3C2_POSN                      equ 0003h
LCDDATA12_S3C2_POSITION                  equ 0003h
LCDDATA12_S3C2_SIZE                      equ 0001h
LCDDATA12_S3C2_LENGTH                    equ 0001h
LCDDATA12_S3C2_MASK                      equ 0008h
LCDDATA12_S4C2_POSN                      equ 0004h
LCDDATA12_S4C2_POSITION                  equ 0004h
LCDDATA12_S4C2_SIZE                      equ 0001h
LCDDATA12_S4C2_LENGTH                    equ 0001h
LCDDATA12_S4C2_MASK                      equ 0010h
LCDDATA12_S5C2_POSN                      equ 0005h
LCDDATA12_S5C2_POSITION                  equ 0005h
LCDDATA12_S5C2_SIZE                      equ 0001h
LCDDATA12_S5C2_LENGTH                    equ 0001h
LCDDATA12_S5C2_MASK                      equ 0020h
LCDDATA12_S6C2_POSN                      equ 0006h
LCDDATA12_S6C2_POSITION                  equ 0006h
LCDDATA12_S6C2_SIZE                      equ 0001h
LCDDATA12_S6C2_LENGTH                    equ 0001h
LCDDATA12_S6C2_MASK                      equ 0040h
LCDDATA12_S7C2_POSN                      equ 0007h
LCDDATA12_S7C2_POSITION                  equ 0007h
LCDDATA12_S7C2_SIZE                      equ 0001h
LCDDATA12_S7C2_LENGTH                    equ 0001h
LCDDATA12_S7C2_MASK                      equ 0080h
LCDDATA12_SSPM012_POSN                   equ 0000h
LCDDATA12_SSPM012_POSITION               equ 0000h
LCDDATA12_SSPM012_SIZE                   equ 0001h
LCDDATA12_SSPM012_LENGTH                 equ 0001h
LCDDATA12_SSPM012_MASK                   equ 0001h
LCDDATA12_SSPM112_POSN                   equ 0001h
LCDDATA12_SSPM112_POSITION               equ 0001h
LCDDATA12_SSPM112_SIZE                   equ 0001h
LCDDATA12_SSPM112_LENGTH                 equ 0001h
LCDDATA12_SSPM112_MASK                   equ 0002h
LCDDATA12_SSPM212_POSN                   equ 0002h
LCDDATA12_SSPM212_POSITION               equ 0002h
LCDDATA12_SSPM212_SIZE                   equ 0001h
LCDDATA12_SSPM212_LENGTH                 equ 0001h
LCDDATA12_SSPM212_MASK                   equ 0004h
LCDDATA12_SSPM312_POSN                   equ 0003h
LCDDATA12_SSPM312_POSITION               equ 0003h
LCDDATA12_SSPM312_SIZE                   equ 0001h
LCDDATA12_SSPM312_LENGTH                 equ 0001h
LCDDATA12_SSPM312_MASK                   equ 0008h

// Register: LCDDATA13
#define LCDDATA13 LCDDATA13
LCDDATA13                                equ 0F73h
// bitfield definitions
LCDDATA13_LCDDATA13_POSN                 equ 0000h
LCDDATA13_LCDDATA13_POSITION             equ 0000h
LCDDATA13_LCDDATA13_SIZE                 equ 0008h
LCDDATA13_LCDDATA13_LENGTH               equ 0008h
LCDDATA13_LCDDATA13_MASK                 equ 00FFh
LCDDATA13_S8C2_POSN                      equ 0000h
LCDDATA13_S8C2_POSITION                  equ 0000h
LCDDATA13_S8C2_SIZE                      equ 0001h
LCDDATA13_S8C2_LENGTH                    equ 0001h
LCDDATA13_S8C2_MASK                      equ 0001h
LCDDATA13_S9C2_POSN                      equ 0001h
LCDDATA13_S9C2_POSITION                  equ 0001h
LCDDATA13_S9C2_SIZE                      equ 0001h
LCDDATA13_S9C2_LENGTH                    equ 0001h
LCDDATA13_S9C2_MASK                      equ 0002h
LCDDATA13_S10C2_POSN                     equ 0002h
LCDDATA13_S10C2_POSITION                 equ 0002h
LCDDATA13_S10C2_SIZE                     equ 0001h
LCDDATA13_S10C2_LENGTH                   equ 0001h
LCDDATA13_S10C2_MASK                     equ 0004h
LCDDATA13_S11C2_POSN                     equ 0003h
LCDDATA13_S11C2_POSITION                 equ 0003h
LCDDATA13_S11C2_SIZE                     equ 0001h
LCDDATA13_S11C2_LENGTH                   equ 0001h
LCDDATA13_S11C2_MASK                     equ 0008h
LCDDATA13_S12C2_POSN                     equ 0004h
LCDDATA13_S12C2_POSITION                 equ 0004h
LCDDATA13_S12C2_SIZE                     equ 0001h
LCDDATA13_S12C2_LENGTH                   equ 0001h
LCDDATA13_S12C2_MASK                     equ 0010h
LCDDATA13_S13C2_POSN                     equ 0005h
LCDDATA13_S13C2_POSITION                 equ 0005h
LCDDATA13_S13C2_SIZE                     equ 0001h
LCDDATA13_S13C2_LENGTH                   equ 0001h
LCDDATA13_S13C2_MASK                     equ 0020h
LCDDATA13_S14C2_POSN                     equ 0006h
LCDDATA13_S14C2_POSITION                 equ 0006h
LCDDATA13_S14C2_SIZE                     equ 0001h
LCDDATA13_S14C2_LENGTH                   equ 0001h
LCDDATA13_S14C2_MASK                     equ 0040h
LCDDATA13_S15C2_POSN                     equ 0007h
LCDDATA13_S15C2_POSITION                 equ 0007h
LCDDATA13_S15C2_SIZE                     equ 0001h
LCDDATA13_S15C2_LENGTH                   equ 0001h
LCDDATA13_S15C2_MASK                     equ 0080h
LCDDATA13_SEG8COM2_POSN                  equ 0000h
LCDDATA13_SEG8COM2_POSITION              equ 0000h
LCDDATA13_SEG8COM2_SIZE                  equ 0001h
LCDDATA13_SEG8COM2_LENGTH                equ 0001h
LCDDATA13_SEG8COM2_MASK                  equ 0001h
LCDDATA13_SEG9COM2_POSN                  equ 0001h
LCDDATA13_SEG9COM2_POSITION              equ 0001h
LCDDATA13_SEG9COM2_SIZE                  equ 0001h
LCDDATA13_SEG9COM2_LENGTH                equ 0001h
LCDDATA13_SEG9COM2_MASK                  equ 0002h
LCDDATA13_SEG10COM2_POSN                 equ 0002h
LCDDATA13_SEG10COM2_POSITION             equ 0002h
LCDDATA13_SEG10COM2_SIZE                 equ 0001h
LCDDATA13_SEG10COM2_LENGTH               equ 0001h
LCDDATA13_SEG10COM2_MASK                 equ 0004h
LCDDATA13_SEG11COM2_POSN                 equ 0003h
LCDDATA13_SEG11COM2_POSITION             equ 0003h
LCDDATA13_SEG11COM2_SIZE                 equ 0001h
LCDDATA13_SEG11COM2_LENGTH               equ 0001h
LCDDATA13_SEG11COM2_MASK                 equ 0008h
LCDDATA13_SEG12COM2_POSN                 equ 0004h
LCDDATA13_SEG12COM2_POSITION             equ 0004h
LCDDATA13_SEG12COM2_SIZE                 equ 0001h
LCDDATA13_SEG12COM2_LENGTH               equ 0001h
LCDDATA13_SEG12COM2_MASK                 equ 0010h
LCDDATA13_SEG13COM2_POSN                 equ 0005h
LCDDATA13_SEG13COM2_POSITION             equ 0005h
LCDDATA13_SEG13COM2_SIZE                 equ 0001h
LCDDATA13_SEG13COM2_LENGTH               equ 0001h
LCDDATA13_SEG13COM2_MASK                 equ 0020h
LCDDATA13_SEG14COM2_POSN                 equ 0006h
LCDDATA13_SEG14COM2_POSITION             equ 0006h
LCDDATA13_SEG14COM2_SIZE                 equ 0001h
LCDDATA13_SEG14COM2_LENGTH               equ 0001h
LCDDATA13_SEG14COM2_MASK                 equ 0040h
LCDDATA13_SEG15COM2_POSN                 equ 0007h
LCDDATA13_SEG15COM2_POSITION             equ 0007h
LCDDATA13_SEG15COM2_SIZE                 equ 0001h
LCDDATA13_SEG15COM2_LENGTH               equ 0001h
LCDDATA13_SEG15COM2_MASK                 equ 0080h
LCDDATA13_S08C2_POSN                     equ 0000h
LCDDATA13_S08C2_POSITION                 equ 0000h
LCDDATA13_S08C2_SIZE                     equ 0001h
LCDDATA13_S08C2_LENGTH                   equ 0001h
LCDDATA13_S08C2_MASK                     equ 0001h
LCDDATA13_S09C2_POSN                     equ 0001h
LCDDATA13_S09C2_POSITION                 equ 0001h
LCDDATA13_S09C2_SIZE                     equ 0001h
LCDDATA13_S09C2_LENGTH                   equ 0001h
LCDDATA13_S09C2_MASK                     equ 0002h

// Register: LCDDATA14
#define LCDDATA14 LCDDATA14
LCDDATA14                                equ 0F74h
// bitfield definitions
LCDDATA14_LCDDATA14_POSN                 equ 0000h
LCDDATA14_LCDDATA14_POSITION             equ 0000h
LCDDATA14_LCDDATA14_SIZE                 equ 0008h
LCDDATA14_LCDDATA14_LENGTH               equ 0008h
LCDDATA14_LCDDATA14_MASK                 equ 00FFh
LCDDATA14_S16C2_POSN                     equ 0000h
LCDDATA14_S16C2_POSITION                 equ 0000h
LCDDATA14_S16C2_SIZE                     equ 0001h
LCDDATA14_S16C2_LENGTH                   equ 0001h
LCDDATA14_S16C2_MASK                     equ 0001h
LCDDATA14_S17C2_POSN                     equ 0001h
LCDDATA14_S17C2_POSITION                 equ 0001h
LCDDATA14_S17C2_SIZE                     equ 0001h
LCDDATA14_S17C2_LENGTH                   equ 0001h
LCDDATA14_S17C2_MASK                     equ 0002h
LCDDATA14_S18C2_POSN                     equ 0002h
LCDDATA14_S18C2_POSITION                 equ 0002h
LCDDATA14_S18C2_SIZE                     equ 0001h
LCDDATA14_S18C2_LENGTH                   equ 0001h
LCDDATA14_S18C2_MASK                     equ 0004h
LCDDATA14_S19C2_POSN                     equ 0003h
LCDDATA14_S19C2_POSITION                 equ 0003h
LCDDATA14_S19C2_SIZE                     equ 0001h
LCDDATA14_S19C2_LENGTH                   equ 0001h
LCDDATA14_S19C2_MASK                     equ 0008h
LCDDATA14_S20C2_POSN                     equ 0004h
LCDDATA14_S20C2_POSITION                 equ 0004h
LCDDATA14_S20C2_SIZE                     equ 0001h
LCDDATA14_S20C2_LENGTH                   equ 0001h
LCDDATA14_S20C2_MASK                     equ 0010h
LCDDATA14_S21C2_POSN                     equ 0005h
LCDDATA14_S21C2_POSITION                 equ 0005h
LCDDATA14_S21C2_SIZE                     equ 0001h
LCDDATA14_S21C2_LENGTH                   equ 0001h
LCDDATA14_S21C2_MASK                     equ 0020h
LCDDATA14_S22C2_POSN                     equ 0006h
LCDDATA14_S22C2_POSITION                 equ 0006h
LCDDATA14_S22C2_SIZE                     equ 0001h
LCDDATA14_S22C2_LENGTH                   equ 0001h
LCDDATA14_S22C2_MASK                     equ 0040h
LCDDATA14_S23C2_POSN                     equ 0007h
LCDDATA14_S23C2_POSITION                 equ 0007h
LCDDATA14_S23C2_SIZE                     equ 0001h
LCDDATA14_S23C2_LENGTH                   equ 0001h
LCDDATA14_S23C2_MASK                     equ 0080h
LCDDATA14_SEG16COM2_POSN                 equ 0000h
LCDDATA14_SEG16COM2_POSITION             equ 0000h
LCDDATA14_SEG16COM2_SIZE                 equ 0001h
LCDDATA14_SEG16COM2_LENGTH               equ 0001h
LCDDATA14_SEG16COM2_MASK                 equ 0001h
LCDDATA14_SEG17COM2_POSN                 equ 0001h
LCDDATA14_SEG17COM2_POSITION             equ 0001h
LCDDATA14_SEG17COM2_SIZE                 equ 0001h
LCDDATA14_SEG17COM2_LENGTH               equ 0001h
LCDDATA14_SEG17COM2_MASK                 equ 0002h
LCDDATA14_SEG18COM2_POSN                 equ 0002h
LCDDATA14_SEG18COM2_POSITION             equ 0002h
LCDDATA14_SEG18COM2_SIZE                 equ 0001h
LCDDATA14_SEG18COM2_LENGTH               equ 0001h
LCDDATA14_SEG18COM2_MASK                 equ 0004h
LCDDATA14_SEG19COM2_POSN                 equ 0003h
LCDDATA14_SEG19COM2_POSITION             equ 0003h
LCDDATA14_SEG19COM2_SIZE                 equ 0001h
LCDDATA14_SEG19COM2_LENGTH               equ 0001h
LCDDATA14_SEG19COM2_MASK                 equ 0008h
LCDDATA14_SEG20COM2_POSN                 equ 0004h
LCDDATA14_SEG20COM2_POSITION             equ 0004h
LCDDATA14_SEG20COM2_SIZE                 equ 0001h
LCDDATA14_SEG20COM2_LENGTH               equ 0001h
LCDDATA14_SEG20COM2_MASK                 equ 0010h
LCDDATA14_SEG21COM2_POSN                 equ 0005h
LCDDATA14_SEG21COM2_POSITION             equ 0005h
LCDDATA14_SEG21COM2_SIZE                 equ 0001h
LCDDATA14_SEG21COM2_LENGTH               equ 0001h
LCDDATA14_SEG21COM2_MASK                 equ 0020h
LCDDATA14_SEG22COM2_POSN                 equ 0006h
LCDDATA14_SEG22COM2_POSITION             equ 0006h
LCDDATA14_SEG22COM2_SIZE                 equ 0001h
LCDDATA14_SEG22COM2_LENGTH               equ 0001h
LCDDATA14_SEG22COM2_MASK                 equ 0040h
LCDDATA14_SEG23COM2_POSN                 equ 0007h
LCDDATA14_SEG23COM2_POSITION             equ 0007h
LCDDATA14_SEG23COM2_SIZE                 equ 0001h
LCDDATA14_SEG23COM2_LENGTH               equ 0001h
LCDDATA14_SEG23COM2_MASK                 equ 0080h
LCDDATA14_MSK0_POSN                      equ 0000h
LCDDATA14_MSK0_POSITION                  equ 0000h
LCDDATA14_MSK0_SIZE                      equ 0001h
LCDDATA14_MSK0_LENGTH                    equ 0001h
LCDDATA14_MSK0_MASK                      equ 0001h
LCDDATA14_MSK1_POSN                      equ 0001h
LCDDATA14_MSK1_POSITION                  equ 0001h
LCDDATA14_MSK1_SIZE                      equ 0001h
LCDDATA14_MSK1_LENGTH                    equ 0001h
LCDDATA14_MSK1_MASK                      equ 0002h
LCDDATA14_MSK2_POSN                      equ 0002h
LCDDATA14_MSK2_POSITION                  equ 0002h
LCDDATA14_MSK2_SIZE                      equ 0001h
LCDDATA14_MSK2_LENGTH                    equ 0001h
LCDDATA14_MSK2_MASK                      equ 0004h
LCDDATA14_MSK3_POSN                      equ 0003h
LCDDATA14_MSK3_POSITION                  equ 0003h
LCDDATA14_MSK3_SIZE                      equ 0001h
LCDDATA14_MSK3_LENGTH                    equ 0001h
LCDDATA14_MSK3_MASK                      equ 0008h
LCDDATA14_MSK4_POSN                      equ 0004h
LCDDATA14_MSK4_POSITION                  equ 0004h
LCDDATA14_MSK4_SIZE                      equ 0001h
LCDDATA14_MSK4_LENGTH                    equ 0001h
LCDDATA14_MSK4_MASK                      equ 0010h
LCDDATA14_MSK5_POSN                      equ 0005h
LCDDATA14_MSK5_POSITION                  equ 0005h
LCDDATA14_MSK5_SIZE                      equ 0001h
LCDDATA14_MSK5_LENGTH                    equ 0001h
LCDDATA14_MSK5_MASK                      equ 0020h
LCDDATA14_MSK6_POSN                      equ 0006h
LCDDATA14_MSK6_POSITION                  equ 0006h
LCDDATA14_MSK6_SIZE                      equ 0001h
LCDDATA14_MSK6_LENGTH                    equ 0001h
LCDDATA14_MSK6_MASK                      equ 0040h
LCDDATA14_MSK7_POSN                      equ 0007h
LCDDATA14_MSK7_POSITION                  equ 0007h
LCDDATA14_MSK7_SIZE                      equ 0001h
LCDDATA14_MSK7_LENGTH                    equ 0001h
LCDDATA14_MSK7_MASK                      equ 0080h

// Register: LCDDATA15
#define LCDDATA15 LCDDATA15
LCDDATA15                                equ 0F75h
// bitfield definitions
LCDDATA15_LCDDATA15_POSN                 equ 0000h
LCDDATA15_LCDDATA15_POSITION             equ 0000h
LCDDATA15_LCDDATA15_SIZE                 equ 0008h
LCDDATA15_LCDDATA15_LENGTH               equ 0008h
LCDDATA15_LCDDATA15_MASK                 equ 00FFh
LCDDATA15_S24C2_POSN                     equ 0000h
LCDDATA15_S24C2_POSITION                 equ 0000h
LCDDATA15_S24C2_SIZE                     equ 0001h
LCDDATA15_S24C2_LENGTH                   equ 0001h
LCDDATA15_S24C2_MASK                     equ 0001h
LCDDATA15_S25C2_POSN                     equ 0001h
LCDDATA15_S25C2_POSITION                 equ 0001h
LCDDATA15_S25C2_SIZE                     equ 0001h
LCDDATA15_S25C2_LENGTH                   equ 0001h
LCDDATA15_S25C2_MASK                     equ 0002h
LCDDATA15_S26C2_POSN                     equ 0002h
LCDDATA15_S26C2_POSITION                 equ 0002h
LCDDATA15_S26C2_SIZE                     equ 0001h
LCDDATA15_S26C2_LENGTH                   equ 0001h
LCDDATA15_S26C2_MASK                     equ 0004h
LCDDATA15_S27C2_POSN                     equ 0003h
LCDDATA15_S27C2_POSITION                 equ 0003h
LCDDATA15_S27C2_SIZE                     equ 0001h
LCDDATA15_S27C2_LENGTH                   equ 0001h
LCDDATA15_S27C2_MASK                     equ 0008h
LCDDATA15_S28C2_POSN                     equ 0004h
LCDDATA15_S28C2_POSITION                 equ 0004h
LCDDATA15_S28C2_SIZE                     equ 0001h
LCDDATA15_S28C2_LENGTH                   equ 0001h
LCDDATA15_S28C2_MASK                     equ 0010h
LCDDATA15_S29C2_POSN                     equ 0005h
LCDDATA15_S29C2_POSITION                 equ 0005h
LCDDATA15_S29C2_SIZE                     equ 0001h
LCDDATA15_S29C2_LENGTH                   equ 0001h
LCDDATA15_S29C2_MASK                     equ 0020h
LCDDATA15_S30C2_POSN                     equ 0006h
LCDDATA15_S30C2_POSITION                 equ 0006h
LCDDATA15_S30C2_SIZE                     equ 0001h
LCDDATA15_S30C2_LENGTH                   equ 0001h
LCDDATA15_S30C2_MASK                     equ 0040h
LCDDATA15_S31C2_POSN                     equ 0007h
LCDDATA15_S31C2_POSITION                 equ 0007h
LCDDATA15_S31C2_SIZE                     equ 0001h
LCDDATA15_S31C2_LENGTH                   equ 0001h
LCDDATA15_S31C2_MASK                     equ 0080h
LCDDATA15_SEG24COM2_POSN                 equ 0000h
LCDDATA15_SEG24COM2_POSITION             equ 0000h
LCDDATA15_SEG24COM2_SIZE                 equ 0001h
LCDDATA15_SEG24COM2_LENGTH               equ 0001h
LCDDATA15_SEG24COM2_MASK                 equ 0001h
LCDDATA15_SEG25COM2_POSN                 equ 0001h
LCDDATA15_SEG25COM2_POSITION             equ 0001h
LCDDATA15_SEG25COM2_SIZE                 equ 0001h
LCDDATA15_SEG25COM2_LENGTH               equ 0001h
LCDDATA15_SEG25COM2_MASK                 equ 0002h
LCDDATA15_SEG26COM2_POSN                 equ 0002h
LCDDATA15_SEG26COM2_POSITION             equ 0002h
LCDDATA15_SEG26COM2_SIZE                 equ 0001h
LCDDATA15_SEG26COM2_LENGTH               equ 0001h
LCDDATA15_SEG26COM2_MASK                 equ 0004h
LCDDATA15_SEG27COM2_POSN                 equ 0003h
LCDDATA15_SEG27COM2_POSITION             equ 0003h
LCDDATA15_SEG27COM2_SIZE                 equ 0001h
LCDDATA15_SEG27COM2_LENGTH               equ 0001h
LCDDATA15_SEG27COM2_MASK                 equ 0008h
LCDDATA15_SEG28COM2_POSN                 equ 0004h
LCDDATA15_SEG28COM2_POSITION             equ 0004h
LCDDATA15_SEG28COM2_SIZE                 equ 0001h
LCDDATA15_SEG28COM2_LENGTH               equ 0001h
LCDDATA15_SEG28COM2_MASK                 equ 0010h
LCDDATA15_SEG29COM2_POSN                 equ 0005h
LCDDATA15_SEG29COM2_POSITION             equ 0005h
LCDDATA15_SEG29COM2_SIZE                 equ 0001h
LCDDATA15_SEG29COM2_LENGTH               equ 0001h
LCDDATA15_SEG29COM2_MASK                 equ 0020h
LCDDATA15_SEG30COM2_POSN                 equ 0006h
LCDDATA15_SEG30COM2_POSITION             equ 0006h
LCDDATA15_SEG30COM2_SIZE                 equ 0001h
LCDDATA15_SEG30COM2_LENGTH               equ 0001h
LCDDATA15_SEG30COM2_MASK                 equ 0040h
LCDDATA15_SEG31COM2_POSN                 equ 0007h
LCDDATA15_SEG31COM2_POSITION             equ 0007h
LCDDATA15_SEG31COM2_SIZE                 equ 0001h
LCDDATA15_SEG31COM2_LENGTH               equ 0001h
LCDDATA15_SEG31COM2_MASK                 equ 0080h

// Register: LCDDATA16
#define LCDDATA16 LCDDATA16
LCDDATA16                                equ 0F76h
// bitfield definitions
LCDDATA16_LCDDATA16_POSN                 equ 0000h
LCDDATA16_LCDDATA16_POSITION             equ 0000h
LCDDATA16_LCDDATA16_SIZE                 equ 0008h
LCDDATA16_LCDDATA16_LENGTH               equ 0008h
LCDDATA16_LCDDATA16_MASK                 equ 00FFh
LCDDATA16_S32C2_POSN                     equ 0000h
LCDDATA16_S32C2_POSITION                 equ 0000h
LCDDATA16_S32C2_SIZE                     equ 0001h
LCDDATA16_S32C2_LENGTH                   equ 0001h
LCDDATA16_S32C2_MASK                     equ 0001h
LCDDATA16_SEG32COM2_POSN                 equ 0000h
LCDDATA16_SEG32COM2_POSITION             equ 0000h
LCDDATA16_SEG32COM2_SIZE                 equ 0001h
LCDDATA16_SEG32COM2_LENGTH               equ 0001h
LCDDATA16_SEG32COM2_MASK                 equ 0001h
LCDDATA16_T4CKPS016_POSN                 equ 0000h
LCDDATA16_T4CKPS016_POSITION             equ 0000h
LCDDATA16_T4CKPS016_SIZE                 equ 0001h
LCDDATA16_T4CKPS016_LENGTH               equ 0001h
LCDDATA16_T4CKPS016_MASK                 equ 0001h
LCDDATA16_T4CKPS116_POSN                 equ 0001h
LCDDATA16_T4CKPS116_POSITION             equ 0001h
LCDDATA16_T4CKPS116_SIZE                 equ 0001h
LCDDATA16_T4CKPS116_LENGTH               equ 0001h
LCDDATA16_T4CKPS116_MASK                 equ 0002h
LCDDATA16_T4OUTPS016_POSN                equ 0003h
LCDDATA16_T4OUTPS016_POSITION            equ 0003h
LCDDATA16_T4OUTPS016_SIZE                equ 0001h
LCDDATA16_T4OUTPS016_LENGTH              equ 0001h
LCDDATA16_T4OUTPS016_MASK                equ 0008h
LCDDATA16_T4OUTPS116_POSN                equ 0004h
LCDDATA16_T4OUTPS116_POSITION            equ 0004h
LCDDATA16_T4OUTPS116_SIZE                equ 0001h
LCDDATA16_T4OUTPS116_LENGTH              equ 0001h
LCDDATA16_T4OUTPS116_MASK                equ 0010h
LCDDATA16_T4OUTPS216_POSN                equ 0005h
LCDDATA16_T4OUTPS216_POSITION            equ 0005h
LCDDATA16_T4OUTPS216_SIZE                equ 0001h
LCDDATA16_T4OUTPS216_LENGTH              equ 0001h
LCDDATA16_T4OUTPS216_MASK                equ 0020h
LCDDATA16_T4OUTPS316_POSN                equ 0006h
LCDDATA16_T4OUTPS316_POSITION            equ 0006h
LCDDATA16_T4OUTPS316_SIZE                equ 0001h
LCDDATA16_T4OUTPS316_LENGTH              equ 0001h
LCDDATA16_T4OUTPS316_MASK                equ 0040h

// Register: LCDDATA18
#define LCDDATA18 LCDDATA18
LCDDATA18                                equ 0F78h
// bitfield definitions
LCDDATA18_LCDDATA18_POSN                 equ 0000h
LCDDATA18_LCDDATA18_POSITION             equ 0000h
LCDDATA18_LCDDATA18_SIZE                 equ 0008h
LCDDATA18_LCDDATA18_LENGTH               equ 0008h
LCDDATA18_LCDDATA18_MASK                 equ 00FFh
LCDDATA18_S00C3_POSN                     equ 0000h
LCDDATA18_S00C3_POSITION                 equ 0000h
LCDDATA18_S00C3_SIZE                     equ 0001h
LCDDATA18_S00C3_LENGTH                   equ 0001h
LCDDATA18_S00C3_MASK                     equ 0001h
LCDDATA18_S01C3_POSN                     equ 0001h
LCDDATA18_S01C3_POSITION                 equ 0001h
LCDDATA18_S01C3_SIZE                     equ 0001h
LCDDATA18_S01C3_LENGTH                   equ 0001h
LCDDATA18_S01C3_MASK                     equ 0002h
LCDDATA18_S02C3_POSN                     equ 0002h
LCDDATA18_S02C3_POSITION                 equ 0002h
LCDDATA18_S02C3_SIZE                     equ 0001h
LCDDATA18_S02C3_LENGTH                   equ 0001h
LCDDATA18_S02C3_MASK                     equ 0004h
LCDDATA18_S03C3_POSN                     equ 0003h
LCDDATA18_S03C3_POSITION                 equ 0003h
LCDDATA18_S03C3_SIZE                     equ 0001h
LCDDATA18_S03C3_LENGTH                   equ 0001h
LCDDATA18_S03C3_MASK                     equ 0008h
LCDDATA18_S04C3_POSN                     equ 0004h
LCDDATA18_S04C3_POSITION                 equ 0004h
LCDDATA18_S04C3_SIZE                     equ 0001h
LCDDATA18_S04C3_LENGTH                   equ 0001h
LCDDATA18_S04C3_MASK                     equ 0010h
LCDDATA18_S05C3_POSN                     equ 0005h
LCDDATA18_S05C3_POSITION                 equ 0005h
LCDDATA18_S05C3_SIZE                     equ 0001h
LCDDATA18_S05C3_LENGTH                   equ 0001h
LCDDATA18_S05C3_MASK                     equ 0020h
LCDDATA18_S06C3_POSN                     equ 0006h
LCDDATA18_S06C3_POSITION                 equ 0006h
LCDDATA18_S06C3_SIZE                     equ 0001h
LCDDATA18_S06C3_LENGTH                   equ 0001h
LCDDATA18_S06C3_MASK                     equ 0040h
LCDDATA18_S07C3_POSN                     equ 0007h
LCDDATA18_S07C3_POSITION                 equ 0007h
LCDDATA18_S07C3_SIZE                     equ 0001h
LCDDATA18_S07C3_LENGTH                   equ 0001h
LCDDATA18_S07C3_MASK                     equ 0080h
LCDDATA18_SEG00COM3_POSN                 equ 0000h
LCDDATA18_SEG00COM3_POSITION             equ 0000h
LCDDATA18_SEG00COM3_SIZE                 equ 0001h
LCDDATA18_SEG00COM3_LENGTH               equ 0001h
LCDDATA18_SEG00COM3_MASK                 equ 0001h
LCDDATA18_SEG01COM3_POSN                 equ 0001h
LCDDATA18_SEG01COM3_POSITION             equ 0001h
LCDDATA18_SEG01COM3_SIZE                 equ 0001h
LCDDATA18_SEG01COM3_LENGTH               equ 0001h
LCDDATA18_SEG01COM3_MASK                 equ 0002h
LCDDATA18_SEG02COM3_POSN                 equ 0002h
LCDDATA18_SEG02COM3_POSITION             equ 0002h
LCDDATA18_SEG02COM3_SIZE                 equ 0001h
LCDDATA18_SEG02COM3_LENGTH               equ 0001h
LCDDATA18_SEG02COM3_MASK                 equ 0004h
LCDDATA18_SEG03COM3_POSN                 equ 0003h
LCDDATA18_SEG03COM3_POSITION             equ 0003h
LCDDATA18_SEG03COM3_SIZE                 equ 0001h
LCDDATA18_SEG03COM3_LENGTH               equ 0001h
LCDDATA18_SEG03COM3_MASK                 equ 0008h
LCDDATA18_SEG04COM3_POSN                 equ 0004h
LCDDATA18_SEG04COM3_POSITION             equ 0004h
LCDDATA18_SEG04COM3_SIZE                 equ 0001h
LCDDATA18_SEG04COM3_LENGTH               equ 0001h
LCDDATA18_SEG04COM3_MASK                 equ 0010h
LCDDATA18_SEG05COM3_POSN                 equ 0005h
LCDDATA18_SEG05COM3_POSITION             equ 0005h
LCDDATA18_SEG05COM3_SIZE                 equ 0001h
LCDDATA18_SEG05COM3_LENGTH               equ 0001h
LCDDATA18_SEG05COM3_MASK                 equ 0020h
LCDDATA18_SEG06COM3_POSN                 equ 0006h
LCDDATA18_SEG06COM3_POSITION             equ 0006h
LCDDATA18_SEG06COM3_SIZE                 equ 0001h
LCDDATA18_SEG06COM3_LENGTH               equ 0001h
LCDDATA18_SEG06COM3_MASK                 equ 0040h
LCDDATA18_SEG07COM3_POSN                 equ 0007h
LCDDATA18_SEG07COM3_POSITION             equ 0007h
LCDDATA18_SEG07COM3_SIZE                 equ 0001h
LCDDATA18_SEG07COM3_LENGTH               equ 0001h
LCDDATA18_SEG07COM3_MASK                 equ 0080h
LCDDATA18_S0C3_POSN                      equ 0000h
LCDDATA18_S0C3_POSITION                  equ 0000h
LCDDATA18_S0C3_SIZE                      equ 0001h
LCDDATA18_S0C3_LENGTH                    equ 0001h
LCDDATA18_S0C3_MASK                      equ 0001h
LCDDATA18_S1C3_POSN                      equ 0001h
LCDDATA18_S1C3_POSITION                  equ 0001h
LCDDATA18_S1C3_SIZE                      equ 0001h
LCDDATA18_S1C3_LENGTH                    equ 0001h
LCDDATA18_S1C3_MASK                      equ 0002h
LCDDATA18_S2C3_POSN                      equ 0002h
LCDDATA18_S2C3_POSITION                  equ 0002h
LCDDATA18_S2C3_SIZE                      equ 0001h
LCDDATA18_S2C3_LENGTH                    equ 0001h
LCDDATA18_S2C3_MASK                      equ 0004h
LCDDATA18_S3C3_POSN                      equ 0003h
LCDDATA18_S3C3_POSITION                  equ 0003h
LCDDATA18_S3C3_SIZE                      equ 0001h
LCDDATA18_S3C3_LENGTH                    equ 0001h
LCDDATA18_S3C3_MASK                      equ 0008h
LCDDATA18_S4C3_POSN                      equ 0004h
LCDDATA18_S4C3_POSITION                  equ 0004h
LCDDATA18_S4C3_SIZE                      equ 0001h
LCDDATA18_S4C3_LENGTH                    equ 0001h
LCDDATA18_S4C3_MASK                      equ 0010h
LCDDATA18_S5C3_POSN                      equ 0005h
LCDDATA18_S5C3_POSITION                  equ 0005h
LCDDATA18_S5C3_SIZE                      equ 0001h
LCDDATA18_S5C3_LENGTH                    equ 0001h
LCDDATA18_S5C3_MASK                      equ 0020h
LCDDATA18_S6C3_POSN                      equ 0006h
LCDDATA18_S6C3_POSITION                  equ 0006h
LCDDATA18_S6C3_SIZE                      equ 0001h
LCDDATA18_S6C3_LENGTH                    equ 0001h
LCDDATA18_S6C3_MASK                      equ 0040h
LCDDATA18_S7C3_POSN                      equ 0007h
LCDDATA18_S7C3_POSITION                  equ 0007h
LCDDATA18_S7C3_SIZE                      equ 0001h
LCDDATA18_S7C3_LENGTH                    equ 0001h
LCDDATA18_S7C3_MASK                      equ 0080h

// Register: LCDDATA19
#define LCDDATA19 LCDDATA19
LCDDATA19                                equ 0F79h
// bitfield definitions
LCDDATA19_LCDDATA19_POSN                 equ 0000h
LCDDATA19_LCDDATA19_POSITION             equ 0000h
LCDDATA19_LCDDATA19_SIZE                 equ 0008h
LCDDATA19_LCDDATA19_LENGTH               equ 0008h
LCDDATA19_LCDDATA19_MASK                 equ 00FFh
LCDDATA19_S8C3_POSN                      equ 0000h
LCDDATA19_S8C3_POSITION                  equ 0000h
LCDDATA19_S8C3_SIZE                      equ 0001h
LCDDATA19_S8C3_LENGTH                    equ 0001h
LCDDATA19_S8C3_MASK                      equ 0001h
LCDDATA19_S9C3_POSN                      equ 0001h
LCDDATA19_S9C3_POSITION                  equ 0001h
LCDDATA19_S9C3_SIZE                      equ 0001h
LCDDATA19_S9C3_LENGTH                    equ 0001h
LCDDATA19_S9C3_MASK                      equ 0002h
LCDDATA19_S10C3_POSN                     equ 0002h
LCDDATA19_S10C3_POSITION                 equ 0002h
LCDDATA19_S10C3_SIZE                     equ 0001h
LCDDATA19_S10C3_LENGTH                   equ 0001h
LCDDATA19_S10C3_MASK                     equ 0004h
LCDDATA19_S11C3_POSN                     equ 0003h
LCDDATA19_S11C3_POSITION                 equ 0003h
LCDDATA19_S11C3_SIZE                     equ 0001h
LCDDATA19_S11C3_LENGTH                   equ 0001h
LCDDATA19_S11C3_MASK                     equ 0008h
LCDDATA19_S12C3_POSN                     equ 0004h
LCDDATA19_S12C3_POSITION                 equ 0004h
LCDDATA19_S12C3_SIZE                     equ 0001h
LCDDATA19_S12C3_LENGTH                   equ 0001h
LCDDATA19_S12C3_MASK                     equ 0010h
LCDDATA19_S13C3_POSN                     equ 0005h
LCDDATA19_S13C3_POSITION                 equ 0005h
LCDDATA19_S13C3_SIZE                     equ 0001h
LCDDATA19_S13C3_LENGTH                   equ 0001h
LCDDATA19_S13C3_MASK                     equ 0020h
LCDDATA19_S14C3_POSN                     equ 0006h
LCDDATA19_S14C3_POSITION                 equ 0006h
LCDDATA19_S14C3_SIZE                     equ 0001h
LCDDATA19_S14C3_LENGTH                   equ 0001h
LCDDATA19_S14C3_MASK                     equ 0040h
LCDDATA19_S15C3_POSN                     equ 0007h
LCDDATA19_S15C3_POSITION                 equ 0007h
LCDDATA19_S15C3_SIZE                     equ 0001h
LCDDATA19_S15C3_LENGTH                   equ 0001h
LCDDATA19_S15C3_MASK                     equ 0080h
LCDDATA19_SEG8COM3_POSN                  equ 0000h
LCDDATA19_SEG8COM3_POSITION              equ 0000h
LCDDATA19_SEG8COM3_SIZE                  equ 0001h
LCDDATA19_SEG8COM3_LENGTH                equ 0001h
LCDDATA19_SEG8COM3_MASK                  equ 0001h
LCDDATA19_SEG9COM3_POSN                  equ 0001h
LCDDATA19_SEG9COM3_POSITION              equ 0001h
LCDDATA19_SEG9COM3_SIZE                  equ 0001h
LCDDATA19_SEG9COM3_LENGTH                equ 0001h
LCDDATA19_SEG9COM3_MASK                  equ 0002h
LCDDATA19_SEG10COM3_POSN                 equ 0002h
LCDDATA19_SEG10COM3_POSITION             equ 0002h
LCDDATA19_SEG10COM3_SIZE                 equ 0001h
LCDDATA19_SEG10COM3_LENGTH               equ 0001h
LCDDATA19_SEG10COM3_MASK                 equ 0004h
LCDDATA19_SEG11COM3_POSN                 equ 0003h
LCDDATA19_SEG11COM3_POSITION             equ 0003h
LCDDATA19_SEG11COM3_SIZE                 equ 0001h
LCDDATA19_SEG11COM3_LENGTH               equ 0001h
LCDDATA19_SEG11COM3_MASK                 equ 0008h
LCDDATA19_SEG12COM3_POSN                 equ 0004h
LCDDATA19_SEG12COM3_POSITION             equ 0004h
LCDDATA19_SEG12COM3_SIZE                 equ 0001h
LCDDATA19_SEG12COM3_LENGTH               equ 0001h
LCDDATA19_SEG12COM3_MASK                 equ 0010h
LCDDATA19_SEG13COM3_POSN                 equ 0005h
LCDDATA19_SEG13COM3_POSITION             equ 0005h
LCDDATA19_SEG13COM3_SIZE                 equ 0001h
LCDDATA19_SEG13COM3_LENGTH               equ 0001h
LCDDATA19_SEG13COM3_MASK                 equ 0020h
LCDDATA19_SEG14COM3_POSN                 equ 0006h
LCDDATA19_SEG14COM3_POSITION             equ 0006h
LCDDATA19_SEG14COM3_SIZE                 equ 0001h
LCDDATA19_SEG14COM3_LENGTH               equ 0001h
LCDDATA19_SEG14COM3_MASK                 equ 0040h
LCDDATA19_SEG15COM3_POSN                 equ 0007h
LCDDATA19_SEG15COM3_POSITION             equ 0007h
LCDDATA19_SEG15COM3_SIZE                 equ 0001h
LCDDATA19_SEG15COM3_LENGTH               equ 0001h
LCDDATA19_SEG15COM3_MASK                 equ 0080h
LCDDATA19_S08C3_POSN                     equ 0000h
LCDDATA19_S08C3_POSITION                 equ 0000h
LCDDATA19_S08C3_SIZE                     equ 0001h
LCDDATA19_S08C3_LENGTH                   equ 0001h
LCDDATA19_S08C3_MASK                     equ 0001h
LCDDATA19_S09C3_POSN                     equ 0001h
LCDDATA19_S09C3_POSITION                 equ 0001h
LCDDATA19_S09C3_SIZE                     equ 0001h
LCDDATA19_S09C3_LENGTH                   equ 0001h
LCDDATA19_S09C3_MASK                     equ 0002h
LCDDATA19_T3CKPS019_POSN                 equ 0004h
LCDDATA19_T3CKPS019_POSITION             equ 0004h
LCDDATA19_T3CKPS019_SIZE                 equ 0001h
LCDDATA19_T3CKPS019_LENGTH               equ 0001h
LCDDATA19_T3CKPS019_MASK                 equ 0010h
LCDDATA19_T3CKPS119_POSN                 equ 0005h
LCDDATA19_T3CKPS119_POSITION             equ 0005h
LCDDATA19_T3CKPS119_SIZE                 equ 0001h
LCDDATA19_T3CKPS119_LENGTH               equ 0001h
LCDDATA19_T3CKPS119_MASK                 equ 0020h
LCDDATA19_TMR3CS019_POSN                 equ 0006h
LCDDATA19_TMR3CS019_POSITION             equ 0006h
LCDDATA19_TMR3CS019_SIZE                 equ 0001h
LCDDATA19_TMR3CS019_LENGTH               equ 0001h
LCDDATA19_TMR3CS019_MASK                 equ 0040h
LCDDATA19_TMR3CS119_POSN                 equ 0007h
LCDDATA19_TMR3CS119_POSITION             equ 0007h
LCDDATA19_TMR3CS119_SIZE                 equ 0001h
LCDDATA19_TMR3CS119_LENGTH               equ 0001h
LCDDATA19_TMR3CS119_MASK                 equ 0080h

// Register: LCDDATA20
#define LCDDATA20 LCDDATA20
LCDDATA20                                equ 0F7Ah
// bitfield definitions
LCDDATA20_LCDDATA20_POSN                 equ 0000h
LCDDATA20_LCDDATA20_POSITION             equ 0000h
LCDDATA20_LCDDATA20_SIZE                 equ 0008h
LCDDATA20_LCDDATA20_LENGTH               equ 0008h
LCDDATA20_LCDDATA20_MASK                 equ 00FFh
LCDDATA20_S16C3_POSN                     equ 0000h
LCDDATA20_S16C3_POSITION                 equ 0000h
LCDDATA20_S16C3_SIZE                     equ 0001h
LCDDATA20_S16C3_LENGTH                   equ 0001h
LCDDATA20_S16C3_MASK                     equ 0001h
LCDDATA20_S17C3_POSN                     equ 0001h
LCDDATA20_S17C3_POSITION                 equ 0001h
LCDDATA20_S17C3_SIZE                     equ 0001h
LCDDATA20_S17C3_LENGTH                   equ 0001h
LCDDATA20_S17C3_MASK                     equ 0002h
LCDDATA20_S18C3_POSN                     equ 0002h
LCDDATA20_S18C3_POSITION                 equ 0002h
LCDDATA20_S18C3_SIZE                     equ 0001h
LCDDATA20_S18C3_LENGTH                   equ 0001h
LCDDATA20_S18C3_MASK                     equ 0004h
LCDDATA20_S19C3_POSN                     equ 0003h
LCDDATA20_S19C3_POSITION                 equ 0003h
LCDDATA20_S19C3_SIZE                     equ 0001h
LCDDATA20_S19C3_LENGTH                   equ 0001h
LCDDATA20_S19C3_MASK                     equ 0008h
LCDDATA20_S20C3_POSN                     equ 0004h
LCDDATA20_S20C3_POSITION                 equ 0004h
LCDDATA20_S20C3_SIZE                     equ 0001h
LCDDATA20_S20C3_LENGTH                   equ 0001h
LCDDATA20_S20C3_MASK                     equ 0010h
LCDDATA20_S21C3_POSN                     equ 0005h
LCDDATA20_S21C3_POSITION                 equ 0005h
LCDDATA20_S21C3_SIZE                     equ 0001h
LCDDATA20_S21C3_LENGTH                   equ 0001h
LCDDATA20_S21C3_MASK                     equ 0020h
LCDDATA20_S22C3_POSN                     equ 0006h
LCDDATA20_S22C3_POSITION                 equ 0006h
LCDDATA20_S22C3_SIZE                     equ 0001h
LCDDATA20_S22C3_LENGTH                   equ 0001h
LCDDATA20_S22C3_MASK                     equ 0040h
LCDDATA20_S23C3_POSN                     equ 0007h
LCDDATA20_S23C3_POSITION                 equ 0007h
LCDDATA20_S23C3_SIZE                     equ 0001h
LCDDATA20_S23C3_LENGTH                   equ 0001h
LCDDATA20_S23C3_MASK                     equ 0080h
LCDDATA20_SEG16COM3_POSN                 equ 0000h
LCDDATA20_SEG16COM3_POSITION             equ 0000h
LCDDATA20_SEG16COM3_SIZE                 equ 0001h
LCDDATA20_SEG16COM3_LENGTH               equ 0001h
LCDDATA20_SEG16COM3_MASK                 equ 0001h
LCDDATA20_SEG17COM3_POSN                 equ 0001h
LCDDATA20_SEG17COM3_POSITION             equ 0001h
LCDDATA20_SEG17COM3_SIZE                 equ 0001h
LCDDATA20_SEG17COM3_LENGTH               equ 0001h
LCDDATA20_SEG17COM3_MASK                 equ 0002h
LCDDATA20_SEG18COM3_POSN                 equ 0002h
LCDDATA20_SEG18COM3_POSITION             equ 0002h
LCDDATA20_SEG18COM3_SIZE                 equ 0001h
LCDDATA20_SEG18COM3_LENGTH               equ 0001h
LCDDATA20_SEG18COM3_MASK                 equ 0004h
LCDDATA20_SEG19COM3_POSN                 equ 0003h
LCDDATA20_SEG19COM3_POSITION             equ 0003h
LCDDATA20_SEG19COM3_SIZE                 equ 0001h
LCDDATA20_SEG19COM3_LENGTH               equ 0001h
LCDDATA20_SEG19COM3_MASK                 equ 0008h
LCDDATA20_SEG20COM3_POSN                 equ 0004h
LCDDATA20_SEG20COM3_POSITION             equ 0004h
LCDDATA20_SEG20COM3_SIZE                 equ 0001h
LCDDATA20_SEG20COM3_LENGTH               equ 0001h
LCDDATA20_SEG20COM3_MASK                 equ 0010h
LCDDATA20_SEG21COM3_POSN                 equ 0005h
LCDDATA20_SEG21COM3_POSITION             equ 0005h
LCDDATA20_SEG21COM3_SIZE                 equ 0001h
LCDDATA20_SEG21COM3_LENGTH               equ 0001h
LCDDATA20_SEG21COM3_MASK                 equ 0020h
LCDDATA20_SEG22COM3_POSN                 equ 0006h
LCDDATA20_SEG22COM3_POSITION             equ 0006h
LCDDATA20_SEG22COM3_SIZE                 equ 0001h
LCDDATA20_SEG22COM3_LENGTH               equ 0001h
LCDDATA20_SEG22COM3_MASK                 equ 0040h
LCDDATA20_SEG23COM3_POSN                 equ 0007h
LCDDATA20_SEG23COM3_POSITION             equ 0007h
LCDDATA20_SEG23COM3_SIZE                 equ 0001h
LCDDATA20_SEG23COM3_LENGTH               equ 0001h
LCDDATA20_SEG23COM3_MASK                 equ 0080h

// Register: LCDDATA21
#define LCDDATA21 LCDDATA21
LCDDATA21                                equ 0F7Bh
// bitfield definitions
LCDDATA21_LCDDATA21_POSN                 equ 0000h
LCDDATA21_LCDDATA21_POSITION             equ 0000h
LCDDATA21_LCDDATA21_SIZE                 equ 0008h
LCDDATA21_LCDDATA21_LENGTH               equ 0008h
LCDDATA21_LCDDATA21_MASK                 equ 00FFh
LCDDATA21_S24C3_POSN                     equ 0000h
LCDDATA21_S24C3_POSITION                 equ 0000h
LCDDATA21_S24C3_SIZE                     equ 0001h
LCDDATA21_S24C3_LENGTH                   equ 0001h
LCDDATA21_S24C3_MASK                     equ 0001h
LCDDATA21_S25C3_POSN                     equ 0001h
LCDDATA21_S25C3_POSITION                 equ 0001h
LCDDATA21_S25C3_SIZE                     equ 0001h
LCDDATA21_S25C3_LENGTH                   equ 0001h
LCDDATA21_S25C3_MASK                     equ 0002h
LCDDATA21_S26C3_POSN                     equ 0002h
LCDDATA21_S26C3_POSITION                 equ 0002h
LCDDATA21_S26C3_SIZE                     equ 0001h
LCDDATA21_S26C3_LENGTH                   equ 0001h
LCDDATA21_S26C3_MASK                     equ 0004h
LCDDATA21_S27C3_POSN                     equ 0003h
LCDDATA21_S27C3_POSITION                 equ 0003h
LCDDATA21_S27C3_SIZE                     equ 0001h
LCDDATA21_S27C3_LENGTH                   equ 0001h
LCDDATA21_S27C3_MASK                     equ 0008h
LCDDATA21_S28C3_POSN                     equ 0004h
LCDDATA21_S28C3_POSITION                 equ 0004h
LCDDATA21_S28C3_SIZE                     equ 0001h
LCDDATA21_S28C3_LENGTH                   equ 0001h
LCDDATA21_S28C3_MASK                     equ 0010h
LCDDATA21_S29C3_POSN                     equ 0005h
LCDDATA21_S29C3_POSITION                 equ 0005h
LCDDATA21_S29C3_SIZE                     equ 0001h
LCDDATA21_S29C3_LENGTH                   equ 0001h
LCDDATA21_S29C3_MASK                     equ 0020h
LCDDATA21_S30C3_POSN                     equ 0006h
LCDDATA21_S30C3_POSITION                 equ 0006h
LCDDATA21_S30C3_SIZE                     equ 0001h
LCDDATA21_S30C3_LENGTH                   equ 0001h
LCDDATA21_S30C3_MASK                     equ 0040h
LCDDATA21_S31C3_POSN                     equ 0007h
LCDDATA21_S31C3_POSITION                 equ 0007h
LCDDATA21_S31C3_SIZE                     equ 0001h
LCDDATA21_S31C3_LENGTH                   equ 0001h
LCDDATA21_S31C3_MASK                     equ 0080h
LCDDATA21_SEG24COM3_POSN                 equ 0000h
LCDDATA21_SEG24COM3_POSITION             equ 0000h
LCDDATA21_SEG24COM3_SIZE                 equ 0001h
LCDDATA21_SEG24COM3_LENGTH               equ 0001h
LCDDATA21_SEG24COM3_MASK                 equ 0001h
LCDDATA21_SEG25COM3_POSN                 equ 0001h
LCDDATA21_SEG25COM3_POSITION             equ 0001h
LCDDATA21_SEG25COM3_SIZE                 equ 0001h
LCDDATA21_SEG25COM3_LENGTH               equ 0001h
LCDDATA21_SEG25COM3_MASK                 equ 0002h
LCDDATA21_SEG26COM3_POSN                 equ 0002h
LCDDATA21_SEG26COM3_POSITION             equ 0002h
LCDDATA21_SEG26COM3_SIZE                 equ 0001h
LCDDATA21_SEG26COM3_LENGTH               equ 0001h
LCDDATA21_SEG26COM3_MASK                 equ 0004h
LCDDATA21_SEG27COM3_POSN                 equ 0003h
LCDDATA21_SEG27COM3_POSITION             equ 0003h
LCDDATA21_SEG27COM3_SIZE                 equ 0001h
LCDDATA21_SEG27COM3_LENGTH               equ 0001h
LCDDATA21_SEG27COM3_MASK                 equ 0008h
LCDDATA21_SEG28COM3_POSN                 equ 0004h
LCDDATA21_SEG28COM3_POSITION             equ 0004h
LCDDATA21_SEG28COM3_SIZE                 equ 0001h
LCDDATA21_SEG28COM3_LENGTH               equ 0001h
LCDDATA21_SEG28COM3_MASK                 equ 0010h
LCDDATA21_SEG29COM3_POSN                 equ 0005h
LCDDATA21_SEG29COM3_POSITION             equ 0005h
LCDDATA21_SEG29COM3_SIZE                 equ 0001h
LCDDATA21_SEG29COM3_LENGTH               equ 0001h
LCDDATA21_SEG29COM3_MASK                 equ 0020h
LCDDATA21_SEG30COM3_POSN                 equ 0006h
LCDDATA21_SEG30COM3_POSITION             equ 0006h
LCDDATA21_SEG30COM3_SIZE                 equ 0001h
LCDDATA21_SEG30COM3_LENGTH               equ 0001h
LCDDATA21_SEG30COM3_MASK                 equ 0040h
LCDDATA21_SEG31COM3_POSN                 equ 0007h
LCDDATA21_SEG31COM3_POSITION             equ 0007h
LCDDATA21_SEG31COM3_SIZE                 equ 0001h
LCDDATA21_SEG31COM3_LENGTH               equ 0001h
LCDDATA21_SEG31COM3_MASK                 equ 0080h

// Register: LCDDATA22
#define LCDDATA22 LCDDATA22
LCDDATA22                                equ 0F7Ch
// bitfield definitions
LCDDATA22_LCDDATA22_POSN                 equ 0000h
LCDDATA22_LCDDATA22_POSITION             equ 0000h
LCDDATA22_LCDDATA22_SIZE                 equ 0008h
LCDDATA22_LCDDATA22_LENGTH               equ 0008h
LCDDATA22_LCDDATA22_MASK                 equ 00FFh
LCDDATA22_S32C3_POSN                     equ 0000h
LCDDATA22_S32C3_POSITION                 equ 0000h
LCDDATA22_S32C3_SIZE                     equ 0001h
LCDDATA22_S32C3_LENGTH                   equ 0001h
LCDDATA22_S32C3_MASK                     equ 0001h
LCDDATA22_SEG32COM3_POSN                 equ 0000h
LCDDATA22_SEG32COM3_POSITION             equ 0000h
LCDDATA22_SEG32COM3_SIZE                 equ 0001h
LCDDATA22_SEG32COM3_LENGTH               equ 0001h
LCDDATA22_SEG32COM3_MASK                 equ 0001h

// Register: BAUDCON1
#define BAUDCON1 BAUDCON1
BAUDCON1                                 equ 0F7Eh
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
BAUDCON1_RCMT_POSN                       equ 0006h
BAUDCON1_RCMT_POSITION                   equ 0006h
BAUDCON1_RCMT_SIZE                       equ 0001h
BAUDCON1_RCMT_LENGTH                     equ 0001h
BAUDCON1_RCMT_MASK                       equ 0040h
BAUDCON1_ABDOVF_POSN                     equ 0007h
BAUDCON1_ABDOVF_POSITION                 equ 0007h
BAUDCON1_ABDOVF_SIZE                     equ 0001h
BAUDCON1_ABDOVF_LENGTH                   equ 0001h
BAUDCON1_ABDOVF_MASK                     equ 0080h
BAUDCON1_RCIDL_POSN                      equ 0006h
BAUDCON1_RCIDL_POSITION                  equ 0006h
BAUDCON1_RCIDL_SIZE                      equ 0001h
BAUDCON1_RCIDL_LENGTH                    equ 0001h
BAUDCON1_RCIDL_MASK                      equ 0040h
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
BAUDCON1_SCKP_POSN                       equ 0004h
BAUDCON1_SCKP_POSITION                   equ 0004h
BAUDCON1_SCKP_SIZE                       equ 0001h
BAUDCON1_SCKP_LENGTH                     equ 0001h
BAUDCON1_SCKP_MASK                       equ 0010h
BAUDCON1_DTRXP1_POSN                     equ 0005h
BAUDCON1_DTRXP1_POSITION                 equ 0005h
BAUDCON1_DTRXP1_SIZE                     equ 0001h
BAUDCON1_DTRXP1_LENGTH                   equ 0001h
BAUDCON1_DTRXP1_MASK                     equ 0020h
BAUDCON1_RCMT1_POSN                      equ 0006h
BAUDCON1_RCMT1_POSITION                  equ 0006h
BAUDCON1_RCMT1_SIZE                      equ 0001h
BAUDCON1_RCMT1_LENGTH                    equ 0001h
BAUDCON1_RCMT1_MASK                      equ 0040h
BAUDCON1_SCKP1_POSN                      equ 0004h
BAUDCON1_SCKP1_POSITION                  equ 0004h
BAUDCON1_SCKP1_SIZE                      equ 0001h
BAUDCON1_SCKP1_LENGTH                    equ 0001h
BAUDCON1_SCKP1_MASK                      equ 0010h
BAUDCON1_RXDTP1_POSN                     equ 0005h
BAUDCON1_RXDTP1_POSITION                 equ 0005h
BAUDCON1_RXDTP1_SIZE                     equ 0001h
BAUDCON1_RXDTP1_LENGTH                   equ 0001h
BAUDCON1_RXDTP1_MASK                     equ 0020h
BAUDCON1_TXCKP1_POSN                     equ 0004h
BAUDCON1_TXCKP1_POSITION                 equ 0004h
BAUDCON1_TXCKP1_SIZE                     equ 0001h
BAUDCON1_TXCKP1_LENGTH                   equ 0001h
BAUDCON1_TXCKP1_MASK                     equ 0010h
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

// Register: SPBRGH1
#define SPBRGH1 SPBRGH1
SPBRGH1                                  equ 0F7Fh
// bitfield definitions
SPBRGH1_SPBRGH1_POSN                     equ 0000h
SPBRGH1_SPBRGH1_POSITION                 equ 0000h
SPBRGH1_SPBRGH1_SIZE                     equ 0008h
SPBRGH1_SPBRGH1_LENGTH                   equ 0008h
SPBRGH1_SPBRGH1_MASK                     equ 00FFh

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
PORTA_TOCKI_POSN                         equ 0004h
PORTA_TOCKI_POSITION                     equ 0004h
PORTA_TOCKI_SIZE                         equ 0001h
PORTA_TOCKI_LENGTH                       equ 0001h
PORTA_TOCKI_MASK                         equ 0010h
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
PORTA_OSC1_POSN                          equ 0007h
PORTA_OSC1_POSITION                      equ 0007h
PORTA_OSC1_SIZE                          equ 0001h
PORTA_OSC1_LENGTH                        equ 0001h
PORTA_OSC1_MASK                          equ 0080h
PORTA_SEG18_POSN                         equ 0001h
PORTA_SEG18_POSITION                     equ 0001h
PORTA_SEG18_SIZE                         equ 0001h
PORTA_SEG18_LENGTH                       equ 0001h
PORTA_SEG18_MASK                         equ 0002h
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
PORTA_SEG14_POSN                         equ 0004h
PORTA_SEG14_POSITION                     equ 0004h
PORTA_SEG14_SIZE                         equ 0001h
PORTA_SEG14_LENGTH                       equ 0001h
PORTA_SEG14_MASK                         equ 0010h
PORTA_SEG15_POSN                         equ 0005h
PORTA_SEG15_POSITION                     equ 0005h
PORTA_SEG15_SIZE                         equ 0001h
PORTA_SEG15_LENGTH                       equ 0001h
PORTA_SEG15_MASK                         equ 0020h
PORTA_CLKO_POSN                          equ 0006h
PORTA_CLKO_POSITION                      equ 0006h
PORTA_CLKO_SIZE                          equ 0001h
PORTA_CLKO_LENGTH                        equ 0001h
PORTA_CLKO_MASK                          equ 0040h
PORTA_CLKI_POSN                          equ 0007h
PORTA_CLKI_POSITION                      equ 0007h
PORTA_CLKI_SIZE                          equ 0001h
PORTA_CLKI_LENGTH                        equ 0001h
PORTA_CLKI_MASK                          equ 0080h
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
PORTB_INT3_POSN                          equ 0003h
PORTB_INT3_POSITION                      equ 0003h
PORTB_INT3_SIZE                          equ 0001h
PORTB_INT3_LENGTH                        equ 0001h
PORTB_INT3_MASK                          equ 0008h
PORTB_KBI0_POSN                          equ 0004h
PORTB_KBI0_POSITION                      equ 0004h
PORTB_KBI0_SIZE                          equ 0001h
PORTB_KBI0_LENGTH                        equ 0001h
PORTB_KBI0_MASK                          equ 0010h
PORTB_KBI1_POSN                          equ 0005h
PORTB_KBI1_POSITION                      equ 0005h
PORTB_KBI1_SIZE                          equ 0001h
PORTB_KBI1_LENGTH                        equ 0001h
PORTB_KBI1_MASK                          equ 0020h
PORTB_KBI2_POSN                          equ 0006h
PORTB_KBI2_POSITION                      equ 0006h
PORTB_KBI2_SIZE                          equ 0001h
PORTB_KBI2_LENGTH                        equ 0001h
PORTB_KBI2_MASK                          equ 0040h
PORTB_KBI3_POSN                          equ 0007h
PORTB_KBI3_POSITION                      equ 0007h
PORTB_KBI3_SIZE                          equ 0001h
PORTB_KBI3_LENGTH                        equ 0001h
PORTB_KBI3_MASK                          equ 0080h
PORTB_SEG30_POSN                         equ 0000h
PORTB_SEG30_POSITION                     equ 0000h
PORTB_SEG30_SIZE                         equ 0001h
PORTB_SEG30_LENGTH                       equ 0001h
PORTB_SEG30_MASK                         equ 0001h
PORTB_SEG8_POSN                          equ 0001h
PORTB_SEG8_POSITION                      equ 0001h
PORTB_SEG8_SIZE                          equ 0001h
PORTB_SEG8_LENGTH                        equ 0001h
PORTB_SEG8_MASK                          equ 0002h
PORTB_SEG9_POSN                          equ 0002h
PORTB_SEG9_POSITION                      equ 0002h
PORTB_SEG9_SIZE                          equ 0001h
PORTB_SEG9_LENGTH                        equ 0001h
PORTB_SEG9_MASK                          equ 0004h
PORTB_SEG10_POSN                         equ 0003h
PORTB_SEG10_POSITION                     equ 0003h
PORTB_SEG10_SIZE                         equ 0001h
PORTB_SEG10_LENGTH                       equ 0001h
PORTB_SEG10_MASK                         equ 0008h
PORTB_SEG11_POSN                         equ 0004h
PORTB_SEG11_POSITION                     equ 0004h
PORTB_SEG11_SIZE                         equ 0001h
PORTB_SEG11_LENGTH                       equ 0001h
PORTB_SEG11_MASK                         equ 0010h
PORTB_SEG29_POSN                         equ 0005h
PORTB_SEG29_POSITION                     equ 0005h
PORTB_SEG29_SIZE                         equ 0001h
PORTB_SEG29_LENGTH                       equ 0001h
PORTB_SEG29_MASK                         equ 0020h
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
PORTB_CTED1_POSN                         equ 0002h
PORTB_CTED1_POSITION                     equ 0002h
PORTB_CTED1_SIZE                         equ 0001h
PORTB_CTED1_LENGTH                       equ 0001h
PORTB_CTED1_MASK                         equ 0004h
PORTB_CTED2_POSN                         equ 0003h
PORTB_CTED2_POSITION                     equ 0003h
PORTB_CTED2_SIZE                         equ 0001h
PORTB_CTED2_LENGTH                       equ 0001h
PORTB_CTED2_MASK                         equ 0008h
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
PORTC_SCL_POSN                           equ 0003h
PORTC_SCL_POSITION                       equ 0003h
PORTC_SCL_SIZE                           equ 0001h
PORTC_SCL_LENGTH                         equ 0001h
PORTC_SCL_MASK                           equ 0008h
PORTC_SDA_POSN                           equ 0004h
PORTC_SDA_POSITION                       equ 0004h
PORTC_SDA_SIZE                           equ 0001h
PORTC_SDA_LENGTH                         equ 0001h
PORTC_SDA_MASK                           equ 0010h
PORTC_CK1_POSN                           equ 0006h
PORTC_CK1_POSITION                       equ 0006h
PORTC_CK1_SIZE                           equ 0001h
PORTC_CK1_LENGTH                         equ 0001h
PORTC_CK1_MASK                           equ 0040h
PORTC_DT1_POSN                           equ 0007h
PORTC_DT1_POSITION                       equ 0007h
PORTC_DT1_SIZE                           equ 0001h
PORTC_DT1_LENGTH                         equ 0001h
PORTC_DT1_MASK                           equ 0080h
PORTC_T13CKI_POSN                        equ 0000h
PORTC_T13CKI_POSITION                    equ 0000h
PORTC_T13CKI_SIZE                        equ 0001h
PORTC_T13CKI_LENGTH                      equ 0001h
PORTC_T13CKI_MASK                        equ 0001h
PORTC_CCP2_POSN                          equ 0001h
PORTC_CCP2_POSITION                      equ 0001h
PORTC_CCP2_SIZE                          equ 0001h
PORTC_CCP2_LENGTH                        equ 0001h
PORTC_CCP2_MASK                          equ 0002h
PORTC_CCP1_POSN                          equ 0002h
PORTC_CCP1_POSITION                      equ 0002h
PORTC_CCP1_SIZE                          equ 0001h
PORTC_CCP1_LENGTH                        equ 0001h
PORTC_CCP1_MASK                          equ 0004h
PORTC_SCK_POSN                           equ 0003h
PORTC_SCK_POSITION                       equ 0003h
PORTC_SCK_SIZE                           equ 0001h
PORTC_SCK_LENGTH                         equ 0001h
PORTC_SCK_MASK                           equ 0008h
PORTC_SDI_POSN                           equ 0004h
PORTC_SDI_POSITION                       equ 0004h
PORTC_SDI_SIZE                           equ 0001h
PORTC_SDI_LENGTH                         equ 0001h
PORTC_SDI_MASK                           equ 0010h
PORTC_SDO_POSN                           equ 0005h
PORTC_SDO_POSITION                       equ 0005h
PORTC_SDO_SIZE                           equ 0001h
PORTC_SDO_LENGTH                         equ 0001h
PORTC_SDO_MASK                           equ 0020h
PORTC_TX1_POSN                           equ 0006h
PORTC_TX1_POSITION                       equ 0006h
PORTC_TX1_SIZE                           equ 0001h
PORTC_TX1_LENGTH                         equ 0001h
PORTC_TX1_MASK                           equ 0040h
PORTC_RX1_POSN                           equ 0007h
PORTC_RX1_POSITION                       equ 0007h
PORTC_RX1_SIZE                           equ 0001h
PORTC_RX1_LENGTH                         equ 0001h
PORTC_RX1_MASK                           equ 0080h
PORTC_SEG32_POSN                         equ 0001h
PORTC_SEG32_POSITION                     equ 0001h
PORTC_SEG32_SIZE                         equ 0001h
PORTC_SEG32_LENGTH                       equ 0001h
PORTC_SEG32_MASK                         equ 0002h
PORTC_SEG13_POSN                         equ 0002h
PORTC_SEG13_POSITION                     equ 0002h
PORTC_SEG13_SIZE                         equ 0001h
PORTC_SEG13_LENGTH                       equ 0001h
PORTC_SEG13_MASK                         equ 0004h
PORTC_SEG17_POSN                         equ 0003h
PORTC_SEG17_POSITION                     equ 0003h
PORTC_SEG17_SIZE                         equ 0001h
PORTC_SEG17_LENGTH                       equ 0001h
PORTC_SEG17_MASK                         equ 0008h
PORTC_SEG16_POSN                         equ 0004h
PORTC_SEG16_POSITION                     equ 0004h
PORTC_SEG16_SIZE                         equ 0001h
PORTC_SEG16_LENGTH                       equ 0001h
PORTC_SEG16_MASK                         equ 0010h
PORTC_SEG12_POSN                         equ 0005h
PORTC_SEG12_POSITION                     equ 0005h
PORTC_SEG12_SIZE                         equ 0001h
PORTC_SEG12_LENGTH                       equ 0001h
PORTC_SEG12_MASK                         equ 0020h
PORTC_SEG27_POSN                         equ 0006h
PORTC_SEG27_POSITION                     equ 0006h
PORTC_SEG27_SIZE                         equ 0001h
PORTC_SEG27_LENGTH                       equ 0001h
PORTC_SEG27_MASK                         equ 0040h
PORTC_SEG28_POSN                         equ 0007h
PORTC_SEG28_POSITION                     equ 0007h
PORTC_SEG28_SIZE                         equ 0001h
PORTC_SEG28_LENGTH                       equ 0001h
PORTC_SEG28_MASK                         equ 0080h
PORTC_PA2_POSN                           equ 0001h
PORTC_PA2_POSITION                       equ 0001h
PORTC_PA2_SIZE                           equ 0001h
PORTC_PA2_LENGTH                         equ 0001h
PORTC_PA2_MASK                           equ 0002h
PORTC_PA1_POSN                           equ 0002h
PORTC_PA1_POSITION                       equ 0002h
PORTC_PA1_SIZE                           equ 0001h
PORTC_PA1_LENGTH                         equ 0001h
PORTC_PA1_MASK                           equ 0004h

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
PORTD_SEG0_POSN                          equ 0000h
PORTD_SEG0_POSITION                      equ 0000h
PORTD_SEG0_SIZE                          equ 0001h
PORTD_SEG0_LENGTH                        equ 0001h
PORTD_SEG0_MASK                          equ 0001h
PORTD_SEG1_POSN                          equ 0001h
PORTD_SEG1_POSITION                      equ 0001h
PORTD_SEG1_SIZE                          equ 0001h
PORTD_SEG1_LENGTH                        equ 0001h
PORTD_SEG1_MASK                          equ 0002h
PORTD_SEG2_POSN                          equ 0002h
PORTD_SEG2_POSITION                      equ 0002h
PORTD_SEG2_SIZE                          equ 0001h
PORTD_SEG2_LENGTH                        equ 0001h
PORTD_SEG2_MASK                          equ 0004h
PORTD_SEG3_POSN                          equ 0003h
PORTD_SEG3_POSITION                      equ 0003h
PORTD_SEG3_SIZE                          equ 0001h
PORTD_SEG3_LENGTH                        equ 0001h
PORTD_SEG3_MASK                          equ 0008h
PORTD_SEG4_POSN                          equ 0004h
PORTD_SEG4_POSITION                      equ 0004h
PORTD_SEG4_SIZE                          equ 0001h
PORTD_SEG4_LENGTH                        equ 0001h
PORTD_SEG4_MASK                          equ 0010h
PORTD_SEG5_POSN                          equ 0005h
PORTD_SEG5_POSITION                      equ 0005h
PORTD_SEG5_SIZE                          equ 0001h
PORTD_SEG5_LENGTH                        equ 0001h
PORTD_SEG5_MASK                          equ 0020h
PORTD_SEG6_POSN                          equ 0006h
PORTD_SEG6_POSITION                      equ 0006h
PORTD_SEG6_SIZE                          equ 0001h
PORTD_SEG6_LENGTH                        equ 0001h
PORTD_SEG6_MASK                          equ 0040h
PORTD_SEG7_POSN                          equ 0007h
PORTD_SEG7_POSITION                      equ 0007h
PORTD_SEG7_SIZE                          equ 0001h
PORTD_SEG7_LENGTH                        equ 0001h
PORTD_SEG7_MASK                          equ 0080h
PORTD_CTPLS_POSN                         equ 0000h
PORTD_CTPLS_POSITION                     equ 0000h
PORTD_CTPLS_SIZE                         equ 0001h
PORTD_CTPLS_LENGTH                       equ 0001h
PORTD_CTPLS_MASK                         equ 0001h
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
PORTE_RE3_POSN                           equ 0003h
PORTE_RE3_POSITION                       equ 0003h
PORTE_RE3_SIZE                           equ 0001h
PORTE_RE3_LENGTH                         equ 0001h
PORTE_RE3_MASK                           equ 0008h
PORTE_RE4_POSN                           equ 0004h
PORTE_RE4_POSITION                       equ 0004h
PORTE_RE4_SIZE                           equ 0001h
PORTE_RE4_LENGTH                         equ 0001h
PORTE_RE4_MASK                           equ 0010h
PORTE_RE5_POSN                           equ 0005h
PORTE_RE5_POSITION                       equ 0005h
PORTE_RE5_SIZE                           equ 0001h
PORTE_RE5_LENGTH                         equ 0001h
PORTE_RE5_MASK                           equ 0020h
PORTE_RE6_POSN                           equ 0006h
PORTE_RE6_POSITION                       equ 0006h
PORTE_RE6_SIZE                           equ 0001h
PORTE_RE6_LENGTH                         equ 0001h
PORTE_RE6_MASK                           equ 0040h
PORTE_RE7_POSN                           equ 0007h
PORTE_RE7_POSITION                       equ 0007h
PORTE_RE7_SIZE                           equ 0001h
PORTE_RE7_LENGTH                         equ 0001h
PORTE_RE7_MASK                           equ 0080h
PORTE_LCDBIAS1_POSN                      equ 0000h
PORTE_LCDBIAS1_POSITION                  equ 0000h
PORTE_LCDBIAS1_SIZE                      equ 0001h
PORTE_LCDBIAS1_LENGTH                    equ 0001h
PORTE_LCDBIAS1_MASK                      equ 0001h
PORTE_LCDBIAS2_POSN                      equ 0001h
PORTE_LCDBIAS2_POSITION                  equ 0001h
PORTE_LCDBIAS2_SIZE                      equ 0001h
PORTE_LCDBIAS2_LENGTH                    equ 0001h
PORTE_LCDBIAS2_MASK                      equ 0002h
PORTE_COM0_POSN                          equ 0003h
PORTE_COM0_POSITION                      equ 0003h
PORTE_COM0_SIZE                          equ 0001h
PORTE_COM0_LENGTH                        equ 0001h
PORTE_COM0_MASK                          equ 0008h
PORTE_COM1_POSN                          equ 0004h
PORTE_COM1_POSITION                      equ 0004h
PORTE_COM1_SIZE                          equ 0001h
PORTE_COM1_LENGTH                        equ 0001h
PORTE_COM1_MASK                          equ 0010h
PORTE_COM2_POSN                          equ 0005h
PORTE_COM2_POSITION                      equ 0005h
PORTE_COM2_SIZE                          equ 0001h
PORTE_COM2_LENGTH                        equ 0001h
PORTE_COM2_MASK                          equ 0020h
PORTE_COM3_POSN                          equ 0006h
PORTE_COM3_POSITION                      equ 0006h
PORTE_COM3_SIZE                          equ 0001h
PORTE_COM3_LENGTH                        equ 0001h
PORTE_COM3_MASK                          equ 0040h
PORTE_CCP2_POSN                          equ 0007h
PORTE_CCP2_POSITION                      equ 0007h
PORTE_CCP2_SIZE                          equ 0001h
PORTE_CCP2_LENGTH                        equ 0001h
PORTE_CCP2_MASK                          equ 0080h
PORTE_SEG31_POSN                         equ 0007h
PORTE_SEG31_POSITION                     equ 0007h
PORTE_SEG31_SIZE                         equ 0001h
PORTE_SEG31_LENGTH                       equ 0001h
PORTE_SEG31_MASK                         equ 0080h
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
PORTE_CCP9E_POSN                         equ 0003h
PORTE_CCP9E_POSITION                     equ 0003h
PORTE_CCP9E_SIZE                         equ 0001h
PORTE_CCP9E_LENGTH                       equ 0001h
PORTE_CCP9E_MASK                         equ 0008h
PORTE_CCP8E_POSN                         equ 0004h
PORTE_CCP8E_POSITION                     equ 0004h
PORTE_CCP8E_SIZE                         equ 0001h
PORTE_CCP8E_LENGTH                       equ 0001h
PORTE_CCP8E_MASK                         equ 0010h
PORTE_CCP7E_POSN                         equ 0005h
PORTE_CCP7E_POSITION                     equ 0005h
PORTE_CCP7E_SIZE                         equ 0001h
PORTE_CCP7E_LENGTH                       equ 0001h
PORTE_CCP7E_MASK                         equ 0020h
PORTE_CCP6E_POSN                         equ 0006h
PORTE_CCP6E_POSITION                     equ 0006h
PORTE_CCP6E_SIZE                         equ 0001h
PORTE_CCP6E_LENGTH                       equ 0001h
PORTE_CCP6E_MASK                         equ 0040h
PORTE_CCP2E_POSN                         equ 0007h
PORTE_CCP2E_POSITION                     equ 0007h
PORTE_CCP2E_SIZE                         equ 0001h
PORTE_CCP2E_LENGTH                       equ 0001h
PORTE_CCP2E_MASK                         equ 0080h
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
PORTE_PC3E_POSN                          equ 0003h
PORTE_PC3E_POSITION                      equ 0003h
PORTE_PC3E_SIZE                          equ 0001h
PORTE_PC3E_LENGTH                        equ 0001h
PORTE_PC3E_MASK                          equ 0008h
PORTE_PB3E_POSN                          equ 0004h
PORTE_PB3E_POSITION                      equ 0004h
PORTE_PB3E_SIZE                          equ 0001h
PORTE_PB3E_LENGTH                        equ 0001h
PORTE_PB3E_MASK                          equ 0010h
PORTE_PC1E_POSN                          equ 0005h
PORTE_PC1E_POSITION                      equ 0005h
PORTE_PC1E_SIZE                          equ 0001h
PORTE_PC1E_LENGTH                        equ 0001h
PORTE_PC1E_MASK                          equ 0020h
PORTE_PB1E_POSN                          equ 0006h
PORTE_PB1E_POSITION                      equ 0006h
PORTE_PB1E_SIZE                          equ 0001h
PORTE_PB1E_LENGTH                        equ 0001h
PORTE_PB1E_MASK                          equ 0040h
PORTE_PA2E_POSN                          equ 0007h
PORTE_PA2E_POSITION                      equ 0007h
PORTE_PA2E_SIZE                          equ 0001h
PORTE_PA2E_LENGTH                        equ 0001h
PORTE_PA2E_MASK                          equ 0080h

// Register: PORTF
#define PORTF PORTF
PORTF                                    equ 0F85h
// bitfield definitions
PORTF_RF1_POSN                           equ 0001h
PORTF_RF1_POSITION                       equ 0001h
PORTF_RF1_SIZE                           equ 0001h
PORTF_RF1_LENGTH                         equ 0001h
PORTF_RF1_MASK                           equ 0002h
PORTF_RF2_POSN                           equ 0002h
PORTF_RF2_POSITION                       equ 0002h
PORTF_RF2_SIZE                           equ 0001h
PORTF_RF2_LENGTH                         equ 0001h
PORTF_RF2_MASK                           equ 0004h
PORTF_RF3_POSN                           equ 0003h
PORTF_RF3_POSITION                       equ 0003h
PORTF_RF3_SIZE                           equ 0001h
PORTF_RF3_LENGTH                         equ 0001h
PORTF_RF3_MASK                           equ 0008h
PORTF_RF4_POSN                           equ 0004h
PORTF_RF4_POSITION                       equ 0004h
PORTF_RF4_SIZE                           equ 0001h
PORTF_RF4_LENGTH                         equ 0001h
PORTF_RF4_MASK                           equ 0010h
PORTF_RF5_POSN                           equ 0005h
PORTF_RF5_POSITION                       equ 0005h
PORTF_RF5_SIZE                           equ 0001h
PORTF_RF5_LENGTH                         equ 0001h
PORTF_RF5_MASK                           equ 0020h
PORTF_RF6_POSN                           equ 0006h
PORTF_RF6_POSITION                       equ 0006h
PORTF_RF6_SIZE                           equ 0001h
PORTF_RF6_LENGTH                         equ 0001h
PORTF_RF6_MASK                           equ 0040h
PORTF_RF7_POSN                           equ 0007h
PORTF_RF7_POSITION                       equ 0007h
PORTF_RF7_SIZE                           equ 0001h
PORTF_RF7_LENGTH                         equ 0001h
PORTF_RF7_MASK                           equ 0080h
PORTF_AN6_POSN                           equ 0001h
PORTF_AN6_POSITION                       equ 0001h
PORTF_AN6_SIZE                           equ 0001h
PORTF_AN6_LENGTH                         equ 0001h
PORTF_AN6_MASK                           equ 0002h
PORTF_AN7_POSN                           equ 0002h
PORTF_AN7_POSITION                       equ 0002h
PORTF_AN7_SIZE                           equ 0001h
PORTF_AN7_LENGTH                         equ 0001h
PORTF_AN7_MASK                           equ 0004h
PORTF_AN8_POSN                           equ 0003h
PORTF_AN8_POSITION                       equ 0003h
PORTF_AN8_SIZE                           equ 0001h
PORTF_AN8_LENGTH                         equ 0001h
PORTF_AN8_MASK                           equ 0008h
PORTF_AN9_POSN                           equ 0004h
PORTF_AN9_POSITION                       equ 0004h
PORTF_AN9_SIZE                           equ 0001h
PORTF_AN9_LENGTH                         equ 0001h
PORTF_AN9_MASK                           equ 0010h
PORTF_AN10_POSN                          equ 0005h
PORTF_AN10_POSITION                      equ 0005h
PORTF_AN10_SIZE                          equ 0001h
PORTF_AN10_LENGTH                        equ 0001h
PORTF_AN10_MASK                          equ 0020h
PORTF_AN11_POSN                          equ 0006h
PORTF_AN11_POSITION                      equ 0006h
PORTF_AN11_SIZE                          equ 0001h
PORTF_AN11_LENGTH                        equ 0001h
PORTF_AN11_MASK                          equ 0040h
PORTF_AN5_POSN                           equ 0007h
PORTF_AN5_POSITION                       equ 0007h
PORTF_AN5_SIZE                           equ 0001h
PORTF_AN5_LENGTH                         equ 0001h
PORTF_AN5_MASK                           equ 0080h
PORTF_C2OUT_POSN                         equ 0001h
PORTF_C2OUT_POSITION                     equ 0001h
PORTF_C2OUT_SIZE                         equ 0001h
PORTF_C2OUT_LENGTH                       equ 0001h
PORTF_C2OUT_MASK                         equ 0002h
PORTF_C1OUT_POSN                         equ 0002h
PORTF_C1OUT_POSITION                     equ 0002h
PORTF_C1OUT_SIZE                         equ 0001h
PORTF_C1OUT_LENGTH                       equ 0001h
PORTF_C1OUT_MASK                         equ 0004h
PORTF_C2INB_POSN                         equ 0003h
PORTF_C2INB_POSITION                     equ 0003h
PORTF_C2INB_SIZE                         equ 0001h
PORTF_C2INB_LENGTH                       equ 0001h
PORTF_C2INB_MASK                         equ 0008h
PORTF_C2INA_POSN                         equ 0004h
PORTF_C2INA_POSITION                     equ 0004h
PORTF_C2INA_SIZE                         equ 0001h
PORTF_C2INA_LENGTH                       equ 0001h
PORTF_C2INA_MASK                         equ 0010h
PORTF_C1INB_POSN                         equ 0005h
PORTF_C1INB_POSITION                     equ 0005h
PORTF_C1INB_SIZE                         equ 0001h
PORTF_C1INB_LENGTH                       equ 0001h
PORTF_C1INB_MASK                         equ 0020h
PORTF_C1INA_POSN                         equ 0006h
PORTF_C1INA_POSITION                     equ 0006h
PORTF_C1INA_SIZE                         equ 0001h
PORTF_C1INA_LENGTH                       equ 0001h
PORTF_C1INA_MASK                         equ 0040h
PORTF_SS1_POSN                           equ 0007h
PORTF_SS1_POSITION                       equ 0007h
PORTF_SS1_SIZE                           equ 0001h
PORTF_SS1_LENGTH                         equ 0001h
PORTF_SS1_MASK                           equ 0080h
PORTF_SEG19_POSN                         equ 0001h
PORTF_SEG19_POSITION                     equ 0001h
PORTF_SEG19_SIZE                         equ 0001h
PORTF_SEG19_LENGTH                       equ 0001h
PORTF_SEG19_MASK                         equ 0002h
PORTF_SEG20_POSN                         equ 0002h
PORTF_SEG20_POSITION                     equ 0002h
PORTF_SEG20_SIZE                         equ 0001h
PORTF_SEG20_LENGTH                       equ 0001h
PORTF_SEG20_MASK                         equ 0004h
PORTF_SEG21_POSN                         equ 0003h
PORTF_SEG21_POSITION                     equ 0003h
PORTF_SEG21_SIZE                         equ 0001h
PORTF_SEG21_LENGTH                       equ 0001h
PORTF_SEG21_MASK                         equ 0008h
PORTF_SEG22_POSN                         equ 0004h
PORTF_SEG22_POSITION                     equ 0004h
PORTF_SEG22_SIZE                         equ 0001h
PORTF_SEG22_LENGTH                       equ 0001h
PORTF_SEG22_MASK                         equ 0010h
PORTF_SEG23_POSN                         equ 0005h
PORTF_SEG23_POSITION                     equ 0005h
PORTF_SEG23_SIZE                         equ 0001h
PORTF_SEG23_LENGTH                       equ 0001h
PORTF_SEG23_MASK                         equ 0020h
PORTF_SEG24_POSN                         equ 0006h
PORTF_SEG24_POSITION                     equ 0006h
PORTF_SEG24_SIZE                         equ 0001h
PORTF_SEG24_LENGTH                       equ 0001h
PORTF_SEG24_MASK                         equ 0040h
PORTF_SEG25_POSN                         equ 0007h
PORTF_SEG25_POSITION                     equ 0007h
PORTF_SEG25_SIZE                         equ 0001h
PORTF_SEG25_LENGTH                       equ 0001h
PORTF_SEG25_MASK                         equ 0080h
PORTF_C1OUTF_POSN                        equ 0001h
PORTF_C1OUTF_POSITION                    equ 0001h
PORTF_C1OUTF_SIZE                        equ 0001h
PORTF_C1OUTF_LENGTH                      equ 0001h
PORTF_C1OUTF_MASK                        equ 0002h
PORTF_C2OUTF_POSN                        equ 0002h
PORTF_C2OUTF_POSITION                    equ 0002h
PORTF_C2OUTF_SIZE                        equ 0001h
PORTF_C2OUTF_LENGTH                      equ 0001h
PORTF_C2OUTF_MASK                        equ 0004h
PORTF_CVREF_POSN                         equ 0005h
PORTF_CVREF_POSITION                     equ 0005h
PORTF_CVREF_SIZE                         equ 0001h
PORTF_CVREF_LENGTH                       equ 0001h
PORTF_CVREF_MASK                         equ 0020h

// Register: PORTG
#define PORTG PORTG
PORTG                                    equ 0F86h
// bitfield definitions
PORTG_RG0_POSN                           equ 0000h
PORTG_RG0_POSITION                       equ 0000h
PORTG_RG0_SIZE                           equ 0001h
PORTG_RG0_LENGTH                         equ 0001h
PORTG_RG0_MASK                           equ 0001h
PORTG_RG1_POSN                           equ 0001h
PORTG_RG1_POSITION                       equ 0001h
PORTG_RG1_SIZE                           equ 0001h
PORTG_RG1_LENGTH                         equ 0001h
PORTG_RG1_MASK                           equ 0002h
PORTG_RG2_POSN                           equ 0002h
PORTG_RG2_POSITION                       equ 0002h
PORTG_RG2_SIZE                           equ 0001h
PORTG_RG2_LENGTH                         equ 0001h
PORTG_RG2_MASK                           equ 0004h
PORTG_RG3_POSN                           equ 0003h
PORTG_RG3_POSITION                       equ 0003h
PORTG_RG3_SIZE                           equ 0001h
PORTG_RG3_LENGTH                         equ 0001h
PORTG_RG3_MASK                           equ 0008h
PORTG_RG4_POSN                           equ 0004h
PORTG_RG4_POSITION                       equ 0004h
PORTG_RG4_SIZE                           equ 0001h
PORTG_RG4_LENGTH                         equ 0001h
PORTG_RG4_MASK                           equ 0010h
PORTG_RJPU_POSN                          equ 0005h
PORTG_RJPU_POSITION                      equ 0005h
PORTG_RJPU_SIZE                          equ 0001h
PORTG_RJPU_LENGTH                        equ 0001h
PORTG_RJPU_MASK                          equ 0020h
PORTG_REPU_POSN                          equ 0006h
PORTG_REPU_POSITION                      equ 0006h
PORTG_REPU_SIZE                          equ 0001h
PORTG_REPU_LENGTH                        equ 0001h
PORTG_REPU_MASK                          equ 0040h
PORTG_RDPU_POSN                          equ 0007h
PORTG_RDPU_POSITION                      equ 0007h
PORTG_RDPU_SIZE                          equ 0001h
PORTG_RDPU_LENGTH                        equ 0001h
PORTG_RDPU_MASK                          equ 0080h
PORTG_LCDBIAS0_POSN                      equ 0000h
PORTG_LCDBIAS0_POSITION                  equ 0000h
PORTG_LCDBIAS0_SIZE                      equ 0001h
PORTG_LCDBIAS0_LENGTH                    equ 0001h
PORTG_LCDBIAS0_MASK                      equ 0001h
PORTG_CK2_POSN                           equ 0001h
PORTG_CK2_POSITION                       equ 0001h
PORTG_CK2_SIZE                           equ 0001h
PORTG_CK2_LENGTH                         equ 0001h
PORTG_CK2_MASK                           equ 0002h
PORTG_DT2_POSN                           equ 0002h
PORTG_DT2_POSITION                       equ 0002h
PORTG_DT2_SIZE                           equ 0001h
PORTG_DT2_LENGTH                         equ 0001h
PORTG_DT2_MASK                           equ 0004h
PORTG_VLCAP2_POSN                        equ 0003h
PORTG_VLCAP2_POSITION                    equ 0003h
PORTG_VLCAP2_SIZE                        equ 0001h
PORTG_VLCAP2_LENGTH                      equ 0001h
PORTG_VLCAP2_MASK                        equ 0008h
PORTG_SEG26_POSN                         equ 0004h
PORTG_SEG26_POSITION                     equ 0004h
PORTG_SEG26_SIZE                         equ 0001h
PORTG_SEG26_LENGTH                       equ 0001h
PORTG_SEG26_MASK                         equ 0010h
PORTG_TX2_POSN                           equ 0001h
PORTG_TX2_POSITION                       equ 0001h
PORTG_TX2_SIZE                           equ 0001h
PORTG_TX2_LENGTH                         equ 0001h
PORTG_TX2_MASK                           equ 0002h
PORTG_RX2_POSN                           equ 0002h
PORTG_RX2_POSITION                       equ 0002h
PORTG_RX2_SIZE                           equ 0001h
PORTG_RX2_LENGTH                         equ 0001h
PORTG_RX2_MASK                           equ 0004h
PORTG_RTCC_POSN                          equ 0004h
PORTG_RTCC_POSITION                      equ 0004h
PORTG_RTCC_SIZE                          equ 0001h
PORTG_RTCC_LENGTH                        equ 0001h
PORTG_RTCC_MASK                          equ 0010h
PORTG_VLCAP1_POSN                        equ 0002h
PORTG_VLCAP1_POSITION                    equ 0002h
PORTG_VLCAP1_SIZE                        equ 0001h
PORTG_VLCAP1_LENGTH                      equ 0001h
PORTG_VLCAP1_MASK                        equ 0004h
PORTG_C3OUTG_POSN                        equ 0001h
PORTG_C3OUTG_POSITION                    equ 0001h
PORTG_C3OUTG_SIZE                        equ 0001h
PORTG_C3OUTG_LENGTH                      equ 0001h
PORTG_C3OUTG_MASK                        equ 0002h
PORTG_RG5_POSN                           equ 0005h
PORTG_RG5_POSITION                       equ 0005h
PORTG_RG5_SIZE                           equ 0001h
PORTG_RG5_LENGTH                         equ 0001h
PORTG_RG5_MASK                           equ 0020h
PORTG_RG6_POSN                           equ 0006h
PORTG_RG6_POSITION                       equ 0006h
PORTG_RG6_SIZE                           equ 0001h
PORTG_RG6_LENGTH                         equ 0001h
PORTG_RG6_MASK                           equ 0040h
PORTG_RG7_POSN                           equ 0007h
PORTG_RG7_POSITION                       equ 0007h
PORTG_RG7_SIZE                           equ 0001h
PORTG_RG7_LENGTH                         equ 0001h
PORTG_RG7_MASK                           equ 0080h

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
LATE_LATE3_POSN                          equ 0003h
LATE_LATE3_POSITION                      equ 0003h
LATE_LATE3_SIZE                          equ 0001h
LATE_LATE3_LENGTH                        equ 0001h
LATE_LATE3_MASK                          equ 0008h
LATE_LATE4_POSN                          equ 0004h
LATE_LATE4_POSITION                      equ 0004h
LATE_LATE4_SIZE                          equ 0001h
LATE_LATE4_LENGTH                        equ 0001h
LATE_LATE4_MASK                          equ 0010h
LATE_LATE5_POSN                          equ 0005h
LATE_LATE5_POSITION                      equ 0005h
LATE_LATE5_SIZE                          equ 0001h
LATE_LATE5_LENGTH                        equ 0001h
LATE_LATE5_MASK                          equ 0020h
LATE_LATE6_POSN                          equ 0006h
LATE_LATE6_POSITION                      equ 0006h
LATE_LATE6_SIZE                          equ 0001h
LATE_LATE6_LENGTH                        equ 0001h
LATE_LATE6_MASK                          equ 0040h
LATE_LATE7_POSN                          equ 0007h
LATE_LATE7_POSITION                      equ 0007h
LATE_LATE7_SIZE                          equ 0001h
LATE_LATE7_LENGTH                        equ 0001h
LATE_LATE7_MASK                          equ 0080h
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
LATE_LE3_POSN                            equ 0003h
LATE_LE3_POSITION                        equ 0003h
LATE_LE3_SIZE                            equ 0001h
LATE_LE3_LENGTH                          equ 0001h
LATE_LE3_MASK                            equ 0008h
LATE_LE4_POSN                            equ 0004h
LATE_LE4_POSITION                        equ 0004h
LATE_LE4_SIZE                            equ 0001h
LATE_LE4_LENGTH                          equ 0001h
LATE_LE4_MASK                            equ 0010h
LATE_LE5_POSN                            equ 0005h
LATE_LE5_POSITION                        equ 0005h
LATE_LE5_SIZE                            equ 0001h
LATE_LE5_LENGTH                          equ 0001h
LATE_LE5_MASK                            equ 0020h
LATE_LE6_POSN                            equ 0006h
LATE_LE6_POSITION                        equ 0006h
LATE_LE6_SIZE                            equ 0001h
LATE_LE6_LENGTH                          equ 0001h
LATE_LE6_MASK                            equ 0040h
LATE_LE7_POSN                            equ 0007h
LATE_LE7_POSITION                        equ 0007h
LATE_LE7_SIZE                            equ 0001h
LATE_LE7_LENGTH                          equ 0001h
LATE_LE7_MASK                            equ 0080h

// Register: LATF
#define LATF LATF
LATF                                     equ 0F8Eh
// bitfield definitions
LATF_LATF1_POSN                          equ 0001h
LATF_LATF1_POSITION                      equ 0001h
LATF_LATF1_SIZE                          equ 0001h
LATF_LATF1_LENGTH                        equ 0001h
LATF_LATF1_MASK                          equ 0002h
LATF_LATF2_POSN                          equ 0002h
LATF_LATF2_POSITION                      equ 0002h
LATF_LATF2_SIZE                          equ 0001h
LATF_LATF2_LENGTH                        equ 0001h
LATF_LATF2_MASK                          equ 0004h
LATF_LATF3_POSN                          equ 0003h
LATF_LATF3_POSITION                      equ 0003h
LATF_LATF3_SIZE                          equ 0001h
LATF_LATF3_LENGTH                        equ 0001h
LATF_LATF3_MASK                          equ 0008h
LATF_LATF4_POSN                          equ 0004h
LATF_LATF4_POSITION                      equ 0004h
LATF_LATF4_SIZE                          equ 0001h
LATF_LATF4_LENGTH                        equ 0001h
LATF_LATF4_MASK                          equ 0010h
LATF_LATF5_POSN                          equ 0005h
LATF_LATF5_POSITION                      equ 0005h
LATF_LATF5_SIZE                          equ 0001h
LATF_LATF5_LENGTH                        equ 0001h
LATF_LATF5_MASK                          equ 0020h
LATF_LATF6_POSN                          equ 0006h
LATF_LATF6_POSITION                      equ 0006h
LATF_LATF6_SIZE                          equ 0001h
LATF_LATF6_LENGTH                        equ 0001h
LATF_LATF6_MASK                          equ 0040h
LATF_LATF7_POSN                          equ 0007h
LATF_LATF7_POSITION                      equ 0007h
LATF_LATF7_SIZE                          equ 0001h
LATF_LATF7_LENGTH                        equ 0001h
LATF_LATF7_MASK                          equ 0080h
LATF_LF1_POSN                            equ 0001h
LATF_LF1_POSITION                        equ 0001h
LATF_LF1_SIZE                            equ 0001h
LATF_LF1_LENGTH                          equ 0001h
LATF_LF1_MASK                            equ 0002h
LATF_LF2_POSN                            equ 0002h
LATF_LF2_POSITION                        equ 0002h
LATF_LF2_SIZE                            equ 0001h
LATF_LF2_LENGTH                          equ 0001h
LATF_LF2_MASK                            equ 0004h
LATF_LF3_POSN                            equ 0003h
LATF_LF3_POSITION                        equ 0003h
LATF_LF3_SIZE                            equ 0001h
LATF_LF3_LENGTH                          equ 0001h
LATF_LF3_MASK                            equ 0008h
LATF_LF4_POSN                            equ 0004h
LATF_LF4_POSITION                        equ 0004h
LATF_LF4_SIZE                            equ 0001h
LATF_LF4_LENGTH                          equ 0001h
LATF_LF4_MASK                            equ 0010h
LATF_LF5_POSN                            equ 0005h
LATF_LF5_POSITION                        equ 0005h
LATF_LF5_SIZE                            equ 0001h
LATF_LF5_LENGTH                          equ 0001h
LATF_LF5_MASK                            equ 0020h
LATF_LF6_POSN                            equ 0006h
LATF_LF6_POSITION                        equ 0006h
LATF_LF6_SIZE                            equ 0001h
LATF_LF6_LENGTH                          equ 0001h
LATF_LF6_MASK                            equ 0040h
LATF_LF7_POSN                            equ 0007h
LATF_LF7_POSITION                        equ 0007h
LATF_LF7_SIZE                            equ 0001h
LATF_LF7_LENGTH                          equ 0001h
LATF_LF7_MASK                            equ 0080h

// Register: LATG
#define LATG LATG
LATG                                     equ 0F8Fh
// bitfield definitions
LATG_LATG0_POSN                          equ 0000h
LATG_LATG0_POSITION                      equ 0000h
LATG_LATG0_SIZE                          equ 0001h
LATG_LATG0_LENGTH                        equ 0001h
LATG_LATG0_MASK                          equ 0001h
LATG_LATG1_POSN                          equ 0001h
LATG_LATG1_POSITION                      equ 0001h
LATG_LATG1_SIZE                          equ 0001h
LATG_LATG1_LENGTH                        equ 0001h
LATG_LATG1_MASK                          equ 0002h
LATG_LATG2_POSN                          equ 0002h
LATG_LATG2_POSITION                      equ 0002h
LATG_LATG2_SIZE                          equ 0001h
LATG_LATG2_LENGTH                        equ 0001h
LATG_LATG2_MASK                          equ 0004h
LATG_LATG3_POSN                          equ 0003h
LATG_LATG3_POSITION                      equ 0003h
LATG_LATG3_SIZE                          equ 0001h
LATG_LATG3_LENGTH                        equ 0001h
LATG_LATG3_MASK                          equ 0008h
LATG_LATG4_POSN                          equ 0004h
LATG_LATG4_POSITION                      equ 0004h
LATG_LATG4_SIZE                          equ 0001h
LATG_LATG4_LENGTH                        equ 0001h
LATG_LATG4_MASK                          equ 0010h
LATG_U1OD_POSN                           equ 0006h
LATG_U1OD_POSITION                       equ 0006h
LATG_U1OD_SIZE                           equ 0001h
LATG_U1OD_LENGTH                         equ 0001h
LATG_U1OD_MASK                           equ 0040h
LATG_U2OD_POSN                           equ 0007h
LATG_U2OD_POSITION                       equ 0007h
LATG_U2OD_SIZE                           equ 0001h
LATG_U2OD_LENGTH                         equ 0001h
LATG_U2OD_MASK                           equ 0080h
LATG_LG0_POSN                            equ 0000h
LATG_LG0_POSITION                        equ 0000h
LATG_LG0_SIZE                            equ 0001h
LATG_LG0_LENGTH                          equ 0001h
LATG_LG0_MASK                            equ 0001h
LATG_LG1_POSN                            equ 0001h
LATG_LG1_POSITION                        equ 0001h
LATG_LG1_SIZE                            equ 0001h
LATG_LG1_LENGTH                          equ 0001h
LATG_LG1_MASK                            equ 0002h
LATG_LG2_POSN                            equ 0002h
LATG_LG2_POSITION                        equ 0002h
LATG_LG2_SIZE                            equ 0001h
LATG_LG2_LENGTH                          equ 0001h
LATG_LG2_MASK                            equ 0004h
LATG_LG3_POSN                            equ 0003h
LATG_LG3_POSITION                        equ 0003h
LATG_LG3_SIZE                            equ 0001h
LATG_LG3_LENGTH                          equ 0001h
LATG_LG3_MASK                            equ 0008h
LATG_LG4_POSN                            equ 0004h
LATG_LG4_POSITION                        equ 0004h
LATG_LG4_SIZE                            equ 0001h
LATG_LG4_LENGTH                          equ 0001h
LATG_LG4_MASK                            equ 0010h

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
TRISE_TRISE3_POSN                        equ 0003h
TRISE_TRISE3_POSITION                    equ 0003h
TRISE_TRISE3_SIZE                        equ 0001h
TRISE_TRISE3_LENGTH                      equ 0001h
TRISE_TRISE3_MASK                        equ 0008h
TRISE_TRISE4_POSN                        equ 0004h
TRISE_TRISE4_POSITION                    equ 0004h
TRISE_TRISE4_SIZE                        equ 0001h
TRISE_TRISE4_LENGTH                      equ 0001h
TRISE_TRISE4_MASK                        equ 0010h
TRISE_TRISE5_POSN                        equ 0005h
TRISE_TRISE5_POSITION                    equ 0005h
TRISE_TRISE5_SIZE                        equ 0001h
TRISE_TRISE5_LENGTH                      equ 0001h
TRISE_TRISE5_MASK                        equ 0020h
TRISE_TRISE6_POSN                        equ 0006h
TRISE_TRISE6_POSITION                    equ 0006h
TRISE_TRISE6_SIZE                        equ 0001h
TRISE_TRISE6_LENGTH                      equ 0001h
TRISE_TRISE6_MASK                        equ 0040h
TRISE_TRISE7_POSN                        equ 0007h
TRISE_TRISE7_POSITION                    equ 0007h
TRISE_TRISE7_SIZE                        equ 0001h
TRISE_TRISE7_LENGTH                      equ 0001h
TRISE_TRISE7_MASK                        equ 0080h

// Register: TRISF
#define TRISF TRISF
TRISF                                    equ 0F97h
// bitfield definitions
TRISF_TRISF1_POSN                        equ 0001h
TRISF_TRISF1_POSITION                    equ 0001h
TRISF_TRISF1_SIZE                        equ 0001h
TRISF_TRISF1_LENGTH                      equ 0001h
TRISF_TRISF1_MASK                        equ 0002h
TRISF_TRISF2_POSN                        equ 0002h
TRISF_TRISF2_POSITION                    equ 0002h
TRISF_TRISF2_SIZE                        equ 0001h
TRISF_TRISF2_LENGTH                      equ 0001h
TRISF_TRISF2_MASK                        equ 0004h
TRISF_TRISF3_POSN                        equ 0003h
TRISF_TRISF3_POSITION                    equ 0003h
TRISF_TRISF3_SIZE                        equ 0001h
TRISF_TRISF3_LENGTH                      equ 0001h
TRISF_TRISF3_MASK                        equ 0008h
TRISF_TRISF4_POSN                        equ 0004h
TRISF_TRISF4_POSITION                    equ 0004h
TRISF_TRISF4_SIZE                        equ 0001h
TRISF_TRISF4_LENGTH                      equ 0001h
TRISF_TRISF4_MASK                        equ 0010h
TRISF_TRISF5_POSN                        equ 0005h
TRISF_TRISF5_POSITION                    equ 0005h
TRISF_TRISF5_SIZE                        equ 0001h
TRISF_TRISF5_LENGTH                      equ 0001h
TRISF_TRISF5_MASK                        equ 0020h
TRISF_TRISF6_POSN                        equ 0006h
TRISF_TRISF6_POSITION                    equ 0006h
TRISF_TRISF6_SIZE                        equ 0001h
TRISF_TRISF6_LENGTH                      equ 0001h
TRISF_TRISF6_MASK                        equ 0040h
TRISF_TRISF7_POSN                        equ 0007h
TRISF_TRISF7_POSITION                    equ 0007h
TRISF_TRISF7_SIZE                        equ 0001h
TRISF_TRISF7_LENGTH                      equ 0001h
TRISF_TRISF7_MASK                        equ 0080h

// Register: TRISG
#define TRISG TRISG
TRISG                                    equ 0F98h
// bitfield definitions
TRISG_TRISG0_POSN                        equ 0000h
TRISG_TRISG0_POSITION                    equ 0000h
TRISG_TRISG0_SIZE                        equ 0001h
TRISG_TRISG0_LENGTH                      equ 0001h
TRISG_TRISG0_MASK                        equ 0001h
TRISG_TRISG1_POSN                        equ 0001h
TRISG_TRISG1_POSITION                    equ 0001h
TRISG_TRISG1_SIZE                        equ 0001h
TRISG_TRISG1_LENGTH                      equ 0001h
TRISG_TRISG1_MASK                        equ 0002h
TRISG_TRISG2_POSN                        equ 0002h
TRISG_TRISG2_POSITION                    equ 0002h
TRISG_TRISG2_SIZE                        equ 0001h
TRISG_TRISG2_LENGTH                      equ 0001h
TRISG_TRISG2_MASK                        equ 0004h
TRISG_TRISG3_POSN                        equ 0003h
TRISG_TRISG3_POSITION                    equ 0003h
TRISG_TRISG3_SIZE                        equ 0001h
TRISG_TRISG3_LENGTH                      equ 0001h
TRISG_TRISG3_MASK                        equ 0008h
TRISG_TRISG4_POSN                        equ 0004h
TRISG_TRISG4_POSITION                    equ 0004h
TRISG_TRISG4_SIZE                        equ 0001h
TRISG_TRISG4_LENGTH                      equ 0001h
TRISG_TRISG4_MASK                        equ 0010h
TRISG_CCP1OD_POSN                        equ 0005h
TRISG_CCP1OD_POSITION                    equ 0005h
TRISG_CCP1OD_SIZE                        equ 0001h
TRISG_CCP1OD_LENGTH                      equ 0001h
TRISG_CCP1OD_MASK                        equ 0020h
TRISG_CCP2OD_POSN                        equ 0006h
TRISG_CCP2OD_POSITION                    equ 0006h
TRISG_CCP2OD_SIZE                        equ 0001h
TRISG_CCP2OD_LENGTH                      equ 0001h
TRISG_CCP2OD_MASK                        equ 0040h
TRISG_SPIOD_POSN                         equ 0007h
TRISG_SPIOD_POSITION                     equ 0007h
TRISG_SPIOD_SIZE                         equ 0001h
TRISG_SPIOD_LENGTH                       equ 0001h
TRISG_SPIOD_MASK                         equ 0080h

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
PIE1_SSPIE_POSN                          equ 0003h
PIE1_SSPIE_POSITION                      equ 0003h
PIE1_SSPIE_SIZE                          equ 0001h
PIE1_SSPIE_LENGTH                        equ 0001h
PIE1_SSPIE_MASK                          equ 0008h
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
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h
PIE1_SSP1IE_POSN                         equ 0003h
PIE1_SSP1IE_POSITION                     equ 0003h
PIE1_SSP1IE_SIZE                         equ 0001h
PIE1_SSP1IE_LENGTH                       equ 0001h
PIE1_SSP1IE_MASK                         equ 0008h
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
PIR1_SSPIF_POSN                          equ 0003h
PIR1_SSPIF_POSITION                      equ 0003h
PIR1_SSPIF_SIZE                          equ 0001h
PIR1_SSPIF_LENGTH                        equ 0001h
PIR1_SSPIF_MASK                          equ 0008h
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
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h
PIR1_SSP1IF_POSN                         equ 0003h
PIR1_SSP1IF_POSITION                     equ 0003h
PIR1_SSP1IF_SIZE                         equ 0001h
PIR1_SSP1IF_LENGTH                       equ 0001h
PIR1_SSP1IF_MASK                         equ 0008h
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
IPR1_SSPIP_POSN                          equ 0003h
IPR1_SSPIP_POSITION                      equ 0003h
IPR1_SSPIP_SIZE                          equ 0001h
IPR1_SSPIP_LENGTH                        equ 0001h
IPR1_SSPIP_MASK                          equ 0008h
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
IPR1_ADIP_POSN                           equ 0006h
IPR1_ADIP_POSITION                       equ 0006h
IPR1_ADIP_SIZE                           equ 0001h
IPR1_ADIP_LENGTH                         equ 0001h
IPR1_ADIP_MASK                           equ 0040h
IPR1_SSP1IP_POSN                         equ 0003h
IPR1_SSP1IP_POSITION                     equ 0003h
IPR1_SSP1IP_SIZE                         equ 0001h
IPR1_SSP1IP_LENGTH                       equ 0001h
IPR1_SSP1IP_MASK                         equ 0008h
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

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0FA0h
// bitfield definitions
PIE2_TMR3IE_POSN                         equ 0001h
PIE2_TMR3IE_POSITION                     equ 0001h
PIE2_TMR3IE_SIZE                         equ 0001h
PIE2_TMR3IE_LENGTH                       equ 0001h
PIE2_TMR3IE_MASK                         equ 0002h
PIE2_LVDIE_POSN                          equ 0002h
PIE2_LVDIE_POSITION                      equ 0002h
PIE2_LVDIE_SIZE                          equ 0001h
PIE2_LVDIE_LENGTH                        equ 0001h
PIE2_LVDIE_MASK                          equ 0004h
PIE2_BCLIE_POSN                          equ 0003h
PIE2_BCLIE_POSITION                      equ 0003h
PIE2_BCLIE_SIZE                          equ 0001h
PIE2_BCLIE_LENGTH                        equ 0001h
PIE2_BCLIE_MASK                          equ 0008h
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
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0FA1h
// bitfield definitions
PIR2_TMR3IF_POSN                         equ 0001h
PIR2_TMR3IF_POSITION                     equ 0001h
PIR2_TMR3IF_SIZE                         equ 0001h
PIR2_TMR3IF_LENGTH                       equ 0001h
PIR2_TMR3IF_MASK                         equ 0002h
PIR2_LVDIF_POSN                          equ 0002h
PIR2_LVDIF_POSITION                      equ 0002h
PIR2_LVDIF_SIZE                          equ 0001h
PIR2_LVDIF_LENGTH                        equ 0001h
PIR2_LVDIF_MASK                          equ 0004h
PIR2_BCLIF_POSN                          equ 0003h
PIR2_BCLIF_POSITION                      equ 0003h
PIR2_BCLIF_SIZE                          equ 0001h
PIR2_BCLIF_LENGTH                        equ 0001h
PIR2_BCLIF_MASK                          equ 0008h
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
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h

// Register: IPR2
#define IPR2 IPR2
IPR2                                     equ 0FA2h
// bitfield definitions
IPR2_TMR3IP_POSN                         equ 0001h
IPR2_TMR3IP_POSITION                     equ 0001h
IPR2_TMR3IP_SIZE                         equ 0001h
IPR2_TMR3IP_LENGTH                       equ 0001h
IPR2_TMR3IP_MASK                         equ 0002h
IPR2_LVDIP_POSN                          equ 0002h
IPR2_LVDIP_POSITION                      equ 0002h
IPR2_LVDIP_SIZE                          equ 0001h
IPR2_LVDIP_LENGTH                        equ 0001h
IPR2_LVDIP_MASK                          equ 0004h
IPR2_BCLIP_POSN                          equ 0003h
IPR2_BCLIP_POSITION                      equ 0003h
IPR2_BCLIP_SIZE                          equ 0001h
IPR2_BCLIP_LENGTH                        equ 0001h
IPR2_BCLIP_MASK                          equ 0008h
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
IPR2_BCL1IP_POSN                         equ 0003h
IPR2_BCL1IP_POSITION                     equ 0003h
IPR2_BCL1IP_SIZE                         equ 0001h
IPR2_BCL1IP_LENGTH                       equ 0001h
IPR2_BCL1IP_MASK                         equ 0008h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0FA3h
// bitfield definitions
PIE3_RTCCIE_POSN                         equ 0000h
PIE3_RTCCIE_POSITION                     equ 0000h
PIE3_RTCCIE_SIZE                         equ 0001h
PIE3_RTCCIE_LENGTH                       equ 0001h
PIE3_RTCCIE_MASK                         equ 0001h
PIE3_CCP1IE_POSN                         equ 0001h
PIE3_CCP1IE_POSITION                     equ 0001h
PIE3_CCP1IE_SIZE                         equ 0001h
PIE3_CCP1IE_LENGTH                       equ 0001h
PIE3_CCP1IE_MASK                         equ 0002h
PIE3_CCP2IE_POSN                         equ 0002h
PIE3_CCP2IE_POSITION                     equ 0002h
PIE3_CCP2IE_SIZE                         equ 0001h
PIE3_CCP2IE_LENGTH                       equ 0001h
PIE3_CCP2IE_MASK                         equ 0004h
PIE3_CTMUIE_POSN                         equ 0003h
PIE3_CTMUIE_POSITION                     equ 0003h
PIE3_CTMUIE_SIZE                         equ 0001h
PIE3_CTMUIE_LENGTH                       equ 0001h
PIE3_CTMUIE_MASK                         equ 0008h
PIE3_TX2IE_POSN                          equ 0004h
PIE3_TX2IE_POSITION                      equ 0004h
PIE3_TX2IE_SIZE                          equ 0001h
PIE3_TX2IE_LENGTH                        equ 0001h
PIE3_TX2IE_MASK                          equ 0010h
PIE3_RC2IE_POSN                          equ 0005h
PIE3_RC2IE_POSITION                      equ 0005h
PIE3_RC2IE_SIZE                          equ 0001h
PIE3_RC2IE_LENGTH                        equ 0001h
PIE3_RC2IE_MASK                          equ 0020h
PIE3_LCDIE_POSN                          equ 0006h
PIE3_LCDIE_POSITION                      equ 0006h
PIE3_LCDIE_SIZE                          equ 0001h
PIE3_LCDIE_LENGTH                        equ 0001h
PIE3_LCDIE_MASK                          equ 0040h
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
PIE3_TXB2IE_POSN                         equ 0004h
PIE3_TXB2IE_POSITION                     equ 0004h
PIE3_TXB2IE_SIZE                         equ 0001h
PIE3_TXB2IE_LENGTH                       equ 0001h
PIE3_TXB2IE_MASK                         equ 0010h
PIE3_RXBNIE_POSN                         equ 0001h
PIE3_RXBNIE_POSITION                     equ 0001h
PIE3_RXBNIE_SIZE                         equ 0001h
PIE3_RXBNIE_LENGTH                       equ 0001h
PIE3_RXBNIE_MASK                         equ 0002h
PIE3_TXBNIE_POSN                         equ 0004h
PIE3_TXBNIE_POSITION                     equ 0004h
PIE3_TXBNIE_SIZE                         equ 0001h
PIE3_TXBNIE_LENGTH                       equ 0001h
PIE3_TXBNIE_MASK                         equ 0010h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0FA4h
// bitfield definitions
PIR3_RTCCIF_POSN                         equ 0000h
PIR3_RTCCIF_POSITION                     equ 0000h
PIR3_RTCCIF_SIZE                         equ 0001h
PIR3_RTCCIF_LENGTH                       equ 0001h
PIR3_RTCCIF_MASK                         equ 0001h
PIR3_CCP1IF_POSN                         equ 0001h
PIR3_CCP1IF_POSITION                     equ 0001h
PIR3_CCP1IF_SIZE                         equ 0001h
PIR3_CCP1IF_LENGTH                       equ 0001h
PIR3_CCP1IF_MASK                         equ 0002h
PIR3_CCP2IF_POSN                         equ 0002h
PIR3_CCP2IF_POSITION                     equ 0002h
PIR3_CCP2IF_SIZE                         equ 0001h
PIR3_CCP2IF_LENGTH                       equ 0001h
PIR3_CCP2IF_MASK                         equ 0004h
PIR3_CTMUIF_POSN                         equ 0003h
PIR3_CTMUIF_POSITION                     equ 0003h
PIR3_CTMUIF_SIZE                         equ 0001h
PIR3_CTMUIF_LENGTH                       equ 0001h
PIR3_CTMUIF_MASK                         equ 0008h
PIR3_TX2IF_POSN                          equ 0004h
PIR3_TX2IF_POSITION                      equ 0004h
PIR3_TX2IF_SIZE                          equ 0001h
PIR3_TX2IF_LENGTH                        equ 0001h
PIR3_TX2IF_MASK                          equ 0010h
PIR3_RC2IF_POSN                          equ 0005h
PIR3_RC2IF_POSITION                      equ 0005h
PIR3_RC2IF_SIZE                          equ 0001h
PIR3_RC2IF_LENGTH                        equ 0001h
PIR3_RC2IF_MASK                          equ 0020h
PIR3_LCDIF_POSN                          equ 0006h
PIR3_LCDIF_POSITION                      equ 0006h
PIR3_LCDIF_SIZE                          equ 0001h
PIR3_LCDIF_LENGTH                        equ 0001h
PIR3_LCDIF_MASK                          equ 0040h
PIR3_RXBNIF_POSN                         equ 0001h
PIR3_RXBNIF_POSITION                     equ 0001h
PIR3_RXBNIF_SIZE                         equ 0001h
PIR3_RXBNIF_LENGTH                       equ 0001h
PIR3_RXBNIF_MASK                         equ 0002h
PIR3_TXBNIF_POSN                         equ 0004h
PIR3_TXBNIF_POSITION                     equ 0004h
PIR3_TXBNIF_SIZE                         equ 0001h
PIR3_TXBNIF_LENGTH                       equ 0001h
PIR3_TXBNIF_MASK                         equ 0010h

// Register: IPR3
#define IPR3 IPR3
IPR3                                     equ 0FA5h
// bitfield definitions
IPR3_RTCCIP_POSN                         equ 0000h
IPR3_RTCCIP_POSITION                     equ 0000h
IPR3_RTCCIP_SIZE                         equ 0001h
IPR3_RTCCIP_LENGTH                       equ 0001h
IPR3_RTCCIP_MASK                         equ 0001h
IPR3_CCP1IP_POSN                         equ 0001h
IPR3_CCP1IP_POSITION                     equ 0001h
IPR3_CCP1IP_SIZE                         equ 0001h
IPR3_CCP1IP_LENGTH                       equ 0001h
IPR3_CCP1IP_MASK                         equ 0002h
IPR3_CCP2IP_POSN                         equ 0002h
IPR3_CCP2IP_POSITION                     equ 0002h
IPR3_CCP2IP_SIZE                         equ 0001h
IPR3_CCP2IP_LENGTH                       equ 0001h
IPR3_CCP2IP_MASK                         equ 0004h
IPR3_CTMUIP_POSN                         equ 0003h
IPR3_CTMUIP_POSITION                     equ 0003h
IPR3_CTMUIP_SIZE                         equ 0001h
IPR3_CTMUIP_LENGTH                       equ 0001h
IPR3_CTMUIP_MASK                         equ 0008h
IPR3_TX2IP_POSN                          equ 0004h
IPR3_TX2IP_POSITION                      equ 0004h
IPR3_TX2IP_SIZE                          equ 0001h
IPR3_TX2IP_LENGTH                        equ 0001h
IPR3_TX2IP_MASK                          equ 0010h
IPR3_RC2IP_POSN                          equ 0005h
IPR3_RC2IP_POSITION                      equ 0005h
IPR3_RC2IP_SIZE                          equ 0001h
IPR3_RC2IP_LENGTH                        equ 0001h
IPR3_RC2IP_MASK                          equ 0020h
IPR3_LCDIP_POSN                          equ 0006h
IPR3_LCDIP_POSITION                      equ 0006h
IPR3_LCDIP_SIZE                          equ 0001h
IPR3_LCDIP_LENGTH                        equ 0001h
IPR3_LCDIP_MASK                          equ 0040h
IPR3_RXBNIP_POSN                         equ 0001h
IPR3_RXBNIP_POSITION                     equ 0001h
IPR3_RXBNIP_SIZE                         equ 0001h
IPR3_RXBNIP_LENGTH                       equ 0001h
IPR3_RXBNIP_MASK                         equ 0002h
IPR3_TXBNIP_POSN                         equ 0004h
IPR3_TXBNIP_POSITION                     equ 0004h
IPR3_TXBNIP_SIZE                         equ 0001h
IPR3_TXBNIP_LENGTH                       equ 0001h
IPR3_TXBNIP_MASK                         equ 0010h

// Register: EECON1
#define EECON1 EECON1
EECON1                                   equ 0FA6h
// bitfield definitions
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
EECON1_WPROG_POSN                        equ 0005h
EECON1_WPROG_POSITION                    equ 0005h
EECON1_WPROG_SIZE                        equ 0001h
EECON1_WPROG_LENGTH                      equ 0001h
EECON1_WPROG_MASK                        equ 0020h

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 0FA7h
// bitfield definitions
EECON2_EECON2_POSN                       equ 0000h
EECON2_EECON2_POSITION                   equ 0000h
EECON2_EECON2_SIZE                       equ 0008h
EECON2_EECON2_LENGTH                     equ 0008h
EECON2_EECON2_MASK                       equ 00FFh

// Register: LCDCON
#define LCDCON LCDCON
LCDCON                                   equ 0FA8h
// bitfield definitions
LCDCON_LMUX0_POSN                        equ 0000h
LCDCON_LMUX0_POSITION                    equ 0000h
LCDCON_LMUX0_SIZE                        equ 0001h
LCDCON_LMUX0_LENGTH                      equ 0001h
LCDCON_LMUX0_MASK                        equ 0001h
LCDCON_LMUX1_POSN                        equ 0001h
LCDCON_LMUX1_POSITION                    equ 0001h
LCDCON_LMUX1_SIZE                        equ 0001h
LCDCON_LMUX1_LENGTH                      equ 0001h
LCDCON_LMUX1_MASK                        equ 0002h
LCDCON_CS0_POSN                          equ 0002h
LCDCON_CS0_POSITION                      equ 0002h
LCDCON_CS0_SIZE                          equ 0001h
LCDCON_CS0_LENGTH                        equ 0001h
LCDCON_CS0_MASK                          equ 0004h
LCDCON_CS1_POSN                          equ 0003h
LCDCON_CS1_POSITION                      equ 0003h
LCDCON_CS1_SIZE                          equ 0001h
LCDCON_CS1_LENGTH                        equ 0001h
LCDCON_CS1_MASK                          equ 0008h
LCDCON_WERR_POSN                         equ 0005h
LCDCON_WERR_POSITION                     equ 0005h
LCDCON_WERR_SIZE                         equ 0001h
LCDCON_WERR_LENGTH                       equ 0001h
LCDCON_WERR_MASK                         equ 0020h
LCDCON_SLPEN_POSN                        equ 0006h
LCDCON_SLPEN_POSITION                    equ 0006h
LCDCON_SLPEN_SIZE                        equ 0001h
LCDCON_SLPEN_LENGTH                      equ 0001h
LCDCON_SLPEN_MASK                        equ 0040h
LCDCON_LCDEN_POSN                        equ 0007h
LCDCON_LCDEN_POSITION                    equ 0007h
LCDCON_LCDEN_SIZE                        equ 0001h
LCDCON_LCDEN_LENGTH                      equ 0001h
LCDCON_LCDEN_MASK                        equ 0080h
LCDCON_LCDCS0_POSN                       equ 0002h
LCDCON_LCDCS0_POSITION                   equ 0002h
LCDCON_LCDCS0_SIZE                       equ 0001h
LCDCON_LCDCS0_LENGTH                     equ 0001h
LCDCON_LCDCS0_MASK                       equ 0004h
LCDCON_LCDCS1_POSN                       equ 0003h
LCDCON_LCDCS1_POSITION                   equ 0003h
LCDCON_LCDCS1_SIZE                       equ 0001h
LCDCON_LCDCS1_LENGTH                     equ 0001h
LCDCON_LCDCS1_MASK                       equ 0008h
LCDCON_LCDWERR_POSN                      equ 0005h
LCDCON_LCDWERR_POSITION                  equ 0005h
LCDCON_LCDWERR_SIZE                      equ 0001h
LCDCON_LCDWERR_LENGTH                    equ 0001h
LCDCON_LCDWERR_MASK                      equ 0020h
LCDCON_LCDSLPEN_POSN                     equ 0006h
LCDCON_LCDSLPEN_POSITION                 equ 0006h
LCDCON_LCDSLPEN_SIZE                     equ 0001h
LCDCON_LCDSLPEN_LENGTH                   equ 0001h
LCDCON_LCDSLPEN_MASK                     equ 0040h

// Register: LCDSE0
#define LCDSE0 LCDSE0
LCDSE0                                   equ 0FA9h
// bitfield definitions
LCDSE0_LCDSE0_POSN                       equ 0000h
LCDSE0_LCDSE0_POSITION                   equ 0000h
LCDSE0_LCDSE0_SIZE                       equ 0008h
LCDSE0_LCDSE0_LENGTH                     equ 0008h
LCDSE0_LCDSE0_MASK                       equ 00FFh
LCDSE0_SE0_POSN                          equ 0000h
LCDSE0_SE0_POSITION                      equ 0000h
LCDSE0_SE0_SIZE                          equ 0001h
LCDSE0_SE0_LENGTH                        equ 0001h
LCDSE0_SE0_MASK                          equ 0001h
LCDSE0_SE1_POSN                          equ 0001h
LCDSE0_SE1_POSITION                      equ 0001h
LCDSE0_SE1_SIZE                          equ 0001h
LCDSE0_SE1_LENGTH                        equ 0001h
LCDSE0_SE1_MASK                          equ 0002h
LCDSE0_SE2_POSN                          equ 0002h
LCDSE0_SE2_POSITION                      equ 0002h
LCDSE0_SE2_SIZE                          equ 0001h
LCDSE0_SE2_LENGTH                        equ 0001h
LCDSE0_SE2_MASK                          equ 0004h
LCDSE0_SE3_POSN                          equ 0003h
LCDSE0_SE3_POSITION                      equ 0003h
LCDSE0_SE3_SIZE                          equ 0001h
LCDSE0_SE3_LENGTH                        equ 0001h
LCDSE0_SE3_MASK                          equ 0008h
LCDSE0_SE4_POSN                          equ 0004h
LCDSE0_SE4_POSITION                      equ 0004h
LCDSE0_SE4_SIZE                          equ 0001h
LCDSE0_SE4_LENGTH                        equ 0001h
LCDSE0_SE4_MASK                          equ 0010h
LCDSE0_SE5_POSN                          equ 0005h
LCDSE0_SE5_POSITION                      equ 0005h
LCDSE0_SE5_SIZE                          equ 0001h
LCDSE0_SE5_LENGTH                        equ 0001h
LCDSE0_SE5_MASK                          equ 0020h
LCDSE0_SE6_POSN                          equ 0006h
LCDSE0_SE6_POSITION                      equ 0006h
LCDSE0_SE6_SIZE                          equ 0001h
LCDSE0_SE6_LENGTH                        equ 0001h
LCDSE0_SE6_MASK                          equ 0040h
LCDSE0_SE7_POSN                          equ 0007h
LCDSE0_SE7_POSITION                      equ 0007h
LCDSE0_SE7_SIZE                          equ 0001h
LCDSE0_SE7_LENGTH                        equ 0001h
LCDSE0_SE7_MASK                          equ 0080h
LCDSE0_SEGEN0_POSN                       equ 0000h
LCDSE0_SEGEN0_POSITION                   equ 0000h
LCDSE0_SEGEN0_SIZE                       equ 0001h
LCDSE0_SEGEN0_LENGTH                     equ 0001h
LCDSE0_SEGEN0_MASK                       equ 0001h
LCDSE0_SEGEN1_POSN                       equ 0001h
LCDSE0_SEGEN1_POSITION                   equ 0001h
LCDSE0_SEGEN1_SIZE                       equ 0001h
LCDSE0_SEGEN1_LENGTH                     equ 0001h
LCDSE0_SEGEN1_MASK                       equ 0002h
LCDSE0_SEGEN2_POSN                       equ 0002h
LCDSE0_SEGEN2_POSITION                   equ 0002h
LCDSE0_SEGEN2_SIZE                       equ 0001h
LCDSE0_SEGEN2_LENGTH                     equ 0001h
LCDSE0_SEGEN2_MASK                       equ 0004h
LCDSE0_SEGEN3_POSN                       equ 0003h
LCDSE0_SEGEN3_POSITION                   equ 0003h
LCDSE0_SEGEN3_SIZE                       equ 0001h
LCDSE0_SEGEN3_LENGTH                     equ 0001h
LCDSE0_SEGEN3_MASK                       equ 0008h
LCDSE0_SEGEN4_POSN                       equ 0004h
LCDSE0_SEGEN4_POSITION                   equ 0004h
LCDSE0_SEGEN4_SIZE                       equ 0001h
LCDSE0_SEGEN4_LENGTH                     equ 0001h
LCDSE0_SEGEN4_MASK                       equ 0010h
LCDSE0_SEGEN5_POSN                       equ 0005h
LCDSE0_SEGEN5_POSITION                   equ 0005h
LCDSE0_SEGEN5_SIZE                       equ 0001h
LCDSE0_SEGEN5_LENGTH                     equ 0001h
LCDSE0_SEGEN5_MASK                       equ 0020h
LCDSE0_SEGEN6_POSN                       equ 0006h
LCDSE0_SEGEN6_POSITION                   equ 0006h
LCDSE0_SEGEN6_SIZE                       equ 0001h
LCDSE0_SEGEN6_LENGTH                     equ 0001h
LCDSE0_SEGEN6_MASK                       equ 0040h
LCDSE0_SEGEN7_POSN                       equ 0007h
LCDSE0_SEGEN7_POSITION                   equ 0007h
LCDSE0_SEGEN7_SIZE                       equ 0001h
LCDSE0_SEGEN7_LENGTH                     equ 0001h
LCDSE0_SEGEN7_MASK                       equ 0080h
LCDSE0_SE00_POSN                         equ 0000h
LCDSE0_SE00_POSITION                     equ 0000h
LCDSE0_SE00_SIZE                         equ 0001h
LCDSE0_SE00_LENGTH                       equ 0001h
LCDSE0_SE00_MASK                         equ 0001h
LCDSE0_SE01_POSN                         equ 0001h
LCDSE0_SE01_POSITION                     equ 0001h
LCDSE0_SE01_SIZE                         equ 0001h
LCDSE0_SE01_LENGTH                       equ 0001h
LCDSE0_SE01_MASK                         equ 0002h
LCDSE0_SE02_POSN                         equ 0002h
LCDSE0_SE02_POSITION                     equ 0002h
LCDSE0_SE02_SIZE                         equ 0001h
LCDSE0_SE02_LENGTH                       equ 0001h
LCDSE0_SE02_MASK                         equ 0004h
LCDSE0_SE03_POSN                         equ 0003h
LCDSE0_SE03_POSITION                     equ 0003h
LCDSE0_SE03_SIZE                         equ 0001h
LCDSE0_SE03_LENGTH                       equ 0001h
LCDSE0_SE03_MASK                         equ 0008h
LCDSE0_SE04_POSN                         equ 0004h
LCDSE0_SE04_POSITION                     equ 0004h
LCDSE0_SE04_SIZE                         equ 0001h
LCDSE0_SE04_LENGTH                       equ 0001h
LCDSE0_SE04_MASK                         equ 0010h
LCDSE0_SE05_POSN                         equ 0005h
LCDSE0_SE05_POSITION                     equ 0005h
LCDSE0_SE05_SIZE                         equ 0001h
LCDSE0_SE05_LENGTH                       equ 0001h
LCDSE0_SE05_MASK                         equ 0020h
LCDSE0_SE06_POSN                         equ 0006h
LCDSE0_SE06_POSITION                     equ 0006h
LCDSE0_SE06_SIZE                         equ 0001h
LCDSE0_SE06_LENGTH                       equ 0001h
LCDSE0_SE06_MASK                         equ 0040h
LCDSE0_SE07_POSN                         equ 0007h
LCDSE0_SE07_POSITION                     equ 0007h
LCDSE0_SE07_SIZE                         equ 0001h
LCDSE0_SE07_LENGTH                       equ 0001h
LCDSE0_SE07_MASK                         equ 0080h

// Register: LCDPS
#define LCDPS LCDPS
LCDPS                                    equ 0FAAh
// bitfield definitions
LCDPS_LP0_POSN                           equ 0000h
LCDPS_LP0_POSITION                       equ 0000h
LCDPS_LP0_SIZE                           equ 0001h
LCDPS_LP0_LENGTH                         equ 0001h
LCDPS_LP0_MASK                           equ 0001h
LCDPS_LP1_POSN                           equ 0001h
LCDPS_LP1_POSITION                       equ 0001h
LCDPS_LP1_SIZE                           equ 0001h
LCDPS_LP1_LENGTH                         equ 0001h
LCDPS_LP1_MASK                           equ 0002h
LCDPS_LP2_POSN                           equ 0002h
LCDPS_LP2_POSITION                       equ 0002h
LCDPS_LP2_SIZE                           equ 0001h
LCDPS_LP2_LENGTH                         equ 0001h
LCDPS_LP2_MASK                           equ 0004h
LCDPS_LP3_POSN                           equ 0003h
LCDPS_LP3_POSITION                       equ 0003h
LCDPS_LP3_SIZE                           equ 0001h
LCDPS_LP3_LENGTH                         equ 0001h
LCDPS_LP3_MASK                           equ 0008h
LCDPS_WA_POSN                            equ 0004h
LCDPS_WA_POSITION                        equ 0004h
LCDPS_WA_SIZE                            equ 0001h
LCDPS_WA_LENGTH                          equ 0001h
LCDPS_WA_MASK                            equ 0010h
LCDPS_LCDA_POSN                          equ 0005h
LCDPS_LCDA_POSITION                      equ 0005h
LCDPS_LCDA_SIZE                          equ 0001h
LCDPS_LCDA_LENGTH                        equ 0001h
LCDPS_LCDA_MASK                          equ 0020h
LCDPS_BIASMD_POSN                        equ 0006h
LCDPS_BIASMD_POSITION                    equ 0006h
LCDPS_BIASMD_SIZE                        equ 0001h
LCDPS_BIASMD_LENGTH                      equ 0001h
LCDPS_BIASMD_MASK                        equ 0040h
LCDPS_WFT_POSN                           equ 0007h
LCDPS_WFT_POSITION                       equ 0007h
LCDPS_WFT_SIZE                           equ 0001h
LCDPS_WFT_LENGTH                         equ 0001h
LCDPS_WFT_MASK                           equ 0080h
LCDPS_LCDPS0_POSN                        equ 0000h
LCDPS_LCDPS0_POSITION                    equ 0000h
LCDPS_LCDPS0_SIZE                        equ 0001h
LCDPS_LCDPS0_LENGTH                      equ 0001h
LCDPS_LCDPS0_MASK                        equ 0001h
LCDPS_LCDPS1_POSN                        equ 0001h
LCDPS_LCDPS1_POSITION                    equ 0001h
LCDPS_LCDPS1_SIZE                        equ 0001h
LCDPS_LCDPS1_LENGTH                      equ 0001h
LCDPS_LCDPS1_MASK                        equ 0002h
LCDPS_LCDPS2_POSN                        equ 0002h
LCDPS_LCDPS2_POSITION                    equ 0002h
LCDPS_LCDPS2_SIZE                        equ 0001h
LCDPS_LCDPS2_LENGTH                      equ 0001h
LCDPS_LCDPS2_MASK                        equ 0004h
LCDPS_LCDPS3_POSN                        equ 0003h
LCDPS_LCDPS3_POSITION                    equ 0003h
LCDPS_LCDPS3_SIZE                        equ 0001h
LCDPS_LCDPS3_LENGTH                      equ 0001h
LCDPS_LCDPS3_MASK                        equ 0008h

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
RCSTA1_RCD8_POSN                         equ 0000h
RCSTA1_RCD8_POSITION                     equ 0000h
RCSTA1_RCD8_SIZE                         equ 0001h
RCSTA1_RCD8_LENGTH                       equ 0001h
RCSTA1_RCD8_MASK                         equ 0001h
RCSTA1_ADEN_POSN                         equ 0003h
RCSTA1_ADEN_POSITION                     equ 0003h
RCSTA1_ADEN_SIZE                         equ 0001h
RCSTA1_ADEN_LENGTH                       equ 0001h
RCSTA1_ADEN_MASK                         equ 0008h
RCSTA1_RC9_POSN                          equ 0006h
RCSTA1_RC9_POSITION                      equ 0006h
RCSTA1_RC9_SIZE                          equ 0001h
RCSTA1_RC9_LENGTH                        equ 0001h
RCSTA1_RC9_MASK                          equ 0040h
RCSTA1_NOT_RC8_POSN                      equ 0006h
RCSTA1_NOT_RC8_POSITION                  equ 0006h
RCSTA1_NOT_RC8_SIZE                      equ 0001h
RCSTA1_NOT_RC8_LENGTH                    equ 0001h
RCSTA1_NOT_RC8_MASK                      equ 0040h
RCSTA1_nRC8_POSN                         equ 0006h
RCSTA1_nRC8_POSITION                     equ 0006h
RCSTA1_nRC8_SIZE                         equ 0001h
RCSTA1_nRC8_LENGTH                       equ 0001h
RCSTA1_nRC8_MASK                         equ 0040h
RCSTA1_RC8_9_POSN                        equ 0006h
RCSTA1_RC8_9_POSITION                    equ 0006h
RCSTA1_RC8_9_SIZE                        equ 0001h
RCSTA1_RC8_9_LENGTH                      equ 0001h
RCSTA1_RC8_9_MASK                        equ 0040h
RCSTA1_RX9D1_POSN                        equ 0000h
RCSTA1_RX9D1_POSITION                    equ 0000h
RCSTA1_RX9D1_SIZE                        equ 0001h
RCSTA1_RX9D1_LENGTH                      equ 0001h
RCSTA1_RX9D1_MASK                        equ 0001h
RCSTA1_OERR1_POSN                        equ 0001h
RCSTA1_OERR1_POSITION                    equ 0001h
RCSTA1_OERR1_SIZE                        equ 0001h
RCSTA1_OERR1_LENGTH                      equ 0001h
RCSTA1_OERR1_MASK                        equ 0002h
RCSTA1_FERR1_POSN                        equ 0002h
RCSTA1_FERR1_POSITION                    equ 0002h
RCSTA1_FERR1_SIZE                        equ 0001h
RCSTA1_FERR1_LENGTH                      equ 0001h
RCSTA1_FERR1_MASK                        equ 0004h
RCSTA1_ADDEN1_POSN                       equ 0003h
RCSTA1_ADDEN1_POSITION                   equ 0003h
RCSTA1_ADDEN1_SIZE                       equ 0001h
RCSTA1_ADDEN1_LENGTH                     equ 0001h
RCSTA1_ADDEN1_MASK                       equ 0008h
RCSTA1_CREN1_POSN                        equ 0004h
RCSTA1_CREN1_POSITION                    equ 0004h
RCSTA1_CREN1_SIZE                        equ 0001h
RCSTA1_CREN1_LENGTH                      equ 0001h
RCSTA1_CREN1_MASK                        equ 0010h
RCSTA1_SREN1_POSN                        equ 0005h
RCSTA1_SREN1_POSITION                    equ 0005h
RCSTA1_SREN1_SIZE                        equ 0001h
RCSTA1_SREN1_LENGTH                      equ 0001h
RCSTA1_SREN1_MASK                        equ 0020h
RCSTA1_RX91_POSN                         equ 0006h
RCSTA1_RX91_POSITION                     equ 0006h
RCSTA1_RX91_SIZE                         equ 0001h
RCSTA1_RX91_LENGTH                       equ 0001h
RCSTA1_RX91_MASK                         equ 0040h
RCSTA1_SPEN1_POSN                        equ 0007h
RCSTA1_SPEN1_POSITION                    equ 0007h
RCSTA1_SPEN1_SIZE                        equ 0001h
RCSTA1_SPEN1_LENGTH                      equ 0001h
RCSTA1_SPEN1_MASK                        equ 0080h
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
TXSTA1_NOT_TX8_POSN                      equ 0006h
TXSTA1_NOT_TX8_POSITION                  equ 0006h
TXSTA1_NOT_TX8_SIZE                      equ 0001h
TXSTA1_NOT_TX8_LENGTH                    equ 0001h
TXSTA1_NOT_TX8_MASK                      equ 0040h
TXSTA1_nTX8_POSN                         equ 0006h
TXSTA1_nTX8_POSITION                     equ 0006h
TXSTA1_nTX8_SIZE                         equ 0001h
TXSTA1_nTX8_LENGTH                       equ 0001h
TXSTA1_nTX8_MASK                         equ 0040h
TXSTA1_TX9D1_POSN                        equ 0000h
TXSTA1_TX9D1_POSITION                    equ 0000h
TXSTA1_TX9D1_SIZE                        equ 0001h
TXSTA1_TX9D1_LENGTH                      equ 0001h
TXSTA1_TX9D1_MASK                        equ 0001h
TXSTA1_TRMT1_POSN                        equ 0001h
TXSTA1_TRMT1_POSITION                    equ 0001h
TXSTA1_TRMT1_SIZE                        equ 0001h
TXSTA1_TRMT1_LENGTH                      equ 0001h
TXSTA1_TRMT1_MASK                        equ 0002h
TXSTA1_BRGH1_POSN                        equ 0002h
TXSTA1_BRGH1_POSITION                    equ 0002h
TXSTA1_BRGH1_SIZE                        equ 0001h
TXSTA1_BRGH1_LENGTH                      equ 0001h
TXSTA1_BRGH1_MASK                        equ 0004h
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
TXSTA1_TXEN1_POSN                        equ 0005h
TXSTA1_TXEN1_POSITION                    equ 0005h
TXSTA1_TXEN1_SIZE                        equ 0001h
TXSTA1_TXEN1_LENGTH                      equ 0001h
TXSTA1_TXEN1_MASK                        equ 0020h
TXSTA1_TX91_POSN                         equ 0006h
TXSTA1_TX91_POSITION                     equ 0006h
TXSTA1_TX91_SIZE                         equ 0001h
TXSTA1_TX91_LENGTH                       equ 0001h
TXSTA1_TX91_MASK                         equ 0040h
TXSTA1_CSRC1_POSN                        equ 0007h
TXSTA1_CSRC1_POSITION                    equ 0007h
TXSTA1_CSRC1_SIZE                        equ 0001h
TXSTA1_CSRC1_LENGTH                      equ 0001h
TXSTA1_CSRC1_MASK                        equ 0080h

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
T3CON_T3INSYNC_POSN                      equ 0002h
T3CON_T3INSYNC_POSITION                  equ 0002h
T3CON_T3INSYNC_SIZE                      equ 0001h
T3CON_T3INSYNC_LENGTH                    equ 0001h
T3CON_T3INSYNC_MASK                      equ 0004h
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
CVRCON_CVROEN_POSN                       equ 0006h
CVRCON_CVROEN_POSITION                   equ 0006h
CVRCON_CVROEN_SIZE                       equ 0001h
CVRCON_CVROEN_LENGTH                     equ 0001h
CVRCON_CVROEN_MASK                       equ 0040h

// Register: LCDSE1
#define LCDSE1 LCDSE1
LCDSE1                                   equ 0FB6h
// bitfield definitions
LCDSE1_LCDSE1_POSN                       equ 0000h
LCDSE1_LCDSE1_POSITION                   equ 0000h
LCDSE1_LCDSE1_SIZE                       equ 0008h
LCDSE1_LCDSE1_LENGTH                     equ 0008h
LCDSE1_LCDSE1_MASK                       equ 00FFh
LCDSE1_SE8_POSN                          equ 0000h
LCDSE1_SE8_POSITION                      equ 0000h
LCDSE1_SE8_SIZE                          equ 0001h
LCDSE1_SE8_LENGTH                        equ 0001h
LCDSE1_SE8_MASK                          equ 0001h
LCDSE1_SE9_POSN                          equ 0001h
LCDSE1_SE9_POSITION                      equ 0001h
LCDSE1_SE9_SIZE                          equ 0001h
LCDSE1_SE9_LENGTH                        equ 0001h
LCDSE1_SE9_MASK                          equ 0002h
LCDSE1_SE10_POSN                         equ 0002h
LCDSE1_SE10_POSITION                     equ 0002h
LCDSE1_SE10_SIZE                         equ 0001h
LCDSE1_SE10_LENGTH                       equ 0001h
LCDSE1_SE10_MASK                         equ 0004h
LCDSE1_SE11_POSN                         equ 0003h
LCDSE1_SE11_POSITION                     equ 0003h
LCDSE1_SE11_SIZE                         equ 0001h
LCDSE1_SE11_LENGTH                       equ 0001h
LCDSE1_SE11_MASK                         equ 0008h
LCDSE1_SE12_POSN                         equ 0004h
LCDSE1_SE12_POSITION                     equ 0004h
LCDSE1_SE12_SIZE                         equ 0001h
LCDSE1_SE12_LENGTH                       equ 0001h
LCDSE1_SE12_MASK                         equ 0010h
LCDSE1_SE13_POSN                         equ 0005h
LCDSE1_SE13_POSITION                     equ 0005h
LCDSE1_SE13_SIZE                         equ 0001h
LCDSE1_SE13_LENGTH                       equ 0001h
LCDSE1_SE13_MASK                         equ 0020h
LCDSE1_SE14_POSN                         equ 0006h
LCDSE1_SE14_POSITION                     equ 0006h
LCDSE1_SE14_SIZE                         equ 0001h
LCDSE1_SE14_LENGTH                       equ 0001h
LCDSE1_SE14_MASK                         equ 0040h
LCDSE1_SE15_POSN                         equ 0007h
LCDSE1_SE15_POSITION                     equ 0007h
LCDSE1_SE15_SIZE                         equ 0001h
LCDSE1_SE15_LENGTH                       equ 0001h
LCDSE1_SE15_MASK                         equ 0080h
LCDSE1_SEGEN8_POSN                       equ 0000h
LCDSE1_SEGEN8_POSITION                   equ 0000h
LCDSE1_SEGEN8_SIZE                       equ 0001h
LCDSE1_SEGEN8_LENGTH                     equ 0001h
LCDSE1_SEGEN8_MASK                       equ 0001h
LCDSE1_SEGEN9_POSN                       equ 0001h
LCDSE1_SEGEN9_POSITION                   equ 0001h
LCDSE1_SEGEN9_SIZE                       equ 0001h
LCDSE1_SEGEN9_LENGTH                     equ 0001h
LCDSE1_SEGEN9_MASK                       equ 0002h
LCDSE1_SEGEN10_POSN                      equ 0002h
LCDSE1_SEGEN10_POSITION                  equ 0002h
LCDSE1_SEGEN10_SIZE                      equ 0001h
LCDSE1_SEGEN10_LENGTH                    equ 0001h
LCDSE1_SEGEN10_MASK                      equ 0004h
LCDSE1_SEGEN11_POSN                      equ 0003h
LCDSE1_SEGEN11_POSITION                  equ 0003h
LCDSE1_SEGEN11_SIZE                      equ 0001h
LCDSE1_SEGEN11_LENGTH                    equ 0001h
LCDSE1_SEGEN11_MASK                      equ 0008h
LCDSE1_SEGEN12_POSN                      equ 0004h
LCDSE1_SEGEN12_POSITION                  equ 0004h
LCDSE1_SEGEN12_SIZE                      equ 0001h
LCDSE1_SEGEN12_LENGTH                    equ 0001h
LCDSE1_SEGEN12_MASK                      equ 0010h
LCDSE1_SEGEN13_POSN                      equ 0005h
LCDSE1_SEGEN13_POSITION                  equ 0005h
LCDSE1_SEGEN13_SIZE                      equ 0001h
LCDSE1_SEGEN13_LENGTH                    equ 0001h
LCDSE1_SEGEN13_MASK                      equ 0020h
LCDSE1_SEGEN14_POSN                      equ 0006h
LCDSE1_SEGEN14_POSITION                  equ 0006h
LCDSE1_SEGEN14_SIZE                      equ 0001h
LCDSE1_SEGEN14_LENGTH                    equ 0001h
LCDSE1_SEGEN14_MASK                      equ 0040h
LCDSE1_SEGEN15_POSN                      equ 0007h
LCDSE1_SEGEN15_POSITION                  equ 0007h
LCDSE1_SEGEN15_SIZE                      equ 0001h
LCDSE1_SEGEN15_LENGTH                    equ 0001h
LCDSE1_SEGEN15_MASK                      equ 0080h
LCDSE1_SE08_POSN                         equ 0000h
LCDSE1_SE08_POSITION                     equ 0000h
LCDSE1_SE08_SIZE                         equ 0001h
LCDSE1_SE08_LENGTH                       equ 0001h
LCDSE1_SE08_MASK                         equ 0001h
LCDSE1_SE09_POSN                         equ 0001h
LCDSE1_SE09_POSITION                     equ 0001h
LCDSE1_SE09_SIZE                         equ 0001h
LCDSE1_SE09_LENGTH                       equ 0001h
LCDSE1_SE09_MASK                         equ 0002h

// Register: LCDSE2
#define LCDSE2 LCDSE2
LCDSE2                                   equ 0FB7h
// bitfield definitions
LCDSE2_LCDSE2_POSN                       equ 0000h
LCDSE2_LCDSE2_POSITION                   equ 0000h
LCDSE2_LCDSE2_SIZE                       equ 0008h
LCDSE2_LCDSE2_LENGTH                     equ 0008h
LCDSE2_LCDSE2_MASK                       equ 00FFh
LCDSE2_SE16_POSN                         equ 0000h
LCDSE2_SE16_POSITION                     equ 0000h
LCDSE2_SE16_SIZE                         equ 0001h
LCDSE2_SE16_LENGTH                       equ 0001h
LCDSE2_SE16_MASK                         equ 0001h
LCDSE2_SE17_POSN                         equ 0001h
LCDSE2_SE17_POSITION                     equ 0001h
LCDSE2_SE17_SIZE                         equ 0001h
LCDSE2_SE17_LENGTH                       equ 0001h
LCDSE2_SE17_MASK                         equ 0002h
LCDSE2_SE18_POSN                         equ 0002h
LCDSE2_SE18_POSITION                     equ 0002h
LCDSE2_SE18_SIZE                         equ 0001h
LCDSE2_SE18_LENGTH                       equ 0001h
LCDSE2_SE18_MASK                         equ 0004h
LCDSE2_SE19_POSN                         equ 0003h
LCDSE2_SE19_POSITION                     equ 0003h
LCDSE2_SE19_SIZE                         equ 0001h
LCDSE2_SE19_LENGTH                       equ 0001h
LCDSE2_SE19_MASK                         equ 0008h
LCDSE2_SE20_POSN                         equ 0004h
LCDSE2_SE20_POSITION                     equ 0004h
LCDSE2_SE20_SIZE                         equ 0001h
LCDSE2_SE20_LENGTH                       equ 0001h
LCDSE2_SE20_MASK                         equ 0010h
LCDSE2_SE21_POSN                         equ 0005h
LCDSE2_SE21_POSITION                     equ 0005h
LCDSE2_SE21_SIZE                         equ 0001h
LCDSE2_SE21_LENGTH                       equ 0001h
LCDSE2_SE21_MASK                         equ 0020h
LCDSE2_SE22_POSN                         equ 0006h
LCDSE2_SE22_POSITION                     equ 0006h
LCDSE2_SE22_SIZE                         equ 0001h
LCDSE2_SE22_LENGTH                       equ 0001h
LCDSE2_SE22_MASK                         equ 0040h
LCDSE2_SE23_POSN                         equ 0007h
LCDSE2_SE23_POSITION                     equ 0007h
LCDSE2_SE23_SIZE                         equ 0001h
LCDSE2_SE23_LENGTH                       equ 0001h
LCDSE2_SE23_MASK                         equ 0080h
LCDSE2_SEGEN16_POSN                      equ 0000h
LCDSE2_SEGEN16_POSITION                  equ 0000h
LCDSE2_SEGEN16_SIZE                      equ 0001h
LCDSE2_SEGEN16_LENGTH                    equ 0001h
LCDSE2_SEGEN16_MASK                      equ 0001h
LCDSE2_SEGEN17_POSN                      equ 0001h
LCDSE2_SEGEN17_POSITION                  equ 0001h
LCDSE2_SEGEN17_SIZE                      equ 0001h
LCDSE2_SEGEN17_LENGTH                    equ 0001h
LCDSE2_SEGEN17_MASK                      equ 0002h
LCDSE2_SEGEN18_POSN                      equ 0002h
LCDSE2_SEGEN18_POSITION                  equ 0002h
LCDSE2_SEGEN18_SIZE                      equ 0001h
LCDSE2_SEGEN18_LENGTH                    equ 0001h
LCDSE2_SEGEN18_MASK                      equ 0004h
LCDSE2_SEGEN19_POSN                      equ 0003h
LCDSE2_SEGEN19_POSITION                  equ 0003h
LCDSE2_SEGEN19_SIZE                      equ 0001h
LCDSE2_SEGEN19_LENGTH                    equ 0001h
LCDSE2_SEGEN19_MASK                      equ 0008h
LCDSE2_SEGEN20_POSN                      equ 0004h
LCDSE2_SEGEN20_POSITION                  equ 0004h
LCDSE2_SEGEN20_SIZE                      equ 0001h
LCDSE2_SEGEN20_LENGTH                    equ 0001h
LCDSE2_SEGEN20_MASK                      equ 0010h
LCDSE2_SEGEN21_POSN                      equ 0005h
LCDSE2_SEGEN21_POSITION                  equ 0005h
LCDSE2_SEGEN21_SIZE                      equ 0001h
LCDSE2_SEGEN21_LENGTH                    equ 0001h
LCDSE2_SEGEN21_MASK                      equ 0020h
LCDSE2_SEGEN22_POSN                      equ 0006h
LCDSE2_SEGEN22_POSITION                  equ 0006h
LCDSE2_SEGEN22_SIZE                      equ 0001h
LCDSE2_SEGEN22_LENGTH                    equ 0001h
LCDSE2_SEGEN22_MASK                      equ 0040h
LCDSE2_SEGEN23_POSN                      equ 0007h
LCDSE2_SEGEN23_POSITION                  equ 0007h
LCDSE2_SEGEN23_SIZE                      equ 0001h
LCDSE2_SEGEN23_LENGTH                    equ 0001h
LCDSE2_SEGEN23_MASK                      equ 0080h

// Register: LCDSE3
#define LCDSE3 LCDSE3
LCDSE3                                   equ 0FB8h
// bitfield definitions
LCDSE3_LCDSE3_POSN                       equ 0000h
LCDSE3_LCDSE3_POSITION                   equ 0000h
LCDSE3_LCDSE3_SIZE                       equ 0008h
LCDSE3_LCDSE3_LENGTH                     equ 0008h
LCDSE3_LCDSE3_MASK                       equ 00FFh
LCDSE3_SE24_POSN                         equ 0000h
LCDSE3_SE24_POSITION                     equ 0000h
LCDSE3_SE24_SIZE                         equ 0001h
LCDSE3_SE24_LENGTH                       equ 0001h
LCDSE3_SE24_MASK                         equ 0001h
LCDSE3_SE25_POSN                         equ 0001h
LCDSE3_SE25_POSITION                     equ 0001h
LCDSE3_SE25_SIZE                         equ 0001h
LCDSE3_SE25_LENGTH                       equ 0001h
LCDSE3_SE25_MASK                         equ 0002h
LCDSE3_SE26_POSN                         equ 0002h
LCDSE3_SE26_POSITION                     equ 0002h
LCDSE3_SE26_SIZE                         equ 0001h
LCDSE3_SE26_LENGTH                       equ 0001h
LCDSE3_SE26_MASK                         equ 0004h
LCDSE3_SE27_POSN                         equ 0003h
LCDSE3_SE27_POSITION                     equ 0003h
LCDSE3_SE27_SIZE                         equ 0001h
LCDSE3_SE27_LENGTH                       equ 0001h
LCDSE3_SE27_MASK                         equ 0008h
LCDSE3_SE28_POSN                         equ 0004h
LCDSE3_SE28_POSITION                     equ 0004h
LCDSE3_SE28_SIZE                         equ 0001h
LCDSE3_SE28_LENGTH                       equ 0001h
LCDSE3_SE28_MASK                         equ 0010h
LCDSE3_SE29_POSN                         equ 0005h
LCDSE3_SE29_POSITION                     equ 0005h
LCDSE3_SE29_SIZE                         equ 0001h
LCDSE3_SE29_LENGTH                       equ 0001h
LCDSE3_SE29_MASK                         equ 0020h
LCDSE3_SE30_POSN                         equ 0006h
LCDSE3_SE30_POSITION                     equ 0006h
LCDSE3_SE30_SIZE                         equ 0001h
LCDSE3_SE30_LENGTH                       equ 0001h
LCDSE3_SE30_MASK                         equ 0040h
LCDSE3_SE31_POSN                         equ 0007h
LCDSE3_SE31_POSITION                     equ 0007h
LCDSE3_SE31_SIZE                         equ 0001h
LCDSE3_SE31_LENGTH                       equ 0001h
LCDSE3_SE31_MASK                         equ 0080h
LCDSE3_SEGEN24_POSN                      equ 0000h
LCDSE3_SEGEN24_POSITION                  equ 0000h
LCDSE3_SEGEN24_SIZE                      equ 0001h
LCDSE3_SEGEN24_LENGTH                    equ 0001h
LCDSE3_SEGEN24_MASK                      equ 0001h
LCDSE3_SEGEN25_POSN                      equ 0001h
LCDSE3_SEGEN25_POSITION                  equ 0001h
LCDSE3_SEGEN25_SIZE                      equ 0001h
LCDSE3_SEGEN25_LENGTH                    equ 0001h
LCDSE3_SEGEN25_MASK                      equ 0002h
LCDSE3_SEGEN26_POSN                      equ 0002h
LCDSE3_SEGEN26_POSITION                  equ 0002h
LCDSE3_SEGEN26_SIZE                      equ 0001h
LCDSE3_SEGEN26_LENGTH                    equ 0001h
LCDSE3_SEGEN26_MASK                      equ 0004h
LCDSE3_SEGEN27_POSN                      equ 0003h
LCDSE3_SEGEN27_POSITION                  equ 0003h
LCDSE3_SEGEN27_SIZE                      equ 0001h
LCDSE3_SEGEN27_LENGTH                    equ 0001h
LCDSE3_SEGEN27_MASK                      equ 0008h
LCDSE3_SEGEN28_POSN                      equ 0004h
LCDSE3_SEGEN28_POSITION                  equ 0004h
LCDSE3_SEGEN28_SIZE                      equ 0001h
LCDSE3_SEGEN28_LENGTH                    equ 0001h
LCDSE3_SEGEN28_MASK                      equ 0010h
LCDSE3_SEGEN29_POSN                      equ 0005h
LCDSE3_SEGEN29_POSITION                  equ 0005h
LCDSE3_SEGEN29_SIZE                      equ 0001h
LCDSE3_SEGEN29_LENGTH                    equ 0001h
LCDSE3_SEGEN29_MASK                      equ 0020h
LCDSE3_SEGEN30_POSN                      equ 0006h
LCDSE3_SEGEN30_POSITION                  equ 0006h
LCDSE3_SEGEN30_SIZE                      equ 0001h
LCDSE3_SEGEN30_LENGTH                    equ 0001h
LCDSE3_SEGEN30_MASK                      equ 0040h
LCDSE3_SEGEN31_POSN                      equ 0007h
LCDSE3_SEGEN31_POSITION                  equ 0007h
LCDSE3_SEGEN31_SIZE                      equ 0001h
LCDSE3_SEGEN31_LENGTH                    equ 0001h
LCDSE3_SEGEN31_MASK                      equ 0080h

// Register: LCDSE4
#define LCDSE4 LCDSE4
LCDSE4                                   equ 0FB9h
// bitfield definitions
LCDSE4_LCDSE4_POSN                       equ 0000h
LCDSE4_LCDSE4_POSITION                   equ 0000h
LCDSE4_LCDSE4_SIZE                       equ 0008h
LCDSE4_LCDSE4_LENGTH                     equ 0008h
LCDSE4_LCDSE4_MASK                       equ 00FFh
LCDSE4_SE32_POSN                         equ 0000h
LCDSE4_SE32_POSITION                     equ 0000h
LCDSE4_SE32_SIZE                         equ 0001h
LCDSE4_SE32_LENGTH                       equ 0001h
LCDSE4_SE32_MASK                         equ 0001h
LCDSE4_SEGEN32_POSN                      equ 0000h
LCDSE4_SEGEN32_POSITION                  equ 0000h
LCDSE4_SEGEN32_SIZE                      equ 0001h
LCDSE4_SEGEN32_LENGTH                    equ 0001h
LCDSE4_SEGEN32_MASK                      equ 0001h

// Register: LCDDATA0
#define LCDDATA0 LCDDATA0
LCDDATA0                                 equ 0FBBh
// bitfield definitions
LCDDATA0_LCDDATA0_POSN                   equ 0000h
LCDDATA0_LCDDATA0_POSITION               equ 0000h
LCDDATA0_LCDDATA0_SIZE                   equ 0008h
LCDDATA0_LCDDATA0_LENGTH                 equ 0008h
LCDDATA0_LCDDATA0_MASK                   equ 00FFh
LCDDATA0_S0C0_POSN                       equ 0000h
LCDDATA0_S0C0_POSITION                   equ 0000h
LCDDATA0_S0C0_SIZE                       equ 0001h
LCDDATA0_S0C0_LENGTH                     equ 0001h
LCDDATA0_S0C0_MASK                       equ 0001h
LCDDATA0_S1C0_POSN                       equ 0001h
LCDDATA0_S1C0_POSITION                   equ 0001h
LCDDATA0_S1C0_SIZE                       equ 0001h
LCDDATA0_S1C0_LENGTH                     equ 0001h
LCDDATA0_S1C0_MASK                       equ 0002h
LCDDATA0_S2C0_POSN                       equ 0002h
LCDDATA0_S2C0_POSITION                   equ 0002h
LCDDATA0_S2C0_SIZE                       equ 0001h
LCDDATA0_S2C0_LENGTH                     equ 0001h
LCDDATA0_S2C0_MASK                       equ 0004h
LCDDATA0_S3C0_POSN                       equ 0003h
LCDDATA0_S3C0_POSITION                   equ 0003h
LCDDATA0_S3C0_SIZE                       equ 0001h
LCDDATA0_S3C0_LENGTH                     equ 0001h
LCDDATA0_S3C0_MASK                       equ 0008h
LCDDATA0_S4C0_POSN                       equ 0004h
LCDDATA0_S4C0_POSITION                   equ 0004h
LCDDATA0_S4C0_SIZE                       equ 0001h
LCDDATA0_S4C0_LENGTH                     equ 0001h
LCDDATA0_S4C0_MASK                       equ 0010h
LCDDATA0_S5C0_POSN                       equ 0005h
LCDDATA0_S5C0_POSITION                   equ 0005h
LCDDATA0_S5C0_SIZE                       equ 0001h
LCDDATA0_S5C0_LENGTH                     equ 0001h
LCDDATA0_S5C0_MASK                       equ 0020h
LCDDATA0_S6C0_POSN                       equ 0006h
LCDDATA0_S6C0_POSITION                   equ 0006h
LCDDATA0_S6C0_SIZE                       equ 0001h
LCDDATA0_S6C0_LENGTH                     equ 0001h
LCDDATA0_S6C0_MASK                       equ 0040h
LCDDATA0_S7C0_POSN                       equ 0007h
LCDDATA0_S7C0_POSITION                   equ 0007h
LCDDATA0_S7C0_SIZE                       equ 0001h
LCDDATA0_S7C0_LENGTH                     equ 0001h
LCDDATA0_S7C0_MASK                       equ 0080h
LCDDATA0_SEG0COM0_POSN                   equ 0000h
LCDDATA0_SEG0COM0_POSITION               equ 0000h
LCDDATA0_SEG0COM0_SIZE                   equ 0001h
LCDDATA0_SEG0COM0_LENGTH                 equ 0001h
LCDDATA0_SEG0COM0_MASK                   equ 0001h
LCDDATA0_SEG1COM0_POSN                   equ 0001h
LCDDATA0_SEG1COM0_POSITION               equ 0001h
LCDDATA0_SEG1COM0_SIZE                   equ 0001h
LCDDATA0_SEG1COM0_LENGTH                 equ 0001h
LCDDATA0_SEG1COM0_MASK                   equ 0002h
LCDDATA0_SEG2COM0_POSN                   equ 0002h
LCDDATA0_SEG2COM0_POSITION               equ 0002h
LCDDATA0_SEG2COM0_SIZE                   equ 0001h
LCDDATA0_SEG2COM0_LENGTH                 equ 0001h
LCDDATA0_SEG2COM0_MASK                   equ 0004h
LCDDATA0_SEG3COM0_POSN                   equ 0003h
LCDDATA0_SEG3COM0_POSITION               equ 0003h
LCDDATA0_SEG3COM0_SIZE                   equ 0001h
LCDDATA0_SEG3COM0_LENGTH                 equ 0001h
LCDDATA0_SEG3COM0_MASK                   equ 0008h
LCDDATA0_SEG4COM0_POSN                   equ 0004h
LCDDATA0_SEG4COM0_POSITION               equ 0004h
LCDDATA0_SEG4COM0_SIZE                   equ 0001h
LCDDATA0_SEG4COM0_LENGTH                 equ 0001h
LCDDATA0_SEG4COM0_MASK                   equ 0010h
LCDDATA0_SEG5COM0_POSN                   equ 0005h
LCDDATA0_SEG5COM0_POSITION               equ 0005h
LCDDATA0_SEG5COM0_SIZE                   equ 0001h
LCDDATA0_SEG5COM0_LENGTH                 equ 0001h
LCDDATA0_SEG5COM0_MASK                   equ 0020h
LCDDATA0_SEG6COM0_POSN                   equ 0006h
LCDDATA0_SEG6COM0_POSITION               equ 0006h
LCDDATA0_SEG6COM0_SIZE                   equ 0001h
LCDDATA0_SEG6COM0_LENGTH                 equ 0001h
LCDDATA0_SEG6COM0_MASK                   equ 0040h
LCDDATA0_SEG7COM0_POSN                   equ 0007h
LCDDATA0_SEG7COM0_POSITION               equ 0007h
LCDDATA0_SEG7COM0_SIZE                   equ 0001h
LCDDATA0_SEG7COM0_LENGTH                 equ 0001h
LCDDATA0_SEG7COM0_MASK                   equ 0080h
LCDDATA0_S00C0_POSN                      equ 0000h
LCDDATA0_S00C0_POSITION                  equ 0000h
LCDDATA0_S00C0_SIZE                      equ 0001h
LCDDATA0_S00C0_LENGTH                    equ 0001h
LCDDATA0_S00C0_MASK                      equ 0001h
LCDDATA0_S01C0_POSN                      equ 0001h
LCDDATA0_S01C0_POSITION                  equ 0001h
LCDDATA0_S01C0_SIZE                      equ 0001h
LCDDATA0_S01C0_LENGTH                    equ 0001h
LCDDATA0_S01C0_MASK                      equ 0002h
LCDDATA0_S02C0_POSN                      equ 0002h
LCDDATA0_S02C0_POSITION                  equ 0002h
LCDDATA0_S02C0_SIZE                      equ 0001h
LCDDATA0_S02C0_LENGTH                    equ 0001h
LCDDATA0_S02C0_MASK                      equ 0004h
LCDDATA0_S03C0_POSN                      equ 0003h
LCDDATA0_S03C0_POSITION                  equ 0003h
LCDDATA0_S03C0_SIZE                      equ 0001h
LCDDATA0_S03C0_LENGTH                    equ 0001h
LCDDATA0_S03C0_MASK                      equ 0008h
LCDDATA0_S04C0_POSN                      equ 0004h
LCDDATA0_S04C0_POSITION                  equ 0004h
LCDDATA0_S04C0_SIZE                      equ 0001h
LCDDATA0_S04C0_LENGTH                    equ 0001h
LCDDATA0_S04C0_MASK                      equ 0010h
LCDDATA0_S05C0_POSN                      equ 0005h
LCDDATA0_S05C0_POSITION                  equ 0005h
LCDDATA0_S05C0_SIZE                      equ 0001h
LCDDATA0_S05C0_LENGTH                    equ 0001h
LCDDATA0_S05C0_MASK                      equ 0020h
LCDDATA0_S06C0_POSN                      equ 0006h
LCDDATA0_S06C0_POSITION                  equ 0006h
LCDDATA0_S06C0_SIZE                      equ 0001h
LCDDATA0_S06C0_LENGTH                    equ 0001h
LCDDATA0_S06C0_MASK                      equ 0040h
LCDDATA0_S07C0_POSN                      equ 0007h
LCDDATA0_S07C0_POSITION                  equ 0007h
LCDDATA0_S07C0_SIZE                      equ 0001h
LCDDATA0_S07C0_LENGTH                    equ 0001h
LCDDATA0_S07C0_MASK                      equ 0080h

// Register: LCDDATA1
#define LCDDATA1 LCDDATA1
LCDDATA1                                 equ 0FBCh
// bitfield definitions
LCDDATA1_LCDDATA1_POSN                   equ 0000h
LCDDATA1_LCDDATA1_POSITION               equ 0000h
LCDDATA1_LCDDATA1_SIZE                   equ 0008h
LCDDATA1_LCDDATA1_LENGTH                 equ 0008h
LCDDATA1_LCDDATA1_MASK                   equ 00FFh
LCDDATA1_S8C0_POSN                       equ 0000h
LCDDATA1_S8C0_POSITION                   equ 0000h
LCDDATA1_S8C0_SIZE                       equ 0001h
LCDDATA1_S8C0_LENGTH                     equ 0001h
LCDDATA1_S8C0_MASK                       equ 0001h
LCDDATA1_S9C0_POSN                       equ 0001h
LCDDATA1_S9C0_POSITION                   equ 0001h
LCDDATA1_S9C0_SIZE                       equ 0001h
LCDDATA1_S9C0_LENGTH                     equ 0001h
LCDDATA1_S9C0_MASK                       equ 0002h
LCDDATA1_S10C0_POSN                      equ 0002h
LCDDATA1_S10C0_POSITION                  equ 0002h
LCDDATA1_S10C0_SIZE                      equ 0001h
LCDDATA1_S10C0_LENGTH                    equ 0001h
LCDDATA1_S10C0_MASK                      equ 0004h
LCDDATA1_S11C0_POSN                      equ 0003h
LCDDATA1_S11C0_POSITION                  equ 0003h
LCDDATA1_S11C0_SIZE                      equ 0001h
LCDDATA1_S11C0_LENGTH                    equ 0001h
LCDDATA1_S11C0_MASK                      equ 0008h
LCDDATA1_S12C0_POSN                      equ 0004h
LCDDATA1_S12C0_POSITION                  equ 0004h
LCDDATA1_S12C0_SIZE                      equ 0001h
LCDDATA1_S12C0_LENGTH                    equ 0001h
LCDDATA1_S12C0_MASK                      equ 0010h
LCDDATA1_S13C0_POSN                      equ 0005h
LCDDATA1_S13C0_POSITION                  equ 0005h
LCDDATA1_S13C0_SIZE                      equ 0001h
LCDDATA1_S13C0_LENGTH                    equ 0001h
LCDDATA1_S13C0_MASK                      equ 0020h
LCDDATA1_S14C0_POSN                      equ 0006h
LCDDATA1_S14C0_POSITION                  equ 0006h
LCDDATA1_S14C0_SIZE                      equ 0001h
LCDDATA1_S14C0_LENGTH                    equ 0001h
LCDDATA1_S14C0_MASK                      equ 0040h
LCDDATA1_S15C0_POSN                      equ 0007h
LCDDATA1_S15C0_POSITION                  equ 0007h
LCDDATA1_S15C0_SIZE                      equ 0001h
LCDDATA1_S15C0_LENGTH                    equ 0001h
LCDDATA1_S15C0_MASK                      equ 0080h
LCDDATA1_SEG8COM0_POSN                   equ 0000h
LCDDATA1_SEG8COM0_POSITION               equ 0000h
LCDDATA1_SEG8COM0_SIZE                   equ 0001h
LCDDATA1_SEG8COM0_LENGTH                 equ 0001h
LCDDATA1_SEG8COM0_MASK                   equ 0001h
LCDDATA1_SEG9COM0_POSN                   equ 0001h
LCDDATA1_SEG9COM0_POSITION               equ 0001h
LCDDATA1_SEG9COM0_SIZE                   equ 0001h
LCDDATA1_SEG9COM0_LENGTH                 equ 0001h
LCDDATA1_SEG9COM0_MASK                   equ 0002h
LCDDATA1_SEG10COM0_POSN                  equ 0002h
LCDDATA1_SEG10COM0_POSITION              equ 0002h
LCDDATA1_SEG10COM0_SIZE                  equ 0001h
LCDDATA1_SEG10COM0_LENGTH                equ 0001h
LCDDATA1_SEG10COM0_MASK                  equ 0004h
LCDDATA1_SEG11COM0_POSN                  equ 0003h
LCDDATA1_SEG11COM0_POSITION              equ 0003h
LCDDATA1_SEG11COM0_SIZE                  equ 0001h
LCDDATA1_SEG11COM0_LENGTH                equ 0001h
LCDDATA1_SEG11COM0_MASK                  equ 0008h
LCDDATA1_SEG12COM0_POSN                  equ 0004h
LCDDATA1_SEG12COM0_POSITION              equ 0004h
LCDDATA1_SEG12COM0_SIZE                  equ 0001h
LCDDATA1_SEG12COM0_LENGTH                equ 0001h
LCDDATA1_SEG12COM0_MASK                  equ 0010h
LCDDATA1_SEG13COM0_POSN                  equ 0005h
LCDDATA1_SEG13COM0_POSITION              equ 0005h
LCDDATA1_SEG13COM0_SIZE                  equ 0001h
LCDDATA1_SEG13COM0_LENGTH                equ 0001h
LCDDATA1_SEG13COM0_MASK                  equ 0020h
LCDDATA1_SEG14COM0_POSN                  equ 0006h
LCDDATA1_SEG14COM0_POSITION              equ 0006h
LCDDATA1_SEG14COM0_SIZE                  equ 0001h
LCDDATA1_SEG14COM0_LENGTH                equ 0001h
LCDDATA1_SEG14COM0_MASK                  equ 0040h
LCDDATA1_SEG15COM0_POSN                  equ 0007h
LCDDATA1_SEG15COM0_POSITION              equ 0007h
LCDDATA1_SEG15COM0_SIZE                  equ 0001h
LCDDATA1_SEG15COM0_LENGTH                equ 0001h
LCDDATA1_SEG15COM0_MASK                  equ 0080h
LCDDATA1_S08C0_POSN                      equ 0000h
LCDDATA1_S08C0_POSITION                  equ 0000h
LCDDATA1_S08C0_SIZE                      equ 0001h
LCDDATA1_S08C0_LENGTH                    equ 0001h
LCDDATA1_S08C0_MASK                      equ 0001h
LCDDATA1_S09C0_POSN                      equ 0001h
LCDDATA1_S09C0_POSITION                  equ 0001h
LCDDATA1_S09C0_SIZE                      equ 0001h
LCDDATA1_S09C0_LENGTH                    equ 0001h
LCDDATA1_S09C0_MASK                      equ 0002h

// Register: LCDDATA2
#define LCDDATA2 LCDDATA2
LCDDATA2                                 equ 0FBDh
// bitfield definitions
LCDDATA2_LCDDATA2_POSN                   equ 0000h
LCDDATA2_LCDDATA2_POSITION               equ 0000h
LCDDATA2_LCDDATA2_SIZE                   equ 0008h
LCDDATA2_LCDDATA2_LENGTH                 equ 0008h
LCDDATA2_LCDDATA2_MASK                   equ 00FFh
LCDDATA2_S16C0_POSN                      equ 0000h
LCDDATA2_S16C0_POSITION                  equ 0000h
LCDDATA2_S16C0_SIZE                      equ 0001h
LCDDATA2_S16C0_LENGTH                    equ 0001h
LCDDATA2_S16C0_MASK                      equ 0001h
LCDDATA2_S17C0_POSN                      equ 0001h
LCDDATA2_S17C0_POSITION                  equ 0001h
LCDDATA2_S17C0_SIZE                      equ 0001h
LCDDATA2_S17C0_LENGTH                    equ 0001h
LCDDATA2_S17C0_MASK                      equ 0002h
LCDDATA2_S18C0_POSN                      equ 0002h
LCDDATA2_S18C0_POSITION                  equ 0002h
LCDDATA2_S18C0_SIZE                      equ 0001h
LCDDATA2_S18C0_LENGTH                    equ 0001h
LCDDATA2_S18C0_MASK                      equ 0004h
LCDDATA2_S19C0_POSN                      equ 0003h
LCDDATA2_S19C0_POSITION                  equ 0003h
LCDDATA2_S19C0_SIZE                      equ 0001h
LCDDATA2_S19C0_LENGTH                    equ 0001h
LCDDATA2_S19C0_MASK                      equ 0008h
LCDDATA2_S20C0_POSN                      equ 0004h
LCDDATA2_S20C0_POSITION                  equ 0004h
LCDDATA2_S20C0_SIZE                      equ 0001h
LCDDATA2_S20C0_LENGTH                    equ 0001h
LCDDATA2_S20C0_MASK                      equ 0010h
LCDDATA2_S21C0_POSN                      equ 0005h
LCDDATA2_S21C0_POSITION                  equ 0005h
LCDDATA2_S21C0_SIZE                      equ 0001h
LCDDATA2_S21C0_LENGTH                    equ 0001h
LCDDATA2_S21C0_MASK                      equ 0020h
LCDDATA2_S22C0_POSN                      equ 0006h
LCDDATA2_S22C0_POSITION                  equ 0006h
LCDDATA2_S22C0_SIZE                      equ 0001h
LCDDATA2_S22C0_LENGTH                    equ 0001h
LCDDATA2_S22C0_MASK                      equ 0040h
LCDDATA2_S23C0_POSN                      equ 0007h
LCDDATA2_S23C0_POSITION                  equ 0007h
LCDDATA2_S23C0_SIZE                      equ 0001h
LCDDATA2_S23C0_LENGTH                    equ 0001h
LCDDATA2_S23C0_MASK                      equ 0080h
LCDDATA2_SEG16COM0_POSN                  equ 0000h
LCDDATA2_SEG16COM0_POSITION              equ 0000h
LCDDATA2_SEG16COM0_SIZE                  equ 0001h
LCDDATA2_SEG16COM0_LENGTH                equ 0001h
LCDDATA2_SEG16COM0_MASK                  equ 0001h
LCDDATA2_SEG17COM0_POSN                  equ 0001h
LCDDATA2_SEG17COM0_POSITION              equ 0001h
LCDDATA2_SEG17COM0_SIZE                  equ 0001h
LCDDATA2_SEG17COM0_LENGTH                equ 0001h
LCDDATA2_SEG17COM0_MASK                  equ 0002h
LCDDATA2_SEG18COM0_POSN                  equ 0002h
LCDDATA2_SEG18COM0_POSITION              equ 0002h
LCDDATA2_SEG18COM0_SIZE                  equ 0001h
LCDDATA2_SEG18COM0_LENGTH                equ 0001h
LCDDATA2_SEG18COM0_MASK                  equ 0004h
LCDDATA2_SEG19COM0_POSN                  equ 0003h
LCDDATA2_SEG19COM0_POSITION              equ 0003h
LCDDATA2_SEG19COM0_SIZE                  equ 0001h
LCDDATA2_SEG19COM0_LENGTH                equ 0001h
LCDDATA2_SEG19COM0_MASK                  equ 0008h
LCDDATA2_SEG20COM0_POSN                  equ 0004h
LCDDATA2_SEG20COM0_POSITION              equ 0004h
LCDDATA2_SEG20COM0_SIZE                  equ 0001h
LCDDATA2_SEG20COM0_LENGTH                equ 0001h
LCDDATA2_SEG20COM0_MASK                  equ 0010h
LCDDATA2_SEG21COM0_POSN                  equ 0005h
LCDDATA2_SEG21COM0_POSITION              equ 0005h
LCDDATA2_SEG21COM0_SIZE                  equ 0001h
LCDDATA2_SEG21COM0_LENGTH                equ 0001h
LCDDATA2_SEG21COM0_MASK                  equ 0020h
LCDDATA2_SEG22COM0_POSN                  equ 0006h
LCDDATA2_SEG22COM0_POSITION              equ 0006h
LCDDATA2_SEG22COM0_SIZE                  equ 0001h
LCDDATA2_SEG22COM0_LENGTH                equ 0001h
LCDDATA2_SEG22COM0_MASK                  equ 0040h
LCDDATA2_SEG23COM0_POSN                  equ 0007h
LCDDATA2_SEG23COM0_POSITION              equ 0007h
LCDDATA2_SEG23COM0_SIZE                  equ 0001h
LCDDATA2_SEG23COM0_LENGTH                equ 0001h
LCDDATA2_SEG23COM0_MASK                  equ 0080h

// Register: LCDDATA3
#define LCDDATA3 LCDDATA3
LCDDATA3                                 equ 0FBEh
// bitfield definitions
LCDDATA3_LCDDATA3_POSN                   equ 0000h
LCDDATA3_LCDDATA3_POSITION               equ 0000h
LCDDATA3_LCDDATA3_SIZE                   equ 0008h
LCDDATA3_LCDDATA3_LENGTH                 equ 0008h
LCDDATA3_LCDDATA3_MASK                   equ 00FFh
LCDDATA3_S24C0_POSN                      equ 0000h
LCDDATA3_S24C0_POSITION                  equ 0000h
LCDDATA3_S24C0_SIZE                      equ 0001h
LCDDATA3_S24C0_LENGTH                    equ 0001h
LCDDATA3_S24C0_MASK                      equ 0001h
LCDDATA3_S25C0_POSN                      equ 0001h
LCDDATA3_S25C0_POSITION                  equ 0001h
LCDDATA3_S25C0_SIZE                      equ 0001h
LCDDATA3_S25C0_LENGTH                    equ 0001h
LCDDATA3_S25C0_MASK                      equ 0002h
LCDDATA3_S26C0_POSN                      equ 0002h
LCDDATA3_S26C0_POSITION                  equ 0002h
LCDDATA3_S26C0_SIZE                      equ 0001h
LCDDATA3_S26C0_LENGTH                    equ 0001h
LCDDATA3_S26C0_MASK                      equ 0004h
LCDDATA3_S27C0_POSN                      equ 0003h
LCDDATA3_S27C0_POSITION                  equ 0003h
LCDDATA3_S27C0_SIZE                      equ 0001h
LCDDATA3_S27C0_LENGTH                    equ 0001h
LCDDATA3_S27C0_MASK                      equ 0008h
LCDDATA3_S28C0_POSN                      equ 0004h
LCDDATA3_S28C0_POSITION                  equ 0004h
LCDDATA3_S28C0_SIZE                      equ 0001h
LCDDATA3_S28C0_LENGTH                    equ 0001h
LCDDATA3_S28C0_MASK                      equ 0010h
LCDDATA3_S29C0_POSN                      equ 0005h
LCDDATA3_S29C0_POSITION                  equ 0005h
LCDDATA3_S29C0_SIZE                      equ 0001h
LCDDATA3_S29C0_LENGTH                    equ 0001h
LCDDATA3_S29C0_MASK                      equ 0020h
LCDDATA3_S30C0_POSN                      equ 0006h
LCDDATA3_S30C0_POSITION                  equ 0006h
LCDDATA3_S30C0_SIZE                      equ 0001h
LCDDATA3_S30C0_LENGTH                    equ 0001h
LCDDATA3_S30C0_MASK                      equ 0040h
LCDDATA3_S31C0_POSN                      equ 0007h
LCDDATA3_S31C0_POSITION                  equ 0007h
LCDDATA3_S31C0_SIZE                      equ 0001h
LCDDATA3_S31C0_LENGTH                    equ 0001h
LCDDATA3_S31C0_MASK                      equ 0080h
LCDDATA3_SEG24COM0_POSN                  equ 0000h
LCDDATA3_SEG24COM0_POSITION              equ 0000h
LCDDATA3_SEG24COM0_SIZE                  equ 0001h
LCDDATA3_SEG24COM0_LENGTH                equ 0001h
LCDDATA3_SEG24COM0_MASK                  equ 0001h
LCDDATA3_SEG25COM0_POSN                  equ 0001h
LCDDATA3_SEG25COM0_POSITION              equ 0001h
LCDDATA3_SEG25COM0_SIZE                  equ 0001h
LCDDATA3_SEG25COM0_LENGTH                equ 0001h
LCDDATA3_SEG25COM0_MASK                  equ 0002h
LCDDATA3_SEG26COM0_POSN                  equ 0002h
LCDDATA3_SEG26COM0_POSITION              equ 0002h
LCDDATA3_SEG26COM0_SIZE                  equ 0001h
LCDDATA3_SEG26COM0_LENGTH                equ 0001h
LCDDATA3_SEG26COM0_MASK                  equ 0004h
LCDDATA3_SEG27COM0_POSN                  equ 0003h
LCDDATA3_SEG27COM0_POSITION              equ 0003h
LCDDATA3_SEG27COM0_SIZE                  equ 0001h
LCDDATA3_SEG27COM0_LENGTH                equ 0001h
LCDDATA3_SEG27COM0_MASK                  equ 0008h
LCDDATA3_SEG28COM0_POSN                  equ 0004h
LCDDATA3_SEG28COM0_POSITION              equ 0004h
LCDDATA3_SEG28COM0_SIZE                  equ 0001h
LCDDATA3_SEG28COM0_LENGTH                equ 0001h
LCDDATA3_SEG28COM0_MASK                  equ 0010h
LCDDATA3_SEG29COM0_POSN                  equ 0005h
LCDDATA3_SEG29COM0_POSITION              equ 0005h
LCDDATA3_SEG29COM0_SIZE                  equ 0001h
LCDDATA3_SEG29COM0_LENGTH                equ 0001h
LCDDATA3_SEG29COM0_MASK                  equ 0020h
LCDDATA3_SEG30COM0_POSN                  equ 0006h
LCDDATA3_SEG30COM0_POSITION              equ 0006h
LCDDATA3_SEG30COM0_SIZE                  equ 0001h
LCDDATA3_SEG30COM0_LENGTH                equ 0001h
LCDDATA3_SEG30COM0_MASK                  equ 0040h
LCDDATA3_SEG31COM0_POSN                  equ 0007h
LCDDATA3_SEG31COM0_POSITION              equ 0007h
LCDDATA3_SEG31COM0_SIZE                  equ 0001h
LCDDATA3_SEG31COM0_LENGTH                equ 0001h
LCDDATA3_SEG31COM0_MASK                  equ 0080h

// Register: LCDDATA4
#define LCDDATA4 LCDDATA4
LCDDATA4                                 equ 0FBFh
// bitfield definitions
LCDDATA4_LCDDATA4_POSN                   equ 0000h
LCDDATA4_LCDDATA4_POSITION               equ 0000h
LCDDATA4_LCDDATA4_SIZE                   equ 0008h
LCDDATA4_LCDDATA4_LENGTH                 equ 0008h
LCDDATA4_LCDDATA4_MASK                   equ 00FFh
LCDDATA4_S32C0_POSN                      equ 0000h
LCDDATA4_S32C0_POSITION                  equ 0000h
LCDDATA4_S32C0_SIZE                      equ 0001h
LCDDATA4_S32C0_LENGTH                    equ 0001h
LCDDATA4_S32C0_MASK                      equ 0001h
LCDDATA4_S33C0_POSN                      equ 0001h
LCDDATA4_S33C0_POSITION                  equ 0001h
LCDDATA4_S33C0_SIZE                      equ 0001h
LCDDATA4_S33C0_LENGTH                    equ 0001h
LCDDATA4_S33C0_MASK                      equ 0002h
LCDDATA4_S34C0_POSN                      equ 0002h
LCDDATA4_S34C0_POSITION                  equ 0002h
LCDDATA4_S34C0_SIZE                      equ 0001h
LCDDATA4_S34C0_LENGTH                    equ 0001h
LCDDATA4_S34C0_MASK                      equ 0004h
LCDDATA4_S35C0_POSN                      equ 0003h
LCDDATA4_S35C0_POSITION                  equ 0003h
LCDDATA4_S35C0_SIZE                      equ 0001h
LCDDATA4_S35C0_LENGTH                    equ 0001h
LCDDATA4_S35C0_MASK                      equ 0008h
LCDDATA4_S36C0_POSN                      equ 0004h
LCDDATA4_S36C0_POSITION                  equ 0004h
LCDDATA4_S36C0_SIZE                      equ 0001h
LCDDATA4_S36C0_LENGTH                    equ 0001h
LCDDATA4_S36C0_MASK                      equ 0010h
LCDDATA4_S37C0_POSN                      equ 0005h
LCDDATA4_S37C0_POSITION                  equ 0005h
LCDDATA4_S37C0_SIZE                      equ 0001h
LCDDATA4_S37C0_LENGTH                    equ 0001h
LCDDATA4_S37C0_MASK                      equ 0020h
LCDDATA4_S38C0_POSN                      equ 0006h
LCDDATA4_S38C0_POSITION                  equ 0006h
LCDDATA4_S38C0_SIZE                      equ 0001h
LCDDATA4_S38C0_LENGTH                    equ 0001h
LCDDATA4_S38C0_MASK                      equ 0040h
LCDDATA4_S39C0_POSN                      equ 0007h
LCDDATA4_S39C0_POSITION                  equ 0007h
LCDDATA4_S39C0_SIZE                      equ 0001h
LCDDATA4_S39C0_LENGTH                    equ 0001h
LCDDATA4_S39C0_MASK                      equ 0080h
LCDDATA4_SEG32COM0_POSN                  equ 0000h
LCDDATA4_SEG32COM0_POSITION              equ 0000h
LCDDATA4_SEG32COM0_SIZE                  equ 0001h
LCDDATA4_SEG32COM0_LENGTH                equ 0001h
LCDDATA4_SEG32COM0_MASK                  equ 0001h
LCDDATA4_SEG33COM0_POSN                  equ 0001h
LCDDATA4_SEG33COM0_POSITION              equ 0001h
LCDDATA4_SEG33COM0_SIZE                  equ 0001h
LCDDATA4_SEG33COM0_LENGTH                equ 0001h
LCDDATA4_SEG33COM0_MASK                  equ 0002h
LCDDATA4_SEG34COM0_POSN                  equ 0002h
LCDDATA4_SEG34COM0_POSITION              equ 0002h
LCDDATA4_SEG34COM0_SIZE                  equ 0001h
LCDDATA4_SEG34COM0_LENGTH                equ 0001h
LCDDATA4_SEG34COM0_MASK                  equ 0004h
LCDDATA4_SEG35COM0_POSN                  equ 0003h
LCDDATA4_SEG35COM0_POSITION              equ 0003h
LCDDATA4_SEG35COM0_SIZE                  equ 0001h
LCDDATA4_SEG35COM0_LENGTH                equ 0001h
LCDDATA4_SEG35COM0_MASK                  equ 0008h
LCDDATA4_SEG36COM0_POSN                  equ 0004h
LCDDATA4_SEG36COM0_POSITION              equ 0004h
LCDDATA4_SEG36COM0_SIZE                  equ 0001h
LCDDATA4_SEG36COM0_LENGTH                equ 0001h
LCDDATA4_SEG36COM0_MASK                  equ 0010h
LCDDATA4_SEG37COM0_POSN                  equ 0005h
LCDDATA4_SEG37COM0_POSITION              equ 0005h
LCDDATA4_SEG37COM0_SIZE                  equ 0001h
LCDDATA4_SEG37COM0_LENGTH                equ 0001h
LCDDATA4_SEG37COM0_MASK                  equ 0020h
LCDDATA4_SEG38COM0_POSN                  equ 0006h
LCDDATA4_SEG38COM0_POSITION              equ 0006h
LCDDATA4_SEG38COM0_SIZE                  equ 0001h
LCDDATA4_SEG38COM0_LENGTH                equ 0001h
LCDDATA4_SEG38COM0_MASK                  equ 0040h
LCDDATA4_SEG39COM0_POSN                  equ 0007h
LCDDATA4_SEG39COM0_POSITION              equ 0007h
LCDDATA4_SEG39COM0_SIZE                  equ 0001h
LCDDATA4_SEG39COM0_LENGTH                equ 0001h
LCDDATA4_SEG39COM0_MASK                  equ 0080h

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
ADCON1_TRIGSEL_POSN                      equ 0007h
ADCON1_TRIGSEL_POSITION                  equ 0007h
ADCON1_TRIGSEL_SIZE                      equ 0001h
ADCON1_TRIGSEL_LENGTH                    equ 0001h
ADCON1_TRIGSEL_MASK                      equ 0080h
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
ADCON0_ADCAL_POSN                        equ 0007h
ADCON0_ADCAL_POSITION                    equ 0007h
ADCON0_ADCAL_SIZE                        equ 0001h
ADCON0_ADCAL_LENGTH                      equ 0001h
ADCON0_ADCAL_MASK                        equ 0080h
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
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 0FC4h
// bitfield definitions
ADRESH_ADRESH_POSN                       equ 0000h
ADRESH_ADRESH_POSITION                   equ 0000h
ADRESH_ADRESH_SIZE                       equ 0008h
ADRESH_ADRESH_LENGTH                     equ 0008h
ADRESH_ADRESH_MASK                       equ 00FFh

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
SSP1CON2_SEN1_POSN                       equ 0000h
SSP1CON2_SEN1_POSITION                   equ 0000h
SSP1CON2_SEN1_SIZE                       equ 0001h
SSP1CON2_SEN1_LENGTH                     equ 0001h
SSP1CON2_SEN1_MASK                       equ 0001h
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
SSP1STAT_R_POSN                          equ 0002h
SSP1STAT_R_POSITION                      equ 0002h
SSP1STAT_R_SIZE                          equ 0001h
SSP1STAT_R_LENGTH                        equ 0001h
SSP1STAT_R_MASK                          equ 0004h
SSP1STAT_D_POSN                          equ 0005h
SSP1STAT_D_POSITION                      equ 0005h
SSP1STAT_D_SIZE                          equ 0001h
SSP1STAT_D_LENGTH                        equ 0001h
SSP1STAT_D_MASK                          equ 0020h
SSP1STAT_R_W_POSN                        equ 0002h
SSP1STAT_R_W_POSITION                    equ 0002h
SSP1STAT_R_W_SIZE                        equ 0001h
SSP1STAT_R_W_LENGTH                      equ 0001h
SSP1STAT_R_W_MASK                        equ 0004h
SSP1STAT_D_A_POSN                        equ 0005h
SSP1STAT_D_A_POSITION                    equ 0005h
SSP1STAT_D_A_SIZE                        equ 0001h
SSP1STAT_D_A_LENGTH                      equ 0001h
SSP1STAT_D_A_MASK                        equ 0020h
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
SSP1STAT_READ_WRITE_POSN                 equ 0002h
SSP1STAT_READ_WRITE_POSITION             equ 0002h
SSP1STAT_READ_WRITE_SIZE                 equ 0001h
SSP1STAT_READ_WRITE_LENGTH               equ 0001h
SSP1STAT_READ_WRITE_MASK                 equ 0004h
SSP1STAT_DATA_ADDRESS_POSN               equ 0005h
SSP1STAT_DATA_ADDRESS_POSITION           equ 0005h
SSP1STAT_DATA_ADDRESS_SIZE               equ 0001h
SSP1STAT_DATA_ADDRESS_LENGTH             equ 0001h
SSP1STAT_DATA_ADDRESS_MASK               equ 0020h
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
SSP1STAT_I2C_DAT_POSN                    equ 0005h
SSP1STAT_I2C_DAT_POSITION                equ 0005h
SSP1STAT_I2C_DAT_SIZE                    equ 0001h
SSP1STAT_I2C_DAT_LENGTH                  equ 0001h
SSP1STAT_I2C_DAT_MASK                    equ 0020h
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
SSP1STAT_RW_POSN                         equ 0002h
SSP1STAT_RW_POSITION                     equ 0002h
SSP1STAT_RW_SIZE                         equ 0001h
SSP1STAT_RW_LENGTH                       equ 0001h
SSP1STAT_RW_MASK                         equ 0004h
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
SSP1STAT_RW1_POSN                        equ 0002h
SSP1STAT_RW1_POSITION                    equ 0002h
SSP1STAT_RW1_SIZE                        equ 0001h
SSP1STAT_RW1_LENGTH                      equ 0001h
SSP1STAT_RW1_MASK                        equ 0004h
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
SSP1ADD_SSPADD_POSN                      equ 0000h
SSP1ADD_SSPADD_POSITION                  equ 0000h
SSP1ADD_SSPADD_SIZE                      equ 0008h
SSP1ADD_SSPADD_LENGTH                    equ 0008h
SSP1ADD_SSPADD_MASK                      equ 00FFh
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
SSP1BUF_SSPBUF_POSN                      equ 0000h
SSP1BUF_SSPBUF_POSITION                  equ 0000h
SSP1BUF_SSPBUF_SIZE                      equ 0008h
SSP1BUF_SSPBUF_LENGTH                    equ 0008h
SSP1BUF_SSPBUF_MASK                      equ 00FFh

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
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh
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
// bitfield definitions
TMR2_TMR2_POSN                           equ 0000h
TMR2_TMR2_POSITION                       equ 0000h
TMR2_TMR2_SIZE                           equ 0008h
TMR2_TMR2_LENGTH                         equ 0008h
TMR2_TMR2_MASK                           equ 00FFh

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
T1CON_T1INSYNC_POSN                      equ 0002h
T1CON_T1INSYNC_POSITION                  equ 0002h
T1CON_T1INSYNC_SIZE                      equ 0001h
T1CON_T1INSYNC_LENGTH                    equ 0001h
T1CON_T1INSYNC_MASK                      equ 0004h
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
T1CON_T1SYNC_POSN                        equ 0002h
T1CON_T1SYNC_POSITION                    equ 0002h
T1CON_T1SYNC_SIZE                        equ 0001h
T1CON_T1SYNC_LENGTH                      equ 0001h
T1CON_T1SYNC_MASK                        equ 0004h
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
RCON_NOT_CM_POSN                         equ 0005h
RCON_NOT_CM_POSITION                     equ 0005h
RCON_NOT_CM_SIZE                         equ 0001h
RCON_NOT_CM_LENGTH                       equ 0001h
RCON_NOT_CM_MASK                         equ 0020h
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
RCON_nCM_POSN                            equ 0005h
RCON_nCM_POSITION                        equ 0005h
RCON_nCM_SIZE                            equ 0001h
RCON_nCM_LENGTH                          equ 0001h
RCON_nCM_MASK                            equ 0020h
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
RCON_CM_POSN                             equ 0005h
RCON_CM_POSITION                         equ 0005h
RCON_CM_SIZE                             equ 0001h
RCON_CM_LENGTH                           equ 0001h
RCON_CM_MASK                             equ 0020h

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0FD1h
// bitfield definitions
WDTCON_SWDTEN_POSN                       equ 0000h
WDTCON_SWDTEN_POSITION                   equ 0000h
WDTCON_SWDTEN_SIZE                       equ 0001h
WDTCON_SWDTEN_LENGTH                     equ 0001h
WDTCON_SWDTEN_MASK                       equ 0001h
WDTCON_REGSLP_POSN                       equ 0007h
WDTCON_REGSLP_POSITION                   equ 0007h
WDTCON_REGSLP_SIZE                       equ 0001h
WDTCON_REGSLP_LENGTH                     equ 0001h
WDTCON_REGSLP_MASK                       equ 0080h
WDTCON_SWDTE_POSN                        equ 0000h
WDTCON_SWDTE_POSITION                    equ 0000h
WDTCON_SWDTE_SIZE                        equ 0001h
WDTCON_SWDTE_LENGTH                      equ 0001h
WDTCON_SWDTE_MASK                        equ 0001h

// Register: LCDREG
#define LCDREG LCDREG
LCDREG                                   equ 0FD2h
// bitfield definitions
LCDREG_CKSEL_POSN                        equ 0000h
LCDREG_CKSEL_POSITION                    equ 0000h
LCDREG_CKSEL_SIZE                        equ 0002h
LCDREG_CKSEL_LENGTH                      equ 0002h
LCDREG_CKSEL_MASK                        equ 0003h
LCDREG_MODE13_POSN                       equ 0002h
LCDREG_MODE13_POSITION                   equ 0002h
LCDREG_MODE13_SIZE                       equ 0001h
LCDREG_MODE13_LENGTH                     equ 0001h
LCDREG_MODE13_MASK                       equ 0004h
LCDREG_BIAS_POSN                         equ 0003h
LCDREG_BIAS_POSITION                     equ 0003h
LCDREG_BIAS_SIZE                         equ 0003h
LCDREG_BIAS_LENGTH                       equ 0003h
LCDREG_BIAS_MASK                         equ 0038h
LCDREG_CPEN_POSN                         equ 0006h
LCDREG_CPEN_POSITION                     equ 0006h
LCDREG_CPEN_SIZE                         equ 0001h
LCDREG_CPEN_LENGTH                       equ 0001h
LCDREG_CPEN_MASK                         equ 0040h
LCDREG_CKSEL0_POSN                       equ 0000h
LCDREG_CKSEL0_POSITION                   equ 0000h
LCDREG_CKSEL0_SIZE                       equ 0001h
LCDREG_CKSEL0_LENGTH                     equ 0001h
LCDREG_CKSEL0_MASK                       equ 0001h
LCDREG_CKSEL1_POSN                       equ 0001h
LCDREG_CKSEL1_POSITION                   equ 0001h
LCDREG_CKSEL1_SIZE                       equ 0001h
LCDREG_CKSEL1_LENGTH                     equ 0001h
LCDREG_CKSEL1_MASK                       equ 0002h
LCDREG_BIAS0_POSN                        equ 0003h
LCDREG_BIAS0_POSITION                    equ 0003h
LCDREG_BIAS0_SIZE                        equ 0001h
LCDREG_BIAS0_LENGTH                      equ 0001h
LCDREG_BIAS0_MASK                        equ 0008h
LCDREG_BIAS1_POSN                        equ 0004h
LCDREG_BIAS1_POSITION                    equ 0004h
LCDREG_BIAS1_SIZE                        equ 0001h
LCDREG_BIAS1_LENGTH                      equ 0001h
LCDREG_BIAS1_MASK                        equ 0010h
LCDREG_BIAS2_POSN                        equ 0005h
LCDREG_BIAS2_POSITION                    equ 0005h
LCDREG_BIAS2_SIZE                        equ 0001h
LCDREG_BIAS2_LENGTH                      equ 0001h
LCDREG_BIAS2_MASK                        equ 0020h

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
INTCON3_INT3IF_POSN                      equ 0002h
INTCON3_INT3IF_POSITION                  equ 0002h
INTCON3_INT3IF_SIZE                      equ 0001h
INTCON3_INT3IF_LENGTH                    equ 0001h
INTCON3_INT3IF_MASK                      equ 0004h
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
INTCON3_INT3IE_POSN                      equ 0005h
INTCON3_INT3IE_POSITION                  equ 0005h
INTCON3_INT3IE_SIZE                      equ 0001h
INTCON3_INT3IE_LENGTH                    equ 0001h
INTCON3_INT3IE_MASK                      equ 0020h
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
INTCON3_INT3F_POSN                       equ 0002h
INTCON3_INT3F_POSITION                   equ 0002h
INTCON3_INT3F_SIZE                       equ 0001h
INTCON3_INT3F_LENGTH                     equ 0001h
INTCON3_INT3F_MASK                       equ 0004h
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
INTCON3_INT3E_POSN                       equ 0005h
INTCON3_INT3E_POSITION                   equ 0005h
INTCON3_INT3E_SIZE                       equ 0001h
INTCON3_INT3E_LENGTH                     equ 0001h
INTCON3_INT3E_MASK                       equ 0020h
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
INTCON2_INT3IP_POSN                      equ 0001h
INTCON2_INT3IP_POSITION                  equ 0001h
INTCON2_INT3IP_SIZE                      equ 0001h
INTCON2_INT3IP_LENGTH                    equ 0001h
INTCON2_INT3IP_MASK                      equ 0002h
INTCON2_TMR0IP_POSN                      equ 0002h
INTCON2_TMR0IP_POSITION                  equ 0002h
INTCON2_TMR0IP_SIZE                      equ 0001h
INTCON2_TMR0IP_LENGTH                    equ 0001h
INTCON2_TMR0IP_MASK                      equ 0004h
INTCON2_INTEDG3_POSN                     equ 0003h
INTCON2_INTEDG3_POSITION                 equ 0003h
INTCON2_INTEDG3_SIZE                     equ 0001h
INTCON2_INTEDG3_LENGTH                   equ 0001h
INTCON2_INTEDG3_MASK                     equ 0008h
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
INTCON2_INT3P_POSN                       equ 0001h
INTCON2_INT3P_POSITION                   equ 0001h
INTCON2_INT3P_SIZE                       equ 0001h
INTCON2_INT3P_LENGTH                     equ 0001h
INTCON2_INT3P_MASK                       equ 0002h
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
#define ACQT0                            BANKMASK(ADCON2), 3, a
#define ACQT1                            BANKMASK(ADCON2), 4, a
#define ACQT2                            BANKMASK(ADCON2), 5, a
#define ADCAL                            BANKMASK(ADCON0), 7, a
#define ADCS0                            BANKMASK(ADCON2), 0, a
#define ADCS1                            BANKMASK(ADCON2), 1, a
#define ADCS2                            BANKMASK(ADCON2), 2, a
#define ADDEN                            BANKMASK(RCSTA1), 3, a
#define ADDEN1                           BANKMASK(RCSTA1), 3, a
#define ADDEN2                           BANKMASK(RCSTA2), 3, a
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
#define ALRMEN                           BANKMASK(ALRMCFG), 7, b
#define ALRMPTR0                         BANKMASK(ALRMCFG), 0, b
#define ALRMPTR1                         BANKMASK(ALRMCFG), 1, b
#define AMASK0                           BANKMASK(ALRMCFG), 2, b
#define AMASK1                           BANKMASK(ALRMCFG), 3, b
#define AMASK2                           BANKMASK(ALRMCFG), 4, b
#define AMASK3                           BANKMASK(ALRMCFG), 5, b
#define AN0                              BANKMASK(PORTA), 0, a
#define AN1                              BANKMASK(PORTA), 1, a
#define AN10                             BANKMASK(PORTF), 5, a
#define AN11                             BANKMASK(PORTF), 6, a
#define AN2                              BANKMASK(PORTA), 2, a
#define AN3                              BANKMASK(PORTA), 3, a
#define AN4                              BANKMASK(PORTA), 5, a
#define AN5                              BANKMASK(PORTF), 7, a
#define AN6                              BANKMASK(PORTF), 1, a
#define AN7                              BANKMASK(PORTF), 2, a
#define AN8                              BANKMASK(PORTF), 3, a
#define AN9                              BANKMASK(PORTF), 4, a
#define ARPT0                            BANKMASK(ALRMRPT), 0, b
#define ARPT1                            BANKMASK(ALRMRPT), 1, b
#define ARPT2                            BANKMASK(ALRMRPT), 2, b
#define ARPT3                            BANKMASK(ALRMRPT), 3, b
#define ARPT4                            BANKMASK(ALRMRPT), 4, b
#define ARPT5                            BANKMASK(ALRMRPT), 5, b
#define ARPT6                            BANKMASK(ALRMRPT), 6, b
#define ARPT7                            BANKMASK(ALRMRPT), 7, b
#define BCL1IE                           BANKMASK(PIE2), 3, a
#define BCL1IF                           BANKMASK(PIR2), 3, a
#define BCL1IP                           BANKMASK(IPR2), 3, a
#define BCLIE                            BANKMASK(PIE2), 3, a
#define BCLIF                            BANKMASK(PIR2), 3, a
#define BCLIP                            BANKMASK(IPR2), 3, a
#define BF                               BANKMASK(SSP1STAT), 0, a
#define BF1                              BANKMASK(SSP1STAT), 0, a
#define BIAS0                            BANKMASK(LCDREG), 3, a
#define BIAS1                            BANKMASK(LCDREG), 4, a
#define BIAS2                            BANKMASK(LCDREG), 5, a
#define BIASMD                           BANKMASK(LCDPS), 6, a
#define BOR                              BANKMASK(RCON), 0, a
#define BRG16                            BANKMASK(BAUDCON1), 3, a
#define BRG161                           BANKMASK(BAUDCON1), 3, a
#define BRGH                             BANKMASK(TXSTA1), 2, a
#define BRGH1                            BANKMASK(TXSTA1), 2, a
#define BRGH2                            BANKMASK(TXSTA2), 2, a
#define C1INA                            BANKMASK(PORTF), 6, a
#define C1INB                            BANKMASK(PORTF), 5, a
#define C1INV                            BANKMASK(CMCON), 4, a
#define C1OUT                            BANKMASK(CMCON), 6, a
#define C1OUTF                           BANKMASK(PORTF), 1, a
#define C2INA                            BANKMASK(PORTF), 4, a
#define C2INB                            BANKMASK(PORTF), 3, a
#define C2INV                            BANKMASK(CMCON), 5, a
#define C2OUT                            BANKMASK(CMCON), 7, a
#define C2OUTF                           BANKMASK(PORTF), 2, a
#define C3OUTG                           BANKMASK(PORTG), 1, a
#define CAL0                             BANKMASK(RTCCAL), 0, b
#define CAL1                             BANKMASK(RTCCAL), 1, b
#define CAL2                             BANKMASK(RTCCAL), 2, b
#define CAL3                             BANKMASK(RTCCAL), 3, b
#define CAL4                             BANKMASK(RTCCAL), 4, b
#define CAL5                             BANKMASK(RTCCAL), 5, b
#define CAL6                             BANKMASK(RTCCAL), 6, b
#define CAL7                             BANKMASK(RTCCAL), 7, b
#define CARRY                            BANKMASK(STATUS), 0, a
#define CCP1                             BANKMASK(PORTC), 2, a
#define CCP1IE                           BANKMASK(PIE3), 1, a
#define CCP1IF                           BANKMASK(PIR3), 1, a
#define CCP1IP                           BANKMASK(IPR3), 1, a
#define CCP1M0                           BANKMASK(CCP1CON), 0, a
#define CCP1M1                           BANKMASK(CCP1CON), 1, a
#define CCP1M2                           BANKMASK(CCP1CON), 2, a
#define CCP1M3                           BANKMASK(CCP1CON), 3, a
#define CCP1OD                           BANKMASK(TRISG), 5, a
#define CCP2                             BANKMASK(PORTC), 1, a
#define CCP2E                            BANKMASK(PORTE), 7, a
#define CCP2IE                           BANKMASK(PIE3), 2, a
#define CCP2IF                           BANKMASK(PIR3), 2, a
#define CCP2IP                           BANKMASK(IPR3), 2, a
#define CCP2M0                           BANKMASK(CCP2CON), 0, a
#define CCP2M1                           BANKMASK(CCP2CON), 1, a
#define CCP2M2                           BANKMASK(CCP2CON), 2, a
#define CCP2M3                           BANKMASK(CCP2CON), 3, a
#define CCP2OD                           BANKMASK(TRISG), 6, a
#define CCP2_PA2                         BANKMASK(PORTB), 3, a
#define CCP6E                            BANKMASK(PORTE), 6, a
#define CCP7E                            BANKMASK(PORTE), 5, a
#define CCP8E                            BANKMASK(PORTE), 4, a
#define CCP9E                            BANKMASK(PORTE), 3, a
#define CHIME                            BANKMASK(ALRMCFG), 6, b
#define CHS0                             BANKMASK(ADCON0), 2, a
#define CHS1                             BANKMASK(ADCON0), 3, a
#define CHS2                             BANKMASK(ADCON0), 4, a
#define CHS3                             BANKMASK(ADCON0), 5, a
#define CHSN3                            BANKMASK(ADCON1), 3, a
#define CIS                              BANKMASK(CMCON), 3, a
#define CK1                              BANKMASK(PORTC), 6, a
#define CK2                              BANKMASK(PORTG), 1, a
#define CKE                              BANKMASK(SSP1STAT), 6, a
#define CKE1                             BANKMASK(SSP1STAT), 6, a
#define CKP                              BANKMASK(SSP1CON1), 4, a
#define CKP1                             BANKMASK(SSP1CON1), 4, a
#define CKSEL0                           BANKMASK(LCDREG), 0, a
#define CKSEL1                           BANKMASK(LCDREG), 1, a
#define CKTXP                            BANKMASK(BAUDCON1), 4, a
#define CLKI                             BANKMASK(PORTA), 7, a
#define CLKO                             BANKMASK(PORTA), 6, a
#define CM                               BANKMASK(RCON), 5, a
#define CM0                              BANKMASK(CMCON), 0, a
#define CM1                              BANKMASK(CMCON), 1, a
#define CM2                              BANKMASK(CMCON), 2, a
#define CMEN0                            BANKMASK(CMCON), 0, a
#define CMEN1                            BANKMASK(CMCON), 1, a
#define CMEN2                            BANKMASK(CMCON), 2, a
#define CMIE                             BANKMASK(PIE2), 6, a
#define CMIF                             BANKMASK(PIR2), 6, a
#define CMIP                             BANKMASK(IPR2), 6, a
#define COM0                             BANKMASK(PORTE), 3, a
#define COM1                             BANKMASK(PORTE), 4, a
#define COM2                             BANKMASK(PORTE), 5, a
#define COM3                             BANKMASK(PORTE), 6, a
#define CPEN                             BANKMASK(LCDREG), 6, a
#define CREN                             BANKMASK(RCSTA1), 4, a
#define CREN1                            BANKMASK(RCSTA1), 4, a
#define CREN2                            BANKMASK(RCSTA2), 4, a
#define CS0                              BANKMASK(LCDCON), 2, a
#define CS1                              BANKMASK(LCDCON), 3, a
#define CSRC                             BANKMASK(TXSTA1), 7, a
#define CSRC1                            BANKMASK(TXSTA1), 7, a
#define CSRC2                            BANKMASK(TXSTA2), 7, a
#define CTED1                            BANKMASK(PORTB), 2, a
#define CTED2                            BANKMASK(PORTB), 3, a
#define CTMUEN                           BANKMASK(CTMUCONH), 7, b
#define CTMUIE                           BANKMASK(PIE3), 3, a
#define CTMUIF                           BANKMASK(PIR3), 3, a
#define CTMUIP                           BANKMASK(IPR3), 3, a
#define CTMUSIDL                         BANKMASK(CTMUCONH), 5, b
#define CTPLS                            BANKMASK(PORTD), 0, a
#define CTTRIG                           BANKMASK(CTMUCONH), 0, b
#define CVR0                             BANKMASK(CVRCON), 0, a
#define CVR1                             BANKMASK(CVRCON), 1, a
#define CVR2                             BANKMASK(CVRCON), 2, a
#define CVR3                             BANKMASK(CVRCON), 3, a
#define CVREF                            BANKMASK(PORTF), 5, a
#define CVREN                            BANKMASK(CVRCON), 7, a
#define CVROE                            BANKMASK(CVRCON), 6, a
#define CVROEN                           BANKMASK(CVRCON), 6, a
#define CVRR                             BANKMASK(CVRCON), 5, a
#define CVRSS                            BANKMASK(CVRCON), 4, a
#define DA                               BANKMASK(SSP1STAT), 5, a
#define DA1                              BANKMASK(SSP1STAT), 5, a
#define DATA_ADDRESS                     BANKMASK(SSP1STAT), 5, a
#define DC                               BANKMASK(STATUS), 1, a
#define DC1B0                            BANKMASK(CCP1CON), 4, a
#define DC1B1                            BANKMASK(CCP1CON), 5, a
#define DC2B0                            BANKMASK(CCP2CON), 4, a
#define DC2B1                            BANKMASK(CCP2CON), 5, a
#define DCCP1X                           BANKMASK(CCP1CON), 5, a
#define DCCP1Y                           BANKMASK(CCP1CON), 4, a
#define DCCP2X                           BANKMASK(CCP2CON), 5, a
#define DCCP2Y                           BANKMASK(CCP2CON), 4, a
#define DONE                             BANKMASK(ADCON0), 1, a
#define DT1                              BANKMASK(PORTC), 7, a
#define DT2                              BANKMASK(PORTG), 2, a
#define DTRXP                            BANKMASK(BAUDCON1), 5, a
#define DTRXP1                           BANKMASK(BAUDCON1), 5, a
#define D_A                              BANKMASK(SSP1STAT), 5, a
#define D_NOT_A                          BANKMASK(SSP1STAT), 5, a
#define D_nA                             BANKMASK(SSP1STAT), 5, a
#define EBDIS                            BANKMASK(PR2), 7, a
#define EDG1POL                          BANKMASK(CTMUCONL), 4, b
#define EDG1SEL0                         BANKMASK(CTMUCONL), 2, b
#define EDG1SEL1                         BANKMASK(CTMUCONL), 3, b
#define EDG1STAT                         BANKMASK(CTMUCONL), 0, b
#define EDG2POL                          BANKMASK(CTMUCONL), 7, b
#define EDG2SEL0                         BANKMASK(CTMUCONL), 5, b
#define EDG2SEL1                         BANKMASK(CTMUCONL), 6, b
#define EDG2STAT                         BANKMASK(CTMUCONL), 1, b
#define EDGEN                            BANKMASK(CTMUCONH), 3, b
#define EDGSEQEN                         BANKMASK(CTMUCONH), 2, b
#define FERR                             BANKMASK(RCSTA1), 2, a
#define FERR1                            BANKMASK(RCSTA1), 2, a
#define FERR2                            BANKMASK(RCSTA2), 2, a
#define FREE                             BANKMASK(EECON1), 4, a
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
#define HALFSEC                          BANKMASK(RTCCFG), 3, b
#define I2C_DAT                          BANKMASK(SSP1STAT), 5, a
#define I2C_READ                         BANKMASK(SSP1STAT), 2, a
#define I2C_START                        BANKMASK(SSP1STAT), 3, a
#define I2C_STOP                         BANKMASK(SSP1STAT), 4, a
#define IDISSEN                          BANKMASK(CTMUCONH), 1, b
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
#define INT3                             BANKMASK(PORTB), 3, a
#define INT3E                            BANKMASK(INTCON3), 5, a
#define INT3F                            BANKMASK(INTCON3), 2, a
#define INT3IE                           BANKMASK(INTCON3), 5, a
#define INT3IF                           BANKMASK(INTCON3), 2, a
#define INT3IP                           BANKMASK(INTCON2), 1, a
#define INT3P                            BANKMASK(INTCON2), 1, a
#define INTEDG0                          BANKMASK(INTCON2), 6, a
#define INTEDG1                          BANKMASK(INTCON2), 5, a
#define INTEDG2                          BANKMASK(INTCON2), 4, a
#define INTEDG3                          BANKMASK(INTCON2), 3, a
#define INTSRC                           BANKMASK(OSCTUNE), 7, a
#define IOFS                             BANKMASK(OSCCON), 2, a
#define IPEN                             BANKMASK(RCON), 7, a
#define IRCF0                            BANKMASK(OSCCON), 4, a
#define IRCF1                            BANKMASK(OSCCON), 5, a
#define IRCF2                            BANKMASK(OSCCON), 6, a
#define IRNG0                            BANKMASK(CTMUICON), 0, b
#define IRNG1                            BANKMASK(CTMUICON), 1, b
#define ITRIM0                           BANKMASK(CTMUICON), 2, b
#define ITRIM1                           BANKMASK(CTMUICON), 3, b
#define ITRIM2                           BANKMASK(CTMUICON), 4, b
#define ITRIM3                           BANKMASK(CTMUICON), 5, b
#define ITRIM4                           BANKMASK(CTMUICON), 6, b
#define ITRIM5                           BANKMASK(CTMUICON), 7, b
#define KBI0                             BANKMASK(PORTB), 4, a
#define KBI1                             BANKMASK(PORTB), 5, a
#define KBI2                             BANKMASK(PORTB), 6, a
#define KBI3                             BANKMASK(PORTB), 7, a
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
#define LATC3                            BANKMASK(LATC), 3, a
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
#define LATE3                            BANKMASK(LATE), 3, a
#define LATE4                            BANKMASK(LATE), 4, a
#define LATE5                            BANKMASK(LATE), 5, a
#define LATE6                            BANKMASK(LATE), 6, a
#define LATE7                            BANKMASK(LATE), 7, a
#define LATF1                            BANKMASK(LATF), 1, a
#define LATF2                            BANKMASK(LATF), 2, a
#define LATF3                            BANKMASK(LATF), 3, a
#define LATF4                            BANKMASK(LATF), 4, a
#define LATF5                            BANKMASK(LATF), 5, a
#define LATF6                            BANKMASK(LATF), 6, a
#define LATF7                            BANKMASK(LATF), 7, a
#define LATG0                            BANKMASK(LATG), 0, a
#define LATG1                            BANKMASK(LATG), 1, a
#define LATG2                            BANKMASK(LATG), 2, a
#define LATG3                            BANKMASK(LATG), 3, a
#define LATG4                            BANKMASK(LATG), 4, a
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
#define LC3                              BANKMASK(LATC), 3, a
#define LC4                              BANKMASK(LATC), 4, a
#define LC5                              BANKMASK(LATC), 5, a
#define LC6                              BANKMASK(LATC), 6, a
#define LC7                              BANKMASK(LATC), 7, a
#define LCDA                             BANKMASK(LCDPS), 5, a
#define LCDBIAS0                         BANKMASK(PORTG), 0, a
#define LCDBIAS1                         BANKMASK(PORTE), 0, a
#define LCDBIAS2                         BANKMASK(PORTE), 1, a
#define LCDCS0                           BANKMASK(LCDCON), 2, a
#define LCDCS1                           BANKMASK(LCDCON), 3, a
#define LCDEN                            BANKMASK(LCDCON), 7, a
#define LCDIE                            BANKMASK(PIE3), 6, a
#define LCDIF                            BANKMASK(PIR3), 6, a
#define LCDIP                            BANKMASK(IPR3), 6, a
#define LCDPS0                           BANKMASK(LCDPS), 0, a
#define LCDPS1                           BANKMASK(LCDPS), 1, a
#define LCDPS2                           BANKMASK(LCDPS), 2, a
#define LCDPS3                           BANKMASK(LCDPS), 3, a
#define LCDSLPEN                         BANKMASK(LCDCON), 6, a
#define LCDWERR                          BANKMASK(LCDCON), 5, a
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
#define LE3                              BANKMASK(LATE), 3, a
#define LE4                              BANKMASK(LATE), 4, a
#define LE5                              BANKMASK(LATE), 5, a
#define LE6                              BANKMASK(LATE), 6, a
#define LE7                              BANKMASK(LATE), 7, a
#define LF1                              BANKMASK(LATF), 1, a
#define LF2                              BANKMASK(LATF), 2, a
#define LF3                              BANKMASK(LATF), 3, a
#define LF4                              BANKMASK(LATF), 4, a
#define LF5                              BANKMASK(LATF), 5, a
#define LF6                              BANKMASK(LATF), 6, a
#define LF7                              BANKMASK(LATF), 7, a
#define LG0                              BANKMASK(LATG), 0, a
#define LG1                              BANKMASK(LATG), 1, a
#define LG2                              BANKMASK(LATG), 2, a
#define LG3                              BANKMASK(LATG), 3, a
#define LG4                              BANKMASK(LATG), 4, a
#define LMUX0                            BANKMASK(LCDCON), 0, a
#define LMUX1                            BANKMASK(LCDCON), 1, a
#define LP0                              BANKMASK(LCDPS), 0, a
#define LP1                              BANKMASK(LCDPS), 1, a
#define LP2                              BANKMASK(LCDPS), 2, a
#define LP3                              BANKMASK(LCDPS), 3, a
#define LVDIE                            BANKMASK(PIE2), 2, a
#define LVDIF                            BANKMASK(PIR2), 2, a
#define LVDIN                            BANKMASK(PORTA), 5, a
#define LVDIP                            BANKMASK(IPR2), 2, a
#define MODE13                           BANKMASK(LCDREG), 2, a
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
#define NEGATIVE                         BANKMASK(STATUS), 4, a
#define NOT_A                            BANKMASK(SSP1STAT), 5, a
#define NOT_ADDRESS                      BANKMASK(SSP1STAT), 5, a
#define NOT_BOR                          BANKMASK(RCON), 0, a
#define NOT_CM                           BANKMASK(RCON), 5, a
#define NOT_DONE                         BANKMASK(ADCON0), 1, a
#define NOT_PD                           BANKMASK(RCON), 2, a
#define NOT_POR                          BANKMASK(RCON), 1, a
#define NOT_RBPU                         BANKMASK(INTCON2), 7, a
#define NOT_RC8                          BANKMASK(RCSTA2), 6, a
#define NOT_RI                           BANKMASK(RCON), 4, a
#define NOT_T1SYNC                       BANKMASK(T1CON), 2, a
#define NOT_T3SYNC                       BANKMASK(T3CON), 2, a
#define NOT_TO                           BANKMASK(RCON), 3, a
#define NOT_TX8                          BANKMASK(TXSTA2), 6, a
#define NOT_W                            BANKMASK(SSP1STAT), 2, a
#define NOT_WRITE                        BANKMASK(SSP1STAT), 2, a
#define OERR                             BANKMASK(RCSTA1), 1, a
#define OERR1                            BANKMASK(RCSTA1), 1, a
#define OERR2                            BANKMASK(RCSTA2), 1, a
#define OSC1                             BANKMASK(PORTA), 7, a
#define OSC2                             BANKMASK(PORTA), 6, a
#define OSCFIE                           BANKMASK(PIE2), 7, a
#define OSCFIF                           BANKMASK(PIR2), 7, a
#define OSCFIP                           BANKMASK(IPR2), 7, a
#define OSTS                             BANKMASK(OSCCON), 3, a
#define OV                               BANKMASK(STATUS), 3, a
#define OVERFLOW                         BANKMASK(STATUS), 3, a
#define PA1                              BANKMASK(PORTC), 2, a
#define PA2                              BANKMASK(PORTC), 1, a
#define PA2E                             BANKMASK(PORTE), 7, a
#define PB1E                             BANKMASK(PORTE), 6, a
#define PB3E                             BANKMASK(PORTE), 4, a
#define PC1E                             BANKMASK(PORTE), 5, a
#define PC2                              BANKMASK(PORTE), 1, a
#define PC3E                             BANKMASK(PORTE), 3, a
#define PCFG0                            BANKMASK(ADCON1), 0, a
#define PCFG1                            BANKMASK(ADCON1), 1, a
#define PCFG2                            BANKMASK(ADCON1), 2, a
#define PCFG3                            BANKMASK(ADCON1), 3, a
#define PD                               BANKMASK(RCON), 2, a
#define PD2                              BANKMASK(PORTE), 0, a
#define PEIE                             BANKMASK(INTCON), 6, a
#define PEIE_GIEL                        BANKMASK(INTCON), 6, a
#define PEN                              BANKMASK(SSP1CON2), 2, a
#define PEN1                             BANKMASK(SSP1CON2), 2, a
#define PGC                              BANKMASK(PORTB), 6, a
#define PGD                              BANKMASK(PORTB), 7, a
#define PLLEN                            BANKMASK(OSCTUNE), 6, a
#define POR                              BANKMASK(RCON), 1, a
#define PSA                              BANKMASK(T0CON), 3, a
#define RA0                              BANKMASK(PORTA), 0, a
#define RA1                              BANKMASK(PORTA), 1, a
#define RA2                              BANKMASK(PORTA), 2, a
#define RA3                              BANKMASK(PORTA), 3, a
#define RA4                              BANKMASK(PORTA), 4, a
#define RA5                              BANKMASK(PORTA), 5, a
#define RA6                              BANKMASK(PORTA), 6, a
#define RA7                              BANKMASK(PORTA), 7, a
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
#define RC2IE                            BANKMASK(PIE3), 5, a
#define RC2IF                            BANKMASK(PIR3), 5, a
#define RC2IP                            BANKMASK(IPR3), 5, a
#define RC3                              BANKMASK(PORTC), 3, a
#define RC4                              BANKMASK(PORTC), 4, a
#define RC5                              BANKMASK(PORTC), 5, a
#define RC6                              BANKMASK(PORTC), 6, a
#define RC7                              BANKMASK(PORTC), 7, a
#define RC8_9                            BANKMASK(RCSTA1), 6, a
#define RC8_92                           BANKMASK(RCSTA2), 6, a
#define RC9                              BANKMASK(RCSTA1), 6, a
#define RC92                             BANKMASK(RCSTA2), 6, a
#define RCD8                             BANKMASK(RCSTA1), 0, a
#define RCD82                            BANKMASK(RCSTA2), 0, a
#define RCEN                             BANKMASK(SSP1CON2), 3, a
#define RCEN1                            BANKMASK(SSP1CON2), 3, a
#define RCIDL                            BANKMASK(BAUDCON1), 6, a
#define RCIDL1                           BANKMASK(BAUDCON1), 6, a
#define RCIE                             BANKMASK(PIE1), 5, a
#define RCIF                             BANKMASK(PIR1), 5, a
#define RCIP                             BANKMASK(IPR1), 5, a
#define RCMT                             BANKMASK(BAUDCON1), 6, a
#define RCMT1                            BANKMASK(BAUDCON1), 6, a
#define RD0                              BANKMASK(PORTD), 0, a
#define RD1                              BANKMASK(PORTD), 1, a
#define RD16                             BANKMASK(T1CON), 7, a
#define RD163                            BANKMASK(T3CON), 7, a
#define RD2                              BANKMASK(PORTD), 2, a
#define RD3                              BANKMASK(PORTD), 3, a
#define RD4                              BANKMASK(PORTD), 4, a
#define RD5                              BANKMASK(PORTD), 5, a
#define RD6                              BANKMASK(PORTD), 6, a
#define RD7                              BANKMASK(PORTD), 7, a
#define RDE                              BANKMASK(PORTE), 0, a
#define RDPU                             BANKMASK(PORTG), 7, a
#define RE0                              BANKMASK(PORTE), 0, a
#define RE1                              BANKMASK(PORTE), 1, a
#define RE3                              BANKMASK(PORTE), 3, a
#define RE4                              BANKMASK(PORTE), 4, a
#define RE5                              BANKMASK(PORTE), 5, a
#define RE6                              BANKMASK(PORTE), 6, a
#define RE7                              BANKMASK(PORTE), 7, a
#define READ_WRITE                       BANKMASK(SSP1STAT), 2, a
#define REGSLP                           BANKMASK(WDTCON), 7, a
#define REPU                             BANKMASK(PORTG), 6, a
#define RF1                              BANKMASK(PORTF), 1, a
#define RF2                              BANKMASK(PORTF), 2, a
#define RF3                              BANKMASK(PORTF), 3, a
#define RF4                              BANKMASK(PORTF), 4, a
#define RF5                              BANKMASK(PORTF), 5, a
#define RF6                              BANKMASK(PORTF), 6, a
#define RF7                              BANKMASK(PORTF), 7, a
#define RG0                              BANKMASK(PORTG), 0, a
#define RG1                              BANKMASK(PORTG), 1, a
#define RG2                              BANKMASK(PORTG), 2, a
#define RG3                              BANKMASK(PORTG), 3, a
#define RG4                              BANKMASK(PORTG), 4, a
#define RG5                              BANKMASK(PORTG), 5, a
#define RG6                              BANKMASK(PORTG), 6, a
#define RG7                              BANKMASK(PORTG), 7, a
#define RI                               BANKMASK(RCON), 4, a
#define RJPU                             BANKMASK(PORTG), 5, a
#define RSEN                             BANKMASK(SSP1CON2), 1, a
#define RSEN1                            BANKMASK(SSP1CON2), 1, a
#define RTCC                             BANKMASK(PORTG), 4, a
#define RTCCIE                           BANKMASK(PIE3), 0, a
#define RTCCIF                           BANKMASK(PIR3), 0, a
#define RTCCIP                           BANKMASK(IPR3), 0, a
#define RTCEN                            BANKMASK(RTCCFG), 7, b
#define RTCOE                            BANKMASK(RTCCFG), 2, b
#define RTCPTR0                          BANKMASK(RTCCFG), 0, b
#define RTCPTR1                          BANKMASK(RTCCFG), 1, b
#define RTCSYNC                          BANKMASK(RTCCFG), 4, b
#define RTCWREN                          BANKMASK(RTCCFG), 5, b
#define RTSECSEL0                        BANKMASK(PADCFG1), 1, b
#define RTSECSEL1                        BANKMASK(PADCFG1), 2, b
#define RW                               BANKMASK(SSP1STAT), 2, a
#define RW1                              BANKMASK(SSP1STAT), 2, a
#define RX1                              BANKMASK(PORTC), 7, a
#define RX2                              BANKMASK(PORTG), 2, a
#define RX9                              BANKMASK(RCSTA1), 6, a
#define RX91                             BANKMASK(RCSTA1), 6, a
#define RX92                             BANKMASK(RCSTA2), 6, a
#define RX9D                             BANKMASK(RCSTA1), 0, a
#define RX9D1                            BANKMASK(RCSTA1), 0, a
#define RX9D2                            BANKMASK(RCSTA2), 0, a
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
#define S00C0                            BANKMASK(LCDDATA0), 0, a
#define S00C1                            BANKMASK(LCDDATA6), 0, a
#define S00C2                            BANKMASK(LCDDATA12), 0, a
#define S00C3                            BANKMASK(LCDDATA18), 0, a
#define S01C0                            BANKMASK(LCDDATA0), 1, a
#define S01C1                            BANKMASK(LCDDATA6), 1, a
#define S01C2                            BANKMASK(LCDDATA12), 1, a
#define S01C3                            BANKMASK(LCDDATA18), 1, a
#define S02C0                            BANKMASK(LCDDATA0), 2, a
#define S02C1                            BANKMASK(LCDDATA6), 2, a
#define S02C2                            BANKMASK(LCDDATA12), 2, a
#define S02C3                            BANKMASK(LCDDATA18), 2, a
#define S03C0                            BANKMASK(LCDDATA0), 3, a
#define S03C1                            BANKMASK(LCDDATA6), 3, a
#define S03C2                            BANKMASK(LCDDATA12), 3, a
#define S03C3                            BANKMASK(LCDDATA18), 3, a
#define S04C0                            BANKMASK(LCDDATA0), 4, a
#define S04C1                            BANKMASK(LCDDATA6), 4, a
#define S04C2                            BANKMASK(LCDDATA12), 4, a
#define S04C3                            BANKMASK(LCDDATA18), 4, a
#define S05C0                            BANKMASK(LCDDATA0), 5, a
#define S05C1                            BANKMASK(LCDDATA6), 5, a
#define S05C2                            BANKMASK(LCDDATA12), 5, a
#define S05C3                            BANKMASK(LCDDATA18), 5, a
#define S06C0                            BANKMASK(LCDDATA0), 6, a
#define S06C1                            BANKMASK(LCDDATA6), 6, a
#define S06C2                            BANKMASK(LCDDATA12), 6, a
#define S06C3                            BANKMASK(LCDDATA18), 6, a
#define S07C0                            BANKMASK(LCDDATA0), 7, a
#define S07C1                            BANKMASK(LCDDATA6), 7, a
#define S07C2                            BANKMASK(LCDDATA12), 7, a
#define S07C3                            BANKMASK(LCDDATA18), 7, a
#define S08C0                            BANKMASK(LCDDATA1), 0, a
#define S08C1                            BANKMASK(LCDDATA7), 0, a
#define S08C2                            BANKMASK(LCDDATA13), 0, a
#define S08C3                            BANKMASK(LCDDATA19), 0, a
#define S09C0                            BANKMASK(LCDDATA1), 1, a
#define S09C1                            BANKMASK(LCDDATA7), 1, a
#define S09C2                            BANKMASK(LCDDATA13), 1, a
#define S09C3                            BANKMASK(LCDDATA19), 1, a
#define S0C0                             BANKMASK(LCDDATA0), 0, a
#define S0C1                             BANKMASK(LCDDATA6), 0, a
#define S0C2                             BANKMASK(LCDDATA12), 0, a
#define S0C3                             BANKMASK(LCDDATA18), 0, a
#define S10C0                            BANKMASK(LCDDATA1), 2, a
#define S10C1                            BANKMASK(LCDDATA7), 2, a
#define S10C2                            BANKMASK(LCDDATA13), 2, a
#define S10C3                            BANKMASK(LCDDATA19), 2, a
#define S11C0                            BANKMASK(LCDDATA1), 3, a
#define S11C1                            BANKMASK(LCDDATA7), 3, a
#define S11C2                            BANKMASK(LCDDATA13), 3, a
#define S11C3                            BANKMASK(LCDDATA19), 3, a
#define S12C0                            BANKMASK(LCDDATA1), 4, a
#define S12C1                            BANKMASK(LCDDATA7), 4, a
#define S12C2                            BANKMASK(LCDDATA13), 4, a
#define S12C3                            BANKMASK(LCDDATA19), 4, a
#define S13C0                            BANKMASK(LCDDATA1), 5, a
#define S13C1                            BANKMASK(LCDDATA7), 5, a
#define S13C2                            BANKMASK(LCDDATA13), 5, a
#define S13C3                            BANKMASK(LCDDATA19), 5, a
#define S14C0                            BANKMASK(LCDDATA1), 6, a
#define S14C1                            BANKMASK(LCDDATA7), 6, a
#define S14C2                            BANKMASK(LCDDATA13), 6, a
#define S14C3                            BANKMASK(LCDDATA19), 6, a
#define S15C0                            BANKMASK(LCDDATA1), 7, a
#define S15C1                            BANKMASK(LCDDATA7), 7, a
#define S15C2                            BANKMASK(LCDDATA13), 7, a
#define S15C3                            BANKMASK(LCDDATA19), 7, a
#define S16C0                            BANKMASK(LCDDATA2), 0, a
#define S16C1                            BANKMASK(LCDDATA8), 0, a
#define S16C2                            BANKMASK(LCDDATA14), 0, a
#define S16C3                            BANKMASK(LCDDATA20), 0, a
#define S17C0                            BANKMASK(LCDDATA2), 1, a
#define S17C1                            BANKMASK(LCDDATA8), 1, a
#define S17C2                            BANKMASK(LCDDATA14), 1, a
#define S17C3                            BANKMASK(LCDDATA20), 1, a
#define S18C0                            BANKMASK(LCDDATA2), 2, a
#define S18C1                            BANKMASK(LCDDATA8), 2, a
#define S18C2                            BANKMASK(LCDDATA14), 2, a
#define S18C3                            BANKMASK(LCDDATA20), 2, a
#define S19C0                            BANKMASK(LCDDATA2), 3, a
#define S19C1                            BANKMASK(LCDDATA8), 3, a
#define S19C2                            BANKMASK(LCDDATA14), 3, a
#define S19C3                            BANKMASK(LCDDATA20), 3, a
#define S1C0                             BANKMASK(LCDDATA0), 1, a
#define S1C1                             BANKMASK(LCDDATA6), 1, a
#define S1C2                             BANKMASK(LCDDATA12), 1, a
#define S1C3                             BANKMASK(LCDDATA18), 1, a
#define S20C0                            BANKMASK(LCDDATA2), 4, a
#define S20C1                            BANKMASK(LCDDATA8), 4, a
#define S20C2                            BANKMASK(LCDDATA14), 4, a
#define S20C3                            BANKMASK(LCDDATA20), 4, a
#define S21C0                            BANKMASK(LCDDATA2), 5, a
#define S21C1                            BANKMASK(LCDDATA8), 5, a
#define S21C2                            BANKMASK(LCDDATA14), 5, a
#define S21C3                            BANKMASK(LCDDATA20), 5, a
#define S22C0                            BANKMASK(LCDDATA2), 6, a
#define S22C1                            BANKMASK(LCDDATA8), 6, a
#define S22C2                            BANKMASK(LCDDATA14), 6, a
#define S22C3                            BANKMASK(LCDDATA20), 6, a
#define S23C0                            BANKMASK(LCDDATA2), 7, a
#define S23C1                            BANKMASK(LCDDATA8), 7, a
#define S23C2                            BANKMASK(LCDDATA14), 7, a
#define S23C3                            BANKMASK(LCDDATA20), 7, a
#define S24C0                            BANKMASK(LCDDATA3), 0, a
#define S24C1                            BANKMASK(LCDDATA9), 0, a
#define S24C2                            BANKMASK(LCDDATA15), 0, a
#define S24C3                            BANKMASK(LCDDATA21), 0, a
#define S25C0                            BANKMASK(LCDDATA3), 1, a
#define S25C1                            BANKMASK(LCDDATA9), 1, a
#define S25C2                            BANKMASK(LCDDATA15), 1, a
#define S25C3                            BANKMASK(LCDDATA21), 1, a
#define S26C0                            BANKMASK(LCDDATA3), 2, a
#define S26C1                            BANKMASK(LCDDATA9), 2, a
#define S26C2                            BANKMASK(LCDDATA15), 2, a
#define S26C3                            BANKMASK(LCDDATA21), 2, a
#define S27C0                            BANKMASK(LCDDATA3), 3, a
#define S27C1                            BANKMASK(LCDDATA9), 3, a
#define S27C2                            BANKMASK(LCDDATA15), 3, a
#define S27C3                            BANKMASK(LCDDATA21), 3, a
#define S28C0                            BANKMASK(LCDDATA3), 4, a
#define S28C1                            BANKMASK(LCDDATA9), 4, a
#define S28C2                            BANKMASK(LCDDATA15), 4, a
#define S28C3                            BANKMASK(LCDDATA21), 4, a
#define S29C0                            BANKMASK(LCDDATA3), 5, a
#define S29C1                            BANKMASK(LCDDATA9), 5, a
#define S29C2                            BANKMASK(LCDDATA15), 5, a
#define S29C3                            BANKMASK(LCDDATA21), 5, a
#define S2C0                             BANKMASK(LCDDATA0), 2, a
#define S2C1                             BANKMASK(LCDDATA6), 2, a
#define S2C2                             BANKMASK(LCDDATA12), 2, a
#define S2C3                             BANKMASK(LCDDATA18), 2, a
#define S30C0                            BANKMASK(LCDDATA3), 6, a
#define S30C1                            BANKMASK(LCDDATA9), 6, a
#define S30C2                            BANKMASK(LCDDATA15), 6, a
#define S30C3                            BANKMASK(LCDDATA21), 6, a
#define S31C0                            BANKMASK(LCDDATA3), 7, a
#define S31C1                            BANKMASK(LCDDATA9), 7, a
#define S31C2                            BANKMASK(LCDDATA15), 7, a
#define S31C3                            BANKMASK(LCDDATA21), 7, a
#define S32C0                            BANKMASK(LCDDATA4), 0, a
#define S32C1                            BANKMASK(LCDDATA10), 0, a
#define S32C2                            BANKMASK(LCDDATA16), 0, a
#define S32C3                            BANKMASK(LCDDATA22), 0, a
#define S33C0                            BANKMASK(LCDDATA4), 1, a
#define S34C0                            BANKMASK(LCDDATA4), 2, a
#define S35C0                            BANKMASK(LCDDATA4), 3, a
#define S36C0                            BANKMASK(LCDDATA4), 4, a
#define S37C0                            BANKMASK(LCDDATA4), 5, a
#define S38C0                            BANKMASK(LCDDATA4), 6, a
#define S39C0                            BANKMASK(LCDDATA4), 7, a
#define S3C0                             BANKMASK(LCDDATA0), 3, a
#define S3C1                             BANKMASK(LCDDATA6), 3, a
#define S3C2                             BANKMASK(LCDDATA12), 3, a
#define S3C3                             BANKMASK(LCDDATA18), 3, a
#define S4C0                             BANKMASK(LCDDATA0), 4, a
#define S4C1                             BANKMASK(LCDDATA6), 4, a
#define S4C2                             BANKMASK(LCDDATA12), 4, a
#define S4C3                             BANKMASK(LCDDATA18), 4, a
#define S5C0                             BANKMASK(LCDDATA0), 5, a
#define S5C1                             BANKMASK(LCDDATA6), 5, a
#define S5C2                             BANKMASK(LCDDATA12), 5, a
#define S5C3                             BANKMASK(LCDDATA18), 5, a
#define S6C0                             BANKMASK(LCDDATA0), 6, a
#define S6C1                             BANKMASK(LCDDATA6), 6, a
#define S6C2                             BANKMASK(LCDDATA12), 6, a
#define S6C3                             BANKMASK(LCDDATA18), 6, a
#define S7C0                             BANKMASK(LCDDATA0), 7, a
#define S7C1                             BANKMASK(LCDDATA6), 7, a
#define S7C2                             BANKMASK(LCDDATA12), 7, a
#define S7C3                             BANKMASK(LCDDATA18), 7, a
#define S8C0                             BANKMASK(LCDDATA1), 0, a
#define S8C1                             BANKMASK(LCDDATA7), 0, a
#define S8C2                             BANKMASK(LCDDATA13), 0, a
#define S8C3                             BANKMASK(LCDDATA19), 0, a
#define S9C0                             BANKMASK(LCDDATA1), 1, a
#define S9C1                             BANKMASK(LCDDATA7), 1, a
#define S9C2                             BANKMASK(LCDDATA13), 1, a
#define S9C3                             BANKMASK(LCDDATA19), 1, a
#define SCK                              BANKMASK(PORTC), 3, a
#define SCKP                             BANKMASK(BAUDCON1), 4, a
#define SCKP1                            BANKMASK(BAUDCON1), 4, a
#define SCL                              BANKMASK(PORTC), 3, a
#define SCS0                             BANKMASK(OSCCON), 0, a
#define SCS1                             BANKMASK(OSCCON), 1, a
#define SDA                              BANKMASK(PORTC), 4, a
#define SDI                              BANKMASK(PORTC), 4, a
#define SDO                              BANKMASK(PORTC), 5, a
#define SE0                              BANKMASK(LCDSE0), 0, a
#define SE00                             BANKMASK(LCDSE0), 0, a
#define SE01                             BANKMASK(LCDSE0), 1, a
#define SE02                             BANKMASK(LCDSE0), 2, a
#define SE03                             BANKMASK(LCDSE0), 3, a
#define SE04                             BANKMASK(LCDSE0), 4, a
#define SE05                             BANKMASK(LCDSE0), 5, a
#define SE06                             BANKMASK(LCDSE0), 6, a
#define SE07                             BANKMASK(LCDSE0), 7, a
#define SE08                             BANKMASK(LCDSE1), 0, a
#define SE09                             BANKMASK(LCDSE1), 1, a
#define SE1                              BANKMASK(LCDSE0), 1, a
#define SE10                             BANKMASK(LCDSE1), 2, a
#define SE11                             BANKMASK(LCDSE1), 3, a
#define SE12                             BANKMASK(LCDSE1), 4, a
#define SE13                             BANKMASK(LCDSE1), 5, a
#define SE14                             BANKMASK(LCDSE1), 6, a
#define SE15                             BANKMASK(LCDSE1), 7, a
#define SE16                             BANKMASK(LCDSE2), 0, a
#define SE17                             BANKMASK(LCDSE2), 1, a
#define SE18                             BANKMASK(LCDSE2), 2, a
#define SE19                             BANKMASK(LCDSE2), 3, a
#define SE2                              BANKMASK(LCDSE0), 2, a
#define SE20                             BANKMASK(LCDSE2), 4, a
#define SE21                             BANKMASK(LCDSE2), 5, a
#define SE22                             BANKMASK(LCDSE2), 6, a
#define SE23                             BANKMASK(LCDSE2), 7, a
#define SE24                             BANKMASK(LCDSE3), 0, a
#define SE25                             BANKMASK(LCDSE3), 1, a
#define SE26                             BANKMASK(LCDSE3), 2, a
#define SE27                             BANKMASK(LCDSE3), 3, a
#define SE28                             BANKMASK(LCDSE3), 4, a
#define SE29                             BANKMASK(LCDSE3), 5, a
#define SE3                              BANKMASK(LCDSE0), 3, a
#define SE30                             BANKMASK(LCDSE3), 6, a
#define SE31                             BANKMASK(LCDSE3), 7, a
#define SE32                             BANKMASK(LCDSE4), 0, a
#define SE4                              BANKMASK(LCDSE0), 4, a
#define SE5                              BANKMASK(LCDSE0), 5, a
#define SE6                              BANKMASK(LCDSE0), 6, a
#define SE7                              BANKMASK(LCDSE0), 7, a
#define SE8                              BANKMASK(LCDSE1), 0, a
#define SE9                              BANKMASK(LCDSE1), 1, a
#define SEG0                             BANKMASK(PORTD), 0, a
#define SEG00COM3                        BANKMASK(LCDDATA18), 0, a
#define SEG01COM3                        BANKMASK(LCDDATA18), 1, a
#define SEG02COM3                        BANKMASK(LCDDATA18), 2, a
#define SEG03COM3                        BANKMASK(LCDDATA18), 3, a
#define SEG04COM3                        BANKMASK(LCDDATA18), 4, a
#define SEG05COM3                        BANKMASK(LCDDATA18), 5, a
#define SEG06COM3                        BANKMASK(LCDDATA18), 6, a
#define SEG07COM3                        BANKMASK(LCDDATA18), 7, a
#define SEG0COM0                         BANKMASK(LCDDATA0), 0, a
#define SEG0COM1                         BANKMASK(LCDDATA6), 0, a
#define SEG0COM2                         BANKMASK(LCDDATA12), 0, a
#define SEG1                             BANKMASK(PORTD), 1, a
#define SEG10                            BANKMASK(PORTB), 3, a
#define SEG10COM0                        BANKMASK(LCDDATA1), 2, a
#define SEG10COM1                        BANKMASK(LCDDATA7), 2, a
#define SEG10COM2                        BANKMASK(LCDDATA13), 2, a
#define SEG10COM3                        BANKMASK(LCDDATA19), 2, a
#define SEG11                            BANKMASK(PORTB), 4, a
#define SEG11COM0                        BANKMASK(LCDDATA1), 3, a
#define SEG11COM1                        BANKMASK(LCDDATA7), 3, a
#define SEG11COM2                        BANKMASK(LCDDATA13), 3, a
#define SEG11COM3                        BANKMASK(LCDDATA19), 3, a
#define SEG12                            BANKMASK(PORTC), 5, a
#define SEG12COM0                        BANKMASK(LCDDATA1), 4, a
#define SEG12COM1                        BANKMASK(LCDDATA7), 4, a
#define SEG12COM2                        BANKMASK(LCDDATA13), 4, a
#define SEG12COM3                        BANKMASK(LCDDATA19), 4, a
#define SEG13                            BANKMASK(PORTC), 2, a
#define SEG13COM0                        BANKMASK(LCDDATA1), 5, a
#define SEG13COM1                        BANKMASK(LCDDATA7), 5, a
#define SEG13COM2                        BANKMASK(LCDDATA13), 5, a
#define SEG13COM3                        BANKMASK(LCDDATA19), 5, a
#define SEG14                            BANKMASK(PORTA), 4, a
#define SEG14COM0                        BANKMASK(LCDDATA1), 6, a
#define SEG14COM1                        BANKMASK(LCDDATA7), 6, a
#define SEG14COM2                        BANKMASK(LCDDATA13), 6, a
#define SEG14COM3                        BANKMASK(LCDDATA19), 6, a
#define SEG15                            BANKMASK(PORTA), 5, a
#define SEG15COM0                        BANKMASK(LCDDATA1), 7, a
#define SEG15COM1                        BANKMASK(LCDDATA7), 7, a
#define SEG15COM2                        BANKMASK(LCDDATA13), 7, a
#define SEG15COM3                        BANKMASK(LCDDATA19), 7, a
#define SEG16                            BANKMASK(PORTC), 4, a
#define SEG16COM0                        BANKMASK(LCDDATA2), 0, a
#define SEG16COM1                        BANKMASK(LCDDATA8), 0, a
#define SEG16COM2                        BANKMASK(LCDDATA14), 0, a
#define SEG16COM3                        BANKMASK(LCDDATA20), 0, a
#define SEG17                            BANKMASK(PORTC), 3, a
#define SEG17COM0                        BANKMASK(LCDDATA2), 1, a
#define SEG17COM1                        BANKMASK(LCDDATA8), 1, a
#define SEG17COM2                        BANKMASK(LCDDATA14), 1, a
#define SEG17COM3                        BANKMASK(LCDDATA20), 1, a
#define SEG18                            BANKMASK(PORTA), 1, a
#define SEG18COM0                        BANKMASK(LCDDATA2), 2, a
#define SEG18COM1                        BANKMASK(LCDDATA8), 2, a
#define SEG18COM2                        BANKMASK(LCDDATA14), 2, a
#define SEG18COM3                        BANKMASK(LCDDATA20), 2, a
#define SEG19                            BANKMASK(PORTF), 1, a
#define SEG19COM0                        BANKMASK(LCDDATA2), 3, a
#define SEG19COM1                        BANKMASK(LCDDATA8), 3, a
#define SEG19COM2                        BANKMASK(LCDDATA14), 3, a
#define SEG19COM3                        BANKMASK(LCDDATA20), 3, a
#define SEG1COM0                         BANKMASK(LCDDATA0), 1, a
#define SEG1COM1                         BANKMASK(LCDDATA6), 1, a
#define SEG1COM2                         BANKMASK(LCDDATA12), 1, a
#define SEG2                             BANKMASK(PORTD), 2, a
#define SEG20                            BANKMASK(PORTF), 2, a
#define SEG20COM0                        BANKMASK(LCDDATA2), 4, a
#define SEG20COM1                        BANKMASK(LCDDATA8), 4, a
#define SEG20COM2                        BANKMASK(LCDDATA14), 4, a
#define SEG20COM3                        BANKMASK(LCDDATA20), 4, a
#define SEG21                            BANKMASK(PORTF), 3, a
#define SEG21COM0                        BANKMASK(LCDDATA2), 5, a
#define SEG21COM1                        BANKMASK(LCDDATA8), 5, a
#define SEG21COM2                        BANKMASK(LCDDATA14), 5, a
#define SEG21COM3                        BANKMASK(LCDDATA20), 5, a
#define SEG22                            BANKMASK(PORTF), 4, a
#define SEG22COM0                        BANKMASK(LCDDATA2), 6, a
#define SEG22COM1                        BANKMASK(LCDDATA8), 6, a
#define SEG22COM2                        BANKMASK(LCDDATA14), 6, a
#define SEG22COM3                        BANKMASK(LCDDATA20), 6, a
#define SEG23                            BANKMASK(PORTF), 5, a
#define SEG23COM0                        BANKMASK(LCDDATA2), 7, a
#define SEG23COM1                        BANKMASK(LCDDATA8), 7, a
#define SEG23COM2                        BANKMASK(LCDDATA14), 7, a
#define SEG23COM3                        BANKMASK(LCDDATA20), 7, a
#define SEG24                            BANKMASK(PORTF), 6, a
#define SEG24COM0                        BANKMASK(LCDDATA3), 0, a
#define SEG24COM1                        BANKMASK(LCDDATA9), 0, a
#define SEG24COM2                        BANKMASK(LCDDATA15), 0, a
#define SEG24COM3                        BANKMASK(LCDDATA21), 0, a
#define SEG25                            BANKMASK(PORTF), 7, a
#define SEG25COM0                        BANKMASK(LCDDATA3), 1, a
#define SEG25COM1                        BANKMASK(LCDDATA9), 1, a
#define SEG25COM2                        BANKMASK(LCDDATA15), 1, a
#define SEG25COM3                        BANKMASK(LCDDATA21), 1, a
#define SEG26                            BANKMASK(PORTG), 4, a
#define SEG26COM0                        BANKMASK(LCDDATA3), 2, a
#define SEG26COM1                        BANKMASK(LCDDATA9), 2, a
#define SEG26COM2                        BANKMASK(LCDDATA15), 2, a
#define SEG26COM3                        BANKMASK(LCDDATA21), 2, a
#define SEG27                            BANKMASK(PORTC), 6, a
#define SEG27COM0                        BANKMASK(LCDDATA3), 3, a
#define SEG27COM1                        BANKMASK(LCDDATA9), 3, a
#define SEG27COM2                        BANKMASK(LCDDATA15), 3, a
#define SEG27COM3                        BANKMASK(LCDDATA21), 3, a
#define SEG28                            BANKMASK(PORTC), 7, a
#define SEG28COM0                        BANKMASK(LCDDATA3), 4, a
#define SEG28COM1                        BANKMASK(LCDDATA9), 4, a
#define SEG28COM2                        BANKMASK(LCDDATA15), 4, a
#define SEG28COM3                        BANKMASK(LCDDATA21), 4, a
#define SEG29                            BANKMASK(PORTB), 5, a
#define SEG29COM0                        BANKMASK(LCDDATA3), 5, a
#define SEG29COM1                        BANKMASK(LCDDATA9), 5, a
#define SEG29COM2                        BANKMASK(LCDDATA15), 5, a
#define SEG29COM3                        BANKMASK(LCDDATA21), 5, a
#define SEG2COM0                         BANKMASK(LCDDATA0), 2, a
#define SEG2COM1                         BANKMASK(LCDDATA6), 2, a
#define SEG2COM2                         BANKMASK(LCDDATA12), 2, a
#define SEG3                             BANKMASK(PORTD), 3, a
#define SEG30                            BANKMASK(PORTB), 0, a
#define SEG30COM0                        BANKMASK(LCDDATA3), 6, a
#define SEG30COM1                        BANKMASK(LCDDATA9), 6, a
#define SEG30COM2                        BANKMASK(LCDDATA15), 6, a
#define SEG30COM3                        BANKMASK(LCDDATA21), 6, a
#define SEG31                            BANKMASK(PORTE), 7, a
#define SEG31COM0                        BANKMASK(LCDDATA3), 7, a
#define SEG31COM1                        BANKMASK(LCDDATA9), 7, a
#define SEG31COM2                        BANKMASK(LCDDATA15), 7, a
#define SEG31COM3                        BANKMASK(LCDDATA21), 7, a
#define SEG32                            BANKMASK(PORTC), 1, a
#define SEG32COM0                        BANKMASK(LCDDATA4), 0, a
#define SEG32COM1                        BANKMASK(LCDDATA10), 0, a
#define SEG32COM2                        BANKMASK(LCDDATA16), 0, a
#define SEG32COM3                        BANKMASK(LCDDATA22), 0, a
#define SEG33COM0                        BANKMASK(LCDDATA4), 1, a
#define SEG34COM0                        BANKMASK(LCDDATA4), 2, a
#define SEG35COM0                        BANKMASK(LCDDATA4), 3, a
#define SEG36COM0                        BANKMASK(LCDDATA4), 4, a
#define SEG37COM0                        BANKMASK(LCDDATA4), 5, a
#define SEG38COM0                        BANKMASK(LCDDATA4), 6, a
#define SEG39COM0                        BANKMASK(LCDDATA4), 7, a
#define SEG3COM0                         BANKMASK(LCDDATA0), 3, a
#define SEG3COM1                         BANKMASK(LCDDATA6), 3, a
#define SEG3COM2                         BANKMASK(LCDDATA12), 3, a
#define SEG4                             BANKMASK(PORTD), 4, a
#define SEG4COM0                         BANKMASK(LCDDATA0), 4, a
#define SEG4COM1                         BANKMASK(LCDDATA6), 4, a
#define SEG4COM2                         BANKMASK(LCDDATA12), 4, a
#define SEG5                             BANKMASK(PORTD), 5, a
#define SEG5COM0                         BANKMASK(LCDDATA0), 5, a
#define SEG5COM1                         BANKMASK(LCDDATA6), 5, a
#define SEG5COM2                         BANKMASK(LCDDATA12), 5, a
#define SEG6                             BANKMASK(PORTD), 6, a
#define SEG6COM0                         BANKMASK(LCDDATA0), 6, a
#define SEG6COM1                         BANKMASK(LCDDATA6), 6, a
#define SEG6COM2                         BANKMASK(LCDDATA12), 6, a
#define SEG7                             BANKMASK(PORTD), 7, a
#define SEG7COM0                         BANKMASK(LCDDATA0), 7, a
#define SEG7COM1                         BANKMASK(LCDDATA6), 7, a
#define SEG7COM2                         BANKMASK(LCDDATA12), 7, a
#define SEG8                             BANKMASK(PORTB), 1, a
#define SEG8COM0                         BANKMASK(LCDDATA1), 0, a
#define SEG8COM1                         BANKMASK(LCDDATA7), 0, a
#define SEG8COM2                         BANKMASK(LCDDATA13), 0, a
#define SEG8COM3                         BANKMASK(LCDDATA19), 0, a
#define SEG9                             BANKMASK(PORTB), 2, a
#define SEG9COM0                         BANKMASK(LCDDATA1), 1, a
#define SEG9COM1                         BANKMASK(LCDDATA7), 1, a
#define SEG9COM2                         BANKMASK(LCDDATA13), 1, a
#define SEG9COM3                         BANKMASK(LCDDATA19), 1, a
#define SEGEN0                           BANKMASK(LCDSE0), 0, a
#define SEGEN1                           BANKMASK(LCDSE0), 1, a
#define SEGEN10                          BANKMASK(LCDSE1), 2, a
#define SEGEN11                          BANKMASK(LCDSE1), 3, a
#define SEGEN12                          BANKMASK(LCDSE1), 4, a
#define SEGEN13                          BANKMASK(LCDSE1), 5, a
#define SEGEN14                          BANKMASK(LCDSE1), 6, a
#define SEGEN15                          BANKMASK(LCDSE1), 7, a
#define SEGEN16                          BANKMASK(LCDSE2), 0, a
#define SEGEN17                          BANKMASK(LCDSE2), 1, a
#define SEGEN18                          BANKMASK(LCDSE2), 2, a
#define SEGEN19                          BANKMASK(LCDSE2), 3, a
#define SEGEN2                           BANKMASK(LCDSE0), 2, a
#define SEGEN20                          BANKMASK(LCDSE2), 4, a
#define SEGEN21                          BANKMASK(LCDSE2), 5, a
#define SEGEN22                          BANKMASK(LCDSE2), 6, a
#define SEGEN23                          BANKMASK(LCDSE2), 7, a
#define SEGEN24                          BANKMASK(LCDSE3), 0, a
#define SEGEN25                          BANKMASK(LCDSE3), 1, a
#define SEGEN26                          BANKMASK(LCDSE3), 2, a
#define SEGEN27                          BANKMASK(LCDSE3), 3, a
#define SEGEN28                          BANKMASK(LCDSE3), 4, a
#define SEGEN29                          BANKMASK(LCDSE3), 5, a
#define SEGEN3                           BANKMASK(LCDSE0), 3, a
#define SEGEN30                          BANKMASK(LCDSE3), 6, a
#define SEGEN31                          BANKMASK(LCDSE3), 7, a
#define SEGEN32                          BANKMASK(LCDSE4), 0, a
#define SEGEN4                           BANKMASK(LCDSE0), 4, a
#define SEGEN5                           BANKMASK(LCDSE0), 5, a
#define SEGEN6                           BANKMASK(LCDSE0), 6, a
#define SEGEN7                           BANKMASK(LCDSE0), 7, a
#define SEGEN8                           BANKMASK(LCDSE1), 0, a
#define SEGEN9                           BANKMASK(LCDSE1), 1, a
#define SEN                              BANKMASK(SSP1CON2), 0, a
#define SEN1                             BANKMASK(SSP1CON2), 0, a
#define SENDB                            BANKMASK(TXSTA1), 3, a
#define SENDB1                           BANKMASK(TXSTA1), 3, a
#define SENDB2                           BANKMASK(TXSTA2), 3, a
#define SLPEN                            BANKMASK(LCDCON), 6, a
#define SMP                              BANKMASK(SSP1STAT), 7, a
#define SMP1                             BANKMASK(SSP1STAT), 7, a
#define SOSCEN                           BANKMASK(T1CON), 3, a
#define SOSCEN3                          BANKMASK(T3CON), 3, a
#define SP0                              BANKMASK(STKPTR), 0, a
#define SP1                              BANKMASK(STKPTR), 1, a
#define SP2                              BANKMASK(STKPTR), 2, a
#define SP3                              BANKMASK(STKPTR), 3, a
#define SP4                              BANKMASK(STKPTR), 4, a
#define SPEN                             BANKMASK(RCSTA1), 7, a
#define SPEN1                            BANKMASK(RCSTA1), 7, a
#define SPEN2                            BANKMASK(RCSTA2), 7, a
#define SPIOD                            BANKMASK(TRISG), 7, a
#define SREN                             BANKMASK(RCSTA1), 5, a
#define SREN1                            BANKMASK(RCSTA1), 5, a
#define SREN2                            BANKMASK(RCSTA2), 5, a
#define SRENA                            BANKMASK(RCSTA1), 5, a
#define SS1                              BANKMASK(PORTF), 7, a
#define SS2                              BANKMASK(PORTD), 7, a
#define SSP1IE                           BANKMASK(PIE1), 3, a
#define SSP1IF                           BANKMASK(PIR1), 3, a
#define SSP1IP                           BANKMASK(IPR1), 3, a
#define SSPEN                            BANKMASK(SSP1CON1), 5, a
#define SSPEN1                           BANKMASK(SSP1CON1), 5, a
#define SSPIE                            BANKMASK(PIE1), 3, a
#define SSPIF                            BANKMASK(PIR1), 3, a
#define SSPIP                            BANKMASK(IPR1), 3, a
#define SSPM0                            BANKMASK(SSP1CON1), 0, a
#define SSPM01                           BANKMASK(SSP1CON1), 0, a
#define SSPM012                          BANKMASK(LCDDATA12), 0, a
#define SSPM1                            BANKMASK(SSP1CON1), 1, a
#define SSPM11                           BANKMASK(SSP1CON1), 1, a
#define SSPM112                          BANKMASK(LCDDATA12), 1, a
#define SSPM2                            BANKMASK(SSP1CON1), 2, a
#define SSPM21                           BANKMASK(SSP1CON1), 2, a
#define SSPM212                          BANKMASK(LCDDATA12), 2, a
#define SSPM3                            BANKMASK(SSP1CON1), 3, a
#define SSPM31                           BANKMASK(SSP1CON1), 3, a
#define SSPM312                          BANKMASK(LCDDATA12), 3, a
#define SSPOV                            BANKMASK(SSP1CON1), 6, a
#define SSPOV1                           BANKMASK(SSP1CON1), 6, a
#define START                            BANKMASK(SSP1STAT), 3, a
#define START1                           BANKMASK(SSP1STAT), 3, a
#define STKFUL                           BANKMASK(STKPTR), 7, a
#define STKOVF                           BANKMASK(STKPTR), 7, a
#define STKPTR0                          BANKMASK(STKPTR), 0, a
#define STKPTR1                          BANKMASK(STKPTR), 1, a
#define STKPTR2                          BANKMASK(STKPTR), 2, a
#define STKPTR3                          BANKMASK(STKPTR), 3, a
#define STKPTR4                          BANKMASK(STKPTR), 4, a
#define STKUNF                           BANKMASK(STKPTR), 6, a
#define STOP                             BANKMASK(SSP1STAT), 4, a
#define STOP1                            BANKMASK(SSP1STAT), 4, a
#define SWDTE                            BANKMASK(WDTCON), 0, a
#define SWDTEN                           BANKMASK(WDTCON), 0, a
#define SYNC                             BANKMASK(TXSTA1), 4, a
#define SYNC1                            BANKMASK(TXSTA1), 4, a
#define SYNC2                            BANKMASK(TXSTA2), 4, a
#define T08BIT                           BANKMASK(T0CON), 6, a
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
#define T1INSYNC                         BANKMASK(T1CON), 2, a
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
#define T3CKPS019                        BANKMASK(LCDDATA19), 4, a
#define T3CKPS1                          BANKMASK(T3CON), 5, a
#define T3CKPS119                        BANKMASK(LCDDATA19), 5, a
#define T3INSYNC                         BANKMASK(T3CON), 2, a
#define T3RD16                           BANKMASK(T3CON), 7, a
#define T3SYNC                           BANKMASK(T3CON), 2, a
#define T4CKPS016                        BANKMASK(LCDDATA16), 0, a
#define T4CKPS116                        BANKMASK(LCDDATA16), 1, a
#define T4OUTPS016                       BANKMASK(LCDDATA16), 3, a
#define T4OUTPS116                       BANKMASK(LCDDATA16), 4, a
#define T4OUTPS216                       BANKMASK(LCDDATA16), 5, a
#define T4OUTPS316                       BANKMASK(LCDDATA16), 6, a
#define TGEN                             BANKMASK(CTMUCONH), 4, b
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
#define TMR3CS019                        BANKMASK(LCDDATA19), 6, a
#define TMR3CS119                        BANKMASK(LCDDATA19), 7, a
#define TMR3IE                           BANKMASK(PIE2), 1, a
#define TMR3IF                           BANKMASK(PIR2), 1, a
#define TMR3IP                           BANKMASK(IPR2), 1, a
#define TMR3ON                           BANKMASK(T3CON), 0, a
#define TO                               BANKMASK(RCON), 3, a
#define TOCKI                            BANKMASK(PORTA), 4, a
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
#define TRISC3                           BANKMASK(TRISC), 3, a
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
#define TRISE3                           BANKMASK(TRISE), 3, a
#define TRISE4                           BANKMASK(TRISE), 4, a
#define TRISE5                           BANKMASK(TRISE), 5, a
#define TRISE6                           BANKMASK(TRISE), 6, a
#define TRISE7                           BANKMASK(TRISE), 7, a
#define TRISF1                           BANKMASK(TRISF), 1, a
#define TRISF2                           BANKMASK(TRISF), 2, a
#define TRISF3                           BANKMASK(TRISF), 3, a
#define TRISF4                           BANKMASK(TRISF), 4, a
#define TRISF5                           BANKMASK(TRISF), 5, a
#define TRISF6                           BANKMASK(TRISF), 6, a
#define TRISF7                           BANKMASK(TRISF), 7, a
#define TRISG0                           BANKMASK(TRISG), 0, a
#define TRISG1                           BANKMASK(TRISG), 1, a
#define TRISG2                           BANKMASK(TRISG), 2, a
#define TRISG3                           BANKMASK(TRISG), 3, a
#define TRISG4                           BANKMASK(TRISG), 4, a
#define TRMT                             BANKMASK(TXSTA1), 1, a
#define TRMT1                            BANKMASK(TXSTA1), 1, a
#define TRMT2                            BANKMASK(TXSTA2), 1, a
#define TUN0                             BANKMASK(OSCTUNE), 0, a
#define TUN1                             BANKMASK(OSCTUNE), 1, a
#define TUN2                             BANKMASK(OSCTUNE), 2, a
#define TUN3                             BANKMASK(OSCTUNE), 3, a
#define TUN4                             BANKMASK(OSCTUNE), 4, a
#define TUN5                             BANKMASK(OSCTUNE), 5, a
#define TX1                              BANKMASK(PORTC), 6, a
#define TX1IE                            BANKMASK(PIE1), 4, a
#define TX1IF                            BANKMASK(PIR1), 4, a
#define TX1IP                            BANKMASK(IPR1), 4, a
#define TX2                              BANKMASK(PORTG), 1, a
#define TX2IE                            BANKMASK(PIE3), 4, a
#define TX2IF                            BANKMASK(PIR3), 4, a
#define TX2IP                            BANKMASK(IPR3), 4, a
#define TX8_9                            BANKMASK(TXSTA1), 6, a
#define TX8_92                           BANKMASK(TXSTA2), 6, a
#define TX9                              BANKMASK(TXSTA1), 6, a
#define TX91                             BANKMASK(TXSTA1), 6, a
#define TX92                             BANKMASK(TXSTA2), 6, a
#define TX9D                             BANKMASK(TXSTA1), 0, a
#define TX9D1                            BANKMASK(TXSTA1), 0, a
#define TX9D2                            BANKMASK(TXSTA2), 0, a
#define TXB0IE                           BANKMASK(PIE3), 2, a
#define TXB1IE                           BANKMASK(PIE3), 3, a
#define TXB2IE                           BANKMASK(PIE3), 4, a
#define TXBNIE                           BANKMASK(PIE3), 4, a
#define TXBNIF                           BANKMASK(PIR3), 4, a
#define TXBNIP                           BANKMASK(IPR3), 4, a
#define TXCKP                            BANKMASK(BAUDCON1), 4, a
#define TXCKP1                           BANKMASK(BAUDCON1), 4, a
#define TXD8                             BANKMASK(TXSTA1), 0, a
#define TXD82                            BANKMASK(TXSTA2), 0, a
#define TXEN                             BANKMASK(TXSTA1), 5, a
#define TXEN1                            BANKMASK(TXSTA1), 5, a
#define TXEN2                            BANKMASK(TXSTA2), 5, a
#define TXIE                             BANKMASK(PIE1), 4, a
#define TXIF                             BANKMASK(PIR1), 4, a
#define TXIP                             BANKMASK(IPR1), 4, a
#define U1OD                             BANKMASK(LATG), 6, a
#define U2OD                             BANKMASK(LATG), 7, a
#define UA                               BANKMASK(SSP1STAT), 1, a
#define UA1                              BANKMASK(SSP1STAT), 1, a
#define ULPWUIN                          BANKMASK(PORTA), 0, a
#define VCFG0                            BANKMASK(ADCON1), 4, a
#define VCFG01                           BANKMASK(ADCON1), 4, a
#define VCFG1                            BANKMASK(ADCON1), 5, a
#define VCFG11                           BANKMASK(ADCON1), 5, a
#define VLCAP1                           BANKMASK(PORTG), 2, a
#define VLCAP2                           BANKMASK(PORTG), 3, a
#define VREFM                            BANKMASK(PORTA), 2, a
#define VREFP                            BANKMASK(PORTA), 3, a
#define W4E                              BANKMASK(BAUDCON1), 1, a
#define WA                               BANKMASK(LCDPS), 4, a
#define WAIT0                            BANKMASK(PR2), 4, a
#define WAIT1                            BANKMASK(PR2), 5, a
#define WAITB0                           BANKMASK(RTCVALH), 6, b
#define WAITB1                           BANKMASK(RTCVALH), 7, b
#define WAITE0                           BANKMASK(RTCVALH), 0, b
#define WAITE1                           BANKMASK(RTCVALH), 1, b
#define WAITM0                           BANKMASK(RTCVALH), 2, b
#define WAITM1                           BANKMASK(RTCVALH), 3, b
#define WAITM2                           BANKMASK(RTCVALH), 4, b
#define WAITM3                           BANKMASK(RTCVALH), 5, b
#define WCOL                             BANKMASK(SSP1CON1), 7, a
#define WCOL1                            BANKMASK(SSP1CON1), 7, a
#define WERR                             BANKMASK(LCDCON), 5, a
#define WFT                              BANKMASK(LCDPS), 7, a
#define WM0                              BANKMASK(PR2), 0, a
#define WM1                              BANKMASK(PR2), 1, a
#define WPROG                            BANKMASK(EECON1), 5, a
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
#define nCM                              BANKMASK(RCON), 5, a
#define nDONE                            BANKMASK(ADCON0), 1, a
#define nPD                              BANKMASK(RCON), 2, a
#define nPOR                             BANKMASK(RCON), 1, a
#define nRBPU                            BANKMASK(INTCON2), 7, a
#define nRC8                             BANKMASK(RCSTA1), 6, a
#define nRI                              BANKMASK(RCON), 4, a
#define nT1SYNC                          BANKMASK(T1CON), 2, a
#define nT3SYNC                          BANKMASK(T3CON), 2, a
#define nTO                              BANKMASK(RCON), 3, a
#define nTX8                             BANKMASK(TXSTA1), 6, a
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
psect udata_bank8,class=BANK8,space=SPACE_DATA,noexec,lowdata
psect udata_bank9,class=BANK9,space=SPACE_DATA,noexec,lowdata
psect udata_bank10,class=BANK10,space=SPACE_DATA,noexec,lowdata
psect udata_bank11,class=BANK11,space=SPACE_DATA,noexec,lowdata
psect udata_bank12,class=BANK12,space=SPACE_DATA,noexec,lowdata
psect udata_bank13,class=BANK13,space=SPACE_DATA,noexec,lowdata
psect udata_bank14,class=BANK14,space=SPACE_DATA,noexec,lowdata
psect udata_bank15,class=BANK15,space=SPACE_DATA,noexec,lowdata
psect udata,class=RAM,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,reloc=2
psect data,class=CONST,space=SPACE_CODE,reloc=2,noexec

#endif // _XC_INC_

#endif // _PIC18F66J93_INC_
