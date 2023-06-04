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

#ifndef _PIC18F4431_INC_
#define _PIC18F4431_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F4431
 */

/*
 * Device Registers
 */

// Register: DFLTCON
#define DFLTCON DFLTCON
DFLTCON                                  equ 0F60h
// bitfield definitions
DFLTCON_FLTCK_POSN                       equ 0000h
DFLTCON_FLTCK_POSITION                   equ 0000h
DFLTCON_FLTCK_SIZE                       equ 0003h
DFLTCON_FLTCK_LENGTH                     equ 0003h
DFLTCON_FLTCK_MASK                       equ 0007h
DFLTCON_FLT1EN_POSN                      equ 0003h
DFLTCON_FLT1EN_POSITION                  equ 0003h
DFLTCON_FLT1EN_SIZE                      equ 0001h
DFLTCON_FLT1EN_LENGTH                    equ 0001h
DFLTCON_FLT1EN_MASK                      equ 0008h
DFLTCON_FLT2EN_POSN                      equ 0004h
DFLTCON_FLT2EN_POSITION                  equ 0004h
DFLTCON_FLT2EN_SIZE                      equ 0001h
DFLTCON_FLT2EN_LENGTH                    equ 0001h
DFLTCON_FLT2EN_MASK                      equ 0010h
DFLTCON_FLT3EN_POSN                      equ 0005h
DFLTCON_FLT3EN_POSITION                  equ 0005h
DFLTCON_FLT3EN_SIZE                      equ 0001h
DFLTCON_FLT3EN_LENGTH                    equ 0001h
DFLTCON_FLT3EN_MASK                      equ 0020h
DFLTCON_FLT4EN_POSN                      equ 0006h
DFLTCON_FLT4EN_POSITION                  equ 0006h
DFLTCON_FLT4EN_SIZE                      equ 0001h
DFLTCON_FLT4EN_LENGTH                    equ 0001h
DFLTCON_FLT4EN_MASK                      equ 0040h
DFLTCON_FLTCK0_POSN                      equ 0000h
DFLTCON_FLTCK0_POSITION                  equ 0000h
DFLTCON_FLTCK0_SIZE                      equ 0001h
DFLTCON_FLTCK0_LENGTH                    equ 0001h
DFLTCON_FLTCK0_MASK                      equ 0001h
DFLTCON_FLTCK1_POSN                      equ 0001h
DFLTCON_FLTCK1_POSITION                  equ 0001h
DFLTCON_FLTCK1_SIZE                      equ 0001h
DFLTCON_FLTCK1_LENGTH                    equ 0001h
DFLTCON_FLTCK1_MASK                      equ 0002h
DFLTCON_FLTCK2_POSN                      equ 0002h
DFLTCON_FLTCK2_POSITION                  equ 0002h
DFLTCON_FLTCK2_SIZE                      equ 0001h
DFLTCON_FLTCK2_LENGTH                    equ 0001h
DFLTCON_FLTCK2_MASK                      equ 0004h

// Register: CAP3CON
#define CAP3CON CAP3CON
CAP3CON                                  equ 0F61h
// bitfield definitions
CAP3CON_CAP3M_POSN                       equ 0000h
CAP3CON_CAP3M_POSITION                   equ 0000h
CAP3CON_CAP3M_SIZE                       equ 0004h
CAP3CON_CAP3M_LENGTH                     equ 0004h
CAP3CON_CAP3M_MASK                       equ 000Fh
CAP3CON_CAP3TMR_POSN                     equ 0005h
CAP3CON_CAP3TMR_POSITION                 equ 0005h
CAP3CON_CAP3TMR_SIZE                     equ 0001h
CAP3CON_CAP3TMR_LENGTH                   equ 0001h
CAP3CON_CAP3TMR_MASK                     equ 0020h
CAP3CON_CAP3REN_POSN                     equ 0006h
CAP3CON_CAP3REN_POSITION                 equ 0006h
CAP3CON_CAP3REN_SIZE                     equ 0001h
CAP3CON_CAP3REN_LENGTH                   equ 0001h
CAP3CON_CAP3REN_MASK                     equ 0040h
CAP3CON_CAP3M0_POSN                      equ 0000h
CAP3CON_CAP3M0_POSITION                  equ 0000h
CAP3CON_CAP3M0_SIZE                      equ 0001h
CAP3CON_CAP3M0_LENGTH                    equ 0001h
CAP3CON_CAP3M0_MASK                      equ 0001h
CAP3CON_CAP3M1_POSN                      equ 0001h
CAP3CON_CAP3M1_POSITION                  equ 0001h
CAP3CON_CAP3M1_SIZE                      equ 0001h
CAP3CON_CAP3M1_LENGTH                    equ 0001h
CAP3CON_CAP3M1_MASK                      equ 0002h
CAP3CON_CAP3M2_POSN                      equ 0002h
CAP3CON_CAP3M2_POSITION                  equ 0002h
CAP3CON_CAP3M2_SIZE                      equ 0001h
CAP3CON_CAP3M2_LENGTH                    equ 0001h
CAP3CON_CAP3M2_MASK                      equ 0004h
CAP3CON_CAP3M3_POSN                      equ 0003h
CAP3CON_CAP3M3_POSITION                  equ 0003h
CAP3CON_CAP3M3_SIZE                      equ 0001h
CAP3CON_CAP3M3_LENGTH                    equ 0001h
CAP3CON_CAP3M3_MASK                      equ 0008h

// Register: CAP2CON
#define CAP2CON CAP2CON
CAP2CON                                  equ 0F62h
// bitfield definitions
CAP2CON_CAP2M_POSN                       equ 0000h
CAP2CON_CAP2M_POSITION                   equ 0000h
CAP2CON_CAP2M_SIZE                       equ 0004h
CAP2CON_CAP2M_LENGTH                     equ 0004h
CAP2CON_CAP2M_MASK                       equ 000Fh
CAP2CON_CAP2TMR_POSN                     equ 0005h
CAP2CON_CAP2TMR_POSITION                 equ 0005h
CAP2CON_CAP2TMR_SIZE                     equ 0001h
CAP2CON_CAP2TMR_LENGTH                   equ 0001h
CAP2CON_CAP2TMR_MASK                     equ 0020h
CAP2CON_CAP2REN_POSN                     equ 0006h
CAP2CON_CAP2REN_POSITION                 equ 0006h
CAP2CON_CAP2REN_SIZE                     equ 0001h
CAP2CON_CAP2REN_LENGTH                   equ 0001h
CAP2CON_CAP2REN_MASK                     equ 0040h
CAP2CON_CAP2M0_POSN                      equ 0000h
CAP2CON_CAP2M0_POSITION                  equ 0000h
CAP2CON_CAP2M0_SIZE                      equ 0001h
CAP2CON_CAP2M0_LENGTH                    equ 0001h
CAP2CON_CAP2M0_MASK                      equ 0001h
CAP2CON_CAP2M1_POSN                      equ 0001h
CAP2CON_CAP2M1_POSITION                  equ 0001h
CAP2CON_CAP2M1_SIZE                      equ 0001h
CAP2CON_CAP2M1_LENGTH                    equ 0001h
CAP2CON_CAP2M1_MASK                      equ 0002h
CAP2CON_CAP2M2_POSN                      equ 0002h
CAP2CON_CAP2M2_POSITION                  equ 0002h
CAP2CON_CAP2M2_SIZE                      equ 0001h
CAP2CON_CAP2M2_LENGTH                    equ 0001h
CAP2CON_CAP2M2_MASK                      equ 0004h
CAP2CON_CAP2M3_POSN                      equ 0003h
CAP2CON_CAP2M3_POSITION                  equ 0003h
CAP2CON_CAP2M3_SIZE                      equ 0001h
CAP2CON_CAP2M3_LENGTH                    equ 0001h
CAP2CON_CAP2M3_MASK                      equ 0008h

// Register: CAP1CON
#define CAP1CON CAP1CON
CAP1CON                                  equ 0F63h
// bitfield definitions
CAP1CON_CAP1M_POSN                       equ 0000h
CAP1CON_CAP1M_POSITION                   equ 0000h
CAP1CON_CAP1M_SIZE                       equ 0004h
CAP1CON_CAP1M_LENGTH                     equ 0004h
CAP1CON_CAP1M_MASK                       equ 000Fh
CAP1CON_CAP1TMR_POSN                     equ 0005h
CAP1CON_CAP1TMR_POSITION                 equ 0005h
CAP1CON_CAP1TMR_SIZE                     equ 0001h
CAP1CON_CAP1TMR_LENGTH                   equ 0001h
CAP1CON_CAP1TMR_MASK                     equ 0020h
CAP1CON_CAP1REN_POSN                     equ 0006h
CAP1CON_CAP1REN_POSITION                 equ 0006h
CAP1CON_CAP1REN_SIZE                     equ 0001h
CAP1CON_CAP1REN_LENGTH                   equ 0001h
CAP1CON_CAP1REN_MASK                     equ 0040h
CAP1CON_CAP1M0_POSN                      equ 0000h
CAP1CON_CAP1M0_POSITION                  equ 0000h
CAP1CON_CAP1M0_SIZE                      equ 0001h
CAP1CON_CAP1M0_LENGTH                    equ 0001h
CAP1CON_CAP1M0_MASK                      equ 0001h
CAP1CON_CAP1M1_POSN                      equ 0001h
CAP1CON_CAP1M1_POSITION                  equ 0001h
CAP1CON_CAP1M1_SIZE                      equ 0001h
CAP1CON_CAP1M1_LENGTH                    equ 0001h
CAP1CON_CAP1M1_MASK                      equ 0002h
CAP1CON_CAP1M2_POSN                      equ 0002h
CAP1CON_CAP1M2_POSITION                  equ 0002h
CAP1CON_CAP1M2_SIZE                      equ 0001h
CAP1CON_CAP1M2_LENGTH                    equ 0001h
CAP1CON_CAP1M2_MASK                      equ 0004h
CAP1CON_CAP1M3_POSN                      equ 0003h
CAP1CON_CAP1M3_POSITION                  equ 0003h
CAP1CON_CAP1M3_SIZE                      equ 0001h
CAP1CON_CAP1M3_LENGTH                    equ 0001h
CAP1CON_CAP1M3_MASK                      equ 0008h

// Register: CAP3BUFL
#define CAP3BUFL CAP3BUFL
CAP3BUFL                                 equ 0F64h

// Register: CAP3BUFH
#define CAP3BUFH CAP3BUFH
CAP3BUFH                                 equ 0F65h

// Register: CAP2BUFL
#define CAP2BUFL CAP2BUFL
CAP2BUFL                                 equ 0F66h

// Register: CAP2BUFH
#define CAP2BUFH CAP2BUFH
CAP2BUFH                                 equ 0F67h

// Register: CAP1BUFL
#define CAP1BUFL CAP1BUFL
CAP1BUFL                                 equ 0F68h

// Register: CAP1BUFH
#define CAP1BUFH CAP1BUFH
CAP1BUFH                                 equ 0F69h

// Register: OVDCONS
#define OVDCONS OVDCONS
OVDCONS                                  equ 0F6Ah
// bitfield definitions
OVDCONS_POUT_POSN                        equ 0000h
OVDCONS_POUT_POSITION                    equ 0000h
OVDCONS_POUT_SIZE                        equ 0008h
OVDCONS_POUT_LENGTH                      equ 0008h
OVDCONS_POUT_MASK                        equ 00FFh
OVDCONS_POUT0_POSN                       equ 0000h
OVDCONS_POUT0_POSITION                   equ 0000h
OVDCONS_POUT0_SIZE                       equ 0001h
OVDCONS_POUT0_LENGTH                     equ 0001h
OVDCONS_POUT0_MASK                       equ 0001h
OVDCONS_POUT1_POSN                       equ 0001h
OVDCONS_POUT1_POSITION                   equ 0001h
OVDCONS_POUT1_SIZE                       equ 0001h
OVDCONS_POUT1_LENGTH                     equ 0001h
OVDCONS_POUT1_MASK                       equ 0002h
OVDCONS_POUT2_POSN                       equ 0002h
OVDCONS_POUT2_POSITION                   equ 0002h
OVDCONS_POUT2_SIZE                       equ 0001h
OVDCONS_POUT2_LENGTH                     equ 0001h
OVDCONS_POUT2_MASK                       equ 0004h
OVDCONS_POUT3_POSN                       equ 0003h
OVDCONS_POUT3_POSITION                   equ 0003h
OVDCONS_POUT3_SIZE                       equ 0001h
OVDCONS_POUT3_LENGTH                     equ 0001h
OVDCONS_POUT3_MASK                       equ 0008h
OVDCONS_POUT4_POSN                       equ 0004h
OVDCONS_POUT4_POSITION                   equ 0004h
OVDCONS_POUT4_SIZE                       equ 0001h
OVDCONS_POUT4_LENGTH                     equ 0001h
OVDCONS_POUT4_MASK                       equ 0010h
OVDCONS_POUT5_POSN                       equ 0005h
OVDCONS_POUT5_POSITION                   equ 0005h
OVDCONS_POUT5_SIZE                       equ 0001h
OVDCONS_POUT5_LENGTH                     equ 0001h
OVDCONS_POUT5_MASK                       equ 0020h
OVDCONS_POUT6_POSN                       equ 0006h
OVDCONS_POUT6_POSITION                   equ 0006h
OVDCONS_POUT6_SIZE                       equ 0001h
OVDCONS_POUT6_LENGTH                     equ 0001h
OVDCONS_POUT6_MASK                       equ 0040h
OVDCONS_POUT7_POSN                       equ 0007h
OVDCONS_POUT7_POSITION                   equ 0007h
OVDCONS_POUT7_SIZE                       equ 0001h
OVDCONS_POUT7_LENGTH                     equ 0001h
OVDCONS_POUT7_MASK                       equ 0080h

