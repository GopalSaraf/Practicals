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

#ifndef _PIC16LF1906_INC_
#define _PIC16LF1906_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF1906
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
BSR_BSR_POSN                             equ 0000h
BSR_BSR_POSITION                         equ 0000h
BSR_BSR_SIZE                             equ 0005h
BSR_BSR_LENGTH                           equ 0005h
BSR_BSR_MASK                             equ 001Fh

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

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 000Dh
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

// Register: PORTE
#define PORTE PORTE
PORTE                                    equ 0010h
// bitfield definitions
PORTE_RE3_POSN                           equ 0003h
PORTE_RE3_POSITION                       equ 0003h
PORTE_RE3_SIZE                           equ 0001h
PORTE_RE3_LENGTH                         equ 0001h
PORTE_RE3_MASK                           equ 0008h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 0011h
// bitfield definitions
PIR1_TMR1IF_POSN                         equ 0000h
PIR1_TMR1IF_POSITION                     equ 0000h
PIR1_TMR1IF_SIZE                         equ 0001h
PIR1_TMR1IF_LENGTH                       equ 0001h
PIR1_TMR1IF_MASK                         equ 0001h
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

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0012h
// bitfield definitions
PIR2_LCDIF_POSN                          equ 0002h
PIR2_LCDIF_POSITION                      equ 0002h
PIR2_LCDIF_SIZE                          equ 0001h
PIR2_LCDIF_LENGTH                        equ 0001h
PIR2_LCDIF_MASK                          equ 0004h

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
T1CON_T1OSCEN_POSN                       equ 0003h
T1CON_T1OSCEN_POSITION                   equ 0003h
T1CON_T1OSCEN_SIZE                       equ 0001h
T1CON_T1OSCEN_LENGTH                     equ 0001h
T1CON_T1OSCEN_MASK                       equ 0008h
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

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 0019h
// bitfield definitions
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
T1GCON_T1GSS_POSN                        equ 0000h
T1GCON_T1GSS_POSITION                    equ 0000h
T1GCON_T1GSS_SIZE                        equ 0002h
T1GCON_T1GSS_LENGTH                      equ 0002h
T1GCON_T1GSS_MASK                        equ 0003h
T1GCON_T1GGO_POSN                        equ 0003h
T1GCON_T1GGO_POSITION                    equ 0003h
T1GCON_T1GGO_SIZE                        equ 0001h
T1GCON_T1GGO_LENGTH                      equ 0001h
T1GCON_T1GGO_MASK                        equ 0008h

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
TRISB                                    equ 008Dh
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

// Register: TRISE
#define TRISE TRISE
TRISE                                    equ 0090h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0091h
// bitfield definitions
PIE1_TMR1IE_POSN                         equ 0000h
PIE1_TMR1IE_POSITION                     equ 0000h
PIE1_TMR1IE_SIZE                         equ 0001h
PIE1_TMR1IE_LENGTH                       equ 0001h
PIE1_TMR1IE_MASK                         equ 0001h
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

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0092h
// bitfield definitions
PIE2_LCDIE_POSN                          equ 0002h
PIE2_LCDIE_POSITION                      equ 0002h
PIE2_LCDIE_SIZE                          equ 0001h
PIE2_LCDIE_LENGTH                        equ 0001h
PIE2_LCDIE_MASK                          equ 0004h

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
OPTION_REG                               equ 0095h
// bitfield definitions
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
OPTION_REG_PS_POSN                       equ 0000h
OPTION_REG_PS_POSITION                   equ 0000h
OPTION_REG_PS_SIZE                       equ 0003h
OPTION_REG_PS_LENGTH                     equ 0003h
OPTION_REG_PS_MASK                       equ 0007h
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
WDTCON_WDTPS_POSN                        equ 0001h
WDTCON_WDTPS_POSITION                    equ 0001h
WDTCON_WDTPS_SIZE                        equ 0005h
WDTCON_WDTPS_LENGTH                      equ 0005h
WDTCON_WDTPS_MASK                        equ 003Eh

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0099h
// bitfield definitions
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
OSCSTAT_T1OSCR_POSN                      equ 0007h
OSCSTAT_T1OSCR_POSITION                  equ 0007h
OSCSTAT_T1OSCR_SIZE                      equ 0001h
OSCSTAT_T1OSCR_LENGTH                    equ 0001h
OSCSTAT_T1OSCR_MASK                      equ 0080h

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
ADCON0_ADGO_POSN                         equ 0001h
ADCON0_ADGO_POSITION                     equ 0001h
ADCON0_ADGO_SIZE                         equ 0001h
ADCON0_ADGO_LENGTH                       equ 0001h
ADCON0_ADGO_MASK                         equ 0002h
ADCON0_CHS_POSN                          equ 0002h
ADCON0_CHS_POSITION                      equ 0002h
ADCON0_CHS_SIZE                          equ 0005h
ADCON0_CHS_LENGTH                        equ 0005h
ADCON0_CHS_MASK                          equ 007Ch
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h
ADCON0_nDONE_POSN                        equ 0001h
ADCON0_nDONE_POSITION                    equ 0001h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0002h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Eh
// bitfield definitions
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
ADCON1_ADFM_POSN                         equ 0007h
ADCON1_ADFM_POSITION                     equ 0007h
ADCON1_ADFM_SIZE                         equ 0001h
ADCON1_ADFM_LENGTH                       equ 0001h
ADCON1_ADFM_MASK                         equ 0080h
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

