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

#ifndef _PIC16LF1578_INC_
#define _PIC16LF1578_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF1578
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
PIR3_PWM1IF_POSN                         equ 0004h
PIR3_PWM1IF_POSITION                     equ 0004h
PIR3_PWM1IF_SIZE                         equ 0001h
PIR3_PWM1IF_LENGTH                       equ 0001h
PIR3_PWM1IF_MASK                         equ 0010h
PIR3_PWM2IF_POSN                         equ 0005h
PIR3_PWM2IF_POSITION                     equ 0005h
PIR3_PWM2IF_SIZE                         equ 0001h
PIR3_PWM2IF_LENGTH                       equ 0001h
PIR3_PWM2IF_MASK                         equ 0020h
PIR3_PWM3IF_POSN                         equ 0006h
PIR3_PWM3IF_POSITION                     equ 0006h
PIR3_PWM3IF_SIZE                         equ 0001h
PIR3_PWM3IF_LENGTH                       equ 0001h
PIR3_PWM3IF_MASK                         equ 0040h
PIR3_PWM4IF_POSN                         equ 0007h
PIR3_PWM4IF_POSITION                     equ 0007h
PIR3_PWM4IF_SIZE                         equ 0001h
PIR3_PWM4IF_LENGTH                       equ 0001h
PIR3_PWM4IF_MASK                         equ 0080h

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

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 001Ah
// bitfield definitions
TMR2_TMR2_POSN                           equ 0000h
TMR2_TMR2_POSITION                       equ 0000h
TMR2_TMR2_SIZE                           equ 0008h
TMR2_TMR2_LENGTH                         equ 0008h
TMR2_TMR2_MASK                           equ 00FFh

// Register: PR2
#define PR2 PR2
PR2                                      equ 001Bh
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 001Ch
// bitfield definitions
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
PIE3_PWM1IE_POSN                         equ 0004h
PIE3_PWM1IE_POSITION                     equ 0004h
PIE3_PWM1IE_SIZE                         equ 0001h
PIE3_PWM1IE_LENGTH                       equ 0001h
PIE3_PWM1IE_MASK                         equ 0010h
PIE3_PWM2IE_POSN                         equ 0005h
PIE3_PWM2IE_POSITION                     equ 0005h
PIE3_PWM2IE_SIZE                         equ 0001h
PIE3_PWM2IE_LENGTH                       equ 0001h
PIE3_PWM2IE_MASK                         equ 0020h
PIE3_PWM3IE_POSN                         equ 0006h
PIE3_PWM3IE_POSITION                     equ 0006h
PIE3_PWM3IE_SIZE                         equ 0001h
PIE3_PWM3IE_LENGTH                       equ 0001h
PIE3_PWM3IE_MASK                         equ 0040h
PIE3_PWM4IE_POSN                         equ 0007h
PIE3_PWM4IE_POSITION                     equ 0007h
PIE3_PWM4IE_SIZE                         equ 0001h
PIE3_PWM4IE_LENGTH                       equ 0001h
PIE3_PWM4IE_MASK                         equ 0080h

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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0098h
// bitfield definitions
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
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0006h
OSCTUNE_TUN_LENGTH                       equ 0006h
OSCTUNE_TUN_MASK                         equ 003Fh

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
OSCCON_SPLLEN_POSN                       equ 0007h
OSCCON_SPLLEN_POSITION                   equ 0007h
OSCCON_SPLLEN_SIZE                       equ 0001h
OSCCON_SPLLEN_LENGTH                     equ 0001h
OSCCON_SPLLEN_MASK                       equ 0080h
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

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 009Fh
// bitfield definitions
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
ADCON2_TRIGSEL_POSN                      equ 0004h
ADCON2_TRIGSEL_POSITION                  equ 0004h
ADCON2_TRIGSEL_SIZE                      equ 0004h
ADCON2_TRIGSEL_LENGTH                    equ 0004h
ADCON2_TRIGSEL_MASK                      equ 00F0h

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

// Register: DACCON0
#define DACCON0 DACCON0
DACCON0                                  equ 0118h
// bitfield definitions
DACCON0_DACPSS0_POSN                     equ 0002h
DACCON0_DACPSS0_POSITION                 equ 0002h
DACCON0_DACPSS0_SIZE                     equ 0001h
DACCON0_DACPSS0_LENGTH                   equ 0001h
DACCON0_DACPSS0_MASK                     equ 0004h
DACCON0_DACPSS1_POSN                     equ 0003h
DACCON0_DACPSS1_POSITION                 equ 0003h
DACCON0_DACPSS1_SIZE                     equ 0001h
DACCON0_DACPSS1_LENGTH                   equ 0001h
DACCON0_DACPSS1_MASK                     equ 0008h
DACCON0_DACOE_POSN                       equ 0005h
DACCON0_DACOE_POSITION                   equ 0005h
DACCON0_DACOE_SIZE                       equ 0001h
DACCON0_DACOE_LENGTH                     equ 0001h
DACCON0_DACOE_MASK                       equ 0020h
DACCON0_DACLPS_POSN                      equ 0006h
DACCON0_DACLPS_POSITION                  equ 0006h
DACCON0_DACLPS_SIZE                      equ 0001h
DACCON0_DACLPS_LENGTH                    equ 0001h
DACCON0_DACLPS_MASK                      equ 0040h
DACCON0_DACEN_POSN                       equ 0007h
DACCON0_DACEN_POSITION                   equ 0007h
DACCON0_DACEN_SIZE                       equ 0001h
DACCON0_DACEN_LENGTH                     equ 0001h
DACCON0_DACEN_MASK                       equ 0080h
DACCON0_DACPSS_POSN                      equ 0002h
DACCON0_DACPSS_POSITION                  equ 0002h
DACCON0_DACPSS_SIZE                      equ 0002h
DACCON0_DACPSS_LENGTH                    equ 0002h
DACCON0_DACPSS_MASK                      equ 000Ch

// Register: DACCON1
#define DACCON1 DACCON1
DACCON1                                  equ 0119h
// bitfield definitions
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
DACCON1_DACR_POSN                        equ 0000h
DACCON1_DACR_POSITION                    equ 0000h
DACCON1_DACR_SIZE                        equ 0005h
DACCON1_DACR_LENGTH                      equ 0005h
DACCON1_DACR_MASK                        equ 001Fh

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
ANSELA_ANSA_POSN                         equ 0000h
ANSELA_ANSA_POSITION                     equ 0000h
ANSELA_ANSA_SIZE                         equ 0005h
ANSELA_ANSA_LENGTH                       equ 0005h
ANSELA_ANSA_MASK                         equ 001Fh

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
ANSELB_ANSB_POSN                         equ 0004h
ANSELB_ANSB_POSITION                     equ 0004h
ANSELB_ANSB_SIZE                         equ 0002h
ANSELB_ANSB_LENGTH                       equ 0002h
ANSELB_ANSB_MASK                         equ 0030h

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
ANSELC_ANSC_POSN                         equ 0000h
ANSELC_ANSC_POSITION                     equ 0000h
ANSELC_ANSC_SIZE                         equ 0008h
ANSELC_ANSC_LENGTH                       equ 0008h
ANSELC_ANSC_MASK                         equ 00FFh

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

// Register: RCREG
#define RCREG RCREG
RCREG                                    equ 0199h
// bitfield definitions
RCREG_RCREG_POSN                         equ 0000h
RCREG_RCREG_POSITION                     equ 0000h
RCREG_RCREG_SIZE                         equ 0008h
RCREG_RCREG_LENGTH                       equ 0008h
RCREG_RCREG_MASK                         equ 00FFh

// Register: TXREG
#define TXREG TXREG
TXREG                                    equ 019Ah
// bitfield definitions
TXREG_TXREG_POSN                         equ 0000h
TXREG_TXREG_POSITION                     equ 0000h
TXREG_TXREG_SIZE                         equ 0008h
TXREG_TXREG_LENGTH                       equ 0008h
TXREG_TXREG_MASK                         equ 00FFh

// Register: SPBRGL
#define SPBRGL SPBRGL
SPBRGL                                   equ 019Bh
// bitfield definitions
SPBRGL_SPBRGL_POSN                       equ 0000h
SPBRGL_SPBRGL_POSITION                   equ 0000h
SPBRGL_SPBRGL_SIZE                       equ 0008h
SPBRGL_SPBRGL_LENGTH                     equ 0008h
SPBRGL_SPBRGL_MASK                       equ 00FFh

// Register: SPBRGH
#define SPBRGH SPBRGH
SPBRGH                                   equ 019Ch
// bitfield definitions
SPBRGH_SPBRGH_POSN                       equ 0000h
SPBRGH_SPBRGH_POSITION                   equ 0000h
SPBRGH_SPBRGH_SIZE                       equ 0008h
SPBRGH_SPBRGH_LENGTH                     equ 0008h
SPBRGH_SPBRGH_MASK                       equ 00FFh

// Register: RCSTA
#define RCSTA RCSTA
RCSTA                                    equ 019Dh
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

// Register: TXSTA
#define TXSTA TXSTA
TXSTA                                    equ 019Eh
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

// Register: BAUDCON
#define BAUDCON BAUDCON
BAUDCON                                  equ 019Fh
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
BAUDCON_SCKP_POSN                        equ 0004h
BAUDCON_SCKP_POSITION                    equ 0004h
BAUDCON_SCKP_SIZE                        equ 0001h
BAUDCON_SCKP_LENGTH                      equ 0001h
BAUDCON_SCKP_MASK                        equ 0010h
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
WPUB_WPUB_POSN                           equ 0004h
WPUB_WPUB_POSITION                       equ 0004h
WPUB_WPUB_SIZE                           equ 0004h
WPUB_WPUB_LENGTH                         equ 0004h
WPUB_WPUB_MASK                           equ 00F0h

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
WPUC_WPUC_POSN                           equ 0000h
WPUC_WPUC_POSITION                       equ 0000h
WPUC_WPUC_SIZE                           equ 0008h
WPUC_WPUC_LENGTH                         equ 0008h
WPUC_WPUC_MASK                           equ 00FFh

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
ODCONA_ODA_POSN                          equ 0000h
ODCONA_ODA_POSITION                      equ 0000h
ODCONA_ODA_SIZE                          equ 0006h
ODCONA_ODA_LENGTH                        equ 0006h
ODCONA_ODA_MASK                          equ 003Fh

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
ODCONB_ODB_POSN                          equ 0004h
ODCONB_ODB_POSITION                      equ 0004h
ODCONB_ODB_SIZE                          equ 0004h
ODCONB_ODB_LENGTH                        equ 0004h
ODCONB_ODB_MASK                          equ 00F0h

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
ODCONC_ODC_POSN                          equ 0000h
ODCONC_ODC_POSITION                      equ 0000h
ODCONC_ODC_SIZE                          equ 0008h
ODCONC_ODC_LENGTH                        equ 0008h
ODCONC_ODC_MASK                          equ 00FFh

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
SLRCONA_SLRA_POSN                        equ 0000h
SLRCONA_SLRA_POSITION                    equ 0000h
SLRCONA_SLRA_SIZE                        equ 0006h
SLRCONA_SLRA_LENGTH                      equ 0006h
SLRCONA_SLRA_MASK                        equ 003Fh

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
SLRCONB_SLRB_POSN                        equ 0004h
SLRCONB_SLRB_POSITION                    equ 0004h
SLRCONB_SLRB_SIZE                        equ 0004h
SLRCONB_SLRB_LENGTH                      equ 0004h
SLRCONB_SLRB_MASK                        equ 00F0h

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
SLRCONC_SLRC_POSN                        equ 0000h
SLRCONC_SLRC_POSITION                    equ 0000h
SLRCONC_SLRC_SIZE                        equ 0008h
SLRCONC_SLRC_LENGTH                      equ 0008h
SLRCONC_SLRC_MASK                        equ 00FFh

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
INLVLA_INLVLA_POSN                       equ 0000h
INLVLA_INLVLA_POSITION                   equ 0000h
INLVLA_INLVLA_SIZE                       equ 0006h
INLVLA_INLVLA_LENGTH                     equ 0006h
INLVLA_INLVLA_MASK                       equ 003Fh

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
INLVLB_INLVLB_POSN                       equ 0004h
INLVLB_INLVLB_POSITION                   equ 0004h
INLVLB_INLVLB_SIZE                       equ 0004h
INLVLB_INLVLB_LENGTH                     equ 0004h
INLVLB_INLVLB_MASK                       equ 00F0h

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
INLVLC_INLVLC_POSN                       equ 0000h
INLVLC_INLVLC_POSITION                   equ 0000h
INLVLC_INLVLC_SIZE                       equ 0008h
INLVLC_INLVLC_LENGTH                     equ 0008h
INLVLC_INLVLC_MASK                       equ 00FFh

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
IOCBP_IOCBP_POSN                         equ 0004h
IOCBP_IOCBP_POSITION                     equ 0004h
IOCBP_IOCBP_SIZE                         equ 0004h
IOCBP_IOCBP_LENGTH                       equ 0004h
IOCBP_IOCBP_MASK                         equ 00F0h

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
IOCBN_IOCBN_POSN                         equ 0004h
IOCBN_IOCBN_POSITION                     equ 0004h
IOCBN_IOCBN_SIZE                         equ 0004h
IOCBN_IOCBN_LENGTH                       equ 0004h
IOCBN_IOCBN_MASK                         equ 00F0h

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
IOCBF_IOCBF_POSN                         equ 0004h
IOCBF_IOCBF_POSITION                     equ 0004h
IOCBF_IOCBF_SIZE                         equ 0004h
IOCBF_IOCBF_LENGTH                       equ 0004h
IOCBF_IOCBF_MASK                         equ 00F0h

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
IOCCP_IOCCP_POSN                         equ 0000h
IOCCP_IOCCP_POSITION                     equ 0000h
IOCCP_IOCCP_SIZE                         equ 0008h
IOCCP_IOCCP_LENGTH                       equ 0008h
IOCCP_IOCCP_MASK                         equ 00FFh

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
IOCCN_IOCCN_POSN                         equ 0000h
IOCCN_IOCCN_POSITION                     equ 0000h
IOCCN_IOCCN_SIZE                         equ 0008h
IOCCN_IOCCN_LENGTH                       equ 0008h
IOCCN_IOCCN_MASK                         equ 00FFh

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
IOCCF_IOCCF_POSN                         equ 0000h
IOCCF_IOCCF_POSITION                     equ 0000h
IOCCF_IOCCF_SIZE                         equ 0008h
IOCCF_IOCCF_LENGTH                       equ 0008h
IOCCF_IOCCF_MASK                         equ 00FFh

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
CWG1DBR                                  equ 0691h
// bitfield definitions
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

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
CWG1CON0                                 equ 0693h
// bitfield definitions
CWG1CON0_G1CS0_POSN                      equ 0000h
CWG1CON0_G1CS0_POSITION                  equ 0000h
CWG1CON0_G1CS0_SIZE                      equ 0001h
CWG1CON0_G1CS0_LENGTH                    equ 0001h
CWG1CON0_G1CS0_MASK                      equ 0001h
CWG1CON0_G1POLA_POSN                     equ 0003h
CWG1CON0_G1POLA_POSITION                 equ 0003h
CWG1CON0_G1POLA_SIZE                     equ 0001h
CWG1CON0_G1POLA_LENGTH                   equ 0001h
CWG1CON0_G1POLA_MASK                     equ 0008h
CWG1CON0_G1POLB_POSN                     equ 0004h
CWG1CON0_G1POLB_POSITION                 equ 0004h
CWG1CON0_G1POLB_SIZE                     equ 0001h
CWG1CON0_G1POLB_LENGTH                   equ 0001h
CWG1CON0_G1POLB_MASK                     equ 0010h
CWG1CON0_G1OEA_POSN                      equ 0005h
CWG1CON0_G1OEA_POSITION                  equ 0005h
CWG1CON0_G1OEA_SIZE                      equ 0001h
CWG1CON0_G1OEA_LENGTH                    equ 0001h
CWG1CON0_G1OEA_MASK                      equ 0020h
CWG1CON0_G1OEB_POSN                      equ 0006h
CWG1CON0_G1OEB_POSITION                  equ 0006h
CWG1CON0_G1OEB_SIZE                      equ 0001h
CWG1CON0_G1OEB_LENGTH                    equ 0001h
CWG1CON0_G1OEB_MASK                      equ 0040h
CWG1CON0_G1EN_POSN                       equ 0007h
CWG1CON0_G1EN_POSITION                   equ 0007h
CWG1CON0_G1EN_SIZE                       equ 0001h
CWG1CON0_G1EN_LENGTH                     equ 0001h
CWG1CON0_G1EN_MASK                       equ 0080h
CWG1CON0_G1CS_POSN                       equ 0000h
CWG1CON0_G1CS_POSITION                   equ 0000h
CWG1CON0_G1CS_SIZE                       equ 0002h
CWG1CON0_G1CS_LENGTH                     equ 0002h
CWG1CON0_G1CS_MASK                       equ 0003h

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
CWG1CON1                                 equ 0694h
// bitfield definitions
CWG1CON1_G1IS0_POSN                      equ 0000h
CWG1CON1_G1IS0_POSITION                  equ 0000h
CWG1CON1_G1IS0_SIZE                      equ 0001h
CWG1CON1_G1IS0_LENGTH                    equ 0001h
CWG1CON1_G1IS0_MASK                      equ 0001h
CWG1CON1_G1IS1_POSN                      equ 0001h
CWG1CON1_G1IS1_POSITION                  equ 0001h
CWG1CON1_G1IS1_SIZE                      equ 0001h
CWG1CON1_G1IS1_LENGTH                    equ 0001h
CWG1CON1_G1IS1_MASK                      equ 0002h
CWG1CON1_G1IS2_POSN                      equ 0002h
CWG1CON1_G1IS2_POSITION                  equ 0002h
CWG1CON1_G1IS2_SIZE                      equ 0001h
CWG1CON1_G1IS2_LENGTH                    equ 0001h
CWG1CON1_G1IS2_MASK                      equ 0004h
CWG1CON1_G1ASDLA_POSN                    equ 0004h
CWG1CON1_G1ASDLA_POSITION                equ 0004h
CWG1CON1_G1ASDLA_SIZE                    equ 0002h
CWG1CON1_G1ASDLA_LENGTH                  equ 0002h
CWG1CON1_G1ASDLA_MASK                    equ 0030h
CWG1CON1_G1ASDLB_POSN                    equ 0006h
CWG1CON1_G1ASDLB_POSITION                equ 0006h
CWG1CON1_G1ASDLB_SIZE                    equ 0002h
CWG1CON1_G1ASDLB_LENGTH                  equ 0002h
CWG1CON1_G1ASDLB_MASK                    equ 00C0h
CWG1CON1_G1IS_POSN                       equ 0000h
CWG1CON1_G1IS_POSITION                   equ 0000h
CWG1CON1_G1IS_SIZE                       equ 0004h
CWG1CON1_G1IS_LENGTH                     equ 0004h
CWG1CON1_G1IS_MASK                       equ 000Fh
CWG1CON1_G1ASDLA0_POSN                   equ 0004h
CWG1CON1_G1ASDLA0_POSITION               equ 0004h
CWG1CON1_G1ASDLA0_SIZE                   equ 0001h
CWG1CON1_G1ASDLA0_LENGTH                 equ 0001h
CWG1CON1_G1ASDLA0_MASK                   equ 0010h
CWG1CON1_G1ASDLA1_POSN                   equ 0005h
CWG1CON1_G1ASDLA1_POSITION               equ 0005h
CWG1CON1_G1ASDLA1_SIZE                   equ 0001h
CWG1CON1_G1ASDLA1_LENGTH                 equ 0001h
CWG1CON1_G1ASDLA1_MASK                   equ 0020h
CWG1CON1_G1ASDLB0_POSN                   equ 0006h
CWG1CON1_G1ASDLB0_POSITION               equ 0006h
CWG1CON1_G1ASDLB0_SIZE                   equ 0001h
CWG1CON1_G1ASDLB0_LENGTH                 equ 0001h
CWG1CON1_G1ASDLB0_MASK                   equ 0040h
CWG1CON1_G1ASDLB1_POSN                   equ 0007h
CWG1CON1_G1ASDLB1_POSITION               equ 0007h
CWG1CON1_G1ASDLB1_SIZE                   equ 0001h
CWG1CON1_G1ASDLB1_LENGTH                 equ 0001h
CWG1CON1_G1ASDLB1_MASK                   equ 0080h

// Register: CWG1CON2
#define CWG1CON2 CWG1CON2
CWG1CON2                                 equ 0695h
// bitfield definitions
CWG1CON2_G1ASDSPPS_POSN                  equ 0001h
CWG1CON2_G1ASDSPPS_POSITION              equ 0001h
CWG1CON2_G1ASDSPPS_SIZE                  equ 0001h
CWG1CON2_G1ASDSPPS_LENGTH                equ 0001h
CWG1CON2_G1ASDSPPS_MASK                  equ 0002h
CWG1CON2_G1ASDSC1_POSN                   equ 0002h
CWG1CON2_G1ASDSC1_POSITION               equ 0002h
CWG1CON2_G1ASDSC1_SIZE                   equ 0001h
CWG1CON2_G1ASDSC1_LENGTH                 equ 0001h
CWG1CON2_G1ASDSC1_MASK                   equ 0004h
CWG1CON2_G1ASDSC2_POSN                   equ 0003h
CWG1CON2_G1ASDSC2_POSITION               equ 0003h
CWG1CON2_G1ASDSC2_SIZE                   equ 0001h
CWG1CON2_G1ASDSC2_LENGTH                 equ 0001h
CWG1CON2_G1ASDSC2_MASK                   equ 0008h
CWG1CON2_G1ARSEN_POSN                    equ 0006h
CWG1CON2_G1ARSEN_POSITION                equ 0006h
CWG1CON2_G1ARSEN_SIZE                    equ 0001h
CWG1CON2_G1ARSEN_LENGTH                  equ 0001h
CWG1CON2_G1ARSEN_MASK                    equ 0040h
CWG1CON2_G1ASE_POSN                      equ 0007h
CWG1CON2_G1ASE_POSITION                  equ 0007h
CWG1CON2_G1ASE_SIZE                      equ 0001h
CWG1CON2_G1ASE_LENGTH                    equ 0001h
CWG1CON2_G1ASE_MASK                      equ 0080h

// Register: PWMEN
#define PWMEN PWMEN
PWMEN                                    equ 0D8Eh
// bitfield definitions
PWMEN_PWM1EN_A_POSN                      equ 0000h
PWMEN_PWM1EN_A_POSITION                  equ 0000h
PWMEN_PWM1EN_A_SIZE                      equ 0001h
PWMEN_PWM1EN_A_LENGTH                    equ 0001h
PWMEN_PWM1EN_A_MASK                      equ 0001h
PWMEN_PWM2EN_A_POSN                      equ 0001h
PWMEN_PWM2EN_A_POSITION                  equ 0001h
PWMEN_PWM2EN_A_SIZE                      equ 0001h
PWMEN_PWM2EN_A_LENGTH                    equ 0001h
PWMEN_PWM2EN_A_MASK                      equ 0002h
PWMEN_PWM3EN_A_POSN                      equ 0002h
PWMEN_PWM3EN_A_POSITION                  equ 0002h
PWMEN_PWM3EN_A_SIZE                      equ 0001h
PWMEN_PWM3EN_A_LENGTH                    equ 0001h
PWMEN_PWM3EN_A_MASK                      equ 0004h
PWMEN_PWM4EN_A_POSN                      equ 0003h
PWMEN_PWM4EN_A_POSITION                  equ 0003h
PWMEN_PWM4EN_A_SIZE                      equ 0001h
PWMEN_PWM4EN_A_LENGTH                    equ 0001h
PWMEN_PWM4EN_A_MASK                      equ 0008h
PWMEN_MPWM1EN_POSN                       equ 0000h
PWMEN_MPWM1EN_POSITION                   equ 0000h
PWMEN_MPWM1EN_SIZE                       equ 0001h
PWMEN_MPWM1EN_LENGTH                     equ 0001h
PWMEN_MPWM1EN_MASK                       equ 0001h
PWMEN_MPWM2EN_POSN                       equ 0001h
PWMEN_MPWM2EN_POSITION                   equ 0001h
PWMEN_MPWM2EN_SIZE                       equ 0001h
PWMEN_MPWM2EN_LENGTH                     equ 0001h
PWMEN_MPWM2EN_MASK                       equ 0002h
PWMEN_MPWM3EN_POSN                       equ 0002h
PWMEN_MPWM3EN_POSITION                   equ 0002h
PWMEN_MPWM3EN_SIZE                       equ 0001h
PWMEN_MPWM3EN_LENGTH                     equ 0001h
PWMEN_MPWM3EN_MASK                       equ 0004h

// Register: PWMLD
#define PWMLD PWMLD
PWMLD                                    equ 0D8Fh
// bitfield definitions
PWMLD_PWM1LDA_A_POSN                     equ 0000h
PWMLD_PWM1LDA_A_POSITION                 equ 0000h
PWMLD_PWM1LDA_A_SIZE                     equ 0001h
PWMLD_PWM1LDA_A_LENGTH                   equ 0001h
PWMLD_PWM1LDA_A_MASK                     equ 0001h
PWMLD_PWM2LDA_A_POSN                     equ 0001h
PWMLD_PWM2LDA_A_POSITION                 equ 0001h
PWMLD_PWM2LDA_A_SIZE                     equ 0001h
PWMLD_PWM2LDA_A_LENGTH                   equ 0001h
PWMLD_PWM2LDA_A_MASK                     equ 0002h
PWMLD_PWM3LDA_A_POSN                     equ 0002h
PWMLD_PWM3LDA_A_POSITION                 equ 0002h
PWMLD_PWM3LDA_A_SIZE                     equ 0001h
PWMLD_PWM3LDA_A_LENGTH                   equ 0001h
PWMLD_PWM3LDA_A_MASK                     equ 0004h
PWMLD_PWM4LDA_A_POSN                     equ 0003h
PWMLD_PWM4LDA_A_POSITION                 equ 0003h
PWMLD_PWM4LDA_A_SIZE                     equ 0001h
PWMLD_PWM4LDA_A_LENGTH                   equ 0001h
PWMLD_PWM4LDA_A_MASK                     equ 0008h
PWMLD_MPWM1LD_POSN                       equ 0000h
PWMLD_MPWM1LD_POSITION                   equ 0000h
PWMLD_MPWM1LD_SIZE                       equ 0001h
PWMLD_MPWM1LD_LENGTH                     equ 0001h
PWMLD_MPWM1LD_MASK                       equ 0001h
PWMLD_MPWM2LD_POSN                       equ 0001h
PWMLD_MPWM2LD_POSITION                   equ 0001h
PWMLD_MPWM2LD_SIZE                       equ 0001h
PWMLD_MPWM2LD_LENGTH                     equ 0001h
PWMLD_MPWM2LD_MASK                       equ 0002h
PWMLD_MPWM3LD_POSN                       equ 0002h
PWMLD_MPWM3LD_POSITION                   equ 0002h
PWMLD_MPWM3LD_SIZE                       equ 0001h
PWMLD_MPWM3LD_LENGTH                     equ 0001h
PWMLD_MPWM3LD_MASK                       equ 0004h

// Register: PWMOUT
#define PWMOUT PWMOUT
PWMOUT                                   equ 0D90h
// bitfield definitions
PWMOUT_PWM1OUT_A_POSN                    equ 0000h
PWMOUT_PWM1OUT_A_POSITION                equ 0000h
PWMOUT_PWM1OUT_A_SIZE                    equ 0001h
PWMOUT_PWM1OUT_A_LENGTH                  equ 0001h
PWMOUT_PWM1OUT_A_MASK                    equ 0001h
PWMOUT_PWM2OUT_A_POSN                    equ 0001h
PWMOUT_PWM2OUT_A_POSITION                equ 0001h
PWMOUT_PWM2OUT_A_SIZE                    equ 0001h
PWMOUT_PWM2OUT_A_LENGTH                  equ 0001h
PWMOUT_PWM2OUT_A_MASK                    equ 0002h
PWMOUT_PWM3OUT_A_POSN                    equ 0002h
PWMOUT_PWM3OUT_A_POSITION                equ 0002h
PWMOUT_PWM3OUT_A_SIZE                    equ 0001h
PWMOUT_PWM3OUT_A_LENGTH                  equ 0001h
PWMOUT_PWM3OUT_A_MASK                    equ 0004h
PWMOUT_PWM4OUT_A_POSN                    equ 0003h
PWMOUT_PWM4OUT_A_POSITION                equ 0003h
PWMOUT_PWM4OUT_A_SIZE                    equ 0001h
PWMOUT_PWM4OUT_A_LENGTH                  equ 0001h
PWMOUT_PWM4OUT_A_MASK                    equ 0008h
PWMOUT_MPWM1OUT_POSN                     equ 0000h
PWMOUT_MPWM1OUT_POSITION                 equ 0000h
PWMOUT_MPWM1OUT_SIZE                     equ 0001h
PWMOUT_MPWM1OUT_LENGTH                   equ 0001h
PWMOUT_MPWM1OUT_MASK                     equ 0001h
PWMOUT_MPWM2OUT_POSN                     equ 0001h
PWMOUT_MPWM2OUT_POSITION                 equ 0001h
PWMOUT_MPWM2OUT_SIZE                     equ 0001h
PWMOUT_MPWM2OUT_LENGTH                   equ 0001h
PWMOUT_MPWM2OUT_MASK                     equ 0002h
PWMOUT_MPWM3OUT_POSN                     equ 0002h
PWMOUT_MPWM3OUT_POSITION                 equ 0002h
PWMOUT_MPWM3OUT_SIZE                     equ 0001h
PWMOUT_MPWM3OUT_LENGTH                   equ 0001h
PWMOUT_MPWM3OUT_MASK                     equ 0004h

// Register: PWM1PHL
#define PWM1PHL PWM1PHL
PWM1PHL                                  equ 0D91h
// bitfield definitions
PWM1PHL_PH_POSN                          equ 0000h
PWM1PHL_PH_POSITION                      equ 0000h
PWM1PHL_PH_SIZE                          equ 0008h
PWM1PHL_PH_LENGTH                        equ 0008h
PWM1PHL_PH_MASK                          equ 00FFh
PWM1PHL_PWM1PHL0_POSN                    equ 0000h
PWM1PHL_PWM1PHL0_POSITION                equ 0000h
PWM1PHL_PWM1PHL0_SIZE                    equ 0001h
PWM1PHL_PWM1PHL0_LENGTH                  equ 0001h
PWM1PHL_PWM1PHL0_MASK                    equ 0001h
PWM1PHL_PWM1PHL1_POSN                    equ 0001h
PWM1PHL_PWM1PHL1_POSITION                equ 0001h
PWM1PHL_PWM1PHL1_SIZE                    equ 0001h
PWM1PHL_PWM1PHL1_LENGTH                  equ 0001h
PWM1PHL_PWM1PHL1_MASK                    equ 0002h
PWM1PHL_PWM1PHL2_POSN                    equ 0002h
PWM1PHL_PWM1PHL2_POSITION                equ 0002h
PWM1PHL_PWM1PHL2_SIZE                    equ 0001h
PWM1PHL_PWM1PHL2_LENGTH                  equ 0001h
PWM1PHL_PWM1PHL2_MASK                    equ 0004h
PWM1PHL_PWM1PHL3_POSN                    equ 0003h
PWM1PHL_PWM1PHL3_POSITION                equ 0003h
PWM1PHL_PWM1PHL3_SIZE                    equ 0001h
PWM1PHL_PWM1PHL3_LENGTH                  equ 0001h
PWM1PHL_PWM1PHL3_MASK                    equ 0008h
PWM1PHL_PWM1PHL4_POSN                    equ 0004h
PWM1PHL_PWM1PHL4_POSITION                equ 0004h
PWM1PHL_PWM1PHL4_SIZE                    equ 0001h
PWM1PHL_PWM1PHL4_LENGTH                  equ 0001h
PWM1PHL_PWM1PHL4_MASK                    equ 0010h
PWM1PHL_PWM1PHL5_POSN                    equ 0005h
PWM1PHL_PWM1PHL5_POSITION                equ 0005h
PWM1PHL_PWM1PHL5_SIZE                    equ 0001h
PWM1PHL_PWM1PHL5_LENGTH                  equ 0001h
PWM1PHL_PWM1PHL5_MASK                    equ 0020h
PWM1PHL_PWM1PHL6_POSN                    equ 0006h
PWM1PHL_PWM1PHL6_POSITION                equ 0006h
PWM1PHL_PWM1PHL6_SIZE                    equ 0001h
PWM1PHL_PWM1PHL6_LENGTH                  equ 0001h
PWM1PHL_PWM1PHL6_MASK                    equ 0040h
PWM1PHL_PWM1PHL7_POSN                    equ 0007h
PWM1PHL_PWM1PHL7_POSITION                equ 0007h
PWM1PHL_PWM1PHL7_SIZE                    equ 0001h
PWM1PHL_PWM1PHL7_LENGTH                  equ 0001h
PWM1PHL_PWM1PHL7_MASK                    equ 0080h
PWM1PHL_PWM1PHL_POSN                     equ 0000h
PWM1PHL_PWM1PHL_POSITION                 equ 0000h
PWM1PHL_PWM1PHL_SIZE                     equ 0008h
PWM1PHL_PWM1PHL_LENGTH                   equ 0008h
PWM1PHL_PWM1PHL_MASK                     equ 00FFh

// Register: PWM1PHH
#define PWM1PHH PWM1PHH
PWM1PHH                                  equ 0D92h
// bitfield definitions
PWM1PHH_PH_POSN                          equ 0000h
PWM1PHH_PH_POSITION                      equ 0000h
PWM1PHH_PH_SIZE                          equ 0008h
PWM1PHH_PH_LENGTH                        equ 0008h
PWM1PHH_PH_MASK                          equ 00FFh
PWM1PHH_PWM1PHH0_POSN                    equ 0000h
PWM1PHH_PWM1PHH0_POSITION                equ 0000h
PWM1PHH_PWM1PHH0_SIZE                    equ 0001h
PWM1PHH_PWM1PHH0_LENGTH                  equ 0001h
PWM1PHH_PWM1PHH0_MASK                    equ 0001h
PWM1PHH_PWM1PHH1_POSN                    equ 0001h
PWM1PHH_PWM1PHH1_POSITION                equ 0001h
PWM1PHH_PWM1PHH1_SIZE                    equ 0001h
PWM1PHH_PWM1PHH1_LENGTH                  equ 0001h
PWM1PHH_PWM1PHH1_MASK                    equ 0002h
PWM1PHH_PWM1PHH2_POSN                    equ 0002h
PWM1PHH_PWM1PHH2_POSITION                equ 0002h
PWM1PHH_PWM1PHH2_SIZE                    equ 0001h
PWM1PHH_PWM1PHH2_LENGTH                  equ 0001h
PWM1PHH_PWM1PHH2_MASK                    equ 0004h
PWM1PHH_PWM1PHH3_POSN                    equ 0003h
PWM1PHH_PWM1PHH3_POSITION                equ 0003h
PWM1PHH_PWM1PHH3_SIZE                    equ 0001h
PWM1PHH_PWM1PHH3_LENGTH                  equ 0001h
PWM1PHH_PWM1PHH3_MASK                    equ 0008h
PWM1PHH_PWM1PHH4_POSN                    equ 0004h
PWM1PHH_PWM1PHH4_POSITION                equ 0004h
PWM1PHH_PWM1PHH4_SIZE                    equ 0001h
PWM1PHH_PWM1PHH4_LENGTH                  equ 0001h
PWM1PHH_PWM1PHH4_MASK                    equ 0010h
PWM1PHH_PWM1PHH5_POSN                    equ 0005h
PWM1PHH_PWM1PHH5_POSITION                equ 0005h
PWM1PHH_PWM1PHH5_SIZE                    equ 0001h
PWM1PHH_PWM1PHH5_LENGTH                  equ 0001h
PWM1PHH_PWM1PHH5_MASK                    equ 0020h
PWM1PHH_PWM1PHH6_POSN                    equ 0006h
PWM1PHH_PWM1PHH6_POSITION                equ 0006h
PWM1PHH_PWM1PHH6_SIZE                    equ 0001h
PWM1PHH_PWM1PHH6_LENGTH                  equ 0001h
PWM1PHH_PWM1PHH6_MASK                    equ 0040h
PWM1PHH_PWM1PHH7_POSN                    equ 0007h
PWM1PHH_PWM1PHH7_POSITION                equ 0007h
PWM1PHH_PWM1PHH7_SIZE                    equ 0001h
PWM1PHH_PWM1PHH7_LENGTH                  equ 0001h
PWM1PHH_PWM1PHH7_MASK                    equ 0080h
PWM1PHH_PWM1PHH_POSN                     equ 0000h
PWM1PHH_PWM1PHH_POSITION                 equ 0000h
PWM1PHH_PWM1PHH_SIZE                     equ 0008h
PWM1PHH_PWM1PHH_LENGTH                   equ 0008h
PWM1PHH_PWM1PHH_MASK                     equ 00FFh

// Register: PWM1DCL
#define PWM1DCL PWM1DCL
PWM1DCL                                  equ 0D93h
// bitfield definitions
PWM1DCL_DC_POSN                          equ 0000h
PWM1DCL_DC_POSITION                      equ 0000h
PWM1DCL_DC_SIZE                          equ 0008h
PWM1DCL_DC_LENGTH                        equ 0008h
PWM1DCL_DC_MASK                          equ 00FFh
PWM1DCL_PWM1DCL0_POSN                    equ 0000h
PWM1DCL_PWM1DCL0_POSITION                equ 0000h
PWM1DCL_PWM1DCL0_SIZE                    equ 0001h
PWM1DCL_PWM1DCL0_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL0_MASK                    equ 0001h
PWM1DCL_PWM1DCL1_POSN                    equ 0001h
PWM1DCL_PWM1DCL1_POSITION                equ 0001h
PWM1DCL_PWM1DCL1_SIZE                    equ 0001h
PWM1DCL_PWM1DCL1_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL1_MASK                    equ 0002h
PWM1DCL_PWM1DCL2_POSN                    equ 0002h
PWM1DCL_PWM1DCL2_POSITION                equ 0002h
PWM1DCL_PWM1DCL2_SIZE                    equ 0001h
PWM1DCL_PWM1DCL2_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL2_MASK                    equ 0004h
PWM1DCL_PWM1DCL3_POSN                    equ 0003h
PWM1DCL_PWM1DCL3_POSITION                equ 0003h
PWM1DCL_PWM1DCL3_SIZE                    equ 0001h
PWM1DCL_PWM1DCL3_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL3_MASK                    equ 0008h
PWM1DCL_PWM1DCL4_POSN                    equ 0004h
PWM1DCL_PWM1DCL4_POSITION                equ 0004h
PWM1DCL_PWM1DCL4_SIZE                    equ 0001h
PWM1DCL_PWM1DCL4_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL4_MASK                    equ 0010h
PWM1DCL_PWM1DCL5_POSN                    equ 0005h
PWM1DCL_PWM1DCL5_POSITION                equ 0005h
PWM1DCL_PWM1DCL5_SIZE                    equ 0001h
PWM1DCL_PWM1DCL5_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL5_MASK                    equ 0020h
PWM1DCL_PWM1DCL6_POSN                    equ 0006h
PWM1DCL_PWM1DCL6_POSITION                equ 0006h
PWM1DCL_PWM1DCL6_SIZE                    equ 0001h
PWM1DCL_PWM1DCL6_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL6_MASK                    equ 0040h
PWM1DCL_PWM1DCL7_POSN                    equ 0007h
PWM1DCL_PWM1DCL7_POSITION                equ 0007h
PWM1DCL_PWM1DCL7_SIZE                    equ 0001h
PWM1DCL_PWM1DCL7_LENGTH                  equ 0001h
PWM1DCL_PWM1DCL7_MASK                    equ 0080h
PWM1DCL_PWM1DCL_POSN                     equ 0000h
PWM1DCL_PWM1DCL_POSITION                 equ 0000h
PWM1DCL_PWM1DCL_SIZE                     equ 0008h
PWM1DCL_PWM1DCL_LENGTH                   equ 0008h
PWM1DCL_PWM1DCL_MASK                     equ 00FFh

// Register: PWM1DCH
#define PWM1DCH PWM1DCH
PWM1DCH                                  equ 0D94h
// bitfield definitions
PWM1DCH_DC_POSN                          equ 0000h
PWM1DCH_DC_POSITION                      equ 0000h
PWM1DCH_DC_SIZE                          equ 0008h
PWM1DCH_DC_LENGTH                        equ 0008h
PWM1DCH_DC_MASK                          equ 00FFh
PWM1DCH_PWM1DCH0_POSN                    equ 0000h
PWM1DCH_PWM1DCH0_POSITION                equ 0000h
PWM1DCH_PWM1DCH0_SIZE                    equ 0001h
PWM1DCH_PWM1DCH0_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH0_MASK                    equ 0001h
PWM1DCH_PWM1DCH1_POSN                    equ 0001h
PWM1DCH_PWM1DCH1_POSITION                equ 0001h
PWM1DCH_PWM1DCH1_SIZE                    equ 0001h
PWM1DCH_PWM1DCH1_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH1_MASK                    equ 0002h
PWM1DCH_PWM1DCH2_POSN                    equ 0002h
PWM1DCH_PWM1DCH2_POSITION                equ 0002h
PWM1DCH_PWM1DCH2_SIZE                    equ 0001h
PWM1DCH_PWM1DCH2_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH2_MASK                    equ 0004h
PWM1DCH_PWM1DCH3_POSN                    equ 0003h
PWM1DCH_PWM1DCH3_POSITION                equ 0003h
PWM1DCH_PWM1DCH3_SIZE                    equ 0001h
PWM1DCH_PWM1DCH3_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH3_MASK                    equ 0008h
PWM1DCH_PWM1DCH4_POSN                    equ 0004h
PWM1DCH_PWM1DCH4_POSITION                equ 0004h
PWM1DCH_PWM1DCH4_SIZE                    equ 0001h
PWM1DCH_PWM1DCH4_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH4_MASK                    equ 0010h
PWM1DCH_PWM1DCH5_POSN                    equ 0005h
PWM1DCH_PWM1DCH5_POSITION                equ 0005h
PWM1DCH_PWM1DCH5_SIZE                    equ 0001h
PWM1DCH_PWM1DCH5_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH5_MASK                    equ 0020h
PWM1DCH_PWM1DCH6_POSN                    equ 0006h
PWM1DCH_PWM1DCH6_POSITION                equ 0006h
PWM1DCH_PWM1DCH6_SIZE                    equ 0001h
PWM1DCH_PWM1DCH6_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH6_MASK                    equ 0040h
PWM1DCH_PWM1DCH7_POSN                    equ 0007h
PWM1DCH_PWM1DCH7_POSITION                equ 0007h
PWM1DCH_PWM1DCH7_SIZE                    equ 0001h
PWM1DCH_PWM1DCH7_LENGTH                  equ 0001h
PWM1DCH_PWM1DCH7_MASK                    equ 0080h
PWM1DCH_PWM1DCH_POSN                     equ 0000h
PWM1DCH_PWM1DCH_POSITION                 equ 0000h
PWM1DCH_PWM1DCH_SIZE                     equ 0008h
PWM1DCH_PWM1DCH_LENGTH                   equ 0008h
PWM1DCH_PWM1DCH_MASK                     equ 00FFh

// Register: PWM1PRL
#define PWM1PRL PWM1PRL
PWM1PRL                                  equ 0D95h
// bitfield definitions
PWM1PRL_PR_POSN                          equ 0000h
PWM1PRL_PR_POSITION                      equ 0000h
PWM1PRL_PR_SIZE                          equ 0008h
PWM1PRL_PR_LENGTH                        equ 0008h
PWM1PRL_PR_MASK                          equ 00FFh
PWM1PRL_PWM1PRL0_POSN                    equ 0000h
PWM1PRL_PWM1PRL0_POSITION                equ 0000h
PWM1PRL_PWM1PRL0_SIZE                    equ 0001h
PWM1PRL_PWM1PRL0_LENGTH                  equ 0001h
PWM1PRL_PWM1PRL0_MASK                    equ 0001h
PWM1PRL_PWM1PRL1_POSN                    equ 0001h
PWM1PRL_PWM1PRL1_POSITION                equ 0001h
PWM1PRL_PWM1PRL1_SIZE                    equ 0001h
PWM1PRL_PWM1PRL1_LENGTH                  equ 0001h
PWM1PRL_PWM1PRL1_MASK                    equ 0002h
PWM1PRL_PWM1PRL2_POSN                    equ 0002h
PWM1PRL_PWM1PRL2_POSITION                equ 0002h
PWM1PRL_PWM1PRL2_SIZE                    equ 0001h
PWM1PRL_PWM1PRL2_LENGTH                  equ 0001h
PWM1PRL_PWM1PRL2_MASK                    equ 0004h
PWM1PRL_PWM1PRL3_POSN                    equ 0003h
PWM1PRL_PWM1PRL3_POSITION                equ 0003h
PWM1PRL_PWM1PRL3_SIZE                    equ 0001h
PWM1PRL_PWM1PRL3_LENGTH                  equ 0001h
PWM1PRL_PWM1PRL3_MASK                    equ 0008h
PWM1PRL_PWM1PRL4_POSN                    equ 0004h
PWM1PRL_PWM1PRL4_POSITION                equ 0004h
PWM1PRL_PWM1PRL4_SIZE                    equ 0001h
PWM1PRL_PWM1PRL4_LENGTH                  equ 0001h
PWM1PRL_PWM1PRL4_MASK                    equ 0010h
PWM1PRL_PWM1PRL5_POSN                    equ 0005h
PWM1PRL_PWM1PRL5_POSITION                equ 0005h
PWM1PRL_PWM1PRL5_SIZE                    equ 0001h
PWM1PRL_PWM1PRL5_LENGTH                  equ 0001h
PWM1PRL_PWM1PRL5_MASK                    equ 0020h
PWM1PRL_PWM1PRL6_POSN                    equ 0006h
PWM1PRL_PWM1PRL6_POSITION                equ 0006h
PWM1PRL_PWM1PRL6_SIZE                    equ 0001h
PWM1PRL_PWM1PRL6_LENGTH                  equ 0001h
PWM1PRL_PWM1PRL6_MASK                    equ 0040h
PWM1PRL_PWM1PRL7_POSN                    equ 0007h
PWM1PRL_PWM1PRL7_POSITION                equ 0007h
PWM1PRL_PWM1PRL7_SIZE                    equ 0001h
PWM1PRL_PWM1PRL7_LENGTH                  equ 0001h
PWM1PRL_PWM1PRL7_MASK                    equ 0080h
PWM1PRL_PWM1PRL_POSN                     equ 0000h
PWM1PRL_PWM1PRL_POSITION                 equ 0000h
PWM1PRL_PWM1PRL_SIZE                     equ 0008h
PWM1PRL_PWM1PRL_LENGTH                   equ 0008h
PWM1PRL_PWM1PRL_MASK                     equ 00FFh

// Register: PWM1PRH
#define PWM1PRH PWM1PRH
PWM1PRH                                  equ 0D96h
// bitfield definitions
PWM1PRH_PR_POSN                          equ 0000h
PWM1PRH_PR_POSITION                      equ 0000h
PWM1PRH_PR_SIZE                          equ 0008h
PWM1PRH_PR_LENGTH                        equ 0008h
PWM1PRH_PR_MASK                          equ 00FFh
PWM1PRH_PWM1PRH0_POSN                    equ 0000h
PWM1PRH_PWM1PRH0_POSITION                equ 0000h
PWM1PRH_PWM1PRH0_SIZE                    equ 0001h
PWM1PRH_PWM1PRH0_LENGTH                  equ 0001h
PWM1PRH_PWM1PRH0_MASK                    equ 0001h
PWM1PRH_PWM1PRH1_POSN                    equ 0001h
PWM1PRH_PWM1PRH1_POSITION                equ 0001h
PWM1PRH_PWM1PRH1_SIZE                    equ 0001h
PWM1PRH_PWM1PRH1_LENGTH                  equ 0001h
PWM1PRH_PWM1PRH1_MASK                    equ 0002h
PWM1PRH_PWM1PRH2_POSN                    equ 0002h
PWM1PRH_PWM1PRH2_POSITION                equ 0002h
PWM1PRH_PWM1PRH2_SIZE                    equ 0001h
PWM1PRH_PWM1PRH2_LENGTH                  equ 0001h
PWM1PRH_PWM1PRH2_MASK                    equ 0004h
PWM1PRH_PWM1PRH3_POSN                    equ 0003h
PWM1PRH_PWM1PRH3_POSITION                equ 0003h
PWM1PRH_PWM1PRH3_SIZE                    equ 0001h
PWM1PRH_PWM1PRH3_LENGTH                  equ 0001h
PWM1PRH_PWM1PRH3_MASK                    equ 0008h
PWM1PRH_PWM1PRH4_POSN                    equ 0004h
PWM1PRH_PWM1PRH4_POSITION                equ 0004h
PWM1PRH_PWM1PRH4_SIZE                    equ 0001h
PWM1PRH_PWM1PRH4_LENGTH                  equ 0001h
PWM1PRH_PWM1PRH4_MASK                    equ 0010h
PWM1PRH_PWM1PRH5_POSN                    equ 0005h
PWM1PRH_PWM1PRH5_POSITION                equ 0005h
PWM1PRH_PWM1PRH5_SIZE                    equ 0001h
PWM1PRH_PWM1PRH5_LENGTH                  equ 0001h
PWM1PRH_PWM1PRH5_MASK                    equ 0020h
PWM1PRH_PWM1PRH6_POSN                    equ 0006h
PWM1PRH_PWM1PRH6_POSITION                equ 0006h
PWM1PRH_PWM1PRH6_SIZE                    equ 0001h
PWM1PRH_PWM1PRH6_LENGTH                  equ 0001h
PWM1PRH_PWM1PRH6_MASK                    equ 0040h
PWM1PRH_PWM1PRH7_POSN                    equ 0007h
PWM1PRH_PWM1PRH7_POSITION                equ 0007h
PWM1PRH_PWM1PRH7_SIZE                    equ 0001h
PWM1PRH_PWM1PRH7_LENGTH                  equ 0001h
PWM1PRH_PWM1PRH7_MASK                    equ 0080h
PWM1PRH_PWM1PRH_POSN                     equ 0000h
PWM1PRH_PWM1PRH_POSITION                 equ 0000h
PWM1PRH_PWM1PRH_SIZE                     equ 0008h
PWM1PRH_PWM1PRH_LENGTH                   equ 0008h
PWM1PRH_PWM1PRH_MASK                     equ 00FFh

// Register: PWM1OFL
#define PWM1OFL PWM1OFL
PWM1OFL                                  equ 0D97h
// bitfield definitions
PWM1OFL_OF_POSN                          equ 0000h
PWM1OFL_OF_POSITION                      equ 0000h
PWM1OFL_OF_SIZE                          equ 0008h
PWM1OFL_OF_LENGTH                        equ 0008h
PWM1OFL_OF_MASK                          equ 00FFh
PWM1OFL_PWM1OFL0_POSN                    equ 0000h
PWM1OFL_PWM1OFL0_POSITION                equ 0000h
PWM1OFL_PWM1OFL0_SIZE                    equ 0001h
PWM1OFL_PWM1OFL0_LENGTH                  equ 0001h
PWM1OFL_PWM1OFL0_MASK                    equ 0001h
PWM1OFL_PWM1OFL1_POSN                    equ 0001h
PWM1OFL_PWM1OFL1_POSITION                equ 0001h
PWM1OFL_PWM1OFL1_SIZE                    equ 0001h
PWM1OFL_PWM1OFL1_LENGTH                  equ 0001h
PWM1OFL_PWM1OFL1_MASK                    equ 0002h
PWM1OFL_PWM1OFL2_POSN                    equ 0002h
PWM1OFL_PWM1OFL2_POSITION                equ 0002h
PWM1OFL_PWM1OFL2_SIZE                    equ 0001h
PWM1OFL_PWM1OFL2_LENGTH                  equ 0001h
PWM1OFL_PWM1OFL2_MASK                    equ 0004h
PWM1OFL_PWM1OFL3_POSN                    equ 0003h
PWM1OFL_PWM1OFL3_POSITION                equ 0003h
PWM1OFL_PWM1OFL3_SIZE                    equ 0001h
PWM1OFL_PWM1OFL3_LENGTH                  equ 0001h
PWM1OFL_PWM1OFL3_MASK                    equ 0008h
PWM1OFL_PWM1OFL4_POSN                    equ 0004h
PWM1OFL_PWM1OFL4_POSITION                equ 0004h
PWM1OFL_PWM1OFL4_SIZE                    equ 0001h
PWM1OFL_PWM1OFL4_LENGTH                  equ 0001h
PWM1OFL_PWM1OFL4_MASK                    equ 0010h
PWM1OFL_PWM1OFL5_POSN                    equ 0005h
PWM1OFL_PWM1OFL5_POSITION                equ 0005h
PWM1OFL_PWM1OFL5_SIZE                    equ 0001h
PWM1OFL_PWM1OFL5_LENGTH                  equ 0001h
PWM1OFL_PWM1OFL5_MASK                    equ 0020h
PWM1OFL_PWM1OFL6_POSN                    equ 0006h
PWM1OFL_PWM1OFL6_POSITION                equ 0006h
PWM1OFL_PWM1OFL6_SIZE                    equ 0001h
PWM1OFL_PWM1OFL6_LENGTH                  equ 0001h
PWM1OFL_PWM1OFL6_MASK                    equ 0040h
PWM1OFL_PWM1OFL7_POSN                    equ 0007h
PWM1OFL_PWM1OFL7_POSITION                equ 0007h
PWM1OFL_PWM1OFL7_SIZE                    equ 0001h
PWM1OFL_PWM1OFL7_LENGTH                  equ 0001h
PWM1OFL_PWM1OFL7_MASK                    equ 0080h
PWM1OFL_PWM1OFL_POSN                     equ 0000h
PWM1OFL_PWM1OFL_POSITION                 equ 0000h
PWM1OFL_PWM1OFL_SIZE                     equ 0008h
PWM1OFL_PWM1OFL_LENGTH                   equ 0008h
PWM1OFL_PWM1OFL_MASK                     equ 00FFh

// Register: PWM1OFH
#define PWM1OFH PWM1OFH
PWM1OFH                                  equ 0D98h
// bitfield definitions
PWM1OFH_OF_POSN                          equ 0000h
PWM1OFH_OF_POSITION                      equ 0000h
PWM1OFH_OF_SIZE                          equ 0008h
PWM1OFH_OF_LENGTH                        equ 0008h
PWM1OFH_OF_MASK                          equ 00FFh
PWM1OFH_PWM1OFH0_POSN                    equ 0000h
PWM1OFH_PWM1OFH0_POSITION                equ 0000h
PWM1OFH_PWM1OFH0_SIZE                    equ 0001h
PWM1OFH_PWM1OFH0_LENGTH                  equ 0001h
PWM1OFH_PWM1OFH0_MASK                    equ 0001h
PWM1OFH_PWM1OFH1_POSN                    equ 0001h
PWM1OFH_PWM1OFH1_POSITION                equ 0001h
PWM1OFH_PWM1OFH1_SIZE                    equ 0001h
PWM1OFH_PWM1OFH1_LENGTH                  equ 0001h
PWM1OFH_PWM1OFH1_MASK                    equ 0002h
PWM1OFH_PWM1OFH2_POSN                    equ 0002h
PWM1OFH_PWM1OFH2_POSITION                equ 0002h
PWM1OFH_PWM1OFH2_SIZE                    equ 0001h
PWM1OFH_PWM1OFH2_LENGTH                  equ 0001h
PWM1OFH_PWM1OFH2_MASK                    equ 0004h
PWM1OFH_PWM1OFH3_POSN                    equ 0003h
PWM1OFH_PWM1OFH3_POSITION                equ 0003h
PWM1OFH_PWM1OFH3_SIZE                    equ 0001h
PWM1OFH_PWM1OFH3_LENGTH                  equ 0001h
PWM1OFH_PWM1OFH3_MASK                    equ 0008h
PWM1OFH_PWM1OFH4_POSN                    equ 0004h
PWM1OFH_PWM1OFH4_POSITION                equ 0004h
PWM1OFH_PWM1OFH4_SIZE                    equ 0001h
PWM1OFH_PWM1OFH4_LENGTH                  equ 0001h
PWM1OFH_PWM1OFH4_MASK                    equ 0010h
PWM1OFH_PWM1OFH5_POSN                    equ 0005h
PWM1OFH_PWM1OFH5_POSITION                equ 0005h
PWM1OFH_PWM1OFH5_SIZE                    equ 0001h
PWM1OFH_PWM1OFH5_LENGTH                  equ 0001h
PWM1OFH_PWM1OFH5_MASK                    equ 0020h
PWM1OFH_PWM1OFH6_POSN                    equ 0006h
PWM1OFH_PWM1OFH6_POSITION                equ 0006h
PWM1OFH_PWM1OFH6_SIZE                    equ 0001h
PWM1OFH_PWM1OFH6_LENGTH                  equ 0001h
PWM1OFH_PWM1OFH6_MASK                    equ 0040h
PWM1OFH_PWM1OFH7_POSN                    equ 0007h
PWM1OFH_PWM1OFH7_POSITION                equ 0007h
PWM1OFH_PWM1OFH7_SIZE                    equ 0001h
PWM1OFH_PWM1OFH7_LENGTH                  equ 0001h
PWM1OFH_PWM1OFH7_MASK                    equ 0080h
PWM1OFH_PWM1OFH_POSN                     equ 0000h
PWM1OFH_PWM1OFH_POSITION                 equ 0000h
PWM1OFH_PWM1OFH_SIZE                     equ 0008h
PWM1OFH_PWM1OFH_LENGTH                   equ 0008h
PWM1OFH_PWM1OFH_MASK                     equ 00FFh

// Register: PWM1TMRL
#define PWM1TMRL PWM1TMRL
PWM1TMRL                                 equ 0D99h
// bitfield definitions
PWM1TMRL_TMR_POSN                        equ 0000h
PWM1TMRL_TMR_POSITION                    equ 0000h
PWM1TMRL_TMR_SIZE                        equ 0008h
PWM1TMRL_TMR_LENGTH                      equ 0008h
PWM1TMRL_TMR_MASK                        equ 00FFh
PWM1TMRL_PWM1TMRL0_POSN                  equ 0000h
PWM1TMRL_PWM1TMRL0_POSITION              equ 0000h
PWM1TMRL_PWM1TMRL0_SIZE                  equ 0001h
PWM1TMRL_PWM1TMRL0_LENGTH                equ 0001h
PWM1TMRL_PWM1TMRL0_MASK                  equ 0001h
PWM1TMRL_PWM1TMRL1_POSN                  equ 0001h
PWM1TMRL_PWM1TMRL1_POSITION              equ 0001h
PWM1TMRL_PWM1TMRL1_SIZE                  equ 0001h
PWM1TMRL_PWM1TMRL1_LENGTH                equ 0001h
PWM1TMRL_PWM1TMRL1_MASK                  equ 0002h
PWM1TMRL_PWM1TMRL2_POSN                  equ 0002h
PWM1TMRL_PWM1TMRL2_POSITION              equ 0002h
PWM1TMRL_PWM1TMRL2_SIZE                  equ 0001h
PWM1TMRL_PWM1TMRL2_LENGTH                equ 0001h
PWM1TMRL_PWM1TMRL2_MASK                  equ 0004h
PWM1TMRL_PWM1TMRL3_POSN                  equ 0003h
PWM1TMRL_PWM1TMRL3_POSITION              equ 0003h
PWM1TMRL_PWM1TMRL3_SIZE                  equ 0001h
PWM1TMRL_PWM1TMRL3_LENGTH                equ 0001h
PWM1TMRL_PWM1TMRL3_MASK                  equ 0008h
PWM1TMRL_PWM1TMRL4_POSN                  equ 0004h
PWM1TMRL_PWM1TMRL4_POSITION              equ 0004h
PWM1TMRL_PWM1TMRL4_SIZE                  equ 0001h
PWM1TMRL_PWM1TMRL4_LENGTH                equ 0001h
PWM1TMRL_PWM1TMRL4_MASK                  equ 0010h
PWM1TMRL_PWM1TMRL5_POSN                  equ 0005h
PWM1TMRL_PWM1TMRL5_POSITION              equ 0005h
PWM1TMRL_PWM1TMRL5_SIZE                  equ 0001h
PWM1TMRL_PWM1TMRL5_LENGTH                equ 0001h
PWM1TMRL_PWM1TMRL5_MASK                  equ 0020h
PWM1TMRL_PWM1TMRL6_POSN                  equ 0006h
PWM1TMRL_PWM1TMRL6_POSITION              equ 0006h
PWM1TMRL_PWM1TMRL6_SIZE                  equ 0001h
PWM1TMRL_PWM1TMRL6_LENGTH                equ 0001h
PWM1TMRL_PWM1TMRL6_MASK                  equ 0040h
PWM1TMRL_PWM1TMRL7_POSN                  equ 0007h
PWM1TMRL_PWM1TMRL7_POSITION              equ 0007h
PWM1TMRL_PWM1TMRL7_SIZE                  equ 0001h
PWM1TMRL_PWM1TMRL7_LENGTH                equ 0001h
PWM1TMRL_PWM1TMRL7_MASK                  equ 0080h
PWM1TMRL_PWM1TMRL_POSN                   equ 0000h
PWM1TMRL_PWM1TMRL_POSITION               equ 0000h
PWM1TMRL_PWM1TMRL_SIZE                   equ 0008h
PWM1TMRL_PWM1TMRL_LENGTH                 equ 0008h
PWM1TMRL_PWM1TMRL_MASK                   equ 00FFh

// Register: PWM1TMRH
#define PWM1TMRH PWM1TMRH
PWM1TMRH                                 equ 0D9Ah
// bitfield definitions
PWM1TMRH_TMR_POSN                        equ 0000h
PWM1TMRH_TMR_POSITION                    equ 0000h
PWM1TMRH_TMR_SIZE                        equ 0008h
PWM1TMRH_TMR_LENGTH                      equ 0008h
PWM1TMRH_TMR_MASK                        equ 00FFh
PWM1TMRH_PWM1TMRH0_POSN                  equ 0000h
PWM1TMRH_PWM1TMRH0_POSITION              equ 0000h
PWM1TMRH_PWM1TMRH0_SIZE                  equ 0001h
PWM1TMRH_PWM1TMRH0_LENGTH                equ 0001h
PWM1TMRH_PWM1TMRH0_MASK                  equ 0001h
PWM1TMRH_PWM1TMRH1_POSN                  equ 0001h
PWM1TMRH_PWM1TMRH1_POSITION              equ 0001h
PWM1TMRH_PWM1TMRH1_SIZE                  equ 0001h
PWM1TMRH_PWM1TMRH1_LENGTH                equ 0001h
PWM1TMRH_PWM1TMRH1_MASK                  equ 0002h
PWM1TMRH_PWM1TMRH2_POSN                  equ 0002h
PWM1TMRH_PWM1TMRH2_POSITION              equ 0002h
PWM1TMRH_PWM1TMRH2_SIZE                  equ 0001h
PWM1TMRH_PWM1TMRH2_LENGTH                equ 0001h
PWM1TMRH_PWM1TMRH2_MASK                  equ 0004h
PWM1TMRH_PWM1TMRH3_POSN                  equ 0003h
PWM1TMRH_PWM1TMRH3_POSITION              equ 0003h
PWM1TMRH_PWM1TMRH3_SIZE                  equ 0001h
PWM1TMRH_PWM1TMRH3_LENGTH                equ 0001h
PWM1TMRH_PWM1TMRH3_MASK                  equ 0008h
PWM1TMRH_PWM1TMRH4_POSN                  equ 0004h
PWM1TMRH_PWM1TMRH4_POSITION              equ 0004h
PWM1TMRH_PWM1TMRH4_SIZE                  equ 0001h
PWM1TMRH_PWM1TMRH4_LENGTH                equ 0001h
PWM1TMRH_PWM1TMRH4_MASK                  equ 0010h
PWM1TMRH_PWM1TMRH5_POSN                  equ 0005h
PWM1TMRH_PWM1TMRH5_POSITION              equ 0005h
PWM1TMRH_PWM1TMRH5_SIZE                  equ 0001h
PWM1TMRH_PWM1TMRH5_LENGTH                equ 0001h
PWM1TMRH_PWM1TMRH5_MASK                  equ 0020h
PWM1TMRH_PWM1TMRH6_POSN                  equ 0006h
PWM1TMRH_PWM1TMRH6_POSITION              equ 0006h
PWM1TMRH_PWM1TMRH6_SIZE                  equ 0001h
PWM1TMRH_PWM1TMRH6_LENGTH                equ 0001h
PWM1TMRH_PWM1TMRH6_MASK                  equ 0040h
PWM1TMRH_PWM1TMRH7_POSN                  equ 0007h
PWM1TMRH_PWM1TMRH7_POSITION              equ 0007h
PWM1TMRH_PWM1TMRH7_SIZE                  equ 0001h
PWM1TMRH_PWM1TMRH7_LENGTH                equ 0001h
PWM1TMRH_PWM1TMRH7_MASK                  equ 0080h
PWM1TMRH_PWM1TMRH_POSN                   equ 0000h
PWM1TMRH_PWM1TMRH_POSITION               equ 0000h
PWM1TMRH_PWM1TMRH_SIZE                   equ 0008h
PWM1TMRH_PWM1TMRH_LENGTH                 equ 0008h
PWM1TMRH_PWM1TMRH_MASK                   equ 00FFh

// Register: PWM1CON
#define PWM1CON PWM1CON
PWM1CON                                  equ 0D9Bh
// bitfield definitions
PWM1CON_MODE_POSN                        equ 0002h
PWM1CON_MODE_POSITION                    equ 0002h
PWM1CON_MODE_SIZE                        equ 0002h
PWM1CON_MODE_LENGTH                      equ 0002h
PWM1CON_MODE_MASK                        equ 000Ch
PWM1CON_POL_POSN                         equ 0004h
PWM1CON_POL_POSITION                     equ 0004h
PWM1CON_POL_SIZE                         equ 0001h
PWM1CON_POL_LENGTH                       equ 0001h
PWM1CON_POL_MASK                         equ 0010h
PWM1CON_OUT_POSN                         equ 0005h
PWM1CON_OUT_POSITION                     equ 0005h
PWM1CON_OUT_SIZE                         equ 0001h
PWM1CON_OUT_LENGTH                       equ 0001h
PWM1CON_OUT_MASK                         equ 0020h
PWM1CON_OE_POSN                          equ 0006h
PWM1CON_OE_POSITION                      equ 0006h
PWM1CON_OE_SIZE                          equ 0001h
PWM1CON_OE_LENGTH                        equ 0001h
PWM1CON_OE_MASK                          equ 0040h
PWM1CON_EN_POSN                          equ 0007h
PWM1CON_EN_POSITION                      equ 0007h
PWM1CON_EN_SIZE                          equ 0001h
PWM1CON_EN_LENGTH                        equ 0001h
PWM1CON_EN_MASK                          equ 0080h
PWM1CON_PWM1MODE0_POSN                   equ 0002h
PWM1CON_PWM1MODE0_POSITION               equ 0002h
PWM1CON_PWM1MODE0_SIZE                   equ 0001h
PWM1CON_PWM1MODE0_LENGTH                 equ 0001h
PWM1CON_PWM1MODE0_MASK                   equ 0004h
PWM1CON_PWM1MODE1_POSN                   equ 0003h
PWM1CON_PWM1MODE1_POSITION               equ 0003h
PWM1CON_PWM1MODE1_SIZE                   equ 0001h
PWM1CON_PWM1MODE1_LENGTH                 equ 0001h
PWM1CON_PWM1MODE1_MASK                   equ 0008h
PWM1CON_PWM1MODE_POSN                    equ 0002h
PWM1CON_PWM1MODE_POSITION                equ 0002h
PWM1CON_PWM1MODE_SIZE                    equ 0002h
PWM1CON_PWM1MODE_LENGTH                  equ 0002h
PWM1CON_PWM1MODE_MASK                    equ 000Ch
PWM1CON_PWM1POL_POSN                     equ 0004h
PWM1CON_PWM1POL_POSITION                 equ 0004h
PWM1CON_PWM1POL_SIZE                     equ 0001h
PWM1CON_PWM1POL_LENGTH                   equ 0001h
PWM1CON_PWM1POL_MASK                     equ 0010h
PWM1CON_PWM1OUT_POSN                     equ 0005h
PWM1CON_PWM1OUT_POSITION                 equ 0005h
PWM1CON_PWM1OUT_SIZE                     equ 0001h
PWM1CON_PWM1OUT_LENGTH                   equ 0001h
PWM1CON_PWM1OUT_MASK                     equ 0020h
PWM1CON_PWM1OE_POSN                      equ 0006h
PWM1CON_PWM1OE_POSITION                  equ 0006h
PWM1CON_PWM1OE_SIZE                      equ 0001h
PWM1CON_PWM1OE_LENGTH                    equ 0001h
PWM1CON_PWM1OE_MASK                      equ 0040h
PWM1CON_PWM1EN_POSN                      equ 0007h
PWM1CON_PWM1EN_POSITION                  equ 0007h
PWM1CON_PWM1EN_SIZE                      equ 0001h
PWM1CON_PWM1EN_LENGTH                    equ 0001h
PWM1CON_PWM1EN_MASK                      equ 0080h
PWM1CON_MODE0_POSN                       equ 0002h
PWM1CON_MODE0_POSITION                   equ 0002h
PWM1CON_MODE0_SIZE                       equ 0001h
PWM1CON_MODE0_LENGTH                     equ 0001h
PWM1CON_MODE0_MASK                       equ 0004h
PWM1CON_MODE1_POSN                       equ 0003h
PWM1CON_MODE1_POSITION                   equ 0003h
PWM1CON_MODE1_SIZE                       equ 0001h
PWM1CON_MODE1_LENGTH                     equ 0001h
PWM1CON_MODE1_MASK                       equ 0008h

// Register: PWM1INTE
#define PWM1INTE PWM1INTE
PWM1INTE                                 equ 0D9Ch
// bitfield definitions
PWM1INTE_PRIE_POSN                       equ 0000h
PWM1INTE_PRIE_POSITION                   equ 0000h
PWM1INTE_PRIE_SIZE                       equ 0001h
PWM1INTE_PRIE_LENGTH                     equ 0001h
PWM1INTE_PRIE_MASK                       equ 0001h
PWM1INTE_DCIE_POSN                       equ 0001h
PWM1INTE_DCIE_POSITION                   equ 0001h
PWM1INTE_DCIE_SIZE                       equ 0001h
PWM1INTE_DCIE_LENGTH                     equ 0001h
PWM1INTE_DCIE_MASK                       equ 0002h
PWM1INTE_PHIE_POSN                       equ 0002h
PWM1INTE_PHIE_POSITION                   equ 0002h
PWM1INTE_PHIE_SIZE                       equ 0001h
PWM1INTE_PHIE_LENGTH                     equ 0001h
PWM1INTE_PHIE_MASK                       equ 0004h
PWM1INTE_OFIE_POSN                       equ 0003h
PWM1INTE_OFIE_POSITION                   equ 0003h
PWM1INTE_OFIE_SIZE                       equ 0001h
PWM1INTE_OFIE_LENGTH                     equ 0001h
PWM1INTE_OFIE_MASK                       equ 0008h
PWM1INTE_PWM1PRIE_POSN                   equ 0000h
PWM1INTE_PWM1PRIE_POSITION               equ 0000h
PWM1INTE_PWM1PRIE_SIZE                   equ 0001h
PWM1INTE_PWM1PRIE_LENGTH                 equ 0001h
PWM1INTE_PWM1PRIE_MASK                   equ 0001h
PWM1INTE_PWM1DCIE_POSN                   equ 0001h
PWM1INTE_PWM1DCIE_POSITION               equ 0001h
PWM1INTE_PWM1DCIE_SIZE                   equ 0001h
PWM1INTE_PWM1DCIE_LENGTH                 equ 0001h
PWM1INTE_PWM1DCIE_MASK                   equ 0002h
PWM1INTE_PWM1PHIE_POSN                   equ 0002h
PWM1INTE_PWM1PHIE_POSITION               equ 0002h
PWM1INTE_PWM1PHIE_SIZE                   equ 0001h
PWM1INTE_PWM1PHIE_LENGTH                 equ 0001h
PWM1INTE_PWM1PHIE_MASK                   equ 0004h
PWM1INTE_PWM1OFIE_POSN                   equ 0003h
PWM1INTE_PWM1OFIE_POSITION               equ 0003h
PWM1INTE_PWM1OFIE_SIZE                   equ 0001h
PWM1INTE_PWM1OFIE_LENGTH                 equ 0001h
PWM1INTE_PWM1OFIE_MASK                   equ 0008h

// Register: PWM1INTF
#define PWM1INTF PWM1INTF
PWM1INTF                                 equ 0D9Dh
// bitfield definitions
PWM1INTF_PRIF_POSN                       equ 0000h
PWM1INTF_PRIF_POSITION                   equ 0000h
PWM1INTF_PRIF_SIZE                       equ 0001h
PWM1INTF_PRIF_LENGTH                     equ 0001h
PWM1INTF_PRIF_MASK                       equ 0001h
PWM1INTF_DCIF_POSN                       equ 0001h
PWM1INTF_DCIF_POSITION                   equ 0001h
PWM1INTF_DCIF_SIZE                       equ 0001h
PWM1INTF_DCIF_LENGTH                     equ 0001h
PWM1INTF_DCIF_MASK                       equ 0002h
PWM1INTF_PHIF_POSN                       equ 0002h
PWM1INTF_PHIF_POSITION                   equ 0002h
PWM1INTF_PHIF_SIZE                       equ 0001h
PWM1INTF_PHIF_LENGTH                     equ 0001h
PWM1INTF_PHIF_MASK                       equ 0004h
PWM1INTF_OFIF_POSN                       equ 0003h
PWM1INTF_OFIF_POSITION                   equ 0003h
PWM1INTF_OFIF_SIZE                       equ 0001h
PWM1INTF_OFIF_LENGTH                     equ 0001h
PWM1INTF_OFIF_MASK                       equ 0008h
PWM1INTF_PWM1PRIF_POSN                   equ 0000h
PWM1INTF_PWM1PRIF_POSITION               equ 0000h
PWM1INTF_PWM1PRIF_SIZE                   equ 0001h
PWM1INTF_PWM1PRIF_LENGTH                 equ 0001h
PWM1INTF_PWM1PRIF_MASK                   equ 0001h
PWM1INTF_PWM1DCIF_POSN                   equ 0001h
PWM1INTF_PWM1DCIF_POSITION               equ 0001h
PWM1INTF_PWM1DCIF_SIZE                   equ 0001h
PWM1INTF_PWM1DCIF_LENGTH                 equ 0001h
PWM1INTF_PWM1DCIF_MASK                   equ 0002h
PWM1INTF_PWM1PHIF_POSN                   equ 0002h
PWM1INTF_PWM1PHIF_POSITION               equ 0002h
PWM1INTF_PWM1PHIF_SIZE                   equ 0001h
PWM1INTF_PWM1PHIF_LENGTH                 equ 0001h
PWM1INTF_PWM1PHIF_MASK                   equ 0004h
PWM1INTF_PWM1OFIF_POSN                   equ 0003h
PWM1INTF_PWM1OFIF_POSITION               equ 0003h
PWM1INTF_PWM1OFIF_SIZE                   equ 0001h
PWM1INTF_PWM1OFIF_LENGTH                 equ 0001h
PWM1INTF_PWM1OFIF_MASK                   equ 0008h

// Register: PWM1CLKCON
#define PWM1CLKCON PWM1CLKCON
PWM1CLKCON                               equ 0D9Eh
// bitfield definitions
PWM1CLKCON_CS_POSN                       equ 0000h
PWM1CLKCON_CS_POSITION                   equ 0000h
PWM1CLKCON_CS_SIZE                       equ 0002h
PWM1CLKCON_CS_LENGTH                     equ 0002h
PWM1CLKCON_CS_MASK                       equ 0003h
PWM1CLKCON_PS_POSN                       equ 0004h
PWM1CLKCON_PS_POSITION                   equ 0004h
PWM1CLKCON_PS_SIZE                       equ 0003h
PWM1CLKCON_PS_LENGTH                     equ 0003h
PWM1CLKCON_PS_MASK                       equ 0070h
PWM1CLKCON_PWM1CS0_POSN                  equ 0000h
PWM1CLKCON_PWM1CS0_POSITION              equ 0000h
PWM1CLKCON_PWM1CS0_SIZE                  equ 0001h
PWM1CLKCON_PWM1CS0_LENGTH                equ 0001h
PWM1CLKCON_PWM1CS0_MASK                  equ 0001h
PWM1CLKCON_PWM1CS1_POSN                  equ 0001h
PWM1CLKCON_PWM1CS1_POSITION              equ 0001h
PWM1CLKCON_PWM1CS1_SIZE                  equ 0001h
PWM1CLKCON_PWM1CS1_LENGTH                equ 0001h
PWM1CLKCON_PWM1CS1_MASK                  equ 0002h
PWM1CLKCON_PWM1PS0_POSN                  equ 0004h
PWM1CLKCON_PWM1PS0_POSITION              equ 0004h
PWM1CLKCON_PWM1PS0_SIZE                  equ 0001h
PWM1CLKCON_PWM1PS0_LENGTH                equ 0001h
PWM1CLKCON_PWM1PS0_MASK                  equ 0010h
PWM1CLKCON_PWM1PS1_POSN                  equ 0005h
PWM1CLKCON_PWM1PS1_POSITION              equ 0005h
PWM1CLKCON_PWM1PS1_SIZE                  equ 0001h
PWM1CLKCON_PWM1PS1_LENGTH                equ 0001h
PWM1CLKCON_PWM1PS1_MASK                  equ 0020h
PWM1CLKCON_PWM1PS2_POSN                  equ 0006h
PWM1CLKCON_PWM1PS2_POSITION              equ 0006h
PWM1CLKCON_PWM1PS2_SIZE                  equ 0001h
PWM1CLKCON_PWM1PS2_LENGTH                equ 0001h
PWM1CLKCON_PWM1PS2_MASK                  equ 0040h
PWM1CLKCON_PWM1CS_POSN                   equ 0000h
PWM1CLKCON_PWM1CS_POSITION               equ 0000h
PWM1CLKCON_PWM1CS_SIZE                   equ 0003h
PWM1CLKCON_PWM1CS_LENGTH                 equ 0003h
PWM1CLKCON_PWM1CS_MASK                   equ 0007h
PWM1CLKCON_PWM1PS_POSN                   equ 0004h
PWM1CLKCON_PWM1PS_POSITION               equ 0004h
PWM1CLKCON_PWM1PS_SIZE                   equ 0003h
PWM1CLKCON_PWM1PS_LENGTH                 equ 0003h
PWM1CLKCON_PWM1PS_MASK                   equ 0070h
PWM1CLKCON_CS0_POSN                      equ 0000h
PWM1CLKCON_CS0_POSITION                  equ 0000h
PWM1CLKCON_CS0_SIZE                      equ 0001h
PWM1CLKCON_CS0_LENGTH                    equ 0001h
PWM1CLKCON_CS0_MASK                      equ 0001h
PWM1CLKCON_CS1_POSN                      equ 0001h
PWM1CLKCON_CS1_POSITION                  equ 0001h
PWM1CLKCON_CS1_SIZE                      equ 0001h
PWM1CLKCON_CS1_LENGTH                    equ 0001h
PWM1CLKCON_CS1_MASK                      equ 0002h
PWM1CLKCON_PS0_POSN                      equ 0004h
PWM1CLKCON_PS0_POSITION                  equ 0004h
PWM1CLKCON_PS0_SIZE                      equ 0001h
PWM1CLKCON_PS0_LENGTH                    equ 0001h
PWM1CLKCON_PS0_MASK                      equ 0010h
PWM1CLKCON_PS1_POSN                      equ 0005h
PWM1CLKCON_PS1_POSITION                  equ 0005h
PWM1CLKCON_PS1_SIZE                      equ 0001h
PWM1CLKCON_PS1_LENGTH                    equ 0001h
PWM1CLKCON_PS1_MASK                      equ 0020h
PWM1CLKCON_PS2_POSN                      equ 0006h
PWM1CLKCON_PS2_POSITION                  equ 0006h
PWM1CLKCON_PS2_SIZE                      equ 0001h
PWM1CLKCON_PS2_LENGTH                    equ 0001h
PWM1CLKCON_PS2_MASK                      equ 0040h

// Register: PWM1LDCON
#define PWM1LDCON PWM1LDCON
PWM1LDCON                                equ 0D9Fh
// bitfield definitions
PWM1LDCON_LDS_POSN                       equ 0000h
PWM1LDCON_LDS_POSITION                   equ 0000h
PWM1LDCON_LDS_SIZE                       equ 0002h
PWM1LDCON_LDS_LENGTH                     equ 0002h
PWM1LDCON_LDS_MASK                       equ 0003h
PWM1LDCON_LDT_POSN                       equ 0006h
PWM1LDCON_LDT_POSITION                   equ 0006h
PWM1LDCON_LDT_SIZE                       equ 0001h
PWM1LDCON_LDT_LENGTH                     equ 0001h
PWM1LDCON_LDT_MASK                       equ 0040h
PWM1LDCON_LDA_POSN                       equ 0007h
PWM1LDCON_LDA_POSITION                   equ 0007h
PWM1LDCON_LDA_SIZE                       equ 0001h
PWM1LDCON_LDA_LENGTH                     equ 0001h
PWM1LDCON_LDA_MASK                       equ 0080h
PWM1LDCON_PWM1LDS0_POSN                  equ 0000h
PWM1LDCON_PWM1LDS0_POSITION              equ 0000h
PWM1LDCON_PWM1LDS0_SIZE                  equ 0001h
PWM1LDCON_PWM1LDS0_LENGTH                equ 0001h
PWM1LDCON_PWM1LDS0_MASK                  equ 0001h
PWM1LDCON_PWM1LDS1_POSN                  equ 0001h
PWM1LDCON_PWM1LDS1_POSITION              equ 0001h
PWM1LDCON_PWM1LDS1_SIZE                  equ 0001h
PWM1LDCON_PWM1LDS1_LENGTH                equ 0001h
PWM1LDCON_PWM1LDS1_MASK                  equ 0002h
PWM1LDCON_PWM1LDS_POSN                   equ 0000h
PWM1LDCON_PWM1LDS_POSITION               equ 0000h
PWM1LDCON_PWM1LDS_SIZE                   equ 0002h
PWM1LDCON_PWM1LDS_LENGTH                 equ 0002h
PWM1LDCON_PWM1LDS_MASK                   equ 0003h
PWM1LDCON_PWM1LDM_POSN                   equ 0006h
PWM1LDCON_PWM1LDM_POSITION               equ 0006h
PWM1LDCON_PWM1LDM_SIZE                   equ 0001h
PWM1LDCON_PWM1LDM_LENGTH                 equ 0001h
PWM1LDCON_PWM1LDM_MASK                   equ 0040h
PWM1LDCON_PWM1LD_POSN                    equ 0007h
PWM1LDCON_PWM1LD_POSITION                equ 0007h
PWM1LDCON_PWM1LD_SIZE                    equ 0001h
PWM1LDCON_PWM1LD_LENGTH                  equ 0001h
PWM1LDCON_PWM1LD_MASK                    equ 0080h
PWM1LDCON_LDS0_POSN                      equ 0000h
PWM1LDCON_LDS0_POSITION                  equ 0000h
PWM1LDCON_LDS0_SIZE                      equ 0001h
PWM1LDCON_LDS0_LENGTH                    equ 0001h
PWM1LDCON_LDS0_MASK                      equ 0001h
PWM1LDCON_LDS1_POSN                      equ 0001h
PWM1LDCON_LDS1_POSITION                  equ 0001h
PWM1LDCON_LDS1_SIZE                      equ 0001h
PWM1LDCON_LDS1_LENGTH                    equ 0001h
PWM1LDCON_LDS1_MASK                      equ 0002h

// Register: PWM1OFCON
#define PWM1OFCON PWM1OFCON
PWM1OFCON                                equ 0DA0h
// bitfield definitions
PWM1OFCON_OFS_POSN                       equ 0000h
PWM1OFCON_OFS_POSITION                   equ 0000h
PWM1OFCON_OFS_SIZE                       equ 0002h
PWM1OFCON_OFS_LENGTH                     equ 0002h
PWM1OFCON_OFS_MASK                       equ 0003h
PWM1OFCON_OFO_POSN                       equ 0004h
PWM1OFCON_OFO_POSITION                   equ 0004h
PWM1OFCON_OFO_SIZE                       equ 0001h
PWM1OFCON_OFO_LENGTH                     equ 0001h
PWM1OFCON_OFO_MASK                       equ 0010h
PWM1OFCON_OFM_POSN                       equ 0005h
PWM1OFCON_OFM_POSITION                   equ 0005h
PWM1OFCON_OFM_SIZE                       equ 0002h
PWM1OFCON_OFM_LENGTH                     equ 0002h
PWM1OFCON_OFM_MASK                       equ 0060h
PWM1OFCON_PWM1OFS0_POSN                  equ 0000h
PWM1OFCON_PWM1OFS0_POSITION              equ 0000h
PWM1OFCON_PWM1OFS0_SIZE                  equ 0001h
PWM1OFCON_PWM1OFS0_LENGTH                equ 0001h
PWM1OFCON_PWM1OFS0_MASK                  equ 0001h
PWM1OFCON_PWM1OFS1_POSN                  equ 0001h
PWM1OFCON_PWM1OFS1_POSITION              equ 0001h
PWM1OFCON_PWM1OFS1_SIZE                  equ 0001h
PWM1OFCON_PWM1OFS1_LENGTH                equ 0001h
PWM1OFCON_PWM1OFS1_MASK                  equ 0002h
PWM1OFCON_PWM1OFM0_POSN                  equ 0005h
PWM1OFCON_PWM1OFM0_POSITION              equ 0005h
PWM1OFCON_PWM1OFM0_SIZE                  equ 0001h
PWM1OFCON_PWM1OFM0_LENGTH                equ 0001h
PWM1OFCON_PWM1OFM0_MASK                  equ 0020h
PWM1OFCON_PWM1OFM1_POSN                  equ 0006h
PWM1OFCON_PWM1OFM1_POSITION              equ 0006h
PWM1OFCON_PWM1OFM1_SIZE                  equ 0001h
PWM1OFCON_PWM1OFM1_LENGTH                equ 0001h
PWM1OFCON_PWM1OFM1_MASK                  equ 0040h
PWM1OFCON_PWM1OFS_POSN                   equ 0000h
PWM1OFCON_PWM1OFS_POSITION               equ 0000h
PWM1OFCON_PWM1OFS_SIZE                   equ 0002h
PWM1OFCON_PWM1OFS_LENGTH                 equ 0002h
PWM1OFCON_PWM1OFS_MASK                   equ 0003h
PWM1OFCON_PWM1OFMC_POSN                  equ 0004h
PWM1OFCON_PWM1OFMC_POSITION              equ 0004h
PWM1OFCON_PWM1OFMC_SIZE                  equ 0001h
PWM1OFCON_PWM1OFMC_LENGTH                equ 0001h
PWM1OFCON_PWM1OFMC_MASK                  equ 0010h
PWM1OFCON_PWM1OFM_POSN                   equ 0005h
PWM1OFCON_PWM1OFM_POSITION               equ 0005h
PWM1OFCON_PWM1OFM_SIZE                   equ 0002h
PWM1OFCON_PWM1OFM_LENGTH                 equ 0002h
PWM1OFCON_PWM1OFM_MASK                   equ 0060h
PWM1OFCON_OFS0_POSN                      equ 0000h
PWM1OFCON_OFS0_POSITION                  equ 0000h
PWM1OFCON_OFS0_SIZE                      equ 0001h
PWM1OFCON_OFS0_LENGTH                    equ 0001h
PWM1OFCON_OFS0_MASK                      equ 0001h
PWM1OFCON_OFS1_POSN                      equ 0001h
PWM1OFCON_OFS1_POSITION                  equ 0001h
PWM1OFCON_OFS1_SIZE                      equ 0001h
PWM1OFCON_OFS1_LENGTH                    equ 0001h
PWM1OFCON_OFS1_MASK                      equ 0002h
PWM1OFCON_OFM0_POSN                      equ 0005h
PWM1OFCON_OFM0_POSITION                  equ 0005h
PWM1OFCON_OFM0_SIZE                      equ 0001h
PWM1OFCON_OFM0_LENGTH                    equ 0001h
PWM1OFCON_OFM0_MASK                      equ 0020h
PWM1OFCON_OFM1_POSN                      equ 0006h
PWM1OFCON_OFM1_POSITION                  equ 0006h
PWM1OFCON_OFM1_SIZE                      equ 0001h
PWM1OFCON_OFM1_LENGTH                    equ 0001h
PWM1OFCON_OFM1_MASK                      equ 0040h

// Register: PWM2PHL
#define PWM2PHL PWM2PHL
PWM2PHL                                  equ 0DA1h
// bitfield definitions
PWM2PHL_PH_POSN                          equ 0000h
PWM2PHL_PH_POSITION                      equ 0000h
PWM2PHL_PH_SIZE                          equ 0008h
PWM2PHL_PH_LENGTH                        equ 0008h
PWM2PHL_PH_MASK                          equ 00FFh
PWM2PHL_PWM2PHL0_POSN                    equ 0000h
PWM2PHL_PWM2PHL0_POSITION                equ 0000h
PWM2PHL_PWM2PHL0_SIZE                    equ 0001h
PWM2PHL_PWM2PHL0_LENGTH                  equ 0001h
PWM2PHL_PWM2PHL0_MASK                    equ 0001h
PWM2PHL_PWM2PHL1_POSN                    equ 0001h
PWM2PHL_PWM2PHL1_POSITION                equ 0001h
PWM2PHL_PWM2PHL1_SIZE                    equ 0001h
PWM2PHL_PWM2PHL1_LENGTH                  equ 0001h
PWM2PHL_PWM2PHL1_MASK                    equ 0002h
PWM2PHL_PWM2PHL2_POSN                    equ 0002h
PWM2PHL_PWM2PHL2_POSITION                equ 0002h
PWM2PHL_PWM2PHL2_SIZE                    equ 0001h
PWM2PHL_PWM2PHL2_LENGTH                  equ 0001h
PWM2PHL_PWM2PHL2_MASK                    equ 0004h
PWM2PHL_PWM2PHL3_POSN                    equ 0003h
PWM2PHL_PWM2PHL3_POSITION                equ 0003h
PWM2PHL_PWM2PHL3_SIZE                    equ 0001h
PWM2PHL_PWM2PHL3_LENGTH                  equ 0001h
PWM2PHL_PWM2PHL3_MASK                    equ 0008h
PWM2PHL_PWM2PHL4_POSN                    equ 0004h
PWM2PHL_PWM2PHL4_POSITION                equ 0004h
PWM2PHL_PWM2PHL4_SIZE                    equ 0001h
PWM2PHL_PWM2PHL4_LENGTH                  equ 0001h
PWM2PHL_PWM2PHL4_MASK                    equ 0010h
PWM2PHL_PWM2PHL5_POSN                    equ 0005h
PWM2PHL_PWM2PHL5_POSITION                equ 0005h
PWM2PHL_PWM2PHL5_SIZE                    equ 0001h
PWM2PHL_PWM2PHL5_LENGTH                  equ 0001h
PWM2PHL_PWM2PHL5_MASK                    equ 0020h
PWM2PHL_PWM2PHL6_POSN                    equ 0006h
PWM2PHL_PWM2PHL6_POSITION                equ 0006h
PWM2PHL_PWM2PHL6_SIZE                    equ 0001h
PWM2PHL_PWM2PHL6_LENGTH                  equ 0001h
PWM2PHL_PWM2PHL6_MASK                    equ 0040h
PWM2PHL_PWM2PHL7_POSN                    equ 0007h
PWM2PHL_PWM2PHL7_POSITION                equ 0007h
PWM2PHL_PWM2PHL7_SIZE                    equ 0001h
PWM2PHL_PWM2PHL7_LENGTH                  equ 0001h
PWM2PHL_PWM2PHL7_MASK                    equ 0080h
PWM2PHL_PWM2PHL_POSN                     equ 0000h
PWM2PHL_PWM2PHL_POSITION                 equ 0000h
PWM2PHL_PWM2PHL_SIZE                     equ 0008h
PWM2PHL_PWM2PHL_LENGTH                   equ 0008h
PWM2PHL_PWM2PHL_MASK                     equ 00FFh

// Register: PWM2PHH
#define PWM2PHH PWM2PHH
PWM2PHH                                  equ 0DA2h
// bitfield definitions
PWM2PHH_PH_POSN                          equ 0000h
PWM2PHH_PH_POSITION                      equ 0000h
PWM2PHH_PH_SIZE                          equ 0008h
PWM2PHH_PH_LENGTH                        equ 0008h
PWM2PHH_PH_MASK                          equ 00FFh
PWM2PHH_PWM2PHH0_POSN                    equ 0000h
PWM2PHH_PWM2PHH0_POSITION                equ 0000h
PWM2PHH_PWM2PHH0_SIZE                    equ 0001h
PWM2PHH_PWM2PHH0_LENGTH                  equ 0001h
PWM2PHH_PWM2PHH0_MASK                    equ 0001h
PWM2PHH_PWM2PHH1_POSN                    equ 0001h
PWM2PHH_PWM2PHH1_POSITION                equ 0001h
PWM2PHH_PWM2PHH1_SIZE                    equ 0001h
PWM2PHH_PWM2PHH1_LENGTH                  equ 0001h
PWM2PHH_PWM2PHH1_MASK                    equ 0002h
PWM2PHH_PWM2PHH2_POSN                    equ 0002h
PWM2PHH_PWM2PHH2_POSITION                equ 0002h
PWM2PHH_PWM2PHH2_SIZE                    equ 0001h
PWM2PHH_PWM2PHH2_LENGTH                  equ 0001h
PWM2PHH_PWM2PHH2_MASK                    equ 0004h
PWM2PHH_PWM2PHH3_POSN                    equ 0003h
PWM2PHH_PWM2PHH3_POSITION                equ 0003h
PWM2PHH_PWM2PHH3_SIZE                    equ 0001h
PWM2PHH_PWM2PHH3_LENGTH                  equ 0001h
PWM2PHH_PWM2PHH3_MASK                    equ 0008h
PWM2PHH_PWM2PHH4_POSN                    equ 0004h
PWM2PHH_PWM2PHH4_POSITION                equ 0004h
PWM2PHH_PWM2PHH4_SIZE                    equ 0001h
PWM2PHH_PWM2PHH4_LENGTH                  equ 0001h
PWM2PHH_PWM2PHH4_MASK                    equ 0010h
PWM2PHH_PWM2PHH5_POSN                    equ 0005h
PWM2PHH_PWM2PHH5_POSITION                equ 0005h
PWM2PHH_PWM2PHH5_SIZE                    equ 0001h
PWM2PHH_PWM2PHH5_LENGTH                  equ 0001h
PWM2PHH_PWM2PHH5_MASK                    equ 0020h
PWM2PHH_PWM2PHH6_POSN                    equ 0006h
PWM2PHH_PWM2PHH6_POSITION                equ 0006h
PWM2PHH_PWM2PHH6_SIZE                    equ 0001h
PWM2PHH_PWM2PHH6_LENGTH                  equ 0001h
PWM2PHH_PWM2PHH6_MASK                    equ 0040h
PWM2PHH_PWM2PHH7_POSN                    equ 0007h
PWM2PHH_PWM2PHH7_POSITION                equ 0007h
PWM2PHH_PWM2PHH7_SIZE                    equ 0001h
PWM2PHH_PWM2PHH7_LENGTH                  equ 0001h
PWM2PHH_PWM2PHH7_MASK                    equ 0080h
PWM2PHH_PWM2PHH_POSN                     equ 0000h
PWM2PHH_PWM2PHH_POSITION                 equ 0000h
PWM2PHH_PWM2PHH_SIZE                     equ 0008h
PWM2PHH_PWM2PHH_LENGTH                   equ 0008h
PWM2PHH_PWM2PHH_MASK                     equ 00FFh

// Register: PWM2DCL
#define PWM2DCL PWM2DCL
PWM2DCL                                  equ 0DA3h
// bitfield definitions
PWM2DCL_DC_POSN                          equ 0000h
PWM2DCL_DC_POSITION                      equ 0000h
PWM2DCL_DC_SIZE                          equ 0008h
PWM2DCL_DC_LENGTH                        equ 0008h
PWM2DCL_DC_MASK                          equ 00FFh
PWM2DCL_PWM2DCL0_POSN                    equ 0000h
PWM2DCL_PWM2DCL0_POSITION                equ 0000h
PWM2DCL_PWM2DCL0_SIZE                    equ 0001h
PWM2DCL_PWM2DCL0_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL0_MASK                    equ 0001h
PWM2DCL_PWM2DCL1_POSN                    equ 0001h
PWM2DCL_PWM2DCL1_POSITION                equ 0001h
PWM2DCL_PWM2DCL1_SIZE                    equ 0001h
PWM2DCL_PWM2DCL1_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL1_MASK                    equ 0002h
PWM2DCL_PWM2DCL2_POSN                    equ 0002h
PWM2DCL_PWM2DCL2_POSITION                equ 0002h
PWM2DCL_PWM2DCL2_SIZE                    equ 0001h
PWM2DCL_PWM2DCL2_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL2_MASK                    equ 0004h
PWM2DCL_PWM2DCL3_POSN                    equ 0003h
PWM2DCL_PWM2DCL3_POSITION                equ 0003h
PWM2DCL_PWM2DCL3_SIZE                    equ 0001h
PWM2DCL_PWM2DCL3_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL3_MASK                    equ 0008h
PWM2DCL_PWM2DCL4_POSN                    equ 0004h
PWM2DCL_PWM2DCL4_POSITION                equ 0004h
PWM2DCL_PWM2DCL4_SIZE                    equ 0001h
PWM2DCL_PWM2DCL4_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL4_MASK                    equ 0010h
PWM2DCL_PWM2DCL5_POSN                    equ 0005h
PWM2DCL_PWM2DCL5_POSITION                equ 0005h
PWM2DCL_PWM2DCL5_SIZE                    equ 0001h
PWM2DCL_PWM2DCL5_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL5_MASK                    equ 0020h
PWM2DCL_PWM2DCL6_POSN                    equ 0006h
PWM2DCL_PWM2DCL6_POSITION                equ 0006h
PWM2DCL_PWM2DCL6_SIZE                    equ 0001h
PWM2DCL_PWM2DCL6_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL6_MASK                    equ 0040h
PWM2DCL_PWM2DCL7_POSN                    equ 0007h
PWM2DCL_PWM2DCL7_POSITION                equ 0007h
PWM2DCL_PWM2DCL7_SIZE                    equ 0001h
PWM2DCL_PWM2DCL7_LENGTH                  equ 0001h
PWM2DCL_PWM2DCL7_MASK                    equ 0080h
PWM2DCL_PWM2DCL_POSN                     equ 0000h
PWM2DCL_PWM2DCL_POSITION                 equ 0000h
PWM2DCL_PWM2DCL_SIZE                     equ 0008h
PWM2DCL_PWM2DCL_LENGTH                   equ 0008h
PWM2DCL_PWM2DCL_MASK                     equ 00FFh

// Register: PWM2DCH
#define PWM2DCH PWM2DCH
PWM2DCH                                  equ 0DA4h
// bitfield definitions
PWM2DCH_DC_POSN                          equ 0000h
PWM2DCH_DC_POSITION                      equ 0000h
PWM2DCH_DC_SIZE                          equ 0008h
PWM2DCH_DC_LENGTH                        equ 0008h
PWM2DCH_DC_MASK                          equ 00FFh
PWM2DCH_PWM2DCH0_POSN                    equ 0000h
PWM2DCH_PWM2DCH0_POSITION                equ 0000h
PWM2DCH_PWM2DCH0_SIZE                    equ 0001h
PWM2DCH_PWM2DCH0_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH0_MASK                    equ 0001h
PWM2DCH_PWM2DCH1_POSN                    equ 0001h
PWM2DCH_PWM2DCH1_POSITION                equ 0001h
PWM2DCH_PWM2DCH1_SIZE                    equ 0001h
PWM2DCH_PWM2DCH1_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH1_MASK                    equ 0002h
PWM2DCH_PWM2DCH2_POSN                    equ 0002h
PWM2DCH_PWM2DCH2_POSITION                equ 0002h
PWM2DCH_PWM2DCH2_SIZE                    equ 0001h
PWM2DCH_PWM2DCH2_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH2_MASK                    equ 0004h
PWM2DCH_PWM2DCH3_POSN                    equ 0003h
PWM2DCH_PWM2DCH3_POSITION                equ 0003h
PWM2DCH_PWM2DCH3_SIZE                    equ 0001h
PWM2DCH_PWM2DCH3_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH3_MASK                    equ 0008h
PWM2DCH_PWM2DCH4_POSN                    equ 0004h
PWM2DCH_PWM2DCH4_POSITION                equ 0004h
PWM2DCH_PWM2DCH4_SIZE                    equ 0001h
PWM2DCH_PWM2DCH4_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH4_MASK                    equ 0010h
PWM2DCH_PWM2DCH5_POSN                    equ 0005h
PWM2DCH_PWM2DCH5_POSITION                equ 0005h
PWM2DCH_PWM2DCH5_SIZE                    equ 0001h
PWM2DCH_PWM2DCH5_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH5_MASK                    equ 0020h
PWM2DCH_PWM2DCH6_POSN                    equ 0006h
PWM2DCH_PWM2DCH6_POSITION                equ 0006h
PWM2DCH_PWM2DCH6_SIZE                    equ 0001h
PWM2DCH_PWM2DCH6_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH6_MASK                    equ 0040h
PWM2DCH_PWM2DCH7_POSN                    equ 0007h
PWM2DCH_PWM2DCH7_POSITION                equ 0007h
PWM2DCH_PWM2DCH7_SIZE                    equ 0001h
PWM2DCH_PWM2DCH7_LENGTH                  equ 0001h
PWM2DCH_PWM2DCH7_MASK                    equ 0080h
PWM2DCH_PWM2DCH_POSN                     equ 0000h
PWM2DCH_PWM2DCH_POSITION                 equ 0000h
PWM2DCH_PWM2DCH_SIZE                     equ 0008h
PWM2DCH_PWM2DCH_LENGTH                   equ 0008h
PWM2DCH_PWM2DCH_MASK                     equ 00FFh

// Register: PWM2PRL
#define PWM2PRL PWM2PRL
PWM2PRL                                  equ 0DA5h
// bitfield definitions
PWM2PRL_PR_POSN                          equ 0000h
PWM2PRL_PR_POSITION                      equ 0000h
PWM2PRL_PR_SIZE                          equ 0008h
PWM2PRL_PR_LENGTH                        equ 0008h
PWM2PRL_PR_MASK                          equ 00FFh
PWM2PRL_PWM2PRL0_POSN                    equ 0000h
PWM2PRL_PWM2PRL0_POSITION                equ 0000h
PWM2PRL_PWM2PRL0_SIZE                    equ 0001h
PWM2PRL_PWM2PRL0_LENGTH                  equ 0001h
PWM2PRL_PWM2PRL0_MASK                    equ 0001h
PWM2PRL_PWM2PRL1_POSN                    equ 0001h
PWM2PRL_PWM2PRL1_POSITION                equ 0001h
PWM2PRL_PWM2PRL1_SIZE                    equ 0001h
PWM2PRL_PWM2PRL1_LENGTH                  equ 0001h
PWM2PRL_PWM2PRL1_MASK                    equ 0002h
PWM2PRL_PWM2PRL2_POSN                    equ 0002h
PWM2PRL_PWM2PRL2_POSITION                equ 0002h
PWM2PRL_PWM2PRL2_SIZE                    equ 0001h
PWM2PRL_PWM2PRL2_LENGTH                  equ 0001h
PWM2PRL_PWM2PRL2_MASK                    equ 0004h
PWM2PRL_PWM2PRL3_POSN                    equ 0003h
PWM2PRL_PWM2PRL3_POSITION                equ 0003h
PWM2PRL_PWM2PRL3_SIZE                    equ 0001h
PWM2PRL_PWM2PRL3_LENGTH                  equ 0001h
PWM2PRL_PWM2PRL3_MASK                    equ 0008h
PWM2PRL_PWM2PRL4_POSN                    equ 0004h
PWM2PRL_PWM2PRL4_POSITION                equ 0004h
PWM2PRL_PWM2PRL4_SIZE                    equ 0001h
PWM2PRL_PWM2PRL4_LENGTH                  equ 0001h
PWM2PRL_PWM2PRL4_MASK                    equ 0010h
PWM2PRL_PWM2PRL5_POSN                    equ 0005h
PWM2PRL_PWM2PRL5_POSITION                equ 0005h
PWM2PRL_PWM2PRL5_SIZE                    equ 0001h
PWM2PRL_PWM2PRL5_LENGTH                  equ 0001h
PWM2PRL_PWM2PRL5_MASK                    equ 0020h
PWM2PRL_PWM2PRL6_POSN                    equ 0006h
PWM2PRL_PWM2PRL6_POSITION                equ 0006h
PWM2PRL_PWM2PRL6_SIZE                    equ 0001h
PWM2PRL_PWM2PRL6_LENGTH                  equ 0001h
PWM2PRL_PWM2PRL6_MASK                    equ 0040h
PWM2PRL_PWM2PRL7_POSN                    equ 0007h
PWM2PRL_PWM2PRL7_POSITION                equ 0007h
PWM2PRL_PWM2PRL7_SIZE                    equ 0001h
PWM2PRL_PWM2PRL7_LENGTH                  equ 0001h
PWM2PRL_PWM2PRL7_MASK                    equ 0080h
PWM2PRL_PWM2PRL_POSN                     equ 0000h
PWM2PRL_PWM2PRL_POSITION                 equ 0000h
PWM2PRL_PWM2PRL_SIZE                     equ 0008h
PWM2PRL_PWM2PRL_LENGTH                   equ 0008h
PWM2PRL_PWM2PRL_MASK                     equ 00FFh

// Register: PWM2PRH
#define PWM2PRH PWM2PRH
PWM2PRH                                  equ 0DA6h
// bitfield definitions
PWM2PRH_PR_POSN                          equ 0000h
PWM2PRH_PR_POSITION                      equ 0000h
PWM2PRH_PR_SIZE                          equ 0008h
PWM2PRH_PR_LENGTH                        equ 0008h
PWM2PRH_PR_MASK                          equ 00FFh
PWM2PRH_PWM2PRH0_POSN                    equ 0000h
PWM2PRH_PWM2PRH0_POSITION                equ 0000h
PWM2PRH_PWM2PRH0_SIZE                    equ 0001h
PWM2PRH_PWM2PRH0_LENGTH                  equ 0001h
PWM2PRH_PWM2PRH0_MASK                    equ 0001h
PWM2PRH_PWM2PRH1_POSN                    equ 0001h
PWM2PRH_PWM2PRH1_POSITION                equ 0001h
PWM2PRH_PWM2PRH1_SIZE                    equ 0001h
PWM2PRH_PWM2PRH1_LENGTH                  equ 0001h
PWM2PRH_PWM2PRH1_MASK                    equ 0002h
PWM2PRH_PWM2PRH2_POSN                    equ 0002h
PWM2PRH_PWM2PRH2_POSITION                equ 0002h
PWM2PRH_PWM2PRH2_SIZE                    equ 0001h
PWM2PRH_PWM2PRH2_LENGTH                  equ 0001h
PWM2PRH_PWM2PRH2_MASK                    equ 0004h
PWM2PRH_PWM2PRH3_POSN                    equ 0003h
PWM2PRH_PWM2PRH3_POSITION                equ 0003h
PWM2PRH_PWM2PRH3_SIZE                    equ 0001h
PWM2PRH_PWM2PRH3_LENGTH                  equ 0001h
PWM2PRH_PWM2PRH3_MASK                    equ 0008h
PWM2PRH_PWM2PRH4_POSN                    equ 0004h
PWM2PRH_PWM2PRH4_POSITION                equ 0004h
PWM2PRH_PWM2PRH4_SIZE                    equ 0001h
PWM2PRH_PWM2PRH4_LENGTH                  equ 0001h
PWM2PRH_PWM2PRH4_MASK                    equ 0010h
PWM2PRH_PWM2PRH5_POSN                    equ 0005h
PWM2PRH_PWM2PRH5_POSITION                equ 0005h
PWM2PRH_PWM2PRH5_SIZE                    equ 0001h
PWM2PRH_PWM2PRH5_LENGTH                  equ 0001h
PWM2PRH_PWM2PRH5_MASK                    equ 0020h
PWM2PRH_PWM2PRH6_POSN                    equ 0006h
PWM2PRH_PWM2PRH6_POSITION                equ 0006h
PWM2PRH_PWM2PRH6_SIZE                    equ 0001h
PWM2PRH_PWM2PRH6_LENGTH                  equ 0001h
PWM2PRH_PWM2PRH6_MASK                    equ 0040h
PWM2PRH_PWM2PRH7_POSN                    equ 0007h
PWM2PRH_PWM2PRH7_POSITION                equ 0007h
PWM2PRH_PWM2PRH7_SIZE                    equ 0001h
PWM2PRH_PWM2PRH7_LENGTH                  equ 0001h
PWM2PRH_PWM2PRH7_MASK                    equ 0080h
PWM2PRH_PWM2PRH_POSN                     equ 0000h
PWM2PRH_PWM2PRH_POSITION                 equ 0000h
PWM2PRH_PWM2PRH_SIZE                     equ 0008h
PWM2PRH_PWM2PRH_LENGTH                   equ 0008h
PWM2PRH_PWM2PRH_MASK                     equ 00FFh

// Register: PWM2OFL
#define PWM2OFL PWM2OFL
PWM2OFL                                  equ 0DA7h
// bitfield definitions
PWM2OFL_OF_POSN                          equ 0000h
PWM2OFL_OF_POSITION                      equ 0000h
PWM2OFL_OF_SIZE                          equ 0008h
PWM2OFL_OF_LENGTH                        equ 0008h
PWM2OFL_OF_MASK                          equ 00FFh
PWM2OFL_PWM2OFL0_POSN                    equ 0000h
PWM2OFL_PWM2OFL0_POSITION                equ 0000h
PWM2OFL_PWM2OFL0_SIZE                    equ 0001h
PWM2OFL_PWM2OFL0_LENGTH                  equ 0001h
PWM2OFL_PWM2OFL0_MASK                    equ 0001h
PWM2OFL_PWM2OFL1_POSN                    equ 0001h
PWM2OFL_PWM2OFL1_POSITION                equ 0001h
PWM2OFL_PWM2OFL1_SIZE                    equ 0001h
PWM2OFL_PWM2OFL1_LENGTH                  equ 0001h
PWM2OFL_PWM2OFL1_MASK                    equ 0002h
PWM2OFL_PWM2OFL2_POSN                    equ 0002h
PWM2OFL_PWM2OFL2_POSITION                equ 0002h
PWM2OFL_PWM2OFL2_SIZE                    equ 0001h
PWM2OFL_PWM2OFL2_LENGTH                  equ 0001h
PWM2OFL_PWM2OFL2_MASK                    equ 0004h
PWM2OFL_PWM2OFL3_POSN                    equ 0003h
PWM2OFL_PWM2OFL3_POSITION                equ 0003h
PWM2OFL_PWM2OFL3_SIZE                    equ 0001h
PWM2OFL_PWM2OFL3_LENGTH                  equ 0001h
PWM2OFL_PWM2OFL3_MASK                    equ 0008h
PWM2OFL_PWM2OFL4_POSN                    equ 0004h
PWM2OFL_PWM2OFL4_POSITION                equ 0004h
PWM2OFL_PWM2OFL4_SIZE                    equ 0001h
PWM2OFL_PWM2OFL4_LENGTH                  equ 0001h
PWM2OFL_PWM2OFL4_MASK                    equ 0010h
PWM2OFL_PWM2OFL5_POSN                    equ 0005h
PWM2OFL_PWM2OFL5_POSITION                equ 0005h
PWM2OFL_PWM2OFL5_SIZE                    equ 0001h
PWM2OFL_PWM2OFL5_LENGTH                  equ 0001h
PWM2OFL_PWM2OFL5_MASK                    equ 0020h
PWM2OFL_PWM2OFL6_POSN                    equ 0006h
PWM2OFL_PWM2OFL6_POSITION                equ 0006h
PWM2OFL_PWM2OFL6_SIZE                    equ 0001h
PWM2OFL_PWM2OFL6_LENGTH                  equ 0001h
PWM2OFL_PWM2OFL6_MASK                    equ 0040h
PWM2OFL_PWM2OFL7_POSN                    equ 0007h
PWM2OFL_PWM2OFL7_POSITION                equ 0007h
PWM2OFL_PWM2OFL7_SIZE                    equ 0001h
PWM2OFL_PWM2OFL7_LENGTH                  equ 0001h
PWM2OFL_PWM2OFL7_MASK                    equ 0080h
PWM2OFL_PWM2OFL_POSN                     equ 0000h
PWM2OFL_PWM2OFL_POSITION                 equ 0000h
PWM2OFL_PWM2OFL_SIZE                     equ 0008h
PWM2OFL_PWM2OFL_LENGTH                   equ 0008h
PWM2OFL_PWM2OFL_MASK                     equ 00FFh

// Register: PWM2OFH
#define PWM2OFH PWM2OFH
PWM2OFH                                  equ 0DA8h
// bitfield definitions
PWM2OFH_OF_POSN                          equ 0000h
PWM2OFH_OF_POSITION                      equ 0000h
PWM2OFH_OF_SIZE                          equ 0008h
PWM2OFH_OF_LENGTH                        equ 0008h
PWM2OFH_OF_MASK                          equ 00FFh
PWM2OFH_PWM2OFH0_POSN                    equ 0000h
PWM2OFH_PWM2OFH0_POSITION                equ 0000h
PWM2OFH_PWM2OFH0_SIZE                    equ 0001h
PWM2OFH_PWM2OFH0_LENGTH                  equ 0001h
PWM2OFH_PWM2OFH0_MASK                    equ 0001h
PWM2OFH_PWM2OFH1_POSN                    equ 0001h
PWM2OFH_PWM2OFH1_POSITION                equ 0001h
PWM2OFH_PWM2OFH1_SIZE                    equ 0001h
PWM2OFH_PWM2OFH1_LENGTH                  equ 0001h
PWM2OFH_PWM2OFH1_MASK                    equ 0002h
PWM2OFH_PWM2OFH2_POSN                    equ 0002h
PWM2OFH_PWM2OFH2_POSITION                equ 0002h
PWM2OFH_PWM2OFH2_SIZE                    equ 0001h
PWM2OFH_PWM2OFH2_LENGTH                  equ 0001h
PWM2OFH_PWM2OFH2_MASK                    equ 0004h
PWM2OFH_PWM2OFH3_POSN                    equ 0003h
PWM2OFH_PWM2OFH3_POSITION                equ 0003h
PWM2OFH_PWM2OFH3_SIZE                    equ 0001h
PWM2OFH_PWM2OFH3_LENGTH                  equ 0001h
PWM2OFH_PWM2OFH3_MASK                    equ 0008h
PWM2OFH_PWM2OFH4_POSN                    equ 0004h
PWM2OFH_PWM2OFH4_POSITION                equ 0004h
PWM2OFH_PWM2OFH4_SIZE                    equ 0001h
PWM2OFH_PWM2OFH4_LENGTH                  equ 0001h
PWM2OFH_PWM2OFH4_MASK                    equ 0010h
PWM2OFH_PWM2OFH5_POSN                    equ 0005h
PWM2OFH_PWM2OFH5_POSITION                equ 0005h
PWM2OFH_PWM2OFH5_SIZE                    equ 0001h
PWM2OFH_PWM2OFH5_LENGTH                  equ 0001h
PWM2OFH_PWM2OFH5_MASK                    equ 0020h
PWM2OFH_PWM2OFH6_POSN                    equ 0006h
PWM2OFH_PWM2OFH6_POSITION                equ 0006h
PWM2OFH_PWM2OFH6_SIZE                    equ 0001h
PWM2OFH_PWM2OFH6_LENGTH                  equ 0001h
PWM2OFH_PWM2OFH6_MASK                    equ 0040h
PWM2OFH_PWM2OFH7_POSN                    equ 0007h
PWM2OFH_PWM2OFH7_POSITION                equ 0007h
PWM2OFH_PWM2OFH7_SIZE                    equ 0001h
PWM2OFH_PWM2OFH7_LENGTH                  equ 0001h
PWM2OFH_PWM2OFH7_MASK                    equ 0080h
PWM2OFH_PWM2OFH_POSN                     equ 0000h
PWM2OFH_PWM2OFH_POSITION                 equ 0000h
PWM2OFH_PWM2OFH_SIZE                     equ 0008h
PWM2OFH_PWM2OFH_LENGTH                   equ 0008h
PWM2OFH_PWM2OFH_MASK                     equ 00FFh

// Register: PWM2TMRL
#define PWM2TMRL PWM2TMRL
PWM2TMRL                                 equ 0DA9h
// bitfield definitions
PWM2TMRL_TMR_POSN                        equ 0000h
PWM2TMRL_TMR_POSITION                    equ 0000h
PWM2TMRL_TMR_SIZE                        equ 0008h
PWM2TMRL_TMR_LENGTH                      equ 0008h
PWM2TMRL_TMR_MASK                        equ 00FFh
PWM2TMRL_PWM2TMRL0_POSN                  equ 0000h
PWM2TMRL_PWM2TMRL0_POSITION              equ 0000h
PWM2TMRL_PWM2TMRL0_SIZE                  equ 0001h
PWM2TMRL_PWM2TMRL0_LENGTH                equ 0001h
PWM2TMRL_PWM2TMRL0_MASK                  equ 0001h
PWM2TMRL_PWM2TMRL1_POSN                  equ 0001h
PWM2TMRL_PWM2TMRL1_POSITION              equ 0001h
PWM2TMRL_PWM2TMRL1_SIZE                  equ 0001h
PWM2TMRL_PWM2TMRL1_LENGTH                equ 0001h
PWM2TMRL_PWM2TMRL1_MASK                  equ 0002h
PWM2TMRL_PWM2TMRL2_POSN                  equ 0002h
PWM2TMRL_PWM2TMRL2_POSITION              equ 0002h
PWM2TMRL_PWM2TMRL2_SIZE                  equ 0001h
PWM2TMRL_PWM2TMRL2_LENGTH                equ 0001h
PWM2TMRL_PWM2TMRL2_MASK                  equ 0004h
PWM2TMRL_PWM2TMRL3_POSN                  equ 0003h
PWM2TMRL_PWM2TMRL3_POSITION              equ 0003h
PWM2TMRL_PWM2TMRL3_SIZE                  equ 0001h
PWM2TMRL_PWM2TMRL3_LENGTH                equ 0001h
PWM2TMRL_PWM2TMRL3_MASK                  equ 0008h
PWM2TMRL_PWM2TMRL4_POSN                  equ 0004h
PWM2TMRL_PWM2TMRL4_POSITION              equ 0004h
PWM2TMRL_PWM2TMRL4_SIZE                  equ 0001h
PWM2TMRL_PWM2TMRL4_LENGTH                equ 0001h
PWM2TMRL_PWM2TMRL4_MASK                  equ 0010h
PWM2TMRL_PWM2TMRL5_POSN                  equ 0005h
PWM2TMRL_PWM2TMRL5_POSITION              equ 0005h
PWM2TMRL_PWM2TMRL5_SIZE                  equ 0001h
PWM2TMRL_PWM2TMRL5_LENGTH                equ 0001h
PWM2TMRL_PWM2TMRL5_MASK                  equ 0020h
PWM2TMRL_PWM2TMRL6_POSN                  equ 0006h
PWM2TMRL_PWM2TMRL6_POSITION              equ 0006h
PWM2TMRL_PWM2TMRL6_SIZE                  equ 0001h
PWM2TMRL_PWM2TMRL6_LENGTH                equ 0001h
PWM2TMRL_PWM2TMRL6_MASK                  equ 0040h
PWM2TMRL_PWM2TMRL7_POSN                  equ 0007h
PWM2TMRL_PWM2TMRL7_POSITION              equ 0007h
PWM2TMRL_PWM2TMRL7_SIZE                  equ 0001h
PWM2TMRL_PWM2TMRL7_LENGTH                equ 0001h
PWM2TMRL_PWM2TMRL7_MASK                  equ 0080h
PWM2TMRL_PWM2TMRL_POSN                   equ 0000h
PWM2TMRL_PWM2TMRL_POSITION               equ 0000h
PWM2TMRL_PWM2TMRL_SIZE                   equ 0008h
PWM2TMRL_PWM2TMRL_LENGTH                 equ 0008h
PWM2TMRL_PWM2TMRL_MASK                   equ 00FFh

// Register: PWM2TMRH
#define PWM2TMRH PWM2TMRH
PWM2TMRH                                 equ 0DAAh
// bitfield definitions
PWM2TMRH_TMR_POSN                        equ 0000h
PWM2TMRH_TMR_POSITION                    equ 0000h
PWM2TMRH_TMR_SIZE                        equ 0008h
PWM2TMRH_TMR_LENGTH                      equ 0008h
PWM2TMRH_TMR_MASK                        equ 00FFh
PWM2TMRH_PWM2TMRH0_POSN                  equ 0000h
PWM2TMRH_PWM2TMRH0_POSITION              equ 0000h
PWM2TMRH_PWM2TMRH0_SIZE                  equ 0001h
PWM2TMRH_PWM2TMRH0_LENGTH                equ 0001h
PWM2TMRH_PWM2TMRH0_MASK                  equ 0001h
PWM2TMRH_PWM2TMRH1_POSN                  equ 0001h
PWM2TMRH_PWM2TMRH1_POSITION              equ 0001h
PWM2TMRH_PWM2TMRH1_SIZE                  equ 0001h
PWM2TMRH_PWM2TMRH1_LENGTH                equ 0001h
PWM2TMRH_PWM2TMRH1_MASK                  equ 0002h
PWM2TMRH_PWM2TMRH2_POSN                  equ 0002h
PWM2TMRH_PWM2TMRH2_POSITION              equ 0002h
PWM2TMRH_PWM2TMRH2_SIZE                  equ 0001h
PWM2TMRH_PWM2TMRH2_LENGTH                equ 0001h
PWM2TMRH_PWM2TMRH2_MASK                  equ 0004h
PWM2TMRH_PWM2TMRH3_POSN                  equ 0003h
PWM2TMRH_PWM2TMRH3_POSITION              equ 0003h
PWM2TMRH_PWM2TMRH3_SIZE                  equ 0001h
PWM2TMRH_PWM2TMRH3_LENGTH                equ 0001h
PWM2TMRH_PWM2TMRH3_MASK                  equ 0008h
PWM2TMRH_PWM2TMRH4_POSN                  equ 0004h
PWM2TMRH_PWM2TMRH4_POSITION              equ 0004h
PWM2TMRH_PWM2TMRH4_SIZE                  equ 0001h
PWM2TMRH_PWM2TMRH4_LENGTH                equ 0001h
PWM2TMRH_PWM2TMRH4_MASK                  equ 0010h
PWM2TMRH_PWM2TMRH5_POSN                  equ 0005h
PWM2TMRH_PWM2TMRH5_POSITION              equ 0005h
PWM2TMRH_PWM2TMRH5_SIZE                  equ 0001h
PWM2TMRH_PWM2TMRH5_LENGTH                equ 0001h
PWM2TMRH_PWM2TMRH5_MASK                  equ 0020h
PWM2TMRH_PWM2TMRH6_POSN                  equ 0006h
PWM2TMRH_PWM2TMRH6_POSITION              equ 0006h
PWM2TMRH_PWM2TMRH6_SIZE                  equ 0001h
PWM2TMRH_PWM2TMRH6_LENGTH                equ 0001h
PWM2TMRH_PWM2TMRH6_MASK                  equ 0040h
PWM2TMRH_PWM2TMRH7_POSN                  equ 0007h
PWM2TMRH_PWM2TMRH7_POSITION              equ 0007h
PWM2TMRH_PWM2TMRH7_SIZE                  equ 0001h
PWM2TMRH_PWM2TMRH7_LENGTH                equ 0001h
PWM2TMRH_PWM2TMRH7_MASK                  equ 0080h
PWM2TMRH_PWM2TMRH_POSN                   equ 0000h
PWM2TMRH_PWM2TMRH_POSITION               equ 0000h
PWM2TMRH_PWM2TMRH_SIZE                   equ 0008h
PWM2TMRH_PWM2TMRH_LENGTH                 equ 0008h
PWM2TMRH_PWM2TMRH_MASK                   equ 00FFh

// Register: PWM2CON
#define PWM2CON PWM2CON
PWM2CON                                  equ 0DABh
// bitfield definitions
PWM2CON_MODE_POSN                        equ 0002h
PWM2CON_MODE_POSITION                    equ 0002h
PWM2CON_MODE_SIZE                        equ 0002h
PWM2CON_MODE_LENGTH                      equ 0002h
PWM2CON_MODE_MASK                        equ 000Ch
PWM2CON_POL_POSN                         equ 0004h
PWM2CON_POL_POSITION                     equ 0004h
PWM2CON_POL_SIZE                         equ 0001h
PWM2CON_POL_LENGTH                       equ 0001h
PWM2CON_POL_MASK                         equ 0010h
PWM2CON_OUT_POSN                         equ 0005h
PWM2CON_OUT_POSITION                     equ 0005h
PWM2CON_OUT_SIZE                         equ 0001h
PWM2CON_OUT_LENGTH                       equ 0001h
PWM2CON_OUT_MASK                         equ 0020h
PWM2CON_OE_POSN                          equ 0006h
PWM2CON_OE_POSITION                      equ 0006h
PWM2CON_OE_SIZE                          equ 0001h
PWM2CON_OE_LENGTH                        equ 0001h
PWM2CON_OE_MASK                          equ 0040h
PWM2CON_EN_POSN                          equ 0007h
PWM2CON_EN_POSITION                      equ 0007h
PWM2CON_EN_SIZE                          equ 0001h
PWM2CON_EN_LENGTH                        equ 0001h
PWM2CON_EN_MASK                          equ 0080h
PWM2CON_PWM2MODE0_POSN                   equ 0002h
PWM2CON_PWM2MODE0_POSITION               equ 0002h
PWM2CON_PWM2MODE0_SIZE                   equ 0001h
PWM2CON_PWM2MODE0_LENGTH                 equ 0001h
PWM2CON_PWM2MODE0_MASK                   equ 0004h
PWM2CON_PWM2MODE1_POSN                   equ 0003h
PWM2CON_PWM2MODE1_POSITION               equ 0003h
PWM2CON_PWM2MODE1_SIZE                   equ 0001h
PWM2CON_PWM2MODE1_LENGTH                 equ 0001h
PWM2CON_PWM2MODE1_MASK                   equ 0008h
PWM2CON_PWM2MODE_POSN                    equ 0002h
PWM2CON_PWM2MODE_POSITION                equ 0002h
PWM2CON_PWM2MODE_SIZE                    equ 0002h
PWM2CON_PWM2MODE_LENGTH                  equ 0002h
PWM2CON_PWM2MODE_MASK                    equ 000Ch
PWM2CON_PWM2POL_POSN                     equ 0004h
PWM2CON_PWM2POL_POSITION                 equ 0004h
PWM2CON_PWM2POL_SIZE                     equ 0001h
PWM2CON_PWM2POL_LENGTH                   equ 0001h
PWM2CON_PWM2POL_MASK                     equ 0010h
PWM2CON_PWM2OUT_POSN                     equ 0005h
PWM2CON_PWM2OUT_POSITION                 equ 0005h
PWM2CON_PWM2OUT_SIZE                     equ 0001h
PWM2CON_PWM2OUT_LENGTH                   equ 0001h
PWM2CON_PWM2OUT_MASK                     equ 0020h
PWM2CON_PWM2OE_POSN                      equ 0006h
PWM2CON_PWM2OE_POSITION                  equ 0006h
PWM2CON_PWM2OE_SIZE                      equ 0001h
PWM2CON_PWM2OE_LENGTH                    equ 0001h
PWM2CON_PWM2OE_MASK                      equ 0040h
PWM2CON_PWM2EN_POSN                      equ 0007h
PWM2CON_PWM2EN_POSITION                  equ 0007h
PWM2CON_PWM2EN_SIZE                      equ 0001h
PWM2CON_PWM2EN_LENGTH                    equ 0001h
PWM2CON_PWM2EN_MASK                      equ 0080h
PWM2CON_MODE0_POSN                       equ 0002h
PWM2CON_MODE0_POSITION                   equ 0002h
PWM2CON_MODE0_SIZE                       equ 0001h
PWM2CON_MODE0_LENGTH                     equ 0001h
PWM2CON_MODE0_MASK                       equ 0004h
PWM2CON_MODE1_POSN                       equ 0003h
PWM2CON_MODE1_POSITION                   equ 0003h
PWM2CON_MODE1_SIZE                       equ 0001h
PWM2CON_MODE1_LENGTH                     equ 0001h
PWM2CON_MODE1_MASK                       equ 0008h

// Register: PWM2INTE
#define PWM2INTE PWM2INTE
PWM2INTE                                 equ 0DACh
// bitfield definitions
PWM2INTE_PRIE_POSN                       equ 0000h
PWM2INTE_PRIE_POSITION                   equ 0000h
PWM2INTE_PRIE_SIZE                       equ 0001h
PWM2INTE_PRIE_LENGTH                     equ 0001h
PWM2INTE_PRIE_MASK                       equ 0001h
PWM2INTE_DCIE_POSN                       equ 0001h
PWM2INTE_DCIE_POSITION                   equ 0001h
PWM2INTE_DCIE_SIZE                       equ 0001h
PWM2INTE_DCIE_LENGTH                     equ 0001h
PWM2INTE_DCIE_MASK                       equ 0002h
PWM2INTE_PHIE_POSN                       equ 0002h
PWM2INTE_PHIE_POSITION                   equ 0002h
PWM2INTE_PHIE_SIZE                       equ 0001h
PWM2INTE_PHIE_LENGTH                     equ 0001h
PWM2INTE_PHIE_MASK                       equ 0004h
PWM2INTE_OFIE_POSN                       equ 0003h
PWM2INTE_OFIE_POSITION                   equ 0003h
PWM2INTE_OFIE_SIZE                       equ 0001h
PWM2INTE_OFIE_LENGTH                     equ 0001h
PWM2INTE_OFIE_MASK                       equ 0008h
PWM2INTE_PWM2PRIE_POSN                   equ 0000h
PWM2INTE_PWM2PRIE_POSITION               equ 0000h
PWM2INTE_PWM2PRIE_SIZE                   equ 0001h
PWM2INTE_PWM2PRIE_LENGTH                 equ 0001h
PWM2INTE_PWM2PRIE_MASK                   equ 0001h
PWM2INTE_PWM2DCIE_POSN                   equ 0001h
PWM2INTE_PWM2DCIE_POSITION               equ 0001h
PWM2INTE_PWM2DCIE_SIZE                   equ 0001h
PWM2INTE_PWM2DCIE_LENGTH                 equ 0001h
PWM2INTE_PWM2DCIE_MASK                   equ 0002h
PWM2INTE_PWM2PHIE_POSN                   equ 0002h
PWM2INTE_PWM2PHIE_POSITION               equ 0002h
PWM2INTE_PWM2PHIE_SIZE                   equ 0001h
PWM2INTE_PWM2PHIE_LENGTH                 equ 0001h
PWM2INTE_PWM2PHIE_MASK                   equ 0004h
PWM2INTE_PWM2OFIE_POSN                   equ 0003h
PWM2INTE_PWM2OFIE_POSITION               equ 0003h
PWM2INTE_PWM2OFIE_SIZE                   equ 0001h
PWM2INTE_PWM2OFIE_LENGTH                 equ 0001h
PWM2INTE_PWM2OFIE_MASK                   equ 0008h

// Register: PWM2INTF
#define PWM2INTF PWM2INTF
PWM2INTF                                 equ 0DADh
// bitfield definitions
PWM2INTF_PRIF_POSN                       equ 0000h
PWM2INTF_PRIF_POSITION                   equ 0000h
PWM2INTF_PRIF_SIZE                       equ 0001h
PWM2INTF_PRIF_LENGTH                     equ 0001h
PWM2INTF_PRIF_MASK                       equ 0001h
PWM2INTF_DCIF_POSN                       equ 0001h
PWM2INTF_DCIF_POSITION                   equ 0001h
PWM2INTF_DCIF_SIZE                       equ 0001h
PWM2INTF_DCIF_LENGTH                     equ 0001h
PWM2INTF_DCIF_MASK                       equ 0002h
PWM2INTF_PHIF_POSN                       equ 0002h
PWM2INTF_PHIF_POSITION                   equ 0002h
PWM2INTF_PHIF_SIZE                       equ 0001h
PWM2INTF_PHIF_LENGTH                     equ 0001h
PWM2INTF_PHIF_MASK                       equ 0004h
PWM2INTF_OFIF_POSN                       equ 0003h
PWM2INTF_OFIF_POSITION                   equ 0003h
PWM2INTF_OFIF_SIZE                       equ 0001h
PWM2INTF_OFIF_LENGTH                     equ 0001h
PWM2INTF_OFIF_MASK                       equ 0008h
PWM2INTF_PWM2PRIF_POSN                   equ 0000h
PWM2INTF_PWM2PRIF_POSITION               equ 0000h
PWM2INTF_PWM2PRIF_SIZE                   equ 0001h
PWM2INTF_PWM2PRIF_LENGTH                 equ 0001h
PWM2INTF_PWM2PRIF_MASK                   equ 0001h
PWM2INTF_PWM2DCIF_POSN                   equ 0001h
PWM2INTF_PWM2DCIF_POSITION               equ 0001h
PWM2INTF_PWM2DCIF_SIZE                   equ 0001h
PWM2INTF_PWM2DCIF_LENGTH                 equ 0001h
PWM2INTF_PWM2DCIF_MASK                   equ 0002h
PWM2INTF_PWM2PHIF_POSN                   equ 0002h
PWM2INTF_PWM2PHIF_POSITION               equ 0002h
PWM2INTF_PWM2PHIF_SIZE                   equ 0001h
PWM2INTF_PWM2PHIF_LENGTH                 equ 0001h
PWM2INTF_PWM2PHIF_MASK                   equ 0004h
PWM2INTF_PWM2OFIF_POSN                   equ 0003h
PWM2INTF_PWM2OFIF_POSITION               equ 0003h
PWM2INTF_PWM2OFIF_SIZE                   equ 0001h
PWM2INTF_PWM2OFIF_LENGTH                 equ 0001h
PWM2INTF_PWM2OFIF_MASK                   equ 0008h

// Register: PWM2CLKCON
#define PWM2CLKCON PWM2CLKCON
PWM2CLKCON                               equ 0DAEh
// bitfield definitions
PWM2CLKCON_CS_POSN                       equ 0000h
PWM2CLKCON_CS_POSITION                   equ 0000h
PWM2CLKCON_CS_SIZE                       equ 0002h
PWM2CLKCON_CS_LENGTH                     equ 0002h
PWM2CLKCON_CS_MASK                       equ 0003h
PWM2CLKCON_PS_POSN                       equ 0004h
PWM2CLKCON_PS_POSITION                   equ 0004h
PWM2CLKCON_PS_SIZE                       equ 0003h
PWM2CLKCON_PS_LENGTH                     equ 0003h
PWM2CLKCON_PS_MASK                       equ 0070h
PWM2CLKCON_PWM2CS0_POSN                  equ 0000h
PWM2CLKCON_PWM2CS0_POSITION              equ 0000h
PWM2CLKCON_PWM2CS0_SIZE                  equ 0001h
PWM2CLKCON_PWM2CS0_LENGTH                equ 0001h
PWM2CLKCON_PWM2CS0_MASK                  equ 0001h
PWM2CLKCON_PWM2CS1_POSN                  equ 0001h
PWM2CLKCON_PWM2CS1_POSITION              equ 0001h
PWM2CLKCON_PWM2CS1_SIZE                  equ 0001h
PWM2CLKCON_PWM2CS1_LENGTH                equ 0001h
PWM2CLKCON_PWM2CS1_MASK                  equ 0002h
PWM2CLKCON_PWM2PS0_POSN                  equ 0004h
PWM2CLKCON_PWM2PS0_POSITION              equ 0004h
PWM2CLKCON_PWM2PS0_SIZE                  equ 0001h
PWM2CLKCON_PWM2PS0_LENGTH                equ 0001h
PWM2CLKCON_PWM2PS0_MASK                  equ 0010h
PWM2CLKCON_PWM2PS1_POSN                  equ 0005h
PWM2CLKCON_PWM2PS1_POSITION              equ 0005h
PWM2CLKCON_PWM2PS1_SIZE                  equ 0001h
PWM2CLKCON_PWM2PS1_LENGTH                equ 0001h
PWM2CLKCON_PWM2PS1_MASK                  equ 0020h
PWM2CLKCON_PWM2PS2_POSN                  equ 0006h
PWM2CLKCON_PWM2PS2_POSITION              equ 0006h
PWM2CLKCON_PWM2PS2_SIZE                  equ 0001h
PWM2CLKCON_PWM2PS2_LENGTH                equ 0001h
PWM2CLKCON_PWM2PS2_MASK                  equ 0040h
PWM2CLKCON_PWM2CS_POSN                   equ 0000h
PWM2CLKCON_PWM2CS_POSITION               equ 0000h
PWM2CLKCON_PWM2CS_SIZE                   equ 0003h
PWM2CLKCON_PWM2CS_LENGTH                 equ 0003h
PWM2CLKCON_PWM2CS_MASK                   equ 0007h
PWM2CLKCON_PWM2PS_POSN                   equ 0004h
PWM2CLKCON_PWM2PS_POSITION               equ 0004h
PWM2CLKCON_PWM2PS_SIZE                   equ 0003h
PWM2CLKCON_PWM2PS_LENGTH                 equ 0003h
PWM2CLKCON_PWM2PS_MASK                   equ 0070h
PWM2CLKCON_CS0_POSN                      equ 0000h
PWM2CLKCON_CS0_POSITION                  equ 0000h
PWM2CLKCON_CS0_SIZE                      equ 0001h
PWM2CLKCON_CS0_LENGTH                    equ 0001h
PWM2CLKCON_CS0_MASK                      equ 0001h
PWM2CLKCON_CS1_POSN                      equ 0001h
PWM2CLKCON_CS1_POSITION                  equ 0001h
PWM2CLKCON_CS1_SIZE                      equ 0001h
PWM2CLKCON_CS1_LENGTH                    equ 0001h
PWM2CLKCON_CS1_MASK                      equ 0002h
PWM2CLKCON_PS0_POSN                      equ 0004h
PWM2CLKCON_PS0_POSITION                  equ 0004h
PWM2CLKCON_PS0_SIZE                      equ 0001h
PWM2CLKCON_PS0_LENGTH                    equ 0001h
PWM2CLKCON_PS0_MASK                      equ 0010h
PWM2CLKCON_PS1_POSN                      equ 0005h
PWM2CLKCON_PS1_POSITION                  equ 0005h
PWM2CLKCON_PS1_SIZE                      equ 0001h
PWM2CLKCON_PS1_LENGTH                    equ 0001h
PWM2CLKCON_PS1_MASK                      equ 0020h
PWM2CLKCON_PS2_POSN                      equ 0006h
PWM2CLKCON_PS2_POSITION                  equ 0006h
PWM2CLKCON_PS2_SIZE                      equ 0001h
PWM2CLKCON_PS2_LENGTH                    equ 0001h
PWM2CLKCON_PS2_MASK                      equ 0040h

// Register: PWM2LDCON
#define PWM2LDCON PWM2LDCON
PWM2LDCON                                equ 0DAFh
// bitfield definitions
PWM2LDCON_LDS_POSN                       equ 0000h
PWM2LDCON_LDS_POSITION                   equ 0000h
PWM2LDCON_LDS_SIZE                       equ 0002h
PWM2LDCON_LDS_LENGTH                     equ 0002h
PWM2LDCON_LDS_MASK                       equ 0003h
PWM2LDCON_LDT_POSN                       equ 0006h
PWM2LDCON_LDT_POSITION                   equ 0006h
PWM2LDCON_LDT_SIZE                       equ 0001h
PWM2LDCON_LDT_LENGTH                     equ 0001h
PWM2LDCON_LDT_MASK                       equ 0040h
PWM2LDCON_LDA_POSN                       equ 0007h
PWM2LDCON_LDA_POSITION                   equ 0007h
PWM2LDCON_LDA_SIZE                       equ 0001h
PWM2LDCON_LDA_LENGTH                     equ 0001h
PWM2LDCON_LDA_MASK                       equ 0080h
PWM2LDCON_PWM2LDS0_POSN                  equ 0000h
PWM2LDCON_PWM2LDS0_POSITION              equ 0000h
PWM2LDCON_PWM2LDS0_SIZE                  equ 0001h
PWM2LDCON_PWM2LDS0_LENGTH                equ 0001h
PWM2LDCON_PWM2LDS0_MASK                  equ 0001h
PWM2LDCON_PWM2LDS1_POSN                  equ 0001h
PWM2LDCON_PWM2LDS1_POSITION              equ 0001h
PWM2LDCON_PWM2LDS1_SIZE                  equ 0001h
PWM2LDCON_PWM2LDS1_LENGTH                equ 0001h
PWM2LDCON_PWM2LDS1_MASK                  equ 0002h
PWM2LDCON_PWM2LDS_POSN                   equ 0000h
PWM2LDCON_PWM2LDS_POSITION               equ 0000h
PWM2LDCON_PWM2LDS_SIZE                   equ 0002h
PWM2LDCON_PWM2LDS_LENGTH                 equ 0002h
PWM2LDCON_PWM2LDS_MASK                   equ 0003h
PWM2LDCON_PWM2LDM_POSN                   equ 0006h
PWM2LDCON_PWM2LDM_POSITION               equ 0006h
PWM2LDCON_PWM2LDM_SIZE                   equ 0001h
PWM2LDCON_PWM2LDM_LENGTH                 equ 0001h
PWM2LDCON_PWM2LDM_MASK                   equ 0040h
PWM2LDCON_PWM2LD_POSN                    equ 0007h
PWM2LDCON_PWM2LD_POSITION                equ 0007h
PWM2LDCON_PWM2LD_SIZE                    equ 0001h
PWM2LDCON_PWM2LD_LENGTH                  equ 0001h
PWM2LDCON_PWM2LD_MASK                    equ 0080h
PWM2LDCON_LDS0_POSN                      equ 0000h
PWM2LDCON_LDS0_POSITION                  equ 0000h
PWM2LDCON_LDS0_SIZE                      equ 0001h
PWM2LDCON_LDS0_LENGTH                    equ 0001h
PWM2LDCON_LDS0_MASK                      equ 0001h
PWM2LDCON_LDS1_POSN                      equ 0001h
PWM2LDCON_LDS1_POSITION                  equ 0001h
PWM2LDCON_LDS1_SIZE                      equ 0001h
PWM2LDCON_LDS1_LENGTH                    equ 0001h
PWM2LDCON_LDS1_MASK                      equ 0002h

// Register: PWM2OFCON
#define PWM2OFCON PWM2OFCON
PWM2OFCON                                equ 0DB0h
// bitfield definitions
PWM2OFCON_OFS_POSN                       equ 0000h
PWM2OFCON_OFS_POSITION                   equ 0000h
PWM2OFCON_OFS_SIZE                       equ 0002h
PWM2OFCON_OFS_LENGTH                     equ 0002h
PWM2OFCON_OFS_MASK                       equ 0003h
PWM2OFCON_OFO_POSN                       equ 0004h
PWM2OFCON_OFO_POSITION                   equ 0004h
PWM2OFCON_OFO_SIZE                       equ 0001h
PWM2OFCON_OFO_LENGTH                     equ 0001h
PWM2OFCON_OFO_MASK                       equ 0010h
PWM2OFCON_OFM_POSN                       equ 0005h
PWM2OFCON_OFM_POSITION                   equ 0005h
PWM2OFCON_OFM_SIZE                       equ 0002h
PWM2OFCON_OFM_LENGTH                     equ 0002h
PWM2OFCON_OFM_MASK                       equ 0060h
PWM2OFCON_PWM2OFS0_POSN                  equ 0000h
PWM2OFCON_PWM2OFS0_POSITION              equ 0000h
PWM2OFCON_PWM2OFS0_SIZE                  equ 0001h
PWM2OFCON_PWM2OFS0_LENGTH                equ 0001h
PWM2OFCON_PWM2OFS0_MASK                  equ 0001h
PWM2OFCON_PWM2OFS1_POSN                  equ 0001h
PWM2OFCON_PWM2OFS1_POSITION              equ 0001h
PWM2OFCON_PWM2OFS1_SIZE                  equ 0001h
PWM2OFCON_PWM2OFS1_LENGTH                equ 0001h
PWM2OFCON_PWM2OFS1_MASK                  equ 0002h
PWM2OFCON_PWM2OFM0_POSN                  equ 0005h
PWM2OFCON_PWM2OFM0_POSITION              equ 0005h
PWM2OFCON_PWM2OFM0_SIZE                  equ 0001h
PWM2OFCON_PWM2OFM0_LENGTH                equ 0001h
PWM2OFCON_PWM2OFM0_MASK                  equ 0020h
PWM2OFCON_PWM2OFM1_POSN                  equ 0006h
PWM2OFCON_PWM2OFM1_POSITION              equ 0006h
PWM2OFCON_PWM2OFM1_SIZE                  equ 0001h
PWM2OFCON_PWM2OFM1_LENGTH                equ 0001h
PWM2OFCON_PWM2OFM1_MASK                  equ 0040h
PWM2OFCON_PWM2OFS_POSN                   equ 0000h
PWM2OFCON_PWM2OFS_POSITION               equ 0000h
PWM2OFCON_PWM2OFS_SIZE                   equ 0002h
PWM2OFCON_PWM2OFS_LENGTH                 equ 0002h
PWM2OFCON_PWM2OFS_MASK                   equ 0003h
PWM2OFCON_PWM2OFMC_POSN                  equ 0004h
PWM2OFCON_PWM2OFMC_POSITION              equ 0004h
PWM2OFCON_PWM2OFMC_SIZE                  equ 0001h
PWM2OFCON_PWM2OFMC_LENGTH                equ 0001h
PWM2OFCON_PWM2OFMC_MASK                  equ 0010h
PWM2OFCON_PWM2OFM_POSN                   equ 0005h
PWM2OFCON_PWM2OFM_POSITION               equ 0005h
PWM2OFCON_PWM2OFM_SIZE                   equ 0002h
PWM2OFCON_PWM2OFM_LENGTH                 equ 0002h
PWM2OFCON_PWM2OFM_MASK                   equ 0060h
PWM2OFCON_OFS0_POSN                      equ 0000h
PWM2OFCON_OFS0_POSITION                  equ 0000h
PWM2OFCON_OFS0_SIZE                      equ 0001h
PWM2OFCON_OFS0_LENGTH                    equ 0001h
PWM2OFCON_OFS0_MASK                      equ 0001h
PWM2OFCON_OFS1_POSN                      equ 0001h
PWM2OFCON_OFS1_POSITION                  equ 0001h
PWM2OFCON_OFS1_SIZE                      equ 0001h
PWM2OFCON_OFS1_LENGTH                    equ 0001h
PWM2OFCON_OFS1_MASK                      equ 0002h
PWM2OFCON_OFM0_POSN                      equ 0005h
PWM2OFCON_OFM0_POSITION                  equ 0005h
PWM2OFCON_OFM0_SIZE                      equ 0001h
PWM2OFCON_OFM0_LENGTH                    equ 0001h
PWM2OFCON_OFM0_MASK                      equ 0020h
PWM2OFCON_OFM1_POSN                      equ 0006h
PWM2OFCON_OFM1_POSITION                  equ 0006h
PWM2OFCON_OFM1_SIZE                      equ 0001h
PWM2OFCON_OFM1_LENGTH                    equ 0001h
PWM2OFCON_OFM1_MASK                      equ 0040h

// Register: PWM3PHL
#define PWM3PHL PWM3PHL
PWM3PHL                                  equ 0DB1h
// bitfield definitions
PWM3PHL_PH_POSN                          equ 0000h
PWM3PHL_PH_POSITION                      equ 0000h
PWM3PHL_PH_SIZE                          equ 0008h
PWM3PHL_PH_LENGTH                        equ 0008h
PWM3PHL_PH_MASK                          equ 00FFh
PWM3PHL_PWM3PHL0_POSN                    equ 0000h
PWM3PHL_PWM3PHL0_POSITION                equ 0000h
PWM3PHL_PWM3PHL0_SIZE                    equ 0001h
PWM3PHL_PWM3PHL0_LENGTH                  equ 0001h
PWM3PHL_PWM3PHL0_MASK                    equ 0001h
PWM3PHL_PWM3PHL1_POSN                    equ 0001h
PWM3PHL_PWM3PHL1_POSITION                equ 0001h
PWM3PHL_PWM3PHL1_SIZE                    equ 0001h
PWM3PHL_PWM3PHL1_LENGTH                  equ 0001h
PWM3PHL_PWM3PHL1_MASK                    equ 0002h
PWM3PHL_PWM3PHL2_POSN                    equ 0002h
PWM3PHL_PWM3PHL2_POSITION                equ 0002h
PWM3PHL_PWM3PHL2_SIZE                    equ 0001h
PWM3PHL_PWM3PHL2_LENGTH                  equ 0001h
PWM3PHL_PWM3PHL2_MASK                    equ 0004h
PWM3PHL_PWM3PHL3_POSN                    equ 0003h
PWM3PHL_PWM3PHL3_POSITION                equ 0003h
PWM3PHL_PWM3PHL3_SIZE                    equ 0001h
PWM3PHL_PWM3PHL3_LENGTH                  equ 0001h
PWM3PHL_PWM3PHL3_MASK                    equ 0008h
PWM3PHL_PWM3PHL4_POSN                    equ 0004h
PWM3PHL_PWM3PHL4_POSITION                equ 0004h
PWM3PHL_PWM3PHL4_SIZE                    equ 0001h
PWM3PHL_PWM3PHL4_LENGTH                  equ 0001h
PWM3PHL_PWM3PHL4_MASK                    equ 0010h
PWM3PHL_PWM3PHL5_POSN                    equ 0005h
PWM3PHL_PWM3PHL5_POSITION                equ 0005h
PWM3PHL_PWM3PHL5_SIZE                    equ 0001h
PWM3PHL_PWM3PHL5_LENGTH                  equ 0001h
PWM3PHL_PWM3PHL5_MASK                    equ 0020h
PWM3PHL_PWM3PHL6_POSN                    equ 0006h
PWM3PHL_PWM3PHL6_POSITION                equ 0006h
PWM3PHL_PWM3PHL6_SIZE                    equ 0001h
PWM3PHL_PWM3PHL6_LENGTH                  equ 0001h
PWM3PHL_PWM3PHL6_MASK                    equ 0040h
PWM3PHL_PWM3PHL7_POSN                    equ 0007h
PWM3PHL_PWM3PHL7_POSITION                equ 0007h
PWM3PHL_PWM3PHL7_SIZE                    equ 0001h
PWM3PHL_PWM3PHL7_LENGTH                  equ 0001h
PWM3PHL_PWM3PHL7_MASK                    equ 0080h
PWM3PHL_PWM3PHL_POSN                     equ 0000h
PWM3PHL_PWM3PHL_POSITION                 equ 0000h
PWM3PHL_PWM3PHL_SIZE                     equ 0008h
PWM3PHL_PWM3PHL_LENGTH                   equ 0008h
PWM3PHL_PWM3PHL_MASK                     equ 00FFh

// Register: PWM3PHH
#define PWM3PHH PWM3PHH
PWM3PHH                                  equ 0DB2h
// bitfield definitions
PWM3PHH_PH_POSN                          equ 0000h
PWM3PHH_PH_POSITION                      equ 0000h
PWM3PHH_PH_SIZE                          equ 0008h
PWM3PHH_PH_LENGTH                        equ 0008h
PWM3PHH_PH_MASK                          equ 00FFh
PWM3PHH_PWM3PHH0_POSN                    equ 0000h
PWM3PHH_PWM3PHH0_POSITION                equ 0000h
PWM3PHH_PWM3PHH0_SIZE                    equ 0001h
PWM3PHH_PWM3PHH0_LENGTH                  equ 0001h
PWM3PHH_PWM3PHH0_MASK                    equ 0001h
PWM3PHH_PWM3PHH1_POSN                    equ 0001h
PWM3PHH_PWM3PHH1_POSITION                equ 0001h
PWM3PHH_PWM3PHH1_SIZE                    equ 0001h
PWM3PHH_PWM3PHH1_LENGTH                  equ 0001h
PWM3PHH_PWM3PHH1_MASK                    equ 0002h
PWM3PHH_PWM3PHH2_POSN                    equ 0002h
PWM3PHH_PWM3PHH2_POSITION                equ 0002h
PWM3PHH_PWM3PHH2_SIZE                    equ 0001h
PWM3PHH_PWM3PHH2_LENGTH                  equ 0001h
PWM3PHH_PWM3PHH2_MASK                    equ 0004h
PWM3PHH_PWM3PHH3_POSN                    equ 0003h
PWM3PHH_PWM3PHH3_POSITION                equ 0003h
PWM3PHH_PWM3PHH3_SIZE                    equ 0001h
PWM3PHH_PWM3PHH3_LENGTH                  equ 0001h
PWM3PHH_PWM3PHH3_MASK                    equ 0008h
PWM3PHH_PWM3PHH4_POSN                    equ 0004h
PWM3PHH_PWM3PHH4_POSITION                equ 0004h
PWM3PHH_PWM3PHH4_SIZE                    equ 0001h
PWM3PHH_PWM3PHH4_LENGTH                  equ 0001h
PWM3PHH_PWM3PHH4_MASK                    equ 0010h
PWM3PHH_PWM3PHH5_POSN                    equ 0005h
PWM3PHH_PWM3PHH5_POSITION                equ 0005h
PWM3PHH_PWM3PHH5_SIZE                    equ 0001h
PWM3PHH_PWM3PHH5_LENGTH                  equ 0001h
PWM3PHH_PWM3PHH5_MASK                    equ 0020h
PWM3PHH_PWM3PHH6_POSN                    equ 0006h
PWM3PHH_PWM3PHH6_POSITION                equ 0006h
PWM3PHH_PWM3PHH6_SIZE                    equ 0001h
PWM3PHH_PWM3PHH6_LENGTH                  equ 0001h
PWM3PHH_PWM3PHH6_MASK                    equ 0040h
PWM3PHH_PWM3PHH7_POSN                    equ 0007h
PWM3PHH_PWM3PHH7_POSITION                equ 0007h
PWM3PHH_PWM3PHH7_SIZE                    equ 0001h
PWM3PHH_PWM3PHH7_LENGTH                  equ 0001h
PWM3PHH_PWM3PHH7_MASK                    equ 0080h
PWM3PHH_PWM3PHH_POSN                     equ 0000h
PWM3PHH_PWM3PHH_POSITION                 equ 0000h
PWM3PHH_PWM3PHH_SIZE                     equ 0008h
PWM3PHH_PWM3PHH_LENGTH                   equ 0008h
PWM3PHH_PWM3PHH_MASK                     equ 00FFh

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
PWM3DCL                                  equ 0DB3h
// bitfield definitions
PWM3DCL_DC_POSN                          equ 0000h
PWM3DCL_DC_POSITION                      equ 0000h
PWM3DCL_DC_SIZE                          equ 0008h
PWM3DCL_DC_LENGTH                        equ 0008h
PWM3DCL_DC_MASK                          equ 00FFh
PWM3DCL_PWM3DCL0_POSN                    equ 0000h
PWM3DCL_PWM3DCL0_POSITION                equ 0000h
PWM3DCL_PWM3DCL0_SIZE                    equ 0001h
PWM3DCL_PWM3DCL0_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL0_MASK                    equ 0001h
PWM3DCL_PWM3DCL1_POSN                    equ 0001h
PWM3DCL_PWM3DCL1_POSITION                equ 0001h
PWM3DCL_PWM3DCL1_SIZE                    equ 0001h
PWM3DCL_PWM3DCL1_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL1_MASK                    equ 0002h
PWM3DCL_PWM3DCL2_POSN                    equ 0002h
PWM3DCL_PWM3DCL2_POSITION                equ 0002h
PWM3DCL_PWM3DCL2_SIZE                    equ 0001h
PWM3DCL_PWM3DCL2_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL2_MASK                    equ 0004h
PWM3DCL_PWM3DCL3_POSN                    equ 0003h
PWM3DCL_PWM3DCL3_POSITION                equ 0003h
PWM3DCL_PWM3DCL3_SIZE                    equ 0001h
PWM3DCL_PWM3DCL3_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL3_MASK                    equ 0008h
PWM3DCL_PWM3DCL4_POSN                    equ 0004h
PWM3DCL_PWM3DCL4_POSITION                equ 0004h
PWM3DCL_PWM3DCL4_SIZE                    equ 0001h
PWM3DCL_PWM3DCL4_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL4_MASK                    equ 0010h
PWM3DCL_PWM3DCL5_POSN                    equ 0005h
PWM3DCL_PWM3DCL5_POSITION                equ 0005h
PWM3DCL_PWM3DCL5_SIZE                    equ 0001h
PWM3DCL_PWM3DCL5_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL5_MASK                    equ 0020h
PWM3DCL_PWM3DCL6_POSN                    equ 0006h
PWM3DCL_PWM3DCL6_POSITION                equ 0006h
PWM3DCL_PWM3DCL6_SIZE                    equ 0001h
PWM3DCL_PWM3DCL6_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL6_MASK                    equ 0040h
PWM3DCL_PWM3DCL7_POSN                    equ 0007h
PWM3DCL_PWM3DCL7_POSITION                equ 0007h
PWM3DCL_PWM3DCL7_SIZE                    equ 0001h
PWM3DCL_PWM3DCL7_LENGTH                  equ 0001h
PWM3DCL_PWM3DCL7_MASK                    equ 0080h
PWM3DCL_PWM3DCL_POSN                     equ 0000h
PWM3DCL_PWM3DCL_POSITION                 equ 0000h
PWM3DCL_PWM3DCL_SIZE                     equ 0008h
PWM3DCL_PWM3DCL_LENGTH                   equ 0008h
PWM3DCL_PWM3DCL_MASK                     equ 00FFh

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
PWM3DCH                                  equ 0DB4h
// bitfield definitions
PWM3DCH_DC_POSN                          equ 0000h
PWM3DCH_DC_POSITION                      equ 0000h
PWM3DCH_DC_SIZE                          equ 0008h
PWM3DCH_DC_LENGTH                        equ 0008h
PWM3DCH_DC_MASK                          equ 00FFh
PWM3DCH_PWM3DCH0_POSN                    equ 0000h
PWM3DCH_PWM3DCH0_POSITION                equ 0000h
PWM3DCH_PWM3DCH0_SIZE                    equ 0001h
PWM3DCH_PWM3DCH0_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH0_MASK                    equ 0001h
PWM3DCH_PWM3DCH1_POSN                    equ 0001h
PWM3DCH_PWM3DCH1_POSITION                equ 0001h
PWM3DCH_PWM3DCH1_SIZE                    equ 0001h
PWM3DCH_PWM3DCH1_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH1_MASK                    equ 0002h
PWM3DCH_PWM3DCH2_POSN                    equ 0002h
PWM3DCH_PWM3DCH2_POSITION                equ 0002h
PWM3DCH_PWM3DCH2_SIZE                    equ 0001h
PWM3DCH_PWM3DCH2_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH2_MASK                    equ 0004h
PWM3DCH_PWM3DCH3_POSN                    equ 0003h
PWM3DCH_PWM3DCH3_POSITION                equ 0003h
PWM3DCH_PWM3DCH3_SIZE                    equ 0001h
PWM3DCH_PWM3DCH3_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH3_MASK                    equ 0008h
PWM3DCH_PWM3DCH4_POSN                    equ 0004h
PWM3DCH_PWM3DCH4_POSITION                equ 0004h
PWM3DCH_PWM3DCH4_SIZE                    equ 0001h
PWM3DCH_PWM3DCH4_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH4_MASK                    equ 0010h
PWM3DCH_PWM3DCH5_POSN                    equ 0005h
PWM3DCH_PWM3DCH5_POSITION                equ 0005h
PWM3DCH_PWM3DCH5_SIZE                    equ 0001h
PWM3DCH_PWM3DCH5_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH5_MASK                    equ 0020h
PWM3DCH_PWM3DCH6_POSN                    equ 0006h
PWM3DCH_PWM3DCH6_POSITION                equ 0006h
PWM3DCH_PWM3DCH6_SIZE                    equ 0001h
PWM3DCH_PWM3DCH6_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH6_MASK                    equ 0040h
PWM3DCH_PWM3DCH7_POSN                    equ 0007h
PWM3DCH_PWM3DCH7_POSITION                equ 0007h
PWM3DCH_PWM3DCH7_SIZE                    equ 0001h
PWM3DCH_PWM3DCH7_LENGTH                  equ 0001h
PWM3DCH_PWM3DCH7_MASK                    equ 0080h
PWM3DCH_PWM3DCH_POSN                     equ 0000h
PWM3DCH_PWM3DCH_POSITION                 equ 0000h
PWM3DCH_PWM3DCH_SIZE                     equ 0008h
PWM3DCH_PWM3DCH_LENGTH                   equ 0008h
PWM3DCH_PWM3DCH_MASK                     equ 00FFh

// Register: PWM3PRL
#define PWM3PRL PWM3PRL
PWM3PRL                                  equ 0DB5h
// bitfield definitions
PWM3PRL_PR_POSN                          equ 0000h
PWM3PRL_PR_POSITION                      equ 0000h
PWM3PRL_PR_SIZE                          equ 0008h
PWM3PRL_PR_LENGTH                        equ 0008h
PWM3PRL_PR_MASK                          equ 00FFh
PWM3PRL_PWM3PRL0_POSN                    equ 0000h
PWM3PRL_PWM3PRL0_POSITION                equ 0000h
PWM3PRL_PWM3PRL0_SIZE                    equ 0001h
PWM3PRL_PWM3PRL0_LENGTH                  equ 0001h
PWM3PRL_PWM3PRL0_MASK                    equ 0001h
PWM3PRL_PWM3PRL1_POSN                    equ 0001h
PWM3PRL_PWM3PRL1_POSITION                equ 0001h
PWM3PRL_PWM3PRL1_SIZE                    equ 0001h
PWM3PRL_PWM3PRL1_LENGTH                  equ 0001h
PWM3PRL_PWM3PRL1_MASK                    equ 0002h
PWM3PRL_PWM3PRL2_POSN                    equ 0002h
PWM3PRL_PWM3PRL2_POSITION                equ 0002h
PWM3PRL_PWM3PRL2_SIZE                    equ 0001h
PWM3PRL_PWM3PRL2_LENGTH                  equ 0001h
PWM3PRL_PWM3PRL2_MASK                    equ 0004h
PWM3PRL_PWM3PRL3_POSN                    equ 0003h
PWM3PRL_PWM3PRL3_POSITION                equ 0003h
PWM3PRL_PWM3PRL3_SIZE                    equ 0001h
PWM3PRL_PWM3PRL3_LENGTH                  equ 0001h
PWM3PRL_PWM3PRL3_MASK                    equ 0008h
PWM3PRL_PWM3PRL4_POSN                    equ 0004h
PWM3PRL_PWM3PRL4_POSITION                equ 0004h
PWM3PRL_PWM3PRL4_SIZE                    equ 0001h
PWM3PRL_PWM3PRL4_LENGTH                  equ 0001h
PWM3PRL_PWM3PRL4_MASK                    equ 0010h
PWM3PRL_PWM3PRL5_POSN                    equ 0005h
PWM3PRL_PWM3PRL5_POSITION                equ 0005h
PWM3PRL_PWM3PRL5_SIZE                    equ 0001h
PWM3PRL_PWM3PRL5_LENGTH                  equ 0001h
PWM3PRL_PWM3PRL5_MASK                    equ 0020h
PWM3PRL_PWM3PRL6_POSN                    equ 0006h
PWM3PRL_PWM3PRL6_POSITION                equ 0006h
PWM3PRL_PWM3PRL6_SIZE                    equ 0001h
PWM3PRL_PWM3PRL6_LENGTH                  equ 0001h
PWM3PRL_PWM3PRL6_MASK                    equ 0040h
PWM3PRL_PWM3PRL7_POSN                    equ 0007h
PWM3PRL_PWM3PRL7_POSITION                equ 0007h
PWM3PRL_PWM3PRL7_SIZE                    equ 0001h
PWM3PRL_PWM3PRL7_LENGTH                  equ 0001h
PWM3PRL_PWM3PRL7_MASK                    equ 0080h
PWM3PRL_PWM3PRL_POSN                     equ 0000h
PWM3PRL_PWM3PRL_POSITION                 equ 0000h
PWM3PRL_PWM3PRL_SIZE                     equ 0008h
PWM3PRL_PWM3PRL_LENGTH                   equ 0008h
PWM3PRL_PWM3PRL_MASK                     equ 00FFh

// Register: PWM3PRH
#define PWM3PRH PWM3PRH
PWM3PRH                                  equ 0DB6h
// bitfield definitions
PWM3PRH_PR_POSN                          equ 0000h
PWM3PRH_PR_POSITION                      equ 0000h
PWM3PRH_PR_SIZE                          equ 0008h
PWM3PRH_PR_LENGTH                        equ 0008h
PWM3PRH_PR_MASK                          equ 00FFh
PWM3PRH_PWM3PRH0_POSN                    equ 0000h
PWM3PRH_PWM3PRH0_POSITION                equ 0000h
PWM3PRH_PWM3PRH0_SIZE                    equ 0001h
PWM3PRH_PWM3PRH0_LENGTH                  equ 0001h
PWM3PRH_PWM3PRH0_MASK                    equ 0001h
PWM3PRH_PWM3PRH1_POSN                    equ 0001h
PWM3PRH_PWM3PRH1_POSITION                equ 0001h
PWM3PRH_PWM3PRH1_SIZE                    equ 0001h
PWM3PRH_PWM3PRH1_LENGTH                  equ 0001h
PWM3PRH_PWM3PRH1_MASK                    equ 0002h
PWM3PRH_PWM3PRH2_POSN                    equ 0002h
PWM3PRH_PWM3PRH2_POSITION                equ 0002h
PWM3PRH_PWM3PRH2_SIZE                    equ 0001h
PWM3PRH_PWM3PRH2_LENGTH                  equ 0001h
PWM3PRH_PWM3PRH2_MASK                    equ 0004h
PWM3PRH_PWM3PRH3_POSN                    equ 0003h
PWM3PRH_PWM3PRH3_POSITION                equ 0003h
PWM3PRH_PWM3PRH3_SIZE                    equ 0001h
PWM3PRH_PWM3PRH3_LENGTH                  equ 0001h
PWM3PRH_PWM3PRH3_MASK                    equ 0008h
PWM3PRH_PWM3PRH4_POSN                    equ 0004h
PWM3PRH_PWM3PRH4_POSITION                equ 0004h
PWM3PRH_PWM3PRH4_SIZE                    equ 0001h
PWM3PRH_PWM3PRH4_LENGTH                  equ 0001h
PWM3PRH_PWM3PRH4_MASK                    equ 0010h
PWM3PRH_PWM3PRH5_POSN                    equ 0005h
PWM3PRH_PWM3PRH5_POSITION                equ 0005h
PWM3PRH_PWM3PRH5_SIZE                    equ 0001h
PWM3PRH_PWM3PRH5_LENGTH                  equ 0001h
PWM3PRH_PWM3PRH5_MASK                    equ 0020h
PWM3PRH_PWM3PRH6_POSN                    equ 0006h
PWM3PRH_PWM3PRH6_POSITION                equ 0006h
PWM3PRH_PWM3PRH6_SIZE                    equ 0001h
PWM3PRH_PWM3PRH6_LENGTH                  equ 0001h
PWM3PRH_PWM3PRH6_MASK                    equ 0040h
PWM3PRH_PWM3PRH7_POSN                    equ 0007h
PWM3PRH_PWM3PRH7_POSITION                equ 0007h
PWM3PRH_PWM3PRH7_SIZE                    equ 0001h
PWM3PRH_PWM3PRH7_LENGTH                  equ 0001h
PWM3PRH_PWM3PRH7_MASK                    equ 0080h
PWM3PRH_PWM3PRH_POSN                     equ 0000h
PWM3PRH_PWM3PRH_POSITION                 equ 0000h
PWM3PRH_PWM3PRH_SIZE                     equ 0008h
PWM3PRH_PWM3PRH_LENGTH                   equ 0008h
PWM3PRH_PWM3PRH_MASK                     equ 00FFh

// Register: PWM3OFL
#define PWM3OFL PWM3OFL
PWM3OFL                                  equ 0DB7h
// bitfield definitions
PWM3OFL_OF_POSN                          equ 0000h
PWM3OFL_OF_POSITION                      equ 0000h
PWM3OFL_OF_SIZE                          equ 0008h
PWM3OFL_OF_LENGTH                        equ 0008h
PWM3OFL_OF_MASK                          equ 00FFh
PWM3OFL_PWM3OFL0_POSN                    equ 0000h
PWM3OFL_PWM3OFL0_POSITION                equ 0000h
PWM3OFL_PWM3OFL0_SIZE                    equ 0001h
PWM3OFL_PWM3OFL0_LENGTH                  equ 0001h
PWM3OFL_PWM3OFL0_MASK                    equ 0001h
PWM3OFL_PWM3OFL1_POSN                    equ 0001h
PWM3OFL_PWM3OFL1_POSITION                equ 0001h
PWM3OFL_PWM3OFL1_SIZE                    equ 0001h
PWM3OFL_PWM3OFL1_LENGTH                  equ 0001h
PWM3OFL_PWM3OFL1_MASK                    equ 0002h
PWM3OFL_PWM3OFL2_POSN                    equ 0002h
PWM3OFL_PWM3OFL2_POSITION                equ 0002h
PWM3OFL_PWM3OFL2_SIZE                    equ 0001h
PWM3OFL_PWM3OFL2_LENGTH                  equ 0001h
PWM3OFL_PWM3OFL2_MASK                    equ 0004h
PWM3OFL_PWM3OFL3_POSN                    equ 0003h
PWM3OFL_PWM3OFL3_POSITION                equ 0003h
PWM3OFL_PWM3OFL3_SIZE                    equ 0001h
PWM3OFL_PWM3OFL3_LENGTH                  equ 0001h
PWM3OFL_PWM3OFL3_MASK                    equ 0008h
PWM3OFL_PWM3OFL4_POSN                    equ 0004h
PWM3OFL_PWM3OFL4_POSITION                equ 0004h
PWM3OFL_PWM3OFL4_SIZE                    equ 0001h
PWM3OFL_PWM3OFL4_LENGTH                  equ 0001h
PWM3OFL_PWM3OFL4_MASK                    equ 0010h
PWM3OFL_PWM3OFL5_POSN                    equ 0005h
PWM3OFL_PWM3OFL5_POSITION                equ 0005h
PWM3OFL_PWM3OFL5_SIZE                    equ 0001h
PWM3OFL_PWM3OFL5_LENGTH                  equ 0001h
PWM3OFL_PWM3OFL5_MASK                    equ 0020h
PWM3OFL_PWM3OFL6_POSN                    equ 0006h
PWM3OFL_PWM3OFL6_POSITION                equ 0006h
PWM3OFL_PWM3OFL6_SIZE                    equ 0001h
PWM3OFL_PWM3OFL6_LENGTH                  equ 0001h
PWM3OFL_PWM3OFL6_MASK                    equ 0040h
PWM3OFL_PWM3OFL7_POSN                    equ 0007h
PWM3OFL_PWM3OFL7_POSITION                equ 0007h
PWM3OFL_PWM3OFL7_SIZE                    equ 0001h
PWM3OFL_PWM3OFL7_LENGTH                  equ 0001h
PWM3OFL_PWM3OFL7_MASK                    equ 0080h
PWM3OFL_PWM3OFL_POSN                     equ 0000h
PWM3OFL_PWM3OFL_POSITION                 equ 0000h
PWM3OFL_PWM3OFL_SIZE                     equ 0008h
PWM3OFL_PWM3OFL_LENGTH                   equ 0008h
PWM3OFL_PWM3OFL_MASK                     equ 00FFh

// Register: PWM3OFH
#define PWM3OFH PWM3OFH
PWM3OFH                                  equ 0DB8h
// bitfield definitions
PWM3OFH_OF_POSN                          equ 0000h
PWM3OFH_OF_POSITION                      equ 0000h
PWM3OFH_OF_SIZE                          equ 0008h
PWM3OFH_OF_LENGTH                        equ 0008h
PWM3OFH_OF_MASK                          equ 00FFh
PWM3OFH_PWM3OFH0_POSN                    equ 0000h
PWM3OFH_PWM3OFH0_POSITION                equ 0000h
PWM3OFH_PWM3OFH0_SIZE                    equ 0001h
PWM3OFH_PWM3OFH0_LENGTH                  equ 0001h
PWM3OFH_PWM3OFH0_MASK                    equ 0001h
PWM3OFH_PWM3OFH1_POSN                    equ 0001h
PWM3OFH_PWM3OFH1_POSITION                equ 0001h
PWM3OFH_PWM3OFH1_SIZE                    equ 0001h
PWM3OFH_PWM3OFH1_LENGTH                  equ 0001h
PWM3OFH_PWM3OFH1_MASK                    equ 0002h
PWM3OFH_PWM3OFH2_POSN                    equ 0002h
PWM3OFH_PWM3OFH2_POSITION                equ 0002h
PWM3OFH_PWM3OFH2_SIZE                    equ 0001h
PWM3OFH_PWM3OFH2_LENGTH                  equ 0001h
PWM3OFH_PWM3OFH2_MASK                    equ 0004h
PWM3OFH_PWM3OFH3_POSN                    equ 0003h
PWM3OFH_PWM3OFH3_POSITION                equ 0003h
PWM3OFH_PWM3OFH3_SIZE                    equ 0001h
PWM3OFH_PWM3OFH3_LENGTH                  equ 0001h
PWM3OFH_PWM3OFH3_MASK                    equ 0008h
PWM3OFH_PWM3OFH4_POSN                    equ 0004h
PWM3OFH_PWM3OFH4_POSITION                equ 0004h
PWM3OFH_PWM3OFH4_SIZE                    equ 0001h
PWM3OFH_PWM3OFH4_LENGTH                  equ 0001h
PWM3OFH_PWM3OFH4_MASK                    equ 0010h
PWM3OFH_PWM3OFH5_POSN                    equ 0005h
PWM3OFH_PWM3OFH5_POSITION                equ 0005h
PWM3OFH_PWM3OFH5_SIZE                    equ 0001h
PWM3OFH_PWM3OFH5_LENGTH                  equ 0001h
PWM3OFH_PWM3OFH5_MASK                    equ 0020h
PWM3OFH_PWM3OFH6_POSN                    equ 0006h
PWM3OFH_PWM3OFH6_POSITION                equ 0006h
PWM3OFH_PWM3OFH6_SIZE                    equ 0001h
PWM3OFH_PWM3OFH6_LENGTH                  equ 0001h
PWM3OFH_PWM3OFH6_MASK                    equ 0040h
PWM3OFH_PWM3OFH7_POSN                    equ 0007h
PWM3OFH_PWM3OFH7_POSITION                equ 0007h
PWM3OFH_PWM3OFH7_SIZE                    equ 0001h
PWM3OFH_PWM3OFH7_LENGTH                  equ 0001h
PWM3OFH_PWM3OFH7_MASK                    equ 0080h
PWM3OFH_PWM3OFH_POSN                     equ 0000h
PWM3OFH_PWM3OFH_POSITION                 equ 0000h
PWM3OFH_PWM3OFH_SIZE                     equ 0008h
PWM3OFH_PWM3OFH_LENGTH                   equ 0008h
PWM3OFH_PWM3OFH_MASK                     equ 00FFh

// Register: PWM3TMRL
#define PWM3TMRL PWM3TMRL
PWM3TMRL                                 equ 0DB9h
// bitfield definitions
PWM3TMRL_TMR_POSN                        equ 0000h
PWM3TMRL_TMR_POSITION                    equ 0000h
PWM3TMRL_TMR_SIZE                        equ 0008h
PWM3TMRL_TMR_LENGTH                      equ 0008h
PWM3TMRL_TMR_MASK                        equ 00FFh
PWM3TMRL_PWM3TMRL0_POSN                  equ 0000h
PWM3TMRL_PWM3TMRL0_POSITION              equ 0000h
PWM3TMRL_PWM3TMRL0_SIZE                  equ 0001h
PWM3TMRL_PWM3TMRL0_LENGTH                equ 0001h
PWM3TMRL_PWM3TMRL0_MASK                  equ 0001h
PWM3TMRL_PWM3TMRL1_POSN                  equ 0001h
PWM3TMRL_PWM3TMRL1_POSITION              equ 0001h
PWM3TMRL_PWM3TMRL1_SIZE                  equ 0001h
PWM3TMRL_PWM3TMRL1_LENGTH                equ 0001h
PWM3TMRL_PWM3TMRL1_MASK                  equ 0002h
PWM3TMRL_PWM3TMRL2_POSN                  equ 0002h
PWM3TMRL_PWM3TMRL2_POSITION              equ 0002h
PWM3TMRL_PWM3TMRL2_SIZE                  equ 0001h
PWM3TMRL_PWM3TMRL2_LENGTH                equ 0001h
PWM3TMRL_PWM3TMRL2_MASK                  equ 0004h
PWM3TMRL_PWM3TMRL3_POSN                  equ 0003h
PWM3TMRL_PWM3TMRL3_POSITION              equ 0003h
PWM3TMRL_PWM3TMRL3_SIZE                  equ 0001h
PWM3TMRL_PWM3TMRL3_LENGTH                equ 0001h
PWM3TMRL_PWM3TMRL3_MASK                  equ 0008h
PWM3TMRL_PWM3TMRL4_POSN                  equ 0004h
PWM3TMRL_PWM3TMRL4_POSITION              equ 0004h
PWM3TMRL_PWM3TMRL4_SIZE                  equ 0001h
PWM3TMRL_PWM3TMRL4_LENGTH                equ 0001h
PWM3TMRL_PWM3TMRL4_MASK                  equ 0010h
PWM3TMRL_PWM3TMRL5_POSN                  equ 0005h
PWM3TMRL_PWM3TMRL5_POSITION              equ 0005h
PWM3TMRL_PWM3TMRL5_SIZE                  equ 0001h
PWM3TMRL_PWM3TMRL5_LENGTH                equ 0001h
PWM3TMRL_PWM3TMRL5_MASK                  equ 0020h
PWM3TMRL_PWM3TMRL6_POSN                  equ 0006h
PWM3TMRL_PWM3TMRL6_POSITION              equ 0006h
PWM3TMRL_PWM3TMRL6_SIZE                  equ 0001h
PWM3TMRL_PWM3TMRL6_LENGTH                equ 0001h
PWM3TMRL_PWM3TMRL6_MASK                  equ 0040h
PWM3TMRL_PWM3TMRL7_POSN                  equ 0007h
PWM3TMRL_PWM3TMRL7_POSITION              equ 0007h
PWM3TMRL_PWM3TMRL7_SIZE                  equ 0001h
PWM3TMRL_PWM3TMRL7_LENGTH                equ 0001h
PWM3TMRL_PWM3TMRL7_MASK                  equ 0080h
PWM3TMRL_PWM3TMRL_POSN                   equ 0000h
PWM3TMRL_PWM3TMRL_POSITION               equ 0000h
PWM3TMRL_PWM3TMRL_SIZE                   equ 0008h
PWM3TMRL_PWM3TMRL_LENGTH                 equ 0008h
PWM3TMRL_PWM3TMRL_MASK                   equ 00FFh

// Register: PWM3TMRH
#define PWM3TMRH PWM3TMRH
PWM3TMRH                                 equ 0DBAh
// bitfield definitions
PWM3TMRH_TMR_POSN                        equ 0000h
PWM3TMRH_TMR_POSITION                    equ 0000h
PWM3TMRH_TMR_SIZE                        equ 0008h
PWM3TMRH_TMR_LENGTH                      equ 0008h
PWM3TMRH_TMR_MASK                        equ 00FFh
PWM3TMRH_PWM3TMRH0_POSN                  equ 0000h
PWM3TMRH_PWM3TMRH0_POSITION              equ 0000h
PWM3TMRH_PWM3TMRH0_SIZE                  equ 0001h
PWM3TMRH_PWM3TMRH0_LENGTH                equ 0001h
PWM3TMRH_PWM3TMRH0_MASK                  equ 0001h
PWM3TMRH_PWM3TMRH1_POSN                  equ 0001h
PWM3TMRH_PWM3TMRH1_POSITION              equ 0001h
PWM3TMRH_PWM3TMRH1_SIZE                  equ 0001h
PWM3TMRH_PWM3TMRH1_LENGTH                equ 0001h
PWM3TMRH_PWM3TMRH1_MASK                  equ 0002h
PWM3TMRH_PWM3TMRH2_POSN                  equ 0002h
PWM3TMRH_PWM3TMRH2_POSITION              equ 0002h
PWM3TMRH_PWM3TMRH2_SIZE                  equ 0001h
PWM3TMRH_PWM3TMRH2_LENGTH                equ 0001h
PWM3TMRH_PWM3TMRH2_MASK                  equ 0004h
PWM3TMRH_PWM3TMRH3_POSN                  equ 0003h
PWM3TMRH_PWM3TMRH3_POSITION              equ 0003h
PWM3TMRH_PWM3TMRH3_SIZE                  equ 0001h
PWM3TMRH_PWM3TMRH3_LENGTH                equ 0001h
PWM3TMRH_PWM3TMRH3_MASK                  equ 0008h
PWM3TMRH_PWM3TMRH4_POSN                  equ 0004h
PWM3TMRH_PWM3TMRH4_POSITION              equ 0004h
PWM3TMRH_PWM3TMRH4_SIZE                  equ 0001h
PWM3TMRH_PWM3TMRH4_LENGTH                equ 0001h
PWM3TMRH_PWM3TMRH4_MASK                  equ 0010h
PWM3TMRH_PWM3TMRH5_POSN                  equ 0005h
PWM3TMRH_PWM3TMRH5_POSITION              equ 0005h
PWM3TMRH_PWM3TMRH5_SIZE                  equ 0001h
PWM3TMRH_PWM3TMRH5_LENGTH                equ 0001h
PWM3TMRH_PWM3TMRH5_MASK                  equ 0020h
PWM3TMRH_PWM3TMRH6_POSN                  equ 0006h
PWM3TMRH_PWM3TMRH6_POSITION              equ 0006h
PWM3TMRH_PWM3TMRH6_SIZE                  equ 0001h
PWM3TMRH_PWM3TMRH6_LENGTH                equ 0001h
PWM3TMRH_PWM3TMRH6_MASK                  equ 0040h
PWM3TMRH_PWM3TMRH7_POSN                  equ 0007h
PWM3TMRH_PWM3TMRH7_POSITION              equ 0007h
PWM3TMRH_PWM3TMRH7_SIZE                  equ 0001h
PWM3TMRH_PWM3TMRH7_LENGTH                equ 0001h
PWM3TMRH_PWM3TMRH7_MASK                  equ 0080h
PWM3TMRH_PWM3TMRH_POSN                   equ 0000h
PWM3TMRH_PWM3TMRH_POSITION               equ 0000h
PWM3TMRH_PWM3TMRH_SIZE                   equ 0008h
PWM3TMRH_PWM3TMRH_LENGTH                 equ 0008h
PWM3TMRH_PWM3TMRH_MASK                   equ 00FFh

// Register: PWM3CON
#define PWM3CON PWM3CON
PWM3CON                                  equ 0DBBh
// bitfield definitions
PWM3CON_MODE_POSN                        equ 0002h
PWM3CON_MODE_POSITION                    equ 0002h
PWM3CON_MODE_SIZE                        equ 0002h
PWM3CON_MODE_LENGTH                      equ 0002h
PWM3CON_MODE_MASK                        equ 000Ch
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
PWM3CON_OE_POSN                          equ 0006h
PWM3CON_OE_POSITION                      equ 0006h
PWM3CON_OE_SIZE                          equ 0001h
PWM3CON_OE_LENGTH                        equ 0001h
PWM3CON_OE_MASK                          equ 0040h
PWM3CON_EN_POSN                          equ 0007h
PWM3CON_EN_POSITION                      equ 0007h
PWM3CON_EN_SIZE                          equ 0001h
PWM3CON_EN_LENGTH                        equ 0001h
PWM3CON_EN_MASK                          equ 0080h
PWM3CON_PWM3MODE0_POSN                   equ 0002h
PWM3CON_PWM3MODE0_POSITION               equ 0002h
PWM3CON_PWM3MODE0_SIZE                   equ 0001h
PWM3CON_PWM3MODE0_LENGTH                 equ 0001h
PWM3CON_PWM3MODE0_MASK                   equ 0004h
PWM3CON_PWM3MODE1_POSN                   equ 0003h
PWM3CON_PWM3MODE1_POSITION               equ 0003h
PWM3CON_PWM3MODE1_SIZE                   equ 0001h
PWM3CON_PWM3MODE1_LENGTH                 equ 0001h
PWM3CON_PWM3MODE1_MASK                   equ 0008h
PWM3CON_PWM3MODE_POSN                    equ 0002h
PWM3CON_PWM3MODE_POSITION                equ 0002h
PWM3CON_PWM3MODE_SIZE                    equ 0002h
PWM3CON_PWM3MODE_LENGTH                  equ 0002h
PWM3CON_PWM3MODE_MASK                    equ 000Ch
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
PWM3CON_PWM3OE_POSN                      equ 0006h
PWM3CON_PWM3OE_POSITION                  equ 0006h
PWM3CON_PWM3OE_SIZE                      equ 0001h
PWM3CON_PWM3OE_LENGTH                    equ 0001h
PWM3CON_PWM3OE_MASK                      equ 0040h
PWM3CON_PWM3EN_POSN                      equ 0007h
PWM3CON_PWM3EN_POSITION                  equ 0007h
PWM3CON_PWM3EN_SIZE                      equ 0001h
PWM3CON_PWM3EN_LENGTH                    equ 0001h
PWM3CON_PWM3EN_MASK                      equ 0080h
PWM3CON_MODE0_POSN                       equ 0002h
PWM3CON_MODE0_POSITION                   equ 0002h
PWM3CON_MODE0_SIZE                       equ 0001h
PWM3CON_MODE0_LENGTH                     equ 0001h
PWM3CON_MODE0_MASK                       equ 0004h
PWM3CON_MODE1_POSN                       equ 0003h
PWM3CON_MODE1_POSITION                   equ 0003h
PWM3CON_MODE1_SIZE                       equ 0001h
PWM3CON_MODE1_LENGTH                     equ 0001h
PWM3CON_MODE1_MASK                       equ 0008h

// Register: PWM3INTE
#define PWM3INTE PWM3INTE
PWM3INTE                                 equ 0DBCh
// bitfield definitions
PWM3INTE_PRIE_POSN                       equ 0000h
PWM3INTE_PRIE_POSITION                   equ 0000h
PWM3INTE_PRIE_SIZE                       equ 0001h
PWM3INTE_PRIE_LENGTH                     equ 0001h
PWM3INTE_PRIE_MASK                       equ 0001h
PWM3INTE_DCIE_POSN                       equ 0001h
PWM3INTE_DCIE_POSITION                   equ 0001h
PWM3INTE_DCIE_SIZE                       equ 0001h
PWM3INTE_DCIE_LENGTH                     equ 0001h
PWM3INTE_DCIE_MASK                       equ 0002h
PWM3INTE_PHIE_POSN                       equ 0002h
PWM3INTE_PHIE_POSITION                   equ 0002h
PWM3INTE_PHIE_SIZE                       equ 0001h
PWM3INTE_PHIE_LENGTH                     equ 0001h
PWM3INTE_PHIE_MASK                       equ 0004h
PWM3INTE_OFIE_POSN                       equ 0003h
PWM3INTE_OFIE_POSITION                   equ 0003h
PWM3INTE_OFIE_SIZE                       equ 0001h
PWM3INTE_OFIE_LENGTH                     equ 0001h
PWM3INTE_OFIE_MASK                       equ 0008h
PWM3INTE_PWM3PRIE_POSN                   equ 0000h
PWM3INTE_PWM3PRIE_POSITION               equ 0000h
PWM3INTE_PWM3PRIE_SIZE                   equ 0001h
PWM3INTE_PWM3PRIE_LENGTH                 equ 0001h
PWM3INTE_PWM3PRIE_MASK                   equ 0001h
PWM3INTE_PWM3DCIE_POSN                   equ 0001h
PWM3INTE_PWM3DCIE_POSITION               equ 0001h
PWM3INTE_PWM3DCIE_SIZE                   equ 0001h
PWM3INTE_PWM3DCIE_LENGTH                 equ 0001h
PWM3INTE_PWM3DCIE_MASK                   equ 0002h
PWM3INTE_PWM3PHIE_POSN                   equ 0002h
PWM3INTE_PWM3PHIE_POSITION               equ 0002h
PWM3INTE_PWM3PHIE_SIZE                   equ 0001h
PWM3INTE_PWM3PHIE_LENGTH                 equ 0001h
PWM3INTE_PWM3PHIE_MASK                   equ 0004h
PWM3INTE_PWM3OFIE_POSN                   equ 0003h
PWM3INTE_PWM3OFIE_POSITION               equ 0003h
PWM3INTE_PWM3OFIE_SIZE                   equ 0001h
PWM3INTE_PWM3OFIE_LENGTH                 equ 0001h
PWM3INTE_PWM3OFIE_MASK                   equ 0008h

// Register: PWM3INTF
#define PWM3INTF PWM3INTF
PWM3INTF                                 equ 0DBDh
// bitfield definitions
PWM3INTF_PRIF_POSN                       equ 0000h
PWM3INTF_PRIF_POSITION                   equ 0000h
PWM3INTF_PRIF_SIZE                       equ 0001h
PWM3INTF_PRIF_LENGTH                     equ 0001h
PWM3INTF_PRIF_MASK                       equ 0001h
PWM3INTF_DCIF_POSN                       equ 0001h
PWM3INTF_DCIF_POSITION                   equ 0001h
PWM3INTF_DCIF_SIZE                       equ 0001h
PWM3INTF_DCIF_LENGTH                     equ 0001h
PWM3INTF_DCIF_MASK                       equ 0002h
PWM3INTF_PHIF_POSN                       equ 0002h
PWM3INTF_PHIF_POSITION                   equ 0002h
PWM3INTF_PHIF_SIZE                       equ 0001h
PWM3INTF_PHIF_LENGTH                     equ 0001h
PWM3INTF_PHIF_MASK                       equ 0004h
PWM3INTF_OFIF_POSN                       equ 0003h
PWM3INTF_OFIF_POSITION                   equ 0003h
PWM3INTF_OFIF_SIZE                       equ 0001h
PWM3INTF_OFIF_LENGTH                     equ 0001h
PWM3INTF_OFIF_MASK                       equ 0008h
PWM3INTF_PWM3PRIF_POSN                   equ 0000h
PWM3INTF_PWM3PRIF_POSITION               equ 0000h
PWM3INTF_PWM3PRIF_SIZE                   equ 0001h
PWM3INTF_PWM3PRIF_LENGTH                 equ 0001h
PWM3INTF_PWM3PRIF_MASK                   equ 0001h
PWM3INTF_PWM3DCIF_POSN                   equ 0001h
PWM3INTF_PWM3DCIF_POSITION               equ 0001h
PWM3INTF_PWM3DCIF_SIZE                   equ 0001h
PWM3INTF_PWM3DCIF_LENGTH                 equ 0001h
PWM3INTF_PWM3DCIF_MASK                   equ 0002h
PWM3INTF_PWM3PHIF_POSN                   equ 0002h
PWM3INTF_PWM3PHIF_POSITION               equ 0002h
PWM3INTF_PWM3PHIF_SIZE                   equ 0001h
PWM3INTF_PWM3PHIF_LENGTH                 equ 0001h
PWM3INTF_PWM3PHIF_MASK                   equ 0004h
PWM3INTF_PWM3OFIF_POSN                   equ 0003h
PWM3INTF_PWM3OFIF_POSITION               equ 0003h
PWM3INTF_PWM3OFIF_SIZE                   equ 0001h
PWM3INTF_PWM3OFIF_LENGTH                 equ 0001h
PWM3INTF_PWM3OFIF_MASK                   equ 0008h

// Register: PWM3CLKCON
#define PWM3CLKCON PWM3CLKCON
PWM3CLKCON                               equ 0DBEh
// bitfield definitions
PWM3CLKCON_CS_POSN                       equ 0000h
PWM3CLKCON_CS_POSITION                   equ 0000h
PWM3CLKCON_CS_SIZE                       equ 0002h
PWM3CLKCON_CS_LENGTH                     equ 0002h
PWM3CLKCON_CS_MASK                       equ 0003h
PWM3CLKCON_PS_POSN                       equ 0004h
PWM3CLKCON_PS_POSITION                   equ 0004h
PWM3CLKCON_PS_SIZE                       equ 0003h
PWM3CLKCON_PS_LENGTH                     equ 0003h
PWM3CLKCON_PS_MASK                       equ 0070h
PWM3CLKCON_PWM3CS0_POSN                  equ 0000h
PWM3CLKCON_PWM3CS0_POSITION              equ 0000h
PWM3CLKCON_PWM3CS0_SIZE                  equ 0001h
PWM3CLKCON_PWM3CS0_LENGTH                equ 0001h
PWM3CLKCON_PWM3CS0_MASK                  equ 0001h
PWM3CLKCON_PWM3CS1_POSN                  equ 0001h
PWM3CLKCON_PWM3CS1_POSITION              equ 0001h
PWM3CLKCON_PWM3CS1_SIZE                  equ 0001h
PWM3CLKCON_PWM3CS1_LENGTH                equ 0001h
PWM3CLKCON_PWM3CS1_MASK                  equ 0002h
PWM3CLKCON_PWM3PS0_POSN                  equ 0004h
PWM3CLKCON_PWM3PS0_POSITION              equ 0004h
PWM3CLKCON_PWM3PS0_SIZE                  equ 0001h
PWM3CLKCON_PWM3PS0_LENGTH                equ 0001h
PWM3CLKCON_PWM3PS0_MASK                  equ 0010h
PWM3CLKCON_PWM3PS1_POSN                  equ 0005h
PWM3CLKCON_PWM3PS1_POSITION              equ 0005h
PWM3CLKCON_PWM3PS1_SIZE                  equ 0001h
PWM3CLKCON_PWM3PS1_LENGTH                equ 0001h
PWM3CLKCON_PWM3PS1_MASK                  equ 0020h
PWM3CLKCON_PWM3PS2_POSN                  equ 0006h
PWM3CLKCON_PWM3PS2_POSITION              equ 0006h
PWM3CLKCON_PWM3PS2_SIZE                  equ 0001h
PWM3CLKCON_PWM3PS2_LENGTH                equ 0001h
PWM3CLKCON_PWM3PS2_MASK                  equ 0040h
PWM3CLKCON_PWM3CS_POSN                   equ 0000h
PWM3CLKCON_PWM3CS_POSITION               equ 0000h
PWM3CLKCON_PWM3CS_SIZE                   equ 0003h
PWM3CLKCON_PWM3CS_LENGTH                 equ 0003h
PWM3CLKCON_PWM3CS_MASK                   equ 0007h
PWM3CLKCON_PWM3PS_POSN                   equ 0004h
PWM3CLKCON_PWM3PS_POSITION               equ 0004h
PWM3CLKCON_PWM3PS_SIZE                   equ 0003h
PWM3CLKCON_PWM3PS_LENGTH                 equ 0003h
PWM3CLKCON_PWM3PS_MASK                   equ 0070h
PWM3CLKCON_CS0_POSN                      equ 0000h
PWM3CLKCON_CS0_POSITION                  equ 0000h
PWM3CLKCON_CS0_SIZE                      equ 0001h
PWM3CLKCON_CS0_LENGTH                    equ 0001h
PWM3CLKCON_CS0_MASK                      equ 0001h
PWM3CLKCON_CS1_POSN                      equ 0001h
PWM3CLKCON_CS1_POSITION                  equ 0001h
PWM3CLKCON_CS1_SIZE                      equ 0001h
PWM3CLKCON_CS1_LENGTH                    equ 0001h
PWM3CLKCON_CS1_MASK                      equ 0002h
PWM3CLKCON_PS0_POSN                      equ 0004h
PWM3CLKCON_PS0_POSITION                  equ 0004h
PWM3CLKCON_PS0_SIZE                      equ 0001h
PWM3CLKCON_PS0_LENGTH                    equ 0001h
PWM3CLKCON_PS0_MASK                      equ 0010h
PWM3CLKCON_PS1_POSN                      equ 0005h
PWM3CLKCON_PS1_POSITION                  equ 0005h
PWM3CLKCON_PS1_SIZE                      equ 0001h
PWM3CLKCON_PS1_LENGTH                    equ 0001h
PWM3CLKCON_PS1_MASK                      equ 0020h
PWM3CLKCON_PS2_POSN                      equ 0006h
PWM3CLKCON_PS2_POSITION                  equ 0006h
PWM3CLKCON_PS2_SIZE                      equ 0001h
PWM3CLKCON_PS2_LENGTH                    equ 0001h
PWM3CLKCON_PS2_MASK                      equ 0040h

// Register: PWM3LDCON
#define PWM3LDCON PWM3LDCON
PWM3LDCON                                equ 0DBFh
// bitfield definitions
PWM3LDCON_LDS_POSN                       equ 0000h
PWM3LDCON_LDS_POSITION                   equ 0000h
PWM3LDCON_LDS_SIZE                       equ 0002h
PWM3LDCON_LDS_LENGTH                     equ 0002h
PWM3LDCON_LDS_MASK                       equ 0003h
PWM3LDCON_LDT_POSN                       equ 0006h
PWM3LDCON_LDT_POSITION                   equ 0006h
PWM3LDCON_LDT_SIZE                       equ 0001h
PWM3LDCON_LDT_LENGTH                     equ 0001h
PWM3LDCON_LDT_MASK                       equ 0040h
PWM3LDCON_LDA_POSN                       equ 0007h
PWM3LDCON_LDA_POSITION                   equ 0007h
PWM3LDCON_LDA_SIZE                       equ 0001h
PWM3LDCON_LDA_LENGTH                     equ 0001h
PWM3LDCON_LDA_MASK                       equ 0080h
PWM3LDCON_PWM3LDS0_POSN                  equ 0000h
PWM3LDCON_PWM3LDS0_POSITION              equ 0000h
PWM3LDCON_PWM3LDS0_SIZE                  equ 0001h
PWM3LDCON_PWM3LDS0_LENGTH                equ 0001h
PWM3LDCON_PWM3LDS0_MASK                  equ 0001h
PWM3LDCON_PWM3LDS1_POSN                  equ 0001h
PWM3LDCON_PWM3LDS1_POSITION              equ 0001h
PWM3LDCON_PWM3LDS1_SIZE                  equ 0001h
PWM3LDCON_PWM3LDS1_LENGTH                equ 0001h
PWM3LDCON_PWM3LDS1_MASK                  equ 0002h
PWM3LDCON_PWM3LDS_POSN                   equ 0000h
PWM3LDCON_PWM3LDS_POSITION               equ 0000h
PWM3LDCON_PWM3LDS_SIZE                   equ 0002h
PWM3LDCON_PWM3LDS_LENGTH                 equ 0002h
PWM3LDCON_PWM3LDS_MASK                   equ 0003h
PWM3LDCON_PWM3LDM_POSN                   equ 0006h
PWM3LDCON_PWM3LDM_POSITION               equ 0006h
PWM3LDCON_PWM3LDM_SIZE                   equ 0001h
PWM3LDCON_PWM3LDM_LENGTH                 equ 0001h
PWM3LDCON_PWM3LDM_MASK                   equ 0040h
PWM3LDCON_PWM3LD_POSN                    equ 0007h
PWM3LDCON_PWM3LD_POSITION                equ 0007h
PWM3LDCON_PWM3LD_SIZE                    equ 0001h
PWM3LDCON_PWM3LD_LENGTH                  equ 0001h
PWM3LDCON_PWM3LD_MASK                    equ 0080h
PWM3LDCON_LDS0_POSN                      equ 0000h
PWM3LDCON_LDS0_POSITION                  equ 0000h
PWM3LDCON_LDS0_SIZE                      equ 0001h
PWM3LDCON_LDS0_LENGTH                    equ 0001h
PWM3LDCON_LDS0_MASK                      equ 0001h
PWM3LDCON_LDS1_POSN                      equ 0001h
PWM3LDCON_LDS1_POSITION                  equ 0001h
PWM3LDCON_LDS1_SIZE                      equ 0001h
PWM3LDCON_LDS1_LENGTH                    equ 0001h
PWM3LDCON_LDS1_MASK                      equ 0002h

// Register: PWM3OFCON
#define PWM3OFCON PWM3OFCON
PWM3OFCON                                equ 0DC0h
// bitfield definitions
PWM3OFCON_OFS_POSN                       equ 0000h
PWM3OFCON_OFS_POSITION                   equ 0000h
PWM3OFCON_OFS_SIZE                       equ 0002h
PWM3OFCON_OFS_LENGTH                     equ 0002h
PWM3OFCON_OFS_MASK                       equ 0003h
PWM3OFCON_OFO_POSN                       equ 0004h
PWM3OFCON_OFO_POSITION                   equ 0004h
PWM3OFCON_OFO_SIZE                       equ 0001h
PWM3OFCON_OFO_LENGTH                     equ 0001h
PWM3OFCON_OFO_MASK                       equ 0010h
PWM3OFCON_OFM_POSN                       equ 0005h
PWM3OFCON_OFM_POSITION                   equ 0005h
PWM3OFCON_OFM_SIZE                       equ 0002h
PWM3OFCON_OFM_LENGTH                     equ 0002h
PWM3OFCON_OFM_MASK                       equ 0060h
PWM3OFCON_PWM3OFS0_POSN                  equ 0000h
PWM3OFCON_PWM3OFS0_POSITION              equ 0000h
PWM3OFCON_PWM3OFS0_SIZE                  equ 0001h
PWM3OFCON_PWM3OFS0_LENGTH                equ 0001h
PWM3OFCON_PWM3OFS0_MASK                  equ 0001h
PWM3OFCON_PWM3OFS1_POSN                  equ 0001h
PWM3OFCON_PWM3OFS1_POSITION              equ 0001h
PWM3OFCON_PWM3OFS1_SIZE                  equ 0001h
PWM3OFCON_PWM3OFS1_LENGTH                equ 0001h
PWM3OFCON_PWM3OFS1_MASK                  equ 0002h
PWM3OFCON_PWM3OFM0_POSN                  equ 0005h
PWM3OFCON_PWM3OFM0_POSITION              equ 0005h
PWM3OFCON_PWM3OFM0_SIZE                  equ 0001h
PWM3OFCON_PWM3OFM0_LENGTH                equ 0001h
PWM3OFCON_PWM3OFM0_MASK                  equ 0020h
PWM3OFCON_PWM3OFM1_POSN                  equ 0006h
PWM3OFCON_PWM3OFM1_POSITION              equ 0006h
PWM3OFCON_PWM3OFM1_SIZE                  equ 0001h
PWM3OFCON_PWM3OFM1_LENGTH                equ 0001h
PWM3OFCON_PWM3OFM1_MASK                  equ 0040h
PWM3OFCON_PWM3OFS_POSN                   equ 0000h
PWM3OFCON_PWM3OFS_POSITION               equ 0000h
PWM3OFCON_PWM3OFS_SIZE                   equ 0002h
PWM3OFCON_PWM3OFS_LENGTH                 equ 0002h
PWM3OFCON_PWM3OFS_MASK                   equ 0003h
PWM3OFCON_PWM3OFMC_POSN                  equ 0004h
PWM3OFCON_PWM3OFMC_POSITION              equ 0004h
PWM3OFCON_PWM3OFMC_SIZE                  equ 0001h
PWM3OFCON_PWM3OFMC_LENGTH                equ 0001h
PWM3OFCON_PWM3OFMC_MASK                  equ 0010h
PWM3OFCON_PWM3OFM_POSN                   equ 0005h
PWM3OFCON_PWM3OFM_POSITION               equ 0005h
PWM3OFCON_PWM3OFM_SIZE                   equ 0002h
PWM3OFCON_PWM3OFM_LENGTH                 equ 0002h
PWM3OFCON_PWM3OFM_MASK                   equ 0060h
PWM3OFCON_OFS0_POSN                      equ 0000h
PWM3OFCON_OFS0_POSITION                  equ 0000h
PWM3OFCON_OFS0_SIZE                      equ 0001h
PWM3OFCON_OFS0_LENGTH                    equ 0001h
PWM3OFCON_OFS0_MASK                      equ 0001h
PWM3OFCON_OFS1_POSN                      equ 0001h
PWM3OFCON_OFS1_POSITION                  equ 0001h
PWM3OFCON_OFS1_SIZE                      equ 0001h
PWM3OFCON_OFS1_LENGTH                    equ 0001h
PWM3OFCON_OFS1_MASK                      equ 0002h
PWM3OFCON_OFM0_POSN                      equ 0005h
PWM3OFCON_OFM0_POSITION                  equ 0005h
PWM3OFCON_OFM0_SIZE                      equ 0001h
PWM3OFCON_OFM0_LENGTH                    equ 0001h
PWM3OFCON_OFM0_MASK                      equ 0020h
PWM3OFCON_OFM1_POSN                      equ 0006h
PWM3OFCON_OFM1_POSITION                  equ 0006h
PWM3OFCON_OFM1_SIZE                      equ 0001h
PWM3OFCON_OFM1_LENGTH                    equ 0001h
PWM3OFCON_OFM1_MASK                      equ 0040h

// Register: PWM4PHL
#define PWM4PHL PWM4PHL
PWM4PHL                                  equ 0DC1h
// bitfield definitions
PWM4PHL_PH_POSN                          equ 0000h
PWM4PHL_PH_POSITION                      equ 0000h
PWM4PHL_PH_SIZE                          equ 0008h
PWM4PHL_PH_LENGTH                        equ 0008h
PWM4PHL_PH_MASK                          equ 00FFh
PWM4PHL_PWM4PHL0_POSN                    equ 0000h
PWM4PHL_PWM4PHL0_POSITION                equ 0000h
PWM4PHL_PWM4PHL0_SIZE                    equ 0001h
PWM4PHL_PWM4PHL0_LENGTH                  equ 0001h
PWM4PHL_PWM4PHL0_MASK                    equ 0001h
PWM4PHL_PWM4PHL1_POSN                    equ 0001h
PWM4PHL_PWM4PHL1_POSITION                equ 0001h
PWM4PHL_PWM4PHL1_SIZE                    equ 0001h
PWM4PHL_PWM4PHL1_LENGTH                  equ 0001h
PWM4PHL_PWM4PHL1_MASK                    equ 0002h
PWM4PHL_PWM4PHL2_POSN                    equ 0002h
PWM4PHL_PWM4PHL2_POSITION                equ 0002h
PWM4PHL_PWM4PHL2_SIZE                    equ 0001h
PWM4PHL_PWM4PHL2_LENGTH                  equ 0001h
PWM4PHL_PWM4PHL2_MASK                    equ 0004h
PWM4PHL_PWM4PHL3_POSN                    equ 0003h
PWM4PHL_PWM4PHL3_POSITION                equ 0003h
PWM4PHL_PWM4PHL3_SIZE                    equ 0001h
PWM4PHL_PWM4PHL3_LENGTH                  equ 0001h
PWM4PHL_PWM4PHL3_MASK                    equ 0008h
PWM4PHL_PWM4PHL4_POSN                    equ 0004h
PWM4PHL_PWM4PHL4_POSITION                equ 0004h
PWM4PHL_PWM4PHL4_SIZE                    equ 0001h
PWM4PHL_PWM4PHL4_LENGTH                  equ 0001h
PWM4PHL_PWM4PHL4_MASK                    equ 0010h
PWM4PHL_PWM4PHL5_POSN                    equ 0005h
PWM4PHL_PWM4PHL5_POSITION                equ 0005h
PWM4PHL_PWM4PHL5_SIZE                    equ 0001h
PWM4PHL_PWM4PHL5_LENGTH                  equ 0001h
PWM4PHL_PWM4PHL5_MASK                    equ 0020h
PWM4PHL_PWM4PHL6_POSN                    equ 0006h
PWM4PHL_PWM4PHL6_POSITION                equ 0006h
PWM4PHL_PWM4PHL6_SIZE                    equ 0001h
PWM4PHL_PWM4PHL6_LENGTH                  equ 0001h
PWM4PHL_PWM4PHL6_MASK                    equ 0040h
PWM4PHL_PWM4PHL7_POSN                    equ 0007h
PWM4PHL_PWM4PHL7_POSITION                equ 0007h
PWM4PHL_PWM4PHL7_SIZE                    equ 0001h
PWM4PHL_PWM4PHL7_LENGTH                  equ 0001h
PWM4PHL_PWM4PHL7_MASK                    equ 0080h
PWM4PHL_PWM4PHL_POSN                     equ 0000h
PWM4PHL_PWM4PHL_POSITION                 equ 0000h
PWM4PHL_PWM4PHL_SIZE                     equ 0008h
PWM4PHL_PWM4PHL_LENGTH                   equ 0008h
PWM4PHL_PWM4PHL_MASK                     equ 00FFh

// Register: PWM4PHH
#define PWM4PHH PWM4PHH
PWM4PHH                                  equ 0DC2h
// bitfield definitions
PWM4PHH_PH_POSN                          equ 0000h
PWM4PHH_PH_POSITION                      equ 0000h
PWM4PHH_PH_SIZE                          equ 0008h
PWM4PHH_PH_LENGTH                        equ 0008h
PWM4PHH_PH_MASK                          equ 00FFh
PWM4PHH_PWM4PHH0_POSN                    equ 0000h
PWM4PHH_PWM4PHH0_POSITION                equ 0000h
PWM4PHH_PWM4PHH0_SIZE                    equ 0001h
PWM4PHH_PWM4PHH0_LENGTH                  equ 0001h
PWM4PHH_PWM4PHH0_MASK                    equ 0001h
PWM4PHH_PWM4PHH1_POSN                    equ 0001h
PWM4PHH_PWM4PHH1_POSITION                equ 0001h
PWM4PHH_PWM4PHH1_SIZE                    equ 0001h
PWM4PHH_PWM4PHH1_LENGTH                  equ 0001h
PWM4PHH_PWM4PHH1_MASK                    equ 0002h
PWM4PHH_PWM4PHH2_POSN                    equ 0002h
PWM4PHH_PWM4PHH2_POSITION                equ 0002h
PWM4PHH_PWM4PHH2_SIZE                    equ 0001h
PWM4PHH_PWM4PHH2_LENGTH                  equ 0001h
PWM4PHH_PWM4PHH2_MASK                    equ 0004h
PWM4PHH_PWM4PHH3_POSN                    equ 0003h
PWM4PHH_PWM4PHH3_POSITION                equ 0003h
PWM4PHH_PWM4PHH3_SIZE                    equ 0001h
PWM4PHH_PWM4PHH3_LENGTH                  equ 0001h
PWM4PHH_PWM4PHH3_MASK                    equ 0008h
PWM4PHH_PWM4PHH4_POSN                    equ 0004h
PWM4PHH_PWM4PHH4_POSITION                equ 0004h
PWM4PHH_PWM4PHH4_SIZE                    equ 0001h
PWM4PHH_PWM4PHH4_LENGTH                  equ 0001h
PWM4PHH_PWM4PHH4_MASK                    equ 0010h
PWM4PHH_PWM4PHH5_POSN                    equ 0005h
PWM4PHH_PWM4PHH5_POSITION                equ 0005h
PWM4PHH_PWM4PHH5_SIZE                    equ 0001h
PWM4PHH_PWM4PHH5_LENGTH                  equ 0001h
PWM4PHH_PWM4PHH5_MASK                    equ 0020h
PWM4PHH_PWM4PHH6_POSN                    equ 0006h
PWM4PHH_PWM4PHH6_POSITION                equ 0006h
PWM4PHH_PWM4PHH6_SIZE                    equ 0001h
PWM4PHH_PWM4PHH6_LENGTH                  equ 0001h
PWM4PHH_PWM4PHH6_MASK                    equ 0040h
PWM4PHH_PWM4PHH7_POSN                    equ 0007h
PWM4PHH_PWM4PHH7_POSITION                equ 0007h
PWM4PHH_PWM4PHH7_SIZE                    equ 0001h
PWM4PHH_PWM4PHH7_LENGTH                  equ 0001h
PWM4PHH_PWM4PHH7_MASK                    equ 0080h
PWM4PHH_PWM4PHH_POSN                     equ 0000h
PWM4PHH_PWM4PHH_POSITION                 equ 0000h
PWM4PHH_PWM4PHH_SIZE                     equ 0008h
PWM4PHH_PWM4PHH_LENGTH                   equ 0008h
PWM4PHH_PWM4PHH_MASK                     equ 00FFh

// Register: PWM4DCL
#define PWM4DCL PWM4DCL
PWM4DCL                                  equ 0DC3h
// bitfield definitions
PWM4DCL_DC_POSN                          equ 0000h
PWM4DCL_DC_POSITION                      equ 0000h
PWM4DCL_DC_SIZE                          equ 0008h
PWM4DCL_DC_LENGTH                        equ 0008h
PWM4DCL_DC_MASK                          equ 00FFh
PWM4DCL_PWM4DCL0_POSN                    equ 0000h
PWM4DCL_PWM4DCL0_POSITION                equ 0000h
PWM4DCL_PWM4DCL0_SIZE                    equ 0001h
PWM4DCL_PWM4DCL0_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL0_MASK                    equ 0001h
PWM4DCL_PWM4DCL1_POSN                    equ 0001h
PWM4DCL_PWM4DCL1_POSITION                equ 0001h
PWM4DCL_PWM4DCL1_SIZE                    equ 0001h
PWM4DCL_PWM4DCL1_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL1_MASK                    equ 0002h
PWM4DCL_PWM4DCL2_POSN                    equ 0002h
PWM4DCL_PWM4DCL2_POSITION                equ 0002h
PWM4DCL_PWM4DCL2_SIZE                    equ 0001h
PWM4DCL_PWM4DCL2_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL2_MASK                    equ 0004h
PWM4DCL_PWM4DCL3_POSN                    equ 0003h
PWM4DCL_PWM4DCL3_POSITION                equ 0003h
PWM4DCL_PWM4DCL3_SIZE                    equ 0001h
PWM4DCL_PWM4DCL3_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL3_MASK                    equ 0008h
PWM4DCL_PWM4DCL4_POSN                    equ 0004h
PWM4DCL_PWM4DCL4_POSITION                equ 0004h
PWM4DCL_PWM4DCL4_SIZE                    equ 0001h
PWM4DCL_PWM4DCL4_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL4_MASK                    equ 0010h
PWM4DCL_PWM4DCL5_POSN                    equ 0005h
PWM4DCL_PWM4DCL5_POSITION                equ 0005h
PWM4DCL_PWM4DCL5_SIZE                    equ 0001h
PWM4DCL_PWM4DCL5_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL5_MASK                    equ 0020h
PWM4DCL_PWM4DCL6_POSN                    equ 0006h
PWM4DCL_PWM4DCL6_POSITION                equ 0006h
PWM4DCL_PWM4DCL6_SIZE                    equ 0001h
PWM4DCL_PWM4DCL6_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL6_MASK                    equ 0040h
PWM4DCL_PWM4DCL7_POSN                    equ 0007h
PWM4DCL_PWM4DCL7_POSITION                equ 0007h
PWM4DCL_PWM4DCL7_SIZE                    equ 0001h
PWM4DCL_PWM4DCL7_LENGTH                  equ 0001h
PWM4DCL_PWM4DCL7_MASK                    equ 0080h
PWM4DCL_PWM4DCL_POSN                     equ 0000h
PWM4DCL_PWM4DCL_POSITION                 equ 0000h
PWM4DCL_PWM4DCL_SIZE                     equ 0008h
PWM4DCL_PWM4DCL_LENGTH                   equ 0008h
PWM4DCL_PWM4DCL_MASK                     equ 00FFh

// Register: PWM4DCH
#define PWM4DCH PWM4DCH
PWM4DCH                                  equ 0DC4h
// bitfield definitions
PWM4DCH_DC_POSN                          equ 0000h
PWM4DCH_DC_POSITION                      equ 0000h
PWM4DCH_DC_SIZE                          equ 0008h
PWM4DCH_DC_LENGTH                        equ 0008h
PWM4DCH_DC_MASK                          equ 00FFh
PWM4DCH_PWM4DCH0_POSN                    equ 0000h
PWM4DCH_PWM4DCH0_POSITION                equ 0000h
PWM4DCH_PWM4DCH0_SIZE                    equ 0001h
PWM4DCH_PWM4DCH0_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH0_MASK                    equ 0001h
PWM4DCH_PWM4DCH1_POSN                    equ 0001h
PWM4DCH_PWM4DCH1_POSITION                equ 0001h
PWM4DCH_PWM4DCH1_SIZE                    equ 0001h
PWM4DCH_PWM4DCH1_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH1_MASK                    equ 0002h
PWM4DCH_PWM4DCH2_POSN                    equ 0002h
PWM4DCH_PWM4DCH2_POSITION                equ 0002h
PWM4DCH_PWM4DCH2_SIZE                    equ 0001h
PWM4DCH_PWM4DCH2_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH2_MASK                    equ 0004h
PWM4DCH_PWM4DCH3_POSN                    equ 0003h
PWM4DCH_PWM4DCH3_POSITION                equ 0003h
PWM4DCH_PWM4DCH3_SIZE                    equ 0001h
PWM4DCH_PWM4DCH3_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH3_MASK                    equ 0008h
PWM4DCH_PWM4DCH4_POSN                    equ 0004h
PWM4DCH_PWM4DCH4_POSITION                equ 0004h
PWM4DCH_PWM4DCH4_SIZE                    equ 0001h
PWM4DCH_PWM4DCH4_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH4_MASK                    equ 0010h
PWM4DCH_PWM4DCH5_POSN                    equ 0005h
PWM4DCH_PWM4DCH5_POSITION                equ 0005h
PWM4DCH_PWM4DCH5_SIZE                    equ 0001h
PWM4DCH_PWM4DCH5_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH5_MASK                    equ 0020h
PWM4DCH_PWM4DCH6_POSN                    equ 0006h
PWM4DCH_PWM4DCH6_POSITION                equ 0006h
PWM4DCH_PWM4DCH6_SIZE                    equ 0001h
PWM4DCH_PWM4DCH6_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH6_MASK                    equ 0040h
PWM4DCH_PWM4DCH7_POSN                    equ 0007h
PWM4DCH_PWM4DCH7_POSITION                equ 0007h
PWM4DCH_PWM4DCH7_SIZE                    equ 0001h
PWM4DCH_PWM4DCH7_LENGTH                  equ 0001h
PWM4DCH_PWM4DCH7_MASK                    equ 0080h
PWM4DCH_PWM4DCH_POSN                     equ 0000h
PWM4DCH_PWM4DCH_POSITION                 equ 0000h
PWM4DCH_PWM4DCH_SIZE                     equ 0008h
PWM4DCH_PWM4DCH_LENGTH                   equ 0008h
PWM4DCH_PWM4DCH_MASK                     equ 00FFh

// Register: PWM4PRL
#define PWM4PRL PWM4PRL
PWM4PRL                                  equ 0DC5h
// bitfield definitions
PWM4PRL_PR_POSN                          equ 0000h
PWM4PRL_PR_POSITION                      equ 0000h
PWM4PRL_PR_SIZE                          equ 0008h
PWM4PRL_PR_LENGTH                        equ 0008h
PWM4PRL_PR_MASK                          equ 00FFh
PWM4PRL_PWM4PRL0_POSN                    equ 0000h
PWM4PRL_PWM4PRL0_POSITION                equ 0000h
PWM4PRL_PWM4PRL0_SIZE                    equ 0001h
PWM4PRL_PWM4PRL0_LENGTH                  equ 0001h
PWM4PRL_PWM4PRL0_MASK                    equ 0001h
PWM4PRL_PWM4PRL1_POSN                    equ 0001h
PWM4PRL_PWM4PRL1_POSITION                equ 0001h
PWM4PRL_PWM4PRL1_SIZE                    equ 0001h
PWM4PRL_PWM4PRL1_LENGTH                  equ 0001h
PWM4PRL_PWM4PRL1_MASK                    equ 0002h
PWM4PRL_PWM4PRL2_POSN                    equ 0002h
PWM4PRL_PWM4PRL2_POSITION                equ 0002h
PWM4PRL_PWM4PRL2_SIZE                    equ 0001h
PWM4PRL_PWM4PRL2_LENGTH                  equ 0001h
PWM4PRL_PWM4PRL2_MASK                    equ 0004h
PWM4PRL_PWM4PRL3_POSN                    equ 0003h
PWM4PRL_PWM4PRL3_POSITION                equ 0003h
PWM4PRL_PWM4PRL3_SIZE                    equ 0001h
PWM4PRL_PWM4PRL3_LENGTH                  equ 0001h
PWM4PRL_PWM4PRL3_MASK                    equ 0008h
PWM4PRL_PWM4PRL4_POSN                    equ 0004h
PWM4PRL_PWM4PRL4_POSITION                equ 0004h
PWM4PRL_PWM4PRL4_SIZE                    equ 0001h
PWM4PRL_PWM4PRL4_LENGTH                  equ 0001h
PWM4PRL_PWM4PRL4_MASK                    equ 0010h
PWM4PRL_PWM4PRL5_POSN                    equ 0005h
PWM4PRL_PWM4PRL5_POSITION                equ 0005h
PWM4PRL_PWM4PRL5_SIZE                    equ 0001h
PWM4PRL_PWM4PRL5_LENGTH                  equ 0001h
PWM4PRL_PWM4PRL5_MASK                    equ 0020h
PWM4PRL_PWM4PRL6_POSN                    equ 0006h
PWM4PRL_PWM4PRL6_POSITION                equ 0006h
PWM4PRL_PWM4PRL6_SIZE                    equ 0001h
PWM4PRL_PWM4PRL6_LENGTH                  equ 0001h
PWM4PRL_PWM4PRL6_MASK                    equ 0040h
PWM4PRL_PWM4PRL7_POSN                    equ 0007h
PWM4PRL_PWM4PRL7_POSITION                equ 0007h
PWM4PRL_PWM4PRL7_SIZE                    equ 0001h
PWM4PRL_PWM4PRL7_LENGTH                  equ 0001h
PWM4PRL_PWM4PRL7_MASK                    equ 0080h
PWM4PRL_PWM4PRL_POSN                     equ 0000h
PWM4PRL_PWM4PRL_POSITION                 equ 0000h
PWM4PRL_PWM4PRL_SIZE                     equ 0008h
PWM4PRL_PWM4PRL_LENGTH                   equ 0008h
PWM4PRL_PWM4PRL_MASK                     equ 00FFh

// Register: PWM4PRH
#define PWM4PRH PWM4PRH
PWM4PRH                                  equ 0DC6h
// bitfield definitions
PWM4PRH_PR_POSN                          equ 0000h
PWM4PRH_PR_POSITION                      equ 0000h
PWM4PRH_PR_SIZE                          equ 0008h
PWM4PRH_PR_LENGTH                        equ 0008h
PWM4PRH_PR_MASK                          equ 00FFh
PWM4PRH_PWM4PRH0_POSN                    equ 0000h
PWM4PRH_PWM4PRH0_POSITION                equ 0000h
PWM4PRH_PWM4PRH0_SIZE                    equ 0001h
PWM4PRH_PWM4PRH0_LENGTH                  equ 0001h
PWM4PRH_PWM4PRH0_MASK                    equ 0001h
PWM4PRH_PWM4PRH1_POSN                    equ 0001h
PWM4PRH_PWM4PRH1_POSITION                equ 0001h
PWM4PRH_PWM4PRH1_SIZE                    equ 0001h
PWM4PRH_PWM4PRH1_LENGTH                  equ 0001h
PWM4PRH_PWM4PRH1_MASK                    equ 0002h
PWM4PRH_PWM4PRH2_POSN                    equ 0002h
PWM4PRH_PWM4PRH2_POSITION                equ 0002h
PWM4PRH_PWM4PRH2_SIZE                    equ 0001h
PWM4PRH_PWM4PRH2_LENGTH                  equ 0001h
PWM4PRH_PWM4PRH2_MASK                    equ 0004h
PWM4PRH_PWM4PRH3_POSN                    equ 0003h
PWM4PRH_PWM4PRH3_POSITION                equ 0003h
PWM4PRH_PWM4PRH3_SIZE                    equ 0001h
PWM4PRH_PWM4PRH3_LENGTH                  equ 0001h
PWM4PRH_PWM4PRH3_MASK                    equ 0008h
PWM4PRH_PWM4PRH4_POSN                    equ 0004h
PWM4PRH_PWM4PRH4_POSITION                equ 0004h
PWM4PRH_PWM4PRH4_SIZE                    equ 0001h
PWM4PRH_PWM4PRH4_LENGTH                  equ 0001h
PWM4PRH_PWM4PRH4_MASK                    equ 0010h
PWM4PRH_PWM4PRH5_POSN                    equ 0005h
PWM4PRH_PWM4PRH5_POSITION                equ 0005h
PWM4PRH_PWM4PRH5_SIZE                    equ 0001h
PWM4PRH_PWM4PRH5_LENGTH                  equ 0001h
PWM4PRH_PWM4PRH5_MASK                    equ 0020h
PWM4PRH_PWM4PRH6_POSN                    equ 0006h
PWM4PRH_PWM4PRH6_POSITION                equ 0006h
PWM4PRH_PWM4PRH6_SIZE                    equ 0001h
PWM4PRH_PWM4PRH6_LENGTH                  equ 0001h
PWM4PRH_PWM4PRH6_MASK                    equ 0040h
PWM4PRH_PWM4PRH7_POSN                    equ 0007h
PWM4PRH_PWM4PRH7_POSITION                equ 0007h
PWM4PRH_PWM4PRH7_SIZE                    equ 0001h
PWM4PRH_PWM4PRH7_LENGTH                  equ 0001h
PWM4PRH_PWM4PRH7_MASK                    equ 0080h
PWM4PRH_PWM4PRH_POSN                     equ 0000h
PWM4PRH_PWM4PRH_POSITION                 equ 0000h
PWM4PRH_PWM4PRH_SIZE                     equ 0008h
PWM4PRH_PWM4PRH_LENGTH                   equ 0008h
PWM4PRH_PWM4PRH_MASK                     equ 00FFh

// Register: PWM4OFL
#define PWM4OFL PWM4OFL
PWM4OFL                                  equ 0DC7h
// bitfield definitions
PWM4OFL_OF_POSN                          equ 0000h
PWM4OFL_OF_POSITION                      equ 0000h
PWM4OFL_OF_SIZE                          equ 0008h
PWM4OFL_OF_LENGTH                        equ 0008h
PWM4OFL_OF_MASK                          equ 00FFh
PWM4OFL_PWM4OFL0_POSN                    equ 0000h
PWM4OFL_PWM4OFL0_POSITION                equ 0000h
PWM4OFL_PWM4OFL0_SIZE                    equ 0001h
PWM4OFL_PWM4OFL0_LENGTH                  equ 0001h
PWM4OFL_PWM4OFL0_MASK                    equ 0001h
PWM4OFL_PWM4OFL1_POSN                    equ 0001h
PWM4OFL_PWM4OFL1_POSITION                equ 0001h
PWM4OFL_PWM4OFL1_SIZE                    equ 0001h
PWM4OFL_PWM4OFL1_LENGTH                  equ 0001h
PWM4OFL_PWM4OFL1_MASK                    equ 0002h
PWM4OFL_PWM4OFL2_POSN                    equ 0002h
PWM4OFL_PWM4OFL2_POSITION                equ 0002h
PWM4OFL_PWM4OFL2_SIZE                    equ 0001h
PWM4OFL_PWM4OFL2_LENGTH                  equ 0001h
PWM4OFL_PWM4OFL2_MASK                    equ 0004h
PWM4OFL_PWM4OFL3_POSN                    equ 0003h
PWM4OFL_PWM4OFL3_POSITION                equ 0003h
PWM4OFL_PWM4OFL3_SIZE                    equ 0001h
PWM4OFL_PWM4OFL3_LENGTH                  equ 0001h
PWM4OFL_PWM4OFL3_MASK                    equ 0008h
PWM4OFL_PWM4OFL4_POSN                    equ 0004h
PWM4OFL_PWM4OFL4_POSITION                equ 0004h
PWM4OFL_PWM4OFL4_SIZE                    equ 0001h
PWM4OFL_PWM4OFL4_LENGTH                  equ 0001h
PWM4OFL_PWM4OFL4_MASK                    equ 0010h
PWM4OFL_PWM4OFL5_POSN                    equ 0005h
PWM4OFL_PWM4OFL5_POSITION                equ 0005h
PWM4OFL_PWM4OFL5_SIZE                    equ 0001h
PWM4OFL_PWM4OFL5_LENGTH                  equ 0001h
PWM4OFL_PWM4OFL5_MASK                    equ 0020h
PWM4OFL_PWM4OFL6_POSN                    equ 0006h
PWM4OFL_PWM4OFL6_POSITION                equ 0006h
PWM4OFL_PWM4OFL6_SIZE                    equ 0001h
PWM4OFL_PWM4OFL6_LENGTH                  equ 0001h
PWM4OFL_PWM4OFL6_MASK                    equ 0040h
PWM4OFL_PWM4OFL7_POSN                    equ 0007h
PWM4OFL_PWM4OFL7_POSITION                equ 0007h
PWM4OFL_PWM4OFL7_SIZE                    equ 0001h
PWM4OFL_PWM4OFL7_LENGTH                  equ 0001h
PWM4OFL_PWM4OFL7_MASK                    equ 0080h
PWM4OFL_PWM4OFL_POSN                     equ 0000h
PWM4OFL_PWM4OFL_POSITION                 equ 0000h
PWM4OFL_PWM4OFL_SIZE                     equ 0008h
PWM4OFL_PWM4OFL_LENGTH                   equ 0008h
PWM4OFL_PWM4OFL_MASK                     equ 00FFh

// Register: PWM4OFH
#define PWM4OFH PWM4OFH
PWM4OFH                                  equ 0DC8h
// bitfield definitions
PWM4OFH_OF_POSN                          equ 0000h
PWM4OFH_OF_POSITION                      equ 0000h
PWM4OFH_OF_SIZE                          equ 0008h
PWM4OFH_OF_LENGTH                        equ 0008h
PWM4OFH_OF_MASK                          equ 00FFh
PWM4OFH_PWM4OFH0_POSN                    equ 0000h
PWM4OFH_PWM4OFH0_POSITION                equ 0000h
PWM4OFH_PWM4OFH0_SIZE                    equ 0001h
PWM4OFH_PWM4OFH0_LENGTH                  equ 0001h
PWM4OFH_PWM4OFH0_MASK                    equ 0001h
PWM4OFH_PWM4OFH1_POSN                    equ 0001h
PWM4OFH_PWM4OFH1_POSITION                equ 0001h
PWM4OFH_PWM4OFH1_SIZE                    equ 0001h
PWM4OFH_PWM4OFH1_LENGTH                  equ 0001h
PWM4OFH_PWM4OFH1_MASK                    equ 0002h
PWM4OFH_PWM4OFH2_POSN                    equ 0002h
PWM4OFH_PWM4OFH2_POSITION                equ 0002h
PWM4OFH_PWM4OFH2_SIZE                    equ 0001h
PWM4OFH_PWM4OFH2_LENGTH                  equ 0001h
PWM4OFH_PWM4OFH2_MASK                    equ 0004h
PWM4OFH_PWM4OFH3_POSN                    equ 0003h
PWM4OFH_PWM4OFH3_POSITION                equ 0003h
PWM4OFH_PWM4OFH3_SIZE                    equ 0001h
PWM4OFH_PWM4OFH3_LENGTH                  equ 0001h
PWM4OFH_PWM4OFH3_MASK                    equ 0008h
PWM4OFH_PWM4OFH4_POSN                    equ 0004h
PWM4OFH_PWM4OFH4_POSITION                equ 0004h
PWM4OFH_PWM4OFH4_SIZE                    equ 0001h
PWM4OFH_PWM4OFH4_LENGTH                  equ 0001h
PWM4OFH_PWM4OFH4_MASK                    equ 0010h
PWM4OFH_PWM4OFH5_POSN                    equ 0005h
PWM4OFH_PWM4OFH5_POSITION                equ 0005h
PWM4OFH_PWM4OFH5_SIZE                    equ 0001h
PWM4OFH_PWM4OFH5_LENGTH                  equ 0001h
PWM4OFH_PWM4OFH5_MASK                    equ 0020h
PWM4OFH_PWM4OFH6_POSN                    equ 0006h
PWM4OFH_PWM4OFH6_POSITION                equ 0006h
PWM4OFH_PWM4OFH6_SIZE                    equ 0001h
PWM4OFH_PWM4OFH6_LENGTH                  equ 0001h
PWM4OFH_PWM4OFH6_MASK                    equ 0040h
PWM4OFH_PWM4OFH7_POSN                    equ 0007h
PWM4OFH_PWM4OFH7_POSITION                equ 0007h
PWM4OFH_PWM4OFH7_SIZE                    equ 0001h
PWM4OFH_PWM4OFH7_LENGTH                  equ 0001h
PWM4OFH_PWM4OFH7_MASK                    equ 0080h
PWM4OFH_PWM4OFH_POSN                     equ 0000h
PWM4OFH_PWM4OFH_POSITION                 equ 0000h
PWM4OFH_PWM4OFH_SIZE                     equ 0008h
PWM4OFH_PWM4OFH_LENGTH                   equ 0008h
PWM4OFH_PWM4OFH_MASK                     equ 00FFh

// Register: PWM4TMRL
#define PWM4TMRL PWM4TMRL
PWM4TMRL                                 equ 0DC9h
// bitfield definitions
PWM4TMRL_TMR_POSN                        equ 0000h
PWM4TMRL_TMR_POSITION                    equ 0000h
PWM4TMRL_TMR_SIZE                        equ 0008h
PWM4TMRL_TMR_LENGTH                      equ 0008h
PWM4TMRL_TMR_MASK                        equ 00FFh
PWM4TMRL_PWM4TMRL0_POSN                  equ 0000h
PWM4TMRL_PWM4TMRL0_POSITION              equ 0000h
PWM4TMRL_PWM4TMRL0_SIZE                  equ 0001h
PWM4TMRL_PWM4TMRL0_LENGTH                equ 0001h
PWM4TMRL_PWM4TMRL0_MASK                  equ 0001h
PWM4TMRL_PWM4TMRL1_POSN                  equ 0001h
PWM4TMRL_PWM4TMRL1_POSITION              equ 0001h
PWM4TMRL_PWM4TMRL1_SIZE                  equ 0001h
PWM4TMRL_PWM4TMRL1_LENGTH                equ 0001h
PWM4TMRL_PWM4TMRL1_MASK                  equ 0002h
PWM4TMRL_PWM4TMRL2_POSN                  equ 0002h
PWM4TMRL_PWM4TMRL2_POSITION              equ 0002h
PWM4TMRL_PWM4TMRL2_SIZE                  equ 0001h
PWM4TMRL_PWM4TMRL2_LENGTH                equ 0001h
PWM4TMRL_PWM4TMRL2_MASK                  equ 0004h
PWM4TMRL_PWM4TMRL3_POSN                  equ 0003h
PWM4TMRL_PWM4TMRL3_POSITION              equ 0003h
PWM4TMRL_PWM4TMRL3_SIZE                  equ 0001h
PWM4TMRL_PWM4TMRL3_LENGTH                equ 0001h
PWM4TMRL_PWM4TMRL3_MASK                  equ 0008h
PWM4TMRL_PWM4TMRL4_POSN                  equ 0004h
PWM4TMRL_PWM4TMRL4_POSITION              equ 0004h
PWM4TMRL_PWM4TMRL4_SIZE                  equ 0001h
PWM4TMRL_PWM4TMRL4_LENGTH                equ 0001h
PWM4TMRL_PWM4TMRL4_MASK                  equ 0010h
PWM4TMRL_PWM4TMRL5_POSN                  equ 0005h
PWM4TMRL_PWM4TMRL5_POSITION              equ 0005h
PWM4TMRL_PWM4TMRL5_SIZE                  equ 0001h
PWM4TMRL_PWM4TMRL5_LENGTH                equ 0001h
PWM4TMRL_PWM4TMRL5_MASK                  equ 0020h
PWM4TMRL_PWM4TMRL6_POSN                  equ 0006h
PWM4TMRL_PWM4TMRL6_POSITION              equ 0006h
PWM4TMRL_PWM4TMRL6_SIZE                  equ 0001h
PWM4TMRL_PWM4TMRL6_LENGTH                equ 0001h
PWM4TMRL_PWM4TMRL6_MASK                  equ 0040h
PWM4TMRL_PWM4TMRL7_POSN                  equ 0007h
PWM4TMRL_PWM4TMRL7_POSITION              equ 0007h
PWM4TMRL_PWM4TMRL7_SIZE                  equ 0001h
PWM4TMRL_PWM4TMRL7_LENGTH                equ 0001h
PWM4TMRL_PWM4TMRL7_MASK                  equ 0080h
PWM4TMRL_PWM4TMRL_POSN                   equ 0000h
PWM4TMRL_PWM4TMRL_POSITION               equ 0000h
PWM4TMRL_PWM4TMRL_SIZE                   equ 0008h
PWM4TMRL_PWM4TMRL_LENGTH                 equ 0008h
PWM4TMRL_PWM4TMRL_MASK                   equ 00FFh

// Register: PWM4TMRH
#define PWM4TMRH PWM4TMRH
PWM4TMRH                                 equ 0DCAh
// bitfield definitions
PWM4TMRH_TMR_POSN                        equ 0000h
PWM4TMRH_TMR_POSITION                    equ 0000h
PWM4TMRH_TMR_SIZE                        equ 0008h
PWM4TMRH_TMR_LENGTH                      equ 0008h
PWM4TMRH_TMR_MASK                        equ 00FFh
PWM4TMRH_PWM4TMRH0_POSN                  equ 0000h
PWM4TMRH_PWM4TMRH0_POSITION              equ 0000h
PWM4TMRH_PWM4TMRH0_SIZE                  equ 0001h
PWM4TMRH_PWM4TMRH0_LENGTH                equ 0001h
PWM4TMRH_PWM4TMRH0_MASK                  equ 0001h
PWM4TMRH_PWM4TMRH1_POSN                  equ 0001h
PWM4TMRH_PWM4TMRH1_POSITION              equ 0001h
PWM4TMRH_PWM4TMRH1_SIZE                  equ 0001h
PWM4TMRH_PWM4TMRH1_LENGTH                equ 0001h
PWM4TMRH_PWM4TMRH1_MASK                  equ 0002h
PWM4TMRH_PWM4TMRH2_POSN                  equ 0002h
PWM4TMRH_PWM4TMRH2_POSITION              equ 0002h
PWM4TMRH_PWM4TMRH2_SIZE                  equ 0001h
PWM4TMRH_PWM4TMRH2_LENGTH                equ 0001h
PWM4TMRH_PWM4TMRH2_MASK                  equ 0004h
PWM4TMRH_PWM4TMRH3_POSN                  equ 0003h
PWM4TMRH_PWM4TMRH3_POSITION              equ 0003h
PWM4TMRH_PWM4TMRH3_SIZE                  equ 0001h
PWM4TMRH_PWM4TMRH3_LENGTH                equ 0001h
PWM4TMRH_PWM4TMRH3_MASK                  equ 0008h
PWM4TMRH_PWM4TMRH4_POSN                  equ 0004h
PWM4TMRH_PWM4TMRH4_POSITION              equ 0004h
PWM4TMRH_PWM4TMRH4_SIZE                  equ 0001h
PWM4TMRH_PWM4TMRH4_LENGTH                equ 0001h
PWM4TMRH_PWM4TMRH4_MASK                  equ 0010h
PWM4TMRH_PWM4TMRH5_POSN                  equ 0005h
PWM4TMRH_PWM4TMRH5_POSITION              equ 0005h
PWM4TMRH_PWM4TMRH5_SIZE                  equ 0001h
PWM4TMRH_PWM4TMRH5_LENGTH                equ 0001h
PWM4TMRH_PWM4TMRH5_MASK                  equ 0020h
PWM4TMRH_PWM4TMRH6_POSN                  equ 0006h
PWM4TMRH_PWM4TMRH6_POSITION              equ 0006h
PWM4TMRH_PWM4TMRH6_SIZE                  equ 0001h
PWM4TMRH_PWM4TMRH6_LENGTH                equ 0001h
PWM4TMRH_PWM4TMRH6_MASK                  equ 0040h
PWM4TMRH_PWM4TMRH7_POSN                  equ 0007h
PWM4TMRH_PWM4TMRH7_POSITION              equ 0007h
PWM4TMRH_PWM4TMRH7_SIZE                  equ 0001h
PWM4TMRH_PWM4TMRH7_LENGTH                equ 0001h
PWM4TMRH_PWM4TMRH7_MASK                  equ 0080h
PWM4TMRH_PWM4TMRH_POSN                   equ 0000h
PWM4TMRH_PWM4TMRH_POSITION               equ 0000h
PWM4TMRH_PWM4TMRH_SIZE                   equ 0008h
PWM4TMRH_PWM4TMRH_LENGTH                 equ 0008h
PWM4TMRH_PWM4TMRH_MASK                   equ 00FFh

// Register: PWM4CON
#define PWM4CON PWM4CON
PWM4CON                                  equ 0DCBh
// bitfield definitions
PWM4CON_MODE_POSN                        equ 0002h
PWM4CON_MODE_POSITION                    equ 0002h
PWM4CON_MODE_SIZE                        equ 0002h
PWM4CON_MODE_LENGTH                      equ 0002h
PWM4CON_MODE_MASK                        equ 000Ch
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
PWM4CON_OE_POSN                          equ 0006h
PWM4CON_OE_POSITION                      equ 0006h
PWM4CON_OE_SIZE                          equ 0001h
PWM4CON_OE_LENGTH                        equ 0001h
PWM4CON_OE_MASK                          equ 0040h
PWM4CON_EN_POSN                          equ 0007h
PWM4CON_EN_POSITION                      equ 0007h
PWM4CON_EN_SIZE                          equ 0001h
PWM4CON_EN_LENGTH                        equ 0001h
PWM4CON_EN_MASK                          equ 0080h
PWM4CON_PWM4MODE0_POSN                   equ 0002h
PWM4CON_PWM4MODE0_POSITION               equ 0002h
PWM4CON_PWM4MODE0_SIZE                   equ 0001h
PWM4CON_PWM4MODE0_LENGTH                 equ 0001h
PWM4CON_PWM4MODE0_MASK                   equ 0004h
PWM4CON_PWM4MODE1_POSN                   equ 0003h
PWM4CON_PWM4MODE1_POSITION               equ 0003h
PWM4CON_PWM4MODE1_SIZE                   equ 0001h
PWM4CON_PWM4MODE1_LENGTH                 equ 0001h
PWM4CON_PWM4MODE1_MASK                   equ 0008h
PWM4CON_PWM4MODE_POSN                    equ 0002h
PWM4CON_PWM4MODE_POSITION                equ 0002h
PWM4CON_PWM4MODE_SIZE                    equ 0002h
PWM4CON_PWM4MODE_LENGTH                  equ 0002h
PWM4CON_PWM4MODE_MASK                    equ 000Ch
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
PWM4CON_PWM4OE_POSN                      equ 0006h
PWM4CON_PWM4OE_POSITION                  equ 0006h
PWM4CON_PWM4OE_SIZE                      equ 0001h
PWM4CON_PWM4OE_LENGTH                    equ 0001h
PWM4CON_PWM4OE_MASK                      equ 0040h
PWM4CON_PWM4EN_POSN                      equ 0007h
PWM4CON_PWM4EN_POSITION                  equ 0007h
PWM4CON_PWM4EN_SIZE                      equ 0001h
PWM4CON_PWM4EN_LENGTH                    equ 0001h
PWM4CON_PWM4EN_MASK                      equ 0080h
PWM4CON_MODE0_POSN                       equ 0002h
PWM4CON_MODE0_POSITION                   equ 0002h
PWM4CON_MODE0_SIZE                       equ 0001h
PWM4CON_MODE0_LENGTH                     equ 0001h
PWM4CON_MODE0_MASK                       equ 0004h
PWM4CON_MODE1_POSN                       equ 0003h
PWM4CON_MODE1_POSITION                   equ 0003h
PWM4CON_MODE1_SIZE                       equ 0001h
PWM4CON_MODE1_LENGTH                     equ 0001h
PWM4CON_MODE1_MASK                       equ 0008h

// Register: PWM4INTE
#define PWM4INTE PWM4INTE
PWM4INTE                                 equ 0DCCh
// bitfield definitions
PWM4INTE_PRIE_POSN                       equ 0000h
PWM4INTE_PRIE_POSITION                   equ 0000h
PWM4INTE_PRIE_SIZE                       equ 0001h
PWM4INTE_PRIE_LENGTH                     equ 0001h
PWM4INTE_PRIE_MASK                       equ 0001h
PWM4INTE_DCIE_POSN                       equ 0001h
PWM4INTE_DCIE_POSITION                   equ 0001h
PWM4INTE_DCIE_SIZE                       equ 0001h
PWM4INTE_DCIE_LENGTH                     equ 0001h
PWM4INTE_DCIE_MASK                       equ 0002h
PWM4INTE_PHIE_POSN                       equ 0002h
PWM4INTE_PHIE_POSITION                   equ 0002h
PWM4INTE_PHIE_SIZE                       equ 0001h
PWM4INTE_PHIE_LENGTH                     equ 0001h
PWM4INTE_PHIE_MASK                       equ 0004h
PWM4INTE_OFIE_POSN                       equ 0003h
PWM4INTE_OFIE_POSITION                   equ 0003h
PWM4INTE_OFIE_SIZE                       equ 0001h
PWM4INTE_OFIE_LENGTH                     equ 0001h
PWM4INTE_OFIE_MASK                       equ 0008h
PWM4INTE_PWM4PRIE_POSN                   equ 0000h
PWM4INTE_PWM4PRIE_POSITION               equ 0000h
PWM4INTE_PWM4PRIE_SIZE                   equ 0001h
PWM4INTE_PWM4PRIE_LENGTH                 equ 0001h
PWM4INTE_PWM4PRIE_MASK                   equ 0001h
PWM4INTE_PWM4DCIE_POSN                   equ 0001h
PWM4INTE_PWM4DCIE_POSITION               equ 0001h
PWM4INTE_PWM4DCIE_SIZE                   equ 0001h
PWM4INTE_PWM4DCIE_LENGTH                 equ 0001h
PWM4INTE_PWM4DCIE_MASK                   equ 0002h
PWM4INTE_PWM4PHIE_POSN                   equ 0002h
PWM4INTE_PWM4PHIE_POSITION               equ 0002h
PWM4INTE_PWM4PHIE_SIZE                   equ 0001h
PWM4INTE_PWM4PHIE_LENGTH                 equ 0001h
PWM4INTE_PWM4PHIE_MASK                   equ 0004h
PWM4INTE_PWM4OFIE_POSN                   equ 0003h
PWM4INTE_PWM4OFIE_POSITION               equ 0003h
PWM4INTE_PWM4OFIE_SIZE                   equ 0001h
PWM4INTE_PWM4OFIE_LENGTH                 equ 0001h
PWM4INTE_PWM4OFIE_MASK                   equ 0008h

// Register: PWM4INTF
#define PWM4INTF PWM4INTF
PWM4INTF                                 equ 0DCDh
// bitfield definitions
PWM4INTF_PRIF_POSN                       equ 0000h
PWM4INTF_PRIF_POSITION                   equ 0000h
PWM4INTF_PRIF_SIZE                       equ 0001h
PWM4INTF_PRIF_LENGTH                     equ 0001h
PWM4INTF_PRIF_MASK                       equ 0001h
PWM4INTF_DCIF_POSN                       equ 0001h
PWM4INTF_DCIF_POSITION                   equ 0001h
PWM4INTF_DCIF_SIZE                       equ 0001h
PWM4INTF_DCIF_LENGTH                     equ 0001h
PWM4INTF_DCIF_MASK                       equ 0002h
PWM4INTF_PHIF_POSN                       equ 0002h
PWM4INTF_PHIF_POSITION                   equ 0002h
PWM4INTF_PHIF_SIZE                       equ 0001h
PWM4INTF_PHIF_LENGTH                     equ 0001h
PWM4INTF_PHIF_MASK                       equ 0004h
PWM4INTF_OFIF_POSN                       equ 0003h
PWM4INTF_OFIF_POSITION                   equ 0003h
PWM4INTF_OFIF_SIZE                       equ 0001h
PWM4INTF_OFIF_LENGTH                     equ 0001h
PWM4INTF_OFIF_MASK                       equ 0008h
PWM4INTF_PWM4PRIF_POSN                   equ 0000h
PWM4INTF_PWM4PRIF_POSITION               equ 0000h
PWM4INTF_PWM4PRIF_SIZE                   equ 0001h
PWM4INTF_PWM4PRIF_LENGTH                 equ 0001h
PWM4INTF_PWM4PRIF_MASK                   equ 0001h
PWM4INTF_PWM4DCIF_POSN                   equ 0001h
PWM4INTF_PWM4DCIF_POSITION               equ 0001h
PWM4INTF_PWM4DCIF_SIZE                   equ 0001h
PWM4INTF_PWM4DCIF_LENGTH                 equ 0001h
PWM4INTF_PWM4DCIF_MASK                   equ 0002h
PWM4INTF_PWM4PHIF_POSN                   equ 0002h
PWM4INTF_PWM4PHIF_POSITION               equ 0002h
PWM4INTF_PWM4PHIF_SIZE                   equ 0001h
PWM4INTF_PWM4PHIF_LENGTH                 equ 0001h
PWM4INTF_PWM4PHIF_MASK                   equ 0004h
PWM4INTF_PWM4OFIF_POSN                   equ 0003h
PWM4INTF_PWM4OFIF_POSITION               equ 0003h
PWM4INTF_PWM4OFIF_SIZE                   equ 0001h
PWM4INTF_PWM4OFIF_LENGTH                 equ 0001h
PWM4INTF_PWM4OFIF_MASK                   equ 0008h

// Register: PWM4CLKCON
#define PWM4CLKCON PWM4CLKCON
PWM4CLKCON                               equ 0DCEh
// bitfield definitions
PWM4CLKCON_CS_POSN                       equ 0000h
PWM4CLKCON_CS_POSITION                   equ 0000h
PWM4CLKCON_CS_SIZE                       equ 0002h
PWM4CLKCON_CS_LENGTH                     equ 0002h
PWM4CLKCON_CS_MASK                       equ 0003h
PWM4CLKCON_PS_POSN                       equ 0004h
PWM4CLKCON_PS_POSITION                   equ 0004h
PWM4CLKCON_PS_SIZE                       equ 0003h
PWM4CLKCON_PS_LENGTH                     equ 0003h
PWM4CLKCON_PS_MASK                       equ 0070h
PWM4CLKCON_PWM4CS0_POSN                  equ 0000h
PWM4CLKCON_PWM4CS0_POSITION              equ 0000h
PWM4CLKCON_PWM4CS0_SIZE                  equ 0001h
PWM4CLKCON_PWM4CS0_LENGTH                equ 0001h
PWM4CLKCON_PWM4CS0_MASK                  equ 0001h
PWM4CLKCON_PWM4CS1_POSN                  equ 0001h
PWM4CLKCON_PWM4CS1_POSITION              equ 0001h
PWM4CLKCON_PWM4CS1_SIZE                  equ 0001h
PWM4CLKCON_PWM4CS1_LENGTH                equ 0001h
PWM4CLKCON_PWM4CS1_MASK                  equ 0002h
PWM4CLKCON_PWM4PS0_POSN                  equ 0004h
PWM4CLKCON_PWM4PS0_POSITION              equ 0004h
PWM4CLKCON_PWM4PS0_SIZE                  equ 0001h
PWM4CLKCON_PWM4PS0_LENGTH                equ 0001h
PWM4CLKCON_PWM4PS0_MASK                  equ 0010h
PWM4CLKCON_PWM4PS1_POSN                  equ 0005h
PWM4CLKCON_PWM4PS1_POSITION              equ 0005h
PWM4CLKCON_PWM4PS1_SIZE                  equ 0001h
PWM4CLKCON_PWM4PS1_LENGTH                equ 0001h
PWM4CLKCON_PWM4PS1_MASK                  equ 0020h
PWM4CLKCON_PWM4PS2_POSN                  equ 0006h
PWM4CLKCON_PWM4PS2_POSITION              equ 0006h
PWM4CLKCON_PWM4PS2_SIZE                  equ 0001h
PWM4CLKCON_PWM4PS2_LENGTH                equ 0001h
PWM4CLKCON_PWM4PS2_MASK                  equ 0040h
PWM4CLKCON_PWM4CS_POSN                   equ 0000h
PWM4CLKCON_PWM4CS_POSITION               equ 0000h
PWM4CLKCON_PWM4CS_SIZE                   equ 0003h
PWM4CLKCON_PWM4CS_LENGTH                 equ 0003h
PWM4CLKCON_PWM4CS_MASK                   equ 0007h
PWM4CLKCON_PWM4PS_POSN                   equ 0004h
PWM4CLKCON_PWM4PS_POSITION               equ 0004h
PWM4CLKCON_PWM4PS_SIZE                   equ 0003h
PWM4CLKCON_PWM4PS_LENGTH                 equ 0003h
PWM4CLKCON_PWM4PS_MASK                   equ 0070h
PWM4CLKCON_CS0_POSN                      equ 0000h
PWM4CLKCON_CS0_POSITION                  equ 0000h
PWM4CLKCON_CS0_SIZE                      equ 0001h
PWM4CLKCON_CS0_LENGTH                    equ 0001h
PWM4CLKCON_CS0_MASK                      equ 0001h
PWM4CLKCON_CS1_POSN                      equ 0001h
PWM4CLKCON_CS1_POSITION                  equ 0001h
PWM4CLKCON_CS1_SIZE                      equ 0001h
PWM4CLKCON_CS1_LENGTH                    equ 0001h
PWM4CLKCON_CS1_MASK                      equ 0002h
PWM4CLKCON_PS0_POSN                      equ 0004h
PWM4CLKCON_PS0_POSITION                  equ 0004h
PWM4CLKCON_PS0_SIZE                      equ 0001h
PWM4CLKCON_PS0_LENGTH                    equ 0001h
PWM4CLKCON_PS0_MASK                      equ 0010h
PWM4CLKCON_PS1_POSN                      equ 0005h
PWM4CLKCON_PS1_POSITION                  equ 0005h
PWM4CLKCON_PS1_SIZE                      equ 0001h
PWM4CLKCON_PS1_LENGTH                    equ 0001h
PWM4CLKCON_PS1_MASK                      equ 0020h
PWM4CLKCON_PS2_POSN                      equ 0006h
PWM4CLKCON_PS2_POSITION                  equ 0006h
PWM4CLKCON_PS2_SIZE                      equ 0001h
PWM4CLKCON_PS2_LENGTH                    equ 0001h
PWM4CLKCON_PS2_MASK                      equ 0040h

// Register: PWM4LDCON
#define PWM4LDCON PWM4LDCON
PWM4LDCON                                equ 0DCFh
// bitfield definitions
PWM4LDCON_LDS_POSN                       equ 0000h
PWM4LDCON_LDS_POSITION                   equ 0000h
PWM4LDCON_LDS_SIZE                       equ 0002h
PWM4LDCON_LDS_LENGTH                     equ 0002h
PWM4LDCON_LDS_MASK                       equ 0003h
PWM4LDCON_LDT_POSN                       equ 0006h
PWM4LDCON_LDT_POSITION                   equ 0006h
PWM4LDCON_LDT_SIZE                       equ 0001h
PWM4LDCON_LDT_LENGTH                     equ 0001h
PWM4LDCON_LDT_MASK                       equ 0040h
PWM4LDCON_LDA_POSN                       equ 0007h
PWM4LDCON_LDA_POSITION                   equ 0007h
PWM4LDCON_LDA_SIZE                       equ 0001h
PWM4LDCON_LDA_LENGTH                     equ 0001h
PWM4LDCON_LDA_MASK                       equ 0080h
PWM4LDCON_PWM4LDS0_POSN                  equ 0000h
PWM4LDCON_PWM4LDS0_POSITION              equ 0000h
PWM4LDCON_PWM4LDS0_SIZE                  equ 0001h
PWM4LDCON_PWM4LDS0_LENGTH                equ 0001h
PWM4LDCON_PWM4LDS0_MASK                  equ 0001h
PWM4LDCON_PWM4LDS1_POSN                  equ 0001h
PWM4LDCON_PWM4LDS1_POSITION              equ 0001h
PWM4LDCON_PWM4LDS1_SIZE                  equ 0001h
PWM4LDCON_PWM4LDS1_LENGTH                equ 0001h
PWM4LDCON_PWM4LDS1_MASK                  equ 0002h
PWM4LDCON_PWM4LDS_POSN                   equ 0000h
PWM4LDCON_PWM4LDS_POSITION               equ 0000h
PWM4LDCON_PWM4LDS_SIZE                   equ 0002h
PWM4LDCON_PWM4LDS_LENGTH                 equ 0002h
PWM4LDCON_PWM4LDS_MASK                   equ 0003h
PWM4LDCON_PWM4LDM_POSN                   equ 0006h
PWM4LDCON_PWM4LDM_POSITION               equ 0006h
PWM4LDCON_PWM4LDM_SIZE                   equ 0001h
PWM4LDCON_PWM4LDM_LENGTH                 equ 0001h
PWM4LDCON_PWM4LDM_MASK                   equ 0040h
PWM4LDCON_PWM4LD_POSN                    equ 0007h
PWM4LDCON_PWM4LD_POSITION                equ 0007h
PWM4LDCON_PWM4LD_SIZE                    equ 0001h
PWM4LDCON_PWM4LD_LENGTH                  equ 0001h
PWM4LDCON_PWM4LD_MASK                    equ 0080h
PWM4LDCON_LDS0_POSN                      equ 0000h
PWM4LDCON_LDS0_POSITION                  equ 0000h
PWM4LDCON_LDS0_SIZE                      equ 0001h
PWM4LDCON_LDS0_LENGTH                    equ 0001h
PWM4LDCON_LDS0_MASK                      equ 0001h
PWM4LDCON_LDS1_POSN                      equ 0001h
PWM4LDCON_LDS1_POSITION                  equ 0001h
PWM4LDCON_LDS1_SIZE                      equ 0001h
PWM4LDCON_LDS1_LENGTH                    equ 0001h
PWM4LDCON_LDS1_MASK                      equ 0002h

// Register: PWM4OFCON
#define PWM4OFCON PWM4OFCON
PWM4OFCON                                equ 0DD0h
// bitfield definitions
PWM4OFCON_OFS_POSN                       equ 0000h
PWM4OFCON_OFS_POSITION                   equ 0000h
PWM4OFCON_OFS_SIZE                       equ 0002h
PWM4OFCON_OFS_LENGTH                     equ 0002h
PWM4OFCON_OFS_MASK                       equ 0003h
PWM4OFCON_OFO_POSN                       equ 0004h
PWM4OFCON_OFO_POSITION                   equ 0004h
PWM4OFCON_OFO_SIZE                       equ 0001h
PWM4OFCON_OFO_LENGTH                     equ 0001h
PWM4OFCON_OFO_MASK                       equ 0010h
PWM4OFCON_OFM_POSN                       equ 0005h
PWM4OFCON_OFM_POSITION                   equ 0005h
PWM4OFCON_OFM_SIZE                       equ 0002h
PWM4OFCON_OFM_LENGTH                     equ 0002h
PWM4OFCON_OFM_MASK                       equ 0060h
PWM4OFCON_PWM4OFS0_POSN                  equ 0000h
PWM4OFCON_PWM4OFS0_POSITION              equ 0000h
PWM4OFCON_PWM4OFS0_SIZE                  equ 0001h
PWM4OFCON_PWM4OFS0_LENGTH                equ 0001h
PWM4OFCON_PWM4OFS0_MASK                  equ 0001h
PWM4OFCON_PWM4OFS1_POSN                  equ 0001h
PWM4OFCON_PWM4OFS1_POSITION              equ 0001h
PWM4OFCON_PWM4OFS1_SIZE                  equ 0001h
PWM4OFCON_PWM4OFS1_LENGTH                equ 0001h
PWM4OFCON_PWM4OFS1_MASK                  equ 0002h
PWM4OFCON_PWM4OFM0_POSN                  equ 0005h
PWM4OFCON_PWM4OFM0_POSITION              equ 0005h
PWM4OFCON_PWM4OFM0_SIZE                  equ 0001h
PWM4OFCON_PWM4OFM0_LENGTH                equ 0001h
PWM4OFCON_PWM4OFM0_MASK                  equ 0020h
PWM4OFCON_PWM4OFM1_POSN                  equ 0006h
PWM4OFCON_PWM4OFM1_POSITION              equ 0006h
PWM4OFCON_PWM4OFM1_SIZE                  equ 0001h
PWM4OFCON_PWM4OFM1_LENGTH                equ 0001h
PWM4OFCON_PWM4OFM1_MASK                  equ 0040h
PWM4OFCON_PWM4OFS_POSN                   equ 0000h
PWM4OFCON_PWM4OFS_POSITION               equ 0000h
PWM4OFCON_PWM4OFS_SIZE                   equ 0002h
PWM4OFCON_PWM4OFS_LENGTH                 equ 0002h
PWM4OFCON_PWM4OFS_MASK                   equ 0003h
PWM4OFCON_PWM4OFMC_POSN                  equ 0004h
PWM4OFCON_PWM4OFMC_POSITION              equ 0004h
PWM4OFCON_PWM4OFMC_SIZE                  equ 0001h
PWM4OFCON_PWM4OFMC_LENGTH                equ 0001h
PWM4OFCON_PWM4OFMC_MASK                  equ 0010h
PWM4OFCON_PWM4OFM_POSN                   equ 0005h
PWM4OFCON_PWM4OFM_POSITION               equ 0005h
PWM4OFCON_PWM4OFM_SIZE                   equ 0002h
PWM4OFCON_PWM4OFM_LENGTH                 equ 0002h
PWM4OFCON_PWM4OFM_MASK                   equ 0060h
PWM4OFCON_OFS0_POSN                      equ 0000h
PWM4OFCON_OFS0_POSITION                  equ 0000h
PWM4OFCON_OFS0_SIZE                      equ 0001h
PWM4OFCON_OFS0_LENGTH                    equ 0001h
PWM4OFCON_OFS0_MASK                      equ 0001h
PWM4OFCON_OFS1_POSN                      equ 0001h
PWM4OFCON_OFS1_POSITION                  equ 0001h
PWM4OFCON_OFS1_SIZE                      equ 0001h
PWM4OFCON_OFS1_LENGTH                    equ 0001h
PWM4OFCON_OFS1_MASK                      equ 0002h
PWM4OFCON_OFM0_POSN                      equ 0005h
PWM4OFCON_OFM0_POSITION                  equ 0005h
PWM4OFCON_OFM0_SIZE                      equ 0001h
PWM4OFCON_OFM0_LENGTH                    equ 0001h
PWM4OFCON_OFM0_MASK                      equ 0020h
PWM4OFCON_OFM1_POSN                      equ 0006h
PWM4OFCON_OFM1_POSITION                  equ 0006h
PWM4OFCON_OFM1_SIZE                      equ 0001h
PWM4OFCON_OFM1_LENGTH                    equ 0001h
PWM4OFCON_OFM1_MASK                      equ 0040h

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
INTPPS_INTPPS0_POSN                      equ 0000h
INTPPS_INTPPS0_POSITION                  equ 0000h
INTPPS_INTPPS0_SIZE                      equ 0001h
INTPPS_INTPPS0_LENGTH                    equ 0001h
INTPPS_INTPPS0_MASK                      equ 0001h
INTPPS_INTPPS1_POSN                      equ 0001h
INTPPS_INTPPS1_POSITION                  equ 0001h
INTPPS_INTPPS1_SIZE                      equ 0001h
INTPPS_INTPPS1_LENGTH                    equ 0001h
INTPPS_INTPPS1_MASK                      equ 0002h
INTPPS_INTPPS2_POSN                      equ 0002h
INTPPS_INTPPS2_POSITION                  equ 0002h
INTPPS_INTPPS2_SIZE                      equ 0001h
INTPPS_INTPPS2_LENGTH                    equ 0001h
INTPPS_INTPPS2_MASK                      equ 0004h
INTPPS_INTPPS3_POSN                      equ 0003h
INTPPS_INTPPS3_POSITION                  equ 0003h
INTPPS_INTPPS3_SIZE                      equ 0001h
INTPPS_INTPPS3_LENGTH                    equ 0001h
INTPPS_INTPPS3_MASK                      equ 0008h
INTPPS_INTPPS4_POSN                      equ 0004h
INTPPS_INTPPS4_POSITION                  equ 0004h
INTPPS_INTPPS4_SIZE                      equ 0001h
INTPPS_INTPPS4_LENGTH                    equ 0001h
INTPPS_INTPPS4_MASK                      equ 0010h

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
T0CKIPPS                                 equ 0E11h
// bitfield definitions
T0CKIPPS_T0CKIPPS_POSN                   equ 0000h
T0CKIPPS_T0CKIPPS_POSITION               equ 0000h
T0CKIPPS_T0CKIPPS_SIZE                   equ 0005h
T0CKIPPS_T0CKIPPS_LENGTH                 equ 0005h
T0CKIPPS_T0CKIPPS_MASK                   equ 001Fh
T0CKIPPS_T0CKIPPS0_POSN                  equ 0000h
T0CKIPPS_T0CKIPPS0_POSITION              equ 0000h
T0CKIPPS_T0CKIPPS0_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS0_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS0_MASK                  equ 0001h
T0CKIPPS_T0CKIPPS1_POSN                  equ 0001h
T0CKIPPS_T0CKIPPS1_POSITION              equ 0001h
T0CKIPPS_T0CKIPPS1_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS1_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS1_MASK                  equ 0002h
T0CKIPPS_T0CKIPPS2_POSN                  equ 0002h
T0CKIPPS_T0CKIPPS2_POSITION              equ 0002h
T0CKIPPS_T0CKIPPS2_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS2_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS2_MASK                  equ 0004h
T0CKIPPS_T0CKIPPS3_POSN                  equ 0003h
T0CKIPPS_T0CKIPPS3_POSITION              equ 0003h
T0CKIPPS_T0CKIPPS3_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS3_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS3_MASK                  equ 0008h
T0CKIPPS_T0CKIPPS4_POSN                  equ 0004h
T0CKIPPS_T0CKIPPS4_POSITION              equ 0004h
T0CKIPPS_T0CKIPPS4_SIZE                  equ 0001h
T0CKIPPS_T0CKIPPS4_LENGTH                equ 0001h
T0CKIPPS_T0CKIPPS4_MASK                  equ 0010h

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
T1CKIPPS                                 equ 0E12h
// bitfield definitions
T1CKIPPS_T1CKIPPS_POSN                   equ 0000h
T1CKIPPS_T1CKIPPS_POSITION               equ 0000h
T1CKIPPS_T1CKIPPS_SIZE                   equ 0005h
T1CKIPPS_T1CKIPPS_LENGTH                 equ 0005h
T1CKIPPS_T1CKIPPS_MASK                   equ 001Fh
T1CKIPPS_T1CKIPPS0_POSN                  equ 0000h
T1CKIPPS_T1CKIPPS0_POSITION              equ 0000h
T1CKIPPS_T1CKIPPS0_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS0_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS0_MASK                  equ 0001h
T1CKIPPS_T1CKIPPS1_POSN                  equ 0001h
T1CKIPPS_T1CKIPPS1_POSITION              equ 0001h
T1CKIPPS_T1CKIPPS1_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS1_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS1_MASK                  equ 0002h
T1CKIPPS_T1CKIPPS2_POSN                  equ 0002h
T1CKIPPS_T1CKIPPS2_POSITION              equ 0002h
T1CKIPPS_T1CKIPPS2_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS2_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS2_MASK                  equ 0004h
T1CKIPPS_T1CKIPPS3_POSN                  equ 0003h
T1CKIPPS_T1CKIPPS3_POSITION              equ 0003h
T1CKIPPS_T1CKIPPS3_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS3_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS3_MASK                  equ 0008h
T1CKIPPS_T1CKIPPS4_POSN                  equ 0004h
T1CKIPPS_T1CKIPPS4_POSITION              equ 0004h
T1CKIPPS_T1CKIPPS4_SIZE                  equ 0001h
T1CKIPPS_T1CKIPPS4_LENGTH                equ 0001h
T1CKIPPS_T1CKIPPS4_MASK                  equ 0010h

// Register: T1GPPS
#define T1GPPS T1GPPS
T1GPPS                                   equ 0E13h
// bitfield definitions
T1GPPS_T1GPPS_POSN                       equ 0000h
T1GPPS_T1GPPS_POSITION                   equ 0000h
T1GPPS_T1GPPS_SIZE                       equ 0005h
T1GPPS_T1GPPS_LENGTH                     equ 0005h
T1GPPS_T1GPPS_MASK                       equ 001Fh
T1GPPS_T1GPPS0_POSN                      equ 0000h
T1GPPS_T1GPPS0_POSITION                  equ 0000h
T1GPPS_T1GPPS0_SIZE                      equ 0001h
T1GPPS_T1GPPS0_LENGTH                    equ 0001h
T1GPPS_T1GPPS0_MASK                      equ 0001h
T1GPPS_T1GPPS1_POSN                      equ 0001h
T1GPPS_T1GPPS1_POSITION                  equ 0001h
T1GPPS_T1GPPS1_SIZE                      equ 0001h
T1GPPS_T1GPPS1_LENGTH                    equ 0001h
T1GPPS_T1GPPS1_MASK                      equ 0002h
T1GPPS_T1GPPS2_POSN                      equ 0002h
T1GPPS_T1GPPS2_POSITION                  equ 0002h
T1GPPS_T1GPPS2_SIZE                      equ 0001h
T1GPPS_T1GPPS2_LENGTH                    equ 0001h
T1GPPS_T1GPPS2_MASK                      equ 0004h
T1GPPS_T1GPPS3_POSN                      equ 0003h
T1GPPS_T1GPPS3_POSITION                  equ 0003h
T1GPPS_T1GPPS3_SIZE                      equ 0001h
T1GPPS_T1GPPS3_LENGTH                    equ 0001h
T1GPPS_T1GPPS3_MASK                      equ 0008h
T1GPPS_T1GPPS4_POSN                      equ 0004h
T1GPPS_T1GPPS4_POSITION                  equ 0004h
T1GPPS_T1GPPS4_SIZE                      equ 0001h
T1GPPS_T1GPPS4_LENGTH                    equ 0001h
T1GPPS_T1GPPS4_MASK                      equ 0010h

// Register: CWG1INPPS
#define CWG1INPPS CWG1INPPS
CWG1INPPS                                equ 0E14h
// bitfield definitions
CWG1INPPS_CWG1INPPS_POSN                 equ 0000h
CWG1INPPS_CWG1INPPS_POSITION             equ 0000h
CWG1INPPS_CWG1INPPS_SIZE                 equ 0005h
CWG1INPPS_CWG1INPPS_LENGTH               equ 0005h
CWG1INPPS_CWG1INPPS_MASK                 equ 001Fh
CWG1INPPS_CWG1INPPS0_POSN                equ 0000h
CWG1INPPS_CWG1INPPS0_POSITION            equ 0000h
CWG1INPPS_CWG1INPPS0_SIZE                equ 0001h
CWG1INPPS_CWG1INPPS0_LENGTH              equ 0001h
CWG1INPPS_CWG1INPPS0_MASK                equ 0001h
CWG1INPPS_CWG1INPPS1_POSN                equ 0001h
CWG1INPPS_CWG1INPPS1_POSITION            equ 0001h
CWG1INPPS_CWG1INPPS1_SIZE                equ 0001h
CWG1INPPS_CWG1INPPS1_LENGTH              equ 0001h
CWG1INPPS_CWG1INPPS1_MASK                equ 0002h
CWG1INPPS_CWG1INPPS2_POSN                equ 0002h
CWG1INPPS_CWG1INPPS2_POSITION            equ 0002h
CWG1INPPS_CWG1INPPS2_SIZE                equ 0001h
CWG1INPPS_CWG1INPPS2_LENGTH              equ 0001h
CWG1INPPS_CWG1INPPS2_MASK                equ 0004h
CWG1INPPS_CWG1INPPS3_POSN                equ 0003h
CWG1INPPS_CWG1INPPS3_POSITION            equ 0003h
CWG1INPPS_CWG1INPPS3_SIZE                equ 0001h
CWG1INPPS_CWG1INPPS3_LENGTH              equ 0001h
CWG1INPPS_CWG1INPPS3_MASK                equ 0008h
CWG1INPPS_CWG1INPPS4_POSN                equ 0004h
CWG1INPPS_CWG1INPPS4_POSITION            equ 0004h
CWG1INPPS_CWG1INPPS4_SIZE                equ 0001h
CWG1INPPS_CWG1INPPS4_LENGTH              equ 0001h
CWG1INPPS_CWG1INPPS4_MASK                equ 0010h

// Register: RXPPS
#define RXPPS RXPPS
RXPPS                                    equ 0E15h
// bitfield definitions
RXPPS_RXPPS_POSN                         equ 0000h
RXPPS_RXPPS_POSITION                     equ 0000h
RXPPS_RXPPS_SIZE                         equ 0005h
RXPPS_RXPPS_LENGTH                       equ 0005h
RXPPS_RXPPS_MASK                         equ 001Fh
RXPPS_RXPPS0_POSN                        equ 0000h
RXPPS_RXPPS0_POSITION                    equ 0000h
RXPPS_RXPPS0_SIZE                        equ 0001h
RXPPS_RXPPS0_LENGTH                      equ 0001h
RXPPS_RXPPS0_MASK                        equ 0001h
RXPPS_RXPPS1_POSN                        equ 0001h
RXPPS_RXPPS1_POSITION                    equ 0001h
RXPPS_RXPPS1_SIZE                        equ 0001h
RXPPS_RXPPS1_LENGTH                      equ 0001h
RXPPS_RXPPS1_MASK                        equ 0002h
RXPPS_RXPPS2_POSN                        equ 0002h
RXPPS_RXPPS2_POSITION                    equ 0002h
RXPPS_RXPPS2_SIZE                        equ 0001h
RXPPS_RXPPS2_LENGTH                      equ 0001h
RXPPS_RXPPS2_MASK                        equ 0004h
RXPPS_RXPPS3_POSN                        equ 0003h
RXPPS_RXPPS3_POSITION                    equ 0003h
RXPPS_RXPPS3_SIZE                        equ 0001h
RXPPS_RXPPS3_LENGTH                      equ 0001h
RXPPS_RXPPS3_MASK                        equ 0008h
RXPPS_RXPPS4_POSN                        equ 0004h
RXPPS_RXPPS4_POSITION                    equ 0004h
RXPPS_RXPPS4_SIZE                        equ 0001h
RXPPS_RXPPS4_LENGTH                      equ 0001h
RXPPS_RXPPS4_MASK                        equ 0010h

// Register: CKPPS
#define CKPPS CKPPS
CKPPS                                    equ 0E16h
// bitfield definitions
CKPPS_CKPPS_POSN                         equ 0000h
CKPPS_CKPPS_POSITION                     equ 0000h
CKPPS_CKPPS_SIZE                         equ 0005h
CKPPS_CKPPS_LENGTH                       equ 0005h
CKPPS_CKPPS_MASK                         equ 001Fh
CKPPS_CKPPS0_POSN                        equ 0000h
CKPPS_CKPPS0_POSITION                    equ 0000h
CKPPS_CKPPS0_SIZE                        equ 0001h
CKPPS_CKPPS0_LENGTH                      equ 0001h
CKPPS_CKPPS0_MASK                        equ 0001h
CKPPS_CKPPS1_POSN                        equ 0001h
CKPPS_CKPPS1_POSITION                    equ 0001h
CKPPS_CKPPS1_SIZE                        equ 0001h
CKPPS_CKPPS1_LENGTH                      equ 0001h
CKPPS_CKPPS1_MASK                        equ 0002h
CKPPS_CKPPS2_POSN                        equ 0002h
CKPPS_CKPPS2_POSITION                    equ 0002h
CKPPS_CKPPS2_SIZE                        equ 0001h
CKPPS_CKPPS2_LENGTH                      equ 0001h
CKPPS_CKPPS2_MASK                        equ 0004h
CKPPS_CKPPS3_POSN                        equ 0003h
CKPPS_CKPPS3_POSITION                    equ 0003h
CKPPS_CKPPS3_SIZE                        equ 0001h
CKPPS_CKPPS3_LENGTH                      equ 0001h
CKPPS_CKPPS3_MASK                        equ 0008h
CKPPS_CKPPS4_POSN                        equ 0004h
CKPPS_CKPPS4_POSITION                    equ 0004h
CKPPS_CKPPS4_SIZE                        equ 0001h
CKPPS_CKPPS4_LENGTH                      equ 0001h
CKPPS_CKPPS4_MASK                        equ 0010h

// Register: ADCACTPPS
#define ADCACTPPS ADCACTPPS
ADCACTPPS                                equ 0E17h
// bitfield definitions
ADCACTPPS_ADCACTPPS_POSN                 equ 0000h
ADCACTPPS_ADCACTPPS_POSITION             equ 0000h
ADCACTPPS_ADCACTPPS_SIZE                 equ 0005h
ADCACTPPS_ADCACTPPS_LENGTH               equ 0005h
ADCACTPPS_ADCACTPPS_MASK                 equ 001Fh
ADCACTPPS_ADCACTPPS0_POSN                equ 0000h
ADCACTPPS_ADCACTPPS0_POSITION            equ 0000h
ADCACTPPS_ADCACTPPS0_SIZE                equ 0001h
ADCACTPPS_ADCACTPPS0_LENGTH              equ 0001h
ADCACTPPS_ADCACTPPS0_MASK                equ 0001h
ADCACTPPS_ADCACTPPS1_POSN                equ 0001h
ADCACTPPS_ADCACTPPS1_POSITION            equ 0001h
ADCACTPPS_ADCACTPPS1_SIZE                equ 0001h
ADCACTPPS_ADCACTPPS1_LENGTH              equ 0001h
ADCACTPPS_ADCACTPPS1_MASK                equ 0002h
ADCACTPPS_ADCACTPPS2_POSN                equ 0002h
ADCACTPPS_ADCACTPPS2_POSITION            equ 0002h
ADCACTPPS_ADCACTPPS2_SIZE                equ 0001h
ADCACTPPS_ADCACTPPS2_LENGTH              equ 0001h
ADCACTPPS_ADCACTPPS2_MASK                equ 0004h
ADCACTPPS_ADCACTPPS3_POSN                equ 0003h
ADCACTPPS_ADCACTPPS3_POSITION            equ 0003h
ADCACTPPS_ADCACTPPS3_SIZE                equ 0001h
ADCACTPPS_ADCACTPPS3_LENGTH              equ 0001h
ADCACTPPS_ADCACTPPS3_MASK                equ 0008h
ADCACTPPS_ADCACTPPS4_POSN                equ 0004h
ADCACTPPS_ADCACTPPS4_POSITION            equ 0004h
ADCACTPPS_ADCACTPPS4_SIZE                equ 0001h
ADCACTPPS_ADCACTPPS4_LENGTH              equ 0001h
ADCACTPPS_ADCACTPPS4_MASK                equ 0010h

// Register: RA0PPS
#define RA0PPS RA0PPS
RA0PPS                                   equ 0E90h
// bitfield definitions
RA0PPS_RA0PPS_POSN                       equ 0000h
RA0PPS_RA0PPS_POSITION                   equ 0000h
RA0PPS_RA0PPS_SIZE                       equ 0004h
RA0PPS_RA0PPS_LENGTH                     equ 0004h
RA0PPS_RA0PPS_MASK                       equ 000Fh
RA0PPS_RA0PPS0_POSN                      equ 0000h
RA0PPS_RA0PPS0_POSITION                  equ 0000h
RA0PPS_RA0PPS0_SIZE                      equ 0001h
RA0PPS_RA0PPS0_LENGTH                    equ 0001h
RA0PPS_RA0PPS0_MASK                      equ 0001h
RA0PPS_RA0PPS1_POSN                      equ 0001h
RA0PPS_RA0PPS1_POSITION                  equ 0001h
RA0PPS_RA0PPS1_SIZE                      equ 0001h
RA0PPS_RA0PPS1_LENGTH                    equ 0001h
RA0PPS_RA0PPS1_MASK                      equ 0002h
RA0PPS_RA0PPS2_POSN                      equ 0002h
RA0PPS_RA0PPS2_POSITION                  equ 0002h
RA0PPS_RA0PPS2_SIZE                      equ 0001h
RA0PPS_RA0PPS2_LENGTH                    equ 0001h
RA0PPS_RA0PPS2_MASK                      equ 0004h
RA0PPS_RA0PPS3_POSN                      equ 0003h
RA0PPS_RA0PPS3_POSITION                  equ 0003h
RA0PPS_RA0PPS3_SIZE                      equ 0001h
RA0PPS_RA0PPS3_LENGTH                    equ 0001h
RA0PPS_RA0PPS3_MASK                      equ 0008h

// Register: RA1PPS
#define RA1PPS RA1PPS
RA1PPS                                   equ 0E91h
// bitfield definitions
RA1PPS_RA1PPS_POSN                       equ 0000h
RA1PPS_RA1PPS_POSITION                   equ 0000h
RA1PPS_RA1PPS_SIZE                       equ 0004h
RA1PPS_RA1PPS_LENGTH                     equ 0004h
RA1PPS_RA1PPS_MASK                       equ 000Fh
RA1PPS_RA1PPS0_POSN                      equ 0000h
RA1PPS_RA1PPS0_POSITION                  equ 0000h
RA1PPS_RA1PPS0_SIZE                      equ 0001h
RA1PPS_RA1PPS0_LENGTH                    equ 0001h
RA1PPS_RA1PPS0_MASK                      equ 0001h
RA1PPS_RA1PPS1_POSN                      equ 0001h
RA1PPS_RA1PPS1_POSITION                  equ 0001h
RA1PPS_RA1PPS1_SIZE                      equ 0001h
RA1PPS_RA1PPS1_LENGTH                    equ 0001h
RA1PPS_RA1PPS1_MASK                      equ 0002h
RA1PPS_RA1PPS2_POSN                      equ 0002h
RA1PPS_RA1PPS2_POSITION                  equ 0002h
RA1PPS_RA1PPS2_SIZE                      equ 0001h
RA1PPS_RA1PPS2_LENGTH                    equ 0001h
RA1PPS_RA1PPS2_MASK                      equ 0004h
RA1PPS_RA1PPS3_POSN                      equ 0003h
RA1PPS_RA1PPS3_POSITION                  equ 0003h
RA1PPS_RA1PPS3_SIZE                      equ 0001h
RA1PPS_RA1PPS3_LENGTH                    equ 0001h
RA1PPS_RA1PPS3_MASK                      equ 0008h

// Register: RA2PPS
#define RA2PPS RA2PPS
RA2PPS                                   equ 0E92h
// bitfield definitions
RA2PPS_RA2PPS_POSN                       equ 0000h
RA2PPS_RA2PPS_POSITION                   equ 0000h
RA2PPS_RA2PPS_SIZE                       equ 0004h
RA2PPS_RA2PPS_LENGTH                     equ 0004h
RA2PPS_RA2PPS_MASK                       equ 000Fh
RA2PPS_RA2PPS0_POSN                      equ 0000h
RA2PPS_RA2PPS0_POSITION                  equ 0000h
RA2PPS_RA2PPS0_SIZE                      equ 0001h
RA2PPS_RA2PPS0_LENGTH                    equ 0001h
RA2PPS_RA2PPS0_MASK                      equ 0001h
RA2PPS_RA2PPS1_POSN                      equ 0001h
RA2PPS_RA2PPS1_POSITION                  equ 0001h
RA2PPS_RA2PPS1_SIZE                      equ 0001h
RA2PPS_RA2PPS1_LENGTH                    equ 0001h
RA2PPS_RA2PPS1_MASK                      equ 0002h
RA2PPS_RA2PPS2_POSN                      equ 0002h
RA2PPS_RA2PPS2_POSITION                  equ 0002h
RA2PPS_RA2PPS2_SIZE                      equ 0001h
RA2PPS_RA2PPS2_LENGTH                    equ 0001h
RA2PPS_RA2PPS2_MASK                      equ 0004h
RA2PPS_RA2PPS3_POSN                      equ 0003h
RA2PPS_RA2PPS3_POSITION                  equ 0003h
RA2PPS_RA2PPS3_SIZE                      equ 0001h
RA2PPS_RA2PPS3_LENGTH                    equ 0001h
RA2PPS_RA2PPS3_MASK                      equ 0008h

// Register: RA4PPS
#define RA4PPS RA4PPS
RA4PPS                                   equ 0E94h
// bitfield definitions
RA4PPS_RA4PPS_POSN                       equ 0000h
RA4PPS_RA4PPS_POSITION                   equ 0000h
RA4PPS_RA4PPS_SIZE                       equ 0004h
RA4PPS_RA4PPS_LENGTH                     equ 0004h
RA4PPS_RA4PPS_MASK                       equ 000Fh
RA4PPS_RA4PPS0_POSN                      equ 0000h
RA4PPS_RA4PPS0_POSITION                  equ 0000h
RA4PPS_RA4PPS0_SIZE                      equ 0001h
RA4PPS_RA4PPS0_LENGTH                    equ 0001h
RA4PPS_RA4PPS0_MASK                      equ 0001h
RA4PPS_RA4PPS1_POSN                      equ 0001h
RA4PPS_RA4PPS1_POSITION                  equ 0001h
RA4PPS_RA4PPS1_SIZE                      equ 0001h
RA4PPS_RA4PPS1_LENGTH                    equ 0001h
RA4PPS_RA4PPS1_MASK                      equ 0002h
RA4PPS_RA4PPS2_POSN                      equ 0002h
RA4PPS_RA4PPS2_POSITION                  equ 0002h
RA4PPS_RA4PPS2_SIZE                      equ 0001h
RA4PPS_RA4PPS2_LENGTH                    equ 0001h
RA4PPS_RA4PPS2_MASK                      equ 0004h
RA4PPS_RA4PPS3_POSN                      equ 0003h
RA4PPS_RA4PPS3_POSITION                  equ 0003h
RA4PPS_RA4PPS3_SIZE                      equ 0001h
RA4PPS_RA4PPS3_LENGTH                    equ 0001h
RA4PPS_RA4PPS3_MASK                      equ 0008h

// Register: RA5PPS
#define RA5PPS RA5PPS
RA5PPS                                   equ 0E95h
// bitfield definitions
RA5PPS_RA5PPS_POSN                       equ 0000h
RA5PPS_RA5PPS_POSITION                   equ 0000h
RA5PPS_RA5PPS_SIZE                       equ 0004h
RA5PPS_RA5PPS_LENGTH                     equ 0004h
RA5PPS_RA5PPS_MASK                       equ 000Fh
RA5PPS_RA5PPS0_POSN                      equ 0000h
RA5PPS_RA5PPS0_POSITION                  equ 0000h
RA5PPS_RA5PPS0_SIZE                      equ 0001h
RA5PPS_RA5PPS0_LENGTH                    equ 0001h
RA5PPS_RA5PPS0_MASK                      equ 0001h
RA5PPS_RA5PPS1_POSN                      equ 0001h
RA5PPS_RA5PPS1_POSITION                  equ 0001h
RA5PPS_RA5PPS1_SIZE                      equ 0001h
RA5PPS_RA5PPS1_LENGTH                    equ 0001h
RA5PPS_RA5PPS1_MASK                      equ 0002h
RA5PPS_RA5PPS2_POSN                      equ 0002h
RA5PPS_RA5PPS2_POSITION                  equ 0002h
RA5PPS_RA5PPS2_SIZE                      equ 0001h
RA5PPS_RA5PPS2_LENGTH                    equ 0001h
RA5PPS_RA5PPS2_MASK                      equ 0004h
RA5PPS_RA5PPS3_POSN                      equ 0003h
RA5PPS_RA5PPS3_POSITION                  equ 0003h
RA5PPS_RA5PPS3_SIZE                      equ 0001h
RA5PPS_RA5PPS3_LENGTH                    equ 0001h
RA5PPS_RA5PPS3_MASK                      equ 0008h

// Register: RB4PPS
#define RB4PPS RB4PPS
RB4PPS                                   equ 0E9Ch
// bitfield definitions
RB4PPS_RB4PPS_POSN                       equ 0000h
RB4PPS_RB4PPS_POSITION                   equ 0000h
RB4PPS_RB4PPS_SIZE                       equ 0004h
RB4PPS_RB4PPS_LENGTH                     equ 0004h
RB4PPS_RB4PPS_MASK                       equ 000Fh
RB4PPS_RB4PPS0_POSN                      equ 0000h
RB4PPS_RB4PPS0_POSITION                  equ 0000h
RB4PPS_RB4PPS0_SIZE                      equ 0001h
RB4PPS_RB4PPS0_LENGTH                    equ 0001h
RB4PPS_RB4PPS0_MASK                      equ 0001h
RB4PPS_RB4PPS1_POSN                      equ 0001h
RB4PPS_RB4PPS1_POSITION                  equ 0001h
RB4PPS_RB4PPS1_SIZE                      equ 0001h
RB4PPS_RB4PPS1_LENGTH                    equ 0001h
RB4PPS_RB4PPS1_MASK                      equ 0002h
RB4PPS_RB4PPS2_POSN                      equ 0002h
RB4PPS_RB4PPS2_POSITION                  equ 0002h
RB4PPS_RB4PPS2_SIZE                      equ 0001h
RB4PPS_RB4PPS2_LENGTH                    equ 0001h
RB4PPS_RB4PPS2_MASK                      equ 0004h
RB4PPS_RB4PPS3_POSN                      equ 0003h
RB4PPS_RB4PPS3_POSITION                  equ 0003h
RB4PPS_RB4PPS3_SIZE                      equ 0001h
RB4PPS_RB4PPS3_LENGTH                    equ 0001h
RB4PPS_RB4PPS3_MASK                      equ 0008h

// Register: RB5PPS
#define RB5PPS RB5PPS
RB5PPS                                   equ 0E9Dh
// bitfield definitions
RB5PPS_RB5PPS_POSN                       equ 0000h
RB5PPS_RB5PPS_POSITION                   equ 0000h
RB5PPS_RB5PPS_SIZE                       equ 0004h
RB5PPS_RB5PPS_LENGTH                     equ 0004h
RB5PPS_RB5PPS_MASK                       equ 000Fh
RB5PPS_RB5PPS0_POSN                      equ 0000h
RB5PPS_RB5PPS0_POSITION                  equ 0000h
RB5PPS_RB5PPS0_SIZE                      equ 0001h
RB5PPS_RB5PPS0_LENGTH                    equ 0001h
RB5PPS_RB5PPS0_MASK                      equ 0001h
RB5PPS_RB5PPS1_POSN                      equ 0001h
RB5PPS_RB5PPS1_POSITION                  equ 0001h
RB5PPS_RB5PPS1_SIZE                      equ 0001h
RB5PPS_RB5PPS1_LENGTH                    equ 0001h
RB5PPS_RB5PPS1_MASK                      equ 0002h
RB5PPS_RB5PPS2_POSN                      equ 0002h
RB5PPS_RB5PPS2_POSITION                  equ 0002h
RB5PPS_RB5PPS2_SIZE                      equ 0001h
RB5PPS_RB5PPS2_LENGTH                    equ 0001h
RB5PPS_RB5PPS2_MASK                      equ 0004h
RB5PPS_RB5PPS3_POSN                      equ 0003h
RB5PPS_RB5PPS3_POSITION                  equ 0003h
RB5PPS_RB5PPS3_SIZE                      equ 0001h
RB5PPS_RB5PPS3_LENGTH                    equ 0001h
RB5PPS_RB5PPS3_MASK                      equ 0008h

// Register: RB6PPS
#define RB6PPS RB6PPS
RB6PPS                                   equ 0E9Eh
// bitfield definitions
RB6PPS_RB6PPS_POSN                       equ 0000h
RB6PPS_RB6PPS_POSITION                   equ 0000h
RB6PPS_RB6PPS_SIZE                       equ 0004h
RB6PPS_RB6PPS_LENGTH                     equ 0004h
RB6PPS_RB6PPS_MASK                       equ 000Fh
RB6PPS_RB6PPS0_POSN                      equ 0000h
RB6PPS_RB6PPS0_POSITION                  equ 0000h
RB6PPS_RB6PPS0_SIZE                      equ 0001h
RB6PPS_RB6PPS0_LENGTH                    equ 0001h
RB6PPS_RB6PPS0_MASK                      equ 0001h
RB6PPS_RB6PPS1_POSN                      equ 0001h
RB6PPS_RB6PPS1_POSITION                  equ 0001h
RB6PPS_RB6PPS1_SIZE                      equ 0001h
RB6PPS_RB6PPS1_LENGTH                    equ 0001h
RB6PPS_RB6PPS1_MASK                      equ 0002h
RB6PPS_RB6PPS2_POSN                      equ 0002h
RB6PPS_RB6PPS2_POSITION                  equ 0002h
RB6PPS_RB6PPS2_SIZE                      equ 0001h
RB6PPS_RB6PPS2_LENGTH                    equ 0001h
RB6PPS_RB6PPS2_MASK                      equ 0004h
RB6PPS_RB6PPS3_POSN                      equ 0003h
RB6PPS_RB6PPS3_POSITION                  equ 0003h
RB6PPS_RB6PPS3_SIZE                      equ 0001h
RB6PPS_RB6PPS3_LENGTH                    equ 0001h
RB6PPS_RB6PPS3_MASK                      equ 0008h

// Register: RB7PPS
#define RB7PPS RB7PPS
RB7PPS                                   equ 0E9Fh
// bitfield definitions
RB7PPS_RB7PPS_POSN                       equ 0000h
RB7PPS_RB7PPS_POSITION                   equ 0000h
RB7PPS_RB7PPS_SIZE                       equ 0004h
RB7PPS_RB7PPS_LENGTH                     equ 0004h
RB7PPS_RB7PPS_MASK                       equ 000Fh
RB7PPS_RB7PPS0_POSN                      equ 0000h
RB7PPS_RB7PPS0_POSITION                  equ 0000h
RB7PPS_RB7PPS0_SIZE                      equ 0001h
RB7PPS_RB7PPS0_LENGTH                    equ 0001h
RB7PPS_RB7PPS0_MASK                      equ 0001h
RB7PPS_RB7PPS1_POSN                      equ 0001h
RB7PPS_RB7PPS1_POSITION                  equ 0001h
RB7PPS_RB7PPS1_SIZE                      equ 0001h
RB7PPS_RB7PPS1_LENGTH                    equ 0001h
RB7PPS_RB7PPS1_MASK                      equ 0002h
RB7PPS_RB7PPS2_POSN                      equ 0002h
RB7PPS_RB7PPS2_POSITION                  equ 0002h
RB7PPS_RB7PPS2_SIZE                      equ 0001h
RB7PPS_RB7PPS2_LENGTH                    equ 0001h
RB7PPS_RB7PPS2_MASK                      equ 0004h
RB7PPS_RB7PPS3_POSN                      equ 0003h
RB7PPS_RB7PPS3_POSITION                  equ 0003h
RB7PPS_RB7PPS3_SIZE                      equ 0001h
RB7PPS_RB7PPS3_LENGTH                    equ 0001h
RB7PPS_RB7PPS3_MASK                      equ 0008h

// Register: RC0PPS
#define RC0PPS RC0PPS
RC0PPS                                   equ 0EA0h
// bitfield definitions
RC0PPS_RC0PPS_POSN                       equ 0000h
RC0PPS_RC0PPS_POSITION                   equ 0000h
RC0PPS_RC0PPS_SIZE                       equ 0004h
RC0PPS_RC0PPS_LENGTH                     equ 0004h
RC0PPS_RC0PPS_MASK                       equ 000Fh
RC0PPS_RC0PPS0_POSN                      equ 0000h
RC0PPS_RC0PPS0_POSITION                  equ 0000h
RC0PPS_RC0PPS0_SIZE                      equ 0001h
RC0PPS_RC0PPS0_LENGTH                    equ 0001h
RC0PPS_RC0PPS0_MASK                      equ 0001h
RC0PPS_RC0PPS1_POSN                      equ 0001h
RC0PPS_RC0PPS1_POSITION                  equ 0001h
RC0PPS_RC0PPS1_SIZE                      equ 0001h
RC0PPS_RC0PPS1_LENGTH                    equ 0001h
RC0PPS_RC0PPS1_MASK                      equ 0002h
RC0PPS_RC0PPS2_POSN                      equ 0002h
RC0PPS_RC0PPS2_POSITION                  equ 0002h
RC0PPS_RC0PPS2_SIZE                      equ 0001h
RC0PPS_RC0PPS2_LENGTH                    equ 0001h
RC0PPS_RC0PPS2_MASK                      equ 0004h
RC0PPS_RC0PPS3_POSN                      equ 0003h
RC0PPS_RC0PPS3_POSITION                  equ 0003h
RC0PPS_RC0PPS3_SIZE                      equ 0001h
RC0PPS_RC0PPS3_LENGTH                    equ 0001h
RC0PPS_RC0PPS3_MASK                      equ 0008h

// Register: RC1PPS
#define RC1PPS RC1PPS
RC1PPS                                   equ 0EA1h
// bitfield definitions
RC1PPS_RC1PPS_POSN                       equ 0000h
RC1PPS_RC1PPS_POSITION                   equ 0000h
RC1PPS_RC1PPS_SIZE                       equ 0004h
RC1PPS_RC1PPS_LENGTH                     equ 0004h
RC1PPS_RC1PPS_MASK                       equ 000Fh
RC1PPS_RC1PPS0_POSN                      equ 0000h
RC1PPS_RC1PPS0_POSITION                  equ 0000h
RC1PPS_RC1PPS0_SIZE                      equ 0001h
RC1PPS_RC1PPS0_LENGTH                    equ 0001h
RC1PPS_RC1PPS0_MASK                      equ 0001h
RC1PPS_RC1PPS1_POSN                      equ 0001h
RC1PPS_RC1PPS1_POSITION                  equ 0001h
RC1PPS_RC1PPS1_SIZE                      equ 0001h
RC1PPS_RC1PPS1_LENGTH                    equ 0001h
RC1PPS_RC1PPS1_MASK                      equ 0002h
RC1PPS_RC1PPS2_POSN                      equ 0002h
RC1PPS_RC1PPS2_POSITION                  equ 0002h
RC1PPS_RC1PPS2_SIZE                      equ 0001h
RC1PPS_RC1PPS2_LENGTH                    equ 0001h
RC1PPS_RC1PPS2_MASK                      equ 0004h
RC1PPS_RC1PPS3_POSN                      equ 0003h
RC1PPS_RC1PPS3_POSITION                  equ 0003h
RC1PPS_RC1PPS3_SIZE                      equ 0001h
RC1PPS_RC1PPS3_LENGTH                    equ 0001h
RC1PPS_RC1PPS3_MASK                      equ 0008h

// Register: RC2PPS
#define RC2PPS RC2PPS
RC2PPS                                   equ 0EA2h
// bitfield definitions
RC2PPS_RC2PPS_POSN                       equ 0000h
RC2PPS_RC2PPS_POSITION                   equ 0000h
RC2PPS_RC2PPS_SIZE                       equ 0004h
RC2PPS_RC2PPS_LENGTH                     equ 0004h
RC2PPS_RC2PPS_MASK                       equ 000Fh
RC2PPS_RC2PPS0_POSN                      equ 0000h
RC2PPS_RC2PPS0_POSITION                  equ 0000h
RC2PPS_RC2PPS0_SIZE                      equ 0001h
RC2PPS_RC2PPS0_LENGTH                    equ 0001h
RC2PPS_RC2PPS0_MASK                      equ 0001h
RC2PPS_RC2PPS1_POSN                      equ 0001h
RC2PPS_RC2PPS1_POSITION                  equ 0001h
RC2PPS_RC2PPS1_SIZE                      equ 0001h
RC2PPS_RC2PPS1_LENGTH                    equ 0001h
RC2PPS_RC2PPS1_MASK                      equ 0002h
RC2PPS_RC2PPS2_POSN                      equ 0002h
RC2PPS_RC2PPS2_POSITION                  equ 0002h
RC2PPS_RC2PPS2_SIZE                      equ 0001h
RC2PPS_RC2PPS2_LENGTH                    equ 0001h
RC2PPS_RC2PPS2_MASK                      equ 0004h
RC2PPS_RC2PPS3_POSN                      equ 0003h
RC2PPS_RC2PPS3_POSITION                  equ 0003h
RC2PPS_RC2PPS3_SIZE                      equ 0001h
RC2PPS_RC2PPS3_LENGTH                    equ 0001h
RC2PPS_RC2PPS3_MASK                      equ 0008h

// Register: RC3PPS
#define RC3PPS RC3PPS
RC3PPS                                   equ 0EA3h
// bitfield definitions
RC3PPS_RC3PPS_POSN                       equ 0000h
RC3PPS_RC3PPS_POSITION                   equ 0000h
RC3PPS_RC3PPS_SIZE                       equ 0004h
RC3PPS_RC3PPS_LENGTH                     equ 0004h
RC3PPS_RC3PPS_MASK                       equ 000Fh
RC3PPS_RC3PPS0_POSN                      equ 0000h
RC3PPS_RC3PPS0_POSITION                  equ 0000h
RC3PPS_RC3PPS0_SIZE                      equ 0001h
RC3PPS_RC3PPS0_LENGTH                    equ 0001h
RC3PPS_RC3PPS0_MASK                      equ 0001h
RC3PPS_RC3PPS1_POSN                      equ 0001h
RC3PPS_RC3PPS1_POSITION                  equ 0001h
RC3PPS_RC3PPS1_SIZE                      equ 0001h
RC3PPS_RC3PPS1_LENGTH                    equ 0001h
RC3PPS_RC3PPS1_MASK                      equ 0002h
RC3PPS_RC3PPS2_POSN                      equ 0002h
RC3PPS_RC3PPS2_POSITION                  equ 0002h
RC3PPS_RC3PPS2_SIZE                      equ 0001h
RC3PPS_RC3PPS2_LENGTH                    equ 0001h
RC3PPS_RC3PPS2_MASK                      equ 0004h
RC3PPS_RC3PPS3_POSN                      equ 0003h
RC3PPS_RC3PPS3_POSITION                  equ 0003h
RC3PPS_RC3PPS3_SIZE                      equ 0001h
RC3PPS_RC3PPS3_LENGTH                    equ 0001h
RC3PPS_RC3PPS3_MASK                      equ 0008h

// Register: RC4PPS
#define RC4PPS RC4PPS
RC4PPS                                   equ 0EA4h
// bitfield definitions
RC4PPS_RC4PPS_POSN                       equ 0000h
RC4PPS_RC4PPS_POSITION                   equ 0000h
RC4PPS_RC4PPS_SIZE                       equ 0004h
RC4PPS_RC4PPS_LENGTH                     equ 0004h
RC4PPS_RC4PPS_MASK                       equ 000Fh
RC4PPS_RC4PPS0_POSN                      equ 0000h
RC4PPS_RC4PPS0_POSITION                  equ 0000h
RC4PPS_RC4PPS0_SIZE                      equ 0001h
RC4PPS_RC4PPS0_LENGTH                    equ 0001h
RC4PPS_RC4PPS0_MASK                      equ 0001h
RC4PPS_RC4PPS1_POSN                      equ 0001h
RC4PPS_RC4PPS1_POSITION                  equ 0001h
RC4PPS_RC4PPS1_SIZE                      equ 0001h
RC4PPS_RC4PPS1_LENGTH                    equ 0001h
RC4PPS_RC4PPS1_MASK                      equ 0002h
RC4PPS_RC4PPS2_POSN                      equ 0002h
RC4PPS_RC4PPS2_POSITION                  equ 0002h
RC4PPS_RC4PPS2_SIZE                      equ 0001h
RC4PPS_RC4PPS2_LENGTH                    equ 0001h
RC4PPS_RC4PPS2_MASK                      equ 0004h
RC4PPS_RC4PPS3_POSN                      equ 0003h
RC4PPS_RC4PPS3_POSITION                  equ 0003h
RC4PPS_RC4PPS3_SIZE                      equ 0001h
RC4PPS_RC4PPS3_LENGTH                    equ 0001h
RC4PPS_RC4PPS3_MASK                      equ 0008h

// Register: RC5PPS
#define RC5PPS RC5PPS
RC5PPS                                   equ 0EA5h
// bitfield definitions
RC5PPS_RC5PPS_POSN                       equ 0000h
RC5PPS_RC5PPS_POSITION                   equ 0000h
RC5PPS_RC5PPS_SIZE                       equ 0004h
RC5PPS_RC5PPS_LENGTH                     equ 0004h
RC5PPS_RC5PPS_MASK                       equ 000Fh
RC5PPS_RC5PPS0_POSN                      equ 0000h
RC5PPS_RC5PPS0_POSITION                  equ 0000h
RC5PPS_RC5PPS0_SIZE                      equ 0001h
RC5PPS_RC5PPS0_LENGTH                    equ 0001h
RC5PPS_RC5PPS0_MASK                      equ 0001h
RC5PPS_RC5PPS1_POSN                      equ 0001h
RC5PPS_RC5PPS1_POSITION                  equ 0001h
RC5PPS_RC5PPS1_SIZE                      equ 0001h
RC5PPS_RC5PPS1_LENGTH                    equ 0001h
RC5PPS_RC5PPS1_MASK                      equ 0002h
RC5PPS_RC5PPS2_POSN                      equ 0002h
RC5PPS_RC5PPS2_POSITION                  equ 0002h
RC5PPS_RC5PPS2_SIZE                      equ 0001h
RC5PPS_RC5PPS2_LENGTH                    equ 0001h
RC5PPS_RC5PPS2_MASK                      equ 0004h
RC5PPS_RC5PPS3_POSN                      equ 0003h
RC5PPS_RC5PPS3_POSITION                  equ 0003h
RC5PPS_RC5PPS3_SIZE                      equ 0001h
RC5PPS_RC5PPS3_LENGTH                    equ 0001h
RC5PPS_RC5PPS3_MASK                      equ 0008h

// Register: RC6PPS
#define RC6PPS RC6PPS
RC6PPS                                   equ 0EA6h
// bitfield definitions
RC6PPS_RC6PPS_POSN                       equ 0000h
RC6PPS_RC6PPS_POSITION                   equ 0000h
RC6PPS_RC6PPS_SIZE                       equ 0004h
RC6PPS_RC6PPS_LENGTH                     equ 0004h
RC6PPS_RC6PPS_MASK                       equ 000Fh
RC6PPS_RC6PPS0_POSN                      equ 0000h
RC6PPS_RC6PPS0_POSITION                  equ 0000h
RC6PPS_RC6PPS0_SIZE                      equ 0001h
RC6PPS_RC6PPS0_LENGTH                    equ 0001h
RC6PPS_RC6PPS0_MASK                      equ 0001h
RC6PPS_RC6PPS1_POSN                      equ 0001h
RC6PPS_RC6PPS1_POSITION                  equ 0001h
RC6PPS_RC6PPS1_SIZE                      equ 0001h
RC6PPS_RC6PPS1_LENGTH                    equ 0001h
RC6PPS_RC6PPS1_MASK                      equ 0002h
RC6PPS_RC6PPS2_POSN                      equ 0002h
RC6PPS_RC6PPS2_POSITION                  equ 0002h
RC6PPS_RC6PPS2_SIZE                      equ 0001h
RC6PPS_RC6PPS2_LENGTH                    equ 0001h
RC6PPS_RC6PPS2_MASK                      equ 0004h
RC6PPS_RC6PPS3_POSN                      equ 0003h
RC6PPS_RC6PPS3_POSITION                  equ 0003h
RC6PPS_RC6PPS3_SIZE                      equ 0001h
RC6PPS_RC6PPS3_LENGTH                    equ 0001h
RC6PPS_RC6PPS3_MASK                      equ 0008h

// Register: RC7PPS
#define RC7PPS RC7PPS
RC7PPS                                   equ 0EA7h
// bitfield definitions
RC7PPS_RC7PPS_POSN                       equ 0000h
RC7PPS_RC7PPS_POSITION                   equ 0000h
RC7PPS_RC7PPS_SIZE                       equ 0004h
RC7PPS_RC7PPS_LENGTH                     equ 0004h
RC7PPS_RC7PPS_MASK                       equ 000Fh
RC7PPS_RC7PPS0_POSN                      equ 0000h
RC7PPS_RC7PPS0_POSITION                  equ 0000h
RC7PPS_RC7PPS0_SIZE                      equ 0001h
RC7PPS_RC7PPS0_LENGTH                    equ 0001h
RC7PPS_RC7PPS0_MASK                      equ 0001h
RC7PPS_RC7PPS1_POSN                      equ 0001h
RC7PPS_RC7PPS1_POSITION                  equ 0001h
RC7PPS_RC7PPS1_SIZE                      equ 0001h
RC7PPS_RC7PPS1_LENGTH                    equ 0001h
RC7PPS_RC7PPS1_MASK                      equ 0002h
RC7PPS_RC7PPS2_POSN                      equ 0002h
RC7PPS_RC7PPS2_POSITION                  equ 0002h
RC7PPS_RC7PPS2_SIZE                      equ 0001h
RC7PPS_RC7PPS2_LENGTH                    equ 0001h
RC7PPS_RC7PPS2_MASK                      equ 0004h
RC7PPS_RC7PPS3_POSN                      equ 0003h
RC7PPS_RC7PPS3_POSITION                  equ 0003h
RC7PPS_RC7PPS3_SIZE                      equ 0001h
RC7PPS_RC7PPS3_LENGTH                    equ 0001h
RC7PPS_RC7PPS3_MASK                      equ 0008h

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
#define ABDEN                            BANKMASK(BAUDCON), 0
#define ABDOVF                           BANKMASK(BAUDCON), 7
#define ADCACTPPS0                       BANKMASK(ADCACTPPS), 0
#define ADCACTPPS1                       BANKMASK(ADCACTPPS), 1
#define ADCACTPPS2                       BANKMASK(ADCACTPPS), 2
#define ADCACTPPS3                       BANKMASK(ADCACTPPS), 3
#define ADCACTPPS4                       BANKMASK(ADCACTPPS), 4
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADDEN                            BANKMASK(RCSTA), 3
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
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define ANSC0                            BANKMASK(ANSELC), 0
#define ANSC1                            BANKMASK(ANSELC), 1
#define ANSC2                            BANKMASK(ANSELC), 2
#define ANSC3                            BANKMASK(ANSELC), 3
#define ANSC6                            BANKMASK(ANSELC), 6
#define ANSC7                            BANKMASK(ANSELC), 7
#define BORFS                            BANKMASK(BORCON), 6
#define BORRDY                           BANKMASK(BORCON), 0
#define BRG16                            BANKMASK(BAUDCON), 3
#define BRGH                             BANKMASK(TXSTA), 2
#define BSR0                             BANKMASK(BSR), 0
#define BSR1                             BANKMASK(BSR), 1
#define BSR2                             BANKMASK(BSR), 2
#define BSR3                             BANKMASK(BSR), 3
#define BSR4                             BANKMASK(BSR), 4
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
#define CDAFVR0                          BANKMASK(FVRCON), 2
#define CDAFVR1                          BANKMASK(FVRCON), 3
#define CFGS                             BANKMASK(PMCON1), 6
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CHS4                             BANKMASK(ADCON0), 6
#define CKPPS0                           BANKMASK(CKPPS), 0
#define CKPPS1                           BANKMASK(CKPPS), 1
#define CKPPS2                           BANKMASK(CKPPS), 2
#define CKPPS3                           BANKMASK(CKPPS), 3
#define CKPPS4                           BANKMASK(CKPPS), 4
#define CREN                             BANKMASK(RCSTA), 4
#define CSRC                             BANKMASK(TXSTA), 7
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
#define CWG1INPPS0                       BANKMASK(CWG1INPPS), 0
#define CWG1INPPS1                       BANKMASK(CWG1INPPS), 1
#define CWG1INPPS2                       BANKMASK(CWG1INPPS), 2
#define CWG1INPPS3                       BANKMASK(CWG1INPPS), 3
#define CWG1INPPS4                       BANKMASK(CWG1INPPS), 4
#define C_SHAD                           BANKMASK(STATUS_SHAD), 0
#define DACEN                            BANKMASK(DACCON0), 7
#define DACLPS                           BANKMASK(DACCON0), 6
#define DACOE                            BANKMASK(DACCON0), 5
#define DACPSS0                          BANKMASK(DACCON0), 2
#define DACPSS1                          BANKMASK(DACCON0), 3
#define DACR0                            BANKMASK(DACCON1), 0
#define DACR1                            BANKMASK(DACCON1), 1
#define DACR2                            BANKMASK(DACCON1), 2
#define DACR3                            BANKMASK(DACCON1), 3
#define DACR4                            BANKMASK(DACCON1), 4
#define DC                               BANKMASK(STATUS), 1
#define DC_SHAD                          BANKMASK(STATUS_SHAD), 1
#define FERR                             BANKMASK(RCSTA), 2
#define FREE                             BANKMASK(PMCON1), 4
#define FVREN                            BANKMASK(FVRCON), 7
#define FVRRDY                           BANKMASK(FVRCON), 6
#define G1ARSEN                          BANKMASK(CWG1CON2), 6
#define G1ASDLA0                         BANKMASK(CWG1CON1), 4
#define G1ASDLA1                         BANKMASK(CWG1CON1), 5
#define G1ASDLB0                         BANKMASK(CWG1CON1), 6
#define G1ASDLB1                         BANKMASK(CWG1CON1), 7
#define G1ASDSC1                         BANKMASK(CWG1CON2), 2
#define G1ASDSC2                         BANKMASK(CWG1CON2), 3
#define G1ASDSPPS                        BANKMASK(CWG1CON2), 1
#define G1ASE                            BANKMASK(CWG1CON2), 7
#define G1CS0                            BANKMASK(CWG1CON0), 0
#define G1EN                             BANKMASK(CWG1CON0), 7
#define G1IS0                            BANKMASK(CWG1CON1), 0
#define G1IS1                            BANKMASK(CWG1CON1), 1
#define G1IS2                            BANKMASK(CWG1CON1), 2
#define G1OEA                            BANKMASK(CWG1CON0), 5
#define G1OEB                            BANKMASK(CWG1CON0), 6
#define G1POLA                           BANKMASK(CWG1CON0), 3
#define G1POLB                           BANKMASK(CWG1CON0), 4
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define HFIOFL                           BANKMASK(OSCSTAT), 3
#define HFIOFR                           BANKMASK(OSCSTAT), 4
#define HFIOFS                           BANKMASK(OSCSTAT), 0
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
#define INTPPS0                          BANKMASK(INTPPS), 0
#define INTPPS1                          BANKMASK(INTPPS), 1
#define INTPPS2                          BANKMASK(INTPPS), 2
#define INTPPS3                          BANKMASK(INTPPS), 3
#define INTPPS4                          BANKMASK(INTPPS), 4
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
#define LFIOFR                           BANKMASK(OSCSTAT), 1
#define LWLO                             BANKMASK(PMCON1), 5
#define MC1OUT                           BANKMASK(CMOUT), 0
#define MC2OUT                           BANKMASK(CMOUT), 1
#define MFIOFR                           BANKMASK(OSCSTAT), 2
#define MPWM1EN                          BANKMASK(PWMEN), 0
#define MPWM1LD                          BANKMASK(PWMLD), 0
#define MPWM1OUT                         BANKMASK(PWMOUT), 0
#define MPWM2EN                          BANKMASK(PWMEN), 1
#define MPWM2LD                          BANKMASK(PWMLD), 1
#define MPWM2OUT                         BANKMASK(PWMOUT), 1
#define MPWM3EN                          BANKMASK(PWMEN), 2
#define MPWM3LD                          BANKMASK(PWMLD), 2
#define MPWM3OUT                         BANKMASK(PWMOUT), 2
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
#define OERR                             BANKMASK(RCSTA), 1
#define OSTS                             BANKMASK(OSCSTAT), 5
#define PEIE                             BANKMASK(INTCON), 6
#define PLLR                             BANKMASK(OSCSTAT), 6
#define PPSLOCKED                        BANKMASK(PPSLOCK), 0
#define PSA                              BANKMASK(OPTION_REG), 3
#define PWM1CS0                          BANKMASK(PWM1CLKCON), 0
#define PWM1CS1                          BANKMASK(PWM1CLKCON), 1
#define PWM1DCH0                         BANKMASK(PWM1DCH), 0
#define PWM1DCH1                         BANKMASK(PWM1DCH), 1
#define PWM1DCH2                         BANKMASK(PWM1DCH), 2
#define PWM1DCH3                         BANKMASK(PWM1DCH), 3
#define PWM1DCH4                         BANKMASK(PWM1DCH), 4
#define PWM1DCH5                         BANKMASK(PWM1DCH), 5
#define PWM1DCH6                         BANKMASK(PWM1DCH), 6
#define PWM1DCH7                         BANKMASK(PWM1DCH), 7
#define PWM1DCIE                         BANKMASK(PWM1INTE), 1
#define PWM1DCIF                         BANKMASK(PWM1INTF), 1
#define PWM1DCL0                         BANKMASK(PWM1DCL), 0
#define PWM1DCL1                         BANKMASK(PWM1DCL), 1
#define PWM1DCL2                         BANKMASK(PWM1DCL), 2
#define PWM1DCL3                         BANKMASK(PWM1DCL), 3
#define PWM1DCL4                         BANKMASK(PWM1DCL), 4
#define PWM1DCL5                         BANKMASK(PWM1DCL), 5
#define PWM1DCL6                         BANKMASK(PWM1DCL), 6
#define PWM1DCL7                         BANKMASK(PWM1DCL), 7
#define PWM1EN                           BANKMASK(PWM1CON), 7
#define PWM1EN_A                         BANKMASK(PWMEN), 0
#define PWM1IE                           BANKMASK(PIE3), 4
#define PWM1IF                           BANKMASK(PIR3), 4
#define PWM1LD                           BANKMASK(PWM1LDCON), 7
#define PWM1LDA_A                        BANKMASK(PWMLD), 0
#define PWM1LDM                          BANKMASK(PWM1LDCON), 6
#define PWM1LDS0                         BANKMASK(PWM1LDCON), 0
#define PWM1LDS1                         BANKMASK(PWM1LDCON), 1
#define PWM1MODE0                        BANKMASK(PWM1CON), 2
#define PWM1MODE1                        BANKMASK(PWM1CON), 3
#define PWM1OE                           BANKMASK(PWM1CON), 6
#define PWM1OFH0                         BANKMASK(PWM1OFH), 0
#define PWM1OFH1                         BANKMASK(PWM1OFH), 1
#define PWM1OFH2                         BANKMASK(PWM1OFH), 2
#define PWM1OFH3                         BANKMASK(PWM1OFH), 3
#define PWM1OFH4                         BANKMASK(PWM1OFH), 4
#define PWM1OFH5                         BANKMASK(PWM1OFH), 5
#define PWM1OFH6                         BANKMASK(PWM1OFH), 6
#define PWM1OFH7                         BANKMASK(PWM1OFH), 7
#define PWM1OFIE                         BANKMASK(PWM1INTE), 3
#define PWM1OFIF                         BANKMASK(PWM1INTF), 3
#define PWM1OFL0                         BANKMASK(PWM1OFL), 0
#define PWM1OFL1                         BANKMASK(PWM1OFL), 1
#define PWM1OFL2                         BANKMASK(PWM1OFL), 2
#define PWM1OFL3                         BANKMASK(PWM1OFL), 3
#define PWM1OFL4                         BANKMASK(PWM1OFL), 4
#define PWM1OFL5                         BANKMASK(PWM1OFL), 5
#define PWM1OFL6                         BANKMASK(PWM1OFL), 6
#define PWM1OFL7                         BANKMASK(PWM1OFL), 7
#define PWM1OFM0                         BANKMASK(PWM1OFCON), 5
#define PWM1OFM1                         BANKMASK(PWM1OFCON), 6
#define PWM1OFMC                         BANKMASK(PWM1OFCON), 4
#define PWM1OFS0                         BANKMASK(PWM1OFCON), 0
#define PWM1OFS1                         BANKMASK(PWM1OFCON), 1
#define PWM1OUT                          BANKMASK(PWM1CON), 5
#define PWM1OUT_A                        BANKMASK(PWMOUT), 0
#define PWM1PHH0                         BANKMASK(PWM1PHH), 0
#define PWM1PHH1                         BANKMASK(PWM1PHH), 1
#define PWM1PHH2                         BANKMASK(PWM1PHH), 2
#define PWM1PHH3                         BANKMASK(PWM1PHH), 3
#define PWM1PHH4                         BANKMASK(PWM1PHH), 4
#define PWM1PHH5                         BANKMASK(PWM1PHH), 5
#define PWM1PHH6                         BANKMASK(PWM1PHH), 6
#define PWM1PHH7                         BANKMASK(PWM1PHH), 7
#define PWM1PHIE                         BANKMASK(PWM1INTE), 2
#define PWM1PHIF                         BANKMASK(PWM1INTF), 2
#define PWM1PHL0                         BANKMASK(PWM1PHL), 0
#define PWM1PHL1                         BANKMASK(PWM1PHL), 1
#define PWM1PHL2                         BANKMASK(PWM1PHL), 2
#define PWM1PHL3                         BANKMASK(PWM1PHL), 3
#define PWM1PHL4                         BANKMASK(PWM1PHL), 4
#define PWM1PHL5                         BANKMASK(PWM1PHL), 5
#define PWM1PHL6                         BANKMASK(PWM1PHL), 6
#define PWM1PHL7                         BANKMASK(PWM1PHL), 7
#define PWM1POL                          BANKMASK(PWM1CON), 4
#define PWM1PRH0                         BANKMASK(PWM1PRH), 0
#define PWM1PRH1                         BANKMASK(PWM1PRH), 1
#define PWM1PRH2                         BANKMASK(PWM1PRH), 2
#define PWM1PRH3                         BANKMASK(PWM1PRH), 3
#define PWM1PRH4                         BANKMASK(PWM1PRH), 4
#define PWM1PRH5                         BANKMASK(PWM1PRH), 5
#define PWM1PRH6                         BANKMASK(PWM1PRH), 6
#define PWM1PRH7                         BANKMASK(PWM1PRH), 7
#define PWM1PRIE                         BANKMASK(PWM1INTE), 0
#define PWM1PRIF                         BANKMASK(PWM1INTF), 0
#define PWM1PRL0                         BANKMASK(PWM1PRL), 0
#define PWM1PRL1                         BANKMASK(PWM1PRL), 1
#define PWM1PRL2                         BANKMASK(PWM1PRL), 2
#define PWM1PRL3                         BANKMASK(PWM1PRL), 3
#define PWM1PRL4                         BANKMASK(PWM1PRL), 4
#define PWM1PRL5                         BANKMASK(PWM1PRL), 5
#define PWM1PRL6                         BANKMASK(PWM1PRL), 6
#define PWM1PRL7                         BANKMASK(PWM1PRL), 7
#define PWM1PS0                          BANKMASK(PWM1CLKCON), 4
#define PWM1PS1                          BANKMASK(PWM1CLKCON), 5
#define PWM1PS2                          BANKMASK(PWM1CLKCON), 6
#define PWM1TMRH0                        BANKMASK(PWM1TMRH), 0
#define PWM1TMRH1                        BANKMASK(PWM1TMRH), 1
#define PWM1TMRH2                        BANKMASK(PWM1TMRH), 2
#define PWM1TMRH3                        BANKMASK(PWM1TMRH), 3
#define PWM1TMRH4                        BANKMASK(PWM1TMRH), 4
#define PWM1TMRH5                        BANKMASK(PWM1TMRH), 5
#define PWM1TMRH6                        BANKMASK(PWM1TMRH), 6
#define PWM1TMRH7                        BANKMASK(PWM1TMRH), 7
#define PWM1TMRL0                        BANKMASK(PWM1TMRL), 0
#define PWM1TMRL1                        BANKMASK(PWM1TMRL), 1
#define PWM1TMRL2                        BANKMASK(PWM1TMRL), 2
#define PWM1TMRL3                        BANKMASK(PWM1TMRL), 3
#define PWM1TMRL4                        BANKMASK(PWM1TMRL), 4
#define PWM1TMRL5                        BANKMASK(PWM1TMRL), 5
#define PWM1TMRL6                        BANKMASK(PWM1TMRL), 6
#define PWM1TMRL7                        BANKMASK(PWM1TMRL), 7
#define PWM2CS0                          BANKMASK(PWM2CLKCON), 0
#define PWM2CS1                          BANKMASK(PWM2CLKCON), 1
#define PWM2DCH0                         BANKMASK(PWM2DCH), 0
#define PWM2DCH1                         BANKMASK(PWM2DCH), 1
#define PWM2DCH2                         BANKMASK(PWM2DCH), 2
#define PWM2DCH3                         BANKMASK(PWM2DCH), 3
#define PWM2DCH4                         BANKMASK(PWM2DCH), 4
#define PWM2DCH5                         BANKMASK(PWM2DCH), 5
#define PWM2DCH6                         BANKMASK(PWM2DCH), 6
#define PWM2DCH7                         BANKMASK(PWM2DCH), 7
#define PWM2DCIE                         BANKMASK(PWM2INTE), 1
#define PWM2DCIF                         BANKMASK(PWM2INTF), 1
#define PWM2DCL0                         BANKMASK(PWM2DCL), 0
#define PWM2DCL1                         BANKMASK(PWM2DCL), 1
#define PWM2DCL2                         BANKMASK(PWM2DCL), 2
#define PWM2DCL3                         BANKMASK(PWM2DCL), 3
#define PWM2DCL4                         BANKMASK(PWM2DCL), 4
#define PWM2DCL5                         BANKMASK(PWM2DCL), 5
#define PWM2DCL6                         BANKMASK(PWM2DCL), 6
#define PWM2DCL7                         BANKMASK(PWM2DCL), 7
#define PWM2EN                           BANKMASK(PWM2CON), 7
#define PWM2EN_A                         BANKMASK(PWMEN), 1
#define PWM2IE                           BANKMASK(PIE3), 5
#define PWM2IF                           BANKMASK(PIR3), 5
#define PWM2LD                           BANKMASK(PWM2LDCON), 7
#define PWM2LDA_A                        BANKMASK(PWMLD), 1
#define PWM2LDM                          BANKMASK(PWM2LDCON), 6
#define PWM2LDS0                         BANKMASK(PWM2LDCON), 0
#define PWM2LDS1                         BANKMASK(PWM2LDCON), 1
#define PWM2MODE0                        BANKMASK(PWM2CON), 2
#define PWM2MODE1                        BANKMASK(PWM2CON), 3
#define PWM2OE                           BANKMASK(PWM2CON), 6
#define PWM2OFH0                         BANKMASK(PWM2OFH), 0
#define PWM2OFH1                         BANKMASK(PWM2OFH), 1
#define PWM2OFH2                         BANKMASK(PWM2OFH), 2
#define PWM2OFH3                         BANKMASK(PWM2OFH), 3
#define PWM2OFH4                         BANKMASK(PWM2OFH), 4
#define PWM2OFH5                         BANKMASK(PWM2OFH), 5
#define PWM2OFH6                         BANKMASK(PWM2OFH), 6
#define PWM2OFH7                         BANKMASK(PWM2OFH), 7
#define PWM2OFIE                         BANKMASK(PWM2INTE), 3
#define PWM2OFIF                         BANKMASK(PWM2INTF), 3
#define PWM2OFL0                         BANKMASK(PWM2OFL), 0
#define PWM2OFL1                         BANKMASK(PWM2OFL), 1
#define PWM2OFL2                         BANKMASK(PWM2OFL), 2
#define PWM2OFL3                         BANKMASK(PWM2OFL), 3
#define PWM2OFL4                         BANKMASK(PWM2OFL), 4
#define PWM2OFL5                         BANKMASK(PWM2OFL), 5
#define PWM2OFL6                         BANKMASK(PWM2OFL), 6
#define PWM2OFL7                         BANKMASK(PWM2OFL), 7
#define PWM2OFM0                         BANKMASK(PWM2OFCON), 5
#define PWM2OFM1                         BANKMASK(PWM2OFCON), 6
#define PWM2OFMC                         BANKMASK(PWM2OFCON), 4
#define PWM2OFS0                         BANKMASK(PWM2OFCON), 0
#define PWM2OFS1                         BANKMASK(PWM2OFCON), 1
#define PWM2OUT                          BANKMASK(PWM2CON), 5
#define PWM2OUT_A                        BANKMASK(PWMOUT), 1
#define PWM2PHH0                         BANKMASK(PWM2PHH), 0
#define PWM2PHH1                         BANKMASK(PWM2PHH), 1
#define PWM2PHH2                         BANKMASK(PWM2PHH), 2
#define PWM2PHH3                         BANKMASK(PWM2PHH), 3
#define PWM2PHH4                         BANKMASK(PWM2PHH), 4
#define PWM2PHH5                         BANKMASK(PWM2PHH), 5
#define PWM2PHH6                         BANKMASK(PWM2PHH), 6
#define PWM2PHH7                         BANKMASK(PWM2PHH), 7
#define PWM2PHIE                         BANKMASK(PWM2INTE), 2
#define PWM2PHIF                         BANKMASK(PWM2INTF), 2
#define PWM2PHL0                         BANKMASK(PWM2PHL), 0
#define PWM2PHL1                         BANKMASK(PWM2PHL), 1
#define PWM2PHL2                         BANKMASK(PWM2PHL), 2
#define PWM2PHL3                         BANKMASK(PWM2PHL), 3
#define PWM2PHL4                         BANKMASK(PWM2PHL), 4
#define PWM2PHL5                         BANKMASK(PWM2PHL), 5
#define PWM2PHL6                         BANKMASK(PWM2PHL), 6
#define PWM2PHL7                         BANKMASK(PWM2PHL), 7
#define PWM2POL                          BANKMASK(PWM2CON), 4
#define PWM2PRH0                         BANKMASK(PWM2PRH), 0
#define PWM2PRH1                         BANKMASK(PWM2PRH), 1
#define PWM2PRH2                         BANKMASK(PWM2PRH), 2
#define PWM2PRH3                         BANKMASK(PWM2PRH), 3
#define PWM2PRH4                         BANKMASK(PWM2PRH), 4
#define PWM2PRH5                         BANKMASK(PWM2PRH), 5
#define PWM2PRH6                         BANKMASK(PWM2PRH), 6
#define PWM2PRH7                         BANKMASK(PWM2PRH), 7
#define PWM2PRIE                         BANKMASK(PWM2INTE), 0
#define PWM2PRIF                         BANKMASK(PWM2INTF), 0
#define PWM2PRL0                         BANKMASK(PWM2PRL), 0
#define PWM2PRL1                         BANKMASK(PWM2PRL), 1
#define PWM2PRL2                         BANKMASK(PWM2PRL), 2
#define PWM2PRL3                         BANKMASK(PWM2PRL), 3
#define PWM2PRL4                         BANKMASK(PWM2PRL), 4
#define PWM2PRL5                         BANKMASK(PWM2PRL), 5
#define PWM2PRL6                         BANKMASK(PWM2PRL), 6
#define PWM2PRL7                         BANKMASK(PWM2PRL), 7
#define PWM2PS0                          BANKMASK(PWM2CLKCON), 4
#define PWM2PS1                          BANKMASK(PWM2CLKCON), 5
#define PWM2PS2                          BANKMASK(PWM2CLKCON), 6
#define PWM2TMRH0                        BANKMASK(PWM2TMRH), 0
#define PWM2TMRH1                        BANKMASK(PWM2TMRH), 1
#define PWM2TMRH2                        BANKMASK(PWM2TMRH), 2
#define PWM2TMRH3                        BANKMASK(PWM2TMRH), 3
#define PWM2TMRH4                        BANKMASK(PWM2TMRH), 4
#define PWM2TMRH5                        BANKMASK(PWM2TMRH), 5
#define PWM2TMRH6                        BANKMASK(PWM2TMRH), 6
#define PWM2TMRH7                        BANKMASK(PWM2TMRH), 7
#define PWM2TMRL0                        BANKMASK(PWM2TMRL), 0
#define PWM2TMRL1                        BANKMASK(PWM2TMRL), 1
#define PWM2TMRL2                        BANKMASK(PWM2TMRL), 2
#define PWM2TMRL3                        BANKMASK(PWM2TMRL), 3
#define PWM2TMRL4                        BANKMASK(PWM2TMRL), 4
#define PWM2TMRL5                        BANKMASK(PWM2TMRL), 5
#define PWM2TMRL6                        BANKMASK(PWM2TMRL), 6
#define PWM2TMRL7                        BANKMASK(PWM2TMRL), 7
#define PWM3CS0                          BANKMASK(PWM3CLKCON), 0
#define PWM3CS1                          BANKMASK(PWM3CLKCON), 1
#define PWM3DCH0                         BANKMASK(PWM3DCH), 0
#define PWM3DCH1                         BANKMASK(PWM3DCH), 1
#define PWM3DCH2                         BANKMASK(PWM3DCH), 2
#define PWM3DCH3                         BANKMASK(PWM3DCH), 3
#define PWM3DCH4                         BANKMASK(PWM3DCH), 4
#define PWM3DCH5                         BANKMASK(PWM3DCH), 5
#define PWM3DCH6                         BANKMASK(PWM3DCH), 6
#define PWM3DCH7                         BANKMASK(PWM3DCH), 7
#define PWM3DCIE                         BANKMASK(PWM3INTE), 1
#define PWM3DCIF                         BANKMASK(PWM3INTF), 1
#define PWM3DCL0                         BANKMASK(PWM3DCL), 0
#define PWM3DCL1                         BANKMASK(PWM3DCL), 1
#define PWM3DCL2                         BANKMASK(PWM3DCL), 2
#define PWM3DCL3                         BANKMASK(PWM3DCL), 3
#define PWM3DCL4                         BANKMASK(PWM3DCL), 4
#define PWM3DCL5                         BANKMASK(PWM3DCL), 5
#define PWM3DCL6                         BANKMASK(PWM3DCL), 6
#define PWM3DCL7                         BANKMASK(PWM3DCL), 7
#define PWM3EN                           BANKMASK(PWM3CON), 7
#define PWM3EN_A                         BANKMASK(PWMEN), 2
#define PWM3IE                           BANKMASK(PIE3), 6
#define PWM3IF                           BANKMASK(PIR3), 6
#define PWM3LD                           BANKMASK(PWM3LDCON), 7
#define PWM3LDA_A                        BANKMASK(PWMLD), 2
#define PWM3LDM                          BANKMASK(PWM3LDCON), 6
#define PWM3LDS0                         BANKMASK(PWM3LDCON), 0
#define PWM3LDS1                         BANKMASK(PWM3LDCON), 1
#define PWM3MODE0                        BANKMASK(PWM3CON), 2
#define PWM3MODE1                        BANKMASK(PWM3CON), 3
#define PWM3OE                           BANKMASK(PWM3CON), 6
#define PWM3OFH0                         BANKMASK(PWM3OFH), 0
#define PWM3OFH1                         BANKMASK(PWM3OFH), 1
#define PWM3OFH2                         BANKMASK(PWM3OFH), 2
#define PWM3OFH3                         BANKMASK(PWM3OFH), 3
#define PWM3OFH4                         BANKMASK(PWM3OFH), 4
#define PWM3OFH5                         BANKMASK(PWM3OFH), 5
#define PWM3OFH6                         BANKMASK(PWM3OFH), 6
#define PWM3OFH7                         BANKMASK(PWM3OFH), 7
#define PWM3OFIE                         BANKMASK(PWM3INTE), 3
#define PWM3OFIF                         BANKMASK(PWM3INTF), 3
#define PWM3OFL0                         BANKMASK(PWM3OFL), 0
#define PWM3OFL1                         BANKMASK(PWM3OFL), 1
#define PWM3OFL2                         BANKMASK(PWM3OFL), 2
#define PWM3OFL3                         BANKMASK(PWM3OFL), 3
#define PWM3OFL4                         BANKMASK(PWM3OFL), 4
#define PWM3OFL5                         BANKMASK(PWM3OFL), 5
#define PWM3OFL6                         BANKMASK(PWM3OFL), 6
#define PWM3OFL7                         BANKMASK(PWM3OFL), 7
#define PWM3OFM0                         BANKMASK(PWM3OFCON), 5
#define PWM3OFM1                         BANKMASK(PWM3OFCON), 6
#define PWM3OFMC                         BANKMASK(PWM3OFCON), 4
#define PWM3OFS0                         BANKMASK(PWM3OFCON), 0
#define PWM3OFS1                         BANKMASK(PWM3OFCON), 1
#define PWM3OUT                          BANKMASK(PWM3CON), 5
#define PWM3OUT_A                        BANKMASK(PWMOUT), 2
#define PWM3PHH0                         BANKMASK(PWM3PHH), 0
#define PWM3PHH1                         BANKMASK(PWM3PHH), 1
#define PWM3PHH2                         BANKMASK(PWM3PHH), 2
#define PWM3PHH3                         BANKMASK(PWM3PHH), 3
#define PWM3PHH4                         BANKMASK(PWM3PHH), 4
#define PWM3PHH5                         BANKMASK(PWM3PHH), 5
#define PWM3PHH6                         BANKMASK(PWM3PHH), 6
#define PWM3PHH7                         BANKMASK(PWM3PHH), 7
#define PWM3PHIE                         BANKMASK(PWM3INTE), 2
#define PWM3PHIF                         BANKMASK(PWM3INTF), 2
#define PWM3PHL0                         BANKMASK(PWM3PHL), 0
#define PWM3PHL1                         BANKMASK(PWM3PHL), 1
#define PWM3PHL2                         BANKMASK(PWM3PHL), 2
#define PWM3PHL3                         BANKMASK(PWM3PHL), 3
#define PWM3PHL4                         BANKMASK(PWM3PHL), 4
#define PWM3PHL5                         BANKMASK(PWM3PHL), 5
#define PWM3PHL6                         BANKMASK(PWM3PHL), 6
#define PWM3PHL7                         BANKMASK(PWM3PHL), 7
#define PWM3POL                          BANKMASK(PWM3CON), 4
#define PWM3PRH0                         BANKMASK(PWM3PRH), 0
#define PWM3PRH1                         BANKMASK(PWM3PRH), 1
#define PWM3PRH2                         BANKMASK(PWM3PRH), 2
#define PWM3PRH3                         BANKMASK(PWM3PRH), 3
#define PWM3PRH4                         BANKMASK(PWM3PRH), 4
#define PWM3PRH5                         BANKMASK(PWM3PRH), 5
#define PWM3PRH6                         BANKMASK(PWM3PRH), 6
#define PWM3PRH7                         BANKMASK(PWM3PRH), 7
#define PWM3PRIE                         BANKMASK(PWM3INTE), 0
#define PWM3PRIF                         BANKMASK(PWM3INTF), 0
#define PWM3PRL0                         BANKMASK(PWM3PRL), 0
#define PWM3PRL1                         BANKMASK(PWM3PRL), 1
#define PWM3PRL2                         BANKMASK(PWM3PRL), 2
#define PWM3PRL3                         BANKMASK(PWM3PRL), 3
#define PWM3PRL4                         BANKMASK(PWM3PRL), 4
#define PWM3PRL5                         BANKMASK(PWM3PRL), 5
#define PWM3PRL6                         BANKMASK(PWM3PRL), 6
#define PWM3PRL7                         BANKMASK(PWM3PRL), 7
#define PWM3PS0                          BANKMASK(PWM3CLKCON), 4
#define PWM3PS1                          BANKMASK(PWM3CLKCON), 5
#define PWM3PS2                          BANKMASK(PWM3CLKCON), 6
#define PWM3TMRH0                        BANKMASK(PWM3TMRH), 0
#define PWM3TMRH1                        BANKMASK(PWM3TMRH), 1
#define PWM3TMRH2                        BANKMASK(PWM3TMRH), 2
#define PWM3TMRH3                        BANKMASK(PWM3TMRH), 3
#define PWM3TMRH4                        BANKMASK(PWM3TMRH), 4
#define PWM3TMRH5                        BANKMASK(PWM3TMRH), 5
#define PWM3TMRH6                        BANKMASK(PWM3TMRH), 6
#define PWM3TMRH7                        BANKMASK(PWM3TMRH), 7
#define PWM3TMRL0                        BANKMASK(PWM3TMRL), 0
#define PWM3TMRL1                        BANKMASK(PWM3TMRL), 1
#define PWM3TMRL2                        BANKMASK(PWM3TMRL), 2
#define PWM3TMRL3                        BANKMASK(PWM3TMRL), 3
#define PWM3TMRL4                        BANKMASK(PWM3TMRL), 4
#define PWM3TMRL5                        BANKMASK(PWM3TMRL), 5
#define PWM3TMRL6                        BANKMASK(PWM3TMRL), 6
#define PWM3TMRL7                        BANKMASK(PWM3TMRL), 7
#define PWM4CS0                          BANKMASK(PWM4CLKCON), 0
#define PWM4CS1                          BANKMASK(PWM4CLKCON), 1
#define PWM4DCH0                         BANKMASK(PWM4DCH), 0
#define PWM4DCH1                         BANKMASK(PWM4DCH), 1
#define PWM4DCH2                         BANKMASK(PWM4DCH), 2
#define PWM4DCH3                         BANKMASK(PWM4DCH), 3
#define PWM4DCH4                         BANKMASK(PWM4DCH), 4
#define PWM4DCH5                         BANKMASK(PWM4DCH), 5
#define PWM4DCH6                         BANKMASK(PWM4DCH), 6
#define PWM4DCH7                         BANKMASK(PWM4DCH), 7
#define PWM4DCIE                         BANKMASK(PWM4INTE), 1
#define PWM4DCIF                         BANKMASK(PWM4INTF), 1
#define PWM4DCL0                         BANKMASK(PWM4DCL), 0
#define PWM4DCL1                         BANKMASK(PWM4DCL), 1
#define PWM4DCL2                         BANKMASK(PWM4DCL), 2
#define PWM4DCL3                         BANKMASK(PWM4DCL), 3
#define PWM4DCL4                         BANKMASK(PWM4DCL), 4
#define PWM4DCL5                         BANKMASK(PWM4DCL), 5
#define PWM4DCL6                         BANKMASK(PWM4DCL), 6
#define PWM4DCL7                         BANKMASK(PWM4DCL), 7
#define PWM4EN                           BANKMASK(PWM4CON), 7
#define PWM4EN_A                         BANKMASK(PWMEN), 3
#define PWM4IE                           BANKMASK(PIE3), 7
#define PWM4IF                           BANKMASK(PIR3), 7
#define PWM4LD                           BANKMASK(PWM4LDCON), 7
#define PWM4LDA_A                        BANKMASK(PWMLD), 3
#define PWM4LDM                          BANKMASK(PWM4LDCON), 6
#define PWM4LDS0                         BANKMASK(PWM4LDCON), 0
#define PWM4LDS1                         BANKMASK(PWM4LDCON), 1
#define PWM4MODE0                        BANKMASK(PWM4CON), 2
#define PWM4MODE1                        BANKMASK(PWM4CON), 3
#define PWM4OE                           BANKMASK(PWM4CON), 6
#define PWM4OFH0                         BANKMASK(PWM4OFH), 0
#define PWM4OFH1                         BANKMASK(PWM4OFH), 1
#define PWM4OFH2                         BANKMASK(PWM4OFH), 2
#define PWM4OFH3                         BANKMASK(PWM4OFH), 3
#define PWM4OFH4                         BANKMASK(PWM4OFH), 4
#define PWM4OFH5                         BANKMASK(PWM4OFH), 5
#define PWM4OFH6                         BANKMASK(PWM4OFH), 6
#define PWM4OFH7                         BANKMASK(PWM4OFH), 7
#define PWM4OFIE                         BANKMASK(PWM4INTE), 3
#define PWM4OFIF                         BANKMASK(PWM4INTF), 3
#define PWM4OFL0                         BANKMASK(PWM4OFL), 0
#define PWM4OFL1                         BANKMASK(PWM4OFL), 1
#define PWM4OFL2                         BANKMASK(PWM4OFL), 2
#define PWM4OFL3                         BANKMASK(PWM4OFL), 3
#define PWM4OFL4                         BANKMASK(PWM4OFL), 4
#define PWM4OFL5                         BANKMASK(PWM4OFL), 5
#define PWM4OFL6                         BANKMASK(PWM4OFL), 6
#define PWM4OFL7                         BANKMASK(PWM4OFL), 7
#define PWM4OFM0                         BANKMASK(PWM4OFCON), 5
#define PWM4OFM1                         BANKMASK(PWM4OFCON), 6
#define PWM4OFMC                         BANKMASK(PWM4OFCON), 4
#define PWM4OFS0                         BANKMASK(PWM4OFCON), 0
#define PWM4OFS1                         BANKMASK(PWM4OFCON), 1
#define PWM4OUT                          BANKMASK(PWM4CON), 5
#define PWM4OUT_A                        BANKMASK(PWMOUT), 3
#define PWM4PHH0                         BANKMASK(PWM4PHH), 0
#define PWM4PHH1                         BANKMASK(PWM4PHH), 1
#define PWM4PHH2                         BANKMASK(PWM4PHH), 2
#define PWM4PHH3                         BANKMASK(PWM4PHH), 3
#define PWM4PHH4                         BANKMASK(PWM4PHH), 4
#define PWM4PHH5                         BANKMASK(PWM4PHH), 5
#define PWM4PHH6                         BANKMASK(PWM4PHH), 6
#define PWM4PHH7                         BANKMASK(PWM4PHH), 7
#define PWM4PHIE                         BANKMASK(PWM4INTE), 2
#define PWM4PHIF                         BANKMASK(PWM4INTF), 2
#define PWM4PHL0                         BANKMASK(PWM4PHL), 0
#define PWM4PHL1                         BANKMASK(PWM4PHL), 1
#define PWM4PHL2                         BANKMASK(PWM4PHL), 2
#define PWM4PHL3                         BANKMASK(PWM4PHL), 3
#define PWM4PHL4                         BANKMASK(PWM4PHL), 4
#define PWM4PHL5                         BANKMASK(PWM4PHL), 5
#define PWM4PHL6                         BANKMASK(PWM4PHL), 6
#define PWM4PHL7                         BANKMASK(PWM4PHL), 7
#define PWM4POL                          BANKMASK(PWM4CON), 4
#define PWM4PRH0                         BANKMASK(PWM4PRH), 0
#define PWM4PRH1                         BANKMASK(PWM4PRH), 1
#define PWM4PRH2                         BANKMASK(PWM4PRH), 2
#define PWM4PRH3                         BANKMASK(PWM4PRH), 3
#define PWM4PRH4                         BANKMASK(PWM4PRH), 4
#define PWM4PRH5                         BANKMASK(PWM4PRH), 5
#define PWM4PRH6                         BANKMASK(PWM4PRH), 6
#define PWM4PRH7                         BANKMASK(PWM4PRH), 7
#define PWM4PRIE                         BANKMASK(PWM4INTE), 0
#define PWM4PRIF                         BANKMASK(PWM4INTF), 0
#define PWM4PRL0                         BANKMASK(PWM4PRL), 0
#define PWM4PRL1                         BANKMASK(PWM4PRL), 1
#define PWM4PRL2                         BANKMASK(PWM4PRL), 2
#define PWM4PRL3                         BANKMASK(PWM4PRL), 3
#define PWM4PRL4                         BANKMASK(PWM4PRL), 4
#define PWM4PRL5                         BANKMASK(PWM4PRL), 5
#define PWM4PRL6                         BANKMASK(PWM4PRL), 6
#define PWM4PRL7                         BANKMASK(PWM4PRL), 7
#define PWM4PS0                          BANKMASK(PWM4CLKCON), 4
#define PWM4PS1                          BANKMASK(PWM4CLKCON), 5
#define PWM4PS2                          BANKMASK(PWM4CLKCON), 6
#define PWM4TMRH0                        BANKMASK(PWM4TMRH), 0
#define PWM4TMRH1                        BANKMASK(PWM4TMRH), 1
#define PWM4TMRH2                        BANKMASK(PWM4TMRH), 2
#define PWM4TMRH3                        BANKMASK(PWM4TMRH), 3
#define PWM4TMRH4                        BANKMASK(PWM4TMRH), 4
#define PWM4TMRH5                        BANKMASK(PWM4TMRH), 5
#define PWM4TMRH6                        BANKMASK(PWM4TMRH), 6
#define PWM4TMRH7                        BANKMASK(PWM4TMRH), 7
#define PWM4TMRL0                        BANKMASK(PWM4TMRL), 0
#define PWM4TMRL1                        BANKMASK(PWM4TMRL), 1
#define PWM4TMRL2                        BANKMASK(PWM4TMRL), 2
#define PWM4TMRL3                        BANKMASK(PWM4TMRL), 3
#define PWM4TMRL4                        BANKMASK(PWM4TMRL), 4
#define PWM4TMRL5                        BANKMASK(PWM4TMRL), 5
#define PWM4TMRL6                        BANKMASK(PWM4TMRL), 6
#define PWM4TMRL7                        BANKMASK(PWM4TMRL), 7
#define RA0                              BANKMASK(PORTA), 0
#define RA0PPS0                          BANKMASK(RA0PPS), 0
#define RA0PPS1                          BANKMASK(RA0PPS), 1
#define RA0PPS2                          BANKMASK(RA0PPS), 2
#define RA0PPS3                          BANKMASK(RA0PPS), 3
#define RA1                              BANKMASK(PORTA), 1
#define RA1PPS0                          BANKMASK(RA1PPS), 0
#define RA1PPS1                          BANKMASK(RA1PPS), 1
#define RA1PPS2                          BANKMASK(RA1PPS), 2
#define RA1PPS3                          BANKMASK(RA1PPS), 3
#define RA2                              BANKMASK(PORTA), 2
#define RA2PPS0                          BANKMASK(RA2PPS), 0
#define RA2PPS1                          BANKMASK(RA2PPS), 1
#define RA2PPS2                          BANKMASK(RA2PPS), 2
#define RA2PPS3                          BANKMASK(RA2PPS), 3
#define RA3                              BANKMASK(PORTA), 3
#define RA4                              BANKMASK(PORTA), 4
#define RA4PPS0                          BANKMASK(RA4PPS), 0
#define RA4PPS1                          BANKMASK(RA4PPS), 1
#define RA4PPS2                          BANKMASK(RA4PPS), 2
#define RA4PPS3                          BANKMASK(RA4PPS), 3
#define RA5                              BANKMASK(PORTA), 5
#define RA5PPS0                          BANKMASK(RA5PPS), 0
#define RA5PPS1                          BANKMASK(RA5PPS), 1
#define RA5PPS2                          BANKMASK(RA5PPS), 2
#define RA5PPS3                          BANKMASK(RA5PPS), 3
#define RB4                              BANKMASK(PORTB), 4
#define RB4PPS0                          BANKMASK(RB4PPS), 0
#define RB4PPS1                          BANKMASK(RB4PPS), 1
#define RB4PPS2                          BANKMASK(RB4PPS), 2
#define RB4PPS3                          BANKMASK(RB4PPS), 3
#define RB5                              BANKMASK(PORTB), 5
#define RB5PPS0                          BANKMASK(RB5PPS), 0
#define RB5PPS1                          BANKMASK(RB5PPS), 1
#define RB5PPS2                          BANKMASK(RB5PPS), 2
#define RB5PPS3                          BANKMASK(RB5PPS), 3
#define RB6                              BANKMASK(PORTB), 6
#define RB6PPS0                          BANKMASK(RB6PPS), 0
#define RB6PPS1                          BANKMASK(RB6PPS), 1
#define RB6PPS2                          BANKMASK(RB6PPS), 2
#define RB6PPS3                          BANKMASK(RB6PPS), 3
#define RB7                              BANKMASK(PORTB), 7
#define RB7PPS0                          BANKMASK(RB7PPS), 0
#define RB7PPS1                          BANKMASK(RB7PPS), 1
#define RB7PPS2                          BANKMASK(RB7PPS), 2
#define RB7PPS3                          BANKMASK(RB7PPS), 3
#define RC0                              BANKMASK(PORTC), 0
#define RC0PPS0                          BANKMASK(RC0PPS), 0
#define RC0PPS1                          BANKMASK(RC0PPS), 1
#define RC0PPS2                          BANKMASK(RC0PPS), 2
#define RC0PPS3                          BANKMASK(RC0PPS), 3
#define RC1                              BANKMASK(PORTC), 1
#define RC1PPS0                          BANKMASK(RC1PPS), 0
#define RC1PPS1                          BANKMASK(RC1PPS), 1
#define RC1PPS2                          BANKMASK(RC1PPS), 2
#define RC1PPS3                          BANKMASK(RC1PPS), 3
#define RC2                              BANKMASK(PORTC), 2
#define RC2PPS0                          BANKMASK(RC2PPS), 0
#define RC2PPS1                          BANKMASK(RC2PPS), 1
#define RC2PPS2                          BANKMASK(RC2PPS), 2
#define RC2PPS3                          BANKMASK(RC2PPS), 3
#define RC3                              BANKMASK(PORTC), 3
#define RC3PPS0                          BANKMASK(RC3PPS), 0
#define RC3PPS1                          BANKMASK(RC3PPS), 1
#define RC3PPS2                          BANKMASK(RC3PPS), 2
#define RC3PPS3                          BANKMASK(RC3PPS), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC4PPS0                          BANKMASK(RC4PPS), 0
#define RC4PPS1                          BANKMASK(RC4PPS), 1
#define RC4PPS2                          BANKMASK(RC4PPS), 2
#define RC4PPS3                          BANKMASK(RC4PPS), 3
#define RC5                              BANKMASK(PORTC), 5
#define RC5PPS0                          BANKMASK(RC5PPS), 0
#define RC5PPS1                          BANKMASK(RC5PPS), 1
#define RC5PPS2                          BANKMASK(RC5PPS), 2
#define RC5PPS3                          BANKMASK(RC5PPS), 3
#define RC6                              BANKMASK(PORTC), 6
#define RC6PPS0                          BANKMASK(RC6PPS), 0
#define RC6PPS1                          BANKMASK(RC6PPS), 1
#define RC6PPS2                          BANKMASK(RC6PPS), 2
#define RC6PPS3                          BANKMASK(RC6PPS), 3
#define RC7                              BANKMASK(PORTC), 7
#define RC7PPS0                          BANKMASK(RC7PPS), 0
#define RC7PPS1                          BANKMASK(RC7PPS), 1
#define RC7PPS2                          BANKMASK(RC7PPS), 2
#define RC7PPS3                          BANKMASK(RC7PPS), 3
#define RCIDL                            BANKMASK(BAUDCON), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(PMCON1), 0
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define RXPPS0                           BANKMASK(RXPPS), 0
#define RXPPS1                           BANKMASK(RXPPS), 1
#define RXPPS2                           BANKMASK(RXPPS), 2
#define RXPPS3                           BANKMASK(RXPPS), 3
#define RXPPS4                           BANKMASK(RXPPS), 4
#define SBOREN                           BANKMASK(BORCON), 7
#define SCKP                             BANKMASK(BAUDCON), 4
#define SCS0                             BANKMASK(OSCCON), 0
#define SCS1                             BANKMASK(OSCCON), 1
#define SENDB                            BANKMASK(TXSTA), 3
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
#define SPEN                             BANKMASK(RCSTA), 7
#define SPLLEN                           BANKMASK(OSCCON), 7
#define SREN                             BANKMASK(RCSTA), 5
#define STKOVF                           BANKMASK(PCON), 7
#define STKUNF                           BANKMASK(PCON), 6
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CKIPPS0                        BANKMASK(T0CKIPPS), 0
#define T0CKIPPS1                        BANKMASK(T0CKIPPS), 1
#define T0CKIPPS2                        BANKMASK(T0CKIPPS), 2
#define T0CKIPPS3                        BANKMASK(T0CKIPPS), 3
#define T0CKIPPS4                        BANKMASK(T0CKIPPS), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKIPPS0                        BANKMASK(T1CKIPPS), 0
#define T1CKIPPS1                        BANKMASK(T1CKIPPS), 1
#define T1CKIPPS2                        BANKMASK(T1CKIPPS), 2
#define T1CKIPPS3                        BANKMASK(T1CKIPPS), 3
#define T1CKIPPS4                        BANKMASK(T1CKIPPS), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GPPS0                          BANKMASK(T1GPPS), 0
#define T1GPPS1                          BANKMASK(T1GPPS), 1
#define T1GPPS2                          BANKMASK(T1GPPS), 2
#define T1GPPS3                          BANKMASK(T1GPPS), 3
#define T1GPPS4                          BANKMASK(T1GPPS), 4
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define T2OUTPS0                         BANKMASK(T2CON), 3
#define T2OUTPS1                         BANKMASK(T2CON), 4
#define T2OUTPS2                         BANKMASK(T2CON), 5
#define T2OUTPS3                         BANKMASK(T2CON), 6
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
#define TMR2ON                           BANKMASK(T2CON), 2
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
#define TRMT                             BANKMASK(TXSTA), 1
#define TSEN                             BANKMASK(FVRCON), 5
#define TSRNG                            BANKMASK(FVRCON), 4
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define TUN5                             BANKMASK(OSCTUNE), 5
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
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
#define WUE                              BANKMASK(BAUDCON), 1
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

#endif // _PIC16LF1578_INC_