// Register: OVDCOND
#define OVDCOND OVDCOND
OVDCOND                                  equ 0F6Bh
// bitfield definitions
OVDCOND_POVD_POSN                        equ 0000h
OVDCOND_POVD_POSITION                    equ 0000h
OVDCOND_POVD_SIZE                        equ 0008h
OVDCOND_POVD_LENGTH                      equ 0008h
OVDCOND_POVD_MASK                        equ 00FFh
OVDCOND_POVD0_POSN                       equ 0000h
OVDCOND_POVD0_POSITION                   equ 0000h
OVDCOND_POVD0_SIZE                       equ 0001h
OVDCOND_POVD0_LENGTH                     equ 0001h
OVDCOND_POVD0_MASK                       equ 0001h
OVDCOND_POVD1_POSN                       equ 0001h
OVDCOND_POVD1_POSITION                   equ 0001h
OVDCOND_POVD1_SIZE                       equ 0001h
OVDCOND_POVD1_LENGTH                     equ 0001h
OVDCOND_POVD1_MASK                       equ 0002h
OVDCOND_POVD2_POSN                       equ 0002h
OVDCOND_POVD2_POSITION                   equ 0002h
OVDCOND_POVD2_SIZE                       equ 0001h
OVDCOND_POVD2_LENGTH                     equ 0001h
OVDCOND_POVD2_MASK                       equ 0004h
OVDCOND_POVD3_POSN                       equ 0003h
OVDCOND_POVD3_POSITION                   equ 0003h
OVDCOND_POVD3_SIZE                       equ 0001h
OVDCOND_POVD3_LENGTH                     equ 0001h
OVDCOND_POVD3_MASK                       equ 0008h
OVDCOND_POVD4_POSN                       equ 0004h
OVDCOND_POVD4_POSITION                   equ 0004h
OVDCOND_POVD4_SIZE                       equ 0001h
OVDCOND_POVD4_LENGTH                     equ 0001h
OVDCOND_POVD4_MASK                       equ 0010h
OVDCOND_POVD5_POSN                       equ 0005h
OVDCOND_POVD5_POSITION                   equ 0005h
OVDCOND_POVD5_SIZE                       equ 0001h
OVDCOND_POVD5_LENGTH                     equ 0001h
OVDCOND_POVD5_MASK                       equ 0020h
OVDCOND_POVD6_POSN                       equ 0006h
OVDCOND_POVD6_POSITION                   equ 0006h
OVDCOND_POVD6_SIZE                       equ 0001h
OVDCOND_POVD6_LENGTH                     equ 0001h
OVDCOND_POVD6_MASK                       equ 0040h
OVDCOND_POVD7_POSN                       equ 0007h
OVDCOND_POVD7_POSITION                   equ 0007h
OVDCOND_POVD7_SIZE                       equ 0001h
OVDCOND_POVD7_LENGTH                     equ 0001h
OVDCOND_POVD7_MASK                       equ 0080h

// Register: FLTCONFIG
#define FLTCONFIG FLTCONFIG
FLTCONFIG                                equ 0F6Ch
// bitfield definitions
FLTCONFIG_FLTAEN_POSN                    equ 0000h
FLTCONFIG_FLTAEN_POSITION                equ 0000h
FLTCONFIG_FLTAEN_SIZE                    equ 0001h
FLTCONFIG_FLTAEN_LENGTH                  equ 0001h
FLTCONFIG_FLTAEN_MASK                    equ 0001h
FLTCONFIG_FLTAMOD_POSN                   equ 0001h
FLTCONFIG_FLTAMOD_POSITION               equ 0001h
FLTCONFIG_FLTAMOD_SIZE                   equ 0001h
FLTCONFIG_FLTAMOD_LENGTH                 equ 0001h
FLTCONFIG_FLTAMOD_MASK                   equ 0002h
FLTCONFIG_FLTAS_POSN                     equ 0002h
FLTCONFIG_FLTAS_POSITION                 equ 0002h
FLTCONFIG_FLTAS_SIZE                     equ 0001h
FLTCONFIG_FLTAS_LENGTH                   equ 0001h
FLTCONFIG_FLTAS_MASK                     equ 0004h
FLTCONFIG_FLTCON_POSN                    equ 0003h
FLTCONFIG_FLTCON_POSITION                equ 0003h
FLTCONFIG_FLTCON_SIZE                    equ 0001h
FLTCONFIG_FLTCON_LENGTH                  equ 0001h
FLTCONFIG_FLTCON_MASK                    equ 0008h
FLTCONFIG_FLTBEN_POSN                    equ 0004h
FLTCONFIG_FLTBEN_POSITION                equ 0004h
FLTCONFIG_FLTBEN_SIZE                    equ 0001h
FLTCONFIG_FLTBEN_LENGTH                  equ 0001h
FLTCONFIG_FLTBEN_MASK                    equ 0010h
FLTCONFIG_FLTBMOD_POSN                   equ 0005h
FLTCONFIG_FLTBMOD_POSITION               equ 0005h
FLTCONFIG_FLTBMOD_SIZE                   equ 0001h
FLTCONFIG_FLTBMOD_LENGTH                 equ 0001h
FLTCONFIG_FLTBMOD_MASK                   equ 0020h
FLTCONFIG_FLTBS_POSN                     equ 0006h
FLTCONFIG_FLTBS_POSITION                 equ 0006h
FLTCONFIG_FLTBS_SIZE                     equ 0001h
FLTCONFIG_FLTBS_LENGTH                   equ 0001h
FLTCONFIG_FLTBS_MASK                     equ 0040h
FLTCONFIG_BRFEN_POSN                     equ 0007h
FLTCONFIG_BRFEN_POSITION                 equ 0007h
FLTCONFIG_BRFEN_SIZE                     equ 0001h
FLTCONFIG_BRFEN_LENGTH                   equ 0001h
FLTCONFIG_BRFEN_MASK                     equ 0080h

// Register: DTCON
#define DTCON DTCON
DTCON                                    equ 0F6Dh
// bitfield definitions
DTCON_DTA_POSN                           equ 0000h
DTCON_DTA_POSITION                       equ 0000h
DTCON_DTA_SIZE                           equ 0006h
DTCON_DTA_LENGTH                         equ 0006h
DTCON_DTA_MASK                           equ 003Fh
DTCON_DTAPS_POSN                         equ 0006h
DTCON_DTAPS_POSITION                     equ 0006h
DTCON_DTAPS_SIZE                         equ 0002h
DTCON_DTAPS_LENGTH                       equ 0002h
DTCON_DTAPS_MASK                         equ 00C0h
DTCON_DT0_POSN                           equ 0000h
DTCON_DT0_POSITION                       equ 0000h
DTCON_DT0_SIZE                           equ 0001h
DTCON_DT0_LENGTH                         equ 0001h
DTCON_DT0_MASK                           equ 0001h
DTCON_DT1_POSN                           equ 0001h
DTCON_DT1_POSITION                       equ 0001h
DTCON_DT1_SIZE                           equ 0001h
DTCON_DT1_LENGTH                         equ 0001h
DTCON_DT1_MASK                           equ 0002h
DTCON_DT2_POSN                           equ 0002h
DTCON_DT2_POSITION                       equ 0002h
DTCON_DT2_SIZE                           equ 0001h
DTCON_DT2_LENGTH                         equ 0001h
DTCON_DT2_MASK                           equ 0004h
DTCON_DT3_POSN                           equ 0003h
DTCON_DT3_POSITION                       equ 0003h
DTCON_DT3_SIZE                           equ 0001h
DTCON_DT3_LENGTH                         equ 0001h
DTCON_DT3_MASK                           equ 0008h
DTCON_DT4_POSN                           equ 0004h
DTCON_DT4_POSITION                       equ 0004h
DTCON_DT4_SIZE                           equ 0001h
DTCON_DT4_LENGTH                         equ 0001h
DTCON_DT4_MASK                           equ 0010h
DTCON_DT5_POSN                           equ 0005h
DTCON_DT5_POSITION                       equ 0005h
DTCON_DT5_SIZE                           equ 0001h
DTCON_DT5_LENGTH                         equ 0001h
DTCON_DT5_MASK                           equ 0020h
DTCON_DTPS0_POSN                         equ 0006h
DTCON_DTPS0_POSITION                     equ 0006h
DTCON_DTPS0_SIZE                         equ 0001h
DTCON_DTPS0_LENGTH                       equ 0001h
DTCON_DTPS0_MASK                         equ 0040h
DTCON_DTPS1_POSN                         equ 0007h
DTCON_DTPS1_POSITION                     equ 0007h
DTCON_DTPS1_SIZE                         equ 0001h
DTCON_DTPS1_LENGTH                       equ 0001h
DTCON_DTPS1_MASK                         equ 0080h
DTCON_DTA0_POSN                          equ 0000h
DTCON_DTA0_POSITION                      equ 0000h
DTCON_DTA0_SIZE                          equ 0001h
DTCON_DTA0_LENGTH                        equ 0001h
DTCON_DTA0_MASK                          equ 0001h
DTCON_DTA1_POSN                          equ 0001h
DTCON_DTA1_POSITION                      equ 0001h
DTCON_DTA1_SIZE                          equ 0001h
DTCON_DTA1_LENGTH                        equ 0001h
DTCON_DTA1_MASK                          equ 0002h
DTCON_DTA2_POSN                          equ 0002h
DTCON_DTA2_POSITION                      equ 0002h
DTCON_DTA2_SIZE                          equ 0001h
DTCON_DTA2_LENGTH                        equ 0001h
DTCON_DTA2_MASK                          equ 0004h
DTCON_DTA3_POSN                          equ 0003h
DTCON_DTA3_POSITION                      equ 0003h
DTCON_DTA3_SIZE                          equ 0001h
DTCON_DTA3_LENGTH                        equ 0001h
DTCON_DTA3_MASK                          equ 0008h
DTCON_DTA4_POSN                          equ 0004h
DTCON_DTA4_POSITION                      equ 0004h
DTCON_DTA4_SIZE                          equ 0001h
DTCON_DTA4_LENGTH                        equ 0001h
DTCON_DTA4_MASK                          equ 0010h
DTCON_DTA5_POSN                          equ 0005h
DTCON_DTA5_POSITION                      equ 0005h
DTCON_DTA5_SIZE                          equ 0001h
DTCON_DTA5_LENGTH                        equ 0001h
DTCON_DTA5_MASK                          equ 0020h
DTCON_DTAPS0_POSN                        equ 0006h
DTCON_DTAPS0_POSITION                    equ 0006h
DTCON_DTAPS0_SIZE                        equ 0001h
DTCON_DTAPS0_LENGTH                      equ 0001h
DTCON_DTAPS0_MASK                        equ 0040h
DTCON_DTAPS1_POSN                        equ 0007h
DTCON_DTAPS1_POSITION                    equ 0007h
DTCON_DTAPS1_SIZE                        equ 0001h
DTCON_DTAPS1_LENGTH                      equ 0001h
DTCON_DTAPS1_MASK                        equ 0080h

// Register: PWMCON1
#define PWMCON1 PWMCON1
PWMCON1                                  equ 0F6Eh
// bitfield definitions
PWMCON1_OSYNC_POSN                       equ 0000h
PWMCON1_OSYNC_POSITION                   equ 0000h
PWMCON1_OSYNC_SIZE                       equ 0001h
PWMCON1_OSYNC_LENGTH                     equ 0001h
PWMCON1_OSYNC_MASK                       equ 0001h
PWMCON1_UDIS_POSN                        equ 0001h
PWMCON1_UDIS_POSITION                    equ 0001h
PWMCON1_UDIS_SIZE                        equ 0001h
PWMCON1_UDIS_LENGTH                      equ 0001h
PWMCON1_UDIS_MASK                        equ 0002h
PWMCON1_SEVTDIR_POSN                     equ 0003h
PWMCON1_SEVTDIR_POSITION                 equ 0003h
PWMCON1_SEVTDIR_SIZE                     equ 0001h
PWMCON1_SEVTDIR_LENGTH                   equ 0001h
PWMCON1_SEVTDIR_MASK                     equ 0008h
PWMCON1_SEVOPS_POSN                      equ 0004h
PWMCON1_SEVOPS_POSITION                  equ 0004h
PWMCON1_SEVOPS_SIZE                      equ 0004h
PWMCON1_SEVOPS_LENGTH                    equ 0004h
PWMCON1_SEVOPS_MASK                      equ 00F0h
PWMCON1_SEVOPS0_POSN                     equ 0004h
PWMCON1_SEVOPS0_POSITION                 equ 0004h
PWMCON1_SEVOPS0_SIZE                     equ 0001h
PWMCON1_SEVOPS0_LENGTH                   equ 0001h
PWMCON1_SEVOPS0_MASK                     equ 0010h
PWMCON1_SEVOPS1_POSN                     equ 0005h
PWMCON1_SEVOPS1_POSITION                 equ 0005h
PWMCON1_SEVOPS1_SIZE                     equ 0001h
PWMCON1_SEVOPS1_LENGTH                   equ 0001h
PWMCON1_SEVOPS1_MASK                     equ 0020h
PWMCON1_SEVOPS2_POSN                     equ 0006h
PWMCON1_SEVOPS2_POSITION                 equ 0006h
PWMCON1_SEVOPS2_SIZE                     equ 0001h
PWMCON1_SEVOPS2_LENGTH                   equ 0001h
PWMCON1_SEVOPS2_MASK                     equ 0040h
PWMCON1_SEVOPS3_POSN                     equ 0007h
PWMCON1_SEVOPS3_POSITION                 equ 0007h
PWMCON1_SEVOPS3_SIZE                     equ 0001h
PWMCON1_SEVOPS3_LENGTH                   equ 0001h
PWMCON1_SEVOPS3_MASK                     equ 0080h

// Register: PWMCON0
#define PWMCON0 PWMCON0
PWMCON0                                  equ 0F6Fh
// bitfield definitions
PWMCON0_PMOD_POSN                        equ 0000h
PWMCON0_PMOD_POSITION                    equ 0000h
PWMCON0_PMOD_SIZE                        equ 0004h
PWMCON0_PMOD_LENGTH                      equ 0004h
PWMCON0_PMOD_MASK                        equ 000Fh
PWMCON0_PWMEN_POSN                       equ 0004h
PWMCON0_PWMEN_POSITION                   equ 0004h
PWMCON0_PWMEN_SIZE                       equ 0003h
PWMCON0_PWMEN_LENGTH                     equ 0003h
PWMCON0_PWMEN_MASK                       equ 0070h
PWMCON0_PMOD0_POSN                       equ 0000h
PWMCON0_PMOD0_POSITION                   equ 0000h
PWMCON0_PMOD0_SIZE                       equ 0001h
PWMCON0_PMOD0_LENGTH                     equ 0001h
PWMCON0_PMOD0_MASK                       equ 0001h
PWMCON0_PMOD1_POSN                       equ 0001h
PWMCON0_PMOD1_POSITION                   equ 0001h
PWMCON0_PMOD1_SIZE                       equ 0001h
PWMCON0_PMOD1_LENGTH                     equ 0001h
PWMCON0_PMOD1_MASK                       equ 0002h
PWMCON0_PMOD2_POSN                       equ 0002h
PWMCON0_PMOD2_POSITION                   equ 0002h
PWMCON0_PMOD2_SIZE                       equ 0001h
PWMCON0_PMOD2_LENGTH                     equ 0001h
PWMCON0_PMOD2_MASK                       equ 0004h
PWMCON0_PMOD3_POSN                       equ 0003h
PWMCON0_PMOD3_POSITION                   equ 0003h
PWMCON0_PMOD3_SIZE                       equ 0001h
PWMCON0_PMOD3_LENGTH                     equ 0001h
PWMCON0_PMOD3_MASK                       equ 0008h
PWMCON0_PWMEN0_POSN                      equ 0004h
PWMCON0_PWMEN0_POSITION                  equ 0004h
PWMCON0_PWMEN0_SIZE                      equ 0001h
PWMCON0_PWMEN0_LENGTH                    equ 0001h
PWMCON0_PWMEN0_MASK                      equ 0010h
PWMCON0_PWMEN1_POSN                      equ 0005h
PWMCON0_PWMEN1_POSITION                  equ 0005h
PWMCON0_PWMEN1_SIZE                      equ 0001h
PWMCON0_PWMEN1_LENGTH                    equ 0001h
PWMCON0_PWMEN1_MASK                      equ 0020h
PWMCON0_PWMEN2_POSN                      equ 0006h
PWMCON0_PWMEN2_POSITION                  equ 0006h
PWMCON0_PWMEN2_SIZE                      equ 0001h
PWMCON0_PWMEN2_LENGTH                    equ 0001h
PWMCON0_PWMEN2_MASK                      equ 0040h