// Register: LATB
#define LATB LATB
LATB                                     equ 010Dh
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
ANSELA_ANSELA_POSN                       equ 0000h
ANSELA_ANSELA_POSITION                   equ 0000h
ANSELA_ANSELA_SIZE                       equ 0006h
ANSELA_ANSELA_LENGTH                     equ 0006h
ANSELA_ANSELA_MASK                       equ 003Fh

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 018Dh
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
ANSELB_ANSELB_POSN                       equ 0000h
ANSELB_ANSELB_POSITION                   equ 0000h
ANSELB_ANSELB_SIZE                       equ 0006h
ANSELB_ANSELB_LENGTH                     equ 0006h
ANSELB_ANSELB_MASK                       equ 003Fh

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
SP1BRGL_BRG0_POSN                        equ 0000h
SP1BRGL_BRG0_POSITION                    equ 0000h
SP1BRGL_BRG0_SIZE                        equ 0001h
SP1BRGL_BRG0_LENGTH                      equ 0001h
SP1BRGL_BRG0_MASK                        equ 0001h
SP1BRGL_BRG1_POSN                        equ 0001h
SP1BRGL_BRG1_POSITION                    equ 0001h
SP1BRGL_BRG1_SIZE                        equ 0001h
SP1BRGL_BRG1_LENGTH                      equ 0001h
SP1BRGL_BRG1_MASK                        equ 0002h
SP1BRGL_BRG2_POSN                        equ 0002h
SP1BRGL_BRG2_POSITION                    equ 0002h
SP1BRGL_BRG2_SIZE                        equ 0001h
SP1BRGL_BRG2_LENGTH                      equ 0001h
SP1BRGL_BRG2_MASK                        equ 0004h
SP1BRGL_BRG3_POSN                        equ 0003h
SP1BRGL_BRG3_POSITION                    equ 0003h
SP1BRGL_BRG3_SIZE                        equ 0001h
SP1BRGL_BRG3_LENGTH                      equ 0001h
SP1BRGL_BRG3_MASK                        equ 0008h
SP1BRGL_BRG4_POSN                        equ 0004h
SP1BRGL_BRG4_POSITION                    equ 0004h
SP1BRGL_BRG4_SIZE                        equ 0001h
SP1BRGL_BRG4_LENGTH                      equ 0001h
SP1BRGL_BRG4_MASK                        equ 0010h
SP1BRGL_BRG5_POSN                        equ 0005h
SP1BRGL_BRG5_POSITION                    equ 0005h
SP1BRGL_BRG5_SIZE                        equ 0001h
SP1BRGL_BRG5_LENGTH                      equ 0001h
SP1BRGL_BRG5_MASK                        equ 0020h
SP1BRGL_BRG6_POSN                        equ 0006h
SP1BRGL_BRG6_POSITION                    equ 0006h
SP1BRGL_BRG6_SIZE                        equ 0001h
SP1BRGL_BRG6_LENGTH                      equ 0001h
SP1BRGL_BRG6_MASK                        equ 0040h
SP1BRGL_BRG7_POSN                        equ 0007h
SP1BRGL_BRG7_POSITION                    equ 0007h
SP1BRGL_BRG7_SIZE                        equ 0001h
SP1BRGL_BRG7_LENGTH                      equ 0001h
SP1BRGL_BRG7_MASK                        equ 0080h

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
SP1BRGH                                  equ 019Ch
// bitfield definitions
SP1BRGH_BRG8_POSN                        equ 0000h
SP1BRGH_BRG8_POSITION                    equ 0000h
SP1BRGH_BRG8_SIZE                        equ 0001h
SP1BRGH_BRG8_LENGTH                      equ 0001h
SP1BRGH_BRG8_MASK                        equ 0001h
SP1BRGH_BRG9_POSN                        equ 0001h
SP1BRGH_BRG9_POSITION                    equ 0001h
SP1BRGH_BRG9_SIZE                        equ 0001h
SP1BRGH_BRG9_LENGTH                      equ 0001h
SP1BRGH_BRG9_MASK                        equ 0002h
SP1BRGH_BRG10_POSN                       equ 0002h
SP1BRGH_BRG10_POSITION                   equ 0002h
SP1BRGH_BRG10_SIZE                       equ 0001h
SP1BRGH_BRG10_LENGTH                     equ 0001h
SP1BRGH_BRG10_MASK                       equ 0004h
SP1BRGH_BRG11_POSN                       equ 0003h
SP1BRGH_BRG11_POSITION                   equ 0003h
SP1BRGH_BRG11_SIZE                       equ 0001h
SP1BRGH_BRG11_LENGTH                     equ 0001h
SP1BRGH_BRG11_MASK                       equ 0008h
SP1BRGH_BRG12_POSN                       equ 0004h
SP1BRGH_BRG12_POSITION                   equ 0004h
SP1BRGH_BRG12_SIZE                       equ 0001h
SP1BRGH_BRG12_LENGTH                     equ 0001h
SP1BRGH_BRG12_MASK                       equ 0010h
SP1BRGH_BRG13_POSN                       equ 0005h
SP1BRGH_BRG13_POSITION                   equ 0005h
SP1BRGH_BRG13_SIZE                       equ 0001h
SP1BRGH_BRG13_LENGTH                     equ 0001h
SP1BRGH_BRG13_MASK                       equ 0020h
SP1BRGH_BRG14_POSN                       equ 0006h
SP1BRGH_BRG14_POSITION                   equ 0006h
SP1BRGH_BRG14_SIZE                       equ 0001h
SP1BRGH_BRG14_LENGTH                     equ 0001h
SP1BRGH_BRG14_MASK                       equ 0040h
SP1BRGH_BRG15_POSN                       equ 0007h
SP1BRGH_BRG15_POSITION                   equ 0007h
SP1BRGH_BRG15_SIZE                       equ 0001h
SP1BRGH_BRG15_LENGTH                     equ 0001h
SP1BRGH_BRG15_MASK                       equ 0080h

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

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 020Dh
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
WPUB_WPUB_POSN                           equ 0000h
WPUB_WPUB_POSITION                       equ 0000h
WPUB_WPUB_SIZE                           equ 0008h
WPUB_WPUB_LENGTH                         equ 0008h
WPUB_WPUB_MASK                           equ 00FFh

// Register: WPUE
#define WPUE WPUE
WPUE                                     equ 0210h
// bitfield definitions
WPUE_WPUE3_POSN                          equ 0003h
WPUE_WPUE3_POSITION                      equ 0003h
WPUE_WPUE3_SIZE                          equ 0001h
WPUE_WPUE3_LENGTH                        equ 0001h
WPUE_WPUE3_MASK                          equ 0008h

// Register: IOCBP
#define IOCBP IOCBP
IOCBP                                    equ 0394h
// bitfield definitions
IOCBP_IOCBP0_POSN                        equ 0000h
IOCBP_IOCBP0_POSITION                    equ 0000h
IOCBP_IOCBP0_SIZE                        equ 0001h
IOCBP_IOCBP0_LENGTH                      equ 0001h
IOCBP_IOCBP0_MASK                        equ 0001h
IOCBP_IOCBP1_POSN                        equ 0001h
IOCBP_IOCBP1_POSITION                    equ 0001h
IOCBP_IOCBP1_SIZE                        equ 0001h
IOCBP_IOCBP1_LENGTH                      equ 0001h
IOCBP_IOCBP1_MASK                        equ 0002h
IOCBP_IOCBP2_POSN                        equ 0002h
IOCBP_IOCBP2_POSITION                    equ 0002h
IOCBP_IOCBP2_SIZE                        equ 0001h
IOCBP_IOCBP2_LENGTH                      equ 0001h
IOCBP_IOCBP2_MASK                        equ 0004h
IOCBP_IOCBP3_POSN                        equ 0003h
IOCBP_IOCBP3_POSITION                    equ 0003h
IOCBP_IOCBP3_SIZE                        equ 0001h
IOCBP_IOCBP3_LENGTH                      equ 0001h
IOCBP_IOCBP3_MASK                        equ 0008h
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
IOCBP_IOCBP_POSN                         equ 0000h
IOCBP_IOCBP_POSITION                     equ 0000h
IOCBP_IOCBP_SIZE                         equ 0008h
IOCBP_IOCBP_LENGTH                       equ 0008h
IOCBP_IOCBP_MASK                         equ 00FFh

// Register: IOCBN
#define IOCBN IOCBN
IOCBN                                    equ 0395h
// bitfield definitions
IOCBN_IOCBN0_POSN                        equ 0000h
IOCBN_IOCBN0_POSITION                    equ 0000h
IOCBN_IOCBN0_SIZE                        equ 0001h
IOCBN_IOCBN0_LENGTH                      equ 0001h
IOCBN_IOCBN0_MASK                        equ 0001h
IOCBN_IOCBN1_POSN                        equ 0001h
IOCBN_IOCBN1_POSITION                    equ 0001h
IOCBN_IOCBN1_SIZE                        equ 0001h
IOCBN_IOCBN1_LENGTH                      equ 0001h
IOCBN_IOCBN1_MASK                        equ 0002h
IOCBN_IOCBN2_POSN                        equ 0002h
IOCBN_IOCBN2_POSITION                    equ 0002h
IOCBN_IOCBN2_SIZE                        equ 0001h
IOCBN_IOCBN2_LENGTH                      equ 0001h
IOCBN_IOCBN2_MASK                        equ 0004h
IOCBN_IOCBN3_POSN                        equ 0003h
IOCBN_IOCBN3_POSITION                    equ 0003h
IOCBN_IOCBN3_SIZE                        equ 0001h
IOCBN_IOCBN3_LENGTH                      equ 0001h
IOCBN_IOCBN3_MASK                        equ 0008h
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
IOCBN_IOCBN_POSN                         equ 0000h
IOCBN_IOCBN_POSITION                     equ 0000h
IOCBN_IOCBN_SIZE                         equ 0008h
IOCBN_IOCBN_LENGTH                       equ 0008h
IOCBN_IOCBN_MASK                         equ 00FFh

