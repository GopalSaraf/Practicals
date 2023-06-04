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

#ifndef _PIC18F85K22_INC_
#define _PIC18F85K22_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F85K22
 */

/*
 * Device Registers
 */

// Register: PMD3
#define PMD3 PMD3
PMD3                                     equ 0F16h
// bitfield definitions
PMD3_CCP4MD_POSN                         equ 0001h
PMD3_CCP4MD_POSITION                     equ 0001h
PMD3_CCP4MD_SIZE                         equ 0001h
PMD3_CCP4MD_LENGTH                       equ 0001h
PMD3_CCP4MD_MASK                         equ 0002h
PMD3_CCP5MD_POSN                         equ 0002h
PMD3_CCP5MD_POSITION                     equ 0002h
PMD3_CCP5MD_SIZE                         equ 0001h
PMD3_CCP5MD_LENGTH                       equ 0001h
PMD3_CCP5MD_MASK                         equ 0004h
PMD3_CCP6MD_POSN                         equ 0003h
PMD3_CCP6MD_POSITION                     equ 0003h
PMD3_CCP6MD_SIZE                         equ 0001h
PMD3_CCP6MD_LENGTH                       equ 0001h
PMD3_CCP6MD_MASK                         equ 0008h
PMD3_CCP7MD_POSN                         equ 0004h
PMD3_CCP7MD_POSITION                     equ 0004h
PMD3_CCP7MD_SIZE                         equ 0001h
PMD3_CCP7MD_LENGTH                       equ 0001h
PMD3_CCP7MD_MASK                         equ 0010h
PMD3_CCP8MD_POSN                         equ 0005h
PMD3_CCP8MD_POSITION                     equ 0005h
PMD3_CCP8MD_SIZE                         equ 0001h
PMD3_CCP8MD_LENGTH                       equ 0001h
PMD3_CCP8MD_MASK                         equ 0020h

// Register: PMD2
#define PMD2 PMD2
PMD2                                     equ 0F17h
// bitfield definitions
PMD2_CMP1MD_POSN                         equ 0000h
PMD2_CMP1MD_POSITION                     equ 0000h
PMD2_CMP1MD_SIZE                         equ 0001h
PMD2_CMP1MD_LENGTH                       equ 0001h
PMD2_CMP1MD_MASK                         equ 0001h
PMD2_CMP2MD_POSN                         equ 0001h
PMD2_CMP2MD_POSITION                     equ 0001h
PMD2_CMP2MD_SIZE                         equ 0001h
PMD2_CMP2MD_LENGTH                       equ 0001h
PMD2_CMP2MD_MASK                         equ 0002h
PMD2_CMP3MD_POSN                         equ 0002h
PMD2_CMP3MD_POSITION                     equ 0002h
PMD2_CMP3MD_SIZE                         equ 0001h
PMD2_CMP3MD_LENGTH                       equ 0001h
PMD2_CMP3MD_MASK                         equ 0004h
PMD2_TMR5MD_POSN                         equ 0003h
PMD2_TMR5MD_POSITION                     equ 0003h
PMD2_TMR5MD_SIZE                         equ 0001h
PMD2_TMR5MD_LENGTH                       equ 0001h
PMD2_TMR5MD_MASK                         equ 0008h
PMD2_TMR6MD_POSN                         equ 0004h
PMD2_TMR6MD_POSITION                     equ 0004h
PMD2_TMR6MD_SIZE                         equ 0001h
PMD2_TMR6MD_LENGTH                       equ 0001h
PMD2_TMR6MD_MASK                         equ 0010h
PMD2_TMR8MD_POSN                         equ 0006h
PMD2_TMR8MD_POSITION                     equ 0006h
PMD2_TMR8MD_SIZE                         equ 0001h
PMD2_TMR8MD_LENGTH                       equ 0001h
PMD2_TMR8MD_MASK                         equ 0040h

// Register: PMD1
#define PMD1 PMD1
PMD1                                     equ 0F18h
// bitfield definitions
PMD1_EMBMD_POSN                          equ 0000h
PMD1_EMBMD_POSITION                      equ 0000h
PMD1_EMBMD_SIZE                          equ 0001h
PMD1_EMBMD_LENGTH                        equ 0001h
PMD1_EMBMD_MASK                          equ 0001h
PMD1_TMR1MD_POSN                         equ 0001h
PMD1_TMR1MD_POSITION                     equ 0001h
PMD1_TMR1MD_SIZE                         equ 0001h
PMD1_TMR1MD_LENGTH                       equ 0001h
PMD1_TMR1MD_MASK                         equ 0002h
PMD1_TMR2MD_POSN                         equ 0002h
PMD1_TMR2MD_POSITION                     equ 0002h
PMD1_TMR2MD_SIZE                         equ 0001h
PMD1_TMR2MD_LENGTH                       equ 0001h
PMD1_TMR2MD_MASK                         equ 0004h
PMD1_TMR3MD_POSN                         equ 0003h
PMD1_TMR3MD_POSITION                     equ 0003h
PMD1_TMR3MD_SIZE                         equ 0001h
PMD1_TMR3MD_LENGTH                       equ 0001h
PMD1_TMR3MD_MASK                         equ 0008h
PMD1_TMR4MD_POSN                         equ 0004h
PMD1_TMR4MD_POSITION                     equ 0004h
PMD1_TMR4MD_SIZE                         equ 0001h
PMD1_TMR4MD_LENGTH                       equ 0001h
PMD1_TMR4MD_MASK                         equ 0010h
PMD1_RTCCMD_POSN                         equ 0005h
PMD1_RTCCMD_POSITION                     equ 0005h
PMD1_RTCCMD_SIZE                         equ 0001h
PMD1_RTCCMD_LENGTH                       equ 0001h
PMD1_RTCCMD_MASK                         equ 0020h
PMD1_CTMUMD_POSN                         equ 0006h
PMD1_CTMUMD_POSITION                     equ 0006h
PMD1_CTMUMD_SIZE                         equ 0001h
PMD1_CTMUMD_LENGTH                       equ 0001h
PMD1_CTMUMD_MASK                         equ 0040h
PMD1_PSPMD_POSN                          equ 0007h
PMD1_PSPMD_POSITION                      equ 0007h
PMD1_PSPMD_SIZE                          equ 0001h
PMD1_PSPMD_LENGTH                        equ 0001h
PMD1_PSPMD_MASK                          equ 0080h

// Register: PMD0
#define PMD0 PMD0
PMD0                                     equ 0F19h
// bitfield definitions
PMD0_ADCMD_POSN                          equ 0000h
PMD0_ADCMD_POSITION                      equ 0000h
PMD0_ADCMD_SIZE                          equ 0001h
PMD0_ADCMD_LENGTH                        equ 0001h
PMD0_ADCMD_MASK                          equ 0001h
PMD0_SSP1MD_POSN                         equ 0001h
PMD0_SSP1MD_POSITION                     equ 0001h
PMD0_SSP1MD_SIZE                         equ 0001h
PMD0_SSP1MD_LENGTH                       equ 0001h
PMD0_SSP1MD_MASK                         equ 0002h
PMD0_SSP2MD_POSN                         equ 0002h
PMD0_SSP2MD_POSITION                     equ 0002h
PMD0_SSP2MD_SIZE                         equ 0001h
PMD0_SSP2MD_LENGTH                       equ 0001h
PMD0_SSP2MD_MASK                         equ 0004h
PMD0_UART1MD_POSN                        equ 0003h
PMD0_UART1MD_POSITION                    equ 0003h
PMD0_UART1MD_SIZE                        equ 0001h
PMD0_UART1MD_LENGTH                      equ 0001h
PMD0_UART1MD_MASK                        equ 0008h
PMD0_UART2MD_POSN                        equ 0004h
PMD0_UART2MD_POSITION                    equ 0004h
PMD0_UART2MD_SIZE                        equ 0001h
PMD0_UART2MD_LENGTH                      equ 0001h
PMD0_UART2MD_MASK                        equ 0010h
PMD0_CCP1MD_POSN                         equ 0005h
PMD0_CCP1MD_POSITION                     equ 0005h
PMD0_CCP1MD_SIZE                         equ 0001h
PMD0_CCP1MD_LENGTH                       equ 0001h
PMD0_CCP1MD_MASK                         equ 0020h
PMD0_CCP2MD_POSN                         equ 0006h
PMD0_CCP2MD_POSITION                     equ 0006h
PMD0_CCP2MD_SIZE                         equ 0001h
PMD0_CCP2MD_LENGTH                       equ 0001h
PMD0_CCP2MD_MASK                         equ 0040h
PMD0_CCP3MD_POSN                         equ 0007h
PMD0_CCP3MD_POSITION                     equ 0007h
PMD0_CCP3MD_SIZE                         equ 0001h
PMD0_CCP3MD_LENGTH                       equ 0001h
PMD0_CCP3MD_MASK                         equ 0080h
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

// Register: PSTR3CON
#define PSTR3CON PSTR3CON
PSTR3CON                                 equ 0F1Ah
// bitfield definitions
PSTR3CON_STRA_POSN                       equ 0000h
PSTR3CON_STRA_POSITION                   equ 0000h
PSTR3CON_STRA_SIZE                       equ 0001h
PSTR3CON_STRA_LENGTH                     equ 0001h
PSTR3CON_STRA_MASK                       equ 0001h
PSTR3CON_STRB_POSN                       equ 0001h
PSTR3CON_STRB_POSITION                   equ 0001h
PSTR3CON_STRB_SIZE                       equ 0001h
PSTR3CON_STRB_LENGTH                     equ 0001h
PSTR3CON_STRB_MASK                       equ 0002h
PSTR3CON_STRC_POSN                       equ 0002h
PSTR3CON_STRC_POSITION                   equ 0002h
PSTR3CON_STRC_SIZE                       equ 0001h
PSTR3CON_STRC_LENGTH                     equ 0001h
PSTR3CON_STRC_MASK                       equ 0004h
PSTR3CON_STRD_POSN                       equ 0003h
PSTR3CON_STRD_POSITION                   equ 0003h
PSTR3CON_STRD_SIZE                       equ 0001h
PSTR3CON_STRD_LENGTH                     equ 0001h
PSTR3CON_STRD_MASK                       equ 0008h
PSTR3CON_STRSYNC_POSN                    equ 0004h
PSTR3CON_STRSYNC_POSITION                equ 0004h
PSTR3CON_STRSYNC_SIZE                    equ 0001h
PSTR3CON_STRSYNC_LENGTH                  equ 0001h
PSTR3CON_STRSYNC_MASK                    equ 0010h
PSTR3CON_CMPL_POSN                       equ 0006h
PSTR3CON_CMPL_POSITION                   equ 0006h
PSTR3CON_CMPL_SIZE                       equ 0002h
PSTR3CON_CMPL_LENGTH                     equ 0002h
PSTR3CON_CMPL_MASK                       equ 00C0h
PSTR3CON_CMPL0_POSN                      equ 0006h
PSTR3CON_CMPL0_POSITION                  equ 0006h
PSTR3CON_CMPL0_SIZE                      equ 0001h
PSTR3CON_CMPL0_LENGTH                    equ 0001h
PSTR3CON_CMPL0_MASK                      equ 0040h
PSTR3CON_CMPL1_POSN                      equ 0007h
PSTR3CON_CMPL1_POSITION                  equ 0007h
PSTR3CON_CMPL1_SIZE                      equ 0001h
PSTR3CON_CMPL1_LENGTH                    equ 0001h
PSTR3CON_CMPL1_MASK                      equ 0080h
PSTR3CON_STRA3_POSN                      equ 0000h
PSTR3CON_STRA3_POSITION                  equ 0000h
PSTR3CON_STRA3_SIZE                      equ 0001h
PSTR3CON_STRA3_LENGTH                    equ 0001h
PSTR3CON_STRA3_MASK                      equ 0001h
PSTR3CON_STRB3_POSN                      equ 0001h
PSTR3CON_STRB3_POSITION                  equ 0001h
PSTR3CON_STRB3_SIZE                      equ 0001h
PSTR3CON_STRB3_LENGTH                    equ 0001h
PSTR3CON_STRB3_MASK                      equ 0002h
PSTR3CON_STRC3_POSN                      equ 0002h
PSTR3CON_STRC3_POSITION                  equ 0002h
PSTR3CON_STRC3_SIZE                      equ 0001h
PSTR3CON_STRC3_LENGTH                    equ 0001h
PSTR3CON_STRC3_MASK                      equ 0004h
PSTR3CON_STRD3_POSN                      equ 0003h
PSTR3CON_STRD3_POSITION                  equ 0003h
PSTR3CON_STRD3_SIZE                      equ 0001h
PSTR3CON_STRD3_LENGTH                    equ 0001h
PSTR3CON_STRD3_MASK                      equ 0008h
PSTR3CON_STRSYNC3_POSN                   equ 0004h
PSTR3CON_STRSYNC3_POSITION               equ 0004h
PSTR3CON_STRSYNC3_SIZE                   equ 0001h
PSTR3CON_STRSYNC3_LENGTH                 equ 0001h
PSTR3CON_STRSYNC3_MASK                   equ 0010h
PSTR3CON_CMPL03_POSN                     equ 0006h
PSTR3CON_CMPL03_POSITION                 equ 0006h
PSTR3CON_CMPL03_SIZE                     equ 0001h
PSTR3CON_CMPL03_LENGTH                   equ 0001h
PSTR3CON_CMPL03_MASK                     equ 0040h
PSTR3CON_CMPL13_POSN                     equ 0007h
PSTR3CON_CMPL13_POSITION                 equ 0007h
PSTR3CON_CMPL13_SIZE                     equ 0001h
PSTR3CON_CMPL13_LENGTH                   equ 0001h
PSTR3CON_CMPL13_MASK                     equ 0080h

// Register: PSTR2CON
#define PSTR2CON PSTR2CON
PSTR2CON                                 equ 0F1Bh
// bitfield definitions
PSTR2CON_STRA_POSN                       equ 0000h
PSTR2CON_STRA_POSITION                   equ 0000h
PSTR2CON_STRA_SIZE                       equ 0001h
PSTR2CON_STRA_LENGTH                     equ 0001h
PSTR2CON_STRA_MASK                       equ 0001h
PSTR2CON_STRB_POSN                       equ 0001h
PSTR2CON_STRB_POSITION                   equ 0001h
PSTR2CON_STRB_SIZE                       equ 0001h
PSTR2CON_STRB_LENGTH                     equ 0001h
PSTR2CON_STRB_MASK                       equ 0002h
PSTR2CON_STRC_POSN                       equ 0002h
PSTR2CON_STRC_POSITION                   equ 0002h
PSTR2CON_STRC_SIZE                       equ 0001h
PSTR2CON_STRC_LENGTH                     equ 0001h
PSTR2CON_STRC_MASK                       equ 0004h
PSTR2CON_STRD_POSN                       equ 0003h
PSTR2CON_STRD_POSITION                   equ 0003h
PSTR2CON_STRD_SIZE                       equ 0001h
PSTR2CON_STRD_LENGTH                     equ 0001h
PSTR2CON_STRD_MASK                       equ 0008h
PSTR2CON_STRSYNC_POSN                    equ 0004h
PSTR2CON_STRSYNC_POSITION                equ 0004h
PSTR2CON_STRSYNC_SIZE                    equ 0001h
PSTR2CON_STRSYNC_LENGTH                  equ 0001h
PSTR2CON_STRSYNC_MASK                    equ 0010h
PSTR2CON_CMPL_POSN                       equ 0006h
PSTR2CON_CMPL_POSITION                   equ 0006h
PSTR2CON_CMPL_SIZE                       equ 0002h
PSTR2CON_CMPL_LENGTH                     equ 0002h
PSTR2CON_CMPL_MASK                       equ 00C0h
PSTR2CON_CMPL0_POSN                      equ 0006h
PSTR2CON_CMPL0_POSITION                  equ 0006h
PSTR2CON_CMPL0_SIZE                      equ 0001h
PSTR2CON_CMPL0_LENGTH                    equ 0001h
PSTR2CON_CMPL0_MASK                      equ 0040h
PSTR2CON_CMPL1_POSN                      equ 0007h
PSTR2CON_CMPL1_POSITION                  equ 0007h
PSTR2CON_CMPL1_SIZE                      equ 0001h
PSTR2CON_CMPL1_LENGTH                    equ 0001h
PSTR2CON_CMPL1_MASK                      equ 0080h
PSTR2CON_P2DC02_POSN                     equ 0000h
PSTR2CON_P2DC02_POSITION                 equ 0000h
PSTR2CON_P2DC02_SIZE                     equ 0001h
PSTR2CON_P2DC02_LENGTH                   equ 0001h
PSTR2CON_P2DC02_MASK                     equ 0001h
PSTR2CON_P2DC12_POSN                     equ 0001h
PSTR2CON_P2DC12_POSITION                 equ 0001h
PSTR2CON_P2DC12_SIZE                     equ 0001h
PSTR2CON_P2DC12_LENGTH                   equ 0001h
PSTR2CON_P2DC12_MASK                     equ 0002h
PSTR2CON_P2DC22_POSN                     equ 0002h
PSTR2CON_P2DC22_POSITION                 equ 0002h
PSTR2CON_P2DC22_SIZE                     equ 0001h
PSTR2CON_P2DC22_LENGTH                   equ 0001h
PSTR2CON_P2DC22_MASK                     equ 0004h
PSTR2CON_P2DC32_POSN                     equ 0003h
PSTR2CON_P2DC32_POSITION                 equ 0003h
PSTR2CON_P2DC32_SIZE                     equ 0001h
PSTR2CON_P2DC32_LENGTH                   equ 0001h
PSTR2CON_P2DC32_MASK                     equ 0008h
PSTR2CON_P2DC42_POSN                     equ 0004h
PSTR2CON_P2DC42_POSITION                 equ 0004h
PSTR2CON_P2DC42_SIZE                     equ 0001h
PSTR2CON_P2DC42_LENGTH                   equ 0001h
PSTR2CON_P2DC42_MASK                     equ 0010h
PSTR2CON_CMPL02_POSN                     equ 0006h
PSTR2CON_CMPL02_POSITION                 equ 0006h
PSTR2CON_CMPL02_SIZE                     equ 0001h
PSTR2CON_CMPL02_LENGTH                   equ 0001h
PSTR2CON_CMPL02_MASK                     equ 0040h
PSTR2CON_CMPL12_POSN                     equ 0007h
PSTR2CON_CMPL12_POSITION                 equ 0007h
PSTR2CON_CMPL12_SIZE                     equ 0001h
PSTR2CON_CMPL12_LENGTH                   equ 0001h
PSTR2CON_CMPL12_MASK                     equ 0080h
PSTR2CON_P2DC0CON_POSN                   equ 0000h
PSTR2CON_P2DC0CON_POSITION               equ 0000h
PSTR2CON_P2DC0CON_SIZE                   equ 0001h
PSTR2CON_P2DC0CON_LENGTH                 equ 0001h
PSTR2CON_P2DC0CON_MASK                   equ 0001h
PSTR2CON_P2DC1CON_POSN                   equ 0001h
PSTR2CON_P2DC1CON_POSITION               equ 0001h
PSTR2CON_P2DC1CON_SIZE                   equ 0001h
PSTR2CON_P2DC1CON_LENGTH                 equ 0001h
PSTR2CON_P2DC1CON_MASK                   equ 0002h
PSTR2CON_P2DC2CON_POSN                   equ 0002h
PSTR2CON_P2DC2CON_POSITION               equ 0002h
PSTR2CON_P2DC2CON_SIZE                   equ 0001h
PSTR2CON_P2DC2CON_LENGTH                 equ 0001h
PSTR2CON_P2DC2CON_MASK                   equ 0004h
PSTR2CON_P2DC3CON_POSN                   equ 0003h
PSTR2CON_P2DC3CON_POSITION               equ 0003h
PSTR2CON_P2DC3CON_SIZE                   equ 0001h
PSTR2CON_P2DC3CON_LENGTH                 equ 0001h
PSTR2CON_P2DC3CON_MASK                   equ 0008h
PSTR2CON_P2DC4CON_POSN                   equ 0004h
PSTR2CON_P2DC4CON_POSITION               equ 0004h
PSTR2CON_P2DC4CON_SIZE                   equ 0001h
PSTR2CON_P2DC4CON_LENGTH                 equ 0001h
PSTR2CON_P2DC4CON_MASK                   equ 0010h
PSTR2CON_P2DC62_POSN                     equ 0006h
PSTR2CON_P2DC62_POSITION                 equ 0006h
PSTR2CON_P2DC62_SIZE                     equ 0001h
PSTR2CON_P2DC62_LENGTH                   equ 0001h
PSTR2CON_P2DC62_MASK                     equ 0040h
PSTR2CON_STRA2_POSN                      equ 0000h
PSTR2CON_STRA2_POSITION                  equ 0000h
PSTR2CON_STRA2_SIZE                      equ 0001h
PSTR2CON_STRA2_LENGTH                    equ 0001h
PSTR2CON_STRA2_MASK                      equ 0001h
PSTR2CON_STRB2_POSN                      equ 0001h
PSTR2CON_STRB2_POSITION                  equ 0001h
PSTR2CON_STRB2_SIZE                      equ 0001h
PSTR2CON_STRB2_LENGTH                    equ 0001h
PSTR2CON_STRB2_MASK                      equ 0002h
PSTR2CON_STRC2_POSN                      equ 0002h
PSTR2CON_STRC2_POSITION                  equ 0002h
PSTR2CON_STRC2_SIZE                      equ 0001h
PSTR2CON_STRC2_LENGTH                    equ 0001h
PSTR2CON_STRC2_MASK                      equ 0004h
PSTR2CON_STRD2_POSN                      equ 0003h
PSTR2CON_STRD2_POSITION                  equ 0003h
PSTR2CON_STRD2_SIZE                      equ 0001h
PSTR2CON_STRD2_LENGTH                    equ 0001h
PSTR2CON_STRD2_MASK                      equ 0008h
PSTR2CON_STRSYNC2_POSN                   equ 0004h
PSTR2CON_STRSYNC2_POSITION               equ 0004h
PSTR2CON_STRSYNC2_SIZE                   equ 0001h
PSTR2CON_STRSYNC2_LENGTH                 equ 0001h
PSTR2CON_STRSYNC2_MASK                   equ 0010h
PSTR2CON_P2DC6CON_POSN                   equ 0006h
PSTR2CON_P2DC6CON_POSITION               equ 0006h
PSTR2CON_P2DC6CON_SIZE                   equ 0001h
PSTR2CON_P2DC6CON_LENGTH                 equ 0001h
PSTR2CON_P2DC6CON_MASK                   equ 0040h

// Register: TXREG2
#define TXREG2 TXREG2
TXREG2                                   equ 0F1Ch
// bitfield definitions
TXREG2_TXREG2_POSN                       equ 0000h
TXREG2_TXREG2_POSITION                   equ 0000h
TXREG2_TXREG2_SIZE                       equ 0008h
TXREG2_TXREG2_LENGTH                     equ 0008h
TXREG2_TXREG2_MASK                       equ 00FFh

// Register: RCREG2
#define RCREG2 RCREG2
RCREG2                                   equ 0F1Dh
// bitfield definitions
RCREG2_RCREG2_POSN                       equ 0000h
RCREG2_RCREG2_POSITION                   equ 0000h
RCREG2_RCREG2_SIZE                       equ 0008h
RCREG2_RCREG2_LENGTH                     equ 0008h
RCREG2_RCREG2_MASK                       equ 00FFh

// Register: SPBRG2
#define SPBRG2 SPBRG2
SPBRG2                                   equ 0F1Eh
// bitfield definitions
SPBRG2_SPBRG2_POSN                       equ 0000h
SPBRG2_SPBRG2_POSITION                   equ 0000h
SPBRG2_SPBRG2_SIZE                       equ 0008h
SPBRG2_SPBRG2_LENGTH                     equ 0008h
SPBRG2_SPBRG2_MASK                       equ 00FFh

// Register: SPBRGH2
#define SPBRGH2 SPBRGH2
SPBRGH2                                  equ 0F1Fh
// bitfield definitions
SPBRGH2_SPBRGH2_POSN                     equ 0000h
SPBRGH2_SPBRGH2_POSITION                 equ 0000h
SPBRGH2_SPBRGH2_SIZE                     equ 0008h
SPBRGH2_SPBRGH2_LENGTH                   equ 0008h
SPBRGH2_SPBRGH2_MASK                     equ 00FFh

// Register: BAUDCON2
#define BAUDCON2 BAUDCON2
BAUDCON2                                 equ 0F20h
// bitfield definitions
BAUDCON2_ABDEN_POSN                      equ 0000h
BAUDCON2_ABDEN_POSITION                  equ 0000h
BAUDCON2_ABDEN_SIZE                      equ 0001h
BAUDCON2_ABDEN_LENGTH                    equ 0001h
BAUDCON2_ABDEN_MASK                      equ 0001h
BAUDCON2_WUE_POSN                        equ 0001h
BAUDCON2_WUE_POSITION                    equ 0001h
BAUDCON2_WUE_SIZE                        equ 0001h
BAUDCON2_WUE_LENGTH                      equ 0001h
BAUDCON2_WUE_MASK                        equ 0002h
BAUDCON2_BRG16_POSN                      equ 0003h
BAUDCON2_BRG16_POSITION                  equ 0003h
BAUDCON2_BRG16_SIZE                      equ 0001h
BAUDCON2_BRG16_LENGTH                    equ 0001h
BAUDCON2_BRG16_MASK                      equ 0008h
BAUDCON2_TXCKP_POSN                      equ 0004h
BAUDCON2_TXCKP_POSITION                  equ 0004h
BAUDCON2_TXCKP_SIZE                      equ 0001h
BAUDCON2_TXCKP_LENGTH                    equ 0001h
BAUDCON2_TXCKP_MASK                      equ 0010h
BAUDCON2_RXDTP_POSN                      equ 0005h
BAUDCON2_RXDTP_POSITION                  equ 0005h
BAUDCON2_RXDTP_SIZE                      equ 0001h
BAUDCON2_RXDTP_LENGTH                    equ 0001h
BAUDCON2_RXDTP_MASK                      equ 0020h
BAUDCON2_RCIDL_POSN                      equ 0006h
BAUDCON2_RCIDL_POSITION                  equ 0006h
BAUDCON2_RCIDL_SIZE                      equ 0001h
BAUDCON2_RCIDL_LENGTH                    equ 0001h
BAUDCON2_RCIDL_MASK                      equ 0040h
BAUDCON2_ABDOVF_POSN                     equ 0007h
BAUDCON2_ABDOVF_POSITION                 equ 0007h
BAUDCON2_ABDOVF_SIZE                     equ 0001h
BAUDCON2_ABDOVF_LENGTH                   equ 0001h
BAUDCON2_ABDOVF_MASK                     equ 0080h
BAUDCON2_ABDEN2_POSN                     equ 0000h
BAUDCON2_ABDEN2_POSITION                 equ 0000h
BAUDCON2_ABDEN2_SIZE                     equ 0001h
BAUDCON2_ABDEN2_LENGTH                   equ 0001h
BAUDCON2_ABDEN2_MASK                     equ 0001h
BAUDCON2_WUE2_POSN                       equ 0001h
BAUDCON2_WUE2_POSITION                   equ 0001h
BAUDCON2_WUE2_SIZE                       equ 0001h
BAUDCON2_WUE2_LENGTH                     equ 0001h
BAUDCON2_WUE2_MASK                       equ 0002h
BAUDCON2_BRG162_POSN                     equ 0003h
BAUDCON2_BRG162_POSITION                 equ 0003h
BAUDCON2_BRG162_SIZE                     equ 0001h
BAUDCON2_BRG162_LENGTH                   equ 0001h
BAUDCON2_BRG162_MASK                     equ 0008h
BAUDCON2_SCKP2_POSN                      equ 0004h
BAUDCON2_SCKP2_POSITION                  equ 0004h
BAUDCON2_SCKP2_SIZE                      equ 0001h
BAUDCON2_SCKP2_LENGTH                    equ 0001h
BAUDCON2_SCKP2_MASK                      equ 0010h
BAUDCON2_DTRXP2_POSN                     equ 0005h
BAUDCON2_DTRXP2_POSITION                 equ 0005h
BAUDCON2_DTRXP2_SIZE                     equ 0001h
BAUDCON2_DTRXP2_LENGTH                   equ 0001h
BAUDCON2_DTRXP2_MASK                     equ 0020h
BAUDCON2_RCIDL2_POSN                     equ 0006h
BAUDCON2_RCIDL2_POSITION                 equ 0006h
BAUDCON2_RCIDL2_SIZE                     equ 0001h
BAUDCON2_RCIDL2_LENGTH                   equ 0001h
BAUDCON2_RCIDL2_MASK                     equ 0040h
BAUDCON2_ABDOVF2_POSN                    equ 0007h
BAUDCON2_ABDOVF2_POSITION                equ 0007h
BAUDCON2_ABDOVF2_SIZE                    equ 0001h
BAUDCON2_ABDOVF2_LENGTH                  equ 0001h
BAUDCON2_ABDOVF2_MASK                    equ 0080h
BAUDCON2_TXCKP2_POSN                     equ 0004h
BAUDCON2_TXCKP2_POSITION                 equ 0004h
BAUDCON2_TXCKP2_SIZE                     equ 0001h
BAUDCON2_TXCKP2_LENGTH                   equ 0001h
BAUDCON2_TXCKP2_MASK                     equ 0010h
BAUDCON2_RXDTP2_POSN                     equ 0005h
BAUDCON2_RXDTP2_POSITION                 equ 0005h
BAUDCON2_RXDTP2_SIZE                     equ 0001h
BAUDCON2_RXDTP2_LENGTH                   equ 0001h
BAUDCON2_RXDTP2_MASK                     equ 0020h
BAUDCON2_RCMT2_POSN                      equ 0006h
BAUDCON2_RCMT2_POSITION                  equ 0006h
BAUDCON2_RCMT2_SIZE                      equ 0001h
BAUDCON2_RCMT2_LENGTH                    equ 0001h
BAUDCON2_RCMT2_MASK                      equ 0040h

// Register: TXSTA2
#define TXSTA2 TXSTA2
TXSTA2                                   equ 0F21h
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
TXSTA2_SENDB_POSN                        equ 0003h
TXSTA2_SENDB_POSITION                    equ 0003h
TXSTA2_SENDB_SIZE                        equ 0001h
TXSTA2_SENDB_LENGTH                      equ 0001h
TXSTA2_SENDB_MASK                        equ 0008h
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

// Register: RCSTA2
#define RCSTA2 RCSTA2
RCSTA2                                   equ 0F22h
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
RCSTA2_RC8_92_POSN                       equ 0006h
RCSTA2_RC8_92_POSITION                   equ 0006h
RCSTA2_RC8_92_SIZE                       equ 0001h
RCSTA2_RC8_92_LENGTH                     equ 0001h
RCSTA2_RC8_92_MASK                       equ 0040h
RCSTA2_RC92_POSN                         equ 0006h
RCSTA2_RC92_POSITION                     equ 0006h
RCSTA2_RC92_SIZE                         equ 0001h
RCSTA2_RC92_LENGTH                       equ 0001h
RCSTA2_RC92_MASK                         equ 0040h

// Register: ANCON2
#define ANCON2 ANCON2
ANCON2                                   equ 0F23h
// bitfield definitions
ANCON2_ANSEL16_POSN                      equ 0000h
ANCON2_ANSEL16_POSITION                  equ 0000h
ANCON2_ANSEL16_SIZE                      equ 0001h
ANCON2_ANSEL16_LENGTH                    equ 0001h
ANCON2_ANSEL16_MASK                      equ 0001h
ANCON2_ANSEL17_POSN                      equ 0001h
ANCON2_ANSEL17_POSITION                  equ 0001h
ANCON2_ANSEL17_SIZE                      equ 0001h
ANCON2_ANSEL17_LENGTH                    equ 0001h
ANCON2_ANSEL17_MASK                      equ 0002h
ANCON2_ANSEL18_POSN                      equ 0002h
ANCON2_ANSEL18_POSITION                  equ 0002h
ANCON2_ANSEL18_SIZE                      equ 0001h
ANCON2_ANSEL18_LENGTH                    equ 0001h
ANCON2_ANSEL18_MASK                      equ 0004h
ANCON2_ANSEL19_POSN                      equ 0003h
ANCON2_ANSEL19_POSITION                  equ 0003h
ANCON2_ANSEL19_SIZE                      equ 0001h
ANCON2_ANSEL19_LENGTH                    equ 0001h
ANCON2_ANSEL19_MASK                      equ 0008h
ANCON2_ANSEL20_POSN                      equ 0004h
ANCON2_ANSEL20_POSITION                  equ 0004h
ANCON2_ANSEL20_SIZE                      equ 0001h
ANCON2_ANSEL20_LENGTH                    equ 0001h
ANCON2_ANSEL20_MASK                      equ 0010h
ANCON2_ANSEL21_POSN                      equ 0005h
ANCON2_ANSEL21_POSITION                  equ 0005h
ANCON2_ANSEL21_SIZE                      equ 0001h
ANCON2_ANSEL21_LENGTH                    equ 0001h
ANCON2_ANSEL21_MASK                      equ 0020h
ANCON2_ANSEL22_POSN                      equ 0006h
ANCON2_ANSEL22_POSITION                  equ 0006h
ANCON2_ANSEL22_SIZE                      equ 0001h
ANCON2_ANSEL22_LENGTH                    equ 0001h
ANCON2_ANSEL22_MASK                      equ 0040h
ANCON2_ANSEL23_POSN                      equ 0007h
ANCON2_ANSEL23_POSITION                  equ 0007h
ANCON2_ANSEL23_SIZE                      equ 0001h
ANCON2_ANSEL23_LENGTH                    equ 0001h
ANCON2_ANSEL23_MASK                      equ 0080h
ANCON2_PCFG16_POSN                       equ 0000h
ANCON2_PCFG16_POSITION                   equ 0000h
ANCON2_PCFG16_SIZE                       equ 0001h
ANCON2_PCFG16_LENGTH                     equ 0001h
ANCON2_PCFG16_MASK                       equ 0001h
ANCON2_PCFG17_POSN                       equ 0001h
ANCON2_PCFG17_POSITION                   equ 0001h
ANCON2_PCFG17_SIZE                       equ 0001h
ANCON2_PCFG17_LENGTH                     equ 0001h
ANCON2_PCFG17_MASK                       equ 0002h
ANCON2_PCFG18_POSN                       equ 0002h
ANCON2_PCFG18_POSITION                   equ 0002h
ANCON2_PCFG18_SIZE                       equ 0001h
ANCON2_PCFG18_LENGTH                     equ 0001h
ANCON2_PCFG18_MASK                       equ 0004h
ANCON2_PCFG19_POSN                       equ 0003h
ANCON2_PCFG19_POSITION                   equ 0003h
ANCON2_PCFG19_SIZE                       equ 0001h
ANCON2_PCFG19_LENGTH                     equ 0001h
ANCON2_PCFG19_MASK                       equ 0008h
ANCON2_PCFG20_POSN                       equ 0004h
ANCON2_PCFG20_POSITION                   equ 0004h
ANCON2_PCFG20_SIZE                       equ 0001h
ANCON2_PCFG20_LENGTH                     equ 0001h
ANCON2_PCFG20_MASK                       equ 0010h
ANCON2_PCFG21_POSN                       equ 0005h
ANCON2_PCFG21_POSITION                   equ 0005h
ANCON2_PCFG21_SIZE                       equ 0001h
ANCON2_PCFG21_LENGTH                     equ 0001h
ANCON2_PCFG21_MASK                       equ 0020h
ANCON2_PCFG22_POSN                       equ 0006h
ANCON2_PCFG22_POSITION                   equ 0006h
ANCON2_PCFG22_SIZE                       equ 0001h
ANCON2_PCFG22_LENGTH                     equ 0001h
ANCON2_PCFG22_MASK                       equ 0040h
ANCON2_PCFG23_POSN                       equ 0007h
ANCON2_PCFG23_POSITION                   equ 0007h
ANCON2_PCFG23_SIZE                       equ 0001h
ANCON2_PCFG23_LENGTH                     equ 0001h
ANCON2_PCFG23_MASK                       equ 0080h

// Register: ANCON1
#define ANCON1 ANCON1
ANCON1                                   equ 0F24h
// bitfield definitions
ANCON1_ANSEL8_POSN                       equ 0000h
ANCON1_ANSEL8_POSITION                   equ 0000h
ANCON1_ANSEL8_SIZE                       equ 0001h
ANCON1_ANSEL8_LENGTH                     equ 0001h
ANCON1_ANSEL8_MASK                       equ 0001h
ANCON1_ANSEL9_POSN                       equ 0001h
ANCON1_ANSEL9_POSITION                   equ 0001h
ANCON1_ANSEL9_SIZE                       equ 0001h
ANCON1_ANSEL9_LENGTH                     equ 0001h
ANCON1_ANSEL9_MASK                       equ 0002h
ANCON1_ANSEL10_POSN                      equ 0002h
ANCON1_ANSEL10_POSITION                  equ 0002h
ANCON1_ANSEL10_SIZE                      equ 0001h
ANCON1_ANSEL10_LENGTH                    equ 0001h
ANCON1_ANSEL10_MASK                      equ 0004h
ANCON1_ANSEL11_POSN                      equ 0003h
ANCON1_ANSEL11_POSITION                  equ 0003h
ANCON1_ANSEL11_SIZE                      equ 0001h
ANCON1_ANSEL11_LENGTH                    equ 0001h
ANCON1_ANSEL11_MASK                      equ 0008h
ANCON1_ANSEL12_POSN                      equ 0004h
ANCON1_ANSEL12_POSITION                  equ 0004h
ANCON1_ANSEL12_SIZE                      equ 0001h
ANCON1_ANSEL12_LENGTH                    equ 0001h
ANCON1_ANSEL12_MASK                      equ 0010h
ANCON1_ANSEL13_POSN                      equ 0005h
ANCON1_ANSEL13_POSITION                  equ 0005h
ANCON1_ANSEL13_SIZE                      equ 0001h
ANCON1_ANSEL13_LENGTH                    equ 0001h
ANCON1_ANSEL13_MASK                      equ 0020h
ANCON1_ANSEL14_POSN                      equ 0006h
ANCON1_ANSEL14_POSITION                  equ 0006h
ANCON1_ANSEL14_SIZE                      equ 0001h
ANCON1_ANSEL14_LENGTH                    equ 0001h
ANCON1_ANSEL14_MASK                      equ 0040h
ANCON1_ANSEL15_POSN                      equ 0007h
ANCON1_ANSEL15_POSITION                  equ 0007h
ANCON1_ANSEL15_SIZE                      equ 0001h
ANCON1_ANSEL15_LENGTH                    equ 0001h
ANCON1_ANSEL15_MASK                      equ 0080h
ANCON1_PCFG8_POSN                        equ 0000h
ANCON1_PCFG8_POSITION                    equ 0000h
ANCON1_PCFG8_SIZE                        equ 0001h
ANCON1_PCFG8_LENGTH                      equ 0001h
ANCON1_PCFG8_MASK                        equ 0001h
ANCON1_PCFG9_POSN                        equ 0001h
ANCON1_PCFG9_POSITION                    equ 0001h
ANCON1_PCFG9_SIZE                        equ 0001h
ANCON1_PCFG9_LENGTH                      equ 0001h
ANCON1_PCFG9_MASK                        equ 0002h
ANCON1_PCFG10_POSN                       equ 0002h
ANCON1_PCFG10_POSITION                   equ 0002h
ANCON1_PCFG10_SIZE                       equ 0001h
ANCON1_PCFG10_LENGTH                     equ 0001h
ANCON1_PCFG10_MASK                       equ 0004h
ANCON1_PCFG11_POSN                       equ 0003h
ANCON1_PCFG11_POSITION                   equ 0003h
ANCON1_PCFG11_SIZE                       equ 0001h
ANCON1_PCFG11_LENGTH                     equ 0001h
ANCON1_PCFG11_MASK                       equ 0008h
ANCON1_PCFG12_POSN                       equ 0004h
ANCON1_PCFG12_POSITION                   equ 0004h
ANCON1_PCFG12_SIZE                       equ 0001h
ANCON1_PCFG12_LENGTH                     equ 0001h
ANCON1_PCFG12_MASK                       equ 0010h
ANCON1_PCFG13_POSN                       equ 0005h
ANCON1_PCFG13_POSITION                   equ 0005h
ANCON1_PCFG13_SIZE                       equ 0001h
ANCON1_PCFG13_LENGTH                     equ 0001h
ANCON1_PCFG13_MASK                       equ 0020h
ANCON1_PCFG14_POSN                       equ 0006h
ANCON1_PCFG14_POSITION                   equ 0006h
ANCON1_PCFG14_SIZE                       equ 0001h
ANCON1_PCFG14_LENGTH                     equ 0001h
ANCON1_PCFG14_MASK                       equ 0040h
ANCON1_PCFG15_POSN                       equ 0007h
ANCON1_PCFG15_POSITION                   equ 0007h
ANCON1_PCFG15_SIZE                       equ 0001h
ANCON1_PCFG15_LENGTH                     equ 0001h
ANCON1_PCFG15_MASK                       equ 0080h

// Register: ANCON0
#define ANCON0 ANCON0
ANCON0                                   equ 0F25h
// bitfield definitions
ANCON0_ANSEL0_POSN                       equ 0000h
ANCON0_ANSEL0_POSITION                   equ 0000h
ANCON0_ANSEL0_SIZE                       equ 0001h
ANCON0_ANSEL0_LENGTH                     equ 0001h
ANCON0_ANSEL0_MASK                       equ 0001h
ANCON0_ANSEL1_POSN                       equ 0001h
ANCON0_ANSEL1_POSITION                   equ 0001h
ANCON0_ANSEL1_SIZE                       equ 0001h
ANCON0_ANSEL1_LENGTH                     equ 0001h
ANCON0_ANSEL1_MASK                       equ 0002h
ANCON0_ANSEL2_POSN                       equ 0002h
ANCON0_ANSEL2_POSITION                   equ 0002h
ANCON0_ANSEL2_SIZE                       equ 0001h
ANCON0_ANSEL2_LENGTH                     equ 0001h
ANCON0_ANSEL2_MASK                       equ 0004h
ANCON0_ANSEL3_POSN                       equ 0003h
ANCON0_ANSEL3_POSITION                   equ 0003h
ANCON0_ANSEL3_SIZE                       equ 0001h
ANCON0_ANSEL3_LENGTH                     equ 0001h
ANCON0_ANSEL3_MASK                       equ 0008h
ANCON0_ANSEL4_POSN                       equ 0004h
ANCON0_ANSEL4_POSITION                   equ 0004h
ANCON0_ANSEL4_SIZE                       equ 0001h
ANCON0_ANSEL4_LENGTH                     equ 0001h
ANCON0_ANSEL4_MASK                       equ 0010h
ANCON0_ANSEL5_POSN                       equ 0005h
ANCON0_ANSEL5_POSITION                   equ 0005h
ANCON0_ANSEL5_SIZE                       equ 0001h
ANCON0_ANSEL5_LENGTH                     equ 0001h
ANCON0_ANSEL5_MASK                       equ 0020h
ANCON0_ANSEL6_POSN                       equ 0006h
ANCON0_ANSEL6_POSITION                   equ 0006h
ANCON0_ANSEL6_SIZE                       equ 0001h
ANCON0_ANSEL6_LENGTH                     equ 0001h
ANCON0_ANSEL6_MASK                       equ 0040h
ANCON0_ANSEL7_POSN                       equ 0007h
ANCON0_ANSEL7_POSITION                   equ 0007h
ANCON0_ANSEL7_SIZE                       equ 0001h
ANCON0_ANSEL7_LENGTH                     equ 0001h
ANCON0_ANSEL7_MASK                       equ 0080h
ANCON0_PCFG0_POSN                        equ 0000h
ANCON0_PCFG0_POSITION                    equ 0000h
ANCON0_PCFG0_SIZE                        equ 0001h
ANCON0_PCFG0_LENGTH                      equ 0001h
ANCON0_PCFG0_MASK                        equ 0001h
ANCON0_PCFG1_POSN                        equ 0001h
ANCON0_PCFG1_POSITION                    equ 0001h
ANCON0_PCFG1_SIZE                        equ 0001h
ANCON0_PCFG1_LENGTH                      equ 0001h
ANCON0_PCFG1_MASK                        equ 0002h
ANCON0_PCFG2_POSN                        equ 0002h
ANCON0_PCFG2_POSITION                    equ 0002h
ANCON0_PCFG2_SIZE                        equ 0001h
ANCON0_PCFG2_LENGTH                      equ 0001h
ANCON0_PCFG2_MASK                        equ 0004h
ANCON0_PCFG3_POSN                        equ 0003h
ANCON0_PCFG3_POSITION                    equ 0003h
ANCON0_PCFG3_SIZE                        equ 0001h
ANCON0_PCFG3_LENGTH                      equ 0001h
ANCON0_PCFG3_MASK                        equ 0008h
ANCON0_PCFG4_POSN                        equ 0004h
ANCON0_PCFG4_POSITION                    equ 0004h
ANCON0_PCFG4_SIZE                        equ 0001h
ANCON0_PCFG4_LENGTH                      equ 0001h
ANCON0_PCFG4_MASK                        equ 0010h
ANCON0_PCFG5_POSN                        equ 0005h
ANCON0_PCFG5_POSITION                    equ 0005h
ANCON0_PCFG5_SIZE                        equ 0001h
ANCON0_PCFG5_LENGTH                      equ 0001h
ANCON0_PCFG5_MASK                        equ 0020h
ANCON0_PCFG6_POSN                        equ 0006h
ANCON0_PCFG6_POSITION                    equ 0006h
ANCON0_PCFG6_SIZE                        equ 0001h
ANCON0_PCFG6_LENGTH                      equ 0001h
ANCON0_PCFG6_MASK                        equ 0040h
ANCON0_PCFG7_POSN                        equ 0007h
ANCON0_PCFG7_POSITION                    equ 0007h
ANCON0_PCFG7_SIZE                        equ 0001h
ANCON0_PCFG7_LENGTH                      equ 0001h
ANCON0_PCFG7_MASK                        equ 0080h

// Register: MEMCON
#define MEMCON MEMCON
MEMCON                                   equ 0F26h
// bitfield definitions
MEMCON_WM_POSN                           equ 0000h
MEMCON_WM_POSITION                       equ 0000h
MEMCON_WM_SIZE                           equ 0002h
MEMCON_WM_LENGTH                         equ 0002h
MEMCON_WM_MASK                           equ 0003h
MEMCON_WAIT_POSN                         equ 0004h
MEMCON_WAIT_POSITION                     equ 0004h
MEMCON_WAIT_SIZE                         equ 0002h
MEMCON_WAIT_LENGTH                       equ 0002h
MEMCON_WAIT_MASK                         equ 0030h
MEMCON_EBDIS_POSN                        equ 0007h
MEMCON_EBDIS_POSITION                    equ 0007h
MEMCON_EBDIS_SIZE                        equ 0001h
MEMCON_EBDIS_LENGTH                      equ 0001h
MEMCON_EBDIS_MASK                        equ 0080h
MEMCON_WM0_POSN                          equ 0000h
MEMCON_WM0_POSITION                      equ 0000h
MEMCON_WM0_SIZE                          equ 0001h
MEMCON_WM0_LENGTH                        equ 0001h
MEMCON_WM0_MASK                          equ 0001h
MEMCON_WM1_POSN                          equ 0001h
MEMCON_WM1_POSITION                      equ 0001h
MEMCON_WM1_SIZE                          equ 0001h
MEMCON_WM1_LENGTH                        equ 0001h
MEMCON_WM1_MASK                          equ 0002h
MEMCON_WAIT0_POSN                        equ 0004h
MEMCON_WAIT0_POSITION                    equ 0004h
MEMCON_WAIT0_SIZE                        equ 0001h
MEMCON_WAIT0_LENGTH                      equ 0001h
MEMCON_WAIT0_MASK                        equ 0010h
MEMCON_WAIT1_POSN                        equ 0005h
MEMCON_WAIT1_POSITION                    equ 0005h
MEMCON_WAIT1_SIZE                        equ 0001h
MEMCON_WAIT1_LENGTH                      equ 0001h
MEMCON_WAIT1_MASK                        equ 0020h

// Register: ODCON3
#define ODCON3 ODCON3
ODCON3                                   equ 0F27h
// bitfield definitions
ODCON3_CTMUDS_POSN                       equ 0000h
ODCON3_CTMUDS_POSITION                   equ 0000h
ODCON3_CTMUDS_SIZE                       equ 0001h
ODCON3_CTMUDS_LENGTH                     equ 0001h
ODCON3_CTMUDS_MASK                       equ 0001h
ODCON3_U1OD_POSN                         equ 0006h
ODCON3_U1OD_POSITION                     equ 0006h
ODCON3_U1OD_SIZE                         equ 0001h
ODCON3_U1OD_LENGTH                       equ 0001h
ODCON3_U1OD_MASK                         equ 0040h
ODCON3_U2OD_POSN                         equ 0007h
ODCON3_U2OD_POSITION                     equ 0007h
ODCON3_U2OD_SIZE                         equ 0001h
ODCON3_U2OD_LENGTH                       equ 0001h
ODCON3_U2OD_MASK                         equ 0080h

// Register: ODCON2
#define ODCON2 ODCON2
ODCON2                                   equ 0F28h
// bitfield definitions
ODCON2_CCP3OD_POSN                       equ 0000h
ODCON2_CCP3OD_POSITION                   equ 0000h
ODCON2_CCP3OD_SIZE                       equ 0001h
ODCON2_CCP3OD_LENGTH                     equ 0001h
ODCON2_CCP3OD_MASK                       equ 0001h
ODCON2_CCP4OD_POSN                       equ 0001h
ODCON2_CCP4OD_POSITION                   equ 0001h
ODCON2_CCP4OD_SIZE                       equ 0001h
ODCON2_CCP4OD_LENGTH                     equ 0001h
ODCON2_CCP4OD_MASK                       equ 0002h
ODCON2_CCP5OD_POSN                       equ 0002h
ODCON2_CCP5OD_POSITION                   equ 0002h
ODCON2_CCP5OD_SIZE                       equ 0001h
ODCON2_CCP5OD_LENGTH                     equ 0001h
ODCON2_CCP5OD_MASK                       equ 0004h
ODCON2_CCP6OD_POSN                       equ 0003h
ODCON2_CCP6OD_POSITION                   equ 0003h
ODCON2_CCP6OD_SIZE                       equ 0001h
ODCON2_CCP6OD_LENGTH                     equ 0001h
ODCON2_CCP6OD_MASK                       equ 0008h
ODCON2_CCP7OD_POSN                       equ 0004h
ODCON2_CCP7OD_POSITION                   equ 0004h
ODCON2_CCP7OD_SIZE                       equ 0001h
ODCON2_CCP7OD_LENGTH                     equ 0001h
ODCON2_CCP7OD_MASK                       equ 0010h
ODCON2_CCP8OD_POSN                       equ 0005h
ODCON2_CCP8OD_POSITION                   equ 0005h
ODCON2_CCP8OD_SIZE                       equ 0001h
ODCON2_CCP8OD_LENGTH                     equ 0001h
ODCON2_CCP8OD_MASK                       equ 0020h

// Register: ODCON1
#define ODCON1 ODCON1
ODCON1                                   equ 0F29h
// bitfield definitions
ODCON1_SPI2OD_POSN                       equ 0000h
ODCON1_SPI2OD_POSITION                   equ 0000h
ODCON1_SPI2OD_SIZE                       equ 0001h
ODCON1_SPI2OD_LENGTH                     equ 0001h
ODCON1_SPI2OD_MASK                       equ 0001h
ODCON1_CCP1OD_POSN                       equ 0005h
ODCON1_CCP1OD_POSITION                   equ 0005h
ODCON1_CCP1OD_SIZE                       equ 0001h
ODCON1_CCP1OD_LENGTH                     equ 0001h
ODCON1_CCP1OD_MASK                       equ 0020h
ODCON1_CCP2OD_POSN                       equ 0006h
ODCON1_CCP2OD_POSITION                   equ 0006h
ODCON1_CCP2OD_SIZE                       equ 0001h
ODCON1_CCP2OD_LENGTH                     equ 0001h
ODCON1_CCP2OD_MASK                       equ 0040h
ODCON1_SPI1OD_POSN                       equ 0007h
ODCON1_SPI1OD_POSITION                   equ 0007h
ODCON1_SPI1OD_SIZE                       equ 0001h
ODCON1_SPI1OD_LENGTH                     equ 0001h
ODCON1_SPI1OD_MASK                       equ 0080h

// Register: REFOCON
#define REFOCON REFOCON
REFOCON                                  equ 0F2Ah
// bitfield definitions
REFOCON_RODIV_POSN                       equ 0000h
REFOCON_RODIV_POSITION                   equ 0000h
REFOCON_RODIV_SIZE                       equ 0004h
REFOCON_RODIV_LENGTH                     equ 0004h
REFOCON_RODIV_MASK                       equ 000Fh
REFOCON_ROSEL_POSN                       equ 0004h
REFOCON_ROSEL_POSITION                   equ 0004h
REFOCON_ROSEL_SIZE                       equ 0001h
REFOCON_ROSEL_LENGTH                     equ 0001h
REFOCON_ROSEL_MASK                       equ 0010h
REFOCON_ROSSLP_POSN                      equ 0005h
REFOCON_ROSSLP_POSITION                  equ 0005h
REFOCON_ROSSLP_SIZE                      equ 0001h
REFOCON_ROSSLP_LENGTH                    equ 0001h
REFOCON_ROSSLP_MASK                      equ 0020h
REFOCON_ROON_POSN                        equ 0007h
REFOCON_ROON_POSITION                    equ 0007h
REFOCON_ROON_SIZE                        equ 0001h
REFOCON_ROON_LENGTH                      equ 0001h
REFOCON_ROON_MASK                        equ 0080h
REFOCON_RODIV0_POSN                      equ 0000h
REFOCON_RODIV0_POSITION                  equ 0000h
REFOCON_RODIV0_SIZE                      equ 0001h
REFOCON_RODIV0_LENGTH                    equ 0001h
REFOCON_RODIV0_MASK                      equ 0001h
REFOCON_RODIV1_POSN                      equ 0001h
REFOCON_RODIV1_POSITION                  equ 0001h
REFOCON_RODIV1_SIZE                      equ 0001h
REFOCON_RODIV1_LENGTH                    equ 0001h
REFOCON_RODIV1_MASK                      equ 0002h
REFOCON_RODIV2_POSN                      equ 0002h
REFOCON_RODIV2_POSITION                  equ 0002h
REFOCON_RODIV2_SIZE                      equ 0001h
REFOCON_RODIV2_LENGTH                    equ 0001h
REFOCON_RODIV2_MASK                      equ 0004h
REFOCON_RODIV3_POSN                      equ 0003h
REFOCON_RODIV3_POSITION                  equ 0003h
REFOCON_RODIV3_SIZE                      equ 0001h
REFOCON_RODIV3_LENGTH                    equ 0001h
REFOCON_RODIV3_MASK                      equ 0008h

// Register: CCPTMRS2
#define CCPTMRS2 CCPTMRS2
CCPTMRS2                                 equ 0F2Bh
// bitfield definitions
CCPTMRS2_C8TSEL_POSN                     equ 0000h
CCPTMRS2_C8TSEL_POSITION                 equ 0000h
CCPTMRS2_C8TSEL_SIZE                     equ 0002h
CCPTMRS2_C8TSEL_LENGTH                   equ 0002h
CCPTMRS2_C8TSEL_MASK                     equ 0003h
CCPTMRS2_C8TSEL0_POSN                    equ 0000h
CCPTMRS2_C8TSEL0_POSITION                equ 0000h
CCPTMRS2_C8TSEL0_SIZE                    equ 0001h
CCPTMRS2_C8TSEL0_LENGTH                  equ 0001h
CCPTMRS2_C8TSEL0_MASK                    equ 0001h
CCPTMRS2_C8TSEL1_POSN                    equ 0001h
CCPTMRS2_C8TSEL1_POSITION                equ 0001h
CCPTMRS2_C8TSEL1_SIZE                    equ 0001h
CCPTMRS2_C8TSEL1_LENGTH                  equ 0001h
CCPTMRS2_C8TSEL1_MASK                    equ 0002h

// Register: CCPTMRS1
#define CCPTMRS1 CCPTMRS1
CCPTMRS1                                 equ 0F2Ch
// bitfield definitions
CCPTMRS1_C4TSEL_POSN                     equ 0000h
CCPTMRS1_C4TSEL_POSITION                 equ 0000h
CCPTMRS1_C4TSEL_SIZE                     equ 0002h
CCPTMRS1_C4TSEL_LENGTH                   equ 0002h
CCPTMRS1_C4TSEL_MASK                     equ 0003h
CCPTMRS1_C5TSEL0_POSN                    equ 0002h
CCPTMRS1_C5TSEL0_POSITION                equ 0002h
CCPTMRS1_C5TSEL0_SIZE                    equ 0001h
CCPTMRS1_C5TSEL0_LENGTH                  equ 0001h
CCPTMRS1_C5TSEL0_MASK                    equ 0004h
CCPTMRS1_C6TSEL0_POSN                    equ 0004h
CCPTMRS1_C6TSEL0_POSITION                equ 0004h
CCPTMRS1_C6TSEL0_SIZE                    equ 0001h
CCPTMRS1_C6TSEL0_LENGTH                  equ 0001h
CCPTMRS1_C6TSEL0_MASK                    equ 0010h
CCPTMRS1_C7TSEL_POSN                     equ 0006h
CCPTMRS1_C7TSEL_POSITION                 equ 0006h
CCPTMRS1_C7TSEL_SIZE                     equ 0002h
CCPTMRS1_C7TSEL_LENGTH                   equ 0002h
CCPTMRS1_C7TSEL_MASK                     equ 00C0h
CCPTMRS1_C4TSEL0_POSN                    equ 0000h
CCPTMRS1_C4TSEL0_POSITION                equ 0000h
CCPTMRS1_C4TSEL0_SIZE                    equ 0001h
CCPTMRS1_C4TSEL0_LENGTH                  equ 0001h
CCPTMRS1_C4TSEL0_MASK                    equ 0001h
CCPTMRS1_C4TSEL1_POSN                    equ 0001h
CCPTMRS1_C4TSEL1_POSITION                equ 0001h
CCPTMRS1_C4TSEL1_SIZE                    equ 0001h
CCPTMRS1_C4TSEL1_LENGTH                  equ 0001h
CCPTMRS1_C4TSEL1_MASK                    equ 0002h
CCPTMRS1_C7TSEL0_POSN                    equ 0006h
CCPTMRS1_C7TSEL0_POSITION                equ 0006h
CCPTMRS1_C7TSEL0_SIZE                    equ 0001h
CCPTMRS1_C7TSEL0_LENGTH                  equ 0001h
CCPTMRS1_C7TSEL0_MASK                    equ 0040h
CCPTMRS1_C7TSEL1_POSN                    equ 0007h
CCPTMRS1_C7TSEL1_POSITION                equ 0007h
CCPTMRS1_C7TSEL1_SIZE                    equ 0001h
CCPTMRS1_C7TSEL1_LENGTH                  equ 0001h
CCPTMRS1_C7TSEL1_MASK                    equ 0080h

// Register: CCPTMRS0
#define CCPTMRS0 CCPTMRS0
CCPTMRS0                                 equ 0F2Dh
// bitfield definitions
CCPTMRS0_C1TSEL_POSN                     equ 0000h
CCPTMRS0_C1TSEL_POSITION                 equ 0000h
CCPTMRS0_C1TSEL_SIZE                     equ 0003h
CCPTMRS0_C1TSEL_LENGTH                   equ 0003h
CCPTMRS0_C1TSEL_MASK                     equ 0007h
CCPTMRS0_C2TSEL_POSN                     equ 0003h
CCPTMRS0_C2TSEL_POSITION                 equ 0003h
CCPTMRS0_C2TSEL_SIZE                     equ 0003h
CCPTMRS0_C2TSEL_LENGTH                   equ 0003h
CCPTMRS0_C2TSEL_MASK                     equ 0038h
CCPTMRS0_C3TSEL_POSN                     equ 0006h
CCPTMRS0_C3TSEL_POSITION                 equ 0006h
CCPTMRS0_C3TSEL_SIZE                     equ 0002h
CCPTMRS0_C3TSEL_LENGTH                   equ 0002h
CCPTMRS0_C3TSEL_MASK                     equ 00C0h
CCPTMRS0_C1TSEL0_POSN                    equ 0000h
CCPTMRS0_C1TSEL0_POSITION                equ 0000h
CCPTMRS0_C1TSEL0_SIZE                    equ 0001h
CCPTMRS0_C1TSEL0_LENGTH                  equ 0001h
CCPTMRS0_C1TSEL0_MASK                    equ 0001h
CCPTMRS0_C1TSEL1_POSN                    equ 0001h
CCPTMRS0_C1TSEL1_POSITION                equ 0001h
CCPTMRS0_C1TSEL1_SIZE                    equ 0001h
CCPTMRS0_C1TSEL1_LENGTH                  equ 0001h
CCPTMRS0_C1TSEL1_MASK                    equ 0002h
CCPTMRS0_C1TSEL2_POSN                    equ 0002h
CCPTMRS0_C1TSEL2_POSITION                equ 0002h
CCPTMRS0_C1TSEL2_SIZE                    equ 0001h
CCPTMRS0_C1TSEL2_LENGTH                  equ 0001h
CCPTMRS0_C1TSEL2_MASK                    equ 0004h
CCPTMRS0_C2TSEL0_POSN                    equ 0003h
CCPTMRS0_C2TSEL0_POSITION                equ 0003h
CCPTMRS0_C2TSEL0_SIZE                    equ 0001h
CCPTMRS0_C2TSEL0_LENGTH                  equ 0001h
CCPTMRS0_C2TSEL0_MASK                    equ 0008h
CCPTMRS0_C2TSEL1_POSN                    equ 0004h
CCPTMRS0_C2TSEL1_POSITION                equ 0004h
CCPTMRS0_C2TSEL1_SIZE                    equ 0001h
CCPTMRS0_C2TSEL1_LENGTH                  equ 0001h
CCPTMRS0_C2TSEL1_MASK                    equ 0010h
CCPTMRS0_C2TSEL2_POSN                    equ 0005h
CCPTMRS0_C2TSEL2_POSITION                equ 0005h
CCPTMRS0_C2TSEL2_SIZE                    equ 0001h
CCPTMRS0_C2TSEL2_LENGTH                  equ 0001h
CCPTMRS0_C2TSEL2_MASK                    equ 0020h
CCPTMRS0_C3TSEL0_POSN                    equ 0006h
CCPTMRS0_C3TSEL0_POSITION                equ 0006h
CCPTMRS0_C3TSEL0_SIZE                    equ 0001h
CCPTMRS0_C3TSEL0_LENGTH                  equ 0001h
CCPTMRS0_C3TSEL0_MASK                    equ 0040h
CCPTMRS0_C3TSEL1_POSN                    equ 0007h
CCPTMRS0_C3TSEL1_POSITION                equ 0007h
CCPTMRS0_C3TSEL1_SIZE                    equ 0001h
CCPTMRS0_C3TSEL1_LENGTH                  equ 0001h
CCPTMRS0_C3TSEL1_MASK                    equ 0080h

// Register: CM3CON
#define CM3CON CM3CON
CM3CON                                   equ 0F2Eh
// bitfield definitions
CM3CON_CCH_POSN                          equ 0000h
CM3CON_CCH_POSITION                      equ 0000h
CM3CON_CCH_SIZE                          equ 0002h
CM3CON_CCH_LENGTH                        equ 0002h
CM3CON_CCH_MASK                          equ 0003h
CM3CON_CREF_POSN                         equ 0002h
CM3CON_CREF_POSITION                     equ 0002h
CM3CON_CREF_SIZE                         equ 0001h
CM3CON_CREF_LENGTH                       equ 0001h
CM3CON_CREF_MASK                         equ 0004h
CM3CON_EVPOL_POSN                        equ 0003h
CM3CON_EVPOL_POSITION                    equ 0003h
CM3CON_EVPOL_SIZE                        equ 0002h
CM3CON_EVPOL_LENGTH                      equ 0002h
CM3CON_EVPOL_MASK                        equ 0018h
CM3CON_CPOL_POSN                         equ 0005h
CM3CON_CPOL_POSITION                     equ 0005h
CM3CON_CPOL_SIZE                         equ 0001h
CM3CON_CPOL_LENGTH                       equ 0001h
CM3CON_CPOL_MASK                         equ 0020h
CM3CON_COE_POSN                          equ 0006h
CM3CON_COE_POSITION                      equ 0006h
CM3CON_COE_SIZE                          equ 0001h
CM3CON_COE_LENGTH                        equ 0001h
CM3CON_COE_MASK                          equ 0040h
CM3CON_CON_POSN                          equ 0007h
CM3CON_CON_POSITION                      equ 0007h
CM3CON_CON_SIZE                          equ 0001h
CM3CON_CON_LENGTH                        equ 0001h
CM3CON_CON_MASK                          equ 0080h
CM3CON_CCH0_POSN                         equ 0000h
CM3CON_CCH0_POSITION                     equ 0000h
CM3CON_CCH0_SIZE                         equ 0001h
CM3CON_CCH0_LENGTH                       equ 0001h
CM3CON_CCH0_MASK                         equ 0001h
CM3CON_CCH1_POSN                         equ 0001h
CM3CON_CCH1_POSITION                     equ 0001h
CM3CON_CCH1_SIZE                         equ 0001h
CM3CON_CCH1_LENGTH                       equ 0001h
CM3CON_CCH1_MASK                         equ 0002h
CM3CON_EVPOL0_POSN                       equ 0003h
CM3CON_EVPOL0_POSITION                   equ 0003h
CM3CON_EVPOL0_SIZE                       equ 0001h
CM3CON_EVPOL0_LENGTH                     equ 0001h
CM3CON_EVPOL0_MASK                       equ 0008h
CM3CON_EVPOL1_POSN                       equ 0004h
CM3CON_EVPOL1_POSITION                   equ 0004h
CM3CON_EVPOL1_SIZE                       equ 0001h
CM3CON_EVPOL1_LENGTH                     equ 0001h
CM3CON_EVPOL1_MASK                       equ 0010h
CM3CON_CCH03_POSN                        equ 0000h
CM3CON_CCH03_POSITION                    equ 0000h
CM3CON_CCH03_SIZE                        equ 0001h
CM3CON_CCH03_LENGTH                      equ 0001h
CM3CON_CCH03_MASK                        equ 0001h
CM3CON_CCH13_POSN                        equ 0001h
CM3CON_CCH13_POSITION                    equ 0001h
CM3CON_CCH13_SIZE                        equ 0001h
CM3CON_CCH13_LENGTH                      equ 0001h
CM3CON_CCH13_MASK                        equ 0002h
CM3CON_CREF3_POSN                        equ 0002h
CM3CON_CREF3_POSITION                    equ 0002h
CM3CON_CREF3_SIZE                        equ 0001h
CM3CON_CREF3_LENGTH                      equ 0001h
CM3CON_CREF3_MASK                        equ 0004h
CM3CON_EVPOL03_POSN                      equ 0003h
CM3CON_EVPOL03_POSITION                  equ 0003h
CM3CON_EVPOL03_SIZE                      equ 0001h
CM3CON_EVPOL03_LENGTH                    equ 0001h
CM3CON_EVPOL03_MASK                      equ 0008h
CM3CON_EVPOL13_POSN                      equ 0004h
CM3CON_EVPOL13_POSITION                  equ 0004h
CM3CON_EVPOL13_SIZE                      equ 0001h
CM3CON_EVPOL13_LENGTH                    equ 0001h
CM3CON_EVPOL13_MASK                      equ 0010h
CM3CON_CPOL3_POSN                        equ 0005h
CM3CON_CPOL3_POSITION                    equ 0005h
CM3CON_CPOL3_SIZE                        equ 0001h
CM3CON_CPOL3_LENGTH                      equ 0001h
CM3CON_CPOL3_MASK                        equ 0020h
CM3CON_COE3_POSN                         equ 0006h
CM3CON_COE3_POSITION                     equ 0006h
CM3CON_COE3_SIZE                         equ 0001h
CM3CON_COE3_LENGTH                       equ 0001h
CM3CON_COE3_MASK                         equ 0040h
CM3CON_CON3_POSN                         equ 0007h
CM3CON_CON3_POSITION                     equ 0007h
CM3CON_CON3_SIZE                         equ 0001h
CM3CON_CON3_LENGTH                       equ 0001h
CM3CON_CON3_MASK                         equ 0080h

// Register: CM2CON
#define CM2CON CM2CON
CM2CON                                   equ 0F2Fh
// bitfield definitions
CM2CON_CCH_POSN                          equ 0000h
CM2CON_CCH_POSITION                      equ 0000h
CM2CON_CCH_SIZE                          equ 0002h
CM2CON_CCH_LENGTH                        equ 0002h
CM2CON_CCH_MASK                          equ 0003h
CM2CON_CREF_POSN                         equ 0002h
CM2CON_CREF_POSITION                     equ 0002h
CM2CON_CREF_SIZE                         equ 0001h
CM2CON_CREF_LENGTH                       equ 0001h
CM2CON_CREF_MASK                         equ 0004h
CM2CON_EVPOL_POSN                        equ 0003h
CM2CON_EVPOL_POSITION                    equ 0003h
CM2CON_EVPOL_SIZE                        equ 0002h
CM2CON_EVPOL_LENGTH                      equ 0002h
CM2CON_EVPOL_MASK                        equ 0018h
CM2CON_CPOL_POSN                         equ 0005h
CM2CON_CPOL_POSITION                     equ 0005h
CM2CON_CPOL_SIZE                         equ 0001h
CM2CON_CPOL_LENGTH                       equ 0001h
CM2CON_CPOL_MASK                         equ 0020h
CM2CON_COE_POSN                          equ 0006h
CM2CON_COE_POSITION                      equ 0006h
CM2CON_COE_SIZE                          equ 0001h
CM2CON_COE_LENGTH                        equ 0001h
CM2CON_COE_MASK                          equ 0040h
CM2CON_CON_POSN                          equ 0007h
CM2CON_CON_POSITION                      equ 0007h
CM2CON_CON_SIZE                          equ 0001h
CM2CON_CON_LENGTH                        equ 0001h
CM2CON_CON_MASK                          equ 0080h
CM2CON_CCH0_POSN                         equ 0000h
CM2CON_CCH0_POSITION                     equ 0000h
CM2CON_CCH0_SIZE                         equ 0001h
CM2CON_CCH0_LENGTH                       equ 0001h
CM2CON_CCH0_MASK                         equ 0001h
CM2CON_CCH1_POSN                         equ 0001h
CM2CON_CCH1_POSITION                     equ 0001h
CM2CON_CCH1_SIZE                         equ 0001h
CM2CON_CCH1_LENGTH                       equ 0001h
CM2CON_CCH1_MASK                         equ 0002h
CM2CON_EVPOL0_POSN                       equ 0003h
CM2CON_EVPOL0_POSITION                   equ 0003h
CM2CON_EVPOL0_SIZE                       equ 0001h
CM2CON_EVPOL0_LENGTH                     equ 0001h
CM2CON_EVPOL0_MASK                       equ 0008h
CM2CON_EVPOL1_POSN                       equ 0004h
CM2CON_EVPOL1_POSITION                   equ 0004h
CM2CON_EVPOL1_SIZE                       equ 0001h
CM2CON_EVPOL1_LENGTH                     equ 0001h
CM2CON_EVPOL1_MASK                       equ 0010h
CM2CON_CCH02_POSN                        equ 0000h
CM2CON_CCH02_POSITION                    equ 0000h
CM2CON_CCH02_SIZE                        equ 0001h
CM2CON_CCH02_LENGTH                      equ 0001h
CM2CON_CCH02_MASK                        equ 0001h
CM2CON_CCH12_POSN                        equ 0001h
CM2CON_CCH12_POSITION                    equ 0001h
CM2CON_CCH12_SIZE                        equ 0001h
CM2CON_CCH12_LENGTH                      equ 0001h
CM2CON_CCH12_MASK                        equ 0002h
CM2CON_CREF2_POSN                        equ 0002h
CM2CON_CREF2_POSITION                    equ 0002h
CM2CON_CREF2_SIZE                        equ 0001h
CM2CON_CREF2_LENGTH                      equ 0001h
CM2CON_CREF2_MASK                        equ 0004h
CM2CON_EVPOL02_POSN                      equ 0003h
CM2CON_EVPOL02_POSITION                  equ 0003h
CM2CON_EVPOL02_SIZE                      equ 0001h
CM2CON_EVPOL02_LENGTH                    equ 0001h
CM2CON_EVPOL02_MASK                      equ 0008h
CM2CON_EVPOL12_POSN                      equ 0004h
CM2CON_EVPOL12_POSITION                  equ 0004h
CM2CON_EVPOL12_SIZE                      equ 0001h
CM2CON_EVPOL12_LENGTH                    equ 0001h
CM2CON_EVPOL12_MASK                      equ 0010h
CM2CON_CPOL2_POSN                        equ 0005h
CM2CON_CPOL2_POSITION                    equ 0005h
CM2CON_CPOL2_SIZE                        equ 0001h
CM2CON_CPOL2_LENGTH                      equ 0001h
CM2CON_CPOL2_MASK                        equ 0020h
CM2CON_COE2_POSN                         equ 0006h
CM2CON_COE2_POSITION                     equ 0006h
CM2CON_COE2_SIZE                         equ 0001h
CM2CON_COE2_LENGTH                       equ 0001h
CM2CON_COE2_MASK                         equ 0040h
CM2CON_CON2_POSN                         equ 0007h
CM2CON_CON2_POSITION                     equ 0007h
CM2CON_CON2_SIZE                         equ 0001h
CM2CON_CON2_LENGTH                       equ 0001h
CM2CON_CON2_MASK                         equ 0080h

// Register: T8CON
#define T8CON T8CON
T8CON                                    equ 0F36h
// bitfield definitions
T8CON_T8CKPS_POSN                        equ 0000h
T8CON_T8CKPS_POSITION                    equ 0000h
T8CON_T8CKPS_SIZE                        equ 0002h
T8CON_T8CKPS_LENGTH                      equ 0002h
T8CON_T8CKPS_MASK                        equ 0003h
T8CON_TMR8ON_POSN                        equ 0002h
T8CON_TMR8ON_POSITION                    equ 0002h
T8CON_TMR8ON_SIZE                        equ 0001h
T8CON_TMR8ON_LENGTH                      equ 0001h
T8CON_TMR8ON_MASK                        equ 0004h
T8CON_T8OUTPS_POSN                       equ 0003h
T8CON_T8OUTPS_POSITION                   equ 0003h
T8CON_T8OUTPS_SIZE                       equ 0004h
T8CON_T8OUTPS_LENGTH                     equ 0004h
T8CON_T8OUTPS_MASK                       equ 0078h
T8CON_T8CKPS0_POSN                       equ 0000h
T8CON_T8CKPS0_POSITION                   equ 0000h
T8CON_T8CKPS0_SIZE                       equ 0001h
T8CON_T8CKPS0_LENGTH                     equ 0001h
T8CON_T8CKPS0_MASK                       equ 0001h
T8CON_T8CKPS1_POSN                       equ 0001h
T8CON_T8CKPS1_POSITION                   equ 0001h
T8CON_T8CKPS1_SIZE                       equ 0001h
T8CON_T8CKPS1_LENGTH                     equ 0001h
T8CON_T8CKPS1_MASK                       equ 0002h
T8CON_T8OUTPS0_POSN                      equ 0003h
T8CON_T8OUTPS0_POSITION                  equ 0003h
T8CON_T8OUTPS0_SIZE                      equ 0001h
T8CON_T8OUTPS0_LENGTH                    equ 0001h
T8CON_T8OUTPS0_MASK                      equ 0008h
T8CON_T8OUTPS1_POSN                      equ 0004h
T8CON_T8OUTPS1_POSITION                  equ 0004h
T8CON_T8OUTPS1_SIZE                      equ 0001h
T8CON_T8OUTPS1_LENGTH                    equ 0001h
T8CON_T8OUTPS1_MASK                      equ 0010h
T8CON_T8OUTPS2_POSN                      equ 0005h
T8CON_T8OUTPS2_POSITION                  equ 0005h
T8CON_T8OUTPS2_SIZE                      equ 0001h
T8CON_T8OUTPS2_LENGTH                    equ 0001h
T8CON_T8OUTPS2_MASK                      equ 0020h
T8CON_T8OUTPS3_POSN                      equ 0006h
T8CON_T8OUTPS3_POSITION                  equ 0006h
T8CON_T8OUTPS3_SIZE                      equ 0001h
T8CON_T8OUTPS3_LENGTH                    equ 0001h
T8CON_T8OUTPS3_MASK                      equ 0040h

// Register: PR8
#define PR8 PR8
PR8                                      equ 0F37h
// bitfield definitions
PR8_PR8_POSN                             equ 0000h
PR8_PR8_POSITION                         equ 0000h
PR8_PR8_SIZE                             equ 0008h
PR8_PR8_LENGTH                           equ 0008h
PR8_PR8_MASK                             equ 00FFh

// Register: TMR8
#define TMR8 TMR8
TMR8                                     equ 0F38h
// bitfield definitions
TMR8_TMR8_POSN                           equ 0000h
TMR8_TMR8_POSITION                       equ 0000h
TMR8_TMR8_SIZE                           equ 0008h
TMR8_TMR8_LENGTH                         equ 0008h
TMR8_TMR8_MASK                           equ 00FFh

// Register: T6CON
#define T6CON T6CON
T6CON                                    equ 0F39h
// bitfield definitions
T6CON_T6CKPS_POSN                        equ 0000h
T6CON_T6CKPS_POSITION                    equ 0000h
T6CON_T6CKPS_SIZE                        equ 0002h
T6CON_T6CKPS_LENGTH                      equ 0002h
T6CON_T6CKPS_MASK                        equ 0003h
T6CON_TMR6ON_POSN                        equ 0002h
T6CON_TMR6ON_POSITION                    equ 0002h
T6CON_TMR6ON_SIZE                        equ 0001h
T6CON_TMR6ON_LENGTH                      equ 0001h
T6CON_TMR6ON_MASK                        equ 0004h
T6CON_T6OUTPS_POSN                       equ 0003h
T6CON_T6OUTPS_POSITION                   equ 0003h
T6CON_T6OUTPS_SIZE                       equ 0004h
T6CON_T6OUTPS_LENGTH                     equ 0004h
T6CON_T6OUTPS_MASK                       equ 0078h
T6CON_T6CKPS0_POSN                       equ 0000h
T6CON_T6CKPS0_POSITION                   equ 0000h
T6CON_T6CKPS0_SIZE                       equ 0001h
T6CON_T6CKPS0_LENGTH                     equ 0001h
T6CON_T6CKPS0_MASK                       equ 0001h
T6CON_T6CKPS1_POSN                       equ 0001h
T6CON_T6CKPS1_POSITION                   equ 0001h
T6CON_T6CKPS1_SIZE                       equ 0001h
T6CON_T6CKPS1_LENGTH                     equ 0001h
T6CON_T6CKPS1_MASK                       equ 0002h
T6CON_T6OUTPS0_POSN                      equ 0003h
T6CON_T6OUTPS0_POSITION                  equ 0003h
T6CON_T6OUTPS0_SIZE                      equ 0001h
T6CON_T6OUTPS0_LENGTH                    equ 0001h
T6CON_T6OUTPS0_MASK                      equ 0008h
T6CON_T6OUTPS1_POSN                      equ 0004h
T6CON_T6OUTPS1_POSITION                  equ 0004h
T6CON_T6OUTPS1_SIZE                      equ 0001h
T6CON_T6OUTPS1_LENGTH                    equ 0001h
T6CON_T6OUTPS1_MASK                      equ 0010h
T6CON_T6OUTPS2_POSN                      equ 0005h
T6CON_T6OUTPS2_POSITION                  equ 0005h
T6CON_T6OUTPS2_SIZE                      equ 0001h
T6CON_T6OUTPS2_LENGTH                    equ 0001h
T6CON_T6OUTPS2_MASK                      equ 0020h
T6CON_T6OUTPS3_POSN                      equ 0006h
T6CON_T6OUTPS3_POSITION                  equ 0006h
T6CON_T6OUTPS3_SIZE                      equ 0001h
T6CON_T6OUTPS3_LENGTH                    equ 0001h
T6CON_T6OUTPS3_MASK                      equ 0040h

// Register: PR6
#define PR6 PR6
PR6                                      equ 0F3Ah
// bitfield definitions
PR6_PR6_POSN                             equ 0000h
PR6_PR6_POSITION                         equ 0000h
PR6_PR6_SIZE                             equ 0008h
PR6_PR6_LENGTH                           equ 0008h
PR6_PR6_MASK                             equ 00FFh

// Register: TMR6
#define TMR6 TMR6
TMR6                                     equ 0F3Bh
// bitfield definitions
TMR6_TMR6_POSN                           equ 0000h
TMR6_TMR6_POSITION                       equ 0000h
TMR6_TMR6_SIZE                           equ 0008h
TMR6_TMR6_LENGTH                         equ 0008h
TMR6_TMR6_MASK                           equ 00FFh

// Register: CCP8CON
#define CCP8CON CCP8CON
CCP8CON                                  equ 0F46h
// bitfield definitions
CCP8CON_CCP8M_POSN                       equ 0000h
CCP8CON_CCP8M_POSITION                   equ 0000h
CCP8CON_CCP8M_SIZE                       equ 0004h
CCP8CON_CCP8M_LENGTH                     equ 0004h
CCP8CON_CCP8M_MASK                       equ 000Fh
CCP8CON_DC8B_POSN                        equ 0004h
CCP8CON_DC8B_POSITION                    equ 0004h
CCP8CON_DC8B_SIZE                        equ 0002h
CCP8CON_DC8B_LENGTH                      equ 0002h
CCP8CON_DC8B_MASK                        equ 0030h
CCP8CON_CCP8M0_POSN                      equ 0000h
CCP8CON_CCP8M0_POSITION                  equ 0000h
CCP8CON_CCP8M0_SIZE                      equ 0001h
CCP8CON_CCP8M0_LENGTH                    equ 0001h
CCP8CON_CCP8M0_MASK                      equ 0001h
CCP8CON_CCP8M1_POSN                      equ 0001h
CCP8CON_CCP8M1_POSITION                  equ 0001h
CCP8CON_CCP8M1_SIZE                      equ 0001h
CCP8CON_CCP8M1_LENGTH                    equ 0001h
CCP8CON_CCP8M1_MASK                      equ 0002h
CCP8CON_CCP8M2_POSN                      equ 0002h
CCP8CON_CCP8M2_POSITION                  equ 0002h
CCP8CON_CCP8M2_SIZE                      equ 0001h
CCP8CON_CCP8M2_LENGTH                    equ 0001h
CCP8CON_CCP8M2_MASK                      equ 0004h
CCP8CON_CCP8M3_POSN                      equ 0003h
CCP8CON_CCP8M3_POSITION                  equ 0003h
CCP8CON_CCP8M3_SIZE                      equ 0001h
CCP8CON_CCP8M3_LENGTH                    equ 0001h
CCP8CON_CCP8M3_MASK                      equ 0008h
CCP8CON_DC8B0_POSN                       equ 0004h
CCP8CON_DC8B0_POSITION                   equ 0004h
CCP8CON_DC8B0_SIZE                       equ 0001h
CCP8CON_DC8B0_LENGTH                     equ 0001h
CCP8CON_DC8B0_MASK                       equ 0010h
CCP8CON_DC8B1_POSN                       equ 0005h
CCP8CON_DC8B1_POSITION                   equ 0005h
CCP8CON_DC8B1_SIZE                       equ 0001h
CCP8CON_DC8B1_LENGTH                     equ 0001h
CCP8CON_DC8B1_MASK                       equ 0020h
CCP8CON_CCP8Y_POSN                       equ 0004h
CCP8CON_CCP8Y_POSITION                   equ 0004h
CCP8CON_CCP8Y_SIZE                       equ 0001h
CCP8CON_CCP8Y_LENGTH                     equ 0001h
CCP8CON_CCP8Y_MASK                       equ 0010h
CCP8CON_CCP8X_POSN                       equ 0005h
CCP8CON_CCP8X_POSITION                   equ 0005h
CCP8CON_CCP8X_SIZE                       equ 0001h
CCP8CON_CCP8X_LENGTH                     equ 0001h
CCP8CON_CCP8X_MASK                       equ 0020h

// Register: CCPR8
#define CCPR8 CCPR8
CCPR8                                    equ 0F47h

// Register: CCPR8L
#define CCPR8L CCPR8L
CCPR8L                                   equ 0F47h
// bitfield definitions
CCPR8L_CCPR8L_POSN                       equ 0000h
CCPR8L_CCPR8L_POSITION                   equ 0000h
CCPR8L_CCPR8L_SIZE                       equ 0008h
CCPR8L_CCPR8L_LENGTH                     equ 0008h
CCPR8L_CCPR8L_MASK                       equ 00FFh

// Register: CCPR8H
#define CCPR8H CCPR8H
CCPR8H                                   equ 0F48h
// bitfield definitions
CCPR8H_CCPR8H_POSN                       equ 0000h
CCPR8H_CCPR8H_POSITION                   equ 0000h
CCPR8H_CCPR8H_SIZE                       equ 0008h
CCPR8H_CCPR8H_LENGTH                     equ 0008h
CCPR8H_CCPR8H_MASK                       equ 00FFh

// Register: CCP3CON
#define CCP3CON CCP3CON
CCP3CON                                  equ 0F49h
// bitfield definitions
CCP3CON_CCP3M_POSN                       equ 0000h
CCP3CON_CCP3M_POSITION                   equ 0000h
CCP3CON_CCP3M_SIZE                       equ 0004h
CCP3CON_CCP3M_LENGTH                     equ 0004h
CCP3CON_CCP3M_MASK                       equ 000Fh
CCP3CON_DC3B_POSN                        equ 0004h
CCP3CON_DC3B_POSITION                    equ 0004h
CCP3CON_DC3B_SIZE                        equ 0002h
CCP3CON_DC3B_LENGTH                      equ 0002h
CCP3CON_DC3B_MASK                        equ 0030h
CCP3CON_P3M_POSN                         equ 0006h
CCP3CON_P3M_POSITION                     equ 0006h
CCP3CON_P3M_SIZE                         equ 0002h
CCP3CON_P3M_LENGTH                       equ 0002h
CCP3CON_P3M_MASK                         equ 00C0h
CCP3CON_CCP3M0_POSN                      equ 0000h
CCP3CON_CCP3M0_POSITION                  equ 0000h
CCP3CON_CCP3M0_SIZE                      equ 0001h
CCP3CON_CCP3M0_LENGTH                    equ 0001h
CCP3CON_CCP3M0_MASK                      equ 0001h
CCP3CON_CCP3M1_POSN                      equ 0001h
CCP3CON_CCP3M1_POSITION                  equ 0001h
CCP3CON_CCP3M1_SIZE                      equ 0001h
CCP3CON_CCP3M1_LENGTH                    equ 0001h
CCP3CON_CCP3M1_MASK                      equ 0002h
CCP3CON_CCP3M2_POSN                      equ 0002h
CCP3CON_CCP3M2_POSITION                  equ 0002h
CCP3CON_CCP3M2_SIZE                      equ 0001h
CCP3CON_CCP3M2_LENGTH                    equ 0001h
CCP3CON_CCP3M2_MASK                      equ 0004h
CCP3CON_CCP3M3_POSN                      equ 0003h
CCP3CON_CCP3M3_POSITION                  equ 0003h
CCP3CON_CCP3M3_SIZE                      equ 0001h
CCP3CON_CCP3M3_LENGTH                    equ 0001h
CCP3CON_CCP3M3_MASK                      equ 0008h
CCP3CON_DC3B0_POSN                       equ 0004h
CCP3CON_DC3B0_POSITION                   equ 0004h
CCP3CON_DC3B0_SIZE                       equ 0001h
CCP3CON_DC3B0_LENGTH                     equ 0001h
CCP3CON_DC3B0_MASK                       equ 0010h
CCP3CON_DC3B1_POSN                       equ 0005h
CCP3CON_DC3B1_POSITION                   equ 0005h
CCP3CON_DC3B1_SIZE                       equ 0001h
CCP3CON_DC3B1_LENGTH                     equ 0001h
CCP3CON_DC3B1_MASK                       equ 0020h
CCP3CON_P3M0_POSN                        equ 0006h
CCP3CON_P3M0_POSITION                    equ 0006h
CCP3CON_P3M0_SIZE                        equ 0001h
CCP3CON_P3M0_LENGTH                      equ 0001h
CCP3CON_P3M0_MASK                        equ 0040h
CCP3CON_P3M1_POSN                        equ 0007h
CCP3CON_P3M1_POSITION                    equ 0007h
CCP3CON_P3M1_SIZE                        equ 0001h
CCP3CON_P3M1_LENGTH                      equ 0001h
CCP3CON_P3M1_MASK                        equ 0080h

// Register: CCPR3
#define CCPR3 CCPR3
CCPR3                                    equ 0F4Ah

// Register: CCPR3L
#define CCPR3L CCPR3L
CCPR3L                                   equ 0F4Ah
// bitfield definitions
CCPR3L_CCPR3L_POSN                       equ 0000h
CCPR3L_CCPR3L_POSITION                   equ 0000h
CCPR3L_CCPR3L_SIZE                       equ 0008h
CCPR3L_CCPR3L_LENGTH                     equ 0008h
CCPR3L_CCPR3L_MASK                       equ 00FFh

// Register: CCPR3H
#define CCPR3H CCPR3H
CCPR3H                                   equ 0F4Bh
// bitfield definitions
CCPR3H_CCPR3H_POSN                       equ 0000h
CCPR3H_CCPR3H_POSITION                   equ 0000h
CCPR3H_CCPR3H_SIZE                       equ 0008h
CCPR3H_CCPR3H_LENGTH                     equ 0008h
CCPR3H_CCPR3H_MASK                       equ 00FFh

// Register: ECCP3DEL
#define ECCP3DEL ECCP3DEL
ECCP3DEL                                 equ 0F4Ch
// bitfield definitions
ECCP3DEL_P3DC_POSN                       equ 0000h
ECCP3DEL_P3DC_POSITION                   equ 0000h
ECCP3DEL_P3DC_SIZE                       equ 0007h
ECCP3DEL_P3DC_LENGTH                     equ 0007h
ECCP3DEL_P3DC_MASK                       equ 007Fh
ECCP3DEL_P3RSEN_POSN                     equ 0007h
ECCP3DEL_P3RSEN_POSITION                 equ 0007h
ECCP3DEL_P3RSEN_SIZE                     equ 0001h
ECCP3DEL_P3RSEN_LENGTH                   equ 0001h
ECCP3DEL_P3RSEN_MASK                     equ 0080h
ECCP3DEL_P3DC0_POSN                      equ 0000h
ECCP3DEL_P3DC0_POSITION                  equ 0000h
ECCP3DEL_P3DC0_SIZE                      equ 0001h
ECCP3DEL_P3DC0_LENGTH                    equ 0001h
ECCP3DEL_P3DC0_MASK                      equ 0001h
ECCP3DEL_P3DC1_POSN                      equ 0001h
ECCP3DEL_P3DC1_POSITION                  equ 0001h
ECCP3DEL_P3DC1_SIZE                      equ 0001h
ECCP3DEL_P3DC1_LENGTH                    equ 0001h
ECCP3DEL_P3DC1_MASK                      equ 0002h
ECCP3DEL_P3DC2_POSN                      equ 0002h
ECCP3DEL_P3DC2_POSITION                  equ 0002h
ECCP3DEL_P3DC2_SIZE                      equ 0001h
ECCP3DEL_P3DC2_LENGTH                    equ 0001h
ECCP3DEL_P3DC2_MASK                      equ 0004h
ECCP3DEL_P3DC3_POSN                      equ 0003h
ECCP3DEL_P3DC3_POSITION                  equ 0003h
ECCP3DEL_P3DC3_SIZE                      equ 0001h
ECCP3DEL_P3DC3_LENGTH                    equ 0001h
ECCP3DEL_P3DC3_MASK                      equ 0008h
ECCP3DEL_P3DC4_POSN                      equ 0004h
ECCP3DEL_P3DC4_POSITION                  equ 0004h
ECCP3DEL_P3DC4_SIZE                      equ 0001h
ECCP3DEL_P3DC4_LENGTH                    equ 0001h
ECCP3DEL_P3DC4_MASK                      equ 0010h
ECCP3DEL_P3DC5_POSN                      equ 0005h
ECCP3DEL_P3DC5_POSITION                  equ 0005h
ECCP3DEL_P3DC5_SIZE                      equ 0001h
ECCP3DEL_P3DC5_LENGTH                    equ 0001h
ECCP3DEL_P3DC5_MASK                      equ 0020h
ECCP3DEL_P3DC6_POSN                      equ 0006h
ECCP3DEL_P3DC6_POSITION                  equ 0006h
ECCP3DEL_P3DC6_SIZE                      equ 0001h
ECCP3DEL_P3DC6_LENGTH                    equ 0001h
ECCP3DEL_P3DC6_MASK                      equ 0040h

// Register: ECCP3AS
#define ECCP3AS ECCP3AS
ECCP3AS                                  equ 0F4Dh
// bitfield definitions
ECCP3AS_PSS3BD_POSN                      equ 0000h
ECCP3AS_PSS3BD_POSITION                  equ 0000h
ECCP3AS_PSS3BD_SIZE                      equ 0002h
ECCP3AS_PSS3BD_LENGTH                    equ 0002h
ECCP3AS_PSS3BD_MASK                      equ 0003h
ECCP3AS_PSS3AC_POSN                      equ 0002h
ECCP3AS_PSS3AC_POSITION                  equ 0002h
ECCP3AS_PSS3AC_SIZE                      equ 0002h
ECCP3AS_PSS3AC_LENGTH                    equ 0002h
ECCP3AS_PSS3AC_MASK                      equ 000Ch
ECCP3AS_ECCP3AS_POSN                     equ 0004h
ECCP3AS_ECCP3AS_POSITION                 equ 0004h
ECCP3AS_ECCP3AS_SIZE                     equ 0003h
ECCP3AS_ECCP3AS_LENGTH                   equ 0003h
ECCP3AS_ECCP3AS_MASK                     equ 0070h
ECCP3AS_ECCP3ASE_POSN                    equ 0007h
ECCP3AS_ECCP3ASE_POSITION                equ 0007h
ECCP3AS_ECCP3ASE_SIZE                    equ 0001h
ECCP3AS_ECCP3ASE_LENGTH                  equ 0001h
ECCP3AS_ECCP3ASE_MASK                    equ 0080h
ECCP3AS_PSS3BD0_POSN                     equ 0000h
ECCP3AS_PSS3BD0_POSITION                 equ 0000h
ECCP3AS_PSS3BD0_SIZE                     equ 0001h
ECCP3AS_PSS3BD0_LENGTH                   equ 0001h
ECCP3AS_PSS3BD0_MASK                     equ 0001h
ECCP3AS_PSS3BD1_POSN                     equ 0001h
ECCP3AS_PSS3BD1_POSITION                 equ 0001h
ECCP3AS_PSS3BD1_SIZE                     equ 0001h
ECCP3AS_PSS3BD1_LENGTH                   equ 0001h
ECCP3AS_PSS3BD1_MASK                     equ 0002h
ECCP3AS_PSS3AC0_POSN                     equ 0002h
ECCP3AS_PSS3AC0_POSITION                 equ 0002h
ECCP3AS_PSS3AC0_SIZE                     equ 0001h
ECCP3AS_PSS3AC0_LENGTH                   equ 0001h
ECCP3AS_PSS3AC0_MASK                     equ 0004h
ECCP3AS_PSS3AC1_POSN                     equ 0003h
ECCP3AS_PSS3AC1_POSITION                 equ 0003h
ECCP3AS_PSS3AC1_SIZE                     equ 0001h
ECCP3AS_PSS3AC1_LENGTH                   equ 0001h
ECCP3AS_PSS3AC1_MASK                     equ 0008h
ECCP3AS_ECCP3AS0_POSN                    equ 0004h
ECCP3AS_ECCP3AS0_POSITION                equ 0004h
ECCP3AS_ECCP3AS0_SIZE                    equ 0001h
ECCP3AS_ECCP3AS0_LENGTH                  equ 0001h
ECCP3AS_ECCP3AS0_MASK                    equ 0010h
ECCP3AS_ECCP3AS1_POSN                    equ 0005h
ECCP3AS_ECCP3AS1_POSITION                equ 0005h
ECCP3AS_ECCP3AS1_SIZE                    equ 0001h
ECCP3AS_ECCP3AS1_LENGTH                  equ 0001h
ECCP3AS_ECCP3AS1_MASK                    equ 0020h
ECCP3AS_ECCP3AS2_POSN                    equ 0006h
ECCP3AS_ECCP3AS2_POSITION                equ 0006h
ECCP3AS_ECCP3AS2_SIZE                    equ 0001h
ECCP3AS_ECCP3AS2_LENGTH                  equ 0001h
ECCP3AS_ECCP3AS2_MASK                    equ 0040h

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0F4Eh
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
CCP2CON_P2M_POSN                         equ 0006h
CCP2CON_P2M_POSITION                     equ 0006h
CCP2CON_P2M_SIZE                         equ 0002h
CCP2CON_P2M_LENGTH                       equ 0002h
CCP2CON_P2M_MASK                         equ 00C0h
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
CCP2CON_P2M0_POSN                        equ 0006h
CCP2CON_P2M0_POSITION                    equ 0006h
CCP2CON_P2M0_SIZE                        equ 0001h
CCP2CON_P2M0_LENGTH                      equ 0001h
CCP2CON_P2M0_MASK                        equ 0040h
CCP2CON_P2M1_POSN                        equ 0007h
CCP2CON_P2M1_POSITION                    equ 0007h
CCP2CON_P2M1_SIZE                        equ 0001h
CCP2CON_P2M1_LENGTH                      equ 0001h
CCP2CON_P2M1_MASK                        equ 0080h
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

// Register: CCPR2
#define CCPR2 CCPR2
CCPR2                                    equ 0F4Fh

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0F4Fh
// bitfield definitions
CCPR2L_CCPR2L_POSN                       equ 0000h
CCPR2L_CCPR2L_POSITION                   equ 0000h
CCPR2L_CCPR2L_SIZE                       equ 0008h
CCPR2L_CCPR2L_LENGTH                     equ 0008h
CCPR2L_CCPR2L_MASK                       equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0F50h
// bitfield definitions
CCPR2H_CCPR2H_POSN                       equ 0000h
CCPR2H_CCPR2H_POSITION                   equ 0000h
CCPR2H_CCPR2H_SIZE                       equ 0008h
CCPR2H_CCPR2H_LENGTH                     equ 0008h
CCPR2H_CCPR2H_MASK                       equ 00FFh

// Register: ECCP2DEL
#define ECCP2DEL ECCP2DEL
ECCP2DEL                                 equ 0F51h
// bitfield definitions
ECCP2DEL_P2DC_POSN                       equ 0000h
ECCP2DEL_P2DC_POSITION                   equ 0000h
ECCP2DEL_P2DC_SIZE                       equ 0007h
ECCP2DEL_P2DC_LENGTH                     equ 0007h
ECCP2DEL_P2DC_MASK                       equ 007Fh
ECCP2DEL_P2RSEN_POSN                     equ 0007h
ECCP2DEL_P2RSEN_POSITION                 equ 0007h
ECCP2DEL_P2RSEN_SIZE                     equ 0001h
ECCP2DEL_P2RSEN_LENGTH                   equ 0001h
ECCP2DEL_P2RSEN_MASK                     equ 0080h
ECCP2DEL_P2DC0_POSN                      equ 0000h
ECCP2DEL_P2DC0_POSITION                  equ 0000h
ECCP2DEL_P2DC0_SIZE                      equ 0001h
ECCP2DEL_P2DC0_LENGTH                    equ 0001h
ECCP2DEL_P2DC0_MASK                      equ 0001h
ECCP2DEL_P2DC1_POSN                      equ 0001h
ECCP2DEL_P2DC1_POSITION                  equ 0001h
ECCP2DEL_P2DC1_SIZE                      equ 0001h
ECCP2DEL_P2DC1_LENGTH                    equ 0001h
ECCP2DEL_P2DC1_MASK                      equ 0002h
ECCP2DEL_P2DC2_POSN                      equ 0002h
ECCP2DEL_P2DC2_POSITION                  equ 0002h
ECCP2DEL_P2DC2_SIZE                      equ 0001h
ECCP2DEL_P2DC2_LENGTH                    equ 0001h
ECCP2DEL_P2DC2_MASK                      equ 0004h
ECCP2DEL_P2DC3_POSN                      equ 0003h
ECCP2DEL_P2DC3_POSITION                  equ 0003h
ECCP2DEL_P2DC3_SIZE                      equ 0001h
ECCP2DEL_P2DC3_LENGTH                    equ 0001h
ECCP2DEL_P2DC3_MASK                      equ 0008h
ECCP2DEL_P2DC4_POSN                      equ 0004h
ECCP2DEL_P2DC4_POSITION                  equ 0004h
ECCP2DEL_P2DC4_SIZE                      equ 0001h
ECCP2DEL_P2DC4_LENGTH                    equ 0001h
ECCP2DEL_P2DC4_MASK                      equ 0010h
ECCP2DEL_P2DC5_POSN                      equ 0005h
ECCP2DEL_P2DC5_POSITION                  equ 0005h
ECCP2DEL_P2DC5_SIZE                      equ 0001h
ECCP2DEL_P2DC5_LENGTH                    equ 0001h
ECCP2DEL_P2DC5_MASK                      equ 0020h
ECCP2DEL_P2DC6_POSN                      equ 0006h
ECCP2DEL_P2DC6_POSITION                  equ 0006h
ECCP2DEL_P2DC6_SIZE                      equ 0001h
ECCP2DEL_P2DC6_LENGTH                    equ 0001h
ECCP2DEL_P2DC6_MASK                      equ 0040h

// Register: ECCP2AS
#define ECCP2AS ECCP2AS
ECCP2AS                                  equ 0F52h
// bitfield definitions
ECCP2AS_PSS2BD_POSN                      equ 0000h
ECCP2AS_PSS2BD_POSITION                  equ 0000h
ECCP2AS_PSS2BD_SIZE                      equ 0002h
ECCP2AS_PSS2BD_LENGTH                    equ 0002h
ECCP2AS_PSS2BD_MASK                      equ 0003h
ECCP2AS_PSS2AC_POSN                      equ 0002h
ECCP2AS_PSS2AC_POSITION                  equ 0002h
ECCP2AS_PSS2AC_SIZE                      equ 0002h
ECCP2AS_PSS2AC_LENGTH                    equ 0002h
ECCP2AS_PSS2AC_MASK                      equ 000Ch
ECCP2AS_ECCP2AS_POSN                     equ 0004h
ECCP2AS_ECCP2AS_POSITION                 equ 0004h
ECCP2AS_ECCP2AS_SIZE                     equ 0003h
ECCP2AS_ECCP2AS_LENGTH                   equ 0003h
ECCP2AS_ECCP2AS_MASK                     equ 0070h
ECCP2AS_ECCP2ASE_POSN                    equ 0007h
ECCP2AS_ECCP2ASE_POSITION                equ 0007h
ECCP2AS_ECCP2ASE_SIZE                    equ 0001h
ECCP2AS_ECCP2ASE_LENGTH                  equ 0001h
ECCP2AS_ECCP2ASE_MASK                    equ 0080h
ECCP2AS_PSS2BD0_POSN                     equ 0000h
ECCP2AS_PSS2BD0_POSITION                 equ 0000h
ECCP2AS_PSS2BD0_SIZE                     equ 0001h
ECCP2AS_PSS2BD0_LENGTH                   equ 0001h
ECCP2AS_PSS2BD0_MASK                     equ 0001h
ECCP2AS_PSS2BD1_POSN                     equ 0001h
ECCP2AS_PSS2BD1_POSITION                 equ 0001h
ECCP2AS_PSS2BD1_SIZE                     equ 0001h
ECCP2AS_PSS2BD1_LENGTH                   equ 0001h
ECCP2AS_PSS2BD1_MASK                     equ 0002h
ECCP2AS_PSS2AC0_POSN                     equ 0002h
ECCP2AS_PSS2AC0_POSITION                 equ 0002h
ECCP2AS_PSS2AC0_SIZE                     equ 0001h
ECCP2AS_PSS2AC0_LENGTH                   equ 0001h
ECCP2AS_PSS2AC0_MASK                     equ 0004h
ECCP2AS_PSS2AC1_POSN                     equ 0003h
ECCP2AS_PSS2AC1_POSITION                 equ 0003h
ECCP2AS_PSS2AC1_SIZE                     equ 0001h
ECCP2AS_PSS2AC1_LENGTH                   equ 0001h
ECCP2AS_PSS2AC1_MASK                     equ 0008h
ECCP2AS_ECCP2AS0_POSN                    equ 0004h
ECCP2AS_ECCP2AS0_POSITION                equ 0004h
ECCP2AS_ECCP2AS0_SIZE                    equ 0001h
ECCP2AS_ECCP2AS0_LENGTH                  equ 0001h
ECCP2AS_ECCP2AS0_MASK                    equ 0010h
ECCP2AS_ECCP2AS1_POSN                    equ 0005h
ECCP2AS_ECCP2AS1_POSITION                equ 0005h
ECCP2AS_ECCP2AS1_SIZE                    equ 0001h
ECCP2AS_ECCP2AS1_LENGTH                  equ 0001h
ECCP2AS_ECCP2AS1_MASK                    equ 0020h
ECCP2AS_ECCP2AS2_POSN                    equ 0006h
ECCP2AS_ECCP2AS2_POSITION                equ 0006h
ECCP2AS_ECCP2AS2_SIZE                    equ 0001h
ECCP2AS_ECCP2AS2_LENGTH                  equ 0001h
ECCP2AS_ECCP2AS2_MASK                    equ 0040h

// Register: PADCFG1
#define PADCFG1 PADCFG1
PADCFG1                                  equ 0F53h
// bitfield definitions
PADCFG1_RTSECSEL_POSN                    equ 0001h
PADCFG1_RTSECSEL_POSITION                equ 0001h
PADCFG1_RTSECSEL_SIZE                    equ 0002h
PADCFG1_RTSECSEL_LENGTH                  equ 0002h
PADCFG1_RTSECSEL_MASK                    equ 0006h
PADCFG1_RJPU_POSN                        equ 0005h
PADCFG1_RJPU_POSITION                    equ 0005h
PADCFG1_RJPU_SIZE                        equ 0001h
PADCFG1_RJPU_LENGTH                      equ 0001h
PADCFG1_RJPU_MASK                        equ 0020h
PADCFG1_REPU_POSN                        equ 0006h
PADCFG1_REPU_POSITION                    equ 0006h
PADCFG1_REPU_SIZE                        equ 0001h
PADCFG1_REPU_LENGTH                      equ 0001h
PADCFG1_REPU_MASK                        equ 0040h
PADCFG1_RDPU_POSN                        equ 0007h
PADCFG1_RDPU_POSITION                    equ 0007h
PADCFG1_RDPU_SIZE                        equ 0001h
PADCFG1_RDPU_LENGTH                      equ 0001h
PADCFG1_RDPU_MASK                        equ 0080h
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

// Register: CM1CON
#define CM1CON CM1CON
CM1CON                                   equ 0F54h
// bitfield definitions
CM1CON_CCH_POSN                          equ 0000h
CM1CON_CCH_POSITION                      equ 0000h
CM1CON_CCH_SIZE                          equ 0002h
CM1CON_CCH_LENGTH                        equ 0002h
CM1CON_CCH_MASK                          equ 0003h
CM1CON_CREF_POSN                         equ 0002h
CM1CON_CREF_POSITION                     equ 0002h
CM1CON_CREF_SIZE                         equ 0001h
CM1CON_CREF_LENGTH                       equ 0001h
CM1CON_CREF_MASK                         equ 0004h
CM1CON_EVPOL_POSN                        equ 0003h
CM1CON_EVPOL_POSITION                    equ 0003h
CM1CON_EVPOL_SIZE                        equ 0002h
CM1CON_EVPOL_LENGTH                      equ 0002h
CM1CON_EVPOL_MASK                        equ 0018h
CM1CON_CPOL_POSN                         equ 0005h
CM1CON_CPOL_POSITION                     equ 0005h
CM1CON_CPOL_SIZE                         equ 0001h
CM1CON_CPOL_LENGTH                       equ 0001h
CM1CON_CPOL_MASK                         equ 0020h
CM1CON_COE_POSN                          equ 0006h
CM1CON_COE_POSITION                      equ 0006h
CM1CON_COE_SIZE                          equ 0001h
CM1CON_COE_LENGTH                        equ 0001h
CM1CON_COE_MASK                          equ 0040h
CM1CON_CON_POSN                          equ 0007h
CM1CON_CON_POSITION                      equ 0007h
CM1CON_CON_SIZE                          equ 0001h
CM1CON_CON_LENGTH                        equ 0001h
CM1CON_CON_MASK                          equ 0080h
CM1CON_CCH0_POSN                         equ 0000h
CM1CON_CCH0_POSITION                     equ 0000h
CM1CON_CCH0_SIZE                         equ 0001h
CM1CON_CCH0_LENGTH                       equ 0001h
CM1CON_CCH0_MASK                         equ 0001h
CM1CON_CCH1_POSN                         equ 0001h
CM1CON_CCH1_POSITION                     equ 0001h
CM1CON_CCH1_SIZE                         equ 0001h
CM1CON_CCH1_LENGTH                       equ 0001h
CM1CON_CCH1_MASK                         equ 0002h
CM1CON_EVPOL0_POSN                       equ 0003h
CM1CON_EVPOL0_POSITION                   equ 0003h
CM1CON_EVPOL0_SIZE                       equ 0001h
CM1CON_EVPOL0_LENGTH                     equ 0001h
CM1CON_EVPOL0_MASK                       equ 0008h
CM1CON_EVPOL1_POSN                       equ 0004h
CM1CON_EVPOL1_POSITION                   equ 0004h
CM1CON_EVPOL1_SIZE                       equ 0001h
CM1CON_EVPOL1_LENGTH                     equ 0001h
CM1CON_EVPOL1_MASK                       equ 0010h
CM1CON_C1CH0_POSN                        equ 0000h
CM1CON_C1CH0_POSITION                    equ 0000h
CM1CON_C1CH0_SIZE                        equ 0001h
CM1CON_C1CH0_LENGTH                      equ 0001h
CM1CON_C1CH0_MASK                        equ 0001h
CM1CON_C1CH1_POSN                        equ 0001h
CM1CON_C1CH1_POSITION                    equ 0001h
CM1CON_C1CH1_SIZE                        equ 0001h
CM1CON_C1CH1_LENGTH                      equ 0001h
CM1CON_C1CH1_MASK                        equ 0002h
CM1CON_CREF1_POSN                        equ 0002h
CM1CON_CREF1_POSITION                    equ 0002h
CM1CON_CREF1_SIZE                        equ 0001h
CM1CON_CREF1_LENGTH                      equ 0001h
CM1CON_CREF1_MASK                        equ 0004h
CM1CON_EVPOL01_POSN                      equ 0003h
CM1CON_EVPOL01_POSITION                  equ 0003h
CM1CON_EVPOL01_SIZE                      equ 0001h
CM1CON_EVPOL01_LENGTH                    equ 0001h
CM1CON_EVPOL01_MASK                      equ 0008h
CM1CON_EVPOL11_POSN                      equ 0004h
CM1CON_EVPOL11_POSITION                  equ 0004h
CM1CON_EVPOL11_SIZE                      equ 0001h
CM1CON_EVPOL11_LENGTH                    equ 0001h
CM1CON_EVPOL11_MASK                      equ 0010h
CM1CON_CPOL1_POSN                        equ 0005h
CM1CON_CPOL1_POSITION                    equ 0005h
CM1CON_CPOL1_SIZE                        equ 0001h
CM1CON_CPOL1_LENGTH                      equ 0001h
CM1CON_CPOL1_MASK                        equ 0020h
CM1CON_COE1_POSN                         equ 0006h
CM1CON_COE1_POSITION                     equ 0006h
CM1CON_COE1_SIZE                         equ 0001h
CM1CON_COE1_LENGTH                       equ 0001h
CM1CON_COE1_MASK                         equ 0040h
CM1CON_CON1_POSN                         equ 0007h
CM1CON_CON1_POSITION                     equ 0007h
CM1CON_CON1_SIZE                         equ 0001h
CM1CON_CON1_LENGTH                       equ 0001h
CM1CON_CON1_MASK                         equ 0080h
CM1CON_CCH01_POSN                        equ 0000h
CM1CON_CCH01_POSITION                    equ 0000h
CM1CON_CCH01_SIZE                        equ 0001h
CM1CON_CCH01_LENGTH                      equ 0001h
CM1CON_CCH01_MASK                        equ 0001h
CM1CON_CCH11_POSN                        equ 0001h
CM1CON_CCH11_POSITION                    equ 0001h
CM1CON_CCH11_SIZE                        equ 0001h
CM1CON_CCH11_LENGTH                      equ 0001h
CM1CON_CCH11_MASK                        equ 0002h

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

// Register: ALRMVAL
#define ALRMVAL ALRMVAL
ALRMVAL                                  equ 0F58h

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

// Register: RTCVAL
#define RTCVAL RTCVAL
RTCVAL                                   equ 0F5Ch

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
RTCCFG_RTCPTR_POSN                       equ 0000h
RTCCFG_RTCPTR_POSITION                   equ 0000h
RTCCFG_RTCPTR_SIZE                       equ 0002h
RTCCFG_RTCPTR_LENGTH                     equ 0002h
RTCCFG_RTCPTR_MASK                       equ 0003h
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

// Register: PIE6
#define PIE6 PIE6
PIE6                                     equ 0F60h
// bitfield definitions
PIE6_CMP1IE_POSN                         equ 0000h
PIE6_CMP1IE_POSITION                     equ 0000h
PIE6_CMP1IE_SIZE                         equ 0001h
PIE6_CMP1IE_LENGTH                       equ 0001h
PIE6_CMP1IE_MASK                         equ 0001h
PIE6_CMP2IE_POSN                         equ 0001h
PIE6_CMP2IE_POSITION                     equ 0001h
PIE6_CMP2IE_SIZE                         equ 0001h
PIE6_CMP2IE_LENGTH                       equ 0001h
PIE6_CMP2IE_MASK                         equ 0002h
PIE6_CMP3IE_POSN                         equ 0002h
PIE6_CMP3IE_POSITION                     equ 0002h
PIE6_CMP3IE_SIZE                         equ 0001h
PIE6_CMP3IE_LENGTH                       equ 0001h
PIE6_CMP3IE_MASK                         equ 0004h
PIE6_EEIE_POSN                           equ 0004h
PIE6_EEIE_POSITION                       equ 0004h
PIE6_EEIE_SIZE                           equ 0001h
PIE6_EEIE_LENGTH                         equ 0001h
PIE6_EEIE_MASK                           equ 0010h

// Register: EEDATA
#define EEDATA EEDATA
EEDATA                                   equ 0F61h
// bitfield definitions
EEDATA_EEDATA_POSN                       equ 0000h
EEDATA_EEDATA_POSITION                   equ 0000h
EEDATA_EEDATA_SIZE                       equ 0008h
EEDATA_EEDATA_LENGTH                     equ 0008h
EEDATA_EEDATA_MASK                       equ 00FFh

// Register: EEADR
#define EEADR EEADR
EEADR                                    equ 0F62h
// bitfield definitions
EEADR_EEADR_POSN                         equ 0000h
EEADR_EEADR_POSITION                     equ 0000h
EEADR_EEADR_SIZE                         equ 0008h
EEADR_EEADR_LENGTH                       equ 0008h
EEADR_EEADR_MASK                         equ 00FFh

// Register: EEADRH
#define EEADRH EEADRH
EEADRH                                   equ 0F63h
// bitfield definitions
EEADRH_EEADRH_POSN                       equ 0000h
EEADRH_EEADRH_POSITION                   equ 0000h
EEADRH_EEADRH_SIZE                       equ 0002h
EEADRH_EEADRH_LENGTH                     equ 0002h
EEADRH_EEADRH_MASK                       equ 0003h

// Register: OSCCON2
#define OSCCON2 OSCCON2
OSCCON2                                  equ 0F64h
// bitfield definitions
OSCCON2_MFIOSEL_POSN                     equ 0000h
OSCCON2_MFIOSEL_POSITION                 equ 0000h
OSCCON2_MFIOSEL_SIZE                     equ 0001h
OSCCON2_MFIOSEL_LENGTH                   equ 0001h
OSCCON2_MFIOSEL_MASK                     equ 0001h
OSCCON2_MFIOFS_POSN                      equ 0001h
OSCCON2_MFIOFS_POSITION                  equ 0001h
OSCCON2_MFIOFS_SIZE                      equ 0001h
OSCCON2_MFIOFS_LENGTH                    equ 0001h
OSCCON2_MFIOFS_MASK                      equ 0002h
OSCCON2_SOSCGO_POSN                      equ 0003h
OSCCON2_SOSCGO_POSITION                  equ 0003h
OSCCON2_SOSCGO_SIZE                      equ 0001h
OSCCON2_SOSCGO_LENGTH                    equ 0001h
OSCCON2_SOSCGO_MASK                      equ 0008h
OSCCON2_SOSCRUN_POSN                     equ 0006h
OSCCON2_SOSCRUN_POSITION                 equ 0006h
OSCCON2_SOSCRUN_SIZE                     equ 0001h
OSCCON2_SOSCRUN_LENGTH                   equ 0001h
OSCCON2_SOSCRUN_MASK                     equ 0040h

// Register: BAUDCON1
#define BAUDCON1 BAUDCON1
BAUDCON1                                 equ 0F65h
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
BAUDCON1_RCMT_POSN                       equ 0006h
BAUDCON1_RCMT_POSITION                   equ 0006h
BAUDCON1_RCMT_SIZE                       equ 0001h
BAUDCON1_RCMT_LENGTH                     equ 0001h
BAUDCON1_RCMT_MASK                       equ 0040h
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
BAUDCON1_RCMT1_POSN                      equ 0006h
BAUDCON1_RCMT1_POSITION                  equ 0006h
BAUDCON1_RCMT1_SIZE                      equ 0001h
BAUDCON1_RCMT1_LENGTH                    equ 0001h
BAUDCON1_RCMT1_MASK                      equ 0040h
BAUDCON1_TXCKP1_POSN                     equ 0004h
BAUDCON1_TXCKP1_POSITION                 equ 0004h
BAUDCON1_TXCKP1_SIZE                     equ 0001h
BAUDCON1_TXCKP1_LENGTH                   equ 0001h
BAUDCON1_TXCKP1_MASK                     equ 0010h
BAUDCON1_W4E_POSN                        equ 0001h
BAUDCON1_W4E_POSITION                    equ 0001h
BAUDCON1_W4E_SIZE                        equ 0001h
BAUDCON1_W4E_LENGTH                      equ 0001h
BAUDCON1_W4E_MASK                        equ 0002h
BAUDCON1_RXCKP_POSN                      equ 0005h
BAUDCON1_RXCKP_POSITION                  equ 0005h
BAUDCON1_RXCKP_SIZE                      equ 0001h
BAUDCON1_RXCKP_LENGTH                    equ 0001h
BAUDCON1_RXCKP_MASK                      equ 0020h

// Register: SSP2CON2
#define SSP2CON2 SSP2CON2
SSP2CON2                                 equ 0F66h
// bitfield definitions
SSP2CON2_SEN_POSN                        equ 0000h
SSP2CON2_SEN_POSITION                    equ 0000h
SSP2CON2_SEN_SIZE                        equ 0001h
SSP2CON2_SEN_LENGTH                      equ 0001h
SSP2CON2_SEN_MASK                        equ 0001h
SSP2CON2_RSEN_POSN                       equ 0001h
SSP2CON2_RSEN_POSITION                   equ 0001h
SSP2CON2_RSEN_SIZE                       equ 0001h
SSP2CON2_RSEN_LENGTH                     equ 0001h
SSP2CON2_RSEN_MASK                       equ 0002h
SSP2CON2_PEN_POSN                        equ 0002h
SSP2CON2_PEN_POSITION                    equ 0002h
SSP2CON2_PEN_SIZE                        equ 0001h
SSP2CON2_PEN_LENGTH                      equ 0001h
SSP2CON2_PEN_MASK                        equ 0004h
SSP2CON2_RCEN_POSN                       equ 0003h
SSP2CON2_RCEN_POSITION                   equ 0003h
SSP2CON2_RCEN_SIZE                       equ 0001h
SSP2CON2_RCEN_LENGTH                     equ 0001h
SSP2CON2_RCEN_MASK                       equ 0008h
SSP2CON2_ACKEN_POSN                      equ 0004h
SSP2CON2_ACKEN_POSITION                  equ 0004h
SSP2CON2_ACKEN_SIZE                      equ 0001h
SSP2CON2_ACKEN_LENGTH                    equ 0001h
SSP2CON2_ACKEN_MASK                      equ 0010h
SSP2CON2_ACKDT_POSN                      equ 0005h
SSP2CON2_ACKDT_POSITION                  equ 0005h
SSP2CON2_ACKDT_SIZE                      equ 0001h
SSP2CON2_ACKDT_LENGTH                    equ 0001h
SSP2CON2_ACKDT_MASK                      equ 0020h
SSP2CON2_ACKSTAT_POSN                    equ 0006h
SSP2CON2_ACKSTAT_POSITION                equ 0006h
SSP2CON2_ACKSTAT_SIZE                    equ 0001h
SSP2CON2_ACKSTAT_LENGTH                  equ 0001h
SSP2CON2_ACKSTAT_MASK                    equ 0040h
SSP2CON2_GCEN_POSN                       equ 0007h
SSP2CON2_GCEN_POSITION                   equ 0007h
SSP2CON2_GCEN_SIZE                       equ 0001h
SSP2CON2_GCEN_LENGTH                     equ 0001h
SSP2CON2_GCEN_MASK                       equ 0080h
SSP2CON2_ADMSK1_POSN                     equ 0001h
SSP2CON2_ADMSK1_POSITION                 equ 0001h
SSP2CON2_ADMSK1_SIZE                     equ 0001h
SSP2CON2_ADMSK1_LENGTH                   equ 0001h
SSP2CON2_ADMSK1_MASK                     equ 0002h
SSP2CON2_ADMSK2_POSN                     equ 0002h
SSP2CON2_ADMSK2_POSITION                 equ 0002h
SSP2CON2_ADMSK2_SIZE                     equ 0001h
SSP2CON2_ADMSK2_LENGTH                   equ 0001h
SSP2CON2_ADMSK2_MASK                     equ 0004h
SSP2CON2_ADMSK3_POSN                     equ 0003h
SSP2CON2_ADMSK3_POSITION                 equ 0003h
SSP2CON2_ADMSK3_SIZE                     equ 0001h
SSP2CON2_ADMSK3_LENGTH                   equ 0001h
SSP2CON2_ADMSK3_MASK                     equ 0008h
SSP2CON2_ADMSK4_POSN                     equ 0004h
SSP2CON2_ADMSK4_POSITION                 equ 0004h
SSP2CON2_ADMSK4_SIZE                     equ 0001h
SSP2CON2_ADMSK4_LENGTH                   equ 0001h
SSP2CON2_ADMSK4_MASK                     equ 0010h
SSP2CON2_ADMSK5_POSN                     equ 0005h
SSP2CON2_ADMSK5_POSITION                 equ 0005h
SSP2CON2_ADMSK5_SIZE                     equ 0001h
SSP2CON2_ADMSK5_LENGTH                   equ 0001h
SSP2CON2_ADMSK5_MASK                     equ 0020h
SSP2CON2_SEN2_POSN                       equ 0000h
SSP2CON2_SEN2_POSITION                   equ 0000h
SSP2CON2_SEN2_SIZE                       equ 0001h
SSP2CON2_SEN2_LENGTH                     equ 0001h
SSP2CON2_SEN2_MASK                       equ 0001h
SSP2CON2_ADMSK12_POSN                    equ 0001h
SSP2CON2_ADMSK12_POSITION                equ 0001h
SSP2CON2_ADMSK12_SIZE                    equ 0001h
SSP2CON2_ADMSK12_LENGTH                  equ 0001h
SSP2CON2_ADMSK12_MASK                    equ 0002h
SSP2CON2_ADMSK22_POSN                    equ 0002h
SSP2CON2_ADMSK22_POSITION                equ 0002h
SSP2CON2_ADMSK22_SIZE                    equ 0001h
SSP2CON2_ADMSK22_LENGTH                  equ 0001h
SSP2CON2_ADMSK22_MASK                    equ 0004h
SSP2CON2_ADMSK32_POSN                    equ 0003h
SSP2CON2_ADMSK32_POSITION                equ 0003h
SSP2CON2_ADMSK32_SIZE                    equ 0001h
SSP2CON2_ADMSK32_LENGTH                  equ 0001h
SSP2CON2_ADMSK32_MASK                    equ 0008h
SSP2CON2_ACKEN2_POSN                     equ 0004h
SSP2CON2_ACKEN2_POSITION                 equ 0004h
SSP2CON2_ACKEN2_SIZE                     equ 0001h
SSP2CON2_ACKEN2_LENGTH                   equ 0001h
SSP2CON2_ACKEN2_MASK                     equ 0010h
SSP2CON2_ACKDT2_POSN                     equ 0005h
SSP2CON2_ACKDT2_POSITION                 equ 0005h
SSP2CON2_ACKDT2_SIZE                     equ 0001h
SSP2CON2_ACKDT2_LENGTH                   equ 0001h
SSP2CON2_ACKDT2_MASK                     equ 0020h
SSP2CON2_ACKSTAT2_POSN                   equ 0006h
SSP2CON2_ACKSTAT2_POSITION               equ 0006h
SSP2CON2_ACKSTAT2_SIZE                   equ 0001h
SSP2CON2_ACKSTAT2_LENGTH                 equ 0001h
SSP2CON2_ACKSTAT2_MASK                   equ 0040h
SSP2CON2_GCEN2_POSN                      equ 0007h
SSP2CON2_GCEN2_POSITION                  equ 0007h
SSP2CON2_GCEN2_SIZE                      equ 0001h
SSP2CON2_GCEN2_LENGTH                    equ 0001h
SSP2CON2_GCEN2_MASK                      equ 0080h
SSP2CON2_RSEN2_POSN                      equ 0001h
SSP2CON2_RSEN2_POSITION                  equ 0001h
SSP2CON2_RSEN2_SIZE                      equ 0001h
SSP2CON2_RSEN2_LENGTH                    equ 0001h
SSP2CON2_RSEN2_MASK                      equ 0002h
SSP2CON2_PEN2_POSN                       equ 0002h
SSP2CON2_PEN2_POSITION                   equ 0002h
SSP2CON2_PEN2_SIZE                       equ 0001h
SSP2CON2_PEN2_LENGTH                     equ 0001h
SSP2CON2_PEN2_MASK                       equ 0004h
SSP2CON2_RCEN2_POSN                      equ 0003h
SSP2CON2_RCEN2_POSITION                  equ 0003h
SSP2CON2_RCEN2_SIZE                      equ 0001h
SSP2CON2_RCEN2_LENGTH                    equ 0001h
SSP2CON2_RCEN2_MASK                      equ 0008h
SSP2CON2_ADMSK42_POSN                    equ 0004h
SSP2CON2_ADMSK42_POSITION                equ 0004h
SSP2CON2_ADMSK42_SIZE                    equ 0001h
SSP2CON2_ADMSK42_LENGTH                  equ 0001h
SSP2CON2_ADMSK42_MASK                    equ 0010h
SSP2CON2_ADMSK52_POSN                    equ 0005h
SSP2CON2_ADMSK52_POSITION                equ 0005h
SSP2CON2_ADMSK52_SIZE                    equ 0001h
SSP2CON2_ADMSK52_LENGTH                  equ 0001h
SSP2CON2_ADMSK52_MASK                    equ 0020h

// Register: SSP2CON1
#define SSP2CON1 SSP2CON1
SSP2CON1                                 equ 0F67h
// bitfield definitions
SSP2CON1_SSPM_POSN                       equ 0000h
SSP2CON1_SSPM_POSITION                   equ 0000h
SSP2CON1_SSPM_SIZE                       equ 0004h
SSP2CON1_SSPM_LENGTH                     equ 0004h
SSP2CON1_SSPM_MASK                       equ 000Fh
SSP2CON1_CKP_POSN                        equ 0004h
SSP2CON1_CKP_POSITION                    equ 0004h
SSP2CON1_CKP_SIZE                        equ 0001h
SSP2CON1_CKP_LENGTH                      equ 0001h
SSP2CON1_CKP_MASK                        equ 0010h
SSP2CON1_SSPEN_POSN                      equ 0005h
SSP2CON1_SSPEN_POSITION                  equ 0005h
SSP2CON1_SSPEN_SIZE                      equ 0001h
SSP2CON1_SSPEN_LENGTH                    equ 0001h
SSP2CON1_SSPEN_MASK                      equ 0020h
SSP2CON1_SSPOV_POSN                      equ 0006h
SSP2CON1_SSPOV_POSITION                  equ 0006h
SSP2CON1_SSPOV_SIZE                      equ 0001h
SSP2CON1_SSPOV_LENGTH                    equ 0001h
SSP2CON1_SSPOV_MASK                      equ 0040h
SSP2CON1_WCOL_POSN                       equ 0007h
SSP2CON1_WCOL_POSITION                   equ 0007h
SSP2CON1_WCOL_SIZE                       equ 0001h
SSP2CON1_WCOL_LENGTH                     equ 0001h
SSP2CON1_WCOL_MASK                       equ 0080h
SSP2CON1_SSPM0_POSN                      equ 0000h
SSP2CON1_SSPM0_POSITION                  equ 0000h
SSP2CON1_SSPM0_SIZE                      equ 0001h
SSP2CON1_SSPM0_LENGTH                    equ 0001h
SSP2CON1_SSPM0_MASK                      equ 0001h
SSP2CON1_SSPM1_POSN                      equ 0001h
SSP2CON1_SSPM1_POSITION                  equ 0001h
SSP2CON1_SSPM1_SIZE                      equ 0001h
SSP2CON1_SSPM1_LENGTH                    equ 0001h
SSP2CON1_SSPM1_MASK                      equ 0002h
SSP2CON1_SSPM2_POSN                      equ 0002h
SSP2CON1_SSPM2_POSITION                  equ 0002h
SSP2CON1_SSPM2_SIZE                      equ 0001h
SSP2CON1_SSPM2_LENGTH                    equ 0001h
SSP2CON1_SSPM2_MASK                      equ 0004h
SSP2CON1_SSPM3_POSN                      equ 0003h
SSP2CON1_SSPM3_POSITION                  equ 0003h
SSP2CON1_SSPM3_SIZE                      equ 0001h
SSP2CON1_SSPM3_LENGTH                    equ 0001h
SSP2CON1_SSPM3_MASK                      equ 0008h
SSP2CON1_SSPM02_POSN                     equ 0000h
SSP2CON1_SSPM02_POSITION                 equ 0000h
SSP2CON1_SSPM02_SIZE                     equ 0001h
SSP2CON1_SSPM02_LENGTH                   equ 0001h
SSP2CON1_SSPM02_MASK                     equ 0001h
SSP2CON1_SSPM12_POSN                     equ 0001h
SSP2CON1_SSPM12_POSITION                 equ 0001h
SSP2CON1_SSPM12_SIZE                     equ 0001h
SSP2CON1_SSPM12_LENGTH                   equ 0001h
SSP2CON1_SSPM12_MASK                     equ 0002h
SSP2CON1_SSPM22_POSN                     equ 0002h
SSP2CON1_SSPM22_POSITION                 equ 0002h
SSP2CON1_SSPM22_SIZE                     equ 0001h
SSP2CON1_SSPM22_LENGTH                   equ 0001h
SSP2CON1_SSPM22_MASK                     equ 0004h
SSP2CON1_SSPM32_POSN                     equ 0003h
SSP2CON1_SSPM32_POSITION                 equ 0003h
SSP2CON1_SSPM32_SIZE                     equ 0001h
SSP2CON1_SSPM32_LENGTH                   equ 0001h
SSP2CON1_SSPM32_MASK                     equ 0008h
SSP2CON1_CKP2_POSN                       equ 0004h
SSP2CON1_CKP2_POSITION                   equ 0004h
SSP2CON1_CKP2_SIZE                       equ 0001h
SSP2CON1_CKP2_LENGTH                     equ 0001h
SSP2CON1_CKP2_MASK                       equ 0010h
SSP2CON1_SSPEN2_POSN                     equ 0005h
SSP2CON1_SSPEN2_POSITION                 equ 0005h
SSP2CON1_SSPEN2_SIZE                     equ 0001h
SSP2CON1_SSPEN2_LENGTH                   equ 0001h
SSP2CON1_SSPEN2_MASK                     equ 0020h
SSP2CON1_SSPOV2_POSN                     equ 0006h
SSP2CON1_SSPOV2_POSITION                 equ 0006h
SSP2CON1_SSPOV2_SIZE                     equ 0001h
SSP2CON1_SSPOV2_LENGTH                   equ 0001h
SSP2CON1_SSPOV2_MASK                     equ 0040h
SSP2CON1_WCOL2_POSN                      equ 0007h
SSP2CON1_WCOL2_POSITION                  equ 0007h
SSP2CON1_WCOL2_SIZE                      equ 0001h
SSP2CON1_WCOL2_LENGTH                    equ 0001h
SSP2CON1_WCOL2_MASK                      equ 0080h

// Register: SSP2STAT
#define SSP2STAT SSP2STAT
SSP2STAT                                 equ 0F68h
// bitfield definitions
SSP2STAT_R_NOT_W_POSN                    equ 0002h
SSP2STAT_R_NOT_W_POSITION                equ 0002h
SSP2STAT_R_NOT_W_SIZE                    equ 0001h
SSP2STAT_R_NOT_W_LENGTH                  equ 0001h
SSP2STAT_R_NOT_W_MASK                    equ 0004h
SSP2STAT_D_NOT_A_POSN                    equ 0005h
SSP2STAT_D_NOT_A_POSITION                equ 0005h
SSP2STAT_D_NOT_A_SIZE                    equ 0001h
SSP2STAT_D_NOT_A_LENGTH                  equ 0001h
SSP2STAT_D_NOT_A_MASK                    equ 0020h
SSP2STAT_BF_POSN                         equ 0000h
SSP2STAT_BF_POSITION                     equ 0000h
SSP2STAT_BF_SIZE                         equ 0001h
SSP2STAT_BF_LENGTH                       equ 0001h
SSP2STAT_BF_MASK                         equ 0001h
SSP2STAT_UA_POSN                         equ 0001h
SSP2STAT_UA_POSITION                     equ 0001h
SSP2STAT_UA_SIZE                         equ 0001h
SSP2STAT_UA_LENGTH                       equ 0001h
SSP2STAT_UA_MASK                         equ 0002h
SSP2STAT_R_nW_POSN                       equ 0002h
SSP2STAT_R_nW_POSITION                   equ 0002h
SSP2STAT_R_nW_SIZE                       equ 0001h
SSP2STAT_R_nW_LENGTH                     equ 0001h
SSP2STAT_R_nW_MASK                       equ 0004h
SSP2STAT_S_POSN                          equ 0003h
SSP2STAT_S_POSITION                      equ 0003h
SSP2STAT_S_SIZE                          equ 0001h
SSP2STAT_S_LENGTH                        equ 0001h
SSP2STAT_S_MASK                          equ 0008h
SSP2STAT_P_POSN                          equ 0004h
SSP2STAT_P_POSITION                      equ 0004h
SSP2STAT_P_SIZE                          equ 0001h
SSP2STAT_P_LENGTH                        equ 0001h
SSP2STAT_P_MASK                          equ 0010h
SSP2STAT_D_nA_POSN                       equ 0005h
SSP2STAT_D_nA_POSITION                   equ 0005h
SSP2STAT_D_nA_SIZE                       equ 0001h
SSP2STAT_D_nA_LENGTH                     equ 0001h
SSP2STAT_D_nA_MASK                       equ 0020h
SSP2STAT_CKE_POSN                        equ 0006h
SSP2STAT_CKE_POSITION                    equ 0006h
SSP2STAT_CKE_SIZE                        equ 0001h
SSP2STAT_CKE_LENGTH                      equ 0001h
SSP2STAT_CKE_MASK                        equ 0040h
SSP2STAT_SMP_POSN                        equ 0007h
SSP2STAT_SMP_POSITION                    equ 0007h
SSP2STAT_SMP_SIZE                        equ 0001h
SSP2STAT_SMP_LENGTH                      equ 0001h
SSP2STAT_SMP_MASK                        equ 0080h
SSP2STAT_R_POSN                          equ 0002h
SSP2STAT_R_POSITION                      equ 0002h
SSP2STAT_R_SIZE                          equ 0001h
SSP2STAT_R_LENGTH                        equ 0001h
SSP2STAT_R_MASK                          equ 0004h
SSP2STAT_D_POSN                          equ 0005h
SSP2STAT_D_POSITION                      equ 0005h
SSP2STAT_D_SIZE                          equ 0001h
SSP2STAT_D_LENGTH                        equ 0001h
SSP2STAT_D_MASK                          equ 0020h
SSP2STAT_R_W_POSN                        equ 0002h
SSP2STAT_R_W_POSITION                    equ 0002h
SSP2STAT_R_W_SIZE                        equ 0001h
SSP2STAT_R_W_LENGTH                      equ 0001h
SSP2STAT_R_W_MASK                        equ 0004h
SSP2STAT_D_A_POSN                        equ 0005h
SSP2STAT_D_A_POSITION                    equ 0005h
SSP2STAT_D_A_SIZE                        equ 0001h
SSP2STAT_D_A_LENGTH                      equ 0001h
SSP2STAT_D_A_MASK                        equ 0020h
SSP2STAT_nW_POSN                         equ 0002h
SSP2STAT_nW_POSITION                     equ 0002h
SSP2STAT_nW_SIZE                         equ 0001h
SSP2STAT_nW_LENGTH                       equ 0001h
SSP2STAT_nW_MASK                         equ 0004h
SSP2STAT_nA_POSN                         equ 0005h
SSP2STAT_nA_POSITION                     equ 0005h
SSP2STAT_nA_SIZE                         equ 0001h
SSP2STAT_nA_LENGTH                       equ 0001h
SSP2STAT_nA_MASK                         equ 0020h
SSP2STAT_NOT_WRITE_POSN                  equ 0002h
SSP2STAT_NOT_WRITE_POSITION              equ 0002h
SSP2STAT_NOT_WRITE_SIZE                  equ 0001h
SSP2STAT_NOT_WRITE_LENGTH                equ 0001h
SSP2STAT_NOT_WRITE_MASK                  equ 0004h
SSP2STAT_NOT_ADDRESS_POSN                equ 0005h
SSP2STAT_NOT_ADDRESS_POSITION            equ 0005h
SSP2STAT_NOT_ADDRESS_SIZE                equ 0001h
SSP2STAT_NOT_ADDRESS_LENGTH              equ 0001h
SSP2STAT_NOT_ADDRESS_MASK                equ 0020h
SSP2STAT_nWRITE_POSN                     equ 0002h
SSP2STAT_nWRITE_POSITION                 equ 0002h
SSP2STAT_nWRITE_SIZE                     equ 0001h
SSP2STAT_nWRITE_LENGTH                   equ 0001h
SSP2STAT_nWRITE_MASK                     equ 0004h
SSP2STAT_nADDRESS_POSN                   equ 0005h
SSP2STAT_nADDRESS_POSITION               equ 0005h
SSP2STAT_nADDRESS_SIZE                   equ 0001h
SSP2STAT_nADDRESS_LENGTH                 equ 0001h
SSP2STAT_nADDRESS_MASK                   equ 0020h
SSP2STAT_READ_WRITE_POSN                 equ 0002h
SSP2STAT_READ_WRITE_POSITION             equ 0002h
SSP2STAT_READ_WRITE_SIZE                 equ 0001h
SSP2STAT_READ_WRITE_LENGTH               equ 0001h
SSP2STAT_READ_WRITE_MASK                 equ 0004h
SSP2STAT_DATA_ADDRESS_POSN               equ 0005h
SSP2STAT_DATA_ADDRESS_POSITION           equ 0005h
SSP2STAT_DATA_ADDRESS_SIZE               equ 0001h
SSP2STAT_DATA_ADDRESS_LENGTH             equ 0001h
SSP2STAT_DATA_ADDRESS_MASK               equ 0020h
SSP2STAT_I2C_READ_POSN                   equ 0002h
SSP2STAT_I2C_READ_POSITION               equ 0002h
SSP2STAT_I2C_READ_SIZE                   equ 0001h
SSP2STAT_I2C_READ_LENGTH                 equ 0001h
SSP2STAT_I2C_READ_MASK                   equ 0004h
SSP2STAT_I2C_START_POSN                  equ 0003h
SSP2STAT_I2C_START_POSITION              equ 0003h
SSP2STAT_I2C_START_SIZE                  equ 0001h
SSP2STAT_I2C_START_LENGTH                equ 0001h
SSP2STAT_I2C_START_MASK                  equ 0008h
SSP2STAT_I2C_STOP_POSN                   equ 0004h
SSP2STAT_I2C_STOP_POSITION               equ 0004h
SSP2STAT_I2C_STOP_SIZE                   equ 0001h
SSP2STAT_I2C_STOP_LENGTH                 equ 0001h
SSP2STAT_I2C_STOP_MASK                   equ 0010h
SSP2STAT_I2C_DAT_POSN                    equ 0005h
SSP2STAT_I2C_DAT_POSITION                equ 0005h
SSP2STAT_I2C_DAT_SIZE                    equ 0001h
SSP2STAT_I2C_DAT_LENGTH                  equ 0001h
SSP2STAT_I2C_DAT_MASK                    equ 0020h
SSP2STAT_BF2_POSN                        equ 0000h
SSP2STAT_BF2_POSITION                    equ 0000h
SSP2STAT_BF2_SIZE                        equ 0001h
SSP2STAT_BF2_LENGTH                      equ 0001h
SSP2STAT_BF2_MASK                        equ 0001h
SSP2STAT_UA2_POSN                        equ 0001h
SSP2STAT_UA2_POSITION                    equ 0001h
SSP2STAT_UA2_SIZE                        equ 0001h
SSP2STAT_UA2_LENGTH                      equ 0001h
SSP2STAT_UA2_MASK                        equ 0002h
SSP2STAT_I2C_READ2_POSN                  equ 0002h
SSP2STAT_I2C_READ2_POSITION              equ 0002h
SSP2STAT_I2C_READ2_SIZE                  equ 0001h
SSP2STAT_I2C_READ2_LENGTH                equ 0001h
SSP2STAT_I2C_READ2_MASK                  equ 0004h
SSP2STAT_I2C_START2_POSN                 equ 0003h
SSP2STAT_I2C_START2_POSITION             equ 0003h
SSP2STAT_I2C_START2_SIZE                 equ 0001h
SSP2STAT_I2C_START2_LENGTH               equ 0001h
SSP2STAT_I2C_START2_MASK                 equ 0008h
SSP2STAT_I2C_STOP2_POSN                  equ 0004h
SSP2STAT_I2C_STOP2_POSITION              equ 0004h
SSP2STAT_I2C_STOP2_SIZE                  equ 0001h
SSP2STAT_I2C_STOP2_LENGTH                equ 0001h
SSP2STAT_I2C_STOP2_MASK                  equ 0010h
SSP2STAT_DA2_POSN                        equ 0005h
SSP2STAT_DA2_POSITION                    equ 0005h
SSP2STAT_DA2_SIZE                        equ 0001h
SSP2STAT_DA2_LENGTH                      equ 0001h
SSP2STAT_DA2_MASK                        equ 0020h
SSP2STAT_CKE2_POSN                       equ 0006h
SSP2STAT_CKE2_POSITION                   equ 0006h
SSP2STAT_CKE2_SIZE                       equ 0001h
SSP2STAT_CKE2_LENGTH                     equ 0001h
SSP2STAT_CKE2_MASK                       equ 0040h
SSP2STAT_SMP2_POSN                       equ 0007h
SSP2STAT_SMP2_POSITION                   equ 0007h
SSP2STAT_SMP2_SIZE                       equ 0001h
SSP2STAT_SMP2_LENGTH                     equ 0001h
SSP2STAT_SMP2_MASK                       equ 0080h
SSP2STAT_READ_WRITE2_POSN                equ 0002h
SSP2STAT_READ_WRITE2_POSITION            equ 0002h
SSP2STAT_READ_WRITE2_SIZE                equ 0001h
SSP2STAT_READ_WRITE2_LENGTH              equ 0001h
SSP2STAT_READ_WRITE2_MASK                equ 0004h
SSP2STAT_S2_POSN                         equ 0003h
SSP2STAT_S2_POSITION                     equ 0003h
SSP2STAT_S2_SIZE                         equ 0001h
SSP2STAT_S2_LENGTH                       equ 0001h
SSP2STAT_S2_MASK                         equ 0008h
SSP2STAT_P2_POSN                         equ 0004h
SSP2STAT_P2_POSITION                     equ 0004h
SSP2STAT_P2_SIZE                         equ 0001h
SSP2STAT_P2_LENGTH                       equ 0001h
SSP2STAT_P2_MASK                         equ 0010h
SSP2STAT_DATA_ADDRESS2_POSN              equ 0005h
SSP2STAT_DATA_ADDRESS2_POSITION          equ 0005h
SSP2STAT_DATA_ADDRESS2_SIZE              equ 0001h
SSP2STAT_DATA_ADDRESS2_LENGTH            equ 0001h
SSP2STAT_DATA_ADDRESS2_MASK              equ 0020h
SSP2STAT_RW2_POSN                        equ 0002h
SSP2STAT_RW2_POSITION                    equ 0002h
SSP2STAT_RW2_SIZE                        equ 0001h
SSP2STAT_RW2_LENGTH                      equ 0001h
SSP2STAT_RW2_MASK                        equ 0004h
SSP2STAT_START2_POSN                     equ 0003h
SSP2STAT_START2_POSITION                 equ 0003h
SSP2STAT_START2_SIZE                     equ 0001h
SSP2STAT_START2_LENGTH                   equ 0001h
SSP2STAT_START2_MASK                     equ 0008h
SSP2STAT_STOP2_POSN                      equ 0004h
SSP2STAT_STOP2_POSITION                  equ 0004h
SSP2STAT_STOP2_SIZE                      equ 0001h
SSP2STAT_STOP2_LENGTH                    equ 0001h
SSP2STAT_STOP2_MASK                      equ 0010h
SSP2STAT_D_A2_POSN                       equ 0005h
SSP2STAT_D_A2_POSITION                   equ 0005h
SSP2STAT_D_A2_SIZE                       equ 0001h
SSP2STAT_D_A2_LENGTH                     equ 0001h
SSP2STAT_D_A2_MASK                       equ 0020h
SSP2STAT_D_NOT_A2_POSN                   equ 0005h
SSP2STAT_D_NOT_A2_POSITION               equ 0005h
SSP2STAT_D_NOT_A2_SIZE                   equ 0001h
SSP2STAT_D_NOT_A2_LENGTH                 equ 0001h
SSP2STAT_D_NOT_A2_MASK                   equ 0020h
SSP2STAT_R_W2_POSN                       equ 0002h
SSP2STAT_R_W2_POSITION                   equ 0002h
SSP2STAT_R_W2_SIZE                       equ 0001h
SSP2STAT_R_W2_LENGTH                     equ 0001h
SSP2STAT_R_W2_MASK                       equ 0004h
SSP2STAT_D_nA2_POSN                      equ 0005h
SSP2STAT_D_nA2_POSITION                  equ 0005h
SSP2STAT_D_nA2_SIZE                      equ 0001h
SSP2STAT_D_nA2_LENGTH                    equ 0001h
SSP2STAT_D_nA2_MASK                      equ 0020h
SSP2STAT_R_NOT_W2_POSN                   equ 0002h
SSP2STAT_R_NOT_W2_POSITION               equ 0002h
SSP2STAT_R_NOT_W2_SIZE                   equ 0001h
SSP2STAT_R_NOT_W2_LENGTH                 equ 0001h
SSP2STAT_R_NOT_W2_MASK                   equ 0004h
SSP2STAT_R_nW2_POSN                      equ 0002h
SSP2STAT_R_nW2_POSITION                  equ 0002h
SSP2STAT_R_nW2_SIZE                      equ 0001h
SSP2STAT_R_nW2_LENGTH                    equ 0001h
SSP2STAT_R_nW2_MASK                      equ 0004h
SSP2STAT_I2C_DAT2_POSN                   equ 0005h
SSP2STAT_I2C_DAT2_POSITION               equ 0005h
SSP2STAT_I2C_DAT2_SIZE                   equ 0001h
SSP2STAT_I2C_DAT2_LENGTH                 equ 0001h
SSP2STAT_I2C_DAT2_MASK                   equ 0020h
SSP2STAT_NOT_W2_POSN                     equ 0002h
SSP2STAT_NOT_W2_POSITION                 equ 0002h
SSP2STAT_NOT_W2_SIZE                     equ 0001h
SSP2STAT_NOT_W2_LENGTH                   equ 0001h
SSP2STAT_NOT_W2_MASK                     equ 0004h
SSP2STAT_NOT_A2_POSN                     equ 0005h
SSP2STAT_NOT_A2_POSITION                 equ 0005h
SSP2STAT_NOT_A2_SIZE                     equ 0001h
SSP2STAT_NOT_A2_LENGTH                   equ 0001h
SSP2STAT_NOT_A2_MASK                     equ 0020h
SSP2STAT_nW2_POSN                        equ 0002h
SSP2STAT_nW2_POSITION                    equ 0002h
SSP2STAT_nW2_SIZE                        equ 0001h
SSP2STAT_nW2_LENGTH                      equ 0001h
SSP2STAT_nW2_MASK                        equ 0004h
SSP2STAT_nA2_POSN                        equ 0005h
SSP2STAT_nA2_POSITION                    equ 0005h
SSP2STAT_nA2_SIZE                        equ 0001h
SSP2STAT_nA2_LENGTH                      equ 0001h
SSP2STAT_nA2_MASK                        equ 0020h
SSP2STAT_NOT_WRITE2_POSN                 equ 0002h
SSP2STAT_NOT_WRITE2_POSITION             equ 0002h
SSP2STAT_NOT_WRITE2_SIZE                 equ 0001h
SSP2STAT_NOT_WRITE2_LENGTH               equ 0001h
SSP2STAT_NOT_WRITE2_MASK                 equ 0004h
SSP2STAT_NOT_ADDRESS2_POSN               equ 0005h
SSP2STAT_NOT_ADDRESS2_POSITION           equ 0005h
SSP2STAT_NOT_ADDRESS2_SIZE               equ 0001h
SSP2STAT_NOT_ADDRESS2_LENGTH             equ 0001h
SSP2STAT_NOT_ADDRESS2_MASK               equ 0020h
SSP2STAT_nWRITE2_POSN                    equ 0002h
SSP2STAT_nWRITE2_POSITION                equ 0002h
SSP2STAT_nWRITE2_SIZE                    equ 0001h
SSP2STAT_nWRITE2_LENGTH                  equ 0001h
SSP2STAT_nWRITE2_MASK                    equ 0004h
SSP2STAT_nADDRESS2_POSN                  equ 0005h
SSP2STAT_nADDRESS2_POSITION              equ 0005h
SSP2STAT_nADDRESS2_SIZE                  equ 0001h
SSP2STAT_nADDRESS2_LENGTH                equ 0001h
SSP2STAT_nADDRESS2_MASK                  equ 0020h

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
SSP2ADD                                  equ 0F69h
// bitfield definitions
SSP2ADD_SSP2ADD_POSN                     equ 0000h
SSP2ADD_SSP2ADD_POSITION                 equ 0000h
SSP2ADD_SSP2ADD_SIZE                     equ 0008h
SSP2ADD_SSP2ADD_LENGTH                   equ 0008h
SSP2ADD_SSP2ADD_MASK                     equ 00FFh
SSP2ADD_MSK02_POSN                       equ 0000h
SSP2ADD_MSK02_POSITION                   equ 0000h
SSP2ADD_MSK02_SIZE                       equ 0001h
SSP2ADD_MSK02_LENGTH                     equ 0001h
SSP2ADD_MSK02_MASK                       equ 0001h
SSP2ADD_MSK12_POSN                       equ 0001h
SSP2ADD_MSK12_POSITION                   equ 0001h
SSP2ADD_MSK12_SIZE                       equ 0001h
SSP2ADD_MSK12_LENGTH                     equ 0001h
SSP2ADD_MSK12_MASK                       equ 0002h
SSP2ADD_MSK22_POSN                       equ 0002h
SSP2ADD_MSK22_POSITION                   equ 0002h
SSP2ADD_MSK22_SIZE                       equ 0001h
SSP2ADD_MSK22_LENGTH                     equ 0001h
SSP2ADD_MSK22_MASK                       equ 0004h
SSP2ADD_MSK32_POSN                       equ 0003h
SSP2ADD_MSK32_POSITION                   equ 0003h
SSP2ADD_MSK32_SIZE                       equ 0001h
SSP2ADD_MSK32_LENGTH                     equ 0001h
SSP2ADD_MSK32_MASK                       equ 0008h
SSP2ADD_MSK42_POSN                       equ 0004h
SSP2ADD_MSK42_POSITION                   equ 0004h
SSP2ADD_MSK42_SIZE                       equ 0001h
SSP2ADD_MSK42_LENGTH                     equ 0001h
SSP2ADD_MSK42_MASK                       equ 0010h
SSP2ADD_MSK52_POSN                       equ 0005h
SSP2ADD_MSK52_POSITION                   equ 0005h
SSP2ADD_MSK52_SIZE                       equ 0001h
SSP2ADD_MSK52_LENGTH                     equ 0001h
SSP2ADD_MSK52_MASK                       equ 0020h
SSP2ADD_MSK62_POSN                       equ 0006h
SSP2ADD_MSK62_POSITION                   equ 0006h
SSP2ADD_MSK62_SIZE                       equ 0001h
SSP2ADD_MSK62_LENGTH                     equ 0001h
SSP2ADD_MSK62_MASK                       equ 0040h
SSP2ADD_MSK72_POSN                       equ 0007h
SSP2ADD_MSK72_POSITION                   equ 0007h
SSP2ADD_MSK72_SIZE                       equ 0001h
SSP2ADD_MSK72_LENGTH                     equ 0001h
SSP2ADD_MSK72_MASK                       equ 0080h

// Register: SSP2MSK
#define SSP2MSK SSP2MSK
SSP2MSK                                  equ 0F69h
// bitfield definitions
SSP2MSK_MSK0_POSN                        equ 0000h
SSP2MSK_MSK0_POSITION                    equ 0000h
SSP2MSK_MSK0_SIZE                        equ 0001h
SSP2MSK_MSK0_LENGTH                      equ 0001h
SSP2MSK_MSK0_MASK                        equ 0001h
SSP2MSK_MSK1_POSN                        equ 0001h
SSP2MSK_MSK1_POSITION                    equ 0001h
SSP2MSK_MSK1_SIZE                        equ 0001h
SSP2MSK_MSK1_LENGTH                      equ 0001h
SSP2MSK_MSK1_MASK                        equ 0002h
SSP2MSK_MSK2_POSN                        equ 0002h
SSP2MSK_MSK2_POSITION                    equ 0002h
SSP2MSK_MSK2_SIZE                        equ 0001h
SSP2MSK_MSK2_LENGTH                      equ 0001h
SSP2MSK_MSK2_MASK                        equ 0004h
SSP2MSK_MSK3_POSN                        equ 0003h
SSP2MSK_MSK3_POSITION                    equ 0003h
SSP2MSK_MSK3_SIZE                        equ 0001h
SSP2MSK_MSK3_LENGTH                      equ 0001h
SSP2MSK_MSK3_MASK                        equ 0008h
SSP2MSK_MSK4_POSN                        equ 0004h
SSP2MSK_MSK4_POSITION                    equ 0004h
SSP2MSK_MSK4_SIZE                        equ 0001h
SSP2MSK_MSK4_LENGTH                      equ 0001h
SSP2MSK_MSK4_MASK                        equ 0010h
SSP2MSK_MSK5_POSN                        equ 0005h
SSP2MSK_MSK5_POSITION                    equ 0005h
SSP2MSK_MSK5_SIZE                        equ 0001h
SSP2MSK_MSK5_LENGTH                      equ 0001h
SSP2MSK_MSK5_MASK                        equ 0020h
SSP2MSK_MSK6_POSN                        equ 0006h
SSP2MSK_MSK6_POSITION                    equ 0006h
SSP2MSK_MSK6_SIZE                        equ 0001h
SSP2MSK_MSK6_LENGTH                      equ 0001h
SSP2MSK_MSK6_MASK                        equ 0040h
SSP2MSK_MSK7_POSN                        equ 0007h
SSP2MSK_MSK7_POSITION                    equ 0007h
SSP2MSK_MSK7_SIZE                        equ 0001h
SSP2MSK_MSK7_LENGTH                      equ 0001h
SSP2MSK_MSK7_MASK                        equ 0080h
SSP2MSK_MSK_POSN                         equ 0000h
SSP2MSK_MSK_POSITION                     equ 0000h
SSP2MSK_MSK_SIZE                         equ 0008h
SSP2MSK_MSK_LENGTH                       equ 0008h
SSP2MSK_MSK_MASK                         equ 00FFh

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
SSP2BUF                                  equ 0F6Ah
// bitfield definitions
SSP2BUF_SSP2BUF_POSN                     equ 0000h
SSP2BUF_SSP2BUF_POSITION                 equ 0000h
SSP2BUF_SSP2BUF_SIZE                     equ 0008h
SSP2BUF_SSP2BUF_LENGTH                   equ 0008h
SSP2BUF_SSP2BUF_MASK                     equ 00FFh

// Register: T4CON
#define T4CON T4CON
T4CON                                    equ 0F6Bh
// bitfield definitions
T4CON_T4CKPS_POSN                        equ 0000h
T4CON_T4CKPS_POSITION                    equ 0000h
T4CON_T4CKPS_SIZE                        equ 0002h
T4CON_T4CKPS_LENGTH                      equ 0002h
T4CON_T4CKPS_MASK                        equ 0003h
T4CON_TMR4ON_POSN                        equ 0002h
T4CON_TMR4ON_POSITION                    equ 0002h
T4CON_TMR4ON_SIZE                        equ 0001h
T4CON_TMR4ON_LENGTH                      equ 0001h
T4CON_TMR4ON_MASK                        equ 0004h
T4CON_T4OUTPS_POSN                       equ 0003h
T4CON_T4OUTPS_POSITION                   equ 0003h
T4CON_T4OUTPS_SIZE                       equ 0004h
T4CON_T4OUTPS_LENGTH                     equ 0004h
T4CON_T4OUTPS_MASK                       equ 0078h
T4CON_T4CKPS0_POSN                       equ 0000h
T4CON_T4CKPS0_POSITION                   equ 0000h
T4CON_T4CKPS0_SIZE                       equ 0001h
T4CON_T4CKPS0_LENGTH                     equ 0001h
T4CON_T4CKPS0_MASK                       equ 0001h
T4CON_T4CKPS1_POSN                       equ 0001h
T4CON_T4CKPS1_POSITION                   equ 0001h
T4CON_T4CKPS1_SIZE                       equ 0001h
T4CON_T4CKPS1_LENGTH                     equ 0001h
T4CON_T4CKPS1_MASK                       equ 0002h
T4CON_T4OUTPS0_POSN                      equ 0003h
T4CON_T4OUTPS0_POSITION                  equ 0003h
T4CON_T4OUTPS0_SIZE                      equ 0001h
T4CON_T4OUTPS0_LENGTH                    equ 0001h
T4CON_T4OUTPS0_MASK                      equ 0008h
T4CON_T4OUTPS1_POSN                      equ 0004h
T4CON_T4OUTPS1_POSITION                  equ 0004h
T4CON_T4OUTPS1_SIZE                      equ 0001h
T4CON_T4OUTPS1_LENGTH                    equ 0001h
T4CON_T4OUTPS1_MASK                      equ 0010h
T4CON_T4OUTPS2_POSN                      equ 0005h
T4CON_T4OUTPS2_POSITION                  equ 0005h
T4CON_T4OUTPS2_SIZE                      equ 0001h
T4CON_T4OUTPS2_LENGTH                    equ 0001h
T4CON_T4OUTPS2_MASK                      equ 0020h
T4CON_T4OUTPS3_POSN                      equ 0006h
T4CON_T4OUTPS3_POSITION                  equ 0006h
T4CON_T4OUTPS3_SIZE                      equ 0001h
T4CON_T4OUTPS3_LENGTH                    equ 0001h
T4CON_T4OUTPS3_MASK                      equ 0040h

// Register: PR4
#define PR4 PR4
PR4                                      equ 0F6Ch
// bitfield definitions
PR4_PR4_POSN                             equ 0000h
PR4_PR4_POSITION                         equ 0000h
PR4_PR4_SIZE                             equ 0008h
PR4_PR4_LENGTH                           equ 0008h
PR4_PR4_MASK                             equ 00FFh

// Register: TMR4
#define TMR4 TMR4
TMR4                                     equ 0F6Dh
// bitfield definitions
TMR4_TMR4_POSN                           equ 0000h
TMR4_TMR4_POSITION                       equ 0000h
TMR4_TMR4_SIZE                           equ 0008h
TMR4_TMR4_LENGTH                         equ 0008h
TMR4_TMR4_MASK                           equ 00FFh

// Register: CCP7CON
#define CCP7CON CCP7CON
CCP7CON                                  equ 0F6Eh
// bitfield definitions
CCP7CON_CCP7M_POSN                       equ 0000h
CCP7CON_CCP7M_POSITION                   equ 0000h
CCP7CON_CCP7M_SIZE                       equ 0004h
CCP7CON_CCP7M_LENGTH                     equ 0004h
CCP7CON_CCP7M_MASK                       equ 000Fh
CCP7CON_DC7B_POSN                        equ 0004h
CCP7CON_DC7B_POSITION                    equ 0004h
CCP7CON_DC7B_SIZE                        equ 0002h
CCP7CON_DC7B_LENGTH                      equ 0002h
CCP7CON_DC7B_MASK                        equ 0030h
CCP7CON_CCP7M0_POSN                      equ 0000h
CCP7CON_CCP7M0_POSITION                  equ 0000h
CCP7CON_CCP7M0_SIZE                      equ 0001h
CCP7CON_CCP7M0_LENGTH                    equ 0001h
CCP7CON_CCP7M0_MASK                      equ 0001h
CCP7CON_CCP7M1_POSN                      equ 0001h
CCP7CON_CCP7M1_POSITION                  equ 0001h
CCP7CON_CCP7M1_SIZE                      equ 0001h
CCP7CON_CCP7M1_LENGTH                    equ 0001h
CCP7CON_CCP7M1_MASK                      equ 0002h
CCP7CON_CCP7M2_POSN                      equ 0002h
CCP7CON_CCP7M2_POSITION                  equ 0002h
CCP7CON_CCP7M2_SIZE                      equ 0001h
CCP7CON_CCP7M2_LENGTH                    equ 0001h
CCP7CON_CCP7M2_MASK                      equ 0004h
CCP7CON_CCP7M3_POSN                      equ 0003h
CCP7CON_CCP7M3_POSITION                  equ 0003h
CCP7CON_CCP7M3_SIZE                      equ 0001h
CCP7CON_CCP7M3_LENGTH                    equ 0001h
CCP7CON_CCP7M3_MASK                      equ 0008h
CCP7CON_DC7B0_POSN                       equ 0004h
CCP7CON_DC7B0_POSITION                   equ 0004h
CCP7CON_DC7B0_SIZE                       equ 0001h
CCP7CON_DC7B0_LENGTH                     equ 0001h
CCP7CON_DC7B0_MASK                       equ 0010h
CCP7CON_DC7B1_POSN                       equ 0005h
CCP7CON_DC7B1_POSITION                   equ 0005h
CCP7CON_DC7B1_SIZE                       equ 0001h
CCP7CON_DC7B1_LENGTH                     equ 0001h
CCP7CON_DC7B1_MASK                       equ 0020h
CCP7CON_CCP7Y_POSN                       equ 0004h
CCP7CON_CCP7Y_POSITION                   equ 0004h
CCP7CON_CCP7Y_SIZE                       equ 0001h
CCP7CON_CCP7Y_LENGTH                     equ 0001h
CCP7CON_CCP7Y_MASK                       equ 0010h
CCP7CON_CCP7X_POSN                       equ 0005h
CCP7CON_CCP7X_POSITION                   equ 0005h
CCP7CON_CCP7X_SIZE                       equ 0001h
CCP7CON_CCP7X_LENGTH                     equ 0001h
CCP7CON_CCP7X_MASK                       equ 0020h

// Register: CCPR7
#define CCPR7 CCPR7
CCPR7                                    equ 0F6Fh

// Register: CCPR7L
#define CCPR7L CCPR7L
CCPR7L                                   equ 0F6Fh
// bitfield definitions
CCPR7L_CCPR7L_POSN                       equ 0000h
CCPR7L_CCPR7L_POSITION                   equ 0000h
CCPR7L_CCPR7L_SIZE                       equ 0008h
CCPR7L_CCPR7L_LENGTH                     equ 0008h
CCPR7L_CCPR7L_MASK                       equ 00FFh

// Register: CCPR7H
#define CCPR7H CCPR7H
CCPR7H                                   equ 0F70h
// bitfield definitions
CCPR7H_CCPR7H_POSN                       equ 0000h
CCPR7H_CCPR7H_POSITION                   equ 0000h
CCPR7H_CCPR7H_SIZE                       equ 0008h
CCPR7H_CCPR7H_LENGTH                     equ 0008h
CCPR7H_CCPR7H_MASK                       equ 00FFh

// Register: CCP6CON
#define CCP6CON CCP6CON
CCP6CON                                  equ 0F71h
// bitfield definitions
CCP6CON_CCP6M_POSN                       equ 0000h
CCP6CON_CCP6M_POSITION                   equ 0000h
CCP6CON_CCP6M_SIZE                       equ 0004h
CCP6CON_CCP6M_LENGTH                     equ 0004h
CCP6CON_CCP6M_MASK                       equ 000Fh
CCP6CON_DC6B_POSN                        equ 0004h
CCP6CON_DC6B_POSITION                    equ 0004h
CCP6CON_DC6B_SIZE                        equ 0002h
CCP6CON_DC6B_LENGTH                      equ 0002h
CCP6CON_DC6B_MASK                        equ 0030h
CCP6CON_CCP6M0_POSN                      equ 0000h
CCP6CON_CCP6M0_POSITION                  equ 0000h
CCP6CON_CCP6M0_SIZE                      equ 0001h
CCP6CON_CCP6M0_LENGTH                    equ 0001h
CCP6CON_CCP6M0_MASK                      equ 0001h
CCP6CON_CCP6M1_POSN                      equ 0001h
CCP6CON_CCP6M1_POSITION                  equ 0001h
CCP6CON_CCP6M1_SIZE                      equ 0001h
CCP6CON_CCP6M1_LENGTH                    equ 0001h
CCP6CON_CCP6M1_MASK                      equ 0002h
CCP6CON_CCP6M2_POSN                      equ 0002h
CCP6CON_CCP6M2_POSITION                  equ 0002h
CCP6CON_CCP6M2_SIZE                      equ 0001h
CCP6CON_CCP6M2_LENGTH                    equ 0001h
CCP6CON_CCP6M2_MASK                      equ 0004h
CCP6CON_CCP6M3_POSN                      equ 0003h
CCP6CON_CCP6M3_POSITION                  equ 0003h
CCP6CON_CCP6M3_SIZE                      equ 0001h
CCP6CON_CCP6M3_LENGTH                    equ 0001h
CCP6CON_CCP6M3_MASK                      equ 0008h
CCP6CON_DC6B0_POSN                       equ 0004h
CCP6CON_DC6B0_POSITION                   equ 0004h
CCP6CON_DC6B0_SIZE                       equ 0001h
CCP6CON_DC6B0_LENGTH                     equ 0001h
CCP6CON_DC6B0_MASK                       equ 0010h
CCP6CON_DC6B1_POSN                       equ 0005h
CCP6CON_DC6B1_POSITION                   equ 0005h
CCP6CON_DC6B1_SIZE                       equ 0001h
CCP6CON_DC6B1_LENGTH                     equ 0001h
CCP6CON_DC6B1_MASK                       equ 0020h
CCP6CON_CCP6Y_POSN                       equ 0004h
CCP6CON_CCP6Y_POSITION                   equ 0004h
CCP6CON_CCP6Y_SIZE                       equ 0001h
CCP6CON_CCP6Y_LENGTH                     equ 0001h
CCP6CON_CCP6Y_MASK                       equ 0010h
CCP6CON_CCP6X_POSN                       equ 0005h
CCP6CON_CCP6X_POSITION                   equ 0005h
CCP6CON_CCP6X_SIZE                       equ 0001h
CCP6CON_CCP6X_LENGTH                     equ 0001h
CCP6CON_CCP6X_MASK                       equ 0020h

// Register: CCPR6
#define CCPR6 CCPR6
CCPR6                                    equ 0F72h

// Register: CCPR6L
#define CCPR6L CCPR6L
CCPR6L                                   equ 0F72h
// bitfield definitions
CCPR6L_CCPR6L_POSN                       equ 0000h
CCPR6L_CCPR6L_POSITION                   equ 0000h
CCPR6L_CCPR6L_SIZE                       equ 0008h
CCPR6L_CCPR6L_LENGTH                     equ 0008h
CCPR6L_CCPR6L_MASK                       equ 00FFh

// Register: CCPR6H
#define CCPR6H CCPR6H
CCPR6H                                   equ 0F73h
// bitfield definitions
CCPR6H_CCPR6H_POSN                       equ 0000h
CCPR6H_CCPR6H_POSITION                   equ 0000h
CCPR6H_CCPR6H_SIZE                       equ 0008h
CCPR6H_CCPR6H_LENGTH                     equ 0008h
CCPR6H_CCPR6H_MASK                       equ 00FFh

// Register: CCP5CON
#define CCP5CON CCP5CON
CCP5CON                                  equ 0F74h
// bitfield definitions
CCP5CON_CCP5M_POSN                       equ 0000h
CCP5CON_CCP5M_POSITION                   equ 0000h
CCP5CON_CCP5M_SIZE                       equ 0004h
CCP5CON_CCP5M_LENGTH                     equ 0004h
CCP5CON_CCP5M_MASK                       equ 000Fh
CCP5CON_DC5B_POSN                        equ 0004h
CCP5CON_DC5B_POSITION                    equ 0004h
CCP5CON_DC5B_SIZE                        equ 0002h
CCP5CON_DC5B_LENGTH                      equ 0002h
CCP5CON_DC5B_MASK                        equ 0030h
CCP5CON_CCP5M0_POSN                      equ 0000h
CCP5CON_CCP5M0_POSITION                  equ 0000h
CCP5CON_CCP5M0_SIZE                      equ 0001h
CCP5CON_CCP5M0_LENGTH                    equ 0001h
CCP5CON_CCP5M0_MASK                      equ 0001h
CCP5CON_CCP5M1_POSN                      equ 0001h
CCP5CON_CCP5M1_POSITION                  equ 0001h
CCP5CON_CCP5M1_SIZE                      equ 0001h
CCP5CON_CCP5M1_LENGTH                    equ 0001h
CCP5CON_CCP5M1_MASK                      equ 0002h
CCP5CON_CCP5M2_POSN                      equ 0002h
CCP5CON_CCP5M2_POSITION                  equ 0002h
CCP5CON_CCP5M2_SIZE                      equ 0001h
CCP5CON_CCP5M2_LENGTH                    equ 0001h
CCP5CON_CCP5M2_MASK                      equ 0004h
CCP5CON_CCP5M3_POSN                      equ 0003h
CCP5CON_CCP5M3_POSITION                  equ 0003h
CCP5CON_CCP5M3_SIZE                      equ 0001h
CCP5CON_CCP5M3_LENGTH                    equ 0001h
CCP5CON_CCP5M3_MASK                      equ 0008h
CCP5CON_DC5B0_POSN                       equ 0004h
CCP5CON_DC5B0_POSITION                   equ 0004h
CCP5CON_DC5B0_SIZE                       equ 0001h
CCP5CON_DC5B0_LENGTH                     equ 0001h
CCP5CON_DC5B0_MASK                       equ 0010h
CCP5CON_DC5B1_POSN                       equ 0005h
CCP5CON_DC5B1_POSITION                   equ 0005h
CCP5CON_DC5B1_SIZE                       equ 0001h
CCP5CON_DC5B1_LENGTH                     equ 0001h
CCP5CON_DC5B1_MASK                       equ 0020h
CCP5CON_CCP5Y_POSN                       equ 0004h
CCP5CON_CCP5Y_POSITION                   equ 0004h
CCP5CON_CCP5Y_SIZE                       equ 0001h
CCP5CON_CCP5Y_LENGTH                     equ 0001h
CCP5CON_CCP5Y_MASK                       equ 0010h
CCP5CON_CCP5X_POSN                       equ 0005h
CCP5CON_CCP5X_POSITION                   equ 0005h
CCP5CON_CCP5X_SIZE                       equ 0001h
CCP5CON_CCP5X_LENGTH                     equ 0001h
CCP5CON_CCP5X_MASK                       equ 0020h

// Register: CCPR5
#define CCPR5 CCPR5
CCPR5                                    equ 0F75h

// Register: CCPR5L
#define CCPR5L CCPR5L
CCPR5L                                   equ 0F75h
// bitfield definitions
CCPR5L_CCPR5L_POSN                       equ 0000h
CCPR5L_CCPR5L_POSITION                   equ 0000h
CCPR5L_CCPR5L_SIZE                       equ 0008h
CCPR5L_CCPR5L_LENGTH                     equ 0008h
CCPR5L_CCPR5L_MASK                       equ 00FFh

// Register: CCPR5H
#define CCPR5H CCPR5H
CCPR5H                                   equ 0F76h
// bitfield definitions
CCPR5H_CCPR5H_POSN                       equ 0000h
CCPR5H_CCPR5H_POSITION                   equ 0000h
CCPR5H_CCPR5H_SIZE                       equ 0008h
CCPR5H_CCPR5H_LENGTH                     equ 0008h
CCPR5H_CCPR5H_MASK                       equ 00FFh

// Register: CCP4CON
#define CCP4CON CCP4CON
CCP4CON                                  equ 0F77h
// bitfield definitions
CCP4CON_CCP4M_POSN                       equ 0000h
CCP4CON_CCP4M_POSITION                   equ 0000h
CCP4CON_CCP4M_SIZE                       equ 0004h
CCP4CON_CCP4M_LENGTH                     equ 0004h
CCP4CON_CCP4M_MASK                       equ 000Fh
CCP4CON_DC4B_POSN                        equ 0004h
CCP4CON_DC4B_POSITION                    equ 0004h
CCP4CON_DC4B_SIZE                        equ 0002h
CCP4CON_DC4B_LENGTH                      equ 0002h
CCP4CON_DC4B_MASK                        equ 0030h
CCP4CON_CCP4M0_POSN                      equ 0000h
CCP4CON_CCP4M0_POSITION                  equ 0000h
CCP4CON_CCP4M0_SIZE                      equ 0001h
CCP4CON_CCP4M0_LENGTH                    equ 0001h
CCP4CON_CCP4M0_MASK                      equ 0001h
CCP4CON_CCP4M1_POSN                      equ 0001h
CCP4CON_CCP4M1_POSITION                  equ 0001h
CCP4CON_CCP4M1_SIZE                      equ 0001h
CCP4CON_CCP4M1_LENGTH                    equ 0001h
CCP4CON_CCP4M1_MASK                      equ 0002h
CCP4CON_CCP4M2_POSN                      equ 0002h
CCP4CON_CCP4M2_POSITION                  equ 0002h
CCP4CON_CCP4M2_SIZE                      equ 0001h
CCP4CON_CCP4M2_LENGTH                    equ 0001h
CCP4CON_CCP4M2_MASK                      equ 0004h
CCP4CON_CCP4M3_POSN                      equ 0003h
CCP4CON_CCP4M3_POSITION                  equ 0003h
CCP4CON_CCP4M3_SIZE                      equ 0001h
CCP4CON_CCP4M3_LENGTH                    equ 0001h
CCP4CON_CCP4M3_MASK                      equ 0008h
CCP4CON_DC4B0_POSN                       equ 0004h
CCP4CON_DC4B0_POSITION                   equ 0004h
CCP4CON_DC4B0_SIZE                       equ 0001h
CCP4CON_DC4B0_LENGTH                     equ 0001h
CCP4CON_DC4B0_MASK                       equ 0010h
CCP4CON_DC4B1_POSN                       equ 0005h
CCP4CON_DC4B1_POSITION                   equ 0005h
CCP4CON_DC4B1_SIZE                       equ 0001h
CCP4CON_DC4B1_LENGTH                     equ 0001h
CCP4CON_DC4B1_MASK                       equ 0020h
CCP4CON_CCP4Y_POSN                       equ 0004h
CCP4CON_CCP4Y_POSITION                   equ 0004h
CCP4CON_CCP4Y_SIZE                       equ 0001h
CCP4CON_CCP4Y_LENGTH                     equ 0001h
CCP4CON_CCP4Y_MASK                       equ 0010h
CCP4CON_CCP4X_POSN                       equ 0005h
CCP4CON_CCP4X_POSITION                   equ 0005h
CCP4CON_CCP4X_SIZE                       equ 0001h
CCP4CON_CCP4X_LENGTH                     equ 0001h
CCP4CON_CCP4X_MASK                       equ 0020h

// Register: CCPR4
#define CCPR4 CCPR4
CCPR4                                    equ 0F78h

// Register: CCPR4L
#define CCPR4L CCPR4L
CCPR4L                                   equ 0F78h
// bitfield definitions
CCPR4L_CCPR4L_POSN                       equ 0000h
CCPR4L_CCPR4L_POSITION                   equ 0000h
CCPR4L_CCPR4L_SIZE                       equ 0008h
CCPR4L_CCPR4L_LENGTH                     equ 0008h
CCPR4L_CCPR4L_MASK                       equ 00FFh

// Register: CCPR4H
#define CCPR4H CCPR4H
CCPR4H                                   equ 0F79h
// bitfield definitions
CCPR4H_CCPR4H_POSN                       equ 0000h
CCPR4H_CCPR4H_POSITION                   equ 0000h
CCPR4H_CCPR4H_SIZE                       equ 0008h
CCPR4H_CCPR4H_LENGTH                     equ 0008h
CCPR4H_CCPR4H_MASK                       equ 00FFh

// Register: T5GCON
#define T5GCON T5GCON
T5GCON                                   equ 0F7Ah
// bitfield definitions
T5GCON_T5GGO_NOT_T5DONE_POSN             equ 0003h
T5GCON_T5GGO_NOT_T5DONE_POSITION         equ 0003h
T5GCON_T5GGO_NOT_T5DONE_SIZE             equ 0001h
T5GCON_T5GGO_NOT_T5DONE_LENGTH           equ 0001h
T5GCON_T5GGO_NOT_T5DONE_MASK             equ 0008h
T5GCON_T5GSS_POSN                        equ 0000h
T5GCON_T5GSS_POSITION                    equ 0000h
T5GCON_T5GSS_SIZE                        equ 0002h
T5GCON_T5GSS_LENGTH                      equ 0002h
T5GCON_T5GSS_MASK                        equ 0003h
T5GCON_T5GVAL_POSN                       equ 0002h
T5GCON_T5GVAL_POSITION                   equ 0002h
T5GCON_T5GVAL_SIZE                       equ 0001h
T5GCON_T5GVAL_LENGTH                     equ 0001h
T5GCON_T5GVAL_MASK                       equ 0004h
T5GCON_T5GGO_nT5DONE_POSN                equ 0003h
T5GCON_T5GGO_nT5DONE_POSITION            equ 0003h
T5GCON_T5GGO_nT5DONE_SIZE                equ 0001h
T5GCON_T5GGO_nT5DONE_LENGTH              equ 0001h
T5GCON_T5GGO_nT5DONE_MASK                equ 0008h
T5GCON_T5GSPM_POSN                       equ 0004h
T5GCON_T5GSPM_POSITION                   equ 0004h
T5GCON_T5GSPM_SIZE                       equ 0001h
T5GCON_T5GSPM_LENGTH                     equ 0001h
T5GCON_T5GSPM_MASK                       equ 0010h
T5GCON_T5GTM_POSN                        equ 0005h
T5GCON_T5GTM_POSITION                    equ 0005h
T5GCON_T5GTM_SIZE                        equ 0001h
T5GCON_T5GTM_LENGTH                      equ 0001h
T5GCON_T5GTM_MASK                        equ 0020h
T5GCON_T5GPOL_POSN                       equ 0006h
T5GCON_T5GPOL_POSITION                   equ 0006h
T5GCON_T5GPOL_SIZE                       equ 0001h
T5GCON_T5GPOL_LENGTH                     equ 0001h
T5GCON_T5GPOL_MASK                       equ 0040h
T5GCON_TMR5GE_POSN                       equ 0007h
T5GCON_TMR5GE_POSITION                   equ 0007h
T5GCON_TMR5GE_SIZE                       equ 0001h
T5GCON_TMR5GE_LENGTH                     equ 0001h
T5GCON_TMR5GE_MASK                       equ 0080h
T5GCON_T5GSS0_POSN                       equ 0000h
T5GCON_T5GSS0_POSITION                   equ 0000h
T5GCON_T5GSS0_SIZE                       equ 0001h
T5GCON_T5GSS0_LENGTH                     equ 0001h
T5GCON_T5GSS0_MASK                       equ 0001h
T5GCON_T5GSS1_POSN                       equ 0001h
T5GCON_T5GSS1_POSITION                   equ 0001h
T5GCON_T5GSS1_SIZE                       equ 0001h
T5GCON_T5GSS1_LENGTH                     equ 0001h
T5GCON_T5GSS1_MASK                       equ 0002h
T5GCON_T5GGO_POSN                        equ 0003h
T5GCON_T5GGO_POSITION                    equ 0003h
T5GCON_T5GGO_SIZE                        equ 0001h
T5GCON_T5GGO_LENGTH                      equ 0001h
T5GCON_T5GGO_MASK                        equ 0008h
T5GCON_NOT_T5DONE_POSN                   equ 0003h
T5GCON_NOT_T5DONE_POSITION               equ 0003h
T5GCON_NOT_T5DONE_SIZE                   equ 0001h
T5GCON_NOT_T5DONE_LENGTH                 equ 0001h
T5GCON_NOT_T5DONE_MASK                   equ 0008h
T5GCON_nT5DONE_POSN                      equ 0003h
T5GCON_nT5DONE_POSITION                  equ 0003h
T5GCON_nT5DONE_SIZE                      equ 0001h
T5GCON_nT5DONE_LENGTH                    equ 0001h
T5GCON_nT5DONE_MASK                      equ 0008h

// Register: T5CON
#define T5CON T5CON
T5CON                                    equ 0F7Bh
// bitfield definitions
T5CON_NOT_T5SYNC_POSN                    equ 0002h
T5CON_NOT_T5SYNC_POSITION                equ 0002h
T5CON_NOT_T5SYNC_SIZE                    equ 0001h
T5CON_NOT_T5SYNC_LENGTH                  equ 0001h
T5CON_NOT_T5SYNC_MASK                    equ 0004h
T5CON_TMR5ON_POSN                        equ 0000h
T5CON_TMR5ON_POSITION                    equ 0000h
T5CON_TMR5ON_SIZE                        equ 0001h
T5CON_TMR5ON_LENGTH                      equ 0001h
T5CON_TMR5ON_MASK                        equ 0001h
T5CON_RD16_POSN                          equ 0001h
T5CON_RD16_POSITION                      equ 0001h
T5CON_RD16_SIZE                          equ 0001h
T5CON_RD16_LENGTH                        equ 0001h
T5CON_RD16_MASK                          equ 0002h
T5CON_nT5SYNC_POSN                       equ 0002h
T5CON_nT5SYNC_POSITION                   equ 0002h
T5CON_nT5SYNC_SIZE                       equ 0001h
T5CON_nT5SYNC_LENGTH                     equ 0001h
T5CON_nT5SYNC_MASK                       equ 0004h
T5CON_SOSCEN_POSN                        equ 0003h
T5CON_SOSCEN_POSITION                    equ 0003h
T5CON_SOSCEN_SIZE                        equ 0001h
T5CON_SOSCEN_LENGTH                      equ 0001h
T5CON_SOSCEN_MASK                        equ 0008h
T5CON_T5CKPS_POSN                        equ 0004h
T5CON_T5CKPS_POSITION                    equ 0004h
T5CON_T5CKPS_SIZE                        equ 0002h
T5CON_T5CKPS_LENGTH                      equ 0002h
T5CON_T5CKPS_MASK                        equ 0030h
T5CON_TMR5CS_POSN                        equ 0006h
T5CON_TMR5CS_POSITION                    equ 0006h
T5CON_TMR5CS_SIZE                        equ 0002h
T5CON_TMR5CS_LENGTH                      equ 0002h
T5CON_TMR5CS_MASK                        equ 00C0h
T5CON_T5CKPS0_POSN                       equ 0004h
T5CON_T5CKPS0_POSITION                   equ 0004h
T5CON_T5CKPS0_SIZE                       equ 0001h
T5CON_T5CKPS0_LENGTH                     equ 0001h
T5CON_T5CKPS0_MASK                       equ 0010h
T5CON_T5CKPS1_POSN                       equ 0005h
T5CON_T5CKPS1_POSITION                   equ 0005h
T5CON_T5CKPS1_SIZE                       equ 0001h
T5CON_T5CKPS1_LENGTH                     equ 0001h
T5CON_T5CKPS1_MASK                       equ 0020h
T5CON_TMR5CS0_POSN                       equ 0006h
T5CON_TMR5CS0_POSITION                   equ 0006h
T5CON_TMR5CS0_SIZE                       equ 0001h
T5CON_TMR5CS0_LENGTH                     equ 0001h
T5CON_TMR5CS0_MASK                       equ 0040h
T5CON_TMR5CS1_POSN                       equ 0007h
T5CON_TMR5CS1_POSITION                   equ 0007h
T5CON_TMR5CS1_SIZE                       equ 0001h
T5CON_TMR5CS1_LENGTH                     equ 0001h
T5CON_TMR5CS1_MASK                       equ 0080h
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

// Register: TMR5
#define TMR5 TMR5
TMR5                                     equ 0F7Ch

// Register: TMR5L
#define TMR5L TMR5L
TMR5L                                    equ 0F7Ch
// bitfield definitions
TMR5L_TMR5L_POSN                         equ 0000h
TMR5L_TMR5L_POSITION                     equ 0000h
TMR5L_TMR5L_SIZE                         equ 0008h
TMR5L_TMR5L_LENGTH                       equ 0008h
TMR5L_TMR5L_MASK                         equ 00FFh

// Register: TMR5H
#define TMR5H TMR5H
TMR5H                                    equ 0F7Dh
// bitfield definitions
TMR5H_TMR5H_POSN                         equ 0000h
TMR5H_TMR5H_POSITION                     equ 0000h
TMR5H_TMR5H_SIZE                         equ 0008h
TMR5H_TMR5H_LENGTH                       equ 0008h
TMR5H_TMR5H_MASK                         equ 00FFh

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 0F7Eh
// bitfield definitions
EECON2_EECON2_POSN                       equ 0000h
EECON2_EECON2_POSITION                   equ 0000h
EECON2_EECON2_SIZE                       equ 0008h
EECON2_EECON2_LENGTH                     equ 0008h
EECON2_EECON2_MASK                       equ 00FFh

// Register: EECON1
#define EECON1 EECON1
EECON1                                   equ 0F7Fh
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
PORTA_ULPWU_POSN                         equ 0000h
PORTA_ULPWU_POSITION                     equ 0000h
PORTA_ULPWU_SIZE                         equ 0001h
PORTA_ULPWU_LENGTH                       equ 0001h
PORTA_ULPWU_MASK                         equ 0001h
PORTA_VREF_MINUS_POSN                    equ 0002h
PORTA_VREF_MINUS_POSITION                equ 0002h
PORTA_VREF_MINUS_SIZE                    equ 0001h
PORTA_VREF_MINUS_LENGTH                  equ 0001h
PORTA_VREF_MINUS_MASK                    equ 0004h
PORTA_VREF_PLUS_POSN                     equ 0003h
PORTA_VREF_PLUS_POSITION                 equ 0003h
PORTA_VREF_PLUS_SIZE                     equ 0001h
PORTA_VREF_PLUS_LENGTH                   equ 0001h
PORTA_VREF_PLUS_MASK                     equ 0008h
PORTA_T0CKI_POSN                         equ 0004h
PORTA_T0CKI_POSITION                     equ 0004h
PORTA_T0CKI_SIZE                         equ 0001h
PORTA_T0CKI_LENGTH                       equ 0001h
PORTA_T0CKI_MASK                         equ 0010h
PORTA_T1CKI_POSN                         equ 0005h
PORTA_T1CKI_POSITION                     equ 0005h
PORTA_T1CKI_SIZE                         equ 0001h
PORTA_T1CKI_LENGTH                       equ 0001h
PORTA_T1CKI_MASK                         equ 0020h
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
PORTA_T3G_POSN                           equ 0005h
PORTA_T3G_POSITION                       equ 0005h
PORTA_T3G_SIZE                           equ 0001h
PORTA_T3G_LENGTH                         equ 0001h
PORTA_T3G_MASK                           equ 0020h
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
PORTB_FLT0_POSN                          equ 0000h
PORTB_FLT0_POSITION                      equ 0000h
PORTB_FLT0_SIZE                          equ 0001h
PORTB_FLT0_LENGTH                        equ 0001h
PORTB_FLT0_MASK                          equ 0001h
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
PORTB_T3CKI_POSN                         equ 0005h
PORTB_T3CKI_POSITION                     equ 0005h
PORTB_T3CKI_SIZE                         equ 0001h
PORTB_T3CKI_LENGTH                       equ 0001h
PORTB_T3CKI_MASK                         equ 0020h
PORTB_CCP2_P2A_POSN                      equ 0003h
PORTB_CCP2_P2A_POSITION                  equ 0003h
PORTB_CCP2_P2A_SIZE                      equ 0001h
PORTB_CCP2_P2A_LENGTH                    equ 0001h
PORTB_CCP2_P2A_MASK                      equ 0008h
PORTB_T1G_POSN                           equ 0005h
PORTB_T1G_POSITION                       equ 0005h
PORTB_T1G_SIZE                           equ 0001h
PORTB_T1G_LENGTH                         equ 0001h
PORTB_T1G_MASK                           equ 0020h
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
PORTC_SOSCO_POSN                         equ 0000h
PORTC_SOSCO_POSITION                     equ 0000h
PORTC_SOSCO_SIZE                         equ 0001h
PORTC_SOSCO_LENGTH                       equ 0001h
PORTC_SOSCO_MASK                         equ 0001h
PORTC_SOSCI_POSN                         equ 0001h
PORTC_SOSCI_POSITION                     equ 0001h
PORTC_SOSCI_SIZE                         equ 0001h
PORTC_SOSCI_LENGTH                       equ 0001h
PORTC_SOSCI_MASK                         equ 0002h
PORTC_SCK1_POSN                          equ 0003h
PORTC_SCK1_POSITION                      equ 0003h
PORTC_SCK1_SIZE                          equ 0001h
PORTC_SCK1_LENGTH                        equ 0001h
PORTC_SCK1_MASK                          equ 0008h
PORTC_SDI1_POSN                          equ 0004h
PORTC_SDI1_POSITION                      equ 0004h
PORTC_SDI1_SIZE                          equ 0001h
PORTC_SDI1_LENGTH                        equ 0001h
PORTC_SDI1_MASK                          equ 0010h
PORTC_SDO1_POSN                          equ 0005h
PORTC_SDO1_POSITION                      equ 0005h
PORTC_SDO1_SIZE                          equ 0001h
PORTC_SDO1_LENGTH                        equ 0001h
PORTC_SDO1_MASK                          equ 0020h
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
PORTC_SCKLI_POSN                         equ 0000h
PORTC_SCKLI_POSITION                     equ 0000h
PORTC_SCKLI_SIZE                         equ 0001h
PORTC_SCKLI_LENGTH                       equ 0001h
PORTC_SCKLI_MASK                         equ 0001h
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
PORTC_SCL1_POSN                          equ 0003h
PORTC_SCL1_POSITION                      equ 0003h
PORTC_SCL1_SIZE                          equ 0001h
PORTC_SCL1_LENGTH                        equ 0001h
PORTC_SCL1_MASK                          equ 0008h
PORTC_SDA1_POSN                          equ 0004h
PORTC_SDA1_POSITION                      equ 0004h
PORTC_SDA1_SIZE                          equ 0001h
PORTC_SDA1_LENGTH                        equ 0001h
PORTC_SDA1_MASK                          equ 0010h
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
PORTC_P2A_POSN                           equ 0001h
PORTC_P2A_POSITION                       equ 0001h
PORTC_P2A_SIZE                           equ 0001h
PORTC_P2A_LENGTH                         equ 0001h
PORTC_P2A_MASK                           equ 0002h
PORTC_P1A_POSN                           equ 0002h
PORTC_P1A_POSITION                       equ 0002h
PORTC_P1A_SIZE                           equ 0001h
PORTC_P1A_LENGTH                         equ 0001h
PORTC_P1A_MASK                           equ 0004h
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
PORTD_AD0_POSN                           equ 0000h
PORTD_AD0_POSITION                       equ 0000h
PORTD_AD0_SIZE                           equ 0001h
PORTD_AD0_LENGTH                         equ 0001h
PORTD_AD0_MASK                           equ 0001h
PORTD_AD1_POSN                           equ 0001h
PORTD_AD1_POSITION                       equ 0001h
PORTD_AD1_SIZE                           equ 0001h
PORTD_AD1_LENGTH                         equ 0001h
PORTD_AD1_MASK                           equ 0002h
PORTD_AD2_POSN                           equ 0002h
PORTD_AD2_POSITION                       equ 0002h
PORTD_AD2_SIZE                           equ 0001h
PORTD_AD2_LENGTH                         equ 0001h
PORTD_AD2_MASK                           equ 0004h
PORTD_AD3_POSN                           equ 0003h
PORTD_AD3_POSITION                       equ 0003h
PORTD_AD3_SIZE                           equ 0001h
PORTD_AD3_LENGTH                         equ 0001h
PORTD_AD3_MASK                           equ 0008h
PORTD_AD4_POSN                           equ 0004h
PORTD_AD4_POSITION                       equ 0004h
PORTD_AD4_SIZE                           equ 0001h
PORTD_AD4_LENGTH                         equ 0001h
PORTD_AD4_MASK                           equ 0010h
PORTD_AD5_POSN                           equ 0005h
PORTD_AD5_POSITION                       equ 0005h
PORTD_AD5_SIZE                           equ 0001h
PORTD_AD5_LENGTH                         equ 0001h
PORTD_AD5_MASK                           equ 0020h
PORTD_AD6_POSN                           equ 0006h
PORTD_AD6_POSITION                       equ 0006h
PORTD_AD6_SIZE                           equ 0001h
PORTD_AD6_LENGTH                         equ 0001h
PORTD_AD6_MASK                           equ 0040h
PORTD_AD7_POSN                           equ 0007h
PORTD_AD7_POSITION                       equ 0007h
PORTD_AD7_SIZE                           equ 0001h
PORTD_AD7_LENGTH                         equ 0001h
PORTD_AD7_MASK                           equ 0080h
PORTD_PSP0_POSN                          equ 0000h
PORTD_PSP0_POSITION                      equ 0000h
PORTD_PSP0_SIZE                          equ 0001h
PORTD_PSP0_LENGTH                        equ 0001h
PORTD_PSP0_MASK                          equ 0001h
PORTD_PSP1_POSN                          equ 0001h
PORTD_PSP1_POSITION                      equ 0001h
PORTD_PSP1_SIZE                          equ 0001h
PORTD_PSP1_LENGTH                        equ 0001h
PORTD_PSP1_MASK                          equ 0002h
PORTD_PSP2_POSN                          equ 0002h
PORTD_PSP2_POSITION                      equ 0002h
PORTD_PSP2_SIZE                          equ 0001h
PORTD_PSP2_LENGTH                        equ 0001h
PORTD_PSP2_MASK                          equ 0004h
PORTD_PSP3_POSN                          equ 0003h
PORTD_PSP3_POSITION                      equ 0003h
PORTD_PSP3_SIZE                          equ 0001h
PORTD_PSP3_LENGTH                        equ 0001h
PORTD_PSP3_MASK                          equ 0008h
PORTD_PSP4_POSN                          equ 0004h
PORTD_PSP4_POSITION                      equ 0004h
PORTD_PSP4_SIZE                          equ 0001h
PORTD_PSP4_LENGTH                        equ 0001h
PORTD_PSP4_MASK                          equ 0010h
PORTD_PSP5_POSN                          equ 0005h
PORTD_PSP5_POSITION                      equ 0005h
PORTD_PSP5_SIZE                          equ 0001h
PORTD_PSP5_LENGTH                        equ 0001h
PORTD_PSP5_MASK                          equ 0020h
PORTD_PSP6_POSN                          equ 0006h
PORTD_PSP6_POSITION                      equ 0006h
PORTD_PSP6_SIZE                          equ 0001h
PORTD_PSP6_LENGTH                        equ 0001h
PORTD_PSP6_MASK                          equ 0040h
PORTD_PSP7_POSN                          equ 0007h
PORTD_PSP7_POSITION                      equ 0007h
PORTD_PSP7_SIZE                          equ 0001h
PORTD_PSP7_LENGTH                        equ 0001h
PORTD_PSP7_MASK                          equ 0080h
PORTD_NOT_SS2_POSN                       equ 0007h
PORTD_NOT_SS2_POSITION                   equ 0007h
PORTD_NOT_SS2_SIZE                       equ 0001h
PORTD_NOT_SS2_LENGTH                     equ 0001h
PORTD_NOT_SS2_MASK                       equ 0080h
PORTD_CTPLS_POSN                         equ 0000h
PORTD_CTPLS_POSITION                     equ 0000h
PORTD_CTPLS_SIZE                         equ 0001h
PORTD_CTPLS_LENGTH                       equ 0001h
PORTD_CTPLS_MASK                         equ 0001h
PORTD_T5CKI_POSN                         equ 0001h
PORTD_T5CKI_POSITION                     equ 0001h
PORTD_T5CKI_SIZE                         equ 0001h
PORTD_T5CKI_LENGTH                       equ 0001h
PORTD_T5CKI_MASK                         equ 0002h
PORTD_SDO2_POSN                          equ 0004h
PORTD_SDO2_POSITION                      equ 0004h
PORTD_SDO2_SIZE                          equ 0001h
PORTD_SDO2_LENGTH                        equ 0001h
PORTD_SDO2_MASK                          equ 0010h
PORTD_SDI2_POSN                          equ 0005h
PORTD_SDI2_POSITION                      equ 0005h
PORTD_SDI2_SIZE                          equ 0001h
PORTD_SDI2_LENGTH                        equ 0001h
PORTD_SDI2_MASK                          equ 0020h
PORTD_SCK2_POSN                          equ 0006h
PORTD_SCK2_POSITION                      equ 0006h
PORTD_SCK2_SIZE                          equ 0001h
PORTD_SCK2_LENGTH                        equ 0001h
PORTD_SCK2_MASK                          equ 0040h
PORTD_nSS2_POSN                          equ 0007h
PORTD_nSS2_POSITION                      equ 0007h
PORTD_nSS2_SIZE                          equ 0001h
PORTD_nSS2_LENGTH                        equ 0001h
PORTD_nSS2_MASK                          equ 0080h
PORTD_T7G_POSN                           equ 0001h
PORTD_T7G_POSITION                       equ 0001h
PORTD_T7G_SIZE                           equ 0001h
PORTD_T7G_LENGTH                         equ 0001h
PORTD_T7G_MASK                           equ 0002h
PORTD_SDA2_POSN                          equ 0005h
PORTD_SDA2_POSITION                      equ 0005h
PORTD_SDA2_SIZE                          equ 0001h
PORTD_SDA2_LENGTH                        equ 0001h
PORTD_SDA2_MASK                          equ 0020h
PORTD_SCL2_POSN                          equ 0006h
PORTD_SCL2_POSITION                      equ 0006h
PORTD_SCL2_SIZE                          equ 0001h
PORTD_SCL2_LENGTH                        equ 0001h
PORTD_SCL2_MASK                          equ 0040h
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
PORTE_AD8_POSN                           equ 0000h
PORTE_AD8_POSITION                       equ 0000h
PORTE_AD8_SIZE                           equ 0001h
PORTE_AD8_LENGTH                         equ 0001h
PORTE_AD8_MASK                           equ 0001h
PORTE_AD9_POSN                           equ 0001h
PORTE_AD9_POSITION                       equ 0001h
PORTE_AD9_SIZE                           equ 0001h
PORTE_AD9_LENGTH                         equ 0001h
PORTE_AD9_MASK                           equ 0002h
PORTE_AD10_POSN                          equ 0002h
PORTE_AD10_POSITION                      equ 0002h
PORTE_AD10_SIZE                          equ 0001h
PORTE_AD10_LENGTH                        equ 0001h
PORTE_AD10_MASK                          equ 0004h
PORTE_AD11_POSN                          equ 0003h
PORTE_AD11_POSITION                      equ 0003h
PORTE_AD11_SIZE                          equ 0001h
PORTE_AD11_LENGTH                        equ 0001h
PORTE_AD11_MASK                          equ 0008h
PORTE_AD12_POSN                          equ 0004h
PORTE_AD12_POSITION                      equ 0004h
PORTE_AD12_SIZE                          equ 0001h
PORTE_AD12_LENGTH                        equ 0001h
PORTE_AD12_MASK                          equ 0010h
PORTE_AD13_POSN                          equ 0005h
PORTE_AD13_POSITION                      equ 0005h
PORTE_AD13_SIZE                          equ 0001h
PORTE_AD13_LENGTH                        equ 0001h
PORTE_AD13_MASK                          equ 0020h
PORTE_AD14_POSN                          equ 0006h
PORTE_AD14_POSITION                      equ 0006h
PORTE_AD14_SIZE                          equ 0001h
PORTE_AD14_LENGTH                        equ 0001h
PORTE_AD14_MASK                          equ 0040h
PORTE_AD15_POSN                          equ 0007h
PORTE_AD15_POSITION                      equ 0007h
PORTE_AD15_SIZE                          equ 0001h
PORTE_AD15_LENGTH                        equ 0001h
PORTE_AD15_MASK                          equ 0080h
PORTE_P2D_POSN                           equ 0000h
PORTE_P2D_POSITION                       equ 0000h
PORTE_P2D_SIZE                           equ 0001h
PORTE_P2D_LENGTH                         equ 0001h
PORTE_P2D_MASK                           equ 0001h
PORTE_P2C_POSN                           equ 0001h
PORTE_P2C_POSITION                       equ 0001h
PORTE_P2C_SIZE                           equ 0001h
PORTE_P2C_LENGTH                         equ 0001h
PORTE_P2C_MASK                           equ 0002h
PORTE_P2B_POSN                           equ 0002h
PORTE_P2B_POSITION                       equ 0002h
PORTE_P2B_SIZE                           equ 0001h
PORTE_P2B_LENGTH                         equ 0001h
PORTE_P2B_MASK                           equ 0004h
PORTE_P3C_POSN                           equ 0003h
PORTE_P3C_POSITION                       equ 0003h
PORTE_P3C_SIZE                           equ 0001h
PORTE_P3C_LENGTH                         equ 0001h
PORTE_P3C_MASK                           equ 0008h
PORTE_P3B_POSN                           equ 0004h
PORTE_P3B_POSITION                       equ 0004h
PORTE_P3B_SIZE                           equ 0001h
PORTE_P3B_LENGTH                         equ 0001h
PORTE_P3B_MASK                           equ 0010h
PORTE_P1C_POSN                           equ 0005h
PORTE_P1C_POSITION                       equ 0005h
PORTE_P1C_SIZE                           equ 0001h
PORTE_P1C_LENGTH                         equ 0001h
PORTE_P1C_MASK                           equ 0020h
PORTE_P1B_POSN                           equ 0006h
PORTE_P1B_POSITION                       equ 0006h
PORTE_P1B_SIZE                           equ 0001h
PORTE_P1B_LENGTH                         equ 0001h
PORTE_P1B_MASK                           equ 0040h
PORTE_P2A_POSN                           equ 0007h
PORTE_P2A_POSITION                       equ 0007h
PORTE_P2A_SIZE                           equ 0001h
PORTE_P2A_LENGTH                         equ 0001h
PORTE_P2A_MASK                           equ 0080h
PORTE_CCP10_POSN                         equ 0002h
PORTE_CCP10_POSITION                     equ 0002h
PORTE_CCP10_SIZE                         equ 0001h
PORTE_CCP10_LENGTH                       equ 0001h
PORTE_CCP10_MASK                         equ 0004h
PORTE_CCP9_POSN                          equ 0003h
PORTE_CCP9_POSITION                      equ 0003h
PORTE_CCP9_SIZE                          equ 0001h
PORTE_CCP9_LENGTH                        equ 0001h
PORTE_CCP9_MASK                          equ 0008h
PORTE_CCP8_POSN                          equ 0004h
PORTE_CCP8_POSITION                      equ 0004h
PORTE_CCP8_SIZE                          equ 0001h
PORTE_CCP8_LENGTH                        equ 0001h
PORTE_CCP8_MASK                          equ 0010h
PORTE_CCP7_POSN                          equ 0005h
PORTE_CCP7_POSITION                      equ 0005h
PORTE_CCP7_SIZE                          equ 0001h
PORTE_CCP7_LENGTH                        equ 0001h
PORTE_CCP7_MASK                          equ 0020h
PORTE_CCP6_POSN                          equ 0006h
PORTE_CCP6_POSITION                      equ 0006h
PORTE_CCP6_SIZE                          equ 0001h
PORTE_CCP6_LENGTH                        equ 0001h
PORTE_CCP6_MASK                          equ 0040h
PORTE_CCP2_POSN                          equ 0007h
PORTE_CCP2_POSITION                      equ 0007h
PORTE_CCP2_SIZE                          equ 0001h
PORTE_CCP2_LENGTH                        equ 0001h
PORTE_CCP2_MASK                          equ 0080h
PORTE_NOT_RD_POSN                        equ 0000h
PORTE_NOT_RD_POSITION                    equ 0000h
PORTE_NOT_RD_SIZE                        equ 0001h
PORTE_NOT_RD_LENGTH                      equ 0001h
PORTE_NOT_RD_MASK                        equ 0001h
PORTE_NOT_WR_POSN                        equ 0001h
PORTE_NOT_WR_POSITION                    equ 0001h
PORTE_NOT_WR_SIZE                        equ 0001h
PORTE_NOT_WR_LENGTH                      equ 0001h
PORTE_NOT_WR_MASK                        equ 0002h
PORTE_NOT_CS_POSN                        equ 0002h
PORTE_NOT_CS_POSITION                    equ 0002h
PORTE_NOT_CS_SIZE                        equ 0001h
PORTE_NOT_CS_LENGTH                      equ 0001h
PORTE_NOT_CS_MASK                        equ 0004h
PORTE_nRD_POSN                           equ 0000h
PORTE_nRD_POSITION                       equ 0000h
PORTE_nRD_SIZE                           equ 0001h
PORTE_nRD_LENGTH                         equ 0001h
PORTE_nRD_MASK                           equ 0001h
PORTE_nWR_POSN                           equ 0001h
PORTE_nWR_POSITION                       equ 0001h
PORTE_nWR_SIZE                           equ 0001h
PORTE_nWR_LENGTH                         equ 0001h
PORTE_nWR_MASK                           equ 0002h
PORTE_nCS_POSN                           equ 0002h
PORTE_nCS_POSITION                       equ 0002h
PORTE_nCS_SIZE                           equ 0001h
PORTE_nCS_LENGTH                         equ 0001h
PORTE_nCS_MASK                           equ 0004h
PORTE_REFO_POSN                          equ 0003h
PORTE_REFO_POSITION                      equ 0003h
PORTE_REFO_SIZE                          equ 0001h
PORTE_REFO_LENGTH                        equ 0001h
PORTE_REFO_MASK                          equ 0008h
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
PORTE_CS_POSN                            equ 0002h
PORTE_CS_POSITION                        equ 0002h
PORTE_CS_SIZE                            equ 0001h
PORTE_CS_LENGTH                          equ 0001h
PORTE_CS_MASK                            equ 0004h
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
PORTE_PB2_POSN                           equ 0002h
PORTE_PB2_POSITION                       equ 0002h
PORTE_PB2_SIZE                           equ 0001h
PORTE_PB2_LENGTH                         equ 0001h
PORTE_PB2_MASK                           equ 0004h
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
PORTF_CTDIN_POSN                         equ 0001h
PORTF_CTDIN_POSITION                     equ 0001h
PORTF_CTDIN_SIZE                         equ 0001h
PORTF_CTDIN_LENGTH                       equ 0001h
PORTF_CTDIN_MASK                         equ 0002h
PORTF_CTMUI_POSN                         equ 0003h
PORTF_CTMUI_POSITION                     equ 0003h
PORTF_CTMUI_SIZE                         equ 0001h
PORTF_CTMUI_LENGTH                       equ 0001h
PORTF_CTMUI_MASK                         equ 0008h
PORTF_CVREF_POSN                         equ 0005h
PORTF_CVREF_POSITION                     equ 0005h
PORTF_CVREF_SIZE                         equ 0001h
PORTF_CVREF_LENGTH                       equ 0001h
PORTF_CVREF_MASK                         equ 0020h
PORTF_C2OUTF_POSN                        equ 0001h
PORTF_C2OUTF_POSITION                    equ 0001h
PORTF_C2OUTF_SIZE                        equ 0001h
PORTF_C2OUTF_LENGTH                      equ 0001h
PORTF_C2OUTF_MASK                        equ 0002h
PORTF_C1OUTF_POSN                        equ 0002h
PORTF_C1OUTF_POSITION                    equ 0002h
PORTF_C1OUTF_SIZE                        equ 0001h
PORTF_C1OUTF_LENGTH                      equ 0001h
PORTF_C1OUTF_MASK                        equ 0004h

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
PORTG_RG5_POSN                           equ 0005h
PORTG_RG5_POSITION                       equ 0005h
PORTG_RG5_SIZE                           equ 0001h
PORTG_RG5_LENGTH                         equ 0001h
PORTG_RG5_MASK                           equ 0020h
PORTG_CCP3_POSN                          equ 0000h
PORTG_CCP3_POSITION                      equ 0000h
PORTG_CCP3_SIZE                          equ 0001h
PORTG_CCP3_LENGTH                        equ 0001h
PORTG_CCP3_MASK                          equ 0001h
PORTG_C3OUT_POSN                         equ 0001h
PORTG_C3OUT_POSITION                     equ 0001h
PORTG_C3OUT_SIZE                         equ 0001h
PORTG_C3OUT_LENGTH                       equ 0001h
PORTG_C3OUT_MASK                         equ 0002h
PORTG_C3INA_POSN                         equ 0002h
PORTG_C3INA_POSITION                     equ 0002h
PORTG_C3INA_SIZE                         equ 0001h
PORTG_C3INA_LENGTH                       equ 0001h
PORTG_C3INA_MASK                         equ 0004h
PORTG_C3INB_POSN                         equ 0003h
PORTG_C3INB_POSITION                     equ 0003h
PORTG_C3INB_SIZE                         equ 0001h
PORTG_C3INB_LENGTH                       equ 0001h
PORTG_C3INB_MASK                         equ 0008h
PORTG_C3INC_POSN                         equ 0004h
PORTG_C3INC_POSITION                     equ 0004h
PORTG_C3INC_SIZE                         equ 0001h
PORTG_C3INC_LENGTH                       equ 0001h
PORTG_C3INC_MASK                         equ 0010h
PORTG_PA3_POSN                           equ 0000h
PORTG_PA3_POSITION                       equ 0000h
PORTG_PA3_SIZE                           equ 0001h
PORTG_PA3_LENGTH                         equ 0001h
PORTG_PA3_MASK                           equ 0001h
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
PORTG_PD3_POSN                           equ 0003h
PORTG_PD3_POSITION                       equ 0003h
PORTG_PD3_SIZE                           equ 0001h
PORTG_PD3_LENGTH                         equ 0001h
PORTG_PD3_MASK                           equ 0008h
PORTG_PD1_POSN                           equ 0004h
PORTG_PD1_POSITION                       equ 0004h
PORTG_PD1_SIZE                           equ 0001h
PORTG_PD1_LENGTH                         equ 0001h
PORTG_PD1_MASK                           equ 0010h
PORTG_AN19_POSN                          equ 0001h
PORTG_AN19_POSITION                      equ 0001h
PORTG_AN19_SIZE                          equ 0001h
PORTG_AN19_LENGTH                        equ 0001h
PORTG_AN19_MASK                          equ 0002h
PORTG_AN18_POSN                          equ 0002h
PORTG_AN18_POSITION                      equ 0002h
PORTG_AN18_SIZE                          equ 0001h
PORTG_AN18_LENGTH                        equ 0001h
PORTG_AN18_MASK                          equ 0004h
PORTG_AN17_POSN                          equ 0003h
PORTG_AN17_POSITION                      equ 0003h
PORTG_AN17_SIZE                          equ 0001h
PORTG_AN17_LENGTH                        equ 0001h
PORTG_AN17_MASK                          equ 0008h
PORTG_AN16_POSN                          equ 0004h
PORTG_AN16_POSITION                      equ 0004h
PORTG_AN16_SIZE                          equ 0001h
PORTG_AN16_LENGTH                        equ 0001h
PORTG_AN16_MASK                          equ 0010h
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
PORTG_CCP4_POSN                          equ 0003h
PORTG_CCP4_POSITION                      equ 0003h
PORTG_CCP4_SIZE                          equ 0001h
PORTG_CCP4_LENGTH                        equ 0001h
PORTG_CCP4_MASK                          equ 0008h
PORTG_CCP5_POSN                          equ 0004h
PORTG_CCP5_POSITION                      equ 0004h
PORTG_CCP5_SIZE                          equ 0001h
PORTG_CCP5_LENGTH                        equ 0001h
PORTG_CCP5_MASK                          equ 0010h
PORTG_T7CKI_POSN                         equ 0004h
PORTG_T7CKI_POSITION                     equ 0004h
PORTG_T7CKI_SIZE                         equ 0001h
PORTG_T7CKI_LENGTH                       equ 0001h
PORTG_T7CKI_MASK                         equ 0010h
PORTG_T5G_POSN                           equ 0004h
PORTG_T5G_POSITION                       equ 0004h
PORTG_T5G_SIZE                           equ 0001h
PORTG_T5G_LENGTH                         equ 0001h
PORTG_T5G_MASK                           equ 0010h
PORTG_RTCC_POSN                          equ 0004h
PORTG_RTCC_POSITION                      equ 0004h
PORTG_RTCC_SIZE                          equ 0001h
PORTG_RTCC_LENGTH                        equ 0001h
PORTG_RTCC_MASK                          equ 0010h
PORTG_C3OUTG_POSN                        equ 0001h
PORTG_C3OUTG_POSITION                    equ 0001h
PORTG_C3OUTG_SIZE                        equ 0001h
PORTG_C3OUTG_LENGTH                      equ 0001h
PORTG_C3OUTG_MASK                        equ 0002h
PORTG_RJPU_POSN                          equ 0005h
PORTG_RJPU_POSITION                      equ 0005h
PORTG_RJPU_SIZE                          equ 0001h
PORTG_RJPU_LENGTH                        equ 0001h
PORTG_RJPU_MASK                          equ 0020h

// Register: PORTH
#define PORTH PORTH
PORTH                                    equ 0F87h
// bitfield definitions
PORTH_RH0_POSN                           equ 0000h
PORTH_RH0_POSITION                       equ 0000h
PORTH_RH0_SIZE                           equ 0001h
PORTH_RH0_LENGTH                         equ 0001h
PORTH_RH0_MASK                           equ 0001h
PORTH_RH1_POSN                           equ 0001h
PORTH_RH1_POSITION                       equ 0001h
PORTH_RH1_SIZE                           equ 0001h
PORTH_RH1_LENGTH                         equ 0001h
PORTH_RH1_MASK                           equ 0002h
PORTH_RH2_POSN                           equ 0002h
PORTH_RH2_POSITION                       equ 0002h
PORTH_RH2_SIZE                           equ 0001h
PORTH_RH2_LENGTH                         equ 0001h
PORTH_RH2_MASK                           equ 0004h
PORTH_RH3_POSN                           equ 0003h
PORTH_RH3_POSITION                       equ 0003h
PORTH_RH3_SIZE                           equ 0001h
PORTH_RH3_LENGTH                         equ 0001h
PORTH_RH3_MASK                           equ 0008h
PORTH_RH4_POSN                           equ 0004h
PORTH_RH4_POSITION                       equ 0004h
PORTH_RH4_SIZE                           equ 0001h
PORTH_RH4_LENGTH                         equ 0001h
PORTH_RH4_MASK                           equ 0010h
PORTH_RH5_POSN                           equ 0005h
PORTH_RH5_POSITION                       equ 0005h
PORTH_RH5_SIZE                           equ 0001h
PORTH_RH5_LENGTH                         equ 0001h
PORTH_RH5_MASK                           equ 0020h
PORTH_RH6_POSN                           equ 0006h
PORTH_RH6_POSITION                       equ 0006h
PORTH_RH6_SIZE                           equ 0001h
PORTH_RH6_LENGTH                         equ 0001h
PORTH_RH6_MASK                           equ 0040h
PORTH_RH7_POSN                           equ 0007h
PORTH_RH7_POSITION                       equ 0007h
PORTH_RH7_SIZE                           equ 0001h
PORTH_RH7_LENGTH                         equ 0001h
PORTH_RH7_MASK                           equ 0080h
PORTH_AN23_POSN                          equ 0000h
PORTH_AN23_POSITION                      equ 0000h
PORTH_AN23_SIZE                          equ 0001h
PORTH_AN23_LENGTH                        equ 0001h
PORTH_AN23_MASK                          equ 0001h
PORTH_AN22_POSN                          equ 0001h
PORTH_AN22_POSITION                      equ 0001h
PORTH_AN22_SIZE                          equ 0001h
PORTH_AN22_LENGTH                        equ 0001h
PORTH_AN22_MASK                          equ 0002h
PORTH_AN21_POSN                          equ 0002h
PORTH_AN21_POSITION                      equ 0002h
PORTH_AN21_SIZE                          equ 0001h
PORTH_AN21_LENGTH                        equ 0001h
PORTH_AN21_MASK                          equ 0004h
PORTH_AN20_POSN                          equ 0003h
PORTH_AN20_POSITION                      equ 0003h
PORTH_AN20_SIZE                          equ 0001h
PORTH_AN20_LENGTH                        equ 0001h
PORTH_AN20_MASK                          equ 0008h
PORTH_AN12_POSN                          equ 0004h
PORTH_AN12_POSITION                      equ 0004h
PORTH_AN12_SIZE                          equ 0001h
PORTH_AN12_LENGTH                        equ 0001h
PORTH_AN12_MASK                          equ 0010h
PORTH_AN13_POSN                          equ 0005h
PORTH_AN13_POSITION                      equ 0005h
PORTH_AN13_SIZE                          equ 0001h
PORTH_AN13_LENGTH                        equ 0001h
PORTH_AN13_MASK                          equ 0020h
PORTH_AN14_POSN                          equ 0006h
PORTH_AN14_POSITION                      equ 0006h
PORTH_AN14_SIZE                          equ 0001h
PORTH_AN14_LENGTH                        equ 0001h
PORTH_AN14_MASK                          equ 0040h
PORTH_AN15_POSN                          equ 0007h
PORTH_AN15_POSITION                      equ 0007h
PORTH_AN15_SIZE                          equ 0001h
PORTH_AN15_LENGTH                        equ 0001h
PORTH_AN15_MASK                          equ 0080h
PORTH_A16_POSN                           equ 0000h
PORTH_A16_POSITION                       equ 0000h
PORTH_A16_SIZE                           equ 0001h
PORTH_A16_LENGTH                         equ 0001h
PORTH_A16_MASK                           equ 0001h
PORTH_A17_POSN                           equ 0001h
PORTH_A17_POSITION                       equ 0001h
PORTH_A17_SIZE                           equ 0001h
PORTH_A17_LENGTH                         equ 0001h
PORTH_A17_MASK                           equ 0002h
PORTH_A18_POSN                           equ 0002h
PORTH_A18_POSITION                       equ 0002h
PORTH_A18_SIZE                           equ 0001h
PORTH_A18_LENGTH                         equ 0001h
PORTH_A18_MASK                           equ 0004h
PORTH_A19_POSN                           equ 0003h
PORTH_A19_POSITION                       equ 0003h
PORTH_A19_SIZE                           equ 0001h
PORTH_A19_LENGTH                         equ 0001h
PORTH_A19_MASK                           equ 0008h
PORTH_CCP9_POSN                          equ 0004h
PORTH_CCP9_POSITION                      equ 0004h
PORTH_CCP9_SIZE                          equ 0001h
PORTH_CCP9_LENGTH                        equ 0001h
PORTH_CCP9_MASK                          equ 0010h
PORTH_CCP8_POSN                          equ 0005h
PORTH_CCP8_POSITION                      equ 0005h
PORTH_CCP8_SIZE                          equ 0001h
PORTH_CCP8_LENGTH                        equ 0001h
PORTH_CCP8_MASK                          equ 0020h
PORTH_CCP7_POSN                          equ 0006h
PORTH_CCP7_POSITION                      equ 0006h
PORTH_CCP7_SIZE                          equ 0001h
PORTH_CCP7_LENGTH                        equ 0001h
PORTH_CCP7_MASK                          equ 0040h
PORTH_CCP6_POSN                          equ 0007h
PORTH_CCP6_POSITION                      equ 0007h
PORTH_CCP6_SIZE                          equ 0001h
PORTH_CCP6_LENGTH                        equ 0001h
PORTH_CCP6_MASK                          equ 0080h
PORTH_PC3_POSN                           equ 0004h
PORTH_PC3_POSITION                       equ 0004h
PORTH_PC3_SIZE                           equ 0001h
PORTH_PC3_LENGTH                         equ 0001h
PORTH_PC3_MASK                           equ 0010h
PORTH_PB3_POSN                           equ 0005h
PORTH_PB3_POSITION                       equ 0005h
PORTH_PB3_SIZE                           equ 0001h
PORTH_PB3_LENGTH                         equ 0001h
PORTH_PB3_MASK                           equ 0020h
PORTH_PC1_POSN                           equ 0006h
PORTH_PC1_POSITION                       equ 0006h
PORTH_PC1_SIZE                           equ 0001h
PORTH_PC1_LENGTH                         equ 0001h
PORTH_PC1_MASK                           equ 0040h
PORTH_PB1_POSN                           equ 0007h
PORTH_PB1_POSITION                       equ 0007h
PORTH_PB1_SIZE                           equ 0001h
PORTH_PB1_LENGTH                         equ 0001h
PORTH_PB1_MASK                           equ 0080h
PORTH_C2INC_POSN                         equ 0004h
PORTH_C2INC_POSITION                     equ 0004h
PORTH_C2INC_SIZE                         equ 0001h
PORTH_C2INC_LENGTH                       equ 0001h
PORTH_C2INC_MASK                         equ 0010h
PORTH_C2IND_POSN                         equ 0005h
PORTH_C2IND_POSITION                     equ 0005h
PORTH_C2IND_SIZE                         equ 0001h
PORTH_C2IND_LENGTH                       equ 0001h
PORTH_C2IND_MASK                         equ 0020h
PORTH_C1INC_POSN                         equ 0006h
PORTH_C1INC_POSITION                     equ 0006h
PORTH_C1INC_SIZE                         equ 0001h
PORTH_C1INC_LENGTH                       equ 0001h
PORTH_C1INC_MASK                         equ 0040h

// Register: PORTJ
#define PORTJ PORTJ
PORTJ                                    equ 0F88h
// bitfield definitions
PORTJ_RJ0_POSN                           equ 0000h
PORTJ_RJ0_POSITION                       equ 0000h
PORTJ_RJ0_SIZE                           equ 0001h
PORTJ_RJ0_LENGTH                         equ 0001h
PORTJ_RJ0_MASK                           equ 0001h
PORTJ_RJ1_POSN                           equ 0001h
PORTJ_RJ1_POSITION                       equ 0001h
PORTJ_RJ1_SIZE                           equ 0001h
PORTJ_RJ1_LENGTH                         equ 0001h
PORTJ_RJ1_MASK                           equ 0002h
PORTJ_RJ2_POSN                           equ 0002h
PORTJ_RJ2_POSITION                       equ 0002h
PORTJ_RJ2_SIZE                           equ 0001h
PORTJ_RJ2_LENGTH                         equ 0001h
PORTJ_RJ2_MASK                           equ 0004h
PORTJ_RJ3_POSN                           equ 0003h
PORTJ_RJ3_POSITION                       equ 0003h
PORTJ_RJ3_SIZE                           equ 0001h
PORTJ_RJ3_LENGTH                         equ 0001h
PORTJ_RJ3_MASK                           equ 0008h
PORTJ_RJ4_POSN                           equ 0004h
PORTJ_RJ4_POSITION                       equ 0004h
PORTJ_RJ4_SIZE                           equ 0001h
PORTJ_RJ4_LENGTH                         equ 0001h
PORTJ_RJ4_MASK                           equ 0010h
PORTJ_RJ5_POSN                           equ 0005h
PORTJ_RJ5_POSITION                       equ 0005h
PORTJ_RJ5_SIZE                           equ 0001h
PORTJ_RJ5_LENGTH                         equ 0001h
PORTJ_RJ5_MASK                           equ 0020h
PORTJ_RJ6_POSN                           equ 0006h
PORTJ_RJ6_POSITION                       equ 0006h
PORTJ_RJ6_SIZE                           equ 0001h
PORTJ_RJ6_LENGTH                         equ 0001h
PORTJ_RJ6_MASK                           equ 0040h
PORTJ_RJ7_POSN                           equ 0007h
PORTJ_RJ7_POSITION                       equ 0007h
PORTJ_RJ7_SIZE                           equ 0001h
PORTJ_RJ7_LENGTH                         equ 0001h
PORTJ_RJ7_MASK                           equ 0080h
PORTJ_ALE_POSN                           equ 0000h
PORTJ_ALE_POSITION                       equ 0000h
PORTJ_ALE_SIZE                           equ 0001h
PORTJ_ALE_LENGTH                         equ 0001h
PORTJ_ALE_MASK                           equ 0001h
PORTJ_OE_POSN                            equ 0001h
PORTJ_OE_POSITION                        equ 0001h
PORTJ_OE_SIZE                            equ 0001h
PORTJ_OE_LENGTH                          equ 0001h
PORTJ_OE_MASK                            equ 0002h
PORTJ_WRL_POSN                           equ 0002h
PORTJ_WRL_POSITION                       equ 0002h
PORTJ_WRL_SIZE                           equ 0001h
PORTJ_WRL_LENGTH                         equ 0001h
PORTJ_WRL_MASK                           equ 0004h
PORTJ_WRH_POSN                           equ 0003h
PORTJ_WRH_POSITION                       equ 0003h
PORTJ_WRH_SIZE                           equ 0001h
PORTJ_WRH_LENGTH                         equ 0001h
PORTJ_WRH_MASK                           equ 0008h
PORTJ_BA0_POSN                           equ 0004h
PORTJ_BA0_POSITION                       equ 0004h
PORTJ_BA0_SIZE                           equ 0001h
PORTJ_BA0_LENGTH                         equ 0001h
PORTJ_BA0_MASK                           equ 0010h
PORTJ_CE_POSN                            equ 0005h
PORTJ_CE_POSITION                        equ 0005h
PORTJ_CE_SIZE                            equ 0001h
PORTJ_CE_LENGTH                          equ 0001h
PORTJ_CE_MASK                            equ 0020h
PORTJ_LB_POSN                            equ 0006h
PORTJ_LB_POSITION                        equ 0006h
PORTJ_LB_SIZE                            equ 0001h
PORTJ_LB_LENGTH                          equ 0001h
PORTJ_LB_MASK                            equ 0040h
PORTJ_UB_POSN                            equ 0007h
PORTJ_UB_POSITION                        equ 0007h
PORTJ_UB_SIZE                            equ 0001h
PORTJ_UB_LENGTH                          equ 0001h
PORTJ_UB_MASK                            equ 0080h

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
LATE_LE2_POSN                            equ 0002h
LATE_LE2_POSITION                        equ 0002h
LATE_LE2_SIZE                            equ 0001h
LATE_LE2_LENGTH                          equ 0001h
LATE_LE2_MASK                            equ 0004h
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

// Register: LATH
#define LATH LATH
LATH                                     equ 0F90h
// bitfield definitions
LATH_LATH0_POSN                          equ 0000h
LATH_LATH0_POSITION                      equ 0000h
LATH_LATH0_SIZE                          equ 0001h
LATH_LATH0_LENGTH                        equ 0001h
LATH_LATH0_MASK                          equ 0001h
LATH_LATH1_POSN                          equ 0001h
LATH_LATH1_POSITION                      equ 0001h
LATH_LATH1_SIZE                          equ 0001h
LATH_LATH1_LENGTH                        equ 0001h
LATH_LATH1_MASK                          equ 0002h
LATH_LATH2_POSN                          equ 0002h
LATH_LATH2_POSITION                      equ 0002h
LATH_LATH2_SIZE                          equ 0001h
LATH_LATH2_LENGTH                        equ 0001h
LATH_LATH2_MASK                          equ 0004h
LATH_LATH3_POSN                          equ 0003h
LATH_LATH3_POSITION                      equ 0003h
LATH_LATH3_SIZE                          equ 0001h
LATH_LATH3_LENGTH                        equ 0001h
LATH_LATH3_MASK                          equ 0008h
LATH_LATH4_POSN                          equ 0004h
LATH_LATH4_POSITION                      equ 0004h
LATH_LATH4_SIZE                          equ 0001h
LATH_LATH4_LENGTH                        equ 0001h
LATH_LATH4_MASK                          equ 0010h
LATH_LATH5_POSN                          equ 0005h
LATH_LATH5_POSITION                      equ 0005h
LATH_LATH5_SIZE                          equ 0001h
LATH_LATH5_LENGTH                        equ 0001h
LATH_LATH5_MASK                          equ 0020h
LATH_LATH6_POSN                          equ 0006h
LATH_LATH6_POSITION                      equ 0006h
LATH_LATH6_SIZE                          equ 0001h
LATH_LATH6_LENGTH                        equ 0001h
LATH_LATH6_MASK                          equ 0040h
LATH_LATH7_POSN                          equ 0007h
LATH_LATH7_POSITION                      equ 0007h
LATH_LATH7_SIZE                          equ 0001h
LATH_LATH7_LENGTH                        equ 0001h
LATH_LATH7_MASK                          equ 0080h
LATH_LH0_POSN                            equ 0000h
LATH_LH0_POSITION                        equ 0000h
LATH_LH0_SIZE                            equ 0001h
LATH_LH0_LENGTH                          equ 0001h
LATH_LH0_MASK                            equ 0001h
LATH_LH1_POSN                            equ 0001h
LATH_LH1_POSITION                        equ 0001h
LATH_LH1_SIZE                            equ 0001h
LATH_LH1_LENGTH                          equ 0001h
LATH_LH1_MASK                            equ 0002h
LATH_LH2_POSN                            equ 0002h
LATH_LH2_POSITION                        equ 0002h
LATH_LH2_SIZE                            equ 0001h
LATH_LH2_LENGTH                          equ 0001h
LATH_LH2_MASK                            equ 0004h
LATH_LH3_POSN                            equ 0003h
LATH_LH3_POSITION                        equ 0003h
LATH_LH3_SIZE                            equ 0001h
LATH_LH3_LENGTH                          equ 0001h
LATH_LH3_MASK                            equ 0008h
LATH_LH4_POSN                            equ 0004h
LATH_LH4_POSITION                        equ 0004h
LATH_LH4_SIZE                            equ 0001h
LATH_LH4_LENGTH                          equ 0001h
LATH_LH4_MASK                            equ 0010h
LATH_LH5_POSN                            equ 0005h
LATH_LH5_POSITION                        equ 0005h
LATH_LH5_SIZE                            equ 0001h
LATH_LH5_LENGTH                          equ 0001h
LATH_LH5_MASK                            equ 0020h
LATH_LH6_POSN                            equ 0006h
LATH_LH6_POSITION                        equ 0006h
LATH_LH6_SIZE                            equ 0001h
LATH_LH6_LENGTH                          equ 0001h
LATH_LH6_MASK                            equ 0040h
LATH_LH7_POSN                            equ 0007h
LATH_LH7_POSITION                        equ 0007h
LATH_LH7_SIZE                            equ 0001h
LATH_LH7_LENGTH                          equ 0001h
LATH_LH7_MASK                            equ 0080h

// Register: LATJ
#define LATJ LATJ
LATJ                                     equ 0F91h
// bitfield definitions
LATJ_LATJ0_POSN                          equ 0000h
LATJ_LATJ0_POSITION                      equ 0000h
LATJ_LATJ0_SIZE                          equ 0001h
LATJ_LATJ0_LENGTH                        equ 0001h
LATJ_LATJ0_MASK                          equ 0001h
LATJ_LATJ1_POSN                          equ 0001h
LATJ_LATJ1_POSITION                      equ 0001h
LATJ_LATJ1_SIZE                          equ 0001h
LATJ_LATJ1_LENGTH                        equ 0001h
LATJ_LATJ1_MASK                          equ 0002h
LATJ_LATJ2_POSN                          equ 0002h
LATJ_LATJ2_POSITION                      equ 0002h
LATJ_LATJ2_SIZE                          equ 0001h
LATJ_LATJ2_LENGTH                        equ 0001h
LATJ_LATJ2_MASK                          equ 0004h
LATJ_LATJ3_POSN                          equ 0003h
LATJ_LATJ3_POSITION                      equ 0003h
LATJ_LATJ3_SIZE                          equ 0001h
LATJ_LATJ3_LENGTH                        equ 0001h
LATJ_LATJ3_MASK                          equ 0008h
LATJ_LATJ4_POSN                          equ 0004h
LATJ_LATJ4_POSITION                      equ 0004h
LATJ_LATJ4_SIZE                          equ 0001h
LATJ_LATJ4_LENGTH                        equ 0001h
LATJ_LATJ4_MASK                          equ 0010h
LATJ_LATJ5_POSN                          equ 0005h
LATJ_LATJ5_POSITION                      equ 0005h
LATJ_LATJ5_SIZE                          equ 0001h
LATJ_LATJ5_LENGTH                        equ 0001h
LATJ_LATJ5_MASK                          equ 0020h
LATJ_LATJ6_POSN                          equ 0006h
LATJ_LATJ6_POSITION                      equ 0006h
LATJ_LATJ6_SIZE                          equ 0001h
LATJ_LATJ6_LENGTH                        equ 0001h
LATJ_LATJ6_MASK                          equ 0040h
LATJ_LATJ7_POSN                          equ 0007h
LATJ_LATJ7_POSITION                      equ 0007h
LATJ_LATJ7_SIZE                          equ 0001h
LATJ_LATJ7_LENGTH                        equ 0001h
LATJ_LATJ7_MASK                          equ 0080h
LATJ_LJ0_POSN                            equ 0000h
LATJ_LJ0_POSITION                        equ 0000h
LATJ_LJ0_SIZE                            equ 0001h
LATJ_LJ0_LENGTH                          equ 0001h
LATJ_LJ0_MASK                            equ 0001h
LATJ_LJ1_POSN                            equ 0001h
LATJ_LJ1_POSITION                        equ 0001h
LATJ_LJ1_SIZE                            equ 0001h
LATJ_LJ1_LENGTH                          equ 0001h
LATJ_LJ1_MASK                            equ 0002h
LATJ_LJ2_POSN                            equ 0002h
LATJ_LJ2_POSITION                        equ 0002h
LATJ_LJ2_SIZE                            equ 0001h
LATJ_LJ2_LENGTH                          equ 0001h
LATJ_LJ2_MASK                            equ 0004h
LATJ_LJ3_POSN                            equ 0003h
LATJ_LJ3_POSITION                        equ 0003h
LATJ_LJ3_SIZE                            equ 0001h
LATJ_LJ3_LENGTH                          equ 0001h
LATJ_LJ3_MASK                            equ 0008h
LATJ_LJ4_POSN                            equ 0004h
LATJ_LJ4_POSITION                        equ 0004h
LATJ_LJ4_SIZE                            equ 0001h
LATJ_LJ4_LENGTH                          equ 0001h
LATJ_LJ4_MASK                            equ 0010h
LATJ_LJ5_POSN                            equ 0005h
LATJ_LJ5_POSITION                        equ 0005h
LATJ_LJ5_SIZE                            equ 0001h
LATJ_LJ5_LENGTH                          equ 0001h
LATJ_LJ5_MASK                            equ 0020h
LATJ_LJ6_POSN                            equ 0006h
LATJ_LJ6_POSITION                        equ 0006h
LATJ_LJ6_SIZE                            equ 0001h
LATJ_LJ6_LENGTH                          equ 0001h
LATJ_LJ6_MASK                            equ 0040h
LATJ_LJ7_POSN                            equ 0007h
LATJ_LJ7_POSITION                        equ 0007h
LATJ_LJ7_SIZE                            equ 0001h
LATJ_LJ7_LENGTH                          equ 0001h
LATJ_LJ7_MASK                            equ 0080h

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
TRISE_TRISE2_POSN                        equ 0002h
TRISE_TRISE2_POSITION                    equ 0002h
TRISE_TRISE2_SIZE                        equ 0001h
TRISE_TRISE2_LENGTH                      equ 0001h
TRISE_TRISE2_MASK                        equ 0004h
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

// Register: TRISH
#define TRISH TRISH
TRISH                                    equ 0F99h
// bitfield definitions
TRISH_TRISH0_POSN                        equ 0000h
TRISH_TRISH0_POSITION                    equ 0000h
TRISH_TRISH0_SIZE                        equ 0001h
TRISH_TRISH0_LENGTH                      equ 0001h
TRISH_TRISH0_MASK                        equ 0001h
TRISH_TRISH1_POSN                        equ 0001h
TRISH_TRISH1_POSITION                    equ 0001h
TRISH_TRISH1_SIZE                        equ 0001h
TRISH_TRISH1_LENGTH                      equ 0001h
TRISH_TRISH1_MASK                        equ 0002h
TRISH_TRISH2_POSN                        equ 0002h
TRISH_TRISH2_POSITION                    equ 0002h
TRISH_TRISH2_SIZE                        equ 0001h
TRISH_TRISH2_LENGTH                      equ 0001h
TRISH_TRISH2_MASK                        equ 0004h
TRISH_TRISH3_POSN                        equ 0003h
TRISH_TRISH3_POSITION                    equ 0003h
TRISH_TRISH3_SIZE                        equ 0001h
TRISH_TRISH3_LENGTH                      equ 0001h
TRISH_TRISH3_MASK                        equ 0008h
TRISH_TRISH4_POSN                        equ 0004h
TRISH_TRISH4_POSITION                    equ 0004h
TRISH_TRISH4_SIZE                        equ 0001h
TRISH_TRISH4_LENGTH                      equ 0001h
TRISH_TRISH4_MASK                        equ 0010h
TRISH_TRISH5_POSN                        equ 0005h
TRISH_TRISH5_POSITION                    equ 0005h
TRISH_TRISH5_SIZE                        equ 0001h
TRISH_TRISH5_LENGTH                      equ 0001h
TRISH_TRISH5_MASK                        equ 0020h
TRISH_TRISH6_POSN                        equ 0006h
TRISH_TRISH6_POSITION                    equ 0006h
TRISH_TRISH6_SIZE                        equ 0001h
TRISH_TRISH6_LENGTH                      equ 0001h
TRISH_TRISH6_MASK                        equ 0040h
TRISH_TRISH7_POSN                        equ 0007h
TRISH_TRISH7_POSITION                    equ 0007h
TRISH_TRISH7_SIZE                        equ 0001h
TRISH_TRISH7_LENGTH                      equ 0001h
TRISH_TRISH7_MASK                        equ 0080h

// Register: TRISJ
#define TRISJ TRISJ
TRISJ                                    equ 0F9Ah
// bitfield definitions
TRISJ_TRISJ0_POSN                        equ 0000h
TRISJ_TRISJ0_POSITION                    equ 0000h
TRISJ_TRISJ0_SIZE                        equ 0001h
TRISJ_TRISJ0_LENGTH                      equ 0001h
TRISJ_TRISJ0_MASK                        equ 0001h
TRISJ_TRISJ1_POSN                        equ 0001h
TRISJ_TRISJ1_POSITION                    equ 0001h
TRISJ_TRISJ1_SIZE                        equ 0001h
TRISJ_TRISJ1_LENGTH                      equ 0001h
TRISJ_TRISJ1_MASK                        equ 0002h
TRISJ_TRISJ2_POSN                        equ 0002h
TRISJ_TRISJ2_POSITION                    equ 0002h
TRISJ_TRISJ2_SIZE                        equ 0001h
TRISJ_TRISJ2_LENGTH                      equ 0001h
TRISJ_TRISJ2_MASK                        equ 0004h
TRISJ_TRISJ3_POSN                        equ 0003h
TRISJ_TRISJ3_POSITION                    equ 0003h
TRISJ_TRISJ3_SIZE                        equ 0001h
TRISJ_TRISJ3_LENGTH                      equ 0001h
TRISJ_TRISJ3_MASK                        equ 0008h
TRISJ_TRISJ4_POSN                        equ 0004h
TRISJ_TRISJ4_POSITION                    equ 0004h
TRISJ_TRISJ4_SIZE                        equ 0001h
TRISJ_TRISJ4_LENGTH                      equ 0001h
TRISJ_TRISJ4_MASK                        equ 0010h
TRISJ_TRISJ5_POSN                        equ 0005h
TRISJ_TRISJ5_POSITION                    equ 0005h
TRISJ_TRISJ5_SIZE                        equ 0001h
TRISJ_TRISJ5_LENGTH                      equ 0001h
TRISJ_TRISJ5_MASK                        equ 0020h
TRISJ_TRISJ6_POSN                        equ 0006h
TRISJ_TRISJ6_POSITION                    equ 0006h
TRISJ_TRISJ6_SIZE                        equ 0001h
TRISJ_TRISJ6_LENGTH                      equ 0001h
TRISJ_TRISJ6_MASK                        equ 0040h
TRISJ_TRISJ7_POSN                        equ 0007h
TRISJ_TRISJ7_POSITION                    equ 0007h
TRISJ_TRISJ7_SIZE                        equ 0001h
TRISJ_TRISJ7_LENGTH                      equ 0001h
TRISJ_TRISJ7_MASK                        equ 0080h

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

// Register: PSTR1CON
#define PSTR1CON PSTR1CON
PSTR1CON                                 equ 0F9Ch
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
PSTR1CON_CMPL_POSN                       equ 0006h
PSTR1CON_CMPL_POSITION                   equ 0006h
PSTR1CON_CMPL_SIZE                       equ 0002h
PSTR1CON_CMPL_LENGTH                     equ 0002h
PSTR1CON_CMPL_MASK                       equ 00C0h
PSTR1CON_CMPL0_POSN                      equ 0006h
PSTR1CON_CMPL0_POSITION                  equ 0006h
PSTR1CON_CMPL0_SIZE                      equ 0001h
PSTR1CON_CMPL0_LENGTH                    equ 0001h
PSTR1CON_CMPL0_MASK                      equ 0040h
PSTR1CON_CMPL1_POSN                      equ 0007h
PSTR1CON_CMPL1_POSITION                  equ 0007h
PSTR1CON_CMPL1_SIZE                      equ 0001h
PSTR1CON_CMPL1_LENGTH                    equ 0001h
PSTR1CON_CMPL1_MASK                      equ 0080h

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
PIE1_TMR1GIE_POSN                        equ 0002h
PIE1_TMR1GIE_POSITION                    equ 0002h
PIE1_TMR1GIE_SIZE                        equ 0001h
PIE1_TMR1GIE_LENGTH                      equ 0001h
PIE1_TMR1GIE_MASK                        equ 0004h
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
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h
PIE1_PSPIE_POSN                          equ 0007h
PIE1_PSPIE_POSITION                      equ 0007h
PIE1_PSPIE_SIZE                          equ 0001h
PIE1_PSPIE_LENGTH                        equ 0001h
PIE1_PSPIE_MASK                          equ 0080h
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
PIR1_TMR1GIF_POSN                        equ 0002h
PIR1_TMR1GIF_POSITION                    equ 0002h
PIR1_TMR1GIF_SIZE                        equ 0001h
PIR1_TMR1GIF_LENGTH                      equ 0001h
PIR1_TMR1GIF_MASK                        equ 0004h
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
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h
PIR1_PSPIF_POSN                          equ 0007h
PIR1_PSPIF_POSITION                      equ 0007h
PIR1_PSPIF_SIZE                          equ 0001h
PIR1_PSPIF_LENGTH                        equ 0001h
PIR1_PSPIF_MASK                          equ 0080h
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
IPR1_TMR1GIP_POSN                        equ 0002h
IPR1_TMR1GIP_POSITION                    equ 0002h
IPR1_TMR1GIP_SIZE                        equ 0001h
IPR1_TMR1GIP_LENGTH                      equ 0001h
IPR1_TMR1GIP_MASK                        equ 0004h
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
IPR1_ADIP_POSN                           equ 0006h
IPR1_ADIP_POSITION                       equ 0006h
IPR1_ADIP_SIZE                           equ 0001h
IPR1_ADIP_LENGTH                         equ 0001h
IPR1_ADIP_MASK                           equ 0040h
IPR1_PSPIP_POSN                          equ 0007h
IPR1_PSPIP_POSITION                      equ 0007h
IPR1_PSPIP_SIZE                          equ 0001h
IPR1_PSPIP_LENGTH                        equ 0001h
IPR1_PSPIP_MASK                          equ 0080h
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

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0FA0h
// bitfield definitions
PIE2_TMR3GIE_POSN                        equ 0000h
PIE2_TMR3GIE_POSITION                    equ 0000h
PIE2_TMR3GIE_SIZE                        equ 0001h
PIE2_TMR3GIE_LENGTH                      equ 0001h
PIE2_TMR3GIE_MASK                        equ 0001h
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
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h
PIE2_BCL2IE_POSN                         equ 0004h
PIE2_BCL2IE_POSITION                     equ 0004h
PIE2_BCL2IE_SIZE                         equ 0001h
PIE2_BCL2IE_LENGTH                       equ 0001h
PIE2_BCL2IE_MASK                         equ 0010h
PIE2_SSP2IE_POSN                         equ 0005h
PIE2_SSP2IE_POSITION                     equ 0005h
PIE2_SSP2IE_SIZE                         equ 0001h
PIE2_SSP2IE_LENGTH                       equ 0001h
PIE2_SSP2IE_MASK                         equ 0020h
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
PIE2_BCLIE_POSN                          equ 0003h
PIE2_BCLIE_POSITION                      equ 0003h
PIE2_BCLIE_SIZE                          equ 0001h
PIE2_BCLIE_LENGTH                        equ 0001h
PIE2_BCLIE_MASK                          equ 0008h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0FA1h
// bitfield definitions
PIR2_TMR3GIF_POSN                        equ 0000h
PIR2_TMR3GIF_POSITION                    equ 0000h
PIR2_TMR3GIF_SIZE                        equ 0001h
PIR2_TMR3GIF_LENGTH                      equ 0001h
PIR2_TMR3GIF_MASK                        equ 0001h
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
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h
PIR2_BCL2IF_POSN                         equ 0004h
PIR2_BCL2IF_POSITION                     equ 0004h
PIR2_BCL2IF_SIZE                         equ 0001h
PIR2_BCL2IF_LENGTH                       equ 0001h
PIR2_BCL2IF_MASK                         equ 0010h
PIR2_SSP2IF_POSN                         equ 0005h
PIR2_SSP2IF_POSITION                     equ 0005h
PIR2_SSP2IF_SIZE                         equ 0001h
PIR2_SSP2IF_LENGTH                       equ 0001h
PIR2_SSP2IF_MASK                         equ 0020h
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
PIR2_BCLIF_POSN                          equ 0003h
PIR2_BCLIF_POSITION                      equ 0003h
PIR2_BCLIF_SIZE                          equ 0001h
PIR2_BCLIF_LENGTH                        equ 0001h
PIR2_BCLIF_MASK                          equ 0008h

// Register: IPR2
#define IPR2 IPR2
IPR2                                     equ 0FA2h
// bitfield definitions
IPR2_TMR3GIP_POSN                        equ 0000h
IPR2_TMR3GIP_POSITION                    equ 0000h
IPR2_TMR3GIP_SIZE                        equ 0001h
IPR2_TMR3GIP_LENGTH                      equ 0001h
IPR2_TMR3GIP_MASK                        equ 0001h
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
IPR2_BCL1IP_POSN                         equ 0003h
IPR2_BCL1IP_POSITION                     equ 0003h
IPR2_BCL1IP_SIZE                         equ 0001h
IPR2_BCL1IP_LENGTH                       equ 0001h
IPR2_BCL1IP_MASK                         equ 0008h
IPR2_BCL2IP_POSN                         equ 0004h
IPR2_BCL2IP_POSITION                     equ 0004h
IPR2_BCL2IP_SIZE                         equ 0001h
IPR2_BCL2IP_LENGTH                       equ 0001h
IPR2_BCL2IP_MASK                         equ 0010h
IPR2_SSP2IP_POSN                         equ 0005h
IPR2_SSP2IP_POSITION                     equ 0005h
IPR2_SSP2IP_SIZE                         equ 0001h
IPR2_SSP2IP_LENGTH                       equ 0001h
IPR2_SSP2IP_MASK                         equ 0020h
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
IPR2_BCLIP_POSN                          equ 0003h
IPR2_BCLIP_POSITION                      equ 0003h
IPR2_BCLIP_SIZE                          equ 0001h
IPR2_BCLIP_LENGTH                        equ 0001h
IPR2_BCLIP_MASK                          equ 0008h

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
PIE3_TMR5GIE_POSN                        equ 0007h
PIE3_TMR5GIE_POSITION                    equ 0007h
PIE3_TMR5GIE_SIZE                        equ 0001h
PIE3_TMR5GIE_LENGTH                      equ 0001h
PIE3_TMR5GIE_MASK                        equ 0080h
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
PIR3_TMR5GIF_POSN                        equ 0007h
PIR3_TMR5GIF_POSITION                    equ 0007h
PIR3_TMR5GIF_SIZE                        equ 0001h
PIR3_TMR5GIF_LENGTH                      equ 0001h
PIR3_TMR5GIF_MASK                        equ 0080h
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
IPR3_TMR5GIP_POSN                        equ 0007h
IPR3_TMR5GIP_POSITION                    equ 0007h
IPR3_TMR5GIP_SIZE                        equ 0001h
IPR3_TMR5GIP_LENGTH                      equ 0001h
IPR3_TMR5GIP_MASK                        equ 0080h
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

// Register: PIR6
#define PIR6 PIR6
PIR6                                     equ 0FA6h
// bitfield definitions
PIR6_CMP1IF_POSN                         equ 0000h
PIR6_CMP1IF_POSITION                     equ 0000h
PIR6_CMP1IF_SIZE                         equ 0001h
PIR6_CMP1IF_LENGTH                       equ 0001h
PIR6_CMP1IF_MASK                         equ 0001h
PIR6_CMP2IF_POSN                         equ 0001h
PIR6_CMP2IF_POSITION                     equ 0001h
PIR6_CMP2IF_SIZE                         equ 0001h
PIR6_CMP2IF_LENGTH                       equ 0001h
PIR6_CMP2IF_MASK                         equ 0002h
PIR6_CMP3IF_POSN                         equ 0002h
PIR6_CMP3IF_POSITION                     equ 0002h
PIR6_CMP3IF_SIZE                         equ 0001h
PIR6_CMP3IF_LENGTH                       equ 0001h
PIR6_CMP3IF_MASK                         equ 0004h
PIR6_EEIF_POSN                           equ 0004h
PIR6_EEIF_POSITION                       equ 0004h
PIR6_EEIF_SIZE                           equ 0001h
PIR6_EEIF_LENGTH                         equ 0001h
PIR6_EEIF_MASK                           equ 0010h

// Register: PSPCON
#define PSPCON PSPCON
PSPCON                                   equ 0FA7h
// bitfield definitions
PSPCON_PSPMODE_POSN                      equ 0004h
PSPCON_PSPMODE_POSITION                  equ 0004h
PSPCON_PSPMODE_SIZE                      equ 0001h
PSPCON_PSPMODE_LENGTH                    equ 0001h
PSPCON_PSPMODE_MASK                      equ 0010h
PSPCON_IBOV_POSN                         equ 0005h
PSPCON_IBOV_POSITION                     equ 0005h
PSPCON_IBOV_SIZE                         equ 0001h
PSPCON_IBOV_LENGTH                       equ 0001h
PSPCON_IBOV_MASK                         equ 0020h
PSPCON_OBF_POSN                          equ 0006h
PSPCON_OBF_POSITION                      equ 0006h
PSPCON_OBF_SIZE                          equ 0001h
PSPCON_OBF_LENGTH                        equ 0001h
PSPCON_OBF_MASK                          equ 0040h
PSPCON_IBF_POSN                          equ 0007h
PSPCON_IBF_POSITION                      equ 0007h
PSPCON_IBF_SIZE                          equ 0001h
PSPCON_IBF_LENGTH                        equ 0001h
PSPCON_IBF_MASK                          equ 0080h

// Register: HLVDCON
#define HLVDCON HLVDCON
HLVDCON                                  equ 0FA8h
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

// Register: IPR6
#define IPR6 IPR6
IPR6                                     equ 0FA9h
// bitfield definitions
IPR6_CMP1IP_POSN                         equ 0000h
IPR6_CMP1IP_POSITION                     equ 0000h
IPR6_CMP1IP_SIZE                         equ 0001h
IPR6_CMP1IP_LENGTH                       equ 0001h
IPR6_CMP1IP_MASK                         equ 0001h
IPR6_CMP2IP_POSN                         equ 0001h
IPR6_CMP2IP_POSITION                     equ 0001h
IPR6_CMP2IP_SIZE                         equ 0001h
IPR6_CMP2IP_LENGTH                       equ 0001h
IPR6_CMP2IP_MASK                         equ 0002h
IPR6_CMP3IP_POSN                         equ 0002h
IPR6_CMP3IP_POSITION                     equ 0002h
IPR6_CMP3IP_SIZE                         equ 0001h
IPR6_CMP3IP_LENGTH                       equ 0001h
IPR6_CMP3IP_MASK                         equ 0004h
IPR6_EEIP_POSN                           equ 0004h
IPR6_EEIP_POSITION                       equ 0004h
IPR6_EEIP_SIZE                           equ 0001h
IPR6_EEIP_LENGTH                         equ 0001h
IPR6_EEIP_MASK                           equ 0010h

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 0FAAh
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

// Register: T3GCON
#define T3GCON T3GCON
T3GCON                                   equ 0FB0h
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

// Register: CMSTAT
#define CMSTAT CMSTAT
CMSTAT                                   equ 0FB4h
// bitfield definitions
CMSTAT_CMP1OUT_POSN                      equ 0005h
CMSTAT_CMP1OUT_POSITION                  equ 0005h
CMSTAT_CMP1OUT_SIZE                      equ 0001h
CMSTAT_CMP1OUT_LENGTH                    equ 0001h
CMSTAT_CMP1OUT_MASK                      equ 0020h
CMSTAT_CMP2OUT_POSN                      equ 0006h
CMSTAT_CMP2OUT_POSITION                  equ 0006h
CMSTAT_CMP2OUT_SIZE                      equ 0001h
CMSTAT_CMP2OUT_LENGTH                    equ 0001h
CMSTAT_CMP2OUT_MASK                      equ 0040h
CMSTAT_CMP3OUT_POSN                      equ 0007h
CMSTAT_CMP3OUT_POSITION                  equ 0007h
CMSTAT_CMP3OUT_SIZE                      equ 0001h
CMSTAT_CMP3OUT_LENGTH                    equ 0001h
CMSTAT_CMP3OUT_MASK                      equ 0080h
CMSTAT_C1OUT_POSN                        equ 0005h
CMSTAT_C1OUT_POSITION                    equ 0005h
CMSTAT_C1OUT_SIZE                        equ 0001h
CMSTAT_C1OUT_LENGTH                      equ 0001h
CMSTAT_C1OUT_MASK                        equ 0020h
CMSTAT_C2OUT_POSN                        equ 0006h
CMSTAT_C2OUT_POSITION                    equ 0006h
CMSTAT_C2OUT_SIZE                        equ 0001h
CMSTAT_C2OUT_LENGTH                      equ 0001h
CMSTAT_C2OUT_MASK                        equ 0040h
CMSTAT_C3OUT_POSN                        equ 0007h
CMSTAT_C3OUT_POSITION                    equ 0007h
CMSTAT_C3OUT_SIZE                        equ 0001h
CMSTAT_C3OUT_LENGTH                      equ 0001h
CMSTAT_C3OUT_MASK                        equ 0080h

// Register: CVRCON
#define CVRCON CVRCON
CVRCON                                   equ 0FB5h
// bitfield definitions
CVRCON_CVR_POSN                          equ 0000h
CVRCON_CVR_POSITION                      equ 0000h
CVRCON_CVR_SIZE                          equ 0005h
CVRCON_CVR_LENGTH                        equ 0005h
CVRCON_CVR_MASK                          equ 001Fh
CVRCON_CVRSS_POSN                        equ 0005h
CVRCON_CVRSS_POSITION                    equ 0005h
CVRCON_CVRSS_SIZE                        equ 0001h
CVRCON_CVRSS_LENGTH                      equ 0001h
CVRCON_CVRSS_MASK                        equ 0020h
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
CVRCON_CVR4_POSN                         equ 0004h
CVRCON_CVR4_POSITION                     equ 0004h
CVRCON_CVR4_SIZE                         equ 0001h
CVRCON_CVR4_LENGTH                       equ 0001h
CVRCON_CVR4_MASK                         equ 0010h
CVRCON_CVRR_POSN                         equ 0005h
CVRCON_CVRR_POSITION                     equ 0005h
CVRCON_CVRR_SIZE                         equ 0001h
CVRCON_CVRR_LENGTH                       equ 0001h
CVRCON_CVRR_MASK                         equ 0020h
CVRCON_CVROEN_POSN                       equ 0006h
CVRCON_CVROEN_POSITION                   equ 0006h
CVRCON_CVROEN_SIZE                       equ 0001h
CVRCON_CVROEN_LENGTH                     equ 0001h
CVRCON_CVROEN_MASK                       equ 0040h

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 0FB6h
// bitfield definitions
PIE4_CCP3IE_POSN                         equ 0000h
PIE4_CCP3IE_POSITION                     equ 0000h
PIE4_CCP3IE_SIZE                         equ 0001h
PIE4_CCP3IE_LENGTH                       equ 0001h
PIE4_CCP3IE_MASK                         equ 0001h
PIE4_CCP4IE_POSN                         equ 0001h
PIE4_CCP4IE_POSITION                     equ 0001h
PIE4_CCP4IE_SIZE                         equ 0001h
PIE4_CCP4IE_LENGTH                       equ 0001h
PIE4_CCP4IE_MASK                         equ 0002h
PIE4_CCP5IE_POSN                         equ 0002h
PIE4_CCP5IE_POSITION                     equ 0002h
PIE4_CCP5IE_SIZE                         equ 0001h
PIE4_CCP5IE_LENGTH                       equ 0001h
PIE4_CCP5IE_MASK                         equ 0004h
PIE4_CCP6IE_POSN                         equ 0003h
PIE4_CCP6IE_POSITION                     equ 0003h
PIE4_CCP6IE_SIZE                         equ 0001h
PIE4_CCP6IE_LENGTH                       equ 0001h
PIE4_CCP6IE_MASK                         equ 0008h
PIE4_CCP7IE_POSN                         equ 0004h
PIE4_CCP7IE_POSITION                     equ 0004h
PIE4_CCP7IE_SIZE                         equ 0001h
PIE4_CCP7IE_LENGTH                       equ 0001h
PIE4_CCP7IE_MASK                         equ 0010h
PIE4_CCP8IE_POSN                         equ 0005h
PIE4_CCP8IE_POSITION                     equ 0005h
PIE4_CCP8IE_SIZE                         equ 0001h
PIE4_CCP8IE_LENGTH                       equ 0001h
PIE4_CCP8IE_MASK                         equ 0020h

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0FB7h
// bitfield definitions
PIR4_CCP3IF_POSN                         equ 0000h
PIR4_CCP3IF_POSITION                     equ 0000h
PIR4_CCP3IF_SIZE                         equ 0001h
PIR4_CCP3IF_LENGTH                       equ 0001h
PIR4_CCP3IF_MASK                         equ 0001h
PIR4_CCP4IF_POSN                         equ 0001h
PIR4_CCP4IF_POSITION                     equ 0001h
PIR4_CCP4IF_SIZE                         equ 0001h
PIR4_CCP4IF_LENGTH                       equ 0001h
PIR4_CCP4IF_MASK                         equ 0002h
PIR4_CCP5IF_POSN                         equ 0002h
PIR4_CCP5IF_POSITION                     equ 0002h
PIR4_CCP5IF_SIZE                         equ 0001h
PIR4_CCP5IF_LENGTH                       equ 0001h
PIR4_CCP5IF_MASK                         equ 0004h
PIR4_CCP6IF_POSN                         equ 0003h
PIR4_CCP6IF_POSITION                     equ 0003h
PIR4_CCP6IF_SIZE                         equ 0001h
PIR4_CCP6IF_LENGTH                       equ 0001h
PIR4_CCP6IF_MASK                         equ 0008h
PIR4_CCP7IF_POSN                         equ 0004h
PIR4_CCP7IF_POSITION                     equ 0004h
PIR4_CCP7IF_SIZE                         equ 0001h
PIR4_CCP7IF_LENGTH                       equ 0001h
PIR4_CCP7IF_MASK                         equ 0010h
PIR4_CCP8IF_POSN                         equ 0005h
PIR4_CCP8IF_POSITION                     equ 0005h
PIR4_CCP8IF_SIZE                         equ 0001h
PIR4_CCP8IF_LENGTH                       equ 0001h
PIR4_CCP8IF_MASK                         equ 0020h

// Register: IPR4
#define IPR4 IPR4
IPR4                                     equ 0FB8h
// bitfield definitions
IPR4_CCP3IP_POSN                         equ 0000h
IPR4_CCP3IP_POSITION                     equ 0000h
IPR4_CCP3IP_SIZE                         equ 0001h
IPR4_CCP3IP_LENGTH                       equ 0001h
IPR4_CCP3IP_MASK                         equ 0001h
IPR4_CCP4IP_POSN                         equ 0001h
IPR4_CCP4IP_POSITION                     equ 0001h
IPR4_CCP4IP_SIZE                         equ 0001h
IPR4_CCP4IP_LENGTH                       equ 0001h
IPR4_CCP4IP_MASK                         equ 0002h
IPR4_CCP5IP_POSN                         equ 0002h
IPR4_CCP5IP_POSITION                     equ 0002h
IPR4_CCP5IP_SIZE                         equ 0001h
IPR4_CCP5IP_LENGTH                       equ 0001h
IPR4_CCP5IP_MASK                         equ 0004h
IPR4_CCP6IP_POSN                         equ 0003h
IPR4_CCP6IP_POSITION                     equ 0003h
IPR4_CCP6IP_SIZE                         equ 0001h
IPR4_CCP6IP_LENGTH                       equ 0001h
IPR4_CCP6IP_MASK                         equ 0008h
IPR4_CCP7IP_POSN                         equ 0004h
IPR4_CCP7IP_POSITION                     equ 0004h
IPR4_CCP7IP_SIZE                         equ 0001h
IPR4_CCP7IP_LENGTH                       equ 0001h
IPR4_CCP7IP_MASK                         equ 0010h
IPR4_CCP8IP_POSN                         equ 0005h
IPR4_CCP8IP_POSITION                     equ 0005h
IPR4_CCP8IP_SIZE                         equ 0001h
IPR4_CCP8IP_LENGTH                       equ 0001h
IPR4_CCP8IP_MASK                         equ 0020h
IPR4_CCIP3IP_POSN                        equ 0000h
IPR4_CCIP3IP_POSITION                    equ 0000h
IPR4_CCIP3IP_SIZE                        equ 0001h
IPR4_CCIP3IP_LENGTH                      equ 0001h
IPR4_CCIP3IP_MASK                        equ 0001h

// Register: PIE5
#define PIE5 PIE5
PIE5                                     equ 0FB9h
// bitfield definitions
PIE5_TMR4IE_POSN                         equ 0000h
PIE5_TMR4IE_POSITION                     equ 0000h
PIE5_TMR4IE_SIZE                         equ 0001h
PIE5_TMR4IE_LENGTH                       equ 0001h
PIE5_TMR4IE_MASK                         equ 0001h
PIE5_TMR5IE_POSN                         equ 0001h
PIE5_TMR5IE_POSITION                     equ 0001h
PIE5_TMR5IE_SIZE                         equ 0001h
PIE5_TMR5IE_LENGTH                       equ 0001h
PIE5_TMR5IE_MASK                         equ 0002h
PIE5_TMR6IE_POSN                         equ 0002h
PIE5_TMR6IE_POSITION                     equ 0002h
PIE5_TMR6IE_SIZE                         equ 0001h
PIE5_TMR6IE_LENGTH                       equ 0001h
PIE5_TMR6IE_MASK                         equ 0004h
PIE5_TMR8IE_POSN                         equ 0004h
PIE5_TMR8IE_POSITION                     equ 0004h
PIE5_TMR8IE_SIZE                         equ 0001h
PIE5_TMR8IE_LENGTH                       equ 0001h
PIE5_TMR8IE_MASK                         equ 0010h

// Register: PIR5
#define PIR5 PIR5
PIR5                                     equ 0FBAh
// bitfield definitions
PIR5_TMR4IF_POSN                         equ 0000h
PIR5_TMR4IF_POSITION                     equ 0000h
PIR5_TMR4IF_SIZE                         equ 0001h
PIR5_TMR4IF_LENGTH                       equ 0001h
PIR5_TMR4IF_MASK                         equ 0001h
PIR5_TMR5IF_POSN                         equ 0001h
PIR5_TMR5IF_POSITION                     equ 0001h
PIR5_TMR5IF_SIZE                         equ 0001h
PIR5_TMR5IF_LENGTH                       equ 0001h
PIR5_TMR5IF_MASK                         equ 0002h
PIR5_TMR6IF_POSN                         equ 0002h
PIR5_TMR6IF_POSITION                     equ 0002h
PIR5_TMR6IF_SIZE                         equ 0001h
PIR5_TMR6IF_LENGTH                       equ 0001h
PIR5_TMR6IF_MASK                         equ 0004h
PIR5_TMR8IF_POSN                         equ 0004h
PIR5_TMR8IF_POSITION                     equ 0004h
PIR5_TMR8IF_SIZE                         equ 0001h
PIR5_TMR8IF_LENGTH                       equ 0001h
PIR5_TMR8IF_MASK                         equ 0010h

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0FBBh
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
CCPR1                                    equ 0FBCh

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0FBCh
// bitfield definitions
CCPR1L_CCPR1L_POSN                       equ 0000h
CCPR1L_CCPR1L_POSITION                   equ 0000h
CCPR1L_CCPR1L_SIZE                       equ 0008h
CCPR1L_CCPR1L_LENGTH                     equ 0008h
CCPR1L_CCPR1L_MASK                       equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0FBDh
// bitfield definitions
CCPR1H_CCPR1H_POSN                       equ 0000h
CCPR1H_CCPR1H_POSITION                   equ 0000h
CCPR1H_CCPR1H_SIZE                       equ 0008h
CCPR1H_CCPR1H_LENGTH                     equ 0008h
CCPR1H_CCPR1H_MASK                       equ 00FFh

// Register: ECCP1DEL
#define ECCP1DEL ECCP1DEL
ECCP1DEL                                 equ 0FBEh
// bitfield definitions
ECCP1DEL_P1DC_POSN                       equ 0000h
ECCP1DEL_P1DC_POSITION                   equ 0000h
ECCP1DEL_P1DC_SIZE                       equ 0007h
ECCP1DEL_P1DC_LENGTH                     equ 0007h
ECCP1DEL_P1DC_MASK                       equ 007Fh
ECCP1DEL_P1RSEN_POSN                     equ 0007h
ECCP1DEL_P1RSEN_POSITION                 equ 0007h
ECCP1DEL_P1RSEN_SIZE                     equ 0001h
ECCP1DEL_P1RSEN_LENGTH                   equ 0001h
ECCP1DEL_P1RSEN_MASK                     equ 0080h
ECCP1DEL_P1DC0_POSN                      equ 0000h
ECCP1DEL_P1DC0_POSITION                  equ 0000h
ECCP1DEL_P1DC0_SIZE                      equ 0001h
ECCP1DEL_P1DC0_LENGTH                    equ 0001h
ECCP1DEL_P1DC0_MASK                      equ 0001h
ECCP1DEL_P1DC1_POSN                      equ 0001h
ECCP1DEL_P1DC1_POSITION                  equ 0001h
ECCP1DEL_P1DC1_SIZE                      equ 0001h
ECCP1DEL_P1DC1_LENGTH                    equ 0001h
ECCP1DEL_P1DC1_MASK                      equ 0002h
ECCP1DEL_P1DC2_POSN                      equ 0002h
ECCP1DEL_P1DC2_POSITION                  equ 0002h
ECCP1DEL_P1DC2_SIZE                      equ 0001h
ECCP1DEL_P1DC2_LENGTH                    equ 0001h
ECCP1DEL_P1DC2_MASK                      equ 0004h
ECCP1DEL_P1DC3_POSN                      equ 0003h
ECCP1DEL_P1DC3_POSITION                  equ 0003h
ECCP1DEL_P1DC3_SIZE                      equ 0001h
ECCP1DEL_P1DC3_LENGTH                    equ 0001h
ECCP1DEL_P1DC3_MASK                      equ 0008h
ECCP1DEL_P1DC4_POSN                      equ 0004h
ECCP1DEL_P1DC4_POSITION                  equ 0004h
ECCP1DEL_P1DC4_SIZE                      equ 0001h
ECCP1DEL_P1DC4_LENGTH                    equ 0001h
ECCP1DEL_P1DC4_MASK                      equ 0010h
ECCP1DEL_P1DC5_POSN                      equ 0005h
ECCP1DEL_P1DC5_POSITION                  equ 0005h
ECCP1DEL_P1DC5_SIZE                      equ 0001h
ECCP1DEL_P1DC5_LENGTH                    equ 0001h
ECCP1DEL_P1DC5_MASK                      equ 0020h
ECCP1DEL_P1DC6_POSN                      equ 0006h
ECCP1DEL_P1DC6_POSITION                  equ 0006h
ECCP1DEL_P1DC6_SIZE                      equ 0001h
ECCP1DEL_P1DC6_LENGTH                    equ 0001h
ECCP1DEL_P1DC6_MASK                      equ 0040h

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
ECCP1AS                                  equ 0FBFh
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
ADCON1_CHSN_POSN                         equ 0000h
ADCON1_CHSN_POSITION                     equ 0000h
ADCON1_CHSN_SIZE                         equ 0003h
ADCON1_CHSN_LENGTH                       equ 0003h
ADCON1_CHSN_MASK                         equ 0007h
ADCON1_VNCFG_POSN                        equ 0003h
ADCON1_VNCFG_POSITION                    equ 0003h
ADCON1_VNCFG_SIZE                        equ 0001h
ADCON1_VNCFG_LENGTH                      equ 0001h
ADCON1_VNCFG_MASK                        equ 0008h
ADCON1_VCFG_POSN                         equ 0004h
ADCON1_VCFG_POSITION                     equ 0004h
ADCON1_VCFG_SIZE                         equ 0002h
ADCON1_VCFG_LENGTH                       equ 0002h
ADCON1_VCFG_MASK                         equ 0030h
ADCON1_TRIGSEL_POSN                      equ 0006h
ADCON1_TRIGSEL_POSITION                  equ 0006h
ADCON1_TRIGSEL_SIZE                      equ 0002h
ADCON1_TRIGSEL_LENGTH                    equ 0002h
ADCON1_TRIGSEL_MASK                      equ 00C0h
ADCON1_CHSN0_POSN                        equ 0000h
ADCON1_CHSN0_POSITION                    equ 0000h
ADCON1_CHSN0_SIZE                        equ 0001h
ADCON1_CHSN0_LENGTH                      equ 0001h
ADCON1_CHSN0_MASK                        equ 0001h
ADCON1_CHSN1_POSN                        equ 0001h
ADCON1_CHSN1_POSITION                    equ 0001h
ADCON1_CHSN1_SIZE                        equ 0001h
ADCON1_CHSN1_LENGTH                      equ 0001h
ADCON1_CHSN1_MASK                        equ 0002h
ADCON1_CHSN2_POSN                        equ 0002h
ADCON1_CHSN2_POSITION                    equ 0002h
ADCON1_CHSN2_SIZE                        equ 0001h
ADCON1_CHSN2_LENGTH                      equ 0001h
ADCON1_CHSN2_MASK                        equ 0004h
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
ADCON1_TRIGSEL0_POSN                     equ 0006h
ADCON1_TRIGSEL0_POSITION                 equ 0006h
ADCON1_TRIGSEL0_SIZE                     equ 0001h
ADCON1_TRIGSEL0_LENGTH                   equ 0001h
ADCON1_TRIGSEL0_MASK                     equ 0040h
ADCON1_TRIGSEL1_POSN                     equ 0007h
ADCON1_TRIGSEL1_POSITION                 equ 0007h
ADCON1_TRIGSEL1_SIZE                     equ 0001h
ADCON1_TRIGSEL1_LENGTH                   equ 0001h
ADCON1_TRIGSEL1_MASK                     equ 0080h
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
ADCON0_CHS_SIZE                          equ 0005h
ADCON0_CHS_LENGTH                        equ 0005h
ADCON0_CHS_MASK                          equ 007Ch
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
ADCON0_CHS4_POSN                         equ 0006h
ADCON0_CHS4_POSITION                     equ 0006h
ADCON0_CHS4_SIZE                         equ 0001h
ADCON0_CHS4_LENGTH                       equ 0001h
ADCON0_CHS4_MASK                         equ 0040h
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
SSP1ADD_SSP1ADD_POSN                     equ 0000h
SSP1ADD_SSP1ADD_POSITION                 equ 0000h
SSP1ADD_SSP1ADD_SIZE                     equ 0008h
SSP1ADD_SSP1ADD_LENGTH                   equ 0008h
SSP1ADD_SSP1ADD_MASK                     equ 00FFh
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

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
SSP1MSK                                  equ 0FC8h
// bitfield definitions
SSP1MSK_MSK0_POSN                        equ 0000h
SSP1MSK_MSK0_POSITION                    equ 0000h
SSP1MSK_MSK0_SIZE                        equ 0001h
SSP1MSK_MSK0_LENGTH                      equ 0001h
SSP1MSK_MSK0_MASK                        equ 0001h
SSP1MSK_MSK1_POSN                        equ 0001h
SSP1MSK_MSK1_POSITION                    equ 0001h
SSP1MSK_MSK1_SIZE                        equ 0001h
SSP1MSK_MSK1_LENGTH                      equ 0001h
SSP1MSK_MSK1_MASK                        equ 0002h
SSP1MSK_MSK2_POSN                        equ 0002h
SSP1MSK_MSK2_POSITION                    equ 0002h
SSP1MSK_MSK2_SIZE                        equ 0001h
SSP1MSK_MSK2_LENGTH                      equ 0001h
SSP1MSK_MSK2_MASK                        equ 0004h
SSP1MSK_MSK3_POSN                        equ 0003h
SSP1MSK_MSK3_POSITION                    equ 0003h
SSP1MSK_MSK3_SIZE                        equ 0001h
SSP1MSK_MSK3_LENGTH                      equ 0001h
SSP1MSK_MSK3_MASK                        equ 0008h
SSP1MSK_MSK4_POSN                        equ 0004h
SSP1MSK_MSK4_POSITION                    equ 0004h
SSP1MSK_MSK4_SIZE                        equ 0001h
SSP1MSK_MSK4_LENGTH                      equ 0001h
SSP1MSK_MSK4_MASK                        equ 0010h
SSP1MSK_MSK5_POSN                        equ 0005h
SSP1MSK_MSK5_POSITION                    equ 0005h
SSP1MSK_MSK5_SIZE                        equ 0001h
SSP1MSK_MSK5_LENGTH                      equ 0001h
SSP1MSK_MSK5_MASK                        equ 0020h
SSP1MSK_MSK6_POSN                        equ 0006h
SSP1MSK_MSK6_POSITION                    equ 0006h
SSP1MSK_MSK6_SIZE                        equ 0001h
SSP1MSK_MSK6_LENGTH                      equ 0001h
SSP1MSK_MSK6_MASK                        equ 0040h
SSP1MSK_MSK7_POSN                        equ 0007h
SSP1MSK_MSK7_POSITION                    equ 0007h
SSP1MSK_MSK7_SIZE                        equ 0001h
SSP1MSK_MSK7_LENGTH                      equ 0001h
SSP1MSK_MSK7_MASK                        equ 0080h
SSP1MSK_MSK_POSN                         equ 0000h
SSP1MSK_MSK_POSITION                     equ 0000h
SSP1MSK_MSK_SIZE                         equ 0008h
SSP1MSK_MSK_LENGTH                       equ 0008h
SSP1MSK_MSK_MASK                         equ 00FFh

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
WDTCON_ULPSINK_POSN                      equ 0001h
WDTCON_ULPSINK_POSITION                  equ 0001h
WDTCON_ULPSINK_SIZE                      equ 0001h
WDTCON_ULPSINK_LENGTH                    equ 0001h
WDTCON_ULPSINK_MASK                      equ 0002h
WDTCON_ULPEN_POSN                        equ 0002h
WDTCON_ULPEN_POSITION                    equ 0002h
WDTCON_ULPEN_SIZE                        equ 0001h
WDTCON_ULPEN_LENGTH                      equ 0001h
WDTCON_ULPEN_MASK                        equ 0004h
WDTCON_SRETEN_POSN                       equ 0004h
WDTCON_SRETEN_POSITION                   equ 0004h
WDTCON_SRETEN_SIZE                       equ 0001h
WDTCON_SRETEN_LENGTH                     equ 0001h
WDTCON_SRETEN_MASK                       equ 0010h
WDTCON_ULPLVL_POSN                       equ 0005h
WDTCON_ULPLVL_POSITION                   equ 0005h
WDTCON_ULPLVL_SIZE                       equ 0001h
WDTCON_ULPLVL_LENGTH                     equ 0001h
WDTCON_ULPLVL_MASK                       equ 0020h
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

// Register: IPR5
#define IPR5 IPR5
IPR5                                     equ 0FD2h
// bitfield definitions
IPR5_TMR4IP_POSN                         equ 0000h
IPR5_TMR4IP_POSITION                     equ 0000h
IPR5_TMR4IP_SIZE                         equ 0001h
IPR5_TMR4IP_LENGTH                       equ 0001h
IPR5_TMR4IP_MASK                         equ 0001h
IPR5_TMR5IP_POSN                         equ 0001h
IPR5_TMR5IP_POSITION                     equ 0001h
IPR5_TMR5IP_SIZE                         equ 0001h
IPR5_TMR5IP_LENGTH                       equ 0001h
IPR5_TMR5IP_MASK                         equ 0002h
IPR5_TMR6IP_POSN                         equ 0002h
IPR5_TMR6IP_POSITION                     equ 0002h
IPR5_TMR6IP_SIZE                         equ 0001h
IPR5_TMR6IP_LENGTH                       equ 0001h
IPR5_TMR6IP_MASK                         equ 0004h
IPR5_TMR8IP_POSN                         equ 0004h
IPR5_TMR8IP_POSITION                     equ 0004h
IPR5_TMR8IP_SIZE                         equ 0001h
IPR5_TMR8IP_LENGTH                       equ 0001h
IPR5_TMR8IP_MASK                         equ 0010h
IPR5_CCH0_POSN                           equ 0000h
IPR5_CCH0_POSITION                       equ 0000h
IPR5_CCH0_SIZE                           equ 0001h
IPR5_CCH0_LENGTH                         equ 0001h
IPR5_CCH0_MASK                           equ 0001h
IPR5_CCH1_POSN                           equ 0001h
IPR5_CCH1_POSITION                       equ 0001h
IPR5_CCH1_SIZE                           equ 0001h
IPR5_CCH1_LENGTH                         equ 0001h
IPR5_CCH1_MASK                           equ 0002h
IPR5_EVPOL0_POSN                         equ 0003h
IPR5_EVPOL0_POSITION                     equ 0003h
IPR5_EVPOL0_SIZE                         equ 0001h
IPR5_EVPOL0_LENGTH                       equ 0001h
IPR5_EVPOL0_MASK                         equ 0008h
IPR5_EVPOL1_POSN                         equ 0004h
IPR5_EVPOL1_POSITION                     equ 0004h
IPR5_EVPOL1_SIZE                         equ 0001h
IPR5_EVPOL1_LENGTH                       equ 0001h
IPR5_EVPOL1_MASK                         equ 0010h
IPR5_CCH05_POSN                          equ 0000h
IPR5_CCH05_POSITION                      equ 0000h
IPR5_CCH05_SIZE                          equ 0001h
IPR5_CCH05_LENGTH                        equ 0001h
IPR5_CCH05_MASK                          equ 0001h
IPR5_CCH15_POSN                          equ 0001h
IPR5_CCH15_POSITION                      equ 0001h
IPR5_CCH15_SIZE                          equ 0001h
IPR5_CCH15_LENGTH                        equ 0001h
IPR5_CCH15_MASK                          equ 0002h
IPR5_EVPOL15_POSN                        equ 0004h
IPR5_EVPOL15_POSITION                    equ 0004h
IPR5_EVPOL15_SIZE                        equ 0001h
IPR5_EVPOL15_LENGTH                      equ 0001h
IPR5_EVPOL15_MASK                        equ 0010h
IPR5_EVPOL05_POSN                        equ 0003h
IPR5_EVPOL05_POSITION                    equ 0003h
IPR5_EVPOL05_SIZE                        equ 0001h
IPR5_EVPOL05_LENGTH                      equ 0001h
IPR5_EVPOL05_MASK                        equ 0008h

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

// Register: SPBRGH1
#define SPBRGH1 SPBRGH1
SPBRGH1                                  equ 0FD4h
// bitfield definitions
SPBRGH1_SPBRGH1_POSN                     equ 0000h
SPBRGH1_SPBRGH1_POSITION                 equ 0000h
SPBRGH1_SPBRGH1_SIZE                     equ 0008h
SPBRGH1_SPBRGH1_LENGTH                   equ 0008h
SPBRGH1_SPBRGH1_MASK                     equ 00FFh

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
#define A16                              BANKMASK(PORTH), 0, a
#define A17                              BANKMASK(PORTH), 1, a
#define A18                              BANKMASK(PORTH), 2, a
#define A19                              BANKMASK(PORTH), 3, a
#define ABDEN1                           BANKMASK(BAUDCON1), 0, a
#define ABDEN2                           BANKMASK(BAUDCON2), 0, b
#define ABDOVF1                          BANKMASK(BAUDCON1), 7, a
#define ABDOVF2                          BANKMASK(BAUDCON2), 7, b
#define ACKDT1                           BANKMASK(SSP1CON2), 5, a
#define ACKDT2                           BANKMASK(SSP2CON2), 5, a
#define ACKEN1                           BANKMASK(SSP1CON2), 4, a
#define ACKEN2                           BANKMASK(SSP2CON2), 4, a
#define ACKSTAT1                         BANKMASK(SSP1CON2), 6, a
#define ACKSTAT2                         BANKMASK(SSP2CON2), 6, a
#define ACQT0                            BANKMASK(ADCON2), 3, a
#define ACQT1                            BANKMASK(ADCON2), 4, a
#define ACQT2                            BANKMASK(ADCON2), 5, a
#define AD0                              BANKMASK(PORTD), 0, a
#define AD1                              BANKMASK(PORTD), 1, a
#define AD10                             BANKMASK(PORTE), 2, a
#define AD11                             BANKMASK(PORTE), 3, a
#define AD12                             BANKMASK(PORTE), 4, a
#define AD13                             BANKMASK(PORTE), 5, a
#define AD14                             BANKMASK(PORTE), 6, a
#define AD15                             BANKMASK(PORTE), 7, a
#define AD2                              BANKMASK(PORTD), 2, a
#define AD3                              BANKMASK(PORTD), 3, a
#define AD4                              BANKMASK(PORTD), 4, a
#define AD5                              BANKMASK(PORTD), 5, a
#define AD6                              BANKMASK(PORTD), 6, a
#define AD7                              BANKMASK(PORTD), 7, a
#define AD8                              BANKMASK(PORTE), 0, a
#define AD9                              BANKMASK(PORTE), 1, a
#define ADCMD                            BANKMASK(PMD0), 0, b
#define ADCS0                            BANKMASK(ADCON2), 0, a
#define ADCS1                            BANKMASK(ADCON2), 1, a
#define ADCS2                            BANKMASK(ADCON2), 2, a
#define ADDEN1                           BANKMASK(RCSTA1), 3, a
#define ADDEN2                           BANKMASK(RCSTA2), 3, b
#define ADEN                             BANKMASK(RCSTA1), 3, a
#define ADFM                             BANKMASK(ADCON2), 7, a
#define ADIE                             BANKMASK(PIE1), 6, a
#define ADIF                             BANKMASK(PIR1), 6, a
#define ADIP                             BANKMASK(IPR1), 6, a
#define ADMSK11                          BANKMASK(SSP1CON2), 1, a
#define ADMSK12                          BANKMASK(SSP2CON2), 1, a
#define ADMSK21                          BANKMASK(SSP1CON2), 2, a
#define ADMSK22                          BANKMASK(SSP2CON2), 2, a
#define ADMSK31                          BANKMASK(SSP1CON2), 3, a
#define ADMSK32                          BANKMASK(SSP2CON2), 3, a
#define ADMSK41                          BANKMASK(SSP1CON2), 4, a
#define ADMSK42                          BANKMASK(SSP2CON2), 4, a
#define ADMSK51                          BANKMASK(SSP1CON2), 5, a
#define ADMSK52                          BANKMASK(SSP2CON2), 5, a
#define ADON                             BANKMASK(ADCON0), 0, a
#define ALE                              BANKMASK(PORTJ), 0, a
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
#define AN12                             BANKMASK(PORTH), 4, a
#define AN13                             BANKMASK(PORTH), 5, a
#define AN14                             BANKMASK(PORTH), 6, a
#define AN15                             BANKMASK(PORTH), 7, a
#define AN16                             BANKMASK(PORTG), 4, a
#define AN17                             BANKMASK(PORTG), 3, a
#define AN18                             BANKMASK(PORTG), 2, a
#define AN19                             BANKMASK(PORTG), 1, a
#define AN2                              BANKMASK(PORTA), 2, a
#define AN20                             BANKMASK(PORTH), 3, a
#define AN21                             BANKMASK(PORTH), 2, a
#define AN22                             BANKMASK(PORTH), 1, a
#define AN23                             BANKMASK(PORTH), 0, a
#define AN3                              BANKMASK(PORTA), 3, a
#define AN4                              BANKMASK(PORTA), 5, a
#define AN5                              BANKMASK(PORTF), 7, a
#define AN6                              BANKMASK(PORTF), 1, a
#define AN7                              BANKMASK(PORTF), 2, a
#define AN8                              BANKMASK(PORTF), 3, a
#define AN9                              BANKMASK(PORTF), 4, a
#define ANSEL0                           BANKMASK(ANCON0), 0, b
#define ANSEL1                           BANKMASK(ANCON0), 1, b
#define ANSEL10                          BANKMASK(ANCON1), 2, b
#define ANSEL11                          BANKMASK(ANCON1), 3, b
#define ANSEL12                          BANKMASK(ANCON1), 4, b
#define ANSEL13                          BANKMASK(ANCON1), 5, b
#define ANSEL14                          BANKMASK(ANCON1), 6, b
#define ANSEL15                          BANKMASK(ANCON1), 7, b
#define ANSEL16                          BANKMASK(ANCON2), 0, b
#define ANSEL17                          BANKMASK(ANCON2), 1, b
#define ANSEL18                          BANKMASK(ANCON2), 2, b
#define ANSEL19                          BANKMASK(ANCON2), 3, b
#define ANSEL2                           BANKMASK(ANCON0), 2, b
#define ANSEL20                          BANKMASK(ANCON2), 4, b
#define ANSEL21                          BANKMASK(ANCON2), 5, b
#define ANSEL22                          BANKMASK(ANCON2), 6, b
#define ANSEL23                          BANKMASK(ANCON2), 7, b
#define ANSEL3                           BANKMASK(ANCON0), 3, b
#define ANSEL4                           BANKMASK(ANCON0), 4, b
#define ANSEL5                           BANKMASK(ANCON0), 5, b
#define ANSEL6                           BANKMASK(ANCON0), 6, b
#define ANSEL7                           BANKMASK(ANCON0), 7, b
#define ANSEL8                           BANKMASK(ANCON1), 0, b
#define ANSEL9                           BANKMASK(ANCON1), 1, b
#define ARPT0                            BANKMASK(ALRMRPT), 0, b
#define ARPT1                            BANKMASK(ALRMRPT), 1, b
#define ARPT2                            BANKMASK(ALRMRPT), 2, b
#define ARPT3                            BANKMASK(ALRMRPT), 3, b
#define ARPT4                            BANKMASK(ALRMRPT), 4, b
#define ARPT5                            BANKMASK(ALRMRPT), 5, b
#define ARPT6                            BANKMASK(ALRMRPT), 6, b
#define ARPT7                            BANKMASK(ALRMRPT), 7, b
#define BA0                              BANKMASK(PORTJ), 4, a
#define BCL1IE                           BANKMASK(PIE2), 3, a
#define BCL1IF                           BANKMASK(PIR2), 3, a
#define BCL1IP                           BANKMASK(IPR2), 3, a
#define BCL2IE                           BANKMASK(PIE2), 4, a
#define BCL2IF                           BANKMASK(PIR2), 4, a
#define BCL2IP                           BANKMASK(IPR2), 4, a
#define BCLIE                            BANKMASK(PIE2), 3, a
#define BCLIF                            BANKMASK(PIR2), 3, a
#define BCLIP                            BANKMASK(IPR2), 3, a
#define BF1                              BANKMASK(SSP1STAT), 0, a
#define BF2                              BANKMASK(SSP2STAT), 0, a
#define BGVST                            BANKMASK(HLVDCON), 6, a
#define BOR                              BANKMASK(RCON), 0, a
#define BRG161                           BANKMASK(BAUDCON1), 3, a
#define BRG162                           BANKMASK(BAUDCON2), 3, b
#define BRGH1                            BANKMASK(TXSTA1), 2, a
#define BRGH2                            BANKMASK(TXSTA2), 2, b
#define C1CH0                            BANKMASK(CM1CON), 0, b
#define C1CH1                            BANKMASK(CM1CON), 1, b
#define C1INA                            BANKMASK(PORTF), 6, a
#define C1INB                            BANKMASK(PORTF), 5, a
#define C1INC                            BANKMASK(PORTH), 6, a
#define C1OUT                            BANKMASK(PORTF), 2, a
#define C1OUTF                           BANKMASK(PORTF), 2, a
#define C1TSEL0                          BANKMASK(CCPTMRS0), 0, b
#define C1TSEL1                          BANKMASK(CCPTMRS0), 1, b
#define C1TSEL2                          BANKMASK(CCPTMRS0), 2, b
#define C2INA                            BANKMASK(PORTF), 4, a
#define C2INB                            BANKMASK(PORTF), 3, a
#define C2INC                            BANKMASK(PORTH), 4, a
#define C2IND                            BANKMASK(PORTH), 5, a
#define C2OUT                            BANKMASK(PORTF), 1, a
#define C2OUTF                           BANKMASK(PORTF), 1, a
#define C2TSEL0                          BANKMASK(CCPTMRS0), 3, b
#define C2TSEL1                          BANKMASK(CCPTMRS0), 4, b
#define C2TSEL2                          BANKMASK(CCPTMRS0), 5, b
#define C3INA                            BANKMASK(PORTG), 2, a
#define C3INB                            BANKMASK(PORTG), 3, a
#define C3INC                            BANKMASK(PORTG), 4, a
#define C3OUT                            BANKMASK(PORTG), 1, a
#define C3OUTG                           BANKMASK(PORTG), 1, a
#define C3TSEL0                          BANKMASK(CCPTMRS0), 6, b
#define C3TSEL1                          BANKMASK(CCPTMRS0), 7, b
#define C4TSEL0                          BANKMASK(CCPTMRS1), 0, b
#define C4TSEL1                          BANKMASK(CCPTMRS1), 1, b
#define C5TSEL0                          BANKMASK(CCPTMRS1), 2, b
#define C6TSEL0                          BANKMASK(CCPTMRS1), 4, b
#define C7TSEL0                          BANKMASK(CCPTMRS1), 6, b
#define C7TSEL1                          BANKMASK(CCPTMRS1), 7, b
#define C8TSEL0                          BANKMASK(CCPTMRS2), 0, b
#define C8TSEL1                          BANKMASK(CCPTMRS2), 1, b
#define CAL0                             BANKMASK(RTCCAL), 0, b
#define CAL1                             BANKMASK(RTCCAL), 1, b
#define CAL2                             BANKMASK(RTCCAL), 2, b
#define CAL3                             BANKMASK(RTCCAL), 3, b
#define CAL4                             BANKMASK(RTCCAL), 4, b
#define CAL5                             BANKMASK(RTCCAL), 5, b
#define CAL6                             BANKMASK(RTCCAL), 6, b
#define CAL7                             BANKMASK(RTCCAL), 7, b
#define CARRY                            BANKMASK(STATUS), 0, a
#define CCH01                            BANKMASK(CM1CON), 0, b
#define CCH02                            BANKMASK(CM2CON), 0, b
#define CCH03                            BANKMASK(CM3CON), 0, b
#define CCH05                            BANKMASK(IPR5), 0, a
#define CCH11                            BANKMASK(CM1CON), 1, b
#define CCH12                            BANKMASK(CM2CON), 1, b
#define CCH13                            BANKMASK(CM3CON), 1, b
#define CCH15                            BANKMASK(IPR5), 1, a
#define CCIP3IP                          BANKMASK(IPR4), 0, a
#define CCP1                             BANKMASK(PORTC), 2, a
#define CCP10                            BANKMASK(PORTE), 2, a
#define CCP1IE                           BANKMASK(PIE3), 1, a
#define CCP1IF                           BANKMASK(PIR3), 1, a
#define CCP1IP                           BANKMASK(IPR3), 1, a
#define CCP1M0                           BANKMASK(CCP1CON), 0, a
#define CCP1M1                           BANKMASK(CCP1CON), 1, a
#define CCP1M2                           BANKMASK(CCP1CON), 2, a
#define CCP1M3                           BANKMASK(CCP1CON), 3, a
#define CCP1MD                           BANKMASK(PMD0), 5, b
#define CCP1OD                           BANKMASK(ODCON1), 5, b
#define CCP1X                            BANKMASK(CCP1CON), 5, a
#define CCP1Y                            BANKMASK(CCP1CON), 4, a
#define CCP2E                            BANKMASK(PORTE), 7, a
#define CCP2IE                           BANKMASK(PIE3), 2, a
#define CCP2IF                           BANKMASK(PIR3), 2, a
#define CCP2IP                           BANKMASK(IPR3), 2, a
#define CCP2M0                           BANKMASK(CCP2CON), 0, b
#define CCP2M1                           BANKMASK(CCP2CON), 1, b
#define CCP2M2                           BANKMASK(CCP2CON), 2, b
#define CCP2M3                           BANKMASK(CCP2CON), 3, b
#define CCP2MD                           BANKMASK(PMD0), 6, b
#define CCP2OD                           BANKMASK(ODCON1), 6, b
#define CCP2X                            BANKMASK(CCP2CON), 5, b
#define CCP2Y                            BANKMASK(CCP2CON), 4, b
#define CCP2_P2A                         BANKMASK(PORTB), 3, a
#define CCP2_PA2                         BANKMASK(PORTB), 3, a
#define CCP3                             BANKMASK(PORTG), 0, a
#define CCP3IE                           BANKMASK(PIE4), 0, a
#define CCP3IF                           BANKMASK(PIR4), 0, a
#define CCP3IP                           BANKMASK(IPR4), 0, a
#define CCP3M0                           BANKMASK(CCP3CON), 0, b
#define CCP3M1                           BANKMASK(CCP3CON), 1, b
#define CCP3M2                           BANKMASK(CCP3CON), 2, b
#define CCP3M3                           BANKMASK(CCP3CON), 3, b
#define CCP3MD                           BANKMASK(PMD0), 7, b
#define CCP3OD                           BANKMASK(ODCON2), 0, b
#define CCP4                             BANKMASK(PORTG), 3, a
#define CCP4IE                           BANKMASK(PIE4), 1, a
#define CCP4IF                           BANKMASK(PIR4), 1, a
#define CCP4IP                           BANKMASK(IPR4), 1, a
#define CCP4M0                           BANKMASK(CCP4CON), 0, a
#define CCP4M1                           BANKMASK(CCP4CON), 1, a
#define CCP4M2                           BANKMASK(CCP4CON), 2, a
#define CCP4M3                           BANKMASK(CCP4CON), 3, a
#define CCP4MD                           BANKMASK(PMD3), 1, b
#define CCP4OD                           BANKMASK(ODCON2), 1, b
#define CCP4X                            BANKMASK(CCP4CON), 5, a
#define CCP4Y                            BANKMASK(CCP4CON), 4, a
#define CCP5                             BANKMASK(PORTG), 4, a
#define CCP5IE                           BANKMASK(PIE4), 2, a
#define CCP5IF                           BANKMASK(PIR4), 2, a
#define CCP5IP                           BANKMASK(IPR4), 2, a
#define CCP5M0                           BANKMASK(CCP5CON), 0, a
#define CCP5M1                           BANKMASK(CCP5CON), 1, a
#define CCP5M2                           BANKMASK(CCP5CON), 2, a
#define CCP5M3                           BANKMASK(CCP5CON), 3, a
#define CCP5MD                           BANKMASK(PMD3), 2, b
#define CCP5OD                           BANKMASK(ODCON2), 2, b
#define CCP5X                            BANKMASK(CCP5CON), 5, a
#define CCP5Y                            BANKMASK(CCP5CON), 4, a
#define CCP6E                            BANKMASK(PORTE), 6, a
#define CCP6IE                           BANKMASK(PIE4), 3, a
#define CCP6IF                           BANKMASK(PIR4), 3, a
#define CCP6IP                           BANKMASK(IPR4), 3, a
#define CCP6M0                           BANKMASK(CCP6CON), 0, a
#define CCP6M1                           BANKMASK(CCP6CON), 1, a
#define CCP6M2                           BANKMASK(CCP6CON), 2, a
#define CCP6M3                           BANKMASK(CCP6CON), 3, a
#define CCP6MD                           BANKMASK(PMD3), 3, b
#define CCP6OD                           BANKMASK(ODCON2), 3, b
#define CCP6X                            BANKMASK(CCP6CON), 5, a
#define CCP6Y                            BANKMASK(CCP6CON), 4, a
#define CCP7E                            BANKMASK(PORTE), 5, a
#define CCP7IE                           BANKMASK(PIE4), 4, a
#define CCP7IF                           BANKMASK(PIR4), 4, a
#define CCP7IP                           BANKMASK(IPR4), 4, a
#define CCP7M0                           BANKMASK(CCP7CON), 0, a
#define CCP7M1                           BANKMASK(CCP7CON), 1, a
#define CCP7M2                           BANKMASK(CCP7CON), 2, a
#define CCP7M3                           BANKMASK(CCP7CON), 3, a
#define CCP7MD                           BANKMASK(PMD3), 4, b
#define CCP7OD                           BANKMASK(ODCON2), 4, b
#define CCP7X                            BANKMASK(CCP7CON), 5, a
#define CCP7Y                            BANKMASK(CCP7CON), 4, a
#define CCP8E                            BANKMASK(PORTE), 4, a
#define CCP8IE                           BANKMASK(PIE4), 5, a
#define CCP8IF                           BANKMASK(PIR4), 5, a
#define CCP8IP                           BANKMASK(IPR4), 5, a
#define CCP8M0                           BANKMASK(CCP8CON), 0, b
#define CCP8M1                           BANKMASK(CCP8CON), 1, b
#define CCP8M2                           BANKMASK(CCP8CON), 2, b
#define CCP8M3                           BANKMASK(CCP8CON), 3, b
#define CCP8MD                           BANKMASK(PMD3), 5, b
#define CCP8OD                           BANKMASK(ODCON2), 5, b
#define CCP8X                            BANKMASK(CCP8CON), 5, b
#define CCP8Y                            BANKMASK(CCP8CON), 4, b
#define CCP9E                            BANKMASK(PORTE), 3, a
#define CE                               BANKMASK(PORTJ), 5, a
#define CFGS                             BANKMASK(EECON1), 6, a
#define CHIME                            BANKMASK(ALRMCFG), 6, b
#define CHS0                             BANKMASK(ADCON0), 2, a
#define CHS1                             BANKMASK(ADCON0), 3, a
#define CHS2                             BANKMASK(ADCON0), 4, a
#define CHS3                             BANKMASK(ADCON0), 5, a
#define CHS4                             BANKMASK(ADCON0), 6, a
#define CHSN0                            BANKMASK(ADCON1), 0, a
#define CHSN1                            BANKMASK(ADCON1), 1, a
#define CHSN2                            BANKMASK(ADCON1), 2, a
#define CHSN3                            BANKMASK(ADCON1), 3, a
#define CK1                              BANKMASK(PORTC), 6, a
#define CK2                              BANKMASK(PORTG), 1, a
#define CKE1                             BANKMASK(SSP1STAT), 6, a
#define CKE2                             BANKMASK(SSP2STAT), 6, a
#define CKP1                             BANKMASK(SSP1CON1), 4, a
#define CKP2                             BANKMASK(SSP2CON1), 4, a
#define CKTXP                            BANKMASK(BAUDCON1), 4, a
#define CLKI                             BANKMASK(PORTA), 7, a
#define CLKO                             BANKMASK(PORTA), 6, a
#define CM                               BANKMASK(RCON), 5, a
#define CMP1IE                           BANKMASK(PIE6), 0, a
#define CMP1IF                           BANKMASK(PIR6), 0, a
#define CMP1IP                           BANKMASK(IPR6), 0, a
#define CMP1MD                           BANKMASK(PMD2), 0, b
#define CMP1OUT                          BANKMASK(CMSTAT), 5, a
#define CMP2IE                           BANKMASK(PIE6), 1, a
#define CMP2IF                           BANKMASK(PIR6), 1, a
#define CMP2IP                           BANKMASK(IPR6), 1, a
#define CMP2MD                           BANKMASK(PMD2), 1, b
#define CMP2OUT                          BANKMASK(CMSTAT), 6, a
#define CMP3IE                           BANKMASK(PIE6), 2, a
#define CMP3IF                           BANKMASK(PIR6), 2, a
#define CMP3IP                           BANKMASK(IPR6), 2, a
#define CMP3MD                           BANKMASK(PMD2), 2, b
#define CMP3OUT                          BANKMASK(CMSTAT), 7, a
#define CMPL02                           BANKMASK(PSTR2CON), 6, b
#define CMPL03                           BANKMASK(PSTR3CON), 6, b
#define CMPL12                           BANKMASK(PSTR2CON), 7, b
#define CMPL13                           BANKMASK(PSTR3CON), 7, b
#define COE1                             BANKMASK(CM1CON), 6, b
#define COE2                             BANKMASK(CM2CON), 6, b
#define COE3                             BANKMASK(CM3CON), 6, b
#define CON1                             BANKMASK(CM1CON), 7, b
#define CON2                             BANKMASK(CM2CON), 7, b
#define CON3                             BANKMASK(CM3CON), 7, b
#define CPOL1                            BANKMASK(CM1CON), 5, b
#define CPOL2                            BANKMASK(CM2CON), 5, b
#define CPOL3                            BANKMASK(CM3CON), 5, b
#define CREF1                            BANKMASK(CM1CON), 2, b
#define CREF2                            BANKMASK(CM2CON), 2, b
#define CREF3                            BANKMASK(CM3CON), 2, b
#define CREN1                            BANKMASK(RCSTA1), 4, a
#define CREN2                            BANKMASK(RCSTA2), 4, b
#define CS                               BANKMASK(PORTE), 2, a
#define CSRC1                            BANKMASK(TXSTA1), 7, a
#define CSRC2                            BANKMASK(TXSTA2), 7, b
#define CTDIN                            BANKMASK(PORTF), 1, a
#define CTED1                            BANKMASK(PORTB), 2, a
#define CTED2                            BANKMASK(PORTB), 3, a
#define CTMUDS                           BANKMASK(ODCON3), 0, b
#define CTMUEN                           BANKMASK(CTMUCONH), 7, b
#define CTMUI                            BANKMASK(PORTF), 3, a
#define CTMUIE                           BANKMASK(PIE3), 3, a
#define CTMUIF                           BANKMASK(PIR3), 3, a
#define CTMUIP                           BANKMASK(IPR3), 3, a
#define CTMUMD                           BANKMASK(PMD1), 6, b
#define CTMUSIDL                         BANKMASK(CTMUCONH), 5, b
#define CTPLS                            BANKMASK(PORTD), 0, a
#define CTTRIG                           BANKMASK(CTMUCONH), 0, b
#define CVR0                             BANKMASK(CVRCON), 0, a
#define CVR1                             BANKMASK(CVRCON), 1, a
#define CVR2                             BANKMASK(CVRCON), 2, a
#define CVR3                             BANKMASK(CVRCON), 3, a
#define CVR4                             BANKMASK(CVRCON), 4, a
#define CVREF                            BANKMASK(PORTF), 5, a
#define CVREN                            BANKMASK(CVRCON), 7, a
#define CVROE                            BANKMASK(CVRCON), 6, a
#define CVROEN                           BANKMASK(CVRCON), 6, a
#define CVRR                             BANKMASK(CVRCON), 5, a
#define CVRSS                            BANKMASK(CVRCON), 5, a
#define DA                               BANKMASK(SSP1STAT), 5, a
#define DA1                              BANKMASK(SSP1STAT), 5, a
#define DA2                              BANKMASK(SSP2STAT), 5, a
#define DATA_ADDRESS2                    BANKMASK(SSP2STAT), 5, a
#define DC                               BANKMASK(STATUS), 1, a
#define DC1B0                            BANKMASK(CCP1CON), 4, a
#define DC1B1                            BANKMASK(CCP1CON), 5, a
#define DC2B0                            BANKMASK(CCP2CON), 4, b
#define DC2B1                            BANKMASK(CCP2CON), 5, b
#define DC3B0                            BANKMASK(CCP3CON), 4, b
#define DC3B1                            BANKMASK(CCP3CON), 5, b
#define DC4B0                            BANKMASK(CCP4CON), 4, a
#define DC4B1                            BANKMASK(CCP4CON), 5, a
#define DC5B0                            BANKMASK(CCP5CON), 4, a
#define DC5B1                            BANKMASK(CCP5CON), 5, a
#define DC6B0                            BANKMASK(CCP6CON), 4, a
#define DC6B1                            BANKMASK(CCP6CON), 5, a
#define DC7B0                            BANKMASK(CCP7CON), 4, a
#define DC7B1                            BANKMASK(CCP7CON), 5, a
#define DC8B0                            BANKMASK(CCP8CON), 4, b
#define DC8B1                            BANKMASK(CCP8CON), 5, b
#define DONE                             BANKMASK(ADCON0), 1, a
#define DT1                              BANKMASK(PORTC), 7, a
#define DT2                              BANKMASK(PORTG), 2, a
#define DTRXP                            BANKMASK(BAUDCON1), 5, a
#define DTRXP1                           BANKMASK(BAUDCON1), 5, a
#define DTRXP2                           BANKMASK(BAUDCON2), 5, b
#define D_A2                             BANKMASK(SSP2STAT), 5, a
#define D_NOT_A2                         BANKMASK(SSP2STAT), 5, a
#define D_nA2                            BANKMASK(SSP2STAT), 5, a
#define EBDIS                            BANKMASK(MEMCON), 7, b
#define ECCP1AS0                         BANKMASK(ECCP1AS), 4, a
#define ECCP1AS1                         BANKMASK(ECCP1AS), 5, a
#define ECCP1AS2                         BANKMASK(ECCP1AS), 6, a
#define ECCP1ASE                         BANKMASK(ECCP1AS), 7, a
#define ECCP2AS0                         BANKMASK(ECCP2AS), 4, b
#define ECCP2AS1                         BANKMASK(ECCP2AS), 5, b
#define ECCP2AS2                         BANKMASK(ECCP2AS), 6, b
#define ECCP2ASE                         BANKMASK(ECCP2AS), 7, b
#define ECCP3AS0                         BANKMASK(ECCP3AS), 4, b
#define ECCP3AS1                         BANKMASK(ECCP3AS), 5, b
#define ECCP3AS2                         BANKMASK(ECCP3AS), 6, b
#define ECCP3ASE                         BANKMASK(ECCP3AS), 7, b
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
#define EEFS                             BANKMASK(EECON1), 6, a
#define EEIE                             BANKMASK(PIE6), 4, a
#define EEIF                             BANKMASK(PIR6), 4, a
#define EEIP                             BANKMASK(IPR6), 4, a
#define EEPGD                            BANKMASK(EECON1), 7, a
#define EMBMD                            BANKMASK(PMD1), 0, b
#define EVPOL01                          BANKMASK(CM1CON), 3, b
#define EVPOL02                          BANKMASK(CM2CON), 3, b
#define EVPOL03                          BANKMASK(CM3CON), 3, b
#define EVPOL05                          BANKMASK(IPR5), 3, a
#define EVPOL11                          BANKMASK(CM1CON), 4, b
#define EVPOL12                          BANKMASK(CM2CON), 4, b
#define EVPOL13                          BANKMASK(CM3CON), 4, b
#define EVPOL15                          BANKMASK(IPR5), 4, a
#define FERR1                            BANKMASK(RCSTA1), 2, a
#define FERR2                            BANKMASK(RCSTA2), 2, b
#define FLT0                             BANKMASK(PORTB), 0, a
#define FREE                             BANKMASK(EECON1), 4, a
#define GCEN1                            BANKMASK(SSP1CON2), 7, a
#define GCEN2                            BANKMASK(SSP2CON2), 7, a
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
#define I2C_DAT2                         BANKMASK(SSP2STAT), 5, a
#define I2C_READ2                        BANKMASK(SSP2STAT), 2, a
#define I2C_START2                       BANKMASK(SSP2STAT), 3, a
#define I2C_STOP2                        BANKMASK(SSP2STAT), 4, a
#define IBF                              BANKMASK(PSPCON), 7, a
#define IBOV                             BANKMASK(PSPCON), 5, a
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
#define IPEN                             BANKMASK(RCON), 7, a
#define IRCF0                            BANKMASK(OSCCON), 4, a
#define IRCF1                            BANKMASK(OSCCON), 5, a
#define IRCF2                            BANKMASK(OSCCON), 6, a
#define IRNG0                            BANKMASK(CTMUICON), 0, b
#define IRNG1                            BANKMASK(CTMUICON), 1, b
#define IRVST                            BANKMASK(HLVDCON), 5, a
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
#define LATE2                            BANKMASK(LATE), 2, a
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
#define LATH0                            BANKMASK(LATH), 0, a
#define LATH1                            BANKMASK(LATH), 1, a
#define LATH2                            BANKMASK(LATH), 2, a
#define LATH3                            BANKMASK(LATH), 3, a
#define LATH4                            BANKMASK(LATH), 4, a
#define LATH5                            BANKMASK(LATH), 5, a
#define LATH6                            BANKMASK(LATH), 6, a
#define LATH7                            BANKMASK(LATH), 7, a
#define LATJ0                            BANKMASK(LATJ), 0, a
#define LATJ1                            BANKMASK(LATJ), 1, a
#define LATJ2                            BANKMASK(LATJ), 2, a
#define LATJ3                            BANKMASK(LATJ), 3, a
#define LATJ4                            BANKMASK(LATJ), 4, a
#define LATJ5                            BANKMASK(LATJ), 5, a
#define LATJ6                            BANKMASK(LATJ), 6, a
#define LATJ7                            BANKMASK(LATJ), 7, a
#define LB                               BANKMASK(PORTJ), 6, a
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
#define LH0                              BANKMASK(LATH), 0, a
#define LH1                              BANKMASK(LATH), 1, a
#define LH2                              BANKMASK(LATH), 2, a
#define LH3                              BANKMASK(LATH), 3, a
#define LH4                              BANKMASK(LATH), 4, a
#define LH5                              BANKMASK(LATH), 5, a
#define LH6                              BANKMASK(LATH), 6, a
#define LH7                              BANKMASK(LATH), 7, a
#define LJ0                              BANKMASK(LATJ), 0, a
#define LJ1                              BANKMASK(LATJ), 1, a
#define LJ2                              BANKMASK(LATJ), 2, a
#define LJ3                              BANKMASK(LATJ), 3, a
#define LJ4                              BANKMASK(LATJ), 4, a
#define LJ5                              BANKMASK(LATJ), 5, a
#define LJ6                              BANKMASK(LATJ), 6, a
#define LJ7                              BANKMASK(LATJ), 7, a
#define LVDIE                            BANKMASK(PIE2), 2, a
#define LVDIF                            BANKMASK(PIR2), 2, a
#define LVDIN                            BANKMASK(PORTA), 5, a
#define LVDIP                            BANKMASK(IPR2), 2, a
#define MFIOFS                           BANKMASK(OSCCON2), 1, a
#define MFIOSEL                          BANKMASK(OSCCON2), 0, a
#define MSK01                            BANKMASK(SSP1ADD), 0, a
#define MSK02                            BANKMASK(SSP2ADD), 0, a
#define MSK11                            BANKMASK(SSP1ADD), 1, a
#define MSK12                            BANKMASK(SSP2ADD), 1, a
#define MSK21                            BANKMASK(SSP1ADD), 2, a
#define MSK22                            BANKMASK(SSP2ADD), 2, a
#define MSK31                            BANKMASK(SSP1ADD), 3, a
#define MSK32                            BANKMASK(SSP2ADD), 3, a
#define MSK41                            BANKMASK(SSP1ADD), 4, a
#define MSK42                            BANKMASK(SSP2ADD), 4, a
#define MSK51                            BANKMASK(SSP1ADD), 5, a
#define MSK52                            BANKMASK(SSP2ADD), 5, a
#define MSK61                            BANKMASK(SSP1ADD), 6, a
#define MSK62                            BANKMASK(SSP2ADD), 6, a
#define MSK71                            BANKMASK(SSP1ADD), 7, a
#define MSK72                            BANKMASK(SSP2ADD), 7, a
#define NEGATIVE                         BANKMASK(STATUS), 4, a
#define NOT_A                            BANKMASK(SSP1STAT), 5, a
#define NOT_A2                           BANKMASK(SSP2STAT), 5, a
#define NOT_ADDRESS2                     BANKMASK(SSP2STAT), 5, a
#define NOT_BOR                          BANKMASK(RCON), 0, a
#define NOT_CM                           BANKMASK(RCON), 5, a
#define NOT_CS                           BANKMASK(PORTE), 2, a
#define NOT_DONE                         BANKMASK(ADCON0), 1, a
#define NOT_PD                           BANKMASK(RCON), 2, a
#define NOT_POR                          BANKMASK(RCON), 1, a
#define NOT_RBPU                         BANKMASK(INTCON2), 7, a
#define NOT_RC8                          BANKMASK(RCSTA1), 6, a
#define NOT_RD                           BANKMASK(PORTE), 0, a
#define NOT_RI                           BANKMASK(RCON), 4, a
#define NOT_SS2                          BANKMASK(PORTD), 7, a
#define NOT_T1DONE                       BANKMASK(T1GCON), 3, a
#define NOT_T1SYNC                       BANKMASK(T1CON), 2, a
#define NOT_T3DONE                       BANKMASK(T3GCON), 3, a
#define NOT_T3SYNC                       BANKMASK(T3CON), 2, a
#define NOT_T5DONE                       BANKMASK(T5GCON), 3, a
#define NOT_T5SYNC                       BANKMASK(T5CON), 2, a
#define NOT_TO                           BANKMASK(RCON), 3, a
#define NOT_TX8                          BANKMASK(TXSTA1), 6, a
#define NOT_W                            BANKMASK(SSP1STAT), 2, a
#define NOT_W2                           BANKMASK(SSP2STAT), 2, a
#define NOT_WR                           BANKMASK(PORTE), 1, a
#define NOT_WRITE2                       BANKMASK(SSP2STAT), 2, a
#define OBF                              BANKMASK(PSPCON), 6, a
#define OE                               BANKMASK(PORTJ), 1, a
#define OERR1                            BANKMASK(RCSTA1), 1, a
#define OERR2                            BANKMASK(RCSTA2), 1, b
#define OSC1                             BANKMASK(PORTA), 7, a
#define OSC2                             BANKMASK(PORTA), 6, a
#define OSCFIE                           BANKMASK(PIE2), 7, a
#define OSCFIF                           BANKMASK(PIR2), 7, a
#define OSCFIP                           BANKMASK(IPR2), 7, a
#define OSTS                             BANKMASK(OSCCON), 3, a
#define OV                               BANKMASK(STATUS), 3, a
#define OVERFLOW                         BANKMASK(STATUS), 3, a
#define P1A                              BANKMASK(PORTC), 2, a
#define P1B                              BANKMASK(PORTE), 6, a
#define P1C                              BANKMASK(PORTE), 5, a
#define P1DC0                            BANKMASK(ECCP1DEL), 0, a
#define P1DC1                            BANKMASK(ECCP1DEL), 1, a
#define P1DC2                            BANKMASK(ECCP1DEL), 2, a
#define P1DC3                            BANKMASK(ECCP1DEL), 3, a
#define P1DC4                            BANKMASK(ECCP1DEL), 4, a
#define P1DC5                            BANKMASK(ECCP1DEL), 5, a
#define P1DC6                            BANKMASK(ECCP1DEL), 6, a
#define P1M0                             BANKMASK(CCP1CON), 6, a
#define P1M1                             BANKMASK(CCP1CON), 7, a
#define P1RSEN                           BANKMASK(ECCP1DEL), 7, a
#define P2                               BANKMASK(SSP2STAT), 4, a
#define P2B                              BANKMASK(PORTE), 2, a
#define P2C                              BANKMASK(PORTE), 1, a
#define P2D                              BANKMASK(PORTE), 0, a
#define P2DC0                            BANKMASK(ECCP2DEL), 0, b
#define P2DC02                           BANKMASK(PSTR2CON), 0, b
#define P2DC0CON                         BANKMASK(PSTR2CON), 0, b
#define P2DC1                            BANKMASK(ECCP2DEL), 1, b
#define P2DC12                           BANKMASK(PSTR2CON), 1, b
#define P2DC1CON                         BANKMASK(PSTR2CON), 1, b
#define P2DC2                            BANKMASK(ECCP2DEL), 2, b
#define P2DC22                           BANKMASK(PSTR2CON), 2, b
#define P2DC2CON                         BANKMASK(PSTR2CON), 2, b
#define P2DC3                            BANKMASK(ECCP2DEL), 3, b
#define P2DC32                           BANKMASK(PSTR2CON), 3, b
#define P2DC3CON                         BANKMASK(PSTR2CON), 3, b
#define P2DC4                            BANKMASK(ECCP2DEL), 4, b
#define P2DC42                           BANKMASK(PSTR2CON), 4, b
#define P2DC4CON                         BANKMASK(PSTR2CON), 4, b
#define P2DC5                            BANKMASK(ECCP2DEL), 5, b
#define P2DC6                            BANKMASK(ECCP2DEL), 6, b
#define P2DC62                           BANKMASK(PSTR2CON), 6, b
#define P2DC6CON                         BANKMASK(PSTR2CON), 6, b
#define P2M0                             BANKMASK(CCP2CON), 6, b
#define P2M1                             BANKMASK(CCP2CON), 7, b
#define P2RSEN                           BANKMASK(ECCP2DEL), 7, b
#define P3B                              BANKMASK(PORTE), 4, a
#define P3C                              BANKMASK(PORTE), 3, a
#define P3DC0                            BANKMASK(ECCP3DEL), 0, b
#define P3DC1                            BANKMASK(ECCP3DEL), 1, b
#define P3DC2                            BANKMASK(ECCP3DEL), 2, b
#define P3DC3                            BANKMASK(ECCP3DEL), 3, b
#define P3DC4                            BANKMASK(ECCP3DEL), 4, b
#define P3DC5                            BANKMASK(ECCP3DEL), 5, b
#define P3DC6                            BANKMASK(ECCP3DEL), 6, b
#define P3M0                             BANKMASK(CCP3CON), 6, b
#define P3M1                             BANKMASK(CCP3CON), 7, b
#define P3RSEN                           BANKMASK(ECCP3DEL), 7, b
#define PA1                              BANKMASK(PORTC), 2, a
#define PA2                              BANKMASK(PORTC), 1, a
#define PA2E                             BANKMASK(PORTE), 7, a
#define PA3                              BANKMASK(PORTG), 0, a
#define PB1                              BANKMASK(PORTH), 7, a
#define PB1E                             BANKMASK(PORTE), 6, a
#define PB2                              BANKMASK(PORTE), 2, a
#define PB3                              BANKMASK(PORTH), 5, a
#define PB3E                             BANKMASK(PORTE), 4, a
#define PC1                              BANKMASK(PORTH), 6, a
#define PC1E                             BANKMASK(PORTE), 5, a
#define PC2                              BANKMASK(PORTE), 1, a
#define PC3                              BANKMASK(PORTH), 4, a
#define PC3E                             BANKMASK(PORTE), 3, a
#define PCFG0                            BANKMASK(ANCON0), 0, b
#define PCFG1                            BANKMASK(ANCON0), 1, b
#define PCFG10                           BANKMASK(ANCON1), 2, b
#define PCFG11                           BANKMASK(ANCON1), 3, b
#define PCFG12                           BANKMASK(ANCON1), 4, b
#define PCFG13                           BANKMASK(ANCON1), 5, b
#define PCFG14                           BANKMASK(ANCON1), 6, b
#define PCFG15                           BANKMASK(ANCON1), 7, b
#define PCFG16                           BANKMASK(ANCON2), 0, b
#define PCFG17                           BANKMASK(ANCON2), 1, b
#define PCFG18                           BANKMASK(ANCON2), 2, b
#define PCFG19                           BANKMASK(ANCON2), 3, b
#define PCFG2                            BANKMASK(ANCON0), 2, b
#define PCFG20                           BANKMASK(ANCON2), 4, b
#define PCFG21                           BANKMASK(ANCON2), 5, b
#define PCFG22                           BANKMASK(ANCON2), 6, b
#define PCFG23                           BANKMASK(ANCON2), 7, b
#define PCFG3                            BANKMASK(ANCON0), 3, b
#define PCFG4                            BANKMASK(ANCON0), 4, b
#define PCFG5                            BANKMASK(ANCON0), 5, b
#define PCFG6                            BANKMASK(ANCON0), 6, b
#define PCFG7                            BANKMASK(ANCON0), 7, b
#define PCFG8                            BANKMASK(ANCON1), 0, b
#define PCFG9                            BANKMASK(ANCON1), 1, b
#define PD                               BANKMASK(RCON), 2, a
#define PD1                              BANKMASK(PORTG), 4, a
#define PD2                              BANKMASK(PORTE), 0, a
#define PD3                              BANKMASK(PORTG), 3, a
#define PEIE                             BANKMASK(INTCON), 6, a
#define PEIE_GIEL                        BANKMASK(INTCON), 6, a
#define PEN1                             BANKMASK(SSP1CON2), 2, a
#define PEN2                             BANKMASK(SSP2CON2), 2, a
#define PGC                              BANKMASK(PORTB), 6, a
#define PGD                              BANKMASK(PORTB), 7, a
#define PGM                              BANKMASK(PORTB), 5, a
#define PLLEN                            BANKMASK(OSCTUNE), 6, a
#define POR                              BANKMASK(RCON), 1, a
#define PSA                              BANKMASK(T0CON), 3, a
#define PSP0                             BANKMASK(PORTD), 0, a
#define PSP1                             BANKMASK(PORTD), 1, a
#define PSP2                             BANKMASK(PORTD), 2, a
#define PSP3                             BANKMASK(PORTD), 3, a
#define PSP4                             BANKMASK(PORTD), 4, a
#define PSP5                             BANKMASK(PORTD), 5, a
#define PSP6                             BANKMASK(PORTD), 6, a
#define PSP7                             BANKMASK(PORTD), 7, a
#define PSPIE                            BANKMASK(PIE1), 7, a
#define PSPIF                            BANKMASK(PIR1), 7, a
#define PSPIP                            BANKMASK(IPR1), 7, a
#define PSPMD                            BANKMASK(PMD1), 7, b
#define PSPMODE                          BANKMASK(PSPCON), 4, a
#define PSS1AC0                          BANKMASK(ECCP1AS), 2, a
#define PSS1AC1                          BANKMASK(ECCP1AS), 3, a
#define PSS1BD0                          BANKMASK(ECCP1AS), 0, a
#define PSS1BD1                          BANKMASK(ECCP1AS), 1, a
#define PSS2AC0                          BANKMASK(ECCP2AS), 2, b
#define PSS2AC1                          BANKMASK(ECCP2AS), 3, b
#define PSS2BD0                          BANKMASK(ECCP2AS), 0, b
#define PSS2BD1                          BANKMASK(ECCP2AS), 1, b
#define PSS3AC0                          BANKMASK(ECCP3AS), 2, b
#define PSS3AC1                          BANKMASK(ECCP3AS), 3, b
#define PSS3BD0                          BANKMASK(ECCP3AS), 0, b
#define PSS3BD1                          BANKMASK(ECCP3AS), 1, b
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
#define RC8_92                           BANKMASK(RCSTA2), 6, b
#define RC9                              BANKMASK(RCSTA1), 6, a
#define RC92                             BANKMASK(RCSTA2), 6, b
#define RCD8                             BANKMASK(RCSTA1), 0, a
#define RCD82                            BANKMASK(RCSTA2), 0, b
#define RCEN1                            BANKMASK(SSP1CON2), 3, a
#define RCEN2                            BANKMASK(SSP2CON2), 3, a
#define RCIDL1                           BANKMASK(BAUDCON1), 6, a
#define RCIDL2                           BANKMASK(BAUDCON2), 6, b
#define RCIE                             BANKMASK(PIE1), 5, a
#define RCIF                             BANKMASK(PIR1), 5, a
#define RCIP                             BANKMASK(IPR1), 5, a
#define RCMT                             BANKMASK(BAUDCON1), 6, a
#define RCMT1                            BANKMASK(BAUDCON1), 6, a
#define RCMT2                            BANKMASK(BAUDCON2), 6, b
#define RD                               BANKMASK(EECON1), 0, a
#define RD0                              BANKMASK(PORTD), 0, a
#define RD1                              BANKMASK(PORTD), 1, a
#define RD163                            BANKMASK(T3CON), 7, a
#define RD165                            BANKMASK(T5CON), 1, a
#define RD2                              BANKMASK(PORTD), 2, a
#define RD3                              BANKMASK(PORTD), 3, a
#define RD4                              BANKMASK(PORTD), 4, a
#define RD5                              BANKMASK(PORTD), 5, a
#define RD6                              BANKMASK(PORTD), 6, a
#define RD7                              BANKMASK(PORTD), 7, a
#define RDE                              BANKMASK(PORTE), 0, a
#define RDPU                             BANKMASK(PADCFG1), 7, b
#define RE0                              BANKMASK(PORTE), 0, a
#define RE1                              BANKMASK(PORTE), 1, a
#define RE2                              BANKMASK(PORTE), 2, a
#define RE3                              BANKMASK(PORTE), 3, a
#define RE4                              BANKMASK(PORTE), 4, a
#define RE5                              BANKMASK(PORTE), 5, a
#define RE6                              BANKMASK(PORTE), 6, a
#define RE7                              BANKMASK(PORTE), 7, a
#define READ_WRITE2                      BANKMASK(SSP2STAT), 2, a
#define REFO                             BANKMASK(PORTE), 3, a
#define REGSLP                           BANKMASK(WDTCON), 7, a
#define REPU                             BANKMASK(PADCFG1), 6, b
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
#define RH0                              BANKMASK(PORTH), 0, a
#define RH1                              BANKMASK(PORTH), 1, a
#define RH2                              BANKMASK(PORTH), 2, a
#define RH3                              BANKMASK(PORTH), 3, a
#define RH4                              BANKMASK(PORTH), 4, a
#define RH5                              BANKMASK(PORTH), 5, a
#define RH6                              BANKMASK(PORTH), 6, a
#define RH7                              BANKMASK(PORTH), 7, a
#define RI                               BANKMASK(RCON), 4, a
#define RJ0                              BANKMASK(PORTJ), 0, a
#define RJ1                              BANKMASK(PORTJ), 1, a
#define RJ2                              BANKMASK(PORTJ), 2, a
#define RJ3                              BANKMASK(PORTJ), 3, a
#define RJ4                              BANKMASK(PORTJ), 4, a
#define RJ5                              BANKMASK(PORTJ), 5, a
#define RJ6                              BANKMASK(PORTJ), 6, a
#define RJ7                              BANKMASK(PORTJ), 7, a
#define RJPU                             BANKMASK(PADCFG1), 5, b
#define RODIV0                           BANKMASK(REFOCON), 0, b
#define RODIV1                           BANKMASK(REFOCON), 1, b
#define RODIV2                           BANKMASK(REFOCON), 2, b
#define RODIV3                           BANKMASK(REFOCON), 3, b
#define ROON                             BANKMASK(REFOCON), 7, b
#define ROSEL                            BANKMASK(REFOCON), 4, b
#define ROSSLP                           BANKMASK(REFOCON), 5, b
#define RSEN1                            BANKMASK(SSP1CON2), 1, a
#define RSEN2                            BANKMASK(SSP2CON2), 1, a
#define RTCC                             BANKMASK(PORTG), 4, a
#define RTCCIE                           BANKMASK(PIE3), 0, a
#define RTCCIF                           BANKMASK(PIR3), 0, a
#define RTCCIP                           BANKMASK(IPR3), 0, a
#define RTCCMD                           BANKMASK(PMD1), 5, b
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
#define RW2                              BANKMASK(SSP2STAT), 2, a
#define RX1                              BANKMASK(PORTC), 7, a
#define RX2                              BANKMASK(PORTG), 2, a
#define RX91                             BANKMASK(RCSTA1), 6, a
#define RX92                             BANKMASK(RCSTA2), 6, b
#define RX9D1                            BANKMASK(RCSTA1), 0, a
#define RX9D2                            BANKMASK(RCSTA2), 0, b
#define RXB0IE                           BANKMASK(PIE3), 0, a
#define RXB1IE                           BANKMASK(PIE3), 1, a
#define RXBNIE                           BANKMASK(PIE3), 1, a
#define RXBNIF                           BANKMASK(PIR3), 1, a
#define RXBNIP                           BANKMASK(IPR3), 1, a
#define RXCKP                            BANKMASK(BAUDCON1), 5, a
#define RXDTP1                           BANKMASK(BAUDCON1), 5, a
#define RXDTP2                           BANKMASK(BAUDCON2), 5, b
#define R_NOT_W2                         BANKMASK(SSP2STAT), 2, a
#define R_W2                             BANKMASK(SSP2STAT), 2, a
#define R_nW2                            BANKMASK(SSP2STAT), 2, a
#define S2                               BANKMASK(SSP2STAT), 3, a
#define SBOREN                           BANKMASK(RCON), 6, a
#define SCK1                             BANKMASK(PORTC), 3, a
#define SCK2                             BANKMASK(PORTD), 6, a
#define SCKLI                            BANKMASK(PORTC), 0, a
#define SCKP                             BANKMASK(BAUDCON1), 4, a
#define SCKP1                            BANKMASK(BAUDCON1), 4, a
#define SCKP2                            BANKMASK(BAUDCON2), 4, b
#define SCL1                             BANKMASK(PORTC), 3, a
#define SCL2                             BANKMASK(PORTD), 6, a
#define SCS0                             BANKMASK(OSCCON), 0, a
#define SCS1                             BANKMASK(OSCCON), 1, a
#define SDA1                             BANKMASK(PORTC), 4, a
#define SDA2                             BANKMASK(PORTD), 5, a
#define SDI1                             BANKMASK(PORTC), 4, a
#define SDI2                             BANKMASK(PORTD), 5, a
#define SDO1                             BANKMASK(PORTC), 5, a
#define SDO2                             BANKMASK(PORTD), 4, a
#define SEN1                             BANKMASK(SSP1CON2), 0, a
#define SEN2                             BANKMASK(SSP2CON2), 0, a
#define SENDB1                           BANKMASK(TXSTA1), 3, a
#define SENDB2                           BANKMASK(TXSTA2), 3, b
#define SMP1                             BANKMASK(SSP1STAT), 7, a
#define SMP2                             BANKMASK(SSP2STAT), 7, a
#define SOSCEN3                          BANKMASK(T3CON), 3, a
#define SOSCEN5                          BANKMASK(T5CON), 3, a
#define SOSCGO                           BANKMASK(OSCCON2), 3, a
#define SOSCI                            BANKMASK(PORTC), 1, a
#define SOSCO                            BANKMASK(PORTC), 0, a
#define SOSCRUN                          BANKMASK(OSCCON2), 6, a
#define SP0                              BANKMASK(STKPTR), 0, a
#define SP1                              BANKMASK(STKPTR), 1, a
#define SP2                              BANKMASK(STKPTR), 2, a
#define SP3                              BANKMASK(STKPTR), 3, a
#define SP4                              BANKMASK(STKPTR), 4, a
#define SPEN1                            BANKMASK(RCSTA1), 7, a
#define SPEN2                            BANKMASK(RCSTA2), 7, b
#define SPI1MD                           BANKMASK(PMD0), 1, b
#define SPI1OD                           BANKMASK(ODCON1), 7, b
#define SPI2MD                           BANKMASK(PMD0), 2, b
#define SPI2OD                           BANKMASK(ODCON1), 0, b
#define SREN1                            BANKMASK(RCSTA1), 5, a
#define SREN2                            BANKMASK(RCSTA2), 5, b
#define SRENA                            BANKMASK(RCSTA1), 5, a
#define SRETEN                           BANKMASK(WDTCON), 4, a
#define SS1                              BANKMASK(PORTF), 7, a
#define SS2                              BANKMASK(PORTD), 7, a
#define SSP1IE                           BANKMASK(PIE1), 3, a
#define SSP1IF                           BANKMASK(PIR1), 3, a
#define SSP1IP                           BANKMASK(IPR1), 3, a
#define SSP1MD                           BANKMASK(PMD0), 1, b
#define SSP2IE                           BANKMASK(PIE2), 5, a
#define SSP2IF                           BANKMASK(PIR2), 5, a
#define SSP2IP                           BANKMASK(IPR2), 5, a
#define SSP2MD                           BANKMASK(PMD0), 2, b
#define SSPEN1                           BANKMASK(SSP1CON1), 5, a
#define SSPEN2                           BANKMASK(SSP2CON1), 5, a
#define SSPIE                            BANKMASK(PIE1), 3, a
#define SSPIF                            BANKMASK(PIR1), 3, a
#define SSPIP                            BANKMASK(IPR1), 3, a
#define SSPM01                           BANKMASK(SSP1CON1), 0, a
#define SSPM02                           BANKMASK(SSP2CON1), 0, a
#define SSPM11                           BANKMASK(SSP1CON1), 1, a
#define SSPM12                           BANKMASK(SSP2CON1), 1, a
#define SSPM21                           BANKMASK(SSP1CON1), 2, a
#define SSPM22                           BANKMASK(SSP2CON1), 2, a
#define SSPM31                           BANKMASK(SSP1CON1), 3, a
#define SSPM32                           BANKMASK(SSP2CON1), 3, a
#define SSPOV1                           BANKMASK(SSP1CON1), 6, a
#define SSPOV2                           BANKMASK(SSP2CON1), 6, a
#define START                            BANKMASK(SSP1STAT), 3, a
#define START1                           BANKMASK(SSP1STAT), 3, a
#define START2                           BANKMASK(SSP2STAT), 3, a
#define STKFUL                           BANKMASK(STKPTR), 7, a
#define STKOVF                           BANKMASK(STKPTR), 7, a
#define STKUNF                           BANKMASK(STKPTR), 6, a
#define STOP                             BANKMASK(SSP1STAT), 4, a
#define STOP1                            BANKMASK(SSP1STAT), 4, a
#define STOP2                            BANKMASK(SSP2STAT), 4, a
#define STRA2                            BANKMASK(PSTR2CON), 0, b
#define STRA3                            BANKMASK(PSTR3CON), 0, b
#define STRB2                            BANKMASK(PSTR2CON), 1, b
#define STRB3                            BANKMASK(PSTR3CON), 1, b
#define STRC2                            BANKMASK(PSTR2CON), 2, b
#define STRC3                            BANKMASK(PSTR3CON), 2, b
#define STRD2                            BANKMASK(PSTR2CON), 3, b
#define STRD3                            BANKMASK(PSTR3CON), 3, b
#define STRSYNC2                         BANKMASK(PSTR2CON), 4, b
#define STRSYNC3                         BANKMASK(PSTR3CON), 4, b
#define SWDTE                            BANKMASK(WDTCON), 0, a
#define SWDTEN                           BANKMASK(WDTCON), 0, a
#define SYNC1                            BANKMASK(TXSTA1), 4, a
#define SYNC2                            BANKMASK(TXSTA2), 4, b
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
#define T1CKI                            BANKMASK(PORTA), 5, a
#define T1CKPS0                          BANKMASK(T1CON), 4, a
#define T1CKPS1                          BANKMASK(T1CON), 5, a
#define T1G                              BANKMASK(PORTB), 5, a
#define T1GGO                            BANKMASK(T1GCON), 3, a
#define T1GGO_NOT_T1DONE                 BANKMASK(T1GCON), 3, a
#define T1GGO_nT1DONE                    BANKMASK(T1GCON), 3, a
#define T1GPOL                           BANKMASK(T1GCON), 6, a
#define T1GSPM                           BANKMASK(T1GCON), 4, a
#define T1GSS0                           BANKMASK(T1GCON), 0, a
#define T1GSS1                           BANKMASK(T1GCON), 1, a
#define T1GTM                            BANKMASK(T1GCON), 5, a
#define T1GVAL                           BANKMASK(T1GCON), 2, a
#define T1OSCEN                          BANKMASK(T1CON), 3, a
#define T1RD16                           BANKMASK(T1CON), 7, a
#define T2CKPS0                          BANKMASK(T2CON), 0, a
#define T2CKPS1                          BANKMASK(T2CON), 1, a
#define T2OUTPS0                         BANKMASK(T2CON), 3, a
#define T2OUTPS1                         BANKMASK(T2CON), 4, a
#define T2OUTPS2                         BANKMASK(T2CON), 5, a
#define T2OUTPS3                         BANKMASK(T2CON), 6, a
#define T3CKI                            BANKMASK(PORTB), 5, a
#define T3CKPS0                          BANKMASK(T3CON), 4, a
#define T3CKPS1                          BANKMASK(T3CON), 5, a
#define T3G                              BANKMASK(PORTA), 5, a
#define T3GGO                            BANKMASK(T3GCON), 3, a
#define T3GGO_NOT_T3DONE                 BANKMASK(T3GCON), 3, a
#define T3GGO_nT3DONE                    BANKMASK(T3GCON), 3, a
#define T3GPOL                           BANKMASK(T3GCON), 6, a
#define T3GSPM                           BANKMASK(T3GCON), 4, a
#define T3GSS0                           BANKMASK(T3GCON), 0, a
#define T3GSS1                           BANKMASK(T3GCON), 1, a
#define T3GTM                            BANKMASK(T3GCON), 5, a
#define T3GVAL                           BANKMASK(T3GCON), 2, a
#define T3RD16                           BANKMASK(T3CON), 7, a
#define T4CKPS0                          BANKMASK(T4CON), 0, a
#define T4CKPS1                          BANKMASK(T4CON), 1, a
#define T4OUTPS0                         BANKMASK(T4CON), 3, a
#define T4OUTPS1                         BANKMASK(T4CON), 4, a
#define T4OUTPS2                         BANKMASK(T4CON), 5, a
#define T4OUTPS3                         BANKMASK(T4CON), 6, a
#define T5CKI                            BANKMASK(PORTD), 1, a
#define T5CKPS0                          BANKMASK(T5CON), 4, a
#define T5CKPS1                          BANKMASK(T5CON), 5, a
#define T5G                              BANKMASK(PORTG), 4, a
#define T5GGO                            BANKMASK(T5GCON), 3, a
#define T5GGO_NOT_T5DONE                 BANKMASK(T5GCON), 3, a
#define T5GGO_nT5DONE                    BANKMASK(T5GCON), 3, a
#define T5GPOL                           BANKMASK(T5GCON), 6, a
#define T5GSPM                           BANKMASK(T5GCON), 4, a
#define T5GSS0                           BANKMASK(T5GCON), 0, a
#define T5GSS1                           BANKMASK(T5GCON), 1, a
#define T5GTM                            BANKMASK(T5GCON), 5, a
#define T5GVAL                           BANKMASK(T5GCON), 2, a
#define T6CKPS0                          BANKMASK(T6CON), 0, b
#define T6CKPS1                          BANKMASK(T6CON), 1, b
#define T6OUTPS0                         BANKMASK(T6CON), 3, b
#define T6OUTPS1                         BANKMASK(T6CON), 4, b
#define T6OUTPS2                         BANKMASK(T6CON), 5, b
#define T6OUTPS3                         BANKMASK(T6CON), 6, b
#define T7CKI                            BANKMASK(PORTG), 4, a
#define T7G                              BANKMASK(PORTD), 1, a
#define T8CKPS0                          BANKMASK(T8CON), 0, b
#define T8CKPS1                          BANKMASK(T8CON), 1, b
#define T8OUTPS0                         BANKMASK(T8CON), 3, b
#define T8OUTPS1                         BANKMASK(T8CON), 4, b
#define T8OUTPS2                         BANKMASK(T8CON), 5, b
#define T8OUTPS3                         BANKMASK(T8CON), 6, b
#define TGEN                             BANKMASK(CTMUCONH), 4, b
#define TMR0IE                           BANKMASK(INTCON), 5, a
#define TMR0IF                           BANKMASK(INTCON), 2, a
#define TMR0IP                           BANKMASK(INTCON2), 2, a
#define TMR0ON                           BANKMASK(T0CON), 7, a
#define TMR1CS0                          BANKMASK(T1CON), 6, a
#define TMR1CS1                          BANKMASK(T1CON), 7, a
#define TMR1GE                           BANKMASK(T1GCON), 7, a
#define TMR1GIE                          BANKMASK(PIE1), 2, a
#define TMR1GIF                          BANKMASK(PIR1), 2, a
#define TMR1GIP                          BANKMASK(IPR1), 2, a
#define TMR1IE                           BANKMASK(PIE1), 0, a
#define TMR1IF                           BANKMASK(PIR1), 0, a
#define TMR1IP                           BANKMASK(IPR1), 0, a
#define TMR1MD                           BANKMASK(PMD1), 1, b
#define TMR1ON                           BANKMASK(T1CON), 0, a
#define TMR2IE                           BANKMASK(PIE1), 1, a
#define TMR2IF                           BANKMASK(PIR1), 1, a
#define TMR2IP                           BANKMASK(IPR1), 1, a
#define TMR2MD                           BANKMASK(PMD1), 2, b
#define TMR2ON                           BANKMASK(T2CON), 2, a
#define TMR3CS0                          BANKMASK(T3CON), 6, a
#define TMR3CS1                          BANKMASK(T3CON), 7, a
#define TMR3GE                           BANKMASK(T3GCON), 7, a
#define TMR3GIE                          BANKMASK(PIE2), 0, a
#define TMR3GIF                          BANKMASK(PIR2), 0, a
#define TMR3GIP                          BANKMASK(IPR2), 0, a
#define TMR3IE                           BANKMASK(PIE2), 1, a
#define TMR3IF                           BANKMASK(PIR2), 1, a
#define TMR3IP                           BANKMASK(IPR2), 1, a
#define TMR3MD                           BANKMASK(PMD1), 3, b
#define TMR3ON                           BANKMASK(T3CON), 0, a
#define TMR4IE                           BANKMASK(PIE5), 0, a
#define TMR4IF                           BANKMASK(PIR5), 0, a
#define TMR4IP                           BANKMASK(IPR5), 0, a
#define TMR4MD                           BANKMASK(PMD1), 4, b
#define TMR4ON                           BANKMASK(T4CON), 2, a
#define TMR5CS0                          BANKMASK(T5CON), 6, a
#define TMR5CS1                          BANKMASK(T5CON), 7, a
#define TMR5GE                           BANKMASK(T5GCON), 7, a
#define TMR5GIE                          BANKMASK(PIE3), 7, a
#define TMR5GIF                          BANKMASK(PIR3), 7, a
#define TMR5GIP                          BANKMASK(IPR3), 7, a
#define TMR5IE                           BANKMASK(PIE5), 1, a
#define TMR5IF                           BANKMASK(PIR5), 1, a
#define TMR5IP                           BANKMASK(IPR5), 1, a
#define TMR5MD                           BANKMASK(PMD2), 3, b
#define TMR5ON                           BANKMASK(T5CON), 0, a
#define TMR6IE                           BANKMASK(PIE5), 2, a
#define TMR6IF                           BANKMASK(PIR5), 2, a
#define TMR6IP                           BANKMASK(IPR5), 2, a
#define TMR6MD                           BANKMASK(PMD2), 4, b
#define TMR6ON                           BANKMASK(T6CON), 2, b
#define TMR8IE                           BANKMASK(PIE5), 4, a
#define TMR8IF                           BANKMASK(PIR5), 4, a
#define TMR8IP                           BANKMASK(IPR5), 4, a
#define TMR8MD                           BANKMASK(PMD2), 6, b
#define TMR8ON                           BANKMASK(T8CON), 2, b
#define TO                               BANKMASK(RCON), 3, a
#define TRIGSEL0                         BANKMASK(ADCON1), 6, a
#define TRIGSEL1                         BANKMASK(ADCON1), 7, a
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
#define TRISH0                           BANKMASK(TRISH), 0, a
#define TRISH1                           BANKMASK(TRISH), 1, a
#define TRISH2                           BANKMASK(TRISH), 2, a
#define TRISH3                           BANKMASK(TRISH), 3, a
#define TRISH4                           BANKMASK(TRISH), 4, a
#define TRISH5                           BANKMASK(TRISH), 5, a
#define TRISH6                           BANKMASK(TRISH), 6, a
#define TRISH7                           BANKMASK(TRISH), 7, a
#define TRISJ0                           BANKMASK(TRISJ), 0, a
#define TRISJ1                           BANKMASK(TRISJ), 1, a
#define TRISJ2                           BANKMASK(TRISJ), 2, a
#define TRISJ3                           BANKMASK(TRISJ), 3, a
#define TRISJ4                           BANKMASK(TRISJ), 4, a
#define TRISJ5                           BANKMASK(TRISJ), 5, a
#define TRISJ6                           BANKMASK(TRISJ), 6, a
#define TRISJ7                           BANKMASK(TRISJ), 7, a
#define TRMT1                            BANKMASK(TXSTA1), 1, a
#define TRMT2                            BANKMASK(TXSTA2), 1, b
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
#define TX8_92                           BANKMASK(TXSTA2), 6, b
#define TX91                             BANKMASK(TXSTA1), 6, a
#define TX92                             BANKMASK(TXSTA2), 6, b
#define TX9D1                            BANKMASK(TXSTA1), 0, a
#define TX9D2                            BANKMASK(TXSTA2), 0, b
#define TXB0IE                           BANKMASK(PIE3), 2, a
#define TXB1IE                           BANKMASK(PIE3), 3, a
#define TXB2IE                           BANKMASK(PIE3), 4, a
#define TXBNIE                           BANKMASK(PIE3), 4, a
#define TXBNIF                           BANKMASK(PIR3), 4, a
#define TXBNIP                           BANKMASK(IPR3), 4, a
#define TXCKP1                           BANKMASK(BAUDCON1), 4, a
#define TXCKP2                           BANKMASK(BAUDCON2), 4, b
#define TXD8                             BANKMASK(TXSTA1), 0, a
#define TXD82                            BANKMASK(TXSTA2), 0, b
#define TXEN1                            BANKMASK(TXSTA1), 5, a
#define TXEN2                            BANKMASK(TXSTA2), 5, b
#define TXIE                             BANKMASK(PIE1), 4, a
#define TXIF                             BANKMASK(PIR1), 4, a
#define TXIP                             BANKMASK(IPR1), 4, a
#define U1OD                             BANKMASK(ODCON3), 6, b
#define U2OD                             BANKMASK(ODCON3), 7, b
#define UA1                              BANKMASK(SSP1STAT), 1, a
#define UA2                              BANKMASK(SSP2STAT), 1, a
#define UART1MD                          BANKMASK(PMD0), 3, b
#define UART2MD                          BANKMASK(PMD0), 4, b
#define UB                               BANKMASK(PORTJ), 7, a
#define ULPEN                            BANKMASK(WDTCON), 2, a
#define ULPLVL                           BANKMASK(WDTCON), 5, a
#define ULPSINK                          BANKMASK(WDTCON), 1, a
#define ULPWU                            BANKMASK(PORTA), 0, a
#define ULPWUIN                          BANKMASK(PORTA), 0, a
#define VCFG0                            BANKMASK(ADCON1), 4, a
#define VCFG01                           BANKMASK(ADCON1), 4, a
#define VCFG1                            BANKMASK(ADCON1), 5, a
#define VCFG11                           BANKMASK(ADCON1), 5, a
#define VDIRMAG                          BANKMASK(HLVDCON), 7, a
#define VNCFG                            BANKMASK(ADCON1), 3, a
#define VREF_MINUS                       BANKMASK(PORTA), 2, a
#define VREF_PLUS                        BANKMASK(PORTA), 3, a
#define W4E                              BANKMASK(BAUDCON1), 1, a
#define WAIT0                            BANKMASK(MEMCON), 4, b
#define WAIT1                            BANKMASK(MEMCON), 5, b
#define WAITB0                           BANKMASK(RTCVALH), 6, b
#define WAITB1                           BANKMASK(RTCVALH), 7, b
#define WAITE0                           BANKMASK(RTCVALH), 0, b
#define WAITE1                           BANKMASK(RTCVALH), 1, b
#define WAITM0                           BANKMASK(RTCVALH), 2, b
#define WAITM1                           BANKMASK(RTCVALH), 3, b
#define WAITM2                           BANKMASK(RTCVALH), 4, b
#define WAITM3                           BANKMASK(RTCVALH), 5, b
#define WCOL1                            BANKMASK(SSP1CON1), 7, a
#define WCOL2                            BANKMASK(SSP2CON1), 7, a
#define WM0                              BANKMASK(MEMCON), 0, b
#define WM1                              BANKMASK(MEMCON), 1, b
#define WR                               BANKMASK(EECON1), 1, a
#define WRE                              BANKMASK(PORTE), 1, a
#define WREN                             BANKMASK(EECON1), 2, a
#define WRERR                            BANKMASK(EECON1), 3, a
#define WRH                              BANKMASK(PORTJ), 3, a
#define WRL                              BANKMASK(PORTJ), 2, a
#define WUE1                             BANKMASK(BAUDCON1), 1, a
#define WUE2                             BANKMASK(BAUDCON2), 1, b
#define ZERO                             BANKMASK(STATUS), 2, a
#define nA2                              BANKMASK(SSP2STAT), 5, a
#define nADDRESS2                        BANKMASK(SSP2STAT), 5, a
#define nBOR                             BANKMASK(RCON), 0, a
#define nCM                              BANKMASK(RCON), 5, a
#define nCS                              BANKMASK(PORTE), 2, a
#define nDONE                            BANKMASK(ADCON0), 1, a
#define nPD                              BANKMASK(RCON), 2, a
#define nPOR                             BANKMASK(RCON), 1, a
#define nRBPU                            BANKMASK(INTCON2), 7, a
#define nRC8                             BANKMASK(RCSTA1), 6, a
#define nRD                              BANKMASK(PORTE), 0, a
#define nRI                              BANKMASK(RCON), 4, a
#define nSS2                             BANKMASK(PORTD), 7, a
#define nT1DONE                          BANKMASK(T1GCON), 3, a
#define nT1SYNC                          BANKMASK(T1CON), 2, a
#define nT3DONE                          BANKMASK(T3GCON), 3, a
#define nT3SYNC                          BANKMASK(T3CON), 2, a
#define nT5DONE                          BANKMASK(T5GCON), 3, a
#define nT5SYNC                          BANKMASK(T5CON), 2, a
#define nTO                              BANKMASK(RCON), 3, a
#define nTX8                             BANKMASK(TXSTA1), 6, a
#define nW2                              BANKMASK(SSP2STAT), 2, a
#define nWR                              BANKMASK(PORTE), 1, a
#define nWRITE2                          BANKMASK(SSP2STAT), 2, a

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

#endif // _PIC18F85K22_INC_