// Register: SEVTCMPH
#define SEVTCMPH SEVTCMPH
SEVTCMPH                                 equ 0F70h

// Register: SEVTCMPL
#define SEVTCMPL SEVTCMPL
SEVTCMPL                                 equ 0F71h

// Register: PDC3H
#define PDC3H PDC3H
PDC3H                                    equ 0F72h

// Register: PDC3L
#define PDC3L PDC3L
PDC3L                                    equ 0F73h

// Register: PDC2H
#define PDC2H PDC2H
PDC2H                                    equ 0F74h

// Register: PDC2L
#define PDC2L PDC2L
PDC2L                                    equ 0F75h

// Register: PDC1H
#define PDC1H PDC1H
PDC1H                                    equ 0F76h

// Register: PDC1L
#define PDC1L PDC1L
PDC1L                                    equ 0F77h

// Register: PDC0H
#define PDC0H PDC0H
PDC0H                                    equ 0F78h

// Register: PDC0L
#define PDC0L PDC0L
PDC0L                                    equ 0F79h

// Register: PTPERH
#define PTPERH PTPERH
PTPERH                                   equ 0F7Ah

// Register: PTPERL
#define PTPERL PTPERL
PTPERL                                   equ 0F7Bh

// Register: PTMRH
#define PTMRH PTMRH
PTMRH                                    equ 0F7Ch

// Register: PTMRL
#define PTMRL PTMRL
PTMRL                                    equ 0F7Dh

// Register: PTCON1
#define PTCON1 PTCON1
PTCON1                                   equ 0F7Eh
// bitfield definitions
PTCON1_PTDIR_POSN                        equ 0006h
PTCON1_PTDIR_POSITION                    equ 0006h
PTCON1_PTDIR_SIZE                        equ 0001h
PTCON1_PTDIR_LENGTH                      equ 0001h
PTCON1_PTDIR_MASK                        equ 0040h
PTCON1_PTEN_POSN                         equ 0007h
PTCON1_PTEN_POSITION                     equ 0007h
PTCON1_PTEN_SIZE                         equ 0001h
PTCON1_PTEN_LENGTH                       equ 0001h
PTCON1_PTEN_MASK                         equ 0080h

// Register: PTCON0
#define PTCON0 PTCON0
PTCON0                                   equ 0F7Fh
// bitfield definitions
PTCON0_PTMOD_POSN                        equ 0000h
PTCON0_PTMOD_POSITION                    equ 0000h
PTCON0_PTMOD_SIZE                        equ 0002h
PTCON0_PTMOD_LENGTH                      equ 0002h
PTCON0_PTMOD_MASK                        equ 0003h
PTCON0_PTCKPS_POSN                       equ 0002h
PTCON0_PTCKPS_POSITION                   equ 0002h
PTCON0_PTCKPS_SIZE                       equ 0002h
PTCON0_PTCKPS_LENGTH                     equ 0002h
PTCON0_PTCKPS_MASK                       equ 000Ch
PTCON0_PTOPS_POSN                        equ 0004h
PTCON0_PTOPS_POSITION                    equ 0004h
PTCON0_PTOPS_SIZE                        equ 0004h
PTCON0_PTOPS_LENGTH                      equ 0004h
PTCON0_PTOPS_MASK                        equ 00F0h
PTCON0_PTMOD0_POSN                       equ 0000h
PTCON0_PTMOD0_POSITION                   equ 0000h
PTCON0_PTMOD0_SIZE                       equ 0001h
PTCON0_PTMOD0_LENGTH                     equ 0001h
PTCON0_PTMOD0_MASK                       equ 0001h
PTCON0_PTMOD1_POSN                       equ 0001h
PTCON0_PTMOD1_POSITION                   equ 0001h
PTCON0_PTMOD1_SIZE                       equ 0001h
PTCON0_PTMOD1_LENGTH                     equ 0001h
PTCON0_PTMOD1_MASK                       equ 0002h
PTCON0_PTCKPS0_POSN                      equ 0002h
PTCON0_PTCKPS0_POSITION                  equ 0002h
PTCON0_PTCKPS0_SIZE                      equ 0001h
PTCON0_PTCKPS0_LENGTH                    equ 0001h
PTCON0_PTCKPS0_MASK                      equ 0004h
PTCON0_PTCKPS1_POSN                      equ 0003h
PTCON0_PTCKPS1_POSITION                  equ 0003h
PTCON0_PTCKPS1_SIZE                      equ 0001h
PTCON0_PTCKPS1_LENGTH                    equ 0001h
PTCON0_PTCKPS1_MASK                      equ 0008h
PTCON0_PTOPS0_POSN                       equ 0004h
PTCON0_PTOPS0_POSITION                   equ 0004h
PTCON0_PTOPS0_SIZE                       equ 0001h
PTCON0_PTOPS0_LENGTH                     equ 0001h
PTCON0_PTOPS0_MASK                       equ 0010h
PTCON0_PTOPS1_POSN                       equ 0005h
PTCON0_PTOPS1_POSITION                   equ 0005h
PTCON0_PTOPS1_SIZE                       equ 0001h
PTCON0_PTOPS1_LENGTH                     equ 0001h
PTCON0_PTOPS1_MASK                       equ 0020h
PTCON0_PTOPS2_POSN                       equ 0006h
PTCON0_PTOPS2_POSITION                   equ 0006h
PTCON0_PTOPS2_SIZE                       equ 0001h
PTCON0_PTOPS2_LENGTH                     equ 0001h
PTCON0_PTOPS2_MASK                       equ 0040h
PTCON0_PTOPS3_POSN                       equ 0007h
PTCON0_PTOPS3_POSITION                   equ 0007h
PTCON0_PTOPS3_SIZE                       equ 0001h
PTCON0_PTOPS3_LENGTH                     equ 0001h
PTCON0_PTOPS3_MASK                       equ 0080h

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
PORTA_AN4_POSN                           equ 0004h
PORTA_AN4_POSITION                       equ 0004h
PORTA_AN4_SIZE                           equ 0001h
PORTA_AN4_LENGTH                         equ 0001h
PORTA_AN4_MASK                           equ 0010h
PORTA_AN5_POSN                           equ 0005h
PORTA_AN5_POSITION                       equ 0005h
PORTA_AN5_SIZE                           equ 0001h
PORTA_AN5_LENGTH                         equ 0001h
PORTA_AN5_MASK                           equ 0020h
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
PORTC_CCP1_POSN                          equ 0002h
PORTC_CCP1_POSITION                      equ 0002h
PORTC_CCP1_SIZE                          equ 0001h
PORTC_CCP1_LENGTH                        equ 0001h
PORTC_CCP1_MASK                          equ 0004h
PORTC_INT0_POSN                          equ 0003h
PORTC_INT0_POSITION                      equ 0003h
PORTC_INT0_SIZE                          equ 0001h
PORTC_INT0_LENGTH                        equ 0001h
PORTC_INT0_MASK                          equ 0008h
PORTC_INT1_POSN                          equ 0004h
PORTC_INT1_POSITION                      equ 0004h
PORTC_INT1_SIZE                          equ 0001h
PORTC_INT1_LENGTH                        equ 0001h
PORTC_INT1_MASK                          equ 0010h
PORTC_INT2_POSN                          equ 0005h
PORTC_INT2_POSITION                      equ 0005h
PORTC_INT2_SIZE                          equ 0001h
PORTC_INT2_LENGTH                        equ 0001h
PORTC_INT2_MASK                          equ 0020h
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
PORTC_CCP2_POSN                          equ 0001h
PORTC_CCP2_POSITION                      equ 0001h
PORTC_CCP2_SIZE                          equ 0001h
PORTC_CCP2_LENGTH                        equ 0001h
PORTC_CCP2_MASK                          equ 0002h
PORTC_T0CKI_POSN                         equ 0003h
PORTC_T0CKI_POSITION                     equ 0003h
PORTC_T0CKI_SIZE                         equ 0001h
PORTC_T0CKI_LENGTH                       equ 0001h
PORTC_T0CKI_MASK                         equ 0008h
PORTC_SDA_POSN                           equ 0004h
PORTC_SDA_POSITION                       equ 0004h
PORTC_SDA_SIZE                           equ 0001h
PORTC_SDA_LENGTH                         equ 0001h
PORTC_SDA_MASK                           equ 0010h
PORTC_SCK_POSN                           equ 0005h
PORTC_SCK_POSITION                       equ 0005h
PORTC_SCK_SIZE                           equ 0001h
PORTC_SCK_LENGTH                         equ 0001h
PORTC_SCK_MASK                           equ 0020h
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
PORTC_NOT_FLTA_POSN                      equ 0001h
PORTC_NOT_FLTA_POSITION                  equ 0001h
PORTC_NOT_FLTA_SIZE                      equ 0001h
PORTC_NOT_FLTA_LENGTH                    equ 0001h
PORTC_NOT_FLTA_MASK                      equ 0002h
PORTC_NOT_FLTB_POSN                      equ 0002h
PORTC_NOT_FLTB_POSITION                  equ 0002h
PORTC_NOT_FLTB_SIZE                      equ 0001h
PORTC_NOT_FLTB_LENGTH                    equ 0001h
PORTC_NOT_FLTB_MASK                      equ 0004h
PORTC_NOT_SS_POSN                        equ 0006h
PORTC_NOT_SS_POSITION                    equ 0006h
PORTC_NOT_SS_SIZE                        equ 0001h
PORTC_NOT_SS_LENGTH                      equ 0001h
PORTC_NOT_SS_MASK                        equ 0040h
PORTC_nFLTA_POSN                         equ 0001h
PORTC_nFLTA_POSITION                     equ 0001h
PORTC_nFLTA_SIZE                         equ 0001h
PORTC_nFLTA_LENGTH                       equ 0001h
PORTC_nFLTA_MASK                         equ 0002h
PORTC_nFLTB_POSN                         equ 0002h
PORTC_nFLTB_POSITION                     equ 0002h
PORTC_nFLTB_SIZE                         equ 0001h
PORTC_nFLTB_LENGTH                       equ 0001h
PORTC_nFLTB_MASK                         equ 0004h
PORTC_T5CKI_POSN                         equ 0003h
PORTC_T5CKI_POSITION                     equ 0003h
PORTC_T5CKI_SIZE                         equ 0001h
PORTC_T5CKI_LENGTH                       equ 0001h
PORTC_T5CKI_MASK                         equ 0008h
PORTC_SDI_POSN                           equ 0004h
PORTC_SDI_POSITION                       equ 0004h
PORTC_SDI_SIZE                           equ 0001h
PORTC_SDI_LENGTH                         equ 0001h
PORTC_SDI_MASK                           equ 0010h
PORTC_SCL_POSN                           equ 0005h
PORTC_SCL_POSITION                       equ 0005h
PORTC_SCL_SIZE                           equ 0001h
PORTC_SCL_LENGTH                         equ 0001h
PORTC_SCL_MASK                           equ 0020h
PORTC_nSS_POSN                           equ 0006h
PORTC_nSS_POSITION                       equ 0006h
PORTC_nSS_SIZE                           equ 0001h
PORTC_nSS_LENGTH                         equ 0001h
PORTC_nSS_MASK                           equ 0040h
PORTC_SDO_POSN                           equ 0007h
PORTC_SDO_POSITION                       equ 0007h
PORTC_SDO_SIZE                           equ 0001h
PORTC_SDO_LENGTH                         equ 0001h
PORTC_SDO_MASK                           equ 0080h
PORTC_FLTA_POSN                          equ 0001h
PORTC_FLTA_POSITION                      equ 0001h
PORTC_FLTA_SIZE                          equ 0001h
PORTC_FLTA_LENGTH                        equ 0001h
PORTC_FLTA_MASK                          equ 0002h
PORTC_FLTB_POSN                          equ 0002h
PORTC_FLTB_POSITION                      equ 0002h
PORTC_FLTB_SIZE                          equ 0001h
PORTC_FLTB_LENGTH                        equ 0001h
PORTC_FLTB_MASK                          equ 0004h
PORTC_SS_POSN                            equ 0006h
PORTC_SS_POSITION                        equ 0006h
PORTC_SS_SIZE                            equ 0001h
PORTC_SS_LENGTH                          equ 0001h
PORTC_SS_MASK                            equ 0040h
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
PORTE_NOT_MCLR_POSN                      equ 0003h
PORTE_NOT_MCLR_POSITION                  equ 0003h
PORTE_NOT_MCLR_SIZE                      equ 0001h
PORTE_NOT_MCLR_LENGTH                    equ 0001h
PORTE_NOT_MCLR_MASK                      equ 0008h
PORTE_nMCLR_POSN                         equ 0003h
PORTE_nMCLR_POSITION                     equ 0003h
PORTE_nMCLR_SIZE                         equ 0001h
PORTE_nMCLR_LENGTH                       equ 0001h
PORTE_nMCLR_MASK                         equ 0008h
PORTE_MCLR_POSN                          equ 0003h
PORTE_MCLR_POSITION                      equ 0003h
PORTE_MCLR_SIZE                          equ 0001h
PORTE_MCLR_LENGTH                        equ 0001h
PORTE_MCLR_MASK                          equ 0008h
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

// Register: TMR5
#define TMR5 TMR5
TMR5                                     equ 0F87h

// Register: TMR5L
#define TMR5L TMR5L
TMR5L                                    equ 0F87h

// Register: TMR5H
#define TMR5H TMR5H
TMR5H                                    equ 0F88h

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

// Register: PR5
#define PR5 PR5
PR5                                      equ 0F90h

// Register: PR5L
#define PR5L PR5L
PR5L                                     equ 0F90h