// Register: IOCBF
#define IOCBF IOCBF
IOCBF                                    equ 0396h
// bitfield definitions
IOCBF_IOCBF0_POSN                        equ 0000h
IOCBF_IOCBF0_POSITION                    equ 0000h
IOCBF_IOCBF0_SIZE                        equ 0001h
IOCBF_IOCBF0_LENGTH                      equ 0001h
IOCBF_IOCBF0_MASK                        equ 0001h
IOCBF_IOCBF1_POSN                        equ 0001h
IOCBF_IOCBF1_POSITION                    equ 0001h
IOCBF_IOCBF1_SIZE                        equ 0001h
IOCBF_IOCBF1_LENGTH                      equ 0001h
IOCBF_IOCBF1_MASK                        equ 0002h
IOCBF_IOCBF2_POSN                        equ 0002h
IOCBF_IOCBF2_POSITION                    equ 0002h
IOCBF_IOCBF2_SIZE                        equ 0001h
IOCBF_IOCBF2_LENGTH                      equ 0001h
IOCBF_IOCBF2_MASK                        equ 0004h
IOCBF_IOCBF3_POSN                        equ 0003h
IOCBF_IOCBF3_POSITION                    equ 0003h
IOCBF_IOCBF3_SIZE                        equ 0001h
IOCBF_IOCBF3_LENGTH                      equ 0001h
IOCBF_IOCBF3_MASK                        equ 0008h
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
IOCBF_IOCBF_POSN                         equ 0000h
IOCBF_IOCBF_POSITION                     equ 0000h
IOCBF_IOCBF_SIZE                         equ 0008h
IOCBF_IOCBF_LENGTH                       equ 0008h
IOCBF_IOCBF_MASK                         equ 00FFh

// Register: LCDCON
#define LCDCON LCDCON
LCDCON                                   equ 0791h
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
LCDCON_LMUX_POSN                         equ 0000h
LCDCON_LMUX_POSITION                     equ 0000h
LCDCON_LMUX_SIZE                         equ 0002h
LCDCON_LMUX_LENGTH                       equ 0002h
LCDCON_LMUX_MASK                         equ 0003h
LCDCON_CS_POSN                           equ 0002h
LCDCON_CS_POSITION                       equ 0002h
LCDCON_CS_SIZE                           equ 0002h
LCDCON_CS_LENGTH                         equ 0002h
LCDCON_CS_MASK                           equ 000Ch

// Register: LCDPS
#define LCDPS LCDPS
LCDPS                                    equ 0792h
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
LCDPS_LP_POSN                            equ 0000h
LCDPS_LP_POSITION                        equ 0000h
LCDPS_LP_SIZE                            equ 0004h
LCDPS_LP_LENGTH                          equ 0004h
LCDPS_LP_MASK                            equ 000Fh

// Register: LCDREF
#define LCDREF LCDREF
LCDREF                                   equ 0793h
// bitfield definitions
LCDREF_VLCD1PE_POSN                      equ 0001h
LCDREF_VLCD1PE_POSITION                  equ 0001h
LCDREF_VLCD1PE_SIZE                      equ 0001h
LCDREF_VLCD1PE_LENGTH                    equ 0001h
LCDREF_VLCD1PE_MASK                      equ 0002h
LCDREF_VLCD2PE_POSN                      equ 0002h
LCDREF_VLCD2PE_POSITION                  equ 0002h
LCDREF_VLCD2PE_SIZE                      equ 0001h
LCDREF_VLCD2PE_LENGTH                    equ 0001h
LCDREF_VLCD2PE_MASK                      equ 0004h
LCDREF_VLCD3PE_POSN                      equ 0003h
LCDREF_VLCD3PE_POSITION                  equ 0003h
LCDREF_VLCD3PE_SIZE                      equ 0001h
LCDREF_VLCD3PE_LENGTH                    equ 0001h
LCDREF_VLCD3PE_MASK                      equ 0008h
LCDREF_LCDIRI_POSN                       equ 0005h
LCDREF_LCDIRI_POSITION                   equ 0005h
LCDREF_LCDIRI_SIZE                       equ 0001h
LCDREF_LCDIRI_LENGTH                     equ 0001h
LCDREF_LCDIRI_MASK                       equ 0020h
LCDREF_LCDIRE_POSN                       equ 0007h
LCDREF_LCDIRE_POSITION                   equ 0007h
LCDREF_LCDIRE_SIZE                       equ 0001h
LCDREF_LCDIRE_LENGTH                     equ 0001h
LCDREF_LCDIRE_MASK                       equ 0080h

// Register: LCDCST
#define LCDCST LCDCST
LCDCST                                   equ 0794h
// bitfield definitions
LCDCST_LCDCST0_POSN                      equ 0000h
LCDCST_LCDCST0_POSITION                  equ 0000h
LCDCST_LCDCST0_SIZE                      equ 0001h
LCDCST_LCDCST0_LENGTH                    equ 0001h
LCDCST_LCDCST0_MASK                      equ 0001h
LCDCST_LCDCST1_POSN                      equ 0001h
LCDCST_LCDCST1_POSITION                  equ 0001h
LCDCST_LCDCST1_SIZE                      equ 0001h
LCDCST_LCDCST1_LENGTH                    equ 0001h
LCDCST_LCDCST1_MASK                      equ 0002h
LCDCST_LCDCST2_POSN                      equ 0002h
LCDCST_LCDCST2_POSITION                  equ 0002h
LCDCST_LCDCST2_SIZE                      equ 0001h
LCDCST_LCDCST2_LENGTH                    equ 0001h
LCDCST_LCDCST2_MASK                      equ 0004h
LCDCST_LCDCST_POSN                       equ 0000h
LCDCST_LCDCST_POSITION                   equ 0000h
LCDCST_LCDCST_SIZE                       equ 0003h
LCDCST_LCDCST_LENGTH                     equ 0003h
LCDCST_LCDCST_MASK                       equ 0007h

// Register: LCDRL
#define LCDRL LCDRL
LCDRL                                    equ 0795h
// bitfield definitions
LCDRL_LRLAT0_POSN                        equ 0000h
LCDRL_LRLAT0_POSITION                    equ 0000h
LCDRL_LRLAT0_SIZE                        equ 0001h
LCDRL_LRLAT0_LENGTH                      equ 0001h
LCDRL_LRLAT0_MASK                        equ 0001h
LCDRL_LRLAT1_POSN                        equ 0001h
LCDRL_LRLAT1_POSITION                    equ 0001h
LCDRL_LRLAT1_SIZE                        equ 0001h
LCDRL_LRLAT1_LENGTH                      equ 0001h
LCDRL_LRLAT1_MASK                        equ 0002h
LCDRL_LRLAT2_POSN                        equ 0002h
LCDRL_LRLAT2_POSITION                    equ 0002h
LCDRL_LRLAT2_SIZE                        equ 0001h
LCDRL_LRLAT2_LENGTH                      equ 0001h
LCDRL_LRLAT2_MASK                        equ 0004h
LCDRL_LRLBP0_POSN                        equ 0004h
LCDRL_LRLBP0_POSITION                    equ 0004h
LCDRL_LRLBP0_SIZE                        equ 0001h
LCDRL_LRLBP0_LENGTH                      equ 0001h
LCDRL_LRLBP0_MASK                        equ 0010h
LCDRL_LRLBP1_POSN                        equ 0005h
LCDRL_LRLBP1_POSITION                    equ 0005h
LCDRL_LRLBP1_SIZE                        equ 0001h
LCDRL_LRLBP1_LENGTH                      equ 0001h
LCDRL_LRLBP1_MASK                        equ 0020h
LCDRL_LRLAP0_POSN                        equ 0006h
LCDRL_LRLAP0_POSITION                    equ 0006h
LCDRL_LRLAP0_SIZE                        equ 0001h
LCDRL_LRLAP0_LENGTH                      equ 0001h
LCDRL_LRLAP0_MASK                        equ 0040h
LCDRL_LRLAP1_POSN                        equ 0007h
LCDRL_LRLAP1_POSITION                    equ 0007h
LCDRL_LRLAP1_SIZE                        equ 0001h
LCDRL_LRLAP1_LENGTH                      equ 0001h
LCDRL_LRLAP1_MASK                        equ 0080h
LCDRL_LRLAT_POSN                         equ 0000h
LCDRL_LRLAT_POSITION                     equ 0000h
LCDRL_LRLAT_SIZE                         equ 0003h
LCDRL_LRLAT_LENGTH                       equ 0003h
LCDRL_LRLAT_MASK                         equ 0007h
LCDRL_LRLBP_POSN                         equ 0004h
LCDRL_LRLBP_POSITION                     equ 0004h
LCDRL_LRLBP_SIZE                         equ 0002h
LCDRL_LRLBP_LENGTH                       equ 0002h
LCDRL_LRLBP_MASK                         equ 0030h
LCDRL_LRLAP_POSN                         equ 0006h
LCDRL_LRLAP_POSITION                     equ 0006h
LCDRL_LRLAP_SIZE                         equ 0002h
LCDRL_LRLAP_LENGTH                       equ 0002h
LCDRL_LRLAP_MASK                         equ 00C0h

