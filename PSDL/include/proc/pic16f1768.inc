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

#ifndef _PIC16F1768_INC_
#define _PIC16F1768_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F1768
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

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 000Dh
// bitfield definitions
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
PIR1_CCPIF_POSN                          equ 0002h
PIR1_CCPIF_POSITION                      equ 0002h
PIR1_CCPIF_SIZE                          equ 0001h
PIR1_CCPIF_LENGTH                        equ 0001h
PIR1_CCPIF_MASK                          equ 0004h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0012h
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_C3IF_POSN                           equ 0001h
PIR2_C3IF_POSITION                       equ 0001h
PIR2_C3IF_SIZE                           equ 0001h
PIR2_C3IF_LENGTH                         equ 0001h
PIR2_C3IF_MASK                           equ 0002h
PIR2_C4IF_POSN                           equ 0002h
PIR2_C4IF_POSITION                       equ 0002h
PIR2_C4IF_SIZE                           equ 0001h
PIR2_C4IF_LENGTH                         equ 0001h
PIR2_C4IF_MASK                           equ 0004h
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h
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
PIR2_OSFIF_POSN                          equ 0007h
PIR2_OSFIF_POSITION                      equ 0007h
PIR2_OSFIF_SIZE                          equ 0001h
PIR2_OSFIF_LENGTH                        equ 0001h
PIR2_OSFIF_MASK                          equ 0080h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0013h
// bitfield definitions
PIR3_CLC1IF_POSN                         equ 0000h
PIR3_CLC1IF_POSITION                     equ 0000h
PIR3_CLC1IF_SIZE                         equ 0001h
PIR3_CLC1IF_LENGTH                       equ 0001h
PIR3_CLC1IF_MASK                         equ 0001h
PIR3_CLC2IF_POSN                         equ 0001h
PIR3_CLC2IF_POSITION                     equ 0001h
PIR3_CLC2IF_SIZE                         equ 0001h
PIR3_CLC2IF_LENGTH                       equ 0001h
PIR3_CLC2IF_MASK                         equ 0002h
PIR3_CLC3IF_POSN                         equ 0002h
PIR3_CLC3IF_POSITION                     equ 0002h
PIR3_CLC3IF_SIZE                         equ 0001h
PIR3_CLC3IF_LENGTH                       equ 0001h
PIR3_CLC3IF_MASK                         equ 0004h
PIR3_COG2IF_POSN                         equ 0003h
PIR3_COG2IF_POSITION                     equ 0003h
PIR3_COG2IF_SIZE                         equ 0001h
PIR3_COG2IF_LENGTH                       equ 0001h
PIR3_COG2IF_MASK                         equ 0008h
PIR3_ZCDIF_POSN                          equ 0004h
PIR3_ZCDIF_POSITION                      equ 0004h
PIR3_ZCDIF_SIZE                          equ 0001h
PIR3_ZCDIF_LENGTH                        equ 0001h
PIR3_ZCDIF_MASK                          equ 0010h
PIR3_COG1IF_POSN                         equ 0005h
PIR3_COG1IF_POSITION                     equ 0005h
PIR3_COG1IF_SIZE                         equ 0001h
PIR3_COG1IF_LENGTH                       equ 0001h
PIR3_COG1IF_MASK                         equ 0020h
PIR3_PWM5IF_POSN                         equ 0006h
PIR3_PWM5IF_POSITION                     equ 0006h
PIR3_PWM5IF_SIZE                         equ 0001h
PIR3_PWM5IF_LENGTH                       equ 0001h
PIR3_PWM5IF_MASK                         equ 0040h
PIR3_PWM6IF_POSN                         equ 0007h
PIR3_PWM6IF_POSITION                     equ 0007h
PIR3_PWM6IF_SIZE                         equ 0001h
PIR3_PWM6IF_LENGTH                       equ 0001h
PIR3_PWM6IF_MASK                         equ 0080h

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0014h
// bitfield definitions
PIR4_TMR4IF_POSN                         equ 0000h
PIR4_TMR4IF_POSITION                     equ 0000h
PIR4_TMR4IF_SIZE                         equ 0001h
PIR4_TMR4IF_LENGTH                       equ 0001h
PIR4_TMR4IF_MASK                         equ 0001h
PIR4_TMR6IF_POSN                         equ 0001h
PIR4_TMR6IF_POSITION                     equ 0001h
PIR4_TMR6IF_SIZE                         equ 0001h
PIR4_TMR6IF_LENGTH                       equ 0001h
PIR4_TMR6IF_MASK                         equ 0002h
PIR4_TMR3IF_POSN                         equ 0002h
PIR4_TMR3IF_POSITION                     equ 0002h
PIR4_TMR3IF_SIZE                         equ 0001h
PIR4_TMR3IF_LENGTH                       equ 0001h
PIR4_TMR3IF_MASK                         equ 0004h
PIR4_TMR3GIF_POSN                        equ 0003h
PIR4_TMR3GIF_POSITION                    equ 0003h
PIR4_TMR3GIF_SIZE                        equ 0001h
PIR4_TMR3GIF_LENGTH                      equ 0001h
PIR4_TMR3GIF_MASK                        equ 0008h
PIR4_TMR5IF_POSN                         equ 0004h
PIR4_TMR5IF_POSITION                     equ 0004h
PIR4_TMR5IF_SIZE                         equ 0001h
PIR4_TMR5IF_LENGTH                       equ 0001h
PIR4_TMR5IF_MASK                         equ 0010h
PIR4_TMR5GIF_POSN                        equ 0005h
PIR4_TMR5GIF_POSITION                    equ 0005h
PIR4_TMR5GIF_SIZE                        equ 0001h
PIR4_TMR5GIF_LENGTH                      equ 0001h
PIR4_TMR5GIF_MASK                        equ 0020h

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
TMR1L_TMR_POSN                           equ 0000h
TMR1L_TMR_POSITION                       equ 0000h
TMR1L_TMR_SIZE                           equ 0008h
TMR1L_TMR_LENGTH                         equ 0008h
TMR1L_TMR_MASK                           equ 00FFh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 0017h
// bitfield definitions
TMR1H_TMR_POSN                           equ 0000h
TMR1H_TMR_POSITION                       equ 0000h
TMR1H_TMR_SIZE                           equ 0008h
TMR1H_TMR_LENGTH                         equ 0008h
TMR1H_TMR_MASK                           equ 00FFh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0018h
// bitfield definitions
T1CON_ON_POSN                            equ 0000h
T1CON_ON_POSITION                        equ 0000h
T1CON_ON_SIZE                            equ 0001h
T1CON_ON_LENGTH                          equ 0001h
T1CON_ON_MASK                            equ 0001h
T1CON_nSYNC_POSN                         equ 0002h
T1CON_nSYNC_POSITION                     equ 0002h
T1CON_nSYNC_SIZE                         equ 0001h
T1CON_nSYNC_LENGTH                       equ 0001h
T1CON_nSYNC_MASK                         equ 0004h
T1CON_OSCEN_POSN                         equ 0003h
T1CON_OSCEN_POSITION                     equ 0003h
T1CON_OSCEN_SIZE                         equ 0001h
T1CON_OSCEN_LENGTH                       equ 0001h
T1CON_OSCEN_MASK                         equ 0008h
T1CON_CKPS_POSN                          equ 0004h
T1CON_CKPS_POSITION                      equ 0004h
T1CON_CKPS_SIZE                          equ 0002h
T1CON_CKPS_LENGTH                        equ 0002h
T1CON_CKPS_MASK                          equ 0030h
T1CON_CS_POSN                            equ 0006h
T1CON_CS_POSITION                        equ 0006h
T1CON_CS_SIZE                            equ 0002h
T1CON_CS_LENGTH                          equ 0002h
T1CON_CS_MASK                            equ 00C0h
T1CON_TMRON_POSN                         equ 0000h
T1CON_TMRON_POSITION                     equ 0000h
T1CON_TMRON_SIZE                         equ 0001h
T1CON_TMRON_LENGTH                       equ 0001h
T1CON_TMRON_MASK                         equ 0001h
T1CON_SYNC_POSN                          equ 0002h
T1CON_SYNC_POSITION                      equ 0002h
T1CON_SYNC_SIZE                          equ 0001h
T1CON_SYNC_LENGTH                        equ 0001h
T1CON_SYNC_MASK                          equ 0004h
T1CON_SOSCEN_POSN                        equ 0003h
T1CON_SOSCEN_POSITION                    equ 0003h
T1CON_SOSCEN_SIZE                        equ 0001h
T1CON_SOSCEN_LENGTH                      equ 0001h
T1CON_SOSCEN_MASK                        equ 0008h
T1CON_CKPS0_POSN                         equ 0004h
T1CON_CKPS0_POSITION                     equ 0004h
T1CON_CKPS0_SIZE                         equ 0001h
T1CON_CKPS0_LENGTH                       equ 0001h
T1CON_CKPS0_MASK                         equ 0010h
T1CON_CKPS1_POSN                         equ 0005h
T1CON_CKPS1_POSITION                     equ 0005h
T1CON_CKPS1_SIZE                         equ 0001h
T1CON_CKPS1_LENGTH                       equ 0001h
T1CON_CKPS1_MASK                         equ 0020h
T1CON_CS0_POSN                           equ 0006h
T1CON_CS0_POSITION                       equ 0006h
T1CON_CS0_SIZE                           equ 0001h
T1CON_CS0_LENGTH                         equ 0001h
T1CON_CS0_MASK                           equ 0040h
T1CON_CS1_POSN                           equ 0007h
T1CON_CS1_POSITION                       equ 0007h
T1CON_CS1_SIZE                           equ 0001h
T1CON_CS1_LENGTH                         equ 0001h
T1CON_CS1_MASK                           equ 0080h
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
T1CON_T1OSCEN_POSN                       equ 0003h
T1CON_T1OSCEN_POSITION                   equ 0003h
T1CON_T1OSCEN_SIZE                       equ 0001h
T1CON_T1OSCEN_LENGTH                     equ 0001h
T1CON_T1OSCEN_MASK                       equ 0008h
T1CON_T1CS0_POSN                         equ 0006h
T1CON_T1CS0_POSITION                     equ 0006h
T1CON_T1CS0_SIZE                         equ 0001h
T1CON_T1CS0_LENGTH                       equ 0001h
T1CON_T1CS0_MASK                         equ 0040h
T1CON_T1CS1_POSN                         equ 0007h
T1CON_T1CS1_POSITION                     equ 0007h
T1CON_T1CS1_SIZE                         equ 0001h
T1CON_T1CS1_LENGTH                       equ 0001h
T1CON_T1CS1_MASK                         equ 0080h
T1CON_T1ON_POSN                          equ 0000h
T1CON_T1ON_POSITION                      equ 0000h
T1CON_T1ON_SIZE                          equ 0001h
T1CON_T1ON_LENGTH                        equ 0001h
T1CON_T1ON_MASK                          equ 0001h
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
T1GCON_GSS_POSN                          equ 0000h
T1GCON_GSS_POSITION                      equ 0000h
T1GCON_GSS_SIZE                          equ 0002h
T1GCON_GSS_LENGTH                        equ 0002h
T1GCON_GSS_MASK                          equ 0003h
T1GCON_GVAL_POSN                         equ 0002h
T1GCON_GVAL_POSITION                     equ 0002h
T1GCON_GVAL_SIZE                         equ 0001h
T1GCON_GVAL_LENGTH                       equ 0001h
T1GCON_GVAL_MASK                         equ 0004h
T1GCON_GGO_nDONE_POSN                    equ 0003h
T1GCON_GGO_nDONE_POSITION                equ 0003h
T1GCON_GGO_nDONE_SIZE                    equ 0001h
T1GCON_GGO_nDONE_LENGTH                  equ 0001h
T1GCON_GGO_nDONE_MASK                    equ 0008h
T1GCON_GSPM_POSN                         equ 0004h
T1GCON_GSPM_POSITION                     equ 0004h
T1GCON_GSPM_SIZE                         equ 0001h
T1GCON_GSPM_LENGTH                       equ 0001h
T1GCON_GSPM_MASK                         equ 0010h
T1GCON_GTM_POSN                          equ 0005h
T1GCON_GTM_POSITION                      equ 0005h
T1GCON_GTM_SIZE                          equ 0001h
T1GCON_GTM_LENGTH                        equ 0001h
T1GCON_GTM_MASK                          equ 0020h
T1GCON_GPOL_POSN                         equ 0006h
T1GCON_GPOL_POSITION                     equ 0006h
T1GCON_GPOL_SIZE                         equ 0001h
T1GCON_GPOL_LENGTH                       equ 0001h
T1GCON_GPOL_MASK                         equ 0040h
T1GCON_GE_POSN                           equ 0007h
T1GCON_GE_POSITION                       equ 0007h
T1GCON_GE_SIZE                           equ 0001h
T1GCON_GE_LENGTH                         equ 0001h
T1GCON_GE_MASK                           equ 0080h
T1GCON_GSS0_POSN                         equ 0000h
T1GCON_GSS0_POSITION                     equ 0000h
T1GCON_GSS0_SIZE                         equ 0001h
T1GCON_GSS0_LENGTH                       equ 0001h
T1GCON_GSS0_MASK                         equ 0001h
T1GCON_GSS1_POSN                         equ 0001h
T1GCON_GSS1_POSITION                     equ 0001h
T1GCON_GSS1_SIZE                         equ 0001h
T1GCON_GSS1_LENGTH                       equ 0001h
T1GCON_GSS1_MASK                         equ 0002h
T1GCON_T1GE_POSN                         equ 0007h
T1GCON_T1GE_POSITION                     equ 0007h
T1GCON_T1GE_SIZE                         equ 0001h
T1GCON_T1GE_LENGTH                       equ 0001h
T1GCON_T1GE_MASK                         equ 0080h
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
T2TMR_TMR_POSN                           equ 0000h
T2TMR_TMR_POSITION                       equ 0000h
T2TMR_TMR_SIZE                           equ 0008h
T2TMR_TMR_LENGTH                         equ 0008h
T2TMR_TMR_MASK                           equ 00FFh
T2TMR_TMR2_POSN                          equ 0000h
T2TMR_TMR2_POSITION                      equ 0000h
T2TMR_TMR2_SIZE                          equ 0008h
T2TMR_TMR2_LENGTH                        equ 0008h
T2TMR_TMR2_MASK                          equ 00FFh

// Register: T2PR
#define T2PR T2PR
T2PR                                     equ 001Bh
// bitfield definitions
T2PR_PR_POSN                             equ 0000h
T2PR_PR_POSITION                         equ 0000h
T2PR_PR_SIZE                             equ 0008h
T2PR_PR_LENGTH                           equ 0008h
T2PR_PR_MASK                             equ 00FFh
T2PR_T2PR_POSN                           equ 0000h
T2PR_T2PR_POSITION                       equ 0000h
T2PR_T2PR_SIZE                           equ 0008h
T2PR_T2PR_LENGTH                         equ 0008h
T2PR_T2PR_MASK                           equ 00FFh

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
T2HLT_MODE_SIZE                          equ 0005h
T2HLT_MODE_LENGTH                        equ 0005h
T2HLT_MODE_MASK                          equ 001Fh
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
T2HLT_MODE4_POSN                         equ 0004h
T2HLT_MODE4_POSITION                     equ 0004h
T2HLT_MODE4_SIZE                         equ 0001h
T2HLT_MODE4_LENGTH                       equ 0001h
T2HLT_MODE4_MASK                         equ 0010h
T2HLT_T2MODE_POSN                        equ 0000h
T2HLT_T2MODE_POSITION                    equ 0000h
T2HLT_T2MODE_SIZE                        equ 0005h
T2HLT_T2MODE_LENGTH                      equ 0005h
T2HLT_T2MODE_MASK                        equ 001Fh
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
T2HLT_T2MODE4_POSN                       equ 0004h
T2HLT_T2MODE4_POSITION                   equ 0004h
T2HLT_T2MODE4_SIZE                       equ 0001h
T2HLT_T2MODE4_LENGTH                     equ 0001h
T2HLT_T2MODE4_MASK                       equ 0010h

// Register: T2CLKCON
#define T2CLKCON T2CLKCON
T2CLKCON                                 equ 001Eh
// bitfield definitions
T2CLKCON_CS_POSN                         equ 0000h
T2CLKCON_CS_POSITION                     equ 0000h
T2CLKCON_CS_SIZE                         equ 0004h
T2CLKCON_CS_LENGTH                       equ 0004h
T2CLKCON_CS_MASK                         equ 000Fh
T2CLKCON_CS0_POSN                        equ 0000h
T2CLKCON_CS0_POSITION                    equ 0000h
T2CLKCON_CS0_SIZE                        equ 0001h
T2CLKCON_CS0_LENGTH                      equ 0001h
T2CLKCON_CS0_MASK                        equ 0001h
T2CLKCON_CS1_POSN                        equ 0001h
T2CLKCON_CS1_POSITION                    equ 0001h
T2CLKCON_CS1_SIZE                        equ 0001h
T2CLKCON_CS1_LENGTH                      equ 0001h
T2CLKCON_CS1_MASK                        equ 0002h
T2CLKCON_CS2_POSN                        equ 0002h
T2CLKCON_CS2_POSITION                    equ 0002h
T2CLKCON_CS2_SIZE                        equ 0001h
T2CLKCON_CS2_LENGTH                      equ 0001h
T2CLKCON_CS2_MASK                        equ 0004h
T2CLKCON_CS3_POSN                        equ 0003h
T2CLKCON_CS3_POSITION                    equ 0003h
T2CLKCON_CS3_SIZE                        equ 0001h
T2CLKCON_CS3_LENGTH                      equ 0001h
T2CLKCON_CS3_MASK                        equ 0008h
T2CLKCON_T2CS_POSN                       equ 0000h
T2CLKCON_T2CS_POSITION                   equ 0000h
T2CLKCON_T2CS_SIZE                       equ 0004h
T2CLKCON_T2CS_LENGTH                     equ 0004h
T2CLKCON_T2CS_MASK                       equ 000Fh
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
T2CLKCON_T2CS3_POSN                      equ 0003h
T2CLKCON_T2CS3_POSITION                  equ 0003h
T2CLKCON_T2CS3_SIZE                      equ 0001h
T2CLKCON_T2CS3_LENGTH                    equ 0001h
T2CLKCON_T2CS3_MASK                      equ 0008h

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

// Register: TRISB
#define TRISB TRISB
TRISB                                    equ 008Dh
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
PIE1_CCPIE_POSN                          equ 0002h
PIE1_CCPIE_POSITION                      equ 0002h
PIE1_CCPIE_SIZE                          equ 0001h
PIE1_CCPIE_LENGTH                        equ 0001h
PIE1_CCPIE_MASK                          equ 0004h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0092h
// bitfield definitions
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h
PIE2_C3IE_POSN                           equ 0001h
PIE2_C3IE_POSITION                       equ 0001h
PIE2_C3IE_SIZE                           equ 0001h
PIE2_C3IE_LENGTH                         equ 0001h
PIE2_C3IE_MASK                           equ 0002h
PIE2_C4IE_POSN                           equ 0002h
PIE2_C4IE_POSITION                       equ 0002h
PIE2_C4IE_SIZE                           equ 0001h
PIE2_C4IE_LENGTH                         equ 0001h
PIE2_C4IE_MASK                           equ 0004h
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h
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
PIE2_OSFIE_POSN                          equ 0007h
PIE2_OSFIE_POSITION                      equ 0007h
PIE2_OSFIE_SIZE                          equ 0001h
PIE2_OSFIE_LENGTH                        equ 0001h
PIE2_OSFIE_MASK                          equ 0080h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0093h
// bitfield definitions
PIE3_CLC1IE_POSN                         equ 0000h
PIE3_CLC1IE_POSITION                     equ 0000h
PIE3_CLC1IE_SIZE                         equ 0001h
PIE3_CLC1IE_LENGTH                       equ 0001h
PIE3_CLC1IE_MASK                         equ 0001h
PIE3_CLC2IE_POSN                         equ 0001h
PIE3_CLC2IE_POSITION                     equ 0001h
PIE3_CLC2IE_SIZE                         equ 0001h
PIE3_CLC2IE_LENGTH                       equ 0001h
PIE3_CLC2IE_MASK                         equ 0002h
PIE3_CLC3IE_POSN                         equ 0002h
PIE3_CLC3IE_POSITION                     equ 0002h
PIE3_CLC3IE_SIZE                         equ 0001h
PIE3_CLC3IE_LENGTH                       equ 0001h
PIE3_CLC3IE_MASK                         equ 0004h
PIE3_COG2IE_POSN                         equ 0003h
PIE3_COG2IE_POSITION                     equ 0003h
PIE3_COG2IE_SIZE                         equ 0001h
PIE3_COG2IE_LENGTH                       equ 0001h
PIE3_COG2IE_MASK                         equ 0008h
PIE3_ZCDIE_POSN                          equ 0004h
PIE3_ZCDIE_POSITION                      equ 0004h
PIE3_ZCDIE_SIZE                          equ 0001h
PIE3_ZCDIE_LENGTH                        equ 0001h
PIE3_ZCDIE_MASK                          equ 0010h
PIE3_COGIE_POSN                          equ 0005h
PIE3_COGIE_POSITION                      equ 0005h
PIE3_COGIE_SIZE                          equ 0001h
PIE3_COGIE_LENGTH                        equ 0001h
PIE3_COGIE_MASK                          equ 0020h
PIE3_PWM5IE_POSN                         equ 0006h
PIE3_PWM5IE_POSITION                     equ 0006h
PIE3_PWM5IE_SIZE                         equ 0001h
PIE3_PWM5IE_LENGTH                       equ 0001h
PIE3_PWM5IE_MASK                         equ 0040h
PIE3_PWM6IE_POSN                         equ 0007h
PIE3_PWM6IE_POSITION                     equ 0007h
PIE3_PWM6IE_SIZE                         equ 0001h
PIE3_PWM6IE_LENGTH                       equ 0001h
PIE3_PWM6IE_MASK                         equ 0080h

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 0094h
// bitfield definitions
PIE4_TMR4IE_POSN                         equ 0000h
PIE4_TMR4IE_POSITION                     equ 0000h
PIE4_TMR4IE_SIZE                         equ 0001h
PIE4_TMR4IE_LENGTH                       equ 0001h
PIE4_TMR4IE_MASK                         equ 0001h
PIE4_TMR6IE_POSN                         equ 0001h
PIE4_TMR6IE_POSITION                     equ 0001h
PIE4_TMR6IE_SIZE                         equ 0001h
PIE4_TMR6IE_LENGTH                       equ 0001h
PIE4_TMR6IE_MASK                         equ 0002h
PIE4_TMR3IE_POSN                         equ 0002h
PIE4_TMR3IE_POSITION                     equ 0002h
PIE4_TMR3IE_SIZE                         equ 0001h
PIE4_TMR3IE_LENGTH                       equ 0001h
PIE4_TMR3IE_MASK                         equ 0004h
PIE4_TMR3GIE_POSN                        equ 0003h
PIE4_TMR3GIE_POSITION                    equ 0003h
PIE4_TMR3GIE_SIZE                        equ 0001h
PIE4_TMR3GIE_LENGTH                      equ 0001h
PIE4_TMR3GIE_MASK                        equ 0008h
PIE4_TMR5IE_POSN                         equ 0004h
PIE4_TMR5IE_POSITION                     equ 0004h
PIE4_TMR5IE_SIZE                         equ 0001h
PIE4_TMR5IE_LENGTH                       equ 0001h
PIE4_TMR5IE_MASK                         equ 0010h
PIE4_TMR5GIE_POSN                        equ 0005h
PIE4_TMR5GIE_POSITION                    equ 0005h
PIE4_TMR5GIE_SIZE                        equ 0001h
PIE4_TMR5GIE_LENGTH                      equ 0001h
PIE4_TMR5GIE_MASK                        equ 0020h

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

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0097h
// bitfield definitions
WDTCON_SWDTEN_POSN                       equ 0000h
WDTCON_SWDTEN_POSITION                   equ 0000h
WDTCON_SWDTEN_SIZE                       equ 0001h
WDTCON_SWDTEN_LENGTH                     equ 0001h
WDTCON_SWDTEN_MASK                       equ 0001h
WDTCON_WDTPS_POSN                        equ 0001h
WDTCON_WDTPS_POSITION                    equ 0001h
WDTCON_WDTPS_SIZE                        equ 0005h
WDTCON_WDTPS_LENGTH                      equ 0005h
WDTCON_WDTPS_MASK                        equ 003Eh
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
WDTCON_WDTPS4_POSN                       equ 0005h
WDTCON_WDTPS4_POSITION                   equ 0005h
WDTCON_WDTPS4_SIZE                       equ 0001h
WDTCON_WDTPS4_LENGTH                     equ 0001h
WDTCON_WDTPS4_MASK                       equ 0020h

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
OSCSTAT_OSTS_POSN                        equ 0005h
OSCSTAT_OSTS_POSITION                    equ 0005h
OSCSTAT_OSTS_SIZE                        equ 0001h
OSCSTAT_OSTS_LENGTH                      equ 0001h
OSCSTAT_OSTS_MASK                        equ 0020h
OSCSTAT_PLLR_POSN                        equ 0006h
OSCSTAT_PLLR_POSITION                    equ 0006h
OSCSTAT_PLLR_SIZE                        equ 0001h
OSCSTAT_PLLR_LENGTH                      equ 0001h
OSCSTAT_PLLR_MASK                        equ 0040h
OSCSTAT_SOSCR_POSN                       equ 0007h
OSCSTAT_SOSCR_POSITION                   equ 0007h
OSCSTAT_SOSCR_SIZE                       equ 0001h
OSCSTAT_SOSCR_LENGTH                     equ 0001h
OSCSTAT_SOSCR_MASK                       equ 0080h

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
ADCON1_ADNREF_POSN                       equ 0002h
ADCON1_ADNREF_POSITION                   equ 0002h
ADCON1_ADNREF_SIZE                       equ 0001h
ADCON1_ADNREF_LENGTH                     equ 0001h
ADCON1_ADNREF_MASK                       equ 0004h
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

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 009Fh
// bitfield definitions
ADCON2_TRIGSEL_POSN                      equ 0003h
ADCON2_TRIGSEL_POSITION                  equ 0003h
ADCON2_TRIGSEL_SIZE                      equ 0005h
ADCON2_TRIGSEL_LENGTH                    equ 0005h
ADCON2_TRIGSEL_MASK                      equ 00F8h
ADCON2_TRIGSEL0_POSN                     equ 0003h
ADCON2_TRIGSEL0_POSITION                 equ 0003h
ADCON2_TRIGSEL0_SIZE                     equ 0001h
ADCON2_TRIGSEL0_LENGTH                   equ 0001h
ADCON2_TRIGSEL0_MASK                     equ 0008h
ADCON2_TRIGSEL1_POSN                     equ 0004h
ADCON2_TRIGSEL1_POSITION                 equ 0004h
ADCON2_TRIGSEL1_SIZE                     equ 0001h
ADCON2_TRIGSEL1_LENGTH                   equ 0001h
ADCON2_TRIGSEL1_MASK                     equ 0010h
ADCON2_TRIGSEL2_POSN                     equ 0005h
ADCON2_TRIGSEL2_POSITION                 equ 0005h
ADCON2_TRIGSEL2_SIZE                     equ 0001h
ADCON2_TRIGSEL2_LENGTH                   equ 0001h
ADCON2_TRIGSEL2_MASK                     equ 0020h
ADCON2_TRIGSEL3_POSN                     equ 0006h
ADCON2_TRIGSEL3_POSITION                 equ 0006h
ADCON2_TRIGSEL3_SIZE                     equ 0001h
ADCON2_TRIGSEL3_LENGTH                   equ 0001h
ADCON2_TRIGSEL3_MASK                     equ 0040h
ADCON2_TRIGSEL4_POSN                     equ 0007h
ADCON2_TRIGSEL4_POSITION                 equ 0007h
ADCON2_TRIGSEL4_SIZE                     equ 0001h
ADCON2_TRIGSEL4_LENGTH                   equ 0001h
ADCON2_TRIGSEL4_MASK                     equ 0080h

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

// Register: LATB
#define LATB LATB
LATB                                     equ 010Dh
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

// Register: CMOUT
#define CMOUT CMOUT
CMOUT                                    equ 010Fh
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
CMOUT_MC3OUT_POSN                        equ 0002h
CMOUT_MC3OUT_POSITION                    equ 0002h
CMOUT_MC3OUT_SIZE                        equ 0001h
CMOUT_MC3OUT_LENGTH                      equ 0001h
CMOUT_MC3OUT_MASK                        equ 0004h
CMOUT_MC4OUT_POSN                        equ 0003h
CMOUT_MC4OUT_POSITION                    equ 0003h
CMOUT_MC4OUT_SIZE                        equ 0001h
CMOUT_MC4OUT_LENGTH                      equ 0001h
CMOUT_MC4OUT_MASK                        equ 0008h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0110h
// bitfield definitions
CM1CON0_SYNC_POSN                        equ 0000h
CM1CON0_SYNC_POSITION                    equ 0000h
CM1CON0_SYNC_SIZE                        equ 0001h
CM1CON0_SYNC_LENGTH                      equ 0001h
CM1CON0_SYNC_MASK                        equ 0001h
CM1CON0_HYS_POSN                         equ 0001h
CM1CON0_HYS_POSITION                     equ 0001h
CM1CON0_HYS_SIZE                         equ 0001h
CM1CON0_HYS_LENGTH                       equ 0001h
CM1CON0_HYS_MASK                         equ 0002h
CM1CON0_ZLF_POSN                         equ 0003h
CM1CON0_ZLF_POSITION                     equ 0003h
CM1CON0_ZLF_SIZE                         equ 0001h
CM1CON0_ZLF_LENGTH                       equ 0001h
CM1CON0_ZLF_MASK                         equ 0008h
CM1CON0_POL_POSN                         equ 0004h
CM1CON0_POL_POSITION                     equ 0004h
CM1CON0_POL_SIZE                         equ 0001h
CM1CON0_POL_LENGTH                       equ 0001h
CM1CON0_POL_MASK                         equ 0010h
CM1CON0_OUT_POSN                         equ 0006h
CM1CON0_OUT_POSITION                     equ 0006h
CM1CON0_OUT_SIZE                         equ 0001h
CM1CON0_OUT_LENGTH                       equ 0001h
CM1CON0_OUT_MASK                         equ 0040h
CM1CON0_ON_POSN                          equ 0007h
CM1CON0_ON_POSITION                      equ 0007h
CM1CON0_ON_SIZE                          equ 0001h
CM1CON0_ON_LENGTH                        equ 0001h
CM1CON0_ON_MASK                          equ 0080h
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
CM1CON1                                  equ 0111h
// bitfield definitions
CM1CON1_INTN_POSN                        equ 0000h
CM1CON1_INTN_POSITION                    equ 0000h
CM1CON1_INTN_SIZE                        equ 0001h
CM1CON1_INTN_LENGTH                      equ 0001h
CM1CON1_INTN_MASK                        equ 0001h
CM1CON1_INTP_POSN                        equ 0001h
CM1CON1_INTP_POSITION                    equ 0001h
CM1CON1_INTP_SIZE                        equ 0001h
CM1CON1_INTP_LENGTH                      equ 0001h
CM1CON1_INTP_MASK                        equ 0002h
CM1CON1_C1INTN_POSN                      equ 0000h
CM1CON1_C1INTN_POSITION                  equ 0000h
CM1CON1_C1INTN_SIZE                      equ 0001h
CM1CON1_C1INTN_LENGTH                    equ 0001h
CM1CON1_C1INTN_MASK                      equ 0001h
CM1CON1_C1INTP_POSN                      equ 0001h
CM1CON1_C1INTP_POSITION                  equ 0001h
CM1CON1_C1INTP_SIZE                      equ 0001h
CM1CON1_C1INTP_LENGTH                    equ 0001h
CM1CON1_C1INTP_MASK                      equ 0002h

// Register: CM1NSEL
#define CM1NSEL CM1NSEL
CM1NSEL                                  equ 0112h
// bitfield definitions
CM1NSEL_NCH_POSN                         equ 0000h
CM1NSEL_NCH_POSITION                     equ 0000h
CM1NSEL_NCH_SIZE                         equ 0003h
CM1NSEL_NCH_LENGTH                       equ 0003h
CM1NSEL_NCH_MASK                         equ 0007h
CM1NSEL_NCH0_POSN                        equ 0000h
CM1NSEL_NCH0_POSITION                    equ 0000h
CM1NSEL_NCH0_SIZE                        equ 0001h
CM1NSEL_NCH0_LENGTH                      equ 0001h
CM1NSEL_NCH0_MASK                        equ 0001h
CM1NSEL_NCH1_POSN                        equ 0001h
CM1NSEL_NCH1_POSITION                    equ 0001h
CM1NSEL_NCH1_SIZE                        equ 0001h
CM1NSEL_NCH1_LENGTH                      equ 0001h
CM1NSEL_NCH1_MASK                        equ 0002h
CM1NSEL_NCH2_POSN                        equ 0002h
CM1NSEL_NCH2_POSITION                    equ 0002h
CM1NSEL_NCH2_SIZE                        equ 0001h
CM1NSEL_NCH2_LENGTH                      equ 0001h
CM1NSEL_NCH2_MASK                        equ 0004h
CM1NSEL_C1NCH_POSN                       equ 0000h
CM1NSEL_C1NCH_POSITION                   equ 0000h
CM1NSEL_C1NCH_SIZE                       equ 0003h
CM1NSEL_C1NCH_LENGTH                     equ 0003h
CM1NSEL_C1NCH_MASK                       equ 0007h
CM1NSEL_C1NCH0_POSN                      equ 0000h
CM1NSEL_C1NCH0_POSITION                  equ 0000h
CM1NSEL_C1NCH0_SIZE                      equ 0001h
CM1NSEL_C1NCH0_LENGTH                    equ 0001h
CM1NSEL_C1NCH0_MASK                      equ 0001h
CM1NSEL_C1NCH1_POSN                      equ 0001h
CM1NSEL_C1NCH1_POSITION                  equ 0001h
CM1NSEL_C1NCH1_SIZE                      equ 0001h
CM1NSEL_C1NCH1_LENGTH                    equ 0001h
CM1NSEL_C1NCH1_MASK                      equ 0002h
CM1NSEL_C1NCH2_POSN                      equ 0002h
CM1NSEL_C1NCH2_POSITION                  equ 0002h
CM1NSEL_C1NCH2_SIZE                      equ 0001h
CM1NSEL_C1NCH2_LENGTH                    equ 0001h
CM1NSEL_C1NCH2_MASK                      equ 0004h

// Register: CM1PSEL
#define CM1PSEL CM1PSEL
CM1PSEL                                  equ 0113h
// bitfield definitions
CM1PSEL_PCH_POSN                         equ 0000h
CM1PSEL_PCH_POSITION                     equ 0000h
CM1PSEL_PCH_SIZE                         equ 0004h
CM1PSEL_PCH_LENGTH                       equ 0004h
CM1PSEL_PCH_MASK                         equ 000Fh
CM1PSEL_PCH0_POSN                        equ 0000h
CM1PSEL_PCH0_POSITION                    equ 0000h
CM1PSEL_PCH0_SIZE                        equ 0001h
CM1PSEL_PCH0_LENGTH                      equ 0001h
CM1PSEL_PCH0_MASK                        equ 0001h
CM1PSEL_PCH1_POSN                        equ 0001h
CM1PSEL_PCH1_POSITION                    equ 0001h
CM1PSEL_PCH1_SIZE                        equ 0001h
CM1PSEL_PCH1_LENGTH                      equ 0001h
CM1PSEL_PCH1_MASK                        equ 0002h
CM1PSEL_PCH2_POSN                        equ 0002h
CM1PSEL_PCH2_POSITION                    equ 0002h
CM1PSEL_PCH2_SIZE                        equ 0001h
CM1PSEL_PCH2_LENGTH                      equ 0001h
CM1PSEL_PCH2_MASK                        equ 0004h
CM1PSEL_PCH3_POSN                        equ 0003h
CM1PSEL_PCH3_POSITION                    equ 0003h
CM1PSEL_PCH3_SIZE                        equ 0001h
CM1PSEL_PCH3_LENGTH                      equ 0001h
CM1PSEL_PCH3_MASK                        equ 0008h
CM1PSEL_C1PCH_POSN                       equ 0000h
CM1PSEL_C1PCH_POSITION                   equ 0000h
CM1PSEL_C1PCH_SIZE                       equ 0004h
CM1PSEL_C1PCH_LENGTH                     equ 0004h
CM1PSEL_C1PCH_MASK                       equ 000Fh
CM1PSEL_C1PCH0_POSN                      equ 0000h
CM1PSEL_C1PCH0_POSITION                  equ 0000h
CM1PSEL_C1PCH0_SIZE                      equ 0001h
CM1PSEL_C1PCH0_LENGTH                    equ 0001h
CM1PSEL_C1PCH0_MASK                      equ 0001h
CM1PSEL_C1PCH1_POSN                      equ 0001h
CM1PSEL_C1PCH1_POSITION                  equ 0001h
CM1PSEL_C1PCH1_SIZE                      equ 0001h
CM1PSEL_C1PCH1_LENGTH                    equ 0001h
CM1PSEL_C1PCH1_MASK                      equ 0002h
CM1PSEL_C1PCH2_POSN                      equ 0002h
CM1PSEL_C1PCH2_POSITION                  equ 0002h
CM1PSEL_C1PCH2_SIZE                      equ 0001h
CM1PSEL_C1PCH2_LENGTH                    equ 0001h
CM1PSEL_C1PCH2_MASK                      equ 0004h
CM1PSEL_C1PCH3_POSN                      equ 0003h
CM1PSEL_C1PCH3_POSITION                  equ 0003h
CM1PSEL_C1PCH3_SIZE                      equ 0001h
CM1PSEL_C1PCH3_LENGTH                    equ 0001h
CM1PSEL_C1PCH3_MASK                      equ 0008h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0114h
// bitfield definitions
CM2CON0_SYNC_POSN                        equ 0000h
CM2CON0_SYNC_POSITION                    equ 0000h
CM2CON0_SYNC_SIZE                        equ 0001h
CM2CON0_SYNC_LENGTH                      equ 0001h
CM2CON0_SYNC_MASK                        equ 0001h
CM2CON0_HYS_POSN                         equ 0001h
CM2CON0_HYS_POSITION                     equ 0001h
CM2CON0_HYS_SIZE                         equ 0001h
CM2CON0_HYS_LENGTH                       equ 0001h
CM2CON0_HYS_MASK                         equ 0002h
CM2CON0_ZLF_POSN                         equ 0003h
CM2CON0_ZLF_POSITION                     equ 0003h
CM2CON0_ZLF_SIZE                         equ 0001h
CM2CON0_ZLF_LENGTH                       equ 0001h
CM2CON0_ZLF_MASK                         equ 0008h
CM2CON0_POL_POSN                         equ 0004h
CM2CON0_POL_POSITION                     equ 0004h
CM2CON0_POL_SIZE                         equ 0001h
CM2CON0_POL_LENGTH                       equ 0001h
CM2CON0_POL_MASK                         equ 0010h
CM2CON0_OUT_POSN                         equ 0006h
CM2CON0_OUT_POSITION                     equ 0006h
CM2CON0_OUT_SIZE                         equ 0001h
CM2CON0_OUT_LENGTH                       equ 0001h
CM2CON0_OUT_MASK                         equ 0040h
CM2CON0_ON_POSN                          equ 0007h
CM2CON0_ON_POSITION                      equ 0007h
CM2CON0_ON_SIZE                          equ 0001h
CM2CON0_ON_LENGTH                        equ 0001h
CM2CON0_ON_MASK                          equ 0080h
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
CM2CON1                                  equ 0115h
// bitfield definitions
CM2CON1_INTN_POSN                        equ 0000h
CM2CON1_INTN_POSITION                    equ 0000h
CM2CON1_INTN_SIZE                        equ 0001h
CM2CON1_INTN_LENGTH                      equ 0001h
CM2CON1_INTN_MASK                        equ 0001h
CM2CON1_INTP_POSN                        equ 0001h
CM2CON1_INTP_POSITION                    equ 0001h
CM2CON1_INTP_SIZE                        equ 0001h
CM2CON1_INTP_LENGTH                      equ 0001h
CM2CON1_INTP_MASK                        equ 0002h
CM2CON1_C2INTN_POSN                      equ 0000h
CM2CON1_C2INTN_POSITION                  equ 0000h
CM2CON1_C2INTN_SIZE                      equ 0001h
CM2CON1_C2INTN_LENGTH                    equ 0001h
CM2CON1_C2INTN_MASK                      equ 0001h
CM2CON1_C2INTP_POSN                      equ 0001h
CM2CON1_C2INTP_POSITION                  equ 0001h
CM2CON1_C2INTP_SIZE                      equ 0001h
CM2CON1_C2INTP_LENGTH                    equ 0001h
CM2CON1_C2INTP_MASK                      equ 0002h

// Register: CM2NSEL
#define CM2NSEL CM2NSEL
CM2NSEL                                  equ 0116h
// bitfield definitions
CM2NSEL_NCH_POSN                         equ 0000h
CM2NSEL_NCH_POSITION                     equ 0000h
CM2NSEL_NCH_SIZE                         equ 0003h
CM2NSEL_NCH_LENGTH                       equ 0003h
CM2NSEL_NCH_MASK                         equ 0007h
CM2NSEL_NCH0_POSN                        equ 0000h
CM2NSEL_NCH0_POSITION                    equ 0000h
CM2NSEL_NCH0_SIZE                        equ 0001h
CM2NSEL_NCH0_LENGTH                      equ 0001h
CM2NSEL_NCH0_MASK                        equ 0001h
CM2NSEL_NCH1_POSN                        equ 0001h
CM2NSEL_NCH1_POSITION                    equ 0001h
CM2NSEL_NCH1_SIZE                        equ 0001h
CM2NSEL_NCH1_LENGTH                      equ 0001h
CM2NSEL_NCH1_MASK                        equ 0002h
CM2NSEL_NCH2_POSN                        equ 0002h
CM2NSEL_NCH2_POSITION                    equ 0002h
CM2NSEL_NCH2_SIZE                        equ 0001h
CM2NSEL_NCH2_LENGTH                      equ 0001h
CM2NSEL_NCH2_MASK                        equ 0004h
CM2NSEL_C2NCH_POSN                       equ 0000h
CM2NSEL_C2NCH_POSITION                   equ 0000h
CM2NSEL_C2NCH_SIZE                       equ 0003h
CM2NSEL_C2NCH_LENGTH                     equ 0003h
CM2NSEL_C2NCH_MASK                       equ 0007h
CM2NSEL_C2NCH0_POSN                      equ 0000h
CM2NSEL_C2NCH0_POSITION                  equ 0000h
CM2NSEL_C2NCH0_SIZE                      equ 0001h
CM2NSEL_C2NCH0_LENGTH                    equ 0001h
CM2NSEL_C2NCH0_MASK                      equ 0001h
CM2NSEL_C2NCH1_POSN                      equ 0001h
CM2NSEL_C2NCH1_POSITION                  equ 0001h
CM2NSEL_C2NCH1_SIZE                      equ 0001h
CM2NSEL_C2NCH1_LENGTH                    equ 0001h
CM2NSEL_C2NCH1_MASK                      equ 0002h
CM2NSEL_C2NCH2_POSN                      equ 0002h
CM2NSEL_C2NCH2_POSITION                  equ 0002h
CM2NSEL_C2NCH2_SIZE                      equ 0001h
CM2NSEL_C2NCH2_LENGTH                    equ 0001h
CM2NSEL_C2NCH2_MASK                      equ 0004h

// Register: CM2PSEL
#define CM2PSEL CM2PSEL
CM2PSEL                                  equ 0117h
// bitfield definitions
CM2PSEL_PCH_POSN                         equ 0000h
CM2PSEL_PCH_POSITION                     equ 0000h
CM2PSEL_PCH_SIZE                         equ 0004h
CM2PSEL_PCH_LENGTH                       equ 0004h
CM2PSEL_PCH_MASK                         equ 000Fh
CM2PSEL_PCH0_POSN                        equ 0000h
CM2PSEL_PCH0_POSITION                    equ 0000h
CM2PSEL_PCH0_SIZE                        equ 0001h
CM2PSEL_PCH0_LENGTH                      equ 0001h
CM2PSEL_PCH0_MASK                        equ 0001h
CM2PSEL_PCH1_POSN                        equ 0001h
CM2PSEL_PCH1_POSITION                    equ 0001h
CM2PSEL_PCH1_SIZE                        equ 0001h
CM2PSEL_PCH1_LENGTH                      equ 0001h
CM2PSEL_PCH1_MASK                        equ 0002h
CM2PSEL_PCH2_POSN                        equ 0002h
CM2PSEL_PCH2_POSITION                    equ 0002h
CM2PSEL_PCH2_SIZE                        equ 0001h
CM2PSEL_PCH2_LENGTH                      equ 0001h
CM2PSEL_PCH2_MASK                        equ 0004h
CM2PSEL_PCH3_POSN                        equ 0003h
CM2PSEL_PCH3_POSITION                    equ 0003h
CM2PSEL_PCH3_SIZE                        equ 0001h
CM2PSEL_PCH3_LENGTH                      equ 0001h
CM2PSEL_PCH3_MASK                        equ 0008h
CM2PSEL_C2PCH_POSN                       equ 0000h
CM2PSEL_C2PCH_POSITION                   equ 0000h
CM2PSEL_C2PCH_SIZE                       equ 0004h
CM2PSEL_C2PCH_LENGTH                     equ 0004h
CM2PSEL_C2PCH_MASK                       equ 000Fh
CM2PSEL_C2PCH0_POSN                      equ 0000h
CM2PSEL_C2PCH0_POSITION                  equ 0000h
CM2PSEL_C2PCH0_SIZE                      equ 0001h
CM2PSEL_C2PCH0_LENGTH                    equ 0001h
CM2PSEL_C2PCH0_MASK                      equ 0001h
CM2PSEL_C2PCH1_POSN                      equ 0001h
CM2PSEL_C2PCH1_POSITION                  equ 0001h
CM2PSEL_C2PCH1_SIZE                      equ 0001h
CM2PSEL_C2PCH1_LENGTH                    equ 0001h
CM2PSEL_C2PCH1_MASK                      equ 0002h
CM2PSEL_C2PCH2_POSN                      equ 0002h
CM2PSEL_C2PCH2_POSITION                  equ 0002h
CM2PSEL_C2PCH2_SIZE                      equ 0001h
CM2PSEL_C2PCH2_LENGTH                    equ 0001h
CM2PSEL_C2PCH2_MASK                      equ 0004h
CM2PSEL_C2PCH3_POSN                      equ 0003h
CM2PSEL_C2PCH3_POSITION                  equ 0003h
CM2PSEL_C2PCH3_SIZE                      equ 0001h
CM2PSEL_C2PCH3_LENGTH                    equ 0001h
CM2PSEL_C2PCH3_MASK                      equ 0008h

// Register: CM3CON0
#define CM3CON0 CM3CON0
CM3CON0                                  equ 0118h
// bitfield definitions
CM3CON0_SYNC_POSN                        equ 0000h
CM3CON0_SYNC_POSITION                    equ 0000h
CM3CON0_SYNC_SIZE                        equ 0001h
CM3CON0_SYNC_LENGTH                      equ 0001h
CM3CON0_SYNC_MASK                        equ 0001h
CM3CON0_HYS_POSN                         equ 0001h
CM3CON0_HYS_POSITION                     equ 0001h
CM3CON0_HYS_SIZE                         equ 0001h
CM3CON0_HYS_LENGTH                       equ 0001h
CM3CON0_HYS_MASK                         equ 0002h
CM3CON0_ZLF_POSN                         equ 0003h
CM3CON0_ZLF_POSITION                     equ 0003h
CM3CON0_ZLF_SIZE                         equ 0001h
CM3CON0_ZLF_LENGTH                       equ 0001h
CM3CON0_ZLF_MASK                         equ 0008h
CM3CON0_POL_POSN                         equ 0004h
CM3CON0_POL_POSITION                     equ 0004h
CM3CON0_POL_SIZE                         equ 0001h
CM3CON0_POL_LENGTH                       equ 0001h
CM3CON0_POL_MASK                         equ 0010h
CM3CON0_OUT_POSN                         equ 0006h
CM3CON0_OUT_POSITION                     equ 0006h
CM3CON0_OUT_SIZE                         equ 0001h
CM3CON0_OUT_LENGTH                       equ 0001h
CM3CON0_OUT_MASK                         equ 0040h
CM3CON0_ON_POSN                          equ 0007h
CM3CON0_ON_POSITION                      equ 0007h
CM3CON0_ON_SIZE                          equ 0001h
CM3CON0_ON_LENGTH                        equ 0001h
CM3CON0_ON_MASK                          equ 0080h
CM3CON0_C3SYNC_POSN                      equ 0000h
CM3CON0_C3SYNC_POSITION                  equ 0000h
CM3CON0_C3SYNC_SIZE                      equ 0001h
CM3CON0_C3SYNC_LENGTH                    equ 0001h
CM3CON0_C3SYNC_MASK                      equ 0001h
CM3CON0_C3HYS_POSN                       equ 0001h
CM3CON0_C3HYS_POSITION                   equ 0001h
CM3CON0_C3HYS_SIZE                       equ 0001h
CM3CON0_C3HYS_LENGTH                     equ 0001h
CM3CON0_C3HYS_MASK                       equ 0002h
CM3CON0_C3SP_POSN                        equ 0002h
CM3CON0_C3SP_POSITION                    equ 0002h
CM3CON0_C3SP_SIZE                        equ 0001h
CM3CON0_C3SP_LENGTH                      equ 0001h
CM3CON0_C3SP_MASK                        equ 0004h
CM3CON0_C3ZLF_POSN                       equ 0003h
CM3CON0_C3ZLF_POSITION                   equ 0003h
CM3CON0_C3ZLF_SIZE                       equ 0001h
CM3CON0_C3ZLF_LENGTH                     equ 0001h
CM3CON0_C3ZLF_MASK                       equ 0008h
CM3CON0_C3POL_POSN                       equ 0004h
CM3CON0_C3POL_POSITION                   equ 0004h
CM3CON0_C3POL_SIZE                       equ 0001h
CM3CON0_C3POL_LENGTH                     equ 0001h
CM3CON0_C3POL_MASK                       equ 0010h
CM3CON0_C3OUT_POSN                       equ 0006h
CM3CON0_C3OUT_POSITION                   equ 0006h
CM3CON0_C3OUT_SIZE                       equ 0001h
CM3CON0_C3OUT_LENGTH                     equ 0001h
CM3CON0_C3OUT_MASK                       equ 0040h
CM3CON0_C3ON_POSN                        equ 0007h
CM3CON0_C3ON_POSITION                    equ 0007h
CM3CON0_C3ON_SIZE                        equ 0001h
CM3CON0_C3ON_LENGTH                      equ 0001h
CM3CON0_C3ON_MASK                        equ 0080h

// Register: CM3CON1
#define CM3CON1 CM3CON1
CM3CON1                                  equ 0119h
// bitfield definitions
CM3CON1_INTN_POSN                        equ 0000h
CM3CON1_INTN_POSITION                    equ 0000h
CM3CON1_INTN_SIZE                        equ 0001h
CM3CON1_INTN_LENGTH                      equ 0001h
CM3CON1_INTN_MASK                        equ 0001h
CM3CON1_INTP_POSN                        equ 0001h
CM3CON1_INTP_POSITION                    equ 0001h
CM3CON1_INTP_SIZE                        equ 0001h
CM3CON1_INTP_LENGTH                      equ 0001h
CM3CON1_INTP_MASK                        equ 0002h
CM3CON1_C3INTN_POSN                      equ 0000h
CM3CON1_C3INTN_POSITION                  equ 0000h
CM3CON1_C3INTN_SIZE                      equ 0001h
CM3CON1_C3INTN_LENGTH                    equ 0001h
CM3CON1_C3INTN_MASK                      equ 0001h
CM3CON1_C3INTP_POSN                      equ 0001h
CM3CON1_C3INTP_POSITION                  equ 0001h
CM3CON1_C3INTP_SIZE                      equ 0001h
CM3CON1_C3INTP_LENGTH                    equ 0001h
CM3CON1_C3INTP_MASK                      equ 0002h

// Register: CM3NSEL
#define CM3NSEL CM3NSEL
CM3NSEL                                  equ 011Ah
// bitfield definitions
CM3NSEL_NCH_POSN                         equ 0000h
CM3NSEL_NCH_POSITION                     equ 0000h
CM3NSEL_NCH_SIZE                         equ 0003h
CM3NSEL_NCH_LENGTH                       equ 0003h
CM3NSEL_NCH_MASK                         equ 0007h
CM3NSEL_NCH0_POSN                        equ 0000h
CM3NSEL_NCH0_POSITION                    equ 0000h
CM3NSEL_NCH0_SIZE                        equ 0001h
CM3NSEL_NCH0_LENGTH                      equ 0001h
CM3NSEL_NCH0_MASK                        equ 0001h
CM3NSEL_NCH1_POSN                        equ 0001h
CM3NSEL_NCH1_POSITION                    equ 0001h
CM3NSEL_NCH1_SIZE                        equ 0001h
CM3NSEL_NCH1_LENGTH                      equ 0001h
CM3NSEL_NCH1_MASK                        equ 0002h
CM3NSEL_NCH2_POSN                        equ 0002h
CM3NSEL_NCH2_POSITION                    equ 0002h
CM3NSEL_NCH2_SIZE                        equ 0001h
CM3NSEL_NCH2_LENGTH                      equ 0001h
CM3NSEL_NCH2_MASK                        equ 0004h
CM3NSEL_C3NCH_POSN                       equ 0000h
CM3NSEL_C3NCH_POSITION                   equ 0000h
CM3NSEL_C3NCH_SIZE                       equ 0003h
CM3NSEL_C3NCH_LENGTH                     equ 0003h
CM3NSEL_C3NCH_MASK                       equ 0007h
CM3NSEL_C3NCH0_POSN                      equ 0000h
CM3NSEL_C3NCH0_POSITION                  equ 0000h
CM3NSEL_C3NCH0_SIZE                      equ 0001h
CM3NSEL_C3NCH0_LENGTH                    equ 0001h
CM3NSEL_C3NCH0_MASK                      equ 0001h
CM3NSEL_C3NCH1_POSN                      equ 0001h
CM3NSEL_C3NCH1_POSITION                  equ 0001h
CM3NSEL_C3NCH1_SIZE                      equ 0001h
CM3NSEL_C3NCH1_LENGTH                    equ 0001h
CM3NSEL_C3NCH1_MASK                      equ 0002h
CM3NSEL_C3NCH2_POSN                      equ 0002h
CM3NSEL_C3NCH2_POSITION                  equ 0002h
CM3NSEL_C3NCH2_SIZE                      equ 0001h
CM3NSEL_C3NCH2_LENGTH                    equ 0001h
CM3NSEL_C3NCH2_MASK                      equ 0004h

// Register: CM3PSEL
#define CM3PSEL CM3PSEL
CM3PSEL                                  equ 011Bh
// bitfield definitions
CM3PSEL_PCH_POSN                         equ 0000h
CM3PSEL_PCH_POSITION                     equ 0000h
CM3PSEL_PCH_SIZE                         equ 0004h
CM3PSEL_PCH_LENGTH                       equ 0004h
CM3PSEL_PCH_MASK                         equ 000Fh
CM3PSEL_PCH0_POSN                        equ 0000h
CM3PSEL_PCH0_POSITION                    equ 0000h
CM3PSEL_PCH0_SIZE                        equ 0001h
CM3PSEL_PCH0_LENGTH                      equ 0001h
CM3PSEL_PCH0_MASK                        equ 0001h
CM3PSEL_PCH1_POSN                        equ 0001h
CM3PSEL_PCH1_POSITION                    equ 0001h
CM3PSEL_PCH1_SIZE                        equ 0001h
CM3PSEL_PCH1_LENGTH                      equ 0001h
CM3PSEL_PCH1_MASK                        equ 0002h
CM3PSEL_PCH2_POSN                        equ 0002h
CM3PSEL_PCH2_POSITION                    equ 0002h
CM3PSEL_PCH2_SIZE                        equ 0001h
CM3PSEL_PCH2_LENGTH                      equ 0001h
CM3PSEL_PCH2_MASK                        equ 0004h
CM3PSEL_PCH3_POSN                        equ 0003h
CM3PSEL_PCH3_POSITION                    equ 0003h
CM3PSEL_PCH3_SIZE                        equ 0001h
CM3PSEL_PCH3_LENGTH                      equ 0001h
CM3PSEL_PCH3_MASK                        equ 0008h
CM3PSEL_C3PCH_POSN                       equ 0000h
CM3PSEL_C3PCH_POSITION                   equ 0000h
CM3PSEL_C3PCH_SIZE                       equ 0004h
CM3PSEL_C3PCH_LENGTH                     equ 0004h
CM3PSEL_C3PCH_MASK                       equ 000Fh
CM3PSEL_C3PCH0_POSN                      equ 0000h
CM3PSEL_C3PCH0_POSITION                  equ 0000h
CM3PSEL_C3PCH0_SIZE                      equ 0001h
CM3PSEL_C3PCH0_LENGTH                    equ 0001h
CM3PSEL_C3PCH0_MASK                      equ 0001h
CM3PSEL_C3PCH1_POSN                      equ 0001h
CM3PSEL_C3PCH1_POSITION                  equ 0001h
CM3PSEL_C3PCH1_SIZE                      equ 0001h
CM3PSEL_C3PCH1_LENGTH                    equ 0001h
CM3PSEL_C3PCH1_MASK                      equ 0002h
CM3PSEL_C3PCH2_POSN                      equ 0002h
CM3PSEL_C3PCH2_POSITION                  equ 0002h
CM3PSEL_C3PCH2_SIZE                      equ 0001h
CM3PSEL_C3PCH2_LENGTH                    equ 0001h
CM3PSEL_C3PCH2_MASK                      equ 0004h
CM3PSEL_C3PCH3_POSN                      equ 0003h
CM3PSEL_C3PCH3_POSITION                  equ 0003h
CM3PSEL_C3PCH3_SIZE                      equ 0001h
CM3PSEL_C3PCH3_LENGTH                    equ 0001h
CM3PSEL_C3PCH3_MASK                      equ 0008h

// Register: CM4CON0
#define CM4CON0 CM4CON0
CM4CON0                                  equ 011Ch
// bitfield definitions
CM4CON0_SYNC_POSN                        equ 0000h
CM4CON0_SYNC_POSITION                    equ 0000h
CM4CON0_SYNC_SIZE                        equ 0001h
CM4CON0_SYNC_LENGTH                      equ 0001h
CM4CON0_SYNC_MASK                        equ 0001h
CM4CON0_HYS_POSN                         equ 0001h
CM4CON0_HYS_POSITION                     equ 0001h
CM4CON0_HYS_SIZE                         equ 0001h
CM4CON0_HYS_LENGTH                       equ 0001h
CM4CON0_HYS_MASK                         equ 0002h
CM4CON0_ZLF_POSN                         equ 0003h
CM4CON0_ZLF_POSITION                     equ 0003h
CM4CON0_ZLF_SIZE                         equ 0001h
CM4CON0_ZLF_LENGTH                       equ 0001h
CM4CON0_ZLF_MASK                         equ 0008h
CM4CON0_POL_POSN                         equ 0004h
CM4CON0_POL_POSITION                     equ 0004h
CM4CON0_POL_SIZE                         equ 0001h
CM4CON0_POL_LENGTH                       equ 0001h
CM4CON0_POL_MASK                         equ 0010h
CM4CON0_OUT_POSN                         equ 0006h
CM4CON0_OUT_POSITION                     equ 0006h
CM4CON0_OUT_SIZE                         equ 0001h
CM4CON0_OUT_LENGTH                       equ 0001h
CM4CON0_OUT_MASK                         equ 0040h
CM4CON0_ON_POSN                          equ 0007h
CM4CON0_ON_POSITION                      equ 0007h
CM4CON0_ON_SIZE                          equ 0001h
CM4CON0_ON_LENGTH                        equ 0001h
CM4CON0_ON_MASK                          equ 0080h
CM4CON0_C4SYNC_POSN                      equ 0000h
CM4CON0_C4SYNC_POSITION                  equ 0000h
CM4CON0_C4SYNC_SIZE                      equ 0001h
CM4CON0_C4SYNC_LENGTH                    equ 0001h
CM4CON0_C4SYNC_MASK                      equ 0001h
CM4CON0_C4HYS_POSN                       equ 0001h
CM4CON0_C4HYS_POSITION                   equ 0001h
CM4CON0_C4HYS_SIZE                       equ 0001h
CM4CON0_C4HYS_LENGTH                     equ 0001h
CM4CON0_C4HYS_MASK                       equ 0002h
CM4CON0_C4SP_POSN                        equ 0002h
CM4CON0_C4SP_POSITION                    equ 0002h
CM4CON0_C4SP_SIZE                        equ 0001h
CM4CON0_C4SP_LENGTH                      equ 0001h
CM4CON0_C4SP_MASK                        equ 0004h
CM4CON0_C4ZLF_POSN                       equ 0003h
CM4CON0_C4ZLF_POSITION                   equ 0003h
CM4CON0_C4ZLF_SIZE                       equ 0001h
CM4CON0_C4ZLF_LENGTH                     equ 0001h
CM4CON0_C4ZLF_MASK                       equ 0008h
CM4CON0_C4POL_POSN                       equ 0004h
CM4CON0_C4POL_POSITION                   equ 0004h
CM4CON0_C4POL_SIZE                       equ 0001h
CM4CON0_C4POL_LENGTH                     equ 0001h
CM4CON0_C4POL_MASK                       equ 0010h
CM4CON0_C4OUT_POSN                       equ 0006h
CM4CON0_C4OUT_POSITION                   equ 0006h
CM4CON0_C4OUT_SIZE                       equ 0001h
CM4CON0_C4OUT_LENGTH                     equ 0001h
CM4CON0_C4OUT_MASK                       equ 0040h
CM4CON0_C4ON_POSN                        equ 0007h
CM4CON0_C4ON_POSITION                    equ 0007h
CM4CON0_C4ON_SIZE                        equ 0001h
CM4CON0_C4ON_LENGTH                      equ 0001h
CM4CON0_C4ON_MASK                        equ 0080h

// Register: CM4CON1
#define CM4CON1 CM4CON1
CM4CON1                                  equ 011Dh
// bitfield definitions
CM4CON1_INTN_POSN                        equ 0000h
CM4CON1_INTN_POSITION                    equ 0000h
CM4CON1_INTN_SIZE                        equ 0001h
CM4CON1_INTN_LENGTH                      equ 0001h
CM4CON1_INTN_MASK                        equ 0001h
CM4CON1_INTP_POSN                        equ 0001h
CM4CON1_INTP_POSITION                    equ 0001h
CM4CON1_INTP_SIZE                        equ 0001h
CM4CON1_INTP_LENGTH                      equ 0001h
CM4CON1_INTP_MASK                        equ 0002h
CM4CON1_C4INTN_POSN                      equ 0000h
CM4CON1_C4INTN_POSITION                  equ 0000h
CM4CON1_C4INTN_SIZE                      equ 0001h
CM4CON1_C4INTN_LENGTH                    equ 0001h
CM4CON1_C4INTN_MASK                      equ 0001h
CM4CON1_C4INTP_POSN                      equ 0001h
CM4CON1_C4INTP_POSITION                  equ 0001h
CM4CON1_C4INTP_SIZE                      equ 0001h
CM4CON1_C4INTP_LENGTH                    equ 0001h
CM4CON1_C4INTP_MASK                      equ 0002h

// Register: CM4NSEL
#define CM4NSEL CM4NSEL
CM4NSEL                                  equ 011Eh
// bitfield definitions
CM4NSEL_NCH_POSN                         equ 0000h
CM4NSEL_NCH_POSITION                     equ 0000h
CM4NSEL_NCH_SIZE                         equ 0003h
CM4NSEL_NCH_LENGTH                       equ 0003h
CM4NSEL_NCH_MASK                         equ 0007h
CM4NSEL_NCH0_POSN                        equ 0000h
CM4NSEL_NCH0_POSITION                    equ 0000h
CM4NSEL_NCH0_SIZE                        equ 0001h
CM4NSEL_NCH0_LENGTH                      equ 0001h
CM4NSEL_NCH0_MASK                        equ 0001h
CM4NSEL_NCH1_POSN                        equ 0001h
CM4NSEL_NCH1_POSITION                    equ 0001h
CM4NSEL_NCH1_SIZE                        equ 0001h
CM4NSEL_NCH1_LENGTH                      equ 0001h
CM4NSEL_NCH1_MASK                        equ 0002h
CM4NSEL_NCH2_POSN                        equ 0002h
CM4NSEL_NCH2_POSITION                    equ 0002h
CM4NSEL_NCH2_SIZE                        equ 0001h
CM4NSEL_NCH2_LENGTH                      equ 0001h
CM4NSEL_NCH2_MASK                        equ 0004h
CM4NSEL_C4NCH_POSN                       equ 0000h
CM4NSEL_C4NCH_POSITION                   equ 0000h
CM4NSEL_C4NCH_SIZE                       equ 0003h
CM4NSEL_C4NCH_LENGTH                     equ 0003h
CM4NSEL_C4NCH_MASK                       equ 0007h
CM4NSEL_C4NCH0_POSN                      equ 0000h
CM4NSEL_C4NCH0_POSITION                  equ 0000h
CM4NSEL_C4NCH0_SIZE                      equ 0001h
CM4NSEL_C4NCH0_LENGTH                    equ 0001h
CM4NSEL_C4NCH0_MASK                      equ 0001h
CM4NSEL_C4NCH1_POSN                      equ 0001h
CM4NSEL_C4NCH1_POSITION                  equ 0001h
CM4NSEL_C4NCH1_SIZE                      equ 0001h
CM4NSEL_C4NCH1_LENGTH                    equ 0001h
CM4NSEL_C4NCH1_MASK                      equ 0002h
CM4NSEL_C4NCH2_POSN                      equ 0002h
CM4NSEL_C4NCH2_POSITION                  equ 0002h
CM4NSEL_C4NCH2_SIZE                      equ 0001h
CM4NSEL_C4NCH2_LENGTH                    equ 0001h
CM4NSEL_C4NCH2_MASK                      equ 0004h

// Register: CM4PSEL
#define CM4PSEL CM4PSEL
CM4PSEL                                  equ 011Fh
// bitfield definitions
CM4PSEL_PCH_POSN                         equ 0000h
CM4PSEL_PCH_POSITION                     equ 0000h
CM4PSEL_PCH_SIZE                         equ 0004h
CM4PSEL_PCH_LENGTH                       equ 0004h
CM4PSEL_PCH_MASK                         equ 000Fh
CM4PSEL_PCH0_POSN                        equ 0000h
CM4PSEL_PCH0_POSITION                    equ 0000h
CM4PSEL_PCH0_SIZE                        equ 0001h
CM4PSEL_PCH0_LENGTH                      equ 0001h
CM4PSEL_PCH0_MASK                        equ 0001h
CM4PSEL_PCH1_POSN                        equ 0001h
CM4PSEL_PCH1_POSITION                    equ 0001h
CM4PSEL_PCH1_SIZE                        equ 0001h
CM4PSEL_PCH1_LENGTH                      equ 0001h
CM4PSEL_PCH1_MASK                        equ 0002h
CM4PSEL_PCH2_POSN                        equ 0002h
CM4PSEL_PCH2_POSITION                    equ 0002h
CM4PSEL_PCH2_SIZE                        equ 0001h
CM4PSEL_PCH2_LENGTH                      equ 0001h
CM4PSEL_PCH2_MASK                        equ 0004h
CM4PSEL_PCH3_POSN                        equ 0003h
CM4PSEL_PCH3_POSITION                    equ 0003h
CM4PSEL_PCH3_SIZE                        equ 0001h
CM4PSEL_PCH3_LENGTH                      equ 0001h
CM4PSEL_PCH3_MASK                        equ 0008h
CM4PSEL_C4PCH_POSN                       equ 0000h
CM4PSEL_C4PCH_POSITION                   equ 0000h
CM4PSEL_C4PCH_SIZE                       equ 0004h
CM4PSEL_C4PCH_LENGTH                     equ 0004h
CM4PSEL_C4PCH_MASK                       equ 000Fh
CM4PSEL_C4PCH0_POSN                      equ 0000h
CM4PSEL_C4PCH0_POSITION                  equ 0000h
CM4PSEL_C4PCH0_SIZE                      equ 0001h
CM4PSEL_C4PCH0_LENGTH                    equ 0001h
CM4PSEL_C4PCH0_MASK                      equ 0001h
CM4PSEL_C4PCH1_POSN                      equ 0001h
CM4PSEL_C4PCH1_POSITION                  equ 0001h
CM4PSEL_C4PCH1_SIZE                      equ 0001h
CM4PSEL_C4PCH1_LENGTH                    equ 0001h
CM4PSEL_C4PCH1_MASK                      equ 0002h
CM4PSEL_C4PCH2_POSN                      equ 0002h
CM4PSEL_C4PCH2_POSITION                  equ 0002h
CM4PSEL_C4PCH2_SIZE                      equ 0001h
CM4PSEL_C4PCH2_LENGTH                    equ 0001h
CM4PSEL_C4PCH2_MASK                      equ 0004h
CM4PSEL_C4PCH3_POSN                      equ 0003h
CM4PSEL_C4PCH3_POSITION                  equ 0003h
CM4PSEL_C4PCH3_SIZE                      equ 0001h
CM4PSEL_C4PCH3_LENGTH                    equ 0001h
CM4PSEL_C4PCH3_MASK                      equ 0008h

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

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 018Dh
// bitfield definitions
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
ANSELB_ANSB6_POSN                        equ 0006h
ANSELB_ANSB6_POSITION                    equ 0006h
ANSELB_ANSB6_SIZE                        equ 0001h
ANSELB_ANSB6_LENGTH                      equ 0001h
ANSELB_ANSB6_MASK                        equ 0040h
ANSELB_ANSB7_POSN                        equ 0007h
ANSELB_ANSB7_POSITION                    equ 0007h
ANSELB_ANSB7_SIZE                        equ 0001h
ANSELB_ANSB7_LENGTH                      equ 0001h
ANSELB_ANSB7_MASK                        equ 0080h

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

// Register: VREGCON
#define VREGCON VREGCON
VREGCON                                  equ 0197h
// bitfield definitions
VREGCON_VREGPM_POSN                      equ 0001h
VREGCON_VREGPM_POSITION                  equ 0001h
VREGCON_VREGPM_SIZE                      equ 0001h
VREGCON_VREGPM_LENGTH                    equ 0001h
VREGCON_VREGPM_MASK                      equ 0002h

// Register: RC1REG
#define RC1REG RC1REG
RC1REG                                   equ 0199h
// bitfield definitions
RC1REG_RC1REG_POSN                       equ 0000h
RC1REG_RC1REG_POSITION                   equ 0000h
RC1REG_RC1REG_SIZE                       equ 0008h
RC1REG_RC1REG_LENGTH                     equ 0008h
RC1REG_RC1REG_MASK                       equ 00FFh

// Register: TX1REG
#define TX1REG TX1REG
TX1REG                                   equ 019Ah
// bitfield definitions
TX1REG_TX1REG_POSN                       equ 0000h
TX1REG_TX1REG_POSITION                   equ 0000h
TX1REG_TX1REG_SIZE                       equ 0008h
TX1REG_TX1REG_LENGTH                     equ 0008h
TX1REG_TX1REG_MASK                       equ 00FFh

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
SP1BRGL                                  equ 019Bh
// bitfield definitions
SP1BRGL_SP1BRGL_POSN                     equ 0000h
SP1BRGL_SP1BRGL_POSITION                 equ 0000h
SP1BRGL_SP1BRGL_SIZE                     equ 0008h
SP1BRGL_SP1BRGL_LENGTH                   equ 0008h
SP1BRGL_SP1BRGL_MASK                     equ 00FFh

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
SP1BRGH                                  equ 019Ch
// bitfield definitions
SP1BRGH_SP1BRGH_POSN                     equ 0000h
SP1BRGH_SP1BRGH_POSITION                 equ 0000h
SP1BRGH_SP1BRGH_SIZE                     equ 0008h
SP1BRGH_SP1BRGH_LENGTH                   equ 0008h
SP1BRGH_SP1BRGH_MASK                     equ 00FFh

// Register: RC1STA
#define RC1STA RC1STA
RC1STA                                   equ 019Dh
// bitfield definitions
RC1STA_RX9D_POSN                         equ 0000h
RC1STA_RX9D_POSITION                     equ 0000h
RC1STA_RX9D_SIZE                         equ 0001h
RC1STA_RX9D_LENGTH                       equ 0001h
RC1STA_RX9D_MASK                         equ 0001h
RC1STA_OERR_POSN                         equ 0001h
RC1STA_OERR_POSITION                     equ 0001h
RC1STA_OERR_SIZE                         equ 0001h
RC1STA_OERR_LENGTH                       equ 0001h
RC1STA_OERR_MASK                         equ 0002h
RC1STA_FERR_POSN                         equ 0002h
RC1STA_FERR_POSITION                     equ 0002h
RC1STA_FERR_SIZE                         equ 0001h
RC1STA_FERR_LENGTH                       equ 0001h
RC1STA_FERR_MASK                         equ 0004h
RC1STA_ADDEN_POSN                        equ 0003h
RC1STA_ADDEN_POSITION                    equ 0003h
RC1STA_ADDEN_SIZE                        equ 0001h
RC1STA_ADDEN_LENGTH                      equ 0001h
RC1STA_ADDEN_MASK                        equ 0008h
RC1STA_CREN_POSN                         equ 0004h
RC1STA_CREN_POSITION                     equ 0004h
RC1STA_CREN_SIZE                         equ 0001h
RC1STA_CREN_LENGTH                       equ 0001h
RC1STA_CREN_MASK                         equ 0010h
RC1STA_SREN_POSN                         equ 0005h
RC1STA_SREN_POSITION                     equ 0005h
RC1STA_SREN_SIZE                         equ 0001h
RC1STA_SREN_LENGTH                       equ 0001h
RC1STA_SREN_MASK                         equ 0020h
RC1STA_RX9_POSN                          equ 0006h
RC1STA_RX9_POSITION                      equ 0006h
RC1STA_RX9_SIZE                          equ 0001h
RC1STA_RX9_LENGTH                        equ 0001h
RC1STA_RX9_MASK                          equ 0040h
RC1STA_SPEN_POSN                         equ 0007h
RC1STA_SPEN_POSITION                     equ 0007h
RC1STA_SPEN_SIZE                         equ 0001h
RC1STA_SPEN_LENGTH                       equ 0001h
RC1STA_SPEN_MASK                         equ 0080h

// Register: TX1STA
#define TX1STA TX1STA
TX1STA                                   equ 019Eh
// bitfield definitions
TX1STA_TX9D_POSN                         equ 0000h
TX1STA_TX9D_POSITION                     equ 0000h
TX1STA_TX9D_SIZE                         equ 0001h
TX1STA_TX9D_LENGTH                       equ 0001h
TX1STA_TX9D_MASK                         equ 0001h
TX1STA_TRMT_POSN                         equ 0001h
TX1STA_TRMT_POSITION                     equ 0001h
TX1STA_TRMT_SIZE                         equ 0001h
TX1STA_TRMT_LENGTH                       equ 0001h
TX1STA_TRMT_MASK                         equ 0002h
TX1STA_BRGH_POSN                         equ 0002h
TX1STA_BRGH_POSITION                     equ 0002h
TX1STA_BRGH_SIZE                         equ 0001h
TX1STA_BRGH_LENGTH                       equ 0001h
TX1STA_BRGH_MASK                         equ 0004h
TX1STA_SENDB_POSN                        equ 0003h
TX1STA_SENDB_POSITION                    equ 0003h
TX1STA_SENDB_SIZE                        equ 0001h
TX1STA_SENDB_LENGTH                      equ 0001h
TX1STA_SENDB_MASK                        equ 0008h
TX1STA_SYNC_POSN                         equ 0004h
TX1STA_SYNC_POSITION                     equ 0004h
TX1STA_SYNC_SIZE                         equ 0001h
TX1STA_SYNC_LENGTH                       equ 0001h
TX1STA_SYNC_MASK                         equ 0010h
TX1STA_TXEN_POSN                         equ 0005h
TX1STA_TXEN_POSITION                     equ 0005h
TX1STA_TXEN_SIZE                         equ 0001h
TX1STA_TXEN_LENGTH                       equ 0001h
TX1STA_TXEN_MASK                         equ 0020h
TX1STA_TX9_POSN                          equ 0006h
TX1STA_TX9_POSITION                      equ 0006h
TX1STA_TX9_SIZE                          equ 0001h
TX1STA_TX9_LENGTH                        equ 0001h
TX1STA_TX9_MASK                          equ 0040h
TX1STA_CSRC_POSN                         equ 0007h
TX1STA_CSRC_POSITION                     equ 0007h
TX1STA_CSRC_SIZE                         equ 0001h
TX1STA_CSRC_LENGTH                       equ 0001h
TX1STA_CSRC_MASK                         equ 0080h

// Register: BAUD1CON
#define BAUD1CON BAUD1CON
BAUD1CON                                 equ 019Fh
// bitfield definitions
BAUD1CON_ABDEN_POSN                      equ 0000h
BAUD1CON_ABDEN_POSITION                  equ 0000h
BAUD1CON_ABDEN_SIZE                      equ 0001h
BAUD1CON_ABDEN_LENGTH                    equ 0001h
BAUD1CON_ABDEN_MASK                      equ 0001h
BAUD1CON_WUE_POSN                        equ 0001h
BAUD1CON_WUE_POSITION                    equ 0001h
BAUD1CON_WUE_SIZE                        equ 0001h
BAUD1CON_WUE_LENGTH                      equ 0001h
BAUD1CON_WUE_MASK                        equ 0002h
BAUD1CON_BRG16_POSN                      equ 0003h
BAUD1CON_BRG16_POSITION                  equ 0003h
BAUD1CON_BRG16_SIZE                      equ 0001h
BAUD1CON_BRG16_LENGTH                    equ 0001h
BAUD1CON_BRG16_MASK                      equ 0008h
BAUD1CON_SCKP_POSN                       equ 0004h
BAUD1CON_SCKP_POSITION                   equ 0004h
BAUD1CON_SCKP_SIZE                       equ 0001h
BAUD1CON_SCKP_LENGTH                     equ 0001h
BAUD1CON_SCKP_MASK                       equ 0010h
BAUD1CON_RCIDL_POSN                      equ 0006h
BAUD1CON_RCIDL_POSITION                  equ 0006h
BAUD1CON_RCIDL_SIZE                      equ 0001h
BAUD1CON_RCIDL_LENGTH                    equ 0001h
BAUD1CON_RCIDL_MASK                      equ 0040h
BAUD1CON_ABDOVF_POSN                     equ 0007h
BAUD1CON_ABDOVF_POSITION                 equ 0007h
BAUD1CON_ABDOVF_SIZE                     equ 0001h
BAUD1CON_ABDOVF_LENGTH                   equ 0001h
BAUD1CON_ABDOVF_MASK                     equ 0080h

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

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 020Dh
// bitfield definitions
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
WPUC_WPUC6_POSN                          equ 0006h
WPUC_WPUC6_POSITION                      equ 0006h
WPUC_WPUC6_SIZE                          equ 0001h
WPUC_WPUC6_LENGTH                        equ 0001h
WPUC_WPUC6_MASK                          equ 0040h
WPUC_WPUC7_POSN                          equ 0007h
WPUC_WPUC7_POSITION                      equ 0007h
WPUC_WPUC7_SIZE                          equ 0001h
WPUC_WPUC7_LENGTH                        equ 0001h
WPUC_WPUC7_MASK                          equ 0080h

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
SSP1BUF                                  equ 0211h
// bitfield definitions
SSP1BUF_SSP1BUF0_POSN                    equ 0000h
SSP1BUF_SSP1BUF0_POSITION                equ 0000h
SSP1BUF_SSP1BUF0_SIZE                    equ 0001h
SSP1BUF_SSP1BUF0_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF0_MASK                    equ 0001h
SSP1BUF_SSP1BUF1_POSN                    equ 0001h
SSP1BUF_SSP1BUF1_POSITION                equ 0001h
SSP1BUF_SSP1BUF1_SIZE                    equ 0001h
SSP1BUF_SSP1BUF1_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF1_MASK                    equ 0002h
SSP1BUF_SSP1BUF2_POSN                    equ 0002h
SSP1BUF_SSP1BUF2_POSITION                equ 0002h
SSP1BUF_SSP1BUF2_SIZE                    equ 0001h
SSP1BUF_SSP1BUF2_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF2_MASK                    equ 0004h
SSP1BUF_SSP1BUF3_POSN                    equ 0003h
SSP1BUF_SSP1BUF3_POSITION                equ 0003h
SSP1BUF_SSP1BUF3_SIZE                    equ 0001h
SSP1BUF_SSP1BUF3_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF3_MASK                    equ 0008h
SSP1BUF_SSP1BUF4_POSN                    equ 0004h
SSP1BUF_SSP1BUF4_POSITION                equ 0004h
SSP1BUF_SSP1BUF4_SIZE                    equ 0001h
SSP1BUF_SSP1BUF4_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF4_MASK                    equ 0010h
SSP1BUF_SSP1BUF5_POSN                    equ 0005h
SSP1BUF_SSP1BUF5_POSITION                equ 0005h
SSP1BUF_SSP1BUF5_SIZE                    equ 0001h
SSP1BUF_SSP1BUF5_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF5_MASK                    equ 0020h
SSP1BUF_SSP1BUF6_POSN                    equ 0006h
SSP1BUF_SSP1BUF6_POSITION                equ 0006h
SSP1BUF_SSP1BUF6_SIZE                    equ 0001h
SSP1BUF_SSP1BUF6_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF6_MASK                    equ 0040h
SSP1BUF_SSP1BUF7_POSN                    equ 0007h
SSP1BUF_SSP1BUF7_POSITION                equ 0007h
SSP1BUF_SSP1BUF7_SIZE                    equ 0001h
SSP1BUF_SSP1BUF7_LENGTH                  equ 0001h
SSP1BUF_SSP1BUF7_MASK                    equ 0080h
SSP1BUF_BUF_POSN                         equ 0000h
SSP1BUF_BUF_POSITION                     equ 0000h
SSP1BUF_BUF_SIZE                         equ 0008h
SSP1BUF_BUF_LENGTH                       equ 0008h
SSP1BUF_BUF_MASK                         equ 00FFh
SSP1BUF_BUF0_POSN                        equ 0000h
SSP1BUF_BUF0_POSITION                    equ 0000h
SSP1BUF_BUF0_SIZE                        equ 0001h
SSP1BUF_BUF0_LENGTH                      equ 0001h
SSP1BUF_BUF0_MASK                        equ 0001h
SSP1BUF_BUF1_POSN                        equ 0001h
SSP1BUF_BUF1_POSITION                    equ 0001h
SSP1BUF_BUF1_SIZE                        equ 0001h
SSP1BUF_BUF1_LENGTH                      equ 0001h
SSP1BUF_BUF1_MASK                        equ 0002h
SSP1BUF_BUF2_POSN                        equ 0002h
SSP1BUF_BUF2_POSITION                    equ 0002h
SSP1BUF_BUF2_SIZE                        equ 0001h
SSP1BUF_BUF2_LENGTH                      equ 0001h
SSP1BUF_BUF2_MASK                        equ 0004h
SSP1BUF_BUF3_POSN                        equ 0003h
SSP1BUF_BUF3_POSITION                    equ 0003h
SSP1BUF_BUF3_SIZE                        equ 0001h
SSP1BUF_BUF3_LENGTH                      equ 0001h
SSP1BUF_BUF3_MASK                        equ 0008h
SSP1BUF_BUF4_POSN                        equ 0004h
SSP1BUF_BUF4_POSITION                    equ 0004h
SSP1BUF_BUF4_SIZE                        equ 0001h
SSP1BUF_BUF4_LENGTH                      equ 0001h
SSP1BUF_BUF4_MASK                        equ 0010h
SSP1BUF_BUF5_POSN                        equ 0005h
SSP1BUF_BUF5_POSITION                    equ 0005h
SSP1BUF_BUF5_SIZE                        equ 0001h
SSP1BUF_BUF5_LENGTH                      equ 0001h
SSP1BUF_BUF5_MASK                        equ 0020h
SSP1BUF_BUF6_POSN                        equ 0006h
SSP1BUF_BUF6_POSITION                    equ 0006h
SSP1BUF_BUF6_SIZE                        equ 0001h
SSP1BUF_BUF6_LENGTH                      equ 0001h
SSP1BUF_BUF6_MASK                        equ 0040h
SSP1BUF_BUF7_POSN                        equ 0007h
SSP1BUF_BUF7_POSITION                    equ 0007h
SSP1BUF_BUF7_SIZE                        equ 0001h
SSP1BUF_BUF7_LENGTH                      equ 0001h
SSP1BUF_BUF7_MASK                        equ 0080h
SSP1BUF_SSP1BUF_POSN                     equ 0000h
SSP1BUF_SSP1BUF_POSITION                 equ 0000h
SSP1BUF_SSP1BUF_SIZE                     equ 0008h
SSP1BUF_SSP1BUF_LENGTH                   equ 0008h
SSP1BUF_SSP1BUF_MASK                     equ 00FFh

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
SSP1ADD                                  equ 0212h
// bitfield definitions
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
SSP1ADD_ADD_POSN                         equ 0000h
SSP1ADD_ADD_POSITION                     equ 0000h
SSP1ADD_ADD_SIZE                         equ 0008h
SSP1ADD_ADD_LENGTH                       equ 0008h
SSP1ADD_ADD_MASK                         equ 00FFh
SSP1ADD_ADD0_POSN                        equ 0000h
SSP1ADD_ADD0_POSITION                    equ 0000h
SSP1ADD_ADD0_SIZE                        equ 0001h
SSP1ADD_ADD0_LENGTH                      equ 0001h
SSP1ADD_ADD0_MASK                        equ 0001h
SSP1ADD_ADD1_POSN                        equ 0001h
SSP1ADD_ADD1_POSITION                    equ 0001h
SSP1ADD_ADD1_SIZE                        equ 0001h
SSP1ADD_ADD1_LENGTH                      equ 0001h
SSP1ADD_ADD1_MASK                        equ 0002h
SSP1ADD_ADD2_POSN                        equ 0002h
SSP1ADD_ADD2_POSITION                    equ 0002h
SSP1ADD_ADD2_SIZE                        equ 0001h
SSP1ADD_ADD2_LENGTH                      equ 0001h
SSP1ADD_ADD2_MASK                        equ 0004h
SSP1ADD_ADD3_POSN                        equ 0003h
SSP1ADD_ADD3_POSITION                    equ 0003h
SSP1ADD_ADD3_SIZE                        equ 0001h
SSP1ADD_ADD3_LENGTH                      equ 0001h
SSP1ADD_ADD3_MASK                        equ 0008h
SSP1ADD_ADD4_POSN                        equ 0004h
SSP1ADD_ADD4_POSITION                    equ 0004h
SSP1ADD_ADD4_SIZE                        equ 0001h
SSP1ADD_ADD4_LENGTH                      equ 0001h
SSP1ADD_ADD4_MASK                        equ 0010h
SSP1ADD_ADD5_POSN                        equ 0005h
SSP1ADD_ADD5_POSITION                    equ 0005h
SSP1ADD_ADD5_SIZE                        equ 0001h
SSP1ADD_ADD5_LENGTH                      equ 0001h
SSP1ADD_ADD5_MASK                        equ 0020h
SSP1ADD_ADD6_POSN                        equ 0006h
SSP1ADD_ADD6_POSITION                    equ 0006h
SSP1ADD_ADD6_SIZE                        equ 0001h
SSP1ADD_ADD6_LENGTH                      equ 0001h
SSP1ADD_ADD6_MASK                        equ 0040h
SSP1ADD_ADD7_POSN                        equ 0007h
SSP1ADD_ADD7_POSITION                    equ 0007h
SSP1ADD_ADD7_SIZE                        equ 0001h
SSP1ADD_ADD7_LENGTH                      equ 0001h
SSP1ADD_ADD7_MASK                        equ 0080h
SSP1ADD_SSP1ADD_POSN                     equ 0000h
SSP1ADD_SSP1ADD_POSITION                 equ 0000h
SSP1ADD_SSP1ADD_SIZE                     equ 0008h
SSP1ADD_SSP1ADD_LENGTH                   equ 0008h
SSP1ADD_SSP1ADD_MASK                     equ 00FFh

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
SSP1MSK                                  equ 0213h
// bitfield definitions
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
SSP1MSK_MSK_POSN                         equ 0000h
SSP1MSK_MSK_POSITION                     equ 0000h
SSP1MSK_MSK_SIZE                         equ 0008h
SSP1MSK_MSK_LENGTH                       equ 0008h
SSP1MSK_MSK_MASK                         equ 00FFh
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
SSP1MSK_SSP1MSK_POSN                     equ 0000h
SSP1MSK_SSP1MSK_POSITION                 equ 0000h
SSP1MSK_SSP1MSK_SIZE                     equ 0008h
SSP1MSK_SSP1MSK_LENGTH                   equ 0008h
SSP1MSK_SSP1MSK_MASK                     equ 00FFh

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
SSP1STAT                                 equ 0214h
// bitfield definitions
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

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
SSP1CON1                                 equ 0215h
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

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
SSP1CON2                                 equ 0216h
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

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
SSP1CON3                                 equ 0217h
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

// Register: BORCON
#define BORCON BORCON
BORCON                                   equ 021Dh
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
FVRCON                                   equ 021Eh
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

// Register: ZCD1CON
#define ZCD1CON ZCD1CON
ZCD1CON                                  equ 021Fh
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
ZCD1CON_ZCD1EN_POSN                      equ 0007h
ZCD1CON_ZCD1EN_POSITION                  equ 0007h
ZCD1CON_ZCD1EN_SIZE                      equ 0001h
ZCD1CON_ZCD1EN_LENGTH                    equ 0001h
ZCD1CON_ZCD1EN_MASK                      equ 0080h

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

// Register: ODCONB
#define ODCONB ODCONB
ODCONB                                   equ 028Dh
// bitfield definitions
ODCONB_ODB4_POSN                         equ 0004h
ODCONB_ODB4_POSITION                     equ 0004h
ODCONB_ODB4_SIZE                         equ 0001h
ODCONB_ODB4_LENGTH                       equ 0001h
ODCONB_ODB4_MASK                         equ 0010h
ODCONB_ODB5_POSN                         equ 0005h
ODCONB_ODB5_POSITION                     equ 0005h
ODCONB_ODB5_SIZE                         equ 0001h
ODCONB_ODB5_LENGTH                       equ 0001h
ODCONB_ODB5_MASK                         equ 0020h
ODCONB_ODB6_POSN                         equ 0006h
ODCONB_ODB6_POSITION                     equ 0006h
ODCONB_ODB6_SIZE                         equ 0001h
ODCONB_ODB6_LENGTH                       equ 0001h
ODCONB_ODB6_MASK                         equ 0040h
ODCONB_ODB7_POSN                         equ 0007h
ODCONB_ODB7_POSITION                     equ 0007h
ODCONB_ODB7_SIZE                         equ 0001h
ODCONB_ODB7_LENGTH                       equ 0001h
ODCONB_ODB7_MASK                         equ 0080h

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
ODCONC_ODC6_POSN                         equ 0006h
ODCONC_ODC6_POSITION                     equ 0006h
ODCONC_ODC6_SIZE                         equ 0001h
ODCONC_ODC6_LENGTH                       equ 0001h
ODCONC_ODC6_MASK                         equ 0040h
ODCONC_ODC7_POSN                         equ 0007h
ODCONC_ODC7_POSITION                     equ 0007h
ODCONC_ODC7_SIZE                         equ 0001h
ODCONC_ODC7_LENGTH                       equ 0001h
ODCONC_ODC7_MASK                         equ 0080h

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
CCP1CAP_CTS2_POSN                        equ 0002h
CCP1CAP_CTS2_POSITION                    equ 0002h
CCP1CAP_CTS2_SIZE                        equ 0001h
CCP1CAP_CTS2_LENGTH                      equ 0001h
CCP1CAP_CTS2_MASK                        equ 0004h
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
CCP1CAP_CCP1CTS2_POSN                    equ 0002h
CCP1CAP_CCP1CTS2_POSITION                equ 0002h
CCP1CAP_CCP1CTS2_SIZE                    equ 0001h
CCP1CAP_CCP1CTS2_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS2_MASK                    equ 0004h

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
CCP2CAP_CTS2_POSN                        equ 0002h
CCP2CAP_CTS2_POSITION                    equ 0002h
CCP2CAP_CTS2_SIZE                        equ 0001h
CCP2CAP_CTS2_LENGTH                      equ 0001h
CCP2CAP_CTS2_MASK                        equ 0004h
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
CCP2CAP_CCP2CTS2_POSN                    equ 0002h
CCP2CAP_CCP2CTS2_POSITION                equ 0002h
CCP2CAP_CCP2CTS2_SIZE                    equ 0001h
CCP2CAP_CCP2CTS2_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS2_MASK                    equ 0004h

// Register: CCPTMRS
#define CCPTMRS CCPTMRS
CCPTMRS                                  equ 029Eh
// bitfield definitions
CCPTMRS_C1TSEL_POSN                      equ 0000h
CCPTMRS_C1TSEL_POSITION                  equ 0000h
CCPTMRS_C1TSEL_SIZE                      equ 0002h
CCPTMRS_C1TSEL_LENGTH                    equ 0002h
CCPTMRS_C1TSEL_MASK                      equ 0003h
CCPTMRS_C2TSEL_POSN                      equ 0002h
CCPTMRS_C2TSEL_POSITION                  equ 0002h
CCPTMRS_C2TSEL_SIZE                      equ 0002h
CCPTMRS_C2TSEL_LENGTH                    equ 0002h
CCPTMRS_C2TSEL_MASK                      equ 000Ch
CCPTMRS_P3TSEL_POSN                      equ 0004h
CCPTMRS_P3TSEL_POSITION                  equ 0004h
CCPTMRS_P3TSEL_SIZE                      equ 0002h
CCPTMRS_P3TSEL_LENGTH                    equ 0002h
CCPTMRS_P3TSEL_MASK                      equ 0030h
CCPTMRS_P4TSEL_POSN                      equ 0006h
CCPTMRS_P4TSEL_POSITION                  equ 0006h
CCPTMRS_P4TSEL_SIZE                      equ 0002h
CCPTMRS_P4TSEL_LENGTH                    equ 0002h
CCPTMRS_P4TSEL_MASK                      equ 00C0h
CCPTMRS_C1TSEL0_POSN                     equ 0000h
CCPTMRS_C1TSEL0_POSITION                 equ 0000h
CCPTMRS_C1TSEL0_SIZE                     equ 0001h
CCPTMRS_C1TSEL0_LENGTH                   equ 0001h
CCPTMRS_C1TSEL0_MASK                     equ 0001h
CCPTMRS_C1TSEL1_POSN                     equ 0001h
CCPTMRS_C1TSEL1_POSITION                 equ 0001h
CCPTMRS_C1TSEL1_SIZE                     equ 0001h
CCPTMRS_C1TSEL1_LENGTH                   equ 0001h
CCPTMRS_C1TSEL1_MASK                     equ 0002h
CCPTMRS_C2TSEL0_POSN                     equ 0002h
CCPTMRS_C2TSEL0_POSITION                 equ 0002h
CCPTMRS_C2TSEL0_SIZE                     equ 0001h
CCPTMRS_C2TSEL0_LENGTH                   equ 0001h
CCPTMRS_C2TSEL0_MASK                     equ 0004h
CCPTMRS_C2TSEL1_POSN                     equ 0003h
CCPTMRS_C2TSEL1_POSITION                 equ 0003h
CCPTMRS_C2TSEL1_SIZE                     equ 0001h
CCPTMRS_C2TSEL1_LENGTH                   equ 0001h
CCPTMRS_C2TSEL1_MASK                     equ 0008h
CCPTMRS_P3TSEL0_POSN                     equ 0004h
CCPTMRS_P3TSEL0_POSITION                 equ 0004h
CCPTMRS_P3TSEL0_SIZE                     equ 0001h
CCPTMRS_P3TSEL0_LENGTH                   equ 0001h
CCPTMRS_P3TSEL0_MASK                     equ 0010h
CCPTMRS_P3TSEL1_POSN                     equ 0005h
CCPTMRS_P3TSEL1_POSITION                 equ 0005h
CCPTMRS_P3TSEL1_SIZE                     equ 0001h
CCPTMRS_P3TSEL1_LENGTH                   equ 0001h
CCPTMRS_P3TSEL1_MASK                     equ 0020h
CCPTMRS_P4TSEL0_POSN                     equ 0006h
CCPTMRS_P4TSEL0_POSITION                 equ 0006h
CCPTMRS_P4TSEL0_SIZE                     equ 0001h
CCPTMRS_P4TSEL0_LENGTH                   equ 0001h
CCPTMRS_P4TSEL0_MASK                     equ 0040h
CCPTMRS_P4TSEL1_POSN                     equ 0007h
CCPTMRS_P4TSEL1_POSITION                 equ 0007h
CCPTMRS_P4TSEL1_SIZE                     equ 0001h
CCPTMRS_P4TSEL1_LENGTH                   equ 0001h
CCPTMRS_P4TSEL1_MASK                     equ 0080h

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

// Register: SLRCONB
#define SLRCONB SLRCONB
SLRCONB                                  equ 030Dh
// bitfield definitions
SLRCONB_SLRB4_POSN                       equ 0004h
SLRCONB_SLRB4_POSITION                   equ 0004h
SLRCONB_SLRB4_SIZE                       equ 0001h
SLRCONB_SLRB4_LENGTH                     equ 0001h
SLRCONB_SLRB4_MASK                       equ 0010h
SLRCONB_SLRB5_POSN                       equ 0005h
SLRCONB_SLRB5_POSITION                   equ 0005h
SLRCONB_SLRB5_SIZE                       equ 0001h
SLRCONB_SLRB5_LENGTH                     equ 0001h
SLRCONB_SLRB5_MASK                       equ 0020h
SLRCONB_SLRB6_POSN                       equ 0006h
SLRCONB_SLRB6_POSITION                   equ 0006h
SLRCONB_SLRB6_SIZE                       equ 0001h
SLRCONB_SLRB6_LENGTH                     equ 0001h
SLRCONB_SLRB6_MASK                       equ 0040h
SLRCONB_SLRB7_POSN                       equ 0007h
SLRCONB_SLRB7_POSITION                   equ 0007h
SLRCONB_SLRB7_SIZE                       equ 0001h
SLRCONB_SLRB7_LENGTH                     equ 0001h
SLRCONB_SLRB7_MASK                       equ 0080h

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
SLRCONC_SLRC6_POSN                       equ 0006h
SLRCONC_SLRC6_POSITION                   equ 0006h
SLRCONC_SLRC6_SIZE                       equ 0001h
SLRCONC_SLRC6_LENGTH                     equ 0001h
SLRCONC_SLRC6_MASK                       equ 0040h
SLRCONC_SLRC7_POSN                       equ 0007h
SLRCONC_SLRC7_POSITION                   equ 0007h
SLRCONC_SLRC7_SIZE                       equ 0001h
SLRCONC_SLRC7_LENGTH                     equ 0001h
SLRCONC_SLRC7_MASK                       equ 0080h

// Register: MD2CON0
#define MD2CON0 MD2CON0
MD2CON0                                  equ 031Bh
// bitfield definitions
MD2CON0_BIT_POSN                         equ 0000h
MD2CON0_BIT_POSITION                     equ 0000h
MD2CON0_BIT_SIZE                         equ 0001h
MD2CON0_BIT_LENGTH                       equ 0001h
MD2CON0_BIT_MASK                         equ 0001h
MD2CON0_OPOL_POSN                        equ 0004h
MD2CON0_OPOL_POSITION                    equ 0004h
MD2CON0_OPOL_SIZE                        equ 0001h
MD2CON0_OPOL_LENGTH                      equ 0001h
MD2CON0_OPOL_MASK                        equ 0010h
MD2CON0_OUT_POSN                         equ 0005h
MD2CON0_OUT_POSITION                     equ 0005h
MD2CON0_OUT_SIZE                         equ 0001h
MD2CON0_OUT_LENGTH                       equ 0001h
MD2CON0_OUT_MASK                         equ 0020h
MD2CON0_EN_POSN                          equ 0007h
MD2CON0_EN_POSITION                      equ 0007h
MD2CON0_EN_SIZE                          equ 0001h
MD2CON0_EN_LENGTH                        equ 0001h
MD2CON0_EN_MASK                          equ 0080h
MD2CON0_MD2BIT_POSN                      equ 0000h
MD2CON0_MD2BIT_POSITION                  equ 0000h
MD2CON0_MD2BIT_SIZE                      equ 0001h
MD2CON0_MD2BIT_LENGTH                    equ 0001h
MD2CON0_MD2BIT_MASK                      equ 0001h
MD2CON0_MD2OPOL_POSN                     equ 0004h
MD2CON0_MD2OPOL_POSITION                 equ 0004h
MD2CON0_MD2OPOL_SIZE                     equ 0001h
MD2CON0_MD2OPOL_LENGTH                   equ 0001h
MD2CON0_MD2OPOL_MASK                     equ 0010h
MD2CON0_MD2OUT_POSN                      equ 0005h
MD2CON0_MD2OUT_POSITION                  equ 0005h
MD2CON0_MD2OUT_SIZE                      equ 0001h
MD2CON0_MD2OUT_LENGTH                    equ 0001h
MD2CON0_MD2OUT_MASK                      equ 0020h
MD2CON0_MD2EN_POSN                       equ 0007h
MD2CON0_MD2EN_POSITION                   equ 0007h
MD2CON0_MD2EN_SIZE                       equ 0001h
MD2CON0_MD2EN_LENGTH                     equ 0001h
MD2CON0_MD2EN_MASK                       equ 0080h

// Register: MD2CON1
#define MD2CON1 MD2CON1
MD2CON1                                  equ 031Ch
// bitfield definitions
MD2CON1_CLSYNC_POSN                      equ 0000h
MD2CON1_CLSYNC_POSITION                  equ 0000h
MD2CON1_CLSYNC_SIZE                      equ 0001h
MD2CON1_CLSYNC_LENGTH                    equ 0001h
MD2CON1_CLSYNC_MASK                      equ 0001h
MD2CON1_CLPOL_POSN                       equ 0001h
MD2CON1_CLPOL_POSITION                   equ 0001h
MD2CON1_CLPOL_SIZE                       equ 0001h
MD2CON1_CLPOL_LENGTH                     equ 0001h
MD2CON1_CLPOL_MASK                       equ 0002h
MD2CON1_CHSYNC_POSN                      equ 0004h
MD2CON1_CHSYNC_POSITION                  equ 0004h
MD2CON1_CHSYNC_SIZE                      equ 0001h
MD2CON1_CHSYNC_LENGTH                    equ 0001h
MD2CON1_CHSYNC_MASK                      equ 0010h
MD2CON1_CHPOL_POSN                       equ 0005h
MD2CON1_CHPOL_POSITION                   equ 0005h
MD2CON1_CHPOL_SIZE                       equ 0001h
MD2CON1_CHPOL_LENGTH                     equ 0001h
MD2CON1_CHPOL_MASK                       equ 0020h
MD2CON1_MD2CLSYNC_POSN                   equ 0000h
MD2CON1_MD2CLSYNC_POSITION               equ 0000h
MD2CON1_MD2CLSYNC_SIZE                   equ 0001h
MD2CON1_MD2CLSYNC_LENGTH                 equ 0001h
MD2CON1_MD2CLSYNC_MASK                   equ 0001h
MD2CON1_MD2CLPOL_POSN                    equ 0001h
MD2CON1_MD2CLPOL_POSITION                equ 0001h
MD2CON1_MD2CLPOL_SIZE                    equ 0001h
MD2CON1_MD2CLPOL_LENGTH                  equ 0001h
MD2CON1_MD2CLPOL_MASK                    equ 0002h
MD2CON1_MD2CHSYNC_POSN                   equ 0004h
MD2CON1_MD2CHSYNC_POSITION               equ 0004h
MD2CON1_MD2CHSYNC_SIZE                   equ 0001h
MD2CON1_MD2CHSYNC_LENGTH                 equ 0001h
MD2CON1_MD2CHSYNC_MASK                   equ 0010h
MD2CON1_MD2CHPOL_POSN                    equ 0005h
MD2CON1_MD2CHPOL_POSITION                equ 0005h
MD2CON1_MD2CHPOL_SIZE                    equ 0001h
MD2CON1_MD2CHPOL_LENGTH                  equ 0001h
MD2CON1_MD2CHPOL_MASK                    equ 0020h

// Register: MD2SRC
#define MD2SRC MD2SRC
MD2SRC                                   equ 031Dh
// bitfield definitions
MD2SRC_MS_POSN                           equ 0000h
MD2SRC_MS_POSITION                       equ 0000h
MD2SRC_MS_SIZE                           equ 0005h
MD2SRC_MS_LENGTH                         equ 0005h
MD2SRC_MS_MASK                           equ 001Fh
MD2SRC_MS0_POSN                          equ 0000h
MD2SRC_MS0_POSITION                      equ 0000h
MD2SRC_MS0_SIZE                          equ 0001h
MD2SRC_MS0_LENGTH                        equ 0001h
MD2SRC_MS0_MASK                          equ 0001h
MD2SRC_MS1_POSN                          equ 0001h
MD2SRC_MS1_POSITION                      equ 0001h
MD2SRC_MS1_SIZE                          equ 0001h
MD2SRC_MS1_LENGTH                        equ 0001h
MD2SRC_MS1_MASK                          equ 0002h
MD2SRC_MS2_POSN                          equ 0002h
MD2SRC_MS2_POSITION                      equ 0002h
MD2SRC_MS2_SIZE                          equ 0001h
MD2SRC_MS2_LENGTH                        equ 0001h
MD2SRC_MS2_MASK                          equ 0004h
MD2SRC_MS3_POSN                          equ 0003h
MD2SRC_MS3_POSITION                      equ 0003h
MD2SRC_MS3_SIZE                          equ 0001h
MD2SRC_MS3_LENGTH                        equ 0001h
MD2SRC_MS3_MASK                          equ 0008h
MD2SRC_MS4_POSN                          equ 0004h
MD2SRC_MS4_POSITION                      equ 0004h
MD2SRC_MS4_SIZE                          equ 0001h
MD2SRC_MS4_LENGTH                        equ 0001h
MD2SRC_MS4_MASK                          equ 0010h
MD2SRC_MD2MS_POSN                        equ 0000h
MD2SRC_MD2MS_POSITION                    equ 0000h
MD2SRC_MD2MS_SIZE                        equ 0005h
MD2SRC_MD2MS_LENGTH                      equ 0005h
MD2SRC_MD2MS_MASK                        equ 001Fh
MD2SRC_MD2MS0_POSN                       equ 0000h
MD2SRC_MD2MS0_POSITION                   equ 0000h
MD2SRC_MD2MS0_SIZE                       equ 0001h
MD2SRC_MD2MS0_LENGTH                     equ 0001h
MD2SRC_MD2MS0_MASK                       equ 0001h
MD2SRC_MD2MS1_POSN                       equ 0001h
MD2SRC_MD2MS1_POSITION                   equ 0001h
MD2SRC_MD2MS1_SIZE                       equ 0001h
MD2SRC_MD2MS1_LENGTH                     equ 0001h
MD2SRC_MD2MS1_MASK                       equ 0002h
MD2SRC_MD2MS2_POSN                       equ 0002h
MD2SRC_MD2MS2_POSITION                   equ 0002h
MD2SRC_MD2MS2_SIZE                       equ 0001h
MD2SRC_MD2MS2_LENGTH                     equ 0001h
MD2SRC_MD2MS2_MASK                       equ 0004h
MD2SRC_MD2MS3_POSN                       equ 0003h
MD2SRC_MD2MS3_POSITION                   equ 0003h
MD2SRC_MD2MS3_SIZE                       equ 0001h
MD2SRC_MD2MS3_LENGTH                     equ 0001h
MD2SRC_MD2MS3_MASK                       equ 0008h
MD2SRC_MD2MS4_POSN                       equ 0004h
MD2SRC_MD2MS4_POSITION                   equ 0004h
MD2SRC_MD2MS4_SIZE                       equ 0001h
MD2SRC_MD2MS4_LENGTH                     equ 0001h
MD2SRC_MD2MS4_MASK                       equ 0010h

// Register: MD2CARL
#define MD2CARL MD2CARL
MD2CARL                                  equ 031Eh
// bitfield definitions
MD2CARL_CL_POSN                          equ 0000h
MD2CARL_CL_POSITION                      equ 0000h
MD2CARL_CL_SIZE                          equ 0004h
MD2CARL_CL_LENGTH                        equ 0004h
MD2CARL_CL_MASK                          equ 000Fh
MD2CARL_CL0_POSN                         equ 0000h
MD2CARL_CL0_POSITION                     equ 0000h
MD2CARL_CL0_SIZE                         equ 0001h
MD2CARL_CL0_LENGTH                       equ 0001h
MD2CARL_CL0_MASK                         equ 0001h
MD2CARL_CL1_POSN                         equ 0001h
MD2CARL_CL1_POSITION                     equ 0001h
MD2CARL_CL1_SIZE                         equ 0001h
MD2CARL_CL1_LENGTH                       equ 0001h
MD2CARL_CL1_MASK                         equ 0002h
MD2CARL_CL2_POSN                         equ 0002h
MD2CARL_CL2_POSITION                     equ 0002h
MD2CARL_CL2_SIZE                         equ 0001h
MD2CARL_CL2_LENGTH                       equ 0001h
MD2CARL_CL2_MASK                         equ 0004h
MD2CARL_CL3_POSN                         equ 0003h
MD2CARL_CL3_POSITION                     equ 0003h
MD2CARL_CL3_SIZE                         equ 0001h
MD2CARL_CL3_LENGTH                       equ 0001h
MD2CARL_CL3_MASK                         equ 0008h
MD2CARL_MD2CL_POSN                       equ 0000h
MD2CARL_MD2CL_POSITION                   equ 0000h
MD2CARL_MD2CL_SIZE                       equ 0004h
MD2CARL_MD2CL_LENGTH                     equ 0004h
MD2CARL_MD2CL_MASK                       equ 000Fh
MD2CARL_MD2CL0_POSN                      equ 0000h
MD2CARL_MD2CL0_POSITION                  equ 0000h
MD2CARL_MD2CL0_SIZE                      equ 0001h
MD2CARL_MD2CL0_LENGTH                    equ 0001h
MD2CARL_MD2CL0_MASK                      equ 0001h
MD2CARL_MD2CL1_POSN                      equ 0001h
MD2CARL_MD2CL1_POSITION                  equ 0001h
MD2CARL_MD2CL1_SIZE                      equ 0001h
MD2CARL_MD2CL1_LENGTH                    equ 0001h
MD2CARL_MD2CL1_MASK                      equ 0002h
MD2CARL_MD2CL2_POSN                      equ 0002h
MD2CARL_MD2CL2_POSITION                  equ 0002h
MD2CARL_MD2CL2_SIZE                      equ 0001h
MD2CARL_MD2CL2_LENGTH                    equ 0001h
MD2CARL_MD2CL2_MASK                      equ 0004h
MD2CARL_MD2CL3_POSN                      equ 0003h
MD2CARL_MD2CL3_POSITION                  equ 0003h
MD2CARL_MD2CL3_SIZE                      equ 0001h
MD2CARL_MD2CL3_LENGTH                    equ 0001h
MD2CARL_MD2CL3_MASK                      equ 0008h

// Register: MD2CARH
#define MD2CARH MD2CARH
MD2CARH                                  equ 031Fh
// bitfield definitions
MD2CARH_CH_POSN                          equ 0000h
MD2CARH_CH_POSITION                      equ 0000h
MD2CARH_CH_SIZE                          equ 0004h
MD2CARH_CH_LENGTH                        equ 0004h
MD2CARH_CH_MASK                          equ 000Fh
MD2CARH_CH0_POSN                         equ 0000h
MD2CARH_CH0_POSITION                     equ 0000h
MD2CARH_CH0_SIZE                         equ 0001h
MD2CARH_CH0_LENGTH                       equ 0001h
MD2CARH_CH0_MASK                         equ 0001h
MD2CARH_CH1_POSN                         equ 0001h
MD2CARH_CH1_POSITION                     equ 0001h
MD2CARH_CH1_SIZE                         equ 0001h
MD2CARH_CH1_LENGTH                       equ 0001h
MD2CARH_CH1_MASK                         equ 0002h
MD2CARH_CH2_POSN                         equ 0002h
MD2CARH_CH2_POSITION                     equ 0002h
MD2CARH_CH2_SIZE                         equ 0001h
MD2CARH_CH2_LENGTH                       equ 0001h
MD2CARH_CH2_MASK                         equ 0004h
MD2CARH_CH3_POSN                         equ 0003h
MD2CARH_CH3_POSITION                     equ 0003h
MD2CARH_CH3_SIZE                         equ 0001h
MD2CARH_CH3_LENGTH                       equ 0001h
MD2CARH_CH3_MASK                         equ 0008h
MD2CARH_MD2CH_POSN                       equ 0000h
MD2CARH_MD2CH_POSITION                   equ 0000h
MD2CARH_MD2CH_SIZE                       equ 0004h
MD2CARH_MD2CH_LENGTH                     equ 0004h
MD2CARH_MD2CH_MASK                       equ 000Fh
MD2CARH_MD2CH0_POSN                      equ 0000h
MD2CARH_MD2CH0_POSITION                  equ 0000h
MD2CARH_MD2CH0_SIZE                      equ 0001h
MD2CARH_MD2CH0_LENGTH                    equ 0001h
MD2CARH_MD2CH0_MASK                      equ 0001h
MD2CARH_MD2CH1_POSN                      equ 0001h
MD2CARH_MD2CH1_POSITION                  equ 0001h
MD2CARH_MD2CH1_SIZE                      equ 0001h
MD2CARH_MD2CH1_LENGTH                    equ 0001h
MD2CARH_MD2CH1_MASK                      equ 0002h
MD2CARH_MD2CH2_POSN                      equ 0002h
MD2CARH_MD2CH2_POSITION                  equ 0002h
MD2CARH_MD2CH2_SIZE                      equ 0001h
MD2CARH_MD2CH2_LENGTH                    equ 0001h
MD2CARH_MD2CH2_MASK                      equ 0004h
MD2CARH_MD2CH3_POSN                      equ 0003h
MD2CARH_MD2CH3_POSITION                  equ 0003h
MD2CARH_MD2CH3_SIZE                      equ 0001h
MD2CARH_MD2CH3_LENGTH                    equ 0001h
MD2CARH_MD2CH3_MASK                      equ 0008h

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

// Register: INLVLB
#define INLVLB INLVLB
INLVLB                                   equ 038Dh
// bitfield definitions
INLVLB_INLVLB4_POSN                      equ 0004h
INLVLB_INLVLB4_POSITION                  equ 0004h
INLVLB_INLVLB4_SIZE                      equ 0001h
INLVLB_INLVLB4_LENGTH                    equ 0001h
INLVLB_INLVLB4_MASK                      equ 0010h
INLVLB_INLVLB5_POSN                      equ 0005h
INLVLB_INLVLB5_POSITION                  equ 0005h
INLVLB_INLVLB5_SIZE                      equ 0001h
INLVLB_INLVLB5_LENGTH                    equ 0001h
INLVLB_INLVLB5_MASK                      equ 0020h
INLVLB_INLVLB6_POSN                      equ 0006h
INLVLB_INLVLB6_POSITION                  equ 0006h
INLVLB_INLVLB6_SIZE                      equ 0001h
INLVLB_INLVLB6_LENGTH                    equ 0001h
INLVLB_INLVLB6_MASK                      equ 0040h
INLVLB_INLVLB7_POSN                      equ 0007h
INLVLB_INLVLB7_POSITION                  equ 0007h
INLVLB_INLVLB7_SIZE                      equ 0001h
INLVLB_INLVLB7_LENGTH                    equ 0001h
INLVLB_INLVLB7_MASK                      equ 0080h

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
INLVLC_INLVLC6_POSN                      equ 0006h
INLVLC_INLVLC6_POSITION                  equ 0006h
INLVLC_INLVLC6_SIZE                      equ 0001h
INLVLC_INLVLC6_LENGTH                    equ 0001h
INLVLC_INLVLC6_MASK                      equ 0040h
INLVLC_INLVLC7_POSN                      equ 0007h
INLVLC_INLVLC7_POSITION                  equ 0007h
INLVLC_INLVLC7_SIZE                      equ 0001h
INLVLC_INLVLC7_LENGTH                    equ 0001h
INLVLC_INLVLC7_MASK                      equ 0080h

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

// Register: IOCBP
#define IOCBP IOCBP
IOCBP                                    equ 0394h
// bitfield definitions
IOCBP_IOCBP4_POSN                        equ 0004h
IOCBP_IOCBP4_POSITION                    equ 0004h
IOCBP_IOCBP4_SIZE                        equ 0001h
IOCBP_IOCBP4_LENGTH                      equ 0001h
IOCBP_IOCBP4_MASK                        equ 0010h
IOCBP_IOCBP5_POSN                        equ 0005h
IOCBP_IOCBP5_POSITION                    equ 0005h
IOCBP_IOCBP5_SIZE                        equ 0001h
IOCBP_IOCBP5_LENGTH                      equ 0001h
IOCBP_IOCBP5_MASK                        equ 0020h
IOCBP_IOCBP6_POSN                        equ 0006h
IOCBP_IOCBP6_POSITION                    equ 0006h
IOCBP_IOCBP6_SIZE                        equ 0001h
IOCBP_IOCBP6_LENGTH                      equ 0001h
IOCBP_IOCBP6_MASK                        equ 0040h
IOCBP_IOCBP7_POSN                        equ 0007h
IOCBP_IOCBP7_POSITION                    equ 0007h
IOCBP_IOCBP7_SIZE                        equ 0001h
IOCBP_IOCBP7_LENGTH                      equ 0001h
IOCBP_IOCBP7_MASK                        equ 0080h

// Register: IOCBN
#define IOCBN IOCBN
IOCBN                                    equ 0395h
// bitfield definitions
IOCBN_IOCBN4_POSN                        equ 0004h
IOCBN_IOCBN4_POSITION                    equ 0004h
IOCBN_IOCBN4_SIZE                        equ 0001h
IOCBN_IOCBN4_LENGTH                      equ 0001h
IOCBN_IOCBN4_MASK                        equ 0010h
IOCBN_IOCBN5_POSN                        equ 0005h
IOCBN_IOCBN5_POSITION                    equ 0005h
IOCBN_IOCBN5_SIZE                        equ 0001h
IOCBN_IOCBN5_LENGTH                      equ 0001h
IOCBN_IOCBN5_MASK                        equ 0020h
IOCBN_IOCBN6_POSN                        equ 0006h
IOCBN_IOCBN6_POSITION                    equ 0006h
IOCBN_IOCBN6_SIZE                        equ 0001h
IOCBN_IOCBN6_LENGTH                      equ 0001h
IOCBN_IOCBN6_MASK                        equ 0040h
IOCBN_IOCBN7_POSN                        equ 0007h
IOCBN_IOCBN7_POSITION                    equ 0007h
IOCBN_IOCBN7_SIZE                        equ 0001h
IOCBN_IOCBN7_LENGTH                      equ 0001h
IOCBN_IOCBN7_MASK                        equ 0080h

// Register: IOCBF
#define IOCBF IOCBF
IOCBF                                    equ 0396h
// bitfield definitions
IOCBF_IOCBF4_POSN                        equ 0004h
IOCBF_IOCBF4_POSITION                    equ 0004h
IOCBF_IOCBF4_SIZE                        equ 0001h
IOCBF_IOCBF4_LENGTH                      equ 0001h
IOCBF_IOCBF4_MASK                        equ 0010h
IOCBF_IOCBF5_POSN                        equ 0005h
IOCBF_IOCBF5_POSITION                    equ 0005h
IOCBF_IOCBF5_SIZE                        equ 0001h
IOCBF_IOCBF5_LENGTH                      equ 0001h
IOCBF_IOCBF5_MASK                        equ 0020h
IOCBF_IOCBF6_POSN                        equ 0006h
IOCBF_IOCBF6_POSITION                    equ 0006h
IOCBF_IOCBF6_SIZE                        equ 0001h
IOCBF_IOCBF6_LENGTH                      equ 0001h
IOCBF_IOCBF6_MASK                        equ 0040h
IOCBF_IOCBF7_POSN                        equ 0007h
IOCBF_IOCBF7_POSITION                    equ 0007h
IOCBF_IOCBF7_SIZE                        equ 0001h
IOCBF_IOCBF7_LENGTH                      equ 0001h
IOCBF_IOCBF7_MASK                        equ 0080h

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
IOCCP_IOCCP6_POSN                        equ 0006h
IOCCP_IOCCP6_POSITION                    equ 0006h
IOCCP_IOCCP6_SIZE                        equ 0001h
IOCCP_IOCCP6_LENGTH                      equ 0001h
IOCCP_IOCCP6_MASK                        equ 0040h
IOCCP_IOCCP7_POSN                        equ 0007h
IOCCP_IOCCP7_POSITION                    equ 0007h
IOCCP_IOCCP7_SIZE                        equ 0001h
IOCCP_IOCCP7_LENGTH                      equ 0001h
IOCCP_IOCCP7_MASK                        equ 0080h

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
IOCCN_IOCCN6_POSN                        equ 0006h
IOCCN_IOCCN6_POSITION                    equ 0006h
IOCCN_IOCCN6_SIZE                        equ 0001h
IOCCN_IOCCN6_LENGTH                      equ 0001h
IOCCN_IOCCN6_MASK                        equ 0040h
IOCCN_IOCCN7_POSN                        equ 0007h
IOCCN_IOCCN7_POSITION                    equ 0007h
IOCCN_IOCCN7_SIZE                        equ 0001h
IOCCN_IOCCN7_LENGTH                      equ 0001h
IOCCN_IOCCN7_MASK                        equ 0080h

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
IOCCF_IOCCF6_POSN                        equ 0006h
IOCCF_IOCCF6_POSITION                    equ 0006h
IOCCF_IOCCF6_SIZE                        equ 0001h
IOCCF_IOCCF6_LENGTH                      equ 0001h
IOCCF_IOCCF6_MASK                        equ 0040h
IOCCF_IOCCF7_POSN                        equ 0007h
IOCCF_IOCCF7_POSITION                    equ 0007h
IOCCF_IOCCF7_SIZE                        equ 0001h
IOCCF_IOCCF7_LENGTH                      equ 0001h
IOCCF_IOCCF7_MASK                        equ 0080h

// Register: MD1CON0
#define MD1CON0 MD1CON0
MD1CON0                                  equ 039Bh
// bitfield definitions
MD1CON0_BIT_POSN                         equ 0000h
MD1CON0_BIT_POSITION                     equ 0000h
MD1CON0_BIT_SIZE                         equ 0001h
MD1CON0_BIT_LENGTH                       equ 0001h
MD1CON0_BIT_MASK                         equ 0001h
MD1CON0_OPOL_POSN                        equ 0004h
MD1CON0_OPOL_POSITION                    equ 0004h
MD1CON0_OPOL_SIZE                        equ 0001h
MD1CON0_OPOL_LENGTH                      equ 0001h
MD1CON0_OPOL_MASK                        equ 0010h
MD1CON0_OUT_POSN                         equ 0005h
MD1CON0_OUT_POSITION                     equ 0005h
MD1CON0_OUT_SIZE                         equ 0001h
MD1CON0_OUT_LENGTH                       equ 0001h
MD1CON0_OUT_MASK                         equ 0020h
MD1CON0_EN_POSN                          equ 0007h
MD1CON0_EN_POSITION                      equ 0007h
MD1CON0_EN_SIZE                          equ 0001h
MD1CON0_EN_LENGTH                        equ 0001h
MD1CON0_EN_MASK                          equ 0080h
MD1CON0_MD1BIT_POSN                      equ 0000h
MD1CON0_MD1BIT_POSITION                  equ 0000h
MD1CON0_MD1BIT_SIZE                      equ 0001h
MD1CON0_MD1BIT_LENGTH                    equ 0001h
MD1CON0_MD1BIT_MASK                      equ 0001h
MD1CON0_MD1OPOL_POSN                     equ 0004h
MD1CON0_MD1OPOL_POSITION                 equ 0004h
MD1CON0_MD1OPOL_SIZE                     equ 0001h
MD1CON0_MD1OPOL_LENGTH                   equ 0001h
MD1CON0_MD1OPOL_MASK                     equ 0010h
MD1CON0_MD1OUT_POSN                      equ 0005h
MD1CON0_MD1OUT_POSITION                  equ 0005h
MD1CON0_MD1OUT_SIZE                      equ 0001h
MD1CON0_MD1OUT_LENGTH                    equ 0001h
MD1CON0_MD1OUT_MASK                      equ 0020h
MD1CON0_MD1EN_POSN                       equ 0007h
MD1CON0_MD1EN_POSITION                   equ 0007h
MD1CON0_MD1EN_SIZE                       equ 0001h
MD1CON0_MD1EN_LENGTH                     equ 0001h
MD1CON0_MD1EN_MASK                       equ 0080h

// Register: MD1CON1
#define MD1CON1 MD1CON1
MD1CON1                                  equ 039Ch
// bitfield definitions
MD1CON1_CLSYNC_POSN                      equ 0000h
MD1CON1_CLSYNC_POSITION                  equ 0000h
MD1CON1_CLSYNC_SIZE                      equ 0001h
MD1CON1_CLSYNC_LENGTH                    equ 0001h
MD1CON1_CLSYNC_MASK                      equ 0001h
MD1CON1_CLPOL_POSN                       equ 0001h
MD1CON1_CLPOL_POSITION                   equ 0001h
MD1CON1_CLPOL_SIZE                       equ 0001h
MD1CON1_CLPOL_LENGTH                     equ 0001h
MD1CON1_CLPOL_MASK                       equ 0002h
MD1CON1_CHSYNC_POSN                      equ 0004h
MD1CON1_CHSYNC_POSITION                  equ 0004h
MD1CON1_CHSYNC_SIZE                      equ 0001h
MD1CON1_CHSYNC_LENGTH                    equ 0001h
MD1CON1_CHSYNC_MASK                      equ 0010h
MD1CON1_CHPOL_POSN                       equ 0005h
MD1CON1_CHPOL_POSITION                   equ 0005h
MD1CON1_CHPOL_SIZE                       equ 0001h
MD1CON1_CHPOL_LENGTH                     equ 0001h
MD1CON1_CHPOL_MASK                       equ 0020h
MD1CON1_MD1CLSYNC_POSN                   equ 0000h
MD1CON1_MD1CLSYNC_POSITION               equ 0000h
MD1CON1_MD1CLSYNC_SIZE                   equ 0001h
MD1CON1_MD1CLSYNC_LENGTH                 equ 0001h
MD1CON1_MD1CLSYNC_MASK                   equ 0001h
MD1CON1_MD1CLPOL_POSN                    equ 0001h
MD1CON1_MD1CLPOL_POSITION                equ 0001h
MD1CON1_MD1CLPOL_SIZE                    equ 0001h
MD1CON1_MD1CLPOL_LENGTH                  equ 0001h
MD1CON1_MD1CLPOL_MASK                    equ 0002h
MD1CON1_MD1CHSYNC_POSN                   equ 0004h
MD1CON1_MD1CHSYNC_POSITION               equ 0004h
MD1CON1_MD1CHSYNC_SIZE                   equ 0001h
MD1CON1_MD1CHSYNC_LENGTH                 equ 0001h
MD1CON1_MD1CHSYNC_MASK                   equ 0010h
MD1CON1_MD1CHPOL_POSN                    equ 0005h
MD1CON1_MD1CHPOL_POSITION                equ 0005h
MD1CON1_MD1CHPOL_SIZE                    equ 0001h
MD1CON1_MD1CHPOL_LENGTH                  equ 0001h
MD1CON1_MD1CHPOL_MASK                    equ 0020h

// Register: MD1SRC
#define MD1SRC MD1SRC
MD1SRC                                   equ 039Dh
// bitfield definitions
MD1SRC_MS_POSN                           equ 0000h
MD1SRC_MS_POSITION                       equ 0000h
MD1SRC_MS_SIZE                           equ 0005h
MD1SRC_MS_LENGTH                         equ 0005h
MD1SRC_MS_MASK                           equ 001Fh
MD1SRC_MS0_POSN                          equ 0000h
MD1SRC_MS0_POSITION                      equ 0000h
MD1SRC_MS0_SIZE                          equ 0001h
MD1SRC_MS0_LENGTH                        equ 0001h
MD1SRC_MS0_MASK                          equ 0001h
MD1SRC_MS1_POSN                          equ 0001h
MD1SRC_MS1_POSITION                      equ 0001h
MD1SRC_MS1_SIZE                          equ 0001h
MD1SRC_MS1_LENGTH                        equ 0001h
MD1SRC_MS1_MASK                          equ 0002h
MD1SRC_MS2_POSN                          equ 0002h
MD1SRC_MS2_POSITION                      equ 0002h
MD1SRC_MS2_SIZE                          equ 0001h
MD1SRC_MS2_LENGTH                        equ 0001h
MD1SRC_MS2_MASK                          equ 0004h
MD1SRC_MS3_POSN                          equ 0003h
MD1SRC_MS3_POSITION                      equ 0003h
MD1SRC_MS3_SIZE                          equ 0001h
MD1SRC_MS3_LENGTH                        equ 0001h
MD1SRC_MS3_MASK                          equ 0008h
MD1SRC_MS4_POSN                          equ 0004h
MD1SRC_MS4_POSITION                      equ 0004h
MD1SRC_MS4_SIZE                          equ 0001h
MD1SRC_MS4_LENGTH                        equ 0001h
MD1SRC_MS4_MASK                          equ 0010h
MD1SRC_MD1MS_POSN                        equ 0000h
MD1SRC_MD1MS_POSITION                    equ 0000h
MD1SRC_MD1MS_SIZE                        equ 0005h
MD1SRC_MD1MS_LENGTH                      equ 0005h
MD1SRC_MD1MS_MASK                        equ 001Fh
MD1SRC_MD1MS0_POSN                       equ 0000h
MD1SRC_MD1MS0_POSITION                   equ 0000h
MD1SRC_MD1MS0_SIZE                       equ 0001h
MD1SRC_MD1MS0_LENGTH                     equ 0001h
MD1SRC_MD1MS0_MASK                       equ 0001h
MD1SRC_MD1MS1_POSN                       equ 0001h
MD1SRC_MD1MS1_POSITION                   equ 0001h
MD1SRC_MD1MS1_SIZE                       equ 0001h
MD1SRC_MD1MS1_LENGTH                     equ 0001h
MD1SRC_MD1MS1_MASK                       equ 0002h
MD1SRC_MD1MS2_POSN                       equ 0002h
MD1SRC_MD1MS2_POSITION                   equ 0002h
MD1SRC_MD1MS2_SIZE                       equ 0001h
MD1SRC_MD1MS2_LENGTH                     equ 0001h
MD1SRC_MD1MS2_MASK                       equ 0004h
MD1SRC_MD1MS3_POSN                       equ 0003h
MD1SRC_MD1MS3_POSITION                   equ 0003h
MD1SRC_MD1MS3_SIZE                       equ 0001h
MD1SRC_MD1MS3_LENGTH                     equ 0001h
MD1SRC_MD1MS3_MASK                       equ 0008h
MD1SRC_MD1MS4_POSN                       equ 0004h
MD1SRC_MD1MS4_POSITION                   equ 0004h
MD1SRC_MD1MS4_SIZE                       equ 0001h
MD1SRC_MD1MS4_LENGTH                     equ 0001h
MD1SRC_MD1MS4_MASK                       equ 0010h

// Register: MD1CARL
#define MD1CARL MD1CARL
MD1CARL                                  equ 039Eh
// bitfield definitions
MD1CARL_CL_POSN                          equ 0000h
MD1CARL_CL_POSITION                      equ 0000h
MD1CARL_CL_SIZE                          equ 0004h
MD1CARL_CL_LENGTH                        equ 0004h
MD1CARL_CL_MASK                          equ 000Fh
MD1CARL_CL0_POSN                         equ 0000h
MD1CARL_CL0_POSITION                     equ 0000h
MD1CARL_CL0_SIZE                         equ 0001h
MD1CARL_CL0_LENGTH                       equ 0001h
MD1CARL_CL0_MASK                         equ 0001h
MD1CARL_CL1_POSN                         equ 0001h
MD1CARL_CL1_POSITION                     equ 0001h
MD1CARL_CL1_SIZE                         equ 0001h
MD1CARL_CL1_LENGTH                       equ 0001h
MD1CARL_CL1_MASK                         equ 0002h
MD1CARL_CL2_POSN                         equ 0002h
MD1CARL_CL2_POSITION                     equ 0002h
MD1CARL_CL2_SIZE                         equ 0001h
MD1CARL_CL2_LENGTH                       equ 0001h
MD1CARL_CL2_MASK                         equ 0004h
MD1CARL_CL3_POSN                         equ 0003h
MD1CARL_CL3_POSITION                     equ 0003h
MD1CARL_CL3_SIZE                         equ 0001h
MD1CARL_CL3_LENGTH                       equ 0001h
MD1CARL_CL3_MASK                         equ 0008h
MD1CARL_MD1CL_POSN                       equ 0000h
MD1CARL_MD1CL_POSITION                   equ 0000h
MD1CARL_MD1CL_SIZE                       equ 0004h
MD1CARL_MD1CL_LENGTH                     equ 0004h
MD1CARL_MD1CL_MASK                       equ 000Fh
MD1CARL_MD1CL0_POSN                      equ 0000h
MD1CARL_MD1CL0_POSITION                  equ 0000h
MD1CARL_MD1CL0_SIZE                      equ 0001h
MD1CARL_MD1CL0_LENGTH                    equ 0001h
MD1CARL_MD1CL0_MASK                      equ 0001h
MD1CARL_MD1CL1_POSN                      equ 0001h
MD1CARL_MD1CL1_POSITION                  equ 0001h
MD1CARL_MD1CL1_SIZE                      equ 0001h
MD1CARL_MD1CL1_LENGTH                    equ 0001h
MD1CARL_MD1CL1_MASK                      equ 0002h
MD1CARL_MD1CL2_POSN                      equ 0002h
MD1CARL_MD1CL2_POSITION                  equ 0002h
MD1CARL_MD1CL2_SIZE                      equ 0001h
MD1CARL_MD1CL2_LENGTH                    equ 0001h
MD1CARL_MD1CL2_MASK                      equ 0004h
MD1CARL_MD1CL3_POSN                      equ 0003h
MD1CARL_MD1CL3_POSITION                  equ 0003h
MD1CARL_MD1CL3_SIZE                      equ 0001h
MD1CARL_MD1CL3_LENGTH                    equ 0001h
MD1CARL_MD1CL3_MASK                      equ 0008h

// Register: MD1CARH
#define MD1CARH MD1CARH
MD1CARH                                  equ 039Fh
// bitfield definitions
MD1CARH_CH_POSN                          equ 0000h
MD1CARH_CH_POSITION                      equ 0000h
MD1CARH_CH_SIZE                          equ 0004h
MD1CARH_CH_LENGTH                        equ 0004h
MD1CARH_CH_MASK                          equ 000Fh
MD1CARH_CH0_POSN                         equ 0000h
MD1CARH_CH0_POSITION                     equ 0000h
MD1CARH_CH0_SIZE                         equ 0001h
MD1CARH_CH0_LENGTH                       equ 0001h
MD1CARH_CH0_MASK                         equ 0001h
MD1CARH_CH1_POSN                         equ 0001h
MD1CARH_CH1_POSITION                     equ 0001h
MD1CARH_CH1_SIZE                         equ 0001h
MD1CARH_CH1_LENGTH                       equ 0001h
MD1CARH_CH1_MASK                         equ 0002h
MD1CARH_CH2_POSN                         equ 0002h
MD1CARH_CH2_POSITION                     equ 0002h
MD1CARH_CH2_SIZE                         equ 0001h
MD1CARH_CH2_LENGTH                       equ 0001h
MD1CARH_CH2_MASK                         equ 0004h
MD1CARH_CH3_POSN                         equ 0003h
MD1CARH_CH3_POSITION                     equ 0003h
MD1CARH_CH3_SIZE                         equ 0001h
MD1CARH_CH3_LENGTH                       equ 0001h
MD1CARH_CH3_MASK                         equ 0008h
MD1CARH_MD1CH_POSN                       equ 0000h
MD1CARH_MD1CH_POSITION                   equ 0000h
MD1CARH_MD1CH_SIZE                       equ 0004h
MD1CARH_MD1CH_LENGTH                     equ 0004h
MD1CARH_MD1CH_MASK                       equ 000Fh
MD1CARH_MD1CH0_POSN                      equ 0000h
MD1CARH_MD1CH0_POSITION                  equ 0000h
MD1CARH_MD1CH0_SIZE                      equ 0001h
MD1CARH_MD1CH0_LENGTH                    equ 0001h
MD1CARH_MD1CH0_MASK                      equ 0001h
MD1CARH_MD1CH1_POSN                      equ 0001h
MD1CARH_MD1CH1_POSITION                  equ 0001h
MD1CARH_MD1CH1_SIZE                      equ 0001h
MD1CARH_MD1CH1_LENGTH                    equ 0001h
MD1CARH_MD1CH1_MASK                      equ 0002h
MD1CARH_MD1CH2_POSN                      equ 0002h
MD1CARH_MD1CH2_POSITION                  equ 0002h
MD1CARH_MD1CH2_SIZE                      equ 0001h
MD1CARH_MD1CH2_LENGTH                    equ 0001h
MD1CARH_MD1CH2_MASK                      equ 0004h
MD1CARH_MD1CH3_POSN                      equ 0003h
MD1CARH_MD1CH3_POSITION                  equ 0003h
MD1CARH_MD1CH3_SIZE                      equ 0001h
MD1CARH_MD1CH3_LENGTH                    equ 0001h
MD1CARH_MD1CH3_MASK                      equ 0008h

// Register: HIDRVC
#define HIDRVC HIDRVC
HIDRVC                                   equ 040Eh
// bitfield definitions
HIDRVC_HIDC4_POSN                        equ 0004h
HIDRVC_HIDC4_POSITION                    equ 0004h
HIDRVC_HIDC4_SIZE                        equ 0001h
HIDRVC_HIDC4_LENGTH                      equ 0001h
HIDRVC_HIDC4_MASK                        equ 0010h
HIDRVC_HIDC5_POSN                        equ 0005h
HIDRVC_HIDC5_POSITION                    equ 0005h
HIDRVC_HIDC5_SIZE                        equ 0001h
HIDRVC_HIDC5_LENGTH                      equ 0001h
HIDRVC_HIDC5_MASK                        equ 0020h

// Register: T4TMR
#define T4TMR T4TMR
T4TMR                                    equ 0413h
// bitfield definitions
T4TMR_TMR_POSN                           equ 0000h
T4TMR_TMR_POSITION                       equ 0000h
T4TMR_TMR_SIZE                           equ 0008h
T4TMR_TMR_LENGTH                         equ 0008h
T4TMR_TMR_MASK                           equ 00FFh
T4TMR_TMR4_POSN                          equ 0000h
T4TMR_TMR4_POSITION                      equ 0000h
T4TMR_TMR4_SIZE                          equ 0008h
T4TMR_TMR4_LENGTH                        equ 0008h
T4TMR_TMR4_MASK                          equ 00FFh

// Register: T4PR
#define T4PR T4PR
T4PR                                     equ 0414h
// bitfield definitions
T4PR_PR_POSN                             equ 0000h
T4PR_PR_POSITION                         equ 0000h
T4PR_PR_SIZE                             equ 0008h
T4PR_PR_LENGTH                           equ 0008h
T4PR_PR_MASK                             equ 00FFh
T4PR_T4PR_POSN                           equ 0000h
T4PR_T4PR_POSITION                       equ 0000h
T4PR_T4PR_SIZE                           equ 0008h
T4PR_T4PR_LENGTH                         equ 0008h
T4PR_T4PR_MASK                           equ 00FFh

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
T4HLT_MODE_SIZE                          equ 0005h
T4HLT_MODE_LENGTH                        equ 0005h
T4HLT_MODE_MASK                          equ 001Fh
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
T4HLT_MODE4_POSN                         equ 0004h
T4HLT_MODE4_POSITION                     equ 0004h
T4HLT_MODE4_SIZE                         equ 0001h
T4HLT_MODE4_LENGTH                       equ 0001h
T4HLT_MODE4_MASK                         equ 0010h
T4HLT_T4MODE_POSN                        equ 0000h
T4HLT_T4MODE_POSITION                    equ 0000h
T4HLT_T4MODE_SIZE                        equ 0005h
T4HLT_T4MODE_LENGTH                      equ 0005h
T4HLT_T4MODE_MASK                        equ 001Fh
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
T4HLT_T4MODE4_POSN                       equ 0004h
T4HLT_T4MODE4_POSITION                   equ 0004h
T4HLT_T4MODE4_SIZE                       equ 0001h
T4HLT_T4MODE4_LENGTH                     equ 0001h
T4HLT_T4MODE4_MASK                       equ 0010h

// Register: T4CLKCON
#define T4CLKCON T4CLKCON
T4CLKCON                                 equ 0417h
// bitfield definitions
T4CLKCON_CS_POSN                         equ 0000h
T4CLKCON_CS_POSITION                     equ 0000h
T4CLKCON_CS_SIZE                         equ 0004h
T4CLKCON_CS_LENGTH                       equ 0004h
T4CLKCON_CS_MASK                         equ 000Fh
T4CLKCON_CS0_POSN                        equ 0000h
T4CLKCON_CS0_POSITION                    equ 0000h
T4CLKCON_CS0_SIZE                        equ 0001h
T4CLKCON_CS0_LENGTH                      equ 0001h
T4CLKCON_CS0_MASK                        equ 0001h
T4CLKCON_CS1_POSN                        equ 0001h
T4CLKCON_CS1_POSITION                    equ 0001h
T4CLKCON_CS1_SIZE                        equ 0001h
T4CLKCON_CS1_LENGTH                      equ 0001h
T4CLKCON_CS1_MASK                        equ 0002h
T4CLKCON_CS2_POSN                        equ 0002h
T4CLKCON_CS2_POSITION                    equ 0002h
T4CLKCON_CS2_SIZE                        equ 0001h
T4CLKCON_CS2_LENGTH                      equ 0001h
T4CLKCON_CS2_MASK                        equ 0004h
T4CLKCON_CS3_POSN                        equ 0003h
T4CLKCON_CS3_POSITION                    equ 0003h
T4CLKCON_CS3_SIZE                        equ 0001h
T4CLKCON_CS3_LENGTH                      equ 0001h
T4CLKCON_CS3_MASK                        equ 0008h
T4CLKCON_T4CS_POSN                       equ 0000h
T4CLKCON_T4CS_POSITION                   equ 0000h
T4CLKCON_T4CS_SIZE                       equ 0004h
T4CLKCON_T4CS_LENGTH                     equ 0004h
T4CLKCON_T4CS_MASK                       equ 000Fh
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
T4CLKCON_T4CS3_POSN                      equ 0003h
T4CLKCON_T4CS3_POSITION                  equ 0003h
T4CLKCON_T4CS3_SIZE                      equ 0001h
T4CLKCON_T4CS3_LENGTH                    equ 0001h
T4CLKCON_T4CS3_MASK                      equ 0008h

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
T6TMR_TMR_POSN                           equ 0000h
T6TMR_TMR_POSITION                       equ 0000h
T6TMR_TMR_SIZE                           equ 0008h
T6TMR_TMR_LENGTH                         equ 0008h
T6TMR_TMR_MASK                           equ 00FFh
T6TMR_TMR6_POSN                          equ 0000h
T6TMR_TMR6_POSITION                      equ 0000h
T6TMR_TMR6_SIZE                          equ 0008h
T6TMR_TMR6_LENGTH                        equ 0008h
T6TMR_TMR6_MASK                          equ 00FFh

// Register: T6PR
#define T6PR T6PR
T6PR                                     equ 041Bh
// bitfield definitions
T6PR_PR_POSN                             equ 0000h
T6PR_PR_POSITION                         equ 0000h
T6PR_PR_SIZE                             equ 0008h
T6PR_PR_LENGTH                           equ 0008h
T6PR_PR_MASK                             equ 00FFh
T6PR_T6PR_POSN                           equ 0000h
T6PR_T6PR_POSITION                       equ 0000h
T6PR_T6PR_SIZE                           equ 0008h
T6PR_T6PR_LENGTH                         equ 0008h
T6PR_T6PR_MASK                           equ 00FFh

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
T6HLT_MODE_SIZE                          equ 0005h
T6HLT_MODE_LENGTH                        equ 0005h
T6HLT_MODE_MASK                          equ 001Fh
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
T6HLT_MODE4_POSN                         equ 0004h
T6HLT_MODE4_POSITION                     equ 0004h
T6HLT_MODE4_SIZE                         equ 0001h
T6HLT_MODE4_LENGTH                       equ 0001h
T6HLT_MODE4_MASK                         equ 0010h
T6HLT_T6MODE_POSN                        equ 0000h
T6HLT_T6MODE_POSITION                    equ 0000h
T6HLT_T6MODE_SIZE                        equ 0005h
T6HLT_T6MODE_LENGTH                      equ 0005h
T6HLT_T6MODE_MASK                        equ 001Fh
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
T6HLT_T6MODE4_POSN                       equ 0004h
T6HLT_T6MODE4_POSITION                   equ 0004h
T6HLT_T6MODE4_SIZE                       equ 0001h
T6HLT_T6MODE4_LENGTH                     equ 0001h
T6HLT_T6MODE4_MASK                       equ 0010h

// Register: T6CLKCON
#define T6CLKCON T6CLKCON
T6CLKCON                                 equ 041Eh
// bitfield definitions
T6CLKCON_CS_POSN                         equ 0000h
T6CLKCON_CS_POSITION                     equ 0000h
T6CLKCON_CS_SIZE                         equ 0004h
T6CLKCON_CS_LENGTH                       equ 0004h
T6CLKCON_CS_MASK                         equ 000Fh
T6CLKCON_CS0_POSN                        equ 0000h
T6CLKCON_CS0_POSITION                    equ 0000h
T6CLKCON_CS0_SIZE                        equ 0001h
T6CLKCON_CS0_LENGTH                      equ 0001h
T6CLKCON_CS0_MASK                        equ 0001h
T6CLKCON_CS1_POSN                        equ 0001h
T6CLKCON_CS1_POSITION                    equ 0001h
T6CLKCON_CS1_SIZE                        equ 0001h
T6CLKCON_CS1_LENGTH                      equ 0001h
T6CLKCON_CS1_MASK                        equ 0002h
T6CLKCON_CS2_POSN                        equ 0002h
T6CLKCON_CS2_POSITION                    equ 0002h
T6CLKCON_CS2_SIZE                        equ 0001h
T6CLKCON_CS2_LENGTH                      equ 0001h
T6CLKCON_CS2_MASK                        equ 0004h
T6CLKCON_CS3_POSN                        equ 0003h
T6CLKCON_CS3_POSITION                    equ 0003h
T6CLKCON_CS3_SIZE                        equ 0001h
T6CLKCON_CS3_LENGTH                      equ 0001h
T6CLKCON_CS3_MASK                        equ 0008h
T6CLKCON_T6CS_POSN                       equ 0000h
T6CLKCON_T6CS_POSITION                   equ 0000h
T6CLKCON_T6CS_SIZE                       equ 0004h
T6CLKCON_T6CS_LENGTH                     equ 0004h
T6CLKCON_T6CS_MASK                       equ 000Fh
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
T6CLKCON_T6CS3_POSN                      equ 0003h
T6CLKCON_T6CS3_POSITION                  equ 0003h
T6CLKCON_T6CS3_SIZE                      equ 0001h
T6CLKCON_T6CS3_LENGTH                    equ 0001h
T6CLKCON_T6CS3_MASK                      equ 0008h

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

// Register: TMR3L
#define TMR3L TMR3L
TMR3L                                    equ 0493h
// bitfield definitions
TMR3L_TMR_POSN                           equ 0000h
TMR3L_TMR_POSITION                       equ 0000h
TMR3L_TMR_SIZE                           equ 0008h
TMR3L_TMR_LENGTH                         equ 0008h
TMR3L_TMR_MASK                           equ 00FFh

// Register: TMR3H
#define TMR3H TMR3H
TMR3H                                    equ 0494h
// bitfield definitions
TMR3H_TMR_POSN                           equ 0000h
TMR3H_TMR_POSITION                       equ 0000h
TMR3H_TMR_SIZE                           equ 0008h
TMR3H_TMR_LENGTH                         equ 0008h
TMR3H_TMR_MASK                           equ 00FFh

// Register: T3CON
#define T3CON T3CON
T3CON                                    equ 0495h
// bitfield definitions
T3CON_ON_POSN                            equ 0000h
T3CON_ON_POSITION                        equ 0000h
T3CON_ON_SIZE                            equ 0001h
T3CON_ON_LENGTH                          equ 0001h
T3CON_ON_MASK                            equ 0001h
T3CON_nSYNC_POSN                         equ 0002h
T3CON_nSYNC_POSITION                     equ 0002h
T3CON_nSYNC_SIZE                         equ 0001h
T3CON_nSYNC_LENGTH                       equ 0001h
T3CON_nSYNC_MASK                         equ 0004h
T3CON_CKPS_POSN                          equ 0004h
T3CON_CKPS_POSITION                      equ 0004h
T3CON_CKPS_SIZE                          equ 0002h
T3CON_CKPS_LENGTH                        equ 0002h
T3CON_CKPS_MASK                          equ 0030h
T3CON_CS_POSN                            equ 0006h
T3CON_CS_POSITION                        equ 0006h
T3CON_CS_SIZE                            equ 0002h
T3CON_CS_LENGTH                          equ 0002h
T3CON_CS_MASK                            equ 00C0h
T3CON_TMRON_POSN                         equ 0000h
T3CON_TMRON_POSITION                     equ 0000h
T3CON_TMRON_SIZE                         equ 0001h
T3CON_TMRON_LENGTH                       equ 0001h
T3CON_TMRON_MASK                         equ 0001h
T3CON_SYNC_POSN                          equ 0002h
T3CON_SYNC_POSITION                      equ 0002h
T3CON_SYNC_SIZE                          equ 0001h
T3CON_SYNC_LENGTH                        equ 0001h
T3CON_SYNC_MASK                          equ 0004h
T3CON_CKPS0_POSN                         equ 0004h
T3CON_CKPS0_POSITION                     equ 0004h
T3CON_CKPS0_SIZE                         equ 0001h
T3CON_CKPS0_LENGTH                       equ 0001h
T3CON_CKPS0_MASK                         equ 0010h
T3CON_CKPS1_POSN                         equ 0005h
T3CON_CKPS1_POSITION                     equ 0005h
T3CON_CKPS1_SIZE                         equ 0001h
T3CON_CKPS1_LENGTH                       equ 0001h
T3CON_CKPS1_MASK                         equ 0020h
T3CON_CS0_POSN                           equ 0006h
T3CON_CS0_POSITION                       equ 0006h
T3CON_CS0_SIZE                           equ 0001h
T3CON_CS0_LENGTH                         equ 0001h
T3CON_CS0_MASK                           equ 0040h
T3CON_CS1_POSN                           equ 0007h
T3CON_CS1_POSITION                       equ 0007h
T3CON_CS1_SIZE                           equ 0001h
T3CON_CS1_LENGTH                         equ 0001h
T3CON_CS1_MASK                           equ 0080h
T3CON_TMR3ON_POSN                        equ 0000h
T3CON_TMR3ON_POSITION                    equ 0000h
T3CON_TMR3ON_SIZE                        equ 0001h
T3CON_TMR3ON_LENGTH                      equ 0001h
T3CON_TMR3ON_MASK                        equ 0001h
T3CON_nT3SYNC_POSN                       equ 0002h
T3CON_nT3SYNC_POSITION                   equ 0002h
T3CON_nT3SYNC_SIZE                       equ 0001h
T3CON_nT3SYNC_LENGTH                     equ 0001h
T3CON_nT3SYNC_MASK                       equ 0004h
T3CON_T3CS0_POSN                         equ 0006h
T3CON_T3CS0_POSITION                     equ 0006h
T3CON_T3CS0_SIZE                         equ 0001h
T3CON_T3CS0_LENGTH                       equ 0001h
T3CON_T3CS0_MASK                         equ 0040h
T3CON_T3CS1_POSN                         equ 0007h
T3CON_T3CS1_POSITION                     equ 0007h
T3CON_T3CS1_SIZE                         equ 0001h
T3CON_T3CS1_LENGTH                       equ 0001h
T3CON_T3CS1_MASK                         equ 0080h
T3CON_T3ON_POSN                          equ 0000h
T3CON_T3ON_POSITION                      equ 0000h
T3CON_T3ON_SIZE                          equ 0001h
T3CON_T3ON_LENGTH                        equ 0001h
T3CON_T3ON_MASK                          equ 0001h
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

// Register: T3GCON
#define T3GCON T3GCON
T3GCON                                   equ 0496h
// bitfield definitions
T3GCON_GSS_POSN                          equ 0000h
T3GCON_GSS_POSITION                      equ 0000h
T3GCON_GSS_SIZE                          equ 0002h
T3GCON_GSS_LENGTH                        equ 0002h
T3GCON_GSS_MASK                          equ 0003h
T3GCON_GVAL_POSN                         equ 0002h
T3GCON_GVAL_POSITION                     equ 0002h
T3GCON_GVAL_SIZE                         equ 0001h
T3GCON_GVAL_LENGTH                       equ 0001h
T3GCON_GVAL_MASK                         equ 0004h
T3GCON_GGO_nDONE_POSN                    equ 0003h
T3GCON_GGO_nDONE_POSITION                equ 0003h
T3GCON_GGO_nDONE_SIZE                    equ 0001h
T3GCON_GGO_nDONE_LENGTH                  equ 0001h
T3GCON_GGO_nDONE_MASK                    equ 0008h
T3GCON_GSPM_POSN                         equ 0004h
T3GCON_GSPM_POSITION                     equ 0004h
T3GCON_GSPM_SIZE                         equ 0001h
T3GCON_GSPM_LENGTH                       equ 0001h
T3GCON_GSPM_MASK                         equ 0010h
T3GCON_GTM_POSN                          equ 0005h
T3GCON_GTM_POSITION                      equ 0005h
T3GCON_GTM_SIZE                          equ 0001h
T3GCON_GTM_LENGTH                        equ 0001h
T3GCON_GTM_MASK                          equ 0020h
T3GCON_GPOL_POSN                         equ 0006h
T3GCON_GPOL_POSITION                     equ 0006h
T3GCON_GPOL_SIZE                         equ 0001h
T3GCON_GPOL_LENGTH                       equ 0001h
T3GCON_GPOL_MASK                         equ 0040h
T3GCON_GE_POSN                           equ 0007h
T3GCON_GE_POSITION                       equ 0007h
T3GCON_GE_SIZE                           equ 0001h
T3GCON_GE_LENGTH                         equ 0001h
T3GCON_GE_MASK                           equ 0080h
T3GCON_GSS0_POSN                         equ 0000h
T3GCON_GSS0_POSITION                     equ 0000h
T3GCON_GSS0_SIZE                         equ 0001h
T3GCON_GSS0_LENGTH                       equ 0001h
T3GCON_GSS0_MASK                         equ 0001h
T3GCON_GSS1_POSN                         equ 0001h
T3GCON_GSS1_POSITION                     equ 0001h
T3GCON_GSS1_SIZE                         equ 0001h
T3GCON_GSS1_LENGTH                       equ 0001h
T3GCON_GSS1_MASK                         equ 0002h
T3GCON_T3GE_POSN                         equ 0007h
T3GCON_T3GE_POSITION                     equ 0007h
T3GCON_T3GE_SIZE                         equ 0001h
T3GCON_T3GE_LENGTH                       equ 0001h
T3GCON_T3GE_MASK                         equ 0080h
T3GCON_T3GVAL_POSN                       equ 0002h
T3GCON_T3GVAL_POSITION                   equ 0002h
T3GCON_T3GVAL_SIZE                       equ 0001h
T3GCON_T3GVAL_LENGTH                     equ 0001h
T3GCON_T3GVAL_MASK                       equ 0004h
T3GCON_T3GGO_nDONE_POSN                  equ 0003h
T3GCON_T3GGO_nDONE_POSITION              equ 0003h
T3GCON_T3GGO_nDONE_SIZE                  equ 0001h
T3GCON_T3GGO_nDONE_LENGTH                equ 0001h
T3GCON_T3GGO_nDONE_MASK                  equ 0008h
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

// Register: TMR5L
#define TMR5L TMR5L
TMR5L                                    equ 049Ah
// bitfield definitions
TMR5L_TMR_POSN                           equ 0000h
TMR5L_TMR_POSITION                       equ 0000h
TMR5L_TMR_SIZE                           equ 0008h
TMR5L_TMR_LENGTH                         equ 0008h
TMR5L_TMR_MASK                           equ 00FFh

// Register: TMR5H
#define TMR5H TMR5H
TMR5H                                    equ 049Bh
// bitfield definitions
TMR5H_TMR_POSN                           equ 0000h
TMR5H_TMR_POSITION                       equ 0000h
TMR5H_TMR_SIZE                           equ 0008h
TMR5H_TMR_LENGTH                         equ 0008h
TMR5H_TMR_MASK                           equ 00FFh

// Register: T5CON
#define T5CON T5CON
T5CON                                    equ 049Ch
// bitfield definitions
T5CON_ON_POSN                            equ 0000h
T5CON_ON_POSITION                        equ 0000h
T5CON_ON_SIZE                            equ 0001h
T5CON_ON_LENGTH                          equ 0001h
T5CON_ON_MASK                            equ 0001h
T5CON_nSYNC_POSN                         equ 0002h
T5CON_nSYNC_POSITION                     equ 0002h
T5CON_nSYNC_SIZE                         equ 0001h
T5CON_nSYNC_LENGTH                       equ 0001h
T5CON_nSYNC_MASK                         equ 0004h
T5CON_CKPS_POSN                          equ 0004h
T5CON_CKPS_POSITION                      equ 0004h
T5CON_CKPS_SIZE                          equ 0002h
T5CON_CKPS_LENGTH                        equ 0002h
T5CON_CKPS_MASK                          equ 0030h
T5CON_CS_POSN                            equ 0006h
T5CON_CS_POSITION                        equ 0006h
T5CON_CS_SIZE                            equ 0002h
T5CON_CS_LENGTH                          equ 0002h
T5CON_CS_MASK                            equ 00C0h
T5CON_TMRON_POSN                         equ 0000h
T5CON_TMRON_POSITION                     equ 0000h
T5CON_TMRON_SIZE                         equ 0001h
T5CON_TMRON_LENGTH                       equ 0001h
T5CON_TMRON_MASK                         equ 0001h
T5CON_SYNC_POSN                          equ 0002h
T5CON_SYNC_POSITION                      equ 0002h
T5CON_SYNC_SIZE                          equ 0001h
T5CON_SYNC_LENGTH                        equ 0001h
T5CON_SYNC_MASK                          equ 0004h
T5CON_CKPS0_POSN                         equ 0004h
T5CON_CKPS0_POSITION                     equ 0004h
T5CON_CKPS0_SIZE                         equ 0001h
T5CON_CKPS0_LENGTH                       equ 0001h
T5CON_CKPS0_MASK                         equ 0010h
T5CON_CKPS1_POSN                         equ 0005h
T5CON_CKPS1_POSITION                     equ 0005h
T5CON_CKPS1_SIZE                         equ 0001h
T5CON_CKPS1_LENGTH                       equ 0001h
T5CON_CKPS1_MASK                         equ 0020h
T5CON_CS0_POSN                           equ 0006h
T5CON_CS0_POSITION                       equ 0006h
T5CON_CS0_SIZE                           equ 0001h
T5CON_CS0_LENGTH                         equ 0001h
T5CON_CS0_MASK                           equ 0040h
T5CON_CS1_POSN                           equ 0007h
T5CON_CS1_POSITION                       equ 0007h
T5CON_CS1_SIZE                           equ 0001h
T5CON_CS1_LENGTH                         equ 0001h
T5CON_CS1_MASK                           equ 0080h
T5CON_TMR5ON_POSN                        equ 0000h
T5CON_TMR5ON_POSITION                    equ 0000h
T5CON_TMR5ON_SIZE                        equ 0001h
T5CON_TMR5ON_LENGTH                      equ 0001h
T5CON_TMR5ON_MASK                        equ 0001h
T5CON_nT5SYNC_POSN                       equ 0002h
T5CON_nT5SYNC_POSITION                   equ 0002h
T5CON_nT5SYNC_SIZE                       equ 0001h
T5CON_nT5SYNC_LENGTH                     equ 0001h
T5CON_nT5SYNC_MASK                       equ 0004h
T5CON_T5CS0_POSN                         equ 0006h
T5CON_T5CS0_POSITION                     equ 0006h
T5CON_T5CS0_SIZE                         equ 0001h
T5CON_T5CS0_LENGTH                       equ 0001h
T5CON_T5CS0_MASK                         equ 0040h
T5CON_T5CS1_POSN                         equ 0007h
T5CON_T5CS1_POSITION                     equ 0007h
T5CON_T5CS1_SIZE                         equ 0001h
T5CON_T5CS1_LENGTH                       equ 0001h
T5CON_T5CS1_MASK                         equ 0080h
T5CON_T5ON_POSN                          equ 0000h
T5CON_T5ON_POSITION                      equ 0000h
T5CON_T5ON_SIZE                          equ 0001h
T5CON_T5ON_LENGTH                        equ 0001h
T5CON_T5ON_MASK                          equ 0001h
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

// Register: T5GCON
#define T5GCON T5GCON
T5GCON                                   equ 049Dh
// bitfield definitions
T5GCON_GSS_POSN                          equ 0000h
T5GCON_GSS_POSITION                      equ 0000h
T5GCON_GSS_SIZE                          equ 0002h
T5GCON_GSS_LENGTH                        equ 0002h
T5GCON_GSS_MASK                          equ 0003h
T5GCON_GVAL_POSN                         equ 0002h
T5GCON_GVAL_POSITION                     equ 0002h
T5GCON_GVAL_SIZE                         equ 0001h
T5GCON_GVAL_LENGTH                       equ 0001h
T5GCON_GVAL_MASK                         equ 0004h
T5GCON_GGO_nDONE_POSN                    equ 0003h
T5GCON_GGO_nDONE_POSITION                equ 0003h
T5GCON_GGO_nDONE_SIZE                    equ 0001h
T5GCON_GGO_nDONE_LENGTH                  equ 0001h
T5GCON_GGO_nDONE_MASK                    equ 0008h
T5GCON_GSPM_POSN                         equ 0004h
T5GCON_GSPM_POSITION                     equ 0004h
T5GCON_GSPM_SIZE                         equ 0001h
T5GCON_GSPM_LENGTH                       equ 0001h
T5GCON_GSPM_MASK                         equ 0010h
T5GCON_GTM_POSN                          equ 0005h
T5GCON_GTM_POSITION                      equ 0005h
T5GCON_GTM_SIZE                          equ 0001h
T5GCON_GTM_LENGTH                        equ 0001h
T5GCON_GTM_MASK                          equ 0020h
T5GCON_GPOL_POSN                         equ 0006h
T5GCON_GPOL_POSITION                     equ 0006h
T5GCON_GPOL_SIZE                         equ 0001h
T5GCON_GPOL_LENGTH                       equ 0001h
T5GCON_GPOL_MASK                         equ 0040h
T5GCON_GE_POSN                           equ 0007h
T5GCON_GE_POSITION                       equ 0007h
T5GCON_GE_SIZE                           equ 0001h
T5GCON_GE_LENGTH                         equ 0001h
T5GCON_GE_MASK                           equ 0080h
T5GCON_GSS0_POSN                         equ 0000h
T5GCON_GSS0_POSITION                     equ 0000h
T5GCON_GSS0_SIZE                         equ 0001h
T5GCON_GSS0_LENGTH                       equ 0001h
T5GCON_GSS0_MASK                         equ 0001h
T5GCON_GSS1_POSN                         equ 0001h
T5GCON_GSS1_POSITION                     equ 0001h
T5GCON_GSS1_SIZE                         equ 0001h
T5GCON_GSS1_LENGTH                       equ 0001h
T5GCON_GSS1_MASK                         equ 0002h
T5GCON_T5GE_POSN                         equ 0007h
T5GCON_T5GE_POSITION                     equ 0007h
T5GCON_T5GE_SIZE                         equ 0001h
T5GCON_T5GE_LENGTH                       equ 0001h
T5GCON_T5GE_MASK                         equ 0080h
T5GCON_T5GVAL_POSN                       equ 0002h
T5GCON_T5GVAL_POSITION                   equ 0002h
T5GCON_T5GVAL_SIZE                       equ 0001h
T5GCON_T5GVAL_LENGTH                     equ 0001h
T5GCON_T5GVAL_MASK                       equ 0004h
T5GCON_T5GGO_nDONE_POSN                  equ 0003h
T5GCON_T5GGO_nDONE_POSITION              equ 0003h
T5GCON_T5GGO_nDONE_SIZE                  equ 0001h
T5GCON_T5GGO_nDONE_LENGTH                equ 0001h
T5GCON_T5GGO_nDONE_MASK                  equ 0008h
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

// Register: OPA1NCHS
#define OPA1NCHS OPA1NCHS
OPA1NCHS                                 equ 050Fh
// bitfield definitions
OPA1NCHS_NCH_POSN                        equ 0000h
OPA1NCHS_NCH_POSITION                    equ 0000h
OPA1NCHS_NCH_SIZE                        equ 0008h
OPA1NCHS_NCH_LENGTH                      equ 0008h
OPA1NCHS_NCH_MASK                        equ 00FFh
OPA1NCHS_OPA1NCH_POSN                    equ 0000h
OPA1NCHS_OPA1NCH_POSITION                equ 0000h
OPA1NCHS_OPA1NCH_SIZE                    equ 0008h
OPA1NCHS_OPA1NCH_LENGTH                  equ 0008h
OPA1NCHS_OPA1NCH_MASK                    equ 00FFh

// Register: OPA1PCHS
#define OPA1PCHS OPA1PCHS
OPA1PCHS                                 equ 0510h
// bitfield definitions
OPA1PCHS_PCH_POSN                        equ 0000h
OPA1PCHS_PCH_POSITION                    equ 0000h
OPA1PCHS_PCH_SIZE                        equ 0008h
OPA1PCHS_PCH_LENGTH                      equ 0008h
OPA1PCHS_PCH_MASK                        equ 00FFh
OPA1PCHS_OPA1PCH_POSN                    equ 0000h
OPA1PCHS_OPA1PCH_POSITION                equ 0000h
OPA1PCHS_OPA1PCH_SIZE                    equ 0008h
OPA1PCHS_OPA1PCH_LENGTH                  equ 0008h
OPA1PCHS_OPA1PCH_MASK                    equ 00FFh

// Register: OPA1CON
#define OPA1CON OPA1CON
OPA1CON                                  equ 0511h
// bitfield definitions
OPA1CON_ORM_POSN                         equ 0000h
OPA1CON_ORM_POSITION                     equ 0000h
OPA1CON_ORM_SIZE                         equ 0002h
OPA1CON_ORM_LENGTH                       equ 0002h
OPA1CON_ORM_MASK                         equ 0003h
OPA1CON_ORPOL_POSN                       equ 0002h
OPA1CON_ORPOL_POSITION                   equ 0002h
OPA1CON_ORPOL_SIZE                       equ 0001h
OPA1CON_ORPOL_LENGTH                     equ 0001h
OPA1CON_ORPOL_MASK                       equ 0004h
OPA1CON_UG_POSN                          equ 0004h
OPA1CON_UG_POSITION                      equ 0004h
OPA1CON_UG_SIZE                          equ 0001h
OPA1CON_UG_LENGTH                        equ 0001h
OPA1CON_UG_MASK                          equ 0010h
OPA1CON_EN_POSN                          equ 0007h
OPA1CON_EN_POSITION                      equ 0007h
OPA1CON_EN_SIZE                          equ 0001h
OPA1CON_EN_LENGTH                        equ 0001h
OPA1CON_EN_MASK                          equ 0080h
OPA1CON_ORM0_POSN                        equ 0000h
OPA1CON_ORM0_POSITION                    equ 0000h
OPA1CON_ORM0_SIZE                        equ 0001h
OPA1CON_ORM0_LENGTH                      equ 0001h
OPA1CON_ORM0_MASK                        equ 0001h
OPA1CON_ORM1_POSN                        equ 0001h
OPA1CON_ORM1_POSITION                    equ 0001h
OPA1CON_ORM1_SIZE                        equ 0001h
OPA1CON_ORM1_LENGTH                      equ 0001h
OPA1CON_ORM1_MASK                        equ 0002h
OPA1CON_OPA1ORM_POSN                     equ 0000h
OPA1CON_OPA1ORM_POSITION                 equ 0000h
OPA1CON_OPA1ORM_SIZE                     equ 0002h
OPA1CON_OPA1ORM_LENGTH                   equ 0002h
OPA1CON_OPA1ORM_MASK                     equ 0003h
OPA1CON_OPA1ORPOL_POSN                   equ 0002h
OPA1CON_OPA1ORPOL_POSITION               equ 0002h
OPA1CON_OPA1ORPOL_SIZE                   equ 0001h
OPA1CON_OPA1ORPOL_LENGTH                 equ 0001h
OPA1CON_OPA1ORPOL_MASK                   equ 0004h
OPA1CON_OPA1UG_POSN                      equ 0004h
OPA1CON_OPA1UG_POSITION                  equ 0004h
OPA1CON_OPA1UG_SIZE                      equ 0001h
OPA1CON_OPA1UG_LENGTH                    equ 0001h
OPA1CON_OPA1UG_MASK                      equ 0010h
OPA1CON_OPA1EN_POSN                      equ 0007h
OPA1CON_OPA1EN_POSITION                  equ 0007h
OPA1CON_OPA1EN_SIZE                      equ 0001h
OPA1CON_OPA1EN_LENGTH                    equ 0001h
OPA1CON_OPA1EN_MASK                      equ 0080h
OPA1CON_OPA1ORM0_POSN                    equ 0000h
OPA1CON_OPA1ORM0_POSITION                equ 0000h
OPA1CON_OPA1ORM0_SIZE                    equ 0001h
OPA1CON_OPA1ORM0_LENGTH                  equ 0001h
OPA1CON_OPA1ORM0_MASK                    equ 0001h
OPA1CON_OPA1ORM1_POSN                    equ 0001h
OPA1CON_OPA1ORM1_POSITION                equ 0001h
OPA1CON_OPA1ORM1_SIZE                    equ 0001h
OPA1CON_OPA1ORM1_LENGTH                  equ 0001h
OPA1CON_OPA1ORM1_MASK                    equ 0002h

// Register: OPA1ORS
#define OPA1ORS OPA1ORS
OPA1ORS                                  equ 0512h
// bitfield definitions
OPA1ORS_ORS_POSN                         equ 0000h
OPA1ORS_ORS_POSITION                     equ 0000h
OPA1ORS_ORS_SIZE                         equ 0008h
OPA1ORS_ORS_LENGTH                       equ 0008h
OPA1ORS_ORS_MASK                         equ 00FFh

// Register: OPA2NCHS
#define OPA2NCHS OPA2NCHS
OPA2NCHS                                 equ 0513h
// bitfield definitions
OPA2NCHS_NCH_POSN                        equ 0000h
OPA2NCHS_NCH_POSITION                    equ 0000h
OPA2NCHS_NCH_SIZE                        equ 0008h
OPA2NCHS_NCH_LENGTH                      equ 0008h
OPA2NCHS_NCH_MASK                        equ 00FFh
OPA2NCHS_OPA2NCH_POSN                    equ 0000h
OPA2NCHS_OPA2NCH_POSITION                equ 0000h
OPA2NCHS_OPA2NCH_SIZE                    equ 0008h
OPA2NCHS_OPA2NCH_LENGTH                  equ 0008h
OPA2NCHS_OPA2NCH_MASK                    equ 00FFh

// Register: OPA2PCHS
#define OPA2PCHS OPA2PCHS
OPA2PCHS                                 equ 0514h
// bitfield definitions
OPA2PCHS_PCH_POSN                        equ 0000h
OPA2PCHS_PCH_POSITION                    equ 0000h
OPA2PCHS_PCH_SIZE                        equ 0008h
OPA2PCHS_PCH_LENGTH                      equ 0008h
OPA2PCHS_PCH_MASK                        equ 00FFh
OPA2PCHS_OPA2PCH_POSN                    equ 0000h
OPA2PCHS_OPA2PCH_POSITION                equ 0000h
OPA2PCHS_OPA2PCH_SIZE                    equ 0008h
OPA2PCHS_OPA2PCH_LENGTH                  equ 0008h
OPA2PCHS_OPA2PCH_MASK                    equ 00FFh

// Register: OPA2CON
#define OPA2CON OPA2CON
OPA2CON                                  equ 0515h
// bitfield definitions
OPA2CON_ORM_POSN                         equ 0000h
OPA2CON_ORM_POSITION                     equ 0000h
OPA2CON_ORM_SIZE                         equ 0002h
OPA2CON_ORM_LENGTH                       equ 0002h
OPA2CON_ORM_MASK                         equ 0003h
OPA2CON_ORPOL_POSN                       equ 0002h
OPA2CON_ORPOL_POSITION                   equ 0002h
OPA2CON_ORPOL_SIZE                       equ 0001h
OPA2CON_ORPOL_LENGTH                     equ 0001h
OPA2CON_ORPOL_MASK                       equ 0004h
OPA2CON_UG_POSN                          equ 0004h
OPA2CON_UG_POSITION                      equ 0004h
OPA2CON_UG_SIZE                          equ 0001h
OPA2CON_UG_LENGTH                        equ 0001h
OPA2CON_UG_MASK                          equ 0010h
OPA2CON_EN_POSN                          equ 0007h
OPA2CON_EN_POSITION                      equ 0007h
OPA2CON_EN_SIZE                          equ 0001h
OPA2CON_EN_LENGTH                        equ 0001h
OPA2CON_EN_MASK                          equ 0080h
OPA2CON_ORM0_POSN                        equ 0000h
OPA2CON_ORM0_POSITION                    equ 0000h
OPA2CON_ORM0_SIZE                        equ 0001h
OPA2CON_ORM0_LENGTH                      equ 0001h
OPA2CON_ORM0_MASK                        equ 0001h
OPA2CON_ORM1_POSN                        equ 0001h
OPA2CON_ORM1_POSITION                    equ 0001h
OPA2CON_ORM1_SIZE                        equ 0001h
OPA2CON_ORM1_LENGTH                      equ 0001h
OPA2CON_ORM1_MASK                        equ 0002h
OPA2CON_OPA2ORM_POSN                     equ 0000h
OPA2CON_OPA2ORM_POSITION                 equ 0000h
OPA2CON_OPA2ORM_SIZE                     equ 0002h
OPA2CON_OPA2ORM_LENGTH                   equ 0002h
OPA2CON_OPA2ORM_MASK                     equ 0003h
OPA2CON_OPA2ORPOL_POSN                   equ 0002h
OPA2CON_OPA2ORPOL_POSITION               equ 0002h
OPA2CON_OPA2ORPOL_SIZE                   equ 0001h
OPA2CON_OPA2ORPOL_LENGTH                 equ 0001h
OPA2CON_OPA2ORPOL_MASK                   equ 0004h
OPA2CON_OPA2UG_POSN                      equ 0004h
OPA2CON_OPA2UG_POSITION                  equ 0004h
OPA2CON_OPA2UG_SIZE                      equ 0001h
OPA2CON_OPA2UG_LENGTH                    equ 0001h
OPA2CON_OPA2UG_MASK                      equ 0010h
OPA2CON_OPA2EN_POSN                      equ 0007h
OPA2CON_OPA2EN_POSITION                  equ 0007h
OPA2CON_OPA2EN_SIZE                      equ 0001h
OPA2CON_OPA2EN_LENGTH                    equ 0001h
OPA2CON_OPA2EN_MASK                      equ 0080h
OPA2CON_OPA2ORM0_POSN                    equ 0000h
OPA2CON_OPA2ORM0_POSITION                equ 0000h
OPA2CON_OPA2ORM0_SIZE                    equ 0001h
OPA2CON_OPA2ORM0_LENGTH                  equ 0001h
OPA2CON_OPA2ORM0_MASK                    equ 0001h
OPA2CON_OPA2ORM1_POSN                    equ 0001h
OPA2CON_OPA2ORM1_POSITION                equ 0001h
OPA2CON_OPA2ORM1_SIZE                    equ 0001h
OPA2CON_OPA2ORM1_LENGTH                  equ 0001h
OPA2CON_OPA2ORM1_MASK                    equ 0002h

// Register: OPA2ORS
#define OPA2ORS OPA2ORS
OPA2ORS                                  equ 0516h
// bitfield definitions
OPA2ORS_ORS_POSN                         equ 0000h
OPA2ORS_ORS_POSITION                     equ 0000h
OPA2ORS_ORS_SIZE                         equ 0008h
OPA2ORS_ORS_LENGTH                       equ 0008h
OPA2ORS_ORS_MASK                         equ 00FFh

// Register: DACLD
#define DACLD DACLD
DACLD                                    equ 0590h
// bitfield definitions
DACLD_DAC1LD_POSN                        equ 0000h
DACLD_DAC1LD_POSITION                    equ 0000h
DACLD_DAC1LD_SIZE                        equ 0001h
DACLD_DAC1LD_LENGTH                      equ 0001h
DACLD_DAC1LD_MASK                        equ 0001h
DACLD_DAC2LD_POSN                        equ 0001h
DACLD_DAC2LD_POSITION                    equ 0001h
DACLD_DAC2LD_SIZE                        equ 0001h
DACLD_DAC2LD_LENGTH                      equ 0001h
DACLD_DAC2LD_MASK                        equ 0002h

// Register: DAC1CON0
#define DAC1CON0 DAC1CON0
DAC1CON0                                 equ 0591h
// bitfield definitions
DAC1CON0_NSS_POSN                        equ 0000h
DAC1CON0_NSS_POSITION                    equ 0000h
DAC1CON0_NSS_SIZE                        equ 0002h
DAC1CON0_NSS_LENGTH                      equ 0002h
DAC1CON0_NSS_MASK                        equ 0003h
DAC1CON0_PSS_POSN                        equ 0002h
DAC1CON0_PSS_POSITION                    equ 0002h
DAC1CON0_PSS_SIZE                        equ 0002h
DAC1CON0_PSS_LENGTH                      equ 0002h
DAC1CON0_PSS_MASK                        equ 000Ch
DAC1CON0_OE1_POSN                        equ 0005h
DAC1CON0_OE1_POSITION                    equ 0005h
DAC1CON0_OE1_SIZE                        equ 0001h
DAC1CON0_OE1_LENGTH                      equ 0001h
DAC1CON0_OE1_MASK                        equ 0020h
DAC1CON0_FM_POSN                         equ 0006h
DAC1CON0_FM_POSITION                     equ 0006h
DAC1CON0_FM_SIZE                         equ 0001h
DAC1CON0_FM_LENGTH                       equ 0001h
DAC1CON0_FM_MASK                         equ 0040h
DAC1CON0_EN_POSN                         equ 0007h
DAC1CON0_EN_POSITION                     equ 0007h
DAC1CON0_EN_SIZE                         equ 0001h
DAC1CON0_EN_LENGTH                       equ 0001h
DAC1CON0_EN_MASK                         equ 0080h
DAC1CON0_NSS0_POSN                       equ 0000h
DAC1CON0_NSS0_POSITION                   equ 0000h
DAC1CON0_NSS0_SIZE                       equ 0001h
DAC1CON0_NSS0_LENGTH                     equ 0001h
DAC1CON0_NSS0_MASK                       equ 0001h
DAC1CON0_PSS0_POSN                       equ 0002h
DAC1CON0_PSS0_POSITION                   equ 0002h
DAC1CON0_PSS0_SIZE                       equ 0001h
DAC1CON0_PSS0_LENGTH                     equ 0001h
DAC1CON0_PSS0_MASK                       equ 0004h
DAC1CON0_PSS1_POSN                       equ 0003h
DAC1CON0_PSS1_POSITION                   equ 0003h
DAC1CON0_PSS1_SIZE                       equ 0001h
DAC1CON0_PSS1_LENGTH                     equ 0001h
DAC1CON0_PSS1_MASK                       equ 0008h
DAC1CON0_OE_POSN                         equ 0005h
DAC1CON0_OE_POSITION                     equ 0005h
DAC1CON0_OE_SIZE                         equ 0001h
DAC1CON0_OE_LENGTH                       equ 0001h
DAC1CON0_OE_MASK                         equ 0020h
DAC1CON0_DACNSS_POSN                     equ 0000h
DAC1CON0_DACNSS_POSITION                 equ 0000h
DAC1CON0_DACNSS_SIZE                     equ 0002h
DAC1CON0_DACNSS_LENGTH                   equ 0002h
DAC1CON0_DACNSS_MASK                     equ 0003h
DAC1CON0_DACPSS_POSN                     equ 0002h
DAC1CON0_DACPSS_POSITION                 equ 0002h
DAC1CON0_DACPSS_SIZE                     equ 0002h
DAC1CON0_DACPSS_LENGTH                   equ 0002h
DAC1CON0_DACPSS_MASK                     equ 000Ch
DAC1CON0_DACOE1_POSN                     equ 0005h
DAC1CON0_DACOE1_POSITION                 equ 0005h
DAC1CON0_DACOE1_SIZE                     equ 0001h
DAC1CON0_DACOE1_LENGTH                   equ 0001h
DAC1CON0_DACOE1_MASK                     equ 0020h
DAC1CON0_DACFM_POSN                      equ 0006h
DAC1CON0_DACFM_POSITION                  equ 0006h
DAC1CON0_DACFM_SIZE                      equ 0001h
DAC1CON0_DACFM_LENGTH                    equ 0001h
DAC1CON0_DACFM_MASK                      equ 0040h
DAC1CON0_DACEN_POSN                      equ 0007h
DAC1CON0_DACEN_POSITION                  equ 0007h
DAC1CON0_DACEN_SIZE                      equ 0001h
DAC1CON0_DACEN_LENGTH                    equ 0001h
DAC1CON0_DACEN_MASK                      equ 0080h
DAC1CON0_DACNSS0_POSN                    equ 0000h
DAC1CON0_DACNSS0_POSITION                equ 0000h
DAC1CON0_DACNSS0_SIZE                    equ 0001h
DAC1CON0_DACNSS0_LENGTH                  equ 0001h
DAC1CON0_DACNSS0_MASK                    equ 0001h
DAC1CON0_DACPSS0_POSN                    equ 0002h
DAC1CON0_DACPSS0_POSITION                equ 0002h
DAC1CON0_DACPSS0_SIZE                    equ 0001h
DAC1CON0_DACPSS0_LENGTH                  equ 0001h
DAC1CON0_DACPSS0_MASK                    equ 0004h
DAC1CON0_DACPSS1_POSN                    equ 0003h
DAC1CON0_DACPSS1_POSITION                equ 0003h
DAC1CON0_DACPSS1_SIZE                    equ 0001h
DAC1CON0_DACPSS1_LENGTH                  equ 0001h
DAC1CON0_DACPSS1_MASK                    equ 0008h
DAC1CON0_DACOE_POSN                      equ 0005h
DAC1CON0_DACOE_POSITION                  equ 0005h
DAC1CON0_DACOE_SIZE                      equ 0001h
DAC1CON0_DACOE_LENGTH                    equ 0001h
DAC1CON0_DACOE_MASK                      equ 0020h
DAC1CON0_DAC1NSS_POSN                    equ 0000h
DAC1CON0_DAC1NSS_POSITION                equ 0000h
DAC1CON0_DAC1NSS_SIZE                    equ 0002h
DAC1CON0_DAC1NSS_LENGTH                  equ 0002h
DAC1CON0_DAC1NSS_MASK                    equ 0003h
DAC1CON0_DAC1PSS_POSN                    equ 0002h
DAC1CON0_DAC1PSS_POSITION                equ 0002h
DAC1CON0_DAC1PSS_SIZE                    equ 0002h
DAC1CON0_DAC1PSS_LENGTH                  equ 0002h
DAC1CON0_DAC1PSS_MASK                    equ 000Ch
DAC1CON0_DAC1OE1_POSN                    equ 0005h
DAC1CON0_DAC1OE1_POSITION                equ 0005h
DAC1CON0_DAC1OE1_SIZE                    equ 0001h
DAC1CON0_DAC1OE1_LENGTH                  equ 0001h
DAC1CON0_DAC1OE1_MASK                    equ 0020h
DAC1CON0_DAC1FM_POSN                     equ 0006h
DAC1CON0_DAC1FM_POSITION                 equ 0006h
DAC1CON0_DAC1FM_SIZE                     equ 0001h
DAC1CON0_DAC1FM_LENGTH                   equ 0001h
DAC1CON0_DAC1FM_MASK                     equ 0040h
DAC1CON0_DAC1EN_POSN                     equ 0007h
DAC1CON0_DAC1EN_POSITION                 equ 0007h
DAC1CON0_DAC1EN_SIZE                     equ 0001h
DAC1CON0_DAC1EN_LENGTH                   equ 0001h
DAC1CON0_DAC1EN_MASK                     equ 0080h
DAC1CON0_DAC1NSS0_POSN                   equ 0000h
DAC1CON0_DAC1NSS0_POSITION               equ 0000h
DAC1CON0_DAC1NSS0_SIZE                   equ 0001h
DAC1CON0_DAC1NSS0_LENGTH                 equ 0001h
DAC1CON0_DAC1NSS0_MASK                   equ 0001h
DAC1CON0_DAC1PSS0_POSN                   equ 0002h
DAC1CON0_DAC1PSS0_POSITION               equ 0002h
DAC1CON0_DAC1PSS0_SIZE                   equ 0001h
DAC1CON0_DAC1PSS0_LENGTH                 equ 0001h
DAC1CON0_DAC1PSS0_MASK                   equ 0004h
DAC1CON0_DAC1PSS1_POSN                   equ 0003h
DAC1CON0_DAC1PSS1_POSITION               equ 0003h
DAC1CON0_DAC1PSS1_SIZE                   equ 0001h
DAC1CON0_DAC1PSS1_LENGTH                 equ 0001h
DAC1CON0_DAC1PSS1_MASK                   equ 0008h

// Register: DAC1REFL
#define DAC1REFL DAC1REFL
DAC1REFL                                 equ 0592h
// bitfield definitions
DAC1REFL_REF0_POSN                       equ 0000h
DAC1REFL_REF0_POSITION                   equ 0000h
DAC1REFL_REF0_SIZE                       equ 0001h
DAC1REFL_REF0_LENGTH                     equ 0001h
DAC1REFL_REF0_MASK                       equ 0001h
DAC1REFL_REF1_POSN                       equ 0001h
DAC1REFL_REF1_POSITION                   equ 0001h
DAC1REFL_REF1_SIZE                       equ 0001h
DAC1REFL_REF1_LENGTH                     equ 0001h
DAC1REFL_REF1_MASK                       equ 0002h
DAC1REFL_REF2_POSN                       equ 0002h
DAC1REFL_REF2_POSITION                   equ 0002h
DAC1REFL_REF2_SIZE                       equ 0001h
DAC1REFL_REF2_LENGTH                     equ 0001h
DAC1REFL_REF2_MASK                       equ 0004h
DAC1REFL_REF3_POSN                       equ 0003h
DAC1REFL_REF3_POSITION                   equ 0003h
DAC1REFL_REF3_SIZE                       equ 0001h
DAC1REFL_REF3_LENGTH                     equ 0001h
DAC1REFL_REF3_MASK                       equ 0008h
DAC1REFL_REF4_POSN                       equ 0004h
DAC1REFL_REF4_POSITION                   equ 0004h
DAC1REFL_REF4_SIZE                       equ 0001h
DAC1REFL_REF4_LENGTH                     equ 0001h
DAC1REFL_REF4_MASK                       equ 0010h
DAC1REFL_REF5_POSN                       equ 0005h
DAC1REFL_REF5_POSITION                   equ 0005h
DAC1REFL_REF5_SIZE                       equ 0001h
DAC1REFL_REF5_LENGTH                     equ 0001h
DAC1REFL_REF5_MASK                       equ 0020h
DAC1REFL_REF6_POSN                       equ 0006h
DAC1REFL_REF6_POSITION                   equ 0006h
DAC1REFL_REF6_SIZE                       equ 0001h
DAC1REFL_REF6_LENGTH                     equ 0001h
DAC1REFL_REF6_MASK                       equ 0040h
DAC1REFL_REF7_POSN                       equ 0007h
DAC1REFL_REF7_POSITION                   equ 0007h
DAC1REFL_REF7_SIZE                       equ 0001h
DAC1REFL_REF7_LENGTH                     equ 0001h
DAC1REFL_REF7_MASK                       equ 0080h
DAC1REFL_DAC1REF0_POSN                   equ 0000h
DAC1REFL_DAC1REF0_POSITION               equ 0000h
DAC1REFL_DAC1REF0_SIZE                   equ 0001h
DAC1REFL_DAC1REF0_LENGTH                 equ 0001h
DAC1REFL_DAC1REF0_MASK                   equ 0001h
DAC1REFL_DAC1REF1_POSN                   equ 0001h
DAC1REFL_DAC1REF1_POSITION               equ 0001h
DAC1REFL_DAC1REF1_SIZE                   equ 0001h
DAC1REFL_DAC1REF1_LENGTH                 equ 0001h
DAC1REFL_DAC1REF1_MASK                   equ 0002h
DAC1REFL_DAC1REF2_POSN                   equ 0002h
DAC1REFL_DAC1REF2_POSITION               equ 0002h
DAC1REFL_DAC1REF2_SIZE                   equ 0001h
DAC1REFL_DAC1REF2_LENGTH                 equ 0001h
DAC1REFL_DAC1REF2_MASK                   equ 0004h
DAC1REFL_DAC1REF3_POSN                   equ 0003h
DAC1REFL_DAC1REF3_POSITION               equ 0003h
DAC1REFL_DAC1REF3_SIZE                   equ 0001h
DAC1REFL_DAC1REF3_LENGTH                 equ 0001h
DAC1REFL_DAC1REF3_MASK                   equ 0008h
DAC1REFL_DAC1REF4_POSN                   equ 0004h
DAC1REFL_DAC1REF4_POSITION               equ 0004h
DAC1REFL_DAC1REF4_SIZE                   equ 0001h
DAC1REFL_DAC1REF4_LENGTH                 equ 0001h
DAC1REFL_DAC1REF4_MASK                   equ 0010h
DAC1REFL_DAC1REF5_POSN                   equ 0005h
DAC1REFL_DAC1REF5_POSITION               equ 0005h
DAC1REFL_DAC1REF5_SIZE                   equ 0001h
DAC1REFL_DAC1REF5_LENGTH                 equ 0001h
DAC1REFL_DAC1REF5_MASK                   equ 0020h
DAC1REFL_DAC1REF6_POSN                   equ 0006h
DAC1REFL_DAC1REF6_POSITION               equ 0006h
DAC1REFL_DAC1REF6_SIZE                   equ 0001h
DAC1REFL_DAC1REF6_LENGTH                 equ 0001h
DAC1REFL_DAC1REF6_MASK                   equ 0040h
DAC1REFL_DAC1REF7_POSN                   equ 0007h
DAC1REFL_DAC1REF7_POSITION               equ 0007h
DAC1REFL_DAC1REF7_SIZE                   equ 0001h
DAC1REFL_DAC1REF7_LENGTH                 equ 0001h
DAC1REFL_DAC1REF7_MASK                   equ 0080h
DAC1REFL_R0_POSN                         equ 0000h
DAC1REFL_R0_POSITION                     equ 0000h
DAC1REFL_R0_SIZE                         equ 0001h
DAC1REFL_R0_LENGTH                       equ 0001h
DAC1REFL_R0_MASK                         equ 0001h
DAC1REFL_R1_POSN                         equ 0001h
DAC1REFL_R1_POSITION                     equ 0001h
DAC1REFL_R1_SIZE                         equ 0001h
DAC1REFL_R1_LENGTH                       equ 0001h
DAC1REFL_R1_MASK                         equ 0002h
DAC1REFL_R2_POSN                         equ 0002h
DAC1REFL_R2_POSITION                     equ 0002h
DAC1REFL_R2_SIZE                         equ 0001h
DAC1REFL_R2_LENGTH                       equ 0001h
DAC1REFL_R2_MASK                         equ 0004h
DAC1REFL_R3_POSN                         equ 0003h
DAC1REFL_R3_POSITION                     equ 0003h
DAC1REFL_R3_SIZE                         equ 0001h
DAC1REFL_R3_LENGTH                       equ 0001h
DAC1REFL_R3_MASK                         equ 0008h
DAC1REFL_R4_POSN                         equ 0004h
DAC1REFL_R4_POSITION                     equ 0004h
DAC1REFL_R4_SIZE                         equ 0001h
DAC1REFL_R4_LENGTH                       equ 0001h
DAC1REFL_R4_MASK                         equ 0010h
DAC1REFL_R5_POSN                         equ 0005h
DAC1REFL_R5_POSITION                     equ 0005h
DAC1REFL_R5_SIZE                         equ 0001h
DAC1REFL_R5_LENGTH                       equ 0001h
DAC1REFL_R5_MASK                         equ 0020h
DAC1REFL_R6_POSN                         equ 0006h
DAC1REFL_R6_POSITION                     equ 0006h
DAC1REFL_R6_SIZE                         equ 0001h
DAC1REFL_R6_LENGTH                       equ 0001h
DAC1REFL_R6_MASK                         equ 0040h
DAC1REFL_R7_POSN                         equ 0007h
DAC1REFL_R7_POSITION                     equ 0007h
DAC1REFL_R7_SIZE                         equ 0001h
DAC1REFL_R7_LENGTH                       equ 0001h
DAC1REFL_R7_MASK                         equ 0080h
DAC1REFL_DAC1R0_POSN                     equ 0000h
DAC1REFL_DAC1R0_POSITION                 equ 0000h
DAC1REFL_DAC1R0_SIZE                     equ 0001h
DAC1REFL_DAC1R0_LENGTH                   equ 0001h
DAC1REFL_DAC1R0_MASK                     equ 0001h
DAC1REFL_DAC1R1_POSN                     equ 0001h
DAC1REFL_DAC1R1_POSITION                 equ 0001h
DAC1REFL_DAC1R1_SIZE                     equ 0001h
DAC1REFL_DAC1R1_LENGTH                   equ 0001h
DAC1REFL_DAC1R1_MASK                     equ 0002h
DAC1REFL_DAC1R2_POSN                     equ 0002h
DAC1REFL_DAC1R2_POSITION                 equ 0002h
DAC1REFL_DAC1R2_SIZE                     equ 0001h
DAC1REFL_DAC1R2_LENGTH                   equ 0001h
DAC1REFL_DAC1R2_MASK                     equ 0004h
DAC1REFL_DAC1R3_POSN                     equ 0003h
DAC1REFL_DAC1R3_POSITION                 equ 0003h
DAC1REFL_DAC1R3_SIZE                     equ 0001h
DAC1REFL_DAC1R3_LENGTH                   equ 0001h
DAC1REFL_DAC1R3_MASK                     equ 0008h
DAC1REFL_DAC1R4_POSN                     equ 0004h
DAC1REFL_DAC1R4_POSITION                 equ 0004h
DAC1REFL_DAC1R4_SIZE                     equ 0001h
DAC1REFL_DAC1R4_LENGTH                   equ 0001h
DAC1REFL_DAC1R4_MASK                     equ 0010h
DAC1REFL_DAC1R5_POSN                     equ 0005h
DAC1REFL_DAC1R5_POSITION                 equ 0005h
DAC1REFL_DAC1R5_SIZE                     equ 0001h
DAC1REFL_DAC1R5_LENGTH                   equ 0001h
DAC1REFL_DAC1R5_MASK                     equ 0020h
DAC1REFL_DAC1R6_POSN                     equ 0006h
DAC1REFL_DAC1R6_POSITION                 equ 0006h
DAC1REFL_DAC1R6_SIZE                     equ 0001h
DAC1REFL_DAC1R6_LENGTH                   equ 0001h
DAC1REFL_DAC1R6_MASK                     equ 0040h
DAC1REFL_DAC1R7_POSN                     equ 0007h
DAC1REFL_DAC1R7_POSITION                 equ 0007h
DAC1REFL_DAC1R7_SIZE                     equ 0001h
DAC1REFL_DAC1R7_LENGTH                   equ 0001h
DAC1REFL_DAC1R7_MASK                     equ 0080h

// Register: DAC1REFH
#define DAC1REFH DAC1REFH
DAC1REFH                                 equ 0593h
// bitfield definitions
DAC1REFH_REF8_POSN                       equ 0000h
DAC1REFH_REF8_POSITION                   equ 0000h
DAC1REFH_REF8_SIZE                       equ 0001h
DAC1REFH_REF8_LENGTH                     equ 0001h
DAC1REFH_REF8_MASK                       equ 0001h
DAC1REFH_REF9_POSN                       equ 0001h
DAC1REFH_REF9_POSITION                   equ 0001h
DAC1REFH_REF9_SIZE                       equ 0001h
DAC1REFH_REF9_LENGTH                     equ 0001h
DAC1REFH_REF9_MASK                       equ 0002h
DAC1REFH_REF10_POSN                      equ 0002h
DAC1REFH_REF10_POSITION                  equ 0002h
DAC1REFH_REF10_SIZE                      equ 0001h
DAC1REFH_REF10_LENGTH                    equ 0001h
DAC1REFH_REF10_MASK                      equ 0004h
DAC1REFH_REF11_POSN                      equ 0003h
DAC1REFH_REF11_POSITION                  equ 0003h
DAC1REFH_REF11_SIZE                      equ 0001h
DAC1REFH_REF11_LENGTH                    equ 0001h
DAC1REFH_REF11_MASK                      equ 0008h
DAC1REFH_REF12_POSN                      equ 0004h
DAC1REFH_REF12_POSITION                  equ 0004h
DAC1REFH_REF12_SIZE                      equ 0001h
DAC1REFH_REF12_LENGTH                    equ 0001h
DAC1REFH_REF12_MASK                      equ 0010h
DAC1REFH_REF13_POSN                      equ 0005h
DAC1REFH_REF13_POSITION                  equ 0005h
DAC1REFH_REF13_SIZE                      equ 0001h
DAC1REFH_REF13_LENGTH                    equ 0001h
DAC1REFH_REF13_MASK                      equ 0020h
DAC1REFH_REF14_POSN                      equ 0006h
DAC1REFH_REF14_POSITION                  equ 0006h
DAC1REFH_REF14_SIZE                      equ 0001h
DAC1REFH_REF14_LENGTH                    equ 0001h
DAC1REFH_REF14_MASK                      equ 0040h
DAC1REFH_REF15_POSN                      equ 0007h
DAC1REFH_REF15_POSITION                  equ 0007h
DAC1REFH_REF15_SIZE                      equ 0001h
DAC1REFH_REF15_LENGTH                    equ 0001h
DAC1REFH_REF15_MASK                      equ 0080h
DAC1REFH_DAC1REF8_POSN                   equ 0000h
DAC1REFH_DAC1REF8_POSITION               equ 0000h
DAC1REFH_DAC1REF8_SIZE                   equ 0001h
DAC1REFH_DAC1REF8_LENGTH                 equ 0001h
DAC1REFH_DAC1REF8_MASK                   equ 0001h
DAC1REFH_DAC1REF9_POSN                   equ 0001h
DAC1REFH_DAC1REF9_POSITION               equ 0001h
DAC1REFH_DAC1REF9_SIZE                   equ 0001h
DAC1REFH_DAC1REF9_LENGTH                 equ 0001h
DAC1REFH_DAC1REF9_MASK                   equ 0002h
DAC1REFH_DAC1REF10_POSN                  equ 0002h
DAC1REFH_DAC1REF10_POSITION              equ 0002h
DAC1REFH_DAC1REF10_SIZE                  equ 0001h
DAC1REFH_DAC1REF10_LENGTH                equ 0001h
DAC1REFH_DAC1REF10_MASK                  equ 0004h
DAC1REFH_DAC1REF11_POSN                  equ 0003h
DAC1REFH_DAC1REF11_POSITION              equ 0003h
DAC1REFH_DAC1REF11_SIZE                  equ 0001h
DAC1REFH_DAC1REF11_LENGTH                equ 0001h
DAC1REFH_DAC1REF11_MASK                  equ 0008h
DAC1REFH_DAC1REF12_POSN                  equ 0004h
DAC1REFH_DAC1REF12_POSITION              equ 0004h
DAC1REFH_DAC1REF12_SIZE                  equ 0001h
DAC1REFH_DAC1REF12_LENGTH                equ 0001h
DAC1REFH_DAC1REF12_MASK                  equ 0010h
DAC1REFH_DAC1REF13_POSN                  equ 0005h
DAC1REFH_DAC1REF13_POSITION              equ 0005h
DAC1REFH_DAC1REF13_SIZE                  equ 0001h
DAC1REFH_DAC1REF13_LENGTH                equ 0001h
DAC1REFH_DAC1REF13_MASK                  equ 0020h
DAC1REFH_DAC1REF14_POSN                  equ 0006h
DAC1REFH_DAC1REF14_POSITION              equ 0006h
DAC1REFH_DAC1REF14_SIZE                  equ 0001h
DAC1REFH_DAC1REF14_LENGTH                equ 0001h
DAC1REFH_DAC1REF14_MASK                  equ 0040h
DAC1REFH_DAC1REF15_POSN                  equ 0007h
DAC1REFH_DAC1REF15_POSITION              equ 0007h
DAC1REFH_DAC1REF15_SIZE                  equ 0001h
DAC1REFH_DAC1REF15_LENGTH                equ 0001h
DAC1REFH_DAC1REF15_MASK                  equ 0080h
DAC1REFH_R8_POSN                         equ 0000h
DAC1REFH_R8_POSITION                     equ 0000h
DAC1REFH_R8_SIZE                         equ 0001h
DAC1REFH_R8_LENGTH                       equ 0001h
DAC1REFH_R8_MASK                         equ 0001h
DAC1REFH_R9_POSN                         equ 0001h
DAC1REFH_R9_POSITION                     equ 0001h
DAC1REFH_R9_SIZE                         equ 0001h
DAC1REFH_R9_LENGTH                       equ 0001h
DAC1REFH_R9_MASK                         equ 0002h
DAC1REFH_R10_POSN                        equ 0002h
DAC1REFH_R10_POSITION                    equ 0002h
DAC1REFH_R10_SIZE                        equ 0001h
DAC1REFH_R10_LENGTH                      equ 0001h
DAC1REFH_R10_MASK                        equ 0004h
DAC1REFH_R11_POSN                        equ 0003h
DAC1REFH_R11_POSITION                    equ 0003h
DAC1REFH_R11_SIZE                        equ 0001h
DAC1REFH_R11_LENGTH                      equ 0001h
DAC1REFH_R11_MASK                        equ 0008h
DAC1REFH_R12_POSN                        equ 0004h
DAC1REFH_R12_POSITION                    equ 0004h
DAC1REFH_R12_SIZE                        equ 0001h
DAC1REFH_R12_LENGTH                      equ 0001h
DAC1REFH_R12_MASK                        equ 0010h
DAC1REFH_R13_POSN                        equ 0005h
DAC1REFH_R13_POSITION                    equ 0005h
DAC1REFH_R13_SIZE                        equ 0001h
DAC1REFH_R13_LENGTH                      equ 0001h
DAC1REFH_R13_MASK                        equ 0020h
DAC1REFH_R14_POSN                        equ 0006h
DAC1REFH_R14_POSITION                    equ 0006h
DAC1REFH_R14_SIZE                        equ 0001h
DAC1REFH_R14_LENGTH                      equ 0001h
DAC1REFH_R14_MASK                        equ 0040h
DAC1REFH_R15_POSN                        equ 0007h
DAC1REFH_R15_POSITION                    equ 0007h
DAC1REFH_R15_SIZE                        equ 0001h
DAC1REFH_R15_LENGTH                      equ 0001h
DAC1REFH_R15_MASK                        equ 0080h
DAC1REFH_DAC1R8_POSN                     equ 0000h
DAC1REFH_DAC1R8_POSITION                 equ 0000h
DAC1REFH_DAC1R8_SIZE                     equ 0001h
DAC1REFH_DAC1R8_LENGTH                   equ 0001h
DAC1REFH_DAC1R8_MASK                     equ 0001h
DAC1REFH_DAC1R9_POSN                     equ 0001h
DAC1REFH_DAC1R9_POSITION                 equ 0001h
DAC1REFH_DAC1R9_SIZE                     equ 0001h
DAC1REFH_DAC1R9_LENGTH                   equ 0001h
DAC1REFH_DAC1R9_MASK                     equ 0002h
DAC1REFH_DAC1R10_POSN                    equ 0002h
DAC1REFH_DAC1R10_POSITION                equ 0002h
DAC1REFH_DAC1R10_SIZE                    equ 0001h
DAC1REFH_DAC1R10_LENGTH                  equ 0001h
DAC1REFH_DAC1R10_MASK                    equ 0004h
DAC1REFH_DAC1R11_POSN                    equ 0003h
DAC1REFH_DAC1R11_POSITION                equ 0003h
DAC1REFH_DAC1R11_SIZE                    equ 0001h
DAC1REFH_DAC1R11_LENGTH                  equ 0001h
DAC1REFH_DAC1R11_MASK                    equ 0008h
DAC1REFH_DAC1R12_POSN                    equ 0004h
DAC1REFH_DAC1R12_POSITION                equ 0004h
DAC1REFH_DAC1R12_SIZE                    equ 0001h
DAC1REFH_DAC1R12_LENGTH                  equ 0001h
DAC1REFH_DAC1R12_MASK                    equ 0010h
DAC1REFH_DAC1R13_POSN                    equ 0005h
DAC1REFH_DAC1R13_POSITION                equ 0005h
DAC1REFH_DAC1R13_SIZE                    equ 0001h
DAC1REFH_DAC1R13_LENGTH                  equ 0001h
DAC1REFH_DAC1R13_MASK                    equ 0020h
DAC1REFH_DAC1R14_POSN                    equ 0006h
DAC1REFH_DAC1R14_POSITION                equ 0006h
DAC1REFH_DAC1R14_SIZE                    equ 0001h
DAC1REFH_DAC1R14_LENGTH                  equ 0001h
DAC1REFH_DAC1R14_MASK                    equ 0040h
DAC1REFH_DAC1R15_POSN                    equ 0007h
DAC1REFH_DAC1R15_POSITION                equ 0007h
DAC1REFH_DAC1R15_SIZE                    equ 0001h
DAC1REFH_DAC1R15_LENGTH                  equ 0001h
DAC1REFH_DAC1R15_MASK                    equ 0080h

// Register: DAC2CON0
#define DAC2CON0 DAC2CON0
DAC2CON0                                 equ 0594h
// bitfield definitions
DAC2CON0_NSS_POSN                        equ 0000h
DAC2CON0_NSS_POSITION                    equ 0000h
DAC2CON0_NSS_SIZE                        equ 0002h
DAC2CON0_NSS_LENGTH                      equ 0002h
DAC2CON0_NSS_MASK                        equ 0003h
DAC2CON0_PSS_POSN                        equ 0002h
DAC2CON0_PSS_POSITION                    equ 0002h
DAC2CON0_PSS_SIZE                        equ 0002h
DAC2CON0_PSS_LENGTH                      equ 0002h
DAC2CON0_PSS_MASK                        equ 000Ch
DAC2CON0_OE1_POSN                        equ 0005h
DAC2CON0_OE1_POSITION                    equ 0005h
DAC2CON0_OE1_SIZE                        equ 0001h
DAC2CON0_OE1_LENGTH                      equ 0001h
DAC2CON0_OE1_MASK                        equ 0020h
DAC2CON0_FM_POSN                         equ 0006h
DAC2CON0_FM_POSITION                     equ 0006h
DAC2CON0_FM_SIZE                         equ 0001h
DAC2CON0_FM_LENGTH                       equ 0001h
DAC2CON0_FM_MASK                         equ 0040h
DAC2CON0_EN_POSN                         equ 0007h
DAC2CON0_EN_POSITION                     equ 0007h
DAC2CON0_EN_SIZE                         equ 0001h
DAC2CON0_EN_LENGTH                       equ 0001h
DAC2CON0_EN_MASK                         equ 0080h
DAC2CON0_NSS0_POSN                       equ 0000h
DAC2CON0_NSS0_POSITION                   equ 0000h
DAC2CON0_NSS0_SIZE                       equ 0001h
DAC2CON0_NSS0_LENGTH                     equ 0001h
DAC2CON0_NSS0_MASK                       equ 0001h
DAC2CON0_PSS0_POSN                       equ 0002h
DAC2CON0_PSS0_POSITION                   equ 0002h
DAC2CON0_PSS0_SIZE                       equ 0001h
DAC2CON0_PSS0_LENGTH                     equ 0001h
DAC2CON0_PSS0_MASK                       equ 0004h
DAC2CON0_PSS1_POSN                       equ 0003h
DAC2CON0_PSS1_POSITION                   equ 0003h
DAC2CON0_PSS1_SIZE                       equ 0001h
DAC2CON0_PSS1_LENGTH                     equ 0001h
DAC2CON0_PSS1_MASK                       equ 0008h
DAC2CON0_OE_POSN                         equ 0005h
DAC2CON0_OE_POSITION                     equ 0005h
DAC2CON0_OE_SIZE                         equ 0001h
DAC2CON0_OE_LENGTH                       equ 0001h
DAC2CON0_OE_MASK                         equ 0020h
DAC2CON0_DACNSS_POSN                     equ 0000h
DAC2CON0_DACNSS_POSITION                 equ 0000h
DAC2CON0_DACNSS_SIZE                     equ 0002h
DAC2CON0_DACNSS_LENGTH                   equ 0002h
DAC2CON0_DACNSS_MASK                     equ 0003h
DAC2CON0_DACPSS_POSN                     equ 0002h
DAC2CON0_DACPSS_POSITION                 equ 0002h
DAC2CON0_DACPSS_SIZE                     equ 0002h
DAC2CON0_DACPSS_LENGTH                   equ 0002h
DAC2CON0_DACPSS_MASK                     equ 000Ch
DAC2CON0_DACOE1_POSN                     equ 0005h
DAC2CON0_DACOE1_POSITION                 equ 0005h
DAC2CON0_DACOE1_SIZE                     equ 0001h
DAC2CON0_DACOE1_LENGTH                   equ 0001h
DAC2CON0_DACOE1_MASK                     equ 0020h
DAC2CON0_DACFM_POSN                      equ 0006h
DAC2CON0_DACFM_POSITION                  equ 0006h
DAC2CON0_DACFM_SIZE                      equ 0001h
DAC2CON0_DACFM_LENGTH                    equ 0001h
DAC2CON0_DACFM_MASK                      equ 0040h
DAC2CON0_DACEN_POSN                      equ 0007h
DAC2CON0_DACEN_POSITION                  equ 0007h
DAC2CON0_DACEN_SIZE                      equ 0001h
DAC2CON0_DACEN_LENGTH                    equ 0001h
DAC2CON0_DACEN_MASK                      equ 0080h
DAC2CON0_DACNSS0_POSN                    equ 0000h
DAC2CON0_DACNSS0_POSITION                equ 0000h
DAC2CON0_DACNSS0_SIZE                    equ 0001h
DAC2CON0_DACNSS0_LENGTH                  equ 0001h
DAC2CON0_DACNSS0_MASK                    equ 0001h
DAC2CON0_DACPSS0_POSN                    equ 0002h
DAC2CON0_DACPSS0_POSITION                equ 0002h
DAC2CON0_DACPSS0_SIZE                    equ 0001h
DAC2CON0_DACPSS0_LENGTH                  equ 0001h
DAC2CON0_DACPSS0_MASK                    equ 0004h
DAC2CON0_DACPSS1_POSN                    equ 0003h
DAC2CON0_DACPSS1_POSITION                equ 0003h
DAC2CON0_DACPSS1_SIZE                    equ 0001h
DAC2CON0_DACPSS1_LENGTH                  equ 0001h
DAC2CON0_DACPSS1_MASK                    equ 0008h
DAC2CON0_DACOE_POSN                      equ 0005h
DAC2CON0_DACOE_POSITION                  equ 0005h
DAC2CON0_DACOE_SIZE                      equ 0001h
DAC2CON0_DACOE_LENGTH                    equ 0001h
DAC2CON0_DACOE_MASK                      equ 0020h
DAC2CON0_DAC2NSS_POSN                    equ 0000h
DAC2CON0_DAC2NSS_POSITION                equ 0000h
DAC2CON0_DAC2NSS_SIZE                    equ 0002h
DAC2CON0_DAC2NSS_LENGTH                  equ 0002h
DAC2CON0_DAC2NSS_MASK                    equ 0003h
DAC2CON0_DAC2PSS_POSN                    equ 0002h
DAC2CON0_DAC2PSS_POSITION                equ 0002h
DAC2CON0_DAC2PSS_SIZE                    equ 0002h
DAC2CON0_DAC2PSS_LENGTH                  equ 0002h
DAC2CON0_DAC2PSS_MASK                    equ 000Ch
DAC2CON0_DAC2OE1_POSN                    equ 0005h
DAC2CON0_DAC2OE1_POSITION                equ 0005h
DAC2CON0_DAC2OE1_SIZE                    equ 0001h
DAC2CON0_DAC2OE1_LENGTH                  equ 0001h
DAC2CON0_DAC2OE1_MASK                    equ 0020h
DAC2CON0_DAC2FM_POSN                     equ 0006h
DAC2CON0_DAC2FM_POSITION                 equ 0006h
DAC2CON0_DAC2FM_SIZE                     equ 0001h
DAC2CON0_DAC2FM_LENGTH                   equ 0001h
DAC2CON0_DAC2FM_MASK                     equ 0040h
DAC2CON0_DAC2EN_POSN                     equ 0007h
DAC2CON0_DAC2EN_POSITION                 equ 0007h
DAC2CON0_DAC2EN_SIZE                     equ 0001h
DAC2CON0_DAC2EN_LENGTH                   equ 0001h
DAC2CON0_DAC2EN_MASK                     equ 0080h
DAC2CON0_DAC2NSS0_POSN                   equ 0000h
DAC2CON0_DAC2NSS0_POSITION               equ 0000h
DAC2CON0_DAC2NSS0_SIZE                   equ 0001h
DAC2CON0_DAC2NSS0_LENGTH                 equ 0001h
DAC2CON0_DAC2NSS0_MASK                   equ 0001h
DAC2CON0_DAC2PSS0_POSN                   equ 0002h
DAC2CON0_DAC2PSS0_POSITION               equ 0002h
DAC2CON0_DAC2PSS0_SIZE                   equ 0001h
DAC2CON0_DAC2PSS0_LENGTH                 equ 0001h
DAC2CON0_DAC2PSS0_MASK                   equ 0004h
DAC2CON0_DAC2PSS1_POSN                   equ 0003h
DAC2CON0_DAC2PSS1_POSITION               equ 0003h
DAC2CON0_DAC2PSS1_SIZE                   equ 0001h
DAC2CON0_DAC2PSS1_LENGTH                 equ 0001h
DAC2CON0_DAC2PSS1_MASK                   equ 0008h

// Register: DAC2REFL
#define DAC2REFL DAC2REFL
DAC2REFL                                 equ 0595h
// bitfield definitions
DAC2REFL_REF0_POSN                       equ 0000h
DAC2REFL_REF0_POSITION                   equ 0000h
DAC2REFL_REF0_SIZE                       equ 0001h
DAC2REFL_REF0_LENGTH                     equ 0001h
DAC2REFL_REF0_MASK                       equ 0001h
DAC2REFL_REF1_POSN                       equ 0001h
DAC2REFL_REF1_POSITION                   equ 0001h
DAC2REFL_REF1_SIZE                       equ 0001h
DAC2REFL_REF1_LENGTH                     equ 0001h
DAC2REFL_REF1_MASK                       equ 0002h
DAC2REFL_REF2_POSN                       equ 0002h
DAC2REFL_REF2_POSITION                   equ 0002h
DAC2REFL_REF2_SIZE                       equ 0001h
DAC2REFL_REF2_LENGTH                     equ 0001h
DAC2REFL_REF2_MASK                       equ 0004h
DAC2REFL_REF3_POSN                       equ 0003h
DAC2REFL_REF3_POSITION                   equ 0003h
DAC2REFL_REF3_SIZE                       equ 0001h
DAC2REFL_REF3_LENGTH                     equ 0001h
DAC2REFL_REF3_MASK                       equ 0008h
DAC2REFL_REF4_POSN                       equ 0004h
DAC2REFL_REF4_POSITION                   equ 0004h
DAC2REFL_REF4_SIZE                       equ 0001h
DAC2REFL_REF4_LENGTH                     equ 0001h
DAC2REFL_REF4_MASK                       equ 0010h
DAC2REFL_REF5_POSN                       equ 0005h
DAC2REFL_REF5_POSITION                   equ 0005h
DAC2REFL_REF5_SIZE                       equ 0001h
DAC2REFL_REF5_LENGTH                     equ 0001h
DAC2REFL_REF5_MASK                       equ 0020h
DAC2REFL_REF6_POSN                       equ 0006h
DAC2REFL_REF6_POSITION                   equ 0006h
DAC2REFL_REF6_SIZE                       equ 0001h
DAC2REFL_REF6_LENGTH                     equ 0001h
DAC2REFL_REF6_MASK                       equ 0040h
DAC2REFL_REF7_POSN                       equ 0007h
DAC2REFL_REF7_POSITION                   equ 0007h
DAC2REFL_REF7_SIZE                       equ 0001h
DAC2REFL_REF7_LENGTH                     equ 0001h
DAC2REFL_REF7_MASK                       equ 0080h
DAC2REFL_DAC2REF0_POSN                   equ 0000h
DAC2REFL_DAC2REF0_POSITION               equ 0000h
DAC2REFL_DAC2REF0_SIZE                   equ 0001h
DAC2REFL_DAC2REF0_LENGTH                 equ 0001h
DAC2REFL_DAC2REF0_MASK                   equ 0001h
DAC2REFL_DAC2REF1_POSN                   equ 0001h
DAC2REFL_DAC2REF1_POSITION               equ 0001h
DAC2REFL_DAC2REF1_SIZE                   equ 0001h
DAC2REFL_DAC2REF1_LENGTH                 equ 0001h
DAC2REFL_DAC2REF1_MASK                   equ 0002h
DAC2REFL_DAC2REF2_POSN                   equ 0002h
DAC2REFL_DAC2REF2_POSITION               equ 0002h
DAC2REFL_DAC2REF2_SIZE                   equ 0001h
DAC2REFL_DAC2REF2_LENGTH                 equ 0001h
DAC2REFL_DAC2REF2_MASK                   equ 0004h
DAC2REFL_DAC2REF3_POSN                   equ 0003h
DAC2REFL_DAC2REF3_POSITION               equ 0003h
DAC2REFL_DAC2REF3_SIZE                   equ 0001h
DAC2REFL_DAC2REF3_LENGTH                 equ 0001h
DAC2REFL_DAC2REF3_MASK                   equ 0008h
DAC2REFL_DAC2REF4_POSN                   equ 0004h
DAC2REFL_DAC2REF4_POSITION               equ 0004h
DAC2REFL_DAC2REF4_SIZE                   equ 0001h
DAC2REFL_DAC2REF4_LENGTH                 equ 0001h
DAC2REFL_DAC2REF4_MASK                   equ 0010h
DAC2REFL_DAC2REF5_POSN                   equ 0005h
DAC2REFL_DAC2REF5_POSITION               equ 0005h
DAC2REFL_DAC2REF5_SIZE                   equ 0001h
DAC2REFL_DAC2REF5_LENGTH                 equ 0001h
DAC2REFL_DAC2REF5_MASK                   equ 0020h
DAC2REFL_DAC2REF6_POSN                   equ 0006h
DAC2REFL_DAC2REF6_POSITION               equ 0006h
DAC2REFL_DAC2REF6_SIZE                   equ 0001h
DAC2REFL_DAC2REF6_LENGTH                 equ 0001h
DAC2REFL_DAC2REF6_MASK                   equ 0040h
DAC2REFL_DAC2REF7_POSN                   equ 0007h
DAC2REFL_DAC2REF7_POSITION               equ 0007h
DAC2REFL_DAC2REF7_SIZE                   equ 0001h
DAC2REFL_DAC2REF7_LENGTH                 equ 0001h
DAC2REFL_DAC2REF7_MASK                   equ 0080h
DAC2REFL_R0_POSN                         equ 0000h
DAC2REFL_R0_POSITION                     equ 0000h
DAC2REFL_R0_SIZE                         equ 0001h
DAC2REFL_R0_LENGTH                       equ 0001h
DAC2REFL_R0_MASK                         equ 0001h
DAC2REFL_R1_POSN                         equ 0001h
DAC2REFL_R1_POSITION                     equ 0001h
DAC2REFL_R1_SIZE                         equ 0001h
DAC2REFL_R1_LENGTH                       equ 0001h
DAC2REFL_R1_MASK                         equ 0002h
DAC2REFL_R2_POSN                         equ 0002h
DAC2REFL_R2_POSITION                     equ 0002h
DAC2REFL_R2_SIZE                         equ 0001h
DAC2REFL_R2_LENGTH                       equ 0001h
DAC2REFL_R2_MASK                         equ 0004h
DAC2REFL_R3_POSN                         equ 0003h
DAC2REFL_R3_POSITION                     equ 0003h
DAC2REFL_R3_SIZE                         equ 0001h
DAC2REFL_R3_LENGTH                       equ 0001h
DAC2REFL_R3_MASK                         equ 0008h
DAC2REFL_R4_POSN                         equ 0004h
DAC2REFL_R4_POSITION                     equ 0004h
DAC2REFL_R4_SIZE                         equ 0001h
DAC2REFL_R4_LENGTH                       equ 0001h
DAC2REFL_R4_MASK                         equ 0010h
DAC2REFL_R5_POSN                         equ 0005h
DAC2REFL_R5_POSITION                     equ 0005h
DAC2REFL_R5_SIZE                         equ 0001h
DAC2REFL_R5_LENGTH                       equ 0001h
DAC2REFL_R5_MASK                         equ 0020h
DAC2REFL_R6_POSN                         equ 0006h
DAC2REFL_R6_POSITION                     equ 0006h
DAC2REFL_R6_SIZE                         equ 0001h
DAC2REFL_R6_LENGTH                       equ 0001h
DAC2REFL_R6_MASK                         equ 0040h
DAC2REFL_R7_POSN                         equ 0007h
DAC2REFL_R7_POSITION                     equ 0007h
DAC2REFL_R7_SIZE                         equ 0001h
DAC2REFL_R7_LENGTH                       equ 0001h
DAC2REFL_R7_MASK                         equ 0080h
DAC2REFL_DAC2R0_POSN                     equ 0000h
DAC2REFL_DAC2R0_POSITION                 equ 0000h
DAC2REFL_DAC2R0_SIZE                     equ 0001h
DAC2REFL_DAC2R0_LENGTH                   equ 0001h
DAC2REFL_DAC2R0_MASK                     equ 0001h
DAC2REFL_DAC2R1_POSN                     equ 0001h
DAC2REFL_DAC2R1_POSITION                 equ 0001h
DAC2REFL_DAC2R1_SIZE                     equ 0001h
DAC2REFL_DAC2R1_LENGTH                   equ 0001h
DAC2REFL_DAC2R1_MASK                     equ 0002h
DAC2REFL_DAC2R2_POSN                     equ 0002h
DAC2REFL_DAC2R2_POSITION                 equ 0002h
DAC2REFL_DAC2R2_SIZE                     equ 0001h
DAC2REFL_DAC2R2_LENGTH                   equ 0001h
DAC2REFL_DAC2R2_MASK                     equ 0004h
DAC2REFL_DAC2R3_POSN                     equ 0003h
DAC2REFL_DAC2R3_POSITION                 equ 0003h
DAC2REFL_DAC2R3_SIZE                     equ 0001h
DAC2REFL_DAC2R3_LENGTH                   equ 0001h
DAC2REFL_DAC2R3_MASK                     equ 0008h
DAC2REFL_DAC2R4_POSN                     equ 0004h
DAC2REFL_DAC2R4_POSITION                 equ 0004h
DAC2REFL_DAC2R4_SIZE                     equ 0001h
DAC2REFL_DAC2R4_LENGTH                   equ 0001h
DAC2REFL_DAC2R4_MASK                     equ 0010h
DAC2REFL_DAC2R5_POSN                     equ 0005h
DAC2REFL_DAC2R5_POSITION                 equ 0005h
DAC2REFL_DAC2R5_SIZE                     equ 0001h
DAC2REFL_DAC2R5_LENGTH                   equ 0001h
DAC2REFL_DAC2R5_MASK                     equ 0020h
DAC2REFL_DAC2R6_POSN                     equ 0006h
DAC2REFL_DAC2R6_POSITION                 equ 0006h
DAC2REFL_DAC2R6_SIZE                     equ 0001h
DAC2REFL_DAC2R6_LENGTH                   equ 0001h
DAC2REFL_DAC2R6_MASK                     equ 0040h
DAC2REFL_DAC2R7_POSN                     equ 0007h
DAC2REFL_DAC2R7_POSITION                 equ 0007h
DAC2REFL_DAC2R7_SIZE                     equ 0001h
DAC2REFL_DAC2R7_LENGTH                   equ 0001h
DAC2REFL_DAC2R7_MASK                     equ 0080h

// Register: DAC2REFH
#define DAC2REFH DAC2REFH
DAC2REFH                                 equ 0596h
// bitfield definitions
DAC2REFH_REF8_POSN                       equ 0000h
DAC2REFH_REF8_POSITION                   equ 0000h
DAC2REFH_REF8_SIZE                       equ 0001h
DAC2REFH_REF8_LENGTH                     equ 0001h
DAC2REFH_REF8_MASK                       equ 0001h
DAC2REFH_REF9_POSN                       equ 0001h
DAC2REFH_REF9_POSITION                   equ 0001h
DAC2REFH_REF9_SIZE                       equ 0001h
DAC2REFH_REF9_LENGTH                     equ 0001h
DAC2REFH_REF9_MASK                       equ 0002h
DAC2REFH_REF10_POSN                      equ 0002h
DAC2REFH_REF10_POSITION                  equ 0002h
DAC2REFH_REF10_SIZE                      equ 0001h
DAC2REFH_REF10_LENGTH                    equ 0001h
DAC2REFH_REF10_MASK                      equ 0004h
DAC2REFH_REF11_POSN                      equ 0003h
DAC2REFH_REF11_POSITION                  equ 0003h
DAC2REFH_REF11_SIZE                      equ 0001h
DAC2REFH_REF11_LENGTH                    equ 0001h
DAC2REFH_REF11_MASK                      equ 0008h
DAC2REFH_REF12_POSN                      equ 0004h
DAC2REFH_REF12_POSITION                  equ 0004h
DAC2REFH_REF12_SIZE                      equ 0001h
DAC2REFH_REF12_LENGTH                    equ 0001h
DAC2REFH_REF12_MASK                      equ 0010h
DAC2REFH_REF13_POSN                      equ 0005h
DAC2REFH_REF13_POSITION                  equ 0005h
DAC2REFH_REF13_SIZE                      equ 0001h
DAC2REFH_REF13_LENGTH                    equ 0001h
DAC2REFH_REF13_MASK                      equ 0020h
DAC2REFH_REF14_POSN                      equ 0006h
DAC2REFH_REF14_POSITION                  equ 0006h
DAC2REFH_REF14_SIZE                      equ 0001h
DAC2REFH_REF14_LENGTH                    equ 0001h
DAC2REFH_REF14_MASK                      equ 0040h
DAC2REFH_REF15_POSN                      equ 0007h
DAC2REFH_REF15_POSITION                  equ 0007h
DAC2REFH_REF15_SIZE                      equ 0001h
DAC2REFH_REF15_LENGTH                    equ 0001h
DAC2REFH_REF15_MASK                      equ 0080h
DAC2REFH_DAC2REF8_POSN                   equ 0000h
DAC2REFH_DAC2REF8_POSITION               equ 0000h
DAC2REFH_DAC2REF8_SIZE                   equ 0001h
DAC2REFH_DAC2REF8_LENGTH                 equ 0001h
DAC2REFH_DAC2REF8_MASK                   equ 0001h
DAC2REFH_DAC2REF9_POSN                   equ 0001h
DAC2REFH_DAC2REF9_POSITION               equ 0001h
DAC2REFH_DAC2REF9_SIZE                   equ 0001h
DAC2REFH_DAC2REF9_LENGTH                 equ 0001h
DAC2REFH_DAC2REF9_MASK                   equ 0002h
DAC2REFH_DAC2REF10_POSN                  equ 0002h
DAC2REFH_DAC2REF10_POSITION              equ 0002h
DAC2REFH_DAC2REF10_SIZE                  equ 0001h
DAC2REFH_DAC2REF10_LENGTH                equ 0001h
DAC2REFH_DAC2REF10_MASK                  equ 0004h
DAC2REFH_DAC2REF11_POSN                  equ 0003h
DAC2REFH_DAC2REF11_POSITION              equ 0003h
DAC2REFH_DAC2REF11_SIZE                  equ 0001h
DAC2REFH_DAC2REF11_LENGTH                equ 0001h
DAC2REFH_DAC2REF11_MASK                  equ 0008h
DAC2REFH_DAC2REF12_POSN                  equ 0004h
DAC2REFH_DAC2REF12_POSITION              equ 0004h
DAC2REFH_DAC2REF12_SIZE                  equ 0001h
DAC2REFH_DAC2REF12_LENGTH                equ 0001h
DAC2REFH_DAC2REF12_MASK                  equ 0010h
DAC2REFH_DAC2REF13_POSN                  equ 0005h
DAC2REFH_DAC2REF13_POSITION              equ 0005h
DAC2REFH_DAC2REF13_SIZE                  equ 0001h
DAC2REFH_DAC2REF13_LENGTH                equ 0001h
DAC2REFH_DAC2REF13_MASK                  equ 0020h
DAC2REFH_DAC2REF14_POSN                  equ 0006h
DAC2REFH_DAC2REF14_POSITION              equ 0006h
DAC2REFH_DAC2REF14_SIZE                  equ 0001h
DAC2REFH_DAC2REF14_LENGTH                equ 0001h
DAC2REFH_DAC2REF14_MASK                  equ 0040h
DAC2REFH_DAC2REF15_POSN                  equ 0007h
DAC2REFH_DAC2REF15_POSITION              equ 0007h
DAC2REFH_DAC2REF15_SIZE                  equ 0001h
DAC2REFH_DAC2REF15_LENGTH                equ 0001h
DAC2REFH_DAC2REF15_MASK                  equ 0080h
DAC2REFH_R8_POSN                         equ 0000h
DAC2REFH_R8_POSITION                     equ 0000h
DAC2REFH_R8_SIZE                         equ 0001h
DAC2REFH_R8_LENGTH                       equ 0001h
DAC2REFH_R8_MASK                         equ 0001h
DAC2REFH_R9_POSN                         equ 0001h
DAC2REFH_R9_POSITION                     equ 0001h
DAC2REFH_R9_SIZE                         equ 0001h
DAC2REFH_R9_LENGTH                       equ 0001h
DAC2REFH_R9_MASK                         equ 0002h
DAC2REFH_R10_POSN                        equ 0002h
DAC2REFH_R10_POSITION                    equ 0002h
DAC2REFH_R10_SIZE                        equ 0001h
DAC2REFH_R10_LENGTH                      equ 0001h
DAC2REFH_R10_MASK                        equ 0004h
DAC2REFH_R11_POSN                        equ 0003h
DAC2REFH_R11_POSITION                    equ 0003h
DAC2REFH_R11_SIZE                        equ 0001h
DAC2REFH_R11_LENGTH                      equ 0001h
DAC2REFH_R11_MASK                        equ 0008h
DAC2REFH_R12_POSN                        equ 0004h
DAC2REFH_R12_POSITION                    equ 0004h
DAC2REFH_R12_SIZE                        equ 0001h
DAC2REFH_R12_LENGTH                      equ 0001h
DAC2REFH_R12_MASK                        equ 0010h
DAC2REFH_R13_POSN                        equ 0005h
DAC2REFH_R13_POSITION                    equ 0005h
DAC2REFH_R13_SIZE                        equ 0001h
DAC2REFH_R13_LENGTH                      equ 0001h
DAC2REFH_R13_MASK                        equ 0020h
DAC2REFH_R14_POSN                        equ 0006h
DAC2REFH_R14_POSITION                    equ 0006h
DAC2REFH_R14_SIZE                        equ 0001h
DAC2REFH_R14_LENGTH                      equ 0001h
DAC2REFH_R14_MASK                        equ 0040h
DAC2REFH_R15_POSN                        equ 0007h
DAC2REFH_R15_POSITION                    equ 0007h
DAC2REFH_R15_SIZE                        equ 0001h
DAC2REFH_R15_LENGTH                      equ 0001h
DAC2REFH_R15_MASK                        equ 0080h
DAC2REFH_DAC2R8_POSN                     equ 0000h
DAC2REFH_DAC2R8_POSITION                 equ 0000h
DAC2REFH_DAC2R8_SIZE                     equ 0001h
DAC2REFH_DAC2R8_LENGTH                   equ 0001h
DAC2REFH_DAC2R8_MASK                     equ 0001h
DAC2REFH_DAC2R9_POSN                     equ 0001h
DAC2REFH_DAC2R9_POSITION                 equ 0001h
DAC2REFH_DAC2R9_SIZE                     equ 0001h
DAC2REFH_DAC2R9_LENGTH                   equ 0001h
DAC2REFH_DAC2R9_MASK                     equ 0002h
DAC2REFH_DAC2R10_POSN                    equ 0002h
DAC2REFH_DAC2R10_POSITION                equ 0002h
DAC2REFH_DAC2R10_SIZE                    equ 0001h
DAC2REFH_DAC2R10_LENGTH                  equ 0001h
DAC2REFH_DAC2R10_MASK                    equ 0004h
DAC2REFH_DAC2R11_POSN                    equ 0003h
DAC2REFH_DAC2R11_POSITION                equ 0003h
DAC2REFH_DAC2R11_SIZE                    equ 0001h
DAC2REFH_DAC2R11_LENGTH                  equ 0001h
DAC2REFH_DAC2R11_MASK                    equ 0008h
DAC2REFH_DAC2R12_POSN                    equ 0004h
DAC2REFH_DAC2R12_POSITION                equ 0004h
DAC2REFH_DAC2R12_SIZE                    equ 0001h
DAC2REFH_DAC2R12_LENGTH                  equ 0001h
DAC2REFH_DAC2R12_MASK                    equ 0010h
DAC2REFH_DAC2R13_POSN                    equ 0005h
DAC2REFH_DAC2R13_POSITION                equ 0005h
DAC2REFH_DAC2R13_SIZE                    equ 0001h
DAC2REFH_DAC2R13_LENGTH                  equ 0001h
DAC2REFH_DAC2R13_MASK                    equ 0020h
DAC2REFH_DAC2R14_POSN                    equ 0006h
DAC2REFH_DAC2R14_POSITION                equ 0006h
DAC2REFH_DAC2R14_SIZE                    equ 0001h
DAC2REFH_DAC2R14_LENGTH                  equ 0001h
DAC2REFH_DAC2R14_MASK                    equ 0040h
DAC2REFH_DAC2R15_POSN                    equ 0007h
DAC2REFH_DAC2R15_POSITION                equ 0007h
DAC2REFH_DAC2R15_SIZE                    equ 0001h
DAC2REFH_DAC2R15_LENGTH                  equ 0001h
DAC2REFH_DAC2R15_MASK                    equ 0080h

// Register: DAC3CON0
#define DAC3CON0 DAC3CON0
DAC3CON0                                 equ 0597h
// bitfield definitions
DAC3CON0_NSS_POSN                        equ 0000h
DAC3CON0_NSS_POSITION                    equ 0000h
DAC3CON0_NSS_SIZE                        equ 0001h
DAC3CON0_NSS_LENGTH                      equ 0001h
DAC3CON0_NSS_MASK                        equ 0001h
DAC3CON0_PSS_POSN                        equ 0002h
DAC3CON0_PSS_POSITION                    equ 0002h
DAC3CON0_PSS_SIZE                        equ 0002h
DAC3CON0_PSS_LENGTH                      equ 0002h
DAC3CON0_PSS_MASK                        equ 000Ch
DAC3CON0_OE1_POSN                        equ 0005h
DAC3CON0_OE1_POSITION                    equ 0005h
DAC3CON0_OE1_SIZE                        equ 0001h
DAC3CON0_OE1_LENGTH                      equ 0001h
DAC3CON0_OE1_MASK                        equ 0020h
DAC3CON0_EN_POSN                         equ 0007h
DAC3CON0_EN_POSITION                     equ 0007h
DAC3CON0_EN_SIZE                         equ 0001h
DAC3CON0_EN_LENGTH                       equ 0001h
DAC3CON0_EN_MASK                         equ 0080h
DAC3CON0_PSS0_POSN                       equ 0002h
DAC3CON0_PSS0_POSITION                   equ 0002h
DAC3CON0_PSS0_SIZE                       equ 0001h
DAC3CON0_PSS0_LENGTH                     equ 0001h
DAC3CON0_PSS0_MASK                       equ 0004h
DAC3CON0_PSS1_POSN                       equ 0003h
DAC3CON0_PSS1_POSITION                   equ 0003h
DAC3CON0_PSS1_SIZE                       equ 0001h
DAC3CON0_PSS1_LENGTH                     equ 0001h
DAC3CON0_PSS1_MASK                       equ 0008h
DAC3CON0_DACNSS_POSN                     equ 0000h
DAC3CON0_DACNSS_POSITION                 equ 0000h
DAC3CON0_DACNSS_SIZE                     equ 0001h
DAC3CON0_DACNSS_LENGTH                   equ 0001h
DAC3CON0_DACNSS_MASK                     equ 0001h
DAC3CON0_DACPSS_POSN                     equ 0002h
DAC3CON0_DACPSS_POSITION                 equ 0002h
DAC3CON0_DACPSS_SIZE                     equ 0002h
DAC3CON0_DACPSS_LENGTH                   equ 0002h
DAC3CON0_DACPSS_MASK                     equ 000Ch
DAC3CON0_DACOE1_POSN                     equ 0005h
DAC3CON0_DACOE1_POSITION                 equ 0005h
DAC3CON0_DACOE1_SIZE                     equ 0001h
DAC3CON0_DACOE1_LENGTH                   equ 0001h
DAC3CON0_DACOE1_MASK                     equ 0020h
DAC3CON0_DACEN_POSN                      equ 0007h
DAC3CON0_DACEN_POSITION                  equ 0007h
DAC3CON0_DACEN_SIZE                      equ 0001h
DAC3CON0_DACEN_LENGTH                    equ 0001h
DAC3CON0_DACEN_MASK                      equ 0080h
DAC3CON0_DACPSS0_POSN                    equ 0002h
DAC3CON0_DACPSS0_POSITION                equ 0002h
DAC3CON0_DACPSS0_SIZE                    equ 0001h
DAC3CON0_DACPSS0_LENGTH                  equ 0001h
DAC3CON0_DACPSS0_MASK                    equ 0004h
DAC3CON0_DACPSS1_POSN                    equ 0003h
DAC3CON0_DACPSS1_POSITION                equ 0003h
DAC3CON0_DACPSS1_SIZE                    equ 0001h
DAC3CON0_DACPSS1_LENGTH                  equ 0001h
DAC3CON0_DACPSS1_MASK                    equ 0008h
DAC3CON0_DAC3NSS_POSN                    equ 0000h
DAC3CON0_DAC3NSS_POSITION                equ 0000h
DAC3CON0_DAC3NSS_SIZE                    equ 0001h
DAC3CON0_DAC3NSS_LENGTH                  equ 0001h
DAC3CON0_DAC3NSS_MASK                    equ 0001h
DAC3CON0_DAC3PSS_POSN                    equ 0002h
DAC3CON0_DAC3PSS_POSITION                equ 0002h
DAC3CON0_DAC3PSS_SIZE                    equ 0002h
DAC3CON0_DAC3PSS_LENGTH                  equ 0002h
DAC3CON0_DAC3PSS_MASK                    equ 000Ch
DAC3CON0_DAC3OE1_POSN                    equ 0005h
DAC3CON0_DAC3OE1_POSITION                equ 0005h
DAC3CON0_DAC3OE1_SIZE                    equ 0001h
DAC3CON0_DAC3OE1_LENGTH                  equ 0001h
DAC3CON0_DAC3OE1_MASK                    equ 0020h
DAC3CON0_DAC3EN_POSN                     equ 0007h
DAC3CON0_DAC3EN_POSITION                 equ 0007h
DAC3CON0_DAC3EN_SIZE                     equ 0001h
DAC3CON0_DAC3EN_LENGTH                   equ 0001h
DAC3CON0_DAC3EN_MASK                     equ 0080h
DAC3CON0_DAC3PSS0_POSN                   equ 0002h
DAC3CON0_DAC3PSS0_POSITION               equ 0002h
DAC3CON0_DAC3PSS0_SIZE                   equ 0001h
DAC3CON0_DAC3PSS0_LENGTH                 equ 0001h
DAC3CON0_DAC3PSS0_MASK                   equ 0004h
DAC3CON0_DAC3PSS1_POSN                   equ 0003h
DAC3CON0_DAC3PSS1_POSITION               equ 0003h
DAC3CON0_DAC3PSS1_SIZE                   equ 0001h
DAC3CON0_DAC3PSS1_LENGTH                 equ 0001h
DAC3CON0_DAC3PSS1_MASK                   equ 0008h

// Register: DAC3REF
#define DAC3REF DAC3REF
DAC3REF                                  equ 0598h
// bitfield definitions
DAC3REF_DACR_POSN                        equ 0000h
DAC3REF_DACR_POSITION                    equ 0000h
DAC3REF_DACR_SIZE                        equ 0005h
DAC3REF_DACR_LENGTH                      equ 0005h
DAC3REF_DACR_MASK                        equ 001Fh
DAC3REF_DACR0_POSN                       equ 0000h
DAC3REF_DACR0_POSITION                   equ 0000h
DAC3REF_DACR0_SIZE                       equ 0001h
DAC3REF_DACR0_LENGTH                     equ 0001h
DAC3REF_DACR0_MASK                       equ 0001h
DAC3REF_DACR1_POSN                       equ 0001h
DAC3REF_DACR1_POSITION                   equ 0001h
DAC3REF_DACR1_SIZE                       equ 0001h
DAC3REF_DACR1_LENGTH                     equ 0001h
DAC3REF_DACR1_MASK                       equ 0002h
DAC3REF_DACR2_POSN                       equ 0002h
DAC3REF_DACR2_POSITION                   equ 0002h
DAC3REF_DACR2_SIZE                       equ 0001h
DAC3REF_DACR2_LENGTH                     equ 0001h
DAC3REF_DACR2_MASK                       equ 0004h
DAC3REF_DACR3_POSN                       equ 0003h
DAC3REF_DACR3_POSITION                   equ 0003h
DAC3REF_DACR3_SIZE                       equ 0001h
DAC3REF_DACR3_LENGTH                     equ 0001h
DAC3REF_DACR3_MASK                       equ 0008h
DAC3REF_DACR4_POSN                       equ 0004h
DAC3REF_DACR4_POSITION                   equ 0004h
DAC3REF_DACR4_SIZE                       equ 0001h
DAC3REF_DACR4_LENGTH                     equ 0001h
DAC3REF_DACR4_MASK                       equ 0010h
DAC3REF_R0_POSN                          equ 0000h
DAC3REF_R0_POSITION                      equ 0000h
DAC3REF_R0_SIZE                          equ 0001h
DAC3REF_R0_LENGTH                        equ 0001h
DAC3REF_R0_MASK                          equ 0001h
DAC3REF_R1_POSN                          equ 0001h
DAC3REF_R1_POSITION                      equ 0001h
DAC3REF_R1_SIZE                          equ 0001h
DAC3REF_R1_LENGTH                        equ 0001h
DAC3REF_R1_MASK                          equ 0002h
DAC3REF_R2_POSN                          equ 0002h
DAC3REF_R2_POSITION                      equ 0002h
DAC3REF_R2_SIZE                          equ 0001h
DAC3REF_R2_LENGTH                        equ 0001h
DAC3REF_R2_MASK                          equ 0004h
DAC3REF_R3_POSN                          equ 0003h
DAC3REF_R3_POSITION                      equ 0003h
DAC3REF_R3_SIZE                          equ 0001h
DAC3REF_R3_LENGTH                        equ 0001h
DAC3REF_R3_MASK                          equ 0008h
DAC3REF_R4_POSN                          equ 0004h
DAC3REF_R4_POSITION                      equ 0004h
DAC3REF_R4_SIZE                          equ 0001h
DAC3REF_R4_LENGTH                        equ 0001h
DAC3REF_R4_MASK                          equ 0010h
DAC3REF_DAC3R_POSN                       equ 0000h
DAC3REF_DAC3R_POSITION                   equ 0000h
DAC3REF_DAC3R_SIZE                       equ 0005h
DAC3REF_DAC3R_LENGTH                     equ 0005h
DAC3REF_DAC3R_MASK                       equ 001Fh
DAC3REF_DAC3R0_POSN                      equ 0000h
DAC3REF_DAC3R0_POSITION                  equ 0000h
DAC3REF_DAC3R0_SIZE                      equ 0001h
DAC3REF_DAC3R0_LENGTH                    equ 0001h
DAC3REF_DAC3R0_MASK                      equ 0001h
DAC3REF_DAC3R1_POSN                      equ 0001h
DAC3REF_DAC3R1_POSITION                  equ 0001h
DAC3REF_DAC3R1_SIZE                      equ 0001h
DAC3REF_DAC3R1_LENGTH                    equ 0001h
DAC3REF_DAC3R1_MASK                      equ 0002h
DAC3REF_DAC3R2_POSN                      equ 0002h
DAC3REF_DAC3R2_POSITION                  equ 0002h
DAC3REF_DAC3R2_SIZE                      equ 0001h
DAC3REF_DAC3R2_LENGTH                    equ 0001h
DAC3REF_DAC3R2_MASK                      equ 0004h
DAC3REF_DAC3R3_POSN                      equ 0003h
DAC3REF_DAC3R3_POSITION                  equ 0003h
DAC3REF_DAC3R3_SIZE                      equ 0001h
DAC3REF_DAC3R3_LENGTH                    equ 0001h
DAC3REF_DAC3R3_MASK                      equ 0008h
DAC3REF_DAC3R4_POSN                      equ 0004h
DAC3REF_DAC3R4_POSITION                  equ 0004h
DAC3REF_DAC3R4_SIZE                      equ 0001h
DAC3REF_DAC3R4_LENGTH                    equ 0001h
DAC3REF_DAC3R4_MASK                      equ 0010h
DAC3REF_REF0_POSN                        equ 0000h
DAC3REF_REF0_POSITION                    equ 0000h
DAC3REF_REF0_SIZE                        equ 0001h
DAC3REF_REF0_LENGTH                      equ 0001h
DAC3REF_REF0_MASK                        equ 0001h
DAC3REF_REF1_POSN                        equ 0001h
DAC3REF_REF1_POSITION                    equ 0001h
DAC3REF_REF1_SIZE                        equ 0001h
DAC3REF_REF1_LENGTH                      equ 0001h
DAC3REF_REF1_MASK                        equ 0002h
DAC3REF_REF2_POSN                        equ 0002h
DAC3REF_REF2_POSITION                    equ 0002h
DAC3REF_REF2_SIZE                        equ 0001h
DAC3REF_REF2_LENGTH                      equ 0001h
DAC3REF_REF2_MASK                        equ 0004h
DAC3REF_REF3_POSN                        equ 0003h
DAC3REF_REF3_POSITION                    equ 0003h
DAC3REF_REF3_SIZE                        equ 0001h
DAC3REF_REF3_LENGTH                      equ 0001h
DAC3REF_REF3_MASK                        equ 0008h
DAC3REF_REF4_POSN                        equ 0004h
DAC3REF_REF4_POSITION                    equ 0004h
DAC3REF_REF4_SIZE                        equ 0001h
DAC3REF_REF4_LENGTH                      equ 0001h
DAC3REF_REF4_MASK                        equ 0010h
DAC3REF_REF5_POSN                        equ 0005h
DAC3REF_REF5_POSITION                    equ 0005h
DAC3REF_REF5_SIZE                        equ 0001h
DAC3REF_REF5_LENGTH                      equ 0001h
DAC3REF_REF5_MASK                        equ 0020h
DAC3REF_DAC3REF0_POSN                    equ 0000h
DAC3REF_DAC3REF0_POSITION                equ 0000h
DAC3REF_DAC3REF0_SIZE                    equ 0001h
DAC3REF_DAC3REF0_LENGTH                  equ 0001h
DAC3REF_DAC3REF0_MASK                    equ 0001h
DAC3REF_DAC3REF1_POSN                    equ 0001h
DAC3REF_DAC3REF1_POSITION                equ 0001h
DAC3REF_DAC3REF1_SIZE                    equ 0001h
DAC3REF_DAC3REF1_LENGTH                  equ 0001h
DAC3REF_DAC3REF1_MASK                    equ 0002h
DAC3REF_DAC3REF2_POSN                    equ 0002h
DAC3REF_DAC3REF2_POSITION                equ 0002h
DAC3REF_DAC3REF2_SIZE                    equ 0001h
DAC3REF_DAC3REF2_LENGTH                  equ 0001h
DAC3REF_DAC3REF2_MASK                    equ 0004h
DAC3REF_DAC3REF3_POSN                    equ 0003h
DAC3REF_DAC3REF3_POSITION                equ 0003h
DAC3REF_DAC3REF3_SIZE                    equ 0001h
DAC3REF_DAC3REF3_LENGTH                  equ 0001h
DAC3REF_DAC3REF3_MASK                    equ 0008h
DAC3REF_DAC3REF4_POSN                    equ 0004h
DAC3REF_DAC3REF4_POSITION                equ 0004h
DAC3REF_DAC3REF4_SIZE                    equ 0001h
DAC3REF_DAC3REF4_LENGTH                  equ 0001h
DAC3REF_DAC3REF4_MASK                    equ 0010h
DAC3REF_DAC3REF5_POSN                    equ 0005h
DAC3REF_DAC3REF5_POSITION                equ 0005h
DAC3REF_DAC3REF5_SIZE                    equ 0001h
DAC3REF_DAC3REF5_LENGTH                  equ 0001h
DAC3REF_DAC3REF5_MASK                    equ 0020h

// Register: DAC4CON0
#define DAC4CON0 DAC4CON0
DAC4CON0                                 equ 0599h
// bitfield definitions
DAC4CON0_NSS_POSN                        equ 0000h
DAC4CON0_NSS_POSITION                    equ 0000h
DAC4CON0_NSS_SIZE                        equ 0001h
DAC4CON0_NSS_LENGTH                      equ 0001h
DAC4CON0_NSS_MASK                        equ 0001h
DAC4CON0_PSS_POSN                        equ 0002h
DAC4CON0_PSS_POSITION                    equ 0002h
DAC4CON0_PSS_SIZE                        equ 0002h
DAC4CON0_PSS_LENGTH                      equ 0002h
DAC4CON0_PSS_MASK                        equ 000Ch
DAC4CON0_OE1_POSN                        equ 0005h
DAC4CON0_OE1_POSITION                    equ 0005h
DAC4CON0_OE1_SIZE                        equ 0001h
DAC4CON0_OE1_LENGTH                      equ 0001h
DAC4CON0_OE1_MASK                        equ 0020h
DAC4CON0_EN_POSN                         equ 0007h
DAC4CON0_EN_POSITION                     equ 0007h
DAC4CON0_EN_SIZE                         equ 0001h
DAC4CON0_EN_LENGTH                       equ 0001h
DAC4CON0_EN_MASK                         equ 0080h
DAC4CON0_PSS0_POSN                       equ 0002h
DAC4CON0_PSS0_POSITION                   equ 0002h
DAC4CON0_PSS0_SIZE                       equ 0001h
DAC4CON0_PSS0_LENGTH                     equ 0001h
DAC4CON0_PSS0_MASK                       equ 0004h
DAC4CON0_PSS1_POSN                       equ 0003h
DAC4CON0_PSS1_POSITION                   equ 0003h
DAC4CON0_PSS1_SIZE                       equ 0001h
DAC4CON0_PSS1_LENGTH                     equ 0001h
DAC4CON0_PSS1_MASK                       equ 0008h
DAC4CON0_DACNSS_POSN                     equ 0000h
DAC4CON0_DACNSS_POSITION                 equ 0000h
DAC4CON0_DACNSS_SIZE                     equ 0001h
DAC4CON0_DACNSS_LENGTH                   equ 0001h
DAC4CON0_DACNSS_MASK                     equ 0001h
DAC4CON0_DACPSS_POSN                     equ 0002h
DAC4CON0_DACPSS_POSITION                 equ 0002h
DAC4CON0_DACPSS_SIZE                     equ 0002h
DAC4CON0_DACPSS_LENGTH                   equ 0002h
DAC4CON0_DACPSS_MASK                     equ 000Ch
DAC4CON0_DACOE1_POSN                     equ 0005h
DAC4CON0_DACOE1_POSITION                 equ 0005h
DAC4CON0_DACOE1_SIZE                     equ 0001h
DAC4CON0_DACOE1_LENGTH                   equ 0001h
DAC4CON0_DACOE1_MASK                     equ 0020h
DAC4CON0_DACEN_POSN                      equ 0007h
DAC4CON0_DACEN_POSITION                  equ 0007h
DAC4CON0_DACEN_SIZE                      equ 0001h
DAC4CON0_DACEN_LENGTH                    equ 0001h
DAC4CON0_DACEN_MASK                      equ 0080h
DAC4CON0_DACPSS0_POSN                    equ 0002h
DAC4CON0_DACPSS0_POSITION                equ 0002h
DAC4CON0_DACPSS0_SIZE                    equ 0001h
DAC4CON0_DACPSS0_LENGTH                  equ 0001h
DAC4CON0_DACPSS0_MASK                    equ 0004h
DAC4CON0_DACPSS1_POSN                    equ 0003h
DAC4CON0_DACPSS1_POSITION                equ 0003h
DAC4CON0_DACPSS1_SIZE                    equ 0001h
DAC4CON0_DACPSS1_LENGTH                  equ 0001h
DAC4CON0_DACPSS1_MASK                    equ 0008h
DAC4CON0_DAC4NSS_POSN                    equ 0000h
DAC4CON0_DAC4NSS_POSITION                equ 0000h
DAC4CON0_DAC4NSS_SIZE                    equ 0001h
DAC4CON0_DAC4NSS_LENGTH                  equ 0001h
DAC4CON0_DAC4NSS_MASK                    equ 0001h
DAC4CON0_DAC4PSS_POSN                    equ 0002h
DAC4CON0_DAC4PSS_POSITION                equ 0002h
DAC4CON0_DAC4PSS_SIZE                    equ 0002h
DAC4CON0_DAC4PSS_LENGTH                  equ 0002h
DAC4CON0_DAC4PSS_MASK                    equ 000Ch
DAC4CON0_DAC4OE1_POSN                    equ 0005h
DAC4CON0_DAC4OE1_POSITION                equ 0005h
DAC4CON0_DAC4OE1_SIZE                    equ 0001h
DAC4CON0_DAC4OE1_LENGTH                  equ 0001h
DAC4CON0_DAC4OE1_MASK                    equ 0020h
DAC4CON0_DAC4EN_POSN                     equ 0007h
DAC4CON0_DAC4EN_POSITION                 equ 0007h
DAC4CON0_DAC4EN_SIZE                     equ 0001h
DAC4CON0_DAC4EN_LENGTH                   equ 0001h
DAC4CON0_DAC4EN_MASK                     equ 0080h
DAC4CON0_DAC4PSS0_POSN                   equ 0002h
DAC4CON0_DAC4PSS0_POSITION               equ 0002h
DAC4CON0_DAC4PSS0_SIZE                   equ 0001h
DAC4CON0_DAC4PSS0_LENGTH                 equ 0001h
DAC4CON0_DAC4PSS0_MASK                   equ 0004h
DAC4CON0_DAC4PSS1_POSN                   equ 0003h
DAC4CON0_DAC4PSS1_POSITION               equ 0003h
DAC4CON0_DAC4PSS1_SIZE                   equ 0001h
DAC4CON0_DAC4PSS1_LENGTH                 equ 0001h
DAC4CON0_DAC4PSS1_MASK                   equ 0008h

// Register: DAC4REF
#define DAC4REF DAC4REF
DAC4REF                                  equ 059Ah
// bitfield definitions
DAC4REF_DACR_POSN                        equ 0000h
DAC4REF_DACR_POSITION                    equ 0000h
DAC4REF_DACR_SIZE                        equ 0005h
DAC4REF_DACR_LENGTH                      equ 0005h
DAC4REF_DACR_MASK                        equ 001Fh
DAC4REF_DACR0_POSN                       equ 0000h
DAC4REF_DACR0_POSITION                   equ 0000h
DAC4REF_DACR0_SIZE                       equ 0001h
DAC4REF_DACR0_LENGTH                     equ 0001h
DAC4REF_DACR0_MASK                       equ 0001h
DAC4REF_DACR1_POSN                       equ 0001h
DAC4REF_DACR1_POSITION                   equ 0001h
DAC4REF_DACR1_SIZE                       equ 0001h
DAC4REF_DACR1_LENGTH                     equ 0001h
DAC4REF_DACR1_MASK                       equ 0002h
DAC4REF_DACR2_POSN                       equ 0002h
DAC4REF_DACR2_POSITION                   equ 0002h
DAC4REF_DACR2_SIZE                       equ 0001h
DAC4REF_DACR2_LENGTH                     equ 0001h
DAC4REF_DACR2_MASK                       equ 0004h
DAC4REF_DACR3_POSN                       equ 0003h
DAC4REF_DACR3_POSITION                   equ 0003h
DAC4REF_DACR3_SIZE                       equ 0001h
DAC4REF_DACR3_LENGTH                     equ 0001h
DAC4REF_DACR3_MASK                       equ 0008h
DAC4REF_DACR4_POSN                       equ 0004h
DAC4REF_DACR4_POSITION                   equ 0004h
DAC4REF_DACR4_SIZE                       equ 0001h
DAC4REF_DACR4_LENGTH                     equ 0001h
DAC4REF_DACR4_MASK                       equ 0010h
DAC4REF_R0_POSN                          equ 0000h
DAC4REF_R0_POSITION                      equ 0000h
DAC4REF_R0_SIZE                          equ 0001h
DAC4REF_R0_LENGTH                        equ 0001h
DAC4REF_R0_MASK                          equ 0001h
DAC4REF_R1_POSN                          equ 0001h
DAC4REF_R1_POSITION                      equ 0001h
DAC4REF_R1_SIZE                          equ 0001h
DAC4REF_R1_LENGTH                        equ 0001h
DAC4REF_R1_MASK                          equ 0002h
DAC4REF_R2_POSN                          equ 0002h
DAC4REF_R2_POSITION                      equ 0002h
DAC4REF_R2_SIZE                          equ 0001h
DAC4REF_R2_LENGTH                        equ 0001h
DAC4REF_R2_MASK                          equ 0004h
DAC4REF_R3_POSN                          equ 0003h
DAC4REF_R3_POSITION                      equ 0003h
DAC4REF_R3_SIZE                          equ 0001h
DAC4REF_R3_LENGTH                        equ 0001h
DAC4REF_R3_MASK                          equ 0008h
DAC4REF_R4_POSN                          equ 0004h
DAC4REF_R4_POSITION                      equ 0004h
DAC4REF_R4_SIZE                          equ 0001h
DAC4REF_R4_LENGTH                        equ 0001h
DAC4REF_R4_MASK                          equ 0010h
DAC4REF_DAC4R_POSN                       equ 0000h
DAC4REF_DAC4R_POSITION                   equ 0000h
DAC4REF_DAC4R_SIZE                       equ 0005h
DAC4REF_DAC4R_LENGTH                     equ 0005h
DAC4REF_DAC4R_MASK                       equ 001Fh
DAC4REF_DAC4R0_POSN                      equ 0000h
DAC4REF_DAC4R0_POSITION                  equ 0000h
DAC4REF_DAC4R0_SIZE                      equ 0001h
DAC4REF_DAC4R0_LENGTH                    equ 0001h
DAC4REF_DAC4R0_MASK                      equ 0001h
DAC4REF_DAC4R1_POSN                      equ 0001h
DAC4REF_DAC4R1_POSITION                  equ 0001h
DAC4REF_DAC4R1_SIZE                      equ 0001h
DAC4REF_DAC4R1_LENGTH                    equ 0001h
DAC4REF_DAC4R1_MASK                      equ 0002h
DAC4REF_DAC4R2_POSN                      equ 0002h
DAC4REF_DAC4R2_POSITION                  equ 0002h
DAC4REF_DAC4R2_SIZE                      equ 0001h
DAC4REF_DAC4R2_LENGTH                    equ 0001h
DAC4REF_DAC4R2_MASK                      equ 0004h
DAC4REF_DAC4R3_POSN                      equ 0003h
DAC4REF_DAC4R3_POSITION                  equ 0003h
DAC4REF_DAC4R3_SIZE                      equ 0001h
DAC4REF_DAC4R3_LENGTH                    equ 0001h
DAC4REF_DAC4R3_MASK                      equ 0008h
DAC4REF_DAC4R4_POSN                      equ 0004h
DAC4REF_DAC4R4_POSITION                  equ 0004h
DAC4REF_DAC4R4_SIZE                      equ 0001h
DAC4REF_DAC4R4_LENGTH                    equ 0001h
DAC4REF_DAC4R4_MASK                      equ 0010h
DAC4REF_REF0_POSN                        equ 0000h
DAC4REF_REF0_POSITION                    equ 0000h
DAC4REF_REF0_SIZE                        equ 0001h
DAC4REF_REF0_LENGTH                      equ 0001h
DAC4REF_REF0_MASK                        equ 0001h
DAC4REF_REF1_POSN                        equ 0001h
DAC4REF_REF1_POSITION                    equ 0001h
DAC4REF_REF1_SIZE                        equ 0001h
DAC4REF_REF1_LENGTH                      equ 0001h
DAC4REF_REF1_MASK                        equ 0002h
DAC4REF_REF2_POSN                        equ 0002h
DAC4REF_REF2_POSITION                    equ 0002h
DAC4REF_REF2_SIZE                        equ 0001h
DAC4REF_REF2_LENGTH                      equ 0001h
DAC4REF_REF2_MASK                        equ 0004h
DAC4REF_REF3_POSN                        equ 0003h
DAC4REF_REF3_POSITION                    equ 0003h
DAC4REF_REF3_SIZE                        equ 0001h
DAC4REF_REF3_LENGTH                      equ 0001h
DAC4REF_REF3_MASK                        equ 0008h
DAC4REF_REF4_POSN                        equ 0004h
DAC4REF_REF4_POSITION                    equ 0004h
DAC4REF_REF4_SIZE                        equ 0001h
DAC4REF_REF4_LENGTH                      equ 0001h
DAC4REF_REF4_MASK                        equ 0010h
DAC4REF_REF5_POSN                        equ 0005h
DAC4REF_REF5_POSITION                    equ 0005h
DAC4REF_REF5_SIZE                        equ 0001h
DAC4REF_REF5_LENGTH                      equ 0001h
DAC4REF_REF5_MASK                        equ 0020h
DAC4REF_DAC4REF0_POSN                    equ 0000h
DAC4REF_DAC4REF0_POSITION                equ 0000h
DAC4REF_DAC4REF0_SIZE                    equ 0001h
DAC4REF_DAC4REF0_LENGTH                  equ 0001h
DAC4REF_DAC4REF0_MASK                    equ 0001h
DAC4REF_DAC4REF1_POSN                    equ 0001h
DAC4REF_DAC4REF1_POSITION                equ 0001h
DAC4REF_DAC4REF1_SIZE                    equ 0001h
DAC4REF_DAC4REF1_LENGTH                  equ 0001h
DAC4REF_DAC4REF1_MASK                    equ 0002h
DAC4REF_DAC4REF2_POSN                    equ 0002h
DAC4REF_DAC4REF2_POSITION                equ 0002h
DAC4REF_DAC4REF2_SIZE                    equ 0001h
DAC4REF_DAC4REF2_LENGTH                  equ 0001h
DAC4REF_DAC4REF2_MASK                    equ 0004h
DAC4REF_DAC4REF3_POSN                    equ 0003h
DAC4REF_DAC4REF3_POSITION                equ 0003h
DAC4REF_DAC4REF3_SIZE                    equ 0001h
DAC4REF_DAC4REF3_LENGTH                  equ 0001h
DAC4REF_DAC4REF3_MASK                    equ 0008h
DAC4REF_DAC4REF4_POSN                    equ 0004h
DAC4REF_DAC4REF4_POSITION                equ 0004h
DAC4REF_DAC4REF4_SIZE                    equ 0001h
DAC4REF_DAC4REF4_LENGTH                  equ 0001h
DAC4REF_DAC4REF4_MASK                    equ 0010h
DAC4REF_DAC4REF5_POSN                    equ 0005h
DAC4REF_DAC4REF5_POSITION                equ 0005h
DAC4REF_DAC4REF5_SIZE                    equ 0001h
DAC4REF_DAC4REF5_LENGTH                  equ 0001h
DAC4REF_DAC4REF5_MASK                    equ 0020h

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
PWM3DCL                                  equ 0617h
// bitfield definitions
PWM3DCL_DC_POSN                          equ 0006h
PWM3DCL_DC_POSITION                      equ 0006h
PWM3DCL_DC_SIZE                          equ 0002h
PWM3DCL_DC_LENGTH                        equ 0002h
PWM3DCL_DC_MASK                          equ 00C0h
PWM3DCL_DC0_POSN                         equ 0006h
PWM3DCL_DC0_POSITION                     equ 0006h
PWM3DCL_DC0_SIZE                         equ 0001h
PWM3DCL_DC0_LENGTH                       equ 0001h
PWM3DCL_DC0_MASK                         equ 0040h
PWM3DCL_DC1_POSN                         equ 0007h
PWM3DCL_DC1_POSITION                     equ 0007h
PWM3DCL_DC1_SIZE                         equ 0001h
PWM3DCL_DC1_LENGTH                       equ 0001h
PWM3DCL_DC1_MASK                         equ 0080h
PWM3DCL_PWM3DC0_POSN                     equ 0006h
PWM3DCL_PWM3DC0_POSITION                 equ 0006h
PWM3DCL_PWM3DC0_SIZE                     equ 0001h
PWM3DCL_PWM3DC0_LENGTH                   equ 0001h
PWM3DCL_PWM3DC0_MASK                     equ 0040h
PWM3DCL_PWM3DC1_POSN                     equ 0007h
PWM3DCL_PWM3DC1_POSITION                 equ 0007h
PWM3DCL_PWM3DC1_SIZE                     equ 0001h
PWM3DCL_PWM3DC1_LENGTH                   equ 0001h
PWM3DCL_PWM3DC1_MASK                     equ 0080h
PWM3DCL_PWMPW0_POSN                      equ 0006h
PWM3DCL_PWMPW0_POSITION                  equ 0006h
PWM3DCL_PWMPW0_SIZE                      equ 0001h
PWM3DCL_PWMPW0_LENGTH                    equ 0001h
PWM3DCL_PWMPW0_MASK                      equ 0040h
PWM3DCL_PWMPW1_POSN                      equ 0007h
PWM3DCL_PWMPW1_POSITION                  equ 0007h
PWM3DCL_PWMPW1_SIZE                      equ 0001h
PWM3DCL_PWMPW1_LENGTH                    equ 0001h
PWM3DCL_PWMPW1_MASK                      equ 0080h

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
PWM3DCH                                  equ 0618h
// bitfield definitions
PWM3DCH_DC_POSN                          equ 0000h
PWM3DCH_DC_POSITION                      equ 0000h
PWM3DCH_DC_SIZE                          equ 0008h
PWM3DCH_DC_LENGTH                        equ 0008h
PWM3DCH_DC_MASK                          equ 00FFh
PWM3DCH_DC2_POSN                         equ 0000h
PWM3DCH_DC2_POSITION                     equ 0000h
PWM3DCH_DC2_SIZE                         equ 0001h
PWM3DCH_DC2_LENGTH                       equ 0001h
PWM3DCH_DC2_MASK                         equ 0001h
PWM3DCH_DC3_POSN                         equ 0001h
PWM3DCH_DC3_POSITION                     equ 0001h
PWM3DCH_DC3_SIZE                         equ 0001h
PWM3DCH_DC3_LENGTH                       equ 0001h
PWM3DCH_DC3_MASK                         equ 0002h
PWM3DCH_DC4_POSN                         equ 0002h
PWM3DCH_DC4_POSITION                     equ 0002h
PWM3DCH_DC4_SIZE                         equ 0001h
PWM3DCH_DC4_LENGTH                       equ 0001h
PWM3DCH_DC4_MASK                         equ 0004h
PWM3DCH_DC5_POSN                         equ 0003h
PWM3DCH_DC5_POSITION                     equ 0003h
PWM3DCH_DC5_SIZE                         equ 0001h
PWM3DCH_DC5_LENGTH                       equ 0001h
PWM3DCH_DC5_MASK                         equ 0008h
PWM3DCH_DC6_POSN                         equ 0004h
PWM3DCH_DC6_POSITION                     equ 0004h
PWM3DCH_DC6_SIZE                         equ 0001h
PWM3DCH_DC6_LENGTH                       equ 0001h
PWM3DCH_DC6_MASK                         equ 0010h
PWM3DCH_DC7_POSN                         equ 0005h
PWM3DCH_DC7_POSITION                     equ 0005h
PWM3DCH_DC7_SIZE                         equ 0001h
PWM3DCH_DC7_LENGTH                       equ 0001h
PWM3DCH_DC7_MASK                         equ 0020h
PWM3DCH_DC8_POSN                         equ 0006h
PWM3DCH_DC8_POSITION                     equ 0006h
PWM3DCH_DC8_SIZE                         equ 0001h
PWM3DCH_DC8_LENGTH                       equ 0001h
PWM3DCH_DC8_MASK                         equ 0040h
PWM3DCH_DC9_POSN                         equ 0007h
PWM3DCH_DC9_POSITION                     equ 0007h
PWM3DCH_DC9_SIZE                         equ 0001h
PWM3DCH_DC9_LENGTH                       equ 0001h
PWM3DCH_DC9_MASK                         equ 0080h
PWM3DCH_PWM3DC2_POSN                     equ 0000h
PWM3DCH_PWM3DC2_POSITION                 equ 0000h
PWM3DCH_PWM3DC2_SIZE                     equ 0001h
PWM3DCH_PWM3DC2_LENGTH                   equ 0001h
PWM3DCH_PWM3DC2_MASK                     equ 0001h
PWM3DCH_PWM3DC3_POSN                     equ 0001h
PWM3DCH_PWM3DC3_POSITION                 equ 0001h
PWM3DCH_PWM3DC3_SIZE                     equ 0001h
PWM3DCH_PWM3DC3_LENGTH                   equ 0001h
PWM3DCH_PWM3DC3_MASK                     equ 0002h
PWM3DCH_PWM3DC4_POSN                     equ 0002h
PWM3DCH_PWM3DC4_POSITION                 equ 0002h
PWM3DCH_PWM3DC4_SIZE                     equ 0001h
PWM3DCH_PWM3DC4_LENGTH                   equ 0001h
PWM3DCH_PWM3DC4_MASK                     equ 0004h
PWM3DCH_PWM3DC5_POSN                     equ 0003h
PWM3DCH_PWM3DC5_POSITION                 equ 0003h
PWM3DCH_PWM3DC5_SIZE                     equ 0001h
PWM3DCH_PWM3DC5_LENGTH                   equ 0001h
PWM3DCH_PWM3DC5_MASK                     equ 0008h
PWM3DCH_PWM3DC6_POSN                     equ 0004h
PWM3DCH_PWM3DC6_POSITION                 equ 0004h
PWM3DCH_PWM3DC6_SIZE                     equ 0001h
PWM3DCH_PWM3DC6_LENGTH                   equ 0001h
PWM3DCH_PWM3DC6_MASK                     equ 0010h
PWM3DCH_PWM3DC7_POSN                     equ 0005h
PWM3DCH_PWM3DC7_POSITION                 equ 0005h
PWM3DCH_PWM3DC7_SIZE                     equ 0001h
PWM3DCH_PWM3DC7_LENGTH                   equ 0001h
PWM3DCH_PWM3DC7_MASK                     equ 0020h
PWM3DCH_PWM3DC8_POSN                     equ 0006h
PWM3DCH_PWM3DC8_POSITION                 equ 0006h
PWM3DCH_PWM3DC8_SIZE                     equ 0001h
PWM3DCH_PWM3DC8_LENGTH                   equ 0001h
PWM3DCH_PWM3DC8_MASK                     equ 0040h
PWM3DCH_PWM3DC9_POSN                     equ 0007h
PWM3DCH_PWM3DC9_POSITION                 equ 0007h
PWM3DCH_PWM3DC9_SIZE                     equ 0001h
PWM3DCH_PWM3DC9_LENGTH                   equ 0001h
PWM3DCH_PWM3DC9_MASK                     equ 0080h
PWM3DCH_PWMPW2_POSN                      equ 0000h
PWM3DCH_PWMPW2_POSITION                  equ 0000h
PWM3DCH_PWMPW2_SIZE                      equ 0001h
PWM3DCH_PWMPW2_LENGTH                    equ 0001h
PWM3DCH_PWMPW2_MASK                      equ 0001h
PWM3DCH_PWMPW3_POSN                      equ 0001h
PWM3DCH_PWMPW3_POSITION                  equ 0001h
PWM3DCH_PWMPW3_SIZE                      equ 0001h
PWM3DCH_PWMPW3_LENGTH                    equ 0001h
PWM3DCH_PWMPW3_MASK                      equ 0002h
PWM3DCH_PWMPW4_POSN                      equ 0002h
PWM3DCH_PWMPW4_POSITION                  equ 0002h
PWM3DCH_PWMPW4_SIZE                      equ 0001h
PWM3DCH_PWMPW4_LENGTH                    equ 0001h
PWM3DCH_PWMPW4_MASK                      equ 0004h
PWM3DCH_PWMPW5_POSN                      equ 0003h
PWM3DCH_PWMPW5_POSITION                  equ 0003h
PWM3DCH_PWMPW5_SIZE                      equ 0001h
PWM3DCH_PWMPW5_LENGTH                    equ 0001h
PWM3DCH_PWMPW5_MASK                      equ 0008h
PWM3DCH_PWMPW6_POSN                      equ 0004h
PWM3DCH_PWMPW6_POSITION                  equ 0004h
PWM3DCH_PWMPW6_SIZE                      equ 0001h
PWM3DCH_PWMPW6_LENGTH                    equ 0001h
PWM3DCH_PWMPW6_MASK                      equ 0010h
PWM3DCH_PWMPW7_POSN                      equ 0005h
PWM3DCH_PWMPW7_POSITION                  equ 0005h
PWM3DCH_PWMPW7_SIZE                      equ 0001h
PWM3DCH_PWMPW7_LENGTH                    equ 0001h
PWM3DCH_PWMPW7_MASK                      equ 0020h
PWM3DCH_PWMPW8_POSN                      equ 0006h
PWM3DCH_PWMPW8_POSITION                  equ 0006h
PWM3DCH_PWMPW8_SIZE                      equ 0001h
PWM3DCH_PWMPW8_LENGTH                    equ 0001h
PWM3DCH_PWMPW8_MASK                      equ 0040h
PWM3DCH_PWMPW9_POSN                      equ 0007h
PWM3DCH_PWMPW9_POSITION                  equ 0007h
PWM3DCH_PWMPW9_SIZE                      equ 0001h
PWM3DCH_PWMPW9_LENGTH                    equ 0001h
PWM3DCH_PWMPW9_MASK                      equ 0080h

// Register: PWM3CON
#define PWM3CON PWM3CON
PWM3CON                                  equ 0619h
// bitfield definitions
PWM3CON_POL_POSN                         equ 0004h
PWM3CON_POL_POSITION                     equ 0004h
PWM3CON_POL_SIZE                         equ 0001h
PWM3CON_POL_LENGTH                       equ 0001h
PWM3CON_POL_MASK                         equ 0010h
PWM3CON_OUT_POSN                         equ 0005h
PWM3CON_OUT_POSITION                     equ 0005h
PWM3CON_OUT_SIZE                         equ 0001h
PWM3CON_OUT_LENGTH                       equ 0001h
PWM3CON_OUT_MASK                         equ 0020h
PWM3CON_EN_POSN                          equ 0007h
PWM3CON_EN_POSITION                      equ 0007h
PWM3CON_EN_SIZE                          equ 0001h
PWM3CON_EN_LENGTH                        equ 0001h
PWM3CON_EN_MASK                          equ 0080h
PWM3CON_PWM3POL_POSN                     equ 0004h
PWM3CON_PWM3POL_POSITION                 equ 0004h
PWM3CON_PWM3POL_SIZE                     equ 0001h
PWM3CON_PWM3POL_LENGTH                   equ 0001h
PWM3CON_PWM3POL_MASK                     equ 0010h
PWM3CON_PWM3OUT_POSN                     equ 0005h
PWM3CON_PWM3OUT_POSITION                 equ 0005h
PWM3CON_PWM3OUT_SIZE                     equ 0001h
PWM3CON_PWM3OUT_LENGTH                   equ 0001h
PWM3CON_PWM3OUT_MASK                     equ 0020h
PWM3CON_PWM3EN_POSN                      equ 0007h
PWM3CON_PWM3EN_POSITION                  equ 0007h
PWM3CON_PWM3EN_SIZE                      equ 0001h
PWM3CON_PWM3EN_LENGTH                    equ 0001h
PWM3CON_PWM3EN_MASK                      equ 0080h

// Register: PWM4DCL
#define PWM4DCL PWM4DCL
PWM4DCL                                  equ 061Ah
// bitfield definitions
PWM4DCL_DC_POSN                          equ 0006h
PWM4DCL_DC_POSITION                      equ 0006h
PWM4DCL_DC_SIZE                          equ 0002h
PWM4DCL_DC_LENGTH                        equ 0002h
PWM4DCL_DC_MASK                          equ 00C0h
PWM4DCL_DC0_POSN                         equ 0006h
PWM4DCL_DC0_POSITION                     equ 0006h
PWM4DCL_DC0_SIZE                         equ 0001h
PWM4DCL_DC0_LENGTH                       equ 0001h
PWM4DCL_DC0_MASK                         equ 0040h
PWM4DCL_DC1_POSN                         equ 0007h
PWM4DCL_DC1_POSITION                     equ 0007h
PWM4DCL_DC1_SIZE                         equ 0001h
PWM4DCL_DC1_LENGTH                       equ 0001h
PWM4DCL_DC1_MASK                         equ 0080h
PWM4DCL_PWM4DC0_POSN                     equ 0006h
PWM4DCL_PWM4DC0_POSITION                 equ 0006h
PWM4DCL_PWM4DC0_SIZE                     equ 0001h
PWM4DCL_PWM4DC0_LENGTH                   equ 0001h
PWM4DCL_PWM4DC0_MASK                     equ 0040h
PWM4DCL_PWM4DC1_POSN                     equ 0007h
PWM4DCL_PWM4DC1_POSITION                 equ 0007h
PWM4DCL_PWM4DC1_SIZE                     equ 0001h
PWM4DCL_PWM4DC1_LENGTH                   equ 0001h
PWM4DCL_PWM4DC1_MASK                     equ 0080h
PWM4DCL_PWMPW0_POSN                      equ 0006h
PWM4DCL_PWMPW0_POSITION                  equ 0006h
PWM4DCL_PWMPW0_SIZE                      equ 0001h
PWM4DCL_PWMPW0_LENGTH                    equ 0001h
PWM4DCL_PWMPW0_MASK                      equ 0040h
PWM4DCL_PWMPW1_POSN                      equ 0007h
PWM4DCL_PWMPW1_POSITION                  equ 0007h
PWM4DCL_PWMPW1_SIZE                      equ 0001h
PWM4DCL_PWMPW1_LENGTH                    equ 0001h
PWM4DCL_PWMPW1_MASK                      equ 0080h

// Register: PWM4DCH
#define PWM4DCH PWM4DCH
PWM4DCH                                  equ 061Bh
// bitfield definitions
PWM4DCH_DC_POSN                          equ 0000h
PWM4DCH_DC_POSITION                      equ 0000h
PWM4DCH_DC_SIZE                          equ 0008h
PWM4DCH_DC_LENGTH                        equ 0008h
PWM4DCH_DC_MASK                          equ 00FFh
PWM4DCH_DC2_POSN                         equ 0000h
PWM4DCH_DC2_POSITION                     equ 0000h
PWM4DCH_DC2_SIZE                         equ 0001h
PWM4DCH_DC2_LENGTH                       equ 0001h
PWM4DCH_DC2_MASK                         equ 0001h
PWM4DCH_DC3_POSN                         equ 0001h
PWM4DCH_DC3_POSITION                     equ 0001h
PWM4DCH_DC3_SIZE                         equ 0001h
PWM4DCH_DC3_LENGTH                       equ 0001h
PWM4DCH_DC3_MASK                         equ 0002h
PWM4DCH_DC4_POSN                         equ 0002h
PWM4DCH_DC4_POSITION                     equ 0002h
PWM4DCH_DC4_SIZE                         equ 0001h
PWM4DCH_DC4_LENGTH                       equ 0001h
PWM4DCH_DC4_MASK                         equ 0004h
PWM4DCH_DC5_POSN                         equ 0003h
PWM4DCH_DC5_POSITION                     equ 0003h
PWM4DCH_DC5_SIZE                         equ 0001h
PWM4DCH_DC5_LENGTH                       equ 0001h
PWM4DCH_DC5_MASK                         equ 0008h
PWM4DCH_DC6_POSN                         equ 0004h
PWM4DCH_DC6_POSITION                     equ 0004h
PWM4DCH_DC6_SIZE                         equ 0001h
PWM4DCH_DC6_LENGTH                       equ 0001h
PWM4DCH_DC6_MASK                         equ 0010h
PWM4DCH_DC7_POSN                         equ 0005h
PWM4DCH_DC7_POSITION                     equ 0005h
PWM4DCH_DC7_SIZE                         equ 0001h
PWM4DCH_DC7_LENGTH                       equ 0001h
PWM4DCH_DC7_MASK                         equ 0020h
PWM4DCH_DC8_POSN                         equ 0006h
PWM4DCH_DC8_POSITION                     equ 0006h
PWM4DCH_DC8_SIZE                         equ 0001h
PWM4DCH_DC8_LENGTH                       equ 0001h
PWM4DCH_DC8_MASK                         equ 0040h
PWM4DCH_DC9_POSN                         equ 0007h
PWM4DCH_DC9_POSITION                     equ 0007h
PWM4DCH_DC9_SIZE                         equ 0001h
PWM4DCH_DC9_LENGTH                       equ 0001h
PWM4DCH_DC9_MASK                         equ 0080h
PWM4DCH_PWM4DC2_POSN                     equ 0000h
PWM4DCH_PWM4DC2_POSITION                 equ 0000h
PWM4DCH_PWM4DC2_SIZE                     equ 0001h
PWM4DCH_PWM4DC2_LENGTH                   equ 0001h
PWM4DCH_PWM4DC2_MASK                     equ 0001h
PWM4DCH_PWM4DC3_POSN                     equ 0001h
PWM4DCH_PWM4DC3_POSITION                 equ 0001h
PWM4DCH_PWM4DC3_SIZE                     equ 0001h
PWM4DCH_PWM4DC3_LENGTH                   equ 0001h
PWM4DCH_PWM4DC3_MASK                     equ 0002h
PWM4DCH_PWM4DC4_POSN                     equ 0002h
PWM4DCH_PWM4DC4_POSITION                 equ 0002h
PWM4DCH_PWM4DC4_SIZE                     equ 0001h
PWM4DCH_PWM4DC4_LENGTH                   equ 0001h
PWM4DCH_PWM4DC4_MASK                     equ 0004h
PWM4DCH_PWM4DC5_POSN                     equ 0003h
PWM4DCH_PWM4DC5_POSITION                 equ 0003h
PWM4DCH_PWM4DC5_SIZE                     equ 0001h
PWM4DCH_PWM4DC5_LENGTH                   equ 0001h
PWM4DCH_PWM4DC5_MASK                     equ 0008h
PWM4DCH_PWM4DC6_POSN                     equ 0004h
PWM4DCH_PWM4DC6_POSITION                 equ 0004h
PWM4DCH_PWM4DC6_SIZE                     equ 0001h
PWM4DCH_PWM4DC6_LENGTH                   equ 0001h
PWM4DCH_PWM4DC6_MASK                     equ 0010h
PWM4DCH_PWM4DC7_POSN                     equ 0005h
PWM4DCH_PWM4DC7_POSITION                 equ 0005h
PWM4DCH_PWM4DC7_SIZE                     equ 0001h
PWM4DCH_PWM4DC7_LENGTH                   equ 0001h
PWM4DCH_PWM4DC7_MASK                     equ 0020h
PWM4DCH_PWM4DC8_POSN                     equ 0006h
PWM4DCH_PWM4DC8_POSITION                 equ 0006h
PWM4DCH_PWM4DC8_SIZE                     equ 0001h
PWM4DCH_PWM4DC8_LENGTH                   equ 0001h
PWM4DCH_PWM4DC8_MASK                     equ 0040h
PWM4DCH_PWM4DC9_POSN                     equ 0007h
PWM4DCH_PWM4DC9_POSITION                 equ 0007h
PWM4DCH_PWM4DC9_SIZE                     equ 0001h
PWM4DCH_PWM4DC9_LENGTH                   equ 0001h
PWM4DCH_PWM4DC9_MASK                     equ 0080h
PWM4DCH_PWMPW2_POSN                      equ 0000h
PWM4DCH_PWMPW2_POSITION                  equ 0000h
PWM4DCH_PWMPW2_SIZE                      equ 0001h
PWM4DCH_PWMPW2_LENGTH                    equ 0001h
PWM4DCH_PWMPW2_MASK                      equ 0001h
PWM4DCH_PWMPW3_POSN                      equ 0001h
PWM4DCH_PWMPW3_POSITION                  equ 0001h
PWM4DCH_PWMPW3_SIZE                      equ 0001h
PWM4DCH_PWMPW3_LENGTH                    equ 0001h
PWM4DCH_PWMPW3_MASK                      equ 0002h
PWM4DCH_PWMPW4_POSN                      equ 0002h
PWM4DCH_PWMPW4_POSITION                  equ 0002h
PWM4DCH_PWMPW4_SIZE                      equ 0001h
PWM4DCH_PWMPW4_LENGTH                    equ 0001h
PWM4DCH_PWMPW4_MASK                      equ 0004h
PWM4DCH_PWMPW5_POSN                      equ 0003h
PWM4DCH_PWMPW5_POSITION                  equ 0003h
PWM4DCH_PWMPW5_SIZE                      equ 0001h
PWM4DCH_PWMPW5_LENGTH                    equ 0001h
PWM4DCH_PWMPW5_MASK                      equ 0008h
PWM4DCH_PWMPW6_POSN                      equ 0004h
PWM4DCH_PWMPW6_POSITION                  equ 0004h
PWM4DCH_PWMPW6_SIZE                      equ 0001h
PWM4DCH_PWMPW6_LENGTH                    equ 0001h
PWM4DCH_PWMPW6_MASK                      equ 0010h
PWM4DCH_PWMPW7_POSN                      equ 0005h
PWM4DCH_PWMPW7_POSITION                  equ 0005h
PWM4DCH_PWMPW7_SIZE                      equ 0001h
PWM4DCH_PWMPW7_LENGTH                    equ 0001h
PWM4DCH_PWMPW7_MASK                      equ 0020h
PWM4DCH_PWMPW8_POSN                      equ 0006h
PWM4DCH_PWMPW8_POSITION                  equ 0006h
PWM4DCH_PWMPW8_SIZE                      equ 0001h
PWM4DCH_PWMPW8_LENGTH                    equ 0001h
PWM4DCH_PWMPW8_MASK                      equ 0040h
PWM4DCH_PWMPW9_POSN                      equ 0007h
PWM4DCH_PWMPW9_POSITION                  equ 0007h
PWM4DCH_PWMPW9_SIZE                      equ 0001h
PWM4DCH_PWMPW9_LENGTH                    equ 0001h
PWM4DCH_PWMPW9_MASK                      equ 0080h

// Register: PWM4CON
#define PWM4CON PWM4CON
PWM4CON                                  equ 061Ch
// bitfield definitions
PWM4CON_POL_POSN                         equ 0004h
PWM4CON_POL_POSITION                     equ 0004h
PWM4CON_POL_SIZE                         equ 0001h
PWM4CON_POL_LENGTH                       equ 0001h
PWM4CON_POL_MASK                         equ 0010h
PWM4CON_OUT_POSN                         equ 0005h
PWM4CON_OUT_POSITION                     equ 0005h
PWM4CON_OUT_SIZE                         equ 0001h
PWM4CON_OUT_LENGTH                       equ 0001h
PWM4CON_OUT_MASK                         equ 0020h
PWM4CON_EN_POSN                          equ 0007h
PWM4CON_EN_POSITION                      equ 0007h
PWM4CON_EN_SIZE                          equ 0001h
PWM4CON_EN_LENGTH                        equ 0001h
PWM4CON_EN_MASK                          equ 0080h
PWM4CON_PWM4POL_POSN                     equ 0004h
PWM4CON_PWM4POL_POSITION                 equ 0004h
PWM4CON_PWM4POL_SIZE                     equ 0001h
PWM4CON_PWM4POL_LENGTH                   equ 0001h
PWM4CON_PWM4POL_MASK                     equ 0010h
PWM4CON_PWM4OUT_POSN                     equ 0005h
PWM4CON_PWM4OUT_POSITION                 equ 0005h
PWM4CON_PWM4OUT_SIZE                     equ 0001h
PWM4CON_PWM4OUT_LENGTH                   equ 0001h
PWM4CON_PWM4OUT_MASK                     equ 0020h
PWM4CON_PWM4EN_POSN                      equ 0007h
PWM4CON_PWM4EN_POSITION                  equ 0007h
PWM4CON_PWM4EN_SIZE                      equ 0001h
PWM4CON_PWM4EN_LENGTH                    equ 0001h
PWM4CON_PWM4EN_MASK                      equ 0080h

// Register: COG1PHR
#define COG1PHR COG1PHR
COG1PHR                                  equ 068Dh
// bitfield definitions
COG1PHR_PHR_POSN                         equ 0000h
COG1PHR_PHR_POSITION                     equ 0000h
COG1PHR_PHR_SIZE                         equ 0006h
COG1PHR_PHR_LENGTH                       equ 0006h
COG1PHR_PHR_MASK                         equ 003Fh
COG1PHR_PHR0_POSN                        equ 0000h
COG1PHR_PHR0_POSITION                    equ 0000h
COG1PHR_PHR0_SIZE                        equ 0001h
COG1PHR_PHR0_LENGTH                      equ 0001h
COG1PHR_PHR0_MASK                        equ 0001h
COG1PHR_PHR1_POSN                        equ 0001h
COG1PHR_PHR1_POSITION                    equ 0001h
COG1PHR_PHR1_SIZE                        equ 0001h
COG1PHR_PHR1_LENGTH                      equ 0001h
COG1PHR_PHR1_MASK                        equ 0002h
COG1PHR_PHR2_POSN                        equ 0002h
COG1PHR_PHR2_POSITION                    equ 0002h
COG1PHR_PHR2_SIZE                        equ 0001h
COG1PHR_PHR2_LENGTH                      equ 0001h
COG1PHR_PHR2_MASK                        equ 0004h
COG1PHR_PHR3_POSN                        equ 0003h
COG1PHR_PHR3_POSITION                    equ 0003h
COG1PHR_PHR3_SIZE                        equ 0001h
COG1PHR_PHR3_LENGTH                      equ 0001h
COG1PHR_PHR3_MASK                        equ 0008h
COG1PHR_PHR4_POSN                        equ 0004h
COG1PHR_PHR4_POSITION                    equ 0004h
COG1PHR_PHR4_SIZE                        equ 0001h
COG1PHR_PHR4_LENGTH                      equ 0001h
COG1PHR_PHR4_MASK                        equ 0010h
COG1PHR_PHR5_POSN                        equ 0005h
COG1PHR_PHR5_POSITION                    equ 0005h
COG1PHR_PHR5_SIZE                        equ 0001h
COG1PHR_PHR5_LENGTH                      equ 0001h
COG1PHR_PHR5_MASK                        equ 0020h
COG1PHR_G1PHR0_POSN                      equ 0000h
COG1PHR_G1PHR0_POSITION                  equ 0000h
COG1PHR_G1PHR0_SIZE                      equ 0001h
COG1PHR_G1PHR0_LENGTH                    equ 0001h
COG1PHR_G1PHR0_MASK                      equ 0001h
COG1PHR_G1PHR1_POSN                      equ 0001h
COG1PHR_G1PHR1_POSITION                  equ 0001h
COG1PHR_G1PHR1_SIZE                      equ 0001h
COG1PHR_G1PHR1_LENGTH                    equ 0001h
COG1PHR_G1PHR1_MASK                      equ 0002h
COG1PHR_G1PHR2_POSN                      equ 0002h
COG1PHR_G1PHR2_POSITION                  equ 0002h
COG1PHR_G1PHR2_SIZE                      equ 0001h
COG1PHR_G1PHR2_LENGTH                    equ 0001h
COG1PHR_G1PHR2_MASK                      equ 0004h
COG1PHR_G1PHR3_POSN                      equ 0003h
COG1PHR_G1PHR3_POSITION                  equ 0003h
COG1PHR_G1PHR3_SIZE                      equ 0001h
COG1PHR_G1PHR3_LENGTH                    equ 0001h
COG1PHR_G1PHR3_MASK                      equ 0008h
COG1PHR_G1PHR4_POSN                      equ 0004h
COG1PHR_G1PHR4_POSITION                  equ 0004h
COG1PHR_G1PHR4_SIZE                      equ 0001h
COG1PHR_G1PHR4_LENGTH                    equ 0001h
COG1PHR_G1PHR4_MASK                      equ 0010h
COG1PHR_G1PHR5_POSN                      equ 0005h
COG1PHR_G1PHR5_POSITION                  equ 0005h
COG1PHR_G1PHR5_SIZE                      equ 0001h
COG1PHR_G1PHR5_LENGTH                    equ 0001h
COG1PHR_G1PHR5_MASK                      equ 0020h

// Register: COG1PHF
#define COG1PHF COG1PHF
COG1PHF                                  equ 068Eh
// bitfield definitions
COG1PHF_PHF_POSN                         equ 0000h
COG1PHF_PHF_POSITION                     equ 0000h
COG1PHF_PHF_SIZE                         equ 0006h
COG1PHF_PHF_LENGTH                       equ 0006h
COG1PHF_PHF_MASK                         equ 003Fh
COG1PHF_PHF0_POSN                        equ 0000h
COG1PHF_PHF0_POSITION                    equ 0000h
COG1PHF_PHF0_SIZE                        equ 0001h
COG1PHF_PHF0_LENGTH                      equ 0001h
COG1PHF_PHF0_MASK                        equ 0001h
COG1PHF_PHF1_POSN                        equ 0001h
COG1PHF_PHF1_POSITION                    equ 0001h
COG1PHF_PHF1_SIZE                        equ 0001h
COG1PHF_PHF1_LENGTH                      equ 0001h
COG1PHF_PHF1_MASK                        equ 0002h
COG1PHF_PHF2_POSN                        equ 0002h
COG1PHF_PHF2_POSITION                    equ 0002h
COG1PHF_PHF2_SIZE                        equ 0001h
COG1PHF_PHF2_LENGTH                      equ 0001h
COG1PHF_PHF2_MASK                        equ 0004h
COG1PHF_PHF3_POSN                        equ 0003h
COG1PHF_PHF3_POSITION                    equ 0003h
COG1PHF_PHF3_SIZE                        equ 0001h
COG1PHF_PHF3_LENGTH                      equ 0001h
COG1PHF_PHF3_MASK                        equ 0008h
COG1PHF_PHF4_POSN                        equ 0004h
COG1PHF_PHF4_POSITION                    equ 0004h
COG1PHF_PHF4_SIZE                        equ 0001h
COG1PHF_PHF4_LENGTH                      equ 0001h
COG1PHF_PHF4_MASK                        equ 0010h
COG1PHF_PHF5_POSN                        equ 0005h
COG1PHF_PHF5_POSITION                    equ 0005h
COG1PHF_PHF5_SIZE                        equ 0001h
COG1PHF_PHF5_LENGTH                      equ 0001h
COG1PHF_PHF5_MASK                        equ 0020h
COG1PHF_G1PHF0_POSN                      equ 0000h
COG1PHF_G1PHF0_POSITION                  equ 0000h
COG1PHF_G1PHF0_SIZE                      equ 0001h
COG1PHF_G1PHF0_LENGTH                    equ 0001h
COG1PHF_G1PHF0_MASK                      equ 0001h
COG1PHF_G1PHF1_POSN                      equ 0001h
COG1PHF_G1PHF1_POSITION                  equ 0001h
COG1PHF_G1PHF1_SIZE                      equ 0001h
COG1PHF_G1PHF1_LENGTH                    equ 0001h
COG1PHF_G1PHF1_MASK                      equ 0002h
COG1PHF_G1PHF2_POSN                      equ 0002h
COG1PHF_G1PHF2_POSITION                  equ 0002h
COG1PHF_G1PHF2_SIZE                      equ 0001h
COG1PHF_G1PHF2_LENGTH                    equ 0001h
COG1PHF_G1PHF2_MASK                      equ 0004h
COG1PHF_G1PHF3_POSN                      equ 0003h
COG1PHF_G1PHF3_POSITION                  equ 0003h
COG1PHF_G1PHF3_SIZE                      equ 0001h
COG1PHF_G1PHF3_LENGTH                    equ 0001h
COG1PHF_G1PHF3_MASK                      equ 0008h
COG1PHF_G1PHF4_POSN                      equ 0004h
COG1PHF_G1PHF4_POSITION                  equ 0004h
COG1PHF_G1PHF4_SIZE                      equ 0001h
COG1PHF_G1PHF4_LENGTH                    equ 0001h
COG1PHF_G1PHF4_MASK                      equ 0010h
COG1PHF_G1PHF5_POSN                      equ 0005h
COG1PHF_G1PHF5_POSITION                  equ 0005h
COG1PHF_G1PHF5_SIZE                      equ 0001h
COG1PHF_G1PHF5_LENGTH                    equ 0001h
COG1PHF_G1PHF5_MASK                      equ 0020h

// Register: COG1BLKR
#define COG1BLKR COG1BLKR
COG1BLKR                                 equ 068Fh
// bitfield definitions
COG1BLKR_BLKR_POSN                       equ 0000h
COG1BLKR_BLKR_POSITION                   equ 0000h
COG1BLKR_BLKR_SIZE                       equ 0006h
COG1BLKR_BLKR_LENGTH                     equ 0006h
COG1BLKR_BLKR_MASK                       equ 003Fh
COG1BLKR_BLKR0_POSN                      equ 0000h
COG1BLKR_BLKR0_POSITION                  equ 0000h
COG1BLKR_BLKR0_SIZE                      equ 0001h
COG1BLKR_BLKR0_LENGTH                    equ 0001h
COG1BLKR_BLKR0_MASK                      equ 0001h
COG1BLKR_BLKR1_POSN                      equ 0001h
COG1BLKR_BLKR1_POSITION                  equ 0001h
COG1BLKR_BLKR1_SIZE                      equ 0001h
COG1BLKR_BLKR1_LENGTH                    equ 0001h
COG1BLKR_BLKR1_MASK                      equ 0002h
COG1BLKR_BLKR2_POSN                      equ 0002h
COG1BLKR_BLKR2_POSITION                  equ 0002h
COG1BLKR_BLKR2_SIZE                      equ 0001h
COG1BLKR_BLKR2_LENGTH                    equ 0001h
COG1BLKR_BLKR2_MASK                      equ 0004h
COG1BLKR_BLKR3_POSN                      equ 0003h
COG1BLKR_BLKR3_POSITION                  equ 0003h
COG1BLKR_BLKR3_SIZE                      equ 0001h
COG1BLKR_BLKR3_LENGTH                    equ 0001h
COG1BLKR_BLKR3_MASK                      equ 0008h
COG1BLKR_BLKR4_POSN                      equ 0004h
COG1BLKR_BLKR4_POSITION                  equ 0004h
COG1BLKR_BLKR4_SIZE                      equ 0001h
COG1BLKR_BLKR4_LENGTH                    equ 0001h
COG1BLKR_BLKR4_MASK                      equ 0010h
COG1BLKR_BLKR5_POSN                      equ 0005h
COG1BLKR_BLKR5_POSITION                  equ 0005h
COG1BLKR_BLKR5_SIZE                      equ 0001h
COG1BLKR_BLKR5_LENGTH                    equ 0001h
COG1BLKR_BLKR5_MASK                      equ 0020h
COG1BLKR_G1BLKR0_POSN                    equ 0000h
COG1BLKR_G1BLKR0_POSITION                equ 0000h
COG1BLKR_G1BLKR0_SIZE                    equ 0001h
COG1BLKR_G1BLKR0_LENGTH                  equ 0001h
COG1BLKR_G1BLKR0_MASK                    equ 0001h
COG1BLKR_G1BLKR1_POSN                    equ 0001h
COG1BLKR_G1BLKR1_POSITION                equ 0001h
COG1BLKR_G1BLKR1_SIZE                    equ 0001h
COG1BLKR_G1BLKR1_LENGTH                  equ 0001h
COG1BLKR_G1BLKR1_MASK                    equ 0002h
COG1BLKR_G1BLKR2_POSN                    equ 0002h
COG1BLKR_G1BLKR2_POSITION                equ 0002h
COG1BLKR_G1BLKR2_SIZE                    equ 0001h
COG1BLKR_G1BLKR2_LENGTH                  equ 0001h
COG1BLKR_G1BLKR2_MASK                    equ 0004h
COG1BLKR_G1BLKR3_POSN                    equ 0003h
COG1BLKR_G1BLKR3_POSITION                equ 0003h
COG1BLKR_G1BLKR3_SIZE                    equ 0001h
COG1BLKR_G1BLKR3_LENGTH                  equ 0001h
COG1BLKR_G1BLKR3_MASK                    equ 0008h
COG1BLKR_G1BLKR4_POSN                    equ 0004h
COG1BLKR_G1BLKR4_POSITION                equ 0004h
COG1BLKR_G1BLKR4_SIZE                    equ 0001h
COG1BLKR_G1BLKR4_LENGTH                  equ 0001h
COG1BLKR_G1BLKR4_MASK                    equ 0010h
COG1BLKR_G1BLKR5_POSN                    equ 0005h
COG1BLKR_G1BLKR5_POSITION                equ 0005h
COG1BLKR_G1BLKR5_SIZE                    equ 0001h
COG1BLKR_G1BLKR5_LENGTH                  equ 0001h
COG1BLKR_G1BLKR5_MASK                    equ 0020h

// Register: COG1BLKF
#define COG1BLKF COG1BLKF
COG1BLKF                                 equ 0690h
// bitfield definitions
COG1BLKF_BLKF_POSN                       equ 0000h
COG1BLKF_BLKF_POSITION                   equ 0000h
COG1BLKF_BLKF_SIZE                       equ 0006h
COG1BLKF_BLKF_LENGTH                     equ 0006h
COG1BLKF_BLKF_MASK                       equ 003Fh
COG1BLKF_BLKF0_POSN                      equ 0000h
COG1BLKF_BLKF0_POSITION                  equ 0000h
COG1BLKF_BLKF0_SIZE                      equ 0001h
COG1BLKF_BLKF0_LENGTH                    equ 0001h
COG1BLKF_BLKF0_MASK                      equ 0001h
COG1BLKF_BLKF1_POSN                      equ 0001h
COG1BLKF_BLKF1_POSITION                  equ 0001h
COG1BLKF_BLKF1_SIZE                      equ 0001h
COG1BLKF_BLKF1_LENGTH                    equ 0001h
COG1BLKF_BLKF1_MASK                      equ 0002h
COG1BLKF_BLKF2_POSN                      equ 0002h
COG1BLKF_BLKF2_POSITION                  equ 0002h
COG1BLKF_BLKF2_SIZE                      equ 0001h
COG1BLKF_BLKF2_LENGTH                    equ 0001h
COG1BLKF_BLKF2_MASK                      equ 0004h
COG1BLKF_BLKF3_POSN                      equ 0003h
COG1BLKF_BLKF3_POSITION                  equ 0003h
COG1BLKF_BLKF3_SIZE                      equ 0001h
COG1BLKF_BLKF3_LENGTH                    equ 0001h
COG1BLKF_BLKF3_MASK                      equ 0008h
COG1BLKF_BLKF4_POSN                      equ 0004h
COG1BLKF_BLKF4_POSITION                  equ 0004h
COG1BLKF_BLKF4_SIZE                      equ 0001h
COG1BLKF_BLKF4_LENGTH                    equ 0001h
COG1BLKF_BLKF4_MASK                      equ 0010h
COG1BLKF_BLKF5_POSN                      equ 0005h
COG1BLKF_BLKF5_POSITION                  equ 0005h
COG1BLKF_BLKF5_SIZE                      equ 0001h
COG1BLKF_BLKF5_LENGTH                    equ 0001h
COG1BLKF_BLKF5_MASK                      equ 0020h
COG1BLKF_G1BLKF0_POSN                    equ 0000h
COG1BLKF_G1BLKF0_POSITION                equ 0000h
COG1BLKF_G1BLKF0_SIZE                    equ 0001h
COG1BLKF_G1BLKF0_LENGTH                  equ 0001h
COG1BLKF_G1BLKF0_MASK                    equ 0001h
COG1BLKF_G1BLKF1_POSN                    equ 0001h
COG1BLKF_G1BLKF1_POSITION                equ 0001h
COG1BLKF_G1BLKF1_SIZE                    equ 0001h
COG1BLKF_G1BLKF1_LENGTH                  equ 0001h
COG1BLKF_G1BLKF1_MASK                    equ 0002h
COG1BLKF_G1BLKF2_POSN                    equ 0002h
COG1BLKF_G1BLKF2_POSITION                equ 0002h
COG1BLKF_G1BLKF2_SIZE                    equ 0001h
COG1BLKF_G1BLKF2_LENGTH                  equ 0001h
COG1BLKF_G1BLKF2_MASK                    equ 0004h
COG1BLKF_G1BLKF3_POSN                    equ 0003h
COG1BLKF_G1BLKF3_POSITION                equ 0003h
COG1BLKF_G1BLKF3_SIZE                    equ 0001h
COG1BLKF_G1BLKF3_LENGTH                  equ 0001h
COG1BLKF_G1BLKF3_MASK                    equ 0008h
COG1BLKF_G1BLKF4_POSN                    equ 0004h
COG1BLKF_G1BLKF4_POSITION                equ 0004h
COG1BLKF_G1BLKF4_SIZE                    equ 0001h
COG1BLKF_G1BLKF4_LENGTH                  equ 0001h
COG1BLKF_G1BLKF4_MASK                    equ 0010h
COG1BLKF_G1BLKF5_POSN                    equ 0005h
COG1BLKF_G1BLKF5_POSITION                equ 0005h
COG1BLKF_G1BLKF5_SIZE                    equ 0001h
COG1BLKF_G1BLKF5_LENGTH                  equ 0001h
COG1BLKF_G1BLKF5_MASK                    equ 0020h

// Register: COG1DBR
#define COG1DBR COG1DBR
COG1DBR                                  equ 0691h
// bitfield definitions
COG1DBR_DBR_POSN                         equ 0000h
COG1DBR_DBR_POSITION                     equ 0000h
COG1DBR_DBR_SIZE                         equ 0006h
COG1DBR_DBR_LENGTH                       equ 0006h
COG1DBR_DBR_MASK                         equ 003Fh
COG1DBR_DBR0_POSN                        equ 0000h
COG1DBR_DBR0_POSITION                    equ 0000h
COG1DBR_DBR0_SIZE                        equ 0001h
COG1DBR_DBR0_LENGTH                      equ 0001h
COG1DBR_DBR0_MASK                        equ 0001h
COG1DBR_DBR1_POSN                        equ 0001h
COG1DBR_DBR1_POSITION                    equ 0001h
COG1DBR_DBR1_SIZE                        equ 0001h
COG1DBR_DBR1_LENGTH                      equ 0001h
COG1DBR_DBR1_MASK                        equ 0002h
COG1DBR_DBR2_POSN                        equ 0002h
COG1DBR_DBR2_POSITION                    equ 0002h
COG1DBR_DBR2_SIZE                        equ 0001h
COG1DBR_DBR2_LENGTH                      equ 0001h
COG1DBR_DBR2_MASK                        equ 0004h
COG1DBR_DBR3_POSN                        equ 0003h
COG1DBR_DBR3_POSITION                    equ 0003h
COG1DBR_DBR3_SIZE                        equ 0001h
COG1DBR_DBR3_LENGTH                      equ 0001h
COG1DBR_DBR3_MASK                        equ 0008h
COG1DBR_DBR4_POSN                        equ 0004h
COG1DBR_DBR4_POSITION                    equ 0004h
COG1DBR_DBR4_SIZE                        equ 0001h
COG1DBR_DBR4_LENGTH                      equ 0001h
COG1DBR_DBR4_MASK                        equ 0010h
COG1DBR_DBR5_POSN                        equ 0005h
COG1DBR_DBR5_POSITION                    equ 0005h
COG1DBR_DBR5_SIZE                        equ 0001h
COG1DBR_DBR5_LENGTH                      equ 0001h
COG1DBR_DBR5_MASK                        equ 0020h
COG1DBR_G1DBR0_POSN                      equ 0000h
COG1DBR_G1DBR0_POSITION                  equ 0000h
COG1DBR_G1DBR0_SIZE                      equ 0001h
COG1DBR_G1DBR0_LENGTH                    equ 0001h
COG1DBR_G1DBR0_MASK                      equ 0001h
COG1DBR_G1DBR1_POSN                      equ 0001h
COG1DBR_G1DBR1_POSITION                  equ 0001h
COG1DBR_G1DBR1_SIZE                      equ 0001h
COG1DBR_G1DBR1_LENGTH                    equ 0001h
COG1DBR_G1DBR1_MASK                      equ 0002h
COG1DBR_G1DBR2_POSN                      equ 0002h
COG1DBR_G1DBR2_POSITION                  equ 0002h
COG1DBR_G1DBR2_SIZE                      equ 0001h
COG1DBR_G1DBR2_LENGTH                    equ 0001h
COG1DBR_G1DBR2_MASK                      equ 0004h
COG1DBR_G1DBR3_POSN                      equ 0003h
COG1DBR_G1DBR3_POSITION                  equ 0003h
COG1DBR_G1DBR3_SIZE                      equ 0001h
COG1DBR_G1DBR3_LENGTH                    equ 0001h
COG1DBR_G1DBR3_MASK                      equ 0008h
COG1DBR_G1DBR4_POSN                      equ 0004h
COG1DBR_G1DBR4_POSITION                  equ 0004h
COG1DBR_G1DBR4_SIZE                      equ 0001h
COG1DBR_G1DBR4_LENGTH                    equ 0001h
COG1DBR_G1DBR4_MASK                      equ 0010h
COG1DBR_G1DBR5_POSN                      equ 0005h
COG1DBR_G1DBR5_POSITION                  equ 0005h
COG1DBR_G1DBR5_SIZE                      equ 0001h
COG1DBR_G1DBR5_LENGTH                    equ 0001h
COG1DBR_G1DBR5_MASK                      equ 0020h

// Register: COG1DBF
#define COG1DBF COG1DBF
COG1DBF                                  equ 0692h
// bitfield definitions
COG1DBF_DBF0_POSN                        equ 0000h
COG1DBF_DBF0_POSITION                    equ 0000h
COG1DBF_DBF0_SIZE                        equ 0001h
COG1DBF_DBF0_LENGTH                      equ 0001h
COG1DBF_DBF0_MASK                        equ 0001h
COG1DBF_DBF1_POSN                        equ 0001h
COG1DBF_DBF1_POSITION                    equ 0001h
COG1DBF_DBF1_SIZE                        equ 0001h
COG1DBF_DBF1_LENGTH                      equ 0001h
COG1DBF_DBF1_MASK                        equ 0002h
COG1DBF_DBF2_POSN                        equ 0002h
COG1DBF_DBF2_POSITION                    equ 0002h
COG1DBF_DBF2_SIZE                        equ 0001h
COG1DBF_DBF2_LENGTH                      equ 0001h
COG1DBF_DBF2_MASK                        equ 0004h
COG1DBF_DBF3_POSN                        equ 0003h
COG1DBF_DBF3_POSITION                    equ 0003h
COG1DBF_DBF3_SIZE                        equ 0001h
COG1DBF_DBF3_LENGTH                      equ 0001h
COG1DBF_DBF3_MASK                        equ 0008h
COG1DBF_DBF4_POSN                        equ 0004h
COG1DBF_DBF4_POSITION                    equ 0004h
COG1DBF_DBF4_SIZE                        equ 0001h
COG1DBF_DBF4_LENGTH                      equ 0001h
COG1DBF_DBF4_MASK                        equ 0010h
COG1DBF_DBF5_POSN                        equ 0005h
COG1DBF_DBF5_POSITION                    equ 0005h
COG1DBF_DBF5_SIZE                        equ 0001h
COG1DBF_DBF5_LENGTH                      equ 0001h
COG1DBF_DBF5_MASK                        equ 0020h
COG1DBF_G1DBF0_POSN                      equ 0000h
COG1DBF_G1DBF0_POSITION                  equ 0000h
COG1DBF_G1DBF0_SIZE                      equ 0001h
COG1DBF_G1DBF0_LENGTH                    equ 0001h
COG1DBF_G1DBF0_MASK                      equ 0001h
COG1DBF_G1DBF1_POSN                      equ 0001h
COG1DBF_G1DBF1_POSITION                  equ 0001h
COG1DBF_G1DBF1_SIZE                      equ 0001h
COG1DBF_G1DBF1_LENGTH                    equ 0001h
COG1DBF_G1DBF1_MASK                      equ 0002h
COG1DBF_G1DBF2_POSN                      equ 0002h
COG1DBF_G1DBF2_POSITION                  equ 0002h
COG1DBF_G1DBF2_SIZE                      equ 0001h
COG1DBF_G1DBF2_LENGTH                    equ 0001h
COG1DBF_G1DBF2_MASK                      equ 0004h
COG1DBF_G1DBF3_POSN                      equ 0003h
COG1DBF_G1DBF3_POSITION                  equ 0003h
COG1DBF_G1DBF3_SIZE                      equ 0001h
COG1DBF_G1DBF3_LENGTH                    equ 0001h
COG1DBF_G1DBF3_MASK                      equ 0008h
COG1DBF_G1DBF4_POSN                      equ 0004h
COG1DBF_G1DBF4_POSITION                  equ 0004h
COG1DBF_G1DBF4_SIZE                      equ 0001h
COG1DBF_G1DBF4_LENGTH                    equ 0001h
COG1DBF_G1DBF4_MASK                      equ 0010h
COG1DBF_G1DBF5_POSN                      equ 0005h
COG1DBF_G1DBF5_POSITION                  equ 0005h
COG1DBF_G1DBF5_SIZE                      equ 0001h
COG1DBF_G1DBF5_LENGTH                    equ 0001h
COG1DBF_G1DBF5_MASK                      equ 0020h
COG1DBF_G1DBF_POSN                       equ 0000h
COG1DBF_G1DBF_POSITION                   equ 0000h
COG1DBF_G1DBF_SIZE                       equ 0006h
COG1DBF_G1DBF_LENGTH                     equ 0006h
COG1DBF_G1DBF_MASK                       equ 003Fh

// Register: COG1CON0
#define COG1CON0 COG1CON0
COG1CON0                                 equ 0693h
// bitfield definitions
COG1CON0_MD_POSN                         equ 0000h
COG1CON0_MD_POSITION                     equ 0000h
COG1CON0_MD_SIZE                         equ 0003h
COG1CON0_MD_LENGTH                       equ 0003h
COG1CON0_MD_MASK                         equ 0007h
COG1CON0_CS_POSN                         equ 0003h
COG1CON0_CS_POSITION                     equ 0003h
COG1CON0_CS_SIZE                         equ 0002h
COG1CON0_CS_LENGTH                       equ 0002h
COG1CON0_CS_MASK                         equ 0018h
COG1CON0_LD_POSN                         equ 0006h
COG1CON0_LD_POSITION                     equ 0006h
COG1CON0_LD_SIZE                         equ 0001h
COG1CON0_LD_LENGTH                       equ 0001h
COG1CON0_LD_MASK                         equ 0040h
COG1CON0_EN_POSN                         equ 0007h
COG1CON0_EN_POSITION                     equ 0007h
COG1CON0_EN_SIZE                         equ 0001h
COG1CON0_EN_LENGTH                       equ 0001h
COG1CON0_EN_MASK                         equ 0080h
COG1CON0_MD0_POSN                        equ 0000h
COG1CON0_MD0_POSITION                    equ 0000h
COG1CON0_MD0_SIZE                        equ 0001h
COG1CON0_MD0_LENGTH                      equ 0001h
COG1CON0_MD0_MASK                        equ 0001h
COG1CON0_MD1_POSN                        equ 0001h
COG1CON0_MD1_POSITION                    equ 0001h
COG1CON0_MD1_SIZE                        equ 0001h
COG1CON0_MD1_LENGTH                      equ 0001h
COG1CON0_MD1_MASK                        equ 0002h
COG1CON0_MD2_POSN                        equ 0002h
COG1CON0_MD2_POSITION                    equ 0002h
COG1CON0_MD2_SIZE                        equ 0001h
COG1CON0_MD2_LENGTH                      equ 0001h
COG1CON0_MD2_MASK                        equ 0004h
COG1CON0_CS0_POSN                        equ 0003h
COG1CON0_CS0_POSITION                    equ 0003h
COG1CON0_CS0_SIZE                        equ 0001h
COG1CON0_CS0_LENGTH                      equ 0001h
COG1CON0_CS0_MASK                        equ 0008h
COG1CON0_CS1_POSN                        equ 0004h
COG1CON0_CS1_POSITION                    equ 0004h
COG1CON0_CS1_SIZE                        equ 0001h
COG1CON0_CS1_LENGTH                      equ 0001h
COG1CON0_CS1_MASK                        equ 0010h
COG1CON0_G1MD_POSN                       equ 0000h
COG1CON0_G1MD_POSITION                   equ 0000h
COG1CON0_G1MD_SIZE                       equ 0003h
COG1CON0_G1MD_LENGTH                     equ 0003h
COG1CON0_G1MD_MASK                       equ 0007h
COG1CON0_G1CS_POSN                       equ 0003h
COG1CON0_G1CS_POSITION                   equ 0003h
COG1CON0_G1CS_SIZE                       equ 0002h
COG1CON0_G1CS_LENGTH                     equ 0002h
COG1CON0_G1CS_MASK                       equ 0018h
COG1CON0_G1LD_POSN                       equ 0006h
COG1CON0_G1LD_POSITION                   equ 0006h
COG1CON0_G1LD_SIZE                       equ 0001h
COG1CON0_G1LD_LENGTH                     equ 0001h
COG1CON0_G1LD_MASK                       equ 0040h
COG1CON0_G1EN_POSN                       equ 0007h
COG1CON0_G1EN_POSITION                   equ 0007h
COG1CON0_G1EN_SIZE                       equ 0001h
COG1CON0_G1EN_LENGTH                     equ 0001h
COG1CON0_G1EN_MASK                       equ 0080h
COG1CON0_G1MD0_POSN                      equ 0000h
COG1CON0_G1MD0_POSITION                  equ 0000h
COG1CON0_G1MD0_SIZE                      equ 0001h
COG1CON0_G1MD0_LENGTH                    equ 0001h
COG1CON0_G1MD0_MASK                      equ 0001h
COG1CON0_G1MD1_POSN                      equ 0001h
COG1CON0_G1MD1_POSITION                  equ 0001h
COG1CON0_G1MD1_SIZE                      equ 0001h
COG1CON0_G1MD1_LENGTH                    equ 0001h
COG1CON0_G1MD1_MASK                      equ 0002h
COG1CON0_G1MD2_POSN                      equ 0002h
COG1CON0_G1MD2_POSITION                  equ 0002h
COG1CON0_G1MD2_SIZE                      equ 0001h
COG1CON0_G1MD2_LENGTH                    equ 0001h
COG1CON0_G1MD2_MASK                      equ 0004h
COG1CON0_G1CS0_POSN                      equ 0003h
COG1CON0_G1CS0_POSITION                  equ 0003h
COG1CON0_G1CS0_SIZE                      equ 0001h
COG1CON0_G1CS0_LENGTH                    equ 0001h
COG1CON0_G1CS0_MASK                      equ 0008h
COG1CON0_G1CS1_POSN                      equ 0004h
COG1CON0_G1CS1_POSITION                  equ 0004h
COG1CON0_G1CS1_SIZE                      equ 0001h
COG1CON0_G1CS1_LENGTH                    equ 0001h
COG1CON0_G1CS1_MASK                      equ 0010h

// Register: COG1CON1
#define COG1CON1 COG1CON1
COG1CON1                                 equ 0694h
// bitfield definitions
COG1CON1_POLA_POSN                       equ 0000h
COG1CON1_POLA_POSITION                   equ 0000h
COG1CON1_POLA_SIZE                       equ 0001h
COG1CON1_POLA_LENGTH                     equ 0001h
COG1CON1_POLA_MASK                       equ 0001h
COG1CON1_POLB_POSN                       equ 0001h
COG1CON1_POLB_POSITION                   equ 0001h
COG1CON1_POLB_SIZE                       equ 0001h
COG1CON1_POLB_LENGTH                     equ 0001h
COG1CON1_POLB_MASK                       equ 0002h
COG1CON1_POLC_POSN                       equ 0002h
COG1CON1_POLC_POSITION                   equ 0002h
COG1CON1_POLC_SIZE                       equ 0001h
COG1CON1_POLC_LENGTH                     equ 0001h
COG1CON1_POLC_MASK                       equ 0004h
COG1CON1_POLD_POSN                       equ 0003h
COG1CON1_POLD_POSITION                   equ 0003h
COG1CON1_POLD_SIZE                       equ 0001h
COG1CON1_POLD_LENGTH                     equ 0001h
COG1CON1_POLD_MASK                       equ 0008h
COG1CON1_FDBS_POSN                       equ 0006h
COG1CON1_FDBS_POSITION                   equ 0006h
COG1CON1_FDBS_SIZE                       equ 0001h
COG1CON1_FDBS_LENGTH                     equ 0001h
COG1CON1_FDBS_MASK                       equ 0040h
COG1CON1_RDBS_POSN                       equ 0007h
COG1CON1_RDBS_POSITION                   equ 0007h
COG1CON1_RDBS_SIZE                       equ 0001h
COG1CON1_RDBS_LENGTH                     equ 0001h
COG1CON1_RDBS_MASK                       equ 0080h
COG1CON1_G1POLA_POSN                     equ 0000h
COG1CON1_G1POLA_POSITION                 equ 0000h
COG1CON1_G1POLA_SIZE                     equ 0001h
COG1CON1_G1POLA_LENGTH                   equ 0001h
COG1CON1_G1POLA_MASK                     equ 0001h
COG1CON1_G1POLB_POSN                     equ 0001h
COG1CON1_G1POLB_POSITION                 equ 0001h
COG1CON1_G1POLB_SIZE                     equ 0001h
COG1CON1_G1POLB_LENGTH                   equ 0001h
COG1CON1_G1POLB_MASK                     equ 0002h
COG1CON1_G1POLC_POSN                     equ 0002h
COG1CON1_G1POLC_POSITION                 equ 0002h
COG1CON1_G1POLC_SIZE                     equ 0001h
COG1CON1_G1POLC_LENGTH                   equ 0001h
COG1CON1_G1POLC_MASK                     equ 0004h
COG1CON1_G1POLD_POSN                     equ 0003h
COG1CON1_G1POLD_POSITION                 equ 0003h
COG1CON1_G1POLD_SIZE                     equ 0001h
COG1CON1_G1POLD_LENGTH                   equ 0001h
COG1CON1_G1POLD_MASK                     equ 0008h
COG1CON1_G1FDBS_POSN                     equ 0006h
COG1CON1_G1FDBS_POSITION                 equ 0006h
COG1CON1_G1FDBS_SIZE                     equ 0001h
COG1CON1_G1FDBS_LENGTH                   equ 0001h
COG1CON1_G1FDBS_MASK                     equ 0040h
COG1CON1_G1RDBS_POSN                     equ 0007h
COG1CON1_G1RDBS_POSITION                 equ 0007h
COG1CON1_G1RDBS_SIZE                     equ 0001h
COG1CON1_G1RDBS_LENGTH                   equ 0001h
COG1CON1_G1RDBS_MASK                     equ 0080h

// Register: COG1RIS0
#define COG1RIS0 COG1RIS0
COG1RIS0                                 equ 0695h
// bitfield definitions
COG1RIS0_RIS0_POSN                       equ 0000h
COG1RIS0_RIS0_POSITION                   equ 0000h
COG1RIS0_RIS0_SIZE                       equ 0001h
COG1RIS0_RIS0_LENGTH                     equ 0001h
COG1RIS0_RIS0_MASK                       equ 0001h
COG1RIS0_RIS1_POSN                       equ 0001h
COG1RIS0_RIS1_POSITION                   equ 0001h
COG1RIS0_RIS1_SIZE                       equ 0001h
COG1RIS0_RIS1_LENGTH                     equ 0001h
COG1RIS0_RIS1_MASK                       equ 0002h
COG1RIS0_RIS2_POSN                       equ 0002h
COG1RIS0_RIS2_POSITION                   equ 0002h
COG1RIS0_RIS2_SIZE                       equ 0001h
COG1RIS0_RIS2_LENGTH                     equ 0001h
COG1RIS0_RIS2_MASK                       equ 0004h
COG1RIS0_RIS3_POSN                       equ 0003h
COG1RIS0_RIS3_POSITION                   equ 0003h
COG1RIS0_RIS3_SIZE                       equ 0001h
COG1RIS0_RIS3_LENGTH                     equ 0001h
COG1RIS0_RIS3_MASK                       equ 0008h
COG1RIS0_RIS4_POSN                       equ 0004h
COG1RIS0_RIS4_POSITION                   equ 0004h
COG1RIS0_RIS4_SIZE                       equ 0001h
COG1RIS0_RIS4_LENGTH                     equ 0001h
COG1RIS0_RIS4_MASK                       equ 0010h
COG1RIS0_RIS5_POSN                       equ 0005h
COG1RIS0_RIS5_POSITION                   equ 0005h
COG1RIS0_RIS5_SIZE                       equ 0001h
COG1RIS0_RIS5_LENGTH                     equ 0001h
COG1RIS0_RIS5_MASK                       equ 0020h
COG1RIS0_RIS6_POSN                       equ 0006h
COG1RIS0_RIS6_POSITION                   equ 0006h
COG1RIS0_RIS6_SIZE                       equ 0001h
COG1RIS0_RIS6_LENGTH                     equ 0001h
COG1RIS0_RIS6_MASK                       equ 0040h
COG1RIS0_RIS7_POSN                       equ 0007h
COG1RIS0_RIS7_POSITION                   equ 0007h
COG1RIS0_RIS7_SIZE                       equ 0001h
COG1RIS0_RIS7_LENGTH                     equ 0001h
COG1RIS0_RIS7_MASK                       equ 0080h
COG1RIS0_G1RIS0_POSN                     equ 0000h
COG1RIS0_G1RIS0_POSITION                 equ 0000h
COG1RIS0_G1RIS0_SIZE                     equ 0001h
COG1RIS0_G1RIS0_LENGTH                   equ 0001h
COG1RIS0_G1RIS0_MASK                     equ 0001h
COG1RIS0_G1RIS1_POSN                     equ 0001h
COG1RIS0_G1RIS1_POSITION                 equ 0001h
COG1RIS0_G1RIS1_SIZE                     equ 0001h
COG1RIS0_G1RIS1_LENGTH                   equ 0001h
COG1RIS0_G1RIS1_MASK                     equ 0002h
COG1RIS0_G1RIS2_POSN                     equ 0002h
COG1RIS0_G1RIS2_POSITION                 equ 0002h
COG1RIS0_G1RIS2_SIZE                     equ 0001h
COG1RIS0_G1RIS2_LENGTH                   equ 0001h
COG1RIS0_G1RIS2_MASK                     equ 0004h
COG1RIS0_G1RIS3_POSN                     equ 0003h
COG1RIS0_G1RIS3_POSITION                 equ 0003h
COG1RIS0_G1RIS3_SIZE                     equ 0001h
COG1RIS0_G1RIS3_LENGTH                   equ 0001h
COG1RIS0_G1RIS3_MASK                     equ 0008h
COG1RIS0_G1RIS4_POSN                     equ 0004h
COG1RIS0_G1RIS4_POSITION                 equ 0004h
COG1RIS0_G1RIS4_SIZE                     equ 0001h
COG1RIS0_G1RIS4_LENGTH                   equ 0001h
COG1RIS0_G1RIS4_MASK                     equ 0010h
COG1RIS0_G1RIS5_POSN                     equ 0005h
COG1RIS0_G1RIS5_POSITION                 equ 0005h
COG1RIS0_G1RIS5_SIZE                     equ 0001h
COG1RIS0_G1RIS5_LENGTH                   equ 0001h
COG1RIS0_G1RIS5_MASK                     equ 0020h
COG1RIS0_G1RIS6_POSN                     equ 0006h
COG1RIS0_G1RIS6_POSITION                 equ 0006h
COG1RIS0_G1RIS6_SIZE                     equ 0001h
COG1RIS0_G1RIS6_LENGTH                   equ 0001h
COG1RIS0_G1RIS6_MASK                     equ 0040h
COG1RIS0_G1RIS7_POSN                     equ 0007h
COG1RIS0_G1RIS7_POSITION                 equ 0007h
COG1RIS0_G1RIS7_SIZE                     equ 0001h
COG1RIS0_G1RIS7_LENGTH                   equ 0001h
COG1RIS0_G1RIS7_MASK                     equ 0080h

// Register: COG1RIS1
#define COG1RIS1 COG1RIS1
COG1RIS1                                 equ 0696h
// bitfield definitions
COG1RIS1_RIS8_POSN                       equ 0000h
COG1RIS1_RIS8_POSITION                   equ 0000h
COG1RIS1_RIS8_SIZE                       equ 0001h
COG1RIS1_RIS8_LENGTH                     equ 0001h
COG1RIS1_RIS8_MASK                       equ 0001h
COG1RIS1_RIS9_POSN                       equ 0001h
COG1RIS1_RIS9_POSITION                   equ 0001h
COG1RIS1_RIS9_SIZE                       equ 0001h
COG1RIS1_RIS9_LENGTH                     equ 0001h
COG1RIS1_RIS9_MASK                       equ 0002h
COG1RIS1_RIS10_POSN                      equ 0002h
COG1RIS1_RIS10_POSITION                  equ 0002h
COG1RIS1_RIS10_SIZE                      equ 0001h
COG1RIS1_RIS10_LENGTH                    equ 0001h
COG1RIS1_RIS10_MASK                      equ 0004h
COG1RIS1_RIS11_POSN                      equ 0003h
COG1RIS1_RIS11_POSITION                  equ 0003h
COG1RIS1_RIS11_SIZE                      equ 0001h
COG1RIS1_RIS11_LENGTH                    equ 0001h
COG1RIS1_RIS11_MASK                      equ 0008h
COG1RIS1_RIS12_POSN                      equ 0004h
COG1RIS1_RIS12_POSITION                  equ 0004h
COG1RIS1_RIS12_SIZE                      equ 0001h
COG1RIS1_RIS12_LENGTH                    equ 0001h
COG1RIS1_RIS12_MASK                      equ 0010h
COG1RIS1_RIS13_POSN                      equ 0005h
COG1RIS1_RIS13_POSITION                  equ 0005h
COG1RIS1_RIS13_SIZE                      equ 0001h
COG1RIS1_RIS13_LENGTH                    equ 0001h
COG1RIS1_RIS13_MASK                      equ 0020h
COG1RIS1_RIS14_POSN                      equ 0006h
COG1RIS1_RIS14_POSITION                  equ 0006h
COG1RIS1_RIS14_SIZE                      equ 0001h
COG1RIS1_RIS14_LENGTH                    equ 0001h
COG1RIS1_RIS14_MASK                      equ 0040h
COG1RIS1_RIS15_POSN                      equ 0007h
COG1RIS1_RIS15_POSITION                  equ 0007h
COG1RIS1_RIS15_SIZE                      equ 0001h
COG1RIS1_RIS15_LENGTH                    equ 0001h
COG1RIS1_RIS15_MASK                      equ 0080h
COG1RIS1_G1RIS8_POSN                     equ 0000h
COG1RIS1_G1RIS8_POSITION                 equ 0000h
COG1RIS1_G1RIS8_SIZE                     equ 0001h
COG1RIS1_G1RIS8_LENGTH                   equ 0001h
COG1RIS1_G1RIS8_MASK                     equ 0001h
COG1RIS1_G1RIS9_POSN                     equ 0001h
COG1RIS1_G1RIS9_POSITION                 equ 0001h
COG1RIS1_G1RIS9_SIZE                     equ 0001h
COG1RIS1_G1RIS9_LENGTH                   equ 0001h
COG1RIS1_G1RIS9_MASK                     equ 0002h
COG1RIS1_G1RIS10_POSN                    equ 0002h
COG1RIS1_G1RIS10_POSITION                equ 0002h
COG1RIS1_G1RIS10_SIZE                    equ 0001h
COG1RIS1_G1RIS10_LENGTH                  equ 0001h
COG1RIS1_G1RIS10_MASK                    equ 0004h
COG1RIS1_G1RIS11_POSN                    equ 0003h
COG1RIS1_G1RIS11_POSITION                equ 0003h
COG1RIS1_G1RIS11_SIZE                    equ 0001h
COG1RIS1_G1RIS11_LENGTH                  equ 0001h
COG1RIS1_G1RIS11_MASK                    equ 0008h
COG1RIS1_G1RIS12_POSN                    equ 0004h
COG1RIS1_G1RIS12_POSITION                equ 0004h
COG1RIS1_G1RIS12_SIZE                    equ 0001h
COG1RIS1_G1RIS12_LENGTH                  equ 0001h
COG1RIS1_G1RIS12_MASK                    equ 0010h
COG1RIS1_G1RIS13_POSN                    equ 0005h
COG1RIS1_G1RIS13_POSITION                equ 0005h
COG1RIS1_G1RIS13_SIZE                    equ 0001h
COG1RIS1_G1RIS13_LENGTH                  equ 0001h
COG1RIS1_G1RIS13_MASK                    equ 0020h
COG1RIS1_G1RIS14_POSN                    equ 0006h
COG1RIS1_G1RIS14_POSITION                equ 0006h
COG1RIS1_G1RIS14_SIZE                    equ 0001h
COG1RIS1_G1RIS14_LENGTH                  equ 0001h
COG1RIS1_G1RIS14_MASK                    equ 0040h
COG1RIS1_G1RIS15_POSN                    equ 0007h
COG1RIS1_G1RIS15_POSITION                equ 0007h
COG1RIS1_G1RIS15_SIZE                    equ 0001h
COG1RIS1_G1RIS15_LENGTH                  equ 0001h
COG1RIS1_G1RIS15_MASK                    equ 0080h

// Register: COG1RSIM0
#define COG1RSIM0 COG1RSIM0
COG1RSIM0                                equ 0697h
// bitfield definitions
COG1RSIM0_RSIM0_POSN                     equ 0000h
COG1RSIM0_RSIM0_POSITION                 equ 0000h
COG1RSIM0_RSIM0_SIZE                     equ 0001h
COG1RSIM0_RSIM0_LENGTH                   equ 0001h
COG1RSIM0_RSIM0_MASK                     equ 0001h
COG1RSIM0_RSIM1_POSN                     equ 0001h
COG1RSIM0_RSIM1_POSITION                 equ 0001h
COG1RSIM0_RSIM1_SIZE                     equ 0001h
COG1RSIM0_RSIM1_LENGTH                   equ 0001h
COG1RSIM0_RSIM1_MASK                     equ 0002h
COG1RSIM0_RSIM2_POSN                     equ 0002h
COG1RSIM0_RSIM2_POSITION                 equ 0002h
COG1RSIM0_RSIM2_SIZE                     equ 0001h
COG1RSIM0_RSIM2_LENGTH                   equ 0001h
COG1RSIM0_RSIM2_MASK                     equ 0004h
COG1RSIM0_RSIM3_POSN                     equ 0003h
COG1RSIM0_RSIM3_POSITION                 equ 0003h
COG1RSIM0_RSIM3_SIZE                     equ 0001h
COG1RSIM0_RSIM3_LENGTH                   equ 0001h
COG1RSIM0_RSIM3_MASK                     equ 0008h
COG1RSIM0_RSIM4_POSN                     equ 0004h
COG1RSIM0_RSIM4_POSITION                 equ 0004h
COG1RSIM0_RSIM4_SIZE                     equ 0001h
COG1RSIM0_RSIM4_LENGTH                   equ 0001h
COG1RSIM0_RSIM4_MASK                     equ 0010h
COG1RSIM0_RSIM5_POSN                     equ 0005h
COG1RSIM0_RSIM5_POSITION                 equ 0005h
COG1RSIM0_RSIM5_SIZE                     equ 0001h
COG1RSIM0_RSIM5_LENGTH                   equ 0001h
COG1RSIM0_RSIM5_MASK                     equ 0020h
COG1RSIM0_RSIM6_POSN                     equ 0006h
COG1RSIM0_RSIM6_POSITION                 equ 0006h
COG1RSIM0_RSIM6_SIZE                     equ 0001h
COG1RSIM0_RSIM6_LENGTH                   equ 0001h
COG1RSIM0_RSIM6_MASK                     equ 0040h
COG1RSIM0_RSIM7_POSN                     equ 0007h
COG1RSIM0_RSIM7_POSITION                 equ 0007h
COG1RSIM0_RSIM7_SIZE                     equ 0001h
COG1RSIM0_RSIM7_LENGTH                   equ 0001h
COG1RSIM0_RSIM7_MASK                     equ 0080h
COG1RSIM0_G1RSIM0_POSN                   equ 0000h
COG1RSIM0_G1RSIM0_POSITION               equ 0000h
COG1RSIM0_G1RSIM0_SIZE                   equ 0001h
COG1RSIM0_G1RSIM0_LENGTH                 equ 0001h
COG1RSIM0_G1RSIM0_MASK                   equ 0001h
COG1RSIM0_G1RSIM1_POSN                   equ 0001h
COG1RSIM0_G1RSIM1_POSITION               equ 0001h
COG1RSIM0_G1RSIM1_SIZE                   equ 0001h
COG1RSIM0_G1RSIM1_LENGTH                 equ 0001h
COG1RSIM0_G1RSIM1_MASK                   equ 0002h
COG1RSIM0_G1RSIM2_POSN                   equ 0002h
COG1RSIM0_G1RSIM2_POSITION               equ 0002h
COG1RSIM0_G1RSIM2_SIZE                   equ 0001h
COG1RSIM0_G1RSIM2_LENGTH                 equ 0001h
COG1RSIM0_G1RSIM2_MASK                   equ 0004h
COG1RSIM0_G1RSIM3_POSN                   equ 0003h
COG1RSIM0_G1RSIM3_POSITION               equ 0003h
COG1RSIM0_G1RSIM3_SIZE                   equ 0001h
COG1RSIM0_G1RSIM3_LENGTH                 equ 0001h
COG1RSIM0_G1RSIM3_MASK                   equ 0008h
COG1RSIM0_G1RSIM4_POSN                   equ 0004h
COG1RSIM0_G1RSIM4_POSITION               equ 0004h
COG1RSIM0_G1RSIM4_SIZE                   equ 0001h
COG1RSIM0_G1RSIM4_LENGTH                 equ 0001h
COG1RSIM0_G1RSIM4_MASK                   equ 0010h
COG1RSIM0_G1RSIM5_POSN                   equ 0005h
COG1RSIM0_G1RSIM5_POSITION               equ 0005h
COG1RSIM0_G1RSIM5_SIZE                   equ 0001h
COG1RSIM0_G1RSIM5_LENGTH                 equ 0001h
COG1RSIM0_G1RSIM5_MASK                   equ 0020h
COG1RSIM0_G1RSIM6_POSN                   equ 0006h
COG1RSIM0_G1RSIM6_POSITION               equ 0006h
COG1RSIM0_G1RSIM6_SIZE                   equ 0001h
COG1RSIM0_G1RSIM6_LENGTH                 equ 0001h
COG1RSIM0_G1RSIM6_MASK                   equ 0040h
COG1RSIM0_G1RSIM7_POSN                   equ 0007h
COG1RSIM0_G1RSIM7_POSITION               equ 0007h
COG1RSIM0_G1RSIM7_SIZE                   equ 0001h
COG1RSIM0_G1RSIM7_LENGTH                 equ 0001h
COG1RSIM0_G1RSIM7_MASK                   equ 0080h

// Register: COG1RSIM1
#define COG1RSIM1 COG1RSIM1
COG1RSIM1                                equ 0698h
// bitfield definitions
COG1RSIM1_RSIM8_POSN                     equ 0000h
COG1RSIM1_RSIM8_POSITION                 equ 0000h
COG1RSIM1_RSIM8_SIZE                     equ 0001h
COG1RSIM1_RSIM8_LENGTH                   equ 0001h
COG1RSIM1_RSIM8_MASK                     equ 0001h
COG1RSIM1_RSIM9_POSN                     equ 0001h
COG1RSIM1_RSIM9_POSITION                 equ 0001h
COG1RSIM1_RSIM9_SIZE                     equ 0001h
COG1RSIM1_RSIM9_LENGTH                   equ 0001h
COG1RSIM1_RSIM9_MASK                     equ 0002h
COG1RSIM1_RSIM10_POSN                    equ 0002h
COG1RSIM1_RSIM10_POSITION                equ 0002h
COG1RSIM1_RSIM10_SIZE                    equ 0001h
COG1RSIM1_RSIM10_LENGTH                  equ 0001h
COG1RSIM1_RSIM10_MASK                    equ 0004h
COG1RSIM1_RSIM11_POSN                    equ 0003h
COG1RSIM1_RSIM11_POSITION                equ 0003h
COG1RSIM1_RSIM11_SIZE                    equ 0001h
COG1RSIM1_RSIM11_LENGTH                  equ 0001h
COG1RSIM1_RSIM11_MASK                    equ 0008h
COG1RSIM1_RSIM12_POSN                    equ 0004h
COG1RSIM1_RSIM12_POSITION                equ 0004h
COG1RSIM1_RSIM12_SIZE                    equ 0001h
COG1RSIM1_RSIM12_LENGTH                  equ 0001h
COG1RSIM1_RSIM12_MASK                    equ 0010h
COG1RSIM1_RSIM13_POSN                    equ 0005h
COG1RSIM1_RSIM13_POSITION                equ 0005h
COG1RSIM1_RSIM13_SIZE                    equ 0001h
COG1RSIM1_RSIM13_LENGTH                  equ 0001h
COG1RSIM1_RSIM13_MASK                    equ 0020h
COG1RSIM1_RSIM14_POSN                    equ 0006h
COG1RSIM1_RSIM14_POSITION                equ 0006h
COG1RSIM1_RSIM14_SIZE                    equ 0001h
COG1RSIM1_RSIM14_LENGTH                  equ 0001h
COG1RSIM1_RSIM14_MASK                    equ 0040h
COG1RSIM1_RSIM15_POSN                    equ 0007h
COG1RSIM1_RSIM15_POSITION                equ 0007h
COG1RSIM1_RSIM15_SIZE                    equ 0001h
COG1RSIM1_RSIM15_LENGTH                  equ 0001h
COG1RSIM1_RSIM15_MASK                    equ 0080h
COG1RSIM1_G1RSIM8_POSN                   equ 0000h
COG1RSIM1_G1RSIM8_POSITION               equ 0000h
COG1RSIM1_G1RSIM8_SIZE                   equ 0001h
COG1RSIM1_G1RSIM8_LENGTH                 equ 0001h
COG1RSIM1_G1RSIM8_MASK                   equ 0001h
COG1RSIM1_G1RSIM9_POSN                   equ 0001h
COG1RSIM1_G1RSIM9_POSITION               equ 0001h
COG1RSIM1_G1RSIM9_SIZE                   equ 0001h
COG1RSIM1_G1RSIM9_LENGTH                 equ 0001h
COG1RSIM1_G1RSIM9_MASK                   equ 0002h
COG1RSIM1_G1RSIM10_POSN                  equ 0002h
COG1RSIM1_G1RSIM10_POSITION              equ 0002h
COG1RSIM1_G1RSIM10_SIZE                  equ 0001h
COG1RSIM1_G1RSIM10_LENGTH                equ 0001h
COG1RSIM1_G1RSIM10_MASK                  equ 0004h
COG1RSIM1_G1RSIM11_POSN                  equ 0003h
COG1RSIM1_G1RSIM11_POSITION              equ 0003h
COG1RSIM1_G1RSIM11_SIZE                  equ 0001h
COG1RSIM1_G1RSIM11_LENGTH                equ 0001h
COG1RSIM1_G1RSIM11_MASK                  equ 0008h
COG1RSIM1_G1RSIM12_POSN                  equ 0004h
COG1RSIM1_G1RSIM12_POSITION              equ 0004h
COG1RSIM1_G1RSIM12_SIZE                  equ 0001h
COG1RSIM1_G1RSIM12_LENGTH                equ 0001h
COG1RSIM1_G1RSIM12_MASK                  equ 0010h
COG1RSIM1_G1RSIM13_POSN                  equ 0005h
COG1RSIM1_G1RSIM13_POSITION              equ 0005h
COG1RSIM1_G1RSIM13_SIZE                  equ 0001h
COG1RSIM1_G1RSIM13_LENGTH                equ 0001h
COG1RSIM1_G1RSIM13_MASK                  equ 0020h
COG1RSIM1_G1RSIM14_POSN                  equ 0006h
COG1RSIM1_G1RSIM14_POSITION              equ 0006h
COG1RSIM1_G1RSIM14_SIZE                  equ 0001h
COG1RSIM1_G1RSIM14_LENGTH                equ 0001h
COG1RSIM1_G1RSIM14_MASK                  equ 0040h
COG1RSIM1_G1RSIM15_POSN                  equ 0007h
COG1RSIM1_G1RSIM15_POSITION              equ 0007h
COG1RSIM1_G1RSIM15_SIZE                  equ 0001h
COG1RSIM1_G1RSIM15_LENGTH                equ 0001h
COG1RSIM1_G1RSIM15_MASK                  equ 0080h

// Register: COG1FIS0
#define COG1FIS0 COG1FIS0
COG1FIS0                                 equ 0699h
// bitfield definitions
COG1FIS0_FIS0_POSN                       equ 0000h
COG1FIS0_FIS0_POSITION                   equ 0000h
COG1FIS0_FIS0_SIZE                       equ 0001h
COG1FIS0_FIS0_LENGTH                     equ 0001h
COG1FIS0_FIS0_MASK                       equ 0001h
COG1FIS0_FIS1_POSN                       equ 0001h
COG1FIS0_FIS1_POSITION                   equ 0001h
COG1FIS0_FIS1_SIZE                       equ 0001h
COG1FIS0_FIS1_LENGTH                     equ 0001h
COG1FIS0_FIS1_MASK                       equ 0002h
COG1FIS0_FIS2_POSN                       equ 0002h
COG1FIS0_FIS2_POSITION                   equ 0002h
COG1FIS0_FIS2_SIZE                       equ 0001h
COG1FIS0_FIS2_LENGTH                     equ 0001h
COG1FIS0_FIS2_MASK                       equ 0004h
COG1FIS0_FIS3_POSN                       equ 0003h
COG1FIS0_FIS3_POSITION                   equ 0003h
COG1FIS0_FIS3_SIZE                       equ 0001h
COG1FIS0_FIS3_LENGTH                     equ 0001h
COG1FIS0_FIS3_MASK                       equ 0008h
COG1FIS0_FIS4_POSN                       equ 0004h
COG1FIS0_FIS4_POSITION                   equ 0004h
COG1FIS0_FIS4_SIZE                       equ 0001h
COG1FIS0_FIS4_LENGTH                     equ 0001h
COG1FIS0_FIS4_MASK                       equ 0010h
COG1FIS0_FIS5_POSN                       equ 0005h
COG1FIS0_FIS5_POSITION                   equ 0005h
COG1FIS0_FIS5_SIZE                       equ 0001h
COG1FIS0_FIS5_LENGTH                     equ 0001h
COG1FIS0_FIS5_MASK                       equ 0020h
COG1FIS0_FIS6_POSN                       equ 0006h
COG1FIS0_FIS6_POSITION                   equ 0006h
COG1FIS0_FIS6_SIZE                       equ 0001h
COG1FIS0_FIS6_LENGTH                     equ 0001h
COG1FIS0_FIS6_MASK                       equ 0040h
COG1FIS0_FIS7_POSN                       equ 0007h
COG1FIS0_FIS7_POSITION                   equ 0007h
COG1FIS0_FIS7_SIZE                       equ 0001h
COG1FIS0_FIS7_LENGTH                     equ 0001h
COG1FIS0_FIS7_MASK                       equ 0080h
COG1FIS0_G1FIS0_POSN                     equ 0000h
COG1FIS0_G1FIS0_POSITION                 equ 0000h
COG1FIS0_G1FIS0_SIZE                     equ 0001h
COG1FIS0_G1FIS0_LENGTH                   equ 0001h
COG1FIS0_G1FIS0_MASK                     equ 0001h
COG1FIS0_G1FIS1_POSN                     equ 0001h
COG1FIS0_G1FIS1_POSITION                 equ 0001h
COG1FIS0_G1FIS1_SIZE                     equ 0001h
COG1FIS0_G1FIS1_LENGTH                   equ 0001h
COG1FIS0_G1FIS1_MASK                     equ 0002h
COG1FIS0_G1FIS2_POSN                     equ 0002h
COG1FIS0_G1FIS2_POSITION                 equ 0002h
COG1FIS0_G1FIS2_SIZE                     equ 0001h
COG1FIS0_G1FIS2_LENGTH                   equ 0001h
COG1FIS0_G1FIS2_MASK                     equ 0004h
COG1FIS0_G1FIS3_POSN                     equ 0003h
COG1FIS0_G1FIS3_POSITION                 equ 0003h
COG1FIS0_G1FIS3_SIZE                     equ 0001h
COG1FIS0_G1FIS3_LENGTH                   equ 0001h
COG1FIS0_G1FIS3_MASK                     equ 0008h
COG1FIS0_G1FIS4_POSN                     equ 0004h
COG1FIS0_G1FIS4_POSITION                 equ 0004h
COG1FIS0_G1FIS4_SIZE                     equ 0001h
COG1FIS0_G1FIS4_LENGTH                   equ 0001h
COG1FIS0_G1FIS4_MASK                     equ 0010h
COG1FIS0_G1FIS5_POSN                     equ 0005h
COG1FIS0_G1FIS5_POSITION                 equ 0005h
COG1FIS0_G1FIS5_SIZE                     equ 0001h
COG1FIS0_G1FIS5_LENGTH                   equ 0001h
COG1FIS0_G1FIS5_MASK                     equ 0020h
COG1FIS0_G1FIS6_POSN                     equ 0006h
COG1FIS0_G1FIS6_POSITION                 equ 0006h
COG1FIS0_G1FIS6_SIZE                     equ 0001h
COG1FIS0_G1FIS6_LENGTH                   equ 0001h
COG1FIS0_G1FIS6_MASK                     equ 0040h
COG1FIS0_G1FIS7_POSN                     equ 0007h
COG1FIS0_G1FIS7_POSITION                 equ 0007h
COG1FIS0_G1FIS7_SIZE                     equ 0001h
COG1FIS0_G1FIS7_LENGTH                   equ 0001h
COG1FIS0_G1FIS7_MASK                     equ 0080h

// Register: COG1FIS1
#define COG1FIS1 COG1FIS1
COG1FIS1                                 equ 069Ah
// bitfield definitions
COG1FIS1_FIS8_POSN                       equ 0000h
COG1FIS1_FIS8_POSITION                   equ 0000h
COG1FIS1_FIS8_SIZE                       equ 0001h
COG1FIS1_FIS8_LENGTH                     equ 0001h
COG1FIS1_FIS8_MASK                       equ 0001h
COG1FIS1_FIS9_POSN                       equ 0001h
COG1FIS1_FIS9_POSITION                   equ 0001h
COG1FIS1_FIS9_SIZE                       equ 0001h
COG1FIS1_FIS9_LENGTH                     equ 0001h
COG1FIS1_FIS9_MASK                       equ 0002h
COG1FIS1_FIS10_POSN                      equ 0002h
COG1FIS1_FIS10_POSITION                  equ 0002h
COG1FIS1_FIS10_SIZE                      equ 0001h
COG1FIS1_FIS10_LENGTH                    equ 0001h
COG1FIS1_FIS10_MASK                      equ 0004h
COG1FIS1_FIS11_POSN                      equ 0003h
COG1FIS1_FIS11_POSITION                  equ 0003h
COG1FIS1_FIS11_SIZE                      equ 0001h
COG1FIS1_FIS11_LENGTH                    equ 0001h
COG1FIS1_FIS11_MASK                      equ 0008h
COG1FIS1_FIS12_POSN                      equ 0004h
COG1FIS1_FIS12_POSITION                  equ 0004h
COG1FIS1_FIS12_SIZE                      equ 0001h
COG1FIS1_FIS12_LENGTH                    equ 0001h
COG1FIS1_FIS12_MASK                      equ 0010h
COG1FIS1_FIS13_POSN                      equ 0005h
COG1FIS1_FIS13_POSITION                  equ 0005h
COG1FIS1_FIS13_SIZE                      equ 0001h
COG1FIS1_FIS13_LENGTH                    equ 0001h
COG1FIS1_FIS13_MASK                      equ 0020h
COG1FIS1_FIS14_POSN                      equ 0006h
COG1FIS1_FIS14_POSITION                  equ 0006h
COG1FIS1_FIS14_SIZE                      equ 0001h
COG1FIS1_FIS14_LENGTH                    equ 0001h
COG1FIS1_FIS14_MASK                      equ 0040h
COG1FIS1_FIS15_POSN                      equ 0007h
COG1FIS1_FIS15_POSITION                  equ 0007h
COG1FIS1_FIS15_SIZE                      equ 0001h
COG1FIS1_FIS15_LENGTH                    equ 0001h
COG1FIS1_FIS15_MASK                      equ 0080h
COG1FIS1_G1FIS8_POSN                     equ 0000h
COG1FIS1_G1FIS8_POSITION                 equ 0000h
COG1FIS1_G1FIS8_SIZE                     equ 0001h
COG1FIS1_G1FIS8_LENGTH                   equ 0001h
COG1FIS1_G1FIS8_MASK                     equ 0001h
COG1FIS1_G1FIS9_POSN                     equ 0001h
COG1FIS1_G1FIS9_POSITION                 equ 0001h
COG1FIS1_G1FIS9_SIZE                     equ 0001h
COG1FIS1_G1FIS9_LENGTH                   equ 0001h
COG1FIS1_G1FIS9_MASK                     equ 0002h
COG1FIS1_G1FIS10_POSN                    equ 0002h
COG1FIS1_G1FIS10_POSITION                equ 0002h
COG1FIS1_G1FIS10_SIZE                    equ 0001h
COG1FIS1_G1FIS10_LENGTH                  equ 0001h
COG1FIS1_G1FIS10_MASK                    equ 0004h
COG1FIS1_G1FIS11_POSN                    equ 0003h
COG1FIS1_G1FIS11_POSITION                equ 0003h
COG1FIS1_G1FIS11_SIZE                    equ 0001h
COG1FIS1_G1FIS11_LENGTH                  equ 0001h
COG1FIS1_G1FIS11_MASK                    equ 0008h
COG1FIS1_G1FIS12_POSN                    equ 0004h
COG1FIS1_G1FIS12_POSITION                equ 0004h
COG1FIS1_G1FIS12_SIZE                    equ 0001h
COG1FIS1_G1FIS12_LENGTH                  equ 0001h
COG1FIS1_G1FIS12_MASK                    equ 0010h
COG1FIS1_G1FIS13_POSN                    equ 0005h
COG1FIS1_G1FIS13_POSITION                equ 0005h
COG1FIS1_G1FIS13_SIZE                    equ 0001h
COG1FIS1_G1FIS13_LENGTH                  equ 0001h
COG1FIS1_G1FIS13_MASK                    equ 0020h
COG1FIS1_G1FIS14_POSN                    equ 0006h
COG1FIS1_G1FIS14_POSITION                equ 0006h
COG1FIS1_G1FIS14_SIZE                    equ 0001h
COG1FIS1_G1FIS14_LENGTH                  equ 0001h
COG1FIS1_G1FIS14_MASK                    equ 0040h
COG1FIS1_G1FIS15_POSN                    equ 0007h
COG1FIS1_G1FIS15_POSITION                equ 0007h
COG1FIS1_G1FIS15_SIZE                    equ 0001h
COG1FIS1_G1FIS15_LENGTH                  equ 0001h
COG1FIS1_G1FIS15_MASK                    equ 0080h

// Register: COG1FSIM0
#define COG1FSIM0 COG1FSIM0
COG1FSIM0                                equ 069Bh
// bitfield definitions
COG1FSIM0_FSIM0_POSN                     equ 0000h
COG1FSIM0_FSIM0_POSITION                 equ 0000h
COG1FSIM0_FSIM0_SIZE                     equ 0001h
COG1FSIM0_FSIM0_LENGTH                   equ 0001h
COG1FSIM0_FSIM0_MASK                     equ 0001h
COG1FSIM0_FSIM1_POSN                     equ 0001h
COG1FSIM0_FSIM1_POSITION                 equ 0001h
COG1FSIM0_FSIM1_SIZE                     equ 0001h
COG1FSIM0_FSIM1_LENGTH                   equ 0001h
COG1FSIM0_FSIM1_MASK                     equ 0002h
COG1FSIM0_FSIM2_POSN                     equ 0002h
COG1FSIM0_FSIM2_POSITION                 equ 0002h
COG1FSIM0_FSIM2_SIZE                     equ 0001h
COG1FSIM0_FSIM2_LENGTH                   equ 0001h
COG1FSIM0_FSIM2_MASK                     equ 0004h
COG1FSIM0_FSIM3_POSN                     equ 0003h
COG1FSIM0_FSIM3_POSITION                 equ 0003h
COG1FSIM0_FSIM3_SIZE                     equ 0001h
COG1FSIM0_FSIM3_LENGTH                   equ 0001h
COG1FSIM0_FSIM3_MASK                     equ 0008h
COG1FSIM0_FSIM4_POSN                     equ 0004h
COG1FSIM0_FSIM4_POSITION                 equ 0004h
COG1FSIM0_FSIM4_SIZE                     equ 0001h
COG1FSIM0_FSIM4_LENGTH                   equ 0001h
COG1FSIM0_FSIM4_MASK                     equ 0010h
COG1FSIM0_FSIM5_POSN                     equ 0005h
COG1FSIM0_FSIM5_POSITION                 equ 0005h
COG1FSIM0_FSIM5_SIZE                     equ 0001h
COG1FSIM0_FSIM5_LENGTH                   equ 0001h
COG1FSIM0_FSIM5_MASK                     equ 0020h
COG1FSIM0_FSIM6_POSN                     equ 0006h
COG1FSIM0_FSIM6_POSITION                 equ 0006h
COG1FSIM0_FSIM6_SIZE                     equ 0001h
COG1FSIM0_FSIM6_LENGTH                   equ 0001h
COG1FSIM0_FSIM6_MASK                     equ 0040h
COG1FSIM0_FSIM7_POSN                     equ 0007h
COG1FSIM0_FSIM7_POSITION                 equ 0007h
COG1FSIM0_FSIM7_SIZE                     equ 0001h
COG1FSIM0_FSIM7_LENGTH                   equ 0001h
COG1FSIM0_FSIM7_MASK                     equ 0080h
COG1FSIM0_G1FSIM0_POSN                   equ 0000h
COG1FSIM0_G1FSIM0_POSITION               equ 0000h
COG1FSIM0_G1FSIM0_SIZE                   equ 0001h
COG1FSIM0_G1FSIM0_LENGTH                 equ 0001h
COG1FSIM0_G1FSIM0_MASK                   equ 0001h
COG1FSIM0_G1FSIM1_POSN                   equ 0001h
COG1FSIM0_G1FSIM1_POSITION               equ 0001h
COG1FSIM0_G1FSIM1_SIZE                   equ 0001h
COG1FSIM0_G1FSIM1_LENGTH                 equ 0001h
COG1FSIM0_G1FSIM1_MASK                   equ 0002h
COG1FSIM0_G1FSIM2_POSN                   equ 0002h
COG1FSIM0_G1FSIM2_POSITION               equ 0002h
COG1FSIM0_G1FSIM2_SIZE                   equ 0001h
COG1FSIM0_G1FSIM2_LENGTH                 equ 0001h
COG1FSIM0_G1FSIM2_MASK                   equ 0004h
COG1FSIM0_G1FSIM3_POSN                   equ 0003h
COG1FSIM0_G1FSIM3_POSITION               equ 0003h
COG1FSIM0_G1FSIM3_SIZE                   equ 0001h
COG1FSIM0_G1FSIM3_LENGTH                 equ 0001h
COG1FSIM0_G1FSIM3_MASK                   equ 0008h
COG1FSIM0_G1FSIM4_POSN                   equ 0004h
COG1FSIM0_G1FSIM4_POSITION               equ 0004h
COG1FSIM0_G1FSIM4_SIZE                   equ 0001h
COG1FSIM0_G1FSIM4_LENGTH                 equ 0001h
COG1FSIM0_G1FSIM4_MASK                   equ 0010h
COG1FSIM0_G1FSIM5_POSN                   equ 0005h
COG1FSIM0_G1FSIM5_POSITION               equ 0005h
COG1FSIM0_G1FSIM5_SIZE                   equ 0001h
COG1FSIM0_G1FSIM5_LENGTH                 equ 0001h
COG1FSIM0_G1FSIM5_MASK                   equ 0020h
COG1FSIM0_G1FSIM6_POSN                   equ 0006h
COG1FSIM0_G1FSIM6_POSITION               equ 0006h
COG1FSIM0_G1FSIM6_SIZE                   equ 0001h
COG1FSIM0_G1FSIM6_LENGTH                 equ 0001h
COG1FSIM0_G1FSIM6_MASK                   equ 0040h
COG1FSIM0_G1FSIM7_POSN                   equ 0007h
COG1FSIM0_G1FSIM7_POSITION               equ 0007h
COG1FSIM0_G1FSIM7_SIZE                   equ 0001h
COG1FSIM0_G1FSIM7_LENGTH                 equ 0001h
COG1FSIM0_G1FSIM7_MASK                   equ 0080h

// Register: COG1FSIM1
#define COG1FSIM1 COG1FSIM1
COG1FSIM1                                equ 069Ch
// bitfield definitions
COG1FSIM1_FSIM8_POSN                     equ 0000h
COG1FSIM1_FSIM8_POSITION                 equ 0000h
COG1FSIM1_FSIM8_SIZE                     equ 0001h
COG1FSIM1_FSIM8_LENGTH                   equ 0001h
COG1FSIM1_FSIM8_MASK                     equ 0001h
COG1FSIM1_FSIM9_POSN                     equ 0001h
COG1FSIM1_FSIM9_POSITION                 equ 0001h
COG1FSIM1_FSIM9_SIZE                     equ 0001h
COG1FSIM1_FSIM9_LENGTH                   equ 0001h
COG1FSIM1_FSIM9_MASK                     equ 0002h
COG1FSIM1_FSIM10_POSN                    equ 0002h
COG1FSIM1_FSIM10_POSITION                equ 0002h
COG1FSIM1_FSIM10_SIZE                    equ 0001h
COG1FSIM1_FSIM10_LENGTH                  equ 0001h
COG1FSIM1_FSIM10_MASK                    equ 0004h
COG1FSIM1_FSIM11_POSN                    equ 0003h
COG1FSIM1_FSIM11_POSITION                equ 0003h
COG1FSIM1_FSIM11_SIZE                    equ 0001h
COG1FSIM1_FSIM11_LENGTH                  equ 0001h
COG1FSIM1_FSIM11_MASK                    equ 0008h
COG1FSIM1_FSIM12_POSN                    equ 0004h
COG1FSIM1_FSIM12_POSITION                equ 0004h
COG1FSIM1_FSIM12_SIZE                    equ 0001h
COG1FSIM1_FSIM12_LENGTH                  equ 0001h
COG1FSIM1_FSIM12_MASK                    equ 0010h
COG1FSIM1_FSIM13_POSN                    equ 0005h
COG1FSIM1_FSIM13_POSITION                equ 0005h
COG1FSIM1_FSIM13_SIZE                    equ 0001h
COG1FSIM1_FSIM13_LENGTH                  equ 0001h
COG1FSIM1_FSIM13_MASK                    equ 0020h
COG1FSIM1_FSIM14_POSN                    equ 0006h
COG1FSIM1_FSIM14_POSITION                equ 0006h
COG1FSIM1_FSIM14_SIZE                    equ 0001h
COG1FSIM1_FSIM14_LENGTH                  equ 0001h
COG1FSIM1_FSIM14_MASK                    equ 0040h
COG1FSIM1_FSIM15_POSN                    equ 0007h
COG1FSIM1_FSIM15_POSITION                equ 0007h
COG1FSIM1_FSIM15_SIZE                    equ 0001h
COG1FSIM1_FSIM15_LENGTH                  equ 0001h
COG1FSIM1_FSIM15_MASK                    equ 0080h
COG1FSIM1_G1FSIM8_POSN                   equ 0000h
COG1FSIM1_G1FSIM8_POSITION               equ 0000h
COG1FSIM1_G1FSIM8_SIZE                   equ 0001h
COG1FSIM1_G1FSIM8_LENGTH                 equ 0001h
COG1FSIM1_G1FSIM8_MASK                   equ 0001h
COG1FSIM1_G1FSIM9_POSN                   equ 0001h
COG1FSIM1_G1FSIM9_POSITION               equ 0001h
COG1FSIM1_G1FSIM9_SIZE                   equ 0001h
COG1FSIM1_G1FSIM9_LENGTH                 equ 0001h
COG1FSIM1_G1FSIM9_MASK                   equ 0002h
COG1FSIM1_G1FSIM10_POSN                  equ 0002h
COG1FSIM1_G1FSIM10_POSITION              equ 0002h
COG1FSIM1_G1FSIM10_SIZE                  equ 0001h
COG1FSIM1_G1FSIM10_LENGTH                equ 0001h
COG1FSIM1_G1FSIM10_MASK                  equ 0004h
COG1FSIM1_G1FSIM11_POSN                  equ 0003h
COG1FSIM1_G1FSIM11_POSITION              equ 0003h
COG1FSIM1_G1FSIM11_SIZE                  equ 0001h
COG1FSIM1_G1FSIM11_LENGTH                equ 0001h
COG1FSIM1_G1FSIM11_MASK                  equ 0008h
COG1FSIM1_G1FSIM12_POSN                  equ 0004h
COG1FSIM1_G1FSIM12_POSITION              equ 0004h
COG1FSIM1_G1FSIM12_SIZE                  equ 0001h
COG1FSIM1_G1FSIM12_LENGTH                equ 0001h
COG1FSIM1_G1FSIM12_MASK                  equ 0010h
COG1FSIM1_G1FSIM13_POSN                  equ 0005h
COG1FSIM1_G1FSIM13_POSITION              equ 0005h
COG1FSIM1_G1FSIM13_SIZE                  equ 0001h
COG1FSIM1_G1FSIM13_LENGTH                equ 0001h
COG1FSIM1_G1FSIM13_MASK                  equ 0020h
COG1FSIM1_G1FSIM14_POSN                  equ 0006h
COG1FSIM1_G1FSIM14_POSITION              equ 0006h
COG1FSIM1_G1FSIM14_SIZE                  equ 0001h
COG1FSIM1_G1FSIM14_LENGTH                equ 0001h
COG1FSIM1_G1FSIM14_MASK                  equ 0040h
COG1FSIM1_G1FSIM15_POSN                  equ 0007h
COG1FSIM1_G1FSIM15_POSITION              equ 0007h
COG1FSIM1_G1FSIM15_SIZE                  equ 0001h
COG1FSIM1_G1FSIM15_LENGTH                equ 0001h
COG1FSIM1_G1FSIM15_MASK                  equ 0080h

// Register: COG1ASD0
#define COG1ASD0 COG1ASD0
COG1ASD0                                 equ 069Dh
// bitfield definitions
COG1ASD0_ASDAC_POSN                      equ 0002h
COG1ASD0_ASDAC_POSITION                  equ 0002h
COG1ASD0_ASDAC_SIZE                      equ 0002h
COG1ASD0_ASDAC_LENGTH                    equ 0002h
COG1ASD0_ASDAC_MASK                      equ 000Ch
COG1ASD0_ASDBD_POSN                      equ 0004h
COG1ASD0_ASDBD_POSITION                  equ 0004h
COG1ASD0_ASDBD_SIZE                      equ 0002h
COG1ASD0_ASDBD_LENGTH                    equ 0002h
COG1ASD0_ASDBD_MASK                      equ 0030h
COG1ASD0_ASREN_POSN                      equ 0006h
COG1ASD0_ASREN_POSITION                  equ 0006h
COG1ASD0_ASREN_SIZE                      equ 0001h
COG1ASD0_ASREN_LENGTH                    equ 0001h
COG1ASD0_ASREN_MASK                      equ 0040h
COG1ASD0_ASE_POSN                        equ 0007h
COG1ASD0_ASE_POSITION                    equ 0007h
COG1ASD0_ASE_SIZE                        equ 0001h
COG1ASD0_ASE_LENGTH                      equ 0001h
COG1ASD0_ASE_MASK                        equ 0080h
COG1ASD0_ASDAC0_POSN                     equ 0002h
COG1ASD0_ASDAC0_POSITION                 equ 0002h
COG1ASD0_ASDAC0_SIZE                     equ 0001h
COG1ASD0_ASDAC0_LENGTH                   equ 0001h
COG1ASD0_ASDAC0_MASK                     equ 0004h
COG1ASD0_ASDAC1_POSN                     equ 0003h
COG1ASD0_ASDAC1_POSITION                 equ 0003h
COG1ASD0_ASDAC1_SIZE                     equ 0001h
COG1ASD0_ASDAC1_LENGTH                   equ 0001h
COG1ASD0_ASDAC1_MASK                     equ 0008h
COG1ASD0_ASDBD0_POSN                     equ 0004h
COG1ASD0_ASDBD0_POSITION                 equ 0004h
COG1ASD0_ASDBD0_SIZE                     equ 0001h
COG1ASD0_ASDBD0_LENGTH                   equ 0001h
COG1ASD0_ASDBD0_MASK                     equ 0010h
COG1ASD0_ASDBD1_POSN                     equ 0005h
COG1ASD0_ASDBD1_POSITION                 equ 0005h
COG1ASD0_ASDBD1_SIZE                     equ 0001h
COG1ASD0_ASDBD1_LENGTH                   equ 0001h
COG1ASD0_ASDBD1_MASK                     equ 0020h
COG1ASD0_ARSEN_POSN                      equ 0006h
COG1ASD0_ARSEN_POSITION                  equ 0006h
COG1ASD0_ARSEN_SIZE                      equ 0001h
COG1ASD0_ARSEN_LENGTH                    equ 0001h
COG1ASD0_ARSEN_MASK                      equ 0040h
COG1ASD0_G1ASDAC_POSN                    equ 0002h
COG1ASD0_G1ASDAC_POSITION                equ 0002h
COG1ASD0_G1ASDAC_SIZE                    equ 0002h
COG1ASD0_G1ASDAC_LENGTH                  equ 0002h
COG1ASD0_G1ASDAC_MASK                    equ 000Ch
COG1ASD0_G1ASDBD_POSN                    equ 0004h
COG1ASD0_G1ASDBD_POSITION                equ 0004h
COG1ASD0_G1ASDBD_SIZE                    equ 0002h
COG1ASD0_G1ASDBD_LENGTH                  equ 0002h
COG1ASD0_G1ASDBD_MASK                    equ 0030h
COG1ASD0_G1ARSEN_POSN                    equ 0006h
COG1ASD0_G1ARSEN_POSITION                equ 0006h
COG1ASD0_G1ARSEN_SIZE                    equ 0001h
COG1ASD0_G1ARSEN_LENGTH                  equ 0001h
COG1ASD0_G1ARSEN_MASK                    equ 0040h
COG1ASD0_G1ASE_POSN                      equ 0007h
COG1ASD0_G1ASE_POSITION                  equ 0007h
COG1ASD0_G1ASE_SIZE                      equ 0001h
COG1ASD0_G1ASE_LENGTH                    equ 0001h
COG1ASD0_G1ASE_MASK                      equ 0080h
COG1ASD0_G1ASDAC0_POSN                   equ 0002h
COG1ASD0_G1ASDAC0_POSITION               equ 0002h
COG1ASD0_G1ASDAC0_SIZE                   equ 0001h
COG1ASD0_G1ASDAC0_LENGTH                 equ 0001h
COG1ASD0_G1ASDAC0_MASK                   equ 0004h
COG1ASD0_G1ASDAC1_POSN                   equ 0003h
COG1ASD0_G1ASDAC1_POSITION               equ 0003h
COG1ASD0_G1ASDAC1_SIZE                   equ 0001h
COG1ASD0_G1ASDAC1_LENGTH                 equ 0001h
COG1ASD0_G1ASDAC1_MASK                   equ 0008h
COG1ASD0_G1ASDBD0_POSN                   equ 0004h
COG1ASD0_G1ASDBD0_POSITION               equ 0004h
COG1ASD0_G1ASDBD0_SIZE                   equ 0001h
COG1ASD0_G1ASDBD0_LENGTH                 equ 0001h
COG1ASD0_G1ASDBD0_MASK                   equ 0010h
COG1ASD0_G1ASDBD1_POSN                   equ 0005h
COG1ASD0_G1ASDBD1_POSITION               equ 0005h
COG1ASD0_G1ASDBD1_SIZE                   equ 0001h
COG1ASD0_G1ASDBD1_LENGTH                 equ 0001h
COG1ASD0_G1ASDBD1_MASK                   equ 0020h
COG1ASD0_G1ASREN_POSN                    equ 0006h
COG1ASD0_G1ASREN_POSITION                equ 0006h
COG1ASD0_G1ASREN_SIZE                    equ 0001h
COG1ASD0_G1ASREN_LENGTH                  equ 0001h
COG1ASD0_G1ASREN_MASK                    equ 0040h

// Register: COG1ASD1
#define COG1ASD1 COG1ASD1
COG1ASD1                                 equ 069Eh
// bitfield definitions
COG1ASD1_AS0E_POSN                       equ 0000h
COG1ASD1_AS0E_POSITION                   equ 0000h
COG1ASD1_AS0E_SIZE                       equ 0001h
COG1ASD1_AS0E_LENGTH                     equ 0001h
COG1ASD1_AS0E_MASK                       equ 0001h
COG1ASD1_AS1E_POSN                       equ 0001h
COG1ASD1_AS1E_POSITION                   equ 0001h
COG1ASD1_AS1E_SIZE                       equ 0001h
COG1ASD1_AS1E_LENGTH                     equ 0001h
COG1ASD1_AS1E_MASK                       equ 0002h
COG1ASD1_AS2E_POSN                       equ 0002h
COG1ASD1_AS2E_POSITION                   equ 0002h
COG1ASD1_AS2E_SIZE                       equ 0001h
COG1ASD1_AS2E_LENGTH                     equ 0001h
COG1ASD1_AS2E_MASK                       equ 0004h
COG1ASD1_AS3E_POSN                       equ 0003h
COG1ASD1_AS3E_POSITION                   equ 0003h
COG1ASD1_AS3E_SIZE                       equ 0001h
COG1ASD1_AS3E_LENGTH                     equ 0001h
COG1ASD1_AS3E_MASK                       equ 0008h
COG1ASD1_AS4E_POSN                       equ 0004h
COG1ASD1_AS4E_POSITION                   equ 0004h
COG1ASD1_AS4E_SIZE                       equ 0001h
COG1ASD1_AS4E_LENGTH                     equ 0001h
COG1ASD1_AS4E_MASK                       equ 0010h
COG1ASD1_AS5E_POSN                       equ 0005h
COG1ASD1_AS5E_POSITION                   equ 0005h
COG1ASD1_AS5E_SIZE                       equ 0001h
COG1ASD1_AS5E_LENGTH                     equ 0001h
COG1ASD1_AS5E_MASK                       equ 0020h
COG1ASD1_AS6E_POSN                       equ 0006h
COG1ASD1_AS6E_POSITION                   equ 0006h
COG1ASD1_AS6E_SIZE                       equ 0001h
COG1ASD1_AS6E_LENGTH                     equ 0001h
COG1ASD1_AS6E_MASK                       equ 0040h
COG1ASD1_AS7E_POSN                       equ 0007h
COG1ASD1_AS7E_POSITION                   equ 0007h
COG1ASD1_AS7E_SIZE                       equ 0001h
COG1ASD1_AS7E_LENGTH                     equ 0001h
COG1ASD1_AS7E_MASK                       equ 0080h
COG1ASD1_G1AS0E_POSN                     equ 0000h
COG1ASD1_G1AS0E_POSITION                 equ 0000h
COG1ASD1_G1AS0E_SIZE                     equ 0001h
COG1ASD1_G1AS0E_LENGTH                   equ 0001h
COG1ASD1_G1AS0E_MASK                     equ 0001h
COG1ASD1_G1AS1E_POSN                     equ 0001h
COG1ASD1_G1AS1E_POSITION                 equ 0001h
COG1ASD1_G1AS1E_SIZE                     equ 0001h
COG1ASD1_G1AS1E_LENGTH                   equ 0001h
COG1ASD1_G1AS1E_MASK                     equ 0002h
COG1ASD1_G1AS2E_POSN                     equ 0002h
COG1ASD1_G1AS2E_POSITION                 equ 0002h
COG1ASD1_G1AS2E_SIZE                     equ 0001h
COG1ASD1_G1AS2E_LENGTH                   equ 0001h
COG1ASD1_G1AS2E_MASK                     equ 0004h
COG1ASD1_G1AS3E_POSN                     equ 0003h
COG1ASD1_G1AS3E_POSITION                 equ 0003h
COG1ASD1_G1AS3E_SIZE                     equ 0001h
COG1ASD1_G1AS3E_LENGTH                   equ 0001h
COG1ASD1_G1AS3E_MASK                     equ 0008h
COG1ASD1_G1AS4E_POSN                     equ 0004h
COG1ASD1_G1AS4E_POSITION                 equ 0004h
COG1ASD1_G1AS4E_SIZE                     equ 0001h
COG1ASD1_G1AS4E_LENGTH                   equ 0001h
COG1ASD1_G1AS4E_MASK                     equ 0010h
COG1ASD1_G1AS5E_POSN                     equ 0005h
COG1ASD1_G1AS5E_POSITION                 equ 0005h
COG1ASD1_G1AS5E_SIZE                     equ 0001h
COG1ASD1_G1AS5E_LENGTH                   equ 0001h
COG1ASD1_G1AS5E_MASK                     equ 0020h
COG1ASD1_G1AS6E_POSN                     equ 0006h
COG1ASD1_G1AS6E_POSITION                 equ 0006h
COG1ASD1_G1AS6E_SIZE                     equ 0001h
COG1ASD1_G1AS6E_LENGTH                   equ 0001h
COG1ASD1_G1AS6E_MASK                     equ 0040h
COG1ASD1_G1AS7E_POSN                     equ 0007h
COG1ASD1_G1AS7E_POSITION                 equ 0007h
COG1ASD1_G1AS7E_SIZE                     equ 0001h
COG1ASD1_G1AS7E_LENGTH                   equ 0001h
COG1ASD1_G1AS7E_MASK                     equ 0080h

// Register: COG1STR
#define COG1STR COG1STR
COG1STR                                  equ 069Fh
// bitfield definitions
COG1STR_STRA_POSN                        equ 0000h
COG1STR_STRA_POSITION                    equ 0000h
COG1STR_STRA_SIZE                        equ 0001h
COG1STR_STRA_LENGTH                      equ 0001h
COG1STR_STRA_MASK                        equ 0001h
COG1STR_STRB_POSN                        equ 0001h
COG1STR_STRB_POSITION                    equ 0001h
COG1STR_STRB_SIZE                        equ 0001h
COG1STR_STRB_LENGTH                      equ 0001h
COG1STR_STRB_MASK                        equ 0002h
COG1STR_STRC_POSN                        equ 0002h
COG1STR_STRC_POSITION                    equ 0002h
COG1STR_STRC_SIZE                        equ 0001h
COG1STR_STRC_LENGTH                      equ 0001h
COG1STR_STRC_MASK                        equ 0004h
COG1STR_STRD_POSN                        equ 0003h
COG1STR_STRD_POSITION                    equ 0003h
COG1STR_STRD_SIZE                        equ 0001h
COG1STR_STRD_LENGTH                      equ 0001h
COG1STR_STRD_MASK                        equ 0008h
COG1STR_SDATA_POSN                       equ 0004h
COG1STR_SDATA_POSITION                   equ 0004h
COG1STR_SDATA_SIZE                       equ 0001h
COG1STR_SDATA_LENGTH                     equ 0001h
COG1STR_SDATA_MASK                       equ 0010h
COG1STR_SDATB_POSN                       equ 0005h
COG1STR_SDATB_POSITION                   equ 0005h
COG1STR_SDATB_SIZE                       equ 0001h
COG1STR_SDATB_LENGTH                     equ 0001h
COG1STR_SDATB_MASK                       equ 0020h
COG1STR_SDATC_POSN                       equ 0006h
COG1STR_SDATC_POSITION                   equ 0006h
COG1STR_SDATC_SIZE                       equ 0001h
COG1STR_SDATC_LENGTH                     equ 0001h
COG1STR_SDATC_MASK                       equ 0040h
COG1STR_SDATD_POSN                       equ 0007h
COG1STR_SDATD_POSITION                   equ 0007h
COG1STR_SDATD_SIZE                       equ 0001h
COG1STR_SDATD_LENGTH                     equ 0001h
COG1STR_SDATD_MASK                       equ 0080h
COG1STR_G1STRA_POSN                      equ 0000h
COG1STR_G1STRA_POSITION                  equ 0000h
COG1STR_G1STRA_SIZE                      equ 0001h
COG1STR_G1STRA_LENGTH                    equ 0001h
COG1STR_G1STRA_MASK                      equ 0001h
COG1STR_G1STRB_POSN                      equ 0001h
COG1STR_G1STRB_POSITION                  equ 0001h
COG1STR_G1STRB_SIZE                      equ 0001h
COG1STR_G1STRB_LENGTH                    equ 0001h
COG1STR_G1STRB_MASK                      equ 0002h
COG1STR_G1STRC_POSN                      equ 0002h
COG1STR_G1STRC_POSITION                  equ 0002h
COG1STR_G1STRC_SIZE                      equ 0001h
COG1STR_G1STRC_LENGTH                    equ 0001h
COG1STR_G1STRC_MASK                      equ 0004h
COG1STR_G1STRD_POSN                      equ 0003h
COG1STR_G1STRD_POSITION                  equ 0003h
COG1STR_G1STRD_SIZE                      equ 0001h
COG1STR_G1STRD_LENGTH                    equ 0001h
COG1STR_G1STRD_MASK                      equ 0008h
COG1STR_G1SDATA_POSN                     equ 0004h
COG1STR_G1SDATA_POSITION                 equ 0004h
COG1STR_G1SDATA_SIZE                     equ 0001h
COG1STR_G1SDATA_LENGTH                   equ 0001h
COG1STR_G1SDATA_MASK                     equ 0010h
COG1STR_G1SDATB_POSN                     equ 0005h
COG1STR_G1SDATB_POSITION                 equ 0005h
COG1STR_G1SDATB_SIZE                     equ 0001h
COG1STR_G1SDATB_LENGTH                   equ 0001h
COG1STR_G1SDATB_MASK                     equ 0020h
COG1STR_G1SDATC_POSN                     equ 0006h
COG1STR_G1SDATC_POSITION                 equ 0006h
COG1STR_G1SDATC_SIZE                     equ 0001h
COG1STR_G1SDATC_LENGTH                   equ 0001h
COG1STR_G1SDATC_MASK                     equ 0040h
COG1STR_G1SDATD_POSN                     equ 0007h
COG1STR_G1SDATD_POSITION                 equ 0007h
COG1STR_G1SDATD_SIZE                     equ 0001h
COG1STR_G1SDATD_LENGTH                   equ 0001h
COG1STR_G1SDATD_MASK                     equ 0080h

// Register: COG2PHR
#define COG2PHR COG2PHR
COG2PHR                                  equ 070Dh
// bitfield definitions
COG2PHR_PHR_POSN                         equ 0000h
COG2PHR_PHR_POSITION                     equ 0000h
COG2PHR_PHR_SIZE                         equ 0006h
COG2PHR_PHR_LENGTH                       equ 0006h
COG2PHR_PHR_MASK                         equ 003Fh
COG2PHR_PHR0_POSN                        equ 0000h
COG2PHR_PHR0_POSITION                    equ 0000h
COG2PHR_PHR0_SIZE                        equ 0001h
COG2PHR_PHR0_LENGTH                      equ 0001h
COG2PHR_PHR0_MASK                        equ 0001h
COG2PHR_PHR1_POSN                        equ 0001h
COG2PHR_PHR1_POSITION                    equ 0001h
COG2PHR_PHR1_SIZE                        equ 0001h
COG2PHR_PHR1_LENGTH                      equ 0001h
COG2PHR_PHR1_MASK                        equ 0002h
COG2PHR_PHR2_POSN                        equ 0002h
COG2PHR_PHR2_POSITION                    equ 0002h
COG2PHR_PHR2_SIZE                        equ 0001h
COG2PHR_PHR2_LENGTH                      equ 0001h
COG2PHR_PHR2_MASK                        equ 0004h
COG2PHR_PHR3_POSN                        equ 0003h
COG2PHR_PHR3_POSITION                    equ 0003h
COG2PHR_PHR3_SIZE                        equ 0001h
COG2PHR_PHR3_LENGTH                      equ 0001h
COG2PHR_PHR3_MASK                        equ 0008h
COG2PHR_PHR4_POSN                        equ 0004h
COG2PHR_PHR4_POSITION                    equ 0004h
COG2PHR_PHR4_SIZE                        equ 0001h
COG2PHR_PHR4_LENGTH                      equ 0001h
COG2PHR_PHR4_MASK                        equ 0010h
COG2PHR_PHR5_POSN                        equ 0005h
COG2PHR_PHR5_POSITION                    equ 0005h
COG2PHR_PHR5_SIZE                        equ 0001h
COG2PHR_PHR5_LENGTH                      equ 0001h
COG2PHR_PHR5_MASK                        equ 0020h
COG2PHR_G2PHR0_POSN                      equ 0000h
COG2PHR_G2PHR0_POSITION                  equ 0000h
COG2PHR_G2PHR0_SIZE                      equ 0001h
COG2PHR_G2PHR0_LENGTH                    equ 0001h
COG2PHR_G2PHR0_MASK                      equ 0001h
COG2PHR_G2PHR1_POSN                      equ 0001h
COG2PHR_G2PHR1_POSITION                  equ 0001h
COG2PHR_G2PHR1_SIZE                      equ 0001h
COG2PHR_G2PHR1_LENGTH                    equ 0001h
COG2PHR_G2PHR1_MASK                      equ 0002h
COG2PHR_G2PHR2_POSN                      equ 0002h
COG2PHR_G2PHR2_POSITION                  equ 0002h
COG2PHR_G2PHR2_SIZE                      equ 0001h
COG2PHR_G2PHR2_LENGTH                    equ 0001h
COG2PHR_G2PHR2_MASK                      equ 0004h
COG2PHR_G2PHR3_POSN                      equ 0003h
COG2PHR_G2PHR3_POSITION                  equ 0003h
COG2PHR_G2PHR3_SIZE                      equ 0001h
COG2PHR_G2PHR3_LENGTH                    equ 0001h
COG2PHR_G2PHR3_MASK                      equ 0008h
COG2PHR_G2PHR4_POSN                      equ 0004h
COG2PHR_G2PHR4_POSITION                  equ 0004h
COG2PHR_G2PHR4_SIZE                      equ 0001h
COG2PHR_G2PHR4_LENGTH                    equ 0001h
COG2PHR_G2PHR4_MASK                      equ 0010h
COG2PHR_G2PHR5_POSN                      equ 0005h
COG2PHR_G2PHR5_POSITION                  equ 0005h
COG2PHR_G2PHR5_SIZE                      equ 0001h
COG2PHR_G2PHR5_LENGTH                    equ 0001h
COG2PHR_G2PHR5_MASK                      equ 0020h

// Register: COG2PHF
#define COG2PHF COG2PHF
COG2PHF                                  equ 070Eh
// bitfield definitions
COG2PHF_PHF_POSN                         equ 0000h
COG2PHF_PHF_POSITION                     equ 0000h
COG2PHF_PHF_SIZE                         equ 0006h
COG2PHF_PHF_LENGTH                       equ 0006h
COG2PHF_PHF_MASK                         equ 003Fh
COG2PHF_PHF0_POSN                        equ 0000h
COG2PHF_PHF0_POSITION                    equ 0000h
COG2PHF_PHF0_SIZE                        equ 0001h
COG2PHF_PHF0_LENGTH                      equ 0001h
COG2PHF_PHF0_MASK                        equ 0001h
COG2PHF_PHF1_POSN                        equ 0001h
COG2PHF_PHF1_POSITION                    equ 0001h
COG2PHF_PHF1_SIZE                        equ 0001h
COG2PHF_PHF1_LENGTH                      equ 0001h
COG2PHF_PHF1_MASK                        equ 0002h
COG2PHF_PHF2_POSN                        equ 0002h
COG2PHF_PHF2_POSITION                    equ 0002h
COG2PHF_PHF2_SIZE                        equ 0001h
COG2PHF_PHF2_LENGTH                      equ 0001h
COG2PHF_PHF2_MASK                        equ 0004h
COG2PHF_PHF3_POSN                        equ 0003h
COG2PHF_PHF3_POSITION                    equ 0003h
COG2PHF_PHF3_SIZE                        equ 0001h
COG2PHF_PHF3_LENGTH                      equ 0001h
COG2PHF_PHF3_MASK                        equ 0008h
COG2PHF_PHF4_POSN                        equ 0004h
COG2PHF_PHF4_POSITION                    equ 0004h
COG2PHF_PHF4_SIZE                        equ 0001h
COG2PHF_PHF4_LENGTH                      equ 0001h
COG2PHF_PHF4_MASK                        equ 0010h
COG2PHF_PHF5_POSN                        equ 0005h
COG2PHF_PHF5_POSITION                    equ 0005h
COG2PHF_PHF5_SIZE                        equ 0001h
COG2PHF_PHF5_LENGTH                      equ 0001h
COG2PHF_PHF5_MASK                        equ 0020h
COG2PHF_G2PHF0_POSN                      equ 0000h
COG2PHF_G2PHF0_POSITION                  equ 0000h
COG2PHF_G2PHF0_SIZE                      equ 0001h
COG2PHF_G2PHF0_LENGTH                    equ 0001h
COG2PHF_G2PHF0_MASK                      equ 0001h
COG2PHF_G2PHF1_POSN                      equ 0001h
COG2PHF_G2PHF1_POSITION                  equ 0001h
COG2PHF_G2PHF1_SIZE                      equ 0001h
COG2PHF_G2PHF1_LENGTH                    equ 0001h
COG2PHF_G2PHF1_MASK                      equ 0002h
COG2PHF_G2PHF2_POSN                      equ 0002h
COG2PHF_G2PHF2_POSITION                  equ 0002h
COG2PHF_G2PHF2_SIZE                      equ 0001h
COG2PHF_G2PHF2_LENGTH                    equ 0001h
COG2PHF_G2PHF2_MASK                      equ 0004h
COG2PHF_G2PHF3_POSN                      equ 0003h
COG2PHF_G2PHF3_POSITION                  equ 0003h
COG2PHF_G2PHF3_SIZE                      equ 0001h
COG2PHF_G2PHF3_LENGTH                    equ 0001h
COG2PHF_G2PHF3_MASK                      equ 0008h
COG2PHF_G2PHF4_POSN                      equ 0004h
COG2PHF_G2PHF4_POSITION                  equ 0004h
COG2PHF_G2PHF4_SIZE                      equ 0001h
COG2PHF_G2PHF4_LENGTH                    equ 0001h
COG2PHF_G2PHF4_MASK                      equ 0010h
COG2PHF_G2PHF5_POSN                      equ 0005h
COG2PHF_G2PHF5_POSITION                  equ 0005h
COG2PHF_G2PHF5_SIZE                      equ 0001h
COG2PHF_G2PHF5_LENGTH                    equ 0001h
COG2PHF_G2PHF5_MASK                      equ 0020h

// Register: COG2BLKR
#define COG2BLKR COG2BLKR
COG2BLKR                                 equ 070Fh
// bitfield definitions
COG2BLKR_BLKR_POSN                       equ 0000h
COG2BLKR_BLKR_POSITION                   equ 0000h
COG2BLKR_BLKR_SIZE                       equ 0006h
COG2BLKR_BLKR_LENGTH                     equ 0006h
COG2BLKR_BLKR_MASK                       equ 003Fh
COG2BLKR_BLKR0_POSN                      equ 0000h
COG2BLKR_BLKR0_POSITION                  equ 0000h
COG2BLKR_BLKR0_SIZE                      equ 0001h
COG2BLKR_BLKR0_LENGTH                    equ 0001h
COG2BLKR_BLKR0_MASK                      equ 0001h
COG2BLKR_BLKR1_POSN                      equ 0001h
COG2BLKR_BLKR1_POSITION                  equ 0001h
COG2BLKR_BLKR1_SIZE                      equ 0001h
COG2BLKR_BLKR1_LENGTH                    equ 0001h
COG2BLKR_BLKR1_MASK                      equ 0002h
COG2BLKR_BLKR2_POSN                      equ 0002h
COG2BLKR_BLKR2_POSITION                  equ 0002h
COG2BLKR_BLKR2_SIZE                      equ 0001h
COG2BLKR_BLKR2_LENGTH                    equ 0001h
COG2BLKR_BLKR2_MASK                      equ 0004h
COG2BLKR_BLKR3_POSN                      equ 0003h
COG2BLKR_BLKR3_POSITION                  equ 0003h
COG2BLKR_BLKR3_SIZE                      equ 0001h
COG2BLKR_BLKR3_LENGTH                    equ 0001h
COG2BLKR_BLKR3_MASK                      equ 0008h
COG2BLKR_BLKR4_POSN                      equ 0004h
COG2BLKR_BLKR4_POSITION                  equ 0004h
COG2BLKR_BLKR4_SIZE                      equ 0001h
COG2BLKR_BLKR4_LENGTH                    equ 0001h
COG2BLKR_BLKR4_MASK                      equ 0010h
COG2BLKR_BLKR5_POSN                      equ 0005h
COG2BLKR_BLKR5_POSITION                  equ 0005h
COG2BLKR_BLKR5_SIZE                      equ 0001h
COG2BLKR_BLKR5_LENGTH                    equ 0001h
COG2BLKR_BLKR5_MASK                      equ 0020h
COG2BLKR_G2BLKR0_POSN                    equ 0000h
COG2BLKR_G2BLKR0_POSITION                equ 0000h
COG2BLKR_G2BLKR0_SIZE                    equ 0001h
COG2BLKR_G2BLKR0_LENGTH                  equ 0001h
COG2BLKR_G2BLKR0_MASK                    equ 0001h
COG2BLKR_G2BLKR1_POSN                    equ 0001h
COG2BLKR_G2BLKR1_POSITION                equ 0001h
COG2BLKR_G2BLKR1_SIZE                    equ 0001h
COG2BLKR_G2BLKR1_LENGTH                  equ 0001h
COG2BLKR_G2BLKR1_MASK                    equ 0002h
COG2BLKR_G2BLKR2_POSN                    equ 0002h
COG2BLKR_G2BLKR2_POSITION                equ 0002h
COG2BLKR_G2BLKR2_SIZE                    equ 0001h
COG2BLKR_G2BLKR2_LENGTH                  equ 0001h
COG2BLKR_G2BLKR2_MASK                    equ 0004h
COG2BLKR_G2BLKR3_POSN                    equ 0003h
COG2BLKR_G2BLKR3_POSITION                equ 0003h
COG2BLKR_G2BLKR3_SIZE                    equ 0001h
COG2BLKR_G2BLKR3_LENGTH                  equ 0001h
COG2BLKR_G2BLKR3_MASK                    equ 0008h
COG2BLKR_G2BLKR4_POSN                    equ 0004h
COG2BLKR_G2BLKR4_POSITION                equ 0004h
COG2BLKR_G2BLKR4_SIZE                    equ 0001h
COG2BLKR_G2BLKR4_LENGTH                  equ 0001h
COG2BLKR_G2BLKR4_MASK                    equ 0010h
COG2BLKR_G2BLKR5_POSN                    equ 0005h
COG2BLKR_G2BLKR5_POSITION                equ 0005h
COG2BLKR_G2BLKR5_SIZE                    equ 0001h
COG2BLKR_G2BLKR5_LENGTH                  equ 0001h
COG2BLKR_G2BLKR5_MASK                    equ 0020h

// Register: COG2BLKF
#define COG2BLKF COG2BLKF
COG2BLKF                                 equ 0710h
// bitfield definitions
COG2BLKF_BLKF_POSN                       equ 0000h
COG2BLKF_BLKF_POSITION                   equ 0000h
COG2BLKF_BLKF_SIZE                       equ 0006h
COG2BLKF_BLKF_LENGTH                     equ 0006h
COG2BLKF_BLKF_MASK                       equ 003Fh
COG2BLKF_BLKF0_POSN                      equ 0000h
COG2BLKF_BLKF0_POSITION                  equ 0000h
COG2BLKF_BLKF0_SIZE                      equ 0001h
COG2BLKF_BLKF0_LENGTH                    equ 0001h
COG2BLKF_BLKF0_MASK                      equ 0001h
COG2BLKF_BLKF1_POSN                      equ 0001h
COG2BLKF_BLKF1_POSITION                  equ 0001h
COG2BLKF_BLKF1_SIZE                      equ 0001h
COG2BLKF_BLKF1_LENGTH                    equ 0001h
COG2BLKF_BLKF1_MASK                      equ 0002h
COG2BLKF_BLKF2_POSN                      equ 0002h
COG2BLKF_BLKF2_POSITION                  equ 0002h
COG2BLKF_BLKF2_SIZE                      equ 0001h
COG2BLKF_BLKF2_LENGTH                    equ 0001h
COG2BLKF_BLKF2_MASK                      equ 0004h
COG2BLKF_BLKF3_POSN                      equ 0003h
COG2BLKF_BLKF3_POSITION                  equ 0003h
COG2BLKF_BLKF3_SIZE                      equ 0001h
COG2BLKF_BLKF3_LENGTH                    equ 0001h
COG2BLKF_BLKF3_MASK                      equ 0008h
COG2BLKF_BLKF4_POSN                      equ 0004h
COG2BLKF_BLKF4_POSITION                  equ 0004h
COG2BLKF_BLKF4_SIZE                      equ 0001h
COG2BLKF_BLKF4_LENGTH                    equ 0001h
COG2BLKF_BLKF4_MASK                      equ 0010h
COG2BLKF_BLKF5_POSN                      equ 0005h
COG2BLKF_BLKF5_POSITION                  equ 0005h
COG2BLKF_BLKF5_SIZE                      equ 0001h
COG2BLKF_BLKF5_LENGTH                    equ 0001h
COG2BLKF_BLKF5_MASK                      equ 0020h
COG2BLKF_G2BLKF0_POSN                    equ 0000h
COG2BLKF_G2BLKF0_POSITION                equ 0000h
COG2BLKF_G2BLKF0_SIZE                    equ 0001h
COG2BLKF_G2BLKF0_LENGTH                  equ 0001h
COG2BLKF_G2BLKF0_MASK                    equ 0001h
COG2BLKF_G2BLKF1_POSN                    equ 0001h
COG2BLKF_G2BLKF1_POSITION                equ 0001h
COG2BLKF_G2BLKF1_SIZE                    equ 0001h
COG2BLKF_G2BLKF1_LENGTH                  equ 0001h
COG2BLKF_G2BLKF1_MASK                    equ 0002h
COG2BLKF_G2BLKF2_POSN                    equ 0002h
COG2BLKF_G2BLKF2_POSITION                equ 0002h
COG2BLKF_G2BLKF2_SIZE                    equ 0001h
COG2BLKF_G2BLKF2_LENGTH                  equ 0001h
COG2BLKF_G2BLKF2_MASK                    equ 0004h
COG2BLKF_G2BLKF3_POSN                    equ 0003h
COG2BLKF_G2BLKF3_POSITION                equ 0003h
COG2BLKF_G2BLKF3_SIZE                    equ 0001h
COG2BLKF_G2BLKF3_LENGTH                  equ 0001h
COG2BLKF_G2BLKF3_MASK                    equ 0008h
COG2BLKF_G2BLKF4_POSN                    equ 0004h
COG2BLKF_G2BLKF4_POSITION                equ 0004h
COG2BLKF_G2BLKF4_SIZE                    equ 0001h
COG2BLKF_G2BLKF4_LENGTH                  equ 0001h
COG2BLKF_G2BLKF4_MASK                    equ 0010h
COG2BLKF_G2BLKF5_POSN                    equ 0005h
COG2BLKF_G2BLKF5_POSITION                equ 0005h
COG2BLKF_G2BLKF5_SIZE                    equ 0001h
COG2BLKF_G2BLKF5_LENGTH                  equ 0001h
COG2BLKF_G2BLKF5_MASK                    equ 0020h

// Register: COG2DBR
#define COG2DBR COG2DBR
COG2DBR                                  equ 0711h
// bitfield definitions
COG2DBR_DBR_POSN                         equ 0000h
COG2DBR_DBR_POSITION                     equ 0000h
COG2DBR_DBR_SIZE                         equ 0006h
COG2DBR_DBR_LENGTH                       equ 0006h
COG2DBR_DBR_MASK                         equ 003Fh
COG2DBR_DBR0_POSN                        equ 0000h
COG2DBR_DBR0_POSITION                    equ 0000h
COG2DBR_DBR0_SIZE                        equ 0001h
COG2DBR_DBR0_LENGTH                      equ 0001h
COG2DBR_DBR0_MASK                        equ 0001h
COG2DBR_DBR1_POSN                        equ 0001h
COG2DBR_DBR1_POSITION                    equ 0001h
COG2DBR_DBR1_SIZE                        equ 0001h
COG2DBR_DBR1_LENGTH                      equ 0001h
COG2DBR_DBR1_MASK                        equ 0002h
COG2DBR_DBR2_POSN                        equ 0002h
COG2DBR_DBR2_POSITION                    equ 0002h
COG2DBR_DBR2_SIZE                        equ 0001h
COG2DBR_DBR2_LENGTH                      equ 0001h
COG2DBR_DBR2_MASK                        equ 0004h
COG2DBR_DBR3_POSN                        equ 0003h
COG2DBR_DBR3_POSITION                    equ 0003h
COG2DBR_DBR3_SIZE                        equ 0001h
COG2DBR_DBR3_LENGTH                      equ 0001h
COG2DBR_DBR3_MASK                        equ 0008h
COG2DBR_DBR4_POSN                        equ 0004h
COG2DBR_DBR4_POSITION                    equ 0004h
COG2DBR_DBR4_SIZE                        equ 0001h
COG2DBR_DBR4_LENGTH                      equ 0001h
COG2DBR_DBR4_MASK                        equ 0010h
COG2DBR_DBR5_POSN                        equ 0005h
COG2DBR_DBR5_POSITION                    equ 0005h
COG2DBR_DBR5_SIZE                        equ 0001h
COG2DBR_DBR5_LENGTH                      equ 0001h
COG2DBR_DBR5_MASK                        equ 0020h
COG2DBR_G2DBR0_POSN                      equ 0000h
COG2DBR_G2DBR0_POSITION                  equ 0000h
COG2DBR_G2DBR0_SIZE                      equ 0001h
COG2DBR_G2DBR0_LENGTH                    equ 0001h
COG2DBR_G2DBR0_MASK                      equ 0001h
COG2DBR_G2DBR1_POSN                      equ 0001h
COG2DBR_G2DBR1_POSITION                  equ 0001h
COG2DBR_G2DBR1_SIZE                      equ 0001h
COG2DBR_G2DBR1_LENGTH                    equ 0001h
COG2DBR_G2DBR1_MASK                      equ 0002h
COG2DBR_G2DBR2_POSN                      equ 0002h
COG2DBR_G2DBR2_POSITION                  equ 0002h
COG2DBR_G2DBR2_SIZE                      equ 0001h
COG2DBR_G2DBR2_LENGTH                    equ 0001h
COG2DBR_G2DBR2_MASK                      equ 0004h
COG2DBR_G2DBR3_POSN                      equ 0003h
COG2DBR_G2DBR3_POSITION                  equ 0003h
COG2DBR_G2DBR3_SIZE                      equ 0001h
COG2DBR_G2DBR3_LENGTH                    equ 0001h
COG2DBR_G2DBR3_MASK                      equ 0008h
COG2DBR_G2DBR4_POSN                      equ 0004h
COG2DBR_G2DBR4_POSITION                  equ 0004h
COG2DBR_G2DBR4_SIZE                      equ 0001h
COG2DBR_G2DBR4_LENGTH                    equ 0001h
COG2DBR_G2DBR4_MASK                      equ 0010h
COG2DBR_G2DBR5_POSN                      equ 0005h
COG2DBR_G2DBR5_POSITION                  equ 0005h
COG2DBR_G2DBR5_SIZE                      equ 0001h
COG2DBR_G2DBR5_LENGTH                    equ 0001h
COG2DBR_G2DBR5_MASK                      equ 0020h

// Register: COG2DBF
#define COG2DBF COG2DBF
COG2DBF                                  equ 0712h
// bitfield definitions
COG2DBF_DBF0_POSN                        equ 0000h
COG2DBF_DBF0_POSITION                    equ 0000h
COG2DBF_DBF0_SIZE                        equ 0001h
COG2DBF_DBF0_LENGTH                      equ 0001h
COG2DBF_DBF0_MASK                        equ 0001h
COG2DBF_DBF1_POSN                        equ 0001h
COG2DBF_DBF1_POSITION                    equ 0001h
COG2DBF_DBF1_SIZE                        equ 0001h
COG2DBF_DBF1_LENGTH                      equ 0001h
COG2DBF_DBF1_MASK                        equ 0002h
COG2DBF_DBF2_POSN                        equ 0002h
COG2DBF_DBF2_POSITION                    equ 0002h
COG2DBF_DBF2_SIZE                        equ 0001h
COG2DBF_DBF2_LENGTH                      equ 0001h
COG2DBF_DBF2_MASK                        equ 0004h
COG2DBF_DBF3_POSN                        equ 0003h
COG2DBF_DBF3_POSITION                    equ 0003h
COG2DBF_DBF3_SIZE                        equ 0001h
COG2DBF_DBF3_LENGTH                      equ 0001h
COG2DBF_DBF3_MASK                        equ 0008h
COG2DBF_DBF4_POSN                        equ 0004h
COG2DBF_DBF4_POSITION                    equ 0004h
COG2DBF_DBF4_SIZE                        equ 0001h
COG2DBF_DBF4_LENGTH                      equ 0001h
COG2DBF_DBF4_MASK                        equ 0010h
COG2DBF_DBF5_POSN                        equ 0005h
COG2DBF_DBF5_POSITION                    equ 0005h
COG2DBF_DBF5_SIZE                        equ 0001h
COG2DBF_DBF5_LENGTH                      equ 0001h
COG2DBF_DBF5_MASK                        equ 0020h
COG2DBF_G2DBF0_POSN                      equ 0000h
COG2DBF_G2DBF0_POSITION                  equ 0000h
COG2DBF_G2DBF0_SIZE                      equ 0001h
COG2DBF_G2DBF0_LENGTH                    equ 0001h
COG2DBF_G2DBF0_MASK                      equ 0001h
COG2DBF_G2DBF1_POSN                      equ 0001h
COG2DBF_G2DBF1_POSITION                  equ 0001h
COG2DBF_G2DBF1_SIZE                      equ 0001h
COG2DBF_G2DBF1_LENGTH                    equ 0001h
COG2DBF_G2DBF1_MASK                      equ 0002h
COG2DBF_G2DBF2_POSN                      equ 0002h
COG2DBF_G2DBF2_POSITION                  equ 0002h
COG2DBF_G2DBF2_SIZE                      equ 0001h
COG2DBF_G2DBF2_LENGTH                    equ 0001h
COG2DBF_G2DBF2_MASK                      equ 0004h
COG2DBF_G2DBF3_POSN                      equ 0003h
COG2DBF_G2DBF3_POSITION                  equ 0003h
COG2DBF_G2DBF3_SIZE                      equ 0001h
COG2DBF_G2DBF3_LENGTH                    equ 0001h
COG2DBF_G2DBF3_MASK                      equ 0008h
COG2DBF_G2DBF4_POSN                      equ 0004h
COG2DBF_G2DBF4_POSITION                  equ 0004h
COG2DBF_G2DBF4_SIZE                      equ 0001h
COG2DBF_G2DBF4_LENGTH                    equ 0001h
COG2DBF_G2DBF4_MASK                      equ 0010h
COG2DBF_G2DBF5_POSN                      equ 0005h
COG2DBF_G2DBF5_POSITION                  equ 0005h
COG2DBF_G2DBF5_SIZE                      equ 0001h
COG2DBF_G2DBF5_LENGTH                    equ 0001h
COG2DBF_G2DBF5_MASK                      equ 0020h
COG2DBF_G2DBF_POSN                       equ 0000h
COG2DBF_G2DBF_POSITION                   equ 0000h
COG2DBF_G2DBF_SIZE                       equ 0006h
COG2DBF_G2DBF_LENGTH                     equ 0006h
COG2DBF_G2DBF_MASK                       equ 003Fh

// Register: COG2CON0
#define COG2CON0 COG2CON0
COG2CON0                                 equ 0713h
// bitfield definitions
COG2CON0_MD_POSN                         equ 0000h
COG2CON0_MD_POSITION                     equ 0000h
COG2CON0_MD_SIZE                         equ 0003h
COG2CON0_MD_LENGTH                       equ 0003h
COG2CON0_MD_MASK                         equ 0007h
COG2CON0_CS_POSN                         equ 0003h
COG2CON0_CS_POSITION                     equ 0003h
COG2CON0_CS_SIZE                         equ 0002h
COG2CON0_CS_LENGTH                       equ 0002h
COG2CON0_CS_MASK                         equ 0018h
COG2CON0_LD_POSN                         equ 0006h
COG2CON0_LD_POSITION                     equ 0006h
COG2CON0_LD_SIZE                         equ 0001h
COG2CON0_LD_LENGTH                       equ 0001h
COG2CON0_LD_MASK                         equ 0040h
COG2CON0_EN_POSN                         equ 0007h
COG2CON0_EN_POSITION                     equ 0007h
COG2CON0_EN_SIZE                         equ 0001h
COG2CON0_EN_LENGTH                       equ 0001h
COG2CON0_EN_MASK                         equ 0080h
COG2CON0_MD0_POSN                        equ 0000h
COG2CON0_MD0_POSITION                    equ 0000h
COG2CON0_MD0_SIZE                        equ 0001h
COG2CON0_MD0_LENGTH                      equ 0001h
COG2CON0_MD0_MASK                        equ 0001h
COG2CON0_MD1_POSN                        equ 0001h
COG2CON0_MD1_POSITION                    equ 0001h
COG2CON0_MD1_SIZE                        equ 0001h
COG2CON0_MD1_LENGTH                      equ 0001h
COG2CON0_MD1_MASK                        equ 0002h
COG2CON0_MD2_POSN                        equ 0002h
COG2CON0_MD2_POSITION                    equ 0002h
COG2CON0_MD2_SIZE                        equ 0001h
COG2CON0_MD2_LENGTH                      equ 0001h
COG2CON0_MD2_MASK                        equ 0004h
COG2CON0_CS0_POSN                        equ 0003h
COG2CON0_CS0_POSITION                    equ 0003h
COG2CON0_CS0_SIZE                        equ 0001h
COG2CON0_CS0_LENGTH                      equ 0001h
COG2CON0_CS0_MASK                        equ 0008h
COG2CON0_CS1_POSN                        equ 0004h
COG2CON0_CS1_POSITION                    equ 0004h
COG2CON0_CS1_SIZE                        equ 0001h
COG2CON0_CS1_LENGTH                      equ 0001h
COG2CON0_CS1_MASK                        equ 0010h
COG2CON0_G2MD_POSN                       equ 0000h
COG2CON0_G2MD_POSITION                   equ 0000h
COG2CON0_G2MD_SIZE                       equ 0003h
COG2CON0_G2MD_LENGTH                     equ 0003h
COG2CON0_G2MD_MASK                       equ 0007h
COG2CON0_G2CS_POSN                       equ 0003h
COG2CON0_G2CS_POSITION                   equ 0003h
COG2CON0_G2CS_SIZE                       equ 0002h
COG2CON0_G2CS_LENGTH                     equ 0002h
COG2CON0_G2CS_MASK                       equ 0018h
COG2CON0_G2LD_POSN                       equ 0006h
COG2CON0_G2LD_POSITION                   equ 0006h
COG2CON0_G2LD_SIZE                       equ 0001h
COG2CON0_G2LD_LENGTH                     equ 0001h
COG2CON0_G2LD_MASK                       equ 0040h
COG2CON0_G2EN_POSN                       equ 0007h
COG2CON0_G2EN_POSITION                   equ 0007h
COG2CON0_G2EN_SIZE                       equ 0001h
COG2CON0_G2EN_LENGTH                     equ 0001h
COG2CON0_G2EN_MASK                       equ 0080h
COG2CON0_G2MD0_POSN                      equ 0000h
COG2CON0_G2MD0_POSITION                  equ 0000h
COG2CON0_G2MD0_SIZE                      equ 0001h
COG2CON0_G2MD0_LENGTH                    equ 0001h
COG2CON0_G2MD0_MASK                      equ 0001h
COG2CON0_G2MD1_POSN                      equ 0001h
COG2CON0_G2MD1_POSITION                  equ 0001h
COG2CON0_G2MD1_SIZE                      equ 0001h
COG2CON0_G2MD1_LENGTH                    equ 0001h
COG2CON0_G2MD1_MASK                      equ 0002h
COG2CON0_G2MD2_POSN                      equ 0002h
COG2CON0_G2MD2_POSITION                  equ 0002h
COG2CON0_G2MD2_SIZE                      equ 0001h
COG2CON0_G2MD2_LENGTH                    equ 0001h
COG2CON0_G2MD2_MASK                      equ 0004h
COG2CON0_G2CS0_POSN                      equ 0003h
COG2CON0_G2CS0_POSITION                  equ 0003h
COG2CON0_G2CS0_SIZE                      equ 0001h
COG2CON0_G2CS0_LENGTH                    equ 0001h
COG2CON0_G2CS0_MASK                      equ 0008h
COG2CON0_G2CS1_POSN                      equ 0004h
COG2CON0_G2CS1_POSITION                  equ 0004h
COG2CON0_G2CS1_SIZE                      equ 0001h
COG2CON0_G2CS1_LENGTH                    equ 0001h
COG2CON0_G2CS1_MASK                      equ 0010h

// Register: COG2CON1
#define COG2CON1 COG2CON1
COG2CON1                                 equ 0714h
// bitfield definitions
COG2CON1_POLA_POSN                       equ 0000h
COG2CON1_POLA_POSITION                   equ 0000h
COG2CON1_POLA_SIZE                       equ 0001h
COG2CON1_POLA_LENGTH                     equ 0001h
COG2CON1_POLA_MASK                       equ 0001h
COG2CON1_POLB_POSN                       equ 0001h
COG2CON1_POLB_POSITION                   equ 0001h
COG2CON1_POLB_SIZE                       equ 0001h
COG2CON1_POLB_LENGTH                     equ 0001h
COG2CON1_POLB_MASK                       equ 0002h
COG2CON1_POLC_POSN                       equ 0002h
COG2CON1_POLC_POSITION                   equ 0002h
COG2CON1_POLC_SIZE                       equ 0001h
COG2CON1_POLC_LENGTH                     equ 0001h
COG2CON1_POLC_MASK                       equ 0004h
COG2CON1_POLD_POSN                       equ 0003h
COG2CON1_POLD_POSITION                   equ 0003h
COG2CON1_POLD_SIZE                       equ 0001h
COG2CON1_POLD_LENGTH                     equ 0001h
COG2CON1_POLD_MASK                       equ 0008h
COG2CON1_FDBS_POSN                       equ 0006h
COG2CON1_FDBS_POSITION                   equ 0006h
COG2CON1_FDBS_SIZE                       equ 0001h
COG2CON1_FDBS_LENGTH                     equ 0001h
COG2CON1_FDBS_MASK                       equ 0040h
COG2CON1_RDBS_POSN                       equ 0007h
COG2CON1_RDBS_POSITION                   equ 0007h
COG2CON1_RDBS_SIZE                       equ 0001h
COG2CON1_RDBS_LENGTH                     equ 0001h
COG2CON1_RDBS_MASK                       equ 0080h
COG2CON1_G2POLA_POSN                     equ 0000h
COG2CON1_G2POLA_POSITION                 equ 0000h
COG2CON1_G2POLA_SIZE                     equ 0001h
COG2CON1_G2POLA_LENGTH                   equ 0001h
COG2CON1_G2POLA_MASK                     equ 0001h
COG2CON1_G2POLB_POSN                     equ 0001h
COG2CON1_G2POLB_POSITION                 equ 0001h
COG2CON1_G2POLB_SIZE                     equ 0001h
COG2CON1_G2POLB_LENGTH                   equ 0001h
COG2CON1_G2POLB_MASK                     equ 0002h
COG2CON1_G2POLC_POSN                     equ 0002h
COG2CON1_G2POLC_POSITION                 equ 0002h
COG2CON1_G2POLC_SIZE                     equ 0001h
COG2CON1_G2POLC_LENGTH                   equ 0001h
COG2CON1_G2POLC_MASK                     equ 0004h
COG2CON1_G2POLD_POSN                     equ 0003h
COG2CON1_G2POLD_POSITION                 equ 0003h
COG2CON1_G2POLD_SIZE                     equ 0001h
COG2CON1_G2POLD_LENGTH                   equ 0001h
COG2CON1_G2POLD_MASK                     equ 0008h
COG2CON1_G2FDBS_POSN                     equ 0006h
COG2CON1_G2FDBS_POSITION                 equ 0006h
COG2CON1_G2FDBS_SIZE                     equ 0001h
COG2CON1_G2FDBS_LENGTH                   equ 0001h
COG2CON1_G2FDBS_MASK                     equ 0040h
COG2CON1_G2RDBS_POSN                     equ 0007h
COG2CON1_G2RDBS_POSITION                 equ 0007h
COG2CON1_G2RDBS_SIZE                     equ 0001h
COG2CON1_G2RDBS_LENGTH                   equ 0001h
COG2CON1_G2RDBS_MASK                     equ 0080h

// Register: COG2RIS0
#define COG2RIS0 COG2RIS0
COG2RIS0                                 equ 0715h
// bitfield definitions
COG2RIS0_RIS0_POSN                       equ 0000h
COG2RIS0_RIS0_POSITION                   equ 0000h
COG2RIS0_RIS0_SIZE                       equ 0001h
COG2RIS0_RIS0_LENGTH                     equ 0001h
COG2RIS0_RIS0_MASK                       equ 0001h
COG2RIS0_RIS1_POSN                       equ 0001h
COG2RIS0_RIS1_POSITION                   equ 0001h
COG2RIS0_RIS1_SIZE                       equ 0001h
COG2RIS0_RIS1_LENGTH                     equ 0001h
COG2RIS0_RIS1_MASK                       equ 0002h
COG2RIS0_RIS2_POSN                       equ 0002h
COG2RIS0_RIS2_POSITION                   equ 0002h
COG2RIS0_RIS2_SIZE                       equ 0001h
COG2RIS0_RIS2_LENGTH                     equ 0001h
COG2RIS0_RIS2_MASK                       equ 0004h
COG2RIS0_RIS3_POSN                       equ 0003h
COG2RIS0_RIS3_POSITION                   equ 0003h
COG2RIS0_RIS3_SIZE                       equ 0001h
COG2RIS0_RIS3_LENGTH                     equ 0001h
COG2RIS0_RIS3_MASK                       equ 0008h
COG2RIS0_RIS4_POSN                       equ 0004h
COG2RIS0_RIS4_POSITION                   equ 0004h
COG2RIS0_RIS4_SIZE                       equ 0001h
COG2RIS0_RIS4_LENGTH                     equ 0001h
COG2RIS0_RIS4_MASK                       equ 0010h
COG2RIS0_RIS5_POSN                       equ 0005h
COG2RIS0_RIS5_POSITION                   equ 0005h
COG2RIS0_RIS5_SIZE                       equ 0001h
COG2RIS0_RIS5_LENGTH                     equ 0001h
COG2RIS0_RIS5_MASK                       equ 0020h
COG2RIS0_RIS6_POSN                       equ 0006h
COG2RIS0_RIS6_POSITION                   equ 0006h
COG2RIS0_RIS6_SIZE                       equ 0001h
COG2RIS0_RIS6_LENGTH                     equ 0001h
COG2RIS0_RIS6_MASK                       equ 0040h
COG2RIS0_RIS7_POSN                       equ 0007h
COG2RIS0_RIS7_POSITION                   equ 0007h
COG2RIS0_RIS7_SIZE                       equ 0001h
COG2RIS0_RIS7_LENGTH                     equ 0001h
COG2RIS0_RIS7_MASK                       equ 0080h
COG2RIS0_G2RIS0_POSN                     equ 0000h
COG2RIS0_G2RIS0_POSITION                 equ 0000h
COG2RIS0_G2RIS0_SIZE                     equ 0001h
COG2RIS0_G2RIS0_LENGTH                   equ 0001h
COG2RIS0_G2RIS0_MASK                     equ 0001h
COG2RIS0_G2RIS1_POSN                     equ 0001h
COG2RIS0_G2RIS1_POSITION                 equ 0001h
COG2RIS0_G2RIS1_SIZE                     equ 0001h
COG2RIS0_G2RIS1_LENGTH                   equ 0001h
COG2RIS0_G2RIS1_MASK                     equ 0002h
COG2RIS0_G2RIS2_POSN                     equ 0002h
COG2RIS0_G2RIS2_POSITION                 equ 0002h
COG2RIS0_G2RIS2_SIZE                     equ 0001h
COG2RIS0_G2RIS2_LENGTH                   equ 0001h
COG2RIS0_G2RIS2_MASK                     equ 0004h
COG2RIS0_G2RIS3_POSN                     equ 0003h
COG2RIS0_G2RIS3_POSITION                 equ 0003h
COG2RIS0_G2RIS3_SIZE                     equ 0001h
COG2RIS0_G2RIS3_LENGTH                   equ 0001h
COG2RIS0_G2RIS3_MASK                     equ 0008h
COG2RIS0_G2RIS4_POSN                     equ 0004h
COG2RIS0_G2RIS4_POSITION                 equ 0004h
COG2RIS0_G2RIS4_SIZE                     equ 0001h
COG2RIS0_G2RIS4_LENGTH                   equ 0001h
COG2RIS0_G2RIS4_MASK                     equ 0010h
COG2RIS0_G2RIS5_POSN                     equ 0005h
COG2RIS0_G2RIS5_POSITION                 equ 0005h
COG2RIS0_G2RIS5_SIZE                     equ 0001h
COG2RIS0_G2RIS5_LENGTH                   equ 0001h
COG2RIS0_G2RIS5_MASK                     equ 0020h
COG2RIS0_G2RIS6_POSN                     equ 0006h
COG2RIS0_G2RIS6_POSITION                 equ 0006h
COG2RIS0_G2RIS6_SIZE                     equ 0001h
COG2RIS0_G2RIS6_LENGTH                   equ 0001h
COG2RIS0_G2RIS6_MASK                     equ 0040h
COG2RIS0_G2RIS7_POSN                     equ 0007h
COG2RIS0_G2RIS7_POSITION                 equ 0007h
COG2RIS0_G2RIS7_SIZE                     equ 0001h
COG2RIS0_G2RIS7_LENGTH                   equ 0001h
COG2RIS0_G2RIS7_MASK                     equ 0080h

// Register: COG2RIS1
#define COG2RIS1 COG2RIS1
COG2RIS1                                 equ 0716h
// bitfield definitions
COG2RIS1_RIS8_POSN                       equ 0000h
COG2RIS1_RIS8_POSITION                   equ 0000h
COG2RIS1_RIS8_SIZE                       equ 0001h
COG2RIS1_RIS8_LENGTH                     equ 0001h
COG2RIS1_RIS8_MASK                       equ 0001h
COG2RIS1_RIS9_POSN                       equ 0001h
COG2RIS1_RIS9_POSITION                   equ 0001h
COG2RIS1_RIS9_SIZE                       equ 0001h
COG2RIS1_RIS9_LENGTH                     equ 0001h
COG2RIS1_RIS9_MASK                       equ 0002h
COG2RIS1_RIS10_POSN                      equ 0002h
COG2RIS1_RIS10_POSITION                  equ 0002h
COG2RIS1_RIS10_SIZE                      equ 0001h
COG2RIS1_RIS10_LENGTH                    equ 0001h
COG2RIS1_RIS10_MASK                      equ 0004h
COG2RIS1_RIS11_POSN                      equ 0003h
COG2RIS1_RIS11_POSITION                  equ 0003h
COG2RIS1_RIS11_SIZE                      equ 0001h
COG2RIS1_RIS11_LENGTH                    equ 0001h
COG2RIS1_RIS11_MASK                      equ 0008h
COG2RIS1_RIS12_POSN                      equ 0004h
COG2RIS1_RIS12_POSITION                  equ 0004h
COG2RIS1_RIS12_SIZE                      equ 0001h
COG2RIS1_RIS12_LENGTH                    equ 0001h
COG2RIS1_RIS12_MASK                      equ 0010h
COG2RIS1_RIS13_POSN                      equ 0005h
COG2RIS1_RIS13_POSITION                  equ 0005h
COG2RIS1_RIS13_SIZE                      equ 0001h
COG2RIS1_RIS13_LENGTH                    equ 0001h
COG2RIS1_RIS13_MASK                      equ 0020h
COG2RIS1_RIS14_POSN                      equ 0006h
COG2RIS1_RIS14_POSITION                  equ 0006h
COG2RIS1_RIS14_SIZE                      equ 0001h
COG2RIS1_RIS14_LENGTH                    equ 0001h
COG2RIS1_RIS14_MASK                      equ 0040h
COG2RIS1_RIS15_POSN                      equ 0007h
COG2RIS1_RIS15_POSITION                  equ 0007h
COG2RIS1_RIS15_SIZE                      equ 0001h
COG2RIS1_RIS15_LENGTH                    equ 0001h
COG2RIS1_RIS15_MASK                      equ 0080h
COG2RIS1_G2RIS8_POSN                     equ 0000h
COG2RIS1_G2RIS8_POSITION                 equ 0000h
COG2RIS1_G2RIS8_SIZE                     equ 0001h
COG2RIS1_G2RIS8_LENGTH                   equ 0001h
COG2RIS1_G2RIS8_MASK                     equ 0001h
COG2RIS1_G2RIS9_POSN                     equ 0001h
COG2RIS1_G2RIS9_POSITION                 equ 0001h
COG2RIS1_G2RIS9_SIZE                     equ 0001h
COG2RIS1_G2RIS9_LENGTH                   equ 0001h
COG2RIS1_G2RIS9_MASK                     equ 0002h
COG2RIS1_G2RIS10_POSN                    equ 0002h
COG2RIS1_G2RIS10_POSITION                equ 0002h
COG2RIS1_G2RIS10_SIZE                    equ 0001h
COG2RIS1_G2RIS10_LENGTH                  equ 0001h
COG2RIS1_G2RIS10_MASK                    equ 0004h
COG2RIS1_G2RIS11_POSN                    equ 0003h
COG2RIS1_G2RIS11_POSITION                equ 0003h
COG2RIS1_G2RIS11_SIZE                    equ 0001h
COG2RIS1_G2RIS11_LENGTH                  equ 0001h
COG2RIS1_G2RIS11_MASK                    equ 0008h
COG2RIS1_G2RIS12_POSN                    equ 0004h
COG2RIS1_G2RIS12_POSITION                equ 0004h
COG2RIS1_G2RIS12_SIZE                    equ 0001h
COG2RIS1_G2RIS12_LENGTH                  equ 0001h
COG2RIS1_G2RIS12_MASK                    equ 0010h
COG2RIS1_G2RIS13_POSN                    equ 0005h
COG2RIS1_G2RIS13_POSITION                equ 0005h
COG2RIS1_G2RIS13_SIZE                    equ 0001h
COG2RIS1_G2RIS13_LENGTH                  equ 0001h
COG2RIS1_G2RIS13_MASK                    equ 0020h
COG2RIS1_G2RIS14_POSN                    equ 0006h
COG2RIS1_G2RIS14_POSITION                equ 0006h
COG2RIS1_G2RIS14_SIZE                    equ 0001h
COG2RIS1_G2RIS14_LENGTH                  equ 0001h
COG2RIS1_G2RIS14_MASK                    equ 0040h
COG2RIS1_G2RIS15_POSN                    equ 0007h
COG2RIS1_G2RIS15_POSITION                equ 0007h
COG2RIS1_G2RIS15_SIZE                    equ 0001h
COG2RIS1_G2RIS15_LENGTH                  equ 0001h
COG2RIS1_G2RIS15_MASK                    equ 0080h

// Register: COG2RSIM0
#define COG2RSIM0 COG2RSIM0
COG2RSIM0                                equ 0717h
// bitfield definitions
COG2RSIM0_RSIM0_POSN                     equ 0000h
COG2RSIM0_RSIM0_POSITION                 equ 0000h
COG2RSIM0_RSIM0_SIZE                     equ 0001h
COG2RSIM0_RSIM0_LENGTH                   equ 0001h
COG2RSIM0_RSIM0_MASK                     equ 0001h
COG2RSIM0_RSIM1_POSN                     equ 0001h
COG2RSIM0_RSIM1_POSITION                 equ 0001h
COG2RSIM0_RSIM1_SIZE                     equ 0001h
COG2RSIM0_RSIM1_LENGTH                   equ 0001h
COG2RSIM0_RSIM1_MASK                     equ 0002h
COG2RSIM0_RSIM2_POSN                     equ 0002h
COG2RSIM0_RSIM2_POSITION                 equ 0002h
COG2RSIM0_RSIM2_SIZE                     equ 0001h
COG2RSIM0_RSIM2_LENGTH                   equ 0001h
COG2RSIM0_RSIM2_MASK                     equ 0004h
COG2RSIM0_RSIM3_POSN                     equ 0003h
COG2RSIM0_RSIM3_POSITION                 equ 0003h
COG2RSIM0_RSIM3_SIZE                     equ 0001h
COG2RSIM0_RSIM3_LENGTH                   equ 0001h
COG2RSIM0_RSIM3_MASK                     equ 0008h
COG2RSIM0_RSIM4_POSN                     equ 0004h
COG2RSIM0_RSIM4_POSITION                 equ 0004h
COG2RSIM0_RSIM4_SIZE                     equ 0001h
COG2RSIM0_RSIM4_LENGTH                   equ 0001h
COG2RSIM0_RSIM4_MASK                     equ 0010h
COG2RSIM0_RSIM5_POSN                     equ 0005h
COG2RSIM0_RSIM5_POSITION                 equ 0005h
COG2RSIM0_RSIM5_SIZE                     equ 0001h
COG2RSIM0_RSIM5_LENGTH                   equ 0001h
COG2RSIM0_RSIM5_MASK                     equ 0020h
COG2RSIM0_RSIM6_POSN                     equ 0006h
COG2RSIM0_RSIM6_POSITION                 equ 0006h
COG2RSIM0_RSIM6_SIZE                     equ 0001h
COG2RSIM0_RSIM6_LENGTH                   equ 0001h
COG2RSIM0_RSIM6_MASK                     equ 0040h
COG2RSIM0_RSIM7_POSN                     equ 0007h
COG2RSIM0_RSIM7_POSITION                 equ 0007h
COG2RSIM0_RSIM7_SIZE                     equ 0001h
COG2RSIM0_RSIM7_LENGTH                   equ 0001h
COG2RSIM0_RSIM7_MASK                     equ 0080h
COG2RSIM0_G2RSIM0_POSN                   equ 0000h
COG2RSIM0_G2RSIM0_POSITION               equ 0000h
COG2RSIM0_G2RSIM0_SIZE                   equ 0001h
COG2RSIM0_G2RSIM0_LENGTH                 equ 0001h
COG2RSIM0_G2RSIM0_MASK                   equ 0001h
COG2RSIM0_G2RSIM1_POSN                   equ 0001h
COG2RSIM0_G2RSIM1_POSITION               equ 0001h
COG2RSIM0_G2RSIM1_SIZE                   equ 0001h
COG2RSIM0_G2RSIM1_LENGTH                 equ 0001h
COG2RSIM0_G2RSIM1_MASK                   equ 0002h
COG2RSIM0_G2RSIM2_POSN                   equ 0002h
COG2RSIM0_G2RSIM2_POSITION               equ 0002h
COG2RSIM0_G2RSIM2_SIZE                   equ 0001h
COG2RSIM0_G2RSIM2_LENGTH                 equ 0001h
COG2RSIM0_G2RSIM2_MASK                   equ 0004h
COG2RSIM0_G2RSIM3_POSN                   equ 0003h
COG2RSIM0_G2RSIM3_POSITION               equ 0003h
COG2RSIM0_G2RSIM3_SIZE                   equ 0001h
COG2RSIM0_G2RSIM3_LENGTH                 equ 0001h
COG2RSIM0_G2RSIM3_MASK                   equ 0008h
COG2RSIM0_G2RSIM4_POSN                   equ 0004h
COG2RSIM0_G2RSIM4_POSITION               equ 0004h
COG2RSIM0_G2RSIM4_SIZE                   equ 0001h
COG2RSIM0_G2RSIM4_LENGTH                 equ 0001h
COG2RSIM0_G2RSIM4_MASK                   equ 0010h
COG2RSIM0_G2RSIM5_POSN                   equ 0005h
COG2RSIM0_G2RSIM5_POSITION               equ 0005h
COG2RSIM0_G2RSIM5_SIZE                   equ 0001h
COG2RSIM0_G2RSIM5_LENGTH                 equ 0001h
COG2RSIM0_G2RSIM5_MASK                   equ 0020h
COG2RSIM0_G2RSIM6_POSN                   equ 0006h
COG2RSIM0_G2RSIM6_POSITION               equ 0006h
COG2RSIM0_G2RSIM6_SIZE                   equ 0001h
COG2RSIM0_G2RSIM6_LENGTH                 equ 0001h
COG2RSIM0_G2RSIM6_MASK                   equ 0040h
COG2RSIM0_G2RSIM7_POSN                   equ 0007h
COG2RSIM0_G2RSIM7_POSITION               equ 0007h
COG2RSIM0_G2RSIM7_SIZE                   equ 0001h
COG2RSIM0_G2RSIM7_LENGTH                 equ 0001h
COG2RSIM0_G2RSIM7_MASK                   equ 0080h

// Register: COG2RSIM1
#define COG2RSIM1 COG2RSIM1
COG2RSIM1                                equ 0718h
// bitfield definitions
COG2RSIM1_RSIM8_POSN                     equ 0000h
COG2RSIM1_RSIM8_POSITION                 equ 0000h
COG2RSIM1_RSIM8_SIZE                     equ 0001h
COG2RSIM1_RSIM8_LENGTH                   equ 0001h
COG2RSIM1_RSIM8_MASK                     equ 0001h
COG2RSIM1_RSIM9_POSN                     equ 0001h
COG2RSIM1_RSIM9_POSITION                 equ 0001h
COG2RSIM1_RSIM9_SIZE                     equ 0001h
COG2RSIM1_RSIM9_LENGTH                   equ 0001h
COG2RSIM1_RSIM9_MASK                     equ 0002h
COG2RSIM1_RSIM10_POSN                    equ 0002h
COG2RSIM1_RSIM10_POSITION                equ 0002h
COG2RSIM1_RSIM10_SIZE                    equ 0001h
COG2RSIM1_RSIM10_LENGTH                  equ 0001h
COG2RSIM1_RSIM10_MASK                    equ 0004h
COG2RSIM1_RSIM11_POSN                    equ 0003h
COG2RSIM1_RSIM11_POSITION                equ 0003h
COG2RSIM1_RSIM11_SIZE                    equ 0001h
COG2RSIM1_RSIM11_LENGTH                  equ 0001h
COG2RSIM1_RSIM11_MASK                    equ 0008h
COG2RSIM1_RSIM12_POSN                    equ 0004h
COG2RSIM1_RSIM12_POSITION                equ 0004h
COG2RSIM1_RSIM12_SIZE                    equ 0001h
COG2RSIM1_RSIM12_LENGTH                  equ 0001h
COG2RSIM1_RSIM12_MASK                    equ 0010h
COG2RSIM1_RSIM13_POSN                    equ 0005h
COG2RSIM1_RSIM13_POSITION                equ 0005h
COG2RSIM1_RSIM13_SIZE                    equ 0001h
COG2RSIM1_RSIM13_LENGTH                  equ 0001h
COG2RSIM1_RSIM13_MASK                    equ 0020h
COG2RSIM1_RSIM14_POSN                    equ 0006h
COG2RSIM1_RSIM14_POSITION                equ 0006h
COG2RSIM1_RSIM14_SIZE                    equ 0001h
COG2RSIM1_RSIM14_LENGTH                  equ 0001h
COG2RSIM1_RSIM14_MASK                    equ 0040h
COG2RSIM1_RSIM15_POSN                    equ 0007h
COG2RSIM1_RSIM15_POSITION                equ 0007h
COG2RSIM1_RSIM15_SIZE                    equ 0001h
COG2RSIM1_RSIM15_LENGTH                  equ 0001h
COG2RSIM1_RSIM15_MASK                    equ 0080h
COG2RSIM1_G2RSIM8_POSN                   equ 0000h
COG2RSIM1_G2RSIM8_POSITION               equ 0000h
COG2RSIM1_G2RSIM8_SIZE                   equ 0001h
COG2RSIM1_G2RSIM8_LENGTH                 equ 0001h
COG2RSIM1_G2RSIM8_MASK                   equ 0001h
COG2RSIM1_G2RSIM9_POSN                   equ 0001h
COG2RSIM1_G2RSIM9_POSITION               equ 0001h
COG2RSIM1_G2RSIM9_SIZE                   equ 0001h
COG2RSIM1_G2RSIM9_LENGTH                 equ 0001h
COG2RSIM1_G2RSIM9_MASK                   equ 0002h
COG2RSIM1_G2RSIM10_POSN                  equ 0002h
COG2RSIM1_G2RSIM10_POSITION              equ 0002h
COG2RSIM1_G2RSIM10_SIZE                  equ 0001h
COG2RSIM1_G2RSIM10_LENGTH                equ 0001h
COG2RSIM1_G2RSIM10_MASK                  equ 0004h
COG2RSIM1_G2RSIM11_POSN                  equ 0003h
COG2RSIM1_G2RSIM11_POSITION              equ 0003h
COG2RSIM1_G2RSIM11_SIZE                  equ 0001h
COG2RSIM1_G2RSIM11_LENGTH                equ 0001h
COG2RSIM1_G2RSIM11_MASK                  equ 0008h
COG2RSIM1_G2RSIM12_POSN                  equ 0004h
COG2RSIM1_G2RSIM12_POSITION              equ 0004h
COG2RSIM1_G2RSIM12_SIZE                  equ 0001h
COG2RSIM1_G2RSIM12_LENGTH                equ 0001h
COG2RSIM1_G2RSIM12_MASK                  equ 0010h
COG2RSIM1_G2RSIM13_POSN                  equ 0005h
COG2RSIM1_G2RSIM13_POSITION              equ 0005h
COG2RSIM1_G2RSIM13_SIZE                  equ 0001h
COG2RSIM1_G2RSIM13_LENGTH                equ 0001h
COG2RSIM1_G2RSIM13_MASK                  equ 0020h
COG2RSIM1_G2RSIM14_POSN                  equ 0006h
COG2RSIM1_G2RSIM14_POSITION              equ 0006h
COG2RSIM1_G2RSIM14_SIZE                  equ 0001h
COG2RSIM1_G2RSIM14_LENGTH                equ 0001h
COG2RSIM1_G2RSIM14_MASK                  equ 0040h
COG2RSIM1_G2RSIM15_POSN                  equ 0007h
COG2RSIM1_G2RSIM15_POSITION              equ 0007h
COG2RSIM1_G2RSIM15_SIZE                  equ 0001h
COG2RSIM1_G2RSIM15_LENGTH                equ 0001h
COG2RSIM1_G2RSIM15_MASK                  equ 0080h

// Register: COG2FIS0
#define COG2FIS0 COG2FIS0
COG2FIS0                                 equ 0719h
// bitfield definitions
COG2FIS0_FIS0_POSN                       equ 0000h
COG2FIS0_FIS0_POSITION                   equ 0000h
COG2FIS0_FIS0_SIZE                       equ 0001h
COG2FIS0_FIS0_LENGTH                     equ 0001h
COG2FIS0_FIS0_MASK                       equ 0001h
COG2FIS0_FIS1_POSN                       equ 0001h
COG2FIS0_FIS1_POSITION                   equ 0001h
COG2FIS0_FIS1_SIZE                       equ 0001h
COG2FIS0_FIS1_LENGTH                     equ 0001h
COG2FIS0_FIS1_MASK                       equ 0002h
COG2FIS0_FIS2_POSN                       equ 0002h
COG2FIS0_FIS2_POSITION                   equ 0002h
COG2FIS0_FIS2_SIZE                       equ 0001h
COG2FIS0_FIS2_LENGTH                     equ 0001h
COG2FIS0_FIS2_MASK                       equ 0004h
COG2FIS0_FIS3_POSN                       equ 0003h
COG2FIS0_FIS3_POSITION                   equ 0003h
COG2FIS0_FIS3_SIZE                       equ 0001h
COG2FIS0_FIS3_LENGTH                     equ 0001h
COG2FIS0_FIS3_MASK                       equ 0008h
COG2FIS0_FIS4_POSN                       equ 0004h
COG2FIS0_FIS4_POSITION                   equ 0004h
COG2FIS0_FIS4_SIZE                       equ 0001h
COG2FIS0_FIS4_LENGTH                     equ 0001h
COG2FIS0_FIS4_MASK                       equ 0010h
COG2FIS0_FIS5_POSN                       equ 0005h
COG2FIS0_FIS5_POSITION                   equ 0005h
COG2FIS0_FIS5_SIZE                       equ 0001h
COG2FIS0_FIS5_LENGTH                     equ 0001h
COG2FIS0_FIS5_MASK                       equ 0020h
COG2FIS0_FIS6_POSN                       equ 0006h
COG2FIS0_FIS6_POSITION                   equ 0006h
COG2FIS0_FIS6_SIZE                       equ 0001h
COG2FIS0_FIS6_LENGTH                     equ 0001h
COG2FIS0_FIS6_MASK                       equ 0040h
COG2FIS0_FIS7_POSN                       equ 0007h
COG2FIS0_FIS7_POSITION                   equ 0007h
COG2FIS0_FIS7_SIZE                       equ 0001h
COG2FIS0_FIS7_LENGTH                     equ 0001h
COG2FIS0_FIS7_MASK                       equ 0080h
COG2FIS0_G2FIS0_POSN                     equ 0000h
COG2FIS0_G2FIS0_POSITION                 equ 0000h
COG2FIS0_G2FIS0_SIZE                     equ 0001h
COG2FIS0_G2FIS0_LENGTH                   equ 0001h
COG2FIS0_G2FIS0_MASK                     equ 0001h
COG2FIS0_G2FIS1_POSN                     equ 0001h
COG2FIS0_G2FIS1_POSITION                 equ 0001h
COG2FIS0_G2FIS1_SIZE                     equ 0001h
COG2FIS0_G2FIS1_LENGTH                   equ 0001h
COG2FIS0_G2FIS1_MASK                     equ 0002h
COG2FIS0_G2FIS2_POSN                     equ 0002h
COG2FIS0_G2FIS2_POSITION                 equ 0002h
COG2FIS0_G2FIS2_SIZE                     equ 0001h
COG2FIS0_G2FIS2_LENGTH                   equ 0001h
COG2FIS0_G2FIS2_MASK                     equ 0004h
COG2FIS0_G2FIS3_POSN                     equ 0003h
COG2FIS0_G2FIS3_POSITION                 equ 0003h
COG2FIS0_G2FIS3_SIZE                     equ 0001h
COG2FIS0_G2FIS3_LENGTH                   equ 0001h
COG2FIS0_G2FIS3_MASK                     equ 0008h
COG2FIS0_G2FIS4_POSN                     equ 0004h
COG2FIS0_G2FIS4_POSITION                 equ 0004h
COG2FIS0_G2FIS4_SIZE                     equ 0001h
COG2FIS0_G2FIS4_LENGTH                   equ 0001h
COG2FIS0_G2FIS4_MASK                     equ 0010h
COG2FIS0_G2FIS5_POSN                     equ 0005h
COG2FIS0_G2FIS5_POSITION                 equ 0005h
COG2FIS0_G2FIS5_SIZE                     equ 0001h
COG2FIS0_G2FIS5_LENGTH                   equ 0001h
COG2FIS0_G2FIS5_MASK                     equ 0020h
COG2FIS0_G2FIS6_POSN                     equ 0006h
COG2FIS0_G2FIS6_POSITION                 equ 0006h
COG2FIS0_G2FIS6_SIZE                     equ 0001h
COG2FIS0_G2FIS6_LENGTH                   equ 0001h
COG2FIS0_G2FIS6_MASK                     equ 0040h
COG2FIS0_G2FIS7_POSN                     equ 0007h
COG2FIS0_G2FIS7_POSITION                 equ 0007h
COG2FIS0_G2FIS7_SIZE                     equ 0001h
COG2FIS0_G2FIS7_LENGTH                   equ 0001h
COG2FIS0_G2FIS7_MASK                     equ 0080h

// Register: COG2FIS1
#define COG2FIS1 COG2FIS1
COG2FIS1                                 equ 071Ah
// bitfield definitions
COG2FIS1_FIS8_POSN                       equ 0000h
COG2FIS1_FIS8_POSITION                   equ 0000h
COG2FIS1_FIS8_SIZE                       equ 0001h
COG2FIS1_FIS8_LENGTH                     equ 0001h
COG2FIS1_FIS8_MASK                       equ 0001h
COG2FIS1_FIS9_POSN                       equ 0001h
COG2FIS1_FIS9_POSITION                   equ 0001h
COG2FIS1_FIS9_SIZE                       equ 0001h
COG2FIS1_FIS9_LENGTH                     equ 0001h
COG2FIS1_FIS9_MASK                       equ 0002h
COG2FIS1_FIS10_POSN                      equ 0002h
COG2FIS1_FIS10_POSITION                  equ 0002h
COG2FIS1_FIS10_SIZE                      equ 0001h
COG2FIS1_FIS10_LENGTH                    equ 0001h
COG2FIS1_FIS10_MASK                      equ 0004h
COG2FIS1_FIS11_POSN                      equ 0003h
COG2FIS1_FIS11_POSITION                  equ 0003h
COG2FIS1_FIS11_SIZE                      equ 0001h
COG2FIS1_FIS11_LENGTH                    equ 0001h
COG2FIS1_FIS11_MASK                      equ 0008h
COG2FIS1_FIS12_POSN                      equ 0004h
COG2FIS1_FIS12_POSITION                  equ 0004h
COG2FIS1_FIS12_SIZE                      equ 0001h
COG2FIS1_FIS12_LENGTH                    equ 0001h
COG2FIS1_FIS12_MASK                      equ 0010h
COG2FIS1_FIS13_POSN                      equ 0005h
COG2FIS1_FIS13_POSITION                  equ 0005h
COG2FIS1_FIS13_SIZE                      equ 0001h
COG2FIS1_FIS13_LENGTH                    equ 0001h
COG2FIS1_FIS13_MASK                      equ 0020h
COG2FIS1_FIS14_POSN                      equ 0006h
COG2FIS1_FIS14_POSITION                  equ 0006h
COG2FIS1_FIS14_SIZE                      equ 0001h
COG2FIS1_FIS14_LENGTH                    equ 0001h
COG2FIS1_FIS14_MASK                      equ 0040h
COG2FIS1_FIS15_POSN                      equ 0007h
COG2FIS1_FIS15_POSITION                  equ 0007h
COG2FIS1_FIS15_SIZE                      equ 0001h
COG2FIS1_FIS15_LENGTH                    equ 0001h
COG2FIS1_FIS15_MASK                      equ 0080h
COG2FIS1_G2FIS8_POSN                     equ 0000h
COG2FIS1_G2FIS8_POSITION                 equ 0000h
COG2FIS1_G2FIS8_SIZE                     equ 0001h
COG2FIS1_G2FIS8_LENGTH                   equ 0001h
COG2FIS1_G2FIS8_MASK                     equ 0001h
COG2FIS1_G2FIS9_POSN                     equ 0001h
COG2FIS1_G2FIS9_POSITION                 equ 0001h
COG2FIS1_G2FIS9_SIZE                     equ 0001h
COG2FIS1_G2FIS9_LENGTH                   equ 0001h
COG2FIS1_G2FIS9_MASK                     equ 0002h
COG2FIS1_G2FIS10_POSN                    equ 0002h
COG2FIS1_G2FIS10_POSITION                equ 0002h
COG2FIS1_G2FIS10_SIZE                    equ 0001h
COG2FIS1_G2FIS10_LENGTH                  equ 0001h
COG2FIS1_G2FIS10_MASK                    equ 0004h
COG2FIS1_G2FIS11_POSN                    equ 0003h
COG2FIS1_G2FIS11_POSITION                equ 0003h
COG2FIS1_G2FIS11_SIZE                    equ 0001h
COG2FIS1_G2FIS11_LENGTH                  equ 0001h
COG2FIS1_G2FIS11_MASK                    equ 0008h
COG2FIS1_G2FIS12_POSN                    equ 0004h
COG2FIS1_G2FIS12_POSITION                equ 0004h
COG2FIS1_G2FIS12_SIZE                    equ 0001h
COG2FIS1_G2FIS12_LENGTH                  equ 0001h
COG2FIS1_G2FIS12_MASK                    equ 0010h
COG2FIS1_G2FIS13_POSN                    equ 0005h
COG2FIS1_G2FIS13_POSITION                equ 0005h
COG2FIS1_G2FIS13_SIZE                    equ 0001h
COG2FIS1_G2FIS13_LENGTH                  equ 0001h
COG2FIS1_G2FIS13_MASK                    equ 0020h
COG2FIS1_G2FIS14_POSN                    equ 0006h
COG2FIS1_G2FIS14_POSITION                equ 0006h
COG2FIS1_G2FIS14_SIZE                    equ 0001h
COG2FIS1_G2FIS14_LENGTH                  equ 0001h
COG2FIS1_G2FIS14_MASK                    equ 0040h
COG2FIS1_G2FIS15_POSN                    equ 0007h
COG2FIS1_G2FIS15_POSITION                equ 0007h
COG2FIS1_G2FIS15_SIZE                    equ 0001h
COG2FIS1_G2FIS15_LENGTH                  equ 0001h
COG2FIS1_G2FIS15_MASK                    equ 0080h

// Register: COG2FSIM0
#define COG2FSIM0 COG2FSIM0
COG2FSIM0                                equ 071Bh
// bitfield definitions
COG2FSIM0_FSIM0_POSN                     equ 0000h
COG2FSIM0_FSIM0_POSITION                 equ 0000h
COG2FSIM0_FSIM0_SIZE                     equ 0001h
COG2FSIM0_FSIM0_LENGTH                   equ 0001h
COG2FSIM0_FSIM0_MASK                     equ 0001h
COG2FSIM0_FSIM1_POSN                     equ 0001h
COG2FSIM0_FSIM1_POSITION                 equ 0001h
COG2FSIM0_FSIM1_SIZE                     equ 0001h
COG2FSIM0_FSIM1_LENGTH                   equ 0001h
COG2FSIM0_FSIM1_MASK                     equ 0002h
COG2FSIM0_FSIM2_POSN                     equ 0002h
COG2FSIM0_FSIM2_POSITION                 equ 0002h
COG2FSIM0_FSIM2_SIZE                     equ 0001h
COG2FSIM0_FSIM2_LENGTH                   equ 0001h
COG2FSIM0_FSIM2_MASK                     equ 0004h
COG2FSIM0_FSIM3_POSN                     equ 0003h
COG2FSIM0_FSIM3_POSITION                 equ 0003h
COG2FSIM0_FSIM3_SIZE                     equ 0001h
COG2FSIM0_FSIM3_LENGTH                   equ 0001h
COG2FSIM0_FSIM3_MASK                     equ 0008h
COG2FSIM0_FSIM4_POSN                     equ 0004h
COG2FSIM0_FSIM4_POSITION                 equ 0004h
COG2FSIM0_FSIM4_SIZE                     equ 0001h
COG2FSIM0_FSIM4_LENGTH                   equ 0001h
COG2FSIM0_FSIM4_MASK                     equ 0010h
COG2FSIM0_FSIM5_POSN                     equ 0005h
COG2FSIM0_FSIM5_POSITION                 equ 0005h
COG2FSIM0_FSIM5_SIZE                     equ 0001h
COG2FSIM0_FSIM5_LENGTH                   equ 0001h
COG2FSIM0_FSIM5_MASK                     equ 0020h
COG2FSIM0_FSIM6_POSN                     equ 0006h
COG2FSIM0_FSIM6_POSITION                 equ 0006h
COG2FSIM0_FSIM6_SIZE                     equ 0001h
COG2FSIM0_FSIM6_LENGTH                   equ 0001h
COG2FSIM0_FSIM6_MASK                     equ 0040h
COG2FSIM0_FSIM7_POSN                     equ 0007h
COG2FSIM0_FSIM7_POSITION                 equ 0007h
COG2FSIM0_FSIM7_SIZE                     equ 0001h
COG2FSIM0_FSIM7_LENGTH                   equ 0001h
COG2FSIM0_FSIM7_MASK                     equ 0080h
COG2FSIM0_G2FSIM0_POSN                   equ 0000h
COG2FSIM0_G2FSIM0_POSITION               equ 0000h
COG2FSIM0_G2FSIM0_SIZE                   equ 0001h
COG2FSIM0_G2FSIM0_LENGTH                 equ 0001h
COG2FSIM0_G2FSIM0_MASK                   equ 0001h
COG2FSIM0_G2FSIM1_POSN                   equ 0001h
COG2FSIM0_G2FSIM1_POSITION               equ 0001h
COG2FSIM0_G2FSIM1_SIZE                   equ 0001h
COG2FSIM0_G2FSIM1_LENGTH                 equ 0001h
COG2FSIM0_G2FSIM1_MASK                   equ 0002h
COG2FSIM0_G2FSIM2_POSN                   equ 0002h
COG2FSIM0_G2FSIM2_POSITION               equ 0002h
COG2FSIM0_G2FSIM2_SIZE                   equ 0001h
COG2FSIM0_G2FSIM2_LENGTH                 equ 0001h
COG2FSIM0_G2FSIM2_MASK                   equ 0004h
COG2FSIM0_G2FSIM3_POSN                   equ 0003h
COG2FSIM0_G2FSIM3_POSITION               equ 0003h
COG2FSIM0_G2FSIM3_SIZE                   equ 0001h
COG2FSIM0_G2FSIM3_LENGTH                 equ 0001h
COG2FSIM0_G2FSIM3_MASK                   equ 0008h
COG2FSIM0_G2FSIM4_POSN                   equ 0004h
COG2FSIM0_G2FSIM4_POSITION               equ 0004h
COG2FSIM0_G2FSIM4_SIZE                   equ 0001h
COG2FSIM0_G2FSIM4_LENGTH                 equ 0001h
COG2FSIM0_G2FSIM4_MASK                   equ 0010h
COG2FSIM0_G2FSIM5_POSN                   equ 0005h
COG2FSIM0_G2FSIM5_POSITION               equ 0005h
COG2FSIM0_G2FSIM5_SIZE                   equ 0001h
COG2FSIM0_G2FSIM5_LENGTH                 equ 0001h
COG2FSIM0_G2FSIM5_MASK                   equ 0020h
COG2FSIM0_G2FSIM6_POSN                   equ 0006h
COG2FSIM0_G2FSIM6_POSITION               equ 0006h
COG2FSIM0_G2FSIM6_SIZE                   equ 0001h
COG2FSIM0_G2FSIM6_LENGTH                 equ 0001h
COG2FSIM0_G2FSIM6_MASK                   equ 0040h
COG2FSIM0_G2FSIM7_POSN                   equ 0007h
COG2FSIM0_G2FSIM7_POSITION               equ 0007h
COG2FSIM0_G2FSIM7_SIZE                   equ 0001h
COG2FSIM0_G2FSIM7_LENGTH                 equ 0001h
COG2FSIM0_G2FSIM7_MASK                   equ 0080h

// Register: COG2FSIM1
#define COG2FSIM1 COG2FSIM1
COG2FSIM1                                equ 071Ch
// bitfield definitions
COG2FSIM1_FSIM8_POSN                     equ 0000h
COG2FSIM1_FSIM8_POSITION                 equ 0000h
COG2FSIM1_FSIM8_SIZE                     equ 0001h
COG2FSIM1_FSIM8_LENGTH                   equ 0001h
COG2FSIM1_FSIM8_MASK                     equ 0001h
COG2FSIM1_FSIM9_POSN                     equ 0001h
COG2FSIM1_FSIM9_POSITION                 equ 0001h
COG2FSIM1_FSIM9_SIZE                     equ 0001h
COG2FSIM1_FSIM9_LENGTH                   equ 0001h
COG2FSIM1_FSIM9_MASK                     equ 0002h
COG2FSIM1_FSIM10_POSN                    equ 0002h
COG2FSIM1_FSIM10_POSITION                equ 0002h
COG2FSIM1_FSIM10_SIZE                    equ 0001h
COG2FSIM1_FSIM10_LENGTH                  equ 0001h
COG2FSIM1_FSIM10_MASK                    equ 0004h
COG2FSIM1_FSIM11_POSN                    equ 0003h
COG2FSIM1_FSIM11_POSITION                equ 0003h
COG2FSIM1_FSIM11_SIZE                    equ 0001h
COG2FSIM1_FSIM11_LENGTH                  equ 0001h
COG2FSIM1_FSIM11_MASK                    equ 0008h
COG2FSIM1_FSIM12_POSN                    equ 0004h
COG2FSIM1_FSIM12_POSITION                equ 0004h
COG2FSIM1_FSIM12_SIZE                    equ 0001h
COG2FSIM1_FSIM12_LENGTH                  equ 0001h
COG2FSIM1_FSIM12_MASK                    equ 0010h
COG2FSIM1_FSIM13_POSN                    equ 0005h
COG2FSIM1_FSIM13_POSITION                equ 0005h
COG2FSIM1_FSIM13_SIZE                    equ 0001h
COG2FSIM1_FSIM13_LENGTH                  equ 0001h
COG2FSIM1_FSIM13_MASK                    equ 0020h
COG2FSIM1_FSIM14_POSN                    equ 0006h
COG2FSIM1_FSIM14_POSITION                equ 0006h
COG2FSIM1_FSIM14_SIZE                    equ 0001h
COG2FSIM1_FSIM14_LENGTH                  equ 0001h
COG2FSIM1_FSIM14_MASK                    equ 0040h
COG2FSIM1_FSIM15_POSN                    equ 0007h
COG2FSIM1_FSIM15_POSITION                equ 0007h
COG2FSIM1_FSIM15_SIZE                    equ 0001h
COG2FSIM1_FSIM15_LENGTH                  equ 0001h
COG2FSIM1_FSIM15_MASK                    equ 0080h
COG2FSIM1_G2FSIM8_POSN                   equ 0000h
COG2FSIM1_G2FSIM8_POSITION               equ 0000h
COG2FSIM1_G2FSIM8_SIZE                   equ 0001h
COG2FSIM1_G2FSIM8_LENGTH                 equ 0001h
COG2FSIM1_G2FSIM8_MASK                   equ 0001h
COG2FSIM1_G2FSIM9_POSN                   equ 0001h
COG2FSIM1_G2FSIM9_POSITION               equ 0001h
COG2FSIM1_G2FSIM9_SIZE                   equ 0001h
COG2FSIM1_G2FSIM9_LENGTH                 equ 0001h
COG2FSIM1_G2FSIM9_MASK                   equ 0002h
COG2FSIM1_G2FSIM10_POSN                  equ 0002h
COG2FSIM1_G2FSIM10_POSITION              equ 0002h
COG2FSIM1_G2FSIM10_SIZE                  equ 0001h
COG2FSIM1_G2FSIM10_LENGTH                equ 0001h
COG2FSIM1_G2FSIM10_MASK                  equ 0004h
COG2FSIM1_G2FSIM11_POSN                  equ 0003h
COG2FSIM1_G2FSIM11_POSITION              equ 0003h
COG2FSIM1_G2FSIM11_SIZE                  equ 0001h
COG2FSIM1_G2FSIM11_LENGTH                equ 0001h
COG2FSIM1_G2FSIM11_MASK                  equ 0008h
COG2FSIM1_G2FSIM12_POSN                  equ 0004h
COG2FSIM1_G2FSIM12_POSITION              equ 0004h
COG2FSIM1_G2FSIM12_SIZE                  equ 0001h
COG2FSIM1_G2FSIM12_LENGTH                equ 0001h
COG2FSIM1_G2FSIM12_MASK                  equ 0010h
COG2FSIM1_G2FSIM13_POSN                  equ 0005h
COG2FSIM1_G2FSIM13_POSITION              equ 0005h
COG2FSIM1_G2FSIM13_SIZE                  equ 0001h
COG2FSIM1_G2FSIM13_LENGTH                equ 0001h
COG2FSIM1_G2FSIM13_MASK                  equ 0020h
COG2FSIM1_G2FSIM14_POSN                  equ 0006h
COG2FSIM1_G2FSIM14_POSITION              equ 0006h
COG2FSIM1_G2FSIM14_SIZE                  equ 0001h
COG2FSIM1_G2FSIM14_LENGTH                equ 0001h
COG2FSIM1_G2FSIM14_MASK                  equ 0040h
COG2FSIM1_G2FSIM15_POSN                  equ 0007h
COG2FSIM1_G2FSIM15_POSITION              equ 0007h
COG2FSIM1_G2FSIM15_SIZE                  equ 0001h
COG2FSIM1_G2FSIM15_LENGTH                equ 0001h
COG2FSIM1_G2FSIM15_MASK                  equ 0080h

// Register: COG2ASD0
#define COG2ASD0 COG2ASD0
COG2ASD0                                 equ 071Dh
// bitfield definitions
COG2ASD0_ASDAC_POSN                      equ 0002h
COG2ASD0_ASDAC_POSITION                  equ 0002h
COG2ASD0_ASDAC_SIZE                      equ 0002h
COG2ASD0_ASDAC_LENGTH                    equ 0002h
COG2ASD0_ASDAC_MASK                      equ 000Ch
COG2ASD0_ASDBD_POSN                      equ 0004h
COG2ASD0_ASDBD_POSITION                  equ 0004h
COG2ASD0_ASDBD_SIZE                      equ 0002h
COG2ASD0_ASDBD_LENGTH                    equ 0002h
COG2ASD0_ASDBD_MASK                      equ 0030h
COG2ASD0_ASREN_POSN                      equ 0006h
COG2ASD0_ASREN_POSITION                  equ 0006h
COG2ASD0_ASREN_SIZE                      equ 0001h
COG2ASD0_ASREN_LENGTH                    equ 0001h
COG2ASD0_ASREN_MASK                      equ 0040h
COG2ASD0_ASE_POSN                        equ 0007h
COG2ASD0_ASE_POSITION                    equ 0007h
COG2ASD0_ASE_SIZE                        equ 0001h
COG2ASD0_ASE_LENGTH                      equ 0001h
COG2ASD0_ASE_MASK                        equ 0080h
COG2ASD0_ASDAC0_POSN                     equ 0002h
COG2ASD0_ASDAC0_POSITION                 equ 0002h
COG2ASD0_ASDAC0_SIZE                     equ 0001h
COG2ASD0_ASDAC0_LENGTH                   equ 0001h
COG2ASD0_ASDAC0_MASK                     equ 0004h
COG2ASD0_ASDAC1_POSN                     equ 0003h
COG2ASD0_ASDAC1_POSITION                 equ 0003h
COG2ASD0_ASDAC1_SIZE                     equ 0001h
COG2ASD0_ASDAC1_LENGTH                   equ 0001h
COG2ASD0_ASDAC1_MASK                     equ 0008h
COG2ASD0_ASDBD0_POSN                     equ 0004h
COG2ASD0_ASDBD0_POSITION                 equ 0004h
COG2ASD0_ASDBD0_SIZE                     equ 0001h
COG2ASD0_ASDBD0_LENGTH                   equ 0001h
COG2ASD0_ASDBD0_MASK                     equ 0010h
COG2ASD0_ASDBD1_POSN                     equ 0005h
COG2ASD0_ASDBD1_POSITION                 equ 0005h
COG2ASD0_ASDBD1_SIZE                     equ 0001h
COG2ASD0_ASDBD1_LENGTH                   equ 0001h
COG2ASD0_ASDBD1_MASK                     equ 0020h
COG2ASD0_ARSEN_POSN                      equ 0006h
COG2ASD0_ARSEN_POSITION                  equ 0006h
COG2ASD0_ARSEN_SIZE                      equ 0001h
COG2ASD0_ARSEN_LENGTH                    equ 0001h
COG2ASD0_ARSEN_MASK                      equ 0040h
COG2ASD0_G2ASDAC_POSN                    equ 0002h
COG2ASD0_G2ASDAC_POSITION                equ 0002h
COG2ASD0_G2ASDAC_SIZE                    equ 0002h
COG2ASD0_G2ASDAC_LENGTH                  equ 0002h
COG2ASD0_G2ASDAC_MASK                    equ 000Ch
COG2ASD0_G2ASDBD_POSN                    equ 0004h
COG2ASD0_G2ASDBD_POSITION                equ 0004h
COG2ASD0_G2ASDBD_SIZE                    equ 0002h
COG2ASD0_G2ASDBD_LENGTH                  equ 0002h
COG2ASD0_G2ASDBD_MASK                    equ 0030h
COG2ASD0_G2ARSEN_POSN                    equ 0006h
COG2ASD0_G2ARSEN_POSITION                equ 0006h
COG2ASD0_G2ARSEN_SIZE                    equ 0001h
COG2ASD0_G2ARSEN_LENGTH                  equ 0001h
COG2ASD0_G2ARSEN_MASK                    equ 0040h
COG2ASD0_G2ASE_POSN                      equ 0007h
COG2ASD0_G2ASE_POSITION                  equ 0007h
COG2ASD0_G2ASE_SIZE                      equ 0001h
COG2ASD0_G2ASE_LENGTH                    equ 0001h
COG2ASD0_G2ASE_MASK                      equ 0080h
COG2ASD0_G2ASDAC0_POSN                   equ 0002h
COG2ASD0_G2ASDAC0_POSITION               equ 0002h
COG2ASD0_G2ASDAC0_SIZE                   equ 0001h
COG2ASD0_G2ASDAC0_LENGTH                 equ 0001h
COG2ASD0_G2ASDAC0_MASK                   equ 0004h
COG2ASD0_G2ASDAC1_POSN                   equ 0003h
COG2ASD0_G2ASDAC1_POSITION               equ 0003h
COG2ASD0_G2ASDAC1_SIZE                   equ 0001h
COG2ASD0_G2ASDAC1_LENGTH                 equ 0001h
COG2ASD0_G2ASDAC1_MASK                   equ 0008h
COG2ASD0_G2ASDBD0_POSN                   equ 0004h
COG2ASD0_G2ASDBD0_POSITION               equ 0004h
COG2ASD0_G2ASDBD0_SIZE                   equ 0001h
COG2ASD0_G2ASDBD0_LENGTH                 equ 0001h
COG2ASD0_G2ASDBD0_MASK                   equ 0010h
COG2ASD0_G2ASDBD1_POSN                   equ 0005h
COG2ASD0_G2ASDBD1_POSITION               equ 0005h
COG2ASD0_G2ASDBD1_SIZE                   equ 0001h
COG2ASD0_G2ASDBD1_LENGTH                 equ 0001h
COG2ASD0_G2ASDBD1_MASK                   equ 0020h
COG2ASD0_G2ASREN_POSN                    equ 0006h
COG2ASD0_G2ASREN_POSITION                equ 0006h
COG2ASD0_G2ASREN_SIZE                    equ 0001h
COG2ASD0_G2ASREN_LENGTH                  equ 0001h
COG2ASD0_G2ASREN_MASK                    equ 0040h

// Register: COG2ASD1
#define COG2ASD1 COG2ASD1
COG2ASD1                                 equ 071Eh
// bitfield definitions
COG2ASD1_AS0E_POSN                       equ 0000h
COG2ASD1_AS0E_POSITION                   equ 0000h
COG2ASD1_AS0E_SIZE                       equ 0001h
COG2ASD1_AS0E_LENGTH                     equ 0001h
COG2ASD1_AS0E_MASK                       equ 0001h
COG2ASD1_AS1E_POSN                       equ 0001h
COG2ASD1_AS1E_POSITION                   equ 0001h
COG2ASD1_AS1E_SIZE                       equ 0001h
COG2ASD1_AS1E_LENGTH                     equ 0001h
COG2ASD1_AS1E_MASK                       equ 0002h
COG2ASD1_AS2E_POSN                       equ 0002h
COG2ASD1_AS2E_POSITION                   equ 0002h
COG2ASD1_AS2E_SIZE                       equ 0001h
COG2ASD1_AS2E_LENGTH                     equ 0001h
COG2ASD1_AS2E_MASK                       equ 0004h
COG2ASD1_AS3E_POSN                       equ 0003h
COG2ASD1_AS3E_POSITION                   equ 0003h
COG2ASD1_AS3E_SIZE                       equ 0001h
COG2ASD1_AS3E_LENGTH                     equ 0001h
COG2ASD1_AS3E_MASK                       equ 0008h
COG2ASD1_AS4E_POSN                       equ 0004h
COG2ASD1_AS4E_POSITION                   equ 0004h
COG2ASD1_AS4E_SIZE                       equ 0001h
COG2ASD1_AS4E_LENGTH                     equ 0001h
COG2ASD1_AS4E_MASK                       equ 0010h
COG2ASD1_AS5E_POSN                       equ 0005h
COG2ASD1_AS5E_POSITION                   equ 0005h
COG2ASD1_AS5E_SIZE                       equ 0001h
COG2ASD1_AS5E_LENGTH                     equ 0001h
COG2ASD1_AS5E_MASK                       equ 0020h
COG2ASD1_AS6E_POSN                       equ 0006h
COG2ASD1_AS6E_POSITION                   equ 0006h
COG2ASD1_AS6E_SIZE                       equ 0001h
COG2ASD1_AS6E_LENGTH                     equ 0001h
COG2ASD1_AS6E_MASK                       equ 0040h
COG2ASD1_AS7E_POSN                       equ 0007h
COG2ASD1_AS7E_POSITION                   equ 0007h
COG2ASD1_AS7E_SIZE                       equ 0001h
COG2ASD1_AS7E_LENGTH                     equ 0001h
COG2ASD1_AS7E_MASK                       equ 0080h
COG2ASD1_G2AS0E_POSN                     equ 0000h
COG2ASD1_G2AS0E_POSITION                 equ 0000h
COG2ASD1_G2AS0E_SIZE                     equ 0001h
COG2ASD1_G2AS0E_LENGTH                   equ 0001h
COG2ASD1_G2AS0E_MASK                     equ 0001h
COG2ASD1_G2AS1E_POSN                     equ 0001h
COG2ASD1_G2AS1E_POSITION                 equ 0001h
COG2ASD1_G2AS1E_SIZE                     equ 0001h
COG2ASD1_G2AS1E_LENGTH                   equ 0001h
COG2ASD1_G2AS1E_MASK                     equ 0002h
COG2ASD1_G2AS2E_POSN                     equ 0002h
COG2ASD1_G2AS2E_POSITION                 equ 0002h
COG2ASD1_G2AS2E_SIZE                     equ 0001h
COG2ASD1_G2AS2E_LENGTH                   equ 0001h
COG2ASD1_G2AS2E_MASK                     equ 0004h
COG2ASD1_G2AS3E_POSN                     equ 0003h
COG2ASD1_G2AS3E_POSITION                 equ 0003h
COG2ASD1_G2AS3E_SIZE                     equ 0001h
COG2ASD1_G2AS3E_LENGTH                   equ 0001h
COG2ASD1_G2AS3E_MASK                     equ 0008h
COG2ASD1_G2AS4E_POSN                     equ 0004h
COG2ASD1_G2AS4E_POSITION                 equ 0004h
COG2ASD1_G2AS4E_SIZE                     equ 0001h
COG2ASD1_G2AS4E_LENGTH                   equ 0001h
COG2ASD1_G2AS4E_MASK                     equ 0010h
COG2ASD1_G2AS5E_POSN                     equ 0005h
COG2ASD1_G2AS5E_POSITION                 equ 0005h
COG2ASD1_G2AS5E_SIZE                     equ 0001h
COG2ASD1_G2AS5E_LENGTH                   equ 0001h
COG2ASD1_G2AS5E_MASK                     equ 0020h
COG2ASD1_G2AS6E_POSN                     equ 0006h
COG2ASD1_G2AS6E_POSITION                 equ 0006h
COG2ASD1_G2AS6E_SIZE                     equ 0001h
COG2ASD1_G2AS6E_LENGTH                   equ 0001h
COG2ASD1_G2AS6E_MASK                     equ 0040h
COG2ASD1_G2AS7E_POSN                     equ 0007h
COG2ASD1_G2AS7E_POSITION                 equ 0007h
COG2ASD1_G2AS7E_SIZE                     equ 0001h
COG2ASD1_G2AS7E_LENGTH                   equ 0001h
COG2ASD1_G2AS7E_MASK                     equ 0080h

// Register: COG2STR
#define COG2STR COG2STR
COG2STR                                  equ 071Fh
// bitfield definitions
COG2STR_STRA_POSN                        equ 0000h
COG2STR_STRA_POSITION                    equ 0000h
COG2STR_STRA_SIZE                        equ 0001h
COG2STR_STRA_LENGTH                      equ 0001h
COG2STR_STRA_MASK                        equ 0001h
COG2STR_STRB_POSN                        equ 0001h
COG2STR_STRB_POSITION                    equ 0001h
COG2STR_STRB_SIZE                        equ 0001h
COG2STR_STRB_LENGTH                      equ 0001h
COG2STR_STRB_MASK                        equ 0002h
COG2STR_STRC_POSN                        equ 0002h
COG2STR_STRC_POSITION                    equ 0002h
COG2STR_STRC_SIZE                        equ 0001h
COG2STR_STRC_LENGTH                      equ 0001h
COG2STR_STRC_MASK                        equ 0004h
COG2STR_STRD_POSN                        equ 0003h
COG2STR_STRD_POSITION                    equ 0003h
COG2STR_STRD_SIZE                        equ 0001h
COG2STR_STRD_LENGTH                      equ 0001h
COG2STR_STRD_MASK                        equ 0008h
COG2STR_SDATA_POSN                       equ 0004h
COG2STR_SDATA_POSITION                   equ 0004h
COG2STR_SDATA_SIZE                       equ 0001h
COG2STR_SDATA_LENGTH                     equ 0001h
COG2STR_SDATA_MASK                       equ 0010h
COG2STR_SDATB_POSN                       equ 0005h
COG2STR_SDATB_POSITION                   equ 0005h
COG2STR_SDATB_SIZE                       equ 0001h
COG2STR_SDATB_LENGTH                     equ 0001h
COG2STR_SDATB_MASK                       equ 0020h
COG2STR_SDATC_POSN                       equ 0006h
COG2STR_SDATC_POSITION                   equ 0006h
COG2STR_SDATC_SIZE                       equ 0001h
COG2STR_SDATC_LENGTH                     equ 0001h
COG2STR_SDATC_MASK                       equ 0040h
COG2STR_SDATD_POSN                       equ 0007h
COG2STR_SDATD_POSITION                   equ 0007h
COG2STR_SDATD_SIZE                       equ 0001h
COG2STR_SDATD_LENGTH                     equ 0001h
COG2STR_SDATD_MASK                       equ 0080h
COG2STR_G2STRA_POSN                      equ 0000h
COG2STR_G2STRA_POSITION                  equ 0000h
COG2STR_G2STRA_SIZE                      equ 0001h
COG2STR_G2STRA_LENGTH                    equ 0001h
COG2STR_G2STRA_MASK                      equ 0001h
COG2STR_G2STRB_POSN                      equ 0001h
COG2STR_G2STRB_POSITION                  equ 0001h
COG2STR_G2STRB_SIZE                      equ 0001h
COG2STR_G2STRB_LENGTH                    equ 0001h
COG2STR_G2STRB_MASK                      equ 0002h
COG2STR_G2STRC_POSN                      equ 0002h
COG2STR_G2STRC_POSITION                  equ 0002h
COG2STR_G2STRC_SIZE                      equ 0001h
COG2STR_G2STRC_LENGTH                    equ 0001h
COG2STR_G2STRC_MASK                      equ 0004h
COG2STR_G2STRD_POSN                      equ 0003h
COG2STR_G2STRD_POSITION                  equ 0003h
COG2STR_G2STRD_SIZE                      equ 0001h
COG2STR_G2STRD_LENGTH                    equ 0001h
COG2STR_G2STRD_MASK                      equ 0008h
COG2STR_G2SDATA_POSN                     equ 0004h
COG2STR_G2SDATA_POSITION                 equ 0004h
COG2STR_G2SDATA_SIZE                     equ 0001h
COG2STR_G2SDATA_LENGTH                   equ 0001h
COG2STR_G2SDATA_MASK                     equ 0010h
COG2STR_G2SDATB_POSN                     equ 0005h
COG2STR_G2SDATB_POSITION                 equ 0005h
COG2STR_G2SDATB_SIZE                     equ 0001h
COG2STR_G2SDATB_LENGTH                   equ 0001h
COG2STR_G2SDATB_MASK                     equ 0020h
COG2STR_G2SDATC_POSN                     equ 0006h
COG2STR_G2SDATC_POSITION                 equ 0006h
COG2STR_G2SDATC_SIZE                     equ 0001h
COG2STR_G2SDATC_LENGTH                   equ 0001h
COG2STR_G2SDATC_MASK                     equ 0040h
COG2STR_G2SDATD_POSN                     equ 0007h
COG2STR_G2SDATD_POSITION                 equ 0007h
COG2STR_G2SDATD_SIZE                     equ 0001h
COG2STR_G2SDATD_LENGTH                   equ 0001h
COG2STR_G2SDATD_MASK                     equ 0080h

// Register: PRG1RTSS
#define PRG1RTSS PRG1RTSS
PRG1RTSS                                 equ 0794h
// bitfield definitions
PRG1RTSS_RTSS_POSN                       equ 0000h
PRG1RTSS_RTSS_POSITION                   equ 0000h
PRG1RTSS_RTSS_SIZE                       equ 0008h
PRG1RTSS_RTSS_LENGTH                     equ 0008h
PRG1RTSS_RTSS_MASK                       equ 00FFh
PRG1RTSS_RTSS0_POSN                      equ 0000h
PRG1RTSS_RTSS0_POSITION                  equ 0000h
PRG1RTSS_RTSS0_SIZE                      equ 0001h
PRG1RTSS_RTSS0_LENGTH                    equ 0001h
PRG1RTSS_RTSS0_MASK                      equ 0001h
PRG1RTSS_RTSS1_POSN                      equ 0001h
PRG1RTSS_RTSS1_POSITION                  equ 0001h
PRG1RTSS_RTSS1_SIZE                      equ 0001h
PRG1RTSS_RTSS1_LENGTH                    equ 0001h
PRG1RTSS_RTSS1_MASK                      equ 0002h
PRG1RTSS_RTSS2_POSN                      equ 0002h
PRG1RTSS_RTSS2_POSITION                  equ 0002h
PRG1RTSS_RTSS2_SIZE                      equ 0001h
PRG1RTSS_RTSS2_LENGTH                    equ 0001h
PRG1RTSS_RTSS2_MASK                      equ 0004h
PRG1RTSS_RTSS3_POSN                      equ 0003h
PRG1RTSS_RTSS3_POSITION                  equ 0003h
PRG1RTSS_RTSS3_SIZE                      equ 0001h
PRG1RTSS_RTSS3_LENGTH                    equ 0001h
PRG1RTSS_RTSS3_MASK                      equ 0008h
PRG1RTSS_RG1RTSS0_POSN                   equ 0000h
PRG1RTSS_RG1RTSS0_POSITION               equ 0000h
PRG1RTSS_RG1RTSS0_SIZE                   equ 0001h
PRG1RTSS_RG1RTSS0_LENGTH                 equ 0001h
PRG1RTSS_RG1RTSS0_MASK                   equ 0001h
PRG1RTSS_RG1RTSS1_POSN                   equ 0001h
PRG1RTSS_RG1RTSS1_POSITION               equ 0001h
PRG1RTSS_RG1RTSS1_SIZE                   equ 0001h
PRG1RTSS_RG1RTSS1_LENGTH                 equ 0001h
PRG1RTSS_RG1RTSS1_MASK                   equ 0002h
PRG1RTSS_RG1RTSS2_POSN                   equ 0002h
PRG1RTSS_RG1RTSS2_POSITION               equ 0002h
PRG1RTSS_RG1RTSS2_SIZE                   equ 0001h
PRG1RTSS_RG1RTSS2_LENGTH                 equ 0001h
PRG1RTSS_RG1RTSS2_MASK                   equ 0004h
PRG1RTSS_RG1RTSS3_POSN                   equ 0003h
PRG1RTSS_RG1RTSS3_POSITION               equ 0003h
PRG1RTSS_RG1RTSS3_SIZE                   equ 0001h
PRG1RTSS_RG1RTSS3_LENGTH                 equ 0001h
PRG1RTSS_RG1RTSS3_MASK                   equ 0008h

// Register: PRG1FTSS
#define PRG1FTSS PRG1FTSS
PRG1FTSS                                 equ 0795h
// bitfield definitions
PRG1FTSS_FTSS_POSN                       equ 0000h
PRG1FTSS_FTSS_POSITION                   equ 0000h
PRG1FTSS_FTSS_SIZE                       equ 0008h
PRG1FTSS_FTSS_LENGTH                     equ 0008h
PRG1FTSS_FTSS_MASK                       equ 00FFh
PRG1FTSS_FTSS0_POSN                      equ 0000h
PRG1FTSS_FTSS0_POSITION                  equ 0000h
PRG1FTSS_FTSS0_SIZE                      equ 0001h
PRG1FTSS_FTSS0_LENGTH                    equ 0001h
PRG1FTSS_FTSS0_MASK                      equ 0001h
PRG1FTSS_FTSS1_POSN                      equ 0001h
PRG1FTSS_FTSS1_POSITION                  equ 0001h
PRG1FTSS_FTSS1_SIZE                      equ 0001h
PRG1FTSS_FTSS1_LENGTH                    equ 0001h
PRG1FTSS_FTSS1_MASK                      equ 0002h
PRG1FTSS_FTSS2_POSN                      equ 0002h
PRG1FTSS_FTSS2_POSITION                  equ 0002h
PRG1FTSS_FTSS2_SIZE                      equ 0001h
PRG1FTSS_FTSS2_LENGTH                    equ 0001h
PRG1FTSS_FTSS2_MASK                      equ 0004h
PRG1FTSS_FTSS3_POSN                      equ 0003h
PRG1FTSS_FTSS3_POSITION                  equ 0003h
PRG1FTSS_FTSS3_SIZE                      equ 0001h
PRG1FTSS_FTSS3_LENGTH                    equ 0001h
PRG1FTSS_FTSS3_MASK                      equ 0008h
PRG1FTSS_RG1FTSS0_POSN                   equ 0000h
PRG1FTSS_RG1FTSS0_POSITION               equ 0000h
PRG1FTSS_RG1FTSS0_SIZE                   equ 0001h
PRG1FTSS_RG1FTSS0_LENGTH                 equ 0001h
PRG1FTSS_RG1FTSS0_MASK                   equ 0001h
PRG1FTSS_RG1FTSS1_POSN                   equ 0001h
PRG1FTSS_RG1FTSS1_POSITION               equ 0001h
PRG1FTSS_RG1FTSS1_SIZE                   equ 0001h
PRG1FTSS_RG1FTSS1_LENGTH                 equ 0001h
PRG1FTSS_RG1FTSS1_MASK                   equ 0002h
PRG1FTSS_RG1FTSS2_POSN                   equ 0002h
PRG1FTSS_RG1FTSS2_POSITION               equ 0002h
PRG1FTSS_RG1FTSS2_SIZE                   equ 0001h
PRG1FTSS_RG1FTSS2_LENGTH                 equ 0001h
PRG1FTSS_RG1FTSS2_MASK                   equ 0004h
PRG1FTSS_RG1FTSS3_POSN                   equ 0003h
PRG1FTSS_RG1FTSS3_POSITION               equ 0003h
PRG1FTSS_RG1FTSS3_SIZE                   equ 0001h
PRG1FTSS_RG1FTSS3_LENGTH                 equ 0001h
PRG1FTSS_RG1FTSS3_MASK                   equ 0008h

// Register: PRG1INS
#define PRG1INS PRG1INS
PRG1INS                                  equ 0796h
// bitfield definitions
PRG1INS_INS_POSN                         equ 0000h
PRG1INS_INS_POSITION                     equ 0000h
PRG1INS_INS_SIZE                         equ 0008h
PRG1INS_INS_LENGTH                       equ 0008h
PRG1INS_INS_MASK                         equ 00FFh
PRG1INS_INS0_POSN                        equ 0000h
PRG1INS_INS0_POSITION                    equ 0000h
PRG1INS_INS0_SIZE                        equ 0001h
PRG1INS_INS0_LENGTH                      equ 0001h
PRG1INS_INS0_MASK                        equ 0001h
PRG1INS_INS1_POSN                        equ 0001h
PRG1INS_INS1_POSITION                    equ 0001h
PRG1INS_INS1_SIZE                        equ 0001h
PRG1INS_INS1_LENGTH                      equ 0001h
PRG1INS_INS1_MASK                        equ 0002h
PRG1INS_INS2_POSN                        equ 0002h
PRG1INS_INS2_POSITION                    equ 0002h
PRG1INS_INS2_SIZE                        equ 0001h
PRG1INS_INS2_LENGTH                      equ 0001h
PRG1INS_INS2_MASK                        equ 0004h
PRG1INS_INS3_POSN                        equ 0003h
PRG1INS_INS3_POSITION                    equ 0003h
PRG1INS_INS3_SIZE                        equ 0001h
PRG1INS_INS3_LENGTH                      equ 0001h
PRG1INS_INS3_MASK                        equ 0008h
PRG1INS_RG1INS0_POSN                     equ 0000h
PRG1INS_RG1INS0_POSITION                 equ 0000h
PRG1INS_RG1INS0_SIZE                     equ 0001h
PRG1INS_RG1INS0_LENGTH                   equ 0001h
PRG1INS_RG1INS0_MASK                     equ 0001h
PRG1INS_RG1INS1_POSN                     equ 0001h
PRG1INS_RG1INS1_POSITION                 equ 0001h
PRG1INS_RG1INS1_SIZE                     equ 0001h
PRG1INS_RG1INS1_LENGTH                   equ 0001h
PRG1INS_RG1INS1_MASK                     equ 0002h
PRG1INS_RG1INS2_POSN                     equ 0002h
PRG1INS_RG1INS2_POSITION                 equ 0002h
PRG1INS_RG1INS2_SIZE                     equ 0001h
PRG1INS_RG1INS2_LENGTH                   equ 0001h
PRG1INS_RG1INS2_MASK                     equ 0004h
PRG1INS_RG1INS3_POSN                     equ 0003h
PRG1INS_RG1INS3_POSITION                 equ 0003h
PRG1INS_RG1INS3_SIZE                     equ 0001h
PRG1INS_RG1INS3_LENGTH                   equ 0001h
PRG1INS_RG1INS3_MASK                     equ 0008h

// Register: PRG1CON0
#define PRG1CON0 PRG1CON0
PRG1CON0                                 equ 0797h
// bitfield definitions
PRG1CON0_GO_POSN                         equ 0000h
PRG1CON0_GO_POSITION                     equ 0000h
PRG1CON0_GO_SIZE                         equ 0001h
PRG1CON0_GO_LENGTH                       equ 0001h
PRG1CON0_GO_MASK                         equ 0001h
PRG1CON0_OS_POSN                         equ 0001h
PRG1CON0_OS_POSITION                     equ 0001h
PRG1CON0_OS_SIZE                         equ 0001h
PRG1CON0_OS_LENGTH                       equ 0001h
PRG1CON0_OS_MASK                         equ 0002h
PRG1CON0_MODE_POSN                       equ 0002h
PRG1CON0_MODE_POSITION                   equ 0002h
PRG1CON0_MODE_SIZE                       equ 0002h
PRG1CON0_MODE_LENGTH                     equ 0002h
PRG1CON0_MODE_MASK                       equ 000Ch
PRG1CON0_REDG_POSN                       equ 0004h
PRG1CON0_REDG_POSITION                   equ 0004h
PRG1CON0_REDG_SIZE                       equ 0001h
PRG1CON0_REDG_LENGTH                     equ 0001h
PRG1CON0_REDG_MASK                       equ 0010h
PRG1CON0_FEDG_POSN                       equ 0005h
PRG1CON0_FEDG_POSITION                   equ 0005h
PRG1CON0_FEDG_SIZE                       equ 0001h
PRG1CON0_FEDG_LENGTH                     equ 0001h
PRG1CON0_FEDG_MASK                       equ 0020h
PRG1CON0_EN_POSN                         equ 0007h
PRG1CON0_EN_POSITION                     equ 0007h
PRG1CON0_EN_SIZE                         equ 0001h
PRG1CON0_EN_LENGTH                       equ 0001h
PRG1CON0_EN_MASK                         equ 0080h
PRG1CON0_MODE0_POSN                      equ 0002h
PRG1CON0_MODE0_POSITION                  equ 0002h
PRG1CON0_MODE0_SIZE                      equ 0001h
PRG1CON0_MODE0_LENGTH                    equ 0001h
PRG1CON0_MODE0_MASK                      equ 0004h
PRG1CON0_MODE1_POSN                      equ 0003h
PRG1CON0_MODE1_POSITION                  equ 0003h
PRG1CON0_MODE1_SIZE                      equ 0001h
PRG1CON0_MODE1_LENGTH                    equ 0001h
PRG1CON0_MODE1_MASK                      equ 0008h
PRG1CON0_RG1GO_POSN                      equ 0000h
PRG1CON0_RG1GO_POSITION                  equ 0000h
PRG1CON0_RG1GO_SIZE                      equ 0001h
PRG1CON0_RG1GO_LENGTH                    equ 0001h
PRG1CON0_RG1GO_MASK                      equ 0001h
PRG1CON0_RG1OS_POSN                      equ 0001h
PRG1CON0_RG1OS_POSITION                  equ 0001h
PRG1CON0_RG1OS_SIZE                      equ 0001h
PRG1CON0_RG1OS_LENGTH                    equ 0001h
PRG1CON0_RG1OS_MASK                      equ 0002h
PRG1CON0_RG1MODE_POSN                    equ 0002h
PRG1CON0_RG1MODE_POSITION                equ 0002h
PRG1CON0_RG1MODE_SIZE                    equ 0002h
PRG1CON0_RG1MODE_LENGTH                  equ 0002h
PRG1CON0_RG1MODE_MASK                    equ 000Ch
PRG1CON0_RG1REDG_POSN                    equ 0004h
PRG1CON0_RG1REDG_POSITION                equ 0004h
PRG1CON0_RG1REDG_SIZE                    equ 0001h
PRG1CON0_RG1REDG_LENGTH                  equ 0001h
PRG1CON0_RG1REDG_MASK                    equ 0010h
PRG1CON0_RG1FEDG_POSN                    equ 0005h
PRG1CON0_RG1FEDG_POSITION                equ 0005h
PRG1CON0_RG1FEDG_SIZE                    equ 0001h
PRG1CON0_RG1FEDG_LENGTH                  equ 0001h
PRG1CON0_RG1FEDG_MASK                    equ 0020h
PRG1CON0_RG1EN_POSN                      equ 0007h
PRG1CON0_RG1EN_POSITION                  equ 0007h
PRG1CON0_RG1EN_SIZE                      equ 0001h
PRG1CON0_RG1EN_LENGTH                    equ 0001h
PRG1CON0_RG1EN_MASK                      equ 0080h
PRG1CON0_RG1MODE0_POSN                   equ 0002h
PRG1CON0_RG1MODE0_POSITION               equ 0002h
PRG1CON0_RG1MODE0_SIZE                   equ 0001h
PRG1CON0_RG1MODE0_LENGTH                 equ 0001h
PRG1CON0_RG1MODE0_MASK                   equ 0004h
PRG1CON0_RG1MODE1_POSN                   equ 0003h
PRG1CON0_RG1MODE1_POSITION               equ 0003h
PRG1CON0_RG1MODE1_SIZE                   equ 0001h
PRG1CON0_RG1MODE1_LENGTH                 equ 0001h
PRG1CON0_RG1MODE1_MASK                   equ 0008h

// Register: PRG1CON1
#define PRG1CON1 PRG1CON1
PRG1CON1                                 equ 0798h
// bitfield definitions
PRG1CON1_RPOL_POSN                       equ 0000h
PRG1CON1_RPOL_POSITION                   equ 0000h
PRG1CON1_RPOL_SIZE                       equ 0001h
PRG1CON1_RPOL_LENGTH                     equ 0001h
PRG1CON1_RPOL_MASK                       equ 0001h
PRG1CON1_FPOL_POSN                       equ 0001h
PRG1CON1_FPOL_POSITION                   equ 0001h
PRG1CON1_FPOL_SIZE                       equ 0001h
PRG1CON1_FPOL_LENGTH                     equ 0001h
PRG1CON1_FPOL_MASK                       equ 0002h
PRG1CON1_RDY_POSN                        equ 0002h
PRG1CON1_RDY_POSITION                    equ 0002h
PRG1CON1_RDY_SIZE                        equ 0001h
PRG1CON1_RDY_LENGTH                      equ 0001h
PRG1CON1_RDY_MASK                        equ 0004h
PRG1CON1_RG1RPOL_POSN                    equ 0000h
PRG1CON1_RG1RPOL_POSITION                equ 0000h
PRG1CON1_RG1RPOL_SIZE                    equ 0001h
PRG1CON1_RG1RPOL_LENGTH                  equ 0001h
PRG1CON1_RG1RPOL_MASK                    equ 0001h
PRG1CON1_RG1FPOL_POSN                    equ 0001h
PRG1CON1_RG1FPOL_POSITION                equ 0001h
PRG1CON1_RG1FPOL_SIZE                    equ 0001h
PRG1CON1_RG1FPOL_LENGTH                  equ 0001h
PRG1CON1_RG1FPOL_MASK                    equ 0002h
PRG1CON1_RG1RDY_POSN                     equ 0002h
PRG1CON1_RG1RDY_POSITION                 equ 0002h
PRG1CON1_RG1RDY_SIZE                     equ 0001h
PRG1CON1_RG1RDY_LENGTH                   equ 0001h
PRG1CON1_RG1RDY_MASK                     equ 0004h

// Register: PRG1CON2
#define PRG1CON2 PRG1CON2
PRG1CON2                                 equ 0799h
// bitfield definitions
PRG1CON2_ISET_POSN                       equ 0000h
PRG1CON2_ISET_POSITION                   equ 0000h
PRG1CON2_ISET_SIZE                       equ 0005h
PRG1CON2_ISET_LENGTH                     equ 0005h
PRG1CON2_ISET_MASK                       equ 001Fh
PRG1CON2_ISET0_POSN                      equ 0000h
PRG1CON2_ISET0_POSITION                  equ 0000h
PRG1CON2_ISET0_SIZE                      equ 0001h
PRG1CON2_ISET0_LENGTH                    equ 0001h
PRG1CON2_ISET0_MASK                      equ 0001h
PRG1CON2_ISET1_POSN                      equ 0001h
PRG1CON2_ISET1_POSITION                  equ 0001h
PRG1CON2_ISET1_SIZE                      equ 0001h
PRG1CON2_ISET1_LENGTH                    equ 0001h
PRG1CON2_ISET1_MASK                      equ 0002h
PRG1CON2_ISET2_POSN                      equ 0002h
PRG1CON2_ISET2_POSITION                  equ 0002h
PRG1CON2_ISET2_SIZE                      equ 0001h
PRG1CON2_ISET2_LENGTH                    equ 0001h
PRG1CON2_ISET2_MASK                      equ 0004h
PRG1CON2_ISET3_POSN                      equ 0003h
PRG1CON2_ISET3_POSITION                  equ 0003h
PRG1CON2_ISET3_SIZE                      equ 0001h
PRG1CON2_ISET3_LENGTH                    equ 0001h
PRG1CON2_ISET3_MASK                      equ 0008h
PRG1CON2_ISET4_POSN                      equ 0004h
PRG1CON2_ISET4_POSITION                  equ 0004h
PRG1CON2_ISET4_SIZE                      equ 0001h
PRG1CON2_ISET4_LENGTH                    equ 0001h
PRG1CON2_ISET4_MASK                      equ 0010h
PRG1CON2_RG1ISET_POSN                    equ 0000h
PRG1CON2_RG1ISET_POSITION                equ 0000h
PRG1CON2_RG1ISET_SIZE                    equ 0005h
PRG1CON2_RG1ISET_LENGTH                  equ 0005h
PRG1CON2_RG1ISET_MASK                    equ 001Fh
PRG1CON2_RG1ISET0_POSN                   equ 0000h
PRG1CON2_RG1ISET0_POSITION               equ 0000h
PRG1CON2_RG1ISET0_SIZE                   equ 0001h
PRG1CON2_RG1ISET0_LENGTH                 equ 0001h
PRG1CON2_RG1ISET0_MASK                   equ 0001h
PRG1CON2_RG1ISET1_POSN                   equ 0001h
PRG1CON2_RG1ISET1_POSITION               equ 0001h
PRG1CON2_RG1ISET1_SIZE                   equ 0001h
PRG1CON2_RG1ISET1_LENGTH                 equ 0001h
PRG1CON2_RG1ISET1_MASK                   equ 0002h
PRG1CON2_RG1ISET2_POSN                   equ 0002h
PRG1CON2_RG1ISET2_POSITION               equ 0002h
PRG1CON2_RG1ISET2_SIZE                   equ 0001h
PRG1CON2_RG1ISET2_LENGTH                 equ 0001h
PRG1CON2_RG1ISET2_MASK                   equ 0004h
PRG1CON2_RG1ISET3_POSN                   equ 0003h
PRG1CON2_RG1ISET3_POSITION               equ 0003h
PRG1CON2_RG1ISET3_SIZE                   equ 0001h
PRG1CON2_RG1ISET3_LENGTH                 equ 0001h
PRG1CON2_RG1ISET3_MASK                   equ 0008h
PRG1CON2_RG1ISET4_POSN                   equ 0004h
PRG1CON2_RG1ISET4_POSITION               equ 0004h
PRG1CON2_RG1ISET4_SIZE                   equ 0001h
PRG1CON2_RG1ISET4_LENGTH                 equ 0001h
PRG1CON2_RG1ISET4_MASK                   equ 0010h

// Register: PRG2RTSS
#define PRG2RTSS PRG2RTSS
PRG2RTSS                                 equ 079Ah
// bitfield definitions
PRG2RTSS_RTSS_POSN                       equ 0000h
PRG2RTSS_RTSS_POSITION                   equ 0000h
PRG2RTSS_RTSS_SIZE                       equ 0008h
PRG2RTSS_RTSS_LENGTH                     equ 0008h
PRG2RTSS_RTSS_MASK                       equ 00FFh
PRG2RTSS_RTSS0_POSN                      equ 0000h
PRG2RTSS_RTSS0_POSITION                  equ 0000h
PRG2RTSS_RTSS0_SIZE                      equ 0001h
PRG2RTSS_RTSS0_LENGTH                    equ 0001h
PRG2RTSS_RTSS0_MASK                      equ 0001h
PRG2RTSS_RTSS1_POSN                      equ 0001h
PRG2RTSS_RTSS1_POSITION                  equ 0001h
PRG2RTSS_RTSS1_SIZE                      equ 0001h
PRG2RTSS_RTSS1_LENGTH                    equ 0001h
PRG2RTSS_RTSS1_MASK                      equ 0002h
PRG2RTSS_RTSS2_POSN                      equ 0002h
PRG2RTSS_RTSS2_POSITION                  equ 0002h
PRG2RTSS_RTSS2_SIZE                      equ 0001h
PRG2RTSS_RTSS2_LENGTH                    equ 0001h
PRG2RTSS_RTSS2_MASK                      equ 0004h
PRG2RTSS_RTSS3_POSN                      equ 0003h
PRG2RTSS_RTSS3_POSITION                  equ 0003h
PRG2RTSS_RTSS3_SIZE                      equ 0001h
PRG2RTSS_RTSS3_LENGTH                    equ 0001h
PRG2RTSS_RTSS3_MASK                      equ 0008h
PRG2RTSS_RG2RTSS0_POSN                   equ 0000h
PRG2RTSS_RG2RTSS0_POSITION               equ 0000h
PRG2RTSS_RG2RTSS0_SIZE                   equ 0001h
PRG2RTSS_RG2RTSS0_LENGTH                 equ 0001h
PRG2RTSS_RG2RTSS0_MASK                   equ 0001h
PRG2RTSS_RG2RTSS1_POSN                   equ 0001h
PRG2RTSS_RG2RTSS1_POSITION               equ 0001h
PRG2RTSS_RG2RTSS1_SIZE                   equ 0001h
PRG2RTSS_RG2RTSS1_LENGTH                 equ 0001h
PRG2RTSS_RG2RTSS1_MASK                   equ 0002h
PRG2RTSS_RG2RTSS2_POSN                   equ 0002h
PRG2RTSS_RG2RTSS2_POSITION               equ 0002h
PRG2RTSS_RG2RTSS2_SIZE                   equ 0001h
PRG2RTSS_RG2RTSS2_LENGTH                 equ 0001h
PRG2RTSS_RG2RTSS2_MASK                   equ 0004h
PRG2RTSS_RG2RTSS3_POSN                   equ 0003h
PRG2RTSS_RG2RTSS3_POSITION               equ 0003h
PRG2RTSS_RG2RTSS3_SIZE                   equ 0001h
PRG2RTSS_RG2RTSS3_LENGTH                 equ 0001h
PRG2RTSS_RG2RTSS3_MASK                   equ 0008h

// Register: PRG2FTSS
#define PRG2FTSS PRG2FTSS
PRG2FTSS                                 equ 079Bh
// bitfield definitions
PRG2FTSS_FTSS_POSN                       equ 0000h
PRG2FTSS_FTSS_POSITION                   equ 0000h
PRG2FTSS_FTSS_SIZE                       equ 0008h
PRG2FTSS_FTSS_LENGTH                     equ 0008h
PRG2FTSS_FTSS_MASK                       equ 00FFh
PRG2FTSS_FTSS0_POSN                      equ 0000h
PRG2FTSS_FTSS0_POSITION                  equ 0000h
PRG2FTSS_FTSS0_SIZE                      equ 0001h
PRG2FTSS_FTSS0_LENGTH                    equ 0001h
PRG2FTSS_FTSS0_MASK                      equ 0001h
PRG2FTSS_FTSS1_POSN                      equ 0001h
PRG2FTSS_FTSS1_POSITION                  equ 0001h
PRG2FTSS_FTSS1_SIZE                      equ 0001h
PRG2FTSS_FTSS1_LENGTH                    equ 0001h
PRG2FTSS_FTSS1_MASK                      equ 0002h
PRG2FTSS_FTSS2_POSN                      equ 0002h
PRG2FTSS_FTSS2_POSITION                  equ 0002h
PRG2FTSS_FTSS2_SIZE                      equ 0001h
PRG2FTSS_FTSS2_LENGTH                    equ 0001h
PRG2FTSS_FTSS2_MASK                      equ 0004h
PRG2FTSS_FTSS3_POSN                      equ 0003h
PRG2FTSS_FTSS3_POSITION                  equ 0003h
PRG2FTSS_FTSS3_SIZE                      equ 0001h
PRG2FTSS_FTSS3_LENGTH                    equ 0001h
PRG2FTSS_FTSS3_MASK                      equ 0008h
PRG2FTSS_RG2FTSS0_POSN                   equ 0000h
PRG2FTSS_RG2FTSS0_POSITION               equ 0000h
PRG2FTSS_RG2FTSS0_SIZE                   equ 0001h
PRG2FTSS_RG2FTSS0_LENGTH                 equ 0001h
PRG2FTSS_RG2FTSS0_MASK                   equ 0001h
PRG2FTSS_RG2FTSS1_POSN                   equ 0001h
PRG2FTSS_RG2FTSS1_POSITION               equ 0001h
PRG2FTSS_RG2FTSS1_SIZE                   equ 0001h
PRG2FTSS_RG2FTSS1_LENGTH                 equ 0001h
PRG2FTSS_RG2FTSS1_MASK                   equ 0002h
PRG2FTSS_RG2FTSS2_POSN                   equ 0002h
PRG2FTSS_RG2FTSS2_POSITION               equ 0002h
PRG2FTSS_RG2FTSS2_SIZE                   equ 0001h
PRG2FTSS_RG2FTSS2_LENGTH                 equ 0001h
PRG2FTSS_RG2FTSS2_MASK                   equ 0004h
PRG2FTSS_RG2FTSS3_POSN                   equ 0003h
PRG2FTSS_RG2FTSS3_POSITION               equ 0003h
PRG2FTSS_RG2FTSS3_SIZE                   equ 0001h
PRG2FTSS_RG2FTSS3_LENGTH                 equ 0001h
PRG2FTSS_RG2FTSS3_MASK                   equ 0008h

// Register: PRG2INS
#define PRG2INS PRG2INS
PRG2INS                                  equ 079Ch
// bitfield definitions
PRG2INS_INS_POSN                         equ 0000h
PRG2INS_INS_POSITION                     equ 0000h
PRG2INS_INS_SIZE                         equ 0008h
PRG2INS_INS_LENGTH                       equ 0008h
PRG2INS_INS_MASK                         equ 00FFh
PRG2INS_INS0_POSN                        equ 0000h
PRG2INS_INS0_POSITION                    equ 0000h
PRG2INS_INS0_SIZE                        equ 0001h
PRG2INS_INS0_LENGTH                      equ 0001h
PRG2INS_INS0_MASK                        equ 0001h
PRG2INS_INS1_POSN                        equ 0001h
PRG2INS_INS1_POSITION                    equ 0001h
PRG2INS_INS1_SIZE                        equ 0001h
PRG2INS_INS1_LENGTH                      equ 0001h
PRG2INS_INS1_MASK                        equ 0002h
PRG2INS_INS2_POSN                        equ 0002h
PRG2INS_INS2_POSITION                    equ 0002h
PRG2INS_INS2_SIZE                        equ 0001h
PRG2INS_INS2_LENGTH                      equ 0001h
PRG2INS_INS2_MASK                        equ 0004h
PRG2INS_INS3_POSN                        equ 0003h
PRG2INS_INS3_POSITION                    equ 0003h
PRG2INS_INS3_SIZE                        equ 0001h
PRG2INS_INS3_LENGTH                      equ 0001h
PRG2INS_INS3_MASK                        equ 0008h
PRG2INS_RG2INS0_POSN                     equ 0000h
PRG2INS_RG2INS0_POSITION                 equ 0000h
PRG2INS_RG2INS0_SIZE                     equ 0001h
PRG2INS_RG2INS0_LENGTH                   equ 0001h
PRG2INS_RG2INS0_MASK                     equ 0001h
PRG2INS_RG2INS1_POSN                     equ 0001h
PRG2INS_RG2INS1_POSITION                 equ 0001h
PRG2INS_RG2INS1_SIZE                     equ 0001h
PRG2INS_RG2INS1_LENGTH                   equ 0001h
PRG2INS_RG2INS1_MASK                     equ 0002h
PRG2INS_RG2INS2_POSN                     equ 0002h
PRG2INS_RG2INS2_POSITION                 equ 0002h
PRG2INS_RG2INS2_SIZE                     equ 0001h
PRG2INS_RG2INS2_LENGTH                   equ 0001h
PRG2INS_RG2INS2_MASK                     equ 0004h
PRG2INS_RG2INS3_POSN                     equ 0003h
PRG2INS_RG2INS3_POSITION                 equ 0003h
PRG2INS_RG2INS3_SIZE                     equ 0001h
PRG2INS_RG2INS3_LENGTH                   equ 0001h
PRG2INS_RG2INS3_MASK                     equ 0008h

// Register: PRG2CON0
#define PRG2CON0 PRG2CON0
PRG2CON0                                 equ 079Dh
// bitfield definitions
PRG2CON0_GO_POSN                         equ 0000h
PRG2CON0_GO_POSITION                     equ 0000h
PRG2CON0_GO_SIZE                         equ 0001h
PRG2CON0_GO_LENGTH                       equ 0001h
PRG2CON0_GO_MASK                         equ 0001h
PRG2CON0_OS_POSN                         equ 0001h
PRG2CON0_OS_POSITION                     equ 0001h
PRG2CON0_OS_SIZE                         equ 0001h
PRG2CON0_OS_LENGTH                       equ 0001h
PRG2CON0_OS_MASK                         equ 0002h
PRG2CON0_MODE_POSN                       equ 0002h
PRG2CON0_MODE_POSITION                   equ 0002h
PRG2CON0_MODE_SIZE                       equ 0002h
PRG2CON0_MODE_LENGTH                     equ 0002h
PRG2CON0_MODE_MASK                       equ 000Ch
PRG2CON0_REDG_POSN                       equ 0004h
PRG2CON0_REDG_POSITION                   equ 0004h
PRG2CON0_REDG_SIZE                       equ 0001h
PRG2CON0_REDG_LENGTH                     equ 0001h
PRG2CON0_REDG_MASK                       equ 0010h
PRG2CON0_FEDG_POSN                       equ 0005h
PRG2CON0_FEDG_POSITION                   equ 0005h
PRG2CON0_FEDG_SIZE                       equ 0001h
PRG2CON0_FEDG_LENGTH                     equ 0001h
PRG2CON0_FEDG_MASK                       equ 0020h
PRG2CON0_EN_POSN                         equ 0007h
PRG2CON0_EN_POSITION                     equ 0007h
PRG2CON0_EN_SIZE                         equ 0001h
PRG2CON0_EN_LENGTH                       equ 0001h
PRG2CON0_EN_MASK                         equ 0080h
PRG2CON0_MODE0_POSN                      equ 0002h
PRG2CON0_MODE0_POSITION                  equ 0002h
PRG2CON0_MODE0_SIZE                      equ 0001h
PRG2CON0_MODE0_LENGTH                    equ 0001h
PRG2CON0_MODE0_MASK                      equ 0004h
PRG2CON0_MODE1_POSN                      equ 0003h
PRG2CON0_MODE1_POSITION                  equ 0003h
PRG2CON0_MODE1_SIZE                      equ 0001h
PRG2CON0_MODE1_LENGTH                    equ 0001h
PRG2CON0_MODE1_MASK                      equ 0008h
PRG2CON0_RG2GO_POSN                      equ 0000h
PRG2CON0_RG2GO_POSITION                  equ 0000h
PRG2CON0_RG2GO_SIZE                      equ 0001h
PRG2CON0_RG2GO_LENGTH                    equ 0001h
PRG2CON0_RG2GO_MASK                      equ 0001h
PRG2CON0_RG2OS_POSN                      equ 0001h
PRG2CON0_RG2OS_POSITION                  equ 0001h
PRG2CON0_RG2OS_SIZE                      equ 0001h
PRG2CON0_RG2OS_LENGTH                    equ 0001h
PRG2CON0_RG2OS_MASK                      equ 0002h
PRG2CON0_RG2MODE_POSN                    equ 0002h
PRG2CON0_RG2MODE_POSITION                equ 0002h
PRG2CON0_RG2MODE_SIZE                    equ 0002h
PRG2CON0_RG2MODE_LENGTH                  equ 0002h
PRG2CON0_RG2MODE_MASK                    equ 000Ch
PRG2CON0_RG2REDG_POSN                    equ 0004h
PRG2CON0_RG2REDG_POSITION                equ 0004h
PRG2CON0_RG2REDG_SIZE                    equ 0001h
PRG2CON0_RG2REDG_LENGTH                  equ 0001h
PRG2CON0_RG2REDG_MASK                    equ 0010h
PRG2CON0_RG2FEDG_POSN                    equ 0005h
PRG2CON0_RG2FEDG_POSITION                equ 0005h
PRG2CON0_RG2FEDG_SIZE                    equ 0001h
PRG2CON0_RG2FEDG_LENGTH                  equ 0001h
PRG2CON0_RG2FEDG_MASK                    equ 0020h
PRG2CON0_RG2EN_POSN                      equ 0007h
PRG2CON0_RG2EN_POSITION                  equ 0007h
PRG2CON0_RG2EN_SIZE                      equ 0001h
PRG2CON0_RG2EN_LENGTH                    equ 0001h
PRG2CON0_RG2EN_MASK                      equ 0080h
PRG2CON0_RG2MODE0_POSN                   equ 0002h
PRG2CON0_RG2MODE0_POSITION               equ 0002h
PRG2CON0_RG2MODE0_SIZE                   equ 0001h
PRG2CON0_RG2MODE0_LENGTH                 equ 0001h
PRG2CON0_RG2MODE0_MASK                   equ 0004h
PRG2CON0_RG2MODE1_POSN                   equ 0003h
PRG2CON0_RG2MODE1_POSITION               equ 0003h
PRG2CON0_RG2MODE1_SIZE                   equ 0001h
PRG2CON0_RG2MODE1_LENGTH                 equ 0001h
PRG2CON0_RG2MODE1_MASK                   equ 0008h

// Register: PRG2CON1
#define PRG2CON1 PRG2CON1
PRG2CON1                                 equ 079Eh
// bitfield definitions
PRG2CON1_RPOL_POSN                       equ 0000h
PRG2CON1_RPOL_POSITION                   equ 0000h
PRG2CON1_RPOL_SIZE                       equ 0001h
PRG2CON1_RPOL_LENGTH                     equ 0001h
PRG2CON1_RPOL_MASK                       equ 0001h
PRG2CON1_FPOL_POSN                       equ 0001h
PRG2CON1_FPOL_POSITION                   equ 0001h
PRG2CON1_FPOL_SIZE                       equ 0001h
PRG2CON1_FPOL_LENGTH                     equ 0001h
PRG2CON1_FPOL_MASK                       equ 0002h
PRG2CON1_RDY_POSN                        equ 0002h
PRG2CON1_RDY_POSITION                    equ 0002h
PRG2CON1_RDY_SIZE                        equ 0001h
PRG2CON1_RDY_LENGTH                      equ 0001h
PRG2CON1_RDY_MASK                        equ 0004h
PRG2CON1_RG2RPOL_POSN                    equ 0000h
PRG2CON1_RG2RPOL_POSITION                equ 0000h
PRG2CON1_RG2RPOL_SIZE                    equ 0001h
PRG2CON1_RG2RPOL_LENGTH                  equ 0001h
PRG2CON1_RG2RPOL_MASK                    equ 0001h
PRG2CON1_RG2FPOL_POSN                    equ 0001h
PRG2CON1_RG2FPOL_POSITION                equ 0001h
PRG2CON1_RG2FPOL_SIZE                    equ 0001h
PRG2CON1_RG2FPOL_LENGTH                  equ 0001h
PRG2CON1_RG2FPOL_MASK                    equ 0002h
PRG2CON1_RG2RDY_POSN                     equ 0002h
PRG2CON1_RG2RDY_POSITION                 equ 0002h
PRG2CON1_RG2RDY_SIZE                     equ 0001h
PRG2CON1_RG2RDY_LENGTH                   equ 0001h
PRG2CON1_RG2RDY_MASK                     equ 0004h

// Register: PRG2CON2
#define PRG2CON2 PRG2CON2
PRG2CON2                                 equ 079Fh
// bitfield definitions
PRG2CON2_ISET_POSN                       equ 0000h
PRG2CON2_ISET_POSITION                   equ 0000h
PRG2CON2_ISET_SIZE                       equ 0005h
PRG2CON2_ISET_LENGTH                     equ 0005h
PRG2CON2_ISET_MASK                       equ 001Fh
PRG2CON2_ISET0_POSN                      equ 0000h
PRG2CON2_ISET0_POSITION                  equ 0000h
PRG2CON2_ISET0_SIZE                      equ 0001h
PRG2CON2_ISET0_LENGTH                    equ 0001h
PRG2CON2_ISET0_MASK                      equ 0001h
PRG2CON2_ISET1_POSN                      equ 0001h
PRG2CON2_ISET1_POSITION                  equ 0001h
PRG2CON2_ISET1_SIZE                      equ 0001h
PRG2CON2_ISET1_LENGTH                    equ 0001h
PRG2CON2_ISET1_MASK                      equ 0002h
PRG2CON2_ISET2_POSN                      equ 0002h
PRG2CON2_ISET2_POSITION                  equ 0002h
PRG2CON2_ISET2_SIZE                      equ 0001h
PRG2CON2_ISET2_LENGTH                    equ 0001h
PRG2CON2_ISET2_MASK                      equ 0004h
PRG2CON2_ISET3_POSN                      equ 0003h
PRG2CON2_ISET3_POSITION                  equ 0003h
PRG2CON2_ISET3_SIZE                      equ 0001h
PRG2CON2_ISET3_LENGTH                    equ 0001h
PRG2CON2_ISET3_MASK                      equ 0008h
PRG2CON2_ISET4_POSN                      equ 0004h
PRG2CON2_ISET4_POSITION                  equ 0004h
PRG2CON2_ISET4_SIZE                      equ 0001h
PRG2CON2_ISET4_LENGTH                    equ 0001h
PRG2CON2_ISET4_MASK                      equ 0010h
PRG2CON2_RG2ISET_POSN                    equ 0000h
PRG2CON2_RG2ISET_POSITION                equ 0000h
PRG2CON2_RG2ISET_SIZE                    equ 0005h
PRG2CON2_RG2ISET_LENGTH                  equ 0005h
PRG2CON2_RG2ISET_MASK                    equ 001Fh
PRG2CON2_RG2ISET0_POSN                   equ 0000h
PRG2CON2_RG2ISET0_POSITION               equ 0000h
PRG2CON2_RG2ISET0_SIZE                   equ 0001h
PRG2CON2_RG2ISET0_LENGTH                 equ 0001h
PRG2CON2_RG2ISET0_MASK                   equ 0001h
PRG2CON2_RG2ISET1_POSN                   equ 0001h
PRG2CON2_RG2ISET1_POSITION               equ 0001h
PRG2CON2_RG2ISET1_SIZE                   equ 0001h
PRG2CON2_RG2ISET1_LENGTH                 equ 0001h
PRG2CON2_RG2ISET1_MASK                   equ 0002h
PRG2CON2_RG2ISET2_POSN                   equ 0002h
PRG2CON2_RG2ISET2_POSITION               equ 0002h
PRG2CON2_RG2ISET2_SIZE                   equ 0001h
PRG2CON2_RG2ISET2_LENGTH                 equ 0001h
PRG2CON2_RG2ISET2_MASK                   equ 0004h
PRG2CON2_RG2ISET3_POSN                   equ 0003h
PRG2CON2_RG2ISET3_POSITION               equ 0003h
PRG2CON2_RG2ISET3_SIZE                   equ 0001h
PRG2CON2_RG2ISET3_LENGTH                 equ 0001h
PRG2CON2_RG2ISET3_MASK                   equ 0008h
PRG2CON2_RG2ISET4_POSN                   equ 0004h
PRG2CON2_RG2ISET4_POSITION               equ 0004h
PRG2CON2_RG2ISET4_SIZE                   equ 0001h
PRG2CON2_RG2ISET4_LENGTH                 equ 0001h
PRG2CON2_RG2ISET4_MASK                   equ 0010h

// Register: PWMEN
#define PWMEN PWMEN
PWMEN                                    equ 0D8Eh
// bitfield definitions
PWMEN_MPWM5EN_POSN                       equ 0004h
PWMEN_MPWM5EN_POSITION                   equ 0004h
PWMEN_MPWM5EN_SIZE                       equ 0001h
PWMEN_MPWM5EN_LENGTH                     equ 0001h
PWMEN_MPWM5EN_MASK                       equ 0010h
PWMEN_MPWM6EN_POSN                       equ 0005h
PWMEN_MPWM6EN_POSITION                   equ 0005h
PWMEN_MPWM6EN_SIZE                       equ 0001h
PWMEN_MPWM6EN_LENGTH                     equ 0001h
PWMEN_MPWM6EN_MASK                       equ 0020h

// Register: PWMLD
#define PWMLD PWMLD
PWMLD                                    equ 0D8Fh
// bitfield definitions
PWMLD_MPWM5LD_POSN                       equ 0004h
PWMLD_MPWM5LD_POSITION                   equ 0004h
PWMLD_MPWM5LD_SIZE                       equ 0001h
PWMLD_MPWM5LD_LENGTH                     equ 0001h
PWMLD_MPWM5LD_MASK                       equ 0010h
PWMLD_MPWM6LD_POSN                       equ 0005h
PWMLD_MPWM6LD_POSITION                   equ 0005h
PWMLD_MPWM6LD_SIZE                       equ 0001h
PWMLD_MPWM6LD_LENGTH                     equ 0001h
PWMLD_MPWM6LD_MASK                       equ 0020h

// Register: PWMOUT
#define PWMOUT PWMOUT
PWMOUT                                   equ 0D90h
// bitfield definitions
PWMOUT_MPWM5OUT_POSN                     equ 0004h
PWMOUT_MPWM5OUT_POSITION                 equ 0004h
PWMOUT_MPWM5OUT_SIZE                     equ 0001h
PWMOUT_MPWM5OUT_LENGTH                   equ 0001h
PWMOUT_MPWM5OUT_MASK                     equ 0010h
PWMOUT_MPWM6OUT_POSN                     equ 0005h
PWMOUT_MPWM6OUT_POSITION                 equ 0005h
PWMOUT_MPWM6OUT_SIZE                     equ 0001h
PWMOUT_MPWM6OUT_LENGTH                   equ 0001h
PWMOUT_MPWM6OUT_MASK                     equ 0020h

// Register: PWM5PHL
#define PWM5PHL PWM5PHL
PWM5PHL                                  equ 0D91h
// bitfield definitions
PWM5PHL_PH_POSN                          equ 0000h
PWM5PHL_PH_POSITION                      equ 0000h
PWM5PHL_PH_SIZE                          equ 0008h
PWM5PHL_PH_LENGTH                        equ 0008h
PWM5PHL_PH_MASK                          equ 00FFh
PWM5PHL_PWM5PHL0_POSN                    equ 0000h
PWM5PHL_PWM5PHL0_POSITION                equ 0000h
PWM5PHL_PWM5PHL0_SIZE                    equ 0001h
PWM5PHL_PWM5PHL0_LENGTH                  equ 0001h
PWM5PHL_PWM5PHL0_MASK                    equ 0001h
PWM5PHL_PWM5PHL1_POSN                    equ 0001h
PWM5PHL_PWM5PHL1_POSITION                equ 0001h
PWM5PHL_PWM5PHL1_SIZE                    equ 0001h
PWM5PHL_PWM5PHL1_LENGTH                  equ 0001h
PWM5PHL_PWM5PHL1_MASK                    equ 0002h
PWM5PHL_PWM5PHL2_POSN                    equ 0002h
PWM5PHL_PWM5PHL2_POSITION                equ 0002h
PWM5PHL_PWM5PHL2_SIZE                    equ 0001h
PWM5PHL_PWM5PHL2_LENGTH                  equ 0001h
PWM5PHL_PWM5PHL2_MASK                    equ 0004h
PWM5PHL_PWM5PHL3_POSN                    equ 0003h
PWM5PHL_PWM5PHL3_POSITION                equ 0003h
PWM5PHL_PWM5PHL3_SIZE                    equ 0001h
PWM5PHL_PWM5PHL3_LENGTH                  equ 0001h
PWM5PHL_PWM5PHL3_MASK                    equ 0008h
PWM5PHL_PWM5PHL4_POSN                    equ 0004h
PWM5PHL_PWM5PHL4_POSITION                equ 0004h
PWM5PHL_PWM5PHL4_SIZE                    equ 0001h
PWM5PHL_PWM5PHL4_LENGTH                  equ 0001h
PWM5PHL_PWM5PHL4_MASK                    equ 0010h
PWM5PHL_PWM5PHL5_POSN                    equ 0005h
PWM5PHL_PWM5PHL5_POSITION                equ 0005h
PWM5PHL_PWM5PHL5_SIZE                    equ 0001h
PWM5PHL_PWM5PHL5_LENGTH                  equ 0001h
PWM5PHL_PWM5PHL5_MASK                    equ 0020h
PWM5PHL_PWM5PHL6_POSN                    equ 0006h
PWM5PHL_PWM5PHL6_POSITION                equ 0006h
PWM5PHL_PWM5PHL6_SIZE                    equ 0001h
PWM5PHL_PWM5PHL6_LENGTH                  equ 0001h
PWM5PHL_PWM5PHL6_MASK                    equ 0040h
PWM5PHL_PWM5PHL7_POSN                    equ 0007h
PWM5PHL_PWM5PHL7_POSITION                equ 0007h
PWM5PHL_PWM5PHL7_SIZE                    equ 0001h
PWM5PHL_PWM5PHL7_LENGTH                  equ 0001h
PWM5PHL_PWM5PHL7_MASK                    equ 0080h
PWM5PHL_PWM5PHL_POSN                     equ 0000h
PWM5PHL_PWM5PHL_POSITION                 equ 0000h
PWM5PHL_PWM5PHL_SIZE                     equ 0008h
PWM5PHL_PWM5PHL_LENGTH                   equ 0008h
PWM5PHL_PWM5PHL_MASK                     equ 00FFh

// Register: PWM5PHH
#define PWM5PHH PWM5PHH
PWM5PHH                                  equ 0D92h
// bitfield definitions
PWM5PHH_PH_POSN                          equ 0000h
PWM5PHH_PH_POSITION                      equ 0000h
PWM5PHH_PH_SIZE                          equ 0008h
PWM5PHH_PH_LENGTH                        equ 0008h
PWM5PHH_PH_MASK                          equ 00FFh
PWM5PHH_PWM5PHH0_POSN                    equ 0000h
PWM5PHH_PWM5PHH0_POSITION                equ 0000h
PWM5PHH_PWM5PHH0_SIZE                    equ 0001h
PWM5PHH_PWM5PHH0_LENGTH                  equ 0001h
PWM5PHH_PWM5PHH0_MASK                    equ 0001h
PWM5PHH_PWM5PHH1_POSN                    equ 0001h
PWM5PHH_PWM5PHH1_POSITION                equ 0001h
PWM5PHH_PWM5PHH1_SIZE                    equ 0001h
PWM5PHH_PWM5PHH1_LENGTH                  equ 0001h
PWM5PHH_PWM5PHH1_MASK                    equ 0002h
PWM5PHH_PWM5PHH2_POSN                    equ 0002h
PWM5PHH_PWM5PHH2_POSITION                equ 0002h
PWM5PHH_PWM5PHH2_SIZE                    equ 0001h
PWM5PHH_PWM5PHH2_LENGTH                  equ 0001h
PWM5PHH_PWM5PHH2_MASK                    equ 0004h
PWM5PHH_PWM5PHH3_POSN                    equ 0003h
PWM5PHH_PWM5PHH3_POSITION                equ 0003h
PWM5PHH_PWM5PHH3_SIZE                    equ 0001h
PWM5PHH_PWM5PHH3_LENGTH                  equ 0001h
PWM5PHH_PWM5PHH3_MASK                    equ 0008h
PWM5PHH_PWM5PHH4_POSN                    equ 0004h
PWM5PHH_PWM5PHH4_POSITION                equ 0004h
PWM5PHH_PWM5PHH4_SIZE                    equ 0001h
PWM5PHH_PWM5PHH4_LENGTH                  equ 0001h
PWM5PHH_PWM5PHH4_MASK                    equ 0010h
PWM5PHH_PWM5PHH5_POSN                    equ 0005h
PWM5PHH_PWM5PHH5_POSITION                equ 0005h
PWM5PHH_PWM5PHH5_SIZE                    equ 0001h
PWM5PHH_PWM5PHH5_LENGTH                  equ 0001h
PWM5PHH_PWM5PHH5_MASK                    equ 0020h
PWM5PHH_PWM5PHH6_POSN                    equ 0006h
PWM5PHH_PWM5PHH6_POSITION                equ 0006h
PWM5PHH_PWM5PHH6_SIZE                    equ 0001h
PWM5PHH_PWM5PHH6_LENGTH                  equ 0001h
PWM5PHH_PWM5PHH6_MASK                    equ 0040h
PWM5PHH_PWM5PHH7_POSN                    equ 0007h
PWM5PHH_PWM5PHH7_POSITION                equ 0007h
PWM5PHH_PWM5PHH7_SIZE                    equ 0001h
PWM5PHH_PWM5PHH7_LENGTH                  equ 0001h
PWM5PHH_PWM5PHH7_MASK                    equ 0080h
PWM5PHH_PWM5PHH_POSN                     equ 0000h
PWM5PHH_PWM5PHH_POSITION                 equ 0000h
PWM5PHH_PWM5PHH_SIZE                     equ 0008h
PWM5PHH_PWM5PHH_LENGTH                   equ 0008h
PWM5PHH_PWM5PHH_MASK                     equ 00FFh

// Register: PWM5DCL
#define PWM5DCL PWM5DCL
PWM5DCL                                  equ 0D93h
// bitfield definitions
PWM5DCL_DC_POSN                          equ 0000h
PWM5DCL_DC_POSITION                      equ 0000h
PWM5DCL_DC_SIZE                          equ 0008h
PWM5DCL_DC_LENGTH                        equ 0008h
PWM5DCL_DC_MASK                          equ 00FFh
PWM5DCL_PWM5DCL0_POSN                    equ 0000h
PWM5DCL_PWM5DCL0_POSITION                equ 0000h
PWM5DCL_PWM5DCL0_SIZE                    equ 0001h
PWM5DCL_PWM5DCL0_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL0_MASK                    equ 0001h
PWM5DCL_PWM5DCL1_POSN                    equ 0001h
PWM5DCL_PWM5DCL1_POSITION                equ 0001h
PWM5DCL_PWM5DCL1_SIZE                    equ 0001h
PWM5DCL_PWM5DCL1_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL1_MASK                    equ 0002h
PWM5DCL_PWM5DCL2_POSN                    equ 0002h
PWM5DCL_PWM5DCL2_POSITION                equ 0002h
PWM5DCL_PWM5DCL2_SIZE                    equ 0001h
PWM5DCL_PWM5DCL2_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL2_MASK                    equ 0004h
PWM5DCL_PWM5DCL3_POSN                    equ 0003h
PWM5DCL_PWM5DCL3_POSITION                equ 0003h
PWM5DCL_PWM5DCL3_SIZE                    equ 0001h
PWM5DCL_PWM5DCL3_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL3_MASK                    equ 0008h
PWM5DCL_PWM5DCL4_POSN                    equ 0004h
PWM5DCL_PWM5DCL4_POSITION                equ 0004h
PWM5DCL_PWM5DCL4_SIZE                    equ 0001h
PWM5DCL_PWM5DCL4_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL4_MASK                    equ 0010h
PWM5DCL_PWM5DCL5_POSN                    equ 0005h
PWM5DCL_PWM5DCL5_POSITION                equ 0005h
PWM5DCL_PWM5DCL5_SIZE                    equ 0001h
PWM5DCL_PWM5DCL5_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL5_MASK                    equ 0020h
PWM5DCL_PWM5DCL6_POSN                    equ 0006h
PWM5DCL_PWM5DCL6_POSITION                equ 0006h
PWM5DCL_PWM5DCL6_SIZE                    equ 0001h
PWM5DCL_PWM5DCL6_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL6_MASK                    equ 0040h
PWM5DCL_PWM5DCL7_POSN                    equ 0007h
PWM5DCL_PWM5DCL7_POSITION                equ 0007h
PWM5DCL_PWM5DCL7_SIZE                    equ 0001h
PWM5DCL_PWM5DCL7_LENGTH                  equ 0001h
PWM5DCL_PWM5DCL7_MASK                    equ 0080h
PWM5DCL_PWM5DCL_POSN                     equ 0000h
PWM5DCL_PWM5DCL_POSITION                 equ 0000h
PWM5DCL_PWM5DCL_SIZE                     equ 0008h
PWM5DCL_PWM5DCL_LENGTH                   equ 0008h
PWM5DCL_PWM5DCL_MASK                     equ 00FFh

// Register: PWM5DCH
#define PWM5DCH PWM5DCH
PWM5DCH                                  equ 0D94h
// bitfield definitions
PWM5DCH_DC_POSN                          equ 0000h
PWM5DCH_DC_POSITION                      equ 0000h
PWM5DCH_DC_SIZE                          equ 0008h
PWM5DCH_DC_LENGTH                        equ 0008h
PWM5DCH_DC_MASK                          equ 00FFh
PWM5DCH_PWM5DCH0_POSN                    equ 0000h
PWM5DCH_PWM5DCH0_POSITION                equ 0000h
PWM5DCH_PWM5DCH0_SIZE                    equ 0001h
PWM5DCH_PWM5DCH0_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH0_MASK                    equ 0001h
PWM5DCH_PWM5DCH1_POSN                    equ 0001h
PWM5DCH_PWM5DCH1_POSITION                equ 0001h
PWM5DCH_PWM5DCH1_SIZE                    equ 0001h
PWM5DCH_PWM5DCH1_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH1_MASK                    equ 0002h
PWM5DCH_PWM5DCH2_POSN                    equ 0002h
PWM5DCH_PWM5DCH2_POSITION                equ 0002h
PWM5DCH_PWM5DCH2_SIZE                    equ 0001h
PWM5DCH_PWM5DCH2_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH2_MASK                    equ 0004h
PWM5DCH_PWM5DCH3_POSN                    equ 0003h
PWM5DCH_PWM5DCH3_POSITION                equ 0003h
PWM5DCH_PWM5DCH3_SIZE                    equ 0001h
PWM5DCH_PWM5DCH3_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH3_MASK                    equ 0008h
PWM5DCH_PWM5DCH4_POSN                    equ 0004h
PWM5DCH_PWM5DCH4_POSITION                equ 0004h
PWM5DCH_PWM5DCH4_SIZE                    equ 0001h
PWM5DCH_PWM5DCH4_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH4_MASK                    equ 0010h
PWM5DCH_PWM5DCH5_POSN                    equ 0005h
PWM5DCH_PWM5DCH5_POSITION                equ 0005h
PWM5DCH_PWM5DCH5_SIZE                    equ 0001h
PWM5DCH_PWM5DCH5_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH5_MASK                    equ 0020h
PWM5DCH_PWM5DCH6_POSN                    equ 0006h
PWM5DCH_PWM5DCH6_POSITION                equ 0006h
PWM5DCH_PWM5DCH6_SIZE                    equ 0001h
PWM5DCH_PWM5DCH6_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH6_MASK                    equ 0040h
PWM5DCH_PWM5DCH7_POSN                    equ 0007h
PWM5DCH_PWM5DCH7_POSITION                equ 0007h
PWM5DCH_PWM5DCH7_SIZE                    equ 0001h
PWM5DCH_PWM5DCH7_LENGTH                  equ 0001h
PWM5DCH_PWM5DCH7_MASK                    equ 0080h
PWM5DCH_PWM5DCH_POSN                     equ 0000h
PWM5DCH_PWM5DCH_POSITION                 equ 0000h
PWM5DCH_PWM5DCH_SIZE                     equ 0008h
PWM5DCH_PWM5DCH_LENGTH                   equ 0008h
PWM5DCH_PWM5DCH_MASK                     equ 00FFh

// Register: PWM5PRL
#define PWM5PRL PWM5PRL
PWM5PRL                                  equ 0D95h
// bitfield definitions
PWM5PRL_PR_POSN                          equ 0000h
PWM5PRL_PR_POSITION                      equ 0000h
PWM5PRL_PR_SIZE                          equ 0008h
PWM5PRL_PR_LENGTH                        equ 0008h
PWM5PRL_PR_MASK                          equ 00FFh
PWM5PRL_PWM5PRL0_POSN                    equ 0000h
PWM5PRL_PWM5PRL0_POSITION                equ 0000h
PWM5PRL_PWM5PRL0_SIZE                    equ 0001h
PWM5PRL_PWM5PRL0_LENGTH                  equ 0001h
PWM5PRL_PWM5PRL0_MASK                    equ 0001h
PWM5PRL_PWM5PRL1_POSN                    equ 0001h
PWM5PRL_PWM5PRL1_POSITION                equ 0001h
PWM5PRL_PWM5PRL1_SIZE                    equ 0001h
PWM5PRL_PWM5PRL1_LENGTH                  equ 0001h
PWM5PRL_PWM5PRL1_MASK                    equ 0002h
PWM5PRL_PWM5PRL2_POSN                    equ 0002h
PWM5PRL_PWM5PRL2_POSITION                equ 0002h
PWM5PRL_PWM5PRL2_SIZE                    equ 0001h
PWM5PRL_PWM5PRL2_LENGTH                  equ 0001h
PWM5PRL_PWM5PRL2_MASK                    equ 0004h
PWM5PRL_PWM5PRL3_POSN                    equ 0003h
PWM5PRL_PWM5PRL3_POSITION                equ 0003h
PWM5PRL_PWM5PRL3_SIZE                    equ 0001h
PWM5PRL_PWM5PRL3_LENGTH                  equ 0001h
PWM5PRL_PWM5PRL3_MASK                    equ 0008h
PWM5PRL_PWM5PRL4_POSN                    equ 0004h
PWM5PRL_PWM5PRL4_POSITION                equ 0004h
PWM5PRL_PWM5PRL4_SIZE                    equ 0001h
PWM5PRL_PWM5PRL4_LENGTH                  equ 0001h
PWM5PRL_PWM5PRL4_MASK                    equ 0010h
PWM5PRL_PWM5PRL5_POSN                    equ 0005h
PWM5PRL_PWM5PRL5_POSITION                equ 0005h
PWM5PRL_PWM5PRL5_SIZE                    equ 0001h
PWM5PRL_PWM5PRL5_LENGTH                  equ 0001h
PWM5PRL_PWM5PRL5_MASK                    equ 0020h
PWM5PRL_PWM5PRL6_POSN                    equ 0006h
PWM5PRL_PWM5PRL6_POSITION                equ 0006h
PWM5PRL_PWM5PRL6_SIZE                    equ 0001h
PWM5PRL_PWM5PRL6_LENGTH                  equ 0001h
PWM5PRL_PWM5PRL6_MASK                    equ 0040h
PWM5PRL_PWM5PRL7_POSN                    equ 0007h
PWM5PRL_PWM5PRL7_POSITION                equ 0007h
PWM5PRL_PWM5PRL7_SIZE                    equ 0001h
PWM5PRL_PWM5PRL7_LENGTH                  equ 0001h
PWM5PRL_PWM5PRL7_MASK                    equ 0080h
PWM5PRL_PWM5PRL_POSN                     equ 0000h
PWM5PRL_PWM5PRL_POSITION                 equ 0000h
PWM5PRL_PWM5PRL_SIZE                     equ 0008h
PWM5PRL_PWM5PRL_LENGTH                   equ 0008h
PWM5PRL_PWM5PRL_MASK                     equ 00FFh

// Register: PWM5PRH
#define PWM5PRH PWM5PRH
PWM5PRH                                  equ 0D96h
// bitfield definitions
PWM5PRH_PR_POSN                          equ 0000h
PWM5PRH_PR_POSITION                      equ 0000h
PWM5PRH_PR_SIZE                          equ 0008h
PWM5PRH_PR_LENGTH                        equ 0008h
PWM5PRH_PR_MASK                          equ 00FFh
PWM5PRH_PWM5PRH0_POSN                    equ 0000h
PWM5PRH_PWM5PRH0_POSITION                equ 0000h
PWM5PRH_PWM5PRH0_SIZE                    equ 0001h
PWM5PRH_PWM5PRH0_LENGTH                  equ 0001h
PWM5PRH_PWM5PRH0_MASK                    equ 0001h
PWM5PRH_PWM5PRH1_POSN                    equ 0001h
PWM5PRH_PWM5PRH1_POSITION                equ 0001h
PWM5PRH_PWM5PRH1_SIZE                    equ 0001h
PWM5PRH_PWM5PRH1_LENGTH                  equ 0001h
PWM5PRH_PWM5PRH1_MASK                    equ 0002h
PWM5PRH_PWM5PRH2_POSN                    equ 0002h
PWM5PRH_PWM5PRH2_POSITION                equ 0002h
PWM5PRH_PWM5PRH2_SIZE                    equ 0001h
PWM5PRH_PWM5PRH2_LENGTH                  equ 0001h
PWM5PRH_PWM5PRH2_MASK                    equ 0004h
PWM5PRH_PWM5PRH3_POSN                    equ 0003h
PWM5PRH_PWM5PRH3_POSITION                equ 0003h
PWM5PRH_PWM5PRH3_SIZE                    equ 0001h
PWM5PRH_PWM5PRH3_LENGTH                  equ 0001h
PWM5PRH_PWM5PRH3_MASK                    equ 0008h
PWM5PRH_PWM5PRH4_POSN                    equ 0004h
PWM5PRH_PWM5PRH4_POSITION                equ 0004h
PWM5PRH_PWM5PRH4_SIZE                    equ 0001h
PWM5PRH_PWM5PRH4_LENGTH                  equ 0001h
PWM5PRH_PWM5PRH4_MASK                    equ 0010h
PWM5PRH_PWM5PRH5_POSN                    equ 0005h
PWM5PRH_PWM5PRH5_POSITION                equ 0005h
PWM5PRH_PWM5PRH5_SIZE                    equ 0001h
PWM5PRH_PWM5PRH5_LENGTH                  equ 0001h
PWM5PRH_PWM5PRH5_MASK                    equ 0020h
PWM5PRH_PWM5PRH6_POSN                    equ 0006h
PWM5PRH_PWM5PRH6_POSITION                equ 0006h
PWM5PRH_PWM5PRH6_SIZE                    equ 0001h
PWM5PRH_PWM5PRH6_LENGTH                  equ 0001h
PWM5PRH_PWM5PRH6_MASK                    equ 0040h
PWM5PRH_PWM5PRH7_POSN                    equ 0007h
PWM5PRH_PWM5PRH7_POSITION                equ 0007h
PWM5PRH_PWM5PRH7_SIZE                    equ 0001h
PWM5PRH_PWM5PRH7_LENGTH                  equ 0001h
PWM5PRH_PWM5PRH7_MASK                    equ 0080h
PWM5PRH_PWM5PRH_POSN                     equ 0000h
PWM5PRH_PWM5PRH_POSITION                 equ 0000h
PWM5PRH_PWM5PRH_SIZE                     equ 0008h
PWM5PRH_PWM5PRH_LENGTH                   equ 0008h
PWM5PRH_PWM5PRH_MASK                     equ 00FFh

// Register: PWM5OFL
#define PWM5OFL PWM5OFL
PWM5OFL                                  equ 0D97h
// bitfield definitions
PWM5OFL_OF_POSN                          equ 0000h
PWM5OFL_OF_POSITION                      equ 0000h
PWM5OFL_OF_SIZE                          equ 0008h
PWM5OFL_OF_LENGTH                        equ 0008h
PWM5OFL_OF_MASK                          equ 00FFh
PWM5OFL_PWM5OFL0_POSN                    equ 0000h
PWM5OFL_PWM5OFL0_POSITION                equ 0000h
PWM5OFL_PWM5OFL0_SIZE                    equ 0001h
PWM5OFL_PWM5OFL0_LENGTH                  equ 0001h
PWM5OFL_PWM5OFL0_MASK                    equ 0001h
PWM5OFL_PWM5OFL1_POSN                    equ 0001h
PWM5OFL_PWM5OFL1_POSITION                equ 0001h
PWM5OFL_PWM5OFL1_SIZE                    equ 0001h
PWM5OFL_PWM5OFL1_LENGTH                  equ 0001h
PWM5OFL_PWM5OFL1_MASK                    equ 0002h
PWM5OFL_PWM5OFL2_POSN                    equ 0002h
PWM5OFL_PWM5OFL2_POSITION                equ 0002h
PWM5OFL_PWM5OFL2_SIZE                    equ 0001h
PWM5OFL_PWM5OFL2_LENGTH                  equ 0001h
PWM5OFL_PWM5OFL2_MASK                    equ 0004h
PWM5OFL_PWM5OFL3_POSN                    equ 0003h
PWM5OFL_PWM5OFL3_POSITION                equ 0003h
PWM5OFL_PWM5OFL3_SIZE                    equ 0001h
PWM5OFL_PWM5OFL3_LENGTH                  equ 0001h
PWM5OFL_PWM5OFL3_MASK                    equ 0008h
PWM5OFL_PWM5OFL4_POSN                    equ 0004h
PWM5OFL_PWM5OFL4_POSITION                equ 0004h
PWM5OFL_PWM5OFL4_SIZE                    equ 0001h
PWM5OFL_PWM5OFL4_LENGTH                  equ 0001h
PWM5OFL_PWM5OFL4_MASK                    equ 0010h
PWM5OFL_PWM5OFL5_POSN                    equ 0005h
PWM5OFL_PWM5OFL5_POSITION                equ 0005h
PWM5OFL_PWM5OFL5_SIZE                    equ 0001h
PWM5OFL_PWM5OFL5_LENGTH                  equ 0001h
PWM5OFL_PWM5OFL5_MASK                    equ 0020h
PWM5OFL_PWM5OFL6_POSN                    equ 0006h
PWM5OFL_PWM5OFL6_POSITION                equ 0006h
PWM5OFL_PWM5OFL6_SIZE                    equ 0001h
PWM5OFL_PWM5OFL6_LENGTH                  equ 0001h
PWM5OFL_PWM5OFL6_MASK                    equ 0040h
PWM5OFL_PWM5OFL7_POSN                    equ 0007h
PWM5OFL_PWM5OFL7_POSITION                equ 0007h
PWM5OFL_PWM5OFL7_SIZE                    equ 0001h
PWM5OFL_PWM5OFL7_LENGTH                  equ 0001h
PWM5OFL_PWM5OFL7_MASK                    equ 0080h
PWM5OFL_PWM5OFL_POSN                     equ 0000h
PWM5OFL_PWM5OFL_POSITION                 equ 0000h
PWM5OFL_PWM5OFL_SIZE                     equ 0008h
PWM5OFL_PWM5OFL_LENGTH                   equ 0008h
PWM5OFL_PWM5OFL_MASK                     equ 00FFh

// Register: PWM5OFH
#define PWM5OFH PWM5OFH
PWM5OFH                                  equ 0D98h
// bitfield definitions
PWM5OFH_OF_POSN                          equ 0000h
PWM5OFH_OF_POSITION                      equ 0000h
PWM5OFH_OF_SIZE                          equ 0008h
PWM5OFH_OF_LENGTH                        equ 0008h
PWM5OFH_OF_MASK                          equ 00FFh
PWM5OFH_PWM5OFH0_POSN                    equ 0000h
PWM5OFH_PWM5OFH0_POSITION                equ 0000h
PWM5OFH_PWM5OFH0_SIZE                    equ 0001h
PWM5OFH_PWM5OFH0_LENGTH                  equ 0001h
PWM5OFH_PWM5OFH0_MASK                    equ 0001h
PWM5OFH_PWM5OFH1_POSN                    equ 0001h
PWM5OFH_PWM5OFH1_POSITION                equ 0001h
PWM5OFH_PWM5OFH1_SIZE                    equ 0001h
PWM5OFH_PWM5OFH1_LENGTH                  equ 0001h
PWM5OFH_PWM5OFH1_MASK                    equ 0002h
PWM5OFH_PWM5OFH2_POSN                    equ 0002h
PWM5OFH_PWM5OFH2_POSITION                equ 0002h
PWM5OFH_PWM5OFH2_SIZE                    equ 0001h
PWM5OFH_PWM5OFH2_LENGTH                  equ 0001h
PWM5OFH_PWM5OFH2_MASK                    equ 0004h
PWM5OFH_PWM5OFH3_POSN                    equ 0003h
PWM5OFH_PWM5OFH3_POSITION                equ 0003h
PWM5OFH_PWM5OFH3_SIZE                    equ 0001h
PWM5OFH_PWM5OFH3_LENGTH                  equ 0001h
PWM5OFH_PWM5OFH3_MASK                    equ 0008h
PWM5OFH_PWM5OFH4_POSN                    equ 0004h
PWM5OFH_PWM5OFH4_POSITION                equ 0004h
PWM5OFH_PWM5OFH4_SIZE                    equ 0001h
PWM5OFH_PWM5OFH4_LENGTH                  equ 0001h
PWM5OFH_PWM5OFH4_MASK                    equ 0010h
PWM5OFH_PWM5OFH5_POSN                    equ 0005h
PWM5OFH_PWM5OFH5_POSITION                equ 0005h
PWM5OFH_PWM5OFH5_SIZE                    equ 0001h
PWM5OFH_PWM5OFH5_LENGTH                  equ 0001h
PWM5OFH_PWM5OFH5_MASK                    equ 0020h
PWM5OFH_PWM5OFH6_POSN                    equ 0006h
PWM5OFH_PWM5OFH6_POSITION                equ 0006h
PWM5OFH_PWM5OFH6_SIZE                    equ 0001h
PWM5OFH_PWM5OFH6_LENGTH                  equ 0001h
PWM5OFH_PWM5OFH6_MASK                    equ 0040h
PWM5OFH_PWM5OFH7_POSN                    equ 0007h
PWM5OFH_PWM5OFH7_POSITION                equ 0007h
PWM5OFH_PWM5OFH7_SIZE                    equ 0001h
PWM5OFH_PWM5OFH7_LENGTH                  equ 0001h
PWM5OFH_PWM5OFH7_MASK                    equ 0080h
PWM5OFH_PWM5OFH_POSN                     equ 0000h
PWM5OFH_PWM5OFH_POSITION                 equ 0000h
PWM5OFH_PWM5OFH_SIZE                     equ 0008h
PWM5OFH_PWM5OFH_LENGTH                   equ 0008h
PWM5OFH_PWM5OFH_MASK                     equ 00FFh

// Register: PWM5TMRL
#define PWM5TMRL PWM5TMRL
PWM5TMRL                                 equ 0D99h
// bitfield definitions
PWM5TMRL_TMR_POSN                        equ 0000h
PWM5TMRL_TMR_POSITION                    equ 0000h
PWM5TMRL_TMR_SIZE                        equ 0008h
PWM5TMRL_TMR_LENGTH                      equ 0008h
PWM5TMRL_TMR_MASK                        equ 00FFh
PWM5TMRL_PWM5TMRL0_POSN                  equ 0000h
PWM5TMRL_PWM5TMRL0_POSITION              equ 0000h
PWM5TMRL_PWM5TMRL0_SIZE                  equ 0001h
PWM5TMRL_PWM5TMRL0_LENGTH                equ 0001h
PWM5TMRL_PWM5TMRL0_MASK                  equ 0001h
PWM5TMRL_PWM5TMRL1_POSN                  equ 0001h
PWM5TMRL_PWM5TMRL1_POSITION              equ 0001h
PWM5TMRL_PWM5TMRL1_SIZE                  equ 0001h
PWM5TMRL_PWM5TMRL1_LENGTH                equ 0001h
PWM5TMRL_PWM5TMRL1_MASK                  equ 0002h
PWM5TMRL_PWM5TMRL2_POSN                  equ 0002h
PWM5TMRL_PWM5TMRL2_POSITION              equ 0002h
PWM5TMRL_PWM5TMRL2_SIZE                  equ 0001h
PWM5TMRL_PWM5TMRL2_LENGTH                equ 0001h
PWM5TMRL_PWM5TMRL2_MASK                  equ 0004h
PWM5TMRL_PWM5TMRL3_POSN                  equ 0003h
PWM5TMRL_PWM5TMRL3_POSITION              equ 0003h
PWM5TMRL_PWM5TMRL3_SIZE                  equ 0001h
PWM5TMRL_PWM5TMRL3_LENGTH                equ 0001h
PWM5TMRL_PWM5TMRL3_MASK                  equ 0008h
PWM5TMRL_PWM5TMRL4_POSN                  equ 0004h
PWM5TMRL_PWM5TMRL4_POSITION              equ 0004h
PWM5TMRL_PWM5TMRL4_SIZE                  equ 0001h
PWM5TMRL_PWM5TMRL4_LENGTH                equ 0001h
PWM5TMRL_PWM5TMRL4_MASK                  equ 0010h
PWM5TMRL_PWM5TMRL5_POSN                  equ 0005h
PWM5TMRL_PWM5TMRL5_POSITION              equ 0005h
PWM5TMRL_PWM5TMRL5_SIZE                  equ 0001h
PWM5TMRL_PWM5TMRL5_LENGTH                equ 0001h
PWM5TMRL_PWM5TMRL5_MASK                  equ 0020h
PWM5TMRL_PWM5TMRL6_POSN                  equ 0006h
PWM5TMRL_PWM5TMRL6_POSITION              equ 0006h
PWM5TMRL_PWM5TMRL6_SIZE                  equ 0001h
PWM5TMRL_PWM5TMRL6_LENGTH                equ 0001h
PWM5TMRL_PWM5TMRL6_MASK                  equ 0040h
PWM5TMRL_PWM5TMRL7_POSN                  equ 0007h
PWM5TMRL_PWM5TMRL7_POSITION              equ 0007h
PWM5TMRL_PWM5TMRL7_SIZE                  equ 0001h
PWM5TMRL_PWM5TMRL7_LENGTH                equ 0001h
PWM5TMRL_PWM5TMRL7_MASK                  equ 0080h
PWM5TMRL_PWM5TMRL_POSN                   equ 0000h
PWM5TMRL_PWM5TMRL_POSITION               equ 0000h
PWM5TMRL_PWM5TMRL_SIZE                   equ 0008h
PWM5TMRL_PWM5TMRL_LENGTH                 equ 0008h
PWM5TMRL_PWM5TMRL_MASK                   equ 00FFh

// Register: PWM5TMRH
#define PWM5TMRH PWM5TMRH
PWM5TMRH                                 equ 0D9Ah
// bitfield definitions
PWM5TMRH_TMR_POSN                        equ 0000h
PWM5TMRH_TMR_POSITION                    equ 0000h
PWM5TMRH_TMR_SIZE                        equ 0008h
PWM5TMRH_TMR_LENGTH                      equ 0008h
PWM5TMRH_TMR_MASK                        equ 00FFh
PWM5TMRH_PWM5TMRH0_POSN                  equ 0000h
PWM5TMRH_PWM5TMRH0_POSITION              equ 0000h
PWM5TMRH_PWM5TMRH0_SIZE                  equ 0001h
PWM5TMRH_PWM5TMRH0_LENGTH                equ 0001h
PWM5TMRH_PWM5TMRH0_MASK                  equ 0001h
PWM5TMRH_PWM5TMRH1_POSN                  equ 0001h
PWM5TMRH_PWM5TMRH1_POSITION              equ 0001h
PWM5TMRH_PWM5TMRH1_SIZE                  equ 0001h
PWM5TMRH_PWM5TMRH1_LENGTH                equ 0001h
PWM5TMRH_PWM5TMRH1_MASK                  equ 0002h
PWM5TMRH_PWM5TMRH2_POSN                  equ 0002h
PWM5TMRH_PWM5TMRH2_POSITION              equ 0002h
PWM5TMRH_PWM5TMRH2_SIZE                  equ 0001h
PWM5TMRH_PWM5TMRH2_LENGTH                equ 0001h
PWM5TMRH_PWM5TMRH2_MASK                  equ 0004h
PWM5TMRH_PWM5TMRH3_POSN                  equ 0003h
PWM5TMRH_PWM5TMRH3_POSITION              equ 0003h
PWM5TMRH_PWM5TMRH3_SIZE                  equ 0001h
PWM5TMRH_PWM5TMRH3_LENGTH                equ 0001h
PWM5TMRH_PWM5TMRH3_MASK                  equ 0008h
PWM5TMRH_PWM5TMRH4_POSN                  equ 0004h
PWM5TMRH_PWM5TMRH4_POSITION              equ 0004h
PWM5TMRH_PWM5TMRH4_SIZE                  equ 0001h
PWM5TMRH_PWM5TMRH4_LENGTH                equ 0001h
PWM5TMRH_PWM5TMRH4_MASK                  equ 0010h
PWM5TMRH_PWM5TMRH5_POSN                  equ 0005h
PWM5TMRH_PWM5TMRH5_POSITION              equ 0005h
PWM5TMRH_PWM5TMRH5_SIZE                  equ 0001h
PWM5TMRH_PWM5TMRH5_LENGTH                equ 0001h
PWM5TMRH_PWM5TMRH5_MASK                  equ 0020h
PWM5TMRH_PWM5TMRH6_POSN                  equ 0006h
PWM5TMRH_PWM5TMRH6_POSITION              equ 0006h
PWM5TMRH_PWM5TMRH6_SIZE                  equ 0001h
PWM5TMRH_PWM5TMRH6_LENGTH                equ 0001h
PWM5TMRH_PWM5TMRH6_MASK                  equ 0040h
PWM5TMRH_PWM5TMRH7_POSN                  equ 0007h
PWM5TMRH_PWM5TMRH7_POSITION              equ 0007h
PWM5TMRH_PWM5TMRH7_SIZE                  equ 0001h
PWM5TMRH_PWM5TMRH7_LENGTH                equ 0001h
PWM5TMRH_PWM5TMRH7_MASK                  equ 0080h
PWM5TMRH_PWM5TMRH_POSN                   equ 0000h
PWM5TMRH_PWM5TMRH_POSITION               equ 0000h
PWM5TMRH_PWM5TMRH_SIZE                   equ 0008h
PWM5TMRH_PWM5TMRH_LENGTH                 equ 0008h
PWM5TMRH_PWM5TMRH_MASK                   equ 00FFh

// Register: PWM5CON
#define PWM5CON PWM5CON
PWM5CON                                  equ 0D9Bh
// bitfield definitions
PWM5CON_MODE_POSN                        equ 0002h
PWM5CON_MODE_POSITION                    equ 0002h
PWM5CON_MODE_SIZE                        equ 0002h
PWM5CON_MODE_LENGTH                      equ 0002h
PWM5CON_MODE_MASK                        equ 000Ch
PWM5CON_POL_POSN                         equ 0004h
PWM5CON_POL_POSITION                     equ 0004h
PWM5CON_POL_SIZE                         equ 0001h
PWM5CON_POL_LENGTH                       equ 0001h
PWM5CON_POL_MASK                         equ 0010h
PWM5CON_OUT_POSN                         equ 0005h
PWM5CON_OUT_POSITION                     equ 0005h
PWM5CON_OUT_SIZE                         equ 0001h
PWM5CON_OUT_LENGTH                       equ 0001h
PWM5CON_OUT_MASK                         equ 0020h
PWM5CON_EN_POSN                          equ 0007h
PWM5CON_EN_POSITION                      equ 0007h
PWM5CON_EN_SIZE                          equ 0001h
PWM5CON_EN_LENGTH                        equ 0001h
PWM5CON_EN_MASK                          equ 0080h
PWM5CON_PWM5MODE0_POSN                   equ 0002h
PWM5CON_PWM5MODE0_POSITION               equ 0002h
PWM5CON_PWM5MODE0_SIZE                   equ 0001h
PWM5CON_PWM5MODE0_LENGTH                 equ 0001h
PWM5CON_PWM5MODE0_MASK                   equ 0004h
PWM5CON_PWM5MODE1_POSN                   equ 0003h
PWM5CON_PWM5MODE1_POSITION               equ 0003h
PWM5CON_PWM5MODE1_SIZE                   equ 0001h
PWM5CON_PWM5MODE1_LENGTH                 equ 0001h
PWM5CON_PWM5MODE1_MASK                   equ 0008h
PWM5CON_PWM5MODE_POSN                    equ 0002h
PWM5CON_PWM5MODE_POSITION                equ 0002h
PWM5CON_PWM5MODE_SIZE                    equ 0002h
PWM5CON_PWM5MODE_LENGTH                  equ 0002h
PWM5CON_PWM5MODE_MASK                    equ 000Ch
PWM5CON_PWM5POL_POSN                     equ 0004h
PWM5CON_PWM5POL_POSITION                 equ 0004h
PWM5CON_PWM5POL_SIZE                     equ 0001h
PWM5CON_PWM5POL_LENGTH                   equ 0001h
PWM5CON_PWM5POL_MASK                     equ 0010h
PWM5CON_PWM5OUT_POSN                     equ 0005h
PWM5CON_PWM5OUT_POSITION                 equ 0005h
PWM5CON_PWM5OUT_SIZE                     equ 0001h
PWM5CON_PWM5OUT_LENGTH                   equ 0001h
PWM5CON_PWM5OUT_MASK                     equ 0020h
PWM5CON_PWM5EN_POSN                      equ 0007h
PWM5CON_PWM5EN_POSITION                  equ 0007h
PWM5CON_PWM5EN_SIZE                      equ 0001h
PWM5CON_PWM5EN_LENGTH                    equ 0001h
PWM5CON_PWM5EN_MASK                      equ 0080h
PWM5CON_MODE0_POSN                       equ 0002h
PWM5CON_MODE0_POSITION                   equ 0002h
PWM5CON_MODE0_SIZE                       equ 0001h
PWM5CON_MODE0_LENGTH                     equ 0001h
PWM5CON_MODE0_MASK                       equ 0004h
PWM5CON_MODE1_POSN                       equ 0003h
PWM5CON_MODE1_POSITION                   equ 0003h
PWM5CON_MODE1_SIZE                       equ 0001h
PWM5CON_MODE1_LENGTH                     equ 0001h
PWM5CON_MODE1_MASK                       equ 0008h

// Register: PWM5INTE
#define PWM5INTE PWM5INTE
PWM5INTE                                 equ 0D9Ch
// bitfield definitions
PWM5INTE_PRIE_POSN                       equ 0000h
PWM5INTE_PRIE_POSITION                   equ 0000h
PWM5INTE_PRIE_SIZE                       equ 0001h
PWM5INTE_PRIE_LENGTH                     equ 0001h
PWM5INTE_PRIE_MASK                       equ 0001h
PWM5INTE_DCIE_POSN                       equ 0001h
PWM5INTE_DCIE_POSITION                   equ 0001h
PWM5INTE_DCIE_SIZE                       equ 0001h
PWM5INTE_DCIE_LENGTH                     equ 0001h
PWM5INTE_DCIE_MASK                       equ 0002h
PWM5INTE_PHIE_POSN                       equ 0002h
PWM5INTE_PHIE_POSITION                   equ 0002h
PWM5INTE_PHIE_SIZE                       equ 0001h
PWM5INTE_PHIE_LENGTH                     equ 0001h
PWM5INTE_PHIE_MASK                       equ 0004h
PWM5INTE_OFIE_POSN                       equ 0003h
PWM5INTE_OFIE_POSITION                   equ 0003h
PWM5INTE_OFIE_SIZE                       equ 0001h
PWM5INTE_OFIE_LENGTH                     equ 0001h
PWM5INTE_OFIE_MASK                       equ 0008h
PWM5INTE_PWM5PRIE_POSN                   equ 0000h
PWM5INTE_PWM5PRIE_POSITION               equ 0000h
PWM5INTE_PWM5PRIE_SIZE                   equ 0001h
PWM5INTE_PWM5PRIE_LENGTH                 equ 0001h
PWM5INTE_PWM5PRIE_MASK                   equ 0001h
PWM5INTE_PWM5DCIE_POSN                   equ 0001h
PWM5INTE_PWM5DCIE_POSITION               equ 0001h
PWM5INTE_PWM5DCIE_SIZE                   equ 0001h
PWM5INTE_PWM5DCIE_LENGTH                 equ 0001h
PWM5INTE_PWM5DCIE_MASK                   equ 0002h
PWM5INTE_PWM5PHIE_POSN                   equ 0002h
PWM5INTE_PWM5PHIE_POSITION               equ 0002h
PWM5INTE_PWM5PHIE_SIZE                   equ 0001h
PWM5INTE_PWM5PHIE_LENGTH                 equ 0001h
PWM5INTE_PWM5PHIE_MASK                   equ 0004h
PWM5INTE_PWM5OFIE_POSN                   equ 0003h
PWM5INTE_PWM5OFIE_POSITION               equ 0003h
PWM5INTE_PWM5OFIE_SIZE                   equ 0001h
PWM5INTE_PWM5OFIE_LENGTH                 equ 0001h
PWM5INTE_PWM5OFIE_MASK                   equ 0008h

// Register: PWM5INTF
#define PWM5INTF PWM5INTF
PWM5INTF                                 equ 0D9Dh
// bitfield definitions
PWM5INTF_PRIF_POSN                       equ 0000h
PWM5INTF_PRIF_POSITION                   equ 0000h
PWM5INTF_PRIF_SIZE                       equ 0001h
PWM5INTF_PRIF_LENGTH                     equ 0001h
PWM5INTF_PRIF_MASK                       equ 0001h
PWM5INTF_DCIF_POSN                       equ 0001h
PWM5INTF_DCIF_POSITION                   equ 0001h
PWM5INTF_DCIF_SIZE                       equ 0001h
PWM5INTF_DCIF_LENGTH                     equ 0001h
PWM5INTF_DCIF_MASK                       equ 0002h
PWM5INTF_PHIF_POSN                       equ 0002h
PWM5INTF_PHIF_POSITION                   equ 0002h
PWM5INTF_PHIF_SIZE                       equ 0001h
PWM5INTF_PHIF_LENGTH                     equ 0001h
PWM5INTF_PHIF_MASK                       equ 0004h
PWM5INTF_OFIF_POSN                       equ 0003h
PWM5INTF_OFIF_POSITION                   equ 0003h
PWM5INTF_OFIF_SIZE                       equ 0001h
PWM5INTF_OFIF_LENGTH                     equ 0001h
PWM5INTF_OFIF_MASK                       equ 0008h
PWM5INTF_PWM5PRIF_POSN                   equ 0000h
PWM5INTF_PWM5PRIF_POSITION               equ 0000h
PWM5INTF_PWM5PRIF_SIZE                   equ 0001h
PWM5INTF_PWM5PRIF_LENGTH                 equ 0001h
PWM5INTF_PWM5PRIF_MASK                   equ 0001h
PWM5INTF_PWM5DCIF_POSN                   equ 0001h
PWM5INTF_PWM5DCIF_POSITION               equ 0001h
PWM5INTF_PWM5DCIF_SIZE                   equ 0001h
PWM5INTF_PWM5DCIF_LENGTH                 equ 0001h
PWM5INTF_PWM5DCIF_MASK                   equ 0002h
PWM5INTF_PWM5PHIF_POSN                   equ 0002h
PWM5INTF_PWM5PHIF_POSITION               equ 0002h
PWM5INTF_PWM5PHIF_SIZE                   equ 0001h
PWM5INTF_PWM5PHIF_LENGTH                 equ 0001h
PWM5INTF_PWM5PHIF_MASK                   equ 0004h
PWM5INTF_PWM5OFIF_POSN                   equ 0003h
PWM5INTF_PWM5OFIF_POSITION               equ 0003h
PWM5INTF_PWM5OFIF_SIZE                   equ 0001h
PWM5INTF_PWM5OFIF_LENGTH                 equ 0001h
PWM5INTF_PWM5OFIF_MASK                   equ 0008h

// Register: PWM5CLKCON
#define PWM5CLKCON PWM5CLKCON
PWM5CLKCON                               equ 0D9Eh
// bitfield definitions
PWM5CLKCON_CS_POSN                       equ 0000h
PWM5CLKCON_CS_POSITION                   equ 0000h
PWM5CLKCON_CS_SIZE                       equ 0002h
PWM5CLKCON_CS_LENGTH                     equ 0002h
PWM5CLKCON_CS_MASK                       equ 0003h
PWM5CLKCON_PS_POSN                       equ 0004h
PWM5CLKCON_PS_POSITION                   equ 0004h
PWM5CLKCON_PS_SIZE                       equ 0003h
PWM5CLKCON_PS_LENGTH                     equ 0003h
PWM5CLKCON_PS_MASK                       equ 0070h
PWM5CLKCON_PWM5CS0_POSN                  equ 0000h
PWM5CLKCON_PWM5CS0_POSITION              equ 0000h
PWM5CLKCON_PWM5CS0_SIZE                  equ 0001h
PWM5CLKCON_PWM5CS0_LENGTH                equ 0001h
PWM5CLKCON_PWM5CS0_MASK                  equ 0001h
PWM5CLKCON_PWM5CS1_POSN                  equ 0001h
PWM5CLKCON_PWM5CS1_POSITION              equ 0001h
PWM5CLKCON_PWM5CS1_SIZE                  equ 0001h
PWM5CLKCON_PWM5CS1_LENGTH                equ 0001h
PWM5CLKCON_PWM5CS1_MASK                  equ 0002h
PWM5CLKCON_PWM5CS2_POSN                  equ 0002h
PWM5CLKCON_PWM5CS2_POSITION              equ 0002h
PWM5CLKCON_PWM5CS2_SIZE                  equ 0001h
PWM5CLKCON_PWM5CS2_LENGTH                equ 0001h
PWM5CLKCON_PWM5CS2_MASK                  equ 0004h
PWM5CLKCON_PWM5PS0_POSN                  equ 0004h
PWM5CLKCON_PWM5PS0_POSITION              equ 0004h
PWM5CLKCON_PWM5PS0_SIZE                  equ 0001h
PWM5CLKCON_PWM5PS0_LENGTH                equ 0001h
PWM5CLKCON_PWM5PS0_MASK                  equ 0010h
PWM5CLKCON_PWM5PS1_POSN                  equ 0005h
PWM5CLKCON_PWM5PS1_POSITION              equ 0005h
PWM5CLKCON_PWM5PS1_SIZE                  equ 0001h
PWM5CLKCON_PWM5PS1_LENGTH                equ 0001h
PWM5CLKCON_PWM5PS1_MASK                  equ 0020h
PWM5CLKCON_PWM5PS2_POSN                  equ 0006h
PWM5CLKCON_PWM5PS2_POSITION              equ 0006h
PWM5CLKCON_PWM5PS2_SIZE                  equ 0001h
PWM5CLKCON_PWM5PS2_LENGTH                equ 0001h
PWM5CLKCON_PWM5PS2_MASK                  equ 0040h
PWM5CLKCON_PWM5CS_POSN                   equ 0000h
PWM5CLKCON_PWM5CS_POSITION               equ 0000h
PWM5CLKCON_PWM5CS_SIZE                   equ 0003h
PWM5CLKCON_PWM5CS_LENGTH                 equ 0003h
PWM5CLKCON_PWM5CS_MASK                   equ 0007h
PWM5CLKCON_PWM5PS_POSN                   equ 0004h
PWM5CLKCON_PWM5PS_POSITION               equ 0004h
PWM5CLKCON_PWM5PS_SIZE                   equ 0003h
PWM5CLKCON_PWM5PS_LENGTH                 equ 0003h
PWM5CLKCON_PWM5PS_MASK                   equ 0070h
PWM5CLKCON_CS0_POSN                      equ 0000h
PWM5CLKCON_CS0_POSITION                  equ 0000h
PWM5CLKCON_CS0_SIZE                      equ 0001h
PWM5CLKCON_CS0_LENGTH                    equ 0001h
PWM5CLKCON_CS0_MASK                      equ 0001h
PWM5CLKCON_CS1_POSN                      equ 0001h
PWM5CLKCON_CS1_POSITION                  equ 0001h
PWM5CLKCON_CS1_SIZE                      equ 0001h
PWM5CLKCON_CS1_LENGTH                    equ 0001h
PWM5CLKCON_CS1_MASK                      equ 0002h
PWM5CLKCON_CS2_POSN                      equ 0002h
PWM5CLKCON_CS2_POSITION                  equ 0002h
PWM5CLKCON_CS2_SIZE                      equ 0001h
PWM5CLKCON_CS2_LENGTH                    equ 0001h
PWM5CLKCON_CS2_MASK                      equ 0004h
PWM5CLKCON_PS0_POSN                      equ 0004h
PWM5CLKCON_PS0_POSITION                  equ 0004h
PWM5CLKCON_PS0_SIZE                      equ 0001h
PWM5CLKCON_PS0_LENGTH                    equ 0001h
PWM5CLKCON_PS0_MASK                      equ 0010h
PWM5CLKCON_PS1_POSN                      equ 0005h
PWM5CLKCON_PS1_POSITION                  equ 0005h
PWM5CLKCON_PS1_SIZE                      equ 0001h
PWM5CLKCON_PS1_LENGTH                    equ 0001h
PWM5CLKCON_PS1_MASK                      equ 0020h
PWM5CLKCON_PS2_POSN                      equ 0006h
PWM5CLKCON_PS2_POSITION                  equ 0006h
PWM5CLKCON_PS2_SIZE                      equ 0001h
PWM5CLKCON_PS2_LENGTH                    equ 0001h
PWM5CLKCON_PS2_MASK                      equ 0040h

// Register: PWM5LDCON
#define PWM5LDCON PWM5LDCON
PWM5LDCON                                equ 0D9Fh
// bitfield definitions
PWM5LDCON_LDS_POSN                       equ 0000h
PWM5LDCON_LDS_POSITION                   equ 0000h
PWM5LDCON_LDS_SIZE                       equ 0002h
PWM5LDCON_LDS_LENGTH                     equ 0002h
PWM5LDCON_LDS_MASK                       equ 0003h
PWM5LDCON_LDT_POSN                       equ 0006h
PWM5LDCON_LDT_POSITION                   equ 0006h
PWM5LDCON_LDT_SIZE                       equ 0001h
PWM5LDCON_LDT_LENGTH                     equ 0001h
PWM5LDCON_LDT_MASK                       equ 0040h
PWM5LDCON_LDA_POSN                       equ 0007h
PWM5LDCON_LDA_POSITION                   equ 0007h
PWM5LDCON_LDA_SIZE                       equ 0001h
PWM5LDCON_LDA_LENGTH                     equ 0001h
PWM5LDCON_LDA_MASK                       equ 0080h
PWM5LDCON_PWM5LDS0_POSN                  equ 0000h
PWM5LDCON_PWM5LDS0_POSITION              equ 0000h
PWM5LDCON_PWM5LDS0_SIZE                  equ 0001h
PWM5LDCON_PWM5LDS0_LENGTH                equ 0001h
PWM5LDCON_PWM5LDS0_MASK                  equ 0001h
PWM5LDCON_PWM5LDS_POSN                   equ 0000h
PWM5LDCON_PWM5LDS_POSITION               equ 0000h
PWM5LDCON_PWM5LDS_SIZE                   equ 0002h
PWM5LDCON_PWM5LDS_LENGTH                 equ 0002h
PWM5LDCON_PWM5LDS_MASK                   equ 0003h
PWM5LDCON_PWM5LDM_POSN                   equ 0006h
PWM5LDCON_PWM5LDM_POSITION               equ 0006h
PWM5LDCON_PWM5LDM_SIZE                   equ 0001h
PWM5LDCON_PWM5LDM_LENGTH                 equ 0001h
PWM5LDCON_PWM5LDM_MASK                   equ 0040h
PWM5LDCON_PWM5LD_POSN                    equ 0007h
PWM5LDCON_PWM5LD_POSITION                equ 0007h
PWM5LDCON_PWM5LD_SIZE                    equ 0001h
PWM5LDCON_PWM5LD_LENGTH                  equ 0001h
PWM5LDCON_PWM5LD_MASK                    equ 0080h
PWM5LDCON_LDS0_POSN                      equ 0000h
PWM5LDCON_LDS0_POSITION                  equ 0000h
PWM5LDCON_LDS0_SIZE                      equ 0001h
PWM5LDCON_LDS0_LENGTH                    equ 0001h
PWM5LDCON_LDS0_MASK                      equ 0001h

// Register: PWM5OFCON
#define PWM5OFCON PWM5OFCON
PWM5OFCON                                equ 0DA0h
// bitfield definitions
PWM5OFCON_OFS_POSN                       equ 0000h
PWM5OFCON_OFS_POSITION                   equ 0000h
PWM5OFCON_OFS_SIZE                       equ 0002h
PWM5OFCON_OFS_LENGTH                     equ 0002h
PWM5OFCON_OFS_MASK                       equ 0003h
PWM5OFCON_OFO_POSN                       equ 0004h
PWM5OFCON_OFO_POSITION                   equ 0004h
PWM5OFCON_OFO_SIZE                       equ 0001h
PWM5OFCON_OFO_LENGTH                     equ 0001h
PWM5OFCON_OFO_MASK                       equ 0010h
PWM5OFCON_OFM_POSN                       equ 0005h
PWM5OFCON_OFM_POSITION                   equ 0005h
PWM5OFCON_OFM_SIZE                       equ 0002h
PWM5OFCON_OFM_LENGTH                     equ 0002h
PWM5OFCON_OFM_MASK                       equ 0060h
PWM5OFCON_PWM5OFS0_POSN                  equ 0000h
PWM5OFCON_PWM5OFS0_POSITION              equ 0000h
PWM5OFCON_PWM5OFS0_SIZE                  equ 0001h
PWM5OFCON_PWM5OFS0_LENGTH                equ 0001h
PWM5OFCON_PWM5OFS0_MASK                  equ 0001h
PWM5OFCON_PWM5OFM0_POSN                  equ 0005h
PWM5OFCON_PWM5OFM0_POSITION              equ 0005h
PWM5OFCON_PWM5OFM0_SIZE                  equ 0001h
PWM5OFCON_PWM5OFM0_LENGTH                equ 0001h
PWM5OFCON_PWM5OFM0_MASK                  equ 0020h
PWM5OFCON_PWM5OFM1_POSN                  equ 0006h
PWM5OFCON_PWM5OFM1_POSITION              equ 0006h
PWM5OFCON_PWM5OFM1_SIZE                  equ 0001h
PWM5OFCON_PWM5OFM1_LENGTH                equ 0001h
PWM5OFCON_PWM5OFM1_MASK                  equ 0040h
PWM5OFCON_PWM5OFS_POSN                   equ 0000h
PWM5OFCON_PWM5OFS_POSITION               equ 0000h
PWM5OFCON_PWM5OFS_SIZE                   equ 0002h
PWM5OFCON_PWM5OFS_LENGTH                 equ 0002h
PWM5OFCON_PWM5OFS_MASK                   equ 0003h
PWM5OFCON_PWM5OFMC_POSN                  equ 0004h
PWM5OFCON_PWM5OFMC_POSITION              equ 0004h
PWM5OFCON_PWM5OFMC_SIZE                  equ 0001h
PWM5OFCON_PWM5OFMC_LENGTH                equ 0001h
PWM5OFCON_PWM5OFMC_MASK                  equ 0010h
PWM5OFCON_PWM5OFM_POSN                   equ 0005h
PWM5OFCON_PWM5OFM_POSITION               equ 0005h
PWM5OFCON_PWM5OFM_SIZE                   equ 0002h
PWM5OFCON_PWM5OFM_LENGTH                 equ 0002h
PWM5OFCON_PWM5OFM_MASK                   equ 0060h
PWM5OFCON_OFS0_POSN                      equ 0000h
PWM5OFCON_OFS0_POSITION                  equ 0000h
PWM5OFCON_OFS0_SIZE                      equ 0001h
PWM5OFCON_OFS0_LENGTH                    equ 0001h
PWM5OFCON_OFS0_MASK                      equ 0001h
PWM5OFCON_OFM0_POSN                      equ 0005h
PWM5OFCON_OFM0_POSITION                  equ 0005h
PWM5OFCON_OFM0_SIZE                      equ 0001h
PWM5OFCON_OFM0_LENGTH                    equ 0001h
PWM5OFCON_OFM0_MASK                      equ 0020h
PWM5OFCON_OFM1_POSN                      equ 0006h
PWM5OFCON_OFM1_POSITION                  equ 0006h
PWM5OFCON_OFM1_SIZE                      equ 0001h
PWM5OFCON_OFM1_LENGTH                    equ 0001h
PWM5OFCON_OFM1_MASK                      equ 0040h

// Register: PWM6PHL
#define PWM6PHL PWM6PHL
PWM6PHL                                  equ 0DA1h
// bitfield definitions
PWM6PHL_PH_POSN                          equ 0000h
PWM6PHL_PH_POSITION                      equ 0000h
PWM6PHL_PH_SIZE                          equ 0008h
PWM6PHL_PH_LENGTH                        equ 0008h
PWM6PHL_PH_MASK                          equ 00FFh
PWM6PHL_PWM6PHL0_POSN                    equ 0000h
PWM6PHL_PWM6PHL0_POSITION                equ 0000h
PWM6PHL_PWM6PHL0_SIZE                    equ 0001h
PWM6PHL_PWM6PHL0_LENGTH                  equ 0001h
PWM6PHL_PWM6PHL0_MASK                    equ 0001h
PWM6PHL_PWM6PHL1_POSN                    equ 0001h
PWM6PHL_PWM6PHL1_POSITION                equ 0001h
PWM6PHL_PWM6PHL1_SIZE                    equ 0001h
PWM6PHL_PWM6PHL1_LENGTH                  equ 0001h
PWM6PHL_PWM6PHL1_MASK                    equ 0002h
PWM6PHL_PWM6PHL2_POSN                    equ 0002h
PWM6PHL_PWM6PHL2_POSITION                equ 0002h
PWM6PHL_PWM6PHL2_SIZE                    equ 0001h
PWM6PHL_PWM6PHL2_LENGTH                  equ 0001h
PWM6PHL_PWM6PHL2_MASK                    equ 0004h
PWM6PHL_PWM6PHL3_POSN                    equ 0003h
PWM6PHL_PWM6PHL3_POSITION                equ 0003h
PWM6PHL_PWM6PHL3_SIZE                    equ 0001h
PWM6PHL_PWM6PHL3_LENGTH                  equ 0001h
PWM6PHL_PWM6PHL3_MASK                    equ 0008h
PWM6PHL_PWM6PHL4_POSN                    equ 0004h
PWM6PHL_PWM6PHL4_POSITION                equ 0004h
PWM6PHL_PWM6PHL4_SIZE                    equ 0001h
PWM6PHL_PWM6PHL4_LENGTH                  equ 0001h
PWM6PHL_PWM6PHL4_MASK                    equ 0010h
PWM6PHL_PWM6PHL5_POSN                    equ 0005h
PWM6PHL_PWM6PHL5_POSITION                equ 0005h
PWM6PHL_PWM6PHL5_SIZE                    equ 0001h
PWM6PHL_PWM6PHL5_LENGTH                  equ 0001h
PWM6PHL_PWM6PHL5_MASK                    equ 0020h
PWM6PHL_PWM6PHL6_POSN                    equ 0006h
PWM6PHL_PWM6PHL6_POSITION                equ 0006h
PWM6PHL_PWM6PHL6_SIZE                    equ 0001h
PWM6PHL_PWM6PHL6_LENGTH                  equ 0001h
PWM6PHL_PWM6PHL6_MASK                    equ 0040h
PWM6PHL_PWM6PHL7_POSN                    equ 0007h
PWM6PHL_PWM6PHL7_POSITION                equ 0007h
PWM6PHL_PWM6PHL7_SIZE                    equ 0001h
PWM6PHL_PWM6PHL7_LENGTH                  equ 0001h
PWM6PHL_PWM6PHL7_MASK                    equ 0080h
PWM6PHL_PWM6PHL_POSN                     equ 0000h
PWM6PHL_PWM6PHL_POSITION                 equ 0000h
PWM6PHL_PWM6PHL_SIZE                     equ 0008h
PWM6PHL_PWM6PHL_LENGTH                   equ 0008h
PWM6PHL_PWM6PHL_MASK                     equ 00FFh

// Register: PWM6PHH
#define PWM6PHH PWM6PHH
PWM6PHH                                  equ 0DA2h
// bitfield definitions
PWM6PHH_PH_POSN                          equ 0000h
PWM6PHH_PH_POSITION                      equ 0000h
PWM6PHH_PH_SIZE                          equ 0008h
PWM6PHH_PH_LENGTH                        equ 0008h
PWM6PHH_PH_MASK                          equ 00FFh
PWM6PHH_PWM6PHH0_POSN                    equ 0000h
PWM6PHH_PWM6PHH0_POSITION                equ 0000h
PWM6PHH_PWM6PHH0_SIZE                    equ 0001h
PWM6PHH_PWM6PHH0_LENGTH                  equ 0001h
PWM6PHH_PWM6PHH0_MASK                    equ 0001h
PWM6PHH_PWM6PHH1_POSN                    equ 0001h
PWM6PHH_PWM6PHH1_POSITION                equ 0001h
PWM6PHH_PWM6PHH1_SIZE                    equ 0001h
PWM6PHH_PWM6PHH1_LENGTH                  equ 0001h
PWM6PHH_PWM6PHH1_MASK                    equ 0002h
PWM6PHH_PWM6PHH2_POSN                    equ 0002h
PWM6PHH_PWM6PHH2_POSITION                equ 0002h
PWM6PHH_PWM6PHH2_SIZE                    equ 0001h
PWM6PHH_PWM6PHH2_LENGTH                  equ 0001h
PWM6PHH_PWM6PHH2_MASK                    equ 0004h
PWM6PHH_PWM6PHH3_POSN                    equ 0003h
PWM6PHH_PWM6PHH3_POSITION                equ 0003h
PWM6PHH_PWM6PHH3_SIZE                    equ 0001h
PWM6PHH_PWM6PHH3_LENGTH                  equ 0001h
PWM6PHH_PWM6PHH3_MASK                    equ 0008h
PWM6PHH_PWM6PHH4_POSN                    equ 0004h
PWM6PHH_PWM6PHH4_POSITION                equ 0004h
PWM6PHH_PWM6PHH4_SIZE                    equ 0001h
PWM6PHH_PWM6PHH4_LENGTH                  equ 0001h
PWM6PHH_PWM6PHH4_MASK                    equ 0010h
PWM6PHH_PWM6PHH5_POSN                    equ 0005h
PWM6PHH_PWM6PHH5_POSITION                equ 0005h
PWM6PHH_PWM6PHH5_SIZE                    equ 0001h
PWM6PHH_PWM6PHH5_LENGTH                  equ 0001h
PWM6PHH_PWM6PHH5_MASK                    equ 0020h
PWM6PHH_PWM6PHH6_POSN                    equ 0006h
PWM6PHH_PWM6PHH6_POSITION                equ 0006h
PWM6PHH_PWM6PHH6_SIZE                    equ 0001h
PWM6PHH_PWM6PHH6_LENGTH                  equ 0001h
PWM6PHH_PWM6PHH6_MASK                    equ 0040h
PWM6PHH_PWM6PHH7_POSN                    equ 0007h
PWM6PHH_PWM6PHH7_POSITION                equ 0007h
PWM6PHH_PWM6PHH7_SIZE                    equ 0001h
PWM6PHH_PWM6PHH7_LENGTH                  equ 0001h
PWM6PHH_PWM6PHH7_MASK                    equ 0080h
PWM6PHH_PWM6PHH_POSN                     equ 0000h
PWM6PHH_PWM6PHH_POSITION                 equ 0000h
PWM6PHH_PWM6PHH_SIZE                     equ 0008h
PWM6PHH_PWM6PHH_LENGTH                   equ 0008h
PWM6PHH_PWM6PHH_MASK                     equ 00FFh

// Register: PWM6DCL
#define PWM6DCL PWM6DCL
PWM6DCL                                  equ 0DA3h
// bitfield definitions
PWM6DCL_DC_POSN                          equ 0000h
PWM6DCL_DC_POSITION                      equ 0000h
PWM6DCL_DC_SIZE                          equ 0008h
PWM6DCL_DC_LENGTH                        equ 0008h
PWM6DCL_DC_MASK                          equ 00FFh
PWM6DCL_PWM6DCL0_POSN                    equ 0000h
PWM6DCL_PWM6DCL0_POSITION                equ 0000h
PWM6DCL_PWM6DCL0_SIZE                    equ 0001h
PWM6DCL_PWM6DCL0_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL0_MASK                    equ 0001h
PWM6DCL_PWM6DCL1_POSN                    equ 0001h
PWM6DCL_PWM6DCL1_POSITION                equ 0001h
PWM6DCL_PWM6DCL1_SIZE                    equ 0001h
PWM6DCL_PWM6DCL1_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL1_MASK                    equ 0002h
PWM6DCL_PWM6DCL2_POSN                    equ 0002h
PWM6DCL_PWM6DCL2_POSITION                equ 0002h
PWM6DCL_PWM6DCL2_SIZE                    equ 0001h
PWM6DCL_PWM6DCL2_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL2_MASK                    equ 0004h
PWM6DCL_PWM6DCL3_POSN                    equ 0003h
PWM6DCL_PWM6DCL3_POSITION                equ 0003h
PWM6DCL_PWM6DCL3_SIZE                    equ 0001h
PWM6DCL_PWM6DCL3_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL3_MASK                    equ 0008h
PWM6DCL_PWM6DCL4_POSN                    equ 0004h
PWM6DCL_PWM6DCL4_POSITION                equ 0004h
PWM6DCL_PWM6DCL4_SIZE                    equ 0001h
PWM6DCL_PWM6DCL4_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL4_MASK                    equ 0010h
PWM6DCL_PWM6DCL5_POSN                    equ 0005h
PWM6DCL_PWM6DCL5_POSITION                equ 0005h
PWM6DCL_PWM6DCL5_SIZE                    equ 0001h
PWM6DCL_PWM6DCL5_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL5_MASK                    equ 0020h
PWM6DCL_PWM6DCL6_POSN                    equ 0006h
PWM6DCL_PWM6DCL6_POSITION                equ 0006h
PWM6DCL_PWM6DCL6_SIZE                    equ 0001h
PWM6DCL_PWM6DCL6_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL6_MASK                    equ 0040h
PWM6DCL_PWM6DCL7_POSN                    equ 0007h
PWM6DCL_PWM6DCL7_POSITION                equ 0007h
PWM6DCL_PWM6DCL7_SIZE                    equ 0001h
PWM6DCL_PWM6DCL7_LENGTH                  equ 0001h
PWM6DCL_PWM6DCL7_MASK                    equ 0080h
PWM6DCL_PWM6DCL_POSN                     equ 0000h
PWM6DCL_PWM6DCL_POSITION                 equ 0000h
PWM6DCL_PWM6DCL_SIZE                     equ 0008h
PWM6DCL_PWM6DCL_LENGTH                   equ 0008h
PWM6DCL_PWM6DCL_MASK                     equ 00FFh

// Register: PWM6DCH
#define PWM6DCH PWM6DCH
PWM6DCH                                  equ 0DA4h
// bitfield definitions
PWM6DCH_DC_POSN                          equ 0000h
PWM6DCH_DC_POSITION                      equ 0000h
PWM6DCH_DC_SIZE                          equ 0008h
PWM6DCH_DC_LENGTH                        equ 0008h
PWM6DCH_DC_MASK                          equ 00FFh
PWM6DCH_PWM6DCH0_POSN                    equ 0000h
PWM6DCH_PWM6DCH0_POSITION                equ 0000h
PWM6DCH_PWM6DCH0_SIZE                    equ 0001h
PWM6DCH_PWM6DCH0_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH0_MASK                    equ 0001h
PWM6DCH_PWM6DCH1_POSN                    equ 0001h
PWM6DCH_PWM6DCH1_POSITION                equ 0001h
PWM6DCH_PWM6DCH1_SIZE                    equ 0001h
PWM6DCH_PWM6DCH1_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH1_MASK                    equ 0002h
PWM6DCH_PWM6DCH2_POSN                    equ 0002h
PWM6DCH_PWM6DCH2_POSITION                equ 0002h
PWM6DCH_PWM6DCH2_SIZE                    equ 0001h
PWM6DCH_PWM6DCH2_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH2_MASK                    equ 0004h
PWM6DCH_PWM6DCH3_POSN                    equ 0003h
PWM6DCH_PWM6DCH3_POSITION                equ 0003h
PWM6DCH_PWM6DCH3_SIZE                    equ 0001h
PWM6DCH_PWM6DCH3_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH3_MASK                    equ 0008h
PWM6DCH_PWM6DCH4_POSN                    equ 0004h
PWM6DCH_PWM6DCH4_POSITION                equ 0004h
PWM6DCH_PWM6DCH4_SIZE                    equ 0001h
PWM6DCH_PWM6DCH4_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH4_MASK                    equ 0010h
PWM6DCH_PWM6DCH5_POSN                    equ 0005h
PWM6DCH_PWM6DCH5_POSITION                equ 0005h
PWM6DCH_PWM6DCH5_SIZE                    equ 0001h
PWM6DCH_PWM6DCH5_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH5_MASK                    equ 0020h
PWM6DCH_PWM6DCH6_POSN                    equ 0006h
PWM6DCH_PWM6DCH6_POSITION                equ 0006h
PWM6DCH_PWM6DCH6_SIZE                    equ 0001h
PWM6DCH_PWM6DCH6_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH6_MASK                    equ 0040h
PWM6DCH_PWM6DCH7_POSN                    equ 0007h
PWM6DCH_PWM6DCH7_POSITION                equ 0007h
PWM6DCH_PWM6DCH7_SIZE                    equ 0001h
PWM6DCH_PWM6DCH7_LENGTH                  equ 0001h
PWM6DCH_PWM6DCH7_MASK                    equ 0080h
PWM6DCH_PWM6DCH_POSN                     equ 0000h
PWM6DCH_PWM6DCH_POSITION                 equ 0000h
PWM6DCH_PWM6DCH_SIZE                     equ 0008h
PWM6DCH_PWM6DCH_LENGTH                   equ 0008h
PWM6DCH_PWM6DCH_MASK                     equ 00FFh

// Register: PWM6PRL
#define PWM6PRL PWM6PRL
PWM6PRL                                  equ 0DA5h
// bitfield definitions
PWM6PRL_PR_POSN                          equ 0000h
PWM6PRL_PR_POSITION                      equ 0000h
PWM6PRL_PR_SIZE                          equ 0008h
PWM6PRL_PR_LENGTH                        equ 0008h
PWM6PRL_PR_MASK                          equ 00FFh
PWM6PRL_PWM6PRL0_POSN                    equ 0000h
PWM6PRL_PWM6PRL0_POSITION                equ 0000h
PWM6PRL_PWM6PRL0_SIZE                    equ 0001h
PWM6PRL_PWM6PRL0_LENGTH                  equ 0001h
PWM6PRL_PWM6PRL0_MASK                    equ 0001h
PWM6PRL_PWM6PRL1_POSN                    equ 0001h
PWM6PRL_PWM6PRL1_POSITION                equ 0001h
PWM6PRL_PWM6PRL1_SIZE                    equ 0001h
PWM6PRL_PWM6PRL1_LENGTH                  equ 0001h
PWM6PRL_PWM6PRL1_MASK                    equ 0002h
PWM6PRL_PWM6PRL2_POSN                    equ 0002h
PWM6PRL_PWM6PRL2_POSITION                equ 0002h
PWM6PRL_PWM6PRL2_SIZE                    equ 0001h
PWM6PRL_PWM6PRL2_LENGTH                  equ 0001h
PWM6PRL_PWM6PRL2_MASK                    equ 0004h
PWM6PRL_PWM6PRL3_POSN                    equ 0003h
PWM6PRL_PWM6PRL3_POSITION                equ 0003h
PWM6PRL_PWM6PRL3_SIZE                    equ 0001h
PWM6PRL_PWM6PRL3_LENGTH                  equ 0001h
PWM6PRL_PWM6PRL3_MASK                    equ 0008h
PWM6PRL_PWM6PRL4_POSN                    equ 0004h
PWM6PRL_PWM6PRL4_POSITION                equ 0004h
PWM6PRL_PWM6PRL4_SIZE                    equ 0001h
PWM6PRL_PWM6PRL4_LENGTH                  equ 0001h
PWM6PRL_PWM6PRL4_MASK                    equ 0010h
PWM6PRL_PWM6PRL5_POSN                    equ 0005h
PWM6PRL_PWM6PRL5_POSITION                equ 0005h
PWM6PRL_PWM6PRL5_SIZE                    equ 0001h
PWM6PRL_PWM6PRL5_LENGTH                  equ 0001h
PWM6PRL_PWM6PRL5_MASK                    equ 0020h
PWM6PRL_PWM6PRL6_POSN                    equ 0006h
PWM6PRL_PWM6PRL6_POSITION                equ 0006h
PWM6PRL_PWM6PRL6_SIZE                    equ 0001h
PWM6PRL_PWM6PRL6_LENGTH                  equ 0001h
PWM6PRL_PWM6PRL6_MASK                    equ 0040h
PWM6PRL_PWM6PRL7_POSN                    equ 0007h
PWM6PRL_PWM6PRL7_POSITION                equ 0007h
PWM6PRL_PWM6PRL7_SIZE                    equ 0001h
PWM6PRL_PWM6PRL7_LENGTH                  equ 0001h
PWM6PRL_PWM6PRL7_MASK                    equ 0080h
PWM6PRL_PWM6PRL_POSN                     equ 0000h
PWM6PRL_PWM6PRL_POSITION                 equ 0000h
PWM6PRL_PWM6PRL_SIZE                     equ 0008h
PWM6PRL_PWM6PRL_LENGTH                   equ 0008h
PWM6PRL_PWM6PRL_MASK                     equ 00FFh

// Register: PWM6PRH
#define PWM6PRH PWM6PRH
PWM6PRH                                  equ 0DA6h
// bitfield definitions
PWM6PRH_PR_POSN                          equ 0000h
PWM6PRH_PR_POSITION                      equ 0000h
PWM6PRH_PR_SIZE                          equ 0008h
PWM6PRH_PR_LENGTH                        equ 0008h
PWM6PRH_PR_MASK                          equ 00FFh
PWM6PRH_PWM6PRH0_POSN                    equ 0000h
PWM6PRH_PWM6PRH0_POSITION                equ 0000h
PWM6PRH_PWM6PRH0_SIZE                    equ 0001h
PWM6PRH_PWM6PRH0_LENGTH                  equ 0001h
PWM6PRH_PWM6PRH0_MASK                    equ 0001h
PWM6PRH_PWM6PRH1_POSN                    equ 0001h
PWM6PRH_PWM6PRH1_POSITION                equ 0001h
PWM6PRH_PWM6PRH1_SIZE                    equ 0001h
PWM6PRH_PWM6PRH1_LENGTH                  equ 0001h
PWM6PRH_PWM6PRH1_MASK                    equ 0002h
PWM6PRH_PWM6PRH2_POSN                    equ 0002h
PWM6PRH_PWM6PRH2_POSITION                equ 0002h
PWM6PRH_PWM6PRH2_SIZE                    equ 0001h
PWM6PRH_PWM6PRH2_LENGTH                  equ 0001h
PWM6PRH_PWM6PRH2_MASK                    equ 0004h
PWM6PRH_PWM6PRH3_POSN                    equ 0003h
PWM6PRH_PWM6PRH3_POSITION                equ 0003h
PWM6PRH_PWM6PRH3_SIZE                    equ 0001h
PWM6PRH_PWM6PRH3_LENGTH                  equ 0001h
PWM6PRH_PWM6PRH3_MASK                    equ 0008h
PWM6PRH_PWM6PRH4_POSN                    equ 0004h
PWM6PRH_PWM6PRH4_POSITION                equ 0004h
PWM6PRH_PWM6PRH4_SIZE                    equ 0001h
PWM6PRH_PWM6PRH4_LENGTH                  equ 0001h
PWM6PRH_PWM6PRH4_MASK                    equ 0010h
PWM6PRH_PWM6PRH5_POSN                    equ 0005h
PWM6PRH_PWM6PRH5_POSITION                equ 0005h
PWM6PRH_PWM6PRH5_SIZE                    equ 0001h
PWM6PRH_PWM6PRH5_LENGTH                  equ 0001h
PWM6PRH_PWM6PRH5_MASK                    equ 0020h
PWM6PRH_PWM6PRH6_POSN                    equ 0006h
PWM6PRH_PWM6PRH6_POSITION                equ 0006h
PWM6PRH_PWM6PRH6_SIZE                    equ 0001h
PWM6PRH_PWM6PRH6_LENGTH                  equ 0001h
PWM6PRH_PWM6PRH6_MASK                    equ 0040h
PWM6PRH_PWM6PRH7_POSN                    equ 0007h
PWM6PRH_PWM6PRH7_POSITION                equ 0007h
PWM6PRH_PWM6PRH7_SIZE                    equ 0001h
PWM6PRH_PWM6PRH7_LENGTH                  equ 0001h
PWM6PRH_PWM6PRH7_MASK                    equ 0080h
PWM6PRH_PWM6PRH_POSN                     equ 0000h
PWM6PRH_PWM6PRH_POSITION                 equ 0000h
PWM6PRH_PWM6PRH_SIZE                     equ 0008h
PWM6PRH_PWM6PRH_LENGTH                   equ 0008h
PWM6PRH_PWM6PRH_MASK                     equ 00FFh

// Register: PWM6OFL
#define PWM6OFL PWM6OFL
PWM6OFL                                  equ 0DA7h
// bitfield definitions
PWM6OFL_OF_POSN                          equ 0000h
PWM6OFL_OF_POSITION                      equ 0000h
PWM6OFL_OF_SIZE                          equ 0008h
PWM6OFL_OF_LENGTH                        equ 0008h
PWM6OFL_OF_MASK                          equ 00FFh
PWM6OFL_PWM6OFL0_POSN                    equ 0000h
PWM6OFL_PWM6OFL0_POSITION                equ 0000h
PWM6OFL_PWM6OFL0_SIZE                    equ 0001h
PWM6OFL_PWM6OFL0_LENGTH                  equ 0001h
PWM6OFL_PWM6OFL0_MASK                    equ 0001h
PWM6OFL_PWM6OFL1_POSN                    equ 0001h
PWM6OFL_PWM6OFL1_POSITION                equ 0001h
PWM6OFL_PWM6OFL1_SIZE                    equ 0001h
PWM6OFL_PWM6OFL1_LENGTH                  equ 0001h
PWM6OFL_PWM6OFL1_MASK                    equ 0002h
PWM6OFL_PWM6OFL2_POSN                    equ 0002h
PWM6OFL_PWM6OFL2_POSITION                equ 0002h
PWM6OFL_PWM6OFL2_SIZE                    equ 0001h
PWM6OFL_PWM6OFL2_LENGTH                  equ 0001h
PWM6OFL_PWM6OFL2_MASK                    equ 0004h
PWM6OFL_PWM6OFL3_POSN                    equ 0003h
PWM6OFL_PWM6OFL3_POSITION                equ 0003h
PWM6OFL_PWM6OFL3_SIZE                    equ 0001h
PWM6OFL_PWM6OFL3_LENGTH                  equ 0001h
PWM6OFL_PWM6OFL3_MASK                    equ 0008h
PWM6OFL_PWM6OFL4_POSN                    equ 0004h
PWM6OFL_PWM6OFL4_POSITION                equ 0004h
PWM6OFL_PWM6OFL4_SIZE                    equ 0001h
PWM6OFL_PWM6OFL4_LENGTH                  equ 0001h
PWM6OFL_PWM6OFL4_MASK                    equ 0010h
PWM6OFL_PWM6OFL5_POSN                    equ 0005h
PWM6OFL_PWM6OFL5_POSITION                equ 0005h
PWM6OFL_PWM6OFL5_SIZE                    equ 0001h
PWM6OFL_PWM6OFL5_LENGTH                  equ 0001h
PWM6OFL_PWM6OFL5_MASK                    equ 0020h
PWM6OFL_PWM6OFL6_POSN                    equ 0006h
PWM6OFL_PWM6OFL6_POSITION                equ 0006h
PWM6OFL_PWM6OFL6_SIZE                    equ 0001h
PWM6OFL_PWM6OFL6_LENGTH                  equ 0001h
PWM6OFL_PWM6OFL6_MASK                    equ 0040h
PWM6OFL_PWM6OFL7_POSN                    equ 0007h
PWM6OFL_PWM6OFL7_POSITION                equ 0007h
PWM6OFL_PWM6OFL7_SIZE                    equ 0001h
PWM6OFL_PWM6OFL7_LENGTH                  equ 0001h
PWM6OFL_PWM6OFL7_MASK                    equ 0080h
PWM6OFL_PWM6OFL_POSN                     equ 0000h
PWM6OFL_PWM6OFL_POSITION                 equ 0000h
PWM6OFL_PWM6OFL_SIZE                     equ 0008h
PWM6OFL_PWM6OFL_LENGTH                   equ 0008h
PWM6OFL_PWM6OFL_MASK                     equ 00FFh

// Register: PWM6OFH
#define PWM6OFH PWM6OFH
PWM6OFH                                  equ 0DA8h
// bitfield definitions
PWM6OFH_OF_POSN                          equ 0000h
PWM6OFH_OF_POSITION                      equ 0000h
PWM6OFH_OF_SIZE                          equ 0008h
PWM6OFH_OF_LENGTH                        equ 0008h
PWM6OFH_OF_MASK                          equ 00FFh
PWM6OFH_PWM6OFH0_POSN                    equ 0000h
PWM6OFH_PWM6OFH0_POSITION                equ 0000h
PWM6OFH_PWM6OFH0_SIZE                    equ 0001h
PWM6OFH_PWM6OFH0_LENGTH                  equ 0001h
PWM6OFH_PWM6OFH0_MASK                    equ 0001h
PWM6OFH_PWM6OFH1_POSN                    equ 0001h
PWM6OFH_PWM6OFH1_POSITION                equ 0001h
PWM6OFH_PWM6OFH1_SIZE                    equ 0001h
PWM6OFH_PWM6OFH1_LENGTH                  equ 0001h
PWM6OFH_PWM6OFH1_MASK                    equ 0002h
PWM6OFH_PWM6OFH2_POSN                    equ 0002h
PWM6OFH_PWM6OFH2_POSITION                equ 0002h
PWM6OFH_PWM6OFH2_SIZE                    equ 0001h
PWM6OFH_PWM6OFH2_LENGTH                  equ 0001h
PWM6OFH_PWM6OFH2_MASK                    equ 0004h
PWM6OFH_PWM6OFH3_POSN                    equ 0003h
PWM6OFH_PWM6OFH3_POSITION                equ 0003h
PWM6OFH_PWM6OFH3_SIZE                    equ 0001h
PWM6OFH_PWM6OFH3_LENGTH                  equ 0001h
PWM6OFH_PWM6OFH3_MASK                    equ 0008h
PWM6OFH_PWM6OFH4_POSN                    equ 0004h
PWM6OFH_PWM6OFH4_POSITION                equ 0004h
PWM6OFH_PWM6OFH4_SIZE                    equ 0001h
PWM6OFH_PWM6OFH4_LENGTH                  equ 0001h
PWM6OFH_PWM6OFH4_MASK                    equ 0010h
PWM6OFH_PWM6OFH5_POSN                    equ 0005h
PWM6OFH_PWM6OFH5_POSITION                equ 0005h
PWM6OFH_PWM6OFH5_SIZE                    equ 0001h
PWM6OFH_PWM6OFH5_LENGTH                  equ 0001h
PWM6OFH_PWM6OFH5_MASK                    equ 0020h
PWM6OFH_PWM6OFH6_POSN                    equ 0006h
PWM6OFH_PWM6OFH6_POSITION                equ 0006h
PWM6OFH_PWM6OFH6_SIZE                    equ 0001h
PWM6OFH_PWM6OFH6_LENGTH                  equ 0001h
PWM6OFH_PWM6OFH6_MASK                    equ 0040h
PWM6OFH_PWM6OFH7_POSN                    equ 0007h
PWM6OFH_PWM6OFH7_POSITION                equ 0007h
PWM6OFH_PWM6OFH7_SIZE                    equ 0001h
PWM6OFH_PWM6OFH7_LENGTH                  equ 0001h
PWM6OFH_PWM6OFH7_MASK                    equ 0080h
PWM6OFH_PWM6OFH_POSN                     equ 0000h
PWM6OFH_PWM6OFH_POSITION                 equ 0000h
PWM6OFH_PWM6OFH_SIZE                     equ 0008h
PWM6OFH_PWM6OFH_LENGTH                   equ 0008h
PWM6OFH_PWM6OFH_MASK                     equ 00FFh

// Register: PWM6TMRL
#define PWM6TMRL PWM6TMRL
PWM6TMRL                                 equ 0DA9h
// bitfield definitions
PWM6TMRL_TMR_POSN                        equ 0000h
PWM6TMRL_TMR_POSITION                    equ 0000h
PWM6TMRL_TMR_SIZE                        equ 0008h
PWM6TMRL_TMR_LENGTH                      equ 0008h
PWM6TMRL_TMR_MASK                        equ 00FFh
PWM6TMRL_PWM6TMRL0_POSN                  equ 0000h
PWM6TMRL_PWM6TMRL0_POSITION              equ 0000h
PWM6TMRL_PWM6TMRL0_SIZE                  equ 0001h
PWM6TMRL_PWM6TMRL0_LENGTH                equ 0001h
PWM6TMRL_PWM6TMRL0_MASK                  equ 0001h
PWM6TMRL_PWM6TMRL1_POSN                  equ 0001h
PWM6TMRL_PWM6TMRL1_POSITION              equ 0001h
PWM6TMRL_PWM6TMRL1_SIZE                  equ 0001h
PWM6TMRL_PWM6TMRL1_LENGTH                equ 0001h
PWM6TMRL_PWM6TMRL1_MASK                  equ 0002h
PWM6TMRL_PWM6TMRL2_POSN                  equ 0002h
PWM6TMRL_PWM6TMRL2_POSITION              equ 0002h
PWM6TMRL_PWM6TMRL2_SIZE                  equ 0001h
PWM6TMRL_PWM6TMRL2_LENGTH                equ 0001h
PWM6TMRL_PWM6TMRL2_MASK                  equ 0004h
PWM6TMRL_PWM6TMRL3_POSN                  equ 0003h
PWM6TMRL_PWM6TMRL3_POSITION              equ 0003h
PWM6TMRL_PWM6TMRL3_SIZE                  equ 0001h
PWM6TMRL_PWM6TMRL3_LENGTH                equ 0001h
PWM6TMRL_PWM6TMRL3_MASK                  equ 0008h
PWM6TMRL_PWM6TMRL4_POSN                  equ 0004h
PWM6TMRL_PWM6TMRL4_POSITION              equ 0004h
PWM6TMRL_PWM6TMRL4_SIZE                  equ 0001h
PWM6TMRL_PWM6TMRL4_LENGTH                equ 0001h
PWM6TMRL_PWM6TMRL4_MASK                  equ 0010h
PWM6TMRL_PWM6TMRL5_POSN                  equ 0005h
PWM6TMRL_PWM6TMRL5_POSITION              equ 0005h
PWM6TMRL_PWM6TMRL5_SIZE                  equ 0001h
PWM6TMRL_PWM6TMRL5_LENGTH                equ 0001h
PWM6TMRL_PWM6TMRL5_MASK                  equ 0020h
PWM6TMRL_PWM6TMRL6_POSN                  equ 0006h
PWM6TMRL_PWM6TMRL6_POSITION              equ 0006h
PWM6TMRL_PWM6TMRL6_SIZE                  equ 0001h
PWM6TMRL_PWM6TMRL6_LENGTH                equ 0001h
PWM6TMRL_PWM6TMRL6_MASK                  equ 0040h
PWM6TMRL_PWM6TMRL7_POSN                  equ 0007h
PWM6TMRL_PWM6TMRL7_POSITION              equ 0007h
PWM6TMRL_PWM6TMRL7_SIZE                  equ 0001h
PWM6TMRL_PWM6TMRL7_LENGTH                equ 0001h
PWM6TMRL_PWM6TMRL7_MASK                  equ 0080h
PWM6TMRL_PWM6TMRL_POSN                   equ 0000h
PWM6TMRL_PWM6TMRL_POSITION               equ 0000h
PWM6TMRL_PWM6TMRL_SIZE                   equ 0008h
PWM6TMRL_PWM6TMRL_LENGTH                 equ 0008h
PWM6TMRL_PWM6TMRL_MASK                   equ 00FFh

// Register: PWM6TMRH
#define PWM6TMRH PWM6TMRH
PWM6TMRH                                 equ 0DAAh
// bitfield definitions
PWM6TMRH_TMR_POSN                        equ 0000h
PWM6TMRH_TMR_POSITION                    equ 0000h
PWM6TMRH_TMR_SIZE                        equ 0008h
PWM6TMRH_TMR_LENGTH                      equ 0008h
PWM6TMRH_TMR_MASK                        equ 00FFh
PWM6TMRH_PWM6TMRH0_POSN                  equ 0000h
PWM6TMRH_PWM6TMRH0_POSITION              equ 0000h
PWM6TMRH_PWM6TMRH0_SIZE                  equ 0001h
PWM6TMRH_PWM6TMRH0_LENGTH                equ 0001h
PWM6TMRH_PWM6TMRH0_MASK                  equ 0001h
PWM6TMRH_PWM6TMRH1_POSN                  equ 0001h
PWM6TMRH_PWM6TMRH1_POSITION              equ 0001h
PWM6TMRH_PWM6TMRH1_SIZE                  equ 0001h
PWM6TMRH_PWM6TMRH1_LENGTH                equ 0001h
PWM6TMRH_PWM6TMRH1_MASK                  equ 0002h
PWM6TMRH_PWM6TMRH2_POSN                  equ 0002h
PWM6TMRH_PWM6TMRH2_POSITION              equ 0002h
PWM6TMRH_PWM6TMRH2_SIZE                  equ 0001h
PWM6TMRH_PWM6TMRH2_LENGTH                equ 0001h
PWM6TMRH_PWM6TMRH2_MASK                  equ 0004h
PWM6TMRH_PWM6TMRH3_POSN                  equ 0003h
PWM6TMRH_PWM6TMRH3_POSITION              equ 0003h
PWM6TMRH_PWM6TMRH3_SIZE                  equ 0001h
PWM6TMRH_PWM6TMRH3_LENGTH                equ 0001h
PWM6TMRH_PWM6TMRH3_MASK                  equ 0008h
PWM6TMRH_PWM6TMRH4_POSN                  equ 0004h
PWM6TMRH_PWM6TMRH4_POSITION              equ 0004h
PWM6TMRH_PWM6TMRH4_SIZE                  equ 0001h
PWM6TMRH_PWM6TMRH4_LENGTH                equ 0001h
PWM6TMRH_PWM6TMRH4_MASK                  equ 0010h
PWM6TMRH_PWM6TMRH5_POSN                  equ 0005h
PWM6TMRH_PWM6TMRH5_POSITION              equ 0005h
PWM6TMRH_PWM6TMRH5_SIZE                  equ 0001h
PWM6TMRH_PWM6TMRH5_LENGTH                equ 0001h
PWM6TMRH_PWM6TMRH5_MASK                  equ 0020h
PWM6TMRH_PWM6TMRH6_POSN                  equ 0006h
PWM6TMRH_PWM6TMRH6_POSITION              equ 0006h
PWM6TMRH_PWM6TMRH6_SIZE                  equ 0001h
PWM6TMRH_PWM6TMRH6_LENGTH                equ 0001h
PWM6TMRH_PWM6TMRH6_MASK                  equ 0040h
PWM6TMRH_PWM6TMRH7_POSN                  equ 0007h
PWM6TMRH_PWM6TMRH7_POSITION              equ 0007h
PWM6TMRH_PWM6TMRH7_SIZE                  equ 0001h
PWM6TMRH_PWM6TMRH7_LENGTH                equ 0001h
PWM6TMRH_PWM6TMRH7_MASK                  equ 0080h
PWM6TMRH_PWM6TMRH_POSN                   equ 0000h
PWM6TMRH_PWM6TMRH_POSITION               equ 0000h
PWM6TMRH_PWM6TMRH_SIZE                   equ 0008h
PWM6TMRH_PWM6TMRH_LENGTH                 equ 0008h
PWM6TMRH_PWM6TMRH_MASK                   equ 00FFh

// Register: PWM6CON
#define PWM6CON PWM6CON
PWM6CON                                  equ 0DABh
// bitfield definitions
PWM6CON_MODE_POSN                        equ 0002h
PWM6CON_MODE_POSITION                    equ 0002h
PWM6CON_MODE_SIZE                        equ 0002h
PWM6CON_MODE_LENGTH                      equ 0002h
PWM6CON_MODE_MASK                        equ 000Ch
PWM6CON_POL_POSN                         equ 0004h
PWM6CON_POL_POSITION                     equ 0004h
PWM6CON_POL_SIZE                         equ 0001h
PWM6CON_POL_LENGTH                       equ 0001h
PWM6CON_POL_MASK                         equ 0010h
PWM6CON_OUT_POSN                         equ 0005h
PWM6CON_OUT_POSITION                     equ 0005h
PWM6CON_OUT_SIZE                         equ 0001h
PWM6CON_OUT_LENGTH                       equ 0001h
PWM6CON_OUT_MASK                         equ 0020h
PWM6CON_EN_POSN                          equ 0007h
PWM6CON_EN_POSITION                      equ 0007h
PWM6CON_EN_SIZE                          equ 0001h
PWM6CON_EN_LENGTH                        equ 0001h
PWM6CON_EN_MASK                          equ 0080h
PWM6CON_PWM6MODE0_POSN                   equ 0002h
PWM6CON_PWM6MODE0_POSITION               equ 0002h
PWM6CON_PWM6MODE0_SIZE                   equ 0001h
PWM6CON_PWM6MODE0_LENGTH                 equ 0001h
PWM6CON_PWM6MODE0_MASK                   equ 0004h
PWM6CON_PWM6MODE1_POSN                   equ 0003h
PWM6CON_PWM6MODE1_POSITION               equ 0003h
PWM6CON_PWM6MODE1_SIZE                   equ 0001h
PWM6CON_PWM6MODE1_LENGTH                 equ 0001h
PWM6CON_PWM6MODE1_MASK                   equ 0008h
PWM6CON_PWM6MODE_POSN                    equ 0002h
PWM6CON_PWM6MODE_POSITION                equ 0002h
PWM6CON_PWM6MODE_SIZE                    equ 0002h
PWM6CON_PWM6MODE_LENGTH                  equ 0002h
PWM6CON_PWM6MODE_MASK                    equ 000Ch
PWM6CON_PWM6POL_POSN                     equ 0004h
PWM6CON_PWM6POL_POSITION                 equ 0004h
PWM6CON_PWM6POL_SIZE                     equ 0001h
PWM6CON_PWM6POL_LENGTH                   equ 0001h
PWM6CON_PWM6POL_MASK                     equ 0010h
PWM6CON_PWM6OUT_POSN                     equ 0005h
PWM6CON_PWM6OUT_POSITION                 equ 0005h
PWM6CON_PWM6OUT_SIZE                     equ 0001h
PWM6CON_PWM6OUT_LENGTH                   equ 0001h
PWM6CON_PWM6OUT_MASK                     equ 0020h
PWM6CON_PWM6EN_POSN                      equ 0007h
PWM6CON_PWM6EN_POSITION                  equ 0007h
PWM6CON_PWM6EN_SIZE                      equ 0001h
PWM6CON_PWM6EN_LENGTH                    equ 0001h
PWM6CON_PWM6EN_MASK                      equ 0080h
PWM6CON_MODE0_POSN                       equ 0002h
PWM6CON_MODE0_POSITION                   equ 0002h
PWM6CON_MODE0_SIZE                       equ 0001h
PWM6CON_MODE0_LENGTH                     equ 0001h
PWM6CON_MODE0_MASK                       equ 0004h
PWM6CON_MODE1_POSN                       equ 0003h
PWM6CON_MODE1_POSITION                   equ 0003h
PWM6CON_MODE1_SIZE                       equ 0001h
PWM6CON_MODE1_LENGTH                     equ 0001h
PWM6CON_MODE1_MASK                       equ 0008h

// Register: PWM6INTE
#define PWM6INTE PWM6INTE
PWM6INTE                                 equ 0DACh
// bitfield definitions
PWM6INTE_PRIE_POSN                       equ 0000h
PWM6INTE_PRIE_POSITION                   equ 0000h
PWM6INTE_PRIE_SIZE                       equ 0001h
PWM6INTE_PRIE_LENGTH                     equ 0001h
PWM6INTE_PRIE_MASK                       equ 0001h
PWM6INTE_DCIE_POSN                       equ 0001h
PWM6INTE_DCIE_POSITION                   equ 0001h
PWM6INTE_DCIE_SIZE                       equ 0001h
PWM6INTE_DCIE_LENGTH                     equ 0001h
PWM6INTE_DCIE_MASK                       equ 0002h
PWM6INTE_PHIE_POSN                       equ 0002h
PWM6INTE_PHIE_POSITION                   equ 0002h
PWM6INTE_PHIE_SIZE                       equ 0001h
PWM6INTE_PHIE_LENGTH                     equ 0001h
PWM6INTE_PHIE_MASK                       equ 0004h
PWM6INTE_OFIE_POSN                       equ 0003h
PWM6INTE_OFIE_POSITION                   equ 0003h
PWM6INTE_OFIE_SIZE                       equ 0001h
PWM6INTE_OFIE_LENGTH                     equ 0001h
PWM6INTE_OFIE_MASK                       equ 0008h
PWM6INTE_PWM6PRIE_POSN                   equ 0000h
PWM6INTE_PWM6PRIE_POSITION               equ 0000h
PWM6INTE_PWM6PRIE_SIZE                   equ 0001h
PWM6INTE_PWM6PRIE_LENGTH                 equ 0001h
PWM6INTE_PWM6PRIE_MASK                   equ 0001h
PWM6INTE_PWM6DCIE_POSN                   equ 0001h
PWM6INTE_PWM6DCIE_POSITION               equ 0001h
PWM6INTE_PWM6DCIE_SIZE                   equ 0001h
PWM6INTE_PWM6DCIE_LENGTH                 equ 0001h
PWM6INTE_PWM6DCIE_MASK                   equ 0002h
PWM6INTE_PWM6PHIE_POSN                   equ 0002h
PWM6INTE_PWM6PHIE_POSITION               equ 0002h
PWM6INTE_PWM6PHIE_SIZE                   equ 0001h
PWM6INTE_PWM6PHIE_LENGTH                 equ 0001h
PWM6INTE_PWM6PHIE_MASK                   equ 0004h
PWM6INTE_PWM6OFIE_POSN                   equ 0003h
PWM6INTE_PWM6OFIE_POSITION               equ 0003h
PWM6INTE_PWM6OFIE_SIZE                   equ 0001h
PWM6INTE_PWM6OFIE_LENGTH                 equ 0001h
PWM6INTE_PWM6OFIE_MASK                   equ 0008h

// Register: PWM6INTF
#define PWM6INTF PWM6INTF
PWM6INTF                                 equ 0DADh
// bitfield definitions
PWM6INTF_PRIF_POSN                       equ 0000h
PWM6INTF_PRIF_POSITION                   equ 0000h
PWM6INTF_PRIF_SIZE                       equ 0001h
PWM6INTF_PRIF_LENGTH                     equ 0001h
PWM6INTF_PRIF_MASK                       equ 0001h
PWM6INTF_DCIF_POSN                       equ 0001h
PWM6INTF_DCIF_POSITION                   equ 0001h
PWM6INTF_DCIF_SIZE                       equ 0001h
PWM6INTF_DCIF_LENGTH                     equ 0001h
PWM6INTF_DCIF_MASK                       equ 0002h
PWM6INTF_PHIF_POSN                       equ 0002h
PWM6INTF_PHIF_POSITION                   equ 0002h
PWM6INTF_PHIF_SIZE                       equ 0001h
PWM6INTF_PHIF_LENGTH                     equ 0001h
PWM6INTF_PHIF_MASK                       equ 0004h
PWM6INTF_OFIF_POSN                       equ 0003h
PWM6INTF_OFIF_POSITION                   equ 0003h
PWM6INTF_OFIF_SIZE                       equ 0001h
PWM6INTF_OFIF_LENGTH                     equ 0001h
PWM6INTF_OFIF_MASK                       equ 0008h
PWM6INTF_PWM6PRIF_POSN                   equ 0000h
PWM6INTF_PWM6PRIF_POSITION               equ 0000h
PWM6INTF_PWM6PRIF_SIZE                   equ 0001h
PWM6INTF_PWM6PRIF_LENGTH                 equ 0001h
PWM6INTF_PWM6PRIF_MASK                   equ 0001h
PWM6INTF_PWM6DCIF_POSN                   equ 0001h
PWM6INTF_PWM6DCIF_POSITION               equ 0001h
PWM6INTF_PWM6DCIF_SIZE                   equ 0001h
PWM6INTF_PWM6DCIF_LENGTH                 equ 0001h
PWM6INTF_PWM6DCIF_MASK                   equ 0002h
PWM6INTF_PWM6PHIF_POSN                   equ 0002h
PWM6INTF_PWM6PHIF_POSITION               equ 0002h
PWM6INTF_PWM6PHIF_SIZE                   equ 0001h
PWM6INTF_PWM6PHIF_LENGTH                 equ 0001h
PWM6INTF_PWM6PHIF_MASK                   equ 0004h
PWM6INTF_PWM6OFIF_POSN                   equ 0003h
PWM6INTF_PWM6OFIF_POSITION               equ 0003h
PWM6INTF_PWM6OFIF_SIZE                   equ 0001h
PWM6INTF_PWM6OFIF_LENGTH                 equ 0001h
PWM6INTF_PWM6OFIF_MASK                   equ 0008h

// Register: PWM6CLKCON
#define PWM6CLKCON PWM6CLKCON
PWM6CLKCON                               equ 0DAEh
// bitfield definitions
PWM6CLKCON_CS_POSN                       equ 0000h
PWM6CLKCON_CS_POSITION                   equ 0000h
PWM6CLKCON_CS_SIZE                       equ 0002h
PWM6CLKCON_CS_LENGTH                     equ 0002h
PWM6CLKCON_CS_MASK                       equ 0003h
PWM6CLKCON_PS_POSN                       equ 0004h
PWM6CLKCON_PS_POSITION                   equ 0004h
PWM6CLKCON_PS_SIZE                       equ 0003h
PWM6CLKCON_PS_LENGTH                     equ 0003h
PWM6CLKCON_PS_MASK                       equ 0070h
PWM6CLKCON_PWM6CS0_POSN                  equ 0000h
PWM6CLKCON_PWM6CS0_POSITION              equ 0000h
PWM6CLKCON_PWM6CS0_SIZE                  equ 0001h
PWM6CLKCON_PWM6CS0_LENGTH                equ 0001h
PWM6CLKCON_PWM6CS0_MASK                  equ 0001h
PWM6CLKCON_PWM6CS1_POSN                  equ 0001h
PWM6CLKCON_PWM6CS1_POSITION              equ 0001h
PWM6CLKCON_PWM6CS1_SIZE                  equ 0001h
PWM6CLKCON_PWM6CS1_LENGTH                equ 0001h
PWM6CLKCON_PWM6CS1_MASK                  equ 0002h
PWM6CLKCON_PWM6CS2_POSN                  equ 0002h
PWM6CLKCON_PWM6CS2_POSITION              equ 0002h
PWM6CLKCON_PWM6CS2_SIZE                  equ 0001h
PWM6CLKCON_PWM6CS2_LENGTH                equ 0001h
PWM6CLKCON_PWM6CS2_MASK                  equ 0004h
PWM6CLKCON_PWM6PS0_POSN                  equ 0004h
PWM6CLKCON_PWM6PS0_POSITION              equ 0004h
PWM6CLKCON_PWM6PS0_SIZE                  equ 0001h
PWM6CLKCON_PWM6PS0_LENGTH                equ 0001h
PWM6CLKCON_PWM6PS0_MASK                  equ 0010h
PWM6CLKCON_PWM6PS1_POSN                  equ 0005h
PWM6CLKCON_PWM6PS1_POSITION              equ 0005h
PWM6CLKCON_PWM6PS1_SIZE                  equ 0001h
PWM6CLKCON_PWM6PS1_LENGTH                equ 0001h
PWM6CLKCON_PWM6PS1_MASK                  equ 0020h
PWM6CLKCON_PWM6PS2_POSN                  equ 0006h
PWM6CLKCON_PWM6PS2_POSITION              equ 0006h
PWM6CLKCON_PWM6PS2_SIZE                  equ 0001h
PWM6CLKCON_PWM6PS2_LENGTH                equ 0001h
PWM6CLKCON_PWM6PS2_MASK                  equ 0040h
PWM6CLKCON_PWM6CS_POSN                   equ 0000h
PWM6CLKCON_PWM6CS_POSITION               equ 0000h
PWM6CLKCON_PWM6CS_SIZE                   equ 0003h
PWM6CLKCON_PWM6CS_LENGTH                 equ 0003h
PWM6CLKCON_PWM6CS_MASK                   equ 0007h
PWM6CLKCON_PWM6PS_POSN                   equ 0004h
PWM6CLKCON_PWM6PS_POSITION               equ 0004h
PWM6CLKCON_PWM6PS_SIZE                   equ 0003h
PWM6CLKCON_PWM6PS_LENGTH                 equ 0003h
PWM6CLKCON_PWM6PS_MASK                   equ 0070h
PWM6CLKCON_CS0_POSN                      equ 0000h
PWM6CLKCON_CS0_POSITION                  equ 0000h
PWM6CLKCON_CS0_SIZE                      equ 0001h
PWM6CLKCON_CS0_LENGTH                    equ 0001h
PWM6CLKCON_CS0_MASK                      equ 0001h
PWM6CLKCON_CS1_POSN                      equ 0001h
PWM6CLKCON_CS1_POSITION                  equ 0001h
PWM6CLKCON_CS1_SIZE                      equ 0001h
PWM6CLKCON_CS1_LENGTH                    equ 0001h
PWM6CLKCON_CS1_MASK                      equ 0002h
PWM6CLKCON_CS2_POSN                      equ 0002h
PWM6CLKCON_CS2_POSITION                  equ 0002h
PWM6CLKCON_CS2_SIZE                      equ 0001h
PWM6CLKCON_CS2_LENGTH                    equ 0001h
PWM6CLKCON_CS2_MASK                      equ 0004h
PWM6CLKCON_PS0_POSN                      equ 0004h
PWM6CLKCON_PS0_POSITION                  equ 0004h
PWM6CLKCON_PS0_SIZE                      equ 0001h
PWM6CLKCON_PS0_LENGTH                    equ 0001h
PWM6CLKCON_PS0_MASK                      equ 0010h
PWM6CLKCON_PS1_POSN                      equ 0005h
PWM6CLKCON_PS1_POSITION                  equ 0005h
PWM6CLKCON_PS1_SIZE                      equ 0001h
PWM6CLKCON_PS1_LENGTH                    equ 0001h
PWM6CLKCON_PS1_MASK                      equ 0020h
PWM6CLKCON_PS2_POSN                      equ 0006h
PWM6CLKCON_PS2_POSITION                  equ 0006h
PWM6CLKCON_PS2_SIZE                      equ 0001h
PWM6CLKCON_PS2_LENGTH                    equ 0001h
PWM6CLKCON_PS2_MASK                      equ 0040h

// Register: PWM6LDCON
#define PWM6LDCON PWM6LDCON
PWM6LDCON                                equ 0DAFh
// bitfield definitions
PWM6LDCON_LDS_POSN                       equ 0000h
PWM6LDCON_LDS_POSITION                   equ 0000h
PWM6LDCON_LDS_SIZE                       equ 0002h
PWM6LDCON_LDS_LENGTH                     equ 0002h
PWM6LDCON_LDS_MASK                       equ 0003h
PWM6LDCON_LDT_POSN                       equ 0006h
PWM6LDCON_LDT_POSITION                   equ 0006h
PWM6LDCON_LDT_SIZE                       equ 0001h
PWM6LDCON_LDT_LENGTH                     equ 0001h
PWM6LDCON_LDT_MASK                       equ 0040h
PWM6LDCON_LDA_POSN                       equ 0007h
PWM6LDCON_LDA_POSITION                   equ 0007h
PWM6LDCON_LDA_SIZE                       equ 0001h
PWM6LDCON_LDA_LENGTH                     equ 0001h
PWM6LDCON_LDA_MASK                       equ 0080h
PWM6LDCON_PWM6LDS0_POSN                  equ 0000h
PWM6LDCON_PWM6LDS0_POSITION              equ 0000h
PWM6LDCON_PWM6LDS0_SIZE                  equ 0001h
PWM6LDCON_PWM6LDS0_LENGTH                equ 0001h
PWM6LDCON_PWM6LDS0_MASK                  equ 0001h
PWM6LDCON_PWM6LDS_POSN                   equ 0000h
PWM6LDCON_PWM6LDS_POSITION               equ 0000h
PWM6LDCON_PWM6LDS_SIZE                   equ 0002h
PWM6LDCON_PWM6LDS_LENGTH                 equ 0002h
PWM6LDCON_PWM6LDS_MASK                   equ 0003h
PWM6LDCON_PWM6LDM_POSN                   equ 0006h
PWM6LDCON_PWM6LDM_POSITION               equ 0006h
PWM6LDCON_PWM6LDM_SIZE                   equ 0001h
PWM6LDCON_PWM6LDM_LENGTH                 equ 0001h
PWM6LDCON_PWM6LDM_MASK                   equ 0040h
PWM6LDCON_PWM6LD_POSN                    equ 0007h
PWM6LDCON_PWM6LD_POSITION                equ 0007h
PWM6LDCON_PWM6LD_SIZE                    equ 0001h
PWM6LDCON_PWM6LD_LENGTH                  equ 0001h
PWM6LDCON_PWM6LD_MASK                    equ 0080h
PWM6LDCON_LDS0_POSN                      equ 0000h
PWM6LDCON_LDS0_POSITION                  equ 0000h
PWM6LDCON_LDS0_SIZE                      equ 0001h
PWM6LDCON_LDS0_LENGTH                    equ 0001h
PWM6LDCON_LDS0_MASK                      equ 0001h

// Register: PWM6OFCON
#define PWM6OFCON PWM6OFCON
PWM6OFCON                                equ 0DB0h
// bitfield definitions
PWM6OFCON_OFS_POSN                       equ 0000h
PWM6OFCON_OFS_POSITION                   equ 0000h
PWM6OFCON_OFS_SIZE                       equ 0002h
PWM6OFCON_OFS_LENGTH                     equ 0002h
PWM6OFCON_OFS_MASK                       equ 0003h
PWM6OFCON_OFO_POSN                       equ 0004h
PWM6OFCON_OFO_POSITION                   equ 0004h
PWM6OFCON_OFO_SIZE                       equ 0001h
PWM6OFCON_OFO_LENGTH                     equ 0001h
PWM6OFCON_OFO_MASK                       equ 0010h
PWM6OFCON_OFM_POSN                       equ 0005h
PWM6OFCON_OFM_POSITION                   equ 0005h
PWM6OFCON_OFM_SIZE                       equ 0002h
PWM6OFCON_OFM_LENGTH                     equ 0002h
PWM6OFCON_OFM_MASK                       equ 0060h
PWM6OFCON_PWM6OFS0_POSN                  equ 0000h
PWM6OFCON_PWM6OFS0_POSITION              equ 0000h
PWM6OFCON_PWM6OFS0_SIZE                  equ 0001h
PWM6OFCON_PWM6OFS0_LENGTH                equ 0001h
PWM6OFCON_PWM6OFS0_MASK                  equ 0001h
PWM6OFCON_PWM6OFM0_POSN                  equ 0005h
PWM6OFCON_PWM6OFM0_POSITION              equ 0005h
PWM6OFCON_PWM6OFM0_SIZE                  equ 0001h
PWM6OFCON_PWM6OFM0_LENGTH                equ 0001h
PWM6OFCON_PWM6OFM0_MASK                  equ 0020h
PWM6OFCON_PWM6OFM1_POSN                  equ 0006h
PWM6OFCON_PWM6OFM1_POSITION              equ 0006h
PWM6OFCON_PWM6OFM1_SIZE                  equ 0001h
PWM6OFCON_PWM6OFM1_LENGTH                equ 0001h
PWM6OFCON_PWM6OFM1_MASK                  equ 0040h
PWM6OFCON_PWM6OFS_POSN                   equ 0000h
PWM6OFCON_PWM6OFS_POSITION               equ 0000h
PWM6OFCON_PWM6OFS_SIZE                   equ 0002h
PWM6OFCON_PWM6OFS_LENGTH                 equ 0002h
PWM6OFCON_PWM6OFS_MASK                   equ 0003h
PWM6OFCON_PWM6OFMC_POSN                  equ 0004h
PWM6OFCON_PWM6OFMC_POSITION              equ 0004h
PWM6OFCON_PWM6OFMC_SIZE                  equ 0001h
PWM6OFCON_PWM6OFMC_LENGTH                equ 0001h
PWM6OFCON_PWM6OFMC_MASK                  equ 0010h
PWM6OFCON_PWM6OFM_POSN                   equ 0005h
PWM6OFCON_PWM6OFM_POSITION               equ 0005h
PWM6OFCON_PWM6OFM_SIZE                   equ 0002h
PWM6OFCON_PWM6OFM_LENGTH                 equ 0002h
PWM6OFCON_PWM6OFM_MASK                   equ 0060h
PWM6OFCON_OFS0_POSN                      equ 0000h
PWM6OFCON_OFS0_POSITION                  equ 0000h
PWM6OFCON_OFS0_SIZE                      equ 0001h
PWM6OFCON_OFS0_LENGTH                    equ 0001h
PWM6OFCON_OFS0_MASK                      equ 0001h
PWM6OFCON_OFM0_POSN                      equ 0005h
PWM6OFCON_OFM0_POSITION                  equ 0005h
PWM6OFCON_OFM0_SIZE                      equ 0001h
PWM6OFCON_OFM0_LENGTH                    equ 0001h
PWM6OFCON_OFM0_MASK                      equ 0020h
PWM6OFCON_OFM1_POSN                      equ 0006h
PWM6OFCON_OFM1_POSITION                  equ 0006h
PWM6OFCON_OFM1_SIZE                      equ 0001h
PWM6OFCON_OFM1_LENGTH                    equ 0001h
PWM6OFCON_OFM1_MASK                      equ 0040h

// Register: PPSLOCK
#define PPSLOCK PPSLOCK
PPSLOCK                                  equ 0E0Fh
// bitfield definitions
PPSLOCK_PPSLOCKED_POSN                   equ 0000h
PPSLOCK_PPSLOCKED_POSITION               equ 0000h
PPSLOCK_PPSLOCKED_SIZE                   equ 0001h
PPSLOCK_PPSLOCKED_LENGTH                 equ 0001h
PPSLOCK_PPSLOCKED_MASK                   equ 0001h

// Register: INTPPS
#define INTPPS INTPPS
INTPPS                                   equ 0E10h
// bitfield definitions
INTPPS_INTPPS_POSN                       equ 0000h
INTPPS_INTPPS_POSITION                   equ 0000h
INTPPS_INTPPS_SIZE                       equ 0005h
INTPPS_INTPPS_LENGTH                     equ 0005h
INTPPS_INTPPS_MASK                       equ 001Fh

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
T0CKIPPS                                 equ 0E11h
// bitfield definitions
T0CKIPPS_T0CKIPPS_POSN                   equ 0000h
T0CKIPPS_T0CKIPPS_POSITION               equ 0000h
T0CKIPPS_T0CKIPPS_SIZE                   equ 0005h
T0CKIPPS_T0CKIPPS_LENGTH                 equ 0005h
T0CKIPPS_T0CKIPPS_MASK                   equ 001Fh

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
T1CKIPPS                                 equ 0E12h
// bitfield definitions
T1CKIPPS_T1CKIPPS_POSN                   equ 0000h
T1CKIPPS_T1CKIPPS_POSITION               equ 0000h
T1CKIPPS_T1CKIPPS_SIZE                   equ 0005h
T1CKIPPS_T1CKIPPS_LENGTH                 equ 0005h
T1CKIPPS_T1CKIPPS_MASK                   equ 001Fh

// Register: T1GPPS
#define T1GPPS T1GPPS
T1GPPS                                   equ 0E13h
// bitfield definitions
T1GPPS_T1GPPS_POSN                       equ 0000h
T1GPPS_T1GPPS_POSITION                   equ 0000h
T1GPPS_T1GPPS_SIZE                       equ 0005h
T1GPPS_T1GPPS_LENGTH                     equ 0005h
T1GPPS_T1GPPS_MASK                       equ 001Fh

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
CCP1PPS                                  equ 0E14h
// bitfield definitions
CCP1PPS_CCP1PPS_POSN                     equ 0000h
CCP1PPS_CCP1PPS_POSITION                 equ 0000h
CCP1PPS_CCP1PPS_SIZE                     equ 0005h
CCP1PPS_CCP1PPS_LENGTH                   equ 0005h
CCP1PPS_CCP1PPS_MASK                     equ 001Fh

// Register: CCP2PPS
#define CCP2PPS CCP2PPS
CCP2PPS                                  equ 0E15h
// bitfield definitions
CCP2PPS_CCP2PPS_POSN                     equ 0000h
CCP2PPS_CCP2PPS_POSITION                 equ 0000h
CCP2PPS_CCP2PPS_SIZE                     equ 0005h
CCP2PPS_CCP2PPS_LENGTH                   equ 0005h
CCP2PPS_CCP2PPS_MASK                     equ 001Fh

// Register: COG1INPPS
#define COG1INPPS COG1INPPS
COG1INPPS                                equ 0E16h
// bitfield definitions
COG1INPPS_COG1INPPS_POSN                 equ 0000h
COG1INPPS_COG1INPPS_POSITION             equ 0000h
COG1INPPS_COG1INPPS_SIZE                 equ 0005h
COG1INPPS_COG1INPPS_LENGTH               equ 0005h
COG1INPPS_COG1INPPS_MASK                 equ 001Fh

// Register: COG2INPPS
#define COG2INPPS COG2INPPS
COG2INPPS                                equ 0E17h
// bitfield definitions
COG2INPPS_COG2INPPS_POSN                 equ 0000h
COG2INPPS_COG2INPPS_POSITION             equ 0000h
COG2INPPS_COG2INPPS_SIZE                 equ 0005h
COG2INPPS_COG2INPPS_LENGTH               equ 0005h
COG2INPPS_COG2INPPS_MASK                 equ 001Fh

// Register: T2INPPS
#define T2INPPS T2INPPS
T2INPPS                                  equ 0E19h
// bitfield definitions
T2INPPS_T2INPPS_POSN                     equ 0000h
T2INPPS_T2INPPS_POSITION                 equ 0000h
T2INPPS_T2INPPS_SIZE                     equ 0005h
T2INPPS_T2INPPS_LENGTH                   equ 0005h
T2INPPS_T2INPPS_MASK                     equ 001Fh

// Register: T3CKIPPS
#define T3CKIPPS T3CKIPPS
T3CKIPPS                                 equ 0E1Ah
// bitfield definitions
T3CKIPPS_T3CKIPPS_POSN                   equ 0000h
T3CKIPPS_T3CKIPPS_POSITION               equ 0000h
T3CKIPPS_T3CKIPPS_SIZE                   equ 0005h
T3CKIPPS_T3CKIPPS_LENGTH                 equ 0005h
T3CKIPPS_T3CKIPPS_MASK                   equ 001Fh

// Register: T3GPPS
#define T3GPPS T3GPPS
T3GPPS                                   equ 0E1Bh
// bitfield definitions
T3GPPS_T3GPPS_POSN                       equ 0000h
T3GPPS_T3GPPS_POSITION                   equ 0000h
T3GPPS_T3GPPS_SIZE                       equ 0005h
T3GPPS_T3GPPS_LENGTH                     equ 0005h
T3GPPS_T3GPPS_MASK                       equ 001Fh

// Register: T4INPPS
#define T4INPPS T4INPPS
T4INPPS                                  equ 0E1Ch
// bitfield definitions
T4INPPS_T4INPPS_POSN                     equ 0000h
T4INPPS_T4INPPS_POSITION                 equ 0000h
T4INPPS_T4INPPS_SIZE                     equ 0005h
T4INPPS_T4INPPS_LENGTH                   equ 0005h
T4INPPS_T4INPPS_MASK                     equ 001Fh

// Register: T5CKIPPS
#define T5CKIPPS T5CKIPPS
T5CKIPPS                                 equ 0E1Dh
// bitfield definitions
T5CKIPPS_T5CKIPPS_POSN                   equ 0000h
T5CKIPPS_T5CKIPPS_POSITION               equ 0000h
T5CKIPPS_T5CKIPPS_SIZE                   equ 0005h
T5CKIPPS_T5CKIPPS_LENGTH                 equ 0005h
T5CKIPPS_T5CKIPPS_MASK                   equ 001Fh

// Register: T5GPPS
#define T5GPPS T5GPPS
T5GPPS                                   equ 0E1Eh
// bitfield definitions
T5GPPS_T5GPPS_POSN                       equ 0000h
T5GPPS_T5GPPS_POSITION                   equ 0000h
T5GPPS_T5GPPS_SIZE                       equ 0005h
T5GPPS_T5GPPS_LENGTH                     equ 0005h
T5GPPS_T5GPPS_MASK                       equ 001Fh

// Register: T6INPPS
#define T6INPPS T6INPPS
T6INPPS                                  equ 0E1Fh
// bitfield definitions
T6INPPS_T6INPPS_POSN                     equ 0000h
T6INPPS_T6INPPS_POSITION                 equ 0000h
T6INPPS_T6INPPS_SIZE                     equ 0005h
T6INPPS_T6INPPS_LENGTH                   equ 0005h
T6INPPS_T6INPPS_MASK                     equ 001Fh

// Register: SSPCLKPPS
#define SSPCLKPPS SSPCLKPPS
SSPCLKPPS                                equ 0E20h
// bitfield definitions
SSPCLKPPS_SSPCLKPPS_POSN                 equ 0000h
SSPCLKPPS_SSPCLKPPS_POSITION             equ 0000h
SSPCLKPPS_SSPCLKPPS_SIZE                 equ 0005h
SSPCLKPPS_SSPCLKPPS_LENGTH               equ 0005h
SSPCLKPPS_SSPCLKPPS_MASK                 equ 001Fh

// Register: SSPDATPPS
#define SSPDATPPS SSPDATPPS
SSPDATPPS                                equ 0E21h
// bitfield definitions
SSPDATPPS_SSPDATPPS_POSN                 equ 0000h
SSPDATPPS_SSPDATPPS_POSITION             equ 0000h
SSPDATPPS_SSPDATPPS_SIZE                 equ 0005h
SSPDATPPS_SSPDATPPS_LENGTH               equ 0005h
SSPDATPPS_SSPDATPPS_MASK                 equ 001Fh

// Register: SSPSSPPS
#define SSPSSPPS SSPSSPPS
SSPSSPPS                                 equ 0E22h
// bitfield definitions
SSPSSPPS_SSPSSPPS_POSN                   equ 0000h
SSPSSPPS_SSPSSPPS_POSITION               equ 0000h
SSPSSPPS_SSPSSPPS_SIZE                   equ 0005h
SSPSSPPS_SSPSSPPS_LENGTH                 equ 0005h
SSPSSPPS_SSPSSPPS_MASK                   equ 001Fh

// Register: RXPPS
#define RXPPS RXPPS
RXPPS                                    equ 0E24h
// bitfield definitions
RXPPS_RXPPS_POSN                         equ 0000h
RXPPS_RXPPS_POSITION                     equ 0000h
RXPPS_RXPPS_SIZE                         equ 0005h
RXPPS_RXPPS_LENGTH                       equ 0005h
RXPPS_RXPPS_MASK                         equ 001Fh

// Register: CKPPS
#define CKPPS CKPPS
CKPPS                                    equ 0E25h
// bitfield definitions
CKPPS_CKPPS_POSN                         equ 0000h
CKPPS_CKPPS_POSITION                     equ 0000h
CKPPS_CKPPS_SIZE                         equ 0005h
CKPPS_CKPPS_LENGTH                       equ 0005h
CKPPS_CKPPS_MASK                         equ 001Fh

// Register: CLCIN0PPS
#define CLCIN0PPS CLCIN0PPS
CLCIN0PPS                                equ 0E28h
// bitfield definitions
CLCIN0PPS_CLCIN0PPS_POSN                 equ 0000h
CLCIN0PPS_CLCIN0PPS_POSITION             equ 0000h
CLCIN0PPS_CLCIN0PPS_SIZE                 equ 0005h
CLCIN0PPS_CLCIN0PPS_LENGTH               equ 0005h
CLCIN0PPS_CLCIN0PPS_MASK                 equ 001Fh

// Register: CLCIN1PPS
#define CLCIN1PPS CLCIN1PPS
CLCIN1PPS                                equ 0E29h
// bitfield definitions
CLCIN1PPS_CLCIN1PPS_POSN                 equ 0000h
CLCIN1PPS_CLCIN1PPS_POSITION             equ 0000h
CLCIN1PPS_CLCIN1PPS_SIZE                 equ 0005h
CLCIN1PPS_CLCIN1PPS_LENGTH               equ 0005h
CLCIN1PPS_CLCIN1PPS_MASK                 equ 001Fh

// Register: CLCIN2PPS
#define CLCIN2PPS CLCIN2PPS
CLCIN2PPS                                equ 0E2Ah
// bitfield definitions
CLCIN2PPS_CLCIN2PPS_POSN                 equ 0000h
CLCIN2PPS_CLCIN2PPS_POSITION             equ 0000h
CLCIN2PPS_CLCIN2PPS_SIZE                 equ 0005h
CLCIN2PPS_CLCIN2PPS_LENGTH               equ 0005h
CLCIN2PPS_CLCIN2PPS_MASK                 equ 001Fh

// Register: CLCIN3PPS
#define CLCIN3PPS CLCIN3PPS
CLCIN3PPS                                equ 0E2Bh
// bitfield definitions
CLCIN3PPS_CLCIN3PPS_POSN                 equ 0000h
CLCIN3PPS_CLCIN3PPS_POSITION             equ 0000h
CLCIN3PPS_CLCIN3PPS_SIZE                 equ 0005h
CLCIN3PPS_CLCIN3PPS_LENGTH               equ 0005h
CLCIN3PPS_CLCIN3PPS_MASK                 equ 001Fh

// Register: PRG1RPPS
#define PRG1RPPS PRG1RPPS
PRG1RPPS                                 equ 0E2Ch
// bitfield definitions
PRG1RPPS_PRG1RPPS_POSN                   equ 0000h
PRG1RPPS_PRG1RPPS_POSITION               equ 0000h
PRG1RPPS_PRG1RPPS_SIZE                   equ 0005h
PRG1RPPS_PRG1RPPS_LENGTH                 equ 0005h
PRG1RPPS_PRG1RPPS_MASK                   equ 001Fh

// Register: PRG1FPPS
#define PRG1FPPS PRG1FPPS
PRG1FPPS                                 equ 0E2Dh
// bitfield definitions
PRG1FPPS_PRG1FPPS_POSN                   equ 0000h
PRG1FPPS_PRG1FPPS_POSITION               equ 0000h
PRG1FPPS_PRG1FPPS_SIZE                   equ 0005h
PRG1FPPS_PRG1FPPS_LENGTH                 equ 0005h
PRG1FPPS_PRG1FPPS_MASK                   equ 001Fh

// Register: PRG2RPPS
#define PRG2RPPS PRG2RPPS
PRG2RPPS                                 equ 0E2Eh
// bitfield definitions
PRG2RPPS_PRG2RPPS_POSN                   equ 0000h
PRG2RPPS_PRG2RPPS_POSITION               equ 0000h
PRG2RPPS_PRG2RPPS_SIZE                   equ 0005h
PRG2RPPS_PRG2RPPS_LENGTH                 equ 0005h
PRG2RPPS_PRG2RPPS_MASK                   equ 001Fh

// Register: PRG2FPPS
#define PRG2FPPS PRG2FPPS
PRG2FPPS                                 equ 0E2Fh
// bitfield definitions
PRG2FPPS_PRG2FPPS_POSN                   equ 0000h
PRG2FPPS_PRG2FPPS_POSITION               equ 0000h
PRG2FPPS_PRG2FPPS_SIZE                   equ 0005h
PRG2FPPS_PRG2FPPS_LENGTH                 equ 0005h
PRG2FPPS_PRG2FPPS_MASK                   equ 001Fh

// Register: MD1CHPPS
#define MD1CHPPS MD1CHPPS
MD1CHPPS                                 equ 0E30h
// bitfield definitions
MD1CHPPS_MD1CHPPS_POSN                   equ 0000h
MD1CHPPS_MD1CHPPS_POSITION               equ 0000h
MD1CHPPS_MD1CHPPS_SIZE                   equ 0005h
MD1CHPPS_MD1CHPPS_LENGTH                 equ 0005h
MD1CHPPS_MD1CHPPS_MASK                   equ 001Fh

// Register: MD1CLPPS
#define MD1CLPPS MD1CLPPS
MD1CLPPS                                 equ 0E31h
// bitfield definitions
MD1CLPPS_MD1CLPPS_POSN                   equ 0000h
MD1CLPPS_MD1CLPPS_POSITION               equ 0000h
MD1CLPPS_MD1CLPPS_SIZE                   equ 0005h
MD1CLPPS_MD1CLPPS_LENGTH                 equ 0005h
MD1CLPPS_MD1CLPPS_MASK                   equ 001Fh

// Register: MD1MODPPS
#define MD1MODPPS MD1MODPPS
MD1MODPPS                                equ 0E32h
// bitfield definitions
MD1MODPPS_MD1MODPPS_POSN                 equ 0000h
MD1MODPPS_MD1MODPPS_POSITION             equ 0000h
MD1MODPPS_MD1MODPPS_SIZE                 equ 0005h
MD1MODPPS_MD1MODPPS_LENGTH               equ 0005h
MD1MODPPS_MD1MODPPS_MASK                 equ 001Fh

// Register: MD2CHPPS
#define MD2CHPPS MD2CHPPS
MD2CHPPS                                 equ 0E33h
// bitfield definitions
MD2CHPPS_MD2CHPPS_POSN                   equ 0000h
MD2CHPPS_MD2CHPPS_POSITION               equ 0000h
MD2CHPPS_MD2CHPPS_SIZE                   equ 0005h
MD2CHPPS_MD2CHPPS_LENGTH                 equ 0005h
MD2CHPPS_MD2CHPPS_MASK                   equ 001Fh

// Register: MD2CLPPS
#define MD2CLPPS MD2CLPPS
MD2CLPPS                                 equ 0E34h
// bitfield definitions
MD2CLPPS_MD2CLPPS_POSN                   equ 0000h
MD2CLPPS_MD2CLPPS_POSITION               equ 0000h
MD2CLPPS_MD2CLPPS_SIZE                   equ 0005h
MD2CLPPS_MD2CLPPS_LENGTH                 equ 0005h
MD2CLPPS_MD2CLPPS_MASK                   equ 001Fh

// Register: MD2MODPPS
#define MD2MODPPS MD2MODPPS
MD2MODPPS                                equ 0E35h
// bitfield definitions
MD2MODPPS_MD2MODPPS_POSN                 equ 0000h
MD2MODPPS_MD2MODPPS_POSITION             equ 0000h
MD2MODPPS_MD2MODPPS_SIZE                 equ 0005h
MD2MODPPS_MD2MODPPS_LENGTH               equ 0005h
MD2MODPPS_MD2MODPPS_MASK                 equ 001Fh

// Register: RA0PPS
#define RA0PPS RA0PPS
RA0PPS                                   equ 0E90h
// bitfield definitions
RA0PPS_RA0PPS_POSN                       equ 0000h
RA0PPS_RA0PPS_POSITION                   equ 0000h
RA0PPS_RA0PPS_SIZE                       equ 0005h
RA0PPS_RA0PPS_LENGTH                     equ 0005h
RA0PPS_RA0PPS_MASK                       equ 001Fh

// Register: RA1PPS
#define RA1PPS RA1PPS
RA1PPS                                   equ 0E91h
// bitfield definitions
RA1PPS_RA1PPS_POSN                       equ 0000h
RA1PPS_RA1PPS_POSITION                   equ 0000h
RA1PPS_RA1PPS_SIZE                       equ 0005h
RA1PPS_RA1PPS_LENGTH                     equ 0005h
RA1PPS_RA1PPS_MASK                       equ 001Fh

// Register: RA2PPS
#define RA2PPS RA2PPS
RA2PPS                                   equ 0E92h
// bitfield definitions
RA2PPS_RA2PPS_POSN                       equ 0000h
RA2PPS_RA2PPS_POSITION                   equ 0000h
RA2PPS_RA2PPS_SIZE                       equ 0005h
RA2PPS_RA2PPS_LENGTH                     equ 0005h
RA2PPS_RA2PPS_MASK                       equ 001Fh

// Register: RA4PPS
#define RA4PPS RA4PPS
RA4PPS                                   equ 0E94h
// bitfield definitions
RA4PPS_RA4PPS_POSN                       equ 0000h
RA4PPS_RA4PPS_POSITION                   equ 0000h
RA4PPS_RA4PPS_SIZE                       equ 0005h
RA4PPS_RA4PPS_LENGTH                     equ 0005h
RA4PPS_RA4PPS_MASK                       equ 001Fh

// Register: RA5PPS
#define RA5PPS RA5PPS
RA5PPS                                   equ 0E95h
// bitfield definitions
RA5PPS_RA5PPS_POSN                       equ 0000h
RA5PPS_RA5PPS_POSITION                   equ 0000h
RA5PPS_RA5PPS_SIZE                       equ 0005h
RA5PPS_RA5PPS_LENGTH                     equ 0005h
RA5PPS_RA5PPS_MASK                       equ 001Fh

// Register: RB4PPS
#define RB4PPS RB4PPS
RB4PPS                                   equ 0E9Ch
// bitfield definitions
RB4PPS_RB4PPS_POSN                       equ 0000h
RB4PPS_RB4PPS_POSITION                   equ 0000h
RB4PPS_RB4PPS_SIZE                       equ 0005h
RB4PPS_RB4PPS_LENGTH                     equ 0005h
RB4PPS_RB4PPS_MASK                       equ 001Fh

// Register: RB5PPS
#define RB5PPS RB5PPS
RB5PPS                                   equ 0E9Dh
// bitfield definitions
RB5PPS_RB5PPS_POSN                       equ 0000h
RB5PPS_RB5PPS_POSITION                   equ 0000h
RB5PPS_RB5PPS_SIZE                       equ 0005h
RB5PPS_RB5PPS_LENGTH                     equ 0005h
RB5PPS_RB5PPS_MASK                       equ 001Fh

// Register: RB6PPS
#define RB6PPS RB6PPS
RB6PPS                                   equ 0E9Eh
// bitfield definitions
RB6PPS_RB6PPS_POSN                       equ 0000h
RB6PPS_RB6PPS_POSITION                   equ 0000h
RB6PPS_RB6PPS_SIZE                       equ 0005h
RB6PPS_RB6PPS_LENGTH                     equ 0005h
RB6PPS_RB6PPS_MASK                       equ 001Fh

// Register: RB7PPS
#define RB7PPS RB7PPS
RB7PPS                                   equ 0E9Fh
// bitfield definitions
RB7PPS_RB7PPS_POSN                       equ 0000h
RB7PPS_RB7PPS_POSITION                   equ 0000h
RB7PPS_RB7PPS_SIZE                       equ 0005h
RB7PPS_RB7PPS_LENGTH                     equ 0005h
RB7PPS_RB7PPS_MASK                       equ 001Fh

// Register: RC0PPS
#define RC0PPS RC0PPS
RC0PPS                                   equ 0EA0h
// bitfield definitions
RC0PPS_RC0PPS_POSN                       equ 0000h
RC0PPS_RC0PPS_POSITION                   equ 0000h
RC0PPS_RC0PPS_SIZE                       equ 0005h
RC0PPS_RC0PPS_LENGTH                     equ 0005h
RC0PPS_RC0PPS_MASK                       equ 001Fh

// Register: RC1PPS
#define RC1PPS RC1PPS
RC1PPS                                   equ 0EA1h
// bitfield definitions
RC1PPS_RC1PPS_POSN                       equ 0000h
RC1PPS_RC1PPS_POSITION                   equ 0000h
RC1PPS_RC1PPS_SIZE                       equ 0005h
RC1PPS_RC1PPS_LENGTH                     equ 0005h
RC1PPS_RC1PPS_MASK                       equ 001Fh

// Register: RC2PPS
#define RC2PPS RC2PPS
RC2PPS                                   equ 0EA2h
// bitfield definitions
RC2PPS_RC2PPS_POSN                       equ 0000h
RC2PPS_RC2PPS_POSITION                   equ 0000h
RC2PPS_RC2PPS_SIZE                       equ 0005h
RC2PPS_RC2PPS_LENGTH                     equ 0005h
RC2PPS_RC2PPS_MASK                       equ 001Fh

// Register: RC3PPS
#define RC3PPS RC3PPS
RC3PPS                                   equ 0EA3h
// bitfield definitions
RC3PPS_RC3PPS_POSN                       equ 0000h
RC3PPS_RC3PPS_POSITION                   equ 0000h
RC3PPS_RC3PPS_SIZE                       equ 0005h
RC3PPS_RC3PPS_LENGTH                     equ 0005h
RC3PPS_RC3PPS_MASK                       equ 001Fh

// Register: RC4PPS
#define RC4PPS RC4PPS
RC4PPS                                   equ 0EA4h
// bitfield definitions
RC4PPS_RC4PPS_POSN                       equ 0000h
RC4PPS_RC4PPS_POSITION                   equ 0000h
RC4PPS_RC4PPS_SIZE                       equ 0005h
RC4PPS_RC4PPS_LENGTH                     equ 0005h
RC4PPS_RC4PPS_MASK                       equ 001Fh

// Register: RC5PPS
#define RC5PPS RC5PPS
RC5PPS                                   equ 0EA5h
// bitfield definitions
RC5PPS_RC5PPS_POSN                       equ 0000h
RC5PPS_RC5PPS_POSITION                   equ 0000h
RC5PPS_RC5PPS_SIZE                       equ 0005h
RC5PPS_RC5PPS_LENGTH                     equ 0005h
RC5PPS_RC5PPS_MASK                       equ 001Fh

// Register: RC6PPS
#define RC6PPS RC6PPS
RC6PPS                                   equ 0EA6h
// bitfield definitions
RC6PPS_RC6PPS_POSN                       equ 0000h
RC6PPS_RC6PPS_POSITION                   equ 0000h
RC6PPS_RC6PPS_SIZE                       equ 0005h
RC6PPS_RC6PPS_LENGTH                     equ 0005h
RC6PPS_RC6PPS_MASK                       equ 001Fh

// Register: RC7PPS
#define RC7PPS RC7PPS
RC7PPS                                   equ 0EA7h
// bitfield definitions
RC7PPS_RC7PPS_POSN                       equ 0000h
RC7PPS_RC7PPS_POSITION                   equ 0000h
RC7PPS_RC7PPS_SIZE                       equ 0005h
RC7PPS_RC7PPS_LENGTH                     equ 0005h
RC7PPS_RC7PPS_MASK                       equ 001Fh

// Register: CLCDATA
#define CLCDATA CLCDATA
CLCDATA                                  equ 0F0Fh
// bitfield definitions
CLCDATA_MCLC1OUT_POSN                    equ 0000h
CLCDATA_MCLC1OUT_POSITION                equ 0000h
CLCDATA_MCLC1OUT_SIZE                    equ 0001h
CLCDATA_MCLC1OUT_LENGTH                  equ 0001h
CLCDATA_MCLC1OUT_MASK                    equ 0001h
CLCDATA_MCLC2OUT_POSN                    equ 0001h
CLCDATA_MCLC2OUT_POSITION                equ 0001h
CLCDATA_MCLC2OUT_SIZE                    equ 0001h
CLCDATA_MCLC2OUT_LENGTH                  equ 0001h
CLCDATA_MCLC2OUT_MASK                    equ 0002h
CLCDATA_MCLC3OUT_POSN                    equ 0002h
CLCDATA_MCLC3OUT_POSITION                equ 0002h
CLCDATA_MCLC3OUT_SIZE                    equ 0001h
CLCDATA_MCLC3OUT_LENGTH                  equ 0001h
CLCDATA_MCLC3OUT_MASK                    equ 0004h

// Register: CLC1CON
#define CLC1CON CLC1CON
CLC1CON                                  equ 0F10h
// bitfield definitions
CLC1CON_LC1MODE_POSN                     equ 0000h
CLC1CON_LC1MODE_POSITION                 equ 0000h
CLC1CON_LC1MODE_SIZE                     equ 0003h
CLC1CON_LC1MODE_LENGTH                   equ 0003h
CLC1CON_LC1MODE_MASK                     equ 0007h
CLC1CON_LC1INTN_POSN                     equ 0003h
CLC1CON_LC1INTN_POSITION                 equ 0003h
CLC1CON_LC1INTN_SIZE                     equ 0001h
CLC1CON_LC1INTN_LENGTH                   equ 0001h
CLC1CON_LC1INTN_MASK                     equ 0008h
CLC1CON_LC1INTP_POSN                     equ 0004h
CLC1CON_LC1INTP_POSITION                 equ 0004h
CLC1CON_LC1INTP_SIZE                     equ 0001h
CLC1CON_LC1INTP_LENGTH                   equ 0001h
CLC1CON_LC1INTP_MASK                     equ 0010h
CLC1CON_LC1OUT_POSN                      equ 0005h
CLC1CON_LC1OUT_POSITION                  equ 0005h
CLC1CON_LC1OUT_SIZE                      equ 0001h
CLC1CON_LC1OUT_LENGTH                    equ 0001h
CLC1CON_LC1OUT_MASK                      equ 0020h
CLC1CON_LC1EN_POSN                       equ 0007h
CLC1CON_LC1EN_POSITION                   equ 0007h
CLC1CON_LC1EN_SIZE                       equ 0001h
CLC1CON_LC1EN_LENGTH                     equ 0001h
CLC1CON_LC1EN_MASK                       equ 0080h
CLC1CON_LC1MODE0_POSN                    equ 0000h
CLC1CON_LC1MODE0_POSITION                equ 0000h
CLC1CON_LC1MODE0_SIZE                    equ 0001h
CLC1CON_LC1MODE0_LENGTH                  equ 0001h
CLC1CON_LC1MODE0_MASK                    equ 0001h
CLC1CON_LC1MODE1_POSN                    equ 0001h
CLC1CON_LC1MODE1_POSITION                equ 0001h
CLC1CON_LC1MODE1_SIZE                    equ 0001h
CLC1CON_LC1MODE1_LENGTH                  equ 0001h
CLC1CON_LC1MODE1_MASK                    equ 0002h
CLC1CON_LC1MODE2_POSN                    equ 0002h
CLC1CON_LC1MODE2_POSITION                equ 0002h
CLC1CON_LC1MODE2_SIZE                    equ 0001h
CLC1CON_LC1MODE2_LENGTH                  equ 0001h
CLC1CON_LC1MODE2_MASK                    equ 0004h
CLC1CON_MODE_POSN                        equ 0000h
CLC1CON_MODE_POSITION                    equ 0000h
CLC1CON_MODE_SIZE                        equ 0003h
CLC1CON_MODE_LENGTH                      equ 0003h
CLC1CON_MODE_MASK                        equ 0007h
CLC1CON_INTN_POSN                        equ 0003h
CLC1CON_INTN_POSITION                    equ 0003h
CLC1CON_INTN_SIZE                        equ 0001h
CLC1CON_INTN_LENGTH                      equ 0001h
CLC1CON_INTN_MASK                        equ 0008h
CLC1CON_INTP_POSN                        equ 0004h
CLC1CON_INTP_POSITION                    equ 0004h
CLC1CON_INTP_SIZE                        equ 0001h
CLC1CON_INTP_LENGTH                      equ 0001h
CLC1CON_INTP_MASK                        equ 0010h
CLC1CON_OUT_POSN                         equ 0005h
CLC1CON_OUT_POSITION                     equ 0005h
CLC1CON_OUT_SIZE                         equ 0001h
CLC1CON_OUT_LENGTH                       equ 0001h
CLC1CON_OUT_MASK                         equ 0020h
CLC1CON_EN_POSN                          equ 0007h
CLC1CON_EN_POSITION                      equ 0007h
CLC1CON_EN_SIZE                          equ 0001h
CLC1CON_EN_LENGTH                        equ 0001h
CLC1CON_EN_MASK                          equ 0080h
CLC1CON_MODE0_POSN                       equ 0000h
CLC1CON_MODE0_POSITION                   equ 0000h
CLC1CON_MODE0_SIZE                       equ 0001h
CLC1CON_MODE0_LENGTH                     equ 0001h
CLC1CON_MODE0_MASK                       equ 0001h
CLC1CON_MODE1_POSN                       equ 0001h
CLC1CON_MODE1_POSITION                   equ 0001h
CLC1CON_MODE1_SIZE                       equ 0001h
CLC1CON_MODE1_LENGTH                     equ 0001h
CLC1CON_MODE1_MASK                       equ 0002h
CLC1CON_MODE2_POSN                       equ 0002h
CLC1CON_MODE2_POSITION                   equ 0002h
CLC1CON_MODE2_SIZE                       equ 0001h
CLC1CON_MODE2_LENGTH                     equ 0001h
CLC1CON_MODE2_MASK                       equ 0004h

// Register: CLC1POL
#define CLC1POL CLC1POL
CLC1POL                                  equ 0F11h
// bitfield definitions
CLC1POL_LC1G1POL_POSN                    equ 0000h
CLC1POL_LC1G1POL_POSITION                equ 0000h
CLC1POL_LC1G1POL_SIZE                    equ 0001h
CLC1POL_LC1G1POL_LENGTH                  equ 0001h
CLC1POL_LC1G1POL_MASK                    equ 0001h
CLC1POL_LC1G2POL_POSN                    equ 0001h
CLC1POL_LC1G2POL_POSITION                equ 0001h
CLC1POL_LC1G2POL_SIZE                    equ 0001h
CLC1POL_LC1G2POL_LENGTH                  equ 0001h
CLC1POL_LC1G2POL_MASK                    equ 0002h
CLC1POL_LC1G3POL_POSN                    equ 0002h
CLC1POL_LC1G3POL_POSITION                equ 0002h
CLC1POL_LC1G3POL_SIZE                    equ 0001h
CLC1POL_LC1G3POL_LENGTH                  equ 0001h
CLC1POL_LC1G3POL_MASK                    equ 0004h
CLC1POL_LC1G4POL_POSN                    equ 0003h
CLC1POL_LC1G4POL_POSITION                equ 0003h
CLC1POL_LC1G4POL_SIZE                    equ 0001h
CLC1POL_LC1G4POL_LENGTH                  equ 0001h
CLC1POL_LC1G4POL_MASK                    equ 0008h
CLC1POL_LC1POL_POSN                      equ 0007h
CLC1POL_LC1POL_POSITION                  equ 0007h
CLC1POL_LC1POL_SIZE                      equ 0001h
CLC1POL_LC1POL_LENGTH                    equ 0001h
CLC1POL_LC1POL_MASK                      equ 0080h
CLC1POL_G1POL_POSN                       equ 0000h
CLC1POL_G1POL_POSITION                   equ 0000h
CLC1POL_G1POL_SIZE                       equ 0001h
CLC1POL_G1POL_LENGTH                     equ 0001h
CLC1POL_G1POL_MASK                       equ 0001h
CLC1POL_G2POL_POSN                       equ 0001h
CLC1POL_G2POL_POSITION                   equ 0001h
CLC1POL_G2POL_SIZE                       equ 0001h
CLC1POL_G2POL_LENGTH                     equ 0001h
CLC1POL_G2POL_MASK                       equ 0002h
CLC1POL_G3POL_POSN                       equ 0002h
CLC1POL_G3POL_POSITION                   equ 0002h
CLC1POL_G3POL_SIZE                       equ 0001h
CLC1POL_G3POL_LENGTH                     equ 0001h
CLC1POL_G3POL_MASK                       equ 0004h
CLC1POL_G4POL_POSN                       equ 0003h
CLC1POL_G4POL_POSITION                   equ 0003h
CLC1POL_G4POL_SIZE                       equ 0001h
CLC1POL_G4POL_LENGTH                     equ 0001h
CLC1POL_G4POL_MASK                       equ 0008h
CLC1POL_POL_POSN                         equ 0007h
CLC1POL_POL_POSITION                     equ 0007h
CLC1POL_POL_SIZE                         equ 0001h
CLC1POL_POL_LENGTH                       equ 0001h
CLC1POL_POL_MASK                         equ 0080h

// Register: CLC1SEL0
#define CLC1SEL0 CLC1SEL0
CLC1SEL0                                 equ 0F12h
// bitfield definitions
CLC1SEL0_LC1D1S0_POSN                    equ 0000h
CLC1SEL0_LC1D1S0_POSITION                equ 0000h
CLC1SEL0_LC1D1S0_SIZE                    equ 0001h
CLC1SEL0_LC1D1S0_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S0_MASK                    equ 0001h
CLC1SEL0_LC1D1S1_POSN                    equ 0001h
CLC1SEL0_LC1D1S1_POSITION                equ 0001h
CLC1SEL0_LC1D1S1_SIZE                    equ 0001h
CLC1SEL0_LC1D1S1_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S1_MASK                    equ 0002h
CLC1SEL0_LC1D1S2_POSN                    equ 0002h
CLC1SEL0_LC1D1S2_POSITION                equ 0002h
CLC1SEL0_LC1D1S2_SIZE                    equ 0001h
CLC1SEL0_LC1D1S2_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S2_MASK                    equ 0004h
CLC1SEL0_LC1D1S3_POSN                    equ 0003h
CLC1SEL0_LC1D1S3_POSITION                equ 0003h
CLC1SEL0_LC1D1S3_SIZE                    equ 0001h
CLC1SEL0_LC1D1S3_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S3_MASK                    equ 0008h
CLC1SEL0_LC1D1S4_POSN                    equ 0004h
CLC1SEL0_LC1D1S4_POSITION                equ 0004h
CLC1SEL0_LC1D1S4_SIZE                    equ 0001h
CLC1SEL0_LC1D1S4_LENGTH                  equ 0001h
CLC1SEL0_LC1D1S4_MASK                    equ 0010h
CLC1SEL0_LC1D1S_POSN                     equ 0000h
CLC1SEL0_LC1D1S_POSITION                 equ 0000h
CLC1SEL0_LC1D1S_SIZE                     equ 0008h
CLC1SEL0_LC1D1S_LENGTH                   equ 0008h
CLC1SEL0_LC1D1S_MASK                     equ 00FFh
CLC1SEL0_D1S_POSN                        equ 0000h
CLC1SEL0_D1S_POSITION                    equ 0000h
CLC1SEL0_D1S_SIZE                        equ 0008h
CLC1SEL0_D1S_LENGTH                      equ 0008h
CLC1SEL0_D1S_MASK                        equ 00FFh
CLC1SEL0_D1S0_POSN                       equ 0000h
CLC1SEL0_D1S0_POSITION                   equ 0000h
CLC1SEL0_D1S0_SIZE                       equ 0001h
CLC1SEL0_D1S0_LENGTH                     equ 0001h
CLC1SEL0_D1S0_MASK                       equ 0001h
CLC1SEL0_D1S1_POSN                       equ 0001h
CLC1SEL0_D1S1_POSITION                   equ 0001h
CLC1SEL0_D1S1_SIZE                       equ 0001h
CLC1SEL0_D1S1_LENGTH                     equ 0001h
CLC1SEL0_D1S1_MASK                       equ 0002h
CLC1SEL0_D1S2_POSN                       equ 0002h
CLC1SEL0_D1S2_POSITION                   equ 0002h
CLC1SEL0_D1S2_SIZE                       equ 0001h
CLC1SEL0_D1S2_LENGTH                     equ 0001h
CLC1SEL0_D1S2_MASK                       equ 0004h
CLC1SEL0_D1S3_POSN                       equ 0003h
CLC1SEL0_D1S3_POSITION                   equ 0003h
CLC1SEL0_D1S3_SIZE                       equ 0001h
CLC1SEL0_D1S3_LENGTH                     equ 0001h
CLC1SEL0_D1S3_MASK                       equ 0008h
CLC1SEL0_D1S4_POSN                       equ 0004h
CLC1SEL0_D1S4_POSITION                   equ 0004h
CLC1SEL0_D1S4_SIZE                       equ 0001h
CLC1SEL0_D1S4_LENGTH                     equ 0001h
CLC1SEL0_D1S4_MASK                       equ 0010h

// Register: CLC1SEL1
#define CLC1SEL1 CLC1SEL1
CLC1SEL1                                 equ 0F13h
// bitfield definitions
CLC1SEL1_LC1D2S0_POSN                    equ 0000h
CLC1SEL1_LC1D2S0_POSITION                equ 0000h
CLC1SEL1_LC1D2S0_SIZE                    equ 0001h
CLC1SEL1_LC1D2S0_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S0_MASK                    equ 0001h
CLC1SEL1_LC1D2S1_POSN                    equ 0001h
CLC1SEL1_LC1D2S1_POSITION                equ 0001h
CLC1SEL1_LC1D2S1_SIZE                    equ 0001h
CLC1SEL1_LC1D2S1_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S1_MASK                    equ 0002h
CLC1SEL1_LC1D2S2_POSN                    equ 0002h
CLC1SEL1_LC1D2S2_POSITION                equ 0002h
CLC1SEL1_LC1D2S2_SIZE                    equ 0001h
CLC1SEL1_LC1D2S2_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S2_MASK                    equ 0004h
CLC1SEL1_LC1D2S3_POSN                    equ 0003h
CLC1SEL1_LC1D2S3_POSITION                equ 0003h
CLC1SEL1_LC1D2S3_SIZE                    equ 0001h
CLC1SEL1_LC1D2S3_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S3_MASK                    equ 0008h
CLC1SEL1_LC1D2S4_POSN                    equ 0004h
CLC1SEL1_LC1D2S4_POSITION                equ 0004h
CLC1SEL1_LC1D2S4_SIZE                    equ 0001h
CLC1SEL1_LC1D2S4_LENGTH                  equ 0001h
CLC1SEL1_LC1D2S4_MASK                    equ 0010h
CLC1SEL1_LC1D2S_POSN                     equ 0000h
CLC1SEL1_LC1D2S_POSITION                 equ 0000h
CLC1SEL1_LC1D2S_SIZE                     equ 0008h
CLC1SEL1_LC1D2S_LENGTH                   equ 0008h
CLC1SEL1_LC1D2S_MASK                     equ 00FFh
CLC1SEL1_D2S_POSN                        equ 0000h
CLC1SEL1_D2S_POSITION                    equ 0000h
CLC1SEL1_D2S_SIZE                        equ 0008h
CLC1SEL1_D2S_LENGTH                      equ 0008h
CLC1SEL1_D2S_MASK                        equ 00FFh
CLC1SEL1_D2S0_POSN                       equ 0000h
CLC1SEL1_D2S0_POSITION                   equ 0000h
CLC1SEL1_D2S0_SIZE                       equ 0001h
CLC1SEL1_D2S0_LENGTH                     equ 0001h
CLC1SEL1_D2S0_MASK                       equ 0001h
CLC1SEL1_D2S1_POSN                       equ 0001h
CLC1SEL1_D2S1_POSITION                   equ 0001h
CLC1SEL1_D2S1_SIZE                       equ 0001h
CLC1SEL1_D2S1_LENGTH                     equ 0001h
CLC1SEL1_D2S1_MASK                       equ 0002h
CLC1SEL1_D2S2_POSN                       equ 0002h
CLC1SEL1_D2S2_POSITION                   equ 0002h
CLC1SEL1_D2S2_SIZE                       equ 0001h
CLC1SEL1_D2S2_LENGTH                     equ 0001h
CLC1SEL1_D2S2_MASK                       equ 0004h
CLC1SEL1_D2S3_POSN                       equ 0003h
CLC1SEL1_D2S3_POSITION                   equ 0003h
CLC1SEL1_D2S3_SIZE                       equ 0001h
CLC1SEL1_D2S3_LENGTH                     equ 0001h
CLC1SEL1_D2S3_MASK                       equ 0008h
CLC1SEL1_D2S4_POSN                       equ 0004h
CLC1SEL1_D2S4_POSITION                   equ 0004h
CLC1SEL1_D2S4_SIZE                       equ 0001h
CLC1SEL1_D2S4_LENGTH                     equ 0001h
CLC1SEL1_D2S4_MASK                       equ 0010h

// Register: CLC1SEL2
#define CLC1SEL2 CLC1SEL2
CLC1SEL2                                 equ 0F14h
// bitfield definitions
CLC1SEL2_LC1D3S0_POSN                    equ 0000h
CLC1SEL2_LC1D3S0_POSITION                equ 0000h
CLC1SEL2_LC1D3S0_SIZE                    equ 0001h
CLC1SEL2_LC1D3S0_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S0_MASK                    equ 0001h
CLC1SEL2_LC1D3S1_POSN                    equ 0001h
CLC1SEL2_LC1D3S1_POSITION                equ 0001h
CLC1SEL2_LC1D3S1_SIZE                    equ 0001h
CLC1SEL2_LC1D3S1_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S1_MASK                    equ 0002h
CLC1SEL2_LC1D3S2_POSN                    equ 0002h
CLC1SEL2_LC1D3S2_POSITION                equ 0002h
CLC1SEL2_LC1D3S2_SIZE                    equ 0001h
CLC1SEL2_LC1D3S2_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S2_MASK                    equ 0004h
CLC1SEL2_LC1D3S3_POSN                    equ 0003h
CLC1SEL2_LC1D3S3_POSITION                equ 0003h
CLC1SEL2_LC1D3S3_SIZE                    equ 0001h
CLC1SEL2_LC1D3S3_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S3_MASK                    equ 0008h
CLC1SEL2_LC1D3S4_POSN                    equ 0004h
CLC1SEL2_LC1D3S4_POSITION                equ 0004h
CLC1SEL2_LC1D3S4_SIZE                    equ 0001h
CLC1SEL2_LC1D3S4_LENGTH                  equ 0001h
CLC1SEL2_LC1D3S4_MASK                    equ 0010h
CLC1SEL2_LC1D3S_POSN                     equ 0000h
CLC1SEL2_LC1D3S_POSITION                 equ 0000h
CLC1SEL2_LC1D3S_SIZE                     equ 0008h
CLC1SEL2_LC1D3S_LENGTH                   equ 0008h
CLC1SEL2_LC1D3S_MASK                     equ 00FFh
CLC1SEL2_D3S_POSN                        equ 0000h
CLC1SEL2_D3S_POSITION                    equ 0000h
CLC1SEL2_D3S_SIZE                        equ 0008h
CLC1SEL2_D3S_LENGTH                      equ 0008h
CLC1SEL2_D3S_MASK                        equ 00FFh
CLC1SEL2_D3S0_POSN                       equ 0000h
CLC1SEL2_D3S0_POSITION                   equ 0000h
CLC1SEL2_D3S0_SIZE                       equ 0001h
CLC1SEL2_D3S0_LENGTH                     equ 0001h
CLC1SEL2_D3S0_MASK                       equ 0001h
CLC1SEL2_D3S1_POSN                       equ 0001h
CLC1SEL2_D3S1_POSITION                   equ 0001h
CLC1SEL2_D3S1_SIZE                       equ 0001h
CLC1SEL2_D3S1_LENGTH                     equ 0001h
CLC1SEL2_D3S1_MASK                       equ 0002h
CLC1SEL2_D3S2_POSN                       equ 0002h
CLC1SEL2_D3S2_POSITION                   equ 0002h
CLC1SEL2_D3S2_SIZE                       equ 0001h
CLC1SEL2_D3S2_LENGTH                     equ 0001h
CLC1SEL2_D3S2_MASK                       equ 0004h
CLC1SEL2_D3S3_POSN                       equ 0003h
CLC1SEL2_D3S3_POSITION                   equ 0003h
CLC1SEL2_D3S3_SIZE                       equ 0001h
CLC1SEL2_D3S3_LENGTH                     equ 0001h
CLC1SEL2_D3S3_MASK                       equ 0008h
CLC1SEL2_D3S4_POSN                       equ 0004h
CLC1SEL2_D3S4_POSITION                   equ 0004h
CLC1SEL2_D3S4_SIZE                       equ 0001h
CLC1SEL2_D3S4_LENGTH                     equ 0001h
CLC1SEL2_D3S4_MASK                       equ 0010h

// Register: CLC1SEL3
#define CLC1SEL3 CLC1SEL3
CLC1SEL3                                 equ 0F15h
// bitfield definitions
CLC1SEL3_LC1D4S0_POSN                    equ 0000h
CLC1SEL3_LC1D4S0_POSITION                equ 0000h
CLC1SEL3_LC1D4S0_SIZE                    equ 0001h
CLC1SEL3_LC1D4S0_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S0_MASK                    equ 0001h
CLC1SEL3_LC1D4S1_POSN                    equ 0001h
CLC1SEL3_LC1D4S1_POSITION                equ 0001h
CLC1SEL3_LC1D4S1_SIZE                    equ 0001h
CLC1SEL3_LC1D4S1_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S1_MASK                    equ 0002h
CLC1SEL3_LC1D4S2_POSN                    equ 0002h
CLC1SEL3_LC1D4S2_POSITION                equ 0002h
CLC1SEL3_LC1D4S2_SIZE                    equ 0001h
CLC1SEL3_LC1D4S2_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S2_MASK                    equ 0004h
CLC1SEL3_LC1D4S3_POSN                    equ 0003h
CLC1SEL3_LC1D4S3_POSITION                equ 0003h
CLC1SEL3_LC1D4S3_SIZE                    equ 0001h
CLC1SEL3_LC1D4S3_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S3_MASK                    equ 0008h
CLC1SEL3_LC1D4S4_POSN                    equ 0004h
CLC1SEL3_LC1D4S4_POSITION                equ 0004h
CLC1SEL3_LC1D4S4_SIZE                    equ 0001h
CLC1SEL3_LC1D4S4_LENGTH                  equ 0001h
CLC1SEL3_LC1D4S4_MASK                    equ 0010h
CLC1SEL3_LC1D4S_POSN                     equ 0000h
CLC1SEL3_LC1D4S_POSITION                 equ 0000h
CLC1SEL3_LC1D4S_SIZE                     equ 0008h
CLC1SEL3_LC1D4S_LENGTH                   equ 0008h
CLC1SEL3_LC1D4S_MASK                     equ 00FFh
CLC1SEL3_D4S_POSN                        equ 0000h
CLC1SEL3_D4S_POSITION                    equ 0000h
CLC1SEL3_D4S_SIZE                        equ 0008h
CLC1SEL3_D4S_LENGTH                      equ 0008h
CLC1SEL3_D4S_MASK                        equ 00FFh
CLC1SEL3_D4S0_POSN                       equ 0000h
CLC1SEL3_D4S0_POSITION                   equ 0000h
CLC1SEL3_D4S0_SIZE                       equ 0001h
CLC1SEL3_D4S0_LENGTH                     equ 0001h
CLC1SEL3_D4S0_MASK                       equ 0001h
CLC1SEL3_D4S1_POSN                       equ 0001h
CLC1SEL3_D4S1_POSITION                   equ 0001h
CLC1SEL3_D4S1_SIZE                       equ 0001h
CLC1SEL3_D4S1_LENGTH                     equ 0001h
CLC1SEL3_D4S1_MASK                       equ 0002h
CLC1SEL3_D4S2_POSN                       equ 0002h
CLC1SEL3_D4S2_POSITION                   equ 0002h
CLC1SEL3_D4S2_SIZE                       equ 0001h
CLC1SEL3_D4S2_LENGTH                     equ 0001h
CLC1SEL3_D4S2_MASK                       equ 0004h
CLC1SEL3_D4S3_POSN                       equ 0003h
CLC1SEL3_D4S3_POSITION                   equ 0003h
CLC1SEL3_D4S3_SIZE                       equ 0001h
CLC1SEL3_D4S3_LENGTH                     equ 0001h
CLC1SEL3_D4S3_MASK                       equ 0008h
CLC1SEL3_D4S4_POSN                       equ 0004h
CLC1SEL3_D4S4_POSITION                   equ 0004h
CLC1SEL3_D4S4_SIZE                       equ 0001h
CLC1SEL3_D4S4_LENGTH                     equ 0001h
CLC1SEL3_D4S4_MASK                       equ 0010h

// Register: CLC1GLS0
#define CLC1GLS0 CLC1GLS0
CLC1GLS0                                 equ 0F16h
// bitfield definitions
CLC1GLS0_LC1G1D1N_POSN                   equ 0000h
CLC1GLS0_LC1G1D1N_POSITION               equ 0000h
CLC1GLS0_LC1G1D1N_SIZE                   equ 0001h
CLC1GLS0_LC1G1D1N_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D1N_MASK                   equ 0001h
CLC1GLS0_LC1G1D1T_POSN                   equ 0001h
CLC1GLS0_LC1G1D1T_POSITION               equ 0001h
CLC1GLS0_LC1G1D1T_SIZE                   equ 0001h
CLC1GLS0_LC1G1D1T_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D1T_MASK                   equ 0002h
CLC1GLS0_LC1G1D2N_POSN                   equ 0002h
CLC1GLS0_LC1G1D2N_POSITION               equ 0002h
CLC1GLS0_LC1G1D2N_SIZE                   equ 0001h
CLC1GLS0_LC1G1D2N_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D2N_MASK                   equ 0004h
CLC1GLS0_LC1G1D2T_POSN                   equ 0003h
CLC1GLS0_LC1G1D2T_POSITION               equ 0003h
CLC1GLS0_LC1G1D2T_SIZE                   equ 0001h
CLC1GLS0_LC1G1D2T_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D2T_MASK                   equ 0008h
CLC1GLS0_LC1G1D3N_POSN                   equ 0004h
CLC1GLS0_LC1G1D3N_POSITION               equ 0004h
CLC1GLS0_LC1G1D3N_SIZE                   equ 0001h
CLC1GLS0_LC1G1D3N_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D3N_MASK                   equ 0010h
CLC1GLS0_LC1G1D3T_POSN                   equ 0005h
CLC1GLS0_LC1G1D3T_POSITION               equ 0005h
CLC1GLS0_LC1G1D3T_SIZE                   equ 0001h
CLC1GLS0_LC1G1D3T_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D3T_MASK                   equ 0020h
CLC1GLS0_LC1G1D4N_POSN                   equ 0006h
CLC1GLS0_LC1G1D4N_POSITION               equ 0006h
CLC1GLS0_LC1G1D4N_SIZE                   equ 0001h
CLC1GLS0_LC1G1D4N_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D4N_MASK                   equ 0040h
CLC1GLS0_LC1G1D4T_POSN                   equ 0007h
CLC1GLS0_LC1G1D4T_POSITION               equ 0007h
CLC1GLS0_LC1G1D4T_SIZE                   equ 0001h
CLC1GLS0_LC1G1D4T_LENGTH                 equ 0001h
CLC1GLS0_LC1G1D4T_MASK                   equ 0080h
CLC1GLS0_D1N_POSN                        equ 0000h
CLC1GLS0_D1N_POSITION                    equ 0000h
CLC1GLS0_D1N_SIZE                        equ 0001h
CLC1GLS0_D1N_LENGTH                      equ 0001h
CLC1GLS0_D1N_MASK                        equ 0001h
CLC1GLS0_D1T_POSN                        equ 0001h
CLC1GLS0_D1T_POSITION                    equ 0001h
CLC1GLS0_D1T_SIZE                        equ 0001h
CLC1GLS0_D1T_LENGTH                      equ 0001h
CLC1GLS0_D1T_MASK                        equ 0002h
CLC1GLS0_D2N_POSN                        equ 0002h
CLC1GLS0_D2N_POSITION                    equ 0002h
CLC1GLS0_D2N_SIZE                        equ 0001h
CLC1GLS0_D2N_LENGTH                      equ 0001h
CLC1GLS0_D2N_MASK                        equ 0004h
CLC1GLS0_D2T_POSN                        equ 0003h
CLC1GLS0_D2T_POSITION                    equ 0003h
CLC1GLS0_D2T_SIZE                        equ 0001h
CLC1GLS0_D2T_LENGTH                      equ 0001h
CLC1GLS0_D2T_MASK                        equ 0008h
CLC1GLS0_D3N_POSN                        equ 0004h
CLC1GLS0_D3N_POSITION                    equ 0004h
CLC1GLS0_D3N_SIZE                        equ 0001h
CLC1GLS0_D3N_LENGTH                      equ 0001h
CLC1GLS0_D3N_MASK                        equ 0010h
CLC1GLS0_D3T_POSN                        equ 0005h
CLC1GLS0_D3T_POSITION                    equ 0005h
CLC1GLS0_D3T_SIZE                        equ 0001h
CLC1GLS0_D3T_LENGTH                      equ 0001h
CLC1GLS0_D3T_MASK                        equ 0020h
CLC1GLS0_D4N_POSN                        equ 0006h
CLC1GLS0_D4N_POSITION                    equ 0006h
CLC1GLS0_D4N_SIZE                        equ 0001h
CLC1GLS0_D4N_LENGTH                      equ 0001h
CLC1GLS0_D4N_MASK                        equ 0040h
CLC1GLS0_D4T_POSN                        equ 0007h
CLC1GLS0_D4T_POSITION                    equ 0007h
CLC1GLS0_D4T_SIZE                        equ 0001h
CLC1GLS0_D4T_LENGTH                      equ 0001h
CLC1GLS0_D4T_MASK                        equ 0080h

// Register: CLC1GLS1
#define CLC1GLS1 CLC1GLS1
CLC1GLS1                                 equ 0F17h
// bitfield definitions
CLC1GLS1_LC1G2D1N_POSN                   equ 0000h
CLC1GLS1_LC1G2D1N_POSITION               equ 0000h
CLC1GLS1_LC1G2D1N_SIZE                   equ 0001h
CLC1GLS1_LC1G2D1N_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D1N_MASK                   equ 0001h
CLC1GLS1_LC1G2D1T_POSN                   equ 0001h
CLC1GLS1_LC1G2D1T_POSITION               equ 0001h
CLC1GLS1_LC1G2D1T_SIZE                   equ 0001h
CLC1GLS1_LC1G2D1T_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D1T_MASK                   equ 0002h
CLC1GLS1_LC1G2D2N_POSN                   equ 0002h
CLC1GLS1_LC1G2D2N_POSITION               equ 0002h
CLC1GLS1_LC1G2D2N_SIZE                   equ 0001h
CLC1GLS1_LC1G2D2N_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D2N_MASK                   equ 0004h
CLC1GLS1_LC1G2D2T_POSN                   equ 0003h
CLC1GLS1_LC1G2D2T_POSITION               equ 0003h
CLC1GLS1_LC1G2D2T_SIZE                   equ 0001h
CLC1GLS1_LC1G2D2T_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D2T_MASK                   equ 0008h
CLC1GLS1_LC1G2D3N_POSN                   equ 0004h
CLC1GLS1_LC1G2D3N_POSITION               equ 0004h
CLC1GLS1_LC1G2D3N_SIZE                   equ 0001h
CLC1GLS1_LC1G2D3N_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D3N_MASK                   equ 0010h
CLC1GLS1_LC1G2D3T_POSN                   equ 0005h
CLC1GLS1_LC1G2D3T_POSITION               equ 0005h
CLC1GLS1_LC1G2D3T_SIZE                   equ 0001h
CLC1GLS1_LC1G2D3T_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D3T_MASK                   equ 0020h
CLC1GLS1_LC1G2D4N_POSN                   equ 0006h
CLC1GLS1_LC1G2D4N_POSITION               equ 0006h
CLC1GLS1_LC1G2D4N_SIZE                   equ 0001h
CLC1GLS1_LC1G2D4N_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D4N_MASK                   equ 0040h
CLC1GLS1_LC1G2D4T_POSN                   equ 0007h
CLC1GLS1_LC1G2D4T_POSITION               equ 0007h
CLC1GLS1_LC1G2D4T_SIZE                   equ 0001h
CLC1GLS1_LC1G2D4T_LENGTH                 equ 0001h
CLC1GLS1_LC1G2D4T_MASK                   equ 0080h
CLC1GLS1_D1N_POSN                        equ 0000h
CLC1GLS1_D1N_POSITION                    equ 0000h
CLC1GLS1_D1N_SIZE                        equ 0001h
CLC1GLS1_D1N_LENGTH                      equ 0001h
CLC1GLS1_D1N_MASK                        equ 0001h
CLC1GLS1_D1T_POSN                        equ 0001h
CLC1GLS1_D1T_POSITION                    equ 0001h
CLC1GLS1_D1T_SIZE                        equ 0001h
CLC1GLS1_D1T_LENGTH                      equ 0001h
CLC1GLS1_D1T_MASK                        equ 0002h
CLC1GLS1_D2N_POSN                        equ 0002h
CLC1GLS1_D2N_POSITION                    equ 0002h
CLC1GLS1_D2N_SIZE                        equ 0001h
CLC1GLS1_D2N_LENGTH                      equ 0001h
CLC1GLS1_D2N_MASK                        equ 0004h
CLC1GLS1_D2T_POSN                        equ 0003h
CLC1GLS1_D2T_POSITION                    equ 0003h
CLC1GLS1_D2T_SIZE                        equ 0001h
CLC1GLS1_D2T_LENGTH                      equ 0001h
CLC1GLS1_D2T_MASK                        equ 0008h
CLC1GLS1_D3N_POSN                        equ 0004h
CLC1GLS1_D3N_POSITION                    equ 0004h
CLC1GLS1_D3N_SIZE                        equ 0001h
CLC1GLS1_D3N_LENGTH                      equ 0001h
CLC1GLS1_D3N_MASK                        equ 0010h
CLC1GLS1_D3T_POSN                        equ 0005h
CLC1GLS1_D3T_POSITION                    equ 0005h
CLC1GLS1_D3T_SIZE                        equ 0001h
CLC1GLS1_D3T_LENGTH                      equ 0001h
CLC1GLS1_D3T_MASK                        equ 0020h
CLC1GLS1_D4N_POSN                        equ 0006h
CLC1GLS1_D4N_POSITION                    equ 0006h
CLC1GLS1_D4N_SIZE                        equ 0001h
CLC1GLS1_D4N_LENGTH                      equ 0001h
CLC1GLS1_D4N_MASK                        equ 0040h
CLC1GLS1_D4T_POSN                        equ 0007h
CLC1GLS1_D4T_POSITION                    equ 0007h
CLC1GLS1_D4T_SIZE                        equ 0001h
CLC1GLS1_D4T_LENGTH                      equ 0001h
CLC1GLS1_D4T_MASK                        equ 0080h

// Register: CLC1GLS2
#define CLC1GLS2 CLC1GLS2
CLC1GLS2                                 equ 0F18h
// bitfield definitions
CLC1GLS2_LC1G3D1N_POSN                   equ 0000h
CLC1GLS2_LC1G3D1N_POSITION               equ 0000h
CLC1GLS2_LC1G3D1N_SIZE                   equ 0001h
CLC1GLS2_LC1G3D1N_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D1N_MASK                   equ 0001h
CLC1GLS2_LC1G3D1T_POSN                   equ 0001h
CLC1GLS2_LC1G3D1T_POSITION               equ 0001h
CLC1GLS2_LC1G3D1T_SIZE                   equ 0001h
CLC1GLS2_LC1G3D1T_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D1T_MASK                   equ 0002h
CLC1GLS2_LC1G3D2N_POSN                   equ 0002h
CLC1GLS2_LC1G3D2N_POSITION               equ 0002h
CLC1GLS2_LC1G3D2N_SIZE                   equ 0001h
CLC1GLS2_LC1G3D2N_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D2N_MASK                   equ 0004h
CLC1GLS2_LC1G3D2T_POSN                   equ 0003h
CLC1GLS2_LC1G3D2T_POSITION               equ 0003h
CLC1GLS2_LC1G3D2T_SIZE                   equ 0001h
CLC1GLS2_LC1G3D2T_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D2T_MASK                   equ 0008h
CLC1GLS2_LC1G3D3N_POSN                   equ 0004h
CLC1GLS2_LC1G3D3N_POSITION               equ 0004h
CLC1GLS2_LC1G3D3N_SIZE                   equ 0001h
CLC1GLS2_LC1G3D3N_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D3N_MASK                   equ 0010h
CLC1GLS2_LC1G3D3T_POSN                   equ 0005h
CLC1GLS2_LC1G3D3T_POSITION               equ 0005h
CLC1GLS2_LC1G3D3T_SIZE                   equ 0001h
CLC1GLS2_LC1G3D3T_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D3T_MASK                   equ 0020h
CLC1GLS2_LC1G3D4N_POSN                   equ 0006h
CLC1GLS2_LC1G3D4N_POSITION               equ 0006h
CLC1GLS2_LC1G3D4N_SIZE                   equ 0001h
CLC1GLS2_LC1G3D4N_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D4N_MASK                   equ 0040h
CLC1GLS2_LC1G3D4T_POSN                   equ 0007h
CLC1GLS2_LC1G3D4T_POSITION               equ 0007h
CLC1GLS2_LC1G3D4T_SIZE                   equ 0001h
CLC1GLS2_LC1G3D4T_LENGTH                 equ 0001h
CLC1GLS2_LC1G3D4T_MASK                   equ 0080h
CLC1GLS2_D1N_POSN                        equ 0000h
CLC1GLS2_D1N_POSITION                    equ 0000h
CLC1GLS2_D1N_SIZE                        equ 0001h
CLC1GLS2_D1N_LENGTH                      equ 0001h
CLC1GLS2_D1N_MASK                        equ 0001h
CLC1GLS2_D1T_POSN                        equ 0001h
CLC1GLS2_D1T_POSITION                    equ 0001h
CLC1GLS2_D1T_SIZE                        equ 0001h
CLC1GLS2_D1T_LENGTH                      equ 0001h
CLC1GLS2_D1T_MASK                        equ 0002h
CLC1GLS2_D2N_POSN                        equ 0002h
CLC1GLS2_D2N_POSITION                    equ 0002h
CLC1GLS2_D2N_SIZE                        equ 0001h
CLC1GLS2_D2N_LENGTH                      equ 0001h
CLC1GLS2_D2N_MASK                        equ 0004h
CLC1GLS2_D2T_POSN                        equ 0003h
CLC1GLS2_D2T_POSITION                    equ 0003h
CLC1GLS2_D2T_SIZE                        equ 0001h
CLC1GLS2_D2T_LENGTH                      equ 0001h
CLC1GLS2_D2T_MASK                        equ 0008h
CLC1GLS2_D3N_POSN                        equ 0004h
CLC1GLS2_D3N_POSITION                    equ 0004h
CLC1GLS2_D3N_SIZE                        equ 0001h
CLC1GLS2_D3N_LENGTH                      equ 0001h
CLC1GLS2_D3N_MASK                        equ 0010h
CLC1GLS2_D3T_POSN                        equ 0005h
CLC1GLS2_D3T_POSITION                    equ 0005h
CLC1GLS2_D3T_SIZE                        equ 0001h
CLC1GLS2_D3T_LENGTH                      equ 0001h
CLC1GLS2_D3T_MASK                        equ 0020h
CLC1GLS2_D4N_POSN                        equ 0006h
CLC1GLS2_D4N_POSITION                    equ 0006h
CLC1GLS2_D4N_SIZE                        equ 0001h
CLC1GLS2_D4N_LENGTH                      equ 0001h
CLC1GLS2_D4N_MASK                        equ 0040h
CLC1GLS2_D4T_POSN                        equ 0007h
CLC1GLS2_D4T_POSITION                    equ 0007h
CLC1GLS2_D4T_SIZE                        equ 0001h
CLC1GLS2_D4T_LENGTH                      equ 0001h
CLC1GLS2_D4T_MASK                        equ 0080h

// Register: CLC1GLS3
#define CLC1GLS3 CLC1GLS3
CLC1GLS3                                 equ 0F19h
// bitfield definitions
CLC1GLS3_LC1G4D1N_POSN                   equ 0000h
CLC1GLS3_LC1G4D1N_POSITION               equ 0000h
CLC1GLS3_LC1G4D1N_SIZE                   equ 0001h
CLC1GLS3_LC1G4D1N_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D1N_MASK                   equ 0001h
CLC1GLS3_LC1G4D1T_POSN                   equ 0001h
CLC1GLS3_LC1G4D1T_POSITION               equ 0001h
CLC1GLS3_LC1G4D1T_SIZE                   equ 0001h
CLC1GLS3_LC1G4D1T_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D1T_MASK                   equ 0002h
CLC1GLS3_LC1G4D2N_POSN                   equ 0002h
CLC1GLS3_LC1G4D2N_POSITION               equ 0002h
CLC1GLS3_LC1G4D2N_SIZE                   equ 0001h
CLC1GLS3_LC1G4D2N_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D2N_MASK                   equ 0004h
CLC1GLS3_LC1G4D2T_POSN                   equ 0003h
CLC1GLS3_LC1G4D2T_POSITION               equ 0003h
CLC1GLS3_LC1G4D2T_SIZE                   equ 0001h
CLC1GLS3_LC1G4D2T_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D2T_MASK                   equ 0008h
CLC1GLS3_LC1G4D3N_POSN                   equ 0004h
CLC1GLS3_LC1G4D3N_POSITION               equ 0004h
CLC1GLS3_LC1G4D3N_SIZE                   equ 0001h
CLC1GLS3_LC1G4D3N_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D3N_MASK                   equ 0010h
CLC1GLS3_LC1G4D3T_POSN                   equ 0005h
CLC1GLS3_LC1G4D3T_POSITION               equ 0005h
CLC1GLS3_LC1G4D3T_SIZE                   equ 0001h
CLC1GLS3_LC1G4D3T_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D3T_MASK                   equ 0020h
CLC1GLS3_LC1G4D4N_POSN                   equ 0006h
CLC1GLS3_LC1G4D4N_POSITION               equ 0006h
CLC1GLS3_LC1G4D4N_SIZE                   equ 0001h
CLC1GLS3_LC1G4D4N_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D4N_MASK                   equ 0040h
CLC1GLS3_LC1G4D4T_POSN                   equ 0007h
CLC1GLS3_LC1G4D4T_POSITION               equ 0007h
CLC1GLS3_LC1G4D4T_SIZE                   equ 0001h
CLC1GLS3_LC1G4D4T_LENGTH                 equ 0001h
CLC1GLS3_LC1G4D4T_MASK                   equ 0080h
CLC1GLS3_G4D1N_POSN                      equ 0000h
CLC1GLS3_G4D1N_POSITION                  equ 0000h
CLC1GLS3_G4D1N_SIZE                      equ 0001h
CLC1GLS3_G4D1N_LENGTH                    equ 0001h
CLC1GLS3_G4D1N_MASK                      equ 0001h
CLC1GLS3_G4D1T_POSN                      equ 0001h
CLC1GLS3_G4D1T_POSITION                  equ 0001h
CLC1GLS3_G4D1T_SIZE                      equ 0001h
CLC1GLS3_G4D1T_LENGTH                    equ 0001h
CLC1GLS3_G4D1T_MASK                      equ 0002h
CLC1GLS3_G4D2N_POSN                      equ 0002h
CLC1GLS3_G4D2N_POSITION                  equ 0002h
CLC1GLS3_G4D2N_SIZE                      equ 0001h
CLC1GLS3_G4D2N_LENGTH                    equ 0001h
CLC1GLS3_G4D2N_MASK                      equ 0004h
CLC1GLS3_G4D2T_POSN                      equ 0003h
CLC1GLS3_G4D2T_POSITION                  equ 0003h
CLC1GLS3_G4D2T_SIZE                      equ 0001h
CLC1GLS3_G4D2T_LENGTH                    equ 0001h
CLC1GLS3_G4D2T_MASK                      equ 0008h
CLC1GLS3_G4D3N_POSN                      equ 0004h
CLC1GLS3_G4D3N_POSITION                  equ 0004h
CLC1GLS3_G4D3N_SIZE                      equ 0001h
CLC1GLS3_G4D3N_LENGTH                    equ 0001h
CLC1GLS3_G4D3N_MASK                      equ 0010h
CLC1GLS3_G4D3T_POSN                      equ 0005h
CLC1GLS3_G4D3T_POSITION                  equ 0005h
CLC1GLS3_G4D3T_SIZE                      equ 0001h
CLC1GLS3_G4D3T_LENGTH                    equ 0001h
CLC1GLS3_G4D3T_MASK                      equ 0020h
CLC1GLS3_G4D4N_POSN                      equ 0006h
CLC1GLS3_G4D4N_POSITION                  equ 0006h
CLC1GLS3_G4D4N_SIZE                      equ 0001h
CLC1GLS3_G4D4N_LENGTH                    equ 0001h
CLC1GLS3_G4D4N_MASK                      equ 0040h
CLC1GLS3_G4D4T_POSN                      equ 0007h
CLC1GLS3_G4D4T_POSITION                  equ 0007h
CLC1GLS3_G4D4T_SIZE                      equ 0001h
CLC1GLS3_G4D4T_LENGTH                    equ 0001h
CLC1GLS3_G4D4T_MASK                      equ 0080h

// Register: CLC2CON
#define CLC2CON CLC2CON
CLC2CON                                  equ 0F1Ah
// bitfield definitions
CLC2CON_LC2MODE_POSN                     equ 0000h
CLC2CON_LC2MODE_POSITION                 equ 0000h
CLC2CON_LC2MODE_SIZE                     equ 0003h
CLC2CON_LC2MODE_LENGTH                   equ 0003h
CLC2CON_LC2MODE_MASK                     equ 0007h
CLC2CON_LC2INTN_POSN                     equ 0003h
CLC2CON_LC2INTN_POSITION                 equ 0003h
CLC2CON_LC2INTN_SIZE                     equ 0001h
CLC2CON_LC2INTN_LENGTH                   equ 0001h
CLC2CON_LC2INTN_MASK                     equ 0008h
CLC2CON_LC2INTP_POSN                     equ 0004h
CLC2CON_LC2INTP_POSITION                 equ 0004h
CLC2CON_LC2INTP_SIZE                     equ 0001h
CLC2CON_LC2INTP_LENGTH                   equ 0001h
CLC2CON_LC2INTP_MASK                     equ 0010h
CLC2CON_LC2OUT_POSN                      equ 0005h
CLC2CON_LC2OUT_POSITION                  equ 0005h
CLC2CON_LC2OUT_SIZE                      equ 0001h
CLC2CON_LC2OUT_LENGTH                    equ 0001h
CLC2CON_LC2OUT_MASK                      equ 0020h
CLC2CON_LC2EN_POSN                       equ 0007h
CLC2CON_LC2EN_POSITION                   equ 0007h
CLC2CON_LC2EN_SIZE                       equ 0001h
CLC2CON_LC2EN_LENGTH                     equ 0001h
CLC2CON_LC2EN_MASK                       equ 0080h
CLC2CON_LC2MODE0_POSN                    equ 0000h
CLC2CON_LC2MODE0_POSITION                equ 0000h
CLC2CON_LC2MODE0_SIZE                    equ 0001h
CLC2CON_LC2MODE0_LENGTH                  equ 0001h
CLC2CON_LC2MODE0_MASK                    equ 0001h
CLC2CON_LC2MODE1_POSN                    equ 0001h
CLC2CON_LC2MODE1_POSITION                equ 0001h
CLC2CON_LC2MODE1_SIZE                    equ 0001h
CLC2CON_LC2MODE1_LENGTH                  equ 0001h
CLC2CON_LC2MODE1_MASK                    equ 0002h
CLC2CON_LC2MODE2_POSN                    equ 0002h
CLC2CON_LC2MODE2_POSITION                equ 0002h
CLC2CON_LC2MODE2_SIZE                    equ 0001h
CLC2CON_LC2MODE2_LENGTH                  equ 0001h
CLC2CON_LC2MODE2_MASK                    equ 0004h
CLC2CON_MODE_POSN                        equ 0000h
CLC2CON_MODE_POSITION                    equ 0000h
CLC2CON_MODE_SIZE                        equ 0003h
CLC2CON_MODE_LENGTH                      equ 0003h
CLC2CON_MODE_MASK                        equ 0007h
CLC2CON_INTN_POSN                        equ 0003h
CLC2CON_INTN_POSITION                    equ 0003h
CLC2CON_INTN_SIZE                        equ 0001h
CLC2CON_INTN_LENGTH                      equ 0001h
CLC2CON_INTN_MASK                        equ 0008h
CLC2CON_INTP_POSN                        equ 0004h
CLC2CON_INTP_POSITION                    equ 0004h
CLC2CON_INTP_SIZE                        equ 0001h
CLC2CON_INTP_LENGTH                      equ 0001h
CLC2CON_INTP_MASK                        equ 0010h
CLC2CON_OUT_POSN                         equ 0005h
CLC2CON_OUT_POSITION                     equ 0005h
CLC2CON_OUT_SIZE                         equ 0001h
CLC2CON_OUT_LENGTH                       equ 0001h
CLC2CON_OUT_MASK                         equ 0020h
CLC2CON_EN_POSN                          equ 0007h
CLC2CON_EN_POSITION                      equ 0007h
CLC2CON_EN_SIZE                          equ 0001h
CLC2CON_EN_LENGTH                        equ 0001h
CLC2CON_EN_MASK                          equ 0080h
CLC2CON_MODE0_POSN                       equ 0000h
CLC2CON_MODE0_POSITION                   equ 0000h
CLC2CON_MODE0_SIZE                       equ 0001h
CLC2CON_MODE0_LENGTH                     equ 0001h
CLC2CON_MODE0_MASK                       equ 0001h
CLC2CON_MODE1_POSN                       equ 0001h
CLC2CON_MODE1_POSITION                   equ 0001h
CLC2CON_MODE1_SIZE                       equ 0001h
CLC2CON_MODE1_LENGTH                     equ 0001h
CLC2CON_MODE1_MASK                       equ 0002h
CLC2CON_MODE2_POSN                       equ 0002h
CLC2CON_MODE2_POSITION                   equ 0002h
CLC2CON_MODE2_SIZE                       equ 0001h
CLC2CON_MODE2_LENGTH                     equ 0001h
CLC2CON_MODE2_MASK                       equ 0004h

// Register: CLC2POL
#define CLC2POL CLC2POL
CLC2POL                                  equ 0F1Bh
// bitfield definitions
CLC2POL_LC2G1POL_POSN                    equ 0000h
CLC2POL_LC2G1POL_POSITION                equ 0000h
CLC2POL_LC2G1POL_SIZE                    equ 0001h
CLC2POL_LC2G1POL_LENGTH                  equ 0001h
CLC2POL_LC2G1POL_MASK                    equ 0001h
CLC2POL_LC2G2POL_POSN                    equ 0001h
CLC2POL_LC2G2POL_POSITION                equ 0001h
CLC2POL_LC2G2POL_SIZE                    equ 0001h
CLC2POL_LC2G2POL_LENGTH                  equ 0001h
CLC2POL_LC2G2POL_MASK                    equ 0002h
CLC2POL_LC2G3POL_POSN                    equ 0002h
CLC2POL_LC2G3POL_POSITION                equ 0002h
CLC2POL_LC2G3POL_SIZE                    equ 0001h
CLC2POL_LC2G3POL_LENGTH                  equ 0001h
CLC2POL_LC2G3POL_MASK                    equ 0004h
CLC2POL_LC2G4POL_POSN                    equ 0003h
CLC2POL_LC2G4POL_POSITION                equ 0003h
CLC2POL_LC2G4POL_SIZE                    equ 0001h
CLC2POL_LC2G4POL_LENGTH                  equ 0001h
CLC2POL_LC2G4POL_MASK                    equ 0008h
CLC2POL_LC2POL_POSN                      equ 0007h
CLC2POL_LC2POL_POSITION                  equ 0007h
CLC2POL_LC2POL_SIZE                      equ 0001h
CLC2POL_LC2POL_LENGTH                    equ 0001h
CLC2POL_LC2POL_MASK                      equ 0080h
CLC2POL_G1POL_POSN                       equ 0000h
CLC2POL_G1POL_POSITION                   equ 0000h
CLC2POL_G1POL_SIZE                       equ 0001h
CLC2POL_G1POL_LENGTH                     equ 0001h
CLC2POL_G1POL_MASK                       equ 0001h
CLC2POL_G2POL_POSN                       equ 0001h
CLC2POL_G2POL_POSITION                   equ 0001h
CLC2POL_G2POL_SIZE                       equ 0001h
CLC2POL_G2POL_LENGTH                     equ 0001h
CLC2POL_G2POL_MASK                       equ 0002h
CLC2POL_G3POL_POSN                       equ 0002h
CLC2POL_G3POL_POSITION                   equ 0002h
CLC2POL_G3POL_SIZE                       equ 0001h
CLC2POL_G3POL_LENGTH                     equ 0001h
CLC2POL_G3POL_MASK                       equ 0004h
CLC2POL_G4POL_POSN                       equ 0003h
CLC2POL_G4POL_POSITION                   equ 0003h
CLC2POL_G4POL_SIZE                       equ 0001h
CLC2POL_G4POL_LENGTH                     equ 0001h
CLC2POL_G4POL_MASK                       equ 0008h
CLC2POL_POL_POSN                         equ 0007h
CLC2POL_POL_POSITION                     equ 0007h
CLC2POL_POL_SIZE                         equ 0001h
CLC2POL_POL_LENGTH                       equ 0001h
CLC2POL_POL_MASK                         equ 0080h

// Register: CLC2SEL0
#define CLC2SEL0 CLC2SEL0
CLC2SEL0                                 equ 0F1Ch
// bitfield definitions
CLC2SEL0_LC2D1S0_POSN                    equ 0000h
CLC2SEL0_LC2D1S0_POSITION                equ 0000h
CLC2SEL0_LC2D1S0_SIZE                    equ 0001h
CLC2SEL0_LC2D1S0_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S0_MASK                    equ 0001h
CLC2SEL0_LC2D1S1_POSN                    equ 0001h
CLC2SEL0_LC2D1S1_POSITION                equ 0001h
CLC2SEL0_LC2D1S1_SIZE                    equ 0001h
CLC2SEL0_LC2D1S1_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S1_MASK                    equ 0002h
CLC2SEL0_LC2D1S2_POSN                    equ 0002h
CLC2SEL0_LC2D1S2_POSITION                equ 0002h
CLC2SEL0_LC2D1S2_SIZE                    equ 0001h
CLC2SEL0_LC2D1S2_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S2_MASK                    equ 0004h
CLC2SEL0_LC2D1S3_POSN                    equ 0003h
CLC2SEL0_LC2D1S3_POSITION                equ 0003h
CLC2SEL0_LC2D1S3_SIZE                    equ 0001h
CLC2SEL0_LC2D1S3_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S3_MASK                    equ 0008h
CLC2SEL0_LC2D1S4_POSN                    equ 0004h
CLC2SEL0_LC2D1S4_POSITION                equ 0004h
CLC2SEL0_LC2D1S4_SIZE                    equ 0001h
CLC2SEL0_LC2D1S4_LENGTH                  equ 0001h
CLC2SEL0_LC2D1S4_MASK                    equ 0010h
CLC2SEL0_LC2D1S_POSN                     equ 0000h
CLC2SEL0_LC2D1S_POSITION                 equ 0000h
CLC2SEL0_LC2D1S_SIZE                     equ 0008h
CLC2SEL0_LC2D1S_LENGTH                   equ 0008h
CLC2SEL0_LC2D1S_MASK                     equ 00FFh
CLC2SEL0_D1S_POSN                        equ 0000h
CLC2SEL0_D1S_POSITION                    equ 0000h
CLC2SEL0_D1S_SIZE                        equ 0008h
CLC2SEL0_D1S_LENGTH                      equ 0008h
CLC2SEL0_D1S_MASK                        equ 00FFh
CLC2SEL0_D1S0_POSN                       equ 0000h
CLC2SEL0_D1S0_POSITION                   equ 0000h
CLC2SEL0_D1S0_SIZE                       equ 0001h
CLC2SEL0_D1S0_LENGTH                     equ 0001h
CLC2SEL0_D1S0_MASK                       equ 0001h
CLC2SEL0_D1S1_POSN                       equ 0001h
CLC2SEL0_D1S1_POSITION                   equ 0001h
CLC2SEL0_D1S1_SIZE                       equ 0001h
CLC2SEL0_D1S1_LENGTH                     equ 0001h
CLC2SEL0_D1S1_MASK                       equ 0002h
CLC2SEL0_D1S2_POSN                       equ 0002h
CLC2SEL0_D1S2_POSITION                   equ 0002h
CLC2SEL0_D1S2_SIZE                       equ 0001h
CLC2SEL0_D1S2_LENGTH                     equ 0001h
CLC2SEL0_D1S2_MASK                       equ 0004h
CLC2SEL0_D1S3_POSN                       equ 0003h
CLC2SEL0_D1S3_POSITION                   equ 0003h
CLC2SEL0_D1S3_SIZE                       equ 0001h
CLC2SEL0_D1S3_LENGTH                     equ 0001h
CLC2SEL0_D1S3_MASK                       equ 0008h
CLC2SEL0_D1S4_POSN                       equ 0004h
CLC2SEL0_D1S4_POSITION                   equ 0004h
CLC2SEL0_D1S4_SIZE                       equ 0001h
CLC2SEL0_D1S4_LENGTH                     equ 0001h
CLC2SEL0_D1S4_MASK                       equ 0010h

// Register: CLC2SEL1
#define CLC2SEL1 CLC2SEL1
CLC2SEL1                                 equ 0F1Dh
// bitfield definitions
CLC2SEL1_LC2D2S0_POSN                    equ 0000h
CLC2SEL1_LC2D2S0_POSITION                equ 0000h
CLC2SEL1_LC2D2S0_SIZE                    equ 0001h
CLC2SEL1_LC2D2S0_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S0_MASK                    equ 0001h
CLC2SEL1_LC2D2S1_POSN                    equ 0001h
CLC2SEL1_LC2D2S1_POSITION                equ 0001h
CLC2SEL1_LC2D2S1_SIZE                    equ 0001h
CLC2SEL1_LC2D2S1_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S1_MASK                    equ 0002h
CLC2SEL1_LC2D2S2_POSN                    equ 0002h
CLC2SEL1_LC2D2S2_POSITION                equ 0002h
CLC2SEL1_LC2D2S2_SIZE                    equ 0001h
CLC2SEL1_LC2D2S2_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S2_MASK                    equ 0004h
CLC2SEL1_LC2D2S3_POSN                    equ 0003h
CLC2SEL1_LC2D2S3_POSITION                equ 0003h
CLC2SEL1_LC2D2S3_SIZE                    equ 0001h
CLC2SEL1_LC2D2S3_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S3_MASK                    equ 0008h
CLC2SEL1_LC2D2S4_POSN                    equ 0004h
CLC2SEL1_LC2D2S4_POSITION                equ 0004h
CLC2SEL1_LC2D2S4_SIZE                    equ 0001h
CLC2SEL1_LC2D2S4_LENGTH                  equ 0001h
CLC2SEL1_LC2D2S4_MASK                    equ 0010h
CLC2SEL1_LC2D2S_POSN                     equ 0000h
CLC2SEL1_LC2D2S_POSITION                 equ 0000h
CLC2SEL1_LC2D2S_SIZE                     equ 0008h
CLC2SEL1_LC2D2S_LENGTH                   equ 0008h
CLC2SEL1_LC2D2S_MASK                     equ 00FFh
CLC2SEL1_D2S_POSN                        equ 0000h
CLC2SEL1_D2S_POSITION                    equ 0000h
CLC2SEL1_D2S_SIZE                        equ 0008h
CLC2SEL1_D2S_LENGTH                      equ 0008h
CLC2SEL1_D2S_MASK                        equ 00FFh
CLC2SEL1_D2S0_POSN                       equ 0000h
CLC2SEL1_D2S0_POSITION                   equ 0000h
CLC2SEL1_D2S0_SIZE                       equ 0001h
CLC2SEL1_D2S0_LENGTH                     equ 0001h
CLC2SEL1_D2S0_MASK                       equ 0001h
CLC2SEL1_D2S1_POSN                       equ 0001h
CLC2SEL1_D2S1_POSITION                   equ 0001h
CLC2SEL1_D2S1_SIZE                       equ 0001h
CLC2SEL1_D2S1_LENGTH                     equ 0001h
CLC2SEL1_D2S1_MASK                       equ 0002h
CLC2SEL1_D2S2_POSN                       equ 0002h
CLC2SEL1_D2S2_POSITION                   equ 0002h
CLC2SEL1_D2S2_SIZE                       equ 0001h
CLC2SEL1_D2S2_LENGTH                     equ 0001h
CLC2SEL1_D2S2_MASK                       equ 0004h
CLC2SEL1_D2S3_POSN                       equ 0003h
CLC2SEL1_D2S3_POSITION                   equ 0003h
CLC2SEL1_D2S3_SIZE                       equ 0001h
CLC2SEL1_D2S3_LENGTH                     equ 0001h
CLC2SEL1_D2S3_MASK                       equ 0008h
CLC2SEL1_D2S4_POSN                       equ 0004h
CLC2SEL1_D2S4_POSITION                   equ 0004h
CLC2SEL1_D2S4_SIZE                       equ 0001h
CLC2SEL1_D2S4_LENGTH                     equ 0001h
CLC2SEL1_D2S4_MASK                       equ 0010h

// Register: CLC2SEL2
#define CLC2SEL2 CLC2SEL2
CLC2SEL2                                 equ 0F1Eh
// bitfield definitions
CLC2SEL2_LC2D3S0_POSN                    equ 0000h
CLC2SEL2_LC2D3S0_POSITION                equ 0000h
CLC2SEL2_LC2D3S0_SIZE                    equ 0001h
CLC2SEL2_LC2D3S0_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S0_MASK                    equ 0001h
CLC2SEL2_LC2D3S1_POSN                    equ 0001h
CLC2SEL2_LC2D3S1_POSITION                equ 0001h
CLC2SEL2_LC2D3S1_SIZE                    equ 0001h
CLC2SEL2_LC2D3S1_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S1_MASK                    equ 0002h
CLC2SEL2_LC2D3S2_POSN                    equ 0002h
CLC2SEL2_LC2D3S2_POSITION                equ 0002h
CLC2SEL2_LC2D3S2_SIZE                    equ 0001h
CLC2SEL2_LC2D3S2_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S2_MASK                    equ 0004h
CLC2SEL2_LC2D3S3_POSN                    equ 0003h
CLC2SEL2_LC2D3S3_POSITION                equ 0003h
CLC2SEL2_LC2D3S3_SIZE                    equ 0001h
CLC2SEL2_LC2D3S3_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S3_MASK                    equ 0008h
CLC2SEL2_LC2D3S4_POSN                    equ 0004h
CLC2SEL2_LC2D3S4_POSITION                equ 0004h
CLC2SEL2_LC2D3S4_SIZE                    equ 0001h
CLC2SEL2_LC2D3S4_LENGTH                  equ 0001h
CLC2SEL2_LC2D3S4_MASK                    equ 0010h
CLC2SEL2_LC2D3S_POSN                     equ 0000h
CLC2SEL2_LC2D3S_POSITION                 equ 0000h
CLC2SEL2_LC2D3S_SIZE                     equ 0008h
CLC2SEL2_LC2D3S_LENGTH                   equ 0008h
CLC2SEL2_LC2D3S_MASK                     equ 00FFh
CLC2SEL2_D3S_POSN                        equ 0000h
CLC2SEL2_D3S_POSITION                    equ 0000h
CLC2SEL2_D3S_SIZE                        equ 0008h
CLC2SEL2_D3S_LENGTH                      equ 0008h
CLC2SEL2_D3S_MASK                        equ 00FFh
CLC2SEL2_D3S0_POSN                       equ 0000h
CLC2SEL2_D3S0_POSITION                   equ 0000h
CLC2SEL2_D3S0_SIZE                       equ 0001h
CLC2SEL2_D3S0_LENGTH                     equ 0001h
CLC2SEL2_D3S0_MASK                       equ 0001h
CLC2SEL2_D3S1_POSN                       equ 0001h
CLC2SEL2_D3S1_POSITION                   equ 0001h
CLC2SEL2_D3S1_SIZE                       equ 0001h
CLC2SEL2_D3S1_LENGTH                     equ 0001h
CLC2SEL2_D3S1_MASK                       equ 0002h
CLC2SEL2_D3S2_POSN                       equ 0002h
CLC2SEL2_D3S2_POSITION                   equ 0002h
CLC2SEL2_D3S2_SIZE                       equ 0001h
CLC2SEL2_D3S2_LENGTH                     equ 0001h
CLC2SEL2_D3S2_MASK                       equ 0004h
CLC2SEL2_D3S3_POSN                       equ 0003h
CLC2SEL2_D3S3_POSITION                   equ 0003h
CLC2SEL2_D3S3_SIZE                       equ 0001h
CLC2SEL2_D3S3_LENGTH                     equ 0001h
CLC2SEL2_D3S3_MASK                       equ 0008h
CLC2SEL2_D3S4_POSN                       equ 0004h
CLC2SEL2_D3S4_POSITION                   equ 0004h
CLC2SEL2_D3S4_SIZE                       equ 0001h
CLC2SEL2_D3S4_LENGTH                     equ 0001h
CLC2SEL2_D3S4_MASK                       equ 0010h

// Register: CLC2SEL3
#define CLC2SEL3 CLC2SEL3
CLC2SEL3                                 equ 0F1Fh
// bitfield definitions
CLC2SEL3_LC2D4S0_POSN                    equ 0000h
CLC2SEL3_LC2D4S0_POSITION                equ 0000h
CLC2SEL3_LC2D4S0_SIZE                    equ 0001h
CLC2SEL3_LC2D4S0_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S0_MASK                    equ 0001h
CLC2SEL3_LC2D4S1_POSN                    equ 0001h
CLC2SEL3_LC2D4S1_POSITION                equ 0001h
CLC2SEL3_LC2D4S1_SIZE                    equ 0001h
CLC2SEL3_LC2D4S1_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S1_MASK                    equ 0002h
CLC2SEL3_LC2D4S2_POSN                    equ 0002h
CLC2SEL3_LC2D4S2_POSITION                equ 0002h
CLC2SEL3_LC2D4S2_SIZE                    equ 0001h
CLC2SEL3_LC2D4S2_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S2_MASK                    equ 0004h
CLC2SEL3_LC2D4S3_POSN                    equ 0003h
CLC2SEL3_LC2D4S3_POSITION                equ 0003h
CLC2SEL3_LC2D4S3_SIZE                    equ 0001h
CLC2SEL3_LC2D4S3_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S3_MASK                    equ 0008h
CLC2SEL3_LC2D4S4_POSN                    equ 0004h
CLC2SEL3_LC2D4S4_POSITION                equ 0004h
CLC2SEL3_LC2D4S4_SIZE                    equ 0001h
CLC2SEL3_LC2D4S4_LENGTH                  equ 0001h
CLC2SEL3_LC2D4S4_MASK                    equ 0010h
CLC2SEL3_LC2D4S_POSN                     equ 0000h
CLC2SEL3_LC2D4S_POSITION                 equ 0000h
CLC2SEL3_LC2D4S_SIZE                     equ 0008h
CLC2SEL3_LC2D4S_LENGTH                   equ 0008h
CLC2SEL3_LC2D4S_MASK                     equ 00FFh
CLC2SEL3_D4S_POSN                        equ 0000h
CLC2SEL3_D4S_POSITION                    equ 0000h
CLC2SEL3_D4S_SIZE                        equ 0008h
CLC2SEL3_D4S_LENGTH                      equ 0008h
CLC2SEL3_D4S_MASK                        equ 00FFh
CLC2SEL3_D4S0_POSN                       equ 0000h
CLC2SEL3_D4S0_POSITION                   equ 0000h
CLC2SEL3_D4S0_SIZE                       equ 0001h
CLC2SEL3_D4S0_LENGTH                     equ 0001h
CLC2SEL3_D4S0_MASK                       equ 0001h
CLC2SEL3_D4S1_POSN                       equ 0001h
CLC2SEL3_D4S1_POSITION                   equ 0001h
CLC2SEL3_D4S1_SIZE                       equ 0001h
CLC2SEL3_D4S1_LENGTH                     equ 0001h
CLC2SEL3_D4S1_MASK                       equ 0002h
CLC2SEL3_D4S2_POSN                       equ 0002h
CLC2SEL3_D4S2_POSITION                   equ 0002h
CLC2SEL3_D4S2_SIZE                       equ 0001h
CLC2SEL3_D4S2_LENGTH                     equ 0001h
CLC2SEL3_D4S2_MASK                       equ 0004h
CLC2SEL3_D4S3_POSN                       equ 0003h
CLC2SEL3_D4S3_POSITION                   equ 0003h
CLC2SEL3_D4S3_SIZE                       equ 0001h
CLC2SEL3_D4S3_LENGTH                     equ 0001h
CLC2SEL3_D4S3_MASK                       equ 0008h
CLC2SEL3_D4S4_POSN                       equ 0004h
CLC2SEL3_D4S4_POSITION                   equ 0004h
CLC2SEL3_D4S4_SIZE                       equ 0001h
CLC2SEL3_D4S4_LENGTH                     equ 0001h
CLC2SEL3_D4S4_MASK                       equ 0010h

// Register: CLC2GLS0
#define CLC2GLS0 CLC2GLS0
CLC2GLS0                                 equ 0F20h
// bitfield definitions
CLC2GLS0_LC2G1D1N_POSN                   equ 0000h
CLC2GLS0_LC2G1D1N_POSITION               equ 0000h
CLC2GLS0_LC2G1D1N_SIZE                   equ 0001h
CLC2GLS0_LC2G1D1N_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D1N_MASK                   equ 0001h
CLC2GLS0_LC2G1D1T_POSN                   equ 0001h
CLC2GLS0_LC2G1D1T_POSITION               equ 0001h
CLC2GLS0_LC2G1D1T_SIZE                   equ 0001h
CLC2GLS0_LC2G1D1T_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D1T_MASK                   equ 0002h
CLC2GLS0_LC2G1D2N_POSN                   equ 0002h
CLC2GLS0_LC2G1D2N_POSITION               equ 0002h
CLC2GLS0_LC2G1D2N_SIZE                   equ 0001h
CLC2GLS0_LC2G1D2N_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D2N_MASK                   equ 0004h
CLC2GLS0_LC2G1D2T_POSN                   equ 0003h
CLC2GLS0_LC2G1D2T_POSITION               equ 0003h
CLC2GLS0_LC2G1D2T_SIZE                   equ 0001h
CLC2GLS0_LC2G1D2T_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D2T_MASK                   equ 0008h
CLC2GLS0_LC2G1D3N_POSN                   equ 0004h
CLC2GLS0_LC2G1D3N_POSITION               equ 0004h
CLC2GLS0_LC2G1D3N_SIZE                   equ 0001h
CLC2GLS0_LC2G1D3N_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D3N_MASK                   equ 0010h
CLC2GLS0_LC2G1D3T_POSN                   equ 0005h
CLC2GLS0_LC2G1D3T_POSITION               equ 0005h
CLC2GLS0_LC2G1D3T_SIZE                   equ 0001h
CLC2GLS0_LC2G1D3T_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D3T_MASK                   equ 0020h
CLC2GLS0_LC2G1D4N_POSN                   equ 0006h
CLC2GLS0_LC2G1D4N_POSITION               equ 0006h
CLC2GLS0_LC2G1D4N_SIZE                   equ 0001h
CLC2GLS0_LC2G1D4N_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D4N_MASK                   equ 0040h
CLC2GLS0_LC2G1D4T_POSN                   equ 0007h
CLC2GLS0_LC2G1D4T_POSITION               equ 0007h
CLC2GLS0_LC2G1D4T_SIZE                   equ 0001h
CLC2GLS0_LC2G1D4T_LENGTH                 equ 0001h
CLC2GLS0_LC2G1D4T_MASK                   equ 0080h
CLC2GLS0_D1N_POSN                        equ 0000h
CLC2GLS0_D1N_POSITION                    equ 0000h
CLC2GLS0_D1N_SIZE                        equ 0001h
CLC2GLS0_D1N_LENGTH                      equ 0001h
CLC2GLS0_D1N_MASK                        equ 0001h
CLC2GLS0_D1T_POSN                        equ 0001h
CLC2GLS0_D1T_POSITION                    equ 0001h
CLC2GLS0_D1T_SIZE                        equ 0001h
CLC2GLS0_D1T_LENGTH                      equ 0001h
CLC2GLS0_D1T_MASK                        equ 0002h
CLC2GLS0_D2N_POSN                        equ 0002h
CLC2GLS0_D2N_POSITION                    equ 0002h
CLC2GLS0_D2N_SIZE                        equ 0001h
CLC2GLS0_D2N_LENGTH                      equ 0001h
CLC2GLS0_D2N_MASK                        equ 0004h
CLC2GLS0_D2T_POSN                        equ 0003h
CLC2GLS0_D2T_POSITION                    equ 0003h
CLC2GLS0_D2T_SIZE                        equ 0001h
CLC2GLS0_D2T_LENGTH                      equ 0001h
CLC2GLS0_D2T_MASK                        equ 0008h
CLC2GLS0_D3N_POSN                        equ 0004h
CLC2GLS0_D3N_POSITION                    equ 0004h
CLC2GLS0_D3N_SIZE                        equ 0001h
CLC2GLS0_D3N_LENGTH                      equ 0001h
CLC2GLS0_D3N_MASK                        equ 0010h
CLC2GLS0_D3T_POSN                        equ 0005h
CLC2GLS0_D3T_POSITION                    equ 0005h
CLC2GLS0_D3T_SIZE                        equ 0001h
CLC2GLS0_D3T_LENGTH                      equ 0001h
CLC2GLS0_D3T_MASK                        equ 0020h
CLC2GLS0_D4N_POSN                        equ 0006h
CLC2GLS0_D4N_POSITION                    equ 0006h
CLC2GLS0_D4N_SIZE                        equ 0001h
CLC2GLS0_D4N_LENGTH                      equ 0001h
CLC2GLS0_D4N_MASK                        equ 0040h
CLC2GLS0_D4T_POSN                        equ 0007h
CLC2GLS0_D4T_POSITION                    equ 0007h
CLC2GLS0_D4T_SIZE                        equ 0001h
CLC2GLS0_D4T_LENGTH                      equ 0001h
CLC2GLS0_D4T_MASK                        equ 0080h

// Register: CLC2GLS1
#define CLC2GLS1 CLC2GLS1
CLC2GLS1                                 equ 0F21h
// bitfield definitions
CLC2GLS1_LC2G2D1N_POSN                   equ 0000h
CLC2GLS1_LC2G2D1N_POSITION               equ 0000h
CLC2GLS1_LC2G2D1N_SIZE                   equ 0001h
CLC2GLS1_LC2G2D1N_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D1N_MASK                   equ 0001h
CLC2GLS1_LC2G2D1T_POSN                   equ 0001h
CLC2GLS1_LC2G2D1T_POSITION               equ 0001h
CLC2GLS1_LC2G2D1T_SIZE                   equ 0001h
CLC2GLS1_LC2G2D1T_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D1T_MASK                   equ 0002h
CLC2GLS1_LC2G2D2N_POSN                   equ 0002h
CLC2GLS1_LC2G2D2N_POSITION               equ 0002h
CLC2GLS1_LC2G2D2N_SIZE                   equ 0001h
CLC2GLS1_LC2G2D2N_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D2N_MASK                   equ 0004h
CLC2GLS1_LC2G2D2T_POSN                   equ 0003h
CLC2GLS1_LC2G2D2T_POSITION               equ 0003h
CLC2GLS1_LC2G2D2T_SIZE                   equ 0001h
CLC2GLS1_LC2G2D2T_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D2T_MASK                   equ 0008h
CLC2GLS1_LC2G2D3N_POSN                   equ 0004h
CLC2GLS1_LC2G2D3N_POSITION               equ 0004h
CLC2GLS1_LC2G2D3N_SIZE                   equ 0001h
CLC2GLS1_LC2G2D3N_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D3N_MASK                   equ 0010h
CLC2GLS1_LC2G2D3T_POSN                   equ 0005h
CLC2GLS1_LC2G2D3T_POSITION               equ 0005h
CLC2GLS1_LC2G2D3T_SIZE                   equ 0001h
CLC2GLS1_LC2G2D3T_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D3T_MASK                   equ 0020h
CLC2GLS1_LC2G2D4N_POSN                   equ 0006h
CLC2GLS1_LC2G2D4N_POSITION               equ 0006h
CLC2GLS1_LC2G2D4N_SIZE                   equ 0001h
CLC2GLS1_LC2G2D4N_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D4N_MASK                   equ 0040h
CLC2GLS1_LC2G2D4T_POSN                   equ 0007h
CLC2GLS1_LC2G2D4T_POSITION               equ 0007h
CLC2GLS1_LC2G2D4T_SIZE                   equ 0001h
CLC2GLS1_LC2G2D4T_LENGTH                 equ 0001h
CLC2GLS1_LC2G2D4T_MASK                   equ 0080h
CLC2GLS1_D1N_POSN                        equ 0000h
CLC2GLS1_D1N_POSITION                    equ 0000h
CLC2GLS1_D1N_SIZE                        equ 0001h
CLC2GLS1_D1N_LENGTH                      equ 0001h
CLC2GLS1_D1N_MASK                        equ 0001h
CLC2GLS1_D1T_POSN                        equ 0001h
CLC2GLS1_D1T_POSITION                    equ 0001h
CLC2GLS1_D1T_SIZE                        equ 0001h
CLC2GLS1_D1T_LENGTH                      equ 0001h
CLC2GLS1_D1T_MASK                        equ 0002h
CLC2GLS1_D2N_POSN                        equ 0002h
CLC2GLS1_D2N_POSITION                    equ 0002h
CLC2GLS1_D2N_SIZE                        equ 0001h
CLC2GLS1_D2N_LENGTH                      equ 0001h
CLC2GLS1_D2N_MASK                        equ 0004h
CLC2GLS1_D2T_POSN                        equ 0003h
CLC2GLS1_D2T_POSITION                    equ 0003h
CLC2GLS1_D2T_SIZE                        equ 0001h
CLC2GLS1_D2T_LENGTH                      equ 0001h
CLC2GLS1_D2T_MASK                        equ 0008h
CLC2GLS1_D3N_POSN                        equ 0004h
CLC2GLS1_D3N_POSITION                    equ 0004h
CLC2GLS1_D3N_SIZE                        equ 0001h
CLC2GLS1_D3N_LENGTH                      equ 0001h
CLC2GLS1_D3N_MASK                        equ 0010h
CLC2GLS1_D3T_POSN                        equ 0005h
CLC2GLS1_D3T_POSITION                    equ 0005h
CLC2GLS1_D3T_SIZE                        equ 0001h
CLC2GLS1_D3T_LENGTH                      equ 0001h
CLC2GLS1_D3T_MASK                        equ 0020h
CLC2GLS1_D4N_POSN                        equ 0006h
CLC2GLS1_D4N_POSITION                    equ 0006h
CLC2GLS1_D4N_SIZE                        equ 0001h
CLC2GLS1_D4N_LENGTH                      equ 0001h
CLC2GLS1_D4N_MASK                        equ 0040h
CLC2GLS1_D4T_POSN                        equ 0007h
CLC2GLS1_D4T_POSITION                    equ 0007h
CLC2GLS1_D4T_SIZE                        equ 0001h
CLC2GLS1_D4T_LENGTH                      equ 0001h
CLC2GLS1_D4T_MASK                        equ 0080h

// Register: CLC2GLS2
#define CLC2GLS2 CLC2GLS2
CLC2GLS2                                 equ 0F22h
// bitfield definitions
CLC2GLS2_LC2G3D1N_POSN                   equ 0000h
CLC2GLS2_LC2G3D1N_POSITION               equ 0000h
CLC2GLS2_LC2G3D1N_SIZE                   equ 0001h
CLC2GLS2_LC2G3D1N_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D1N_MASK                   equ 0001h
CLC2GLS2_LC2G3D1T_POSN                   equ 0001h
CLC2GLS2_LC2G3D1T_POSITION               equ 0001h
CLC2GLS2_LC2G3D1T_SIZE                   equ 0001h
CLC2GLS2_LC2G3D1T_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D1T_MASK                   equ 0002h
CLC2GLS2_LC2G3D2N_POSN                   equ 0002h
CLC2GLS2_LC2G3D2N_POSITION               equ 0002h
CLC2GLS2_LC2G3D2N_SIZE                   equ 0001h
CLC2GLS2_LC2G3D2N_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D2N_MASK                   equ 0004h
CLC2GLS2_LC2G3D2T_POSN                   equ 0003h
CLC2GLS2_LC2G3D2T_POSITION               equ 0003h
CLC2GLS2_LC2G3D2T_SIZE                   equ 0001h
CLC2GLS2_LC2G3D2T_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D2T_MASK                   equ 0008h
CLC2GLS2_LC2G3D3N_POSN                   equ 0004h
CLC2GLS2_LC2G3D3N_POSITION               equ 0004h
CLC2GLS2_LC2G3D3N_SIZE                   equ 0001h
CLC2GLS2_LC2G3D3N_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D3N_MASK                   equ 0010h
CLC2GLS2_LC2G3D3T_POSN                   equ 0005h
CLC2GLS2_LC2G3D3T_POSITION               equ 0005h
CLC2GLS2_LC2G3D3T_SIZE                   equ 0001h
CLC2GLS2_LC2G3D3T_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D3T_MASK                   equ 0020h
CLC2GLS2_LC2G3D4N_POSN                   equ 0006h
CLC2GLS2_LC2G3D4N_POSITION               equ 0006h
CLC2GLS2_LC2G3D4N_SIZE                   equ 0001h
CLC2GLS2_LC2G3D4N_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D4N_MASK                   equ 0040h
CLC2GLS2_LC2G3D4T_POSN                   equ 0007h
CLC2GLS2_LC2G3D4T_POSITION               equ 0007h
CLC2GLS2_LC2G3D4T_SIZE                   equ 0001h
CLC2GLS2_LC2G3D4T_LENGTH                 equ 0001h
CLC2GLS2_LC2G3D4T_MASK                   equ 0080h
CLC2GLS2_D1N_POSN                        equ 0000h
CLC2GLS2_D1N_POSITION                    equ 0000h
CLC2GLS2_D1N_SIZE                        equ 0001h
CLC2GLS2_D1N_LENGTH                      equ 0001h
CLC2GLS2_D1N_MASK                        equ 0001h
CLC2GLS2_D1T_POSN                        equ 0001h
CLC2GLS2_D1T_POSITION                    equ 0001h
CLC2GLS2_D1T_SIZE                        equ 0001h
CLC2GLS2_D1T_LENGTH                      equ 0001h
CLC2GLS2_D1T_MASK                        equ 0002h
CLC2GLS2_D2N_POSN                        equ 0002h
CLC2GLS2_D2N_POSITION                    equ 0002h
CLC2GLS2_D2N_SIZE                        equ 0001h
CLC2GLS2_D2N_LENGTH                      equ 0001h
CLC2GLS2_D2N_MASK                        equ 0004h
CLC2GLS2_D2T_POSN                        equ 0003h
CLC2GLS2_D2T_POSITION                    equ 0003h
CLC2GLS2_D2T_SIZE                        equ 0001h
CLC2GLS2_D2T_LENGTH                      equ 0001h
CLC2GLS2_D2T_MASK                        equ 0008h
CLC2GLS2_D3N_POSN                        equ 0004h
CLC2GLS2_D3N_POSITION                    equ 0004h
CLC2GLS2_D3N_SIZE                        equ 0001h
CLC2GLS2_D3N_LENGTH                      equ 0001h
CLC2GLS2_D3N_MASK                        equ 0010h
CLC2GLS2_D3T_POSN                        equ 0005h
CLC2GLS2_D3T_POSITION                    equ 0005h
CLC2GLS2_D3T_SIZE                        equ 0001h
CLC2GLS2_D3T_LENGTH                      equ 0001h
CLC2GLS2_D3T_MASK                        equ 0020h
CLC2GLS2_D4N_POSN                        equ 0006h
CLC2GLS2_D4N_POSITION                    equ 0006h
CLC2GLS2_D4N_SIZE                        equ 0001h
CLC2GLS2_D4N_LENGTH                      equ 0001h
CLC2GLS2_D4N_MASK                        equ 0040h
CLC2GLS2_D4T_POSN                        equ 0007h
CLC2GLS2_D4T_POSITION                    equ 0007h
CLC2GLS2_D4T_SIZE                        equ 0001h
CLC2GLS2_D4T_LENGTH                      equ 0001h
CLC2GLS2_D4T_MASK                        equ 0080h

// Register: CLC2GLS3
#define CLC2GLS3 CLC2GLS3
CLC2GLS3                                 equ 0F23h
// bitfield definitions
CLC2GLS3_LC2G4D1N_POSN                   equ 0000h
CLC2GLS3_LC2G4D1N_POSITION               equ 0000h
CLC2GLS3_LC2G4D1N_SIZE                   equ 0001h
CLC2GLS3_LC2G4D1N_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D1N_MASK                   equ 0001h
CLC2GLS3_LC2G4D1T_POSN                   equ 0001h
CLC2GLS3_LC2G4D1T_POSITION               equ 0001h
CLC2GLS3_LC2G4D1T_SIZE                   equ 0001h
CLC2GLS3_LC2G4D1T_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D1T_MASK                   equ 0002h
CLC2GLS3_LC2G4D2N_POSN                   equ 0002h
CLC2GLS3_LC2G4D2N_POSITION               equ 0002h
CLC2GLS3_LC2G4D2N_SIZE                   equ 0001h
CLC2GLS3_LC2G4D2N_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D2N_MASK                   equ 0004h
CLC2GLS3_LC2G4D2T_POSN                   equ 0003h
CLC2GLS3_LC2G4D2T_POSITION               equ 0003h
CLC2GLS3_LC2G4D2T_SIZE                   equ 0001h
CLC2GLS3_LC2G4D2T_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D2T_MASK                   equ 0008h
CLC2GLS3_LC2G4D3N_POSN                   equ 0004h
CLC2GLS3_LC2G4D3N_POSITION               equ 0004h
CLC2GLS3_LC2G4D3N_SIZE                   equ 0001h
CLC2GLS3_LC2G4D3N_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D3N_MASK                   equ 0010h
CLC2GLS3_LC2G4D3T_POSN                   equ 0005h
CLC2GLS3_LC2G4D3T_POSITION               equ 0005h
CLC2GLS3_LC2G4D3T_SIZE                   equ 0001h
CLC2GLS3_LC2G4D3T_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D3T_MASK                   equ 0020h
CLC2GLS3_LC2G4D4N_POSN                   equ 0006h
CLC2GLS3_LC2G4D4N_POSITION               equ 0006h
CLC2GLS3_LC2G4D4N_SIZE                   equ 0001h
CLC2GLS3_LC2G4D4N_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D4N_MASK                   equ 0040h
CLC2GLS3_LC2G4D4T_POSN                   equ 0007h
CLC2GLS3_LC2G4D4T_POSITION               equ 0007h
CLC2GLS3_LC2G4D4T_SIZE                   equ 0001h
CLC2GLS3_LC2G4D4T_LENGTH                 equ 0001h
CLC2GLS3_LC2G4D4T_MASK                   equ 0080h
CLC2GLS3_G4D1N_POSN                      equ 0000h
CLC2GLS3_G4D1N_POSITION                  equ 0000h
CLC2GLS3_G4D1N_SIZE                      equ 0001h
CLC2GLS3_G4D1N_LENGTH                    equ 0001h
CLC2GLS3_G4D1N_MASK                      equ 0001h
CLC2GLS3_G4D1T_POSN                      equ 0001h
CLC2GLS3_G4D1T_POSITION                  equ 0001h
CLC2GLS3_G4D1T_SIZE                      equ 0001h
CLC2GLS3_G4D1T_LENGTH                    equ 0001h
CLC2GLS3_G4D1T_MASK                      equ 0002h
CLC2GLS3_G4D2N_POSN                      equ 0002h
CLC2GLS3_G4D2N_POSITION                  equ 0002h
CLC2GLS3_G4D2N_SIZE                      equ 0001h
CLC2GLS3_G4D2N_LENGTH                    equ 0001h
CLC2GLS3_G4D2N_MASK                      equ 0004h
CLC2GLS3_G4D2T_POSN                      equ 0003h
CLC2GLS3_G4D2T_POSITION                  equ 0003h
CLC2GLS3_G4D2T_SIZE                      equ 0001h
CLC2GLS3_G4D2T_LENGTH                    equ 0001h
CLC2GLS3_G4D2T_MASK                      equ 0008h
CLC2GLS3_G4D3N_POSN                      equ 0004h
CLC2GLS3_G4D3N_POSITION                  equ 0004h
CLC2GLS3_G4D3N_SIZE                      equ 0001h
CLC2GLS3_G4D3N_LENGTH                    equ 0001h
CLC2GLS3_G4D3N_MASK                      equ 0010h
CLC2GLS3_G4D3T_POSN                      equ 0005h
CLC2GLS3_G4D3T_POSITION                  equ 0005h
CLC2GLS3_G4D3T_SIZE                      equ 0001h
CLC2GLS3_G4D3T_LENGTH                    equ 0001h
CLC2GLS3_G4D3T_MASK                      equ 0020h
CLC2GLS3_G4D4N_POSN                      equ 0006h
CLC2GLS3_G4D4N_POSITION                  equ 0006h
CLC2GLS3_G4D4N_SIZE                      equ 0001h
CLC2GLS3_G4D4N_LENGTH                    equ 0001h
CLC2GLS3_G4D4N_MASK                      equ 0040h
CLC2GLS3_G4D4T_POSN                      equ 0007h
CLC2GLS3_G4D4T_POSITION                  equ 0007h
CLC2GLS3_G4D4T_SIZE                      equ 0001h
CLC2GLS3_G4D4T_LENGTH                    equ 0001h
CLC2GLS3_G4D4T_MASK                      equ 0080h

// Register: CLC3CON
#define CLC3CON CLC3CON
CLC3CON                                  equ 0F24h
// bitfield definitions
CLC3CON_LC3MODE_POSN                     equ 0000h
CLC3CON_LC3MODE_POSITION                 equ 0000h
CLC3CON_LC3MODE_SIZE                     equ 0003h
CLC3CON_LC3MODE_LENGTH                   equ 0003h
CLC3CON_LC3MODE_MASK                     equ 0007h
CLC3CON_LC3INTN_POSN                     equ 0003h
CLC3CON_LC3INTN_POSITION                 equ 0003h
CLC3CON_LC3INTN_SIZE                     equ 0001h
CLC3CON_LC3INTN_LENGTH                   equ 0001h
CLC3CON_LC3INTN_MASK                     equ 0008h
CLC3CON_LC3INTP_POSN                     equ 0004h
CLC3CON_LC3INTP_POSITION                 equ 0004h
CLC3CON_LC3INTP_SIZE                     equ 0001h
CLC3CON_LC3INTP_LENGTH                   equ 0001h
CLC3CON_LC3INTP_MASK                     equ 0010h
CLC3CON_LC3OUT_POSN                      equ 0005h
CLC3CON_LC3OUT_POSITION                  equ 0005h
CLC3CON_LC3OUT_SIZE                      equ 0001h
CLC3CON_LC3OUT_LENGTH                    equ 0001h
CLC3CON_LC3OUT_MASK                      equ 0020h
CLC3CON_LC3EN_POSN                       equ 0007h
CLC3CON_LC3EN_POSITION                   equ 0007h
CLC3CON_LC3EN_SIZE                       equ 0001h
CLC3CON_LC3EN_LENGTH                     equ 0001h
CLC3CON_LC3EN_MASK                       equ 0080h
CLC3CON_LC3MODE0_POSN                    equ 0000h
CLC3CON_LC3MODE0_POSITION                equ 0000h
CLC3CON_LC3MODE0_SIZE                    equ 0001h
CLC3CON_LC3MODE0_LENGTH                  equ 0001h
CLC3CON_LC3MODE0_MASK                    equ 0001h
CLC3CON_LC3MODE1_POSN                    equ 0001h
CLC3CON_LC3MODE1_POSITION                equ 0001h
CLC3CON_LC3MODE1_SIZE                    equ 0001h
CLC3CON_LC3MODE1_LENGTH                  equ 0001h
CLC3CON_LC3MODE1_MASK                    equ 0002h
CLC3CON_LC3MODE2_POSN                    equ 0002h
CLC3CON_LC3MODE2_POSITION                equ 0002h
CLC3CON_LC3MODE2_SIZE                    equ 0001h
CLC3CON_LC3MODE2_LENGTH                  equ 0001h
CLC3CON_LC3MODE2_MASK                    equ 0004h
CLC3CON_MODE_POSN                        equ 0000h
CLC3CON_MODE_POSITION                    equ 0000h
CLC3CON_MODE_SIZE                        equ 0003h
CLC3CON_MODE_LENGTH                      equ 0003h
CLC3CON_MODE_MASK                        equ 0007h
CLC3CON_INTN_POSN                        equ 0003h
CLC3CON_INTN_POSITION                    equ 0003h
CLC3CON_INTN_SIZE                        equ 0001h
CLC3CON_INTN_LENGTH                      equ 0001h
CLC3CON_INTN_MASK                        equ 0008h
CLC3CON_INTP_POSN                        equ 0004h
CLC3CON_INTP_POSITION                    equ 0004h
CLC3CON_INTP_SIZE                        equ 0001h
CLC3CON_INTP_LENGTH                      equ 0001h
CLC3CON_INTP_MASK                        equ 0010h
CLC3CON_OUT_POSN                         equ 0005h
CLC3CON_OUT_POSITION                     equ 0005h
CLC3CON_OUT_SIZE                         equ 0001h
CLC3CON_OUT_LENGTH                       equ 0001h
CLC3CON_OUT_MASK                         equ 0020h
CLC3CON_EN_POSN                          equ 0007h
CLC3CON_EN_POSITION                      equ 0007h
CLC3CON_EN_SIZE                          equ 0001h
CLC3CON_EN_LENGTH                        equ 0001h
CLC3CON_EN_MASK                          equ 0080h
CLC3CON_MODE0_POSN                       equ 0000h
CLC3CON_MODE0_POSITION                   equ 0000h
CLC3CON_MODE0_SIZE                       equ 0001h
CLC3CON_MODE0_LENGTH                     equ 0001h
CLC3CON_MODE0_MASK                       equ 0001h
CLC3CON_MODE1_POSN                       equ 0001h
CLC3CON_MODE1_POSITION                   equ 0001h
CLC3CON_MODE1_SIZE                       equ 0001h
CLC3CON_MODE1_LENGTH                     equ 0001h
CLC3CON_MODE1_MASK                       equ 0002h
CLC3CON_MODE2_POSN                       equ 0002h
CLC3CON_MODE2_POSITION                   equ 0002h
CLC3CON_MODE2_SIZE                       equ 0001h
CLC3CON_MODE2_LENGTH                     equ 0001h
CLC3CON_MODE2_MASK                       equ 0004h

// Register: CLC3POL
#define CLC3POL CLC3POL
CLC3POL                                  equ 0F25h
// bitfield definitions
CLC3POL_LC3G1POL_POSN                    equ 0000h
CLC3POL_LC3G1POL_POSITION                equ 0000h
CLC3POL_LC3G1POL_SIZE                    equ 0001h
CLC3POL_LC3G1POL_LENGTH                  equ 0001h
CLC3POL_LC3G1POL_MASK                    equ 0001h
CLC3POL_LC3G2POL_POSN                    equ 0001h
CLC3POL_LC3G2POL_POSITION                equ 0001h
CLC3POL_LC3G2POL_SIZE                    equ 0001h
CLC3POL_LC3G2POL_LENGTH                  equ 0001h
CLC3POL_LC3G2POL_MASK                    equ 0002h
CLC3POL_LC3G3POL_POSN                    equ 0002h
CLC3POL_LC3G3POL_POSITION                equ 0002h
CLC3POL_LC3G3POL_SIZE                    equ 0001h
CLC3POL_LC3G3POL_LENGTH                  equ 0001h
CLC3POL_LC3G3POL_MASK                    equ 0004h
CLC3POL_LC3G4POL_POSN                    equ 0003h
CLC3POL_LC3G4POL_POSITION                equ 0003h
CLC3POL_LC3G4POL_SIZE                    equ 0001h
CLC3POL_LC3G4POL_LENGTH                  equ 0001h
CLC3POL_LC3G4POL_MASK                    equ 0008h
CLC3POL_LC3POL_POSN                      equ 0007h
CLC3POL_LC3POL_POSITION                  equ 0007h
CLC3POL_LC3POL_SIZE                      equ 0001h
CLC3POL_LC3POL_LENGTH                    equ 0001h
CLC3POL_LC3POL_MASK                      equ 0080h
CLC3POL_G1POL_POSN                       equ 0000h
CLC3POL_G1POL_POSITION                   equ 0000h
CLC3POL_G1POL_SIZE                       equ 0001h
CLC3POL_G1POL_LENGTH                     equ 0001h
CLC3POL_G1POL_MASK                       equ 0001h
CLC3POL_G2POL_POSN                       equ 0001h
CLC3POL_G2POL_POSITION                   equ 0001h
CLC3POL_G2POL_SIZE                       equ 0001h
CLC3POL_G2POL_LENGTH                     equ 0001h
CLC3POL_G2POL_MASK                       equ 0002h
CLC3POL_G3POL_POSN                       equ 0002h
CLC3POL_G3POL_POSITION                   equ 0002h
CLC3POL_G3POL_SIZE                       equ 0001h
CLC3POL_G3POL_LENGTH                     equ 0001h
CLC3POL_G3POL_MASK                       equ 0004h
CLC3POL_G4POL_POSN                       equ 0003h
CLC3POL_G4POL_POSITION                   equ 0003h
CLC3POL_G4POL_SIZE                       equ 0001h
CLC3POL_G4POL_LENGTH                     equ 0001h
CLC3POL_G4POL_MASK                       equ 0008h
CLC3POL_POL_POSN                         equ 0007h
CLC3POL_POL_POSITION                     equ 0007h
CLC3POL_POL_SIZE                         equ 0001h
CLC3POL_POL_LENGTH                       equ 0001h
CLC3POL_POL_MASK                         equ 0080h

// Register: CLC3SEL0
#define CLC3SEL0 CLC3SEL0
CLC3SEL0                                 equ 0F26h
// bitfield definitions
CLC3SEL0_LC3D1S0_POSN                    equ 0000h
CLC3SEL0_LC3D1S0_POSITION                equ 0000h
CLC3SEL0_LC3D1S0_SIZE                    equ 0001h
CLC3SEL0_LC3D1S0_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S0_MASK                    equ 0001h
CLC3SEL0_LC3D1S1_POSN                    equ 0001h
CLC3SEL0_LC3D1S1_POSITION                equ 0001h
CLC3SEL0_LC3D1S1_SIZE                    equ 0001h
CLC3SEL0_LC3D1S1_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S1_MASK                    equ 0002h
CLC3SEL0_LC3D1S2_POSN                    equ 0002h
CLC3SEL0_LC3D1S2_POSITION                equ 0002h
CLC3SEL0_LC3D1S2_SIZE                    equ 0001h
CLC3SEL0_LC3D1S2_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S2_MASK                    equ 0004h
CLC3SEL0_LC3D1S3_POSN                    equ 0003h
CLC3SEL0_LC3D1S3_POSITION                equ 0003h
CLC3SEL0_LC3D1S3_SIZE                    equ 0001h
CLC3SEL0_LC3D1S3_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S3_MASK                    equ 0008h
CLC3SEL0_LC3D1S4_POSN                    equ 0004h
CLC3SEL0_LC3D1S4_POSITION                equ 0004h
CLC3SEL0_LC3D1S4_SIZE                    equ 0001h
CLC3SEL0_LC3D1S4_LENGTH                  equ 0001h
CLC3SEL0_LC3D1S4_MASK                    equ 0010h
CLC3SEL0_LC3D1S_POSN                     equ 0000h
CLC3SEL0_LC3D1S_POSITION                 equ 0000h
CLC3SEL0_LC3D1S_SIZE                     equ 0008h
CLC3SEL0_LC3D1S_LENGTH                   equ 0008h
CLC3SEL0_LC3D1S_MASK                     equ 00FFh
CLC3SEL0_D1S_POSN                        equ 0000h
CLC3SEL0_D1S_POSITION                    equ 0000h
CLC3SEL0_D1S_SIZE                        equ 0008h
CLC3SEL0_D1S_LENGTH                      equ 0008h
CLC3SEL0_D1S_MASK                        equ 00FFh
CLC3SEL0_D1S0_POSN                       equ 0000h
CLC3SEL0_D1S0_POSITION                   equ 0000h
CLC3SEL0_D1S0_SIZE                       equ 0001h
CLC3SEL0_D1S0_LENGTH                     equ 0001h
CLC3SEL0_D1S0_MASK                       equ 0001h
CLC3SEL0_D1S1_POSN                       equ 0001h
CLC3SEL0_D1S1_POSITION                   equ 0001h
CLC3SEL0_D1S1_SIZE                       equ 0001h
CLC3SEL0_D1S1_LENGTH                     equ 0001h
CLC3SEL0_D1S1_MASK                       equ 0002h
CLC3SEL0_D1S2_POSN                       equ 0002h
CLC3SEL0_D1S2_POSITION                   equ 0002h
CLC3SEL0_D1S2_SIZE                       equ 0001h
CLC3SEL0_D1S2_LENGTH                     equ 0001h
CLC3SEL0_D1S2_MASK                       equ 0004h
CLC3SEL0_D1S3_POSN                       equ 0003h
CLC3SEL0_D1S3_POSITION                   equ 0003h
CLC3SEL0_D1S3_SIZE                       equ 0001h
CLC3SEL0_D1S3_LENGTH                     equ 0001h
CLC3SEL0_D1S3_MASK                       equ 0008h
CLC3SEL0_D1S4_POSN                       equ 0004h
CLC3SEL0_D1S4_POSITION                   equ 0004h
CLC3SEL0_D1S4_SIZE                       equ 0001h
CLC3SEL0_D1S4_LENGTH                     equ 0001h
CLC3SEL0_D1S4_MASK                       equ 0010h

// Register: CLC3SEL1
#define CLC3SEL1 CLC3SEL1
CLC3SEL1                                 equ 0F27h
// bitfield definitions
CLC3SEL1_LC3D2S0_POSN                    equ 0000h
CLC3SEL1_LC3D2S0_POSITION                equ 0000h
CLC3SEL1_LC3D2S0_SIZE                    equ 0001h
CLC3SEL1_LC3D2S0_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S0_MASK                    equ 0001h
CLC3SEL1_LC3D2S1_POSN                    equ 0001h
CLC3SEL1_LC3D2S1_POSITION                equ 0001h
CLC3SEL1_LC3D2S1_SIZE                    equ 0001h
CLC3SEL1_LC3D2S1_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S1_MASK                    equ 0002h
CLC3SEL1_LC3D2S2_POSN                    equ 0002h
CLC3SEL1_LC3D2S2_POSITION                equ 0002h
CLC3SEL1_LC3D2S2_SIZE                    equ 0001h
CLC3SEL1_LC3D2S2_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S2_MASK                    equ 0004h
CLC3SEL1_LC3D2S3_POSN                    equ 0003h
CLC3SEL1_LC3D2S3_POSITION                equ 0003h
CLC3SEL1_LC3D2S3_SIZE                    equ 0001h
CLC3SEL1_LC3D2S3_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S3_MASK                    equ 0008h
CLC3SEL1_LC3D2S4_POSN                    equ 0004h
CLC3SEL1_LC3D2S4_POSITION                equ 0004h
CLC3SEL1_LC3D2S4_SIZE                    equ 0001h
CLC3SEL1_LC3D2S4_LENGTH                  equ 0001h
CLC3SEL1_LC3D2S4_MASK                    equ 0010h
CLC3SEL1_LC3D2S_POSN                     equ 0000h
CLC3SEL1_LC3D2S_POSITION                 equ 0000h
CLC3SEL1_LC3D2S_SIZE                     equ 0008h
CLC3SEL1_LC3D2S_LENGTH                   equ 0008h
CLC3SEL1_LC3D2S_MASK                     equ 00FFh
CLC3SEL1_D2S_POSN                        equ 0000h
CLC3SEL1_D2S_POSITION                    equ 0000h
CLC3SEL1_D2S_SIZE                        equ 0008h
CLC3SEL1_D2S_LENGTH                      equ 0008h
CLC3SEL1_D2S_MASK                        equ 00FFh
CLC3SEL1_D2S0_POSN                       equ 0000h
CLC3SEL1_D2S0_POSITION                   equ 0000h
CLC3SEL1_D2S0_SIZE                       equ 0001h
CLC3SEL1_D2S0_LENGTH                     equ 0001h
CLC3SEL1_D2S0_MASK                       equ 0001h
CLC3SEL1_D2S1_POSN                       equ 0001h
CLC3SEL1_D2S1_POSITION                   equ 0001h
CLC3SEL1_D2S1_SIZE                       equ 0001h
CLC3SEL1_D2S1_LENGTH                     equ 0001h
CLC3SEL1_D2S1_MASK                       equ 0002h
CLC3SEL1_D2S2_POSN                       equ 0002h
CLC3SEL1_D2S2_POSITION                   equ 0002h
CLC3SEL1_D2S2_SIZE                       equ 0001h
CLC3SEL1_D2S2_LENGTH                     equ 0001h
CLC3SEL1_D2S2_MASK                       equ 0004h
CLC3SEL1_D2S3_POSN                       equ 0003h
CLC3SEL1_D2S3_POSITION                   equ 0003h
CLC3SEL1_D2S3_SIZE                       equ 0001h
CLC3SEL1_D2S3_LENGTH                     equ 0001h
CLC3SEL1_D2S3_MASK                       equ 0008h
CLC3SEL1_D2S4_POSN                       equ 0004h
CLC3SEL1_D2S4_POSITION                   equ 0004h
CLC3SEL1_D2S4_SIZE                       equ 0001h
CLC3SEL1_D2S4_LENGTH                     equ 0001h
CLC3SEL1_D2S4_MASK                       equ 0010h

// Register: CLC3SEL2
#define CLC3SEL2 CLC3SEL2
CLC3SEL2                                 equ 0F28h
// bitfield definitions
CLC3SEL2_LC3D3S0_POSN                    equ 0000h
CLC3SEL2_LC3D3S0_POSITION                equ 0000h
CLC3SEL2_LC3D3S0_SIZE                    equ 0001h
CLC3SEL2_LC3D3S0_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S0_MASK                    equ 0001h
CLC3SEL2_LC3D3S1_POSN                    equ 0001h
CLC3SEL2_LC3D3S1_POSITION                equ 0001h
CLC3SEL2_LC3D3S1_SIZE                    equ 0001h
CLC3SEL2_LC3D3S1_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S1_MASK                    equ 0002h
CLC3SEL2_LC3D3S2_POSN                    equ 0002h
CLC3SEL2_LC3D3S2_POSITION                equ 0002h
CLC3SEL2_LC3D3S2_SIZE                    equ 0001h
CLC3SEL2_LC3D3S2_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S2_MASK                    equ 0004h
CLC3SEL2_LC3D3S3_POSN                    equ 0003h
CLC3SEL2_LC3D3S3_POSITION                equ 0003h
CLC3SEL2_LC3D3S3_SIZE                    equ 0001h
CLC3SEL2_LC3D3S3_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S3_MASK                    equ 0008h
CLC3SEL2_LC3D3S4_POSN                    equ 0004h
CLC3SEL2_LC3D3S4_POSITION                equ 0004h
CLC3SEL2_LC3D3S4_SIZE                    equ 0001h
CLC3SEL2_LC3D3S4_LENGTH                  equ 0001h
CLC3SEL2_LC3D3S4_MASK                    equ 0010h
CLC3SEL2_LC3D3S_POSN                     equ 0000h
CLC3SEL2_LC3D3S_POSITION                 equ 0000h
CLC3SEL2_LC3D3S_SIZE                     equ 0008h
CLC3SEL2_LC3D3S_LENGTH                   equ 0008h
CLC3SEL2_LC3D3S_MASK                     equ 00FFh
CLC3SEL2_D3S_POSN                        equ 0000h
CLC3SEL2_D3S_POSITION                    equ 0000h
CLC3SEL2_D3S_SIZE                        equ 0008h
CLC3SEL2_D3S_LENGTH                      equ 0008h
CLC3SEL2_D3S_MASK                        equ 00FFh
CLC3SEL2_D3S0_POSN                       equ 0000h
CLC3SEL2_D3S0_POSITION                   equ 0000h
CLC3SEL2_D3S0_SIZE                       equ 0001h
CLC3SEL2_D3S0_LENGTH                     equ 0001h
CLC3SEL2_D3S0_MASK                       equ 0001h
CLC3SEL2_D3S1_POSN                       equ 0001h
CLC3SEL2_D3S1_POSITION                   equ 0001h
CLC3SEL2_D3S1_SIZE                       equ 0001h
CLC3SEL2_D3S1_LENGTH                     equ 0001h
CLC3SEL2_D3S1_MASK                       equ 0002h
CLC3SEL2_D3S2_POSN                       equ 0002h
CLC3SEL2_D3S2_POSITION                   equ 0002h
CLC3SEL2_D3S2_SIZE                       equ 0001h
CLC3SEL2_D3S2_LENGTH                     equ 0001h
CLC3SEL2_D3S2_MASK                       equ 0004h
CLC3SEL2_D3S3_POSN                       equ 0003h
CLC3SEL2_D3S3_POSITION                   equ 0003h
CLC3SEL2_D3S3_SIZE                       equ 0001h
CLC3SEL2_D3S3_LENGTH                     equ 0001h
CLC3SEL2_D3S3_MASK                       equ 0008h
CLC3SEL2_D3S4_POSN                       equ 0004h
CLC3SEL2_D3S4_POSITION                   equ 0004h
CLC3SEL2_D3S4_SIZE                       equ 0001h
CLC3SEL2_D3S4_LENGTH                     equ 0001h
CLC3SEL2_D3S4_MASK                       equ 0010h

// Register: CLC3SEL3
#define CLC3SEL3 CLC3SEL3
CLC3SEL3                                 equ 0F29h
// bitfield definitions
CLC3SEL3_LC3D4S0_POSN                    equ 0000h
CLC3SEL3_LC3D4S0_POSITION                equ 0000h
CLC3SEL3_LC3D4S0_SIZE                    equ 0001h
CLC3SEL3_LC3D4S0_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S0_MASK                    equ 0001h
CLC3SEL3_LC3D4S1_POSN                    equ 0001h
CLC3SEL3_LC3D4S1_POSITION                equ 0001h
CLC3SEL3_LC3D4S1_SIZE                    equ 0001h
CLC3SEL3_LC3D4S1_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S1_MASK                    equ 0002h
CLC3SEL3_LC3D4S2_POSN                    equ 0002h
CLC3SEL3_LC3D4S2_POSITION                equ 0002h
CLC3SEL3_LC3D4S2_SIZE                    equ 0001h
CLC3SEL3_LC3D4S2_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S2_MASK                    equ 0004h
CLC3SEL3_LC3D4S3_POSN                    equ 0003h
CLC3SEL3_LC3D4S3_POSITION                equ 0003h
CLC3SEL3_LC3D4S3_SIZE                    equ 0001h
CLC3SEL3_LC3D4S3_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S3_MASK                    equ 0008h
CLC3SEL3_LC3D4S4_POSN                    equ 0004h
CLC3SEL3_LC3D4S4_POSITION                equ 0004h
CLC3SEL3_LC3D4S4_SIZE                    equ 0001h
CLC3SEL3_LC3D4S4_LENGTH                  equ 0001h
CLC3SEL3_LC3D4S4_MASK                    equ 0010h
CLC3SEL3_LC3D4S_POSN                     equ 0000h
CLC3SEL3_LC3D4S_POSITION                 equ 0000h
CLC3SEL3_LC3D4S_SIZE                     equ 0008h
CLC3SEL3_LC3D4S_LENGTH                   equ 0008h
CLC3SEL3_LC3D4S_MASK                     equ 00FFh
CLC3SEL3_D4S_POSN                        equ 0000h
CLC3SEL3_D4S_POSITION                    equ 0000h
CLC3SEL3_D4S_SIZE                        equ 0008h
CLC3SEL3_D4S_LENGTH                      equ 0008h
CLC3SEL3_D4S_MASK                        equ 00FFh
CLC3SEL3_D4S0_POSN                       equ 0000h
CLC3SEL3_D4S0_POSITION                   equ 0000h
CLC3SEL3_D4S0_SIZE                       equ 0001h
CLC3SEL3_D4S0_LENGTH                     equ 0001h
CLC3SEL3_D4S0_MASK                       equ 0001h
CLC3SEL3_D4S1_POSN                       equ 0001h
CLC3SEL3_D4S1_POSITION                   equ 0001h
CLC3SEL3_D4S1_SIZE                       equ 0001h
CLC3SEL3_D4S1_LENGTH                     equ 0001h
CLC3SEL3_D4S1_MASK                       equ 0002h
CLC3SEL3_D4S2_POSN                       equ 0002h
CLC3SEL3_D4S2_POSITION                   equ 0002h
CLC3SEL3_D4S2_SIZE                       equ 0001h
CLC3SEL3_D4S2_LENGTH                     equ 0001h
CLC3SEL3_D4S2_MASK                       equ 0004h
CLC3SEL3_D4S3_POSN                       equ 0003h
CLC3SEL3_D4S3_POSITION                   equ 0003h
CLC3SEL3_D4S3_SIZE                       equ 0001h
CLC3SEL3_D4S3_LENGTH                     equ 0001h
CLC3SEL3_D4S3_MASK                       equ 0008h
CLC3SEL3_D4S4_POSN                       equ 0004h
CLC3SEL3_D4S4_POSITION                   equ 0004h
CLC3SEL3_D4S4_SIZE                       equ 0001h
CLC3SEL3_D4S4_LENGTH                     equ 0001h
CLC3SEL3_D4S4_MASK                       equ 0010h

// Register: CLC3GLS0
#define CLC3GLS0 CLC3GLS0
CLC3GLS0                                 equ 0F2Ah
// bitfield definitions
CLC3GLS0_LC3G1D1N_POSN                   equ 0000h
CLC3GLS0_LC3G1D1N_POSITION               equ 0000h
CLC3GLS0_LC3G1D1N_SIZE                   equ 0001h
CLC3GLS0_LC3G1D1N_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D1N_MASK                   equ 0001h
CLC3GLS0_LC3G1D1T_POSN                   equ 0001h
CLC3GLS0_LC3G1D1T_POSITION               equ 0001h
CLC3GLS0_LC3G1D1T_SIZE                   equ 0001h
CLC3GLS0_LC3G1D1T_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D1T_MASK                   equ 0002h
CLC3GLS0_LC3G1D2N_POSN                   equ 0002h
CLC3GLS0_LC3G1D2N_POSITION               equ 0002h
CLC3GLS0_LC3G1D2N_SIZE                   equ 0001h
CLC3GLS0_LC3G1D2N_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D2N_MASK                   equ 0004h
CLC3GLS0_LC3G1D2T_POSN                   equ 0003h
CLC3GLS0_LC3G1D2T_POSITION               equ 0003h
CLC3GLS0_LC3G1D2T_SIZE                   equ 0001h
CLC3GLS0_LC3G1D2T_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D2T_MASK                   equ 0008h
CLC3GLS0_LC3G1D3N_POSN                   equ 0004h
CLC3GLS0_LC3G1D3N_POSITION               equ 0004h
CLC3GLS0_LC3G1D3N_SIZE                   equ 0001h
CLC3GLS0_LC3G1D3N_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D3N_MASK                   equ 0010h
CLC3GLS0_LC3G1D3T_POSN                   equ 0005h
CLC3GLS0_LC3G1D3T_POSITION               equ 0005h
CLC3GLS0_LC3G1D3T_SIZE                   equ 0001h
CLC3GLS0_LC3G1D3T_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D3T_MASK                   equ 0020h
CLC3GLS0_LC3G1D4N_POSN                   equ 0006h
CLC3GLS0_LC3G1D4N_POSITION               equ 0006h
CLC3GLS0_LC3G1D4N_SIZE                   equ 0001h
CLC3GLS0_LC3G1D4N_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D4N_MASK                   equ 0040h
CLC3GLS0_LC3G1D4T_POSN                   equ 0007h
CLC3GLS0_LC3G1D4T_POSITION               equ 0007h
CLC3GLS0_LC3G1D4T_SIZE                   equ 0001h
CLC3GLS0_LC3G1D4T_LENGTH                 equ 0001h
CLC3GLS0_LC3G1D4T_MASK                   equ 0080h
CLC3GLS0_D1N_POSN                        equ 0000h
CLC3GLS0_D1N_POSITION                    equ 0000h
CLC3GLS0_D1N_SIZE                        equ 0001h
CLC3GLS0_D1N_LENGTH                      equ 0001h
CLC3GLS0_D1N_MASK                        equ 0001h
CLC3GLS0_D1T_POSN                        equ 0001h
CLC3GLS0_D1T_POSITION                    equ 0001h
CLC3GLS0_D1T_SIZE                        equ 0001h
CLC3GLS0_D1T_LENGTH                      equ 0001h
CLC3GLS0_D1T_MASK                        equ 0002h
CLC3GLS0_D2N_POSN                        equ 0002h
CLC3GLS0_D2N_POSITION                    equ 0002h
CLC3GLS0_D2N_SIZE                        equ 0001h
CLC3GLS0_D2N_LENGTH                      equ 0001h
CLC3GLS0_D2N_MASK                        equ 0004h
CLC3GLS0_D2T_POSN                        equ 0003h
CLC3GLS0_D2T_POSITION                    equ 0003h
CLC3GLS0_D2T_SIZE                        equ 0001h
CLC3GLS0_D2T_LENGTH                      equ 0001h
CLC3GLS0_D2T_MASK                        equ 0008h
CLC3GLS0_D3N_POSN                        equ 0004h
CLC3GLS0_D3N_POSITION                    equ 0004h
CLC3GLS0_D3N_SIZE                        equ 0001h
CLC3GLS0_D3N_LENGTH                      equ 0001h
CLC3GLS0_D3N_MASK                        equ 0010h
CLC3GLS0_D3T_POSN                        equ 0005h
CLC3GLS0_D3T_POSITION                    equ 0005h
CLC3GLS0_D3T_SIZE                        equ 0001h
CLC3GLS0_D3T_LENGTH                      equ 0001h
CLC3GLS0_D3T_MASK                        equ 0020h
CLC3GLS0_D4N_POSN                        equ 0006h
CLC3GLS0_D4N_POSITION                    equ 0006h
CLC3GLS0_D4N_SIZE                        equ 0001h
CLC3GLS0_D4N_LENGTH                      equ 0001h
CLC3GLS0_D4N_MASK                        equ 0040h
CLC3GLS0_D4T_POSN                        equ 0007h
CLC3GLS0_D4T_POSITION                    equ 0007h
CLC3GLS0_D4T_SIZE                        equ 0001h
CLC3GLS0_D4T_LENGTH                      equ 0001h
CLC3GLS0_D4T_MASK                        equ 0080h

// Register: CLC3GLS1
#define CLC3GLS1 CLC3GLS1
CLC3GLS1                                 equ 0F2Bh
// bitfield definitions
CLC3GLS1_LC3G2D1N_POSN                   equ 0000h
CLC3GLS1_LC3G2D1N_POSITION               equ 0000h
CLC3GLS1_LC3G2D1N_SIZE                   equ 0001h
CLC3GLS1_LC3G2D1N_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D1N_MASK                   equ 0001h
CLC3GLS1_LC3G2D1T_POSN                   equ 0001h
CLC3GLS1_LC3G2D1T_POSITION               equ 0001h
CLC3GLS1_LC3G2D1T_SIZE                   equ 0001h
CLC3GLS1_LC3G2D1T_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D1T_MASK                   equ 0002h
CLC3GLS1_LC3G2D2N_POSN                   equ 0002h
CLC3GLS1_LC3G2D2N_POSITION               equ 0002h
CLC3GLS1_LC3G2D2N_SIZE                   equ 0001h
CLC3GLS1_LC3G2D2N_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D2N_MASK                   equ 0004h
CLC3GLS1_LC3G2D2T_POSN                   equ 0003h
CLC3GLS1_LC3G2D2T_POSITION               equ 0003h
CLC3GLS1_LC3G2D2T_SIZE                   equ 0001h
CLC3GLS1_LC3G2D2T_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D2T_MASK                   equ 0008h
CLC3GLS1_LC3G2D3N_POSN                   equ 0004h
CLC3GLS1_LC3G2D3N_POSITION               equ 0004h
CLC3GLS1_LC3G2D3N_SIZE                   equ 0001h
CLC3GLS1_LC3G2D3N_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D3N_MASK                   equ 0010h
CLC3GLS1_LC3G2D3T_POSN                   equ 0005h
CLC3GLS1_LC3G2D3T_POSITION               equ 0005h
CLC3GLS1_LC3G2D3T_SIZE                   equ 0001h
CLC3GLS1_LC3G2D3T_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D3T_MASK                   equ 0020h
CLC3GLS1_LC3G2D4N_POSN                   equ 0006h
CLC3GLS1_LC3G2D4N_POSITION               equ 0006h
CLC3GLS1_LC3G2D4N_SIZE                   equ 0001h
CLC3GLS1_LC3G2D4N_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D4N_MASK                   equ 0040h
CLC3GLS1_LC3G2D4T_POSN                   equ 0007h
CLC3GLS1_LC3G2D4T_POSITION               equ 0007h
CLC3GLS1_LC3G2D4T_SIZE                   equ 0001h
CLC3GLS1_LC3G2D4T_LENGTH                 equ 0001h
CLC3GLS1_LC3G2D4T_MASK                   equ 0080h
CLC3GLS1_D1N_POSN                        equ 0000h
CLC3GLS1_D1N_POSITION                    equ 0000h
CLC3GLS1_D1N_SIZE                        equ 0001h
CLC3GLS1_D1N_LENGTH                      equ 0001h
CLC3GLS1_D1N_MASK                        equ 0001h
CLC3GLS1_D1T_POSN                        equ 0001h
CLC3GLS1_D1T_POSITION                    equ 0001h
CLC3GLS1_D1T_SIZE                        equ 0001h
CLC3GLS1_D1T_LENGTH                      equ 0001h
CLC3GLS1_D1T_MASK                        equ 0002h
CLC3GLS1_D2N_POSN                        equ 0002h
CLC3GLS1_D2N_POSITION                    equ 0002h
CLC3GLS1_D2N_SIZE                        equ 0001h
CLC3GLS1_D2N_LENGTH                      equ 0001h
CLC3GLS1_D2N_MASK                        equ 0004h
CLC3GLS1_D2T_POSN                        equ 0003h
CLC3GLS1_D2T_POSITION                    equ 0003h
CLC3GLS1_D2T_SIZE                        equ 0001h
CLC3GLS1_D2T_LENGTH                      equ 0001h
CLC3GLS1_D2T_MASK                        equ 0008h
CLC3GLS1_D3N_POSN                        equ 0004h
CLC3GLS1_D3N_POSITION                    equ 0004h
CLC3GLS1_D3N_SIZE                        equ 0001h
CLC3GLS1_D3N_LENGTH                      equ 0001h
CLC3GLS1_D3N_MASK                        equ 0010h
CLC3GLS1_D3T_POSN                        equ 0005h
CLC3GLS1_D3T_POSITION                    equ 0005h
CLC3GLS1_D3T_SIZE                        equ 0001h
CLC3GLS1_D3T_LENGTH                      equ 0001h
CLC3GLS1_D3T_MASK                        equ 0020h
CLC3GLS1_D4N_POSN                        equ 0006h
CLC3GLS1_D4N_POSITION                    equ 0006h
CLC3GLS1_D4N_SIZE                        equ 0001h
CLC3GLS1_D4N_LENGTH                      equ 0001h
CLC3GLS1_D4N_MASK                        equ 0040h
CLC3GLS1_D4T_POSN                        equ 0007h
CLC3GLS1_D4T_POSITION                    equ 0007h
CLC3GLS1_D4T_SIZE                        equ 0001h
CLC3GLS1_D4T_LENGTH                      equ 0001h
CLC3GLS1_D4T_MASK                        equ 0080h

// Register: CLC3GLS2
#define CLC3GLS2 CLC3GLS2
CLC3GLS2                                 equ 0F2Ch
// bitfield definitions
CLC3GLS2_LC3G3D1N_POSN                   equ 0000h
CLC3GLS2_LC3G3D1N_POSITION               equ 0000h
CLC3GLS2_LC3G3D1N_SIZE                   equ 0001h
CLC3GLS2_LC3G3D1N_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D1N_MASK                   equ 0001h
CLC3GLS2_LC3G3D1T_POSN                   equ 0001h
CLC3GLS2_LC3G3D1T_POSITION               equ 0001h
CLC3GLS2_LC3G3D1T_SIZE                   equ 0001h
CLC3GLS2_LC3G3D1T_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D1T_MASK                   equ 0002h
CLC3GLS2_LC3G3D2N_POSN                   equ 0002h
CLC3GLS2_LC3G3D2N_POSITION               equ 0002h
CLC3GLS2_LC3G3D2N_SIZE                   equ 0001h
CLC3GLS2_LC3G3D2N_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D2N_MASK                   equ 0004h
CLC3GLS2_LC3G3D2T_POSN                   equ 0003h
CLC3GLS2_LC3G3D2T_POSITION               equ 0003h
CLC3GLS2_LC3G3D2T_SIZE                   equ 0001h
CLC3GLS2_LC3G3D2T_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D2T_MASK                   equ 0008h
CLC3GLS2_LC3G3D3N_POSN                   equ 0004h
CLC3GLS2_LC3G3D3N_POSITION               equ 0004h
CLC3GLS2_LC3G3D3N_SIZE                   equ 0001h
CLC3GLS2_LC3G3D3N_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D3N_MASK                   equ 0010h
CLC3GLS2_LC3G3D3T_POSN                   equ 0005h
CLC3GLS2_LC3G3D3T_POSITION               equ 0005h
CLC3GLS2_LC3G3D3T_SIZE                   equ 0001h
CLC3GLS2_LC3G3D3T_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D3T_MASK                   equ 0020h
CLC3GLS2_LC3G3D4N_POSN                   equ 0006h
CLC3GLS2_LC3G3D4N_POSITION               equ 0006h
CLC3GLS2_LC3G3D4N_SIZE                   equ 0001h
CLC3GLS2_LC3G3D4N_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D4N_MASK                   equ 0040h
CLC3GLS2_LC3G3D4T_POSN                   equ 0007h
CLC3GLS2_LC3G3D4T_POSITION               equ 0007h
CLC3GLS2_LC3G3D4T_SIZE                   equ 0001h
CLC3GLS2_LC3G3D4T_LENGTH                 equ 0001h
CLC3GLS2_LC3G3D4T_MASK                   equ 0080h
CLC3GLS2_D1N_POSN                        equ 0000h
CLC3GLS2_D1N_POSITION                    equ 0000h
CLC3GLS2_D1N_SIZE                        equ 0001h
CLC3GLS2_D1N_LENGTH                      equ 0001h
CLC3GLS2_D1N_MASK                        equ 0001h
CLC3GLS2_D1T_POSN                        equ 0001h
CLC3GLS2_D1T_POSITION                    equ 0001h
CLC3GLS2_D1T_SIZE                        equ 0001h
CLC3GLS2_D1T_LENGTH                      equ 0001h
CLC3GLS2_D1T_MASK                        equ 0002h
CLC3GLS2_D2N_POSN                        equ 0002h
CLC3GLS2_D2N_POSITION                    equ 0002h
CLC3GLS2_D2N_SIZE                        equ 0001h
CLC3GLS2_D2N_LENGTH                      equ 0001h
CLC3GLS2_D2N_MASK                        equ 0004h
CLC3GLS2_D2T_POSN                        equ 0003h
CLC3GLS2_D2T_POSITION                    equ 0003h
CLC3GLS2_D2T_SIZE                        equ 0001h
CLC3GLS2_D2T_LENGTH                      equ 0001h
CLC3GLS2_D2T_MASK                        equ 0008h
CLC3GLS2_D3N_POSN                        equ 0004h
CLC3GLS2_D3N_POSITION                    equ 0004h
CLC3GLS2_D3N_SIZE                        equ 0001h
CLC3GLS2_D3N_LENGTH                      equ 0001h
CLC3GLS2_D3N_MASK                        equ 0010h
CLC3GLS2_D3T_POSN                        equ 0005h
CLC3GLS2_D3T_POSITION                    equ 0005h
CLC3GLS2_D3T_SIZE                        equ 0001h
CLC3GLS2_D3T_LENGTH                      equ 0001h
CLC3GLS2_D3T_MASK                        equ 0020h
CLC3GLS2_D4N_POSN                        equ 0006h
CLC3GLS2_D4N_POSITION                    equ 0006h
CLC3GLS2_D4N_SIZE                        equ 0001h
CLC3GLS2_D4N_LENGTH                      equ 0001h
CLC3GLS2_D4N_MASK                        equ 0040h
CLC3GLS2_D4T_POSN                        equ 0007h
CLC3GLS2_D4T_POSITION                    equ 0007h
CLC3GLS2_D4T_SIZE                        equ 0001h
CLC3GLS2_D4T_LENGTH                      equ 0001h
CLC3GLS2_D4T_MASK                        equ 0080h

// Register: CLC3GLS3
#define CLC3GLS3 CLC3GLS3
CLC3GLS3                                 equ 0F2Dh
// bitfield definitions
CLC3GLS3_LC3G4D1N_POSN                   equ 0000h
CLC3GLS3_LC3G4D1N_POSITION               equ 0000h
CLC3GLS3_LC3G4D1N_SIZE                   equ 0001h
CLC3GLS3_LC3G4D1N_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D1N_MASK                   equ 0001h
CLC3GLS3_LC3G4D1T_POSN                   equ 0001h
CLC3GLS3_LC3G4D1T_POSITION               equ 0001h
CLC3GLS3_LC3G4D1T_SIZE                   equ 0001h
CLC3GLS3_LC3G4D1T_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D1T_MASK                   equ 0002h
CLC3GLS3_LC3G4D2N_POSN                   equ 0002h
CLC3GLS3_LC3G4D2N_POSITION               equ 0002h
CLC3GLS3_LC3G4D2N_SIZE                   equ 0001h
CLC3GLS3_LC3G4D2N_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D2N_MASK                   equ 0004h
CLC3GLS3_LC3G4D2T_POSN                   equ 0003h
CLC3GLS3_LC3G4D2T_POSITION               equ 0003h
CLC3GLS3_LC3G4D2T_SIZE                   equ 0001h
CLC3GLS3_LC3G4D2T_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D2T_MASK                   equ 0008h
CLC3GLS3_LC3G4D3N_POSN                   equ 0004h
CLC3GLS3_LC3G4D3N_POSITION               equ 0004h
CLC3GLS3_LC3G4D3N_SIZE                   equ 0001h
CLC3GLS3_LC3G4D3N_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D3N_MASK                   equ 0010h
CLC3GLS3_LC3G4D3T_POSN                   equ 0005h
CLC3GLS3_LC3G4D3T_POSITION               equ 0005h
CLC3GLS3_LC3G4D3T_SIZE                   equ 0001h
CLC3GLS3_LC3G4D3T_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D3T_MASK                   equ 0020h
CLC3GLS3_LC3G4D4N_POSN                   equ 0006h
CLC3GLS3_LC3G4D4N_POSITION               equ 0006h
CLC3GLS3_LC3G4D4N_SIZE                   equ 0001h
CLC3GLS3_LC3G4D4N_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D4N_MASK                   equ 0040h
CLC3GLS3_LC3G4D4T_POSN                   equ 0007h
CLC3GLS3_LC3G4D4T_POSITION               equ 0007h
CLC3GLS3_LC3G4D4T_SIZE                   equ 0001h
CLC3GLS3_LC3G4D4T_LENGTH                 equ 0001h
CLC3GLS3_LC3G4D4T_MASK                   equ 0080h
CLC3GLS3_G4D1N_POSN                      equ 0000h
CLC3GLS3_G4D1N_POSITION                  equ 0000h
CLC3GLS3_G4D1N_SIZE                      equ 0001h
CLC3GLS3_G4D1N_LENGTH                    equ 0001h
CLC3GLS3_G4D1N_MASK                      equ 0001h
CLC3GLS3_G4D1T_POSN                      equ 0001h
CLC3GLS3_G4D1T_POSITION                  equ 0001h
CLC3GLS3_G4D1T_SIZE                      equ 0001h
CLC3GLS3_G4D1T_LENGTH                    equ 0001h
CLC3GLS3_G4D1T_MASK                      equ 0002h
CLC3GLS3_G4D2N_POSN                      equ 0002h
CLC3GLS3_G4D2N_POSITION                  equ 0002h
CLC3GLS3_G4D2N_SIZE                      equ 0001h
CLC3GLS3_G4D2N_LENGTH                    equ 0001h
CLC3GLS3_G4D2N_MASK                      equ 0004h
CLC3GLS3_G4D2T_POSN                      equ 0003h
CLC3GLS3_G4D2T_POSITION                  equ 0003h
CLC3GLS3_G4D2T_SIZE                      equ 0001h
CLC3GLS3_G4D2T_LENGTH                    equ 0001h
CLC3GLS3_G4D2T_MASK                      equ 0008h
CLC3GLS3_G4D3N_POSN                      equ 0004h
CLC3GLS3_G4D3N_POSITION                  equ 0004h
CLC3GLS3_G4D3N_SIZE                      equ 0001h
CLC3GLS3_G4D3N_LENGTH                    equ 0001h
CLC3GLS3_G4D3N_MASK                      equ 0010h
CLC3GLS3_G4D3T_POSN                      equ 0005h
CLC3GLS3_G4D3T_POSITION                  equ 0005h
CLC3GLS3_G4D3T_SIZE                      equ 0001h
CLC3GLS3_G4D3T_LENGTH                    equ 0001h
CLC3GLS3_G4D3T_MASK                      equ 0020h
CLC3GLS3_G4D4N_POSN                      equ 0006h
CLC3GLS3_G4D4N_POSITION                  equ 0006h
CLC3GLS3_G4D4N_SIZE                      equ 0001h
CLC3GLS3_G4D4N_LENGTH                    equ 0001h
CLC3GLS3_G4D4N_MASK                      equ 0040h
CLC3GLS3_G4D4T_POSN                      equ 0007h
CLC3GLS3_G4D4T_POSITION                  equ 0007h
CLC3GLS3_G4D4T_SIZE                      equ 0001h
CLC3GLS3_G4D4T_LENGTH                    equ 0001h
CLC3GLS3_G4D4T_MASK                      equ 0080h

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
#define ABDEN                            BANKMASK(BAUD1CON), 0
#define ABDOVF                           BANKMASK(BAUD1CON), 7
#define ACKDT                            BANKMASK(SSP1CON2), 5
#define ACKEN                            BANKMASK(SSP1CON2), 4
#define ACKSTAT                          BANKMASK(SSP1CON2), 6
#define ACKTIM                           BANKMASK(SSP1CON3), 7
#define ADD0                             BANKMASK(SSP1ADD), 0
#define ADD1                             BANKMASK(SSP1ADD), 1
#define ADD2                             BANKMASK(SSP1ADD), 2
#define ADD3                             BANKMASK(SSP1ADD), 3
#define ADD4                             BANKMASK(SSP1ADD), 4
#define ADD5                             BANKMASK(SSP1ADD), 5
#define ADD6                             BANKMASK(SSP1ADD), 6
#define ADD7                             BANKMASK(SSP1ADD), 7
#define ADDEN                            BANKMASK(RC1STA), 3
#define ADFM                             BANKMASK(ADCON1), 7
#define ADGO                             BANKMASK(ADCON0), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADNREF                           BANKMASK(ADCON1), 2
#define ADON                             BANKMASK(ADCON0), 0
#define ADPREF0                          BANKMASK(ADCON1), 0
#define ADPREF1                          BANKMASK(ADCON1), 1
#define AHEN                             BANKMASK(SSP1CON3), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define ANSB6                            BANKMASK(ANSELB), 6
#define ANSB7                            BANKMASK(ANSELB), 7
#define ANSC0                            BANKMASK(ANSELC), 0
#define ANSC1                            BANKMASK(ANSELC), 1
#define ANSC2                            BANKMASK(ANSELC), 2
#define ANSC3                            BANKMASK(ANSELC), 3
#define ANSC6                            BANKMASK(ANSELC), 6
#define ANSC7                            BANKMASK(ANSELC), 7
#define BCL1IE                           BANKMASK(PIE2), 3
#define BCL1IF                           BANKMASK(PIR2), 3
#define BF                               BANKMASK(SSP1STAT), 0
#define BOEN                             BANKMASK(SSP1CON3), 4
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define BRG16                            BANKMASK(BAUD1CON), 3
#define BRGH                             BANKMASK(TX1STA), 2
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define BUF0                             BANKMASK(SSP1BUF), 0
#define BUF1                             BANKMASK(SSP1BUF), 1
#define BUF2                             BANKMASK(SSP1BUF), 2
#define BUF3                             BANKMASK(SSP1BUF), 3
#define BUF4                             BANKMASK(SSP1BUF), 4
#define BUF5                             BANKMASK(SSP1BUF), 5
#define BUF6                             BANKMASK(SSP1BUF), 6
#define BUF7                             BANKMASK(SSP1BUF), 7
#define C1HYS                            BANKMASK(CM1CON0), 1
#define C1IE                             BANKMASK(PIE2), 5
#define C1IF                             BANKMASK(PIR2), 5
#define C1INTN                           BANKMASK(CM1CON1), 0
#define C1INTP                           BANKMASK(CM1CON1), 1
#define C1NCH0                           BANKMASK(CM1NSEL), 0
#define C1NCH1                           BANKMASK(CM1NSEL), 1
#define C1NCH2                           BANKMASK(CM1NSEL), 2
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1PCH0                           BANKMASK(CM1PSEL), 0
#define C1PCH1                           BANKMASK(CM1PSEL), 1
#define C1PCH2                           BANKMASK(CM1PSEL), 2
#define C1PCH3                           BANKMASK(CM1PSEL), 3
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1SP                             BANKMASK(CM1CON0), 2
#define C1SYNC                           BANKMASK(CM1CON0), 0
#define C1TSEL0                          BANKMASK(CCPTMRS), 0
#define C1TSEL1                          BANKMASK(CCPTMRS), 1
#define C1ZLF                            BANKMASK(CM1CON0), 3
#define C2HYS                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE2), 6
#define C2IF                             BANKMASK(PIR2), 6
#define C2INTN                           BANKMASK(CM2CON1), 0
#define C2INTP                           BANKMASK(CM2CON1), 1
#define C2NCH0                           BANKMASK(CM2NSEL), 0
#define C2NCH1                           BANKMASK(CM2NSEL), 1
#define C2NCH2                           BANKMASK(CM2NSEL), 2
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2PCH0                           BANKMASK(CM2PSEL), 0
#define C2PCH1                           BANKMASK(CM2PSEL), 1
#define C2PCH2                           BANKMASK(CM2PSEL), 2
#define C2PCH3                           BANKMASK(CM2PSEL), 3
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2SP                             BANKMASK(CM2CON0), 2
#define C2SYNC                           BANKMASK(CM2CON0), 0
#define C2TSEL0                          BANKMASK(CCPTMRS), 2
#define C2TSEL1                          BANKMASK(CCPTMRS), 3
#define C2ZLF                            BANKMASK(CM2CON0), 3
#define C3HYS                            BANKMASK(CM3CON0), 1
#define C3IE                             BANKMASK(PIE2), 1
#define C3IF                             BANKMASK(PIR2), 1
#define C3INTN                           BANKMASK(CM3CON1), 0
#define C3INTP                           BANKMASK(CM3CON1), 1
#define C3NCH0                           BANKMASK(CM3NSEL), 0
#define C3NCH1                           BANKMASK(CM3NSEL), 1
#define C3NCH2                           BANKMASK(CM3NSEL), 2
#define C3ON                             BANKMASK(CM3CON0), 7
#define C3OUT                            BANKMASK(CM3CON0), 6
#define C3PCH0                           BANKMASK(CM3PSEL), 0
#define C3PCH1                           BANKMASK(CM3PSEL), 1
#define C3PCH2                           BANKMASK(CM3PSEL), 2
#define C3PCH3                           BANKMASK(CM3PSEL), 3
#define C3POL                            BANKMASK(CM3CON0), 4
#define C3SP                             BANKMASK(CM3CON0), 2
#define C3SYNC                           BANKMASK(CM3CON0), 0
#define C3ZLF                            BANKMASK(CM3CON0), 3
#define C4HYS                            BANKMASK(CM4CON0), 1
#define C4IE                             BANKMASK(PIE2), 2
#define C4IF                             BANKMASK(PIR2), 2
#define C4INTN                           BANKMASK(CM4CON1), 0
#define C4INTP                           BANKMASK(CM4CON1), 1
#define C4NCH0                           BANKMASK(CM4NSEL), 0
#define C4NCH1                           BANKMASK(CM4NSEL), 1
#define C4NCH2                           BANKMASK(CM4NSEL), 2
#define C4ON                             BANKMASK(CM4CON0), 7
#define C4OUT                            BANKMASK(CM4CON0), 6
#define C4PCH0                           BANKMASK(CM4PSEL), 0
#define C4PCH1                           BANKMASK(CM4PSEL), 1
#define C4PCH2                           BANKMASK(CM4PSEL), 2
#define C4PCH3                           BANKMASK(CM4PSEL), 3
#define C4POL                            BANKMASK(CM4CON0), 4
#define C4SP                             BANKMASK(CM4CON0), 2
#define C4SYNC                           BANKMASK(CM4CON0), 0
#define C4ZLF                            BANKMASK(CM4CON0), 3
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1CTS0                         BANKMASK(CCP1CAP), 0
#define CCP1CTS1                         BANKMASK(CCP1CAP), 1
#define CCP1CTS2                         BANKMASK(CCP1CAP), 2
#define CCP1EN                           BANKMASK(CCP1CON), 7
#define CCP1FMT                          BANKMASK(CCP1CON), 4
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1MODE0                        BANKMASK(CCP1CON), 0
#define CCP1MODE1                        BANKMASK(CCP1CON), 1
#define CCP1MODE2                        BANKMASK(CCP1CON), 2
#define CCP1MODE3                        BANKMASK(CCP1CON), 3
#define CCP1OUT                          BANKMASK(CCP1CON), 5
#define CCP2CTS0                         BANKMASK(CCP2CAP), 0
#define CCP2CTS1                         BANKMASK(CCP2CAP), 1
#define CCP2CTS2                         BANKMASK(CCP2CAP), 2
#define CCP2EN                           BANKMASK(CCP2CON), 7
#define CCP2FMT                          BANKMASK(CCP2CON), 4
#define CCP2IE                           BANKMASK(PIE2), 0
#define CCP2IF                           BANKMASK(PIR2), 0
#define CCP2MODE0                        BANKMASK(CCP2CON), 0
#define CCP2MODE1                        BANKMASK(CCP2CON), 1
#define CCP2MODE2                        BANKMASK(CCP2CON), 2
#define CCP2MODE3                        BANKMASK(CCP2CON), 3
#define CCP2OUT                          BANKMASK(CCP2CON), 5
#define CCPIE                            BANKMASK(PIE1), 2
#define CCPIF                            BANKMASK(PIR1), 2
#define CFGS                             BANKMASK(PMCON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CKE                              BANKMASK(SSP1STAT), 6
#define CKP                              BANKMASK(SSP1CON1), 4
#define CLC1IE                           BANKMASK(PIE3), 0
#define CLC1IF                           BANKMASK(PIR3), 0
#define CLC2IE                           BANKMASK(PIE3), 1
#define CLC2IF                           BANKMASK(PIR3), 1
#define CLC3IE                           BANKMASK(PIE3), 2
#define CLC3IF                           BANKMASK(PIR3), 2
#define COG1IF                           BANKMASK(PIR3), 5
#define COG2IE                           BANKMASK(PIE3), 3
#define COG2IF                           BANKMASK(PIR3), 3
#define COGIE                            BANKMASK(PIE3), 5
#define CREN                             BANKMASK(RC1STA), 4
#define CSRC                             BANKMASK(TX1STA), 7
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DAC1EN                           BANKMASK(DAC1CON0), 7
#define DAC1FM                           BANKMASK(DAC1CON0), 6
#define DAC1LD                           BANKMASK(DACLD), 0
#define DAC1NSS0                         BANKMASK(DAC1CON0), 0
#define DAC1OE1                          BANKMASK(DAC1CON0), 5
#define DAC1PSS0                         BANKMASK(DAC1CON0), 2
#define DAC1PSS1                         BANKMASK(DAC1CON0), 3
#define DAC1R0                           BANKMASK(DAC1REFL), 0
#define DAC1R1                           BANKMASK(DAC1REFL), 1
#define DAC1R10                          BANKMASK(DAC1REFH), 2
#define DAC1R11                          BANKMASK(DAC1REFH), 3
#define DAC1R12                          BANKMASK(DAC1REFH), 4
#define DAC1R13                          BANKMASK(DAC1REFH), 5
#define DAC1R14                          BANKMASK(DAC1REFH), 6
#define DAC1R15                          BANKMASK(DAC1REFH), 7
#define DAC1R2                           BANKMASK(DAC1REFL), 2
#define DAC1R3                           BANKMASK(DAC1REFL), 3
#define DAC1R4                           BANKMASK(DAC1REFL), 4
#define DAC1R5                           BANKMASK(DAC1REFL), 5
#define DAC1R6                           BANKMASK(DAC1REFL), 6
#define DAC1R7                           BANKMASK(DAC1REFL), 7
#define DAC1R8                           BANKMASK(DAC1REFH), 0
#define DAC1R9                           BANKMASK(DAC1REFH), 1
#define DAC1REF0                         BANKMASK(DAC1REFL), 0
#define DAC1REF1                         BANKMASK(DAC1REFL), 1
#define DAC1REF10                        BANKMASK(DAC1REFH), 2
#define DAC1REF11                        BANKMASK(DAC1REFH), 3
#define DAC1REF12                        BANKMASK(DAC1REFH), 4
#define DAC1REF13                        BANKMASK(DAC1REFH), 5
#define DAC1REF14                        BANKMASK(DAC1REFH), 6
#define DAC1REF15                        BANKMASK(DAC1REFH), 7
#define DAC1REF2                         BANKMASK(DAC1REFL), 2
#define DAC1REF3                         BANKMASK(DAC1REFL), 3
#define DAC1REF4                         BANKMASK(DAC1REFL), 4
#define DAC1REF5                         BANKMASK(DAC1REFL), 5
#define DAC1REF6                         BANKMASK(DAC1REFL), 6
#define DAC1REF7                         BANKMASK(DAC1REFL), 7
#define DAC1REF8                         BANKMASK(DAC1REFH), 0
#define DAC1REF9                         BANKMASK(DAC1REFH), 1
#define DAC2EN                           BANKMASK(DAC2CON0), 7
#define DAC2FM                           BANKMASK(DAC2CON0), 6
#define DAC2LD                           BANKMASK(DACLD), 1
#define DAC2NSS0                         BANKMASK(DAC2CON0), 0
#define DAC2OE1                          BANKMASK(DAC2CON0), 5
#define DAC2PSS0                         BANKMASK(DAC2CON0), 2
#define DAC2PSS1                         BANKMASK(DAC2CON0), 3
#define DAC2R0                           BANKMASK(DAC2REFL), 0
#define DAC2R1                           BANKMASK(DAC2REFL), 1
#define DAC2R10                          BANKMASK(DAC2REFH), 2
#define DAC2R11                          BANKMASK(DAC2REFH), 3
#define DAC2R12                          BANKMASK(DAC2REFH), 4
#define DAC2R13                          BANKMASK(DAC2REFH), 5
#define DAC2R14                          BANKMASK(DAC2REFH), 6
#define DAC2R15                          BANKMASK(DAC2REFH), 7
#define DAC2R2                           BANKMASK(DAC2REFL), 2
#define DAC2R3                           BANKMASK(DAC2REFL), 3
#define DAC2R4                           BANKMASK(DAC2REFL), 4
#define DAC2R5                           BANKMASK(DAC2REFL), 5
#define DAC2R6                           BANKMASK(DAC2REFL), 6
#define DAC2R7                           BANKMASK(DAC2REFL), 7
#define DAC2R8                           BANKMASK(DAC2REFH), 0
#define DAC2R9                           BANKMASK(DAC2REFH), 1
#define DAC2REF0                         BANKMASK(DAC2REFL), 0
#define DAC2REF1                         BANKMASK(DAC2REFL), 1
#define DAC2REF10                        BANKMASK(DAC2REFH), 2
#define DAC2REF11                        BANKMASK(DAC2REFH), 3
#define DAC2REF12                        BANKMASK(DAC2REFH), 4
#define DAC2REF13                        BANKMASK(DAC2REFH), 5
#define DAC2REF14                        BANKMASK(DAC2REFH), 6
#define DAC2REF15                        BANKMASK(DAC2REFH), 7
#define DAC2REF2                         BANKMASK(DAC2REFL), 2
#define DAC2REF3                         BANKMASK(DAC2REFL), 3
#define DAC2REF4                         BANKMASK(DAC2REFL), 4
#define DAC2REF5                         BANKMASK(DAC2REFL), 5
#define DAC2REF6                         BANKMASK(DAC2REFL), 6
#define DAC2REF7                         BANKMASK(DAC2REFL), 7
#define DAC2REF8                         BANKMASK(DAC2REFH), 0
#define DAC2REF9                         BANKMASK(DAC2REFH), 1
#define DAC3EN                           BANKMASK(DAC3CON0), 7
#define DAC3NSS                          BANKMASK(DAC3CON0), 0
#define DAC3OE1                          BANKMASK(DAC3CON0), 5
#define DAC3PSS0                         BANKMASK(DAC3CON0), 2
#define DAC3PSS1                         BANKMASK(DAC3CON0), 3
#define DAC3R0                           BANKMASK(DAC3REF), 0
#define DAC3R1                           BANKMASK(DAC3REF), 1
#define DAC3R2                           BANKMASK(DAC3REF), 2
#define DAC3R3                           BANKMASK(DAC3REF), 3
#define DAC3R4                           BANKMASK(DAC3REF), 4
#define DAC3REF0                         BANKMASK(DAC3REF), 0
#define DAC3REF1                         BANKMASK(DAC3REF), 1
#define DAC3REF2                         BANKMASK(DAC3REF), 2
#define DAC3REF3                         BANKMASK(DAC3REF), 3
#define DAC3REF4                         BANKMASK(DAC3REF), 4
#define DAC3REF5                         BANKMASK(DAC3REF), 5
#define DAC4EN                           BANKMASK(DAC4CON0), 7
#define DAC4NSS                          BANKMASK(DAC4CON0), 0
#define DAC4OE1                          BANKMASK(DAC4CON0), 5
#define DAC4PSS0                         BANKMASK(DAC4CON0), 2
#define DAC4PSS1                         BANKMASK(DAC4CON0), 3
#define DAC4R0                           BANKMASK(DAC4REF), 0
#define DAC4R1                           BANKMASK(DAC4REF), 1
#define DAC4R2                           BANKMASK(DAC4REF), 2
#define DAC4R3                           BANKMASK(DAC4REF), 3
#define DAC4R4                           BANKMASK(DAC4REF), 4
#define DAC4REF0                         BANKMASK(DAC4REF), 0
#define DAC4REF1                         BANKMASK(DAC4REF), 1
#define DAC4REF2                         BANKMASK(DAC4REF), 2
#define DAC4REF3                         BANKMASK(DAC4REF), 3
#define DAC4REF4                         BANKMASK(DAC4REF), 4
#define DAC4REF5                         BANKMASK(DAC4REF), 5
#define DC                               BANKMASK(STATUS), 1
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define DHEN                             BANKMASK(SSP1CON3), 0
#define D_nA                             BANKMASK(SSP1STAT), 5
#define FERR                             BANKMASK(RC1STA), 2
#define FREE                             BANKMASK(PMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define G1ARSEN                          BANKMASK(COG1ASD0), 6
#define G1AS0E                           BANKMASK(COG1ASD1), 0
#define G1AS1E                           BANKMASK(COG1ASD1), 1
#define G1AS2E                           BANKMASK(COG1ASD1), 2
#define G1AS3E                           BANKMASK(COG1ASD1), 3
#define G1AS4E                           BANKMASK(COG1ASD1), 4
#define G1AS5E                           BANKMASK(COG1ASD1), 5
#define G1AS6E                           BANKMASK(COG1ASD1), 6
#define G1AS7E                           BANKMASK(COG1ASD1), 7
#define G1ASDAC0                         BANKMASK(COG1ASD0), 2
#define G1ASDAC1                         BANKMASK(COG1ASD0), 3
#define G1ASDBD0                         BANKMASK(COG1ASD0), 4
#define G1ASDBD1                         BANKMASK(COG1ASD0), 5
#define G1ASE                            BANKMASK(COG1ASD0), 7
#define G1ASREN                          BANKMASK(COG1ASD0), 6
#define G1BLKF0                          BANKMASK(COG1BLKF), 0
#define G1BLKF1                          BANKMASK(COG1BLKF), 1
#define G1BLKF2                          BANKMASK(COG1BLKF), 2
#define G1BLKF3                          BANKMASK(COG1BLKF), 3
#define G1BLKF4                          BANKMASK(COG1BLKF), 4
#define G1BLKF5                          BANKMASK(COG1BLKF), 5
#define G1BLKR0                          BANKMASK(COG1BLKR), 0
#define G1BLKR1                          BANKMASK(COG1BLKR), 1
#define G1BLKR2                          BANKMASK(COG1BLKR), 2
#define G1BLKR3                          BANKMASK(COG1BLKR), 3
#define G1BLKR4                          BANKMASK(COG1BLKR), 4
#define G1BLKR5                          BANKMASK(COG1BLKR), 5
#define G1CS0                            BANKMASK(COG1CON0), 3
#define G1CS1                            BANKMASK(COG1CON0), 4
#define G1DBF0                           BANKMASK(COG1DBF), 0
#define G1DBF1                           BANKMASK(COG1DBF), 1
#define G1DBF2                           BANKMASK(COG1DBF), 2
#define G1DBF3                           BANKMASK(COG1DBF), 3
#define G1DBF4                           BANKMASK(COG1DBF), 4
#define G1DBF5                           BANKMASK(COG1DBF), 5
#define G1DBR0                           BANKMASK(COG1DBR), 0
#define G1DBR1                           BANKMASK(COG1DBR), 1
#define G1DBR2                           BANKMASK(COG1DBR), 2
#define G1DBR3                           BANKMASK(COG1DBR), 3
#define G1DBR4                           BANKMASK(COG1DBR), 4
#define G1DBR5                           BANKMASK(COG1DBR), 5
#define G1EN                             BANKMASK(COG1CON0), 7
#define G1FDBS                           BANKMASK(COG1CON1), 6
#define G1FIS0                           BANKMASK(COG1FIS0), 0
#define G1FIS1                           BANKMASK(COG1FIS0), 1
#define G1FIS10                          BANKMASK(COG1FIS1), 2
#define G1FIS11                          BANKMASK(COG1FIS1), 3
#define G1FIS12                          BANKMASK(COG1FIS1), 4
#define G1FIS13                          BANKMASK(COG1FIS1), 5
#define G1FIS14                          BANKMASK(COG1FIS1), 6
#define G1FIS15                          BANKMASK(COG1FIS1), 7
#define G1FIS2                           BANKMASK(COG1FIS0), 2
#define G1FIS3                           BANKMASK(COG1FIS0), 3
#define G1FIS4                           BANKMASK(COG1FIS0), 4
#define G1FIS5                           BANKMASK(COG1FIS0), 5
#define G1FIS6                           BANKMASK(COG1FIS0), 6
#define G1FIS7                           BANKMASK(COG1FIS0), 7
#define G1FIS8                           BANKMASK(COG1FIS1), 0
#define G1FIS9                           BANKMASK(COG1FIS1), 1
#define G1FSIM0                          BANKMASK(COG1FSIM0), 0
#define G1FSIM1                          BANKMASK(COG1FSIM0), 1
#define G1FSIM10                         BANKMASK(COG1FSIM1), 2
#define G1FSIM11                         BANKMASK(COG1FSIM1), 3
#define G1FSIM12                         BANKMASK(COG1FSIM1), 4
#define G1FSIM13                         BANKMASK(COG1FSIM1), 5
#define G1FSIM14                         BANKMASK(COG1FSIM1), 6
#define G1FSIM15                         BANKMASK(COG1FSIM1), 7
#define G1FSIM2                          BANKMASK(COG1FSIM0), 2
#define G1FSIM3                          BANKMASK(COG1FSIM0), 3
#define G1FSIM4                          BANKMASK(COG1FSIM0), 4
#define G1FSIM5                          BANKMASK(COG1FSIM0), 5
#define G1FSIM6                          BANKMASK(COG1FSIM0), 6
#define G1FSIM7                          BANKMASK(COG1FSIM0), 7
#define G1FSIM8                          BANKMASK(COG1FSIM1), 0
#define G1FSIM9                          BANKMASK(COG1FSIM1), 1
#define G1LD                             BANKMASK(COG1CON0), 6
#define G1MD0                            BANKMASK(COG1CON0), 0
#define G1MD1                            BANKMASK(COG1CON0), 1
#define G1MD2                            BANKMASK(COG1CON0), 2
#define G1PHF0                           BANKMASK(COG1PHF), 0
#define G1PHF1                           BANKMASK(COG1PHF), 1
#define G1PHF2                           BANKMASK(COG1PHF), 2
#define G1PHF3                           BANKMASK(COG1PHF), 3
#define G1PHF4                           BANKMASK(COG1PHF), 4
#define G1PHF5                           BANKMASK(COG1PHF), 5
#define G1PHR0                           BANKMASK(COG1PHR), 0
#define G1PHR1                           BANKMASK(COG1PHR), 1
#define G1PHR2                           BANKMASK(COG1PHR), 2
#define G1PHR3                           BANKMASK(COG1PHR), 3
#define G1PHR4                           BANKMASK(COG1PHR), 4
#define G1PHR5                           BANKMASK(COG1PHR), 5
#define G1POLA                           BANKMASK(COG1CON1), 0
#define G1POLB                           BANKMASK(COG1CON1), 1
#define G1POLC                           BANKMASK(COG1CON1), 2
#define G1POLD                           BANKMASK(COG1CON1), 3
#define G1RDBS                           BANKMASK(COG1CON1), 7
#define G1RIS0                           BANKMASK(COG1RIS0), 0
#define G1RIS1                           BANKMASK(COG1RIS0), 1
#define G1RIS10                          BANKMASK(COG1RIS1), 2
#define G1RIS11                          BANKMASK(COG1RIS1), 3
#define G1RIS12                          BANKMASK(COG1RIS1), 4
#define G1RIS13                          BANKMASK(COG1RIS1), 5
#define G1RIS14                          BANKMASK(COG1RIS1), 6
#define G1RIS15                          BANKMASK(COG1RIS1), 7
#define G1RIS2                           BANKMASK(COG1RIS0), 2
#define G1RIS3                           BANKMASK(COG1RIS0), 3
#define G1RIS4                           BANKMASK(COG1RIS0), 4
#define G1RIS5                           BANKMASK(COG1RIS0), 5
#define G1RIS6                           BANKMASK(COG1RIS0), 6
#define G1RIS7                           BANKMASK(COG1RIS0), 7
#define G1RIS8                           BANKMASK(COG1RIS1), 0
#define G1RIS9                           BANKMASK(COG1RIS1), 1
#define G1RSIM0                          BANKMASK(COG1RSIM0), 0
#define G1RSIM1                          BANKMASK(COG1RSIM0), 1
#define G1RSIM10                         BANKMASK(COG1RSIM1), 2
#define G1RSIM11                         BANKMASK(COG1RSIM1), 3
#define G1RSIM12                         BANKMASK(COG1RSIM1), 4
#define G1RSIM13                         BANKMASK(COG1RSIM1), 5
#define G1RSIM14                         BANKMASK(COG1RSIM1), 6
#define G1RSIM15                         BANKMASK(COG1RSIM1), 7
#define G1RSIM2                          BANKMASK(COG1RSIM0), 2
#define G1RSIM3                          BANKMASK(COG1RSIM0), 3
#define G1RSIM4                          BANKMASK(COG1RSIM0), 4
#define G1RSIM5                          BANKMASK(COG1RSIM0), 5
#define G1RSIM6                          BANKMASK(COG1RSIM0), 6
#define G1RSIM7                          BANKMASK(COG1RSIM0), 7
#define G1RSIM8                          BANKMASK(COG1RSIM1), 0
#define G1RSIM9                          BANKMASK(COG1RSIM1), 1
#define G1SDATA                          BANKMASK(COG1STR), 4
#define G1SDATB                          BANKMASK(COG1STR), 5
#define G1SDATC                          BANKMASK(COG1STR), 6
#define G1SDATD                          BANKMASK(COG1STR), 7
#define G1STRA                           BANKMASK(COG1STR), 0
#define G1STRB                           BANKMASK(COG1STR), 1
#define G1STRC                           BANKMASK(COG1STR), 2
#define G1STRD                           BANKMASK(COG1STR), 3
#define G2ARSEN                          BANKMASK(COG2ASD0), 6
#define G2AS0E                           BANKMASK(COG2ASD1), 0
#define G2AS1E                           BANKMASK(COG2ASD1), 1
#define G2AS2E                           BANKMASK(COG2ASD1), 2
#define G2AS3E                           BANKMASK(COG2ASD1), 3
#define G2AS4E                           BANKMASK(COG2ASD1), 4
#define G2AS5E                           BANKMASK(COG2ASD1), 5
#define G2AS6E                           BANKMASK(COG2ASD1), 6
#define G2AS7E                           BANKMASK(COG2ASD1), 7
#define G2ASDAC0                         BANKMASK(COG2ASD0), 2
#define G2ASDAC1                         BANKMASK(COG2ASD0), 3
#define G2ASDBD0                         BANKMASK(COG2ASD0), 4
#define G2ASDBD1                         BANKMASK(COG2ASD0), 5
#define G2ASE                            BANKMASK(COG2ASD0), 7
#define G2ASREN                          BANKMASK(COG2ASD0), 6
#define G2BLKF0                          BANKMASK(COG2BLKF), 0
#define G2BLKF1                          BANKMASK(COG2BLKF), 1
#define G2BLKF2                          BANKMASK(COG2BLKF), 2
#define G2BLKF3                          BANKMASK(COG2BLKF), 3
#define G2BLKF4                          BANKMASK(COG2BLKF), 4
#define G2BLKF5                          BANKMASK(COG2BLKF), 5
#define G2BLKR0                          BANKMASK(COG2BLKR), 0
#define G2BLKR1                          BANKMASK(COG2BLKR), 1
#define G2BLKR2                          BANKMASK(COG2BLKR), 2
#define G2BLKR3                          BANKMASK(COG2BLKR), 3
#define G2BLKR4                          BANKMASK(COG2BLKR), 4
#define G2BLKR5                          BANKMASK(COG2BLKR), 5
#define G2CS0                            BANKMASK(COG2CON0), 3
#define G2CS1                            BANKMASK(COG2CON0), 4
#define G2DBF0                           BANKMASK(COG2DBF), 0
#define G2DBF1                           BANKMASK(COG2DBF), 1
#define G2DBF2                           BANKMASK(COG2DBF), 2
#define G2DBF3                           BANKMASK(COG2DBF), 3
#define G2DBF4                           BANKMASK(COG2DBF), 4
#define G2DBF5                           BANKMASK(COG2DBF), 5
#define G2DBR0                           BANKMASK(COG2DBR), 0
#define G2DBR1                           BANKMASK(COG2DBR), 1
#define G2DBR2                           BANKMASK(COG2DBR), 2
#define G2DBR3                           BANKMASK(COG2DBR), 3
#define G2DBR4                           BANKMASK(COG2DBR), 4
#define G2DBR5                           BANKMASK(COG2DBR), 5
#define G2EN                             BANKMASK(COG2CON0), 7
#define G2FDBS                           BANKMASK(COG2CON1), 6
#define G2FIS0                           BANKMASK(COG2FIS0), 0
#define G2FIS1                           BANKMASK(COG2FIS0), 1
#define G2FIS10                          BANKMASK(COG2FIS1), 2
#define G2FIS11                          BANKMASK(COG2FIS1), 3
#define G2FIS12                          BANKMASK(COG2FIS1), 4
#define G2FIS13                          BANKMASK(COG2FIS1), 5
#define G2FIS14                          BANKMASK(COG2FIS1), 6
#define G2FIS15                          BANKMASK(COG2FIS1), 7
#define G2FIS2                           BANKMASK(COG2FIS0), 2
#define G2FIS3                           BANKMASK(COG2FIS0), 3
#define G2FIS4                           BANKMASK(COG2FIS0), 4
#define G2FIS5                           BANKMASK(COG2FIS0), 5
#define G2FIS6                           BANKMASK(COG2FIS0), 6
#define G2FIS7                           BANKMASK(COG2FIS0), 7
#define G2FIS8                           BANKMASK(COG2FIS1), 0
#define G2FIS9                           BANKMASK(COG2FIS1), 1
#define G2FSIM0                          BANKMASK(COG2FSIM0), 0
#define G2FSIM1                          BANKMASK(COG2FSIM0), 1
#define G2FSIM10                         BANKMASK(COG2FSIM1), 2
#define G2FSIM11                         BANKMASK(COG2FSIM1), 3
#define G2FSIM12                         BANKMASK(COG2FSIM1), 4
#define G2FSIM13                         BANKMASK(COG2FSIM1), 5
#define G2FSIM14                         BANKMASK(COG2FSIM1), 6
#define G2FSIM15                         BANKMASK(COG2FSIM1), 7
#define G2FSIM2                          BANKMASK(COG2FSIM0), 2
#define G2FSIM3                          BANKMASK(COG2FSIM0), 3
#define G2FSIM4                          BANKMASK(COG2FSIM0), 4
#define G2FSIM5                          BANKMASK(COG2FSIM0), 5
#define G2FSIM6                          BANKMASK(COG2FSIM0), 6
#define G2FSIM7                          BANKMASK(COG2FSIM0), 7
#define G2FSIM8                          BANKMASK(COG2FSIM1), 0
#define G2FSIM9                          BANKMASK(COG2FSIM1), 1
#define G2LD                             BANKMASK(COG2CON0), 6
#define G2MD0                            BANKMASK(COG2CON0), 0
#define G2MD1                            BANKMASK(COG2CON0), 1
#define G2MD2                            BANKMASK(COG2CON0), 2
#define G2PHF0                           BANKMASK(COG2PHF), 0
#define G2PHF1                           BANKMASK(COG2PHF), 1
#define G2PHF2                           BANKMASK(COG2PHF), 2
#define G2PHF3                           BANKMASK(COG2PHF), 3
#define G2PHF4                           BANKMASK(COG2PHF), 4
#define G2PHF5                           BANKMASK(COG2PHF), 5
#define G2PHR0                           BANKMASK(COG2PHR), 0
#define G2PHR1                           BANKMASK(COG2PHR), 1
#define G2PHR2                           BANKMASK(COG2PHR), 2
#define G2PHR3                           BANKMASK(COG2PHR), 3
#define G2PHR4                           BANKMASK(COG2PHR), 4
#define G2PHR5                           BANKMASK(COG2PHR), 5
#define G2POLA                           BANKMASK(COG2CON1), 0
#define G2POLB                           BANKMASK(COG2CON1), 1
#define G2POLC                           BANKMASK(COG2CON1), 2
#define G2POLD                           BANKMASK(COG2CON1), 3
#define G2RDBS                           BANKMASK(COG2CON1), 7
#define G2RIS0                           BANKMASK(COG2RIS0), 0
#define G2RIS1                           BANKMASK(COG2RIS0), 1
#define G2RIS10                          BANKMASK(COG2RIS1), 2
#define G2RIS11                          BANKMASK(COG2RIS1), 3
#define G2RIS12                          BANKMASK(COG2RIS1), 4
#define G2RIS13                          BANKMASK(COG2RIS1), 5
#define G2RIS14                          BANKMASK(COG2RIS1), 6
#define G2RIS15                          BANKMASK(COG2RIS1), 7
#define G2RIS2                           BANKMASK(COG2RIS0), 2
#define G2RIS3                           BANKMASK(COG2RIS0), 3
#define G2RIS4                           BANKMASK(COG2RIS0), 4
#define G2RIS5                           BANKMASK(COG2RIS0), 5
#define G2RIS6                           BANKMASK(COG2RIS0), 6
#define G2RIS7                           BANKMASK(COG2RIS0), 7
#define G2RIS8                           BANKMASK(COG2RIS1), 0
#define G2RIS9                           BANKMASK(COG2RIS1), 1
#define G2RSIM0                          BANKMASK(COG2RSIM0), 0
#define G2RSIM1                          BANKMASK(COG2RSIM0), 1
#define G2RSIM10                         BANKMASK(COG2RSIM1), 2
#define G2RSIM11                         BANKMASK(COG2RSIM1), 3
#define G2RSIM12                         BANKMASK(COG2RSIM1), 4
#define G2RSIM13                         BANKMASK(COG2RSIM1), 5
#define G2RSIM14                         BANKMASK(COG2RSIM1), 6
#define G2RSIM15                         BANKMASK(COG2RSIM1), 7
#define G2RSIM2                          BANKMASK(COG2RSIM0), 2
#define G2RSIM3                          BANKMASK(COG2RSIM0), 3
#define G2RSIM4                          BANKMASK(COG2RSIM0), 4
#define G2RSIM5                          BANKMASK(COG2RSIM0), 5
#define G2RSIM6                          BANKMASK(COG2RSIM0), 6
#define G2RSIM7                          BANKMASK(COG2RSIM0), 7
#define G2RSIM8                          BANKMASK(COG2RSIM1), 0
#define G2RSIM9                          BANKMASK(COG2RSIM1), 1
#define G2SDATA                          BANKMASK(COG2STR), 4
#define G2SDATB                          BANKMASK(COG2STR), 5
#define G2SDATC                          BANKMASK(COG2STR), 6
#define G2SDATD                          BANKMASK(COG2STR), 7
#define G2STRA                           BANKMASK(COG2STR), 0
#define G2STRB                           BANKMASK(COG2STR), 1
#define G2STRC                           BANKMASK(COG2STR), 2
#define G2STRD                           BANKMASK(COG2STR), 3
#define GCEN                             BANKMASK(SSP1CON2), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define HFIOFL                           BANKMASK(OSCSTAT), 3
#define HFIOFR                           BANKMASK(OSCSTAT), 4
#define HFIOFS                           BANKMASK(OSCSTAT), 0
#define HIDC4                            BANKMASK(HIDRVC), 4
#define HIDC5                            BANKMASK(HIDRVC), 5
#define INLVLA0                          BANKMASK(INLVLA), 0
#define INLVLA1                          BANKMASK(INLVLA), 1
#define INLVLA2                          BANKMASK(INLVLA), 2
#define INLVLA3                          BANKMASK(INLVLA), 3
#define INLVLA4                          BANKMASK(INLVLA), 4
#define INLVLA5                          BANKMASK(INLVLA), 5
#define INLVLB4                          BANKMASK(INLVLB), 4
#define INLVLB5                          BANKMASK(INLVLB), 5
#define INLVLB6                          BANKMASK(INLVLB), 6
#define INLVLB7                          BANKMASK(INLVLB), 7
#define INLVLC0                          BANKMASK(INLVLC), 0
#define INLVLC1                          BANKMASK(INLVLC), 1
#define INLVLC2                          BANKMASK(INLVLC), 2
#define INLVLC3                          BANKMASK(INLVLC), 3
#define INLVLC4                          BANKMASK(INLVLC), 4
#define INLVLC5                          BANKMASK(INLVLC), 5
#define INLVLC6                          BANKMASK(INLVLC), 6
#define INLVLC7                          BANKMASK(INLVLC), 7
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
#define IOCBF4                           BANKMASK(IOCBF), 4
#define IOCBF5                           BANKMASK(IOCBF), 5
#define IOCBF6                           BANKMASK(IOCBF), 6
#define IOCBF7                           BANKMASK(IOCBF), 7
#define IOCBN4                           BANKMASK(IOCBN), 4
#define IOCBN5                           BANKMASK(IOCBN), 5
#define IOCBN6                           BANKMASK(IOCBN), 6
#define IOCBN7                           BANKMASK(IOCBN), 7
#define IOCBP4                           BANKMASK(IOCBP), 4
#define IOCBP5                           BANKMASK(IOCBP), 5
#define IOCBP6                           BANKMASK(IOCBP), 6
#define IOCBP7                           BANKMASK(IOCBP), 7
#define IOCCF0                           BANKMASK(IOCCF), 0
#define IOCCF1                           BANKMASK(IOCCF), 1
#define IOCCF2                           BANKMASK(IOCCF), 2
#define IOCCF3                           BANKMASK(IOCCF), 3
#define IOCCF4                           BANKMASK(IOCCF), 4
#define IOCCF5                           BANKMASK(IOCCF), 5
#define IOCCF6                           BANKMASK(IOCCF), 6
#define IOCCF7                           BANKMASK(IOCCF), 7
#define IOCCN0                           BANKMASK(IOCCN), 0
#define IOCCN1                           BANKMASK(IOCCN), 1
#define IOCCN2                           BANKMASK(IOCCN), 2
#define IOCCN3                           BANKMASK(IOCCN), 3
#define IOCCN4                           BANKMASK(IOCCN), 4
#define IOCCN5                           BANKMASK(IOCCN), 5
#define IOCCN6                           BANKMASK(IOCCN), 6
#define IOCCN7                           BANKMASK(IOCCN), 7
#define IOCCP0                           BANKMASK(IOCCP), 0
#define IOCCP1                           BANKMASK(IOCCP), 1
#define IOCCP2                           BANKMASK(IOCCP), 2
#define IOCCP3                           BANKMASK(IOCCP), 3
#define IOCCP4                           BANKMASK(IOCCP), 4
#define IOCCP5                           BANKMASK(IOCCP), 5
#define IOCCP6                           BANKMASK(IOCCP), 6
#define IOCCP7                           BANKMASK(IOCCP), 7
#define IOCIE                            BANKMASK(INTCON), 3
#define IOCIF                            BANKMASK(INTCON), 0
#define IRCF0                            BANKMASK(OSCCON), 3
#define IRCF1                            BANKMASK(OSCCON), 4
#define IRCF2                            BANKMASK(OSCCON), 5
#define IRCF3                            BANKMASK(OSCCON), 6
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
#define LATB4                            BANKMASK(LATB), 4
#define LATB5                            BANKMASK(LATB), 5
#define LATB6                            BANKMASK(LATB), 6
#define LATB7                            BANKMASK(LATB), 7
#define LATC0                            BANKMASK(LATC), 0
#define LATC1                            BANKMASK(LATC), 1
#define LATC2                            BANKMASK(LATC), 2
#define LATC3                            BANKMASK(LATC), 3
#define LATC4                            BANKMASK(LATC), 4
#define LATC5                            BANKMASK(LATC), 5
#define LATC6                            BANKMASK(LATC), 6
#define LATC7                            BANKMASK(LATC), 7
#define LC1D1S0                          BANKMASK(CLC1SEL0), 0
#define LC1D1S1                          BANKMASK(CLC1SEL0), 1
#define LC1D1S2                          BANKMASK(CLC1SEL0), 2
#define LC1D1S3                          BANKMASK(CLC1SEL0), 3
#define LC1D1S4                          BANKMASK(CLC1SEL0), 4
#define LC1D2S0                          BANKMASK(CLC1SEL1), 0
#define LC1D2S1                          BANKMASK(CLC1SEL1), 1
#define LC1D2S2                          BANKMASK(CLC1SEL1), 2
#define LC1D2S3                          BANKMASK(CLC1SEL1), 3
#define LC1D2S4                          BANKMASK(CLC1SEL1), 4
#define LC1D3S0                          BANKMASK(CLC1SEL2), 0
#define LC1D3S1                          BANKMASK(CLC1SEL2), 1
#define LC1D3S2                          BANKMASK(CLC1SEL2), 2
#define LC1D3S3                          BANKMASK(CLC1SEL2), 3
#define LC1D3S4                          BANKMASK(CLC1SEL2), 4
#define LC1D4S0                          BANKMASK(CLC1SEL3), 0
#define LC1D4S1                          BANKMASK(CLC1SEL3), 1
#define LC1D4S2                          BANKMASK(CLC1SEL3), 2
#define LC1D4S3                          BANKMASK(CLC1SEL3), 3
#define LC1D4S4                          BANKMASK(CLC1SEL3), 4
#define LC1EN                            BANKMASK(CLC1CON), 7
#define LC1G1D1N                         BANKMASK(CLC1GLS0), 0
#define LC1G1D1T                         BANKMASK(CLC1GLS0), 1
#define LC1G1D2N                         BANKMASK(CLC1GLS0), 2
#define LC1G1D2T                         BANKMASK(CLC1GLS0), 3
#define LC1G1D3N                         BANKMASK(CLC1GLS0), 4
#define LC1G1D3T                         BANKMASK(CLC1GLS0), 5
#define LC1G1D4N                         BANKMASK(CLC1GLS0), 6
#define LC1G1D4T                         BANKMASK(CLC1GLS0), 7
#define LC1G1POL                         BANKMASK(CLC1POL), 0
#define LC1G2D1N                         BANKMASK(CLC1GLS1), 0
#define LC1G2D1T                         BANKMASK(CLC1GLS1), 1
#define LC1G2D2N                         BANKMASK(CLC1GLS1), 2
#define LC1G2D2T                         BANKMASK(CLC1GLS1), 3
#define LC1G2D3N                         BANKMASK(CLC1GLS1), 4
#define LC1G2D3T                         BANKMASK(CLC1GLS1), 5
#define LC1G2D4N                         BANKMASK(CLC1GLS1), 6
#define LC1G2D4T                         BANKMASK(CLC1GLS1), 7
#define LC1G2POL                         BANKMASK(CLC1POL), 1
#define LC1G3D1N                         BANKMASK(CLC1GLS2), 0
#define LC1G3D1T                         BANKMASK(CLC1GLS2), 1
#define LC1G3D2N                         BANKMASK(CLC1GLS2), 2
#define LC1G3D2T                         BANKMASK(CLC1GLS2), 3
#define LC1G3D3N                         BANKMASK(CLC1GLS2), 4
#define LC1G3D3T                         BANKMASK(CLC1GLS2), 5
#define LC1G3D4N                         BANKMASK(CLC1GLS2), 6
#define LC1G3D4T                         BANKMASK(CLC1GLS2), 7
#define LC1G3POL                         BANKMASK(CLC1POL), 2
#define LC1G4D1N                         BANKMASK(CLC1GLS3), 0
#define LC1G4D1T                         BANKMASK(CLC1GLS3), 1
#define LC1G4D2N                         BANKMASK(CLC1GLS3), 2
#define LC1G4D2T                         BANKMASK(CLC1GLS3), 3
#define LC1G4D3N                         BANKMASK(CLC1GLS3), 4
#define LC1G4D3T                         BANKMASK(CLC1GLS3), 5
#define LC1G4D4N                         BANKMASK(CLC1GLS3), 6
#define LC1G4D4T                         BANKMASK(CLC1GLS3), 7
#define LC1G4POL                         BANKMASK(CLC1POL), 3
#define LC1INTN                          BANKMASK(CLC1CON), 3
#define LC1INTP                          BANKMASK(CLC1CON), 4
#define LC1MODE0                         BANKMASK(CLC1CON), 0
#define LC1MODE1                         BANKMASK(CLC1CON), 1
#define LC1MODE2                         BANKMASK(CLC1CON), 2
#define LC1OUT                           BANKMASK(CLC1CON), 5
#define LC1POL                           BANKMASK(CLC1POL), 7
#define LC2D1S0                          BANKMASK(CLC2SEL0), 0
#define LC2D1S1                          BANKMASK(CLC2SEL0), 1
#define LC2D1S2                          BANKMASK(CLC2SEL0), 2
#define LC2D1S3                          BANKMASK(CLC2SEL0), 3
#define LC2D1S4                          BANKMASK(CLC2SEL0), 4
#define LC2D2S0                          BANKMASK(CLC2SEL1), 0
#define LC2D2S1                          BANKMASK(CLC2SEL1), 1
#define LC2D2S2                          BANKMASK(CLC2SEL1), 2
#define LC2D2S3                          BANKMASK(CLC2SEL1), 3
#define LC2D2S4                          BANKMASK(CLC2SEL1), 4
#define LC2D3S0                          BANKMASK(CLC2SEL2), 0
#define LC2D3S1                          BANKMASK(CLC2SEL2), 1
#define LC2D3S2                          BANKMASK(CLC2SEL2), 2
#define LC2D3S3                          BANKMASK(CLC2SEL2), 3
#define LC2D3S4                          BANKMASK(CLC2SEL2), 4
#define LC2D4S0                          BANKMASK(CLC2SEL3), 0
#define LC2D4S1                          BANKMASK(CLC2SEL3), 1
#define LC2D4S2                          BANKMASK(CLC2SEL3), 2
#define LC2D4S3                          BANKMASK(CLC2SEL3), 3
#define LC2D4S4                          BANKMASK(CLC2SEL3), 4
#define LC2EN                            BANKMASK(CLC2CON), 7
#define LC2G1D1N                         BANKMASK(CLC2GLS0), 0
#define LC2G1D1T                         BANKMASK(CLC2GLS0), 1
#define LC2G1D2N                         BANKMASK(CLC2GLS0), 2
#define LC2G1D2T                         BANKMASK(CLC2GLS0), 3
#define LC2G1D3N                         BANKMASK(CLC2GLS0), 4
#define LC2G1D3T                         BANKMASK(CLC2GLS0), 5
#define LC2G1D4N                         BANKMASK(CLC2GLS0), 6
#define LC2G1D4T                         BANKMASK(CLC2GLS0), 7
#define LC2G1POL                         BANKMASK(CLC2POL), 0
#define LC2G2D1N                         BANKMASK(CLC2GLS1), 0
#define LC2G2D1T                         BANKMASK(CLC2GLS1), 1
#define LC2G2D2N                         BANKMASK(CLC2GLS1), 2
#define LC2G2D2T                         BANKMASK(CLC2GLS1), 3
#define LC2G2D3N                         BANKMASK(CLC2GLS1), 4
#define LC2G2D3T                         BANKMASK(CLC2GLS1), 5
#define LC2G2D4N                         BANKMASK(CLC2GLS1), 6
#define LC2G2D4T                         BANKMASK(CLC2GLS1), 7
#define LC2G2POL                         BANKMASK(CLC2POL), 1
#define LC2G3D1N                         BANKMASK(CLC2GLS2), 0
#define LC2G3D1T                         BANKMASK(CLC2GLS2), 1
#define LC2G3D2N                         BANKMASK(CLC2GLS2), 2
#define LC2G3D2T                         BANKMASK(CLC2GLS2), 3
#define LC2G3D3N                         BANKMASK(CLC2GLS2), 4
#define LC2G3D3T                         BANKMASK(CLC2GLS2), 5
#define LC2G3D4N                         BANKMASK(CLC2GLS2), 6
#define LC2G3D4T                         BANKMASK(CLC2GLS2), 7
#define LC2G3POL                         BANKMASK(CLC2POL), 2
#define LC2G4D1N                         BANKMASK(CLC2GLS3), 0
#define LC2G4D1T                         BANKMASK(CLC2GLS3), 1
#define LC2G4D2N                         BANKMASK(CLC2GLS3), 2
#define LC2G4D2T                         BANKMASK(CLC2GLS3), 3
#define LC2G4D3N                         BANKMASK(CLC2GLS3), 4
#define LC2G4D3T                         BANKMASK(CLC2GLS3), 5
#define LC2G4D4N                         BANKMASK(CLC2GLS3), 6
#define LC2G4D4T                         BANKMASK(CLC2GLS3), 7
#define LC2G4POL                         BANKMASK(CLC2POL), 3
#define LC2INTN                          BANKMASK(CLC2CON), 3
#define LC2INTP                          BANKMASK(CLC2CON), 4
#define LC2MODE0                         BANKMASK(CLC2CON), 0
#define LC2MODE1                         BANKMASK(CLC2CON), 1
#define LC2MODE2                         BANKMASK(CLC2CON), 2
#define LC2OUT                           BANKMASK(CLC2CON), 5
#define LC2POL                           BANKMASK(CLC2POL), 7
#define LC3D1S0                          BANKMASK(CLC3SEL0), 0
#define LC3D1S1                          BANKMASK(CLC3SEL0), 1
#define LC3D1S2                          BANKMASK(CLC3SEL0), 2
#define LC3D1S3                          BANKMASK(CLC3SEL0), 3
#define LC3D1S4                          BANKMASK(CLC3SEL0), 4
#define LC3D2S0                          BANKMASK(CLC3SEL1), 0
#define LC3D2S1                          BANKMASK(CLC3SEL1), 1
#define LC3D2S2                          BANKMASK(CLC3SEL1), 2
#define LC3D2S3                          BANKMASK(CLC3SEL1), 3
#define LC3D2S4                          BANKMASK(CLC3SEL1), 4
#define LC3D3S0                          BANKMASK(CLC3SEL2), 0
#define LC3D3S1                          BANKMASK(CLC3SEL2), 1
#define LC3D3S2                          BANKMASK(CLC3SEL2), 2
#define LC3D3S3                          BANKMASK(CLC3SEL2), 3
#define LC3D3S4                          BANKMASK(CLC3SEL2), 4
#define LC3D4S0                          BANKMASK(CLC3SEL3), 0
#define LC3D4S1                          BANKMASK(CLC3SEL3), 1
#define LC3D4S2                          BANKMASK(CLC3SEL3), 2
#define LC3D4S3                          BANKMASK(CLC3SEL3), 3
#define LC3D4S4                          BANKMASK(CLC3SEL3), 4
#define LC3EN                            BANKMASK(CLC3CON), 7
#define LC3G1D1N                         BANKMASK(CLC3GLS0), 0
#define LC3G1D1T                         BANKMASK(CLC3GLS0), 1
#define LC3G1D2N                         BANKMASK(CLC3GLS0), 2
#define LC3G1D2T                         BANKMASK(CLC3GLS0), 3
#define LC3G1D3N                         BANKMASK(CLC3GLS0), 4
#define LC3G1D3T                         BANKMASK(CLC3GLS0), 5
#define LC3G1D4N                         BANKMASK(CLC3GLS0), 6
#define LC3G1D4T                         BANKMASK(CLC3GLS0), 7
#define LC3G1POL                         BANKMASK(CLC3POL), 0
#define LC3G2D1N                         BANKMASK(CLC3GLS1), 0
#define LC3G2D1T                         BANKMASK(CLC3GLS1), 1
#define LC3G2D2N                         BANKMASK(CLC3GLS1), 2
#define LC3G2D2T                         BANKMASK(CLC3GLS1), 3
#define LC3G2D3N                         BANKMASK(CLC3GLS1), 4
#define LC3G2D3T                         BANKMASK(CLC3GLS1), 5
#define LC3G2D4N                         BANKMASK(CLC3GLS1), 6
#define LC3G2D4T                         BANKMASK(CLC3GLS1), 7
#define LC3G2POL                         BANKMASK(CLC3POL), 1
#define LC3G3D1N                         BANKMASK(CLC3GLS2), 0
#define LC3G3D1T                         BANKMASK(CLC3GLS2), 1
#define LC3G3D2N                         BANKMASK(CLC3GLS2), 2
#define LC3G3D2T                         BANKMASK(CLC3GLS2), 3
#define LC3G3D3N                         BANKMASK(CLC3GLS2), 4
#define LC3G3D3T                         BANKMASK(CLC3GLS2), 5
#define LC3G3D4N                         BANKMASK(CLC3GLS2), 6
#define LC3G3D4T                         BANKMASK(CLC3GLS2), 7
#define LC3G3POL                         BANKMASK(CLC3POL), 2
#define LC3G4D1N                         BANKMASK(CLC3GLS3), 0
#define LC3G4D1T                         BANKMASK(CLC3GLS3), 1
#define LC3G4D2N                         BANKMASK(CLC3GLS3), 2
#define LC3G4D2T                         BANKMASK(CLC3GLS3), 3
#define LC3G4D3N                         BANKMASK(CLC3GLS3), 4
#define LC3G4D3T                         BANKMASK(CLC3GLS3), 5
#define LC3G4D4N                         BANKMASK(CLC3GLS3), 6
#define LC3G4D4T                         BANKMASK(CLC3GLS3), 7
#define LC3G4POL                         BANKMASK(CLC3POL), 3
#define LC3INTN                          BANKMASK(CLC3CON), 3
#define LC3INTP                          BANKMASK(CLC3CON), 4
#define LC3MODE0                         BANKMASK(CLC3CON), 0
#define LC3MODE1                         BANKMASK(CLC3CON), 1
#define LC3MODE2                         BANKMASK(CLC3CON), 2
#define LC3OUT                           BANKMASK(CLC3CON), 5
#define LC3POL                           BANKMASK(CLC3POL), 7
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LWLO                             BANKMASK(PMCON1), 5
#define MC1OUT                           BANKMASK(CMOUT), 0
#define MC2OUT                           BANKMASK(CMOUT), 1
#define MC3OUT                           BANKMASK(CMOUT), 2
#define MC4OUT                           BANKMASK(CMOUT), 3
#define MCLC1OUT                         BANKMASK(CLCDATA), 0
#define MCLC2OUT                         BANKMASK(CLCDATA), 1
#define MCLC3OUT                         BANKMASK(CLCDATA), 2
#define MD1BIT                           BANKMASK(MD1CON0), 0
#define MD1CH0                           BANKMASK(MD1CARH), 0
#define MD1CH1                           BANKMASK(MD1CARH), 1
#define MD1CH2                           BANKMASK(MD1CARH), 2
#define MD1CH3                           BANKMASK(MD1CARH), 3
#define MD1CHPOL                         BANKMASK(MD1CON1), 5
#define MD1CHSYNC                        BANKMASK(MD1CON1), 4
#define MD1CL0                           BANKMASK(MD1CARL), 0
#define MD1CL1                           BANKMASK(MD1CARL), 1
#define MD1CL2                           BANKMASK(MD1CARL), 2
#define MD1CL3                           BANKMASK(MD1CARL), 3
#define MD1CLPOL                         BANKMASK(MD1CON1), 1
#define MD1CLSYNC                        BANKMASK(MD1CON1), 0
#define MD1EN                            BANKMASK(MD1CON0), 7
#define MD1MS0                           BANKMASK(MD1SRC), 0
#define MD1MS1                           BANKMASK(MD1SRC), 1
#define MD1MS2                           BANKMASK(MD1SRC), 2
#define MD1MS3                           BANKMASK(MD1SRC), 3
#define MD1MS4                           BANKMASK(MD1SRC), 4
#define MD1OPOL                          BANKMASK(MD1CON0), 4
#define MD1OUT                           BANKMASK(MD1CON0), 5
#define MD2BIT                           BANKMASK(MD2CON0), 0
#define MD2CH0                           BANKMASK(MD2CARH), 0
#define MD2CH1                           BANKMASK(MD2CARH), 1
#define MD2CH2                           BANKMASK(MD2CARH), 2
#define MD2CH3                           BANKMASK(MD2CARH), 3
#define MD2CHPOL                         BANKMASK(MD2CON1), 5
#define MD2CHSYNC                        BANKMASK(MD2CON1), 4
#define MD2CL0                           BANKMASK(MD2CARL), 0
#define MD2CL1                           BANKMASK(MD2CARL), 1
#define MD2CL2                           BANKMASK(MD2CARL), 2
#define MD2CL3                           BANKMASK(MD2CARL), 3
#define MD2CLPOL                         BANKMASK(MD2CON1), 1
#define MD2CLSYNC                        BANKMASK(MD2CON1), 0
#define MD2EN                            BANKMASK(MD2CON0), 7
#define MD2MS0                           BANKMASK(MD2SRC), 0
#define MD2MS1                           BANKMASK(MD2SRC), 1
#define MD2MS2                           BANKMASK(MD2SRC), 2
#define MD2MS3                           BANKMASK(MD2SRC), 3
#define MD2MS4                           BANKMASK(MD2SRC), 4
#define MD2OPOL                          BANKMASK(MD2CON0), 4
#define MD2OUT                           BANKMASK(MD2CON0), 5
#define MFIOFR                           BANKMASK(OSCSTAT), 2
#define MPWM5EN                          BANKMASK(PWMEN), 4
#define MPWM5LD                          BANKMASK(PWMLD), 4
#define MPWM5OUT                         BANKMASK(PWMOUT), 4
#define MPWM6EN                          BANKMASK(PWMEN), 5
#define MPWM6LD                          BANKMASK(PWMLD), 5
#define MPWM6OUT                         BANKMASK(PWMOUT), 5
#define MSK0                             BANKMASK(SSP1MSK), 0
#define MSK1                             BANKMASK(SSP1MSK), 1
#define MSK2                             BANKMASK(SSP1MSK), 2
#define MSK3                             BANKMASK(SSP1MSK), 3
#define MSK4                             BANKMASK(SSP1MSK), 4
#define MSK5                             BANKMASK(SSP1MSK), 5
#define MSK6                             BANKMASK(SSP1MSK), 6
#define MSK7                             BANKMASK(SSP1MSK), 7
#define ODA0                             BANKMASK(ODCONA), 0
#define ODA1                             BANKMASK(ODCONA), 1
#define ODA2                             BANKMASK(ODCONA), 2
#define ODA4                             BANKMASK(ODCONA), 4
#define ODA5                             BANKMASK(ODCONA), 5
#define ODB4                             BANKMASK(ODCONB), 4
#define ODB5                             BANKMASK(ODCONB), 5
#define ODB6                             BANKMASK(ODCONB), 6
#define ODB7                             BANKMASK(ODCONB), 7
#define ODC0                             BANKMASK(ODCONC), 0
#define ODC1                             BANKMASK(ODCONC), 1
#define ODC2                             BANKMASK(ODCONC), 2
#define ODC3                             BANKMASK(ODCONC), 3
#define ODC4                             BANKMASK(ODCONC), 4
#define ODC5                             BANKMASK(ODCONC), 5
#define ODC6                             BANKMASK(ODCONC), 6
#define ODC7                             BANKMASK(ODCONC), 7
#define OERR                             BANKMASK(RC1STA), 1
#define OPA1EN                           BANKMASK(OPA1CON), 7
#define OPA1ORM0                         BANKMASK(OPA1CON), 0
#define OPA1ORM1                         BANKMASK(OPA1CON), 1
#define OPA1ORPOL                        BANKMASK(OPA1CON), 2
#define OPA1UG                           BANKMASK(OPA1CON), 4
#define OPA2EN                           BANKMASK(OPA2CON), 7
#define OPA2ORM0                         BANKMASK(OPA2CON), 0
#define OPA2ORM1                         BANKMASK(OPA2CON), 1
#define OPA2ORPOL                        BANKMASK(OPA2CON), 2
#define OPA2UG                           BANKMASK(OPA2CON), 4
#define OSCEN                            BANKMASK(T1CON), 3
#define OSFIE                            BANKMASK(PIE2), 7
#define OSFIF                            BANKMASK(PIR2), 7
#define OSTS                             BANKMASK(OSCSTAT), 5
#define P3TSEL0                          BANKMASK(CCPTMRS), 4
#define P3TSEL1                          BANKMASK(CCPTMRS), 5
#define P4TSEL0                          BANKMASK(CCPTMRS), 6
#define P4TSEL1                          BANKMASK(CCPTMRS), 7
#define PCIE                             BANKMASK(SSP1CON3), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSP1CON2), 2
#define PLLR                             BANKMASK(OSCSTAT), 6
#define PPSLOCKED                        BANKMASK(PPSLOCK), 0
#define PSA                              BANKMASK(OPTION_REG), 3
#define PWM3DC0                          BANKMASK(PWM3DCL), 6
#define PWM3DC1                          BANKMASK(PWM3DCL), 7
#define PWM3DC2                          BANKMASK(PWM3DCH), 0
#define PWM3DC3                          BANKMASK(PWM3DCH), 1
#define PWM3DC4                          BANKMASK(PWM3DCH), 2
#define PWM3DC5                          BANKMASK(PWM3DCH), 3
#define PWM3DC6                          BANKMASK(PWM3DCH), 4
#define PWM3DC7                          BANKMASK(PWM3DCH), 5
#define PWM3DC8                          BANKMASK(PWM3DCH), 6
#define PWM3DC9                          BANKMASK(PWM3DCH), 7
#define PWM3EN                           BANKMASK(PWM3CON), 7
#define PWM3OUT                          BANKMASK(PWM3CON), 5
#define PWM3POL                          BANKMASK(PWM3CON), 4
#define PWM4DC0                          BANKMASK(PWM4DCL), 6
#define PWM4DC1                          BANKMASK(PWM4DCL), 7
#define PWM4DC2                          BANKMASK(PWM4DCH), 0
#define PWM4DC3                          BANKMASK(PWM4DCH), 1
#define PWM4DC4                          BANKMASK(PWM4DCH), 2
#define PWM4DC5                          BANKMASK(PWM4DCH), 3
#define PWM4DC6                          BANKMASK(PWM4DCH), 4
#define PWM4DC7                          BANKMASK(PWM4DCH), 5
#define PWM4DC8                          BANKMASK(PWM4DCH), 6
#define PWM4DC9                          BANKMASK(PWM4DCH), 7
#define PWM4EN                           BANKMASK(PWM4CON), 7
#define PWM4OUT                          BANKMASK(PWM4CON), 5
#define PWM4POL                          BANKMASK(PWM4CON), 4
#define PWM5CS0                          BANKMASK(PWM5CLKCON), 0
#define PWM5CS1                          BANKMASK(PWM5CLKCON), 1
#define PWM5CS2                          BANKMASK(PWM5CLKCON), 2
#define PWM5DCH0                         BANKMASK(PWM5DCH), 0
#define PWM5DCH1                         BANKMASK(PWM5DCH), 1
#define PWM5DCH2                         BANKMASK(PWM5DCH), 2
#define PWM5DCH3                         BANKMASK(PWM5DCH), 3
#define PWM5DCH4                         BANKMASK(PWM5DCH), 4
#define PWM5DCH5                         BANKMASK(PWM5DCH), 5
#define PWM5DCH6                         BANKMASK(PWM5DCH), 6
#define PWM5DCH7                         BANKMASK(PWM5DCH), 7
#define PWM5DCIE                         BANKMASK(PWM5INTE), 1
#define PWM5DCIF                         BANKMASK(PWM5INTF), 1
#define PWM5DCL0                         BANKMASK(PWM5DCL), 0
#define PWM5DCL1                         BANKMASK(PWM5DCL), 1
#define PWM5DCL2                         BANKMASK(PWM5DCL), 2
#define PWM5DCL3                         BANKMASK(PWM5DCL), 3
#define PWM5DCL4                         BANKMASK(PWM5DCL), 4
#define PWM5DCL5                         BANKMASK(PWM5DCL), 5
#define PWM5DCL6                         BANKMASK(PWM5DCL), 6
#define PWM5DCL7                         BANKMASK(PWM5DCL), 7
#define PWM5EN                           BANKMASK(PWM5CON), 7
#define PWM5IE                           BANKMASK(PIE3), 6
#define PWM5IF                           BANKMASK(PIR3), 6
#define PWM5LD                           BANKMASK(PWM5LDCON), 7
#define PWM5LDM                          BANKMASK(PWM5LDCON), 6
#define PWM5LDS0                         BANKMASK(PWM5LDCON), 0
#define PWM5MODE0                        BANKMASK(PWM5CON), 2
#define PWM5MODE1                        BANKMASK(PWM5CON), 3
#define PWM5OFH0                         BANKMASK(PWM5OFH), 0
#define PWM5OFH1                         BANKMASK(PWM5OFH), 1
#define PWM5OFH2                         BANKMASK(PWM5OFH), 2
#define PWM5OFH3                         BANKMASK(PWM5OFH), 3
#define PWM5OFH4                         BANKMASK(PWM5OFH), 4
#define PWM5OFH5                         BANKMASK(PWM5OFH), 5
#define PWM5OFH6                         BANKMASK(PWM5OFH), 6
#define PWM5OFH7                         BANKMASK(PWM5OFH), 7
#define PWM5OFIE                         BANKMASK(PWM5INTE), 3
#define PWM5OFIF                         BANKMASK(PWM5INTF), 3
#define PWM5OFL0                         BANKMASK(PWM5OFL), 0
#define PWM5OFL1                         BANKMASK(PWM5OFL), 1
#define PWM5OFL2                         BANKMASK(PWM5OFL), 2
#define PWM5OFL3                         BANKMASK(PWM5OFL), 3
#define PWM5OFL4                         BANKMASK(PWM5OFL), 4
#define PWM5OFL5                         BANKMASK(PWM5OFL), 5
#define PWM5OFL6                         BANKMASK(PWM5OFL), 6
#define PWM5OFL7                         BANKMASK(PWM5OFL), 7
#define PWM5OFM0                         BANKMASK(PWM5OFCON), 5
#define PWM5OFM1                         BANKMASK(PWM5OFCON), 6
#define PWM5OFMC                         BANKMASK(PWM5OFCON), 4
#define PWM5OFS0                         BANKMASK(PWM5OFCON), 0
#define PWM5OUT                          BANKMASK(PWM5CON), 5
#define PWM5PHH0                         BANKMASK(PWM5PHH), 0
#define PWM5PHH1                         BANKMASK(PWM5PHH), 1
#define PWM5PHH2                         BANKMASK(PWM5PHH), 2
#define PWM5PHH3                         BANKMASK(PWM5PHH), 3
#define PWM5PHH4                         BANKMASK(PWM5PHH), 4
#define PWM5PHH5                         BANKMASK(PWM5PHH), 5
#define PWM5PHH6                         BANKMASK(PWM5PHH), 6
#define PWM5PHH7                         BANKMASK(PWM5PHH), 7
#define PWM5PHIE                         BANKMASK(PWM5INTE), 2
#define PWM5PHIF                         BANKMASK(PWM5INTF), 2
#define PWM5PHL0                         BANKMASK(PWM5PHL), 0
#define PWM5PHL1                         BANKMASK(PWM5PHL), 1
#define PWM5PHL2                         BANKMASK(PWM5PHL), 2
#define PWM5PHL3                         BANKMASK(PWM5PHL), 3
#define PWM5PHL4                         BANKMASK(PWM5PHL), 4
#define PWM5PHL5                         BANKMASK(PWM5PHL), 5
#define PWM5PHL6                         BANKMASK(PWM5PHL), 6
#define PWM5PHL7                         BANKMASK(PWM5PHL), 7
#define PWM5POL                          BANKMASK(PWM5CON), 4
#define PWM5PRH0                         BANKMASK(PWM5PRH), 0
#define PWM5PRH1                         BANKMASK(PWM5PRH), 1
#define PWM5PRH2                         BANKMASK(PWM5PRH), 2
#define PWM5PRH3                         BANKMASK(PWM5PRH), 3
#define PWM5PRH4                         BANKMASK(PWM5PRH), 4
#define PWM5PRH5                         BANKMASK(PWM5PRH), 5
#define PWM5PRH6                         BANKMASK(PWM5PRH), 6
#define PWM5PRH7                         BANKMASK(PWM5PRH), 7
#define PWM5PRIE                         BANKMASK(PWM5INTE), 0
#define PWM5PRIF                         BANKMASK(PWM5INTF), 0
#define PWM5PRL0                         BANKMASK(PWM5PRL), 0
#define PWM5PRL1                         BANKMASK(PWM5PRL), 1
#define PWM5PRL2                         BANKMASK(PWM5PRL), 2
#define PWM5PRL3                         BANKMASK(PWM5PRL), 3
#define PWM5PRL4                         BANKMASK(PWM5PRL), 4
#define PWM5PRL5                         BANKMASK(PWM5PRL), 5
#define PWM5PRL6                         BANKMASK(PWM5PRL), 6
#define PWM5PRL7                         BANKMASK(PWM5PRL), 7
#define PWM5PS0                          BANKMASK(PWM5CLKCON), 4
#define PWM5PS1                          BANKMASK(PWM5CLKCON), 5
#define PWM5PS2                          BANKMASK(PWM5CLKCON), 6
#define PWM5TMRH0                        BANKMASK(PWM5TMRH), 0
#define PWM5TMRH1                        BANKMASK(PWM5TMRH), 1
#define PWM5TMRH2                        BANKMASK(PWM5TMRH), 2
#define PWM5TMRH3                        BANKMASK(PWM5TMRH), 3
#define PWM5TMRH4                        BANKMASK(PWM5TMRH), 4
#define PWM5TMRH5                        BANKMASK(PWM5TMRH), 5
#define PWM5TMRH6                        BANKMASK(PWM5TMRH), 6
#define PWM5TMRH7                        BANKMASK(PWM5TMRH), 7
#define PWM5TMRL0                        BANKMASK(PWM5TMRL), 0
#define PWM5TMRL1                        BANKMASK(PWM5TMRL), 1
#define PWM5TMRL2                        BANKMASK(PWM5TMRL), 2
#define PWM5TMRL3                        BANKMASK(PWM5TMRL), 3
#define PWM5TMRL4                        BANKMASK(PWM5TMRL), 4
#define PWM5TMRL5                        BANKMASK(PWM5TMRL), 5
#define PWM5TMRL6                        BANKMASK(PWM5TMRL), 6
#define PWM5TMRL7                        BANKMASK(PWM5TMRL), 7
#define PWM6CS0                          BANKMASK(PWM6CLKCON), 0
#define PWM6CS1                          BANKMASK(PWM6CLKCON), 1
#define PWM6CS2                          BANKMASK(PWM6CLKCON), 2
#define PWM6DCH0                         BANKMASK(PWM6DCH), 0
#define PWM6DCH1                         BANKMASK(PWM6DCH), 1
#define PWM6DCH2                         BANKMASK(PWM6DCH), 2
#define PWM6DCH3                         BANKMASK(PWM6DCH), 3
#define PWM6DCH4                         BANKMASK(PWM6DCH), 4
#define PWM6DCH5                         BANKMASK(PWM6DCH), 5
#define PWM6DCH6                         BANKMASK(PWM6DCH), 6
#define PWM6DCH7                         BANKMASK(PWM6DCH), 7
#define PWM6DCIE                         BANKMASK(PWM6INTE), 1
#define PWM6DCIF                         BANKMASK(PWM6INTF), 1
#define PWM6DCL0                         BANKMASK(PWM6DCL), 0
#define PWM6DCL1                         BANKMASK(PWM6DCL), 1
#define PWM6DCL2                         BANKMASK(PWM6DCL), 2
#define PWM6DCL3                         BANKMASK(PWM6DCL), 3
#define PWM6DCL4                         BANKMASK(PWM6DCL), 4
#define PWM6DCL5                         BANKMASK(PWM6DCL), 5
#define PWM6DCL6                         BANKMASK(PWM6DCL), 6
#define PWM6DCL7                         BANKMASK(PWM6DCL), 7
#define PWM6EN                           BANKMASK(PWM6CON), 7
#define PWM6IE                           BANKMASK(PIE3), 7
#define PWM6IF                           BANKMASK(PIR3), 7
#define PWM6LD                           BANKMASK(PWM6LDCON), 7
#define PWM6LDM                          BANKMASK(PWM6LDCON), 6
#define PWM6LDS0                         BANKMASK(PWM6LDCON), 0
#define PWM6MODE0                        BANKMASK(PWM6CON), 2
#define PWM6MODE1                        BANKMASK(PWM6CON), 3
#define PWM6OFH0                         BANKMASK(PWM6OFH), 0
#define PWM6OFH1                         BANKMASK(PWM6OFH), 1
#define PWM6OFH2                         BANKMASK(PWM6OFH), 2
#define PWM6OFH3                         BANKMASK(PWM6OFH), 3
#define PWM6OFH4                         BANKMASK(PWM6OFH), 4
#define PWM6OFH5                         BANKMASK(PWM6OFH), 5
#define PWM6OFH6                         BANKMASK(PWM6OFH), 6
#define PWM6OFH7                         BANKMASK(PWM6OFH), 7
#define PWM6OFIE                         BANKMASK(PWM6INTE), 3
#define PWM6OFIF                         BANKMASK(PWM6INTF), 3
#define PWM6OFL0                         BANKMASK(PWM6OFL), 0
#define PWM6OFL1                         BANKMASK(PWM6OFL), 1
#define PWM6OFL2                         BANKMASK(PWM6OFL), 2
#define PWM6OFL3                         BANKMASK(PWM6OFL), 3
#define PWM6OFL4                         BANKMASK(PWM6OFL), 4
#define PWM6OFL5                         BANKMASK(PWM6OFL), 5
#define PWM6OFL6                         BANKMASK(PWM6OFL), 6
#define PWM6OFL7                         BANKMASK(PWM6OFL), 7
#define PWM6OFM0                         BANKMASK(PWM6OFCON), 5
#define PWM6OFM1                         BANKMASK(PWM6OFCON), 6
#define PWM6OFMC                         BANKMASK(PWM6OFCON), 4
#define PWM6OFS0                         BANKMASK(PWM6OFCON), 0
#define PWM6OUT                          BANKMASK(PWM6CON), 5
#define PWM6PHH0                         BANKMASK(PWM6PHH), 0
#define PWM6PHH1                         BANKMASK(PWM6PHH), 1
#define PWM6PHH2                         BANKMASK(PWM6PHH), 2
#define PWM6PHH3                         BANKMASK(PWM6PHH), 3
#define PWM6PHH4                         BANKMASK(PWM6PHH), 4
#define PWM6PHH5                         BANKMASK(PWM6PHH), 5
#define PWM6PHH6                         BANKMASK(PWM6PHH), 6
#define PWM6PHH7                         BANKMASK(PWM6PHH), 7
#define PWM6PHIE                         BANKMASK(PWM6INTE), 2
#define PWM6PHIF                         BANKMASK(PWM6INTF), 2
#define PWM6PHL0                         BANKMASK(PWM6PHL), 0
#define PWM6PHL1                         BANKMASK(PWM6PHL), 1
#define PWM6PHL2                         BANKMASK(PWM6PHL), 2
#define PWM6PHL3                         BANKMASK(PWM6PHL), 3
#define PWM6PHL4                         BANKMASK(PWM6PHL), 4
#define PWM6PHL5                         BANKMASK(PWM6PHL), 5
#define PWM6PHL6                         BANKMASK(PWM6PHL), 6
#define PWM6PHL7                         BANKMASK(PWM6PHL), 7
#define PWM6POL                          BANKMASK(PWM6CON), 4
#define PWM6PRH0                         BANKMASK(PWM6PRH), 0
#define PWM6PRH1                         BANKMASK(PWM6PRH), 1
#define PWM6PRH2                         BANKMASK(PWM6PRH), 2
#define PWM6PRH3                         BANKMASK(PWM6PRH), 3
#define PWM6PRH4                         BANKMASK(PWM6PRH), 4
#define PWM6PRH5                         BANKMASK(PWM6PRH), 5
#define PWM6PRH6                         BANKMASK(PWM6PRH), 6
#define PWM6PRH7                         BANKMASK(PWM6PRH), 7
#define PWM6PRIE                         BANKMASK(PWM6INTE), 0
#define PWM6PRIF                         BANKMASK(PWM6INTF), 0
#define PWM6PRL0                         BANKMASK(PWM6PRL), 0
#define PWM6PRL1                         BANKMASK(PWM6PRL), 1
#define PWM6PRL2                         BANKMASK(PWM6PRL), 2
#define PWM6PRL3                         BANKMASK(PWM6PRL), 3
#define PWM6PRL4                         BANKMASK(PWM6PRL), 4
#define PWM6PRL5                         BANKMASK(PWM6PRL), 5
#define PWM6PRL6                         BANKMASK(PWM6PRL), 6
#define PWM6PRL7                         BANKMASK(PWM6PRL), 7
#define PWM6PS0                          BANKMASK(PWM6CLKCON), 4
#define PWM6PS1                          BANKMASK(PWM6CLKCON), 5
#define PWM6PS2                          BANKMASK(PWM6CLKCON), 6
#define PWM6TMRH0                        BANKMASK(PWM6TMRH), 0
#define PWM6TMRH1                        BANKMASK(PWM6TMRH), 1
#define PWM6TMRH2                        BANKMASK(PWM6TMRH), 2
#define PWM6TMRH3                        BANKMASK(PWM6TMRH), 3
#define PWM6TMRH4                        BANKMASK(PWM6TMRH), 4
#define PWM6TMRH5                        BANKMASK(PWM6TMRH), 5
#define PWM6TMRH6                        BANKMASK(PWM6TMRH), 6
#define PWM6TMRH7                        BANKMASK(PWM6TMRH), 7
#define PWM6TMRL0                        BANKMASK(PWM6TMRL), 0
#define PWM6TMRL1                        BANKMASK(PWM6TMRL), 1
#define PWM6TMRL2                        BANKMASK(PWM6TMRL), 2
#define PWM6TMRL3                        BANKMASK(PWM6TMRL), 3
#define PWM6TMRL4                        BANKMASK(PWM6TMRL), 4
#define PWM6TMRL5                        BANKMASK(PWM6TMRL), 5
#define PWM6TMRL6                        BANKMASK(PWM6TMRL), 6
#define PWM6TMRL7                        BANKMASK(PWM6TMRL), 7
#define RA0                              BANKMASK(PORTA), 0
#define RA1                              BANKMASK(PORTA), 1
#define RA2                              BANKMASK(PORTA), 2
#define RA3                              BANKMASK(PORTA), 3
#define RA4                              BANKMASK(PORTA), 4
#define RA5                              BANKMASK(PORTA), 5
#define RB4                              BANKMASK(PORTB), 4
#define RB5                              BANKMASK(PORTB), 5
#define RB6                              BANKMASK(PORTB), 6
#define RB7                              BANKMASK(PORTB), 7
#define RC0                              BANKMASK(PORTC), 0
#define RC1                              BANKMASK(PORTC), 1
#define RC2                              BANKMASK(PORTC), 2
#define RC3                              BANKMASK(PORTC), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC5                              BANKMASK(PORTC), 5
#define RC6                              BANKMASK(PORTC), 6
#define RC7                              BANKMASK(PORTC), 7
#define RCEN                             BANKMASK(SSP1CON2), 3
#define RCIDL                            BANKMASK(BAUD1CON), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(PMCON1), 0
#define RG1EN                            BANKMASK(PRG1CON0), 7
#define RG1FEDG                          BANKMASK(PRG1CON0), 5
#define RG1FPOL                          BANKMASK(PRG1CON1), 1
#define RG1FTSS0                         BANKMASK(PRG1FTSS), 0
#define RG1FTSS1                         BANKMASK(PRG1FTSS), 1
#define RG1FTSS2                         BANKMASK(PRG1FTSS), 2
#define RG1FTSS3                         BANKMASK(PRG1FTSS), 3
#define RG1GO                            BANKMASK(PRG1CON0), 0
#define RG1INS0                          BANKMASK(PRG1INS), 0
#define RG1INS1                          BANKMASK(PRG1INS), 1
#define RG1INS2                          BANKMASK(PRG1INS), 2
#define RG1INS3                          BANKMASK(PRG1INS), 3
#define RG1ISET0                         BANKMASK(PRG1CON2), 0
#define RG1ISET1                         BANKMASK(PRG1CON2), 1
#define RG1ISET2                         BANKMASK(PRG1CON2), 2
#define RG1ISET3                         BANKMASK(PRG1CON2), 3
#define RG1ISET4                         BANKMASK(PRG1CON2), 4
#define RG1MODE0                         BANKMASK(PRG1CON0), 2
#define RG1MODE1                         BANKMASK(PRG1CON0), 3
#define RG1OS                            BANKMASK(PRG1CON0), 1
#define RG1RDY                           BANKMASK(PRG1CON1), 2
#define RG1REDG                          BANKMASK(PRG1CON0), 4
#define RG1RPOL                          BANKMASK(PRG1CON1), 0
#define RG1RTSS0                         BANKMASK(PRG1RTSS), 0
#define RG1RTSS1                         BANKMASK(PRG1RTSS), 1
#define RG1RTSS2                         BANKMASK(PRG1RTSS), 2
#define RG1RTSS3                         BANKMASK(PRG1RTSS), 3
#define RG2EN                            BANKMASK(PRG2CON0), 7
#define RG2FEDG                          BANKMASK(PRG2CON0), 5
#define RG2FPOL                          BANKMASK(PRG2CON1), 1
#define RG2FTSS0                         BANKMASK(PRG2FTSS), 0
#define RG2FTSS1                         BANKMASK(PRG2FTSS), 1
#define RG2FTSS2                         BANKMASK(PRG2FTSS), 2
#define RG2FTSS3                         BANKMASK(PRG2FTSS), 3
#define RG2GO                            BANKMASK(PRG2CON0), 0
#define RG2INS0                          BANKMASK(PRG2INS), 0
#define RG2INS1                          BANKMASK(PRG2INS), 1
#define RG2INS2                          BANKMASK(PRG2INS), 2
#define RG2INS3                          BANKMASK(PRG2INS), 3
#define RG2ISET0                         BANKMASK(PRG2CON2), 0
#define RG2ISET1                         BANKMASK(PRG2CON2), 1
#define RG2ISET2                         BANKMASK(PRG2CON2), 2
#define RG2ISET3                         BANKMASK(PRG2CON2), 3
#define RG2ISET4                         BANKMASK(PRG2CON2), 4
#define RG2MODE0                         BANKMASK(PRG2CON0), 2
#define RG2MODE1                         BANKMASK(PRG2CON0), 3
#define RG2OS                            BANKMASK(PRG2CON0), 1
#define RG2RDY                           BANKMASK(PRG2CON1), 2
#define RG2REDG                          BANKMASK(PRG2CON0), 4
#define RG2RPOL                          BANKMASK(PRG2CON1), 0
#define RG2RTSS0                         BANKMASK(PRG2RTSS), 0
#define RG2RTSS1                         BANKMASK(PRG2RTSS), 1
#define RG2RTSS2                         BANKMASK(PRG2RTSS), 2
#define RG2RTSS3                         BANKMASK(PRG2RTSS), 3
#define RSEN                             BANKMASK(SSP1CON2), 1
#define RX9                              BANKMASK(RC1STA), 6
#define RX9D                             BANKMASK(RC1STA), 0
#define R_nW                             BANKMASK(SSP1STAT), 2
#define SBCDE                            BANKMASK(SSP1CON3), 2
#define SBOREN                           BANKMASK(BORCON), 7
#define SCIE                             BANKMASK(SSP1CON3), 5
#define SCKP                             BANKMASK(BAUD1CON), 4
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SDAHT                            BANKMASK(SSP1CON3), 3
#define SEN                              BANKMASK(SSP1CON2), 0
#define SENDB                            BANKMASK(TX1STA), 3
#define SLRA0                            BANKMASK(SLRCONA), 0
#define SLRA1                            BANKMASK(SLRCONA), 1
#define SLRA2                            BANKMASK(SLRCONA), 2
#define SLRA4                            BANKMASK(SLRCONA), 4
#define SLRA5                            BANKMASK(SLRCONA), 5
#define SLRB4                            BANKMASK(SLRCONB), 4
#define SLRB5                            BANKMASK(SLRCONB), 5
#define SLRB6                            BANKMASK(SLRCONB), 6
#define SLRB7                            BANKMASK(SLRCONB), 7
#define SLRC0                            BANKMASK(SLRCONC), 0
#define SLRC1                            BANKMASK(SLRCONC), 1
#define SLRC2                            BANKMASK(SLRCONC), 2
#define SLRC3                            BANKMASK(SLRCONC), 3
#define SLRC4                            BANKMASK(SLRCONC), 4
#define SLRC5                            BANKMASK(SLRCONC), 5
#define SLRC6                            BANKMASK(SLRCONC), 6
#define SLRC7                            BANKMASK(SLRCONC), 7
#define SMP                              BANKMASK(SSP1STAT), 7
#define SOSCEN                           BANKMASK(T1CON), 3
#define SOSCR                            BANKMASK(OSCSTAT), 7
#define SPEN                             BANKMASK(RC1STA), 7
#define SPLLEN                           BANKMASK(OSCCON), 7
#define SREN                             BANKMASK(RC1STA), 5
#define SSP1ADD0                         BANKMASK(SSP1ADD), 0
#define SSP1ADD1                         BANKMASK(SSP1ADD), 1
#define SSP1ADD2                         BANKMASK(SSP1ADD), 2
#define SSP1ADD3                         BANKMASK(SSP1ADD), 3
#define SSP1ADD4                         BANKMASK(SSP1ADD), 4
#define SSP1ADD5                         BANKMASK(SSP1ADD), 5
#define SSP1ADD6                         BANKMASK(SSP1ADD), 6
#define SSP1ADD7                         BANKMASK(SSP1ADD), 7
#define SSP1BUF0                         BANKMASK(SSP1BUF), 0
#define SSP1BUF1                         BANKMASK(SSP1BUF), 1
#define SSP1BUF2                         BANKMASK(SSP1BUF), 2
#define SSP1BUF3                         BANKMASK(SSP1BUF), 3
#define SSP1BUF4                         BANKMASK(SSP1BUF), 4
#define SSP1BUF5                         BANKMASK(SSP1BUF), 5
#define SSP1BUF6                         BANKMASK(SSP1BUF), 6
#define SSP1BUF7                         BANKMASK(SSP1BUF), 7
#define SSP1IE                           BANKMASK(PIE1), 3
#define SSP1IF                           BANKMASK(PIR1), 3
#define SSP1MSK0                         BANKMASK(SSP1MSK), 0
#define SSP1MSK1                         BANKMASK(SSP1MSK), 1
#define SSP1MSK2                         BANKMASK(SSP1MSK), 2
#define SSP1MSK3                         BANKMASK(SSP1MSK), 3
#define SSP1MSK4                         BANKMASK(SSP1MSK), 4
#define SSP1MSK5                         BANKMASK(SSP1MSK), 5
#define SSP1MSK6                         BANKMASK(SSP1MSK), 6
#define SSP1MSK7                         BANKMASK(SSP1MSK), 7
#define SSPEN                            BANKMASK(SSP1CON1), 5
#define SSPM0                            BANKMASK(SSP1CON1), 0
#define SSPM1                            BANKMASK(SSP1CON1), 1
#define SSPM2                            BANKMASK(SSP1CON1), 2
#define SSPM3                            BANKMASK(SSP1CON1), 3
#define SSPOV                            BANKMASK(SSP1CON1), 6
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define SWDTEN                           BANKMASK(WDTCON), 0
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1CS0                            BANKMASK(T1CON), 6
#define T1CS1                            BANKMASK(T1CON), 7
#define T1GE                             BANKMASK(T1GCON), 7
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1ON                             BANKMASK(T1CON), 0
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T2CKPOL                          BANKMASK(T2HLT), 6
#define T2CKPS0                          BANKMASK(T2CON), 4
#define T2CKPS1                          BANKMASK(T2CON), 5
#define T2CKPS2                          BANKMASK(T2CON), 6
#define T2CKSYNC                         BANKMASK(T2HLT), 5
#define T2CS0                            BANKMASK(T2CLKCON), 0
#define T2CS1                            BANKMASK(T2CLKCON), 1
#define T2CS2                            BANKMASK(T2CLKCON), 2
#define T2CS3                            BANKMASK(T2CLKCON), 3
#define T2MODE0                          BANKMASK(T2HLT), 0
#define T2MODE1                          BANKMASK(T2HLT), 1
#define T2MODE2                          BANKMASK(T2HLT), 2
#define T2MODE3                          BANKMASK(T2HLT), 3
#define T2MODE4                          BANKMASK(T2HLT), 4
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
#define T3CKPS0                          BANKMASK(T3CON), 4
#define T3CKPS1                          BANKMASK(T3CON), 5
#define T3CS0                            BANKMASK(T3CON), 6
#define T3CS1                            BANKMASK(T3CON), 7
#define T3GE                             BANKMASK(T3GCON), 7
#define T3GGO_nDONE                      BANKMASK(T3GCON), 3
#define T3GPOL                           BANKMASK(T3GCON), 6
#define T3GSPM                           BANKMASK(T3GCON), 4
#define T3GSS0                           BANKMASK(T3GCON), 0
#define T3GSS1                           BANKMASK(T3GCON), 1
#define T3GTM                            BANKMASK(T3GCON), 5
#define T3GVAL                           BANKMASK(T3GCON), 2
#define T3ON                             BANKMASK(T3CON), 0
#define T4CKPOL                          BANKMASK(T4HLT), 6
#define T4CKPS0                          BANKMASK(T4CON), 4
#define T4CKPS1                          BANKMASK(T4CON), 5
#define T4CKPS2                          BANKMASK(T4CON), 6
#define T4CKSYNC                         BANKMASK(T4HLT), 5
#define T4CS0                            BANKMASK(T4CLKCON), 0
#define T4CS1                            BANKMASK(T4CLKCON), 1
#define T4CS2                            BANKMASK(T4CLKCON), 2
#define T4CS3                            BANKMASK(T4CLKCON), 3
#define T4MODE0                          BANKMASK(T4HLT), 0
#define T4MODE1                          BANKMASK(T4HLT), 1
#define T4MODE2                          BANKMASK(T4HLT), 2
#define T4MODE3                          BANKMASK(T4HLT), 3
#define T4MODE4                          BANKMASK(T4HLT), 4
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
#define T5CKPS0                          BANKMASK(T5CON), 4
#define T5CKPS1                          BANKMASK(T5CON), 5
#define T5CS0                            BANKMASK(T5CON), 6
#define T5CS1                            BANKMASK(T5CON), 7
#define T5GE                             BANKMASK(T5GCON), 7
#define T5GGO_nDONE                      BANKMASK(T5GCON), 3
#define T5GPOL                           BANKMASK(T5GCON), 6
#define T5GSPM                           BANKMASK(T5GCON), 4
#define T5GSS0                           BANKMASK(T5GCON), 0
#define T5GSS1                           BANKMASK(T5GCON), 1
#define T5GTM                            BANKMASK(T5GCON), 5
#define T5GVAL                           BANKMASK(T5GCON), 2
#define T5ON                             BANKMASK(T5CON), 0
#define T6CKPOL                          BANKMASK(T6HLT), 6
#define T6CKPS0                          BANKMASK(T6CON), 4
#define T6CKPS1                          BANKMASK(T6CON), 5
#define T6CKPS2                          BANKMASK(T6CON), 6
#define T6CKSYNC                         BANKMASK(T6HLT), 5
#define T6CS0                            BANKMASK(T6CLKCON), 0
#define T6CS1                            BANKMASK(T6CLKCON), 1
#define T6CS2                            BANKMASK(T6CLKCON), 2
#define T6CS3                            BANKMASK(T6CLKCON), 3
#define T6MODE0                          BANKMASK(T6HLT), 0
#define T6MODE1                          BANKMASK(T6HLT), 1
#define T6MODE2                          BANKMASK(T6HLT), 2
#define T6MODE3                          BANKMASK(T6HLT), 3
#define T6MODE4                          BANKMASK(T6HLT), 4
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
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(T2CON), 7
#define TMR3CS0                          BANKMASK(T3CON), 6
#define TMR3CS1                          BANKMASK(T3CON), 7
#define TMR3GE                           BANKMASK(T3GCON), 7
#define TMR3GIE                          BANKMASK(PIE4), 3
#define TMR3GIF                          BANKMASK(PIR4), 3
#define TMR3IE                           BANKMASK(PIE4), 2
#define TMR3IF                           BANKMASK(PIR4), 2
#define TMR3ON                           BANKMASK(T3CON), 0
#define TMR4IE                           BANKMASK(PIE4), 0
#define TMR4IF                           BANKMASK(PIR4), 0
#define TMR4ON                           BANKMASK(T4CON), 7
#define TMR5CS0                          BANKMASK(T5CON), 6
#define TMR5CS1                          BANKMASK(T5CON), 7
#define TMR5GE                           BANKMASK(T5GCON), 7
#define TMR5GIE                          BANKMASK(PIE4), 5
#define TMR5GIF                          BANKMASK(PIR4), 5
#define TMR5IE                           BANKMASK(PIE4), 4
#define TMR5IF                           BANKMASK(PIR4), 4
#define TMR5ON                           BANKMASK(T5CON), 0
#define TMR6IE                           BANKMASK(PIE4), 1
#define TMR6IF                           BANKMASK(PIR4), 1
#define TMR6ON                           BANKMASK(T6CON), 7
#define TRIGSEL0                         BANKMASK(ADCON2), 3
#define TRIGSEL1                         BANKMASK(ADCON2), 4
#define TRIGSEL2                         BANKMASK(ADCON2), 5
#define TRIGSEL3                         BANKMASK(ADCON2), 6
#define TRIGSEL4                         BANKMASK(ADCON2), 7
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TRISA4                           BANKMASK(TRISA), 4
#define TRISA5                           BANKMASK(TRISA), 5
#define TRISB4                           BANKMASK(TRISB), 4
#define TRISB5                           BANKMASK(TRISB), 5
#define TRISB6                           BANKMASK(TRISB), 6
#define TRISB7                           BANKMASK(TRISB), 7
#define TRISC0                           BANKMASK(TRISC), 0
#define TRISC1                           BANKMASK(TRISC), 1
#define TRISC2                           BANKMASK(TRISC), 2
#define TRISC3                           BANKMASK(TRISC), 3
#define TRISC4                           BANKMASK(TRISC), 4
#define TRISC5                           BANKMASK(TRISC), 5
#define TRISC6                           BANKMASK(TRISC), 6
#define TRISC7                           BANKMASK(TRISC), 7
#define TRMT                             BANKMASK(TX1STA), 1
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define TUN5                             BANKMASK(OSCTUNE), 5
#define TX9                              BANKMASK(TX1STA), 6
#define TX9D                             BANKMASK(TX1STA), 0
#define TXEN                             BANKMASK(TX1STA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define UA                               BANKMASK(SSP1STAT), 1
#define VREGPM                           BANKMASK(VREGCON), 1
#define WCOL                             BANKMASK(SSP1CON1), 7
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WDTPS4                           BANKMASK(WDTCON), 5
#define WPUA0                            BANKMASK(WPUA), 0
#define WPUA1                            BANKMASK(WPUA), 1
#define WPUA2                            BANKMASK(WPUA), 2
#define WPUA3                            BANKMASK(WPUA), 3
#define WPUA4                            BANKMASK(WPUA), 4
#define WPUA5                            BANKMASK(WPUA), 5
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define WPUC0                            BANKMASK(WPUC), 0
#define WPUC1                            BANKMASK(WPUC), 1
#define WPUC2                            BANKMASK(WPUC), 2
#define WPUC3                            BANKMASK(WPUC), 3
#define WPUC4                            BANKMASK(WPUC), 4
#define WPUC5                            BANKMASK(WPUC), 5
#define WPUC6                            BANKMASK(WPUC), 6
#define WPUC7                            BANKMASK(WPUC), 7
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define WRERR                            BANKMASK(PMCON1), 3
#define WUE                              BANKMASK(BAUD1CON), 1
#define ZCD1EN                           BANKMASK(ZCD1CON), 7
#define ZCD1INTN                         BANKMASK(ZCD1CON), 0
#define ZCD1INTP                         BANKMASK(ZCD1CON), 1
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
#define nT3SYNC                          BANKMASK(T3CON), 2
#define nT5SYNC                          BANKMASK(T5CON), 2
#define nTO                              BANKMASK(STATUS), 4
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
psect udata_bank3,class=BANK3,space=SPACE_DATA,noexec
psect udata_bank4,class=BANK4,space=SPACE_DATA,noexec
psect udata_bank5,class=BANK5,space=SPACE_DATA,noexec
psect udata_bank6,class=BANK6,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16F1768_INC_
