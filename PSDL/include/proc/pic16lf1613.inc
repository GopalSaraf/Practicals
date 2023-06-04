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

#ifndef _PIC16LF1613_INC_
#define _PIC16LF1613_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF1613
 */

/*
 * Device Registers
 */

// Register: INDF0
#define INDF0 INDF0
INDF0                                    equ 0000h
// bitfield definitions
INDF0_INDF0_POSN                         equ 0000h
INDF0_INDF0_POSITION                     equ 0000h
INDF0_INDF0_SIZE                         equ 0008h
INDF0_INDF0_LENGTH                       equ 0008h
INDF0_INDF0_MASK                         equ 00FFh

// Register: INDF1
#define INDF1 INDF1
INDF1                                    equ 0001h
// bitfield definitions
INDF1_INDF1_POSN                         equ 0000h
INDF1_INDF1_POSITION                     equ 0000h
INDF1_INDF1_SIZE                         equ 0008h
INDF1_INDF1_LENGTH                       equ 0008h
INDF1_INDF1_MASK                         equ 00FFh

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

// Register: FSR0L
#define FSR0L FSR0L
FSR0L                                    equ 0004h
// bitfield definitions
FSR0L_FSR0L_POSN                         equ 0000h
FSR0L_FSR0L_POSITION                     equ 0000h
FSR0L_FSR0L_SIZE                         equ 0008h
FSR0L_FSR0L_LENGTH                       equ 0008h
FSR0L_FSR0L_MASK                         equ 00FFh

// Register: FSR0H
#define FSR0H FSR0H
FSR0H                                    equ 0005h
// bitfield definitions
FSR0H_FSR0H_POSN                         equ 0000h
FSR0H_FSR0H_POSITION                     equ 0000h
FSR0H_FSR0H_SIZE                         equ 0008h
FSR0H_FSR0H_LENGTH                       equ 0008h
FSR0H_FSR0H_MASK                         equ 00FFh

// Register: FSR1L
#define FSR1L FSR1L
FSR1L                                    equ 0006h
// bitfield definitions
FSR1L_FSR1L_POSN                         equ 0000h
FSR1L_FSR1L_POSITION                     equ 0000h
FSR1L_FSR1L_SIZE                         equ 0008h
FSR1L_FSR1L_LENGTH                       equ 0008h
FSR1L_FSR1L_MASK                         equ 00FFh

// Register: FSR1H
#define FSR1H FSR1H
FSR1H                                    equ 0007h
// bitfield definitions
FSR1H_FSR1H_POSN                         equ 0000h
FSR1H_FSR1H_POSITION                     equ 0000h
FSR1H_FSR1H_SIZE                         equ 0008h
FSR1H_FSR1H_LENGTH                       equ 0008h
FSR1H_FSR1H_MASK                         equ 00FFh

// Register: BSR
#define BSR BSR
BSR                                      equ 0008h
// bitfield definitions
BSR_BSR_POSN                             equ 0000h
BSR_BSR_POSITION                         equ 0000h
BSR_BSR_SIZE                             equ 0005h
BSR_BSR_LENGTH                           equ 0005h
BSR_BSR_MASK                             equ 001Fh
BSR_BSR0_POSN                            equ 0000h
BSR_BSR0_POSITION                        equ 0000h
BSR_BSR0_SIZE                            equ 0001h
BSR_BSR0_LENGTH                          equ 0001h
BSR_BSR0_MASK                            equ 0001h
BSR_BSR1_POSN                            equ 0001h
BSR_BSR1_POSITION                        equ 0001h
BSR_BSR1_SIZE                            equ 0001h
BSR_BSR1_LENGTH                          equ 0001h
BSR_BSR1_MASK                            equ 0002h
BSR_BSR2_POSN                            equ 0002h
BSR_BSR2_POSITION                        equ 0002h
BSR_BSR2_SIZE                            equ 0001h
BSR_BSR2_LENGTH                          equ 0001h
BSR_BSR2_MASK                            equ 0004h
BSR_BSR3_POSN                            equ 0003h
BSR_BSR3_POSITION                        equ 0003h
BSR_BSR3_SIZE                            equ 0001h
BSR_BSR3_LENGTH                          equ 0001h
BSR_BSR3_MASK                            equ 0008h
BSR_BSR4_POSN                            equ 0004h
BSR_BSR4_POSITION                        equ 0004h
BSR_BSR4_SIZE                            equ 0001h
BSR_BSR4_LENGTH                          equ 0001h
BSR_BSR4_MASK                            equ 0010h

// Register: WREG
#define WREG WREG
WREG                                     equ 0009h
// bitfield definitions
WREG_WREG0_POSN                          equ 0000h
WREG_WREG0_POSITION                      equ 0000h
WREG_WREG0_SIZE                          equ 0008h
WREG_WREG0_LENGTH                        equ 0008h
WREG_WREG0_MASK                          equ 00FFh

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah
// bitfield definitions
PCLATH_PCLATH_POSN                       equ 0000h
PCLATH_PCLATH_POSITION                   equ 0000h
PCLATH_PCLATH_SIZE                       equ 0007h
PCLATH_PCLATH_LENGTH                     equ 0007h
PCLATH_PCLATH_MASK                       equ 007Fh

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
INTCON_INTE_POSN                         equ 0004h
INTCON_INTE_POSITION                     equ 0004h
INTCON_INTE_SIZE                         equ 0001h
INTCON_INTE_LENGTH                       equ 0001h
INTCON_INTE_MASK                         equ 0010h
INTCON_TMR0IE_POSN                       equ 0005h
INTCON_TMR0IE_POSITION                   equ 0005h
INTCON_TMR0IE_SIZE                       equ 0001h
INTCON_TMR0IE_LENGTH                     equ 0001h
INTCON_TMR0IE_MASK                       equ 0020h
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
INTCON_T0IF_POSN                         equ 0002h
INTCON_T0IF_POSITION                     equ 0002h
INTCON_T0IF_SIZE                         equ 0001h
INTCON_T0IF_LENGTH                       equ 0001h
INTCON_T0IF_MASK                         equ 0004h
INTCON_T0IE_POSN                         equ 0005h
INTCON_T0IE_POSITION                     equ 0005h
INTCON_T0IE_SIZE                         equ 0001h
INTCON_T0IE_LENGTH                       equ 0001h
INTCON_T0IE_MASK                         equ 0020h

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 000Ch
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

// Register: PORTC
#define PORTC PORTC
PORTC                                    equ 000Eh
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

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 0011h
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
PIR2                                     equ 0012h
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_TMR4IF_POSN                         equ 0001h
PIR2_TMR4IF_POSITION                     equ 0001h
PIR2_TMR4IF_SIZE                         equ 0001h
PIR2_TMR4IF_LENGTH                       equ 0001h
PIR2_TMR4IF_MASK                         equ 0002h
PIR2_TMR6IF_POSN                         equ 0002h
PIR2_TMR6IF_POSITION                     equ 0002h
PIR2_TMR6IF_SIZE                         equ 0001h
PIR2_TMR6IF_LENGTH                       equ 0001h
PIR2_TMR6IF_MASK                         equ 0004h
PIR2_C1IF_POSN                           equ 0005h
PIR2_C1IF_POSITION                       equ 0005h
PIR2_C1IF_SIZE                           equ 0001h
PIR2_C1IF_LENGTH                         equ 0001h
PIR2_C1IF_MASK                           equ 0020h
PIR2_C2IF_POSN                           equ 0006h
PIR2_C2IF_POSITION                       equ 0006h
PIR2_C2IF_SIZE                           equ 0001h
PIR2_C2IF_LENGTH                         equ 0001h
PIR2_C2IF_MASK                           equ 0040h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0013h
// bitfield definitions
PIR3_ZCDIF_POSN                          equ 0004h
PIR3_ZCDIF_POSITION                      equ 0004h
PIR3_ZCDIF_SIZE                          equ 0001h
PIR3_ZCDIF_LENGTH                        equ 0001h
PIR3_ZCDIF_MASK                          equ 0010h
PIR3_CWGIF_POSN                          equ 0005h
PIR3_CWGIF_POSITION                      equ 0005h
PIR3_CWGIF_SIZE                          equ 0001h
PIR3_CWGIF_LENGTH                        equ 0001h
PIR3_CWGIF_MASK                          equ 0020h

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0014h
// bitfield definitions
PIR4_SMT1IF_POSN                         equ 0000h
PIR4_SMT1IF_POSITION                     equ 0000h
PIR4_SMT1IF_SIZE                         equ 0001h
PIR4_SMT1IF_LENGTH                       equ 0001h
PIR4_SMT1IF_MASK                         equ 0001h
PIR4_SMT1PRAIF_POSN                      equ 0001h
PIR4_SMT1PRAIF_POSITION                  equ 0001h
PIR4_SMT1PRAIF_SIZE                      equ 0001h
PIR4_SMT1PRAIF_LENGTH                    equ 0001h
PIR4_SMT1PRAIF_MASK                      equ 0002h
PIR4_SMT1PWAIF_POSN                      equ 0002h
PIR4_SMT1PWAIF_POSITION                  equ 0002h
PIR4_SMT1PWAIF_SIZE                      equ 0001h
PIR4_SMT1PWAIF_LENGTH                    equ 0001h
PIR4_SMT1PWAIF_MASK                      equ 0004h
PIR4_SMT2IF_POSN                         equ 0003h
PIR4_SMT2IF_POSITION                     equ 0003h
PIR4_SMT2IF_SIZE                         equ 0001h
PIR4_SMT2IF_LENGTH                       equ 0001h
PIR4_SMT2IF_MASK                         equ 0008h
PIR4_SMT2PRAIF_POSN                      equ 0004h
PIR4_SMT2PRAIF_POSITION                  equ 0004h
PIR4_SMT2PRAIF_SIZE                      equ 0001h
PIR4_SMT2PRAIF_LENGTH                    equ 0001h
PIR4_SMT2PRAIF_MASK                      equ 0010h
PIR4_SMT2PWAIF_POSN                      equ 0005h
PIR4_SMT2PWAIF_POSITION                  equ 0005h
PIR4_SMT2PWAIF_SIZE                      equ 0001h
PIR4_SMT2PWAIF_LENGTH                    equ 0001h
PIR4_SMT2PWAIF_MASK                      equ 0020h
PIR4_CRCIF_POSN                          equ 0006h
PIR4_CRCIF_POSITION                      equ 0006h
PIR4_CRCIF_SIZE                          equ 0001h
PIR4_CRCIF_LENGTH                        equ 0001h
PIR4_CRCIF_MASK                          equ 0040h
PIR4_SCANIF_POSN                         equ 0007h
PIR4_SCANIF_POSITION                     equ 0007h
PIR4_SCANIF_SIZE                         equ 0001h
PIR4_SCANIF_LENGTH                       equ 0001h
PIR4_SCANIF_MASK                         equ 0080h

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0015h
// bitfield definitions
TMR0_TMR0_POSN                           equ 0000h
TMR0_TMR0_POSITION                       equ 0000h
TMR0_TMR0_SIZE                           equ 0008h
TMR0_TMR0_LENGTH                         equ 0008h
TMR0_TMR0_MASK                           equ 00FFh

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 0016h
// bitfield definitions
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 0017h
// bitfield definitions
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0018h
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
T1GCON                                   equ 0019h
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

// Register: T2TMR
#define T2TMR T2TMR
T2TMR                                    equ 001Ah
// bitfield definitions
T2TMR_TMR2_POSN                          equ 0000h
T2TMR_TMR2_POSITION                      equ 0000h
T2TMR_TMR2_SIZE                          equ 0008h
T2TMR_TMR2_LENGTH                        equ 0008h
T2TMR_TMR2_MASK                          equ 00FFh

// Register: T2PR
#define T2PR T2PR
T2PR                                     equ 001Bh
// bitfield definitions
T2PR_PR2_POSN                            equ 0000h
T2PR_PR2_POSITION                        equ 0000h
T2PR_PR2_SIZE                            equ 0008h
T2PR_PR2_LENGTH                          equ 0008h
T2PR_PR2_MASK                            equ 00FFh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 001Ch
// bitfield definitions
T2CON_OUTPS_POSN                         equ 0000h
T2CON_OUTPS_POSITION                     equ 0000h
T2CON_OUTPS_SIZE                         equ 0004h
T2CON_OUTPS_LENGTH                       equ 0004h
T2CON_OUTPS_MASK                         equ 000Fh
T2CON_CKPS_POSN                          equ 0004h
T2CON_CKPS_POSITION                      equ 0004h
T2CON_CKPS_SIZE                          equ 0003h
T2CON_CKPS_LENGTH                        equ 0003h
T2CON_CKPS_MASK                          equ 0070h
T2CON_ON_POSN                            equ 0007h
T2CON_ON_POSITION                        equ 0007h
T2CON_ON_SIZE                            equ 0001h
T2CON_ON_LENGTH                          equ 0001h
T2CON_ON_MASK                            equ 0080h
T2CON_T2OUTPS_POSN                       equ 0000h
T2CON_T2OUTPS_POSITION                   equ 0000h
T2CON_T2OUTPS_SIZE                       equ 0004h
T2CON_T2OUTPS_LENGTH                     equ 0004h
T2CON_T2OUTPS_MASK                       equ 000Fh
T2CON_T2CKPS_POSN                        equ 0004h
T2CON_T2CKPS_POSITION                    equ 0004h
T2CON_T2CKPS_SIZE                        equ 0003h
T2CON_T2CKPS_LENGTH                      equ 0003h
T2CON_T2CKPS_MASK                        equ 0070h
T2CON_T2ON_POSN                          equ 0007h
T2CON_T2ON_POSITION                      equ 0007h
T2CON_T2ON_SIZE                          equ 0001h
T2CON_T2ON_LENGTH                        equ 0001h
T2CON_T2ON_MASK                          equ 0080h
T2CON_T2OUTPS0_POSN                      equ 0000h
T2CON_T2OUTPS0_POSITION                  equ 0000h
T2CON_T2OUTPS0_SIZE                      equ 0001h
T2CON_T2OUTPS0_LENGTH                    equ 0001h
T2CON_T2OUTPS0_MASK                      equ 0001h
T2CON_T2OUTPS1_POSN                      equ 0001h
T2CON_T2OUTPS1_POSITION                  equ 0001h
T2CON_T2OUTPS1_SIZE                      equ 0001h
T2CON_T2OUTPS1_LENGTH                    equ 0001h
T2CON_T2OUTPS1_MASK                      equ 0002h
T2CON_T2OUTPS2_POSN                      equ 0002h
T2CON_T2OUTPS2_POSITION                  equ 0002h
T2CON_T2OUTPS2_SIZE                      equ 0001h
T2CON_T2OUTPS2_LENGTH                    equ 0001h
T2CON_T2OUTPS2_MASK                      equ 0004h
T2CON_T2OUTPS3_POSN                      equ 0003h
T2CON_T2OUTPS3_POSITION                  equ 0003h
T2CON_T2OUTPS3_SIZE                      equ 0001h
T2CON_T2OUTPS3_LENGTH                    equ 0001h
T2CON_T2OUTPS3_MASK                      equ 0008h
T2CON_T2CKPS0_POSN                       equ 0004h
T2CON_T2CKPS0_POSITION                   equ 0004h
T2CON_T2CKPS0_SIZE                       equ 0001h
T2CON_T2CKPS0_LENGTH                     equ 0001h
T2CON_T2CKPS0_MASK                       equ 0010h
T2CON_T2CKPS1_POSN                       equ 0005h
T2CON_T2CKPS1_POSITION                   equ 0005h
T2CON_T2CKPS1_SIZE                       equ 0001h
T2CON_T2CKPS1_LENGTH                     equ 0001h
T2CON_T2CKPS1_MASK                       equ 0020h
T2CON_T2CKPS2_POSN                       equ 0006h
T2CON_T2CKPS2_POSITION                   equ 0006h
T2CON_T2CKPS2_SIZE                       equ 0001h
T2CON_T2CKPS2_LENGTH                     equ 0001h
T2CON_T2CKPS2_MASK                       equ 0040h
T2CON_OUTPS0_POSN                        equ 0000h
T2CON_OUTPS0_POSITION                    equ 0000h
T2CON_OUTPS0_SIZE                        equ 0001h
T2CON_OUTPS0_LENGTH                      equ 0001h
T2CON_OUTPS0_MASK                        equ 0001h
T2CON_OUTPS1_POSN                        equ 0001h
T2CON_OUTPS1_POSITION                    equ 0001h
T2CON_OUTPS1_SIZE                        equ 0001h
T2CON_OUTPS1_LENGTH                      equ 0001h
T2CON_OUTPS1_MASK                        equ 0002h
T2CON_OUTPS2_POSN                        equ 0002h
T2CON_OUTPS2_POSITION                    equ 0002h
T2CON_OUTPS2_SIZE                        equ 0001h
T2CON_OUTPS2_LENGTH                      equ 0001h
T2CON_OUTPS2_MASK                        equ 0004h
T2CON_OUTPS3_POSN                        equ 0003h
T2CON_OUTPS3_POSITION                    equ 0003h
T2CON_OUTPS3_SIZE                        equ 0001h
T2CON_OUTPS3_LENGTH                      equ 0001h
T2CON_OUTPS3_MASK                        equ 0008h
T2CON_CKPS0_POSN                         equ 0004h
T2CON_CKPS0_POSITION                     equ 0004h
T2CON_CKPS0_SIZE                         equ 0001h
T2CON_CKPS0_LENGTH                       equ 0001h
T2CON_CKPS0_MASK                         equ 0010h
T2CON_CKPS1_POSN                         equ 0005h
T2CON_CKPS1_POSITION                     equ 0005h
T2CON_CKPS1_SIZE                         equ 0001h
T2CON_CKPS1_LENGTH                       equ 0001h
T2CON_CKPS1_MASK                         equ 0020h
T2CON_CKPS2_POSN                         equ 0006h
T2CON_CKPS2_POSITION                     equ 0006h
T2CON_CKPS2_SIZE                         equ 0001h
T2CON_CKPS2_LENGTH                       equ 0001h
T2CON_CKPS2_MASK                         equ 0040h
T2CON_TMR2ON_POSN                        equ 0007h
T2CON_TMR2ON_POSITION                    equ 0007h
T2CON_TMR2ON_SIZE                        equ 0001h
T2CON_TMR2ON_LENGTH                      equ 0001h
T2CON_TMR2ON_MASK                        equ 0080h

// Register: T2HLT
#define T2HLT T2HLT
T2HLT                                    equ 001Dh
// bitfield definitions
T2HLT_MODE_POSN                          equ 0000h
T2HLT_MODE_POSITION                      equ 0000h
T2HLT_MODE_SIZE                          equ 0004h
T2HLT_MODE_LENGTH                        equ 0004h
T2HLT_MODE_MASK                          equ 000Fh
T2HLT_CKSYNC_POSN                        equ 0005h
T2HLT_CKSYNC_POSITION                    equ 0005h
T2HLT_CKSYNC_SIZE                        equ 0001h
T2HLT_CKSYNC_LENGTH                      equ 0001h
T2HLT_CKSYNC_MASK                        equ 0020h
T2HLT_CKPOL_POSN                         equ 0006h
T2HLT_CKPOL_POSITION                     equ 0006h
T2HLT_CKPOL_SIZE                         equ 0001h
T2HLT_CKPOL_LENGTH                       equ 0001h
T2HLT_CKPOL_MASK                         equ 0040h
T2HLT_PSYNC_POSN                         equ 0007h
T2HLT_PSYNC_POSITION                     equ 0007h
T2HLT_PSYNC_SIZE                         equ 0001h
T2HLT_PSYNC_LENGTH                       equ 0001h
T2HLT_PSYNC_MASK                         equ 0080h
T2HLT_MODE0_POSN                         equ 0000h
T2HLT_MODE0_POSITION                     equ 0000h
T2HLT_MODE0_SIZE                         equ 0001h
T2HLT_MODE0_LENGTH                       equ 0001h
T2HLT_MODE0_MASK                         equ 0001h
T2HLT_MODE1_POSN                         equ 0001h
T2HLT_MODE1_POSITION                     equ 0001h
T2HLT_MODE1_SIZE                         equ 0001h
T2HLT_MODE1_LENGTH                       equ 0001h
T2HLT_MODE1_MASK                         equ 0002h
T2HLT_MODE2_POSN                         equ 0002h
T2HLT_MODE2_POSITION                     equ 0002h
T2HLT_MODE2_SIZE                         equ 0001h
T2HLT_MODE2_LENGTH                       equ 0001h
T2HLT_MODE2_MASK                         equ 0004h
T2HLT_MODE3_POSN                         equ 0003h
T2HLT_MODE3_POSITION                     equ 0003h
T2HLT_MODE3_SIZE                         equ 0001h
T2HLT_MODE3_LENGTH                       equ 0001h
T2HLT_MODE3_MASK                         equ 0008h
T2HLT_T2MODE_POSN                        equ 0000h
T2HLT_T2MODE_POSITION                    equ 0000h
T2HLT_T2MODE_SIZE                        equ 0004h
T2HLT_T2MODE_LENGTH                      equ 0004h
T2HLT_T2MODE_MASK                        equ 000Fh
T2HLT_T2CKSYNC_POSN                      equ 0005h
T2HLT_T2CKSYNC_POSITION                  equ 0005h
T2HLT_T2CKSYNC_SIZE                      equ 0001h
T2HLT_T2CKSYNC_LENGTH                    equ 0001h
T2HLT_T2CKSYNC_MASK                      equ 0020h
T2HLT_T2CKPOL_POSN                       equ 0006h
T2HLT_T2CKPOL_POSITION                   equ 0006h
T2HLT_T2CKPOL_SIZE                       equ 0001h
T2HLT_T2CKPOL_LENGTH                     equ 0001h
T2HLT_T2CKPOL_MASK                       equ 0040h
T2HLT_T2PSYNC_POSN                       equ 0007h
T2HLT_T2PSYNC_POSITION                   equ 0007h
T2HLT_T2PSYNC_SIZE                       equ 0001h
T2HLT_T2PSYNC_LENGTH                     equ 0001h
T2HLT_T2PSYNC_MASK                       equ 0080h
T2HLT_T2MODE0_POSN                       equ 0000h
T2HLT_T2MODE0_POSITION                   equ 0000h
T2HLT_T2MODE0_SIZE                       equ 0001h
T2HLT_T2MODE0_LENGTH                     equ 0001h
T2HLT_T2MODE0_MASK                       equ 0001h
T2HLT_T2MODE1_POSN                       equ 0001h
T2HLT_T2MODE1_POSITION                   equ 0001h
T2HLT_T2MODE1_SIZE                       equ 0001h
T2HLT_T2MODE1_LENGTH                     equ 0001h
T2HLT_T2MODE1_MASK                       equ 0002h
T2HLT_T2MODE2_POSN                       equ 0002h
T2HLT_T2MODE2_POSITION                   equ 0002h
T2HLT_T2MODE2_SIZE                       equ 0001h
T2HLT_T2MODE2_LENGTH                     equ 0001h
T2HLT_T2MODE2_MASK                       equ 0004h
T2HLT_T2MODE3_POSN                       equ 0003h
T2HLT_T2MODE3_POSITION                   equ 0003h
T2HLT_T2MODE3_SIZE                       equ 0001h
T2HLT_T2MODE3_LENGTH                     equ 0001h
T2HLT_T2MODE3_MASK                       equ 0008h

// Register: T2CLKCON
#define T2CLKCON T2CLKCON
T2CLKCON                                 equ 001Eh
// bitfield definitions
T2CLKCON_T2CS_POSN                       equ 0000h
T2CLKCON_T2CS_POSITION                   equ 0000h
T2CLKCON_T2CS_SIZE                       equ 0003h
T2CLKCON_T2CS_LENGTH                     equ 0003h
T2CLKCON_T2CS_MASK                       equ 0007h
T2CLKCON_T2CS0_POSN                      equ 0000h
T2CLKCON_T2CS0_POSITION                  equ 0000h
T2CLKCON_T2CS0_SIZE                      equ 0001h
T2CLKCON_T2CS0_LENGTH                    equ 0001h
T2CLKCON_T2CS0_MASK                      equ 0001h
T2CLKCON_T2CS1_POSN                      equ 0001h
T2CLKCON_T2CS1_POSITION                  equ 0001h
T2CLKCON_T2CS1_SIZE                      equ 0001h
T2CLKCON_T2CS1_LENGTH                    equ 0001h
T2CLKCON_T2CS1_MASK                      equ 0002h
T2CLKCON_T2CS2_POSN                      equ 0002h
T2CLKCON_T2CS2_POSITION                  equ 0002h
T2CLKCON_T2CS2_SIZE                      equ 0001h
T2CLKCON_T2CS2_LENGTH                    equ 0001h
T2CLKCON_T2CS2_MASK                      equ 0004h

// Register: T2RST
#define T2RST T2RST
T2RST                                    equ 001Fh
// bitfield definitions
T2RST_RSEL_POSN                          equ 0000h
T2RST_RSEL_POSITION                      equ 0000h
T2RST_RSEL_SIZE                          equ 0004h
T2RST_RSEL_LENGTH                        equ 0004h
T2RST_RSEL_MASK                          equ 000Fh
T2RST_RSEL0_POSN                         equ 0000h
T2RST_RSEL0_POSITION                     equ 0000h
T2RST_RSEL0_SIZE                         equ 0001h
T2RST_RSEL0_LENGTH                       equ 0001h
T2RST_RSEL0_MASK                         equ 0001h
T2RST_RSEL1_POSN                         equ 0001h
T2RST_RSEL1_POSITION                     equ 0001h
T2RST_RSEL1_SIZE                         equ 0001h
T2RST_RSEL1_LENGTH                       equ 0001h
T2RST_RSEL1_MASK                         equ 0002h
T2RST_RSEL2_POSN                         equ 0002h
T2RST_RSEL2_POSITION                     equ 0002h
T2RST_RSEL2_SIZE                         equ 0001h
T2RST_RSEL2_LENGTH                       equ 0001h
T2RST_RSEL2_MASK                         equ 0004h
T2RST_RSEL3_POSN                         equ 0003h
T2RST_RSEL3_POSITION                     equ 0003h
T2RST_RSEL3_SIZE                         equ 0001h
T2RST_RSEL3_LENGTH                       equ 0001h
T2RST_RSEL3_MASK                         equ 0008h
T2RST_T2RSEL_POSN                        equ 0000h
T2RST_T2RSEL_POSITION                    equ 0000h
T2RST_T2RSEL_SIZE                        equ 0004h
T2RST_T2RSEL_LENGTH                      equ 0004h
T2RST_T2RSEL_MASK                        equ 000Fh
T2RST_T2RSEL0_POSN                       equ 0000h
T2RST_T2RSEL0_POSITION                   equ 0000h
T2RST_T2RSEL0_SIZE                       equ 0001h
T2RST_T2RSEL0_LENGTH                     equ 0001h
T2RST_T2RSEL0_MASK                       equ 0001h
T2RST_T2RSEL1_POSN                       equ 0001h
T2RST_T2RSEL1_POSITION                   equ 0001h
T2RST_T2RSEL1_SIZE                       equ 0001h
T2RST_T2RSEL1_LENGTH                     equ 0001h
T2RST_T2RSEL1_MASK                       equ 0002h
T2RST_T2RSEL2_POSN                       equ 0002h
T2RST_T2RSEL2_POSITION                   equ 0002h
T2RST_T2RSEL2_SIZE                       equ 0001h
T2RST_T2RSEL2_LENGTH                     equ 0001h
T2RST_T2RSEL2_MASK                       equ 0004h
T2RST_T2RSEL3_POSN                       equ 0003h
T2RST_T2RSEL3_POSITION                   equ 0003h
T2RST_T2RSEL3_SIZE                       equ 0001h
T2RST_T2RSEL3_LENGTH                     equ 0001h
T2RST_T2RSEL3_MASK                       equ 0008h

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 008Ch
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

// Register: TRISC
#define TRISC TRISC
TRISC                                    equ 008Eh
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

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0091h
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
PIE2                                     equ 0092h
// bitfield definitions
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h
PIE2_TMR4IE_POSN                         equ 0001h
PIE2_TMR4IE_POSITION                     equ 0001h
PIE2_TMR4IE_SIZE                         equ 0001h
PIE2_TMR4IE_LENGTH                       equ 0001h
PIE2_TMR4IE_MASK                         equ 0002h
PIE2_TMR6IE_POSN                         equ 0002h
PIE2_TMR6IE_POSITION                     equ 0002h
PIE2_TMR6IE_SIZE                         equ 0001h
PIE2_TMR6IE_LENGTH                       equ 0001h
PIE2_TMR6IE_MASK                         equ 0004h
PIE2_C1IE_POSN                           equ 0005h
PIE2_C1IE_POSITION                       equ 0005h
PIE2_C1IE_SIZE                           equ 0001h
PIE2_C1IE_LENGTH                         equ 0001h
PIE2_C1IE_MASK                           equ 0020h
PIE2_C2IE_POSN                           equ 0006h
PIE2_C2IE_POSITION                       equ 0006h
PIE2_C2IE_SIZE                           equ 0001h
PIE2_C2IE_LENGTH                         equ 0001h
PIE2_C2IE_MASK                           equ 0040h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0093h
// bitfield definitions
PIE3_ZCDIE_POSN                          equ 0004h
PIE3_ZCDIE_POSITION                      equ 0004h
PIE3_ZCDIE_SIZE                          equ 0001h
PIE3_ZCDIE_LENGTH                        equ 0001h
PIE3_ZCDIE_MASK                          equ 0010h
PIE3_CWGIE_POSN                          equ 0005h
PIE3_CWGIE_POSITION                      equ 0005h
PIE3_CWGIE_SIZE                          equ 0001h
PIE3_CWGIE_LENGTH                        equ 0001h
PIE3_CWGIE_MASK                          equ 0020h

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 0094h
// bitfield definitions
PIE4_SMT1IE_POSN                         equ 0000h
PIE4_SMT1IE_POSITION                     equ 0000h
PIE4_SMT1IE_SIZE                         equ 0001h
PIE4_SMT1IE_LENGTH                       equ 0001h
PIE4_SMT1IE_MASK                         equ 0001h
PIE4_SMT1PRAIE_POSN                      equ 0001h
PIE4_SMT1PRAIE_POSITION                  equ 0001h
PIE4_SMT1PRAIE_SIZE                      equ 0001h
PIE4_SMT1PRAIE_LENGTH                    equ 0001h
PIE4_SMT1PRAIE_MASK                      equ 0002h
PIE4_SMT1PWAIE_POSN                      equ 0002h
PIE4_SMT1PWAIE_POSITION                  equ 0002h
PIE4_SMT1PWAIE_SIZE                      equ 0001h
PIE4_SMT1PWAIE_LENGTH                    equ 0001h
PIE4_SMT1PWAIE_MASK                      equ 0004h
PIE4_SMT2IE_POSN                         equ 0003h
PIE4_SMT2IE_POSITION                     equ 0003h
PIE4_SMT2IE_SIZE                         equ 0001h
PIE4_SMT2IE_LENGTH                       equ 0001h
PIE4_SMT2IE_MASK                         equ 0008h
PIE4_SMT2PRAIE_POSN                      equ 0004h
PIE4_SMT2PRAIE_POSITION                  equ 0004h
PIE4_SMT2PRAIE_SIZE                      equ 0001h
PIE4_SMT2PRAIE_LENGTH                    equ 0001h
PIE4_SMT2PRAIE_MASK                      equ 0010h
PIE4_SMT2PWAIE_POSN                      equ 0005h
PIE4_SMT2PWAIE_POSITION                  equ 0005h
PIE4_SMT2PWAIE_SIZE                      equ 0001h
PIE4_SMT2PWAIE_LENGTH                    equ 0001h
PIE4_SMT2PWAIE_MASK                      equ 0020h
PIE4_CRCIE_POSN                          equ 0006h
PIE4_CRCIE_POSITION                      equ 0006h
PIE4_CRCIE_SIZE                          equ 0001h
PIE4_CRCIE_LENGTH                        equ 0001h
PIE4_CRCIE_MASK                          equ 0040h
PIE4_SCANIE_POSN                         equ 0007h
PIE4_SCANIE_POSITION                     equ 0007h
PIE4_SCANIE_SIZE                         equ 0001h
PIE4_SCANIE_LENGTH                       equ 0001h
PIE4_SCANIE_MASK                         equ 0080h

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
OPTION_REG                               equ 0095h
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
OPTION_REG_TMR0SE_POSN                   equ 0004h
OPTION_REG_TMR0SE_POSITION               equ 0004h
OPTION_REG_TMR0SE_SIZE                   equ 0001h
OPTION_REG_TMR0SE_LENGTH                 equ 0001h
OPTION_REG_TMR0SE_MASK                   equ 0010h
OPTION_REG_TMR0CS_POSN                   equ 0005h
OPTION_REG_TMR0CS_POSITION               equ 0005h
OPTION_REG_TMR0CS_SIZE                   equ 0001h
OPTION_REG_TMR0CS_LENGTH                 equ 0001h
OPTION_REG_TMR0CS_MASK                   equ 0020h
OPTION_REG_INTEDG_POSN                   equ 0006h
OPTION_REG_INTEDG_POSITION               equ 0006h
OPTION_REG_INTEDG_SIZE                   equ 0001h
OPTION_REG_INTEDG_LENGTH                 equ 0001h
OPTION_REG_INTEDG_MASK                   equ 0040h
OPTION_REG_nWPUEN_POSN                   equ 0007h
OPTION_REG_nWPUEN_POSITION               equ 0007h
OPTION_REG_nWPUEN_SIZE                   equ 0001h
OPTION_REG_nWPUEN_LENGTH                 equ 0001h
OPTION_REG_nWPUEN_MASK                   equ 0080h
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

// Register: PCON
#define PCON PCON
PCON                                     equ 0096h
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
PCON_nRI_POSN                            equ 0002h
PCON_nRI_POSITION                        equ 0002h
PCON_nRI_SIZE                            equ 0001h
PCON_nRI_LENGTH                          equ 0001h
PCON_nRI_MASK                            equ 0004h
PCON_nRMCLR_POSN                         equ 0003h
PCON_nRMCLR_POSITION                     equ 0003h
PCON_nRMCLR_SIZE                         equ 0001h
PCON_nRMCLR_LENGTH                       equ 0001h
PCON_nRMCLR_MASK                         equ 0008h
PCON_nRWDT_POSN                          equ 0004h
PCON_nRWDT_POSITION                      equ 0004h
PCON_nRWDT_SIZE                          equ 0001h
PCON_nRWDT_LENGTH                        equ 0001h
PCON_nRWDT_MASK                          equ 0010h
PCON_nWDTWV_POSN                         equ 0005h
PCON_nWDTWV_POSITION                     equ 0005h
PCON_nWDTWV_SIZE                         equ 0001h
PCON_nWDTWV_LENGTH                       equ 0001h
PCON_nWDTWV_MASK                         equ 0020h
PCON_STKUNF_POSN                         equ 0006h
PCON_STKUNF_POSITION                     equ 0006h
PCON_STKUNF_SIZE                         equ 0001h
PCON_STKUNF_LENGTH                       equ 0001h
PCON_STKUNF_MASK                         equ 0040h
PCON_STKOVF_POSN                         equ 0007h
PCON_STKOVF_POSITION                     equ 0007h
PCON_STKOVF_SIZE                         equ 0001h
PCON_STKOVF_LENGTH                       equ 0001h
PCON_STKOVF_MASK                         equ 0080h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0098h
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

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0099h
// bitfield definitions
OSCCON_SCS_POSN                          equ 0000h
OSCCON_SCS_POSITION                      equ 0000h
OSCCON_SCS_SIZE                          equ 0002h
OSCCON_SCS_LENGTH                        equ 0002h
OSCCON_SCS_MASK                          equ 0003h
OSCCON_IRCF_POSN                         equ 0003h
OSCCON_IRCF_POSITION                     equ 0003h
OSCCON_IRCF_SIZE                         equ 0004h
OSCCON_IRCF_LENGTH                       equ 0004h
OSCCON_IRCF_MASK                         equ 0078h
OSCCON_SPLLEN_POSN                       equ 0007h
OSCCON_SPLLEN_POSITION                   equ 0007h
OSCCON_SPLLEN_SIZE                       equ 0001h
OSCCON_SPLLEN_LENGTH                     equ 0001h
OSCCON_SPLLEN_MASK                       equ 0080h
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
OSCCON_IRCF0_POSN                        equ 0003h
OSCCON_IRCF0_POSITION                    equ 0003h
OSCCON_IRCF0_SIZE                        equ 0001h
OSCCON_IRCF0_LENGTH                      equ 0001h
OSCCON_IRCF0_MASK                        equ 0008h
OSCCON_IRCF1_POSN                        equ 0004h
OSCCON_IRCF1_POSITION                    equ 0004h
OSCCON_IRCF1_SIZE                        equ 0001h
OSCCON_IRCF1_LENGTH                      equ 0001h
OSCCON_IRCF1_MASK                        equ 0010h
OSCCON_IRCF2_POSN                        equ 0005h
OSCCON_IRCF2_POSITION                    equ 0005h
OSCCON_IRCF2_SIZE                        equ 0001h
OSCCON_IRCF2_LENGTH                      equ 0001h
OSCCON_IRCF2_MASK                        equ 0020h
OSCCON_IRCF3_POSN                        equ 0006h
OSCCON_IRCF3_POSITION                    equ 0006h
OSCCON_IRCF3_SIZE                        equ 0001h
OSCCON_IRCF3_LENGTH                      equ 0001h
OSCCON_IRCF3_MASK                        equ 0040h

// Register: OSCSTAT
#define OSCSTAT OSCSTAT
OSCSTAT                                  equ 009Ah
// bitfield definitions
OSCSTAT_HFIOFS_POSN                      equ 0000h
OSCSTAT_HFIOFS_POSITION                  equ 0000h
OSCSTAT_HFIOFS_SIZE                      equ 0001h
OSCSTAT_HFIOFS_LENGTH                    equ 0001h
OSCSTAT_HFIOFS_MASK                      equ 0001h
OSCSTAT_LFIOFR_POSN                      equ 0001h
OSCSTAT_LFIOFR_POSITION                  equ 0001h
OSCSTAT_LFIOFR_SIZE                      equ 0001h
OSCSTAT_LFIOFR_LENGTH                    equ 0001h
OSCSTAT_LFIOFR_MASK                      equ 0002h
OSCSTAT_MFIOFR_POSN                      equ 0002h
OSCSTAT_MFIOFR_POSITION                  equ 0002h
OSCSTAT_MFIOFR_SIZE                      equ 0001h
OSCSTAT_MFIOFR_LENGTH                    equ 0001h
OSCSTAT_MFIOFR_MASK                      equ 0004h
OSCSTAT_HFIOFL_POSN                      equ 0003h
OSCSTAT_HFIOFL_POSITION                  equ 0003h
OSCSTAT_HFIOFL_SIZE                      equ 0001h
OSCSTAT_HFIOFL_LENGTH                    equ 0001h
OSCSTAT_HFIOFL_MASK                      equ 0008h
OSCSTAT_HFIOFR_POSN                      equ 0004h
OSCSTAT_HFIOFR_POSITION                  equ 0004h
OSCSTAT_HFIOFR_SIZE                      equ 0001h
OSCSTAT_HFIOFR_LENGTH                    equ 0001h
OSCSTAT_HFIOFR_MASK                      equ 0010h
OSCSTAT_PLLR_POSN                        equ 0006h
OSCSTAT_PLLR_POSITION                    equ 0006h
OSCSTAT_PLLR_SIZE                        equ 0001h
OSCSTAT_PLLR_LENGTH                      equ 0001h
OSCSTAT_PLLR_MASK                        equ 0040h

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 009Bh
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 009Ch
// bitfield definitions
ADRESH_ADRESH_POSN                       equ 0000h
ADRESH_ADRESH_POSITION                   equ 0000h
ADRESH_ADRESH_SIZE                       equ 0008h
ADRESH_ADRESH_LENGTH                     equ 0008h
ADRESH_ADRESH_MASK                       equ 00FFh

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 009Dh
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
ADCON0_CHS_SIZE                          equ 0005h
ADCON0_CHS_LENGTH                        equ 0005h
ADCON0_CHS_MASK                          equ 007Ch
ADCON0_ADGO_POSN                         equ 0001h
ADCON0_ADGO_POSITION                     equ 0001h
ADCON0_ADGO_SIZE                         equ 0001h
ADCON0_ADGO_LENGTH                       equ 0001h
ADCON0_ADGO_MASK                         equ 0002h
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

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Eh
// bitfield definitions
ADCON1_ADPREF_POSN                       equ 0000h
ADCON1_ADPREF_POSITION                   equ 0000h
ADCON1_ADPREF_SIZE                       equ 0002h
ADCON1_ADPREF_LENGTH                     equ 0002h
ADCON1_ADPREF_MASK                       equ 0003h
ADCON1_ADCS_POSN                         equ 0004h
ADCON1_ADCS_POSITION                     equ 0004h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0070h
ADCON1_ADFM_POSN                         equ 0007h
ADCON1_ADFM_POSITION                     equ 0007h
ADCON1_ADFM_SIZE                         equ 0001h
ADCON1_ADFM_LENGTH                       equ 0001h
ADCON1_ADFM_MASK                         equ 0080h
ADCON1_ADPREF0_POSN                      equ 0000h
ADCON1_ADPREF0_POSITION                  equ 0000h
ADCON1_ADPREF0_SIZE                      equ 0001h
ADCON1_ADPREF0_LENGTH                    equ 0001h
ADCON1_ADPREF0_MASK                      equ 0001h
ADCON1_ADPREF1_POSN                      equ 0001h
ADCON1_ADPREF1_POSITION                  equ 0001h
ADCON1_ADPREF1_SIZE                      equ 0001h
ADCON1_ADPREF1_LENGTH                    equ 0001h
ADCON1_ADPREF1_MASK                      equ 0002h
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

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 009Fh
// bitfield definitions
ADCON2_TRIGSEL_POSN                      equ 0004h
ADCON2_TRIGSEL_POSITION                  equ 0004h
ADCON2_TRIGSEL_SIZE                      equ 0004h
ADCON2_TRIGSEL_LENGTH                    equ 0004h
ADCON2_TRIGSEL_MASK                      equ 00F0h
ADCON2_TRIGSEL0_POSN                     equ 0004h
ADCON2_TRIGSEL0_POSITION                 equ 0004h
ADCON2_TRIGSEL0_SIZE                     equ 0001h
ADCON2_TRIGSEL0_LENGTH                   equ 0001h
ADCON2_TRIGSEL0_MASK                     equ 0010h
ADCON2_TRIGSEL1_POSN                     equ 0005h
ADCON2_TRIGSEL1_POSITION                 equ 0005h
ADCON2_TRIGSEL1_SIZE                     equ 0001h
ADCON2_TRIGSEL1_LENGTH                   equ 0001h
ADCON2_TRIGSEL1_MASK                     equ 0020h
ADCON2_TRIGSEL2_POSN                     equ 0006h
ADCON2_TRIGSEL2_POSITION                 equ 0006h
ADCON2_TRIGSEL2_SIZE                     equ 0001h
ADCON2_TRIGSEL2_LENGTH                   equ 0001h
ADCON2_TRIGSEL2_MASK                     equ 0040h
ADCON2_TRIGSEL3_POSN                     equ 0007h
ADCON2_TRIGSEL3_POSITION                 equ 0007h
ADCON2_TRIGSEL3_SIZE                     equ 0001h
ADCON2_TRIGSEL3_LENGTH                   equ 0001h
ADCON2_TRIGSEL3_MASK                     equ 0080h

// Register: LATA
#define LATA LATA
LATA                                     equ 010Ch
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

// Register: LATC
#define LATC LATC
LATC                                     equ 010Eh
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

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0111h
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
CM1CON1                                  equ 0112h
// bitfield definitions
CM1CON1_C1NCH0_POSN                      equ 0000h
CM1CON1_C1NCH0_POSITION                  equ 0000h
CM1CON1_C1NCH0_SIZE                      equ 0001h
CM1CON1_C1NCH0_LENGTH                    equ 0001h
CM1CON1_C1NCH0_MASK                      equ 0001h
CM1CON1_C1NCH1_POSN                      equ 0001h
CM1CON1_C1NCH1_POSITION                  equ 0001h
CM1CON1_C1NCH1_SIZE                      equ 0001h
CM1CON1_C1NCH1_LENGTH                    equ 0001h
CM1CON1_C1NCH1_MASK                      equ 0002h
CM1CON1_C1NCH2_POSN                      equ 0002h
CM1CON1_C1NCH2_POSITION                  equ 0002h
CM1CON1_C1NCH2_SIZE                      equ 0001h
CM1CON1_C1NCH2_LENGTH                    equ 0001h
CM1CON1_C1NCH2_MASK                      equ 0004h
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
CM1CON1_C1NCH_POSN                       equ 0000h
CM1CON1_C1NCH_POSITION                   equ 0000h
CM1CON1_C1NCH_SIZE                       equ 0003h
CM1CON1_C1NCH_LENGTH                     equ 0003h
CM1CON1_C1NCH_MASK                       equ 0007h
CM1CON1_C1PCH_POSN                       equ 0004h
CM1CON1_C1PCH_POSITION                   equ 0004h
CM1CON1_C1PCH_SIZE                       equ 0002h
CM1CON1_C1PCH_LENGTH                     equ 0002h
CM1CON1_C1PCH_MASK                       equ 0030h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0113h
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
CM2CON1                                  equ 0114h
// bitfield definitions
CM2CON1_C2NCH0_POSN                      equ 0000h
CM2CON1_C2NCH0_POSITION                  equ 0000h
CM2CON1_C2NCH0_SIZE                      equ 0001h
CM2CON1_C2NCH0_LENGTH                    equ 0001h
CM2CON1_C2NCH0_MASK                      equ 0001h
CM2CON1_C2NCH1_POSN                      equ 0001h
CM2CON1_C2NCH1_POSITION                  equ 0001h
CM2CON1_C2NCH1_SIZE                      equ 0001h
CM2CON1_C2NCH1_LENGTH                    equ 0001h
CM2CON1_C2NCH1_MASK                      equ 0002h
CM2CON1_C2NCH2_POSN                      equ 0002h
CM2CON1_C2NCH2_POSITION                  equ 0002h
CM2CON1_C2NCH2_SIZE                      equ 0001h
CM2CON1_C2NCH2_LENGTH                    equ 0001h
CM2CON1_C2NCH2_MASK                      equ 0004h
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
CM2CON1_C2NCH_POSN                       equ 0000h
CM2CON1_C2NCH_POSITION                   equ 0000h
CM2CON1_C2NCH_SIZE                       equ 0003h
CM2CON1_C2NCH_LENGTH                     equ 0003h
CM2CON1_C2NCH_MASK                       equ 0007h
CM2CON1_C2PCH_POSN                       equ 0004h
CM2CON1_C2PCH_POSITION                   equ 0004h
CM2CON1_C2PCH_SIZE                       equ 0002h
CM2CON1_C2PCH_LENGTH                     equ 0002h
CM2CON1_C2PCH_MASK                       equ 0030h

// Register: CMOUT
#define CMOUT CMOUT
CMOUT                                    equ 0115h
// bitfield definitions
CMOUT_MC1OUT_POSN                        equ 0000h
CMOUT_MC1OUT_POSITION                    equ 0000h
CMOUT_MC1OUT_SIZE                        equ 0001h
CMOUT_MC1OUT_LENGTH                      equ 0001h
CMOUT_MC1OUT_MASK                        equ 0001h
CMOUT_MC2OUT_POSN                        equ 0001h
CMOUT_MC2OUT_POSITION                    equ 0001h
CMOUT_MC2OUT_SIZE                        equ 0001h
CMOUT_MC2OUT_LENGTH                      equ 0001h
CMOUT_MC2OUT_MASK                        equ 0002h

// Register: BORCON
#define BORCON BORCON
BORCON                                   equ 0116h
// bitfield definitions
BORCON_BORRDY_POSN                       equ 0000h
BORCON_BORRDY_POSITION                   equ 0000h
BORCON_BORRDY_SIZE                       equ 0001h
BORCON_BORRDY_LENGTH                     equ 0001h
BORCON_BORRDY_MASK                       equ 0001h
BORCON_BORFS_POSN                        equ 0006h
BORCON_BORFS_POSITION                    equ 0006h
BORCON_BORFS_SIZE                        equ 0001h
BORCON_BORFS_LENGTH                      equ 0001h
BORCON_BORFS_MASK                        equ 0040h
BORCON_SBOREN_POSN                       equ 0007h
BORCON_SBOREN_POSITION                   equ 0007h
BORCON_SBOREN_SIZE                       equ 0001h
BORCON_SBOREN_LENGTH                     equ 0001h
BORCON_SBOREN_MASK                       equ 0080h

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 0117h
// bitfield definitions
FVRCON_ADFVR_POSN                        equ 0000h
FVRCON_ADFVR_POSITION                    equ 0000h
FVRCON_ADFVR_SIZE                        equ 0002h
FVRCON_ADFVR_LENGTH                      equ 0002h
FVRCON_ADFVR_MASK                        equ 0003h
FVRCON_CDAFVR_POSN                       equ 0002h
FVRCON_CDAFVR_POSITION                   equ 0002h
FVRCON_CDAFVR_SIZE                       equ 0002h
FVRCON_CDAFVR_LENGTH                     equ 0002h
FVRCON_CDAFVR_MASK                       equ 000Ch
FVRCON_TSRNG_POSN                        equ 0004h
FVRCON_TSRNG_POSITION                    equ 0004h
FVRCON_TSRNG_SIZE                        equ 0001h
FVRCON_TSRNG_LENGTH                      equ 0001h
FVRCON_TSRNG_MASK                        equ 0010h
FVRCON_TSEN_POSN                         equ 0005h
FVRCON_TSEN_POSITION                     equ 0005h
FVRCON_TSEN_SIZE                         equ 0001h
FVRCON_TSEN_LENGTH                       equ 0001h
FVRCON_TSEN_MASK                         equ 0020h
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
FVRCON_ADFVR0_POSN                       equ 0000h
FVRCON_ADFVR0_POSITION                   equ 0000h
FVRCON_ADFVR0_SIZE                       equ 0001h
FVRCON_ADFVR0_LENGTH                     equ 0001h
FVRCON_ADFVR0_MASK                       equ 0001h
FVRCON_ADFVR1_POSN                       equ 0001h
FVRCON_ADFVR1_POSITION                   equ 0001h
FVRCON_ADFVR1_SIZE                       equ 0001h
FVRCON_ADFVR1_LENGTH                     equ 0001h
FVRCON_ADFVR1_MASK                       equ 0002h
FVRCON_CDAFVR0_POSN                      equ 0002h
FVRCON_CDAFVR0_POSITION                  equ 0002h
FVRCON_CDAFVR0_SIZE                      equ 0001h
FVRCON_CDAFVR0_LENGTH                    equ 0001h
FVRCON_CDAFVR0_MASK                      equ 0004h
FVRCON_CDAFVR1_POSN                      equ 0003h
FVRCON_CDAFVR1_POSITION                  equ 0003h
FVRCON_CDAFVR1_SIZE                      equ 0001h
FVRCON_CDAFVR1_LENGTH                    equ 0001h
FVRCON_CDAFVR1_MASK                      equ 0008h

// Register: DAC1CON0
#define DAC1CON0 DAC1CON0
DAC1CON0                                 equ 0118h
// bitfield definitions
DAC1CON0_DAC1PSS_POSN                    equ 0002h
DAC1CON0_DAC1PSS_POSITION                equ 0002h
DAC1CON0_DAC1PSS_SIZE                    equ 0002h
DAC1CON0_DAC1PSS_LENGTH                  equ 0002h
DAC1CON0_DAC1PSS_MASK                    equ 000Ch
DAC1CON0_DAC1OE_POSN                     equ 0005h
DAC1CON0_DAC1OE_POSITION                 equ 0005h
DAC1CON0_DAC1OE_SIZE                     equ 0001h
DAC1CON0_DAC1OE_LENGTH                   equ 0001h
DAC1CON0_DAC1OE_MASK                     equ 0020h
DAC1CON0_DAC1EN_POSN                     equ 0007h
DAC1CON0_DAC1EN_POSITION                 equ 0007h
DAC1CON0_DAC1EN_SIZE                     equ 0001h
DAC1CON0_DAC1EN_LENGTH                   equ 0001h
DAC1CON0_DAC1EN_MASK                     equ 0080h
DAC1CON0_D1PSS0_POSN                     equ 0002h
DAC1CON0_D1PSS0_POSITION                 equ 0002h
DAC1CON0_D1PSS0_SIZE                     equ 0001h
DAC1CON0_D1PSS0_LENGTH                   equ 0001h
DAC1CON0_D1PSS0_MASK                     equ 0004h
DAC1CON0_D1PSS1_POSN                     equ 0003h
DAC1CON0_D1PSS1_POSITION                 equ 0003h
DAC1CON0_D1PSS1_SIZE                     equ 0001h
DAC1CON0_D1PSS1_LENGTH                   equ 0001h
DAC1CON0_D1PSS1_MASK                     equ 0008h

// Register: DAC1CON1
#define DAC1CON1 DAC1CON1
DAC1CON1                                 equ 0119h
// bitfield definitions
DAC1CON1_DAC1R_POSN                      equ 0000h
DAC1CON1_DAC1R_POSITION                  equ 0000h
DAC1CON1_DAC1R_SIZE                      equ 0008h
DAC1CON1_DAC1R_LENGTH                    equ 0008h
DAC1CON1_DAC1R_MASK                      equ 00FFh
DAC1CON1_DAC1R0_POSN                     equ 0000h
DAC1CON1_DAC1R0_POSITION                 equ 0000h
DAC1CON1_DAC1R0_SIZE                     equ 0001h
DAC1CON1_DAC1R0_LENGTH                   equ 0001h
DAC1CON1_DAC1R0_MASK                     equ 0001h
DAC1CON1_DAC1R1_POSN                     equ 0001h
DAC1CON1_DAC1R1_POSITION                 equ 0001h
DAC1CON1_DAC1R1_SIZE                     equ 0001h
DAC1CON1_DAC1R1_LENGTH                   equ 0001h
DAC1CON1_DAC1R1_MASK                     equ 0002h
DAC1CON1_DAC1R2_POSN                     equ 0002h
DAC1CON1_DAC1R2_POSITION                 equ 0002h
DAC1CON1_DAC1R2_SIZE                     equ 0001h
DAC1CON1_DAC1R2_LENGTH                   equ 0001h
DAC1CON1_DAC1R2_MASK                     equ 0004h
DAC1CON1_DAC1R3_POSN                     equ 0003h
DAC1CON1_DAC1R3_POSITION                 equ 0003h
DAC1CON1_DAC1R3_SIZE                     equ 0001h
DAC1CON1_DAC1R3_LENGTH                   equ 0001h
DAC1CON1_DAC1R3_MASK                     equ 0008h
DAC1CON1_DAC1R4_POSN                     equ 0004h
DAC1CON1_DAC1R4_POSITION                 equ 0004h
DAC1CON1_DAC1R4_SIZE                     equ 0001h
DAC1CON1_DAC1R4_LENGTH                   equ 0001h
DAC1CON1_DAC1R4_MASK                     equ 0010h
DAC1CON1_DAC1R5_POSN                     equ 0005h
DAC1CON1_DAC1R5_POSITION                 equ 0005h
DAC1CON1_DAC1R5_SIZE                     equ 0001h
DAC1CON1_DAC1R5_LENGTH                   equ 0001h
DAC1CON1_DAC1R5_MASK                     equ 0020h
DAC1CON1_DAC1R6_POSN                     equ 0006h
DAC1CON1_DAC1R6_POSITION                 equ 0006h
DAC1CON1_DAC1R6_SIZE                     equ 0001h
DAC1CON1_DAC1R6_LENGTH                   equ 0001h
DAC1CON1_DAC1R6_MASK                     equ 0040h
DAC1CON1_DAC1R7_POSN                     equ 0007h
DAC1CON1_DAC1R7_POSITION                 equ 0007h
DAC1CON1_DAC1R7_SIZE                     equ 0001h
DAC1CON1_DAC1R7_LENGTH                   equ 0001h
DAC1CON1_DAC1R7_MASK                     equ 0080h

// Register: ZCD1CON
#define ZCD1CON ZCD1CON
ZCD1CON                                  equ 011Ch
// bitfield definitions
ZCD1CON_ZCD1INTN_POSN                    equ 0000h
ZCD1CON_ZCD1INTN_POSITION                equ 0000h
ZCD1CON_ZCD1INTN_SIZE                    equ 0001h
ZCD1CON_ZCD1INTN_LENGTH                  equ 0001h
ZCD1CON_ZCD1INTN_MASK                    equ 0001h
ZCD1CON_ZCD1INTP_POSN                    equ 0001h
ZCD1CON_ZCD1INTP_POSITION                equ 0001h
ZCD1CON_ZCD1INTP_SIZE                    equ 0001h
ZCD1CON_ZCD1INTP_LENGTH                  equ 0001h
ZCD1CON_ZCD1INTP_MASK                    equ 0002h
ZCD1CON_ZCD1POL_POSN                     equ 0004h
ZCD1CON_ZCD1POL_POSITION                 equ 0004h
ZCD1CON_ZCD1POL_SIZE                     equ 0001h
ZCD1CON_ZCD1POL_LENGTH                   equ 0001h
ZCD1CON_ZCD1POL_MASK                     equ 0010h
ZCD1CON_ZCD1OUT_POSN                     equ 0005h
ZCD1CON_ZCD1OUT_POSITION                 equ 0005h
ZCD1CON_ZCD1OUT_SIZE                     equ 0001h
ZCD1CON_ZCD1OUT_LENGTH                   equ 0001h
ZCD1CON_ZCD1OUT_MASK                     equ 0020h
ZCD1CON_ZCD1OE_POSN                      equ 0006h
ZCD1CON_ZCD1OE_POSITION                  equ 0006h
ZCD1CON_ZCD1OE_SIZE                      equ 0001h
ZCD1CON_ZCD1OE_LENGTH                    equ 0001h
ZCD1CON_ZCD1OE_MASK                      equ 0040h
ZCD1CON_ZCD1EN_POSN                      equ 0007h
ZCD1CON_ZCD1EN_POSITION                  equ 0007h
ZCD1CON_ZCD1EN_SIZE                      equ 0001h
ZCD1CON_ZCD1EN_LENGTH                    equ 0001h
ZCD1CON_ZCD1EN_MASK                      equ 0080h

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 011Dh
// bitfield definitions
APFCON_CCP2SEL_POSN                      equ 0001h
APFCON_CCP2SEL_POSITION                  equ 0001h
APFCON_CCP2SEL_SIZE                      equ 0001h
APFCON_CCP2SEL_LENGTH                    equ 0001h
APFCON_CCP2SEL_MASK                      equ 0002h
APFCON_T1GSEL_POSN                       equ 0003h
APFCON_T1GSEL_POSITION                   equ 0003h
APFCON_T1GSEL_SIZE                       equ 0001h
APFCON_T1GSEL_LENGTH                     equ 0001h
APFCON_T1GSEL_MASK                       equ 0008h

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 018Ch
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
ANSELA_ANSELA_POSN                       equ 0000h
ANSELA_ANSELA_POSITION                   equ 0000h
ANSELA_ANSELA_SIZE                       equ 0006h
ANSELA_ANSELA_LENGTH                     equ 0006h
ANSELA_ANSELA_MASK                       equ 003Fh

// Register: ANSELC
#define ANSELC ANSELC
ANSELC                                   equ 018Eh
// bitfield definitions
ANSELC_ANSC0_POSN                        equ 0000h
ANSELC_ANSC0_POSITION                    equ 0000h
ANSELC_ANSC0_SIZE                        equ 0001h
ANSELC_ANSC0_LENGTH                      equ 0001h
ANSELC_ANSC0_MASK                        equ 0001h
ANSELC_ANSC1_POSN                        equ 0001h
ANSELC_ANSC1_POSITION                    equ 0001h
ANSELC_ANSC1_SIZE                        equ 0001h
ANSELC_ANSC1_LENGTH                      equ 0001h
ANSELC_ANSC1_MASK                        equ 0002h
ANSELC_ANSC2_POSN                        equ 0002h
ANSELC_ANSC2_POSITION                    equ 0002h
ANSELC_ANSC2_SIZE                        equ 0001h
ANSELC_ANSC2_LENGTH                      equ 0001h
ANSELC_ANSC2_MASK                        equ 0004h
ANSELC_ANSC3_POSN                        equ 0003h
ANSELC_ANSC3_POSITION                    equ 0003h
ANSELC_ANSC3_SIZE                        equ 0001h
ANSELC_ANSC3_LENGTH                      equ 0001h
ANSELC_ANSC3_MASK                        equ 0008h
ANSELC_ANSELC_POSN                       equ 0000h
ANSELC_ANSELC_POSITION                   equ 0000h
ANSELC_ANSELC_SIZE                       equ 0008h
ANSELC_ANSELC_LENGTH                     equ 0008h
ANSELC_ANSELC_MASK                       equ 00FFh

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 0191h
// bitfield definitions
PMADRL_PMADRL_POSN                       equ 0000h
PMADRL_PMADRL_POSITION                   equ 0000h
PMADRL_PMADRL_SIZE                       equ 0008h
PMADRL_PMADRL_LENGTH                     equ 0008h
PMADRL_PMADRL_MASK                       equ 00FFh

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 0192h
// bitfield definitions
PMADRH_PMADRH_POSN                       equ 0000h
PMADRH_PMADRH_POSITION                   equ 0000h
PMADRH_PMADRH_SIZE                       equ 0007h
PMADRH_PMADRH_LENGTH                     equ 0007h
PMADRH_PMADRH_MASK                       equ 007Fh

// Register: PMDATL
#define PMDATL PMDATL
PMDATL                                   equ 0193h
// bitfield definitions
PMDATL_PMDATL_POSN                       equ 0000h
PMDATL_PMDATL_POSITION                   equ 0000h
PMDATL_PMDATL_SIZE                       equ 0008h
PMDATL_PMDATL_LENGTH                     equ 0008h
PMDATL_PMDATL_MASK                       equ 00FFh

// Register: PMDATH
#define PMDATH PMDATH
PMDATH                                   equ 0194h
// bitfield definitions
PMDATH_PMDATH_POSN                       equ 0000h
PMDATH_PMDATH_POSITION                   equ 0000h
PMDATH_PMDATH_SIZE                       equ 0006h
PMDATH_PMDATH_LENGTH                     equ 0006h
PMDATH_PMDATH_MASK                       equ 003Fh

// Register: PMCON1
#define PMCON1 PMCON1
PMCON1                                   equ 0195h
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
PMCON1_WRERR_POSN                        equ 0003h
PMCON1_WRERR_POSITION                    equ 0003h
PMCON1_WRERR_SIZE                        equ 0001h
PMCON1_WRERR_LENGTH                      equ 0001h
PMCON1_WRERR_MASK                        equ 0008h
PMCON1_FREE_POSN                         equ 0004h
PMCON1_FREE_POSITION                     equ 0004h
PMCON1_FREE_SIZE                         equ 0001h
PMCON1_FREE_LENGTH                       equ 0001h
PMCON1_FREE_MASK                         equ 0010h
PMCON1_LWLO_POSN                         equ 0005h
PMCON1_LWLO_POSITION                     equ 0005h
PMCON1_LWLO_SIZE                         equ 0001h
PMCON1_LWLO_LENGTH                       equ 0001h
PMCON1_LWLO_MASK                         equ 0020h
PMCON1_CFGS_POSN                         equ 0006h
PMCON1_CFGS_POSITION                     equ 0006h
PMCON1_CFGS_SIZE                         equ 0001h
PMCON1_CFGS_LENGTH                       equ 0001h
PMCON1_CFGS_MASK                         equ 0040h

// Register: PMCON2
#define PMCON2 PMCON2
PMCON2                                   equ 0196h
// bitfield definitions
PMCON2_PMCON2_POSN                       equ 0000h
PMCON2_PMCON2_POSITION                   equ 0000h
PMCON2_PMCON2_SIZE                       equ 0008h
PMCON2_PMCON2_LENGTH                     equ 0008h
PMCON2_PMCON2_MASK                       equ 00FFh

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 020Ch
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
WPUA_WPUA_POSN                           equ 0000h
WPUA_WPUA_POSITION                       equ 0000h
WPUA_WPUA_SIZE                           equ 0006h
WPUA_WPUA_LENGTH                         equ 0006h
WPUA_WPUA_MASK                           equ 003Fh

// Register: WPUC
#define WPUC WPUC
WPUC                                     equ 020Eh
// bitfield definitions
WPUC_WPUC0_POSN                          equ 0000h
WPUC_WPUC0_POSITION                      equ 0000h
WPUC_WPUC0_SIZE                          equ 0001h
WPUC_WPUC0_LENGTH                        equ 0001h
WPUC_WPUC0_MASK                          equ 0001h
WPUC_WPUC1_POSN                          equ 0001h
WPUC_WPUC1_POSITION                      equ 0001h
WPUC_WPUC1_SIZE                          equ 0001h
WPUC_WPUC1_LENGTH                        equ 0001h
WPUC_WPUC1_MASK                          equ 0002h
WPUC_WPUC2_POSN                          equ 0002h
WPUC_WPUC2_POSITION                      equ 0002h
WPUC_WPUC2_SIZE                          equ 0001h
WPUC_WPUC2_LENGTH                        equ 0001h
WPUC_WPUC2_MASK                          equ 0004h
WPUC_WPUC3_POSN                          equ 0003h
WPUC_WPUC3_POSITION                      equ 0003h
WPUC_WPUC3_SIZE                          equ 0001h
WPUC_WPUC3_LENGTH                        equ 0001h
WPUC_WPUC3_MASK                          equ 0008h
WPUC_WPUC4_POSN                          equ 0004h
WPUC_WPUC4_POSITION                      equ 0004h
WPUC_WPUC4_SIZE                          equ 0001h
WPUC_WPUC4_LENGTH                        equ 0001h
WPUC_WPUC4_MASK                          equ 0010h
WPUC_WPUC5_POSN                          equ 0005h
WPUC_WPUC5_POSITION                      equ 0005h
WPUC_WPUC5_SIZE                          equ 0001h
WPUC_WPUC5_LENGTH                        equ 0001h
WPUC_WPUC5_MASK                          equ 0020h
WPUC_WPUA_POSN                           equ 0000h
WPUC_WPUA_POSITION                       equ 0000h
WPUC_WPUA_SIZE                           equ 0006h
WPUC_WPUA_LENGTH                         equ 0006h
WPUC_WPUA_MASK                           equ 003Fh

// Register: ODCONA
#define ODCONA ODCONA
ODCONA                                   equ 028Ch
// bitfield definitions
ODCONA_ODA0_POSN                         equ 0000h
ODCONA_ODA0_POSITION                     equ 0000h
ODCONA_ODA0_SIZE                         equ 0001h
ODCONA_ODA0_LENGTH                       equ 0001h
ODCONA_ODA0_MASK                         equ 0001h
ODCONA_ODA1_POSN                         equ 0001h
ODCONA_ODA1_POSITION                     equ 0001h
ODCONA_ODA1_SIZE                         equ 0001h
ODCONA_ODA1_LENGTH                       equ 0001h
ODCONA_ODA1_MASK                         equ 0002h
ODCONA_ODA2_POSN                         equ 0002h
ODCONA_ODA2_POSITION                     equ 0002h
ODCONA_ODA2_SIZE                         equ 0001h
ODCONA_ODA2_LENGTH                       equ 0001h
ODCONA_ODA2_MASK                         equ 0004h
ODCONA_ODA4_POSN                         equ 0004h
ODCONA_ODA4_POSITION                     equ 0004h
ODCONA_ODA4_SIZE                         equ 0001h
ODCONA_ODA4_LENGTH                       equ 0001h
ODCONA_ODA4_MASK                         equ 0010h
ODCONA_ODA5_POSN                         equ 0005h
ODCONA_ODA5_POSITION                     equ 0005h
ODCONA_ODA5_SIZE                         equ 0001h
ODCONA_ODA5_LENGTH                       equ 0001h
ODCONA_ODA5_MASK                         equ 0020h

// Register: ODCONC
#define ODCONC ODCONC
ODCONC                                   equ 028Eh
// bitfield definitions
ODCONC_ODC0_POSN                         equ 0000h
ODCONC_ODC0_POSITION                     equ 0000h
ODCONC_ODC0_SIZE                         equ 0001h
ODCONC_ODC0_LENGTH                       equ 0001h
ODCONC_ODC0_MASK                         equ 0001h
ODCONC_ODC1_POSN                         equ 0001h
ODCONC_ODC1_POSITION                     equ 0001h
ODCONC_ODC1_SIZE                         equ 0001h
ODCONC_ODC1_LENGTH                       equ 0001h
ODCONC_ODC1_MASK                         equ 0002h
ODCONC_ODC2_POSN                         equ 0002h
ODCONC_ODC2_POSITION                     equ 0002h
ODCONC_ODC2_SIZE                         equ 0001h
ODCONC_ODC2_LENGTH                       equ 0001h
ODCONC_ODC2_MASK                         equ 0004h
ODCONC_ODC3_POSN                         equ 0003h
ODCONC_ODC3_POSITION                     equ 0003h
ODCONC_ODC3_SIZE                         equ 0001h
ODCONC_ODC3_LENGTH                       equ 0001h
ODCONC_ODC3_MASK                         equ 0008h
ODCONC_ODC4_POSN                         equ 0004h
ODCONC_ODC4_POSITION                     equ 0004h
ODCONC_ODC4_SIZE                         equ 0001h
ODCONC_ODC4_LENGTH                       equ 0001h
ODCONC_ODC4_MASK                         equ 0010h
ODCONC_ODC5_POSN                         equ 0005h
ODCONC_ODC5_POSITION                     equ 0005h
ODCONC_ODC5_SIZE                         equ 0001h
ODCONC_ODC5_LENGTH                       equ 0001h
ODCONC_ODC5_MASK                         equ 0020h

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0291h
// bitfield definitions
CCPR1L_RL_POSN                           equ 0000h
CCPR1L_RL_POSITION                       equ 0000h
CCPR1L_RL_SIZE                           equ 0008h
CCPR1L_RL_LENGTH                         equ 0008h
CCPR1L_RL_MASK                           equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0292h
// bitfield definitions
CCPR1H_RH_POSN                           equ 0000h
CCPR1H_RH_POSITION                       equ 0000h
CCPR1H_RH_SIZE                           equ 0008h
CCPR1H_RH_LENGTH                         equ 0008h
CCPR1H_RH_MASK                           equ 00FFh

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0293h
// bitfield definitions
CCP1CON_MODE_POSN                        equ 0000h
CCP1CON_MODE_POSITION                    equ 0000h
CCP1CON_MODE_SIZE                        equ 0004h
CCP1CON_MODE_LENGTH                      equ 0004h
CCP1CON_MODE_MASK                        equ 000Fh
CCP1CON_FMT_POSN                         equ 0004h
CCP1CON_FMT_POSITION                     equ 0004h
CCP1CON_FMT_SIZE                         equ 0001h
CCP1CON_FMT_LENGTH                       equ 0001h
CCP1CON_FMT_MASK                         equ 0010h
CCP1CON_OUT_POSN                         equ 0005h
CCP1CON_OUT_POSITION                     equ 0005h
CCP1CON_OUT_SIZE                         equ 0001h
CCP1CON_OUT_LENGTH                       equ 0001h
CCP1CON_OUT_MASK                         equ 0020h
CCP1CON_OE_POSN                          equ 0006h
CCP1CON_OE_POSITION                      equ 0006h
CCP1CON_OE_SIZE                          equ 0001h
CCP1CON_OE_LENGTH                        equ 0001h
CCP1CON_OE_MASK                          equ 0040h
CCP1CON_EN_POSN                          equ 0007h
CCP1CON_EN_POSITION                      equ 0007h
CCP1CON_EN_SIZE                          equ 0001h
CCP1CON_EN_LENGTH                        equ 0001h
CCP1CON_EN_MASK                          equ 0080h
CCP1CON_MODE0_POSN                       equ 0000h
CCP1CON_MODE0_POSITION                   equ 0000h
CCP1CON_MODE0_SIZE                       equ 0001h
CCP1CON_MODE0_LENGTH                     equ 0001h
CCP1CON_MODE0_MASK                       equ 0001h
CCP1CON_MODE1_POSN                       equ 0001h
CCP1CON_MODE1_POSITION                   equ 0001h
CCP1CON_MODE1_SIZE                       equ 0001h
CCP1CON_MODE1_LENGTH                     equ 0001h
CCP1CON_MODE1_MASK                       equ 0002h
CCP1CON_MODE2_POSN                       equ 0002h
CCP1CON_MODE2_POSITION                   equ 0002h
CCP1CON_MODE2_SIZE                       equ 0001h
CCP1CON_MODE2_LENGTH                     equ 0001h
CCP1CON_MODE2_MASK                       equ 0004h
CCP1CON_MODE3_POSN                       equ 0003h
CCP1CON_MODE3_POSITION                   equ 0003h
CCP1CON_MODE3_SIZE                       equ 0001h
CCP1CON_MODE3_LENGTH                     equ 0001h
CCP1CON_MODE3_MASK                       equ 0008h
CCP1CON_CCP1MODE_POSN                    equ 0000h
CCP1CON_CCP1MODE_POSITION                equ 0000h
CCP1CON_CCP1MODE_SIZE                    equ 0004h
CCP1CON_CCP1MODE_LENGTH                  equ 0004h
CCP1CON_CCP1MODE_MASK                    equ 000Fh
CCP1CON_CCP1FMT_POSN                     equ 0004h
CCP1CON_CCP1FMT_POSITION                 equ 0004h
CCP1CON_CCP1FMT_SIZE                     equ 0001h
CCP1CON_CCP1FMT_LENGTH                   equ 0001h
CCP1CON_CCP1FMT_MASK                     equ 0010h
CCP1CON_CCP1OUT_POSN                     equ 0005h
CCP1CON_CCP1OUT_POSITION                 equ 0005h
CCP1CON_CCP1OUT_SIZE                     equ 0001h
CCP1CON_CCP1OUT_LENGTH                   equ 0001h
CCP1CON_CCP1OUT_MASK                     equ 0020h
CCP1CON_CCP1OE_POSN                      equ 0006h
CCP1CON_CCP1OE_POSITION                  equ 0006h
CCP1CON_CCP1OE_SIZE                      equ 0001h
CCP1CON_CCP1OE_LENGTH                    equ 0001h
CCP1CON_CCP1OE_MASK                      equ 0040h
CCP1CON_CCP1EN_POSN                      equ 0007h
CCP1CON_CCP1EN_POSITION                  equ 0007h
CCP1CON_CCP1EN_SIZE                      equ 0001h
CCP1CON_CCP1EN_LENGTH                    equ 0001h
CCP1CON_CCP1EN_MASK                      equ 0080h
CCP1CON_CCP1MODE0_POSN                   equ 0000h
CCP1CON_CCP1MODE0_POSITION               equ 0000h
CCP1CON_CCP1MODE0_SIZE                   equ 0001h
CCP1CON_CCP1MODE0_LENGTH                 equ 0001h
CCP1CON_CCP1MODE0_MASK                   equ 0001h
CCP1CON_CCP1MODE1_POSN                   equ 0001h
CCP1CON_CCP1MODE1_POSITION               equ 0001h
CCP1CON_CCP1MODE1_SIZE                   equ 0001h
CCP1CON_CCP1MODE1_LENGTH                 equ 0001h
CCP1CON_CCP1MODE1_MASK                   equ 0002h
CCP1CON_CCP1MODE2_POSN                   equ 0002h
CCP1CON_CCP1MODE2_POSITION               equ 0002h
CCP1CON_CCP1MODE2_SIZE                   equ 0001h
CCP1CON_CCP1MODE2_LENGTH                 equ 0001h
CCP1CON_CCP1MODE2_MASK                   equ 0004h
CCP1CON_CCP1MODE3_POSN                   equ 0003h
CCP1CON_CCP1MODE3_POSITION               equ 0003h
CCP1CON_CCP1MODE3_SIZE                   equ 0001h
CCP1CON_CCP1MODE3_LENGTH                 equ 0001h
CCP1CON_CCP1MODE3_MASK                   equ 0008h

// Register: CCP1CAP
#define CCP1CAP CCP1CAP
CCP1CAP                                  equ 0294h
// bitfield definitions
CCP1CAP_CTS_POSN                         equ 0000h
CCP1CAP_CTS_POSITION                     equ 0000h
CCP1CAP_CTS_SIZE                         equ 0008h
CCP1CAP_CTS_LENGTH                       equ 0008h
CCP1CAP_CTS_MASK                         equ 00FFh
CCP1CAP_CTS0_POSN                        equ 0000h
CCP1CAP_CTS0_POSITION                    equ 0000h
CCP1CAP_CTS0_SIZE                        equ 0001h
CCP1CAP_CTS0_LENGTH                      equ 0001h
CCP1CAP_CTS0_MASK                        equ 0001h
CCP1CAP_CTS1_POSN                        equ 0001h
CCP1CAP_CTS1_POSITION                    equ 0001h
CCP1CAP_CTS1_SIZE                        equ 0001h
CCP1CAP_CTS1_LENGTH                      equ 0001h
CCP1CAP_CTS1_MASK                        equ 0002h
CCP1CAP_CCP1CTS_POSN                     equ 0000h
CCP1CAP_CCP1CTS_POSITION                 equ 0000h
CCP1CAP_CCP1CTS_SIZE                     equ 0008h
CCP1CAP_CCP1CTS_LENGTH                   equ 0008h
CCP1CAP_CCP1CTS_MASK                     equ 00FFh
CCP1CAP_CCP1CTS0_POSN                    equ 0000h
CCP1CAP_CCP1CTS0_POSITION                equ 0000h
CCP1CAP_CCP1CTS0_SIZE                    equ 0001h
CCP1CAP_CCP1CTS0_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS0_MASK                    equ 0001h
CCP1CAP_CCP1CTS1_POSN                    equ 0001h
CCP1CAP_CCP1CTS1_POSITION                equ 0001h
CCP1CAP_CCP1CTS1_SIZE                    equ 0001h
CCP1CAP_CCP1CTS1_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS1_MASK                    equ 0002h

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0298h
// bitfield definitions
CCPR2L_RL_POSN                           equ 0000h
CCPR2L_RL_POSITION                       equ 0000h
CCPR2L_RL_SIZE                           equ 0008h
CCPR2L_RL_LENGTH                         equ 0008h
CCPR2L_RL_MASK                           equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0299h
// bitfield definitions
CCPR2H_RH_POSN                           equ 0000h
CCPR2H_RH_POSITION                       equ 0000h
CCPR2H_RH_SIZE                           equ 0008h
CCPR2H_RH_LENGTH                         equ 0008h
CCPR2H_RH_MASK                           equ 00FFh

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 029Ah
// bitfield definitions
CCP2CON_MODE_POSN                        equ 0000h
CCP2CON_MODE_POSITION                    equ 0000h
CCP2CON_MODE_SIZE                        equ 0004h
CCP2CON_MODE_LENGTH                      equ 0004h
CCP2CON_MODE_MASK                        equ 000Fh
CCP2CON_FMT_POSN                         equ 0004h
CCP2CON_FMT_POSITION                     equ 0004h
CCP2CON_FMT_SIZE                         equ 0001h
CCP2CON_FMT_LENGTH                       equ 0001h
CCP2CON_FMT_MASK                         equ 0010h
CCP2CON_OUT_POSN                         equ 0005h
CCP2CON_OUT_POSITION                     equ 0005h
CCP2CON_OUT_SIZE                         equ 0001h
CCP2CON_OUT_LENGTH                       equ 0001h
CCP2CON_OUT_MASK                         equ 0020h
CCP2CON_OE_POSN                          equ 0006h
CCP2CON_OE_POSITION                      equ 0006h
CCP2CON_OE_SIZE                          equ 0001h
CCP2CON_OE_LENGTH                        equ 0001h
CCP2CON_OE_MASK                          equ 0040h
CCP2CON_EN_POSN                          equ 0007h
CCP2CON_EN_POSITION                      equ 0007h
CCP2CON_EN_SIZE                          equ 0001h
CCP2CON_EN_LENGTH                        equ 0001h
CCP2CON_EN_MASK                          equ 0080h
CCP2CON_MODE0_POSN                       equ 0000h
CCP2CON_MODE0_POSITION                   equ 0000h
CCP2CON_MODE0_SIZE                       equ 0001h
CCP2CON_MODE0_LENGTH                     equ 0001h
CCP2CON_MODE0_MASK                       equ 0001h
CCP2CON_MODE1_POSN                       equ 0001h
CCP2CON_MODE1_POSITION                   equ 0001h
CCP2CON_MODE1_SIZE                       equ 0001h
CCP2CON_MODE1_LENGTH                     equ 0001h
CCP2CON_MODE1_MASK                       equ 0002h
CCP2CON_MODE2_POSN                       equ 0002h
CCP2CON_MODE2_POSITION                   equ 0002h
CCP2CON_MODE2_SIZE                       equ 0001h
CCP2CON_MODE2_LENGTH                     equ 0001h
CCP2CON_MODE2_MASK                       equ 0004h
CCP2CON_MODE3_POSN                       equ 0003h
CCP2CON_MODE3_POSITION                   equ 0003h
CCP2CON_MODE3_SIZE                       equ 0001h
CCP2CON_MODE3_LENGTH                     equ 0001h
CCP2CON_MODE3_MASK                       equ 0008h
CCP2CON_CCP2MODE_POSN                    equ 0000h
CCP2CON_CCP2MODE_POSITION                equ 0000h
CCP2CON_CCP2MODE_SIZE                    equ 0004h
CCP2CON_CCP2MODE_LENGTH                  equ 0004h
CCP2CON_CCP2MODE_MASK                    equ 000Fh
CCP2CON_CCP2FMT_POSN                     equ 0004h
CCP2CON_CCP2FMT_POSITION                 equ 0004h
CCP2CON_CCP2FMT_SIZE                     equ 0001h
CCP2CON_CCP2FMT_LENGTH                   equ 0001h
CCP2CON_CCP2FMT_MASK                     equ 0010h
CCP2CON_CCP2OUT_POSN                     equ 0005h
CCP2CON_CCP2OUT_POSITION                 equ 0005h
CCP2CON_CCP2OUT_SIZE                     equ 0001h
CCP2CON_CCP2OUT_LENGTH                   equ 0001h
CCP2CON_CCP2OUT_MASK                     equ 0020h
CCP2CON_CCP2OE_POSN                      equ 0006h
CCP2CON_CCP2OE_POSITION                  equ 0006h
CCP2CON_CCP2OE_SIZE                      equ 0001h
CCP2CON_CCP2OE_LENGTH                    equ 0001h
CCP2CON_CCP2OE_MASK                      equ 0040h
CCP2CON_CCP2EN_POSN                      equ 0007h
CCP2CON_CCP2EN_POSITION                  equ 0007h
CCP2CON_CCP2EN_SIZE                      equ 0001h
CCP2CON_CCP2EN_LENGTH                    equ 0001h
CCP2CON_CCP2EN_MASK                      equ 0080h
CCP2CON_CCP2MODE0_POSN                   equ 0000h
CCP2CON_CCP2MODE0_POSITION               equ 0000h
CCP2CON_CCP2MODE0_SIZE                   equ 0001h
CCP2CON_CCP2MODE0_LENGTH                 equ 0001h
CCP2CON_CCP2MODE0_MASK                   equ 0001h
CCP2CON_CCP2MODE1_POSN                   equ 0001h
CCP2CON_CCP2MODE1_POSITION               equ 0001h
CCP2CON_CCP2MODE1_SIZE                   equ 0001h
CCP2CON_CCP2MODE1_LENGTH                 equ 0001h
CCP2CON_CCP2MODE1_MASK                   equ 0002h
CCP2CON_CCP2MODE2_POSN                   equ 0002h
CCP2CON_CCP2MODE2_POSITION               equ 0002h
CCP2CON_CCP2MODE2_SIZE                   equ 0001h
CCP2CON_CCP2MODE2_LENGTH                 equ 0001h
CCP2CON_CCP2MODE2_MASK                   equ 0004h
CCP2CON_CCP2MODE3_POSN                   equ 0003h
CCP2CON_CCP2MODE3_POSITION               equ 0003h
CCP2CON_CCP2MODE3_SIZE                   equ 0001h
CCP2CON_CCP2MODE3_LENGTH                 equ 0001h
CCP2CON_CCP2MODE3_MASK                   equ 0008h

// Register: CCP2CAP
#define CCP2CAP CCP2CAP
CCP2CAP                                  equ 029Bh
// bitfield definitions
CCP2CAP_CTS_POSN                         equ 0000h
CCP2CAP_CTS_POSITION                     equ 0000h
CCP2CAP_CTS_SIZE                         equ 0008h
CCP2CAP_CTS_LENGTH                       equ 0008h
CCP2CAP_CTS_MASK                         equ 00FFh
CCP2CAP_CTS0_POSN                        equ 0000h
CCP2CAP_CTS0_POSITION                    equ 0000h
CCP2CAP_CTS0_SIZE                        equ 0001h
CCP2CAP_CTS0_LENGTH                      equ 0001h
CCP2CAP_CTS0_MASK                        equ 0001h
CCP2CAP_CTS1_POSN                        equ 0001h
CCP2CAP_CTS1_POSITION                    equ 0001h
CCP2CAP_CTS1_SIZE                        equ 0001h
CCP2CAP_CTS1_LENGTH                      equ 0001h
CCP2CAP_CTS1_MASK                        equ 0002h
CCP2CAP_CCP2CTS_POSN                     equ 0000h
CCP2CAP_CCP2CTS_POSITION                 equ 0000h
CCP2CAP_CCP2CTS_SIZE                     equ 0008h
CCP2CAP_CCP2CTS_LENGTH                   equ 0008h
CCP2CAP_CCP2CTS_MASK                     equ 00FFh
CCP2CAP_CCP2CTS0_POSN                    equ 0000h
CCP2CAP_CCP2CTS0_POSITION                equ 0000h
CCP2CAP_CCP2CTS0_SIZE                    equ 0001h
CCP2CAP_CCP2CTS0_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS0_MASK                    equ 0001h
CCP2CAP_CCP2CTS1_POSN                    equ 0001h
CCP2CAP_CCP2CTS1_POSITION                equ 0001h
CCP2CAP_CCP2CTS1_SIZE                    equ 0001h
CCP2CAP_CCP2CTS1_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS1_MASK                    equ 0002h

// Register: CCPTMRS
#define CCPTMRS CCPTMRS
CCPTMRS                                  equ 029Eh
// bitfield definitions
CCPTMRS_CCP1TSEL_POSN                    equ 0000h
CCPTMRS_CCP1TSEL_POSITION                equ 0000h
CCPTMRS_CCP1TSEL_SIZE                    equ 0002h
CCPTMRS_CCP1TSEL_LENGTH                  equ 0002h
CCPTMRS_CCP1TSEL_MASK                    equ 0003h
CCPTMRS_CCP2TSEL_POSN                    equ 0002h
CCPTMRS_CCP2TSEL_POSITION                equ 0002h
CCPTMRS_CCP2TSEL_SIZE                    equ 0002h
CCPTMRS_CCP2TSEL_LENGTH                  equ 0002h
CCPTMRS_CCP2TSEL_MASK                    equ 000Ch
CCPTMRS_CCP1TSEL0_POSN                   equ 0000h
CCPTMRS_CCP1TSEL0_POSITION               equ 0000h
CCPTMRS_CCP1TSEL0_SIZE                   equ 0001h
CCPTMRS_CCP1TSEL0_LENGTH                 equ 0001h
CCPTMRS_CCP1TSEL0_MASK                   equ 0001h
CCPTMRS_CCP1TSEL1_POSN                   equ 0001h
CCPTMRS_CCP1TSEL1_POSITION               equ 0001h
CCPTMRS_CCP1TSEL1_SIZE                   equ 0001h
CCPTMRS_CCP1TSEL1_LENGTH                 equ 0001h
CCPTMRS_CCP1TSEL1_MASK                   equ 0002h
CCPTMRS_CCP2TSEL0_POSN                   equ 0002h
CCPTMRS_CCP2TSEL0_POSITION               equ 0002h
CCPTMRS_CCP2TSEL0_SIZE                   equ 0001h
CCPTMRS_CCP2TSEL0_LENGTH                 equ 0001h
CCPTMRS_CCP2TSEL0_MASK                   equ 0004h
CCPTMRS_CCP2TSEL1_POSN                   equ 0003h
CCPTMRS_CCP2TSEL1_POSITION               equ 0003h
CCPTMRS_CCP2TSEL1_SIZE                   equ 0001h
CCPTMRS_CCP2TSEL1_LENGTH                 equ 0001h
CCPTMRS_CCP2TSEL1_MASK                   equ 0008h

// Register: SLRCONA
#define SLRCONA SLRCONA
SLRCONA                                  equ 030Ch
// bitfield definitions
SLRCONA_SLRA0_POSN                       equ 0000h
SLRCONA_SLRA0_POSITION                   equ 0000h
SLRCONA_SLRA0_SIZE                       equ 0001h
SLRCONA_SLRA0_LENGTH                     equ 0001h
SLRCONA_SLRA0_MASK                       equ 0001h
SLRCONA_SLRA1_POSN                       equ 0001h
SLRCONA_SLRA1_POSITION                   equ 0001h
SLRCONA_SLRA1_SIZE                       equ 0001h
SLRCONA_SLRA1_LENGTH                     equ 0001h
SLRCONA_SLRA1_MASK                       equ 0002h
SLRCONA_SLRA2_POSN                       equ 0002h
SLRCONA_SLRA2_POSITION                   equ 0002h
SLRCONA_SLRA2_SIZE                       equ 0001h
SLRCONA_SLRA2_LENGTH                     equ 0001h
SLRCONA_SLRA2_MASK                       equ 0004h
SLRCONA_SLRA4_POSN                       equ 0004h
SLRCONA_SLRA4_POSITION                   equ 0004h
SLRCONA_SLRA4_SIZE                       equ 0001h
SLRCONA_SLRA4_LENGTH                     equ 0001h
SLRCONA_SLRA4_MASK                       equ 0010h
SLRCONA_SLRA5_POSN                       equ 0005h
SLRCONA_SLRA5_POSITION                   equ 0005h
SLRCONA_SLRA5_SIZE                       equ 0001h
SLRCONA_SLRA5_LENGTH                     equ 0001h
SLRCONA_SLRA5_MASK                       equ 0020h

// Register: SLRCONC
#define SLRCONC SLRCONC
SLRCONC                                  equ 030Eh
// bitfield definitions
SLRCONC_SLRC0_POSN                       equ 0000h
SLRCONC_SLRC0_POSITION                   equ 0000h
SLRCONC_SLRC0_SIZE                       equ 0001h
SLRCONC_SLRC0_LENGTH                     equ 0001h
SLRCONC_SLRC0_MASK                       equ 0001h
SLRCONC_SLRC1_POSN                       equ 0001h
SLRCONC_SLRC1_POSITION                   equ 0001h
SLRCONC_SLRC1_SIZE                       equ 0001h
SLRCONC_SLRC1_LENGTH                     equ 0001h
SLRCONC_SLRC1_MASK                       equ 0002h
SLRCONC_SLRC2_POSN                       equ 0002h
SLRCONC_SLRC2_POSITION                   equ 0002h
SLRCONC_SLRC2_SIZE                       equ 0001h
SLRCONC_SLRC2_LENGTH                     equ 0001h
SLRCONC_SLRC2_MASK                       equ 0004h
SLRCONC_SLRC3_POSN                       equ 0003h
SLRCONC_SLRC3_POSITION                   equ 0003h
SLRCONC_SLRC3_SIZE                       equ 0001h
SLRCONC_SLRC3_LENGTH                     equ 0001h
SLRCONC_SLRC3_MASK                       equ 0008h
SLRCONC_SLRC4_POSN                       equ 0004h
SLRCONC_SLRC4_POSITION                   equ 0004h
SLRCONC_SLRC4_SIZE                       equ 0001h
SLRCONC_SLRC4_LENGTH                     equ 0001h
SLRCONC_SLRC4_MASK                       equ 0010h
SLRCONC_SLRC5_POSN                       equ 0005h
SLRCONC_SLRC5_POSITION                   equ 0005h
SLRCONC_SLRC5_SIZE                       equ 0001h
SLRCONC_SLRC5_LENGTH                     equ 0001h
SLRCONC_SLRC5_MASK                       equ 0020h

// Register: INLVLA
#define INLVLA INLVLA
INLVLA                                   equ 038Ch
// bitfield definitions
INLVLA_INLVLA0_POSN                      equ 0000h
INLVLA_INLVLA0_POSITION                  equ 0000h
INLVLA_INLVLA0_SIZE                      equ 0001h
INLVLA_INLVLA0_LENGTH                    equ 0001h
INLVLA_INLVLA0_MASK                      equ 0001h
INLVLA_INLVLA1_POSN                      equ 0001h
INLVLA_INLVLA1_POSITION                  equ 0001h
INLVLA_INLVLA1_SIZE                      equ 0001h
INLVLA_INLVLA1_LENGTH                    equ 0001h
INLVLA_INLVLA1_MASK                      equ 0002h
INLVLA_INLVLA2_POSN                      equ 0002h
INLVLA_INLVLA2_POSITION                  equ 0002h
INLVLA_INLVLA2_SIZE                      equ 0001h
INLVLA_INLVLA2_LENGTH                    equ 0001h
INLVLA_INLVLA2_MASK                      equ 0004h
INLVLA_INLVLA3_POSN                      equ 0003h
INLVLA_INLVLA3_POSITION                  equ 0003h
INLVLA_INLVLA3_SIZE                      equ 0001h
INLVLA_INLVLA3_LENGTH                    equ 0001h
INLVLA_INLVLA3_MASK                      equ 0008h
INLVLA_INLVLA4_POSN                      equ 0004h
INLVLA_INLVLA4_POSITION                  equ 0004h
INLVLA_INLVLA4_SIZE                      equ 0001h
INLVLA_INLVLA4_LENGTH                    equ 0001h
INLVLA_INLVLA4_MASK                      equ 0010h
INLVLA_INLVLA5_POSN                      equ 0005h
INLVLA_INLVLA5_POSITION                  equ 0005h
INLVLA_INLVLA5_SIZE                      equ 0001h
INLVLA_INLVLA5_LENGTH                    equ 0001h
INLVLA_INLVLA5_MASK                      equ 0020h

// Register: INLVLC
#define INLVLC INLVLC
INLVLC                                   equ 038Eh
// bitfield definitions
INLVLC_INLVLC0_POSN                      equ 0000h
INLVLC_INLVLC0_POSITION                  equ 0000h
INLVLC_INLVLC0_SIZE                      equ 0001h
INLVLC_INLVLC0_LENGTH                    equ 0001h
INLVLC_INLVLC0_MASK                      equ 0001h
INLVLC_INLVLC1_POSN                      equ 0001h
INLVLC_INLVLC1_POSITION                  equ 0001h
INLVLC_INLVLC1_SIZE                      equ 0001h
INLVLC_INLVLC1_LENGTH                    equ 0001h
INLVLC_INLVLC1_MASK                      equ 0002h
INLVLC_INLVLC2_POSN                      equ 0002h
INLVLC_INLVLC2_POSITION                  equ 0002h
INLVLC_INLVLC2_SIZE                      equ 0001h
INLVLC_INLVLC2_LENGTH                    equ 0001h
INLVLC_INLVLC2_MASK                      equ 0004h
INLVLC_INLVLC3_POSN                      equ 0003h
INLVLC_INLVLC3_POSITION                  equ 0003h
INLVLC_INLVLC3_SIZE                      equ 0001h
INLVLC_INLVLC3_LENGTH                    equ 0001h
INLVLC_INLVLC3_MASK                      equ 0008h
INLVLC_INLVLC4_POSN                      equ 0004h
INLVLC_INLVLC4_POSITION                  equ 0004h
INLVLC_INLVLC4_SIZE                      equ 0001h
INLVLC_INLVLC4_LENGTH                    equ 0001h
INLVLC_INLVLC4_MASK                      equ 0010h
INLVLC_INLVLC5_POSN                      equ 0005h
INLVLC_INLVLC5_POSITION                  equ 0005h
INLVLC_INLVLC5_SIZE                      equ 0001h
INLVLC_INLVLC5_LENGTH                    equ 0001h
INLVLC_INLVLC5_MASK                      equ 0020h

// Register: IOCAP
#define IOCAP IOCAP
IOCAP                                    equ 0391h
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
IOCAP_IOCAP_POSN                         equ 0000h
IOCAP_IOCAP_POSITION                     equ 0000h
IOCAP_IOCAP_SIZE                         equ 0006h
IOCAP_IOCAP_LENGTH                       equ 0006h
IOCAP_IOCAP_MASK                         equ 003Fh

// Register: IOCAN
#define IOCAN IOCAN
IOCAN                                    equ 0392h
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
IOCAN_IOCAN_POSN                         equ 0000h
IOCAN_IOCAN_POSITION                     equ 0000h
IOCAN_IOCAN_SIZE                         equ 0006h
IOCAN_IOCAN_LENGTH                       equ 0006h
IOCAN_IOCAN_MASK                         equ 003Fh

// Register: IOCAF
#define IOCAF IOCAF
IOCAF                                    equ 0393h
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
IOCAF_IOCAF_POSN                         equ 0000h
IOCAF_IOCAF_POSITION                     equ 0000h
IOCAF_IOCAF_SIZE                         equ 0006h
IOCAF_IOCAF_LENGTH                       equ 0006h
IOCAF_IOCAF_MASK                         equ 003Fh

// Register: IOCCP
#define IOCCP IOCCP
IOCCP                                    equ 0397h
// bitfield definitions
IOCCP_IOCCP0_POSN                        equ 0000h
IOCCP_IOCCP0_POSITION                    equ 0000h
IOCCP_IOCCP0_SIZE                        equ 0001h
IOCCP_IOCCP0_LENGTH                      equ 0001h
IOCCP_IOCCP0_MASK                        equ 0001h
IOCCP_IOCCP1_POSN                        equ 0001h
IOCCP_IOCCP1_POSITION                    equ 0001h
IOCCP_IOCCP1_SIZE                        equ 0001h
IOCCP_IOCCP1_LENGTH                      equ 0001h
IOCCP_IOCCP1_MASK                        equ 0002h
IOCCP_IOCCP2_POSN                        equ 0002h
IOCCP_IOCCP2_POSITION                    equ 0002h
IOCCP_IOCCP2_SIZE                        equ 0001h
IOCCP_IOCCP2_LENGTH                      equ 0001h
IOCCP_IOCCP2_MASK                        equ 0004h
IOCCP_IOCCP3_POSN                        equ 0003h
IOCCP_IOCCP3_POSITION                    equ 0003h
IOCCP_IOCCP3_SIZE                        equ 0001h
IOCCP_IOCCP3_LENGTH                      equ 0001h
IOCCP_IOCCP3_MASK                        equ 0008h
IOCCP_IOCCP4_POSN                        equ 0004h
IOCCP_IOCCP4_POSITION                    equ 0004h
IOCCP_IOCCP4_SIZE                        equ 0001h
IOCCP_IOCCP4_LENGTH                      equ 0001h
IOCCP_IOCCP4_MASK                        equ 0010h
IOCCP_IOCCP5_POSN                        equ 0005h
IOCCP_IOCCP5_POSITION                    equ 0005h
IOCCP_IOCCP5_SIZE                        equ 0001h
IOCCP_IOCCP5_LENGTH                      equ 0001h
IOCCP_IOCCP5_MASK                        equ 0020h

// Register: IOCCN
#define IOCCN IOCCN
IOCCN                                    equ 0398h
// bitfield definitions
IOCCN_IOCCN0_POSN                        equ 0000h
IOCCN_IOCCN0_POSITION                    equ 0000h
IOCCN_IOCCN0_SIZE                        equ 0001h
IOCCN_IOCCN0_LENGTH                      equ 0001h
IOCCN_IOCCN0_MASK                        equ 0001h
IOCCN_IOCCN1_POSN                        equ 0001h
IOCCN_IOCCN1_POSITION                    equ 0001h
IOCCN_IOCCN1_SIZE                        equ 0001h
IOCCN_IOCCN1_LENGTH                      equ 0001h
IOCCN_IOCCN1_MASK                        equ 0002h
IOCCN_IOCCN2_POSN                        equ 0002h
IOCCN_IOCCN2_POSITION                    equ 0002h
IOCCN_IOCCN2_SIZE                        equ 0001h
IOCCN_IOCCN2_LENGTH                      equ 0001h
IOCCN_IOCCN2_MASK                        equ 0004h
IOCCN_IOCCN3_POSN                        equ 0003h
IOCCN_IOCCN3_POSITION                    equ 0003h
IOCCN_IOCCN3_SIZE                        equ 0001h
IOCCN_IOCCN3_LENGTH                      equ 0001h
IOCCN_IOCCN3_MASK                        equ 0008h
IOCCN_IOCCN4_POSN                        equ 0004h
IOCCN_IOCCN4_POSITION                    equ 0004h
IOCCN_IOCCN4_SIZE                        equ 0001h
IOCCN_IOCCN4_LENGTH                      equ 0001h
IOCCN_IOCCN4_MASK                        equ 0010h
IOCCN_IOCCN5_POSN                        equ 0005h
IOCCN_IOCCN5_POSITION                    equ 0005h
IOCCN_IOCCN5_SIZE                        equ 0001h
IOCCN_IOCCN5_LENGTH                      equ 0001h
IOCCN_IOCCN5_MASK                        equ 0020h

// Register: IOCCF
#define IOCCF IOCCF
IOCCF                                    equ 0399h
// bitfield definitions
IOCCF_IOCCF0_POSN                        equ 0000h
IOCCF_IOCCF0_POSITION                    equ 0000h
IOCCF_IOCCF0_SIZE                        equ 0001h
IOCCF_IOCCF0_LENGTH                      equ 0001h
IOCCF_IOCCF0_MASK                        equ 0001h
IOCCF_IOCCF1_POSN                        equ 0001h
IOCCF_IOCCF1_POSITION                    equ 0001h
IOCCF_IOCCF1_SIZE                        equ 0001h
IOCCF_IOCCF1_LENGTH                      equ 0001h
IOCCF_IOCCF1_MASK                        equ 0002h
IOCCF_IOCCF2_POSN                        equ 0002h
IOCCF_IOCCF2_POSITION                    equ 0002h
IOCCF_IOCCF2_SIZE                        equ 0001h
IOCCF_IOCCF2_LENGTH                      equ 0001h
IOCCF_IOCCF2_MASK                        equ 0004h
IOCCF_IOCCF3_POSN                        equ 0003h
IOCCF_IOCCF3_POSITION                    equ 0003h
IOCCF_IOCCF3_SIZE                        equ 0001h
IOCCF_IOCCF3_LENGTH                      equ 0001h
IOCCF_IOCCF3_MASK                        equ 0008h
IOCCF_IOCCF4_POSN                        equ 0004h
IOCCF_IOCCF4_POSITION                    equ 0004h
IOCCF_IOCCF4_SIZE                        equ 0001h
IOCCF_IOCCF4_LENGTH                      equ 0001h
IOCCF_IOCCF4_MASK                        equ 0010h
IOCCF_IOCCF5_POSN                        equ 0005h
IOCCF_IOCCF5_POSITION                    equ 0005h
IOCCF_IOCCF5_SIZE                        equ 0001h
IOCCF_IOCCF5_LENGTH                      equ 0001h
IOCCF_IOCCF5_MASK                        equ 0020h

// Register: T4TMR
#define T4TMR T4TMR
T4TMR                                    equ 0413h
// bitfield definitions
T4TMR_TMR4_POSN                          equ 0000h
T4TMR_TMR4_POSITION                      equ 0000h
T4TMR_TMR4_SIZE                          equ 0008h
T4TMR_TMR4_LENGTH                        equ 0008h
T4TMR_TMR4_MASK                          equ 00FFh

// Register: T4PR
#define T4PR T4PR
T4PR                                     equ 0414h
// bitfield definitions
T4PR_PR4_POSN                            equ 0000h
T4PR_PR4_POSITION                        equ 0000h
T4PR_PR4_SIZE                            equ 0008h
T4PR_PR4_LENGTH                          equ 0008h
T4PR_PR4_MASK                            equ 00FFh

// Register: T4CON
#define T4CON T4CON
T4CON                                    equ 0415h
// bitfield definitions
T4CON_OUTPS_POSN                         equ 0000h
T4CON_OUTPS_POSITION                     equ 0000h
T4CON_OUTPS_SIZE                         equ 0004h
T4CON_OUTPS_LENGTH                       equ 0004h
T4CON_OUTPS_MASK                         equ 000Fh
T4CON_CKPS_POSN                          equ 0004h
T4CON_CKPS_POSITION                      equ 0004h
T4CON_CKPS_SIZE                          equ 0003h
T4CON_CKPS_LENGTH                        equ 0003h
T4CON_CKPS_MASK                          equ 0070h
T4CON_ON_POSN                            equ 0007h
T4CON_ON_POSITION                        equ 0007h
T4CON_ON_SIZE                            equ 0001h
T4CON_ON_LENGTH                          equ 0001h
T4CON_ON_MASK                            equ 0080h
T4CON_T4OUTPS_POSN                       equ 0000h
T4CON_T4OUTPS_POSITION                   equ 0000h
T4CON_T4OUTPS_SIZE                       equ 0004h
T4CON_T4OUTPS_LENGTH                     equ 0004h
T4CON_T4OUTPS_MASK                       equ 000Fh
T4CON_T4CKPS_POSN                        equ 0004h
T4CON_T4CKPS_POSITION                    equ 0004h
T4CON_T4CKPS_SIZE                        equ 0003h
T4CON_T4CKPS_LENGTH                      equ 0003h
T4CON_T4CKPS_MASK                        equ 0070h
T4CON_T4ON_POSN                          equ 0007h
T4CON_T4ON_POSITION                      equ 0007h
T4CON_T4ON_SIZE                          equ 0001h
T4CON_T4ON_LENGTH                        equ 0001h
T4CON_T4ON_MASK                          equ 0080h
T4CON_T4OUTPS0_POSN                      equ 0000h
T4CON_T4OUTPS0_POSITION                  equ 0000h
T4CON_T4OUTPS0_SIZE                      equ 0001h
T4CON_T4OUTPS0_LENGTH                    equ 0001h
T4CON_T4OUTPS0_MASK                      equ 0001h
T4CON_T4OUTPS1_POSN                      equ 0001h
T4CON_T4OUTPS1_POSITION                  equ 0001h
T4CON_T4OUTPS1_SIZE                      equ 0001h
T4CON_T4OUTPS1_LENGTH                    equ 0001h
T4CON_T4OUTPS1_MASK                      equ 0002h
T4CON_T4OUTPS2_POSN                      equ 0002h
T4CON_T4OUTPS2_POSITION                  equ 0002h
T4CON_T4OUTPS2_SIZE                      equ 0001h
T4CON_T4OUTPS2_LENGTH                    equ 0001h
T4CON_T4OUTPS2_MASK                      equ 0004h
T4CON_T4OUTPS3_POSN                      equ 0003h
T4CON_T4OUTPS3_POSITION                  equ 0003h
T4CON_T4OUTPS3_SIZE                      equ 0001h
T4CON_T4OUTPS3_LENGTH                    equ 0001h
T4CON_T4OUTPS3_MASK                      equ 0008h
T4CON_T4CKPS0_POSN                       equ 0004h
T4CON_T4CKPS0_POSITION                   equ 0004h
T4CON_T4CKPS0_SIZE                       equ 0001h
T4CON_T4CKPS0_LENGTH                     equ 0001h
T4CON_T4CKPS0_MASK                       equ 0010h
T4CON_T4CKPS1_POSN                       equ 0005h
T4CON_T4CKPS1_POSITION                   equ 0005h
T4CON_T4CKPS1_SIZE                       equ 0001h
T4CON_T4CKPS1_LENGTH                     equ 0001h
T4CON_T4CKPS1_MASK                       equ 0020h
T4CON_T4CKPS2_POSN                       equ 0006h
T4CON_T4CKPS2_POSITION                   equ 0006h
T4CON_T4CKPS2_SIZE                       equ 0001h
T4CON_T4CKPS2_LENGTH                     equ 0001h
T4CON_T4CKPS2_MASK                       equ 0040h
T4CON_OUTPS0_POSN                        equ 0000h
T4CON_OUTPS0_POSITION                    equ 0000h
T4CON_OUTPS0_SIZE                        equ 0001h
T4CON_OUTPS0_LENGTH                      equ 0001h
T4CON_OUTPS0_MASK                        equ 0001h
T4CON_OUTPS1_POSN                        equ 0001h
T4CON_OUTPS1_POSITION                    equ 0001h
T4CON_OUTPS1_SIZE                        equ 0001h
T4CON_OUTPS1_LENGTH                      equ 0001h
T4CON_OUTPS1_MASK                        equ 0002h
T4CON_OUTPS2_POSN                        equ 0002h
T4CON_OUTPS2_POSITION                    equ 0002h
T4CON_OUTPS2_SIZE                        equ 0001h
T4CON_OUTPS2_LENGTH                      equ 0001h
T4CON_OUTPS2_MASK                        equ 0004h
T4CON_OUTPS3_POSN                        equ 0003h
T4CON_OUTPS3_POSITION                    equ 0003h
T4CON_OUTPS3_SIZE                        equ 0001h
T4CON_OUTPS3_LENGTH                      equ 0001h
T4CON_OUTPS3_MASK                        equ 0008h
T4CON_CKPS0_POSN                         equ 0004h
T4CON_CKPS0_POSITION                     equ 0004h
T4CON_CKPS0_SIZE                         equ 0001h
T4CON_CKPS0_LENGTH                       equ 0001h
T4CON_CKPS0_MASK                         equ 0010h
T4CON_CKPS1_POSN                         equ 0005h
T4CON_CKPS1_POSITION                     equ 0005h
T4CON_CKPS1_SIZE                         equ 0001h
T4CON_CKPS1_LENGTH                       equ 0001h
T4CON_CKPS1_MASK                         equ 0020h
T4CON_CKPS2_POSN                         equ 0006h
T4CON_CKPS2_POSITION                     equ 0006h
T4CON_CKPS2_SIZE                         equ 0001h
T4CON_CKPS2_LENGTH                       equ 0001h
T4CON_CKPS2_MASK                         equ 0040h
T4CON_TMR4ON_POSN                        equ 0007h
T4CON_TMR4ON_POSITION                    equ 0007h
T4CON_TMR4ON_SIZE                        equ 0001h
T4CON_TMR4ON_LENGTH                      equ 0001h
T4CON_TMR4ON_MASK                        equ 0080h

// Register: T4HLT
#define T4HLT T4HLT
T4HLT                                    equ 0416h
// bitfield definitions
T4HLT_MODE_POSN                          equ 0000h
T4HLT_MODE_POSITION                      equ 0000h
T4HLT_MODE_SIZE                          equ 0004h
T4HLT_MODE_LENGTH                        equ 0004h
T4HLT_MODE_MASK                          equ 000Fh
T4HLT_CKSYNC_POSN                        equ 0005h
T4HLT_CKSYNC_POSITION                    equ 0005h
T4HLT_CKSYNC_SIZE                        equ 0001h
T4HLT_CKSYNC_LENGTH                      equ 0001h
T4HLT_CKSYNC_MASK                        equ 0020h
T4HLT_CKPOL_POSN                         equ 0006h
T4HLT_CKPOL_POSITION                     equ 0006h
T4HLT_CKPOL_SIZE                         equ 0001h
T4HLT_CKPOL_LENGTH                       equ 0001h
T4HLT_CKPOL_MASK                         equ 0040h
T4HLT_PSYNC_POSN                         equ 0007h
T4HLT_PSYNC_POSITION                     equ 0007h
T4HLT_PSYNC_SIZE                         equ 0001h
T4HLT_PSYNC_LENGTH                       equ 0001h
T4HLT_PSYNC_MASK                         equ 0080h
T4HLT_MODE0_POSN                         equ 0000h
T4HLT_MODE0_POSITION                     equ 0000h
T4HLT_MODE0_SIZE                         equ 0001h
T4HLT_MODE0_LENGTH                       equ 0001h
T4HLT_MODE0_MASK                         equ 0001h
T4HLT_MODE1_POSN                         equ 0001h
T4HLT_MODE1_POSITION                     equ 0001h
T4HLT_MODE1_SIZE                         equ 0001h
T4HLT_MODE1_LENGTH                       equ 0001h
T4HLT_MODE1_MASK                         equ 0002h
T4HLT_MODE2_POSN                         equ 0002h
T4HLT_MODE2_POSITION                     equ 0002h
T4HLT_MODE2_SIZE                         equ 0001h
T4HLT_MODE2_LENGTH                       equ 0001h
T4HLT_MODE2_MASK                         equ 0004h
T4HLT_MODE3_POSN                         equ 0003h
T4HLT_MODE3_POSITION                     equ 0003h
T4HLT_MODE3_SIZE                         equ 0001h
T4HLT_MODE3_LENGTH                       equ 0001h
T4HLT_MODE3_MASK                         equ 0008h
T4HLT_T4MODE_POSN                        equ 0000h
T4HLT_T4MODE_POSITION                    equ 0000h
T4HLT_T4MODE_SIZE                        equ 0004h
T4HLT_T4MODE_LENGTH                      equ 0004h
T4HLT_T4MODE_MASK                        equ 000Fh
T4HLT_T4CKSYNC_POSN                      equ 0005h
T4HLT_T4CKSYNC_POSITION                  equ 0005h
T4HLT_T4CKSYNC_SIZE                      equ 0001h
T4HLT_T4CKSYNC_LENGTH                    equ 0001h
T4HLT_T4CKSYNC_MASK                      equ 0020h
T4HLT_T4CKPOL_POSN                       equ 0006h
T4HLT_T4CKPOL_POSITION                   equ 0006h
T4HLT_T4CKPOL_SIZE                       equ 0001h
T4HLT_T4CKPOL_LENGTH                     equ 0001h
T4HLT_T4CKPOL_MASK                       equ 0040h
T4HLT_T4PSYNC_POSN                       equ 0007h
T4HLT_T4PSYNC_POSITION                   equ 0007h
T4HLT_T4PSYNC_SIZE                       equ 0001h
T4HLT_T4PSYNC_LENGTH                     equ 0001h
T4HLT_T4PSYNC_MASK                       equ 0080h
T4HLT_T4MODE0_POSN                       equ 0000h
T4HLT_T4MODE0_POSITION                   equ 0000h
T4HLT_T4MODE0_SIZE                       equ 0001h
T4HLT_T4MODE0_LENGTH                     equ 0001h
T4HLT_T4MODE0_MASK                       equ 0001h
T4HLT_T4MODE1_POSN                       equ 0001h
T4HLT_T4MODE1_POSITION                   equ 0001h
T4HLT_T4MODE1_SIZE                       equ 0001h
T4HLT_T4MODE1_LENGTH                     equ 0001h
T4HLT_T4MODE1_MASK                       equ 0002h
T4HLT_T4MODE2_POSN                       equ 0002h
T4HLT_T4MODE2_POSITION                   equ 0002h
T4HLT_T4MODE2_SIZE                       equ 0001h
T4HLT_T4MODE2_LENGTH                     equ 0001h
T4HLT_T4MODE2_MASK                       equ 0004h
T4HLT_T4MODE3_POSN                       equ 0003h
T4HLT_T4MODE3_POSITION                   equ 0003h
T4HLT_T4MODE3_SIZE                       equ 0001h
T4HLT_T4MODE3_LENGTH                     equ 0001h
T4HLT_T4MODE3_MASK                       equ 0008h

// Register: T4CLKCON
#define T4CLKCON T4CLKCON
T4CLKCON                                 equ 0417h
// bitfield definitions
T4CLKCON_T4CS_POSN                       equ 0000h
T4CLKCON_T4CS_POSITION                   equ 0000h
T4CLKCON_T4CS_SIZE                       equ 0003h
T4CLKCON_T4CS_LENGTH                     equ 0003h
T4CLKCON_T4CS_MASK                       equ 0007h
T4CLKCON_T4CS0_POSN                      equ 0000h
T4CLKCON_T4CS0_POSITION                  equ 0000h
T4CLKCON_T4CS0_SIZE                      equ 0001h
T4CLKCON_T4CS0_LENGTH                    equ 0001h
T4CLKCON_T4CS0_MASK                      equ 0001h
T4CLKCON_T4CS1_POSN                      equ 0001h
T4CLKCON_T4CS1_POSITION                  equ 0001h
T4CLKCON_T4CS1_SIZE                      equ 0001h
T4CLKCON_T4CS1_LENGTH                    equ 0001h
T4CLKCON_T4CS1_MASK                      equ 0002h
T4CLKCON_T4CS2_POSN                      equ 0002h
T4CLKCON_T4CS2_POSITION                  equ 0002h
T4CLKCON_T4CS2_SIZE                      equ 0001h
T4CLKCON_T4CS2_LENGTH                    equ 0001h
T4CLKCON_T4CS2_MASK                      equ 0004h

// Register: T4RST
#define T4RST T4RST
T4RST                                    equ 0418h
// bitfield definitions
T4RST_RSEL_POSN                          equ 0000h
T4RST_RSEL_POSITION                      equ 0000h
T4RST_RSEL_SIZE                          equ 0004h
T4RST_RSEL_LENGTH                        equ 0004h
T4RST_RSEL_MASK                          equ 000Fh
T4RST_RSEL0_POSN                         equ 0000h
T4RST_RSEL0_POSITION                     equ 0000h
T4RST_RSEL0_SIZE                         equ 0001h
T4RST_RSEL0_LENGTH                       equ 0001h
T4RST_RSEL0_MASK                         equ 0001h
T4RST_RSEL1_POSN                         equ 0001h
T4RST_RSEL1_POSITION                     equ 0001h
T4RST_RSEL1_SIZE                         equ 0001h
T4RST_RSEL1_LENGTH                       equ 0001h
T4RST_RSEL1_MASK                         equ 0002h
T4RST_RSEL2_POSN                         equ 0002h
T4RST_RSEL2_POSITION                     equ 0002h
T4RST_RSEL2_SIZE                         equ 0001h
T4RST_RSEL2_LENGTH                       equ 0001h
T4RST_RSEL2_MASK                         equ 0004h
T4RST_RSEL3_POSN                         equ 0003h
T4RST_RSEL3_POSITION                     equ 0003h
T4RST_RSEL3_SIZE                         equ 0001h
T4RST_RSEL3_LENGTH                       equ 0001h
T4RST_RSEL3_MASK                         equ 0008h
T4RST_T4RSEL_POSN                        equ 0000h
T4RST_T4RSEL_POSITION                    equ 0000h
T4RST_T4RSEL_SIZE                        equ 0004h
T4RST_T4RSEL_LENGTH                      equ 0004h
T4RST_T4RSEL_MASK                        equ 000Fh
T4RST_T4RSEL0_POSN                       equ 0000h
T4RST_T4RSEL0_POSITION                   equ 0000h
T4RST_T4RSEL0_SIZE                       equ 0001h
T4RST_T4RSEL0_LENGTH                     equ 0001h
T4RST_T4RSEL0_MASK                       equ 0001h
T4RST_T4RSEL1_POSN                       equ 0001h
T4RST_T4RSEL1_POSITION                   equ 0001h
T4RST_T4RSEL1_SIZE                       equ 0001h
T4RST_T4RSEL1_LENGTH                     equ 0001h
T4RST_T4RSEL1_MASK                       equ 0002h
T4RST_T4RSEL2_POSN                       equ 0002h
T4RST_T4RSEL2_POSITION                   equ 0002h
T4RST_T4RSEL2_SIZE                       equ 0001h
T4RST_T4RSEL2_LENGTH                     equ 0001h
T4RST_T4RSEL2_MASK                       equ 0004h
T4RST_T4RSEL3_POSN                       equ 0003h
T4RST_T4RSEL3_POSITION                   equ 0003h
T4RST_T4RSEL3_SIZE                       equ 0001h
T4RST_T4RSEL3_LENGTH                     equ 0001h
T4RST_T4RSEL3_MASK                       equ 0008h

// Register: T6TMR
#define T6TMR T6TMR
T6TMR                                    equ 041Ah
// bitfield definitions
T6TMR_TMR6_POSN                          equ 0000h
T6TMR_TMR6_POSITION                      equ 0000h
T6TMR_TMR6_SIZE                          equ 0008h
T6TMR_TMR6_LENGTH                        equ 0008h
T6TMR_TMR6_MASK                          equ 00FFh

// Register: T6PR
#define T6PR T6PR
T6PR                                     equ 041Bh
// bitfield definitions
T6PR_PR6_POSN                            equ 0000h
T6PR_PR6_POSITION                        equ 0000h
T6PR_PR6_SIZE                            equ 0008h
T6PR_PR6_LENGTH                          equ 0008h
T6PR_PR6_MASK                            equ 00FFh

// Register: T6CON
#define T6CON T6CON
T6CON                                    equ 041Ch
// bitfield definitions
T6CON_OUTPS_POSN                         equ 0000h
T6CON_OUTPS_POSITION                     equ 0000h
T6CON_OUTPS_SIZE                         equ 0004h
T6CON_OUTPS_LENGTH                       equ 0004h
T6CON_OUTPS_MASK                         equ 000Fh
T6CON_CKPS_POSN                          equ 0004h
T6CON_CKPS_POSITION                      equ 0004h
T6CON_CKPS_SIZE                          equ 0003h
T6CON_CKPS_LENGTH                        equ 0003h
T6CON_CKPS_MASK                          equ 0070h
T6CON_ON_POSN                            equ 0007h
T6CON_ON_POSITION                        equ 0007h
T6CON_ON_SIZE                            equ 0001h
T6CON_ON_LENGTH                          equ 0001h
T6CON_ON_MASK                            equ 0080h
T6CON_T6OUTPS_POSN                       equ 0000h
T6CON_T6OUTPS_POSITION                   equ 0000h
T6CON_T6OUTPS_SIZE                       equ 0004h
T6CON_T6OUTPS_LENGTH                     equ 0004h
T6CON_T6OUTPS_MASK                       equ 000Fh
T6CON_T6CKPS_POSN                        equ 0004h
T6CON_T6CKPS_POSITION                    equ 0004h
T6CON_T6CKPS_SIZE                        equ 0003h
T6CON_T6CKPS_LENGTH                      equ 0003h
T6CON_T6CKPS_MASK                        equ 0070h
T6CON_T6ON_POSN                          equ 0007h
T6CON_T6ON_POSITION                      equ 0007h
T6CON_T6ON_SIZE                          equ 0001h
T6CON_T6ON_LENGTH                        equ 0001h
T6CON_T6ON_MASK                          equ 0080h
T6CON_T6OUTPS0_POSN                      equ 0000h
T6CON_T6OUTPS0_POSITION                  equ 0000h
T6CON_T6OUTPS0_SIZE                      equ 0001h
T6CON_T6OUTPS0_LENGTH                    equ 0001h
T6CON_T6OUTPS0_MASK                      equ 0001h
T6CON_T6OUTPS1_POSN                      equ 0001h
T6CON_T6OUTPS1_POSITION                  equ 0001h
T6CON_T6OUTPS1_SIZE                      equ 0001h
T6CON_T6OUTPS1_LENGTH                    equ 0001h
T6CON_T6OUTPS1_MASK                      equ 0002h
T6CON_T6OUTPS2_POSN                      equ 0002h
T6CON_T6OUTPS2_POSITION                  equ 0002h
T6CON_T6OUTPS2_SIZE                      equ 0001h
T6CON_T6OUTPS2_LENGTH                    equ 0001h
T6CON_T6OUTPS2_MASK                      equ 0004h
T6CON_T6OUTPS3_POSN                      equ 0003h
T6CON_T6OUTPS3_POSITION                  equ 0003h
T6CON_T6OUTPS3_SIZE                      equ 0001h
T6CON_T6OUTPS3_LENGTH                    equ 0001h
T6CON_T6OUTPS3_MASK                      equ 0008h
T6CON_T6CKPS0_POSN                       equ 0004h
T6CON_T6CKPS0_POSITION                   equ 0004h
T6CON_T6CKPS0_SIZE                       equ 0001h
T6CON_T6CKPS0_LENGTH                     equ 0001h
T6CON_T6CKPS0_MASK                       equ 0010h
T6CON_T6CKPS1_POSN                       equ 0005h
T6CON_T6CKPS1_POSITION                   equ 0005h
T6CON_T6CKPS1_SIZE                       equ 0001h
T6CON_T6CKPS1_LENGTH                     equ 0001h
T6CON_T6CKPS1_MASK                       equ 0020h
T6CON_T6CKPS2_POSN                       equ 0006h
T6CON_T6CKPS2_POSITION                   equ 0006h
T6CON_T6CKPS2_SIZE                       equ 0001h
T6CON_T6CKPS2_LENGTH                     equ 0001h
T6CON_T6CKPS2_MASK                       equ 0040h
T6CON_OUTPS0_POSN                        equ 0000h
T6CON_OUTPS0_POSITION                    equ 0000h
T6CON_OUTPS0_SIZE                        equ 0001h
T6CON_OUTPS0_LENGTH                      equ 0001h
T6CON_OUTPS0_MASK                        equ 0001h
T6CON_OUTPS1_POSN                        equ 0001h
T6CON_OUTPS1_POSITION                    equ 0001h
T6CON_OUTPS1_SIZE                        equ 0001h
T6CON_OUTPS1_LENGTH                      equ 0001h
T6CON_OUTPS1_MASK                        equ 0002h
T6CON_OUTPS2_POSN                        equ 0002h
T6CON_OUTPS2_POSITION                    equ 0002h
T6CON_OUTPS2_SIZE                        equ 0001h
T6CON_OUTPS2_LENGTH                      equ 0001h
T6CON_OUTPS2_MASK                        equ 0004h
T6CON_OUTPS3_POSN                        equ 0003h
T6CON_OUTPS3_POSITION                    equ 0003h
T6CON_OUTPS3_SIZE                        equ 0001h
T6CON_OUTPS3_LENGTH                      equ 0001h
T6CON_OUTPS3_MASK                        equ 0008h
T6CON_CKPS0_POSN                         equ 0004h
T6CON_CKPS0_POSITION                     equ 0004h
T6CON_CKPS0_SIZE                         equ 0001h
T6CON_CKPS0_LENGTH                       equ 0001h
T6CON_CKPS0_MASK                         equ 0010h
T6CON_CKPS1_POSN                         equ 0005h
T6CON_CKPS1_POSITION                     equ 0005h
T6CON_CKPS1_SIZE                         equ 0001h
T6CON_CKPS1_LENGTH                       equ 0001h
T6CON_CKPS1_MASK                         equ 0020h
T6CON_CKPS2_POSN                         equ 0006h
T6CON_CKPS2_POSITION                     equ 0006h
T6CON_CKPS2_SIZE                         equ 0001h
T6CON_CKPS2_LENGTH                       equ 0001h
T6CON_CKPS2_MASK                         equ 0040h
T6CON_TMR6ON_POSN                        equ 0007h
T6CON_TMR6ON_POSITION                    equ 0007h
T6CON_TMR6ON_SIZE                        equ 0001h
T6CON_TMR6ON_LENGTH                      equ 0001h
T6CON_TMR6ON_MASK                        equ 0080h

// Register: T6HLT
#define T6HLT T6HLT
T6HLT                                    equ 041Dh
// bitfield definitions
T6HLT_MODE_POSN                          equ 0000h
T6HLT_MODE_POSITION                      equ 0000h
T6HLT_MODE_SIZE                          equ 0004h
T6HLT_MODE_LENGTH                        equ 0004h
T6HLT_MODE_MASK                          equ 000Fh
T6HLT_CKSYNC_POSN                        equ 0005h
T6HLT_CKSYNC_POSITION                    equ 0005h
T6HLT_CKSYNC_SIZE                        equ 0001h
T6HLT_CKSYNC_LENGTH                      equ 0001h
T6HLT_CKSYNC_MASK                        equ 0020h
T6HLT_CKPOL_POSN                         equ 0006h
T6HLT_CKPOL_POSITION                     equ 0006h
T6HLT_CKPOL_SIZE                         equ 0001h
T6HLT_CKPOL_LENGTH                       equ 0001h
T6HLT_CKPOL_MASK                         equ 0040h
T6HLT_PSYNC_POSN                         equ 0007h
T6HLT_PSYNC_POSITION                     equ 0007h
T6HLT_PSYNC_SIZE                         equ 0001h
T6HLT_PSYNC_LENGTH                       equ 0001h
T6HLT_PSYNC_MASK                         equ 0080h
T6HLT_MODE0_POSN                         equ 0000h
T6HLT_MODE0_POSITION                     equ 0000h
T6HLT_MODE0_SIZE                         equ 0001h
T6HLT_MODE0_LENGTH                       equ 0001h
T6HLT_MODE0_MASK                         equ 0001h
T6HLT_MODE1_POSN                         equ 0001h
T6HLT_MODE1_POSITION                     equ 0001h
T6HLT_MODE1_SIZE                         equ 0001h
T6HLT_MODE1_LENGTH                       equ 0001h
T6HLT_MODE1_MASK                         equ 0002h
T6HLT_MODE2_POSN                         equ 0002h
T6HLT_MODE2_POSITION                     equ 0002h
T6HLT_MODE2_SIZE                         equ 0001h
T6HLT_MODE2_LENGTH                       equ 0001h
T6HLT_MODE2_MASK                         equ 0004h
T6HLT_MODE3_POSN                         equ 0003h
T6HLT_MODE3_POSITION                     equ 0003h
T6HLT_MODE3_SIZE                         equ 0001h
T6HLT_MODE3_LENGTH                       equ 0001h
T6HLT_MODE3_MASK                         equ 0008h
T6HLT_T6MODE_POSN                        equ 0000h
T6HLT_T6MODE_POSITION                    equ 0000h
T6HLT_T6MODE_SIZE                        equ 0004h
T6HLT_T6MODE_LENGTH                      equ 0004h
T6HLT_T6MODE_MASK                        equ 000Fh
T6HLT_T6CKSYNC_POSN                      equ 0005h
T6HLT_T6CKSYNC_POSITION                  equ 0005h
T6HLT_T6CKSYNC_SIZE                      equ 0001h
T6HLT_T6CKSYNC_LENGTH                    equ 0001h
T6HLT_T6CKSYNC_MASK                      equ 0020h
T6HLT_T6CKPOL_POSN                       equ 0006h
T6HLT_T6CKPOL_POSITION                   equ 0006h
T6HLT_T6CKPOL_SIZE                       equ 0001h
T6HLT_T6CKPOL_LENGTH                     equ 0001h
T6HLT_T6CKPOL_MASK                       equ 0040h
T6HLT_T6PSYNC_POSN                       equ 0007h
T6HLT_T6PSYNC_POSITION                   equ 0007h
T6HLT_T6PSYNC_SIZE                       equ 0001h
T6HLT_T6PSYNC_LENGTH                     equ 0001h
T6HLT_T6PSYNC_MASK                       equ 0080h
T6HLT_T6MODE0_POSN                       equ 0000h
T6HLT_T6MODE0_POSITION                   equ 0000h
T6HLT_T6MODE0_SIZE                       equ 0001h
T6HLT_T6MODE0_LENGTH                     equ 0001h
T6HLT_T6MODE0_MASK                       equ 0001h
T6HLT_T6MODE1_POSN                       equ 0001h
T6HLT_T6MODE1_POSITION                   equ 0001h
T6HLT_T6MODE1_SIZE                       equ 0001h
T6HLT_T6MODE1_LENGTH                     equ 0001h
T6HLT_T6MODE1_MASK                       equ 0002h
T6HLT_T6MODE2_POSN                       equ 0002h
T6HLT_T6MODE2_POSITION                   equ 0002h
T6HLT_T6MODE2_SIZE                       equ 0001h
T6HLT_T6MODE2_LENGTH                     equ 0001h
T6HLT_T6MODE2_MASK                       equ 0004h
T6HLT_T6MODE3_POSN                       equ 0003h
T6HLT_T6MODE3_POSITION                   equ 0003h
T6HLT_T6MODE3_SIZE                       equ 0001h
T6HLT_T6MODE3_LENGTH                     equ 0001h
T6HLT_T6MODE3_MASK                       equ 0008h

// Register: T6CLKCON
#define T6CLKCON T6CLKCON
T6CLKCON                                 equ 041Eh
// bitfield definitions
T6CLKCON_T6CS_POSN                       equ 0000h
T6CLKCON_T6CS_POSITION                   equ 0000h
T6CLKCON_T6CS_SIZE                       equ 0003h
T6CLKCON_T6CS_LENGTH                     equ 0003h
T6CLKCON_T6CS_MASK                       equ 0007h
T6CLKCON_T6CS0_POSN                      equ 0000h
T6CLKCON_T6CS0_POSITION                  equ 0000h
T6CLKCON_T6CS0_SIZE                      equ 0001h
T6CLKCON_T6CS0_LENGTH                    equ 0001h
T6CLKCON_T6CS0_MASK                      equ 0001h
T6CLKCON_T6CS1_POSN                      equ 0001h
T6CLKCON_T6CS1_POSITION                  equ 0001h
T6CLKCON_T6CS1_SIZE                      equ 0001h
T6CLKCON_T6CS1_LENGTH                    equ 0001h
T6CLKCON_T6CS1_MASK                      equ 0002h
T6CLKCON_T6CS2_POSN                      equ 0002h
T6CLKCON_T6CS2_POSITION                  equ 0002h
T6CLKCON_T6CS2_SIZE                      equ 0001h
T6CLKCON_T6CS2_LENGTH                    equ 0001h
T6CLKCON_T6CS2_MASK                      equ 0004h

// Register: T6RST
#define T6RST T6RST
T6RST                                    equ 041Fh
// bitfield definitions
T6RST_RSEL_POSN                          equ 0000h
T6RST_RSEL_POSITION                      equ 0000h
T6RST_RSEL_SIZE                          equ 0004h
T6RST_RSEL_LENGTH                        equ 0004h
T6RST_RSEL_MASK                          equ 000Fh
T6RST_RSEL0_POSN                         equ 0000h
T6RST_RSEL0_POSITION                     equ 0000h
T6RST_RSEL0_SIZE                         equ 0001h
T6RST_RSEL0_LENGTH                       equ 0001h
T6RST_RSEL0_MASK                         equ 0001h
T6RST_RSEL1_POSN                         equ 0001h
T6RST_RSEL1_POSITION                     equ 0001h
T6RST_RSEL1_SIZE                         equ 0001h
T6RST_RSEL1_LENGTH                       equ 0001h
T6RST_RSEL1_MASK                         equ 0002h
T6RST_RSEL2_POSN                         equ 0002h
T6RST_RSEL2_POSITION                     equ 0002h
T6RST_RSEL2_SIZE                         equ 0001h
T6RST_RSEL2_LENGTH                       equ 0001h
T6RST_RSEL2_MASK                         equ 0004h
T6RST_RSEL3_POSN                         equ 0003h
T6RST_RSEL3_POSITION                     equ 0003h
T6RST_RSEL3_SIZE                         equ 0001h
T6RST_RSEL3_LENGTH                       equ 0001h
T6RST_RSEL3_MASK                         equ 0008h
T6RST_T6RSEL_POSN                        equ 0000h
T6RST_T6RSEL_POSITION                    equ 0000h
T6RST_T6RSEL_SIZE                        equ 0004h
T6RST_T6RSEL_LENGTH                      equ 0004h
T6RST_T6RSEL_MASK                        equ 000Fh
T6RST_T6RSEL0_POSN                       equ 0000h
T6RST_T6RSEL0_POSITION                   equ 0000h
T6RST_T6RSEL0_SIZE                       equ 0001h
T6RST_T6RSEL0_LENGTH                     equ 0001h
T6RST_T6RSEL0_MASK                       equ 0001h
T6RST_T6RSEL1_POSN                       equ 0001h
T6RST_T6RSEL1_POSITION                   equ 0001h
T6RST_T6RSEL1_SIZE                       equ 0001h
T6RST_T6RSEL1_LENGTH                     equ 0001h
T6RST_T6RSEL1_MASK                       equ 0002h
T6RST_T6RSEL2_POSN                       equ 0002h
T6RST_T6RSEL2_POSITION                   equ 0002h
T6RST_T6RSEL2_SIZE                       equ 0001h
T6RST_T6RSEL2_LENGTH                     equ 0001h
T6RST_T6RSEL2_MASK                       equ 0004h
T6RST_T6RSEL3_POSN                       equ 0003h
T6RST_T6RSEL3_POSITION                   equ 0003h
T6RST_T6RSEL3_SIZE                       equ 0001h
T6RST_T6RSEL3_LENGTH                     equ 0001h
T6RST_T6RSEL3_MASK                       equ 0008h

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
CWG1DBR                                  equ 0691h
// bitfield definitions
CWG1DBR_DBR_POSN                         equ 0000h
CWG1DBR_DBR_POSITION                     equ 0000h
CWG1DBR_DBR_SIZE                         equ 0006h
CWG1DBR_DBR_LENGTH                       equ 0006h
CWG1DBR_DBR_MASK                         equ 003Fh
CWG1DBR_DBR0_POSN                        equ 0000h
CWG1DBR_DBR0_POSITION                    equ 0000h
CWG1DBR_DBR0_SIZE                        equ 0001h
CWG1DBR_DBR0_LENGTH                      equ 0001h
CWG1DBR_DBR0_MASK                        equ 0001h
CWG1DBR_DBR1_POSN                        equ 0001h
CWG1DBR_DBR1_POSITION                    equ 0001h
CWG1DBR_DBR1_SIZE                        equ 0001h
CWG1DBR_DBR1_LENGTH                      equ 0001h
CWG1DBR_DBR1_MASK                        equ 0002h
CWG1DBR_DBR2_POSN                        equ 0002h
CWG1DBR_DBR2_POSITION                    equ 0002h
CWG1DBR_DBR2_SIZE                        equ 0001h
CWG1DBR_DBR2_LENGTH                      equ 0001h
CWG1DBR_DBR2_MASK                        equ 0004h
CWG1DBR_DBR3_POSN                        equ 0003h
CWG1DBR_DBR3_POSITION                    equ 0003h
CWG1DBR_DBR3_SIZE                        equ 0001h
CWG1DBR_DBR3_LENGTH                      equ 0001h
CWG1DBR_DBR3_MASK                        equ 0008h
CWG1DBR_DBR4_POSN                        equ 0004h
CWG1DBR_DBR4_POSITION                    equ 0004h
CWG1DBR_DBR4_SIZE                        equ 0001h
CWG1DBR_DBR4_LENGTH                      equ 0001h
CWG1DBR_DBR4_MASK                        equ 0010h
CWG1DBR_DBR5_POSN                        equ 0005h
CWG1DBR_DBR5_POSITION                    equ 0005h
CWG1DBR_DBR5_SIZE                        equ 0001h
CWG1DBR_DBR5_LENGTH                      equ 0001h
CWG1DBR_DBR5_MASK                        equ 0020h
CWG1DBR_CWG1DBR_POSN                     equ 0000h
CWG1DBR_CWG1DBR_POSITION                 equ 0000h
CWG1DBR_CWG1DBR_SIZE                     equ 0006h
CWG1DBR_CWG1DBR_LENGTH                   equ 0006h
CWG1DBR_CWG1DBR_MASK                     equ 003Fh
CWG1DBR_CWG1DBR0_POSN                    equ 0000h
CWG1DBR_CWG1DBR0_POSITION                equ 0000h
CWG1DBR_CWG1DBR0_SIZE                    equ 0001h
CWG1DBR_CWG1DBR0_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR0_MASK                    equ 0001h
CWG1DBR_CWG1DBR1_POSN                    equ 0001h
CWG1DBR_CWG1DBR1_POSITION                equ 0001h
CWG1DBR_CWG1DBR1_SIZE                    equ 0001h
CWG1DBR_CWG1DBR1_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR1_MASK                    equ 0002h
CWG1DBR_CWG1DBR2_POSN                    equ 0002h
CWG1DBR_CWG1DBR2_POSITION                equ 0002h
CWG1DBR_CWG1DBR2_SIZE                    equ 0001h
CWG1DBR_CWG1DBR2_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR2_MASK                    equ 0004h
CWG1DBR_CWG1DBR3_POSN                    equ 0003h
CWG1DBR_CWG1DBR3_POSITION                equ 0003h
CWG1DBR_CWG1DBR3_SIZE                    equ 0001h
CWG1DBR_CWG1DBR3_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR3_MASK                    equ 0008h
CWG1DBR_CWG1DBR4_POSN                    equ 0004h
CWG1DBR_CWG1DBR4_POSITION                equ 0004h
CWG1DBR_CWG1DBR4_SIZE                    equ 0001h
CWG1DBR_CWG1DBR4_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR4_MASK                    equ 0010h
CWG1DBR_CWG1DBR5_POSN                    equ 0005h
CWG1DBR_CWG1DBR5_POSITION                equ 0005h
CWG1DBR_CWG1DBR5_SIZE                    equ 0001h
CWG1DBR_CWG1DBR5_LENGTH                  equ 0001h
CWG1DBR_CWG1DBR5_MASK                    equ 0020h

// Register: CWG1DBF
#define CWG1DBF CWG1DBF
CWG1DBF                                  equ 0692h
// bitfield definitions
CWG1DBF_DBF_POSN                         equ 0000h
CWG1DBF_DBF_POSITION                     equ 0000h
CWG1DBF_DBF_SIZE                         equ 0006h
CWG1DBF_DBF_LENGTH                       equ 0006h
CWG1DBF_DBF_MASK                         equ 003Fh
CWG1DBF_DBF0_POSN                        equ 0000h
CWG1DBF_DBF0_POSITION                    equ 0000h
CWG1DBF_DBF0_SIZE                        equ 0001h
CWG1DBF_DBF0_LENGTH                      equ 0001h
CWG1DBF_DBF0_MASK                        equ 0001h
CWG1DBF_DBF1_POSN                        equ 0001h
CWG1DBF_DBF1_POSITION                    equ 0001h
CWG1DBF_DBF1_SIZE                        equ 0001h
CWG1DBF_DBF1_LENGTH                      equ 0001h
CWG1DBF_DBF1_MASK                        equ 0002h
CWG1DBF_DBF2_POSN                        equ 0002h
CWG1DBF_DBF2_POSITION                    equ 0002h
CWG1DBF_DBF2_SIZE                        equ 0001h
CWG1DBF_DBF2_LENGTH                      equ 0001h
CWG1DBF_DBF2_MASK                        equ 0004h
CWG1DBF_DBF3_POSN                        equ 0003h
CWG1DBF_DBF3_POSITION                    equ 0003h
CWG1DBF_DBF3_SIZE                        equ 0001h
CWG1DBF_DBF3_LENGTH                      equ 0001h
CWG1DBF_DBF3_MASK                        equ 0008h
CWG1DBF_DBF4_POSN                        equ 0004h
CWG1DBF_DBF4_POSITION                    equ 0004h
CWG1DBF_DBF4_SIZE                        equ 0001h
CWG1DBF_DBF4_LENGTH                      equ 0001h
CWG1DBF_DBF4_MASK                        equ 0010h
CWG1DBF_DBF5_POSN                        equ 0005h
CWG1DBF_DBF5_POSITION                    equ 0005h
CWG1DBF_DBF5_SIZE                        equ 0001h
CWG1DBF_DBF5_LENGTH                      equ 0001h
CWG1DBF_DBF5_MASK                        equ 0020h
CWG1DBF_CWG1DBF_POSN                     equ 0000h
CWG1DBF_CWG1DBF_POSITION                 equ 0000h
CWG1DBF_CWG1DBF_SIZE                     equ 0006h
CWG1DBF_CWG1DBF_LENGTH                   equ 0006h
CWG1DBF_CWG1DBF_MASK                     equ 003Fh
CWG1DBF_CWG1DBF0_POSN                    equ 0000h
CWG1DBF_CWG1DBF0_POSITION                equ 0000h
CWG1DBF_CWG1DBF0_SIZE                    equ 0001h
CWG1DBF_CWG1DBF0_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF0_MASK                    equ 0001h
CWG1DBF_CWG1DBF1_POSN                    equ 0001h
CWG1DBF_CWG1DBF1_POSITION                equ 0001h
CWG1DBF_CWG1DBF1_SIZE                    equ 0001h
CWG1DBF_CWG1DBF1_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF1_MASK                    equ 0002h
CWG1DBF_CWG1DBF2_POSN                    equ 0002h
CWG1DBF_CWG1DBF2_POSITION                equ 0002h
CWG1DBF_CWG1DBF2_SIZE                    equ 0001h
CWG1DBF_CWG1DBF2_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF2_MASK                    equ 0004h
CWG1DBF_CWG1DBF3_POSN                    equ 0003h
CWG1DBF_CWG1DBF3_POSITION                equ 0003h
CWG1DBF_CWG1DBF3_SIZE                    equ 0001h
CWG1DBF_CWG1DBF3_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF3_MASK                    equ 0008h
CWG1DBF_CWG1DBF4_POSN                    equ 0004h
CWG1DBF_CWG1DBF4_POSITION                equ 0004h
CWG1DBF_CWG1DBF4_SIZE                    equ 0001h
CWG1DBF_CWG1DBF4_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF4_MASK                    equ 0010h
CWG1DBF_CWG1DBF5_POSN                    equ 0005h
CWG1DBF_CWG1DBF5_POSITION                equ 0005h
CWG1DBF_CWG1DBF5_SIZE                    equ 0001h
CWG1DBF_CWG1DBF5_LENGTH                  equ 0001h
CWG1DBF_CWG1DBF5_MASK                    equ 0020h

// Register: CWG1AS0
#define CWG1AS0 CWG1AS0
CWG1AS0                                  equ 0693h
// bitfield definitions
CWG1AS0_LSAC_POSN                        equ 0002h
CWG1AS0_LSAC_POSITION                    equ 0002h
CWG1AS0_LSAC_SIZE                        equ 0002h
CWG1AS0_LSAC_LENGTH                      equ 0002h
CWG1AS0_LSAC_MASK                        equ 000Ch
CWG1AS0_LSBD_POSN                        equ 0004h
CWG1AS0_LSBD_POSITION                    equ 0004h
CWG1AS0_LSBD_SIZE                        equ 0002h
CWG1AS0_LSBD_LENGTH                      equ 0002h
CWG1AS0_LSBD_MASK                        equ 0030h
CWG1AS0_REN_POSN                         equ 0006h
CWG1AS0_REN_POSITION                     equ 0006h
CWG1AS0_REN_SIZE                         equ 0001h
CWG1AS0_REN_LENGTH                       equ 0001h
CWG1AS0_REN_MASK                         equ 0040h
CWG1AS0_SHUTDOWN_POSN                    equ 0007h
CWG1AS0_SHUTDOWN_POSITION                equ 0007h
CWG1AS0_SHUTDOWN_SIZE                    equ 0001h
CWG1AS0_SHUTDOWN_LENGTH                  equ 0001h
CWG1AS0_SHUTDOWN_MASK                    equ 0080h
CWG1AS0_LSAC0_POSN                       equ 0002h
CWG1AS0_LSAC0_POSITION                   equ 0002h
CWG1AS0_LSAC0_SIZE                       equ 0001h
CWG1AS0_LSAC0_LENGTH                     equ 0001h
CWG1AS0_LSAC0_MASK                       equ 0004h
CWG1AS0_LSAC1_POSN                       equ 0003h
CWG1AS0_LSAC1_POSITION                   equ 0003h
CWG1AS0_LSAC1_SIZE                       equ 0001h
CWG1AS0_LSAC1_LENGTH                     equ 0001h
CWG1AS0_LSAC1_MASK                       equ 0008h
CWG1AS0_LSBD0_POSN                       equ 0004h
CWG1AS0_LSBD0_POSITION                   equ 0004h
CWG1AS0_LSBD0_SIZE                       equ 0001h
CWG1AS0_LSBD0_LENGTH                     equ 0001h
CWG1AS0_LSBD0_MASK                       equ 0010h
CWG1AS0_LSBD1_POSN                       equ 0005h
CWG1AS0_LSBD1_POSITION                   equ 0005h
CWG1AS0_LSBD1_SIZE                       equ 0001h
CWG1AS0_LSBD1_LENGTH                     equ 0001h
CWG1AS0_LSBD1_MASK                       equ 0020h
CWG1AS0_CWG1LSAC_POSN                    equ 0002h
CWG1AS0_CWG1LSAC_POSITION                equ 0002h
CWG1AS0_CWG1LSAC_SIZE                    equ 0002h
CWG1AS0_CWG1LSAC_LENGTH                  equ 0002h
CWG1AS0_CWG1LSAC_MASK                    equ 000Ch
CWG1AS0_CWG1LSBD_POSN                    equ 0004h
CWG1AS0_CWG1LSBD_POSITION                equ 0004h
CWG1AS0_CWG1LSBD_SIZE                    equ 0002h
CWG1AS0_CWG1LSBD_LENGTH                  equ 0002h
CWG1AS0_CWG1LSBD_MASK                    equ 0030h
CWG1AS0_CWG1REN_POSN                     equ 0006h
CWG1AS0_CWG1REN_POSITION                 equ 0006h
CWG1AS0_CWG1REN_SIZE                     equ 0001h
CWG1AS0_CWG1REN_LENGTH                   equ 0001h
CWG1AS0_CWG1REN_MASK                     equ 0040h
CWG1AS0_CWG1SHUTDOWN_POSN                equ 0007h
CWG1AS0_CWG1SHUTDOWN_POSITION            equ 0007h
CWG1AS0_CWG1SHUTDOWN_SIZE                equ 0001h
CWG1AS0_CWG1SHUTDOWN_LENGTH              equ 0001h
CWG1AS0_CWG1SHUTDOWN_MASK                equ 0080h
CWG1AS0_CWG1LSAC0_POSN                   equ 0002h
CWG1AS0_CWG1LSAC0_POSITION               equ 0002h
CWG1AS0_CWG1LSAC0_SIZE                   equ 0001h
CWG1AS0_CWG1LSAC0_LENGTH                 equ 0001h
CWG1AS0_CWG1LSAC0_MASK                   equ 0004h
CWG1AS0_CWG1LSAC1_POSN                   equ 0003h
CWG1AS0_CWG1LSAC1_POSITION               equ 0003h
CWG1AS0_CWG1LSAC1_SIZE                   equ 0001h
CWG1AS0_CWG1LSAC1_LENGTH                 equ 0001h
CWG1AS0_CWG1LSAC1_MASK                   equ 0008h
CWG1AS0_CWG1LSBD0_POSN                   equ 0004h
CWG1AS0_CWG1LSBD0_POSITION               equ 0004h
CWG1AS0_CWG1LSBD0_SIZE                   equ 0001h
CWG1AS0_CWG1LSBD0_LENGTH                 equ 0001h
CWG1AS0_CWG1LSBD0_MASK                   equ 0010h
CWG1AS0_CWG1LSBD1_POSN                   equ 0005h
CWG1AS0_CWG1LSBD1_POSITION               equ 0005h
CWG1AS0_CWG1LSBD1_SIZE                   equ 0001h
CWG1AS0_CWG1LSBD1_LENGTH                 equ 0001h
CWG1AS0_CWG1LSBD1_MASK                   equ 0020h

// Register: CWG1AS1
#define CWG1AS1 CWG1AS1
CWG1AS1                                  equ 0694h
// bitfield definitions
CWG1AS1_INAS_POSN                        equ 0000h
CWG1AS1_INAS_POSITION                    equ 0000h
CWG1AS1_INAS_SIZE                        equ 0001h
CWG1AS1_INAS_LENGTH                      equ 0001h
CWG1AS1_INAS_MASK                        equ 0001h
CWG1AS1_C1AS_POSN                        equ 0001h
CWG1AS1_C1AS_POSITION                    equ 0001h
CWG1AS1_C1AS_SIZE                        equ 0001h
CWG1AS1_C1AS_LENGTH                      equ 0001h
CWG1AS1_C1AS_MASK                        equ 0002h
CWG1AS1_C2AS_POSN                        equ 0002h
CWG1AS1_C2AS_POSITION                    equ 0002h
CWG1AS1_C2AS_SIZE                        equ 0001h
CWG1AS1_C2AS_LENGTH                      equ 0001h
CWG1AS1_C2AS_MASK                        equ 0004h
CWG1AS1_TMR2AS_POSN                      equ 0004h
CWG1AS1_TMR2AS_POSITION                  equ 0004h
CWG1AS1_TMR2AS_SIZE                      equ 0001h
CWG1AS1_TMR2AS_LENGTH                    equ 0001h
CWG1AS1_TMR2AS_MASK                      equ 0010h
CWG1AS1_TMR4AS_POSN                      equ 0005h
CWG1AS1_TMR4AS_POSITION                  equ 0005h
CWG1AS1_TMR4AS_SIZE                      equ 0001h
CWG1AS1_TMR4AS_LENGTH                    equ 0001h
CWG1AS1_TMR4AS_MASK                      equ 0020h
CWG1AS1_TMR6AS_POSN                      equ 0006h
CWG1AS1_TMR6AS_POSITION                  equ 0006h
CWG1AS1_TMR6AS_SIZE                      equ 0001h
CWG1AS1_TMR6AS_LENGTH                    equ 0001h
CWG1AS1_TMR6AS_MASK                      equ 0040h
CWG1AS1_CWG1INAS_POSN                    equ 0000h
CWG1AS1_CWG1INAS_POSITION                equ 0000h
CWG1AS1_CWG1INAS_SIZE                    equ 0001h
CWG1AS1_CWG1INAS_LENGTH                  equ 0001h
CWG1AS1_CWG1INAS_MASK                    equ 0001h
CWG1AS1_CWG1C1AS_POSN                    equ 0001h
CWG1AS1_CWG1C1AS_POSITION                equ 0001h
CWG1AS1_CWG1C1AS_SIZE                    equ 0001h
CWG1AS1_CWG1C1AS_LENGTH                  equ 0001h
CWG1AS1_CWG1C1AS_MASK                    equ 0002h
CWG1AS1_CWG1C2AS_POSN                    equ 0002h
CWG1AS1_CWG1C2AS_POSITION                equ 0002h
CWG1AS1_CWG1C2AS_SIZE                    equ 0001h
CWG1AS1_CWG1C2AS_LENGTH                  equ 0001h
CWG1AS1_CWG1C2AS_MASK                    equ 0004h
CWG1AS1_CWG1TMR2AS_POSN                  equ 0004h
CWG1AS1_CWG1TMR2AS_POSITION              equ 0004h
CWG1AS1_CWG1TMR2AS_SIZE                  equ 0001h
CWG1AS1_CWG1TMR2AS_LENGTH                equ 0001h
CWG1AS1_CWG1TMR2AS_MASK                  equ 0010h
CWG1AS1_CWG1TMR4AS_POSN                  equ 0005h
CWG1AS1_CWG1TMR4AS_POSITION              equ 0005h
CWG1AS1_CWG1TMR4AS_SIZE                  equ 0001h
CWG1AS1_CWG1TMR4AS_LENGTH                equ 0001h
CWG1AS1_CWG1TMR4AS_MASK                  equ 0020h
CWG1AS1_CWG1TMR6AS_POSN                  equ 0006h
CWG1AS1_CWG1TMR6AS_POSITION              equ 0006h
CWG1AS1_CWG1TMR6AS_SIZE                  equ 0001h
CWG1AS1_CWG1TMR6AS_LENGTH                equ 0001h
CWG1AS1_CWG1TMR6AS_MASK                  equ 0040h

// Register: CWG1OCON0
#define CWG1OCON0 CWG1OCON0
CWG1OCON0                                equ 0695h
// bitfield definitions
CWG1OCON0_STRA_POSN                      equ 0000h
CWG1OCON0_STRA_POSITION                  equ 0000h
CWG1OCON0_STRA_SIZE                      equ 0001h
CWG1OCON0_STRA_LENGTH                    equ 0001h
CWG1OCON0_STRA_MASK                      equ 0001h
CWG1OCON0_STRB_POSN                      equ 0001h
CWG1OCON0_STRB_POSITION                  equ 0001h
CWG1OCON0_STRB_SIZE                      equ 0001h
CWG1OCON0_STRB_LENGTH                    equ 0001h
CWG1OCON0_STRB_MASK                      equ 0002h
CWG1OCON0_STRC_POSN                      equ 0002h
CWG1OCON0_STRC_POSITION                  equ 0002h
CWG1OCON0_STRC_SIZE                      equ 0001h
CWG1OCON0_STRC_LENGTH                    equ 0001h
CWG1OCON0_STRC_MASK                      equ 0004h
CWG1OCON0_STRD_POSN                      equ 0003h
CWG1OCON0_STRD_POSITION                  equ 0003h
CWG1OCON0_STRD_SIZE                      equ 0001h
CWG1OCON0_STRD_LENGTH                    equ 0001h
CWG1OCON0_STRD_MASK                      equ 0008h
CWG1OCON0_OVRA_POSN                      equ 0004h
CWG1OCON0_OVRA_POSITION                  equ 0004h
CWG1OCON0_OVRA_SIZE                      equ 0001h
CWG1OCON0_OVRA_LENGTH                    equ 0001h
CWG1OCON0_OVRA_MASK                      equ 0010h
CWG1OCON0_OVRB_POSN                      equ 0005h
CWG1OCON0_OVRB_POSITION                  equ 0005h
CWG1OCON0_OVRB_SIZE                      equ 0001h
CWG1OCON0_OVRB_LENGTH                    equ 0001h
CWG1OCON0_OVRB_MASK                      equ 0020h
CWG1OCON0_OVRC_POSN                      equ 0006h
CWG1OCON0_OVRC_POSITION                  equ 0006h
CWG1OCON0_OVRC_SIZE                      equ 0001h
CWG1OCON0_OVRC_LENGTH                    equ 0001h
CWG1OCON0_OVRC_MASK                      equ 0040h
CWG1OCON0_OVRD_POSN                      equ 0007h
CWG1OCON0_OVRD_POSITION                  equ 0007h
CWG1OCON0_OVRD_SIZE                      equ 0001h
CWG1OCON0_OVRD_LENGTH                    equ 0001h
CWG1OCON0_OVRD_MASK                      equ 0080h
CWG1OCON0_CWG1STRA_POSN                  equ 0000h
CWG1OCON0_CWG1STRA_POSITION              equ 0000h
CWG1OCON0_CWG1STRA_SIZE                  equ 0001h
CWG1OCON0_CWG1STRA_LENGTH                equ 0001h
CWG1OCON0_CWG1STRA_MASK                  equ 0001h
CWG1OCON0_CWG1STRB_POSN                  equ 0001h
CWG1OCON0_CWG1STRB_POSITION              equ 0001h
CWG1OCON0_CWG1STRB_SIZE                  equ 0001h
CWG1OCON0_CWG1STRB_LENGTH                equ 0001h
CWG1OCON0_CWG1STRB_MASK                  equ 0002h
CWG1OCON0_CWG1STRC_POSN                  equ 0002h
CWG1OCON0_CWG1STRC_POSITION              equ 0002h
CWG1OCON0_CWG1STRC_SIZE                  equ 0001h
CWG1OCON0_CWG1STRC_LENGTH                equ 0001h
CWG1OCON0_CWG1STRC_MASK                  equ 0004h
CWG1OCON0_CWG1STRD_POSN                  equ 0003h
CWG1OCON0_CWG1STRD_POSITION              equ 0003h
CWG1OCON0_CWG1STRD_SIZE                  equ 0001h
CWG1OCON0_CWG1STRD_LENGTH                equ 0001h
CWG1OCON0_CWG1STRD_MASK                  equ 0008h
CWG1OCON0_CWG1OVRA_POSN                  equ 0004h
CWG1OCON0_CWG1OVRA_POSITION              equ 0004h
CWG1OCON0_CWG1OVRA_SIZE                  equ 0001h
CWG1OCON0_CWG1OVRA_LENGTH                equ 0001h
CWG1OCON0_CWG1OVRA_MASK                  equ 0010h
CWG1OCON0_CWG1OVRB_POSN                  equ 0005h
CWG1OCON0_CWG1OVRB_POSITION              equ 0005h
CWG1OCON0_CWG1OVRB_SIZE                  equ 0001h
CWG1OCON0_CWG1OVRB_LENGTH                equ 0001h
CWG1OCON0_CWG1OVRB_MASK                  equ 0020h
CWG1OCON0_CWG1OVRC_POSN                  equ 0006h
CWG1OCON0_CWG1OVRC_POSITION              equ 0006h
CWG1OCON0_CWG1OVRC_SIZE                  equ 0001h
CWG1OCON0_CWG1OVRC_LENGTH                equ 0001h
CWG1OCON0_CWG1OVRC_MASK                  equ 0040h
CWG1OCON0_CWG1OVRD_POSN                  equ 0007h
CWG1OCON0_CWG1OVRD_POSITION              equ 0007h
CWG1OCON0_CWG1OVRD_SIZE                  equ 0001h
CWG1OCON0_CWG1OVRD_LENGTH                equ 0001h
CWG1OCON0_CWG1OVRD_MASK                  equ 0080h

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
CWG1CON0                                 equ 0696h
// bitfield definitions
CWG1CON0_MODE_POSN                       equ 0000h
CWG1CON0_MODE_POSITION                   equ 0000h
CWG1CON0_MODE_SIZE                       equ 0003h
CWG1CON0_MODE_LENGTH                     equ 0003h
CWG1CON0_MODE_MASK                       equ 0007h
CWG1CON0_LD_POSN                         equ 0006h
CWG1CON0_LD_POSITION                     equ 0006h
CWG1CON0_LD_SIZE                         equ 0001h
CWG1CON0_LD_LENGTH                       equ 0001h
CWG1CON0_LD_MASK                         equ 0040h
CWG1CON0_EN_POSN                         equ 0007h
CWG1CON0_EN_POSITION                     equ 0007h
CWG1CON0_EN_SIZE                         equ 0001h
CWG1CON0_EN_LENGTH                       equ 0001h
CWG1CON0_EN_MASK                         equ 0080h
CWG1CON0_MODE0_POSN                      equ 0000h
CWG1CON0_MODE0_POSITION                  equ 0000h
CWG1CON0_MODE0_SIZE                      equ 0001h
CWG1CON0_MODE0_LENGTH                    equ 0001h
CWG1CON0_MODE0_MASK                      equ 0001h
CWG1CON0_MODE1_POSN                      equ 0001h
CWG1CON0_MODE1_POSITION                  equ 0001h
CWG1CON0_MODE1_SIZE                      equ 0001h
CWG1CON0_MODE1_LENGTH                    equ 0001h
CWG1CON0_MODE1_MASK                      equ 0002h
CWG1CON0_MODE2_POSN                      equ 0002h
CWG1CON0_MODE2_POSITION                  equ 0002h
CWG1CON0_MODE2_SIZE                      equ 0001h
CWG1CON0_MODE2_LENGTH                    equ 0001h
CWG1CON0_MODE2_MASK                      equ 0004h
CWG1CON0_G1EN_POSN                       equ 0007h
CWG1CON0_G1EN_POSITION                   equ 0007h
CWG1CON0_G1EN_SIZE                       equ 0001h
CWG1CON0_G1EN_LENGTH                     equ 0001h
CWG1CON0_G1EN_MASK                       equ 0080h
CWG1CON0_CWG1MODE_POSN                   equ 0000h
CWG1CON0_CWG1MODE_POSITION               equ 0000h
CWG1CON0_CWG1MODE_SIZE                   equ 0003h
CWG1CON0_CWG1MODE_LENGTH                 equ 0003h
CWG1CON0_CWG1MODE_MASK                   equ 0007h
CWG1CON0_CWG1LD_POSN                     equ 0006h
CWG1CON0_CWG1LD_POSITION                 equ 0006h
CWG1CON0_CWG1LD_SIZE                     equ 0001h
CWG1CON0_CWG1LD_LENGTH                   equ 0001h
CWG1CON0_CWG1LD_MASK                     equ 0040h
CWG1CON0_CWG1EN_POSN                     equ 0007h
CWG1CON0_CWG1EN_POSITION                 equ 0007h
CWG1CON0_CWG1EN_SIZE                     equ 0001h
CWG1CON0_CWG1EN_LENGTH                   equ 0001h
CWG1CON0_CWG1EN_MASK                     equ 0080h
CWG1CON0_CWG1MODE0_POSN                  equ 0000h
CWG1CON0_CWG1MODE0_POSITION              equ 0000h
CWG1CON0_CWG1MODE0_SIZE                  equ 0001h
CWG1CON0_CWG1MODE0_LENGTH                equ 0001h
CWG1CON0_CWG1MODE0_MASK                  equ 0001h
CWG1CON0_CWG1MODE1_POSN                  equ 0001h
CWG1CON0_CWG1MODE1_POSITION              equ 0001h
CWG1CON0_CWG1MODE1_SIZE                  equ 0001h
CWG1CON0_CWG1MODE1_LENGTH                equ 0001h
CWG1CON0_CWG1MODE1_MASK                  equ 0002h
CWG1CON0_CWG1MODE2_POSN                  equ 0002h
CWG1CON0_CWG1MODE2_POSITION              equ 0002h
CWG1CON0_CWG1MODE2_SIZE                  equ 0001h
CWG1CON0_CWG1MODE2_LENGTH                equ 0001h
CWG1CON0_CWG1MODE2_MASK                  equ 0004h

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
CWG1CON1                                 equ 0697h
// bitfield definitions
CWG1CON1_POLA_POSN                       equ 0000h
CWG1CON1_POLA_POSITION                   equ 0000h
CWG1CON1_POLA_SIZE                       equ 0001h
CWG1CON1_POLA_LENGTH                     equ 0001h
CWG1CON1_POLA_MASK                       equ 0001h
CWG1CON1_POLB_POSN                       equ 0001h
CWG1CON1_POLB_POSITION                   equ 0001h
CWG1CON1_POLB_SIZE                       equ 0001h
CWG1CON1_POLB_LENGTH                     equ 0001h
CWG1CON1_POLB_MASK                       equ 0002h
CWG1CON1_POLC_POSN                       equ 0002h
CWG1CON1_POLC_POSITION                   equ 0002h
CWG1CON1_POLC_SIZE                       equ 0001h
CWG1CON1_POLC_LENGTH                     equ 0001h
CWG1CON1_POLC_MASK                       equ 0004h
CWG1CON1_POLD_POSN                       equ 0003h
CWG1CON1_POLD_POSITION                   equ 0003h
CWG1CON1_POLD_SIZE                       equ 0001h
CWG1CON1_POLD_LENGTH                     equ 0001h
CWG1CON1_POLD_MASK                       equ 0008h
CWG1CON1_IN_POSN                         equ 0005h
CWG1CON1_IN_POSITION                     equ 0005h
CWG1CON1_IN_SIZE                         equ 0001h
CWG1CON1_IN_LENGTH                       equ 0001h
CWG1CON1_IN_MASK                         equ 0020h
CWG1CON1_CWG1POLA_POSN                   equ 0000h
CWG1CON1_CWG1POLA_POSITION               equ 0000h
CWG1CON1_CWG1POLA_SIZE                   equ 0001h
CWG1CON1_CWG1POLA_LENGTH                 equ 0001h
CWG1CON1_CWG1POLA_MASK                   equ 0001h
CWG1CON1_CWG1POLB_POSN                   equ 0001h
CWG1CON1_CWG1POLB_POSITION               equ 0001h
CWG1CON1_CWG1POLB_SIZE                   equ 0001h
CWG1CON1_CWG1POLB_LENGTH                 equ 0001h
CWG1CON1_CWG1POLB_MASK                   equ 0002h
CWG1CON1_CWG1POLC_POSN                   equ 0002h
CWG1CON1_CWG1POLC_POSITION               equ 0002h
CWG1CON1_CWG1POLC_SIZE                   equ 0001h
CWG1CON1_CWG1POLC_LENGTH                 equ 0001h
CWG1CON1_CWG1POLC_MASK                   equ 0004h
CWG1CON1_CWG1POLD_POSN                   equ 0003h
CWG1CON1_CWG1POLD_POSITION               equ 0003h
CWG1CON1_CWG1POLD_SIZE                   equ 0001h
CWG1CON1_CWG1POLD_LENGTH                 equ 0001h
CWG1CON1_CWG1POLD_MASK                   equ 0008h
CWG1CON1_CWG1IN_POSN                     equ 0005h
CWG1CON1_CWG1IN_POSITION                 equ 0005h
CWG1CON1_CWG1IN_SIZE                     equ 0001h
CWG1CON1_CWG1IN_LENGTH                   equ 0001h
CWG1CON1_CWG1IN_MASK                     equ 0020h

// Register: CWG1OCON1
#define CWG1OCON1 CWG1OCON1
CWG1OCON1                                equ 0698h
// bitfield definitions
CWG1OCON1_OEA_POSN                       equ 0000h
CWG1OCON1_OEA_POSITION                   equ 0000h
CWG1OCON1_OEA_SIZE                       equ 0001h
CWG1OCON1_OEA_LENGTH                     equ 0001h
CWG1OCON1_OEA_MASK                       equ 0001h
CWG1OCON1_OEB_POSN                       equ 0001h
CWG1OCON1_OEB_POSITION                   equ 0001h
CWG1OCON1_OEB_SIZE                       equ 0001h
CWG1OCON1_OEB_LENGTH                     equ 0001h
CWG1OCON1_OEB_MASK                       equ 0002h
CWG1OCON1_OEC_POSN                       equ 0002h
CWG1OCON1_OEC_POSITION                   equ 0002h
CWG1OCON1_OEC_SIZE                       equ 0001h
CWG1OCON1_OEC_LENGTH                     equ 0001h
CWG1OCON1_OEC_MASK                       equ 0004h
CWG1OCON1_OED_POSN                       equ 0003h
CWG1OCON1_OED_POSITION                   equ 0003h
CWG1OCON1_OED_SIZE                       equ 0001h
CWG1OCON1_OED_LENGTH                     equ 0001h
CWG1OCON1_OED_MASK                       equ 0008h
CWG1OCON1_CWG1OEA_POSN                   equ 0000h
CWG1OCON1_CWG1OEA_POSITION               equ 0000h
CWG1OCON1_CWG1OEA_SIZE                   equ 0001h
CWG1OCON1_CWG1OEA_LENGTH                 equ 0001h
CWG1OCON1_CWG1OEA_MASK                   equ 0001h
CWG1OCON1_CWG1OEB_POSN                   equ 0001h
CWG1OCON1_CWG1OEB_POSITION               equ 0001h
CWG1OCON1_CWG1OEB_SIZE                   equ 0001h
CWG1OCON1_CWG1OEB_LENGTH                 equ 0001h
CWG1OCON1_CWG1OEB_MASK                   equ 0002h
CWG1OCON1_CWG1OEC_POSN                   equ 0002h
CWG1OCON1_CWG1OEC_POSITION               equ 0002h
CWG1OCON1_CWG1OEC_SIZE                   equ 0001h
CWG1OCON1_CWG1OEC_LENGTH                 equ 0001h
CWG1OCON1_CWG1OEC_MASK                   equ 0004h
CWG1OCON1_CWG1OED_POSN                   equ 0003h
CWG1OCON1_CWG1OED_POSITION               equ 0003h
CWG1OCON1_CWG1OED_SIZE                   equ 0001h
CWG1OCON1_CWG1OED_LENGTH                 equ 0001h
CWG1OCON1_CWG1OED_MASK                   equ 0008h

// Register: CWG1CLKCON
#define CWG1CLKCON CWG1CLKCON
CWG1CLKCON                               equ 0699h
// bitfield definitions
CWG1CLKCON_CS_POSN                       equ 0000h
CWG1CLKCON_CS_POSITION                   equ 0000h
CWG1CLKCON_CS_SIZE                       equ 0001h
CWG1CLKCON_CS_LENGTH                     equ 0001h
CWG1CLKCON_CS_MASK                       equ 0001h
CWG1CLKCON_CWG1CS_POSN                   equ 0000h
CWG1CLKCON_CWG1CS_POSITION               equ 0000h
CWG1CLKCON_CWG1CS_SIZE                   equ 0001h
CWG1CLKCON_CWG1CS_LENGTH                 equ 0001h
CWG1CLKCON_CWG1CS_MASK                   equ 0001h

// Register: CWG1ISM
#define CWG1ISM CWG1ISM
CWG1ISM                                  equ 069Ah
// bitfield definitions
CWG1ISM_IS_POSN                          equ 0000h
CWG1ISM_IS_POSITION                      equ 0000h
CWG1ISM_IS_SIZE                          equ 0008h
CWG1ISM_IS_LENGTH                        equ 0008h
CWG1ISM_IS_MASK                          equ 00FFh
CWG1ISM_IS0_POSN                         equ 0000h
CWG1ISM_IS0_POSITION                     equ 0000h
CWG1ISM_IS0_SIZE                         equ 0001h
CWG1ISM_IS0_LENGTH                       equ 0001h
CWG1ISM_IS0_MASK                         equ 0001h
CWG1ISM_IS1_POSN                         equ 0001h
CWG1ISM_IS1_POSITION                     equ 0001h
CWG1ISM_IS1_SIZE                         equ 0001h
CWG1ISM_IS1_LENGTH                       equ 0001h
CWG1ISM_IS1_MASK                         equ 0002h
CWG1ISM_IS2_POSN                         equ 0002h
CWG1ISM_IS2_POSITION                     equ 0002h
CWG1ISM_IS2_SIZE                         equ 0001h
CWG1ISM_IS2_LENGTH                       equ 0001h
CWG1ISM_IS2_MASK                         equ 0004h
CWG1ISM_CWG1IS_POSN                      equ 0000h
CWG1ISM_CWG1IS_POSITION                  equ 0000h
CWG1ISM_CWG1IS_SIZE                      equ 0008h
CWG1ISM_CWG1IS_LENGTH                    equ 0008h
CWG1ISM_CWG1IS_MASK                      equ 00FFh
CWG1ISM_CWG1IS0_POSN                     equ 0000h
CWG1ISM_CWG1IS0_POSITION                 equ 0000h
CWG1ISM_CWG1IS0_SIZE                     equ 0001h
CWG1ISM_CWG1IS0_LENGTH                   equ 0001h
CWG1ISM_CWG1IS0_MASK                     equ 0001h
CWG1ISM_CWG1IS1_POSN                     equ 0001h
CWG1ISM_CWG1IS1_POSITION                 equ 0001h
CWG1ISM_CWG1IS1_SIZE                     equ 0001h
CWG1ISM_CWG1IS1_LENGTH                   equ 0001h
CWG1ISM_CWG1IS1_MASK                     equ 0002h
CWG1ISM_CWG1IS2_POSN                     equ 0002h
CWG1ISM_CWG1IS2_POSITION                 equ 0002h
CWG1ISM_CWG1IS2_SIZE                     equ 0001h
CWG1ISM_CWG1IS2_LENGTH                   equ 0001h
CWG1ISM_CWG1IS2_MASK                     equ 0004h

// Register: WDTCON0
#define WDTCON0 WDTCON0
WDTCON0                                  equ 0711h
// bitfield definitions
WDTCON0_SEN_POSN                         equ 0000h
WDTCON0_SEN_POSITION                     equ 0000h
WDTCON0_SEN_SIZE                         equ 0001h
WDTCON0_SEN_LENGTH                       equ 0001h
WDTCON0_SEN_MASK                         equ 0001h
WDTCON0_WDTPS_POSN                       equ 0001h
WDTCON0_WDTPS_POSITION                   equ 0001h
WDTCON0_WDTPS_SIZE                       equ 0005h
WDTCON0_WDTPS_LENGTH                     equ 0005h
WDTCON0_WDTPS_MASK                       equ 003Eh
WDTCON0_SWDTEN_POSN                      equ 0000h
WDTCON0_SWDTEN_POSITION                  equ 0000h
WDTCON0_SWDTEN_SIZE                      equ 0001h
WDTCON0_SWDTEN_LENGTH                    equ 0001h
WDTCON0_SWDTEN_MASK                      equ 0001h
WDTCON0_WDTSEN_POSN                      equ 0000h
WDTCON0_WDTSEN_POSITION                  equ 0000h
WDTCON0_WDTSEN_SIZE                      equ 0001h
WDTCON0_WDTSEN_LENGTH                    equ 0001h
WDTCON0_WDTSEN_MASK                      equ 0001h
WDTCON0_WDTPS0_POSN                      equ 0001h
WDTCON0_WDTPS0_POSITION                  equ 0001h
WDTCON0_WDTPS0_SIZE                      equ 0001h
WDTCON0_WDTPS0_LENGTH                    equ 0001h
WDTCON0_WDTPS0_MASK                      equ 0002h
WDTCON0_WDTPS1_POSN                      equ 0002h
WDTCON0_WDTPS1_POSITION                  equ 0002h
WDTCON0_WDTPS1_SIZE                      equ 0001h
WDTCON0_WDTPS1_LENGTH                    equ 0001h
WDTCON0_WDTPS1_MASK                      equ 0004h
WDTCON0_WDTPS2_POSN                      equ 0003h
WDTCON0_WDTPS2_POSITION                  equ 0003h
WDTCON0_WDTPS2_SIZE                      equ 0001h
WDTCON0_WDTPS2_LENGTH                    equ 0001h
WDTCON0_WDTPS2_MASK                      equ 0008h
WDTCON0_WDTPS3_POSN                      equ 0004h
WDTCON0_WDTPS3_POSITION                  equ 0004h
WDTCON0_WDTPS3_SIZE                      equ 0001h
WDTCON0_WDTPS3_LENGTH                    equ 0001h
WDTCON0_WDTPS3_MASK                      equ 0010h
WDTCON0_WDTPS4_POSN                      equ 0005h
WDTCON0_WDTPS4_POSITION                  equ 0005h
WDTCON0_WDTPS4_SIZE                      equ 0001h
WDTCON0_WDTPS4_LENGTH                    equ 0001h
WDTCON0_WDTPS4_MASK                      equ 0020h

// Register: WDTCON1
#define WDTCON1 WDTCON1
WDTCON1                                  equ 0712h
// bitfield definitions
WDTCON1_WINDOW_POSN                      equ 0000h
WDTCON1_WINDOW_POSITION                  equ 0000h
WDTCON1_WINDOW_SIZE                      equ 0003h
WDTCON1_WINDOW_LENGTH                    equ 0003h
WDTCON1_WINDOW_MASK                      equ 0007h
WDTCON1_WDTCS_POSN                       equ 0004h
WDTCON1_WDTCS_POSITION                   equ 0004h
WDTCON1_WDTCS_SIZE                       equ 0003h
WDTCON1_WDTCS_LENGTH                     equ 0003h
WDTCON1_WDTCS_MASK                       equ 0070h
WDTCON1_WINDOW0_POSN                     equ 0000h
WDTCON1_WINDOW0_POSITION                 equ 0000h
WDTCON1_WINDOW0_SIZE                     equ 0001h
WDTCON1_WINDOW0_LENGTH                   equ 0001h
WDTCON1_WINDOW0_MASK                     equ 0001h
WDTCON1_WINDOW1_POSN                     equ 0001h
WDTCON1_WINDOW1_POSITION                 equ 0001h
WDTCON1_WINDOW1_SIZE                     equ 0001h
WDTCON1_WINDOW1_LENGTH                   equ 0001h
WDTCON1_WINDOW1_MASK                     equ 0002h
WDTCON1_WINDOW2_POSN                     equ 0002h
WDTCON1_WINDOW2_POSITION                 equ 0002h
WDTCON1_WINDOW2_SIZE                     equ 0001h
WDTCON1_WINDOW2_LENGTH                   equ 0001h
WDTCON1_WINDOW2_MASK                     equ 0004h
WDTCON1_WDTWINDOW_POSN                   equ 0000h
WDTCON1_WDTWINDOW_POSITION               equ 0000h
WDTCON1_WDTWINDOW_SIZE                   equ 0003h
WDTCON1_WDTWINDOW_LENGTH                 equ 0003h
WDTCON1_WDTWINDOW_MASK                   equ 0007h
WDTCON1_WDTWINDOW0_POSN                  equ 0000h
WDTCON1_WDTWINDOW0_POSITION              equ 0000h
WDTCON1_WDTWINDOW0_SIZE                  equ 0001h
WDTCON1_WDTWINDOW0_LENGTH                equ 0001h
WDTCON1_WDTWINDOW0_MASK                  equ 0001h
WDTCON1_WDTWINDOW1_POSN                  equ 0001h
WDTCON1_WDTWINDOW1_POSITION              equ 0001h
WDTCON1_WDTWINDOW1_SIZE                  equ 0001h
WDTCON1_WDTWINDOW1_LENGTH                equ 0001h
WDTCON1_WDTWINDOW1_MASK                  equ 0002h
WDTCON1_WDTWINDOW2_POSN                  equ 0002h
WDTCON1_WDTWINDOW2_POSITION              equ 0002h
WDTCON1_WDTWINDOW2_SIZE                  equ 0001h
WDTCON1_WDTWINDOW2_LENGTH                equ 0001h
WDTCON1_WDTWINDOW2_MASK                  equ 0004h
WDTCON1_WDTCS0_POSN                      equ 0004h
WDTCON1_WDTCS0_POSITION                  equ 0004h
WDTCON1_WDTCS0_SIZE                      equ 0001h
WDTCON1_WDTCS0_LENGTH                    equ 0001h
WDTCON1_WDTCS0_MASK                      equ 0010h
WDTCON1_WDTCS1_POSN                      equ 0005h
WDTCON1_WDTCS1_POSITION                  equ 0005h
WDTCON1_WDTCS1_SIZE                      equ 0001h
WDTCON1_WDTCS1_LENGTH                    equ 0001h
WDTCON1_WDTCS1_MASK                      equ 0020h
WDTCON1_WDTCS2_POSN                      equ 0006h
WDTCON1_WDTCS2_POSITION                  equ 0006h
WDTCON1_WDTCS2_SIZE                      equ 0001h
WDTCON1_WDTCS2_LENGTH                    equ 0001h
WDTCON1_WDTCS2_MASK                      equ 0040h

// Register: WDTPSL
#define WDTPSL WDTPSL
WDTPSL                                   equ 0713h
// bitfield definitions
WDTPSL_PSCNT_POSN                        equ 0000h
WDTPSL_PSCNT_POSITION                    equ 0000h
WDTPSL_PSCNT_SIZE                        equ 0008h
WDTPSL_PSCNT_LENGTH                      equ 0008h
WDTPSL_PSCNT_MASK                        equ 00FFh
WDTPSL_PSCNT0_POSN                       equ 0000h
WDTPSL_PSCNT0_POSITION                   equ 0000h
WDTPSL_PSCNT0_SIZE                       equ 0001h
WDTPSL_PSCNT0_LENGTH                     equ 0001h
WDTPSL_PSCNT0_MASK                       equ 0001h
WDTPSL_PSCNT1_POSN                       equ 0001h
WDTPSL_PSCNT1_POSITION                   equ 0001h
WDTPSL_PSCNT1_SIZE                       equ 0001h
WDTPSL_PSCNT1_LENGTH                     equ 0001h
WDTPSL_PSCNT1_MASK                       equ 0002h
WDTPSL_PSCNT2_POSN                       equ 0002h
WDTPSL_PSCNT2_POSITION                   equ 0002h
WDTPSL_PSCNT2_SIZE                       equ 0001h
WDTPSL_PSCNT2_LENGTH                     equ 0001h
WDTPSL_PSCNT2_MASK                       equ 0004h
WDTPSL_PSCNT3_POSN                       equ 0003h
WDTPSL_PSCNT3_POSITION                   equ 0003h
WDTPSL_PSCNT3_SIZE                       equ 0001h
WDTPSL_PSCNT3_LENGTH                     equ 0001h
WDTPSL_PSCNT3_MASK                       equ 0008h
WDTPSL_PSCNT4_POSN                       equ 0004h
WDTPSL_PSCNT4_POSITION                   equ 0004h
WDTPSL_PSCNT4_SIZE                       equ 0001h
WDTPSL_PSCNT4_LENGTH                     equ 0001h
WDTPSL_PSCNT4_MASK                       equ 0010h
WDTPSL_PSCNT5_POSN                       equ 0005h
WDTPSL_PSCNT5_POSITION                   equ 0005h
WDTPSL_PSCNT5_SIZE                       equ 0001h
WDTPSL_PSCNT5_LENGTH                     equ 0001h
WDTPSL_PSCNT5_MASK                       equ 0020h
WDTPSL_PSCNT6_POSN                       equ 0006h
WDTPSL_PSCNT6_POSITION                   equ 0006h
WDTPSL_PSCNT6_SIZE                       equ 0001h
WDTPSL_PSCNT6_LENGTH                     equ 0001h
WDTPSL_PSCNT6_MASK                       equ 0040h
WDTPSL_PSCNT7_POSN                       equ 0007h
WDTPSL_PSCNT7_POSITION                   equ 0007h
WDTPSL_PSCNT7_SIZE                       equ 0001h
WDTPSL_PSCNT7_LENGTH                     equ 0001h
WDTPSL_PSCNT7_MASK                       equ 0080h
WDTPSL_WDTPSCNT_POSN                     equ 0000h
WDTPSL_WDTPSCNT_POSITION                 equ 0000h
WDTPSL_WDTPSCNT_SIZE                     equ 0008h
WDTPSL_WDTPSCNT_LENGTH                   equ 0008h
WDTPSL_WDTPSCNT_MASK                     equ 00FFh
WDTPSL_WDTPSCNT0_POSN                    equ 0000h
WDTPSL_WDTPSCNT0_POSITION                equ 0000h
WDTPSL_WDTPSCNT0_SIZE                    equ 0001h
WDTPSL_WDTPSCNT0_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT0_MASK                    equ 0001h
WDTPSL_WDTPSCNT1_POSN                    equ 0001h
WDTPSL_WDTPSCNT1_POSITION                equ 0001h
WDTPSL_WDTPSCNT1_SIZE                    equ 0001h
WDTPSL_WDTPSCNT1_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT1_MASK                    equ 0002h
WDTPSL_WDTPSCNT2_POSN                    equ 0002h
WDTPSL_WDTPSCNT2_POSITION                equ 0002h
WDTPSL_WDTPSCNT2_SIZE                    equ 0001h
WDTPSL_WDTPSCNT2_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT2_MASK                    equ 0004h
WDTPSL_WDTPSCNT3_POSN                    equ 0003h
WDTPSL_WDTPSCNT3_POSITION                equ 0003h
WDTPSL_WDTPSCNT3_SIZE                    equ 0001h
WDTPSL_WDTPSCNT3_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT3_MASK                    equ 0008h
WDTPSL_WDTPSCNT4_POSN                    equ 0004h
WDTPSL_WDTPSCNT4_POSITION                equ 0004h
WDTPSL_WDTPSCNT4_SIZE                    equ 0001h
WDTPSL_WDTPSCNT4_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT4_MASK                    equ 0010h
WDTPSL_WDTPSCNT5_POSN                    equ 0005h
WDTPSL_WDTPSCNT5_POSITION                equ 0005h
WDTPSL_WDTPSCNT5_SIZE                    equ 0001h
WDTPSL_WDTPSCNT5_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT5_MASK                    equ 0020h
WDTPSL_WDTPSCNT6_POSN                    equ 0006h
WDTPSL_WDTPSCNT6_POSITION                equ 0006h
WDTPSL_WDTPSCNT6_SIZE                    equ 0001h
WDTPSL_WDTPSCNT6_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT6_MASK                    equ 0040h
WDTPSL_WDTPSCNT7_POSN                    equ 0007h
WDTPSL_WDTPSCNT7_POSITION                equ 0007h
WDTPSL_WDTPSCNT7_SIZE                    equ 0001h
WDTPSL_WDTPSCNT7_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT7_MASK                    equ 0080h

// Register: WDTPSH
#define WDTPSH WDTPSH
WDTPSH                                   equ 0714h
// bitfield definitions
WDTPSH_PSCNT_POSN                        equ 0000h
WDTPSH_PSCNT_POSITION                    equ 0000h
WDTPSH_PSCNT_SIZE                        equ 0008h
WDTPSH_PSCNT_LENGTH                      equ 0008h
WDTPSH_PSCNT_MASK                        equ 00FFh
WDTPSH_PSCNT8_POSN                       equ 0000h
WDTPSH_PSCNT8_POSITION                   equ 0000h
WDTPSH_PSCNT8_SIZE                       equ 0001h
WDTPSH_PSCNT8_LENGTH                     equ 0001h
WDTPSH_PSCNT8_MASK                       equ 0001h
WDTPSH_PSCNT9_POSN                       equ 0001h
WDTPSH_PSCNT9_POSITION                   equ 0001h
WDTPSH_PSCNT9_SIZE                       equ 0001h
WDTPSH_PSCNT9_LENGTH                     equ 0001h
WDTPSH_PSCNT9_MASK                       equ 0002h
WDTPSH_PSCNT10_POSN                      equ 0002h
WDTPSH_PSCNT10_POSITION                  equ 0002h
WDTPSH_PSCNT10_SIZE                      equ 0001h
WDTPSH_PSCNT10_LENGTH                    equ 0001h
WDTPSH_PSCNT10_MASK                      equ 0004h
WDTPSH_PSCNT11_POSN                      equ 0003h
WDTPSH_PSCNT11_POSITION                  equ 0003h
WDTPSH_PSCNT11_SIZE                      equ 0001h
WDTPSH_PSCNT11_LENGTH                    equ 0001h
WDTPSH_PSCNT11_MASK                      equ 0008h
WDTPSH_PSCNT12_POSN                      equ 0004h
WDTPSH_PSCNT12_POSITION                  equ 0004h
WDTPSH_PSCNT12_SIZE                      equ 0001h
WDTPSH_PSCNT12_LENGTH                    equ 0001h
WDTPSH_PSCNT12_MASK                      equ 0010h
WDTPSH_PSCNT13_POSN                      equ 0005h
WDTPSH_PSCNT13_POSITION                  equ 0005h
WDTPSH_PSCNT13_SIZE                      equ 0001h
WDTPSH_PSCNT13_LENGTH                    equ 0001h
WDTPSH_PSCNT13_MASK                      equ 0020h
WDTPSH_PSCNT14_POSN                      equ 0006h
WDTPSH_PSCNT14_POSITION                  equ 0006h
WDTPSH_PSCNT14_SIZE                      equ 0001h
WDTPSH_PSCNT14_LENGTH                    equ 0001h
WDTPSH_PSCNT14_MASK                      equ 0040h
WDTPSH_PSCNT15_POSN                      equ 0007h
WDTPSH_PSCNT15_POSITION                  equ 0007h
WDTPSH_PSCNT15_SIZE                      equ 0001h
WDTPSH_PSCNT15_LENGTH                    equ 0001h
WDTPSH_PSCNT15_MASK                      equ 0080h
WDTPSH_WDTPSCNT_POSN                     equ 0000h
WDTPSH_WDTPSCNT_POSITION                 equ 0000h
WDTPSH_WDTPSCNT_SIZE                     equ 0008h
WDTPSH_WDTPSCNT_LENGTH                   equ 0008h
WDTPSH_WDTPSCNT_MASK                     equ 00FFh
WDTPSH_WDTPSCNT8_POSN                    equ 0000h
WDTPSH_WDTPSCNT8_POSITION                equ 0000h
WDTPSH_WDTPSCNT8_SIZE                    equ 0001h
WDTPSH_WDTPSCNT8_LENGTH                  equ 0001h
WDTPSH_WDTPSCNT8_MASK                    equ 0001h
WDTPSH_WDTPSCNT9_POSN                    equ 0001h
WDTPSH_WDTPSCNT9_POSITION                equ 0001h
WDTPSH_WDTPSCNT9_SIZE                    equ 0001h
WDTPSH_WDTPSCNT9_LENGTH                  equ 0001h
WDTPSH_WDTPSCNT9_MASK                    equ 0002h
WDTPSH_WDTPSCNT10_POSN                   equ 0002h
WDTPSH_WDTPSCNT10_POSITION               equ 0002h
WDTPSH_WDTPSCNT10_SIZE                   equ 0001h
WDTPSH_WDTPSCNT10_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT10_MASK                   equ 0004h
WDTPSH_WDTPSCNT11_POSN                   equ 0003h
WDTPSH_WDTPSCNT11_POSITION               equ 0003h
WDTPSH_WDTPSCNT11_SIZE                   equ 0001h
WDTPSH_WDTPSCNT11_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT11_MASK                   equ 0008h
WDTPSH_WDTPSCNT12_POSN                   equ 0004h
WDTPSH_WDTPSCNT12_POSITION               equ 0004h
WDTPSH_WDTPSCNT12_SIZE                   equ 0001h
WDTPSH_WDTPSCNT12_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT12_MASK                   equ 0010h
WDTPSH_WDTPSCNT13_POSN                   equ 0005h
WDTPSH_WDTPSCNT13_POSITION               equ 0005h
WDTPSH_WDTPSCNT13_SIZE                   equ 0001h
WDTPSH_WDTPSCNT13_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT13_MASK                   equ 0020h
WDTPSH_WDTPSCNT14_POSN                   equ 0006h
WDTPSH_WDTPSCNT14_POSITION               equ 0006h
WDTPSH_WDTPSCNT14_SIZE                   equ 0001h
WDTPSH_WDTPSCNT14_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT14_MASK                   equ 0040h
WDTPSH_WDTPSCNT15_POSN                   equ 0007h
WDTPSH_WDTPSCNT15_POSITION               equ 0007h
WDTPSH_WDTPSCNT15_SIZE                   equ 0001h
WDTPSH_WDTPSCNT15_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT15_MASK                   equ 0080h

// Register: WDTTMR
#define WDTTMR WDTTMR
WDTTMR                                   equ 0715h
// bitfield definitions
WDTTMR_PSCNT16_POSN                      equ 0000h
WDTTMR_PSCNT16_POSITION                  equ 0000h
WDTTMR_PSCNT16_SIZE                      equ 0001h
WDTTMR_PSCNT16_LENGTH                    equ 0001h
WDTTMR_PSCNT16_MASK                      equ 0001h
WDTTMR_PSCNT17_POSN                      equ 0001h
WDTTMR_PSCNT17_POSITION                  equ 0001h
WDTTMR_PSCNT17_SIZE                      equ 0001h
WDTTMR_PSCNT17_LENGTH                    equ 0001h
WDTTMR_PSCNT17_MASK                      equ 0002h
WDTTMR_STATE_POSN                        equ 0002h
WDTTMR_STATE_POSITION                    equ 0002h
WDTTMR_STATE_SIZE                        equ 0001h
WDTTMR_STATE_LENGTH                      equ 0001h
WDTTMR_STATE_MASK                        equ 0004h
WDTTMR_WDTTMR_POSN                       equ 0003h
WDTTMR_WDTTMR_POSITION                   equ 0003h
WDTTMR_WDTTMR_SIZE                       equ 0005h
WDTTMR_WDTTMR_LENGTH                     equ 0005h
WDTTMR_WDTTMR_MASK                       equ 00F8h
WDTTMR_WDTPSCNT16_POSN                   equ 0000h
WDTTMR_WDTPSCNT16_POSITION               equ 0000h
WDTTMR_WDTPSCNT16_SIZE                   equ 0001h
WDTTMR_WDTPSCNT16_LENGTH                 equ 0001h
WDTTMR_WDTPSCNT16_MASK                   equ 0001h
WDTTMR_WDTPSCNT17_POSN                   equ 0001h
WDTTMR_WDTPSCNT17_POSITION               equ 0001h
WDTTMR_WDTPSCNT17_SIZE                   equ 0001h
WDTTMR_WDTPSCNT17_LENGTH                 equ 0001h
WDTTMR_WDTPSCNT17_MASK                   equ 0002h
WDTTMR_WDTSTATE_POSN                     equ 0002h
WDTTMR_WDTSTATE_POSITION                 equ 0002h
WDTTMR_WDTSTATE_SIZE                     equ 0001h
WDTTMR_WDTSTATE_LENGTH                   equ 0001h
WDTTMR_WDTSTATE_MASK                     equ 0004h
WDTTMR_WDTTMR0_POSN                      equ 0003h
WDTTMR_WDTTMR0_POSITION                  equ 0003h
WDTTMR_WDTTMR0_SIZE                      equ 0001h
WDTTMR_WDTTMR0_LENGTH                    equ 0001h
WDTTMR_WDTTMR0_MASK                      equ 0008h
WDTTMR_WDTTMR1_POSN                      equ 0004h
WDTTMR_WDTTMR1_POSITION                  equ 0004h
WDTTMR_WDTTMR1_SIZE                      equ 0001h
WDTTMR_WDTTMR1_LENGTH                    equ 0001h
WDTTMR_WDTTMR1_MASK                      equ 0010h
WDTTMR_WDTTMR2_POSN                      equ 0005h
WDTTMR_WDTTMR2_POSITION                  equ 0005h
WDTTMR_WDTTMR2_SIZE                      equ 0001h
WDTTMR_WDTTMR2_LENGTH                    equ 0001h
WDTTMR_WDTTMR2_MASK                      equ 0020h
WDTTMR_WDTTMR3_POSN                      equ 0006h
WDTTMR_WDTTMR3_POSITION                  equ 0006h
WDTTMR_WDTTMR3_SIZE                      equ 0001h
WDTTMR_WDTTMR3_LENGTH                    equ 0001h
WDTTMR_WDTTMR3_MASK                      equ 0040h
WDTTMR_WDTTMR4_POSN                      equ 0007h
WDTTMR_WDTTMR4_POSITION                  equ 0007h
WDTTMR_WDTTMR4_SIZE                      equ 0001h
WDTTMR_WDTTMR4_LENGTH                    equ 0001h
WDTTMR_WDTTMR4_MASK                      equ 0080h

// Register: SCANLADRL
#define SCANLADRL SCANLADRL
SCANLADRL                                equ 0718h
// bitfield definitions
SCANLADRL_LADR_POSN                      equ 0000h
SCANLADRL_LADR_POSITION                  equ 0000h
SCANLADRL_LADR_SIZE                      equ 0008h
SCANLADRL_LADR_LENGTH                    equ 0008h
SCANLADRL_LADR_MASK                      equ 00FFh
SCANLADRL_LDAR0_POSN                     equ 0000h
SCANLADRL_LDAR0_POSITION                 equ 0000h
SCANLADRL_LDAR0_SIZE                     equ 0001h
SCANLADRL_LDAR0_LENGTH                   equ 0001h
SCANLADRL_LDAR0_MASK                     equ 0001h
SCANLADRL_LDAR1_POSN                     equ 0001h
SCANLADRL_LDAR1_POSITION                 equ 0001h
SCANLADRL_LDAR1_SIZE                     equ 0001h
SCANLADRL_LDAR1_LENGTH                   equ 0001h
SCANLADRL_LDAR1_MASK                     equ 0002h
SCANLADRL_LADR2_POSN                     equ 0002h
SCANLADRL_LADR2_POSITION                 equ 0002h
SCANLADRL_LADR2_SIZE                     equ 0001h
SCANLADRL_LADR2_LENGTH                   equ 0001h
SCANLADRL_LADR2_MASK                     equ 0004h
SCANLADRL_LADR3_POSN                     equ 0003h
SCANLADRL_LADR3_POSITION                 equ 0003h
SCANLADRL_LADR3_SIZE                     equ 0001h
SCANLADRL_LADR3_LENGTH                   equ 0001h
SCANLADRL_LADR3_MASK                     equ 0008h
SCANLADRL_LADR4_POSN                     equ 0004h
SCANLADRL_LADR4_POSITION                 equ 0004h
SCANLADRL_LADR4_SIZE                     equ 0001h
SCANLADRL_LADR4_LENGTH                   equ 0001h
SCANLADRL_LADR4_MASK                     equ 0010h
SCANLADRL_LADR5_POSN                     equ 0005h
SCANLADRL_LADR5_POSITION                 equ 0005h
SCANLADRL_LADR5_SIZE                     equ 0001h
SCANLADRL_LADR5_LENGTH                   equ 0001h
SCANLADRL_LADR5_MASK                     equ 0020h
SCANLADRL_LADR6_POSN                     equ 0006h
SCANLADRL_LADR6_POSITION                 equ 0006h
SCANLADRL_LADR6_SIZE                     equ 0001h
SCANLADRL_LADR6_LENGTH                   equ 0001h
SCANLADRL_LADR6_MASK                     equ 0040h
SCANLADRL_LADR7_POSN                     equ 0007h
SCANLADRL_LADR7_POSITION                 equ 0007h
SCANLADRL_LADR7_SIZE                     equ 0001h
SCANLADRL_LADR7_LENGTH                   equ 0001h
SCANLADRL_LADR7_MASK                     equ 0080h
SCANLADRL_SCANLADR_POSN                  equ 0000h
SCANLADRL_SCANLADR_POSITION              equ 0000h
SCANLADRL_SCANLADR_SIZE                  equ 0008h
SCANLADRL_SCANLADR_LENGTH                equ 0008h
SCANLADRL_SCANLADR_MASK                  equ 00FFh
SCANLADRL_SCANLADR0_POSN                 equ 0000h
SCANLADRL_SCANLADR0_POSITION             equ 0000h
SCANLADRL_SCANLADR0_SIZE                 equ 0001h
SCANLADRL_SCANLADR0_LENGTH               equ 0001h
SCANLADRL_SCANLADR0_MASK                 equ 0001h
SCANLADRL_SCANLADR1_POSN                 equ 0001h
SCANLADRL_SCANLADR1_POSITION             equ 0001h
SCANLADRL_SCANLADR1_SIZE                 equ 0001h
SCANLADRL_SCANLADR1_LENGTH               equ 0001h
SCANLADRL_SCANLADR1_MASK                 equ 0002h
SCANLADRL_SCANLADR2_POSN                 equ 0002h
SCANLADRL_SCANLADR2_POSITION             equ 0002h
SCANLADRL_SCANLADR2_SIZE                 equ 0001h
SCANLADRL_SCANLADR2_LENGTH               equ 0001h
SCANLADRL_SCANLADR2_MASK                 equ 0004h
SCANLADRL_SCANLADR3_POSN                 equ 0003h
SCANLADRL_SCANLADR3_POSITION             equ 0003h
SCANLADRL_SCANLADR3_SIZE                 equ 0001h
SCANLADRL_SCANLADR3_LENGTH               equ 0001h
SCANLADRL_SCANLADR3_MASK                 equ 0008h
SCANLADRL_SCANLADR4_POSN                 equ 0004h
SCANLADRL_SCANLADR4_POSITION             equ 0004h
SCANLADRL_SCANLADR4_SIZE                 equ 0001h
SCANLADRL_SCANLADR4_LENGTH               equ 0001h
SCANLADRL_SCANLADR4_MASK                 equ 0010h
SCANLADRL_SCANLADR5_POSN                 equ 0005h
SCANLADRL_SCANLADR5_POSITION             equ 0005h
SCANLADRL_SCANLADR5_SIZE                 equ 0001h
SCANLADRL_SCANLADR5_LENGTH               equ 0001h
SCANLADRL_SCANLADR5_MASK                 equ 0020h
SCANLADRL_SCANLADR6_POSN                 equ 0006h
SCANLADRL_SCANLADR6_POSITION             equ 0006h
SCANLADRL_SCANLADR6_SIZE                 equ 0001h
SCANLADRL_SCANLADR6_LENGTH               equ 0001h
SCANLADRL_SCANLADR6_MASK                 equ 0040h
SCANLADRL_SCANLADR7_POSN                 equ 0007h
SCANLADRL_SCANLADR7_POSITION             equ 0007h
SCANLADRL_SCANLADR7_SIZE                 equ 0001h
SCANLADRL_SCANLADR7_LENGTH               equ 0001h
SCANLADRL_SCANLADR7_MASK                 equ 0080h

// Register: SCANLADRH
#define SCANLADRH SCANLADRH
SCANLADRH                                equ 0719h
// bitfield definitions
SCANLADRH_LADR_POSN                      equ 0000h
SCANLADRH_LADR_POSITION                  equ 0000h
SCANLADRH_LADR_SIZE                      equ 0008h
SCANLADRH_LADR_LENGTH                    equ 0008h
SCANLADRH_LADR_MASK                      equ 00FFh
SCANLADRH_LADR8_POSN                     equ 0000h
SCANLADRH_LADR8_POSITION                 equ 0000h
SCANLADRH_LADR8_SIZE                     equ 0001h
SCANLADRH_LADR8_LENGTH                   equ 0001h
SCANLADRH_LADR8_MASK                     equ 0001h
SCANLADRH_LADR9_POSN                     equ 0001h
SCANLADRH_LADR9_POSITION                 equ 0001h
SCANLADRH_LADR9_SIZE                     equ 0001h
SCANLADRH_LADR9_LENGTH                   equ 0001h
SCANLADRH_LADR9_MASK                     equ 0002h
SCANLADRH_LADR10_POSN                    equ 0002h
SCANLADRH_LADR10_POSITION                equ 0002h
SCANLADRH_LADR10_SIZE                    equ 0001h
SCANLADRH_LADR10_LENGTH                  equ 0001h
SCANLADRH_LADR10_MASK                    equ 0004h
SCANLADRH_LADR11_POSN                    equ 0003h
SCANLADRH_LADR11_POSITION                equ 0003h
SCANLADRH_LADR11_SIZE                    equ 0001h
SCANLADRH_LADR11_LENGTH                  equ 0001h
SCANLADRH_LADR11_MASK                    equ 0008h
SCANLADRH_LADR12_POSN                    equ 0004h
SCANLADRH_LADR12_POSITION                equ 0004h
SCANLADRH_LADR12_SIZE                    equ 0001h
SCANLADRH_LADR12_LENGTH                  equ 0001h
SCANLADRH_LADR12_MASK                    equ 0010h
SCANLADRH_LADR13_POSN                    equ 0005h
SCANLADRH_LADR13_POSITION                equ 0005h
SCANLADRH_LADR13_SIZE                    equ 0001h
SCANLADRH_LADR13_LENGTH                  equ 0001h
SCANLADRH_LADR13_MASK                    equ 0020h
SCANLADRH_LADR14_POSN                    equ 0006h
SCANLADRH_LADR14_POSITION                equ 0006h
SCANLADRH_LADR14_SIZE                    equ 0001h
SCANLADRH_LADR14_LENGTH                  equ 0001h
SCANLADRH_LADR14_MASK                    equ 0040h
SCANLADRH_LADR15_POSN                    equ 0007h
SCANLADRH_LADR15_POSITION                equ 0007h
SCANLADRH_LADR15_SIZE                    equ 0001h
SCANLADRH_LADR15_LENGTH                  equ 0001h
SCANLADRH_LADR15_MASK                    equ 0080h
SCANLADRH_SCANLADR_POSN                  equ 0000h
SCANLADRH_SCANLADR_POSITION              equ 0000h
SCANLADRH_SCANLADR_SIZE                  equ 0008h
SCANLADRH_SCANLADR_LENGTH                equ 0008h
SCANLADRH_SCANLADR_MASK                  equ 00FFh
SCANLADRH_SCANLADR8_POSN                 equ 0000h
SCANLADRH_SCANLADR8_POSITION             equ 0000h
SCANLADRH_SCANLADR8_SIZE                 equ 0001h
SCANLADRH_SCANLADR8_LENGTH               equ 0001h
SCANLADRH_SCANLADR8_MASK                 equ 0001h
SCANLADRH_SCANLADR9_POSN                 equ 0001h
SCANLADRH_SCANLADR9_POSITION             equ 0001h
SCANLADRH_SCANLADR9_SIZE                 equ 0001h
SCANLADRH_SCANLADR9_LENGTH               equ 0001h
SCANLADRH_SCANLADR9_MASK                 equ 0002h
SCANLADRH_SCANLADR10_POSN                equ 0002h
SCANLADRH_SCANLADR10_POSITION            equ 0002h
SCANLADRH_SCANLADR10_SIZE                equ 0001h
SCANLADRH_SCANLADR10_LENGTH              equ 0001h
SCANLADRH_SCANLADR10_MASK                equ 0004h
SCANLADRH_SCANLADR11_POSN                equ 0003h
SCANLADRH_SCANLADR11_POSITION            equ 0003h
SCANLADRH_SCANLADR11_SIZE                equ 0001h
SCANLADRH_SCANLADR11_LENGTH              equ 0001h
SCANLADRH_SCANLADR11_MASK                equ 0008h
SCANLADRH_SCANLADR12_POSN                equ 0004h
SCANLADRH_SCANLADR12_POSITION            equ 0004h
SCANLADRH_SCANLADR12_SIZE                equ 0001h
SCANLADRH_SCANLADR12_LENGTH              equ 0001h
SCANLADRH_SCANLADR12_MASK                equ 0010h
SCANLADRH_SCANLADR13_POSN                equ 0005h
SCANLADRH_SCANLADR13_POSITION            equ 0005h
SCANLADRH_SCANLADR13_SIZE                equ 0001h
SCANLADRH_SCANLADR13_LENGTH              equ 0001h
SCANLADRH_SCANLADR13_MASK                equ 0020h
SCANLADRH_SCANLADR14_POSN                equ 0006h
SCANLADRH_SCANLADR14_POSITION            equ 0006h
SCANLADRH_SCANLADR14_SIZE                equ 0001h
SCANLADRH_SCANLADR14_LENGTH              equ 0001h
SCANLADRH_SCANLADR14_MASK                equ 0040h
SCANLADRH_SCANLADR15_POSN                equ 0007h
SCANLADRH_SCANLADR15_POSITION            equ 0007h
SCANLADRH_SCANLADR15_SIZE                equ 0001h
SCANLADRH_SCANLADR15_LENGTH              equ 0001h
SCANLADRH_SCANLADR15_MASK                equ 0080h

// Register: SCANHADRL
#define SCANHADRL SCANHADRL
SCANHADRL                                equ 071Ah
// bitfield definitions
SCANHADRL_HADR_POSN                      equ 0000h
SCANHADRL_HADR_POSITION                  equ 0000h
SCANHADRL_HADR_SIZE                      equ 0008h
SCANHADRL_HADR_LENGTH                    equ 0008h
SCANHADRL_HADR_MASK                      equ 00FFh
SCANHADRL_HADR0_POSN                     equ 0000h
SCANHADRL_HADR0_POSITION                 equ 0000h
SCANHADRL_HADR0_SIZE                     equ 0001h
SCANHADRL_HADR0_LENGTH                   equ 0001h
SCANHADRL_HADR0_MASK                     equ 0001h
SCANHADRL_HADR1_POSN                     equ 0001h
SCANHADRL_HADR1_POSITION                 equ 0001h
SCANHADRL_HADR1_SIZE                     equ 0001h
SCANHADRL_HADR1_LENGTH                   equ 0001h
SCANHADRL_HADR1_MASK                     equ 0002h
SCANHADRL_HARD2_POSN                     equ 0002h
SCANHADRL_HARD2_POSITION                 equ 0002h
SCANHADRL_HARD2_SIZE                     equ 0001h
SCANHADRL_HARD2_LENGTH                   equ 0001h
SCANHADRL_HARD2_MASK                     equ 0004h
SCANHADRL_HADR3_POSN                     equ 0003h
SCANHADRL_HADR3_POSITION                 equ 0003h
SCANHADRL_HADR3_SIZE                     equ 0001h
SCANHADRL_HADR3_LENGTH                   equ 0001h
SCANHADRL_HADR3_MASK                     equ 0008h
SCANHADRL_HADR4_POSN                     equ 0004h
SCANHADRL_HADR4_POSITION                 equ 0004h
SCANHADRL_HADR4_SIZE                     equ 0001h
SCANHADRL_HADR4_LENGTH                   equ 0001h
SCANHADRL_HADR4_MASK                     equ 0010h
SCANHADRL_HADR5_POSN                     equ 0005h
SCANHADRL_HADR5_POSITION                 equ 0005h
SCANHADRL_HADR5_SIZE                     equ 0001h
SCANHADRL_HADR5_LENGTH                   equ 0001h
SCANHADRL_HADR5_MASK                     equ 0020h
SCANHADRL_HADR6_POSN                     equ 0006h
SCANHADRL_HADR6_POSITION                 equ 0006h
SCANHADRL_HADR6_SIZE                     equ 0001h
SCANHADRL_HADR6_LENGTH                   equ 0001h
SCANHADRL_HADR6_MASK                     equ 0040h
SCANHADRL_HADR7_POSN                     equ 0007h
SCANHADRL_HADR7_POSITION                 equ 0007h
SCANHADRL_HADR7_SIZE                     equ 0001h
SCANHADRL_HADR7_LENGTH                   equ 0001h
SCANHADRL_HADR7_MASK                     equ 0080h
SCANHADRL_SCANHADR_POSN                  equ 0000h
SCANHADRL_SCANHADR_POSITION              equ 0000h
SCANHADRL_SCANHADR_SIZE                  equ 0008h
SCANHADRL_SCANHADR_LENGTH                equ 0008h
SCANHADRL_SCANHADR_MASK                  equ 00FFh
SCANHADRL_SCANHADR0_POSN                 equ 0000h
SCANHADRL_SCANHADR0_POSITION             equ 0000h
SCANHADRL_SCANHADR0_SIZE                 equ 0001h
SCANHADRL_SCANHADR0_LENGTH               equ 0001h
SCANHADRL_SCANHADR0_MASK                 equ 0001h
SCANHADRL_SCANHADR1_POSN                 equ 0001h
SCANHADRL_SCANHADR1_POSITION             equ 0001h
SCANHADRL_SCANHADR1_SIZE                 equ 0001h
SCANHADRL_SCANHADR1_LENGTH               equ 0001h
SCANHADRL_SCANHADR1_MASK                 equ 0002h
SCANHADRL_SCANHADR2_POSN                 equ 0002h
SCANHADRL_SCANHADR2_POSITION             equ 0002h
SCANHADRL_SCANHADR2_SIZE                 equ 0001h
SCANHADRL_SCANHADR2_LENGTH               equ 0001h
SCANHADRL_SCANHADR2_MASK                 equ 0004h
SCANHADRL_SCANHADR3_POSN                 equ 0003h
SCANHADRL_SCANHADR3_POSITION             equ 0003h
SCANHADRL_SCANHADR3_SIZE                 equ 0001h
SCANHADRL_SCANHADR3_LENGTH               equ 0001h
SCANHADRL_SCANHADR3_MASK                 equ 0008h
SCANHADRL_SCANHADR4_POSN                 equ 0004h
SCANHADRL_SCANHADR4_POSITION             equ 0004h
SCANHADRL_SCANHADR4_SIZE                 equ 0001h
SCANHADRL_SCANHADR4_LENGTH               equ 0001h
SCANHADRL_SCANHADR4_MASK                 equ 0010h
SCANHADRL_SCANHADR5_POSN                 equ 0005h
SCANHADRL_SCANHADR5_POSITION             equ 0005h
SCANHADRL_SCANHADR5_SIZE                 equ 0001h
SCANHADRL_SCANHADR5_LENGTH               equ 0001h
SCANHADRL_SCANHADR5_MASK                 equ 0020h
SCANHADRL_SCANHADR6_POSN                 equ 0006h
SCANHADRL_SCANHADR6_POSITION             equ 0006h
SCANHADRL_SCANHADR6_SIZE                 equ 0001h
SCANHADRL_SCANHADR6_LENGTH               equ 0001h
SCANHADRL_SCANHADR6_MASK                 equ 0040h
SCANHADRL_SCANHADR7_POSN                 equ 0007h
SCANHADRL_SCANHADR7_POSITION             equ 0007h
SCANHADRL_SCANHADR7_SIZE                 equ 0001h
SCANHADRL_SCANHADR7_LENGTH               equ 0001h
SCANHADRL_SCANHADR7_MASK                 equ 0080h

// Register: SCANHADRH
#define SCANHADRH SCANHADRH
SCANHADRH                                equ 071Bh
// bitfield definitions
SCANHADRH_HADR_POSN                      equ 0000h
SCANHADRH_HADR_POSITION                  equ 0000h
SCANHADRH_HADR_SIZE                      equ 0008h
SCANHADRH_HADR_LENGTH                    equ 0008h
SCANHADRH_HADR_MASK                      equ 00FFh
SCANHADRH_HADR8_POSN                     equ 0000h
SCANHADRH_HADR8_POSITION                 equ 0000h
SCANHADRH_HADR8_SIZE                     equ 0001h
SCANHADRH_HADR8_LENGTH                   equ 0001h
SCANHADRH_HADR8_MASK                     equ 0001h
SCANHADRH_HADR9_POSN                     equ 0001h
SCANHADRH_HADR9_POSITION                 equ 0001h
SCANHADRH_HADR9_SIZE                     equ 0001h
SCANHADRH_HADR9_LENGTH                   equ 0001h
SCANHADRH_HADR9_MASK                     equ 0002h
SCANHADRH_HADR10_POSN                    equ 0002h
SCANHADRH_HADR10_POSITION                equ 0002h
SCANHADRH_HADR10_SIZE                    equ 0001h
SCANHADRH_HADR10_LENGTH                  equ 0001h
SCANHADRH_HADR10_MASK                    equ 0004h
SCANHADRH_HADR11_POSN                    equ 0003h
SCANHADRH_HADR11_POSITION                equ 0003h
SCANHADRH_HADR11_SIZE                    equ 0001h
SCANHADRH_HADR11_LENGTH                  equ 0001h
SCANHADRH_HADR11_MASK                    equ 0008h
SCANHADRH_HADR12_POSN                    equ 0004h
SCANHADRH_HADR12_POSITION                equ 0004h
SCANHADRH_HADR12_SIZE                    equ 0001h
SCANHADRH_HADR12_LENGTH                  equ 0001h
SCANHADRH_HADR12_MASK                    equ 0010h
SCANHADRH_HADR13_POSN                    equ 0005h
SCANHADRH_HADR13_POSITION                equ 0005h
SCANHADRH_HADR13_SIZE                    equ 0001h
SCANHADRH_HADR13_LENGTH                  equ 0001h
SCANHADRH_HADR13_MASK                    equ 0020h
SCANHADRH_HADR14_POSN                    equ 0006h
SCANHADRH_HADR14_POSITION                equ 0006h
SCANHADRH_HADR14_SIZE                    equ 0001h
SCANHADRH_HADR14_LENGTH                  equ 0001h
SCANHADRH_HADR14_MASK                    equ 0040h
SCANHADRH_HADR15_POSN                    equ 0007h
SCANHADRH_HADR15_POSITION                equ 0007h
SCANHADRH_HADR15_SIZE                    equ 0001h
SCANHADRH_HADR15_LENGTH                  equ 0001h
SCANHADRH_HADR15_MASK                    equ 0080h
SCANHADRH_SCANHADR_POSN                  equ 0000h
SCANHADRH_SCANHADR_POSITION              equ 0000h
SCANHADRH_SCANHADR_SIZE                  equ 0008h
SCANHADRH_SCANHADR_LENGTH                equ 0008h
SCANHADRH_SCANHADR_MASK                  equ 00FFh
SCANHADRH_SCANHADR8_POSN                 equ 0000h
SCANHADRH_SCANHADR8_POSITION             equ 0000h
SCANHADRH_SCANHADR8_SIZE                 equ 0001h
SCANHADRH_SCANHADR8_LENGTH               equ 0001h
SCANHADRH_SCANHADR8_MASK                 equ 0001h
SCANHADRH_SCANHADR9_POSN                 equ 0001h
SCANHADRH_SCANHADR9_POSITION             equ 0001h
SCANHADRH_SCANHADR9_SIZE                 equ 0001h
SCANHADRH_SCANHADR9_LENGTH               equ 0001h
SCANHADRH_SCANHADR9_MASK                 equ 0002h
SCANHADRH_SCANHADR10_POSN                equ 0002h
SCANHADRH_SCANHADR10_POSITION            equ 0002h
SCANHADRH_SCANHADR10_SIZE                equ 0001h
SCANHADRH_SCANHADR10_LENGTH              equ 0001h
SCANHADRH_SCANHADR10_MASK                equ 0004h
SCANHADRH_SCANHADR11_POSN                equ 0003h
SCANHADRH_SCANHADR11_POSITION            equ 0003h
SCANHADRH_SCANHADR11_SIZE                equ 0001h
SCANHADRH_SCANHADR11_LENGTH              equ 0001h
SCANHADRH_SCANHADR11_MASK                equ 0008h
SCANHADRH_SCANHADR12_POSN                equ 0004h
SCANHADRH_SCANHADR12_POSITION            equ 0004h
SCANHADRH_SCANHADR12_SIZE                equ 0001h
SCANHADRH_SCANHADR12_LENGTH              equ 0001h
SCANHADRH_SCANHADR12_MASK                equ 0010h
SCANHADRH_SCANHADR13_POSN                equ 0005h
SCANHADRH_SCANHADR13_POSITION            equ 0005h
SCANHADRH_SCANHADR13_SIZE                equ 0001h
SCANHADRH_SCANHADR13_LENGTH              equ 0001h
SCANHADRH_SCANHADR13_MASK                equ 0020h
SCANHADRH_SCANHADR14_POSN                equ 0006h
SCANHADRH_SCANHADR14_POSITION            equ 0006h
SCANHADRH_SCANHADR14_SIZE                equ 0001h
SCANHADRH_SCANHADR14_LENGTH              equ 0001h
SCANHADRH_SCANHADR14_MASK                equ 0040h
SCANHADRH_SCANHADR15_POSN                equ 0007h
SCANHADRH_SCANHADR15_POSITION            equ 0007h
SCANHADRH_SCANHADR15_SIZE                equ 0001h
SCANHADRH_SCANHADR15_LENGTH              equ 0001h
SCANHADRH_SCANHADR15_MASK                equ 0080h

// Register: SCANCON0
#define SCANCON0 SCANCON0
SCANCON0                                 equ 071Ch
// bitfield definitions
SCANCON0_MODE_POSN                       equ 0000h
SCANCON0_MODE_POSITION                   equ 0000h
SCANCON0_MODE_SIZE                       equ 0002h
SCANCON0_MODE_LENGTH                     equ 0002h
SCANCON0_MODE_MASK                       equ 0003h
SCANCON0_INTM_POSN                       equ 0003h
SCANCON0_INTM_POSITION                   equ 0003h
SCANCON0_INTM_SIZE                       equ 0001h
SCANCON0_INTM_LENGTH                     equ 0001h
SCANCON0_INTM_MASK                       equ 0008h
SCANCON0_INVALID_POSN                    equ 0004h
SCANCON0_INVALID_POSITION                equ 0004h
SCANCON0_INVALID_SIZE                    equ 0001h
SCANCON0_INVALID_LENGTH                  equ 0001h
SCANCON0_INVALID_MASK                    equ 0010h
SCANCON0_BUSY_POSN                       equ 0005h
SCANCON0_BUSY_POSITION                   equ 0005h
SCANCON0_BUSY_SIZE                       equ 0001h
SCANCON0_BUSY_LENGTH                     equ 0001h
SCANCON0_BUSY_MASK                       equ 0020h
SCANCON0_SCANGO_POSN                     equ 0006h
SCANCON0_SCANGO_POSITION                 equ 0006h
SCANCON0_SCANGO_SIZE                     equ 0001h
SCANCON0_SCANGO_LENGTH                   equ 0001h
SCANCON0_SCANGO_MASK                     equ 0040h
SCANCON0_EN_POSN                         equ 0007h
SCANCON0_EN_POSITION                     equ 0007h
SCANCON0_EN_SIZE                         equ 0001h
SCANCON0_EN_LENGTH                       equ 0001h
SCANCON0_EN_MASK                         equ 0080h
SCANCON0_MODE0_POSN                      equ 0000h
SCANCON0_MODE0_POSITION                  equ 0000h
SCANCON0_MODE0_SIZE                      equ 0001h
SCANCON0_MODE0_LENGTH                    equ 0001h
SCANCON0_MODE0_MASK                      equ 0001h
SCANCON0_MODE1_POSN                      equ 0001h
SCANCON0_MODE1_POSITION                  equ 0001h
SCANCON0_MODE1_SIZE                      equ 0001h
SCANCON0_MODE1_LENGTH                    equ 0001h
SCANCON0_MODE1_MASK                      equ 0002h
SCANCON0_SCANMODE_POSN                   equ 0000h
SCANCON0_SCANMODE_POSITION               equ 0000h
SCANCON0_SCANMODE_SIZE                   equ 0002h
SCANCON0_SCANMODE_LENGTH                 equ 0002h
SCANCON0_SCANMODE_MASK                   equ 0003h
SCANCON0_SCANINTM_POSN                   equ 0003h
SCANCON0_SCANINTM_POSITION               equ 0003h
SCANCON0_SCANINTM_SIZE                   equ 0001h
SCANCON0_SCANINTM_LENGTH                 equ 0001h
SCANCON0_SCANINTM_MASK                   equ 0008h
SCANCON0_SCANINVALID_POSN                equ 0004h
SCANCON0_SCANINVALID_POSITION            equ 0004h
SCANCON0_SCANINVALID_SIZE                equ 0001h
SCANCON0_SCANINVALID_LENGTH              equ 0001h
SCANCON0_SCANINVALID_MASK                equ 0010h
SCANCON0_SCANBUSY_POSN                   equ 0005h
SCANCON0_SCANBUSY_POSITION               equ 0005h
SCANCON0_SCANBUSY_SIZE                   equ 0001h
SCANCON0_SCANBUSY_LENGTH                 equ 0001h
SCANCON0_SCANBUSY_MASK                   equ 0020h
SCANCON0_SCANEN_POSN                     equ 0007h
SCANCON0_SCANEN_POSITION                 equ 0007h
SCANCON0_SCANEN_SIZE                     equ 0001h
SCANCON0_SCANEN_LENGTH                   equ 0001h
SCANCON0_SCANEN_MASK                     equ 0080h
SCANCON0_SCANMODE0_POSN                  equ 0000h
SCANCON0_SCANMODE0_POSITION              equ 0000h
SCANCON0_SCANMODE0_SIZE                  equ 0001h
SCANCON0_SCANMODE0_LENGTH                equ 0001h
SCANCON0_SCANMODE0_MASK                  equ 0001h
SCANCON0_SCANMODE1_POSN                  equ 0001h
SCANCON0_SCANMODE1_POSITION              equ 0001h
SCANCON0_SCANMODE1_SIZE                  equ 0001h
SCANCON0_SCANMODE1_LENGTH                equ 0001h
SCANCON0_SCANMODE1_MASK                  equ 0002h

// Register: SCANTRIG
#define SCANTRIG SCANTRIG
SCANTRIG                                 equ 071Dh
// bitfield definitions
SCANTRIG_TSEL_POSN                       equ 0000h
SCANTRIG_TSEL_POSITION                   equ 0000h
SCANTRIG_TSEL_SIZE                       equ 0008h
SCANTRIG_TSEL_LENGTH                     equ 0008h
SCANTRIG_TSEL_MASK                       equ 00FFh
SCANTRIG_TSEL0_POSN                      equ 0000h
SCANTRIG_TSEL0_POSITION                  equ 0000h
SCANTRIG_TSEL0_SIZE                      equ 0001h
SCANTRIG_TSEL0_LENGTH                    equ 0001h
SCANTRIG_TSEL0_MASK                      equ 0001h
SCANTRIG_TSEL1_POSN                      equ 0001h
SCANTRIG_TSEL1_POSITION                  equ 0001h
SCANTRIG_TSEL1_SIZE                      equ 0001h
SCANTRIG_TSEL1_LENGTH                    equ 0001h
SCANTRIG_TSEL1_MASK                      equ 0002h
SCANTRIG_SCANTSEL_POSN                   equ 0000h
SCANTRIG_SCANTSEL_POSITION               equ 0000h
SCANTRIG_SCANTSEL_SIZE                   equ 0008h
SCANTRIG_SCANTSEL_LENGTH                 equ 0008h
SCANTRIG_SCANTSEL_MASK                   equ 00FFh
SCANTRIG_SCANTSEL0_POSN                  equ 0000h
SCANTRIG_SCANTSEL0_POSITION              equ 0000h
SCANTRIG_SCANTSEL0_SIZE                  equ 0001h
SCANTRIG_SCANTSEL0_LENGTH                equ 0001h
SCANTRIG_SCANTSEL0_MASK                  equ 0001h
SCANTRIG_SCANTSEL1_POSN                  equ 0001h
SCANTRIG_SCANTSEL1_POSITION              equ 0001h
SCANTRIG_SCANTSEL1_SIZE                  equ 0001h
SCANTRIG_SCANTSEL1_LENGTH                equ 0001h
SCANTRIG_SCANTSEL1_MASK                  equ 0002h

// Register: CRCDATL
#define CRCDATL CRCDATL
CRCDATL                                  equ 0791h
// bitfield definitions
CRCDATL_DAT_POSN                         equ 0000h
CRCDATL_DAT_POSITION                     equ 0000h
CRCDATL_DAT_SIZE                         equ 0008h
CRCDATL_DAT_LENGTH                       equ 0008h
CRCDATL_DAT_MASK                         equ 00FFh
CRCDATL_DAT0_POSN                        equ 0000h
CRCDATL_DAT0_POSITION                    equ 0000h
CRCDATL_DAT0_SIZE                        equ 0001h
CRCDATL_DAT0_LENGTH                      equ 0001h
CRCDATL_DAT0_MASK                        equ 0001h
CRCDATL_DAT1_POSN                        equ 0001h
CRCDATL_DAT1_POSITION                    equ 0001h
CRCDATL_DAT1_SIZE                        equ 0001h
CRCDATL_DAT1_LENGTH                      equ 0001h
CRCDATL_DAT1_MASK                        equ 0002h
CRCDATL_DAT2_POSN                        equ 0002h
CRCDATL_DAT2_POSITION                    equ 0002h
CRCDATL_DAT2_SIZE                        equ 0001h
CRCDATL_DAT2_LENGTH                      equ 0001h
CRCDATL_DAT2_MASK                        equ 0004h
CRCDATL_DAT3_POSN                        equ 0003h
CRCDATL_DAT3_POSITION                    equ 0003h
CRCDATL_DAT3_SIZE                        equ 0001h
CRCDATL_DAT3_LENGTH                      equ 0001h
CRCDATL_DAT3_MASK                        equ 0008h
CRCDATL_DAT4_POSN                        equ 0004h
CRCDATL_DAT4_POSITION                    equ 0004h
CRCDATL_DAT4_SIZE                        equ 0001h
CRCDATL_DAT4_LENGTH                      equ 0001h
CRCDATL_DAT4_MASK                        equ 0010h
CRCDATL_DAT5_POSN                        equ 0005h
CRCDATL_DAT5_POSITION                    equ 0005h
CRCDATL_DAT5_SIZE                        equ 0001h
CRCDATL_DAT5_LENGTH                      equ 0001h
CRCDATL_DAT5_MASK                        equ 0020h
CRCDATL_DAT6_POSN                        equ 0006h
CRCDATL_DAT6_POSITION                    equ 0006h
CRCDATL_DAT6_SIZE                        equ 0001h
CRCDATL_DAT6_LENGTH                      equ 0001h
CRCDATL_DAT6_MASK                        equ 0040h
CRCDATL_DAT7_POSN                        equ 0007h
CRCDATL_DAT7_POSITION                    equ 0007h
CRCDATL_DAT7_SIZE                        equ 0001h
CRCDATL_DAT7_LENGTH                      equ 0001h
CRCDATL_DAT7_MASK                        equ 0080h
CRCDATL_CRCDAT_POSN                      equ 0000h
CRCDATL_CRCDAT_POSITION                  equ 0000h
CRCDATL_CRCDAT_SIZE                      equ 0008h
CRCDATL_CRCDAT_LENGTH                    equ 0008h
CRCDATL_CRCDAT_MASK                      equ 00FFh
CRCDATL_CRCDAT0_POSN                     equ 0000h
CRCDATL_CRCDAT0_POSITION                 equ 0000h
CRCDATL_CRCDAT0_SIZE                     equ 0001h
CRCDATL_CRCDAT0_LENGTH                   equ 0001h
CRCDATL_CRCDAT0_MASK                     equ 0001h
CRCDATL_CRCDAT1_POSN                     equ 0001h
CRCDATL_CRCDAT1_POSITION                 equ 0001h
CRCDATL_CRCDAT1_SIZE                     equ 0001h
CRCDATL_CRCDAT1_LENGTH                   equ 0001h
CRCDATL_CRCDAT1_MASK                     equ 0002h
CRCDATL_CRCDAT2_POSN                     equ 0002h
CRCDATL_CRCDAT2_POSITION                 equ 0002h
CRCDATL_CRCDAT2_SIZE                     equ 0001h
CRCDATL_CRCDAT2_LENGTH                   equ 0001h
CRCDATL_CRCDAT2_MASK                     equ 0004h
CRCDATL_CRCDAT3_POSN                     equ 0003h
CRCDATL_CRCDAT3_POSITION                 equ 0003h
CRCDATL_CRCDAT3_SIZE                     equ 0001h
CRCDATL_CRCDAT3_LENGTH                   equ 0001h
CRCDATL_CRCDAT3_MASK                     equ 0008h
CRCDATL_CRCDAT4_POSN                     equ 0004h
CRCDATL_CRCDAT4_POSITION                 equ 0004h
CRCDATL_CRCDAT4_SIZE                     equ 0001h
CRCDATL_CRCDAT4_LENGTH                   equ 0001h
CRCDATL_CRCDAT4_MASK                     equ 0010h
CRCDATL_CRCDAT5_POSN                     equ 0005h
CRCDATL_CRCDAT5_POSITION                 equ 0005h
CRCDATL_CRCDAT5_SIZE                     equ 0001h
CRCDATL_CRCDAT5_LENGTH                   equ 0001h
CRCDATL_CRCDAT5_MASK                     equ 0020h
CRCDATL_CRCDAT6_POSN                     equ 0006h
CRCDATL_CRCDAT6_POSITION                 equ 0006h
CRCDATL_CRCDAT6_SIZE                     equ 0001h
CRCDATL_CRCDAT6_LENGTH                   equ 0001h
CRCDATL_CRCDAT6_MASK                     equ 0040h
CRCDATL_CRDCDAT7_POSN                    equ 0007h
CRCDATL_CRDCDAT7_POSITION                equ 0007h
CRCDATL_CRDCDAT7_SIZE                    equ 0001h
CRCDATL_CRDCDAT7_LENGTH                  equ 0001h
CRCDATL_CRDCDAT7_MASK                    equ 0080h

// Register: CRCDATH
#define CRCDATH CRCDATH
CRCDATH                                  equ 0792h
// bitfield definitions
CRCDATH_DAT_POSN                         equ 0000h
CRCDATH_DAT_POSITION                     equ 0000h
CRCDATH_DAT_SIZE                         equ 0008h
CRCDATH_DAT_LENGTH                       equ 0008h
CRCDATH_DAT_MASK                         equ 00FFh
CRCDATH_DAT8_POSN                        equ 0000h
CRCDATH_DAT8_POSITION                    equ 0000h
CRCDATH_DAT8_SIZE                        equ 0001h
CRCDATH_DAT8_LENGTH                      equ 0001h
CRCDATH_DAT8_MASK                        equ 0001h
CRCDATH_DAT9_POSN                        equ 0001h
CRCDATH_DAT9_POSITION                    equ 0001h
CRCDATH_DAT9_SIZE                        equ 0001h
CRCDATH_DAT9_LENGTH                      equ 0001h
CRCDATH_DAT9_MASK                        equ 0002h
CRCDATH_DAT10_POSN                       equ 0002h
CRCDATH_DAT10_POSITION                   equ 0002h
CRCDATH_DAT10_SIZE                       equ 0001h
CRCDATH_DAT10_LENGTH                     equ 0001h
CRCDATH_DAT10_MASK                       equ 0004h
CRCDATH_DAT11_POSN                       equ 0003h
CRCDATH_DAT11_POSITION                   equ 0003h
CRCDATH_DAT11_SIZE                       equ 0001h
CRCDATH_DAT11_LENGTH                     equ 0001h
CRCDATH_DAT11_MASK                       equ 0008h
CRCDATH_DAT12_POSN                       equ 0004h
CRCDATH_DAT12_POSITION                   equ 0004h
CRCDATH_DAT12_SIZE                       equ 0001h
CRCDATH_DAT12_LENGTH                     equ 0001h
CRCDATH_DAT12_MASK                       equ 0010h
CRCDATH_DAT13_POSN                       equ 0005h
CRCDATH_DAT13_POSITION                   equ 0005h
CRCDATH_DAT13_SIZE                       equ 0001h
CRCDATH_DAT13_LENGTH                     equ 0001h
CRCDATH_DAT13_MASK                       equ 0020h
CRCDATH_DAT14_POSN                       equ 0006h
CRCDATH_DAT14_POSITION                   equ 0006h
CRCDATH_DAT14_SIZE                       equ 0001h
CRCDATH_DAT14_LENGTH                     equ 0001h
CRCDATH_DAT14_MASK                       equ 0040h
CRCDATH_DAT15_POSN                       equ 0007h
CRCDATH_DAT15_POSITION                   equ 0007h
CRCDATH_DAT15_SIZE                       equ 0001h
CRCDATH_DAT15_LENGTH                     equ 0001h
CRCDATH_DAT15_MASK                       equ 0080h
CRCDATH_CRCDAT_POSN                      equ 0000h
CRCDATH_CRCDAT_POSITION                  equ 0000h
CRCDATH_CRCDAT_SIZE                      equ 0008h
CRCDATH_CRCDAT_LENGTH                    equ 0008h
CRCDATH_CRCDAT_MASK                      equ 00FFh
CRCDATH_CRCDAT8_POSN                     equ 0000h
CRCDATH_CRCDAT8_POSITION                 equ 0000h
CRCDATH_CRCDAT8_SIZE                     equ 0001h
CRCDATH_CRCDAT8_LENGTH                   equ 0001h
CRCDATH_CRCDAT8_MASK                     equ 0001h
CRCDATH_CRCDAT9_POSN                     equ 0001h
CRCDATH_CRCDAT9_POSITION                 equ 0001h
CRCDATH_CRCDAT9_SIZE                     equ 0001h
CRCDATH_CRCDAT9_LENGTH                   equ 0001h
CRCDATH_CRCDAT9_MASK                     equ 0002h
CRCDATH_CRCDAT10_POSN                    equ 0002h
CRCDATH_CRCDAT10_POSITION                equ 0002h
CRCDATH_CRCDAT10_SIZE                    equ 0001h
CRCDATH_CRCDAT10_LENGTH                  equ 0001h
CRCDATH_CRCDAT10_MASK                    equ 0004h
CRCDATH_CRCDAT11_POSN                    equ 0003h
CRCDATH_CRCDAT11_POSITION                equ 0003h
CRCDATH_CRCDAT11_SIZE                    equ 0001h
CRCDATH_CRCDAT11_LENGTH                  equ 0001h
CRCDATH_CRCDAT11_MASK                    equ 0008h
CRCDATH_CRCDAT12_POSN                    equ 0004h
CRCDATH_CRCDAT12_POSITION                equ 0004h
CRCDATH_CRCDAT12_SIZE                    equ 0001h
CRCDATH_CRCDAT12_LENGTH                  equ 0001h
CRCDATH_CRCDAT12_MASK                    equ 0010h
CRCDATH_CRCDAT13_POSN                    equ 0005h
CRCDATH_CRCDAT13_POSITION                equ 0005h
CRCDATH_CRCDAT13_SIZE                    equ 0001h
CRCDATH_CRCDAT13_LENGTH                  equ 0001h
CRCDATH_CRCDAT13_MASK                    equ 0020h
CRCDATH_CRCDAT14_POSN                    equ 0006h
CRCDATH_CRCDAT14_POSITION                equ 0006h
CRCDATH_CRCDAT14_SIZE                    equ 0001h
CRCDATH_CRCDAT14_LENGTH                  equ 0001h
CRCDATH_CRCDAT14_MASK                    equ 0040h
CRCDATH_CRCDAT15_POSN                    equ 0007h
CRCDATH_CRCDAT15_POSITION                equ 0007h
CRCDATH_CRCDAT15_SIZE                    equ 0001h
CRCDATH_CRCDAT15_LENGTH                  equ 0001h
CRCDATH_CRCDAT15_MASK                    equ 0080h

// Register: CRCACCL
#define CRCACCL CRCACCL
CRCACCL                                  equ 0793h
// bitfield definitions
CRCACCL_ACC_POSN                         equ 0000h
CRCACCL_ACC_POSITION                     equ 0000h
CRCACCL_ACC_SIZE                         equ 0008h
CRCACCL_ACC_LENGTH                       equ 0008h
CRCACCL_ACC_MASK                         equ 00FFh
CRCACCL_ACC0_POSN                        equ 0000h
CRCACCL_ACC0_POSITION                    equ 0000h
CRCACCL_ACC0_SIZE                        equ 0001h
CRCACCL_ACC0_LENGTH                      equ 0001h
CRCACCL_ACC0_MASK                        equ 0001h
CRCACCL_ACC1_POSN                        equ 0001h
CRCACCL_ACC1_POSITION                    equ 0001h
CRCACCL_ACC1_SIZE                        equ 0001h
CRCACCL_ACC1_LENGTH                      equ 0001h
CRCACCL_ACC1_MASK                        equ 0002h
CRCACCL_ACC2_POSN                        equ 0002h
CRCACCL_ACC2_POSITION                    equ 0002h
CRCACCL_ACC2_SIZE                        equ 0001h
CRCACCL_ACC2_LENGTH                      equ 0001h
CRCACCL_ACC2_MASK                        equ 0004h
CRCACCL_ACC3_POSN                        equ 0003h
CRCACCL_ACC3_POSITION                    equ 0003h
CRCACCL_ACC3_SIZE                        equ 0001h
CRCACCL_ACC3_LENGTH                      equ 0001h
CRCACCL_ACC3_MASK                        equ 0008h
CRCACCL_ACC4_POSN                        equ 0004h
CRCACCL_ACC4_POSITION                    equ 0004h
CRCACCL_ACC4_SIZE                        equ 0001h
CRCACCL_ACC4_LENGTH                      equ 0001h
CRCACCL_ACC4_MASK                        equ 0010h
CRCACCL_ACC5_POSN                        equ 0005h
CRCACCL_ACC5_POSITION                    equ 0005h
CRCACCL_ACC5_SIZE                        equ 0001h
CRCACCL_ACC5_LENGTH                      equ 0001h
CRCACCL_ACC5_MASK                        equ 0020h
CRCACCL_ACC6_POSN                        equ 0006h
CRCACCL_ACC6_POSITION                    equ 0006h
CRCACCL_ACC6_SIZE                        equ 0001h
CRCACCL_ACC6_LENGTH                      equ 0001h
CRCACCL_ACC6_MASK                        equ 0040h
CRCACCL_ACC7_POSN                        equ 0007h
CRCACCL_ACC7_POSITION                    equ 0007h
CRCACCL_ACC7_SIZE                        equ 0001h
CRCACCL_ACC7_LENGTH                      equ 0001h
CRCACCL_ACC7_MASK                        equ 0080h
CRCACCL_CRCACC_POSN                      equ 0000h
CRCACCL_CRCACC_POSITION                  equ 0000h
CRCACCL_CRCACC_SIZE                      equ 0008h
CRCACCL_CRCACC_LENGTH                    equ 0008h
CRCACCL_CRCACC_MASK                      equ 00FFh
CRCACCL_CRCACC0_POSN                     equ 0000h
CRCACCL_CRCACC0_POSITION                 equ 0000h
CRCACCL_CRCACC0_SIZE                     equ 0001h
CRCACCL_CRCACC0_LENGTH                   equ 0001h
CRCACCL_CRCACC0_MASK                     equ 0001h
CRCACCL_CRCACC1_POSN                     equ 0001h
CRCACCL_CRCACC1_POSITION                 equ 0001h
CRCACCL_CRCACC1_SIZE                     equ 0001h
CRCACCL_CRCACC1_LENGTH                   equ 0001h
CRCACCL_CRCACC1_MASK                     equ 0002h
CRCACCL_CRCACC2_POSN                     equ 0002h
CRCACCL_CRCACC2_POSITION                 equ 0002h
CRCACCL_CRCACC2_SIZE                     equ 0001h
CRCACCL_CRCACC2_LENGTH                   equ 0001h
CRCACCL_CRCACC2_MASK                     equ 0004h
CRCACCL_CRCACC3_POSN                     equ 0003h
CRCACCL_CRCACC3_POSITION                 equ 0003h
CRCACCL_CRCACC3_SIZE                     equ 0001h
CRCACCL_CRCACC3_LENGTH                   equ 0001h
CRCACCL_CRCACC3_MASK                     equ 0008h
CRCACCL_CRCACC4_POSN                     equ 0004h
CRCACCL_CRCACC4_POSITION                 equ 0004h
CRCACCL_CRCACC4_SIZE                     equ 0001h
CRCACCL_CRCACC4_LENGTH                   equ 0001h
CRCACCL_CRCACC4_MASK                     equ 0010h
CRCACCL_CRCACC5_POSN                     equ 0005h
CRCACCL_CRCACC5_POSITION                 equ 0005h
CRCACCL_CRCACC5_SIZE                     equ 0001h
CRCACCL_CRCACC5_LENGTH                   equ 0001h
CRCACCL_CRCACC5_MASK                     equ 0020h
CRCACCL_CRCACC6_POSN                     equ 0006h
CRCACCL_CRCACC6_POSITION                 equ 0006h
CRCACCL_CRCACC6_SIZE                     equ 0001h
CRCACCL_CRCACC6_LENGTH                   equ 0001h
CRCACCL_CRCACC6_MASK                     equ 0040h
CRCACCL_CRCACC7_POSN                     equ 0007h
CRCACCL_CRCACC7_POSITION                 equ 0007h
CRCACCL_CRCACC7_SIZE                     equ 0001h
CRCACCL_CRCACC7_LENGTH                   equ 0001h
CRCACCL_CRCACC7_MASK                     equ 0080h

// Register: CRCACCH
#define CRCACCH CRCACCH
CRCACCH                                  equ 0794h
// bitfield definitions
CRCACCH_ACC_POSN                         equ 0000h
CRCACCH_ACC_POSITION                     equ 0000h
CRCACCH_ACC_SIZE                         equ 0008h
CRCACCH_ACC_LENGTH                       equ 0008h
CRCACCH_ACC_MASK                         equ 00FFh
CRCACCH_ACC8_POSN                        equ 0000h
CRCACCH_ACC8_POSITION                    equ 0000h
CRCACCH_ACC8_SIZE                        equ 0001h
CRCACCH_ACC8_LENGTH                      equ 0001h
CRCACCH_ACC8_MASK                        equ 0001h
CRCACCH_ACC9_POSN                        equ 0001h
CRCACCH_ACC9_POSITION                    equ 0001h
CRCACCH_ACC9_SIZE                        equ 0001h
CRCACCH_ACC9_LENGTH                      equ 0001h
CRCACCH_ACC9_MASK                        equ 0002h
CRCACCH_ACC10_POSN                       equ 0002h
CRCACCH_ACC10_POSITION                   equ 0002h
CRCACCH_ACC10_SIZE                       equ 0001h
CRCACCH_ACC10_LENGTH                     equ 0001h
CRCACCH_ACC10_MASK                       equ 0004h
CRCACCH_ACC11_POSN                       equ 0003h
CRCACCH_ACC11_POSITION                   equ 0003h
CRCACCH_ACC11_SIZE                       equ 0001h
CRCACCH_ACC11_LENGTH                     equ 0001h
CRCACCH_ACC11_MASK                       equ 0008h
CRCACCH_ACC12_POSN                       equ 0004h
CRCACCH_ACC12_POSITION                   equ 0004h
CRCACCH_ACC12_SIZE                       equ 0001h
CRCACCH_ACC12_LENGTH                     equ 0001h
CRCACCH_ACC12_MASK                       equ 0010h
CRCACCH_ACC13_POSN                       equ 0005h
CRCACCH_ACC13_POSITION                   equ 0005h
CRCACCH_ACC13_SIZE                       equ 0001h
CRCACCH_ACC13_LENGTH                     equ 0001h
CRCACCH_ACC13_MASK                       equ 0020h
CRCACCH_ACC14_POSN                       equ 0006h
CRCACCH_ACC14_POSITION                   equ 0006h
CRCACCH_ACC14_SIZE                       equ 0001h
CRCACCH_ACC14_LENGTH                     equ 0001h
CRCACCH_ACC14_MASK                       equ 0040h
CRCACCH_ACC15_POSN                       equ 0007h
CRCACCH_ACC15_POSITION                   equ 0007h
CRCACCH_ACC15_SIZE                       equ 0001h
CRCACCH_ACC15_LENGTH                     equ 0001h
CRCACCH_ACC15_MASK                       equ 0080h
CRCACCH_CRCACC_POSN                      equ 0000h
CRCACCH_CRCACC_POSITION                  equ 0000h
CRCACCH_CRCACC_SIZE                      equ 0008h
CRCACCH_CRCACC_LENGTH                    equ 0008h
CRCACCH_CRCACC_MASK                      equ 00FFh
CRCACCH_CRCACC8_POSN                     equ 0000h
CRCACCH_CRCACC8_POSITION                 equ 0000h
CRCACCH_CRCACC8_SIZE                     equ 0001h
CRCACCH_CRCACC8_LENGTH                   equ 0001h
CRCACCH_CRCACC8_MASK                     equ 0001h
CRCACCH_CRCACC9_POSN                     equ 0001h
CRCACCH_CRCACC9_POSITION                 equ 0001h
CRCACCH_CRCACC9_SIZE                     equ 0001h
CRCACCH_CRCACC9_LENGTH                   equ 0001h
CRCACCH_CRCACC9_MASK                     equ 0002h
CRCACCH_CRCACC10_POSN                    equ 0002h
CRCACCH_CRCACC10_POSITION                equ 0002h
CRCACCH_CRCACC10_SIZE                    equ 0001h
CRCACCH_CRCACC10_LENGTH                  equ 0001h
CRCACCH_CRCACC10_MASK                    equ 0004h
CRCACCH_CRCACC11_POSN                    equ 0003h
CRCACCH_CRCACC11_POSITION                equ 0003h
CRCACCH_CRCACC11_SIZE                    equ 0001h
CRCACCH_CRCACC11_LENGTH                  equ 0001h
CRCACCH_CRCACC11_MASK                    equ 0008h
CRCACCH_CRCACC12_POSN                    equ 0004h
CRCACCH_CRCACC12_POSITION                equ 0004h
CRCACCH_CRCACC12_SIZE                    equ 0001h
CRCACCH_CRCACC12_LENGTH                  equ 0001h
CRCACCH_CRCACC12_MASK                    equ 0010h
CRCACCH_CRCACC13_POSN                    equ 0005h
CRCACCH_CRCACC13_POSITION                equ 0005h
CRCACCH_CRCACC13_SIZE                    equ 0001h
CRCACCH_CRCACC13_LENGTH                  equ 0001h
CRCACCH_CRCACC13_MASK                    equ 0020h
CRCACCH_CRCACC14_POSN                    equ 0006h
CRCACCH_CRCACC14_POSITION                equ 0006h
CRCACCH_CRCACC14_SIZE                    equ 0001h
CRCACCH_CRCACC14_LENGTH                  equ 0001h
CRCACCH_CRCACC14_MASK                    equ 0040h
CRCACCH_CRCACC15_POSN                    equ 0007h
CRCACCH_CRCACC15_POSITION                equ 0007h
CRCACCH_CRCACC15_SIZE                    equ 0001h
CRCACCH_CRCACC15_LENGTH                  equ 0001h
CRCACCH_CRCACC15_MASK                    equ 0080h

// Register: CRCSHIFTL
#define CRCSHIFTL CRCSHIFTL
CRCSHIFTL                                equ 0795h
// bitfield definitions
CRCSHIFTL_SHIFT_POSN                     equ 0000h
CRCSHIFTL_SHIFT_POSITION                 equ 0000h
CRCSHIFTL_SHIFT_SIZE                     equ 0008h
CRCSHIFTL_SHIFT_LENGTH                   equ 0008h
CRCSHIFTL_SHIFT_MASK                     equ 00FFh
CRCSHIFTL_SHIFT0_POSN                    equ 0000h
CRCSHIFTL_SHIFT0_POSITION                equ 0000h
CRCSHIFTL_SHIFT0_SIZE                    equ 0001h
CRCSHIFTL_SHIFT0_LENGTH                  equ 0001h
CRCSHIFTL_SHIFT0_MASK                    equ 0001h
CRCSHIFTL_SHIFT1_POSN                    equ 0001h
CRCSHIFTL_SHIFT1_POSITION                equ 0001h
CRCSHIFTL_SHIFT1_SIZE                    equ 0001h
CRCSHIFTL_SHIFT1_LENGTH                  equ 0001h
CRCSHIFTL_SHIFT1_MASK                    equ 0002h
CRCSHIFTL_SHIFT2_POSN                    equ 0002h
CRCSHIFTL_SHIFT2_POSITION                equ 0002h
CRCSHIFTL_SHIFT2_SIZE                    equ 0001h
CRCSHIFTL_SHIFT2_LENGTH                  equ 0001h
CRCSHIFTL_SHIFT2_MASK                    equ 0004h
CRCSHIFTL_SHIFT3_POSN                    equ 0003h
CRCSHIFTL_SHIFT3_POSITION                equ 0003h
CRCSHIFTL_SHIFT3_SIZE                    equ 0001h
CRCSHIFTL_SHIFT3_LENGTH                  equ 0001h
CRCSHIFTL_SHIFT3_MASK                    equ 0008h
CRCSHIFTL_SHIFT4_POSN                    equ 0004h
CRCSHIFTL_SHIFT4_POSITION                equ 0004h
CRCSHIFTL_SHIFT4_SIZE                    equ 0001h
CRCSHIFTL_SHIFT4_LENGTH                  equ 0001h
CRCSHIFTL_SHIFT4_MASK                    equ 0010h
CRCSHIFTL_SHIFT5_POSN                    equ 0005h
CRCSHIFTL_SHIFT5_POSITION                equ 0005h
CRCSHIFTL_SHIFT5_SIZE                    equ 0001h
CRCSHIFTL_SHIFT5_LENGTH                  equ 0001h
CRCSHIFTL_SHIFT5_MASK                    equ 0020h
CRCSHIFTL_SHIFT6_POSN                    equ 0006h
CRCSHIFTL_SHIFT6_POSITION                equ 0006h
CRCSHIFTL_SHIFT6_SIZE                    equ 0001h
CRCSHIFTL_SHIFT6_LENGTH                  equ 0001h
CRCSHIFTL_SHIFT6_MASK                    equ 0040h
CRCSHIFTL_SHIFT7_POSN                    equ 0007h
CRCSHIFTL_SHIFT7_POSITION                equ 0007h
CRCSHIFTL_SHIFT7_SIZE                    equ 0001h
CRCSHIFTL_SHIFT7_LENGTH                  equ 0001h
CRCSHIFTL_SHIFT7_MASK                    equ 0080h
CRCSHIFTL_CRCSHIFT_POSN                  equ 0000h
CRCSHIFTL_CRCSHIFT_POSITION              equ 0000h
CRCSHIFTL_CRCSHIFT_SIZE                  equ 0008h
CRCSHIFTL_CRCSHIFT_LENGTH                equ 0008h
CRCSHIFTL_CRCSHIFT_MASK                  equ 00FFh
CRCSHIFTL_CRCSHIFT0_POSN                 equ 0000h
CRCSHIFTL_CRCSHIFT0_POSITION             equ 0000h
CRCSHIFTL_CRCSHIFT0_SIZE                 equ 0001h
CRCSHIFTL_CRCSHIFT0_LENGTH               equ 0001h
CRCSHIFTL_CRCSHIFT0_MASK                 equ 0001h
CRCSHIFTL_CRCSHIFT1_POSN                 equ 0001h
CRCSHIFTL_CRCSHIFT1_POSITION             equ 0001h
CRCSHIFTL_CRCSHIFT1_SIZE                 equ 0001h
CRCSHIFTL_CRCSHIFT1_LENGTH               equ 0001h
CRCSHIFTL_CRCSHIFT1_MASK                 equ 0002h
CRCSHIFTL_CRCSHIFT2_POSN                 equ 0002h
CRCSHIFTL_CRCSHIFT2_POSITION             equ 0002h
CRCSHIFTL_CRCSHIFT2_SIZE                 equ 0001h
CRCSHIFTL_CRCSHIFT2_LENGTH               equ 0001h
CRCSHIFTL_CRCSHIFT2_MASK                 equ 0004h
CRCSHIFTL_CRCSHIFT3_POSN                 equ 0003h
CRCSHIFTL_CRCSHIFT3_POSITION             equ 0003h
CRCSHIFTL_CRCSHIFT3_SIZE                 equ 0001h
CRCSHIFTL_CRCSHIFT3_LENGTH               equ 0001h
CRCSHIFTL_CRCSHIFT3_MASK                 equ 0008h
CRCSHIFTL_CRCSHIFT4_POSN                 equ 0004h
CRCSHIFTL_CRCSHIFT4_POSITION             equ 0004h
CRCSHIFTL_CRCSHIFT4_SIZE                 equ 0001h
CRCSHIFTL_CRCSHIFT4_LENGTH               equ 0001h
CRCSHIFTL_CRCSHIFT4_MASK                 equ 0010h
CRCSHIFTL_CRCSHIFT5_POSN                 equ 0005h
CRCSHIFTL_CRCSHIFT5_POSITION             equ 0005h
CRCSHIFTL_CRCSHIFT5_SIZE                 equ 0001h
CRCSHIFTL_CRCSHIFT5_LENGTH               equ 0001h
CRCSHIFTL_CRCSHIFT5_MASK                 equ 0020h
CRCSHIFTL_CRCSHIFT6_POSN                 equ 0006h
CRCSHIFTL_CRCSHIFT6_POSITION             equ 0006h
CRCSHIFTL_CRCSHIFT6_SIZE                 equ 0001h
CRCSHIFTL_CRCSHIFT6_LENGTH               equ 0001h
CRCSHIFTL_CRCSHIFT6_MASK                 equ 0040h
CRCSHIFTL_CRCSHIFT7_POSN                 equ 0007h
CRCSHIFTL_CRCSHIFT7_POSITION             equ 0007h
CRCSHIFTL_CRCSHIFT7_SIZE                 equ 0001h
CRCSHIFTL_CRCSHIFT7_LENGTH               equ 0001h
CRCSHIFTL_CRCSHIFT7_MASK                 equ 0080h

// Register: CRCSHIFTH
#define CRCSHIFTH CRCSHIFTH
CRCSHIFTH                                equ 0796h
// bitfield definitions
CRCSHIFTH_SHIFT_POSN                     equ 0000h
CRCSHIFTH_SHIFT_POSITION                 equ 0000h
CRCSHIFTH_SHIFT_SIZE                     equ 0008h
CRCSHIFTH_SHIFT_LENGTH                   equ 0008h
CRCSHIFTH_SHIFT_MASK                     equ 00FFh
CRCSHIFTH_SHIFT8_POSN                    equ 0000h
CRCSHIFTH_SHIFT8_POSITION                equ 0000h
CRCSHIFTH_SHIFT8_SIZE                    equ 0001h
CRCSHIFTH_SHIFT8_LENGTH                  equ 0001h
CRCSHIFTH_SHIFT8_MASK                    equ 0001h
CRCSHIFTH_SHIFT9_POSN                    equ 0001h
CRCSHIFTH_SHIFT9_POSITION                equ 0001h
CRCSHIFTH_SHIFT9_SIZE                    equ 0001h
CRCSHIFTH_SHIFT9_LENGTH                  equ 0001h
CRCSHIFTH_SHIFT9_MASK                    equ 0002h
CRCSHIFTH_SHIFT10_POSN                   equ 0002h
CRCSHIFTH_SHIFT10_POSITION               equ 0002h
CRCSHIFTH_SHIFT10_SIZE                   equ 0001h
CRCSHIFTH_SHIFT10_LENGTH                 equ 0001h
CRCSHIFTH_SHIFT10_MASK                   equ 0004h
CRCSHIFTH_SHIFT11_POSN                   equ 0003h
CRCSHIFTH_SHIFT11_POSITION               equ 0003h
CRCSHIFTH_SHIFT11_SIZE                   equ 0001h
CRCSHIFTH_SHIFT11_LENGTH                 equ 0001h
CRCSHIFTH_SHIFT11_MASK                   equ 0008h
CRCSHIFTH_SHIFT12_POSN                   equ 0004h
CRCSHIFTH_SHIFT12_POSITION               equ 0004h
CRCSHIFTH_SHIFT12_SIZE                   equ 0001h
CRCSHIFTH_SHIFT12_LENGTH                 equ 0001h
CRCSHIFTH_SHIFT12_MASK                   equ 0010h
CRCSHIFTH_SHIFT13_POSN                   equ 0005h
CRCSHIFTH_SHIFT13_POSITION               equ 0005h
CRCSHIFTH_SHIFT13_SIZE                   equ 0001h
CRCSHIFTH_SHIFT13_LENGTH                 equ 0001h
CRCSHIFTH_SHIFT13_MASK                   equ 0020h
CRCSHIFTH_SHIFT14_POSN                   equ 0006h
CRCSHIFTH_SHIFT14_POSITION               equ 0006h
CRCSHIFTH_SHIFT14_SIZE                   equ 0001h
CRCSHIFTH_SHIFT14_LENGTH                 equ 0001h
CRCSHIFTH_SHIFT14_MASK                   equ 0040h
CRCSHIFTH_SHIFT15_POSN                   equ 0007h
CRCSHIFTH_SHIFT15_POSITION               equ 0007h
CRCSHIFTH_SHIFT15_SIZE                   equ 0001h
CRCSHIFTH_SHIFT15_LENGTH                 equ 0001h
CRCSHIFTH_SHIFT15_MASK                   equ 0080h
CRCSHIFTH_CRCSHIFT_POSN                  equ 0000h
CRCSHIFTH_CRCSHIFT_POSITION              equ 0000h
CRCSHIFTH_CRCSHIFT_SIZE                  equ 0008h
CRCSHIFTH_CRCSHIFT_LENGTH                equ 0008h
CRCSHIFTH_CRCSHIFT_MASK                  equ 00FFh
CRCSHIFTH_CRCSHIFT8_POSN                 equ 0000h
CRCSHIFTH_CRCSHIFT8_POSITION             equ 0000h
CRCSHIFTH_CRCSHIFT8_SIZE                 equ 0001h
CRCSHIFTH_CRCSHIFT8_LENGTH               equ 0001h
CRCSHIFTH_CRCSHIFT8_MASK                 equ 0001h
CRCSHIFTH_CRCSHIFT9_POSN                 equ 0001h
CRCSHIFTH_CRCSHIFT9_POSITION             equ 0001h
CRCSHIFTH_CRCSHIFT9_SIZE                 equ 0001h
CRCSHIFTH_CRCSHIFT9_LENGTH               equ 0001h
CRCSHIFTH_CRCSHIFT9_MASK                 equ 0002h
CRCSHIFTH_CRCSHIFT10_POSN                equ 0002h
CRCSHIFTH_CRCSHIFT10_POSITION            equ 0002h
CRCSHIFTH_CRCSHIFT10_SIZE                equ 0001h
CRCSHIFTH_CRCSHIFT10_LENGTH              equ 0001h
CRCSHIFTH_CRCSHIFT10_MASK                equ 0004h
CRCSHIFTH_CRCSHIFT11_POSN                equ 0003h
CRCSHIFTH_CRCSHIFT11_POSITION            equ 0003h
CRCSHIFTH_CRCSHIFT11_SIZE                equ 0001h
CRCSHIFTH_CRCSHIFT11_LENGTH              equ 0001h
CRCSHIFTH_CRCSHIFT11_MASK                equ 0008h
CRCSHIFTH_CRCSHIFT12_POSN                equ 0004h
CRCSHIFTH_CRCSHIFT12_POSITION            equ 0004h
CRCSHIFTH_CRCSHIFT12_SIZE                equ 0001h
CRCSHIFTH_CRCSHIFT12_LENGTH              equ 0001h
CRCSHIFTH_CRCSHIFT12_MASK                equ 0010h
CRCSHIFTH_CRCSHIFT13_POSN                equ 0005h
CRCSHIFTH_CRCSHIFT13_POSITION            equ 0005h
CRCSHIFTH_CRCSHIFT13_SIZE                equ 0001h
CRCSHIFTH_CRCSHIFT13_LENGTH              equ 0001h
CRCSHIFTH_CRCSHIFT13_MASK                equ 0020h
CRCSHIFTH_CRCSHIFT14_POSN                equ 0006h
CRCSHIFTH_CRCSHIFT14_POSITION            equ 0006h
CRCSHIFTH_CRCSHIFT14_SIZE                equ 0001h
CRCSHIFTH_CRCSHIFT14_LENGTH              equ 0001h
CRCSHIFTH_CRCSHIFT14_MASK                equ 0040h
CRCSHIFTH_CRCSHIFT15_POSN                equ 0007h
CRCSHIFTH_CRCSHIFT15_POSITION            equ 0007h
CRCSHIFTH_CRCSHIFT15_SIZE                equ 0001h
CRCSHIFTH_CRCSHIFT15_LENGTH              equ 0001h
CRCSHIFTH_CRCSHIFT15_MASK                equ 0080h

// Register: CRCXORL
#define CRCXORL CRCXORL
CRCXORL                                  equ 0797h
// bitfield definitions
CRCXORL_XOR1_POSN                        equ 0001h
CRCXORL_XOR1_POSITION                    equ 0001h
CRCXORL_XOR1_SIZE                        equ 0001h
CRCXORL_XOR1_LENGTH                      equ 0001h
CRCXORL_XOR1_MASK                        equ 0002h
CRCXORL_XOR2_POSN                        equ 0002h
CRCXORL_XOR2_POSITION                    equ 0002h
CRCXORL_XOR2_SIZE                        equ 0001h
CRCXORL_XOR2_LENGTH                      equ 0001h
CRCXORL_XOR2_MASK                        equ 0004h
CRCXORL_XOR3_POSN                        equ 0003h
CRCXORL_XOR3_POSITION                    equ 0003h
CRCXORL_XOR3_SIZE                        equ 0001h
CRCXORL_XOR3_LENGTH                      equ 0001h
CRCXORL_XOR3_MASK                        equ 0008h
CRCXORL_XOR4_POSN                        equ 0004h
CRCXORL_XOR4_POSITION                    equ 0004h
CRCXORL_XOR4_SIZE                        equ 0001h
CRCXORL_XOR4_LENGTH                      equ 0001h
CRCXORL_XOR4_MASK                        equ 0010h
CRCXORL_XOR5_POSN                        equ 0005h
CRCXORL_XOR5_POSITION                    equ 0005h
CRCXORL_XOR5_SIZE                        equ 0001h
CRCXORL_XOR5_LENGTH                      equ 0001h
CRCXORL_XOR5_MASK                        equ 0020h
CRCXORL_XOR6_POSN                        equ 0006h
CRCXORL_XOR6_POSITION                    equ 0006h
CRCXORL_XOR6_SIZE                        equ 0001h
CRCXORL_XOR6_LENGTH                      equ 0001h
CRCXORL_XOR6_MASK                        equ 0040h
CRCXORL_XOR7_POSN                        equ 0007h
CRCXORL_XOR7_POSITION                    equ 0007h
CRCXORL_XOR7_SIZE                        equ 0001h
CRCXORL_XOR7_LENGTH                      equ 0001h
CRCXORL_XOR7_MASK                        equ 0080h
CRCXORL_CRCXOR1_POSN                     equ 0001h
CRCXORL_CRCXOR1_POSITION                 equ 0001h
CRCXORL_CRCXOR1_SIZE                     equ 0001h
CRCXORL_CRCXOR1_LENGTH                   equ 0001h
CRCXORL_CRCXOR1_MASK                     equ 0002h
CRCXORL_CRCXOR2_POSN                     equ 0002h
CRCXORL_CRCXOR2_POSITION                 equ 0002h
CRCXORL_CRCXOR2_SIZE                     equ 0001h
CRCXORL_CRCXOR2_LENGTH                   equ 0001h
CRCXORL_CRCXOR2_MASK                     equ 0004h
CRCXORL_CRCXOR3_POSN                     equ 0003h
CRCXORL_CRCXOR3_POSITION                 equ 0003h
CRCXORL_CRCXOR3_SIZE                     equ 0001h
CRCXORL_CRCXOR3_LENGTH                   equ 0001h
CRCXORL_CRCXOR3_MASK                     equ 0008h
CRCXORL_CRCXOR4_POSN                     equ 0004h
CRCXORL_CRCXOR4_POSITION                 equ 0004h
CRCXORL_CRCXOR4_SIZE                     equ 0001h
CRCXORL_CRCXOR4_LENGTH                   equ 0001h
CRCXORL_CRCXOR4_MASK                     equ 0010h
CRCXORL_CRCXOR5_POSN                     equ 0005h
CRCXORL_CRCXOR5_POSITION                 equ 0005h
CRCXORL_CRCXOR5_SIZE                     equ 0001h
CRCXORL_CRCXOR5_LENGTH                   equ 0001h
CRCXORL_CRCXOR5_MASK                     equ 0020h
CRCXORL_CRCXOR6_POSN                     equ 0006h
CRCXORL_CRCXOR6_POSITION                 equ 0006h
CRCXORL_CRCXOR6_SIZE                     equ 0001h
CRCXORL_CRCXOR6_LENGTH                   equ 0001h
CRCXORL_CRCXOR6_MASK                     equ 0040h
CRCXORL_CRCXOR7_POSN                     equ 0007h
CRCXORL_CRCXOR7_POSITION                 equ 0007h
CRCXORL_CRCXOR7_SIZE                     equ 0001h
CRCXORL_CRCXOR7_LENGTH                   equ 0001h
CRCXORL_CRCXOR7_MASK                     equ 0080h

// Register: CRCXORH
#define CRCXORH CRCXORH
CRCXORH                                  equ 0798h
// bitfield definitions
CRCXORH_XOR8_POSN                        equ 0000h
CRCXORH_XOR8_POSITION                    equ 0000h
CRCXORH_XOR8_SIZE                        equ 0001h
CRCXORH_XOR8_LENGTH                      equ 0001h
CRCXORH_XOR8_MASK                        equ 0001h
CRCXORH_XOR9_POSN                        equ 0001h
CRCXORH_XOR9_POSITION                    equ 0001h
CRCXORH_XOR9_SIZE                        equ 0001h
CRCXORH_XOR9_LENGTH                      equ 0001h
CRCXORH_XOR9_MASK                        equ 0002h
CRCXORH_XOR10_POSN                       equ 0002h
CRCXORH_XOR10_POSITION                   equ 0002h
CRCXORH_XOR10_SIZE                       equ 0001h
CRCXORH_XOR10_LENGTH                     equ 0001h
CRCXORH_XOR10_MASK                       equ 0004h
CRCXORH_XOR11_POSN                       equ 0003h
CRCXORH_XOR11_POSITION                   equ 0003h
CRCXORH_XOR11_SIZE                       equ 0001h
CRCXORH_XOR11_LENGTH                     equ 0001h
CRCXORH_XOR11_MASK                       equ 0008h
CRCXORH_XOR12_POSN                       equ 0004h
CRCXORH_XOR12_POSITION                   equ 0004h
CRCXORH_XOR12_SIZE                       equ 0001h
CRCXORH_XOR12_LENGTH                     equ 0001h
CRCXORH_XOR12_MASK                       equ 0010h
CRCXORH_XOR13_POSN                       equ 0005h
CRCXORH_XOR13_POSITION                   equ 0005h
CRCXORH_XOR13_SIZE                       equ 0001h
CRCXORH_XOR13_LENGTH                     equ 0001h
CRCXORH_XOR13_MASK                       equ 0020h
CRCXORH_XOR14_POSN                       equ 0006h
CRCXORH_XOR14_POSITION                   equ 0006h
CRCXORH_XOR14_SIZE                       equ 0001h
CRCXORH_XOR14_LENGTH                     equ 0001h
CRCXORH_XOR14_MASK                       equ 0040h
CRCXORH_XOR15_POSN                       equ 0007h
CRCXORH_XOR15_POSITION                   equ 0007h
CRCXORH_XOR15_SIZE                       equ 0001h
CRCXORH_XOR15_LENGTH                     equ 0001h
CRCXORH_XOR15_MASK                       equ 0080h
CRCXORH_CRCXOR8_POSN                     equ 0000h
CRCXORH_CRCXOR8_POSITION                 equ 0000h
CRCXORH_CRCXOR8_SIZE                     equ 0001h
CRCXORH_CRCXOR8_LENGTH                   equ 0001h
CRCXORH_CRCXOR8_MASK                     equ 0001h
CRCXORH_CRCXOR9_POSN                     equ 0001h
CRCXORH_CRCXOR9_POSITION                 equ 0001h
CRCXORH_CRCXOR9_SIZE                     equ 0001h
CRCXORH_CRCXOR9_LENGTH                   equ 0001h
CRCXORH_CRCXOR9_MASK                     equ 0002h
CRCXORH_CRCXOR10_POSN                    equ 0002h
CRCXORH_CRCXOR10_POSITION                equ 0002h
CRCXORH_CRCXOR10_SIZE                    equ 0001h
CRCXORH_CRCXOR10_LENGTH                  equ 0001h
CRCXORH_CRCXOR10_MASK                    equ 0004h
CRCXORH_CRCXOR11_POSN                    equ 0003h
CRCXORH_CRCXOR11_POSITION                equ 0003h
CRCXORH_CRCXOR11_SIZE                    equ 0001h
CRCXORH_CRCXOR11_LENGTH                  equ 0001h
CRCXORH_CRCXOR11_MASK                    equ 0008h
CRCXORH_CRCXOR12_POSN                    equ 0004h
CRCXORH_CRCXOR12_POSITION                equ 0004h
CRCXORH_CRCXOR12_SIZE                    equ 0001h
CRCXORH_CRCXOR12_LENGTH                  equ 0001h
CRCXORH_CRCXOR12_MASK                    equ 0010h
CRCXORH_CRCXOR13_POSN                    equ 0005h
CRCXORH_CRCXOR13_POSITION                equ 0005h
CRCXORH_CRCXOR13_SIZE                    equ 0001h
CRCXORH_CRCXOR13_LENGTH                  equ 0001h
CRCXORH_CRCXOR13_MASK                    equ 0020h
CRCXORH_CRCXOR14_POSN                    equ 0006h
CRCXORH_CRCXOR14_POSITION                equ 0006h
CRCXORH_CRCXOR14_SIZE                    equ 0001h
CRCXORH_CRCXOR14_LENGTH                  equ 0001h
CRCXORH_CRCXOR14_MASK                    equ 0040h
CRCXORH_CRCXOR15_POSN                    equ 0007h
CRCXORH_CRCXOR15_POSITION                equ 0007h
CRCXORH_CRCXOR15_SIZE                    equ 0001h
CRCXORH_CRCXOR15_LENGTH                  equ 0001h
CRCXORH_CRCXOR15_MASK                    equ 0080h

// Register: CRCCON0
#define CRCCON0 CRCCON0
CRCCON0                                  equ 0799h
// bitfield definitions
CRCCON0_FULL_POSN                        equ 0000h
CRCCON0_FULL_POSITION                    equ 0000h
CRCCON0_FULL_SIZE                        equ 0001h
CRCCON0_FULL_LENGTH                      equ 0001h
CRCCON0_FULL_MASK                        equ 0001h
CRCCON0_SHIFTM_POSN                      equ 0001h
CRCCON0_SHIFTM_POSITION                  equ 0001h
CRCCON0_SHIFTM_SIZE                      equ 0001h
CRCCON0_SHIFTM_LENGTH                    equ 0001h
CRCCON0_SHIFTM_MASK                      equ 0002h
CRCCON0_ACCM_POSN                        equ 0004h
CRCCON0_ACCM_POSITION                    equ 0004h
CRCCON0_ACCM_SIZE                        equ 0001h
CRCCON0_ACCM_LENGTH                      equ 0001h
CRCCON0_ACCM_MASK                        equ 0010h
CRCCON0_BUSY_POSN                        equ 0005h
CRCCON0_BUSY_POSITION                    equ 0005h
CRCCON0_BUSY_SIZE                        equ 0001h
CRCCON0_BUSY_LENGTH                      equ 0001h
CRCCON0_BUSY_MASK                        equ 0020h
CRCCON0_CRCGO_POSN                       equ 0006h
CRCCON0_CRCGO_POSITION                   equ 0006h
CRCCON0_CRCGO_SIZE                       equ 0001h
CRCCON0_CRCGO_LENGTH                     equ 0001h
CRCCON0_CRCGO_MASK                       equ 0040h
CRCCON0_EN_POSN                          equ 0007h
CRCCON0_EN_POSITION                      equ 0007h
CRCCON0_EN_SIZE                          equ 0001h
CRCCON0_EN_LENGTH                        equ 0001h
CRCCON0_EN_MASK                          equ 0080h
CRCCON0_CRCFULL_POSN                     equ 0000h
CRCCON0_CRCFULL_POSITION                 equ 0000h
CRCCON0_CRCFULL_SIZE                     equ 0001h
CRCCON0_CRCFULL_LENGTH                   equ 0001h
CRCCON0_CRCFULL_MASK                     equ 0001h
CRCCON0_CRCSHIFTM_POSN                   equ 0001h
CRCCON0_CRCSHIFTM_POSITION               equ 0001h
CRCCON0_CRCSHIFTM_SIZE                   equ 0001h
CRCCON0_CRCSHIFTM_LENGTH                 equ 0001h
CRCCON0_CRCSHIFTM_MASK                   equ 0002h
CRCCON0_CRCACCM_POSN                     equ 0004h
CRCCON0_CRCACCM_POSITION                 equ 0004h
CRCCON0_CRCACCM_SIZE                     equ 0001h
CRCCON0_CRCACCM_LENGTH                   equ 0001h
CRCCON0_CRCACCM_MASK                     equ 0010h
CRCCON0_CRCBUSY_POSN                     equ 0005h
CRCCON0_CRCBUSY_POSITION                 equ 0005h
CRCCON0_CRCBUSY_SIZE                     equ 0001h
CRCCON0_CRCBUSY_LENGTH                   equ 0001h
CRCCON0_CRCBUSY_MASK                     equ 0020h
CRCCON0_CRCEN_POSN                       equ 0007h
CRCCON0_CRCEN_POSITION                   equ 0007h
CRCCON0_CRCEN_SIZE                       equ 0001h
CRCCON0_CRCEN_LENGTH                     equ 0001h
CRCCON0_CRCEN_MASK                       equ 0080h

// Register: CRCCON1
#define CRCCON1 CRCCON1
CRCCON1                                  equ 079Ah
// bitfield definitions
CRCCON1_PLEN_POSN                        equ 0000h
CRCCON1_PLEN_POSITION                    equ 0000h
CRCCON1_PLEN_SIZE                        equ 0004h
CRCCON1_PLEN_LENGTH                      equ 0004h
CRCCON1_PLEN_MASK                        equ 000Fh
CRCCON1_DLEN_POSN                        equ 0004h
CRCCON1_DLEN_POSITION                    equ 0004h
CRCCON1_DLEN_SIZE                        equ 0004h
CRCCON1_DLEN_LENGTH                      equ 0004h
CRCCON1_DLEN_MASK                        equ 00F0h
CRCCON1_PLEN0_POSN                       equ 0000h
CRCCON1_PLEN0_POSITION                   equ 0000h
CRCCON1_PLEN0_SIZE                       equ 0001h
CRCCON1_PLEN0_LENGTH                     equ 0001h
CRCCON1_PLEN0_MASK                       equ 0001h
CRCCON1_PLEN1_POSN                       equ 0001h
CRCCON1_PLEN1_POSITION                   equ 0001h
CRCCON1_PLEN1_SIZE                       equ 0001h
CRCCON1_PLEN1_LENGTH                     equ 0001h
CRCCON1_PLEN1_MASK                       equ 0002h
CRCCON1_PLEN2_POSN                       equ 0002h
CRCCON1_PLEN2_POSITION                   equ 0002h
CRCCON1_PLEN2_SIZE                       equ 0001h
CRCCON1_PLEN2_LENGTH                     equ 0001h
CRCCON1_PLEN2_MASK                       equ 0004h
CRCCON1_PLEN3_POSN                       equ 0003h
CRCCON1_PLEN3_POSITION                   equ 0003h
CRCCON1_PLEN3_SIZE                       equ 0001h
CRCCON1_PLEN3_LENGTH                     equ 0001h
CRCCON1_PLEN3_MASK                       equ 0008h
CRCCON1_DLEN0_POSN                       equ 0004h
CRCCON1_DLEN0_POSITION                   equ 0004h
CRCCON1_DLEN0_SIZE                       equ 0001h
CRCCON1_DLEN0_LENGTH                     equ 0001h
CRCCON1_DLEN0_MASK                       equ 0010h
CRCCON1_DLEN1_POSN                       equ 0005h
CRCCON1_DLEN1_POSITION                   equ 0005h
CRCCON1_DLEN1_SIZE                       equ 0001h
CRCCON1_DLEN1_LENGTH                     equ 0001h
CRCCON1_DLEN1_MASK                       equ 0020h
CRCCON1_DLEN2_POSN                       equ 0006h
CRCCON1_DLEN2_POSITION                   equ 0006h
CRCCON1_DLEN2_SIZE                       equ 0001h
CRCCON1_DLEN2_LENGTH                     equ 0001h
CRCCON1_DLEN2_MASK                       equ 0040h
CRCCON1_DLEN3_POSN                       equ 0007h
CRCCON1_DLEN3_POSITION                   equ 0007h
CRCCON1_DLEN3_SIZE                       equ 0001h
CRCCON1_DLEN3_LENGTH                     equ 0001h
CRCCON1_DLEN3_MASK                       equ 0080h
CRCCON1_CRCPLEN_POSN                     equ 0000h
CRCCON1_CRCPLEN_POSITION                 equ 0000h
CRCCON1_CRCPLEN_SIZE                     equ 0004h
CRCCON1_CRCPLEN_LENGTH                   equ 0004h
CRCCON1_CRCPLEN_MASK                     equ 000Fh
CRCCON1_CRCDLEN_POSN                     equ 0004h
CRCCON1_CRCDLEN_POSITION                 equ 0004h
CRCCON1_CRCDLEN_SIZE                     equ 0004h
CRCCON1_CRCDLEN_LENGTH                   equ 0004h
CRCCON1_CRCDLEN_MASK                     equ 00F0h
CRCCON1_CRCPLEN0_POSN                    equ 0000h
CRCCON1_CRCPLEN0_POSITION                equ 0000h
CRCCON1_CRCPLEN0_SIZE                    equ 0001h
CRCCON1_CRCPLEN0_LENGTH                  equ 0001h
CRCCON1_CRCPLEN0_MASK                    equ 0001h
CRCCON1_CRCPLEN1_POSN                    equ 0001h
CRCCON1_CRCPLEN1_POSITION                equ 0001h
CRCCON1_CRCPLEN1_SIZE                    equ 0001h
CRCCON1_CRCPLEN1_LENGTH                  equ 0001h
CRCCON1_CRCPLEN1_MASK                    equ 0002h
CRCCON1_CRCPLEN2_POSN                    equ 0002h
CRCCON1_CRCPLEN2_POSITION                equ 0002h
CRCCON1_CRCPLEN2_SIZE                    equ 0001h
CRCCON1_CRCPLEN2_LENGTH                  equ 0001h
CRCCON1_CRCPLEN2_MASK                    equ 0004h
CRCCON1_CRCPLEN3_POSN                    equ 0003h
CRCCON1_CRCPLEN3_POSITION                equ 0003h
CRCCON1_CRCPLEN3_SIZE                    equ 0001h
CRCCON1_CRCPLEN3_LENGTH                  equ 0001h
CRCCON1_CRCPLEN3_MASK                    equ 0008h
CRCCON1_CRCDLEN0_POSN                    equ 0004h
CRCCON1_CRCDLEN0_POSITION                equ 0004h
CRCCON1_CRCDLEN0_SIZE                    equ 0001h
CRCCON1_CRCDLEN0_LENGTH                  equ 0001h
CRCCON1_CRCDLEN0_MASK                    equ 0010h
CRCCON1_CRCDLEN1_POSN                    equ 0005h
CRCCON1_CRCDLEN1_POSITION                equ 0005h
CRCCON1_CRCDLEN1_SIZE                    equ 0001h
CRCCON1_CRCDLEN1_LENGTH                  equ 0001h
CRCCON1_CRCDLEN1_MASK                    equ 0020h
CRCCON1_CRCDLEN2_POSN                    equ 0006h
CRCCON1_CRCDLEN2_POSITION                equ 0006h
CRCCON1_CRCDLEN2_SIZE                    equ 0001h
CRCCON1_CRCDLEN2_LENGTH                  equ 0001h
CRCCON1_CRCDLEN2_MASK                    equ 0040h
CRCCON1_CRCDLEN3_POSN                    equ 0007h
CRCCON1_CRCDLEN3_POSITION                equ 0007h
CRCCON1_CRCDLEN3_SIZE                    equ 0001h
CRCCON1_CRCDLEN3_LENGTH                  equ 0001h
CRCCON1_CRCDLEN3_MASK                    equ 0080h

// Register: SMT1TMRL
#define SMT1TMRL SMT1TMRL
SMT1TMRL                                 equ 0D8Ch
// bitfield definitions
SMT1TMRL_SMT1TMR_POSN                    equ 0000h
SMT1TMRL_SMT1TMR_POSITION                equ 0000h
SMT1TMRL_SMT1TMR_SIZE                    equ 0008h
SMT1TMRL_SMT1TMR_LENGTH                  equ 0008h
SMT1TMRL_SMT1TMR_MASK                    equ 00FFh
SMT1TMRL_SMT1TMR0_POSN                   equ 0000h
SMT1TMRL_SMT1TMR0_POSITION               equ 0000h
SMT1TMRL_SMT1TMR0_SIZE                   equ 0001h
SMT1TMRL_SMT1TMR0_LENGTH                 equ 0001h
SMT1TMRL_SMT1TMR0_MASK                   equ 0001h
SMT1TMRL_SMT1TMR1_POSN                   equ 0001h
SMT1TMRL_SMT1TMR1_POSITION               equ 0001h
SMT1TMRL_SMT1TMR1_SIZE                   equ 0001h
SMT1TMRL_SMT1TMR1_LENGTH                 equ 0001h
SMT1TMRL_SMT1TMR1_MASK                   equ 0002h
SMT1TMRL_SMT1TMR2_POSN                   equ 0002h
SMT1TMRL_SMT1TMR2_POSITION               equ 0002h
SMT1TMRL_SMT1TMR2_SIZE                   equ 0001h
SMT1TMRL_SMT1TMR2_LENGTH                 equ 0001h
SMT1TMRL_SMT1TMR2_MASK                   equ 0004h
SMT1TMRL_SMT1TMR3_POSN                   equ 0003h
SMT1TMRL_SMT1TMR3_POSITION               equ 0003h
SMT1TMRL_SMT1TMR3_SIZE                   equ 0001h
SMT1TMRL_SMT1TMR3_LENGTH                 equ 0001h
SMT1TMRL_SMT1TMR3_MASK                   equ 0008h
SMT1TMRL_SMT1TMR4_POSN                   equ 0004h
SMT1TMRL_SMT1TMR4_POSITION               equ 0004h
SMT1TMRL_SMT1TMR4_SIZE                   equ 0001h
SMT1TMRL_SMT1TMR4_LENGTH                 equ 0001h
SMT1TMRL_SMT1TMR4_MASK                   equ 0010h
SMT1TMRL_SMT1TMR5_POSN                   equ 0005h
SMT1TMRL_SMT1TMR5_POSITION               equ 0005h
SMT1TMRL_SMT1TMR5_SIZE                   equ 0001h
SMT1TMRL_SMT1TMR5_LENGTH                 equ 0001h
SMT1TMRL_SMT1TMR5_MASK                   equ 0020h
SMT1TMRL_SMT1TMR6_POSN                   equ 0006h
SMT1TMRL_SMT1TMR6_POSITION               equ 0006h
SMT1TMRL_SMT1TMR6_SIZE                   equ 0001h
SMT1TMRL_SMT1TMR6_LENGTH                 equ 0001h
SMT1TMRL_SMT1TMR6_MASK                   equ 0040h
SMT1TMRL_SMT1TMR7_POSN                   equ 0007h
SMT1TMRL_SMT1TMR7_POSITION               equ 0007h
SMT1TMRL_SMT1TMR7_SIZE                   equ 0001h
SMT1TMRL_SMT1TMR7_LENGTH                 equ 0001h
SMT1TMRL_SMT1TMR7_MASK                   equ 0080h

// Register: SMT1TMRH
#define SMT1TMRH SMT1TMRH
SMT1TMRH                                 equ 0D8Dh
// bitfield definitions
SMT1TMRH_SMT1TMR_POSN                    equ 0000h
SMT1TMRH_SMT1TMR_POSITION                equ 0000h
SMT1TMRH_SMT1TMR_SIZE                    equ 0008h
SMT1TMRH_SMT1TMR_LENGTH                  equ 0008h
SMT1TMRH_SMT1TMR_MASK                    equ 00FFh
SMT1TMRH_SMT1TMR8_POSN                   equ 0000h
SMT1TMRH_SMT1TMR8_POSITION               equ 0000h
SMT1TMRH_SMT1TMR8_SIZE                   equ 0001h
SMT1TMRH_SMT1TMR8_LENGTH                 equ 0001h
SMT1TMRH_SMT1TMR8_MASK                   equ 0001h
SMT1TMRH_SMT1TMR9_POSN                   equ 0001h
SMT1TMRH_SMT1TMR9_POSITION               equ 0001h
SMT1TMRH_SMT1TMR9_SIZE                   equ 0001h
SMT1TMRH_SMT1TMR9_LENGTH                 equ 0001h
SMT1TMRH_SMT1TMR9_MASK                   equ 0002h
SMT1TMRH_SMT1TMR10_POSN                  equ 0002h
SMT1TMRH_SMT1TMR10_POSITION              equ 0002h
SMT1TMRH_SMT1TMR10_SIZE                  equ 0001h
SMT1TMRH_SMT1TMR10_LENGTH                equ 0001h
SMT1TMRH_SMT1TMR10_MASK                  equ 0004h
SMT1TMRH_SMT1TMR11_POSN                  equ 0003h
SMT1TMRH_SMT1TMR11_POSITION              equ 0003h
SMT1TMRH_SMT1TMR11_SIZE                  equ 0001h
SMT1TMRH_SMT1TMR11_LENGTH                equ 0001h
SMT1TMRH_SMT1TMR11_MASK                  equ 0008h
SMT1TMRH_SMT1TMR12_POSN                  equ 0004h
SMT1TMRH_SMT1TMR12_POSITION              equ 0004h
SMT1TMRH_SMT1TMR12_SIZE                  equ 0001h
SMT1TMRH_SMT1TMR12_LENGTH                equ 0001h
SMT1TMRH_SMT1TMR12_MASK                  equ 0010h
SMT1TMRH_SMT1TMR13_POSN                  equ 0005h
SMT1TMRH_SMT1TMR13_POSITION              equ 0005h
SMT1TMRH_SMT1TMR13_SIZE                  equ 0001h
SMT1TMRH_SMT1TMR13_LENGTH                equ 0001h
SMT1TMRH_SMT1TMR13_MASK                  equ 0020h
SMT1TMRH_SMT1TMR14_POSN                  equ 0006h
SMT1TMRH_SMT1TMR14_POSITION              equ 0006h
SMT1TMRH_SMT1TMR14_SIZE                  equ 0001h
SMT1TMRH_SMT1TMR14_LENGTH                equ 0001h
SMT1TMRH_SMT1TMR14_MASK                  equ 0040h
SMT1TMRH_SMT1TMR15_POSN                  equ 0007h
SMT1TMRH_SMT1TMR15_POSITION              equ 0007h
SMT1TMRH_SMT1TMR15_SIZE                  equ 0001h
SMT1TMRH_SMT1TMR15_LENGTH                equ 0001h
SMT1TMRH_SMT1TMR15_MASK                  equ 0080h

// Register: SMT1TMRU
#define SMT1TMRU SMT1TMRU
SMT1TMRU                                 equ 0D8Eh
// bitfield definitions
SMT1TMRU_SMT1TMR_POSN                    equ 0000h
SMT1TMRU_SMT1TMR_POSITION                equ 0000h
SMT1TMRU_SMT1TMR_SIZE                    equ 0008h
SMT1TMRU_SMT1TMR_LENGTH                  equ 0008h
SMT1TMRU_SMT1TMR_MASK                    equ 00FFh
SMT1TMRU_SMT1TMR16_POSN                  equ 0000h
SMT1TMRU_SMT1TMR16_POSITION              equ 0000h
SMT1TMRU_SMT1TMR16_SIZE                  equ 0001h
SMT1TMRU_SMT1TMR16_LENGTH                equ 0001h
SMT1TMRU_SMT1TMR16_MASK                  equ 0001h
SMT1TMRU_SMT1TMR17_POSN                  equ 0001h
SMT1TMRU_SMT1TMR17_POSITION              equ 0001h
SMT1TMRU_SMT1TMR17_SIZE                  equ 0001h
SMT1TMRU_SMT1TMR17_LENGTH                equ 0001h
SMT1TMRU_SMT1TMR17_MASK                  equ 0002h
SMT1TMRU_SMT1TMR18_POSN                  equ 0002h
SMT1TMRU_SMT1TMR18_POSITION              equ 0002h
SMT1TMRU_SMT1TMR18_SIZE                  equ 0001h
SMT1TMRU_SMT1TMR18_LENGTH                equ 0001h
SMT1TMRU_SMT1TMR18_MASK                  equ 0004h
SMT1TMRU_SMT1TMR19_POSN                  equ 0003h
SMT1TMRU_SMT1TMR19_POSITION              equ 0003h
SMT1TMRU_SMT1TMR19_SIZE                  equ 0001h
SMT1TMRU_SMT1TMR19_LENGTH                equ 0001h
SMT1TMRU_SMT1TMR19_MASK                  equ 0008h
SMT1TMRU_SMT1TMR20_POSN                  equ 0004h
SMT1TMRU_SMT1TMR20_POSITION              equ 0004h
SMT1TMRU_SMT1TMR20_SIZE                  equ 0001h
SMT1TMRU_SMT1TMR20_LENGTH                equ 0001h
SMT1TMRU_SMT1TMR20_MASK                  equ 0010h
SMT1TMRU_SMT1TMR21_POSN                  equ 0005h
SMT1TMRU_SMT1TMR21_POSITION              equ 0005h
SMT1TMRU_SMT1TMR21_SIZE                  equ 0001h
SMT1TMRU_SMT1TMR21_LENGTH                equ 0001h
SMT1TMRU_SMT1TMR21_MASK                  equ 0020h
SMT1TMRU_SMT1TMR22_POSN                  equ 0006h
SMT1TMRU_SMT1TMR22_POSITION              equ 0006h
SMT1TMRU_SMT1TMR22_SIZE                  equ 0001h
SMT1TMRU_SMT1TMR22_LENGTH                equ 0001h
SMT1TMRU_SMT1TMR22_MASK                  equ 0040h
SMT1TMRU_SMT1TMR23_POSN                  equ 0007h
SMT1TMRU_SMT1TMR23_POSITION              equ 0007h
SMT1TMRU_SMT1TMR23_SIZE                  equ 0001h
SMT1TMRU_SMT1TMR23_LENGTH                equ 0001h
SMT1TMRU_SMT1TMR23_MASK                  equ 0080h

// Register: SMT1CPRL
#define SMT1CPRL SMT1CPRL
SMT1CPRL                                 equ 0D8Fh
// bitfield definitions
SMT1CPRL_SMT1CPR_POSN                    equ 0000h
SMT1CPRL_SMT1CPR_POSITION                equ 0000h
SMT1CPRL_SMT1CPR_SIZE                    equ 0008h
SMT1CPRL_SMT1CPR_LENGTH                  equ 0008h
SMT1CPRL_SMT1CPR_MASK                    equ 00FFh
SMT1CPRL_SMT1CPR0_POSN                   equ 0000h
SMT1CPRL_SMT1CPR0_POSITION               equ 0000h
SMT1CPRL_SMT1CPR0_SIZE                   equ 0001h
SMT1CPRL_SMT1CPR0_LENGTH                 equ 0001h
SMT1CPRL_SMT1CPR0_MASK                   equ 0001h
SMT1CPRL_SMT1CPR1_POSN                   equ 0001h
SMT1CPRL_SMT1CPR1_POSITION               equ 0001h
SMT1CPRL_SMT1CPR1_SIZE                   equ 0001h
SMT1CPRL_SMT1CPR1_LENGTH                 equ 0001h
SMT1CPRL_SMT1CPR1_MASK                   equ 0002h
SMT1CPRL_SMT1CPR2_POSN                   equ 0002h
SMT1CPRL_SMT1CPR2_POSITION               equ 0002h
SMT1CPRL_SMT1CPR2_SIZE                   equ 0001h
SMT1CPRL_SMT1CPR2_LENGTH                 equ 0001h
SMT1CPRL_SMT1CPR2_MASK                   equ 0004h
SMT1CPRL_SMT1CPR3_POSN                   equ 0003h
SMT1CPRL_SMT1CPR3_POSITION               equ 0003h
SMT1CPRL_SMT1CPR3_SIZE                   equ 0001h
SMT1CPRL_SMT1CPR3_LENGTH                 equ 0001h
SMT1CPRL_SMT1CPR3_MASK                   equ 0008h
SMT1CPRL_SMT1CPR4_POSN                   equ 0004h
SMT1CPRL_SMT1CPR4_POSITION               equ 0004h
SMT1CPRL_SMT1CPR4_SIZE                   equ 0001h
SMT1CPRL_SMT1CPR4_LENGTH                 equ 0001h
SMT1CPRL_SMT1CPR4_MASK                   equ 0010h
SMT1CPRL_SMT1CPR5_POSN                   equ 0005h
SMT1CPRL_SMT1CPR5_POSITION               equ 0005h
SMT1CPRL_SMT1CPR5_SIZE                   equ 0001h
SMT1CPRL_SMT1CPR5_LENGTH                 equ 0001h
SMT1CPRL_SMT1CPR5_MASK                   equ 0020h
SMT1CPRL_SMT1CPR6_POSN                   equ 0006h
SMT1CPRL_SMT1CPR6_POSITION               equ 0006h
SMT1CPRL_SMT1CPR6_SIZE                   equ 0001h
SMT1CPRL_SMT1CPR6_LENGTH                 equ 0001h
SMT1CPRL_SMT1CPR6_MASK                   equ 0040h
SMT1CPRL_SMT1CPR7_POSN                   equ 0007h
SMT1CPRL_SMT1CPR7_POSITION               equ 0007h
SMT1CPRL_SMT1CPR7_SIZE                   equ 0001h
SMT1CPRL_SMT1CPR7_LENGTH                 equ 0001h
SMT1CPRL_SMT1CPR7_MASK                   equ 0080h

// Register: SMT1CPRH
#define SMT1CPRH SMT1CPRH
SMT1CPRH                                 equ 0D90h
// bitfield definitions
SMT1CPRH_SMT1CPR_POSN                    equ 0000h
SMT1CPRH_SMT1CPR_POSITION                equ 0000h
SMT1CPRH_SMT1CPR_SIZE                    equ 0008h
SMT1CPRH_SMT1CPR_LENGTH                  equ 0008h
SMT1CPRH_SMT1CPR_MASK                    equ 00FFh
SMT1CPRH_SMT1CPR8_POSN                   equ 0000h
SMT1CPRH_SMT1CPR8_POSITION               equ 0000h
SMT1CPRH_SMT1CPR8_SIZE                   equ 0001h
SMT1CPRH_SMT1CPR8_LENGTH                 equ 0001h
SMT1CPRH_SMT1CPR8_MASK                   equ 0001h
SMT1CPRH_SMT1CPR9_POSN                   equ 0001h
SMT1CPRH_SMT1CPR9_POSITION               equ 0001h
SMT1CPRH_SMT1CPR9_SIZE                   equ 0001h
SMT1CPRH_SMT1CPR9_LENGTH                 equ 0001h
SMT1CPRH_SMT1CPR9_MASK                   equ 0002h
SMT1CPRH_SMT1CPR10_POSN                  equ 0002h
SMT1CPRH_SMT1CPR10_POSITION              equ 0002h
SMT1CPRH_SMT1CPR10_SIZE                  equ 0001h
SMT1CPRH_SMT1CPR10_LENGTH                equ 0001h
SMT1CPRH_SMT1CPR10_MASK                  equ 0004h
SMT1CPRH_SMT1CPR11_POSN                  equ 0003h
SMT1CPRH_SMT1CPR11_POSITION              equ 0003h
SMT1CPRH_SMT1CPR11_SIZE                  equ 0001h
SMT1CPRH_SMT1CPR11_LENGTH                equ 0001h
SMT1CPRH_SMT1CPR11_MASK                  equ 0008h
SMT1CPRH_SMT1CPR12_POSN                  equ 0004h
SMT1CPRH_SMT1CPR12_POSITION              equ 0004h
SMT1CPRH_SMT1CPR12_SIZE                  equ 0001h
SMT1CPRH_SMT1CPR12_LENGTH                equ 0001h
SMT1CPRH_SMT1CPR12_MASK                  equ 0010h
SMT1CPRH_SMT1CPR13_POSN                  equ 0005h
SMT1CPRH_SMT1CPR13_POSITION              equ 0005h
SMT1CPRH_SMT1CPR13_SIZE                  equ 0001h
SMT1CPRH_SMT1CPR13_LENGTH                equ 0001h
SMT1CPRH_SMT1CPR13_MASK                  equ 0020h
SMT1CPRH_SMT1CPR14_POSN                  equ 0006h
SMT1CPRH_SMT1CPR14_POSITION              equ 0006h
SMT1CPRH_SMT1CPR14_SIZE                  equ 0001h
SMT1CPRH_SMT1CPR14_LENGTH                equ 0001h
SMT1CPRH_SMT1CPR14_MASK                  equ 0040h
SMT1CPRH_SMT1CPR15_POSN                  equ 0007h
SMT1CPRH_SMT1CPR15_POSITION              equ 0007h
SMT1CPRH_SMT1CPR15_SIZE                  equ 0001h
SMT1CPRH_SMT1CPR15_LENGTH                equ 0001h
SMT1CPRH_SMT1CPR15_MASK                  equ 0080h

// Register: SMT1CPRU
#define SMT1CPRU SMT1CPRU
SMT1CPRU                                 equ 0D91h
// bitfield definitions
SMT1CPRU_SMT1CPR_POSN                    equ 0000h
SMT1CPRU_SMT1CPR_POSITION                equ 0000h
SMT1CPRU_SMT1CPR_SIZE                    equ 0008h
SMT1CPRU_SMT1CPR_LENGTH                  equ 0008h
SMT1CPRU_SMT1CPR_MASK                    equ 00FFh
SMT1CPRU_SMT1CPR16_POSN                  equ 0000h
SMT1CPRU_SMT1CPR16_POSITION              equ 0000h
SMT1CPRU_SMT1CPR16_SIZE                  equ 0001h
SMT1CPRU_SMT1CPR16_LENGTH                equ 0001h
SMT1CPRU_SMT1CPR16_MASK                  equ 0001h
SMT1CPRU_SMT1CPR17_POSN                  equ 0001h
SMT1CPRU_SMT1CPR17_POSITION              equ 0001h
SMT1CPRU_SMT1CPR17_SIZE                  equ 0001h
SMT1CPRU_SMT1CPR17_LENGTH                equ 0001h
SMT1CPRU_SMT1CPR17_MASK                  equ 0002h
SMT1CPRU_SMT1CPR18_POSN                  equ 0002h
SMT1CPRU_SMT1CPR18_POSITION              equ 0002h
SMT1CPRU_SMT1CPR18_SIZE                  equ 0001h
SMT1CPRU_SMT1CPR18_LENGTH                equ 0001h
SMT1CPRU_SMT1CPR18_MASK                  equ 0004h
SMT1CPRU_SMT1CPR19_POSN                  equ 0003h
SMT1CPRU_SMT1CPR19_POSITION              equ 0003h
SMT1CPRU_SMT1CPR19_SIZE                  equ 0001h
SMT1CPRU_SMT1CPR19_LENGTH                equ 0001h
SMT1CPRU_SMT1CPR19_MASK                  equ 0008h
SMT1CPRU_SMT1CPR20_POSN                  equ 0004h
SMT1CPRU_SMT1CPR20_POSITION              equ 0004h
SMT1CPRU_SMT1CPR20_SIZE                  equ 0001h
SMT1CPRU_SMT1CPR20_LENGTH                equ 0001h
SMT1CPRU_SMT1CPR20_MASK                  equ 0010h
SMT1CPRU_SMT1CPR21_POSN                  equ 0005h
SMT1CPRU_SMT1CPR21_POSITION              equ 0005h
SMT1CPRU_SMT1CPR21_SIZE                  equ 0001h
SMT1CPRU_SMT1CPR21_LENGTH                equ 0001h
SMT1CPRU_SMT1CPR21_MASK                  equ 0020h
SMT1CPRU_SMT1CPR22_POSN                  equ 0006h
SMT1CPRU_SMT1CPR22_POSITION              equ 0006h
SMT1CPRU_SMT1CPR22_SIZE                  equ 0001h
SMT1CPRU_SMT1CPR22_LENGTH                equ 0001h
SMT1CPRU_SMT1CPR22_MASK                  equ 0040h
SMT1CPRU_SMT1CPR23_POSN                  equ 0007h
SMT1CPRU_SMT1CPR23_POSITION              equ 0007h
SMT1CPRU_SMT1CPR23_SIZE                  equ 0001h
SMT1CPRU_SMT1CPR23_LENGTH                equ 0001h
SMT1CPRU_SMT1CPR23_MASK                  equ 0080h

// Register: SMT1CPWL
#define SMT1CPWL SMT1CPWL
SMT1CPWL                                 equ 0D92h
// bitfield definitions
SMT1CPWL_SMT1CPW_POSN                    equ 0000h
SMT1CPWL_SMT1CPW_POSITION                equ 0000h
SMT1CPWL_SMT1CPW_SIZE                    equ 0008h
SMT1CPWL_SMT1CPW_LENGTH                  equ 0008h
SMT1CPWL_SMT1CPW_MASK                    equ 00FFh
SMT1CPWL_SMT1CPW0_POSN                   equ 0000h
SMT1CPWL_SMT1CPW0_POSITION               equ 0000h
SMT1CPWL_SMT1CPW0_SIZE                   equ 0001h
SMT1CPWL_SMT1CPW0_LENGTH                 equ 0001h
SMT1CPWL_SMT1CPW0_MASK                   equ 0001h
SMT1CPWL_SMT1CPW1_POSN                   equ 0001h
SMT1CPWL_SMT1CPW1_POSITION               equ 0001h
SMT1CPWL_SMT1CPW1_SIZE                   equ 0001h
SMT1CPWL_SMT1CPW1_LENGTH                 equ 0001h
SMT1CPWL_SMT1CPW1_MASK                   equ 0002h
SMT1CPWL_SMT1CPW2_POSN                   equ 0002h
SMT1CPWL_SMT1CPW2_POSITION               equ 0002h
SMT1CPWL_SMT1CPW2_SIZE                   equ 0001h
SMT1CPWL_SMT1CPW2_LENGTH                 equ 0001h
SMT1CPWL_SMT1CPW2_MASK                   equ 0004h
SMT1CPWL_SMT1CPW3_POSN                   equ 0003h
SMT1CPWL_SMT1CPW3_POSITION               equ 0003h
SMT1CPWL_SMT1CPW3_SIZE                   equ 0001h
SMT1CPWL_SMT1CPW3_LENGTH                 equ 0001h
SMT1CPWL_SMT1CPW3_MASK                   equ 0008h
SMT1CPWL_SMT1CPW4_POSN                   equ 0004h
SMT1CPWL_SMT1CPW4_POSITION               equ 0004h
SMT1CPWL_SMT1CPW4_SIZE                   equ 0001h
SMT1CPWL_SMT1CPW4_LENGTH                 equ 0001h
SMT1CPWL_SMT1CPW4_MASK                   equ 0010h
SMT1CPWL_SMT1CPW5_POSN                   equ 0005h
SMT1CPWL_SMT1CPW5_POSITION               equ 0005h
SMT1CPWL_SMT1CPW5_SIZE                   equ 0001h
SMT1CPWL_SMT1CPW5_LENGTH                 equ 0001h
SMT1CPWL_SMT1CPW5_MASK                   equ 0020h
SMT1CPWL_SMT1CPW6_POSN                   equ 0006h
SMT1CPWL_SMT1CPW6_POSITION               equ 0006h
SMT1CPWL_SMT1CPW6_SIZE                   equ 0001h
SMT1CPWL_SMT1CPW6_LENGTH                 equ 0001h
SMT1CPWL_SMT1CPW6_MASK                   equ 0040h
SMT1CPWL_SMT1CPW7_POSN                   equ 0007h
SMT1CPWL_SMT1CPW7_POSITION               equ 0007h
SMT1CPWL_SMT1CPW7_SIZE                   equ 0001h
SMT1CPWL_SMT1CPW7_LENGTH                 equ 0001h
SMT1CPWL_SMT1CPW7_MASK                   equ 0080h

// Register: SMT1CPWH
#define SMT1CPWH SMT1CPWH
SMT1CPWH                                 equ 0D93h
// bitfield definitions
SMT1CPWH_SMT1CPW_POSN                    equ 0000h
SMT1CPWH_SMT1CPW_POSITION                equ 0000h
SMT1CPWH_SMT1CPW_SIZE                    equ 0008h
SMT1CPWH_SMT1CPW_LENGTH                  equ 0008h
SMT1CPWH_SMT1CPW_MASK                    equ 00FFh
SMT1CPWH_SMT1CPW8_POSN                   equ 0000h
SMT1CPWH_SMT1CPW8_POSITION               equ 0000h
SMT1CPWH_SMT1CPW8_SIZE                   equ 0001h
SMT1CPWH_SMT1CPW8_LENGTH                 equ 0001h
SMT1CPWH_SMT1CPW8_MASK                   equ 0001h
SMT1CPWH_SMT1CPW9_POSN                   equ 0001h
SMT1CPWH_SMT1CPW9_POSITION               equ 0001h
SMT1CPWH_SMT1CPW9_SIZE                   equ 0001h
SMT1CPWH_SMT1CPW9_LENGTH                 equ 0001h
SMT1CPWH_SMT1CPW9_MASK                   equ 0002h
SMT1CPWH_SMT1CPW10_POSN                  equ 0002h
SMT1CPWH_SMT1CPW10_POSITION              equ 0002h
SMT1CPWH_SMT1CPW10_SIZE                  equ 0001h
SMT1CPWH_SMT1CPW10_LENGTH                equ 0001h
SMT1CPWH_SMT1CPW10_MASK                  equ 0004h
SMT1CPWH_SMT1CPW11_POSN                  equ 0003h
SMT1CPWH_SMT1CPW11_POSITION              equ 0003h
SMT1CPWH_SMT1CPW11_SIZE                  equ 0001h
SMT1CPWH_SMT1CPW11_LENGTH                equ 0001h
SMT1CPWH_SMT1CPW11_MASK                  equ 0008h
SMT1CPWH_SMT1CPW12_POSN                  equ 0004h
SMT1CPWH_SMT1CPW12_POSITION              equ 0004h
SMT1CPWH_SMT1CPW12_SIZE                  equ 0001h
SMT1CPWH_SMT1CPW12_LENGTH                equ 0001h
SMT1CPWH_SMT1CPW12_MASK                  equ 0010h
SMT1CPWH_SMT1CPW13_POSN                  equ 0005h
SMT1CPWH_SMT1CPW13_POSITION              equ 0005h
SMT1CPWH_SMT1CPW13_SIZE                  equ 0001h
SMT1CPWH_SMT1CPW13_LENGTH                equ 0001h
SMT1CPWH_SMT1CPW13_MASK                  equ 0020h
SMT1CPWH_SMT1CPW14_POSN                  equ 0006h
SMT1CPWH_SMT1CPW14_POSITION              equ 0006h
SMT1CPWH_SMT1CPW14_SIZE                  equ 0001h
SMT1CPWH_SMT1CPW14_LENGTH                equ 0001h
SMT1CPWH_SMT1CPW14_MASK                  equ 0040h
SMT1CPWH_SMT1CPW15_POSN                  equ 0007h
SMT1CPWH_SMT1CPW15_POSITION              equ 0007h
SMT1CPWH_SMT1CPW15_SIZE                  equ 0001h
SMT1CPWH_SMT1CPW15_LENGTH                equ 0001h
SMT1CPWH_SMT1CPW15_MASK                  equ 0080h

// Register: SMT1CPWU
#define SMT1CPWU SMT1CPWU
SMT1CPWU                                 equ 0D94h
// bitfield definitions
SMT1CPWU_SMT1CPW_POSN                    equ 0000h
SMT1CPWU_SMT1CPW_POSITION                equ 0000h
SMT1CPWU_SMT1CPW_SIZE                    equ 0008h
SMT1CPWU_SMT1CPW_LENGTH                  equ 0008h
SMT1CPWU_SMT1CPW_MASK                    equ 00FFh
SMT1CPWU_SMT1CPW16_POSN                  equ 0000h
SMT1CPWU_SMT1CPW16_POSITION              equ 0000h
SMT1CPWU_SMT1CPW16_SIZE                  equ 0001h
SMT1CPWU_SMT1CPW16_LENGTH                equ 0001h
SMT1CPWU_SMT1CPW16_MASK                  equ 0001h
SMT1CPWU_SMT1CPW17_POSN                  equ 0001h
SMT1CPWU_SMT1CPW17_POSITION              equ 0001h
SMT1CPWU_SMT1CPW17_SIZE                  equ 0001h
SMT1CPWU_SMT1CPW17_LENGTH                equ 0001h
SMT1CPWU_SMT1CPW17_MASK                  equ 0002h
SMT1CPWU_SMT1CPW18_POSN                  equ 0002h
SMT1CPWU_SMT1CPW18_POSITION              equ 0002h
SMT1CPWU_SMT1CPW18_SIZE                  equ 0001h
SMT1CPWU_SMT1CPW18_LENGTH                equ 0001h
SMT1CPWU_SMT1CPW18_MASK                  equ 0004h
SMT1CPWU_SMT1CPW19_POSN                  equ 0003h
SMT1CPWU_SMT1CPW19_POSITION              equ 0003h
SMT1CPWU_SMT1CPW19_SIZE                  equ 0001h
SMT1CPWU_SMT1CPW19_LENGTH                equ 0001h
SMT1CPWU_SMT1CPW19_MASK                  equ 0008h
SMT1CPWU_SMT1CPW20_POSN                  equ 0004h
SMT1CPWU_SMT1CPW20_POSITION              equ 0004h
SMT1CPWU_SMT1CPW20_SIZE                  equ 0001h
SMT1CPWU_SMT1CPW20_LENGTH                equ 0001h
SMT1CPWU_SMT1CPW20_MASK                  equ 0010h
SMT1CPWU_SMT1CPW21_POSN                  equ 0005h
SMT1CPWU_SMT1CPW21_POSITION              equ 0005h
SMT1CPWU_SMT1CPW21_SIZE                  equ 0001h
SMT1CPWU_SMT1CPW21_LENGTH                equ 0001h
SMT1CPWU_SMT1CPW21_MASK                  equ 0020h
SMT1CPWU_SMT1CPW22_POSN                  equ 0006h
SMT1CPWU_SMT1CPW22_POSITION              equ 0006h
SMT1CPWU_SMT1CPW22_SIZE                  equ 0001h
SMT1CPWU_SMT1CPW22_LENGTH                equ 0001h
SMT1CPWU_SMT1CPW22_MASK                  equ 0040h
SMT1CPWU_SMT1CPW23_POSN                  equ 0007h
SMT1CPWU_SMT1CPW23_POSITION              equ 0007h
SMT1CPWU_SMT1CPW23_SIZE                  equ 0001h
SMT1CPWU_SMT1CPW23_LENGTH                equ 0001h
SMT1CPWU_SMT1CPW23_MASK                  equ 0080h

// Register: SMT1PRL
#define SMT1PRL SMT1PRL
SMT1PRL                                  equ 0D95h
// bitfield definitions
SMT1PRL_SMT1PR_POSN                      equ 0000h
SMT1PRL_SMT1PR_POSITION                  equ 0000h
SMT1PRL_SMT1PR_SIZE                      equ 0008h
SMT1PRL_SMT1PR_LENGTH                    equ 0008h
SMT1PRL_SMT1PR_MASK                      equ 00FFh
SMT1PRL_SMT1PR0_POSN                     equ 0000h
SMT1PRL_SMT1PR0_POSITION                 equ 0000h
SMT1PRL_SMT1PR0_SIZE                     equ 0001h
SMT1PRL_SMT1PR0_LENGTH                   equ 0001h
SMT1PRL_SMT1PR0_MASK                     equ 0001h
SMT1PRL_SMT1PR1_POSN                     equ 0001h
SMT1PRL_SMT1PR1_POSITION                 equ 0001h
SMT1PRL_SMT1PR1_SIZE                     equ 0001h
SMT1PRL_SMT1PR1_LENGTH                   equ 0001h
SMT1PRL_SMT1PR1_MASK                     equ 0002h
SMT1PRL_SMT1PR2_POSN                     equ 0002h
SMT1PRL_SMT1PR2_POSITION                 equ 0002h
SMT1PRL_SMT1PR2_SIZE                     equ 0001h
SMT1PRL_SMT1PR2_LENGTH                   equ 0001h
SMT1PRL_SMT1PR2_MASK                     equ 0004h
SMT1PRL_SMT1PR3_POSN                     equ 0003h
SMT1PRL_SMT1PR3_POSITION                 equ 0003h
SMT1PRL_SMT1PR3_SIZE                     equ 0001h
SMT1PRL_SMT1PR3_LENGTH                   equ 0001h
SMT1PRL_SMT1PR3_MASK                     equ 0008h
SMT1PRL_SMT1PR4_POSN                     equ 0004h
SMT1PRL_SMT1PR4_POSITION                 equ 0004h
SMT1PRL_SMT1PR4_SIZE                     equ 0001h
SMT1PRL_SMT1PR4_LENGTH                   equ 0001h
SMT1PRL_SMT1PR4_MASK                     equ 0010h
SMT1PRL_SMT1PR5_POSN                     equ 0005h
SMT1PRL_SMT1PR5_POSITION                 equ 0005h
SMT1PRL_SMT1PR5_SIZE                     equ 0001h
SMT1PRL_SMT1PR5_LENGTH                   equ 0001h
SMT1PRL_SMT1PR5_MASK                     equ 0020h
SMT1PRL_SMT1PR6_POSN                     equ 0006h
SMT1PRL_SMT1PR6_POSITION                 equ 0006h
SMT1PRL_SMT1PR6_SIZE                     equ 0001h
SMT1PRL_SMT1PR6_LENGTH                   equ 0001h
SMT1PRL_SMT1PR6_MASK                     equ 0040h
SMT1PRL_SMT1PR7_POSN                     equ 0007h
SMT1PRL_SMT1PR7_POSITION                 equ 0007h
SMT1PRL_SMT1PR7_SIZE                     equ 0001h
SMT1PRL_SMT1PR7_LENGTH                   equ 0001h
SMT1PRL_SMT1PR7_MASK                     equ 0080h

// Register: SMT1PRH
#define SMT1PRH SMT1PRH
SMT1PRH                                  equ 0D96h
// bitfield definitions
SMT1PRH_SMT1PR_POSN                      equ 0000h
SMT1PRH_SMT1PR_POSITION                  equ 0000h
SMT1PRH_SMT1PR_SIZE                      equ 0008h
SMT1PRH_SMT1PR_LENGTH                    equ 0008h
SMT1PRH_SMT1PR_MASK                      equ 00FFh
SMT1PRH_SMT1PR8_POSN                     equ 0000h
SMT1PRH_SMT1PR8_POSITION                 equ 0000h
SMT1PRH_SMT1PR8_SIZE                     equ 0001h
SMT1PRH_SMT1PR8_LENGTH                   equ 0001h
SMT1PRH_SMT1PR8_MASK                     equ 0001h
SMT1PRH_SMT1PR9_POSN                     equ 0001h
SMT1PRH_SMT1PR9_POSITION                 equ 0001h
SMT1PRH_SMT1PR9_SIZE                     equ 0001h
SMT1PRH_SMT1PR9_LENGTH                   equ 0001h
SMT1PRH_SMT1PR9_MASK                     equ 0002h
SMT1PRH_SMT1PR10_POSN                    equ 0002h
SMT1PRH_SMT1PR10_POSITION                equ 0002h
SMT1PRH_SMT1PR10_SIZE                    equ 0001h
SMT1PRH_SMT1PR10_LENGTH                  equ 0001h
SMT1PRH_SMT1PR10_MASK                    equ 0004h
SMT1PRH_SMT1PR11_POSN                    equ 0003h
SMT1PRH_SMT1PR11_POSITION                equ 0003h
SMT1PRH_SMT1PR11_SIZE                    equ 0001h
SMT1PRH_SMT1PR11_LENGTH                  equ 0001h
SMT1PRH_SMT1PR11_MASK                    equ 0008h
SMT1PRH_SMT1PR12_POSN                    equ 0004h
SMT1PRH_SMT1PR12_POSITION                equ 0004h
SMT1PRH_SMT1PR12_SIZE                    equ 0001h
SMT1PRH_SMT1PR12_LENGTH                  equ 0001h
SMT1PRH_SMT1PR12_MASK                    equ 0010h
SMT1PRH_SMT1PR13_POSN                    equ 0005h
SMT1PRH_SMT1PR13_POSITION                equ 0005h
SMT1PRH_SMT1PR13_SIZE                    equ 0001h
SMT1PRH_SMT1PR13_LENGTH                  equ 0001h
SMT1PRH_SMT1PR13_MASK                    equ 0020h
SMT1PRH_SMT1PR14_POSN                    equ 0006h
SMT1PRH_SMT1PR14_POSITION                equ 0006h
SMT1PRH_SMT1PR14_SIZE                    equ 0001h
SMT1PRH_SMT1PR14_LENGTH                  equ 0001h
SMT1PRH_SMT1PR14_MASK                    equ 0040h
SMT1PRH_SMT1PR15_POSN                    equ 0007h
SMT1PRH_SMT1PR15_POSITION                equ 0007h
SMT1PRH_SMT1PR15_SIZE                    equ 0001h
SMT1PRH_SMT1PR15_LENGTH                  equ 0001h
SMT1PRH_SMT1PR15_MASK                    equ 0080h

// Register: SMT1PRU
#define SMT1PRU SMT1PRU
SMT1PRU                                  equ 0D97h
// bitfield definitions
SMT1PRU_SMT1PR_POSN                      equ 0000h
SMT1PRU_SMT1PR_POSITION                  equ 0000h
SMT1PRU_SMT1PR_SIZE                      equ 0008h
SMT1PRU_SMT1PR_LENGTH                    equ 0008h
SMT1PRU_SMT1PR_MASK                      equ 00FFh
SMT1PRU_SMT1PR16_POSN                    equ 0000h
SMT1PRU_SMT1PR16_POSITION                equ 0000h
SMT1PRU_SMT1PR16_SIZE                    equ 0001h
SMT1PRU_SMT1PR16_LENGTH                  equ 0001h
SMT1PRU_SMT1PR16_MASK                    equ 0001h
SMT1PRU_SMT1PR17_POSN                    equ 0001h
SMT1PRU_SMT1PR17_POSITION                equ 0001h
SMT1PRU_SMT1PR17_SIZE                    equ 0001h
SMT1PRU_SMT1PR17_LENGTH                  equ 0001h
SMT1PRU_SMT1PR17_MASK                    equ 0002h
SMT1PRU_SMT1PR18_POSN                    equ 0002h
SMT1PRU_SMT1PR18_POSITION                equ 0002h
SMT1PRU_SMT1PR18_SIZE                    equ 0001h
SMT1PRU_SMT1PR18_LENGTH                  equ 0001h
SMT1PRU_SMT1PR18_MASK                    equ 0004h
SMT1PRU_SMT1PR19_POSN                    equ 0003h
SMT1PRU_SMT1PR19_POSITION                equ 0003h
SMT1PRU_SMT1PR19_SIZE                    equ 0001h
SMT1PRU_SMT1PR19_LENGTH                  equ 0001h
SMT1PRU_SMT1PR19_MASK                    equ 0008h
SMT1PRU_SMT1PR20_POSN                    equ 0004h
SMT1PRU_SMT1PR20_POSITION                equ 0004h
SMT1PRU_SMT1PR20_SIZE                    equ 0001h
SMT1PRU_SMT1PR20_LENGTH                  equ 0001h
SMT1PRU_SMT1PR20_MASK                    equ 0010h
SMT1PRU_SMT1PR21_POSN                    equ 0005h
SMT1PRU_SMT1PR21_POSITION                equ 0005h
SMT1PRU_SMT1PR21_SIZE                    equ 0001h
SMT1PRU_SMT1PR21_LENGTH                  equ 0001h
SMT1PRU_SMT1PR21_MASK                    equ 0020h
SMT1PRU_SMT1PR22_POSN                    equ 0006h
SMT1PRU_SMT1PR22_POSITION                equ 0006h
SMT1PRU_SMT1PR22_SIZE                    equ 0001h
SMT1PRU_SMT1PR22_LENGTH                  equ 0001h
SMT1PRU_SMT1PR22_MASK                    equ 0040h
SMT1PRU_SMT1PR23_POSN                    equ 0007h
SMT1PRU_SMT1PR23_POSITION                equ 0007h
SMT1PRU_SMT1PR23_SIZE                    equ 0001h
SMT1PRU_SMT1PR23_LENGTH                  equ 0001h
SMT1PRU_SMT1PR23_MASK                    equ 0080h

// Register: SMT1CON0
#define SMT1CON0 SMT1CON0
SMT1CON0                                 equ 0D98h
// bitfield definitions
SMT1CON0_SMT1PS_POSN                     equ 0000h
SMT1CON0_SMT1PS_POSITION                 equ 0000h
SMT1CON0_SMT1PS_SIZE                     equ 0002h
SMT1CON0_SMT1PS_LENGTH                   equ 0002h
SMT1CON0_SMT1PS_MASK                     equ 0003h
SMT1CON0_CPOL_POSN                       equ 0002h
SMT1CON0_CPOL_POSITION                   equ 0002h
SMT1CON0_CPOL_SIZE                       equ 0001h
SMT1CON0_CPOL_LENGTH                     equ 0001h
SMT1CON0_CPOL_MASK                       equ 0004h
SMT1CON0_SPOL_POSN                       equ 0003h
SMT1CON0_SPOL_POSITION                   equ 0003h
SMT1CON0_SPOL_SIZE                       equ 0001h
SMT1CON0_SPOL_LENGTH                     equ 0001h
SMT1CON0_SPOL_MASK                       equ 0008h
SMT1CON0_WPOL_POSN                       equ 0004h
SMT1CON0_WPOL_POSITION                   equ 0004h
SMT1CON0_WPOL_SIZE                       equ 0001h
SMT1CON0_WPOL_LENGTH                     equ 0001h
SMT1CON0_WPOL_MASK                       equ 0010h
SMT1CON0_STP_POSN                        equ 0005h
SMT1CON0_STP_POSITION                    equ 0005h
SMT1CON0_STP_SIZE                        equ 0001h
SMT1CON0_STP_LENGTH                      equ 0001h
SMT1CON0_STP_MASK                        equ 0020h
SMT1CON0_EN_POSN                         equ 0007h
SMT1CON0_EN_POSITION                     equ 0007h
SMT1CON0_EN_SIZE                         equ 0001h
SMT1CON0_EN_LENGTH                       equ 0001h
SMT1CON0_EN_MASK                         equ 0080h
SMT1CON0_SMT1PS0_POSN                    equ 0000h
SMT1CON0_SMT1PS0_POSITION                equ 0000h
SMT1CON0_SMT1PS0_SIZE                    equ 0001h
SMT1CON0_SMT1PS0_LENGTH                  equ 0001h
SMT1CON0_SMT1PS0_MASK                    equ 0001h
SMT1CON0_SMT1PS1_POSN                    equ 0001h
SMT1CON0_SMT1PS1_POSITION                equ 0001h
SMT1CON0_SMT1PS1_SIZE                    equ 0001h
SMT1CON0_SMT1PS1_LENGTH                  equ 0001h
SMT1CON0_SMT1PS1_MASK                    equ 0002h

// Register: SMT1CON1
#define SMT1CON1 SMT1CON1
SMT1CON1                                 equ 0D99h
// bitfield definitions
SMT1CON1_MODE_POSN                       equ 0000h
SMT1CON1_MODE_POSITION                   equ 0000h
SMT1CON1_MODE_SIZE                       equ 0004h
SMT1CON1_MODE_LENGTH                     equ 0004h
SMT1CON1_MODE_MASK                       equ 000Fh
SMT1CON1_REPEAT_POSN                     equ 0006h
SMT1CON1_REPEAT_POSITION                 equ 0006h
SMT1CON1_REPEAT_SIZE                     equ 0001h
SMT1CON1_REPEAT_LENGTH                   equ 0001h
SMT1CON1_REPEAT_MASK                     equ 0040h
SMT1CON1_SMT1GO_POSN                     equ 0007h
SMT1CON1_SMT1GO_POSITION                 equ 0007h
SMT1CON1_SMT1GO_SIZE                     equ 0001h
SMT1CON1_SMT1GO_LENGTH                   equ 0001h
SMT1CON1_SMT1GO_MASK                     equ 0080h
SMT1CON1_MODE0_POSN                      equ 0000h
SMT1CON1_MODE0_POSITION                  equ 0000h
SMT1CON1_MODE0_SIZE                      equ 0001h
SMT1CON1_MODE0_LENGTH                    equ 0001h
SMT1CON1_MODE0_MASK                      equ 0001h
SMT1CON1_MODE1_POSN                      equ 0001h
SMT1CON1_MODE1_POSITION                  equ 0001h
SMT1CON1_MODE1_SIZE                      equ 0001h
SMT1CON1_MODE1_LENGTH                    equ 0001h
SMT1CON1_MODE1_MASK                      equ 0002h
SMT1CON1_MODE2_POSN                      equ 0002h
SMT1CON1_MODE2_POSITION                  equ 0002h
SMT1CON1_MODE2_SIZE                      equ 0001h
SMT1CON1_MODE2_LENGTH                    equ 0001h
SMT1CON1_MODE2_MASK                      equ 0004h
SMT1CON1_MODE3_POSN                      equ 0003h
SMT1CON1_MODE3_POSITION                  equ 0003h
SMT1CON1_MODE3_SIZE                      equ 0001h
SMT1CON1_MODE3_LENGTH                    equ 0001h
SMT1CON1_MODE3_MASK                      equ 0008h
SMT1CON1_SMT1MODE_POSN                   equ 0000h
SMT1CON1_SMT1MODE_POSITION               equ 0000h
SMT1CON1_SMT1MODE_SIZE                   equ 0004h
SMT1CON1_SMT1MODE_LENGTH                 equ 0004h
SMT1CON1_SMT1MODE_MASK                   equ 000Fh
SMT1CON1_SMT1REPEAT_POSN                 equ 0006h
SMT1CON1_SMT1REPEAT_POSITION             equ 0006h
SMT1CON1_SMT1REPEAT_SIZE                 equ 0001h
SMT1CON1_SMT1REPEAT_LENGTH               equ 0001h
SMT1CON1_SMT1REPEAT_MASK                 equ 0040h
SMT1CON1_SMT1MODE0_POSN                  equ 0000h
SMT1CON1_SMT1MODE0_POSITION              equ 0000h
SMT1CON1_SMT1MODE0_SIZE                  equ 0001h
SMT1CON1_SMT1MODE0_LENGTH                equ 0001h
SMT1CON1_SMT1MODE0_MASK                  equ 0001h
SMT1CON1_SMT1MODE1_POSN                  equ 0001h
SMT1CON1_SMT1MODE1_POSITION              equ 0001h
SMT1CON1_SMT1MODE1_SIZE                  equ 0001h
SMT1CON1_SMT1MODE1_LENGTH                equ 0001h
SMT1CON1_SMT1MODE1_MASK                  equ 0002h
SMT1CON1_SMT1MODE2_POSN                  equ 0002h
SMT1CON1_SMT1MODE2_POSITION              equ 0002h
SMT1CON1_SMT1MODE2_SIZE                  equ 0001h
SMT1CON1_SMT1MODE2_LENGTH                equ 0001h
SMT1CON1_SMT1MODE2_MASK                  equ 0004h
SMT1CON1_SMT1MODE3_POSN                  equ 0003h
SMT1CON1_SMT1MODE3_POSITION              equ 0003h
SMT1CON1_SMT1MODE3_SIZE                  equ 0001h
SMT1CON1_SMT1MODE3_LENGTH                equ 0001h
SMT1CON1_SMT1MODE3_MASK                  equ 0008h

// Register: SMT1STAT
#define SMT1STAT SMT1STAT
SMT1STAT                                 equ 0D9Ah
// bitfield definitions
SMT1STAT_AS_POSN                         equ 0000h
SMT1STAT_AS_POSITION                     equ 0000h
SMT1STAT_AS_SIZE                         equ 0001h
SMT1STAT_AS_LENGTH                       equ 0001h
SMT1STAT_AS_MASK                         equ 0001h
SMT1STAT_WS_POSN                         equ 0001h
SMT1STAT_WS_POSITION                     equ 0001h
SMT1STAT_WS_SIZE                         equ 0001h
SMT1STAT_WS_LENGTH                       equ 0001h
SMT1STAT_WS_MASK                         equ 0002h
SMT1STAT_TS_POSN                         equ 0002h
SMT1STAT_TS_POSITION                     equ 0002h
SMT1STAT_TS_SIZE                         equ 0001h
SMT1STAT_TS_LENGTH                       equ 0001h
SMT1STAT_TS_MASK                         equ 0004h
SMT1STAT_RST_POSN                        equ 0005h
SMT1STAT_RST_POSITION                    equ 0005h
SMT1STAT_RST_SIZE                        equ 0001h
SMT1STAT_RST_LENGTH                      equ 0001h
SMT1STAT_RST_MASK                        equ 0020h
SMT1STAT_CPWUP_POSN                      equ 0006h
SMT1STAT_CPWUP_POSITION                  equ 0006h
SMT1STAT_CPWUP_SIZE                      equ 0001h
SMT1STAT_CPWUP_LENGTH                    equ 0001h
SMT1STAT_CPWUP_MASK                      equ 0040h
SMT1STAT_CPRUP_POSN                      equ 0007h
SMT1STAT_CPRUP_POSITION                  equ 0007h
SMT1STAT_CPRUP_SIZE                      equ 0001h
SMT1STAT_CPRUP_LENGTH                    equ 0001h
SMT1STAT_CPRUP_MASK                      equ 0080h
SMT1STAT_SMT1AS_POSN                     equ 0000h
SMT1STAT_SMT1AS_POSITION                 equ 0000h
SMT1STAT_SMT1AS_SIZE                     equ 0001h
SMT1STAT_SMT1AS_LENGTH                   equ 0001h
SMT1STAT_SMT1AS_MASK                     equ 0001h
SMT1STAT_SMT1WS_POSN                     equ 0001h
SMT1STAT_SMT1WS_POSITION                 equ 0001h
SMT1STAT_SMT1WS_SIZE                     equ 0001h
SMT1STAT_SMT1WS_LENGTH                   equ 0001h
SMT1STAT_SMT1WS_MASK                     equ 0002h
SMT1STAT_SMT1TS_POSN                     equ 0002h
SMT1STAT_SMT1TS_POSITION                 equ 0002h
SMT1STAT_SMT1TS_SIZE                     equ 0001h
SMT1STAT_SMT1TS_LENGTH                   equ 0001h
SMT1STAT_SMT1TS_MASK                     equ 0004h
SMT1STAT_SMT1RESET_POSN                  equ 0005h
SMT1STAT_SMT1RESET_POSITION              equ 0005h
SMT1STAT_SMT1RESET_SIZE                  equ 0001h
SMT1STAT_SMT1RESET_LENGTH                equ 0001h
SMT1STAT_SMT1RESET_MASK                  equ 0020h
SMT1STAT_SMT1CPWUP_POSN                  equ 0006h
SMT1STAT_SMT1CPWUP_POSITION              equ 0006h
SMT1STAT_SMT1CPWUP_SIZE                  equ 0001h
SMT1STAT_SMT1CPWUP_LENGTH                equ 0001h
SMT1STAT_SMT1CPWUP_MASK                  equ 0040h
SMT1STAT_SMT1CPRUP_POSN                  equ 0007h
SMT1STAT_SMT1CPRUP_POSITION              equ 0007h
SMT1STAT_SMT1CPRUP_SIZE                  equ 0001h
SMT1STAT_SMT1CPRUP_LENGTH                equ 0001h
SMT1STAT_SMT1CPRUP_MASK                  equ 0080h

// Register: SMT1CLK
#define SMT1CLK SMT1CLK
SMT1CLK                                  equ 0D9Bh
// bitfield definitions
SMT1CLK_CSEL_POSN                        equ 0000h
SMT1CLK_CSEL_POSITION                    equ 0000h
SMT1CLK_CSEL_SIZE                        equ 0008h
SMT1CLK_CSEL_LENGTH                      equ 0008h
SMT1CLK_CSEL_MASK                        equ 00FFh
SMT1CLK_CSEL0_POSN                       equ 0000h
SMT1CLK_CSEL0_POSITION                   equ 0000h
SMT1CLK_CSEL0_SIZE                       equ 0001h
SMT1CLK_CSEL0_LENGTH                     equ 0001h
SMT1CLK_CSEL0_MASK                       equ 0001h
SMT1CLK_CSEL1_POSN                       equ 0001h
SMT1CLK_CSEL1_POSITION                   equ 0001h
SMT1CLK_CSEL1_SIZE                       equ 0001h
SMT1CLK_CSEL1_LENGTH                     equ 0001h
SMT1CLK_CSEL1_MASK                       equ 0002h
SMT1CLK_CSEL2_POSN                       equ 0002h
SMT1CLK_CSEL2_POSITION                   equ 0002h
SMT1CLK_CSEL2_SIZE                       equ 0001h
SMT1CLK_CSEL2_LENGTH                     equ 0001h
SMT1CLK_CSEL2_MASK                       equ 0004h
SMT1CLK_SMT1CSEL_POSN                    equ 0000h
SMT1CLK_SMT1CSEL_POSITION                equ 0000h
SMT1CLK_SMT1CSEL_SIZE                    equ 0008h
SMT1CLK_SMT1CSEL_LENGTH                  equ 0008h
SMT1CLK_SMT1CSEL_MASK                    equ 00FFh
SMT1CLK_SMT1CSEL0_POSN                   equ 0000h
SMT1CLK_SMT1CSEL0_POSITION               equ 0000h
SMT1CLK_SMT1CSEL0_SIZE                   equ 0001h
SMT1CLK_SMT1CSEL0_LENGTH                 equ 0001h
SMT1CLK_SMT1CSEL0_MASK                   equ 0001h
SMT1CLK_SMT1CSEL1_POSN                   equ 0001h
SMT1CLK_SMT1CSEL1_POSITION               equ 0001h
SMT1CLK_SMT1CSEL1_SIZE                   equ 0001h
SMT1CLK_SMT1CSEL1_LENGTH                 equ 0001h
SMT1CLK_SMT1CSEL1_MASK                   equ 0002h
SMT1CLK_SMT1CSEL2_POSN                   equ 0002h
SMT1CLK_SMT1CSEL2_POSITION               equ 0002h
SMT1CLK_SMT1CSEL2_SIZE                   equ 0001h
SMT1CLK_SMT1CSEL2_LENGTH                 equ 0001h
SMT1CLK_SMT1CSEL2_MASK                   equ 0004h

// Register: SMT1SIG
#define SMT1SIG SMT1SIG
SMT1SIG                                  equ 0D9Ch
// bitfield definitions
SMT1SIG_SSEL_POSN                        equ 0000h
SMT1SIG_SSEL_POSITION                    equ 0000h
SMT1SIG_SSEL_SIZE                        equ 0008h
SMT1SIG_SSEL_LENGTH                      equ 0008h
SMT1SIG_SSEL_MASK                        equ 00FFh
SMT1SIG_SSEL0_POSN                       equ 0000h
SMT1SIG_SSEL0_POSITION                   equ 0000h
SMT1SIG_SSEL0_SIZE                       equ 0001h
SMT1SIG_SSEL0_LENGTH                     equ 0001h
SMT1SIG_SSEL0_MASK                       equ 0001h
SMT1SIG_SSEL1_POSN                       equ 0001h
SMT1SIG_SSEL1_POSITION                   equ 0001h
SMT1SIG_SSEL1_SIZE                       equ 0001h
SMT1SIG_SSEL1_LENGTH                     equ 0001h
SMT1SIG_SSEL1_MASK                       equ 0002h
SMT1SIG_SSEL2_POSN                       equ 0002h
SMT1SIG_SSEL2_POSITION                   equ 0002h
SMT1SIG_SSEL2_SIZE                       equ 0001h
SMT1SIG_SSEL2_LENGTH                     equ 0001h
SMT1SIG_SSEL2_MASK                       equ 0004h
SMT1SIG_SMT1SSEL_POSN                    equ 0000h
SMT1SIG_SMT1SSEL_POSITION                equ 0000h
SMT1SIG_SMT1SSEL_SIZE                    equ 0008h
SMT1SIG_SMT1SSEL_LENGTH                  equ 0008h
SMT1SIG_SMT1SSEL_MASK                    equ 00FFh
SMT1SIG_SMT1SSEL0_POSN                   equ 0000h
SMT1SIG_SMT1SSEL0_POSITION               equ 0000h
SMT1SIG_SMT1SSEL0_SIZE                   equ 0001h
SMT1SIG_SMT1SSEL0_LENGTH                 equ 0001h
SMT1SIG_SMT1SSEL0_MASK                   equ 0001h
SMT1SIG_SMT1SSEL1_POSN                   equ 0001h
SMT1SIG_SMT1SSEL1_POSITION               equ 0001h
SMT1SIG_SMT1SSEL1_SIZE                   equ 0001h
SMT1SIG_SMT1SSEL1_LENGTH                 equ 0001h
SMT1SIG_SMT1SSEL1_MASK                   equ 0002h
SMT1SIG_SMT1SSEL2_POSN                   equ 0002h
SMT1SIG_SMT1SSEL2_POSITION               equ 0002h
SMT1SIG_SMT1SSEL2_SIZE                   equ 0001h
SMT1SIG_SMT1SSEL2_LENGTH                 equ 0001h
SMT1SIG_SMT1SSEL2_MASK                   equ 0004h

// Register: SMT1WIN
#define SMT1WIN SMT1WIN
SMT1WIN                                  equ 0D9Dh
// bitfield definitions
SMT1WIN_WSEL_POSN                        equ 0000h
SMT1WIN_WSEL_POSITION                    equ 0000h
SMT1WIN_WSEL_SIZE                        equ 0008h
SMT1WIN_WSEL_LENGTH                      equ 0008h
SMT1WIN_WSEL_MASK                        equ 00FFh
SMT1WIN_WSEL0_POSN                       equ 0000h
SMT1WIN_WSEL0_POSITION                   equ 0000h
SMT1WIN_WSEL0_SIZE                       equ 0001h
SMT1WIN_WSEL0_LENGTH                     equ 0001h
SMT1WIN_WSEL0_MASK                       equ 0001h
SMT1WIN_WSEL1_POSN                       equ 0001h
SMT1WIN_WSEL1_POSITION                   equ 0001h
SMT1WIN_WSEL1_SIZE                       equ 0001h
SMT1WIN_WSEL1_LENGTH                     equ 0001h
SMT1WIN_WSEL1_MASK                       equ 0002h
SMT1WIN_WSEL2_POSN                       equ 0002h
SMT1WIN_WSEL2_POSITION                   equ 0002h
SMT1WIN_WSEL2_SIZE                       equ 0001h
SMT1WIN_WSEL2_LENGTH                     equ 0001h
SMT1WIN_WSEL2_MASK                       equ 0004h
SMT1WIN_WSEL3_POSN                       equ 0003h
SMT1WIN_WSEL3_POSITION                   equ 0003h
SMT1WIN_WSEL3_SIZE                       equ 0001h
SMT1WIN_WSEL3_LENGTH                     equ 0001h
SMT1WIN_WSEL3_MASK                       equ 0008h
SMT1WIN_SMT1WSEL_POSN                    equ 0000h
SMT1WIN_SMT1WSEL_POSITION                equ 0000h
SMT1WIN_SMT1WSEL_SIZE                    equ 0008h
SMT1WIN_SMT1WSEL_LENGTH                  equ 0008h
SMT1WIN_SMT1WSEL_MASK                    equ 00FFh
SMT1WIN_SMT1WSEL0_POSN                   equ 0000h
SMT1WIN_SMT1WSEL0_POSITION               equ 0000h
SMT1WIN_SMT1WSEL0_SIZE                   equ 0001h
SMT1WIN_SMT1WSEL0_LENGTH                 equ 0001h
SMT1WIN_SMT1WSEL0_MASK                   equ 0001h
SMT1WIN_SMT1WSEL1_POSN                   equ 0001h
SMT1WIN_SMT1WSEL1_POSITION               equ 0001h
SMT1WIN_SMT1WSEL1_SIZE                   equ 0001h
SMT1WIN_SMT1WSEL1_LENGTH                 equ 0001h
SMT1WIN_SMT1WSEL1_MASK                   equ 0002h
SMT1WIN_SMT1WSEL2_POSN                   equ 0002h
SMT1WIN_SMT1WSEL2_POSITION               equ 0002h
SMT1WIN_SMT1WSEL2_SIZE                   equ 0001h
SMT1WIN_SMT1WSEL2_LENGTH                 equ 0001h
SMT1WIN_SMT1WSEL2_MASK                   equ 0004h
SMT1WIN_SMT1WSEL3_POSN                   equ 0003h
SMT1WIN_SMT1WSEL3_POSITION               equ 0003h
SMT1WIN_SMT1WSEL3_SIZE                   equ 0001h
SMT1WIN_SMT1WSEL3_LENGTH                 equ 0001h
SMT1WIN_SMT1WSEL3_MASK                   equ 0008h

// Register: SMT2TMRL
#define SMT2TMRL SMT2TMRL
SMT2TMRL                                 equ 0D9Eh
// bitfield definitions
SMT2TMRL_SMT2TMR_POSN                    equ 0000h
SMT2TMRL_SMT2TMR_POSITION                equ 0000h
SMT2TMRL_SMT2TMR_SIZE                    equ 0008h
SMT2TMRL_SMT2TMR_LENGTH                  equ 0008h
SMT2TMRL_SMT2TMR_MASK                    equ 00FFh
SMT2TMRL_SMT2TMR0_POSN                   equ 0000h
SMT2TMRL_SMT2TMR0_POSITION               equ 0000h
SMT2TMRL_SMT2TMR0_SIZE                   equ 0001h
SMT2TMRL_SMT2TMR0_LENGTH                 equ 0001h
SMT2TMRL_SMT2TMR0_MASK                   equ 0001h
SMT2TMRL_SMT2TMR1_POSN                   equ 0001h
SMT2TMRL_SMT2TMR1_POSITION               equ 0001h
SMT2TMRL_SMT2TMR1_SIZE                   equ 0001h
SMT2TMRL_SMT2TMR1_LENGTH                 equ 0001h
SMT2TMRL_SMT2TMR1_MASK                   equ 0002h
SMT2TMRL_SMT2TMR2_POSN                   equ 0002h
SMT2TMRL_SMT2TMR2_POSITION               equ 0002h
SMT2TMRL_SMT2TMR2_SIZE                   equ 0001h
SMT2TMRL_SMT2TMR2_LENGTH                 equ 0001h
SMT2TMRL_SMT2TMR2_MASK                   equ 0004h
SMT2TMRL_SMT2TMR3_POSN                   equ 0003h
SMT2TMRL_SMT2TMR3_POSITION               equ 0003h
SMT2TMRL_SMT2TMR3_SIZE                   equ 0001h
SMT2TMRL_SMT2TMR3_LENGTH                 equ 0001h
SMT2TMRL_SMT2TMR3_MASK                   equ 0008h
SMT2TMRL_SMT2TMR4_POSN                   equ 0004h
SMT2TMRL_SMT2TMR4_POSITION               equ 0004h
SMT2TMRL_SMT2TMR4_SIZE                   equ 0001h
SMT2TMRL_SMT2TMR4_LENGTH                 equ 0001h
SMT2TMRL_SMT2TMR4_MASK                   equ 0010h
SMT2TMRL_SMT2TMR5_POSN                   equ 0005h
SMT2TMRL_SMT2TMR5_POSITION               equ 0005h
SMT2TMRL_SMT2TMR5_SIZE                   equ 0001h
SMT2TMRL_SMT2TMR5_LENGTH                 equ 0001h
SMT2TMRL_SMT2TMR5_MASK                   equ 0020h
SMT2TMRL_SMT2TMR6_POSN                   equ 0006h
SMT2TMRL_SMT2TMR6_POSITION               equ 0006h
SMT2TMRL_SMT2TMR6_SIZE                   equ 0001h
SMT2TMRL_SMT2TMR6_LENGTH                 equ 0001h
SMT2TMRL_SMT2TMR6_MASK                   equ 0040h
SMT2TMRL_SMT2TMR7_POSN                   equ 0007h
SMT2TMRL_SMT2TMR7_POSITION               equ 0007h
SMT2TMRL_SMT2TMR7_SIZE                   equ 0001h
SMT2TMRL_SMT2TMR7_LENGTH                 equ 0001h
SMT2TMRL_SMT2TMR7_MASK                   equ 0080h

// Register: SMT2TMRH
#define SMT2TMRH SMT2TMRH
SMT2TMRH                                 equ 0D9Fh
// bitfield definitions
SMT2TMRH_SMT2TMR_POSN                    equ 0000h
SMT2TMRH_SMT2TMR_POSITION                equ 0000h
SMT2TMRH_SMT2TMR_SIZE                    equ 0008h
SMT2TMRH_SMT2TMR_LENGTH                  equ 0008h
SMT2TMRH_SMT2TMR_MASK                    equ 00FFh
SMT2TMRH_SMT2TMR8_POSN                   equ 0000h
SMT2TMRH_SMT2TMR8_POSITION               equ 0000h
SMT2TMRH_SMT2TMR8_SIZE                   equ 0001h
SMT2TMRH_SMT2TMR8_LENGTH                 equ 0001h
SMT2TMRH_SMT2TMR8_MASK                   equ 0001h
SMT2TMRH_SMT2TMR9_POSN                   equ 0001h
SMT2TMRH_SMT2TMR9_POSITION               equ 0001h
SMT2TMRH_SMT2TMR9_SIZE                   equ 0001h
SMT2TMRH_SMT2TMR9_LENGTH                 equ 0001h
SMT2TMRH_SMT2TMR9_MASK                   equ 0002h
SMT2TMRH_SMT2TMR10_POSN                  equ 0002h
SMT2TMRH_SMT2TMR10_POSITION              equ 0002h
SMT2TMRH_SMT2TMR10_SIZE                  equ 0001h
SMT2TMRH_SMT2TMR10_LENGTH                equ 0001h
SMT2TMRH_SMT2TMR10_MASK                  equ 0004h
SMT2TMRH_SMT2TMR11_POSN                  equ 0003h
SMT2TMRH_SMT2TMR11_POSITION              equ 0003h
SMT2TMRH_SMT2TMR11_SIZE                  equ 0001h
SMT2TMRH_SMT2TMR11_LENGTH                equ 0001h
SMT2TMRH_SMT2TMR11_MASK                  equ 0008h
SMT2TMRH_SMT2TMR12_POSN                  equ 0004h
SMT2TMRH_SMT2TMR12_POSITION              equ 0004h
SMT2TMRH_SMT2TMR12_SIZE                  equ 0001h
SMT2TMRH_SMT2TMR12_LENGTH                equ 0001h
SMT2TMRH_SMT2TMR12_MASK                  equ 0010h
SMT2TMRH_SMT2TMR13_POSN                  equ 0005h
SMT2TMRH_SMT2TMR13_POSITION              equ 0005h
SMT2TMRH_SMT2TMR13_SIZE                  equ 0001h
SMT2TMRH_SMT2TMR13_LENGTH                equ 0001h
SMT2TMRH_SMT2TMR13_MASK                  equ 0020h
SMT2TMRH_SMT2TMR14_POSN                  equ 0006h
SMT2TMRH_SMT2TMR14_POSITION              equ 0006h
SMT2TMRH_SMT2TMR14_SIZE                  equ 0001h
SMT2TMRH_SMT2TMR14_LENGTH                equ 0001h
SMT2TMRH_SMT2TMR14_MASK                  equ 0040h
SMT2TMRH_SMT2TMR15_POSN                  equ 0007h
SMT2TMRH_SMT2TMR15_POSITION              equ 0007h
SMT2TMRH_SMT2TMR15_SIZE                  equ 0001h
SMT2TMRH_SMT2TMR15_LENGTH                equ 0001h
SMT2TMRH_SMT2TMR15_MASK                  equ 0080h

// Register: SMT2TMRU
#define SMT2TMRU SMT2TMRU
SMT2TMRU                                 equ 0DA0h
// bitfield definitions
SMT2TMRU_SMT2TMR_POSN                    equ 0000h
SMT2TMRU_SMT2TMR_POSITION                equ 0000h
SMT2TMRU_SMT2TMR_SIZE                    equ 0008h
SMT2TMRU_SMT2TMR_LENGTH                  equ 0008h
SMT2TMRU_SMT2TMR_MASK                    equ 00FFh
SMT2TMRU_SMT2TMR16_POSN                  equ 0000h
SMT2TMRU_SMT2TMR16_POSITION              equ 0000h
SMT2TMRU_SMT2TMR16_SIZE                  equ 0001h
SMT2TMRU_SMT2TMR16_LENGTH                equ 0001h
SMT2TMRU_SMT2TMR16_MASK                  equ 0001h
SMT2TMRU_SMT2TMR17_POSN                  equ 0001h
SMT2TMRU_SMT2TMR17_POSITION              equ 0001h
SMT2TMRU_SMT2TMR17_SIZE                  equ 0001h
SMT2TMRU_SMT2TMR17_LENGTH                equ 0001h
SMT2TMRU_SMT2TMR17_MASK                  equ 0002h
SMT2TMRU_SMT2TMR18_POSN                  equ 0002h
SMT2TMRU_SMT2TMR18_POSITION              equ 0002h
SMT2TMRU_SMT2TMR18_SIZE                  equ 0001h
SMT2TMRU_SMT2TMR18_LENGTH                equ 0001h
SMT2TMRU_SMT2TMR18_MASK                  equ 0004h
SMT2TMRU_SMT2TMR19_POSN                  equ 0003h
SMT2TMRU_SMT2TMR19_POSITION              equ 0003h
SMT2TMRU_SMT2TMR19_SIZE                  equ 0001h
SMT2TMRU_SMT2TMR19_LENGTH                equ 0001h
SMT2TMRU_SMT2TMR19_MASK                  equ 0008h
SMT2TMRU_SMT2TMR20_POSN                  equ 0004h
SMT2TMRU_SMT2TMR20_POSITION              equ 0004h
SMT2TMRU_SMT2TMR20_SIZE                  equ 0001h
SMT2TMRU_SMT2TMR20_LENGTH                equ 0001h
SMT2TMRU_SMT2TMR20_MASK                  equ 0010h
SMT2TMRU_SMT2TMR21_POSN                  equ 0005h
SMT2TMRU_SMT2TMR21_POSITION              equ 0005h
SMT2TMRU_SMT2TMR21_SIZE                  equ 0001h
SMT2TMRU_SMT2TMR21_LENGTH                equ 0001h
SMT2TMRU_SMT2TMR21_MASK                  equ 0020h
SMT2TMRU_SMT2TMR22_POSN                  equ 0006h
SMT2TMRU_SMT2TMR22_POSITION              equ 0006h
SMT2TMRU_SMT2TMR22_SIZE                  equ 0001h
SMT2TMRU_SMT2TMR22_LENGTH                equ 0001h
SMT2TMRU_SMT2TMR22_MASK                  equ 0040h
SMT2TMRU_SMT2TMR23_POSN                  equ 0007h
SMT2TMRU_SMT2TMR23_POSITION              equ 0007h
SMT2TMRU_SMT2TMR23_SIZE                  equ 0001h
SMT2TMRU_SMT2TMR23_LENGTH                equ 0001h
SMT2TMRU_SMT2TMR23_MASK                  equ 0080h

// Register: SMT2CPRL
#define SMT2CPRL SMT2CPRL
SMT2CPRL                                 equ 0DA1h
// bitfield definitions
SMT2CPRL_SMT2CPR_POSN                    equ 0000h
SMT2CPRL_SMT2CPR_POSITION                equ 0000h
SMT2CPRL_SMT2CPR_SIZE                    equ 0008h
SMT2CPRL_SMT2CPR_LENGTH                  equ 0008h
SMT2CPRL_SMT2CPR_MASK                    equ 00FFh
SMT2CPRL_SMT2CPR0_POSN                   equ 0000h
SMT2CPRL_SMT2CPR0_POSITION               equ 0000h
SMT2CPRL_SMT2CPR0_SIZE                   equ 0001h
SMT2CPRL_SMT2CPR0_LENGTH                 equ 0001h
SMT2CPRL_SMT2CPR0_MASK                   equ 0001h
SMT2CPRL_SMT2CPR1_POSN                   equ 0001h
SMT2CPRL_SMT2CPR1_POSITION               equ 0001h
SMT2CPRL_SMT2CPR1_SIZE                   equ 0001h
SMT2CPRL_SMT2CPR1_LENGTH                 equ 0001h
SMT2CPRL_SMT2CPR1_MASK                   equ 0002h
SMT2CPRL_SMT2CPR2_POSN                   equ 0002h
SMT2CPRL_SMT2CPR2_POSITION               equ 0002h
SMT2CPRL_SMT2CPR2_SIZE                   equ 0001h
SMT2CPRL_SMT2CPR2_LENGTH                 equ 0001h
SMT2CPRL_SMT2CPR2_MASK                   equ 0004h
SMT2CPRL_SMT2CPR3_POSN                   equ 0003h
SMT2CPRL_SMT2CPR3_POSITION               equ 0003h
SMT2CPRL_SMT2CPR3_SIZE                   equ 0001h
SMT2CPRL_SMT2CPR3_LENGTH                 equ 0001h
SMT2CPRL_SMT2CPR3_MASK                   equ 0008h
SMT2CPRL_SMT2CPR4_POSN                   equ 0004h
SMT2CPRL_SMT2CPR4_POSITION               equ 0004h
SMT2CPRL_SMT2CPR4_SIZE                   equ 0001h
SMT2CPRL_SMT2CPR4_LENGTH                 equ 0001h
SMT2CPRL_SMT2CPR4_MASK                   equ 0010h
SMT2CPRL_SMT2CPR5_POSN                   equ 0005h
SMT2CPRL_SMT2CPR5_POSITION               equ 0005h
SMT2CPRL_SMT2CPR5_SIZE                   equ 0001h
SMT2CPRL_SMT2CPR5_LENGTH                 equ 0001h
SMT2CPRL_SMT2CPR5_MASK                   equ 0020h
SMT2CPRL_SMT2CPR6_POSN                   equ 0006h
SMT2CPRL_SMT2CPR6_POSITION               equ 0006h
SMT2CPRL_SMT2CPR6_SIZE                   equ 0001h
SMT2CPRL_SMT2CPR6_LENGTH                 equ 0001h
SMT2CPRL_SMT2CPR6_MASK                   equ 0040h
SMT2CPRL_SMT2CPR7_POSN                   equ 0007h
SMT2CPRL_SMT2CPR7_POSITION               equ 0007h
SMT2CPRL_SMT2CPR7_SIZE                   equ 0001h
SMT2CPRL_SMT2CPR7_LENGTH                 equ 0001h
SMT2CPRL_SMT2CPR7_MASK                   equ 0080h

// Register: SMT2CPRH
#define SMT2CPRH SMT2CPRH
SMT2CPRH                                 equ 0DA2h
// bitfield definitions
SMT2CPRH_SMT2CPR_POSN                    equ 0000h
SMT2CPRH_SMT2CPR_POSITION                equ 0000h
SMT2CPRH_SMT2CPR_SIZE                    equ 0008h
SMT2CPRH_SMT2CPR_LENGTH                  equ 0008h
SMT2CPRH_SMT2CPR_MASK                    equ 00FFh
SMT2CPRH_SMT2CPR8_POSN                   equ 0000h
SMT2CPRH_SMT2CPR8_POSITION               equ 0000h
SMT2CPRH_SMT2CPR8_SIZE                   equ 0001h
SMT2CPRH_SMT2CPR8_LENGTH                 equ 0001h
SMT2CPRH_SMT2CPR8_MASK                   equ 0001h
SMT2CPRH_SMT2CPR9_POSN                   equ 0001h
SMT2CPRH_SMT2CPR9_POSITION               equ 0001h
SMT2CPRH_SMT2CPR9_SIZE                   equ 0001h
SMT2CPRH_SMT2CPR9_LENGTH                 equ 0001h
SMT2CPRH_SMT2CPR9_MASK                   equ 0002h
SMT2CPRH_SMT2CPR10_POSN                  equ 0002h
SMT2CPRH_SMT2CPR10_POSITION              equ 0002h
SMT2CPRH_SMT2CPR10_SIZE                  equ 0001h
SMT2CPRH_SMT2CPR10_LENGTH                equ 0001h
SMT2CPRH_SMT2CPR10_MASK                  equ 0004h
SMT2CPRH_SMT2CPR11_POSN                  equ 0003h
SMT2CPRH_SMT2CPR11_POSITION              equ 0003h
SMT2CPRH_SMT2CPR11_SIZE                  equ 0001h
SMT2CPRH_SMT2CPR11_LENGTH                equ 0001h
SMT2CPRH_SMT2CPR11_MASK                  equ 0008h
SMT2CPRH_SMT2CPR12_POSN                  equ 0004h
SMT2CPRH_SMT2CPR12_POSITION              equ 0004h
SMT2CPRH_SMT2CPR12_SIZE                  equ 0001h
SMT2CPRH_SMT2CPR12_LENGTH                equ 0001h
SMT2CPRH_SMT2CPR12_MASK                  equ 0010h
SMT2CPRH_SMT2CPR13_POSN                  equ 0005h
SMT2CPRH_SMT2CPR13_POSITION              equ 0005h
SMT2CPRH_SMT2CPR13_SIZE                  equ 0001h
SMT2CPRH_SMT2CPR13_LENGTH                equ 0001h
SMT2CPRH_SMT2CPR13_MASK                  equ 0020h
SMT2CPRH_SMT2CPR14_POSN                  equ 0006h
SMT2CPRH_SMT2CPR14_POSITION              equ 0006h
SMT2CPRH_SMT2CPR14_SIZE                  equ 0001h
SMT2CPRH_SMT2CPR14_LENGTH                equ 0001h
SMT2CPRH_SMT2CPR14_MASK                  equ 0040h
SMT2CPRH_SMT2CPR15_POSN                  equ 0007h
SMT2CPRH_SMT2CPR15_POSITION              equ 0007h
SMT2CPRH_SMT2CPR15_SIZE                  equ 0001h
SMT2CPRH_SMT2CPR15_LENGTH                equ 0001h
SMT2CPRH_SMT2CPR15_MASK                  equ 0080h

// Register: SMT2CPRU
#define SMT2CPRU SMT2CPRU
SMT2CPRU                                 equ 0DA3h
// bitfield definitions
SMT2CPRU_SMT2CPR_POSN                    equ 0000h
SMT2CPRU_SMT2CPR_POSITION                equ 0000h
SMT2CPRU_SMT2CPR_SIZE                    equ 0008h
SMT2CPRU_SMT2CPR_LENGTH                  equ 0008h
SMT2CPRU_SMT2CPR_MASK                    equ 00FFh
SMT2CPRU_SMT2CPR16_POSN                  equ 0000h
SMT2CPRU_SMT2CPR16_POSITION              equ 0000h
SMT2CPRU_SMT2CPR16_SIZE                  equ 0001h
SMT2CPRU_SMT2CPR16_LENGTH                equ 0001h
SMT2CPRU_SMT2CPR16_MASK                  equ 0001h
SMT2CPRU_SMT2CPR17_POSN                  equ 0001h
SMT2CPRU_SMT2CPR17_POSITION              equ 0001h
SMT2CPRU_SMT2CPR17_SIZE                  equ 0001h
SMT2CPRU_SMT2CPR17_LENGTH                equ 0001h
SMT2CPRU_SMT2CPR17_MASK                  equ 0002h
SMT2CPRU_SMT2CPR18_POSN                  equ 0002h
SMT2CPRU_SMT2CPR18_POSITION              equ 0002h
SMT2CPRU_SMT2CPR18_SIZE                  equ 0001h
SMT2CPRU_SMT2CPR18_LENGTH                equ 0001h
SMT2CPRU_SMT2CPR18_MASK                  equ 0004h
SMT2CPRU_SMT2CPR19_POSN                  equ 0003h
SMT2CPRU_SMT2CPR19_POSITION              equ 0003h
SMT2CPRU_SMT2CPR19_SIZE                  equ 0001h
SMT2CPRU_SMT2CPR19_LENGTH                equ 0001h
SMT2CPRU_SMT2CPR19_MASK                  equ 0008h
SMT2CPRU_SMT2CPR20_POSN                  equ 0004h
SMT2CPRU_SMT2CPR20_POSITION              equ 0004h
SMT2CPRU_SMT2CPR20_SIZE                  equ 0001h
SMT2CPRU_SMT2CPR20_LENGTH                equ 0001h
SMT2CPRU_SMT2CPR20_MASK                  equ 0010h
SMT2CPRU_SMT2CPR21_POSN                  equ 0005h
SMT2CPRU_SMT2CPR21_POSITION              equ 0005h
SMT2CPRU_SMT2CPR21_SIZE                  equ 0001h
SMT2CPRU_SMT2CPR21_LENGTH                equ 0001h
SMT2CPRU_SMT2CPR21_MASK                  equ 0020h
SMT2CPRU_SMT2CPR22_POSN                  equ 0006h
SMT2CPRU_SMT2CPR22_POSITION              equ 0006h
SMT2CPRU_SMT2CPR22_SIZE                  equ 0001h
SMT2CPRU_SMT2CPR22_LENGTH                equ 0001h
SMT2CPRU_SMT2CPR22_MASK                  equ 0040h
SMT2CPRU_SMT2CPR23_POSN                  equ 0007h
SMT2CPRU_SMT2CPR23_POSITION              equ 0007h
SMT2CPRU_SMT2CPR23_SIZE                  equ 0001h
SMT2CPRU_SMT2CPR23_LENGTH                equ 0001h
SMT2CPRU_SMT2CPR23_MASK                  equ 0080h

// Register: SMT2CPWL
#define SMT2CPWL SMT2CPWL
SMT2CPWL                                 equ 0DA4h
// bitfield definitions
SMT2CPWL_SMT2CPW_POSN                    equ 0000h
SMT2CPWL_SMT2CPW_POSITION                equ 0000h
SMT2CPWL_SMT2CPW_SIZE                    equ 0008h
SMT2CPWL_SMT2CPW_LENGTH                  equ 0008h
SMT2CPWL_SMT2CPW_MASK                    equ 00FFh
SMT2CPWL_SMT2CPW0_POSN                   equ 0000h
SMT2CPWL_SMT2CPW0_POSITION               equ 0000h
SMT2CPWL_SMT2CPW0_SIZE                   equ 0001h
SMT2CPWL_SMT2CPW0_LENGTH                 equ 0001h
SMT2CPWL_SMT2CPW0_MASK                   equ 0001h
SMT2CPWL_SMT2CPW1_POSN                   equ 0001h
SMT2CPWL_SMT2CPW1_POSITION               equ 0001h
SMT2CPWL_SMT2CPW1_SIZE                   equ 0001h
SMT2CPWL_SMT2CPW1_LENGTH                 equ 0001h
SMT2CPWL_SMT2CPW1_MASK                   equ 0002h
SMT2CPWL_SMT2CPW2_POSN                   equ 0002h
SMT2CPWL_SMT2CPW2_POSITION               equ 0002h
SMT2CPWL_SMT2CPW2_SIZE                   equ 0001h
SMT2CPWL_SMT2CPW2_LENGTH                 equ 0001h
SMT2CPWL_SMT2CPW2_MASK                   equ 0004h
SMT2CPWL_SMT2CPW3_POSN                   equ 0003h
SMT2CPWL_SMT2CPW3_POSITION               equ 0003h
SMT2CPWL_SMT2CPW3_SIZE                   equ 0001h
SMT2CPWL_SMT2CPW3_LENGTH                 equ 0001h
SMT2CPWL_SMT2CPW3_MASK                   equ 0008h
SMT2CPWL_SMT2CPW4_POSN                   equ 0004h
SMT2CPWL_SMT2CPW4_POSITION               equ 0004h
SMT2CPWL_SMT2CPW4_SIZE                   equ 0001h
SMT2CPWL_SMT2CPW4_LENGTH                 equ 0001h
SMT2CPWL_SMT2CPW4_MASK                   equ 0010h
SMT2CPWL_SMT2CPW5_POSN                   equ 0005h
SMT2CPWL_SMT2CPW5_POSITION               equ 0005h
SMT2CPWL_SMT2CPW5_SIZE                   equ 0001h
SMT2CPWL_SMT2CPW5_LENGTH                 equ 0001h
SMT2CPWL_SMT2CPW5_MASK                   equ 0020h
SMT2CPWL_SMT2CPW6_POSN                   equ 0006h
SMT2CPWL_SMT2CPW6_POSITION               equ 0006h
SMT2CPWL_SMT2CPW6_SIZE                   equ 0001h
SMT2CPWL_SMT2CPW6_LENGTH                 equ 0001h
SMT2CPWL_SMT2CPW6_MASK                   equ 0040h
SMT2CPWL_SMT2CPW7_POSN                   equ 0007h
SMT2CPWL_SMT2CPW7_POSITION               equ 0007h
SMT2CPWL_SMT2CPW7_SIZE                   equ 0001h
SMT2CPWL_SMT2CPW7_LENGTH                 equ 0001h
SMT2CPWL_SMT2CPW7_MASK                   equ 0080h

// Register: SMT2CPWH
#define SMT2CPWH SMT2CPWH
SMT2CPWH                                 equ 0DA5h
// bitfield definitions
SMT2CPWH_SMT2CPW_POSN                    equ 0000h
SMT2CPWH_SMT2CPW_POSITION                equ 0000h
SMT2CPWH_SMT2CPW_SIZE                    equ 0008h
SMT2CPWH_SMT2CPW_LENGTH                  equ 0008h
SMT2CPWH_SMT2CPW_MASK                    equ 00FFh
SMT2CPWH_SMT2CPW8_POSN                   equ 0000h
SMT2CPWH_SMT2CPW8_POSITION               equ 0000h
SMT2CPWH_SMT2CPW8_SIZE                   equ 0001h
SMT2CPWH_SMT2CPW8_LENGTH                 equ 0001h
SMT2CPWH_SMT2CPW8_MASK                   equ 0001h
SMT2CPWH_SMT2CPW9_POSN                   equ 0001h
SMT2CPWH_SMT2CPW9_POSITION               equ 0001h
SMT2CPWH_SMT2CPW9_SIZE                   equ 0001h
SMT2CPWH_SMT2CPW9_LENGTH                 equ 0001h
SMT2CPWH_SMT2CPW9_MASK                   equ 0002h
SMT2CPWH_SMT2CPW10_POSN                  equ 0002h
SMT2CPWH_SMT2CPW10_POSITION              equ 0002h
SMT2CPWH_SMT2CPW10_SIZE                  equ 0001h
SMT2CPWH_SMT2CPW10_LENGTH                equ 0001h
SMT2CPWH_SMT2CPW10_MASK                  equ 0004h
SMT2CPWH_SMT2CPW11_POSN                  equ 0003h
SMT2CPWH_SMT2CPW11_POSITION              equ 0003h
SMT2CPWH_SMT2CPW11_SIZE                  equ 0001h
SMT2CPWH_SMT2CPW11_LENGTH                equ 0001h
SMT2CPWH_SMT2CPW11_MASK                  equ 0008h
SMT2CPWH_SMT2CPW12_POSN                  equ 0004h
SMT2CPWH_SMT2CPW12_POSITION              equ 0004h
SMT2CPWH_SMT2CPW12_SIZE                  equ 0001h
SMT2CPWH_SMT2CPW12_LENGTH                equ 0001h
SMT2CPWH_SMT2CPW12_MASK                  equ 0010h
SMT2CPWH_SMT2CPW13_POSN                  equ 0005h
SMT2CPWH_SMT2CPW13_POSITION              equ 0005h
SMT2CPWH_SMT2CPW13_SIZE                  equ 0001h
SMT2CPWH_SMT2CPW13_LENGTH                equ 0001h
SMT2CPWH_SMT2CPW13_MASK                  equ 0020h
SMT2CPWH_SMT2CPW14_POSN                  equ 0006h
SMT2CPWH_SMT2CPW14_POSITION              equ 0006h
SMT2CPWH_SMT2CPW14_SIZE                  equ 0001h
SMT2CPWH_SMT2CPW14_LENGTH                equ 0001h
SMT2CPWH_SMT2CPW14_MASK                  equ 0040h
SMT2CPWH_SMT2CPW15_POSN                  equ 0007h
SMT2CPWH_SMT2CPW15_POSITION              equ 0007h
SMT2CPWH_SMT2CPW15_SIZE                  equ 0001h
SMT2CPWH_SMT2CPW15_LENGTH                equ 0001h
SMT2CPWH_SMT2CPW15_MASK                  equ 0080h

// Register: SMT2CPWU
#define SMT2CPWU SMT2CPWU
SMT2CPWU                                 equ 0DA6h
// bitfield definitions
SMT2CPWU_SMT2CPW_POSN                    equ 0000h
SMT2CPWU_SMT2CPW_POSITION                equ 0000h
SMT2CPWU_SMT2CPW_SIZE                    equ 0008h
SMT2CPWU_SMT2CPW_LENGTH                  equ 0008h
SMT2CPWU_SMT2CPW_MASK                    equ 00FFh
SMT2CPWU_SMT2CPW16_POSN                  equ 0000h
SMT2CPWU_SMT2CPW16_POSITION              equ 0000h
SMT2CPWU_SMT2CPW16_SIZE                  equ 0001h
SMT2CPWU_SMT2CPW16_LENGTH                equ 0001h
SMT2CPWU_SMT2CPW16_MASK                  equ 0001h
SMT2CPWU_SMT2CPW17_POSN                  equ 0001h
SMT2CPWU_SMT2CPW17_POSITION              equ 0001h
SMT2CPWU_SMT2CPW17_SIZE                  equ 0001h
SMT2CPWU_SMT2CPW17_LENGTH                equ 0001h
SMT2CPWU_SMT2CPW17_MASK                  equ 0002h
SMT2CPWU_SMT2CPW18_POSN                  equ 0002h
SMT2CPWU_SMT2CPW18_POSITION              equ 0002h
SMT2CPWU_SMT2CPW18_SIZE                  equ 0001h
SMT2CPWU_SMT2CPW18_LENGTH                equ 0001h
SMT2CPWU_SMT2CPW18_MASK                  equ 0004h
SMT2CPWU_SMT2CPW19_POSN                  equ 0003h
SMT2CPWU_SMT2CPW19_POSITION              equ 0003h
SMT2CPWU_SMT2CPW19_SIZE                  equ 0001h
SMT2CPWU_SMT2CPW19_LENGTH                equ 0001h
SMT2CPWU_SMT2CPW19_MASK                  equ 0008h
SMT2CPWU_SMT2CPW20_POSN                  equ 0004h
SMT2CPWU_SMT2CPW20_POSITION              equ 0004h
SMT2CPWU_SMT2CPW20_SIZE                  equ 0001h
SMT2CPWU_SMT2CPW20_LENGTH                equ 0001h
SMT2CPWU_SMT2CPW20_MASK                  equ 0010h
SMT2CPWU_SMT2CPW21_POSN                  equ 0005h
SMT2CPWU_SMT2CPW21_POSITION              equ 0005h
SMT2CPWU_SMT2CPW21_SIZE                  equ 0001h
SMT2CPWU_SMT2CPW21_LENGTH                equ 0001h
SMT2CPWU_SMT2CPW21_MASK                  equ 0020h
SMT2CPWU_SMT2CPW22_POSN                  equ 0006h
SMT2CPWU_SMT2CPW22_POSITION              equ 0006h
SMT2CPWU_SMT2CPW22_SIZE                  equ 0001h
SMT2CPWU_SMT2CPW22_LENGTH                equ 0001h
SMT2CPWU_SMT2CPW22_MASK                  equ 0040h
SMT2CPWU_SMT2CPW23_POSN                  equ 0007h
SMT2CPWU_SMT2CPW23_POSITION              equ 0007h
SMT2CPWU_SMT2CPW23_SIZE                  equ 0001h
SMT2CPWU_SMT2CPW23_LENGTH                equ 0001h
SMT2CPWU_SMT2CPW23_MASK                  equ 0080h

// Register: SMT2PRL
#define SMT2PRL SMT2PRL
SMT2PRL                                  equ 0DA7h
// bitfield definitions
SMT2PRL_SMT2PR_POSN                      equ 0000h
SMT2PRL_SMT2PR_POSITION                  equ 0000h
SMT2PRL_SMT2PR_SIZE                      equ 0008h
SMT2PRL_SMT2PR_LENGTH                    equ 0008h
SMT2PRL_SMT2PR_MASK                      equ 00FFh
SMT2PRL_SMT2PR0_POSN                     equ 0000h
SMT2PRL_SMT2PR0_POSITION                 equ 0000h
SMT2PRL_SMT2PR0_SIZE                     equ 0001h
SMT2PRL_SMT2PR0_LENGTH                   equ 0001h
SMT2PRL_SMT2PR0_MASK                     equ 0001h
SMT2PRL_SMT2PR1_POSN                     equ 0001h
SMT2PRL_SMT2PR1_POSITION                 equ 0001h
SMT2PRL_SMT2PR1_SIZE                     equ 0001h
SMT2PRL_SMT2PR1_LENGTH                   equ 0001h
SMT2PRL_SMT2PR1_MASK                     equ 0002h
SMT2PRL_SMT2PR2_POSN                     equ 0002h
SMT2PRL_SMT2PR2_POSITION                 equ 0002h
SMT2PRL_SMT2PR2_SIZE                     equ 0001h
SMT2PRL_SMT2PR2_LENGTH                   equ 0001h
SMT2PRL_SMT2PR2_MASK                     equ 0004h
SMT2PRL_SMT2PR3_POSN                     equ 0003h
SMT2PRL_SMT2PR3_POSITION                 equ 0003h
SMT2PRL_SMT2PR3_SIZE                     equ 0001h
SMT2PRL_SMT2PR3_LENGTH                   equ 0001h
SMT2PRL_SMT2PR3_MASK                     equ 0008h
SMT2PRL_SMT2PR4_POSN                     equ 0004h
SMT2PRL_SMT2PR4_POSITION                 equ 0004h
SMT2PRL_SMT2PR4_SIZE                     equ 0001h
SMT2PRL_SMT2PR4_LENGTH                   equ 0001h
SMT2PRL_SMT2PR4_MASK                     equ 0010h
SMT2PRL_SMT2PR5_POSN                     equ 0005h
SMT2PRL_SMT2PR5_POSITION                 equ 0005h
SMT2PRL_SMT2PR5_SIZE                     equ 0001h
SMT2PRL_SMT2PR5_LENGTH                   equ 0001h
SMT2PRL_SMT2PR5_MASK                     equ 0020h
SMT2PRL_SMT2PR6_POSN                     equ 0006h
SMT2PRL_SMT2PR6_POSITION                 equ 0006h
SMT2PRL_SMT2PR6_SIZE                     equ 0001h
SMT2PRL_SMT2PR6_LENGTH                   equ 0001h
SMT2PRL_SMT2PR6_MASK                     equ 0040h
SMT2PRL_SMT2PR7_POSN                     equ 0007h
SMT2PRL_SMT2PR7_POSITION                 equ 0007h
SMT2PRL_SMT2PR7_SIZE                     equ 0001h
SMT2PRL_SMT2PR7_LENGTH                   equ 0001h
SMT2PRL_SMT2PR7_MASK                     equ 0080h

// Register: SMT2PRH
#define SMT2PRH SMT2PRH
SMT2PRH                                  equ 0DA8h
// bitfield definitions
SMT2PRH_SMT2PR_POSN                      equ 0000h
SMT2PRH_SMT2PR_POSITION                  equ 0000h
SMT2PRH_SMT2PR_SIZE                      equ 0008h
SMT2PRH_SMT2PR_LENGTH                    equ 0008h
SMT2PRH_SMT2PR_MASK                      equ 00FFh
SMT2PRH_SMT2PR8_POSN                     equ 0000h
SMT2PRH_SMT2PR8_POSITION                 equ 0000h
SMT2PRH_SMT2PR8_SIZE                     equ 0001h
SMT2PRH_SMT2PR8_LENGTH                   equ 0001h
SMT2PRH_SMT2PR8_MASK                     equ 0001h
SMT2PRH_SMT2PR9_POSN                     equ 0001h
SMT2PRH_SMT2PR9_POSITION                 equ 0001h
SMT2PRH_SMT2PR9_SIZE                     equ 0001h
SMT2PRH_SMT2PR9_LENGTH                   equ 0001h
SMT2PRH_SMT2PR9_MASK                     equ 0002h
SMT2PRH_SMT2PR10_POSN                    equ 0002h
SMT2PRH_SMT2PR10_POSITION                equ 0002h
SMT2PRH_SMT2PR10_SIZE                    equ 0001h
SMT2PRH_SMT2PR10_LENGTH                  equ 0001h
SMT2PRH_SMT2PR10_MASK                    equ 0004h
SMT2PRH_SMT2PR11_POSN                    equ 0003h
SMT2PRH_SMT2PR11_POSITION                equ 0003h
SMT2PRH_SMT2PR11_SIZE                    equ 0001h
SMT2PRH_SMT2PR11_LENGTH                  equ 0001h
SMT2PRH_SMT2PR11_MASK                    equ 0008h
SMT2PRH_SMT2PR12_POSN                    equ 0004h
SMT2PRH_SMT2PR12_POSITION                equ 0004h
SMT2PRH_SMT2PR12_SIZE                    equ 0001h
SMT2PRH_SMT2PR12_LENGTH                  equ 0001h
SMT2PRH_SMT2PR12_MASK                    equ 0010h
SMT2PRH_SMT2PR13_POSN                    equ 0005h
SMT2PRH_SMT2PR13_POSITION                equ 0005h
SMT2PRH_SMT2PR13_SIZE                    equ 0001h
SMT2PRH_SMT2PR13_LENGTH                  equ 0001h
SMT2PRH_SMT2PR13_MASK                    equ 0020h
SMT2PRH_SMT2PR14_POSN                    equ 0006h
SMT2PRH_SMT2PR14_POSITION                equ 0006h
SMT2PRH_SMT2PR14_SIZE                    equ 0001h
SMT2PRH_SMT2PR14_LENGTH                  equ 0001h
SMT2PRH_SMT2PR14_MASK                    equ 0040h
SMT2PRH_SMT2PR15_POSN                    equ 0007h
SMT2PRH_SMT2PR15_POSITION                equ 0007h
SMT2PRH_SMT2PR15_SIZE                    equ 0001h
SMT2PRH_SMT2PR15_LENGTH                  equ 0001h
SMT2PRH_SMT2PR15_MASK                    equ 0080h

// Register: SMT2PRU
#define SMT2PRU SMT2PRU
SMT2PRU                                  equ 0DA9h
// bitfield definitions
SMT2PRU_SMT2PR_POSN                      equ 0000h
SMT2PRU_SMT2PR_POSITION                  equ 0000h
SMT2PRU_SMT2PR_SIZE                      equ 0008h
SMT2PRU_SMT2PR_LENGTH                    equ 0008h
SMT2PRU_SMT2PR_MASK                      equ 00FFh
SMT2PRU_SMT2PR16_POSN                    equ 0000h
SMT2PRU_SMT2PR16_POSITION                equ 0000h
SMT2PRU_SMT2PR16_SIZE                    equ 0001h
SMT2PRU_SMT2PR16_LENGTH                  equ 0001h
SMT2PRU_SMT2PR16_MASK                    equ 0001h
SMT2PRU_SMT2PR17_POSN                    equ 0001h
SMT2PRU_SMT2PR17_POSITION                equ 0001h
SMT2PRU_SMT2PR17_SIZE                    equ 0001h
SMT2PRU_SMT2PR17_LENGTH                  equ 0001h
SMT2PRU_SMT2PR17_MASK                    equ 0002h
SMT2PRU_SMT2PR18_POSN                    equ 0002h
SMT2PRU_SMT2PR18_POSITION                equ 0002h
SMT2PRU_SMT2PR18_SIZE                    equ 0001h
SMT2PRU_SMT2PR18_LENGTH                  equ 0001h
SMT2PRU_SMT2PR18_MASK                    equ 0004h
SMT2PRU_SMT2PR19_POSN                    equ 0003h
SMT2PRU_SMT2PR19_POSITION                equ 0003h
SMT2PRU_SMT2PR19_SIZE                    equ 0001h
SMT2PRU_SMT2PR19_LENGTH                  equ 0001h
SMT2PRU_SMT2PR19_MASK                    equ 0008h
SMT2PRU_SMT2PR20_POSN                    equ 0004h
SMT2PRU_SMT2PR20_POSITION                equ 0004h
SMT2PRU_SMT2PR20_SIZE                    equ 0001h
SMT2PRU_SMT2PR20_LENGTH                  equ 0001h
SMT2PRU_SMT2PR20_MASK                    equ 0010h
SMT2PRU_SMT2PR21_POSN                    equ 0005h
SMT2PRU_SMT2PR21_POSITION                equ 0005h
SMT2PRU_SMT2PR21_SIZE                    equ 0001h
SMT2PRU_SMT2PR21_LENGTH                  equ 0001h
SMT2PRU_SMT2PR21_MASK                    equ 0020h
SMT2PRU_SMT2PR22_POSN                    equ 0006h
SMT2PRU_SMT2PR22_POSITION                equ 0006h
SMT2PRU_SMT2PR22_SIZE                    equ 0001h
SMT2PRU_SMT2PR22_LENGTH                  equ 0001h
SMT2PRU_SMT2PR22_MASK                    equ 0040h
SMT2PRU_SMT2PR23_POSN                    equ 0007h
SMT2PRU_SMT2PR23_POSITION                equ 0007h
SMT2PRU_SMT2PR23_SIZE                    equ 0001h
SMT2PRU_SMT2PR23_LENGTH                  equ 0001h
SMT2PRU_SMT2PR23_MASK                    equ 0080h

// Register: SMT2CON0
#define SMT2CON0 SMT2CON0
SMT2CON0                                 equ 0DAAh
// bitfield definitions
SMT2CON0_SMT2PS_POSN                     equ 0000h
SMT2CON0_SMT2PS_POSITION                 equ 0000h
SMT2CON0_SMT2PS_SIZE                     equ 0002h
SMT2CON0_SMT2PS_LENGTH                   equ 0002h
SMT2CON0_SMT2PS_MASK                     equ 0003h
SMT2CON0_CPOL_POSN                       equ 0002h
SMT2CON0_CPOL_POSITION                   equ 0002h
SMT2CON0_CPOL_SIZE                       equ 0001h
SMT2CON0_CPOL_LENGTH                     equ 0001h
SMT2CON0_CPOL_MASK                       equ 0004h
SMT2CON0_SPOL_POSN                       equ 0003h
SMT2CON0_SPOL_POSITION                   equ 0003h
SMT2CON0_SPOL_SIZE                       equ 0001h
SMT2CON0_SPOL_LENGTH                     equ 0001h
SMT2CON0_SPOL_MASK                       equ 0008h
SMT2CON0_WPOL_POSN                       equ 0004h
SMT2CON0_WPOL_POSITION                   equ 0004h
SMT2CON0_WPOL_SIZE                       equ 0001h
SMT2CON0_WPOL_LENGTH                     equ 0001h
SMT2CON0_WPOL_MASK                       equ 0010h
SMT2CON0_STP_POSN                        equ 0005h
SMT2CON0_STP_POSITION                    equ 0005h
SMT2CON0_STP_SIZE                        equ 0001h
SMT2CON0_STP_LENGTH                      equ 0001h
SMT2CON0_STP_MASK                        equ 0020h
SMT2CON0_EN_POSN                         equ 0007h
SMT2CON0_EN_POSITION                     equ 0007h
SMT2CON0_EN_SIZE                         equ 0001h
SMT2CON0_EN_LENGTH                       equ 0001h
SMT2CON0_EN_MASK                         equ 0080h
SMT2CON0_SMT2PS0_POSN                    equ 0000h
SMT2CON0_SMT2PS0_POSITION                equ 0000h
SMT2CON0_SMT2PS0_SIZE                    equ 0001h
SMT2CON0_SMT2PS0_LENGTH                  equ 0001h
SMT2CON0_SMT2PS0_MASK                    equ 0001h
SMT2CON0_SMT2PS1_POSN                    equ 0001h
SMT2CON0_SMT2PS1_POSITION                equ 0001h
SMT2CON0_SMT2PS1_SIZE                    equ 0001h
SMT2CON0_SMT2PS1_LENGTH                  equ 0001h
SMT2CON0_SMT2PS1_MASK                    equ 0002h

// Register: SMT2CON1
#define SMT2CON1 SMT2CON1
SMT2CON1                                 equ 0DABh
// bitfield definitions
SMT2CON1_MODE_POSN                       equ 0000h
SMT2CON1_MODE_POSITION                   equ 0000h
SMT2CON1_MODE_SIZE                       equ 0004h
SMT2CON1_MODE_LENGTH                     equ 0004h
SMT2CON1_MODE_MASK                       equ 000Fh
SMT2CON1_REPEAT_POSN                     equ 0006h
SMT2CON1_REPEAT_POSITION                 equ 0006h
SMT2CON1_REPEAT_SIZE                     equ 0001h
SMT2CON1_REPEAT_LENGTH                   equ 0001h
SMT2CON1_REPEAT_MASK                     equ 0040h
SMT2CON1_SMT2GO_POSN                     equ 0007h
SMT2CON1_SMT2GO_POSITION                 equ 0007h
SMT2CON1_SMT2GO_SIZE                     equ 0001h
SMT2CON1_SMT2GO_LENGTH                   equ 0001h
SMT2CON1_SMT2GO_MASK                     equ 0080h
SMT2CON1_MODE0_POSN                      equ 0000h
SMT2CON1_MODE0_POSITION                  equ 0000h
SMT2CON1_MODE0_SIZE                      equ 0001h
SMT2CON1_MODE0_LENGTH                    equ 0001h
SMT2CON1_MODE0_MASK                      equ 0001h
SMT2CON1_MODE1_POSN                      equ 0001h
SMT2CON1_MODE1_POSITION                  equ 0001h
SMT2CON1_MODE1_SIZE                      equ 0001h
SMT2CON1_MODE1_LENGTH                    equ 0001h
SMT2CON1_MODE1_MASK                      equ 0002h
SMT2CON1_MODE2_POSN                      equ 0002h
SMT2CON1_MODE2_POSITION                  equ 0002h
SMT2CON1_MODE2_SIZE                      equ 0001h
SMT2CON1_MODE2_LENGTH                    equ 0001h
SMT2CON1_MODE2_MASK                      equ 0004h
SMT2CON1_MODE3_POSN                      equ 0003h
SMT2CON1_MODE3_POSITION                  equ 0003h
SMT2CON1_MODE3_SIZE                      equ 0001h
SMT2CON1_MODE3_LENGTH                    equ 0001h
SMT2CON1_MODE3_MASK                      equ 0008h
SMT2CON1_SMT2MODE_POSN                   equ 0000h
SMT2CON1_SMT2MODE_POSITION               equ 0000h
SMT2CON1_SMT2MODE_SIZE                   equ 0004h
SMT2CON1_SMT2MODE_LENGTH                 equ 0004h
SMT2CON1_SMT2MODE_MASK                   equ 000Fh
SMT2CON1_SMT2REPEAT_POSN                 equ 0006h
SMT2CON1_SMT2REPEAT_POSITION             equ 0006h
SMT2CON1_SMT2REPEAT_SIZE                 equ 0001h
SMT2CON1_SMT2REPEAT_LENGTH               equ 0001h
SMT2CON1_SMT2REPEAT_MASK                 equ 0040h
SMT2CON1_SMT2MODE0_POSN                  equ 0000h
SMT2CON1_SMT2MODE0_POSITION              equ 0000h
SMT2CON1_SMT2MODE0_SIZE                  equ 0001h
SMT2CON1_SMT2MODE0_LENGTH                equ 0001h
SMT2CON1_SMT2MODE0_MASK                  equ 0001h
SMT2CON1_SMT2MODE1_POSN                  equ 0001h
SMT2CON1_SMT2MODE1_POSITION              equ 0001h
SMT2CON1_SMT2MODE1_SIZE                  equ 0001h
SMT2CON1_SMT2MODE1_LENGTH                equ 0001h
SMT2CON1_SMT2MODE1_MASK                  equ 0002h
SMT2CON1_SMT2MODE2_POSN                  equ 0002h
SMT2CON1_SMT2MODE2_POSITION              equ 0002h
SMT2CON1_SMT2MODE2_SIZE                  equ 0001h
SMT2CON1_SMT2MODE2_LENGTH                equ 0001h
SMT2CON1_SMT2MODE2_MASK                  equ 0004h
SMT2CON1_SMT2MODE3_POSN                  equ 0003h
SMT2CON1_SMT2MODE3_POSITION              equ 0003h
SMT2CON1_SMT2MODE3_SIZE                  equ 0001h
SMT2CON1_SMT2MODE3_LENGTH                equ 0001h
SMT2CON1_SMT2MODE3_MASK                  equ 0008h

// Register: SMT2STAT
#define SMT2STAT SMT2STAT
SMT2STAT                                 equ 0DACh
// bitfield definitions
SMT2STAT_AS_POSN                         equ 0000h
SMT2STAT_AS_POSITION                     equ 0000h
SMT2STAT_AS_SIZE                         equ 0001h
SMT2STAT_AS_LENGTH                       equ 0001h
SMT2STAT_AS_MASK                         equ 0001h
SMT2STAT_WS_POSN                         equ 0001h
SMT2STAT_WS_POSITION                     equ 0001h
SMT2STAT_WS_SIZE                         equ 0001h
SMT2STAT_WS_LENGTH                       equ 0001h
SMT2STAT_WS_MASK                         equ 0002h
SMT2STAT_TS_POSN                         equ 0002h
SMT2STAT_TS_POSITION                     equ 0002h
SMT2STAT_TS_SIZE                         equ 0001h
SMT2STAT_TS_LENGTH                       equ 0001h
SMT2STAT_TS_MASK                         equ 0004h
SMT2STAT_RST_POSN                        equ 0005h
SMT2STAT_RST_POSITION                    equ 0005h
SMT2STAT_RST_SIZE                        equ 0001h
SMT2STAT_RST_LENGTH                      equ 0001h
SMT2STAT_RST_MASK                        equ 0020h
SMT2STAT_CPWUP_POSN                      equ 0006h
SMT2STAT_CPWUP_POSITION                  equ 0006h
SMT2STAT_CPWUP_SIZE                      equ 0001h
SMT2STAT_CPWUP_LENGTH                    equ 0001h
SMT2STAT_CPWUP_MASK                      equ 0040h
SMT2STAT_CPRUP_POSN                      equ 0007h
SMT2STAT_CPRUP_POSITION                  equ 0007h
SMT2STAT_CPRUP_SIZE                      equ 0001h
SMT2STAT_CPRUP_LENGTH                    equ 0001h
SMT2STAT_CPRUP_MASK                      equ 0080h
SMT2STAT_SMT2AS_POSN                     equ 0000h
SMT2STAT_SMT2AS_POSITION                 equ 0000h
SMT2STAT_SMT2AS_SIZE                     equ 0001h
SMT2STAT_SMT2AS_LENGTH                   equ 0001h
SMT2STAT_SMT2AS_MASK                     equ 0001h
SMT2STAT_SMT2WS_POSN                     equ 0001h
SMT2STAT_SMT2WS_POSITION                 equ 0001h
SMT2STAT_SMT2WS_SIZE                     equ 0001h
SMT2STAT_SMT2WS_LENGTH                   equ 0001h
SMT2STAT_SMT2WS_MASK                     equ 0002h
SMT2STAT_SMT2TS_POSN                     equ 0002h
SMT2STAT_SMT2TS_POSITION                 equ 0002h
SMT2STAT_SMT2TS_SIZE                     equ 0001h
SMT2STAT_SMT2TS_LENGTH                   equ 0001h
SMT2STAT_SMT2TS_MASK                     equ 0004h
SMT2STAT_SMT2RESET_POSN                  equ 0005h
SMT2STAT_SMT2RESET_POSITION              equ 0005h
SMT2STAT_SMT2RESET_SIZE                  equ 0001h
SMT2STAT_SMT2RESET_LENGTH                equ 0001h
SMT2STAT_SMT2RESET_MASK                  equ 0020h
SMT2STAT_SMT2CPWUP_POSN                  equ 0006h
SMT2STAT_SMT2CPWUP_POSITION              equ 0006h
SMT2STAT_SMT2CPWUP_SIZE                  equ 0001h
SMT2STAT_SMT2CPWUP_LENGTH                equ 0001h
SMT2STAT_SMT2CPWUP_MASK                  equ 0040h
SMT2STAT_SMT2CPRUP_POSN                  equ 0007h
SMT2STAT_SMT2CPRUP_POSITION              equ 0007h
SMT2STAT_SMT2CPRUP_SIZE                  equ 0001h
SMT2STAT_SMT2CPRUP_LENGTH                equ 0001h
SMT2STAT_SMT2CPRUP_MASK                  equ 0080h

// Register: SMT2CLK
#define SMT2CLK SMT2CLK
SMT2CLK                                  equ 0DADh
// bitfield definitions
SMT2CLK_CSEL_POSN                        equ 0000h
SMT2CLK_CSEL_POSITION                    equ 0000h
SMT2CLK_CSEL_SIZE                        equ 0008h
SMT2CLK_CSEL_LENGTH                      equ 0008h
SMT2CLK_CSEL_MASK                        equ 00FFh
SMT2CLK_CSEL0_POSN                       equ 0000h
SMT2CLK_CSEL0_POSITION                   equ 0000h
SMT2CLK_CSEL0_SIZE                       equ 0001h
SMT2CLK_CSEL0_LENGTH                     equ 0001h
SMT2CLK_CSEL0_MASK                       equ 0001h
SMT2CLK_CSEL1_POSN                       equ 0001h
SMT2CLK_CSEL1_POSITION                   equ 0001h
SMT2CLK_CSEL1_SIZE                       equ 0001h
SMT2CLK_CSEL1_LENGTH                     equ 0001h
SMT2CLK_CSEL1_MASK                       equ 0002h
SMT2CLK_CSEL2_POSN                       equ 0002h
SMT2CLK_CSEL2_POSITION                   equ 0002h
SMT2CLK_CSEL2_SIZE                       equ 0001h
SMT2CLK_CSEL2_LENGTH                     equ 0001h
SMT2CLK_CSEL2_MASK                       equ 0004h
SMT2CLK_SMT2CSEL_POSN                    equ 0000h
SMT2CLK_SMT2CSEL_POSITION                equ 0000h
SMT2CLK_SMT2CSEL_SIZE                    equ 0008h
SMT2CLK_SMT2CSEL_LENGTH                  equ 0008h
SMT2CLK_SMT2CSEL_MASK                    equ 00FFh
SMT2CLK_SMT2CSEL0_POSN                   equ 0000h
SMT2CLK_SMT2CSEL0_POSITION               equ 0000h
SMT2CLK_SMT2CSEL0_SIZE                   equ 0001h
SMT2CLK_SMT2CSEL0_LENGTH                 equ 0001h
SMT2CLK_SMT2CSEL0_MASK                   equ 0001h
SMT2CLK_SMT2CSEL1_POSN                   equ 0001h
SMT2CLK_SMT2CSEL1_POSITION               equ 0001h
SMT2CLK_SMT2CSEL1_SIZE                   equ 0001h
SMT2CLK_SMT2CSEL1_LENGTH                 equ 0001h
SMT2CLK_SMT2CSEL1_MASK                   equ 0002h
SMT2CLK_SMT2CSEL2_POSN                   equ 0002h
SMT2CLK_SMT2CSEL2_POSITION               equ 0002h
SMT2CLK_SMT2CSEL2_SIZE                   equ 0001h
SMT2CLK_SMT2CSEL2_LENGTH                 equ 0001h
SMT2CLK_SMT2CSEL2_MASK                   equ 0004h

// Register: SMT2SIG
#define SMT2SIG SMT2SIG
SMT2SIG                                  equ 0DAEh
// bitfield definitions
SMT2SIG_SSEL_POSN                        equ 0000h
SMT2SIG_SSEL_POSITION                    equ 0000h
SMT2SIG_SSEL_SIZE                        equ 0008h
SMT2SIG_SSEL_LENGTH                      equ 0008h
SMT2SIG_SSEL_MASK                        equ 00FFh
SMT2SIG_SSEL0_POSN                       equ 0000h
SMT2SIG_SSEL0_POSITION                   equ 0000h
SMT2SIG_SSEL0_SIZE                       equ 0001h
SMT2SIG_SSEL0_LENGTH                     equ 0001h
SMT2SIG_SSEL0_MASK                       equ 0001h
SMT2SIG_SSEL1_POSN                       equ 0001h
SMT2SIG_SSEL1_POSITION                   equ 0001h
SMT2SIG_SSEL1_SIZE                       equ 0001h
SMT2SIG_SSEL1_LENGTH                     equ 0001h
SMT2SIG_SSEL1_MASK                       equ 0002h
SMT2SIG_SSEL2_POSN                       equ 0002h
SMT2SIG_SSEL2_POSITION                   equ 0002h
SMT2SIG_SSEL2_SIZE                       equ 0001h
SMT2SIG_SSEL2_LENGTH                     equ 0001h
SMT2SIG_SSEL2_MASK                       equ 0004h
SMT2SIG_SMT2SSEL_POSN                    equ 0000h
SMT2SIG_SMT2SSEL_POSITION                equ 0000h
SMT2SIG_SMT2SSEL_SIZE                    equ 0008h
SMT2SIG_SMT2SSEL_LENGTH                  equ 0008h
SMT2SIG_SMT2SSEL_MASK                    equ 00FFh
SMT2SIG_SMT2SSEL0_POSN                   equ 0000h
SMT2SIG_SMT2SSEL0_POSITION               equ 0000h
SMT2SIG_SMT2SSEL0_SIZE                   equ 0001h
SMT2SIG_SMT2SSEL0_LENGTH                 equ 0001h
SMT2SIG_SMT2SSEL0_MASK                   equ 0001h
SMT2SIG_SMT2SSEL1_POSN                   equ 0001h
SMT2SIG_SMT2SSEL1_POSITION               equ 0001h
SMT2SIG_SMT2SSEL1_SIZE                   equ 0001h
SMT2SIG_SMT2SSEL1_LENGTH                 equ 0001h
SMT2SIG_SMT2SSEL1_MASK                   equ 0002h
SMT2SIG_SMT2SSEL2_POSN                   equ 0002h
SMT2SIG_SMT2SSEL2_POSITION               equ 0002h
SMT2SIG_SMT2SSEL2_SIZE                   equ 0001h
SMT2SIG_SMT2SSEL2_LENGTH                 equ 0001h
SMT2SIG_SMT2SSEL2_MASK                   equ 0004h

// Register: SMT2WIN
#define SMT2WIN SMT2WIN
SMT2WIN                                  equ 0DAFh
// bitfield definitions
SMT2WIN_WSEL_POSN                        equ 0000h
SMT2WIN_WSEL_POSITION                    equ 0000h
SMT2WIN_WSEL_SIZE                        equ 0008h
SMT2WIN_WSEL_LENGTH                      equ 0008h
SMT2WIN_WSEL_MASK                        equ 00FFh
SMT2WIN_WSEL0_POSN                       equ 0000h
SMT2WIN_WSEL0_POSITION                   equ 0000h
SMT2WIN_WSEL0_SIZE                       equ 0001h
SMT2WIN_WSEL0_LENGTH                     equ 0001h
SMT2WIN_WSEL0_MASK                       equ 0001h
SMT2WIN_WSEL1_POSN                       equ 0001h
SMT2WIN_WSEL1_POSITION                   equ 0001h
SMT2WIN_WSEL1_SIZE                       equ 0001h
SMT2WIN_WSEL1_LENGTH                     equ 0001h
SMT2WIN_WSEL1_MASK                       equ 0002h
SMT2WIN_WSEL2_POSN                       equ 0002h
SMT2WIN_WSEL2_POSITION                   equ 0002h
SMT2WIN_WSEL2_SIZE                       equ 0001h
SMT2WIN_WSEL2_LENGTH                     equ 0001h
SMT2WIN_WSEL2_MASK                       equ 0004h
SMT2WIN_WSEL3_POSN                       equ 0003h
SMT2WIN_WSEL3_POSITION                   equ 0003h
SMT2WIN_WSEL3_SIZE                       equ 0001h
SMT2WIN_WSEL3_LENGTH                     equ 0001h
SMT2WIN_WSEL3_MASK                       equ 0008h
SMT2WIN_SMT2WSEL_POSN                    equ 0000h
SMT2WIN_SMT2WSEL_POSITION                equ 0000h
SMT2WIN_SMT2WSEL_SIZE                    equ 0008h
SMT2WIN_SMT2WSEL_LENGTH                  equ 0008h
SMT2WIN_SMT2WSEL_MASK                    equ 00FFh
SMT2WIN_SMT2WSEL0_POSN                   equ 0000h
SMT2WIN_SMT2WSEL0_POSITION               equ 0000h
SMT2WIN_SMT2WSEL0_SIZE                   equ 0001h
SMT2WIN_SMT2WSEL0_LENGTH                 equ 0001h
SMT2WIN_SMT2WSEL0_MASK                   equ 0001h
SMT2WIN_SMT2WSEL1_POSN                   equ 0001h
SMT2WIN_SMT2WSEL1_POSITION               equ 0001h
SMT2WIN_SMT2WSEL1_SIZE                   equ 0001h
SMT2WIN_SMT2WSEL1_LENGTH                 equ 0001h
SMT2WIN_SMT2WSEL1_MASK                   equ 0002h
SMT2WIN_SMT2WSEL2_POSN                   equ 0002h
SMT2WIN_SMT2WSEL2_POSITION               equ 0002h
SMT2WIN_SMT2WSEL2_SIZE                   equ 0001h
SMT2WIN_SMT2WSEL2_LENGTH                 equ 0001h
SMT2WIN_SMT2WSEL2_MASK                   equ 0004h
SMT2WIN_SMT2WSEL3_POSN                   equ 0003h
SMT2WIN_SMT2WSEL3_POSITION               equ 0003h
SMT2WIN_SMT2WSEL3_SIZE                   equ 0001h
SMT2WIN_SMT2WSEL3_LENGTH                 equ 0001h
SMT2WIN_SMT2WSEL3_MASK                   equ 0008h

// Register: STATUS_SHAD
#define STATUS_SHAD STATUS_SHAD
STATUS_SHAD                              equ 0FE4h
// bitfield definitions
STATUS_SHAD_C_SHAD_POSN                  equ 0000h
STATUS_SHAD_C_SHAD_POSITION              equ 0000h
STATUS_SHAD_C_SHAD_SIZE                  equ 0001h
STATUS_SHAD_C_SHAD_LENGTH                equ 0001h
STATUS_SHAD_C_SHAD_MASK                  equ 0001h
STATUS_SHAD_DC_SHAD_POSN                 equ 0001h
STATUS_SHAD_DC_SHAD_POSITION             equ 0001h
STATUS_SHAD_DC_SHAD_SIZE                 equ 0001h
STATUS_SHAD_DC_SHAD_LENGTH               equ 0001h
STATUS_SHAD_DC_SHAD_MASK                 equ 0002h
STATUS_SHAD_Z_SHAD_POSN                  equ 0002h
STATUS_SHAD_Z_SHAD_POSITION              equ 0002h
STATUS_SHAD_Z_SHAD_SIZE                  equ 0001h
STATUS_SHAD_Z_SHAD_LENGTH                equ 0001h
STATUS_SHAD_Z_SHAD_MASK                  equ 0004h

// Register: WREG_SHAD
#define WREG_SHAD WREG_SHAD
WREG_SHAD                                equ 0FE5h
// bitfield definitions
WREG_SHAD_WREG_SHAD_POSN                 equ 0000h
WREG_SHAD_WREG_SHAD_POSITION             equ 0000h
WREG_SHAD_WREG_SHAD_SIZE                 equ 0008h
WREG_SHAD_WREG_SHAD_LENGTH               equ 0008h
WREG_SHAD_WREG_SHAD_MASK                 equ 00FFh

// Register: BSR_SHAD
#define BSR_SHAD BSR_SHAD
BSR_SHAD                                 equ 0FE6h
// bitfield definitions
BSR_SHAD_BSR_SHAD_POSN                   equ 0000h
BSR_SHAD_BSR_SHAD_POSITION               equ 0000h
BSR_SHAD_BSR_SHAD_SIZE                   equ 0005h
BSR_SHAD_BSR_SHAD_LENGTH                 equ 0005h
BSR_SHAD_BSR_SHAD_MASK                   equ 001Fh

// Register: PCLATH_SHAD
#define PCLATH_SHAD PCLATH_SHAD
PCLATH_SHAD                              equ 0FE7h
// bitfield definitions
PCLATH_SHAD_PCLATH_SHAD_POSN             equ 0000h
PCLATH_SHAD_PCLATH_SHAD_POSITION         equ 0000h
PCLATH_SHAD_PCLATH_SHAD_SIZE             equ 0007h
PCLATH_SHAD_PCLATH_SHAD_LENGTH           equ 0007h
PCLATH_SHAD_PCLATH_SHAD_MASK             equ 007Fh

// Register: FSR0L_SHAD
#define FSR0L_SHAD FSR0L_SHAD
FSR0L_SHAD                               equ 0FE8h
// bitfield definitions
FSR0L_SHAD_FSR0L_SHAD_POSN               equ 0000h
FSR0L_SHAD_FSR0L_SHAD_POSITION           equ 0000h
FSR0L_SHAD_FSR0L_SHAD_SIZE               equ 0008h
FSR0L_SHAD_FSR0L_SHAD_LENGTH             equ 0008h
FSR0L_SHAD_FSR0L_SHAD_MASK               equ 00FFh

// Register: FSR0H_SHAD
#define FSR0H_SHAD FSR0H_SHAD
FSR0H_SHAD                               equ 0FE9h
// bitfield definitions
FSR0H_SHAD_FSR0H_SHAD_POSN               equ 0000h
FSR0H_SHAD_FSR0H_SHAD_POSITION           equ 0000h
FSR0H_SHAD_FSR0H_SHAD_SIZE               equ 0008h
FSR0H_SHAD_FSR0H_SHAD_LENGTH             equ 0008h
FSR0H_SHAD_FSR0H_SHAD_MASK               equ 00FFh

// Register: FSR1L_SHAD
#define FSR1L_SHAD FSR1L_SHAD
FSR1L_SHAD                               equ 0FEAh
// bitfield definitions
FSR1L_SHAD_FSR1L_SHAD_POSN               equ 0000h
FSR1L_SHAD_FSR1L_SHAD_POSITION           equ 0000h
FSR1L_SHAD_FSR1L_SHAD_SIZE               equ 0008h
FSR1L_SHAD_FSR1L_SHAD_LENGTH             equ 0008h
FSR1L_SHAD_FSR1L_SHAD_MASK               equ 00FFh

// Register: FSR1H_SHAD
#define FSR1H_SHAD FSR1H_SHAD
FSR1H_SHAD                               equ 0FEBh
// bitfield definitions
FSR1H_SHAD_FSR1H_SHAD_POSN               equ 0000h
FSR1H_SHAD_FSR1H_SHAD_POSITION           equ 0000h
FSR1H_SHAD_FSR1H_SHAD_SIZE               equ 0008h
FSR1H_SHAD_FSR1H_SHAD_LENGTH             equ 0008h
FSR1H_SHAD_FSR1H_SHAD_MASK               equ 00FFh

// Register: STKPTR
#define STKPTR STKPTR
STKPTR                                   equ 0FEDh
// bitfield definitions
STKPTR_STKPTR_POSN                       equ 0000h
STKPTR_STKPTR_POSITION                   equ 0000h
STKPTR_STKPTR_SIZE                       equ 0005h
STKPTR_STKPTR_LENGTH                     equ 0005h
STKPTR_STKPTR_MASK                       equ 001Fh

// Register: TOSL
#define TOSL TOSL
TOSL                                     equ 0FEEh
// bitfield definitions
TOSL_TOSL_POSN                           equ 0000h
TOSL_TOSL_POSITION                       equ 0000h
TOSL_TOSL_SIZE                           equ 0008h
TOSL_TOSL_LENGTH                         equ 0008h
TOSL_TOSL_MASK                           equ 00FFh

// Register: TOSH
#define TOSH TOSH
TOSH                                     equ 0FEFh
// bitfield definitions
TOSH_TOSH_POSN                           equ 0000h
TOSH_TOSH_POSITION                       equ 0000h
TOSH_TOSH_SIZE                           equ 0007h
TOSH_TOSH_LENGTH                         equ 0007h
TOSH_TOSH_MASK                           equ 007Fh

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ACC0                             BANKMASK(CRCACCL), 0
#define ACC1                             BANKMASK(CRCACCL), 1
#define ACC10                            BANKMASK(CRCACCH), 2
#define ACC11                            BANKMASK(CRCACCH), 3
#define ACC12                            BANKMASK(CRCACCH), 4
#define ACC13                            BANKMASK(CRCACCH), 5
#define ACC14                            BANKMASK(CRCACCH), 6
#define ACC15                            BANKMASK(CRCACCH), 7
#define ACC2                             BANKMASK(CRCACCL), 2
#define ACC3                             BANKMASK(CRCACCL), 3
#define ACC4                             BANKMASK(CRCACCL), 4
#define ACC5                             BANKMASK(CRCACCL), 5
#define ACC6                             BANKMASK(CRCACCL), 6
#define ACC7                             BANKMASK(CRCACCL), 7
#define ACC8                             BANKMASK(CRCACCH), 0
#define ACC9                             BANKMASK(CRCACCH), 1
#define ACCM                             BANKMASK(CRCCON0), 4
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADFM                             BANKMASK(ADCON1), 7
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADGO                             BANKMASK(ADCON0), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ADPREF0                          BANKMASK(ADCON1), 0
#define ADPREF1                          BANKMASK(ADCON1), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSC0                            BANKMASK(ANSELC), 0
#define ANSC1                            BANKMASK(ANSELC), 1
#define ANSC2                            BANKMASK(ANSELC), 2
#define ANSC3                            BANKMASK(ANSELC), 3
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define C1AS                             BANKMASK(CWG1AS1), 1
#define C1HYS                            BANKMASK(CM1CON0), 1
#define C1IE                             BANKMASK(PIE2), 5
#define C1IF                             BANKMASK(PIR2), 5
#define C1INTN                           BANKMASK(CM1CON1), 6
#define C1INTP                           BANKMASK(CM1CON1), 7
#define C1NCH0                           BANKMASK(CM1CON1), 0
#define C1NCH1                           BANKMASK(CM1CON1), 1
#define C1NCH2                           BANKMASK(CM1CON1), 2
#define C1OE                             BANKMASK(CM1CON0), 5
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1PCH0                           BANKMASK(CM1CON1), 4
#define C1PCH1                           BANKMASK(CM1CON1), 5
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1SP                             BANKMASK(CM1CON0), 2
#define C1SYNC                           BANKMASK(CM1CON0), 0
#define C2AS                             BANKMASK(CWG1AS1), 2
#define C2HYS                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE2), 6
#define C2IF                             BANKMASK(PIR2), 6
#define C2INTN                           BANKMASK(CM2CON1), 6
#define C2INTP                           BANKMASK(CM2CON1), 7
#define C2NCH0                           BANKMASK(CM2CON1), 0
#define C2NCH1                           BANKMASK(CM2CON1), 1
#define C2NCH2                           BANKMASK(CM2CON1), 2
#define C2OE                             BANKMASK(CM2CON0), 5
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2PCH0                           BANKMASK(CM2CON1), 4
#define C2PCH1                           BANKMASK(CM2CON1), 5
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2SP                             BANKMASK(CM2CON0), 2
#define C2SYNC                           BANKMASK(CM2CON0), 0
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1CTS0                         BANKMASK(CCP1CAP), 0
#define CCP1CTS1                         BANKMASK(CCP1CAP), 1
#define CCP1EN                           BANKMASK(CCP1CON), 7
#define CCP1FMT                          BANKMASK(CCP1CON), 4
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1MODE0                        BANKMASK(CCP1CON), 0
#define CCP1MODE1                        BANKMASK(CCP1CON), 1
#define CCP1MODE2                        BANKMASK(CCP1CON), 2
#define CCP1MODE3                        BANKMASK(CCP1CON), 3
#define CCP1OE                           BANKMASK(CCP1CON), 6
#define CCP1OUT                          BANKMASK(CCP1CON), 5
#define CCP1TSEL0                        BANKMASK(CCPTMRS), 0
#define CCP1TSEL1                        BANKMASK(CCPTMRS), 1
#define CCP2CTS0                         BANKMASK(CCP2CAP), 0
#define CCP2CTS1                         BANKMASK(CCP2CAP), 1
#define CCP2EN                           BANKMASK(CCP2CON), 7
#define CCP2FMT                          BANKMASK(CCP2CON), 4
#define CCP2IE                           BANKMASK(PIE2), 0
#define CCP2IF                           BANKMASK(PIR2), 0
#define CCP2MODE0                        BANKMASK(CCP2CON), 0
#define CCP2MODE1                        BANKMASK(CCP2CON), 1
#define CCP2MODE2                        BANKMASK(CCP2CON), 2
#define CCP2MODE3                        BANKMASK(CCP2CON), 3
#define CCP2OE                           BANKMASK(CCP2CON), 6
#define CCP2OUT                          BANKMASK(CCP2CON), 5
#define CCP2SEL                          BANKMASK(APFCON), 1
#define CCP2TSEL0                        BANKMASK(CCPTMRS), 2
#define CCP2TSEL1                        BANKMASK(CCPTMRS), 3
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CFGS                             BANKMASK(PMCON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CRCACC0                          BANKMASK(CRCACCL), 0
#define CRCACC1                          BANKMASK(CRCACCL), 1
#define CRCACC10                         BANKMASK(CRCACCH), 2
#define CRCACC11                         BANKMASK(CRCACCH), 3
#define CRCACC12                         BANKMASK(CRCACCH), 4
#define CRCACC13                         BANKMASK(CRCACCH), 5
#define CRCACC14                         BANKMASK(CRCACCH), 6
#define CRCACC15                         BANKMASK(CRCACCH), 7
#define CRCACC2                          BANKMASK(CRCACCL), 2
#define CRCACC3                          BANKMASK(CRCACCL), 3
#define CRCACC4                          BANKMASK(CRCACCL), 4
#define CRCACC5                          BANKMASK(CRCACCL), 5
#define CRCACC6                          BANKMASK(CRCACCL), 6
#define CRCACC7                          BANKMASK(CRCACCL), 7
#define CRCACC8                          BANKMASK(CRCACCH), 0
#define CRCACC9                          BANKMASK(CRCACCH), 1
#define CRCACCM                          BANKMASK(CRCCON0), 4
#define CRCBUSY                          BANKMASK(CRCCON0), 5
#define CRCDAT0                          BANKMASK(CRCDATL), 0
#define CRCDAT1                          BANKMASK(CRCDATL), 1
#define CRCDAT10                         BANKMASK(CRCDATH), 2
#define CRCDAT11                         BANKMASK(CRCDATH), 3
#define CRCDAT12                         BANKMASK(CRCDATH), 4
#define CRCDAT13                         BANKMASK(CRCDATH), 5
#define CRCDAT14                         BANKMASK(CRCDATH), 6
#define CRCDAT15                         BANKMASK(CRCDATH), 7
#define CRCDAT2                          BANKMASK(CRCDATL), 2
#define CRCDAT3                          BANKMASK(CRCDATL), 3
#define CRCDAT4                          BANKMASK(CRCDATL), 4
#define CRCDAT5                          BANKMASK(CRCDATL), 5
#define CRCDAT6                          BANKMASK(CRCDATL), 6
#define CRCDAT8                          BANKMASK(CRCDATH), 0
#define CRCDAT9                          BANKMASK(CRCDATH), 1
#define CRCDLEN0                         BANKMASK(CRCCON1), 4
#define CRCDLEN1                         BANKMASK(CRCCON1), 5
#define CRCDLEN2                         BANKMASK(CRCCON1), 6
#define CRCDLEN3                         BANKMASK(CRCCON1), 7
#define CRCEN                            BANKMASK(CRCCON0), 7
#define CRCFULL                          BANKMASK(CRCCON0), 0
#define CRCGO                            BANKMASK(CRCCON0), 6
#define CRCIE                            BANKMASK(PIE4), 6
#define CRCIF                            BANKMASK(PIR4), 6
#define CRCPLEN0                         BANKMASK(CRCCON1), 0
#define CRCPLEN1                         BANKMASK(CRCCON1), 1
#define CRCPLEN2                         BANKMASK(CRCCON1), 2
#define CRCPLEN3                         BANKMASK(CRCCON1), 3
#define CRCSHIFT0                        BANKMASK(CRCSHIFTL), 0
#define CRCSHIFT1                        BANKMASK(CRCSHIFTL), 1
#define CRCSHIFT10                       BANKMASK(CRCSHIFTH), 2
#define CRCSHIFT11                       BANKMASK(CRCSHIFTH), 3
#define CRCSHIFT12                       BANKMASK(CRCSHIFTH), 4
#define CRCSHIFT13                       BANKMASK(CRCSHIFTH), 5
#define CRCSHIFT14                       BANKMASK(CRCSHIFTH), 6
#define CRCSHIFT15                       BANKMASK(CRCSHIFTH), 7
#define CRCSHIFT2                        BANKMASK(CRCSHIFTL), 2
#define CRCSHIFT3                        BANKMASK(CRCSHIFTL), 3
#define CRCSHIFT4                        BANKMASK(CRCSHIFTL), 4
#define CRCSHIFT5                        BANKMASK(CRCSHIFTL), 5
#define CRCSHIFT6                        BANKMASK(CRCSHIFTL), 6
#define CRCSHIFT7                        BANKMASK(CRCSHIFTL), 7
#define CRCSHIFT8                        BANKMASK(CRCSHIFTH), 0
#define CRCSHIFT9                        BANKMASK(CRCSHIFTH), 1
#define CRCSHIFTM                        BANKMASK(CRCCON0), 1
#define CRCXOR1                          BANKMASK(CRCXORL), 1
#define CRCXOR10                         BANKMASK(CRCXORH), 2
#define CRCXOR11                         BANKMASK(CRCXORH), 3
#define CRCXOR12                         BANKMASK(CRCXORH), 4
#define CRCXOR13                         BANKMASK(CRCXORH), 5
#define CRCXOR14                         BANKMASK(CRCXORH), 6
#define CRCXOR15                         BANKMASK(CRCXORH), 7
#define CRCXOR2                          BANKMASK(CRCXORL), 2
#define CRCXOR3                          BANKMASK(CRCXORL), 3
#define CRCXOR4                          BANKMASK(CRCXORL), 4
#define CRCXOR5                          BANKMASK(CRCXORL), 5
#define CRCXOR6                          BANKMASK(CRCXORL), 6
#define CRCXOR7                          BANKMASK(CRCXORL), 7
#define CRCXOR8                          BANKMASK(CRCXORH), 0
#define CRCXOR9                          BANKMASK(CRCXORH), 1
#define CRDCDAT7                         BANKMASK(CRCDATL), 7
#define CS                               BANKMASK(CWG1CLKCON), 0
#define CWG1C1AS                         BANKMASK(CWG1AS1), 1
#define CWG1C2AS                         BANKMASK(CWG1AS1), 2
#define CWG1CS                           BANKMASK(CWG1CLKCON), 0
#define CWG1DBF0                         BANKMASK(CWG1DBF), 0
#define CWG1DBF1                         BANKMASK(CWG1DBF), 1
#define CWG1DBF2                         BANKMASK(CWG1DBF), 2
#define CWG1DBF3                         BANKMASK(CWG1DBF), 3
#define CWG1DBF4                         BANKMASK(CWG1DBF), 4
#define CWG1DBF5                         BANKMASK(CWG1DBF), 5
#define CWG1DBR0                         BANKMASK(CWG1DBR), 0
#define CWG1DBR1                         BANKMASK(CWG1DBR), 1
#define CWG1DBR2                         BANKMASK(CWG1DBR), 2
#define CWG1DBR3                         BANKMASK(CWG1DBR), 3
#define CWG1DBR4                         BANKMASK(CWG1DBR), 4
#define CWG1DBR5                         BANKMASK(CWG1DBR), 5
#define CWG1EN                           BANKMASK(CWG1CON0), 7
#define CWG1IN                           BANKMASK(CWG1CON1), 5
#define CWG1INAS                         BANKMASK(CWG1AS1), 0
#define CWG1IS0                          BANKMASK(CWG1ISM), 0
#define CWG1IS1                          BANKMASK(CWG1ISM), 1
#define CWG1IS2                          BANKMASK(CWG1ISM), 2
#define CWG1LD                           BANKMASK(CWG1CON0), 6
#define CWG1LSAC0                        BANKMASK(CWG1AS0), 2
#define CWG1LSAC1                        BANKMASK(CWG1AS0), 3
#define CWG1LSBD0                        BANKMASK(CWG1AS0), 4
#define CWG1LSBD1                        BANKMASK(CWG1AS0), 5
#define CWG1MODE0                        BANKMASK(CWG1CON0), 0
#define CWG1MODE1                        BANKMASK(CWG1CON0), 1
#define CWG1MODE2                        BANKMASK(CWG1CON0), 2
#define CWG1OEA                          BANKMASK(CWG1OCON1), 0
#define CWG1OEB                          BANKMASK(CWG1OCON1), 1
#define CWG1OEC                          BANKMASK(CWG1OCON1), 2
#define CWG1OED                          BANKMASK(CWG1OCON1), 3
#define CWG1OVRA                         BANKMASK(CWG1OCON0), 4
#define CWG1OVRB                         BANKMASK(CWG1OCON0), 5
#define CWG1OVRC                         BANKMASK(CWG1OCON0), 6
#define CWG1OVRD                         BANKMASK(CWG1OCON0), 7
#define CWG1POLA                         BANKMASK(CWG1CON1), 0
#define CWG1POLB                         BANKMASK(CWG1CON1), 1
#define CWG1POLC                         BANKMASK(CWG1CON1), 2
#define CWG1POLD                         BANKMASK(CWG1CON1), 3
#define CWG1REN                          BANKMASK(CWG1AS0), 6
#define CWG1SHUTDOWN                     BANKMASK(CWG1AS0), 7
#define CWG1STRA                         BANKMASK(CWG1OCON0), 0
#define CWG1STRB                         BANKMASK(CWG1OCON0), 1
#define CWG1STRC                         BANKMASK(CWG1OCON0), 2
#define CWG1STRD                         BANKMASK(CWG1OCON0), 3
#define CWG1TMR2AS                       BANKMASK(CWG1AS1), 4
#define CWG1TMR4AS                       BANKMASK(CWG1AS1), 5
#define CWG1TMR6AS                       BANKMASK(CWG1AS1), 6
#define CWGIE                            BANKMASK(PIE3), 5
#define CWGIF                            BANKMASK(PIR3), 5
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define D1PSS0                           BANKMASK(DAC1CON0), 2
#define D1PSS1                           BANKMASK(DAC1CON0), 3
#define DAC1EN                           BANKMASK(DAC1CON0), 7
#define DAC1OE                           BANKMASK(DAC1CON0), 5
#define DAC1R0                           BANKMASK(DAC1CON1), 0
#define DAC1R1                           BANKMASK(DAC1CON1), 1
#define DAC1R2                           BANKMASK(DAC1CON1), 2
#define DAC1R3                           BANKMASK(DAC1CON1), 3
#define DAC1R4                           BANKMASK(DAC1CON1), 4
#define DAC1R5                           BANKMASK(DAC1CON1), 5
#define DAC1R6                           BANKMASK(DAC1CON1), 6
#define DAC1R7                           BANKMASK(DAC1CON1), 7
#define DAT0                             BANKMASK(CRCDATL), 0
#define DAT1                             BANKMASK(CRCDATL), 1
#define DAT10                            BANKMASK(CRCDATH), 2
#define DAT11                            BANKMASK(CRCDATH), 3
#define DAT12                            BANKMASK(CRCDATH), 4
#define DAT13                            BANKMASK(CRCDATH), 5
#define DAT14                            BANKMASK(CRCDATH), 6
#define DAT15                            BANKMASK(CRCDATH), 7
#define DAT2                             BANKMASK(CRCDATL), 2
#define DAT3                             BANKMASK(CRCDATL), 3
#define DAT4                             BANKMASK(CRCDATL), 4
#define DAT5                             BANKMASK(CRCDATL), 5
#define DAT6                             BANKMASK(CRCDATL), 6
#define DAT7                             BANKMASK(CRCDATL), 7
#define DAT8                             BANKMASK(CRCDATH), 0
#define DAT9                             BANKMASK(CRCDATH), 1
#define DBF0                             BANKMASK(CWG1DBF), 0
#define DBF1                             BANKMASK(CWG1DBF), 1
#define DBF2                             BANKMASK(CWG1DBF), 2
#define DBF3                             BANKMASK(CWG1DBF), 3
#define DBF4                             BANKMASK(CWG1DBF), 4
#define DBF5                             BANKMASK(CWG1DBF), 5
#define DBR0                             BANKMASK(CWG1DBR), 0
#define DBR1                             BANKMASK(CWG1DBR), 1
#define DBR2                             BANKMASK(CWG1DBR), 2
#define DBR3                             BANKMASK(CWG1DBR), 3
#define DBR4                             BANKMASK(CWG1DBR), 4
#define DBR5                             BANKMASK(CWG1DBR), 5
#define DC                               BANKMASK(STATUS), 1
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define DLEN0                            BANKMASK(CRCCON1), 4
#define DLEN1                            BANKMASK(CRCCON1), 5
#define DLEN2                            BANKMASK(CRCCON1), 6
#define DLEN3                            BANKMASK(CRCCON1), 7
#define FREE                             BANKMASK(PMCON1), 4
#define FULL                             BANKMASK(CRCCON0), 0
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define G1EN                             BANKMASK(CWG1CON0), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define HADR0                            BANKMASK(SCANHADRL), 0
#define HADR1                            BANKMASK(SCANHADRL), 1
#define HADR10                           BANKMASK(SCANHADRH), 2
#define HADR11                           BANKMASK(SCANHADRH), 3
#define HADR12                           BANKMASK(SCANHADRH), 4
#define HADR13                           BANKMASK(SCANHADRH), 5
#define HADR14                           BANKMASK(SCANHADRH), 6
#define HADR15                           BANKMASK(SCANHADRH), 7
#define HADR3                            BANKMASK(SCANHADRL), 3
#define HADR4                            BANKMASK(SCANHADRL), 4
#define HADR5                            BANKMASK(SCANHADRL), 5
#define HADR6                            BANKMASK(SCANHADRL), 6
#define HADR7                            BANKMASK(SCANHADRL), 7
#define HADR8                            BANKMASK(SCANHADRH), 0
#define HADR9                            BANKMASK(SCANHADRH), 1
#define HARD2                            BANKMASK(SCANHADRL), 2
#define HFIOFL                           BANKMASK(OSCSTAT), 3
#define HFIOFR                           BANKMASK(OSCSTAT), 4
#define HFIOFS                           BANKMASK(OSCSTAT), 0
#define IN                               BANKMASK(CWG1CON1), 5
#define INAS                             BANKMASK(CWG1AS1), 0
#define INLVLA0                          BANKMASK(INLVLA), 0
#define INLVLA1                          BANKMASK(INLVLA), 1
#define INLVLA2                          BANKMASK(INLVLA), 2
#define INLVLA3                          BANKMASK(INLVLA), 3
#define INLVLA4                          BANKMASK(INLVLA), 4
#define INLVLA5                          BANKMASK(INLVLA), 5
#define INLVLC0                          BANKMASK(INLVLC), 0
#define INLVLC1                          BANKMASK(INLVLC), 1
#define INLVLC2                          BANKMASK(INLVLC), 2
#define INLVLC3                          BANKMASK(INLVLC), 3
#define INLVLC4                          BANKMASK(INLVLC), 4
#define INLVLC5                          BANKMASK(INLVLC), 5
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define INTM                             BANKMASK(SCANCON0), 3
#define INVALID                          BANKMASK(SCANCON0), 4
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
#define IOCCF0                           BANKMASK(IOCCF), 0
#define IOCCF1                           BANKMASK(IOCCF), 1
#define IOCCF2                           BANKMASK(IOCCF), 2
#define IOCCF3                           BANKMASK(IOCCF), 3
#define IOCCF4                           BANKMASK(IOCCF), 4
#define IOCCF5                           BANKMASK(IOCCF), 5
#define IOCCN0                           BANKMASK(IOCCN), 0
#define IOCCN1                           BANKMASK(IOCCN), 1
#define IOCCN2                           BANKMASK(IOCCN), 2
#define IOCCN3                           BANKMASK(IOCCN), 3
#define IOCCN4                           BANKMASK(IOCCN), 4
#define IOCCN5                           BANKMASK(IOCCN), 5
#define IOCCP0                           BANKMASK(IOCCP), 0
#define IOCCP1                           BANKMASK(IOCCP), 1
#define IOCCP2                           BANKMASK(IOCCP), 2
#define IOCCP3                           BANKMASK(IOCCP), 3
#define IOCCP4                           BANKMASK(IOCCP), 4
#define IOCCP5                           BANKMASK(IOCCP), 5
#define IOCIE                            BANKMASK(INTCON), 3
#define IOCIF                            BANKMASK(INTCON), 0
#define IRCF0                            BANKMASK(OSCCON), 3
#define IRCF1                            BANKMASK(OSCCON), 4
#define IRCF2                            BANKMASK(OSCCON), 5
#define IRCF3                            BANKMASK(OSCCON), 6
#define IS0                              BANKMASK(CWG1ISM), 0
#define IS1                              BANKMASK(CWG1ISM), 1
#define IS2                              BANKMASK(CWG1ISM), 2
#define LADR10                           BANKMASK(SCANLADRH), 2
#define LADR11                           BANKMASK(SCANLADRH), 3
#define LADR12                           BANKMASK(SCANLADRH), 4
#define LADR13                           BANKMASK(SCANLADRH), 5
#define LADR14                           BANKMASK(SCANLADRH), 6
#define LADR15                           BANKMASK(SCANLADRH), 7
#define LADR2                            BANKMASK(SCANLADRL), 2
#define LADR3                            BANKMASK(SCANLADRL), 3
#define LADR4                            BANKMASK(SCANLADRL), 4
#define LADR5                            BANKMASK(SCANLADRL), 5
#define LADR6                            BANKMASK(SCANLADRL), 6
#define LADR7                            BANKMASK(SCANLADRL), 7
#define LADR8                            BANKMASK(SCANLADRH), 0
#define LADR9                            BANKMASK(SCANLADRH), 1
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA3                            BANKMASK(LATA), 3
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
#define LATC0                            BANKMASK(LATC), 0
#define LATC1                            BANKMASK(LATC), 1
#define LATC2                            BANKMASK(LATC), 2
#define LATC3                            BANKMASK(LATC), 3
#define LATC4                            BANKMASK(LATC), 4
#define LATC5                            BANKMASK(LATC), 5
#define LD                               BANKMASK(CWG1CON0), 6
#define LDAR0                            BANKMASK(SCANLADRL), 0
#define LDAR1                            BANKMASK(SCANLADRL), 1
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LSAC0                            BANKMASK(CWG1AS0), 2
#define LSAC1                            BANKMASK(CWG1AS0), 3
#define LSBD0                            BANKMASK(CWG1AS0), 4
#define LSBD1                            BANKMASK(CWG1AS0), 5
#define LWLO                             BANKMASK(PMCON1), 5
#define MC1OUT                           BANKMASK(CMOUT), 0
#define MC2OUT                           BANKMASK(CMOUT), 1
#define MFIOFR                           BANKMASK(OSCSTAT), 2
#define ODA0                             BANKMASK(ODCONA), 0
#define ODA1                             BANKMASK(ODCONA), 1
#define ODA2                             BANKMASK(ODCONA), 2
#define ODA4                             BANKMASK(ODCONA), 4
#define ODA5                             BANKMASK(ODCONA), 5
#define ODC0                             BANKMASK(ODCONC), 0
#define ODC1                             BANKMASK(ODCONC), 1
#define ODC2                             BANKMASK(ODCONC), 2
#define ODC3                             BANKMASK(ODCONC), 3
#define ODC4                             BANKMASK(ODCONC), 4
#define ODC5                             BANKMASK(ODCONC), 5
#define OEA                              BANKMASK(CWG1OCON1), 0
#define OEB                              BANKMASK(CWG1OCON1), 1
#define OEC                              BANKMASK(CWG1OCON1), 2
#define OED                              BANKMASK(CWG1OCON1), 3
#define OVRA                             BANKMASK(CWG1OCON0), 4
#define OVRB                             BANKMASK(CWG1OCON0), 5
#define OVRC                             BANKMASK(CWG1OCON0), 6
#define OVRD                             BANKMASK(CWG1OCON0), 7
#define PEIE                             BANKMASK(INTCON), 6
#define PLEN0                            BANKMASK(CRCCON1), 0
#define PLEN1                            BANKMASK(CRCCON1), 1
#define PLEN2                            BANKMASK(CRCCON1), 2
#define PLEN3                            BANKMASK(CRCCON1), 3
#define PLLR                             BANKMASK(OSCSTAT), 6
#define POLA                             BANKMASK(CWG1CON1), 0
#define POLB                             BANKMASK(CWG1CON1), 1
#define POLC                             BANKMASK(CWG1CON1), 2
#define POLD                             BANKMASK(CWG1CON1), 3
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PSCNT0                           BANKMASK(WDTPSL), 0
#define PSCNT1                           BANKMASK(WDTPSL), 1
#define PSCNT10                          BANKMASK(WDTPSH), 2
#define PSCNT11                          BANKMASK(WDTPSH), 3
#define PSCNT12                          BANKMASK(WDTPSH), 4
#define PSCNT13                          BANKMASK(WDTPSH), 5
#define PSCNT14                          BANKMASK(WDTPSH), 6
#define PSCNT15                          BANKMASK(WDTPSH), 7
#define PSCNT16                          BANKMASK(WDTTMR), 0
#define PSCNT17                          BANKMASK(WDTTMR), 1
#define PSCNT2                           BANKMASK(WDTPSL), 2
#define PSCNT3                           BANKMASK(WDTPSL), 3
#define PSCNT4                           BANKMASK(WDTPSL), 4
#define PSCNT5                           BANKMASK(WDTPSL), 5
#define PSCNT6                           BANKMASK(WDTPSL), 6
#define PSCNT7                           BANKMASK(WDTPSL), 7
#define PSCNT8                           BANKMASK(WDTPSH), 0
#define PSCNT9                           BANKMASK(WDTPSH), 1
#define RA0                              BANKMASK(PORTA), 0
#define RA1                              BANKMASK(PORTA), 1
#define RA2                              BANKMASK(PORTA), 2
#define RA3                              BANKMASK(PORTA), 3
#define RA4                              BANKMASK(PORTA), 4
#define RA5                              BANKMASK(PORTA), 5
#define RC0                              BANKMASK(PORTC), 0
#define RC1                              BANKMASK(PORTC), 1
#define RC2                              BANKMASK(PORTC), 2
#define RC3                              BANKMASK(PORTC), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC5                              BANKMASK(PORTC), 5
#define RD                               BANKMASK(PMCON1), 0
#define REN                              BANKMASK(CWG1AS0), 6
#define SBOREN                           BANKMASK(BORCON), 7
#define SCANBUSY                         BANKMASK(SCANCON0), 5
#define SCANEN                           BANKMASK(SCANCON0), 7
#define SCANGO                           BANKMASK(SCANCON0), 6
#define SCANHADR0                        BANKMASK(SCANHADRL), 0
#define SCANHADR1                        BANKMASK(SCANHADRL), 1
#define SCANHADR10                       BANKMASK(SCANHADRH), 2
#define SCANHADR11                       BANKMASK(SCANHADRH), 3
#define SCANHADR12                       BANKMASK(SCANHADRH), 4
#define SCANHADR13                       BANKMASK(SCANHADRH), 5
#define SCANHADR14                       BANKMASK(SCANHADRH), 6
#define SCANHADR15                       BANKMASK(SCANHADRH), 7
#define SCANHADR2                        BANKMASK(SCANHADRL), 2
#define SCANHADR3                        BANKMASK(SCANHADRL), 3
#define SCANHADR4                        BANKMASK(SCANHADRL), 4
#define SCANHADR5                        BANKMASK(SCANHADRL), 5
#define SCANHADR6                        BANKMASK(SCANHADRL), 6
#define SCANHADR7                        BANKMASK(SCANHADRL), 7
#define SCANHADR8                        BANKMASK(SCANHADRH), 0
#define SCANHADR9                        BANKMASK(SCANHADRH), 1
#define SCANIE                           BANKMASK(PIE4), 7
#define SCANIF                           BANKMASK(PIR4), 7
#define SCANINTM                         BANKMASK(SCANCON0), 3
#define SCANINVALID                      BANKMASK(SCANCON0), 4
#define SCANLADR0                        BANKMASK(SCANLADRL), 0
#define SCANLADR1                        BANKMASK(SCANLADRL), 1
#define SCANLADR10                       BANKMASK(SCANLADRH), 2
#define SCANLADR11                       BANKMASK(SCANLADRH), 3
#define SCANLADR12                       BANKMASK(SCANLADRH), 4
#define SCANLADR13                       BANKMASK(SCANLADRH), 5
#define SCANLADR14                       BANKMASK(SCANLADRH), 6
#define SCANLADR15                       BANKMASK(SCANLADRH), 7
#define SCANLADR2                        BANKMASK(SCANLADRL), 2
#define SCANLADR3                        BANKMASK(SCANLADRL), 3
#define SCANLADR4                        BANKMASK(SCANLADRL), 4
#define SCANLADR5                        BANKMASK(SCANLADRL), 5
#define SCANLADR6                        BANKMASK(SCANLADRL), 6
#define SCANLADR7                        BANKMASK(SCANLADRL), 7
#define SCANLADR8                        BANKMASK(SCANLADRH), 0
#define SCANLADR9                        BANKMASK(SCANLADRH), 1
#define SCANMODE0                        BANKMASK(SCANCON0), 0
#define SCANMODE1                        BANKMASK(SCANCON0), 1
#define SCANTSEL0                        BANKMASK(SCANTRIG), 0
#define SCANTSEL1                        BANKMASK(SCANTRIG), 1
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SEN                              BANKMASK(WDTCON0), 0
#define SHIFT0                           BANKMASK(CRCSHIFTL), 0
#define SHIFT1                           BANKMASK(CRCSHIFTL), 1
#define SHIFT10                          BANKMASK(CRCSHIFTH), 2
#define SHIFT11                          BANKMASK(CRCSHIFTH), 3
#define SHIFT12                          BANKMASK(CRCSHIFTH), 4
#define SHIFT13                          BANKMASK(CRCSHIFTH), 5
#define SHIFT14                          BANKMASK(CRCSHIFTH), 6
#define SHIFT15                          BANKMASK(CRCSHIFTH), 7
#define SHIFT2                           BANKMASK(CRCSHIFTL), 2
#define SHIFT3                           BANKMASK(CRCSHIFTL), 3
#define SHIFT4                           BANKMASK(CRCSHIFTL), 4
#define SHIFT5                           BANKMASK(CRCSHIFTL), 5
#define SHIFT6                           BANKMASK(CRCSHIFTL), 6
#define SHIFT7                           BANKMASK(CRCSHIFTL), 7
#define SHIFT8                           BANKMASK(CRCSHIFTH), 0
#define SHIFT9                           BANKMASK(CRCSHIFTH), 1
#define SHIFTM                           BANKMASK(CRCCON0), 1
#define SHUTDOWN                         BANKMASK(CWG1AS0), 7
#define SLRA0                            BANKMASK(SLRCONA), 0
#define SLRA1                            BANKMASK(SLRCONA), 1
#define SLRA2                            BANKMASK(SLRCONA), 2
#define SLRA4                            BANKMASK(SLRCONA), 4
#define SLRA5                            BANKMASK(SLRCONA), 5
#define SLRC0                            BANKMASK(SLRCONC), 0
#define SLRC1                            BANKMASK(SLRCONC), 1
#define SLRC2                            BANKMASK(SLRCONC), 2
#define SLRC3                            BANKMASK(SLRCONC), 3
#define SLRC4                            BANKMASK(SLRCONC), 4
#define SLRC5                            BANKMASK(SLRCONC), 5
#define SMT1AS                           BANKMASK(SMT1STAT), 0
#define SMT1CPR0                         BANKMASK(SMT1CPRL), 0
#define SMT1CPR1                         BANKMASK(SMT1CPRL), 1
#define SMT1CPR10                        BANKMASK(SMT1CPRH), 2
#define SMT1CPR11                        BANKMASK(SMT1CPRH), 3
#define SMT1CPR12                        BANKMASK(SMT1CPRH), 4
#define SMT1CPR13                        BANKMASK(SMT1CPRH), 5
#define SMT1CPR14                        BANKMASK(SMT1CPRH), 6
#define SMT1CPR15                        BANKMASK(SMT1CPRH), 7
#define SMT1CPR16                        BANKMASK(SMT1CPRU), 0
#define SMT1CPR17                        BANKMASK(SMT1CPRU), 1
#define SMT1CPR18                        BANKMASK(SMT1CPRU), 2
#define SMT1CPR19                        BANKMASK(SMT1CPRU), 3
#define SMT1CPR2                         BANKMASK(SMT1CPRL), 2
#define SMT1CPR20                        BANKMASK(SMT1CPRU), 4
#define SMT1CPR21                        BANKMASK(SMT1CPRU), 5
#define SMT1CPR22                        BANKMASK(SMT1CPRU), 6
#define SMT1CPR23                        BANKMASK(SMT1CPRU), 7
#define SMT1CPR3                         BANKMASK(SMT1CPRL), 3
#define SMT1CPR4                         BANKMASK(SMT1CPRL), 4
#define SMT1CPR5                         BANKMASK(SMT1CPRL), 5
#define SMT1CPR6                         BANKMASK(SMT1CPRL), 6
#define SMT1CPR7                         BANKMASK(SMT1CPRL), 7
#define SMT1CPR8                         BANKMASK(SMT1CPRH), 0
#define SMT1CPR9                         BANKMASK(SMT1CPRH), 1
#define SMT1CPRUP                        BANKMASK(SMT1STAT), 7
#define SMT1CPW0                         BANKMASK(SMT1CPWL), 0
#define SMT1CPW1                         BANKMASK(SMT1CPWL), 1
#define SMT1CPW10                        BANKMASK(SMT1CPWH), 2
#define SMT1CPW11                        BANKMASK(SMT1CPWH), 3
#define SMT1CPW12                        BANKMASK(SMT1CPWH), 4
#define SMT1CPW13                        BANKMASK(SMT1CPWH), 5
#define SMT1CPW14                        BANKMASK(SMT1CPWH), 6
#define SMT1CPW15                        BANKMASK(SMT1CPWH), 7
#define SMT1CPW16                        BANKMASK(SMT1CPWU), 0
#define SMT1CPW17                        BANKMASK(SMT1CPWU), 1
#define SMT1CPW18                        BANKMASK(SMT1CPWU), 2
#define SMT1CPW19                        BANKMASK(SMT1CPWU), 3
#define SMT1CPW2                         BANKMASK(SMT1CPWL), 2
#define SMT1CPW20                        BANKMASK(SMT1CPWU), 4
#define SMT1CPW21                        BANKMASK(SMT1CPWU), 5
#define SMT1CPW22                        BANKMASK(SMT1CPWU), 6
#define SMT1CPW23                        BANKMASK(SMT1CPWU), 7
#define SMT1CPW3                         BANKMASK(SMT1CPWL), 3
#define SMT1CPW4                         BANKMASK(SMT1CPWL), 4
#define SMT1CPW5                         BANKMASK(SMT1CPWL), 5
#define SMT1CPW6                         BANKMASK(SMT1CPWL), 6
#define SMT1CPW7                         BANKMASK(SMT1CPWL), 7
#define SMT1CPW8                         BANKMASK(SMT1CPWH), 0
#define SMT1CPW9                         BANKMASK(SMT1CPWH), 1
#define SMT1CPWUP                        BANKMASK(SMT1STAT), 6
#define SMT1CSEL0                        BANKMASK(SMT1CLK), 0
#define SMT1CSEL1                        BANKMASK(SMT1CLK), 1
#define SMT1CSEL2                        BANKMASK(SMT1CLK), 2
#define SMT1GO                           BANKMASK(SMT1CON1), 7
#define SMT1IE                           BANKMASK(PIE4), 0
#define SMT1IF                           BANKMASK(PIR4), 0
#define SMT1MODE0                        BANKMASK(SMT1CON1), 0
#define SMT1MODE1                        BANKMASK(SMT1CON1), 1
#define SMT1MODE2                        BANKMASK(SMT1CON1), 2
#define SMT1MODE3                        BANKMASK(SMT1CON1), 3
#define SMT1PR0                          BANKMASK(SMT1PRL), 0
#define SMT1PR1                          BANKMASK(SMT1PRL), 1
#define SMT1PR10                         BANKMASK(SMT1PRH), 2
#define SMT1PR11                         BANKMASK(SMT1PRH), 3
#define SMT1PR12                         BANKMASK(SMT1PRH), 4
#define SMT1PR13                         BANKMASK(SMT1PRH), 5
#define SMT1PR14                         BANKMASK(SMT1PRH), 6
#define SMT1PR15                         BANKMASK(SMT1PRH), 7
#define SMT1PR16                         BANKMASK(SMT1PRU), 0
#define SMT1PR17                         BANKMASK(SMT1PRU), 1
#define SMT1PR18                         BANKMASK(SMT1PRU), 2
#define SMT1PR19                         BANKMASK(SMT1PRU), 3
#define SMT1PR2                          BANKMASK(SMT1PRL), 2
#define SMT1PR20                         BANKMASK(SMT1PRU), 4
#define SMT1PR21                         BANKMASK(SMT1PRU), 5
#define SMT1PR22                         BANKMASK(SMT1PRU), 6
#define SMT1PR23                         BANKMASK(SMT1PRU), 7
#define SMT1PR3                          BANKMASK(SMT1PRL), 3
#define SMT1PR4                          BANKMASK(SMT1PRL), 4
#define SMT1PR5                          BANKMASK(SMT1PRL), 5
#define SMT1PR6                          BANKMASK(SMT1PRL), 6
#define SMT1PR7                          BANKMASK(SMT1PRL), 7
#define SMT1PR8                          BANKMASK(SMT1PRH), 0
#define SMT1PR9                          BANKMASK(SMT1PRH), 1
#define SMT1PRAIE                        BANKMASK(PIE4), 1
#define SMT1PRAIF                        BANKMASK(PIR4), 1
#define SMT1PS0                          BANKMASK(SMT1CON0), 0
#define SMT1PS1                          BANKMASK(SMT1CON0), 1
#define SMT1PWAIE                        BANKMASK(PIE4), 2
#define SMT1PWAIF                        BANKMASK(PIR4), 2
#define SMT1REPEAT                       BANKMASK(SMT1CON1), 6
#define SMT1RESET                        BANKMASK(SMT1STAT), 5
#define SMT1SSEL0                        BANKMASK(SMT1SIG), 0
#define SMT1SSEL1                        BANKMASK(SMT1SIG), 1
#define SMT1SSEL2                        BANKMASK(SMT1SIG), 2
#define SMT1TMR0                         BANKMASK(SMT1TMRL), 0
#define SMT1TMR1                         BANKMASK(SMT1TMRL), 1
#define SMT1TMR10                        BANKMASK(SMT1TMRH), 2
#define SMT1TMR11                        BANKMASK(SMT1TMRH), 3
#define SMT1TMR12                        BANKMASK(SMT1TMRH), 4
#define SMT1TMR13                        BANKMASK(SMT1TMRH), 5
#define SMT1TMR14                        BANKMASK(SMT1TMRH), 6
#define SMT1TMR15                        BANKMASK(SMT1TMRH), 7
#define SMT1TMR16                        BANKMASK(SMT1TMRU), 0
#define SMT1TMR17                        BANKMASK(SMT1TMRU), 1
#define SMT1TMR18                        BANKMASK(SMT1TMRU), 2
#define SMT1TMR19                        BANKMASK(SMT1TMRU), 3
#define SMT1TMR2                         BANKMASK(SMT1TMRL), 2
#define SMT1TMR20                        BANKMASK(SMT1TMRU), 4
#define SMT1TMR21                        BANKMASK(SMT1TMRU), 5
#define SMT1TMR22                        BANKMASK(SMT1TMRU), 6
#define SMT1TMR23                        BANKMASK(SMT1TMRU), 7
#define SMT1TMR3                         BANKMASK(SMT1TMRL), 3
#define SMT1TMR4                         BANKMASK(SMT1TMRL), 4
#define SMT1TMR5                         BANKMASK(SMT1TMRL), 5
#define SMT1TMR6                         BANKMASK(SMT1TMRL), 6
#define SMT1TMR7                         BANKMASK(SMT1TMRL), 7
#define SMT1TMR8                         BANKMASK(SMT1TMRH), 0
#define SMT1TMR9                         BANKMASK(SMT1TMRH), 1
#define SMT1TS                           BANKMASK(SMT1STAT), 2
#define SMT1WS                           BANKMASK(SMT1STAT), 1
#define SMT1WSEL0                        BANKMASK(SMT1WIN), 0
#define SMT1WSEL1                        BANKMASK(SMT1WIN), 1
#define SMT1WSEL2                        BANKMASK(SMT1WIN), 2
#define SMT1WSEL3                        BANKMASK(SMT1WIN), 3
#define SMT2AS                           BANKMASK(SMT2STAT), 0
#define SMT2CPR0                         BANKMASK(SMT2CPRL), 0
#define SMT2CPR1                         BANKMASK(SMT2CPRL), 1
#define SMT2CPR10                        BANKMASK(SMT2CPRH), 2
#define SMT2CPR11                        BANKMASK(SMT2CPRH), 3
#define SMT2CPR12                        BANKMASK(SMT2CPRH), 4
#define SMT2CPR13                        BANKMASK(SMT2CPRH), 5
#define SMT2CPR14                        BANKMASK(SMT2CPRH), 6
#define SMT2CPR15                        BANKMASK(SMT2CPRH), 7
#define SMT2CPR16                        BANKMASK(SMT2CPRU), 0
#define SMT2CPR17                        BANKMASK(SMT2CPRU), 1
#define SMT2CPR18                        BANKMASK(SMT2CPRU), 2
#define SMT2CPR19                        BANKMASK(SMT2CPRU), 3
#define SMT2CPR2                         BANKMASK(SMT2CPRL), 2
#define SMT2CPR20                        BANKMASK(SMT2CPRU), 4
#define SMT2CPR21                        BANKMASK(SMT2CPRU), 5
#define SMT2CPR22                        BANKMASK(SMT2CPRU), 6
#define SMT2CPR23                        BANKMASK(SMT2CPRU), 7
#define SMT2CPR3                         BANKMASK(SMT2CPRL), 3
#define SMT2CPR4                         BANKMASK(SMT2CPRL), 4
#define SMT2CPR5                         BANKMASK(SMT2CPRL), 5
#define SMT2CPR6                         BANKMASK(SMT2CPRL), 6
#define SMT2CPR7                         BANKMASK(SMT2CPRL), 7
#define SMT2CPR8                         BANKMASK(SMT2CPRH), 0
#define SMT2CPR9                         BANKMASK(SMT2CPRH), 1
#define SMT2CPRUP                        BANKMASK(SMT2STAT), 7
#define SMT2CPW0                         BANKMASK(SMT2CPWL), 0
#define SMT2CPW1                         BANKMASK(SMT2CPWL), 1
#define SMT2CPW10                        BANKMASK(SMT2CPWH), 2
#define SMT2CPW11                        BANKMASK(SMT2CPWH), 3
#define SMT2CPW12                        BANKMASK(SMT2CPWH), 4
#define SMT2CPW13                        BANKMASK(SMT2CPWH), 5
#define SMT2CPW14                        BANKMASK(SMT2CPWH), 6
#define SMT2CPW15                        BANKMASK(SMT2CPWH), 7
#define SMT2CPW16                        BANKMASK(SMT2CPWU), 0
#define SMT2CPW17                        BANKMASK(SMT2CPWU), 1
#define SMT2CPW18                        BANKMASK(SMT2CPWU), 2
#define SMT2CPW19                        BANKMASK(SMT2CPWU), 3
#define SMT2CPW2                         BANKMASK(SMT2CPWL), 2
#define SMT2CPW20                        BANKMASK(SMT2CPWU), 4
#define SMT2CPW21                        BANKMASK(SMT2CPWU), 5
#define SMT2CPW22                        BANKMASK(SMT2CPWU), 6
#define SMT2CPW23                        BANKMASK(SMT2CPWU), 7
#define SMT2CPW3                         BANKMASK(SMT2CPWL), 3
#define SMT2CPW4                         BANKMASK(SMT2CPWL), 4
#define SMT2CPW5                         BANKMASK(SMT2CPWL), 5
#define SMT2CPW6                         BANKMASK(SMT2CPWL), 6
#define SMT2CPW7                         BANKMASK(SMT2CPWL), 7
#define SMT2CPW8                         BANKMASK(SMT2CPWH), 0
#define SMT2CPW9                         BANKMASK(SMT2CPWH), 1
#define SMT2CPWUP                        BANKMASK(SMT2STAT), 6
#define SMT2CSEL0                        BANKMASK(SMT2CLK), 0
#define SMT2CSEL1                        BANKMASK(SMT2CLK), 1
#define SMT2CSEL2                        BANKMASK(SMT2CLK), 2
#define SMT2GO                           BANKMASK(SMT2CON1), 7
#define SMT2IE                           BANKMASK(PIE4), 3
#define SMT2IF                           BANKMASK(PIR4), 3
#define SMT2MODE0                        BANKMASK(SMT2CON1), 0
#define SMT2MODE1                        BANKMASK(SMT2CON1), 1
#define SMT2MODE2                        BANKMASK(SMT2CON1), 2
#define SMT2MODE3                        BANKMASK(SMT2CON1), 3
#define SMT2PR0                          BANKMASK(SMT2PRL), 0
#define SMT2PR1                          BANKMASK(SMT2PRL), 1
#define SMT2PR10                         BANKMASK(SMT2PRH), 2
#define SMT2PR11                         BANKMASK(SMT2PRH), 3
#define SMT2PR12                         BANKMASK(SMT2PRH), 4
#define SMT2PR13                         BANKMASK(SMT2PRH), 5
#define SMT2PR14                         BANKMASK(SMT2PRH), 6
#define SMT2PR15                         BANKMASK(SMT2PRH), 7
#define SMT2PR16                         BANKMASK(SMT2PRU), 0
#define SMT2PR17                         BANKMASK(SMT2PRU), 1
#define SMT2PR18                         BANKMASK(SMT2PRU), 2
#define SMT2PR19                         BANKMASK(SMT2PRU), 3
#define SMT2PR2                          BANKMASK(SMT2PRL), 2
#define SMT2PR20                         BANKMASK(SMT2PRU), 4
#define SMT2PR21                         BANKMASK(SMT2PRU), 5
#define SMT2PR22                         BANKMASK(SMT2PRU), 6
#define SMT2PR23                         BANKMASK(SMT2PRU), 7
#define SMT2PR3                          BANKMASK(SMT2PRL), 3
#define SMT2PR4                          BANKMASK(SMT2PRL), 4
#define SMT2PR5                          BANKMASK(SMT2PRL), 5
#define SMT2PR6                          BANKMASK(SMT2PRL), 6
#define SMT2PR7                          BANKMASK(SMT2PRL), 7
#define SMT2PR8                          BANKMASK(SMT2PRH), 0
#define SMT2PR9                          BANKMASK(SMT2PRH), 1
#define SMT2PRAIE                        BANKMASK(PIE4), 4
#define SMT2PRAIF                        BANKMASK(PIR4), 4
#define SMT2PS0                          BANKMASK(SMT2CON0), 0
#define SMT2PS1                          BANKMASK(SMT2CON0), 1
#define SMT2PWAIE                        BANKMASK(PIE4), 5
#define SMT2PWAIF                        BANKMASK(PIR4), 5
#define SMT2REPEAT                       BANKMASK(SMT2CON1), 6
#define SMT2RESET                        BANKMASK(SMT2STAT), 5
#define SMT2SSEL0                        BANKMASK(SMT2SIG), 0
#define SMT2SSEL1                        BANKMASK(SMT2SIG), 1
#define SMT2SSEL2                        BANKMASK(SMT2SIG), 2
#define SMT2TMR0                         BANKMASK(SMT2TMRL), 0
#define SMT2TMR1                         BANKMASK(SMT2TMRL), 1
#define SMT2TMR10                        BANKMASK(SMT2TMRH), 2
#define SMT2TMR11                        BANKMASK(SMT2TMRH), 3
#define SMT2TMR12                        BANKMASK(SMT2TMRH), 4
#define SMT2TMR13                        BANKMASK(SMT2TMRH), 5
#define SMT2TMR14                        BANKMASK(SMT2TMRH), 6
#define SMT2TMR15                        BANKMASK(SMT2TMRH), 7
#define SMT2TMR16                        BANKMASK(SMT2TMRU), 0
#define SMT2TMR17                        BANKMASK(SMT2TMRU), 1
#define SMT2TMR18                        BANKMASK(SMT2TMRU), 2
#define SMT2TMR19                        BANKMASK(SMT2TMRU), 3
#define SMT2TMR2                         BANKMASK(SMT2TMRL), 2
#define SMT2TMR20                        BANKMASK(SMT2TMRU), 4
#define SMT2TMR21                        BANKMASK(SMT2TMRU), 5
#define SMT2TMR22                        BANKMASK(SMT2TMRU), 6
#define SMT2TMR23                        BANKMASK(SMT2TMRU), 7
#define SMT2TMR3                         BANKMASK(SMT2TMRL), 3
#define SMT2TMR4                         BANKMASK(SMT2TMRL), 4
#define SMT2TMR5                         BANKMASK(SMT2TMRL), 5
#define SMT2TMR6                         BANKMASK(SMT2TMRL), 6
#define SMT2TMR7                         BANKMASK(SMT2TMRL), 7
#define SMT2TMR8                         BANKMASK(SMT2TMRH), 0
#define SMT2TMR9                         BANKMASK(SMT2TMRH), 1
#define SMT2TS                           BANKMASK(SMT2STAT), 2
#define SMT2WS                           BANKMASK(SMT2STAT), 1
#define SMT2WSEL0                        BANKMASK(SMT2WIN), 0
#define SMT2WSEL1                        BANKMASK(SMT2WIN), 1
#define SMT2WSEL2                        BANKMASK(SMT2WIN), 2
#define SMT2WSEL3                        BANKMASK(SMT2WIN), 3
#define SPLLEN                           BANKMASK(OSCCON), 7
#define STATE                            BANKMASK(WDTTMR), 2
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define STRA                             BANKMASK(CWG1OCON0), 0
#define STRB                             BANKMASK(CWG1OCON0), 1
#define STRC                             BANKMASK(CWG1OCON0), 2
#define STRD                             BANKMASK(CWG1OCON0), 3
#define SWDTEN                           BANKMASK(WDTCON0), 0
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSEL                           BANKMASK(APFCON), 3
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T2CKPOL                          BANKMASK(T2HLT), 6
#define T2CKPS0                          BANKMASK(T2CON), 4
#define T2CKPS1                          BANKMASK(T2CON), 5
#define T2CKPS2                          BANKMASK(T2CON), 6
#define T2CKSYNC                         BANKMASK(T2HLT), 5
#define T2CS0                            BANKMASK(T2CLKCON), 0
#define T2CS1                            BANKMASK(T2CLKCON), 1
#define T2CS2                            BANKMASK(T2CLKCON), 2
#define T2MODE0                          BANKMASK(T2HLT), 0
#define T2MODE1                          BANKMASK(T2HLT), 1
#define T2MODE2                          BANKMASK(T2HLT), 2
#define T2MODE3                          BANKMASK(T2HLT), 3
#define T2ON                             BANKMASK(T2CON), 7
#define T2OUTPS0                         BANKMASK(T2CON), 0
#define T2OUTPS1                         BANKMASK(T2CON), 1
#define T2OUTPS2                         BANKMASK(T2CON), 2
#define T2OUTPS3                         BANKMASK(T2CON), 3
#define T2PSYNC                          BANKMASK(T2HLT), 7
#define T2RSEL0                          BANKMASK(T2RST), 0
#define T2RSEL1                          BANKMASK(T2RST), 1
#define T2RSEL2                          BANKMASK(T2RST), 2
#define T2RSEL3                          BANKMASK(T2RST), 3
#define T4CKPOL                          BANKMASK(T4HLT), 6
#define T4CKPS0                          BANKMASK(T4CON), 4
#define T4CKPS1                          BANKMASK(T4CON), 5
#define T4CKPS2                          BANKMASK(T4CON), 6
#define T4CKSYNC                         BANKMASK(T4HLT), 5
#define T4CS0                            BANKMASK(T4CLKCON), 0
#define T4CS1                            BANKMASK(T4CLKCON), 1
#define T4CS2                            BANKMASK(T4CLKCON), 2
#define T4MODE0                          BANKMASK(T4HLT), 0
#define T4MODE1                          BANKMASK(T4HLT), 1
#define T4MODE2                          BANKMASK(T4HLT), 2
#define T4MODE3                          BANKMASK(T4HLT), 3
#define T4ON                             BANKMASK(T4CON), 7
#define T4OUTPS0                         BANKMASK(T4CON), 0
#define T4OUTPS1                         BANKMASK(T4CON), 1
#define T4OUTPS2                         BANKMASK(T4CON), 2
#define T4OUTPS3                         BANKMASK(T4CON), 3
#define T4PSYNC                          BANKMASK(T4HLT), 7
#define T4RSEL0                          BANKMASK(T4RST), 0
#define T4RSEL1                          BANKMASK(T4RST), 1
#define T4RSEL2                          BANKMASK(T4RST), 2
#define T4RSEL3                          BANKMASK(T4RST), 3
#define T6CKPOL                          BANKMASK(T6HLT), 6
#define T6CKPS0                          BANKMASK(T6CON), 4
#define T6CKPS1                          BANKMASK(T6CON), 5
#define T6CKPS2                          BANKMASK(T6CON), 6
#define T6CKSYNC                         BANKMASK(T6HLT), 5
#define T6CS0                            BANKMASK(T6CLKCON), 0
#define T6CS1                            BANKMASK(T6CLKCON), 1
#define T6CS2                            BANKMASK(T6CLKCON), 2
#define T6MODE0                          BANKMASK(T6HLT), 0
#define T6MODE1                          BANKMASK(T6HLT), 1
#define T6MODE2                          BANKMASK(T6HLT), 2
#define T6MODE3                          BANKMASK(T6HLT), 3
#define T6ON                             BANKMASK(T6CON), 7
#define T6OUTPS0                         BANKMASK(T6CON), 0
#define T6OUTPS1                         BANKMASK(T6CON), 1
#define T6OUTPS2                         BANKMASK(T6CON), 2
#define T6OUTPS3                         BANKMASK(T6CON), 3
#define T6PSYNC                          BANKMASK(T6HLT), 7
#define T6RSEL0                          BANKMASK(T6RST), 0
#define T6RSEL1                          BANKMASK(T6RST), 1
#define T6RSEL2                          BANKMASK(T6RST), 2
#define T6RSEL3                          BANKMASK(T6RST), 3
#define TMR0CS                           BANKMASK(OPTION_REG), 5
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR0SE                           BANKMASK(OPTION_REG), 4
#define TMR1CS0                          BANKMASK(T1CON), 6
#define TMR1CS1                          BANKMASK(T1CON), 7
#define TMR1GE                           BANKMASK(T1GCON), 7
#define TMR1GIE                          BANKMASK(PIE1), 7
#define TMR1GIF                          BANKMASK(PIR1), 7
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2AS                           BANKMASK(CWG1AS1), 4
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(T2CON), 7
#define TMR4AS                           BANKMASK(CWG1AS1), 5
#define TMR4IE                           BANKMASK(PIE2), 1
#define TMR4IF                           BANKMASK(PIR2), 1
#define TMR4ON                           BANKMASK(T4CON), 7
#define TMR6AS                           BANKMASK(CWG1AS1), 6
#define TMR6IE                           BANKMASK(PIE2), 2
#define TMR6IF                           BANKMASK(PIR2), 2
#define TMR6ON                           BANKMASK(T6CON), 7
#define TRIGSEL0                         BANKMASK(ADCON2), 4
#define TRIGSEL1                         BANKMASK(ADCON2), 5
#define TRIGSEL2                         BANKMASK(ADCON2), 6
#define TRIGSEL3                         BANKMASK(ADCON2), 7
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TRISA3                           BANKMASK(TRISA), 3
#define TRISA4                           BANKMASK(TRISA), 4
#define TRISA5                           BANKMASK(TRISA), 5
#define TRISC0                           BANKMASK(TRISC), 0
#define TRISC1                           BANKMASK(TRISC), 1
#define TRISC2                           BANKMASK(TRISC), 2
#define TRISC3                           BANKMASK(TRISC), 3
#define TRISC4                           BANKMASK(TRISC), 4
#define TRISC5                           BANKMASK(TRISC), 5
#define TSEL0                            BANKMASK(SCANTRIG), 0
#define TSEL1                            BANKMASK(SCANTRIG), 1
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define TUN5                             BANKMASK(OSCTUNE), 5
#define WDTCS0                           BANKMASK(WDTCON1), 4
#define WDTCS1                           BANKMASK(WDTCON1), 5
#define WDTCS2                           BANKMASK(WDTCON1), 6
#define WDTPS0                           BANKMASK(WDTCON0), 1
#define WDTPS1                           BANKMASK(WDTCON0), 2
#define WDTPS2                           BANKMASK(WDTCON0), 3
#define WDTPS3                           BANKMASK(WDTCON0), 4
#define WDTPS4                           BANKMASK(WDTCON0), 5
#define WDTPSCNT0                        BANKMASK(WDTPSL), 0
#define WDTPSCNT1                        BANKMASK(WDTPSL), 1
#define WDTPSCNT10                       BANKMASK(WDTPSH), 2
#define WDTPSCNT11                       BANKMASK(WDTPSH), 3
#define WDTPSCNT12                       BANKMASK(WDTPSH), 4
#define WDTPSCNT13                       BANKMASK(WDTPSH), 5
#define WDTPSCNT14                       BANKMASK(WDTPSH), 6
#define WDTPSCNT15                       BANKMASK(WDTPSH), 7
#define WDTPSCNT16                       BANKMASK(WDTTMR), 0
#define WDTPSCNT17                       BANKMASK(WDTTMR), 1
#define WDTPSCNT2                        BANKMASK(WDTPSL), 2
#define WDTPSCNT3                        BANKMASK(WDTPSL), 3
#define WDTPSCNT4                        BANKMASK(WDTPSL), 4
#define WDTPSCNT5                        BANKMASK(WDTPSL), 5
#define WDTPSCNT6                        BANKMASK(WDTPSL), 6
#define WDTPSCNT7                        BANKMASK(WDTPSL), 7
#define WDTPSCNT8                        BANKMASK(WDTPSH), 0
#define WDTPSCNT9                        BANKMASK(WDTPSH), 1
#define WDTSEN                           BANKMASK(WDTCON0), 0
#define WDTSTATE                         BANKMASK(WDTTMR), 2
#define WDTTMR0                          BANKMASK(WDTTMR), 3
#define WDTTMR1                          BANKMASK(WDTTMR), 4
#define WDTTMR2                          BANKMASK(WDTTMR), 5
#define WDTTMR3                          BANKMASK(WDTTMR), 6
#define WDTTMR4                          BANKMASK(WDTTMR), 7
#define WDTWINDOW0                       BANKMASK(WDTCON1), 0
#define WDTWINDOW1                       BANKMASK(WDTCON1), 1
#define WDTWINDOW2                       BANKMASK(WDTCON1), 2
#define WINDOW0                          BANKMASK(WDTCON1), 0
#define WINDOW1                          BANKMASK(WDTCON1), 1
#define WINDOW2                          BANKMASK(WDTCON1), 2
#define WPUA0                            BANKMASK(WPUA), 0
#define WPUA1                            BANKMASK(WPUA), 1
#define WPUA2                            BANKMASK(WPUA), 2
#define WPUA3                            BANKMASK(WPUA), 3
#define WPUA4                            BANKMASK(WPUA), 4
#define WPUA5                            BANKMASK(WPUA), 5
#define WPUC0                            BANKMASK(WPUC), 0
#define WPUC1                            BANKMASK(WPUC), 1
#define WPUC2                            BANKMASK(WPUC), 2
#define WPUC3                            BANKMASK(WPUC), 3
#define WPUC4                            BANKMASK(WPUC), 4
#define WPUC5                            BANKMASK(WPUC), 5
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define WRERR                            BANKMASK(PMCON1), 3
#define XOR1                             BANKMASK(CRCXORL), 1
#define XOR10                            BANKMASK(CRCXORH), 2
#define XOR11                            BANKMASK(CRCXORH), 3
#define XOR12                            BANKMASK(CRCXORH), 4
#define XOR13                            BANKMASK(CRCXORH), 5
#define XOR14                            BANKMASK(CRCXORH), 6
#define XOR15                            BANKMASK(CRCXORH), 7
#define XOR2                             BANKMASK(CRCXORL), 2
#define XOR3                             BANKMASK(CRCXORL), 3
#define XOR4                             BANKMASK(CRCXORL), 4
#define XOR5                             BANKMASK(CRCXORL), 5
#define XOR6                             BANKMASK(CRCXORL), 6
#define XOR7                             BANKMASK(CRCXORL), 7
#define XOR8                             BANKMASK(CRCXORH), 0
#define XOR9                             BANKMASK(CRCXORH), 1
#define ZCD1EN                           BANKMASK(ZCD1CON), 7
#define ZCD1INTN                         BANKMASK(ZCD1CON), 0
#define ZCD1INTP                         BANKMASK(ZCD1CON), 1
#define ZCD1OE                           BANKMASK(ZCD1CON), 6
#define ZCD1OUT                          BANKMASK(ZCD1CON), 5
#define ZCD1POL                          BANKMASK(ZCD1CON), 4
#define ZCDIE                            BANKMASK(PIE3), 4
#define ZCDIF                            BANKMASK(PIR3), 4
#define ZERO                             BANKMASK(STATUS), 2
#define Z_SHAD                           BANKMASK(STATUS_SHAD), 2
#define nBOR                             BANKMASK(PCON), 0
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRI                              BANKMASK(PCON), 2
#define nRMCLR                           BANKMASK(PCON), 3
#define nRWDT                            BANKMASK(PCON), 4
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nTO                              BANKMASK(STATUS), 4
#define nWDTWV                           BANKMASK(PCON), 5
#define nWPUEN                           BANKMASK(OPTION_REG), 7

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
psect udata_bank2,class=BANK2,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16LF1613_INC_