// Register: LCDSE0
#define LCDSE0 LCDSE0
LCDSE0                                   equ 0798h
// bitfield definitions
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

// Register: LCDSE1
#define LCDSE1 LCDSE1
LCDSE1                                   equ 0799h
// bitfield definitions
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

// Register: LCDSE3
#define LCDSE3 LCDSE3
LCDSE3                                   equ 079Bh
// bitfield definitions
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

// Register: LCDDATA0
#define LCDDATA0 LCDDATA0
LCDDATA0                                 equ 07A0h
// bitfield definitions
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

// Register: LCDDATA1
#define LCDDATA1 LCDDATA1
LCDDATA1                                 equ 07A1h
// bitfield definitions
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

// Register: LCDDATA3
#define LCDDATA3 LCDDATA3
LCDDATA3                                 equ 07A3h
// bitfield definitions
LCDDATA3_SEG0COM1_POSN                   equ 0000h
LCDDATA3_SEG0COM1_POSITION               equ 0000h
LCDDATA3_SEG0COM1_SIZE                   equ 0001h
LCDDATA3_SEG0COM1_LENGTH                 equ 0001h
LCDDATA3_SEG0COM1_MASK                   equ 0001h
LCDDATA3_SEG1COM1_POSN                   equ 0001h
LCDDATA3_SEG1COM1_POSITION               equ 0001h
LCDDATA3_SEG1COM1_SIZE                   equ 0001h
LCDDATA3_SEG1COM1_LENGTH                 equ 0001h
LCDDATA3_SEG1COM1_MASK                   equ 0002h
LCDDATA3_SEG2COM1_POSN                   equ 0002h
LCDDATA3_SEG2COM1_POSITION               equ 0002h
LCDDATA3_SEG2COM1_SIZE                   equ 0001h
LCDDATA3_SEG2COM1_LENGTH                 equ 0001h
LCDDATA3_SEG2COM1_MASK                   equ 0004h
LCDDATA3_SEG3COM1_POSN                   equ 0003h
LCDDATA3_SEG3COM1_POSITION               equ 0003h
LCDDATA3_SEG3COM1_SIZE                   equ 0001h
LCDDATA3_SEG3COM1_LENGTH                 equ 0001h
LCDDATA3_SEG3COM1_MASK                   equ 0008h
LCDDATA3_SEG4COM1_POSN                   equ 0004h
LCDDATA3_SEG4COM1_POSITION               equ 0004h
LCDDATA3_SEG4COM1_SIZE                   equ 0001h
LCDDATA3_SEG4COM1_LENGTH                 equ 0001h
LCDDATA3_SEG4COM1_MASK                   equ 0010h
LCDDATA3_SEG5COM1_POSN                   equ 0005h
LCDDATA3_SEG5COM1_POSITION               equ 0005h
LCDDATA3_SEG5COM1_SIZE                   equ 0001h
LCDDATA3_SEG5COM1_LENGTH                 equ 0001h
LCDDATA3_SEG5COM1_MASK                   equ 0020h
LCDDATA3_SEG6COM1_POSN                   equ 0006h
LCDDATA3_SEG6COM1_POSITION               equ 0006h
LCDDATA3_SEG6COM1_SIZE                   equ 0001h
LCDDATA3_SEG6COM1_LENGTH                 equ 0001h
LCDDATA3_SEG6COM1_MASK                   equ 0040h
LCDDATA3_SEG7COM1_POSN                   equ 0007h
LCDDATA3_SEG7COM1_POSITION               equ 0007h
LCDDATA3_SEG7COM1_SIZE                   equ 0001h
LCDDATA3_SEG7COM1_LENGTH                 equ 0001h
LCDDATA3_SEG7COM1_MASK                   equ 0080h

// Register: LCDDATA4
#define LCDDATA4 LCDDATA4
LCDDATA4                                 equ 07A4h
// bitfield definitions
LCDDATA4_SEG8COM1_POSN                   equ 0000h
LCDDATA4_SEG8COM1_POSITION               equ 0000h
LCDDATA4_SEG8COM1_SIZE                   equ 0001h
LCDDATA4_SEG8COM1_LENGTH                 equ 0001h
LCDDATA4_SEG8COM1_MASK                   equ 0001h
LCDDATA4_SEG9COM1_POSN                   equ 0001h
LCDDATA4_SEG9COM1_POSITION               equ 0001h
LCDDATA4_SEG9COM1_SIZE                   equ 0001h
LCDDATA4_SEG9COM1_LENGTH                 equ 0001h
LCDDATA4_SEG9COM1_MASK                   equ 0002h
LCDDATA4_SEG10COM1_POSN                  equ 0002h
LCDDATA4_SEG10COM1_POSITION              equ 0002h
LCDDATA4_SEG10COM1_SIZE                  equ 0001h
LCDDATA4_SEG10COM1_LENGTH                equ 0001h
LCDDATA4_SEG10COM1_MASK                  equ 0004h
LCDDATA4_SEG11COM1_POSN                  equ 0003h
LCDDATA4_SEG11COM1_POSITION              equ 0003h
LCDDATA4_SEG11COM1_SIZE                  equ 0001h
LCDDATA4_SEG11COM1_LENGTH                equ 0001h
LCDDATA4_SEG11COM1_MASK                  equ 0008h
LCDDATA4_SEG12COM1_POSN                  equ 0004h
LCDDATA4_SEG12COM1_POSITION              equ 0004h
LCDDATA4_SEG12COM1_SIZE                  equ 0001h
LCDDATA4_SEG12COM1_LENGTH                equ 0001h
LCDDATA4_SEG12COM1_MASK                  equ 0010h
LCDDATA4_SEG13COM1_POSN                  equ 0005h
LCDDATA4_SEG13COM1_POSITION              equ 0005h
LCDDATA4_SEG13COM1_SIZE                  equ 0001h
LCDDATA4_SEG13COM1_LENGTH                equ 0001h
LCDDATA4_SEG13COM1_MASK                  equ 0020h
LCDDATA4_SEG14COM1_POSN                  equ 0006h
LCDDATA4_SEG14COM1_POSITION              equ 0006h
LCDDATA4_SEG14COM1_SIZE                  equ 0001h
LCDDATA4_SEG14COM1_LENGTH                equ 0001h
LCDDATA4_SEG14COM1_MASK                  equ 0040h
LCDDATA4_SEG15COM1_POSN                  equ 0007h
LCDDATA4_SEG15COM1_POSITION              equ 0007h
LCDDATA4_SEG15COM1_SIZE                  equ 0001h
LCDDATA4_SEG15COM1_LENGTH                equ 0001h
LCDDATA4_SEG15COM1_MASK                  equ 0080h