// Register: PR5H
#define PR5H PR5H
PR5H                                     equ 0F91h

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

// Register: ADCHS
#define ADCHS ADCHS
ADCHS                                    equ 0F99h
// bitfield definitions
ADCHS_SASEL_POSN                         equ 0000h
ADCHS_SASEL_POSITION                     equ 0000h
ADCHS_SASEL_SIZE                         equ 0002h
ADCHS_SASEL_LENGTH                       equ 0002h
ADCHS_SASEL_MASK                         equ 0003h
ADCHS_SCSEL_POSN                         equ 0002h
ADCHS_SCSEL_POSITION                     equ 0002h
ADCHS_SCSEL_SIZE                         equ 0002h
ADCHS_SCSEL_LENGTH                       equ 0002h
ADCHS_SCSEL_MASK                         equ 000Ch
ADCHS_SBSEL_POSN                         equ 0004h
ADCHS_SBSEL_POSITION                     equ 0004h
ADCHS_SBSEL_SIZE                         equ 0002h
ADCHS_SBSEL_LENGTH                       equ 0002h
ADCHS_SBSEL_MASK                         equ 0030h
ADCHS_SDSEL_POSN                         equ 0006h
ADCHS_SDSEL_POSITION                     equ 0006h
ADCHS_SDSEL_SIZE                         equ 0002h
ADCHS_SDSEL_LENGTH                       equ 0002h
ADCHS_SDSEL_MASK                         equ 00C0h
ADCHS_GASEL0_POSN                        equ 0000h
ADCHS_GASEL0_POSITION                    equ 0000h
ADCHS_GASEL0_SIZE                        equ 0001h
ADCHS_GASEL0_LENGTH                      equ 0001h
ADCHS_GASEL0_MASK                        equ 0001h
ADCHS_GASEL1_POSN                        equ 0001h
ADCHS_GASEL1_POSITION                    equ 0001h
ADCHS_GASEL1_SIZE                        equ 0001h
ADCHS_GASEL1_LENGTH                      equ 0001h
ADCHS_GASEL1_MASK                        equ 0002h
ADCHS_GCSEL0_POSN                        equ 0002h
ADCHS_GCSEL0_POSITION                    equ 0002h
ADCHS_GCSEL0_SIZE                        equ 0001h
ADCHS_GCSEL0_LENGTH                      equ 0001h
ADCHS_GCSEL0_MASK                        equ 0004h
ADCHS_GCSEL1_POSN                        equ 0003h
ADCHS_GCSEL1_POSITION                    equ 0003h
ADCHS_GCSEL1_SIZE                        equ 0001h
ADCHS_GCSEL1_LENGTH                      equ 0001h
ADCHS_GCSEL1_MASK                        equ 0008h
ADCHS_GBSEL0_POSN                        equ 0004h
ADCHS_GBSEL0_POSITION                    equ 0004h
ADCHS_GBSEL0_SIZE                        equ 0001h
ADCHS_GBSEL0_LENGTH                      equ 0001h
ADCHS_GBSEL0_MASK                        equ 0010h
ADCHS_GBSEL1_POSN                        equ 0005h
ADCHS_GBSEL1_POSITION                    equ 0005h
ADCHS_GBSEL1_SIZE                        equ 0001h
ADCHS_GBSEL1_LENGTH                      equ 0001h
ADCHS_GBSEL1_MASK                        equ 0020h
ADCHS_GDSEL0_POSN                        equ 0006h
ADCHS_GDSEL0_POSITION                    equ 0006h
ADCHS_GDSEL0_SIZE                        equ 0001h
ADCHS_GDSEL0_LENGTH                      equ 0001h
ADCHS_GDSEL0_MASK                        equ 0040h
ADCHS_GDSEL1_POSN                        equ 0007h
ADCHS_GDSEL1_POSITION                    equ 0007h
ADCHS_GDSEL1_SIZE                        equ 0001h
ADCHS_GDSEL1_LENGTH                      equ 0001h
ADCHS_GDSEL1_MASK                        equ 0080h
ADCHS_SASEL0_POSN                        equ 0000h
ADCHS_SASEL0_POSITION                    equ 0000h
ADCHS_SASEL0_SIZE                        equ 0001h
ADCHS_SASEL0_LENGTH                      equ 0001h
ADCHS_SASEL0_MASK                        equ 0001h
ADCHS_SASEL1_POSN                        equ 0001h
ADCHS_SASEL1_POSITION                    equ 0001h
ADCHS_SASEL1_SIZE                        equ 0001h
ADCHS_SASEL1_LENGTH                      equ 0001h
ADCHS_SASEL1_MASK                        equ 0002h
ADCHS_SCSEL0_POSN                        equ 0002h
ADCHS_SCSEL0_POSITION                    equ 0002h
ADCHS_SCSEL0_SIZE                        equ 0001h
ADCHS_SCSEL0_LENGTH                      equ 0001h
ADCHS_SCSEL0_MASK                        equ 0004h
ADCHS_SCSEL1_POSN                        equ 0003h
ADCHS_SCSEL1_POSITION                    equ 0003h
ADCHS_SCSEL1_SIZE                        equ 0001h
ADCHS_SCSEL1_LENGTH                      equ 0001h
ADCHS_SCSEL1_MASK                        equ 0008h
ADCHS_SBSEL0_POSN                        equ 0004h
ADCHS_SBSEL0_POSITION                    equ 0004h
ADCHS_SBSEL0_SIZE                        equ 0001h
ADCHS_SBSEL0_LENGTH                      equ 0001h
ADCHS_SBSEL0_MASK                        equ 0010h
ADCHS_SBSEL1_POSN                        equ 0005h
ADCHS_SBSEL1_POSITION                    equ 0005h
ADCHS_SBSEL1_SIZE                        equ 0001h
ADCHS_SBSEL1_LENGTH                      equ 0001h
ADCHS_SBSEL1_MASK                        equ 0020h
ADCHS_SDSEL0_POSN                        equ 0006h
ADCHS_SDSEL0_POSITION                    equ 0006h
ADCHS_SDSEL0_SIZE                        equ 0001h
ADCHS_SDSEL0_LENGTH                      equ 0001h
ADCHS_SDSEL0_MASK                        equ 0040h
ADCHS_SDSEL1_POSN                        equ 0007h
ADCHS_SDSEL1_POSITION                    equ 0007h
ADCHS_SDSEL1_SIZE                        equ 0001h
ADCHS_SDSEL1_LENGTH                      equ 0001h
ADCHS_SDSEL1_MASK                        equ 0080h

// Register: ADCON3
#define ADCON3 ADCON3
ADCON3                                   equ 0F9Ah
// bitfield definitions
ADCON3_SSRC_POSN                         equ 0000h
ADCON3_SSRC_POSITION                     equ 0000h
ADCON3_SSRC_SIZE                         equ 0005h
ADCON3_SSRC_LENGTH                       equ 0005h
ADCON3_SSRC_MASK                         equ 001Fh
ADCON3_ADRS_POSN                         equ 0006h
ADCON3_ADRS_POSITION                     equ 0006h
ADCON3_ADRS_SIZE                         equ 0002h
ADCON3_ADRS_LENGTH                       equ 0002h
ADCON3_ADRS_MASK                         equ 00C0h
ADCON3_SSRC0_POSN                        equ 0000h
ADCON3_SSRC0_POSITION                    equ 0000h
ADCON3_SSRC0_SIZE                        equ 0001h
ADCON3_SSRC0_LENGTH                      equ 0001h
ADCON3_SSRC0_MASK                        equ 0001h
ADCON3_SSRC1_POSN                        equ 0001h
ADCON3_SSRC1_POSITION                    equ 0001h
ADCON3_SSRC1_SIZE                        equ 0001h
ADCON3_SSRC1_LENGTH                      equ 0001h
ADCON3_SSRC1_MASK                        equ 0002h
ADCON3_SSRC2_POSN                        equ 0002h
ADCON3_SSRC2_POSITION                    equ 0002h
ADCON3_SSRC2_SIZE                        equ 0001h
ADCON3_SSRC2_LENGTH                      equ 0001h
ADCON3_SSRC2_MASK                        equ 0004h
ADCON3_SSRC3_POSN                        equ 0003h
ADCON3_SSRC3_POSITION                    equ 0003h
ADCON3_SSRC3_SIZE                        equ 0001h
ADCON3_SSRC3_LENGTH                      equ 0001h
ADCON3_SSRC3_MASK                        equ 0008h
ADCON3_SSRC4_POSN                        equ 0004h
ADCON3_SSRC4_POSITION                    equ 0004h
ADCON3_SSRC4_SIZE                        equ 0001h
ADCON3_SSRC4_LENGTH                      equ 0001h
ADCON3_SSRC4_MASK                        equ 0010h
ADCON3_ADRS0_POSN                        equ 0006h
ADCON3_ADRS0_POSITION                    equ 0006h
ADCON3_ADRS0_SIZE                        equ 0001h
ADCON3_ADRS0_LENGTH                      equ 0001h
ADCON3_ADRS0_MASK                        equ 0040h
ADCON3_ADRS1_POSN                        equ 0007h
ADCON3_ADRS1_POSITION                    equ 0007h
ADCON3_ADRS1_SIZE                        equ 0001h
ADCON3_ADRS1_LENGTH                      equ 0001h
ADCON3_ADRS1_MASK                        equ 0080h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0F9Bh
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0006h
OSCTUNE_TUN_LENGTH                       equ 0006h
OSCTUNE_TUN_MASK                         equ 003Fh
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
PIE1_TBIE_POSN                           equ 0004h
PIE1_TBIE_POSITION                       equ 0004h
PIE1_TBIE_SIZE                           equ 0001h
PIE1_TBIE_LENGTH                         equ 0001h
PIE1_TBIE_MASK                           equ 0010h
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
PIR1_TBIF_POSN                           equ 0004h
PIR1_TBIF_POSITION                       equ 0004h
PIR1_TBIF_SIZE                           equ 0001h
PIR1_TBIF_LENGTH                         equ 0001h
PIR1_TBIF_MASK                           equ 0010h
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
IPR1_TBIP_POSN                           equ 0004h
IPR1_TBIP_POSITION                       equ 0004h
IPR1_TBIP_SIZE                           equ 0001h
IPR1_TBIP_LENGTH                         equ 0001h
IPR1_TBIP_MASK                           equ 0010h
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
PIE2_LVDIE_POSN                          equ 0002h
PIE2_LVDIE_POSITION                      equ 0002h
PIE2_LVDIE_SIZE                          equ 0001h
PIE2_LVDIE_LENGTH                        equ 0001h
PIE2_LVDIE_MASK                          equ 0004h
PIE2_EEIE_POSN                           equ 0004h
PIE2_EEIE_POSITION                       equ 0004h
PIE2_EEIE_SIZE                           equ 0001h
PIE2_EEIE_LENGTH                         equ 0001h
PIE2_EEIE_MASK                           equ 0010h
PIE2_OSFIE_POSN                          equ 0007h
PIE2_OSFIE_POSITION                      equ 0007h
PIE2_OSFIE_SIZE                          equ 0001h
PIE2_OSFIE_LENGTH                        equ 0001h
PIE2_OSFIE_MASK                          equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0FA1h
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_LVDIF_POSN                          equ 0002h
PIR2_LVDIF_POSITION                      equ 0002h
PIR2_LVDIF_SIZE                          equ 0001h
PIR2_LVDIF_LENGTH                        equ 0001h
PIR2_LVDIF_MASK                          equ 0004h
PIR2_EEIF_POSN                           equ 0004h
PIR2_EEIF_POSITION                       equ 0004h
PIR2_EEIF_SIZE                           equ 0001h
PIR2_EEIF_LENGTH                         equ 0001h
PIR2_EEIF_MASK                           equ 0010h
PIR2_OSFIF_POSN                          equ 0007h
PIR2_OSFIF_POSITION                      equ 0007h
PIR2_OSFIF_SIZE                          equ 0001h
PIR2_OSFIF_LENGTH                        equ 0001h
PIR2_OSFIF_MASK                          equ 0080h