// Register: LCDDATA6
#define LCDDATA6 LCDDATA6
LCDDATA6                                 equ 07A6h
// bitfield definitions
LCDDATA6_SEG0COM2_POSN                   equ 0000h
LCDDATA6_SEG0COM2_POSITION               equ 0000h
LCDDATA6_SEG0COM2_SIZE                   equ 0001h
LCDDATA6_SEG0COM2_LENGTH                 equ 0001h
LCDDATA6_SEG0COM2_MASK                   equ 0001h
LCDDATA6_SEG1COM2_POSN                   equ 0001h
LCDDATA6_SEG1COM2_POSITION               equ 0001h
LCDDATA6_SEG1COM2_SIZE                   equ 0001h
LCDDATA6_SEG1COM2_LENGTH                 equ 0001h
LCDDATA6_SEG1COM2_MASK                   equ 0002h
LCDDATA6_SEG2COM2_POSN                   equ 0002h
LCDDATA6_SEG2COM2_POSITION               equ 0002h
LCDDATA6_SEG2COM2_SIZE                   equ 0001h
LCDDATA6_SEG2COM2_LENGTH                 equ 0001h
LCDDATA6_SEG2COM2_MASK                   equ 0004h
LCDDATA6_SEG3COM2_POSN                   equ 0003h
LCDDATA6_SEG3COM2_POSITION               equ 0003h
LCDDATA6_SEG3COM2_SIZE                   equ 0001h
LCDDATA6_SEG3COM2_LENGTH                 equ 0001h
LCDDATA6_SEG3COM2_MASK                   equ 0008h
LCDDATA6_SEG4COM2_POSN                   equ 0004h
LCDDATA6_SEG4COM2_POSITION               equ 0004h
LCDDATA6_SEG4COM2_SIZE                   equ 0001h
LCDDATA6_SEG4COM2_LENGTH                 equ 0001h
LCDDATA6_SEG4COM2_MASK                   equ 0010h
LCDDATA6_SEG5COM2_POSN                   equ 0005h
LCDDATA6_SEG5COM2_POSITION               equ 0005h
LCDDATA6_SEG5COM2_SIZE                   equ 0001h
LCDDATA6_SEG5COM2_LENGTH                 equ 0001h
LCDDATA6_SEG5COM2_MASK                   equ 0020h
LCDDATA6_SEG6COM2_POSN                   equ 0006h
LCDDATA6_SEG6COM2_POSITION               equ 0006h
LCDDATA6_SEG6COM2_SIZE                   equ 0001h
LCDDATA6_SEG6COM2_LENGTH                 equ 0001h
LCDDATA6_SEG6COM2_MASK                   equ 0040h
LCDDATA6_SEG7COM2_POSN                   equ 0007h
LCDDATA6_SEG7COM2_POSITION               equ 0007h
LCDDATA6_SEG7COM2_SIZE                   equ 0001h
LCDDATA6_SEG7COM2_LENGTH                 equ 0001h
LCDDATA6_SEG7COM2_MASK                   equ 0080h

// Register: LCDDATA7
#define LCDDATA7 LCDDATA7
LCDDATA7                                 equ 07A7h
// bitfield definitions
LCDDATA7_SEG8COM2_POSN                   equ 0000h
LCDDATA7_SEG8COM2_POSITION               equ 0000h
LCDDATA7_SEG8COM2_SIZE                   equ 0001h
LCDDATA7_SEG8COM2_LENGTH                 equ 0001h
LCDDATA7_SEG8COM2_MASK                   equ 0001h
LCDDATA7_SEG9COM2_POSN                   equ 0001h
LCDDATA7_SEG9COM2_POSITION               equ 0001h
LCDDATA7_SEG9COM2_SIZE                   equ 0001h
LCDDATA7_SEG9COM2_LENGTH                 equ 0001h
LCDDATA7_SEG9COM2_MASK                   equ 0002h
LCDDATA7_SEG10COM2_POSN                  equ 0002h
LCDDATA7_SEG10COM2_POSITION              equ 0002h
LCDDATA7_SEG10COM2_SIZE                  equ 0001h
LCDDATA7_SEG10COM2_LENGTH                equ 0001h
LCDDATA7_SEG10COM2_MASK                  equ 0004h
LCDDATA7_SEG11COM2_POSN                  equ 0003h
LCDDATA7_SEG11COM2_POSITION              equ 0003h
LCDDATA7_SEG11COM2_SIZE                  equ 0001h
LCDDATA7_SEG11COM2_LENGTH                equ 0001h
LCDDATA7_SEG11COM2_MASK                  equ 0008h
LCDDATA7_SEG12COM2_POSN                  equ 0004h
LCDDATA7_SEG12COM2_POSITION              equ 0004h
LCDDATA7_SEG12COM2_SIZE                  equ 0001h
LCDDATA7_SEG12COM2_LENGTH                equ 0001h
LCDDATA7_SEG12COM2_MASK                  equ 0010h
LCDDATA7_SEG13COM2_POSN                  equ 0005h
LCDDATA7_SEG13COM2_POSITION              equ 0005h
LCDDATA7_SEG13COM2_SIZE                  equ 0001h
LCDDATA7_SEG13COM2_LENGTH                equ 0001h
LCDDATA7_SEG13COM2_MASK                  equ 0020h
LCDDATA7_SEG14COM2_POSN                  equ 0006h
LCDDATA7_SEG14COM2_POSITION              equ 0006h
LCDDATA7_SEG14COM2_SIZE                  equ 0001h
LCDDATA7_SEG14COM2_LENGTH                equ 0001h
LCDDATA7_SEG14COM2_MASK                  equ 0040h
LCDDATA7_SEG15COM2_POSN                  equ 0007h
LCDDATA7_SEG15COM2_POSITION              equ 0007h
LCDDATA7_SEG15COM2_SIZE                  equ 0001h
LCDDATA7_SEG15COM2_LENGTH                equ 0001h
LCDDATA7_SEG15COM2_MASK                  equ 0080h

// Register: LCDDATA9
#define LCDDATA9 LCDDATA9
LCDDATA9                                 equ 07A9h
// bitfield definitions
LCDDATA9_SEG0COM3_POSN                   equ 0000h
LCDDATA9_SEG0COM3_POSITION               equ 0000h
LCDDATA9_SEG0COM3_SIZE                   equ 0001h
LCDDATA9_SEG0COM3_LENGTH                 equ 0001h
LCDDATA9_SEG0COM3_MASK                   equ 0001h
LCDDATA9_SEG1COM3_POSN                   equ 0001h
LCDDATA9_SEG1COM3_POSITION               equ 0001h
LCDDATA9_SEG1COM3_SIZE                   equ 0001h
LCDDATA9_SEG1COM3_LENGTH                 equ 0001h
LCDDATA9_SEG1COM3_MASK                   equ 0002h
LCDDATA9_SEG2COM3_POSN                   equ 0002h
LCDDATA9_SEG2COM3_POSITION               equ 0002h
LCDDATA9_SEG2COM3_SIZE                   equ 0001h
LCDDATA9_SEG2COM3_LENGTH                 equ 0001h
LCDDATA9_SEG2COM3_MASK                   equ 0004h
LCDDATA9_SEG3COM3_POSN                   equ 0003h
LCDDATA9_SEG3COM3_POSITION               equ 0003h
LCDDATA9_SEG3COM3_SIZE                   equ 0001h
LCDDATA9_SEG3COM3_LENGTH                 equ 0001h
LCDDATA9_SEG3COM3_MASK                   equ 0008h
LCDDATA9_SEG4COM3_POSN                   equ 0004h
LCDDATA9_SEG4COM3_POSITION               equ 0004h
LCDDATA9_SEG4COM3_SIZE                   equ 0001h
LCDDATA9_SEG4COM3_LENGTH                 equ 0001h
LCDDATA9_SEG4COM3_MASK                   equ 0010h
LCDDATA9_SEG5COM3_POSN                   equ 0005h
LCDDATA9_SEG5COM3_POSITION               equ 0005h
LCDDATA9_SEG5COM3_SIZE                   equ 0001h
LCDDATA9_SEG5COM3_LENGTH                 equ 0001h
LCDDATA9_SEG5COM3_MASK                   equ 0020h
LCDDATA9_SEG6COM3_POSN                   equ 0006h
LCDDATA9_SEG6COM3_POSITION               equ 0006h
LCDDATA9_SEG6COM3_SIZE                   equ 0001h
LCDDATA9_SEG6COM3_LENGTH                 equ 0001h
LCDDATA9_SEG6COM3_MASK                   equ 0040h
LCDDATA9_SEG7COM3_POSN                   equ 0007h
LCDDATA9_SEG7COM3_POSITION               equ 0007h
LCDDATA9_SEG7COM3_SIZE                   equ 0001h
LCDDATA9_SEG7COM3_LENGTH                 equ 0001h
LCDDATA9_SEG7COM3_MASK                   equ 0080h