// Register: IPR2
#define IPR2 IPR2
IPR2                                     equ 0FA2h
// bitfield definitions
IPR2_CCP2IP_POSN                         equ 0000h
IPR2_CCP2IP_POSITION                     equ 0000h
IPR2_CCP2IP_SIZE                         equ 0001h
IPR2_CCP2IP_LENGTH                       equ 0001h
IPR2_CCP2IP_MASK                         equ 0001h
IPR2_LVDIP_POSN                          equ 0002h
IPR2_LVDIP_POSITION                      equ 0002h
IPR2_LVDIP_SIZE                          equ 0001h
IPR2_LVDIP_LENGTH                        equ 0001h
IPR2_LVDIP_MASK                          equ 0004h
IPR2_EEIP_POSN                           equ 0004h
IPR2_EEIP_POSITION                       equ 0004h
IPR2_EEIP_SIZE                           equ 0001h
IPR2_EEIP_LENGTH                         equ 0001h
IPR2_EEIP_MASK                           equ 0010h
IPR2_OSFIP_POSN                          equ 0007h
IPR2_OSFIP_POSITION                      equ 0007h
IPR2_OSFIP_SIZE                          equ 0001h
IPR2_OSFIP_LENGTH                        equ 0001h
IPR2_OSFIP_MASK                          equ 0080h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0FA3h
// bitfield definitions
PIE3_TMR5IE_POSN                         equ 0000h
PIE3_TMR5IE_POSITION                     equ 0000h
PIE3_TMR5IE_SIZE                         equ 0001h
PIE3_TMR5IE_LENGTH                       equ 0001h
PIE3_TMR5IE_MASK                         equ 0001h
PIE3_IC1IE_POSN                          equ 0001h
PIE3_IC1IE_POSITION                      equ 0001h
PIE3_IC1IE_SIZE                          equ 0001h
PIE3_IC1IE_LENGTH                        equ 0001h
PIE3_IC1IE_MASK                          equ 0002h
PIE3_IC2QEIE_POSN                        equ 0002h
PIE3_IC2QEIE_POSITION                    equ 0002h
PIE3_IC2QEIE_SIZE                        equ 0001h
PIE3_IC2QEIE_LENGTH                      equ 0001h
PIE3_IC2QEIE_MASK                        equ 0004h
PIE3_IC3DRIE_POSN                        equ 0003h
PIE3_IC3DRIE_POSITION                    equ 0003h
PIE3_IC3DRIE_SIZE                        equ 0001h
PIE3_IC3DRIE_LENGTH                      equ 0001h
PIE3_IC3DRIE_MASK                        equ 0008h
PIE3_PTIE_POSN                           equ 0004h
PIE3_PTIE_POSITION                       equ 0004h
PIE3_PTIE_SIZE                           equ 0001h
PIE3_PTIE_LENGTH                         equ 0001h
PIE3_PTIE_MASK                           equ 0010h
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
PIR3_TMR5IF_POSN                         equ 0000h
PIR3_TMR5IF_POSITION                     equ 0000h
PIR3_TMR5IF_SIZE                         equ 0001h
PIR3_TMR5IF_LENGTH                       equ 0001h
PIR3_TMR5IF_MASK                         equ 0001h
PIR3_IC1IF_POSN                          equ 0001h
PIR3_IC1IF_POSITION                      equ 0001h
PIR3_IC1IF_SIZE                          equ 0001h
PIR3_IC1IF_LENGTH                        equ 0001h
PIR3_IC1IF_MASK                          equ 0002h
PIR3_IC2QEIF_POSN                        equ 0002h
PIR3_IC2QEIF_POSITION                    equ 0002h
PIR3_IC2QEIF_SIZE                        equ 0001h
PIR3_IC2QEIF_LENGTH                      equ 0001h
PIR3_IC2QEIF_MASK                        equ 0004h
PIR3_IC3DRIF_POSN                        equ 0003h
PIR3_IC3DRIF_POSITION                    equ 0003h
PIR3_IC3DRIF_SIZE                        equ 0001h
PIR3_IC3DRIF_LENGTH                      equ 0001h
PIR3_IC3DRIF_MASK                        equ 0008h
PIR3_PTIF_POSN                           equ 0004h
PIR3_PTIF_POSITION                       equ 0004h
PIR3_PTIF_SIZE                           equ 0001h
PIR3_PTIF_LENGTH                         equ 0001h
PIR3_PTIF_MASK                           equ 0010h
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
IPR3_TMR5IP_POSN                         equ 0000h
IPR3_TMR5IP_POSITION                     equ 0000h
IPR3_TMR5IP_SIZE                         equ 0001h
IPR3_TMR5IP_LENGTH                       equ 0001h
IPR3_TMR5IP_MASK                         equ 0001h
IPR3_IC1IP_POSN                          equ 0001h
IPR3_IC1IP_POSITION                      equ 0001h
IPR3_IC1IP_SIZE                          equ 0001h
IPR3_IC1IP_LENGTH                        equ 0001h
IPR3_IC1IP_MASK                          equ 0002h
IPR3_IC2QEIP_POSN                        equ 0002h
IPR3_IC2QEIP_POSITION                    equ 0002h
IPR3_IC2QEIP_SIZE                        equ 0001h
IPR3_IC2QEIP_LENGTH                      equ 0001h
IPR3_IC2QEIP_MASK                        equ 0004h
IPR3_IC3DRIP_POSN                        equ 0003h
IPR3_IC3DRIP_POSITION                    equ 0003h
IPR3_IC3DRIP_SIZE                        equ 0001h
IPR3_IC3DRIP_LENGTH                      equ 0001h
IPR3_IC3DRIP_MASK                        equ 0008h
IPR3_PTIP_POSN                           equ 0004h
IPR3_PTIP_POSITION                       equ 0004h
IPR3_PTIP_SIZE                           equ 0001h
IPR3_PTIP_LENGTH                         equ 0001h
IPR3_PTIP_MASK                           equ 0010h
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

// Register: BAUDCON
#define BAUDCON BAUDCON
BAUDCON                                  equ 0FAAh
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

// Register: QEICON
#define QEICON QEICON
QEICON                                   equ 0FB6h
// bitfield definitions
QEICON_UP_NOT_DOWN_POSN                  equ 0005h
QEICON_UP_NOT_DOWN_POSITION              equ 0005h
QEICON_UP_NOT_DOWN_SIZE                  equ 0001h
QEICON_UP_NOT_DOWN_LENGTH                equ 0001h
QEICON_UP_NOT_DOWN_MASK                  equ 0020h
QEICON_NOT_VELM_POSN                     equ 0007h
QEICON_NOT_VELM_POSITION                 equ 0007h
QEICON_NOT_VELM_SIZE                     equ 0001h
QEICON_NOT_VELM_LENGTH                   equ 0001h
QEICON_NOT_VELM_MASK                     equ 0080h
QEICON_PDEC_POSN                         equ 0000h
QEICON_PDEC_POSITION                     equ 0000h
QEICON_PDEC_SIZE                         equ 0002h
QEICON_PDEC_LENGTH                       equ 0002h
QEICON_PDEC_MASK                         equ 0003h
QEICON_QEIM_POSN                         equ 0002h
QEICON_QEIM_POSITION                     equ 0002h
QEICON_QEIM_SIZE                         equ 0003h
QEICON_QEIM_LENGTH                       equ 0003h
QEICON_QEIM_MASK                         equ 001Ch
QEICON_UP_nDOWN_POSN                     equ 0005h
QEICON_UP_nDOWN_POSITION                 equ 0005h
QEICON_UP_nDOWN_SIZE                     equ 0001h
QEICON_UP_nDOWN_LENGTH                   equ 0001h
QEICON_UP_nDOWN_MASK                     equ 0020h
QEICON_QERR_POSN                         equ 0006h
QEICON_QERR_POSITION                     equ 0006h
QEICON_QERR_SIZE                         equ 0001h
QEICON_QERR_LENGTH                       equ 0001h
QEICON_QERR_MASK                         equ 0040h
QEICON_nVELM_POSN                        equ 0007h
QEICON_nVELM_POSITION                    equ 0007h
QEICON_nVELM_SIZE                        equ 0001h
QEICON_nVELM_LENGTH                      equ 0001h
QEICON_nVELM_MASK                        equ 0080h
QEICON_PDEC0_POSN                        equ 0000h
QEICON_PDEC0_POSITION                    equ 0000h
QEICON_PDEC0_SIZE                        equ 0001h
QEICON_PDEC0_LENGTH                      equ 0001h
QEICON_PDEC0_MASK                        equ 0001h
QEICON_PDEC1_POSN                        equ 0001h
QEICON_PDEC1_POSITION                    equ 0001h
QEICON_PDEC1_SIZE                        equ 0001h
QEICON_PDEC1_LENGTH                      equ 0001h
QEICON_PDEC1_MASK                        equ 0002h
QEICON_QEIM0_POSN                        equ 0002h
QEICON_QEIM0_POSITION                    equ 0002h
QEICON_QEIM0_SIZE                        equ 0001h
QEICON_QEIM0_LENGTH                      equ 0001h
QEICON_QEIM0_MASK                        equ 0004h
QEICON_QEIM1_POSN                        equ 0003h
QEICON_QEIM1_POSITION                    equ 0003h
QEICON_QEIM1_SIZE                        equ 0001h
QEICON_QEIM1_LENGTH                      equ 0001h
QEICON_QEIM1_MASK                        equ 0008h
QEICON_QEIM2_POSN                        equ 0004h
QEICON_QEIM2_POSITION                    equ 0004h
QEICON_QEIM2_SIZE                        equ 0001h
QEICON_QEIM2_LENGTH                      equ 0001h
QEICON_QEIM2_MASK                        equ 0010h
QEICON_UP_DOWN_POSN                      equ 0005h
QEICON_UP_DOWN_POSITION                  equ 0005h
QEICON_UP_DOWN_SIZE                      equ 0001h
QEICON_UP_DOWN_LENGTH                    equ 0001h
QEICON_UP_DOWN_MASK                      equ 0020h
QEICON_VELM_POSN                         equ 0007h
QEICON_VELM_POSITION                     equ 0007h
QEICON_VELM_SIZE                         equ 0001h
QEICON_VELM_LENGTH                       equ 0001h
QEICON_VELM_MASK                         equ 0080h
QEICON_UP_POSN                           equ 0005h
QEICON_UP_POSITION                       equ 0005h
QEICON_UP_SIZE                           equ 0001h
QEICON_UP_LENGTH                         equ 0001h
QEICON_UP_MASK                           equ 0020h
QEICON_DOWN_POSN                         equ 0005h
QEICON_DOWN_POSITION                     equ 0005h
QEICON_DOWN_SIZE                         equ 0001h
QEICON_DOWN_LENGTH                       equ 0001h
QEICON_DOWN_MASK                         equ 0020h
QEICON_NOT_DOWN_POSN                     equ 0005h
QEICON_NOT_DOWN_POSITION                 equ 0005h
QEICON_NOT_DOWN_SIZE                     equ 0001h
QEICON_NOT_DOWN_LENGTH                   equ 0001h
QEICON_NOT_DOWN_MASK                     equ 0020h
QEICON_nDOWN_POSN                        equ 0005h
QEICON_nDOWN_POSITION                    equ 0005h
QEICON_nDOWN_SIZE                        equ 0001h
QEICON_nDOWN_LENGTH                      equ 0001h
QEICON_nDOWN_MASK                        equ 0020h
QEICON_UPDOWN_POSN                       equ 0005h
QEICON_UPDOWN_POSITION                   equ 0005h
QEICON_UPDOWN_SIZE                       equ 0001h
QEICON_UPDOWN_LENGTH                     equ 0001h
QEICON_UPDOWN_MASK                       equ 0020h

// Register: T5CON
#define T5CON T5CON
T5CON                                    equ 0FB7h
// bitfield definitions
T5CON_NOT_T5SYNC_POSN                    equ 0002h
T5CON_NOT_T5SYNC_POSITION                equ 0002h
T5CON_NOT_T5SYNC_SIZE                    equ 0001h
T5CON_NOT_T5SYNC_LENGTH                  equ 0001h
T5CON_NOT_T5SYNC_MASK                    equ 0004h
T5CON_NOT_RESEN_POSN                     equ 0006h
T5CON_NOT_RESEN_POSITION                 equ 0006h
T5CON_NOT_RESEN_SIZE                     equ 0001h
T5CON_NOT_RESEN_LENGTH                   equ 0001h
T5CON_NOT_RESEN_MASK                     equ 0040h
T5CON_TMR5ON_POSN                        equ 0000h
T5CON_TMR5ON_POSITION                    equ 0000h
T5CON_TMR5ON_SIZE                        equ 0001h
T5CON_TMR5ON_LENGTH                      equ 0001h
T5CON_TMR5ON_MASK                        equ 0001h
T5CON_TMR5CS_POSN                        equ 0001h
T5CON_TMR5CS_POSITION                    equ 0001h
T5CON_TMR5CS_SIZE                        equ 0001h
T5CON_TMR5CS_LENGTH                      equ 0001h
T5CON_TMR5CS_MASK                        equ 0002h
T5CON_nT5SYNC_POSN                       equ 0002h
T5CON_nT5SYNC_POSITION                   equ 0002h
T5CON_nT5SYNC_SIZE                       equ 0001h
T5CON_nT5SYNC_LENGTH                     equ 0001h
T5CON_nT5SYNC_MASK                       equ 0004h
T5CON_T5PS_POSN                          equ 0003h
T5CON_T5PS_POSITION                      equ 0003h
T5CON_T5PS_SIZE                          equ 0002h
T5CON_T5PS_LENGTH                        equ 0002h
T5CON_T5PS_MASK                          equ 0018h
T5CON_T5MOD_POSN                         equ 0005h
T5CON_T5MOD_POSITION                     equ 0005h
T5CON_T5MOD_SIZE                         equ 0001h
T5CON_T5MOD_LENGTH                       equ 0001h
T5CON_T5MOD_MASK                         equ 0020h
T5CON_nRESEN_POSN                        equ 0006h
T5CON_nRESEN_POSITION                    equ 0006h
T5CON_nRESEN_SIZE                        equ 0001h
T5CON_nRESEN_LENGTH                      equ 0001h
T5CON_nRESEN_MASK                        equ 0040h
T5CON_T5SEN_POSN                         equ 0007h
T5CON_T5SEN_POSITION                     equ 0007h
T5CON_T5SEN_SIZE                         equ 0001h
T5CON_T5SEN_LENGTH                       equ 0001h
T5CON_T5SEN_MASK                         equ 0080h
T5CON_T5SYNC_POSN                        equ 0002h
T5CON_T5SYNC_POSITION                    equ 0002h
T5CON_T5SYNC_SIZE                        equ 0001h
T5CON_T5SYNC_LENGTH                      equ 0001h
T5CON_T5SYNC_MASK                        equ 0004h
T5CON_T5PS0_POSN                         equ 0003h
T5CON_T5PS0_POSITION                     equ 0003h
T5CON_T5PS0_SIZE                         equ 0001h
T5CON_T5PS0_LENGTH                       equ 0001h
T5CON_T5PS0_MASK                         equ 0008h
T5CON_T5PS1_POSN                         equ 0004h
T5CON_T5PS1_POSITION                     equ 0004h
T5CON_T5PS1_SIZE                         equ 0001h
T5CON_T5PS1_LENGTH                       equ 0001h
T5CON_T5PS1_MASK                         equ 0010h
T5CON_RESEN_POSN                         equ 0006h
T5CON_RESEN_POSITION                     equ 0006h
T5CON_RESEN_SIZE                         equ 0001h
T5CON_RESEN_LENGTH                       equ 0001h
T5CON_RESEN_MASK                         equ 0040h
T5CON_RD165_POSN                         equ 0001h
T5CON_RD165_POSITION                     equ 0001h
T5CON_RD165_SIZE                         equ 0001h
T5CON_RD165_LENGTH                       equ 0001h
T5CON_RD165_MASK                         equ 0002h
T5CON_SOSCEN5_POSN                       equ 0003h
T5CON_SOSCEN5_POSITION                   equ 0003h
T5CON_SOSCEN5_SIZE                       equ 0001h
T5CON_SOSCEN5_LENGTH                     equ 0001h
T5CON_SOSCEN5_MASK                       equ 0008h

// Register: ANSEL0
#define ANSEL0 ANSEL0
ANSEL0                                   equ 0FB8h
// bitfield definitions
ANSEL0_ANS0_POSN                         equ 0000h
ANSEL0_ANS0_POSITION                     equ 0000h
ANSEL0_ANS0_SIZE                         equ 0001h
ANSEL0_ANS0_LENGTH                       equ 0001h
ANSEL0_ANS0_MASK                         equ 0001h
ANSEL0_ANS1_POSN                         equ 0001h
ANSEL0_ANS1_POSITION                     equ 0001h
ANSEL0_ANS1_SIZE                         equ 0001h
ANSEL0_ANS1_LENGTH                       equ 0001h
ANSEL0_ANS1_MASK                         equ 0002h
ANSEL0_ANS2_POSN                         equ 0002h
ANSEL0_ANS2_POSITION                     equ 0002h
ANSEL0_ANS2_SIZE                         equ 0001h
ANSEL0_ANS2_LENGTH                       equ 0001h
ANSEL0_ANS2_MASK                         equ 0004h
ANSEL0_ANS3_POSN                         equ 0003h
ANSEL0_ANS3_POSITION                     equ 0003h
ANSEL0_ANS3_SIZE                         equ 0001h
ANSEL0_ANS3_LENGTH                       equ 0001h
ANSEL0_ANS3_MASK                         equ 0008h
ANSEL0_ANS4_POSN                         equ 0004h
ANSEL0_ANS4_POSITION                     equ 0004h
ANSEL0_ANS4_SIZE                         equ 0001h
ANSEL0_ANS4_LENGTH                       equ 0001h
ANSEL0_ANS4_MASK                         equ 0010h
ANSEL0_ANS5_POSN                         equ 0005h
ANSEL0_ANS5_POSITION                     equ 0005h
ANSEL0_ANS5_SIZE                         equ 0001h
ANSEL0_ANS5_LENGTH                       equ 0001h
ANSEL0_ANS5_MASK                         equ 0020h
ANSEL0_ANS6_POSN                         equ 0006h
ANSEL0_ANS6_POSITION                     equ 0006h
ANSEL0_ANS6_SIZE                         equ 0001h
ANSEL0_ANS6_LENGTH                       equ 0001h
ANSEL0_ANS6_MASK                         equ 0040h
ANSEL0_ANS7_POSN                         equ 0007h
ANSEL0_ANS7_POSITION                     equ 0007h
ANSEL0_ANS7_SIZE                         equ 0001h
ANSEL0_ANS7_LENGTH                       equ 0001h
ANSEL0_ANS7_MASK                         equ 0080h

// Register: ANSEL1
#define ANSEL1 ANSEL1
ANSEL1                                   equ 0FB9h
// bitfield definitions
ANSEL1_ANS8_POSN                         equ 0000h
ANSEL1_ANS8_POSITION                     equ 0000h
ANSEL1_ANS8_SIZE                         equ 0001h
ANSEL1_ANS8_LENGTH                       equ 0001h
ANSEL1_ANS8_MASK                         equ 0001h

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
ADCON2_ACQT_SIZE                         equ 0004h
ADCON2_ACQT_LENGTH                       equ 0004h
ADCON2_ACQT_MASK                         equ 0078h
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
ADCON2_ACQT3_POSN                        equ 0006h
ADCON2_ACQT3_POSITION                    equ 0006h
ADCON2_ACQT3_SIZE                        equ 0001h
ADCON2_ACQT3_LENGTH                      equ 0001h
ADCON2_ACQT3_MASK                        equ 0040h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 0FC1h
// bitfield definitions
ADCON1_ADPNT_POSN                        equ 0000h
ADCON1_ADPNT_POSITION                    equ 0000h
ADCON1_ADPNT_SIZE                        equ 0002h
ADCON1_ADPNT_LENGTH                      equ 0002h
ADCON1_ADPNT_MASK                        equ 0003h
ADCON1_BFOVFL_POSN                       equ 0002h
ADCON1_BFOVFL_POSITION                   equ 0002h
ADCON1_BFOVFL_SIZE                       equ 0001h
ADCON1_BFOVFL_LENGTH                     equ 0001h
ADCON1_BFOVFL_MASK                       equ 0004h
ADCON1_BFEMT_POSN                        equ 0003h
ADCON1_BFEMT_POSITION                    equ 0003h
ADCON1_BFEMT_SIZE                        equ 0001h
ADCON1_BFEMT_LENGTH                      equ 0001h
ADCON1_BFEMT_MASK                        equ 0008h
ADCON1_FIFOEN_POSN                       equ 0004h
ADCON1_FIFOEN_POSITION                   equ 0004h
ADCON1_FIFOEN_SIZE                       equ 0001h
ADCON1_FIFOEN_LENGTH                     equ 0001h
ADCON1_FIFOEN_MASK                       equ 0010h
ADCON1_VCFG_POSN                         equ 0006h
ADCON1_VCFG_POSITION                     equ 0006h
ADCON1_VCFG_SIZE                         equ 0002h
ADCON1_VCFG_LENGTH                       equ 0002h
ADCON1_VCFG_MASK                         equ 00C0h
ADCON1_ADPNT0_POSN                       equ 0000h
ADCON1_ADPNT0_POSITION                   equ 0000h
ADCON1_ADPNT0_SIZE                       equ 0001h
ADCON1_ADPNT0_LENGTH                     equ 0001h
ADCON1_ADPNT0_MASK                       equ 0001h
ADCON1_ADPNT1_POSN                       equ 0001h
ADCON1_ADPNT1_POSITION                   equ 0001h
ADCON1_ADPNT1_SIZE                       equ 0001h
ADCON1_ADPNT1_LENGTH                     equ 0001h
ADCON1_ADPNT1_MASK                       equ 0002h
ADCON1_VCFG0_POSN                        equ 0006h
ADCON1_VCFG0_POSITION                    equ 0006h
ADCON1_VCFG0_SIZE                        equ 0001h
ADCON1_VCFG0_LENGTH                      equ 0001h
ADCON1_VCFG0_MASK                        equ 0040h
ADCON1_VCFG1_POSN                        equ 0007h
ADCON1_VCFG1_POSITION                    equ 0007h
ADCON1_VCFG1_SIZE                        equ 0001h
ADCON1_VCFG1_LENGTH                      equ 0001h
ADCON1_VCFG1_MASK                        equ 0080h
ADCON1_FFOVFL_POSN                       equ 0002h
ADCON1_FFOVFL_POSITION                   equ 0002h
ADCON1_FFOVFL_SIZE                       equ 0001h
ADCON1_FFOVFL_LENGTH                     equ 0001h
ADCON1_FFOVFL_MASK                       equ 0004h
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
ADCON0_ACMOD_POSN                        equ 0002h
ADCON0_ACMOD_POSITION                    equ 0002h
ADCON0_ACMOD_SIZE                        equ 0002h
ADCON0_ACMOD_LENGTH                      equ 0002h
ADCON0_ACMOD_MASK                        equ 000Ch
ADCON0_ACSCH_POSN                        equ 0004h
ADCON0_ACSCH_POSITION                    equ 0004h
ADCON0_ACSCH_SIZE                        equ 0001h
ADCON0_ACSCH_LENGTH                      equ 0001h
ADCON0_ACSCH_MASK                        equ 0010h
ADCON0_ACONV_POSN                        equ 0005h
ADCON0_ACONV_POSITION                    equ 0005h
ADCON0_ACONV_SIZE                        equ 0001h
ADCON0_ACONV_LENGTH                      equ 0001h
ADCON0_ACONV_MASK                        equ 0020h
ADCON0_GO_DONE_POSN                      equ 0001h
ADCON0_GO_DONE_POSITION                  equ 0001h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0002h
ADCON0_ACMOD0_POSN                       equ 0002h
ADCON0_ACMOD0_POSITION                   equ 0002h
ADCON0_ACMOD0_SIZE                       equ 0001h
ADCON0_ACMOD0_LENGTH                     equ 0001h
ADCON0_ACMOD0_MASK                       equ 0004h
ADCON0_ACMOD1_POSN                       equ 0003h
ADCON0_ACMOD1_POSITION                   equ 0003h
ADCON0_ACMOD1_SIZE                       equ 0001h
ADCON0_ACMOD1_LENGTH                     equ 0001h
ADCON0_ACMOD1_MASK                       equ 0008h
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

// Register: SSPCON
#define SSPCON SSPCON
SSPCON                                   equ 0FC6h
// bitfield definitions
SSPCON_SSPM_POSN                         equ 0000h
SSPCON_SSPM_POSITION                     equ 0000h
SSPCON_SSPM_SIZE                         equ 0004h
SSPCON_SSPM_LENGTH                       equ 0004h
SSPCON_SSPM_MASK                         equ 000Fh
SSPCON_CKP_POSN                          equ 0004h
SSPCON_CKP_POSITION                      equ 0004h
SSPCON_CKP_SIZE                          equ 0001h
SSPCON_CKP_LENGTH                        equ 0001h
SSPCON_CKP_MASK                          equ 0010h
SSPCON_SSPEN_POSN                        equ 0005h
SSPCON_SSPEN_POSITION                    equ 0005h
SSPCON_SSPEN_SIZE                        equ 0001h
SSPCON_SSPEN_LENGTH                      equ 0001h
SSPCON_SSPEN_MASK                        equ 0020h
SSPCON_SSPOV_POSN                        equ 0006h
SSPCON_SSPOV_POSITION                    equ 0006h
SSPCON_SSPOV_SIZE                        equ 0001h
SSPCON_SSPOV_LENGTH                      equ 0001h
SSPCON_SSPOV_MASK                        equ 0040h
SSPCON_WCOL_POSN                         equ 0007h
SSPCON_WCOL_POSITION                     equ 0007h
SSPCON_WCOL_SIZE                         equ 0001h
SSPCON_WCOL_LENGTH                       equ 0001h
SSPCON_WCOL_MASK                         equ 0080h
SSPCON_SSPM0_POSN                        equ 0000h
SSPCON_SSPM0_POSITION                    equ 0000h
SSPCON_SSPM0_SIZE                        equ 0001h
SSPCON_SSPM0_LENGTH                      equ 0001h
SSPCON_SSPM0_MASK                        equ 0001h
SSPCON_SSPM1_POSN                        equ 0001h
SSPCON_SSPM1_POSITION                    equ 0001h
SSPCON_SSPM1_SIZE                        equ 0001h
SSPCON_SSPM1_LENGTH                      equ 0001h
SSPCON_SSPM1_MASK                        equ 0002h
SSPCON_SSPM2_POSN                        equ 0002h
SSPCON_SSPM2_POSITION                    equ 0002h
SSPCON_SSPM2_SIZE                        equ 0001h
SSPCON_SSPM2_LENGTH                      equ 0001h
SSPCON_SSPM2_MASK                        equ 0004h
SSPCON_SSPM3_POSN                        equ 0003h
SSPCON_SSPM3_POSITION                    equ 0003h
SSPCON_SSPM3_SIZE                        equ 0001h
SSPCON_SSPM3_LENGTH                      equ 0001h
SSPCON_SSPM3_MASK                        equ 0008h

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
T1CON_T1INSYNC_POSN                      equ 0002h
T1CON_T1INSYNC_POSITION                  equ 0002h
T1CON_T1INSYNC_SIZE                      equ 0001h
T1CON_T1INSYNC_LENGTH                    equ 0001h
T1CON_T1INSYNC_MASK                      equ 0004h
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
WDTCON_WDTW_POSN                         equ 0007h
WDTCON_WDTW_POSITION                     equ 0007h
WDTCON_WDTW_SIZE                         equ 0001h
WDTCON_WDTW_LENGTH                       equ 0001h
WDTCON_WDTW_MASK                         equ 0080h