// Register: LCDDATA10
#define LCDDATA10 LCDDATA10
LCDDATA10                                equ 07AAh
// bitfield definitions
LCDDATA10_SEG8COM3_POSN                  equ 0000h
LCDDATA10_SEG8COM3_POSITION              equ 0000h
LCDDATA10_SEG8COM3_SIZE                  equ 0001h
LCDDATA10_SEG8COM3_LENGTH                equ 0001h
LCDDATA10_SEG8COM3_MASK                  equ 0001h
LCDDATA10_SEG9COM3_POSN                  equ 0001h
LCDDATA10_SEG9COM3_POSITION              equ 0001h
LCDDATA10_SEG9COM3_SIZE                  equ 0001h
LCDDATA10_SEG9COM3_LENGTH                equ 0001h
LCDDATA10_SEG9COM3_MASK                  equ 0002h
LCDDATA10_SEG10COM3_POSN                 equ 0002h
LCDDATA10_SEG10COM3_POSITION             equ 0002h
LCDDATA10_SEG10COM3_SIZE                 equ 0001h
LCDDATA10_SEG10COM3_LENGTH               equ 0001h
LCDDATA10_SEG10COM3_MASK                 equ 0004h
LCDDATA10_SEG11COM3_POSN                 equ 0003h
LCDDATA10_SEG11COM3_POSITION             equ 0003h
LCDDATA10_SEG11COM3_SIZE                 equ 0001h
LCDDATA10_SEG11COM3_LENGTH               equ 0001h
LCDDATA10_SEG11COM3_MASK                 equ 0008h
LCDDATA10_SEG12COM3_POSN                 equ 0004h
LCDDATA10_SEG12COM3_POSITION             equ 0004h
LCDDATA10_SEG12COM3_SIZE                 equ 0001h
LCDDATA10_SEG12COM3_LENGTH               equ 0001h
LCDDATA10_SEG12COM3_MASK                 equ 0010h
LCDDATA10_SEG13COM3_POSN                 equ 0005h
LCDDATA10_SEG13COM3_POSITION             equ 0005h
LCDDATA10_SEG13COM3_SIZE                 equ 0001h
LCDDATA10_SEG13COM3_LENGTH               equ 0001h
LCDDATA10_SEG13COM3_MASK                 equ 0020h
LCDDATA10_SEG14COM3_POSN                 equ 0006h
LCDDATA10_SEG14COM3_POSITION             equ 0006h
LCDDATA10_SEG14COM3_SIZE                 equ 0001h
LCDDATA10_SEG14COM3_LENGTH               equ 0001h
LCDDATA10_SEG14COM3_MASK                 equ 0040h
LCDDATA10_SEG15COM3_POSN                 equ 0007h
LCDDATA10_SEG15COM3_POSITION             equ 0007h
LCDDATA10_SEG15COM3_SIZE                 equ 0001h
LCDDATA10_SEG15COM3_LENGTH               equ 0001h
LCDDATA10_SEG15COM3_MASK                 equ 0080h

// Register: LCDDATA12
#define LCDDATA12 LCDDATA12
LCDDATA12                                equ 07ACh
// bitfield definitions
LCDDATA12_SEG24COM0_POSN                 equ 0000h
LCDDATA12_SEG24COM0_POSITION             equ 0000h
LCDDATA12_SEG24COM0_SIZE                 equ 0001h
LCDDATA12_SEG24COM0_LENGTH               equ 0001h
LCDDATA12_SEG24COM0_MASK                 equ 0001h
LCDDATA12_SEG25COM0_POSN                 equ 0001h
LCDDATA12_SEG25COM0_POSITION             equ 0001h
LCDDATA12_SEG25COM0_SIZE                 equ 0001h
LCDDATA12_SEG25COM0_LENGTH               equ 0001h
LCDDATA12_SEG25COM0_MASK                 equ 0002h
LCDDATA12_SEG26COM0_POSN                 equ 0002h
LCDDATA12_SEG26COM0_POSITION             equ 0002h
LCDDATA12_SEG26COM0_SIZE                 equ 0001h
LCDDATA12_SEG26COM0_LENGTH               equ 0001h
LCDDATA12_SEG26COM0_MASK                 equ 0004h

// Register: LCDDATA15
#define LCDDATA15 LCDDATA15
LCDDATA15                                equ 07AFh
// bitfield definitions
LCDDATA15_SEG24COM1_POSN                 equ 0000h
LCDDATA15_SEG24COM1_POSITION             equ 0000h
LCDDATA15_SEG24COM1_SIZE                 equ 0001h
LCDDATA15_SEG24COM1_LENGTH               equ 0001h
LCDDATA15_SEG24COM1_MASK                 equ 0001h
LCDDATA15_SEG25COM1_POSN                 equ 0001h
LCDDATA15_SEG25COM1_POSITION             equ 0001h
LCDDATA15_SEG25COM1_SIZE                 equ 0001h
LCDDATA15_SEG25COM1_LENGTH               equ 0001h
LCDDATA15_SEG25COM1_MASK                 equ 0002h
LCDDATA15_SEG26COM1_POSN                 equ 0002h
LCDDATA15_SEG26COM1_POSITION             equ 0002h
LCDDATA15_SEG26COM1_SIZE                 equ 0001h
LCDDATA15_SEG26COM1_LENGTH               equ 0001h
LCDDATA15_SEG26COM1_MASK                 equ 0004h

// Register: LCDDATA18
#define LCDDATA18 LCDDATA18
LCDDATA18                                equ 07B2h
// bitfield definitions
LCDDATA18_SEG24COM2_POSN                 equ 0000h
LCDDATA18_SEG24COM2_POSITION             equ 0000h
LCDDATA18_SEG24COM2_SIZE                 equ 0001h
LCDDATA18_SEG24COM2_LENGTH               equ 0001h
LCDDATA18_SEG24COM2_MASK                 equ 0001h
LCDDATA18_SEG25COM2_POSN                 equ 0001h
LCDDATA18_SEG25COM2_POSITION             equ 0001h
LCDDATA18_SEG25COM2_SIZE                 equ 0001h
LCDDATA18_SEG25COM2_LENGTH               equ 0001h
LCDDATA18_SEG25COM2_MASK                 equ 0002h
LCDDATA18_SEG26COM2_POSN                 equ 0002h
LCDDATA18_SEG26COM2_POSITION             equ 0002h
LCDDATA18_SEG26COM2_SIZE                 equ 0001h
LCDDATA18_SEG26COM2_LENGTH               equ 0001h
LCDDATA18_SEG26COM2_MASK                 equ 0004h