// Register: LVDCON
#define LVDCON LVDCON
LVDCON                                   equ 0FD2h
// bitfield definitions
LVDCON_LVDL_POSN                         equ 0000h
LVDCON_LVDL_POSITION                     equ 0000h
LVDCON_LVDL_SIZE                         equ 0004h
LVDCON_LVDL_LENGTH                       equ 0004h
LVDCON_LVDL_MASK                         equ 000Fh
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
LVDCON_LVDL3_POSN                        equ 0003h
LVDCON_LVDL3_POSITION                    equ 0003h
LVDCON_LVDL3_SIZE                        equ 0001h
LVDCON_LVDL3_LENGTH                      equ 0001h
LVDCON_LVDL3_MASK                        equ 0008h
LVDCON_IVRST_POSN                        equ 0005h
LVDCON_IVRST_POSITION                    equ 0005h
LVDCON_IVRST_SIZE                        equ 0001h
LVDCON_IVRST_LENGTH                      equ 0001h
LVDCON_IVRST_MASK                        equ 0020h

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
OSCCON_FLTS_POSN                         equ 0002h
OSCCON_FLTS_POSITION                     equ 0002h
OSCCON_FLTS_SIZE                         equ 0001h
OSCCON_FLTS_LENGTH                       equ 0001h
OSCCON_FLTS_MASK                         equ 0004h

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
T0CON_T016BIT_POSN                       equ 0006h
T0CON_T016BIT_POSITION                   equ 0006h
T0CON_T016BIT_SIZE                       equ 0001h
T0CON_T016BIT_LENGTH                     equ 0001h
T0CON_T016BIT_MASK                       equ 0040h
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
T0CON_T0PS3_POSN                         equ 0003h
T0CON_T0PS3_POSITION                     equ 0003h
T0CON_T0PS3_SIZE                         equ 0001h
T0CON_T0PS3_LENGTH                       equ 0001h
T0CON_T0PS3_MASK                         equ 0008h

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
#define ACMOD0                           BANKMASK(ADCON0), 2, a
#define ACMOD1                           BANKMASK(ADCON0), 3, a
#define ACONV                            BANKMASK(ADCON0), 5, a
#define ACQT0                            BANKMASK(ADCON2), 3, a
#define ACQT1                            BANKMASK(ADCON2), 4, a
#define ACQT2                            BANKMASK(ADCON2), 5, a
#define ACQT3                            BANKMASK(ADCON2), 6, a
#define ACSCH                            BANKMASK(ADCON0), 4, a
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
#define ADPNT0                           BANKMASK(ADCON1), 0, a
#define ADPNT1                           BANKMASK(ADCON1), 1, a
#define ADRS0                            BANKMASK(ADCON3), 6, a
#define ADRS1                            BANKMASK(ADCON3), 7, a
#define AN0                              BANKMASK(PORTA), 0, a
#define AN1                              BANKMASK(PORTA), 1, a
#define AN2                              BANKMASK(PORTA), 2, a
#define AN3                              BANKMASK(PORTA), 3, a
#define AN4                              BANKMASK(PORTA), 4, a
#define AN5                              BANKMASK(PORTA), 5, a
#define ANS0                             BANKMASK(ANSEL0), 0, a
#define ANS1                             BANKMASK(ANSEL0), 1, a
#define ANS2                             BANKMASK(ANSEL0), 2, a
#define ANS3                             BANKMASK(ANSEL0), 3, a
#define ANS4                             BANKMASK(ANSEL0), 4, a
#define ANS5                             BANKMASK(ANSEL0), 5, a
#define ANS6                             BANKMASK(ANSEL0), 6, a
#define ANS7                             BANKMASK(ANSEL0), 7, a
#define ANS8                             BANKMASK(ANSEL1), 0, a
#define BF                               BANKMASK(SSPSTAT), 0, a
#define BFEMT                            BANKMASK(ADCON1), 3, a
#define BFOVFL                           BANKMASK(ADCON1), 2, a
#define BOR                              BANKMASK(RCON), 0, a
#define BRFEN                            BANKMASK(FLTCONFIG), 7, a
#define BRG16                            BANKMASK(BAUDCON), 3, a
#define BRGH                             BANKMASK(TXSTA), 2, a
#define BRGH1                            BANKMASK(TXSTA), 2, a
#define CAP1M0                           BANKMASK(CAP1CON), 0, a
#define CAP1M1                           BANKMASK(CAP1CON), 1, a
#define CAP1M2                           BANKMASK(CAP1CON), 2, a
#define CAP1M3                           BANKMASK(CAP1CON), 3, a
#define CAP1REN                          BANKMASK(CAP1CON), 6, a
#define CAP1TMR                          BANKMASK(CAP1CON), 5, a
#define CAP2M0                           BANKMASK(CAP2CON), 0, a
#define CAP2M1                           BANKMASK(CAP2CON), 1, a
#define CAP2M2                           BANKMASK(CAP2CON), 2, a
#define CAP2M3                           BANKMASK(CAP2CON), 3, a
#define CAP2REN                          BANKMASK(CAP2CON), 6, a
#define CAP2TMR                          BANKMASK(CAP2CON), 5, a
#define CAP3M0                           BANKMASK(CAP3CON), 0, a
#define CAP3M1                           BANKMASK(CAP3CON), 1, a
#define CAP3M2                           BANKMASK(CAP3CON), 2, a
#define CAP3M3                           BANKMASK(CAP3CON), 3, a
#define CAP3REN                          BANKMASK(CAP3CON), 6, a
#define CAP3TMR                          BANKMASK(CAP3CON), 5, a
#define CARRY                            BANKMASK(STATUS), 0, a
#define CCP1                             BANKMASK(PORTC), 2, a
#define CCP10                            BANKMASK(PORTE), 2, a
#define CCP1IE                           BANKMASK(PIE1), 2, a
#define CCP1IF                           BANKMASK(PIR1), 2, a
#define CCP1IP                           BANKMASK(IPR1), 2, a
#define CCP1M0                           BANKMASK(CCP1CON), 0, a
#define CCP1M1                           BANKMASK(CCP1CON), 1, a
#define CCP1M2                           BANKMASK(CCP1CON), 2, a
#define CCP1M3                           BANKMASK(CCP1CON), 3, a
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
#define CCP2X                            BANKMASK(CCP2CON), 5, a
#define CCP2Y                            BANKMASK(CCP2CON), 4, a
#define CCP2_PA2                         BANKMASK(PORTB), 3, a
#define CCP9E                            BANKMASK(PORTE), 3, a
#define CFGS                             BANKMASK(EECON1), 6, a
#define CHSN3                            BANKMASK(ADCON1), 3, a
#define CK                               BANKMASK(PORTC), 6, a
#define CKE                              BANKMASK(SSPSTAT), 6, a
#define CKP                              BANKMASK(SSPCON), 4, a
#define CLKI                             BANKMASK(PORTA), 7, a
#define CLKO                             BANKMASK(PORTA), 6, a
#define CREN                             BANKMASK(RCSTA), 4, a
#define CS                               BANKMASK(PORTE), 2, a
#define CSRC                             BANKMASK(TXSTA), 7, a
#define CSRC1                            BANKMASK(TXSTA), 7, a
#define DA                               BANKMASK(SSPSTAT), 5, a
#define DATA_ADDRESS                     BANKMASK(SSPSTAT), 5, a
#define DC                               BANKMASK(STATUS), 1, a
#define DC1B0                            BANKMASK(CCP1CON), 4, a
#define DC1B1                            BANKMASK(CCP1CON), 5, a
#define DC2B0                            BANKMASK(CCP2CON), 4, a
#define DC2B1                            BANKMASK(CCP2CON), 5, a
#define DONE                             BANKMASK(ADCON0), 1, a
#define DOWN                             BANKMASK(QEICON), 5, a
#define DT                               BANKMASK(PORTC), 7, a
#define DT0                              BANKMASK(DTCON), 0, a
#define DT1                              BANKMASK(DTCON), 1, a
#define DT2                              BANKMASK(DTCON), 2, a
#define DT3                              BANKMASK(DTCON), 3, a
#define DT4                              BANKMASK(DTCON), 4, a
#define DT5                              BANKMASK(DTCON), 5, a
#define DTA0                             BANKMASK(DTCON), 0, a
#define DTA1                             BANKMASK(DTCON), 1, a
#define DTA2                             BANKMASK(DTCON), 2, a
#define DTA3                             BANKMASK(DTCON), 3, a
#define DTA4                             BANKMASK(DTCON), 4, a
#define DTA5                             BANKMASK(DTCON), 5, a
#define DTAPS0                           BANKMASK(DTCON), 6, a
#define DTAPS1                           BANKMASK(DTCON), 7, a
#define DTPS0                            BANKMASK(DTCON), 6, a
#define DTPS1                            BANKMASK(DTCON), 7, a
#define D_A                              BANKMASK(SSPSTAT), 5, a
#define D_NOT_A                          BANKMASK(SSPSTAT), 5, a
#define D_nA                             BANKMASK(SSPSTAT), 5, a
#define EBDIS                            BANKMASK(PR2), 7, a
#define EEFS                             BANKMASK(EECON1), 6, a
#define EEIE                             BANKMASK(PIE2), 4, a
#define EEIF                             BANKMASK(PIR2), 4, a
#define EEIP                             BANKMASK(IPR2), 4, a
#define EEPGD                            BANKMASK(EECON1), 7, a
#define FERR                             BANKMASK(RCSTA), 2, a
#define FFOVFL                           BANKMASK(ADCON1), 2, a
#define FIFOEN                           BANKMASK(ADCON1), 4, a
#define FLT1EN                           BANKMASK(DFLTCON), 3, a
#define FLT2EN                           BANKMASK(DFLTCON), 4, a
#define FLT3EN                           BANKMASK(DFLTCON), 5, a
#define FLT4EN                           BANKMASK(DFLTCON), 6, a
#define FLTA                             BANKMASK(PORTC), 1, a
#define FLTAEN                           BANKMASK(FLTCONFIG), 0, a
#define FLTAMOD                          BANKMASK(FLTCONFIG), 1, a
#define FLTAS                            BANKMASK(FLTCONFIG), 2, a
#define FLTB                             BANKMASK(PORTC), 2, a
#define FLTBEN                           BANKMASK(FLTCONFIG), 4, a
#define FLTBMOD                          BANKMASK(FLTCONFIG), 5, a
#define FLTBS                            BANKMASK(FLTCONFIG), 6, a
#define FLTCK0                           BANKMASK(DFLTCON), 0, a
#define FLTCK1                           BANKMASK(DFLTCON), 1, a
#define FLTCK2                           BANKMASK(DFLTCON), 2, a
#define FLTCON                           BANKMASK(FLTCONFIG), 3, a
#define FLTS                             BANKMASK(OSCCON), 2, a
#define FREE                             BANKMASK(EECON1), 4, a
#define GASEL0                           BANKMASK(ADCHS), 0, a
#define GASEL1                           BANKMASK(ADCHS), 1, a
#define GBSEL0                           BANKMASK(ADCHS), 4, a
#define GBSEL1                           BANKMASK(ADCHS), 5, a
#define GCSEL0                           BANKMASK(ADCHS), 2, a
#define GCSEL1                           BANKMASK(ADCHS), 3, a
#define GDSEL0                           BANKMASK(ADCHS), 6, a
#define GDSEL1                           BANKMASK(ADCHS), 7, a
#define GIE                              BANKMASK(INTCON), 7, a
#define GIEH                             BANKMASK(INTCON), 7, a
#define GIEL                             BANKMASK(INTCON), 6, a
#define GIE_GIEH                         BANKMASK(INTCON), 7, a
#define GO                               BANKMASK(ADCON0), 1, a
#define GODONE                           BANKMASK(ADCON0), 1, a
#define GO_DONE                          BANKMASK(ADCON0), 1, a
#define GO_NOT_DONE                      BANKMASK(ADCON0), 1, a
#define GO_nDONE                         BANKMASK(ADCON0), 1, a
#define IC1IE                            BANKMASK(PIE3), 1, a
#define IC1IF                            BANKMASK(PIR3), 1, a
#define IC1IP                            BANKMASK(IPR3), 1, a
#define IC2QEIE                          BANKMASK(PIE3), 2, a
#define IC2QEIF                          BANKMASK(PIR3), 2, a
#define IC2QEIP                          BANKMASK(IPR3), 2, a
#define IC3DRIE                          BANKMASK(PIE3), 3, a
#define IC3DRIF                          BANKMASK(PIR3), 3, a
#define IC3DRIP                          BANKMASK(IPR3), 3, a
#define IDLEN                            BANKMASK(OSCCON), 7, a
#define INT0                             BANKMASK(PORTC), 3, a
#define INT0E                            BANKMASK(INTCON), 4, a
#define INT0F                            BANKMASK(INTCON), 1, a
#define INT0IE                           BANKMASK(INTCON), 4, a
#define INT0IF                           BANKMASK(INTCON), 1, a
#define INT1                             BANKMASK(PORTC), 4, a
#define INT1E                            BANKMASK(INTCON3), 3, a
#define INT1F                            BANKMASK(INTCON3), 0, a
#define INT1IE                           BANKMASK(INTCON3), 3, a
#define INT1IF                           BANKMASK(INTCON3), 0, a
#define INT1IP                           BANKMASK(INTCON3), 6, a
#define INT1P                            BANKMASK(INTCON3), 6, a
#define INT2                             BANKMASK(PORTC), 5, a
#define INT2E                            BANKMASK(INTCON3), 4, a
#define INT2F                            BANKMASK(INTCON3), 1, a
#define INT2IE                           BANKMASK(INTCON3), 4, a
#define INT2IF                           BANKMASK(INTCON3), 1, a
#define INT2IP                           BANKMASK(INTCON3), 7, a
#define INT2P                            BANKMASK(INTCON3), 7, a
#define INTEDG0                          BANKMASK(INTCON2), 6, a
#define INTEDG1                          BANKMASK(INTCON2), 5, a
#define INTEDG2                          BANKMASK(INTCON2), 4, a
#define IOFS                             BANKMASK(OSCCON), 2, a
#define IPEN                             BANKMASK(RCON), 7, a
#define IRCF0                            BANKMASK(OSCCON), 4, a
#define IRCF1                            BANKMASK(OSCCON), 5, a
#define IRCF2                            BANKMASK(OSCCON), 6, a
#define IRVST                            BANKMASK(LVDCON), 5, a
#define IVRST                            BANKMASK(LVDCON), 5, a
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
#define LC3                              BANKMASK(LATC), 3, a
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
#define LVDEN                            BANKMASK(LVDCON), 4, a
#define LVDIE                            BANKMASK(PIE2), 2, a
#define LVDIF                            BANKMASK(PIR2), 2, a
#define LVDIN                            BANKMASK(PORTA), 5, a
#define LVDIP                            BANKMASK(IPR2), 2, a
#define LVDL0                            BANKMASK(LVDCON), 0, a
#define LVDL1                            BANKMASK(LVDCON), 1, a
#define LVDL2                            BANKMASK(LVDCON), 2, a
#define LVDL3                            BANKMASK(LVDCON), 3, a
#define MCLR                             BANKMASK(PORTE), 3, a
#define NEGATIVE                         BANKMASK(STATUS), 4, a
#define NOT_A                            BANKMASK(SSPSTAT), 5, a
#define NOT_ADDRESS                      BANKMASK(SSPSTAT), 5, a
#define NOT_BOR                          BANKMASK(RCON), 0, a
#define NOT_DONE                         BANKMASK(ADCON0), 1, a
#define NOT_DOWN                         BANKMASK(QEICON), 5, a
#define NOT_FLTA                         BANKMASK(PORTC), 1, a
#define NOT_FLTB                         BANKMASK(PORTC), 2, a
#define NOT_IPEN                         BANKMASK(RCON), 7, a
#define NOT_MCLR                         BANKMASK(PORTE), 3, a
#define NOT_PD                           BANKMASK(RCON), 2, a
#define NOT_POR                          BANKMASK(RCON), 1, a
#define NOT_RBPU                         BANKMASK(INTCON2), 7, a
#define NOT_RESEN                        BANKMASK(T5CON), 6, a
#define NOT_RI                           BANKMASK(RCON), 4, a
#define NOT_SS                           BANKMASK(PORTC), 6, a
#define NOT_T1SYNC                       BANKMASK(T1CON), 2, a
#define NOT_T5SYNC                       BANKMASK(T5CON), 2, a
#define NOT_TO                           BANKMASK(RCON), 3, a
#define NOT_VELM                         BANKMASK(QEICON), 7, a
#define NOT_W                            BANKMASK(SSPSTAT), 2, a
#define NOT_WRITE                        BANKMASK(SSPSTAT), 2, a
#define OERR                             BANKMASK(RCSTA), 1, a
#define OSC1                             BANKMASK(PORTA), 7, a
#define OSC2                             BANKMASK(PORTA), 6, a
#define OSFIE                            BANKMASK(PIE2), 7, a
#define OSFIF                            BANKMASK(PIR2), 7, a
#define OSFIP                            BANKMASK(IPR2), 7, a
#define OSTS                             BANKMASK(OSCCON), 3, a
#define OSYNC                            BANKMASK(PWMCON1), 0, a
#define OV                               BANKMASK(STATUS), 3, a
#define OVERFLOW                         BANKMASK(STATUS), 3, a
#define PA1                              BANKMASK(PORTC), 2, a
#define PA2                              BANKMASK(PORTC), 1, a
#define PB2                              BANKMASK(PORTE), 2, a
#define PC2                              BANKMASK(PORTE), 1, a
#define PC3E                             BANKMASK(PORTE), 3, a
#define PD                               BANKMASK(RCON), 2, a
#define PD2                              BANKMASK(PORTE), 0, a
#define PDEC0                            BANKMASK(QEICON), 0, a
#define PDEC1                            BANKMASK(QEICON), 1, a
#define PEIE                             BANKMASK(INTCON), 6, a
#define PEIE_GIEL                        BANKMASK(INTCON), 6, a
#define PMOD0                            BANKMASK(PWMCON0), 0, a
#define PMOD1                            BANKMASK(PWMCON0), 1, a
#define PMOD2                            BANKMASK(PWMCON0), 2, a
#define PMOD3                            BANKMASK(PWMCON0), 3, a
#define POR                              BANKMASK(RCON), 1, a
#define POUT0                            BANKMASK(OVDCONS), 0, a
#define POUT1                            BANKMASK(OVDCONS), 1, a
#define POUT2                            BANKMASK(OVDCONS), 2, a
#define POUT3                            BANKMASK(OVDCONS), 3, a
#define POUT4                            BANKMASK(OVDCONS), 4, a
#define POUT5                            BANKMASK(OVDCONS), 5, a
#define POUT6                            BANKMASK(OVDCONS), 6, a
#define POUT7                            BANKMASK(OVDCONS), 7, a
#define POVD0                            BANKMASK(OVDCOND), 0, a
#define POVD1                            BANKMASK(OVDCOND), 1, a
#define POVD2                            BANKMASK(OVDCOND), 2, a
#define POVD3                            BANKMASK(OVDCOND), 3, a
#define POVD4                            BANKMASK(OVDCOND), 4, a
#define POVD5                            BANKMASK(OVDCOND), 5, a
#define POVD6                            BANKMASK(OVDCOND), 6, a
#define POVD7                            BANKMASK(OVDCOND), 7, a
#define PSA                              BANKMASK(T0CON), 3, a
#define PTCKPS0                          BANKMASK(PTCON0), 2, a
#define PTCKPS1                          BANKMASK(PTCON0), 3, a
#define PTDIR                            BANKMASK(PTCON1), 6, a
#define PTEN                             BANKMASK(PTCON1), 7, a
#define PTIE                             BANKMASK(PIE3), 4, a
#define PTIF                             BANKMASK(PIR3), 4, a
#define PTIP                             BANKMASK(IPR3), 4, a
#define PTMOD0                           BANKMASK(PTCON0), 0, a
#define PTMOD1                           BANKMASK(PTCON0), 1, a
#define PTOPS0                           BANKMASK(PTCON0), 4, a
#define PTOPS1                           BANKMASK(PTCON0), 5, a
#define PTOPS2                           BANKMASK(PTCON0), 6, a
#define PTOPS3                           BANKMASK(PTCON0), 7, a
#define PWMEN0                           BANKMASK(PWMCON0), 4, a
#define PWMEN1                           BANKMASK(PWMCON0), 5, a
#define PWMEN2                           BANKMASK(PWMCON0), 6, a
#define QEIM0                            BANKMASK(QEICON), 2, a
#define QEIM1                            BANKMASK(QEICON), 3, a
#define QEIM2                            BANKMASK(QEICON), 4, a
#define QERR                             BANKMASK(QEICON), 6, a
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
#define RC3                              BANKMASK(PORTC), 3, a
#define RC4                              BANKMASK(PORTC), 4, a
#define RC5                              BANKMASK(PORTC), 5, a
#define RC6                              BANKMASK(PORTC), 6, a
#define RC7                              BANKMASK(PORTC), 7, a
#define RC8_9                            BANKMASK(RCSTA), 6, a
#define RC9                              BANKMASK(RCSTA), 6, a
#define RCD8                             BANKMASK(RCSTA), 0, a
#define RCIDL                            BANKMASK(BAUDCON), 6, a
#define RCIE                             BANKMASK(PIE1), 5, a
#define RCIF                             BANKMASK(PIR1), 5, a
#define RCIP                             BANKMASK(IPR1), 5, a
#define RCMT                             BANKMASK(BAUDCON), 6, a
#define RD                               BANKMASK(EECON1), 0, a
#define RD0                              BANKMASK(PORTD), 0, a
#define RD1                              BANKMASK(PORTD), 1, a
#define RD16                             BANKMASK(T1CON), 7, a
#define RD165                            BANKMASK(T5CON), 1, a
#define RD2                              BANKMASK(PORTD), 2, a
#define RD3                              BANKMASK(PORTD), 3, a
#define RD4                              BANKMASK(PORTD), 4, a
#define RD5                              BANKMASK(PORTD), 5, a
#define RD6                              BANKMASK(PORTD), 6, a
#define RD7                              BANKMASK(PORTD), 7, a
#define RDE                              BANKMASK(PORTE), 0, a
#define RE0                              BANKMASK(PORTE), 0, a
#define RE1                              BANKMASK(PORTE), 1, a
#define RE2                              BANKMASK(PORTE), 2, a
#define RE3                              BANKMASK(PORTE), 3, a
#define READ_WRITE                       BANKMASK(SSPSTAT), 2, a
#define RESEN                            BANKMASK(T5CON), 6, a
#define RI                               BANKMASK(RCON), 4, a
#define RJPU                             BANKMASK(PORTA), 7, a
#define RW                               BANKMASK(SSPSTAT), 2, a
#define RX                               BANKMASK(PORTC), 7, a
#define RX9                              BANKMASK(RCSTA), 6, a
#define RX9D                             BANKMASK(RCSTA), 0, a
#define RXB0IE                           BANKMASK(PIE3), 0, a
#define RXB1IE                           BANKMASK(PIE3), 1, a
#define RXBNIE                           BANKMASK(PIE3), 1, a
#define RXBNIF                           BANKMASK(PIR3), 1, a
#define RXBNIP                           BANKMASK(IPR3), 1, a
#define RXCKP                            BANKMASK(BAUDCON), 5, a
#define RXDTP                            BANKMASK(BAUDCON), 5, a
#define R_NOT_W                          BANKMASK(SSPSTAT), 2, a
#define R_W                              BANKMASK(SSPSTAT), 2, a
#define R_nW                             BANKMASK(SSPSTAT), 2, a
#define SASEL0                           BANKMASK(ADCHS), 0, a
#define SASEL1                           BANKMASK(ADCHS), 1, a
#define SBSEL0                           BANKMASK(ADCHS), 4, a
#define SBSEL1                           BANKMASK(ADCHS), 5, a
#define SCK                              BANKMASK(PORTC), 5, a
#define SCKP                             BANKMASK(BAUDCON), 4, a
#define SCL                              BANKMASK(PORTC), 5, a
#define SCS0                             BANKMASK(OSCCON), 0, a
#define SCS1                             BANKMASK(OSCCON), 1, a
#define SCSEL0                           BANKMASK(ADCHS), 2, a
#define SCSEL1                           BANKMASK(ADCHS), 3, a
#define SDA                              BANKMASK(PORTC), 4, a
#define SDI                              BANKMASK(PORTC), 4, a
#define SDO                              BANKMASK(PORTC), 7, a
#define SDSEL0                           BANKMASK(ADCHS), 6, a
#define SDSEL1                           BANKMASK(ADCHS), 7, a
#define SENDB                            BANKMASK(TXSTA), 3, a
#define SENDB1                           BANKMASK(TXSTA), 3, a
#define SEVOPS0                          BANKMASK(PWMCON1), 4, a
#define SEVOPS1                          BANKMASK(PWMCON1), 5, a
#define SEVOPS2                          BANKMASK(PWMCON1), 6, a
#define SEVOPS3                          BANKMASK(PWMCON1), 7, a
#define SEVTDIR                          BANKMASK(PWMCON1), 3, a
#define SMP                              BANKMASK(SSPSTAT), 7, a
#define SOSCEN                           BANKMASK(T1CON), 3, a
#define SOSCEN5                          BANKMASK(T5CON), 3, a
#define SPEN                             BANKMASK(RCSTA), 7, a
#define SREN                             BANKMASK(RCSTA), 5, a
#define SRENA                            BANKMASK(RCSTA), 5, a
#define SS                               BANKMASK(PORTC), 6, a
#define SS2                              BANKMASK(PORTD), 7, a
#define SSPEN                            BANKMASK(SSPCON), 5, a
#define SSPIE                            BANKMASK(PIE1), 3, a
#define SSPIF                            BANKMASK(PIR1), 3, a
#define SSPIP                            BANKMASK(IPR1), 3, a
#define SSPM0                            BANKMASK(SSPCON), 0, a
#define SSPM1                            BANKMASK(SSPCON), 1, a
#define SSPM2                            BANKMASK(SSPCON), 2, a
#define SSPM3                            BANKMASK(SSPCON), 3, a
#define SSPOV                            BANKMASK(SSPCON), 6, a
#define SSRC0                            BANKMASK(ADCON3), 0, a
#define SSRC1                            BANKMASK(ADCON3), 1, a
#define SSRC2                            BANKMASK(ADCON3), 2, a
#define SSRC3                            BANKMASK(ADCON3), 3, a
#define SSRC4                            BANKMASK(ADCON3), 4, a
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
#define SWDTEN                           BANKMASK(WDTCON), 0, a
#define SYNC                             BANKMASK(TXSTA), 4, a
#define SYNC1                            BANKMASK(TXSTA), 4, a
#define T016BIT                          BANKMASK(T0CON), 6, a
#define T0CKI                            BANKMASK(PORTC), 3, a
#define T0CS                             BANKMASK(T0CON), 5, a
#define T0IE                             BANKMASK(INTCON), 5, a
#define T0IF                             BANKMASK(INTCON), 2, a
#define T0IP                             BANKMASK(INTCON2), 2, a
#define T0PS0                            BANKMASK(T0CON), 0, a
#define T0PS1                            BANKMASK(T0CON), 1, a
#define T0PS2                            BANKMASK(T0CON), 2, a
#define T0PS3                            BANKMASK(T0CON), 3, a
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
#define T5CKI                            BANKMASK(PORTC), 3, a
#define T5MOD                            BANKMASK(T5CON), 5, a
#define T5PS0                            BANKMASK(T5CON), 3, a
#define T5PS1                            BANKMASK(T5CON), 4, a
#define T5SEN                            BANKMASK(T5CON), 7, a
#define T5SYNC                           BANKMASK(T5CON), 2, a
#define TBIE                             BANKMASK(PIE1), 4, a
#define TBIF                             BANKMASK(PIR1), 4, a
#define TBIP                             BANKMASK(IPR1), 4, a
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
#define TMR5CS                           BANKMASK(T5CON), 1, a
#define TMR5IE                           BANKMASK(PIE3), 0, a
#define TMR5IF                           BANKMASK(PIR3), 0, a
#define TMR5IP                           BANKMASK(IPR3), 0, a
#define TMR5ON                           BANKMASK(T5CON), 0, a
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
#define TRISE2                           BANKMASK(TRISE), 2, a
#define TRMT                             BANKMASK(TXSTA), 1, a
#define TRMT1                            BANKMASK(TXSTA), 1, a
#define TUN0                             BANKMASK(OSCTUNE), 0, a
#define TUN1                             BANKMASK(OSCTUNE), 1, a
#define TUN2                             BANKMASK(OSCTUNE), 2, a
#define TUN3                             BANKMASK(OSCTUNE), 3, a
#define TUN4                             BANKMASK(OSCTUNE), 4, a
#define TUN5                             BANKMASK(OSCTUNE), 5, a
#define TX                               BANKMASK(PORTC), 6, a
#define TX1IE                            BANKMASK(PIE1), 4, a
#define TX1IF                            BANKMASK(PIR1), 4, a
#define TX1IP                            BANKMASK(IPR1), 4, a
#define TX8_9                            BANKMASK(TXSTA), 6, a
#define TX9                              BANKMASK(TXSTA), 6, a
#define TX91                             BANKMASK(TXSTA), 6, a
#define TX9D                             BANKMASK(TXSTA), 0, a
#define TX9D1                            BANKMASK(TXSTA), 0, a
#define TXB0IE                           BANKMASK(PIE3), 2, a
#define TXB1IE                           BANKMASK(PIE3), 3, a
#define TXB2IE                           BANKMASK(PIE3), 4, a
#define TXBNIE                           BANKMASK(PIE3), 4, a
#define TXBNIF                           BANKMASK(PIR3), 4, a
#define TXBNIP                           BANKMASK(IPR3), 4, a
#define TXCKP                            BANKMASK(BAUDCON), 4, a
#define TXD8                             BANKMASK(TXSTA), 0, a
#define TXEN                             BANKMASK(TXSTA), 5, a
#define TXEN1                            BANKMASK(TXSTA), 5, a
#define TXIE                             BANKMASK(PIE1), 4, a
#define TXIF                             BANKMASK(PIR1), 4, a
#define TXIP                             BANKMASK(IPR1), 4, a
#define UA                               BANKMASK(SSPSTAT), 1, a
#define UDIS                             BANKMASK(PWMCON1), 1, a
#define ULPWUIN                          BANKMASK(PORTA), 0, a
#define UP                               BANKMASK(QEICON), 5, a
#define UPDOWN                           BANKMASK(QEICON), 5, a
#define UP_DOWN                          BANKMASK(QEICON), 5, a
#define UP_NOT_DOWN                      BANKMASK(QEICON), 5, a
#define UP_nDOWN                         BANKMASK(QEICON), 5, a
#define VCFG0                            BANKMASK(ADCON1), 6, a
#define VCFG01                           BANKMASK(ADCON1), 4, a
#define VCFG1                            BANKMASK(ADCON1), 7, a
#define VELM                             BANKMASK(QEICON), 7, a
#define VREFM                            BANKMASK(PORTA), 2, a
#define VREFP                            BANKMASK(PORTA), 3, a
#define W4E                              BANKMASK(BAUDCON), 1, a
#define WAIT0                            BANKMASK(PR2), 4, a
#define WAIT1                            BANKMASK(PR2), 5, a
#define WCOL                             BANKMASK(SSPCON), 7, a
#define WDTW                             BANKMASK(WDTCON), 7, a
#define WM0                              BANKMASK(PR2), 0, a
#define WM1                              BANKMASK(PR2), 1, a
#define WR                               BANKMASK(EECON1), 1, a
#define WRE                              BANKMASK(PORTE), 1, a
#define WREN                             BANKMASK(EECON1), 2, a
#define WRERR                            BANKMASK(EECON1), 3, a
#define WUE                              BANKMASK(BAUDCON), 1, a
#define ZERO                             BANKMASK(STATUS), 2, a
#define nA                               BANKMASK(SSPSTAT), 5, a
#define nADDRESS                         BANKMASK(SSPSTAT), 5, a
#define nBOR                             BANKMASK(RCON), 0, a
#define nDONE                            BANKMASK(ADCON0), 1, a
#define nDOWN                            BANKMASK(QEICON), 5, a
#define nFLTA                            BANKMASK(PORTC), 1, a
#define nFLTB                            BANKMASK(PORTC), 2, a
#define nIPEN                            BANKMASK(RCON), 7, a
#define nMCLR                            BANKMASK(PORTE), 3, a
#define nPD                              BANKMASK(RCON), 2, a
#define nPOR                             BANKMASK(RCON), 1, a
#define nRBPU                            BANKMASK(INTCON2), 7, a
#define nRESEN                           BANKMASK(T5CON), 6, a
#define nRI                              BANKMASK(RCON), 4, a
#define nSS                              BANKMASK(PORTC), 6, a
#define nT1SYNC                          BANKMASK(T1CON), 2, a
#define nT5SYNC                          BANKMASK(T5CON), 2, a
#define nTO                              BANKMASK(RCON), 3, a
#define nVELM                            BANKMASK(QEICON), 7, a
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
psect udata,class=RAM,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,reloc=2
psect data,class=CONST,space=SPACE_CODE,reloc=2,noexec
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=1,noexec

#endif // _XC_INC_

#endif // _PIC18F4431_INC_