// Register: LCDDATA21
#define LCDDATA21 LCDDATA21
LCDDATA21                                equ 07B5h
// bitfield definitions
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
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADDEN                            BANKMASK(RC1STA), 3
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
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSA5                            BANKMASK(ANSELA), 5
#define ANSB0                            BANKMASK(ANSELB), 0
#define ANSB1                            BANKMASK(ANSELB), 1
#define ANSB2                            BANKMASK(ANSELB), 2
#define ANSB3                            BANKMASK(ANSELB), 3
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define BIASMD                           BANKMASK(LCDPS), 6
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define BRG0                             BANKMASK(SP1BRGL), 0
#define BRG1                             BANKMASK(SP1BRGL), 1
#define BRG10                            BANKMASK(SP1BRGH), 2
#define BRG11                            BANKMASK(SP1BRGH), 3
#define BRG12                            BANKMASK(SP1BRGH), 4
#define BRG13                            BANKMASK(SP1BRGH), 5
#define BRG14                            BANKMASK(SP1BRGH), 6
#define BRG15                            BANKMASK(SP1BRGH), 7
#define BRG16                            BANKMASK(BAUD1CON), 3
#define BRG2                             BANKMASK(SP1BRGL), 2
#define BRG3                             BANKMASK(SP1BRGL), 3
#define BRG4                             BANKMASK(SP1BRGL), 4
#define BRG5                             BANKMASK(SP1BRGL), 5
#define BRG6                             BANKMASK(SP1BRGL), 6
#define BRG7                             BANKMASK(SP1BRGL), 7
#define BRG8                             BANKMASK(SP1BRGH), 0
#define BRG9                             BANKMASK(SP1BRGH), 1
#define BRGH                             BANKMASK(TX1STA), 2
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
#define CARRY                            BANKMASK(STATUS), 0
#define CFGS                             BANKMASK(PMCON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CREN                             BANKMASK(RC1STA), 4
#define CS0                              BANKMASK(LCDCON), 2
#define CS1                              BANKMASK(LCDCON), 3
#define CSRC                             BANKMASK(TX1STA), 7
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DC                               BANKMASK(STATUS), 1
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define FERR                             BANKMASK(RC1STA), 2
#define FREE                             BANKMASK(PMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define HFIOFR                           BANKMASK(OSCSTAT), 4
#define HFIOFS                           BANKMASK(OSCSTAT), 0
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCBF0                           BANKMASK(IOCBF), 0
#define IOCBF1                           BANKMASK(IOCBF), 1
#define IOCBF2                           BANKMASK(IOCBF), 2
#define IOCBF3                           BANKMASK(IOCBF), 3
#define IOCBF4                           BANKMASK(IOCBF), 4
#define IOCBF5                           BANKMASK(IOCBF), 5
#define IOCBF6                           BANKMASK(IOCBF), 6
#define IOCBF7                           BANKMASK(IOCBF), 7
#define IOCBN0                           BANKMASK(IOCBN), 0
#define IOCBN1                           BANKMASK(IOCBN), 1
#define IOCBN2                           BANKMASK(IOCBN), 2
#define IOCBN3                           BANKMASK(IOCBN), 3
#define IOCBN4                           BANKMASK(IOCBN), 4
#define IOCBN5                           BANKMASK(IOCBN), 5
#define IOCBN6                           BANKMASK(IOCBN), 6
#define IOCBN7                           BANKMASK(IOCBN), 7
#define IOCBP0                           BANKMASK(IOCBP), 0
#define IOCBP1                           BANKMASK(IOCBP), 1
#define IOCBP2                           BANKMASK(IOCBP), 2
#define IOCBP3                           BANKMASK(IOCBP), 3
#define IOCBP4                           BANKMASK(IOCBP), 4
#define IOCBP5                           BANKMASK(IOCBP), 5
#define IOCBP6                           BANKMASK(IOCBP), 6
#define IOCBP7                           BANKMASK(IOCBP), 7
#define IOCIE                            BANKMASK(INTCON), 3
#define IOCIF                            BANKMASK(INTCON), 0
#define IRCF0                            BANKMASK(OSCCON), 3
#define IRCF1                            BANKMASK(OSCCON), 4
#define IRCF2                            BANKMASK(OSCCON), 5
#define IRCF3                            BANKMASK(OSCCON), 6
#define LATA0                            BANKMASK(LATA), 0
#define LATA1                            BANKMASK(LATA), 1
#define LATA2                            BANKMASK(LATA), 2
#define LATA3                            BANKMASK(LATA), 3
#define LATA4                            BANKMASK(LATA), 4
#define LATA5                            BANKMASK(LATA), 5
#define LATA6                            BANKMASK(LATA), 6
#define LATA7                            BANKMASK(LATA), 7
#define LATB0                            BANKMASK(LATB), 0
#define LATB1                            BANKMASK(LATB), 1
#define LATB2                            BANKMASK(LATB), 2
#define LATB3                            BANKMASK(LATB), 3
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
#define LCDA                             BANKMASK(LCDPS), 5
#define LCDCST0                          BANKMASK(LCDCST), 0
#define LCDCST1                          BANKMASK(LCDCST), 1
#define LCDCST2                          BANKMASK(LCDCST), 2
#define LCDEN                            BANKMASK(LCDCON), 7
#define LCDIE                            BANKMASK(PIE2), 2
#define LCDIF                            BANKMASK(PIR2), 2
#define LCDIRE                           BANKMASK(LCDREF), 7
#define LCDIRI                           BANKMASK(LCDREF), 5
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LMUX0                            BANKMASK(LCDCON), 0
#define LMUX1                            BANKMASK(LCDCON), 1
#define LP0                              BANKMASK(LCDPS), 0
#define LP1                              BANKMASK(LCDPS), 1
#define LP2                              BANKMASK(LCDPS), 2
#define LP3                              BANKMASK(LCDPS), 3
#define LRLAP0                           BANKMASK(LCDRL), 6
#define LRLAP1                           BANKMASK(LCDRL), 7
#define LRLAT0                           BANKMASK(LCDRL), 0
#define LRLAT1                           BANKMASK(LCDRL), 1
#define LRLAT2                           BANKMASK(LCDRL), 2
#define LRLBP0                           BANKMASK(LCDRL), 4
#define LRLBP1                           BANKMASK(LCDRL), 5
#define LWLO                             BANKMASK(PMCON1), 5
#define OERR                             BANKMASK(RC1STA), 1
#define OSTS                             BANKMASK(OSCSTAT), 5
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
#define RA6                              BANKMASK(PORTA), 6
#define RA7                              BANKMASK(PORTA), 7
#define RB0                              BANKMASK(PORTB), 0
#define RB1                              BANKMASK(PORTB), 1
#define RB2                              BANKMASK(PORTB), 2
#define RB3                              BANKMASK(PORTB), 3
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
#define RCIDL                            BANKMASK(BAUD1CON), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(PMCON1), 0
#define RE3                              BANKMASK(PORTE), 3
#define RX9                              BANKMASK(RC1STA), 6
#define RX9D                             BANKMASK(RC1STA), 0
#define SBOREN                           BANKMASK(BORCON), 7
#define SCKP                             BANKMASK(BAUD1CON), 4
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SE0                              BANKMASK(LCDSE0), 0
#define SE1                              BANKMASK(LCDSE0), 1
#define SE10                             BANKMASK(LCDSE1), 2
#define SE11                             BANKMASK(LCDSE1), 3
#define SE12                             BANKMASK(LCDSE1), 4
#define SE13                             BANKMASK(LCDSE1), 5
#define SE14                             BANKMASK(LCDSE1), 6
#define SE15                             BANKMASK(LCDSE1), 7
#define SE2                              BANKMASK(LCDSE0), 2
#define SE24                             BANKMASK(LCDSE3), 0
#define SE25                             BANKMASK(LCDSE3), 1
#define SE26                             BANKMASK(LCDSE3), 2
#define SE3                              BANKMASK(LCDSE0), 3
#define SE4                              BANKMASK(LCDSE0), 4
#define SE5                              BANKMASK(LCDSE0), 5
#define SE6                              BANKMASK(LCDSE0), 6
#define SE7                              BANKMASK(LCDSE0), 7
#define SE8                              BANKMASK(LCDSE1), 0
#define SE9                              BANKMASK(LCDSE1), 1
#define SEG0COM0                         BANKMASK(LCDDATA0), 0
#define SEG0COM1                         BANKMASK(LCDDATA3), 0
#define SEG0COM2                         BANKMASK(LCDDATA6), 0
#define SEG0COM3                         BANKMASK(LCDDATA9), 0
#define SEG10COM0                        BANKMASK(LCDDATA1), 2
#define SEG10COM1                        BANKMASK(LCDDATA4), 2
#define SEG10COM2                        BANKMASK(LCDDATA7), 2
#define SEG10COM3                        BANKMASK(LCDDATA10), 2
#define SEG11COM0                        BANKMASK(LCDDATA1), 3
#define SEG11COM1                        BANKMASK(LCDDATA4), 3
#define SEG11COM2                        BANKMASK(LCDDATA7), 3
#define SEG11COM3                        BANKMASK(LCDDATA10), 3
#define SEG12COM0                        BANKMASK(LCDDATA1), 4
#define SEG12COM1                        BANKMASK(LCDDATA4), 4
#define SEG12COM2                        BANKMASK(LCDDATA7), 4
#define SEG12COM3                        BANKMASK(LCDDATA10), 4
#define SEG13COM0                        BANKMASK(LCDDATA1), 5
#define SEG13COM1                        BANKMASK(LCDDATA4), 5
#define SEG13COM2                        BANKMASK(LCDDATA7), 5
#define SEG13COM3                        BANKMASK(LCDDATA10), 5
#define SEG14COM0                        BANKMASK(LCDDATA1), 6
#define SEG14COM1                        BANKMASK(LCDDATA4), 6
#define SEG14COM2                        BANKMASK(LCDDATA7), 6
#define SEG14COM3                        BANKMASK(LCDDATA10), 6
#define SEG15COM0                        BANKMASK(LCDDATA1), 7
#define SEG15COM1                        BANKMASK(LCDDATA4), 7
#define SEG15COM2                        BANKMASK(LCDDATA7), 7
#define SEG15COM3                        BANKMASK(LCDDATA10), 7
#define SEG1COM0                         BANKMASK(LCDDATA0), 1
#define SEG1COM1                         BANKMASK(LCDDATA3), 1
#define SEG1COM2                         BANKMASK(LCDDATA6), 1
#define SEG1COM3                         BANKMASK(LCDDATA9), 1
#define SEG24COM0                        BANKMASK(LCDDATA12), 0
#define SEG24COM1                        BANKMASK(LCDDATA15), 0
#define SEG24COM2                        BANKMASK(LCDDATA18), 0
#define SEG24COM3                        BANKMASK(LCDDATA21), 0
#define SEG25COM0                        BANKMASK(LCDDATA12), 1
#define SEG25COM1                        BANKMASK(LCDDATA15), 1
#define SEG25COM2                        BANKMASK(LCDDATA18), 1
#define SEG25COM3                        BANKMASK(LCDDATA21), 1
#define SEG26COM0                        BANKMASK(LCDDATA12), 2
#define SEG26COM1                        BANKMASK(LCDDATA15), 2
#define SEG26COM2                        BANKMASK(LCDDATA18), 2
#define SEG26COM3                        BANKMASK(LCDDATA21), 2
#define SEG2COM0                         BANKMASK(LCDDATA0), 2
#define SEG2COM1                         BANKMASK(LCDDATA3), 2
#define SEG2COM2                         BANKMASK(LCDDATA6), 2
#define SEG2COM3                         BANKMASK(LCDDATA9), 2
#define SEG3COM0                         BANKMASK(LCDDATA0), 3
#define SEG3COM1                         BANKMASK(LCDDATA3), 3
#define SEG3COM2                         BANKMASK(LCDDATA6), 3
#define SEG3COM3                         BANKMASK(LCDDATA9), 3
#define SEG4COM0                         BANKMASK(LCDDATA0), 4
#define SEG4COM1                         BANKMASK(LCDDATA3), 4
#define SEG4COM2                         BANKMASK(LCDDATA6), 4
#define SEG4COM3                         BANKMASK(LCDDATA9), 4
#define SEG5COM0                         BANKMASK(LCDDATA0), 5
#define SEG5COM1                         BANKMASK(LCDDATA3), 5
#define SEG5COM2                         BANKMASK(LCDDATA6), 5
#define SEG5COM3                         BANKMASK(LCDDATA9), 5
#define SEG6COM0                         BANKMASK(LCDDATA0), 6
#define SEG6COM1                         BANKMASK(LCDDATA3), 6
#define SEG6COM2                         BANKMASK(LCDDATA6), 6
#define SEG6COM3                         BANKMASK(LCDDATA9), 6
#define SEG7COM0                         BANKMASK(LCDDATA0), 7
#define SEG7COM1                         BANKMASK(LCDDATA3), 7
#define SEG7COM2                         BANKMASK(LCDDATA6), 7
#define SEG7COM3                         BANKMASK(LCDDATA9), 7
#define SEG8COM0                         BANKMASK(LCDDATA1), 0
#define SEG8COM1                         BANKMASK(LCDDATA4), 0
#define SEG8COM2                         BANKMASK(LCDDATA7), 0
#define SEG8COM3                         BANKMASK(LCDDATA10), 0
#define SEG9COM0                         BANKMASK(LCDDATA1), 1
#define SEG9COM1                         BANKMASK(LCDDATA4), 1
#define SEG9COM2                         BANKMASK(LCDDATA7), 1
#define SEG9COM3                         BANKMASK(LCDDATA10), 1
#define SENDB                            BANKMASK(TX1STA), 3
#define SLPEN                            BANKMASK(LCDCON), 6
#define SPEN                             BANKMASK(RC1STA), 7
#define SREN                             BANKMASK(RC1STA), 5
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TX1STA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T1OSCR                           BANKMASK(OSCSTAT), 7
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
#define TRISA0                           BANKMASK(TRISA), 0
#define TRISA1                           BANKMASK(TRISA), 1
#define TRISA2                           BANKMASK(TRISA), 2
#define TRISA3                           BANKMASK(TRISA), 3
#define TRISA4                           BANKMASK(TRISA), 4
#define TRISA5                           BANKMASK(TRISA), 5
#define TRISA6                           BANKMASK(TRISA), 6
#define TRISA7                           BANKMASK(TRISA), 7
#define TRISB0                           BANKMASK(TRISB), 0
#define TRISB1                           BANKMASK(TRISB), 1
#define TRISB2                           BANKMASK(TRISB), 2
#define TRISB3                           BANKMASK(TRISB), 3
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
#define TX9                              BANKMASK(TX1STA), 6
#define TX9D                             BANKMASK(TX1STA), 0
#define TXEN                             BANKMASK(TX1STA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define VLCD1PE                          BANKMASK(LCDREF), 1
#define VLCD2PE                          BANKMASK(LCDREF), 2
#define VLCD3PE                          BANKMASK(LCDREF), 3
#define WA                               BANKMASK(LCDPS), 4
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WDTPS4                           BANKMASK(WDTCON), 5
#define WERR                             BANKMASK(LCDCON), 5
#define WFT                              BANKMASK(LCDPS), 7
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define WPUE3                            BANKMASK(WPUE), 3
#define WR                               BANKMASK(PMCON1), 1
#define WREN                             BANKMASK(PMCON1), 2
#define WRERR                            BANKMASK(PMCON1), 3
#define WUE                              BANKMASK(BAUD1CON), 1
#define ZERO                             BANKMASK(STATUS), 2
#define Z_SHAD                           BANKMASK(STATUS_SHAD), 2
#define nBOR                             BANKMASK(PCON), 0
#define nDONE                            BANKMASK(ADCON0), 1
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRI                              BANKMASK(PCON), 2
#define nRMCLR                           BANKMASK(PCON), 3
#define nRWDT                            BANKMASK(PCON), 4
#define nT1SYNC                          BANKMASK(T1CON), 2
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

#endif // _PIC16LF1906_INC_
